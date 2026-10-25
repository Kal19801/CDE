// pilot_sweep_sweep03.c - assembled by scripts/sweep_assemble.py (r19)
// reuses fam8_assemble fix passes (zip oracle/in-batch protos/vft channel/data closure)
/* ---- r20 incomplete-type forward decls (pointer-position only) ---- */
typedef struct Darray Darray;
typedef struct Darray_L_GraphicsResource__Type_G_ Darray_L_GraphicsResource__Type_G_;
typedef struct Maybe Maybe;
typedef struct SharedPtr SharedPtr;
typedef struct Str Str;
typedef struct Vec3 Vec3;
typedef struct WeakPtr WeakPtr;
typedef struct WeakPtr_L_struct_OrbiterInterface_G_ WeakPtr_L_struct_OrbiterInterface_G_;
typedef struct tuple2 tuple2;
typedef struct Darray_L_bool_P_G_ Darray_L_bool_P__G_;
#include "port_prelude.h"
#include "cde_win32_compat.h"
#include "cde_types_r20.h"
typedef union {
  struct {
    undefined8 _0_8_;
    undefined8 _4_8_;
    undefined8 _8_8_;
    undefined8 _12_8_;
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
  undefined1 raw[32];
} slice_view;
/* ---- externs: stub-oracle names (K&R; ret types by call site) ---- */
extern int CompartmentCollisionShell__operator_(); /* K&R stub; ret by call site */
extern int DesignStatusBuffer__operator__o2(); /* K&R stub; ret by call site */
extern int FlareModule_GetPowerOutput_W_MemoizedFunction(); /* K&R stub; ret by call site */
extern int Itinerary_Itinerary__o3(); /* K&R stub; ret by call site */
extern int LibrationOrbit_GetActualOrbit_Memoize(); /* K&R stub; ret by call site */
extern int NodeMouseOver__dtor(); /* K&R stub; ret by call site */
extern int PendingBattle__operator_(); /* K&R stub; ret by call site */
extern int SpacecraftComponent__GetEstimatedMaxAngularAcceleration_radians__s2_Clear(); /* K&R stub; ret by call site */
extern int ThermalRocketSubModule_GetGasExpansionPlume_MemoizedFunction(); /* K&R stub; ret by call site */
extern int WorldObject__operator_(); /* K&R stub; ret by call site */
extern int util_Darray_struct_CompartmentCollisionShell_CheckSize(); /* K&R stub; ret by call site */
extern int util_Quaternion_double_Quaternion_double(); /* K&R stub; ret by call site */
extern int util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(); /* K&R stub; ret by call site */
extern int util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2(); /* K&R stub; ret by call site */
extern int util__Darray_class_util__WeakPtr_struct_UIWidget_____Darray_class_util__WeakPtr_struct_UIWidget__o2(); /* K&R stub; ret by call site */
extern int util__Darray_int___Darray_int__o3(); /* K&R stub; ret by call site */
extern int util__Darray_struct_ThrusterLayout___Darray_struct_ThrusterLayout__o2(); /* K&R stub; ret by call site */
extern int util__Darray_struct_WorldObject___CheckSize(); /* K&R stub; ret by call site */
extern int util__Darray_struct_WorldObject___SetSize(); /* K&R stub; ret by call site */
/* ---- r20 exref direct-bind (IAT slot reads -> direct refs) ---- */
#define fgetc_exref fgetc
#define rand_exref rand

//==== 0000489c30 00489c30_FUN_00489c30 ====
extern undefined4 FUN_00488bc0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void __fastcall FUN_00489c30(int param_1,int param_2);

// decompiled by BatchDecomp @ 00489c30 name=FUN_00489c30 conv=unknown body=848

void __fastcall FUN_00489c30(int param_1,int param_2)

{
  undefined4 stack0xfffffffc;
  byte *pbVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  code *pcVar11;
  int iVar12;
  int local_50;
  uint local_48[16];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  switch(param_2) {
  case 0xc2:
    DAT_009936c8 = "JPEG format not supported (progressive)";
    goto LAB_00489c6c;
  default:
    if (((0xdf < param_2) && (param_2 < 0xf0)) || (param_2 == 0xfe)) {
      iVar10 = FUN_00488570();
      if (*(FILE **)(param_1 + 0x10) != (FILE *)0x0) {
        fseek(*(FILE **)(param_1 + 0x10),iVar10 + -2,1);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar10 + -2;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
LAB_00489c6c:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0xc4:
    local_50 = FUN_00488570();
    local_50 = local_50 + -2;
    if (local_50 < 1) goto LAB_00489d7b;
    while( true ) {
      pcVar11 = fgetc_exref;
      iVar10 = 0;
      if (*(FILE **)(param_1 + 0x10) == (FILE *)0x0) {
        pbVar1 = *(byte **)(param_1 + 0x14);
        if (pbVar1 < *(byte **)(param_1 + 0x18)) {
          bVar2 = *pbVar1;
          *(byte **)(param_1 + 0x14) = pbVar1 + 1;
          uVar6 = (uint)bVar2;
        }
        else {
          uVar6 = 0;
        }
      }
      else {
        uVar6 = fgetc(*(FILE **)(param_1 + 0x10));
        pcVar11 = fgetc_exref;
        if (uVar6 == 0xffffffff) {
          uVar6 = 0;
        }
      }
      if ((1 < (int)uVar6 >> 4) || (3 < (uVar6 & 0xf))) break;
      iVar12 = 0;
      do {
        if (*(int *)(param_1 + 0x10) == 0) {
          pbVar1 = *(byte **)(param_1 + 0x14);
          if (pbVar1 < *(byte **)(param_1 + 0x18)) {
            bVar2 = *pbVar1;
            *(byte **)(param_1 + 0x14) = pbVar1 + 1;
            uVar8 = (uint)bVar2;
          }
          else {
            uVar8 = 0;
          }
        }
        else {
          uVar8 = (*pcVar11)(*(int *)(param_1 + 0x10));
          if (uVar8 == 0xffffffff) {
            uVar8 = 0;
          }
        }
        iVar10 = iVar10 + uVar8;
        local_48[iVar12] = uVar8;
        iVar12 = iVar12 + 1;
        pcVar11 = fgetc_exref;
      } while (iVar12 < 0x10);
      if ((int)uVar6 >> 4 == 0) {
        iVar12 = FUN_00488bc0();
        if (iVar12 == 0) goto LAB_00489c6c;
        iVar12 = 0x41c;
      }
      else {
        iVar12 = FUN_00488bc0();
        if (iVar12 == 0) goto LAB_00489c6c;
        iVar12 = 0x1e5c;
      }
      iVar7 = 0;
      if (0 < iVar10) {
        do {
          if (*(FILE **)(param_1 + 0x10) == (FILE *)0x0) {
            puVar3 = *(undefined1 **)(param_1 + 0x14);
            if (puVar3 < *(undefined1 **)(param_1 + 0x18)) {
              uVar4 = *puVar3;
              *(undefined1 **)(param_1 + 0x14) = puVar3 + 1;
            }
            else {
              uVar4 = 0;
            }
          }
          else {
            iVar9 = fgetc(*(FILE **)(param_1 + 0x10));
            if (iVar9 == -1) {
              iVar9 = 0;
            }
            uVar4 = (undefined1)iVar9;
          }
          *(undefined1 *)(iVar12 + (uVar6 & 0xf) * 0x690 + param_1 + iVar7) = uVar4;
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar10);
      }
      local_50 = (local_50 + -0x11) - iVar10;
      if (local_50 < 1) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    break;
  case 0xdb:
    iVar10 = FUN_00488570();
    pcVar11 = fgetc_exref;
    for (iVar10 = iVar10 + -2; 0 < iVar10; iVar10 = iVar10 + -0x41) {
      if (*(int *)(param_1 + 0x10) == 0) {
        pbVar1 = *(byte **)(param_1 + 0x14);
        if (pbVar1 < *(byte **)(param_1 + 0x18)) {
          uVar6 = (uint)*pbVar1;
          *(byte **)(param_1 + 0x14) = pbVar1 + 1;
        }
        else {
          uVar6 = 0;
        }
      }
      else {
        uVar6 = (*pcVar11)(*(int *)(param_1 + 0x10));
        pcVar11 = fgetc_exref;
        if (uVar6 == 0xffffffff) {
          uVar6 = 0;
        }
      }
      if (((uVar6 & 0xfffffff0) != 0) || (3 < (uVar6 & 0xf))) goto switchD_00489c5b_caseD_ff;
      iVar12 = 0;
      do {
        if (*(int *)(param_1 + 0x10) == 0) {
          puVar3 = *(undefined1 **)(param_1 + 0x14);
          if (puVar3 < *(undefined1 **)(param_1 + 0x18)) {
            uVar4 = *puVar3;
            *(undefined1 **)(param_1 + 0x14) = puVar3 + 1;
          }
          else {
            uVar4 = 0;
          }
        }
        else {
          iVar7 = (*pcVar11)(*(int *)(param_1 + 0x10));
          if (iVar7 == -1) {
            iVar7 = 0;
          }
          uVar4 = (undefined1)iVar7;
        }
        pcVar11 = fgetc_exref;
        pbVar1 = &DAT_0095b490 + iVar12;
        iVar12 = iVar12 + 1;
        *(undefined1 *)((uint)*pbVar1 + (uVar6 & 0xf) * 0x40 + 0x349c + param_1) = uVar4;
      } while (iVar12 < 0x40);
    }
LAB_00489d7b:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0xdd:
    iVar10 = FUN_00488570();
    if (iVar10 == 4) {
      uVar5 = FUN_00488570();
      *(undefined4 *)(param_1 + 0x36b8) = uVar5;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    break;
  case 0xff:
    break;
  }
switchD_00489c5b_caseD_ff:
  DAT_009936c8 = "Corrupt JPEG";
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000489fe0 00489fe0_FUN_00489fe0 ====
undefined4 __fastcall FUN_00489fe0(int param_1);

// decompiled by BatchDecomp @ 00489fe0 name=FUN_00489fe0 conv=unknown body=507

undefined4 __fastcall FUN_00489fe0(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  code *pcVar8;
  int *local_c;
  int local_8;
  
  iVar3 = FUN_00488570();
  pcVar8 = fgetc_exref;
  if (*(FILE **)(param_1 + 0x10) == (FILE *)0x0) {
    pbVar2 = *(byte **)(param_1 + 0x14);
    if (pbVar2 < *(byte **)(param_1 + 0x18)) {
      bVar1 = *pbVar2;
      *(byte **)(param_1 + 0x14) = pbVar2 + 1;
      uVar4 = (uint)bVar1;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = fgetc(*(FILE **)(param_1 + 0x10));
    if (uVar4 == 0xffffffff) {
      uVar4 = 0;
    }
  }
  *(uint *)(param_1 + 0x36a4) = uVar4;
  if (((((int)uVar4 < 1) || (4 < (int)uVar4)) || (*(int *)(param_1 + 8) < (int)uVar4)) ||
     (iVar3 != uVar4 * 2 + 6)) goto LAB_0048a1c8;
  local_8 = 0;
  if (0 < (int)uVar4) {
    local_c = (int *)(param_1 + 0x36a8);
    do {
      if (*(int *)(param_1 + 0x10) == 0) {
        pbVar2 = *(byte **)(param_1 + 0x14);
        if (pbVar2 < *(byte **)(param_1 + 0x18)) {
          bVar1 = *pbVar2;
          *(byte **)(param_1 + 0x14) = pbVar2 + 1;
          uVar4 = (uint)bVar1;
        }
        else {
          uVar4 = 0;
        }
LAB_0048a0b9:
        pbVar2 = *(byte **)(param_1 + 0x14);
        if (pbVar2 < *(byte **)(param_1 + 0x18)) {
          bVar1 = *pbVar2;
          *(byte **)(param_1 + 0x14) = pbVar2 + 1;
          uVar5 = (uint)bVar1;
        }
        else {
          uVar5 = 0;
        }
      }
      else {
        uVar4 = (*pcVar8)(*(int *)(param_1 + 0x10));
        if (uVar4 == 0xffffffff) {
          uVar4 = 0;
        }
        if (*(FILE **)(param_1 + 0x10) == (FILE *)0x0) goto LAB_0048a0b9;
        uVar5 = fgetc(*(FILE **)(param_1 + 0x10));
        if (uVar5 == 0xffffffff) {
          uVar5 = 0;
        }
      }
      iVar3 = *(int *)(param_1 + 8);
      iVar7 = 0;
      if (0 < iVar3) {
        puVar6 = (uint *)(param_1 + 0x35b4);
        do {
          if (*puVar6 == uVar4) break;
          iVar7 = iVar7 + 1;
          puVar6 = puVar6 + 0xe;
        } while (iVar7 < iVar3);
      }
      if (iVar7 == iVar3) {
        return 0;
      }
      *(int *)(param_1 + 0x35c4 + iVar7 * 0x38) = (int)uVar5 >> 4;
      if ((3 < (int)uVar5 >> 4) ||
         (*(uint *)(param_1 + 0x35c8 + iVar7 * 0x38) = uVar5 & 0xf, pcVar8 = fgetc_exref,
         3 < (uVar5 & 0xf))) goto LAB_0048a1c8;
      *local_c = iVar7;
      local_c = local_c + 1;
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(param_1 + 0x36a4));
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    pbVar2 = *(byte **)(param_1 + 0x14);
    if (pbVar2 < *(byte **)(param_1 + 0x18)) {
      bVar1 = *pbVar2;
      *(byte **)(param_1 + 0x14) = pbVar2 + 1;
      uVar4 = (uint)bVar1;
      goto LAB_0048a171;
    }
  }
  else {
    uVar4 = (*pcVar8)(*(int *)(param_1 + 0x10));
    if (uVar4 == 0xffffffff) {
      uVar4 = 0;
    }
LAB_0048a171:
    if (uVar4 != 0) goto LAB_0048a1c8;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    if (*(uint *)(param_1 + 0x14) < *(uint *)(param_1 + 0x18)) {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) + 1;
    }
  }
  else {
    (*pcVar8)(*(int *)(param_1 + 0x10));
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    pbVar2 = *(byte **)(param_1 + 0x14);
    if (*(byte **)(param_1 + 0x18) <= pbVar2) {
      return 1;
    }
    bVar1 = *pbVar2;
    *(byte **)(param_1 + 0x14) = pbVar2 + 1;
    uVar4 = (uint)bVar1;
  }
  else {
    uVar4 = (*pcVar8)(*(int *)(param_1 + 0x10));
    if (uVar4 == 0xffffffff) {
      uVar4 = 0;
    }
  }
  if (uVar4 == 0) {
    return 1;
  }
LAB_0048a1c8:
  DAT_009936c8 = "Corrupt JPEG";
  return 0;
}


//==== 000048ea10 0048ea10_FUN_0048ea10 ====
extern undefined4 FUN_00488550(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_004885f0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_004886f0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void * __fastcall FUN_0048ea10(int param_1,int *param_2,int *param_3,uint *param_4,int param_5);

// decompiled by BatchDecomp @ 0048ea10 name=FUN_0048ea10 conv=unknown body=959

void * __fastcall FUN_0048ea10(int param_1,int *param_2,int *param_3,uint *param_4,int param_5)

{
  byte bVar1;
  byte *pbVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  void *pvVar9;
  uint uVar10;
  int iVar11;
  code *pcVar12;
  int iVar13;
  char *pcVar14;
  int local_20;
  int local_14;
  
  iVar5 = FUN_00488570();
  iVar6 = FUN_00488570();
  if (iVar6 + iVar5 * 0x10000 != 0x38425053) {
    DAT_009936c8 = "Corrupt PSD image";
    return (void *)0x0;
  }
  iVar5 = FUN_00488570();
  if (iVar5 != 1) {
    DAT_009936c8 = "Unsupported version of PSD image";
    return (void *)0x0;
  }
  if (*(FILE **)(param_1 + 0x10) == (FILE *)0x0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 6;
  }
  else {
    fseek(*(FILE **)(param_1 + 0x10),6,1);
  }
  uVar7 = FUN_00488570();
  if (0x10 < uVar7) {
    DAT_009936c8 = "Unsupported number of channels in PSD image";
    return (void *)0x0;
  }
  iVar5 = FUN_00488570();
  iVar6 = FUN_00488570();
  iVar6 = iVar6 + iVar5 * 0x10000;
  iVar5 = FUN_00488570();
  iVar8 = FUN_00488570();
  iVar8 = iVar5 * 0x10000 + iVar8;
  iVar5 = FUN_00488570();
  if (iVar5 == 8) {
    iVar5 = FUN_00488570();
    if (iVar5 != 3) {
      DAT_009936c8 = "PSD is not in RGB color format";
      return (void *)0x0;
    }
    FUN_004885f0();
    FUN_00488550();
    FUN_004885f0();
    FUN_00488550();
    FUN_004885f0();
    FUN_00488550();
    iVar5 = FUN_00488570();
    if (1 < iVar5) {
      DAT_009936c8 = "PSD has an unknown compression format";
      return (void *)0x0;
    }
    iVar13 = iVar8 * iVar6;
    pvVar9 = malloc(iVar13 * 4);
    if (pvVar9 == (void *)0x0) {
      DAT_009936c8 = "Out of memory";
      return (void *)0x0;
    }
    if (iVar5 == 0) {
      local_20 = 0;
      do {
        pcVar14 = (char *)(local_20 + (int)pvVar9);
        if ((int)uVar7 < local_20) {
          if (0 < iVar13) {
            iVar5 = iVar13;
            do {
              *pcVar14 = (local_20 != 3) + -1;
              pcVar14 = pcVar14 + 4;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
        }
        else {
          iVar5 = iVar13;
          if (0 < iVar13) {
            do {
              if (*(FILE **)(param_1 + 0x10) == (FILE *)0x0) {
                pcVar3 = *(char **)(param_1 + 0x14);
                if (pcVar3 < *(char **)(param_1 + 0x18)) {
                  cVar4 = *pcVar3;
                  *(char **)(param_1 + 0x14) = pcVar3 + 1;
                }
                else {
                  cVar4 = '\0';
                }
              }
              else {
                iVar11 = fgetc(*(FILE **)(param_1 + 0x10));
                if (iVar11 == -1) {
                  iVar11 = 0;
                }
                cVar4 = (char)iVar11;
              }
              *pcVar14 = cVar4;
              pcVar14 = pcVar14 + 4;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
        }
        local_20 = local_20 + 1;
      } while (local_20 < 4);
    }
    else {
      FUN_00488550();
      local_20 = 0;
      pcVar12 = fgetc_exref;
      do {
        pcVar14 = (char *)(local_20 + (int)pvVar9);
        if (local_20 < (int)uVar7) {
          local_14 = 0;
          if (0 < iVar13) {
            do {
              if (*(int *)(param_1 + 0x10) == 0) {
                pbVar2 = *(byte **)(param_1 + 0x14);
                if (pbVar2 < *(byte **)(param_1 + 0x18)) {
                  bVar1 = *pbVar2;
                  *(byte **)(param_1 + 0x14) = pbVar2 + 1;
                  uVar10 = (uint)bVar1;
                  goto LAB_0048ec20;
                }
                uVar10 = 0;
LAB_0048ec7e:
                iVar5 = uVar10 + 1;
                local_14 = local_14 + iVar5;
                for (; iVar5 != 0; iVar5 = iVar5 + -1) {
                  if (*(int *)(param_1 + 0x10) == 0) {
                    pcVar3 = *(char **)(param_1 + 0x14);
                    if (pcVar3 < *(char **)(param_1 + 0x18)) {
                      cVar4 = *pcVar3;
                      *(char **)(param_1 + 0x14) = pcVar3 + 1;
                    }
                    else {
                      cVar4 = '\0';
                    }
                  }
                  else {
                    iVar11 = (*pcVar12)(*(int *)(param_1 + 0x10));
                    if (iVar11 == -1) {
                      iVar11 = 0;
                    }
                    cVar4 = (char)iVar11;
                  }
                  pcVar12 = fgetc_exref;
                  *pcVar14 = cVar4;
                  pcVar14 = pcVar14 + 4;
                }
              }
              else {
                uVar10 = (*pcVar12)(*(int *)(param_1 + 0x10));
                pcVar12 = fgetc_exref;
                if (uVar10 == 0xffffffff) {
                  uVar10 = 0;
                }
LAB_0048ec20:
                if (uVar10 != 0x80) {
                  if ((int)uVar10 < 0x80) goto LAB_0048ec7e;
                  if (0x80 < (int)uVar10) {
                    iVar5 = (uVar10 ^ 0xff) + 2;
                    if (*(int *)(param_1 + 0x10) == 0) {
                      pcVar3 = *(char **)(param_1 + 0x14);
                      if (pcVar3 < *(char **)(param_1 + 0x18)) {
                        cVar4 = *pcVar3;
                        *(char **)(param_1 + 0x14) = pcVar3 + 1;
                      }
                      else {
                        cVar4 = '\0';
                      }
                    }
                    else {
                      iVar11 = (*pcVar12)(*(int *)(param_1 + 0x10));
                      if (iVar11 == -1) {
                        iVar11 = 0;
                      }
                      cVar4 = (char)iVar11;
                    }
                    local_14 = local_14 + iVar5;
                    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
                      *pcVar14 = cVar4;
                      pcVar14 = pcVar14 + 4;
                    }
                  }
                }
              }
              pcVar12 = fgetc_exref;
            } while (local_14 < iVar13);
          }
        }
        else if (0 < iVar13) {
          iVar5 = iVar13;
          do {
            *pcVar14 = (local_20 != 3) + -1;
            pcVar14 = pcVar14 + 4;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        local_20 = local_20 + 1;
      } while (local_20 < 4);
    }
    if (((param_5 == 0) || (param_5 == 4)) ||
       (pvVar9 = (void *)FUN_004886f0(param_5,iVar8,iVar6), pvVar9 != (void *)0x0)) {
      if (param_4 != (uint *)0x0) {
        *param_4 = uVar7;
      }
      *param_3 = iVar6;
      *param_2 = iVar8;
      return pvVar9;
    }
  }
  else {
    DAT_009936c8 = "PSD bit depth is not 8 bit";
  }
  return (void *)0x0;
}


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


//==== 00004d6b40 004d6b40_FUN_004d6b40 ====
void FUN_004d6b40(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4, undefined4 *param_5,undefined4 *param_6);

// decompiled by BatchDecomp @ 004d6b40 name=FUN_004d6b40 conv=unknown body=534

void FUN_004d6b40(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  undefined4 stack0xfffffffc;
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  Str_L_char_G_ *pSVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  Str_L_char_G_ local_40;
  undefined1 *local_34;
  undefined1 *local_30;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  void *local_14;
  undefined4 local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar3 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*param_1)(&local_c);
      local_20.Length = 0;
      local_20.Data = (char *)0x0;
      local_20.Capacity = 0;
      if ((int)puVar4[1] < 1) {
        puVar8 = &cde_l2_0091985b_NullString;
      }
      else {
        puVar8 = (undefined1 *)*puVar4;
      }
      if ((int)param_3[1] < 1) {
        local_30 = &cde_l2_0091985b_NullString;
      }
      else {
        local_30 = (undefined1 *)*param_3;
      }
      if ((int)param_2[1] < 1) {
        local_34 = &cde_l2_0091985b_NullString;
      }
      else {
        local_34 = (undefined1 *)*param_2;
      }
      pSVar5 = GetModsPath(&local_40);
      if (pSVar5->Capacity < 1) {
        pcVar6 = "";
      }
      else {
        pcVar6 = pSVar5->Data;
      }
      util__Printf(&local_20,"%s/%s/%s.%s",pcVar6,local_34,local_30,puVar8);
      if (local_40.Data != (char *)0x0) {
        operator_delete__(local_40.Data);
        local_40.Data = (char *)0x0;
      }
      local_2c.Data = (char *)0x0;
      local_2c.Capacity = 0;
      local_2c.Length = 0;
      if ((int)puVar4[1] < 1) {
        puVar8 = &cde_l2_0091985b_NullString;
      }
      else {
        puVar8 = (undefined1 *)*puVar4;
      }
      if ((int)param_3[1] < 1) {
        puVar9 = &cde_l2_0091985b_NullString;
      }
      else {
        puVar9 = (undefined1 *)*param_3;
      }
      if ((int)param_2[1] < 1) {
        puVar10 = &cde_l2_0091985b_NullString;
      }
      else {
        puVar10 = (undefined1 *)*param_2;
      }
      if ((int)param_4[1] < 1) {
        puVar7 = &cde_l2_0091985b_NullString;
      }
      else {
        puVar7 = (undefined1 *)*param_4;
      }
      util__Printf(&local_2c,"%s/%s/%s.%s",puVar7,puVar10,puVar9,puVar8);
      bVar1 = util__DoesFileExist(&local_20);
      if (((bVar1) && (cVar2 = (*(code *)**(undefined4 **)*param_5)(&local_20), cVar2 != '\0')) &&
         (cVar2 = (*(code *)**(undefined4 **)*param_6)(&local_2c), cVar2 != '\0')) {
        local_14 = (void *)0x0;
        local_10 = 0;
        (**(code **)(*(int *)*param_5 + 0x10))(&local_14);
        (**(code **)(*(int *)*param_6 + 8))(&local_14);
        (**(code **)(*(int *)*param_5 + 4))();
        (**(code **)(*(int *)*param_6 + 4))();
        if (local_14 != (void *)0x0) {
          operator_delete__(local_14);
          local_14 = (void *)0x0;
        }
      }
      if (local_2c.Data != (char *)0x0) {
        operator_delete__(local_2c.Data);
        ((slice_view *)&local_2c)->_0_8_ = ((slice_view *)&local_2c)->_0_8_ & 0xffffffff00000000;
      }
      if (local_20.Data != (char *)0x0) {
        operator_delete__(local_20.Data);
        ((slice_view *)&local_20)->_0_8_ = ((slice_view *)&local_20)->_0_8_ & 0xffffffff00000000;
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*param_1 + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00004e2fa0 004e2fa0_GetNextMissionLabel ====
// decompiled by BatchDecomp @ 004e2fa0 name=GetNextMissionLabel conv=__thiscall body=417

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Str<char> __thiscall GameOverUI__GetNextMissionLabel(void)const  */

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
  uVar6 = (**(code **)(*param_2 + 0xc))();
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
  iVar10 = (**(code **)(*param_2 + 0xc))();
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
      iVar10 = (**(code **)(*param_2 + 0xc))();
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
  iVar8 = (**(code **)(*param_1 + 0xc))();
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
      iVar8 = (**(code **)(*param_1 + 0xc))();
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
  iVar6 = (**(code **)(*param_2 + 0xc))();
  util__Darray_class_util__Darray_struct_util__Vec2_double_______Darray_class_util__Darray_struct_util__Vec2_double__o2(param_1,iVar6);
  local_10 = 0;
  iVar6 = (**(code **)(*param_2 + 0xc))();
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
      iVar6 = (**(code **)(*param_2 + 0xc))();
    } while (local_10 < iVar6);
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


//==== 0000521890 00521890_ZeroOutArmorRings ====
// decompiled by BatchDecomp @ 00521890 name=ZeroOutArmorRings conv=__thiscall body=1035

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall ArmorMatrix__ZeroOutArmorRings(struct util::Range<int>) */

void __thiscall ArmorMatrix__ZeroOutArmorRings(ArmorMatrix *this,Range_L_int_G_ param_1)

{
  undefined4 stack0xfffffffc;
  undefined8 uVar1;
  CraftBlueprintArmor *pCVar2;
  bool bVar3;
  Vec2_L_double_G_ *pVVar4;
  undefined4 *puVar5;
  StrategicManager *extraout_ECX;
  StrategicManager *extraout_ECX_00;
  StrategicManager *this_00;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  double *pdVar11;
  int unaff_EDI;
  double dVar12;
  Vec2_L_double_G_ local_ac;
  DamageScar local_9c;
  double local_7c;
  double local_74;
  double local_6c;
  int local_64;
  undefined8 uStack_60;
  int local_58;
  int local_54;
  int local_50;
  Vec2_L_double_G_ local_4c;
  int local_3c;
  double local_38;
  undefined1 local_30;
  double local_28;
  undefined1 local_20;
  Range_L_double_G_ local_18;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_50 = 0;
  local_58 = (this->ArmorPlates).Size.Z;
  iVar8 = (this->ArmorPlates).Size.X;
  ((slice_view *)&uStack_60)->_0_4_ = (this->ArmorPlates).Size.Y;
  local_64 = iVar8;
  if (0 < local_58) {
    local_54 = (int)uStack_60 + -1;
    do {
      local_3c = 0;
      pcVar10 = DebugBreak_exref;
      if (0 < param_1.Lower) {
        do {
          iVar6 = 0;
          if (0 < iVar8) {
            do {
              if ((this->ArmorPlates).Data == (ArmorPlate *)0x0) {
                util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl"
                                ,0x355,"IsValid()",(char *)0x0);
                (*pcVar10)();
              }
              iVar8 = (this->ArmorPlates).Size.Y;
              iVar7 = (this->ArmorPlates).Size.X;
              iVar9 = (iVar8 * local_50 + local_3c) * iVar7 + iVar6;
              if ((iVar9 < 0) || ((this->ArmorPlates).Size.Z * iVar7 * iVar8 <= iVar9)) {
                util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl"
                                ,0x357,"Index >= 0 && Index < GetTotalSize()",(char *)0x0);
                DebugBreak();
              }
              ArmorPlate__Destroy((this->ArmorPlates).Data + iVar9);
              iVar6 = iVar6 + 1;
              iVar8 = local_64;
              pcVar10 = DebugBreak_exref;
            } while (iVar6 < local_64);
          }
          local_3c = local_3c + 1;
        } while (local_3c < param_1.Lower);
      }
      local_3c = param_1.Upper + 1;
      iVar6 = local_54;
      if (local_3c <= local_54) {
        do {
          iVar7 = 0;
          if (0 < iVar8) {
            do {
              if ((this->ArmorPlates).Data == (ArmorPlate *)0x0) {
                util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl"
                                ,0x355,"IsValid()",(char *)0x0);
                (*pcVar10)();
              }
              iVar8 = (this->ArmorPlates).Size.Y;
              iVar6 = (this->ArmorPlates).Size.X;
              iVar9 = (iVar8 * local_50 + local_3c) * iVar6 + iVar7;
              if ((iVar9 < 0) || ((this->ArmorPlates).Size.Z * iVar6 * iVar8 <= iVar9)) {
                util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl"
                                ,0x357,"Index >= 0 && Index < GetTotalSize()",(char *)0x0);
                DebugBreak();
              }
              ArmorPlate__Destroy((this->ArmorPlates).Data + iVar9);
              iVar7 = iVar7 + 1;
              iVar8 = local_64;
              iVar6 = local_54;
              pcVar10 = DebugBreak_exref;
            } while (iVar7 < local_64);
          }
          local_3c = local_3c + 1;
          pcVar10 = DebugBreak_exref;
        } while (local_3c <= iVar6);
      }
      local_50 = local_50 + 1;
    } while (local_50 < local_58);
  }
  CraftBlueprintArmor__GetPlateRangeHeights_m(this->Parent,&local_18,param_1);
  if (param_1.Lower < 1) {
    local_18.Lower = 0.0;
  }
  local_20 = param_1.Lower >= 1;
  pCVar2 = this->Parent;
  local_28 = local_18.Lower;
  CraftBlueprintArmor__GetArmorPlateCount_Memoize(pCVar2);
  if (*(char *)((pCVar2->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 4) == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  bVar3 = *(int *)((pCVar2->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 3) + -1 <=
          param_1.Upper;
  if (bVar3) {
    local_18.Upper = 0.0;
  }
  local_30 = !bVar3;
  pCVar2 = this->Parent;
  local_38 = local_18.Upper;
  CraftBlueprintArmor__GetArmorPlateCount_Memoize(pCVar2);
  this_00 = extraout_ECX;
  if (*(char *)((pCVar2->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 4) == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
    this_00 = extraout_ECX_00;
  }
  uVar1 = *(undefined8 *)
           ((int)(pCVar2->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x14);
  iVar8 = *(int *)((int)(pCVar2->GetMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 0x1c);
  local_64 = (int)uVar1;
  ((slice_view *)&uStack_60)->_0_4_ = (int)((ulonglong)uVar1 >> 0x20);
  local_58 = iVar8;
  dVar12 = StrategicManager__GetMinimumBattleRange_km(this_00);
  dVar12 = dVar12 * /*3fe0000000000000*/0.5;
  local_50 = 0;
  local_7c = dVar12 * /*3fe0000000000000*/0.5;
  local_6c = dVar12;
  do {
    pdVar11 = &local_28;
    if (local_50 != 0) {
      pdVar11 = &local_38;
    }
    if ((*(char *)(pdVar11 + 1) != '\0') && (local_3c = 0, 0 < iVar8)) {
      local_74 = dVar12 - /*3ff0000000000000*/1.0;
      do {
        pVVar4 = CraftBlueprintArmor__GetUnrolledDimensions_m(this->Parent,&local_ac,local_3c);
        local_54 = 0;
        iVar8 = (int)((pVVar4->X * /*4008000000000000*/3.0 + local_74) / local_6c);
        if (0 < iVar8) {
          uStack_60 = (double)iVar8;
          do {
            dVar12 = ((double)local_54 / uStack_60) * /*401921fb54442d18*/6.283185307179586;
            CraftBlueprintArmor__GetParametricLocationFromHeight(this->Parent,&local_4c,
                       (double)CONCAT44(SUB84(dVar12,0),(int)((ulonglong)*pdVar11 >> 0x20)),
                       (double)CONCAT44(local_3c,(int)((ulonglong)dVar12 >> 0x20)),unaff_EDI);
            iVar6 = rand();
            ((slice_view *)&local_9c.ParametricLocation.X)->_0_4_ = ((slice_view *)&local_4c.X)->_0_4_;
            ((slice_view *)&local_9c.ParametricLocation.X)->_4_4_ = ((slice_view *)&local_4c.X)->_4_4_;
            ((slice_view *)&local_9c.ParametricLocation.Y)->_0_4_ = ((slice_view *)&local_4c.Y)->_0_4_;
            ((slice_view *)&local_9c.ParametricLocation.Y)->_4_4_ = ((slice_view *)&local_4c.Y)->_4_4_;
            local_9c.Temperature_K = 0.0;
            local_9c.Radius_m =
                 ((double)iVar6 * /*3f00000000000000*/3.0517578125e-05 + /*3ff0000000000000*/1.0) * local_7c;
            puVar5 = (undefined4 *)(**(code **)*(int *)&this->TextureHandlers)(&local_3c);
            ArmorTextureHandler__QueueScarring((ArmorTextureHandler *)*puVar5,&local_9c,true);
            local_54 = local_54 + 1;
          } while (local_54 < iVar8);
        }
        local_3c = local_3c + 1;
        iVar8 = local_58;
        dVar12 = local_6c;
      } while (local_3c < local_58);
    }
    local_50 = local_50 + 1;
  } while (local_50 < 2);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
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
  uVar6 = (**(code **)(*param_2 + 0xc))();
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
  iVar10 = (**(code **)(*param_2 + 0xc))();
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
      iVar10 = (**(code **)(*param_2 + 0xc))();
    } while (local_c < iVar10);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005360c0 005360c0_FUN_005360c0 ====
void FUN_005360c0(int *param_1,int *param_2,Str_L_char_G_ *param_3);

// decompiled by BatchDecomp @ 005360c0 name=FUN_005360c0 conv=unknown body=496

void FUN_005360c0(int *param_1,int *param_2,Str_L_char_G_ *param_3)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  Str_L_char_G_ *pSVar4;
  LocStr *this;
  char *pcVar5;
  undefined1 *puVar6;
  char *pcVar7;
  int *piVar8;
  void *local_70[3];
  void *local_64;
  void *local_58[3];
  Str_L_char_G_ local_4c;
  Str_L_char_G_ local_40;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  int *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar1 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar1) {
    do {
      piVar8 = &local_c;
      piVar2 = (int *)(**(code **)*param_1)();
      local_10 = piVar2;
      if (*piVar2 != 0) {
        iVar1 = *param_2;
        *param_2 = iVar1 + 1;
        if (iVar1 != 0) {
          util__Str_char___Str_char__o5(&local_28,"\n");
          util__Str_char___operator__o10(param_3,&local_28);
          if (local_28.Data != (char *)0x0) {
            operator_delete__(local_28.Data);
            local_28.Data = (char *)0x0;
          }
        }
        util__Str_char___Str_char__o5(&local_34,"InfoBox CraftArmor");
        puVar3 = (undefined4 *)(**(code **)(*(int *)*piVar2 + 0x48))(local_58);
        if ((int)puVar3[1] < 1) {
          puVar6 = &cde_l2_0091985b_NullString;
        }
        else {
          puVar6 = (undefined1 *)*puVar3;
        }
        pSVar4 = PrintLength(&local_4c,
                             (double)CONCAT44(piVar8,(int)((ulonglong)*(undefined8 *)(local_10 + 2)
                                                          >> 0x20)));
        if (pSVar4->Capacity < 1) {
          pcVar7 = "";
        }
        else {
          pcVar7 = pSVar4->Data;
        }
        local_1c.Data = (char *)0x0;
        local_1c.Capacity = 0;
        local_1c.Length = 0;
        this = (LocStr *)util__LocStr__LocStr((LocStr *)local_70,&local_34,&local_1c);
        pSVar4 = util__LocStr__operator__o3(this);
        if (pSVar4->Capacity < 1) {
          pcVar5 = "";
        }
        else {
          pcVar5 = pSVar4->Data;
        }
        pSVar4 = util__Printf(&local_40,pcVar5,pcVar7,puVar6);
        util__Str_char___operator__o10(param_3,pSVar4);
        if (local_40.Data != (char *)0x0) {
          operator_delete__(local_40.Data);
          local_40.Data = (char *)0x0;
        }
        if (local_64 != (void *)0x0) {
          operator_delete__(local_64);
          local_64 = (void *)0x0;
        }
        if (local_70[0] != (void *)0x0) {
          operator_delete__(local_70[0]);
          local_70[0] = (void *)0x0;
        }
        if (local_1c.Data != (char *)0x0) {
          operator_delete__(local_1c.Data);
          local_1c.Data = (char *)0x0;
        }
        if (local_4c.Data != (char *)0x0) {
          operator_delete__(local_4c.Data);
          local_4c.Data = (char *)0x0;
        }
        if (local_58[0] != (void *)0x0) {
          operator_delete__(local_58[0]);
          local_58[0] = (void *)0x0;
        }
        if (local_34.Data != (char *)0x0) {
          operator_delete__(local_34.Data);
          local_34.Data = (char *)0x0;
        }
      }
      local_c = local_c + 1;
      iVar1 = (**(code **)(*param_1 + 0xc))();
    } while (local_c < iVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000536580 00536580_FUN_00536580 ====
void FUN_00536580(int *param_1,int param_2,Darray_L_struct_CrewJob_G_ *param_3);

// decompiled by BatchDecomp @ 00536580 name=FUN_00536580 conv=unknown body=487

void FUN_00536580(int *param_1,int param_2,Darray_L_struct_CrewJob_G_ *param_3)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  char cVar6;
  undefined1 *puVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  Str_L_char_G_ local_54;
  double local_48;
  undefined1 local_40;
  Str_L_char_G_ local_38;
  double local_2c;
  int *local_24;
  int *local_20;
  int local_1c;
  undefined1 local_15;
  int local_14;
  char local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_24 = param_1;
  local_c = 0;
  iVar3 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar3) {
    do {
      piVar4 = (int *)(**(code **)*param_1)(&local_c);
      piVar9 = *(int **)(param_3 + 4);
      local_20 = piVar9 + *(int *)(param_3 + 8) * 8;
      local_1c = 0;
      local_2c = (double)*(int *)(param_2 + 4) * *(double *)(piVar4 + 4);
      if (piVar9 != local_20) {
        iVar3 = *piVar4;
        piVar8 = piVar9 + 2;
        do {
          if ((*piVar9 == iVar3) && (piVar8[1] == piVar4[3])) {
            if (*piVar8 < 1) {
              pcVar5 = "";
            }
            else {
              pcVar5 = (char *)piVar8[-1];
            }
            if (piVar4[2] < 1) {
              puVar7 = &cde_l2_0091985b_NullString;
            }
            else {
              puVar7 = (undefined1 *)piVar4[1];
            }
            cVar6 = *pcVar5;
            if (cVar6 != '\0') {
              iVar3 = (int)puVar7 - (int)pcVar5;
              do {
                if (cVar6 != pcVar5[iVar3]) goto LAB_00536640;
                cVar6 = pcVar5[1];
                pcVar5 = pcVar5 + 1;
              } while (cVar6 != '\0');
            }
            if ((char)piVar8[4] == (char)piVar4[6]) {
              local_14 = local_1c;
              local_10 = '\x01';
              goto LAB_0053665f;
            }
LAB_00536640:
            iVar3 = *piVar4;
          }
          piVar9 = piVar9 + 8;
          local_1c = local_1c + 1;
          piVar8 = piVar8 + 8;
        } while (piVar9 != local_20);
      }
      local_14 = 0;
      local_10 = '\0';
LAB_0053665f:
      if (local_10 == '\0') {
        util__Str_char___Str_char(&local_38,(Str_L_char_G_ *)(piVar4 + 1));
        local_15 = (undefined1)piVar4[6];
        iVar3 = *piVar4;
        util__Str_char___Str_char(&local_54,&local_38);
        local_40 = local_15;
        local_48 = local_2c;
        if (local_38.Data != (char *)0x0) {
          operator_delete__(local_38.Data);
          local_38.Data = (char *)0x0;
        }
        iVar1 = *(int *)(param_3 + 8);
        local_1c = iVar1 + 1;
        util__Darray_struct_CrewJob___SetSize(param_3,&local_1c);
        bVar2 = util__Darray_struct_CrewJob___CheckSize(param_3,iVar1);
        if (bVar2) {
          iVar1 = *(int *)(param_3 + 4);
          iVar10 = *(int *)(param_3 + 8) * 0x20;
          *(int *)(iVar1 + -0x20 + iVar10) = iVar3;
          util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x1c + iVar10),&local_54);
          *(double *)(iVar1 + -0x10 + iVar10) = local_2c;
          *(undefined1 *)(iVar1 + -8 + iVar10) = local_15;
        }
        if (local_54.Data != (char *)0x0) {
          operator_delete__(local_54.Data);
        }
      }
      else {
        iVar3 = (*(code *)**(undefined4 **)param_3)(&local_14);
        *(double *)(iVar3 + 0x10) = *(double *)(iVar3 + 0x10) + local_2c;
      }
      param_1 = local_24;
      local_c = local_c + 1;
      iVar3 = (**(code **)(*local_24 + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000053a150 0053a150_FUN_0053a150 ====
void FUN_0053a150(DesignStatusBuffer *param_1,int *param_2,undefined4 *param_3);

// decompiled by BatchDecomp @ 0053a150 name=FUN_0053a150 conv=unknown body=457

void FUN_0053a150(DesignStatusBuffer *param_1,int *param_2,undefined4 *param_3)

{
  undefined4 stack0xfffffffc;
  DesignStatusMessage *pDVar1;
  int iVar2;
  undefined4 *puVar3;
  DesignStatusBuffer *pDVar4;
  DesignStatusMessage *pDVar5;
  Str_L_char_G_ *this;
  Darray_L_class_DesignStatusMessage_G_ *this_00;
  DesignStatusBuffer local_50;
  DesignStatusBuffer local_38;
  int *local_20;
  DesignStatusBuffer *local_1c;
  DesignStatusBuffer *local_18;
  int local_14;
  Darray_L_class_DesignStatusMessage_G_ *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  param_1->DataManager = (DataParser *)0x0;
  (param_1->Messages)._pad_0x0_0 = 0;
  (param_1->Messages).Data = (DesignStatusMessage *)0x0;
  (param_1->Messages).Size = 0;
  local_1c = param_1;
  local_20 = param_2;
  *(undefined8 *)&(param_1->Messages).Capacity = 0;
  DesignStatusBuffer__DesignStatusBuffer(param_1,(DataParser *)0x0);
  local_c = 0;
  iVar2 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar2) {
    this_00 = (Darray_L_class_DesignStatusMessage_G_ *)&param_1->Messages;
    local_10 = this_00;
    do {
      puVar3 = (undefined4 *)(**(code **)*param_2)(&local_c);
      iVar2 = (**(code **)(*(int *)*puVar3 + 0x130))();
      if ((iVar2 == 4) && ((Module *)puVar3[4] != (Module *)0x0)) {
        RadiatorModule__GetConditionalStatuses((RadiatorModule *)*puVar3,&local_50,(DataParser *)*param_3,(Module *)puVar3[4]);
      }
      else {
        DesignStatusBuffer__DesignStatusBuffer(&local_50,(DataParser *)*param_3);
      }
      pDVar4 = DesignStatusBuffer__operator__o2(param_1,&local_38,&local_50);
      param_1->DataManager = pDVar4->DataManager;
      local_18 = pDVar4;
      local_14 = (**(code **)(*(int *)&pDVar4->Messages + 0xc))();
      util__Darray_class_DesignStatusMessage___SetSize(this_00,&local_14);
      iVar2 = (**(code **)(*(int *)&pDVar4->Messages + 0xc))();
      if (iVar2 == 0) {
        (**(code **)(*(int *)this_00 + 0x10))();
      }
      else {
        util__Darray_class_DesignStatusMessage___CheckSizeDestructive(this_00);
        pDVar5 = (pDVar4->Messages).Data;
        this = *(Str_L_char_G_ **)(this_00 + 4);
        this_00 = local_10;
        if (pDVar5 != (DesignStatusMessage *)((pDVar4->Messages).Size * 0x54 + (int)pDVar5)) {
          do {
            util__Str_char___operator__o8(this,(Str_L_char_G_ *)pDVar5);
            util__Str_char___operator__o8(this + 1,(Str_L_char_G_ *)&(pDVar5->Text).Capacity);
            util__Str_char___operator__o8(this + 2,(Str_L_char_G_ *)&(pDVar5->StringPayloads).Data);
            util__Str_char___operator__o8(this + 3,(Str_L_char_G_ *)&pDVar5->Placer);
            this[4].Data = pDVar5[1].Text.Data;
            util__Str_char___operator__o8
                      ((Str_L_char_G_ *)&this[4].Capacity,(Str_L_char_G_ *)&pDVar5[1].Text.Capacity);
            util__Darray_class_util__Str_char_____operator__o2
                      ((Darray_L_class_util__Str_L_char_G___G_ *)&this[5].Capacity,
                       (Darray_L_class_util__Str_L_char_G___G_ *)&pDVar5[1].StringPayloads.Data);
            pDVar1 = pDVar5 + 2;
            pDVar5 = (DesignStatusMessage *)&pDVar5[2].MessageType;
            this[6].Length = (int)pDVar1->Message;
            this = this + 7;
            this_00 = local_10;
          } while (pDVar5 != (DesignStatusMessage *)
                             ((pDVar4->Messages).Size * 0x54 + (int)(pDVar4->Messages).Data));
        }
      }
      param_1 = local_1c;
      local_1c->AutoWarningFlag = local_18->AutoWarningFlag;
      local_1c->AutoErrorFlag = local_18->AutoErrorFlag;
      local_38.Messages._pad_0x0_0 = (int)((void *)(0x0091da30u));
      if (local_38.Messages.Data != (DesignStatusMessage *)0x0) {
        DesignStatusMessage___vector_deleting_destructor_(local_38.Messages.Data,3);
      }
      local_38.Messages.Data = (DesignStatusMessage *)0x0;
      local_38.Messages._pad_0x0_0 = (int)((void *)(0x00919488u));
      local_50.Messages._pad_0x0_0 = (int)((void *)(0x0091da30u));
      if (local_50.Messages.Data != (DesignStatusMessage *)0x0) {
        DesignStatusMessage___vector_deleting_destructor_(local_50.Messages.Data,3);
      }
      param_2 = local_20;
      local_c = local_c + 1;
      iVar2 = (**(code **)(*local_20 + 0xc))();
    } while (local_c < iVar2);
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
  iVar3 = (**(code **)(*piVar2 + 0xc))();
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
      iVar3 = (**(code **)(*piVar2 + 0xc))();
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
  iVar3 = (**(code **)(*piVar2 + 0xc))();
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
      iVar3 = (**(code **)(*piVar2 + 0xc))();
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
  uVar7 = (**(code **)(*param_2 + 0xc))();
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
  iVar12 = (**(code **)(*param_2 + 0xc))();
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
      iVar12 = (**(code **)(*param_2 + 0xc))();
    } while (local_c < iVar12);
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
/* private: class util::Str<char> __thiscall UIModuleInfo__GetCostChartTitle(void)const  */

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

/* private: class util::Str<char> __thiscall UIModuleInfo__GetMassChartTitle(void)const  */

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
  uVar5 = (**(code **)(*param_2 + 0xc))();
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
  iVar9 = (**(code **)(*param_2 + 0xc))();
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
      iVar9 = (**(code **)(*param_2 + 0xc))();
    } while (local_c < iVar9);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005b26a0 005b26a0_GetAdvancedInfo ====
// decompiled by BatchDecomp @ 005b26a0 name=GetAdvancedInfo conv=__thiscall body=482

/* public: virtual class util::Str<char> __thiscall EngineModule__GetAdvancedInfo(void)const  */

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

/* public: class util::Str<char> __thiscall EngineModule__GetEngineInfo(void)const  */

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


//==== 00005bceb0 005bceb0_OnDamage ====
// decompiled by BatchDecomp @ 005bceb0 name=OnDamage conv=__thiscall body=427

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual struct DamagerContainer __thiscall PropellantTankCompartment__OnDamage(struct
   util::PhysicalState<struct util::Vec3<double> >,struct util::Quaternion<double>,struct
   util::PhysicalState<struct util::Vec3<double> >,struct DamagerContainer,struct CompartmentPiece
   *,int,double) */

DamagerContainer * __thiscall
PropellantTankCompartment__OnDamage(PropellantTankCompartment *this,DamagerContainer *__return_storage_ptr__,
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
  bool bVar1;
  int in_stack_00000108;
  undefined8 in_stack_00000110;
  
  ModuleCompartment__OnDamage((ModuleCompartment *)this,__return_storage_ptr__,param_3,param_4,param_5,param_6,
             param_7,param_8,param_9,param_10,param_11,param_12,param_13,param_14,param_15,param_16,
             param_17,param_18,param_19,param_20,param_21,param_22,param_23,param_24,param_25,
             param_26,param_27,param_28,param_29,param_30,param_31,param_32,param_33,param_34,
             param_35,param_36,param_37,param_38,param_39);
  bVar1 = ArmorPlate__IsDestroyed((ArmorPlate *)(in_stack_00000108 + 0x150));
  if (bVar1) {
    OnDestroy(this,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
              param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,param_20,
              param_21,param_22,in_stack_00000110);
    this->ReactionMass_kg = 0.0;
  }
  return __return_storage_ptr__;
}


//==== 00005c0240 005c0240_GetAdvancedInfo ====
// decompiled by BatchDecomp @ 005c0240 name=GetAdvancedInfo conv=__thiscall body=577

/* public: virtual class util::Str<char> __thiscall ResistojetModule__GetAdvancedInfo(void)const  */

Str_L_char_G_ * __thiscall
ResistojetModule__GetAdvancedInfo(ResistojetModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xfffffffc;
  Str_L_char_G_ *pSVar1;
  LocStr *this_00;
  char *pcVar2;
  char *pcVar3;
  undefined4 unaff_EDI;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *local_90[3];
  void *local_84;
  Str_L_char_G_ local_78;
  Str_L_char_G_ local_6c;
  Str_L_char_G_ local_60;
  Str_L_char_G_ local_54;
  Str_L_char_G_ local_48;
  Str_L_char_G_ local_3c;
  Str_L_char_G_ local_30;
  ResistojetModule *local_24;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_24 = this;
  util__Str_char___Str_char__o5(&local_78,"InfoBox Resistojet");
  util__Str_char___Str_char__o5(&local_6c,"\n");
  dVar4 = ThermalRocketSubModule__GetChamberPressure_Pa((ThermalRocketSubModule *)&(this->ThermalRocket).Injector._pad_0x0_0);
  uVar5 = *(undefined4 *)&dVar4;
  uVar6 = *(undefined4 *)((char *)&dVar4 + 4);
  dVar4 = GetChamberTemperature_K(this);
  dVar4 = Material__GetDissociationFraction(*(Material **)&(this->ThermalRocket).NozzleExpansionAngle_degrees,dVar4,
                     (double)CONCAT44(uVar6,uVar5));
  local_14.Capacity = *(undefined4 *)&dVar4;
  local_14.Length = (int)((ulonglong)dVar4 >> 0x20);
  pSVar1 = PrintPercent(&local_60,(double)CONCAT44(unaff_EDI,local_14.Length));
  if (pSVar1->Capacity < 1) {
    pcVar2 = "";
  }
  else {
    pcVar2 = pSVar1->Data;
  }
  local_30.Data = (char *)0x0;
  local_30.Capacity = 0;
  local_30.Length = 0;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)local_90,&local_78,&local_30);
  pSVar1 = util__LocStr__operator__o3(this_00);
  if (pSVar1->Capacity < 1) {
    pcVar3 = "";
  }
  else {
    pcVar3 = pSVar1->Data;
  }
  pSVar1 = EngineModule__GetAdvancedInfo((EngineModule *)local_24,&local_48);
  local_14.Length = 0;
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  util__Str_char___Str_char(&local_14,pSVar1);
  util__Str_char___operator__o10(&local_14,&local_6c);
  util__Str_char___Str_char(&local_3c,&local_14);
  if (local_14.Data != (char *)0x0) {
    operator_delete__(local_14.Data);
    local_14.Data = (char *)0x0;
  }
  pSVar1 = util__Printf(&local_54,pcVar3,pcVar2);
  local_20.Length = 0;
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  util__Str_char___Str_char(&local_20,&local_3c);
  util__Str_char___operator__o10(&local_20,pSVar1);
  util__Str_char___Str_char(__return_storage_ptr__,&local_20);
  if (local_20.Data != (char *)0x0) {
    operator_delete__(local_20.Data);
  }
  if (local_3c.Data != (char *)0x0) {
    operator_delete__(local_3c.Data);
  }
  if (local_48.Data != (char *)0x0) {
    operator_delete__(local_48.Data);
    local_48.Data = (char *)0x0;
  }
  if (local_54.Data != (char *)0x0) {
    operator_delete__(local_54.Data);
    local_54.Data = (char *)0x0;
  }
  if (local_84 != (void *)0x0) {
    operator_delete__(local_84);
    local_84 = (void *)0x0;
  }
  if (local_90[0] != (void *)0x0) {
    operator_delete__(local_90[0]);
    local_90[0] = (void *)0x0;
  }
  if (local_30.Data != (char *)0x0) {
    operator_delete__(local_30.Data);
    local_30.Data = (char *)0x0;
  }
  if (local_60.Data != (char *)0x0) {
    operator_delete__(local_60.Data);
    local_60.Data = (char *)0x0;
  }
  if (local_6c.Data != (char *)0x0) {
    operator_delete__(local_6c.Data);
  }
  if (local_78.Data != (char *)0x0) {
    operator_delete__(local_78.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 00005c4a30 005c4a30_GetCombustionChamberColor ====
// decompiled by BatchDecomp @ 005c4a30 name=GetCombustionChamberColor conv=__thiscall body=513

/* public: struct util::Vec4<float> __thiscall
   ThermalRocketSubModule__GetCombustionChamberColor(int)const  */

Vec4_L_float_G_ * __thiscall
ThermalRocketSubModule__GetCombustionChamberColor(ThermalRocketSubModule *this,Vec4_L_float_G_ *__return_storage_ptr__,int param_1)

{
  int iVar1;
  bool bVar2;
  GasExpansionPlume *pGVar3;
  float unaff_EDI;
  GasExpansionPlume local_b0;
  Maybe_L_double_G_ local_78;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  undefined **local_48;
  void *local_44;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  bool local_18;
  bool local_10;
  int local_8;
  
  local_58 = this->CachedChamberLength_m;
  local_50 = (this->ThroatRadius_m * /*400921fb54442d18*/3.141592653589793 * this->ThroatRadius_m *
             this->ChamberContractionRatio) / /*400921fb54442d18*/3.141592653589793;
  util__Sqrt(&local_78,&local_50);
  if (local_78.IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_60 = local_78.Data;
  local_68 = this->CachedChamberTemperature_K;
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
    pGVar3 = ThermalRocketSubModule_GetGasExpansionPlume_MemoizedFunction(this,&local_b0);
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
    *(undefined4 *)((int)&(this->GetGasExpansionPlume_MemoizedValue).Data.StartTemperature_K + 4) =
         ((slice_view *)&uStack_30)->_4_4_;
    local_48 = ((void *)(0x00919b30u));
    *(undefined4 *)&(this->GetGasExpansionPlume_MemoizedValue).Data.ExhaustVelocity_km__s =
         (undefined4)local_28;
    *(undefined4 *)((int)&(this->GetGasExpansionPlume_MemoizedValue).Data.ExhaustVelocity_km__s + 4)
         = ((slice_view *)&local_28)->_4_4_;
    *(undefined4 *)&(this->GetGasExpansionPlume_MemoizedValue).Data.MassFlowRate_kg__s =
         (undefined4)uStack_20;
    *(undefined4 *)((int)&(this->GetGasExpansionPlume_MemoizedValue).Data.MassFlowRate_kg__s + 4) =
         ((slice_view *)&uStack_20)->_4_4_;
    (this->GetGasExpansionPlume_MemoizedValue).IsValidData = local_10;
    if (local_44 != (void *)0x0) {
      operator_delete__(local_44);
    }
    local_44 = (void *)0x0;
    local_48 = ((void *)(0x00919488u));
    local_b0.Products._pad_0x0_0 = (int)((void *)(0x00919b30u));
    if (local_b0.Products.Data != (MaterialConstituent *)0x0) {
      operator_delete__(local_b0.Products.Data);
    }
    local_b0.Products.Data = (MaterialConstituent *)0x0;
    local_b0.Products._pad_0x0_0 = (int)((void *)(0x00919488u));
    if ((this->GetGasExpansionPlume_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  GasExpansionPlume__GetExhaustColor(&(this->GetGasExpansionPlume_MemoizedValue).Data,__return_storage_ptr__,
             (double)CONCAT44(SUB84(local_60,0),(int)((ulonglong)local_68 >> 0x20)),
             (double)CONCAT44(SUB84(local_58,0),(int)((ulonglong)local_60 >> 0x20)),
             (double)CONCAT44((float)param_1,(int)((ulonglong)local_58 >> 0x20)),unaff_EDI);
  return __return_storage_ptr__;
}


//==== 00005c6a30 005c6a30_GetPrimarySurfaceArea_m2 ====
// decompiled by BatchDecomp @ 005c6a30 name=GetPrimarySurfaceArea_m2 conv=__thiscall body=538

/* public: double __thiscall ThermalRocketSubModule__GetPrimarySurfaceArea_m2(void)const  */

double __thiscall ThermalRocketSubModule__GetPrimarySurfaceArea_m2(ThermalRocketSubModule *this)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  float10 extraout_ST0;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  Maybe_L_double_G_ local_38;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18 = 0.0;
  iVar1 = 0;
  do {
    fVar2 = (float)iVar1;
    iVar1 = iVar1 + 1;
    local_10 = (double)(fVar2 * /*3e000000*/0.125f);
    dVar5 = (double)((float)iVar1 * /*3e000000*/0.125f);
    dVar3 = local_10 * local_10;
    local_20 = (this->ThroatRadius_m * /*400921fb54442d18*/3.141592653589793 * this->ThroatRadius_m *
               this->NozzleExpansionRatio) / /*400921fb54442d18*/3.141592653589793;
    util__Sqrt(&local_38,&local_20);
    if (local_38.IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    local_28 = this->ThroatRadius_m;
    dVar4 = local_38.Data - local_28;
    local_20 = GetNozzleLength_m(this);
    local_18 = local_18 +
               local_20 * (dVar5 * dVar5 - dVar3) *
               (dVar4 * dVar5 + local_28 + dVar4 * local_10 + local_28) * /*3fe0000000000000*/0.5 *
               /*401921fb54442d18*/6.283185307179586;
  } while (iVar1 < 8);
  local_28 = this->CachedChamberLength_m;
  local_10 = (this->ThroatRadius_m * /*400921fb54442d18*/3.141592653589793 * this->ThroatRadius_m *
             this->ChamberContractionRatio) / /*400921fb54442d18*/3.141592653589793;
  util__Sqrt(&local_38,&local_10);
  if (local_38.IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar3 = local_38.Data * /*400921fb54442d18*/3.141592653589793 * local_38.Data;
  local_10 = ((local_38.Data * /*401921fb54442d18*/6.283185307179586 * local_28 + dVar3 + dVar3) -
             this->ThroatRadius_m * /*400921fb54442d18*/3.141592653589793 * this->ThroatRadius_m) + local_18;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00005cb2d0 005cb2d0_FUN_005cb2d0 ====
extern undefined4 FUN_005cb070(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void FUN_005cb2d0(Darray_L_bool_P__G_ *param_1,Darray_L_bool_P__G_ *param_2,undefined4 param_3);

// decompiled by BatchDecomp @ 005cb2d0 name=FUN_005cb2d0 conv=unknown body=528

void FUN_005cb2d0(Darray_L_bool_P__G_ *param_1,Darray_L_bool_P__G_ *param_2,undefined4 param_3)

{
  undefined4 stack0xfffffffc;
  uint uVar1;
  void *pvVar2;
  int iVar3;
  Darray_L_bool_P__G_ *pDVar4;
  uint uVar5;
  uint uVar6;
  int local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
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
  uint uStack_10;
  uint local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  uVar1 = (**(code **)(*(int *)param_2 + 0xc))();
  if (uVar1 == 0) {
    util__Darray_bool____Darray_bool(param_1,param_2);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_2c = (undefined **)0x0;
  pvStack_28 = (void *)0x0;
  uStack_24 = 0;
  uStack_20 = 0;
  util__Darray_bool____Darray_bool((Darray_L_bool_P_G_ *)&local_2c,param_2);
  local_1c = ((void *)(0x009194a4u));
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
  pDVar4 = (Darray_L_bool_P_G_ *)&local_2c;
  local_34 = (Darray_L_bool_P_G_ *)&local_1c;
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
          FUN_005cb070(local_30,local_34,&local_48,&local_44,&local_40,&local_3c,&local_c,param_3);
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
  util__Darray_bool____Darray_bool(param_1,pDVar4);
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


//==== 00005e2ef0 005e2ef0_GetCollisionShells ====
// decompiled by BatchDecomp @ 005e2ef0 name=GetCollisionShells conv=__thiscall body=632

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall RadiatorCompartment__GetCollisionShells(struct
   util::Quaternion<double>,class util::Darray<struct CompartmentCollisionShell> *)const  */

void __thiscall
RadiatorCompartment__GetCollisionShells(RadiatorCompartment *this,Quaternion_L_double_G_ param_1,
          Darray_L_struct_CompartmentCollisionShell_G_ *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  CollisionPlane *pCVar5;
  ReferenceControllerRegistry *this_00;
  ReferenceController *this_01;
  int iVar6;
  RadiatorCompartment *pRVar7;
  CollisionPlane local_1e0;
  CompartmentCollisionShell local_188;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  ReferenceController *local_18;
  ReferenceController *local_14;
  RadiatorCompartment *local_10;
  int local_c;
  RadiatorCompartment *local_8;
  
  bVar2 = false;
  bVar1 = false;
  local_14 = (ReferenceController *)0x0;
  iVar6 = 0;
  local_c = 0;
  local_10 = this;
  iVar4 = (**(code **)(*(int *)&this->RadiatorArmor + 0xc))();
  if (0 < iVar4) {
    do {
      pRVar7 = local_10;
      pCVar5 = GetRadiatorCollisionPlane(local_10,&local_1e0,iVar6,param_1);
      local_50 = *(undefined4 *)&(pCVar5->Location_km).X;
      uStack_4c = *(undefined4 *)((int)&(pCVar5->Location_km).X + 4);
      uStack_48 = *(undefined4 *)&(pCVar5->Location_km).Y;
      uStack_44 = *(undefined4 *)((int)&(pCVar5->Location_km).Y + 4);
      local_20 = (pCVar5->Location_km).Z;
      local_60 = *(undefined4 *)&(pCVar5->Normal).X;
      uStack_5c = *(undefined4 *)((int)&(pCVar5->Normal).X + 4);
      uStack_58 = *(undefined4 *)&(pCVar5->Normal).Y;
      uStack_54 = *(undefined4 *)((int)&(pCVar5->Normal).Y + 4);
      local_28 = (pCVar5->Normal).Z;
      local_70 = *(undefined4 *)&(pCVar5->Tangent).X;
      uStack_6c = *(undefined4 *)((int)&(pCVar5->Tangent).X + 4);
      uStack_68 = *(undefined4 *)&(pCVar5->Tangent).Y;
      uStack_64 = *(undefined4 *)((int)&(pCVar5->Tangent).Y + 4);
      local_30 = (pCVar5->Tangent).Z;
      local_38 = (pCVar5->Size_km).X;
      local_40 = (pCVar5->Size_km).Y;
      this_00 = util__ReferenceControllerRegistry__Get();
      this_01 = util__ReferenceControllerRegistry__GetController(this_00,pRVar7);
      if (this_01 == (ReferenceController *)0x0) {
        bVar1 = true;
        local_18 = (ReferenceController *)0x0;
        this_01 = (ReferenceController *)0x0;
        local_8 = (RadiatorCompartment *)0x0;
      }
      else {
        bVar2 = true;
        local_14 = this_01;
        util__ReferenceController__AddWeakReference(this_01);
        local_8 = local_10;
        util__ReferenceController__AddWeakReference(this_01);
      }
      if ((bVar1) && (bVar1 = false, local_18 != (ReferenceController *)0x0)) {
        util__ReferenceController__ReleaseWeakReference(local_18);
      }
      if ((bVar2) && (bVar2 = false, local_14 != (ReferenceController *)0x0)) {
        util__ReferenceController__ReleaseWeakReference(local_14);
      }
      local_188.Compartment.Pointer = (ModuleCompartment *)local_8;
      local_188.Compartment.Controller = this_01;
      if (this_01 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(this_01);
      }
      local_188.ID = 0;
      ((slice_view *)&local_188)->_12_4_ = local_c;
      local_188.Pillar.Data.Capped = false;
      local_188.Pillar.IsValidData = false;
      local_188.Plane.IsValidData = true;
      local_188.Sphere.IsValidData = false;
      ((slice_view *)&local_188.Pillar.Data.Tube_km.A.X)->_0_4_ = 0;
      ((slice_view *)&local_188.Pillar.Data.Tube_km.A.X)->_4_4_ = 0;
      ((slice_view *)&local_188.Pillar.Data.Tube_km.A.Y)->_0_4_ = 0;
      ((slice_view *)&local_188.Pillar.Data.Tube_km.A.Y)->_4_4_ = 0;
      ((slice_view *)&local_188.Pillar.Data.Tube_km.A.Z)->_0_4_ = 0;
      ((slice_view *)&local_188.Pillar.Data.Tube_km.A.Z)->_4_4_ = 0;
      ((slice_view *)&local_188.Pillar.Data.Tube_km.B.X)->_0_4_ = 0;
      ((slice_view *)&local_188.Pillar.Data.Tube_km.B.X)->_4_4_ = 0;
      ((slice_view *)&local_188.Pillar.Data.Tube_km.B.Y)->_0_4_ = 0;
      ((slice_view *)&local_188.Pillar.Data.Tube_km.B.Y)->_4_4_ = 0;
      ((slice_view *)&local_188.Pillar.Data.Tube_km.B.Z)->_0_4_ = 0;
      ((slice_view *)&local_188.Pillar.Data.Tube_km.B.Z)->_4_4_ = 0;
      ((slice_view *)&local_188.Pillar.Data.TubeDirection.X)->_0_4_ = 0;
      ((slice_view *)&local_188.Pillar.Data.TubeDirection.X)->_4_4_ = 0;
      ((slice_view *)&local_188.Pillar.Data.TubeDirection.Y)->_0_4_ = 0;
      ((slice_view *)&local_188.Pillar.Data.TubeDirection.Y)->_4_4_ = 0;
      ((slice_view *)&local_188.Pillar.Data.TubeDirection.Z)->_0_4_ = 0;
      ((slice_view *)&local_188.Pillar.Data.TubeDirection.Z)->_4_4_ = 0;
      ((slice_view *)&local_188.Pillar.Data.TubeUp.X)->_0_4_ = 0;
      ((slice_view *)&local_188.Pillar.Data.TubeUp.X)->_4_4_ = 0;
      ((slice_view *)&local_188.Pillar.Data.TubeUp.Y)->_0_4_ = 0;
      ((slice_view *)&local_188.Pillar.Data.TubeUp.Y)->_4_4_ = 0;
      ((slice_view *)&local_188.Pillar.Data.TubeUp.Z)->_0_4_ = 0;
      ((slice_view *)&local_188.Pillar.Data.TubeUp.Z)->_4_4_ = 0;
      ((slice_view *)&local_188.Pillar.Data.Radii_km.X)->_0_4_ = 0;
      ((slice_view *)&local_188.Pillar.Data.Radii_km.X)->_4_4_ = 0;
      ((slice_view *)&local_188.Pillar.Data.Radii_km.Y)->_0_4_ = 0;
      ((slice_view *)&local_188.Pillar.Data.Radii_km.Y)->_4_4_ = 0;
      ((slice_view *)&local_188.Plane.Data.Location_km.X)->_0_4_ = local_50;
      ((slice_view *)&local_188.Plane.Data.Location_km.X)->_4_4_ = uStack_4c;
      ((slice_view *)&local_188.Plane.Data.Location_km.Y)->_0_4_ = uStack_48;
      ((slice_view *)&local_188.Plane.Data.Location_km.Y)->_4_4_ = uStack_44;
      local_188.Plane.Data.Location_km.Z = local_20;
      ((slice_view *)&local_188.Plane.Data.Normal.X)->_0_4_ = local_60;
      ((slice_view *)&local_188.Plane.Data.Normal.X)->_4_4_ = uStack_5c;
      ((slice_view *)&local_188.Plane.Data.Normal.Y)->_0_4_ = uStack_58;
      ((slice_view *)&local_188.Plane.Data.Normal.Y)->_4_4_ = uStack_54;
      local_188.Plane.Data.Normal.Z = local_28;
      ((slice_view *)&local_188.Plane.Data.Tangent.X)->_0_4_ = local_70;
      ((slice_view *)&local_188.Plane.Data.Tangent.X)->_4_4_ = uStack_6c;
      ((slice_view *)&local_188.Plane.Data.Tangent.Y)->_0_4_ = uStack_68;
      ((slice_view *)&local_188.Plane.Data.Tangent.Y)->_4_4_ = uStack_64;
      local_188.Plane.Data.Tangent.Z = local_30;
      local_188.Plane.Data.Size_km.X = local_38;
      local_188.Plane.Data.Size_km.Y = local_40;
      ((slice_view *)&local_188.Sphere.Data.Center_km.X)->_0_4_ = 0;
      ((slice_view *)&local_188.Sphere.Data.Center_km.X)->_4_4_ = 0;
      ((slice_view *)&local_188.Sphere.Data.Center_km.Y)->_0_4_ = 0;
      ((slice_view *)&local_188.Sphere.Data.Center_km.Y)->_4_4_ = 0;
      ((slice_view *)&local_188.Sphere.Data.Center_km.Z)->_0_4_ = 0;
      ((slice_view *)&local_188.Sphere.Data.Center_km.Z)->_4_4_ = 0;
      ((slice_view *)&local_188.Sphere.Data.Radius_km)->_0_4_ = 0;
      ((slice_view *)&local_188.Sphere.Data.Radius_km)->_4_4_ = 0;
      if (this_01 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(this_01);
      }
      iVar4 = *(int *)(param_2 + 8);
      local_8 = (RadiatorCompartment *)(iVar4 + 1);
      util__Darray_struct_CompartmentCollisionShell___SetSize(param_2,(int *)&local_8);
      bVar3 = util_Darray_struct_CompartmentCollisionShell_CheckSize(param_2,iVar4);
      if (bVar3) {
        CompartmentCollisionShell__operator_((CompartmentCollisionShell *)
                   (*(int *)(param_2 + 8) * 0x118 + *(int *)(param_2 + 4) + -0x118),&local_188);
        this_01 = local_188.Compartment.Controller;
      }
      if (this_01 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(this_01);
      }
      iVar6 = local_c + 1;
      local_c = iVar6;
      iVar4 = (**(code **)(*(int *)&local_10->RadiatorArmor + 0xc))();
    } while (iVar6 < iVar4);
  }
  return;
}


//==== 00005e4a10 005e4a10_GetRadiatorInfo ====
// decompiled by BatchDecomp @ 005e4a10 name=GetRadiatorInfo conv=__thiscall body=686

/* public: class util::Str<char> __thiscall RadiatorModule__GetRadiatorInfo(void)const  */

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

/* public: class util::Str<char> __thiscall RadiatorModule__GetSampleHeatInfo(void)const  */

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


//==== 00005e8bf0 005e8bf0_GetGeneratedName ====
// decompiled by BatchDecomp @ 005e8bf0 name=GetGeneratedName conv=__thiscall body=1061

/* public: virtual class util::Str<char> __thiscall RefuelerModule__GetGeneratedName(void)const  */

Str_L_char_G_ * __thiscall
RefuelerModule__GetGeneratedName(RefuelerModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xfffffed8;
  undefined4 stack0xfffffffc;
  Str_L_char_G_ SVar1;
  LocStr *pLVar2;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *pSVar4;
  int unaff_EDI;
  float10 fVar5;
  char *pcVar6;
  int iVar7;
  void *local_110[3];
  void *local_104;
  void *local_f8[3];
  void *local_ec;
  void *local_e0[3];
  void *local_d4;
  Str_L_char_G_ local_c8;
  void *local_bc;
  Str_L_char_G_ local_b0;
  Str_L_char_G_ local_a4;
  Str_L_char_G_ local_98;
  Str_L_char_G_ local_8c;
  Str_L_char_G_ local_80;
  Str_L_char_G_ local_74;
  Str_L_char_G_ local_68;
  Str_L_char_G_ local_5c;
  Str_L_char_G_ local_50;
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  util__Str_char___Str_char__o5(&local_c8,"Misc AutoRefueler");
  util__Str_char___Str_char__o5(&local_80,"Space");
  util__Str_char___Str_char__o5(&local_74,"Space");
  util__Str_char___Str_char__o5(&local_68,"GetPowerRequired_W()");
  local_5c.Data = (char *)0x0;
  pSVar4 = &local_74;
  local_5c.Capacity = 0;
  local_5c.Length = 0;
  local_50.Data = (char *)0x0;
  local_50.Capacity = 0;
  local_50.Length = 0;
  local_44.Data = (char *)0x0;
  local_44.Capacity = 0;
  local_44.Length = 0;
  pcVar6 = (char *)0x5e8c94;
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_e0,pSVar4,&local_44);
  iVar7 = 0x5e8c9b;
  pSVar3 = util__LocStr__operator__o3(pLVar2);
  GetUnitsOfType((Str_L_char_G_ *)&stack0xfffffed8,&local_68);
  fVar5 = (float10)(**(code **)(*(int *)this + 0x9c))();
  SVar1.Capacity = iVar7;
  SVar1.Data = (char *)pSVar4;
  SVar1.Length = unaff_EDI;
  pSVar4 = Print(&local_b0,(double)CONCAT44(pcVar6,(int)((ulonglong)(double)fVar5 >> 0x20)),SVar1);
  local_14.Length = 0;
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  util__Str_char___Str_char(&local_14,pSVar4);
  util__Str_char___operator__o10(&local_14,pSVar3);
  util__Str_char___Str_char(&local_a4,&local_14);
  if (local_14.Data != (char *)0x0) {
    operator_delete__(local_14.Data);
    ((slice_view *)&local_14)->_0_8_ = ((slice_view *)&local_14)->_0_8_ & 0xffffffff00000000;
  }
  pSVar4 = (Str_L_char_G_ *)(**(code **)(*(int *)this[1]._pad_0x0_0 + 0x48))();
  local_20.Length = 0;
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  util__Str_char___Str_char(&local_20,&local_a4);
  util__Str_char___operator__o10(&local_20,pSVar4);
  util__Str_char___Str_char(&local_98,&local_20);
  if (local_20.Data != (char *)0x0) {
    operator_delete__(local_20.Data);
    ((slice_view *)&local_20)->_0_8_ = ((slice_view *)&local_20)->_0_8_ & 0xffffffff00000000;
  }
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_f8,&local_80,&local_50);
  pSVar4 = util__LocStr__operator__o3(pLVar2);
  local_2c.Length = 0;
  local_2c.Data = (char *)0x0;
  local_2c.Capacity = 0;
  util__Str_char___Str_char(&local_2c,&local_98);
  util__Str_char___operator__o10(&local_2c,pSVar4);
  util__Str_char___Str_char(&local_8c,&local_2c);
  if (local_2c.Data != (char *)0x0) {
    operator_delete__(local_2c.Data);
    ((slice_view *)&local_2c)->_0_8_ = ((slice_view *)&local_2c)->_0_8_ & 0xffffffff00000000;
  }
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_110,&local_c8,&local_5c);
  pSVar4 = util__LocStr__operator__o3(pLVar2);
  local_38.Length = 0;
  local_38.Data = (char *)0x0;
  local_38.Capacity = 0;
  util__Str_char___Str_char(&local_38,&local_8c);
  util__Str_char___operator__o10(&local_38,pSVar4);
  util__Str_char___Str_char(__return_storage_ptr__,&local_38);
  if (local_38.Data != (char *)0x0) {
    operator_delete__(local_38.Data);
  }
  if (local_8c.Data != (char *)0x0) {
    operator_delete__(local_8c.Data);
  }
  if (local_98.Data != (char *)0x0) {
    operator_delete__(local_98.Data);
  }
  if (local_a4.Data != (char *)0x0) {
    operator_delete__(local_a4.Data);
  }
  if (local_b0.Data != (char *)0x0) {
    operator_delete__(local_b0.Data);
    local_b0.Data = (char *)0x0;
  }
  if (local_d4 != (void *)0x0) {
    operator_delete__(local_d4);
    local_d4 = (void *)0x0;
  }
  if (local_e0[0] != (void *)0x0) {
    operator_delete__(local_e0[0]);
    local_e0[0] = (void *)0x0;
  }
  if (local_44.Data != (char *)0x0) {
    operator_delete__(local_44.Data);
    local_44.Data = (char *)0x0;
  }
  if (local_bc != (void *)0x0) {
    operator_delete__(local_bc);
    local_bc = (void *)0x0;
  }
  if (local_ec != (void *)0x0) {
    operator_delete__(local_ec);
    local_ec = (void *)0x0;
  }
  if (local_f8[0] != (void *)0x0) {
    operator_delete__(local_f8[0]);
    local_f8[0] = (void *)0x0;
  }
  if (local_50.Data != (char *)0x0) {
    operator_delete__(local_50.Data);
    local_50.Data = (char *)0x0;
  }
  if (local_104 != (void *)0x0) {
    operator_delete__(local_104);
    local_104 = (void *)0x0;
  }
  if (local_110[0] != (void *)0x0) {
    operator_delete__(local_110[0]);
    local_110[0] = (void *)0x0;
  }
  if (local_5c.Data != (char *)0x0) {
    operator_delete__(local_5c.Data);
    local_5c.Data = (char *)0x0;
  }
  if (local_68.Data != (char *)0x0) {
    operator_delete__(local_68.Data);
    local_68.Data = (char *)0x0;
  }
  if (local_74.Data != (char *)0x0) {
    operator_delete__(local_74.Data);
    local_74.Data = (char *)0x0;
  }
  if (local_80.Data != (char *)0x0) {
    operator_delete__(local_80.Data);
    local_80.Data = (char *)0x0;
  }
  if (local_c8.Data != (char *)0x0) {
    operator_delete__(local_c8.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 00005eac30 005eac30_FuelUp ====
// decompiled by BatchDecomp @ 005eac30 name=FuelUp conv=__thiscall body=775

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall RefuelerCompartment__FuelUp(class util::WeakPtr<class
   SpacecraftComponent>,double) */

bool __thiscall
RefuelerCompartment__FuelUp(RefuelerCompartment *this,SpacecraftComponent *param_2,ReferenceController *param_3,
          undefined8 param_4)

{
  undefined4 stack0xfffffffc;
  Body *this_00;
  SpacecraftComponent *pSVar1;
  ReferenceController *this_01;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  SpacecraftComponent *this_02;
  undefined4 unaff_ESI;
  ReferenceController *this_03;
  ReferenceController *this_04;
  double dVar7;
  undefined4 uVar8;
  ReferenceController *local_3c;
  SpacecraftComponent *local_34;
  Darray_L_class_util__WeakPtr_L_struct_PropellantTankCompartment_G___G_ local_28[16];
  Darray_L_class_util__WeakPtr_L_struct_PropellantTankCompartment_G___G_ local_18[16];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_34 = param_2;
  bVar4 = false;
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_3);
  }
  if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
     !bVar3)) {
    this->_pad_0x0_0 = 0;
  }
  this_00 = (Body *)this->_pad_0x0_0;
  Body__GetSpacecraftComponent_Memoize(this_00);
  if ((this_00->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pSVar1 = (this_00->GetSpacecraftComponent_MemoizedValue).Data.Pointer;
  this_01 = (this_00->GetSpacecraftComponent_MemoizedValue).Data.Controller;
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_01);
  }
  if ((this_01 == param_3) && (pSVar1 == param_2)) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\modules\\othermodules\\refuelermodules.cpp"
                    ,0xd5,"Refuelee != Refueler",(char *)0x0);
    DebugBreak();
  }
  this_02 = pSVar1;
  this_03 = this_01;
  this_04 = param_3;
  if (this->ReverseFueling != false) {
    if (param_3 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(param_3);
    }
    local_3c = param_3;
    if (this_01 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_01);
    }
    if (param_3 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(param_3);
      util__ReferenceController__AddWeakReference(param_3);
    }
    if (this_01 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(this_01);
    }
    this_02 = param_2;
    this_03 = param_3;
    this_04 = this_01;
    local_34 = pSVar1;
    if (param_3 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(param_3);
    }
  }
  if ((this_04 != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid(this_04), !bVar3)) {
    local_34 = (SpacecraftComponent *)0x0;
  }
  puVar6 = (undefined4 *)SpacecraftComponent__GetCraft(local_34);
  if (((ReferenceController *)puVar6[1] != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar6[1]), !bVar3)
     ) {
    *puVar6 = 0;
  }
  CraftInstance__GetReactionMassSuppliers((CraftInstance *)*puVar6,(Material *)local_18);
  if (local_3c != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_3c);
  }
  bVar3 = PropellantTankCompartment__ArePropellantTanksAtMaximum(local_18);
  if (!bVar3) {
    iVar2 = this->_pad_0x0_0;
    if ((this_03 != (ReferenceController *)0x0) &&
       (bVar4 = util__ReferenceController__IsDataStillValid(this_03), !bVar4)) {
      this_02 = (SpacecraftComponent *)0x0;
    }
    puVar6 = (undefined4 *)SpacecraftComponent__GetCraft(this_02);
    if (((ReferenceController *)puVar6[1] != (ReferenceController *)0x0) &&
       (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar6[1]),
       !bVar4)) {
      *puVar6 = 0;
    }
    bVar4 = true;
    dVar7 = CraftInstance__GetReactionMassOfType((CraftInstance *)*puVar6,*(Material **)(iVar2 + 0xb8));
    if (/*0000000000000000*/0.0 < dVar7) {
      bVar3 = true;
      bVar4 = true;
      goto LAB_005eae43;
    }
  }
  bVar3 = false;
LAB_005eae43:
  if ((local_3c != (ReferenceController *)0x0) && (bVar4)) {
    util__ReferenceController__ReleaseWeakReference(local_3c);
  }
  if (bVar3) {
    if ((this_03 != (ReferenceController *)0x0) &&
       (bVar4 = util__ReferenceController__IsDataStillValid(this_03), !bVar4)) {
      this_02 = (SpacecraftComponent *)0x0;
    }
    puVar6 = (undefined4 *)SpacecraftComponent__GetCraft(this_02);
    if (((ReferenceController *)puVar6[1] != (ReferenceController *)0x0) &&
       (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar6[1]),
       !bVar4)) {
      *puVar6 = 0;
    }
    CraftInstance__GetReactionMassSuppliers((CraftInstance *)*puVar6,(Material *)local_28);
    if (local_3c != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_3c);
    }
    uVar8 = *(undefined4 *)((char *)&param_4 + 4);
    PropellantTankCompartment__SiphonFromMultiplePropellantTanks(local_28,(double)CONCAT44(unaff_ESI,uVar8));
    PropellantTankCompartment__PushIntoMultiplePropellantTanks(local_18,(double)CONCAT44(unaff_ESI,uVar8));
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_28);
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_18);
  if (this_03 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_03);
  }
  if (this_04 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_04);
  }
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar5;
}


//==== 00005eaf40 005eaf40_GetFuelingInfo ====
// decompiled by BatchDecomp @ 005eaf40 name=GetFuelingInfo conv=__thiscall body=428

/* public: class util::Str<char> __thiscall RefuelerModule__GetFuelingInfo(void)const  */

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


//==== 00005f3e80 005f3e80_OnScarTexture ====
// decompiled by BatchDecomp @ 005f3e80 name=OnScarTexture conv=__thiscall body=448

/* public: void __thiscall TurretSubModule__OnScarTexture(class util::WeakPtr<class
   ArmorTextureHandler>,struct util::Quaternion<double>,struct Vec3_L_double_G_,struct
   Vec3_L_double_G_,struct Vec3_L_double_G_,double)const  */

void __thiscall
TurretSubModule__OnScarTexture(TurretSubModule *this,ArmorTextureHandler *param_2,ReferenceController *param_3,
          double param_4,double param_5,double param_6,double param_7,undefined4 param_8,
          undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
          undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
          undefined8 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,
          undefined4 param_21,undefined8 param_22,double param_23)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  Vec3_L_double_G_ VVar5;
  Vec3_L_double_G_ VVar6;
  Vec3_L_double_G_ VVar7;
  Quaternion_L_double_G_ QVar8;
  Vec3_L_double_G_ VVar9;
  bool bVar10;
  double *pdVar11;
  undefined4 unaff_ESI;
  Quaternion_L_double_G_ local_54;
  DamageScar local_34;
  Vec2_L_double_G_ local_14;
  
  ((slice_view *)&VVar7.Z)->_0_4_ = (int)/*3ff0000000000000*/1.0;
  VVar7.X = 0.0;
  VVar7.Y = 0.0;
  ((slice_view *)&VVar7.Z)->_4_4_ = (int)((ulonglong)/*3ff0000000000000*/1.0 >> 0x20);
  ((slice_view *)&VVar9.X)->_4_4_ = param_9;
  ((slice_view *)&VVar9.X)->_0_4_ = param_8;
  ((slice_view *)&VVar9.Y)->_0_4_ = param_10;
  ((slice_view *)&VVar9.Y)->_4_4_ = param_11;
  ((slice_view *)&VVar9.Z)->_0_4_ = (int)param_12;
  ((slice_view *)&VVar9.Z)->_4_4_ = (int)((ulonglong)param_12 >> 0x20);
  pdVar11 = (double *)util_Quaternion_double_Quaternion_double(&local_54,VVar7,VVar9);
  dVar4 = pdVar11[3];
  local_34.Radius_m = *pdVar11;
  local_34.Temperature_K = pdVar11[1];
  dVar2 = ((param_4 * dVar4 + param_5 * pdVar11[2]) - param_6 * local_34.Temperature_K) +
          param_7 * local_34.Radius_m;
  local_14.Y = 0.0;
  local_14.X = dVar2;
  dVar3 = (param_5 * dVar4 - param_4 * pdVar11[2]) + param_6 * *pdVar11 +
          param_7 * local_34.Temperature_K;
  dVar1 = (param_4 * local_34.Temperature_K - param_5 * *pdVar11) + param_6 * dVar4 +
          param_7 * pdVar11[2];
  dVar4 = param_7 * dVar4 -
          (param_5 * local_34.Temperature_K + param_4 * local_34.Radius_m + param_6 * pdVar11[2]);
  ((slice_view *)&VVar5.X)->_4_4_ = param_15;
  ((slice_view *)&VVar5.X)->_0_4_ = param_14;
  ((slice_view *)&VVar5.Y)->_0_4_ = param_16;
  ((slice_view *)&VVar5)->_12_8_ = param_17;
  ((slice_view *)&VVar5.Z)->_4_4_ = param_18;
  ((slice_view *)&VVar6.X)->_4_4_ = param_20;
  ((slice_view *)&VVar6.X)->_0_4_ = param_19;
  ((slice_view *)&VVar6.Y)->_0_4_ = param_21;
  ((slice_view *)&VVar6.Y)->_4_4_ = (int)param_22;
  ((slice_view *)&VVar6.Z)->_0_4_ = (int)((ulonglong)param_22 >> 0x20);
  ((slice_view *)&VVar6.Z)->_4_4_ = *(undefined4 *)&dVar2;
  ((slice_view *)&QVar8.X)->_4_4_ = *(undefined4 *)&dVar3;
  ((slice_view *)&QVar8.X)->_0_4_ = (int)((ulonglong)dVar2 >> 0x20);
  ((slice_view *)&QVar8.Y)->_0_4_ = (int)((ulonglong)dVar3 >> 0x20);
  ((slice_view *)&QVar8.Y)->_4_4_ = *(undefined4 *)&dVar1;
  ((slice_view *)&QVar8.Z)->_0_4_ = (int)((ulonglong)dVar1 >> 0x20);
  ((slice_view *)&QVar8.Z)->_4_4_ = *(undefined4 *)&dVar4;
  ((slice_view *)&QVar8.W)->_0_4_ = (int)((ulonglong)dVar4 >> 0x20);
  ((slice_view *)&QVar8.W)->_4_4_ = unaff_ESI;
util__OnScarTexture(&local_14,VVar5,VVar6,QVar8);
  local_34.Temperature_K = this->ArmorComposition->ThermalConductivity_W__m_K;
  ((slice_view *)&local_34.ParametricLocation.X)->_0_4_ = ((slice_view *)&local_14.X)->_0_4_;
  ((slice_view *)&local_34.ParametricLocation.X)->_4_4_ = ((slice_view *)&local_14.X)->_4_4_;
  ((slice_view *)&local_34.ParametricLocation.Y)->_0_4_ = ((slice_view *)&local_14.Y)->_0_4_;
  ((slice_view *)&local_34.ParametricLocation.Y)->_4_4_ = ((slice_view *)&local_14.Y)->_4_4_;
  local_34.Radius_m = param_23;
  if ((param_3 != (ReferenceController *)0x0) &&
     (bVar10 = util__ReferenceController__IsDataStillValid(param_3), !bVar10)) {
    param_2 = (ArmorTextureHandler *)0x0;
  }
  ArmorTextureHandler__QueueScarring(param_2,&local_34,false);
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  return;
}


//==== 00005faed0 005faed0_GetAdvancedInfo ====
#undef GetFlameTemperature_K /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 005faed0 name=GetAdvancedInfo conv=__thiscall body=474

/* public: virtual class util::Str<char> __thiscall FlareModule__GetAdvancedInfo(void)const  */

Str_L_char_G_ * __thiscall
FlareModule__GetAdvancedInfo(FlareModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xffffff68;
  Str_L_char_G_ SVar1;
  Str_L_char_G_ *pSVar2;
  LocStr *pLVar3;
  Str_L_char_G_ *pSVar4;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ *pSVar5;
  int unaff_ESI;
  double dVar6;
  char *in_stack_ffffff68;
  int iVar7;
  Str_L_char_G_ *__return_storage_ptr___00;
  char *pcVar8;
  void *local_88[3];
  void *local_7c;
  void *local_70[3];
  void *local_64;
  Str_L_char_G_ local_58;
  Str_L_char_G_ local_4c;
  Str_L_char_G_ local_40;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_58,"Pyrotechnic.GetFlameTemperature_K()");
  util__Str_char___Str_char__o5(&local_34,"Colon");
  pcVar8 = "BurnTemperature";
  iVar7 = 0x5faf03;
  util__Str_char___Str_char__o5(&local_28,"BurnTemperature");
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  local_1c.Length = 0;
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff68,&local_58);
  dVar6 = CombustionMixtureSubModule__GetFlameTemperature_K((CombustionMixtureSubModule *)&(this->Pyrotechnic).CachedMass_kg);
  SVar1.Capacity = (int)pcVar8;
  SVar1.Data = (char *)iVar7;
  SVar1.Length = unaff_ESI;
  pSVar2 = Print(&local_4c,(double)CONCAT44(in_stack_ffffff68,(int)((ulonglong)dVar6 >> 0x20)),SVar1
                );
  __return_storage_ptr___00 = __return_storage_ptr__;
  pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_88,&local_34,&local_1c);
  pSVar4 = util__LocStr__operator__o3(pLVar3);
  pSVar5 = &local_40;
  pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_70,&local_28,&local_10);
  this_00 = util__LocStr__operator__o3(pLVar3);
  pSVar5 = util__Str_char___operator(this_00,pSVar5,pSVar4);
  util__Str_char___operator(pSVar5,__return_storage_ptr___00,pSVar2);
  if (local_40.Data != (char *)0x0) {
    operator_delete__(local_40.Data);
    local_40.Data = (char *)0x0;
  }
  if (local_64 != (void *)0x0) {
    operator_delete__(local_64);
    local_64 = (void *)0x0;
  }
  if (local_70[0] != (void *)0x0) {
    operator_delete__(local_70[0]);
    local_70[0] = (void *)0x0;
  }
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
    local_10.Data = (char *)0x0;
  }
  if (local_7c != (void *)0x0) {
    operator_delete__(local_7c);
    local_7c = (void *)0x0;
  }
  if (local_88[0] != (void *)0x0) {
    operator_delete__(local_88[0]);
    local_88[0] = (void *)0x0;
  }
  if (local_1c.Data != (char *)0x0) {
    operator_delete__(local_1c.Data);
    local_1c.Data = (char *)0x0;
  }
  if (local_4c.Data != (char *)0x0) {
    operator_delete__(local_4c.Data);
    local_4c.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    operator_delete__(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    operator_delete__(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_58.Data != (char *)0x0) {
    operator_delete__(local_58.Data);
  }
  return __return_storage_ptr__;
}


//==== 00005fc140 005fc140_GetFlareInfo ====
// decompiled by BatchDecomp @ 005fc140 name=GetFlareInfo conv=__thiscall body=617

/* public: class util::Str<char> __thiscall FlareModule__GetFlareInfo(void)const  */

Str_L_char_G_ * __thiscall
FlareModule__GetFlareInfo(FlareModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xffffff4c;
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  Str_L_char_G_ SVar4;
  bool bVar5;
  Str_L_char_G_ *pSVar6;
  LocStr *pLVar7;
  Str_L_char_G_ *pSVar8;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ *pSVar9;
  int unaff_EDI;
  double dVar10;
  char *in_stack_ffffff4c;
  char *pcVar11;
  Str_L_char_G_ *__return_storage_ptr___00;
  char *pcVar12;
  float local_9c;
  float fStack_98;
  float fStack_94;
  undefined4 uStack_90;
  void *local_8c[3];
  void *local_80;
  void *local_74[3];
  void *local_68;
  Str_L_char_G_ local_5c;
  Str_L_char_G_ local_50;
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  int local_8;
  
  util__Str_char___Str_char__o5(&local_5c,"GetPowerOutput_W()");
  util__Str_char___Str_char__o5(&local_38,"Colon");
  pcVar12 = "PowerOutput";
  pcVar11 = (char *)0x5fc175;
  util__Str_char___Str_char__o5(&local_2c,"PowerOutput");
  if (*(char *)&(this->GetFlameColor_MemoizedValue).Data.Z == '\0') {
    iVar2 = *(int *)&(this->GetBurnTime_s_MemoizedValue).IsValidData;
    local_8 = iVar2 + 1;
    util__Darray_struct_util__tuple2_enum_Order__Type_int_____SetSize((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)
               &this->GetBurnTime_s_MemoizedValue,&local_8);
    pcVar11 = (char *)0x5fc1a3;
    bVar5 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->GetBurnTime_s_MemoizedValue,iVar2);
    if (bVar5) {
      iVar2 = *(int *)((int)&(this->GetBurnTime_s_MemoizedValue).Data + 4);
      iVar3 = *(int *)&(this->GetBurnTime_s_MemoizedValue).IsValidData;
      *(code **)(iVar2 + -8 + iVar3 * 8) = ChemicalReaction__GetEnergyDensity_J__kg_Clear;
      *(undefined4 *)(iVar2 + -4 + iVar3 * 8) = 0;
    }
    pcVar12 = (char *)0x5fc1c7;
    dVar10 = FlareModule_GetPowerOutput_W_MemoizedFunction(this);
    ((slice_view *)&fStack_94)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&fStack_94)->_1_3_[0] | (((slice_view *)&fStack_94)->_1_3_[1] << 8) | (((slice_view *)&fStack_94)->_1_3_[2] << 16)) << 8));
    local_9c = *(undefined4 *)&dVar10;
    fStack_98 = (float)((ulonglong)dVar10 >> 0x20);
    (this->GetFlameColor_MemoizedValue).Data.X = local_9c;
    (this->GetFlameColor_MemoizedValue).Data.Y = fStack_98;
    (this->GetFlameColor_MemoizedValue).Data.Z = fStack_94;
    *(undefined4 *)&(this->GetFlameColor_MemoizedValue).IsValidData = uStack_90;
    if (*(char *)&(this->GetFlameColor_MemoizedValue).Data.Z == '\0') {
      pcVar11 = "IsValid()";
      in_stack_ffffff4c = (char *)0x13;
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      pcVar12 = (char *)0x5fc207;
      DebugBreak();
    }
  }
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  local_20.Length = 0;
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  local_14.Length = 0;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff4c,&local_5c);
  ((slice_view *)&uVar1)->_0_4_ = (this->GetFlameColor_MemoizedValue).Data.X;
  ((slice_view *)&uVar1)->_4_4_ = (this->GetFlameColor_MemoizedValue).Data.Y;
  SVar4.Capacity = (int)pcVar12;
  SVar4.Data = pcVar11;
  SVar4.Length = unaff_EDI;
  pSVar6 = Print(&local_50,(double)CONCAT44(in_stack_ffffff4c,(int)((ulonglong)uVar1 >> 0x20)),SVar4
                );
  __return_storage_ptr___00 = __return_storage_ptr__;
  pLVar7 = (LocStr *)util__LocStr__LocStr((LocStr *)local_8c,&local_38,&local_20);
  pSVar8 = util__LocStr__operator__o3(pLVar7);
  pSVar9 = &local_44;
  pLVar7 = (LocStr *)util__LocStr__LocStr((LocStr *)local_74,&local_2c,&local_14);
  this_00 = util__LocStr__operator__o3(pLVar7);
  pSVar9 = util__Str_char___operator(this_00,pSVar9,pSVar8);
  util__Str_char___operator(pSVar9,__return_storage_ptr___00,pSVar6);
  if (local_44.Data != (char *)0x0) {
    operator_delete__(local_44.Data);
    local_44.Data = (char *)0x0;
  }
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_68 = (void *)0x0;
  }
  if (local_74[0] != (void *)0x0) {
    operator_delete__(local_74[0]);
    local_74[0] = (void *)0x0;
  }
  if (local_14.Data != (char *)0x0) {
    operator_delete__(local_14.Data);
    local_14.Data = (char *)0x0;
  }
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_80 = (void *)0x0;
  }
  if (local_8c[0] != (void *)0x0) {
    operator_delete__(local_8c[0]);
    local_8c[0] = (void *)0x0;
  }
  if (local_20.Data != (char *)0x0) {
    operator_delete__(local_20.Data);
    local_20.Data = (char *)0x0;
  }
  if (local_50.Data != (char *)0x0) {
    operator_delete__(local_50.Data);
    local_50.Data = (char *)0x0;
  }
  if (local_2c.Data != (char *)0x0) {
    operator_delete__(local_2c.Data);
    local_2c.Data = (char *)0x0;
  }
  if (local_38.Data != (char *)0x0) {
    operator_delete__(local_38.Data);
    local_38.Data = (char *)0x0;
  }
  if (local_5c.Data != (char *)0x0) {
    operator_delete__(local_5c.Data);
  }
  return __return_storage_ptr__;
}


//==== 00005fc3b0 005fc3b0_GetFlareTimeInfo ====
// decompiled by BatchDecomp @ 005fc3b0 name=GetFlareTimeInfo conv=__thiscall body=690

/* public: class util::Str<char> __thiscall FlareModule__GetFlareTimeInfo(void)const  */

Str_L_char_G_ * __thiscall
FlareModule__GetFlareTimeInfo(FlareModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xffffff50;
  int iVar1;
  int iVar2;
  Str_L_char_G_ SVar3;
  double dVar4;
  undefined8 uVar5;
  bool bVar6;
  Str_L_char_G_ *pSVar7;
  LocStr *pLVar8;
  Str_L_char_G_ *pSVar9;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ *pSVar10;
  int unaff_EDI;
  double dVar11;
  char *in_stack_ffffff50;
  char *pcVar12;
  Str_L_char_G_ *__return_storage_ptr___00;
  char *pcVar13;
  void *local_98[3];
  void *local_8c;
  void *local_80[3];
  void *local_74;
  Str_L_char_G_ local_68;
  Str_L_char_G_ local_5c;
  Str_L_char_G_ local_50;
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  undefined8 local_14;
  undefined8 uStack_c;
  
  util__Str_char___Str_char__o5(&local_68,"GetBurnTime_s()");
  util__Str_char___Str_char__o5(&local_44,"Colon");
  pcVar13 = "BurnTime";
  pcVar12 = (char *)0x5fc3e5;
  util__Str_char___Str_char__o5(&local_38,"BurnTime");
  if ((this->GetFlameTemperature_K_MemoizedValue).IsValidData == false) {
    iVar1 = *(int *)&(this->GetBurnTime_s_MemoizedValue).IsValidData;
    uStack_c = (double)CONCAT44(iVar1 + 1,(undefined4)uStack_c);
    util__Darray_struct_util__tuple2_enum_Order__Type_int_____SetSize((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)
               &this->GetBurnTime_s_MemoizedValue,(int *)((int)&uStack_c + 4));
    pcVar12 = (char *)0x5fc413;
    bVar6 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->GetBurnTime_s_MemoizedValue,iVar1);
    if (bVar6) {
      iVar1 = *(int *)((int)&(this->GetBurnTime_s_MemoizedValue).Data + 4);
      iVar2 = *(int *)&(this->GetBurnTime_s_MemoizedValue).IsValidData;
      *(code **)(iVar1 + -8 + iVar2 * 8) = ChemicalReaction__GetAdiabaticFlameTemperature_K_Clear;
      *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
    }
    pcVar13 = (char *)0x5fc43b;
    uStack_c = CombustionMixtureSubModule__GetFlameTemperature_K((CombustionMixtureSubModule *)&(this->Pyrotechnic).CachedMass_kg);
    dVar11 = 0.0;
    if (0.0 < uStack_c) {
      pcVar13 = (char *)0x5fc457;
      uStack_c = CombustionMixtureSubModule__GetFlameSpeed_m__s((CombustionMixtureSubModule *)&(this->Pyrotechnic).CachedMass_kg);
      dVar11 = 0.0;
      if (0.0 < uStack_c) {
        pcVar13 = (char *)0x5fc473;
        dVar11 = CombustionMixtureSubModule__GetFlameSpeed_m__s((CombustionMixtureSubModule *)&(this->Pyrotechnic).CachedMass_kg);
        dVar11 = (this->Pyrotechnic).DelayCompositionMassFraction / dVar11;
        uStack_c = dVar11;
      }
    }
    dVar4 = uStack_c;
    uStack_c = (double)CONCAT71(((slice_view *)&uStack_c)->_1_7_,1);
    uVar5 = uStack_c;
    ((slice_view *)&local_14)->_0_4_ = *(undefined4 *)&dVar11;
    ((slice_view *)&local_14)->_4_4_ = *(undefined4 *)((char *)&dVar11 + 4);
    ((slice_view *)&uStack_c)->_4_4_ = SUB84(dVar4,4);
    *(undefined4 *)&(this->GetFlameTemperature_K_MemoizedValue).Data = (undefined4)local_14;
    *(undefined4 *)((int)&(this->GetFlameTemperature_K_MemoizedValue).Data + 4) = ((slice_view *)&local_14)->_4_4_;
    *(undefined4 *)&(this->GetFlameTemperature_K_MemoizedValue).IsValidData = (undefined4)uStack_c;
    *(undefined4 *)((char *)&(this->GetFlameTemperature_K_MemoizedValue) + 0xc) = ((slice_view *)&uStack_c)->_4_4_;
    local_14 = dVar11;
    uStack_c = (double)uVar5;
    if ((this->GetFlameTemperature_K_MemoizedValue).IsValidData == false) {
      pcVar12 = "IsValid()";
      in_stack_ffffff50 = (char *)0x13;
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      pcVar13 = (char *)0x5fc4ba;
      DebugBreak();
    }
  }
  local_2c.Data = (char *)0x0;
  local_2c.Capacity = 0;
  local_2c.Length = 0;
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  local_20.Length = 0;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff50,&local_68);
  SVar3.Capacity = (int)pcVar13;
  SVar3.Data = pcVar12;
  SVar3.Length = unaff_EDI;
  pSVar7 = Print(&local_5c,
                 (double)CONCAT44(in_stack_ffffff50,
                                  (int)((ulonglong)(this->GetFlameTemperature_K_MemoizedValue).Data
                                       >> 0x20)),SVar3);
  __return_storage_ptr___00 = __return_storage_ptr__;
  pLVar8 = (LocStr *)util__LocStr__LocStr((LocStr *)local_98,&local_44,&local_2c);
  pSVar9 = util__LocStr__operator__o3(pLVar8);
  pSVar10 = &local_50;
  pLVar8 = (LocStr *)util__LocStr__LocStr((LocStr *)local_80,&local_38,&local_20);
  this_00 = util__LocStr__operator__o3(pLVar8);
  pSVar10 = util__Str_char___operator(this_00,pSVar10,pSVar9);
  util__Str_char___operator(pSVar10,__return_storage_ptr___00,pSVar7);
  if (local_50.Data != (char *)0x0) {
    operator_delete__(local_50.Data);
    local_50.Data = (char *)0x0;
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
  if (local_8c != (void *)0x0) {
    operator_delete__(local_8c);
    local_8c = (void *)0x0;
  }
  if (local_98[0] != (void *)0x0) {
    operator_delete__(local_98[0]);
    local_98[0] = (void *)0x0;
  }
  if (local_2c.Data != (char *)0x0) {
    operator_delete__(local_2c.Data);
    local_2c.Data = (char *)0x0;
  }
  if (local_5c.Data != (char *)0x0) {
    operator_delete__(local_5c.Data);
    local_5c.Data = (char *)0x0;
  }
  if (local_38.Data != (char *)0x0) {
    operator_delete__(local_38.Data);
    local_38.Data = (char *)0x0;
  }
  if (local_44.Data != (char *)0x0) {
    operator_delete__(local_44.Data);
    local_44.Data = (char *)0x0;
  }
  if (local_68.Data != (char *)0x0) {
    operator_delete__(local_68.Data);
  }
  return __return_storage_ptr__;
}


//==== 00006083a0 006083a0_FUN_006083a0 ====
void FUN_006083a0(undefined4 *param_1,int *param_2);
extern undefined4 FUN_00608bc0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 006083a0 name=FUN_006083a0 conv=unknown body=561

void FUN_006083a0(undefined4 *param_1,int *param_2)

{
  undefined4 stack0xffffffd4;
  undefined4 stack0xfffffffc;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ReferenceController *this;
  int iVar4;
  undefined4 *puVar5;
  double *pdVar6;
  ReferenceController *pRVar7;
  ReferenceController *local_40;
  double local_3c;
  undefined1 local_34[12];
  ReferenceController *pRStack_28;
  undefined4 *local_24;
  double local_20;
  undefined8 local_18;
  undefined8 local_10;
  double *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_24 = param_1;
  pRStack_28 = (ReferenceController *)0x0;
  local_18 = 0;
  local_10 = 0;
  local_20 = 0.0;
  local_c = (double *)0x0;
  iVar4 = (**(code **)(*param_2 + 0xc))();
  if ((int)local_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*param_2)(&local_c);
      FUN_00608bc0(&local_3c,puVar5);
      if ((local_34[0] != '\0') && (((char)local_10 == '\0' || (local_3c < local_20)))) {
        pRStack_28 = (ReferenceController *)*puVar5;
        pRVar7 = (ReferenceController *)puVar5[1];
        if (pRVar7 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar7);
        }
        this = ((slice_view *)&local_18)->_4_4_;
        local_18 = CONCAT44(pRVar7,pRStack_28);
        if (pRVar7 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar7);
        }
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this);
        }
        ((slice_view *)&local_10)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&local_10)->_1_3_[0] | (((slice_view *)&local_10)->_1_3_[1] << 8) | (((slice_view *)&local_10)->_1_3_[2] << 16)) << 8));
        if (pRVar7 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar7);
        }
        local_20 = local_3c;
      }
      local_c = (double *)((int)local_c + 1);
      iVar4 = (**(code **)(*param_2 + 0xc))();
    } while ((int)local_c < iVar4);
  }
  if ((char)local_10 == '\0') {
    local_40 = (ReferenceController *)0x0;
    local_3c = 0.0;
    pdVar6 = (double *)0x0;
    pRVar7 = (ReferenceController *)local_34;
    local_34[0] = 0;
    stack0xffffffd4 = (double)CONCAT44(pRVar7,((slice_view *)&local_34)->_8_4_);
    bVar3 = false;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    pRVar7 = ((slice_view *)&local_18)->_4_4_;
    local_c = (double *)local_18;
    if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(((slice_view *)&local_18)->_4_4_);
    }
    stack0xffffffd4 = local_20;
    if (pRVar7 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar7);
      if (pRVar7 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar7);
        util__ReferenceController__ReleaseWeakReference(pRVar7);
        if (pRVar7 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar7);
        }
      }
    }
    local_40 = pRVar7;
    if (pRVar7 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar7);
    }
    local_3c = stack0xffffffd4;
    bVar3 = true;
    bVar2 = true;
    bVar1 = false;
    local_34[0] = 1;
    stack0xffffffd4 = (double)CONCAT44(local_34,((slice_view *)&local_34)->_8_4_);
    pdVar6 = local_c;
  }
  local_c = &local_3c;
  *local_24 = pdVar6;
  local_24[1] = local_40;
  if (local_40 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(local_40);
  }
  *(double *)(local_24 + 2) = *local_c;
  *(undefined1 *)(local_24 + 4) = *(undefined1 *)pRStack_28;
  if (bVar1) {
    if (local_40 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_40);
    }
  }
  if ((bVar2) && (local_40 != (ReferenceController *)0x0)) {
    util__ReferenceController__ReleaseWeakReference(local_40);
  }
  if ((pRVar7 != (ReferenceController *)0x0) && (bVar3)) {
    util__ReferenceController__ReleaseWeakReference(pRVar7);
  }
  if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_18)->_4_4_);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000060d020 0060d020_GetPowerInfo ====
// decompiled by BatchDecomp @ 0060d020 name=GetPowerInfo conv=__thiscall body=436

/* public: class util::Str<char> __thiscall PowerModule__GetPowerInfo(void)const  */

Str_L_char_G_ * __thiscall
PowerModule__GetPowerInfo(PowerModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xffffff88;
  Str_L_char_G_ SVar1;
  Str_L_char_G_ SVar2;
  LocStr *this_00;
  Str_L_char_G_ *pSVar3;
  int unaff_EDI;
  float10 fVar4;
  char *in_stack_ffffff88;
  int iVar5;
  char *pcVar6;
  void *local_64[3];
  void *local_58;
  Str_L_char_G_ local_4c;
  Str_L_char_G_ local_40;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_4c,"GetEfficiency_Percent()");
  util__Str_char___Str_char__o5(&local_28,"GetPowerGenerated_W()");
  pcVar6 = "InfoBox Powerplant";
  iVar5 = 0x60d051;
  util__Str_char___Str_char__o5(&local_1c,"InfoBox Powerplant");
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff88,&local_4c);
  fVar4 = (float10)(**(code **)(*(int *)this + 0x160))();
  SVar1.Capacity = (int)pcVar6;
  SVar1.Data = (char *)iVar5;
  SVar1.Length = unaff_EDI;
  Print(&local_40,(double)CONCAT44(in_stack_ffffff88,(int)((ulonglong)(double)fVar4 >> 0x20)),SVar1)
  ;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff88,&local_28);
  fVar4 = (float10)(**(code **)(*(int *)this + 0x154))();
  SVar2.Capacity = (int)pcVar6;
  SVar2.Data = (char *)iVar5;
  SVar2.Length = unaff_EDI;
  Print(&local_34,(double)CONCAT44(in_stack_ffffff88,(int)((ulonglong)(double)fVar4 >> 0x20)),SVar2)
  ;
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)local_64,&local_1c,&local_10);
  pSVar3 = util__LocStr__operator__o3(this_00);
  if (pSVar3->Capacity < 1) {
    pcVar6 = "";
  }
  else {
    pcVar6 = pSVar3->Data;
  }
  util__Printf(__return_storage_ptr__,pcVar6);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
    local_58 = (void *)0x0;
  }
  if (local_64[0] != (void *)0x0) {
    operator_delete__(local_64[0]);
    local_64[0] = (void *)0x0;
  }
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
    local_10.Data = (char *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    operator_delete__(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_40.Data != (char *)0x0) {
    operator_delete__(local_40.Data);
    local_40.Data = (char *)0x0;
  }
  if (local_1c.Data != (char *)0x0) {
    operator_delete__(local_1c.Data);
    local_1c.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    operator_delete__(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_4c.Data != (char *)0x0) {
    operator_delete__(local_4c.Data);
  }
  return __return_storage_ptr__;
}


//==== 0000619470 00619470_OnDamage ====
// decompiled by BatchDecomp @ 00619470 name=OnDamage conv=__thiscall body=481

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual struct DamagerContainer __thiscall AmmoCompartment__OnDamage(struct
   util::PhysicalState<struct util::Vec3<double> >,struct util::Quaternion<double>,struct
   util::PhysicalState<struct util::Vec3<double> >,struct DamagerContainer,struct CompartmentPiece
   *,int,double) */

DamagerContainer * __thiscall
AmmoCompartment__OnDamage(AmmoCompartment *this,DamagerContainer *__return_storage_ptr__,undefined4 param_3,
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
  char cVar2;
  bool bVar3;
  undefined8 in_stack_00000110;
  
  cVar1 = (**(code **)(*(int *)this + 0x1c))();
  ModuleCompartment__OnDamage((ModuleCompartment *)this,__return_storage_ptr__,param_3,param_4,param_5,param_6,
             param_7,param_8,param_9,param_10,param_11,param_12,param_13,param_14,param_15,param_16,
             param_17,param_18,param_19,param_20,param_21,param_22,param_23,param_24,param_25,
             param_26,param_27,param_28,param_29,param_30,param_31,param_32,param_33,param_34,
             param_35,param_36,param_37,param_38,param_39);
  cVar2 = (**(code **)(*(int *)this + 0x1c))();
  if ((cVar2 != '\0') && (cVar1 == '\0')) {
    if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
      bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
      if (!bVar3) {
        this->_pad_0x0_0 = 0;
      }
    }
    AmmoBaySubModule__TriggerDestroy((AmmoBaySubModule *)(this->_pad_0x0_0 + 0x88),*(undefined4 *)(this->_pad_0x0_0 + 0x1dc)
               ,this->CurrentAmmo,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
               param_20,param_21,param_22,in_stack_00000110);
  }
  return __return_storage_ptr__;
}


//==== 0000624970 00624970_OnDamage ====
// decompiled by BatchDecomp @ 00624970 name=OnDamage conv=__thiscall body=552

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual struct DamagerContainer __thiscall CarrierCompartment__OnDamage(struct
   util::PhysicalState<struct util::Vec3<double> >,struct util::Quaternion<double>,struct
   util::PhysicalState<struct util::Vec3<double> >,struct DamagerContainer,struct CompartmentPiece
   *,int,double) */

DamagerContainer * __thiscall
CarrierCompartment__OnDamage(CarrierCompartment *this,DamagerContainer *__return_storage_ptr__,undefined4 param_3,
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
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 in_stack_00000110;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  cVar3 = (**(code **)(*(int *)this + 0x1c))();
  ModuleCompartment__OnDamage((ModuleCompartment *)this,__return_storage_ptr__,param_3,param_4,param_5,param_6,
             param_7,param_8,param_9,param_10,param_11,param_12,param_13,param_14,param_15,param_16,
             param_17,param_18,param_19,param_20,param_21,param_22,param_23,param_24,param_25,
             param_26,param_27,param_28,param_29,param_30,param_31,param_32,param_33,param_34,
             param_35,param_36,param_37,param_38,param_39);
  if (*(char *)(this->_pad_0x0_0 + 0x2b0) != '\0') {
    cVar4 = (**(code **)(*(int *)this + 0x1c))();
    if ((cVar4 != '\0') && (cVar3 == '\0')) {
      if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
        bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
        if (!bVar5) {
          this->_pad_0x0_0 = 0;
        }
      }
      iVar1 = this->_pad_0x0_0;
      uVar2 = *(undefined4 *)(this->_pad_0x0_0 + 0x1dc);
      if (*(char *)(iVar1 + 0x2b0) == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      uVar12 = CONCAT44(param_16,param_15);
      uVar7 = CONCAT44(param_4,param_3);
      uVar8 = CONCAT44(param_6,param_5);
      uVar9 = CONCAT44(param_10,param_9);
      uVar10 = CONCAT44(param_12,param_11);
      uVar11 = CONCAT44(param_14,param_13);
      iVar6 = WeaponCompartment__GetInternalAmmoLeft((WeaponCompartment *)this);
      AmmoBaySubModule__TriggerDestroy((AmmoBaySubModule *)(iVar1 + 0x218),uVar2,iVar6,uVar7,uVar8,param_7,param_8,uVar9,
                 uVar10,uVar11,uVar12,param_17,param_18,param_19,param_20,param_21,param_22,
                 in_stack_00000110);
    }
  }
  return __return_storage_ptr__;
}


//==== 000062cd70 0062cd70_OnDamage ====
// decompiled by BatchDecomp @ 0062cd70 name=OnDamage conv=__thiscall body=552

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual struct DamagerContainer __thiscall CoilgunCompartment__OnDamage(struct
   util::PhysicalState<struct util::Vec3<double> >,struct util::Quaternion<double>,struct
   util::PhysicalState<struct util::Vec3<double> >,struct DamagerContainer,struct CompartmentPiece
   *,int,double) */

DamagerContainer * __thiscall
CoilgunCompartment__OnDamage(CoilgunCompartment *this,DamagerContainer *__return_storage_ptr__,undefined4 param_3,
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
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 in_stack_00000110;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  cVar3 = (**(code **)(*(int *)this + 0x1c))();
  ModuleCompartment__OnDamage((ModuleCompartment *)this,__return_storage_ptr__,param_3,param_4,param_5,param_6,
             param_7,param_8,param_9,param_10,param_11,param_12,param_13,param_14,param_15,param_16,
             param_17,param_18,param_19,param_20,param_21,param_22,param_23,param_24,param_25,
             param_26,param_27,param_28,param_29,param_30,param_31,param_32,param_33,param_34,
             param_35,param_36,param_37,param_38,param_39);
  if (*(char *)(this->_pad_0x0_0 + 0x458) != '\0') {
    cVar4 = (**(code **)(*(int *)this + 0x1c))();
    if ((cVar4 != '\0') && (cVar3 == '\0')) {
      if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
        bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
        if (!bVar5) {
          this->_pad_0x0_0 = 0;
        }
      }
      iVar1 = this->_pad_0x0_0;
      uVar2 = *(undefined4 *)(this->_pad_0x0_0 + 0x1dc);
      if (*(char *)(iVar1 + 0x458) == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      uVar12 = CONCAT44(param_16,param_15);
      uVar7 = CONCAT44(param_4,param_3);
      uVar8 = CONCAT44(param_6,param_5);
      uVar9 = CONCAT44(param_10,param_9);
      uVar10 = CONCAT44(param_12,param_11);
      uVar11 = CONCAT44(param_14,param_13);
      iVar6 = WeaponCompartment__GetInternalAmmoLeft((WeaponCompartment *)this);
      AmmoBaySubModule__TriggerDestroy((AmmoBaySubModule *)(iVar1 + 0x3c0),uVar2,iVar6,uVar7,uVar8,param_7,param_8,uVar9,
                 uVar10,uVar11,uVar12,param_17,param_18,param_19,param_20,param_21,param_22,
                 in_stack_00000110);
    }
  }
  return __return_storage_ptr__;
}


//==== 0000636680 00636680_OnDamage ====
// decompiled by BatchDecomp @ 00636680 name=OnDamage conv=__thiscall body=552

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual struct DamagerContainer __thiscall ConventionalGunCompartment__OnDamage(struct
   util::PhysicalState<struct util::Vec3<double> >,struct util::Quaternion<double>,struct
   util::PhysicalState<struct util::Vec3<double> >,struct DamagerContainer,struct CompartmentPiece
   *,int,double) */

DamagerContainer * __thiscall
ConventionalGunCompartment__OnDamage(ConventionalGunCompartment *this,DamagerContainer *__return_storage_ptr__,
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
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 in_stack_00000110;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  cVar3 = (**(code **)(*(int *)this + 0x1c))();
  ModuleCompartment__OnDamage((ModuleCompartment *)this,__return_storage_ptr__,param_3,param_4,param_5,param_6,
             param_7,param_8,param_9,param_10,param_11,param_12,param_13,param_14,param_15,param_16,
             param_17,param_18,param_19,param_20,param_21,param_22,param_23,param_24,param_25,
             param_26,param_27,param_28,param_29,param_30,param_31,param_32,param_33,param_34,
             param_35,param_36,param_37,param_38,param_39);
  if (*(char *)(this->_pad_0x0_0 + 0x480) != '\0') {
    cVar4 = (**(code **)(*(int *)this + 0x1c))();
    if ((cVar4 != '\0') && (cVar3 == '\0')) {
      if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
        bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
        if (!bVar5) {
          this->_pad_0x0_0 = 0;
        }
      }
      iVar1 = this->_pad_0x0_0;
      uVar2 = *(undefined4 *)(this->_pad_0x0_0 + 0x1dc);
      if (*(char *)(iVar1 + 0x480) == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      uVar12 = CONCAT44(param_16,param_15);
      uVar7 = CONCAT44(param_4,param_3);
      uVar8 = CONCAT44(param_6,param_5);
      uVar9 = CONCAT44(param_10,param_9);
      uVar10 = CONCAT44(param_12,param_11);
      uVar11 = CONCAT44(param_14,param_13);
      iVar6 = WeaponCompartment__GetInternalAmmoLeft((WeaponCompartment *)this);
      AmmoBaySubModule__TriggerDestroy((AmmoBaySubModule *)(iVar1 + 1000),uVar2,iVar6,uVar7,uVar8,param_7,param_8,uVar9,
                 uVar10,uVar11,uVar12,param_17,param_18,param_19,param_20,param_21,param_22,
                 in_stack_00000110);
    }
  }
  return __return_storage_ptr__;
}


//==== 00006510b0 006510b0_FireWeapon ====
// decompiled by BatchDecomp @ 006510b0 name=FireWeapon conv=__thiscall body=651

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall RailgunCompartment__FireWeapon(class util::SharedPtr<class
   Body>,class util::WeakPtr<class Body>,double,struct util::PhysicalState<struct util::Vec3<double>
   >) */

void __thiscall
RailgunCompartment__FireWeapon(RailgunCompartment *this,int *param_2,ReferenceController *param_3,undefined4 param_4,
          ReferenceController *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
          undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
          undefined4 param_17,undefined4 param_18,undefined4 param_19)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  ReferenceControllerRegistry *this_00;
  EffectManager *pEVar4;
  float10 fVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 uVar13;
  ReferenceController *pRVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  ReferenceController *pRVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  int local_18;
  double local_14;
  undefined8 uStack_c;
  
  if (*(int *)(this->_pad_0x0_0 + 0x204) == 0) {
    uVar20 = CONCAT44(param_5,param_4);
    if (param_5 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(param_5);
    }
    iVar16 = this->_pad_0x0_0;
    pRVar18 = (ReferenceController *)this->_pad_0x0_0;
    if (pRVar18 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar18);
    }
    piVar12 = param_2;
    pRVar14 = param_3;
    if (param_3 != (ReferenceController *)0x0) {
      util__ReferenceController__AddStrongReference(param_3);
    }
    MassProjectileSubModule__LaunchBullet((MassProjectileSubModule *)(this->_pad_0x0_0 + 0x1d8),piVar12,pRVar14,iVar16,pRVar18,
               uVar20);
  }
  uVar11 = 0;
  uVar13 = 0;
  uVar15 = 0;
  uVar17 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  piVar12 = (int *)this->_pad_0x0_0;
  if ((char)piVar12[0x3e] == '\0') {
    iVar16 = piVar12[0x30];
    local_18 = iVar16 + 1;
    util__Darray_struct_util__tuple2_enum_Order__Type_int_____SetSize((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)(piVar12 + 0x2e),&local_18);
    bVar3 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)(piVar12 + 0x2e),iVar16);
    if (bVar3) {
      iVar16 = piVar12[0x2f];
      iVar1 = piVar12[0x30];
      *(code **)(iVar16 + -8 + iVar1 * 8) = RailgunModule__GetArcEnergy_J_Clear;
      *(undefined4 *)(iVar16 + -4 + iVar1 * 8) = 0;
    }
    fVar5 = (float10)(**(code **)(*piVar12 + 0x154))();
    uStack_c = (double)(fVar5 * (float10)/*408f400000000000*/1000.0);
    dVar6 = MassProjectileSubModule__GetExitMass_kg((MassProjectileSubModule *)(piVar12 + 0x76));
    dVar6 = dVar6 * uStack_c * uStack_c;
    uStack_c = (double)CONCAT71((int7)((ulonglong)dVar6 >> 8),1);
    uVar2 = uStack_c;
    local_14 = (/*3ff0000000000000*/1.0 / *(double *)(piVar12 + 0x4e) + /*3ff0000000000000*/1.0) *
               dVar6 * /*3fe0000000000000*/0.5;
    ((slice_view *)&uStack_c)->_4_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(double *)(piVar12 + 0x3c) = local_14;
    piVar12[0x3e] = (int)uStack_c;
    piVar12[0x3f] = ((slice_view *)&uStack_c)->_4_4_;
    uStack_c = (double)uVar2;
    if ((char)piVar12[0x3e] == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  uStack_c = (double)CONCAT44(this->_pad_0x0_0,(int)uStack_c);
  if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
    if (!bVar3) {
      this->_pad_0x0_0 = 0;
    }
  }
  iVar16 = *(int *)(this->_pad_0x0_0 + 0x1dc);
  pRVar18 = *(ReferenceController **)(iVar16 + 0xf4);
  pEVar4 = *(EffectManager **)(iVar16 + 0xf0);
  if (pRVar18 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar18);
    if (pRVar18 != (ReferenceController *)0x0) {
      bVar3 = util__ReferenceController__IsDataStillValid(pRVar18);
      if (!bVar3) {
        pEVar4 = (EffectManager *)0x0;
      }
    }
  }
  EffectManager__NewFlash(pEVar4,param_8,param_9,param_10,param_11,param_12,param_13,param_14,param_15,param_16,
             param_17,param_18,param_19,*(undefined8 *)(((slice_view *)&uStack_c)->_4_4_ + 0x1f0),
             *(undefined8 *)(piVar12 + 0x3c),0,/*40af400000000000*/4000.0,0,uVar7,uVar8,uVar9,uVar10,
             uVar11,uVar13,uVar15,uVar17,uVar19,uVar20);
  if (pRVar18 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar18);
  }
  if (param_3 != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__ReleaseStrongReference(param_3);
    if (bVar3) {
      if (param_2 != (int *)0x0) {
        (**(code **)(*param_2 + 4))();
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


//==== 0000655130 00655130_OnDamage ====
// decompiled by BatchDecomp @ 00655130 name=OnDamage conv=__thiscall body=552

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual struct DamagerContainer __thiscall RailgunCompartment__OnDamage(struct
   util::PhysicalState<struct util::Vec3<double> >,struct util::Quaternion<double>,struct
   util::PhysicalState<struct util::Vec3<double> >,struct DamagerContainer,struct CompartmentPiece
   *,int,double) */

DamagerContainer * __thiscall
RailgunCompartment__OnDamage(RailgunCompartment *this,DamagerContainer *__return_storage_ptr__,undefined4 param_3,
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
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 in_stack_00000110;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  cVar3 = (**(code **)(*(int *)this + 0x1c))();
  ModuleCompartment__OnDamage((ModuleCompartment *)this,__return_storage_ptr__,param_3,param_4,param_5,param_6,
             param_7,param_8,param_9,param_10,param_11,param_12,param_13,param_14,param_15,param_16,
             param_17,param_18,param_19,param_20,param_21,param_22,param_23,param_24,param_25,
             param_26,param_27,param_28,param_29,param_30,param_31,param_32,param_33,param_34,
             param_35,param_36,param_37,param_38,param_39);
  if (*(char *)(this->_pad_0x0_0 + 0x468) != '\0') {
    cVar4 = (**(code **)(*(int *)this + 0x1c))();
    if ((cVar4 != '\0') && (cVar3 == '\0')) {
      if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
        bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
        if (!bVar5) {
          this->_pad_0x0_0 = 0;
        }
      }
      iVar1 = this->_pad_0x0_0;
      uVar2 = *(undefined4 *)(this->_pad_0x0_0 + 0x1dc);
      if (*(char *)(iVar1 + 0x468) == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      uVar12 = CONCAT44(param_16,param_15);
      uVar7 = CONCAT44(param_4,param_3);
      uVar8 = CONCAT44(param_6,param_5);
      uVar9 = CONCAT44(param_10,param_9);
      uVar10 = CONCAT44(param_12,param_11);
      uVar11 = CONCAT44(param_14,param_13);
      iVar6 = WeaponCompartment__GetInternalAmmoLeft((WeaponCompartment *)this);
      AmmoBaySubModule__TriggerDestroy((AmmoBaySubModule *)(iVar1 + 0x3d0),uVar2,iVar6,uVar7,uVar8,param_7,param_8,uVar9,
                 uVar10,uVar11,uVar12,param_17,param_18,param_19,param_20,param_21,param_22,
                 in_stack_00000110);
    }
  }
  return __return_storage_ptr__;
}


//==== 0000670020 00670020_FUN_00670020 ====
void __thiscall FUN_00670020(undefined4 *param_1,void *param_2,undefined4 param_3,undefined4 param_4,double param_5, char *param_6,int param_7);

// decompiled by BatchDecomp @ 00670020 name=FUN_00670020 conv=unknown body=782

void __thiscall
FUN_00670020(undefined4 *param_1,void *param_2,undefined4 param_3,undefined4 param_4,double param_5,
            char *param_6,int param_7)

{
  undefined4 stack0xffffff34;
  undefined4 stack0xfffffffc;
  Str_L_char_G_ SVar1;
  LocStr *pLVar2;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *pSVar4;
  Str_L_char_G_ *pSVar5;
  int unaff_EDI;
  char *pcVar6;
  int iVar7;
  void *local_b4[3];
  void *local_a8;
  void *local_9c[3];
  void *local_90;
  Str_L_char_G_ local_84;
  Str_L_char_G_ local_78;
  Str_L_char_G_ local_6c;
  Str_L_char_G_ local_60;
  Str_L_char_G_ local_54;
  Str_L_char_G_ local_48;
  Str_L_char_G_ local_3c;
  char *local_30;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_14.Capacity = *(undefined4 *)&param_5;
  local_14.Length = (int)((ulonglong)param_5 >> 0x20);
  if ((NAN(param_5) || NAN(/*0000000000000000*/0.0)) == (param_5 == /*0000000000000000*/0.0)) {
    util__Str_char___Str_char__o5(&local_2c,"\n");
    util__Str_char___operator__o10((Str_L_char_G_ *)*param_1,&local_2c);
    if (local_2c.Data != (char *)0x0) {
      operator_delete__(local_2c.Data);
    }
    util__Str_char___Str_char__o5(&local_84,"Colon");
    local_2c.Data = (char *)0x0;
    local_2c.Capacity = 0;
    local_30 = "";
    if (0 < param_7) {
      local_30 = param_6;
    }
    local_2c.Length = 0;
    local_3c.Data = (char *)0x0;
    local_3c.Capacity = 0;
    local_3c.Length = 0;
    pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_b4,&local_84,&local_2c);
    pSVar3 = util__LocStr__operator__o3(pLVar2);
    pSVar5 = &local_3c;
    pSVar4 = util__Printf(&local_6c,"ChemicalReaction %s");
    pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_9c,pSVar4,pSVar5);
    pSVar5 = util__LocStr__operator__o3(pLVar2);
    pcVar6 = (char *)0x67011c;
    pSVar5 = PrintNameOfTypeOnly(&local_60,pSVar5);
    local_20.Length = 0;
    local_20.Data = (char *)0x0;
    local_20.Capacity = 0;
    util__Str_char___Str_char(&local_20,pSVar5);
    util__Str_char___operator__o10(&local_20,pSVar3);
    pSVar5 = &local_20;
    iVar7 = 0x67014c;
    util__Str_char___Str_char(&local_54,pSVar5);
    if ((Str_L_char_G_ *)local_20.Data != (Str_L_char_G_ *)0x0) {
      iVar7 = 0x670159;
      pSVar5 = (Str_L_char_G_ *)local_20.Data;
      operator_delete__(local_20.Data);
      ((slice_view *)&local_20)->_0_8_ = ((slice_view *)&local_20)->_0_8_ & 0xffffffff00000000;
    }
    util__Str_char___Str_char__o5((Str_L_char_G_ *)&stack0xffffff34,local_30);
    SVar1.Capacity = (int)pSVar5;
    SVar1.Data = (char *)iVar7;
    SVar1.Length = unaff_EDI;
    pSVar5 = Print(&local_78,(double)CONCAT44(pcVar6,local_14.Length),SVar1);
    local_14.Length = 0;
    local_14.Data = (char *)0x0;
    local_14.Capacity = 0;
    util__Str_char___Str_char(&local_14,&local_54);
    util__Str_char___operator__o10(&local_14,pSVar5);
    util__Str_char___Str_char(&local_48,&local_14);
    if (local_14.Data != (char *)0x0) {
      operator_delete__(local_14.Data);
      local_14.Data = (char *)0x0;
    }
    util__Str_char___operator__o10((Str_L_char_G_ *)*param_1,&local_48);
    if (local_48.Data != (char *)0x0) {
      operator_delete__(local_48.Data);
    }
    if (local_54.Data != (char *)0x0) {
      operator_delete__(local_54.Data);
    }
    if (local_60.Data != (char *)0x0) {
      operator_delete__(local_60.Data);
      local_60.Data = (char *)0x0;
    }
    if (local_90 != (void *)0x0) {
      operator_delete__(local_90);
      local_90 = (void *)0x0;
    }
    if (local_9c[0] != (void *)0x0) {
      operator_delete__(local_9c[0]);
      local_9c[0] = (void *)0x0;
    }
    if (local_6c.Data != (char *)0x0) {
      operator_delete__(local_6c.Data);
      local_6c.Data = (char *)0x0;
    }
    if (local_3c.Data != (char *)0x0) {
      operator_delete__(local_3c.Data);
      local_3c.Data = (char *)0x0;
    }
    if (local_a8 != (void *)0x0) {
      operator_delete__(local_a8);
      local_a8 = (void *)0x0;
    }
    if (local_b4[0] != (void *)0x0) {
      operator_delete__(local_b4[0]);
      local_b4[0] = (void *)0x0;
    }
    if (local_2c.Data != (char *)0x0) {
      operator_delete__(local_2c.Data);
      local_2c.Data = (char *)0x0;
    }
    if (local_78.Data != (char *)0x0) {
      operator_delete__(local_78.Data);
      local_78.Data = (char *)0x0;
    }
    if (local_84.Data != (char *)0x0) {
      operator_delete__(local_84.Data);
    }
  }
  if (param_2 != (void *)0x0) {
    operator_delete__(param_2);
  }
  if (param_6 != (char *)0x0) {
    operator_delete__(param_6);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
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
  local_20.Capacity = (**(code **)(*param_1 + 0xc))();
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
  iVar4 = (**(code **)(*param_1 + 0xc))();
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
      iVar4 = (**(code **)(*param_1 + 0xc))();
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

/* public: class util::Str<char> __thiscall CompressibleFlowPoint__PrintDiagramFlowReport(void)const
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


//==== 000067db10 0067db10_FUN_0067db10 ====
void __thiscall FUN_0067db10(undefined4 *param_1,undefined1 *param_2,int param_3,undefined4 param_4,double param_5, char *param_6);

// decompiled by BatchDecomp @ 0067db10 name=FUN_0067db10 conv=unknown body=704

void __thiscall
FUN_0067db10(undefined4 *param_1,undefined1 *param_2,int param_3,undefined4 param_4,double param_5,
            char *param_6)

{
  undefined4 stack0xfffffffc;
  LocStr *pLVar1;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *pSVar4;
  undefined1 *puVar5;
  void *local_a4[3];
  void *local_98;
  void *local_8c[3];
  void *local_80;
  Str_L_char_G_ local_74;
  Str_L_char_G_ local_68;
  Str_L_char_G_ local_5c;
  Str_L_char_G_ local_50;
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((NAN(param_5) || NAN(/*0000000000000000*/0.0)) == (param_5 == /*0000000000000000*/0.0)) {
    util__Str_char___Str_char__o5(&local_2c,"\n");
    util__Str_char___operator__o10((Str_L_char_G_ *)*param_1,&local_2c);
    if (local_2c.Data != (char *)0x0) {
      operator_delete__(local_2c.Data);
    }
    util__Str_char___Str_char__o5(&local_74,"Colon");
    local_2c.Data = (char *)0x0;
    local_2c.Capacity = 0;
    puVar5 = &cde_l2_0091985b_NullString;
    if (0 < param_3) {
      puVar5 = param_2;
    }
    local_2c.Length = 0;
    local_38.Data = (char *)0x0;
    local_38.Capacity = 0;
    local_38.Length = 0;
    pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)local_a4,&local_74,&local_2c);
    pSVar2 = util__LocStr__operator__o3(pLVar1);
    pSVar4 = &local_38;
    pSVar3 = util__Printf(&local_68,"Material %s",puVar5);
    pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)local_8c,pSVar3,pSVar4);
    pSVar4 = util__LocStr__operator__o3(pLVar1);
    pSVar4 = PrintNameOfTypeOnly(&local_5c,pSVar4);
    local_14.Length = 0;
    local_14.Data = (char *)0x0;
    local_14.Capacity = 0;
    util__Str_char___Str_char(&local_14,pSVar4);
    util__Str_char___operator__o10(&local_14,pSVar2);
    util__Str_char___Str_char(&local_50,&local_14);
    if (local_14.Data != (char *)0x0) {
      operator_delete__(local_14.Data);
      ((slice_view *)&local_14)->_0_8_ = ((slice_view *)&local_14)->_0_8_ & 0xffffffff00000000;
    }
    local_20.Length = 0;
    local_20.Data = (char *)0x0;
    local_20.Capacity = 0;
    util__Str_char___Str_char(&local_20,&local_50);
    util__Str_char___operator__o10(&local_20,(Str_L_char_G_ *)&param_6);
    util__Str_char___Str_char(&local_44,&local_20);
    if (local_20.Data != (char *)0x0) {
      operator_delete__(local_20.Data);
      ((slice_view *)&local_20)->_0_8_ = ((slice_view *)&local_20)->_0_8_ & 0xffffffff00000000;
    }
    util__Str_char___operator__o10((Str_L_char_G_ *)*param_1,&local_44);
    if (local_44.Data != (char *)0x0) {
      operator_delete__(local_44.Data);
    }
    if (local_50.Data != (char *)0x0) {
      operator_delete__(local_50.Data);
    }
    if (local_5c.Data != (char *)0x0) {
      operator_delete__(local_5c.Data);
      local_5c.Data = (char *)0x0;
    }
    if (local_80 != (void *)0x0) {
      operator_delete__(local_80);
      local_80 = (void *)0x0;
    }
    if (local_8c[0] != (void *)0x0) {
      operator_delete__(local_8c[0]);
      local_8c[0] = (void *)0x0;
    }
    if (local_68.Data != (char *)0x0) {
      operator_delete__(local_68.Data);
      local_68.Data = (char *)0x0;
    }
    if (local_38.Data != (char *)0x0) {
      operator_delete__(local_38.Data);
      local_38.Data = (char *)0x0;
    }
    if (local_98 != (void *)0x0) {
      operator_delete__(local_98);
      local_98 = (void *)0x0;
    }
    if (local_a4[0] != (void *)0x0) {
      operator_delete__(local_a4[0]);
      local_a4[0] = (void *)0x0;
    }
    if (local_2c.Data != (char *)0x0) {
      operator_delete__(local_2c.Data);
      local_2c.Data = (char *)0x0;
    }
    if (local_74.Data != (char *)0x0) {
      operator_delete__(local_74.Data);
    }
    *(undefined1 *)param_1[1] = 1;
  }
  if (param_2 != (undefined1 *)0x0) {
    operator_delete__(param_2);
  }
  if (param_6 != (char *)0x0) {
    operator_delete__(param_6);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
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


//==== 000067e0a0 0067e0a0_FUN_0067e0a0 ====
void __thiscall FUN_0067e0a0(undefined4 *param_1,undefined1 *param_2,int param_3,undefined4 param_4,double param_5, undefined1 *param_6,int param_7);

// decompiled by BatchDecomp @ 0067e0a0 name=FUN_0067e0a0 conv=unknown body=780

void __thiscall
FUN_0067e0a0(undefined4 *param_1,undefined1 *param_2,int param_3,undefined4 param_4,double param_5,
            undefined1 *param_6,int param_7)

{
  undefined4 stack0xfffffffc;
  LocStr *pLVar1;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *pSVar4;
  int unaff_EDI;
  undefined1 *puVar5;
  void *local_b4[3];
  void *local_a8;
  void *local_9c[3];
  void *local_90;
  Str_L_char_G_ local_84;
  Str_L_char_G_ local_78;
  Str_L_char_G_ local_6c;
  Str_L_char_G_ local_60;
  Str_L_char_G_ local_54;
  Str_L_char_G_ local_48;
  Str_L_char_G_ local_3c;
  undefined1 *local_30;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_14.Capacity = *(undefined4 *)&param_5;
  local_14.Length = (int)((ulonglong)param_5 >> 0x20);
  if ((NAN(param_5) || NAN(/*0000000000000000*/0.0)) == (param_5 == /*0000000000000000*/0.0)) {
    util__Str_char___Str_char__o5(&local_2c,"\n");
    util__Str_char___operator__o10((Str_L_char_G_ *)*param_1,&local_2c);
    if (local_2c.Data != (char *)0x0) {
      operator_delete__(local_2c.Data);
    }
    util__Str_char___Str_char__o5(&local_84,"Colon");
    local_2c.Data = (char *)0x0;
    local_2c.Capacity = 0;
    local_30 = &cde_l2_0091985b_NullString;
    if (0 < param_7) {
      local_30 = param_6;
    }
    puVar5 = &cde_l2_0091985b_NullString;
    if (0 < param_3) {
      puVar5 = param_2;
    }
    local_2c.Length = 0;
    local_3c.Data = (char *)0x0;
    local_3c.Capacity = 0;
    local_3c.Length = 0;
    pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)local_b4,&local_84,&local_2c);
    pSVar2 = util__LocStr__operator__o3(pLVar1);
    pSVar4 = &local_3c;
    pSVar3 = util__Printf(&local_6c,"Material %s",puVar5);
    pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)local_9c,pSVar3,pSVar4);
    pSVar4 = util__LocStr__operator__o3(pLVar1);
    pSVar4 = PrintNameOfTypeOnly(&local_60,pSVar4);
    local_20.Length = 0;
    local_20.Data = (char *)0x0;
    local_20.Capacity = 0;
    util__Str_char___Str_char(&local_20,pSVar4);
    util__Str_char___operator__o10(&local_20,pSVar2);
    util__Str_char___Str_char(&local_54,&local_20);
    if (local_20.Data != (char *)0x0) {
      operator_delete__(local_20.Data);
      ((slice_view *)&local_20)->_0_8_ = ((slice_view *)&local_20)->_0_8_ & 0xffffffff00000000;
    }
    pSVar4 = PrintUnits(&local_78,(double)CONCAT44(local_30,local_14.Length),(char *)0x1,unaff_EDI);
    local_14.Length = 0;
    local_14.Data = (char *)0x0;
    local_14.Capacity = 0;
    util__Str_char___Str_char(&local_14,&local_54);
    util__Str_char___operator__o10(&local_14,pSVar4);
    util__Str_char___Str_char(&local_48,&local_14);
    if (local_14.Data != (char *)0x0) {
      operator_delete__(local_14.Data);
      local_14.Data = (char *)0x0;
    }
    util__Str_char___operator__o10((Str_L_char_G_ *)*param_1,&local_48);
    if (local_48.Data != (char *)0x0) {
      operator_delete__(local_48.Data);
    }
    if (local_54.Data != (char *)0x0) {
      operator_delete__(local_54.Data);
    }
    if (local_60.Data != (char *)0x0) {
      operator_delete__(local_60.Data);
      local_60.Data = (char *)0x0;
    }
    if (local_90 != (void *)0x0) {
      operator_delete__(local_90);
      local_90 = (void *)0x0;
    }
    if (local_9c[0] != (void *)0x0) {
      operator_delete__(local_9c[0]);
      local_9c[0] = (void *)0x0;
    }
    if (local_6c.Data != (char *)0x0) {
      operator_delete__(local_6c.Data);
      local_6c.Data = (char *)0x0;
    }
    if (local_3c.Data != (char *)0x0) {
      operator_delete__(local_3c.Data);
      local_3c.Data = (char *)0x0;
    }
    if (local_a8 != (void *)0x0) {
      operator_delete__(local_a8);
      local_a8 = (void *)0x0;
    }
    if (local_b4[0] != (void *)0x0) {
      operator_delete__(local_b4[0]);
      local_b4[0] = (void *)0x0;
    }
    if (local_2c.Data != (char *)0x0) {
      operator_delete__(local_2c.Data);
      local_2c.Data = (char *)0x0;
    }
    if (local_78.Data != (char *)0x0) {
      operator_delete__(local_78.Data);
      local_78.Data = (char *)0x0;
    }
    if (local_84.Data != (char *)0x0) {
      operator_delete__(local_84.Data);
    }
    *(undefined1 *)param_1[1] = 1;
  }
  if (param_2 != (undefined1 *)0x0) {
    operator_delete__(param_2);
  }
  if (param_6 != (undefined1 *)0x0) {
    operator_delete__(param_6);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000067e3b0 0067e3b0_FUN_0067e3b0 ====
void __thiscall FUN_0067e3b0(undefined4 *param_1,undefined1 *param_2,int param_3,undefined4 param_4,double param_5);

// decompiled by BatchDecomp @ 0067e3b0 name=FUN_0067e3b0 conv=unknown body=744

void __thiscall
FUN_0067e3b0(undefined4 *param_1,undefined1 *param_2,int param_3,undefined4 param_4,double param_5)

{
  undefined4 stack0xfffffffc;
  LocStr *pLVar1;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *pSVar4;
  undefined1 *puVar5;
  void *local_b0[3];
  void *local_a4;
  void *local_98[3];
  void *local_8c;
  Str_L_char_G_ local_80;
  Str_L_char_G_ local_74;
  Str_L_char_G_ local_68;
  Str_L_char_G_ local_5c;
  Str_L_char_G_ local_50;
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_14.Capacity = *(undefined4 *)&param_5;
  local_14.Length = (int)((ulonglong)param_5 >> 0x20);
  if ((NAN(param_5) || NAN(/*0000000000000000*/0.0)) == (param_5 == /*0000000000000000*/0.0)) {
    util__Str_char___Str_char__o5(&local_2c,"\n");
    util__Str_char___operator__o10((Str_L_char_G_ *)*param_1,&local_2c);
    if (local_2c.Data != (char *)0x0) {
      operator_delete__(local_2c.Data);
    }
    util__Str_char___Str_char__o5(&local_80,"Colon");
    local_2c.Data = (char *)0x0;
    local_2c.Capacity = 0;
    puVar5 = &cde_l2_0091985b_NullString;
    if (0 < param_3) {
      puVar5 = param_2;
    }
    local_2c.Length = 0;
    local_38.Data = (char *)0x0;
    local_38.Capacity = 0;
    local_38.Length = 0;
    pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)local_b0,&local_80,&local_2c);
    pSVar2 = util__LocStr__operator__o3(pLVar1);
    pSVar4 = &local_38;
    pSVar3 = util__Printf(&local_68,"Material %s",puVar5);
    pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)local_98,pSVar3,pSVar4);
    pSVar4 = util__LocStr__operator__o3(pLVar1);
    pSVar4 = PrintNameOfTypeOnly(&local_5c,pSVar4);
    local_20.Length = 0;
    local_20.Data = (char *)0x0;
    local_20.Capacity = 0;
    util__Str_char___Str_char(&local_20,pSVar4);
    util__Str_char___operator__o10(&local_20,pSVar2);
    util__Str_char___Str_char(&local_50,&local_20);
    if (local_20.Data != (char *)0x0) {
      operator_delete__(local_20.Data);
      ((slice_view *)&local_20)->_0_8_ = ((slice_view *)&local_20)->_0_8_ & 0xffffffff00000000;
    }
    pSVar4 = util__Printf(&local_74,"%.2f",CONCAT44(local_14.Length,local_14.Capacity));
    local_14.Length = 0;
    local_14.Data = (char *)0x0;
    local_14.Capacity = 0;
    util__Str_char___Str_char(&local_14,&local_50);
    util__Str_char___operator__o10(&local_14,pSVar4);
    util__Str_char___Str_char(&local_44,&local_14);
    if (local_14.Data != (char *)0x0) {
      operator_delete__(local_14.Data);
      local_14.Data = (char *)0x0;
    }
    util__Str_char___operator__o10((Str_L_char_G_ *)*param_1,&local_44);
    if (local_44.Data != (char *)0x0) {
      operator_delete__(local_44.Data);
    }
    if (local_50.Data != (char *)0x0) {
      operator_delete__(local_50.Data);
    }
    if (local_5c.Data != (char *)0x0) {
      operator_delete__(local_5c.Data);
      local_5c.Data = (char *)0x0;
    }
    if (local_8c != (void *)0x0) {
      operator_delete__(local_8c);
      local_8c = (void *)0x0;
    }
    if (local_98[0] != (void *)0x0) {
      operator_delete__(local_98[0]);
      local_98[0] = (void *)0x0;
    }
    if (local_68.Data != (char *)0x0) {
      operator_delete__(local_68.Data);
      local_68.Data = (char *)0x0;
    }
    if (local_38.Data != (char *)0x0) {
      operator_delete__(local_38.Data);
      local_38.Data = (char *)0x0;
    }
    if (local_a4 != (void *)0x0) {
      operator_delete__(local_a4);
      local_a4 = (void *)0x0;
    }
    if (local_b0[0] != (void *)0x0) {
      operator_delete__(local_b0[0]);
      local_b0[0] = (void *)0x0;
    }
    if (local_2c.Data != (char *)0x0) {
      operator_delete__(local_2c.Data);
      local_2c.Data = (char *)0x0;
    }
    if (local_74.Data != (char *)0x0) {
      operator_delete__(local_74.Data);
      local_74.Data = (char *)0x0;
    }
    if (local_80.Data != (char *)0x0) {
      operator_delete__(local_80.Data);
    }
    *(undefined1 *)param_1[1] = 1;
  }
  if (param_2 != (undefined1 *)0x0) {
    operator_delete__(param_2);
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
  uVar5 = (**(code **)(*param_2 + 0xc))();
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
  iVar9 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar9) {
    do {
      piVar7 = (int *)(**(code **)*param_2)(&local_c);
      if (((ReferenceController *)piVar7[1] != (ReferenceController *)0x0) &&
         (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar7[1]),
         !bVar4)) {
        *piVar7 = 0;
      }
      if (*(int *)(*piVar7 + 0x1e4) == *param_3) {
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
      iVar9 = (**(code **)(*param_2 + 0xc))();
    } while (local_c < iVar9);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000069e5a0 0069e5a0_GetPowerBarTooltip ====
// decompiled by BatchDecomp @ 0069e5a0 name=GetPowerBarTooltip conv=__thiscall body=501

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Str<char> __thiscall UICompartmentInfo__GetPowerBarTooltip(void)const  */

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
  iVar4 = (**(code **)(*param_1 + 0xc))();
  if (local_10 < iVar4) {
    do {
      local_2c = (int *)(**(code **)*param_1)(&local_10);
      local_c = 0;
      local_2c = (int *)*local_2c;
      piVar1 = local_2c + 0x84;
      iVar4 = (**(code **)(*piVar1 + 0xc))();
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
          iVar4 = (**(code **)(*piVar1 + 0xc))();
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
        pSVar6 = (Str_L_char_G_ *)(**(code **)(*local_2c + 0x48))(local_74);
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
      iVar4 = (**(code **)(*param_1 + 0xc))();
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
  uVar3 = (**(code **)(*param_2 + 0xc))();
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
  iVar7 = (**(code **)(*param_2 + 0xc))();
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
      iVar7 = (**(code **)(*param_2 + 0xc))();
    } while ((int)local_c < iVar7);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00006b5c30 006b5c30_GetCostChartTitle ====
// decompiled by BatchDecomp @ 006b5c30 name=GetCostChartTitle conv=__thiscall body=938

/* WARNING: Removing unreachable block (ram,0x006b5e90) */
/* WARNING: Removing unreachable block (ram,0x006b5ea0) */
/* WARNING: Removing unreachable block (ram,0x006b5eb3) */
/* WARNING: Removing unreachable block (ram,0x006b5ebd) */
/* private: class util::Str<char> __thiscall UIShipInfo__GetCostChartTitle(void)const  */

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


//==== 00006b6e00 006b6e00_GetMassChartTitle ====
// decompiled by BatchDecomp @ 006b6e00 name=GetMassChartTitle conv=__thiscall body=882

/* WARNING: Removing unreachable block (ram,0x006b702b) */
/* WARNING: Removing unreachable block (ram,0x006b703b) */
/* WARNING: Removing unreachable block (ram,0x006b704e) */
/* WARNING: Removing unreachable block (ram,0x006b7058) */
/* private: class util::Str<char> __thiscall UIShipInfo__GetMassChartTitle(void)const  */

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
  iVar6 = (**(code **)(*param_2 + 0xc))();
  if ((iVar6 < iVar7) || (iVar7 == 0)) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\sort.inl",0x21,
                    "OutIndex <= OutList.Num() && OutIndex",(char *)0x0);
    DebugBreak();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00006ec2e0 006ec2e0_FixedOrbit ====
// decompiled by BatchDecomp @ 006ec2e0 name=FixedOrbit conv=__thiscall body=483

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: __thiscall FixedOrbit__FixedOrbit(struct FixedOrbit const &) */

FixedOrbit * __thiscall FixedOrbit__FixedOrbit(FixedOrbit *this,FixedOrbit *param_1)

{
  ReferenceController *this_00;
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  pmf_e345282a *ppVar5;
  undefined7 uVar6;
  bool bVar7;
  undefined3 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  FixedOrbit *local_8;
  
  this->_pad_0x0_0 = (int)((void *)(0x009369e4u));
  (this->OrbitedBody).Pointer = (param_1->OrbitedBody).Pointer;
  (this->OrbitedBody).Controller = (param_1->OrbitedBody).Controller;
  this_00 = (ReferenceController *)(param_1->Elements)._pad_0x0_0;
  (this->Elements)._pad_0x0_0 = (int)this_00;
  local_8 = this;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  (this->Elements)._pad_0x0_0 = (int)((void *)(0x00919980u));
  util__Str_char___Str_char((Str_L_char_G_ *)(char *)&(this->Elements) + 0xc,(Str_L_char_G_ *)(char *)&(param_1->Elements) + 0xc);
  (this->Elements)._pad_0x0_0 = (int)((void *)(0x00936958u));
  (this->Elements).SemiMajorAxis_km = (param_1->Elements).SemiMajorAxis_km;
  (this->Elements).Eccentricity = (param_1->Elements).Eccentricity;
  (this->Elements).InclinationToRelativePlane_degrees =
       (param_1->Elements).InclinationToRelativePlane_degrees;
  (this->Elements).LongitudeOfAscendingNode_degrees =
       (param_1->Elements).LongitudeOfAscendingNode_degrees;
  (this->Elements).ArgumentOfPeriapsis_degrees = (param_1->Elements).ArgumentOfPeriapsis_degrees;
  (this->Elements).MeanAnomaly_degrees = (param_1->Elements).MeanAnomaly_degrees;
  ppVar5 = (param_1->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Data;
  (this->FixedOrbitMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 =
       (param_1->FixedOrbitMemoizationHandlerInstance).ResetFunctions._pad_0x0_0;
  (this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Data = ppVar5;
  *(undefined4 *)((int)&(this->GetOrbitalPeriod_s_MemoizedValue).Data + 4) = 0;
  (this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Size =
       (int)((void *)(0x009194a4u));
  (this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Capacity = 0;
  *(undefined4 *)&(this->GetOrbitalPeriod_s_MemoizedValue).Data = 0;
  *(undefined4 *)((int)&(this->GetOrbitalPeriod_s_MemoizedValue).Data + 4) =
       *(undefined4 *)((int)&(param_1->GetOrbitalPeriod_s_MemoizedValue).Data + 4);
  local_8 = (FixedOrbit *)
            (**(code **)((param_1->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Size + 0xc))
                      ();
  util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)
             &(this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Size,(int *)&local_8);
  lVar1 = (ulonglong)*(uint *)((int)&(this->GetOrbitalPeriod_s_MemoizedValue).Data + 4) * 4;
  local_8 = (FixedOrbit *)(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
  puVar9 = (undefined4 *)operator_new__((uint)local_8);
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    memset(puVar9,0,local_8);
  }
  (this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Capacity = (int)puVar9;
  puVar10 = (undefined4 *)(param_1->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Capacity;
  if (puVar10 != puVar10 + *(int *)&(param_1->GetOrbitalPeriod_s_MemoizedValue).Data) {
    do {
      *puVar9 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar9 = puVar9 + 1;
    } while (puVar10 !=
             (undefined4 *)
             ((param_1->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Capacity +
             *(int *)&(param_1->GetOrbitalPeriod_s_MemoizedValue).Data * 4));
  }
  uVar6 = *(undefined7 *)((char *)&(param_1->GetOrbitalPeriod_s_MemoizedValue) + 0x9);
  (this->GetOrbitalPeriod_s_MemoizedValue).IsValidData =
       (param_1->GetOrbitalPeriod_s_MemoizedValue).IsValidData;
  *(undefined7 *)((char *)&(this->GetOrbitalPeriod_s_MemoizedValue) + 0x9) = uVar6;
  *(undefined1 *)&(this->GetFullRotator_MemoizedValue).Data.X =
       *(undefined1 *)&(param_1->GetFullRotator_MemoizedValue).Data.X;
  uVar2 = *(undefined4 *)((int)&(param_1->GetFullRotator_MemoizedValue).Data.Y + 4);
  uVar3 = *(undefined4 *)&(param_1->GetFullRotator_MemoizedValue).Data.Z;
  uVar4 = *(undefined4 *)((int)&(param_1->GetFullRotator_MemoizedValue).Data.Z + 4);
  *(undefined4 *)&(this->GetFullRotator_MemoizedValue).Data.Y =
       *(undefined4 *)&(param_1->GetFullRotator_MemoizedValue).Data.Y;
  *(undefined4 *)((int)&(this->GetFullRotator_MemoizedValue).Data.Y + 4) = uVar2;
  *(undefined4 *)&(this->GetFullRotator_MemoizedValue).Data.Z = uVar3;
  *(undefined4 *)((int)&(this->GetFullRotator_MemoizedValue).Data.Z + 4) = uVar4;
  uVar2 = *(undefined4 *)((int)&(param_1->GetFullRotator_MemoizedValue).Data.W + 4);
  bVar7 = (param_1->GetFullRotator_MemoizedValue).IsValidData;
  uVar8 = *(undefined3 *)((char *)&(param_1->GetFullRotator_MemoizedValue) + 0x21);
  uVar3 = *(undefined4 *)((char *)&(param_1->GetFullRotator_MemoizedValue) + 0x24);
  *(undefined4 *)&(this->GetFullRotator_MemoizedValue).Data.W =
       *(undefined4 *)&(param_1->GetFullRotator_MemoizedValue).Data.W;
  *(undefined4 *)((int)&(this->GetFullRotator_MemoizedValue).Data.W + 4) = uVar2;
  (this->GetFullRotator_MemoizedValue).IsValidData = bVar7;
  *(undefined3 *)((char *)&(this->GetFullRotator_MemoizedValue) + 0x21) = uVar8;
  *(undefined4 *)((char *)&(this->GetFullRotator_MemoizedValue) + 0x24) = uVar3;
  *(undefined1 *)&(this->GetVelocityStateConstant_km__s_MemoizedValue).Data =
       *(undefined1 *)&(param_1->GetVelocityStateConstant_km__s_MemoizedValue).Data;
  uVar6 = *(undefined7 *)((char *)&(param_1->GetVelocityStateConstant_km__s_MemoizedValue) + 0x9);
  (this->GetVelocityStateConstant_km__s_MemoizedValue).IsValidData =
       (param_1->GetVelocityStateConstant_km__s_MemoizedValue).IsValidData;
  *(undefined7 *)((char *)&(this->GetVelocityStateConstant_km__s_MemoizedValue) + 0x9) = uVar6;
  *(undefined1 *)&(this->GetEccentricityComplement_MemoizedValue).Data =
       *(undefined1 *)&(param_1->GetEccentricityComplement_MemoizedValue).Data;
  uVar6 = *(undefined7 *)((char *)&(param_1->GetEccentricityComplement_MemoizedValue) + 0x9);
  (this->GetEccentricityComplement_MemoizedValue).IsValidData =
       (param_1->GetEccentricityComplement_MemoizedValue).IsValidData;
  *(undefined7 *)((char *)&(this->GetEccentricityComplement_MemoizedValue) + 0x9) = uVar6;
  *(undefined1 *)&(this->GetEccentricityPeriapsisRoot_MemoizedValue).Data =
       *(undefined1 *)&(param_1->GetEccentricityPeriapsisRoot_MemoizedValue).Data;
  uVar6 = *(undefined7 *)((char *)&(param_1->GetEccentricityPeriapsisRoot_MemoizedValue) + 0x9);
  (this->GetEccentricityPeriapsisRoot_MemoizedValue).IsValidData =
       (param_1->GetEccentricityPeriapsisRoot_MemoizedValue).IsValidData;
  *(undefined7 *)((char *)&(this->GetEccentricityPeriapsisRoot_MemoizedValue) + 0x9) = uVar6;
  *(undefined1 *)&(this->GetEccentricityApoapsisRoot_MemoizedValue).Data =
       *(undefined1 *)&(param_1->GetEccentricityApoapsisRoot_MemoizedValue).Data;
  uVar6 = *(undefined7 *)((char *)&(param_1->GetEccentricityApoapsisRoot_MemoizedValue) + 0x9);
  (this->GetEccentricityApoapsisRoot_MemoizedValue).IsValidData =
       (param_1->GetEccentricityApoapsisRoot_MemoizedValue).IsValidData;
  *(undefined7 *)((char *)&(this->GetEccentricityApoapsisRoot_MemoizedValue) + 0x9) = uVar6;
  *(char *)&this[1]._pad_0x0_0 = (char)param_1[1]._pad_0x0_0;
  return this;
}


//==== 00006ed0f0 006ed0f0_operator_ ====
// decompiled by BatchDecomp @ 006ed0f0 name=operator= conv=__thiscall body=517

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct ItineraryNode & __thiscall ItineraryNode__operator_(struct ItineraryNode &&) */

ItineraryNode * __thiscall ItineraryNode__operator_(ItineraryNode *this,ItineraryNode *param_1)

{
  ReferenceController *pRVar1;
  ReferenceController *pRVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined3 uVar7;
  
  pRVar1 = (this->Parent).Controller;
  (this->Parent).Pointer = (param_1->Parent).Pointer;
  pRVar2 = (param_1->Parent).Controller;
  (this->Parent).Controller = pRVar2;
  if (pRVar2 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar2);
  }
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  uVar3 = *(undefined4 *)((int)&(param_1->LastState).Position.X + 4);
  uVar4 = *(undefined4 *)&(param_1->LastState).Position.Y;
  uVar5 = *(undefined4 *)((int)&(param_1->LastState).Position.Y + 4);
  *(undefined4 *)&(this->LastState).Position.X = *(undefined4 *)&(param_1->LastState).Position.X;
  *(undefined4 *)((int)&(this->LastState).Position.X + 4) = uVar3;
  *(undefined4 *)&(this->LastState).Position.Y = uVar4;
  *(undefined4 *)((int)&(this->LastState).Position.Y + 4) = uVar5;
  uVar3 = *(undefined4 *)((int)&(param_1->LastState).Position.Z + 4);
  uVar4 = *(undefined4 *)&(param_1->LastState).Velocity.X;
  uVar5 = *(undefined4 *)((int)&(param_1->LastState).Velocity.X + 4);
  *(undefined4 *)&(this->LastState).Position.Z = *(undefined4 *)&(param_1->LastState).Position.Z;
  *(undefined4 *)((int)&(this->LastState).Position.Z + 4) = uVar3;
  *(undefined4 *)&(this->LastState).Velocity.X = uVar4;
  *(undefined4 *)((int)&(this->LastState).Velocity.X + 4) = uVar5;
  uVar3 = *(undefined4 *)((int)&(param_1->LastState).Velocity.Y + 4);
  uVar4 = *(undefined4 *)&(param_1->LastState).Velocity.Z;
  uVar5 = *(undefined4 *)((int)&(param_1->LastState).Velocity.Z + 4);
  *(undefined4 *)&(this->LastState).Velocity.Y = *(undefined4 *)&(param_1->LastState).Velocity.Y;
  *(undefined4 *)((int)&(this->LastState).Velocity.Y + 4) = uVar3;
  *(undefined4 *)&(this->LastState).Velocity.Z = uVar4;
  *(undefined4 *)((int)&(this->LastState).Velocity.Z + 4) = uVar5;
  this->LastTimeSinceJ2000_s = param_1->LastTimeSinceJ2000_s;
  uVar3 = *(undefined4 *)((int)&(param_1->State).Position.X + 4);
  uVar4 = *(undefined4 *)&(param_1->State).Position.Y;
  uVar5 = *(undefined4 *)((int)&(param_1->State).Position.Y + 4);
  *(undefined4 *)&(this->State).Position.X = *(undefined4 *)&(param_1->State).Position.X;
  *(undefined4 *)((int)&(this->State).Position.X + 4) = uVar3;
  *(undefined4 *)&(this->State).Position.Y = uVar4;
  *(undefined4 *)((int)&(this->State).Position.Y + 4) = uVar5;
  uVar3 = *(undefined4 *)((int)&(param_1->State).Position.Z + 4);
  uVar4 = *(undefined4 *)&(param_1->State).Velocity.X;
  uVar5 = *(undefined4 *)((int)&(param_1->State).Velocity.X + 4);
  *(undefined4 *)&(this->State).Position.Z = *(undefined4 *)&(param_1->State).Position.Z;
  *(undefined4 *)((int)&(this->State).Position.Z + 4) = uVar3;
  *(undefined4 *)&(this->State).Velocity.X = uVar4;
  *(undefined4 *)((int)&(this->State).Velocity.X + 4) = uVar5;
  uVar3 = *(undefined4 *)((int)&(param_1->State).Velocity.Y + 4);
  uVar4 = *(undefined4 *)&(param_1->State).Velocity.Z;
  uVar5 = *(undefined4 *)((int)&(param_1->State).Velocity.Z + 4);
  *(undefined4 *)&(this->State).Velocity.Y = *(undefined4 *)&(param_1->State).Velocity.Y;
  *(undefined4 *)((int)&(this->State).Velocity.Y + 4) = uVar3;
  *(undefined4 *)&(this->State).Velocity.Z = uVar4;
  *(undefined4 *)((int)&(this->State).Velocity.Z + 4) = uVar5;
  this->TimeSinceJ2000_s = param_1->TimeSinceJ2000_s;
  uVar3 = *(undefined4 *)((int)&(param_1->ThrusterBurn_km__s).X + 4);
  uVar4 = *(undefined4 *)&(param_1->ThrusterBurn_km__s).Y;
  uVar5 = *(undefined4 *)((int)&(param_1->ThrusterBurn_km__s).Y + 4);
  *(undefined4 *)&(this->ThrusterBurn_km__s).X = *(undefined4 *)&(param_1->ThrusterBurn_km__s).X;
  *(undefined4 *)((int)&(this->ThrusterBurn_km__s).X + 4) = uVar3;
  *(undefined4 *)&(this->ThrusterBurn_km__s).Y = uVar4;
  *(undefined4 *)((int)&(this->ThrusterBurn_km__s).Y + 4) = uVar5;
  (this->ThrusterBurn_km__s).Z = (param_1->ThrusterBurn_km__s).Z;
  uVar3 = *(undefined4 *)((int)&(param_1->ResidualThrusterBurn_km__s).X + 4);
  uVar4 = *(undefined4 *)&(param_1->ResidualThrusterBurn_km__s).Y;
  uVar5 = *(undefined4 *)((int)&(param_1->ResidualThrusterBurn_km__s).Y + 4);
  *(undefined4 *)&(this->ResidualThrusterBurn_km__s).X =
       *(undefined4 *)&(param_1->ResidualThrusterBurn_km__s).X;
  *(undefined4 *)((int)&(this->ResidualThrusterBurn_km__s).X + 4) = uVar3;
  *(undefined4 *)&(this->ResidualThrusterBurn_km__s).Y = uVar4;
  *(undefined4 *)((int)&(this->ResidualThrusterBurn_km__s).Y + 4) = uVar5;
  (this->ResidualThrusterBurn_km__s).Z = (param_1->ResidualThrusterBurn_km__s).Z;
  this->NodeType = param_1->NodeType;
  uVar3 = *(undefined4 *)((int)&(param_1->CachedReferenceShiftedPosition_km).X + 4);
  uVar4 = *(undefined4 *)&(param_1->CachedReferenceShiftedPosition_km).Y;
  uVar5 = *(undefined4 *)((int)&(param_1->CachedReferenceShiftedPosition_km).Y + 4);
  *(undefined4 *)&(this->CachedReferenceShiftedPosition_km).X =
       *(undefined4 *)&(param_1->CachedReferenceShiftedPosition_km).X;
  *(undefined4 *)((int)&(this->CachedReferenceShiftedPosition_km).X + 4) = uVar3;
  *(undefined4 *)&(this->CachedReferenceShiftedPosition_km).Y = uVar4;
  *(undefined4 *)((int)&(this->CachedReferenceShiftedPosition_km).Y + 4) = uVar5;
  (this->CachedReferenceShiftedPosition_km).Z = (param_1->CachedReferenceShiftedPosition_km).Z;
  uVar3 = *(undefined4 *)((int)&(param_1->CachedGravityBodyReferenceShiftedPosition_km).Data.X + 4);
  uVar4 = *(undefined4 *)&(param_1->CachedGravityBodyReferenceShiftedPosition_km).Data.Y;
  uVar5 = *(undefined4 *)((int)&(param_1->CachedGravityBodyReferenceShiftedPosition_km).Data.Y + 4);
  *(undefined4 *)&(this->CachedGravityBodyReferenceShiftedPosition_km).Data.X =
       *(undefined4 *)&(param_1->CachedGravityBodyReferenceShiftedPosition_km).Data.X;
  *(undefined4 *)((int)&(this->CachedGravityBodyReferenceShiftedPosition_km).Data.X + 4) = uVar3;
  *(undefined4 *)&(this->CachedGravityBodyReferenceShiftedPosition_km).Data.Y = uVar4;
  *(undefined4 *)((int)&(this->CachedGravityBodyReferenceShiftedPosition_km).Data.Y + 4) = uVar5;
  uVar3 = *(undefined4 *)((int)&(param_1->CachedGravityBodyReferenceShiftedPosition_km).Data.Z + 4);
  bVar6 = (param_1->CachedGravityBodyReferenceShiftedPosition_km).IsValidData;
  uVar7 = *(undefined3 *)((char *)&(param_1->CachedGravityBodyReferenceShiftedPosition_km) + 0x19);
  uVar4 = *(undefined4 *)((char *)&(param_1->CachedGravityBodyReferenceShiftedPosition_km) + 0x1c);
  *(undefined4 *)&(this->CachedGravityBodyReferenceShiftedPosition_km).Data.Z =
       *(undefined4 *)&(param_1->CachedGravityBodyReferenceShiftedPosition_km).Data.Z;
  *(undefined4 *)((int)&(this->CachedGravityBodyReferenceShiftedPosition_km).Data.Z + 4) = uVar3;
  (this->CachedGravityBodyReferenceShiftedPosition_km).IsValidData = bVar6;
  *(undefined3 *)((char *)&(this->CachedGravityBodyReferenceShiftedPosition_km) + 0x19) = uVar7;
  *(undefined4 *)((char *)&(this->CachedGravityBodyReferenceShiftedPosition_km) + 0x1c) = uVar4;
  this->CachedTotalSpentDeltaV_km__s = param_1->CachedTotalSpentDeltaV_km__s;
  pRVar1 = (this->CachedGravityBody).Controller;
  (this->CachedGravityBody).Pointer = (param_1->CachedGravityBody).Pointer;
  pRVar2 = (param_1->CachedGravityBody).Controller;
  (this->CachedGravityBody).Controller = pRVar2;
  if (pRVar2 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar2);
  }
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  pRVar1 = (this->CachedNearestBody).Controller;
  (this->CachedNearestBody).Pointer = (param_1->CachedNearestBody).Pointer;
  pRVar2 = (param_1->CachedNearestBody).Controller;
  (this->CachedNearestBody).Controller = pRVar2;
  if (pRVar2 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar2);
  }
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  pRVar1 = (this->CachedNearestFleet).Controller;
  (this->CachedNearestFleet).Pointer = (param_1->CachedNearestFleet).Pointer;
  pRVar2 = (param_1->CachedNearestFleet).Controller;
  (this->CachedNearestFleet).Controller = pRVar2;
  if (pRVar2 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar2);
  }
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  uVar3 = *(undefined4 *)((int)&(param_1->CachedNearestFleetDistance_km).Data + 4);
  bVar6 = (param_1->CachedNearestFleetDistance_km).IsValidData;
  uVar7 = *(undefined3 *)((char *)&(param_1->CachedNearestFleetDistance_km) + 0x9);
  uVar4 = *(undefined4 *)((char *)&(param_1->CachedNearestFleetDistance_km) + 0xc);
  *(undefined4 *)&(this->CachedNearestFleetDistance_km).Data =
       *(undefined4 *)&(param_1->CachedNearestFleetDistance_km).Data;
  *(undefined4 *)((int)&(this->CachedNearestFleetDistance_km).Data + 4) = uVar3;
  (this->CachedNearestFleetDistance_km).IsValidData = bVar6;
  *(undefined3 *)((char *)&(this->CachedNearestFleetDistance_km) + 0x9) = uVar7;
  *(undefined4 *)((char *)&(this->CachedNearestFleetDistance_km) + 0xc) = uVar4;
  uVar3 = *(undefined4 *)((int)&(param_1->CachedNearestFleetParametricCoord).Data + 4);
  bVar6 = (param_1->CachedNearestFleetParametricCoord).IsValidData;
  uVar7 = *(undefined3 *)((char *)&(param_1->CachedNearestFleetParametricCoord) + 0x9);
  uVar4 = *(undefined4 *)((char *)&(param_1->CachedNearestFleetParametricCoord) + 0xc);
  *(undefined4 *)&(this->CachedNearestFleetParametricCoord).Data =
       *(undefined4 *)&(param_1->CachedNearestFleetParametricCoord).Data;
  *(undefined4 *)((int)&(this->CachedNearestFleetParametricCoord).Data + 4) = uVar3;
  (this->CachedNearestFleetParametricCoord).IsValidData = bVar6;
  *(undefined3 *)((char *)&(this->CachedNearestFleetParametricCoord) + 0x9) = uVar7;
  *(undefined4 *)((char *)&(this->CachedNearestFleetParametricCoord) + 0xc) = uVar4;
  pRVar1 = (this->CachedNearestOrbiter).Controller;
  (this->CachedNearestOrbiter).Pointer = (param_1->CachedNearestOrbiter).Pointer;
  pRVar2 = (param_1->CachedNearestOrbiter).Controller;
  (this->CachedNearestOrbiter).Controller = pRVar2;
  if (pRVar2 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar2);
  }
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  uVar3 = *(undefined4 *)((int)&(param_1->CachedNearestOrbitDistance_km).Data + 4);
  bVar6 = (param_1->CachedNearestOrbitDistance_km).IsValidData;
  uVar7 = *(undefined3 *)((char *)&(param_1->CachedNearestOrbitDistance_km) + 0x9);
  uVar4 = *(undefined4 *)((char *)&(param_1->CachedNearestOrbitDistance_km) + 0xc);
  *(undefined4 *)&(this->CachedNearestOrbitDistance_km).Data =
       *(undefined4 *)&(param_1->CachedNearestOrbitDistance_km).Data;
  *(undefined4 *)((int)&(this->CachedNearestOrbitDistance_km).Data + 4) = uVar3;
  (this->CachedNearestOrbitDistance_km).IsValidData = bVar6;
  *(undefined3 *)((char *)&(this->CachedNearestOrbitDistance_km) + 0x9) = uVar7;
  *(undefined4 *)((char *)&(this->CachedNearestOrbitDistance_km) + 0xc) = uVar4;
  uVar3 = *(undefined4 *)((int)&(param_1->CachedNearestOrbitParametricCoord).Data + 4);
  bVar6 = (param_1->CachedNearestOrbitParametricCoord).IsValidData;
  uVar7 = *(undefined3 *)((char *)&(param_1->CachedNearestOrbitParametricCoord) + 0x9);
  uVar4 = *(undefined4 *)((char *)&(param_1->CachedNearestOrbitParametricCoord) + 0xc);
  *(undefined4 *)&(this->CachedNearestOrbitParametricCoord).Data =
       *(undefined4 *)&(param_1->CachedNearestOrbitParametricCoord).Data;
  *(undefined4 *)((int)&(this->CachedNearestOrbitParametricCoord).Data + 4) = uVar3;
  (this->CachedNearestOrbitParametricCoord).IsValidData = bVar6;
  *(undefined3 *)((char *)&(this->CachedNearestOrbitParametricCoord) + 0x9) = uVar7;
  *(undefined4 *)((char *)&(this->CachedNearestOrbitParametricCoord) + 0xc) = uVar4;
  return this;
}


//==== 00006ed920 006ed920_AddFleet ====
#undef t /* auto(v2): compat 僵尸宏撞成员名 */
extern undefined4 FUN_006ebe30(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 006ed920 name=AddFleet conv=__thiscall body=745

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: void __thiscall LevelEditor__AddFleet(void) */

void __thiscall LevelEditor__AddFleet(LevelEditor *this)

{
  undefined4 stack0xfffffce0;
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  GameManager *this_00;
  SimpleSerializationManager *this_01;
  StarterFleet *this_02;
  Reflectable *pRVar5;
  LocStr *this_03;
  Str_L_char_G_ *pSVar6;
  int *piVar7;
  undefined4 *puVar8;
  ActorHandler *this_04;
  Reflectable *pRVar9;
  HWND unaff_EDI;
  WorldObject local_308;
  void *local_50[3];
  void *local_44;
  Str_L_char_G_ local_38;
  undefined4 local_2c;
  undefined **ppuStack_28;
  Str_L_char_G_ SStack_24;
  Str_L_char_G_ local_18;
  Reflectable *local_c;
  int local_8;
  
  bVar4 = CanAddFleet(this);
  if (bVar4) {
    this_00 = (GameManager *)Manager__GetParent(unaff_EDI);
    this_01 = (SimpleSerializationManager *)GameManager__GetDataManager(this_00);
    this_02 = (StarterFleet *)operator_new(0xe0);
    if (this_02 == (StarterFleet *)0x0) {
      pRVar5 = (Reflectable *)0x0;
    }
    else {
      pRVar5 = (Reflectable *)StarterFleet__StarterFleet(this_02);
    }
    local_c = pRVar5;
    util__Str_char___Str_char__o5(&SStack_24,"NewFleet");
    local_18.Data = (char *)0x0;
    local_18.Capacity = 0;
    local_18.Length = 0;
    this_03 = (LocStr *)util__LocStr__LocStr((LocStr *)local_50,&SStack_24,&local_18);
    pSVar6 = util__LocStr__operator__o3(this_03);
    pSVar6 = util__SimpleSerializationManager__GenerateUniqueName(this_01,&local_38,pRVar5,pSVar6);
    util__Str_char___operator__o8(&pRVar5->Name,pSVar6);
    if (local_38.Data != (char *)0x0) {
      operator_delete__(local_38.Data);
      local_38.Data = (char *)0x0;
    }
    if (local_44 != (void *)0x0) {
      operator_delete__(local_44);
      local_44 = (void *)0x0;
    }
    if (local_50[0] != (void *)0x0) {
      operator_delete__(local_50[0]);
      local_50[0] = (void *)0x0;
    }
    if (local_18.Data != (char *)0x0) {
      operator_delete__(local_18.Data);
      local_18.Data = (char *)0x0;
    }
    if (SStack_24.Data != (char *)0x0) {
      operator_delete__(SStack_24.Data);
    }
    (**(code **)(this_01->_pad_0x0_0 + 8))();
    (**(code **)(*(int *)pRVar5 + 0x40))();
    piVar7 = (int *)SerializationManagerInterface__AddFleet((SerializationManagerInterface *)this_01,SUB41(&ppuStack_28,0));
    puVar8 = (undefined4 *)(**(code **)(*piVar7 + 0x20))();
    pcVar1 = (char *)*puVar8;
    ppuStack_28 = ((void *)(0x009194a4u));
    if (SStack_24.Data != (char *)0x0) {
      operator_delete__(SStack_24.Data);
    }
    local_308.Object.Controller = *(ReferenceController **)(this + 0x84);
    local_308.Object.Pointer = *(Actor **)(this + 0x80);
    if (local_308.Object.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(local_308.Object.Controller);
    }
    local_308.LPointID = *(int *)(this + 0x88);
    ItineraryNode__ItineraryNode(&local_308.Node.LastNode,(ItineraryNode *)(this + 0x90));
    ItineraryNode__ItineraryNode(&local_308.Node.NextNode,(ItineraryNode *)(this + 0x1e0));
    local_308.Node.t = *(double *)(this + 0x330);
    piVar7 = (int *)WorldObject__AsLevelEditorBody(&local_308);
    if (((ReferenceController *)piVar7[1] != (ReferenceController *)0x0) &&
       (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar7[1]),
       !bVar4)) {
      *piVar7 = 0;
    }
    ppuStack_28 = (undefined **)0x0;
    SStack_24.Capacity = 0;
    local_2c = *(undefined4 *)(*piVar7 + 0x14);
    pRVar5 = *(Reflectable **)(*(int *)(this + 4) + 100);
    SStack_24.Data = pcVar1;
    if (pRVar5 == (Reflectable *)0x0) {
      pRVar9 = (Reflectable *)0x0;
    }
    else {
      bVar4 = util__Reflectable__IsType_struct_Level(pRVar5);
      pRVar9 = (Reflectable *)0x0;
      if (bVar4) {
        pRVar9 = pRVar5;
      }
    }
    iVar2 = pRVar9[0x21].Name.Capacity;
    local_8 = iVar2 + 1;
    util__Darray_struct_StartingFleet___SetSize((Darray_L_struct_StartingFleet_G_ *)(pRVar9 + 0x21),&local_8);
    bVar4 = util__Darray_struct_StartingFleet___CheckSize((Darray_L_struct_StartingFleet_G_ *)(pRVar9 + 0x21),iVar2);
    if (bVar4) {
      iVar2 = pRVar9[0x21].Name.Capacity;
      pcVar3 = pRVar9[0x21].Name.Data;
      pcVar1 = pcVar3 + iVar2 * 0x14 + -0x14;
      *(undefined4 *)pcVar1 = local_2c;
      *(undefined ***)(pcVar1 + 4) = ppuStack_28;
      *(char **)(pcVar1 + 8) = SStack_24.Data;
      *(int *)(pcVar1 + 0xc) = SStack_24.Capacity;
      *(Reflectable **)(pcVar3 + iVar2 * 0x14 + -4) = local_c;
    }
    if ((ReferenceController *)local_18.Length != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference((ReferenceController *)local_18.Length);
    }
    NodeMouseOver__dtor(&local_308.Node);
    if (local_308.Object.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_308.Object.Controller);
    }
    this_04 = (ActorHandler *)
              util__Darray_enum_CrewDepartment__Type___Num(*(Darray_L_enum_CrewDepartment__Type_G_ **)this);
    ActorHandler__ResetAllActors(this_04);
    SetupLevel(this);
    pRVar5 = *(Reflectable **)(*(int *)(this + 4) + 100);
    if (pRVar5 == (Reflectable *)0x0) {
      pRVar9 = (Reflectable *)0x0;
    }
    else {
      bVar4 = util__Reflectable__IsType_struct_Level(pRVar5);
      pRVar9 = (Reflectable *)0x0;
      if (bVar4) {
        pRVar9 = pRVar5;
      }
    }
    local_8 = (**(code **)(pRVar9[0x21]._pad_0x0_0 + 8))();
    if (local_8 != 0) {
      FUN_006ebe30(&stack0xfffffce0,this + 0x348,&local_8);
      Select(this);
    }
    ScenarioEditor__CorrectCurrentLevelValidity(*(ScenarioEditor **)(this + 4));
    RefreshLevelAttributes(this);
    GenerateUI(this);
  }
  return;
}


//==== 000070b6f0 0070b6f0_GetGlobalLights ====
// decompiled by BatchDecomp @ 0070b6f0 name=GetGlobalLights conv=__thiscall body=560

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::Darray<struct GlobalLight> __thiscall
   MainManager__GetGlobalLights(void)const  */

Darray_L_struct_GlobalLight_G_ * __thiscall MainManager__GetGlobalLights(MainManager *this)

{
  double dVar1;
  undefined1 auVar2[12];
  undefined4 uVar3;
  Vec3_L_double_G_ VVar4;
  bool bVar5;
  Level *this_00;
  CelestialBody *this_01;
  Maybe_L_double_G_ *pMVar6;
  GlobalLight *pGVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 unaff_EDI;
  undefined4 uVar11;
  undefined4 uVar12;
  Darray_L_struct_GlobalLight_G_ *in_stack_00000004;
  GlobalLight local_b0;
  undefined8 local_40;
  uint uStack_38;
  undefined4 uStack_34;
  Maybe_L_double_G_ local_30;
  double local_20;
  double local_18;
  double local_10;
  CelestialBody *local_8;
  
  bVar5 = ScenarioEditor__IsOpen((ScenarioEditor *)(this->Editor).Parent);
  if ((((bVar5) ||
       (this_00 = BriefingsHandler__GetLevel((this->Briefings).Pointer), this_00 == (Level *)0x0))
      || (this_01 = Level__GetImportantBody(this_00), this_01 == (CelestialBody *)0x0)) ||
     (local_8 = CelestialBody__GetIlluminatorBody(this_01), local_8 == (CelestialBody *)0x0)) {
    *(undefined ***)in_stack_00000004 = ((void *)(0x0091f76cu));
    *(undefined4 *)(in_stack_00000004 + 4) = 0;
    *(undefined4 *)(in_stack_00000004 + 8) = 0;
    *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
    return in_stack_00000004;
  }
  local_20 = CelestialBody__GetAverageDistanceToIlluminator_km(this_01);
  local_10 = /*4002000000000000*/2.25;
  pMVar6 = util__Sqrt(&local_30,&local_10);
  if (pMVar6->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_18 = pMVar6->Data;
  uVar11 = *(undefined4 *)&local_18;
  uVar12 = *(undefined4 *)((char *)&local_18 + 4);
  if (local_18 <= /*0000000000000000*/0.0) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\vector.inl",0x1a9
                    ,"len > 0",(char *)0x0);
    DebugBreak();
    uVar11 = *(undefined4 *)&local_18;
    uVar12 = *(undefined4 *)((char *)&local_18 + 4);
  }
  dVar1 = /*3ff0000000000000*/1.0 / (double)CONCAT44(uVar12,uVar11);
  ((slice_view *)&auVar2)->_8_4_ = *(undefined4 *)&dVar1;
  ((slice_view *)&auVar2)->_0_8_ = dVar1 * /*bff0000000000000*/-1.0;
  ((slice_view *)&VVar4.Y)->_0_4_ = (int)((ulonglong)dVar1 >> 0x20);
  VVar4.X = (double)((slice_view *)&auVar2)->_4_8_;
  ((slice_view *)&VVar4.Y)->_4_4_ = *(undefined4 *)&dVar1 * /*bfe0000000000000*/-0.5;
  ((slice_view *)&VVar4.Z)->_0_4_ = (int)((ulonglong)(dVar1 * /*bfe0000000000000*/-0.5) >> 0x20);
  ((slice_view *)&VVar4.Z)->_4_4_ = unaff_EDI;
  pGVar7 = CelestialBody__GetGlobalLight(local_8,&local_b0,
                      (double)CONCAT44(SUB84(dVar1 * /*bff0000000000000*/-1.0,0),
                                       (int)((ulonglong)local_20 >> 0x20)),VVar4);
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = ((void *)(0x0091f76cu));
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 1;
  puVar8 = (undefined4 *)operator_new__(0x40);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
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
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    *(undefined1 *)(puVar8 + 0xe) = 0;
    *(undefined8 *)(puVar8 + 0xc) = 0;
  }
  iVar10 = 0;
  *(undefined4 **)(in_stack_00000004 + 4) = puVar8;
  if (0 < *(int *)(in_stack_00000004 + 0xc)) {
    iVar9 = 0;
    do {
      puVar8 = (undefined4 *)(*(int *)(in_stack_00000004 + 4) + iVar9);
      local_40 = 0;
      uStack_38 = uStack_38 & 0xffffff00;
      iVar10 = iVar10 + 1;
      iVar9 = iVar9 + 0x40;
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
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      puVar8[0xe] = uStack_38;
      puVar8[0xf] = uStack_34;
    } while (iVar10 < *(int *)(in_stack_00000004 + 0xc));
  }
  iVar10 = *(int *)(in_stack_00000004 + 8);
  local_8 = (CelestialBody *)(iVar10 + 1);
  util__Darray_struct_GlobalLight___SetSize(in_stack_00000004,(int *)&local_8);
  bVar5 = util__Darray_struct_GlobalLight___CheckSize(in_stack_00000004,iVar10);
  if (!bVar5) {
    return in_stack_00000004;
  }
  iVar10 = *(int *)(in_stack_00000004 + 4);
  uVar11 = *(undefined4 *)((int)&(pGVar7->Direction).X + 4);
  uVar12 = *(undefined4 *)&(pGVar7->Direction).Y;
  uVar3 = *(undefined4 *)((int)&(pGVar7->Direction).Y + 4);
  iVar9 = *(int *)(in_stack_00000004 + 8) * 0x40;
  puVar8 = (undefined4 *)(iVar9 + -0x40 + iVar10);
  *puVar8 = *(undefined4 *)&(pGVar7->Direction).X;
  puVar8[1] = uVar11;
  puVar8[2] = uVar12;
  puVar8[3] = uVar3;
  uVar11 = *(undefined4 *)((int)&(pGVar7->Direction).Z + 4);
  uVar12 = *(undefined4 *)&(pGVar7->Color).X;
  uVar3 = *(undefined4 *)((int)&(pGVar7->Color).X + 4);
  puVar8 = (undefined4 *)(iVar9 + -0x30 + iVar10);
  *puVar8 = *(undefined4 *)&(pGVar7->Direction).Z;
  puVar8[1] = uVar11;
  puVar8[2] = uVar12;
  puVar8[3] = uVar3;
  uVar11 = *(undefined4 *)((int)&(pGVar7->Color).Y + 4);
  uVar12 = *(undefined4 *)&(pGVar7->Color).Z;
  uVar3 = *(undefined4 *)((int)&(pGVar7->Color).Z + 4);
  puVar8 = (undefined4 *)(iVar9 + -0x20 + iVar10);
  *puVar8 = *(undefined4 *)&(pGVar7->Color).Y;
  puVar8[1] = uVar11;
  puVar8[2] = uVar12;
  puVar8[3] = uVar3;
  uVar11 = *(undefined4 *)((int)&pGVar7->Irradiance_W__m2 + 4);
  uVar12 = *(undefined4 *)&pGVar7->IsMainLight;
  uVar3 = *(undefined4 *)&pGVar7->field_0x3c;
  puVar8 = (undefined4 *)(iVar9 + -0x10 + iVar10);
  *puVar8 = *(undefined4 *)&pGVar7->Irradiance_W__m2;
  puVar8[1] = uVar11;
  puVar8[2] = uVar12;
  puVar8[3] = uVar3;
  return in_stack_00000004;
}


//==== 000070f800 0070f800_GetDistanceToStates ====
// decompiled by BatchDecomp @ 0070f800 name=GetDistanceToStates conv=__thiscall body=447

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall FixedOrbit__GetDistanceToStates(struct util::PhysicalState<struct
   util::Vec3<double> >,struct util::PhysicalState<struct util::Vec3<double> >,double,double)const
    */

double __thiscall
FixedOrbit__GetDistanceToStates(FixedOrbit *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
          undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
          undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,
          undefined4 param_21,undefined4 param_22,undefined4 param_23,undefined4 param_24,
          undefined4 param_25,undefined8 param_26,undefined8 param_27)

{
  undefined4 stack0xfffffffc;
  ReferenceController *pRVar1;
  Line3_L_double_G_ LVar2;
  Line3_L_double_G_ LVar3;
  undefined8 uVar4;
  bool bVar5;
  float10 extraout_ST0;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
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
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
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
  pRVar1 = (ReferenceController *)(this->Elements)._pad_0x0_0;
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar5 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (!bVar5) {
      (this->OrbitedBody).Controller = (ReferenceController *)0x0;
    }
  }
  CelestialObject__GetStateRelativeToThis((CelestialObject *)(this->OrbitedBody).Controller,&local_68,param_2,param_3,param_4,
             param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,param_13,
             (int)param_26,(int)((ulonglong)param_26 >> 0x20));
  pRVar1 = (ReferenceController *)(this->Elements)._pad_0x0_0;
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar5 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (!bVar5) {
      (this->OrbitedBody).Controller = (ReferenceController *)0x0;
    }
  }
  CelestialObject__GetStateRelativeToThis((CelestialObject *)(this->OrbitedBody).Controller,&local_38,param_14,param_15,param_16,
             param_17,param_18,param_19,param_20,param_21,param_22,param_23,param_24,param_25,
             (int)param_27,(int)((ulonglong)param_27 >> 0x20));
  uStack_c0 = local_38;
  uStack_bc = uStack_34;
  uStack_b8 = uStack_30;
  uStack_b4 = uStack_2c;
  uStack_b0 = local_28;
  uStack_ac = uStack_24;
  local_c8 = local_58;
  local_a8 = local_68;
  uStack_a4 = uStack_64;
  uStack_a0 = uStack_60;
  uStack_9c = uStack_5c;
  ProjectStateOnToOrbit
            (this,&local_98,local_68,uStack_64,uStack_60,uStack_5c,(int)local_58,
             (int)((ulonglong)local_58 >> 0x20),(int)uStack_50,(int)((ulonglong)uStack_50 >> 0x20),
             local_48,uStack_44,uStack_40,uStack_3c,0,0);
  ProjectStateOnToOrbit
            (this,&local_108,local_38,uStack_34,uStack_30,uStack_2c,local_28,uStack_24,uStack_20,
             uStack_1c,local_18,uStack_14,uStack_10,uStack_c,0,0);
  uStack_80 = local_108;
  uStack_7c = uStack_104;
  uStack_78 = uStack_100;
  uStack_74 = uStack_fc;
  uStack_70 = local_f8;
  uVar4 = uStack_70;
  ((slice_view *)&uStack_70)->_0_4_ = (undefined4)local_f8;
  ((slice_view *)&uStack_70)->_4_4_ = *(undefined4 *)((char *)&local_f8 + 4);
  ((slice_view *)&LVar2.A.X)->_4_4_ = uStack_a4;
  ((slice_view *)&LVar2.A.X)->_0_4_ = local_a8;
  ((slice_view *)&LVar2.A.Y)->_0_4_ = uStack_a0;
  ((slice_view *)&LVar2.A.Y)->_4_4_ = uStack_9c;
  ((slice_view *)&LVar2.A.Z)->_0_4_ = (undefined4)local_c8;
  ((slice_view *)&LVar2.A.Z)->_4_4_ = ((slice_view *)&local_c8)->_4_4_;
  ((slice_view *)&LVar2.B.X)->_0_4_ = uStack_c0;
  ((slice_view *)&LVar2.B.X)->_4_4_ = uStack_bc;
  ((slice_view *)&LVar2.B.Y)->_0_4_ = uStack_b8;
  ((slice_view *)&LVar2.B.Y)->_4_4_ = uStack_b4;
  ((slice_view *)&LVar2.B.Z)->_0_4_ = uStack_b0;
  ((slice_view *)&LVar2.B.Z)->_4_4_ = uStack_ac;
  ((slice_view *)&LVar3.A.X)->_4_4_ = uStack_94;
  ((slice_view *)&LVar3.A.X)->_0_4_ = local_98;
  ((slice_view *)&LVar3.A.Y)->_0_4_ = uStack_90;
  ((slice_view *)&LVar3.A.Y)->_4_4_ = uStack_8c;
  ((slice_view *)&LVar3.A.Z)->_0_4_ = local_88;
  ((slice_view *)&LVar3.A.Z)->_4_4_ = uStack_84;
  ((slice_view *)&LVar3.B.X)->_0_4_ = local_108;
  ((slice_view *)&LVar3.B.X)->_4_4_ = uStack_104;
  ((slice_view *)&LVar3.B.Y)->_0_4_ = uStack_100;
  ((slice_view *)&LVar3.B.Y)->_4_4_ = uStack_fc;
  ((slice_view *)&LVar3.B.Z)->_0_4_ = (undefined4)uStack_70;
  ((slice_view *)&LVar3.B.Z)->_4_4_ = ((slice_view *)&uStack_70)->_4_4_;
  uStack_70 = uVar4;
util__IsOnTopOfTargetFleet(LVar2,LVar3);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 000070fc30 0070fc30_GetFullRotator_MemoizedFunction ====
// decompiled by BatchDecomp @ 0070fc30 name=GetFullRotator_MemoizedFunction conv=__thiscall body=947

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: struct util::Quaternion<double> __thiscall
   FixedOrbit__GetFullRotator_MemoizedFunction(void)const  */

Quaternion_L_double_G_ * __thiscall
FixedOrbit__GetFullRotator_MemoizedFunction(FixedOrbit *this,Quaternion_L_double_G_ *__return_storage_ptr__)

{
  undefined4 stack0xfffffffc;
  ReferenceController *this_00;
  bool bVar1;
  uint uVar2;
  CelestialBody *this_01;
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
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  uVar2 = __security_cookie ^ (uint)&stack0xfffffffc;
  dVar3 = (this->Elements).MeanAnomaly_degrees;
  if (((NAN(dVar3 * /*3f91df46a2529d39*/0.017453292519943295)) ||
      (NAN((this->Elements).LongitudeOfAscendingNode_degrees * /*3f91df46a2529d39*/0.017453292519943295))) ||
     (NAN((this->Elements).ArgumentOfPeriapsis_degrees * /*3f91df46a2529d39*/0.017453292519943295))) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\astrodynamics.cpp",0x11e,
                    "!IsNan(Elements.GetArgumentOfPeriapsis_radians()) && !IsNan(Elements.GetInclinationToRelativePlane_radians()) && !IsNan(Elements.GetLongitudeOfAscendingNode_radians())"
                    ,(char *)0x0);
    DebugBreak();
    dVar3 = (this->Elements).MeanAnomaly_degrees;
  }
  dVar10 = dVar3 * /*bf91df46a2529d39*/-0.017453292519943295 * /*3fe0000000000000*/0.5;
  dVar3 = dVar10;
  dVar3 = libm_sse2_sin_precise(dVar3);
  dVar11 = dVar3 * 0.0;
  dVar11 = libm_sse2_cos_precise(dVar11);
  dVar4 = (this->Elements).LongitudeOfAscendingNode_degrees * /*bf91df46a2529d39*/-0.017453292519943295 *
          /*3fe0000000000000*/0.5;
  dVar15 = dVar4;
  dVar15 = libm_sse2_sin_precise(dVar15);
  dVar5 = dVar15 * 0.0;
  dVar5 = libm_sse2_cos_precise(dVar5);
  dVar6 = (this->Elements).ArgumentOfPeriapsis_degrees * /*bf91df46a2529d39*/-0.017453292519943295 *
          /*3fe0000000000000*/0.5;
  dVar13 = dVar6;
  dVar13 = libm_sse2_sin_precise(dVar13);
  dVar12 = dVar13 * 0.0;
  dVar12 = libm_sse2_cos_precise(dVar12);
  this_01 = (CelestialBody *)(this->OrbitedBody).Pointer;
  if (this_01 == (CelestialBody *)0x0) {
    this_00 = (ReferenceController *)(this->Elements)._pad_0x0_0;
    if ((this_00 != (ReferenceController *)0x0) &&
       (bVar1 = util__ReferenceController__IsDataStillValid(this_00), !bVar1)) {
      (this->OrbitedBody).Controller = (ReferenceController *)0x0;
    }
    this_01 = (CelestialBody *)(this->OrbitedBody).Controller[6].WeakReferenceCount;
  }
  dVar18 = CelestialBody__GetAbsoluteAxialTilt_radians(this_01);
  dVar18 = dVar18 * /*3fe0000000000000*/0.5;
  dVar7 = dVar18;
  dVar7 = libm_sse2_sin_precise(dVar7);
  dVar8 = dVar7 * 0.0;
  dVar8 = libm_sse2_cos_precise(dVar8);
  dVar16 = dVar12 * dVar8;
  dVar9 = ((dVar6 * dVar7 + dVar13 * dVar8) - dVar16) + dVar18 * dVar12;
  dVar17 = (dVar6 * dVar8 - dVar13 * dVar7) + dVar16 + dVar18 * dVar12;
  dVar14 = (dVar12 * dVar7 - dVar16) + dVar6 * dVar8 + dVar18 * dVar13;
  dVar13 = dVar18 * dVar6 - (dVar16 + dVar12 * dVar7 + dVar13 * dVar8);
  dVar12 = ((dVar4 * dVar9 + dVar5 * dVar17) - dVar5 * dVar14) + dVar15 * dVar13;
  dVar6 = (dVar4 * dVar17 - dVar5 * dVar9) + dVar15 * dVar14 + dVar5 * dVar13;
  dVar18 = (dVar5 * dVar9 - dVar15 * dVar17) + dVar4 * dVar14 + dVar5 * dVar13;
  dVar15 = dVar4 * dVar13 - (dVar15 * dVar9 + dVar5 * dVar17 + dVar5 * dVar14);
  __return_storage_ptr__->X =
       ((dVar3 * dVar6 + dVar10 * dVar12) - dVar11 * dVar18) + dVar11 * dVar15;
  __return_storage_ptr__->Y = (dVar10 * dVar6 - dVar3 * dVar12) + dVar11 * dVar18 + dVar11 * dVar15;
  __return_storage_ptr__->Z = (dVar11 * dVar12 - dVar11 * dVar6) + dVar10 * dVar18 + dVar3 * dVar15;
  __return_storage_ptr__->W = dVar10 * dVar15 - (dVar11 * dVar6 + dVar11 * dVar12 + dVar3 * dVar18);
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 00007100d0 007100d0_GetLocations_km ====
// decompiled by BatchDecomp @ 007100d0 name=GetLocations_km conv=__thiscall body=870

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Darray<struct util::Vec3<double> > __thiscall
   LibrationOrbit__GetLocations_km(double)const  */

void __thiscall LibrationOrbit__GetLocations_km(LibrationOrbit *this,double param_1)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  void *pvVar7;
  undefined8 *puVar8;
  Vec3_L_double_G_ *pVVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  FixedOrbit *unaff_EDI;
  undefined4 in_stack_0000000c;
  Vec3_L_double_G_ local_130;
  double local_118;
  double local_110;
  double local_108;
  LibrationOrbit *local_100;
  int local_fc;
  double local_f8;
  undefined1 local_f0[28];
  void *local_d4;
  undefined **local_90;
  void *local_8c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)((slice_view *)&param_1)->_0_4_ = 0;
  *(undefined4 *)(((slice_view *)&param_1)->_0_4_ + 4) = 0;
  *(undefined4 *)(((slice_view *)&param_1)->_0_4_ + 8) = 0;
  *(undefined4 *)(((slice_view *)&param_1)->_0_4_ + 0xc) = 0;
  *(undefined ***)((slice_view *)&param_1)->_0_4_ = ((void *)(0x0091a900u));
  *(undefined4 *)(((slice_view *)&param_1)->_0_4_ + 4) = 0;
  *(undefined4 *)(((slice_view *)&param_1)->_0_4_ + 8) = 0;
  *(undefined4 *)(((slice_view *)&param_1)->_0_4_ + 0xc) = 0x4b0;
  local_100 = this;
  pvVar7 = operator_new__(0x7080);
  local_118 = 0.0;
  if (pvVar7 == (void *)0x0) {
    pvVar7 = (void *)0x0;
  }
  else {
    iVar11 = 0x4b0;
    puVar8 = (undefined8 *)((int)pvVar7 + 0x10);
    do {
      *puVar8 = 0;
      *(undefined4 *)(puVar8 + -2) = 0;
      *(undefined4 *)((int)puVar8 + -0xc) = 0;
      *(undefined4 *)(puVar8 + -1) = 0;
      *(undefined4 *)((int)puVar8 + -4) = 0;
      iVar11 = iVar11 + -1;
      puVar8 = puVar8 + 3;
    } while (iVar11 != 0);
  }
  *(void **)(((slice_view *)&param_1)->_0_4_ + 4) = pvVar7;
  iVar11 = 0;
  if (0 < *(int *)(((slice_view *)&param_1)->_0_4_ + 0xc)) {
    iVar12 = 0;
    do {
      iVar1 = *(int *)(((slice_view *)&param_1)->_0_4_ + 4);
      iVar12 = iVar12 + 0x18;
      iVar11 = iVar11 + 1;
      puVar10 = (undefined4 *)(iVar1 + -0x18 + iVar12);
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      *(undefined8 *)(iVar1 + -8 + iVar12) = 0;
    } while (iVar11 < *(int *)(((slice_view *)&param_1)->_0_4_ + 0xc));
  }
  local_110 = GetPeriod_s(this);
  LibrationOrbit_GetActualOrbit_Memoize(this);
  if ((char)this[1]._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  FixedOrbit__FixedOrbit((FixedOrbit *)local_f0,&(this->GetActualOrbit_MemoizedValue).Data);
  local_f8 = 0.0;
  do {
    local_108 = local_f8;
    pVVar9 = GetLocation_km(this,&local_130,
                            (double)CONCAT44(local_f0,(int)((ulonglong)
                                                            ((local_f8 / /*401921fb54442d18*/6.283185307179586) *
                                                             local_110 +
                                                            (double)CONCAT44(in_stack_0000000c,
                                                                             ((slice_view *)&param_1)->_4_4_)) >> 0x20
                                                           )),unaff_EDI);
    iVar11 = *(int *)(((slice_view *)&param_1)->_0_4_ + 8);
    local_fc = iVar11 + 1;
    util__Darray_struct_util__Vec3_double_____SetSize(((slice_view *)&param_1)->_0_4_,&local_fc);
    bVar6 = util__Darray_struct_util__Vec3_double_____CheckSize(((slice_view *)&param_1)->_0_4_,iVar11);
    if (bVar6) {
      iVar11 = *(int *)(((slice_view *)&param_1)->_0_4_ + 8);
      uVar3 = *(undefined4 *)((int)&pVVar9->X + 4);
      uVar4 = *(undefined4 *)&pVVar9->Y;
      uVar5 = *(undefined4 *)((int)&pVVar9->Y + 4);
      iVar12 = *(int *)(((slice_view *)&param_1)->_0_4_ + 4);
      puVar10 = (undefined4 *)(iVar12 + -0x18 + iVar11 * 0x18);
      *puVar10 = *(undefined4 *)&pVVar9->X;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      *(double *)(iVar12 + -8 + iVar11 * 0x18) = pVVar9->Z;
    }
    local_f8 = OrbitUI__GetAngleSubdiv_radians(local_f8);
    local_f8 = local_f8 + local_108;
    this = local_100;
  } while (local_f8 < /*400921fb54442d18*/3.141592653589793);
  local_f8 = 0.0;
  do {
    local_108 = local_f8;
    pVVar9 = GetLocation_km(local_100,&local_130,
                            (double)CONCAT44(local_f0,(int)((ulonglong)
                                                            ((local_f8 / /*401921fb54442d18*/6.283185307179586) *
                                                             local_110 +
                                                            (double)CONCAT44(in_stack_0000000c,
                                                                             ((slice_view *)&param_1)->_4_4_)) >> 0x20
                                                           )),unaff_EDI);
    iVar11 = (**(code **)(*(int *)((slice_view *)&param_1)->_0_4_ + 0xc))();
    if (-1 < iVar11) {
      iVar11 = *(int *)(((slice_view *)&param_1)->_0_4_ + 8);
      local_fc = iVar11 + 1;
      util__Darray_struct_util__Vec3_double_____SetSize(((slice_view *)&param_1)->_0_4_,&local_fc);
      bVar6 = util__Darray_struct_util__Vec3_double_____CheckSize(((slice_view *)&param_1)->_0_4_,iVar11);
      if ((bVar6) &&
         (puVar10 = *(undefined4 **)(((slice_view *)&param_1)->_0_4_ + 4) + (*(int *)(((slice_view *)&param_1)->_0_4_ + 8) * 3 + -3) * 2
         , puVar2 = puVar10, *(undefined4 **)(((slice_view *)&param_1)->_0_4_ + 4) <= puVar10)) {
        do {
          if (iVar11 == 0) {
            uVar3 = *(undefined4 *)((int)&pVVar9->X + 4);
            uVar4 = *(undefined4 *)&pVVar9->Y;
            uVar5 = *(undefined4 *)((int)&pVVar9->Y + 4);
            *puVar10 = *(undefined4 *)&pVVar9->X;
            puVar10[1] = uVar3;
            puVar10[2] = uVar4;
            puVar10[3] = uVar5;
            *(double *)(puVar10 + 4) = pVVar9->Z;
            break;
          }
          uVar3 = puVar2[-5];
          uVar4 = puVar2[-4];
          uVar5 = puVar2[-3];
          iVar11 = iVar11 + -1;
          *puVar10 = puVar2[-6];
          puVar10[1] = uVar3;
          puVar10[2] = uVar4;
          puVar10[3] = uVar5;
          *(undefined8 *)(puVar10 + 4) = *(undefined8 *)(puVar2 + -2);
          puVar10 = puVar10 + -6;
          puVar2 = puVar2 + -6;
        } while (*(undefined4 **)(((slice_view *)&param_1)->_0_4_ + 4) <= puVar10);
      }
    }
    local_118 = OrbitUI__GetAngleSubdiv_radians(local_118);
    local_118 = local_108 - local_118;
    local_f8 = local_118;
    if (local_118 <= /*c00921fb54442d18*/-3.141592653589793) {
      local_90 = ((void *)(0x009194a4u));
      local_108 = local_118;
      if (local_8c != (void *)0x0) {
        operator_delete__(local_8c);
      }
      local_8c = (void *)0x0;
      local_90 = ((void *)(0x00919488u));
      ((slice_view *)&local_f0)->_24_4_ = ((void *)(0x00919980u));
      if (local_d4 != (void *)0x0) {
        operator_delete__(local_d4);
        local_d4 = (void *)0x0;
      }
      if ((ReferenceController *)((slice_view *)&local_f0)->_16_4_ != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference((ReferenceController *)((slice_view *)&local_f0)->_16_4_);
      }
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  } while( true );
}


//==== 0000713890 00713890_IsCollisionImminentForOtherBody ====
// decompiled by BatchDecomp @ 00713890 name=IsCollisionImminentForOtherBody conv=__thiscall body=571

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall FixedOrbit__IsCollisionImminentForOtherBody(class util::WeakPtr<class
   CelestialObject> &,struct Range_L_double_G_)const  */

bool __thiscall
FixedOrbit__IsCollisionImminentForOtherBody(FixedOrbit *this,WeakPtr_L_class_CelestialObject_G_ *param_1,Range_L_double_G_ param_2)

{
  undefined4 stack0xfffffffc;
  ReferenceController *pRVar1;
  CelestialObject *pCVar2;
  CelestialObject *pCVar3;
  int *piVar4;
  Line3_L_double_G_ LVar5;
  Line3_L_double_G_ LVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  float10 fVar11;
  undefined4 in_stack_00000008;
  undefined4 uVar12;
  undefined1 local_158[48];
  undefined1 local_128[48];
  undefined1 local_f8[48];
  undefined1 local_c8[48];
  undefined1 local_98[16];
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined1 local_68[16];
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  uVar12 = ((slice_view *)&param_2.Lower)->_4_4_;
  puVar9 = (undefined4 *)GetRelativeOrbitalState(this,(double)CONCAT44(uVar12,local_98));
  local_28 = *puVar9;
  uStack_24 = puVar9[1];
  ((slice_view *)&uStack_20)->_0_4_ = puVar9[2];
  ((slice_view *)&uStack_20)->_4_4_ = (CelestialObject *)puVar9[3];
  uStack_10 = *(double *)(puVar9 + 4);
  puVar9 = (undefined4 *)GetRelativeOrbitalState(this,(double)CONCAT44(in_stack_00000008,local_68));
  local_38 = *puVar9;
  uStack_34 = puVar9[1];
  uStack_30 = puVar9[2];
  uStack_2c = puVar9[3];
  local_88 = *(undefined8 *)(puVar9 + 4);
  uStack_80 = local_28;
  uStack_7c = uStack_24;
  uStack_78 = (undefined4)uStack_20;
  uStack_74 = ((slice_view *)&uStack_20)->_4_4_;
  uStack_70 = uStack_10;
  if (*(ReferenceController **)(param_1 + 4) != (ReferenceController *)0x0) {
    bVar7 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(param_1 + 4));
    if (!bVar7) {
      *(undefined4 *)param_1 = 0;
    }
  }
  pRVar1 = (ReferenceController *)(this->Elements)._pad_0x0_0;
  uStack_20 = (double)CONCAT44(*(undefined4 *)param_1,(undefined4)uStack_20);
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar7 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (!bVar7) {
      (this->OrbitedBody).Controller = (ReferenceController *)0x0;
    }
  }
  pCVar2 = (CelestialObject *)(this->OrbitedBody).Controller;
  if (*(ReferenceController **)(param_1 + 4) != (ReferenceController *)0x0) {
    bVar7 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(param_1 + 4));
    if (!bVar7) {
      *(undefined4 *)param_1 = 0;
    }
  }
  pRVar1 = (ReferenceController *)(this->Elements)._pad_0x0_0;
  ((slice_view *)&uStack_10)->_4_4_ = *(CelestialObject **)param_1;
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar7 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (!bVar7) {
      (this->OrbitedBody).Controller = (ReferenceController *)0x0;
    }
  }
  pCVar3 = (CelestialObject *)(this->OrbitedBody).Controller;
  puVar9 = (undefined4 *)
           CelestialObject__GetStateAt(((slice_view *)&uStack_20)->_4_4_,(double)CONCAT44(uVar12,local_c8));
  puVar9 = (undefined4 *)
           CelestialObject__GetStateRelativeToThis(pCVar2,local_f8,*puVar9,puVar9[1],puVar9[2],puVar9[3],puVar9[4],puVar9[5],
                      puVar9[6],puVar9[7],puVar9[8],puVar9[9],puVar9[10],puVar9[0xb],uVar12,
                      param_2.Upper);
  puVar10 = (undefined4 *)
            CelestialObject__GetStateAt(((slice_view *)&uStack_10)->_4_4_,(double)CONCAT44(in_stack_00000008,local_128));
  puVar10 = (undefined4 *)
            CelestialObject__GetStateRelativeToThis(pCVar3,local_158,*puVar10,puVar10[1],puVar10[2],puVar10[3],puVar10[4],
                       puVar10[5],puVar10[6],puVar10[7],puVar10[8],puVar10[9],puVar10[10],
                       puVar10[0xb],in_stack_00000008,((slice_view *)&param_2.Lower)->_0_4_);
  local_18 = *puVar10;
  uStack_14 = puVar10[1];
  ((slice_view *)&uStack_10)->_0_4_ = puVar10[2];
  ((slice_view *)&uStack_10)->_4_4_ = (CelestialObject *)puVar10[3];
  local_58 = *(undefined8 *)(puVar10 + 4);
  uStack_50 = *puVar9;
  uStack_4c = puVar9[1];
  uStack_48 = puVar9[2];
  uStack_44 = puVar9[3];
  uStack_40 = *(undefined8 *)(puVar9 + 4);
  if (*(ReferenceController **)(param_1 + 4) != (ReferenceController *)0x0) {
    bVar7 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(param_1 + 4));
    if (!bVar7) {
      *(undefined4 *)param_1 = 0;
    }
  }
  piVar4 = *(int **)param_1;
  ((slice_view *)&LVar5.A.X)->_4_4_ = uStack_34;
  ((slice_view *)&LVar5.A.X)->_0_4_ = local_38;
  ((slice_view *)&LVar5.A.Y)->_0_4_ = uStack_30;
  ((slice_view *)&LVar5.A.Y)->_4_4_ = uStack_2c;
  ((slice_view *)&LVar5.A.Z)->_0_4_ = (undefined4)local_88;
  ((slice_view *)&LVar5.A.Z)->_4_4_ = ((slice_view *)&local_88)->_4_4_;
  ((slice_view *)&LVar5.B.X)->_0_4_ = uStack_80;
  ((slice_view *)&LVar5.B.X)->_4_4_ = uStack_7c;
  ((slice_view *)&LVar5.B.Y)->_0_4_ = uStack_78;
  ((slice_view *)&LVar5.B.Y)->_4_4_ = uStack_74;
  ((slice_view *)&LVar5.B.Z)->_0_4_ = (undefined4)uStack_70;
  ((slice_view *)&LVar5.B.Z)->_4_4_ = ((slice_view *)&uStack_70)->_4_4_;
  ((slice_view *)&LVar6.A.X)->_4_4_ = uStack_14;
  ((slice_view *)&LVar6.A.X)->_0_4_ = local_18;
  ((slice_view *)&LVar6.A.Y)->_0_4_ = (undefined4)uStack_10;
  ((slice_view *)&LVar6.A.Y)->_4_4_ = ((slice_view *)&uStack_10)->_4_4_;
  ((slice_view *)&LVar6.A.Z)->_0_4_ = (undefined4)local_58;
  ((slice_view *)&LVar6.A.Z)->_4_4_ = ((slice_view *)&local_58)->_4_4_;
  ((slice_view *)&LVar6.B.X)->_0_4_ = uStack_50;
  ((slice_view *)&LVar6.B.X)->_4_4_ = uStack_4c;
  ((slice_view *)&LVar6.B.Y)->_0_4_ = uStack_48;
  ((slice_view *)&LVar6.B.Y)->_4_4_ = uStack_44;
  ((slice_view *)&LVar6.B.Z)->_0_4_ = (undefined4)uStack_40;
  ((slice_view *)&LVar6.B.Z)->_4_4_ = ((slice_view *)&uStack_40)->_4_4_;
  uStack_20 = util__IsOnTopOfTargetFleet(LVar5,LVar6);
  fVar11 = (float10)(**(code **)(*piVar4 + 0x44))();
  uStack_10 = (double)fVar11;
  uVar8 = uStack_20 <= uStack_10;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar8;
}


//==== 0000713d60 00713d60_ProjectStateOnToOrbit ====
// decompiled by BatchDecomp @ 00713d60 name=ProjectStateOnToOrbit conv=__thiscall body=440

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct util::PhysicalState<struct util::Vec3<double> > __thiscall
   FixedOrbit__ProjectStateOnToOrbit(struct util::PhysicalState<struct util::Vec3<double>
   >,double)const  */

void __thiscall
FixedOrbit__ProjectStateOnToOrbit(FixedOrbit *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
          undefined4 param_13,undefined4 param_14,double param_15)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  ReferenceController *this_00;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = (double)CONCAT44(param_2,(undefined4)local_10);
  dVar6 = GetTrueAnomalyFromProjectingStateOnToOrbit_radians
                    (this,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                     param_12,param_13,param_14);
  if (*(char *)&(this->GetFullRotator_MemoizedValue).Data.X == '\0') {
    iVar1 = *(int *)&(this->GetOrbitalPeriod_s_MemoizedValue).Data;
    uStack_18 = (double)CONCAT44(iVar1 + 1,(undefined4)uStack_18);
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)
               &(this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Size,
               (int *)((int)&uStack_18 + 4));
    bVar4 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &(this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Size,iVar1);
    if (bVar4) {
      *(code **)((this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Capacity + -4 +
                *(int *)&(this->GetOrbitalPeriod_s_MemoizedValue).Data * 4) =
           SpacecraftComponent__GetEstimatedMaxAngularAcceleration_radians__s2_Clear;
    }
    pcVar5 = DebugBreak_exref;
    if ((this->OrbitedBody).Pointer == (CelestialObject *)0x0) {
      this_00 = (ReferenceController *)(this->Elements)._pad_0x0_0;
      if ((this_00 != (ReferenceController *)0x0) &&
         (bVar4 = util__ReferenceController__IsDataStillValid(this_00), !bVar4)) {
        (this->OrbitedBody).Controller = (ReferenceController *)0x0;
      }
      pcVar5 = DebugBreak_exref;
      if ((this->OrbitedBody).Controller[6].WeakReferenceCount == 0) {
        util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\astrodynamics.cpp",0x70,
                        "GetOrbitedBody()",(char *)0x0);
        pcVar5 = DebugBreak_exref;
        DebugBreak();
      }
    }
    dVar7 = GetAverageAngularVelocity__s(this);
    uVar2 = uStack_18;
    param_2 = ((slice_view *)&local_10)->_4_4_;
    uStack_18 = (double)CONCAT71(((slice_view *)&uStack_18)->_1_7_,1);
    uVar3 = uStack_18;
    ((slice_view *)&uStack_18)->_4_4_ = SUB84(uVar2,4);
    *(double *)&(this->GetOrbitalPeriod_s_MemoizedValue).IsValidData =
         /*401921fb54442d18*/6.283185307179586 / dVar7;
    *(undefined4 *)&(this->GetFullRotator_MemoizedValue).Data.X = (undefined4)uStack_18;
    *(undefined4 *)((int)&(this->GetFullRotator_MemoizedValue).Data.X + 4) = ((slice_view *)&uStack_18)->_4_4_;
    uStack_18 = (double)uVar3;
    if (*(char *)&(this->GetFullRotator_MemoizedValue).Data.X == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      (*pcVar5)();
    }
  }
  dVar6 = (param_15 / *(double *)&(this->GetOrbitalPeriod_s_MemoizedValue).IsValidData) *
          /*401921fb54442d18*/6.283185307179586 + dVar6;
  local_10 = dVar6;
  dVar8 = util__Cos((double *)&local_10);
  dVar7 = (this->Elements).InclinationToRelativePlane_degrees;
  uStack_18 = util__DetermineNavigationThrusters((dVar7 + dVar8) / (dVar7 * dVar8 + /*3ff0000000000000*/1.0));
  dVar7 = uStack_18;
  if (/*400921fb54442d18*/3.141592653589793 < local_10) {
    dVar7 = /*401921fb54442d18*/6.283185307179586 - uStack_18;
  }
  GetStateFromEccentricAndTrueAnomaly
            (this,(double)CONCAT44(SUB84(dVar6,0),param_2),
             (double)CONCAT44(SUB84(dVar7,0),(int)((ulonglong)dVar6 >> 0x20)));
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000715280 00715280_InterceptFleet_km__s ====
// decompiled by BatchDecomp @ 00715280 name=InterceptFleet_km__s conv=__cdecl body=699

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* struct Astrogation::AstrogateResult __cdecl Astrogation__InterceptFleet_km__s(class
   StrategicManager *,double,double,struct util::PhysicalState<struct util::Vec3<double> >,class
   util::WeakPtr<class Fleet>,class util::WeakPtr<class Fleet>,double) */

AstrogateResult * __cdecl
Astrogation__InterceptFleet_km__s(AstrogateResult *__return_storage_ptr__,undefined4 param_1,undefined8 param_2,
          undefined8 param_3,undefined4 param_5,undefined4 param_6,undefined4 param_7,
          undefined4 param_8,undefined4 param_9,undefined4 param_10,undefined4 param_11,
          undefined4 param_12,undefined4 param_13,undefined4 param_14,undefined4 param_15,
          undefined4 param_16,Fleet *param_17,ReferenceController *param_18,Fleet *param_19,
          ReferenceController *param_20,undefined8 param_21)

{
  undefined4 stack0xfffffffc;
  bool bVar1;
  Vec3_L_double_G_ *pVVar2;
  Maybe_L_double_G_ *pMVar3;
  undefined4 uVar4;
  ReferenceController *pRVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  Maybe_L_double_G_ local_80;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  double local_60;
  char local_58;
  undefined1 local_50[8];
  double dStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((param_20 != (ReferenceController *)0x0) &&
     (bVar1 = util__ReferenceController__IsDataStillValid(param_20), !bVar1)) {
    param_19 = (Fleet *)0x0;
  }
  Fleet__GetStateAt(param_19,(double)CONCAT44((int)param_2,&local_40));
  local_10 = 0;
  if ((param_20 != (ReferenceController *)0x0) &&
     (bVar1 = util__ReferenceController__IsDataStillValid(param_20), !bVar1)) {
    param_19 = (Fleet *)0x0;
  }
  Fleet__GetBodyWeAreInHillSphereOf(param_19);
  if ((param_18 != (ReferenceController *)0x0) &&
     (bVar1 = util__ReferenceController__IsDataStillValid(param_18), !bVar1)) {
    param_17 = (Fleet *)0x0;
  }
  Fleet__GetMaxAcceleration_m__s2_Memoize(param_17);
  if ((param_17->GetMaxAcceleration_m__s2_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dStack_48 = (param_17->GetMaxAcceleration_m__s2_MemoizedValue).Data;
  uVar6 = (undefined4)param_21;
  uVar7 = *(undefined4 *)((char *)&param_21 + 4);
  uVar4 = (undefined4)local_10;
  pRVar5 = ((slice_view *)&local_10)->_4_4_;
  if (((slice_view *)&local_10)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(((slice_view *)&local_10)->_4_4_);
  }
  GetCoastVelocityRange_km__s
            (local_50,param_1,param_2,param_3,param_5,param_6,param_7,param_8,param_9,param_10,
             param_11,param_12,param_13,param_14,param_15,param_16,dStack_48,local_40,uStack_3c,
             uStack_38,uStack_34,local_30,uStack_2c,uStack_28,uStack_24,local_20,uStack_1c,uStack_18
             ,uStack_14,uVar4,pRVar5,uVar6,uVar7);
  pRVar5 = param_18;
  if (param_18 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_18);
  }
  pVVar2 = GetCoastVelocity_km__s();
  CorrectBurn_km__s(&local_70,*(undefined4 *)&pVVar2->X,*(undefined4 *)((int)&pVVar2->X + 4),
                    *(undefined4 *)&pVVar2->Y,*(undefined4 *)((int)&pVVar2->Y + 4),pVVar2->Z,
                    (int)param_3,(int)((ulonglong)param_3 >> 0x20),param_17,pRVar5);
  dStack_48 = (double)CONCAT44(uStack_6c,local_70) * (double)CONCAT44(uStack_6c,local_70) +
              (double)CONCAT44(uStack_64,uStack_68) * (double)CONCAT44(uStack_64,uStack_68) +
              local_60 * local_60;
  pMVar3 = util__Sqrt(&local_80,&dStack_48);
  if (pMVar3->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((local_58 == '\0') || (pMVar3->Data <= /*3f50624dd2f1a9fc*/0.001)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  __return_storage_ptr__->Finished = bVar1;
  *(undefined4 *)&(__return_storage_ptr__->DeltaV_km__s).X = local_70;
  *(undefined4 *)((int)&(__return_storage_ptr__->DeltaV_km__s).X + 4) = uStack_6c;
  *(undefined4 *)&(__return_storage_ptr__->DeltaV_km__s).Y = uStack_68;
  *(undefined4 *)((int)&(__return_storage_ptr__->DeltaV_km__s).Y + 4) = uStack_64;
  (__return_storage_ptr__->DeltaV_km__s).Z = local_60;
  if (((slice_view *)&local_10)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_10)->_4_4_);
  }
  if (param_18 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_18);
  }
  if (param_20 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_20);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 0000715a80 00715a80_IsOnTopOfTargetFleet ====
// decompiled by BatchDecomp @ 00715a80 name=IsOnTopOfTargetFleet conv=__cdecl body=678

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* bool __cdecl Astrogation__IsOnTopOfTargetFleet(class StrategicManager *,double,double,class
   util::WeakPtr<class Fleet>,class util::WeakPtr<class Fleet>) */

bool __cdecl
Astrogation__IsOnTopOfTargetFleet(StrategicManager *param_1,undefined8 param_2,undefined8 param_3,Fleet *param_4,
          ReferenceController *param_5,Fleet *param_6,ReferenceController *param_7)

{
  undefined4 stack0xfffffffc;
  Line3_L_double_G_ LVar1;
  Line3_L_double_G_ LVar2;
  bool bVar3;
  undefined1 uVar4;
  Faction *pFVar5;
  Faction *pFVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ReferenceController *pRVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
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
  if ((param_5 != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid(param_5), !bVar3)) {
    param_4 = (Fleet *)0x0;
  }
  uVar13 = (undefined4)param_2;
  Fleet__GetStateAt(param_4,(double)CONCAT44(uVar13,&local_68));
  if ((param_7 != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid(param_7), !bVar3)) {
    param_6 = (Fleet *)0x0;
  }
  Fleet__GetStateAt(param_6,(double)CONCAT44(uVar13,&local_38));
  uVar10 = *(undefined4 *)((char *)&param_3 + 4);
  uVar9 = *(undefined4 *)((char *)&param_2 + 4);
  StrategicManager__NumericallyIntegrate(param_1,&local_c8,local_68,uStack_64,uStack_60,uStack_5c,local_58,uStack_54,uStack_50,
             uStack_4c,local_48,uStack_44,uStack_40,uStack_3c,uVar13,uVar9,(int)param_3,uVar10,0,0,0
             ,0,0,0);
  StrategicManager__NumericallyIntegrate(param_1,&local_98,local_38,uStack_34,uStack_30,uStack_2c,local_28,uStack_24,uStack_20,
             uStack_1c,local_18,uStack_14,uStack_10,uStack_c,uVar13,uVar9,(int)param_3,uVar10,0,0,0,
             0,0,0);
  uStack_e0 = (undefined4)local_88;
  uStack_dc = *(undefined4 *)((char *)&local_88 + 4);
  uStack_110 = (undefined4)local_b8;
  uStack_10c = *(undefined4 *)((char *)&local_b8 + 4);
  ((slice_view *)&LVar1.A.X)->_4_4_ = uStack_64;
  ((slice_view *)&LVar1.A.X)->_0_4_ = local_68;
  ((slice_view *)&LVar1.A.Y)->_0_4_ = uStack_60;
  ((slice_view *)&LVar1.A.Y)->_4_4_ = uStack_5c;
  ((slice_view *)&LVar1.A.Z)->_0_4_ = local_58;
  ((slice_view *)&LVar1.A.Z)->_4_4_ = uStack_54;
  ((slice_view *)&LVar1.B.X)->_0_4_ = local_c8;
  ((slice_view *)&LVar1.B.X)->_4_4_ = uStack_c4;
  ((slice_view *)&LVar1.B.Y)->_0_4_ = uStack_c0;
  ((slice_view *)&LVar1.B.Y)->_4_4_ = uStack_bc;
  ((slice_view *)&LVar1.B.Z)->_0_4_ = uStack_110;
  ((slice_view *)&LVar1.B.Z)->_4_4_ = uStack_10c;
  ((slice_view *)&LVar2.A.X)->_4_4_ = uStack_34;
  ((slice_view *)&LVar2.A.X)->_0_4_ = local_38;
  ((slice_view *)&LVar2.A.Y)->_0_4_ = uStack_30;
  ((slice_view *)&LVar2.A.Y)->_4_4_ = uStack_2c;
  ((slice_view *)&LVar2.A.Z)->_0_4_ = local_28;
  ((slice_view *)&LVar2.A.Z)->_4_4_ = uStack_24;
  ((slice_view *)&LVar2.B.X)->_0_4_ = local_98;
  ((slice_view *)&LVar2.B.X)->_4_4_ = uStack_94;
  ((slice_view *)&LVar2.B.Y)->_0_4_ = uStack_90;
  ((slice_view *)&LVar2.B.Y)->_4_4_ = uStack_8c;
  ((slice_view *)&LVar2.B.Z)->_0_4_ = uStack_e0;
  ((slice_view *)&LVar2.B.Z)->_4_4_ = uStack_dc;
  dVar7 = util__IsOnTopOfTargetFleet(LVar1,LVar2);
  if ((param_5 != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid(param_5), !bVar3)) {
    param_4 = (Fleet *)0x0;
  }
  if ((param_7 != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid(param_7), !bVar3)) {
    param_6 = (Fleet *)0x0;
  }
  pFVar5 = Fleet__GetAlliance(param_4);
  pFVar6 = Fleet__GetAlliance(param_6);
  uVar13 = 0;
  uVar12 = (uint)(pFVar5 != pFVar6);
  pRVar11 = param_7;
  if (param_7 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_7);
  }
  if ((param_5 != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid(param_5), !bVar3)) {
    param_4 = (Fleet *)0x0;
  }
  dVar8 = Fleet__GetCombatDistance_km(param_4,param_6,pRVar11,uVar12,uVar13);
  uVar4 = dVar7 <= dVar8;
  if (param_5 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_5);
  }
  if (param_7 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_7);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar4;
}


//==== 000072de70 0072de70_CheckSizeDestructive ====
// decompiled by BatchDecomp @ 0072de70 name=CheckSizeDestructive conv=__thiscall body=508

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall util::Darray<struct ItineraryNode>::CheckSizeDestructive(void) */

bool __thiscall
util__Darray_struct_ItineraryNode___CheckSizeDestructive(Darray_L_struct_ItineraryNode_G_ *this)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  bool bVar5;
  uint uVar6;
  bool bVar7;
  Darray_L_struct_ItineraryNode_G_ *local_8;
  
  uVar3 = *(uint *)(this + 8);
  bVar7 = -1 < (int)uVar3;
  local_8 = this;
  if (!bVar7) {
    local_8 = (Darray_L_struct_ItineraryNode_G_ *)0x0;
    SetSize(this,(int *)&local_8);
    uVar3 = *(uint *)(this + 8);
  }
  bVar5 = (int)uVar3 < 0x40000000;
  if (!bVar5) {
    local_8 = (Darray_L_struct_ItineraryNode_G_ *)0x3fffffff;
    SetSize(this,(int *)&local_8);
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
    if (*(ItineraryNode **)(this + 4) != (ItineraryNode *)0x0) {
      ItineraryNode___vector_deleting_destructor_(*(ItineraryNode **)(this + 4),3);
      uVar6 = *(uint *)(this + 0xc);
    }
    *(undefined4 *)(this + 4) = 0;
    uVar3 = -(uint)((int)((ulonglong)uVar6 * 0x150 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 0x150)
    ;
    puVar1 = (uint *)operator_new__(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
    if (puVar1 == (uint *)0x0) {
      puVar4 = (uint *)0x0;
    }
    else {
      *puVar1 = uVar6;
      puVar4 = puVar1 + 1;
      if (uVar6 != 0) {
        puVar2 = puVar1 + 0xd;
        puVar1 = puVar4;
        do {
          *puVar1 = 0;
          puVar1 = puVar1 + 0x54;
          puVar2[-0xb] = 0;
          puVar2[-10] = 0;
          puVar2[-9] = 0;
          puVar2[-8] = 0;
          puVar2[-7] = 0;
          puVar2[-6] = 0;
          puVar2[-5] = 0;
          puVar2[-4] = 0;
          puVar2[-3] = 0;
          puVar2[-2] = 0;
          puVar2[-1] = 0;
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
          puVar2[3] = 0;
          puVar2[4] = 0;
          puVar2[5] = 0;
          puVar2[6] = 0;
          puVar2[7] = 0;
          puVar2[8] = 0;
          puVar2[9] = 0;
          puVar2[10] = 0;
          puVar2[0xb] = 0;
          puVar2[0xc] = 0;
          puVar2[0xd] = 0;
          puVar2[0xe] = 0;
          puVar2[0xf] = 0;
          puVar2[0x10] = 0;
          puVar2[0x11] = 0;
          puVar2[0x12] = 0;
          puVar2[0x13] = 0;
          puVar2[0x14] = 0;
          puVar2[0x15] = 0;
          puVar2[0x16] = 0;
          puVar2[0x17] = 0;
          puVar2[0x18] = 0;
          puVar2[0x19] = 0;
          puVar2[0x1a] = 0;
          puVar2[0x1b] = 0;
          puVar2[0x1c] = 0;
          puVar2[0x1d] = 0;
          puVar2[0x1e] = 0;
          puVar2[0x20] = 0;
          puVar2[0x21] = 0;
          puVar2[0x22] = 0;
          puVar2[0x23] = 0;
          puVar2[0x24] = 0;
          puVar2[0x25] = 0;
          puVar2[0x26] = 0;
          puVar2[0x27] = 0;
          puVar2[0x28] = 0;
          puVar2[0x29] = 0;
          puVar2[0x2a] = 0;
          puVar2[0x2b] = 0;
          *(undefined1 *)(puVar2 + 0x2c) = 0;
          puVar2[0x2e] = 0;
          puVar2[0x2f] = 0;
          puVar2[0x30] = 0;
          puVar2[0x31] = 0;
          puVar2[0x32] = 0;
          puVar2[0x33] = 0;
          puVar2[0x34] = 0;
          puVar2[0x35] = 0;
          puVar2[0x36] = 0;
          puVar2[0x37] = 0;
          *(undefined1 *)(puVar2 + 0x38) = 0;
          puVar2[0x3a] = 0;
          puVar2[0x3b] = 0;
          *(undefined1 *)(puVar2 + 0x3c) = 0;
          puVar2[0x3e] = 0;
          puVar2[0x3f] = 0;
          puVar2[0x40] = 0;
          puVar2[0x41] = 0;
          *(undefined1 *)(puVar2 + 0x42) = 0;
          puVar2[0x44] = 0;
          puVar2[0x45] = 0;
          *(undefined1 *)(puVar2 + 0x46) = 0;
          uVar6 = uVar6 - 1;
          puVar2 = puVar2 + 0x54;
        } while (uVar6 != 0);
        *(uint **)(this + 4) = puVar4;
        return bVar5;
      }
    }
    *(uint **)(this + 4) = puVar4;
  }
  return bVar5;
}


//==== 0000732990 00732990_GetQuickInfo ====

// decompiled by BatchDecomp @ 00732990 name=GetQuickInfo conv=__thiscall body=547

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Str<char> __thiscall Fleet__GetQuickInfo(void)const  */

Str_L_char_G_ * __thiscall Fleet__GetQuickInfo(Fleet *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xfffffffc;
  bool *pbVar1;
  Body *this_00;
  ReferenceController *this_01;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  CraftBlueprint *pCVar6;
  int *piVar7;
  int local_2c;
  CraftBlueprint *local_28;
  int local_24;
  undefined1 local_20;
  undefined **local_1c;
  int *piStack_18;
  int iStack_14;
  uint uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  __return_storage_ptr__->Data = (char *)0x0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->Length = 0;
  (**(code **)(this->_pad_0x0_0 + 8))(__return_storage_ptr__);
  pbVar1 = &this[1].Location.OrbitParameters.Data.GetEccentricityPeriapsisRoot_MemoizedValue.
            IsValidData;
  iVar3 = (**(code **)(*(int *)&this[1].Location.OrbitParameters.Data.
                                GetEccentricityPeriapsisRoot_MemoizedValue.IsValidData + 0xc))();
  if (1 < iVar3) {
    local_1c = (undefined **)0x0;
    piStack_18 = (int *)0x0;
    iStack_14 = 0;
    uStack_10 = 0;
    uVar4 = (**(code **)(*(int *)pbVar1 + 0xc))();
    local_1c = ((void *)(0x00920638u));
    piStack_18 = (int *)0x0;
    iStack_14 = 0;
    if (((int)uVar4 < 0) || (0x3fffffff < (int)uVar4)) {
      uStack_10 = 0;
    }
    else {
      uStack_10 = uVar4;
      if (0 < (int)uVar4) {
        piStack_18 = (int *)operator_new__(-(uint)((int)((ulonglong)uVar4 * 8 >> 0x20) != 0) |
                                           (uint)((ulonglong)uVar4 * 8));
        piVar7 = piStack_18;
        if (piStack_18 == (int *)0x0) {
          piStack_18 = (int *)0x0;
        }
        else {
          for (; uVar4 != 0; uVar4 = uVar4 - 1) {
            *piVar7 = 0;
            piVar7[1] = 0;
            piVar7 = piVar7 + 2;
          }
        }
        iVar3 = 0;
        if (0 < (int)uStack_10) {
          do {
            piStack_18[iVar3 * 2] = 0;
            piStack_18[iVar3 * 2 + 1] = 0;
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)uStack_10);
        }
      }
    }
    local_c = 0;
    iVar3 = (**(code **)(*(int *)pbVar1 + 0xc))();
    if (local_c < iVar3) {
      do {
        puVar5 = (undefined4 *)(*(code *)**(undefined4 **)pbVar1)(&local_c);
        this_00 = (Body *)*puVar5;
        Body__GetSpacecraftComponent_Memoize(this_00);
        if ((this_00->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        this_01 = (this_00->GetSpacecraftComponent_MemoizedValue).Data.Controller;
        if ((this_01 != (ReferenceController *)0x0) &&
           (bVar2 = util__ReferenceController__IsDataStillValid(this_01), !bVar2)) {
          (this_00->GetSpacecraftComponent_MemoizedValue).Data.Pointer = (SpacecraftComponent *)0x0;
        }
        pCVar6 = SpacecraftComponent__GetCraftDesign((this_00->GetSpacecraftComponent_MemoizedValue).Data.Pointer);
        iVar3 = iStack_14;
        local_24 = 0;
        for (piVar7 = piStack_18; local_28 = pCVar6, piVar7 != piStack_18 + iStack_14 * 2;
            piVar7 = piVar7 + 2) {
          if ((CraftBlueprint *)*piVar7 == pCVar6) {
            local_20 = 1;
            iVar3 = (*(code *)*local_1c)(&local_24);
            *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
            goto LAB_00732b4c;
          }
          local_24 = local_24 + 1;
        }
        local_2c = iStack_14 + 1;
        local_24 = 0;
        local_20 = 0;
        util__Darray_struct_util__tuple2_enum_Order__Type_int_____SetSize((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)&local_1c,&local_2c);
        bVar2 = util__Darray_struct_util__tuple2_enum_Order__Type_int_____CheckSize((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)&local_1c,iVar3);
        if (bVar2) {
          piStack_18[iStack_14 * 2 + -2] = (int)pCVar6;
          piStack_18[iStack_14 * 2 + -1] = 1;
        }
LAB_00732b4c:
        local_c = local_c + 1;
        iVar3 = (**(code **)(*(int *)pbVar1 + 0xc))();
      } while (local_c < iVar3);
    }
    FUN_0072ada0(&local_1c,__return_storage_ptr__);
    local_1c = ((void *)(0x00920638u));
    if (piStack_18 != (int *)0x0) {
      operator_delete__(piStack_18);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 0000734970 00734970_SetSize ====
// decompiled by BatchDecomp @ 00734970 name=SetSize conv=__thiscall body=474

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: void __thiscall util::Darray<struct ItineraryNode>::SetSize(int const &) */

void __thiscall
util__Darray_struct_ItineraryNode___SetSize(Darray_L_struct_ItineraryNode_G_ *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ItineraryNode *this_00;
  ItineraryNode local_154;
  
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
     (this_00 = (ItineraryNode *)(iVar3 * 0x150 + iVar2),
     this_00 != (ItineraryNode *)(*(int *)(this + 8) * 0x150 + iVar2))) {
    do {
      local_154.Parent.Pointer = (Fleet *)0x0;
      local_154.Parent.Controller = (ReferenceController *)0x0;
      local_154.NodeType = Default;
      local_154.CachedGravityBodyReferenceShiftedPosition_km.IsValidData = false;
      ((slice_view *)&local_154.LastState.Position.X)->_0_4_ = 0;
      ((slice_view *)&local_154.LastState.Position.X)->_4_4_ = 0;
      ((slice_view *)&local_154.LastState.Position.Y)->_0_4_ = 0;
      ((slice_view *)&local_154.LastState.Position.Y)->_4_4_ = 0;
      local_154.CachedNearestFleet.Pointer = (Fleet *)0x0;
      ((slice_view *)&local_154.LastState.Position.Z)->_0_4_ = 0;
      ((slice_view *)&local_154.LastState.Position.Z)->_4_4_ = 0;
      ((slice_view *)&local_154.LastState.Velocity.X)->_0_4_ = 0;
      ((slice_view *)&local_154.LastState.Velocity.X)->_4_4_ = 0;
      local_154.CachedNearestFleet.Controller = (ReferenceController *)0x0;
      ((slice_view *)&local_154.LastState.Velocity.Y)->_0_4_ = 0;
      ((slice_view *)&local_154.LastState.Velocity.Y)->_4_4_ = 0;
      ((slice_view *)&local_154.LastState.Velocity.Z)->_0_4_ = 0;
      ((slice_view *)&local_154.LastState.Velocity.Z)->_4_4_ = 0;
      local_154.CachedNearestFleetDistance_km.IsValidData = false;
      ((slice_view *)&local_154.LastTimeSinceJ2000_s)->_0_4_ = 0;
      ((slice_view *)&local_154.LastTimeSinceJ2000_s)->_4_4_ = 0;
      ((slice_view *)&local_154.State.Position.X)->_0_4_ = 0;
      ((slice_view *)&local_154.State.Position.X)->_4_4_ = 0;
      local_154.CachedNearestFleetParametricCoord.IsValidData = false;
      ((slice_view *)&local_154.State.Position.Y)->_0_4_ = 0;
      ((slice_view *)&local_154.State.Position.Y)->_4_4_ = 0;
      ((slice_view *)&local_154.State.Position.Z)->_0_4_ = 0;
      ((slice_view *)&local_154.State.Position.Z)->_4_4_ = 0;
      local_154.CachedNearestOrbiter.Pointer = (OrbiterInterface *)0x0;
      ((slice_view *)&local_154.State.Velocity.X)->_0_4_ = 0;
      ((slice_view *)&local_154.State.Velocity.X)->_4_4_ = 0;
      ((slice_view *)&local_154.State.Velocity.Y)->_0_4_ = 0;
      ((slice_view *)&local_154.State.Velocity.Y)->_4_4_ = 0;
      local_154.CachedNearestOrbiter.Controller = (ReferenceController *)0x0;
      ((slice_view *)&local_154.State.Velocity.Z)->_0_4_ = 0;
      ((slice_view *)&local_154.State.Velocity.Z)->_4_4_ = 0;
      ((slice_view *)&local_154.TimeSinceJ2000_s)->_0_4_ = 0;
      ((slice_view *)&local_154.TimeSinceJ2000_s)->_4_4_ = 0;
      local_154.CachedNearestOrbitDistance_km.IsValidData = false;
      ((slice_view *)&local_154.ThrusterBurn_km__s.X)->_0_4_ = 0;
      ((slice_view *)&local_154.ThrusterBurn_km__s.X)->_4_4_ = 0;
      ((slice_view *)&local_154.ThrusterBurn_km__s.Y)->_0_4_ = 0;
      ((slice_view *)&local_154.ThrusterBurn_km__s.Y)->_4_4_ = 0;
      local_154.CachedNearestOrbitParametricCoord.IsValidData = false;
      ((slice_view *)&local_154.ThrusterBurn_km__s.Z)->_0_4_ = 0;
      ((slice_view *)&local_154.ThrusterBurn_km__s.Z)->_4_4_ = 0;
      ((slice_view *)&local_154.ResidualThrusterBurn_km__s.X)->_0_4_ = 0;
      ((slice_view *)&local_154.ResidualThrusterBurn_km__s.X)->_4_4_ = 0;
      ((slice_view *)&local_154.ResidualThrusterBurn_km__s.Y)->_0_4_ = 0;
      ((slice_view *)&local_154.ResidualThrusterBurn_km__s.Y)->_4_4_ = 0;
      ((slice_view *)&local_154.ResidualThrusterBurn_km__s.Z)->_0_4_ = 0;
      ((slice_view *)&local_154.ResidualThrusterBurn_km__s.Z)->_4_4_ = 0;
      ((slice_view *)&local_154.CachedReferenceShiftedPosition_km.X)->_0_4_ = 0;
      ((slice_view *)&local_154.CachedReferenceShiftedPosition_km.X)->_4_4_ = 0;
      ((slice_view *)&local_154.CachedReferenceShiftedPosition_km.Y)->_0_4_ = 0;
      ((slice_view *)&local_154.CachedReferenceShiftedPosition_km.Y)->_4_4_ = 0;
      ((slice_view *)&local_154.CachedReferenceShiftedPosition_km.Z)->_0_4_ = 0;
      ((slice_view *)&local_154.CachedReferenceShiftedPosition_km.Z)->_4_4_ = 0;
      ((slice_view *)&local_154.CachedGravityBodyReferenceShiftedPosition_km.Data.X)->_0_4_ = 0;
      ((slice_view *)&local_154.CachedGravityBodyReferenceShiftedPosition_km.Data.X)->_4_4_ = 0;
      ((slice_view *)&local_154.CachedGravityBodyReferenceShiftedPosition_km.Data.Y)->_0_4_ = 0;
      ((slice_view *)&local_154.CachedGravityBodyReferenceShiftedPosition_km.Data.Y)->_4_4_ = 0;
      ((slice_view *)&local_154.CachedGravityBodyReferenceShiftedPosition_km.Data.Z)->_0_4_ = 0;
      ((slice_view *)&local_154.CachedGravityBodyReferenceShiftedPosition_km.Data.Z)->_4_4_ = 0;
      local_154.CachedTotalSpentDeltaV_km__s = 0.0;
      local_154.CachedGravityBody.Pointer = (CelestialObject *)0x0;
      local_154.CachedGravityBody.Controller = (ReferenceController *)0x0;
      local_154.CachedNearestBody.Pointer = (CelestialObject *)0x0;
      local_154.CachedNearestBody.Controller = (ReferenceController *)0x0;
      local_154.CachedNearestFleetDistance_km.Data = 0.0;
      local_154.CachedNearestFleetParametricCoord.Data = 0.0;
      local_154.CachedNearestOrbitDistance_km.Data = 0.0;
      local_154.CachedNearestOrbitParametricCoord.Data = 0.0;
      ItineraryNode__operator_(this_00,&local_154);
      if (local_154.CachedNearestOrbiter.Controller != (ReferenceController *)0x0) {
        ReferenceController__ReleaseWeakReference(local_154.CachedNearestOrbiter.Controller);
      }
      if (local_154.CachedNearestFleet.Controller != (ReferenceController *)0x0) {
        ReferenceController__ReleaseWeakReference(local_154.CachedNearestFleet.Controller);
      }
      if (local_154.CachedNearestBody.Controller != (ReferenceController *)0x0) {
        ReferenceController__ReleaseWeakReference(local_154.CachedNearestBody.Controller);
      }
      if (local_154.CachedGravityBody.Controller != (ReferenceController *)0x0) {
        ReferenceController__ReleaseWeakReference(local_154.CachedGravityBody.Controller);
      }
      if (local_154.Parent.Controller != (ReferenceController *)0x0) {
        ReferenceController__ReleaseWeakReference(local_154.Parent.Controller);
      }
      this_00 = this_00 + 1;
    } while (this_00 != (ItineraryNode *)(*(int *)(this + 8) * 0x150 + *(int *)(this + 4)));
  }
  *(int *)(this + 8) = iVar3;
  return;
}


//==== 0000735be0 00735be0_FUN_00735be0 ====
void FUN_00735be0(undefined4 *param_1,int *param_2);
extern undefined4 FUN_00736db0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00735be0 name=FUN_00735be0 conv=unknown body=561

void FUN_00735be0(undefined4 *param_1,int *param_2)

{
  undefined4 stack0xffffffd4;
  undefined4 stack0xfffffffc;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ReferenceController *this;
  int iVar4;
  undefined4 *puVar5;
  double *pdVar6;
  ReferenceController *pRVar7;
  ReferenceController *local_40;
  double local_3c;
  undefined1 local_34[12];
  ReferenceController *pRStack_28;
  undefined4 *local_24;
  double local_20;
  undefined8 local_18;
  undefined8 local_10;
  double *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_24 = param_1;
  pRStack_28 = (ReferenceController *)0x0;
  local_18 = 0;
  local_10 = 0;
  local_20 = 0.0;
  local_c = (double *)0x0;
  iVar4 = (**(code **)(*param_2 + 0xc))();
  if ((int)local_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*param_2)(&local_c);
      FUN_00736db0(&local_3c,puVar5);
      if ((local_34[0] != '\0') && (((char)local_10 == '\0' || (local_3c < local_20)))) {
        pRStack_28 = (ReferenceController *)*puVar5;
        pRVar7 = (ReferenceController *)puVar5[1];
        if (pRVar7 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar7);
        }
        this = ((slice_view *)&local_18)->_4_4_;
        local_18 = CONCAT44(pRVar7,pRStack_28);
        if (pRVar7 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar7);
        }
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this);
        }
        ((slice_view *)&local_10)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&local_10)->_1_3_[0] | (((slice_view *)&local_10)->_1_3_[1] << 8) | (((slice_view *)&local_10)->_1_3_[2] << 16)) << 8));
        if (pRVar7 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar7);
        }
        local_20 = local_3c;
      }
      local_c = (double *)((int)local_c + 1);
      iVar4 = (**(code **)(*param_2 + 0xc))();
    } while ((int)local_c < iVar4);
  }
  if ((char)local_10 == '\0') {
    local_40 = (ReferenceController *)0x0;
    local_3c = 0.0;
    pdVar6 = (double *)0x0;
    pRVar7 = (ReferenceController *)local_34;
    local_34[0] = 0;
    stack0xffffffd4 = (double)CONCAT44(pRVar7,((slice_view *)&local_34)->_8_4_);
    bVar3 = false;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    pRVar7 = ((slice_view *)&local_18)->_4_4_;
    local_c = (double *)local_18;
    if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(((slice_view *)&local_18)->_4_4_);
    }
    stack0xffffffd4 = local_20;
    if (pRVar7 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar7);
      if (pRVar7 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar7);
        util__ReferenceController__ReleaseWeakReference(pRVar7);
        if (pRVar7 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar7);
        }
      }
    }
    local_40 = pRVar7;
    if (pRVar7 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar7);
    }
    local_3c = stack0xffffffd4;
    bVar3 = true;
    bVar2 = true;
    bVar1 = false;
    local_34[0] = 1;
    stack0xffffffd4 = (double)CONCAT44(local_34,((slice_view *)&local_34)->_8_4_);
    pdVar6 = local_c;
  }
  local_c = &local_3c;
  *local_24 = pdVar6;
  local_24[1] = local_40;
  if (local_40 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(local_40);
  }
  *(double *)(local_24 + 2) = *local_c;
  *(undefined1 *)(local_24 + 4) = *(undefined1 *)pRStack_28;
  if (bVar1) {
    if (local_40 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_40);
    }
  }
  if ((bVar2) && (local_40 != (ReferenceController *)0x0)) {
    util__ReferenceController__ReleaseWeakReference(local_40);
  }
  if ((pRVar7 != (ReferenceController *)0x0) && (bVar3)) {
    util__ReferenceController__ReleaseWeakReference(pRVar7);
  }
  if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_18)->_4_4_);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000735e20 00735e20_FUN_00735e20 ====
void FUN_00735e20(undefined4 *param_1,int *param_2);
extern undefined4 FUN_007373b0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00735e20 name=FUN_00735e20 conv=unknown body=561

void FUN_00735e20(undefined4 *param_1,int *param_2)

{
  undefined4 stack0xffffffd4;
  undefined4 stack0xfffffffc;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ReferenceController *this;
  int iVar4;
  undefined4 *puVar5;
  double *pdVar6;
  ReferenceController *pRVar7;
  ReferenceController *local_40;
  double local_3c;
  undefined1 local_34[12];
  ReferenceController *pRStack_28;
  undefined4 *local_24;
  double local_20;
  undefined8 local_18;
  undefined8 local_10;
  double *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_24 = param_1;
  pRStack_28 = (ReferenceController *)0x0;
  local_18 = 0;
  local_10 = 0;
  local_20 = 0.0;
  local_c = (double *)0x0;
  iVar4 = (**(code **)(*param_2 + 0xc))();
  if ((int)local_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*param_2)(&local_c);
      FUN_007373b0(&local_3c,puVar5);
      if ((local_34[0] != '\0') && (((char)local_10 == '\0' || (local_3c < local_20)))) {
        pRStack_28 = (ReferenceController *)*puVar5;
        pRVar7 = (ReferenceController *)puVar5[1];
        if (pRVar7 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar7);
        }
        this = ((slice_view *)&local_18)->_4_4_;
        local_18 = CONCAT44(pRVar7,pRStack_28);
        if (pRVar7 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar7);
        }
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this);
        }
        ((slice_view *)&local_10)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&local_10)->_1_3_[0] | (((slice_view *)&local_10)->_1_3_[1] << 8) | (((slice_view *)&local_10)->_1_3_[2] << 16)) << 8));
        if (pRVar7 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar7);
        }
        local_20 = local_3c;
      }
      local_c = (double *)((int)local_c + 1);
      iVar4 = (**(code **)(*param_2 + 0xc))();
    } while ((int)local_c < iVar4);
  }
  if ((char)local_10 == '\0') {
    local_40 = (ReferenceController *)0x0;
    local_3c = 0.0;
    pdVar6 = (double *)0x0;
    pRVar7 = (ReferenceController *)local_34;
    local_34[0] = 0;
    stack0xffffffd4 = (double)CONCAT44(pRVar7,((slice_view *)&local_34)->_8_4_);
    bVar3 = false;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    pRVar7 = ((slice_view *)&local_18)->_4_4_;
    local_c = (double *)local_18;
    if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(((slice_view *)&local_18)->_4_4_);
    }
    stack0xffffffd4 = local_20;
    if (pRVar7 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar7);
      if (pRVar7 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar7);
        util__ReferenceController__ReleaseWeakReference(pRVar7);
        if (pRVar7 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar7);
        }
      }
    }
    local_40 = pRVar7;
    if (pRVar7 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar7);
    }
    local_3c = stack0xffffffd4;
    bVar3 = true;
    bVar2 = true;
    bVar1 = false;
    local_34[0] = 1;
    stack0xffffffd4 = (double)CONCAT44(local_34,((slice_view *)&local_34)->_8_4_);
    pdVar6 = local_c;
  }
  local_c = &local_3c;
  *local_24 = pdVar6;
  local_24[1] = local_40;
  if (local_40 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(local_40);
  }
  *(double *)(local_24 + 2) = *local_c;
  *(undefined1 *)(local_24 + 4) = *(undefined1 *)pRStack_28;
  if (bVar1) {
    if (local_40 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_40);
    }
  }
  if ((bVar2) && (local_40 != (ReferenceController *)0x0)) {
    util__ReferenceController__ReleaseWeakReference(local_40);
  }
  if ((pRVar7 != (ReferenceController *)0x0) && (bVar3)) {
    util__ReferenceController__ReleaseWeakReference(pRVar7);
  }
  if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_18)->_4_4_);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007392e0 007392e0_CheckSize ====
// decompiled by BatchDecomp @ 007392e0 name=CheckSize conv=__thiscall body=613

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall util::Darray<struct ItineraryNode>::CheckSize(int) */

bool __thiscall
util__Darray_struct_ItineraryNode___CheckSize(Darray_L_struct_ItineraryNode_G_ *this,int param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  ItineraryNode *pIVar4;
  ItineraryNode *pIVar5;
  ItineraryNode *this_00;
  uint uVar6;
  ItineraryNode *pIVar7;
  bool bVar8;
  ItineraryNode *local_c;
  bool local_5;
  
  local_5 = true;
  uVar3 = *(uint *)(this + 8);
  bVar8 = -1 < (int)uVar3;
  bVar1 = !bVar8;
  if (bVar1) {
    local_c = (ItineraryNode *)0x0;
    SetSize(this,(int *)&local_c);
    uVar3 = *(uint *)(this + 8);
  }
  local_5 = !bVar1;
  bVar1 = (int)uVar3 < 0x40000000;
  if (!bVar1) {
    local_c = (ItineraryNode *)0x3fffffff;
    SetSize(this,(int *)&local_c);
    uVar3 = *(uint *)(this + 8);
    local_5 = false;
  }
  uVar6 = *(uint *)(this + 0xc);
  if ((int)uVar3 <= (int)uVar6) {
    return bVar1 && bVar8;
  }
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
  uVar3 = -(uint)((int)((ulonglong)uVar6 * 0x150 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 0x150);
  puVar2 = (uint *)operator_new__(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
  if (puVar2 == (uint *)0x0) {
    local_c = (ItineraryNode *)0x0;
  }
  else {
    *puVar2 = uVar6;
    local_c = (ItineraryNode *)(puVar2 + 1);
    if (uVar6 != 0) {
      puVar2 = puVar2 + 0xd;
      pIVar4 = local_c;
      do {
        (pIVar4->Parent).Pointer = (Fleet *)0x0;
        pIVar4 = pIVar4 + 1;
        puVar2[-0xb] = 0;
        puVar2[-10] = 0;
        puVar2[-9] = 0;
        puVar2[-8] = 0;
        puVar2[-7] = 0;
        puVar2[-6] = 0;
        puVar2[-5] = 0;
        puVar2[-4] = 0;
        puVar2[-3] = 0;
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2[8] = 0;
        puVar2[9] = 0;
        puVar2[10] = 0;
        puVar2[0xb] = 0;
        puVar2[0xc] = 0;
        puVar2[0xd] = 0;
        puVar2[0xe] = 0;
        puVar2[0xf] = 0;
        puVar2[0x10] = 0;
        puVar2[0x11] = 0;
        puVar2[0x12] = 0;
        puVar2[0x13] = 0;
        puVar2[0x14] = 0;
        puVar2[0x15] = 0;
        puVar2[0x16] = 0;
        puVar2[0x17] = 0;
        puVar2[0x18] = 0;
        puVar2[0x19] = 0;
        puVar2[0x1a] = 0;
        puVar2[0x1b] = 0;
        puVar2[0x1c] = 0;
        puVar2[0x1d] = 0;
        puVar2[0x1e] = 0;
        puVar2[0x20] = 0;
        puVar2[0x21] = 0;
        puVar2[0x22] = 0;
        puVar2[0x23] = 0;
        puVar2[0x24] = 0;
        puVar2[0x25] = 0;
        puVar2[0x26] = 0;
        puVar2[0x27] = 0;
        puVar2[0x28] = 0;
        puVar2[0x29] = 0;
        puVar2[0x2a] = 0;
        puVar2[0x2b] = 0;
        *(undefined1 *)(puVar2 + 0x2c) = 0;
        puVar2[0x2e] = 0;
        puVar2[0x2f] = 0;
        puVar2[0x30] = 0;
        puVar2[0x31] = 0;
        puVar2[0x32] = 0;
        puVar2[0x33] = 0;
        puVar2[0x34] = 0;
        puVar2[0x35] = 0;
        puVar2[0x36] = 0;
        puVar2[0x37] = 0;
        *(undefined1 *)(puVar2 + 0x38) = 0;
        puVar2[0x3a] = 0;
        puVar2[0x3b] = 0;
        *(undefined1 *)(puVar2 + 0x3c) = 0;
        puVar2[0x3e] = 0;
        puVar2[0x3f] = 0;
        puVar2[0x40] = 0;
        puVar2[0x41] = 0;
        *(undefined1 *)(puVar2 + 0x42) = 0;
        puVar2[0x44] = 0;
        puVar2[0x45] = 0;
        *(undefined1 *)(puVar2 + 0x46) = 0;
        uVar6 = uVar6 - 1;
        puVar2 = puVar2 + 0x54;
      } while (uVar6 != 0);
    }
  }
  pIVar4 = *(ItineraryNode **)(this + 4);
  if (pIVar4 != (ItineraryNode *)0x0) {
    pIVar5 = local_c + *(int *)(this + 8);
    this_00 = local_c;
    pIVar7 = pIVar4;
    if (pIVar4 != pIVar4 + param_1) {
      do {
        if (this_00 == pIVar5) break;
        ItineraryNode__operator_(this_00,pIVar7);
        pIVar7 = pIVar7 + 1;
        pIVar4 = *(ItineraryNode **)(this + 4);
        this_00 = this_00 + 1;
      } while (pIVar7 != pIVar4 + param_1);
    }
    if (pIVar4 != (ItineraryNode *)0x0) {
      ItineraryNode___vector_deleting_destructor_(pIVar4,3);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(ItineraryNode **)(this + 4) = local_c;
  return local_5;
}


//==== 000073ff10 0073ff10_GetDistanceStep_km ====
// decompiled by BatchDecomp @ 0073ff10 name=GetDistanceStep_km conv=__thiscall body=436

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: double __thiscall Itinerary__GetDistanceStep_km(struct util::PhysicalState<struct
   util::Vec3<double> >,double,class util::WeakPtr<class CelestialObject>)const  */

double __thiscall
Itinerary__GetDistanceStep_km(Itinerary *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,double param_6)

{
  ReferenceController *this_00;
  Vec3_L_double_G_ VVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  Vec3_L_double_G_ *pVVar5;
  Maybe_L_double_G_ *pMVar6;
  CelestialObject *this_01;
  undefined4 unaff_EDI;
  ReferenceController *pRVar7;
  double dVar8;
  double dVar9;
  undefined8 in_stack_00000034;
  int in_stack_0000003c;
  ReferenceController *in_stack_00000040;
  Vec3_L_double_G_ local_40;
  undefined1 local_28[16];
  undefined8 local_18;
  int local_10;
  ReferenceController *local_c;
  CelestialObject *local_8;
  
  ((slice_view *)&local_28)->_8_8_ = in_stack_00000034;
  local_8 = (CelestialObject *)0x0;
  if (((in_stack_0000003c == 0) || (in_stack_00000040 == (ReferenceController *)0x0)) ||
     (bVar3 = util__ReferenceController__IsDataStillValid(in_stack_00000040), !bVar3)) {
    pRVar7 = (this->ParentFleet).Controller;
    if ((pRVar7 != (ReferenceController *)0x0) &&
       (bVar3 = util__ReferenceController__IsDataStillValid(pRVar7), !bVar3)) {
      (this->ParentFleet).Pointer = (Fleet *)0x0;
    }
    ((slice_view *)&VVar1.X)->_4_4_ = param_2;
    ((slice_view *)&VVar1.X)->_0_4_ = SUB84(((slice_view *)&local_28)->_8_8_,4);
    ((slice_view *)&VVar1.Y)->_0_4_ = param_3;
    ((slice_view *)&VVar1.Y)->_4_4_ = param_4;
    ((slice_view *)&VVar1.Z)->_0_4_ = param_5;
    ((slice_view *)&VVar1.Z)->_4_4_ = *(undefined4 *)&param_6;
    piVar4 = (int *)StrategicManager__FindNearestCelestialBody(((this->ParentFleet).Pointer)->ParentStrategic,
                               (double)CONCAT44((int)((slice_view *)&local_28)->_8_8_,&local_18),VVar1);
    bVar2 = false;
    bVar3 = true;
    pRVar7 = local_c;
  }
  else {
    local_10 = in_stack_0000003c;
    local_c = in_stack_00000040;
    if (in_stack_00000040 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(in_stack_00000040);
    }
    piVar4 = &local_10;
    bVar2 = true;
    bVar3 = false;
    pRVar7 = in_stack_00000040;
  }
  this_00 = (ReferenceController *)piVar4[1];
  local_8 = (CelestialObject *)*piVar4;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  if ((bVar3) && (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0)) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_18)->_4_4_);
  }
  if ((pRVar7 != (ReferenceController *)0x0) && (bVar2)) {
    util__ReferenceController__ReleaseWeakReference(pRVar7);
  }
  this_01 = local_8;
  if ((this_00 != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid(this_00), this_01 = local_8, !bVar3)) {
    this_01 = (CelestialObject *)0x0;
  }
  pVVar5 = CelestialObject__GetPositionAt_km(this_01,&local_40,(double)CONCAT44(unaff_EDI,SUB84(((slice_view *)&local_28)->_8_8_,4)));
  dVar9 = (double)CONCAT44(param_5,param_4) - pVVar5->Y;
  dVar8 = (double)CONCAT44(param_3,param_2) - pVVar5->X;
  param_6 = param_6 - pVVar5->Z;
  local_18 = dVar9 * dVar9 + dVar8 * dVar8 + param_6 * param_6;
  pMVar6 = util__Sqrt((Maybe_L_double_G_ *)local_28,(double *)&local_18);
  if (pMVar6->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar8 = /*3fa015bf9217271a*/0.031415926535897934;
  dVar8 = libm_sse2_sin_precise(dVar8);
  ((slice_view *)&local_28)->_8_8_ = dVar8 * (pMVar6->Data + pMVar6->Data);
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  if (in_stack_00000040 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(in_stack_00000040);
  }
  return (double)((slice_view *)&local_28)->_8_8_;
}


//==== 0000742c20 00742c20_GetRelativeOrbitLineSegments ====
// decompiled by BatchDecomp @ 00742c20 name=GetRelativeOrbitLineSegments conv=__thiscall body=895

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct util::tuple2<struct util::Line3<double>,struct util::Line3<double> > __thiscall
   Itinerary__GetRelativeOrbitLineSegments(struct ItineraryNode const &,class util::WeakPtr<struct
   OrbiterInterface> &)const  */

void __thiscall
Itinerary__GetRelativeOrbitLineSegments(Itinerary *this,ItineraryNode *param_1,WeakPtr_L_struct_OrbiterInterface_G_ *param_2)

{
  undefined4 stack0xfffffffc;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ItineraryNode *pIVar4;
  CelestialObject *pCVar5;
  undefined4 uVar6;
  bool bVar7;
  FixedOrbit *pFVar8;
  int iVar9;
  int iVar10;
  undefined4 *in_stack_0000000c;
  undefined1 local_338[48];
  undefined1 local_308[48];
  undefined1 local_2d8[16];
  ReferenceController *local_2c8;
  undefined **local_2c0;
  void *local_2bc;
  undefined **local_278;
  void *local_274;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 uStack_1c0;
  Fleet *local_1b8;
  ReferenceController *pRStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  CelestialObject *local_158;
  ItineraryNode *local_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined1 local_f0[12];
  CelestialObject *local_e4;
  ReferenceController *local_e0;
  undefined **local_d8;
  void *local_d4;
  undefined **local_90;
  void *local_8c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_154 = (ItineraryNode *)param_2;
  if (((ReferenceController *)in_stack_0000000c[1] != (ReferenceController *)0x0) &&
     (bVar7 = util__ReferenceController__IsDataStillValid((ReferenceController *)in_stack_0000000c[1]), !bVar7)) {
    *in_stack_0000000c = 0;
  }
  pFVar8 = (FixedOrbit *)(*(code *)**(undefined4 **)*in_stack_0000000c)(local_2d8);
  if (*(char *)&pFVar8[1].OrbitedBody.Pointer == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  FixedOrbit__FixedOrbit((FixedOrbit *)local_f0,pFVar8);
  local_278 = ((void *)(0x009194a4u));
  if (local_274 != (void *)0x0) {
    operator_delete__(local_274);
  }
  local_274 = (void *)0x0;
  local_278 = ((void *)(0x00919488u));
  local_2c0 = ((void *)(0x00919980u));
  if (local_2bc != (void *)0x0) {
    operator_delete__(local_2bc);
    local_2bc = (void *)0x0;
  }
  if (local_2c8 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_2c8);
  }
  pIVar4 = local_154;
  ItineraryNode__GetRelativeSweepLine(local_154,(Line3_L_double_G_ *)&local_1b8,(WeakPtr_L_class_CelestialObject_G_ *)&local_e4);
  if ((local_e0 != (ReferenceController *)0x0) &&
     (bVar7 = util__ReferenceController__IsDataStillValid(local_e0), !bVar7)) {
    local_e4 = (CelestialObject *)0x0;
  }
  local_158 = local_e4;
  if ((local_e0 != (ReferenceController *)0x0) &&
     (bVar7 = util__ReferenceController__IsDataStillValid(local_e0), !bVar7)) {
    local_e4 = (CelestialObject *)0x0;
  }
  pCVar5 = local_e4;
  iVar9 = CelestialObject__GetStateRelativeToThis(local_158,local_308,*(undefined4 *)&(pIVar4->State).Position.X,
                     *(undefined4 *)((int)&(pIVar4->State).Position.X + 4),
                     *(undefined4 *)&(pIVar4->State).Position.Y,
                     *(undefined4 *)((int)&(pIVar4->State).Position.Y + 4),
                     *(undefined4 *)&(pIVar4->State).Position.Z,
                     *(undefined4 *)((int)&(pIVar4->State).Position.Z + 4),
                     *(undefined4 *)&(pIVar4->State).Velocity.X,
                     *(undefined4 *)((int)&(pIVar4->State).Velocity.X + 4),
                     *(undefined4 *)&(pIVar4->State).Velocity.Y,
                     *(undefined4 *)((int)&(pIVar4->State).Velocity.Y + 4),
                     *(undefined4 *)&(pIVar4->State).Velocity.Z,
                     *(undefined4 *)((int)&(pIVar4->State).Velocity.Z + 4),pIVar4->TimeSinceJ2000_s)
  ;
  iVar10 = CelestialObject__GetStateRelativeToThis(pCVar5,local_338,*(undefined4 *)&(local_154->LastState).Position.X,
                      *(undefined4 *)((int)&(local_154->LastState).Position.X + 4),
                      *(undefined4 *)&(local_154->LastState).Position.Y,
                      *(undefined4 *)((int)&(local_154->LastState).Position.Y + 4),
                      *(undefined4 *)&(local_154->LastState).Position.Z,
                      *(undefined4 *)((int)&(local_154->LastState).Position.Z + 4),
                      *(undefined4 *)&(local_154->LastState).Velocity.X,
                      *(undefined4 *)((int)&(local_154->LastState).Velocity.X + 4),
                      *(undefined4 *)&(local_154->LastState).Velocity.Y,
                      *(undefined4 *)((int)&(local_154->LastState).Velocity.Y + 4),
                      *(undefined4 *)&(local_154->LastState).Velocity.Z,
                      *(undefined4 *)((int)&(local_154->LastState).Velocity.Z + 4),
                      local_154->LastTimeSinceJ2000_s);
  uStack_1d0 = *(undefined4 *)(iVar10 + 0x18);
  uStack_1cc = *(undefined4 *)(iVar10 + 0x1c);
  uStack_1c8 = *(undefined4 *)(iVar10 + 0x20);
  uStack_1c4 = *(undefined4 *)(iVar10 + 0x24);
  uVar1 = *(undefined8 *)(iVar10 + 0x28);
  ((slice_view *)&local_178)->_0_4_ = uStack_190;
  ((slice_view *)&local_178)->_4_4_ = uStack_18c;
  uStack_170 = *(undefined4 *)(iVar9 + 0x18);
  uStack_16c = *(undefined4 *)(iVar9 + 0x1c);
  uStack_168 = *(undefined4 *)(iVar9 + 0x20);
  uStack_164 = *(undefined4 *)(iVar9 + 0x24);
  uStack_160 = *(undefined8 *)(iVar9 + 0x28);
  ((slice_view *)&uStack_1c0)->_0_4_ = (undefined4)uVar1;
  ((slice_view *)&uStack_1c0)->_4_4_ = *(undefined4 *)((char *)&uVar1 + 4);
  uVar2 = ((slice_view *)&uStack_1c0)->_4_4_;
  uVar6 = (undefined4)uStack_1c0;
  uStack_1c0 = uVar1;
  FixedOrbit__ProjectStateOnToOrbit((FixedOrbit *)local_f0,&local_120,local_1b8,pRStack_1b4,uStack_1b0,uStack_1ac,local_1a8
             ,uStack_1a4,uStack_1d0,uStack_1cc,uStack_1c8,uStack_1c4,uVar6,uVar2,0);
  FixedOrbit__ProjectStateOnToOrbit((FixedOrbit *)local_f0,&local_150,uStack_1a0,uStack_19c,local_198,uStack_194,
             (undefined4)local_178,((slice_view *)&local_178)->_4_4_,uStack_170,uStack_16c,uStack_168,uStack_164,
             (undefined4)uStack_160,((slice_view *)&uStack_160)->_4_4_,0);
  local_178 = local_110;
  uVar1 = local_178;
  uStack_170 = local_150;
  uStack_16c = uStack_14c;
  uStack_168 = uStack_148;
  uStack_164 = uStack_144;
  uStack_160 = local_140;
  uVar3 = uStack_160;
  (param_1->Parent).Pointer = local_1b8;
  (param_1->Parent).Controller = pRStack_1b4;
  *(undefined4 *)&(param_1->LastState).Position.X = uStack_1b0;
  *(undefined4 *)((int)&(param_1->LastState).Position.X + 4) = uStack_1ac;
  *(undefined4 *)&(param_1->LastState).Position.Y = local_1a8;
  *(undefined4 *)((int)&(param_1->LastState).Position.Y + 4) = uStack_1a4;
  *(undefined4 *)&(param_1->LastState).Position.Z = uStack_1a0;
  *(undefined4 *)((int)&(param_1->LastState).Position.Z + 4) = uStack_19c;
  local_90 = ((void *)(0x009194a4u));
  *(undefined4 *)&(param_1->LastState).Velocity.X = local_198;
  *(undefined4 *)((int)&(param_1->LastState).Velocity.X + 4) = uStack_194;
  *(undefined4 *)&(param_1->LastState).Velocity.Y = uStack_190;
  *(undefined4 *)((int)&(param_1->LastState).Velocity.Y + 4) = uStack_18c;
  ((slice_view *)&local_178)->_0_4_ = (undefined4)local_110;
  ((slice_view *)&local_178)->_4_4_ = *(undefined4 *)((char *)&local_110 + 4);
  *(undefined4 *)&(param_1->LastState).Velocity.Z = local_120;
  *(undefined4 *)((int)&(param_1->LastState).Velocity.Z + 4) = uStack_11c;
  *(undefined4 *)&param_1->LastTimeSinceJ2000_s = uStack_118;
  *(undefined4 *)((int)&param_1->LastTimeSinceJ2000_s + 4) = uStack_114;
  *(undefined4 *)&(param_1->State).Position.X = (undefined4)local_178;
  *(undefined4 *)((int)&(param_1->State).Position.X + 4) = ((slice_view *)&local_178)->_4_4_;
  *(undefined4 *)&(param_1->State).Position.Y = local_150;
  *(undefined4 *)((int)&(param_1->State).Position.Y + 4) = uStack_14c;
  ((slice_view *)&uStack_160)->_0_4_ = (undefined4)local_140;
  ((slice_view *)&uStack_160)->_4_4_ = *(undefined4 *)((char *)&local_140 + 4);
  *(undefined4 *)&(param_1->State).Position.Z = uStack_148;
  *(undefined4 *)((int)&(param_1->State).Position.Z + 4) = uStack_144;
  *(undefined4 *)&(param_1->State).Velocity.X = (undefined4)uStack_160;
  *(undefined4 *)((int)&(param_1->State).Velocity.X + 4) = ((slice_view *)&uStack_160)->_4_4_;
  local_178 = uVar1;
  uStack_160 = uVar3;
  if (local_8c != (void *)0x0) {
    operator_delete__(local_8c);
  }
  local_8c = (void *)0x0;
  local_90 = ((void *)(0x00919488u));
  local_d8 = ((void *)(0x00919980u));
  if (local_d4 != (void *)0x0) {
    operator_delete__(local_d4);
    local_d4 = (void *)0x0;
  }
  if (local_e0 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_e0);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000074ce30 0074ce30_AttemptCelestialCollisionAvoidance ====
// decompiled by BatchDecomp @ 0074ce30 name=AttemptCelestialCollisionAvoidance conv=__thiscall body=496

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: struct FutureBurn __thiscall StrategicAI__AttemptCelestialCollisionAvoidance(class
   util::WeakPtr<class Fleet>,double,double) */

FutureBurn * __thiscall
StrategicAI__AttemptCelestialCollisionAvoidance(StrategicAI *this,FutureBurn *__return_storage_ptr__,Fleet *param_3,
          ReferenceController *param_4,undefined8 param_5,undefined8 param_6)

{
  undefined4 stack0xfffffffc;
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Maybe_L_double_G_ MVar4;
  bool bVar5;
  undefined4 *puVar6;
  AstrogateResult *pAVar7;
  undefined4 unaff_EDI;
  Fleet *pFVar8;
  undefined4 uVar9;
  ReferenceController *pRVar10;
  uint uVar11;
  undefined8 *puVar12;
  ReferenceController *pRVar13;
  undefined1 local_128[32];
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8[28];
  void *local_dc;
  undefined **local_98;
  void *local_94;
  undefined8 local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_108 = param_5;
  local_100 = param_6;
  local_10 = 0;
  if ((param_4 != (ReferenceController *)0x0) &&
     (bVar5 = util__ReferenceController__IsDataStillValid(param_4), !bVar5)) {
    param_3 = (Fleet *)0x0;
  }
  puVar12 = &local_10;
  uVar11 = 0x74ce93;
  Fleet__GetBodyWeAreInHillSphereOf(param_3);
  uVar9 = 0;
  uVar11 = uVar11 & 0xffffff00;
  if ((param_4 != (ReferenceController *)0x0) &&
     (bVar5 = util__ReferenceController__IsDataStillValid(param_4), !bVar5)) {
    param_3 = (Fleet *)0x0;
  }
  ((slice_view *)&MVar4.Data)->_4_4_ = uVar11;
  ((slice_view *)&MVar4.Data)->_0_4_ = uVar9;
  ((slice_view *)&MVar4)->_8_4_ = puVar12;
  ((slice_view *)&MVar4)->_12_4_ = unaff_EDI;
  Fleet__GetEstimatedOrbit(param_3,(FixedOrbit *)local_f8,MVar4);
  uVar9 = (undefined4)local_10;
  pRVar13 = ((slice_view *)&local_10)->_4_4_;
  if (((slice_view *)&local_10)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(((slice_view *)&local_10)->_4_4_);
  }
  pFVar8 = param_3;
  pRVar10 = param_4;
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_4);
    bVar5 = util__ReferenceController__IsDataStillValid(param_4);
    if (!bVar5) {
      param_3 = (Fleet *)0x0;
    }
  }
  puVar6 = (undefined4 *)Fleet__GetCurrentState(param_3);
  pAVar7 = Astrogation__OrbitalCircularInjection_km__s(local_128,this->Parent,local_108,local_100,*puVar6,puVar6[1],puVar6[2],
                      puVar6[3],puVar6[4],puVar6[5],puVar6[6],puVar6[7],puVar6[8],puVar6[9],
                      puVar6[10],puVar6[0xb],pFVar8,pRVar10,uVar9,pRVar13);
  uVar9 = *(undefined4 *)((int)&(pAVar7->DeltaV_km__s).X + 4);
  uVar2 = *(undefined4 *)&(pAVar7->DeltaV_km__s).Y;
  uVar3 = *(undefined4 *)((int)&(pAVar7->DeltaV_km__s).Y + 4);
  dVar1 = (pAVar7->DeltaV_km__s).Z;
  local_98 = ((void *)(0x009194a4u));
  *(undefined4 *)&(__return_storage_ptr__->Burn_km__s).X = *(undefined4 *)&(pAVar7->DeltaV_km__s).X;
  *(undefined4 *)((int)&(__return_storage_ptr__->Burn_km__s).X + 4) = uVar9;
  *(undefined4 *)&(__return_storage_ptr__->Burn_km__s).Y = uVar2;
  *(undefined4 *)((int)&(__return_storage_ptr__->Burn_km__s).Y + 4) = uVar3;
  (__return_storage_ptr__->Burn_km__s).Z = dVar1;
  __return_storage_ptr__->TimeParametricCoordinate = 0.0;
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
  if (((slice_view *)&local_10)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_10)->_4_4_);
  }
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 0000753480 00753480_SelectFleetTarget ====
extern undefined4 FUN_0074a030(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_0074a200(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_0074a3d0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00753480 name=SelectFleetTarget conv=__thiscall body=448

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::WeakPtr<class Fleet> __thiscall StrategicAI__SelectFleetTarget(class
   util::WeakPtr<class Fleet>,class util::Darray<class util::WeakPtr<class Fleet> > const &)const
    */

void __thiscall
StrategicAI__SelectFleetTarget(StrategicAI *this,undefined4 *param_2,Fleet *param_3,ReferenceController *param_4,
          undefined4 param_5)

{
  undefined4 stack0xfffffffc;
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  Fleet *pFVar4;
  ReferenceController *pRVar5;
  undefined8 *puStack_9c;
  ReferenceController *pRStack_98;
  double **ppdStack_94;
  undefined4 local_8c;
  double *local_88;
  undefined4 *local_84;
  ReferenceController local_80[2];
  double local_60;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  double local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pFVar4 = param_3;
  pRVar5 = param_4;
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_4);
  }
  GetInterceptProtocol(this,local_80,pFVar4,pRVar5);
  if ((param_4 != (ReferenceController *)0x0) &&
     (bVar1 = util__ReferenceController__IsDataStillValid(param_4), !bVar1)) {
    param_3 = (Fleet *)0x0;
  }
  puVar2 = (undefined4 *)Fleet__GetCurrentState(param_3);
  local_40 = *puVar2;
  uStack_3c = puVar2[1];
  uStack_38 = puVar2[2];
  uStack_34 = puVar2[3];
  local_30 = *(undefined8 *)(puVar2 + 4);
  bVar1 = local_60 <= 0.0;
  if (bVar1) {
    local_60 = 0.0;
  }
  local_20 = !bVar1;
  local_88 = &local_28;
  local_84 = &local_40;
  local_28 = local_60;
  iVar3 = FUN_0074a030(&puStack_9c,param_5,local_8c);
  local_10 = *(undefined8 *)(iVar3 + 8);
  if (pRStack_98 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRStack_98);
  }
  iVar3 = FUN_0074a200(&puStack_9c,param_5,local_88,local_84);
  local_18 = *(undefined8 *)(iVar3 + 8);
  if (pRStack_98 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRStack_98);
  }
  puStack_9c = &local_10;
  pRStack_98 = local_80;
  ppdStack_94 = &local_88;
  puVar2 = (undefined4 *)
           FUN_0074a3d0(&puStack_9c,param_5,&local_8c,puStack_9c,pRStack_98,ppdStack_94,&local_18);
  *param_2 = *puVar2;
  pRVar5 = (ReferenceController *)puVar2[1];
  param_2[1] = pRVar5;
  if (pRVar5 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar5);
  }
  if (pRStack_98 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRStack_98);
  }
  local_80[0].StrongReferenceCount = (int)((void *)(0x00919980u));
  if ((void *)local_80[0].WeakReferenceCount != (void *)0x0) {
    operator_delete__((void *)local_80[0].WeakReferenceCount);
    local_80[0].WeakReferenceCount = 0;
  }
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007574f0 007574f0_FUN_007574f0 ====
#undef t /* auto(v2): compat 僵尸宏撞成员名 */
void FUN_007574f0(int *param_1,Darray_L_struct_WorldObject_G_ *param_2,int param_3);

// decompiled by BatchDecomp @ 007574f0 name=FUN_007574f0 conv=unknown body=559

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_007574f0(int *param_1,Darray_L_struct_WorldObject_G_ *param_2,int param_3)

{
  undefined4 stack0xfffffffc;
  ReferenceController *pRVar1;
  Actor *pAVar2;
  int iVar3;
  Darray_L_struct_WorldObject_G_ *pDVar4;
  ReferenceController *pRVar5;
  bool bVar6;
  int iVar7;
  undefined4 *puVar8;
  WorldObject local_2d8;
  int *local_20;
  undefined8 local_1c;
  Actor *local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_20 = param_1;
  local_c = 0;
  iVar7 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar7) {
    do {
      puVar8 = (undefined4 *)(**(code **)*param_1)(&local_c);
      pRVar1 = (ReferenceController *)puVar8[1];
      pAVar2 = (Actor *)*puVar8;
      pRVar5 = pRVar1;
      if (pRVar1 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar1);
        local_2d8.Object.Pointer = pAVar2;
        local_2d8.Object.Controller = pRVar1;
        util__ReferenceController__AddWeakReference(pRVar1);
        pAVar2 = local_2d8.Object.Pointer;
        pRVar5 = local_2d8.Object.Controller;
      }
      local_2d8.Object.Controller = pRVar5;
      local_2d8.Object.Pointer = pAVar2;
      local_2d8.LPointID = 0;
      ItineraryNode__ItineraryNode(&local_2d8.Node.LastNode);
      ItineraryNode__ItineraryNode(&local_2d8.Node.NextNode);
      local_2d8.Node.t = 0.0;
      if (pRVar1 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(pRVar1);
      }
      iVar7 = *(int *)(param_2 + 8);
      local_10 = iVar7 + 1;
      util__Darray_struct_WorldObject___SetSize(param_2,&local_10);
      bVar6 = util__Darray_struct_WorldObject___CheckSize(param_2,iVar7);
      if (bVar6) {
        WorldObject__operator_((WorldObject *)(*(int *)(param_2 + 8) * 0x2b8 + *(int *)(param_2 + 4) + -0x2b8),
                   &local_2d8);
      }
      NodeMouseOver__dtor(&local_2d8.Node);
      if (local_2d8.Object.Controller != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_2d8.Object.Controller);
      }
      iVar7 = 1;
      local_10 = 5;
      do {
        local_1c = *(double *)(param_3 + 0x80);
        if (((ReferenceController *)puVar8[1] != (ReferenceController *)0x0) &&
           (bVar6 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar8[1]),
           !bVar6)) {
          *puVar8 = 0;
        }
        bVar6 = CelestialObject__DoesLagrangePointExist((CelestialObject *)*puVar8,local_1c,iVar7);
        if (bVar6) {
          pRVar1 = (ReferenceController *)puVar8[1];
          local_14 = (Actor *)*puVar8;
          pAVar2 = local_14;
          pRVar5 = pRVar1;
          if (pRVar1 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(pRVar1);
            local_2d8.Object.Pointer = local_14;
            local_2d8.Object.Controller = pRVar1;
            util__ReferenceController__AddWeakReference(pRVar1);
            pAVar2 = local_2d8.Object.Pointer;
            pRVar5 = local_2d8.Object.Controller;
          }
          local_2d8.Object.Controller = pRVar5;
          local_2d8.Object.Pointer = pAVar2;
          local_2d8.LPointID = iVar7;
          ItineraryNode__ItineraryNode(&local_2d8.Node.LastNode);
          ItineraryNode__ItineraryNode(&local_2d8.Node.NextNode);
          local_2d8.Node.t = 0.0;
          if (pRVar1 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar1);
          }
          local_1c = (double)CONCAT44(param_2,(undefined4)local_1c);
          iVar3 = *(int *)(param_2 + 8);
          local_14 = (Actor *)(iVar3 + 1);
          util__Darray_struct_WorldObject___SetSize(param_2,(int *)&local_14);
          pDVar4 = ((slice_view *)&local_1c)->_4_4_;
          bVar6 = util__Darray_struct_WorldObject___CheckSize(((slice_view *)&local_1c)->_4_4_,iVar3);
          if (bVar6) {
            WorldObject__operator_((WorldObject *)(*(int *)(pDVar4 + 8) * 0x2b8 + *(int *)(pDVar4 + 4) + -0x2b8)
                       ,&local_2d8);
          }
          NodeMouseOver__dtor(&local_2d8.Node);
          if (local_2d8.Object.Controller != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(local_2d8.Object.Controller);
          }
        }
        param_1 = local_20;
        iVar7 = iVar7 + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
      local_c = local_c + 1;
      iVar7 = (**(code **)(*local_20 + 0xc))();
    } while (local_c < iVar7);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000758da0 00758da0_FUN_00758da0 ====
void FUN_00758da0(Darray_L_bool_G_ *param_1,int *param_2,int *param_3,undefined8 *param_4, double *param_5);

// decompiled by BatchDecomp @ 00758da0 name=FUN_00758da0 conv=unknown body=768

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_00758da0(Darray_L_bool_G_ *param_1,int *param_2,int *param_3,undefined8 *param_4,
                 double *param_5)

{
  undefined4 stack0xffffff80;
  undefined4 stack0xfffffffc;
  ReferenceController *this;
  CelestialObject *this_00;
  CelestialObject *this_01;
  double dVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  Vec3_L_double_G_ *pVVar5;
  Vec3_L_double_G_ *pVVar6;
  int iVar7;
  float10 fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool **ppbVar13;
  Vec3_L_double_G_ local_c0;
  Vec3_L_double_G_ local_a8;
  undefined1 local_88[12];
  undefined4 uStack_7c;
  double local_70;
  undefined8 uStack_68;
  undefined1 local_58[16];
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  int *local_18;
  Darray_L_bool_G_ *local_14;
  bool local_d;
  bool *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_14 = param_1;
  local_18 = param_2;
  param_1->_pad_0x0_0 = 0;
  param_1->Data = (bool *)0x0;
  param_1->Size = 0;
  param_1->Capacity = 0;
  uVar3 = (**(code **)(*param_2 + 0xc))();
  param_1->_pad_0x0_0 = (int)((void *)(0x009256ecu));
  param_1->Data = (bool *)0x0;
  param_1->Size = 0;
  param_1->Capacity = uVar3;
  if (((int)uVar3 < 0) || (0x3fffffff < (int)uVar3)) {
    param_1->Capacity = 0;
  }
  else if (0 < (int)uVar3) {
    local_c = (bool *)operator_new__(uVar3);
    if (local_c == (bool *)0x0) {
      local_c = (bool *)0x0;
    }
    else {
      memset(local_c,0,uVar3);
    }
    iVar7 = 0;
    param_1->Data = local_c;
    if (0 < param_1->Capacity) {
      do {
        param_1->Data[iVar7] = false;
        iVar7 = iVar7 + 1;
      } while (iVar7 < param_1->Capacity);
    }
  }
  local_c = (bool *)0x0;
  iVar7 = (**(code **)(*param_2 + 0xc))();
  if ((int)local_c < iVar7) {
    do {
      ppbVar13 = &local_c;
      piVar4 = (int *)(**(code **)*param_2)();
      this = (ReferenceController *)piVar4[1];
      if (((ReferenceController *)param_3[1] == this) && (*param_3 == *piVar4)) {
        local_d = false;
      }
      else {
        if ((this != (ReferenceController *)0x0) &&
           (bVar2 = util__ReferenceController__IsDataStillValid(this), !bVar2)) {
          *piVar4 = 0;
        }
        this_00 = (CelestialObject *)*piVar4;
        if (((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) &&
           (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]),
           !bVar2)) {
          *piVar4 = 0;
        }
        this_01 = (CelestialObject *)*piVar4;
        pVVar5 = CelestialObject__GetPositionAt_km(this_00,&local_a8,
                            (double)CONCAT44(ppbVar13,(int)((ulonglong)param_4[1] >> 0x20)));
        pVVar6 = CelestialObject__GetPositionAt_km(this_01,&local_c0,
                            (double)CONCAT44(ppbVar13,(int)((ulonglong)*param_4 >> 0x20)));
        ((slice_view *)&local_58)->_8_8_ = 0;
        ((slice_view *)&local_58)->_0_8_ = param_5[3] - pVVar5->X;
        local_30 = param_5[4] - pVVar5->Y;
        local_40 = param_5[5] - pVVar5->Z;
        local_70 = *param_5 - pVVar6->X;
        uStack_68 = param_5[1] - pVVar6->Y;
        local_38 = param_5[2] - pVVar6->Z;
        local_28 = uStack_68;
        local_20 = local_70;
        if (((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) &&
           (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]),
           !bVar2)) {
          *piVar4 = 0;
        }
        fVar8 = (float10)(**(code **)(*(int *)*piVar4 + 0x44))();
        dVar1 = (double)((slice_view *)&local_58)->_0_8_ - local_20;
        dVar9 = local_30 - local_28;
        dVar11 = local_40 - local_38;
        local_48 = (double)fVar8;
        dVar12 = dVar1 * dVar1 + dVar9 * dVar9 + dVar11 * dVar11;
        if (NAN(dVar12) == (dVar12 == 0.0)) {
          dVar12 = ((0.0 - local_28) * dVar9 + (0.0 - local_20) * dVar1 + (0.0 - local_38) * dVar11)
                   / dVar12;
          if (dVar12 <= 0.0) {
            dVar12 = 0.0;
          }
          if (/*3ff0000000000000*/1.0 <= dVar12) {
            dVar12 = /*3ff0000000000000*/1.0;
          }
          dVar10 = dVar9 * dVar12 + local_28;
          dVar9 = local_38 + dVar11 * dVar12;
          ((slice_view *)&local_88)->_8_4_ = *(undefined4 *)&dVar10;
          ((slice_view *)&local_88)->_0_8_ = dVar1 * dVar12 + local_20;
          uStack_7c = (int)((ulonglong)dVar10 >> 0x20);
        }
        else {
          ((slice_view *)&local_88)->_8_4_ = (undefined4)uStack_68;
          ((slice_view *)&local_88)->_0_8_ = local_70;
          uStack_7c = ((slice_view *)&uStack_68)->_4_4_;
          dVar9 = local_38;
        }
        local_d = (stack0xffffff80 - 0.0) * (stack0xffffff80 - 0.0) +
                  ((double)((slice_view *)&local_88)->_0_8_ - 0.0) * ((double)((slice_view *)&local_88)->_0_8_ - 0.0) +
                  (dVar9 - 0.0) * (dVar9 - 0.0) <= local_48 * local_48;
        param_1 = local_14;
      }
      util__Darray_bool___Add(param_1,&local_d);
      param_2 = local_18;
      local_c = local_c + 1;
      iVar7 = (**(code **)(*local_18 + 0xc))();
    } while ((int)local_c < iVar7);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000075b7d0 0075b7d0_operator_ ====
// decompiled by BatchDecomp @ 0075b7d0 name=operator= conv=__thiscall body=506

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Darray<struct PendingBattle> & __thiscall util::Darray<struct
   PendingBattle>::operator=(class util::Darray<struct PendingBattle> const &) */

Darray_L_struct_PendingBattle_G_ * __thiscall
util__Darray_struct_PendingBattle___operator_(Darray_L_struct_PendingBattle_G_ *this,Darray_L_struct_PendingBattle_G_ *param_1)

{
  uint *puVar1;
  ReferenceController *pRVar2;
  ReferenceController *pRVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int local_8;
  
  local_8 = (**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,&local_8);
  iVar4 = (**(code **)(*(int *)param_1 + 0xc))();
  if (iVar4 == 0) {
    (**(code **)(*(int *)this + 0x10))();
    return this;
  }
  uVar7 = *(uint *)(this + 8);
  if ((int)uVar7 < 0) {
    local_8 = 0;
    SetSize(this,&local_8);
    uVar7 = *(uint *)(this + 8);
  }
  if (0x3fffffff < (int)uVar7) {
    local_8 = 0x3fffffff;
    SetSize(this,&local_8);
    uVar7 = *(uint *)(this + 8);
  }
  uVar8 = *(uint *)(this + 0xc);
  if ((int)uVar8 < (int)uVar7) {
    if (uVar8 == 0) {
      *(uint *)(this + 0xc) = uVar7;
      uVar8 = uVar7;
    }
    if ((int)uVar8 < (int)uVar7) {
      do {
        uVar8 = uVar8 * 2;
      } while ((int)uVar8 < (int)uVar7);
      *(uint *)(this + 0xc) = uVar8;
    }
    if (0x3fffffff < (int)uVar8) {
      *(undefined4 *)(this + 0xc) = 0x3fffffff;
      uVar8 = 0x3fffffff;
    }
    if (*(PendingBattle **)(this + 4) != (PendingBattle *)0x0) {
      PendingBattle___vector_deleting_destructor_(*(PendingBattle **)(this + 4),3);
      uVar8 = *(uint *)(this + 0xc);
    }
    *(undefined4 *)(this + 4) = 0;
    uVar7 = -(uint)((int)((ulonglong)uVar8 * 0x18 >> 0x20) != 0) | (uint)((ulonglong)uVar8 * 0x18);
    puVar5 = (uint *)operator_new__(-(uint)(0xfffffffb < uVar7) | uVar7 + 4);
    if (puVar5 == (uint *)0x0) {
      puVar5 = (uint *)0x0;
    }
    else {
      *puVar5 = uVar8;
      puVar5 = puVar5 + 1;
      puVar6 = puVar5;
      if (uVar8 != 0) {
        do {
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[2] = 0;
          puVar6[3] = 0;
          puVar6[4] = 0;
          puVar6[5] = 0;
          uVar8 = uVar8 - 1;
          puVar6 = puVar6 + 6;
        } while (uVar8 != 0);
        *(uint **)(this + 4) = puVar5;
        goto LAB_0075b927;
      }
    }
    *(uint **)(this + 4) = puVar5;
  }
  else {
    puVar5 = *(uint **)(this + 4);
  }
LAB_0075b927:
  puVar6 = *(uint **)(param_1 + 4);
  if (puVar6 == puVar6 + *(int *)(param_1 + 8) * 6) {
    return this;
  }
  puVar5 = puVar5 + 1;
  do {
    pRVar2 = (ReferenceController *)*puVar5;
    puVar5[-1] = *puVar6;
    pRVar3 = (ReferenceController *)puVar6[1];
    *puVar5 = (uint)pRVar3;
    if (pRVar3 != (ReferenceController *)0x0) {
      ReferenceController__AddWeakReference(pRVar3);
    }
    if (pRVar2 != (ReferenceController *)0x0) {
      ReferenceController__ReleaseWeakReference(pRVar2);
    }
    pRVar2 = (ReferenceController *)puVar5[2];
    puVar5[1] = puVar6[2];
    pRVar3 = (ReferenceController *)puVar6[3];
    puVar5[2] = (uint)pRVar3;
    if (pRVar3 != (ReferenceController *)0x0) {
      ReferenceController__AddWeakReference(pRVar3);
    }
    if (pRVar2 != (ReferenceController *)0x0) {
      ReferenceController__ReleaseWeakReference(pRVar2);
    }
    puVar1 = puVar6 + 4;
    puVar6 = puVar6 + 6;
    *(undefined8 *)(puVar5 + 3) = *(undefined8 *)puVar1;
    puVar5 = puVar5 + 6;
  } while (puVar6 != (uint *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 0x18));
  return this;
}


//==== 000075cb60 0075cb60_FUN_0075cb60 ====
#undef t /* auto(v2): compat 僵尸宏撞成员名 */
undefined4 * FUN_0075cb60(undefined4 *param_1,undefined4 *param_2);

// decompiled by BatchDecomp @ 0075cb60 name=FUN_0075cb60 conv=unknown body=548

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

undefined4 * FUN_0075cb60(undefined4 *param_1,undefined4 *param_2)

{
  ReferenceController *pRVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined4 local_840;
  ReferenceController *local_83c;
  undefined4 local_838;
  NodeMouseOver local_830;
  undefined1 local_588;
  undefined4 local_580;
  ReferenceController *local_57c;
  undefined4 local_578;
  NodeMouseOver local_570;
  undefined1 local_2c8;
  undefined4 local_2c0;
  ReferenceController *local_2bc;
  undefined4 local_2b8;
  NodeMouseOver local_2b0;
  undefined4 local_8;
  
  local_8 = 0;
  if (((ReferenceController *)param_2[1] != (ReferenceController *)0x0) &&
     (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]), !bVar4
     )) {
    *param_2 = 0;
  }
  bVar4 = CelestialObject__CanSupportOrbits((CelestialObject *)*param_2);
  if (bVar4) {
    local_2c0 = *param_2;
    pRVar1 = (ReferenceController *)param_2[1];
    local_2bc = pRVar1;
    if (pRVar1 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar1);
      util__ReferenceController__AddWeakReference(pRVar1);
    }
    local_2b8 = 0;
    ItineraryNode__ItineraryNode(&local_2b0.LastNode);
    ItineraryNode__ItineraryNode(&local_2b0.NextNode);
    local_2b0.t = 0.0;
    if (pRVar1 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRVar1);
    }
    local_840 = local_2c0;
    local_83c = local_2bc;
    if (local_2bc != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(local_2bc);
    }
    local_838 = local_2b8;
    ItineraryNode__ItineraryNode(&local_830.LastNode,&local_2b0.LastNode);
    ItineraryNode__ItineraryNode(&local_830.NextNode,&local_2b0.NextNode);
    puVar5 = &local_840;
    local_830.t = local_2b0.t;
    bVar3 = true;
    bVar2 = true;
    bVar4 = false;
    local_588 = 1;
  }
  else {
    local_580 = 0;
    local_57c = (ReferenceController *)0x0;
    local_578 = 0;
    ItineraryNode__ItineraryNode(&local_570.LastNode);
    ItineraryNode__ItineraryNode(&local_570.NextNode);
    local_2c8 = 0;
    local_570.t = 0.0;
    puVar5 = &local_580;
    bVar3 = false;
    bVar2 = false;
    bVar4 = true;
  }
  pRVar1 = (ReferenceController *)puVar5[1];
  *param_1 = *puVar5;
  param_1[1] = pRVar1;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar1);
  }
  param_1[2] = puVar5[2];
  ItineraryNode__ItineraryNode((ItineraryNode *)(param_1 + 4),(ItineraryNode *)(puVar5 + 4));
  ItineraryNode__ItineraryNode((ItineraryNode *)(param_1 + 0x58),(ItineraryNode *)(puVar5 + 0x58));
  *(undefined8 *)(param_1 + 0xac) = *(undefined8 *)(puVar5 + 0xac);
  *(undefined1 *)(param_1 + 0xae) = *(undefined1 *)(puVar5 + 0xae);
  if ((bVar4) &&
     (NodeMouseOver__dtor(&local_570), local_57c != (ReferenceController *)0x0)) {
    util__ReferenceController__ReleaseWeakReference(local_57c);
  }
  if ((bVar2) &&
     (NodeMouseOver__dtor(&local_830), local_83c != (ReferenceController *)0x0)) {
    util__ReferenceController__ReleaseWeakReference(local_83c);
  }
  if ((bVar3) &&
     (NodeMouseOver__dtor(&local_2b0), local_2bc != (ReferenceController *)0x0)) {
    util__ReferenceController__ReleaseWeakReference(local_2bc);
  }
  return param_1;
}


//==== 000075e3b0 0075e3b0_operator__ ====
// decompiled by BatchDecomp @ 0075e3b0 name=operator+= conv=__thiscall body=501

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Darray<struct WorldObject> & __thiscall util::Darray<struct
   WorldObject>::operator+=(class util::Darray<struct WorldObject> const &) */

Darray_L_struct_WorldObject_G_ * __thiscall
FUN_0075e3b0(Darray_L_struct_WorldObject_G_ *this,Darray_L_struct_WorldObject_G_ *param_1)

{
  undefined8 uVar1;
  ReferenceController *pRVar2;
  ReferenceController *this_00;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  Darray_L_struct_WorldObject_G_ *pDVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ReferenceController *local_8;
  
  pDVar6 = param_1;
  if (*(int *)(this + 8) == 0) {
    local_8 = (ReferenceController *)(**(code **)(*(int *)param_1 + 0xc))();
    SetSize(this,(int *)&local_8);
    iVar3 = (**(code **)(*(int *)pDVar6 + 0xc))();
    if (iVar3 == 0) {
      (**(code **)(*(int *)this + 0x10))();
      return this;
    }
    CheckSizeDestructive(this);
    puVar8 = *(undefined4 **)(pDVar6 + 4);
    puVar7 = *(undefined4 **)(this + 4);
    if (puVar8 != puVar8 + *(int *)(pDVar6 + 8) * 0xae) {
      puVar5 = (undefined8 *)(puVar8 + 0xac);
      do {
        local_8 = (ReferenceController *)puVar7[1];
        *puVar7 = *puVar8;
        pRVar2 = *(ReferenceController **)((int)puVar5 + -0x2ac);
        puVar7[1] = pRVar2;
        if (pRVar2 != (ReferenceController *)0x0) {
          ReferenceController__AddWeakReference(pRVar2);
        }
        if (local_8 != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(local_8);
        }
        puVar7[2] = *(undefined4 *)(puVar5 + -0x55);
        ItineraryNode__operator_((ItineraryNode *)(puVar7 + 4),(ItineraryNode *)(puVar5 + -0x54));
        ItineraryNode__operator_((ItineraryNode *)(puVar7 + 0x58),(ItineraryNode *)(puVar5 + -0x2a))
        ;
        puVar8 = puVar8 + 0xae;
        uVar1 = *puVar5;
        puVar5 = puVar5 + 0x57;
        *(undefined8 *)(puVar7 + 0xac) = uVar1;
        puVar7 = puVar7 + 0xae;
      } while (puVar8 != (undefined4 *)(*(int *)(param_1 + 8) * 0x2b8 + *(int *)(param_1 + 4)));
      return this;
    }
  }
  else {
    iVar3 = (**(code **)(*(int *)param_1 + 0xc))();
    if (iVar3 != 0) {
      iVar3 = *(int *)(this + 8);
      iVar4 = (**(code **)(*(int *)pDVar6 + 0xc))();
      param_1 = (Darray_L_struct_WorldObject_G_ *)(iVar4 + *(int *)(this + 8));
      SetSize(this,(int *)&param_1);
      CheckSize(this,iVar3);
      param_1 = *(Darray_L_struct_WorldObject_G_ **)(pDVar6 + 4);
      puVar8 = (undefined4 *)(iVar3 * 0x2b8 + *(int *)(this + 4));
      if (puVar8 != (undefined4 *)(*(int *)(this + 8) * 0x2b8 + *(int *)(this + 4))) {
        pDVar6 = param_1 + 0x2b0;
        do {
          pRVar2 = (ReferenceController *)puVar8[1];
          *puVar8 = *(undefined4 *)param_1;
          this_00 = *(ReferenceController **)(pDVar6 + -0x2ac);
          puVar8[1] = this_00;
          if (this_00 != (ReferenceController *)0x0) {
            ReferenceController__AddWeakReference(this_00);
          }
          if (pRVar2 != (ReferenceController *)0x0) {
            ReferenceController__ReleaseWeakReference(pRVar2);
          }
          puVar8[2] = *(undefined4 *)(pDVar6 + -0x2a8);
          ItineraryNode__operator_((ItineraryNode *)(puVar8 + 4),(ItineraryNode *)(pDVar6 + -0x2a0))
          ;
          ItineraryNode__operator_((ItineraryNode *)(puVar8 + 0x58),(ItineraryNode *)(pDVar6 + -0x150));
          uVar1 = *(undefined8 *)pDVar6;
          pDVar6 = pDVar6 + 0x2b8;
          *(undefined8 *)(puVar8 + 0xac) = uVar1;
          param_1 = param_1 + 0x2b8;
          puVar8 = puVar8 + 0xae;
        } while (puVar8 != (undefined4 *)(*(int *)(this + 8) * 0x2b8 + *(int *)(this + 4)));
      }
    }
  }
  return this;
}


//==== 000075f550 0075f550_CheckSize ====
// decompiled by BatchDecomp @ 0075f550 name=CheckSize conv=__thiscall body=464

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall util::Darray<struct PendingBattle>::CheckSize(int) */

bool __thiscall
util__Darray_struct_PendingBattle___CheckSize(Darray_L_struct_PendingBattle_G_ *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  PendingBattle *pPVar3;
  bool bVar4;
  uint *puVar5;
  uint uVar6;
  PendingBattle *pPVar7;
  uint uVar8;
  PendingBattle *pPVar9;
  int iVar10;
  PendingBattle *this_00;
  ReferenceController **ppRVar11;
  bool bVar12;
  PendingBattle *local_c;
  bool local_5;
  
  local_5 = true;
  uVar6 = *(uint *)(this + 8);
  bVar12 = -1 < (int)uVar6;
  bVar4 = !bVar12;
  if (bVar4) {
    local_c = (PendingBattle *)0x0;
    SetSize(this,(int *)&local_c);
    uVar6 = *(uint *)(this + 8);
  }
  local_5 = !bVar4;
  bVar4 = (int)uVar6 < 0x40000000;
  if (!bVar4) {
    local_c = (PendingBattle *)0x3fffffff;
    SetSize(this,(int *)&local_c);
    uVar6 = *(uint *)(this + 8);
    local_5 = false;
  }
  uVar8 = *(uint *)(this + 0xc);
  if ((int)uVar6 <= (int)uVar8) {
    return bVar4 && bVar12;
  }
  if (uVar8 == 0) {
    *(uint *)(this + 0xc) = uVar6;
    uVar8 = uVar6;
  }
  if ((int)uVar8 < (int)uVar6) {
    do {
      uVar8 = uVar8 * 2;
    } while ((int)uVar8 < (int)uVar6);
    *(uint *)(this + 0xc) = uVar8;
  }
  if (0x3fffffff < (int)uVar8) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar8 = 0x3fffffff;
  }
  uVar6 = -(uint)((int)((ulonglong)uVar8 * 0x18 >> 0x20) != 0) | (uint)((ulonglong)uVar8 * 0x18);
  puVar5 = (uint *)operator_new__(-(uint)(0xfffffffb < uVar6) | uVar6 + 4);
  if (puVar5 == (uint *)0x0) {
    local_c = (PendingBattle *)0x0;
  }
  else {
    *puVar5 = uVar8;
    local_c = (PendingBattle *)(puVar5 + 1);
    pPVar7 = local_c;
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      (pPVar7->Attacker).Pointer = (Fleet *)0x0;
      (pPVar7->Attacker).Controller = (ReferenceController *)0x0;
      (pPVar7->Defender).Pointer = (Fleet *)0x0;
      (pPVar7->Defender).Controller = (ReferenceController *)0x0;
      pPVar7->TimeSinceJ2000_s = 0.0;
      pPVar7 = pPVar7 + 1;
    }
  }
  pPVar7 = *(PendingBattle **)(this + 4);
  if (pPVar7 != (PendingBattle *)0x0) {
    pPVar3 = local_c + *(int *)(this + 8);
    pPVar9 = pPVar7;
    this_00 = local_c;
    if (pPVar7 != pPVar7 + param_1) {
      do {
        if (this_00 == pPVar3) break;
        PendingBattle__operator_(this_00,pPVar9);
        pPVar9 = pPVar9 + 1;
        pPVar7 = *(PendingBattle **)(this + 4);
        this_00 = this_00 + 1;
      } while (pPVar9 != pPVar7 + param_1);
    }
    if (pPVar7 != (PendingBattle *)0x0) {
      iVar10 = *(int *)((int)&pPVar7[-1].TimeSinceJ2000_s + 4);
      piVar1 = (int *)((int)&pPVar7[-1].TimeSinceJ2000_s + 4);
      if (iVar10 == 0) {
        iVar10 = 0;
      }
      else {
        ppRVar11 = &pPVar7[iVar10].Attacker.Controller;
        do {
          puVar2 = ppRVar11 + -4;
          ppRVar11 = ppRVar11 + -6;
          iVar10 = iVar10 + -1;
          if ((ReferenceController *)*puVar2 != (ReferenceController *)0x0) {
            ReferenceController__ReleaseWeakReference((ReferenceController *)*puVar2);
          }
          if (*ppRVar11 != (ReferenceController *)0x0) {
            ReferenceController__ReleaseWeakReference(*ppRVar11);
          }
        } while (iVar10 != 0);
        iVar10 = *piVar1;
      }
      operator_delete__(piVar1,iVar10 * 0x18 + 4);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(PendingBattle **)(this + 4) = local_c;
  return local_5;
}


//==== 0000775210 00775210_GetCustomLabel ====
// decompiled by BatchDecomp @ 00775210 name=GetCustomLabel conv=__thiscall body=952

/* WARNING: Removing unreachable block (ram,0x00775483) */
/* WARNING: Removing unreachable block (ram,0x00775490) */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: class util::Str<char> __thiscall ActorDropdown__GetCustomLabel(void)const  */

Str_L_char_G_ * __thiscall
ActorDropdown__GetCustomLabel(ActorDropdown *this,Str_L_char_G_ *__return_storage_ptr__)

{
  MarkedAsSelected MVar1;
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
  LocStr *pLVar15;
  Str_L_char_G_ *pSVar16;
  Str_L_char_G_ *this_00;
  bool bVar17;
  void *local_e0[3];
  void *local_d4;
  void *local_c8[3];
  void *local_bc;
  void *local_b0[3];
  void *local_a4;
  Str_L_char_G_ local_98;
  Str_L_char_G_ local_8c;
  Str_L_char_G_ local_80;
  Str_L_char_G_ local_74;
  Str_L_char_G_ local_68;
  Str_L_char_G_ local_5c;
  undefined4 local_50;
  Str_L_char_G_ local_4c;
  Str_L_char_G_ local_40;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  MVar1 = this->Marking;
  local_50 = 0;
  if (MVar1 == Selection) {
    util__Str_char___Str_char__o5(&local_98,"Select");
    local_28.Data = (char *)0x0;
    local_28.Capacity = 0;
    local_28.Length = 0;
    this_00 = &local_8c;
    pLVar15 = (LocStr *)util__LocStr__LocStr((LocStr *)local_e0,&local_98,&local_28);
    pSVar16 = util__LocStr__operator__o3(pLVar15);
    bVar14 = false;
    bVar13 = false;
    bVar12 = false;
    bVar11 = false;
    bVar17 = false;
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
    if (MVar1 == CameraCenter) {
      util__Str_char___Str_char__o5(&local_4c,"CenterCamera");
      local_1c.Data = (char *)0x0;
      local_1c.Capacity = 0;
      local_1c.Length = 0;
      pLVar15 = (LocStr *)util__LocStr__LocStr((LocStr *)local_c8,&local_4c,&local_1c);
      pSVar16 = util__LocStr__operator__o3(pLVar15);
      pSVar16 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_80,pSVar16);
      bVar14 = false;
      bVar13 = false;
      bVar12 = false;
      bVar11 = false;
      bVar17 = false;
      bVar10 = false;
      bVar5 = true;
      bVar4 = true;
      bVar3 = true;
    }
    else {
      bVar17 = MVar1 != FrameOfReference;
      if (bVar17) {
        local_34.Data = (char *)0x0;
        pSVar16 = &local_34;
        local_34.Capacity = 0;
        local_34.Length = 0;
      }
      else {
        util__Str_char___Str_char__o5(&local_40,"SetFrameOfReferenceButton");
        local_10.Data = (char *)0x0;
        local_10.Capacity = 0;
        local_10.Length = 0;
        pLVar15 = (LocStr *)util__LocStr__LocStr((LocStr *)local_b0,&local_40,&local_10);
        pSVar16 = util__LocStr__operator__o3(pLVar15);
        pSVar16 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_74,pSVar16);
      }
      bVar14 = !bVar17;
      bVar13 = !bVar17;
      bVar12 = !bVar17;
      bVar11 = !bVar17;
      bVar10 = true;
      bVar5 = false;
      bVar4 = false;
      bVar3 = false;
      pSVar16 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_68,pSVar16);
    }
    bVar8 = false;
    bVar7 = false;
    bVar6 = false;
    bVar2 = false;
    bVar9 = true;
    this_00 = &local_5c;
  }
  pSVar16 = (Str_L_char_G_ *)util__Str_char___Str_char(this_00,pSVar16);
  util__Str_char___Str_char(__return_storage_ptr__,pSVar16);
  if ((bVar9) && (local_5c.Data != (char *)0x0)) {
    operator_delete__(local_5c.Data);
    local_5c.Data = (char *)0x0;
  }
  if ((bVar10) && (local_68.Data != (char *)0x0)) {
    operator_delete__(local_68.Data);
    local_68.Data = (char *)0x0;
  }
  if ((bVar17) && (local_34.Data != (char *)0x0)) {
    operator_delete__(local_34.Data);
  }
  if ((bVar11) && (local_74.Data != (char *)0x0)) {
    operator_delete__(local_74.Data);
    local_74.Data = (char *)0x0;
  }
  if (bVar12) {
    if (local_a4 != (void *)0x0) {
      operator_delete__(local_a4);
      local_a4 = (void *)0x0;
    }
    if (local_b0[0] != (void *)0x0) {
      operator_delete__(local_b0[0]);
      local_b0[0] = (void *)0x0;
    }
  }
  if ((bVar13) && (local_10.Data != (char *)0x0)) {
    operator_delete__(local_10.Data);
    local_10.Data = (char *)0x0;
  }
  if ((bVar14) && (local_40.Data != (char *)0x0)) {
    operator_delete__(local_40.Data);
    local_40.Data = (char *)0x0;
  }
  if (bVar3) {
    if (local_bc != (void *)0x0) {
      operator_delete__(local_bc);
      local_bc = (void *)0x0;
    }
    if (local_c8[0] != (void *)0x0) {
      operator_delete__(local_c8[0]);
      local_c8[0] = (void *)0x0;
    }
  }
  if ((bVar4) && (local_1c.Data != (char *)0x0)) {
    operator_delete__(local_1c.Data);
    local_1c.Data = (char *)0x0;
  }
  if ((bVar5) && (local_4c.Data != (char *)0x0)) {
    operator_delete__(local_4c.Data);
    local_4c.Data = (char *)0x0;
  }
  if ((bVar6) && (local_8c.Data != (char *)0x0)) {
    operator_delete__(local_8c.Data);
    local_8c.Data = (char *)0x0;
  }
  if (bVar7) {
    if (local_d4 != (void *)0x0) {
      operator_delete__(local_d4);
      local_d4 = (void *)0x0;
    }
    if (local_e0[0] != (void *)0x0) {
      operator_delete__(local_e0[0]);
      local_e0[0] = (void *)0x0;
    }
  }
  if ((bVar8) && (local_28.Data != (char *)0x0)) {
    operator_delete__(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if ((local_98.Data != (char *)0x0) && (bVar2)) {
    operator_delete__(local_98.Data);
  }
  return __return_storage_ptr__;
}


//==== 0000777cf0 00777cf0_GetTag ====
// decompiled by BatchDecomp @ 00777cf0 name=GetTag conv=__thiscall body=703

/* WARNING: Removing unreachable block (ram,0x00777eda) */
/* WARNING: Removing unreachable block (ram,0x00777ee7) */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Str<char> __thiscall WorldObject__GetTag(void)const  */

Str_L_char_G_ * __thiscall WorldObject__GetTag(WorldObject *this,Str_L_char_G_ *__return_storage_ptr__)

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
  Str_L_char_G_ *pSVar11;
  int *piVar12;
  Str_L_char_G_ *pSVar13;
  undefined4 *puVar14;
  Actor *pAVar15;
  void *local_74[3];
  void *local_68[3];
  Str_L_char_G_ local_5c;
  Str_L_char_G_ local_50;
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  ReferenceController *local_10;
  ReferenceController *local_8;
  
  local_8 = (ReferenceController *)0x0;
  bVar10 = IsFleet(this);
  if (bVar10) {
    bVar10 = IsFleet(this);
    if (!bVar10) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\ui\\dropdownui.cpp",0x26,
                      "IsFleet()",(char *)0x0);
      DebugBreak();
    }
    pAVar15 = (this->Object).Pointer;
    pSVar13 = (Str_L_char_G_ *)(this->Object).Controller;
    if (pSVar13 != (Str_L_char_G_ *)0x0) {
      util__ReferenceController__AddWeakReference((ReferenceController *)pSVar13);
      bVar10 = util__ReferenceController__IsDataStillValid((ReferenceController *)pSVar13);
      if (!bVar10) {
        pAVar15 = (Actor *)0x0;
      }
    }
    pSVar11 = (Str_L_char_G_ *)(**(code **)(pAVar15[1]._pad_0x0_0 + 0xc))(local_74);
    bVar9 = false;
    bVar8 = false;
    bVar7 = false;
    bVar6 = true;
    bVar5 = false;
    bVar4 = false;
    bVar3 = false;
    bVar2 = false;
    bVar1 = false;
    bVar10 = true;
  }
  else {
    bVar10 = IsCelestialObject(this);
    if (bVar10) {
      piVar12 = (int *)AsCelestialObject(this);
      if (((ReferenceController *)piVar12[1] != (ReferenceController *)0x0) &&
         (bVar10 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar12[1]),
         !bVar10)) {
        *piVar12 = 0;
      }
      pSVar13 = (Str_L_char_G_ *)(**(code **)(*(int *)(*piVar12 + 8) + 0xc))(local_68);
      bVar9 = false;
      bVar8 = false;
      bVar5 = true;
      bVar4 = true;
      bVar3 = false;
      bVar2 = false;
      bVar1 = false;
    }
    else {
      bVar10 = IsLPoint(this);
      if (bVar10) {
        puVar14 = (undefined4 *)AsCelestialObject(this);
        if (((ReferenceController *)puVar14[1] != (ReferenceController *)0x0) &&
           (bVar10 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar14[1]),
           !bVar10)) {
          *puVar14 = 0;
        }
        pSVar13 = CelestialObject__GetLPointTagName((CelestialObject *)*puVar14,&local_5c,this->LPointID);
        bVar9 = false;
        bVar3 = true;
        bVar2 = true;
        bVar1 = false;
      }
      else {
        bVar10 = ItineraryNode__IsValid(&(this->Node).LastNode);
        if ((bVar10) && (bVar10 = ItineraryNode__IsValid(&(this->Node).NextNode), bVar10)) {
          pSVar13 = (Str_L_char_G_ *)util__Str_char___Str_char__o5(&local_50,"Trajectory");
          bVar1 = true;
        }
        else {
          local_20.Data = (char *)0x0;
          pSVar13 = &local_20;
          local_20.Capacity = 0;
          bVar1 = false;
          local_20.Length = 0;
        }
        bVar9 = true;
        bVar3 = false;
        bVar2 = false;
        pSVar13 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_44,pSVar13);
      }
      pSVar13 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_38,pSVar13);
      bVar8 = true;
      bVar5 = false;
      bVar4 = false;
    }
    bVar7 = true;
    bVar6 = false;
    bVar10 = false;
    pSVar11 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_2c,pSVar13);
    pSVar13 = __return_storage_ptr__;
  }
  util__Str_char___Str_char(__return_storage_ptr__,pSVar11);
  if ((bVar7) && (local_2c.Data != (char *)0x0)) {
    operator_delete__(local_2c.Data);
    local_2c.Data = (char *)0x0;
  }
  if ((bVar8) && (local_38.Data != (char *)0x0)) {
    operator_delete__(local_38.Data);
    local_38.Data = (char *)0x0;
  }
  if ((bVar9) && (local_44.Data != (char *)0x0)) {
    operator_delete__(local_44.Data);
    local_44.Data = (char *)0x0;
  }
  if ((bVar1) && (local_50.Data != (char *)0x0)) {
    operator_delete__(local_50.Data);
    local_50.Data = (char *)0x0;
  }
  if ((bVar2) && (local_5c.Data != (char *)0x0)) {
    operator_delete__(local_5c.Data);
    local_5c.Data = (char *)0x0;
  }
  if ((bVar3) && (local_8 != (ReferenceController *)0x0)) {
    util__ReferenceController__ReleaseWeakReference(local_8);
  }
  if ((bVar4) && (local_68[0] != (void *)0x0)) {
    operator_delete__(local_68[0]);
    local_68[0] = (void *)0x0;
  }
  if ((bVar5) && (local_10 != (ReferenceController *)0x0)) {
    util__ReferenceController__ReleaseWeakReference(local_10);
  }
  if ((bVar6) && (local_74[0] != (void *)0x0)) {
    operator_delete__(local_74[0]);
    local_74[0] = (void *)0x0;
  }
  if ((pSVar13 != (Str_L_char_G_ *)0x0) && (bVar10)) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)pSVar13);
  }
  return __return_storage_ptr__;
}


//==== 0000779cb0 00779cb0_FUN_00779cb0 ====
void FUN_00779cb0(int *param_1,int *param_2,ItineraryNode *param_3,int *param_4);

// decompiled by BatchDecomp @ 00779cb0 name=FUN_00779cb0 conv=unknown body=441

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_00779cb0(int *param_1,int *param_2,ItineraryNode *param_3,int *param_4)

{
  undefined4 stack0xfffffffc;
  bool bVar1;
  char cVar2;
  int iVar3;
  ItineraryNode *pIVar4;
  Fleet *pFVar5;
  ReferenceController *pRVar6;
  ItineraryNode local_174;
  Fleet *local_24;
  ReferenceController *local_20;
  undefined1 local_1c;
  int local_14;
  char local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar3 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar3) {
    do {
      pIVar4 = (ItineraryNode *)(**(code **)*param_1)(&local_c);
      pRVar6 = pIVar4[1].Parent.Controller;
      if (pRVar6 != (ReferenceController *)0x0) {
        bVar1 = util__ReferenceController__IsDataStillValid(pRVar6);
        if (!bVar1) {
          pIVar4[1].Parent.Pointer = (Fleet *)0x0;
        }
      }
      cVar2 = (**(code **)((pIVar4[1].Parent.Pointer)->_pad_0x0_0 + 8))();
      if (cVar2 == '\0') {
        local_14 = 0;
        local_10 = '\0';
      }
      else {
        pFVar5 = pIVar4[1].Parent.Pointer;
        pRVar6 = pIVar4[1].Parent.Controller;
        if (pRVar6 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar6);
        }
        iVar3 = *param_2;
        if (*(ReferenceController **)(iVar3 + 0x200) != (ReferenceController *)0x0) {
          bVar1 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar3 + 0x200));
          if (!bVar1) {
            *(undefined4 *)(iVar3 + 0x1fc) = 0;
          }
        }
        UILayout__FindChildIndex(*(UILayout **)(iVar3 + 0x1fc),&local_14,pFVar5,pRVar6);
        if ((local_10 != '\0') &&
           ((*(char *)&param_3[1].LastState.Position.X == '\0' || (local_14 < *param_4)))) {
          ItineraryNode__ItineraryNode(&local_174,pIVar4);
          local_20 = pIVar4[1].Parent.Controller;
          local_24 = pIVar4[1].Parent.Pointer;
          if (local_20 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(local_20);
          }
          local_1c = 1;
          ItineraryNode__operator_(param_3,&local_174);
          pRVar6 = param_3[1].Parent.Controller;
          param_3[1].Parent.Pointer = local_24;
          param_3[1].Parent.Controller = local_20;
          if (local_20 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(local_20);
          }
          if (pRVar6 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar6);
          }
          *(undefined1 *)&param_3[1].LastState.Position.X = local_1c;
          util__tuple2_struct_ItineraryNode_class_util__WeakPtr_struct_UIWidget______tuple2_struct_ItineraryNode_class_util__WeakPtr_struct_UIWidget((tuple2_L_struct_ItineraryNode_Cclass_util__WeakPtr_L_struct_UIWidget_G___G_ *)
                     &local_174);
          if (local_10 == '\0') {
            util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13
                            ,"IsValid()",(char *)0x0);
            DebugBreak();
          }
          *param_4 = local_14;
        }
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*param_1 + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
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
/* private: struct util::Color __thiscall HUDItineraryInfoPanel__GetMissionInfoColor(void)const  */

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
/* public: class util::Str<char> __thiscall BurnInfoCustomWidget__GetTimeLabel(void)const  */

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


//==== 000078d4f0 0078d4f0_FUN_0078d4f0 ====
void __thiscall FUN_0078d4f0(int *param_1,int *param_2,int param_3);

// decompiled by BatchDecomp @ 0078d4f0 name=FUN_0078d4f0 conv=unknown body=795

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FUN_0078d4f0(int *param_1,int *param_2,int param_3)

{
  undefined4 stack0xfffffd24;
  undefined4 stack0xfffffe6c;
  undefined4 stack0xfffffffc;
  int iVar1;
  int iVar2;
  ItineraryMarker *pIVar3;
  ReferenceController *pRVar4;
  bool bVar5;
  bool bVar6;
  ReferenceControllerRegistry *pRVar7;
  ReferenceController *pRVar8;
  WeakPtr_L_struct_MinimapRangeWidget_G_ *pWVar9;
  int *piVar10;
  ReferenceController *this;
  int *piVar11;
  void *pvVar12;
  float fStack_19c;
  void *pvVar13;
  int *piVar14;
  ItineraryNode local_178;
  int local_28;
  int *local_24;
  ItineraryMarker *local_20;
  ReferenceController *local_1c;
  char local_15;
  int local_14;
  undefined1 local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar6 = false;
  local_c = param_3;
  local_1c = (ReferenceController *)*param_1;
  local_28 = 0;
  piVar11 = (int *)local_1c[99].StrongReferenceCount;
  local_20 = (ItineraryMarker *)param_2;
  local_24 = param_1;
  if (piVar11 != piVar11 + local_1c[99].WeakReferenceCount * 2) {
    do {
      if (((ReferenceController *)piVar11[1] != (ReferenceController *)0x0) &&
         (bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar11[1]),
         !bVar5)) {
        *piVar11 = 0;
      }
      if (*(int *)(*piVar11 + 0x2f0) == local_c) {
        bVar6 = true;
        if (((ReferenceController *)piVar11[1] != (ReferenceController *)0x0) &&
           (bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar11[1]),
           !bVar5)) {
          *piVar11 = 0;
        }
        ItineraryNode__ItineraryNode(&local_178,(ItineraryNode *)(*piVar11 + 0x1a0));
        if (((*(ReferenceController **)((int)local_20 + 4) != local_178.Parent.Controller) ||
            (*(Fleet **)local_20 != local_178.Parent.Pointer)) ||
           ((NAN(local_178.TimeSinceJ2000_s) || NAN(*(double *)((int)local_20 + 0x70))) ==
            (local_178.TimeSinceJ2000_s == *(double *)((int)local_20 + 0x70)))) goto LAB_0078d5c6;
        local_15 = '\x01';
      }
      else {
LAB_0078d5c6:
        local_15 = '\0';
      }
      pRVar8 = local_178.Parent.Controller;
      if (bVar6) {
        bVar6 = false;
        if (local_178.CachedNearestOrbiter.Controller != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(local_178.CachedNearestOrbiter.Controller)
          ;
        }
        if (local_178.CachedNearestFleet.Controller != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(local_178.CachedNearestFleet.Controller);
        }
        if (local_178.CachedNearestBody.Controller != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(local_178.CachedNearestBody.Controller);
        }
        if (local_178.CachedGravityBody.Controller != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(local_178.CachedGravityBody.Controller);
        }
        if (pRVar8 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar8);
        }
      }
      piVar10 = local_24;
      if (local_15 != '\0') {
        local_14 = local_28;
        local_10 = 1;
        pWVar9 = (WeakPtr_L_struct_MinimapRangeWidget_G_ *)
                 (*(code *)**(undefined4 **)(*local_24 + 0x4a0))();
        util__Darray_class_util__WeakPtr_struct_MinimapRangeWidget_____Remove((Darray_L_class_util__WeakPtr_L_struct_MinimapRangeWidget_G___G_ *)piVar10[1],pWVar9);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      piVar11 = piVar11 + 2;
      local_28 = local_28 + 1;
    } while (piVar11 !=
             (int *)(local_1c[99].StrongReferenceCount + local_1c[99].WeakReferenceCount * 8));
  }
  local_14 = 0;
  local_10 = 0;
  local_20 = (ItineraryMarker *)operator_new(0x308);
  if (local_20 == (ItineraryMarker *)0x0) {
    piVar10 = (int *)0x0;
    piVar11 = local_24;
  }
  else {
    local_1c = (ReferenceController *)&stack0xfffffe6c;
    pvVar12 = (void *)*local_24;
    fStack_19c = 1.1097182e-38;
    pvVar13 = pvVar12;
    pRVar7 = util__ReferenceControllerRegistry__Get();
    fStack_19c = 1.1097192e-38;
    pRVar8 = util__ReferenceControllerRegistry__GetController(pRVar7,pvVar13);
    if ((pRVar8 == (ReferenceController *)0x0) || (pvVar12 == (void *)0x0)) {
      bVar6 = false;
      pvVar12 = (void *)0x0;
      pRVar8 = (ReferenceController *)0x0;
      this = local_1c;
    }
    else {
      bVar6 = true;
      util__ReferenceController__AddWeakReference(pRVar8);
      this = pRVar8;
    }
    pRVar4 = local_1c;
    local_1c->StrongReferenceCount = (int)pvVar12;
    pRVar4->WeakReferenceCount = (int)pRVar8;
    if (pRVar8 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar8);
    }
    if ((this != (ReferenceController *)0x0) && (bVar6)) {
      util__ReferenceController__ReleaseWeakReference(this);
    }
    piVar11 = local_24;
    UIWidget__Attr((UIWidget *)*local_24,(UIAttributes *)&stack0xfffffd24);
    piVar10 = (int *)ItineraryMarker__ItineraryMarker(local_20);
    if (piVar10 != (int *)0x0) goto LAB_0078d73e;
  }
  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl",
                  0xd4,"NewPointer",(char *)0x0);
  DebugBreak();
LAB_0078d73e:
  piVar14 = piVar10;
  pRVar7 = util__ReferenceControllerRegistry__Get();
  pRVar8 = util__ReferenceControllerRegistry__Register(pRVar7,piVar14);
  if (pRVar8 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(pRVar8);
  }
  local_20 = (ItineraryMarker *)piVar11[2];
  iVar1 = *(int *)((int)local_20 + 8);
  local_1c = (ReferenceController *)(iVar1 + 1);
  util__Darray_class_util__SharedPtr_struct_UIWidget_____SetSize((Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *)local_20,(int *)&local_1c);
  pIVar3 = local_20;
  bVar6 = util__Darray_class_util__SharedPtr_struct_UIWidget_____CheckSize((Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *)local_20,iVar1);
  if (bVar6) {
    iVar1 = *(int *)((int)pIVar3 + 8);
    iVar2 = *(int *)((int)pIVar3 + 4);
    local_1c = *(ReferenceController **)(iVar2 + -4 + iVar1 * 8);
    piVar11 = *(int **)(iVar2 + -8 + iVar1 * 8);
    *(int **)(iVar2 + -8 + iVar1 * 8) = piVar10;
    *(ReferenceController **)(iVar2 + -4 + iVar1 * 8) = pRVar8;
    if (pRVar8 != (ReferenceController *)0x0) {
      util__ReferenceController__AddStrongReference(pRVar8);
    }
    if ((local_1c != (ReferenceController *)0x0) &&
       (bVar6 = util__ReferenceController__ReleaseStrongReference(local_1c), bVar6)) {
      if (piVar11 != (int *)0x0) {
        (**(code **)(*piVar11 + 4))();
      }
      pRVar7 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar7,piVar11);
    }
  }
  if ((pRVar8 != (ReferenceController *)0x0) &&
     (bVar6 = util__ReferenceController__ReleaseStrongReference(pRVar8), bVar6)) {
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 4))();
    }
    pRVar7 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar7,piVar10);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000078eb10 0078eb10_FUN_0078eb10 ====
void __thiscall FUN_0078eb10(int *param_1,undefined8 param_2);

// decompiled by BatchDecomp @ 0078eb10 name=FUN_0078eb10 conv=unknown body=486

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FUN_0078eb10(int *param_1,undefined8 param_2)

{
  undefined4 stack0xffffffa8;
  undefined4 stack0xfffffffc;
  undefined4 *puVar1;
  int iVar2;
  double *pdVar3;
  Darray_L_struct_ItineraryNodeUI__PathNode_G_ *this;
  undefined4 uVar4;
  int iVar5;
  Vec3_L_double_G_ VVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  Itinerary *this_00;
  undefined4 unaff_EDI;
  double dVar12;
  undefined4 uStack_9c;
  undefined4 uStack_94;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  ReferenceController *pRStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  double local_28;
  Vec3_L_double_G_ local_20;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_60 = param_2;
  iVar2 = *param_1;
  if ((*(ReferenceController **)(iVar2 + 0x49c) != (ReferenceController *)0x0) &&
     (bVar11 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar2 + 0x49c))
     , !bVar11)) {
    *(undefined4 *)(iVar2 + 0x498) = 0;
  }
  this_00 = (Itinerary *)Fleet__GetMissionItinerary(*(Fleet **)(iVar2 + 0x498));
  if (*(char *)&this_00[2].FinalOrbit.Data.Elements.SemiMajorAxis_km == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x12,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  Itinerary__GetInterpolatedNodeActualStateAndTime(this_00,(ItineraryNode *)&stack0xffffffa8,(ItineraryNode *)param_1[1],
             (double)CONCAT44((int)local_60,param_1[2]));
  ((slice_view *)&VVar6.X)->_4_4_ = uStack_50;
  ((slice_view *)&VVar6.X)->_0_4_ = pRStack_54;
  ((slice_view *)&VVar6.Y)->_0_4_ = uStack_4c;
  ((slice_view *)&VVar6.Y)->_4_4_ = *(undefined4 *)&local_48;
  ((slice_view *)&VVar6.Z)->_0_4_ = (int)((ulonglong)local_48 >> 0x20);
  ((slice_view *)&VVar6.Z)->_4_4_ = *(undefined4 *)&local_28;
  StrategicManager__GetReferenceShiftedPosition_km(*(StrategicManager **)(*param_1 + 8),&local_20,VVar6,
             (double)CONCAT44(unaff_EDI,(int)((ulonglong)local_28 >> 0x20)));
  if (*(char *)param_1[3] != '\0') {
    pdVar3 = (double *)param_1[4];
    if (*(char *)(pdVar3 + 3) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar12 = *pdVar3 * local_20.X + pdVar3[1] * local_20.Y + pdVar3[2] * local_20.Z;
    local_20.X = local_20.X - dVar12 * *pdVar3;
    local_20.Y = local_20.Y - dVar12 * pdVar3[1];
    local_20.Z = local_20.Z - dVar12 * pdVar3[2];
  }
  dVar10 = local_20.Z;
  dVar9 = local_20.Y;
  dVar12 = local_20.X;
  uVar8 = local_60;
  this = (Darray_L_struct_ItineraryNodeUI__PathNode_G_ *)param_1[5];
  iVar2 = *(int *)(this + 8);
  uVar4 = *(undefined4 *)param_1[6];
  uVar7 = (undefined4)local_60;
  local_60 = CONCAT44(iVar2 + 1,(undefined4)local_60);
  util__Darray_struct_ItineraryNodeUI__PathNode___SetSize(this,(int *)((int)&local_60 + 4));
  bVar11 = util__Darray_struct_ItineraryNodeUI__PathNode___CheckSize(this,iVar2);
  if (bVar11) {
    iVar2 = *(int *)(this + 8);
    uStack_94 = *(undefined4 *)((char *)&uVar8 + 4);
    iVar5 = *(int *)(this + 4);
    puVar1 = (undefined4 *)(iVar5 + -0x30 + iVar2 * 0x30);
    *puVar1 = uVar4;
    puVar1[1] = uStack_9c;
    puVar1[2] = uVar7;
    puVar1[3] = uStack_94;
    local_70 = *(undefined4 *)&dVar12;
    uStack_6c = *(undefined4 *)((char *)&dVar12 + 4);
    uStack_68 = *(undefined4 *)&dVar9;
    uStack_64 = *(undefined4 *)((char *)&dVar9 + 4);
    puVar1 = (undefined4 *)(iVar5 + -0x20 + iVar2 * 0x30);
    *puVar1 = local_70;
    puVar1[1] = uStack_6c;
    puVar1[2] = uStack_68;
    puVar1[3] = uStack_64;
    local_80 = *(undefined4 *)&dVar10;
    uStack_7c = *(undefined4 *)((char *)&dVar10 + 4);
    uStack_78 = *(undefined4 *)&local_28;
    uStack_74 = *(undefined4 *)((char *)&local_28 + 4);
    puVar1 = (undefined4 *)(iVar5 + -0x10 + iVar2 * 0x30);
    *puVar1 = local_80;
    puVar1[1] = uStack_7c;
    puVar1[2] = uStack_78;
    puVar1[3] = uStack_74;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007a8030 007a8030_GetTimeLeftString ====
// decompiled by BatchDecomp @ 007a8030 name=GetTimeLeftString conv=__thiscall body=558

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: class util::Str<char> __thiscall HUDStrategic__GetTimeLeftString(void)const  */

Str_L_char_G_ * __thiscall
HUDStrategic__GetTimeLeftString(HUDStrategic *this,Str_L_char_G_ *__return_storage_ptr__)

{
  Maybe_L_double_G_ *pMVar1;
  Str_L_char_G_ *pSVar2;
  char *pcVar3;
  LocStr *pLVar4;
  Str_L_char_G_ *pSVar5;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ *pSVar6;
  undefined4 unaff_ESI;
  Str_L_char_G_ *__return_storage_ptr___00;
  void *local_8c[3];
  void *local_80;
  void *local_74[3];
  void *local_68;
  undefined1 local_5c[4];
  Str_L_char_G_ local_58;
  Str_L_char_G_ local_4c;
  Str_L_char_G_ local_40;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  pMVar1 = StrategicManager__GetDeadlineTimeLeft_s((StrategicManager *)this->_pad_0x0_0,(Maybe_L_double_G_ *)local_5c);
  if (pMVar1->IsValidData != false) {
    pMVar1 = StrategicManager__GetDeadlineTimeLeft_s((StrategicManager *)this->_pad_0x0_0,(Maybe_L_double_G_ *)local_5c);
    if (pMVar1->IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    pSVar2 = PrintTimeTruncated(&local_58,
                                (double)CONCAT44(unaff_ESI,(int)((ulonglong)pMVar1->Data >> 0x20)));
    if (pSVar2->Capacity < 1) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pSVar2->Data;
    }
    util__Str_char___Str_char__o5(&local_4c,pcVar3);
    util__Str_char___Str_char__o5(&local_34,"Colon");
    util__Str_char___Str_char__o5(&local_28,"TimeLeft");
    pSVar2 = &local_4c;
    local_1c.Data = (char *)0x0;
    local_1c.Capacity = 0;
    local_1c.Length = 0;
    local_10.Data = (char *)0x0;
    local_10.Capacity = 0;
    local_10.Length = 0;
    __return_storage_ptr___00 = __return_storage_ptr__;
    pLVar4 = (LocStr *)util__LocStr__LocStr((LocStr *)local_8c,&local_34,&local_1c);
    pSVar5 = util__LocStr__operator__o3(pLVar4);
    pSVar6 = &local_40;
    pLVar4 = (LocStr *)util__LocStr__LocStr((LocStr *)local_74,&local_28,&local_10);
    this_00 = util__LocStr__operator__o3(pLVar4);
    pSVar6 = util__Str_char___operator(this_00,pSVar6,pSVar5);
    util__Str_char___operator(pSVar6,__return_storage_ptr___00,pSVar2);
    if (local_40.Data != (char *)0x0) {
      operator_delete__(local_40.Data);
      local_40.Data = (char *)0x0;
    }
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
      local_68 = (void *)0x0;
    }
    if (local_74[0] != (void *)0x0) {
      operator_delete__(local_74[0]);
      local_74[0] = (void *)0x0;
    }
    if (local_10.Data != (char *)0x0) {
      operator_delete__(local_10.Data);
      local_10.Data = (char *)0x0;
    }
    if (local_80 != (void *)0x0) {
      operator_delete__(local_80);
      local_80 = (void *)0x0;
    }
    if (local_8c[0] != (void *)0x0) {
      operator_delete__(local_8c[0]);
      local_8c[0] = (void *)0x0;
    }
    if (local_1c.Data != (char *)0x0) {
      operator_delete__(local_1c.Data);
      local_1c.Data = (char *)0x0;
    }
    if (local_28.Data != (char *)0x0) {
      operator_delete__(local_28.Data);
      local_28.Data = (char *)0x0;
    }
    if (local_34.Data != (char *)0x0) {
      operator_delete__(local_34.Data);
      local_34.Data = (char *)0x0;
    }
    if (local_4c.Data != (char *)0x0) {
      operator_delete__(local_4c.Data);
    }
    if (local_58.Data != (char *)0x0) {
      operator_delete__(local_58.Data);
    }
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Data = (char *)0x0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->Length = 0;
  return __return_storage_ptr__;
}


//==== 00007a8260 007a8260_GetTimeLeftTooltip ====
// decompiled by BatchDecomp @ 007a8260 name=GetTimeLeftTooltip conv=__thiscall body=1009

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: class util::Str<char> __thiscall HUDStrategic__GetTimeLeftTooltip(void)const  */

Str_L_char_G_ * __thiscall
HUDStrategic__GetTimeLeftTooltip(HUDStrategic *this,Str_L_char_G_ *__return_storage_ptr__)

{
  Maybe_L_double_G_ *pMVar1;
  Str_L_char_G_ *pSVar2;
  char *pcVar3;
  LocStr *pLVar4;
  Str_L_char_G_ *pSVar5;
  Str_L_char_G_ *pSVar6;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ *pSVar7;
  Str_L_char_G_ *pSVar8;
  undefined4 unaff_ESI;
  Str_L_char_G_ *__return_storage_ptr___00;
  Str_L_char_G_ *__return_storage_ptr___01;
  Str_L_char_G_ *pSVar9;
  void *local_f4[3];
  void *local_e8;
  void *local_dc[3];
  void *local_d0;
  void *local_c4[3];
  void *local_b8;
  Str_L_char_G_ local_ac;
  Str_L_char_G_ local_a0;
  Str_L_char_G_ local_94;
  Str_L_char_G_ local_88;
  Str_L_char_G_ local_7c;
  double local_70;
  undefined1 local_68[4];
  Str_L_char_G_ local_64;
  Str_L_char_G_ local_58;
  Str_L_char_G_ local_4c;
  Str_L_char_G_ local_40;
  undefined1 local_34[12];
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  pMVar1 = StrategicManager__GetDeadlineTimeLeft_s((StrategicManager *)this->_pad_0x0_0,(Maybe_L_double_G_ *)local_68);
  if (pMVar1->IsValidData != false) {
    pMVar1 = StrategicManager__GetDeadlineTimeLeft_s((StrategicManager *)this->_pad_0x0_0,(Maybe_L_double_G_ *)local_68);
    if (pMVar1->IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    ((slice_view *)&local_34)->_4_8_ = pMVar1->Data;
    pMVar1 = StrategicManager__GetInitialDeadlineTime_s((StrategicManager *)this->_pad_0x0_0,(Maybe_L_double_G_ *)local_68);
    if (pMVar1->IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    local_70 = pMVar1->Data;
    pSVar2 = PrintTimeTruncated(&local_64,
                                (double)CONCAT44(unaff_ESI,(int)((ulonglong)local_70 >> 0x20)));
    if (pSVar2->Capacity < 1) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pSVar2->Data;
    }
    util__Str_char___Str_char__o5(&local_ac,pcVar3);
    util__Str_char___Str_char__o5(&local_58,"Slash");
    pSVar2 = PrintTimeTruncated(&local_a0,
                                (double)CONCAT44(unaff_ESI,
                                                 (int)((ulonglong)
                                                       (local_70 - (double)((slice_view *)&local_34)->_4_8_) >> 0x20))
                               );
    if (pSVar2->Capacity < 1) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pSVar2->Data;
    }
    util__Str_char___Str_char__o5((Str_L_char_G_ *)local_34,pcVar3);
    util__Str_char___Str_char__o5(&local_4c,"Colon");
    util__Str_char___Str_char__o5(&local_40,"TimeElapsed");
    pSVar9 = &local_ac;
    local_28.Data = (char *)0x0;
    local_28.Capacity = 0;
    local_28.Length = 0;
    local_1c.Data = (char *)0x0;
    local_1c.Capacity = 0;
    local_1c.Length = 0;
    local_10.Data = (char *)0x0;
    local_10.Capacity = 0;
    local_10.Length = 0;
    __return_storage_ptr___01 = __return_storage_ptr__;
    pLVar4 = (LocStr *)util__LocStr__LocStr((LocStr *)local_f4,&local_58,&local_28);
    pSVar5 = util__LocStr__operator__o3(pLVar4);
    pSVar2 = &local_7c;
    pSVar8 = (Str_L_char_G_ *)local_34;
    __return_storage_ptr___00 = &local_88;
    pLVar4 = (LocStr *)util__LocStr__LocStr((LocStr *)local_dc,&local_4c,&local_1c);
    pSVar6 = util__LocStr__operator__o3(pLVar4);
    pSVar7 = &local_94;
    pLVar4 = (LocStr *)util__LocStr__LocStr((LocStr *)local_c4,&local_40,&local_10);
    this_00 = util__LocStr__operator__o3(pLVar4);
    pSVar7 = util__Str_char___operator(this_00,pSVar7,pSVar6);
    pSVar8 = util__Str_char___operator(pSVar7,__return_storage_ptr___00,pSVar8);
    pSVar2 = util__Str_char___operator(pSVar8,pSVar2,pSVar5);
    util__Str_char___operator(pSVar2,__return_storage_ptr___01,pSVar9);
    if (local_7c.Data != (char *)0x0) {
      operator_delete__(local_7c.Data);
      local_7c.Data = (char *)0x0;
    }
    if (local_88.Data != (char *)0x0) {
      operator_delete__(local_88.Data);
      local_88.Data = (char *)0x0;
    }
    if (local_94.Data != (char *)0x0) {
      operator_delete__(local_94.Data);
      local_94.Data = (char *)0x0;
    }
    if (local_b8 != (void *)0x0) {
      operator_delete__(local_b8);
      local_b8 = (void *)0x0;
    }
    if (local_c4[0] != (void *)0x0) {
      operator_delete__(local_c4[0]);
      local_c4[0] = (void *)0x0;
    }
    if (local_10.Data != (char *)0x0) {
      operator_delete__(local_10.Data);
      local_10.Data = (char *)0x0;
    }
    if (local_d0 != (void *)0x0) {
      operator_delete__(local_d0);
      local_d0 = (void *)0x0;
    }
    if (local_dc[0] != (void *)0x0) {
      operator_delete__(local_dc[0]);
      local_dc[0] = (void *)0x0;
    }
    if (local_1c.Data != (char *)0x0) {
      operator_delete__(local_1c.Data);
      local_1c.Data = (char *)0x0;
    }
    if (local_e8 != (void *)0x0) {
      operator_delete__(local_e8);
      local_e8 = (void *)0x0;
    }
    if (local_f4[0] != (void *)0x0) {
      operator_delete__(local_f4[0]);
      local_f4[0] = (void *)0x0;
    }
    if (local_28.Data != (char *)0x0) {
      operator_delete__(local_28.Data);
      local_28.Data = (char *)0x0;
    }
    if (local_40.Data != (char *)0x0) {
      operator_delete__(local_40.Data);
      local_40.Data = (char *)0x0;
    }
    if (local_4c.Data != (char *)0x0) {
      operator_delete__(local_4c.Data);
      local_4c.Data = (char *)0x0;
    }
    if ((char *)((slice_view *)&local_34)->_0_4_ != (char *)0x0) {
      operator_delete__((void *)((slice_view *)&local_34)->_0_4_);
    }
    if (local_a0.Data != (char *)0x0) {
      operator_delete__(local_a0.Data);
      local_a0.Data = (char *)0x0;
    }
    if (local_58.Data != (char *)0x0) {
      operator_delete__(local_58.Data);
      local_58.Data = (char *)0x0;
    }
    if (local_ac.Data != (char *)0x0) {
      operator_delete__(local_ac.Data);
    }
    if (local_64.Data != (char *)0x0) {
      operator_delete__(local_64.Data);
    }
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Data = (char *)0x0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->Length = 0;
  return __return_storage_ptr__;
}


//==== 00007a8720 007a8720_HandleHotKeys ====
// decompiled by BatchDecomp @ 007a8720 name=HandleHotKeys conv=__thiscall body=519

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: void __thiscall HUDStrategic__HandleHotKeys(bool,int) */

void __thiscall HUDStrategic__HandleHotKeys(HUDStrategic *this,bool param_1,int param_2)

{
  undefined4 stack0xfffffffc;
  ReferenceController *this_00;
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  ReferenceController *hdc;
  ReferenceController *h;
  ItineraryNode IStack_2e8;
  ItineraryNode IStack_198;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_30[16];
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_20[12];
  ReferenceController *local_14;
  HUDStrategic *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = this;
  if (param_1) {
    piVar2 = (int *)StrategicManager__GetSelectedFleet((StrategicManager *)this->_pad_0x0_0);
    if (((*piVar2 == 0) || ((ReferenceController *)piVar2[1] == (ReferenceController *)0x0)) ||
       (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar2[1]),
       !bVar1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (local_14 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_14);
    }
    if (bVar1) {
      piVar2 = (int *)StrategicManager__GetFleets((StrategicManager *)this->_pad_0x0_0);
      local_c = 0;
      iVar3 = (**(code **)(*piVar2 + 0xc))();
      if (local_c < iVar3) {
        do {
          puVar4 = (undefined4 *)(**(code **)*piVar2)();
          if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
             (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
             !bVar1)) {
            *puVar4 = 0;
          }
          ((slice_view *)&IStack_198.CachedNearestOrbitParametricCoord)->_12_4_ = 0x7a87ce;
          Fleet__SetHotKey((Fleet *)*puVar4,param_2,true);
          local_c = local_c + 1;
          iVar3 = (**(code **)(*piVar2 + 0xc))();
          this = local_10;
        } while (local_c < iVar3);
      }
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_20);
      puVar4 = (undefined4 *)StrategicManager__GetSelectedFleet((StrategicManager *)this->_pad_0x0_0)
      ;
      if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
         !bVar1)) {
        *puVar4 = 0;
      }
      Fleet__SetHotKey((Fleet *)*puVar4,param_2,false);
      if (local_14 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_14);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  else {
    piVar2 = (int *)StrategicManager__GetFleets((StrategicManager *)this->_pad_0x0_0);
    local_c = 0;
    iVar3 = (**(code **)(*piVar2 + 0xc))();
    if (local_c < iVar3) {
      do {
        puVar4 = (undefined4 *)(**(code **)*piVar2)();
        if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
           !bVar1)) {
          *puVar4 = 0;
        }
        bVar1 = Fleet__IsHotKeyed((Fleet *)*puVar4,param_2);
        if (bVar1) {
          hdc = (ReferenceController *)*puVar4;
          this_00 = (ReferenceController *)puVar4[1];
          h = this_00;
          local_14 = hdc;
          if (this_00 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this_00);
            hdc = local_14;
            util__ReferenceController__AddWeakReference(this_00);
          }
          ItineraryNode__ItineraryNode(&IStack_2e8);
          ItineraryNode__ItineraryNode(&IStack_198);
          if (this_00 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(this_00);
          }
          StrategicManager__SelectObject((HDC)hdc,h);
        }
        local_c = local_c + 1;
        iVar3 = (**(code **)(*piVar2 + 0xc))();
      } while (local_c < iVar3);
    }
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_30);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007ba740 007ba740_FUN_007ba740 ====
void FUN_007ba740(int *param_1,double *param_2,double *param_3,double *param_4,double *param_5, undefined4 *param_6,Darray_L_struct_util__AABB_L_struct_util__Vec3_L_double_G___G___G_ *param_7);

// decompiled by BatchDecomp @ 007ba740 name=FUN_007ba740 conv=unknown body=570

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_007ba740(int *param_1,double *param_2,double *param_3,double *param_4,double *param_5,
                 undefined4 *param_6,Darray_L_struct_util__AABB_L_struct_util__Vec3_L_double_G___G___G_ *param_7)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  undefined1 auVar2[16];
  Line3_L_double_G_ LVar3;
  bool bVar4;
  int iVar5;
  double *pdVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  double dStack_24;
  undefined8 local_1c;
  double local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar5 = (**(code **)(*param_1 + 0xc))();
  pcVar7 = rand_exref;
  if (local_c < iVar5) {
    do {
      pdVar6 = (double *)(**(code **)*param_1)(&local_c);
      local_1c = *param_2;
      iVar5 = (*pcVar7)();
      local_1c = ((double)iVar5 * /*3f00000000000000*/3.0517578125e-05 * (local_1c - 0.0) + 0.0) /
                 /*408f400000000000*/1000.0;
      iVar5 = (*pcVar7)();
      local_14 = (double)iVar5 * /*3f00000000000000*/3.0517578125e-05 * /*401921fb54442d18*/6.283185307179586 -
                 /*400921fb54442d18*/3.141592653589793;
      dVar12 = util__Cos(&local_14);
      dVar13 = util__Sin(&local_14);
      dVar8 = local_1c * dVar12 + *pdVar6 / /*408f400000000000*/1000.0;
      dVar9 = local_1c * dVar13 + pdVar6[1] / /*408f400000000000*/1000.0;
      dVar12 = *param_3 * dVar8 + *param_4 * dVar9;
      dVar13 = param_3[1] * dVar8 + param_4[1] * dVar9;
      dVar11 = param_5[3] + dVar12;
      dVar8 = param_3[2] * dVar8 + param_4[2] * dVar9;
      dVar9 = param_5[4] + dVar13;
      dVar12 = dVar12 + *param_5;
      dVar13 = param_5[1] + dVar13;
      dVar10 = param_5[5] + dVar8;
      dVar8 = param_5[2] + dVar8;
      ((slice_view *)&auVar2)->_8_4_ = *(undefined4 *)&dVar13;
      ((slice_view *)&auVar2)->_0_8_ = dVar12;
      ((slice_view *)&auVar2)->_12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      dStack_24 = dVar13;
      if ((ReferenceController *)param_6[1] != (ReferenceController *)0x0) {
        bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_6[1]);
        dStack_24 = ((slice_view *)&auVar2)->_8_8_;
        if (!bVar4) {
          *param_6 = 0;
        }
      }
      local_54 = *(undefined4 *)&dVar8;
      uStack_50 = *(undefined4 *)((char *)&dVar8 + 4);
      uStack_4c = *(undefined4 *)&dVar11;
      uStack_48 = *(undefined4 *)((char *)&dVar11 + 4);
      ((slice_view *)&LVar3.A.Y)->_0_4_ = *(undefined4 *)&dStack_24;
      LVar3.A.X = dVar12;
      ((slice_view *)&LVar3.A.Y)->_4_4_ = (int)((ulonglong)dStack_24 >> 0x20);
      uStack_44 = *(undefined4 *)&dVar9;
      uStack_40 = *(undefined4 *)((char *)&dVar9 + 4);
      uStack_3c = *(undefined4 *)&dVar10;
      uStack_38 = *(undefined4 *)((char *)&dVar10 + 4);
      ((slice_view *)&LVar3.A.Z)->_0_4_ = local_54;
      ((slice_view *)&LVar3.A.Z)->_4_4_ = uStack_50;
      ((slice_view *)&LVar3.B.X)->_0_4_ = uStack_4c;
      ((slice_view *)&LVar3.B.X)->_4_4_ = uStack_48;
      ((slice_view *)&LVar3.B.Y)->_0_4_ = uStack_44;
      ((slice_view *)&LVar3.B.Y)->_4_4_ = uStack_40;
      ((slice_view *)&LVar3.B.Z)->_0_4_ = uStack_3c;
      ((slice_view *)&LVar3.B.Z)->_4_4_ = uStack_38;
      bVar4 = SpacecraftComponent__DoesRayCollideWithBoundingCylinder((SpacecraftComponent *)*param_6,LVar3);
      if (bVar4) {
        iVar5 = *(int *)(param_7 + 8);
        local_1c = (double)CONCAT44(iVar5 + 1,(undefined4)local_1c);
        util__Darray_struct_util__AABB_struct_util__Vec3_double_______SetSize(param_7,(int *)((int)&local_1c + 4));
        bVar4 = util__Darray_struct_util__AABB_struct_util__Vec3_double_______CheckSize(param_7,iVar5);
        pcVar7 = rand_exref;
        if (bVar4) {
          iVar5 = *(int *)(param_7 + 8);
          iVar1 = *(int *)(param_7 + 4);
          pdVar6 = (double *)(iVar1 + -0x30 + iVar5 * 0x30);
          *pdVar6 = dVar12;
          pdVar6[1] = dVar13;
          pdVar6 = (double *)(iVar1 + -0x20 + iVar5 * 0x30);
          *pdVar6 = dVar8;
          pdVar6[1] = dVar11;
          pdVar6 = (double *)(iVar1 + -0x10 + iVar5 * 0x30);
          *pdVar6 = dVar9;
          pdVar6[1] = dVar10;
          pcVar7 = rand_exref;
        }
      }
      local_c = local_c + 1;
      iVar5 = (**(code **)(*param_1 + 0xc))();
    } while (local_c < iVar5);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007c1490 007c1490_CollectCollisions ====
// decompiled by BatchDecomp @ 007c1490 name=CollectCollisions conv=__thiscall body=511

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Collision__RTreeNode__CollectCollisions(class util::Darray<class
   util::WeakPtr<class Body> > *,class util::WeakPtr<class Body> &) */

void __thiscall
Collision__RTreeNode__CollectCollisions(RTreeNode *this,Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_1,
          WeakPtr_L_class_Body_G_ *param_2)

{
  undefined4 stack0xfffffffc;
  Body *pBVar1;
  RTreeNode *pRVar2;
  ReferenceController *pRVar3;
  bool bVar4;
  int iVar5;
  WeakPtr_L_class_Body_G_ *pWVar6;
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
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((this->Left == (RTreeNode *)0x0) || (this->Right == (RTreeNode *)0x0)) {
    local_c = 0;
    iVar5 = (**(code **)(*(int *)&this->LeafColliders + 0xc))();
    if (local_c < iVar5) {
      do {
        pWVar6 = (WeakPtr_L_class_Body_G_ *)(**(code **)*(int *)&this->LeafColliders)(&local_c);
        pRVar3 = *(ReferenceController **)(pWVar6 + 4);
        if ((*(ReferenceController **)(param_2 + 4) != pRVar3) ||
           (*(int *)param_2 != *(int *)pWVar6)) {
          if (pRVar3 != (ReferenceController *)0x0) {
            bVar4 = util__ReferenceController__IsDataStillValid(pRVar3);
            if (!bVar4) {
              *(undefined4 *)pWVar6 = 0;
            }
          }
          pBVar1 = *(Body **)pWVar6;
          Body__GetSpawner_Memoize(pBVar1);
          if ((pBVar1->GetSpawner_MemoizedValue).IsValidData == false) {
            util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13
                            ,"IsValid()",(char *)0x0);
            DebugBreak();
          }
          pRVar3 = *(ReferenceController **)(param_2 + 4);
          if ((pRVar3 != (pBVar1->GetSpawner_MemoizedValue).Data.Controller) ||
             (*(Body **)param_2 != (pBVar1->GetSpawner_MemoizedValue).Data.Pointer)) {
            if (pRVar3 != (ReferenceController *)0x0) {
              bVar4 = util__ReferenceController__IsDataStillValid(pRVar3);
              if (!bVar4) {
                *(undefined4 *)param_2 = 0;
              }
            }
            pBVar1 = *(Body **)param_2;
            Body__GetSpawner_Memoize(pBVar1);
            if ((pBVar1->GetSpawner_MemoizedValue).IsValidData == false) {
              util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",
                              0x13,"IsValid()",(char *)0x0);
              DebugBreak();
            }
            if (((pBVar1->GetSpawner_MemoizedValue).Data.Controller !=
                 *(ReferenceController **)(pWVar6 + 4)) ||
               ((pBVar1->GetSpawner_MemoizedValue).Data.Pointer != *(Body **)pWVar6)) {
              util__Darray_class_util__WeakPtr_class_Body_____Add(param_1,pWVar6);
            }
          }
        }
        local_c = local_c + 1;
        iVar5 = (**(code **)(*(int *)&this->LeafColliders + 0xc))();
      } while (local_c < iVar5);
    }
  }
  else {
    if (*(ReferenceController **)(param_2 + 4) != (ReferenceController *)0x0) {
      bVar4 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(param_2 + 4));
      if (!bVar4) {
        *(undefined4 *)param_2 = 0;
      }
    }
    pBVar1 = *(Body **)param_2;
    Body__GetCollisionAABB_Memoize(pBVar1);
    if ((pBVar1->GetCollisionAABB_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    local_3c = *(undefined4 *)&(pBVar1->GetCollisionAABB_MemoizedValue).Data.Lower.X;
    uStack_38 = *(undefined4 *)((int)&(pBVar1->GetCollisionAABB_MemoizedValue).Data.Lower.X + 4);
    uStack_34 = *(undefined4 *)&(pBVar1->GetCollisionAABB_MemoizedValue).Data.Lower.Y;
    uStack_30 = *(undefined4 *)((int)&(pBVar1->GetCollisionAABB_MemoizedValue).Data.Lower.Y + 4);
    local_2c = *(undefined4 *)&(pBVar1->GetCollisionAABB_MemoizedValue).Data.Lower.Z;
    uStack_28 = *(undefined4 *)((int)&(pBVar1->GetCollisionAABB_MemoizedValue).Data.Lower.Z + 4);
    uStack_24 = *(undefined4 *)&(pBVar1->GetCollisionAABB_MemoizedValue).Data.Upper.X;
    uStack_20 = *(undefined4 *)((int)&(pBVar1->GetCollisionAABB_MemoizedValue).Data.Upper.X + 4);
    local_1c = *(undefined4 *)&(pBVar1->GetCollisionAABB_MemoizedValue).Data.Upper.Y;
    uStack_18 = *(undefined4 *)((int)&(pBVar1->GetCollisionAABB_MemoizedValue).Data.Upper.Y + 4);
    uStack_14 = *(undefined4 *)&(pBVar1->GetCollisionAABB_MemoizedValue).Data.Upper.Z;
    uStack_10 = *(undefined4 *)((int)&(pBVar1->GetCollisionAABB_MemoizedValue).Data.Upper.Z + 4);
    pRVar2 = this->Left;
    bVar4 = util__AABB_struct_util__Vec3_double_____Intersects((AABB_L_struct_util__Vec3_L_double_G___G_ *)&pRVar2->Bounds,
                       (AABB_L_struct_util__Vec3_L_double_G___G_ *)&local_3c);
    if (bVar4) {
      CollectCollisions(pRVar2,param_1,param_2);
    }
    pRVar2 = this->Right;
    bVar4 = util__AABB_struct_util__Vec3_double_____Intersects((AABB_L_struct_util__Vec3_L_double_G___G_ *)&pRVar2->Bounds,
                       (AABB_L_struct_util__Vec3_L_double_G___G_ *)&local_3c);
    if (bVar4) {
      CollectCollisions(pRVar2,param_1,param_2);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007d2640 007d2640_GetShipGroupInfo ====
extern undefined4 FUN_007c7de0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_007c95d0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007d2640 name=GetShipGroupInfo conv=__cdecl body=1037

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: static class util::Str<char> __cdecl SpacecraftComponent__GetShipGroupInfo(class
   util::Darray<class util::WeakPtr<class SpacecraftComponent> > const &) */

Str_L_char_G_ * __cdecl
SpacecraftComponent__GetShipGroupInfo(Str_L_char_G_ *__return_storage_ptr__,
          Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *param_1)

{
  undefined4 stack0xfffffffc;
  ReferenceController *pRVar1;
  Body *pBVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  Str_L_char_G_ *pSVar6;
  ReferenceController *pRVar7;
  int local_64;
  Darray_L_int_G_ local_60;
  ReferenceController *local_50;
  int local_4c;
  undefined **local_48;
  void *pvStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int *local_38;
  Str_L_char_G_ local_34;
  undefined1 local_28[8];
  int iStack_20;
  int iStack_1c;
  int local_18;
  int local_14;
  Body *local_10;
  char local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar4 = (**(code **)(*(int *)param_1 + 0xc))();
  if (iVar4 == 0) {
    __return_storage_ptr__->Data = (char *)0x0;
    __return_storage_ptr__->Capacity = 0;
    __return_storage_ptr__->Length = 0;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return __return_storage_ptr__;
  }
  local_34.Data = (char *)0x0;
  local_34.Capacity = 0;
  local_34.Length = 0;
  iVar4 = (**(code **)(*(int *)param_1 + 0xc))();
  local_9 = iVar4 == 1;
  piVar5 = (int *)(**(code **)(*(int *)param_1 + 0x1c))();
  pRVar7 = (ReferenceController *)piVar5[1];
  iVar4 = *piVar5;
  local_50 = pRVar7;
  if (pRVar7 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar7);
  }
  if ((((local_9 != '\0') && (iVar4 != 0)) && (pRVar7 != (ReferenceController *)0x0)) &&
     (bVar3 = util__ReferenceController__IsDataStillValid(pRVar7), bVar3)) {
    if ((pRVar7 != (ReferenceController *)0x0) &&
       (bVar3 = util__ReferenceController__IsDataStillValid(pRVar7), !bVar3)) {
      iVar4 = 0;
    }
    if ((*(ReferenceController **)(iVar4 + 8) != (ReferenceController *)0x0) &&
       (bVar3 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar4 + 8)),
       !bVar3)) {
      *(undefined4 *)(iVar4 + 4) = 0;
    }
    local_10 = *(Body **)(iVar4 + 4);
    Body__GetCapitalShipComponent_Memoize(local_10);
    if ((local_10->GetCapitalShipComponent_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if ((((local_10->GetCapitalShipComponent_MemoizedValue).Data.Pointer !=
          (CapitalShipComponent *)0x0) &&
        (pRVar1 = (local_10->GetCapitalShipComponent_MemoizedValue).Data.Controller,
        pRVar1 != (ReferenceController *)0x0)) &&
       (bVar3 = util__ReferenceController__IsDataStillValid(pRVar1), bVar3)) {
      if ((pRVar7 != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid(pRVar7), !bVar3)) {
        iVar4 = 0;
      }
      if ((*(ReferenceController **)(iVar4 + 8) != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar4 + 8)),
         !bVar3)) {
        *(undefined4 *)(iVar4 + 4) = 0;
      }
      pBVar2 = *(Body **)(iVar4 + 4);
      Body__GetCapitalShipComponent_Memoize(pBVar2);
      if ((pBVar2->GetCapitalShipComponent_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      pRVar7 = (pBVar2->GetCapitalShipComponent_MemoizedValue).Data.Controller;
      if ((pRVar7 != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid(pRVar7), !bVar3)) {
        (pBVar2->GetCapitalShipComponent_MemoizedValue).Data.Pointer = (CapitalShipComponent *)0x0;
      }
      bVar3 = UntrackComponent__IsDoomed((UntrackComponent *)
                         (pBVar2->GetCapitalShipComponent_MemoizedValue).Data.Pointer);
      pRVar7 = local_50;
      if (bVar3) {
        if ((local_50 != (ReferenceController *)0x0) &&
           (bVar3 = util__ReferenceController__IsDataStillValid(local_50), !bVar3)) {
          iVar4 = 0;
        }
        if ((*(ReferenceController **)(iVar4 + 8) != (ReferenceController *)0x0) &&
           (bVar3 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar4 + 8)), !bVar3)) {
          *(undefined4 *)(iVar4 + 4) = 0;
        }
        pBVar2 = *(Body **)(iVar4 + 4);
        Body__GetCapitalShipComponent_Memoize(pBVar2);
        if ((pBVar2->GetCapitalShipComponent_MemoizedValue).IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        pRVar1 = (pBVar2->GetCapitalShipComponent_MemoizedValue).Data.Controller;
        if ((pRVar1 != (ReferenceController *)0x0) &&
           (bVar3 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar3)) {
          (pBVar2->GetCapitalShipComponent_MemoizedValue).Data.Pointer = (CapitalShipComponent *)0x0
          ;
        }
        pSVar6 = CapitalShipComponent__GetName((pBVar2->GetCapitalShipComponent_MemoizedValue).Data.Pointer,
                            (Str_L_char_G_ *)(local_28 + 4));
        util__Str_char___operator__o8(&local_34,pSVar6);
        util__Str_char____Str_char((Str_L_char_G_ *)(local_28 + 4));
        goto LAB_007d2a11;
      }
    }
  }
  local_10 = (Body *)((uint)local_10 & 0xffffff00);
  ((slice_view *)&local_28)->_0_4_ = (undefined4 *)0x0;
  ((slice_view *)&local_28)->_4_4_ = (int *)0x0;
  iStack_20 = 0;
  iStack_1c = 0;
  FUN_007c95d0(local_28,param_1,local_10);
  local_48 = (undefined **)0x0;
  pvStack_44 = (void *)0x0;
  uStack_40 = 0;
  uStack_3c = 0;
  local_60._pad_0x0_0 = 0;
  local_60.Data = (int *)0x0;
  local_60.Size = 0;
  local_60.Capacity = 0;
  iVar4 = (**(code **)(((slice_view *)&local_28)->_0_4_ + 0xc))();
  util__Darray_int___Darray_int__o3(&local_60,iVar4);
  local_18 = 0;
  iVar4 = (**(code **)(((slice_view *)&local_28)->_0_4_ + 0xc))();
  if (local_18 < iVar4) {
    do {
      piVar5 = (int *)(**(code **)((slice_view *)&local_28)->_0_4_)(&local_18);
      local_10 = (Body *)0x0;
      local_14 = 0;
      local_4c = *piVar5;
      local_38 = &local_4c;
      iVar4 = (**(code **)(*(int *)param_1 + 0xc))();
      if (local_14 < iVar4) {
        do {
          piVar5 = (int *)(*(code *)**(undefined4 **)param_1)(&local_14);
          if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
             (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]),
             !bVar3)) {
            *piVar5 = 0;
          }
          if (*(int *)(*(int *)(*piVar5 + 0x118) + 8) == *local_38) {
            local_10 = (Body *)((int)&local_10->_pad_0x0_0 + 1);
          }
          local_14 = local_14 + 1;
          iVar4 = (**(code **)(*(int *)param_1 + 0xc))();
        } while (local_14 < iVar4);
      }
      pBVar2 = local_10;
      iVar4 = local_60.Size;
      local_64 = local_60.Size + 1;
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&local_60,&local_64);
      bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&local_60,iVar4);
      if (bVar3) {
        local_60.Data[local_60.Size + -1] = (int)pBVar2;
      }
      local_18 = local_18 + 1;
      iVar4 = (**(code **)(((slice_view *)&local_28)->_0_4_ + 0xc))();
    } while (local_18 < iVar4);
  }
util__GetShipGroupInfo((Darray_L_class_CraftBlueprint_const_P_G_ *)&local_48,(Darray_L_int_G_ *)local_28);
  local_60._pad_0x0_0 = (int)((void *)(0x00919aa0u));
  if (local_60.Data != (int *)0x0) {
    operator_delete__(local_60.Data);
  }
  local_9 = '\x01';
  FUN_007c7de0(&local_48,&local_9,&local_34);
  local_48 = ((void *)(0x00920638u));
  if (pvStack_44 != (void *)0x0) {
    operator_delete__(pvStack_44);
  }
  pvStack_44 = (void *)0x0;
  local_48 = ((void *)(0x00919488u));
  ((slice_view *)&local_28)->_0_4_ = ((void *)(0x009194a4u));
  pRVar7 = local_50;
  if ((int *)((slice_view *)&local_28)->_4_4_ != (int *)0x0) {
    operator_delete__((void *)((slice_view *)&local_28)->_4_4_);
    pRVar7 = local_50;
  }
LAB_007d2a11:
  util__Str_char___Str_char(__return_storage_ptr__,&local_34);
  if (pRVar7 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar7);
  }
  if (local_34.Data != (char *)0x0) {
    operator_delete__(local_34.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 00007dd540 007dd540_FUN_007dd540 ====
void FUN_007dd540(undefined4 *param_1,int *param_2);
extern undefined4 FUN_007e0c90(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007dd540 name=FUN_007dd540 conv=unknown body=561

void FUN_007dd540(undefined4 *param_1,int *param_2)

{
  undefined4 stack0xffffffd4;
  undefined4 stack0xfffffffc;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ReferenceController *this;
  int iVar4;
  undefined4 *puVar5;
  double *pdVar6;
  ReferenceController *pRVar7;
  ReferenceController *local_40;
  double local_3c;
  undefined1 local_34[12];
  ReferenceController *pRStack_28;
  undefined4 *local_24;
  double local_20;
  undefined8 local_18;
  undefined8 local_10;
  double *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_24 = param_1;
  pRStack_28 = (ReferenceController *)0x0;
  local_18 = 0;
  local_10 = 0;
  local_20 = 0.0;
  local_c = (double *)0x0;
  iVar4 = (**(code **)(*param_2 + 0xc))();
  if ((int)local_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*param_2)(&local_c);
      FUN_007e0c90(&local_3c,puVar5);
      if ((local_34[0] != '\0') && (((char)local_10 == '\0' || (local_20 < local_3c)))) {
        pRStack_28 = (ReferenceController *)*puVar5;
        pRVar7 = (ReferenceController *)puVar5[1];
        if (pRVar7 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar7);
        }
        this = ((slice_view *)&local_18)->_4_4_;
        local_18 = CONCAT44(pRVar7,pRStack_28);
        if (pRVar7 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar7);
        }
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this);
        }
        ((slice_view *)&local_10)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&local_10)->_1_3_[0] | (((slice_view *)&local_10)->_1_3_[1] << 8) | (((slice_view *)&local_10)->_1_3_[2] << 16)) << 8));
        if (pRVar7 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar7);
        }
        local_20 = local_3c;
      }
      local_c = (double *)((int)local_c + 1);
      iVar4 = (**(code **)(*param_2 + 0xc))();
    } while ((int)local_c < iVar4);
  }
  if ((char)local_10 == '\0') {
    local_40 = (ReferenceController *)0x0;
    local_3c = 0.0;
    pdVar6 = (double *)0x0;
    pRVar7 = (ReferenceController *)local_34;
    local_34[0] = 0;
    stack0xffffffd4 = (double)CONCAT44(pRVar7,((slice_view *)&local_34)->_8_4_);
    bVar3 = false;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    pRVar7 = ((slice_view *)&local_18)->_4_4_;
    local_c = (double *)local_18;
    if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(((slice_view *)&local_18)->_4_4_);
    }
    stack0xffffffd4 = local_20;
    if (pRVar7 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar7);
      if (pRVar7 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar7);
        util__ReferenceController__ReleaseWeakReference(pRVar7);
        if (pRVar7 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar7);
        }
      }
    }
    local_40 = pRVar7;
    if (pRVar7 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar7);
    }
    local_3c = stack0xffffffd4;
    bVar3 = true;
    bVar2 = true;
    bVar1 = false;
    local_34[0] = 1;
    stack0xffffffd4 = (double)CONCAT44(local_34,((slice_view *)&local_34)->_8_4_);
    pdVar6 = local_c;
  }
  local_c = &local_3c;
  *local_24 = pdVar6;
  local_24[1] = local_40;
  if (local_40 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(local_40);
  }
  *(double *)(local_24 + 2) = *local_c;
  *(undefined1 *)(local_24 + 4) = *(undefined1 *)pRStack_28;
  if (bVar1) {
    if (local_40 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_40);
    }
  }
  if ((bVar2) && (local_40 != (ReferenceController *)0x0)) {
    util__ReferenceController__ReleaseWeakReference(local_40);
  }
  if ((pRVar7 != (ReferenceController *)0x0) && (bVar3)) {
    util__ReferenceController__ReleaseWeakReference(pRVar7);
  }
  if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_18)->_4_4_);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007dd930 007dd930_FUN_007dd930 ====
extern undefined4 FUN_007dd020(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void FUN_007dd930(int *param_1,Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *param_2, char *param_3);
extern undefined4 FUN_007dec10(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_007df500(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007dd930 name=FUN_007dd930 conv=unknown body=422

void FUN_007dd930(int *param_1,Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *param_2,
                 char *param_3)

{
  undefined4 stack0xfffffffc;
  ReferenceController *this;
  ReferenceController *this_00;
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  WeakPtr_L_class_Body_G_ *pWVar5;
  undefined1 local_64[4];
  ReferenceController *local_60;
  undefined1 local_44[16];
  uint local_34;
  int *local_30;
  undefined4 local_2c;
  int local_28;
  uint local_24;
  undefined4 local_20;
  int iStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_30 = param_1;
  local_10 = 0;
  iVar2 = (**(code **)(*param_1 + 0xc))();
  if (local_10 < iVar2) {
    do {
      puVar3 = (undefined4 *)(**(code **)*param_1)(&local_10);
      piVar4 = (int *)*puVar3;
      iVar2 = (**(code **)(*piVar4 + 0xc))();
      if ((0 < iVar2) && (iVar2 = (**(code **)(*(int *)param_2 + 0xc))(), iVar2 == 0)) {
        if (*param_3 == '\0') {
          local_34 = local_34 & 0xffffff00;
          pWVar5 = (WeakPtr_L_class_Body_G_ *)FUN_007dd020(local_64,piVar4,local_34);
          util__Darray_class_util__WeakPtr_class_Body_____Add((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)param_2,pWVar5);
          if (local_60 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(local_60);
          }
        }
        else {
          local_24 = local_24 & 0xffffff00;
          piVar4 = (int *)FUN_007dec10(local_44,piVar4,local_24);
          local_20 = 0;
          iStack_1c = 0;
          iStack_18 = 0;
          uStack_14 = 0;
          iVar2 = (**(code **)(*piVar4 + 0xc))();
          util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_20,iVar2);
          local_c = 0;
          iVar2 = (**(code **)(*piVar4 + 0xc))();
          if (local_c < iVar2) {
            do {
              puVar3 = (undefined4 *)(**(code **)*piVar4)(&local_c);
              this = (ReferenceController *)puVar3[1];
              local_2c = *puVar3;
              if (this != (ReferenceController *)0x0) {
                util__ReferenceController__AddWeakReference(this);
              }
              iVar2 = iStack_18;
              local_28 = iStack_18 + 1;
              util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_20,&local_28);
              bVar1 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_20,iVar2);
              if (bVar1) {
                this_00 = *(ReferenceController **)(iStack_1c + -4 + iStack_18 * 8);
                *(undefined4 *)(iStack_1c + -8 + iStack_18 * 8) = local_2c;
                *(ReferenceController **)(iStack_1c + -4 + iStack_18 * 8) = this;
                if (this != (ReferenceController *)0x0) {
                  util__ReferenceController__AddWeakReference(this);
                }
                if (this_00 != (ReferenceController *)0x0) {
                  util__ReferenceController__ReleaseWeakReference(this_00);
                }
              }
              if (this != (ReferenceController *)0x0) {
                util__ReferenceController__ReleaseWeakReference(this);
              }
              local_c = local_c + 1;
              iVar2 = (**(code **)(*piVar4 + 0xc))();
              param_1 = local_30;
            } while (local_c < iVar2);
          }
          util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
                    (param_2,(Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_20);
          util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_20);
          FUN_007df500();
        }
      }
      local_10 = local_10 + 1;
      iVar2 = (**(code **)(*param_1 + 0xc))();
    } while (local_10 < iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007de9f0 007de9f0_FUN_007de9f0 ====
void FUN_007de9f0(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5, int *param_6,int *param_7);
extern undefined4 FUN_007e0420(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007de9f0 name=FUN_007de9f0 conv=unknown body=541

void FUN_007de9f0(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5,
                 int *param_6,int *param_7)

{
  undefined4 stack0xfffffffc;
  ReferenceController *pRVar1;
  ReferenceController *pRVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = (undefined4 *)*param_3;
  local_c = (undefined4 *)*param_5;
  iVar6 = *param_4;
  if ((int)local_10 < iVar6) {
    do {
      if (*param_6 <= (int)local_c) break;
      local_14 = (undefined4 *)(**(code **)*param_1)(&local_10);
      local_18 = (undefined4 *)(**(code **)*param_1)(&local_c);
      fVar7 = (float10)FUN_007e0420(local_18);
      fVar8 = (float10)FUN_007e0420(local_14);
      puVar3 = (undefined4 *)*param_7;
      *param_7 = (int)puVar3 + 1;
      if ((double)fVar7 <= (double)fVar8) {
        local_18 = puVar3;
        puVar3 = (undefined4 *)(**(code **)*param_2)(&local_18);
        pRVar1 = (ReferenceController *)puVar3[1];
        *puVar3 = *local_14;
        pRVar2 = (ReferenceController *)local_14[1];
        puVar3[1] = pRVar2;
        if (pRVar2 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar2);
        }
        if (pRVar1 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar1);
        }
        local_10 = (undefined4 *)((int)local_10 + 1);
      }
      else {
        local_14 = puVar3;
        puVar3 = (undefined4 *)(**(code **)*param_2)(&local_14);
        pRVar1 = (ReferenceController *)puVar3[1];
        *puVar3 = *local_18;
        pRVar2 = (ReferenceController *)local_18[1];
        puVar3[1] = pRVar2;
        if (pRVar2 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar2);
        }
        if (pRVar1 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar1);
        }
        local_c = (undefined4 *)((int)local_c + 1);
      }
      iVar6 = *param_4;
    } while ((int)local_10 < iVar6);
    if ((int)local_10 < iVar6) {
      do {
        local_14 = (undefined4 *)*param_7;
        *param_7 = (int)local_14 + 1;
        local_18 = local_10;
        local_10 = (undefined4 *)((int)local_10 + 1);
        puVar3 = (undefined4 *)(**(code **)*param_1)(&local_18);
        puVar4 = (undefined4 *)(**(code **)*param_2)(&local_14);
        pRVar1 = (ReferenceController *)puVar4[1];
        *puVar4 = *puVar3;
        pRVar2 = (ReferenceController *)puVar3[1];
        puVar4[1] = pRVar2;
        if (pRVar2 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar2);
        }
        if (pRVar1 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar1);
        }
      } while ((int)local_10 < *param_4);
    }
  }
  if ((int)local_c < *param_6) {
    do {
      local_14 = (undefined4 *)*param_7;
      *param_7 = (int)local_14 + 1;
      local_18 = local_c;
      local_c = (undefined4 *)((int)local_c + 1);
      puVar3 = (undefined4 *)(**(code **)*param_1)(&local_18);
      puVar4 = (undefined4 *)(**(code **)*param_2)(&local_14);
      pRVar1 = (ReferenceController *)puVar4[1];
      *puVar4 = *puVar3;
      pRVar2 = (ReferenceController *)puVar3[1];
      puVar4[1] = pRVar2;
      if (pRVar2 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar2);
      }
      if (pRVar1 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(pRVar1);
      }
    } while ((int)local_c < *param_6);
  }
  iVar6 = *param_7;
  iVar5 = (**(code **)(*param_2 + 0xc))();
  if ((iVar5 < iVar6) || (iVar6 == 0)) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\sort.inl",0x21,
                    "OutIndex <= OutList.Num() && OutIndex",(char *)0x0);
    DebugBreak();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007e0200 007e0200_FUN_007e0200 ====
extern undefined4 FUN_007de200(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void FUN_007e0200(Darray_L_bool_P__G_ *param_1,undefined4 *param_2);

// decompiled by BatchDecomp @ 007e0200 name=FUN_007e0200 conv=unknown body=544

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_007e0200(Darray_L_bool_P__G_ *param_1,undefined4 *param_2)

{
  undefined4 stack0xfffffffc;
  Body *pBVar1;
  ReferenceController *pRVar2;
  undefined4 uVar3;
  CraftInstance *this;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined4 *puVar7;
  int iVar8;
  Darray_L_bool_P__G_ *pDVar9;
  code *pcVar10;
  ReferenceController *local_38;
  undefined **local_34;
  void *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined **local_24;
  void *pvStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 *local_14;
  undefined4 local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_14 = (undefined4 *)0x0;
  if (((ReferenceController *)param_2[1] != (ReferenceController *)0x0) &&
     (bVar6 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]), !bVar6
     )) {
    *param_2 = 0;
  }
  pBVar1 = (Body *)*param_2;
  Body__GetSpacecraftComponent_Memoize(pBVar1);
  if ((pBVar1->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((((pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Pointer == (SpacecraftComponent *)0x0)
      || (pRVar2 = (pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Controller,
         pRVar2 == (ReferenceController *)0x0)) ||
     (bVar6 = util__ReferenceController__IsDataStillValid(pRVar2), !bVar6)) {
    local_34 = ((void *)(0x009194a4u));
    pDVar9 = (Darray_L_bool_P_G_ *)&local_34;
    local_30 = (void *)0x0;
    bVar5 = true;
    bVar4 = false;
    bVar6 = false;
    local_2c = 0;
    local_28 = 0;
  }
  else {
    uVar3 = *local_c;
    local_14 = (undefined4 *)local_c[1];
    local_c = (undefined4 *)uVar3;
    if (((ReferenceController *)param_2[1] != (ReferenceController *)0x0) &&
       (bVar6 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]),
       !bVar6)) {
      *param_2 = 0;
    }
    pBVar1 = (Body *)*param_2;
    Body__GetSpacecraftComponent_Memoize(pBVar1);
    pcVar10 = DebugBreak_exref;
    if ((pBVar1->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      pcVar10 = DebugBreak_exref;
      DebugBreak();
    }
    pRVar2 = (pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Controller;
    if ((pRVar2 != (ReferenceController *)0x0) &&
       (bVar6 = util__ReferenceController__IsDataStillValid(pRVar2), !bVar6)) {
      (pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Pointer = (SpacecraftComponent *)0x0;
    }
    puVar7 = (undefined4 *)
             SpacecraftComponent__GetCraft((pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Pointer);
    if (((ReferenceController *)puVar7[1] != (ReferenceController *)0x0) &&
       (bVar6 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar7[1]),
       !bVar6)) {
      *puVar7 = 0;
    }
    this = (CraftInstance *)*puVar7;
    CraftInstance__GetWeaponModules_Memoize(this);
    if ((this->GetWeaponModules_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      (*pcVar10)();
    }
    local_10 = local_c;
    local_c = local_14;
    local_24 = (undefined **)0x0;
    pvStack_20 = (void *)0x0;
    uStack_1c = 0;
    uStack_18 = 0;
    iVar8 = (**(code **)((this->GetWeaponModules_MemoizedValue).Data._pad_0x0_0 + 0xc))();
    util__Darray_class_Manager____Darray_class_Manager((Darray_L_class_Manager_P_G_ *)&local_24,iVar8);
    FUN_007de200(&this->GetWeaponModules_MemoizedValue,&local_10,&local_24);
    pDVar9 = (Darray_L_bool_P_G_ *)&local_24;
    bVar5 = false;
    bVar4 = true;
    bVar6 = true;
  }
  util__Darray_bool____Darray_bool(param_1,pDVar9);
  if (bVar6) {
    local_24 = ((void *)(0x009194a4u));
    if (pvStack_20 != (void *)0x0) {
      operator_delete__(pvStack_20);
    }
    pvStack_20 = (void *)0x0;
    local_24 = ((void *)(0x00919488u));
  }
  if ((bVar4) && (local_38 != (ReferenceController *)0x0)) {
    util__ReferenceController__ReleaseWeakReference(local_38);
  }
  if ((bVar5) &&
     (local_34 = ((void *)(0x009194a4u)), local_30 != (void *)0x0)) {
    operator_delete__(local_30);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007e2440 007e2440_GetEnemyTargetedCompartmentOffset_m ====

// decompiled by BatchDecomp @ 007e2440 name=GetEnemyTargetedCompartmentOffset_m conv=__thiscall body=930

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Maybe<struct util::Vec3<double> > __thiscall
   SpacecraftTargeting__GetEnemyTargetedCompartmentOffset_m(struct util::Quaternion<double>,struct
   Vec3_L_double_G_)const  */

void __thiscall
SpacecraftTargeting__GetEnemyTargetedCompartmentOffset_m(SpacecraftTargeting *this,Quaternion_L_double_G_ param_1,Vec3_L_double_G_ param_2)

{
  undefined4 stack0xfffffffc;
  SpacecraftComponent *pSVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  Quaternion_L_double_G_ QVar6;
  undefined4 *puVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  double *pdVar11;
  Vec3_L_double_G_ *pVVar12;
  ModuleCompartment *this_00;
  uint uVar13;
  uint uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  Vec3_L_double_G_ local_98;
  ModuleCompartment *local_80;
  ReferenceController *local_7c;
  char local_70;
  double local_68;
  double local_60;
  double local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  Vec3_L_double_G_ local_30;
  undefined **local_18;
  void *local_14;
  uint local_8;
  
  puVar7 = ((slice_view *)&param_1.X)->_0_4_;
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pSVar1 = this->Parent;
  local_38 = (double)CONCAT44(this,(undefined4)local_38);
  if (((ReferenceController *)pSVar1->_pad_0x0_0 != (ReferenceController *)0x0) &&
     (bVar8 = util__ReferenceController__IsDataStillValid((ReferenceController *)pSVar1->_pad_0x0_0),
     !bVar8)) {
    pSVar1->_pad_0x0_0 = 0;
  }
  Body__GetPosition_km((Body *)pSVar1->_pad_0x0_0,&local_30);
  ((slice_view *)&uStack_48)->_4_4_ = &local_30;
  ((slice_view *)&uStack_40)->_0_4_ = (undefined1 *)((int)&param_1.X + 4);
  FUN_007dd780(&local_80,((slice_view *)&local_38)->_4_4_ + 0x90,((slice_view *)&uStack_48)->_4_4_,(undefined1 *)uStack_40,
               (undefined1 *)((int)&param_2.X + 4));
  if (local_70 == '\0') {
    *(undefined8 *)(puVar7 + 4) = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *(undefined1 *)(puVar7 + 6) = 0;
  }
  else {
    this_00 = local_80;
    if ((local_7c != (ReferenceController *)0x0) &&
       (bVar8 = util__ReferenceController__IsDataStillValid(local_7c), this_00 = local_80, !bVar8))
    {
      this_00 = (ModuleCompartment *)0x0;
    }
    ((slice_view *)&QVar6.X)->_4_4_ = ((slice_view *)&param_1.X)->_4_4_;
    ((slice_view *)&QVar6.X)->_0_4_ = &local_18;
    ((slice_view *)&QVar6.Y)->_0_4_ = ((slice_view *)&param_1.Y)->_0_4_;
    ((slice_view *)&QVar6.Y)->_4_4_ = ((slice_view *)&param_1.Y)->_4_4_;
    ((slice_view *)&QVar6.Z)->_0_4_ = ((slice_view *)&param_1.Z)->_0_4_;
    ((slice_view *)&QVar6.Z)->_4_4_ = ((slice_view *)&param_1.Z)->_4_4_;
    ((slice_view *)&QVar6.W)->_0_4_ = ((slice_view *)&param_1.W)->_0_4_;
    ((slice_view *)&QVar6.W)->_4_4_ = ((slice_view *)&param_1.W)->_4_4_;
    ModuleCompartment__GetTargetableCollisionShellOffsets_km(this_00,QVar6);
    iVar9 = (*(code *)local_18[3])();
    if (iVar9 < 1) {
      if ((local_7c != (ReferenceController *)0x0) &&
         (bVar8 = util__ReferenceController__IsDataStillValid(local_7c), !bVar8)) {
        this_00 = (ModuleCompartment *)0x0;
      }
      pVVar12 = ModuleCompartment__GetTrueOffset_m(this_00,&local_98);
      dVar17 = (double)CONCAT44(((slice_view *)&param_1.Y)->_0_4_,((slice_view *)&param_1.X)->_4_4_);
      uVar13 = (uint)__xmm_80000000000000008000000000000000;
      uVar14 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      local_60 = (double)CONCAT44(((slice_view *)&param_1.Y)->_0_4_ ^ uVar14,((slice_view *)&param_1.X)->_4_4_ ^ uVar13);
      dVar4 = (double)CONCAT44(((slice_view *)&param_1.W)->_0_4_,((slice_view *)&param_1.Z)->_4_4_);
      dVar16 = pVVar12->Z;
      dVar2 = pVVar12->X;
      dVar3 = pVVar12->Y;
      local_38 = (double)CONCAT44(((slice_view *)&param_1.Z)->_0_4_ ^ uVar14,((slice_view *)&param_1.Y)->_4_4_ ^ uVar13);
      local_68 = (double)CONCAT44(((slice_view *)&param_1.W)->_0_4_ ^ uVar14,((slice_view *)&param_1.Z)->_4_4_ ^ uVar13);
      local_58 = (((double)CONCAT44(((slice_view *)&param_1.Z)->_0_4_,((slice_view *)&param_1.Y)->_4_4_) * dVar16 + dVar17 * 0.0) -
                 dVar4 * dVar3) + (double)CONCAT44(((slice_view *)&param_2.X)->_0_4_,((slice_view *)&param_1.W)->_4_4_) * dVar2;
      dVar15 = ((double)CONCAT44(((slice_view *)&param_1.Z)->_0_4_,((slice_view *)&param_1.Y)->_4_4_) * 0.0 - dVar17 * dVar16) +
               dVar4 * dVar2 + (double)CONCAT44(((slice_view *)&param_2.X)->_0_4_,((slice_view *)&param_1.W)->_4_4_) * dVar3;
      dVar5 = (double)CONCAT44(((slice_view *)&param_2.X)->_0_4_,((slice_view *)&param_1.W)->_4_4_);
      dVar17 = (dVar17 * dVar3 - (double)CONCAT44(((slice_view *)&param_1.Z)->_0_4_,((slice_view *)&param_1.Y)->_4_4_) * dVar2) +
               dVar4 * 0.0 + (double)CONCAT44(((slice_view *)&param_2.X)->_0_4_,((slice_view *)&param_1.W)->_4_4_) * dVar16;
      dVar16 = (double)CONCAT44(((slice_view *)&param_2.X)->_0_4_,((slice_view *)&param_1.W)->_4_4_) * 0.0 -
               ((double)CONCAT44(((slice_view *)&param_1.Z)->_0_4_,((slice_view *)&param_1.Y)->_4_4_) * dVar3 +
                (double)CONCAT44(((slice_view *)&param_1.Y)->_0_4_,((slice_view *)&param_1.X)->_4_4_) * dVar2 + dVar4 * dVar16);
      local_50 = ((dVar15 * local_68 + local_58 * dVar5) - dVar17 * local_38) + local_60 * dVar16;
      uStack_48 = (dVar5 * dVar15 - local_68 * local_58) + local_60 * dVar17 + local_38 * dVar16;
      local_38 = local_38 * local_58;
      uStack_40 = (local_38 - local_60 * dVar15) + dVar5 * dVar17 + local_68 * dVar16;
    }
    else {
      iVar9 = (*(code *)local_18[3])();
      iVar10 = rand();
      local_38 = (double)CONCAT44((int)((double)iVar10 * /*3f00000000000000*/3.0517578125e-05 *
                                        ((double)iVar9 - 0.0) + 0.0),(undefined4)local_38);
      pdVar11 = (double *)(*(code *)*local_18)((int)&local_38 + 4);
      uStack_40 = pdVar11[2] * /*408f400000000000*/1000.0;
      local_50 = *pdVar11 * /*408f400000000000*/1000.0;
      uStack_48 = pdVar11[1] * /*408f400000000000*/1000.0;
    }
    *(undefined1 *)(puVar7 + 6) = 1;
    local_18 = ((void *)(0x0091a900u));
    *puVar7 = (undefined4)local_50;
    puVar7[1] = ((slice_view *)&local_50)->_4_4_;
    *(double *)(puVar7 + 2) = uStack_48;
    *(double *)(puVar7 + 4) = uStack_40;
    if (local_14 != (void *)0x0) {
      operator_delete__(local_14);
    }
    local_14 = (void *)0x0;
    local_18 = ((void *)(0x00919488u));
  }
  if (local_7c != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_7c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007e2810 007e2810_GetMaxRangeAgainstThis_km ====
// decompiled by BatchDecomp @ 007e2810 name=GetMaxRangeAgainstThis_km conv=__thiscall body=543

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall SpacecraftTargeting__GetMaxRangeAgainstThis_km(class
   util::WeakPtr<class Body>)const  */

double __thiscall
SpacecraftTargeting__GetMaxRangeAgainstThis_km(SpacecraftTargeting *this,undefined4 param_2,ReferenceController *param_3)

{
  undefined4 stack0xfffffffc;
  double dVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  double *pdVar6;
  float10 extraout_ST0;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined **local_5c;
  void *local_58;
  undefined4 local_4c;
  double local_48;
  undefined **local_40;
  void *local_3c;
  int local_38;
  undefined4 local_34;
  Darray_L_double_G_ local_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_20,1);
  util__Darray_class_util__WeakPtr_class_Body_____Add((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_20,(WeakPtr_L_class_Body_G_ *)&param_2);
  piVar3 = (int *)GetRangesAgainstThis_km
                            (this,(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_5c);
  local_40 = ((void *)(0x009194a4u));
  local_3c = (void *)0x0;
  local_38 = 0;
  local_34 = 0;
  local_30._pad_0x0_0 = (int)((void *)(0x0091da54u));
  local_30.Data = (double *)0x0;
  local_30.Size = 0;
  local_30.Capacity = 0;
  local_10 = 0;
  iVar4 = (**(code **)(*piVar3 + 0xc))();
  if (local_10 < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*piVar3)(&local_10);
      iVar4 = local_38;
      local_c = local_38 + 1;
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&local_40,&local_c);
      bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&local_40,iVar4);
      iVar4 = local_30.Size;
      if (bVar2) {
        *(undefined4 *)((int)local_3c + local_38 * 4 + -4) = *puVar5;
      }
      local_c = local_30.Size + 1;
      util__Darray_double___SetSize(&local_30,&local_c);
      bVar2 = util__Darray_double___CheckSize(&local_30,iVar4);
      if (bVar2) {
        local_30.Data[local_30.Size + -1] = *(double *)(puVar5 + 2);
      }
      local_10 = local_10 + 1;
      iVar4 = (**(code **)(*piVar3 + 0xc))();
    } while (local_10 < iVar4);
  }
  iVar4 = (**(code **)(local_30._pad_0x0_0 + 0xc))();
  if (iVar4 == 0) {
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    local_4c = 0;
    pdVar6 = (double *)(**(code **)local_30._pad_0x0_0)(&local_4c);
    local_c = 0;
    local_48 = *pdVar6;
    iVar4 = (**(code **)(local_30._pad_0x0_0 + 0xc))();
    if (local_c < iVar4) {
      do {
        pdVar6 = (double *)(**(code **)local_30._pad_0x0_0)(&local_c);
        uVar7 = *(undefined4 *)&local_48;
        uVar8 = *(undefined4 *)((char *)&local_48 + 4);
        dVar1 = *pdVar6;
        if (local_48 <= dVar1) {
          uVar7 = *(undefined4 *)&dVar1;
          uVar8 = *(undefined4 *)((char *)&dVar1 + 4);
        }
        local_c = local_c + 1;
        local_48 = (double)CONCAT44(uVar8,uVar7);
        iVar4 = (**(code **)(local_30._pad_0x0_0 + 0xc))();
      } while (local_c < iVar4);
    }
    uVar7 = *(undefined4 *)&local_48;
    uVar8 = *(undefined4 *)((char *)&local_48 + 4);
  }
  local_48 = (double)CONCAT44(uVar8,uVar7);
  local_30._pad_0x0_0 = (int)((void *)(0x0091da54u));
  if (local_30.Data != (double *)0x0) {
    operator_delete__(local_30.Data);
  }
  local_30.Data = (double *)0x0;
  local_30._pad_0x0_0 = (int)((void *)(0x00919488u));
  local_40 = ((void *)(0x009194a4u));
  if (local_3c != (void *)0x0) {
    operator_delete__(local_3c);
  }
  local_3c = (void *)0x0;
  local_40 = ((void *)(0x00919488u));
  local_5c = ((void *)(0x0091e0dcu));
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  local_58 = (void *)0x0;
  local_5c = ((void *)(0x00919488u));
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_20);
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00007e33a0 007e33a0_GetWeaponRangeInfoAgainstAllTargets ====
extern undefined4 FUN_007ddae0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_007de380(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007e33a0 name=GetWeaponRangeInfoAgainstAllTargets conv=__thiscall body=500

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Str<char> __thiscall
   SpacecraftTargeting__GetWeaponRangeInfoAgainstAllTargets(class util::WeakPtr<struct
   WeaponCompartment>)const  */

Str_L_char_G_ * __thiscall
SpacecraftTargeting__GetWeaponRangeInfoAgainstAllTargets(SpacecraftTargeting *this,Str_L_char_G_ *__return_storage_ptr__,undefined4 param_3,
          ReferenceController *param_4)

{
  undefined4 stack0xfffffffc;
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uStack_44;
  undefined4 local_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  Str_L_char_G_ local_28;
  undefined **local_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  uint uStack_10;
  undefined1 local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  FindAllViableTargets_Memoize(this);
  if ((this->FindAllViableTargets_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment((Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_38,
             (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
             &this->FindAllViableTargets_MemoizedValue);
  uVar4 = uStack_30;
  if ((int)uStack_30 < 1) {
    __return_storage_ptr__->Data = (char *)0x0;
    __return_storage_ptr__->Capacity = 0;
    __return_storage_ptr__->Length = 0;
  }
  else {
    local_1c = ((void *)(0x0091e0dcu));
    puStack_18 = (undefined4 *)0x0;
    uStack_14 = 0;
    uStack_10 = uStack_30;
    if ((int)uStack_30 < 0x40000000) {
      puStack_18 = (undefined4 *)
                   operator_new__(-(uint)((int)((ulonglong)uStack_30 * 0x10 >> 0x20) != 0) |
                                  (uint)((ulonglong)uStack_30 * 0x10));
      puVar1 = puStack_18;
      if (puStack_18 == (undefined4 *)0x0) {
        puStack_18 = (undefined4 *)0x0;
      }
      else {
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar1 = 0;
          *(undefined8 *)(puVar1 + 2) = 0;
          puVar1 = puVar1 + 4;
        }
      }
      iVar3 = 0;
      if (0 < (int)uStack_10) {
        iVar2 = 0;
        do {
          iVar3 = iVar3 + 1;
          puVar1 = (undefined4 *)(iVar2 + (int)puStack_18);
          *puVar1 = 0;
          puVar1[1] = uStack_44;
          puVar1[2] = 0;
          puVar1[3] = 0;
          iVar2 = iVar2 + 0x10;
        } while (iVar3 < (int)uStack_10);
      }
    }
    else {
      uStack_10 = 0;
    }
    FUN_007de380(&local_38,this,&local_1c);
    local_28.Length = 0;
    local_28.Data = (char *)0x0;
    local_28.Capacity = 0;
    local_9 = 1;
    FUN_007ddae0(&local_1c,CONCAT44(&local_9,&param_3),&local_28);
    util__Str_char___Str_char(__return_storage_ptr__,&local_28);
    if (local_28.Data != (char *)0x0) {
      operator_delete__(local_28.Data);
      ((slice_view *)&local_28)->_0_8_ = ((slice_view *)&local_28)->_0_8_ & 0xffffffff00000000;
    }
    local_1c = ((void *)(0x0091e0dcu));
    if (puStack_18 != (undefined4 *)0x0) {
      operator_delete__(puStack_18);
    }
    puStack_18 = (undefined4 *)0x0;
    local_1c = ((void *)(0x00919488u));
  }
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_38);
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 00007e9180 007e9180_DetermineNavigationThrusters ====
extern undefined4 FUN_007e88d0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007e9180 name=DetermineNavigationThrusters conv=__cdecl body=831

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* class util::Darray<struct ThrusterLayout> __cdecl Maneuvering__DetermineNavigationThrusters(class
   util::WeakPtr<class SpacecraftComponent>,struct util::Quaternion<double>,struct
   Vec3_L_double_G_) */

void __cdecl
Maneuvering__DetermineNavigationThrusters(Darray_L_struct_ThrusterLayout_G_ *param_1,SpacecraftComponent *param_2,
          ReferenceController *param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,
          undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,
          undefined4 param_11,undefined4 param_12,undefined4 param_13,undefined4 param_14,
          undefined4 param_15,undefined8 param_16)

{
  undefined4 stack0xfffffffc;
  Quaternion_L_double_G_ QVar1;
  bool bVar2;
  char cVar3;
  Vec3_L_double_G_ *pVVar4;
  int iVar5;
  undefined4 uVar6;
  Maybe_L_double_G_ *pMVar7;
  undefined4 unaff_EDI;
  SpacecraftComponent *pSVar8;
  ReferenceController *pRVar9;
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
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  Vec3_L_double_G_ *pVStack_d8;
  double *pdStack_d4;
  Vec3_L_double_G_ *pVStack_d0;
  undefined4 *local_cc;
  double *pdStack_c8;
  int local_c0;
  undefined8 local_bc;
  Quaternion_L_double_G_ local_b4;
  Vec3_L_double_G_ local_94;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  double local_6c;
  Vec3_L_double_G_ local_64;
  undefined4 *local_4c;
  Vec3_L_double_G_ *pVStack_48;
  double *pdStack_44;
  Vec3_L_double_G_ *pVStack_40;
  undefined8 local_3c;
  undefined1 *local_34;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  int local_10;
  undefined1 local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_bc = CraftBlueprint__GetThrustAngleThreshold_radians();
  local_18 = util__Cos((double *)&local_bc);
  if ((param_3 != (ReferenceController *)0x0) &&
     (bVar2 = util__ReferenceController__IsDataStillValid(param_3), !bVar2)) {
    param_2 = (SpacecraftComponent *)0x0;
  }
  SpacecraftComponent__GetDesiredThrustDirection_Memoize(param_2);
  if ((param_2->GetDesiredOrientation_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_7c = *(undefined4 *)&(param_2->GetDesiredOrientation_MemoizedValue).Data.Y;
  uStack_78 = *(undefined4 *)((int)&(param_2->GetDesiredOrientation_MemoizedValue).Data.Y + 4);
  uStack_74 = *(undefined4 *)&(param_2->GetDesiredOrientation_MemoizedValue).Data.Z;
  uStack_70 = *(undefined4 *)((int)&(param_2->GetDesiredOrientation_MemoizedValue).Data.Z + 4);
  local_6c = (param_2->GetDesiredOrientation_MemoizedValue).Data.W;
  uVar21 = (undefined4)param_16;
  uVar22 = *(undefined4 *)((char *)&param_16 + 4);
  pSVar8 = param_2;
  pRVar9 = param_3;
  uVar6 = param_4;
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
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_3);
  }
  GetTargetAngularVelocity_radians__s
            (&local_64,pSVar8,pRVar9,uVar6,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15,uVar16,uVar17,
             uVar18,uVar19,uVar20,uVar21,uVar22);
  if ((param_3 != (ReferenceController *)0x0) &&
     (bVar2 = util__ReferenceController__IsDataStillValid(param_3), !bVar2)) {
    param_2 = (SpacecraftComponent *)0x0;
  }
  ((slice_view *)&QVar1.X)->_4_4_ = param_6;
  ((slice_view *)&QVar1.X)->_0_4_ = param_5;
  ((slice_view *)&QVar1.Y)->_0_4_ = param_7;
  ((slice_view *)&QVar1.Y)->_4_4_ = param_8;
  ((slice_view *)&QVar1.Z)->_0_4_ = param_9;
  ((slice_view *)&QVar1.Z)->_4_4_ = param_10;
  ((slice_view *)&QVar1.W)->_0_4_ = param_11;
  ((slice_view *)&QVar1.W)->_4_4_ = unaff_EDI;
  SpacecraftComponent__GetRotateToTarget(param_2,&local_b4,QVar1);
  if (local_b4.W <= /*0000000000000000*/0.0) {
    local_b4.W = /*0000000000000000*/0.0;
  }
  if (/*3ff0000000000000*/1.0 <= local_b4.W) {
    local_b4.W = /*3ff0000000000000*/1.0;
  }
  local_bc = util__DetermineNavigationThrusters(local_b4.W);
  local_bc = local_bc + local_bc;
  local_9 = local_bc < /*3fb015bf9217271a*/0.06283185307179587;
  util__Vec3_double___SafeNormalized(&local_64,&local_94);
  if ((param_3 != (ReferenceController *)0x0) &&
     (bVar2 = util__ReferenceController__IsDataStillValid(param_3), !bVar2)) {
    param_2 = (SpacecraftComponent *)0x0;
  }
  if (((ReferenceController *)param_2->_pad_0x0_0 != (ReferenceController *)0x0) &&
     (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2->_pad_0x0_0)
     , !bVar2)) {
    param_2->_pad_0x0_0 = 0;
  }
  pVVar4 = Body__GetCenterOfMass_km((Body *)param_2->_pad_0x0_0,(Vec3_L_double_G_ *)&pVStack_d8);
  local_20 = pVVar4->Z * /*408f400000000000*/1000.0;
  local_30 = pVVar4->X * /*408f400000000000*/1000.0;
  local_28 = pVVar4->Y * /*408f400000000000*/1000.0;
  if ((param_3 != (ReferenceController *)0x0) &&
     (bVar2 = util__ReferenceController__IsDataStillValid(param_3), !bVar2)) {
    param_2 = (SpacecraftComponent *)0x0;
  }
  SpacecraftComponent__GetThrusterLayouts_Memoize(param_2);
  pMVar7 = &param_2->GetDryMass_kg_MemoizedValue;
  if (*(char *)&(param_2->GetReactionMass_kg_MemoizedValue).Data == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_4c = &param_4;
  pVStack_d8 = &local_64;
  pdStack_d4 = &local_30;
  pVStack_d0 = &local_94;
  local_cc = &local_7c;
  pdStack_c8 = &local_18;
  local_34 = &local_9;
  local_3c = CONCAT44(pdStack_c8,local_cc);
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  pVStack_48 = pVStack_d8;
  pdStack_44 = pdStack_d4;
  pVStack_40 = pVStack_d0;
  iVar5 = (**(code **)(*(int *)&pMVar7->Data + 0xc))();
  util__Darray_struct_ThrusterLayout___Darray_struct_ThrusterLayout__o2(param_1,iVar5);
  local_10 = 0;
  iVar5 = (**(code **)(*(int *)&pMVar7->Data + 0xc))();
  if (local_10 < iVar5) {
    do {
      uVar6 = (*(code *)**(undefined4 **)&pMVar7->Data)(&local_10);
      local_bc = (double)CONCAT44(uVar6,(undefined4)local_bc);
      cVar3 = FUN_007e88d0(uVar6);
      if (cVar3 != '\0') {
        iVar5 = *(int *)(param_1 + 8);
        local_c0 = iVar5 + 1;
        util__Darray_struct_ThrusterLayout___SetSize(param_1,&local_c0);
        bVar2 = util__Darray_struct_ThrusterLayout___CheckSize(param_1,iVar5);
        if (bVar2) {
          ThrusterLayout__operator((ThrusterLayout *)
                     (*(int *)(param_1 + 8) * 0x68 + *(int *)(param_1 + 4) + -0x68),((slice_view *)&local_bc)->_4_4_);
        }
      }
      local_10 = local_10 + 1;
      iVar5 = (**(code **)(*(int *)&pMVar7->Data + 0xc))();
    } while (local_10 < iVar5);
  }
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007f4590 007f4590_FUN_007f4590 ====
void FUN_007f4590(Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *param_1,int *param_2);

// decompiled by BatchDecomp @ 007f4590 name=FUN_007f4590 conv=unknown body=549

void FUN_007f4590(Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *param_1,int *param_2)

{
  undefined4 stack0xfffffffc;
  ReferenceController *pRVar1;
  uint *puVar2;
  ulong uVar3;
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  ReferenceControllerRegistry *pRVar7;
  SharedPtr_L_struct_UIWidget_G_ *pSVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar5 = (**(code **)(*param_2 + 0xc))();
  *(undefined ***)param_1 = ((void *)(0x0091d1bcu));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar5;
  if (((int)uVar5 < 0) || (0x3fffffff < (int)uVar5)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar5) {
    uVar11 = -(uint)((int)((ulonglong)uVar5 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 8);
    puVar6 = (uint *)operator_new__(-(uint)(0xfffffffb < uVar11) | uVar11 + 4);
    if (puVar6 == (uint *)0x0) {
      puVar6 = (uint *)0x0;
    }
    else {
      *puVar6 = uVar5;
      puVar6 = puVar6 + 1;
      puVar2 = puVar6;
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = puVar2 + 2;
      }
    }
    iVar12 = 0;
    *(uint **)(param_1 + 4) = puVar6;
    if (0 < *(int *)(param_1 + 0xc)) {
      do {
        iVar10 = *(int *)(param_1 + 4);
        pRVar1 = *(ReferenceController **)(iVar10 + 4 + iVar12 * 8);
        piVar13 = *(int **)(iVar10 + iVar12 * 8);
        *(undefined4 *)(iVar10 + iVar12 * 8) = 0;
        *(undefined4 *)(iVar10 + 4 + iVar12 * 8) = 0;
        if ((pRVar1 != (ReferenceController *)0x0) &&
           (bVar4 = util__ReferenceController__ReleaseStrongReference(pRVar1), bVar4)) {
          if (piVar13 != (int *)0x0) {
            (**(code **)(*piVar13 + 4))(1);
          }
          pRVar7 = util__ReferenceControllerRegistry__Get();
          util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar7,piVar13);
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(param_1 + 0xc));
    }
  }
  local_c = 0;
  iVar12 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar12) {
    iVar12 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
    do {
      pSVar8 = (SharedPtr_L_struct_UIWidget_G_ *)(**(code **)*param_2)(&local_c);
      piVar13 = *(int **)pSVar8;
      pRVar1 = *(ReferenceController **)(pSVar8 + 4);
      if (pRVar1 != (ReferenceController *)0x0) {
        util__ReferenceController__AddStrongReference(pRVar1);
      }
      if ((*(int *)(iVar12 + 4) <
           cde_l2_00987790__thread_safe_static_guard_0__) &&
         (_Init_thread_header(&cde_l2_00987790__thread_safe_static_guard_0__),
         cde_l2_00987790__thread_safe_static_guard_0__ == -1)) {
        cde_l2_0098778c_ID =
             util__GetHash("Body");
        _Init_thread_footer(&cde_l2_00987790__thread_safe_static_guard_0__);
      }
      uVar3 = cde_l2_0098778c_ID;
      uVar9 = (**(code **)*piVar13)();
      if ((pRVar1 != (ReferenceController *)0x0) &&
         (bVar4 = util__ReferenceController__ReleaseStrongReference(pRVar1), bVar4)) {
        if (piVar13 != (int *)0x0) {
          (**(code **)(*piVar13 + 4))(1);
        }
        pRVar7 = util__ReferenceControllerRegistry__Get();
        util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar7,piVar13);
      }
      if (uVar9 == uVar3) {
        util__Darray_class_util__SharedPtr_struct_UIWidget_____Add(param_1,pSVar8);
      }
      local_c = local_c + 1;
      iVar10 = (**(code **)(*param_2 + 0xc))();
    } while (local_c < iVar10);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007f7f10 007f7f10_operator_ ====
// decompiled by BatchDecomp @ 007f7f10 name=operator= conv=__thiscall body=472

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct TacticalManager & __thiscall
   TacticalManager__OptimizationStructures__operator_(struct TacticalManager
   &&) */

OptimizationStructures * __thiscall
TacticalManager__OptimizationStructures__operator_(OptimizationStructures *this,OptimizationStructures *param_1)

{
  ReferenceController *pRVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  OptimizationStructures *pOVar5;
  int iVar6;
  WeakPtr_L_DebrisComponent_G_ *pWVar7;
  WeakPtr_L_CapitalShipComponent_G_ *pWVar8;
  WeakPtr_L_DebrisComponent_G_ *pWVar9;
  WeakPtr_L_CapitalShipComponent_G_ *pWVar10;
  
  pOVar5 = param_1;
  param_1 = (OptimizationStructures *)(**(code **)(*(int *)&param_1->DebrisComponents + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)this,(int *)&param_1);
  iVar6 = (**(code **)(*(int *)&pOVar5->DebrisComponents + 0xc))();
  if (iVar6 == 0) {
    (**(code **)(*(int *)&this->DebrisComponents + 0x10))();
  }
  else {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____CheckSizeDestructive((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)this);
    pWVar7 = (pOVar5->DebrisComponents).Data;
    pWVar9 = (this->DebrisComponents).Data;
    if (pWVar7 != pWVar7 + (pOVar5->DebrisComponents).Size) {
      do {
        param_1 = (OptimizationStructures *)pWVar9->Controller;
        pWVar9->Pointer = pWVar7->Pointer;
        pRVar1 = pWVar7->Controller;
        pWVar9->Controller = pRVar1;
        if (pRVar1 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar1);
        }
        if (param_1 != (OptimizationStructures *)0x0) {
          util__ReferenceController__ReleaseWeakReference((ReferenceController *)param_1);
        }
        pWVar7 = pWVar7 + 1;
        pWVar9 = pWVar9 + 1;
      } while (pWVar7 != (pOVar5->DebrisComponents).Data + (pOVar5->DebrisComponents).Size);
    }
  }
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&this->SpacecraftComponents,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &pOVar5->SpacecraftComponents);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->EnemySpacecraftComponents,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &pOVar5->EnemySpacecraftComponents);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->AlliedSpacecraftComponents,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &pOVar5->AlliedSpacecraftComponents);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->NonEnemySpacecraftComponents,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &pOVar5->NonEnemySpacecraftComponents);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->NonAlliedSpacecraftComponents,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &pOVar5->NonAlliedSpacecraftComponents);
  param_1 = (OptimizationStructures *)
            (**(code **)(*(int *)&pOVar5->CapitalShipComponents + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&this->CapitalShipComponents,
             (int *)&param_1);
  iVar6 = (**(code **)(*(int *)&pOVar5->CapitalShipComponents + 0xc))();
  if (iVar6 == 0) {
    (**(code **)(*(int *)&this->CapitalShipComponents + 0x10))();
  }
  else {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____CheckSizeDestructive((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->CapitalShipComponents);
    pWVar8 = (pOVar5->CapitalShipComponents).Data;
    pWVar10 = (this->CapitalShipComponents).Data;
    if (pWVar8 != pWVar8 + (pOVar5->CapitalShipComponents).Size) {
      do {
        param_1 = (OptimizationStructures *)pWVar10->Controller;
        pWVar10->Pointer = pWVar8->Pointer;
        pRVar1 = pWVar8->Controller;
        pWVar10->Controller = pRVar1;
        if (pRVar1 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar1);
        }
        if (param_1 != (OptimizationStructures *)0x0) {
          util__ReferenceController__ReleaseWeakReference((ReferenceController *)param_1);
        }
        pWVar8 = pWVar8 + 1;
        pWVar10 = pWVar10 + 1;
      } while (pWVar8 != (pOVar5->CapitalShipComponents).Data + (pOVar5->CapitalShipComponents).Size
              );
    }
  }
  uVar2 = *(undefined4 *)((int)&(pOVar5->BattleCenter_km).X + 4);
  uVar3 = *(undefined4 *)&(pOVar5->BattleCenter_km).Y;
  uVar4 = *(undefined4 *)((int)&(pOVar5->BattleCenter_km).Y + 4);
  *(undefined4 *)&(this->BattleCenter_km).X = *(undefined4 *)&(pOVar5->BattleCenter_km).X;
  *(undefined4 *)((int)&(this->BattleCenter_km).X + 4) = uVar2;
  *(undefined4 *)&(this->BattleCenter_km).Y = uVar3;
  *(undefined4 *)((int)&(this->BattleCenter_km).Y + 4) = uVar4;
  (this->BattleCenter_km).Z = (pOVar5->BattleCenter_km).Z;
  uVar2 = *(undefined4 *)((int)&(pOVar5->BattleVelocity_km__s).X + 4);
  uVar3 = *(undefined4 *)&(pOVar5->BattleVelocity_km__s).Y;
  uVar4 = *(undefined4 *)((int)&(pOVar5->BattleVelocity_km__s).Y + 4);
  *(undefined4 *)&(this->BattleVelocity_km__s).X = *(undefined4 *)&(pOVar5->BattleVelocity_km__s).X;
  *(undefined4 *)((int)&(this->BattleVelocity_km__s).X + 4) = uVar2;
  *(undefined4 *)&(this->BattleVelocity_km__s).Y = uVar3;
  *(undefined4 *)((int)&(this->BattleVelocity_km__s).Y + 4) = uVar4;
  (this->BattleVelocity_km__s).Z = (pOVar5->BattleVelocity_km__s).Z;
  this->BattleRadius_km = pOVar5->BattleRadius_km;
  uVar2 = *(undefined4 *)((int)&(pOVar5->CollisionBounds_km).Lower.X + 4);
  uVar3 = *(undefined4 *)&(pOVar5->CollisionBounds_km).Lower.Y;
  uVar4 = *(undefined4 *)((int)&(pOVar5->CollisionBounds_km).Lower.Y + 4);
  *(undefined4 *)&(this->CollisionBounds_km).Lower.X =
       *(undefined4 *)&(pOVar5->CollisionBounds_km).Lower.X;
  *(undefined4 *)((int)&(this->CollisionBounds_km).Lower.X + 4) = uVar2;
  *(undefined4 *)&(this->CollisionBounds_km).Lower.Y = uVar3;
  *(undefined4 *)((int)&(this->CollisionBounds_km).Lower.Y + 4) = uVar4;
  uVar2 = *(undefined4 *)((int)&(pOVar5->CollisionBounds_km).Lower.Z + 4);
  uVar3 = *(undefined4 *)&(pOVar5->CollisionBounds_km).Upper.X;
  uVar4 = *(undefined4 *)((int)&(pOVar5->CollisionBounds_km).Upper.X + 4);
  *(undefined4 *)&(this->CollisionBounds_km).Lower.Z =
       *(undefined4 *)&(pOVar5->CollisionBounds_km).Lower.Z;
  *(undefined4 *)((int)&(this->CollisionBounds_km).Lower.Z + 4) = uVar2;
  *(undefined4 *)&(this->CollisionBounds_km).Upper.X = uVar3;
  *(undefined4 *)((int)&(this->CollisionBounds_km).Upper.X + 4) = uVar4;
  uVar2 = *(undefined4 *)((int)&(pOVar5->CollisionBounds_km).Upper.Y + 4);
  uVar3 = *(undefined4 *)&(pOVar5->CollisionBounds_km).Upper.Z;
  uVar4 = *(undefined4 *)((int)&(pOVar5->CollisionBounds_km).Upper.Z + 4);
  *(undefined4 *)&(this->CollisionBounds_km).Upper.Y =
       *(undefined4 *)&(pOVar5->CollisionBounds_km).Upper.Y;
  *(undefined4 *)((int)&(this->CollisionBounds_km).Upper.Y + 4) = uVar2;
  *(undefined4 *)&(this->CollisionBounds_km).Upper.Z = uVar3;
  *(undefined4 *)((int)&(this->CollisionBounds_km).Upper.Z + 4) = uVar4;
  return this;
}


//==== 00008182a0 008182a0_GetModuleButtonVerboseTooltip ====
// decompiled by BatchDecomp @ 008182a0 name=GetModuleButtonVerboseTooltip conv=__thiscall body=558

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: class util::Str<char> __thiscall ModuleUI__GetModuleButtonVerboseTooltip(void)const  */

Str_L_char_G_ * __thiscall
ModuleUI__GetModuleButtonVerboseTooltip(ModuleUI *this,Str_L_char_G_ *__return_storage_ptr__)

{
  char *pcVar1;
  bool bVar2;
  char cVar3;
  Module *pMVar4;
  int *piVar5;
  int iVar6;
  LocStr *pLVar7;
  Str_L_char_G_ *pSVar8;
  Str_L_char_G_ *pSVar9;
  byte bVar10;
  void *local_84[3];
  void *local_78;
  void *local_6c[3];
  void *local_60;
  Str_L_char_G_ local_54;
  Str_L_char_G_ local_48;
  Str_L_char_G_ local_3c;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_30[4];
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  undefined4 local_8;
  
  local_8 = 0;
  bVar2 = IsEnemyModule(this);
  if (bVar2) {
LAB_008182e0:
    piVar5 = (int *)GetCompartments(this);
    iVar6 = (**(code **)(*piVar5 + 0xc))();
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_30);
    if (0 < iVar6) {
      bVar2 = IsEnemyModule(this);
      if (bVar2) {
        util__Str_char___Str_char__o5(&local_48,"TargetModules Tooltip");
        local_20.Data = (char *)0x0;
        pLVar7 = (LocStr *)local_84;
        local_20.Capacity = 0;
        pSVar8 = &local_48;
        local_20.Length = 0;
        pSVar9 = &local_20;
        bVar10 = 0x8e;
      }
      else {
        util__Str_char___Str_char__o5(&local_3c,"ActivateModules Tooltip");
        local_14.Data = (char *)0x0;
        pLVar7 = (LocStr *)local_6c;
        local_14.Capacity = 0;
        pSVar8 = &local_3c;
        local_14.Length = 0;
        pSVar9 = &local_14;
        bVar10 = 0xf0;
      }
      pLVar7 = (LocStr *)util__LocStr__LocStr(pLVar7,pSVar8,pSVar9);
      pSVar8 = util__LocStr__operator__o3(pLVar7);
      pSVar8 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_54,pSVar8);
      goto LAB_0081839d;
    }
  }
  else {
    bVar2 = IsAlliedModule(this);
    if (bVar2) {
      pMVar4 = GetModuleType(this);
      cVar3 = (**(code **)(*(int *)pMVar4 + 0x10c))();
      if (cVar3 != '\0') goto LAB_008182e0;
    }
  }
  pSVar8 = &local_2c;
  local_2c.Data = (char *)0x0;
  local_2c.Capacity = 0;
  local_2c.Length = 0;
  bVar10 = 1;
LAB_0081839d:
  pcVar1 = local_2c.Data;
  util__Str_char___Str_char(__return_storage_ptr__,pSVar8);
  if ((char)bVar10 < '\0') {
    bVar10 = bVar10 & 0x7f;
    if (local_54.Data != (char *)0x0) {
      operator_delete__(local_54.Data);
      local_54.Data = (char *)0x0;
    }
  }
  if ((bVar10 & 0x40) != 0) {
    bVar10 = bVar10 & 0xbf;
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_60 = (void *)0x0;
    }
    if (local_6c[0] != (void *)0x0) {
      operator_delete__(local_6c[0]);
      local_6c[0] = (void *)0x0;
    }
  }
  if ((bVar10 & 0x20) != 0) {
    bVar10 = bVar10 & 0xdf;
    if (local_14.Data != (char *)0x0) {
      operator_delete__(local_14.Data);
      local_14.Data = (char *)0x0;
    }
  }
  if ((bVar10 & 0x10) != 0) {
    bVar10 = bVar10 & 0xef;
    if (local_3c.Data != (char *)0x0) {
      operator_delete__(local_3c.Data);
      local_3c.Data = (char *)0x0;
    }
  }
  if ((bVar10 & 8) != 0) {
    bVar10 = bVar10 & 0xf7;
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
      local_78 = (void *)0x0;
    }
    if (local_84[0] != (void *)0x0) {
      operator_delete__(local_84[0]);
      local_84[0] = (void *)0x0;
    }
  }
  if ((bVar10 & 4) != 0) {
    bVar10 = bVar10 & 0xfb;
    if (local_20.Data != (char *)0x0) {
      operator_delete__(local_20.Data);
      local_20.Data = (char *)0x0;
    }
  }
  if ((bVar10 & 2) != 0) {
    bVar10 = bVar10 & 0xfd;
    if (local_48.Data != (char *)0x0) {
      operator_delete__(local_48.Data);
      local_48.Data = (char *)0x0;
    }
  }
  if ((pcVar1 != (char *)0x0) && ((bVar10 & 1) != 0)) {
    operator_delete__(pcVar1);
  }
  return __return_storage_ptr__;
}


//==== 0000818f00 00818f00_GetOutOfRangeString ====
// decompiled by BatchDecomp @ 00818f00 name=GetOutOfRangeString conv=__thiscall body=465

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Str<char> __thiscall ModuleUI__GetOutOfRangeString(void)const  */

Str_L_char_G_ * __thiscall
ModuleUI__GetOutOfRangeString(ModuleUI *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xfffffffc;
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  SpacecraftTargeting *pSVar6;
  Str_L_char_G_ *pSVar7;
  void **ppvVar8;
  undefined4 uVar9;
  ReferenceController *pRVar10;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_4c[16];
  Str_L_char_G_ local_3c;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_30[4];
  void *local_2c[3];
  undefined8 local_20;
  Str_L_char_G_ local_18;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar2 = (int *)GetCompartments(this);
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_30);
  if (iVar3 < 1) {
    __return_storage_ptr__->Data = (char *)0x0;
    __return_storage_ptr__->Capacity = 0;
    __return_storage_ptr__->Length = 0;
  }
  else {
    local_20 = 0;
    piVar2 = (int *)GetCompartments(this);
    puVar4 = (undefined8 *)(**(code **)(*piVar2 + 0x20))();
    local_20 = *puVar4;
    if (*(ReferenceController **)((int)puVar4 + 4) != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(*(ReferenceController **)((int)puVar4 + 4));
    }
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_30);
    local_18.Data = (char *)0x0;
    local_18.Capacity = 0;
    local_18.Length = 0;
    piVar2 = (int *)ShipGroupUI__GetShipsInGroup((ShipGroupUI *)this);
    local_c = 0;
    iVar3 = (**(code **)(*piVar2 + 0xc))();
    if (local_c < iVar3) {
      do {
        puVar5 = (undefined4 *)(**(code **)*piVar2)(&local_c);
        if (local_18.Length != 0) {
          util__Str_char___Str_char__o5(&local_3c,"\n");
          util__Str_char___operator__o10(&local_18,&local_3c);
          if (local_3c.Data != (char *)0x0) {
            operator_delete__(local_3c.Data);
            local_3c.Data = (char *)0x0;
          }
        }
        uVar9 = (undefined4)local_20;
        pRVar10 = ((slice_view *)&local_20)->_4_4_;
        if (((slice_view *)&local_20)->_4_4_ != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(((slice_view *)&local_20)->_4_4_);
        }
        if ((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) {
          bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]);
          if (!bVar1) {
            *puVar5 = 0;
          }
        }
        ppvVar8 = local_2c;
        pSVar6 = SpacecraftComponent__GetTargeting((SpacecraftComponent *)*puVar5);
        pSVar7 = SpacecraftTargeting__GetWeaponRangeInfoAgainstAllTargets(pSVar6,ppvVar8,uVar9,pRVar10);
        util__Str_char___operator__o10(&local_18,pSVar7);
        if (local_2c[0] != (void *)0x0) {
          operator_delete__(local_2c[0]);
          local_2c[0] = (void *)0x0;
        }
        local_c = local_c + 1;
        iVar3 = (**(code **)(*piVar2 + 0xc))();
      } while (local_c < iVar3);
    }
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_4c);
    util__Str_char___Str_char(__return_storage_ptr__,&local_18);
    if (local_18.Data != (char *)0x0) {
      operator_delete__(local_18.Data);
      ((slice_view *)&local_18)->_0_8_ = ((slice_view *)&local_18)->_0_8_ & 0xffffffff00000000;
    }
    if (((slice_view *)&local_20)->_4_4_ != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_20)->_4_4_);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 00008197a0 008197a0_GetTitleLabel ====
// decompiled by BatchDecomp @ 008197a0 name=GetTitleLabel conv=__thiscall body=940

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: class util::Str<char> __thiscall ModuleUI__GetTitleLabel(void)const  */

Str_L_char_G_ * __thiscall ModuleUI__GetTitleLabel(ModuleUI *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xfffffffc;
  ReferenceController *pRVar1;
  bool bVar2;
  LocStr *this_00;
  Str_L_char_G_ *pSVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  Module *this_01;
  uint uVar7;
  char *pcVar8;
  void *local_68[2];
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_60[4];
  Str_L_char_G_ local_5c;
  Str_L_char_G_ local_50;
  Str_L_char_G_ *local_44;
  Str_L_char_G_ local_40;
  Str_L_char_G_ local_34;
  uint local_28;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_24[4];
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_44 = __return_storage_ptr__;
  local_28 = 0;
  local_50.Data = (char *)0x0;
  local_50.Capacity = 0;
  local_50.Length = 0;
  bVar2 = IsAlliedModule(this);
  if (((bVar2) && ((this->TargetCompartment).Pointer != (ModuleCompartment *)0x0)) &&
     (pRVar1 = (this->TargetCompartment).Controller, pRVar1 != (ReferenceController *)0x0)) {
    bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (!bVar2) goto LAB_0081986d;
    bVar2 = AreAllCompartmentsDamaged(this);
    if (!bVar2) goto LAB_0081986d;
    util__Str_char___Str_char__o5(&local_34,"DamagedModuleTitle");
    local_20.Data = (char *)0x0;
    local_20.Capacity = 0;
    local_20.Length = 0;
    this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)local_68,&local_34,&local_20);
    pSVar3 = util__LocStr__operator__o3(this_00);
    if (pSVar3->Capacity < 1) {
      pcVar8 = "";
    }
    else {
      pcVar8 = pSVar3->Data;
    }
    pSVar3 = util__Printf(&local_40," [%s]",pcVar8);
    uVar7 = 0xf;
    pcVar8 = local_14.Data;
  }
  else {
LAB_0081986d:
    pcVar8 = (char *)0x0;
    pSVar3 = &local_14;
    local_14.Data = (char *)0x0;
    local_14.Capacity = 0;
    local_14.Length = 0;
    uVar7 = 0x10;
  }
  util__Str_char___Str_char(&local_50,pSVar3);
  if (((uVar7 & 0x10) != 0) && (uVar7 = uVar7 & 0xffffffef, pcVar8 != (char *)0x0)) {
    operator_delete__(pcVar8);
  }
  if ((uVar7 & 8) != 0) {
    uVar7 = uVar7 & 0xfffffff7;
    if (local_40.Data != (char *)0x0) {
      operator_delete__(local_40.Data);
      ((slice_view *)&local_40)->_0_8_ = ((slice_view *)&local_40)->_0_8_ & 0xffffffff00000000;
    }
  }
  if ((uVar7 & 4) != 0) {
    uVar7 = uVar7 & 0xfffffffb;
    if (local_5c.Data != (char *)0x0) {
      operator_delete__(local_5c.Data);
      local_5c.Data = (char *)0x0;
    }
    if (local_68[0] != (void *)0x0) {
      operator_delete__(local_68[0]);
      local_68[0] = (void *)0x0;
    }
  }
  if ((uVar7 & 2) != 0) {
    uVar7 = uVar7 & 0xfffffffd;
    if (local_20.Data != (char *)0x0) {
      operator_delete__(local_20.Data);
      ((slice_view *)&local_20)->_0_8_ = ((slice_view *)&local_20)->_0_8_ & 0xffffffff00000000;
    }
  }
  if ((uVar7 & 1) != 0) {
    uVar7 = uVar7 & 0xfffffffe;
    if (local_34.Data != (char *)0x0) {
      operator_delete__(local_34.Data);
    }
  }
  local_40.Data = (char *)0x0;
  local_40.Capacity = 0;
  local_40.Length = 0;
  if (((this->TargetCompartment).Pointer == (ModuleCompartment *)0x0) ||
     (pRVar1 = (this->TargetCompartment).Controller, pRVar1 == (ReferenceController *)0x0)) {
LAB_00819953:
    piVar4 = (int *)GetCompartments(this);
    iVar5 = (**(code **)(*piVar4 + 0xc))();
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_60);
    if (iVar5 < 1) goto LAB_008199a3;
    piVar4 = (int *)GetCompartments(this);
    uVar6 = (**(code **)(*piVar4 + 0xc))();
    pSVar3 = util__Printf(&local_34,"(%ix) ",uVar6);
    local_28 = 0x60;
    pcVar8 = local_14.Data;
  }
  else {
    bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (!bVar2) goto LAB_00819953;
LAB_008199a3:
    pcVar8 = (char *)0x0;
    pSVar3 = &local_14;
    local_28 = 0x80;
    local_14.Data = (char *)0x0;
    local_14.Capacity = 0;
    local_14.Length = 0;
  }
  local_28 = local_28 | uVar7;
  util__Str_char___Str_char(&local_40,pSVar3);
  uVar7 = local_28;
  if (((char)local_28 < '\0') && (uVar7 = local_28 & 0xffffff7f, pcVar8 != (char *)0x0)) {
    operator_delete__(pcVar8);
  }
  if ((uVar7 & 0x40) != 0) {
    uVar7 = uVar7 & 0xffffffbf;
    if (local_34.Data != (char *)0x0) {
      operator_delete__(local_34.Data);
      local_34.Data = (char *)0x0;
    }
  }
  if ((uVar7 & 0x20) != 0) {
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_24);
  }
  this_01 = this->ModuleType;
  if (this_01 == (Module *)0x0) {
    if (((this->TargetCompartment).Pointer != (ModuleCompartment *)0x0) &&
       (pRVar1 = (this->TargetCompartment).Controller, pRVar1 != (ReferenceController *)0x0)) {
      bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
      if (bVar2) {
        pRVar1 = (this->TargetCompartment).Controller;
        if (pRVar1 != (ReferenceController *)0x0) {
          bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
          if (!bVar2) {
            (this->TargetCompartment).Pointer = (ModuleCompartment *)0x0;
          }
        }
        this_01 = *(Module **)&((this->TargetCompartment).Pointer)->LostPower;
        goto LAB_00819a59;
      }
    }
    this_01 = (Module *)0x0;
  }
LAB_00819a59:
  pSVar3 = Module__GetQuickName(this_01,&local_5c);
  local_20.Length = 0;
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  util__Str_char___Str_char(&local_20,&local_40);
  util__Str_char___operator__o10(&local_20,pSVar3);
  util__Str_char___Str_char(&local_34,&local_20);
  if (local_20.Data != (char *)0x0) {
    operator_delete__(local_20.Data);
    ((slice_view *)&local_20)->_0_8_ = ((slice_view *)&local_20)->_0_8_ & 0xffffffff00000000;
  }
  local_14.Length = 0;
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  util__Str_char___Str_char(&local_14,&local_34);
  util__Str_char___operator__o10(&local_14,&local_50);
  pSVar3 = local_44;
  util__Str_char___Str_char(local_44,&local_14);
  if (local_14.Data != (char *)0x0) {
    operator_delete__(local_14.Data);
  }
  if (local_34.Data != (char *)0x0) {
    operator_delete__(local_34.Data);
  }
  if (local_5c.Data != (char *)0x0) {
    operator_delete__(local_5c.Data);
    local_5c.Data = (char *)0x0;
  }
  if (local_40.Data != (char *)0x0) {
    operator_delete__(local_40.Data);
  }
  if (local_50.Data != (char *)0x0) {
    operator_delete__(local_50.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pSVar3;
}


//==== 0000824530 00824530_GetShips ====
// decompiled by BatchDecomp @ 00824530 name=GetShips conv=__thiscall body=474

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: class util::Darray<class util::WeakPtr<class SpacecraftComponent> > __thiscall
   OrderButton__GetShips(void)const  */

void __thiscall OrderButton__GetShips(OrderButton *this)

{
  undefined4 stack0xfffffffc;
  Darray_L_util__WeakPtr_L_SpacecraftComponent_G___G_ *pDVar1;
  ReferenceController *pRVar2;
  ReferenceController *pRVar3;
  Faction *pFVar4;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *this_00;
  bool bVar5;
  int iVar6;
  int *piVar7;
  Faction *pFVar8;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *in_stack_00000004;
  undefined4 *local_2c;
  int iStack_28;
  int iStack_24;
  undefined4 uStack_20;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *local_1c;
  OrderButton *local_18;
  undefined1 local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pDVar1 = &this->ShipsGetter;
  local_1c = in_stack_00000004;
  local_14 = 0;
  local_2c = (undefined4 *)0x0;
  iStack_28 = 0;
  iStack_24 = 0;
  uStack_20 = 0;
  local_18 = this;
  iVar6 = (**(code **)(*(int *)pDVar1 + 0xc))();
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_2c,iVar6);
  local_10 = 0;
  iVar6 = (**(code **)(*(int *)pDVar1 + 0xc))();
  if (local_10 < iVar6) {
    do {
      piVar7 = (int *)(**(code **)*(int *)pDVar1)(&local_10);
      if ((*piVar7 != 0) && ((ReferenceController *)piVar7[1] != (ReferenceController *)0x0)) {
        bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar7[1]);
        iVar6 = iStack_24;
        if (bVar5) {
          local_c = iStack_24 + 1;
          util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_2c,&local_c);
          bVar5 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_2c,iVar6);
          if (bVar5) {
            pRVar2 = *(ReferenceController **)(iStack_28 + -4 + iStack_24 * 8);
            iVar6 = iStack_28 + iStack_24 * 8;
            *(int *)(iVar6 + -8) = *piVar7;
            pRVar3 = (ReferenceController *)piVar7[1];
            *(ReferenceController **)(iVar6 + -4) = pRVar3;
            if (pRVar3 != (ReferenceController *)0x0) {
              util__ReferenceController__AddWeakReference(pRVar3);
            }
            if (pRVar2 != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference(pRVar2);
            }
          }
        }
      }
      local_10 = local_10 + 1;
      iVar6 = (**(code **)(*(int *)pDVar1 + 0xc))();
    } while (local_10 < iVar6);
  }
  this_00 = local_1c;
  *(undefined4 *)local_1c = 0;
  *(undefined4 *)(local_1c + 4) = 0;
  *(undefined4 *)(local_1c + 8) = 0;
  *(undefined4 *)(local_1c + 0xc) = 0;
  iVar6 = (*(code *)local_2c[3])();
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(this_00,iVar6);
  local_c = 0;
  iVar6 = (*(code *)local_2c[3])();
  if (local_c < iVar6) {
    do {
      piVar7 = (int *)(*(code *)*local_2c)(&local_c);
      if ((ReferenceController *)piVar7[1] != (ReferenceController *)0x0) {
        bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar7[1]);
        if (!bVar5) {
          *piVar7 = 0;
        }
      }
      iVar6 = *piVar7;
      if (*(ReferenceController **)(iVar6 + 8) != (ReferenceController *)0x0) {
        bVar5 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar6 + 8));
        if (!bVar5) {
          *(undefined4 *)(iVar6 + 4) = 0;
        }
      }
      pFVar4 = *(Faction **)(*(int *)(iVar6 + 4) + 0x1e0);
      pFVar8 = TacticalManager__GetPlayerAlliance((TacticalManager *)local_18->_pad_0x0_0);
      if (pFVar4 == pFVar8) {
        iVar6 = *(int *)(this_00 + 8);
        local_1c = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)(iVar6 + 1);
        util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)this_00,(int *)&local_1c);
        bVar5 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)this_00,iVar6);
        if (bVar5) {
          pRVar2 = *(ReferenceController **)(*(int *)(this_00 + 4) + -4 + *(int *)(this_00 + 8) * 8)
          ;
          iVar6 = *(int *)(this_00 + 4) + *(int *)(this_00 + 8) * 8;
          *(int *)(iVar6 + -8) = *piVar7;
          pRVar3 = (ReferenceController *)piVar7[1];
          *(ReferenceController **)(iVar6 + -4) = pRVar3;
          if (pRVar3 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(pRVar3);
          }
          if (pRVar2 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar2);
          }
        }
      }
      local_c = local_c + 1;
      iVar6 = (*(code *)local_2c[3])();
    } while (local_c < iVar6);
  }
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_2c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000828880 00828880_GetColorFromSelection ====
// decompiled by BatchDecomp @ 00828880 name=GetColorFromSelection conv=__thiscall body=454

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: struct util::Color __thiscall ShipGroupUI__GetColorFromSelection(void)const  */

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
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_24);
  if (iVar3 == 0) {
    util__Color__Color(__return_storage_ptr__,Black,1.0);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return __return_storage_ptr__;
  }
  piVar2 = (int *)GetShipsInGroup(this);
  local_c = 0;
  iVar3 = (**(code **)(*piVar2 + 0xc))();
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
      iVar3 = (**(code **)(*piVar2 + 0xc))();
    } while ((int)local_c < iVar3);
  }
  ((slice_view *)&local_10)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&local_10)->_1_3_[0] | (((slice_view *)&local_10)->_1_3_[1] << 8) | (((slice_view *)&local_10)->_1_3_[2] << 16)) << 8));
LAB_00828962:
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_24);
  piVar2 = (int *)GetShipsInGroup(this);
  local_c = 0;
  iVar3 = (**(code **)(*piVar2 + 0xc))();
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
      iVar3 = (**(code **)(*piVar2 + 0xc))();
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
/* public: struct util::Color __thiscall ShipGroupUI__GetSelectColor(void)const  */

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
  iVar2 = (**(code **)(*piVar1 + 0xc))();
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
  iVar2 = (**(code **)(*piVar1 + 0xc))();
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
      iVar2 = (**(code **)(*piVar1 + 0xc))();
    } while (local_c < iVar2);
  }
  local_2d = '\x01';
LAB_00829060:
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_44);
  piVar1 = (int *)GetShipsInGroup(this);
  local_c = 0;
  iVar2 = (**(code **)(*piVar1 + 0xc))();
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
      iVar2 = (**(code **)(*piVar1 + 0xc))();
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
  iVar4 = (**(code **)(*param_1 + 0xc))();
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
      iVar4 = (**(code **)(*local_40 + 0xc))();
    } while (local_10 < iVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
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
  uVar3 = (**(code **)(*param_2 + 0xc))();
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
  iVar11 = (**(code **)(*local_14 + 0xc))();
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
      iVar11 = (**(code **)(*local_14 + 0xc))();
    } while ((int)local_c < iVar11);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000083a790 0083a790_FUN_0083a790 ====
void __thiscall FUN_0083a790(GameManager *param_1,Str_L_char_G_ *param_2,undefined4 param_3,int param_4, TextureInitOptions *param_5);

// decompiled by BatchDecomp @ 0083a790 name=FUN_0083a790 conv=unknown body=507

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FUN_0083a790(GameManager *param_1,Str_L_char_G_ *param_2,undefined4 param_3,int param_4,
            TextureInitOptions *param_5)

{
  undefined4 stack0xfffffffc;
  Type TVar1;
  Type TVar2;
  Type TVar3;
  int iVar4;
  bool bVar5;
  char *pcVar6;
  Str_L_char_G_ *pSVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined4 uVar12;
  Str_L_char_G_ local_54;
  Str_L_char_G_ local_48;
  int local_3c;
  Str_L_char_G_ local_38;
  undefined4 *local_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  TextureStack local_1c;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_2c = (undefined4 *)0x0;
  uStack_28 = 0;
  iStack_24 = 0;
  uStack_20 = 0;
  GameManager__GetValidFileInAllResourcePaths(param_1,(ResourceType)&local_2c,param_2);
  local_c = 0;
  if (0 < iStack_24) {
    do {
      pSVar7 = (Str_L_char_G_ *)(*(code *)*local_2c)(&local_c);
      util__Str_char___Str_char(&local_48,pSVar7);
      uVar12 = 0xb3;
      local_38.Length = 0;
      *(undefined4 *)(param_4 + 0x10) = 0;
      TVar1 = param_5->TextureS;
      TVar2 = param_5->TextureT;
      TVar3 = param_5->TextureR;
      *(undefined4 *)(param_4 + 0x14) = *(undefined4 *)param_5;
      *(Type *)(param_4 + 0x18) = TVar1;
      *(Type *)(param_4 + 0x1c) = TVar2;
      *(Type *)(param_4 + 0x20) = TVar3;
      iVar9 = (param_5->Mipmaps).Data.MinLevel;
      iVar4 = (param_5->Mipmaps).Data.MaxLevel.Data;
      uVar10 = *(undefined4 *)&(param_5->Mipmaps).Data.MaxLevel.IsValidData;
      *(Type *)(param_4 + 0x24) = param_5->Channels;
      *(int *)(param_4 + 0x28) = iVar9;
      *(int *)(param_4 + 0x2c) = iVar4;
      *(undefined4 *)(param_4 + 0x30) = uVar10;
      *(undefined8 *)(param_4 + 0x34) = *(undefined8 *)&(param_5->Mipmaps).IsValidData;
      if ((param_5->Mipmaps).IsValidData == false) {
        uVar12 = 0xb0;
      }
      local_38.Data = (char *)0x0;
      local_38.Capacity = 0;
      util__Str_char___Str_char(&local_38,&local_48);
      pcVar6 = local_38.Data;
      pcVar8 = "";
      if (0 < local_38.Capacity) {
        pcVar8 = local_38.Data;
      }
      iVar9 = _SOIL_load_OGL_texture(pcVar8,0,0,uVar12);
      local_3c = iVar9;
      glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\textures.cpp",0x156);
      pcVar8 = local_48.Data;
      if (iVar9 == 0) {
        pcVar11 = "";
        if (0 < local_48.Capacity) {
          pcVar11 = local_48.Data;
        }
        uVar10 = _SOIL_last_result();
        pSVar7 = util__Printf(&local_54,
                              "Error: Could not initialize texture file %s (SOIL Error: %s)!\n",
                              pcVar11,uVar10);
        util__Log(pSVar7);
        if (local_54.Data != (char *)0x0) {
          operator_delete__(local_54.Data);
          local_54.Data = (char *)0x0;
        }
        if (pcVar6 != (char *)0x0) {
          operator_delete__(pcVar6);
          ((slice_view *)&local_38)->_0_8_ = ((slice_view *)&local_38)->_0_8_ & 0xffffffff00000000;
        }
        bVar5 = false;
      }
      else {
        *(int *)(param_4 + 0xc) = local_3c;
        glGetTexLevelParameteriv(0xde1,0,0x1000,param_4 + 4);
        glGetTexLevelParameteriv(0xde1,0,0x1001,param_4 + 8);
        if (pcVar6 != (char *)0x0) {
          operator_delete__(pcVar6);
          ((slice_view *)&local_38)->_0_8_ = ((slice_view *)&local_38)->_0_8_ & 0xffffffff00000000;
        }
        bVar5 = true;
      }
      Graphics__TextureStack__TextureStack(&local_1c,*(uint *)(param_4 + 0xc),*(Type *)(param_4 + 0x10),0);
      ResolveTextureInitOptions(param_5,*(Type *)(param_4 + 0x10));
      Graphics__TextureStack___TextureStack(&local_1c);
      if (pcVar8 != (char *)0x0) {
        operator_delete__(pcVar8);
        local_48.Data = (char *)0x0;
      }
    } while ((!bVar5) && (local_c = local_c + 1, local_c < iStack_24));
  }
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&local_2c);
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
  iVar4 = (**(code **)(*piVar3 + 0xc))();
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
      iVar4 = (**(code **)(*piVar3 + 0xc))();
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


//==== 000085d690 0085d690_FUN_0085d690 ====
void __thiscall FUN_0085d690(GameManager *param_1,Str_L_char_G_ *param_2,Str_L_char_G_ *param_3,int param_4, undefined4 *param_5,char param_6);

// decompiled by BatchDecomp @ 0085d690 name=FUN_0085d690 conv=unknown body=761

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FUN_0085d690(GameManager *param_1,Str_L_char_G_ *param_2,Str_L_char_G_ *param_3,int param_4,
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
  FileIO__LoadLanguageStrings(pFVar3,pDVar10,pSVar1,(bool)uVar11);
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
  iVar5 = (**(code **)(*piVar4 + 0xc))();
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
      FileIO__LoadLanguageStrings(pFVar3,pDVar10,pSVar1,(bool)uVar11);
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
      iVar5 = (**(code **)(*piVar4 + 0xc))();
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
  iVar5 = (**(code **)(*piVar4 + 0xc))();
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
      iVar5 = (**(code **)(*piVar4 + 0xc))();
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
  iVar3 = (**(code **)(*param_1 + 0xc))();
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
          iVar3 = (**(code **)(*piVar8 + 0xc))();
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
      iVar3 = (**(code **)(*param_1 + 0xc))();
    } while (local_10 < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
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
  iVar4 = (**(code **)(*piVar1 + 0xc))();
  if (local_c < iVar4) {
    do {
      pSVar3 = (Str_L_char_G_ *)(**(code **)*piVar1)(&local_c);
      util__Str_char___operator__o10(&local_1c,pSVar3);
      iVar4 = (**(code **)(*piVar1 + 0xc))();
      if (local_10 < iVar4 + -1) {
        util__Str_char___operator__o10(&local_1c,&local_2c);
      }
      local_10 = local_10 + 1;
      local_c = local_c + 1;
      iVar4 = (**(code **)(*piVar1 + 0xc))();
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
  iVar7 = (**(code **)(*param_1 + 0xc))();
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
      iVar7 = (**(code **)(*param_1 + 0xc))();
    } while (local_10 < iVar7);
  }
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
  iVar4 = (**(code **)(*param_1 + 0xc))();
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
          cVar3 = (**(code **)(*piVar7 + 0x84))(*puVar5,puVar5[1],puVar5[2],puVar5[3]);
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
      iVar4 = (**(code **)(*local_3c + 0xc))();
    } while (local_c < iVar4);
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
  iVar4 = (**(code **)(*param_1 + 0xc))();
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
      iVar4 = (**(code **)(*local_14 + 0xc))();
    } while (local_c < iVar4);
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
  iVar5 = (**(code **)(*param_1 + 0xc))();
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
      iVar5 = (**(code **)(*param_1 + 0xc))();
    } while (local_c < iVar5);
  }
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
  iVar3 = (**(code **)(*param_1 + 0xc))();
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
      iVar3 = (**(code **)(*param_1 + 0xc))();
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


//==== 00008db630 008db630___glfwRefreshContextAttribs ====
// decompiled by BatchDecomp @ 008db630 name=__glfwRefreshContextAttribs conv=unknown body=1037

void __glfwRefreshContextAttribs(int *param_1)

{
  undefined4 stack0xffffffe0;
  undefined4 stack0xffffffe4;
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  char *pcVar7;
  int iVar8;
  char *_Str2;
  int iVar9;
  uint unaff_ESI;
  char *pcVar10;
  int *local_18;
  char *local_14[3];
  uint local_8;
  uint local_4;
  
  local_4 = __security_cookie ^ (uint)&local_18;
  local_18 = param_1;
  local_14[0] = "OpenGL ES-CM ";
  local_14[1] = "OpenGL ES-CL ";
  local_14[2] = "OpenGL ES ";
  local_8 = 0;
  iVar4 = __glfwPlatformGetCurrentContext();
  *(int *)(iVar4 + 0x1dc) = param_1[1];
  *(undefined4 *)(iVar4 + 0x1d8) = 0x30001;
  uVar5 = (**(code **)(iVar4 + 0x220))("glGetIntegerv");
  *(undefined4 *)(iVar4 + 0x208) = uVar5;
  pcVar6 = (code *)(**(code **)(iVar4 + 0x220))("glGetString");
  *(code **)(iVar4 + 0x20c) = pcVar6;
  if ((*(int *)(iVar4 + 0x208) == 0) || (pcVar6 == (code *)0x0)) {
    __glfwInputError(0x10008,"Entry point retrieval is broken");
    __security_check_cookie(local_4 ^ (uint)&local_18);
    return;
  }
  pcVar7 = (char *)(*pcVar6)(0x1f02);
  if (pcVar7 == (char *)0x0) {
    if (*param_1 != 0x30001) {
      __glfwInputError(0x10008,"OpenGL ES version string retrieval is broken");
      __security_check_cookie(local_8 ^ (uint)&stack0xffffffe4);
      return;
    }
    __glfwInputError(0x10008,"OpenGL version string retrieval is broken");
    __security_check_cookie(local_8 ^ (uint)&stack0xffffffe4);
    return;
  }
  _Str2 = "OpenGL ES-CM ";
  iVar9 = 0;
  do {
    pcVar10 = _Str2;
    do {
      cVar3 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar3 != '\0');
    iVar8 = strncmp(pcVar7,_Str2,(int)pcVar10 - (int)(_Str2 + 1));
    if (iVar8 == 0) {
      pcVar7 = pcVar7 + ((int)pcVar10 - (int)(_Str2 + 1));
      *(undefined4 *)(iVar4 + 0x1d8) = 0x30002;
      break;
    }
    _Str2 = local_14[iVar9];
    iVar9 = iVar9 + 1;
  } while (_Str2 != (char *)0x0);
  piVar1 = (int *)(iVar4 + 0x1e4);
  piVar2 = (int *)(iVar4 + 0x1e0);
  iVar9 = (*(code *)_imp__sscanf)(pcVar7,"%d.%d.%d",piVar2,piVar1,iVar4 + 0x1e8);
  if (iVar9 == 0) {
    if (*(int *)(iVar4 + 0x1d8) == 0x30001) {
      pcVar7 = "No version found in OpenGL version string";
    }
    else {
      pcVar7 = "No version found in OpenGL ES version string";
    }
LAB_008db79e:
    __glfwInputError(0x10008,pcVar7);
    __security_check_cookie(local_8 ^ (uint)&stack0xffffffe4);
    return;
  }
  iVar9 = *piVar2;
  iVar8 = *(int *)(unaff_ESI + 8);
  if ((iVar9 < iVar8) || ((iVar9 == iVar8 && (*piVar1 < *(int *)(unaff_ESI + 0xc))))) {
    if (*(int *)(iVar4 + 0x1d8) != 0x30001) {
      __glfwInputError(0x10007,"Requested OpenGL ES version %i.%i, got version %i.%i",iVar8,
                       *(undefined4 *)(unaff_ESI + 0xc),iVar9,*piVar1);
      __security_check_cookie(local_8 ^ (uint)&stack0xffffffe4);
      return;
    }
    __glfwInputError(0x10007,"Requested OpenGL version %i.%i, got version %i.%i",iVar8,
                     *(undefined4 *)(unaff_ESI + 0xc),iVar9,*piVar1);
    __security_check_cookie(local_8 ^ (uint)&stack0xffffffe4);
    return;
  }
  if (2 < iVar9) {
    iVar9 = (**(code **)(iVar4 + 0x220))("glGetStringi");
    *(int *)(iVar4 + 0x204) = iVar9;
    if (iVar9 == 0) {
      pcVar7 = "Entry point retrieval is broken";
      goto LAB_008db79e;
    }
  }
  if (*(int *)(iVar4 + 0x1d8) != 0x30001) {
    pcVar7 = "GL_EXT_robustness";
    goto LAB_008db8ee;
  }
  if (2 < *piVar2) {
    (**(code **)(iVar4 + 0x208))(0x821e,&stack0xffffffe4);
    if ((unaff_ESI & 1) != 0) {
      *(undefined4 *)(iVar4 + 0x1ec) = 1;
    }
    if ((unaff_ESI & 2) == 0) {
      iVar9 = glfwExtensionSupported("GL_ARB_debug_output");
      if ((iVar9 != 0) && (*(int *)(unaff_ESI + 0x14) != 0)) {
        *(undefined4 *)(iVar4 + 0x1f0) = 1;
      }
    }
    else {
      *(undefined4 *)(iVar4 + 0x1f0) = 1;
    }
    if ((unaff_ESI & 8) != 0) {
      *(undefined4 *)(iVar4 + 500) = 1;
    }
  }
  if ((3 < *piVar2) || ((*piVar2 == 3 && (1 < *piVar1)))) {
    (**(code **)(iVar4 + 0x208))(0x9126,&stack0xffffffe4);
    if ((unaff_ESI & 2) == 0) {
      if ((unaff_ESI & 1) != 0) {
        *(undefined4 *)(iVar4 + 0x1f8) = 0x32001;
        pcVar7 = "GL_ARB_robustness";
        goto LAB_008db8ee;
      }
      iVar9 = glfwExtensionSupported("GL_ARB_compatibility");
      if (iVar9 == 0) goto LAB_008db8e2;
    }
    *(undefined4 *)(iVar4 + 0x1f8) = 0x32002;
  }
LAB_008db8e2:
  pcVar7 = "GL_ARB_robustness";
LAB_008db8ee:
  iVar9 = glfwExtensionSupported(pcVar7);
  if (iVar9 != 0) {
    (**(code **)(iVar4 + 0x208))(0x8256,&stack0xffffffe4);
    if (unaff_ESI == 0x8252) {
      *(undefined4 *)(iVar4 + 0x1fc) = 0x31002;
    }
    else if (unaff_ESI == 0x8261) {
      *(undefined4 *)(iVar4 + 0x1fc) = 0x31001;
    }
  }
  iVar9 = glfwExtensionSupported("GL_KHR_context_flush_control");
  if (iVar9 != 0) {
    (**(code **)(iVar4 + 0x208))(0x82fb,&stack0xffffffe4);
    if (unaff_ESI == 0) {
      *(undefined4 *)(iVar4 + 0x200) = 0x35002;
    }
    else if (unaff_ESI == 0x82fc) {
      *(undefined4 *)(iVar4 + 0x200) = 0x35001;
    }
  }
  pcVar6 = (code *)(**(code **)(iVar4 + 0x220))("glClear");
  (*pcVar6)(0x4000);
  (**(code **)(iVar4 + 0x214))(iVar4);
  __security_check_cookie((uint)local_14[2] ^ (uint)&stack0xffffffe0);
  return;
}

