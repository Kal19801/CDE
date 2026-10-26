// pilot_sweep_sweep02.c - assembled by scripts/sweep_assemble.py (r19)
// reuses fam8_assemble fix passes (zip oracle/in-batch protos/vft channel/data closure)
/* ---- r20 incomplete-type forward decls (pointer-position only) ---- */
typedef struct Darray_L_GraphicsResource__Type_G_ Darray_L_GraphicsResource__Type_G_;
typedef struct ShipGroupUI__GroupType ShipGroupUI__GroupType;
typedef struct util__Darray_L_class____util__WeakPtr_L_struct_ModuleCompartment_G___G util__Darray_L_class____util__WeakPtr_L_struct_ModuleCompartment_G___G;
typedef struct util__Darray_L_class_util__WeakPtr_L_class_Body_G___G util__Darray_L_class_util__WeakPtr_L_class_Body_G___G;
typedef struct util__Darray_L_class_util__WeakPtr_L_class_Fleet_G___G util__Darray_L_class_util__WeakPtr_L_class_Fleet_G___G;
typedef struct util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G;
typedef struct util__Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G util__Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G;
typedef struct util__Darray_L_class_util__WeakPtr_L_struct_PropellantTankCompartment_G___G util__Darray_L_class_util__WeakPtr_L_struct_PropellantTankCompartment_G___G;
typedef struct util__Maybe_L_struct_FixedOrbit_G util__Maybe_L_struct_FixedOrbit_G;
typedef struct util__Maybe_L_struct_util__Vec2_L_int_G___G util__Maybe_L_struct_util__Vec2_L_int_G___G;
typedef struct util__PhysicalState_L_struct____util__Vec3_L_double_G___G util__PhysicalState_L_struct____util__Vec3_L_double_G___G;
typedef struct util__WeakPtr_L_class_Fleet_G util__WeakPtr_L_class_Fleet_G;
typedef struct Darray_L_bool_P_G_ Darray_L_bool_P__G_;
typedef struct Darray_L_class_Module_P_G_ Darray_L_class_Module_P__G_;
typedef struct Darray_L_class_NewsItem_P_G_ Darray_L_class_NewsItem_P__G_;
typedef struct Darray_L_class_util__Reflectable_P_G_ Darray_L_class_util__Reflectable_P__G_;
#include "port_prelude.h"
#include "cde_win32_compat.h"
#include "cde_types_r20.h"
typedef union {
  struct {
    undefined8 _0_8_;
    undefined8 _4_8_;
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
  };
  undefined1 raw[32];
} slice_view;
/* ---- r21 hdr-conflict renames (decl stays OLD for game TUs; pilot impl+calls = NEW; linker aliases OLD -> NEW) ---- */
#undef BurnInfoCustomWidget__GetBurnStatusBarRanges
#define BurnInfoCustomWidget__GetBurnStatusBarRanges BurnInfoCustomWidget__GetBurnStatusBarRanges__r20
#undef BurnInfoCustomWidget__GetTimeLabel
#define BurnInfoCustomWidget__GetTimeLabel BurnInfoCustomWidget__GetTimeLabel__r20
#undef CompressibleFlowPoint__PrintDiagramFlowReport
#define CompressibleFlowPoint__PrintDiagramFlowReport CompressibleFlowPoint__PrintDiagramFlowReport__r20
#undef CraftBlueprintArmor__GetMinOrMaxArmorRadiusAtHeight_m
#define CraftBlueprintArmor__GetMinOrMaxArmorRadiusAtHeight_m CraftBlueprintArmor__GetMinOrMaxArmorRadiusAtHeight_m__r20
#undef EngineModule__GetAdvancedInfo
#define EngineModule__GetAdvancedInfo EngineModule__GetAdvancedInfo__r20
#undef EngineModule__GetEngineInfo
#define EngineModule__GetEngineInfo EngineModule__GetEngineInfo__r20
#undef FUN_004f1250
#define FUN_004f1250 FUN_004f1250__r20
#undef FUN_00501940
#define FUN_00501940 FUN_00501940__r20
#undef FUN_00502190
#define FUN_00502190 FUN_00502190__r20
#undef FUN_00504470
#define FUN_00504470 FUN_00504470__r20
#undef FUN_00504a20
#define FUN_00504a20 FUN_00504a20__r20
#undef FUN_00526b80
#define FUN_00526b80 FUN_00526b80__r20
#undef FUN_0056b290
#define FUN_0056b290 FUN_0056b290__r20
#undef FUN_0056b790
#define FUN_0056b790 FUN_0056b790__r20
#undef FUN_0056ba10
#define FUN_0056ba10 FUN_0056ba10__r20
#undef FUN_0056c380
#define FUN_0056c380 FUN_0056c380__r20
#undef FUN_0056c730
#define FUN_0056c730 FUN_0056c730__r20
#undef FUN_00576c40
#define FUN_00576c40 FUN_00576c40__r20
#undef FUN_0059d050
#define FUN_0059d050 FUN_0059d050__r20
#undef FUN_00676bd0
#define FUN_00676bd0 FUN_00676bd0__r20
#undef FUN_0067ddd0
#define FUN_0067ddd0 FUN_0067ddd0__r20
#undef FUN_00691640
#define FUN_00691640 FUN_00691640__r20
#undef FUN_006917b0
#define FUN_006917b0 FUN_006917b0__r20
#undef FUN_00691900
#define FUN_00691900 FUN_00691900__r20
#undef FUN_006939c0
#define FUN_006939c0 FUN_006939c0__r20
#undef FUN_006a1af0
#define FUN_006a1af0 FUN_006a1af0__r20
#undef FUN_006a1fa0
#define FUN_006a1fa0 FUN_006a1fa0__r20
#undef FUN_006bce80
#define FUN_006bce80 FUN_006bce80__r20
#undef FUN_006bd780
#define FUN_006bd780 FUN_006bd780__r20
#undef FUN_006cff50
#define FUN_006cff50 FUN_006cff50__r20
#undef FUN_006d48c0
#define FUN_006d48c0 FUN_006d48c0__r20
#undef FUN_006d95f0
#define FUN_006d95f0 FUN_006d95f0__r20
#undef FUN_006ea7d0
#define FUN_006ea7d0 FUN_006ea7d0__r20
#undef FUN_006fd550
#define FUN_006fd550 FUN_006fd550__r20
#undef FUN_0070c5d0
#define FUN_0070c5d0 FUN_0070c5d0__r20
#undef FUN_00822d60
#define FUN_00822d60 FUN_00822d60__r20
#undef FUN_00830bd0
#define FUN_00830bd0 FUN_00830bd0__r20
#undef FUN_00835950
#define FUN_00835950 FUN_00835950__r20
#undef FUN_0083ab30
#define FUN_0083ab30 FUN_0083ab30__r20
#undef FUN_0083d860
#define FUN_0083d860 FUN_0083d860__r20
#undef FUN_0085d3b0
#define FUN_0085d3b0 FUN_0085d3b0__r20
#undef FUN_0085d990
#define FUN_0085d990 FUN_0085d990__r20
#undef FUN_0088b470
#define FUN_0088b470 FUN_0088b470__r20
#undef FUN_00896350
#define FUN_00896350 FUN_00896350__r20
#undef FUN_008964e0
#define FUN_008964e0 FUN_008964e0__r20
#undef FUN_00896840
#define FUN_00896840 FUN_00896840__r20
#undef FUN_00897430
#define FUN_00897430 FUN_00897430__r20
#undef FUN_00897e90
#define FUN_00897e90 FUN_00897e90__r20
#undef FUN_0089bb40
#define FUN_0089bb40 FUN_0089bb40__r20
#undef FUN_008a1aa0
#define FUN_008a1aa0 FUN_008a1aa0__r20
#undef FUN_008aa500
#define FUN_008aa500 FUN_008aa500__r20
#undef FUN_008aa930
#define FUN_008aa930 FUN_008aa930__r20
#undef FUN_008aaad0
#define FUN_008aaad0 FUN_008aaad0__r20
#undef FUN_008ab980
#define FUN_008ab980 FUN_008ab980__r20
#undef FUN_008abb00
#define FUN_008abb00 FUN_008abb00__r20
#undef FUN_008abc80
#define FUN_008abc80 FUN_008abc80__r20
#undef FUN_008abe00
#define FUN_008abe00 FUN_008abe00__r20
#undef FUN_008b0c00
#define FUN_008b0c00 FUN_008b0c00__r20
#undef FUN_008bc180
#define FUN_008bc180 FUN_008bc180__r20
#undef FUN_008bc9c0
#define FUN_008bc9c0 FUN_008bc9c0__r20
#undef FUN_008cb160
#define FUN_008cb160 FUN_008cb160__r20
#undef FUN_008cb300
#define FUN_008cb300 FUN_008cb300__r20
#undef GameOverUI__GetNextMissionLabel
#define GameOverUI__GetNextMissionLabel GameOverUI__GetNextMissionLabel__r20
#undef HUDItineraryInfoPanel__GetItineraryStatusBarRanges
#define HUDItineraryInfoPanel__GetItineraryStatusBarRanges HUDItineraryInfoPanel__GetItineraryStatusBarRanges__r20
#undef HUDItineraryInfoPanel__GetMissionInfoColor
#define HUDItineraryInfoPanel__GetMissionInfoColor HUDItineraryInfoPanel__GetMissionInfoColor__r20
#undef PropellantTankCompartment__SiphonFromMultiplePropellantTanks
#define PropellantTankCompartment__SiphonFromMultiplePropellantTanks PropellantTankCompartment__SiphonFromMultiplePropellantTanks__r20
#undef RadiatorModule__GetRadiatorInfo
#define RadiatorModule__GetRadiatorInfo RadiatorModule__GetRadiatorInfo__r20
#undef RadiatorModule__GetSampleHeatInfo
#define RadiatorModule__GetSampleHeatInfo RadiatorModule__GetSampleHeatInfo__r20
#undef RefuelerModule__GetFuelingInfo
#define RefuelerModule__GetFuelingInfo RefuelerModule__GetFuelingInfo__r20
#undef RenderLoadingScreen
#define RenderLoadingScreen RenderLoadingScreen__r20
#undef ShipGroupUI__CanSplitUnits
#define ShipGroupUI__CanSplitUnits ShipGroupUI__CanSplitUnits__r20
#undef ShipGroupUI__CanUnsplitUnits
#define ShipGroupUI__CanUnsplitUnits ShipGroupUI__CanUnsplitUnits__r20
#undef ShipGroupUI__GetColorFromSelection
#define ShipGroupUI__GetColorFromSelection ShipGroupUI__GetColorFromSelection__r20
#undef ShipGroupUI__GetSelectColor
#define ShipGroupUI__GetSelectColor ShipGroupUI__GetSelectColor__r20
#undef ShipGroupUI__GetSplitOrder
#define ShipGroupUI__GetSplitOrder ShipGroupUI__GetSplitOrder__r20
#undef ThermalRocketSubModule__GetExhaustPlumeModelRatio_Memoize
#define ThermalRocketSubModule__GetExhaustPlumeModelRatio_Memoize ThermalRocketSubModule__GetExhaustPlumeModelRatio_Memoize__r20
#undef UICompartmentInfo__GetPowerBarTooltip
#define UICompartmentInfo__GetPowerBarTooltip UICompartmentInfo__GetPowerBarTooltip__r20
#undef UIModuleInfo__GetCostChartTitle
#define UIModuleInfo__GetCostChartTitle UIModuleInfo__GetCostChartTitle__r20
#undef UIModuleInfo__GetMassChartTitle
#define UIModuleInfo__GetMassChartTitle UIModuleInfo__GetMassChartTitle__r20
#undef UIWidget__GetParentOffsetLocation
#define UIWidget__GetParentOffsetLocation UIWidget__GetParentOffsetLocation__r20
#undef UIWidget__GetRootParent
#define UIWidget__GetRootParent UIWidget__GetRootParent__r20
#undef UIWidget__GetTheme
#define UIWidget__GetTheme UIWidget__GetTheme__r20
#undef __isa_available_init
#define __isa_available_init __isa_available_init__r20
#undef convert_image_to_DXT1
#define convert_image_to_DXT1 convert_image_to_DXT1__r20
/* ---- externs: stub-oracle names (K&R; ret types by call site) ---- */
extern int CraftInstance__GetWorkingCompartments_Clear(); /* K&R stub; ret by call site */
extern int Itinerary_Itinerary__o3(); /* K&R stub; ret by call site */
extern int SpacecraftComponent__GetEstimatedMaxAngularAcceleration_radians__s2_Clear(); /* K&R stub; ret by call site */
extern int TacticalManager_GetStrategicGame_Memoize(); /* K&R stub; ret by call site */
extern int TacticalManager__GetAllBodies_Clear(); /* K&R stub; ret by call site */
extern int TacticalManager__GetAllColliders_Clear(); /* K&R stub; ret by call site */
extern int ThermalRocketSubModule_GetGasExpansionPlume_MemoizedFunction(); /* K&R stub; ret by call site */
extern int util__Darray_class_NewsItem____Darray_class_NewsItem(); /* K&R stub; ret by call site */
extern int util__Darray_class_NewsItem____Darray_class_NewsItem__o2(); /* K&R stub; ret by call site */
extern int util__Darray_class_util__Reflectable____Darray_class_util__Reflectable__o2(); /* K&R stub; ret by call site */
extern int util__Darray_class_util__SharedPtr_struct_CollisionHit_____Darray_class_util__SharedPtr_struct_CollisionHit(); /* K&R stub; ret by call site */
extern int util__Darray_class_util__SharedPtr_struct_CollisionHit_____Darray_class_util__SharedPtr_struct_CollisionHit__o2(); /* K&R stub; ret by call site */
extern int util__Darray_class_util__SharedPtr_struct_ModuleCompartment_____Darray_class_util__SharedPtr_struct_ModuleCompartment(); /* K&R stub; ret by call site */
extern int util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(); /* K&R stub; ret by call site */
extern int util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2(); /* K&R stub; ret by call site */
extern int util__Darray_class_util__WeakPtr_struct_UIWidget_____Darray_class_util__WeakPtr_struct_UIWidget(); /* K&R stub; ret by call site */
extern int util__Darray_class_util__WeakPtr_struct_UIWidget_____Darray_class_util__WeakPtr_struct_UIWidget__o2(); /* K&R stub; ret by call site */
extern int util__SharedPtr_struct_AudioVoice___operator(); /* K&R stub; ret by call site */

//==== 0000490f10 00490f10_convert_image_to_DXT1 ====
// decompiled by BatchDecomp @ 00490f10 name=convert_image_to_DXT1 conv=__cdecl body=757

/* convert_image_to_DXT1 */

void __cdecl convert_image_to_DXT1(int param_1,int param_2,size_t *param_3)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  void *pvVar4;
  int iVar5;
  int in_ECX;
  size_t _Size;
  int in_EDX;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 *local_74;
  int local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined1 local_40[48];
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_58 = 0;
  *param_3 = 0;
  if ((((0 < in_EDX) && (0 < param_1)) && (in_ECX != 0)) && (param_2 - 1U < 4)) {
    _Size = (in_EDX + 3 >> 2) * (param_1 + 3 >> 2) * 8;
    *param_3 = _Size;
    pvVar4 = malloc(_Size);
    local_48 = 0;
    if (0 < param_1) {
      local_4c = param_1;
      local_50 = 0;
      do {
        if (0 < in_EDX) {
          local_74 = (undefined1 *)((int)pvVar4 + 1 + local_58);
          local_58 = local_58 + (in_EDX - 1U >> 2) * 8 + 8;
          iVar10 = 0;
          local_44 = in_EDX;
          do {
            iVar5 = 0;
            iVar1 = iVar10 + 4;
            iVar7 = 4;
            if (param_1 <= local_48 + 4) {
              iVar7 = local_4c;
            }
            iVar8 = 4;
            if (in_EDX <= iVar1) {
              iVar8 = local_44;
            }
            if (0 < iVar7) {
              iVar11 = (local_50 + iVar10) * param_2;
              iVar10 = iVar7;
              do {
                if (0 < iVar8) {
                  puVar6 = (undefined1 *)(in_ECX + iVar11);
                  puVar9 = (undefined1 *)(iVar11 + (uint)(2 < param_2) * 2 + in_ECX);
                  iVar12 = iVar8;
                  do {
                    local_40[iVar5] = *puVar6;
                    puVar2 = puVar6 + (2 < param_2);
                    puVar6 = puVar6 + param_2;
                    local_40[iVar5 + 1] = *puVar2;
                    uVar3 = *puVar9;
                    puVar9 = puVar9 + param_2;
                    local_40[iVar5 + 2] = uVar3;
                    iVar5 = iVar5 + 3;
                    iVar12 = iVar12 + -1;
                  } while (iVar12 != 0);
                }
                if (iVar8 < 4) {
                  iVar12 = 4 - iVar8;
                  do {
                    local_40[iVar5] = local_40[0];
                    local_40[iVar5 + 1] = local_40[1];
                    local_40[iVar5 + 2] = local_40[2];
                    iVar5 = iVar5 + 3;
                    iVar12 = iVar12 + -1;
                  } while (iVar12 != 0);
                }
                iVar11 = iVar11 + in_EDX * param_2;
                iVar10 = iVar10 + -1;
              } while (iVar10 != 0);
            }
            if (iVar7 < 4) {
              iVar7 = 4 - iVar7;
              do {
                local_40[iVar5] = local_40[0];
                local_40[iVar5 + 1] = local_40[1];
                local_40[iVar5 + 2] = local_40[2];
                local_40[iVar5 + 3] = local_40[0];
                local_40[iVar5 + 4] = local_40[1];
                local_40[iVar5 + 5] = local_40[2];
                local_40[iVar5 + 6] = local_40[0];
                local_40[iVar5 + 7] = local_40[1];
                local_40[iVar5 + 8] = local_40[2];
                local_40[iVar5 + 9] = local_40[0];
                local_40[iVar5 + 10] = local_40[1];
                local_40[iVar5 + 0xb] = local_40[2];
                iVar5 = iVar5 + 0xc;
                iVar7 = iVar7 + -1;
              } while (iVar7 != 0);
            }
            compress_DDS_color_block(&local_10);
            local_44 = local_44 + -4;
            local_74[(int)pvVar4 - ((int)pvVar4 + 1)] = local_10;
            *local_74 = local_f;
            local_74[1] = local_e;
            local_74[2] = local_d;
            local_74[3] = local_c;
            local_74[4] = local_b;
            local_74[5] = local_a;
            local_74[6] = local_9;
            local_74 = local_74 + 8;
            iVar10 = iVar1;
          } while (iVar1 < in_EDX);
        }
        local_48 = local_48 + 4;
        local_4c = local_4c + -4;
        local_50 = local_50 + in_EDX * 4;
      } while (local_48 < param_1);
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00004e2fa0 004e2fa0_GetNextMissionLabel ====
// decompiled by BatchDecomp @ 004e2fa0 name=GetNextMissionLabel conv=__thiscall body=417

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class Str_L_char_G_ __thiscall GameOverUI__GetNextMissionLabel(void)const  */

Str_L_char_G_ * __thiscall
GameOverUI__GetNextMissionLabel(GameOverUI *this,Str_L_char_G_ *__return_storage_ptr__)

{
  bool bVar1;
  Level *this_00;
  GameManager *this_01;
  DataParser *pDVar2;
  LocStr *pLVar3;
  Str_L_char_G_ *pSVar4;
  Str_L_char_G_ *pSVar5;
  HWND unaff_EDI;
  void *local_68[3];
  void *local_5c;
  void *local_50[3];
  void *local_44;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  undefined4 local_8;
  
  local_8 = 0;
  this_00 = StrategicManager__GetCurrentLevel(this->StrategicGame);
  this_01 = (GameManager *)Manager__GetParent(unaff_EDI);
  pDVar2 = GameManager__GetDataManager(this_01);
  bVar1 = Level__IsLastLevel(this_00,pDVar2);
  bVar1 = !bVar1;
  if (bVar1) {
    util__Str_char___Str_char__o5(&local_2c,"NextMission");
    local_14.Data = (char *)0x0;
    pLVar3 = (LocStr *)local_50;
    local_14.Capacity = 0;
    pSVar4 = &local_2c;
    local_14.Length = 0;
    pSVar5 = &local_14;
  }
  else {
    util__Str_char___Str_char__o5(&local_38,"GoToEnding");
    local_20.Data = (char *)0x0;
    pLVar3 = (LocStr *)local_68;
    local_20.Capacity = 0;
    pSVar4 = &local_38;
    local_20.Length = 0;
    pSVar5 = &local_20;
  }
  pLVar3 = (LocStr *)util__LocStr__LocStr(pLVar3,pSVar4,pSVar5);
  pSVar4 = util__LocStr__operator__o3(pLVar3);
  util__Str_char___Str_char(__return_storage_ptr__,pSVar4);
  if (bVar1) {
    if (local_44 != (void *)0x0) {
      operator_delete__(local_44);
      local_44 = (void *)0x0;
    }
    if (local_50[0] != (void *)0x0) {
      operator_delete__(local_50[0]);
      local_50[0] = (void *)0x0;
    }
  }
  if (bVar1) {
    if (local_14.Data != (char *)0x0) {
      operator_delete__(local_14.Data);
      local_14.Data = (char *)0x0;
    }
  }
  if (bVar1) {
    if (local_2c.Data != (char *)0x0) {
      operator_delete__(local_2c.Data);
      local_2c.Data = (char *)0x0;
    }
  }
  if (!bVar1) {
    if (local_5c != (void *)0x0) {
      operator_delete__(local_5c);
      local_5c = (void *)0x0;
    }
    if (local_68[0] != (void *)0x0) {
      operator_delete__(local_68[0]);
      local_68[0] = (void *)0x0;
    }
  }
  if (!bVar1) {
    if (local_20.Data != (char *)0x0) {
      operator_delete__(local_20.Data);
      local_20.Data = (char *)0x0;
    }
  }
  if ((local_38.Data != (char *)0x0) && (!bVar1)) {
    operator_delete__(local_38.Data);
  }
  return __return_storage_ptr__;
}


//==== 00004f1250 004f1250_FUN_004f1250 ====
extern undefined4 FUN_004f1050(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void FUN_004f1250(Darray_L_class_util__Reflectable_P__G_ *param_1, Darray_L_class_util__Reflectable_P__G_ *param_2,undefined4 param_3);

// decompiled by BatchDecomp @ 004f1250 name=FUN_004f1250 conv=unknown body=407

void FUN_004f1250(Darray_L_class_util__Reflectable_P__G_ *param_1,
                 Darray_L_class_util__Reflectable_P__G_ *param_2,undefined4 param_3)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  Darray_L_class_util__Reflectable_P__G_ *pDVar2;
  int iVar3;
  int iVar4;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  Darray_L_class_util__Reflectable_P__G_ *local_34;
  Darray_L_class_util__Reflectable_P__G_ *local_30;
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
    util__Darray_class_util__Reflectable____Darray_class_util__Reflectable(param_1,param_2);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_2c = (undefined **)0x0;
  pvStack_28 = (void *)0x0;
  uStack_24 = 0;
  uStack_20 = 0;
  util__Darray_class_util__Reflectable____Darray_class_util__Reflectable((Darray_L_util__Reflectable_P_G_ *)&local_2c,param_2);
  local_1c = (undefined **)0x0;
  pvStack_18 = (void *)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  util__Darray_class_util__Reflectable____Darray_class_util__Reflectable__o2((Darray_L_util__Reflectable_P_G_ *)&local_1c,iVar1);
  iVar3 = iStack_14;
  local_c = iVar1;
  util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&local_1c,&local_c);
  util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&local_1c,iVar3);
  iVar3 = 1;
  pDVar2 = (Darray_L_util__Reflectable_P_G_ *)&local_2c;
  local_34 = (Darray_L_util__Reflectable_P_G_ *)&local_1c;
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
          FUN_004f1050(local_30,local_34,&local_48,&local_44,&local_40,&local_3c,&local_c,param_3);
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
  util__Darray_class_util__Reflectable____Darray_class_util__Reflectable(param_1,pDVar2);
  local_1c = ((void *)(0x009199e4u));
  if (pvStack_18 != (void *)0x0) {
    operator_delete__(pvStack_18);
  }
  pvStack_18 = (void *)0x0;
  local_1c = ((void *)(0x00919488u));
  local_2c = ((void *)(0x009199e4u));
  if (pvStack_28 != (void *)0x0) {
    operator_delete__(pvStack_28);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000501940 00501940_FUN_00501940 ====
void FUN_00501940(Darray_L_struct_ArmorLayerBlueprint_G_ *param_1,int *param_2);

// decompiled by BatchDecomp @ 00501940 name=FUN_00501940 conv=unknown body=448

void FUN_00501940(Darray_L_struct_ArmorLayerBlueprint_G_ *param_1,int *param_2)

{
  undefined4 stack0xfffffffc;
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  uint uVar6;
  void *pvVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uStack_48;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar6 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  *(undefined ***)param_1 = ((void *)(0x0091fcd0u));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar6;
  if (((int)uVar6 < 0) || (0x3fffffff < (int)uVar6)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar6) {
    pvVar7 = operator_new__(-(uint)((int)((ulonglong)uVar6 * 0x38 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar6 * 0x38));
    if (pvVar7 == (void *)0x0) {
      pvVar7 = (void *)0x0;
    }
    else if (uVar6 != 0) {
      puVar8 = (undefined4 *)((int)pvVar7 + 0x10);
      do {
        puVar8[-4] = 0;
        puVar8[-2] = 0;
        puVar8[-1] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        puVar8[3] = 0;
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
        puVar8[8] = 0;
        puVar8[9] = 0;
        uVar6 = uVar6 - 1;
        puVar8 = puVar8 + 0xe;
      } while (uVar6 != 0);
    }
    iVar10 = 0;
    *(void **)(param_1 + 4) = pvVar7;
    if (0 < *(int *)(param_1 + 0xc)) {
      iVar9 = 0;
      do {
        puVar8 = (undefined4 *)(*(int *)(param_1 + 4) + iVar9);
        iVar10 = iVar10 + 1;
        iVar9 = iVar9 + 0x38;
        *puVar8 = 0;
        puVar8[1] = uStack_48;
        puVar8[2] = 0;
        puVar8[3] = 0;
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
        puVar8[8] = 0;
        puVar8[9] = 0;
        puVar8[10] = 0;
        puVar8[0xb] = 0;
        *(undefined8 *)(puVar8 + 0xc) = 0;
      } while (iVar10 < *(int *)(param_1 + 0xc));
    }
  }
  local_c = 0;
  iVar10 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  if (local_c < iVar10) {
    do {
      puVar8 = (undefined4 *)(**(code **)*param_2)(&local_c);
      if (/*3ff0000000000000*/1.0 <= *(double *)(puVar8 + 10)) {
        iVar10 = *(int *)(param_1 + 8);
        local_10 = iVar10 + 1;
        util__Darray_struct_ArmorLayerBlueprint___SetSize(param_1,&local_10);
        bVar5 = util__Darray_struct_ArmorLayerBlueprint___CheckSize(param_1,iVar10);
        if (bVar5) {
          iVar10 = *(int *)(param_1 + 8);
          uVar2 = puVar8[1];
          uVar3 = puVar8[2];
          uVar4 = puVar8[3];
          iVar9 = *(int *)(param_1 + 4);
          puVar1 = (undefined4 *)(iVar9 + -0x38 + iVar10 * 0x38);
          *puVar1 = *puVar8;
          puVar1[1] = uVar2;
          puVar1[2] = uVar3;
          puVar1[3] = uVar4;
          uVar2 = puVar8[5];
          uVar3 = puVar8[6];
          uVar4 = puVar8[7];
          puVar1 = (undefined4 *)(iVar9 + -0x28 + iVar10 * 0x38);
          *puVar1 = puVar8[4];
          puVar1[1] = uVar2;
          puVar1[2] = uVar3;
          puVar1[3] = uVar4;
          uVar2 = puVar8[9];
          uVar3 = puVar8[10];
          uVar4 = puVar8[0xb];
          puVar1 = (undefined4 *)(iVar9 + -0x18 + iVar10 * 0x38);
          *puVar1 = puVar8[8];
          puVar1[1] = uVar2;
          puVar1[2] = uVar3;
          puVar1[3] = uVar4;
          *(undefined8 *)(iVar9 + -8 + iVar10 * 0x38) = *(undefined8 *)(puVar8 + 0xc);
        }
      }
      local_c = local_c + 1;
      iVar10 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
    } while (local_c < iVar10);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000502190 00502190_FUN_00502190 ====
void FUN_00502190(int *param_1,Stack_L_struct_util__Vec2_L_double_G___G_ *param_2);

// decompiled by BatchDecomp @ 00502190 name=FUN_00502190 conv=unknown body=423

void FUN_00502190(int *param_1,Stack_L_struct_util__Vec2_L_double_G___G_ *param_2)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  undefined4 *puVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  double *pdVar9;
  int iVar10;
  double dVar11;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar8 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_c < iVar8) {
    do {
      pdVar9 = (double *)(**(code **)*param_1)(&local_c);
      do {
        iVar8 = *(int *)(param_2 + 4);
        if (iVar8 < 2) break;
        iVar1 = iVar8 + -2;
        if (((iVar1 < 1) && (iVar8 + -1 <= iVar1)) || ((iVar1 <= iVar8 + -1 && (-1 < iVar1)))) {
          bVar7 = true;
        }
        else {
          bVar7 = false;
        }
        if (!bVar7) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xbc
                          ,"Between(Index, 0, Size-1)",(char *)0x0);
          DebugBreak();
          iVar8 = *(int *)(param_2 + 4);
        }
        iVar10 = *(int *)param_2;
        dVar11 = *(double *)(iVar10 + iVar1 * 0x10);
        dVar3 = *(double *)(iVar10 + 8 + iVar1 * 0x10);
        if (iVar8 < 1) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xa2
                          ,"Size > 0",(char *)0x0);
          DebugBreak();
          iVar8 = *(int *)(param_2 + 4);
          iVar10 = *(int *)param_2;
        }
        dVar11 = (*(double *)(iVar8 * 0x10 + -0x10 + iVar10) - dVar11) * (pdVar9[1] - dVar3) -
                 (*(double *)(iVar8 * 0x10 + -8 + iVar10) - dVar3) * (*pdVar9 - dVar11);
        if ((dVar11 < 0.0) || (NAN(dVar11) != (dVar11 == 0.0))) {
          bVar7 = true;
          if (iVar8 != 0) {
            iVar8 = iVar8 + -1;
            *(int *)(param_2 + 4) = iVar8;
            *(int *)(param_2 + 0xc) = iVar8 * 0x10 + *(int *)param_2;
          }
        }
        else {
          bVar7 = false;
        }
      } while (bVar7);
      *(int *)(param_2 + 4) = iVar8 + 1;
      *(int *)(param_2 + 0xc) = (iVar8 + 1) * 0x10 + *(int *)param_2;
      bVar7 = util__Stack_struct_util__Vec2_double_____CheckSize(param_2,iVar8);
      if (bVar7) {
        uVar4 = *(undefined4 *)((int)pdVar9 + 4);
        uVar5 = *(undefined4 *)(pdVar9 + 1);
        uVar6 = *(undefined4 *)((int)pdVar9 + 0xc);
        puVar2 = (undefined4 *)(*(int *)param_2 + -0x10 + *(int *)(param_2 + 4) * 0x10);
        *puVar2 = *(undefined4 *)pdVar9;
        puVar2[1] = uVar4;
        puVar2[2] = uVar5;
        puVar2[3] = uVar6;
      }
      local_c = local_c + 1;
      iVar8 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
    } while (local_c < iVar8);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000504470 00504470_FUN_00504470 ====
void FUN_00504470(Darray_L_class_util__Darray_L_struct_util__Vec2_L_double_G___G___G_ *param_1,int *param_2, double *param_3);

// decompiled by BatchDecomp @ 00504470 name=FUN_00504470 conv=unknown body=455

void FUN_00504470(Darray_L_class_util__Darray_L_struct_util__Vec2_L_double_G___G___G_ *param_1,int *param_2,
                 double *param_3)

{
  undefined4 stack0xfffffffc;
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  bool bVar5;
  int iVar6;
  Darray_L_struct_util__Vec2_L_double_G___G_ *pDVar7;
  double *pdVar8;
  double dVar9;
  undefined **local_3c;
  void *local_38;
  double local_2c;
  undefined **local_24;
  void *pvStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  double *local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar6 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  util__Darray_class_util__Darray_struct_util__Vec2_double_______Darray_class_util__Darray_struct_util__Vec2_double__o2(param_1,iVar6);
  local_10 = 0;
  iVar6 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  if (local_10 < iVar6) {
    do {
      pDVar7 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)(**(code **)*param_2)(&local_10);
      util__Darray_struct_util__Vec2_double_____Darray_struct_util__Vec2_double((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_3c,pDVar7);
      local_2c = *(double *)(pDVar7 + 0x10);
      local_14 = param_3;
      local_24 = (undefined **)0x0;
      pvStack_20 = (void *)0x0;
      iStack_1c = 0;
      uStack_18 = 0;
      iVar6 = (*(code *)local_3c[3])();
      util__Darray_struct_util__Vec2_double_____Darray_struct_util__Vec2_double((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_24,iVar6);
      local_c = 0;
      iVar6 = (*(code *)local_3c[3])();
      pdVar4 = local_14;
      if (local_c < iVar6) {
        do {
          pdVar8 = (double *)(*(code *)*local_3c)(&local_c);
          iVar6 = iStack_1c;
          dVar1 = *pdVar4;
          dVar2 = *pdVar8;
          local_14 = (double *)(iStack_1c + 1);
          dVar9 = pdVar8[1] * /*3fb999999999999a*/0.1 + local_2c;
          dVar3 = *pdVar4;
          util__Darray_struct_util__Vec2_double_____SetSize((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_24,(int *)&local_14);
          bVar5 = util__Darray_struct_util__Vec2_double_____CheckSize((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_24,iVar6);
          if (bVar5) {
            *(double *)((int)pvStack_20 + iStack_1c * 0x10 + -0x10) = dVar1 * dVar2;
            *(double *)((int)pvStack_20 + iStack_1c * 0x10 + -8) = dVar9 * dVar3;
          }
          local_c = local_c + 1;
          iVar6 = (*(code *)local_3c[3])();
        } while (local_c < iVar6);
      }
      local_3c = ((void *)(0x00919ac4u));
      if (local_38 != (void *)0x0) {
        operator_delete__(local_38);
      }
      iVar6 = *(int *)(param_1 + 8);
      local_14 = (double *)(iVar6 + 1);
      util__Darray_class_util__Darray_struct_util__Vec2_double_______SetSize(param_1,(int *)&local_14);
      bVar5 = util__Darray_class_util__Darray_struct_util__Vec2_double_______CheckSize(param_1,iVar6);
      if (bVar5) {
        util__Darray_struct_util__Vec2_double_____operator
                  ((Darray_L_struct_util__Vec2_L_double_G___G_ *)
                   (*(int *)(param_1 + 8) * 0x10 + *(int *)(param_1 + 4) + -0x10),
                   (Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_24);
      }
      local_24 = ((void *)(0x00919ac4u));
      if (pvStack_20 != (void *)0x0) {
        operator_delete__(pvStack_20);
      }
      local_10 = local_10 + 1;
      pvStack_20 = (void *)0x0;
      local_24 = ((void *)(0x00919488u));
      iVar6 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
    } while (local_10 < iVar6);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000504a20 00504a20_FUN_00504a20 ====
extern undefined4 FUN_00504810(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void FUN_00504a20(Darray_L_struct_util__Vec2_L_double_G___G_ *param_1, Darray_L_struct_util__Vec2_L_double_G___G_ *param_2,undefined4 param_3);

// decompiled by BatchDecomp @ 00504a20 name=FUN_00504a20 conv=unknown body=407

void FUN_00504a20(Darray_L_struct_util__Vec2_L_double_G___G_ *param_1,
                 Darray_L_struct_util__Vec2_L_double_G___G_ *param_2,undefined4 param_3)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  Darray_L_struct_util__Vec2_L_double_G___G_ *pDVar2;
  int iVar3;
  int iVar4;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  Darray_L_struct_util__Vec2_L_double_G___G_ *local_34;
  Darray_L_struct_util__Vec2_L_double_G___G_ *local_30;
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
    util__Darray_struct_util__Vec2_double_____Darray_struct_util__Vec2_double(param_1,param_2);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_2c = (undefined **)0x0;
  pvStack_28 = (void *)0x0;
  uStack_24 = 0;
  uStack_20 = 0;
  util__Darray_struct_util__Vec2_double_____Darray_struct_util__Vec2_double((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_2c,param_2);
  local_1c = (undefined **)0x0;
  pvStack_18 = (void *)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  util__Darray_struct_util__Vec2_double_____Darray_struct_util__Vec2_double((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_1c,iVar1);
  iVar3 = iStack_14;
  local_c = iVar1;
  util__Darray_struct_util__Vec2_double_____SetSize((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_1c,&local_c);
  util__Darray_struct_util__Vec2_double_____CheckSize((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_1c,iVar3);
  iVar3 = 1;
  pDVar2 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_2c;
  local_34 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_1c;
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
          FUN_00504810(local_30,local_34,&local_48,&local_44,&local_40,&local_3c,&local_c,param_3);
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
  util__Darray_struct_util__Vec2_double_____Darray_struct_util__Vec2_double(param_1,pDVar2);
  local_1c = ((void *)(0x00919ac4u));
  if (pvStack_18 != (void *)0x0) {
    operator_delete__(pvStack_18);
  }
  pvStack_18 = (void *)0x0;
  local_1c = ((void *)(0x00919488u));
  local_2c = ((void *)(0x00919ac4u));
  if (pvStack_28 != (void *)0x0) {
    operator_delete__(pvStack_28);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000513b40 00513b40_GetMinOrMaxArmorRadiusAtHeight_m ====
// decompiled by BatchDecomp @ 00513b40 name=GetMinOrMaxArmorRadiusAtHeight_m conv=__thiscall body=510

/* public: double __thiscall CraftBlueprintArmor__GetMinOrMaxArmorRadiusAtHeight_m(struct
   Range_L_double_G_,double,bool)const  */

double __thiscall
CraftBlueprintArmor__GetMinOrMaxArmorRadiusAtHeight_m(CraftBlueprintArmor *this,Range_L_double_G_ param_1,double param_2,bool param_3)

{
  undefined4 stack0xfffffffc;
  CraftBlueprint *this_00;
  double dVar1;
  int iVar2;
  Darray_L_struct_util__Line2_L_double_G___G_ *pDVar3;
  float10 extraout_ST0;
  double dVar4;
  double dVar5;
  Darray_L_struct_util__Line2_L_double_G___G_ aDStack_5c[16];
  undefined4 uStack_4c;
  undefined **local_28;
  void *pvStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int local_18;
  char local_14;
  undefined8 local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = (param_1.Upper - param_1.Lower) * /*3fe0000000000000*/0.5 + param_1.Lower;
  dVar5 = GetTotalArmorHeight_m(this);
  dVar5 = local_10 / dVar5;
  iVar2 = (**(code **)((this->CraftBlueprintArmorMemoizationHandlerInstance).ResetFunctions.Size +
                      0xc))();
  ((slice_view *)&local_10)->_4_4_ = iVar2;
  do {
    ((slice_view *)&local_10)->_4_4_ = ((slice_view *)&local_10)->_4_4_ + -1;
    if (((slice_view *)&local_10)->_4_4_ < 0) {
      local_18 = 0;
      local_14 = '\0';
      goto LAB_00513c15;
    }
    iVar2 = (**(code **)(this->CraftBlueprintArmorMemoizationHandlerInstance).ResetFunctions.Size)()
    ;
    dVar4 = *(double *)(iVar2 + 0x30) * /*401921fb54442d18*/6.283185307179586;
    dVar1 = *(double *)(iVar2 + 0x28) * /*401921fb54442d18*/6.283185307179586 + dVar4;
  } while ((((dVar4 < param_2) || (param_2 < dVar1)) && ((dVar1 < param_2 || (param_2 < dVar4)))) ||
          (((*(double *)(iVar2 + 0x18) < dVar5 || (dVar5 < *(double *)(iVar2 + 0x20))) &&
           ((*(double *)(iVar2 + 0x20) < dVar5 || (dVar5 < *(double *)(iVar2 + 0x18)))))));
  local_18 = ((slice_view *)&local_10)->_4_4_;
  local_14 = '\x01';
LAB_00513c15:
  local_28 = (undefined **)0x0;
  pvStack_24 = (void *)0x0;
  uStack_20 = 0;
  uStack_1c = 0;
  if (local_14 == '\0') {
    this_00 = (CraftBlueprint *)this[1].GetInnerArmorSpline_m_MemoizedValue.Data.Capacity;
    CraftBlueprint__GetModuleSegments_m_Memoize(this_00);
    pDVar3 = (Darray_L_struct_util__Line2_L_double_G___G_ *)
             &(this_00->GetCostChartData_MemoizedValue).IsValidData;
    if ((char)(this_00->GetPowerUseChartData_MemoizedValue).Data.Capacity == '\0') {
      uStack_4c = 0x513cbd;
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  else {
    CraftBlueprintArmor__GetOuterArmorSegmentsByLayer_m_Memoize(this);
    if ((char)(this->GetAllLayersOuterPlateSegments_m_MemoizedValue).Data._pad_0x0_0 == '\0') {
      uStack_4c = 0x513c46;
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if (local_14 == '\0') {
      uStack_4c = 0x513c68;
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    pDVar3 = (Darray_L_struct_util__Line2_L_double_G___G_ *)
             (**(code **)(this->GetArmorPlateHeights_m_MemoizedValue).Data.Data)();
  }
  util__Darray_struct_util__Line2_double_____Darray_struct_util__Line2_double((Darray_L_struct_util__Line2_L_double_G___G_ *)&local_28,pDVar3);
  GetPolygonalArmorScaling(this,param_2);
  uStack_4c = ((slice_view *)&param_1.Lower)->_0_4_;
  util__Darray_struct_util__Line2_double_____Darray_struct_util__Line2_double(aDStack_5c,(Darray_L_struct_util__Line2_L_double_G___G_ *)&local_28);
  GetMinOrMaxSplineRadiusAtHeight_m(this);
  local_28 = ((void *)(0x00919ae8u));
  if (pvStack_24 != (void *)0x0) {
    operator_delete__(pvStack_24);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 0000526b80 00526b80_FUN_00526b80 ====
void FUN_00526b80(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_1,int *param_2);

// decompiled by BatchDecomp @ 00526b80 name=FUN_00526b80 conv=unknown body=447

void FUN_00526b80(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_1,int *param_2)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  ReferenceController *pRVar2;
  undefined4 uVar3;
  ReferenceController *this;
  uint *puVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar6 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  *(undefined ***)param_1 = ((void *)(0x0091e0b8u));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar6;
  if (((int)uVar6 < 0) || (0x3fffffff < (int)uVar6)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar6) {
    uVar9 = -(uint)((int)((ulonglong)uVar6 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 8);
    puVar7 = (uint *)operator_new__(-(uint)(0xfffffffb < uVar9) | uVar9 + 4);
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)0x0;
    }
    else {
      *puVar7 = uVar6;
      puVar7 = puVar7 + 1;
      puVar4 = puVar7;
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4 = puVar4 + 2;
      }
    }
    iVar10 = 0;
    *(uint **)(param_1 + 4) = puVar7;
    if (0 < *(int *)(param_1 + 0xc)) {
      do {
        iVar1 = *(int *)(param_1 + 4);
        pRVar2 = *(ReferenceController **)(iVar1 + 4 + iVar10 * 8);
        *(undefined4 *)(iVar1 + iVar10 * 8) = 0;
        *(undefined4 *)(iVar1 + 4 + iVar10 * 8) = 0;
        if (pRVar2 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar2);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(param_1 + 0xc));
    }
  }
  local_c = 0;
  iVar10 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  if (local_c < iVar10) {
    do {
      puVar8 = (undefined4 *)(**(code **)*param_2)(&local_c);
      pRVar2 = (ReferenceController *)puVar8[1];
      uVar3 = *puVar8;
      if (pRVar2 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar2);
        util__ReferenceController__AddWeakReference(pRVar2);
        util__ReferenceController__ReleaseWeakReference(pRVar2);
      }
      iVar10 = *(int *)(param_1 + 8);
      local_10 = iVar10 + 1;
      util__Darray_class_util__WeakPtr_class_Body_____SetSize(param_1,&local_10);
      bVar5 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(param_1,iVar10);
      if (bVar5) {
        iVar10 = *(int *)(param_1 + 8);
        iVar1 = *(int *)(param_1 + 4);
        this = *(ReferenceController **)(iVar1 + -4 + iVar10 * 8);
        *(undefined4 *)(iVar1 + -8 + iVar10 * 8) = uVar3;
        *(ReferenceController **)(iVar1 + -4 + iVar10 * 8) = pRVar2;
        if (pRVar2 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar2);
        }
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this);
        }
      }
      if (pRVar2 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(pRVar2);
      }
      local_c = local_c + 1;
      iVar10 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
    } while (local_c < iVar10);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000052dbe0 0052dbe0_GetCompartmentsFromModule ====
// decompiled by BatchDecomp @ 0052dbe0 name=GetCompartmentsFromModule conv=__thiscall body=425

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util__Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G __thiscall
   CraftInstance__GetCompartmentsFromModule(class Module const *)const  */

void __thiscall CraftInstance__GetCompartmentsFromModule(CraftInstance *this,Module *param_1)

{
  undefined4 stack0x00000008;
  undefined4 stack0xfffffffc;
  ReferenceController *pRVar1;
  ReferenceController *this_00;
  bool bVar2;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar3;
  int iVar4;
  Maybe_L_util__Darray_L_util__WeakPtr_L_ModuleCompartment_G___G___G_ *pMVar5;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_40[16];
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_30[16];
  bool local_20;
  int *local_1c;
  int local_18;
  int local_14;
  int *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((this->GetWorkingCompartments_MemoizedValue).IsValidData == false) {
    iVar4 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_c = iVar4 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_c);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar4);
    if (bVar2) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance__GetWorkingCompartments_Clear);
    }
    pDVar3 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
             GetWorkingCompartments_MemoizedFunction(this);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_30,pDVar3);
    local_20 = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetWorkingCompartments_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_30);
    (this->GetWorkingCompartments_MemoizedValue).IsValidData = local_20;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_30);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_40);
  }
  pMVar5 = &this->GetWorkingCompartments_MemoizedValue;
  if ((this->GetWorkingCompartments_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_10 = (int *)&stack0x00000008;
  param_1->_pad_0x0_0 = 0;
  param_1->_pad_0x0_0 = 0;
  param_1->_pad_0x0_0 = 0;
  param_1->_pad_0x0_0 = 0;
  iVar4 = (**(code **)(*(int *)&pMVar5->Data + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)param_1,iVar4);
  local_c = 0;
  iVar4 = (**(code **)(*(int *)&pMVar5->Data + 0xc))();
  if (local_c < iVar4) {
    do {
      local_1c = (int *)(**(code **)*(int *)&pMVar5->Data)(&local_c);
      pRVar1 = (ReferenceController *)local_1c[1];
      local_14 = *local_1c;
      if (pRVar1 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar1);
        bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
        if (!bVar2) {
          local_14 = 0;
        }
      }
      local_18 = *(int *)(local_14 + 0x38);
      local_14 = *local_10;
      if (pRVar1 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(pRVar1);
      }
      if (local_18 == local_14) {
        iVar4 = param_1->_pad_0x0_0;
        local_18 = iVar4 + 1;
        util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)param_1,&local_18);
        bVar2 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)param_1,iVar4);
        if (bVar2) {
          pRVar1 = *(ReferenceController **)(param_1->_pad_0x0_0 + -4 + param_1->_pad_0x0_0 * 8);
          iVar4 = param_1->_pad_0x0_0 + param_1->_pad_0x0_0 * 8;
          *(int *)(iVar4 + -8) = *local_1c;
          this_00 = (ReferenceController *)local_1c[1];
          *(ReferenceController **)(iVar4 + -4) = this_00;
          if (this_00 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this_00);
          }
          if (pRVar1 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar1);
          }
        }
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*(int *)&pMVar5->Data + 0xc))();
    } while (local_c < iVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000531ff0 00531ff0_GetWorkingCompartments_MemoizedFunction ====
// decompiled by BatchDecomp @ 00531ff0 name=GetWorkingCompartments_MemoizedFunction conv=__thiscall body=410

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: class util__Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G __thiscall
   CraftInstance__GetWorkingCompartments_MemoizedFunction(void)const  */

void __thiscall CraftInstance__GetWorkingCompartments_MemoizedFunction(CraftInstance *this)

{
  undefined4 stack0xfffffffc;
  Darray_L_util__SharedPtr_L_ModuleCompartment_G___G_ *pDVar1;
  ReferenceController *this_00;
  undefined4 uVar2;
  int iVar3;
  ReferenceController *this_01;
  char cVar4;
  bool bVar5;
  int iVar6;
  SharedPtr_L_struct_ModuleCompartment_G_ *pSVar7;
  undefined4 *puVar8;
  float10 fVar9;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *in_stack_00000004;
  int local_30;
  undefined **local_2c;
  SharedPtr_L_struct_ModuleCompartment_G_ *pSStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  double local_1c;
  double *local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_1c = GetCurrentPowerGeneration_W(this);
  local_14 = &local_1c;
  pDVar1 = &this->Compartments;
  local_2c = (undefined **)0x0;
  pSStack_28 = (SharedPtr_L_struct_ModuleCompartment_G_ *)0x0;
  uStack_24 = 0;
  uStack_20 = 0;
  iVar6 = (**(code **)(*(int *)pDVar1 + 0xc))();
  util__Darray_class_util__SharedPtr_struct_ModuleCompartment_____Darray_class_util__SharedPtr_struct_ModuleCompartment((Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *)&local_2c,iVar6);
  local_c = 0;
  iVar6 = (**(code **)(*(int *)pDVar1 + 0xc))();
  if (local_c < iVar6) {
    do {
      pSVar7 = (SharedPtr_L_struct_ModuleCompartment_G_ *)(**(code **)*(int *)pDVar1)(&local_c);
      cVar4 = (**(code **)(**(int **)pSVar7 + 0x18))();
      if (cVar4 == '\0') {
        fVar9 = (float10)(**(code **)(**(int **)(*(int *)pSVar7 + 0x38) + 0x9c))();
        if (*local_14 < (double)fVar9) {
          iVar6 = (**(code **)(**(int **)(*(int *)pSVar7 + 0x38) + 0x130))();
          if (iVar6 != 7) goto LAB_00532097;
        }
        util__Darray_class_util__SharedPtr_struct_ModuleCompartment_____Add((Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *)&local_2c,pSVar7);
      }
LAB_00532097:
      local_c = local_c + 1;
      iVar6 = (**(code **)(*(int *)pDVar1 + 0xc))();
    } while (local_c < iVar6);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  iVar6 = (*(code *)local_2c[3])();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body(in_stack_00000004,iVar6);
  local_10 = 0;
  iVar6 = (*(code *)local_2c[3])();
  if (local_10 < iVar6) {
    do {
      puVar8 = (undefined4 *)(*(code *)*local_2c)(&local_10);
      this_00 = (ReferenceController *)puVar8[1];
      uVar2 = *puVar8;
      if (this_00 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(this_00);
      }
      iVar6 = *(int *)(in_stack_00000004 + 8);
      local_30 = iVar6 + 1;
      util__Darray_class_util__WeakPtr_class_Body_____SetSize(in_stack_00000004,&local_30);
      bVar5 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(in_stack_00000004,iVar6);
      if (bVar5) {
        iVar6 = *(int *)(in_stack_00000004 + 8);
        iVar3 = *(int *)(in_stack_00000004 + 4);
        this_01 = *(ReferenceController **)(iVar3 + -4 + iVar6 * 8);
        *(undefined4 *)(iVar3 + -8 + iVar6 * 8) = uVar2;
        *(ReferenceController **)(iVar3 + -4 + iVar6 * 8) = this_00;
        if (this_00 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this_00);
        }
        if (this_01 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this_01);
        }
      }
      if (this_00 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(this_00);
      }
      local_10 = local_10 + 1;
      iVar6 = (*(code *)local_2c[3])();
    } while (local_10 < iVar6);
  }
  local_2c = ((void *)(0x009207b4u));
  if (pSStack_28 != (SharedPtr_L_struct_ModuleCompartment_G_ *)0x0) {
    util__SharedPtr_struct_ModuleCompartment____vector_deleting_destructor(pSStack_28,3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000056b290 0056b290_FUN_0056b290 ====
void FUN_0056b290(Str_L_char_G_ *param_1,Str_L_char_G_ *param_2,MetagameManager *param_3,undefined4 *param_4,char param_5);

// decompiled by BatchDecomp @ 0056b290 name=FUN_0056b290 conv=unknown body=628

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_0056b290(Str_L_char_G_ *param_1,Str_L_char_G_ *param_2,MetagameManager *param_3,undefined4 *param_4,char param_5)

{
  undefined4 stack0xfffffffc;
  Str_L_char_G_ *pSVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  char *pcVar7;
  Darray_L_class_util__Str_L_char_G___G_ local_48[16];
  GameManager *local_38;
  undefined1 local_34[8];
  StarDatum *local_2c;
  Str_L_char_G_ *local_24;
  undefined1 local_20[8];
  Str_L_char_G_ local_18;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_24 = param_2;
  pSVar1 = util__Str_char___PrettyPrinted(param_1,&local_18);
  if (pSVar1->Capacity < 1) {
    pcVar7 = "";
  }
  else {
    pcVar7 = pSVar1->Data;
  }
  util__Printf((Str_L_char_G_ *)(local_34 + 4),"Loading %s...",pcVar7);
  StartLoading((Str_L_char_G_ *)local_20);
  if ((undefined1 *)((slice_view *)&local_34)->_4_4_ != (undefined1 *)0x0) {
    operator_delete__((void *)((slice_view *)&local_34)->_4_4_);
    ((slice_view *)&local_34)->_4_4_ = (undefined1 *)0x0;
  }
  if (local_18.Data != (char *)0x0) {
    operator_delete__(local_18.Data);
  }
  local_18.Data = (char *)0x0;
  local_18.Capacity = 0;
  local_18.Length = 0;
  if (param_1->Capacity < 1) {
    pcVar7 = "";
  }
  else {
    pcVar7 = param_1->Data;
  }
  if ((int)param_4[1] < 1) {
    local_c = &cde_l2_0091985b_NullString
    ;
  }
  else {
    local_c = (undefined1 *)*param_4;
  }
  util__GetBasicResourcesPath((Str_L_char_G_ *)(local_34 + 4));
  puVar6 = &cde_l2_0091985b_NullString;
  if (0 < (int)local_2c) {
    puVar6 = (undefined1 *)((slice_view *)&local_34)->_4_4_;
  }
  util__Printf(&local_18,"%s/Data/%s%s.txt",puVar6,local_c,pcVar7);
  if ((undefined1 *)((slice_view *)&local_34)->_4_4_ != (undefined1 *)0x0) {
    operator_delete__((void *)((slice_view *)&local_34)->_4_4_);
  }
  MetagameManager__LoadEmissionSpectra(param_3,(MetagameManager *)local_34,(Str_L_char_G_ *)param_3,SUB41(&local_18,0));
  util__Str_char___operator__o10(local_24,(Str_L_char_G_ *)(local_34 + 4));
  if ((local_34[0] == '\0') && (param_5 != '\0')) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\infrastructure\\gameplay.h",0x24,
                    "Success || !CrashOnNotFoundOriginal",(char *)0x0);
    DebugBreak();
  }
  if ((undefined1 *)((slice_view *)&local_34)->_4_4_ != (undefined1 *)0x0) {
    operator_delete__((void *)((slice_view *)&local_34)->_4_4_);
  }
  if (local_18.Data != (char *)0x0) {
    operator_delete__(local_18.Data);
  }
  GameManager__BeginModLoading(local_38);
  piVar2 = (int *)GameManager__GetAllResourcePaths(local_38,SUB41(local_48,0));
  local_c = (undefined1 *)0x0;
  iVar3 = (**(code **)(*(int *)(uintptr_t)piVar2 + 0xc))();
  if ((int)local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*piVar2)(&local_c);
      local_18.Data = (char *)0x0;
      local_18.Capacity = 0;
      local_18.Length = 0;
      if (param_1->Capacity < 1) {
        pcVar7 = "";
      }
      else {
        pcVar7 = param_1->Data;
      }
      if ((int)param_4[1] < 1) {
        puVar6 = &cde_l2_0091985b_NullString;
      }
      else {
        puVar6 = (undefined1 *)*param_4;
      }
      if ((int)puVar4[1] < 1) {
        puVar5 = &cde_l2_0091985b_NullString;
      }
      else {
        puVar5 = (undefined1 *)*puVar4;
      }
      util__Printf(&local_18,"%s/Data/%s%s.txt",puVar5,puVar6,pcVar7);
      MetagameManager__LoadEmissionSpectra(param_3,(MetagameManager *)local_34,(Str_L_char_G_ *)param_3,SUB41(&local_18,0));
      util__Str_char___operator__o10(local_24,(Str_L_char_G_ *)(local_34 + 4));
      if ((undefined1 *)((slice_view *)&local_34)->_4_4_ != (undefined1 *)0x0) {
        operator_delete__((void *)((slice_view *)&local_34)->_4_4_);
        ((slice_view *)&local_34)->_4_4_ = (undefined1 *)0x0;
      }
      if (local_18.Data != (char *)0x0) {
        operator_delete__(local_18.Data);
        ((slice_view *)&local_18)->_0_8_ = ((slice_view *)&local_18)->_0_8_ & 0xffffffff00000000;
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)(uintptr_t)piVar2 + 0xc))();
    } while ((int)local_c < iVar3);
  }
  util__Darray_class_util__Str_char______Darray_class_util__Str_char(local_48);
  GameManager__EndModLoading(local_38);
  EndLoading((Timer *)local_20);
  GameManager__UpdateLoadingScreen(local_38);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000056b790 0056b790_FUN_0056b790 ====
void FUN_0056b790(Str_L_char_G_ *param_1,Str_L_char_G_ *param_2,MetagameManager *param_3,undefined4 *param_4,char param_5);

// decompiled by BatchDecomp @ 0056b790 name=FUN_0056b790 conv=unknown body=628

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_0056b790(Str_L_char_G_ *param_1,Str_L_char_G_ *param_2,MetagameManager *param_3,undefined4 *param_4,char param_5)

{
  undefined4 stack0xfffffffc;
  Str_L_char_G_ *pSVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  char *pcVar7;
  Darray_L_class_util__Str_L_char_G___G_ local_48[16];
  GameManager *local_38;
  undefined1 local_34[8];
  StarDatum *local_2c;
  Str_L_char_G_ *local_24;
  undefined1 local_20[8];
  Str_L_char_G_ local_18;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_24 = param_2;
  pSVar1 = util__Str_char___PrettyPrinted(param_1,&local_18);
  if (pSVar1->Capacity < 1) {
    pcVar7 = "";
  }
  else {
    pcVar7 = pSVar1->Data;
  }
  util__Printf((Str_L_char_G_ *)(local_34 + 4),"Loading %s...",pcVar7);
  StartLoading((Str_L_char_G_ *)local_20);
  if ((undefined1 *)((slice_view *)&local_34)->_4_4_ != (undefined1 *)0x0) {
    operator_delete__((void *)((slice_view *)&local_34)->_4_4_);
    ((slice_view *)&local_34)->_4_4_ = (undefined1 *)0x0;
  }
  if (local_18.Data != (char *)0x0) {
    operator_delete__(local_18.Data);
  }
  local_18.Data = (char *)0x0;
  local_18.Capacity = 0;
  local_18.Length = 0;
  if (param_1->Capacity < 1) {
    pcVar7 = "";
  }
  else {
    pcVar7 = param_1->Data;
  }
  if ((int)param_4[1] < 1) {
    local_c = &cde_l2_0091985b_NullString
    ;
  }
  else {
    local_c = (undefined1 *)*param_4;
  }
  util__GetBasicResourcesPath((Str_L_char_G_ *)(local_34 + 4));
  puVar6 = &cde_l2_0091985b_NullString;
  if (0 < (int)local_2c) {
    puVar6 = (undefined1 *)((slice_view *)&local_34)->_4_4_;
  }
  util__Printf(&local_18,"%s/Data/%s%s.txt",puVar6,local_c,pcVar7);
  if ((undefined1 *)((slice_view *)&local_34)->_4_4_ != (undefined1 *)0x0) {
    operator_delete__((void *)((slice_view *)&local_34)->_4_4_);
  }
  MetagameManager__LoadRefractiveIndexSpectra(param_3,(MetagameManager *)local_34,(Str_L_char_G_ *)param_3,SUB41(&local_18,0));
  util__Str_char___operator__o10(local_24,(Str_L_char_G_ *)(local_34 + 4));
  if ((local_34[0] == '\0') && (param_5 != '\0')) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\infrastructure\\gameplay.h",0x24,
                    "Success || !CrashOnNotFoundOriginal",(char *)0x0);
    DebugBreak();
  }
  if ((undefined1 *)((slice_view *)&local_34)->_4_4_ != (undefined1 *)0x0) {
    operator_delete__((void *)((slice_view *)&local_34)->_4_4_);
  }
  if (local_18.Data != (char *)0x0) {
    operator_delete__(local_18.Data);
  }
  GameManager__BeginModLoading(local_38);
  piVar2 = (int *)GameManager__GetAllResourcePaths(local_38,SUB41(local_48,0));
  local_c = (undefined1 *)0x0;
  iVar3 = (**(code **)(*(int *)(uintptr_t)piVar2 + 0xc))();
  if ((int)local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*piVar2)(&local_c);
      local_18.Data = (char *)0x0;
      local_18.Capacity = 0;
      local_18.Length = 0;
      if (param_1->Capacity < 1) {
        pcVar7 = "";
      }
      else {
        pcVar7 = param_1->Data;
      }
      if ((int)param_4[1] < 1) {
        puVar6 = &cde_l2_0091985b_NullString;
      }
      else {
        puVar6 = (undefined1 *)*param_4;
      }
      if ((int)puVar4[1] < 1) {
        puVar5 = &cde_l2_0091985b_NullString;
      }
      else {
        puVar5 = (undefined1 *)*puVar4;
      }
      util__Printf(&local_18,"%s/Data/%s%s.txt",puVar5,puVar6,pcVar7);
      MetagameManager__LoadRefractiveIndexSpectra(param_3,(MetagameManager *)local_34,(Str_L_char_G_ *)param_3,SUB41(&local_18,0));
      util__Str_char___operator__o10(local_24,(Str_L_char_G_ *)(local_34 + 4));
      if ((undefined1 *)((slice_view *)&local_34)->_4_4_ != (undefined1 *)0x0) {
        operator_delete__((void *)((slice_view *)&local_34)->_4_4_);
        ((slice_view *)&local_34)->_4_4_ = (undefined1 *)0x0;
      }
      if (local_18.Data != (char *)0x0) {
        operator_delete__(local_18.Data);
        ((slice_view *)&local_18)->_0_8_ = ((slice_view *)&local_18)->_0_8_ & 0xffffffff00000000;
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)(uintptr_t)piVar2 + 0xc))();
    } while ((int)local_c < iVar3);
  }
  util__Darray_class_util__Str_char______Darray_class_util__Str_char(local_48);
  GameManager__EndModLoading(local_38);
  EndLoading((Timer *)local_20);
  GameManager__UpdateLoadingScreen(local_38);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000056ba10 0056ba10_FUN_0056ba10 ====
void FUN_0056ba10(Darray_L_struct_ModulePlacer_G_ *param_1,int *param_2);

// decompiled by BatchDecomp @ 0056ba10 name=FUN_0056ba10 conv=unknown body=428

void FUN_0056ba10(Darray_L_struct_ModulePlacer_G_ *param_1,int *param_2)

{
  undefined4 stack0xfffffffc;
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  void *pvVar8;
  undefined8 *puVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined4 uStack_28;
  undefined4 uStack_18;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar7 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  *(undefined ***)param_1 = ((void *)(0x00920b98u));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar7;
  if (((int)uVar7 < 0) || (0x3fffffff < (int)uVar7)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar7) {
    pvVar8 = operator_new__(-(uint)((int)((ulonglong)uVar7 * 0x28 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar7 * 0x28));
    if (pvVar8 == (void *)0x0) {
      pvVar8 = (void *)0x0;
    }
    else if (uVar7 != 0) {
      puVar9 = (undefined8 *)((int)pvVar8 + 8);
      do {
        *(undefined4 *)(puVar9 + -1) = 0;
        *(undefined4 *)((int)puVar9 + -4) = 0;
        *puVar9 = 0;
        *(undefined4 *)(puVar9 + 1) = 0;
        puVar9[2] = 0;
        *(undefined4 *)(puVar9 + 3) = 0;
        uVar7 = uVar7 - 1;
        puVar9 = puVar9 + 5;
      } while (uVar7 != 0);
    }
    iVar12 = 0;
    *(void **)(param_1 + 4) = pvVar8;
    if (0 < *(int *)(param_1 + 0xc)) {
      iVar11 = 0;
      do {
        iVar3 = *(int *)(param_1 + 4);
        iVar11 = iVar11 + 0x28;
        iVar12 = iVar12 + 1;
        puVar1 = (undefined4 *)(iVar3 + -0x28 + iVar11);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1 = (undefined4 *)(iVar3 + -0x18 + iVar11);
        *puVar1 = 0;
        puVar1[1] = uStack_28;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1 = (undefined4 *)(iVar3 + -8 + iVar11);
        *puVar1 = 0;
        puVar1[1] = uStack_18;
      } while (iVar12 < *(int *)(param_1 + 0xc));
    }
  }
  local_c = 0;
  iVar12 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  if (local_c < iVar12) {
    do {
      piVar10 = (int *)(**(code **)*param_2)(&local_c);
      if (*piVar10 != 0) {
        iVar12 = *(int *)(param_1 + 8);
        local_10 = iVar12 + 1;
        util__Darray_struct_ModulePlacer___SetSize(param_1,&local_10);
        bVar6 = util__Darray_struct_ModulePlacer___CheckSize(param_1,iVar12);
        if (bVar6) {
          iVar12 = *(int *)(param_1 + 8);
          iVar11 = *(int *)(param_1 + 4);
          iVar3 = piVar10[1];
          iVar4 = piVar10[2];
          iVar5 = piVar10[3];
          piVar2 = (int *)(iVar11 + -0x28 + iVar12 * 0x28);
          *piVar2 = *piVar10;
          piVar2[1] = iVar3;
          piVar2[2] = iVar4;
          piVar2[3] = iVar5;
          iVar3 = piVar10[5];
          iVar4 = piVar10[6];
          iVar5 = piVar10[7];
          piVar2 = (int *)(iVar11 + -0x18 + iVar12 * 0x28);
          *piVar2 = piVar10[4];
          piVar2[1] = iVar3;
          piVar2[2] = iVar4;
          piVar2[3] = iVar5;
          iVar3 = piVar10[9];
          piVar2 = (int *)(iVar11 + -8 + iVar12 * 0x28);
          *piVar2 = piVar10[8];
          piVar2[1] = iVar3;
        }
      }
      local_c = local_c + 1;
      iVar12 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
    } while (local_c < iVar12);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000056c380 0056c380_FUN_0056c380 ====
void FUN_0056c380(Darray_L_struct_util__ClassMember_G_ *param_1,int *param_2);

// decompiled by BatchDecomp @ 0056c380 name=FUN_0056c380 conv=unknown body=405

void FUN_0056c380(Darray_L_struct_util__ClassMember_G_ *param_1,int *param_2)

{
  undefined4 stack0xfffffffc;
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  ReflectionInfoStruct_L_class_Material_G_ *pRVar4;
  Str_L_char_G_ *pSVar5;
  void *local_68[6];
  void *local_50;
  Str_L_char_G_ local_3c;
  char *local_30;
  int local_2c;
  int local_28;
  Str_L_char_G_ local_24;
  undefined1 local_18;
  undefined1 local_17;
  int local_14;
  undefined1 local_e;
  undefined1 local_d;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar2 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember(param_1,iVar2);
  local_c = 0;
  iVar2 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  if (local_c < iVar2) {
    do {
      uVar3 = (**(code **)*param_2)(&local_c);
      pRVar4 = Material__StaticGetReflectionInfo();
      pSVar5 = (Str_L_char_G_ *)(**(code **)(*(int *)pRVar4 + 8))(local_68,uVar3);
      if ((char)pSVar5[3].Capacity == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x12,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      util__Str_char___Str_char(&local_3c,pSVar5);
      local_30 = pSVar5[1].Data;
      local_2c = pSVar5[1].Capacity;
      local_28 = pSVar5[1].Length;
      util__Str_char___Str_char(&local_24,pSVar5 + 2);
      local_18 = *(undefined1 *)&pSVar5[3].Data;
      local_17 = *(undefined1 *)((int)&pSVar5[3].Data + 1);
      local_e = local_17;
      local_d = local_18;
      if (local_50 != (void *)0x0) {
        operator_delete__(local_50);
        local_50 = (void *)0x0;
      }
      if (local_68[0] != (void *)0x0) {
        operator_delete__(local_68[0]);
        local_68[0] = (void *)0x0;
      }
      iVar2 = *(int *)(param_1 + 8);
      local_14 = iVar2 + 1;
      util__Darray_struct_util__ClassMember___SetSize(param_1,&local_14);
      bVar1 = util__Darray_struct_util__ClassMember___CheckSize(param_1,iVar2);
      if (bVar1) {
        iVar2 = *(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 0x28;
        util__Str_char___operator__o8((Str_L_char_G_ *)(iVar2 + -0x28),&local_3c);
        *(char **)(iVar2 + -0x1c) = local_30;
        *(int *)(iVar2 + -0x18) = local_2c;
        *(int *)(iVar2 + -0x14) = local_28;
        util__Str_char___operator__o8((Str_L_char_G_ *)(iVar2 + -0x10),&local_24);
        *(undefined1 *)(iVar2 + -4) = local_d;
        *(undefined1 *)(iVar2 + -3) = local_e;
      }
      if (local_24.Data != (char *)0x0) {
        operator_delete__(local_24.Data);
      }
      if (local_3c.Data != (char *)0x0) {
        operator_delete__(local_3c.Data);
      }
      local_c = local_c + 1;
      iVar2 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
    } while (local_c < iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000056c730 0056c730_FUN_0056c730 ====
extern undefined4 FUN_0056c520(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void FUN_0056c730(Darray_L_bool_P__G_ *param_1,Darray_L_bool_P__G_ *param_2,undefined4 param_3);

// decompiled by BatchDecomp @ 0056c730 name=FUN_0056c730 conv=unknown body=407

void FUN_0056c730(Darray_L_bool_P__G_ *param_1,Darray_L_bool_P__G_ *param_2,undefined4 param_3)

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
          FUN_0056c520(local_30,local_34,&local_48,&local_44,&local_40,&local_3c,&local_c,param_3);
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


//==== 0000576c40 00576c40_FUN_00576c40 ====
void FUN_00576c40(int *param_1,undefined4 param_2);
extern undefined4 FUN_005772e0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00576c40 name=FUN_00576c40 conv=unknown body=398

void FUN_00576c40(int *param_1,undefined4 param_2)

{
  undefined4 stack0x0000000c;
  undefined4 stack0xfffffffc;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  ReferenceController *this;
  int iStack_34;
  ReferenceController *pRStack_30;
  int *piStack_2c;
  ReferenceController local_28;
  int *local_1c;
  int local_18;
  int local_14;
  ReferenceController *local_10;
  char local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piStack_2c = &local_18;
  local_28.Pointer = (void *)0x0;
  local_18 = 0;
  local_14 = 0;
  local_10 = (ReferenceController *)0x0;
  local_c = '\0';
  local_1c = (int *)0x0;
  FUN_005772e0(param_2,CONCAT44(piStack_2c,&stack0x0000000c),&local_1c);
  this = local_10;
  iStack_34 = local_14;
  if (local_c == '\0') {
    ((slice_view *)&local_28.StrongReferenceCount)->_0_1_ = 0;
    this = &local_28;
    bVar3 = false;
    bVar2 = false;
    bVar1 = true;
    iVar4 = 0;
    iStack_34 = 0;
    pRStack_30 = (ReferenceController *)0x0;
    piStack_2c = (int *)0x0;
  }
  else {
    local_28.WeakReferenceCount = local_18;
    if (local_10 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(local_10);
    }
    local_28.Pointer = local_1c;
    if (this != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this);
      if (this != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(this);
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this);
          util__ReferenceController__ReleaseWeakReference(this);
        }
      }
    }
    pRStack_30 = this;
    if (this != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this);
    }
    bVar3 = true;
    bVar2 = true;
    bVar1 = false;
    piStack_2c = (int *)local_28.Pointer;
    ((slice_view *)&local_28.StrongReferenceCount)->_0_1_ = 1;
    iVar4 = local_28.WeakReferenceCount;
  }
  local_28.Pointer = &local_28;
  local_28.WeakReferenceCount = (int)&piStack_2c;
  *param_1 = iVar4;
  param_1[1] = iStack_34;
  param_1[2] = (int)pRStack_30;
  if (pRStack_30 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRStack_30);
  }
  param_1[3] = (int)*(int **)local_28.WeakReferenceCount;
  *(char *)(param_1 + 4) = (char)*(int *)local_28.Pointer;
  if (bVar1) {
    if (pRStack_30 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRStack_30);
    }
  }
  if (bVar2) {
    if (pRStack_30 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRStack_30);
    }
  }
  if ((this != (ReferenceController *)0x0) && (bVar3)) {
    util__ReferenceController__ReleaseWeakReference(this);
  }
  if (local_10 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_10);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000591500 00591500_GetCostChartTitle ====
// decompiled by BatchDecomp @ 00591500 name=GetCostChartTitle conv=__thiscall body=755

/* WARNING: Removing unreachable block (ram,0x005916bc) */
/* WARNING: Removing unreachable block (ram,0x005916c9) */
/* WARNING: Removing unreachable block (ram,0x005916d9) */
/* WARNING: Removing unreachable block (ram,0x005916e3) */
/* private: class Str_L_char_G_ __thiscall UIModuleInfo__GetCostChartTitle(void)const  */

Str_L_char_G_ * __thiscall
UIModuleInfo__GetCostChartTitle(UIModuleInfo *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xffffff44;
  void *pvVar1;
  _func___cdecl_Module_ptr_void_ptr *p_Var2;
  Str_L_char_G_ SVar3;
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
  Module *pMVar14;
  Str_L_char_G_ *pSVar15;
  LocStr *pLVar16;
  Str_L_char_G_ *pSVar17;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ *pSVar18;
  Str_L_char_G_ *pSVar19;
  int unaff_EDI;
  double dVar20;
  char *in_stack_ffffff44;
  int iVar21;
  char *pcVar22;
  char *pcVar23;
  void *local_a4[3];
  void *local_98;
  LocStr local_8c[24];
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
  pvVar1 = (this->EditedModule).Getter.Callee;
  if ((pvVar1 == (void *)0x0) ||
     (p_Var2 = (this->EditedModule).Getter.CallbackFunction,
     p_Var2 == (_func___cdecl_Module_ptr_void_ptr *)0x0)) {
    pMVar14 = (this->EditedModule).Value;
  }
  else {
    pMVar14 = (*p_Var2)(pvVar1);
  }
  if (pMVar14 == (Module *)0x0) {
    pSVar19 = &local_28;
    local_28.Data = (char *)0x0;
    bVar13 = false;
    bVar12 = false;
    bVar11 = true;
    bVar10 = false;
    bVar9 = false;
    bVar8 = false;
    bVar7 = false;
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    local_28.Capacity = 0;
    local_28.Length = 0;
  }
  else {
    util__Str_char___Str_char__o5(&local_74,"EditedModule.Get()->GetTotalCost_c()");
    util__Str_char___Str_char__o5(&local_40,"Colon");
    pcVar22 = "Cost";
    iVar21 = 0x591566;
    util__Str_char___Str_char__o5(&local_34,"Cost");
    pcVar23 = (char *)(this->EditedModule).Getter.Callee;
    if ((pcVar23 == (char *)0x0) ||
       (p_Var2 = (this->EditedModule).Getter.CallbackFunction,
       p_Var2 == (_func___cdecl_Module_ptr_void_ptr *)0x0)) {
      pMVar14 = (this->EditedModule).Value;
    }
    else {
      iVar21 = 0x59157d;
      pMVar14 = (*p_Var2)(pcVar23);
      pcVar22 = pcVar23;
    }
    local_1c.Data = (char *)0x0;
    local_1c.Capacity = 0;
    local_1c.Length = 0;
    local_10.Data = (char *)0x0;
    local_10.Capacity = 0;
    local_10.Length = 0;
    GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff44,&local_74);
    dVar20 = Module__GetTotalCost_c(pMVar14);
    SVar3.Capacity = (int)pcVar22;
    SVar3.Data = (char *)iVar21;
    SVar3.Length = unaff_EDI;
    pSVar15 = Print(&local_68,(double)CONCAT44(in_stack_ffffff44,(int)((ulonglong)dVar20 >> 0x20)),
                    SVar3);
    pSVar19 = &local_50;
    pLVar16 = (LocStr *)util__LocStr__LocStr((LocStr *)local_a4,&local_40,&local_1c);
    pSVar17 = util__LocStr__operator__o3(pLVar16);
    pSVar18 = &local_5c;
    pLVar16 = (LocStr *)util__LocStr__LocStr(local_8c,&local_34,&local_10);
    this_00 = util__LocStr__operator__o3(pLVar16);
    pSVar18 = util__Str_char___operator(this_00,pSVar18,pSVar17);
    pSVar19 = util__Str_char___operator(pSVar18,pSVar19,pSVar15);
    bVar13 = true;
    bVar12 = true;
    bVar11 = false;
    bVar10 = true;
    bVar9 = true;
    bVar8 = true;
    bVar7 = true;
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
  }
  pcVar23 = local_28.Data;
  util__Str_char___Str_char(__return_storage_ptr__,pSVar19);
  if ((bVar11) && (pcVar23 != (char *)0x0)) {
    operator_delete__(pcVar23);
  }
  if ((bVar12) && (local_50.Data != (char *)0x0)) {
    operator_delete__(local_50.Data);
    local_50.Data = (char *)0x0;
  }
  if ((bVar13) && (local_5c.Data != (char *)0x0)) {
    operator_delete__(local_5c.Data);
    local_5c.Data = (char *)0x0;
  }
  if ((bVar5) && (local_10.Data != (char *)0x0)) {
    operator_delete__(local_10.Data);
    local_10.Data = (char *)0x0;
  }
  if (bVar6) {
    if (local_98 != (void *)0x0) {
      operator_delete__(local_98);
      local_98 = (void *)0x0;
    }
    if (local_a4[0] != (void *)0x0) {
      operator_delete__(local_a4[0]);
      local_a4[0] = (void *)0x0;
    }
  }
  if ((bVar7) && (local_1c.Data != (char *)0x0)) {
    operator_delete__(local_1c.Data);
    local_1c.Data = (char *)0x0;
  }
  if ((bVar8) && (local_68.Data != (char *)0x0)) {
    operator_delete__(local_68.Data);
    local_68.Data = (char *)0x0;
  }
  if ((bVar9) && (local_34.Data != (char *)0x0)) {
    operator_delete__(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if ((bVar10) && (local_40.Data != (char *)0x0)) {
    operator_delete__(local_40.Data);
    local_40.Data = (char *)0x0;
  }
  if ((local_74.Data != (char *)0x0) && (bVar4)) {
    operator_delete__(local_74.Data);
  }
  return __return_storage_ptr__;
}


//==== 0000591980 00591980_GetMassChartTitle ====
// decompiled by BatchDecomp @ 00591980 name=GetMassChartTitle conv=__thiscall body=638

/* private: class Str_L_char_G_ __thiscall UIModuleInfo__GetMassChartTitle(void)const  */

Str_L_char_G_ * __thiscall
UIModuleInfo__GetMassChartTitle(UIModuleInfo *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xffffff5c;
  void *pvVar1;
  _func___cdecl_Module_ptr_void_ptr *p_Var2;
  Str_L_char_G_ SVar3;
  Module *pMVar4;
  Module *pMVar5;
  Str_L_char_G_ *pSVar6;
  LocStr *pLVar7;
  Str_L_char_G_ *pSVar8;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ *pSVar9;
  int unaff_EDI;
  float10 fVar10;
  char *in_stack_ffffff5c;
  int iVar11;
  Str_L_char_G_ *__return_storage_ptr___00;
  char *pcVar12;
  void *local_90[3];
  void *local_84;
  void *local_78[3];
  void *local_6c;
  Str_L_char_G_ local_60;
  Str_L_char_G_ local_54;
  Str_L_char_G_ local_48;
  Str_L_char_G_ local_3c;
  Str_L_char_G_ local_30;
  Str_L_char_G_ local_24;
  Str_L_char_G_ local_18;
  double local_c;
  
  pvVar1 = (this->EditedModule).Getter.Callee;
  if ((pvVar1 == (void *)0x0) ||
     (p_Var2 = (this->EditedModule).Getter.CallbackFunction,
     p_Var2 == (_func___cdecl_Module_ptr_void_ptr *)0x0)) {
    pMVar4 = (this->EditedModule).Value;
  }
  else {
    pMVar4 = (*p_Var2)(pvVar1);
  }
  if (pMVar4 == (Module *)0x0) {
    __return_storage_ptr__->Data = (char *)0x0;
    __return_storage_ptr__->Capacity = 0;
    __return_storage_ptr__->Length = 0;
    return __return_storage_ptr__;
  }
  pvVar1 = (this->EditedModule).Getter.Callee;
  if ((pvVar1 == (void *)0x0) ||
     (p_Var2 = (this->EditedModule).Getter.CallbackFunction,
     p_Var2 == (_func___cdecl_Module_ptr_void_ptr *)0x0)) {
    pMVar4 = (this->EditedModule).Value;
  }
  else {
    pMVar4 = (*p_Var2)(pvVar1);
  }
  pvVar1 = (this->EditedModule).Getter.Callee;
  if ((pvVar1 == (void *)0x0) ||
     (p_Var2 = (this->EditedModule).Getter.CallbackFunction,
     p_Var2 == (_func___cdecl_Module_ptr_void_ptr *)0x0)) {
    pMVar5 = (this->EditedModule).Value;
  }
  else {
    pMVar5 = (*p_Var2)(pvVar1);
  }
  fVar10 = (float10)(**(code **)(*(int *)pMVar5 + 0x8c))();
  local_c = (double)fVar10;
  fVar10 = (float10)(**(code **)(*(int *)pMVar4 + 0x88))();
  local_c = (double)(fVar10 + (float10)local_c);
  util__Str_char___Str_char__o5(&local_60,"Mass_kg");
  util__Str_char___Str_char__o5(&local_3c,"Colon");
  pcVar12 = "Mass";
  iVar11 = 0x591a60;
  util__Str_char___Str_char__o5(&local_30,"Mass");
  local_24.Data = (char *)0x0;
  local_24.Capacity = 0;
  local_24.Length = 0;
  local_18.Data = (char *)0x0;
  local_18.Capacity = 0;
  local_18.Length = 0;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff5c,&local_60);
  SVar3.Capacity = (int)pcVar12;
  SVar3.Data = (char *)iVar11;
  SVar3.Length = unaff_EDI;
  pSVar6 = Print(&local_54,(double)CONCAT44(in_stack_ffffff5c,(int)((ulonglong)local_c >> 0x20)),
                 SVar3);
  __return_storage_ptr___00 = __return_storage_ptr__;
  pLVar7 = (LocStr *)util__LocStr__LocStr((LocStr *)local_90,&local_3c,&local_24);
  pSVar8 = util__LocStr__operator__o3(pLVar7);
  pSVar9 = &local_48;
  pLVar7 = (LocStr *)util__LocStr__LocStr((LocStr *)local_78,&local_30,&local_18);
  this_00 = util__LocStr__operator__o3(pLVar7);
  pSVar9 = util__Str_char___operator(this_00,pSVar9,pSVar8);
  util__Str_char___operator(pSVar9,__return_storage_ptr___00,pSVar6);
  if (local_48.Data != (char *)0x0) {
    operator_delete__(local_48.Data);
    local_48.Data = (char *)0x0;
  }
  if (local_6c != (void *)0x0) {
    operator_delete__(local_6c);
    local_6c = (void *)0x0;
  }
  if (local_78[0] != (void *)0x0) {
    operator_delete__(local_78[0]);
    local_78[0] = (void *)0x0;
  }
  if (local_18.Data != (char *)0x0) {
    operator_delete__(local_18.Data);
    local_18.Data = (char *)0x0;
  }
  if (local_84 != (void *)0x0) {
    operator_delete__(local_84);
    local_84 = (void *)0x0;
  }
  if (local_90[0] != (void *)0x0) {
    operator_delete__(local_90[0]);
    local_90[0] = (void *)0x0;
  }
  if (local_24.Data != (char *)0x0) {
    operator_delete__(local_24.Data);
    local_24.Data = (char *)0x0;
  }
  if (local_54.Data != (char *)0x0) {
    operator_delete__(local_54.Data);
    local_54.Data = (char *)0x0;
  }
  if (local_30.Data != (char *)0x0) {
    operator_delete__(local_30.Data);
    local_30.Data = (char *)0x0;
  }
  if (local_3c.Data != (char *)0x0) {
    operator_delete__(local_3c.Data);
    local_3c.Data = (char *)0x0;
  }
  if (local_60.Data != (char *)0x0) {
    operator_delete__(local_60.Data);
  }
  return __return_storage_ptr__;
}


//==== 000059d050 0059d050_FUN_0059d050 ====
void FUN_0059d050(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_1,int *param_2);

// decompiled by BatchDecomp @ 0059d050 name=FUN_0059d050 conv=unknown body=419

void FUN_0059d050(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_1,int *param_2)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  ReferenceController *pRVar2;
  ReferenceController *this;
  uint *puVar3;
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar5 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  *(undefined ***)param_1 = ((void *)(0x0091e0b8u));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar5;
  if (((int)uVar5 < 0) || (0x3fffffff < (int)uVar5)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar5) {
    uVar8 = -(uint)((int)((ulonglong)uVar5 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 8);
    puVar6 = (uint *)operator_new__(-(uint)(0xfffffffb < uVar8) | uVar8 + 4);
    if (puVar6 == (uint *)0x0) {
      puVar6 = (uint *)0x0;
    }
    else {
      *puVar6 = uVar5;
      puVar6 = puVar6 + 1;
      puVar3 = puVar6;
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3 = puVar3 + 2;
      }
    }
    iVar9 = 0;
    *(uint **)(param_1 + 4) = puVar6;
    if (0 < *(int *)(param_1 + 0xc)) {
      do {
        iVar1 = *(int *)(param_1 + 4);
        pRVar2 = *(ReferenceController **)(iVar1 + 4 + iVar9 * 8);
        *(undefined4 *)(iVar1 + iVar9 * 8) = 0;
        *(undefined4 *)(iVar1 + 4 + iVar9 * 8) = 0;
        if (pRVar2 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar2);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(param_1 + 0xc));
    }
  }
  local_c = 0;
  iVar9 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  if (local_c < iVar9) {
    do {
      piVar7 = (int *)(**(code **)*param_2)(&local_c);
      if (((*piVar7 != 0) && ((ReferenceController *)piVar7[1] != (ReferenceController *)0x0)) &&
         (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar7[1]),
         bVar4)) {
        iVar9 = *(int *)(param_1 + 8);
        local_10 = iVar9 + 1;
        util__Darray_class_util__WeakPtr_class_Body_____SetSize(param_1,&local_10);
        bVar4 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(param_1,iVar9);
        if (bVar4) {
          pRVar2 = *(ReferenceController **)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 8)
          ;
          iVar9 = *(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 8;
          *(int *)(iVar9 + -8) = *piVar7;
          this = (ReferenceController *)piVar7[1];
          *(ReferenceController **)(iVar9 + -4) = this;
          if (this != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this);
          }
          if (pRVar2 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar2);
          }
        }
      }
      local_c = local_c + 1;
      iVar9 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
    } while (local_c < iVar9);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005a2070 005a2070_SetTargetCompartments ====
// decompiled by BatchDecomp @ 005a2070 name=SetTargetCompartments conv=__thiscall body=380

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall ModuleCompartment__SetTargetCompartments(class util__Darray_L_class____util__WeakPtr_L_struct_ModuleCompartment_G___G const &) */

void __thiscall
ModuleCompartment__SetTargetCompartments(ModuleCompartment *this,Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *param_1)

{
  undefined4 stack0xffffffdc;
  undefined4 stack0xfffffffc;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *this_00;
  int *piVar1;
  ReferenceController *this_01;
  ReferenceController *this_02;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  Darray_L_util__WeakPtr_L_ModuleCompartment_G___G_ *this_03;
  ReferenceController *local_20;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *local_1c;
  int local_18;
  ModuleCompartment *local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  this_03 = &this->TargetCompartments;
  local_14 = this;
  iVar3 = (**(code **)(*(int *)&this->TargetCompartments + 0xc))();
  if (iVar3 != 0) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\modules\\compartments.cpp",
                    0x5e,"TargetCompartments.Num() == 0",(char *)0x0);
    DebugBreak();
  }
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)this_03,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)param_1);
  local_c = 0;
  iVar3 = (**(code **)(*(int *)this_03 + 0xc))();
  if (local_c < iVar3) {
    do {
      piVar4 = (int *)(**(code **)*(int *)this_03)(&local_c);
      if (((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]),
         !bVar2)) {
        *piVar4 = 0;
      }
      iVar3 = *piVar4;
      piVar5 = (int *)util__GetParentOffsetLocation((SpacecraftComponent *)&stack0xffffffdc);
      piVar6 = *(int **)(iVar3 + 0x80);
      this_00 = (Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)(iVar3 + 0x7c);
      local_10 = *(int *)(iVar3 + 0x84);
      piVar1 = piVar6 + local_10 * 2;
      local_1c = this_00;
      if (piVar6 != piVar1) {
        do {
          if ((piVar5[1] == piVar6[1]) && (*piVar5 == *piVar6)) goto LAB_005a2189;
          piVar6 = piVar6 + 2;
        } while (piVar6 != piVar1);
      }
      local_18 = local_10 + 1;
      util__Darray_class_util__WeakPtr_class_Body_____SetSize(this_00,&local_18);
      bVar2 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(this_00,local_10);
      if (bVar2) {
        this_01 = *(ReferenceController **)
                   (*(int *)(iVar3 + 0x80) + -4 + *(int *)(iVar3 + 0x84) * 8);
        iVar3 = *(int *)(iVar3 + 0x80) + *(int *)(iVar3 + 0x84) * 8;
        *(int *)(iVar3 + -8) = *piVar5;
        this_02 = (ReferenceController *)piVar5[1];
        *(ReferenceController **)(iVar3 + -4) = this_02;
        if (this_02 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this_02);
        }
        if (this_01 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this_01);
        }
      }
LAB_005a2189:
      if (local_20 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_20);
      }
      if (((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]),
         !bVar2)) {
        *piVar4 = 0;
      }
      (**(code **)(*(int *)*piVar4 + 0xa0))();
      this = local_14;
      this_03 = &local_14->TargetCompartments;
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)&local_14->TargetCompartments + 0xc))();
    } while (local_c < iVar3);
  }
  (**(code **)(*(int *)this + 0xa0))();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005b26a0 005b26a0_GetAdvancedInfo ====
// decompiled by BatchDecomp @ 005b26a0 name=GetAdvancedInfo conv=__thiscall body=482

/* public: virtual class Str_L_char_G_ __thiscall EngineModule__GetAdvancedInfo(void)const  */

Str_L_char_G_ * __thiscall
EngineModule__GetAdvancedInfo(EngineModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xffffff80;
  Str_L_char_G_ SVar1;
  Str_L_char_G_ SVar2;
  LocStr *this_00;
  Str_L_char_G_ *pSVar3;
  int unaff_EDI;
  float10 fVar4;
  char *in_stack_ffffff80;
  int iVar5;
  char *pcVar6;
  int iVar7;
  void *local_6c[3];
  void *local_60;
  Str_L_char_G_ local_54;
  Str_L_char_G_ local_48;
  Str_L_char_G_ local_3c;
  Str_L_char_G_ local_30;
  Str_L_char_G_ local_24;
  Str_L_char_G_ local_18;
  double local_c;
  
  util__Str_char___Str_char__o5(&local_54,"GetMaxMassFlowRate_kg__s()");
  util__Str_char___Str_char__o5(&local_30,"GetThrustPower_W()");
  pcVar6 = "InfoBox EngineAdvancedInfo";
  iVar5 = 0x5b26d1;
  util__Str_char___Str_char__o5(&local_24,"InfoBox EngineAdvancedInfo");
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff80,&local_54);
  fVar4 = (float10)(**(code **)(*(int *)this + 0x154))();
  SVar1.Capacity = (int)pcVar6;
  SVar1.Data = (char *)iVar5;
  SVar1.Length = unaff_EDI;
  Print(&local_48,(double)CONCAT44(in_stack_ffffff80,(int)((ulonglong)(double)fVar4 >> 0x20)),SVar1)
  ;
  fVar4 = (float10)(**(code **)(*(int *)this + 0x15c))();
  local_c = (double)fVar4;
  iVar7 = 0x5b272b;
  fVar4 = (float10)(**(code **)(*(int *)this + 0x158))();
  local_c = (double)(fVar4 * (float10)/*3fe0000000000000*/0.5 *
                    (float10)(local_c * /*408f400000000000*/1000.0));
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff80,&local_30);
  SVar2.Capacity = iVar7;
  SVar2.Data = (char *)iVar5;
  SVar2.Length = unaff_EDI;
  Print(&local_3c,(double)CONCAT44(in_stack_ffffff80,(int)((ulonglong)local_c >> 0x20)),SVar2);
  local_18.Data = (char *)0x0;
  local_18.Capacity = 0;
  local_18.Length = 0;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)local_6c,&local_24,&local_18);
  pSVar3 = util__LocStr__operator__o3(this_00);
  if (pSVar3->Capacity < 1) {
    pcVar6 = "";
  }
  else {
    pcVar6 = pSVar3->Data;
  }
  util__Printf(__return_storage_ptr__,pcVar6);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_60 = (void *)0x0;
  }
  if (local_6c[0] != (void *)0x0) {
    operator_delete__(local_6c[0]);
    local_6c[0] = (void *)0x0;
  }
  if (local_18.Data != (char *)0x0) {
    operator_delete__(local_18.Data);
    local_18.Data = (char *)0x0;
  }
  if (local_3c.Data != (char *)0x0) {
    operator_delete__(local_3c.Data);
    local_3c.Data = (char *)0x0;
  }
  if (local_48.Data != (char *)0x0) {
    operator_delete__(local_48.Data);
    local_48.Data = (char *)0x0;
  }
  if (local_24.Data != (char *)0x0) {
    operator_delete__(local_24.Data);
    local_24.Data = (char *)0x0;
  }
  if (local_30.Data != (char *)0x0) {
    operator_delete__(local_30.Data);
    local_30.Data = (char *)0x0;
  }
  if (local_54.Data != (char *)0x0) {
    operator_delete__(local_54.Data);
  }
  return __return_storage_ptr__;
}


//==== 00005b2c40 005b2c40_GetEngineInfo ====
// decompiled by BatchDecomp @ 005b2c40 name=GetEngineInfo conv=__thiscall body=586

/* public: class Str_L_char_G_ __thiscall EngineModule__GetEngineInfo(void)const  */

Str_L_char_G_ * __thiscall
EngineModule__GetEngineInfo(EngineModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xffffff64;
  Str_L_char_G_ SVar1;
  Str_L_char_G_ SVar2;
  Str_L_char_G_ SVar3;
  LocStr *this_00;
  Str_L_char_G_ *pSVar4;
  char *pcVar5;
  int unaff_EDI;
  float10 fVar6;
  char *in_stack_ffffff64;
  int iVar7;
  int iVar8;
  void *local_84[3];
  void *local_78;
  Str_L_char_G_ local_6c;
  Str_L_char_G_ local_60;
  Str_L_char_G_ local_54;
  Str_L_char_G_ local_48;
  Str_L_char_G_ local_3c;
  Str_L_char_G_ local_30;
  Str_L_char_G_ local_24;
  Str_L_char_G_ local_18;
  double local_c;
  
  util__Str_char___Str_char__o5(&local_6c,"GetThrustMassRatio_m__s2()");
  util__Str_char___Str_char__o5(&local_3c,"GetMaxThrust_N()");
  util__Str_char___Str_char__o5(&local_30,"GetEffectiveExhaustVelocity_km__s()");
  iVar7 = 0x5b2c82;
  util__Str_char___Str_char__o5(&local_24,"InfoBox EngineInfo");
  fVar6 = (float10)(**(code **)(*(int *)this + 0x158))();
  local_c = (double)fVar6;
  iVar8 = 0x5b2c9d;
  fVar6 = (float10)(**(code **)(*(int *)this + 0x88))();
  local_c = (double)((float10)local_c / fVar6);
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff64,&local_6c);
  SVar1.Capacity = iVar8;
  SVar1.Data = (char *)iVar7;
  SVar1.Length = unaff_EDI;
  Print(&local_60,(double)CONCAT44(in_stack_ffffff64,(int)((ulonglong)local_c >> 0x20)),SVar1);
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff64,&local_3c);
  fVar6 = (float10)(**(code **)(*(int *)this + 0x158))();
  SVar2.Capacity = iVar8;
  SVar2.Data = (char *)iVar7;
  SVar2.Length = unaff_EDI;
  Print(&local_54,(double)CONCAT44(in_stack_ffffff64,(int)((ulonglong)(double)fVar6 >> 0x20)),SVar2)
  ;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff64,&local_30);
  fVar6 = (float10)(**(code **)(*(int *)this + 0x15c))();
  SVar3.Capacity = iVar8;
  SVar3.Data = (char *)iVar7;
  SVar3.Length = unaff_EDI;
  Print(&local_48,(double)CONCAT44(in_stack_ffffff64,(int)((ulonglong)(double)fVar6 >> 0x20)),SVar3)
  ;
  local_18.Data = (char *)0x0;
  local_18.Capacity = 0;
  local_18.Length = 0;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)local_84,&local_24,&local_18);
  pSVar4 = util__LocStr__operator__o3(this_00);
  if (pSVar4->Capacity < 1) {
    pcVar5 = "";
  }
  else {
    pcVar5 = pSVar4->Data;
  }
  util__Printf(__return_storage_ptr__,pcVar5);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_78 = (void *)0x0;
  }
  if (local_84[0] != (void *)0x0) {
    operator_delete__(local_84[0]);
    local_84[0] = (void *)0x0;
  }
  if (local_18.Data != (char *)0x0) {
    operator_delete__(local_18.Data);
    local_18.Data = (char *)0x0;
  }
  if (local_48.Data != (char *)0x0) {
    operator_delete__(local_48.Data);
    local_48.Data = (char *)0x0;
  }
  if (local_54.Data != (char *)0x0) {
    operator_delete__(local_54.Data);
    local_54.Data = (char *)0x0;
  }
  if (local_60.Data != (char *)0x0) {
    operator_delete__(local_60.Data);
    local_60.Data = (char *)0x0;
  }
  if (local_24.Data != (char *)0x0) {
    operator_delete__(local_24.Data);
    local_24.Data = (char *)0x0;
  }
  if (local_30.Data != (char *)0x0) {
    operator_delete__(local_30.Data);
    local_30.Data = (char *)0x0;
  }
  if (local_3c.Data != (char *)0x0) {
    operator_delete__(local_3c.Data);
    local_3c.Data = (char *)0x0;
  }
  if (local_6c.Data != (char *)0x0) {
    operator_delete__(local_6c.Data);
  }
  return __return_storage_ptr__;
}


//==== 00005bdeb0 005bdeb0_SiphonFromMultiplePropellantTanks ====

// decompiled by BatchDecomp @ 005bdeb0 name=SiphonFromMultiplePropellantTanks conv=__cdecl body=330

/* public: static void __cdecl PropellantTankCompartment__SiphonFromMultiplePropellantTanks(class
   util__Darray_L_class_util__WeakPtr_L_struct_PropellantTankCompartment_G___G const &,double) */

void __cdecl
PropellantTankCompartment__SiphonFromMultiplePropellantTanks(Darray_L_class_util__WeakPtr_L_struct_PropellantTankCompartment_G___G_ *param_1,double param_2)

{
  undefined4 stack0xfffffffc;
  ReferenceController *this;
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  float10 fVar4;
  undefined4 in_stack_00000008;
  undefined8 uVar5;
  uint local_48;
  undefined4 local_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  ReferenceController *local_34;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_30[16];
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_20[16];
  int local_10;
  undefined1 local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_48 = local_48 & 0xffffff00;
  local_c = 0;
  local_44 = 0;
  iStack_40 = 0;
  iStack_3c = 0;
  uStack_38 = 0;
  iVar2 = (**(code **)(*(int *)param_1 + 0xc))();
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_44,iVar2);
  local_10 = 0;
  iVar2 = (**(code **)(*(int *)param_1 + 0xc))();
  if (local_10 < iVar2) {
    uVar5 = CONCAT44(unaff_EBX,unaff_ESI);
    do {
      piVar3 = (int *)(*(code *)**(undefined4 **)param_1)(&local_10,uVar5);
      if (((*piVar3 != 0) && ((ReferenceController *)piVar3[1] != (ReferenceController *)0x0)) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]),
         iVar2 = iStack_3c, bVar1)) {
        local_34 = (ReferenceController *)(iStack_3c + 1);
        util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_44,(int *)&local_34);
        bVar1 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_44,iVar2);
        if (bVar1) {
          local_34 = *(ReferenceController **)(iStack_40 + -4 + iStack_3c * 8);
          *(int *)(iStack_40 + -8 + iStack_3c * 8) = *piVar3;
          this = (ReferenceController *)piVar3[1];
          *(ReferenceController **)(iStack_40 + -4 + iStack_3c * 8) = this;
          if (this != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this);
          }
          if (local_34 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(local_34);
          }
        }
      }
      local_10 = local_10 + 1;
      iVar2 = (**(code **)(*(int *)param_1 + 0xc))();
    } while (local_10 < iVar2);
  }
  FUN_005bb140(local_30,&local_44,local_48);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_44);
  fVar4 = (float10)FUN_005bb2a0(local_30,CONCAT44(((slice_view *)&param_2)->_0_4_,in_stack_00000008));
  in_stack_00000008 = SUB84((double)fVar4,0);
  FUN_005bb2a0(local_20,(double)fVar4);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_20);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_30);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005c5140 005c5140_GetExhaustPlumeModelRatio_Memoize ====
// decompiled by BatchDecomp @ 005c5140 name=GetExhaustPlumeModelRatio_Memoize conv=__thiscall body=408

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall ThermalRocketSubModule__GetExhaustPlumeModelRatio_Memoize(void)const  */

void __thiscall
ThermalRocketSubModule__GetExhaustPlumeModelRatio_Memoize(ThermalRocketSubModule *this)

{
  int iVar1;
  bool bVar2;
  GasExpansionPlume *pGVar3;
  double dVar4;
  GasExpansionPlume local_90;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_4c;
  undefined **local_48;
  void *local_44;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  bool local_18;
  bool local_10;
  int local_8;
  
  if ((this->GetExhaustPlumeModelRatio_MemoizedValue).IsValidData == false) {
    iVar1 = (this->ThermalRocketSubModuleMemoizationHandlerInstance).ResetFunctions.Size;
    local_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)
               &this->ThermalRocketSubModuleMemoizationHandlerInstance,&local_8);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->ThermalRocketSubModuleMemoizationHandlerInstance,iVar1);
    if (bVar2) {
      (this->ThermalRocketSubModuleMemoizationHandlerInstance).ResetFunctions.Data
      [(this->ThermalRocketSubModuleMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_c3f813f6, SpacecraftComponent__GetEstimatedMaxAngularAcceleration_radians__s2_Clear);
    }
    if ((this->GetGasExpansionPlume_MemoizedValue).IsValidData == false) {
      iVar1 = (this->ThermalRocketSubModuleMemoizationHandlerInstance).ResetFunctions.Size;
      local_8 = iVar1 + 1;
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)
                 &this->ThermalRocketSubModuleMemoizationHandlerInstance,&local_8);
      bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                         &this->ThermalRocketSubModuleMemoizationHandlerInstance,iVar1);
      if (bVar2) {
        (this->ThermalRocketSubModuleMemoizationHandlerInstance).ResetFunctions.Data
        [(this->ThermalRocketSubModuleMemoizationHandlerInstance).ResetFunctions.Size + -1] =
             CDE_PMF(pmf_c3f813f6, GetGasExpansionPlume_Clear);
      }
      pGVar3 = ThermalRocketSubModule_GetGasExpansionPlume_MemoizedFunction(this,&local_90);
      util__Darray_struct_MaterialConstituent___Darray_struct_MaterialConstituent((Darray_L_struct_MaterialConstituent_G_ *)&local_48,
                 (Darray_L_struct_MaterialConstituent_G_ *)pGVar3);
      local_38 = pGVar3->StartRadius_m;
      uStack_30 = pGVar3->StartTemperature_K;
      local_28 = pGVar3->ExhaustVelocity_km__s;
      uStack_20 = pGVar3->MassFlowRate_kg__s;
      local_18 = pGVar3->DisableShimmer;
      local_10 = true;
      util__Darray_struct_MaterialConstituent___operator
                ((Darray_L_struct_MaterialConstituent_G_ *)&this->GetGasExpansionPlume_MemoizedValue,
                 (Darray_L_struct_MaterialConstituent_G_ *)&local_48);
      (this->GetGasExpansionPlume_MemoizedValue).Data.DisableShimmer = local_18;
      *(undefined4 *)&(this->GetGasExpansionPlume_MemoizedValue).Data.StartRadius_m =
           (undefined4)local_38;
      *(undefined4 *)((int)&(this->GetGasExpansionPlume_MemoizedValue).Data.StartRadius_m + 4) =
           ((slice_view *)&local_38)->_4_4_;
      *(undefined4 *)&(this->GetGasExpansionPlume_MemoizedValue).Data.StartTemperature_K =
           (undefined4)uStack_30;
      *(undefined4 *)((int)&(this->GetGasExpansionPlume_MemoizedValue).Data.StartTemperature_K + 4)
           = ((slice_view *)&uStack_30)->_4_4_;
      local_48 = ((void *)(0x00919b30u));
      *(undefined4 *)&(this->GetGasExpansionPlume_MemoizedValue).Data.ExhaustVelocity_km__s =
           (undefined4)local_28;
      *(undefined4 *)
       ((int)&(this->GetGasExpansionPlume_MemoizedValue).Data.ExhaustVelocity_km__s + 4) =
           ((slice_view *)&local_28)->_4_4_;
      *(undefined4 *)&(this->GetGasExpansionPlume_MemoizedValue).Data.MassFlowRate_kg__s =
           (undefined4)uStack_20;
      *(undefined4 *)((int)&(this->GetGasExpansionPlume_MemoizedValue).Data.MassFlowRate_kg__s + 4)
           = ((slice_view *)&uStack_20)->_4_4_;
      (this->GetGasExpansionPlume_MemoizedValue).IsValidData = local_10;
      if (local_44 != (void *)0x0) {
        operator_delete__(local_44);
      }
      local_44 = (void *)0x0;
      local_48 = ((void *)(0x00919488u));
      local_90.Products._pad_0x0_0 = (int)((void *)(0x00919b30u));
      if (local_90.Products.Data != (MaterialConstituent *)0x0) {
        operator_delete__(local_90.Products.Data);
      }
      local_90.Products.Data = (MaterialConstituent *)0x0;
      local_90.Products._pad_0x0_0 = (int)((void *)(0x00919488u));
      if ((this->GetGasExpansionPlume_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
    }
    dVar4 = GetNozzleLength_m(this);
    dVar4 = GasExpansionPlume__GetExhaustPlumeModelRatio(&(this->GetGasExpansionPlume_MemoizedValue).Data,dVar4);
    ((slice_view *)&uStack_50)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_50)->_1_3_[0] | (((slice_view *)&uStack_50)->_1_3_[1] << 8) | (((slice_view *)&uStack_50)->_1_3_[2] << 16)) << 8));
    local_58 = *(undefined4 *)&dVar4;
    uStack_54 = *(undefined4 *)((char *)&dVar4 + 4);
    *(undefined4 *)&(this->GetExhaustPlumeModelRatio_MemoizedValue).Data = local_58;
    *(undefined4 *)((int)&(this->GetExhaustPlumeModelRatio_MemoizedValue).Data + 4) = uStack_54;
    *(undefined4 *)&(this->GetExhaustPlumeModelRatio_MemoizedValue).IsValidData = uStack_50;
    *(undefined4 *)((char *)&(this->GetExhaustPlumeModelRatio_MemoizedValue) + 0xc) = uStack_4c;
  }
  return;
}


//==== 00005e4a10 005e4a10_GetRadiatorInfo ====
// decompiled by BatchDecomp @ 005e4a10 name=GetRadiatorInfo conv=__thiscall body=686

/* public: class Str_L_char_G_ __thiscall RadiatorModule__GetRadiatorInfo(void)const  */

Str_L_char_G_ * __thiscall
RadiatorModule__GetRadiatorInfo(RadiatorModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xffffff54;
  Str_L_char_G_ SVar1;
  Str_L_char_G_ SVar2;
  Str_L_char_G_ SVar3;
  Str_L_char_G_ *pSVar4;
  LocStr *this_00;
  char *pcVar5;
  char *extraout_ECX;
  int unaff_EDI;
  char *pcVar6;
  int *piVar7;
  int *piVar8;
  void *local_94[3];
  void *local_88;
  Str_L_char_G_ local_7c;
  Str_L_char_G_ local_70;
  Str_L_char_G_ local_64;
  Str_L_char_G_ local_58;
  double local_4c;
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  double local_14;
  undefined8 local_c;
  
  util__Str_char___Str_char__o5(&local_7c,"GetTotalSurfaceArea_m2()");
  util__Str_char___Str_char__o5(&local_44,"Height_m");
  util__Str_char___Str_char__o5(&local_38,"PanelWidth_m");
  util__Str_char___Str_char__o5(&local_2c,"InfoBox Radiator");
  piVar8 = &this[1]._pad_0x0_0;
  local_14 = (double)this[1]._pad_0x0_0 * *(double *)&this->Panels;
  local_c = util__Tan((double *)piVar8);
  piVar7 = &this[1]._pad_0x0_0;
  local_4c = util__Tan((double *)piVar7);
  local_14 = (double)this[1]._pad_0x0_0 * *(double *)&this->Panels *
             (this->FrontTaper_radians + (local_c + local_4c) * local_14 * /*3fe0000000000000*/0.5);
  local_14 = local_14 + local_14;
  pcVar6 = extraout_ECX;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff54,&local_7c);
  SVar1.Capacity = (int)piVar8;
  SVar1.Data = (char *)piVar7;
  SVar1.Length = unaff_EDI;
  pSVar4 = Print(&local_70,(double)CONCAT44(pcVar6,(int)((ulonglong)local_14 >> 0x20)),SVar1);
  if (pSVar4->Capacity < 1) {
    ((slice_view *)&local_c)->_4_4_ = "";
  }
  else {
    ((slice_view *)&local_c)->_4_4_ = pSVar4->Data;
  }
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff54,&local_44);
  SVar2.Capacity = (int)piVar8;
  SVar2.Data = (char *)piVar7;
  SVar2.Length = unaff_EDI;
  Print(&local_64,(double)CONCAT44(pcVar6,(int)((ulonglong)this->FrontTaper_radians >> 0x20)),SVar2)
  ;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff54,&local_38);
  SVar3.Capacity = (int)piVar8;
  SVar3.Data = (char *)piVar7;
  SVar3.Length = unaff_EDI;
  pSVar4 = Print(&local_58,
                 (double)CONCAT44(pcVar6,(int)((ulonglong)*(undefined8 *)&this->Panels >> 0x20)),
                 SVar3);
  if (pSVar4->Capacity < 1) {
    pcVar6 = "";
  }
  else {
    pcVar6 = pSVar4->Data;
  }
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  local_20.Length = 0;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)local_94,&local_2c,&local_20);
  pSVar4 = util__LocStr__operator__o3(this_00);
  if (pSVar4->Capacity < 1) {
    pcVar5 = "";
  }
  else {
    pcVar5 = pSVar4->Data;
  }
  util__Printf(__return_storage_ptr__,pcVar5,pcVar6);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_88 = (void *)0x0;
  }
  if (local_94[0] != (void *)0x0) {
    operator_delete__(local_94[0]);
    local_94[0] = (void *)0x0;
  }
  if (local_20.Data != (char *)0x0) {
    operator_delete__(local_20.Data);
    local_20.Data = (char *)0x0;
  }
  if (local_58.Data != (char *)0x0) {
    operator_delete__(local_58.Data);
    local_58.Data = (char *)0x0;
  }
  if (local_64.Data != (char *)0x0) {
    operator_delete__(local_64.Data);
    local_64.Data = (char *)0x0;
  }
  if (local_70.Data != (char *)0x0) {
    operator_delete__(local_70.Data);
    local_70.Data = (char *)0x0;
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
    local_44.Data = (char *)0x0;
  }
  if (local_7c.Data != (char *)0x0) {
    operator_delete__(local_7c.Data);
  }
  return __return_storage_ptr__;
}


//==== 00005e4cd0 005e4cd0_GetSampleHeatInfo ====
// decompiled by BatchDecomp @ 005e4cd0 name=GetSampleHeatInfo conv=__thiscall body=604

/* public: class Str_L_char_G_ __thiscall RadiatorModule__GetSampleHeatInfo(void)const  */

Str_L_char_G_ * __thiscall
RadiatorModule__GetSampleHeatInfo(RadiatorModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xffffff68;
  Str_L_char_G_ SVar1;
  Str_L_char_G_ SVar2;
  LocStr *this_00;
  Str_L_char_G_ *pSVar3;
  int iVar4;
  int unaff_EDI;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  void *local_80[3];
  void *local_74;
  Str_L_char_G_ local_68;
  Str_L_char_G_ local_5c;
  Str_L_char_G_ local_50;
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  double local_14;
  RadiatorModule *local_c;
  int local_8;
  
  local_8 = 0;
  iVar4 = 500;
  __return_storage_ptr__->Data = (char *)0x0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->Length = 0;
  __return_storage_ptr__->Data = (char *)0x0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->Length = 0;
  local_c = this;
  do {
    pcVar5 = (char *)0x5e4d27;
    local_14 = GetTotalHeatDissipated_W(local_c,(double)iVar4);
    if (0.0 < local_14) {
      util__Str_char___Str_char__o5(&local_44,"Heat_W");
      util__Str_char___Str_char__o5(&local_38,"Colon");
      pcVar7 = "Temperature_K";
      iVar6 = 0x5e4d63;
      util__Str_char___Str_char__o5(&local_2c,"Temperature_K");
      GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff68,&local_44);
      SVar1.Capacity = (int)pcVar7;
      SVar1.Data = (char *)iVar6;
      SVar1.Length = unaff_EDI;
      Print(&local_68,(double)CONCAT44(pcVar5,(int)((ulonglong)local_14 >> 0x20)),SVar1);
      local_20.Data = (char *)0x0;
      pSVar3 = &local_38;
      local_20.Capacity = 0;
      local_20.Length = 0;
      pcVar5 = (char *)0x5e4dbc;
      this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)local_80,pSVar3,&local_20);
      iVar6 = 0x5e4dc3;
      util__LocStr__operator__o3(this_00);
      GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff68,&local_2c);
      SVar2.Capacity = iVar6;
      SVar2.Data = (char *)pSVar3;
      SVar2.Length = unaff_EDI;
      Print(&local_5c,(double)CONCAT44(pcVar5,(int)((ulonglong)(double)iVar4 >> 0x20)),SVar2);
      pcVar5 = "";
      if (local_8 != 0) {
        pcVar5 = "\n";
      }
      pSVar3 = util__Printf(&local_50,"%s%s%s%s",pcVar5);
      util__Str_char___operator__o10(__return_storage_ptr__,pSVar3);
      if (local_50.Data != (char *)0x0) {
        operator_delete__(local_50.Data);
        local_50.Data = (char *)0x0;
      }
      if (local_5c.Data != (char *)0x0) {
        operator_delete__(local_5c.Data);
        local_5c.Data = (char *)0x0;
      }
      if (local_74 != (void *)0x0) {
        operator_delete__(local_74);
        local_74 = (void *)0x0;
      }
      if (local_80[0] != (void *)0x0) {
        operator_delete__(local_80[0]);
        local_80[0] = (void *)0x0;
      }
      if (local_20.Data != (char *)0x0) {
        operator_delete__(local_20.Data);
        local_20.Data = (char *)0x0;
      }
      if (local_68.Data != (char *)0x0) {
        operator_delete__(local_68.Data);
        local_68.Data = (char *)0x0;
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
        local_44.Data = (char *)0x0;
      }
    }
    local_8 = local_8 + 1;
    iVar4 = iVar4 + 500;
  } while (iVar4 < 0xdac);
  return __return_storage_ptr__;
}


//==== 00005eaf40 005eaf40_GetFuelingInfo ====
// decompiled by BatchDecomp @ 005eaf40 name=GetFuelingInfo conv=__thiscall body=428

/* public: class Str_L_char_G_ __thiscall RefuelerModule__GetFuelingInfo(void)const  */

Str_L_char_G_ * __thiscall
RefuelerModule__GetFuelingInfo(RefuelerModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xffffff80;
  undefined8 uVar1;
  Str_L_char_G_ SVar2;
  Str_L_char_G_ SVar3;
  LocStr *this_00;
  Str_L_char_G_ *pSVar4;
  int unaff_EDI;
  char *in_stack_ffffff80;
  int iVar5;
  char *pcVar6;
  int iVar7;
  void *local_6c[3];
  void *local_60;
  Str_L_char_G_ local_54;
  Str_L_char_G_ local_48;
  Str_L_char_G_ local_3c;
  Str_L_char_G_ local_30;
  Str_L_char_G_ local_24;
  Str_L_char_G_ local_18;
  double local_c;
  
  util__Str_char___Str_char__o5(&local_54,"HoseLength_m");
  util__Str_char___Str_char__o5(&local_30,"GetPumpRate_kg__s()");
  pcVar6 = "InfoBox Refueler";
  iVar5 = 0x5eaf71;
  util__Str_char___Str_char__o5(&local_24,"InfoBox Refueler");
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff80,&local_54);
  ((slice_view *)&uVar1)->_0_4_ = this[1]._pad_0x0_0;
  ((slice_view *)&uVar1)->_4_4_ = this[1]._pad_0x0_0;
  SVar2.Capacity = (int)pcVar6;
  SVar2.Data = (char *)iVar5;
  SVar2.Length = unaff_EDI;
  Print(&local_48,(double)CONCAT44(in_stack_ffffff80,(int)((ulonglong)uVar1 >> 0x20)),SVar2);
  iVar7 = 0x5eafb0;
  local_c = TurbopumpSubModule__GetMassFlowRate_kg__s((TurbopumpSubModule *)&(this->Pump).RotationalSpeed_RPM);
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff80,&local_30);
  SVar3.Capacity = iVar7;
  SVar3.Data = (char *)iVar5;
  SVar3.Length = unaff_EDI;
  Print(&local_3c,(double)CONCAT44(in_stack_ffffff80,(int)((ulonglong)local_c >> 0x20)),SVar3);
  local_18.Data = (char *)0x0;
  local_18.Capacity = 0;
  local_18.Length = 0;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)local_6c,&local_24,&local_18);
  pSVar4 = util__LocStr__operator__o3(this_00);
  if (pSVar4->Capacity < 1) {
    pcVar6 = "";
  }
  else {
    pcVar6 = pSVar4->Data;
  }
  util__Printf(__return_storage_ptr__,pcVar6);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_60 = (void *)0x0;
  }
  if (local_6c[0] != (void *)0x0) {
    operator_delete__(local_6c[0]);
    local_6c[0] = (void *)0x0;
  }
  if (local_18.Data != (char *)0x0) {
    operator_delete__(local_18.Data);
    local_18.Data = (char *)0x0;
  }
  if (local_3c.Data != (char *)0x0) {
    operator_delete__(local_3c.Data);
    local_3c.Data = (char *)0x0;
  }
  if (local_48.Data != (char *)0x0) {
    operator_delete__(local_48.Data);
    local_48.Data = (char *)0x0;
  }
  if (local_24.Data != (char *)0x0) {
    operator_delete__(local_24.Data);
    local_24.Data = (char *)0x0;
  }
  if (local_30.Data != (char *)0x0) {
    operator_delete__(local_30.Data);
    local_30.Data = (char *)0x0;
  }
  if (local_54.Data != (char *)0x0) {
    operator_delete__(local_54.Data);
  }
  return __return_storage_ptr__;
}


//==== 0000676bd0 00676bd0_FUN_00676bd0 ====
void FUN_00676bd0(int *param_1);

// decompiled by BatchDecomp @ 00676bd0 name=FUN_00676bd0 conv=unknown body=445

void FUN_00676bd0(int *param_1)

{
  undefined4 stack0xfffffffc;
  double dVar1;
  bool bVar2;
  double *pdVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_2c;
  double local_28;
  Darray_L_double_G_ local_20;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_20._pad_0x0_0 = 0;
  local_20.Data = (double *)0x0;
  local_20.Size = 0;
  local_20.Capacity = 0;
  local_20.Capacity = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  local_20._pad_0x0_0 = (int)((void *)(0x0091da54u));
  local_20.Data = (double *)0x0;
  local_20.Size = 0;
  if ((local_20.Capacity < 0) || (0x3fffffff < local_20.Capacity)) {
    local_20.Capacity = 0;
  }
  else if (0 < local_20.Capacity) {
    uVar6 = -(uint)((int)((ulonglong)(uint)local_20.Capacity * 8 >> 0x20) != 0) |
            (uint)((ulonglong)(uint)local_20.Capacity * 8);
    pdVar3 = (double *)operator_new__(uVar6);
    if (pdVar3 == (double *)0x0) {
      pdVar3 = (double *)0x0;
    }
    else {
      memset(pdVar3,0,uVar6);
    }
    iVar4 = 0;
    local_20.Data = pdVar3;
    if (0 < local_20.Capacity) {
      do {
        pdVar3[iVar4] = 0.0;
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_20.Capacity);
    }
  }
  local_10 = 0;
  iVar4 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_10 < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*param_1)(&local_10);
      local_28 = Element__GetEffectiveSolarAbundance((Element *)*puVar5);
      iVar4 = local_20.Size;
      local_c = local_20.Size + 1;
      util__Darray_double___SetSize(&local_20,&local_c);
      bVar2 = util__Darray_double___CheckSize(&local_20,iVar4);
      if (bVar2) {
        local_20.Data[local_20.Size + -1] = local_28;
      }
      local_10 = local_10 + 1;
      iVar4 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
    } while (local_10 < iVar4);
  }
  iVar4 = (**(code **)(local_20._pad_0x0_0 + 0xc))();
  if (iVar4 == 0) {
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    local_2c = 0;
    pdVar3 = (double *)(**(code **)local_20._pad_0x0_0)(&local_2c);
    local_c = 0;
    local_28 = *pdVar3;
    iVar4 = (**(code **)(local_20._pad_0x0_0 + 0xc))();
    if (local_c < iVar4) {
      do {
        pdVar3 = (double *)(**(code **)local_20._pad_0x0_0)(&local_c);
        uVar7 = *(undefined4 *)&local_28;
        uVar8 = *(undefined4 *)((char *)&local_28 + 4);
        dVar1 = *pdVar3;
        if (local_28 <= dVar1) {
          uVar7 = *(undefined4 *)&dVar1;
          uVar8 = *(undefined4 *)((char *)&dVar1 + 4);
        }
        local_c = local_c + 1;
        local_28 = (double)CONCAT44(uVar8,uVar7);
        iVar4 = (**(code **)(local_20._pad_0x0_0 + 0xc))();
      } while (local_c < iVar4);
    }
    uVar7 = *(undefined4 *)&local_28;
    uVar8 = *(undefined4 *)((char *)&local_28 + 4);
  }
  local_28 = (double)CONCAT44(uVar8,uVar7);
  local_20._pad_0x0_0 = (int)((void *)(0x0091da54u));
  if (local_20.Data != (double *)0x0) {
    operator_delete__(local_20.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000067a3b0 0067a3b0_PrintDiagramFlowReport ====
// decompiled by BatchDecomp @ 0067a3b0 name=PrintDiagramFlowReport conv=__thiscall body=627

/* public: class Str_L_char_G_ __thiscall CompressibleFlowPoint__PrintDiagramFlowReport(void)const
    */

Str_L_char_G_ * __thiscall
CompressibleFlowPoint__PrintDiagramFlowReport(CompressibleFlowPoint *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xffffff70;
  Str_L_char_G_ SVar1;
  Str_L_char_G_ SVar2;
  LocStr *this_00;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *pSVar4;
  int unaff_EDI;
  double dVar5;
  char *pcVar6;
  int iVar7;
  void *local_78[3];
  void *local_6c;
  Str_L_char_G_ local_60;
  Str_L_char_G_ local_54;
  Str_L_char_G_ local_48;
  Str_L_char_G_ local_3c;
  Str_L_char_G_ local_30;
  Str_L_char_G_ local_24;
  Str_L_char_G_ local_18;
  undefined8 local_c;
  
  util__Str_char___Str_char__o5(&local_60,"Mach");
  util__Str_char___Str_char__o5(&local_30,"Pressure_Pa");
  util__Str_char___Str_char__o5(&local_24,"Temperature_K");
  dVar5 = this[1].SpecificHeat_J__kg_K;
  if (dVar5 <= 0.0) {
    if ((((this->SpecificHeat_J__kg_K <= 0.0) || (this->SpecificGasConstant_J__kg_K <= 0.0)) ||
        (dVar5 = this->Temperature_K, dVar5 <= 0.0)) ||
       (((this->Pressure_Pa <= 0.0 || (this->MassFlowRate_kg__s <= 0.0)) || (this->Area_m2 <= 0.0)))
       ) {
      dVar5 = 0.0;
    }
    else {
      local_c = this->MassFlowRate_kg__s /
                (this->Area_m2 * (this->Pressure_Pa / (dVar5 * this->SpecificGasConstant_J__kg_K)));
      dVar5 = GetGasSpeedOfSound_m__s(this,dVar5);
      dVar5 = local_c / dVar5;
      local_c = dVar5;
    }
  }
  PrintSigFigures(&local_54,
                  (double)CONCAT44(GlobalSignificantFigures,(int)((ulonglong)dVar5 >> 0x20)),
                  unaff_EDI);
  local_18.Data = (char *)0x0;
  pSVar4 = &local_60;
  local_18.Capacity = 0;
  local_18.Length = 0;
  pcVar6 = (char *)0x67a4b6;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)local_78,pSVar4,&local_18);
  iVar7 = 0x67a4bd;
  pSVar3 = util__LocStr__operator__o3(this_00);
  if (pSVar3->Capacity < 1) {
    ((slice_view *)&local_c)->_4_4_ = "";
  }
  else {
    ((slice_view *)&local_c)->_4_4_ = pSVar3->Data;
  }
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff70,&local_30);
  SVar1.Capacity = iVar7;
  SVar1.Data = (char *)pSVar4;
  SVar1.Length = unaff_EDI;
  Print(&local_48,(double)CONCAT44(pcVar6,(int)((ulonglong)this->Pressure_Pa >> 0x20)),SVar1);
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff70,&local_24);
  SVar2.Capacity = iVar7;
  SVar2.Data = (char *)pSVar4;
  SVar2.Length = unaff_EDI;
  pSVar4 = Print(&local_3c,(double)CONCAT44(pcVar6,(int)((ulonglong)this->Temperature_K >> 0x20)),
                 SVar2);
  if (pSVar4->Capacity < 1) {
    pcVar6 = "";
  }
  else {
    pcVar6 = pSVar4->Data;
  }
  util__Printf(__return_storage_ptr__,"%s\n%s\n%s%s",pcVar6);
  if (local_3c.Data != (char *)0x0) {
    operator_delete__(local_3c.Data);
    local_3c.Data = (char *)0x0;
  }
  if (local_48.Data != (char *)0x0) {
    operator_delete__(local_48.Data);
    local_48.Data = (char *)0x0;
  }
  if (local_6c != (void *)0x0) {
    operator_delete__(local_6c);
    local_6c = (void *)0x0;
  }
  if (local_78[0] != (void *)0x0) {
    operator_delete__(local_78[0]);
    local_78[0] = (void *)0x0;
  }
  if (local_18.Data != (char *)0x0) {
    operator_delete__(local_18.Data);
    local_18.Data = (char *)0x0;
  }
  if (local_54.Data != (char *)0x0) {
    operator_delete__(local_54.Data);
    local_54.Data = (char *)0x0;
  }
  if (local_24.Data != (char *)0x0) {
    operator_delete__(local_24.Data);
    local_24.Data = (char *)0x0;
  }
  if (local_30.Data != (char *)0x0) {
    operator_delete__(local_30.Data);
    local_30.Data = (char *)0x0;
  }
  if (local_60.Data != (char *)0x0) {
    operator_delete__(local_60.Data);
  }
  return __return_storage_ptr__;
}


//==== 000067ddd0 0067ddd0_FUN_0067ddd0 ====
void __thiscall FUN_0067ddd0(undefined4 *param_1,Material *param_2);

// decompiled by BatchDecomp @ 0067ddd0 name=FUN_0067ddd0 conv=unknown body=497

void __thiscall FUN_0067ddd0(undefined4 *param_1,Material *param_2)

{
  undefined4 stack0xfffffffc;
  double *pdVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  double dVar13;
  double local_24;
  undefined **local_1c;
  void *pvStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (0.0 < param_2->Density_kg__m3) {
    iVar2 = (**(code **)(*(int *)&param_2->Elements + 0xc))();
    if (0 < iVar2) {
      local_1c = (undefined **)0x0;
      pvStack_18 = (void *)0x0;
      iStack_14 = 0;
      uStack_10 = 0;
      Material__GetNonTraceElements(param_2);
      iVar2 = iStack_14;
      iVar3 = (**(code **)(*(int *)*param_1 + 0xc))();
      bVar8 = iVar2 == iVar3;
      if (bVar8) {
        local_c = 0;
        while( true ) {
          iVar2 = (**(code **)(*(int *)*param_1 + 0xc))();
          if (iStack_14 < iVar2) {
            iVar2 = iStack_14;
          }
          if (iVar2 <= local_c) break;
          piVar4 = (int *)(*(code *)**(undefined4 **)*param_1)(&local_c);
          piVar5 = (int *)(*(code *)*local_1c)(&local_c);
          iVar2 = *piVar5;
          iVar3 = *piVar4;
          iVar6 = (*(code *)**(undefined4 **)*param_1)(&local_c);
          pdVar1 = (double *)(iVar6 + 8);
          iVar6 = (*(code *)*local_1c)(&local_c);
          dVar12 = *(double *)(iVar6 + 8);
          dVar13 = *pdVar1;
          if ((NAN(dVar12) || NAN(dVar13)) == (dVar12 == dVar13)) {
            local_24 = dVar12 - dVar13;
            local_24 = util__Abs(&local_24);
            dVar12 = *(double *)(iVar6 + 8);
            if ((NAN(dVar12) == (dVar12 == 0.0)) && (NAN(*pdVar1) == (*pdVar1 == 0.0))) {
              dVar12 = util__Abs(pdVar1);
              dVar13 = util__Abs((double *)(iVar6 + 8));
              uVar10 = *(undefined4 *)&dVar13;
              uVar11 = *(undefined4 *)((char *)&dVar13 + 4);
              if (dVar13 <= dVar12) {
                uVar10 = *(undefined4 *)&dVar12;
                uVar11 = *(undefined4 *)((char *)&dVar12 + 4);
              }
              if ((double)CONCAT44(uVar11,uVar10) < 0.0 || (double)CONCAT44(uVar11,uVar10) == 0.0) {
                util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\coremath.inl"
                                ,0x1e,"Greatest > (Type)0",(char *)0x0);
                DebugBreak();
              }
              dVar12 = local_24 / (double)CONCAT44(uVar11,uVar10);
              bVar9 = /*3fb999999999999a*/0.1 == dVar12;
              bVar7 = /*3fb999999999999a*/0.1 < dVar12;
            }
            else {
              bVar9 = /*3fb999999999999a*/0.1 == local_24;
              bVar7 = /*3fb999999999999a*/0.1 < local_24;
            }
            bVar9 = !bVar7 && !bVar9;
          }
          else {
            bVar9 = true;
          }
          if (((bVar8) && (bVar9)) && (iVar2 == iVar3)) {
            local_c = local_c + 1;
            bVar8 = true;
          }
          else {
            bVar8 = false;
            local_c = local_c + 1;
          }
        }
      }
      local_1c = ((void *)(0x0091e0dcu));
      if (pvStack_18 != (void *)0x0) {
        operator_delete__(pvStack_18);
      }
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000690ca0 00690ca0_PrintUnits ====
// decompiled by BatchDecomp @ 00690ca0 name=PrintUnits conv=__cdecl body=745

/* class Str_L_char_G_ __cdecl PrintUnits(double,char const *,int) */

Str_L_char_G_ * __cdecl
PrintUnits(Str_L_char_G_ *__return_storage_ptr__,double param_1,char *param_2,int param_3)

{
  undefined4 stack0xfffffffc;
  double dVar1;
  int iVar2;
  Str_L_char_G_ *pSVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int unaff_EDI;
  int iVar8;
  undefined4 in_stack_00000008;
  char *local_78[17];
  undefined1 local_34[12];
  undefined4 local_28;
  int local_24;
  int local_20;
  double local_1c;
  int local_14;
  double local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = (double)CONCAT44(((slice_view *)&param_1)->_0_4_,in_stack_00000008);
  local_28 = ((slice_view *)&param_1)->_4_4_;
  if ((NAN(local_10)) ||
     (((NAN(local_10) == (local_10 == 0.0) && (NAN(local_10 / local_10))) || ((int)param_2 < 1)))) {
    util__Printf(__return_storage_ptr__,"Error %s",((slice_view *)&param_1)->_4_4_);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return __return_storage_ptr__;
  }
  if ((NAN(local_10) != (local_10 == 0.0)) ||
     ((NAN(local_10) || NAN(/*8000000000000000*/-0.0)) != (local_10 == /*8000000000000000*/-0.0))) {
    util__Printf(__return_storage_ptr__,"0 %s",((slice_view *)&param_1)->_4_4_);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return __return_storage_ptr__;
  }
  local_78[0] = "Y";
  local_78[1] = "Z";
  local_24 = (int)param_2 * -3;
  local_78[2] = "E";
  local_20 = (int)param_2 * 3;
  local_78[3] = "P";
  local_78[4] = "T";
  iVar8 = (int)param_2 * 0x18;
  iVar7 = 0;
  local_78[5] = "G";
  local_14 = (int)param_2 * -0x18;
  local_78[6] = "M";
  local_78[7] = "k";
  local_78[8] = "";
  local_78[9] = "m";
  local_78[10] = s__;
  local_78[0xb] = "n";
  local_78[0xc] = "p";
  local_78[0xd] = "f";
  local_78[0xe] = "a";
  local_78[0xf] = "z";
  local_78[0x10] = "y";
  while( true ) {
    iVar5 = local_14;
    dVar1 = /*3fb999999999999a*/0.1;
    if (-1 < iVar8) {
      iVar5 = iVar8;
      dVar1 = /*4024000000000000*/10.0;
    }
    local_1c = /*3ff0000000000000*/1.0;
    if ((iVar5 != 0) && (local_1c = dVar1, iVar5 != 1)) {
      iVar2 = iVar5 + -1;
      iVar6 = 0;
      if (7 < iVar2) {
        iVar5 = (iVar5 - 9U >> 3) + 1;
        iVar6 = iVar5 * 8;
        do {
          local_1c = local_1c * dVar1 * dVar1 * dVar1 * dVar1 * dVar1 * dVar1 * dVar1 * dVar1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      if (iVar6 < iVar2) {
        iVar2 = iVar2 - iVar6;
        do {
          local_1c = local_1c * dVar1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    ((slice_view *)&local_34)->_4_8_ = util__Abs(&local_10);
    if ((local_1c <= (double)((slice_view *)&local_34)->_4_8_) || (0xf < iVar7)) break;
    iVar7 = iVar7 + 1;
    local_14 = local_14 + local_20;
    iVar8 = iVar8 + local_24;
    if (0x10 < iVar7) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\physics\\units.cpp",0x1c,
                      "0","Print Unit Prefixes ran out. This code should be unreachable.");
      DebugBreak();
      __return_storage_ptr__->Data = (char *)0x0;
      __return_storage_ptr__->Capacity = 0;
      __return_storage_ptr__->Length = 0;
LAB_00690ecb:
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return __return_storage_ptr__;
    }
  }
  pSVar3 = PrintSigFigures((Str_L_char_G_ *)local_34,
                           (double)CONCAT44(GlobalSignificantFigures,
                                            (int)((ulonglong)(local_10 / local_1c) >> 0x20)),
                           unaff_EDI);
  if (pSVar3->Capacity < 1) {
    pcVar4 = "";
  }
  else {
    pcVar4 = pSVar3->Data;
  }
  util__Printf(__return_storage_ptr__,"%s %s%s",pcVar4,local_78[iVar7],local_28);
  if ((char *)((slice_view *)&local_34)->_0_4_ != (char *)0x0) {
    operator_delete__((void *)((slice_view *)&local_34)->_0_4_);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return __return_storage_ptr__;
  }
  goto LAB_00690ecb;
}


//==== 0000691640 00691640_FUN_00691640 ====
void FUN_00691640(Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *param_1,int *param_2,int *param_3);

// decompiled by BatchDecomp @ 00691640 name=FUN_00691640 conv=unknown body=367

void FUN_00691640(Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *param_1,int *param_2,int *param_3)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  ReferenceController *this;
  uint *puVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  ReferenceControllerRegistry *this_00;
  SharedPtr_L_struct_UIWidget_G_ *pSVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = param_2;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar4 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  *(undefined ***)param_1 = ((void *)(0x0091d1bcu));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar4;
  if (((int)uVar4 < 0) || (0x3fffffff < (int)uVar4)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar4) {
    uVar7 = -(uint)((int)((ulonglong)uVar4 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 8);
    puVar5 = (uint *)operator_new__(-(uint)(0xfffffffb < uVar7) | uVar7 + 4);
    if (puVar5 == (uint *)0x0) {
      puVar5 = (uint *)0x0;
    }
    else {
      *puVar5 = uVar4;
      puVar5 = puVar5 + 1;
      puVar2 = puVar5;
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = puVar2 + 2;
      }
    }
    iVar8 = 0;
    *(uint **)(param_1 + 4) = puVar5;
    if (0 < *(int *)(param_1 + 0xc)) {
      do {
        iVar1 = *(int *)(param_1 + 4);
        this = *(ReferenceController **)(iVar1 + 4 + iVar8 * 8);
        piVar9 = *(int **)(iVar1 + iVar8 * 8);
        *(undefined4 *)(iVar1 + iVar8 * 8) = 0;
        *(undefined4 *)(iVar1 + 4 + iVar8 * 8) = 0;
        if ((this != (ReferenceController *)0x0) &&
           (bVar3 = util__ReferenceController__ReleaseStrongReference(this), bVar3)) {
          if (piVar9 != (int *)0x0) {
            (**(code **)(*piVar9 + 4))(1);
          }
          this_00 = util__ReferenceControllerRegistry__Get();
          util__ReferenceControllerRegistry__PointerWasDestroyed(this_00,piVar9);
        }
        iVar8 = iVar8 + 1;
        param_2 = local_c;
      } while (iVar8 < *(int *)(param_1 + 0xc));
    }
  }
  local_c = (int *)0x0;
  iVar8 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  if ((int)local_c < iVar8) {
    do {
      pSVar6 = (SharedPtr_L_struct_UIWidget_G_ *)(**(code **)*param_2)(&local_c);
      if ((*(int *)(pSVar6 + 4) == param_3[1]) && (*(int *)pSVar6 == *param_3)) {
        util__Darray_class_util__SharedPtr_struct_UIWidget_____Add(param_1,pSVar6);
      }
      local_c = (int *)((int)local_c + 1);
      iVar8 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
    } while ((int)local_c < iVar8);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00006917b0 006917b0_FUN_006917b0 ====
void FUN_006917b0(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_1,int *param_2,int param_3);

// decompiled by BatchDecomp @ 006917b0 name=FUN_006917b0 conv=unknown body=331

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_006917b0(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_1,int *param_2,int param_3)

{
  undefined4 stack0xfffffffc;
  DataParser *pDVar1;
  int iVar2;
  ReferenceController *this;
  ReferenceController *this_00;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *pDVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  DataParser *pDVar8;
  undefined1 local_20[12];
  int local_14;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = param_1;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar6 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body(param_1,iVar6);
  local_c = 0;
  iVar6 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  if (local_c < iVar6) {
    do {
      piVar7 = (int *)(**(code **)*param_2)(&local_c);
      if (((ReferenceController *)piVar7[1] != (ReferenceController *)0x0) &&
         (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar7[1]),
         !bVar4)) {
        *piVar7 = 0;
      }
      pDVar1 = *(DataParser **)(*(int *)(uintptr_t)piVar7 + 0x194);
      pDVar8 = GameManager__GetDataManager(*(GameManager **)(param_3 + 0x168));
      if (pDVar1 == pDVar8) {
        if (((ReferenceController *)piVar7[1] != (ReferenceController *)0x0) &&
           (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar7[1]),
           !bVar4)) {
          *piVar7 = 0;
        }
        cVar5 = (**(code **)(*(int *)*piVar7 + 8))();
        if (cVar5 != '\0') {
          if (((ReferenceController *)piVar7[1] != (ReferenceController *)0x0) &&
             (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar7[1]),
             !bVar4)) {
            *piVar7 = 0;
          }
          iVar6 = (**(code **)(*(int *)*piVar7 + 0x10))(local_20);
          if (*(char *)(iVar6 + 8) != '\0') {
            iVar6 = *(int *)(local_10 + 8);
            local_14 = iVar6 + 1;
            util__Darray_class_util__WeakPtr_class_Body_____SetSize(local_10,&local_14);
            pDVar3 = local_10;
            bVar4 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(local_10,iVar6);
            if (bVar4) {
              iVar2 = *(int *)(pDVar3 + 8);
              iVar6 = *(int *)(pDVar3 + 4);
              this = *(ReferenceController **)(iVar6 + -4 + iVar2 * 8);
              iVar6 = iVar6 + iVar2 * 8;
              *(int *)(iVar6 + -8) = *piVar7;
              this_00 = (ReferenceController *)piVar7[1];
              *(ReferenceController **)(iVar6 + -4) = this_00;
              if (this_00 != (ReferenceController *)0x0) {
                util__ReferenceController__AddWeakReference(this_00);
              }
              if (this != (ReferenceController *)0x0) {
                util__ReferenceController__ReleaseWeakReference(this);
              }
            }
          }
        }
      }
      local_c = local_c + 1;
      iVar6 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
    } while (local_c < iVar6);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000691900 00691900_FUN_00691900 ====
void FUN_00691900(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_1,int *param_2,int *param_3);

// decompiled by BatchDecomp @ 00691900 name=FUN_00691900 conv=unknown body=443

void FUN_00691900(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_1,int *param_2,int *param_3)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  ReferenceController *pRVar2;
  ReferenceController *this;
  uint *puVar3;
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar5 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  *(undefined ***)param_1 = ((void *)(0x0091e0b8u));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar5;
  if (((int)uVar5 < 0) || (0x3fffffff < (int)uVar5)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar5) {
    uVar8 = -(uint)((int)((ulonglong)uVar5 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 8);
    puVar6 = (uint *)operator_new__(-(uint)(0xfffffffb < uVar8) | uVar8 + 4);
    if (puVar6 == (uint *)0x0) {
      puVar6 = (uint *)0x0;
    }
    else {
      *puVar6 = uVar5;
      puVar6 = puVar6 + 1;
      puVar3 = puVar6;
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3 = puVar3 + 2;
      }
    }
    iVar9 = 0;
    *(uint **)(param_1 + 4) = puVar6;
    if (0 < *(int *)(param_1 + 0xc)) {
      do {
        iVar1 = *(int *)(param_1 + 4);
        pRVar2 = *(ReferenceController **)(iVar1 + 4 + iVar9 * 8);
        *(undefined4 *)(iVar1 + iVar9 * 8) = 0;
        *(undefined4 *)(iVar1 + 4 + iVar9 * 8) = 0;
        if (pRVar2 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar2);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(param_1 + 0xc));
    }
  }
  local_c = 0;
  iVar9 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  if (local_c < iVar9) {
    do {
      piVar7 = (int *)(**(code **)*param_2)(&local_c);
      if (((ReferenceController *)piVar7[1] != (ReferenceController *)0x0) &&
         (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar7[1]),
         !bVar4)) {
        *piVar7 = 0;
      }
      if (*(int *)(*(int *)(uintptr_t)piVar7 + 0x1e4) == *param_3) {
        iVar9 = *(int *)(param_1 + 8);
        local_10 = iVar9 + 1;
        util__Darray_class_util__WeakPtr_class_Body_____SetSize(param_1,&local_10);
        bVar4 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(param_1,iVar9);
        if (bVar4) {
          pRVar2 = *(ReferenceController **)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 8)
          ;
          iVar9 = *(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 8;
          *(int *)(iVar9 + -8) = *piVar7;
          this = (ReferenceController *)piVar7[1];
          *(ReferenceController **)(iVar9 + -4) = this;
          if (this != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this);
          }
          if (pRVar2 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar2);
          }
        }
      }
      local_c = local_c + 1;
      iVar9 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
    } while (local_c < iVar9);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00006939c0 006939c0_FUN_006939c0 ====
extern undefined4 FUN_00693820(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void FUN_006939c0(Darray_L_bool_P__G_ *param_1,Darray_L_bool_P__G_ *param_2,undefined4 param_3);

// decompiled by BatchDecomp @ 006939c0 name=FUN_006939c0 conv=unknown body=407

void FUN_006939c0(Darray_L_bool_P__G_ *param_1,Darray_L_bool_P__G_ *param_2,undefined4 param_3)

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
          FUN_00693820(local_30,local_34,&local_48,&local_44,&local_40,&local_3c,&local_c,param_3);
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


//==== 000069e5a0 0069e5a0_GetPowerBarTooltip ====
// decompiled by BatchDecomp @ 0069e5a0 name=GetPowerBarTooltip conv=__thiscall body=501

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class Str_L_char_G_ __thiscall UICompartmentInfo__GetPowerBarTooltip(void)const  */

Str_L_char_G_ * __thiscall
UICompartmentInfo__GetPowerBarTooltip(UICompartmentInfo *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xffffff80;
  undefined8 uVar1;
  Str_L_char_G_ SVar2;
  Str_L_char_G_ SVar3;
  CraftBlueprint *this_00;
  LocStr *this_01;
  Str_L_char_G_ *pSVar4;
  int unaff_EDI;
  float10 fVar5;
  char *in_stack_ffffff80;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  void *local_6c[3];
  void *local_60;
  Str_L_char_G_ local_54;
  Str_L_char_G_ local_48;
  Str_L_char_G_ local_3c;
  Str_L_char_G_ local_30;
  Str_L_char_G_ local_24;
  Str_L_char_G_ local_18;
  double local_c;
  
  fVar5 = (float10)(**(code **)(*(int *)this->EditedModule->ModuleType + 0x9c))();
  local_c = (double)fVar5;
  util__Str_char___Str_char__o5(&local_54,"PowerUsed_W");
  util__Str_char___Str_char__o5(&local_30,"GetEditedCraft()->GetTotalPowerGeneration_W()");
  pcVar7 = "ShipDesign ModuleNotEnoughPower Tooltip";
  pcVar6 = (char *)0x69e5e6;
  util__Str_char___Str_char__o5(&local_24,"ShipDesign ModuleNotEnoughPower Tooltip");
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff80,&local_54);
  SVar2.Capacity = (int)pcVar7;
  SVar2.Data = pcVar6;
  SVar2.Length = unaff_EDI;
  Print(&local_48,(double)CONCAT44(in_stack_ffffff80,(int)((ulonglong)local_c >> 0x20)),SVar2);
  this_00 = (CraftBlueprint *)
            MainManager__GetMetagame((MainManager *)this->ButtonManager->ParentManager);
  iVar8 = 0x69e634;
  CraftBlueprint__GetTotalPowerGeneration_W_Memoize(this_00);
  if ((char)(this_00->GetComposition_MemoizedValue).Data.Size == '\0') {
    pcVar6 = "IsValid()";
    in_stack_ffffff80 = (char *)0x13;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    iVar8 = 0x69e659;
    DebugBreak();
  }
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff80,&local_30);
  ((slice_view *)&uVar1)->_0_4_ = (this_00->GetComposition_MemoizedValue).Data._pad_0x0_0;
  ((slice_view *)&uVar1)->_4_4_ = (this_00->GetComposition_MemoizedValue).Data.Data;
  SVar3.Capacity = iVar8;
  SVar3.Data = pcVar6;
  SVar3.Length = unaff_EDI;
  Print(&local_3c,(double)CONCAT44(in_stack_ffffff80,(int)((ulonglong)uVar1 >> 0x20)),SVar3);
  local_18.Data = (char *)0x0;
  local_18.Capacity = 0;
  local_18.Length = 0;
  this_01 = (LocStr *)util__LocStr__LocStr((LocStr *)local_6c,&local_24,&local_18);
  pSVar4 = util__LocStr__operator__o3(this_01);
  if (pSVar4->Capacity < 1) {
    pcVar6 = "";
  }
  else {
    pcVar6 = pSVar4->Data;
  }
  util__Printf(__return_storage_ptr__,pcVar6);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_60 = (void *)0x0;
  }
  if (local_6c[0] != (void *)0x0) {
    operator_delete__(local_6c[0]);
    local_6c[0] = (void *)0x0;
  }
  if (local_18.Data != (char *)0x0) {
    operator_delete__(local_18.Data);
    local_18.Data = (char *)0x0;
  }
  if (local_3c.Data != (char *)0x0) {
    operator_delete__(local_3c.Data);
    local_3c.Data = (char *)0x0;
  }
  if (local_48.Data != (char *)0x0) {
    operator_delete__(local_48.Data);
    local_48.Data = (char *)0x0;
  }
  if (local_24.Data != (char *)0x0) {
    operator_delete__(local_24.Data);
    local_24.Data = (char *)0x0;
  }
  if (local_30.Data != (char *)0x0) {
    operator_delete__(local_30.Data);
    local_30.Data = (char *)0x0;
  }
  if (local_54.Data != (char *)0x0) {
    operator_delete__(local_54.Data);
  }
  return __return_storage_ptr__;
}


//==== 00006a1af0 006a1af0_FUN_006a1af0 ====
void FUN_006a1af0(int *param_1,int param_2,Str_L_char_G_ *param_3);

// decompiled by BatchDecomp @ 006a1af0 name=FUN_006a1af0 conv=unknown body=658

void FUN_006a1af0(int *param_1,int param_2,Str_L_char_G_ *param_3)

{
  undefined4 stack0xfffffffc;
  int *piVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  LocStr *this;
  Str_L_char_G_ *pSVar6;
  Str_L_char_G_ *pSVar7;
  void *local_8c[3];
  void *local_80;
  void *local_74[3];
  Str_L_char_G_ local_68;
  Str_L_char_G_ local_5c;
  Str_L_char_G_ local_50;
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  int *local_2c;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = 0;
  iVar4 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_10 < iVar4) {
    do {
      local_2c = (int *)(**(code **)*param_1)(&local_10);
      local_c = 0;
      local_2c = (int *)*local_2c;
      piVar1 = local_2c + 0x84;
      iVar4 = (**(code **)(*(int *)(uintptr_t)piVar1 + 0xc))();
      if (local_c < iVar4) {
        do {
          iVar4 = (**(code **)*piVar1)(&local_c);
          if ((*(int *)(iVar4 + 0xc) != 0) && (*(int *)(iVar4 + 0xc) == *(int *)(param_2 + 0xc))) {
LAB_006a1d7b:
            bVar3 = true;
            goto LAB_006a1ba1;
          }
          iVar4 = *(int *)(iVar4 + 0x10);
          if (iVar4 != 0) {
            piVar5 = *(int **)(iVar4 + 0x38);
            piVar2 = piVar5 + *(int *)(iVar4 + 0x3c);
            if (piVar5 != piVar2) {
              do {
                if (*piVar5 == *(int *)(param_2 + 0xc)) goto LAB_006a1d7b;
                piVar5 = piVar5 + 1;
              } while (piVar5 != piVar2);
            }
          }
          local_c = local_c + 1;
          iVar4 = (**(code **)(*(int *)(uintptr_t)piVar1 + 0xc))();
        } while (local_c < iVar4);
      }
      bVar3 = false;
LAB_006a1ba1:
      if (bVar3) {
        util__Str_char___Str_char__o5(&local_5c,"Dash");
        local_38.Data = (char *)0x0;
        local_38.Capacity = 0;
        local_38.Length = 0;
        this = (LocStr *)util__LocStr__LocStr((LocStr *)local_8c,&local_5c,&local_38);
        pSVar6 = util__LocStr__operator__o3(this);
        pSVar7 = (Str_L_char_G_ *)util__Str_char___Str_char__o5(&local_68,"\n");
        local_1c.Length = 0;
        local_1c.Data = (char *)0x0;
        local_1c.Capacity = 0;
        util__Str_char___Str_char(&local_1c,pSVar7);
        util__Str_char___operator__o10(&local_1c,pSVar6);
        util__Str_char___Str_char(&local_50,&local_1c);
        if (local_1c.Data != (char *)0x0) {
          operator_delete__(local_1c.Data);
          ((slice_view *)&local_1c)->_0_8_ = ((slice_view *)&local_1c)->_0_8_ & 0xffffffff00000000;
        }
        pSVar6 = (Str_L_char_G_ *)(**(code **)(*(int *)(uintptr_t)local_2c + 0x48))(local_74);
        local_28.Length = 0;
        local_28.Data = (char *)0x0;
        local_28.Capacity = 0;
        util__Str_char___Str_char(&local_28,&local_50);
        util__Str_char___operator__o10(&local_28,pSVar6);
        util__Str_char___Str_char(&local_44,&local_28);
        if (local_28.Data != (char *)0x0) {
          operator_delete__(local_28.Data);
          ((slice_view *)&local_28)->_0_8_ = ((slice_view *)&local_28)->_0_8_ & 0xffffffff00000000;
        }
        util__Str_char___operator__o10(param_3,&local_44);
        if (local_44.Data != (char *)0x0) {
          operator_delete__(local_44.Data);
          local_44.Data = (char *)0x0;
        }
        if (local_50.Data != (char *)0x0) {
          operator_delete__(local_50.Data);
          local_50.Data = (char *)0x0;
        }
        if (local_68.Data != (char *)0x0) {
          operator_delete__(local_68.Data);
          local_68.Data = (char *)0x0;
        }
        if (local_80 != (void *)0x0) {
          operator_delete__(local_80);
          local_80 = (void *)0x0;
        }
        if (local_8c[0] != (void *)0x0) {
          operator_delete__(local_8c[0]);
          local_8c[0] = (void *)0x0;
        }
        if (local_38.Data != (char *)0x0) {
          operator_delete__(local_38.Data);
          local_38.Data = (char *)0x0;
        }
        if (local_74[0] != (void *)0x0) {
          operator_delete__(local_74[0]);
          local_74[0] = (void *)0x0;
        }
        if (local_5c.Data != (char *)0x0) {
          operator_delete__(local_5c.Data);
          local_5c.Data = (char *)0x0;
        }
      }
      local_10 = local_10 + 1;
      iVar4 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
    } while (local_10 < iVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00006a1fa0 006a1fa0_FUN_006a1fa0 ====
void FUN_006a1fa0(Darray_L_class_util__Str_L_char_G___G_ *param_1,int *param_2);

// decompiled by BatchDecomp @ 006a1fa0 name=FUN_006a1fa0 conv=unknown body=419

void FUN_006a1fa0(Darray_L_class_util__Str_L_char_G___G_ *param_1,int *param_2)

{
  undefined4 stack0xfffffffc;
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  LocStr *this;
  Str_L_char_G_ *pSVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int local_1c;
  Str_L_char_G_ local_18;
  int *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = param_2;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar3 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  *(undefined ***)param_1 = ((void *)(0x0091995cu));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar3;
  if (((int)uVar3 < 0) || (0x3fffffff < (int)uVar3)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar3) {
    uVar6 = -(uint)((int)((ulonglong)uVar3 * 0xc >> 0x20) != 0) | (uint)((ulonglong)uVar3 * 0xc);
    puVar4 = (uint *)operator_new__(-(uint)(0xfffffffb < uVar6) | uVar6 + 4);
    if (puVar4 == (uint *)0x0) {
      puVar4 = (uint *)0x0;
    }
    else {
      *puVar4 = uVar3;
      puVar4 = puVar4 + 1;
      puVar1 = puVar4;
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1 = puVar1 + 3;
      }
    }
    *(uint **)(param_1 + 4) = puVar4;
    if (0 < *(int *)(param_1 + 0xc)) {
      iVar8 = 0;
      local_18.Data = (char *)0x0;
      local_18.Capacity = 0;
      iVar7 = 0;
      local_18.Length = 0;
      do {
        util__Str_char___operator__o8((Str_L_char_G_ *)(*(int *)(param_1 + 4) + iVar8),&local_18);
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + 0xc;
        param_2 = local_c;
      } while (iVar7 < *(int *)(param_1 + 0xc));
    }
  }
  local_c = (int *)0x0;
  iVar7 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  if ((int)local_c < iVar7) {
    do {
      this = (LocStr *)(**(code **)*param_2)(&local_c);
      pSVar5 = util__LocStr__operator__o3(this);
      util__Str_char___Str_char(&local_18,pSVar5);
      iVar7 = *(int *)(param_1 + 8);
      local_1c = iVar7 + 1;
      util__Darray_class_util__Str_char_____SetSize(param_1,&local_1c);
      bVar2 = util__Darray_class_util__Str_char_____CheckSize(param_1,iVar7);
      if (bVar2) {
        util__Str_char___operator__o8
                  ((Str_L_char_G_ *)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 8) * 3 + -3) * 4),
                   &local_18);
      }
      if (local_18.Data != (char *)0x0) {
        operator_delete__(local_18.Data);
        local_18.Data = (char *)0x0;
      }
      local_c = (int *)((int)local_c + 1);
      iVar7 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
    } while ((int)local_c < iVar7);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00006bce80 006bce80_FUN_006bce80 ====
void FUN_006bce80(int *param_1,int param_2,int param_3,int param_4);

// decompiled by BatchDecomp @ 006bce80 name=FUN_006bce80 conv=unknown body=404

void FUN_006bce80(int *param_1,int param_2,int param_3,int param_4)

{
  undefined4 stack0xfffffffc;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  Darray_L_class_Module_P__G_ *pDVar5;
  int iVar6;
  undefined **local_38;
  void *local_34;
  int local_28;
  int local_24;
  int local_20;
  undefined **local_1c;
  undefined4 *puStack_18;
  int iStack_14;
  int iStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = false;
  bVar1 = false;
  local_20 = 0;
  local_c = 0;
  iVar4 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_c < iVar4) {
    do {
      local_20 = (**(code **)*param_1)(&local_c);
      local_28 = param_4;
      if (*(int *)(local_20 + 8) == *(int *)(*(int *)(param_2 + 4) + 0x78)) {
        local_28 = param_3;
      }
      if (*(int *)(local_28 + 0x10) == 0) {
        bVar1 = true;
        local_1c = ((void *)(0x009194a4u));
        puStack_18 = (undefined4 *)0x0;
        iStack_14 = 0;
        iStack_10 = 1;
        puStack_18 = (undefined4 *)operator_new__(4);
        iVar4 = iStack_14;
        if (puStack_18 == (undefined4 *)0x0) {
          puStack_18 = (undefined4 *)0x0;
        }
        else {
          *puStack_18 = 0;
        }
        iVar6 = 0;
        if (0 < iStack_10) {
          do {
            puStack_18[iVar6] = 0;
            iVar6 = iVar6 + 1;
          } while (iVar6 < iStack_10);
        }
        local_24 = iStack_14 + 1;
        util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&local_1c,&local_24);
        bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&local_1c,iVar4);
        if (bVar3) {
          puStack_18[iStack_14 + -1] = *(undefined4 *)(local_28 + 0xc);
        }
        pDVar5 = (Darray_L_class_Module_P_G_ *)&local_1c;
      }
      else {
        bVar2 = true;
        pDVar5 = (Darray_L_class_Module_P_G_ *)
                 util__Darray_bool____Darray_bool((Darray_L_bool_P_G_ *)&local_38,
                            (Darray_L_bool_P_G_ *)(*(int *)(local_28 + 0x10) + 0x34));
      }
      util__Darray_class_Module____operator
                ((Darray_L_class_Module_P_G_ *)(*(int *)(local_20 + 0x10) + 0x34),pDVar5);
      if (bVar1) {
        bVar1 = false;
        local_1c = ((void *)(0x009194a4u));
        if (puStack_18 != (undefined4 *)0x0) {
          operator_delete__(puStack_18);
        }
        puStack_18 = (undefined4 *)0x0;
        local_1c = ((void *)(0x00919488u));
      }
      if (bVar2) {
        bVar2 = false;
        local_38 = ((void *)(0x009194a4u));
        if (local_34 != (void *)0x0) {
          operator_delete__(local_34);
        }
        local_34 = (void *)0x0;
        local_38 = ((void *)(0x00919488u));
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
    } while (local_c < iVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00006bd780 006bd780_FUN_006bd780 ====
extern undefined4 FUN_006bd5d0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void FUN_006bd780(Darray_L_bool_P__G_ *param_1,Darray_L_bool_P__G_ *param_2,undefined4 param_3);

// decompiled by BatchDecomp @ 006bd780 name=FUN_006bd780 conv=unknown body=407

void FUN_006bd780(Darray_L_bool_P__G_ *param_1,Darray_L_bool_P__G_ *param_2,undefined4 param_3)

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
          FUN_006bd5d0(local_30,local_34,&local_48,&local_44,&local_40,&local_3c,&local_c,param_3);
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


//==== 00006cff50 006cff50_FUN_006cff50 ====
void FUN_006cff50(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5, int *param_6,int *param_7);

// decompiled by BatchDecomp @ 006cff50 name=FUN_006cff50 conv=unknown body=563

void FUN_006cff50(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5,
                 int *param_6,int *param_7)

{
  undefined4 stack0xfffffffc;
  undefined4 *puVar1;
  Type TVar2;
  Str_L_char_G_ *pSVar3;
  char *pcVar4;
  undefined3 extraout_var;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  Str_L_char_G_ *pSVar9;
  Str_L_char_G_ local_4c;
  Str_L_char_G_ local_40;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  undefined4 *local_1c;
  undefined1 local_18[12];
  Str_L_char_G_ *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  ((slice_view *)&local_18)->_8_4_ = *param_3;
  local_c = (Str_L_char_G_ *)*param_5;
  iVar7 = *param_4;
  local_1c = param_1;
  if ((int)((slice_view *)&local_18)->_8_4_ < iVar7) {
    do {
      puVar1 = local_1c;
      if (*param_6 <= (int)local_c) break;
      pSVar9 = (Str_L_char_G_ *)(local_18 + 8);
      ((slice_view *)&local_18)->_4_4_ = (**(code **)*local_1c)();
      pSVar3 = (Str_L_char_G_ *)(**(code **)*puVar1)(&local_c);
      ((slice_view *)&local_18)->_0_4_ = pSVar3;
      util__Str_char___Str_char(&local_4c,(Str_L_char_G_ *)((slice_view *)&local_18)->_4_4_);
      util__Str_char___Str_char(&local_40,pSVar3);
      util__Str_char___Str_char(&local_34,&local_4c);
      pcVar8 = "";
      if (0 < local_34.Capacity) {
        pcVar8 = local_34.Data;
      }
      util__Str_char___Str_char(&local_28,&local_40);
      pcVar4 = "";
      if (0 < local_28.Capacity) {
        pcVar4 = local_28.Data;
      }
      TVar2 = util__FUN_006cff50(pcVar4,pcVar8);
      if (local_28.Data != (char *)0x0) {
        operator_delete__(local_28.Data);
        local_28.Data = (char *)0x0;
      }
      if (local_34.Data != (char *)0x0) {
        operator_delete__(local_34.Data);
        local_34.Data = (char *)0x0;
      }
      if (local_40.Data != (char *)0x0) {
        operator_delete__(local_40.Data);
        local_40.Data = (char *)0x0;
      }
      if (local_4c.Data != (char *)0x0) {
        operator_delete__(local_4c.Data);
        local_4c.Data = (char *)0x0;
      }
      pSVar3 = (Str_L_char_G_ *)*param_7;
      *param_7 = (int)((int)&pSVar3->Data + 1);
      if (CONCAT31(extraout_var,TVar2) == 2) {
        ((slice_view *)&local_18)->_4_4_ = pSVar3;
        pSVar3 = (Str_L_char_G_ *)(**(code **)*param_2)(local_18 + 4,((slice_view *)&local_18)->_0_4_);
        util__Str_char___operator__o8(pSVar3,pSVar9);
        local_c = (Str_L_char_G_ *)((int)&local_c->Data + 1);
      }
      else {
        ((slice_view *)&local_18)->_0_4_ = pSVar3;
        pSVar3 = (Str_L_char_G_ *)(**(code **)*param_2)(local_18,((slice_view *)&local_18)->_4_4_);
        util__Str_char___operator__o8(pSVar3,pSVar9);
        ((slice_view *)&local_18)->_8_4_ = (int)(char **)((slice_view *)&local_18)->_8_4_ + 1;
      }
      iVar7 = *param_4;
    } while ((int)((slice_view *)&local_18)->_8_4_ < iVar7);
    param_1 = local_1c;
    if ((int)((slice_view *)&local_18)->_8_4_ < iVar7) {
      do {
        ((slice_view *)&local_18)->_4_4_ = *param_7;
        pSVar9 = (Str_L_char_G_ *)local_18;
        *param_7 = (int)((int)&((Str_L_char_G_ *)((slice_view *)&local_18)->_4_4_)->Data + 1);
        ((slice_view *)&local_18)->_0_4_ = ((slice_view *)&local_18)->_8_4_;
        ((slice_view *)&local_18)->_8_4_ = (Str_L_char_G_ *)((int)&((Str_L_char_G_ *)((slice_view *)&local_18)->_8_4_)->Data + 1);
        uVar5 = (**(code **)*param_1)();
        pSVar3 = (Str_L_char_G_ *)(**(code **)*param_2)(local_18 + 4,uVar5);
        util__Str_char___operator__o8(pSVar3,pSVar9);
      } while ((int)((slice_view *)&local_18)->_8_4_ < *param_4);
    }
  }
  if ((int)local_c < *param_6) {
    do {
      pSVar9 = (Str_L_char_G_ *)local_18;
      ((slice_view *)&local_18)->_4_4_ = *param_7;
      *param_7 = (int)((int)&((Str_L_char_G_ *)((slice_view *)&local_18)->_4_4_)->Data + 1);
      ((slice_view *)&local_18)->_0_4_ = local_c;
      local_c = (Str_L_char_G_ *)((int)&local_c->Data + 1);
      uVar5 = (**(code **)*param_1)();
      pSVar3 = (Str_L_char_G_ *)(**(code **)*param_2)(local_18 + 4,uVar5);
      util__Str_char___operator__o8(pSVar3,pSVar9);
    } while ((int)local_c < *param_6);
  }
  iVar7 = *param_7;
  iVar6 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  if ((iVar6 < iVar7) || (iVar7 == 0)) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\sort.inl",0x21,
                    "OutIndex <= OutList.Num() && OutIndex",(char *)0x0);
    DebugBreak();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00006d48c0 006d48c0_FUN_006d48c0 ====
extern undefined4 FUN_004f1050(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void FUN_006d48c0(Darray_L_class_util__Reflectable_P__G_ *param_1, Darray_L_class_util__Reflectable_P__G_ *param_2,undefined4 param_3);

// decompiled by BatchDecomp @ 006d48c0 name=FUN_006d48c0 conv=unknown body=528

void FUN_006d48c0(Darray_L_class_util__Reflectable_P__G_ *param_1,
                 Darray_L_class_util__Reflectable_P__G_ *param_2,undefined4 param_3)

{
  undefined4 stack0xfffffffc;
  uint uVar1;
  void *pvVar2;
  int iVar3;
  Darray_L_class_util__Reflectable_P__G_ *pDVar4;
  uint uVar5;
  uint uVar6;
  int local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  Darray_L_class_util__Reflectable_P__G_ *local_34;
  Darray_L_class_util__Reflectable_P__G_ *local_30;
  undefined **local_2c;
  void *pvStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined **local_1c;
  void *pvStack_18;
  int iStack_14;
  uint uStack_10;
  uint local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  uVar1 = (**(code **)(*(int *)param_2 + 0xc))();
  if (uVar1 == 0) {
    util__Darray_class_util__Reflectable____Darray_class_util__Reflectable(param_1,param_2);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_2c = (undefined **)0x0;
  pvStack_28 = (void *)0x0;
  uStack_24 = 0;
  uStack_20 = 0;
  util__Darray_class_util__Reflectable____Darray_class_util__Reflectable((Darray_L_util__Reflectable_P_G_ *)&local_2c,param_2);
  local_1c = ((void *)(0x009199e4u));
  pvStack_18 = (void *)0x0;
  iStack_14 = 0;
  if (((int)uVar1 < 0) || (0x3fffffff < (int)uVar1)) {
    uStack_10 = 0;
  }
  else {
    uStack_10 = uVar1;
    if (0 < (int)uVar1) {
      uVar5 = -(uint)((int)((ulonglong)uVar1 * 4 >> 0x20) != 0) | (uint)((ulonglong)uVar1 * 4);
      pvVar2 = operator_new__(uVar5);
      if (pvVar2 == (void *)0x0) {
        pvVar2 = (void *)0x0;
      }
      else {
        memset(pvVar2,0,uVar5);
      }
      iVar3 = 0;
      pvStack_18 = pvVar2;
      if (0 < (int)uStack_10) {
        do {
          *(undefined4 *)((int)pvVar2 + iVar3 * 4) = 0;
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)uStack_10);
      }
    }
  }
  iVar3 = iStack_14;
  local_c = uVar1;
  util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&local_1c,(int *)&local_c);
  util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&local_1c,iVar3);
  uVar5 = 1;
  pDVar4 = (Darray_L_util__Reflectable_P_G_ *)&local_2c;
  local_34 = (Darray_L_util__Reflectable_P_G_ *)&local_1c;
  if (1 < (int)uVar1) {
    do {
      local_c = 0;
      local_38 = 0;
      uVar6 = uVar5;
      local_30 = pDVar4;
      if (0 < (int)uVar1) {
        do {
          local_44 = uVar1;
          if ((int)uVar6 < (int)uVar1) {
            local_44 = uVar6;
          }
          local_3c = uVar1;
          if ((int)(local_44 + uVar5) < (int)uVar1) {
            local_3c = local_44 + uVar5;
          }
          local_48 = local_38;
          local_40 = local_44;
          FUN_004f1050(local_30,local_34,&local_48,&local_44,&local_40,&local_3c,&local_c,param_3);
          local_38 = local_38 + uVar5 * 2;
          uVar6 = uVar6 + uVar5 * 2;
        } while (local_38 < (int)uVar1);
      }
      pDVar4 = local_34;
      if (local_c != uVar1) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\sort.inl",0x3e,
                        "OutIndex == Size",(char *)0x0);
        DebugBreak();
      }
      uVar5 = uVar5 * 2;
      local_34 = local_30;
    } while ((int)uVar5 < (int)uVar1);
  }
  local_30 = pDVar4;
  util__Darray_class_util__Reflectable____Darray_class_util__Reflectable(param_1,pDVar4);
  local_1c = ((void *)(0x009199e4u));
  if (pvStack_18 != (void *)0x0) {
    operator_delete__(pvStack_18);
  }
  pvStack_18 = (void *)0x0;
  local_1c = ((void *)(0x00919488u));
  local_2c = ((void *)(0x009199e4u));
  if (pvStack_28 != (void *)0x0) {
    operator_delete__(pvStack_28);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00006d95f0 006d95f0_FUN_006d95f0 ====
void FUN_006d95f0(Str_L_char_G_ *param_1,undefined4 param_2);
extern undefined4 FUN_006d9a30(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 006d95f0 name=FUN_006d95f0 conv=unknown body=548

void FUN_006d95f0(Str_L_char_G_ *param_1,undefined4 param_2)

{
  undefined4 stack0x0000000c;
  undefined4 stack0xfffffffc;
  ReferenceController *this;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  ReferenceController *this_00;
  Str_L_char_G_ *pSVar5;
  Str_L_char_G_ local_74;
  Str_L_char_G_ *pSStack_68;
  ReferenceController *local_64;
  undefined1 local_60[12];
  Str_L_char_G_ *local_54;
  ReferenceController *local_50;
  Str_L_char_G_ *local_4c;
  ReferenceController *local_48;
  undefined1 local_44[8];
  int iStack_3c;
  undefined4 uStack_38;
  Str_L_char_G_ *local_34;
  ReferenceController *local_30;
  uint local_2c;
  Str_L_char_G_ *local_28;
  uint local_24;
  Str_L_char_G_ local_20;
  Str_L_char_G_ *pSStack_14;
  ReferenceController *local_10;
  char local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_28 = param_1;
  local_74.Length = (int)&stack0x0000000c;
  pSStack_68 = &local_20;
  local_10 = (ReferenceController *)0x0;
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  local_20.Length = 0;
  pSStack_14 = (Str_L_char_G_ *)0x0;
  local_c = '\0';
  local_24 = 0;
  FUN_006d9a30(param_2,CONCAT44(pSStack_68,local_74.Length),&local_24);
  if (local_c == '\0') {
    local_30 = (ReferenceController *)0x0;
    this_00 = (ReferenceController *)0x0;
    pSVar5 = (Str_L_char_G_ *)local_44;
    ((slice_view *)&local_44)->_0_4_ = (char *)0x0;
    ((slice_view *)&local_44)->_4_4_ = (void *)0x0;
    iStack_3c = 0;
    uStack_38 = 0;
    local_34 = (Str_L_char_G_ *)0x0;
    bVar3 = false;
    bVar2 = false;
    bVar1 = true;
    local_2c = local_2c & 0xffffff00;
  }
  else {
    util__Str_char___Str_char((Str_L_char_G_ *)(local_60 + 8),&local_20);
    this_00 = local_10;
    pSVar5 = pSStack_14;
    local_4c = pSStack_14;
    local_48 = local_10;
    if (local_10 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(local_10);
    }
    uVar4 = local_24;
    util__Str_char___Str_char(&local_74,(Str_L_char_G_ *)(local_60 + 8));
    pSStack_68 = pSVar5;
    local_64 = this_00;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_00);
    }
    util__Str_char___Str_char((Str_L_char_G_ *)(local_44 + 4),&local_74);
    local_34 = pSVar5;
    local_30 = this_00;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_00);
    }
    local_2c = uVar4;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(this_00);
    }
    if (local_74.Data != (char *)0x0) {
      operator_delete__(local_74.Data);
    }
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(this_00);
    }
    if ((void *)((slice_view *)&local_60)->_8_4_ != (void *)0x0) {
      operator_delete__((void *)((slice_view *)&local_60)->_8_4_);
    }
    util__Str_char___Str_char((Str_L_char_G_ *)local_60,(Str_L_char_G_ *)(local_44 + 4));
    local_54 = pSVar5;
    local_50 = this_00;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_00);
    }
    local_4c = (Str_L_char_G_ *)uVar4;
    pSVar5 = (Str_L_char_G_ *)local_60;
    ((slice_view *)&local_48)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&local_48)->_1_3_[0] | (((slice_view *)&local_48)->_1_3_[1] << 8) | (((slice_view *)&local_48)->_1_3_[2] << 16)) << 8));
    bVar3 = true;
    bVar2 = true;
    bVar1 = false;
  }
  util__Str_char___Str_char(local_28,pSVar5);
  local_28[1].Data = pSVar5[1].Data;
  this = (ReferenceController *)pSVar5[1].Capacity;
  local_28[1].Capacity = (int)this;
  if (this != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this);
  }
  local_28[1].Length = pSVar5[1].Length;
  *(undefined1 *)&local_28[2].Data = *(undefined1 *)&pSVar5[2].Data;
  if (bVar1) {
    if (local_34 != (Str_L_char_G_ *)0x0) {
      util__ReferenceController__ReleaseWeakReference((ReferenceController *)local_34);
    }
    if ((char *)((slice_view *)&local_44)->_0_4_ != (char *)0x0) {
      operator_delete__((void *)((slice_view *)&local_44)->_0_4_);
    }
  }
  if (bVar2) {
    if (local_50 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_50);
    }
    if ((char *)((slice_view *)&local_60)->_0_4_ != (char *)0x0) {
      operator_delete__((void *)((slice_view *)&local_60)->_0_4_);
    }
  }
  if (bVar3) {
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(this_00);
    }
    if ((void *)((slice_view *)&local_44)->_4_4_ != (void *)0x0) {
      operator_delete__((void *)((slice_view *)&local_44)->_4_4_);
    }
  }
  if (local_10 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_10);
  }
  if (local_20.Data != (char *)0x0) {
    operator_delete__(local_20.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00006ea7d0 006ea7d0_FUN_006ea7d0 ====
void FUN_006ea7d0(Darray_L_struct_WorldLight_G_ *param_1,int *param_2);

// decompiled by BatchDecomp @ 006ea7d0 name=FUN_006ea7d0 conv=unknown body=398

void FUN_006ea7d0(Darray_L_struct_WorldLight_G_ *param_1,int *param_2)

{
  undefined4 stack0xfffffffc;
  bool bVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 local_80[24];
  undefined1 local_20;
  undefined4 *local_18;
  int local_14;
  int *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_10 = param_2;
  uVar2 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  *(undefined ***)param_1 = ((void *)(0x00924d68u));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar2;
  if (((int)uVar2 < 0) || (0x3fffffff < (int)uVar2)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar2) {
    pvVar3 = operator_new__(-(uint)((int)((ulonglong)uVar2 * 0x68 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar2 * 0x68));
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else if (uVar2 != 0) {
      puVar4 = (undefined4 *)((int)pvVar3 + 0x28);
      do {
        puVar4[-10] = 0;
        puVar4[-9] = 0;
        puVar4[-8] = 0;
        puVar4[-7] = 0;
        puVar4[-6] = 0;
        puVar4[-5] = 0;
        puVar4[-4] = 0;
        puVar4[-3] = 0;
        puVar4[-2] = 0;
        puVar4[-1] = 0;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[7] = 0;
        puVar4[8] = 0;
        puVar4[9] = 0;
        puVar4[10] = 0;
        puVar4[0xb] = 0;
        puVar4[0xc] = 0;
        puVar4[0xd] = 0;
        *(undefined1 *)(puVar4 + 0xe) = 0;
        uVar2 = uVar2 - 1;
        puVar4 = puVar4 + 0x1a;
      } while (uVar2 != 0);
    }
    iVar7 = 0;
    *(void **)(param_1 + 4) = pvVar3;
    if (0 < *(int *)(param_1 + 0xc)) {
      iVar5 = 0;
      do {
        local_20 = 0;
        puVar8 = (undefined4 *)(*(int *)(param_1 + 4) + iVar5);
        local_80[0] = 0;
        local_80[1] = 0;
        local_80[2] = 0;
        local_80[3] = 0;
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + 0x68;
        local_80[4] = 0;
        local_80[5] = 0;
        local_80[6] = 0;
        local_80[7] = 0;
        local_80[8] = 0;
        local_80[9] = 0;
        local_80[10] = 0;
        local_80[0xb] = 0;
        local_80[0xc] = 0;
        local_80[0xd] = 0;
        local_80[0xe] = 0;
        local_80[0xf] = 0;
        local_80[0x10] = 0;
        local_80[0x11] = 0;
        local_80[0x12] = 0;
        local_80[0x13] = 0;
        local_80[0x14] = 0;
        local_80[0x15] = 0;
        local_80[0x16] = 0;
        local_80[0x17] = 0;
        puVar4 = local_80;
        for (iVar6 = 0x1a; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar8 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar8 = puVar8 + 1;
        }
        param_2 = local_10;
      } while (iVar7 < *(int *)(param_1 + 0xc));
    }
  }
  local_c = 0;
  iVar7 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  if (local_c < iVar7) {
    do {
      local_18 = (undefined4 *)(**(code **)*param_2)(&local_c);
      if (*(char *)(local_18 + 0x18) != '\0') {
        iVar7 = *(int *)(param_1 + 8);
        local_14 = iVar7 + 1;
        util__Darray_struct_WorldLight___SetSize(param_1,&local_14);
        bVar1 = util__Darray_struct_WorldLight___CheckSize(param_1,iVar7);
        if (bVar1) {
          puVar4 = local_18;
          puVar8 = (undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 0x68 + -0x68);
          for (iVar7 = 0x1a; param_2 = local_10, iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar8 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar8 = puVar8 + 1;
          }
        }
      }
      local_c = local_c + 1;
      iVar7 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
    } while (local_c < iVar7);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00006fd550 006fd550_FUN_006fd550 ====
extern undefined4 FUN_006fd3b0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void FUN_006fd550(Darray_L_class_NewsItem_P__G_ *param_1,Darray_L_class_NewsItem_P__G_ *param_2, undefined4 param_3);

// decompiled by BatchDecomp @ 006fd550 name=FUN_006fd550 conv=unknown body=407

void FUN_006fd550(Darray_L_class_NewsItem_P__G_ *param_1,Darray_L_class_NewsItem_P__G_ *param_2,
                 undefined4 param_3)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  Darray_L_class_NewsItem_P__G_ *pDVar2;
  int iVar3;
  int iVar4;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  Darray_L_class_NewsItem_P__G_ *local_34;
  Darray_L_class_NewsItem_P__G_ *local_30;
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
    util__Darray_class_NewsItem____Darray_class_NewsItem__o2(param_1,param_2);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_2c = (undefined **)0x0;
  pvStack_28 = (void *)0x0;
  uStack_24 = 0;
  uStack_20 = 0;
  util__Darray_class_NewsItem____Darray_class_NewsItem__o2((Darray_L_class_NewsItem_P_G_ *)&local_2c,param_2);
  local_1c = (undefined **)0x0;
  pvStack_18 = (void *)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  util__Darray_class_NewsItem____Darray_class_NewsItem((Darray_L_class_NewsItem_P_G_ *)&local_1c,iVar1)
  ;
  iVar3 = iStack_14;
  local_c = iVar1;
  util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&local_1c,&local_c);
  util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&local_1c,iVar3);
  iVar3 = 1;
  pDVar2 = (Darray_L_class_NewsItem_P_G_ *)&local_2c;
  local_34 = (Darray_L_class_NewsItem_P_G_ *)&local_1c;
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
          FUN_006fd3b0(local_30,local_34,&local_48,&local_44,&local_40,&local_3c,&local_c,param_3);
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
  util__Darray_class_NewsItem____Darray_class_NewsItem__o2(param_1,pDVar2);
  local_1c = ((void *)(0x009234fcu));
  if (pvStack_18 != (void *)0x0) {
    operator_delete__(pvStack_18);
  }
  pvStack_18 = (void *)0x0;
  local_1c = ((void *)(0x00919488u));
  local_2c = ((void *)(0x009234fcu));
  if (pvStack_28 != (void *)0x0) {
    operator_delete__(pvStack_28);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000070c5d0 0070c5d0_FUN_0070c5d0 ====
void FUN_0070c5d0(double *param_1,double *param_2,double *param_3,double param_4,int param_5, double param_6);

// decompiled by BatchDecomp @ 0070c5d0 name=FUN_0070c5d0 conv=unknown body=304

void FUN_0070c5d0(double *param_1,double *param_2,double *param_3,double param_4,int param_5,
                 double param_6)

{
  undefined4 stack0xfffffffc;
  double dVar1;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = param_4;
  dVar1 = util__Sin(&local_10);
  local_20 = (local_10 - dVar1 * *param_1) - *param_2;
  local_18 = param_4;
  local_28 = util__Cos(&local_18);
  param_4 = param_4 - local_20 / (/*3ff0000000000000*/1.0 - local_28 * *param_3);
  local_18 = param_4;
  if (0 < param_5) {
    local_10 = param_4;
    dVar1 = util__Sin(&local_10);
    local_20 = local_10 - dVar1 * *param_1;
    local_28 = local_20 - *param_2;
    local_20 = util__Abs(&local_28);
    if (param_6 < local_20) {
      FUN_0070c5d0(param_1,param_2,param_3,param_4,param_5 + -1,/*3e45798ee2308c3a*/1e-08);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000070e610 0070e610_GetAbsoluteOrbitPoint_km ====
// decompiled by BatchDecomp @ 0070e610 name=GetAbsoluteOrbitPoint_km conv=__thiscall body=470

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct Vec3_L_double_G_ __thiscall FixedOrbit__GetAbsoluteOrbitPoint_km(struct
   Vec3_L_double_G_,double,double,bool,class util__Maybe_L_struct_FixedOrbit_G)const  */

Vec3_L_double_G_ * __thiscall
FixedOrbit__GetAbsoluteOrbitPoint_km(FixedOrbit *this,Vec3_L_double_G_ *__return_storage_ptr__,undefined4 param_3_00,
          undefined4 param_1,undefined4 param_5,undefined4 param_6,double param_7,undefined4 param_8,undefined4 param_2,undefined4 param_10,undefined4 param_3,char param_12)

{
  undefined4 stack0x00000034;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double *pdVar4;
  Vec3_L_double_G_ *pVVar5;
  Vec3_L_double_G_ *pVVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  ReferenceController *in_stack_00000044;
  undefined **in_stack_0000004c;
  void *in_stack_00000050;
  undefined **in_stack_00000094;
  void *in_stack_00000098;
  char in_stack_0000011c;
  undefined1 local_84[48];
  Vec3_L_double_G_ local_54;
  double local_3c;
  double local_34;
  double local_2c;
  double local_24;
  Vec3_L_double_G_ local_1c;
  
  ((slice_view *)&local_54.X)->_0_4_ = param_3_00;
  ((slice_view *)&local_54.X)->_4_4_ = param_1;
  ((slice_view *)&local_54.Y)->_0_4_ = param_5;
  ((slice_view *)&local_54.Y)->_4_4_ = param_6;
  local_3c = param_7;
  pdVar4 = (double *)GetRelativeOrbitalState(this,(double)CONCAT44(param_10,local_84));
  dVar7 = (double)CONCAT44(((slice_view *)&local_54.Y)->_4_4_,((slice_view *)&local_54.Y)->_0_4_);
  dVar9 = (double)CONCAT44(((slice_view *)&local_54.X)->_4_4_,((slice_view *)&local_54.X)->_0_4_);
  local_34 = pdVar4[2];
  local_1c.X = *pdVar4;
  local_1c.Y = pdVar4[1];
  if (param_12 == '\0') {
    local_2c = local_1c.Y;
    local_24 = local_1c.X;
  }
  else {
    local_34 = local_34 + local_3c;
    local_24 = dVar9 + local_1c.X;
    local_1c.X = dVar9 + local_1c.X;
    local_2c = dVar7 + local_1c.Y;
    local_1c.Y = dVar7 + local_1c.Y;
  }
  local_2c = local_1c.Y;
  local_24 = local_1c.X;
  if (in_stack_0000011c == '\0') {
    local_54.X = local_1c.X;
    local_54.Y = local_1c.Y;
    pVVar6 = &local_54;
    local_54.Z = local_34;
  }
  else {
    pVVar5 = GetUpVector((FixedOrbit *)&stack0x00000034,&local_1c);
    dVar8 = pVVar5->X * local_24 + pVVar5->Y * local_2c + pVVar5->Z * local_34;
    pVVar6 = &local_1c;
    dVar7 = (double)CONCAT44(((slice_view *)&local_54.Y)->_4_4_,((slice_view *)&local_54.Y)->_0_4_);
    local_1c.X = local_24 - dVar8 * pVVar5->X;
    dVar9 = (double)CONCAT44(((slice_view *)&local_54.X)->_4_4_,((slice_view *)&local_54.X)->_0_4_);
    local_1c.Z = local_34 - dVar8 * pVVar5->Z;
    local_1c.Y = local_2c - dVar8 * pVVar5->Y;
    local_54.X = dVar9;
    local_54.Y = dVar7;
  }
  uVar1 = *(undefined4 *)((int)&pVVar6->X + 4);
  uVar2 = *(undefined4 *)&pVVar6->Y;
  uVar3 = *(undefined4 *)((int)&pVVar6->Y + 4);
  *(undefined4 *)&__return_storage_ptr__->X = *(undefined4 *)&pVVar6->X;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Y = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = uVar3;
  __return_storage_ptr__->Z = pVVar6->Z;
  if (param_12 == '\0') {
    __return_storage_ptr__->X = __return_storage_ptr__->X + dVar9;
    __return_storage_ptr__->Y = __return_storage_ptr__->Y + dVar7;
    __return_storage_ptr__->Z = __return_storage_ptr__->Z + local_3c;
  }
  in_stack_00000094 = ((void *)(0x009194a4u));
  if (in_stack_00000098 != (void *)0x0) {
    operator_delete__(in_stack_00000098);
  }
  in_stack_00000098 = (void *)0x0;
  in_stack_00000094 = ((void *)(0x00919488u));
  in_stack_0000004c = ((void *)(0x00919980u));
  if (in_stack_00000050 != (void *)0x0) {
    operator_delete__(in_stack_00000050);
    in_stack_00000050 = (void *)0x0;
  }
  if (in_stack_00000044 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(in_stack_00000044);
  }
  return __return_storage_ptr__;
}


//==== 000074a5e0 0074a5e0_FUN_0074a5e0 ====
void FUN_0074a5e0(int *param_1,Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *param_2,int *param_3);

// decompiled by BatchDecomp @ 0074a5e0 name=FUN_0074a5e0 conv=unknown body=391

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_0074a5e0(int *param_1,Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *param_2,int *param_3)

{
  undefined4 stack0xfffffffc;
  ReferenceController *this;
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  LauncherSubCompartment *this_00;
  Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *pDVar5;
  ReferenceControllerRegistry *this_01;
  int *piVar6;
  int *piVar7;
  undefined ***pppuVar8;
  int *piVar9;
  undefined **local_28;
  SharedPtr_L_struct_UIWidget_G_ *local_24;
  int *local_18;
  Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *local_14;
  ReferenceController *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18 = param_1;
  local_c = 0;
  iVar2 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_c < iVar2) {
    do {
      puVar3 = (undefined4 *)(**(code **)*param_1)(&local_c);
      iVar4 = (**(code **)(*(int *)param_2 + 0xc))();
      iVar2 = *param_3;
      if (0 < iVar2 - iVar4) {
        if (((ReferenceController *)puVar3[1] != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar3[1]),
           !bVar1)) {
          *puVar3 = 0;
        }
        pppuVar8 = &local_28;
        this_00 = (LauncherSubCompartment *)
                  (**(code **)(*(int *)*puVar3 + 0xb0))(pppuVar8,iVar2 - iVar4);
        pDVar5 = (Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *)
                 LauncherSubCompartment__LaunchAndReturnBodies(this_00,(int)pppuVar8);
        local_14 = param_2;
        if (*(int *)(param_2 + 8) == 0) {
          util__Darray_class_util__SharedPtr_struct_UIWidget_____operator__o2(param_2,pDVar5);
        }
        else {
          iVar2 = (**(code **)(*(int *)pDVar5 + 0xc))();
          if (iVar2 != 0) {
            iVar2 = *(int *)(param_2 + 8);
            iVar4 = (**(code **)(*(int *)pDVar5 + 0xc))();
            local_10 = (ReferenceController *)(iVar4 + *(int *)(param_2 + 8));
            util__Darray_class_util__SharedPtr_struct_UIWidget_____SetSize(param_2,(int *)&local_10)
            ;
            util__Darray_class_util__SharedPtr_struct_UIWidget_____CheckSize(param_2,iVar2);
            piVar6 = *(int **)(pDVar5 + 4);
            piVar7 = (int *)(*(int *)(param_2 + 4) + iVar2 * 8);
            if (piVar7 != (int *)(*(int *)(param_2 + 4) + *(int *)(param_2 + 8) * 8)) {
              do {
                piVar9 = (int *)*piVar7;
                local_10 = (ReferenceController *)piVar7[1];
                *piVar7 = *piVar6;
                this = (ReferenceController *)piVar6[1];
                piVar7[1] = (int)this;
                if (this != (ReferenceController *)0x0) {
                  util__ReferenceController__AddStrongReference(this);
                }
                if ((local_10 != (ReferenceController *)0x0) &&
                   (bVar1 = util__ReferenceController__ReleaseStrongReference(local_10), bVar1)) {
                  if (piVar9 != (int *)0x0) {
                    (**(code **)(*piVar9 + 4))(1);
                  }
                  this_01 = util__ReferenceControllerRegistry__Get();
                  util__ReferenceControllerRegistry__PointerWasDestroyed(this_01,piVar9);
                }
                piVar7 = piVar7 + 2;
                piVar6 = piVar6 + 2;
              } while (piVar7 != (int *)(*(int *)(local_14 + 4) + *(int *)(local_14 + 8) * 8));
            }
          }
        }
        local_28 = ((void *)(0x0091d1bcu));
        if (local_24 != (SharedPtr_L_struct_UIWidget_G_ *)0x0) {
          util__SharedPtr_struct_UIWidget____vector_deleting_destructor(local_24,3);
        }
        local_24 = (SharedPtr_L_struct_UIWidget_G_ *)0x0;
        local_28 = ((void *)(0x00919488u));
        param_1 = local_18;
      }
      local_c = local_c + 1;
      iVar2 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
    } while (local_c < iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000750bc0 00750bc0_GetNearbyEnemyFleets ====
extern undefined4 FUN_0074ca90(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00750bc0 name=GetNearbyEnemyFleets conv=__thiscall body=651

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: class util__Darray_L_class_util__WeakPtr_L_class_Fleet_G___G __thiscall
   StrategicAI__GetNearbyEnemyFleets(class util__WeakPtr_L_class_Fleet_G,bool)const  */

void __thiscall
StrategicAI__GetNearbyEnemyFleets(StrategicAI *this,Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_2,Fleet *param_3,
          ReferenceController *param_4)

{
  undefined4 stack0x00000010;
  undefined4 stack0xfffffffc;
  ReferenceController *pRVar1;
  bool bVar2;
  char cVar3;
  Fleet *pFVar4;
  int iVar5;
  undefined4 *puVar6;
  Faction *pFVar7;
  Faction *pFVar8;
  ReferenceController *pRVar9;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_8c[16];
  undefined4 *local_7c;
  int iStack_78;
  int iStack_74;
  undefined4 uStack_70;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *local_6c;
  undefined **local_68;
  void *local_64;
  undefined8 *local_28;
  undefined1 *puStack_24;
  undefined ***local_20;
  undefined8 local_1c;
  StrategicAI *local_14;
  int local_10;
  Fleet *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_6c = param_2;
  pFVar4 = param_3;
  pRVar9 = param_4;
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_4);
  }
  GetInterceptProtocol(this,&local_68,pFVar4,pRVar9);
  local_1c = 0;
  if ((param_4 != (ReferenceController *)0x0) &&
     (bVar2 = util__ReferenceController__IsDataStillValid(param_4), !bVar2)) {
    param_3 = (Fleet *)0x0;
  }
  Fleet__GetBodyWeAreInHillSphereOf(param_3);
  _local_28 = CONCAT44(&stack0x00000010,&local_1c);
  local_14 = this;
  pFVar4 = (Fleet *)StrategicManager__GetRelevantFleets(this->Parent);
  local_7c = (undefined4 *)0x0;
  iStack_78 = 0;
  iStack_74 = 0;
  uStack_70 = 0;
  local_c = pFVar4;
  iVar5 = (**(code **)(*(int *)pFVar4 + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_7c,iVar5);
  local_10 = 0;
  iVar5 = (**(code **)(*(int *)pFVar4 + 0xc))();
  if (local_10 < iVar5) {
    do {
      puVar6 = (undefined4 *)(**(code **)*(int *)pFVar4)(&local_10);
      if (((ReferenceController *)puVar6[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar6[1]),
         !bVar2)) {
        *puVar6 = 0;
      }
      local_c = (Fleet *)*puVar6;
      if (local_14->ControlsAllies == false) {
        pFVar7 = StrategicManager__GetPlayerAlliance(local_14->Parent);
      }
      else {
        pFVar7 = StrategicManager__GetEnemyAlliance(local_14->Parent);
      }
      pFVar8 = Fleet__GetAlliance(local_c);
      iVar5 = iStack_74;
      if (pFVar8 == pFVar7) {
        local_c = (Fleet *)(iStack_74 + 1);
        util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_7c,(int *)&local_c);
        bVar2 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_7c,iVar5);
        if (bVar2) {
          pRVar9 = *(ReferenceController **)(iStack_78 + -4 + iStack_74 * 8);
          iVar5 = iStack_78 + iStack_74 * 8;
          *(undefined4 *)(iVar5 + -8) = *puVar6;
          pRVar1 = (ReferenceController *)puVar6[1];
          *(ReferenceController **)(iVar5 + -4) = pRVar1;
          if (pRVar1 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(pRVar1);
          }
          if (pRVar9 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar9);
          }
        }
      }
      local_10 = local_10 + 1;
      iVar5 = (**(code **)(*(int *)pFVar4 + 0xc))();
      param_2 = local_6c;
    } while (local_10 < iVar5);
  }
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_8c);
  local_20 = &local_68;
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  iVar5 = (*(code *)local_7c[3])();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body(param_2,iVar5);
  local_c = (Fleet *)0x0;
  iVar5 = (*(code *)local_7c[3])();
  if ((int)local_c < iVar5) {
    do {
      puVar6 = (undefined4 *)(*(code *)*local_7c)(&local_c);
      cVar3 = FUN_0074ca90(puVar6);
      if (cVar3 != '\0') {
        iVar5 = *(int *)(param_2 + 8);
        local_6c = (Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)(iVar5 + 1);
        util__Darray_class_util__WeakPtr_class_Body_____SetSize(param_2,(int *)&local_6c);
        bVar2 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(param_2,iVar5);
        if (bVar2) {
          pRVar9 = *(ReferenceController **)(*(int *)(param_2 + 4) + -4 + *(int *)(param_2 + 8) * 8)
          ;
          iVar5 = *(int *)(param_2 + 4) + *(int *)(param_2 + 8) * 8;
          *(undefined4 *)(iVar5 + -8) = *puVar6;
          pRVar1 = (ReferenceController *)puVar6[1];
          *(ReferenceController **)(iVar5 + -4) = pRVar1;
          if (pRVar1 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(pRVar1);
          }
          if (pRVar9 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar9);
          }
        }
      }
      local_c = (Fleet *)((int)&local_c->_pad_0x0_0 + 1);
      iVar5 = (*(code *)local_7c[3])();
    } while ((int)local_c < iVar5);
  }
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_7c);
  if (((slice_view *)&local_1c)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_1c)->_4_4_);
  }
  local_68 = ((void *)(0x00919980u));
  if (local_64 != (void *)0x0) {
    operator_delete__(local_64);
    local_64 = (void *)0x0;
  }
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000751ab0 00751ab0_IsCoplanar ====
// decompiled by BatchDecomp @ 00751ab0 name=IsCoplanar conv=__thiscall body=372

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall StrategicAI__IsCoplanar(class util__WeakPtr_L_class_Fleet_G,struct
   FixedOrbit,double,double)const  */

bool __thiscall
StrategicAI__IsCoplanar(undefined4 param_1,Fleet *param_2,ReferenceController *param_3)

{
  undefined4 stack0x0000000c;
  undefined4 stack0xfffffffc;
  bool bVar1;
  undefined1 uVar2;
  FixedOrbit *pFVar3;
  ReferenceController *in_stack_00000018;
  ReferenceController *in_stack_0000001c;
  undefined **in_stack_00000024;
  void *in_stack_00000028;
  undefined **in_stack_0000006c;
  void *in_stack_00000070;
  undefined1 local_f8[28];
  void *local_dc;
  undefined **local_98;
  void *local_94;
  char local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((param_3 != (ReferenceController *)0x0) &&
     (bVar1 = util__ReferenceController__IsDataStillValid(param_3), !bVar1)) {
    param_2 = (Fleet *)0x0;
  }
  pFVar3 = (FixedOrbit *)Fleet__GetOrbitParameters(param_2);
  FixedOrbit__FixedOrbit((FixedOrbit *)local_f8,pFVar3);
  local_10 = *(char *)&pFVar3[1].OrbitedBody.Pointer;
  if (((local_10 == '\0') || (in_stack_0000001c != (ReferenceController *)((slice_view *)&local_f8)->_16_4_)) ||
     (in_stack_00000018 != (ReferenceController *)((slice_view *)&local_f8)->_12_4_)) {
    uVar2 = false;
  }
  else {
    if (local_10 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    uVar2 = FixedOrbit__IsACoplanarOrbit((FixedOrbit *)&stack0x0000000c,(FixedOrbit *)local_f8);
  }
  local_98 = ((void *)(0x009194a4u));
  if (local_94 != (void *)0x0) {
    operator_delete__(local_94);
  }
  local_94 = (void *)0x0;
  local_98 = ((void *)(0x00919488u));
  ((slice_view *)&local_f8)->_24_4_ = ((void *)(0x00919980u));
  if (local_dc != (void *)0x0) {
    operator_delete__(local_dc);
    local_dc = (void *)0x0;
  }
  if ((ReferenceController *)((slice_view *)&local_f8)->_16_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)((slice_view *)&local_f8)->_16_4_);
  }
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  in_stack_0000006c = ((void *)(0x009194a4u));
  if (in_stack_00000070 != (void *)0x0) {
    operator_delete__(in_stack_00000070);
  }
  in_stack_00000070 = (void *)0x0;
  in_stack_0000006c = ((void *)(0x00919488u));
  in_stack_00000024 = ((void *)(0x00919980u));
  if (in_stack_00000028 != (void *)0x0) {
    operator_delete__(in_stack_00000028);
    in_stack_00000028 = (void *)0x0;
  }
  if (in_stack_0000001c != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(in_stack_0000001c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


//==== 0000755eb0 00755eb0_FUN_00755eb0 ====
void FUN_00755eb0(undefined4 *param_1,undefined4 param_2);
extern undefined4 FUN_00757340(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00755eb0 name=FUN_00755eb0 conv=unknown body=422

void FUN_00755eb0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 stack0x0000000c;
  undefined4 stack0xfffffffc;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  ReferenceController *this;
  ReferenceController *local_44;
  undefined8 local_40;
  ReferenceController local_38;
  undefined8 *puStack_2c;
  ReferenceController *local_28;
  undefined4 *local_24;
  undefined8 *local_20;
  undefined8 local_1c;
  undefined8 local_14;
  undefined4 local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_28 = (ReferenceController *)0x0;
  local_24 = param_1;
  local_38.Pointer = &stack0x0000000c;
  puStack_2c = &local_14;
  local_1c = 0;
  local_14 = 0;
  local_c = 0;
  FUN_00757340(param_2,CONCAT44(puStack_2c,local_38.Pointer),&local_1c);
  if ((char)local_c == '\0') {
    local_44 = (ReferenceController *)0x0;
    local_40 = 0;
    uVar4 = 0;
    this = &local_38;
    ((slice_view *)&local_38.StrongReferenceCount)->_0_1_ = 0;
    bVar3 = false;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    this = ((slice_view *)&local_14)->_4_4_;
    local_20 = (undefined8 *)(undefined4)local_14;
    if (((slice_view *)&local_14)->_4_4_ != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(((slice_view *)&local_14)->_4_4_);
    }
    puStack_2c = (undefined8 *)local_1c;
    local_28 = (ReferenceController *)((ulonglong)local_1c >> 0x20);
    if (this != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this);
      if (this != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(this);
        util__ReferenceController__ReleaseWeakReference(this);
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this);
        }
      }
    }
    local_44 = this;
    if (this != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this);
    }
    local_40 = CONCAT44(local_28,puStack_2c);
    bVar3 = true;
    bVar2 = true;
    bVar1 = false;
    ((slice_view *)&local_38.StrongReferenceCount)->_0_1_ = 1;
    uVar4 = local_20;
  }
  local_20 = &local_40;
  local_28 = &local_38;
  *local_24 = uVar4;
  local_24[1] = local_44;
  if (local_44 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(local_44);
  }
  *(undefined8 *)(local_24 + 2) = *local_20;
  *(char *)(local_24 + 4) = (char)local_28->StrongReferenceCount;
  if (bVar1) {
    if (local_44 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_44);
    }
  }
  if ((bVar2) && (local_44 != (ReferenceController *)0x0)) {
    util__ReferenceController__ReleaseWeakReference(local_44);
  }
  if ((this != (ReferenceController *)0x0) && (bVar3)) {
    util__ReferenceController__ReleaseWeakReference(this);
  }
  if (((slice_view *)&local_14)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_14)->_4_4_);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000756060 00756060_FUN_00756060 ====
void FUN_00756060(undefined4 *param_1,undefined4 param_2);
extern undefined4 FUN_00757ac0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00756060 name=FUN_00756060 conv=unknown body=422

void FUN_00756060(undefined4 *param_1,undefined4 param_2)

{
  undefined4 stack0x0000000c;
  undefined4 stack0xfffffffc;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  ReferenceController *this;
  ReferenceController *local_44;
  undefined8 local_40;
  ReferenceController local_38;
  undefined8 *puStack_2c;
  ReferenceController *local_28;
  undefined4 *local_24;
  undefined8 *local_20;
  undefined8 local_1c;
  undefined8 local_14;
  undefined4 local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_28 = (ReferenceController *)0x0;
  local_24 = param_1;
  local_38.Pointer = &stack0x0000000c;
  puStack_2c = &local_14;
  local_1c = 0;
  local_14 = 0;
  local_c = 0;
  FUN_00757ac0(param_2,CONCAT44(puStack_2c,local_38.Pointer),&local_1c);
  if ((char)local_c == '\0') {
    local_44 = (ReferenceController *)0x0;
    local_40 = 0;
    uVar4 = 0;
    this = &local_38;
    ((slice_view *)&local_38.StrongReferenceCount)->_0_1_ = 0;
    bVar3 = false;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    this = ((slice_view *)&local_14)->_4_4_;
    local_20 = (undefined8 *)(undefined4)local_14;
    if (((slice_view *)&local_14)->_4_4_ != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(((slice_view *)&local_14)->_4_4_);
    }
    puStack_2c = (undefined8 *)local_1c;
    local_28 = (ReferenceController *)((ulonglong)local_1c >> 0x20);
    if (this != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this);
      if (this != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(this);
        util__ReferenceController__ReleaseWeakReference(this);
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this);
        }
      }
    }
    local_44 = this;
    if (this != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this);
    }
    local_40 = CONCAT44(local_28,puStack_2c);
    bVar3 = true;
    bVar2 = true;
    bVar1 = false;
    ((slice_view *)&local_38.StrongReferenceCount)->_0_1_ = 1;
    uVar4 = local_20;
  }
  local_20 = &local_40;
  local_28 = &local_38;
  *local_24 = uVar4;
  local_24[1] = local_44;
  if (local_44 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(local_44);
  }
  *(undefined8 *)(local_24 + 2) = *local_20;
  *(char *)(local_24 + 4) = (char)local_28->StrongReferenceCount;
  if (bVar1) {
    if (local_44 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_44);
    }
  }
  if ((bVar2) && (local_44 != (ReferenceController *)0x0)) {
    util__ReferenceController__ReleaseWeakReference(local_44);
  }
  if ((this != (ReferenceController *)0x0) && (bVar3)) {
    util__ReferenceController__ReleaseWeakReference(this);
  }
  if (((slice_view *)&local_14)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_14)->_4_4_);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000757720 00757720_FUN_00757720 ====
extern undefined4 FUN_00756810(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void FUN_00757720(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);

// decompiled by BatchDecomp @ 00757720 name=FUN_00757720 conv=unknown body=507

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_00757720(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 stack0xfffffffc;
  Body *this;
  ReferenceController *this_00;
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  SharedPtr_L_struct_UIWidget_G_ *local_7c;
  SharedPtr_L_struct_UIWidget_G_ *local_6c;
  undefined1 local_44[48];
  int local_14;
  int local_10;
  undefined1 local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_14 = 0;
  iVar2 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_14 < iVar2) {
    do {
      piVar3 = (int *)(**(code **)*param_1)(&local_14);
      if ((*piVar3 == 0) || ((ReferenceController *)piVar3[1] == (ReferenceController *)0x0)) {
LAB_00757775:
        bVar1 = false;
      }
      else {
        bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]);
        if (!bVar1) goto LAB_00757775;
        bVar1 = true;
      }
      if (bVar1) {
        if ((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) {
          bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]);
          if (!bVar1) {
            *piVar3 = 0;
          }
        }
        Fleet__GetCurrentState((Fleet *)*piVar3);
        if ((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) {
          bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]);
          if (!bVar1) {
            *piVar3 = 0;
          }
        }
        piVar4 = (int *)Fleet__GetAllShips((Fleet *)*piVar3);
        local_10 = 0;
        iVar2 = (**(code **)(*(int *)(uintptr_t)piVar4 + 0xc))();
        if (local_10 < iVar2) {
          do {
            puVar5 = (undefined4 *)(**(code **)*piVar4)(&local_10);
            this = (Body *)*puVar5;
            Body__GetControllableComponent_Memoize(this);
            if ((this->GetControllableComponent_MemoizedValue).IsValidData == false) {
              util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",
                              0x13,"IsValid()",(char *)0x0);
              DebugBreak();
            }
            this_00 = (this->GetControllableComponent_MemoizedValue).Data.Controller;
            if (this_00 != (ReferenceController *)0x0) {
              bVar1 = util__ReferenceController__IsDataStillValid(this_00);
              if (!bVar1) {
                (this->GetControllableComponent_MemoizedValue).Data.Pointer =
                     (ControllableComponent *)0x0;
              }
            }
            bVar1 = ControllableComponent__IsMarkedAsSeparatingFromFleet((this->GetControllableComponent_MemoizedValue).Data.Pointer);
            if (!bVar1) {
              local_9 = 0;
              goto LAB_00757843;
            }
            local_10 = local_10 + 1;
            iVar2 = (**(code **)(*(int *)(uintptr_t)piVar4 + 0xc))();
          } while (local_10 < iVar2);
        }
        local_9 = 1;
LAB_00757843:
        if (local_6c != (SharedPtr_L_struct_UIWidget_G_ *)0x0) {
          util__SharedPtr_struct_UIWidget____vector_deleting_destructor(local_6c,3);
        }
        puVar8 = local_44;
        puVar10 = &local_9;
        local_6c = (SharedPtr_L_struct_UIWidget_G_ *)0x0;
        if ((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) {
          bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]);
          if (!bVar1) {
            *piVar3 = 0;
          }
        }
        uVar7 = param_2;
        uVar9 = param_3;
        uVar11 = param_4;
        uVar6 = Fleet__GetAllShips((Fleet *)*piVar3);
        FUN_00756810(uVar6,piVar3,uVar7,puVar8,uVar9,puVar10,uVar11);
        if (local_7c != (SharedPtr_L_struct_UIWidget_G_ *)0x0) {
          util__SharedPtr_struct_UIWidget____vector_deleting_destructor(local_7c,3);
        }
        local_7c = (SharedPtr_L_struct_UIWidget_G_ *)0x0;
      }
      local_14 = local_14 + 1;
      iVar2 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
    } while (local_14 < iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000781420 00781420_GetBurnStatusBarRanges ====
// decompiled by BatchDecomp @ 00781420 name=GetBurnStatusBarRanges conv=__thiscall body=335

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct Range_L_double_G_ __thiscall
   BurnInfoCustomWidget__GetBurnStatusBarRanges(void)const  */

Range_L_double_G_ * __thiscall
BurnInfoCustomWidget__GetBurnStatusBarRanges(BurnInfoCustomWidget *this,Range_L_double_G_ *__return_storage_ptr__)

{
  Fleet *this_00;
  bool bVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  Itinerary *this_01;
  Itinerary local_2bc[2];
  ReferenceController *local_20;
  double local_1c;
  undefined8 local_14;
  undefined8 uStack_c;
  
  bVar2 = false;
  local_1c = (double)(ulonglong)((slice_view *)&local_1c)->_0_4_;
  piVar3 = (int *)StrategicManager__GetSelectedFleet((StrategicManager *)this->_pad_0x0_0);
  if ((*piVar3 != 0) && ((ReferenceController *)piVar3[1] != (ReferenceController *)0x0)) {
    bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]);
    if (bVar1) {
      puVar4 = (undefined4 *)StrategicManager__GetSelectedFleet((StrategicManager *)this->_pad_0x0_0)
      ;
      if ((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]);
        if (!bVar2) {
          *puVar4 = 0;
        }
      }
      this_00 = (Fleet *)*puVar4;
      Fleet__GetRemainingDeltaV_km__s_Memoize(this_00);
      if ((this_00->GetRemainingDeltaV_km__s_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      local_1c = (this_00->GetRemainingDeltaV_km__s_MemoizedValue).Data;
      bVar2 = true;
      goto LAB_007814b6;
    }
  }
  local_1c = 0.0;
LAB_007814b6:
  if ((local_20 != (ReferenceController *)0x0) && (bVar2)) {
    util__ReferenceController__ReleaseWeakReference(local_20);
  }
  if (((slice_view *)&uStack_c)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&uStack_c)->_4_4_);
  }
  this_01 = (Itinerary *)GetMission(this);
  if (*(char *)&this_01[2].FinalOrbit.Data.Elements.SemiMajorAxis_km == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  uStack_c = Itinerary__GetConsolidatedNodeBurnLength_km__s(this_01,&this->Node);
  Itinerary_Itinerary__o3(local_2bc);
  if (/*0000000000000000*/0.0 < local_1c) {
    __return_storage_ptr__->Lower = uStack_c / local_1c;
    __return_storage_ptr__->Upper = uStack_c / local_1c;
    return __return_storage_ptr__;
  }
  *(undefined4 *)&__return_storage_ptr__->Lower = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->Lower + 4) = 0;
  *(undefined4 *)&__return_storage_ptr__->Upper = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->Upper + 4) = 0;
  return __return_storage_ptr__;
}


//==== 0000781860 00781860_GetItineraryStatusBarRanges ====
// decompiled by BatchDecomp @ 00781860 name=GetItineraryStatusBarRanges conv=__thiscall body=691

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: struct Range_L_double_G_ __thiscall
   HUDItineraryInfoPanel__GetItineraryStatusBarRanges(void)const  */

Range_L_double_G_ * __thiscall
HUDItineraryInfoPanel__GetItineraryStatusBarRanges(HUDItineraryInfoPanel *this,Range_L_double_G_ *__return_storage_ptr__)

{
  undefined4 stack0xfffffffc;
  Fleet *this_00;
  StrategicManager *this_01;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  Itinerary *pIVar5;
  ItineraryNode *pIVar6;
  Range_L_double_G_ *pRVar7;
  double dVar8;
  double dVar9;
  ItineraryNode local_2d0;
  double local_180;
  ReferenceController *local_174;
  double local_170;
  Range_L_double_G_ *local_168;
  HUDItineraryInfoPanel *local_164;
  undefined8 local_160;
  ItineraryNode local_158;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_168 = __return_storage_ptr__;
  bVar1 = false;
  bVar3 = false;
  local_160 = (double)(ulonglong)(uint)local_160;
  local_164 = this;
  StrategicManager__GetSelectedItineraryNode((StrategicManager *)this->_pad_0x0_0,&local_158);
  puVar4 = (undefined4 *)GetSelectedFleet(this);
  if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
     (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]), !bVar2)
     ) {
    *puVar4 = 0;
  }
  pIVar5 = (Itinerary *)Fleet__GetMissionItinerary((Fleet *)*puVar4);
  if (*(char *)&pIVar5[2].FinalOrbit.Data.Elements.SemiMajorAxis_km == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_170 = Itinerary__GetTotalDeltaVCost_km__s(pIVar5);
  if (((slice_view *)&local_160)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_160)->_4_4_);
  }
  puVar4 = (undefined4 *)GetSelectedFleet(local_164);
  if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
     (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]), !bVar2)
     ) {
    *puVar4 = 0;
  }
  this_00 = (Fleet *)*puVar4;
  Fleet__GetRemainingDeltaV_km__s_Memoize(this_00);
  if ((this_00->GetRemainingDeltaV_km__s_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_180 = (this_00->GetRemainingDeltaV_km__s_MemoizedValue).Data;
  if (((slice_view *)&local_160)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_160)->_4_4_);
  }
  bVar2 = ItineraryNode__IsValid(&local_158);
  dVar9 = local_170;
  if (bVar2) {
    this_01 = (StrategicManager *)local_164->_pad_0x0_0;
    puVar4 = (undefined4 *)GetSelectedFleet(local_164);
    if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
       (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
       !bVar3)) {
      *puVar4 = 0;
    }
    pIVar5 = (Itinerary *)Fleet__GetMissionItinerary((Fleet *)*puVar4);
    if (*(char *)&pIVar5[2].FinalOrbit.Data.Elements.SemiMajorAxis_km == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    pIVar6 = StrategicManager__GetSelectedItineraryNode(this_01,&local_2d0);
    dVar9 = Itinerary__GetDeltaVCostUpToNode_km__s(pIVar5,pIVar6);
    bVar1 = true;
    bVar3 = true;
  }
  local_160 = dVar9;
  if ((bVar3) && (local_174 != (ReferenceController *)0x0)) {
    util__ReferenceController__ReleaseWeakReference(local_174);
  }
  if (bVar1) {
    if (local_2d0.CachedNearestOrbiter.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_2d0.CachedNearestOrbiter.Controller);
    }
    if (local_2d0.CachedNearestFleet.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_2d0.CachedNearestFleet.Controller);
    }
    if (local_2d0.CachedNearestBody.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_2d0.CachedNearestBody.Controller);
    }
    if (local_2d0.CachedGravityBody.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_2d0.CachedGravityBody.Controller);
    }
    if (local_2d0.Parent.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_2d0.Parent.Controller);
    }
  }
  pRVar7 = local_168;
  dVar9 = local_160 / local_180;
  dVar8 = local_170 / local_180;
  local_168->Lower = dVar9;
  local_168->Upper = dVar8;
  if (dVar8 < dVar9) {
    local_168->Lower = dVar8;
    local_168->Upper = dVar9;
  }
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
  return pRVar7;
}


//==== 0000782b70 00782b70_GetMissionInfoColor ====
// decompiled by BatchDecomp @ 00782b70 name=GetMissionInfoColor conv=__thiscall body=458

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: struct util__Color __thiscall HUDItineraryInfoPanel__GetMissionInfoColor(void)const  */

Color * __thiscall
HUDItineraryInfoPanel__GetMissionInfoColor(HUDItineraryInfoPanel *this,Color *__return_storage_ptr__)

{
  Fleet *this_00;
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  Itinerary *this_01;
  int iVar4;
  Color local_5c;
  undefined **local_3c;
  void *local_38;
  double local_1c;
  double local_14;
  ReferenceController *local_8;
  
  local_8 = (ReferenceController *)0x0;
  piVar2 = (int *)GetSelectedFleet(this);
  if (((*piVar2 == 0) || ((ReferenceController *)piVar2[1] == (ReferenceController *)0x0)) ||
     (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar2[1]), !bVar1)
     ) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (local_8 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_8);
  }
  if (bVar1) {
    puVar3 = (undefined4 *)GetSelectedFleet(this);
    if (((ReferenceController *)puVar3[1] != (ReferenceController *)0x0) &&
       (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar3[1]),
       !bVar1)) {
      *puVar3 = 0;
    }
    this_01 = (Itinerary *)Fleet__GetMissionItinerary((Fleet *)*puVar3);
    if (local_8 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_8);
    }
    if (*(char *)&this_01[2].FinalOrbit.Data.Elements.SemiMajorAxis_km != '\0') {
      local_14 = Itinerary__GetTotalDeltaVCost_km__s(this_01);
      puVar3 = (undefined4 *)GetSelectedFleet(this);
      if (((ReferenceController *)puVar3[1] != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar3[1]),
         !bVar1)) {
        *puVar3 = 0;
      }
      this_00 = (Fleet *)*puVar3;
      Fleet__GetRemainingDeltaV_km__s_Memoize(this_00);
      if ((this_00->GetRemainingDeltaV_km__s_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      local_1c = (this_00->GetRemainingDeltaV_km__s_MemoizedValue).Data;
      if (local_8 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_8);
      }
      bVar1 = local_14 <= local_1c;
      if (bVar1) {
        iVar4 = (**(code **)(*(int *)this + 0x44))(&local_3c);
      }
      else {
        iVar4 = util__Color__Color(&local_5c,Red,1.0);
      }
      __return_storage_ptr__->_pad_0x0_0 = (int)((void *)(0x00919980u));
      util__Str_char___Str_char((Str_L_char_G_ *)&__return_storage_ptr__->_pad_0x0_0,(Str_L_char_G_ *)(iVar4 + 4));
      __return_storage_ptr__->_pad_0x0_0 = (int)((void *)(0x0091d980u));
      __return_storage_ptr__->Hue_degrees = *(float *)(iVar4 + 0x10);
      __return_storage_ptr__->Saturation = *(float *)(iVar4 + 0x14);
      __return_storage_ptr__->Value = *(float *)(iVar4 + 0x18);
      __return_storage_ptr__->Alpha = *(float *)(iVar4 + 0x1c);
      if ((bVar1) && (local_3c = ((void *)(0x00919980u)), local_38 != (void *)0x0)) {
        operator_delete__(local_38);
        local_38 = (void *)0x0;
      }
      if (bVar1) {
        return __return_storage_ptr__;
      }
      local_5c._pad_0x0_0 = (int)((void *)(0x00919980u));
      if ((void *)local_5c._pad_0x0_0 == (void *)0x0) {
        return __return_storage_ptr__;
      }
      operator_delete__((void *)local_5c._pad_0x0_0);
      return __return_storage_ptr__;
    }
  }
  (**(code **)(*(int *)this + 0x44))(__return_storage_ptr__);
  return __return_storage_ptr__;
}


//==== 00007839b0 007839b0_GetTimeLabel ====
// decompiled by BatchDecomp @ 007839b0 name=GetTimeLabel conv=__thiscall body=610

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class Str_L_char_G_ __thiscall BurnInfoCustomWidget__GetTimeLabel(void)const  */

Str_L_char_G_ * __thiscall
BurnInfoCustomWidget__GetTimeLabel(BurnInfoCustomWidget *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xfffffffc;
  Itinerary *this_00;
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ *pSVar2;
  LocStr *this_01;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *this_02;
  Str_L_char_G_ *pSVar4;
  byte bVar5;
  undefined4 unaff_EDI;
  Itinerary local_320[2];
  Str_L_char_G_ local_88;
  void *local_7c[3];
  void *local_70;
  Str_L_char_G_ local_64;
  Str_L_char_G_ local_58;
  Str_L_char_G_ local_4c;
  Str_L_char_G_ local_40;
  undefined4 local_34;
  Str_L_char_G_ local_30;
  Str_L_char_G_ local_24;
  Range_L_double_G_ local_18;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_34 = 0;
  this_00 = (Itinerary *)GetMission(this);
  if (*(char *)&this_00[2].FinalOrbit.Data.Elements.SemiMajorAxis_km == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  Itinerary__GetTimeRangeTilConsolidatedBurnNode_s(this_00,&local_18,&this->Node);
  Itinerary_Itinerary__o3(local_320);
  if ((NAN(local_18.Upper - local_18.Lower) || NAN(/*0000000000000000*/0.0)) ==
      (local_18.Upper - local_18.Lower == /*0000000000000000*/0.0)) {
    util__Str_char___Str_char__o5(&local_30,"Dash");
    local_24.Data = (char *)0x0;
    local_24.Capacity = 0;
    local_24.Length = 0;
    pSVar2 = PrintTimeExtraTruncated
                       (&local_64,(double)((ulonglong)local_18.Upper >> 0x20),SUB41(unaff_EDI,0));
    pSVar1 = &local_40;
    this_01 = (LocStr *)util__LocStr__LocStr((LocStr *)local_7c,&local_30,&local_24);
    pSVar3 = util__LocStr__operator__o3(this_01);
    pSVar4 = &local_4c;
    this_02 = PrintTimeExtraTruncated
                        (&local_58,(double)((ulonglong)local_18.Lower >> 0x20),SUB41(pSVar4,0));
    pSVar4 = util__Str_char___operator(this_02,pSVar4,pSVar3);
    pSVar1 = util__Str_char___operator(pSVar4,pSVar1,pSVar2);
    bVar5 = 0xfe;
  }
  else {
    pSVar1 = PrintTimeTruncated(&local_88,
                                (double)CONCAT44(unaff_EDI,(int)((ulonglong)local_18.Lower >> 0x20))
                               );
    bVar5 = 1;
  }
  util__Str_char___Str_char(__return_storage_ptr__,pSVar1);
  if ((char)bVar5 < '\0') {
    bVar5 = bVar5 & 0x7f;
    if (local_40.Data != (char *)0x0) {
      operator_delete__(local_40.Data);
      local_40.Data = (char *)0x0;
    }
  }
  if ((bVar5 & 0x40) != 0) {
    bVar5 = bVar5 & 0xbf;
    if (local_4c.Data != (char *)0x0) {
      operator_delete__(local_4c.Data);
      local_4c.Data = (char *)0x0;
    }
  }
  if ((bVar5 & 0x20) != 0) {
    bVar5 = bVar5 & 0xdf;
    if (local_58.Data != (char *)0x0) {
      operator_delete__(local_58.Data);
      local_58.Data = (char *)0x0;
    }
  }
  if ((bVar5 & 0x10) != 0) {
    bVar5 = bVar5 & 0xef;
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
      local_70 = (void *)0x0;
    }
    if (local_7c[0] != (void *)0x0) {
      operator_delete__(local_7c[0]);
      local_7c[0] = (void *)0x0;
    }
  }
  if ((bVar5 & 8) != 0) {
    bVar5 = bVar5 & 0xf7;
    if (local_24.Data != (char *)0x0) {
      operator_delete__(local_24.Data);
      local_24.Data = (char *)0x0;
    }
  }
  if ((bVar5 & 4) != 0) {
    bVar5 = bVar5 & 0xfb;
    if (local_64.Data != (char *)0x0) {
      operator_delete__(local_64.Data);
      local_64.Data = (char *)0x0;
    }
  }
  if ((bVar5 & 2) != 0) {
    bVar5 = bVar5 & 0xfd;
    if (local_30.Data != (char *)0x0) {
      operator_delete__(local_30.Data);
      local_30.Data = (char *)0x0;
    }
  }
  if ((local_88.Data != (char *)0x0) && ((bVar5 & 1) != 0)) {
    operator_delete__(local_88.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 000078b270 0078b270_FUN_0078b270 ====
void FUN_0078b270(undefined4 *param_1,undefined4 param_2);
extern undefined4 FUN_0078bdc0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 0078b270 name=FUN_0078b270 conv=unknown body=274

void FUN_0078b270(undefined4 *param_1,undefined4 param_2)

{
  undefined4 stack0x0000000c;
  undefined4 stack0xfffffffc;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined8 local_48;
  undefined4 local_40[2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  char local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18 = 0;
  local_48 = 0;
  local_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  local_40[0] = 0;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  local_10 = '\0';
  FUN_0078bdc0(param_2,CONCAT44(local_40,&stack0x0000000c),&local_48);
  if (local_10 == '\0') {
    uVar2 = 0;
    uVar3 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar4 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uVar1 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    uStack_74 = 0;
  }
  else {
    uVar2 = (undefined4)local_18;
    uVar3 = *(undefined4 *)((char *)&local_18 + 4);
    uStack_84 = uStack_30;
    uStack_80 = uStack_2c;
    uStack_7c = local_28;
    uStack_78 = uStack_24;
    uStack_74 = CONCAT44(uStack_1c,uStack_20);
    uVar1 = local_40[0];
    uVar4 = local_48;
    uVar5 = local_38;
    uVar6 = uStack_34;
  }
  *param_1 = uVar1;
  *(ulonglong *)(param_1 + 2) = CONCAT44(uVar6,uVar5);
  param_1[4] = uStack_84;
  param_1[5] = uStack_80;
  param_1[6] = uStack_7c;
  param_1[7] = uStack_78;
  *(undefined8 *)(param_1 + 8) = uStack_74;
  *(ulonglong *)(param_1 + 10) = CONCAT44(uVar3,uVar2);
  *(undefined8 *)(param_1 + 0xc) = uVar4;
  *(bool *)(param_1 + 0xe) = local_10 != '\0';
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007c7a30 007c7a30_FUN_007c7a30 ====
void FUN_007c7a30(undefined4 *param_1,undefined4 param_2);
extern undefined4 FUN_007c8b40(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007c7a30 name=FUN_007c7a30 conv=unknown body=422

void FUN_007c7a30(undefined4 *param_1,undefined4 param_2)

{
  undefined4 stack0x0000000c;
  undefined4 stack0xfffffffc;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  ReferenceController *this;
  ReferenceController *local_44;
  undefined8 local_40;
  ReferenceController local_38;
  undefined8 *puStack_2c;
  ReferenceController *local_28;
  undefined4 *local_24;
  undefined8 *local_20;
  undefined8 local_1c;
  undefined8 local_14;
  undefined4 local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_28 = (ReferenceController *)0x0;
  local_24 = param_1;
  local_38.Pointer = &stack0x0000000c;
  puStack_2c = &local_14;
  local_1c = 0;
  local_14 = 0;
  local_c = 0;
  FUN_007c8b40(param_2,CONCAT44(puStack_2c,local_38.Pointer),&local_1c);
  if ((char)local_c == '\0') {
    local_44 = (ReferenceController *)0x0;
    local_40 = 0;
    uVar4 = 0;
    this = &local_38;
    ((slice_view *)&local_38.StrongReferenceCount)->_0_1_ = 0;
    bVar3 = false;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    this = ((slice_view *)&local_14)->_4_4_;
    local_20 = (undefined8 *)(undefined4)local_14;
    if (((slice_view *)&local_14)->_4_4_ != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(((slice_view *)&local_14)->_4_4_);
    }
    puStack_2c = (undefined8 *)local_1c;
    local_28 = (ReferenceController *)((ulonglong)local_1c >> 0x20);
    if (this != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this);
      if (this != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(this);
        util__ReferenceController__ReleaseWeakReference(this);
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this);
        }
      }
    }
    local_44 = this;
    if (this != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this);
    }
    local_40 = CONCAT44(local_28,puStack_2c);
    bVar3 = true;
    bVar2 = true;
    bVar1 = false;
    ((slice_view *)&local_38.StrongReferenceCount)->_0_1_ = 1;
    uVar4 = local_20;
  }
  local_20 = &local_40;
  local_28 = &local_38;
  *local_24 = uVar4;
  local_24[1] = local_44;
  if (local_44 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(local_44);
  }
  *(undefined8 *)(local_24 + 2) = *local_20;
  *(char *)(local_24 + 4) = (char)local_28->StrongReferenceCount;
  if (bVar1) {
    if (local_44 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_44);
    }
  }
  if ((bVar2) && (local_44 != (ReferenceController *)0x0)) {
    util__ReferenceController__ReleaseWeakReference(local_44);
  }
  if ((this != (ReferenceController *)0x0) && (bVar3)) {
    util__ReferenceController__ReleaseWeakReference(this);
  }
  if (((slice_view *)&local_14)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_14)->_4_4_);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007c9430 007c9430_FUN_007c9430 ====
extern undefined4 FUN_007c9120(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void FUN_007c9430(Darray_L_class_util__SharedPtr_L_struct_CollisionHit_G___G_ *param_1, Darray_L_class_util__SharedPtr_L_struct_CollisionHit_G___G_ *param_2,undefined4 param_3);

// decompiled by BatchDecomp @ 007c9430 name=FUN_007c9430 conv=unknown body=403

void FUN_007c9430(Darray_L_class_util__SharedPtr_L_struct_CollisionHit_G___G_ *param_1,
                 Darray_L_class_util__SharedPtr_L_struct_CollisionHit_G___G_ *param_2,undefined4 param_3)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  Darray_L_class_util__SharedPtr_L_struct_CollisionHit_G___G_ *pDVar2;
  int iVar3;
  int iVar4;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  Darray_L_class_util__SharedPtr_L_struct_CollisionHit_G___G_ *local_34;
  Darray_L_class_util__SharedPtr_L_struct_CollisionHit_G___G_ *local_30;
  undefined **local_2c;
  SharedPtr_L_struct_CollisionHit_G_ *pSStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined **local_1c;
  SharedPtr_L_struct_CollisionHit_G_ *pSStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar1 = (**(code **)(*(int *)param_2 + 0xc))();
  if (iVar1 == 0) {
    util__Darray_class_util__SharedPtr_struct_CollisionHit_____Darray_class_util__SharedPtr_struct_CollisionHit(param_1,param_2);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_2c = (undefined **)0x0;
  pSStack_28 = (SharedPtr_L_struct_CollisionHit_G_ *)0x0;
  uStack_24 = 0;
  uStack_20 = 0;
  util__Darray_class_util__SharedPtr_struct_CollisionHit_____Darray_class_util__SharedPtr_struct_CollisionHit((Darray_L_class_util__SharedPtr_L_struct_CollisionHit_G___G_ *)&local_2c,param_2);
  local_1c = (undefined **)0x0;
  pSStack_18 = (SharedPtr_L_struct_CollisionHit_G_ *)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  util__Darray_class_util__SharedPtr_struct_CollisionHit_____Darray_class_util__SharedPtr_struct_CollisionHit__o2((Darray_L_class_util__SharedPtr_L_struct_CollisionHit_G___G_ *)&local_1c,iVar1);
  iVar3 = iStack_14;
  local_c = iVar1;
  util__Darray_class_util__SharedPtr_struct_CollisionHit_____SetSize((Darray_L_class_util__SharedPtr_L_struct_CollisionHit_G___G_ *)&local_1c,&local_c);
  util__Darray_class_util__SharedPtr_struct_CollisionHit_____CheckSize((Darray_L_class_util__SharedPtr_L_struct_CollisionHit_G___G_ *)&local_1c,iVar3);
  iVar3 = 1;
  pDVar2 = (Darray_L_class_util__SharedPtr_L_struct_CollisionHit_G___G_ *)&local_2c;
  local_34 = (Darray_L_class_util__SharedPtr_L_struct_CollisionHit_G___G_ *)&local_1c;
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
          FUN_007c9120(local_30,local_34,&local_48,&local_44,&local_40,&local_3c,&local_c,param_3);
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
  util__Darray_class_util__SharedPtr_struct_CollisionHit_____Darray_class_util__SharedPtr_struct_CollisionHit(param_1,pDVar2);
  local_1c = ((void *)(0x0092009cu));
  if (pSStack_18 != (SharedPtr_L_struct_CollisionHit_G_ *)0x0) {
    util__SharedPtr_struct_CollisionHit____vector_deleting_destructor(pSStack_18,3);
  }
  pSStack_18 = (SharedPtr_L_struct_CollisionHit_G_ *)0x0;
  local_1c = ((void *)(0x00919488u));
  local_2c = ((void *)(0x0092009cu));
  if (pSStack_28 != (SharedPtr_L_struct_CollisionHit_G_ *)0x0) {
    util__SharedPtr_struct_CollisionHit____vector_deleting_destructor(pSStack_28,3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007dd780 007dd780_FUN_007dd780 ====
void FUN_007dd780(undefined4 *param_1,undefined4 param_2);
extern undefined4 FUN_007ddec0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007dd780 name=FUN_007dd780 conv=unknown body=422

void FUN_007dd780(undefined4 *param_1,undefined4 param_2)

{
  undefined4 stack0x0000000c;
  undefined4 stack0xfffffffc;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  ReferenceController *this;
  ReferenceController *local_44;
  undefined8 local_40;
  ReferenceController local_38;
  undefined8 *puStack_2c;
  ReferenceController *local_28;
  undefined4 *local_24;
  undefined8 *local_20;
  undefined8 local_1c;
  undefined8 local_14;
  undefined4 local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_28 = (ReferenceController *)0x0;
  local_24 = param_1;
  local_38.Pointer = &stack0x0000000c;
  puStack_2c = &local_14;
  local_1c = 0;
  local_14 = 0;
  local_c = 0;
  FUN_007ddec0(param_2,CONCAT44(puStack_2c,local_38.Pointer),&local_1c);
  if ((char)local_c == '\0') {
    local_44 = (ReferenceController *)0x0;
    local_40 = 0;
    uVar4 = 0;
    this = &local_38;
    ((slice_view *)&local_38.StrongReferenceCount)->_0_1_ = 0;
    bVar3 = false;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    this = ((slice_view *)&local_14)->_4_4_;
    local_20 = (undefined8 *)(undefined4)local_14;
    if (((slice_view *)&local_14)->_4_4_ != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(((slice_view *)&local_14)->_4_4_);
    }
    puStack_2c = (undefined8 *)local_1c;
    local_28 = (ReferenceController *)((ulonglong)local_1c >> 0x20);
    if (this != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this);
      if (this != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(this);
        util__ReferenceController__ReleaseWeakReference(this);
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this);
        }
      }
    }
    local_44 = this;
    if (this != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this);
    }
    local_40 = CONCAT44(local_28,puStack_2c);
    bVar3 = true;
    bVar2 = true;
    bVar1 = false;
    ((slice_view *)&local_38.StrongReferenceCount)->_0_1_ = 1;
    uVar4 = local_20;
  }
  local_20 = &local_40;
  local_28 = &local_38;
  *local_24 = uVar4;
  local_24[1] = local_44;
  if (local_44 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(local_44);
  }
  *(undefined8 *)(local_24 + 2) = *local_20;
  *(char *)(local_24 + 4) = (char)local_28->StrongReferenceCount;
  if (bVar1) {
    if (local_44 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_44);
    }
  }
  if ((bVar2) && (local_44 != (ReferenceController *)0x0)) {
    util__ReferenceController__ReleaseWeakReference(local_44);
  }
  if ((this != (ReferenceController *)0x0) && (bVar3)) {
    util__ReferenceController__ReleaseWeakReference(this);
  }
  if (((slice_view *)&local_14)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_14)->_4_4_);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007dec10 007dec10_FUN_007dec10 ====
extern undefined4 FUN_007de750(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void FUN_007dec10(undefined4 param_1,int *param_2);
extern undefined4 FUN_007df150(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_007df2a0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_007df500(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_007e1280(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_007e3cf0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007dec10 name=FUN_007dec10 conv=unknown body=377

void FUN_007dec10(undefined4 param_1,int *param_2)

{
  undefined4 stack0x0000000c;
  undefined4 stack0xfffffffc;
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 local_5c[16];
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_4c = param_1;
  iVar2 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  if (iVar2 == 0) {
    FUN_007df150(param_2);
  }
  else {
    local_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    FUN_007df150(param_2);
    local_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    FUN_007df2a0(iVar2);
    uVar1 = uStack_14;
    local_c = iVar2;
    FUN_007e3cf0(&local_c);
    FUN_007e1280(uVar1);
    iVar4 = 1;
    puVar3 = &local_2c;
    local_34 = &local_1c;
    if (1 < iVar2) {
      do {
        local_c = 0;
        local_38 = 0;
        iVar5 = iVar4;
        local_30 = puVar3;
        if (0 < iVar2) {
          do {
            local_44 = iVar2;
            if (iVar5 < iVar2) {
              local_44 = iVar5;
            }
            local_3c = iVar2;
            if (local_44 + iVar4 < iVar2) {
              local_3c = local_44 + iVar4;
            }
            local_48 = local_38;
            local_40 = local_44;
            FUN_007de750(local_30,local_34,&local_48,&local_44,&local_40,&local_3c,&local_c,
                         &stack0x0000000c);
            local_38 = local_38 + iVar4 * 2;
            iVar5 = iVar5 + iVar4 * 2;
          } while (local_38 < iVar2);
        }
        puVar3 = local_34;
        if (local_c != iVar2) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\sort.inl",0x3e,
                          "OutIndex == Size",(char *)0x0);
          DebugBreak();
        }
        iVar4 = iVar4 * 2;
        local_34 = local_30;
      } while (iVar4 < iVar2);
    }
    local_30 = puVar3;
    FUN_007df150(puVar3);
    FUN_007df500();
    FUN_007df500();
  }
  FUN_007df150(local_5c);
  FUN_007df500();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007ded90 007ded90_FUN_007ded90 ====
extern undefined4 FUN_007de9f0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void FUN_007ded90(Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *param_1, Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *param_2);

// decompiled by BatchDecomp @ 007ded90 name=FUN_007ded90 conv=unknown body=377

void FUN_007ded90(Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *param_1,
                 Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *param_2)

{
  undefined4 stack0x0000000c;
  undefined4 stack0xfffffffc;
  int iVar1;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar2;
  int iVar3;
  int iVar4;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_5c[16];
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *local_34;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_4c = param_1;
  iVar1 = (**(code **)(*(int *)param_2 + 0xc))();
  if (iVar1 == 0) {
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_5c,param_2);
  }
  else {
    local_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment((Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_2c,param_2);
    local_1c = 0;
    uStack_18 = 0;
    iStack_14 = 0;
    uStack_10 = 0;
    util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c,iVar1);
    iVar3 = iStack_14;
    local_c = iVar1;
    util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c,&local_c);
    util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c,iVar3);
    iVar3 = 1;
    pDVar2 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_2c;
    local_34 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_1c;
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
            FUN_007de9f0(local_30,local_34,&local_48,&local_44,&local_40,&local_3c,&local_c,
                         &stack0x0000000c);
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
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_5c,pDVar2);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_2c);
    param_1 = local_4c;
  }
  util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(param_1,local_5c);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_5c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007f4eb0 007f4eb0_FUN_007f4eb0 ====
void FUN_007f4eb0(undefined4 *param_1,undefined4 param_2);
extern undefined4 FUN_007f6080(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007f4eb0 name=FUN_007f4eb0 conv=unknown body=422

void FUN_007f4eb0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 stack0x0000000c;
  undefined4 stack0xfffffffc;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  ReferenceController *this;
  ReferenceController *local_44;
  undefined8 local_40;
  ReferenceController local_38;
  undefined8 *puStack_2c;
  ReferenceController *local_28;
  undefined4 *local_24;
  undefined8 *local_20;
  undefined8 local_1c;
  undefined8 local_14;
  undefined4 local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_28 = (ReferenceController *)0x0;
  local_24 = param_1;
  local_38.Pointer = &stack0x0000000c;
  puStack_2c = &local_14;
  local_1c = 0;
  local_14 = 0;
  local_c = 0;
  FUN_007f6080(param_2,CONCAT44(puStack_2c,local_38.Pointer),&local_1c);
  if ((char)local_c == '\0') {
    local_44 = (ReferenceController *)0x0;
    local_40 = 0;
    uVar4 = 0;
    this = &local_38;
    ((slice_view *)&local_38.StrongReferenceCount)->_0_1_ = 0;
    bVar3 = false;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    this = ((slice_view *)&local_14)->_4_4_;
    local_20 = (undefined8 *)(undefined4)local_14;
    if (((slice_view *)&local_14)->_4_4_ != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(((slice_view *)&local_14)->_4_4_);
    }
    puStack_2c = (undefined8 *)local_1c;
    local_28 = (ReferenceController *)((ulonglong)local_1c >> 0x20);
    if (this != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this);
      if (this != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(this);
        util__ReferenceController__ReleaseWeakReference(this);
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this);
        }
      }
    }
    local_44 = this;
    if (this != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this);
    }
    local_40 = CONCAT44(local_28,puStack_2c);
    bVar3 = true;
    bVar2 = true;
    bVar1 = false;
    ((slice_view *)&local_38.StrongReferenceCount)->_0_1_ = 1;
    uVar4 = local_20;
  }
  local_20 = &local_40;
  local_28 = &local_38;
  *local_24 = uVar4;
  local_24[1] = local_44;
  if (local_44 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(local_44);
  }
  *(undefined8 *)(local_24 + 2) = *local_20;
  *(char *)(local_24 + 4) = (char)local_28->StrongReferenceCount;
  if (bVar1) {
    if (local_44 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_44);
    }
  }
  if ((bVar2) && (local_44 != (ReferenceController *)0x0)) {
    util__ReferenceController__ReleaseWeakReference(local_44);
  }
  if ((this != (ReferenceController *)0x0) && (bVar3)) {
    util__ReferenceController__ReleaseWeakReference(this);
  }
  if (((slice_view *)&local_14)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_14)->_4_4_);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007fc480 007fc480_GetAllColliders_Memoize ====
extern undefined4 FUN_007f5060(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_007f5260(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007fc480 name=GetAllColliders_Memoize conv=__thiscall body=436

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall TacticalManager__GetAllColliders_Memoize(void)const  */

void __thiscall TacticalManager__GetAllColliders_Memoize(TacticalManager *this)

{
  undefined4 stack0xfffffffc;
  bool bVar1;
  ActorHandler *this_00;
  int iVar2;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_68[16];
  bool local_58;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_54[16];
  bool local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int local_20;
  undefined **local_1c;
  SharedPtr_L_struct_UIWidget_G_ *local_18;
  undefined1 local_c[4];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((this->GetAllColliders_MemoizedValue).IsValidData == false) {
    iVar2 = (this->TacticalManagerMemoizationHandlerInstance).ResetFunctions.Size;
    local_20 = iVar2 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->TacticalManagerMemoizationHandlerInstance,
               &local_20);
    bVar1 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->TacticalManagerMemoizationHandlerInstance,iVar2);
    if (bVar1) {
      (this->TacticalManagerMemoizationHandlerInstance).ResetFunctions.Data
      [(this->TacticalManagerMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_f910390b, TacticalManager__GetAllColliders_Clear);
    }
    local_c[0] = 0;
    if ((this->GetAllBodies_MemoizedValue).IsValidData == false) {
      iVar2 = (this->TacticalManagerMemoizationHandlerInstance).ResetFunctions.Size;
      local_20 = iVar2 + 1;
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)
                 &this->TacticalManagerMemoizationHandlerInstance,&local_20);
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
      local_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      iVar2 = (*(code *)local_1c[3])();
      util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_30,iVar2);
      FUN_007f5060(&local_1c,this,&local_30);
      local_1c = ((void *)(0x0091d1bcu));
      if (local_18 != (SharedPtr_L_struct_UIWidget_G_ *)0x0) {
        util__SharedPtr_struct_UIWidget____vector_deleting_destructor(local_18,3);
      }
      local_18 = (SharedPtr_L_struct_UIWidget_G_ *)0x0;
      local_1c = ((void *)(0x00919488u));
      util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_54,(Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_30);
      local_44 = true;
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
                ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
                 &this->GetAllBodies_MemoizedValue,
                 (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_54);
      (this->GetAllBodies_MemoizedValue).IsValidData = local_44;
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_54);
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_30);
    }
    if ((this->GetAllBodies_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    local_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    iVar2 = (**(code **)((this->GetAllBodies_MemoizedValue).Data._pad_0x0_0 + 0xc))();
    util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_40,iVar2);
    FUN_007f5260(&this->GetAllBodies_MemoizedValue,local_c,&local_40);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_68,(Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_40);
    local_58 = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetAllColliders_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_68);
    (this->GetAllColliders_MemoizedValue).IsValidData = local_58;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_68);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_40);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007fc640 007fc640_GetAllPhysicalBodies ====
extern undefined4 FUN_007f5060(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007fc640 name=GetAllPhysicalBodies conv=__thiscall body=547

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util__Darray_L_class_util__WeakPtr_L_class_Body_G___G __thiscall
   TacticalManager__GetAllPhysicalBodies(void)const  */

void __thiscall TacticalManager__GetAllPhysicalBodies(TacticalManager *this)

{
  undefined4 stack0xfffffffc;
  ReferenceController *this_00;
  bool bVar1;
  ActorHandler *this_01;
  int iVar2;
  undefined4 *puVar3;
  Maybe_L_util__Darray_L_util__WeakPtr_L_Body_G___G___G_ *pMVar4;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *this_02;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *in_stack_00000004;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_4c[16];
  bool local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *local_28;
  Body *local_24;
  undefined **local_20;
  SharedPtr_L_struct_UIWidget_G_ *local_1c;
  int local_10;
  undefined1 local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  local_28 = in_stack_00000004;
  if ((this->GetAllBodies_MemoizedValue).IsValidData == false) {
    iVar2 = (this->TacticalManagerMemoizationHandlerInstance).ResetFunctions.Size;
    local_24 = (Body *)(iVar2 + 1);
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->TacticalManagerMemoizationHandlerInstance,
               (int *)&local_24);
    bVar1 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->TacticalManagerMemoizationHandlerInstance,iVar2);
    if (bVar1) {
      (this->TacticalManagerMemoizationHandlerInstance).ResetFunctions.Data
      [(this->TacticalManagerMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_f910390b, TacticalManager__GetAllBodies_Clear);
    }
    this_01 = (ActorHandler *)
              util__Darray_enum_CrewDepartment__Type___Num((Darray_L_enum_CrewDepartment__Type_G_ *)this);
    ActorHandler__GetAllActors(this_01);
    local_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    iVar2 = (*(code *)local_20[3])();
    util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_38,iVar2);
    FUN_007f5060(&local_20,this,&local_38);
    local_20 = ((void *)(0x0091d1bcu));
    if (local_1c != (SharedPtr_L_struct_UIWidget_G_ *)0x0) {
      util__SharedPtr_struct_UIWidget____vector_deleting_destructor(local_1c,3);
    }
    local_1c = (SharedPtr_L_struct_UIWidget_G_ *)0x0;
    local_20 = ((void *)(0x00919488u));
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_4c,(Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_38);
    local_3c = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetAllBodies_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_4c);
    (this->GetAllBodies_MemoizedValue).IsValidData = local_3c;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_4c);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_38);
  }
  this_02 = local_28;
  pMVar4 = &this->GetAllBodies_MemoizedValue;
  if ((this->GetAllBodies_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  *(undefined4 *)this_02 = 0;
  *(undefined4 *)(this_02 + 4) = 0;
  *(undefined4 *)(this_02 + 8) = 0;
  *(undefined4 *)(this_02 + 0xc) = 0;
  iVar2 = (**(code **)(*(int *)&pMVar4->Data + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body(this_02,iVar2);
  local_10 = 0;
  iVar2 = (**(code **)(*(int *)&pMVar4->Data + 0xc))();
  if (local_10 < iVar2) {
    do {
      puVar3 = (undefined4 *)(**(code **)*(int *)&pMVar4->Data)(&local_10);
      if ((ReferenceController *)puVar3[1] != (ReferenceController *)0x0) {
        bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar3[1]);
        if (!bVar1) {
          *puVar3 = 0;
        }
      }
      local_24 = (Body *)*puVar3;
      Body__HasPhysicality_Memoize(local_24);
      if ((local_24->HasPhysicality_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if ((local_24->HasPhysicality_MemoizedValue).Data != false) {
        iVar2 = *(int *)(this_02 + 8);
        local_24 = (Body *)(iVar2 + 1);
        util__Darray_class_util__WeakPtr_class_Body_____SetSize(local_28,(int *)&local_24);
        this_02 = local_28;
        bVar1 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(local_28,iVar2);
        if (bVar1) {
          iVar2 = *(int *)(this_02 + 4) + *(int *)(this_02 + 8) * 8;
          local_24 = *(Body **)(iVar2 + -4);
          *(undefined4 *)(iVar2 + -8) = *puVar3;
          this_00 = (ReferenceController *)puVar3[1];
          *(ReferenceController **)(iVar2 + -4) = this_00;
          if (this_00 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this_00);
          }
          if (local_24 != (Body *)0x0) {
            util__ReferenceController__ReleaseWeakReference((ReferenceController *)local_24);
          }
        }
      }
      local_10 = local_10 + 1;
      iVar2 = (**(code **)(*(int *)&pMVar4->Data + 0xc))();
    } while (local_10 < iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007fc8c0 007fc8c0_GetAlliedBodies ====
extern undefined4 FUN_007f5060(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007fc8c0 name=GetAlliedBodies conv=__thiscall body=562

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util__Darray_L_class_util__WeakPtr_L_class_Body_G___G __thiscall
   TacticalManager__GetAlliedBodies(void)const  */

void __thiscall TacticalManager__GetAlliedBodies(TacticalManager *this)

{
  undefined4 stack0xfffffffc;
  Maybe_L_util__Darray_L_util__WeakPtr_L_Body_G___G___G_ *pMVar1;
  ReferenceController *this_00;
  bool bVar2;
  ActorHandler *this_01;
  int iVar3;
  int *piVar4;
  Faction *pFVar5;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *this_02;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *in_stack_00000004;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_50[16];
  bool local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *local_2c;
  TacticalManager *local_28;
  Faction *local_24;
  undefined **local_20;
  SharedPtr_L_struct_UIWidget_G_ *local_1c;
  TacticalManager *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_2c = in_stack_00000004;
  if ((this->GetAllBodies_MemoizedValue).IsValidData == false) {
    iVar3 = (this->TacticalManagerMemoizationHandlerInstance).ResetFunctions.Size;
    local_28 = (TacticalManager *)(iVar3 + 1);
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->TacticalManagerMemoizationHandlerInstance,
               (int *)&local_28);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->TacticalManagerMemoizationHandlerInstance,iVar3);
    if (bVar2) {
      (this->TacticalManagerMemoizationHandlerInstance).ResetFunctions.Data
      [(this->TacticalManagerMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_f910390b, TacticalManager__GetAllBodies_Clear);
    }
    this_01 = (ActorHandler *)
              util__Darray_enum_CrewDepartment__Type___Num((Darray_L_enum_CrewDepartment__Type_G_ *)this);
    ActorHandler__GetAllActors(this_01);
    local_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    iVar3 = (*(code *)local_20[3])();
    util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_3c,iVar3);
    FUN_007f5060(&local_20,this,&local_3c);
    local_20 = ((void *)(0x0091d1bcu));
    if (local_1c != (SharedPtr_L_struct_UIWidget_G_ *)0x0) {
      util__SharedPtr_struct_UIWidget____vector_deleting_destructor(local_1c,3);
    }
    local_1c = (SharedPtr_L_struct_UIWidget_G_ *)0x0;
    local_20 = ((void *)(0x00919488u));
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_50,(Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_3c);
    local_40 = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetAllBodies_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_50);
    (this->GetAllBodies_MemoizedValue).IsValidData = local_40;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_50);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_3c);
  }
  this_02 = local_2c;
  pMVar1 = &this->GetAllBodies_MemoizedValue;
  if ((this->GetAllBodies_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  *(undefined4 *)this_02 = 0;
  *(undefined4 *)(this_02 + 4) = 0;
  *(undefined4 *)(this_02 + 8) = 0;
  *(undefined4 *)(this_02 + 0xc) = 0;
  local_10 = this;
  iVar3 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body(this_02,iVar3);
  local_c = 0;
  iVar3 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
  if (local_c < iVar3) {
    do {
      piVar4 = (int *)(**(code **)*(int *)&pMVar1->Data)(&local_c);
      if ((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]);
        if (!bVar2) {
          *piVar4 = 0;
        }
      }
      local_24 = *(Faction **)(*(int *)(uintptr_t)piVar4 + 0x1e0);
      local_28 = local_10;
      TacticalManager_GetStrategicGame_Memoize(local_10);
      if (*(char *)&(local_28->Effects).Controller == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      pFVar5 = StrategicManager__GetPlayerAlliance((StrategicManager *)(local_28->Effects).Pointer);
      if (local_24 == pFVar5) {
        iVar3 = *(int *)(this_02 + 8);
        local_24 = (Faction *)(iVar3 + 1);
        util__Darray_class_util__WeakPtr_class_Body_____SetSize(local_2c,(int *)&local_24);
        this_02 = local_2c;
        bVar2 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(local_2c,iVar3);
        if (bVar2) {
          iVar3 = *(int *)(this_02 + 4) + *(int *)(this_02 + 8) * 8;
          local_24 = *(Faction **)(iVar3 + -4);
          *(int *)(iVar3 + -8) = *piVar4;
          this_00 = (ReferenceController *)piVar4[1];
          *(ReferenceController **)(iVar3 + -4) = this_00;
          if (this_00 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this_00);
          }
          if (local_24 != (Faction *)0x0) {
            util__ReferenceController__ReleaseWeakReference((ReferenceController *)local_24);
          }
        }
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007fe4c0 007fe4c0_GetEnemyBodies ====
extern undefined4 FUN_007f5060(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007fe4c0 name=GetEnemyBodies conv=__thiscall body=595

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util__Darray_L_class_util__WeakPtr_L_class_Body_G___G __thiscall
   TacticalManager__GetEnemyBodies(void)const  */

void __thiscall TacticalManager__GetEnemyBodies(TacticalManager *this)

{
  undefined4 stack0xfffffffc;
  Maybe_L_util__Darray_L_util__WeakPtr_L_Body_G___G___G_ *pMVar1;
  ReferenceController *this_00;
  bool bVar2;
  ActorHandler *this_01;
  int iVar3;
  int *piVar4;
  Faction *pFVar5;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *this_02;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *in_stack_00000004;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_50[16];
  bool local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *local_2c;
  TacticalManager *local_28;
  Faction *local_24;
  undefined **local_20;
  SharedPtr_L_struct_UIWidget_G_ *local_1c;
  TacticalManager *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_2c = in_stack_00000004;
  if ((this->GetAllBodies_MemoizedValue).IsValidData == false) {
    iVar3 = (this->TacticalManagerMemoizationHandlerInstance).ResetFunctions.Size;
    local_28 = (TacticalManager *)(iVar3 + 1);
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->TacticalManagerMemoizationHandlerInstance,
               (int *)&local_28);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->TacticalManagerMemoizationHandlerInstance,iVar3);
    if (bVar2) {
      (this->TacticalManagerMemoizationHandlerInstance).ResetFunctions.Data
      [(this->TacticalManagerMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_f910390b, TacticalManager__GetAllBodies_Clear);
    }
    this_01 = (ActorHandler *)
              util__Darray_enum_CrewDepartment__Type___Num((Darray_L_enum_CrewDepartment__Type_G_ *)this);
    ActorHandler__GetAllActors(this_01);
    local_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    iVar3 = (*(code *)local_20[3])();
    util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_3c,iVar3);
    FUN_007f5060(&local_20,this,&local_3c);
    local_20 = ((void *)(0x0091d1bcu));
    if (local_1c != (SharedPtr_L_struct_UIWidget_G_ *)0x0) {
      util__SharedPtr_struct_UIWidget____vector_deleting_destructor(local_1c,3);
    }
    local_1c = (SharedPtr_L_struct_UIWidget_G_ *)0x0;
    local_20 = ((void *)(0x00919488u));
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_50,(Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_3c);
    local_40 = true;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetAllBodies_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_50);
    (this->GetAllBodies_MemoizedValue).IsValidData = local_40;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_50);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_3c);
  }
  this_02 = local_2c;
  pMVar1 = &this->GetAllBodies_MemoizedValue;
  if ((this->GetAllBodies_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  *(undefined4 *)this_02 = 0;
  *(undefined4 *)(this_02 + 4) = 0;
  *(undefined4 *)(this_02 + 8) = 0;
  *(undefined4 *)(this_02 + 0xc) = 0;
  local_10 = this;
  iVar3 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body(this_02,iVar3);
  local_c = 0;
  iVar3 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
  if (local_c < iVar3) {
    do {
      piVar4 = (int *)(**(code **)*(int *)&pMVar1->Data)(&local_c);
      if ((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]);
        if (!bVar2) {
          *piVar4 = 0;
        }
      }
      local_24 = *(Faction **)(*(int *)(uintptr_t)piVar4 + 0x1e0);
      local_28 = local_10;
      TacticalManager_GetStrategicGame_Memoize(local_10);
      if (*(char *)&(local_28->Effects).Controller == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      pFVar5 = StrategicManager__GetPlayerAlliance((StrategicManager *)(local_28->Effects).Pointer);
      if (local_24 != pFVar5) {
        if ((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) {
          bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]);
          if (!bVar2) {
            *piVar4 = 0;
          }
        }
        if (*(int *)(*(int *)(uintptr_t)piVar4 + 0x1e0) != 0) {
          iVar3 = *(int *)(this_02 + 8);
          local_24 = (Faction *)(iVar3 + 1);
          util__Darray_class_util__WeakPtr_class_Body_____SetSize(local_2c,(int *)&local_24);
          this_02 = local_2c;
          bVar2 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(local_2c,iVar3);
          if (bVar2) {
            iVar3 = *(int *)(this_02 + 4) + *(int *)(this_02 + 8) * 8;
            local_24 = *(Faction **)(iVar3 + -4);
            *(int *)(iVar3 + -8) = *piVar4;
            this_00 = (ReferenceController *)piVar4[1];
            *(ReferenceController **)(iVar3 + -4) = this_00;
            if (this_00 != (ReferenceController *)0x0) {
              util__ReferenceController__AddWeakReference(this_00);
            }
            if (local_24 != (Faction *)0x0) {
              util__ReferenceController__ReleaseWeakReference((ReferenceController *)local_24);
            }
          }
        }
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007ff650 007ff650_GetSpacecraftComponentsNotOfAlliance ====
// decompiled by BatchDecomp @ 007ff650 name=GetSpacecraftComponentsNotOfAlliance conv=__thiscall body=574

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G __thiscall
   TacticalManager__GetSpacecraftComponentsNotOfAlliance(class Faction *)const  */

void __thiscall
TacticalManager__GetSpacecraftComponentsNotOfAlliance(TacticalManager *this,Faction *param_1)

{
  undefined4 stack0x00000008;
  undefined4 stack0xfffffffc;
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  bool bVar6;
  Faction *pFVar7;
  int iVar8;
  int *piVar9;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *pDVar10;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *this_02;
  Faction *in_stack_00000008;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_68[16];
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_58[16];
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_48[16];
  Faction *local_38;
  undefined4 local_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 *local_24[4];
  int local_14;
  int *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_38 = param_1;
  local_14 = 0;
  TacticalManager_GetStrategicGame_Memoize(this);
  if (*(char *)&(this->Effects).Controller == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pFVar7 = StrategicManager__GetPlayerAlliance((StrategicManager *)(this->Effects).Pointer);
  if (in_stack_00000008 == pFVar7) {
    this_02 = local_68;
    bVar4 = true;
    bVar3 = false;
    bVar2 = false;
    bVar6 = false;
    bVar1 = false;
    pDVar10 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
              &(this->Optimizers).NonAlliedSpacecraftComponents.Size;
  }
  else {
    TacticalManager_GetStrategicGame_Memoize(this);
    if (*(char *)&(this->Effects).Controller == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    pFVar7 = StrategicManager__GetEnemyAlliance((StrategicManager *)(this->Effects).Pointer);
    if (in_stack_00000008 == pFVar7) {
      pDVar10 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
                util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(local_58,(Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
                                    &(this->Optimizers).NonEnemySpacecraftComponents.Size);
      bVar3 = true;
      bVar2 = false;
      bVar6 = false;
    }
    else {
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_24,
                 (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
                 &(this->Optimizers).SpacecraftComponents.Size);
      local_10 = (int *)&stack0x00000008;
      local_34 = 0;
      iStack_30 = 0;
      iStack_2c = 0;
      uStack_28 = 0;
      iVar8 = (*(code *)local_24[0][3])();
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_34,iVar8);
      local_c = 0;
      iVar8 = (*(code *)local_24[0][3])();
      if (local_c < iVar8) {
        do {
          piVar9 = (int *)(*(code *)*local_24[0])(&local_c);
          if ((ReferenceController *)piVar9[1] != (ReferenceController *)0x0) {
            bVar6 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar9[1]);
            if (!bVar6) {
              *piVar9 = 0;
            }
          }
          iVar8 = *piVar9;
          if (*(ReferenceController **)(iVar8 + 8) != (ReferenceController *)0x0) {
            bVar6 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar8 + 8));
            if (!bVar6) {
              *(undefined4 *)(iVar8 + 4) = 0;
            }
          }
          iVar5 = iStack_2c;
          if (*(int *)(*(int *)(iVar8 + 4) + 0x1e0) != *local_10) {
            local_14 = iStack_2c + 1;
            util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_34,&local_14);
            bVar6 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_34,iVar5);
            if (bVar6) {
              this_00 = *(ReferenceController **)(iStack_30 + -4 + iStack_2c * 8);
              iVar8 = iStack_30 + iStack_2c * 8;
              *(int *)(iVar8 + -8) = *piVar9;
              this_01 = (ReferenceController *)piVar9[1];
              *(ReferenceController **)(iVar8 + -4) = this_01;
              if (this_01 != (ReferenceController *)0x0) {
                util__ReferenceController__AddWeakReference(this_01);
              }
              if (this_00 != (ReferenceController *)0x0) {
                util__ReferenceController__ReleaseWeakReference(this_00);
              }
            }
          }
          local_c = local_c + 1;
          iVar8 = (*(code *)local_24[0][3])();
        } while (local_c < iVar8);
      }
      pDVar10 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_34;
      bVar3 = false;
      bVar2 = true;
      bVar6 = true;
    }
    bVar4 = false;
    bVar1 = true;
    this_02 = local_48;
  }
  pDVar10 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
            util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(this_02,pDVar10);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_38,pDVar10);
  if (bVar1) {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_48);
  }
  if (bVar6) {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_34);
  }
  if (bVar2) {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_24);
  }
  if (bVar3) {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_58);
  }
  if (bVar4) {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_68);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007ff890 007ff890_GetSpacecraftComponentsOfAlliance ====
// decompiled by BatchDecomp @ 007ff890 name=GetSpacecraftComponentsOfAlliance conv=__thiscall body=574

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G __thiscall
   TacticalManager__GetSpacecraftComponentsOfAlliance(class Faction *)const  */

void __thiscall
TacticalManager__GetSpacecraftComponentsOfAlliance(TacticalManager *this,Faction *param_1)

{
  undefined4 stack0x00000008;
  undefined4 stack0xfffffffc;
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  bool bVar6;
  Faction *pFVar7;
  int iVar8;
  int *piVar9;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *pDVar10;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *this_02;
  Faction *in_stack_00000008;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_68[16];
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_58[16];
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_48[16];
  Faction *local_38;
  undefined4 local_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 *local_24[4];
  int local_14;
  int *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_38 = param_1;
  local_14 = 0;
  TacticalManager_GetStrategicGame_Memoize(this);
  if (*(char *)&(this->Effects).Controller == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pFVar7 = StrategicManager__GetPlayerAlliance((StrategicManager *)(this->Effects).Pointer);
  if (in_stack_00000008 == pFVar7) {
    this_02 = local_68;
    bVar4 = true;
    bVar3 = false;
    bVar2 = false;
    bVar6 = false;
    bVar1 = false;
    pDVar10 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
              &(this->Optimizers).AlliedSpacecraftComponents.Size;
  }
  else {
    TacticalManager_GetStrategicGame_Memoize(this);
    if (*(char *)&(this->Effects).Controller == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    pFVar7 = StrategicManager__GetEnemyAlliance((StrategicManager *)(this->Effects).Pointer);
    if (in_stack_00000008 == pFVar7) {
      pDVar10 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
                util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(local_58,(Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
                                    &(this->Optimizers).EnemySpacecraftComponents.Size);
      bVar3 = true;
      bVar2 = false;
      bVar6 = false;
    }
    else {
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_24,
                 (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
                 &(this->Optimizers).SpacecraftComponents.Size);
      local_10 = (int *)&stack0x00000008;
      local_34 = 0;
      iStack_30 = 0;
      iStack_2c = 0;
      uStack_28 = 0;
      iVar8 = (*(code *)local_24[0][3])();
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_34,iVar8);
      local_c = 0;
      iVar8 = (*(code *)local_24[0][3])();
      if (local_c < iVar8) {
        do {
          piVar9 = (int *)(*(code *)*local_24[0])(&local_c);
          if ((ReferenceController *)piVar9[1] != (ReferenceController *)0x0) {
            bVar6 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar9[1]);
            if (!bVar6) {
              *piVar9 = 0;
            }
          }
          iVar8 = *piVar9;
          if (*(ReferenceController **)(iVar8 + 8) != (ReferenceController *)0x0) {
            bVar6 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar8 + 8));
            if (!bVar6) {
              *(undefined4 *)(iVar8 + 4) = 0;
            }
          }
          iVar5 = iStack_2c;
          if (*(int *)(*(int *)(iVar8 + 4) + 0x1e0) == *local_10) {
            local_14 = iStack_2c + 1;
            util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_34,&local_14);
            bVar6 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_34,iVar5);
            if (bVar6) {
              this_00 = *(ReferenceController **)(iStack_30 + -4 + iStack_2c * 8);
              iVar8 = iStack_30 + iStack_2c * 8;
              *(int *)(iVar8 + -8) = *piVar9;
              this_01 = (ReferenceController *)piVar9[1];
              *(ReferenceController **)(iVar8 + -4) = this_01;
              if (this_01 != (ReferenceController *)0x0) {
                util__ReferenceController__AddWeakReference(this_01);
              }
              if (this_00 != (ReferenceController *)0x0) {
                util__ReferenceController__ReleaseWeakReference(this_00);
              }
            }
          }
          local_c = local_c + 1;
          iVar8 = (*(code *)local_24[0][3])();
        } while (local_c < iVar8);
      }
      pDVar10 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_34;
      bVar3 = false;
      bVar2 = true;
      bVar6 = true;
    }
    bVar4 = false;
    bVar1 = true;
    this_02 = local_48;
  }
  pDVar10 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
            util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(this_02,pDVar10);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_38,pDVar10);
  if (bVar1) {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_48);
  }
  if (bVar6) {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_34);
  }
  if (bVar2) {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_24);
  }
  if (bVar3) {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_58);
  }
  if (bVar4) {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_68);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000803c40 00803c40_SelectNearestBody ====
extern undefined4 FUN_007f5420(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_007f7460(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00803c40 name=SelectNearestBody conv=__thiscall body=604

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall TacticalManager__SelectNearestBody(struct util__PhysicalState_L_struct____util__Vec3_L_double_G___G) */

void __thiscall TacticalManager__SelectNearestBody(TacticalManager *this)

{
  undefined4 stack0x00000004;
  undefined4 stack0xfffffffc;
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *pDVar5;
  Body *this_00;
  ReferenceController *pRVar6;
  undefined8 local_54;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_4c[8];
  int local_44;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_3c[16];
  Body *local_2c;
  ReferenceController *local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined **local_18;
  ReferenceController **ppRStack_14;
  undefined8 *puStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar2 = (int *)GetAllPhysicalBodies(this);
  iVar3 = (**(code **)(*(int *)(uintptr_t)piVar2 + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_18);
  if (iVar3 < 1) {
    local_18 = ((void *)(0x0091e0b8u));
    ppRStack_14 = (ReferenceController **)0x0;
    puStack_10 = (undefined8 *)0x0;
    uStack_c = 0;
    SelectBodies(this,(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_18,false);
    pDVar5 = (Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_18;
    goto LAB_00803e84;
  }
  local_28 = (ReferenceController *)((uint)local_28 & 0xffffff00);
  pRVar6 = local_28;
  uVar4 = GetAllPhysicalBodies(this);
  FUN_007f7460(local_4c,uVar4,pRVar6);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_18);
  pDVar5 = local_4c;
  if (local_44 < 1) {
    pDVar5 = local_3c;
  }
  local_28 = (ReferenceController *)&stack0x00000004;
  iVar3 = (**(code **)(*(int *)pDVar5 + 0xc))();
  if (iVar3 < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\function.inl",0x179,
                    "ArrayToCheck.Num() > 0",(char *)0x0);
    DebugBreak();
  }
  ppRStack_14 = &local_28;
  puStack_10 = &local_24;
  local_1c = 0;
  local_54 = 0;
  local_24 = 0;
  FUN_007f5420(pDVar5,CONCAT44(puStack_10,ppRStack_14),&local_54);
  if ((char)local_1c == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\function.inl",0x186,
                    "BestType.IsValid()",(char *)0x0);
    DebugBreak();
    if ((char)local_1c == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  pRVar6 = ((slice_view *)&local_24)->_4_4_;
  this_00 = (Body *)local_24;
  if (((slice_view *)&local_24)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(((slice_view *)&local_24)->_4_4_);
    if (pRVar6 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar6);
      util__ReferenceController__ReleaseWeakReference(pRVar6);
    }
  }
  if (((slice_view *)&local_24)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_24)->_4_4_);
  }
  if (this_00 == (Body *)0x0) {
LAB_00803e45:
    if (pRVar6 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRVar6);
    }
  }
  else if (pRVar6 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__IsDataStillValid(pRVar6);
    if (bVar1) {
      bVar1 = util__ReferenceController__IsDataStillValid(pRVar6);
      if (!bVar1) {
        this_00 = (Body *)0x0;
      }
      Body__IsAlive_Memoize(this_00);
      if ((this_00->IsAlive_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if ((this_00->IsAlive_MemoizedValue).Data != false) {
        local_28 = pRVar6;
        local_2c = this_00;
        util__ReferenceController__AddWeakReference(pRVar6);
        local_18 = (undefined **)0x0;
        ppRStack_14 = (ReferenceController **)0x0;
        puStack_10 = (undefined8 *)0x0;
        uStack_c = 0;
        util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_18,1);
        util__Darray_class_util__WeakPtr_class_Body_____Add((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_18,
                   (WeakPtr_L_class_Body_G_ *)&local_2c);
        SelectBodies(this,(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_18,false);
        util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_18);
        util__ReferenceController__ReleaseWeakReference(pRVar6);
      }
    }
    goto LAB_00803e45;
  }
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_3c);
  pDVar5 = local_4c;
LAB_00803e84:
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(pDVar5);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000822d60 00822d60_FUN_00822d60 ====
undefined4 * FUN_00822d60(undefined4 *param_1,int *param_2);

// decompiled by BatchDecomp @ 00822d60 name=FUN_00822d60 conv=unknown body=376

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

undefined4 * FUN_00822d60(undefined4 *param_1,int *param_2)

{
  int iVar1;
  Body *pBVar2;
  ReferenceController *this;
  bool bVar3;
  bool bVar4;
  ControllableComponent *local_14;
  ReferenceController *local_10;
  undefined1 local_c;
  
  if ((ReferenceController *)param_2[1] != (ReferenceController *)0x0) {
    bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]);
    if (!bVar4) {
      *param_2 = 0;
    }
  }
  iVar1 = *param_2;
  if (*(ReferenceController **)(iVar1 + 8) != (ReferenceController *)0x0) {
    bVar4 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar1 + 8));
    if (!bVar4) {
      *(undefined4 *)(iVar1 + 4) = 0;
    }
  }
  pBVar2 = *(Body **)(iVar1 + 4);
  Body__GetControllableComponent_Memoize(pBVar2);
  if ((pBVar2->GetControllableComponent_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  this = (pBVar2->GetControllableComponent_MemoizedValue).Data.Controller;
  if (this != (ReferenceController *)0x0) {
    bVar4 = util__ReferenceController__IsDataStillValid(this);
    if (!bVar4) {
      (pBVar2->GetControllableComponent_MemoizedValue).Data.Pointer = (ControllableComponent *)0x0;
    }
  }
  bVar4 = ControllableComponent__CanReceiveOrders((pBVar2->GetControllableComponent_MemoizedValue).Data.Pointer);
  if (bVar4) {
    if ((ReferenceController *)param_2[1] != (ReferenceController *)0x0) {
      bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]);
      if (!bVar4) {
        *param_2 = 0;
      }
    }
    iVar1 = *param_2;
    if (*(ReferenceController **)(iVar1 + 8) != (ReferenceController *)0x0) {
      bVar4 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar1 + 8));
      if (!bVar4) {
        *(undefined4 *)(iVar1 + 4) = 0;
      }
    }
    pBVar2 = *(Body **)(iVar1 + 4);
    Body__GetControllableComponent_Memoize(pBVar2);
    if ((pBVar2->GetControllableComponent_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    local_14 = (pBVar2->GetControllableComponent_MemoizedValue).Data.Pointer;
    local_10 = (pBVar2->GetControllableComponent_MemoizedValue).Data.Controller;
    if (local_10 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(local_10);
    }
    local_c = 1;
    bVar3 = true;
    bVar4 = false;
  }
  else {
    local_14 = (ControllableComponent *)0x0;
    local_10 = (ReferenceController *)0x0;
    local_c = 0;
    bVar3 = false;
    bVar4 = true;
  }
  *param_1 = local_14;
  param_1[1] = local_10;
  if (local_10 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(local_10);
  }
  *(undefined1 *)(param_1 + 2) = local_c;
  if (bVar4) {
    if (local_10 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_10);
    }
  }
  if ((local_10 != (ReferenceController *)0x0) && (bVar3)) {
    util__ReferenceController__ReleaseWeakReference(local_10);
  }
  return param_1;
}


//==== 0000827ae0 00827ae0_CanSplitUnits ====
// decompiled by BatchDecomp @ 00827ae0 name=CanSplitUnits conv=__thiscall body=326

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall ShipGroupUI__CanSplitUnits(void)const  */

bool __thiscall ShipGroupUI__CanSplitUnits(ShipGroupUI *this)

{
  undefined4 stack0xfffffffc;
  Body *this_00;
  ReferenceController *this_01;
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar1 = IsGroupAllied(this);
  if (!bVar1) {
    uVar2 = 0;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return (bool)uVar2;
  }
  local_1c = (undefined4 *)0x0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  GetShipsInGroup(this);
  local_c = 0;
  iVar3 = (*(code *)local_1c[3])();
  if (local_c < iVar3) {
    do {
      piVar4 = (int *)(*(code *)*local_1c)(&local_c);
      if (((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]),
         !bVar1)) {
        *piVar4 = 0;
      }
      iVar3 = *piVar4;
      if ((*(ReferenceController **)(iVar3 + 8) != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar3 + 8)),
         !bVar1)) {
        *(undefined4 *)(iVar3 + 4) = 0;
      }
      this_00 = *(Body **)(iVar3 + 4);
      Body__GetControllableComponent_Memoize(this_00);
      if ((this_00->GetControllableComponent_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      this_01 = (this_00->GetControllableComponent_MemoizedValue).Data.Controller;
      if ((this_01 != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid(this_01), !bVar1)) {
        (this_00->GetControllableComponent_MemoizedValue).Data.Pointer =
             (ControllableComponent *)0x0;
      }
      bVar1 = ControllableComponent__IsMarkedAsSeparatingFromFleet((this_00->GetControllableComponent_MemoizedValue).Data.Pointer);
      if (bVar1) goto LAB_00827bf8;
      local_c = local_c + 1;
      iVar3 = (*(code *)local_1c[3])();
    } while (local_c < iVar3);
  }
  bVar1 = SplittingIsValid(this);
  if (bVar1) {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_1c);
    uVar2 = 1;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return (bool)uVar2;
  }
LAB_00827bf8:
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_1c);
  uVar2 = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


//==== 0000827c30 00827c30_CanUnsplitUnits ====
// decompiled by BatchDecomp @ 00827c30 name=CanUnsplitUnits conv=__thiscall body=326

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall ShipGroupUI__CanUnsplitUnits(void)const  */

bool __thiscall ShipGroupUI__CanUnsplitUnits(ShipGroupUI *this)

{
  undefined4 stack0xfffffffc;
  Body *this_00;
  ReferenceController *this_01;
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar1 = IsGroupAllied(this);
  if (!bVar1) {
    uVar2 = 0;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return (bool)uVar2;
  }
  local_1c = (undefined4 *)0x0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  GetShipsInGroup(this);
  local_c = 0;
  iVar3 = (*(code *)local_1c[3])();
  if (local_c < iVar3) {
    do {
      piVar4 = (int *)(*(code *)*local_1c)(&local_c);
      if (((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]),
         !bVar1)) {
        *piVar4 = 0;
      }
      iVar3 = *piVar4;
      if ((*(ReferenceController **)(iVar3 + 8) != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar3 + 8)),
         !bVar1)) {
        *(undefined4 *)(iVar3 + 4) = 0;
      }
      this_00 = *(Body **)(iVar3 + 4);
      Body__GetControllableComponent_Memoize(this_00);
      if ((this_00->GetControllableComponent_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      this_01 = (this_00->GetControllableComponent_MemoizedValue).Data.Controller;
      if ((this_01 != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid(this_01), !bVar1)) {
        (this_00->GetControllableComponent_MemoizedValue).Data.Pointer =
             (ControllableComponent *)0x0;
      }
      bVar1 = ControllableComponent__IsMarkedAsSeparatingFromFleet((this_00->GetControllableComponent_MemoizedValue).Data.Pointer);
      if (!bVar1) goto LAB_00827d48;
      local_c = local_c + 1;
      iVar3 = (*(code *)local_1c[3])();
    } while (local_c < iVar3);
  }
  bVar1 = SplittingIsValid(this);
  if (bVar1) {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_1c);
    uVar2 = 1;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return (bool)uVar2;
  }
LAB_00827d48:
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_1c);
  uVar2 = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


//==== 0000828880 00828880_GetColorFromSelection ====
// decompiled by BatchDecomp @ 00828880 name=GetColorFromSelection conv=__thiscall body=454

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: struct util__Color __thiscall ShipGroupUI__GetColorFromSelection(void)const  */

Color * __thiscall
ShipGroupUI__GetColorFromSelection(ShipGroupUI *this,Color *__return_storage_ptr__)

{
  undefined4 stack0xfffffffc;
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  CoreUITheme *pCVar5;
  Color *pCVar6;
  uint uVar7;
  uint uVar8;
  Maybe_L_bool_G_ MVar9;
  undefined4 uVar10;
  Maybe_L_bool_G_ MVar11;
  ReferenceController *pRVar12;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_24[16];
  Color *local_14;
  undefined8 local_10;
  undefined8 local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_14 = __return_storage_ptr__;
  piVar2 = (int *)GetShipsInGroup(this);
  iVar3 = (**(code **)(*(int *)(uintptr_t)piVar2 + 0xc))();
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_24);
  if (iVar3 == 0) {
    util__Color__Color(__return_storage_ptr__,Black,1.0);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return __return_storage_ptr__;
  }
  piVar2 = (int *)GetShipsInGroup(this);
  local_c = 0;
  iVar3 = (**(code **)(*(int *)(uintptr_t)piVar2 + 0xc))();
  if ((int)local_c < iVar3) {
    do {
      piVar4 = (int *)(**(code **)*piVar2)(&local_c);
      if (((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]),
         !bVar1)) {
        *piVar4 = 0;
      }
      uVar10 = *(undefined4 *)(*piVar4 + 4);
      pRVar12 = *(ReferenceController **)(*piVar4 + 8);
      if (pRVar12 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar12);
      }
      bVar1 = TacticalManager__IsBodySelected((TacticalManager *)this->_pad_0x0_0,uVar10,pRVar12);
      if (!bVar1) {
        local_10 = local_10 & 0xffffff00;
        goto LAB_00828962;
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)(uintptr_t)piVar2 + 0xc))();
    } while ((int)local_c < iVar3);
  }
  ((slice_view *)&local_10)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&local_10)->_1_3_[0] | (((slice_view *)&local_10)->_1_3_[1] << 8) | (((slice_view *)&local_10)->_1_3_[2] << 16)) << 8));
LAB_00828962:
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_24);
  piVar2 = (int *)GetShipsInGroup(this);
  local_c = 0;
  iVar3 = (**(code **)(*(int *)(uintptr_t)piVar2 + 0xc))();
  if ((int)local_c < iVar3) {
    do {
      piVar4 = (int *)(**(code **)*piVar2)(&local_c);
      if (((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]),
         !bVar1)) {
        *piVar4 = 0;
      }
      uVar10 = *(undefined4 *)(*piVar4 + 4);
      pRVar12 = *(ReferenceController **)(*piVar4 + 8);
      if (pRVar12 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar12);
      }
      bVar1 = TacticalManager__IsBodySelected((TacticalManager *)this->_pad_0x0_0,uVar10,pRVar12);
      if (bVar1) {
        ((slice_view *)&local_c)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&local_c)->_1_3_[0] | (((slice_view *)&local_c)->_1_3_[1] << 8) | (((slice_view *)&local_c)->_1_3_[2] << 16)) << 8));
        goto LAB_008289ee;
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)(uintptr_t)piVar2 + 0xc))();
    } while ((int)local_c < iVar3);
  }
  local_c = local_c & 0xffffff00;
LAB_008289ee:
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_24);
  MVar11.Data = false;
  MVar11.IsValidData = false;
  MVar9.Data = false;
  MVar9.IsValidData = false;
  uVar7 = local_10;
  uVar8 = local_c;
  pCVar5 = UIWidget__GetTheme((UIWidget *)this);
  pCVar6 = local_14;
  UIWidget__CorrectColor((UIWidget *)this,local_14,&pCVar5->ButtonBackgroundColor,SUB41(uVar7,0),SUB41(uVar8,0),
             MVar9,MVar11);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar6;
}


//==== 0000828ed0 00828ed0_GetSelectColor ====
// decompiled by BatchDecomp @ 00828ed0 name=GetSelectColor conv=__thiscall body=646

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct util__Color __thiscall ShipGroupUI__GetSelectColor(void)const  */

Color * __thiscall ShipGroupUI__GetSelectColor(ShipGroupUI *this,Color *__return_storage_ptr__)

{
  undefined4 stack0xfffffffc;
  TacticalManager *this_00;
  int *piVar1;
  int iVar2;
  Color *pCVar3;
  Faction *pFVar4;
  int *piVar5;
  bool bVar6;
  float fVar7;
  undefined4 uVar8;
  ReferenceController *pRVar9;
  Color local_88;
  Color local_68;
  undefined4 local_48;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_44[16];
  Color *local_34;
  char local_2d;
  undefined1 local_2c[16];
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_34 = __return_storage_ptr__;
  local_48 = 0;
  piVar1 = (int *)GetShipsInGroup(this);
  iVar2 = (**(code **)(*(int *)(uintptr_t)piVar1 + 0xc))();
  bVar6 = iVar2 != 0;
  if (bVar6) {
    this_00 = (TacticalManager *)this->_pad_0x0_0;
    pFVar4 = GetAlliance(this);
    TacticalManager__GetAllianceColor(this_00,&local_68,pFVar4);
    pCVar3 = &local_68;
  }
  else {
    pCVar3 = (Color *)util__Color__Color(&local_88,White,1.0);
  }
  ((slice_view *)&local_2c)->_0_4_ = ((void *)(0x00919980u));
  util__Str_char___Str_char((Str_L_char_G_ *)(local_2c + 4),(Str_L_char_G_ *)&pCVar3->_pad_0x0_0);
  ((slice_view *)&local_2c)->_0_4_ = ((void *)(0x0091d980u));
  local_1c = pCVar3->Hue_degrees;
  local_18 = pCVar3->Saturation;
  local_14 = pCVar3->Value;
  local_10 = pCVar3->Alpha;
  if ((bVar6) &&
     (local_68._pad_0x0_0 = (int)((void *)(0x00919980u)),
     (void *)local_68._pad_0x0_0 != (void *)0x0)) {
    operator_delete__((void *)local_68._pad_0x0_0);
    local_68._pad_0x0_0 = 0;
  }
  if ((!bVar6) &&
     (local_88._pad_0x0_0 = (int)((void *)(0x00919980u)),
     (void *)local_88._pad_0x0_0 != (void *)0x0)) {
    operator_delete__((void *)local_88._pad_0x0_0);
    local_88._pad_0x0_0 = 0;
  }
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_44);
  piVar1 = (int *)GetShipsInGroup(this);
  local_c = 0;
  iVar2 = (**(code **)(*(int *)(uintptr_t)piVar1 + 0xc))();
  if (local_c < iVar2) {
    do {
      piVar5 = (int *)(**(code **)*piVar1)(&local_c);
      if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
         (bVar6 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]),
         !bVar6)) {
        *piVar5 = 0;
      }
      uVar8 = *(undefined4 *)(*piVar5 + 4);
      pRVar9 = *(ReferenceController **)(*piVar5 + 8);
      if (pRVar9 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar9);
      }
      bVar6 = TacticalManager__IsBodySelected((TacticalManager *)this->_pad_0x0_0,uVar8,pRVar9);
      if (!bVar6) {
        local_2d = '\0';
        goto LAB_00829060;
      }
      local_c = local_c + 1;
      iVar2 = (**(code **)(*(int *)(uintptr_t)piVar1 + 0xc))();
    } while (local_c < iVar2);
  }
  local_2d = '\x01';
LAB_00829060:
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_44);
  piVar1 = (int *)GetShipsInGroup(this);
  local_c = 0;
  iVar2 = (**(code **)(*(int *)(uintptr_t)piVar1 + 0xc))();
  if (local_c < iVar2) {
    do {
      piVar5 = (int *)(**(code **)*piVar1)(&local_c);
      if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
         (bVar6 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]),
         !bVar6)) {
        *piVar5 = 0;
      }
      uVar8 = *(undefined4 *)(*piVar5 + 4);
      pRVar9 = *(ReferenceController **)(*piVar5 + 8);
      if (pRVar9 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar9);
      }
      bVar6 = TacticalManager__IsBodySelected((TacticalManager *)this->_pad_0x0_0,uVar8,pRVar9);
      if (bVar6) {
        bVar6 = true;
        goto LAB_008290e2;
      }
      local_c = local_c + 1;
      iVar2 = (**(code **)(*(int *)(uintptr_t)piVar1 + 0xc))();
    } while (local_c < iVar2);
  }
  bVar6 = false;
LAB_008290e2:
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_44);
  pCVar3 = local_34;
  if (local_2d == '\0') {
    fVar7 = /*3f800000*/1.0f;
    if (bVar6) {
      fVar7 = /*3ecccccd*/0.4000000059604645f;
    }
  }
  else {
    fVar7 = 0.0;
  }
  util__Color__Darken((Color *)local_2c,local_34,fVar7);
  ((slice_view *)&local_2c)->_0_4_ = ((void *)(0x00919980u));
  if ((void *)((slice_view *)&local_2c)->_4_4_ != (void *)0x0) {
    operator_delete__((void *)((slice_view *)&local_2c)->_4_4_);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar3;
}


//==== 0000829810 00829810_GetSplitOrder ====
extern undefined4 FUN_008250f0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00829810 name=GetSplitOrder conv=__thiscall body=292

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: enum ShipGroupUI__GroupType __thiscall ShipGroupUI__GetSplitOrder(void)const  */

GroupType __thiscall ShipGroupUI__GetSplitOrder(ShipGroupUI *this)

{
  undefined4 stack0xfffffffc;
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  GroupType GVar5;
  uint uVar6;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_2c[16];
  undefined4 *local_1c;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  uint local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = local_c & 0xffffff00;
  local_1c = (undefined4 *)0x0;
  uStack_18 = 0;
  iStack_14 = 0;
  uStack_10 = 0;
  uVar6 = local_c;
  uVar2 = GetShipsInGroup(this);
  FUN_008250f0(&local_1c,uVar2,uVar6);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_2c);
  if (iStack_14 == 0) {
    GVar5 = None;
  }
  else {
    local_c = 0;
    iVar3 = (*(code *)local_1c[3])();
    if ((int)local_c < iVar3) {
      do {
        puVar4 = (undefined4 *)(*(code *)*local_1c)(&local_c);
        if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
           !bVar1)) {
          *puVar4 = 0;
        }
        bVar1 = ControllableComponent__IsMarkedAsSeparatingFromFleet((ControllableComponent *)*puVar4);
        if (bVar1) {
          GVar5 = Some;
          goto LAB_008298bc;
        }
        local_c = local_c + 1;
        iVar3 = (*(code *)local_1c[3])();
      } while ((int)local_c < iVar3);
    }
    GVar5 = None;
LAB_008298bc:
    local_c = 0;
    iVar3 = (*(code *)local_1c[3])();
    if ((int)local_c < iVar3) {
      do {
        puVar4 = (undefined4 *)(*(code *)*local_1c)(&local_c);
        if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
           !bVar1)) {
          *puVar4 = 0;
        }
        bVar1 = ControllableComponent__IsMarkedAsSeparatingFromFleet((ControllableComponent *)*puVar4);
        if (!bVar1) goto LAB_00829914;
        local_c = local_c + 1;
        iVar3 = (*(code *)local_1c[3])();
      } while ((int)local_c < iVar3);
    }
    GVar5 = Every;
  }
LAB_00829914:
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return GVar5;
}


//==== 0000830bd0 00830bd0_FUN_00830bd0 ====
int * __thiscall FUN_00830bd0(int *param_1,uint param_2,undefined4 param_3,int param_4,char param_5);

// decompiled by BatchDecomp @ 00830bd0 name=FUN_00830bd0 conv=unknown body=347

int * __thiscall FUN_00830bd0(int *param_1,uint param_2,undefined4 param_3,int param_4,char param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  void *pvVar6;
  int *piVar7;
  uint uVar8;
  void *pvVar9;
  uint uVar10;
  void *pvVar11;
  
  iVar2 = param_1[4];
  if (0x7fffffffU - iVar2 < param_2) {
    std__basic_string_char_struct_std__char_traits_char__class_std__allocator_char______Xlen();
    pcVar4 = (code *)swi(3);
    piVar7 = (int *)(*pcVar4)();
    return piVar7;
  }
  uVar3 = param_1[5];
  uVar10 = iVar2 + param_2 | 0xf;
  if (uVar10 < 0x80000000) {
    if (0x7fffffff - (uVar3 >> 1) < uVar3) {
      uVar10 = 0x7fffffff;
    }
    else {
      uVar8 = (uVar3 >> 1) + uVar3;
      if (uVar10 < uVar8) {
        uVar10 = uVar8;
      }
    }
  }
  else {
    uVar10 = 0x7fffffff;
  }
  uVar8 = -(uint)(0xfffffffe < uVar10) | uVar10 + 1;
  if (uVar8 < 0x1000) {
    if (uVar8 == 0) {
      pvVar9 = (void *)0x0;
    }
    else {
      pvVar9 = operator_new(uVar8);
    }
  }
  else {
    uVar5 = uVar8 + 0x23;
    if (uVar5 <= uVar8) {
      uVar5 = 0xffffffff;
    }
    pvVar6 = operator_new(uVar5);
    if (pvVar6 == (void *)0x0) goto LAB_00830cf6;
    pvVar9 = (void *)((int)pvVar6 + 0x23U & 0xffffffe0);
    *(void **)((int)pvVar9 + -4) = pvVar6;
  }
  param_1[4] = iVar2 + param_2;
  param_1[5] = uVar10;
  iVar1 = (int)pvVar9 + iVar2;
  if (uVar3 < 0x10) {
    memcpy(pvVar9,param_1,iVar2);
    memset(iVar1,(int)param_5,param_4);
    *(undefined1 *)(param_4 + iVar1) = 0;
    *param_1 = (int)pvVar9;
    return param_1;
  }
  pvVar6 = (void *)*param_1;
  memcpy(pvVar9,pvVar6,iVar2);
  memset(iVar1,(int)param_5,param_4);
  uVar10 = uVar3 + 1;
  *(undefined1 *)(param_4 + iVar1) = 0;
  pvVar11 = pvVar6;
  if (0xfff < uVar10) {
    pvVar11 = *(void **)((int)pvVar6 + -4);
    uVar10 = uVar3 + 0x24;
    if (0x1f < (uint)((int)pvVar6 + (-4 - (int)pvVar11))) {
LAB_00830cf6:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  operator_delete(pvVar11,uVar10);
  *param_1 = (int)pvVar9;
  return param_1;
}


//==== 0000835950 00835950_FUN_00835950 ====
void FUN_00835950(Darray_L_class_util__Str_L_char_G___G_ *param_1,int *param_2);

// decompiled by BatchDecomp @ 00835950 name=FUN_00835950 conv=unknown body=604

void FUN_00835950(Darray_L_class_util__Str_L_char_G___G_ *param_1,int *param_2)

{
  undefined4 stack0xfffffffc;
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  Str_L_char_G_ *pSVar5;
  Str_L_char_G_ *pSVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  Str_L_char_G_ local_58;
  Str_L_char_G_ local_4c;
  Str_L_char_G_ local_40;
  Str_L_char_G_ local_34;
  Maybe_L_int_G_ local_28;
  undefined1 local_20[8];
  undefined8 local_18;
  int *local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  uVar10 = 0;
  local_c = 0;
  local_14 = param_2;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar3 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  *(undefined ***)param_1 = ((void *)(0x0091995cu));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar3;
  if (((int)uVar3 < 0) || (0x3fffffff < (int)uVar3)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar3) {
    uVar8 = -(uint)((int)((ulonglong)uVar3 * 0xc >> 0x20) != 0) | (uint)((ulonglong)uVar3 * 0xc);
    puVar4 = (uint *)operator_new__(-(uint)(0xfffffffb < uVar8) | uVar8 + 4);
    if (puVar4 == (uint *)0x0) {
      puVar4 = (uint *)0x0;
    }
    else {
      *puVar4 = uVar3;
      puVar4 = puVar4 + 1;
      puVar1 = puVar4;
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1 = puVar1 + 3;
      }
    }
    *(uint **)(param_1 + 4) = puVar4;
    if (0 < *(int *)(param_1 + 0xc)) {
      ((slice_view *)&local_20)->_0_4_ = (char *)0x0;
      iVar12 = 0;
      ((slice_view *)&local_20)->_4_4_ = 0;
      local_18 = 0;
      iVar11 = 0;
      do {
        util__Str_char___operator__o8
                  ((Str_L_char_G_ *)(*(int *)(param_1 + 4) + iVar12),(Str_L_char_G_ *)local_20);
        iVar11 = iVar11 + 1;
        iVar12 = iVar12 + 0xc;
        uVar10 = local_c;
      } while (iVar11 < *(int *)(param_1 + 0xc));
    }
  }
  piVar13 = local_14;
  local_c = 0;
  iVar11 = (**(code **)(*(int *)(uintptr_t)local_14 + 0xc))();
  if ((int)local_c < iVar11) {
    do {
      pSVar5 = (Str_L_char_G_ *)(**(code **)*piVar13)(&local_c);
      local_28.Data = 0;
      local_28.IsValidData = false;
      local_10 = pSVar5->Length + -1;
      pSVar6 = util__Str_char___SubStr(pSVar5,&local_58,local_10,&local_28);
      if (pSVar6->Capacity < 1) {
        pcVar9 = "";
      }
      else {
        pcVar9 = pSVar6->Data;
      }
      pcVar7 = "*";
      while( true ) {
        if ((pcVar7[(int)(pcVar9 + -0x940260)] == '\0') && (*pcVar7 == '\0')) {
          ((slice_view *)&local_20)->_4_4_ = local_10;
          uVar10 = uVar10 | 1;
          ((slice_view *)&local_18)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&local_18)->_1_3_[0] | (((slice_view *)&local_18)->_1_3_[1] << 8) | (((slice_view *)&local_18)->_1_3_[2] << 16)) << 8));
          pSVar5 = util__Str_char___SubStr(pSVar5,&local_4c,0,(Maybe_L_int_G_ *)(local_20 + 4));
          goto LAB_00835ad6;
        }
        if (pcVar7[(int)(pcVar9 + -0x940260)] != *pcVar7) break;
        pcVar7 = pcVar7 + 1;
      }
      uVar10 = uVar10 | 2;
      pSVar5 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_40,pSVar5);
LAB_00835ad6:
      util__Str_char___Str_char(&local_34,pSVar5);
      if (((uVar10 & 2) != 0) && (uVar10 = uVar10 & 0xfffffffd, local_40.Data != (char *)0x0)) {
        operator_delete__(local_40.Data);
        local_40.Data = (char *)0x0;
      }
      if (((uVar10 & 1) != 0) && (uVar10 = uVar10 & 0xfffffffe, local_4c.Data != (char *)0x0)) {
        operator_delete__(local_4c.Data);
        local_4c.Data = (char *)0x0;
      }
      if (local_58.Data != (char *)0x0) {
        operator_delete__(local_58.Data);
        local_58.Data = (char *)0x0;
      }
      iVar11 = *(int *)(param_1 + 8);
      local_10 = iVar11 + 1;
      util__Darray_class_util__Str_char_____SetSize(param_1,&local_10);
      bVar2 = util__Darray_class_util__Str_char_____CheckSize(param_1,iVar11);
      if (bVar2) {
        util__Str_char___operator__o8
                  ((Str_L_char_G_ *)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 8) * 3 + -3) * 4),
                   &local_34);
      }
      if (local_34.Data != (char *)0x0) {
        operator_delete__(local_34.Data);
        local_34.Data = (char *)0x0;
      }
      piVar13 = local_14;
      local_c = local_c + 1;
      iVar11 = (**(code **)(*(int *)(uintptr_t)local_14 + 0xc))();
    } while ((int)local_c < iVar11);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000083ab30 0083ab30_FUN_0083ab30 ====
void __thiscall FUN_0083ab30(int *param_1,char param_2);

// decompiled by BatchDecomp @ 0083ab30 name=FUN_0083ab30 conv=unknown body=753

void __thiscall FUN_0083ab30(int *param_1,char param_2)

{
  undefined4 stack0xfffffffc;
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *local_10;
  int *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar6 = *param_1;
  iVar5 = *(int *)(iVar6 + 0x10);
  if (iVar5 == 1) {
LAB_0083ab9f:
    iVar6 = *(int *)(iVar6 + 0x24);
    if (iVar6 == 2) {
      iVar5 = 0x8054;
    }
    else {
LAB_0083ac16:
      iVar5 = 0x8051;
      if (iVar6 == 1) {
        iVar5 = 0x8054;
      }
    }
  }
  else {
    if (iVar5 != 2) {
      if (iVar5 != 3) {
        if (*(int *)(iVar6 + 0x24) == 2) {
          iVar5 = 0x805b;
          uVar4 = 0x1908;
        }
        else {
          iVar5 = 0x8058;
          uVar4 = 0x1908;
          if (*(int *)(iVar6 + 0x24) == 1) {
            iVar5 = 0x805b;
          }
        }
        goto LAB_0083ac2b;
      }
      if (param_2 == '\0') {
        if (*(int *)(iVar6 + 0x24) == 2) {
          iVar5 = 0x822e;
          uVar4 = 0x1903;
        }
        else {
          uVar4 = 0x1903;
          iVar5 = 0x822a - (uint)(*(int *)(iVar6 + 0x24) != 1);
        }
        goto LAB_0083ac2b;
      }
      if (*(int *)param_1[1] != 2) {
        iVar5 = 0x1909;
        uVar4 = 0x1909;
        goto LAB_0083ac2b;
      }
      goto LAB_0083ab9f;
    }
    iVar6 = *(int *)(iVar6 + 0x24);
    if (param_2 == '\0') {
      if (iVar6 == 2) {
        iVar5 = 0x8230;
        uVar4 = 0x8227;
      }
      else {
        iVar5 = 0x8227;
        if (iVar6 == 1) {
          iVar5 = 0x822c;
        }
        uVar4 = 0x8227;
      }
      goto LAB_0083ac2b;
    }
    if (iVar6 != 2) goto LAB_0083ac16;
    iVar5 = 0x8054;
  }
  uVar4 = 0x1907;
LAB_0083ac2b:
  piVar2 = (int *)param_1[2];
  if ((char)piVar2[1] != '\0') {
    local_c = DAT_0095f4c8;
    if (DAT_0095f4c8 == (int *)0xffffffff) {
      local_10 = DAT_0095f4c8;
      glGetIntegerv(0xd33,&local_10);
      piVar2 = (int *)param_1[2];
      local_c = local_10;
    }
    DAT_0095f4c8 = local_c;
    local_10 = piVar2;
    if ((char)piVar2[1] == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    piVar2 = (int *)*local_10;
    if ((int)local_c <= *local_10) {
      piVar2 = local_c;
    }
    glTexImage1D(0xde0,0,iVar5,piVar2,0,uVar4,0x1401,*(undefined4 *)param_1[3]);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_10 = piVar2;
  if (*(char *)(param_1[4] + 8) != '\0') {
    local_10 = DAT_0095f4c8;
    if (DAT_0095f4c8 == (int *)0xffffffff) {
      local_c = (int *)0xffffffff;
      glGetIntegerv(0xd33,&local_c);
      local_10 = local_c;
    }
    piVar2 = local_10;
    if (local_10 == (int *)0xffffffff) {
      DAT_0095f4c8 = local_10;
      local_c = local_10;
      glGetIntegerv(0xd33,&local_c);
      local_10 = local_c;
    }
    piVar1 = (int *)param_1[4];
    local_c = piVar1;
    DAT_0095f4c8 = local_10;
    if ((char)piVar1[2] == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
      local_c = (int *)param_1[4];
    }
    piVar3 = (int *)piVar1[1];
    if ((int)piVar2 <= piVar1[1]) {
      piVar3 = piVar2;
    }
    if ((char)local_c[2] == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    piVar2 = (int *)*local_c;
    if ((int)local_10 <= *local_c) {
      piVar2 = local_10;
    }
    if (*(int *)param_1[1] == 2) {
      iVar6 = 0;
      do {
        glTexImage2D(iVar6 + 0x8515,0,iVar5,piVar2,piVar3,0,uVar4,0x1401,*(undefined4 *)param_1[3]);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 6);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    glTexImage2D(0xde1,0,iVar5,piVar2,piVar3,0,uVar4,0x1401,*(undefined4 *)param_1[3]);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000083d860 0083d860_FUN_0083d860 ====
Vec3_L_float_G_ * __thiscall FUN_0083d860(undefined4 *param_1,Vec3_L_float_G_ *param_2,int param_3);

// decompiled by BatchDecomp @ 0083d860 name=FUN_0083d860 conv=unknown body=285

Vec3_L_float_G_ * __thiscall FUN_0083d860(undefined4 *param_1,Vec3_L_float_G_ *param_2,int param_3)

{
  undefined8 *puVar1;
  Vec3_L_float_G_ *pVVar2;
  Vec3_L_float_G_ *pVVar3;
  Vec3_L_float_G_ *__return_storage_ptr__;
  Vec3_L_float_G_ local_98;
  Vec3_L_float_G_ local_8c;
  Vec3_L_float_G_ local_80;
  undefined8 local_74;
  float local_6c;
  undefined8 local_48;
  float local_40;
  Vec3_L_float_G_ local_1c;
  Vec3_L_float_G_ local_10;
  
  puVar1 = (undefined8 *)(*(code *)**(undefined4 **)*param_1)(param_3);
  local_48 = *puVar1;
  local_40 = *(float *)(puVar1 + 1);
  puVar1 = (undefined8 *)(*(code *)**(undefined4 **)*param_1)(param_3 + 4);
  local_74 = *puVar1;
  local_6c = *(float *)(puVar1 + 1);
  puVar1 = (undefined8 *)(*(code *)**(undefined4 **)*param_1)(param_3 + 8);
  local_10.X = (float)*puVar1;
  local_1c.X = local_10.X - (float)local_48;
  local_10.Y = (float)((ulonglong)*puVar1 >> 0x20);
  local_1c.Y = local_10.Y - ((slice_view *)&local_48)->_4_4_;
  local_1c.Z = *(float *)(puVar1 + 1) - local_40;
  local_10.Y = ((slice_view *)&local_74)->_4_4_ - ((slice_view *)&local_48)->_4_4_;
  local_10.X = (float)local_74 - (float)local_48;
  local_10.Z = local_6c - local_40;
  pVVar2 = util__Vec3_float___SafeNormalized(&local_1c,&local_80);
  pVVar3 = util__Vec3_float___SafeNormalized(&local_10,&local_8c);
  __return_storage_ptr__ = param_2;
  pVVar2 = util__FUN_0083d860(&local_98,*pVVar3,*pVVar2);
  util__Vec3_float___SafeNormalized(pVVar2,__return_storage_ptr__);
  return param_2;
}


//==== 000085d3b0 0085d3b0_FUN_0085d3b0 ====
void FUN_0085d3b0(Str_L_char_G_ *param_1,Str_L_char_G_ *param_2,undefined4 param_3,undefined4 *param_4, char param_5);
extern undefined4 FUN_0085eb90(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 0085d3b0 name=FUN_0085d3b0 conv=unknown body=732

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_0085d3b0(Str_L_char_G_ *param_1,Str_L_char_G_ *param_2,undefined4 param_3,undefined4 *param_4,
                 char param_5)

{
  undefined4 stack0xfffffffc;
  Str_L_char_G_ *pSVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  char *pcVar8;
  GameManager *this;
  Darray_L_class_util__Str_L_char_G___G_ local_48[4];
  Str_L_char_G_ local_44;
  GameManager *local_38;
  Str_L_char_G_ *local_34;
  Str_L_char_G_ local_30;
  Str_L_char_G_ local_24;
  Str_L_char_G_ local_18;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_34 = param_2;
  pSVar1 = util__Str_char___PrettyPrinted(param_1,&local_18);
  if (pSVar1->Capacity < 1) {
    pcVar8 = "";
  }
  else {
    pcVar8 = pSVar1->Data;
  }
  util__Printf(&local_44,"Loading %s...",pcVar8);
  StartLoading(&local_30);
  if (local_44.Data != (char *)0x0) {
    operator_delete__(local_44.Data);
    local_44.Data = (char *)0x0;
  }
  if (local_18.Data != (char *)0x0) {
    operator_delete__(local_18.Data);
  }
  local_18.Data = (char *)0x0;
  local_18.Capacity = 0;
  local_18.Length = 0;
  if (param_1->Capacity < 1) {
    pcVar8 = "";
  }
  else {
    pcVar8 = param_1->Data;
  }
  if ((int)param_4[1] < 1) {
    puVar7 = &cde_l2_0091985b_NullString;
  }
  else {
    puVar7 = (undefined1 *)*param_4;
  }
  util__GetBasicResourcesPath(&local_44);
  pcVar2 = "";
  if (0 < local_44.Capacity) {
    pcVar2 = local_44.Data;
  }
  util__Printf(&local_18,"%s/Data/%s%s.txt",pcVar2,puVar7,pcVar8);
  if (local_44.Data != (char *)0x0) {
    operator_delete__(local_44.Data);
  }
  FUN_0085eb90(&local_30.Length,&local_18,0);
  util__Str_char___operator__o10(local_34,&local_24);
  if (((char)local_30.Length == '\0') && (param_5 != '\0')) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\infrastructure\\gameplay.h",0x24,
                    "Success || !CrashOnNotFoundOriginal",(char *)0x0);
    DebugBreak();
  }
  if (local_24.Data != (char *)0x0) {
    operator_delete__(local_24.Data);
    local_24.Data = (char *)0x0;
  }
  if (local_18.Data != (char *)0x0) {
    operator_delete__(local_18.Data);
  }
  this = local_38;
  util__SimpleSerializationManager__SetNullPointerErrorState((SimpleSerializationManager *)local_38->Options,None);
  util__SimpleSerializationManager__SetDatumOverrideErrorState((SimpleSerializationManager *)this->Options,None);
  DataParser__SetCurrentLoadType((DataParser *)this->Options,1);
  piVar3 = (int *)GameManager__GetAllResourcePaths(this,SUB41(local_48,0));
  local_c = 0;
  iVar4 = (**(code **)(*(int *)(uintptr_t)piVar3 + 0xc))();
  if (local_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*piVar3)(&local_c);
      local_18.Data = (char *)0x0;
      local_18.Capacity = 0;
      local_18.Length = 0;
      if (param_1->Capacity < 1) {
        pcVar8 = "";
      }
      else {
        pcVar8 = param_1->Data;
      }
      if ((int)param_4[1] < 1) {
        puVar7 = &cde_l2_0091985b_NullString;
      }
      else {
        puVar7 = (undefined1 *)*param_4;
      }
      if ((int)puVar5[1] < 1) {
        puVar6 = &cde_l2_0091985b_NullString;
      }
      else {
        puVar6 = (undefined1 *)*puVar5;
      }
      util__Printf(&local_18,"%s/Data/%s%s.txt",puVar6,puVar7,pcVar8);
      FUN_0085eb90(&local_30.Length,&local_18,1);
      util__Str_char___operator__o10(local_34,&local_24);
      if (local_24.Data != (char *)0x0) {
        operator_delete__(local_24.Data);
        local_24.Data = (char *)0x0;
      }
      if (local_18.Data != (char *)0x0) {
        operator_delete__(local_18.Data);
        ((slice_view *)&local_18)->_0_8_ = ((slice_view *)&local_18)->_0_8_ & 0xffffffff00000000;
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*(int *)(uintptr_t)piVar3 + 0xc))();
      this = local_38;
    } while (local_c < iVar4);
  }
  util__Darray_class_util__Str_char______Darray_class_util__Str_char(local_48);
  util__SimpleSerializationManager__SetNullPointerErrorState((SimpleSerializationManager *)this->Options,Assert);
  util__SimpleSerializationManager__SetDatumOverrideErrorState((SimpleSerializationManager *)this->Options,Ensure);
  DataParser__SetCurrentLoadType((DataParser *)this->Options,0);
  EndLoading((Timer *)&local_30);
  if (this->IsInLoadingScreen == false) {
    RenderBlackScreen(this);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar4 = (*(int *)&this->IconAtlases + 1) % 10;
  *(int *)&this->IconAtlases = iVar4;
  RenderLoadingScreen(this,iVar4);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000085d990 0085d990_FUN_0085d990 ====
void __thiscall FUN_0085d990(GameManager *param_1,Str_L_char_G_ *param_2,Str_L_char_G_ *param_3,int param_4, undefined4 *param_5,char param_6);

// decompiled by BatchDecomp @ 0085d990 name=FUN_0085d990 conv=unknown body=761

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FUN_0085d990(GameManager *param_1,Str_L_char_G_ *param_2,Str_L_char_G_ *param_3,int param_4,
            undefined4 *param_5,char param_6)

{
  undefined4 stack0xfffffffc;
  Str_L_char_G_ *pSVar1;
  char *pcVar2;
  FileIO *pFVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  char *pcVar9;
  DataParser *pDVar10;
  undefined1 uVar11;
  Darray_L_class_util__Str_L_char_G___G_ local_44[4];
  Str_L_char_G_ local_40;
  Str_L_char_G_ *local_34;
  Str_L_char_G_ local_30;
  Str_L_char_G_ local_24;
  Str_L_char_G_ local_18;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_34 = param_3;
  pSVar1 = util__Str_char___PrettyPrinted(param_2,&local_18);
  if (pSVar1->Capacity < 1) {
    pcVar9 = "";
  }
  else {
    pcVar9 = pSVar1->Data;
  }
  util__Printf(&local_40,"Loading %s...",pcVar9);
  StartLoading(&local_30);
  if (local_40.Data != (char *)0x0) {
    operator_delete__(local_40.Data);
    local_40.Data = (char *)0x0;
  }
  if (local_18.Data != (char *)0x0) {
    operator_delete__(local_18.Data);
  }
  local_18.Data = (char *)0x0;
  local_18.Capacity = 0;
  local_18.Length = 0;
  if (param_2->Capacity < 1) {
    pcVar9 = "";
  }
  else {
    pcVar9 = param_2->Data;
  }
  if ((int)param_5[1] < 1) {
    puVar8 = &cde_l2_0091985b_NullString;
  }
  else {
    puVar8 = (undefined1 *)*param_5;
  }
  util__GetBasicResourcesPath(&local_40);
  pcVar2 = "";
  if (0 < local_40.Capacity) {
    pcVar2 = local_40.Data;
  }
  util__Printf(&local_18,"%s/Data/%s%s.txt",pcVar2,puVar8,pcVar9);
  if (local_40.Data != (char *)0x0) {
    operator_delete__(local_40.Data);
  }
  uVar11 = SUB41(&local_18,0);
  pSVar1 = *(Str_L_char_G_ **)(param_4 + 0x10);
  pDVar10 = (DataParser *)&local_30.Length;
  pFVar3 = FileIO__Get();
  FileIO__LoadNumericalLimits(pFVar3,pDVar10,pSVar1,(bool)uVar11);
  util__Str_char___operator__o10(local_34,&local_24);
  if (((char)local_30.Length == '\0') && (param_6 != '\0')) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\infrastructure\\gameplay.h",0x24,
                    "Success || !CrashOnNotFoundOriginal",(char *)0x0);
    DebugBreak();
  }
  if (local_24.Data != (char *)0x0) {
    operator_delete__(local_24.Data);
    local_24.Data = (char *)0x0;
  }
  if (local_18.Data != (char *)0x0) {
    operator_delete__(local_18.Data);
  }
  util__SimpleSerializationManager__SetNullPointerErrorState((SimpleSerializationManager *)param_1->Options,None);
  util__SimpleSerializationManager__SetDatumOverrideErrorState((SimpleSerializationManager *)param_1->Options,None);
  DataParser__SetCurrentLoadType((DataParser *)param_1->Options,1);
  piVar4 = (int *)GameManager__GetAllResourcePaths(param_1,SUB41(local_44,0));
  local_c = 0;
  iVar5 = (**(code **)(*(int *)(uintptr_t)piVar4 + 0xc))();
  if (local_c < iVar5) {
    do {
      puVar6 = (undefined4 *)(**(code **)*piVar4)(&local_c);
      local_18.Data = (char *)0x0;
      local_18.Capacity = 0;
      local_18.Length = 0;
      if (param_2->Capacity < 1) {
        pcVar9 = "";
      }
      else {
        pcVar9 = param_2->Data;
      }
      if ((int)param_5[1] < 1) {
        puVar8 = &cde_l2_0091985b_NullString;
      }
      else {
        puVar8 = (undefined1 *)*param_5;
      }
      if ((int)puVar6[1] < 1) {
        puVar7 = &cde_l2_0091985b_NullString;
      }
      else {
        puVar7 = (undefined1 *)*puVar6;
      }
      util__Printf(&local_18,"%s/Data/%s%s.txt",puVar7,puVar8,pcVar9);
      uVar11 = SUB41(&local_18,0);
      pSVar1 = *(Str_L_char_G_ **)(param_4 + 0x10);
      pDVar10 = (DataParser *)&local_30.Length;
      pFVar3 = FileIO__Get();
      FileIO__LoadNumericalLimits(pFVar3,pDVar10,pSVar1,(bool)uVar11);
      util__Str_char___operator__o10(local_34,&local_24);
      if (local_24.Data != (char *)0x0) {
        operator_delete__(local_24.Data);
        local_24.Data = (char *)0x0;
      }
      if (local_18.Data != (char *)0x0) {
        operator_delete__(local_18.Data);
        ((slice_view *)&local_18)->_0_8_ = ((slice_view *)&local_18)->_0_8_ & 0xffffffff00000000;
      }
      local_c = local_c + 1;
      iVar5 = (**(code **)(*(int *)(uintptr_t)piVar4 + 0xc))();
    } while (local_c < iVar5);
  }
  util__Darray_class_util__Str_char______Darray_class_util__Str_char(local_44);
  util__SimpleSerializationManager__SetNullPointerErrorState((SimpleSerializationManager *)param_1->Options,Assert);
  util__SimpleSerializationManager__SetDatumOverrideErrorState((SimpleSerializationManager *)param_1->Options,Ensure);
  DataParser__SetCurrentLoadType((DataParser *)param_1->Options,0);
  EndLoading((Timer *)&local_30);
  if (param_1->IsInLoadingScreen == false) {
    RenderBlackScreen(param_1);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar5 = (*(int *)&param_1->IconAtlases + 1) % 10;
  *(int *)&param_1->IconAtlases = iVar5;
  RenderLoadingScreen(param_1,iVar5);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000088a000 0088a000_GetParentOffsetLocation ====
// decompiled by BatchDecomp @ 0088a000 name=GetParentOffsetLocation conv=__thiscall body=335

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util__Maybe_L_struct_util__Vec2_L_int_G___G __thiscall
   UIWidget__GetParentOffsetLocation(void)const  */

void __thiscall UIWidget__GetParentOffsetLocation(UIWidget *this)

{
  undefined4 stack0xffffffb8;
  undefined4 stack0xfffffffc;
  ReferenceController *pRVar1;
  UIWidget *pUVar2;
  bool bVar3;
  int *in_stack_00000004;
  int iStack_44;
  int local_2c;
  int local_28;
  char local_24;
  int local_20;
  int local_1c;
  bool local_18;
  int local_14;
  int local_10;
  bool local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (((this->ParentWidget).Pointer != (UIWidget *)0x0) &&
     (pRVar1 = (this->ParentWidget).Controller, pRVar1 != (ReferenceController *)0x0)) {
    iStack_44 = 0x88a038;
    bVar3 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (bVar3) {
      pRVar1 = (this->ParentWidget).Controller;
      if (pRVar1 != (ReferenceController *)0x0) {
        iStack_44 = 0x88a04f;
        bVar3 = util__ReferenceController__IsDataStillValid(pRVar1);
        if (!bVar3) {
          (this->ParentWidget).Pointer = (UIWidget *)0x0;
        }
      }
      pUVar2 = (this->ParentWidget).Pointer;
util__GetParentOffsetLocation((SpacecraftComponent *)&stack0xffffffb8);
      (**(code **)(*(int *)pUVar2 + 0xb4))(&local_20);
      pRVar1 = (this->ParentWidget).Controller;
      if (pRVar1 != (ReferenceController *)0x0) {
        bVar3 = util__ReferenceController__IsDataStillValid(pRVar1);
        if (!bVar3) {
          (this->ParentWidget).Pointer = (UIWidget *)0x0;
        }
      }
      GetParentOffsetLocation((this->ParentWidget).Pointer);
      pRVar1 = (this->ParentWidget).Controller;
      if (pRVar1 != (ReferenceController *)0x0) {
        bVar3 = util__ReferenceController__IsDataStillValid(pRVar1);
        if (!bVar3) {
          (this->ParentWidget).Pointer = (UIWidget *)0x0;
        }
      }
      (**(code **)(((this->ParentWidget).Pointer)->_pad_0x0_0 + 0x10))(&local_14);
      if (((local_18 == false) || (local_24 == '\0')) || (local_c == false)) {
        local_14 = 0;
        local_10 = 0;
        local_c = false;
      }
      else {
        local_14 = local_14 + local_20 + local_2c;
        local_10 = local_10 + local_1c + local_28;
        local_c = true;
      }
      *in_stack_00000004 = local_14;
      in_stack_00000004[1] = local_10;
      *(bool *)(in_stack_00000004 + 2) = local_c;
      goto LAB_0088a13a;
    }
  }
  *in_stack_00000004 = 0;
  in_stack_00000004[1] = 0;
  *(undefined1 *)(in_stack_00000004 + 2) = 1;
LAB_0088a13a:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000088b470 0088b470_FUN_0088b470 ====
void FUN_0088b470(int *param_1,int param_2,int *param_3,uint *param_4,int *param_5);

// decompiled by BatchDecomp @ 0088b470 name=FUN_0088b470 conv=unknown body=500

void FUN_0088b470(int *param_1,int param_2,int *param_3,uint *param_4,int *param_5)

{
  undefined4 stack0xfffffffc;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = 0;
  iVar3 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_10 < iVar3) {
    do {
      puVar4 = (uint *)(**(code **)*param_1)(&local_10);
      uVar1 = puVar4[1];
      for (uVar7 = *puVar4; uVar7 <= uVar1; uVar7 = uVar7 + 1) {
        if (*(uint *)(param_2 + 0x3c) != 0) {
          uVar5 = (uVar7 & 0xff) * 0x401;
          local_c = 0;
          uVar5 = ((uVar5 >> 6 ^ uVar5) + (uVar7 >> 8 & 0xff)) * 0x401;
          uVar5 = ((uVar5 >> 6 ^ uVar5) + (uVar7 >> 0x10 & 0xff)) * 0x401;
          uVar5 = ((uVar5 >> 6 ^ uVar5) + (uVar7 >> 0x18)) * 0x401;
          uVar5 = (uVar5 ^ uVar5 >> 6) * 9;
          piVar8 = (int *)((((uVar5 >> 0xb ^ uVar5) * 0x8001) % *(uint *)(param_2 + 0x3c)) * 0x10 +
                          *(int *)(param_2 + 0x38));
          iVar3 = (**(code **)(*(int *)(uintptr_t)piVar8 + 0xc))();
          if (local_c < iVar3) {
            do {
              puVar4 = (uint *)(**(code **)*piVar8)(&local_c);
              if (*puVar4 == uVar7) {
                iVar3 = (**(code **)*piVar8)(&local_c);
                piVar8 = (int *)(iVar3 + 4);
                if (piVar8 != (int *)0x0) {
                  iVar6 = *piVar8;
                  if (*param_4 <= (uint)(*param_3 + 1 + iVar6)) {
                    param_3[1] = param_3[1] + *param_5;
                    *param_5 = 0;
                    *param_3 = 0;
                    iVar6 = *piVar8;
                  }
                  glTexSubImage2D(0xde1,0,*param_3,param_3[1],iVar6,*(undefined4 *)(iVar3 + 8),
                                  0x1906,0x1401,*(undefined4 *)(iVar3 + 0xc));
                  operator_delete__(*(void **)(iVar3 + 0xc));
                  iVar6 = param_3[1];
                  iVar2 = *(int *)(param_2 + 0x18);
                  *(float *)(iVar3 + 0x28) = (float)*param_3 / (float)*(int *)(param_2 + 0x14);
                  *(float *)(iVar3 + 0x2c) = (float)iVar6 / (float)iVar2;
                  iVar6 = *param_5;
                  if (*param_5 <= *(int *)(iVar3 + 8)) {
                    iVar6 = *(int *)(iVar3 + 8);
                  }
                  *param_5 = iVar6;
                  *param_3 = *param_3 + *piVar8 + 1;
                }
                break;
              }
              local_c = local_c + 1;
              iVar3 = (*(code *)((undefined4 *)*piVar8)[3])();
            } while (local_c < iVar3);
          }
        }
      }
      local_10 = local_10 + 1;
      iVar3 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
    } while (local_10 < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000896350 00896350_FUN_00896350 ====
void FUN_00896350(int *param_1,char *param_2,int *param_3,Darray_L_class_util__Str_L_char_G___G_ *param_4);

// decompiled by BatchDecomp @ 00896350 name=FUN_00896350 conv=unknown body=387

void FUN_00896350(int *param_1,char *param_2,int *param_3,Darray_L_class_util__Str_L_char_G___G_ *param_4)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  Str_L_char_G_ *pSVar5;
  Str_L_char_G_ *this;
  Str_L_char_G_ local_30;
  int *local_24;
  int local_20;
  Str_L_char_G_ local_1c;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_24 = param_1;
  local_c = 0;
  iVar3 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_c < iVar3) {
    do {
      pcVar4 = (char *)(**(code **)*param_1)(&local_c);
      if (*param_2 != '\0') {
        local_1c.Data = (char *)0x0;
        local_1c.Capacity = 0;
        local_1c.Length = 0;
        uStack_10 = 0;
util__FUN_00896350(&local_1c,pcVar4);
        if (*param_3 < local_1c.Length) {
          *param_2 = '\0';
        }
        else {
          if (*(int *)(param_4 + 8) == 0) {
            util__Darray_class_util__Str_char_____operator__o2
                      (param_4,(Darray_L_class_util__Str_L_char_G___G_ *)&local_1c);
          }
          else {
            iVar3 = (**(code **)(local_1c.Data + 0xc))();
            if (iVar3 != 0) {
              iVar3 = *(int *)(param_4 + 8);
              local_20 = (**(code **)(local_1c.Data + 0xc))();
              local_20 = local_20 + *(int *)(param_4 + 8);
              util__Darray_class_util__Str_char_____SetSize(param_4,&local_20);
              util__Darray_class_util__Str_char_____CheckSize(param_4,iVar3);
              this = (Str_L_char_G_ *)(*(int *)(param_4 + 4) + iVar3 * 0xc);
              pSVar5 = (Str_L_char_G_ *)local_1c.Capacity;
              if (this != (Str_L_char_G_ *)(*(int *)(param_4 + 4) + *(int *)(param_4 + 8) * 0xc)) {
                do {
                  util__Str_char___operator__o8(this,pSVar5);
                  this = this + 1;
                  pSVar5 = pSVar5 + 1;
                } while (this != (Str_L_char_G_ *)(*(int *)(param_4 + 4) + *(int *)(param_4 + 8) * 0xc))
                ;
              }
            }
          }
          iVar3 = *param_3 - local_1c.Length;
          param_1 = local_24;
          if (0 < iVar3) {
            local_30.Data = (char *)0x0;
            local_30.Capacity = 0;
            local_30.Length = 0;
            do {
              iVar1 = *(int *)(param_4 + 8);
              local_20 = iVar1 + 1;
              util__Darray_class_util__Str_char_____SetSize(param_4,&local_20);
              bVar2 = util__Darray_class_util__Str_char_____CheckSize(param_4,iVar1);
              if (bVar2) {
                util__Str_char___operator__o8
                          ((Str_L_char_G_ *)
                           (*(int *)(param_4 + 4) + (*(int *)(param_4 + 8) * 3 + -3) * 4),&local_30)
                ;
              }
              iVar3 = iVar3 + -1;
              param_1 = local_24;
            } while (iVar3 != 0);
          }
        }
        util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&local_1c);
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00008964e0 008964e0_FUN_008964e0 ====
void FUN_008964e0(Darray_L_bool_G_ *param_1,int *param_2,int param_3,int param_4);

// decompiled by BatchDecomp @ 008964e0 name=FUN_008964e0 conv=unknown body=349

void FUN_008964e0(Darray_L_bool_G_ *param_1,int *param_2,int param_3,int param_4)

{
  undefined4 stack0xfffffffc;
  bool bVar1;
  uint uVar2;
  bool *pbVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  int local_14;
  int *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = param_2;
  param_1->_pad_0x0_0 = 0;
  param_1->Data = (bool *)0x0;
  param_1->Size = 0;
  param_1->Capacity = 0;
  uVar2 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  param_1->_pad_0x0_0 = (int)((void *)(0x009256ecu));
  param_1->Data = (bool *)0x0;
  param_1->Size = 0;
  param_1->Capacity = uVar2;
  if (((int)uVar2 < 0) || (0x3fffffff < (int)uVar2)) {
    param_1->Capacity = 0;
  }
  else if (0 < (int)uVar2) {
    pbVar3 = (bool *)operator_new__(uVar2);
    if (pbVar3 == (bool *)0x0) {
      pbVar3 = (bool *)0x0;
    }
    else {
      memset(pbVar3,0,uVar2);
    }
    iVar5 = 0;
    param_1->Data = pbVar3;
    param_2 = local_10;
    if (0 < param_1->Capacity) {
      do {
        param_1->Data[iVar5] = false;
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_1->Capacity);
    }
  }
  local_c = 0;
  iVar5 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  if (local_c < iVar5) {
    do {
      piVar4 = (int *)(**(code **)*param_2)(&local_c);
      iVar5 = *piVar4;
      if (iVar5 == 0) {
LAB_008965e8:
        bVar7 = true;
      }
      else {
        piVar6 = *(int **)(param_3 + 4);
        piVar4 = piVar6 + *(int *)(param_3 + 8);
        for (; piVar6 != piVar4; piVar6 = piVar6 + 1) {
          if (*piVar6 == iVar5) goto LAB_008965e8;
        }
        piVar6 = *(int **)(param_4 + 4);
        piVar4 = piVar6 + *(int *)(param_4 + 8);
        for (; piVar6 != piVar4; piVar6 = piVar6 + 1) {
          if (*piVar6 == iVar5) goto LAB_008965e8;
        }
        bVar7 = false;
      }
      iVar5 = param_1->Size;
      local_14 = iVar5 + 1;
      util__Darray_bool___SetSize(param_1,&local_14);
      bVar1 = util__Darray_bool___CheckSize(param_1,iVar5);
      param_2 = local_10;
      if (bVar1) {
        param_1->Data[param_1->Size + -1] = bVar7;
      }
      local_c = local_c + 1;
      iVar5 = (**(code **)(*(int *)(uintptr_t)local_10 + 0xc))();
    } while (local_c < iVar5);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000896840 00896840_FUN_00896840 ====
extern undefined4 FUN_00896640(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void FUN_00896840(Darray_L_class_util__Reflectable_P__G_ *param_1, Darray_L_class_util__Reflectable_P__G_ *param_2,undefined4 param_3);

// decompiled by BatchDecomp @ 00896840 name=FUN_00896840 conv=unknown body=407

void FUN_00896840(Darray_L_class_util__Reflectable_P__G_ *param_1,
                 Darray_L_class_util__Reflectable_P__G_ *param_2,undefined4 param_3)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  Darray_L_class_util__Reflectable_P__G_ *pDVar2;
  int iVar3;
  int iVar4;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  Darray_L_class_util__Reflectable_P__G_ *local_34;
  Darray_L_class_util__Reflectable_P__G_ *local_30;
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
    util__Darray_class_util__Reflectable____Darray_class_util__Reflectable(param_1,param_2);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_2c = (undefined **)0x0;
  pvStack_28 = (void *)0x0;
  uStack_24 = 0;
  uStack_20 = 0;
  util__Darray_class_util__Reflectable____Darray_class_util__Reflectable((Darray_L_util__Reflectable_P_G_ *)&local_2c,param_2);
  local_1c = (undefined **)0x0;
  pvStack_18 = (void *)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  util__Darray_class_util__Reflectable____Darray_class_util__Reflectable__o2((Darray_L_util__Reflectable_P_G_ *)&local_1c,iVar1);
  iVar3 = iStack_14;
  local_c = iVar1;
  util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&local_1c,&local_c);
  util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&local_1c,iVar3);
  iVar3 = 1;
  pDVar2 = (Darray_L_util__Reflectable_P_G_ *)&local_2c;
  local_34 = (Darray_L_util__Reflectable_P_G_ *)&local_1c;
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
          FUN_00896640(local_30,local_34,&local_48,&local_44,&local_40,&local_3c,&local_c,param_3);
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
  util__Darray_class_util__Reflectable____Darray_class_util__Reflectable(param_1,pDVar2);
  local_1c = ((void *)(0x009199e4u));
  if (pvStack_18 != (void *)0x0) {
    operator_delete__(pvStack_18);
  }
  pvStack_18 = (void *)0x0;
  local_1c = ((void *)(0x00919488u));
  local_2c = ((void *)(0x009199e4u));
  if (pvStack_28 != (void *)0x0) {
    operator_delete__(pvStack_28);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000897430 00897430_FUN_00897430 ====
uint __fastcall FUN_00897430(int *param_1);

// decompiled by BatchDecomp @ 00897430 name=FUN_00897430 conv=unknown body=387

uint __fastcall FUN_00897430(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  Str_L_char_G_ *pSVar6;
  ReflectionRegistry *this;
  ReflectionInfoBase *pRVar7;
  undefined1 *puVar8;
  char *pcVar9;
  int iVar10;
  Str_L_char_G_ local_24;
  Str_L_char_G_ local_18;
  Reflectable *local_c;
  Str_L_char_G_ *local_8;
  
  piVar2 = (int *)*param_1;
  iVar3 = piVar2[1];
  if (iVar3 < 1) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(*piVar2 + -4 + iVar3 * 0x10);
  }
  puVar4 = *(undefined4 **)param_1[1];
  local_c = (Reflectable *)((int)puVar4 + iVar10);
  if (iVar3 < 1) {
    if (puVar4 == (undefined4 *)0x0) {
      pRVar7 = (ReflectionInfoBase *)0x0;
    }
    else {
      pRVar7 = (ReflectionInfoBase *)(**(code **)*puVar4)();
    }
  }
  else {
    pSVar6 = (Str_L_char_G_ *)(*piVar2 + -0x10 + iVar3 * 0x10);
    this = util__ReflectionRegistry__Get();
    pRVar7 = util__ReflectionRegistry__GetReflectionInfo(this,pSVar6);
  }
  local_8 = (Str_L_char_G_ *)param_1[4];
  if (*(char *)&local_8[1].Data == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  bVar5 = util__SerializationManagerInterface__DeserializeArray((SerializationManagerInterface *)param_1[3],pRVar7,local_c,local_8,
                     (Darray_L_class_util__Str_L_char_G___G_ *)param_1[5]);
  *(bool *)param_1[2] = bVar5;
  puVar4 = (undefined4 *)param_1[4];
  if (*(char *)(puVar4 + 3) == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((int)puVar4[1] < 1) {
    puVar8 = &cde_l2_0091985b_NullString;
  }
  else {
    puVar8 = (undefined1 *)*puVar4;
  }
  pSVar6 = util__Printf(&local_24,"Could not deserialize array member %s",puVar8);
  puVar4 = (undefined4 *)param_1[6];
  cVar1 = *(char *)param_1[2];
  if (cVar1 == '\0') {
    if (pSVar6->Capacity < 1) {
      pcVar9 = "";
    }
    else {
      pcVar9 = pSVar6->Data;
    }
    pSVar6 = util__Printf(&local_18,"Global Error: %s!\n",pcVar9);
    util__Str_char___operator__o10((Str_L_char_G_ *)*puVar4,pSVar6);
    if (local_18.Data != (char *)0x0) {
      operator_delete__(local_18.Data);
    }
    *(undefined1 *)puVar4[1] = 0;
  }
  if (local_24.Data != (char *)0x0) {
    operator_delete__(local_24.Data);
  }
  if (cVar1 == '\0') {
    return (uint)local_24.Data & 0xffffff00;
  }
  pSVar6 = (Str_L_char_G_ *)param_1[4];
  local_18.Data = (char *)0x0;
  local_18.Capacity = 0;
  local_18.Length = 0;
  util__Str_char___operator__o8(pSVar6,&local_18);
  *(undefined1 *)&pSVar6[1].Data = 0;
  puVar4 = (undefined4 *)param_1[7];
  *puVar4 = 0;
  *(undefined1 *)(puVar4 + 1) = 0;
  return CONCAT31((int3)((uint)puVar4 >> 8),1);
}


//==== 0000897e90 00897e90_FUN_00897e90 ====
void __fastcall FUN_00897e90(int *param_1);

// decompiled by BatchDecomp @ 00897e90 name=FUN_00897e90 conv=unknown body=624

void __fastcall FUN_00897e90(int *param_1)

{
  undefined4 stack0xfffffffc;
  int *piVar1;
  undefined4 *puVar2;
  Str_L_char_G_ *pSVar3;
  ReflectionRegistry *this;
  int iVar4;
  undefined1 *puVar5;
  char *pcVar6;
  int iVar7;
  Str_L_char_G_ local_40;
  Reflectable *local_34;
  ReflectionInfoBase *local_30;
  Str_L_char_G_ local_2c;
  char local_1d;
  Str_L_char_G_ local_1c;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar1 = (int *)*param_1;
  iVar4 = piVar1[1];
  if (iVar4 < 1) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(*piVar1 + -4 + iVar4 * 0x10);
  }
  puVar2 = *(undefined4 **)param_1[1];
  local_34 = (Reflectable *)((int)puVar2 + iVar7);
  if (iVar4 < 1) {
    if (puVar2 == (undefined4 *)0x0) {
      local_30 = (ReflectionInfoBase *)0x0;
    }
    else {
      local_30 = (ReflectionInfoBase *)(**(code **)*puVar2)();
    }
  }
  else {
    pSVar3 = (Str_L_char_G_ *)(*piVar1 + -0x10 + iVar4 * 0x10);
    this = util__ReflectionRegistry__Get();
    local_30 = util__ReflectionRegistry__GetReflectionInfo(this,pSVar3);
  }
  local_1c.Length = 0;
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  local_2c.Data = (char *)0x0;
  local_2c.Length = 1;
  local_2c.Capacity = 2;
  local_2c.Data = (char *)operator_new__(2);
  if (local_2c.Data == (char *)0x0) {
    local_2c.Data = (char *)0x0;
  }
  else {
    local_2c.Data[0] = '\0';
    local_2c.Data[1] = '\0';
  }
  *local_2c.Data = '\n';
  local_10 = 0;
  local_c = 0;
  local_2c.Data[1] = '\0';
  piVar1 = (int *)param_1[2];
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  local_1c.Length = 0;
  iVar4 = (**(code **)(*(int *)(uintptr_t)piVar1 + 0xc))();
  if (local_c < iVar4) {
    do {
      pSVar3 = (Str_L_char_G_ *)(**(code **)*piVar1)(&local_c);
      util__Str_char___operator__o10(&local_1c,pSVar3);
      iVar4 = (**(code **)(*(int *)(uintptr_t)piVar1 + 0xc))();
      if (local_10 < iVar4 + -1) {
        util__Str_char___operator__o10(&local_1c,&local_2c);
      }
      local_10 = local_10 + 1;
      local_c = local_c + 1;
      iVar4 = (**(code **)(*(int *)(uintptr_t)piVar1 + 0xc))();
    } while (local_c < iVar4);
  }
  if (local_2c.Data != (char *)0x0) {
    operator_delete__(local_2c.Data);
  }
  pSVar3 = (Str_L_char_G_ *)param_1[4];
  if (*(char *)&pSVar3[1].Data == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_1d = util__SerializationManagerInterface__DeserializeClassMember((SerializationManagerInterface *)param_1[3],local_30,local_34,pSVar3,
                        &local_1c);
  puVar2 = (undefined4 *)param_1[4];
  if (*(char *)(puVar2 + 3) == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((int)puVar2[1] < 1) {
    puVar5 = &cde_l2_0091985b_NullString;
  }
  else {
    puVar5 = (undefined1 *)*puVar2;
  }
  pSVar3 = util__Printf(&local_40,"Could not deserialize member %s",puVar5);
  puVar2 = (undefined4 *)param_1[5];
  if (local_1d == '\0') {
    if (pSVar3->Capacity < 1) {
      pcVar6 = "";
    }
    else {
      pcVar6 = pSVar3->Data;
    }
    pSVar3 = util__Printf(&local_2c,"Global Warning: %s!\n",pcVar6);
    util__Str_char___operator__o10((Str_L_char_G_ *)*puVar2,pSVar3);
    if (local_2c.Data != (char *)0x0) {
      operator_delete__(local_2c.Data);
    }
  }
  if (local_40.Data != (char *)0x0) {
    operator_delete__(local_40.Data);
  }
  pSVar3 = (Str_L_char_G_ *)param_1[4];
  local_2c.Data = (char *)0x0;
  local_2c.Capacity = 0;
  local_2c.Length = 0;
  util__Str_char___operator__o8(pSVar3,&local_2c);
  *(undefined1 *)&pSVar3[1].Data = 0;
  puVar2 = (undefined4 *)param_1[6];
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 0;
  if (local_1c.Data != (char *)0x0) {
    operator_delete__(local_1c.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000089bb40 0089bb40_FUN_0089bb40 ====
void FUN_0089bb40(int *param_1,undefined4 *param_2,int *param_3,int *param_4, Darray_L_class_util__Str_L_char_G___G_ *param_5,char *param_6, SimpleSerializationManager *param_7);

// decompiled by BatchDecomp @ 0089bb40 name=FUN_0089bb40 conv=unknown body=699

void FUN_0089bb40(int *param_1,undefined4 *param_2,int *param_3,int *param_4,
                 Darray_L_class_util__Str_L_char_G___G_ *param_5,char *param_6,
                 SimpleSerializationManager *param_7)

{
  undefined4 stack0xfffffffc;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  Type TVar6;
  int iVar7;
  ClassMember *pCVar8;
  int iVar9;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar10;
  Reflectable *pRVar11;
  Reflectable *local_4c;
  int local_48;
  int local_44;
  Str_L_char_G_ local_3c;
  undefined4 uStack_30;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  char *local_14;
  int local_10;
  Reflectable *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = 0;
  iVar7 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_10 < iVar7) {
    do {
      pCVar8 = (ClassMember *)(**(code **)*param_1)(&local_10);
      cVar4 = (**(code **)(*(int *)*param_2 + 8))(pCVar8);
      if (cVar4 == '\0') {
        bVar1 = pCVar8->IsArray;
        local_4c = (Reflectable *)(*param_3 + *param_4 + pCVar8->Offset);
        local_c = (Reflectable *)((int)&local_4c->_pad_0x0_0 + pCVar8->Size);
        bVar2 = pCVar8->IsMaybe;
        if ((*(int *)&pCVar8->Type == 10) && (bVar2 != false)) {
          bVar3 = true;
LAB_0089bbd2:
          bVar5 = util__Darray_class_util__Str_char_____Contains(param_5,(Str_L_char_G_ *)pCVar8);
          if (bVar5) {
            pRVar11 = local_4c;
            if (bVar3) {
              pRVar11 = local_c;
            }
            iVar7 = pRVar11->_pad_0x0_0;
            iVar9 = (**(code **)(*(int *)param_5 + 0xc))();
            if (*param_6 == '\0') {
              if ((iVar9 == 1) || ((bool)(char)iVar7 != (iVar9 == 1))) {
                cVar4 = '\x01';
              }
              else {
                cVar4 = '\0';
              }
            }
            else {
              cVar4 = '\0';
            }
            *(char *)&pRVar11->_pad_0x0_0 = cVar4;
            util__Darray_class_util__Str_char_____Remove(param_5,(Str_L_char_G_ *)pCVar8);
            if ((*param_6 == '\0') && (cVar4 == '\0')) {
              cVar4 = '\0';
            }
            else {
              cVar4 = '\x01';
            }
            *param_6 = cVar4;
          }
        }
        else {
          bVar3 = false;
          if (*(int *)&pCVar8->Type == 1) goto LAB_0089bbd2;
        }
        if ((bVar2 == false) || ((char)local_c->_pad_0x0_0 != '\x01')) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((bVar2 == false) || (bVar3)) {
          if (*(int *)&pCVar8->Type == 10) {
            util__SimpleSerializationManager__CorrectDatum(param_7,(Reflectable *)*param_3,local_4c,*param_4 + pCVar8->Offset);
          }
          else if (*(int *)&pCVar8->Type == 0xb) {
            if (bVar1 == false) {
              local_44 = 1;
            }
            else {
              local_44 = (**(code **)(*(int *)local_4c + 0xc))();
              local_4c = (Reflectable *)(local_4c->Name).Data;
            }
            pSVar10 = &local_3c;
            local_3c.Data = (char *)0x0;
            local_3c.Capacity = 0;
            local_3c.Length = 0;
            uStack_30 = 0;
            this = util__ReflectionRegistry__Get();
            util__ReflectionRegistry__GetTupleInfo(this,pSVar10);
            iVar7 = local_3c.Length;
            local_48 = 0;
            if (0 < local_44) {
              do {
                local_c = (Reflectable *)0x0;
                if (0 < iVar7) {
                  do {
                    pSVar10 = (Str_L_char_G_ *)(**(code **)local_3c.Data)(&local_c);
                    util__Str_char___Str_char(&local_2c,pSVar10);
                    util__Str_char___Str_char(&local_20,pSVar10 + 1);
                    local_14 = pSVar10[2].Data;
                    TVar6 = util__GetTypeFromTypeString(&local_20);
                    util__SimpleSerializationManager__CorrectPrimitiveProperty(param_7,(Reflectable *)*param_2,
                               (char *)((int)&local_4c->_pad_0x0_0 +
                                       (int)(local_14 + pCVar8->Size * local_48)),pCVar8,TVar6);
                    if (local_20.Data != (char *)0x0) {
                      operator_delete__(local_20.Data);
                      local_20.Data = (char *)0x0;
                    }
                    if (local_2c.Data != (char *)0x0) {
                      operator_delete__(local_2c.Data);
                    }
                    local_c = (Reflectable *)((int)&local_c->_pad_0x0_0 + 1);
                  } while ((int)local_c < iVar7);
                }
                local_48 = local_48 + 1;
              } while (local_48 < local_44);
            }
            util__Darray_struct_util__TupleProperty____Darray_struct_util__TupleProperty((Darray_L_struct_util__TupleProperty_G_ *)&local_3c);
          }
          else {
            if (bVar1 == false) {
              iVar7 = 1;
            }
            else {
              iVar7 = (**(code **)(*(int *)local_4c + 0xc))();
              local_4c = (Reflectable *)(local_4c->Name).Data;
            }
            iVar9 = 0;
            if (0 < iVar7) {
              do {
                util__SimpleSerializationManager__CorrectPrimitiveProperty(param_7,(Reflectable *)*param_2,
                           (int *)((int)&local_4c->_pad_0x0_0 + pCVar8->Size * iVar9),pCVar8,
                           (Type)*(undefined4 *)&pCVar8->Type);
                iVar9 = iVar9 + 1;
              } while (iVar9 < iVar7);
            }
          }
        }
      }
      local_10 = local_10 + 1;
      iVar7 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
    } while (local_10 < iVar7);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00008a1aa0 008a1aa0_FUN_008a1aa0 ====
void FUN_008a1aa0(int *param_1,int *param_2);

// decompiled by BatchDecomp @ 008a1aa0 name=FUN_008a1aa0 conv=unknown body=365

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_008a1aa0(int *param_1,int *param_2)

{
  undefined4 stack0xfffffffc;
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  Vec2_L_double_G_ *pVVar6;
  int iVar7;
  int *piVar8;
  Vec2_L_double_G_ local_38;
  double local_28;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  char local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar7 = 0;
  local_1c = 0;
  local_c = 0;
  iVar4 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_c < iVar4) {
    local_20 = param_2;
    do {
      puVar5 = (undefined4 *)(**(code **)*param_1)(&local_c);
      if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
         !bVar2)) {
        *puVar5 = 0;
      }
      (**(code **)(*(int *)*puVar5 + 0x10))(&local_18);
      if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
         !bVar2)) {
        *puVar5 = 0;
      }
      cVar3 = (**(code **)(*(int *)*puVar5 + 8))();
      if ((cVar3 == '\0') || (local_10 == '\0')) {
        iVar4 = 0;
      }
      else {
        if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
           (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
           !bVar2)) {
          *puVar5 = 0;
        }
        pVVar6 = UIWidget__GetFillProportion((UIWidget *)*puVar5,&local_38);
        if ((*local_20 != 0) && (*local_20 == 1)) {
          pVVar6 = (Vec2_L_double_G_ *)&pVVar6->Y;
        }
        local_28 = pVVar6->X;
        if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
           (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
           !bVar2)) {
          *puVar5 = 0;
        }
        piVar1 = (int *)*puVar5;
        if (local_10 == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        iVar7 = *param_2;
        if ((iVar7 == 0) || (piVar8 = &local_14, iVar7 != 1)) {
          piVar8 = &local_18;
        }
        iVar7 = (**(code **)(*(int *)(uintptr_t)piVar1 + 0x2c))(iVar7);
        iVar4 = *piVar8 + iVar7 * (uint)(local_28 <= 0.0);
        iVar7 = local_1c;
      }
      iVar7 = iVar7 + iVar4;
      local_c = local_c + 1;
      local_1c = iVar7;
      iVar4 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
    } while (local_c < iVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00008aa500 008aa500_FUN_008aa500 ====
void FUN_008aa500(int *param_1,int *param_2,Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_3);

// decompiled by BatchDecomp @ 008aa500 name=FUN_008aa500 conv=unknown body=324

void FUN_008aa500(int *param_1,int *param_2,Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_3)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  ReferenceController *this;
  ReferenceController *this_00;
  bool bVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  char cVar6;
  undefined1 *puVar7;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar3 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_c < iVar3) {
    do {
      piVar4 = (int *)(**(code **)*param_1)(&local_c);
      if (((*piVar4 != 0) && ((ReferenceController *)piVar4[1] != (ReferenceController *)0x0)) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]),
         bVar2)) {
        if (((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) &&
           (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]),
           !bVar2)) {
          *piVar4 = 0;
        }
        iVar3 = *piVar4;
        iVar1 = *param_2;
        if (*(int *)(iVar3 + 0x14) == *(int *)(iVar1 + 0x1f8)) {
          if (*(int *)(iVar3 + 0x10) < 1) {
            pcVar5 = "";
          }
          else {
            pcVar5 = *(char **)(iVar3 + 0xc);
          }
          if (*(int *)(iVar1 + 500) < 1) {
            puVar7 = &cde_l2_0091985b_NullString;
          }
          else {
            puVar7 = *(undefined1 **)(iVar1 + 0x1f0);
          }
          cVar6 = *pcVar5;
          if (cVar6 != '\0') {
            iVar3 = (int)puVar7 - (int)pcVar5;
            do {
              if (cVar6 != pcVar5[iVar3]) goto LAB_008aa620;
              cVar6 = pcVar5[1];
              pcVar5 = pcVar5 + 1;
            } while (cVar6 != '\0');
          }
          iVar3 = *(int *)(param_3 + 8);
          local_10 = iVar3 + 1;
          util__Darray_class_util__WeakPtr_class_Body_____SetSize(param_3,&local_10);
          bVar2 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(param_3,iVar3);
          if (bVar2) {
            this = *(ReferenceController **)(*(int *)(param_3 + 4) + -4 + *(int *)(param_3 + 8) * 8)
            ;
            iVar3 = *(int *)(param_3 + 4) + *(int *)(param_3 + 8) * 8;
            *(int *)(iVar3 + -8) = *piVar4;
            this_00 = (ReferenceController *)piVar4[1];
            *(ReferenceController **)(iVar3 + -4) = this_00;
            if (this_00 != (ReferenceController *)0x0) {
              util__ReferenceController__AddWeakReference(this_00);
            }
            if (this != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference(this);
            }
          }
        }
      }
LAB_008aa620:
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00008aa6b0 008aa6b0_FUN_008aa6b0 ====
void FUN_008aa6b0(int *param_1,char *param_2,Interface *param_3,undefined4 *param_4, undefined4 *param_5,undefined4 param_6);

// decompiled by BatchDecomp @ 008aa6b0 name=FUN_008aa6b0 conv=unknown body=629

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_008aa6b0(int *param_1,char *param_2,Interface *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 param_6)

{
  undefined4 stack0xfffffffc;
  ReferenceController *this;
  UIWidget *this_00;
  bool bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined1 local_38[16];
  ReferenceController *local_28;
  ReferenceController *local_20;
  ReferenceController *local_18;
  int *local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_14 = param_1;
  local_10 = 0;
  local_c = 0;
  iVar4 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_c < iVar4) {
    do {
      piVar5 = (int *)(**(code **)*param_1)(&local_c);
      if (*param_2 == '\0') {
        if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]),
           !bVar1)) {
          *piVar5 = 0;
        }
        cVar2 = (**(code **)(*(int *)*piVar5 + 8))();
        if (cVar2 != '\0') {
          if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
             (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]),
             !bVar1)) {
            *piVar5 = 0;
          }
          iVar4 = (**(code **)(*(int *)*piVar5 + 0x10))(local_38);
          if (*(char *)(iVar4 + 8) != '\0') {
            if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
               (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]), !bVar1)) {
              *piVar5 = 0;
            }
            cVar2 = (**(code **)(*(int *)*piVar5 + 0xc))();
            if (cVar2 != '\0') {
              if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
                 (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]), !bVar1)) {
                *piVar5 = 0;
              }
              cVar2 = (**(code **)(*(int *)*piVar5 + 100))();
              if ((cVar2 != '\0') &&
                 ((this = (ReferenceController *)piVar5[1],
                  (param_3->HoveredWidget).Controller != this ||
                  ((param_3->HoveredWidget).Pointer != (UIWidget *)*piVar5)))) {
                if ((this != (ReferenceController *)0x0) &&
                   (bVar1 = util__ReferenceController__IsDataStillValid(this), !bVar1)) {
                  *piVar5 = 0;
                }
                bVar1 = UIWidget__IsCaptured((UIWidget *)*piVar5);
                if (!bVar1) goto LAB_008aa8fe;
              }
              if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
                 (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]), !bVar1)) {
                *piVar5 = 0;
              }
              this_00 = (UIWidget *)*piVar5;
              piVar6 = (int *)Interface__GetPopupWidget(param_3);
              piVar7 = (int *)UIWidget__GetRootParent(this_00);
              if ((piVar6[1] == piVar7[1]) && (*piVar6 == *piVar7)) {
                bVar1 = true;
              }
              else {
                bVar1 = false;
              }
              if (local_18 != (ReferenceController *)0x0) {
                util__ReferenceController__ReleaseWeakReference(local_18);
              }
              if (local_20 != (ReferenceController *)0x0) {
                util__ReferenceController__ReleaseWeakReference(local_20);
              }
              bVar3 = Interface__IsPopupModal(param_3);
              if ((bVar1) || (!bVar3)) {
LAB_008aa8ab:
                bVar1 = true;
              }
              else {
                local_10 = local_10 | 1;
                piVar6 = (int *)Interface__GetPopupWidget(param_3);
                if ((*piVar6 == 0) ||
                   (((ReferenceController *)piVar6[1] == (ReferenceController *)0x0 ||
                    (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]), !bVar1))))
                goto LAB_008aa8ab;
                if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
                   (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]), !bVar1)) {
                  *piVar5 = 0;
                }
                cVar2 = (**(code **)(*(int *)*piVar5 + 0x30))();
                if (cVar2 != '\0') goto LAB_008aa8ab;
                if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
                   (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]), !bVar1)) {
                  *piVar5 = 0;
                }
                cVar2 = (**(code **)(*(int *)*piVar5 + 0x34))();
                if (cVar2 != '\0') goto LAB_008aa8ab;
                bVar1 = false;
              }
              if (((local_10 & 1) != 0) &&
                 (local_10 = local_10 & 0xfffffffe, local_28 != (ReferenceController *)0x0)) {
                util__ReferenceController__ReleaseWeakReference(local_28);
              }
              if (bVar1) {
                if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
                   (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]), !bVar1)) {
                  *piVar5 = 0;
                }
                cVar2 = (**(code **)(*(int *)*piVar5 + 0xa0))(*param_4,*param_5,param_6);
                *param_2 = cVar2;
              }
            }
          }
        }
      }
LAB_008aa8fe:
      param_1 = local_14;
      local_c = local_c + 1;
      iVar4 = (**(code **)(*(int *)(uintptr_t)local_14 + 0xc))();
    } while (local_c < iVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00008aa930 008aa930_FUN_008aa930 ====
void FUN_008aa930(int *param_1,int param_2);

// decompiled by BatchDecomp @ 008aa930 name=FUN_008aa930 conv=unknown body=401

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_008aa930(int *param_1,int param_2)

{
  undefined4 stack0xfffffffc;
  ReferenceController *this;
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 local_20[12];
  int *local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = param_2;
  local_14 = param_1;
  local_c = 0;
  iVar3 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_c < iVar3) {
    do {
      piVar4 = (int *)(**(code **)*param_1)(&local_c);
      if (((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]),
         !bVar1)) {
        *piVar4 = 0;
      }
      cVar2 = (**(code **)(*(int *)*piVar4 + 8))();
      if (cVar2 != '\0') {
        if (((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]),
           !bVar1)) {
          *piVar4 = 0;
        }
        iVar3 = (**(code **)(*(int *)*piVar4 + 0x10))(local_20);
        if (*(char *)(iVar3 + 8) != '\0') {
          if (((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) &&
             (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]),
             !bVar1)) {
            *piVar4 = 0;
          }
          cVar2 = (**(code **)(*(int *)*piVar4 + 100))();
          if ((cVar2 != '\0') &&
             ((this = (ReferenceController *)piVar4[1],
              *(ReferenceController **)(param_2 + 0x68) != this ||
              (*(int *)(param_2 + 100) != *piVar4)))) {
            if ((this != (ReferenceController *)0x0) &&
               (bVar1 = util__ReferenceController__IsDataStillValid(this), !bVar1)) {
              *piVar4 = 0;
            }
            bVar1 = UIWidget__IsCaptured((UIWidget *)*piVar4);
            if (!bVar1) goto LAB_008aaa9a;
          }
          iVar5 = 0;
          iVar3 = (**(code **)(*(int *)(param_2 + 0x74) + 8))();
          if (0 < iVar3) {
            do {
              if ((iVar5 < 0) || (0x15b < iVar5)) {
                util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\sarray.inl"
                                ,0x35,"Index >= 0 && Index < Size",(char *)0x0);
                DebugBreak();
              }
              if (*(char *)(local_10 + 0x78 + iVar5) != '\0') {
                if (((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) &&
                   (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]), !bVar1)) {
                  *piVar4 = 0;
                }
                (**(code **)(*(int *)*piVar4 + 0x9c))(iVar5,param_2 + 0x1d4);
              }
              iVar5 = iVar5 + 1;
              iVar3 = (**(code **)(*(int *)(param_2 + 0x74) + 8))();
            } while (iVar5 < iVar3);
          }
        }
      }
LAB_008aaa9a:
      param_1 = local_14;
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)(uintptr_t)local_14 + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00008aaad0 008aaad0_FUN_008aaad0 ====
void FUN_008aaad0(int *param_1,int *param_2,Interface *param_3,Vec2_L_double_G_ *param_4,int *param_5);

// decompiled by BatchDecomp @ 008aaad0 name=FUN_008aaad0 conv=unknown body=673

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_008aaad0(int *param_1,int *param_2,Interface *param_3,Vec2_L_double_G_ *param_4,int *param_5)

{
  undefined4 stack0xfffffffc;
  ReferenceController *pRVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  UIWidget *this;
  ReferenceController *pRVar8;
  ReferenceController *local_44;
  ReferenceController *local_3c;
  undefined4 local_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int *local_24;
  char local_1d;
  int local_1c;
  int iStack_18;
  undefined4 uStack_14;
  int iStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar5 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_c < iVar5) {
    do {
      puVar6 = (undefined4 *)(**(code **)*param_1)(&local_c);
      if (((*param_2 == 0) || ((ReferenceController *)param_2[1] == (ReferenceController *)0x0)) ||
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]),
         !bVar3)) {
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
        iVar5 = iStack_2c;
        local_24 = (int *)(iStack_2c + 1);
        util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_34,(int *)&local_24);
        bVar3 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_34,iVar5);
        if (bVar3) {
          pRVar8 = *(ReferenceController **)(iStack_30 + -4 + iStack_2c * 8);
          iVar5 = iStack_30 + iStack_2c * 8;
          *(undefined4 *)(iVar5 + -8) = *puVar6;
          pRVar1 = (ReferenceController *)puVar6[1];
          *(ReferenceController **)(iVar5 + -4) = pRVar1;
          if (pRVar1 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(pRVar1);
          }
          if (pRVar8 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar8);
          }
        }
        Interface__GetWidgetDisplayStackRecursive(param_3,(Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_34,
                   (Stack_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_1c,*param_4);
        util__Darray_class_util__WeakPtr_struct_UIWidget______Darray_class_util__WeakPtr_struct_UIWidget((Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_34);
        while ((0 < iStack_18 &&
               (((*param_2 == 0 || ((ReferenceController *)param_2[1] == (ReferenceController *)0x0)
                 ) || (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]), !bVar3))))) {
          if (iStack_18 == 0) {
            this = (UIWidget *)0x0;
            pRVar8 = (ReferenceController *)0x0;
            local_24 = param_5;
          }
          else {
            pRVar8 = *(ReferenceController **)(local_1c + -4 + iStack_18 * 8);
            this = *(UIWidget **)(local_1c + -8 + iStack_18 * 8);
            if (pRVar8 != (ReferenceController *)0x0) {
              util__ReferenceController__AddWeakReference(pRVar8);
            }
            iStack_18 = iStack_18 + -1;
            iStack_10 = local_1c + iStack_18 * 8;
            if (pRVar8 != (ReferenceController *)0x0) {
              util__ReferenceController__AddWeakReference(pRVar8);
              util__ReferenceController__ReleaseWeakReference(pRVar8);
            }
            local_24 = param_5;
            if ((pRVar8 != (ReferenceController *)0x0) &&
               (bVar3 = util__ReferenceController__IsDataStillValid(pRVar8), !bVar3)) {
              this = (UIWidget *)0x0;
            }
          }
          cVar4 = (**(code **)(*(int *)this + 0xc))();
          if (cVar4 != '\0') {
            if ((pRVar8 != (ReferenceController *)0x0) &&
               (bVar3 = util__ReferenceController__IsDataStillValid(pRVar8), !bVar3)) {
              this = (UIWidget *)0x0;
            }
            puVar6 = (undefined4 *)*local_24;
            cVar4 = (**(code **)(*(int *)this + 0x80))(*puVar6,puVar6[1],puVar6[2],puVar6[3]);
            if (cVar4 != '\0') {
              if ((pRVar8 != (ReferenceController *)0x0) &&
                 (bVar3 = util__ReferenceController__IsDataStillValid(pRVar8), !bVar3)) {
                this = (UIWidget *)0x0;
              }
              piVar2 = local_24;
              local_24 = (int *)Interface__GetPopupWidget((Interface *)local_24[1]);
              piVar7 = (int *)UIWidget__GetRootParent(this);
              if ((local_24[1] != piVar7[1]) || (local_1d = '\0', *local_24 != *piVar7)) {
                local_1d = '\x01';
              }
              if (local_3c != (ReferenceController *)0x0) {
                util__ReferenceController__ReleaseWeakReference(local_3c);
              }
              if (local_44 != (ReferenceController *)0x0) {
                util__ReferenceController__ReleaseWeakReference(local_44);
              }
              if (local_1d != '\0') {
                Interface__KillPopup((Interface *)piVar2[1]);
              }
              pRVar1 = (ReferenceController *)param_2[1];
              *param_2 = (int)this;
              param_2[1] = (int)pRVar8;
              if (pRVar8 != (ReferenceController *)0x0) {
                util__ReferenceController__AddWeakReference(pRVar8);
              }
              if (pRVar1 != (ReferenceController *)0x0) {
                util__ReferenceController__ReleaseWeakReference(pRVar1);
              }
            }
          }
          if (pRVar8 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar8);
          }
        }
        util__Stack_class_util__WeakPtr_struct_UIWidget______Stack_class_util__WeakPtr_struct_UIWidget((Stack_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_1c);
      }
      local_c = local_c + 1;
      iVar5 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
    } while (local_c < iVar5);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00008ab980 008ab980_FUN_008ab980 ====
extern undefined4 FUN_008ab060(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void FUN_008ab980(Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *param_1, Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *param_2);

// decompiled by BatchDecomp @ 008ab980 name=FUN_008ab980 conv=unknown body=377

void FUN_008ab980(Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *param_1,
                 Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *param_2)

{
  undefined4 stack0x0000000c;
  undefined4 stack0xfffffffc;
  int iVar1;
  Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *pDVar2;
  int iVar3;
  int iVar4;
  Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ local_5c[16];
  Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *local_34;
  Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_4c = param_1;
  iVar1 = (**(code **)(*(int *)param_2 + 0xc))();
  if (iVar1 == 0) {
    util__Darray_class_util__WeakPtr_struct_UIWidget_____Darray_class_util__WeakPtr_struct_UIWidget(local_5c,param_2);
  }
  else {
    local_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    util__Darray_class_util__WeakPtr_struct_UIWidget_____Darray_class_util__WeakPtr_struct_UIWidget((Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_2c,param_2);
    local_1c = 0;
    uStack_18 = 0;
    iStack_14 = 0;
    uStack_10 = 0;
    util__Darray_class_util__WeakPtr_struct_UIWidget_____Darray_class_util__WeakPtr_struct_UIWidget__o2((Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_1c,iVar1);
    iVar3 = iStack_14;
    local_c = iVar1;
    util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c,&local_c);
    util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c,iVar3);
    iVar3 = 1;
    pDVar2 = (Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_2c;
    local_34 = (Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_1c;
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
            FUN_008ab060(local_30,local_34,&local_48,&local_44,&local_40,&local_3c,&local_c,
                         &stack0x0000000c);
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
    util__Darray_class_util__WeakPtr_struct_UIWidget_____Darray_class_util__WeakPtr_struct_UIWidget(local_5c,pDVar2);
    util__Darray_class_util__WeakPtr_struct_UIWidget______Darray_class_util__WeakPtr_struct_UIWidget((Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_1c);
    util__Darray_class_util__WeakPtr_struct_UIWidget______Darray_class_util__WeakPtr_struct_UIWidget((Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_2c);
    param_1 = local_4c;
  }
  util__Darray_class_util__WeakPtr_struct_UIWidget_____Darray_class_util__WeakPtr_struct_UIWidget(param_1,local_5c);
  util__Darray_class_util__WeakPtr_struct_UIWidget______Darray_class_util__WeakPtr_struct_UIWidget(local_5c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00008abb00 008abb00_FUN_008abb00 ====
extern undefined4 FUN_008ab2e0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void FUN_008abb00(Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *param_1, Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *param_2);

// decompiled by BatchDecomp @ 008abb00 name=FUN_008abb00 conv=unknown body=377

void FUN_008abb00(Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *param_1,
                 Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *param_2)

{
  undefined4 stack0x0000000c;
  undefined4 stack0xfffffffc;
  int iVar1;
  Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *pDVar2;
  int iVar3;
  int iVar4;
  Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ local_5c[16];
  Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *local_34;
  Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_4c = param_1;
  iVar1 = (**(code **)(*(int *)param_2 + 0xc))();
  if (iVar1 == 0) {
    util__Darray_class_util__WeakPtr_struct_UIWidget_____Darray_class_util__WeakPtr_struct_UIWidget(local_5c,param_2);
  }
  else {
    local_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    util__Darray_class_util__WeakPtr_struct_UIWidget_____Darray_class_util__WeakPtr_struct_UIWidget((Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_2c,param_2);
    local_1c = 0;
    uStack_18 = 0;
    iStack_14 = 0;
    uStack_10 = 0;
    util__Darray_class_util__WeakPtr_struct_UIWidget_____Darray_class_util__WeakPtr_struct_UIWidget__o2((Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_1c,iVar1);
    iVar3 = iStack_14;
    local_c = iVar1;
    util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c,&local_c);
    util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c,iVar3);
    iVar3 = 1;
    pDVar2 = (Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_2c;
    local_34 = (Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_1c;
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
            FUN_008ab2e0(local_30,local_34,&local_48,&local_44,&local_40,&local_3c,&local_c,
                         &stack0x0000000c);
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
    util__Darray_class_util__WeakPtr_struct_UIWidget_____Darray_class_util__WeakPtr_struct_UIWidget(local_5c,pDVar2);
    util__Darray_class_util__WeakPtr_struct_UIWidget______Darray_class_util__WeakPtr_struct_UIWidget((Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_1c);
    util__Darray_class_util__WeakPtr_struct_UIWidget______Darray_class_util__WeakPtr_struct_UIWidget((Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_2c);
    param_1 = local_4c;
  }
  util__Darray_class_util__WeakPtr_struct_UIWidget_____Darray_class_util__WeakPtr_struct_UIWidget(param_1,local_5c);
  util__Darray_class_util__WeakPtr_struct_UIWidget______Darray_class_util__WeakPtr_struct_UIWidget(local_5c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00008abc80 008abc80_FUN_008abc80 ====
extern undefined4 FUN_008aad80(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void FUN_008abc80(Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *param_1, Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *param_2);

// decompiled by BatchDecomp @ 008abc80 name=FUN_008abc80 conv=unknown body=377

void FUN_008abc80(Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *param_1,
                 Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *param_2)

{
  undefined4 stack0x0000000c;
  undefined4 stack0xfffffffc;
  int iVar1;
  Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *pDVar2;
  int iVar3;
  int iVar4;
  Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ local_5c[16];
  Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *local_34;
  Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_4c = param_1;
  iVar1 = (**(code **)(*(int *)param_2 + 0xc))();
  if (iVar1 == 0) {
    util__Darray_class_util__WeakPtr_struct_UIWidget_____Darray_class_util__WeakPtr_struct_UIWidget(local_5c,param_2);
  }
  else {
    local_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    util__Darray_class_util__WeakPtr_struct_UIWidget_____Darray_class_util__WeakPtr_struct_UIWidget((Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_2c,param_2);
    local_1c = 0;
    uStack_18 = 0;
    iStack_14 = 0;
    uStack_10 = 0;
    util__Darray_class_util__WeakPtr_struct_UIWidget_____Darray_class_util__WeakPtr_struct_UIWidget__o2((Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_1c,iVar1);
    iVar3 = iStack_14;
    local_c = iVar1;
    util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c,&local_c);
    util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c,iVar3);
    iVar3 = 1;
    pDVar2 = (Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_2c;
    local_34 = (Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_1c;
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
            FUN_008aad80(local_30,local_34,&local_48,&local_44,&local_40,&local_3c,&local_c,
                         &stack0x0000000c);
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
    util__Darray_class_util__WeakPtr_struct_UIWidget_____Darray_class_util__WeakPtr_struct_UIWidget(local_5c,pDVar2);
    util__Darray_class_util__WeakPtr_struct_UIWidget______Darray_class_util__WeakPtr_struct_UIWidget((Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_1c);
    util__Darray_class_util__WeakPtr_struct_UIWidget______Darray_class_util__WeakPtr_struct_UIWidget((Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_2c);
    param_1 = local_4c;
  }
  util__Darray_class_util__WeakPtr_struct_UIWidget_____Darray_class_util__WeakPtr_struct_UIWidget(param_1,local_5c);
  util__Darray_class_util__WeakPtr_struct_UIWidget______Darray_class_util__WeakPtr_struct_UIWidget(local_5c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00008abe00 008abe00_FUN_008abe00 ====
extern undefined4 FUN_008ab520(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void FUN_008abe00(Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *param_1, Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *param_2);

// decompiled by BatchDecomp @ 008abe00 name=FUN_008abe00 conv=unknown body=377

void FUN_008abe00(Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *param_1,
                 Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *param_2)

{
  undefined4 stack0x0000000c;
  undefined4 stack0xfffffffc;
  int iVar1;
  Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *pDVar2;
  int iVar3;
  int iVar4;
  Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ local_5c[16];
  Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *local_34;
  Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_4c = param_1;
  iVar1 = (**(code **)(*(int *)param_2 + 0xc))();
  if (iVar1 == 0) {
    util__Darray_class_util__WeakPtr_struct_UIWidget_____Darray_class_util__WeakPtr_struct_UIWidget(local_5c,param_2);
  }
  else {
    local_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    util__Darray_class_util__WeakPtr_struct_UIWidget_____Darray_class_util__WeakPtr_struct_UIWidget((Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_2c,param_2);
    local_1c = 0;
    uStack_18 = 0;
    iStack_14 = 0;
    uStack_10 = 0;
    util__Darray_class_util__WeakPtr_struct_UIWidget_____Darray_class_util__WeakPtr_struct_UIWidget__o2((Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_1c,iVar1);
    iVar3 = iStack_14;
    local_c = iVar1;
    util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c,&local_c);
    util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c,iVar3);
    iVar3 = 1;
    pDVar2 = (Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_2c;
    local_34 = (Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_1c;
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
            FUN_008ab520(local_30,local_34,&local_48,&local_44,&local_40,&local_3c,&local_c,
                         &stack0x0000000c);
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
    util__Darray_class_util__WeakPtr_struct_UIWidget_____Darray_class_util__WeakPtr_struct_UIWidget(local_5c,pDVar2);
    util__Darray_class_util__WeakPtr_struct_UIWidget______Darray_class_util__WeakPtr_struct_UIWidget((Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_1c);
    util__Darray_class_util__WeakPtr_struct_UIWidget______Darray_class_util__WeakPtr_struct_UIWidget((Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_2c);
    param_1 = local_4c;
  }
  util__Darray_class_util__WeakPtr_struct_UIWidget_____Darray_class_util__WeakPtr_struct_UIWidget(param_1,local_5c);
  util__Darray_class_util__WeakPtr_struct_UIWidget______Darray_class_util__WeakPtr_struct_UIWidget(local_5c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00008ac5f0 008ac5f0_FUN_008ac5f0 ====
char __thiscall FUN_008ac5f0(int *param_1,undefined4 *param_2);

// decompiled by BatchDecomp @ 008ac5f0 name=FUN_008ac5f0 conv=unknown body=471

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

char __thiscall FUN_008ac5f0(int *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  UIWidget *this;
  ReferenceController *this_00;
  int iVar3;
  ReferenceController *this_01;
  bool bVar4;
  char cVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  ReferenceController *pRStack_10;
  ReferenceController *local_8;
  
  if (((ReferenceController *)param_2[1] != (ReferenceController *)0x0) &&
     (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]), !bVar4
     )) {
    *param_2 = 0;
  }
  this = (UIWidget *)*param_2;
  piVar6 = (int *)Interface__GetPopupWidget((Interface *)*param_1);
  piVar7 = (int *)UIWidget__GetRootParent(this);
  if ((piVar6[1] != piVar7[1]) || (bVar4 = false, *piVar6 != *piVar7)) {
    bVar4 = true;
  }
  if (local_8 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_8);
  }
  if (pRStack_10 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRStack_10);
  }
  if (bVar4) {
    Interface__KillPopup((Interface *)*param_1);
  }
  if (((ReferenceController *)param_2[1] != (ReferenceController *)0x0) &&
     (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]), !bVar4
     )) {
    *param_2 = 0;
  }
  iVar8 = (**(code **)(*(int *)*param_2 + 0x88))();
  if ((iVar8 != 0) || (*(char *)param_1[1] == '\0')) {
    if (((ReferenceController *)param_2[1] != (ReferenceController *)0x0) &&
       (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]),
       !bVar4)) {
      *param_2 = 0;
    }
    iVar8 = (**(code **)(*(int *)*param_2 + 0x88))();
    if ((iVar8 != 2) || (*(char *)param_1[2] == '\0')) {
      if (((ReferenceController *)param_2[1] != (ReferenceController *)0x0) &&
         (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]),
         !bVar4)) {
        *param_2 = 0;
      }
      iVar8 = (**(code **)(*(int *)*param_2 + 0x88))();
      if (iVar8 != 1) {
        return '\0';
      }
      if (*(char *)param_1[3] == '\0') {
        return '\0';
      }
    }
  }
  if (((ReferenceController *)param_2[1] != (ReferenceController *)0x0) &&
     (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]), !bVar4
     )) {
    *param_2 = 0;
  }
  cVar5 = (**(code **)(*(int *)*param_2 + 0xc))();
  if (cVar5 == '\0') {
    return '\0';
  }
  this_00 = (ReferenceController *)param_2[1];
  local_8 = (ReferenceController *)*param_2;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  iVar8 = param_1[4];
  iVar3 = *param_1;
  uVar1 = *(undefined8 *)param_1[5];
  uVar2 = ((undefined8 *)param_1[5])[1];
  if ((this_00 != (ReferenceController *)0x0) &&
     (bVar4 = util__ReferenceController__IsDataStillValid(this_00), !bVar4)) {
    local_8 = (ReferenceController *)0x0;
  }
  local_1c = (undefined4)uVar1;
  uStack_18 = *(undefined4 *)((char *)&uVar1 + 4);
  uStack_14 = (undefined4)uVar2;
  pRStack_10 = (ReferenceController *)((ulonglong)uVar2 >> 0x20);
  cVar5 = (**(code **)(local_8->StrongReferenceCount + 0x74))
                    (iVar8,local_1c,uStack_18,uStack_14,pRStack_10);
  if (cVar5 != '\0') {
    this_01 = *(ReferenceController **)(iVar3 + 0x70);
    *(ReferenceController **)(iVar3 + 0x6c) = local_8;
    *(ReferenceController **)(iVar3 + 0x70) = this_00;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_00);
    }
    if (this_01 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(this_01);
    }
  }
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  return cVar5;
}


//==== 00008b0c00 008b0c00_FUN_008b0c00 ====
void FUN_008b0c00(Darray_L_class_util__SharedPtr_L_struct_AudioVoice_G___G_ *param_1,int *param_2);

// decompiled by BatchDecomp @ 008b0c00 name=FUN_008b0c00 conv=unknown body=318

void FUN_008b0c00(Darray_L_class_util__SharedPtr_L_struct_AudioVoice_G___G_ *param_1,int *param_2)

{
  undefined4 stack0xfffffffc;
  ReferenceController *this;
  bool bVar1;
  int iVar2;
  SharedPtr_L_struct_AudioVoice_G_ *pSVar3;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar2 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  util__Darray_class_util__SharedPtr_struct_AudioVoice_____Darray_class_util__SharedPtr_struct_AudioVoice(param_1,iVar2);
  local_c = 0;
  iVar2 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
  if (local_c < iVar2) {
    do {
      pSVar3 = (SharedPtr_L_struct_AudioVoice_G_ *)(**(code **)*param_2)(&local_c);
      if (((*(int *)(*(int *)pSVar3 + 4) != 0) &&
          (this = *(ReferenceController **)(*(int *)pSVar3 + 8), this != (ReferenceController *)0x0)
          ) && (bVar1 = util__ReferenceController__IsDataStillValid(this), bVar1)) {
        iVar2 = *(int *)pSVar3;
        if ((*(ReferenceController **)(iVar2 + 8) != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar2 + 8)), !bVar1)) {
          *(undefined4 *)(iVar2 + 4) = 0;
        }
        if (*(char *)(*(int *)(iVar2 + 4) + 0x1c) == '\0') {
          if ((*(ReferenceController **)(iVar2 + 8) != (ReferenceController *)0x0) &&
             (bVar1 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar2 + 8)), !bVar1)) {
            *(undefined4 *)(iVar2 + 4) = 0;
          }
          if (*(float *)(*(int *)(iVar2 + 4) + 0x20) <= 0.0) goto LAB_008b0d15;
        }
        iVar2 = *(int *)pSVar3;
        if ((*(ReferenceController **)(iVar2 + 8) != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar2 + 8)), !bVar1)) {
          *(undefined4 *)(iVar2 + 4) = 0;
        }
        if (*(char *)(*(int *)(iVar2 + 4) + 0x35) == '\0') {
          iVar2 = *(int *)(param_1 + 8);
          local_10 = iVar2 + 1;
          util__Darray_class_util__SharedPtr_struct_AudioVoice_____SetSize(param_1,&local_10);
          bVar1 = util__Darray_class_util__SharedPtr_struct_AudioVoice_____CheckSize(param_1,iVar2);
          if (bVar1) {
            util__SharedPtr_struct_AudioVoice___operator
                      ((SharedPtr_L_struct_AudioVoice_G_ *)
                       (*(int *)(param_1 + 4) + -8 + *(int *)(param_1 + 8) * 8),pSVar3);
          }
        }
      }
LAB_008b0d15:
      local_c = local_c + 1;
      iVar2 = (**(code **)(*(int *)(uintptr_t)param_2 + 0xc))();
    } while (local_c < iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00008bc180 008bc180_FUN_008bc180 ====
void FUN_008bc180(int *param_1,char *param_2,FileIO *param_3,undefined4 *param_4,Str_L_char_G_ *param_5);

// decompiled by BatchDecomp @ 008bc180 name=FUN_008bc180 conv=unknown body=484

void FUN_008bc180(int *param_1,char *param_2,FileIO *param_3,undefined4 *param_4,Str_L_char_G_ *param_5)

{
  undefined4 stack0xfffffffc;
  char *pcVar1;
  char cVar2;
  int iVar3;
  Str_L_char_G_ *pSVar4;
  char *pcVar5;
  undefined1 *puVar6;
  Str_L_char_G_ local_64;
  Str_L_char_G_ local_58;
  Str_L_char_G_ local_4c;
  Str_L_char_G_ local_40;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  undefined4 uStack_1c;
  Str_L_char_G_ local_18;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar3 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_c < iVar3) {
    do {
      pSVar4 = (Str_L_char_G_ *)(**(code **)*param_1)(&local_c);
      util__Str_char___Str_char(&local_4c,pSVar4);
      pcVar1 = local_4c.Data;
      if (*param_2 != '\0') {
        pcVar5 = "";
        if (0 < local_4c.Capacity) {
          pcVar5 = local_4c.Data;
        }
        local_28.Data = (char *)0x0;
        local_28.Capacity = 0;
        local_28.Length = 0;
        uStack_1c = 0;
        if ((int)param_4[1] < 1) {
          puVar6 = &cde_l2_0091985b_NullString;
        }
        else {
          puVar6 = (undefined1 *)*param_4;
        }
        util__Printf(&local_58,"%s/%s",puVar6,pcVar5);
        FileIO__LoadEntireFile(param_3,&local_28);
        if (local_58.Data != (char *)0x0) {
          operator_delete__(local_58.Data);
          local_58.Data = (char *)0x0;
        }
        cVar2 = (char)uStack_1c;
        *param_2 = (char)uStack_1c;
        if (*param_2 != '\0') {
          util__Str_char___Str_char__o5(&local_40,"\n");
          if (cVar2 == '\0') {
            util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17
                            ,"IsValid()",(char *)0x0);
            DebugBreak();
          }
          pSVar4 = util__Str_char___Trimmed(&local_28,&local_64,false);
          local_18.Length = 0;
          local_18.Data = (char *)0x0;
          local_18.Capacity = 0;
          util__Str_char___Str_char(&local_18,pSVar4);
          util__Str_char___operator__o10(&local_18,&local_40);
          util__Str_char___Str_char(&local_34,&local_18);
          if (local_18.Data != (char *)0x0) {
            operator_delete__(local_18.Data);
            ((slice_view *)&local_18)->_0_8_ = ((slice_view *)&local_18)->_0_8_ & 0xffffffff00000000;
          }
          util__Str_char___operator__o10(param_5,&local_34);
          if (local_34.Data != (char *)0x0) {
            operator_delete__(local_34.Data);
            local_34.Data = (char *)0x0;
          }
          if (local_64.Data != (char *)0x0) {
            operator_delete__(local_64.Data);
            local_64.Data = (char *)0x0;
          }
          if (local_40.Data != (char *)0x0) {
            operator_delete__(local_40.Data);
            local_40.Data = (char *)0x0;
          }
        }
        if (local_28.Data != (char *)0x0) {
          operator_delete__(local_28.Data);
          local_28.Data = (char *)0x0;
        }
      }
      if (pcVar1 != (char *)0x0) {
        operator_delete__(pcVar1);
        local_4c.Data = (char *)0x0;
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00008bc9c0 008bc9c0_FUN_008bc9c0 ====
extern undefined4 FUN_008bc370(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void __thiscall FUN_008bc9c0(undefined4 *param_1,undefined4 param_2,Darray_L_class_util__Str_L_char_G___G_ *param_3, char param_4);

// decompiled by BatchDecomp @ 008bc9c0 name=FUN_008bc9c0 conv=unknown body=501

void __thiscall
FUN_008bc9c0(undefined4 *param_1,undefined4 param_2,Darray_L_class_util__Str_L_char_G___G_ *param_3,
            char param_4)

{
  undefined4 stack0xfffffffc;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  Str_L_char_G_ *pSVar6;
  Darray_L_class_util__Str_L_char_G___G_ *pDVar7;
  Darray_L_class_util__Str_L_char_G___G_ local_5c[16];
  Str_L_char_G_ local_4c;
  int local_40;
  Str_L_char_G_ local_3c;
  undefined1 *local_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_40 = 0;
  local_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  if (param_4 == '\0') {
    local_4c.Data = (char *)0x0;
    local_4c.Length = 1;
    local_4c.Capacity = 2;
    local_4c.Data = (char *)operator_new__(2);
    if (local_4c.Data == (char *)0x0) {
      local_4c.Data = (char *)0x0;
    }
    else {
      local_4c.Data[0] = '\0';
      local_4c.Data[1] = '\0';
    }
    *local_4c.Data = '\n';
    local_10 = 0;
    local_c = 0;
    local_4c.Data[1] = '\0';
    local_3c.Data = (char *)0x0;
    local_3c.Capacity = 0;
    local_3c.Length = 0;
    iVar5 = (**(code **)(*(int *)param_3 + 0xc))();
    if (local_c < iVar5) {
      do {
        pSVar6 = (Str_L_char_G_ *)(*(code *)**(undefined4 **)param_3)(&local_c);
        util__Str_char___operator__o10(&local_3c,pSVar6);
        iVar5 = (**(code **)(*(int *)param_3 + 0xc))();
        if (local_10 < iVar5 + -1) {
          util__Str_char___operator__o10(&local_3c,&local_4c);
        }
        local_10 = local_10 + 1;
        local_c = local_c + 1;
        iVar5 = (**(code **)(*(int *)param_3 + 0xc))();
      } while (local_c < iVar5);
    }
    local_30 = (undefined1 *)0x0;
    iStack_2c = 0;
    iStack_28 = 0;
    uStack_24 = 0;
    util__Darray_class_util__Str_char_____Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&local_30,1);
    iVar5 = iStack_28;
    local_40 = iStack_28 + 1;
    util__Darray_class_util__Str_char_____SetSize((Darray_L_class_util__Str_L_char_G___G_ *)&local_30,&local_40);
    bVar4 = util__Darray_class_util__Str_char_____CheckSize((Darray_L_class_util__Str_L_char_G___G_ *)&local_30,iVar5);
    if (bVar4) {
      util__Str_char___operator__o8((Str_L_char_G_ *)(iStack_2c + (iStack_28 * 3 + -3) * 4),&local_3c);
    }
    pDVar7 = (Darray_L_class_util__Str_L_char_G___G_ *)&local_30;
    bVar3 = true;
    bVar2 = true;
    bVar1 = true;
    bVar4 = false;
  }
  else {
    pDVar7 = (Darray_L_class_util__Str_L_char_G___G_ *)
             util__Darray_class_util__Str_char_____Darray_class_util__Str_char(local_5c,param_3);
    bVar3 = false;
    bVar2 = false;
    bVar1 = false;
    bVar4 = true;
  }
  util__Darray_class_util__Str_char_____Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&local_20,pDVar7);
  if (bVar4) {
    util__Darray_class_util__Str_char______Darray_class_util__Str_char(local_5c);
  }
  if (bVar1) {
    util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&local_30);
  }
  if (bVar2) {
    if (local_3c.Data != (char *)0x0) {
      operator_delete__(local_3c.Data);
      ((slice_view *)&local_3c)->_0_8_ = ((slice_view *)&local_3c)->_0_8_ & 0xffffffff00000000;
    }
  }
  if ((local_4c.Data != (char *)0x0) && (bVar3)) {
    operator_delete__(local_4c.Data);
  }
  local_30 = &param_4;
  iStack_2c = param_2;
  iStack_28 = *param_1;
  uStack_24 = param_1[1];
  FUN_008bc370(&local_20,local_30,param_2,iStack_28,uStack_24);
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&local_20);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00008cb160 008cb160_FUN_008cb160 ====
extern undefined4 FUN_008cada0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void FUN_008cb160(Darray_L_class_util__Reflectable_P__G_ *param_1, Darray_L_class_util__Reflectable_P__G_ *param_2,undefined4 param_3);

// decompiled by BatchDecomp @ 008cb160 name=FUN_008cb160 conv=unknown body=407

void FUN_008cb160(Darray_L_class_util__Reflectable_P__G_ *param_1,
                 Darray_L_class_util__Reflectable_P__G_ *param_2,undefined4 param_3)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  Darray_L_class_util__Reflectable_P__G_ *pDVar2;
  int iVar3;
  int iVar4;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  Darray_L_class_util__Reflectable_P__G_ *local_34;
  Darray_L_class_util__Reflectable_P__G_ *local_30;
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
    util__Darray_class_util__Reflectable____Darray_class_util__Reflectable(param_1,param_2);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_2c = (undefined **)0x0;
  pvStack_28 = (void *)0x0;
  uStack_24 = 0;
  uStack_20 = 0;
  util__Darray_class_util__Reflectable____Darray_class_util__Reflectable((Darray_L_util__Reflectable_P_G_ *)&local_2c,param_2);
  local_1c = (undefined **)0x0;
  pvStack_18 = (void *)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  util__Darray_class_util__Reflectable____Darray_class_util__Reflectable__o2((Darray_L_util__Reflectable_P_G_ *)&local_1c,iVar1);
  iVar3 = iStack_14;
  local_c = iVar1;
  util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&local_1c,&local_c);
  util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&local_1c,iVar3);
  iVar3 = 1;
  pDVar2 = (Darray_L_util__Reflectable_P_G_ *)&local_2c;
  local_34 = (Darray_L_util__Reflectable_P_G_ *)&local_1c;
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
          FUN_008cada0(local_30,local_34,&local_48,&local_44,&local_40,&local_3c,&local_c,param_3);
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
  util__Darray_class_util__Reflectable____Darray_class_util__Reflectable(param_1,pDVar2);
  local_1c = ((void *)(0x009199e4u));
  if (pvStack_18 != (void *)0x0) {
    operator_delete__(pvStack_18);
  }
  pvStack_18 = (void *)0x0;
  local_1c = ((void *)(0x00919488u));
  local_2c = ((void *)(0x009199e4u));
  if (pvStack_28 != (void *)0x0) {
    operator_delete__(pvStack_28);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00008cb300 008cb300_FUN_008cb300 ====
extern undefined4 FUN_008caf80(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void FUN_008cb300(Darray_L_class_util__Reflectable_P__G_ *param_1, Darray_L_class_util__Reflectable_P__G_ *param_2,undefined4 param_3);

// decompiled by BatchDecomp @ 008cb300 name=FUN_008cb300 conv=unknown body=407

void FUN_008cb300(Darray_L_class_util__Reflectable_P__G_ *param_1,
                 Darray_L_class_util__Reflectable_P__G_ *param_2,undefined4 param_3)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  Darray_L_class_util__Reflectable_P__G_ *pDVar2;
  int iVar3;
  int iVar4;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  Darray_L_class_util__Reflectable_P__G_ *local_34;
  Darray_L_class_util__Reflectable_P__G_ *local_30;
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
    util__Darray_class_util__Reflectable____Darray_class_util__Reflectable(param_1,param_2);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_2c = (undefined **)0x0;
  pvStack_28 = (void *)0x0;
  uStack_24 = 0;
  uStack_20 = 0;
  util__Darray_class_util__Reflectable____Darray_class_util__Reflectable((Darray_L_util__Reflectable_P_G_ *)&local_2c,param_2);
  local_1c = (undefined **)0x0;
  pvStack_18 = (void *)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  util__Darray_class_util__Reflectable____Darray_class_util__Reflectable__o2((Darray_L_util__Reflectable_P_G_ *)&local_1c,iVar1);
  iVar3 = iStack_14;
  local_c = iVar1;
  util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&local_1c,&local_c);
  util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&local_1c,iVar3);
  iVar3 = 1;
  pDVar2 = (Darray_L_util__Reflectable_P_G_ *)&local_2c;
  local_34 = (Darray_L_util__Reflectable_P_G_ *)&local_1c;
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
          FUN_008caf80(local_30,local_34,&local_48,&local_44,&local_40,&local_3c,&local_c,param_3);
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
  util__Darray_class_util__Reflectable____Darray_class_util__Reflectable(param_1,pDVar2);
  local_1c = ((void *)(0x009199e4u));
  if (pvStack_18 != (void *)0x0) {
    operator_delete__(pvStack_18);
  }
  pvStack_18 = (void *)0x0;
  local_1c = ((void *)(0x00919488u));
  local_2c = ((void *)(0x009199e4u));
  if (pvStack_28 != (void *)0x0) {
    operator_delete__(pvStack_28);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00008e4300 008e4300___isa_available_init ====
// decompiled by BatchDecomp @ 008e4300 name=__isa_available_init conv=__cdecl body=409

/* WARNING: Removing unreachable block (ram,0x008e437c) */
/* WARNING: Removing unreachable block (ram,0x008e4341) */
/* WARNING: Removing unreachable block (ram,0x008e43f4) */

int __cdecl __isa_available_init(void)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  BOOL BVar5;
  uint uVar6;
  uint uVar7;
  uint in_XCR0;
  
  __isa_available = 0;
  __isa_enabled = __isa_enabled | 1;
  BVar5 = _IsProcessorFeaturePresent_4(10);
  iVar4 = __isa_enabled;
  if (BVar5 != 0) {
    __isa_enabled = __isa_enabled | 2;
    __isa_available = 1;
    piVar1 = (int *)cpuid_basic_info(0);
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar7 = puVar2[3];
    if (((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) &&
       (((((uVar6 = *puVar2 & 0xfff3ff0, uVar6 == 0x106c0 || (uVar6 == 0x20660)) ||
          (uVar6 == 0x20670)) || ((uVar6 == 0x30650 || (uVar6 == 0x30660)))) || (uVar6 == 0x30670)))
       ) {
      __favor = __favor | 1;
    }
    if (*piVar1 < 7) {
      uVar6 = 0;
    }
    else {
      iVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar6 = *(uint *)(iVar3 + 4);
      if ((uVar6 & 0x200) != 0) {
        __favor = __favor | 2;
      }
    }
    if ((uVar7 & 0x100000) != 0) {
      __isa_enabled = iVar4 | 6;
      __isa_available = 2;
      if ((((uVar7 & 0x8000000) != 0) && ((uVar7 & 0x10000000) != 0)) && ((in_XCR0 & 6) == 6)) {
        __isa_enabled = iVar4 | 0xe;
        __isa_available = 3;
        if ((uVar6 & 0x20) != 0) {
          __isa_enabled = iVar4 | 0x2e;
          __isa_available = 5;
        }
      }
    }
  }
  return 0;
}

