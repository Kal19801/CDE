// pilot_sweep_sweep03.c - assembled by scripts/sweep_assemble.py (r19)
// reuses fam8_assemble fix passes (zip oracle/in-batch protos/vft channel/data closure)
/* ---- r20 incomplete-type forward decls (pointer-position only) ---- */
typedef struct Darray_L_GraphicsResource__Type_G_ Darray_L_GraphicsResource__Type_G_;
typedef struct util__Darray util__Darray;
typedef struct util__Maybe_L_struct_FixedOrbit_G util__Maybe_L_struct_FixedOrbit_G;
typedef struct util__PhysicalState_L_struct_util__Vec3_L_double_G______G util__PhysicalState_L_struct_util__Vec3_L_double_G______G;
typedef struct util__WeakPtr_L_class_Body_G util__WeakPtr_L_class_Body_G;
typedef struct util__WeakPtr_L_class____Fleet_G util__WeakPtr_L_class____Fleet_G;
typedef struct util__tuple2_L_class_util__Str_L_char_G__class_util__Darray_L_class____util__Reflectable___G___G util__tuple2_L_class_util__Str_L_char_G__class_util__Darray_L_class____util__Reflectable___G___G;
typedef struct Darray_L_struct_CelestialBody_P_G_ Darray_L_struct_CelestialBody_P__G_;
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
#undef AudioManager__PlaySoundA
#define AudioManager__PlaySoundA AudioManager__PlaySoundA__r20
#undef CraftBlueprint__GetPeakHeatSignature_W
#define CraftBlueprint__GetPeakHeatSignature_W CraftBlueprint__GetPeakHeatSignature_W__r20
#undef FUN_0048aad0
#define FUN_0048aad0 FUN_0048aad0__r20
#undef FUN_004df9a0
#define FUN_004df9a0 FUN_004df9a0__r20
#undef FUN_00835600
#define FUN_00835600 FUN_00835600__r20
#undef FUN_0088c300
#define FUN_0088c300 FUN_0088c300__r20
#undef FUN_008aa1e0
#define FUN_008aa1e0 FUN_008aa1e0__r20
#undef HUDItineraryNodeDragger__GetDraggerName
#define HUDItineraryNodeDragger__GetDraggerName HUDItineraryNodeDragger__GetDraggerName__r20
#undef LevelEditor__GetSelectedBodyNewBodyChoices
#define LevelEditor__GetSelectedBodyNewBodyChoices LevelEditor__GetSelectedBodyNewBodyChoices__r20
#undef ShipGroupUI__GetSplitButtonTooltip
#define ShipGroupUI__GetSplitButtonTooltip ShipGroupUI__GetSplitButtonTooltip__r20
#undef UIShipInfo__GetCostChartTitle
#define UIShipInfo__GetCostChartTitle UIShipInfo__GetCostChartTitle__r20
#undef UIShipInfo__GetHeatSignatureTitle
#define UIShipInfo__GetHeatSignatureTitle UIShipInfo__GetHeatSignatureTitle__r20
#undef UIShipInfo__GetMassChartTitle
#define UIShipInfo__GetMassChartTitle UIShipInfo__GetMassChartTitle__r20
#undef UIShipInfo__GetPowerUseTitle
#define UIShipInfo__GetPowerUseTitle UIShipInfo__GetPowerUseTitle__r20
#undef WeaponModule__GetStatuses
#define WeaponModule__GetStatuses WeaponModule__GetStatuses__r20
#undef WorldObject__IsValid
#define WorldObject__IsValid WorldObject__IsValid__r20
/* ---- externs: stub-oracle names (K&R; ret types by call site) ---- */
extern int TacticalManager_GetStrategicGame_Memoize(); /* K&R stub; ret by call site */
extern int TacticalManager__GetAllBodies_Clear(); /* K&R stub; ret by call site */
extern int util_Maybe_struct_FixedOrbit_operator(); /* K&R stub; ret by call site */
extern int util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2(); /* K&R stub; ret by call site */
extern int util__Darray_class_util__WeakPtr_struct_UIWidget_____Darray_class_util__WeakPtr_struct_UIWidget__o2(); /* K&R stub; ret by call site */
extern int util__Maybe_struct_util__PhysicalState_struct_util__Vec3_double_______operator(); /* K&R stub; ret by call site */
extern int util__Reflectable__IsType_struct_Campaign(); /* K&R stub; ret by call site */

//==== 000048aad0 0048aad0_FUN_0048aad0 ====
extern undefined4 FUN_00489780(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_00489c30(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_00489fe0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_0048a5c0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_0048a680(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_0048a690(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_0048a8e0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_0048a980(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_0048aa30(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_0048aa70(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void __fastcall FUN_0048aad0(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint param_5);

// decompiled by BatchDecomp @ 0048aad0 name=FUN_0048aad0 conv=unknown body=1452

void __fastcall FUN_0048aad0(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint param_5)

{
  undefined4 stack0xfffffffc;
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  int *piVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  int local_a0;
  uint local_9c;
  int local_98[32];
  int local_18[2];
  byte *local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_ac = param_5;
  if (4 < param_5) {
    DAT_009936c8 = "Internal error";
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  param_1[2] = 0;
  param_1[0xdae] = 0;
  iVar3 = FUN_0048a5c0();
  if (iVar3 == 0) {
LAB_0048b047:
    FUN_0048aa70();
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  cVar2 = FUN_004896f0();
  while (cVar2 != -0x27) {
    if (cVar2 == -0x26) {
      iVar3 = FUN_00489fe0();
      if (iVar3 == 0) goto LAB_0048b047;
      iVar3 = FUN_00489780();
    }
    else {
      iVar3 = FUN_00489c30();
    }
    if (iVar3 == 0) goto LAB_0048b047;
    cVar2 = FUN_004896f0();
  }
  if (param_5 == 0) {
    local_a8 = param_1[2];
    local_ac = local_a8;
  }
  else {
    local_a8 = param_1[2];
  }
  if ((local_a8 == 3) && (local_a8 = 3, (int)local_ac < 3)) {
    local_a8 = 1;
  }
  else if ((int)local_a8 < 1) goto LAB_0048acf4;
  puVar12 = (uint *)(local_98 + 3);
  local_a0 = 0;
  puVar13 = param_1 + 0xd6e;
  do {
    pvVar4 = malloc(*param_1 + 3);
    puVar13[0xc] = (uint)pvVar4;
    if (pvVar4 == (void *)0x0) goto LAB_0048ad18;
    uVar5 = (int)param_1[0xd67] / (int)*puVar13;
    uVar6 = param_1[0xd68];
    *puVar12 = uVar5;
    uVar6 = (int)uVar6 / (int)puVar13[1];
    puVar12[3] = (int)uVar6 >> 1;
    puVar12[1] = uVar6;
    uVar9 = *param_1;
    puVar12[4] = 0;
    puVar12[2] = ((uVar9 - 1) + uVar5) / uVar5;
    uVar9 = puVar13[10];
    puVar12[-1] = uVar9;
    puVar12[-2] = uVar9;
    if (uVar5 == 1) {
      if (uVar6 == 1) {
        pcVar7 = FUN_0048a680;
      }
      else {
        iVar3 = 1;
        if (uVar6 == 2) {
          pcVar7 = FUN_0048a690;
        }
        else {
LAB_0048aca5:
          if ((iVar3 != 2) || (pcVar7 = FUN_0048a980, uVar6 != 2)) goto LAB_0048acb3;
        }
      }
    }
    else if (uVar5 == 2) {
      iVar3 = 2;
      if (uVar6 != 1) goto LAB_0048aca5;
      pcVar7 = FUN_0048a8e0;
    }
    else {
LAB_0048acb3:
      pcVar7 = FUN_0048aa30;
    }
    puVar12[-3] = (uint)pcVar7;
    puVar13 = puVar13 + 0xe;
    puVar12 = puVar12 + 8;
    local_a0 = local_a0 + 1;
  } while (local_a0 < (int)local_a8);
LAB_0048acf4:
  uVar6 = param_1[1];
  uVar9 = *param_1;
  pvVar4 = malloc(uVar6 * uVar9 * local_ac + 1);
  if (pvVar4 == (void *)0x0) {
LAB_0048ad18:
    FUN_0048aa70();
    DAT_009936c8 = "Out of memory";
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_a4 = 0;
  uVar5 = uVar9;
  if (uVar6 != 0) {
    do {
      local_a0 = 0;
      puVar15 = (undefined1 *)(uVar5 * local_a4 * local_ac + (int)pvVar4);
      if (0 < (int)local_a8) {
        puVar12 = param_1 + 0xd75;
        piVar14 = local_98 + 6;
        do {
          if (*piVar14 < piVar14[-2] >> 1) {
            iVar3 = piVar14[-4];
            iVar8 = piVar14[-5];
          }
          else {
            iVar3 = piVar14[-5];
            iVar8 = piVar14[-4];
          }
          iVar3 = (*(code *)piVar14[-6])(puVar12[5],iVar8,iVar3,piVar14[-1],piVar14[-3]);
          local_18[local_a0] = iVar3;
          iVar3 = *piVar14;
          *piVar14 = iVar3 + 1;
          if (piVar14[-2] <= iVar3 + 1) {
            piVar14[1] = piVar14[1] + 1;
            *piVar14 = 0;
            piVar14[-5] = piVar14[-4];
            if (piVar14[1] < (int)*puVar12) {
              piVar14[-4] = puVar12[1] + piVar14[-4];
            }
          }
          local_a0 = local_a0 + 1;
          piVar14 = piVar14 + 8;
          puVar12 = puVar12 + 0xe;
        } while (local_a0 < (int)local_a8);
        uVar9 = *param_1;
        uVar5 = uVar9;
      }
      if ((int)local_ac < 3) {
        uVar5 = uVar9;
        if (local_ac == 1) {
          uVar6 = 0;
          if (uVar9 != 0) {
            puVar16 = puVar15;
            do {
              *puVar16 = puVar16[local_18[0] - (int)puVar15];
              uVar6 = uVar6 + 1;
              uVar9 = *param_1;
              uVar5 = uVar9;
              puVar16 = puVar16 + 1;
            } while (uVar6 < uVar9);
          }
        }
        else {
          uVar6 = 0;
          if (uVar9 != 0) {
            do {
              puVar16 = (undefined1 *)(local_18[0] + uVar6);
              uVar6 = uVar6 + 1;
              *puVar15 = *puVar16;
              puVar15[1] = 0xff;
              uVar9 = *param_1;
              uVar5 = uVar9;
              puVar15 = puVar15 + 2;
            } while (uVar6 < uVar9);
          }
        }
      }
      else {
        if (param_1[2] == 3) {
          if (0 < (int)uVar5) {
            puVar15 = puVar15 + 2;
            pbVar10 = local_10;
            do {
              iVar3 = (uint)pbVar10[local_18[0] - (int)local_10] * 0x10000 + 0x8000;
              uVar6 = (int)((*pbVar10 - 0x80) * 0x166e9 + iVar3) >> 0x10;
              uVar9 = (int)((uint)*pbVar10 * -0xb6d2 +
                            (uint)pbVar10[local_18[1] - (int)local_10] * -0x581a + 0x877600 + iVar3)
                      >> 0x10;
              uVar11 = (int)((pbVar10[local_18[1] - (int)local_10] - 0x80) * 0x1c5a2 + iVar3) >>
                       0x10;
              local_9c = uVar6;
              if ((0xff < uVar6) && (local_9c = 0xff, (int)uVar6 < 0)) {
                local_9c = 0;
              }
              uVar6 = uVar9;
              if ((0xff < uVar9) && (uVar6 = 0xff, (int)uVar9 < 0)) {
                uVar6 = 0;
              }
              uVar9 = uVar11;
              if ((0xff < uVar11) && (uVar9 = 0xff, (int)uVar11 < 0)) {
                uVar9 = 0;
              }
              puVar15[-2] = (char)local_9c;
              puVar15[-1] = (char)uVar6;
              pbVar10 = pbVar10 + 1;
              *puVar15 = (char)uVar9;
              puVar15[1] = 0xff;
              puVar15 = puVar15 + local_ac;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
            uVar9 = *param_1;
            uVar5 = uVar9;
            goto LAB_0048afe9;
          }
        }
        else {
          uVar6 = 0;
          if (uVar5 != 0) {
            do {
              uVar1 = *(undefined1 *)(local_18[0] + uVar6);
              uVar6 = uVar6 + 1;
              puVar15[2] = uVar1;
              puVar15[1] = uVar1;
              *puVar15 = uVar1;
              puVar15[3] = 0xff;
              puVar15 = puVar15 + local_ac;
              uVar5 = *param_1;
            } while (uVar6 < uVar5);
          }
        }
        uVar9 = *param_1;
      }
LAB_0048afe9:
      local_a4 = local_a4 + 1;
    } while (local_a4 < param_1[1]);
  }
  FUN_0048aa70();
  *param_2 = *param_1;
  *param_3 = param_1[1];
  if (param_4 != (uint *)0x0) {
    *param_4 = param_1[2];
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00004df9a0 004df9a0_FUN_004df9a0 ====
extern undefined4 FUN_004d6d60(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void FUN_004df9a0(Reflectable *param_1);

// decompiled by BatchDecomp @ 004df9a0 name=FUN_004df9a0 conv=unknown body=1097

void FUN_004df9a0(Reflectable *param_1)

{
  undefined4 stack0xfffffffc;
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  undefined4 *puVar5;
  char *pcVar6;
  Str_L_char_G_ *this;
  undefined4 uVar7;
  undefined1 *puVar8;
  Str_L_char_G_ *pSVar9;
  Darray_L_class_util__Str_L_char_G___G_ local_74[16];
  undefined4 local_64;
  undefined4 local_60;
  Str_L_char_G_ *pSStack_5c;
  undefined ***pppuStack_58;
  undefined4 uStack_54;
  undefined4 *local_4c;
  Str_L_char_G_ local_48;
  int local_3c;
  undefined **local_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined **local_28;
  void *pvStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined **local_18;
  void *pvStack_14;
  int iStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  puVar5 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x58))(&pvStack_24);
  if ((int)puVar5[1] < 1) {
    puVar8 = &cde_l2_0091985b_NullString;
  }
  else {
    puVar8 = (undefined1 *)*puVar5;
  }
  pcVar6 = "Module";
  while( true ) {
    if ((pcVar6[(int)(puVar8 + -0x91e100)] == '\0') && (*pcVar6 == '\0')) goto LAB_004dfa63;
    if (pcVar6[(int)(puVar8 + -0x91e100)] != *pcVar6) break;
    pcVar6 = pcVar6 + 1;
  }
  bVar4 = Reflectable__FUN_004df9a0(param_1);
  if ((!bVar4) && (bVar4 = util__Reflectable__IsType_struct_Campaign(param_1), !bVar4)) {
    puVar5 = (undefined4 *)(**(code **)*(int *)param_1)();
    util__Str_char___Str_char__o5(&local_48,"CelestialBody");
    pSVar9 = &local_48;
    this = (Str_L_char_G_ *)(**(code **)*puVar5)(&pvStack_14);
    bVar4 = util__Str_char___operator__o9(this,pSVar9);
    if (pvStack_14 != (void *)0x0) {
      operator_delete__(pvStack_14);
      pvStack_14 = (void *)0x0;
    }
    if (local_48.Data != (char *)0x0) {
      operator_delete__(local_48.Data);
    }
    if (!bVar4) goto LAB_004dfa65;
  }
LAB_004dfa63:
  bVar4 = true;
LAB_004dfa65:
  if (pvStack_24 != (void *)0x0) {
    operator_delete__(pvStack_24);
  }
  if (bVar4 != false) {
    local_64 = local_4c[1];
    uVar1 = *local_4c;
    local_4c = (undefined4 *)local_4c[2];
    local_38 = ((void *)(0x0091995cu));
    iStack_34 = 0;
    iStack_30 = 0;
    uStack_2c = 0;
    local_18 = ((void *)(0x0091995cu));
    pvStack_14 = (void *)0x0;
    iStack_10 = 0;
    uStack_c = 0;
    local_28 = ((void *)(0x0091995cu));
    pvStack_24 = (void *)0x0;
    iStack_20 = 0;
    uStack_1c = 0;
    util__Str_char___Str_char__o5(&local_48,"obj");
    iVar3 = iStack_30;
    local_3c = iStack_30 + 1;
    util__Darray_class_util__Str_char_____SetSize((Darray_L_class_util__Str_L_char_G___G_ *)&local_38,&local_3c);
    bVar4 = util__Darray_class_util__Str_char_____CheckSize((Darray_L_class_util__Str_L_char_G___G_ *)&local_38,iVar3);
    if (bVar4) {
      util__Str_char___operator__o8((Str_L_char_G_ *)(iStack_34 + (iStack_30 * 3 + -3) * 4),&local_48);
    }
    if (local_48.Data != (char *)0x0) {
      operator_delete__(local_48.Data);
    }
    util__Str_char___Str_char__o5(&local_48,"jpg");
    iVar3 = iStack_10;
    local_3c = iStack_10 + 1;
    util__Darray_class_util__Str_char_____SetSize((Darray_L_class_util__Str_L_char_G___G_ *)&local_18,&local_3c);
    bVar4 = util__Darray_class_util__Str_char_____CheckSize((Darray_L_class_util__Str_L_char_G___G_ *)&local_18,iVar3);
    if (bVar4) {
      util__Str_char___operator__o8
                ((Str_L_char_G_ *)((int)pvStack_14 + (iStack_10 * 3 + -3) * 4),&local_48);
    }
    if (local_48.Data != (char *)0x0) {
      operator_delete__(local_48.Data);
    }
    util__Str_char___Str_char__o5(&local_48,"png");
    iVar3 = iStack_10;
    local_3c = iStack_10 + 1;
    util__Darray_class_util__Str_char_____SetSize((Darray_L_class_util__Str_L_char_G___G_ *)&local_18,&local_3c);
    bVar4 = util__Darray_class_util__Str_char_____CheckSize((Darray_L_class_util__Str_L_char_G___G_ *)&local_18,iVar3);
    if (bVar4) {
      util__Str_char___operator__o8
                ((Str_L_char_G_ *)((int)pvStack_14 + (iStack_10 * 3 + -3) * 4),&local_48);
    }
    if (local_48.Data != (char *)0x0) {
      operator_delete__(local_48.Data);
    }
    util__Str_char___Str_char__o5(&local_48,"wav");
    iVar3 = iStack_20;
    local_3c = iStack_20 + 1;
    util__Darray_class_util__Str_char_____SetSize((Darray_L_class_util__Str_L_char_G___G_ *)&local_28,&local_3c);
    bVar4 = util__Darray_class_util__Str_char_____CheckSize((Darray_L_class_util__Str_L_char_G___G_ *)&local_28,iVar3);
    if (bVar4) {
      util__Str_char___operator__o8
                ((Str_L_char_G_ *)((int)pvStack_24 + (iStack_20 * 3 + -3) * 4),&local_48);
    }
    if (local_48.Data != (char *)0x0) {
      operator_delete__(local_48.Data);
    }
    util__Str_char___Str_char__o5(&local_48,"ogg");
    iVar3 = iStack_20;
    local_3c = iStack_20 + 1;
    util__Darray_class_util__Str_char_____SetSize((Darray_L_class_util__Str_L_char_G___G_ *)&local_28,&local_3c);
    bVar4 = util__Darray_class_util__Str_char_____CheckSize((Darray_L_class_util__Str_L_char_G___G_ *)&local_28,iVar3);
    if (bVar4) {
      util__Str_char___operator__o8
                ((Str_L_char_G_ *)((int)pvStack_24 + (iStack_20 * 3 + -3) * 4),&local_48);
    }
    if (local_48.Data != (char *)0x0) {
      operator_delete__(local_48.Data);
    }
    util__Str_char___Str_char__o5(&local_48,"Models");
    uVar7 = (**(code **)(param_1->_pad_0x0_0 + 100))(local_74);
    uVar2 = local_64;
    pSStack_5c = &local_48;
    pppuStack_58 = &local_38;
    uStack_54 = local_64;
    local_60 = uVar1;
    FUN_004d6d60(uVar7,uVar1,pSStack_5c,pppuStack_58,local_64,local_4c);
    util__Darray_class_util__Str_char______Darray_class_util__Str_char(local_74);
    if (local_48.Data != (char *)0x0) {
      operator_delete__(local_48.Data);
    }
    util__Str_char___Str_char__o5(&local_48,"Textures");
    uVar7 = (**(code **)(*(int *)param_1 + 0x68))(local_74);
    pSStack_5c = &local_48;
    pppuStack_58 = &local_18;
    uStack_54 = uVar2;
    local_60 = uVar1;
    FUN_004d6d60(uVar7,uVar1,pSStack_5c,pppuStack_58,uVar2,local_4c);
    util__Darray_class_util__Str_char______Darray_class_util__Str_char(local_74);
    if (local_48.Data != (char *)0x0) {
      operator_delete__(local_48.Data);
    }
    util__Str_char___Str_char__o5(&local_48,"Audio");
    uVar7 = (**(code **)(*(int *)param_1 + 0x6c))(local_74);
    pSStack_5c = &local_48;
    pppuStack_58 = &local_28;
    uStack_54 = uVar2;
    local_60 = uVar1;
    FUN_004d6d60(uVar7,uVar1,pSStack_5c,pppuStack_58,uVar2,local_4c);
    util__Darray_class_util__Str_char______Darray_class_util__Str_char(local_74);
    if (local_48.Data != (char *)0x0) {
      operator_delete__(local_48.Data);
    }
    util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&local_28);
    util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&local_18);
    util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&local_38);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00006655e0 006655e0_GetStatuses ====
// decompiled by BatchDecomp @ 006655e0 name=GetStatuses conv=__thiscall body=1771

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual class DesignStatusBuffer __thiscall WeaponModule__GetStatuses(class DataParser
   *)const  */

DesignStatusBuffer * __thiscall
WeaponModule__GetStatuses(WeaponModule *this,DesignStatusBuffer *__return_storage_ptr__,DataParser *param_1)

{
  undefined4 stack0xffffff94;
  Str_L_char_G_ SVar1;
  char cVar2;
  undefined4 uVar3;
  uint3 uVar7;
  char *pcVar4;
  Str_L_char_G_ *pSVar5;
  Str_L_char_G_ *pSVar6;
  bool bVar8;
  int unaff_EDI;
  float10 fVar9;
  Str_L_char_G_ *pSVar10;
  Str_L_char_G_ *pSVar11;
  ModulePlacer *pMVar12;
  Str_L_char_G_ local_48;
  Str_L_char_G_ local_3c;
  Str_L_char_G_ local_30;
  Str_L_char_G_ local_24;
  Str_L_char_G_ local_18;
  double local_c;
  
  __return_storage_ptr__->DataManager = (DataParser *)0x0;
  (__return_storage_ptr__->Messages)._pad_0x0_0 = 0;
  (__return_storage_ptr__->Messages).Data = (DesignStatusMessage *)0x0;
  (__return_storage_ptr__->Messages).Size = 0;
  *(undefined8 *)&(__return_storage_ptr__->Messages).Capacity = 0;
  Module__GetStatuses((Module *)this,__return_storage_ptr__,param_1);
  util__Str_char___Str_char__o5(&local_3c,"WeaponModuleNoSpeed");
  pMVar12 = (ModulePlacer *)0x0;
  pSVar5 = &local_30;
  local_30.Data = (char *)0x0;
  pSVar10 = &local_24;
  local_30.Capacity = 0;
  pSVar11 = &local_18;
  local_30.Length = 0;
  pSVar6 = &local_3c;
  local_24.Data = (char *)0x0;
  local_24.Capacity = 0;
  local_24.Length = 0;
  local_18.Data = (char *)0x0;
  local_18.Capacity = 0;
  local_18.Length = 0;
  fVar9 = (float10)(**(code **)(*(int *)this + 0x154))();
  local_c = (double)fVar9;
  DesignStatusBuffer__CheckError(__return_storage_ptr__,local_c <= 0.0,pSVar6,pSVar11,pSVar10,pSVar5,pMVar12);
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
    local_30.Data = (char *)0x0;
  }
  if (local_3c.Data != (char *)0x0) {
    operator_delete__(local_3c.Data);
  }
  uVar3 = util__Str_char___Str_char__o5(&local_3c,"WeaponModuleNoTargeting");
  uVar7 = (uint3)((uint)uVar3 >> 8);
  if (((char)this[1]._pad_0x0_0 == '\0') && (*(char *)((int)&this[1]._pad_0x0_0 + 1) == '\0')) {
    pcVar4 = (char *)CONCAT31(uVar7,1);
  }
  else {
    pcVar4 = (char *)((uint)uVar7 << 8);
  }
  local_18.Data = (char *)0x0;
  local_18.Capacity = 0;
  pSVar5 = &local_30;
  local_18.Length = 0;
  pSVar10 = &local_3c;
  local_24.Data = (char *)0x0;
  local_24.Capacity = 0;
  local_24.Length = 0;
  local_30.Data = (char *)0x0;
  local_30.Capacity = 0;
  local_30.Length = 0;
  DesignStatusBuffer__CheckWarning(__return_storage_ptr__,SUB41(pcVar4,0),pSVar10,pSVar5,&local_24,&local_18,
             (ModulePlacer *)0x0);
  if (local_30.Data != (char *)0x0) {
    operator_delete__(local_30.Data);
    local_30.Data = (char *)0x0;
  }
  if (local_24.Data != (char *)0x0) {
    operator_delete__(local_24.Data);
    local_24.Data = (char *)0x0;
  }
  if (local_18.Data != (char *)0x0) {
    operator_delete__(local_18.Data);
    local_18.Data = (char *)0x0;
  }
  if (local_3c.Data != (char *)0x0) {
    operator_delete__(local_3c.Data);
  }
  cVar2 = (**(code **)(*(int *)this + 0x1a4))();
  if (cVar2 != '\0') {
    util__Str_char___Str_char__o5(&local_48,"GetFiringVelocity_km__s()");
    util__Str_char___Str_char__o5(&local_18,"WeaponModuleLowSpeed");
    fVar9 = (float10)(**(code **)(*(int *)this + 0x154))();
    local_c = (double)fVar9;
    if (/*3fe0000000000000*/0.5 < local_c) {
LAB_0066581b:
      bVar8 = false;
    }
    else {
      fVar9 = (float10)(**(code **)(*(int *)this + 0x154))();
      local_c = (double)fVar9;
      if (local_c <= /*0000000000000000*/0.0) goto LAB_0066581b;
      bVar8 = true;
    }
    pMVar12 = (ModulePlacer *)0x0;
    pSVar11 = &local_24;
    local_24.Data = (char *)0x0;
    pSVar6 = &local_30;
    local_24.Capacity = 0;
    local_24.Length = 0;
    local_30.Data = (char *)0x0;
    local_30.Capacity = 0;
    local_30.Length = 0;
    GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff94,&local_48);
    fVar9 = (float10)(**(code **)(*(int *)this + 0x154))();
    SVar1.Capacity = (int)pSVar5;
    SVar1.Data = (char *)pSVar10;
    SVar1.Length = (int)pSVar6;
    pSVar5 = Print(&local_3c,(double)CONCAT44(pcVar4,(int)((ulonglong)(double)fVar9 >> 0x20)),SVar1)
    ;
    DesignStatusBuffer__CheckWarning(__return_storage_ptr__,bVar8,&local_18,pSVar5,pSVar6,pSVar11,pMVar12);
    if (local_3c.Data != (char *)0x0) {
      operator_delete__(local_3c.Data);
      local_3c.Data = (char *)0x0;
    }
    if (local_30.Data != (char *)0x0) {
      operator_delete__(local_30.Data);
      local_30.Data = (char *)0x0;
    }
    if (local_24.Data != (char *)0x0) {
      operator_delete__(local_24.Data);
      local_24.Data = (char *)0x0;
    }
    if (local_18.Data != (char *)0x0) {
      operator_delete__(local_18.Data);
      local_18.Data = (char *)0x0;
    }
    if (local_48.Data != (char *)0x0) {
      operator_delete__(local_48.Data);
    }
    fVar9 = (float10)(**(code **)(*(int *)this + 0x198))();
    local_c = (double)fVar9;
    if (/*0000000000000000*/0.0 < local_c) {
      fVar9 = (float10)(**(code **)(*(int *)this + 0x19c))();
      local_c = (double)fVar9;
      if (/*0000000000000000*/0.0 < local_c) {
        fVar9 = (float10)(**(code **)(*(int *)this + 0x198))();
        local_c = (double)fVar9;
        util__Str_char___Str_char__o5(&local_18,"WeaponModuleNarrowAngle");
        local_24.Data = (char *)0x0;
        local_24.Capacity = 0;
        local_24.Length = 0;
        local_30.Data = (char *)0x0;
        local_30.Capacity = 0;
        local_30.Length = 0;
        PrintSigFigures(&local_3c,
                        (double)CONCAT44(GlobalSignificantFigures,
                                         (int)((ulonglong)(local_c * /*404ca5dc1a63c1f8*/57.29577951308232) >>
                                              0x20)),unaff_EDI);
        pMVar12 = (ModulePlacer *)0x0;
        pSVar5 = &local_24;
        pSVar10 = &local_30;
        pSVar6 = util__Printf(&local_48,s__s_);
        pSVar11 = &local_18;
        fVar9 = (float10)(**(code **)(*(int *)this + 0x198))();
        local_c = (double)fVar9;
        DesignStatusBuffer__CheckWarning(__return_storage_ptr__,local_c < /*3ff38c35418a5bf6*/1.2217304763960306,pSVar11,pSVar6,pSVar10,
                   pSVar5,pMVar12);
        if (local_48.Data != (char *)0x0) {
          operator_delete__(local_48.Data);
          local_48.Data = (char *)0x0;
        }
        if (local_3c.Data != (char *)0x0) {
          operator_delete__(local_3c.Data);
          local_3c.Data = (char *)0x0;
        }
        if (local_30.Data != (char *)0x0) {
          operator_delete__(local_30.Data);
          local_30.Data = (char *)0x0;
        }
        if (local_24.Data != (char *)0x0) {
          operator_delete__(local_24.Data);
          local_24.Data = (char *)0x0;
        }
        if (local_18.Data != (char *)0x0) {
          operator_delete__(local_18.Data);
        }
        fVar9 = (float10)(**(code **)(*(int *)this + 0x19c))();
        local_c = (double)fVar9;
        util__Str_char___Str_char__o5(&local_18,"WeaponModuleSlowTurnSpeed");
        local_24.Data = (char *)0x0;
        local_24.Capacity = 0;
        local_24.Length = 0;
        local_30.Data = (char *)0x0;
        local_30.Capacity = 0;
        local_30.Length = 0;
        PrintSigFigures(&local_3c,
                        (double)CONCAT44(GlobalSignificantFigures,
                                         (int)((ulonglong)(local_c * /*404ca5dc1a63c1f8*/57.29577951308232) >>
                                              0x20)),unaff_EDI);
        pMVar12 = (ModulePlacer *)0x0;
        pSVar5 = &local_24;
        pSVar10 = &local_30;
        pSVar6 = util__Printf(&local_48,s__s___s);
        pSVar11 = &local_18;
        fVar9 = (float10)(**(code **)(*(int *)this + 0x19c))();
        local_c = (double)fVar9;
        DesignStatusBuffer__CheckWarning(__return_storage_ptr__,local_c < /*3fd657184ae74487*/0.3490658503988659,pSVar11,pSVar6,pSVar10,
                   pSVar5,pMVar12);
        if (local_48.Data != (char *)0x0) {
          operator_delete__(local_48.Data);
          local_48.Data = (char *)0x0;
        }
        if (local_3c.Data != (char *)0x0) {
          operator_delete__(local_3c.Data);
          local_3c.Data = (char *)0x0;
        }
        if (local_30.Data != (char *)0x0) {
          operator_delete__(local_30.Data);
          local_30.Data = (char *)0x0;
        }
        if (local_24.Data != (char *)0x0) {
          operator_delete__(local_24.Data);
          local_24.Data = (char *)0x0;
        }
        if (local_18.Data != (char *)0x0) {
          operator_delete__(local_18.Data);
        }
      }
    }
  }
  cVar2 = (**(code **)(*(int *)this + 0x1c8))();
  if (cVar2 == '\0') {
    return __return_storage_ptr__;
  }
  util__Str_char___Str_char__o5(&local_48,"WeaponModuleCantCool");
  fVar9 = (float10)(**(code **)(*(int *)this + 0x1c4))();
  local_c = (double)fVar9;
  if (local_c <= 0.0) {
    fVar9 = (float10)(**(code **)(*(int *)this + 0x194))();
    local_c = (double)fVar9;
    if (/*0000000000000000*/0.0 < local_c) {
      bVar8 = true;
      goto LAB_00665c12;
    }
  }
  bVar8 = false;
LAB_00665c12:
  local_18.Data = (char *)0x0;
  local_18.Capacity = 0;
  local_18.Length = 0;
  local_24.Data = (char *)0x0;
  local_24.Capacity = 0;
  local_24.Length = 0;
  local_30.Data = (char *)0x0;
  local_30.Capacity = 0;
  local_30.Length = 0;
  DesignStatusBuffer__CheckError(__return_storage_ptr__,bVar8,&local_48,&local_30,&local_24,&local_18,
             (ModulePlacer *)0x0);
  if (local_30.Data != (char *)0x0) {
    operator_delete__(local_30.Data);
    local_30.Data = (char *)0x0;
  }
  if (local_24.Data != (char *)0x0) {
    operator_delete__(local_24.Data);
    local_24.Data = (char *)0x0;
  }
  if (local_18.Data != (char *)0x0) {
    operator_delete__(local_18.Data);
    local_18.Data = (char *)0x0;
  }
  if (local_48.Data != (char *)0x0) {
    operator_delete__(local_48.Data);
  }
  return __return_storage_ptr__;
}


//==== 00006b5c30 006b5c30_GetCostChartTitle ====
// decompiled by BatchDecomp @ 006b5c30 name=GetCostChartTitle conv=__thiscall body=938

/* WARNING: Removing unreachable block (ram,0x006b5e90) */
/* WARNING: Removing unreachable block (ram,0x006b5ea0) */
/* WARNING: Removing unreachable block (ram,0x006b5eb3) */
/* WARNING: Removing unreachable block (ram,0x006b5ebd) */
/* private: class Str_L_char_G_ __thiscall UIShipInfo__GetCostChartTitle(void)const  */

Str_L_char_G_ * __thiscall
UIShipInfo__GetCostChartTitle(UIShipInfo *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xffffff30;
  undefined4 stack0xfffffffc;
  void *pvVar1;
  _func___cdecl_CraftBlueprint_ptr_void_ptr *p_Var2;
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
  CraftBlueprint *pCVar14;
  LocStr *pLVar15;
  Str_L_char_G_ *pSVar16;
  Str_L_char_G_ *pSVar17;
  int unaff_EDI;
  char *pcVar18;
  int iVar19;
  void *local_b8[3];
  void *local_ac;
  LocStr local_a0[24];
  Str_L_char_G_ local_88;
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
  local_58 = 0;
  local_24 = __return_storage_ptr__;
  pvVar1 = (this->Ship).Getter.Callee;
  if ((pvVar1 == (void *)0x0) ||
     (p_Var2 = (this->Ship).Getter.CallbackFunction,
     p_Var2 == (_func___cdecl_CraftBlueprint_ptr_void_ptr *)0x0)) {
    pCVar14 = (this->Ship).Value;
  }
  else {
    pCVar14 = (*p_Var2)(pvVar1);
  }
  if (pCVar14 == (CraftBlueprint *)0x0) {
    pcVar18 = (char *)0x0;
    pSVar16 = &local_14;
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
    local_14.Data = (char *)0x0;
    local_14.Capacity = 0;
    local_14.Length = 0;
  }
  else {
    util__Str_char___Str_char__o5(&local_88,"GetCraft()->GetTotalCost_c()");
    util__Str_char___Str_char__o5(&local_54,"Colon");
    util__Str_char___Str_char__o5(&local_48,"Cost");
    pvVar1 = (this->Ship).Getter.Callee;
    if ((pvVar1 == (void *)0x0) ||
       (p_Var2 = (this->Ship).Getter.CallbackFunction,
       p_Var2 == (_func___cdecl_CraftBlueprint_ptr_void_ptr *)0x0)) {
      pCVar14 = (this->Ship).Value;
    }
    else {
      pCVar14 = (*p_Var2)(pvVar1);
    }
    CraftBlueprint__GetTotalCost_c_Memoize(pCVar14);
    if (*(char *)&(pCVar14->GetApproximateComposition_MemoizedValue).Data == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    local_3c.Data = (char *)0x0;
    local_3c.Capacity = 0;
    local_3c.Length = 0;
    local_30.Data = (char *)0x0;
    local_30.Capacity = 0;
    local_30.Length = 0;
    pLVar15 = (LocStr *)util__LocStr__LocStr((LocStr *)local_b8,&local_54,&local_3c);
    pSVar16 = util__LocStr__operator__o3(pLVar15);
    pcVar18 = (char *)0x6b5d52;
    pLVar15 = (LocStr *)util__LocStr__LocStr(local_a0,&local_48,&local_30);
    pSVar17 = util__LocStr__operator__o3(pLVar15);
    local_20.Length = 0;
    local_20.Data = (char *)0x0;
    local_20.Capacity = 0;
    util__Str_char___Str_char(&local_20,pSVar17);
    util__Str_char___operator__o10(&local_20,pSVar16);
    pSVar16 = &local_20;
    iVar19 = 0x6b5d86;
    util__Str_char___Str_char(&local_70,pSVar16);
    if ((Str_L_char_G_ *)local_20.Data != (Str_L_char_G_ *)0x0) {
      iVar19 = 0x6b5d93;
      pSVar16 = (Str_L_char_G_ *)local_20.Data;
      operator_delete__(local_20.Data);
      ((slice_view *)&local_20)->_0_8_ = ((slice_view *)&local_20)->_0_8_ & 0xffffffff00000000;
    }
    GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff30,&local_88);
    SVar3.Capacity = (int)pSVar16;
    SVar3.Data = (char *)iVar19;
    SVar3.Length = unaff_EDI;
    pSVar16 = Print(&local_7c,
                    (double)CONCAT44(pcVar18,(int)((ulonglong)
                                                   *(undefined8 *)
                                                    &(pCVar14->GetCrossSection_m2_MemoizedValue).
                                                     IsValidData >> 0x20)),SVar3);
    local_14.Length = 0;
    local_14.Data = (char *)0x0;
    local_14.Capacity = 0;
    util__Str_char___Str_char(&local_14,&local_70);
    util__Str_char___operator__o10(&local_14,pSVar16);
    util__Str_char___Str_char(&local_64,&local_14);
    if (local_14.Data != (char *)0x0) {
      operator_delete__(local_14.Data);
    }
    pSVar16 = &local_64;
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
    pcVar18 = local_14.Data;
    __return_storage_ptr__ = local_24;
  }
  util__Str_char___Str_char(__return_storage_ptr__,pSVar16);
  if ((bVar11) && (pcVar18 != (char *)0x0)) {
    operator_delete__(pcVar18);
  }
  if ((bVar12) && (local_64.Data != (char *)0x0)) {
    operator_delete__(local_64.Data);
  }
  if ((bVar13) && (local_70.Data != (char *)0x0)) {
    operator_delete__(local_70.Data);
  }
  if ((bVar5) && (local_30.Data != (char *)0x0)) {
    operator_delete__(local_30.Data);
    local_30.Data = (char *)0x0;
  }
  if (bVar6) {
    if (local_ac != (void *)0x0) {
      operator_delete__(local_ac);
      local_ac = (void *)0x0;
    }
    if (local_b8[0] != (void *)0x0) {
      operator_delete__(local_b8[0]);
      local_b8[0] = (void *)0x0;
    }
  }
  if ((bVar7) && (local_3c.Data != (char *)0x0)) {
    operator_delete__(local_3c.Data);
    local_3c.Data = (char *)0x0;
  }
  if ((bVar8) && (local_7c.Data != (char *)0x0)) {
    operator_delete__(local_7c.Data);
    local_7c.Data = (char *)0x0;
  }
  if ((bVar9) && (local_48.Data != (char *)0x0)) {
    operator_delete__(local_48.Data);
    local_48.Data = (char *)0x0;
  }
  if ((bVar10) && (local_54.Data != (char *)0x0)) {
    operator_delete__(local_54.Data);
    local_54.Data = (char *)0x0;
  }
  if ((local_88.Data != (char *)0x0) && (bVar4)) {
    operator_delete__(local_88.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 00006b63b0 006b63b0_GetHeatSignatureTitle ====
// decompiled by BatchDecomp @ 006b63b0 name=GetHeatSignatureTitle conv=__thiscall body=1537

/* WARNING: Removing unreachable block (ram,0x006b687e) */
/* WARNING: Removing unreachable block (ram,0x006b688e) */
/* WARNING: Removing unreachable block (ram,0x006b68a1) */
/* WARNING: Removing unreachable block (ram,0x006b68ab) */
/* private: class Str_L_char_G_ __thiscall UIShipInfo__GetHeatSignatureTitle(void)const  */

Str_L_char_G_ * __thiscall
UIShipInfo__GetHeatSignatureTitle(UIShipInfo *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xfffffebc;
  undefined4 stack0xfffffffc;
  void *pvVar1;
  _func___cdecl_CraftBlueprint_ptr_void_ptr *p_Var2;
  Str_L_char_G_ SVar3;
  Str_L_char_G_ SVar4;
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
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  CraftBlueprint *pCVar22;
  LocStr *pLVar23;
  Str_L_char_G_ *pSVar24;
  Str_L_char_G_ *pSVar25;
  int unaff_EDI;
  double dVar26;
  char *pcVar27;
  int iVar28;
  LocStr local_12c[24];
  void *local_114[3];
  void *local_108;
  void *local_fc[3];
  void *local_f0;
  Str_L_char_G_ local_e4;
  Str_L_char_G_ local_d8;
  Str_L_char_G_ local_cc;
  Str_L_char_G_ local_c0;
  Str_L_char_G_ local_b4;
  Str_L_char_G_ local_a8;
  Str_L_char_G_ local_9c;
  Str_L_char_G_ local_90;
  Str_L_char_G_ local_84;
  Str_L_char_G_ local_78;
  Str_L_char_G_ local_6c;
  Str_L_char_G_ local_60;
  Str_L_char_G_ local_54;
  Str_L_char_G_ local_48;
  CraftBlueprint *local_3c;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_3c = (CraftBlueprint *)0x0;
  pvVar1 = (this->Ship).Getter.Callee;
  if ((pvVar1 == (void *)0x0) ||
     (p_Var2 = (this->Ship).Getter.CallbackFunction,
     p_Var2 == (_func___cdecl_CraftBlueprint_ptr_void_ptr *)0x0)) {
    pCVar22 = (this->Ship).Value;
  }
  else {
    pCVar22 = (*p_Var2)(pvVar1);
  }
  if (pCVar22 == (CraftBlueprint *)0x0) {
    pcVar27 = (char *)0x0;
    pSVar24 = &local_14;
    bVar21 = false;
    bVar20 = false;
    bVar19 = true;
    bVar18 = false;
    bVar17 = false;
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
    local_14.Data = (char *)0x0;
    local_14.Capacity = 0;
    local_14.Length = 0;
  }
  else {
    util__Str_char___Str_char__o5(&local_e4,"GetCraft()->GetPeakHeatSignature_W()");
    util__Str_char___Str_char__o5(&local_90,"Dash");
    util__Str_char___Str_char__o5(&local_84,"GetCraft()->GetAmbientHeatSignature_W()");
    util__Str_char___Str_char__o5(&local_78,"Colon");
    util__Str_char___Str_char__o5(&local_6c,"Heat");
    pvVar1 = (this->Ship).Getter.Callee;
    if ((pvVar1 == (void *)0x0) ||
       (p_Var2 = (this->Ship).Getter.CallbackFunction,
       p_Var2 == (_func___cdecl_CraftBlueprint_ptr_void_ptr *)0x0)) {
      local_3c = (this->Ship).Value;
    }
    else {
      local_3c = (*p_Var2)(pvVar1);
    }
    pvVar1 = (this->Ship).Getter.Callee;
    local_60.Data = (char *)0x0;
    local_60.Capacity = 0;
    local_60.Length = 0;
    if ((pvVar1 == (void *)0x0) ||
       (p_Var2 = (this->Ship).Getter.CallbackFunction,
       p_Var2 == (_func___cdecl_CraftBlueprint_ptr_void_ptr *)0x0)) {
      pCVar22 = (this->Ship).Value;
    }
    else {
      pCVar22 = (*p_Var2)(pvVar1);
    }
    local_54.Data = (char *)0x0;
    local_54.Capacity = 0;
    local_54.Length = 0;
    local_48.Data = (char *)0x0;
    local_48.Capacity = 0;
    local_48.Length = 0;
    pLVar23 = (LocStr *)util__LocStr__LocStr((LocStr *)local_114,&local_78,&local_54);
    pSVar24 = util__LocStr__operator__o3(pLVar23);
    pcVar27 = (char *)0x6b64fa;
    pLVar23 = (LocStr *)util__LocStr__LocStr((LocStr *)local_fc,&local_6c,&local_48);
    pSVar25 = util__LocStr__operator__o3(pLVar23);
    local_20.Length = 0;
    local_20.Data = (char *)0x0;
    local_20.Capacity = 0;
    util__Str_char___Str_char(&local_20,pSVar25);
    util__Str_char___operator__o10(&local_20,pSVar24);
    pSVar24 = &local_20;
    iVar28 = 0x6b6531;
    util__Str_char___Str_char(&local_c0,pSVar24);
    if ((Str_L_char_G_ *)local_20.Data != (Str_L_char_G_ *)0x0) {
      iVar28 = 0x6b653e;
      pSVar24 = (Str_L_char_G_ *)local_20.Data;
      operator_delete__(local_20.Data);
      ((slice_view *)&local_20)->_0_8_ = ((slice_view *)&local_20)->_0_8_ & 0xffffffff00000000;
    }
    GetUnitsOfType((Str_L_char_G_ *)&stack0xfffffebc,&local_84);
    dVar26 = CraftBlueprint__GetAmbientHeatSignature_W(pCVar22);
    SVar3.Capacity = (int)pSVar24;
    SVar3.Data = (char *)iVar28;
    SVar3.Length = unaff_EDI;
    pSVar24 = Print(&local_cc,(double)CONCAT44(pcVar27,(int)((ulonglong)dVar26 >> 0x20)),SVar3);
    local_2c.Length = 0;
    local_2c.Data = (char *)0x0;
    local_2c.Capacity = 0;
    util__Str_char___Str_char(&local_2c,&local_c0);
    util__Str_char___operator__o10(&local_2c,pSVar24);
    util__Str_char___Str_char(&local_b4,&local_2c);
    if (local_2c.Data != (char *)0x0) {
      operator_delete__(local_2c.Data);
      ((slice_view *)&local_2c)->_0_8_ = ((slice_view *)&local_2c)->_0_8_ & 0xffffffff00000000;
    }
    pcVar27 = (char *)0x6b65db;
    pLVar23 = (LocStr *)util__LocStr__LocStr(local_12c,&local_90,&local_60);
    pSVar24 = util__LocStr__operator__o3(pLVar23);
    local_38.Length = 0;
    local_38.Data = (char *)0x0;
    local_38.Capacity = 0;
    util__Str_char___Str_char(&local_38,&local_b4);
    util__Str_char___operator__o10(&local_38,pSVar24);
    pSVar24 = &local_38;
    iVar28 = 0x6b661a;
    util__Str_char___Str_char(&local_a8,pSVar24);
    if ((Str_L_char_G_ *)local_38.Data != (Str_L_char_G_ *)0x0) {
      iVar28 = 0x6b6627;
      pSVar24 = (Str_L_char_G_ *)local_38.Data;
      operator_delete__(local_38.Data);
      ((slice_view *)&local_38)->_0_8_ = ((slice_view *)&local_38)->_0_8_ & 0xffffffff00000000;
    }
    GetUnitsOfType((Str_L_char_G_ *)&stack0xfffffebc,&local_e4);
    dVar26 = CraftBlueprint__GetPeakHeatSignature_W(local_3c);
    SVar4.Capacity = (int)pSVar24;
    SVar4.Data = (char *)iVar28;
    SVar4.Length = unaff_EDI;
    pSVar24 = Print(&local_d8,(double)CONCAT44(pcVar27,(int)((ulonglong)dVar26 >> 0x20)),SVar4);
    local_14.Length = 0;
    local_14.Data = (char *)0x0;
    local_14.Capacity = 0;
    util__Str_char___Str_char(&local_14,&local_a8);
    util__Str_char___operator__o10(&local_14,pSVar24);
    util__Str_char___Str_char(&local_9c,&local_14);
    if (local_14.Data != (char *)0x0) {
      operator_delete__(local_14.Data);
    }
    pSVar24 = &local_9c;
    bVar21 = true;
    bVar20 = true;
    bVar19 = false;
    bVar18 = true;
    bVar17 = true;
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
    pcVar27 = local_14.Data;
  }
  util__Str_char___Str_char(__return_storage_ptr__,pSVar24);
  if (bVar19) {
    if (pcVar27 != (char *)0x0) {
      operator_delete__(pcVar27);
    }
  }
  if ((bVar20) && (local_9c.Data != (char *)0x0)) {
    operator_delete__(local_9c.Data);
  }
  if ((bVar21) && (local_a8.Data != (char *)0x0)) {
    operator_delete__(local_a8.Data);
  }
  if ((bVar12) && (local_b4.Data != (char *)0x0)) {
    operator_delete__(local_b4.Data);
  }
  if ((bVar13) && (local_c0.Data != (char *)0x0)) {
    operator_delete__(local_c0.Data);
  }
  if (bVar14) {
    if (local_f0 != (void *)0x0) {
      operator_delete__(local_f0);
      local_f0 = (void *)0x0;
    }
    if (local_fc[0] != (void *)0x0) {
      operator_delete__(local_fc[0]);
      local_fc[0] = (void *)0x0;
    }
  }
  if ((bVar15) && (local_48.Data != (char *)0x0)) {
    operator_delete__(local_48.Data);
    local_48.Data = (char *)0x0;
  }
  if (bVar16) {
    if (local_108 != (void *)0x0) {
      operator_delete__(local_108);
      local_108 = (void *)0x0;
    }
    if (local_114[0] != (void *)0x0) {
      operator_delete__(local_114[0]);
      local_114[0] = (void *)0x0;
    }
  }
  if ((bVar17) && (local_54.Data != (char *)0x0)) {
    operator_delete__(local_54.Data);
    local_54.Data = (char *)0x0;
  }
  if ((bVar18) && (local_cc.Data != (char *)0x0)) {
    operator_delete__(local_cc.Data);
    local_cc.Data = (char *)0x0;
  }
  if ((bVar6) && (local_60.Data != (char *)0x0)) {
    operator_delete__(local_60.Data);
    local_60.Data = (char *)0x0;
  }
  if ((bVar7) && (local_d8.Data != (char *)0x0)) {
    operator_delete__(local_d8.Data);
    local_d8.Data = (char *)0x0;
  }
  if ((bVar8) && (local_6c.Data != (char *)0x0)) {
    operator_delete__(local_6c.Data);
    local_6c.Data = (char *)0x0;
  }
  if ((bVar9) && (local_78.Data != (char *)0x0)) {
    operator_delete__(local_78.Data);
    local_78.Data = (char *)0x0;
  }
  if ((bVar10) && (local_84.Data != (char *)0x0)) {
    operator_delete__(local_84.Data);
    local_84.Data = (char *)0x0;
  }
  if ((bVar11) && (local_90.Data != (char *)0x0)) {
    operator_delete__(local_90.Data);
    local_90.Data = (char *)0x0;
  }
  if ((local_e4.Data != (char *)0x0) && (bVar5)) {
    operator_delete__(local_e4.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 00006b6e00 006b6e00_GetMassChartTitle ====
// decompiled by BatchDecomp @ 006b6e00 name=GetMassChartTitle conv=__thiscall body=882

/* WARNING: Removing unreachable block (ram,0x006b702b) */
/* WARNING: Removing unreachable block (ram,0x006b703b) */
/* WARNING: Removing unreachable block (ram,0x006b704e) */
/* WARNING: Removing unreachable block (ram,0x006b7058) */
/* private: class Str_L_char_G_ __thiscall UIShipInfo__GetMassChartTitle(void)const  */

Str_L_char_G_ * __thiscall
UIShipInfo__GetMassChartTitle(UIShipInfo *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xffffff34;
  undefined4 stack0xfffffffc;
  void *pvVar1;
  _func___cdecl_CraftBlueprint_ptr_void_ptr *p_Var2;
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
  CraftBlueprint *pCVar14;
  LocStr *pLVar15;
  Str_L_char_G_ *pSVar16;
  Str_L_char_G_ *pSVar17;
  int unaff_EDI;
  double dVar18;
  char *pcVar19;
  int iVar20;
  void *local_b4[3];
  void *local_a8;
  LocStr local_9c[24];
  Str_L_char_G_ local_84;
  Str_L_char_G_ local_78;
  Str_L_char_G_ local_6c;
  Str_L_char_G_ local_60;
  undefined4 local_54;
  Str_L_char_G_ local_50;
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_54 = 0;
  pvVar1 = (this->Ship).Getter.Callee;
  if ((pvVar1 == (void *)0x0) ||
     (p_Var2 = (this->Ship).Getter.CallbackFunction,
     p_Var2 == (_func___cdecl_CraftBlueprint_ptr_void_ptr *)0x0)) {
    pCVar14 = (this->Ship).Value;
  }
  else {
    pCVar14 = (*p_Var2)(pvVar1);
  }
  if (pCVar14 == (CraftBlueprint *)0x0) {
    pcVar19 = (char *)0x0;
    pSVar16 = &local_14;
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
    local_14.Data = (char *)0x0;
    local_14.Capacity = 0;
    local_14.Length = 0;
  }
  else {
    util__Str_char___Str_char__o5(&local_84,"GetCraft()->GetTotalMass_kg()");
    util__Str_char___Str_char__o5(&local_50,"Colon");
    util__Str_char___Str_char__o5(&local_44,"Mass");
    pvVar1 = (this->Ship).Getter.Callee;
    if ((pvVar1 == (void *)0x0) ||
       (p_Var2 = (this->Ship).Getter.CallbackFunction,
       p_Var2 == (_func___cdecl_CraftBlueprint_ptr_void_ptr *)0x0)) {
      pCVar14 = (this->Ship).Value;
    }
    else {
      pCVar14 = (*p_Var2)(pvVar1);
    }
    local_38.Data = (char *)0x0;
    local_38.Capacity = 0;
    local_38.Length = 0;
    local_2c.Data = (char *)0x0;
    local_2c.Capacity = 0;
    local_2c.Length = 0;
    pLVar15 = (LocStr *)util__LocStr__LocStr((LocStr *)local_b4,&local_50,&local_38);
    pSVar16 = util__LocStr__operator__o3(pLVar15);
    pcVar19 = (char *)0x6b6ef0;
    pLVar15 = (LocStr *)util__LocStr__LocStr(local_9c,&local_44,&local_2c);
    pSVar17 = util__LocStr__operator__o3(pLVar15);
    local_20.Length = 0;
    local_20.Data = (char *)0x0;
    local_20.Capacity = 0;
    util__Str_char___Str_char(&local_20,pSVar17);
    util__Str_char___operator__o10(&local_20,pSVar16);
    pSVar16 = &local_20;
    iVar20 = 0x6b6f24;
    util__Str_char___Str_char(&local_6c,pSVar16);
    if ((Str_L_char_G_ *)local_20.Data != (Str_L_char_G_ *)0x0) {
      iVar20 = 0x6b6f31;
      pSVar16 = (Str_L_char_G_ *)local_20.Data;
      operator_delete__(local_20.Data);
      ((slice_view *)&local_20)->_0_8_ = ((slice_view *)&local_20)->_0_8_ & 0xffffffff00000000;
    }
    GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff34,&local_84);
    dVar18 = CraftBlueprint__GetTotalMass_kg(pCVar14);
    SVar3.Capacity = (int)pSVar16;
    SVar3.Data = (char *)iVar20;
    SVar3.Length = unaff_EDI;
    pSVar16 = Print(&local_78,(double)CONCAT44(pcVar19,(int)((ulonglong)dVar18 >> 0x20)),SVar3);
    local_14.Length = 0;
    local_14.Data = (char *)0x0;
    local_14.Capacity = 0;
    util__Str_char___Str_char(&local_14,&local_6c);
    util__Str_char___operator__o10(&local_14,pSVar16);
    util__Str_char___Str_char(&local_60,&local_14);
    if (local_14.Data != (char *)0x0) {
      operator_delete__(local_14.Data);
    }
    pSVar16 = &local_60;
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
    pcVar19 = local_14.Data;
  }
  util__Str_char___Str_char(__return_storage_ptr__,pSVar16);
  if ((bVar11) && (pcVar19 != (char *)0x0)) {
    operator_delete__(pcVar19);
  }
  if ((bVar12) && (local_60.Data != (char *)0x0)) {
    operator_delete__(local_60.Data);
  }
  if ((bVar13) && (local_6c.Data != (char *)0x0)) {
    operator_delete__(local_6c.Data);
  }
  if ((bVar5) && (local_2c.Data != (char *)0x0)) {
    operator_delete__(local_2c.Data);
    local_2c.Data = (char *)0x0;
  }
  if (bVar6) {
    if (local_a8 != (void *)0x0) {
      operator_delete__(local_a8);
      local_a8 = (void *)0x0;
    }
    if (local_b4[0] != (void *)0x0) {
      operator_delete__(local_b4[0]);
      local_b4[0] = (void *)0x0;
    }
  }
  if ((bVar7) && (local_38.Data != (char *)0x0)) {
    operator_delete__(local_38.Data);
    local_38.Data = (char *)0x0;
  }
  if ((bVar8) && (local_78.Data != (char *)0x0)) {
    operator_delete__(local_78.Data);
    local_78.Data = (char *)0x0;
  }
  if ((bVar9) && (local_44.Data != (char *)0x0)) {
    operator_delete__(local_44.Data);
    local_44.Data = (char *)0x0;
  }
  if ((bVar10) && (local_50.Data != (char *)0x0)) {
    operator_delete__(local_50.Data);
    local_50.Data = (char *)0x0;
  }
  if ((local_84.Data != (char *)0x0) && (bVar4)) {
    operator_delete__(local_84.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 00006b72f0 006b72f0_GetPowerUseTitle ====
// decompiled by BatchDecomp @ 006b72f0 name=GetPowerUseTitle conv=__thiscall body=1626

/* WARNING: Removing unreachable block (ram,0x006b7817) */
/* WARNING: Removing unreachable block (ram,0x006b7827) */
/* WARNING: Removing unreachable block (ram,0x006b783a) */
/* WARNING: Removing unreachable block (ram,0x006b7844) */
/* private: class Str_L_char_G_ __thiscall UIShipInfo__GetPowerUseTitle(void)const  */

Str_L_char_G_ * __thiscall
UIShipInfo__GetPowerUseTitle(UIShipInfo *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xfffffeb8;
  undefined4 stack0xfffffffc;
  undefined8 uVar1;
  void *pvVar2;
  _func___cdecl_CraftBlueprint_ptr_void_ptr *p_Var3;
  Str_L_char_G_ SVar4;
  Str_L_char_G_ SVar5;
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
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  CraftBlueprint *pCVar23;
  CraftBlueprint *this_00;
  LocStr *pLVar24;
  Str_L_char_G_ *pSVar25;
  Str_L_char_G_ *pSVar26;
  int unaff_EDI;
  char *pcVar27;
  int iVar28;
  LocStr local_130[24];
  void *local_118[3];
  void *local_10c;
  void *local_100[3];
  void *local_f4;
  Str_L_char_G_ local_e8;
  Str_L_char_G_ local_dc;
  Str_L_char_G_ local_d0;
  Str_L_char_G_ local_c4;
  Str_L_char_G_ local_b8;
  Str_L_char_G_ local_ac;
  Str_L_char_G_ local_a0;
  undefined4 local_94;
  Str_L_char_G_ local_90;
  Str_L_char_G_ local_84;
  Str_L_char_G_ local_78;
  Str_L_char_G_ local_6c;
  Str_L_char_G_ local_60;
  Str_L_char_G_ local_54;
  Str_L_char_G_ local_48;
  Str_L_char_G_ *local_3c;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_94 = 0;
  local_3c = __return_storage_ptr__;
  pvVar2 = (this->Ship).Getter.Callee;
  if ((pvVar2 == (void *)0x0) ||
     (p_Var3 = (this->Ship).Getter.CallbackFunction,
     p_Var3 == (_func___cdecl_CraftBlueprint_ptr_void_ptr *)0x0)) {
    pCVar23 = (this->Ship).Value;
  }
  else {
    pCVar23 = (*p_Var3)(pvVar2);
  }
  if (pCVar23 == (CraftBlueprint *)0x0) {
    pcVar27 = (char *)0x0;
    pSVar25 = &local_14;
    bVar22 = false;
    bVar21 = false;
    bVar20 = true;
    bVar19 = false;
    bVar18 = false;
    bVar17 = false;
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
    local_14.Data = (char *)0x0;
    local_14.Capacity = 0;
    local_14.Length = 0;
  }
  else {
    util__Str_char___Str_char__o5(&local_e8,"GetCraft()->GetTotalPowerGeneration_W()");
    util__Str_char___Str_char__o5(&local_90,"Slash");
    util__Str_char___Str_char__o5(&local_84,"GetCraft()->GetMaxPowerUsage_W()");
    util__Str_char___Str_char__o5(&local_78,"Colon");
    util__Str_char___Str_char__o5(&local_6c,"Power");
    pvVar2 = (this->Ship).Getter.Callee;
    if ((pvVar2 == (void *)0x0) ||
       (p_Var3 = (this->Ship).Getter.CallbackFunction,
       p_Var3 == (_func___cdecl_CraftBlueprint_ptr_void_ptr *)0x0)) {
      pCVar23 = (this->Ship).Value;
    }
    else {
      pCVar23 = (*p_Var3)(pvVar2);
    }
    CraftBlueprint__GetTotalPowerGeneration_W_Memoize(pCVar23);
    if ((char)(pCVar23->GetComposition_MemoizedValue).Data.Size == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    pvVar2 = (this->Ship).Getter.Callee;
    local_60.Data = (char *)0x0;
    local_60.Capacity = 0;
    local_60.Length = 0;
    if ((pvVar2 == (void *)0x0) ||
       (p_Var3 = (this->Ship).Getter.CallbackFunction,
       p_Var3 == (_func___cdecl_CraftBlueprint_ptr_void_ptr *)0x0)) {
      this_00 = (this->Ship).Value;
    }
    else {
      this_00 = (*p_Var3)(pvVar2);
    }
    CraftBlueprint__GetMaxPowerUsage_W_Memoize(this_00);
    if ((char)(this_00->GetAmmoExplosion_MemoizedValue).Data.GasComposition._pad_0x0_0 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    local_54.Data = (char *)0x0;
    local_54.Capacity = 0;
    local_54.Length = 0;
    local_48.Data = (char *)0x0;
    local_48.Capacity = 0;
    local_48.Length = 0;
    pLVar24 = (LocStr *)util__LocStr__LocStr((LocStr *)local_118,&local_78,&local_54);
    pSVar25 = util__LocStr__operator__o3(pLVar24);
    pcVar27 = (char *)0x6b7497;
    pLVar24 = (LocStr *)util__LocStr__LocStr((LocStr *)local_100,&local_6c,&local_48);
    pSVar26 = util__LocStr__operator__o3(pLVar24);
    local_20.Length = 0;
    local_20.Data = (char *)0x0;
    local_20.Capacity = 0;
    util__Str_char___Str_char(&local_20,pSVar26);
    util__Str_char___operator__o10(&local_20,pSVar25);
    pSVar25 = &local_20;
    iVar28 = 0x6b74ce;
    util__Str_char___Str_char(&local_c4,pSVar25);
    if ((Str_L_char_G_ *)local_20.Data != (Str_L_char_G_ *)0x0) {
      iVar28 = 0x6b74db;
      pSVar25 = (Str_L_char_G_ *)local_20.Data;
      operator_delete__(local_20.Data);
      ((slice_view *)&local_20)->_0_8_ = ((slice_view *)&local_20)->_0_8_ & 0xffffffff00000000;
    }
    GetUnitsOfType((Str_L_char_G_ *)&stack0xfffffeb8,&local_84);
    SVar4.Capacity = (int)pSVar25;
    SVar4.Data = (char *)iVar28;
    SVar4.Length = unaff_EDI;
    pSVar25 = Print(&local_d0,
                    (double)CONCAT44(pcVar27,(int)((ulonglong)
                                                   *(undefined8 *)
                                                    &(this_00->GetComposition_MemoizedValue).
                                                     IsValidData >> 0x20)),SVar4);
    local_2c.Length = 0;
    local_2c.Data = (char *)0x0;
    local_2c.Capacity = 0;
    util__Str_char___Str_char(&local_2c,&local_c4);
    util__Str_char___operator__o10(&local_2c,pSVar25);
    util__Str_char___Str_char(&local_b8,&local_2c);
    if (local_2c.Data != (char *)0x0) {
      operator_delete__(local_2c.Data);
      ((slice_view *)&local_2c)->_0_8_ = ((slice_view *)&local_2c)->_0_8_ & 0xffffffff00000000;
    }
    pcVar27 = (char *)0x6b7575;
    pLVar24 = (LocStr *)util__LocStr__LocStr(local_130,&local_90,&local_60);
    pSVar25 = util__LocStr__operator__o3(pLVar24);
    local_38.Length = 0;
    local_38.Data = (char *)0x0;
    local_38.Capacity = 0;
    util__Str_char___Str_char(&local_38,&local_b8);
    util__Str_char___operator__o10(&local_38,pSVar25);
    pSVar25 = &local_38;
    iVar28 = 0x6b75b4;
    util__Str_char___Str_char(&local_ac,pSVar25);
    if ((Str_L_char_G_ *)local_38.Data != (Str_L_char_G_ *)0x0) {
      iVar28 = 0x6b75c1;
      pSVar25 = (Str_L_char_G_ *)local_38.Data;
      operator_delete__(local_38.Data);
      ((slice_view *)&local_38)->_0_8_ = ((slice_view *)&local_38)->_0_8_ & 0xffffffff00000000;
    }
    GetUnitsOfType((Str_L_char_G_ *)&stack0xfffffeb8,&local_e8);
    ((slice_view *)&uVar1)->_0_4_ = (pCVar23->GetComposition_MemoizedValue).Data._pad_0x0_0;
    ((slice_view *)&uVar1)->_4_4_ = (pCVar23->GetComposition_MemoizedValue).Data.Data;
    SVar5.Capacity = (int)pSVar25;
    SVar5.Data = (char *)iVar28;
    SVar5.Length = unaff_EDI;
    pSVar25 = Print(&local_dc,(double)CONCAT44(pcVar27,(int)((ulonglong)uVar1 >> 0x20)),SVar5);
    local_14.Length = 0;
    local_14.Data = (char *)0x0;
    local_14.Capacity = 0;
    util__Str_char___Str_char(&local_14,&local_ac);
    util__Str_char___operator__o10(&local_14,pSVar25);
    util__Str_char___Str_char(&local_a0,&local_14);
    if (local_14.Data != (char *)0x0) {
      operator_delete__(local_14.Data);
    }
    pSVar25 = &local_a0;
    bVar22 = true;
    bVar21 = true;
    bVar20 = false;
    bVar19 = true;
    bVar18 = true;
    bVar17 = true;
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
    pcVar27 = local_14.Data;
    __return_storage_ptr__ = local_3c;
  }
  util__Str_char___Str_char(__return_storage_ptr__,pSVar25);
  if (bVar20) {
    if (pcVar27 != (char *)0x0) {
      operator_delete__(pcVar27);
    }
  }
  if ((bVar21) && (local_a0.Data != (char *)0x0)) {
    operator_delete__(local_a0.Data);
  }
  if ((bVar22) && (local_ac.Data != (char *)0x0)) {
    operator_delete__(local_ac.Data);
  }
  if ((bVar13) && (local_b8.Data != (char *)0x0)) {
    operator_delete__(local_b8.Data);
  }
  if ((bVar14) && (local_c4.Data != (char *)0x0)) {
    operator_delete__(local_c4.Data);
  }
  if (bVar15) {
    if (local_f4 != (void *)0x0) {
      operator_delete__(local_f4);
      local_f4 = (void *)0x0;
    }
    if (local_100[0] != (void *)0x0) {
      operator_delete__(local_100[0]);
      local_100[0] = (void *)0x0;
    }
  }
  if ((bVar16) && (local_48.Data != (char *)0x0)) {
    operator_delete__(local_48.Data);
    local_48.Data = (char *)0x0;
  }
  if (bVar17) {
    if (local_10c != (void *)0x0) {
      operator_delete__(local_10c);
      local_10c = (void *)0x0;
    }
    if (local_118[0] != (void *)0x0) {
      operator_delete__(local_118[0]);
      local_118[0] = (void *)0x0;
    }
  }
  if ((bVar18) && (local_54.Data != (char *)0x0)) {
    operator_delete__(local_54.Data);
    local_54.Data = (char *)0x0;
  }
  if ((bVar19) && (local_d0.Data != (char *)0x0)) {
    operator_delete__(local_d0.Data);
    local_d0.Data = (char *)0x0;
  }
  if ((bVar7) && (local_60.Data != (char *)0x0)) {
    operator_delete__(local_60.Data);
    local_60.Data = (char *)0x0;
  }
  if ((bVar8) && (local_dc.Data != (char *)0x0)) {
    operator_delete__(local_dc.Data);
    local_dc.Data = (char *)0x0;
  }
  if ((bVar9) && (local_6c.Data != (char *)0x0)) {
    operator_delete__(local_6c.Data);
    local_6c.Data = (char *)0x0;
  }
  if ((bVar10) && (local_78.Data != (char *)0x0)) {
    operator_delete__(local_78.Data);
    local_78.Data = (char *)0x0;
  }
  if ((bVar11) && (local_84.Data != (char *)0x0)) {
    operator_delete__(local_84.Data);
    local_84.Data = (char *)0x0;
  }
  if ((bVar12) && (local_90.Data != (char *)0x0)) {
    operator_delete__(local_90.Data);
    local_90.Data = (char *)0x0;
  }
  if ((local_e8.Data != (char *)0x0) && (bVar6)) {
    operator_delete__(local_e8.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 00006f7010 006f7010_GetSelectedBodyNewBodyChoices ====
// decompiled by BatchDecomp @ 006f7010 name=GetSelectedBodyNewBodyChoices conv=__thiscall body=1160

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: class util__Darray<struct util__tuple2_L_class_util__Str_L_char_G__class_util__Darray_L_class____util__Reflectable___G___G > __thiscall LevelEditor__GetSelectedBodyNewBodyChoices(void)const  */

void __thiscall LevelEditor__GetSelectedBodyNewBodyChoices(LevelEditor *this)

{
  undefined4 stack0xfffffffc;
  undefined **ppuVar1;
  undefined4 uVar2;
  ReferenceController *this_00;
  Reflectable *pRVar3;
  undefined *puVar4;
  bool bVar5;
  GameManager *this_01;
  DataParser *pDVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined **ppuVar10;
  Reflectable *pRVar11;
  HWND unaff_ESI;
  Darray_L_struct_CelestialBody_P__G_ *in_stack_00000004;
  int local_64;
  undefined **local_60;
  void *pvStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  int local_50;
  undefined **local_4c;
  void *pvStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  Str_L_char_G_ local_3c;
  undefined1 local_30;
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
  this_01 = (GameManager *)Manager__GetParent(unaff_ESI);
  pDVar6 = GameManager__GetDataManager(this_01);
  local_1c = (undefined **)0x0;
  pvStack_18 = (void *)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  util__Str_char___Str_char__o5(&local_3c,"CelestialBody");
  (**(code **)(*(int *)pDVar6 + 4))(&local_60,&local_3c,0);
  if (local_3c.Data != (char *)0x0) {
    operator_delete__(local_3c.Data);
    local_3c.Data = (char *)0x0;
  }
  local_1c = (undefined **)0x0;
  pvStack_18 = (void *)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  iVar7 = (*(code *)local_60[3])();
  util__Darray_class_Manager____Darray_class_Manager((Darray_L_class_Manager_P_G_ *)&local_1c,iVar7);
  local_c = 0;
  iVar7 = (*(code *)local_60[3])();
  if (local_c < iVar7) {
    do {
      puVar8 = (undefined4 *)(*(code *)*local_60)(&local_c);
      iVar7 = iStack_14;
      uVar2 = *puVar8;
      local_50 = iStack_14 + 1;
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&local_1c,&local_50);
      bVar5 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&local_1c,iVar7);
      if (bVar5) {
        *(undefined4 *)((int)pvStack_18 + iStack_14 * 4 + -4) = uVar2;
      }
      local_c = local_c + 1;
      iVar7 = (*(code *)local_60[3])();
    } while (local_c < iVar7);
  }
  local_60 = ((void *)(0x009199e4u));
  if (pvStack_5c != (void *)0x0) {
    operator_delete__(pvStack_5c);
  }
  local_2c = ((void *)(0x009194a4u));
  pvStack_28 = (void *)0x0;
  uStack_24 = 0;
  uStack_20 = 0;
  bVar5 = WorldObject__IsValid((WorldObject *)(this + 0x80));
  if ((bVar5) && (bVar5 = WorldObject__IsLevelEditorBody((WorldObject *)(this + 0x80)), bVar5)) {
    this_00 = *(ReferenceController **)(this + 0x84);
    iVar7 = *(int *)(this + 0x80);
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_00);
      bVar5 = util__ReferenceController__IsDataStillValid(this_00);
      if (!bVar5) {
        iVar7 = 0;
      }
    }
    local_50 = *(int *)(iVar7 + 0x14);
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(this_00);
    }
    if (local_50 == 0) goto LAB_006f72eb;
    local_3c.Length = (int)&local_50;
    local_60 = (undefined **)0x0;
    pvStack_5c = (void *)0x0;
    iStack_58 = 0;
    uStack_54 = 0;
    iVar7 = (*(code *)local_1c[3])();
    util__Darray_class_Manager____Darray_class_Manager((Darray_L_class_Manager_P_G_ *)&local_60,iVar7);
    local_c = 0;
    iVar7 = (*(code *)local_1c[3])();
    if (local_c < iVar7) {
      do {
        piVar9 = (int *)(*(code *)*local_1c)(&local_c);
        iVar7 = iStack_58;
        if ((*(char *)(*(int *)(uintptr_t)piVar9 + 0xf8) != '\0') &&
           (*(int *)(*(int *)(uintptr_t)piVar9 + 0xa8) == *(int *)local_3c.Length)) {
          local_64 = iStack_58 + 1;
          util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&local_60,&local_64);
          bVar5 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&local_60,iVar7);
          if (bVar5) {
            *(int *)((int)pvStack_5c + iStack_58 * 4 + -4) = *piVar9;
          }
        }
        local_c = local_c + 1;
        iVar7 = (*(code *)local_1c[3])();
      } while (local_c < iVar7);
    }
  }
  else {
    local_30 = 0;
    local_60 = (undefined **)0x0;
    pvStack_5c = (void *)0x0;
    iStack_58 = 0;
    uStack_54 = 0;
    iVar7 = (*(code *)local_1c[3])();
    util__Darray_class_Manager____Darray_class_Manager((Darray_L_class_Manager_P_G_ *)&local_60,iVar7);
    local_c = 0;
    iVar7 = (*(code *)local_1c[3])();
    if (local_c < iVar7) {
      do {
        piVar9 = (int *)(*(code *)*local_1c)(&local_c);
        iVar7 = iStack_58;
        if (*(char *)(*(int *)(uintptr_t)piVar9 + 0xf8) == '\0') {
          local_64 = iStack_58 + 1;
          util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&local_60,&local_64);
          bVar5 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&local_60,iVar7);
          if (bVar5) {
            *(int *)((int)pvStack_5c + iStack_58 * 4 + -4) = *piVar9;
          }
        }
        local_c = local_c + 1;
        iVar7 = (*(code *)local_1c[3])();
      } while (local_c < iVar7);
    }
  }
  util__Darray_class_Module____operator
            ((Darray_L_class_Module_P_G_ *)&local_2c,(Darray_L_class_Module_P_G_ *)&local_60);
  local_60 = ((void *)(0x009194a4u));
  if (pvStack_5c != (void *)0x0) {
    operator_delete__(pvStack_5c);
  }
LAB_006f72eb:
  local_4c = (undefined **)0x0;
  pvStack_48 = (void *)0x0;
  uStack_44 = 0;
  uStack_40 = 0;
  pRVar3 = *(Reflectable **)(*(int *)(this + 4) + 100);
  if (pRVar3 == (Reflectable *)0x0) {
    pRVar11 = (Reflectable *)0x0;
  }
  else {
    bVar5 = Reflectable__GetSelectedBodyNewBodyChoices(pRVar3);
    pRVar11 = (Reflectable *)0x0;
    if (bVar5) {
      pRVar11 = pRVar3;
    }
  }
  util__Darray_bool____Darray_bool((Darray_L_bool_P_G_ *)&local_4c,(Darray_L_bool_P_G_ *)(pRVar11 + 0x20));
  local_3c.Capacity = (int)&local_4c;
  local_60 = (undefined **)0x0;
  pvStack_5c = (void *)0x0;
  iStack_58 = 0;
  uStack_54 = 0;
  local_3c.Length = (int)this;
  iVar7 = (*(code *)local_2c[3])();
  util__Darray_class_Manager____Darray_class_Manager((Darray_L_class_Manager_P_G_ *)&local_60,iVar7);
  local_c = 0;
  iVar7 = (*(code *)local_2c[3])();
  if (local_c < iVar7) {
    do {
      piVar9 = (int *)(*(code *)*local_2c)(&local_c);
      ppuVar10 = *(undefined ***)(local_3c.Capacity + 4);
      puVar4 = (undefined *)*piVar9;
      ppuVar1 = ppuVar10 + (int)*(undefined ***)(local_3c.Capacity + 8);
      for (; ppuVar10 != ppuVar1; ppuVar10 = ppuVar10 + 1) {
        if (*ppuVar10 == puVar4) goto LAB_006f73d8;
      }
      pRVar3 = *(Reflectable **)(*(int *)(local_3c.Length + 4) + 100);
      if (pRVar3 == (Reflectable *)0x0) {
        pRVar11 = (Reflectable *)0x0;
      }
      else {
        bVar5 = Reflectable__GetSelectedBodyNewBodyChoices(pRVar3);
        pRVar11 = (Reflectable *)0x0;
        if (bVar5) {
          pRVar11 = pRVar3;
        }
      }
      iVar7 = iStack_58;
      if (puVar4 != (undefined *)pRVar11[0x1f].Name.Capacity) {
        local_64 = iStack_58 + 1;
        util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&local_60,&local_64);
        bVar5 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&local_60,iVar7);
        if (bVar5) {
          *(int *)((int)pvStack_5c + iStack_58 * 4 + -4) = *piVar9;
        }
      }
LAB_006f73d8:
      local_c = local_c + 1;
      iVar7 = (*(code *)local_2c[3])();
    } while (local_c < iVar7);
  }
  CelestialBody__GetSortedListing(in_stack_00000004);
  local_60 = ((void *)(0x009194a4u));
  if (pvStack_5c != (void *)0x0) {
    operator_delete__(pvStack_5c);
  }
  pvStack_5c = (void *)0x0;
  local_60 = ((void *)(0x00919488u));
  local_4c = ((void *)(0x009194a4u));
  if (pvStack_48 != (void *)0x0) {
    operator_delete__(pvStack_48);
  }
  pvStack_48 = (void *)0x0;
  local_4c = ((void *)(0x00919488u));
  local_2c = ((void *)(0x009194a4u));
  if (pvStack_28 != (void *)0x0) {
    operator_delete__(pvStack_28);
  }
  pvStack_28 = (void *)0x0;
  local_2c = ((void *)(0x00919488u));
  local_1c = ((void *)(0x009194a4u));
  if (pvStack_18 != (void *)0x0) {
    operator_delete__(pvStack_18);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000724fa0 00724fa0_GetFirstStablePossibleOrbit ====
// decompiled by BatchDecomp @ 00724fa0 name=GetFirstStablePossibleOrbit conv=__thiscall body=787

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util__Maybe_L_struct_FixedOrbit_G __thiscall
   CelestialObject__GetFirstStablePossibleOrbit(struct util__PhysicalState_L_struct_util__Vec3_L_double_G______G,double)const  */

FixedOrbit * __thiscall
CelestialObject__GetFirstStablePossibleOrbit(undefined4 param_1,FixedOrbit *param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
          undefined4 param_13,undefined4 param_14,undefined8 param_15)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ReferenceController *this;
  ReferenceController *pRVar7;
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
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined1 local_108[16];
  ReferenceController *local_f8;
  undefined **local_f0;
  void *local_ec;
  undefined **local_a8;
  void *local_a4;
  ReferenceController *local_18;
  ReferenceController *local_14;
  int local_10;
  ReferenceController *pRStack_c;
  ReferenceController *local_8;
  
  bVar3 = false;
  bVar2 = false;
  local_10 = 0;
  pRStack_c = (ReferenceController *)0x0;
util__GetFirstStablePossibleOrbit((SpacecraftComponent *)&local_10);
  FixedOrbit__FixedOrbit(param_2);
  *(undefined1 *)&param_2[1].OrbitedBody.Pointer = 0;
  iVar6 = local_10;
  this = pRStack_c;
  do {
    if (((iVar6 == 0) || (this == (ReferenceController *)0x0)) ||
       (bVar4 = util__ReferenceController__IsDataStillValid(this), !bVar4)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    pRVar7 = this;
    if (!bVar4) break;
    iVar5 = iVar6;
    uVar8 = param_3;
    uVar9 = param_4;
    uVar10 = param_5;
    uVar11 = param_6;
    uVar12 = param_7;
    uVar13 = param_8;
    uVar14 = param_9;
    uVar15 = param_10;
    uVar16 = param_11;
    uVar17 = param_12;
    uVar18 = param_13;
    uVar19 = param_14;
    uVar20 = param_15;
    if (this != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this);
    }
    local_8 = (ReferenceController *)
              FixedOrbit__GenerateFromOrbitalState(local_108,iVar5,pRVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14,
                         uVar15,uVar16,uVar17,uVar18,uVar19,uVar20);
    (param_2->OrbitedBody).Pointer = *(CelestialObject **)((int)local_8 + 8);
    pRStack_c = (ReferenceController *)(param_2->Elements)._pad_0x0_0;
    (param_2->OrbitedBody).Controller = *(ReferenceController **)((int)local_8 + 0xc);
    pRVar7 = *(ReferenceController **)((int)local_8 + 0x10);
    (param_2->Elements)._pad_0x0_0 = (int)pRVar7;
    if (pRVar7 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar7);
    }
    if (pRStack_c != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRStack_c);
    }
    util__Str_char___operator__o8
              ((Str_L_char_G_ *)(char *)&(param_2->Elements) + 0xc,(Str_L_char_G_ *)((int)local_8 + 0x1c));
    (param_2->Elements).SemiMajorAxis_km = *(double *)((int)local_8 + 0x28);
    (param_2->Elements).Eccentricity = *(double *)((int)local_8 + 0x30);
    (param_2->Elements).InclinationToRelativePlane_degrees = *(double *)((int)local_8 + 0x38);
    (param_2->Elements).LongitudeOfAscendingNode_degrees = *(double *)((int)local_8 + 0x40);
    (param_2->Elements).ArgumentOfPeriapsis_degrees = *(double *)((int)local_8 + 0x48);
    (param_2->Elements).MeanAnomaly_degrees = *(double *)((int)local_8 + 0x50);
    uVar20 = *(undefined8 *)((int)local_8 + 0x58);
    (param_2->FixedOrbitMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 = (int)uVar20;
    (param_2->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Data =
         (pmf_e345282a *)(int)((ulonglong)uVar20 >> 0x20);
    util__Darray_class_Module____operator
              ((Darray_L_class_Module_P_G_ *)
               &(param_2->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Size,
               (Darray_L_class_Module_P_G_ *)((int)local_8 + 0x60));
    uVar8 = *(undefined4 *)((int)local_8 + 0x74);
    uVar9 = *(undefined4 *)((int)local_8 + 0x78);
    uVar10 = *(undefined4 *)((int)local_8 + 0x7c);
    *(undefined4 *)&(param_2->GetOrbitalPeriod_s_MemoizedValue).IsValidData =
         *(undefined4 *)((int)local_8 + 0x70);
    *(undefined4 *)((char *)&(param_2->GetOrbitalPeriod_s_MemoizedValue) + 0xc) = uVar8;
    *(undefined4 *)&(param_2->GetFullRotator_MemoizedValue).Data.X = uVar9;
    *(undefined4 *)((int)&(param_2->GetFullRotator_MemoizedValue).Data.X + 4) = uVar10;
    uVar8 = *(undefined4 *)((int)local_8 + 0x84);
    uVar9 = *(undefined4 *)((int)local_8 + 0x88);
    uVar10 = *(undefined4 *)((int)local_8 + 0x8c);
    *(undefined4 *)&(param_2->GetFullRotator_MemoizedValue).Data.Y =
         *(undefined4 *)((int)local_8 + 0x80);
    *(undefined4 *)((int)&(param_2->GetFullRotator_MemoizedValue).Data.Y + 4) = uVar8;
    *(undefined4 *)&(param_2->GetFullRotator_MemoizedValue).Data.Z = uVar9;
    *(undefined4 *)((int)&(param_2->GetFullRotator_MemoizedValue).Data.Z + 4) = uVar10;
    uVar8 = *(undefined4 *)((int)local_8 + 0x94);
    uVar9 = *(undefined4 *)((int)local_8 + 0x98);
    uVar10 = *(undefined4 *)((int)local_8 + 0x9c);
    *(undefined4 *)&(param_2->GetFullRotator_MemoizedValue).Data.W =
         *(undefined4 *)((int)local_8 + 0x90);
    *(undefined4 *)((int)&(param_2->GetFullRotator_MemoizedValue).Data.W + 4) = uVar8;
    *(undefined4 *)&(param_2->GetFullRotator_MemoizedValue).IsValidData = uVar9;
    *(undefined4 *)((char *)&(param_2->GetFullRotator_MemoizedValue) + 0x24) = uVar10;
    (param_2->GetVelocityStateConstant_km__s_MemoizedValue).Data = *(double *)((int)local_8 + 0xa0);
    uVar8 = *(undefined4 *)((int)local_8 + 0xac);
    uVar9 = *(undefined4 *)((int)local_8 + 0xb0);
    uVar10 = *(undefined4 *)((int)local_8 + 0xb4);
    *(undefined4 *)&(param_2->GetVelocityStateConstant_km__s_MemoizedValue).IsValidData =
         *(undefined4 *)((int)local_8 + 0xa8);
    *(undefined4 *)((char *)&(param_2->GetVelocityStateConstant_km__s_MemoizedValue) + 0xc) = uVar8;
    *(undefined4 *)&(param_2->GetEccentricityComplement_MemoizedValue).Data = uVar9;
    *(undefined4 *)((int)&(param_2->GetEccentricityComplement_MemoizedValue).Data + 4) = uVar10;
    uVar8 = *(undefined4 *)((int)local_8 + 0xbc);
    uVar9 = *(undefined4 *)((int)local_8 + 0xc0);
    uVar10 = *(undefined4 *)((int)local_8 + 0xc4);
    *(undefined4 *)&(param_2->GetEccentricityComplement_MemoizedValue).IsValidData =
         *(undefined4 *)((int)local_8 + 0xb8);
    *(undefined4 *)((char *)&(param_2->GetEccentricityComplement_MemoizedValue) + 0xc) = uVar8;
    *(undefined4 *)&(param_2->GetEccentricityPeriapsisRoot_MemoizedValue).Data = uVar9;
    *(undefined4 *)((int)&(param_2->GetEccentricityPeriapsisRoot_MemoizedValue).Data + 4) = uVar10;
    uVar8 = *(undefined4 *)((int)local_8 + 0xcc);
    uVar9 = *(undefined4 *)((int)local_8 + 0xd0);
    uVar10 = *(undefined4 *)((int)local_8 + 0xd4);
    *(undefined4 *)&(param_2->GetEccentricityPeriapsisRoot_MemoizedValue).IsValidData =
         *(undefined4 *)((int)local_8 + 200);
    *(undefined4 *)((char *)&(param_2->GetEccentricityPeriapsisRoot_MemoizedValue) + 0xc) = uVar8;
    *(undefined4 *)&(param_2->GetEccentricityApoapsisRoot_MemoizedValue).Data = uVar9;
    *(undefined4 *)((int)&(param_2->GetEccentricityApoapsisRoot_MemoizedValue).Data + 4) = uVar10;
    uVar8 = *(undefined4 *)((int)local_8 + 0xdc);
    iVar5 = *(int *)((int)local_8 + 0xe0);
    iVar1 = *(int *)((int)local_8 + 0xe4);
    *(undefined4 *)&(param_2->GetEccentricityApoapsisRoot_MemoizedValue).IsValidData =
         *(undefined4 *)((int)local_8 + 0xd8);
    *(undefined4 *)((char *)&(param_2->GetEccentricityApoapsisRoot_MemoizedValue) + 0xc) = uVar8;
    param_2[1]._pad_0x0_0 = iVar5;
    param_2[1]._pad_0x0_0 = iVar1;
    *(undefined1 *)&param_2[1].OrbitedBody.Pointer = *(undefined1 *)((int)local_8 + 0xe8);
    local_a8 = ((void *)(0x009194a4u));
    if (local_a4 != (void *)0x0) {
      operator_delete__(local_a4);
    }
    local_a4 = (void *)0x0;
    local_a8 = ((void *)(0x00919488u));
    local_f0 = ((void *)(0x00919980u));
    if (local_ec != (void *)0x0) {
      operator_delete__(local_ec);
      local_ec = (void *)0x0;
    }
    if (local_f8 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_f8);
    }
    iVar5 = iVar6;
    if ((this != (ReferenceController *)0x0) &&
       (bVar4 = util__ReferenceController__IsDataStillValid(this), !bVar4)) {
      iVar5 = 0;
    }
    if (*(char *)(iVar5 + 0x138) == '\0') {
      bVar2 = true;
      iVar6 = 0;
      local_14 = (ReferenceController *)0x0;
      local_8 = (ReferenceController *)0x0;
    }
    else {
      bVar3 = true;
      iVar6 = *(int *)(iVar5 + 0x5c);
      local_18 = *(ReferenceController **)(iVar5 + 0x60);
      if (local_18 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(local_18);
      }
      local_8 = local_18;
      if (local_18 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(local_18);
      }
    }
    if ((bVar2) && (bVar2 = false, local_14 != (ReferenceController *)0x0)) {
      util__ReferenceController__ReleaseWeakReference(local_14);
    }
    if ((bVar3) && (bVar3 = false, local_18 != (ReferenceController *)0x0)) {
      util__ReferenceController__ReleaseWeakReference(local_18);
    }
    pRVar7 = local_8;
    pRStack_c = this;
    if (local_8 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(local_8);
    }
    if (pRStack_c != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRStack_c);
    }
    if (local_8 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_8);
    }
    this = pRVar7;
  } while (*(char *)&param_2[1].OrbitedBody.Pointer == '\0');
  if (pRVar7 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar7);
  }
  return param_2;
}


//==== 0000730ef0 00730ef0_GetFormationSeparation_km ====
// decompiled by BatchDecomp @ 00730ef0 name=GetFormationSeparation_km conv=__thiscall body=1073

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall Fleet__GetFormationSeparation_km(void)const  */

double __thiscall Fleet__GetFormationSeparation_km(Fleet *this)

{
  undefined4 stack0xfffffffc;
  Body *this_00;
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  CraftBlueprint *pCVar5;
  float10 extraout_ST0;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  undefined **local_3c;
  SharedPtr_L_struct_UIWidget_G_ *local_38;
  double local_2c;
  Darray_L_double_G_ local_24;
  Fleet *local_14;
  char local_10;
  char local_f;
  char local_e;
  char local_d;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_14 = this;
  piVar2 = (int *)GetSpacecrafts(this);
  local_c = 0;
  iVar3 = (**(code **)(*(int *)(uintptr_t)piVar2 + 0xc))();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*piVar2)(&local_c);
      if ((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) {
        bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]);
        if (!bVar1) {
          *puVar4 = 0;
        }
      }
      pCVar5 = SpacecraftComponent__GetCraftDesign((SpacecraftComponent *)*puVar4);
      CraftBlueprint__IsAStation_Memoize(pCVar5);
      if (*(char *)((int)&(pCVar5->GetMainEngineModulePlacers_MemoizedValue).Data._pad_0x0_0 + 3) ==
          '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if (*(char *)((int)&(pCVar5->GetMainEngineModulePlacers_MemoizedValue).Data._pad_0x0_0 + 2) !=
          '\0') {
        local_e = '\x01';
        goto LAB_00730fa3;
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)(uintptr_t)piVar2 + 0xc))();
    } while (local_c < iVar3);
  }
  local_e = '\0';
LAB_00730fa3:
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_24);
  piVar2 = (int *)GetSpacecrafts(local_14);
  local_c = 0;
  iVar3 = (**(code **)(*(int *)(uintptr_t)piVar2 + 0xc))();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*piVar2)(&local_c);
      if ((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) {
        bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]);
        if (!bVar1) {
          *puVar4 = 0;
        }
      }
      pCVar5 = SpacecraftComponent__GetCraftDesign((SpacecraftComponent *)*puVar4);
      CraftBlueprint__IsACapitalShip_Memoize(pCVar5);
      if (*(char *)((int)&(pCVar5->GetMainEngineModulePlacers_MemoizedValue).Data.Data + 1) == '\0')
      {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if (*(char *)&(pCVar5->GetMainEngineModulePlacers_MemoizedValue).Data.Data != '\0') {
        local_d = '\x01';
        goto LAB_00731043;
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)(uintptr_t)piVar2 + 0xc))();
    } while (local_c < iVar3);
  }
  local_d = '\0';
LAB_00731043:
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_24);
  piVar2 = (int *)GetSpacecrafts(local_14);
  local_c = 0;
  iVar3 = (**(code **)(*(int *)(uintptr_t)piVar2 + 0xc))();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*piVar2)(&local_c);
      if ((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) {
        bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]);
        if (!bVar1) {
          *puVar4 = 0;
        }
      }
      pCVar5 = SpacecraftComponent__GetCraftDesign((SpacecraftComponent *)*puVar4);
      CraftBlueprint__IsADrone_Memoize(pCVar5);
      if (*(char *)((int)&(pCVar5->GetMainEngineModulePlacers_MemoizedValue).Data.Capacity + 1) ==
          '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if ((char)(pCVar5->GetMainEngineModulePlacers_MemoizedValue).Data.Capacity != '\0') {
        local_f = '\x01';
        goto LAB_007310e3;
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)(uintptr_t)piVar2 + 0xc))();
    } while (local_c < iVar3);
  }
  local_f = '\0';
LAB_007310e3:
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_24);
  piVar2 = (int *)GetSpacecrafts(local_14);
  local_c = 0;
  iVar3 = (**(code **)(*(int *)(uintptr_t)piVar2 + 0xc))();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*piVar2)(&local_c);
      if ((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) {
        bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]);
        if (!bVar1) {
          *puVar4 = 0;
        }
      }
      pCVar5 = SpacecraftComponent__GetCraftDesign((SpacecraftComponent *)*puVar4);
      CraftBlueprint__IsAMissile_Memoize(pCVar5);
      if (*(char *)((int)&(pCVar5->GetMainEngineModulePlacers_MemoizedValue).Data.Size + 3) == '\0')
      {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if (*(char *)((int)&(pCVar5->GetMainEngineModulePlacers_MemoizedValue).Data.Size + 2) != '\0')
      {
        local_10 = '\x01';
        goto LAB_0073117f;
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*(int *)(uintptr_t)piVar2 + 0xc))();
    } while (local_c < iVar3);
  }
  local_10 = '\0';
LAB_0073117f:
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_24);
  if ((local_d == '\0') && (local_e == '\0')) {
    if (local_f == '\0') {
      if (local_10 == '\0') {
        uVar6 = (undefined4)/*3f9999999999999a*/0.025;
        uVar7 = (undefined4)((ulonglong)/*3f9999999999999a*/0.025 >> 0x20);
      }
      else {
        uVar6 = (undefined4)/*3fd0000000000000*/0.25;
        uVar7 = (undefined4)((ulonglong)/*3fd0000000000000*/0.25 >> 0x20);
      }
    }
    else {
      uVar6 = (undefined4)/*3fb999999999999a*/0.1;
      uVar7 = (undefined4)((ulonglong)/*3fb999999999999a*/0.1 >> 0x20);
    }
  }
  else {
    uVar6 = (undefined4)/*3fa999999999999a*/0.05;
    uVar7 = (undefined4)((ulonglong)/*3fa999999999999a*/0.05 >> 0x20);
  }
  local_2c = (double)CONCAT44(uVar7,uVar6);
  util__Darray_class_util__SharedPtr_class_Body_____Darray_class_util__SharedPtr_class_Body((Darray_L_class_util__SharedPtr_L_class_Body_G___G_ *)&local_3c,
             (Darray_L_class_util__SharedPtr_L_class_Body_G___G_ *)
             &local_14[1].Location.OrbitParameters.Data.GetEccentricityPeriapsisRoot_MemoizedValue.
              IsValidData);
  local_24._pad_0x0_0 = 0;
  local_24.Data = (double *)0x0;
  local_24.Size = 0;
  local_24.Capacity = 0;
  iVar3 = (*(code *)local_3c[3])();
  util__Darray_double___Darray_double(&local_24,iVar3);
  local_c = 0;
  iVar3 = (*(code *)local_3c[3])();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(*(code *)*local_3c)(&local_c);
      this_00 = (Body *)*puVar4;
      Body__GetBoundingCylinder_km_Memoize(this_00);
      if ((this_00->GetBoundingCylinder_km_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      iVar3 = local_24.Size;
      dVar8 = (this_00->GetBoundingCylinder_km_MemoizedValue).Data.Radius;
      local_14 = (Fleet *)(local_24.Size + 1);
      util__Darray_double___SetSize(&local_24,(int *)&local_14);
      bVar1 = util__Darray_double___CheckSize(&local_24,iVar3);
      if (bVar1) {
        local_24.Data[local_24.Size + -1] = dVar8;
      }
      local_c = local_c + 1;
      iVar3 = (*(code *)local_3c[3])();
    } while (local_c < iVar3);
  }
  dVar8 = util__GetFormationSeparation_km(&local_24);
  local_24._pad_0x0_0 = (int)((void *)(0x0091da54u));
  if (local_24.Data != (double *)0x0) {
    operator_delete__(local_24.Data);
  }
  local_3c = ((void *)(0x0091d1bcu));
  local_2c = dVar8 * /*4014000000000000*/5.0 + local_2c;
  if (local_38 != (SharedPtr_L_struct_UIWidget_G_ *)0x0) {
    util__SharedPtr_struct_UIWidget____vector_deleting_destructor(local_38,3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00007515f0 007515f0_IsApproachingCoplanarNode ====
extern undefined4 FUN_0074c890(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007515f0 name=IsApproachingCoplanarNode conv=__thiscall body=809

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall StrategicAI__IsApproachingCoplanarNode(class util__WeakPtr_L_class____Fleet_G,struct FixedOrbit,double,double,double)const  */

bool __thiscall
StrategicAI__IsApproachingCoplanarNode(StrategicAI *this,Fleet *param_2,ReferenceController *param_3)

{
  undefined4 stack0x0000000c;
  undefined4 stack0xfffffffc;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  FixedOrbit *pFVar8;
  PhysicalState_L_struct_util__Vec3_L_double_G___G_ *pPVar9;
  double dVar10;
  ReferenceController *in_stack_00000018;
  ReferenceController *in_stack_0000001c;
  undefined **in_stack_00000024;
  void *in_stack_00000028;
  undefined **in_stack_0000006c;
  void *in_stack_00000070;
  double in_stack_000000f4;
  double in_stack_000000fc;
  double in_stack_00000104;
  Fleet *pFVar11;
  ReferenceController *pRVar12;
  FixedOrbit FStack_288;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined1 local_148[28];
  void *local_12c;
  undefined **local_e8;
  void *local_e4;
  char local_60;
  Maybe_L_struct_util__PhysicalState_L_struct_util__Vec3_L_double_G___G___G_ local_58[48];
  char local_28;
  double local_20;
  double local_18;
  double local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  FixedOrbit__FixedOrbit(&FStack_288,(FixedOrbit *)&stack0x0000000c);
  pFVar11 = param_2;
  pRVar12 = param_3;
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_3);
  }
  bVar5 = IsCoplanar(this,pFVar11,pRVar12);
  if (bVar5) {
    uVar7 = 0;
    goto LAB_007518aa;
  }
  if ((param_3 != (ReferenceController *)0x0) &&
     (bVar5 = util__ReferenceController__IsDataStillValid(param_3), !bVar5)) {
    param_2 = (Fleet *)0x0;
  }
  pFVar8 = (FixedOrbit *)Fleet__GetOrbitParameters(param_2);
  FixedOrbit__FixedOrbit((FixedOrbit *)local_148,pFVar8);
  local_60 = *(char *)&pFVar8[1].OrbitedBody.Pointer;
  if (((local_60 == '\0') || (in_stack_0000001c != (ReferenceController *)((slice_view *)&local_148)->_16_4_)) ||
     (in_stack_00000018 != (ReferenceController *)((slice_view *)&local_148)->_12_4_)) {
LAB_00751841:
    uVar7 = 0;
  }
  else {
    if (local_60 == '\0') {
      uStack_1a4 = 0x7516dc;
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    FixedOrbit__GetPointsToMatchPlane((FixedOrbit *)&stack0x0000000c,(FixedOrbit *)local_58);
    if (local_28 == '\0') goto LAB_00751841;
    pPVar9 = util__Maybe_struct_util__PhysicalState_struct_util__Vec3_double_______operator
                       (local_58);
    uVar1 = *(undefined4 *)pPVar9;
    uVar2 = *(undefined4 *)(pPVar9 + 4);
    pPVar9 = util__Maybe_struct_util__PhysicalState_struct_util__Vec3_double_______operator
                       (local_58);
    uVar3 = *(undefined4 *)(pPVar9 + 0x18);
    uVar4 = *(undefined4 *)(pPVar9 + 0x1c);
    pFVar8 = util_Maybe_struct_FixedOrbit_operator((Maybe_L_struct_FixedOrbit_G_ *)local_148);
    dVar10 = FixedOrbit__GetMeanMotion__s(pFVar8);
    local_10 = /*400921fb54442d18*/3.141592653589793;
    if (dVar10 * in_stack_00000104 <= /*400921fb54442d18*/3.141592653589793) {
      local_10 = dVar10 * in_stack_00000104;
    }
    dVar10 = in_stack_000000f4;
    pFVar8 = util_Maybe_struct_FixedOrbit_operator((Maybe_L_struct_FixedOrbit_G_ *)local_148);
    local_18 = FixedOrbit__GetMeanAnomaly_radians(pFVar8,dVar10);
    dVar10 = in_stack_000000f4 + in_stack_000000fc;
    pFVar8 = util_Maybe_struct_FixedOrbit_operator((Maybe_L_struct_FixedOrbit_G_ *)local_148);
    local_20 = FixedOrbit__GetMeanAnomaly_radians(pFVar8,dVar10);
    ((slice_view *)&FStack_288.GetEccentricityApoapsisRoot_MemoizedValue)->_12_4_ = 0x75180e;
    local_1a8 = uVar1;
    uStack_1a4 = uVar2;
    cVar6 = FUN_0074c890();
    if (cVar6 == '\0') {
      ((slice_view *)&FStack_288.GetEccentricityApoapsisRoot_MemoizedValue)->_12_4_ = 0x751839;
      local_1a8 = uVar3;
      uStack_1a4 = uVar4;
      cVar6 = FUN_0074c890();
      if (cVar6 == '\0') goto LAB_00751841;
    }
    uVar7 = 1;
  }
  local_e8 = ((void *)(0x009194a4u));
  if (local_e4 != (void *)0x0) {
    operator_delete__(local_e4);
  }
  local_e4 = (void *)0x0;
  local_e8 = ((void *)(0x00919488u));
  ((slice_view *)&local_148)->_24_4_ = ((void *)(0x00919980u));
  if (local_12c != (void *)0x0) {
    operator_delete__(local_12c);
    local_12c = (void *)0x0;
  }
  if ((ReferenceController *)((slice_view *)&local_148)->_16_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)((slice_view *)&local_148)->_16_4_);
  }
LAB_007518aa:
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
  return (bool)uVar7;
}


//==== 0000786630 00786630_GetDraggerName ====
// decompiled by BatchDecomp @ 00786630 name=GetDraggerName conv=__thiscall body=1301

/* WARNING: Removing unreachable block (ram,0x007869f9) */
/* WARNING: Removing unreachable block (ram,0x00786a09) */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: class Str_L_char_G_ __thiscall HUDItineraryNodeDragger__GetDraggerName(void)const  */

Str_L_char_G_ * __thiscall
HUDItineraryNodeDragger__GetDraggerName(HUDItineraryNodeDragger *this,Str_L_char_G_ *__return_storage_ptr__)

{
  Axis AVar1;
  bool bVar2;
  bool bVar3;
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
  bool bVar17;
  bool bVar18;
  bool bVar19;
  LocStr *pLVar20;
  Str_L_char_G_ *pSVar21;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ *this_01;
  bool bVar22;
  void *local_128[3];
  void *local_11c;
  void *local_110[3];
  void *local_104;
  void *local_f8[3];
  void *local_ec;
  void *local_e0[3];
  void *local_d4;
  Str_L_char_G_ local_c8;
  Str_L_char_G_ local_bc;
  Str_L_char_G_ local_b0;
  Str_L_char_G_ local_a4;
  Str_L_char_G_ local_98;
  Str_L_char_G_ local_8c;
  Str_L_char_G_ local_80;
  Str_L_char_G_ local_74;
  undefined4 local_68;
  Str_L_char_G_ local_64;
  Str_L_char_G_ local_58;
  Str_L_char_G_ local_4c;
  Str_L_char_G_ local_40;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  AVar1 = this->AxisType;
  local_68 = 0;
  if (AVar1 == Temporal) {
    util__Str_char___Str_char__o5(&local_c8,"ItineraryDragger Temporal Tooltip");
    local_34.Data = (char *)0x0;
    local_34.Capacity = 0;
    local_34.Length = 0;
    this_01 = &local_bc;
    pLVar20 = (LocStr *)util__LocStr__LocStr((LocStr *)local_128,&local_c8,&local_34);
    pSVar21 = util__LocStr__operator__o3(pLVar20);
    bVar19 = false;
    bVar22 = false;
    bVar18 = false;
    bVar17 = false;
    bVar16 = false;
    bVar15 = false;
    bVar14 = false;
    bVar13 = false;
    bVar12 = false;
    bVar11 = false;
    bVar10 = false;
    bVar9 = false;
    bVar8 = true;
    bVar7 = true;
    bVar6 = true;
    bVar5 = false;
    bVar4 = false;
    bVar3 = false;
    bVar2 = true;
  }
  else {
    if (AVar1 == Tangential) {
      util__Str_char___Str_char__o5(&local_64,"ItineraryDragger Tangential Tooltip");
      local_28.Data = (char *)0x0;
      local_28.Capacity = 0;
      local_28.Length = 0;
      this_00 = &local_b0;
      pLVar20 = (LocStr *)util__LocStr__LocStr((LocStr *)local_110,&local_64,&local_28);
      pSVar21 = util__LocStr__operator__o3(pLVar20);
      bVar19 = false;
      bVar22 = false;
      bVar18 = false;
      bVar17 = false;
      bVar15 = false;
      bVar14 = false;
      bVar13 = false;
      bVar12 = false;
      bVar11 = false;
      bVar10 = false;
      bVar9 = false;
      bVar5 = true;
      bVar4 = true;
      bVar3 = true;
    }
    else {
      if (AVar1 == Perpendicular) {
        util__Str_char___Str_char__o5(&local_58,"ItineraryDragger OutOfPlane Tooltip");
        local_1c.Data = (char *)0x0;
        local_1c.Capacity = 0;
        local_1c.Length = 0;
        pLVar20 = (LocStr *)util__LocStr__LocStr((LocStr *)local_f8,&local_58,&local_1c);
        pSVar21 = util__LocStr__operator__o3(pLVar20);
        pSVar21 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_a4,pSVar21);
        bVar19 = false;
        bVar22 = false;
        bVar18 = false;
        bVar15 = true;
        bVar14 = true;
        bVar13 = true;
        bVar12 = true;
        bVar11 = false;
        bVar10 = false;
        bVar9 = false;
      }
      else {
        bVar22 = AVar1 != Radial;
        if (bVar22) {
          local_40.Data = (char *)0x0;
          pSVar21 = &local_40;
          local_40.Capacity = 0;
          local_40.Length = 0;
        }
        else {
          util__Str_char___Str_char__o5(&local_4c,"ItineraryDragger Radial Tooltip");
          local_10.Data = (char *)0x0;
          local_10.Capacity = 0;
          local_10.Length = 0;
          pLVar20 = (LocStr *)util__LocStr__LocStr((LocStr *)local_e0,&local_4c,&local_10);
          pSVar21 = util__LocStr__operator__o3(pLVar20);
          pSVar21 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_98,pSVar21);
        }
        bVar19 = !bVar22;
        bVar18 = true;
        bVar15 = false;
        bVar14 = false;
        bVar13 = false;
        bVar12 = false;
        bVar11 = !bVar22;
        bVar10 = !bVar22;
        bVar9 = !bVar22;
        pSVar21 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_8c,pSVar21);
      }
      this_00 = &local_80;
      bVar17 = true;
      bVar5 = false;
      bVar4 = false;
      bVar3 = false;
    }
    bVar16 = true;
    bVar8 = false;
    bVar7 = false;
    bVar6 = false;
    bVar2 = false;
    this_01 = &local_74;
    pSVar21 = (Str_L_char_G_ *)util__Str_char___Str_char(this_00,pSVar21);
  }
  pSVar21 = (Str_L_char_G_ *)util__Str_char___Str_char(this_01,pSVar21);
  util__Str_char___Str_char(__return_storage_ptr__,pSVar21);
  if (bVar16) {
    if (local_74.Data != (char *)0x0) {
      operator_delete__(local_74.Data);
      local_74.Data = (char *)0x0;
    }
  }
  if (bVar17) {
    if (local_80.Data != (char *)0x0) {
      operator_delete__(local_80.Data);
      local_80.Data = (char *)0x0;
    }
  }
  if (bVar18) {
    if (local_8c.Data != (char *)0x0) {
      operator_delete__(local_8c.Data);
      local_8c.Data = (char *)0x0;
    }
  }
  if ((bVar22) && (local_40.Data != (char *)0x0)) {
    operator_delete__(local_40.Data);
  }
  if ((bVar19) && (local_98.Data != (char *)0x0)) {
    operator_delete__(local_98.Data);
    local_98.Data = (char *)0x0;
  }
  if (bVar9) {
    if (local_d4 != (void *)0x0) {
      operator_delete__(local_d4);
      local_d4 = (void *)0x0;
    }
    if (local_e0[0] != (void *)0x0) {
      operator_delete__(local_e0[0]);
      local_e0[0] = (void *)0x0;
    }
  }
  if ((bVar10) && (local_10.Data != (char *)0x0)) {
    operator_delete__(local_10.Data);
    local_10.Data = (char *)0x0;
  }
  if ((bVar11) && (local_4c.Data != (char *)0x0)) {
    operator_delete__(local_4c.Data);
    local_4c.Data = (char *)0x0;
  }
  if ((bVar12) && (local_a4.Data != (char *)0x0)) {
    operator_delete__(local_a4.Data);
    local_a4.Data = (char *)0x0;
  }
  if (bVar13) {
    if (local_ec != (void *)0x0) {
      operator_delete__(local_ec);
      local_ec = (void *)0x0;
    }
    if (local_f8[0] != (void *)0x0) {
      operator_delete__(local_f8[0]);
      local_f8[0] = (void *)0x0;
    }
  }
  if ((bVar14) && (local_1c.Data != (char *)0x0)) {
    operator_delete__(local_1c.Data);
    local_1c.Data = (char *)0x0;
  }
  if ((bVar15) && (local_58.Data != (char *)0x0)) {
    operator_delete__(local_58.Data);
    local_58.Data = (char *)0x0;
  }
  if (bVar3) {
    if (local_104 != (void *)0x0) {
      operator_delete__(local_104);
      local_104 = (void *)0x0;
    }
    if (local_110[0] != (void *)0x0) {
      operator_delete__(local_110[0]);
      local_110[0] = (void *)0x0;
    }
  }
  if ((bVar4) && (local_28.Data != (char *)0x0)) {
    operator_delete__(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if ((bVar5) && (local_64.Data != (char *)0x0)) {
    operator_delete__(local_64.Data);
    local_64.Data = (char *)0x0;
  }
  if ((bVar6) && (local_bc.Data != (char *)0x0)) {
    operator_delete__(local_bc.Data);
    local_bc.Data = (char *)0x0;
  }
  if (bVar7) {
    if (local_11c != (void *)0x0) {
      operator_delete__(local_11c);
      local_11c = (void *)0x0;
    }
    if (local_128[0] != (void *)0x0) {
      operator_delete__(local_128[0]);
      local_128[0] = (void *)0x0;
    }
  }
  if ((bVar8) && (local_34.Data != (char *)0x0)) {
    operator_delete__(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if ((local_c8.Data != (char *)0x0) && (bVar2)) {
    operator_delete__(local_c8.Data);
  }
  return __return_storage_ptr__;
}


//==== 00007d1970 007d1970_GetNearestFutureCollision ====
extern undefined4 FUN_007c7720(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_007cad00(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007d1970 name=GetNearestFutureCollision conv=__thiscall body=1052

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util__WeakPtr_L_class_Body_G __thiscall
   SpacecraftComponent__GetNearestFutureCollision(bool)const  */

void __thiscall
SpacecraftComponent__GetNearestFutureCollision(SpacecraftComponent *this,bool param_1)

{
  undefined4 stack0x00000008;
  undefined4 stack0xfffffffc;
  Body *this_00;
  ReferenceController *pRVar1;
  ReferenceController *pRVar2;
  bool bVar3;
  TacticalManager *pTVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined3 in_stack_00000005;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_c4[16];
  undefined4 local_b4;
  ReferenceController *local_b0;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_ac[8];
  char local_a4;
  undefined4 local_9c;
  int iStack_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 *local_8c;
  SpacecraftComponent *local_88;
  int local_84;
  undefined4 *puStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  int local_74;
  Line3_L_double_G_ local_70;
  double local_40;
  SpacecraftComponent *local_38;
  undefined1 *local_34;
  SpacecraftComponent *local_30;
  ReferenceController *pRStack_2c;
  char local_28;
  undefined1 local_24;
  undefined4 local_20;
  int iStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_8c = _param_1;
  local_88 = this;
  if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
     !bVar3)) {
    this->_pad_0x0_0 = 0;
  }
  Body__GetTrajectoryLine_km((Body *)this->_pad_0x0_0,&local_70);
  if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
     !bVar3)) {
    this->_pad_0x0_0 = 0;
  }
  this_00 = (Body *)this->_pad_0x0_0;
  Body__GetRadius_km_Memoize(this_00);
  if ((this_00->GetRadius_km_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_40 = (this_00->GetRadius_km_MemoizedValue).Data;
  local_24 = 0;
  local_20 = 0;
  iStack_1c = 0;
  iStack_18 = 0;
  uStack_14 = 0;
  pTVar4 = Component__GetManager((Component *)this);
  piVar5 = (int *)TacticalManager__GetDebrisComponents(pTVar4);
  local_84 = 0;
  puStack_80 = (undefined4 *)0x0;
  iStack_7c = 0;
  uStack_78 = 0;
  iVar6 = (**(code **)(*(int *)(uintptr_t)piVar5 + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_84,iVar6);
  local_10 = 0;
  iVar6 = (**(code **)(*(int *)(uintptr_t)piVar5 + 0xc))();
  if (local_10 < iVar6) {
    do {
      piVar7 = (int *)(**(code **)*piVar5)(&local_10);
      if (((ReferenceController *)piVar7[1] != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar7[1]),
         !bVar3)) {
        *piVar7 = 0;
      }
      pRVar1 = *(ReferenceController **)(*piVar7 + 8);
      local_74 = *(int *)(*piVar7 + 4);
      if (pRVar1 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar1);
        util__ReferenceController__AddWeakReference(pRVar1);
        util__ReferenceController__ReleaseWeakReference(pRVar1);
      }
      iVar6 = iStack_7c;
      local_c = iStack_7c + 1;
      util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_84,&local_c);
      bVar3 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_84,iVar6);
      if (bVar3) {
        pRVar2 = (ReferenceController *)puStack_80[iStack_7c * 2 + -1];
        puStack_80[iStack_7c * 2 + -2] = local_74;
        puStack_80[iStack_7c * 2 + -1] = pRVar1;
        if (pRVar1 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar1);
        }
        if (pRVar2 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar2);
        }
      }
      if (pRVar1 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(pRVar1);
      }
      local_10 = local_10 + 1;
      iVar6 = (**(code **)(*(int *)(uintptr_t)piVar5 + 0xc))();
      this = local_88;
    } while (local_10 < iVar6);
  }
  local_34 = &stack0x00000008;
  local_38 = this;
  pTVar4 = Component__GetManager((Component *)this);
  piVar5 = (int *)TacticalManager__GetSpacecraftComponents(pTVar4);
  local_9c = 0;
  iStack_98 = 0;
  iStack_94 = 0;
  uStack_90 = 0;
  iVar6 = (**(code **)(*(int *)(uintptr_t)piVar5 + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_9c,iVar6);
  local_c = 0;
  iVar6 = (**(code **)(*(int *)(uintptr_t)piVar5 + 0xc))();
  if (local_c < iVar6) {
    do {
      uVar8 = (**(code **)*piVar5)(&local_c);
      FUN_007cad00(&local_30,uVar8);
      pRVar1 = pRStack_2c;
      iVar6 = iStack_94;
      if (local_28 != '\0') {
        local_74 = iStack_94 + 1;
        util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_9c,&local_74);
        bVar3 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_9c,iVar6);
        if (bVar3) {
          pRVar2 = *(ReferenceController **)(iStack_98 + -4 + iStack_94 * 8);
          *(SpacecraftComponent **)(iStack_98 + -8 + iStack_94 * 8) = local_30;
          *(ReferenceController **)(iStack_98 + -4 + iStack_94 * 8) = pRVar1;
          if (pRVar1 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(pRVar1);
          }
          if (pRVar2 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar2);
          }
        }
      }
      if (pRVar1 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(pRVar1);
      }
      local_c = local_c + 1;
      iVar6 = (**(code **)(*(int *)(uintptr_t)piVar5 + 0xc))();
    } while (local_c < iVar6);
  }
  local_20 = 0;
  iStack_1c = 0;
  iStack_18 = 0;
  uStack_14 = 0;
  util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment((Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_20,
             (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_9c);
  if (iStack_18 == 0) {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_20,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_84);
  }
  else {
    iVar9 = (**(code **)(local_84 + 0xc))();
    iVar6 = iStack_18;
    if (iVar9 != 0) {
      local_74 = (**(code **)(local_84 + 0xc))();
      local_74 = local_74 + iStack_18;
      util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_20,&local_74);
      util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_20,iVar6);
      puVar10 = (undefined4 *)(iStack_1c + iVar6 * 8);
      puVar11 = puStack_80;
      if (puVar10 != (undefined4 *)(iStack_1c + iStack_18 * 8)) {
        do {
          pRVar1 = (ReferenceController *)puVar10[1];
          *puVar10 = *puVar11;
          pRVar2 = (ReferenceController *)puVar11[1];
          puVar10[1] = pRVar2;
          if (pRVar2 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(pRVar2);
          }
          if (pRVar1 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar1);
          }
          puVar10 = puVar10 + 2;
          puVar11 = puVar11 + 2;
        } while (puVar10 != (undefined4 *)(iStack_1c + iStack_18 * 8));
      }
    }
  }
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_9c);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_c4);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_84);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_ac);
  if (0 < iStack_18) {
    local_30 = local_88;
    pRStack_2c = (ReferenceController *)&local_40;
    FUN_007c7720(&local_b4,&local_20,CONCAT44(pRStack_2c,local_88),&local_70);
    if (local_a4 != '\0') {
      *local_8c = local_b4;
      local_8c[1] = local_b0;
      if (local_b0 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(local_b0);
        util__ReferenceController__ReleaseWeakReference(local_b0);
      }
      goto LAB_007d1d6f;
    }
    if (local_b0 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_b0);
    }
  }
  *local_8c = 0;
  local_8c[1] = 0;
LAB_007d1d6f:
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_20);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000803ea0 00803ea0_SelectStartingShips ====
extern undefined4 FUN_007dd260(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_007f47c0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_007f4930(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_007f4c10(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_007f5060(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00803ea0 name=SelectStartingShips conv=__thiscall body=1487

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: void __thiscall TacticalManager__SelectStartingShips(void) */

void __thiscall TacticalManager__SelectStartingShips(TacticalManager *this)

{
  undefined4 stack0xfffffffc;
  Maybe_L_util__Darray_L_util__WeakPtr_L_Body_G___G___G_ *this_00;
  ReferenceController *pRVar1;
  ReferenceController *pRVar2;
  bool bVar3;
  WeakPtr_L_class_Body_G_ *pWVar4;
  bool bVar5;
  ActorHandler *pAVar6;
  int iVar7;
  int *piVar8;
  TacticalManager *pTVar9;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar10;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *pDVar11;
  TacticalManager *pTVar12;
  WeakPtr_L_class_Body_G_ local_a8[4];
  ReferenceController *local_a4[3];
  char local_98;
  bool local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  TacticalManager *local_80;
  char local_79;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_58[4];
  undefined4 local_54;
  WeakPtr_L_class_Body_G_ *pWStack_50;
  int iStack_4c;
  undefined8 uStack_48;
  undefined **local_44;
  SharedPtr_L_struct_UIWidget_G_ *pSStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined **local_24;
  SharedPtr_L_struct_UIWidget_G_ *pSStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  TacticalManager *local_14;
  int local_10;
  TacticalManager *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_34 = 0;
  iStack_30 = 0;
  iStack_2c = 0;
  uStack_28 = 0;
  local_80 = this;
  if ((this->GetAllBodies_MemoizedValue).IsValidData == false) {
    iVar7 = (this->TacticalManagerMemoizationHandlerInstance).ResetFunctions.Size;
    local_10 = iVar7 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->TacticalManagerMemoizationHandlerInstance,
               &local_10);
    bVar5 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->TacticalManagerMemoizationHandlerInstance,iVar7);
    if (bVar5) {
      (this->TacticalManagerMemoizationHandlerInstance).ResetFunctions.Data
      [(this->TacticalManagerMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_f910390b, TacticalManager__GetAllBodies_Clear);
    }
    pAVar6 = (ActorHandler *)
             util__Darray_enum_CrewDepartment__Type___Num((Darray_L_enum_CrewDepartment__Type_G_ *)this)
    ;
    ActorHandler__GetAllActors(pAVar6);
    local_24 = (undefined **)0x0;
    pSStack_20 = (SharedPtr_L_struct_UIWidget_G_ *)0x0;
    uStack_1c = 0;
    uStack_18 = 0;
    iVar7 = (*(code *)local_44[3])();
    util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_24,iVar7);
    FUN_007f5060(&local_44,this,&local_24);
    local_44 = ((void *)(0x0091d1bcu));
    if (pSStack_40 != (SharedPtr_L_struct_UIWidget_G_ *)0x0) {
      util__SharedPtr_struct_UIWidget____vector_deleting_destructor(pSStack_40,3);
    }
    pSStack_40 = (SharedPtr_L_struct_UIWidget_G_ *)0x0;
    local_44 = ((void *)(0x00919488u));
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_58,(Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_24);
    ((slice_view *)&uStack_48)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_48)->_1_3_[0] | (((slice_view *)&uStack_48)->_1_3_[1] << 8) | (((slice_view *)&uStack_48)->_1_3_[2] << 16)) << 8));
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetAllBodies_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_58);
    (this->GetAllBodies_MemoizedValue).IsValidData = ((slice_view *)&uStack_48)->_0_1_;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_58);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_24);
  }
  this_00 = &this->GetAllBodies_MemoizedValue;
  if ((this->GetAllBodies_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_34 = 0;
  iStack_30 = 0;
  iStack_2c = 0;
  uStack_28 = 0;
  local_14 = this;
  iVar7 = (**(code **)(*(int *)&this_00->Data + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_34,iVar7);
  local_10 = 0;
  iVar7 = (**(code **)(*(int *)&this_00->Data + 0xc))();
  pTVar9 = this;
  if (local_10 < iVar7) {
    do {
      piVar8 = (int *)(**(code **)*(int *)&this_00->Data)(&local_10);
      if (((ReferenceController *)piVar8[1] != (ReferenceController *)0x0) &&
         (bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar8[1]),
         !bVar5)) {
        *piVar8 = 0;
      }
      pTVar9 = local_14;
      local_c = *(TacticalManager **)(*(int *)(uintptr_t)piVar8 + 0x1e0);
      TacticalManager_GetStrategicGame_Memoize(local_14);
      if (*(char *)&(pTVar9->Effects).Controller == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      pTVar9 = (TacticalManager *)
               StrategicManager__GetPlayerAlliance((StrategicManager *)(pTVar9->Effects).Pointer);
      iVar7 = iStack_2c;
      if (local_c == pTVar9) {
        local_c = (TacticalManager *)(iStack_2c + 1);
        util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_34,(int *)&local_c);
        bVar5 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_34,iVar7);
        if (bVar5) {
          pRVar1 = *(ReferenceController **)(iStack_30 + -4 + iStack_2c * 8);
          iVar7 = iStack_30 + iStack_2c * 8;
          *(int *)(iVar7 + -8) = *piVar8;
          pRVar2 = (ReferenceController *)piVar8[1];
          *(ReferenceController **)(iVar7 + -4) = pRVar2;
          if (pRVar2 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(pRVar2);
          }
          if (pRVar1 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar1);
          }
        }
      }
      local_10 = local_10 + 1;
      iVar7 = (**(code **)(*(int *)&this_00->Data + 0xc))();
      pTVar9 = local_80;
    } while (local_10 < iVar7);
  }
  local_79 = '\x01';
  if (1 < iStack_2c) {
    local_c = (TacticalManager *)((uint)local_c & 0xffffff00);
    FUN_007f4c10(local_a8,&local_34,local_c);
    if (local_98 != '\0') {
      local_24 = (undefined **)0x0;
      pSStack_20 = (SharedPtr_L_struct_UIWidget_G_ *)0x0;
      uStack_1c = 0;
      uStack_18 = 0;
      util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_24,1);
      util__Darray_class_util__WeakPtr_class_Body_____Add((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_24,local_a8);
      SelectBodies(pTVar9,(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_24,false);
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_24);
      local_79 = '\0';
    }
    if (local_a4[0] != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_a4[0]);
    }
    if (local_79 == '\0') goto LAB_00804456;
  }
  if (iStack_2c == 0) {
    pTVar12 = pTVar9;
    if ((pTVar9->GetAllBodies_MemoizedValue).IsValidData == false) {
      iVar7 = (pTVar9->TacticalManagerMemoizationHandlerInstance).ResetFunctions.Size;
      local_c = (TacticalManager *)(iVar7 + 1);
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)
                 &pTVar9->TacticalManagerMemoizationHandlerInstance,(int *)&local_c);
      bVar5 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                         &pTVar9->TacticalManagerMemoizationHandlerInstance,iVar7);
      pTVar12 = local_80;
      if (bVar5) {
        (pTVar9->TacticalManagerMemoizationHandlerInstance).ResetFunctions.Data
        [(pTVar9->TacticalManagerMemoizationHandlerInstance).ResetFunctions.Size + -1] =
             CDE_PMF(pmf_f910390b, TacticalManager__GetAllBodies_Clear);
      }
      pAVar6 = (ActorHandler *)
               util__Darray_enum_CrewDepartment__Type___Num((Darray_L_enum_CrewDepartment__Type_G_ *)local_80);
      ActorHandler__GetAllActors(pAVar6);
      local_90 = 0;
      uStack_8c = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      iVar7 = (*(code *)local_24[3])();
      util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_90,iVar7);
      FUN_007f5060(&local_24,pTVar12,&local_90);
      local_24 = ((void *)(0x0091d1bcu));
      if (pSStack_20 != (SharedPtr_L_struct_UIWidget_G_ *)0x0) {
        util__SharedPtr_struct_UIWidget____vector_deleting_destructor(pSStack_20,3);
      }
      pSStack_20 = (SharedPtr_L_struct_UIWidget_G_ *)0x0;
      local_24 = ((void *)(0x00919488u));
      util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment((Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)local_a4,
                 (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_90);
      local_94 = true;
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
                ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)this_00,
                 (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_a4);
      (this->GetAllBodies_MemoizedValue).IsValidData = local_94;
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_a4);
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_90);
    }
    if ((this->GetAllBodies_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    local_44 = (undefined **)0x0;
    pSStack_40 = (SharedPtr_L_struct_UIWidget_G_ *)0x0;
    iStack_3c = 0;
    uStack_38 = 0;
    local_c = pTVar12;
    iVar7 = (**(code **)(*(int *)&this_00->Data + 0xc))();
    util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_44,iVar7);
    local_10 = 0;
    iVar7 = (**(code **)(*(int *)&this_00->Data + 0xc))();
    pTVar9 = pTVar12;
    if (local_10 < iVar7) {
      do {
        piVar8 = (int *)(**(code **)*(int *)&this_00->Data)(&local_10);
        if (((ReferenceController *)piVar8[1] != (ReferenceController *)0x0) &&
           (bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar8[1]),
           !bVar5)) {
          *piVar8 = 0;
        }
        pTVar9 = local_c;
        local_14 = *(TacticalManager **)(*(int *)(uintptr_t)piVar8 + 0x1e0);
        TacticalManager_GetStrategicGame_Memoize(local_c);
        if (*(char *)&(pTVar9->Effects).Controller == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        pTVar9 = (TacticalManager *)
                 StrategicManager__GetEnemyAlliance((StrategicManager *)(pTVar9->Effects).Pointer);
        iVar7 = iStack_3c;
        if (local_14 == pTVar9) {
          local_14 = (TacticalManager *)(iStack_3c + 1);
          util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_44,(int *)&local_14);
          bVar5 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_44,iVar7);
          if (bVar5) {
            pRVar1 = *(ReferenceController **)(pSStack_40 + iStack_3c * 8 + -4);
            *(int *)(pSStack_40 + iStack_3c * 8 + -8) = *piVar8;
            pRVar2 = (ReferenceController *)piVar8[1];
            *(ReferenceController **)(pSStack_40 + iStack_3c * 8 + -4) = pRVar2;
            if (pRVar2 != (ReferenceController *)0x0) {
              util__ReferenceController__AddWeakReference(pRVar2);
            }
            if (pRVar1 != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference(pRVar1);
            }
          }
        }
        local_10 = local_10 + 1;
        iVar7 = (**(code **)(*(int *)&this_00->Data + 0xc))();
        pTVar9 = local_80;
      } while (local_10 < iVar7);
    }
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_34,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_44);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_44);
  }
  local_c = (TacticalManager *)((uint)local_c & 0xffffff00);
  local_54 = 0;
  pWStack_50 = (WeakPtr_L_class_Body_G_ *)0x0;
  iStack_4c = 0;
  uStack_48 = 0;
  FUN_007dd260(&local_54,&local_34,local_c);
  local_c = (TacticalManager *)((uint)local_c & 0xffffff00);
  local_78 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  uStack_6c = 0;
  FUN_007f47c0(&local_78,&local_34,local_c);
  local_c = (TacticalManager *)((uint)local_c & 0xffffff00);
  local_68 = 0;
  uStack_64 = 0;
  iStack_60 = 0;
  uStack_5c = 0;
  FUN_007f4930(&local_68,&local_34,local_c);
  pWVar4 = pWStack_50;
  if (iStack_4c < 1) {
    if (iStack_70 < 1) {
      pDVar10 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_68;
      if (iStack_60 < 1) {
        pDVar10 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_34;
      }
    }
    else {
      pDVar10 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_78;
    }
    pDVar11 = (Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)
              util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment((Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_24,pDVar10
                        );
    bVar3 = false;
    bVar5 = true;
  }
  else {
    local_90 = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_90,1);
    util__Darray_class_util__WeakPtr_class_Body_____Add((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_90,pWVar4);
    pDVar11 = (Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_90;
    bVar3 = true;
    bVar5 = false;
  }
  SelectBodies(pTVar9,pDVar11,false);
  if (bVar5) {
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_24);
  }
  if (bVar3) {
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_90);
  }
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_68);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_78);
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_54);
LAB_00804456:
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_34);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000829160 00829160_GetSplitButtonTooltip ====
// decompiled by BatchDecomp @ 00829160 name=GetSplitButtonTooltip conv=__thiscall body=1703

/* WARNING: Removing unreachable block (ram,0x008296bb) */
/* WARNING: Removing unreachable block (ram,0x008296cb) */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: class Str_L_char_G_ __thiscall ShipGroupUI__GetSplitButtonTooltip(void)const  */

Str_L_char_G_ * __thiscall
ShipGroupUI__GetSplitButtonTooltip(ShipGroupUI *this,Str_L_char_G_ *__return_storage_ptr__)

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
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  LocStr *pLVar25;
  Str_L_char_G_ *pSVar26;
  int *piVar27;
  int iVar28;
  Str_L_char_G_ *pSVar29;
  Str_L_char_G_ *this_00;
  void *local_174[3];
  void *local_168;
  void *local_15c[3];
  void *local_150;
  void *local_144[3];
  void *local_138;
  void *local_12c[3];
  void *local_120;
  void *local_114[3];
  void *local_108;
  Str_L_char_G_ local_fc;
  Str_L_char_G_ local_f0;
  Str_L_char_G_ local_e4;
  Str_L_char_G_ local_d8;
  Str_L_char_G_ local_cc;
  Str_L_char_G_ local_c0;
  Str_L_char_G_ local_b4;
  Str_L_char_G_ local_a8;
  Str_L_char_G_ local_9c;
  Str_L_char_G_ local_90;
  undefined4 local_84;
  Str_L_char_G_ local_80;
  Str_L_char_G_ local_74;
  Str_L_char_G_ local_68;
  Str_L_char_G_ local_5c;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_50[4];
  Str_L_char_G_ local_4c;
  Str_L_char_G_ local_40;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  local_84 = 0;
  bVar24 = CanSplitUnits(this);
  if (bVar24) {
    util__Str_char___Str_char__o5(&local_fc,"SplitShip Tooltip");
    local_40.Data = (char *)0x0;
    local_40.Capacity = 0;
    local_40.Length = 0;
    pSVar29 = &local_f0;
    pLVar25 = (LocStr *)util__LocStr__LocStr((LocStr *)local_174,&local_fc,&local_40);
    pSVar26 = util__LocStr__operator__o3(pLVar25);
    bVar23 = false;
    bVar22 = false;
    bVar21 = false;
    bVar20 = false;
    bVar19 = false;
    bVar24 = false;
    bVar18 = false;
    bVar17 = false;
    bVar16 = false;
    bVar15 = false;
    bVar14 = false;
    bVar13 = false;
    bVar12 = false;
    bVar11 = false;
    bVar10 = false;
    bVar9 = false;
    bVar8 = false;
    bVar7 = true;
    bVar6 = true;
    bVar5 = true;
    bVar4 = false;
    bVar3 = false;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    bVar24 = CanUnsplitUnits(this);
    if (bVar24) {
      util__Str_char___Str_char__o5(&local_80,"RejoinShip Tooltip");
      local_34.Data = (char *)0x0;
      local_34.Capacity = 0;
      local_34.Length = 0;
      this_00 = &local_e4;
      pLVar25 = (LocStr *)util__LocStr__LocStr((LocStr *)local_15c,&local_80,&local_34);
      pSVar26 = util__LocStr__operator__o3(pLVar25);
      bVar23 = false;
      bVar22 = false;
      bVar21 = false;
      bVar20 = false;
      bVar19 = false;
      bVar24 = false;
      bVar18 = false;
      bVar17 = false;
      bVar16 = false;
      bVar14 = false;
      bVar13 = false;
      bVar12 = false;
      bVar11 = false;
      bVar10 = false;
      bVar9 = false;
      bVar8 = false;
      bVar4 = true;
      bVar3 = true;
      bVar2 = true;
    }
    else {
      piVar27 = (int *)TacticalManager__GetPlayerSpacecraftComponents((TacticalManager *)this->_pad_0x0_0);
      iVar28 = (**(code **)(*(int *)(uintptr_t)piVar27 + 0xc))();
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_50);
      if (iVar28 < 2) {
        util__Str_char___Str_char__o5(&local_74,"CantSplitSingleShip Tooltip");
        local_28.Data = (char *)0x0;
        local_28.Capacity = 0;
        local_28.Length = 0;
        pSVar29 = &local_d8;
        pLVar25 = (LocStr *)util__LocStr__LocStr((LocStr *)local_144,&local_74,&local_28);
        pSVar26 = util__LocStr__operator__o3(pLVar25);
        bVar23 = false;
        bVar22 = false;
        bVar21 = false;
        bVar20 = false;
        bVar19 = false;
        bVar24 = false;
        bVar18 = false;
        bVar17 = false;
        bVar14 = true;
        bVar13 = true;
        bVar12 = true;
        bVar11 = true;
        bVar10 = false;
        bVar9 = false;
        bVar8 = false;
      }
      else {
        bVar24 = AreShipsNonStationary(this);
        if (bVar24) {
          bVar24 = AnyShipsInFleetHaveDeltaV(this);
          if (bVar24) {
            local_4c.Data = (char *)0x0;
            pSVar26 = &local_4c;
            local_4c.Capacity = 0;
            local_4c.Length = 0;
          }
          else {
            util__Str_char___Str_char__o5(&local_5c,"CantSplitNoDeltaV Tooltip");
            local_10.Data = (char *)0x0;
            local_10.Capacity = 0;
            local_10.Length = 0;
            pLVar25 = (LocStr *)util__LocStr__LocStr((LocStr *)local_114,&local_5c,&local_10);
            pSVar26 = util__LocStr__operator__o3(pLVar25);
            pSVar26 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_c0,pSVar26);
          }
          bVar23 = false;
          bVar22 = !bVar24;
          bVar21 = !bVar24;
          bVar20 = !bVar24;
          bVar19 = !bVar24;
          bVar18 = true;
          bVar10 = false;
          bVar9 = false;
          bVar8 = false;
          pSVar26 = (Str_L_char_G_ *)util__Str_char___Str_char__o5(&local_b4,pSVar26);
        }
        else {
          util__Str_char___Str_char(&local_68,"CantSplitSpaceStations Tooltip");
          local_1c.Data = (char *)0x0;
          local_1c.Capacity = 0;
          local_1c.Length = 0;
          pLVar25 = (LocStr *)util__LocStr__LocStr((LocStr *)local_12c,&local_68,&local_1c);
          pSVar26 = util__LocStr__operator__o3(pLVar25);
          pSVar26 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_cc,pSVar26);
          bVar23 = true;
          bVar22 = false;
          bVar21 = false;
          bVar20 = false;
          bVar19 = false;
          bVar24 = false;
          bVar18 = false;
          bVar10 = true;
          bVar9 = true;
          bVar8 = true;
        }
        pSVar29 = &local_a8;
        bVar17 = true;
        bVar14 = false;
        bVar13 = false;
        bVar12 = false;
        bVar11 = false;
      }
      bVar16 = true;
      bVar4 = false;
      bVar3 = false;
      bVar2 = false;
      this_00 = &local_9c;
      pSVar26 = (Str_L_char_G_ *)util__Str_char___Str_char(pSVar29,pSVar26);
    }
    pSVar29 = &local_90;
    bVar15 = true;
    bVar7 = false;
    bVar6 = false;
    bVar5 = false;
    bVar1 = false;
    pSVar26 = (Str_L_char_G_ *)util__Str_char___Str_char(this_00,pSVar26);
  }
  pSVar26 = (Str_L_char_G_ *)util__Str_char___Str_char(pSVar29,pSVar26);
  util__Str_char___Str_char(__return_storage_ptr__,pSVar26);
  if (bVar15) {
    if (local_90.Data != (char *)0x0) {
      operator_delete__(local_90.Data);
      local_90.Data = (char *)0x0;
    }
  }
  if (bVar16) {
    if (local_9c.Data != (char *)0x0) {
      operator_delete__(local_9c.Data);
      local_9c.Data = (char *)0x0;
    }
  }
  if (bVar17) {
    if (local_a8.Data != (char *)0x0) {
      operator_delete__(local_a8.Data);
      local_a8.Data = (char *)0x0;
    }
  }
  if (bVar18) {
    if (local_b4.Data != (char *)0x0) {
      operator_delete__(local_b4.Data);
      local_b4.Data = (char *)0x0;
    }
  }
  if (bVar24) {
    if (local_4c.Data != (char *)0x0) {
      operator_delete__(local_4c.Data);
    }
  }
  if (bVar19) {
    if (local_c0.Data != (char *)0x0) {
      operator_delete__(local_c0.Data);
      local_c0.Data = (char *)0x0;
    }
  }
  if (bVar20) {
    if (local_108 != (void *)0x0) {
      operator_delete__(local_108);
      local_108 = (void *)0x0;
    }
    if (local_114[0] != (void *)0x0) {
      operator_delete__(local_114[0]);
      local_114[0] = (void *)0x0;
    }
  }
  if (bVar21) {
    if (local_10.Data != (char *)0x0) {
      operator_delete__(local_10.Data);
      local_10.Data = (char *)0x0;
    }
  }
  if ((bVar22) && (local_5c.Data != (char *)0x0)) {
    operator_delete__(local_5c.Data);
    local_5c.Data = (char *)0x0;
  }
  if ((bVar23) && (local_cc.Data != (char *)0x0)) {
    operator_delete__(local_cc.Data);
    local_cc.Data = (char *)0x0;
  }
  if (bVar8) {
    if (local_120 != (void *)0x0) {
      operator_delete__(local_120);
      local_120 = (void *)0x0;
    }
    if (local_12c[0] != (void *)0x0) {
      operator_delete__(local_12c[0]);
      local_12c[0] = (void *)0x0;
    }
  }
  if ((bVar9) && (local_1c.Data != (char *)0x0)) {
    operator_delete__(local_1c.Data);
    local_1c.Data = (char *)0x0;
  }
  if ((bVar10) && (local_68.Data != (char *)0x0)) {
    operator_delete__(local_68.Data);
    local_68.Data = (char *)0x0;
  }
  if ((bVar11) && (local_d8.Data != (char *)0x0)) {
    operator_delete__(local_d8.Data);
    local_d8.Data = (char *)0x0;
  }
  if (bVar12) {
    if (local_138 != (void *)0x0) {
      operator_delete__(local_138);
      local_138 = (void *)0x0;
    }
    if (local_144[0] != (void *)0x0) {
      operator_delete__(local_144[0]);
      local_144[0] = (void *)0x0;
    }
  }
  if ((bVar13) && (local_28.Data != (char *)0x0)) {
    operator_delete__(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if ((bVar14) && (local_74.Data != (char *)0x0)) {
    operator_delete__(local_74.Data);
    local_74.Data = (char *)0x0;
  }
  if (bVar2) {
    if (local_150 != (void *)0x0) {
      operator_delete__(local_150);
      local_150 = (void *)0x0;
    }
    if (local_15c[0] != (void *)0x0) {
      operator_delete__(local_15c[0]);
      local_15c[0] = (void *)0x0;
    }
  }
  if ((bVar3) && (local_34.Data != (char *)0x0)) {
    operator_delete__(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if ((bVar4) && (local_80.Data != (char *)0x0)) {
    operator_delete__(local_80.Data);
    local_80.Data = (char *)0x0;
  }
  if ((bVar5) && (local_f0.Data != (char *)0x0)) {
    operator_delete__(local_f0.Data);
    local_f0.Data = (char *)0x0;
  }
  if (bVar6) {
    if (local_168 != (void *)0x0) {
      operator_delete__(local_168);
      local_168 = (void *)0x0;
    }
    if (local_174[0] != (void *)0x0) {
      operator_delete__(local_174[0]);
      local_174[0] = (void *)0x0;
    }
  }
  if ((bVar7) && (local_40.Data != (char *)0x0)) {
    operator_delete__(local_40.Data);
    local_40.Data = (char *)0x0;
  }
  if ((local_fc.Data != (char *)0x0) && (bVar1)) {
    operator_delete__(local_fc.Data);
  }
  return __return_storage_ptr__;
}


//==== 0000835600 00835600_FUN_00835600 ====
void FUN_00835600(int *param_1,undefined4 *param_2,int *param_3);

// decompiled by BatchDecomp @ 00835600 name=FUN_00835600 conv=unknown body=841

void FUN_00835600(int *param_1,undefined4 *param_2,int *param_3)

{
  undefined4 stack0xfffffffc;
  bool bVar1;
  bool bVar2;
  Type TVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  char *pcVar8;
  Str_L_char_G_ *pSVar9;
  ReflectionRegistry *this;
  int iVar10;
  Str_L_char_G_ *pSVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  Darray_L_class_util__LocStr_G_ *pDVar15;
  Str_L_char_G_ local_70;
  Str_L_char_G_ local_64;
  void *local_58[3];
  Str_L_char_G_ local_4c;
  int *local_40;
  Str_L_char_G_ *local_3c;
  Darray_L_class_util__LocStr_G_ *local_38;
  undefined1 local_34[12];
  Str_L_char_G_ SStack_28;
  Str_L_char_G_ local_1c;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_40 = param_1;
  local_10 = 0;
  iVar4 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_10 < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*param_1)(&local_10);
      if (puVar5[4] != -1) {
        local_1c.Data = (char *)0x0;
        local_1c.Capacity = 0;
        local_1c.Length = 0;
        if ((int)puVar5[1] < 1) {
          puVar14 = &cde_l2_0091985b_NullString;
        }
        else {
          puVar14 = (undefined1 *)*puVar5;
        }
        if (*(int *)(*param_3 + 8) < 1) {
          puVar13 = &cde_l2_0091985b_NullString;
        }
        else {
          puVar13 = *(undefined1 **)(*param_3 + 4);
        }
        puVar6 = (undefined4 *)(*(code *)**(undefined4 **)*param_2)(local_58);
        if ((int)puVar6[1] < 1) {
          puVar7 = &cde_l2_0091985b_NullString;
        }
        else {
          puVar7 = (undefined1 *)*puVar6;
        }
        util__Printf(&local_1c,"%s %s %s",puVar7,puVar13,puVar14);
        if (local_58[0] != (void *)0x0) {
          operator_delete__(local_58[0]);
          local_58[0] = (void *)0x0;
        }
        pDVar15 = (Darray_L_class_util__LocStr_G_ *)(*param_3 + puVar5[4]);
        local_38 = pDVar15;
        if (*(char *)(puVar5 + 9) == '\0') {
          if (puVar5[3] == 0xb) {
            pSVar11 = (Str_L_char_G_ *)(local_34 + 8);
            ((slice_view *)&local_34)->_8_4_ = (undefined4 *)0x0;
            SStack_28.Data = (char *)0x0;
            SStack_28.Capacity = 0;
            SStack_28.Length = 0;
            this = util__ReflectionRegistry__Get();
            util__ReflectionRegistry__GetTupleInfo(this,pSVar11);
            local_c = 0;
            iVar4 = (**(code **)(((slice_view *)&local_34)->_8_4_ + 0xc))();
            if (local_c < iVar4) {
              do {
                iVar4 = local_c;
                iVar10 = (**(code **)((slice_view *)&local_34)->_8_4_)(&local_c);
                local_3c = (Str_L_char_G_ *)(iVar10 + 0xc);
                TVar3 = util__GetTypeFromTypeString(local_3c);
                pDVar15 = local_38 + *(int *)(iVar10 + 0x18);
                pcVar8 = "";
                if (0 < local_1c.Capacity) {
                  pcVar8 = local_1c.Data;
                }
                pSVar11 = util__Printf(&local_70,"%s Value%i",pcVar8,iVar4 + 1);
                uVar12 = util__GetSizeOfType(TVar3);
                util__ClearValue(pDVar15,TVar3,false,local_3c,(void *)0x0,uVar12,pSVar11);
                if (local_70.Data != (char *)0x0) {
                  operator_delete__(local_70.Data);
                  local_70.Data = (char *)0x0;
                }
                local_c = local_c + 1;
                iVar4 = (**(code **)(((slice_view *)&local_34)->_8_4_ + 0xc))();
              } while (local_c < iVar4);
            }
            ((slice_view *)&local_34)->_8_4_ = ((void *)(0x00940264u));
            if ((TupleProperty *)SStack_28.Data != (TupleProperty *)0x0) {
              util__TupleProperty___vector_deleting_destructor_((TupleProperty *)SStack_28.Data,3);
            }
            SStack_28.Data = (char *)0x0;
            ((slice_view *)&local_34)->_8_4_ = ((void *)(0x00919488u));
          }
          else {
            util__ClearValue(pDVar15,(Type)puVar5[3],*(bool *)((int)puVar5 + 0x25),
                             (Str_L_char_G_ *)(puVar5 + 6),(void *)0x0,puVar5[5],&local_1c);
          }
        }
        else {
          *(undefined4 *)(pDVar15 + 4) = 0;
          *(undefined4 *)(pDVar15 + 8) = 0;
          *(undefined4 *)(pDVar15 + 0xc) = 0;
          if (puVar5[3] == 7) {
            local_c = 0;
            do {
              pSVar11 = &local_4c;
              local_4c.Data = (char *)0x0;
              pcVar8 = "";
              if (0 < local_1c.Capacity) {
                pcVar8 = local_1c.Data;
              }
              local_4c.Capacity = 0;
              local_4c.Length = 0;
              pSVar9 = util__Printf(&local_64,"%s%i",pcVar8,local_c);
              util__LocStr__LocStr((LocStr *)local_34,pSVar9,pSVar11);
              if (local_64.Data != (char *)0x0) {
                operator_delete__(local_64.Data);
                local_64.Data = (char *)0x0;
              }
              if (local_4c.Data != (char *)0x0) {
                operator_delete__(local_4c.Data);
                local_4c.Data = (char *)0x0;
              }
              bVar1 = util__LocStr__HasLocalizedString((LocStr *)local_34);
              if (bVar1) {
                iVar4 = *(int *)(pDVar15 + 8);
                local_3c = (Str_L_char_G_ *)(iVar4 + 1);
                util__Darray_class_util__LocStr___SetSize(pDVar15,(int *)&local_3c);
                bVar2 = util__Darray_class_util__LocStr___CheckSize(pDVar15,iVar4);
                if (bVar2) {
                  iVar4 = *(int *)(pDVar15 + 4) + *(int *)(pDVar15 + 8) * 0x18;
                  util__Str_char___operator__o8((Str_L_char_G_ *)(iVar4 + -0x18),(Str_L_char_G_ *)local_34);
                  util__Str_char___operator__o8((Str_L_char_G_ *)(iVar4 + -0xc),&SStack_28);
                }
              }
              local_c = local_c + 1;
              if (SStack_28.Data != (char *)0x0) {
                operator_delete__(SStack_28.Data);
                SStack_28.Data = (char *)0x0;
              }
              if ((char *)((slice_view *)&local_34)->_0_4_ != (char *)0x0) {
                operator_delete__((void *)((slice_view *)&local_34)->_0_4_);
              }
            } while (bVar1);
          }
        }
        if (local_1c.Data != (char *)0x0) {
          operator_delete__(local_1c.Data);
          ((slice_view *)&local_1c)->_0_8_ = ((slice_view *)&local_1c)->_0_8_ & 0xffffffff00000000;
        }
      }
      param_1 = local_40;
      local_10 = local_10 + 1;
      iVar4 = (**(code **)(*(int *)(uintptr_t)local_40 + 0xc))();
    } while (local_10 < iVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000088c300 0088c300_FUN_0088c300 ====
void __thiscall FUN_0088c300(int *param_1,Str_L_char32_t_G_ *param_2);

// decompiled by BatchDecomp @ 0088c300 name=FUN_0088c300 conv=unknown body=1250

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FUN_0088c300(int *param_1,Str_L_char32_t_G_ *param_2)

{
  undefined4 stack0xfffffffc;
  int *piVar1;
  bool bVar2;
  Str_L_char32_t_G_ *pSVar3;
  int iVar4;
  wchar32 *pwVar5;
  Character *pCVar6;
  float *pfVar7;
  Maybe_L_int_G_ *pMVar8;
  Maybe_L_int_G_ *pMVar9;
  float fVar10;
  void *local_a4[3];
  void *local_98[3];
  int local_8c;
  void *local_88[3];
  void *local_7c[3];
  void *local_70[3];
  Maybe_L_int_G_ *local_64;
  undefined8 local_60;
  float local_5c;
  Str_L_char32_t_G_ *local_58;
  float local_54;
  char local_4d;
  wchar32 local_4c;
  ulonglong local_48;
  undefined4 local_40;
  ulonglong local_3c;
  undefined4 local_34;
  ulonglong local_30;
  uint local_28;
  undefined8 local_24;
  undefined8 local_1c;
  undefined4 local_18;
  wchar32 local_14;
  wchar32 local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_58 = param_2;
  local_8c = *(int *)(param_2 + 8);
  local_5c = Font__GetWidth((Font *)*param_1,param_2,false);
  pfVar7 = (float *)param_1[1];
  fVar10 = *pfVar7;
  pMVar9 = *(Maybe_L_int_G_ **)param_1[3];
  local_4d = (float)*(int *)param_1[2] < fVar10 + local_5c;
  if ((fVar10 + local_5c <= (float)*(int *)param_1[2]) || (pMVar9 == (Maybe_L_int_G_ *)0x0)) {
    if (((bool)local_4d) && (pMVar9 == (Maybe_L_int_G_ *)0x0)) {
      pMVar9 = (Maybe_L_int_G_ *)0x0;
      local_54 = 0.0;
      iVar4 = *(int *)(local_58 + 8);
      local_4c = L'\0';
      if (0 < iVar4) {
        do {
          pSVar3 = local_58;
          if (((0 < (int)pMVar9) || ((int)pMVar9 < iVar4 + -1)) &&
             ((iVar4 + -1 < (int)pMVar9 || ((int)pMVar9 < 0)))) {
            util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\corestring.inl"
                            ,0x11d,"Between(Index, 0, GetLength()-1)",(char *)0x0);
            DebugBreak();
          }
          local_10 = *(wchar32 *)(*(int *)pSVar3 + (int)pMVar9 * 4);
          if (((int)pMVar9 < 1) ||
             ((bVar2 = util__IsCJKStartPunctuation(&local_4c), !bVar2 &&
              (bVar2 = util__IsCJKEndPunctuation(&local_10), !bVar2)))) {
            local_4d = '\0';
          }
          else {
            local_4d = '\x01';
          }
          local_60 = *param_1;
          piVar1 = (int *)(local_60 + 0x28);
          local_14 = local_10;
          local_c = 0;
          iVar4 = (**(code **)(*(int *)(uintptr_t)piVar1 + 0xc))();
          if (local_c < iVar4) {
            do {
              pwVar5 = (wchar32 *)(**(code **)*piVar1)(&local_c);
              if (((uint)*pwVar5 <= (uint)local_14) && ((uint)local_14 <= (uint)pwVar5[1])) {
                local_14 = local_10;
                pCVar6 = util__HashMap_unsigned_long_struct_Font__Character___Find((HashMap_L_unsigned_long_Cstruct_Font__Character_G_ *)
                                    (local_60 + 0x38),(ulong *)&local_14);
                fVar10 = (pCVar6->BitmapSize).Y;
                goto LAB_0088c5a8;
              }
              local_c = local_c + 1;
              iVar4 = (**(code **)(*(int *)(uintptr_t)piVar1 + 0xc))();
            } while (local_c < iVar4);
          }
          fVar10 = 0.0;
LAB_0088c5a8:
          if ((fVar10 + local_54 <= (float)*(int *)param_1[2]) || (local_54 <= 0.0)) {
            pfVar7 = (float *)param_1[1];
            local_54 = fVar10 + local_54;
LAB_0088c796:
            local_4c = local_10;
          }
          else {
            pMVar8 = pMVar9;
            if (local_4d != '\0') {
              pMVar8 = (Maybe_L_int_G_ *)0x0;
              if (-1 < (int)&pMVar9[-1].field_0x7) {
                pMVar8 = (Maybe_L_int_G_ *)&pMVar9[-1].field_0x7;
              }
            }
            util__Str_char32_t___Str_char32_t((Str_L_char32_t_G_ *)local_88,(wchar32 *)"\n");
            local_24 = CONCAT44(pMVar8,(void *)local_24);
            ((slice_view *)&local_1c)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&local_1c)->_1_3_[0] | (((slice_view *)&local_1c)->_1_3_[1] << 8) | (((slice_view *)&local_1c)->_1_3_[2] << 16)) << 8));
            local_30 = local_30 & 0xffffffff;
            local_28 = local_28 & 0xffffff00;
            pSVar3 = (Str_L_char32_t_G_ *)
                     util__Str_char32_t___SubStr((Str_L_char32_t_G_ *)param_1[4],(int)local_98,(Maybe_L_int_G_ *)0x0);
            local_34 = 0;
            local_3c = 0;
            util__Str_char32_t___Str_char32_t((Str_L_char32_t_G_ *)&local_3c,pSVar3);
            util__Str_char32_t___operator__o5((Str_L_char32_t_G_ *)&local_3c,(Str_L_char32_t_G_ *)local_88);
            util__Str_char32_t___Str_char32_t((Str_L_char32_t_G_ *)local_7c,(Str_L_char32_t_G_ *)&local_3c)
            ;
            if ((void *)local_3c != (void *)0x0) {
              operator_delete__((void *)local_3c);
              local_3c = local_3c & 0xffffffff00000000;
            }
            pSVar3 = (Str_L_char32_t_G_ *)
                     util__Str_char32_t___SubStr((Str_L_char32_t_G_ *)param_1[4],(int)local_a4,pMVar8);
            local_40 = 0;
            local_48 = 0;
            util__Str_char32_t___Str_char32_t((Str_L_char32_t_G_ *)&local_48,(Str_L_char32_t_G_ *)local_7c)
            ;
            util__Str_char32_t___operator__o5((Str_L_char32_t_G_ *)&local_48,pSVar3);
            util__Str_char32_t___Str_char32_t((Str_L_char32_t_G_ *)local_70,(Str_L_char32_t_G_ *)&local_48)
            ;
            if ((void *)local_48 != (void *)0x0) {
              operator_delete__((void *)local_48);
              local_48 = local_48 & 0xffffffff00000000;
            }
            util__Str_char32_t___operator__o4((Str_L_char32_t_G_ *)param_1[4],(Str_L_char32_t_G_ *)local_70);
            if (local_70[0] != (void *)0x0) {
              operator_delete__(local_70[0]);
              local_70[0] = (void *)0x0;
            }
            if (local_7c[0] != (void *)0x0) {
              operator_delete__(local_7c[0]);
              local_7c[0] = (void *)0x0;
            }
            if (local_98[0] != (void *)0x0) {
              operator_delete__(local_98[0]);
              local_98[0] = (void *)0x0;
            }
            if (local_a4[0] != (void *)0x0) {
              operator_delete__(local_a4[0]);
              local_a4[0] = (void *)0x0;
            }
            if (local_88[0] != (void *)0x0) {
              operator_delete__(local_88[0]);
              local_88[0] = (void *)0x0;
            }
            local_54 = 0.0;
            *(int *)param_1[3] = *(int *)param_1[3] + 1;
            pfVar7 = (float *)param_1[1];
            *pfVar7 = 0.0;
            if (local_4d == '\0') goto LAB_0088c796;
            pMVar9 = (Maybe_L_int_G_ *)&pMVar9[-1].field_0x7;
          }
          pMVar9 = (Maybe_L_int_G_ *)((int)&pMVar9->Data + 1);
          iVar4 = *(int *)(local_58 + 8);
        } while ((int)pMVar9 < iVar4);
        fVar10 = *pfVar7;
      }
    }
  }
  else {
    util__Str_char32_t___Str_char32_t((Str_L_char32_t_G_ *)&local_3c,(wchar32 *)"\n");
    ((slice_view *)&local_60)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&local_60)->_1_3_[0] | (((slice_view *)&local_60)->_1_3_[1] << 8) | (((slice_view *)&local_60)->_1_3_[2] << 16)) << 8));
    local_18 = 0;
    local_14 = local_14 & 0xffffff00;
    local_64 = pMVar9;
    pSVar3 = (Str_L_char32_t_G_ *)
             util__Str_char32_t___SubStr((Str_L_char32_t_G_ *)param_1[4],(int)local_70,(Maybe_L_int_G_ *)0x0);
    local_28 = 0;
    local_30 = 0;
    util__Str_char32_t___Str_char32_t((Str_L_char32_t_G_ *)&local_30,pSVar3);
    util__Str_char32_t___operator__o5((Str_L_char32_t_G_ *)&local_30,(Str_L_char32_t_G_ *)&local_3c);
    util__Str_char32_t___Str_char32_t((Str_L_char32_t_G_ *)local_7c,(Str_L_char32_t_G_ *)&local_30);
    if ((void *)local_30 != (void *)0x0) {
      operator_delete__((void *)local_30);
      local_30 = local_30 & 0xffffffff00000000;
    }
    pSVar3 = (Str_L_char32_t_G_ *)
             util__Str_char32_t___SubStr((Str_L_char32_t_G_ *)param_1[4],(int)&local_48,pMVar9);
    local_1c = 0;
    local_24 = 0;
    util__Str_char32_t___Str_char32_t((Str_L_char32_t_G_ *)&local_24,(Str_L_char32_t_G_ *)local_7c);
    util__Str_char32_t___operator__o5((Str_L_char32_t_G_ *)&local_24,pSVar3);
    util__Str_char32_t___Str_char32_t((Str_L_char32_t_G_ *)local_88,(Str_L_char32_t_G_ *)&local_24);
    if ((void *)local_24 != (void *)0x0) {
      operator_delete__((void *)local_24);
      local_24 = local_24 & 0xffffffff00000000;
    }
    util__Str_char32_t___operator__o4((Str_L_char32_t_G_ *)param_1[4],(Str_L_char32_t_G_ *)local_88);
    if (local_88[0] != (void *)0x0) {
      operator_delete__(local_88[0]);
    }
    if (local_7c[0] != (void *)0x0) {
      operator_delete__(local_7c[0]);
    }
    if (local_70[0] != (void *)0x0) {
      operator_delete__(local_70[0]);
      local_70[0] = (void *)0x0;
    }
    if ((void *)local_48 != (void *)0x0) {
      operator_delete__((void *)local_48);
      local_48 = local_48 & 0xffffffff00000000;
    }
    if ((void *)local_3c != (void *)0x0) {
      operator_delete__((void *)local_3c);
    }
    fVar10 = 0.0;
    *(int *)param_1[3] = *(int *)param_1[3] + 1;
    pfVar7 = (float *)param_1[1];
    *pfVar7 = 0.0;
  }
  *pfVar7 = *(float *)param_1[5] + local_5c + fVar10;
  *(int *)param_1[3] = *(int *)param_1[3] + local_8c + 1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00008aa1e0 008aa1e0_FUN_008aa1e0 ====
void FUN_008aa1e0(int *param_1,int *param_2,Interface *param_3,Vec2_L_double_G_ *param_4,int *param_5);

// decompiled by BatchDecomp @ 008aa1e0 name=FUN_008aa1e0 conv=unknown body=789

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_008aa1e0(int *param_1,int *param_2,Interface *param_3,Vec2_L_double_G_ *param_4,int *param_5)

{
  undefined4 stack0xfffffffc;
  ReferenceController *pRVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  HMODULE hmod;
  ReferenceController *pRVar6;
  int *piVar7;
  CHAR *pszSound;
  DWORD fdwSound;
  CHAR local_5c[8];
  void *local_54[3];
  void *local_48[3];
  int *local_3c;
  undefined4 local_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  uint local_28;
  ReferenceController *local_24;
  char local_1d;
  int local_1c;
  int iStack_18;
  undefined4 uStack_14;
  int iStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_3c = param_1;
  local_28 = 0;
  local_c = 0;
  iVar4 = (**(code **)(*(int *)(uintptr_t)param_1 + 0xc))();
  if (local_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*param_1)(&local_c);
      if (((*param_2 == 0) || ((ReferenceController *)param_2[1] == (ReferenceController *)0x0)) ||
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]),
         !bVar2)) {
        local_1c = 0;
        iStack_18 = 0;
        uStack_14 = 0;
        iStack_10 = 0;
        util__Stack_class_util__WeakPtr_struct_UIWidget_____Stack_class_util__WeakPtr_struct_UIWidget((Stack_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_1c,0);
        local_38 = 0;
        iStack_34 = 0;
        iStack_30 = 0;
        uStack_2c = 0;
        util__Darray_class_util__WeakPtr_struct_UIWidget_____Darray_class_util__WeakPtr_struct_UIWidget__o2((Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_38,1);
        iVar4 = iStack_30;
        local_24 = (ReferenceController *)(iStack_30 + 1);
        util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_38,(int *)&local_24);
        bVar2 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_38,iVar4);
        if (bVar2) {
          pRVar6 = *(ReferenceController **)(iStack_34 + -4 + iStack_30 * 8);
          *(undefined4 *)(iStack_34 + -8 + iStack_30 * 8) = *puVar5;
          pRVar1 = (ReferenceController *)puVar5[1];
          *(ReferenceController **)(iStack_34 + -4 + iStack_30 * 8) = pRVar1;
          if (pRVar1 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(pRVar1);
          }
          if (pRVar6 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar6);
          }
        }
        Interface__GetWidgetDisplayStackRecursive(param_3,(Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_38,
                   (Stack_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_1c,*param_4);
        util__Darray_class_util__WeakPtr_struct_UIWidget______Darray_class_util__WeakPtr_struct_UIWidget((Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_38);
        while ((0 < iStack_18 &&
               (((*param_2 == 0 || ((ReferenceController *)param_2[1] == (ReferenceController *)0x0)
                 ) || (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]), !bVar2))))) {
          if (iStack_18 == 0) {
            piVar7 = (int *)0x0;
            pRVar6 = (ReferenceController *)0x0;
          }
          else {
            pRVar6 = *(ReferenceController **)(local_1c + -4 + iStack_18 * 8);
            piVar7 = *(int **)(local_1c + -8 + iStack_18 * 8);
            if (pRVar6 != (ReferenceController *)0x0) {
              util__ReferenceController__AddWeakReference(pRVar6);
            }
            iStack_18 = iStack_18 + -1;
            iStack_10 = local_1c + iStack_18 * 8;
            if (pRVar6 != (ReferenceController *)0x0) {
              util__ReferenceController__AddWeakReference(pRVar6);
              util__ReferenceController__ReleaseWeakReference(pRVar6);
              bVar2 = util__ReferenceController__IsDataStillValid(pRVar6);
              if (!bVar2) {
                piVar7 = (int *)0x0;
              }
            }
          }
          puVar5 = (undefined4 *)*param_5;
          cVar3 = (**(code **)(*(int *)(uintptr_t)piVar7 + 0x84))(*puVar5,puVar5[1],puVar5[2],puVar5[3]);
          if (cVar3 != '\0') {
            iVar4 = param_5[1];
            local_24 = *(ReferenceController **)(iVar4 + 0x68);
            *(int **)(iVar4 + 100) = piVar7;
            *(ReferenceController **)(iVar4 + 0x68) = pRVar6;
            if (pRVar6 != (ReferenceController *)0x0) {
              util__ReferenceController__AddWeakReference(pRVar6);
            }
            if (local_24 != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference(local_24);
            }
            local_24 = (ReferenceController *)param_5[1];
            pRVar1 = (ReferenceController *)local_24[8].Pointer;
            if (((ReferenceController *)((int *)param_5[2])[1] == pRVar1) &&
               (*(int *)param_5[2] == local_24[8].WeakReferenceCount)) {
LAB_008aa3f3:
              local_1d = '\0';
            }
            else {
              if ((pRVar1 != (ReferenceController *)0x0) &&
                 (bVar2 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar2)) {
                local_24[8].WeakReferenceCount = 0;
              }
              local_28 = local_28 | 1;
              iVar4 = (**(code **)(*(int *)local_24[8].WeakReferenceCount + 0x4c))(local_48);
              local_1d = '\x01';
              if (*(int *)(iVar4 + 8) == 0) goto LAB_008aa3f3;
            }
            if (((local_28 & 1) != 0) &&
               (local_28 = local_28 & 0xfffffffe, local_48[0] != (void *)0x0)) {
              operator_delete__(local_48[0]);
              local_48[0] = (void *)0x0;
            }
            if (local_1d != '\0') {
              local_24 = (ReferenceController *)(param_5[1] + 100);
              pRVar1 = *(ReferenceController **)(param_5[1] + 0x68);
              if ((pRVar1 != (ReferenceController *)0x0) &&
                 (bVar2 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar2)) {
                local_24->StrongReferenceCount = 0;
              }
              fdwSound = 0;
              hmod = (HMODULE)(**(code **)(*(int *)local_24->StrongReferenceCount + 0x4c))
                                        (local_54,0,0,0);
              pszSound = local_5c;
              GameManager__GetAudio(*(GameManager **)param_5[1]);
              AudioManager__PlaySoundA(pszSound,hmod,fdwSound);
              if (local_54[0] != (void *)0x0) {
                operator_delete__(local_54[0]);
                local_54[0] = (void *)0x0;
              }
            }
            pRVar1 = (ReferenceController *)param_2[1];
            *param_2 = (int)piVar7;
            param_2[1] = (int)pRVar6;
            if (pRVar6 != (ReferenceController *)0x0) {
              util__ReferenceController__AddWeakReference(pRVar6);
            }
            if (pRVar1 != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference(pRVar1);
            }
          }
          if (pRVar6 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar6);
          }
        }
        util__Stack_class_util__WeakPtr_struct_UIWidget______Stack_class_util__WeakPtr_struct_UIWidget((Stack_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_1c);
      }
      param_1 = local_3c;
      local_c = local_c + 1;
      iVar4 = (**(code **)(*(int *)(uintptr_t)local_3c + 0xc))();
    } while (local_c < iVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

