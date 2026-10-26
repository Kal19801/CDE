// pilot_sweep_sweep04.c - assembled by scripts/sweep_assemble.py (r19)
// reuses fam8_assemble fix passes (zip oracle/in-batch protos/vft channel/data closure)
/* ---- r20 incomplete-type forward decls (pointer-position only) ---- */
typedef struct Darray_L_GraphicsResource__Type_G_ Darray_L_GraphicsResource__Type_G_;
typedef struct Maybe Maybe;
typedef struct Str Str;
typedef struct Vec3 Vec3;
typedef struct WeakPtr WeakPtr;
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
  };
  struct {
    undefined1 _1_3_[3];
  };
  undefined1 raw[32];
} slice_view;
/* ---- externs: stub-oracle names (K&R; ret types by call site) ---- */
extern int FixedOrbit__dtor(); /* K&R stub; ret by call site */
extern int NodeMouseOver__dtor(); /* K&R stub; ret by call site */
extern int util_Maybe_struct_FixedOrbit_operator(); /* K&R stub; ret by call site */

//==== 0000489780 00489780_FUN_00489780 ====
extern undefined4 FUN_00488d70(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_00488e30(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_00489120(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void __fastcall FUN_00489780(int param_1);

// decompiled by BatchDecomp @ 00489780 name=FUN_00489780 conv=unknown body=1194

void __fastcall FUN_00489780(int param_1)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_a0;
  int local_9c;
  int local_98;
  int local_90;
  int local_8c;
  undefined1 local_88[128];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)(param_1 + 0x3698) = 0;
  *(undefined4 *)(param_1 + 0x3694) = 0;
  *(undefined4 *)(param_1 + 0x36a0) = 0;
  *(undefined4 *)(param_1 + 0x363c) = 0;
  *(undefined4 *)(param_1 + 0x3604) = 0;
  *(undefined4 *)(param_1 + 0x35cc) = 0;
  *(undefined1 *)(param_1 + 0x369c) = 0xff;
  iVar5 = 0x7fffffff;
  if (*(int *)(param_1 + 0x36b8) != 0) {
    iVar5 = *(int *)(param_1 + 0x36b8);
  }
  *(int *)(param_1 + 0x36bc) = iVar5;
  if (*(int *)(param_1 + 0x36a4) == 1) {
    iVar3 = *(int *)(param_1 + 0x36a8);
    iVar5 = param_1 + iVar3 * 0x38;
    iVar4 = *(int *)(param_1 + (iVar3 + 0xf6) * 0x38) + 7 >> 3;
    iVar6 = *(int *)(param_1 + 0x35d4 + iVar3 * 0x38) + 7 >> 3;
    local_8c = 0;
    if (0 < iVar6) {
      do {
        iVar7 = 0;
        if (0 < iVar4) {
          do {
            iVar1 = FUN_00488e30(*(int *)(iVar5 + 0x35c4) * 0x690 + 0x1c + param_1,
                                 *(int *)(iVar5 + 0x35c8) * 0x690 + 0x1a5c + param_1,iVar3);
            if (iVar1 == 0) {
LAB_00489c17:
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            FUN_00489120(local_88,*(int *)(iVar5 + 0x35c0) * 0x40 + 0x349c + param_1);
            *(int *)(param_1 + 0x36bc) = *(int *)(param_1 + 0x36bc) + -1;
            if (*(int *)(param_1 + 0x36bc) < 1) {
              if (*(int *)(param_1 + 0x3698) < 0x18) {
                FUN_00488d70();
              }
              if (7 < (byte)(*(char *)(param_1 + 0x369c) + 0x30U)) goto LAB_0048999f;
              *(undefined4 *)(param_1 + 0x3698) = 0;
              *(undefined4 *)(param_1 + 0x3694) = 0;
              *(undefined4 *)(param_1 + 0x36a0) = 0;
              *(undefined4 *)(param_1 + 0x363c) = 0;
              *(undefined4 *)(param_1 + 0x3604) = 0;
              *(undefined4 *)(param_1 + 0x35cc) = 0;
              *(undefined1 *)(param_1 + 0x369c) = 0xff;
              iVar1 = 0x7fffffff;
              if (*(int *)(param_1 + 0x36b8) != 0) {
                iVar1 = *(int *)(param_1 + 0x36b8);
              }
              *(int *)(param_1 + 0x36bc) = iVar1;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar4);
        }
        local_8c = local_8c + 1;
      } while (local_8c < iVar6);
    }
  }
  else {
    local_8c = 0;
    if (0 < *(int *)(param_1 + 0x35a8)) {
      do {
        local_98 = 0;
        if (0 < *(int *)(param_1 + 0x35a4)) {
          do {
            local_90 = 0;
            if (0 < *(int *)(param_1 + 0x36a4)) {
              piVar2 = (int *)(param_1 + 0x36a8);
              do {
                iVar5 = *piVar2;
                local_a0 = 0;
                if (0 < *(int *)(param_1 + 0x35bc + iVar5 * 0x38)) {
                  do {
                    local_9c = 0;
                    if (0 < *(int *)(param_1 + 0x35b8 + iVar5 * 0x38)) {
                      do {
                        iVar3 = FUN_00488e30(*(int *)(param_1 + 0x35c4 + iVar5 * 0x38) * 0x690 +
                                             0x1c + param_1,
                                             *(int *)(param_1 + 0x35c8 + iVar5 * 0x38) * 0x690 +
                                             0x1a5c + param_1,iVar5);
                        if (iVar3 == 0) goto LAB_00489c17;
                        FUN_00489120(local_88,*(int *)(param_1 + 0x35c0 + iVar5 * 0x38) * 0x40 +
                                              0x349c + param_1);
                        local_9c = local_9c + 1;
                      } while (local_9c < *(int *)(param_1 + 0x35b8 + iVar5 * 0x38));
                    }
                    local_a0 = local_a0 + 1;
                  } while (local_a0 < *(int *)(param_1 + 0x35bc + iVar5 * 0x38));
                }
                local_90 = local_90 + 1;
                piVar2 = piVar2 + 1;
              } while (local_90 < *(int *)(param_1 + 0x36a4));
            }
            *(int *)(param_1 + 0x36bc) = *(int *)(param_1 + 0x36bc) + -1;
            if (*(int *)(param_1 + 0x36bc) < 1) {
              if (*(int *)(param_1 + 0x3698) < 0x18) {
                FUN_00488d70();
              }
              if (7 < (byte)(*(char *)(param_1 + 0x369c) + 0x30U)) goto LAB_0048999f;
              *(undefined4 *)(param_1 + 0x3698) = 0;
              *(undefined4 *)(param_1 + 0x3694) = 0;
              *(undefined4 *)(param_1 + 0x36a0) = 0;
              *(undefined4 *)(param_1 + 0x363c) = 0;
              *(undefined4 *)(param_1 + 0x3604) = 0;
              *(undefined4 *)(param_1 + 0x35cc) = 0;
              *(undefined1 *)(param_1 + 0x369c) = 0xff;
              iVar5 = 0x7fffffff;
              if (*(int *)(param_1 + 0x36b8) != 0) {
                iVar5 = *(int *)(param_1 + 0x36b8);
              }
              *(int *)(param_1 + 0x36bc) = iVar5;
            }
            local_98 = local_98 + 1;
          } while (local_98 < *(int *)(param_1 + 0x35a4));
        }
        local_8c = local_8c + 1;
      } while (local_8c < *(int *)(param_1 + 0x35a8));
    }
  }
LAB_0048999f:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000048d6f0 0048d6f0_FUN_0048d6f0 ====
extern undefined4 FUN_00488550(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_00488610(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_00488690(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_004886f0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_0048d600(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_0048d660(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_0048d6b0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void __fastcall FUN_0048d6f0(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint param_5);

// decompiled by BatchDecomp @ 0048d6f0 name=FUN_0048d6f0 conv=unknown body=3089

void __fastcall FUN_0048d6f0(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint param_5)

{
  undefined4 stack0xfffffffc;
  undefined1 *puVar1;
  byte bVar2;
  byte *pbVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *_Memory;
  int iVar9;
  uint uVar10;
  int iVar11;
  FILE *pFVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  int local_43c;
  int local_438;
  int local_434;
  int local_430;
  int local_428;
  int local_420;
  uint local_41c;
  int local_414;
  int local_410;
  undefined1 auStack_408[1024];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_414 = 0;
  local_428 = 0;
  local_434 = 0;
  local_43c = 0;
  local_420 = 0;
  if ((FILE *)param_1[4] == (FILE *)0x0) {
    pbVar3 = (byte *)param_1[5];
    if (pbVar3 < (byte *)param_1[6]) {
      bVar2 = *pbVar3;
      param_1[5] = (uint)(pbVar3 + 1);
      uVar5 = (uint)bVar2;
      goto LAB_0048d79d;
    }
  }
  else {
    uVar5 = fgetc((FILE *)param_1[4]);
    if (uVar5 == 0xffffffff) {
      uVar5 = 0;
    }
LAB_0048d79d:
    if (uVar5 == 0x42) {
      if ((FILE *)param_1[4] == (FILE *)0x0) {
        pbVar3 = (byte *)param_1[5];
        if ((byte *)param_1[6] <= pbVar3) goto LAB_0048de24;
        bVar2 = *pbVar3;
        param_1[5] = (uint)(pbVar3 + 1);
        uVar5 = (uint)bVar2;
      }
      else {
        uVar5 = fgetc((FILE *)param_1[4]);
        if (uVar5 == 0xffffffff) {
          uVar5 = 0;
        }
      }
      if (uVar5 == 0x4d) {
        FUN_00488610();
        FUN_00488610();
        FUN_00488610();
        FUN_00488610();
        iVar6 = FUN_00488610();
        iVar7 = FUN_00488610();
        iVar6 = iVar7 * 0x10000 + iVar6;
        iVar8 = FUN_00488610();
        iVar7 = FUN_00488610();
        iVar8 = iVar7 * 0x10000 + iVar8;
        if ((((iVar8 != 0xc) && (iVar8 != 0x28)) && (iVar8 != 0x38)) && (iVar8 != 0x6c)) {
          DAT_009936c8 = "BMP type not supported: unknown";
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        DAT_009936c8 = "bad BMP";
        uVar5 = FUN_00488610();
        if (iVar8 == 0xc) {
          *param_1 = uVar5;
          uVar5 = FUN_00488610();
        }
        else {
          iVar7 = FUN_00488610();
          *param_1 = iVar7 * 0x10000 + uVar5;
          iVar7 = FUN_00488610();
          iVar9 = FUN_00488610();
          uVar5 = iVar9 * 0x10000 + iVar7;
        }
        param_1[1] = uVar5;
        iVar7 = FUN_00488610();
        if (iVar7 != 1) goto LAB_0048de2e;
        iVar7 = FUN_00488610();
        if (iVar7 == 1) {
          DAT_009936c8 = "BMP type not supported: 1-bit";
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        uVar5 = param_1[1];
        param_1[1] = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
        if (iVar8 == 0xc) {
          if (iVar7 < 0x18) {
            local_420 = (iVar6 + -0x26) / 3;
          }
        }
        else {
          iVar9 = FUN_00488690();
          if ((iVar9 == 1) || (iVar9 == 2)) {
            DAT_009936c8 = "BMP type not supported: RLE";
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
          FUN_00488690();
          FUN_00488690();
          FUN_00488690();
          FUN_00488690();
          FUN_00488690();
          if (iVar8 == 0x28) {
LAB_0048d9f2:
            if ((iVar7 == 0x10) || (iVar7 == 0x20)) {
              if (iVar9 == 0) {
                if (iVar7 == 0x20) {
                  local_414 = 0xff0000;
                  local_428 = 0xff00;
                  local_434 = 0xff;
                  goto LAB_0048dac0;
                }
                local_414 = 0x7c00;
                local_428 = 0x3e0;
                local_434 = 0x1f;
              }
              else {
                if (iVar9 != 3) goto LAB_0048de2e;
                local_414 = FUN_00488690();
                local_428 = FUN_00488690();
                local_434 = FUN_00488690();
                if ((local_414 == local_428) && (local_428 == local_434)) goto LAB_0048de2e;
              }
            }
          }
          else {
            if (iVar8 == 0x38) {
              FUN_00488690();
              FUN_00488690();
              FUN_00488690();
              FUN_00488690();
              goto LAB_0048d9f2;
            }
            local_414 = FUN_00488690();
            local_428 = FUN_00488690();
            local_434 = FUN_00488690();
            local_43c = FUN_00488690();
            FUN_00488690();
            iVar9 = 0xc;
            do {
              FUN_00488690();
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
          if (iVar7 < 0x10) {
            local_420 = (iVar6 - iVar8) + -0xe >> 2;
          }
        }
LAB_0048dac0:
        local_41c = (local_43c != 0) + 3;
        param_1[2] = local_41c;
        if ((param_5 != 0) && (2 < (int)param_5)) {
          local_41c = param_5;
        }
        _Memory = malloc(*param_1 * param_1[1] * local_41c);
        if (_Memory == (void *)0x0) {
          DAT_009936c8 = "Out of memory";
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        if (iVar7 < 0x10) {
          if ((0x100 < local_420) || (local_420 == 0)) {
LAB_0048de1a:
            free(_Memory);
            goto LAB_0048de24;
          }
          iVar6 = 0;
          if (0 < local_420) {
            do {
              if ((FILE *)param_1[4] == (FILE *)0x0) {
                puVar15 = (undefined1 *)param_1[5];
                if (puVar15 < (undefined1 *)param_1[6]) {
                  uVar4 = *puVar15;
                  param_1[5] = (uint)(puVar15 + 1);
                }
                else {
                  uVar4 = 0;
                }
                pFVar12 = (FILE *)0x0;
              }
              else {
                iVar9 = fgetc((FILE *)param_1[4]);
                if (iVar9 == -1) {
                  iVar9 = 0;
                }
                uVar4 = (undefined1)iVar9;
                pFVar12 = (FILE *)param_1[4];
              }
              auStack_408[iVar6 * 4 + 2] = uVar4;
              if (pFVar12 == (FILE *)0x0) {
                puVar15 = (undefined1 *)param_1[5];
                if (puVar15 < (undefined1 *)param_1[6]) {
                  uVar4 = *puVar15;
                  param_1[5] = (uint)(puVar15 + 1);
                }
                else {
                  uVar4 = 0;
                }
                pFVar12 = (FILE *)0x0;
              }
              else {
                iVar9 = fgetc(pFVar12);
                if (iVar9 == -1) {
                  iVar9 = 0;
                }
                uVar4 = (undefined1)iVar9;
                pFVar12 = (FILE *)param_1[4];
              }
              auStack_408[iVar6 * 4 + 1] = uVar4;
              if (pFVar12 == (FILE *)0x0) {
                puVar15 = (undefined1 *)param_1[5];
                if (puVar15 < (undefined1 *)param_1[6]) {
                  uVar4 = *puVar15;
                  param_1[5] = (uint)(puVar15 + 1);
                }
                else {
                  uVar4 = 0;
                }
              }
              else {
                iVar9 = fgetc(pFVar12);
                if (iVar9 == -1) {
                  iVar9 = 0;
                }
                uVar4 = (undefined1)iVar9;
              }
              auStack_408[iVar6 * 4] = uVar4;
              if (iVar8 != 0xc) {
                if ((FILE *)param_1[4] == (FILE *)0x0) {
                  if (param_1[5] < param_1[6]) {
                    param_1[5] = param_1[5] + 1;
                  }
                }
                else {
                  fgetc((FILE *)param_1[4]);
                }
              }
              auStack_408[iVar6 * 4 + 3] = 0xff;
              iVar6 = iVar6 + 1;
            } while (iVar6 < local_420);
          }
          iVar6 = 0;
          FUN_00488550();
          if (iVar7 == 4) {
            uVar14 = *param_1 + 1 >> 1;
          }
          else {
            if (iVar7 != 8) goto LAB_0048de1a;
            uVar14 = *param_1;
          }
          uVar10 = param_1[1];
          local_410 = 0;
          if (0 < (int)uVar10) {
            do {
              iVar8 = 0;
              if (0 < (int)*param_1) {
                do {
                  if ((FILE *)param_1[4] == (FILE *)0x0) {
                    pbVar3 = (byte *)param_1[5];
                    if (pbVar3 < (byte *)param_1[6]) {
                      bVar2 = *pbVar3;
                      param_1[5] = (uint)(pbVar3 + 1);
                      uVar10 = (uint)bVar2;
                    }
                    else {
                      uVar10 = 0;
                    }
                  }
                  else {
                    uVar10 = fgetc((FILE *)param_1[4]);
                    if (uVar10 == 0xffffffff) {
                      uVar10 = 0;
                    }
                  }
                  uVar13 = 0;
                  if (iVar7 == 4) {
                    uVar13 = uVar10 & 0xf;
                    uVar10 = (int)uVar10 >> 4;
                  }
                  *(undefined1 *)(iVar6 + (int)_Memory) = auStack_408[uVar10 * 4];
                  *(undefined1 *)(iVar6 + 1 + (int)_Memory) = auStack_408[uVar10 * 4 + 1];
                  *(undefined1 *)(iVar6 + 2 + (int)_Memory) = auStack_408[uVar10 * 4 + 2];
                  iVar9 = iVar6 + 3;
                  if (local_41c == 4) {
                    *(undefined1 *)(iVar9 + (int)_Memory) = 0xff;
                    iVar9 = iVar6 + 4;
                  }
                  iVar6 = iVar9;
                  if (iVar8 + 1U == *param_1) break;
                  if (iVar7 == 8) {
                    if ((FILE *)param_1[4] == (FILE *)0x0) {
                      pbVar3 = (byte *)param_1[5];
                      if (pbVar3 < (byte *)param_1[6]) {
                        bVar2 = *pbVar3;
                        param_1[5] = (uint)(pbVar3 + 1);
                        uVar13 = (uint)bVar2;
                      }
                      else {
                        uVar13 = 0;
                      }
                    }
                    else {
                      uVar13 = fgetc((FILE *)param_1[4]);
                      if (uVar13 == 0xffffffff) {
                        uVar13 = 0;
                      }
                    }
                  }
                  *(undefined1 *)(iVar9 + (int)_Memory) = auStack_408[uVar13 * 4];
                  *(undefined1 *)(iVar9 + 1 + (int)_Memory) = auStack_408[uVar13 * 4 + 1];
                  *(undefined1 *)(iVar9 + 2 + (int)_Memory) = auStack_408[uVar13 * 4 + 2];
                  iVar6 = iVar9 + 3;
                  if (local_41c == 4) {
                    *(undefined1 *)(iVar6 + (int)_Memory) = 0xff;
                    iVar6 = iVar9 + 4;
                  }
                  iVar8 = iVar8 + 2;
                } while (iVar8 < (int)*param_1);
              }
              if ((FILE *)param_1[4] == (FILE *)0x0) {
                param_1[5] = param_1[5] + (-uVar14 & 3);
              }
              else {
                fseek((FILE *)param_1[4],-uVar14 & 3,1);
              }
              uVar10 = param_1[1];
              local_410 = local_410 + 1;
            } while (local_410 < (int)uVar10);
          }
        }
        else {
          iVar6 = 0;
          local_420 = 0;
          local_438 = 0;
          FUN_00488550();
          if (iVar7 == 0x18) {
            iVar8 = *param_1 * 3;
          }
          else if (iVar7 == 0x10) {
            iVar8 = *param_1 * 2;
          }
          else {
            iVar8 = 0;
          }
          if (iVar7 == 0x18) {
            iVar9 = 1;
            local_438 = 1;
          }
          else {
            if ((((iVar7 == 0x20) && (local_434 == 0xff)) && (local_428 == 0xff00)) &&
               (local_414 == -0x1000000)) {
              if (local_43c == -0x1000000) {
                iVar9 = 2;
                local_438 = 2;
                goto LAB_0048df8e;
              }
            }
            else if (((local_414 == 0) || (local_428 == 0)) || (local_434 == 0)) goto LAB_0048de24;
            FUN_0048d600();
            local_420 = FUN_0048d660();
            FUN_0048d600();
            FUN_0048d600();
            FUN_0048d600();
            iVar9 = 0;
          }
LAB_0048df8e:
          uVar10 = param_1[1];
          local_430 = 0;
          if (0 < (int)uVar10) {
            do {
              local_410 = 0;
              if (iVar9 == 0) {
                iVar9 = iVar6;
                if (0 < (int)*param_1) {
                  do {
                    FUN_00488610();
                    if (iVar7 != 0x10) {
                      FUN_00488610();
                    }
                    uVar4 = FUN_0048d6b0(local_420);
                    *(undefined1 *)(iVar9 + (int)_Memory) = uVar4;
                    uVar4 = FUN_0048d6b0(local_420);
                    *(undefined1 *)(iVar9 + 1 + (int)_Memory) = uVar4;
                    uVar4 = FUN_0048d6b0(local_420);
                    *(undefined1 *)(iVar9 + 2 + (int)_Memory) = uVar4;
                    iVar6 = iVar9 + 3;
                    if (local_43c == 0) {
                      uVar4 = 0xff;
                    }
                    else {
                      uVar4 = FUN_0048d6b0(local_420);
                    }
                    if (local_41c == 4) {
                      *(undefined1 *)(iVar6 + (int)_Memory) = uVar4;
                      iVar6 = iVar9 + 4;
                    }
                    local_410 = local_410 + 1;
                    iVar9 = iVar6;
                  } while (local_410 < (int)*param_1);
                }
              }
              else {
                iVar9 = iVar6;
                if (0 < (int)*param_1) {
                  do {
                    if ((FILE *)param_1[4] == (FILE *)0x0) {
                      puVar15 = (undefined1 *)param_1[5];
                      if (puVar15 < (undefined1 *)param_1[6]) {
                        uVar4 = *puVar15;
                        param_1[5] = (uint)(puVar15 + 1);
                      }
                      else {
                        uVar4 = 0;
                      }
                    }
                    else {
                      iVar6 = fgetc((FILE *)param_1[4]);
                      if (iVar6 == -1) {
                        iVar6 = 0;
                      }
                      uVar4 = (undefined1)iVar6;
                    }
                    *(undefined1 *)((int)_Memory + iVar9 + 2) = uVar4;
                    if ((FILE *)param_1[4] == (FILE *)0x0) {
                      puVar15 = (undefined1 *)param_1[5];
                      if (puVar15 < (undefined1 *)param_1[6]) {
                        uVar4 = *puVar15;
                        param_1[5] = (uint)(puVar15 + 1);
                      }
                      else {
                        uVar4 = 0;
                      }
                    }
                    else {
                      iVar6 = fgetc((FILE *)param_1[4]);
                      if (iVar6 == -1) {
                        iVar6 = 0;
                      }
                      uVar4 = (undefined1)iVar6;
                    }
                    *(undefined1 *)((int)_Memory + iVar9 + 1) = uVar4;
                    if ((FILE *)param_1[4] == (FILE *)0x0) {
                      puVar15 = (undefined1 *)param_1[5];
                      if (puVar15 < (undefined1 *)param_1[6]) {
                        uVar4 = *puVar15;
                        param_1[5] = (uint)(puVar15 + 1);
                      }
                      else {
                        uVar4 = 0;
                      }
                    }
                    else {
                      iVar6 = fgetc((FILE *)param_1[4]);
                      if (iVar6 == -1) {
                        iVar6 = 0;
                      }
                      uVar4 = (undefined1)iVar6;
                    }
                    *(undefined1 *)(iVar9 + (int)_Memory) = uVar4;
                    iVar6 = iVar9 + 3;
                    if (local_438 == 2) {
                      if ((FILE *)param_1[4] == (FILE *)0x0) {
                        puVar15 = (undefined1 *)param_1[5];
                        if (puVar15 < (undefined1 *)param_1[6]) {
                          uVar4 = *puVar15;
                          param_1[5] = (uint)(puVar15 + 1);
                        }
                        else {
                          uVar4 = 0;
                        }
                      }
                      else {
                        iVar11 = fgetc((FILE *)param_1[4]);
                        if (iVar11 == -1) {
                          iVar11 = 0;
                        }
                        uVar4 = (undefined1)iVar11;
                      }
                    }
                    else {
                      uVar4 = 0xff;
                    }
                    if (local_41c == 4) {
                      *(undefined1 *)(iVar6 + (int)_Memory) = uVar4;
                      iVar6 = iVar9 + 4;
                    }
                    local_410 = local_410 + 1;
                    iVar9 = iVar6;
                  } while (local_410 < (int)*param_1);
                }
              }
              if ((FILE *)param_1[4] == (FILE *)0x0) {
                param_1[5] = param_1[5] + (-iVar8 & 3U);
              }
              else {
                fseek((FILE *)param_1[4],-iVar8 & 3U,1);
              }
              uVar10 = param_1[1];
              local_430 = local_430 + 1;
              iVar9 = local_438;
            } while (local_430 < (int)uVar10);
          }
        }
        if ((0 < (int)uVar5) && (local_430 = 0, 0 < (int)(uVar10 & 0xfffffffe))) {
          do {
            uVar5 = *param_1;
            iVar6 = 0;
            iVar7 = ((uVar10 - local_430) + -1) * uVar5 * local_41c;
            if (0 < (int)(uVar5 * local_41c)) {
              iVar8 = uVar5 * local_430 * local_41c - iVar7;
              puVar15 = (undefined1 *)((int)_Memory + iVar7);
              do {
                puVar1 = puVar15 + 1;
                uVar4 = puVar1[iVar8 + -1];
                iVar6 = iVar6 + 1;
                puVar1[iVar8 + -1] = *puVar15;
                *puVar15 = uVar4;
                puVar15 = puVar1;
              } while (iVar6 < (int)(*param_1 * local_41c));
            }
            uVar10 = param_1[1];
            local_430 = local_430 + 1;
          } while (local_430 < (int)uVar10 >> 1);
        }
        if (((param_5 == 0) || (param_5 == local_41c)) ||
           (iVar7 = FUN_004886f0(param_5,*param_1,uVar10), iVar7 != 0)) {
          *param_2 = *param_1;
          *param_3 = param_1[1];
          if (param_4 != (uint *)0x0) {
            *param_4 = local_41c;
          }
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        goto LAB_0048de2e;
      }
    }
  }
LAB_0048de24:
  DAT_009936c8 = "Corrupt BMP";
LAB_0048de2e:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000490220 00490220_FUN_00490220 ====
extern undefined4 FUN_004886b0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_004886f0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void __fastcall FUN_00490220(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint param_5);

// decompiled by BatchDecomp @ 00490220 name=FUN_00490220 conv=unknown body=1788

void __fastcall FUN_00490220(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint param_5)

{
  undefined4 stack0xfffffffc;
  undefined1 uVar1;
  uint uVar2;
  size_t _Size;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  undefined1 *puVar16;
  bool bVar17;
  int local_114;
  int local_110;
  int local_f4;
  int local_e8;
  undefined1 *local_dc;
  int local_d8;
  int local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_bc;
  int local_8c;
  uint local_88;
  uint local_84;
  uint local_6c;
  uint local_68;
  undefined1 local_58[3];
  undefined1 auStack_55[65];
  byte local_14[8];
  uint local_c;
  
  local_c = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((FILE *)param_1[4] == (FILE *)0x0) {
    uVar6 = param_1[5];
    memcpy(&local_d8,uVar6,0x80);
    param_1[5] = uVar6 + 0x80;
  }
  else {
    fread(&local_d8,1,0x80,(FILE *)param_1[4]);
  }
  uVar6 = local_bc;
  if (((((local_d8 == 0x20534444) && (local_d4 == 0x7c)) && ((local_d0 & 0x1007) == 0x1007)) &&
      ((local_8c == 0x20 && ((local_88 & 0x44) != 0)))) && ((local_6c & 0x1000) != 0)) {
    param_1[1] = local_cc;
    *param_1 = local_c8;
    param_1[2] = 4;
    if (((local_6c & 0x400000) == 0) || (bVar17 = true, local_bc < 2)) {
      bVar17 = false;
    }
    iVar5 = ((uint)(local_c8 == local_cc) & local_68 >> 9) * 5 + 1;
    uVar7 = local_c8 + 3 >> 2;
    iVar8 = (local_cc + 3 >> 2) * uVar7;
    *param_2 = local_c8;
    *param_3 = param_1[1];
    *param_4 = param_1[2];
    if ((local_88 >> 2 & 1) == 0) {
      param_1[2] = 3;
      uVar6 = 3;
      if ((local_88 & 1) != 0) {
        param_1[2] = 4;
        uVar6 = 4;
      }
      *param_4 = uVar6;
      _Size = *param_1 * param_1[1] * iVar5 * param_1[2];
      local_dc = (undefined1 *)malloc(_Size);
      local_e8 = 0;
      if (iVar5 != 0) {
        do {
          FUN_004886b0(*param_1 * param_1[1] * param_1[2]);
          if ((bVar17) && (uVar7 = 1, uVar6 = local_bc, 1 < local_bc)) {
            do {
              uVar2 = *param_1 >> ((byte)uVar7 & 0x1f);
              uVar4 = param_1[1] >> ((byte)uVar7 & 0x1f);
              if ((int)uVar2 < 1) {
                uVar2 = 1;
              }
              if ((int)uVar4 < 1) {
                uVar4 = 1;
              }
              iVar8 = uVar4 * uVar2 * param_1[2];
              if ((FILE *)param_1[4] == (FILE *)0x0) {
                param_1[5] = param_1[5] + iVar8;
              }
              else {
                fseek((FILE *)param_1[4],iVar8,1);
                uVar6 = local_bc;
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar6);
          }
          local_e8 = local_e8 + 1;
        } while (local_e8 < iVar5);
      }
      iVar8 = 0;
      if (0 < (int)_Size) {
        do {
          uVar1 = local_dc[iVar8];
          local_dc[iVar8] = local_dc[iVar8 + 2];
          local_dc[iVar8 + 2] = uVar1;
          iVar8 = iVar8 + param_1[2];
        } while (iVar8 < (int)_Size);
      }
    }
    else {
      uVar2 = local_84 >> 0x18;
      if ((uVar2 < 0x31) || (0x35 < uVar2)) goto LAB_00490909;
      _Size = *param_1 * param_1[1] * iVar5 * 4;
      local_dc = (undefined1 *)malloc(_Size);
      local_f4 = 0;
      if (iVar5 != 0) {
        do {
          local_114 = 0;
          if (0 < iVar8) {
            do {
              iVar3 = (local_114 / (int)uVar7) * 4;
              local_110 = 4;
              iVar15 = (local_114 % (int)uVar7) * 4;
              FUN_004886b0(8);
              if (uVar2 == 0x31) {
                stbi_decode_DXT1_block();
              }
              else {
                if (uVar2 < 0x34) {
                  iVar9 = 0;
                  do {
                    uVar6 = (local_14[iVar9 >> 3] >> ((byte)iVar9 & 7) & 0xf) * 0xff + 8;
                    auStack_55[iVar9] = (char)((uVar6 >> 4) + uVar6 >> 4);
                    iVar9 = iVar9 + 4;
                  } while (iVar9 < 0x3d);
                }
                else {
                  stbi_decode_DXT45_alpha_block();
                }
                FUN_004886b0(8);
                stbi_decode_DXT_color_block();
              }
              if (*param_1 < iVar15 + 4U) {
                iVar9 = *param_1 + (local_114 % (int)uVar7) * -4;
              }
              else {
                iVar9 = 4;
              }
              if (param_1[1] < iVar3 + 4U) {
                local_110 = param_1[1] + (local_114 / (int)uVar7) * -4;
              }
              iVar14 = 0;
              if (0 < local_110) {
                puVar11 = local_58;
                do {
                  if (0 < iVar9 << 2) {
                    memcpy(local_dc +
                           ((*param_1 * local_f4 + iVar14 + iVar3) * *param_1 + iVar15) * 4,puVar11,
                           iVar9 << 2);
                  }
                  iVar14 = iVar14 + 1;
                  puVar11 = puVar11 + 0x10;
                } while (iVar14 < local_110);
              }
              local_114 = local_114 + 1;
              uVar6 = local_bc;
            } while (local_114 < iVar8);
          }
          if ((bVar17) && (1 < uVar6)) {
            iVar15 = 3;
            do {
              uVar10 = *param_1 >> ((byte)iVar15 & 0x1f);
              uVar4 = param_1[1] >> ((byte)iVar15 & 0x1f);
              if ((int)uVar10 < 1) {
                uVar10 = 1;
              }
              if ((int)uVar4 < 1) {
                uVar4 = 1;
              }
              iVar3 = ((uint)(uVar2 != 0x31) * 8 + 8) * uVar4 * uVar10;
              if ((FILE *)param_1[4] == (FILE *)0x0) {
                param_1[5] = param_1[5] + iVar3;
              }
              else {
                fseek((FILE *)param_1[4],iVar3,1);
                uVar6 = local_bc;
              }
              uVar4 = iVar15 - 1;
              iVar15 = iVar15 + 1;
            } while (uVar4 < uVar6);
          }
          local_f4 = local_f4 + 1;
        } while (local_f4 < iVar5);
      }
    }
    uVar6 = param_1[1];
    param_1[1] = uVar6 * iVar5;
    *param_3 = uVar6 * iVar5;
    bVar17 = false;
    uVar6 = param_1[2];
    if ((uVar6 == 4) && (iVar5 = 3, 3 < (int)_Size)) {
      do {
        if (bVar17) break;
        bVar17 = local_dc[iVar5] != -1;
        iVar5 = iVar5 + 4;
      } while (iVar5 < (int)_Size);
    }
    if (param_5 - 1 < 4) {
      if (param_5 != uVar6) {
        FUN_004886f0(param_5,*param_1,param_1[1]);
        *param_4 = param_1[2];
        __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    else if ((uVar6 == 4) && (!bVar17)) {
      uVar6 = param_1[1];
      uVar7 = *param_1;
      puVar11 = (undefined1 *)malloc(uVar7 * uVar6 * 3);
      if (puVar11 == (undefined1 *)0x0) {
        free(local_dc);
        DAT_009936c8 = "Out of memory";
        *param_4 = 3;
        __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
        return;
      }
      if (0 < (int)uVar6) {
        puVar13 = local_dc;
        uVar2 = uVar7;
        puVar16 = puVar11;
        puVar12 = local_dc;
        do {
          while (-1 < (int)(uVar2 - 1)) {
            *puVar11 = *puVar13;
            puVar11[1] = puVar13[1];
            puVar11[2] = puVar13[2];
            puVar13 = puVar13 + 4;
            puVar11 = puVar11 + 3;
            uVar2 = uVar2 - 1;
          }
          puVar13 = puVar12 + uVar7 * 4;
          puVar11 = puVar16 + uVar7 * 3;
          uVar6 = uVar6 - 1;
          uVar2 = uVar7;
          puVar16 = puVar11;
          puVar12 = puVar13;
        } while (uVar6 != 0);
      }
      free(local_dc);
      *param_4 = 3;
    }
    __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_00490909:
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005a4620 005a4620_GetGeneratedName ====
// decompiled by BatchDecomp @ 005a4620 name=GetGeneratedName conv=__thiscall body=1477

/* public: virtual class util::Str<char> __thiscall
   CombustionRocketModule__GetGeneratedName(void)const  */

Str_L_char_G_ * __thiscall
CombustionRocketModule__GetGeneratedName(CombustionRocketModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xffffff14;
  undefined4 stack0xfffffffc;
  Str_L_char_G_ SVar1;
  bool bVar2;
  LocStr *pLVar3;
  Str_L_char_G_ *pSVar4;
  Str_L_char_G_ *pSVar5;
  int unaff_EDI;
  float10 fVar6;
  char *pcVar7;
  int iVar8;
  void *local_d4[3];
  void *local_c8;
  Str_L_char_G_ local_bc;
  Str_L_char_G_ local_b0;
  Str_L_char_G_ local_a4;
  Str_L_char_G_ local_98;
  Str_L_char_G_ local_8c;
  Str_L_char_G_ local_80;
  Str_L_char_G_ local_74;
  Str_L_char_G_ local_68;
  void *local_5c[3];
  void *local_50;
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  __return_storage_ptr__->Data = (char *)0x0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->Length = 0;
  __return_storage_ptr__->Data = (char *)0x0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->Length = 0;
  util__Str_char___Str_char__o5(&local_44,"Space");
  util__Str_char___Str_char__o5(&local_98,"Space");
  util__Str_char___Str_char__o5(&local_8c,"GetEffectiveExhaustVelocity_km__s()");
  local_38.Data = (char *)0x0;
  pSVar5 = &local_98;
  local_38.Capacity = 0;
  local_38.Length = 0;
  local_68.Data = (char *)0x0;
  local_68.Capacity = 0;
  local_68.Length = 0;
  pcVar7 = (char *)0x5a46ca;
  pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_d4,pSVar5,&local_68);
  iVar8 = 0x5a46d1;
  pSVar4 = util__LocStr__operator__o3(pLVar3);
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff14,&local_8c);
  fVar6 = (float10)(**(code **)(*(int *)this + 0x15c))();
  SVar1.Capacity = iVar8;
  SVar1.Data = (char *)pSVar5;
  SVar1.Length = unaff_EDI;
  pSVar5 = Print(&local_74,(double)CONCAT44(pcVar7,(int)((ulonglong)(double)fVar6 >> 0x20)),SVar1);
  local_20.Length = 0;
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  util__Str_char___Str_char(&local_20,pSVar5);
  util__Str_char___operator__o10(&local_20,pSVar4);
  util__Str_char___Str_char(&local_bc,&local_20);
  if (local_20.Data != (char *)0x0) {
    operator_delete__(local_20.Data);
    ((slice_view *)&local_20)->_0_8_ = ((slice_view *)&local_20)->_0_8_ & 0xffffffff00000000;
  }
  pSVar5 = (Str_L_char_G_ *)
           (**(code **)(**(int **)((int)&(this->ThermalRocket).RegenerativeCooling_Percent + 4) +
                       0x48))();
  local_2c.Length = 0;
  local_2c.Data = (char *)0x0;
  local_2c.Capacity = 0;
  util__Str_char___Str_char(&local_2c,&local_bc);
  util__Str_char___operator__o10(&local_2c,pSVar5);
  util__Str_char___Str_char(&local_b0,&local_2c);
  if (local_2c.Data != (char *)0x0) {
    operator_delete__(local_2c.Data);
    ((slice_view *)&local_2c)->_0_8_ = ((slice_view *)&local_2c)->_0_8_ & 0xffffffff00000000;
  }
  pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_5c,&local_44,&local_38);
  pSVar5 = util__LocStr__operator__o3(pLVar3);
  local_14.Length = 0;
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  util__Str_char___Str_char(&local_14,&local_b0);
  util__Str_char___operator__o10(&local_14,pSVar5);
  util__Str_char___Str_char(&local_a4,&local_14);
  if (local_14.Data != (char *)0x0) {
    operator_delete__(local_14.Data);
    ((slice_view *)&local_14)->_0_8_ = ((slice_view *)&local_14)->_0_8_ & 0xffffffff00000000;
  }
  util__Str_char___operator__o10(__return_storage_ptr__,&local_a4);
  if (local_a4.Data != (char *)0x0) {
    operator_delete__(local_a4.Data);
  }
  if (local_b0.Data != (char *)0x0) {
    operator_delete__(local_b0.Data);
  }
  if (local_bc.Data != (char *)0x0) {
    operator_delete__(local_bc.Data);
  }
  if (local_74.Data != (char *)0x0) {
    operator_delete__(local_74.Data);
    local_74.Data = (char *)0x0;
  }
  if (local_c8 != (void *)0x0) {
    operator_delete__(local_c8);
    local_c8 = (void *)0x0;
  }
  if (local_d4[0] != (void *)0x0) {
    operator_delete__(local_d4[0]);
    local_d4[0] = (void *)0x0;
  }
  if (local_68.Data != (char *)0x0) {
    operator_delete__(local_68.Data);
    local_68.Data = (char *)0x0;
  }
  if (local_80.Data != (char *)0x0) {
    operator_delete__(local_80.Data);
    local_80.Data = (char *)0x0;
  }
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_50 = (void *)0x0;
  }
  if (local_5c[0] != (void *)0x0) {
    operator_delete__(local_5c[0]);
    local_5c[0] = (void *)0x0;
  }
  if (local_38.Data != (char *)0x0) {
    operator_delete__(local_38.Data);
    local_38.Data = (char *)0x0;
  }
  if (local_8c.Data != (char *)0x0) {
    operator_delete__(local_8c.Data);
    local_8c.Data = (char *)0x0;
  }
  if (local_98.Data != (char *)0x0) {
    operator_delete__(local_98.Data);
    local_98.Data = (char *)0x0;
  }
  if (local_44.Data != (char *)0x0) {
    operator_delete__(local_44.Data);
  }
  bVar2 = EngineModule__CanGimbal((EngineModule *)this);
  if (bVar2) {
    iVar8 = EngineModule__GetAttachmentCount((EngineModule *)this);
    if (1 < iVar8) {
      util__Str_char___Str_char__o5(&local_74,"Dash");
      local_38.Data = (char *)0x0;
      local_38.Capacity = 0;
      local_38.Length = 0;
      pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_5c,&local_74,&local_38);
      pSVar5 = util__LocStr__operator__o3(pLVar3);
      EngineModule__GetAttachmentCount((EngineModule *)this);
      pSVar4 = util__Printf(&local_80,"%i");
      local_14.Length = 0;
      local_14.Data = (char *)0x0;
      local_14.Capacity = 0;
      util__Str_char___Str_char(&local_14,pSVar4);
      util__Str_char___operator__o10(&local_14,pSVar5);
      util__Str_char___Str_char(&local_44,&local_14);
      if (local_14.Data != (char *)0x0) {
        operator_delete__(local_14.Data);
        ((slice_view *)&local_14)->_0_8_ = ((slice_view *)&local_14)->_0_8_ & 0xffffffff00000000;
      }
      util__Str_char___operator__o10(__return_storage_ptr__,&local_44);
      if (local_44.Data != (char *)0x0) {
        operator_delete__(local_44.Data);
      }
      if (local_80.Data != (char *)0x0) {
        operator_delete__(local_80.Data);
        local_80.Data = (char *)0x0;
      }
      if (local_50 != (void *)0x0) {
        operator_delete__(local_50);
        local_50 = (void *)0x0;
      }
      if (local_5c[0] != (void *)0x0) {
        operator_delete__(local_5c[0]);
        local_5c[0] = (void *)0x0;
      }
      if (local_38.Data != (char *)0x0) {
        operator_delete__(local_38.Data);
        local_38.Data = (char *)0x0;
      }
      if (local_74.Data != (char *)0x0) {
        operator_delete__(local_74.Data);
      }
    }
    util__Str_char___Str_char__o5(&local_44,"Engine Gimballed");
    local_38.Data = (char *)0x0;
    local_38.Capacity = 0;
    local_38.Length = 0;
    pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_5c,&local_44,&local_38);
    pSVar5 = util__LocStr__operator__o3(pLVar3);
    util__Str_char___operator__o10(__return_storage_ptr__,pSVar5);
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
      local_50 = (void *)0x0;
    }
    if (local_5c[0] != (void *)0x0) {
      operator_delete__(local_5c[0]);
      local_5c[0] = (void *)0x0;
    }
    if (local_38.Data != (char *)0x0) {
      operator_delete__(local_38.Data);
      local_38.Data = (char *)0x0;
    }
    if (local_44.Data != (char *)0x0) {
      operator_delete__(local_44.Data);
    }
  }
  util__Str_char___Str_char__o5(&local_44,"Engine CombustionRocket");
  local_38.Data = (char *)0x0;
  local_38.Capacity = 0;
  local_38.Length = 0;
  pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_5c,&local_44,&local_38);
  pSVar5 = util__LocStr__operator__o3(pLVar3);
  util__Str_char___operator__o10(__return_storage_ptr__,pSVar5);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_50 = (void *)0x0;
  }
  if (local_5c[0] != (void *)0x0) {
    operator_delete__(local_5c[0]);
    local_5c[0] = (void *)0x0;
  }
  if (local_38.Data != (char *)0x0) {
    operator_delete__(local_38.Data);
    local_38.Data = (char *)0x0;
  }
  if (local_44.Data != (char *)0x0) {
    operator_delete__(local_44.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 00005ad430 005ad430_GetGeneratedName ====
// decompiled by BatchDecomp @ 005ad430 name=GetGeneratedName conv=__thiscall body=2028

/* public: virtual class util::Str<char> __thiscall
   MagnetoplasmadynamicThrusterModule__GetGeneratedName(void)const  */

Str_L_char_G_ * __thiscall
MagnetoplasmadynamicThrusterModule__GetGeneratedName(MagnetoplasmadynamicThrusterModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xfffffe9c;
  undefined4 stack0xfffffffc;
  Str_L_char_G_ SVar1;
  Str_L_char_G_ SVar2;
  bool bVar3;
  LocStr *pLVar4;
  Str_L_char_G_ *pSVar5;
  Str_L_char_G_ *pSVar6;
  int unaff_EDI;
  float10 fVar7;
  char *pcVar8;
  int iVar9;
  void *local_14c[3];
  void *local_140;
  void *local_134[3];
  void *local_128;
  Str_L_char_G_ local_11c;
  Str_L_char_G_ local_110;
  Str_L_char_G_ local_104;
  Str_L_char_G_ local_f8;
  Str_L_char_G_ local_ec;
  Str_L_char_G_ local_e0;
  Str_L_char_G_ local_d4;
  Str_L_char_G_ local_c8;
  Str_L_char_G_ local_bc;
  Str_L_char_G_ local_b0;
  Str_L_char_G_ local_a4;
  Str_L_char_G_ local_98;
  Str_L_char_G_ local_8c;
  Str_L_char_G_ local_80;
  void *local_74[3];
  void *local_68;
  Str_L_char_G_ local_5c;
  Str_L_char_G_ local_50;
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  __return_storage_ptr__->Data = (char *)0x0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->Length = 0;
  __return_storage_ptr__->Data = (char *)0x0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->Length = 0;
  util__Str_char___Str_char__o5(&local_5c,"Space");
  util__Str_char___Str_char__o5(&local_d4,"Space");
  util__Str_char___Str_char__o5(&local_c8,"GetPowerRequired_W()");
  util__Str_char___Str_char__o5(&local_bc,"Space");
  util__Str_char___Str_char__o5(&local_b0,"GetEffectiveExhaustVelocity_km__s()");
  local_50.Data = (char *)0x0;
  pSVar6 = &local_bc;
  local_50.Capacity = 0;
  local_50.Length = 0;
  local_8c.Data = (char *)0x0;
  local_8c.Capacity = 0;
  local_8c.Length = 0;
  local_80.Data = (char *)0x0;
  local_80.Capacity = 0;
  local_80.Length = 0;
  pcVar8 = (char *)0x5ad515;
  pLVar4 = (LocStr *)util__LocStr__LocStr((LocStr *)local_134,pSVar6,&local_80);
  iVar9 = 0x5ad51c;
  pSVar5 = util__LocStr__operator__o3(pLVar4);
  GetUnitsOfType((Str_L_char_G_ *)&stack0xfffffe9c,&local_b0);
  fVar7 = (float10)(**(code **)(*(int *)this + 0x15c))();
  SVar1.Capacity = iVar9;
  SVar1.Data = (char *)pSVar6;
  SVar1.Length = unaff_EDI;
  pSVar6 = Print(&local_11c,(double)CONCAT44(pcVar8,(int)((ulonglong)(double)fVar7 >> 0x20)),SVar1);
  local_20.Length = 0;
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  util__Str_char___Str_char(&local_20,pSVar6);
  util__Str_char___operator__o10(&local_20,pSVar5);
  pSVar6 = &local_20;
  iVar9 = 0x5ad584;
  util__Str_char___Str_char(&local_110,pSVar6);
  if ((Str_L_char_G_ *)local_20.Data != (Str_L_char_G_ *)0x0) {
    iVar9 = 0x5ad591;
    pSVar6 = (Str_L_char_G_ *)local_20.Data;
    operator_delete__(local_20.Data);
    ((slice_view *)&local_20)->_0_8_ = ((slice_view *)&local_20)->_0_8_ & 0xffffffff00000000;
  }
  GetUnitsOfType((Str_L_char_G_ *)&stack0xfffffe9c,&local_c8);
  fVar7 = (float10)(**(code **)(*(int *)this + 0x9c))();
  SVar2.Capacity = (int)pSVar6;
  SVar2.Data = (char *)iVar9;
  SVar2.Length = unaff_EDI;
  pSVar6 = Print(&local_98,(double)CONCAT44(pcVar8,(int)((ulonglong)(double)fVar7 >> 0x20)),SVar2);
  local_2c.Length = 0;
  local_2c.Data = (char *)0x0;
  local_2c.Capacity = 0;
  util__Str_char___Str_char(&local_2c,&local_110);
  util__Str_char___operator__o10(&local_2c,pSVar6);
  util__Str_char___Str_char(&local_104,&local_2c);
  if (local_2c.Data != (char *)0x0) {
    operator_delete__(local_2c.Data);
    ((slice_view *)&local_2c)->_0_8_ = ((slice_view *)&local_2c)->_0_8_ & 0xffffffff00000000;
  }
  pLVar4 = (LocStr *)util__LocStr__LocStr((LocStr *)local_14c,&local_d4,&local_8c);
  pSVar6 = util__LocStr__operator__o3(pLVar4);
  local_38.Length = 0;
  local_38.Data = (char *)0x0;
  local_38.Capacity = 0;
  util__Str_char___Str_char(&local_38,&local_104);
  util__Str_char___operator__o10(&local_38,pSVar6);
  util__Str_char___Str_char(&local_f8,&local_38);
  if (local_38.Data != (char *)0x0) {
    operator_delete__(local_38.Data);
    ((slice_view *)&local_38)->_0_8_ = ((slice_view *)&local_38)->_0_8_ & 0xffffffff00000000;
  }
  pSVar6 = (Str_L_char_G_ *)(**(code **)(*(int *)this[1]._pad_0x0_0 + 0x48))();
  local_44.Length = 0;
  local_44.Data = (char *)0x0;
  local_44.Capacity = 0;
  util__Str_char___Str_char(&local_44,&local_f8);
  util__Str_char___operator__o10(&local_44,pSVar6);
  util__Str_char___Str_char(&local_ec,&local_44);
  if (local_44.Data != (char *)0x0) {
    operator_delete__(local_44.Data);
    ((slice_view *)&local_44)->_0_8_ = ((slice_view *)&local_44)->_0_8_ & 0xffffffff00000000;
  }
  pLVar4 = (LocStr *)util__LocStr__LocStr((LocStr *)local_74,&local_5c,&local_50);
  pSVar6 = util__LocStr__operator__o3(pLVar4);
  local_14.Length = 0;
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  util__Str_char___Str_char(&local_14,&local_ec);
  util__Str_char___operator__o10(&local_14,pSVar6);
  util__Str_char___Str_char(&local_e0,&local_14);
  if (local_14.Data != (char *)0x0) {
    operator_delete__(local_14.Data);
    ((slice_view *)&local_14)->_0_8_ = ((slice_view *)&local_14)->_0_8_ & 0xffffffff00000000;
  }
  util__Str_char___operator__o10(__return_storage_ptr__,&local_e0);
  if (local_e0.Data != (char *)0x0) {
    operator_delete__(local_e0.Data);
  }
  if (local_ec.Data != (char *)0x0) {
    operator_delete__(local_ec.Data);
  }
  if (local_f8.Data != (char *)0x0) {
    operator_delete__(local_f8.Data);
  }
  if (local_104.Data != (char *)0x0) {
    operator_delete__(local_104.Data);
  }
  if (local_110.Data != (char *)0x0) {
    operator_delete__(local_110.Data);
  }
  if (local_11c.Data != (char *)0x0) {
    operator_delete__(local_11c.Data);
    local_11c.Data = (char *)0x0;
  }
  if (local_128 != (void *)0x0) {
    operator_delete__(local_128);
    local_128 = (void *)0x0;
  }
  if (local_134[0] != (void *)0x0) {
    operator_delete__(local_134[0]);
    local_134[0] = (void *)0x0;
  }
  if (local_80.Data != (char *)0x0) {
    operator_delete__(local_80.Data);
    local_80.Data = (char *)0x0;
  }
  if (local_98.Data != (char *)0x0) {
    operator_delete__(local_98.Data);
    local_98.Data = (char *)0x0;
  }
  if (local_140 != (void *)0x0) {
    operator_delete__(local_140);
    local_140 = (void *)0x0;
  }
  if (local_14c[0] != (void *)0x0) {
    operator_delete__(local_14c[0]);
    local_14c[0] = (void *)0x0;
  }
  if (local_8c.Data != (char *)0x0) {
    operator_delete__(local_8c.Data);
    local_8c.Data = (char *)0x0;
  }
  if (local_a4.Data != (char *)0x0) {
    operator_delete__(local_a4.Data);
    local_a4.Data = (char *)0x0;
  }
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_68 = (void *)0x0;
  }
  if (local_74[0] != (void *)0x0) {
    operator_delete__(local_74[0]);
    local_74[0] = (void *)0x0;
  }
  if (local_50.Data != (char *)0x0) {
    operator_delete__(local_50.Data);
    local_50.Data = (char *)0x0;
  }
  if (local_b0.Data != (char *)0x0) {
    operator_delete__(local_b0.Data);
    local_b0.Data = (char *)0x0;
  }
  if (local_bc.Data != (char *)0x0) {
    operator_delete__(local_bc.Data);
    local_bc.Data = (char *)0x0;
  }
  if (local_c8.Data != (char *)0x0) {
    operator_delete__(local_c8.Data);
    local_c8.Data = (char *)0x0;
  }
  if (local_d4.Data != (char *)0x0) {
    operator_delete__(local_d4.Data);
    local_d4.Data = (char *)0x0;
  }
  if (local_5c.Data != (char *)0x0) {
    operator_delete__(local_5c.Data);
  }
  bVar3 = EngineModule__CanGimbal((EngineModule *)this);
  if (bVar3) {
    iVar9 = EngineModule__GetAttachmentCount((EngineModule *)this);
    if (1 < iVar9) {
      util__Str_char___Str_char__o5(&local_98,"Dash");
      local_50.Data = (char *)0x0;
      local_50.Capacity = 0;
      local_50.Length = 0;
      pLVar4 = (LocStr *)util__LocStr__LocStr((LocStr *)local_74,&local_98,&local_50);
      pSVar6 = util__LocStr__operator__o3(pLVar4);
      EngineModule__GetAttachmentCount((EngineModule *)this);
      pSVar5 = util__Printf(&local_a4,"%i");
      local_14.Length = 0;
      local_14.Data = (char *)0x0;
      local_14.Capacity = 0;
      util__Str_char___Str_char(&local_14,pSVar5);
      util__Str_char___operator__o10(&local_14,pSVar6);
      util__Str_char___Str_char(&local_5c,&local_14);
      if (local_14.Data != (char *)0x0) {
        operator_delete__(local_14.Data);
        ((slice_view *)&local_14)->_0_8_ = ((slice_view *)&local_14)->_0_8_ & 0xffffffff00000000;
      }
      util__Str_char___operator__o10(__return_storage_ptr__,&local_5c);
      if (local_5c.Data != (char *)0x0) {
        operator_delete__(local_5c.Data);
      }
      if (local_a4.Data != (char *)0x0) {
        operator_delete__(local_a4.Data);
        local_a4.Data = (char *)0x0;
      }
      if (local_68 != (void *)0x0) {
        operator_delete__(local_68);
        local_68 = (void *)0x0;
      }
      if (local_74[0] != (void *)0x0) {
        operator_delete__(local_74[0]);
        local_74[0] = (void *)0x0;
      }
      if (local_50.Data != (char *)0x0) {
        operator_delete__(local_50.Data);
        local_50.Data = (char *)0x0;
      }
      if (local_98.Data != (char *)0x0) {
        operator_delete__(local_98.Data);
      }
    }
    util__Str_char___Str_char__o5(&local_5c,"Engine Gimballed");
    local_50.Data = (char *)0x0;
    local_50.Capacity = 0;
    local_50.Length = 0;
    pLVar4 = (LocStr *)util__LocStr__LocStr((LocStr *)local_74,&local_5c,&local_50);
    pSVar6 = util__LocStr__operator__o3(pLVar4);
    util__Str_char___operator__o10(__return_storage_ptr__,pSVar6);
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
      local_68 = (void *)0x0;
    }
    if (local_74[0] != (void *)0x0) {
      operator_delete__(local_74[0]);
      local_74[0] = (void *)0x0;
    }
    if (local_50.Data != (char *)0x0) {
      operator_delete__(local_50.Data);
      local_50.Data = (char *)0x0;
    }
    if (local_5c.Data != (char *)0x0) {
      operator_delete__(local_5c.Data);
    }
  }
  util__Str_char___Str_char__o5(&local_5c,"Engine MagnetoplasmadynamicThruster");
  local_50.Data = (char *)0x0;
  local_50.Capacity = 0;
  local_50.Length = 0;
  pLVar4 = (LocStr *)util__LocStr__LocStr((LocStr *)local_74,&local_5c,&local_50);
  pSVar6 = util__LocStr__operator__o3(pLVar4);
  util__Str_char___operator__o10(__return_storage_ptr__,pSVar6);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_68 = (void *)0x0;
  }
  if (local_74[0] != (void *)0x0) {
    operator_delete__(local_74[0]);
    local_74[0] = (void *)0x0;
  }
  if (local_50.Data != (char *)0x0) {
    operator_delete__(local_50.Data);
    local_50.Data = (char *)0x0;
  }
  if (local_5c.Data != (char *)0x0) {
    operator_delete__(local_5c.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 00005ae320 005ae320_GetStatuses ====
// decompiled by BatchDecomp @ 005ae320 name=GetStatuses conv=__thiscall body=3074

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual class DesignStatusBuffer __thiscall
   MagnetoplasmadynamicThrusterModule__GetStatuses(class DataParser *)const  */

DesignStatusBuffer * __thiscall
MagnetoplasmadynamicThrusterModule__GetStatuses(MagnetoplasmadynamicThrusterModule *this,DesignStatusBuffer *__return_storage_ptr__,
          DataParser *param_1)

{
  undefined4 stack0xffffff40;
  undefined4 stack0xffffff44;
  undefined4 stack0xfffffffc;
  Str_L_char_G_ SVar1;
  Str_L_char_G_ SVar2;
  Str_L_char_G_ SVar3;
  Str_L_char_G_ SVar4;
  Str_L_char_G_ SVar5;
  Str_L_char_G_ SVar6;
  Maybe_L_double_G_ *pMVar7;
  Str_L_char_G_ *pSVar8;
  Str_L_char_G_ *pSVar9;
  CylindricalStress *pCVar10;
  uint unaff_EDI;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  char *pcVar16;
  Str_L_char_G_ *pSVar17;
  char *pcVar18;
  int iVar19;
  Str_L_char_G_ *pSVar20;
  ModulePlacer *pMVar21;
  Str_L_char_G_ local_9c;
  undefined1 local_90[4];
  Str_L_char_G_ local_8c;
  Str_L_char_G_ local_80;
  undefined8 local_74;
  Str_L_char_G_ local_6c;
  Str_L_char_G_ local_60;
  Str_L_char_G_ local_54;
  double local_48;
  double local_40;
  CylindricalStress local_38;
  CylindricalStress local_20;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  __return_storage_ptr__->DataManager = (DataParser *)0x0;
  (__return_storage_ptr__->Messages)._pad_0x0_0 = 0;
  (__return_storage_ptr__->Messages).Data = (DesignStatusMessage *)0x0;
  (__return_storage_ptr__->Messages).Size = 0;
  *(undefined8 *)&(__return_storage_ptr__->Messages).Capacity = 0;
  Module__GetStatuses((Module *)this,__return_storage_ptr__,param_1);
  util__Str_char___Str_char__o5(&local_80,"MPDThrusterOnsetPhenomenon");
  local_74 = *(double *)&this[1]._pad_0x0_0;
  local_54.Data = (char *)0x0;
  local_54.Capacity = 0;
  local_54.Length = 0;
  local_6c.Data = (char *)0x0;
  local_6c.Capacity = 0;
  local_6c.Length = 0;
  local_60.Data = (char *)0x0;
  local_60.Capacity = 0;
  local_60.Length = 0;
  local_48 = Material__GetAtomicMass_amu((Material *)this[1]._pad_0x0_0);
  local_74 = local_74 * local_74;
  pMVar7 = util__Sqrt((Maybe_L_double_G_ *)local_90,&local_48);
  if (pMVar7->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_40 = TurbopumpSubModule__GetMassFlowRate_kg__s((TurbopumpSubModule *)&this[1]._pad_0x0_0);
  DesignStatusBuffer__CheckError(__return_storage_ptr__,/*4253356219000000*/330000000000.0 < (pMVar7->Data * local_74) / local_40,
             &local_80,&local_60,&local_6c,&local_54,(ModulePlacer *)0x0);
  if (local_60.Data != (char *)0x0) {
    operator_delete__(local_60.Data);
    local_60.Data = (char *)0x0;
  }
  if (local_6c.Data != (char *)0x0) {
    operator_delete__(local_6c.Data);
    local_6c.Data = (char *)0x0;
  }
  if (local_54.Data != (char *)0x0) {
    operator_delete__(local_54.Data);
    local_54.Data = (char *)0x0;
  }
  if (local_80.Data != (char *)0x0) {
    operator_delete__(local_80.Data);
  }
  util__Str_char___Str_char__o5(&local_8c,"GetAnodeStress_Pa()");
  util__Str_char___Str_char__o5(&local_60,"AnodeComposition->GetYieldStrength_Pa()");
  util__Str_char___Str_char__o5(&local_6c,"MPDThrusterAnodeStress");
  local_40 = *(double *)&this[1]._pad_0x0_0 + *(double *)&this[1]._pad_0x0_0;
  local_54.Data = (char *)0x0;
  local_54.Capacity = 0;
  local_54.Length = 0;
  local_48 = *(double *)&this[1]._pad_0x0_0;
  dVar15 = GetThrust_N(this);
  dVar13 = *(double *)&this[1]._pad_0x0_0 + *(double *)&this[1]._pad_0x0_0;
  local_40 = dVar15 / (local_40 * /*401921fb54442d18*/6.283185307179586 * local_48);
  dVar15 = dVar13 + *(double *)&this[1]._pad_0x0_0;
  Mechanics__GetMaximumStressOnThickTube(&local_20,(double)CONCAT44(SUB84(dVar15,0),(int)((ulonglong)dVar13 >> 0x20)),
             (double)CONCAT44(SUB84(local_40,0),(char *)((ulonglong)dVar15 >> 0x20)),
             (double)((ulonglong)local_40 >> 0x20),(double)((ulonglong)unaff_EDI << 0x20));
  ((slice_view *)&local_74)->_0_4_ = *(undefined4 *)&local_20.HoopStress_Pa;
  ((slice_view *)&local_74)->_4_4_ = (char *)((ulonglong)local_20.HoopStress_Pa >> 0x20);
  if (local_20.HoopStress_Pa <= local_20.RadialStress_Pa) {
    ((slice_view *)&local_74)->_0_4_ = *(undefined4 *)&local_20.RadialStress_Pa;
    ((slice_view *)&local_74)->_4_4_ = (char *)((ulonglong)local_20.RadialStress_Pa >> 0x20);
  }
  local_40 = *(double *)&this[1]._pad_0x0_0 + *(double *)&this[1]._pad_0x0_0;
  local_48 = *(double *)&this[1]._pad_0x0_0;
  dVar15 = GetThrust_N(this);
  dVar14 = *(double *)&this[1]._pad_0x0_0 + *(double *)&this[1]._pad_0x0_0;
  local_40 = dVar15 / (local_40 * /*401921fb54442d18*/6.283185307179586 * local_48);
  dVar15 = dVar14 + *(double *)&this[1]._pad_0x0_0;
  pcVar16 = (char *)((ulonglong)dVar15 >> 0x20);
  dVar13 = local_40;
  Mechanics__GetMaximumStressOnThickTube(&local_38,(double)CONCAT44(SUB84(dVar15,0),(int)((ulonglong)dVar14 >> 0x20)),
             (double)CONCAT44(SUB84(local_40,0),pcVar16),(double)((ulonglong)local_40 >> 0x20),
             (double)((ulonglong)unaff_EDI << 0x20));
  uVar11 = *(undefined4 *)&local_38.HoopStress_Pa;
  uVar12 = (undefined4)((ulonglong)local_38.HoopStress_Pa >> 0x20);
  pSVar20 = &local_54;
  if (local_38.HoopStress_Pa <= local_38.RadialStress_Pa) {
    uVar11 = *(undefined4 *)&local_38.RadialStress_Pa;
    uVar12 = (undefined4)((ulonglong)local_38.RadialStress_Pa >> 0x20);
  }
  pMVar21 = (ModulePlacer *)0x0;
  local_40 = (double)CONCAT44(uVar12,uVar11);
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff44,&local_8c);
  iVar19 = *(undefined4 *)&dVar13;
  SVar4.Length = (int)pSVar20;
  ((slice_view *)&SVar4)->_0_8_ = dVar13;
  pcVar18 = ((slice_view *)&local_74)->_4_4_;
  pSVar8 = Print(&local_9c,(double)CONCAT44(pcVar16,((slice_view *)&local_74)->_4_4_),SVar4);
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff40,&local_60);
  dVar15 = Material__GetYieldStrength_Pa((Material *)this[1]._pad_0x0_0);
  SVar1.Capacity = iVar19;
  SVar1.Data = pcVar16;
  SVar1.Length = (int)pSVar8;
  pSVar9 = Print(&local_80,(double)CONCAT44(pcVar18,(int)((ulonglong)dVar15 >> 0x20)),SVar1);
  pSVar17 = &local_6c;
  local_48 = Material__GetYieldStrength_Pa((Material *)this[1]._pad_0x0_0);
  DesignStatusBuffer__CheckError(__return_storage_ptr__,local_48 < local_40,pSVar17,pSVar9,pSVar8,pSVar20,pMVar21);
  if (local_80.Data != (char *)0x0) {
    operator_delete__(local_80.Data);
    local_80.Data = (char *)0x0;
  }
  if (local_9c.Data != (char *)0x0) {
    operator_delete__(local_9c.Data);
    local_9c.Data = (char *)0x0;
  }
  if (local_54.Data != (char *)0x0) {
    operator_delete__(local_54.Data);
    local_54.Data = (char *)0x0;
  }
  if (local_6c.Data != (char *)0x0) {
    operator_delete__(local_6c.Data);
    local_6c.Data = (char *)0x0;
  }
  if (local_60.Data != (char *)0x0) {
    operator_delete__(local_60.Data);
    local_60.Data = (char *)0x0;
  }
  if (local_8c.Data != (char *)0x0) {
    operator_delete__(local_8c.Data);
  }
  util__Str_char___Str_char__o5(&local_80,"GetCathodeStress_Pa()");
  util__Str_char___Str_char__o5(&local_60,"CathodeComposition->GetYieldStrength_Pa()");
  util__Str_char___Str_char__o5(&local_6c,"MPDThrusterCathodeStress");
  pMVar21 = (ModulePlacer *)0x0;
  pSVar20 = &local_54;
  local_54.Data = (char *)0x0;
  local_54.Capacity = 0;
  local_54.Length = 0;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff44,&local_80);
  dVar15 = GetCathodeStress_Pa(this);
  pcVar16 = (char *)((ulonglong)dVar15 >> 0x20);
  SVar5.Capacity = (int)pSVar8;
  SVar5.Data = (char *)pSVar9;
  SVar5.Length = (int)pSVar20;
  pSVar8 = Print(&local_9c,(double)CONCAT44(pSVar17,pcVar16),SVar5);
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff40,&local_60);
  dVar15 = Material__GetYieldStrength_Pa((Material *)this[1]._pad_0x0_0);
  SVar2.Capacity = (int)pSVar9;
  SVar2.Data = (char *)pSVar17;
  SVar2.Length = (int)pSVar8;
  pSVar9 = Print(&local_8c,(double)CONCAT44(pcVar16,(int)((ulonglong)dVar15 >> 0x20)),SVar2);
  pSVar17 = &local_6c;
  local_48 = Material__GetYieldStrength_Pa((Material *)this[1]._pad_0x0_0);
  local_40 = GetCathodeStress_Pa(this);
  DesignStatusBuffer__CheckError(__return_storage_ptr__,local_48 < local_40,pSVar17,pSVar9,pSVar8,pSVar20,pMVar21);
  if (local_8c.Data != (char *)0x0) {
    operator_delete__(local_8c.Data);
    local_8c.Data = (char *)0x0;
  }
  if (local_9c.Data != (char *)0x0) {
    operator_delete__(local_9c.Data);
    local_9c.Data = (char *)0x0;
  }
  if (local_54.Data != (char *)0x0) {
    operator_delete__(local_54.Data);
    local_54.Data = (char *)0x0;
  }
  if (local_6c.Data != (char *)0x0) {
    operator_delete__(local_6c.Data);
    local_6c.Data = (char *)0x0;
  }
  if (local_60.Data != (char *)0x0) {
    operator_delete__(local_60.Data);
    local_60.Data = (char *)0x0;
  }
  if (local_80.Data != (char *)0x0) {
    operator_delete__(local_80.Data);
  }
  util__Str_char___Str_char__o5(&local_80,"GetInsulatorStress_Pa()");
  util__Str_char___Str_char__o5(&local_60,"InsulatorComposition->GetYieldStrength_Pa()");
  util__Str_char___Str_char__o5(&local_6c,"MPDThrusterInsulatorStress");
  local_48 = *(double *)&this[1]._pad_0x0_0;
  local_40 = *(double *)&this[1]._pad_0x0_0 + local_48;
  local_54.Data = (char *)0x0;
  local_54.Capacity = 0;
  local_54.Length = 0;
  dVar15 = GetThrust_N(this);
  local_40 = dVar15 / (local_40 * /*400921fb54442d18*/3.141592653589793 * local_40 -
                      local_48 * /*400921fb54442d18*/3.141592653589793 * local_48);
  dVar15 = *(double *)&this[1]._pad_0x0_0 + *(double *)&this[1]._pad_0x0_0;
  pCVar10 = Mechanics__GetMaximumStressOnThickTube(&local_38,
                       (double)CONCAT44(SUB84(dVar15,0),
                                        (int)((ulonglong)*(double *)&this[1]._pad_0x0_0 >> 0x20)),
                       (double)CONCAT44(SUB84(local_40,0),(char *)((ulonglong)dVar15 >> 0x20)),
                       (double)((ulonglong)local_40 >> 0x20),(double)((ulonglong)unaff_EDI << 0x20))
  ;
  local_48 = *(double *)&this[1]._pad_0x0_0;
  local_74 = pCVar10->AxialStress_Pa;
  local_40 = *(double *)&this[1]._pad_0x0_0 + local_48;
  dVar15 = GetThrust_N(this);
  local_40 = dVar15 / (local_40 * /*400921fb54442d18*/3.141592653589793 * local_40 -
                      local_48 * /*400921fb54442d18*/3.141592653589793 * local_48);
  dVar13 = *(double *)&this[1]._pad_0x0_0 + *(double *)&this[1]._pad_0x0_0;
  pcVar18 = (char *)((ulonglong)dVar13 >> 0x20);
  dVar15 = local_40;
  pCVar10 = Mechanics__GetMaximumStressOnThickTube(&local_20,
                       (double)CONCAT44(SUB84(dVar13,0),
                                        (int)((ulonglong)*(double *)&this[1]._pad_0x0_0 >> 0x20)),
                       (double)CONCAT44(SUB84(local_40,0),pcVar18),
                       (double)((ulonglong)local_40 >> 0x20),(double)((ulonglong)unaff_EDI << 0x20))
  ;
  local_40 = pCVar10->AxialStress_Pa;
  pSVar20 = &local_54;
  pMVar21 = (ModulePlacer *)0x0;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff44,&local_80);
  iVar19 = *(undefined4 *)&dVar15;
  pcVar16 = (char *)((ulonglong)local_74 >> 0x20);
  SVar6.Length = (int)pSVar20;
  ((slice_view *)&SVar6)->_0_8_ = dVar15;
  pSVar8 = Print(&local_9c,(double)CONCAT44(pcVar18,pcVar16),SVar6);
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff40,&local_60);
  dVar15 = Material__GetYieldStrength_Pa((Material *)this[1]._pad_0x0_0);
  SVar3.Capacity = iVar19;
  SVar3.Data = pcVar18;
  SVar3.Length = (int)pSVar8;
  pSVar9 = Print(&local_8c,(double)CONCAT44(pcVar16,(int)((ulonglong)dVar15 >> 0x20)),SVar3);
  pSVar17 = &local_6c;
  local_48 = Material__GetYieldStrength_Pa((Material *)this[1]._pad_0x0_0);
  DesignStatusBuffer__CheckError(__return_storage_ptr__,local_48 < local_40,pSVar17,pSVar9,pSVar8,pSVar20,pMVar21);
  if (local_8c.Data != (char *)0x0) {
    operator_delete__(local_8c.Data);
    local_8c.Data = (char *)0x0;
  }
  if (local_9c.Data != (char *)0x0) {
    operator_delete__(local_9c.Data);
    local_9c.Data = (char *)0x0;
  }
  if (local_54.Data != (char *)0x0) {
    operator_delete__(local_54.Data);
    local_54.Data = (char *)0x0;
  }
  if (local_6c.Data != (char *)0x0) {
    operator_delete__(local_6c.Data);
    local_6c.Data = (char *)0x0;
  }
  if (local_60.Data != (char *)0x0) {
    operator_delete__(local_60.Data);
    local_60.Data = (char *)0x0;
  }
  if (local_80.Data != (char *)0x0) {
    operator_delete__(local_80.Data);
  }
  util__Str_char___Str_char__o5(&local_8c,"MPDThrusterInsulatorConductivity");
  local_40 = *(double *)&this[1]._pad_0x0_0;
  local_60.Data = (char *)0x0;
  local_60.Capacity = 0;
  local_60.Length = 0;
  local_6c.Data = (char *)0x0;
  local_6c.Capacity = 0;
  local_6c.Length = 0;
  local_54.Data = (char *)0x0;
  local_54.Capacity = 0;
  local_54.Length = 0;
  local_48 = Physics__GetResistanceOfAThickCylindricalShell(*(double *)(this[1]._pad_0x0_0 + 0xb8),local_40,
                        *(double *)&this[1]._pad_0x0_0 + local_40,*(double *)&this[1]._pad_0x0_0);
  dVar13 = *(double *)&this[1]._pad_0x0_0 + *(double *)&this[1]._pad_0x0_0;
  pMVar21 = (ModulePlacer *)0x0;
  dVar15 = dVar13 + *(double *)&this[1]._pad_0x0_0;
  pSVar20 = &local_60;
  pSVar17 = &local_6c;
  pSVar8 = &local_54;
  pSVar9 = &local_8c;
  local_40 = (*(double *)(this[1]._pad_0x0_0 + 0xb8) * *(double *)&this[1]._pad_0x0_0) /
             (dVar15 * /*400921fb54442d18*/3.141592653589793 * dVar15 - dVar13 * /*400921fb54442d18*/3.141592653589793 * dVar13)
             + (*(double *)(this[1]._pad_0x0_0 + 0xb8) * *(double *)&this[1]._pad_0x0_0) /
               (local_40 * /*400921fb54442d18*/3.141592653589793 * local_40) + local_48;
  local_48 = Physics__GetResistanceOfAThickCylindricalShell(*(double *)(this[1]._pad_0x0_0 + 0xb8),*(double *)&this[1]._pad_0x0_0,dVar13,
                        *(double *)&this[1]._pad_0x0_0);
  DesignStatusBuffer__CheckError(__return_storage_ptr__,local_48 <= local_40,pSVar9,pSVar8,pSVar17,pSVar20,pMVar21);
  if (local_54.Data != (char *)0x0) {
    operator_delete__(local_54.Data);
    local_54.Data = (char *)0x0;
  }
  if (local_6c.Data != (char *)0x0) {
    operator_delete__(local_6c.Data);
    local_6c.Data = (char *)0x0;
  }
  if (local_60.Data != (char *)0x0) {
    operator_delete__(local_60.Data);
    local_60.Data = (char *)0x0;
  }
  if (local_8c.Data != (char *)0x0) {
    operator_delete__(local_8c.Data);
  }
  util__Str_char___Str_char__o5(&local_8c,"MPDThrusterLongEnough");
  local_60.Data = (char *)0x0;
  local_60.Capacity = 0;
  local_60.Length = 0;
  local_6c.Data = (char *)0x0;
  local_6c.Capacity = 0;
  local_6c.Length = 0;
  local_54.Data = (char *)0x0;
  local_54.Capacity = 0;
  local_54.Length = 0;
  local_48 = TurbopumpSubModule__GetMassFlowRate_kg__s((TurbopumpSubModule *)&this[1]._pad_0x0_0);
  local_40 = TurbopumpSubModule__GetMassFlowRate_kg__s((TurbopumpSubModule *)&this[1]._pad_0x0_0);
  local_74 = *(double *)&this[1]._pad_0x0_0;
  dVar13 = (/*3ff22f837b4a233a*/1.1366 - local_40 * /*3f8b3d07c84b5dcc*/0.0133) * local_74 +
           (/*4090e00000000000*/1080.0 - local_48 * /*4014000000000000*/5.0);
  dVar15 = 0.0;
  if (0.0 <= dVar13) {
    dVar15 = dVar13;
  }
  local_48 = dVar15 * *(double *)(this[1]._pad_0x0_0 + 0x90) *
             *(double *)&this[1]._pad_0x0_0 * *(double *)&this[1]._pad_0x0_0 * /*400921fb54442d18*/3.141592653589793
             * *(double *)&this[1]._pad_0x0_0 * *(double *)(this[1]._pad_0x0_0 + 0x30);
  dVar15 = GetAnodeSheathVoltageDrop_V(this);
  local_40 = local_74;
  local_48 = local_48 / (dVar15 * local_74);
  local_40 = TurbopumpSubModule__GetMassFlowRate_kg__s((TurbopumpSubModule *)&this[1]._pad_0x0_0);
  dVar15 = *(double *)&this[1]._pad_0x0_0;
  dVar13 = *(double *)&this[1]._pad_0x0_0 + dVar15;
  dVar15 = ((local_40 / *(double *)(this[1]._pad_0x0_0 + 0x30)) * local_48) /
           (dVar13 * /*400921fb54442d18*/3.141592653589793 * dVar13 - dVar15 * /*400921fb54442d18*/3.141592653589793 * dVar15);
  DesignStatusBuffer__CheckError(__return_storage_ptr__,
             *(double *)&this[1]._pad_0x0_0 <= dVar15 && dVar15 != *(double *)&this[1]._pad_0x0_0,
             &local_8c,&local_54,&local_6c,&local_60,(ModulePlacer *)0x0);
  if (local_54.Data != (char *)0x0) {
    operator_delete__(local_54.Data);
    local_54.Data = (char *)0x0;
  }
  if (local_6c.Data != (char *)0x0) {
    operator_delete__(local_6c.Data);
    local_6c.Data = (char *)0x0;
  }
  if (local_60.Data != (char *)0x0) {
    operator_delete__(local_60.Data);
    local_60.Data = (char *)0x0;
  }
  if (local_8c.Data != (char *)0x0) {
    operator_delete__(local_8c.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 00005b6280 005b6280_GetGeneratedName ====
// decompiled by BatchDecomp @ 005b6280 name=GetGeneratedName conv=__thiscall body=1483

/* public: virtual class util::Str<char> __thiscall
   NuclearThermalRocketModule__GetGeneratedName(void)const  */

Str_L_char_G_ * __thiscall
NuclearThermalRocketModule__GetGeneratedName(NuclearThermalRocketModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xffffff10;
  undefined4 stack0xfffffffc;
  Str_L_char_G_ SVar1;
  bool bVar2;
  LocStr *pLVar3;
  Str_L_char_G_ *pSVar4;
  Str_L_char_G_ *pSVar5;
  int unaff_EDI;
  float10 fVar6;
  char *pcVar7;
  int iVar8;
  void *local_d8[3];
  void *local_cc;
  Str_L_char_G_ local_c0;
  Str_L_char_G_ local_b4;
  Str_L_char_G_ local_a8;
  Str_L_char_G_ local_9c;
  Str_L_char_G_ local_90;
  Str_L_char_G_ local_84;
  Str_L_char_G_ local_78;
  Str_L_char_G_ local_6c;
  int *local_60;
  void *local_5c[3];
  void *local_50;
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  __return_storage_ptr__->Data = (char *)0x0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->Length = 0;
  __return_storage_ptr__->Data = (char *)0x0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->Length = 0;
  util__Str_char___Str_char__o5(&local_44,"Space");
  util__Str_char___Str_char__o5(&local_9c,"Space");
  util__Str_char___Str_char__o5(&local_90,"GetEffectiveExhaustVelocity_km__s()");
  local_60 = *(int **)&(this->ThermalRocket).GetGasExpansionPlume_MemoizedValue.Data.
                       MassFlowRate_kg__s;
  pSVar5 = &local_9c;
  local_38.Data = (char *)0x0;
  local_38.Capacity = 0;
  local_38.Length = 0;
  local_6c.Data = (char *)0x0;
  local_6c.Capacity = 0;
  local_6c.Length = 0;
  pcVar7 = (char *)0x5b6333;
  pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_d8,pSVar5,&local_6c);
  iVar8 = 0x5b633a;
  pSVar4 = util__LocStr__operator__o3(pLVar3);
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff10,&local_90);
  fVar6 = (float10)(**(code **)(*(int *)this + 0x15c))();
  SVar1.Capacity = iVar8;
  SVar1.Data = (char *)pSVar5;
  SVar1.Length = unaff_EDI;
  pSVar5 = Print(&local_78,(double)CONCAT44(pcVar7,(int)((ulonglong)(double)fVar6 >> 0x20)),SVar1);
  local_20.Length = 0;
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  util__Str_char___Str_char(&local_20,pSVar5);
  util__Str_char___operator__o10(&local_20,pSVar4);
  util__Str_char___Str_char(&local_c0,&local_20);
  if (local_20.Data != (char *)0x0) {
    operator_delete__(local_20.Data);
    ((slice_view *)&local_20)->_0_8_ = ((slice_view *)&local_20)->_0_8_ & 0xffffffff00000000;
  }
  pSVar5 = (Str_L_char_G_ *)(**(code **)(*(int *)(uintptr_t)local_60 + 0x48))();
  local_2c.Length = 0;
  local_2c.Data = (char *)0x0;
  local_2c.Capacity = 0;
  util__Str_char___Str_char(&local_2c,&local_c0);
  util__Str_char___operator__o10(&local_2c,pSVar5);
  util__Str_char___Str_char(&local_b4,&local_2c);
  if (local_2c.Data != (char *)0x0) {
    operator_delete__(local_2c.Data);
    ((slice_view *)&local_2c)->_0_8_ = ((slice_view *)&local_2c)->_0_8_ & 0xffffffff00000000;
  }
  pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_5c,&local_44,&local_38);
  pSVar5 = util__LocStr__operator__o3(pLVar3);
  local_14.Length = 0;
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  util__Str_char___Str_char(&local_14,&local_b4);
  util__Str_char___operator__o10(&local_14,pSVar5);
  util__Str_char___Str_char(&local_a8,&local_14);
  if (local_14.Data != (char *)0x0) {
    operator_delete__(local_14.Data);
    ((slice_view *)&local_14)->_0_8_ = ((slice_view *)&local_14)->_0_8_ & 0xffffffff00000000;
  }
  util__Str_char___operator__o10(__return_storage_ptr__,&local_a8);
  if (local_a8.Data != (char *)0x0) {
    operator_delete__(local_a8.Data);
  }
  if (local_b4.Data != (char *)0x0) {
    operator_delete__(local_b4.Data);
  }
  if (local_c0.Data != (char *)0x0) {
    operator_delete__(local_c0.Data);
  }
  if (local_78.Data != (char *)0x0) {
    operator_delete__(local_78.Data);
    local_78.Data = (char *)0x0;
  }
  if (local_cc != (void *)0x0) {
    operator_delete__(local_cc);
    local_cc = (void *)0x0;
  }
  if (local_d8[0] != (void *)0x0) {
    operator_delete__(local_d8[0]);
    local_d8[0] = (void *)0x0;
  }
  if (local_6c.Data != (char *)0x0) {
    operator_delete__(local_6c.Data);
    local_6c.Data = (char *)0x0;
  }
  if (local_84.Data != (char *)0x0) {
    operator_delete__(local_84.Data);
    local_84.Data = (char *)0x0;
  }
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_50 = (void *)0x0;
  }
  if (local_5c[0] != (void *)0x0) {
    operator_delete__(local_5c[0]);
    local_5c[0] = (void *)0x0;
  }
  if (local_38.Data != (char *)0x0) {
    operator_delete__(local_38.Data);
    local_38.Data = (char *)0x0;
  }
  if (local_90.Data != (char *)0x0) {
    operator_delete__(local_90.Data);
    local_90.Data = (char *)0x0;
  }
  if (local_9c.Data != (char *)0x0) {
    operator_delete__(local_9c.Data);
    local_9c.Data = (char *)0x0;
  }
  if (local_44.Data != (char *)0x0) {
    operator_delete__(local_44.Data);
  }
  bVar2 = EngineModule__CanGimbal((EngineModule *)this);
  if (bVar2) {
    iVar8 = EngineModule__GetAttachmentCount((EngineModule *)this);
    if (1 < iVar8) {
      util__Str_char___Str_char__o5(&local_78,"Dash");
      local_38.Data = (char *)0x0;
      local_38.Capacity = 0;
      local_38.Length = 0;
      pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_5c,&local_78,&local_38);
      pSVar5 = util__LocStr__operator__o3(pLVar3);
      EngineModule__GetAttachmentCount((EngineModule *)this);
      pSVar4 = util__Printf(&local_84,"%i");
      local_14.Length = 0;
      local_14.Data = (char *)0x0;
      local_14.Capacity = 0;
      util__Str_char___Str_char(&local_14,pSVar4);
      util__Str_char___operator__o10(&local_14,pSVar5);
      util__Str_char___Str_char(&local_44,&local_14);
      if (local_14.Data != (char *)0x0) {
        operator_delete__(local_14.Data);
        ((slice_view *)&local_14)->_0_8_ = ((slice_view *)&local_14)->_0_8_ & 0xffffffff00000000;
      }
      util__Str_char___operator__o10(__return_storage_ptr__,&local_44);
      if (local_44.Data != (char *)0x0) {
        operator_delete__(local_44.Data);
      }
      if (local_84.Data != (char *)0x0) {
        operator_delete__(local_84.Data);
        local_84.Data = (char *)0x0;
      }
      if (local_50 != (void *)0x0) {
        operator_delete__(local_50);
        local_50 = (void *)0x0;
      }
      if (local_5c[0] != (void *)0x0) {
        operator_delete__(local_5c[0]);
        local_5c[0] = (void *)0x0;
      }
      if (local_38.Data != (char *)0x0) {
        operator_delete__(local_38.Data);
        local_38.Data = (char *)0x0;
      }
      if (local_78.Data != (char *)0x0) {
        operator_delete__(local_78.Data);
      }
    }
    util__Str_char___Str_char__o5(&local_44,"Engine Gimballed");
    local_38.Data = (char *)0x0;
    local_38.Capacity = 0;
    local_38.Length = 0;
    pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_5c,&local_44,&local_38);
    pSVar5 = util__LocStr__operator__o3(pLVar3);
    util__Str_char___operator__o10(__return_storage_ptr__,pSVar5);
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
      local_50 = (void *)0x0;
    }
    if (local_5c[0] != (void *)0x0) {
      operator_delete__(local_5c[0]);
      local_5c[0] = (void *)0x0;
    }
    if (local_38.Data != (char *)0x0) {
      operator_delete__(local_38.Data);
      local_38.Data = (char *)0x0;
    }
    if (local_44.Data != (char *)0x0) {
      operator_delete__(local_44.Data);
    }
  }
  util__Str_char___Str_char__o5(&local_44,"Engine NuclearThermalRocket");
  local_38.Data = (char *)0x0;
  local_38.Capacity = 0;
  local_38.Length = 0;
  pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_5c,&local_44,&local_38);
  pSVar5 = util__LocStr__operator__o3(pLVar3);
  util__Str_char___operator__o10(__return_storage_ptr__,pSVar5);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_50 = (void *)0x0;
  }
  if (local_5c[0] != (void *)0x0) {
    operator_delete__(local_5c[0]);
    local_5c[0] = (void *)0x0;
  }
  if (local_38.Data != (char *)0x0) {
    operator_delete__(local_38.Data);
    local_38.Data = (char *)0x0;
  }
  if (local_44.Data != (char *)0x0) {
    operator_delete__(local_44.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 00005b8970 005b8970_GetGeneratedName ====
// decompiled by BatchDecomp @ 005b8970 name=GetGeneratedName conv=__thiscall body=1854

/* public: virtual class util::Str<char> __thiscall
   PropellantTankModule__GetGeneratedName(void)const  */

Str_L_char_G_ * __thiscall
PropellantTankModule__GetGeneratedName(PropellantTankModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xffffff38;
  undefined4 stack0xfffffffc;
  Str_L_char_G_ SVar1;
  LocStr *pLVar2;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *pSVar4;
  int unaff_EDI;
  char *pcVar5;
  int iVar6;
  Str_L_char_G_ local_b0;
  Str_L_char_G_ local_a4;
  void *local_98[3];
  Str_L_char_G_ local_8c;
  void *local_80[3];
  Str_L_char_G_ local_74;
  void *local_68[3];
  Str_L_char_G_ local_5c;
  void *local_50[3];
  void *local_44;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  __return_storage_ptr__->Data = (char *)0x0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->Length = 0;
  __return_storage_ptr__->Data = (char *)0x0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->Length = 0;
  if (0.0 < *(double *)&(this->External).Data.ExplosiveBoltComposition) {
    util__Str_char___Str_char__o5(&local_b0,"Space");
    util__Str_char___Str_char__o5(&local_38,"PropellantTank Armored");
    local_2c.Data = (char *)0x0;
    local_2c.Capacity = 0;
    local_2c.Length = 0;
    local_14.Data = (char *)0x0;
    local_14.Capacity = 0;
    local_14.Length = 0;
    pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_80,&local_b0,&local_2c);
    pSVar3 = util__LocStr__operator__o3(pLVar2);
    pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_98,&local_38,&local_14);
    pSVar4 = util__LocStr__operator__o3(pLVar2);
    local_20.Length = 0;
    local_20.Data = (char *)0x0;
    local_20.Capacity = 0;
    util__Str_char___Str_char(&local_20,pSVar4);
    util__Str_char___operator__o10(&local_20,pSVar3);
    util__Str_char___Str_char(&local_a4,&local_20);
    if (local_20.Data != (char *)0x0) {
      operator_delete__(local_20.Data);
      ((slice_view *)&local_20)->_0_8_ = ((slice_view *)&local_20)->_0_8_ & 0xffffffff00000000;
    }
    util__Str_char___operator__o10(__return_storage_ptr__,&local_a4);
    if (local_a4.Data != (char *)0x0) {
      operator_delete__(local_a4.Data);
    }
    if (local_8c.Data != (char *)0x0) {
      operator_delete__(local_8c.Data);
      local_8c.Data = (char *)0x0;
    }
    if (local_98[0] != (void *)0x0) {
      operator_delete__(local_98[0]);
      local_98[0] = (void *)0x0;
    }
    if (local_14.Data != (char *)0x0) {
      operator_delete__(local_14.Data);
      ((slice_view *)&local_14)->_0_8_ = ((slice_view *)&local_14)->_0_8_ & 0xffffffff00000000;
    }
    if (local_74.Data != (char *)0x0) {
      operator_delete__(local_74.Data);
      local_74.Data = (char *)0x0;
    }
    if (local_80[0] != (void *)0x0) {
      operator_delete__(local_80[0]);
      local_80[0] = (void *)0x0;
    }
    if (local_2c.Data != (char *)0x0) {
      operator_delete__(local_2c.Data);
      local_2c.Data = (char *)0x0;
    }
    if (local_38.Data != (char *)0x0) {
      operator_delete__(local_38.Data);
      local_38.Data = (char *)0x0;
    }
    if (local_b0.Data != (char *)0x0) {
      operator_delete__(local_b0.Data);
    }
  }
  util__Str_char___Str_char__o5(&local_8c,"Space");
  util__Str_char___Str_char__o5(&local_38,"ReactionMass_kg");
  local_2c.Data = (char *)0x0;
  pSVar3 = &local_8c;
  local_2c.Capacity = 0;
  local_2c.Length = 0;
  pcVar5 = (char *)0x5b8bac;
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_50,pSVar3,&local_2c);
  iVar6 = 0x5b8bb3;
  pSVar4 = util__LocStr__operator__o3(pLVar2);
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff38,&local_38);
  SVar1.Capacity = iVar6;
  SVar1.Data = (char *)pSVar3;
  SVar1.Length = unaff_EDI;
  pSVar3 = Print(&local_5c,
                 (double)CONCAT44(pcVar5,(int)((ulonglong)
                                               *(undefined8 *)&(this->External).Data._pad_0x0_0 >>
                                              0x20)),SVar1);
  local_20.Length = 0;
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  util__Str_char___Str_char(&local_20,pSVar3);
  util__Str_char___operator__o10(&local_20,pSVar4);
  util__Str_char___Str_char(&local_a4,&local_20);
  if (local_20.Data != (char *)0x0) {
    operator_delete__(local_20.Data);
    ((slice_view *)&local_20)->_0_8_ = ((slice_view *)&local_20)->_0_8_ & 0xffffffff00000000;
  }
  pSVar3 = (Str_L_char_G_ *)(**(code **)(*(int *)(this->External).Data._pad_0x0_0 + 0x48))();
  local_14.Length = 0;
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  util__Str_char___Str_char(&local_14,&local_a4);
  util__Str_char___operator__o10(&local_14,pSVar3);
  util__Str_char___Str_char(&local_b0,&local_14);
  if (local_14.Data != (char *)0x0) {
    operator_delete__(local_14.Data);
    ((slice_view *)&local_14)->_0_8_ = ((slice_view *)&local_14)->_0_8_ & 0xffffffff00000000;
  }
  util__Str_char___operator__o10(__return_storage_ptr__,&local_b0);
  if (local_b0.Data != (char *)0x0) {
    operator_delete__(local_b0.Data);
  }
  if (local_a4.Data != (char *)0x0) {
    operator_delete__(local_a4.Data);
  }
  if (local_5c.Data != (char *)0x0) {
    operator_delete__(local_5c.Data);
    local_5c.Data = (char *)0x0;
  }
  if (local_44 != (void *)0x0) {
    operator_delete__(local_44);
    local_44 = (void *)0x0;
  }
  if (local_50[0] != (void *)0x0) {
    operator_delete__(local_50[0]);
    local_50[0] = (void *)0x0;
  }
  if (local_2c.Data != (char *)0x0) {
    operator_delete__(local_2c.Data);
    local_2c.Data = (char *)0x0;
  }
  if (local_74.Data != (char *)0x0) {
    operator_delete__(local_74.Data);
    local_74.Data = (char *)0x0;
  }
  if (local_38.Data != (char *)0x0) {
    operator_delete__(local_38.Data);
    local_38.Data = (char *)0x0;
  }
  if (local_8c.Data != (char *)0x0) {
    operator_delete__(local_8c.Data);
  }
  if ((char)this[1]._pad_0x0_0 != '\0') {
    if (*(double *)&this[1]._pad_0x0_0 <= 0.0) {
      if ((char)this[1]._pad_0x0_0 == '\0') goto LAB_005b8f0c;
      pcVar5 = "PropellantTank External";
    }
    else {
      pcVar5 = "PropellantTank Drop";
    }
    util__Str_char___Str_char__o5(&local_74,pcVar5);
    util__Str_char___Str_char__o5(&local_38,"Space");
    local_2c.Length = 0;
    local_2c.Capacity = 0;
    local_2c.Data = (char *)0x0;
    local_20.Length = 0;
    local_20.Data = (char *)0x0;
    local_20.Capacity = 0;
    pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_68,&local_74,&local_20);
    pSVar3 = util__LocStr__operator__o3(pLVar2);
    pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_50,&local_38,&local_2c);
    pSVar4 = util__LocStr__operator__o3(pLVar2);
    local_14.Length = 0;
    local_14.Data = (char *)0x0;
    local_14.Capacity = 0;
    util__Str_char___Str_char(&local_14,pSVar4);
    util__Str_char___operator__o10(&local_14,pSVar3);
    util__Str_char___Str_char(&local_8c,&local_14);
    if (local_14.Data != (char *)0x0) {
      operator_delete__(local_14.Data);
      ((slice_view *)&local_14)->_0_8_ = ((slice_view *)&local_14)->_0_8_ & 0xffffffff00000000;
    }
    util__Str_char___operator__o10(__return_storage_ptr__,&local_8c);
    if (local_8c.Data != (char *)0x0) {
      operator_delete__(local_8c.Data);
    }
    if (local_44 != (void *)0x0) {
      operator_delete__(local_44);
      local_44 = (void *)0x0;
    }
    if (local_50[0] != (void *)0x0) {
      operator_delete__(local_50[0]);
      local_50[0] = (void *)0x0;
    }
    if (local_2c.Data != (char *)0x0) {
      operator_delete__(local_2c.Data);
      local_2c.Data = (char *)0x0;
    }
    if (local_5c.Data != (char *)0x0) {
      operator_delete__(local_5c.Data);
      local_5c.Data = (char *)0x0;
    }
    if (local_68[0] != (void *)0x0) {
      operator_delete__(local_68[0]);
      local_68[0] = (void *)0x0;
    }
    if (local_20.Data != (char *)0x0) {
      operator_delete__(local_20.Data);
      ((slice_view *)&local_20)->_0_8_ = ((slice_view *)&local_20)->_0_8_ & 0xffffffff00000000;
    }
    if (local_38.Data != (char *)0x0) {
      operator_delete__(local_38.Data);
      local_38.Data = (char *)0x0;
    }
    if (local_74.Data != (char *)0x0) {
      operator_delete__(local_74.Data);
    }
  }
LAB_005b8f0c:
  util__Str_char___Str_char__o5(&local_74,"PropellantTank Tank");
  util__Str_char___Str_char__o5(&local_38,"Space");
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  local_20.Length = 0;
  local_2c.Data = (char *)0x0;
  local_2c.Capacity = 0;
  local_2c.Length = 0;
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_68,&local_74,&local_20);
  pSVar3 = util__LocStr__operator__o3(pLVar2);
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_50,&local_38,&local_2c);
  pSVar4 = util__LocStr__operator__o3(pLVar2);
  local_14.Length = 0;
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  util__Str_char___Str_char(&local_14,pSVar4);
  util__Str_char___operator__o10(&local_14,pSVar3);
  util__Str_char___Str_char(&local_8c,&local_14);
  if (local_14.Data != (char *)0x0) {
    operator_delete__(local_14.Data);
    ((slice_view *)&local_14)->_0_8_ = ((slice_view *)&local_14)->_0_8_ & 0xffffffff00000000;
  }
  util__Str_char___operator__o10(__return_storage_ptr__,&local_8c);
  if (local_8c.Data != (char *)0x0) {
    operator_delete__(local_8c.Data);
  }
  if (local_44 != (void *)0x0) {
    operator_delete__(local_44);
    local_44 = (void *)0x0;
  }
  if (local_50[0] != (void *)0x0) {
    operator_delete__(local_50[0]);
    local_50[0] = (void *)0x0;
  }
  if (local_2c.Data != (char *)0x0) {
    operator_delete__(local_2c.Data);
    local_2c.Data = (char *)0x0;
  }
  if (local_5c.Data != (char *)0x0) {
    operator_delete__(local_5c.Data);
    local_5c.Data = (char *)0x0;
  }
  if (local_68[0] != (void *)0x0) {
    operator_delete__(local_68[0]);
    local_68[0] = (void *)0x0;
  }
  if (local_20.Data != (char *)0x0) {
    operator_delete__(local_20.Data);
    ((slice_view *)&local_20)->_0_8_ = ((slice_view *)&local_20)->_0_8_ & 0xffffffff00000000;
  }
  if (local_38.Data != (char *)0x0) {
    operator_delete__(local_38.Data);
    local_38.Data = (char *)0x0;
  }
  if (local_74.Data != (char *)0x0) {
    operator_delete__(local_74.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 00005bef30 005bef30_GetGeneratedName ====
// decompiled by BatchDecomp @ 005bef30 name=GetGeneratedName conv=__thiscall body=2028

/* public: virtual class util::Str<char> __thiscall ResistojetModule__GetGeneratedName(void)const
    */

Str_L_char_G_ * __thiscall
ResistojetModule__GetGeneratedName(ResistojetModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xfffffe9c;
  undefined4 stack0xfffffffc;
  Str_L_char_G_ SVar1;
  Str_L_char_G_ SVar2;
  bool bVar3;
  LocStr *pLVar4;
  Str_L_char_G_ *pSVar5;
  Str_L_char_G_ *pSVar6;
  int unaff_EDI;
  float10 fVar7;
  char *pcVar8;
  int iVar9;
  void *local_14c[3];
  void *local_140;
  void *local_134[3];
  void *local_128;
  Str_L_char_G_ local_11c;
  Str_L_char_G_ local_110;
  Str_L_char_G_ local_104;
  Str_L_char_G_ local_f8;
  Str_L_char_G_ local_ec;
  Str_L_char_G_ local_e0;
  Str_L_char_G_ local_d4;
  Str_L_char_G_ local_c8;
  Str_L_char_G_ local_bc;
  Str_L_char_G_ local_b0;
  Str_L_char_G_ local_a4;
  Str_L_char_G_ local_98;
  Str_L_char_G_ local_8c;
  Str_L_char_G_ local_80;
  void *local_74[3];
  void *local_68;
  Str_L_char_G_ local_5c;
  Str_L_char_G_ local_50;
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  __return_storage_ptr__->Data = (char *)0x0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->Length = 0;
  __return_storage_ptr__->Data = (char *)0x0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->Length = 0;
  util__Str_char___Str_char__o5(&local_5c,"Space");
  util__Str_char___Str_char__o5(&local_d4,"Space");
  util__Str_char___Str_char__o5(&local_c8,"GetPowerRequired_W()");
  util__Str_char___Str_char__o5(&local_bc,"Space");
  util__Str_char___Str_char__o5(&local_b0,"GetEffectiveExhaustVelocity_km__s()");
  local_50.Data = (char *)0x0;
  pSVar6 = &local_bc;
  local_50.Capacity = 0;
  local_50.Length = 0;
  local_8c.Data = (char *)0x0;
  local_8c.Capacity = 0;
  local_8c.Length = 0;
  local_80.Data = (char *)0x0;
  local_80.Capacity = 0;
  local_80.Length = 0;
  pcVar8 = (char *)0x5bf015;
  pLVar4 = (LocStr *)util__LocStr__LocStr((LocStr *)local_134,pSVar6,&local_80);
  iVar9 = 0x5bf01c;
  pSVar5 = util__LocStr__operator__o3(pLVar4);
  GetUnitsOfType((Str_L_char_G_ *)&stack0xfffffe9c,&local_b0);
  fVar7 = (float10)(**(code **)(*(int *)this + 0x15c))();
  SVar1.Capacity = iVar9;
  SVar1.Data = (char *)pSVar6;
  SVar1.Length = unaff_EDI;
  pSVar6 = Print(&local_11c,(double)CONCAT44(pcVar8,(int)((ulonglong)(double)fVar7 >> 0x20)),SVar1);
  local_20.Length = 0;
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  util__Str_char___Str_char(&local_20,pSVar6);
  util__Str_char___operator__o10(&local_20,pSVar5);
  pSVar6 = &local_20;
  iVar9 = 0x5bf084;
  util__Str_char___Str_char(&local_110,pSVar6);
  if ((Str_L_char_G_ *)local_20.Data != (Str_L_char_G_ *)0x0) {
    iVar9 = 0x5bf091;
    pSVar6 = (Str_L_char_G_ *)local_20.Data;
    operator_delete__(local_20.Data);
    ((slice_view *)&local_20)->_0_8_ = ((slice_view *)&local_20)->_0_8_ & 0xffffffff00000000;
  }
  GetUnitsOfType((Str_L_char_G_ *)&stack0xfffffe9c,&local_c8);
  fVar7 = (float10)(**(code **)(*(int *)this + 0x9c))();
  SVar2.Capacity = (int)pSVar6;
  SVar2.Data = (char *)iVar9;
  SVar2.Length = unaff_EDI;
  pSVar6 = Print(&local_98,(double)CONCAT44(pcVar8,(int)((ulonglong)(double)fVar7 >> 0x20)),SVar2);
  local_2c.Length = 0;
  local_2c.Data = (char *)0x0;
  local_2c.Capacity = 0;
  util__Str_char___Str_char(&local_2c,&local_110);
  util__Str_char___operator__o10(&local_2c,pSVar6);
  util__Str_char___Str_char(&local_104,&local_2c);
  if (local_2c.Data != (char *)0x0) {
    operator_delete__(local_2c.Data);
    ((slice_view *)&local_2c)->_0_8_ = ((slice_view *)&local_2c)->_0_8_ & 0xffffffff00000000;
  }
  pLVar4 = (LocStr *)util__LocStr__LocStr((LocStr *)local_14c,&local_d4,&local_8c);
  pSVar6 = util__LocStr__operator__o3(pLVar4);
  local_38.Length = 0;
  local_38.Data = (char *)0x0;
  local_38.Capacity = 0;
  util__Str_char___Str_char(&local_38,&local_104);
  util__Str_char___operator__o10(&local_38,pSVar6);
  util__Str_char___Str_char(&local_f8,&local_38);
  if (local_38.Data != (char *)0x0) {
    operator_delete__(local_38.Data);
    ((slice_view *)&local_38)->_0_8_ = ((slice_view *)&local_38)->_0_8_ & 0xffffffff00000000;
  }
  pSVar6 = (Str_L_char_G_ *)
           (**(code **)(**(int **)&(this->ThermalRocket).NozzleExpansionAngle_degrees + 0x48))();
  local_44.Length = 0;
  local_44.Data = (char *)0x0;
  local_44.Capacity = 0;
  util__Str_char___Str_char(&local_44,&local_f8);
  util__Str_char___operator__o10(&local_44,pSVar6);
  util__Str_char___Str_char(&local_ec,&local_44);
  if (local_44.Data != (char *)0x0) {
    operator_delete__(local_44.Data);
    ((slice_view *)&local_44)->_0_8_ = ((slice_view *)&local_44)->_0_8_ & 0xffffffff00000000;
  }
  pLVar4 = (LocStr *)util__LocStr__LocStr((LocStr *)local_74,&local_5c,&local_50);
  pSVar6 = util__LocStr__operator__o3(pLVar4);
  local_14.Length = 0;
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  util__Str_char___Str_char(&local_14,&local_ec);
  util__Str_char___operator__o10(&local_14,pSVar6);
  util__Str_char___Str_char(&local_e0,&local_14);
  if (local_14.Data != (char *)0x0) {
    operator_delete__(local_14.Data);
    ((slice_view *)&local_14)->_0_8_ = ((slice_view *)&local_14)->_0_8_ & 0xffffffff00000000;
  }
  util__Str_char___operator__o10(__return_storage_ptr__,&local_e0);
  if (local_e0.Data != (char *)0x0) {
    operator_delete__(local_e0.Data);
  }
  if (local_ec.Data != (char *)0x0) {
    operator_delete__(local_ec.Data);
  }
  if (local_f8.Data != (char *)0x0) {
    operator_delete__(local_f8.Data);
  }
  if (local_104.Data != (char *)0x0) {
    operator_delete__(local_104.Data);
  }
  if (local_110.Data != (char *)0x0) {
    operator_delete__(local_110.Data);
  }
  if (local_11c.Data != (char *)0x0) {
    operator_delete__(local_11c.Data);
    local_11c.Data = (char *)0x0;
  }
  if (local_128 != (void *)0x0) {
    operator_delete__(local_128);
    local_128 = (void *)0x0;
  }
  if (local_134[0] != (void *)0x0) {
    operator_delete__(local_134[0]);
    local_134[0] = (void *)0x0;
  }
  if (local_80.Data != (char *)0x0) {
    operator_delete__(local_80.Data);
    local_80.Data = (char *)0x0;
  }
  if (local_98.Data != (char *)0x0) {
    operator_delete__(local_98.Data);
    local_98.Data = (char *)0x0;
  }
  if (local_140 != (void *)0x0) {
    operator_delete__(local_140);
    local_140 = (void *)0x0;
  }
  if (local_14c[0] != (void *)0x0) {
    operator_delete__(local_14c[0]);
    local_14c[0] = (void *)0x0;
  }
  if (local_8c.Data != (char *)0x0) {
    operator_delete__(local_8c.Data);
    local_8c.Data = (char *)0x0;
  }
  if (local_a4.Data != (char *)0x0) {
    operator_delete__(local_a4.Data);
    local_a4.Data = (char *)0x0;
  }
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_68 = (void *)0x0;
  }
  if (local_74[0] != (void *)0x0) {
    operator_delete__(local_74[0]);
    local_74[0] = (void *)0x0;
  }
  if (local_50.Data != (char *)0x0) {
    operator_delete__(local_50.Data);
    local_50.Data = (char *)0x0;
  }
  if (local_b0.Data != (char *)0x0) {
    operator_delete__(local_b0.Data);
    local_b0.Data = (char *)0x0;
  }
  if (local_bc.Data != (char *)0x0) {
    operator_delete__(local_bc.Data);
    local_bc.Data = (char *)0x0;
  }
  if (local_c8.Data != (char *)0x0) {
    operator_delete__(local_c8.Data);
    local_c8.Data = (char *)0x0;
  }
  if (local_d4.Data != (char *)0x0) {
    operator_delete__(local_d4.Data);
    local_d4.Data = (char *)0x0;
  }
  if (local_5c.Data != (char *)0x0) {
    operator_delete__(local_5c.Data);
  }
  bVar3 = EngineModule__CanGimbal((EngineModule *)this);
  if (bVar3) {
    iVar9 = EngineModule__GetAttachmentCount((EngineModule *)this);
    if (1 < iVar9) {
      util__Str_char___Str_char__o5(&local_98,"Dash");
      local_50.Data = (char *)0x0;
      local_50.Capacity = 0;
      local_50.Length = 0;
      pLVar4 = (LocStr *)util__LocStr__LocStr((LocStr *)local_74,&local_98,&local_50);
      pSVar6 = util__LocStr__operator__o3(pLVar4);
      EngineModule__GetAttachmentCount((EngineModule *)this);
      pSVar5 = util__Printf(&local_a4,"%i");
      local_14.Length = 0;
      local_14.Data = (char *)0x0;
      local_14.Capacity = 0;
      util__Str_char___Str_char(&local_14,pSVar5);
      util__Str_char___operator__o10(&local_14,pSVar6);
      util__Str_char___Str_char(&local_5c,&local_14);
      if (local_14.Data != (char *)0x0) {
        operator_delete__(local_14.Data);
        ((slice_view *)&local_14)->_0_8_ = ((slice_view *)&local_14)->_0_8_ & 0xffffffff00000000;
      }
      util__Str_char___operator__o10(__return_storage_ptr__,&local_5c);
      if (local_5c.Data != (char *)0x0) {
        operator_delete__(local_5c.Data);
      }
      if (local_a4.Data != (char *)0x0) {
        operator_delete__(local_a4.Data);
        local_a4.Data = (char *)0x0;
      }
      if (local_68 != (void *)0x0) {
        operator_delete__(local_68);
        local_68 = (void *)0x0;
      }
      if (local_74[0] != (void *)0x0) {
        operator_delete__(local_74[0]);
        local_74[0] = (void *)0x0;
      }
      if (local_50.Data != (char *)0x0) {
        operator_delete__(local_50.Data);
        local_50.Data = (char *)0x0;
      }
      if (local_98.Data != (char *)0x0) {
        operator_delete__(local_98.Data);
      }
    }
    util__Str_char___Str_char__o5(&local_5c,"Engine Gimballed");
    local_50.Data = (char *)0x0;
    local_50.Capacity = 0;
    local_50.Length = 0;
    pLVar4 = (LocStr *)util__LocStr__LocStr((LocStr *)local_74,&local_5c,&local_50);
    pSVar6 = util__LocStr__operator__o3(pLVar4);
    util__Str_char___operator__o10(__return_storage_ptr__,pSVar6);
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
      local_68 = (void *)0x0;
    }
    if (local_74[0] != (void *)0x0) {
      operator_delete__(local_74[0]);
      local_74[0] = (void *)0x0;
    }
    if (local_50.Data != (char *)0x0) {
      operator_delete__(local_50.Data);
      local_50.Data = (char *)0x0;
    }
    if (local_5c.Data != (char *)0x0) {
      operator_delete__(local_5c.Data);
    }
  }
  util__Str_char___Str_char__o5(&local_5c,"Engine Resistojet");
  local_50.Data = (char *)0x0;
  local_50.Capacity = 0;
  local_50.Length = 0;
  pLVar4 = (LocStr *)util__LocStr__LocStr((LocStr *)local_74,&local_5c,&local_50);
  pSVar6 = util__LocStr__operator__o3(pLVar4);
  util__Str_char___operator__o10(__return_storage_ptr__,pSVar6);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_68 = (void *)0x0;
  }
  if (local_74[0] != (void *)0x0) {
    operator_delete__(local_74[0]);
    local_74[0] = (void *)0x0;
  }
  if (local_50.Data != (char *)0x0) {
    operator_delete__(local_50.Data);
    local_50.Data = (char *)0x0;
  }
  if (local_5c.Data != (char *)0x0) {
    operator_delete__(local_5c.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 00005dde50 005dde50_GetGeneratedName ====
// decompiled by BatchDecomp @ 005dde50 name=GetGeneratedName conv=__thiscall body=1328

/* public: virtual class util::Str<char> __thiscall RadiatorModule__GetGeneratedName(void)const  */

Str_L_char_G_ * __thiscall
RadiatorModule__GetGeneratedName(RadiatorModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xfffffffc;
  Str_L_char_G_ *pSVar1;
  LocStr *pLVar2;
  int unaff_EDI;
  void *local_14c[3];
  void *local_140;
  void *local_134[3];
  void *local_128;
  void *local_11c[3];
  void *local_110;
  Str_L_char_G_ local_104;
  Str_L_char_G_ local_f8;
  void *local_ec[3];
  Str_L_char_G_ local_e0;
  Str_L_char_G_ local_d4;
  Str_L_char_G_ local_c8;
  Str_L_char_G_ local_bc;
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
  util__Str_char___Str_char__o5(&local_104,"Radiator Radiator");
  util__Str_char___Str_char__o5(&local_8c,"Space");
  util__Str_char___Str_char__o5(&local_80,"Space");
  util__Str_char___Str_char__o5(&local_f8,"x");
  local_74.Data = (char *)0x0;
  local_74.Capacity = 0;
  local_74.Length = 0;
  local_68.Data = (char *)0x0;
  local_68.Capacity = 0;
  local_68.Length = 0;
  local_5c.Data = (char *)0x0;
  local_5c.Capacity = 0;
  local_5c.Length = 0;
  pSVar1 = PrintSigFigures(&local_d4,
                           (double)CONCAT44(1,(int)((ulonglong)
                                                    ((double)this[1]._pad_0x0_0 *
                                                    *(double *)&this->Panels) >> 0x20)),unaff_EDI);
  local_14.Length = 0;
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  util__Str_char___Str_char(&local_14,pSVar1);
  util__Str_char___operator__o10(&local_14,&local_f8);
  util__Str_char___Str_char(&local_c8,&local_14);
  if (local_14.Data != (char *)0x0) {
    operator_delete__(local_14.Data);
    ((slice_view *)&local_14)->_0_8_ = ((slice_view *)&local_14)->_0_8_ & 0xffffffff00000000;
  }
  pSVar1 = PrintSigFigures(&local_e0,
                           (double)CONCAT44(1,(int)((ulonglong)this->FrontTaper_radians >> 0x20)),
                           unaff_EDI);
  local_20.Length = 0;
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  util__Str_char___Str_char(&local_20,&local_c8);
  util__Str_char___operator__o10(&local_20,pSVar1);
  util__Str_char___Str_char(&local_bc,&local_20);
  if (local_20.Data != (char *)0x0) {
    operator_delete__(local_20.Data);
    ((slice_view *)&local_20)->_0_8_ = ((slice_view *)&local_20)->_0_8_ & 0xffffffff00000000;
  }
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_11c,&local_80,&local_5c);
  pSVar1 = util__LocStr__operator__o3(pLVar2);
  local_2c.Length = 0;
  local_2c.Data = (char *)0x0;
  local_2c.Capacity = 0;
  util__Str_char___Str_char(&local_2c,&local_bc);
  util__Str_char___operator__o10(&local_2c,pSVar1);
  util__Str_char___Str_char(&local_b0,&local_2c);
  if (local_2c.Data != (char *)0x0) {
    operator_delete__(local_2c.Data);
    ((slice_view *)&local_2c)->_0_8_ = ((slice_view *)&local_2c)->_0_8_ & 0xffffffff00000000;
  }
  pSVar1 = (Str_L_char_G_ *)(**(code **)(**(int **)((int)&this->ArmorThickness_m + 4) + 0x48))(local_ec)
  ;
  local_38.Length = 0;
  local_38.Data = (char *)0x0;
  local_38.Capacity = 0;
  util__Str_char___Str_char(&local_38,&local_b0);
  util__Str_char___operator__o10(&local_38,pSVar1);
  util__Str_char___Str_char(&local_a4,&local_38);
  if (local_38.Data != (char *)0x0) {
    operator_delete__(local_38.Data);
    ((slice_view *)&local_38)->_0_8_ = ((slice_view *)&local_38)->_0_8_ & 0xffffffff00000000;
  }
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_134,&local_8c,&local_68);
  pSVar1 = util__LocStr__operator__o3(pLVar2);
  local_44.Length = 0;
  local_44.Data = (char *)0x0;
  local_44.Capacity = 0;
  util__Str_char___Str_char(&local_44,&local_a4);
  util__Str_char___operator__o10(&local_44,pSVar1);
  util__Str_char___Str_char(&local_98,&local_44);
  if (local_44.Data != (char *)0x0) {
    operator_delete__(local_44.Data);
    ((slice_view *)&local_44)->_0_8_ = ((slice_view *)&local_44)->_0_8_ & 0xffffffff00000000;
  }
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_14c,&local_104,&local_74);
  pSVar1 = util__LocStr__operator__o3(pLVar2);
  local_50.Length = 0;
  local_50.Data = (char *)0x0;
  local_50.Capacity = 0;
  util__Str_char___Str_char(&local_50,&local_98);
  util__Str_char___operator__o10(&local_50,pSVar1);
  util__Str_char___Str_char(__return_storage_ptr__,&local_50);
  if (local_50.Data != (char *)0x0) {
    operator_delete__(local_50.Data);
  }
  if (local_98.Data != (char *)0x0) {
    operator_delete__(local_98.Data);
  }
  if (local_a4.Data != (char *)0x0) {
    operator_delete__(local_a4.Data);
  }
  if (local_b0.Data != (char *)0x0) {
    operator_delete__(local_b0.Data);
  }
  if (local_bc.Data != (char *)0x0) {
    operator_delete__(local_bc.Data);
  }
  if (local_c8.Data != (char *)0x0) {
    operator_delete__(local_c8.Data);
  }
  if (local_d4.Data != (char *)0x0) {
    operator_delete__(local_d4.Data);
    local_d4.Data = (char *)0x0;
  }
  if (local_e0.Data != (char *)0x0) {
    operator_delete__(local_e0.Data);
    local_e0.Data = (char *)0x0;
  }
  if (local_110 != (void *)0x0) {
    operator_delete__(local_110);
    local_110 = (void *)0x0;
  }
  if (local_11c[0] != (void *)0x0) {
    operator_delete__(local_11c[0]);
    local_11c[0] = (void *)0x0;
  }
  if (local_5c.Data != (char *)0x0) {
    operator_delete__(local_5c.Data);
    local_5c.Data = (char *)0x0;
  }
  if (local_ec[0] != (void *)0x0) {
    operator_delete__(local_ec[0]);
    local_ec[0] = (void *)0x0;
  }
  if (local_128 != (void *)0x0) {
    operator_delete__(local_128);
    local_128 = (void *)0x0;
  }
  if (local_134[0] != (void *)0x0) {
    operator_delete__(local_134[0]);
    local_134[0] = (void *)0x0;
  }
  if (local_68.Data != (char *)0x0) {
    operator_delete__(local_68.Data);
    local_68.Data = (char *)0x0;
  }
  if (local_140 != (void *)0x0) {
    operator_delete__(local_140);
    local_140 = (void *)0x0;
  }
  if (local_14c[0] != (void *)0x0) {
    operator_delete__(local_14c[0]);
    local_14c[0] = (void *)0x0;
  }
  if (local_74.Data != (char *)0x0) {
    operator_delete__(local_74.Data);
    local_74.Data = (char *)0x0;
  }
  if (local_f8.Data != (char *)0x0) {
    operator_delete__(local_f8.Data);
  }
  if (local_80.Data != (char *)0x0) {
    operator_delete__(local_80.Data);
    local_80.Data = (char *)0x0;
  }
  if (local_8c.Data != (char *)0x0) {
    operator_delete__(local_8c.Data);
    local_8c.Data = (char *)0x0;
  }
  if (local_104.Data != (char *)0x0) {
    operator_delete__(local_104.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 00005de380 005de380_GetShortName ====
// decompiled by BatchDecomp @ 005de380 name=GetShortName conv=__thiscall body=1176

/* public: virtual class util::Str<char> __thiscall RadiatorModule__GetShortName(void)const  */

Str_L_char_G_ * __thiscall
RadiatorModule__GetShortName(RadiatorModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xfffffed8;
  undefined4 stack0xfffffff0;
  undefined4 stack0xfffffffc;
  Str_L_char_G_ SVar1;
  LocStr *pLVar2;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *pSVar4;
  int unaff_EDI;
  double dVar5;
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
  undefined1 local_14[8];
  int iStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  util__Str_char___Str_char__o5(&local_c8,"Radiator Radiator");
  util__Str_char___Str_char__o5(&local_80,"Space");
  util__Str_char___Str_char__o5(&local_74,"Space");
  util__Str_char___Str_char__o5(&local_68,"GetTotalSurfaceArea_m2()");
  local_5c.Data = (char *)0x0;
  local_5c.Capacity = 0;
  local_5c.Length = 0;
  local_50.Data = (char *)0x0;
  local_50.Capacity = 0;
  register0x00001200 = (double)this[1]._pad_0x0_0 * *(double *)&this->Panels;
  local_50.Length = 0;
  local_44.Data = (char *)0x0;
  local_44.Capacity = 0;
  local_44.Length = 0;
  dVar5 = util__Tan((double *)&this[1]._pad_0x0_0);
  local_20.Capacity = *(undefined4 *)&dVar5;
  local_20.Length = (int)((ulonglong)dVar5 >> 0x20);
  dVar5 = util__Tan((double *)&this[1]._pad_0x0_0);
  local_2c.Capacity = *(undefined4 *)&dVar5;
  local_2c.Length = (int)((ulonglong)dVar5 >> 0x20);
  pSVar4 = &local_74;
  register0x00001240 =
       (double)this[1]._pad_0x0_0 * *(double *)&this->Panels *
       (this->FrontTaper_radians +
       ((double)CONCAT44(local_20.Length,local_20.Capacity) + dVar5) * stack0xfffffff0 *
       /*3fe0000000000000*/0.5);
  register0x00001240 = register0x00001240 + register0x00001240;
  pcVar6 = (char *)0x5de4a2;
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_e0,pSVar4,&local_44);
  iVar7 = 0x5de4a9;
  pSVar3 = util__LocStr__operator__o3(pLVar2);
  GetUnitsOfType((Str_L_char_G_ *)&stack0xfffffed8,&local_68);
  SVar1.Capacity = iVar7;
  SVar1.Data = (char *)pSVar4;
  SVar1.Length = unaff_EDI;
  pSVar4 = Print(&local_b0,(double)CONCAT44(pcVar6,iStack_c),SVar1);
  iStack_c = 0;
  ((slice_view *)&local_14)->_0_4_ = (char *)0x0;
  ((slice_view *)&local_14)->_4_4_ = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)local_14,pSVar4);
  util__Str_char___operator__o10((Str_L_char_G_ *)local_14,pSVar3);
  util__Str_char___Str_char(&local_a4,(Str_L_char_G_ *)local_14);
  if ((char *)((slice_view *)&local_14)->_0_4_ != (char *)0x0) {
    operator_delete__((void *)((slice_view *)&local_14)->_0_4_);
    ((slice_view *)&local_14)->_0_4_ = (char *)0x0;
  }
  pSVar4 = (Str_L_char_G_ *)(**(code **)(**(int **)((int)&this->ArmorThickness_m + 4) + 0x48))();
  local_2c.Length = 0;
  local_2c.Data = (char *)0x0;
  local_2c.Capacity = 0;
  util__Str_char___Str_char(&local_2c,&local_a4);
  util__Str_char___operator__o10(&local_2c,pSVar4);
  util__Str_char___Str_char(&local_98,&local_2c);
  if (local_2c.Data != (char *)0x0) {
    operator_delete__(local_2c.Data);
    local_2c.Data = (char *)0x0;
  }
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_f8,&local_80,&local_50);
  pSVar4 = util__LocStr__operator__o3(pLVar2);
  local_20.Length = 0;
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  util__Str_char___Str_char(&local_20,&local_98);
  util__Str_char___operator__o10(&local_20,pSVar4);
  util__Str_char___Str_char(&local_8c,&local_20);
  if (local_20.Data != (char *)0x0) {
    operator_delete__(local_20.Data);
    local_20.Data = (char *)0x0;
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


//==== 00006643c0 006643c0_GetRangeInfo ====
// decompiled by BatchDecomp @ 006643c0 name=GetRangeInfo conv=__thiscall body=1525

/* public: class util::Str<char> __thiscall WeaponModule__GetRangeInfo(void)const  */

Str_L_char_G_ * __thiscall
WeaponModule__GetRangeInfo(WeaponModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xfffffe88;
  undefined4 stack0xfffffffc;
  Str_L_char_G_ SVar1;
  Str_L_char_G_ SVar2;
  Str_L_char_G_ SVar3;
  Str_L_char_G_ *pSVar4;
  LocStr *pLVar5;
  Str_L_char_G_ *pSVar6;
  char *pcVar7;
  int unaff_EDI;
  double dVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  void *local_160[3];
  void *local_154;
  void *local_148[3];
  void *local_13c;
  void *local_130[3];
  void *local_124;
  void *local_118[3];
  void *local_10c;
  Str_L_char_G_ local_100;
  Str_L_char_G_ local_f4;
  Str_L_char_G_ local_e8;
  Str_L_char_G_ local_dc;
  Str_L_char_G_ local_d0;
  Str_L_char_G_ local_c4;
  Str_L_char_G_ local_b8;
  Str_L_char_G_ local_ac;
  Str_L_char_G_ local_a0;
  Str_L_char_G_ local_94;
  Str_L_char_G_ local_88;
  Str_L_char_G_ local_7c;
  Str_L_char_G_ local_70;
  Str_L_char_G_ local_64;
  Str_L_char_G_ local_58;
  Str_L_char_G_ local_4c;
  Str_L_char_G_ local_40;
  Str_L_char_G_ *local_34;
  undefined8 local_30;
  char *local_28;
  char *local_24;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_34 = __return_storage_ptr__;
  dVar8 = GetActualRange_km(this,/*3ff0000000000000*/1.0);
  local_14.Capacity = *(undefined4 *)&dVar8;
  local_14.Length = (int)((ulonglong)dVar8 >> 0x20);
  dVar8 = GetActualRange_km(this,/*4024000000000000*/10.0);
  local_20.Capacity = *(undefined4 *)&dVar8;
  local_20.Length = (int)((ulonglong)dVar8 >> 0x20);
  pcVar9 = (char *)0x664427;
  local_30 = GetActualRange_km(this,/*408f400000000000*/1000.0);
  util__Str_char___Str_char__o5(&local_100,"CapShipRange_km");
  util__Str_char___Str_char__o5(&local_ac,"WeaponSizeEstimatorCapital");
  util__Str_char___Str_char__o5(&local_a0,"DroneRange_km");
  util__Str_char___Str_char__o5(&local_94,"WeaponSizeEstimatorMedium");
  util__Str_char___Str_char__o5(&local_88,"MissileRange_km");
  util__Str_char___Str_char__o5(&local_7c,"WeaponSizeEstimatorSmall");
  util__Str_char___Str_char__o5(&local_f4,"\n");
  pcVar11 = "WeaponRangeEstimations";
  iVar10 = 0x6644a4;
  util__Str_char___Str_char__o5(&local_70,"WeaponRangeEstimations");
  GetUnitsOfType((Str_L_char_G_ *)&stack0xfffffe88,&local_100);
  SVar1.Capacity = (int)pcVar11;
  SVar1.Data = (char *)iVar10;
  SVar1.Length = unaff_EDI;
  pSVar4 = Print(&local_e8,(double)CONCAT44(pcVar9,(int)((ulonglong)local_30 >> 0x20)),SVar1);
  if (pSVar4->Capacity < 1) {
    local_24 = "";
  }
  else {
    local_24 = pSVar4->Data;
  }
  local_64.Data = (char *)0x0;
  pSVar4 = &local_ac;
  local_64.Capacity = 0;
  local_64.Length = 0;
  pcVar9 = (char *)0x66450e;
  pLVar5 = (LocStr *)util__LocStr__LocStr((LocStr *)local_160,pSVar4,&local_64);
  iVar10 = 0x664515;
  pSVar6 = util__LocStr__operator__o3(pLVar5);
  if (pSVar6->Capacity < 1) {
    local_28 = "";
  }
  else {
    local_28 = pSVar6->Data;
  }
  GetUnitsOfType((Str_L_char_G_ *)&stack0xfffffe88,&local_a0);
  SVar2.Capacity = iVar10;
  SVar2.Data = (char *)pSVar4;
  SVar2.Length = unaff_EDI;
  pSVar4 = Print(&local_dc,(double)CONCAT44(pcVar9,local_20.Length),SVar2);
  if (pSVar4->Capacity < 1) {
    pcVar9 = "";
  }
  else {
    pcVar9 = pSVar4->Data;
  }
  local_30 = (double)CONCAT44(pcVar9,(undefined4)local_30);
  local_58.Data = (char *)0x0;
  pSVar4 = &local_94;
  local_58.Capacity = 0;
  local_58.Length = 0;
  pcVar9 = (char *)0x664593;
  pLVar5 = (LocStr *)util__LocStr__LocStr((LocStr *)local_148,pSVar4,&local_58);
  iVar10 = 0x66459a;
  pSVar6 = util__LocStr__operator__o3(pLVar5);
  if (pSVar6->Capacity < 1) {
    pcVar11 = "";
  }
  else {
    pcVar11 = pSVar6->Data;
  }
  GetUnitsOfType((Str_L_char_G_ *)&stack0xfffffe88,&local_88);
  SVar3.Capacity = iVar10;
  SVar3.Data = (char *)pSVar4;
  SVar3.Length = unaff_EDI;
  pSVar4 = Print(&local_d0,(double)CONCAT44(pcVar9,local_14.Length),SVar3);
  if (pSVar4->Capacity < 1) {
    pcVar9 = "";
  }
  else {
    pcVar9 = pSVar4->Data;
  }
  local_4c.Data = (char *)0x0;
  local_4c.Capacity = 0;
  local_4c.Length = 0;
  pLVar5 = (LocStr *)util__LocStr__LocStr((LocStr *)local_130,&local_7c,&local_4c);
  pSVar4 = util__LocStr__operator__o3(pLVar5);
  if (pSVar4->Capacity < 1) {
    pcVar7 = "";
  }
  else {
    pcVar7 = pSVar4->Data;
  }
  local_40.Data = (char *)0x0;
  local_40.Capacity = 0;
  local_40.Length = 0;
  pLVar5 = (LocStr *)util__LocStr__LocStr((LocStr *)local_118,&local_70,&local_40);
  pSVar4 = util__LocStr__operator__o3(pLVar5);
  local_14.Length = 0;
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  util__Str_char___Str_char(&local_14,pSVar4);
  util__Str_char___operator__o10(&local_14,&local_f4);
  util__Str_char___Str_char(&local_b8,&local_14);
  if (local_14.Data != (char *)0x0) {
    operator_delete__(local_14.Data);
    local_14.Data = (char *)0x0;
  }
  pSVar4 = util__Printf(&local_c4,"%s (%i m^2): %s\n%s (%i m^2): %s\n%s (%i m^2): %s",pcVar7,1,
                        pcVar9,pcVar11,10,((slice_view *)&local_30)->_4_4_);
  local_20.Length = 0;
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  util__Str_char___Str_char(&local_20,&local_b8);
  util__Str_char___operator__o10(&local_20,pSVar4);
  pSVar4 = local_34;
  util__Str_char___Str_char(local_34,&local_20);
  if (local_20.Data != (char *)0x0) {
    operator_delete__(local_20.Data);
  }
  if (local_b8.Data != (char *)0x0) {
    operator_delete__(local_b8.Data);
  }
  if (local_10c != (void *)0x0) {
    operator_delete__(local_10c);
    local_10c = (void *)0x0;
  }
  if (local_118[0] != (void *)0x0) {
    operator_delete__(local_118[0]);
    local_118[0] = (void *)0x0;
  }
  if (local_40.Data != (char *)0x0) {
    operator_delete__(local_40.Data);
    local_40.Data = (char *)0x0;
  }
  if (local_c4.Data != (char *)0x0) {
    operator_delete__(local_c4.Data);
    local_c4.Data = (char *)0x0;
  }
  if (local_124 != (void *)0x0) {
    operator_delete__(local_124);
    local_124 = (void *)0x0;
  }
  if (local_130[0] != (void *)0x0) {
    operator_delete__(local_130[0]);
    local_130[0] = (void *)0x0;
  }
  if (local_4c.Data != (char *)0x0) {
    operator_delete__(local_4c.Data);
    local_4c.Data = (char *)0x0;
  }
  if (local_d0.Data != (char *)0x0) {
    operator_delete__(local_d0.Data);
    local_d0.Data = (char *)0x0;
  }
  if (local_13c != (void *)0x0) {
    operator_delete__(local_13c);
    local_13c = (void *)0x0;
  }
  if (local_148[0] != (void *)0x0) {
    operator_delete__(local_148[0]);
    local_148[0] = (void *)0x0;
  }
  if (local_58.Data != (char *)0x0) {
    operator_delete__(local_58.Data);
    local_58.Data = (char *)0x0;
  }
  if (local_dc.Data != (char *)0x0) {
    operator_delete__(local_dc.Data);
    local_dc.Data = (char *)0x0;
  }
  if (local_154 != (void *)0x0) {
    operator_delete__(local_154);
    local_154 = (void *)0x0;
  }
  if (local_160[0] != (void *)0x0) {
    operator_delete__(local_160[0]);
    local_160[0] = (void *)0x0;
  }
  if (local_64.Data != (char *)0x0) {
    operator_delete__(local_64.Data);
    local_64.Data = (char *)0x0;
  }
  if (local_e8.Data != (char *)0x0) {
    operator_delete__(local_e8.Data);
    local_e8.Data = (char *)0x0;
  }
  if (local_70.Data != (char *)0x0) {
    operator_delete__(local_70.Data);
    local_70.Data = (char *)0x0;
  }
  if (local_f4.Data != (char *)0x0) {
    operator_delete__(local_f4.Data);
  }
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
  if (local_a0.Data != (char *)0x0) {
    operator_delete__(local_a0.Data);
    local_a0.Data = (char *)0x0;
  }
  if (local_ac.Data != (char *)0x0) {
    operator_delete__(local_ac.Data);
    local_ac.Data = (char *)0x0;
  }
  if (local_100.Data != (char *)0x0) {
    operator_delete__(local_100.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pSVar4;
}


//==== 0000726e70 00726e70_GetQuickInfo ====
// decompiled by BatchDecomp @ 00726e70 name=GetQuickInfo conv=__thiscall body=2682

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Str<char> __thiscall CelestialObject__GetQuickInfo(void)const  */

Str_L_char_G_ * __thiscall
CelestialObject__GetQuickInfo(CelestialObject *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xfffffe34;
  undefined4 stack0xfffffffc;
  CelestialBody *pCVar1;
  Str_L_char_G_ SVar2;
  LocStr *pLVar3;
  Str_L_char_G_ *pSVar4;
  int iVar5;
  FixedOrbit *this_00;
  Str_L_char_G_ *pSVar6;
  double dVar7;
  char *pcVar8;
  undefined1 *puVar9;
  undefined1 local_1b0[16];
  ReferenceController *local_1a0;
  undefined **local_198;
  void *local_194;
  undefined **local_150;
  void *local_14c;
  Str_L_char_G_ local_c0;
  void *local_b4[3];
  void *local_a8;
  void *local_9c[3];
  void *local_90;
  Str_L_char_G_ local_84;
  Str_L_char_G_ local_78;
  Str_L_char_G_ local_6c;
  void *local_60[3];
  Str_L_char_G_ local_54;
  Str_L_char_G_ local_48;
  Str_L_char_G_ local_3c;
  Str_L_char_G_ local_30;
  char local_21;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  __return_storage_ptr__->Data = (char *)0x0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->Length = 0;
  util__Str_char___Str_char(__return_storage_ptr__,(Str_L_char_G_ *)&this->BodyTemplate->_pad_0x0_0);
  if (*(char *)&(this->BodyTemplate->RingSystem).Data.Radius_km != '\0') {
    util__Str_char___Str_char__o5(&local_3c,"\n\t");
    util__Str_char___operator__o10(__return_storage_ptr__,&local_3c);
    if (local_3c.Data != (char *)0x0) {
      operator_delete__(local_3c.Data);
    }
    util__Str_char___Str_char__o5(&local_30,"Fleet Status Orbiting");
    pCVar1 = this->BodyTemplate;
    if (*(char *)&(pCVar1->RingSystem).Data.Radius_km == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    (**(code **)(**(int **)&(pCVar1->Orbit).Data.Elements.LongitudeOfAscendingNode_degrees + 0x48))
              ();
    local_20.Data = (char *)0x0;
    local_20.Capacity = 0;
    local_20.Length = 0;
    pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_60,&local_30,&local_20);
    pSVar4 = util__LocStr__operator__o3(pLVar3);
    if (pSVar4->Capacity < 1) {
      pcVar8 = "";
    }
    else {
      pcVar8 = pSVar4->Data;
    }
    pSVar4 = util__Printf(&local_3c,pcVar8);
    util__Str_char___operator__o10(__return_storage_ptr__,pSVar4);
    if (local_3c.Data != (char *)0x0) {
      operator_delete__(local_3c.Data);
      local_3c.Data = (char *)0x0;
    }
    if (local_54.Data != (char *)0x0) {
      operator_delete__(local_54.Data);
      local_54.Data = (char *)0x0;
    }
    if (local_60[0] != (void *)0x0) {
      operator_delete__(local_60[0]);
      local_60[0] = (void *)0x0;
    }
    if (local_20.Data != (char *)0x0) {
      operator_delete__(local_20.Data);
      ((slice_view *)&local_20)->_0_8_ = ((slice_view *)&local_20)->_0_8_ & 0xffffffff00000000;
    }
    if (local_c0.Data != (char *)0x0) {
      operator_delete__(local_c0.Data);
      local_c0.Data = (char *)0x0;
    }
    if (local_30.Data != (char *)0x0) {
      operator_delete__(local_30.Data);
    }
  }
  puVar9 = local_1b0;
  iVar5 = (**(code **)*(int *)this)();
  local_21 = *(char *)(iVar5 + 0xe8);
  local_150 = ((void *)(0x009194a4u));
  if (local_14c != (void *)0x0) {
    operator_delete__(local_14c);
  }
  local_14c = (void *)0x0;
  local_150 = ((void *)(0x00919488u));
  local_198 = ((void *)(0x00919980u));
  if (local_194 != (void *)0x0) {
    operator_delete__(local_194);
    local_194 = (void *)0x0;
  }
  if (local_1a0 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_1a0);
  }
  if (local_21 != '\0') {
    util__Str_char___Str_char__o5(&local_3c,"\n\t");
    util__Str_char___operator__o10(__return_storage_ptr__,&local_3c);
    if (local_3c.Data != (char *)0x0) {
      operator_delete__(local_3c.Data);
    }
    util__Str_char___Str_char__o5(&local_54,"GetOrbit()->GetOrbitalPeriod_s()");
    util__Str_char___Str_char__o5(&local_3c,"Colon");
    util__Str_char___Str_char__o5(&local_c0,"Fleet Status OrbitalPeriod");
    this_00 = (FixedOrbit *)(**(code **)*(int *)this)();
    local_14.Length = (int)this_00;
    if (*(char *)&this_00[1].OrbitedBody.Pointer == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    FixedOrbit__GetOrbitalPeriod_s_Memoize(this_00);
    if (*(char *)&(this_00->GetFullRotator_MemoizedValue).Data.X == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    local_30.Data = (char *)0x0;
    local_30.Capacity = 0;
    local_30.Length = 0;
    local_48.Data = (char *)0x0;
    local_48.Capacity = 0;
    local_48.Length = 0;
    pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_b4,&local_3c,&local_30);
    pSVar4 = util__LocStr__operator__o3(pLVar3);
    pcVar8 = (char *)0x7271a8;
    pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_9c,&local_c0,&local_48);
    pSVar6 = util__LocStr__operator__o3(pLVar3);
    local_20.Length = 0;
    local_20.Data = (char *)0x0;
    local_20.Capacity = 0;
    util__Str_char___Str_char(&local_20,pSVar6);
    util__Str_char___operator__o10(&local_20,pSVar4);
    pSVar4 = &local_20;
    iVar5 = 0x7271dc;
    util__Str_char___Str_char(&local_78,pSVar4);
    if ((Str_L_char_G_ *)local_20.Data != (Str_L_char_G_ *)0x0) {
      iVar5 = 0x7271e9;
      pSVar4 = (Str_L_char_G_ *)local_20.Data;
      operator_delete__(local_20.Data);
      ((slice_view *)&local_20)->_0_8_ = ((slice_view *)&local_20)->_0_8_ & 0xffffffff00000000;
    }
    GetUnitsOfType((Str_L_char_G_ *)&stack0xfffffe34,&local_54);
    SVar2.Capacity = (int)pSVar4;
    SVar2.Data = (char *)iVar5;
    SVar2.Length = (int)puVar9;
    pSVar4 = Print(&local_84,
                   (double)CONCAT44(pcVar8,(int)((ulonglong)
                                                 *(undefined8 *)
                                                  &((Maybe_L_double_G_ *)(local_14.Length + 0x68))->
                                                   IsValidData >> 0x20)),SVar2);
    local_14.Length = 0;
    local_14.Data = (char *)0x0;
    local_14.Capacity = 0;
    util__Str_char___Str_char(&local_14,&local_78);
    util__Str_char___operator__o10(&local_14,pSVar4);
    util__Str_char___Str_char(&local_6c,&local_14);
    if (local_14.Data != (char *)0x0) {
      operator_delete__(local_14.Data);
      local_14.Data = (char *)0x0;
    }
    util__Str_char___operator__o10(__return_storage_ptr__,&local_6c);
    if (local_6c.Data != (char *)0x0) {
      operator_delete__(local_6c.Data);
    }
    if (local_78.Data != (char *)0x0) {
      operator_delete__(local_78.Data);
    }
    if (local_90 != (void *)0x0) {
      operator_delete__(local_90);
      local_90 = (void *)0x0;
    }
    if (local_9c[0] != (void *)0x0) {
      operator_delete__(local_9c[0]);
      local_9c[0] = (void *)0x0;
    }
    if (local_48.Data != (char *)0x0) {
      operator_delete__(local_48.Data);
      local_48.Data = (char *)0x0;
    }
    if (local_a8 != (void *)0x0) {
      operator_delete__(local_a8);
      local_a8 = (void *)0x0;
    }
    if (local_b4[0] != (void *)0x0) {
      operator_delete__(local_b4[0]);
      local_b4[0] = (void *)0x0;
    }
    if (local_30.Data != (char *)0x0) {
      operator_delete__(local_30.Data);
      local_30.Data = (char *)0x0;
    }
    if (local_84.Data != (char *)0x0) {
      operator_delete__(local_84.Data);
      local_84.Data = (char *)0x0;
    }
    local_150 = ((void *)(0x009194a4u));
    if (local_14c != (void *)0x0) {
      operator_delete__(local_14c);
    }
    local_14c = (void *)0x0;
    local_150 = ((void *)(0x00919488u));
    local_198 = ((void *)(0x00919980u));
    if (local_194 != (void *)0x0) {
      operator_delete__(local_194);
      local_194 = (void *)0x0;
    }
    if (local_1a0 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_1a0);
    }
    if (local_c0.Data != (char *)0x0) {
      operator_delete__(local_c0.Data);
      local_c0.Data = (char *)0x0;
    }
    if (local_3c.Data != (char *)0x0) {
      operator_delete__(local_3c.Data);
      local_3c.Data = (char *)0x0;
    }
    if (local_54.Data != (char *)0x0) {
      operator_delete__(local_54.Data);
    }
  }
  dVar7 = CelestialBody__GetPopulation(this->BodyTemplate);
  local_14.Capacity = *(undefined4 *)&dVar7;
  local_14.Length = (int)((ulonglong)dVar7 >> 0x20);
  if (0.0 < dVar7) {
    util__Str_char___Str_char__o5(&local_54,"\n\t");
    util__Str_char___operator__o10(__return_storage_ptr__,&local_54);
    if (local_54.Data != (char *)0x0) {
      operator_delete__(local_54.Data);
    }
    util__Str_char___Str_char__o5(&local_6c,"Colon");
    util__Str_char___Str_char__o5(&local_3c,"Population");
    local_48.Data = (char *)0x0;
    local_48.Capacity = 0;
    local_48.Length = 0;
    local_30.Data = (char *)0x0;
    local_30.Capacity = 0;
    local_30.Length = 0;
    pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_9c,&local_6c,&local_48);
    pSVar4 = util__LocStr__operator__o3(pLVar3);
    pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_b4,&local_3c,&local_30);
    pSVar6 = util__LocStr__operator__o3(pLVar3);
    local_20.Length = 0;
    local_20.Data = (char *)0x0;
    local_20.Capacity = 0;
    util__Str_char___Str_char(&local_20,pSVar6);
    util__Str_char___operator__o10(&local_20,pSVar4);
    util__Str_char___Str_char(&local_84,&local_20);
    if (local_20.Data != (char *)0x0) {
      operator_delete__(local_20.Data);
      ((slice_view *)&local_20)->_0_8_ = ((slice_view *)&local_20)->_0_8_ & 0xffffffff00000000;
    }
    dVar7 = CelestialBody__GetOrbitalPopulation(this->BodyTemplate);
    pSVar4 = PrintBigInteger(&local_78,(double)CONCAT44(puVar9,(int)((ulonglong)dVar7 >> 0x20)));
    local_14.Length = 0;
    local_14.Data = (char *)0x0;
    local_14.Capacity = 0;
    util__Str_char___Str_char(&local_14,&local_84);
    util__Str_char___operator__o10(&local_14,pSVar4);
    util__Str_char___Str_char(&local_54,&local_14);
    if (local_14.Data != (char *)0x0) {
      operator_delete__(local_14.Data);
      local_14.Data = (char *)0x0;
    }
    util__Str_char___operator__o10(__return_storage_ptr__,&local_54);
    if (local_54.Data != (char *)0x0) {
      operator_delete__(local_54.Data);
    }
    if (local_84.Data != (char *)0x0) {
      operator_delete__(local_84.Data);
    }
    if (local_a8 != (void *)0x0) {
      operator_delete__(local_a8);
      local_a8 = (void *)0x0;
    }
    if (local_b4[0] != (void *)0x0) {
      operator_delete__(local_b4[0]);
      local_b4[0] = (void *)0x0;
    }
    if (local_30.Data != (char *)0x0) {
      operator_delete__(local_30.Data);
      local_30.Data = (char *)0x0;
    }
    if (local_90 != (void *)0x0) {
      operator_delete__(local_90);
      local_90 = (void *)0x0;
    }
    if (local_9c[0] != (void *)0x0) {
      operator_delete__(local_9c[0]);
      local_9c[0] = (void *)0x0;
    }
    if (local_48.Data != (char *)0x0) {
      operator_delete__(local_48.Data);
      local_48.Data = (char *)0x0;
    }
    if (local_78.Data != (char *)0x0) {
      operator_delete__(local_78.Data);
      local_78.Data = (char *)0x0;
    }
    if (local_3c.Data != (char *)0x0) {
      operator_delete__(local_3c.Data);
      local_3c.Data = (char *)0x0;
    }
    if (local_6c.Data != (char *)0x0) {
      operator_delete__(local_6c.Data);
    }
  }
  dVar7 = CelestialBody__GetOrbitalPopulation(this->BodyTemplate);
  local_14.Capacity = *(undefined4 *)&dVar7;
  local_14.Length = (int)((ulonglong)dVar7 >> 0x20);
  if (0.0 < dVar7) {
    util__Str_char___Str_char__o5(&local_54,"\n\t");
    util__Str_char___operator__o10(__return_storage_ptr__,&local_54);
    if (local_54.Data != (char *)0x0) {
      operator_delete__(local_54.Data);
    }
    util__Str_char___Str_char__o5(&local_6c,"Colon");
    util__Str_char___Str_char__o5(&local_3c,"OrbitalPopulation");
    local_48.Data = (char *)0x0;
    local_48.Capacity = 0;
    local_48.Length = 0;
    local_30.Data = (char *)0x0;
    local_30.Capacity = 0;
    local_30.Length = 0;
    pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_9c,&local_6c,&local_48);
    pSVar4 = util__LocStr__operator__o3(pLVar3);
    pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_b4,&local_3c,&local_30);
    pSVar6 = util__LocStr__operator__o3(pLVar3);
    local_20.Length = 0;
    local_20.Data = (char *)0x0;
    local_20.Capacity = 0;
    util__Str_char___Str_char(&local_20,pSVar6);
    util__Str_char___operator__o10(&local_20,pSVar4);
    util__Str_char___Str_char(&local_84,&local_20);
    if (local_20.Data != (char *)0x0) {
      operator_delete__(local_20.Data);
      ((slice_view *)&local_20)->_0_8_ = ((slice_view *)&local_20)->_0_8_ & 0xffffffff00000000;
    }
    dVar7 = CelestialBody__GetOrbitalPopulation(this->BodyTemplate);
    pSVar4 = PrintBigInteger(&local_78,(double)CONCAT44(puVar9,(int)((ulonglong)dVar7 >> 0x20)));
    local_14.Length = 0;
    local_14.Data = (char *)0x0;
    local_14.Capacity = 0;
    util__Str_char___Str_char(&local_14,&local_84);
    util__Str_char___operator__o10(&local_14,pSVar4);
    util__Str_char___Str_char(&local_54,&local_14);
    if (local_14.Data != (char *)0x0) {
      operator_delete__(local_14.Data);
      local_14.Data = (char *)0x0;
    }
    util__Str_char___operator__o10(__return_storage_ptr__,&local_54);
    if (local_54.Data != (char *)0x0) {
      operator_delete__(local_54.Data);
    }
    if (local_84.Data != (char *)0x0) {
      operator_delete__(local_84.Data);
    }
    if (local_a8 != (void *)0x0) {
      operator_delete__(local_a8);
      local_a8 = (void *)0x0;
    }
    if (local_b4[0] != (void *)0x0) {
      operator_delete__(local_b4[0]);
      local_b4[0] = (void *)0x0;
    }
    if (local_30.Data != (char *)0x0) {
      operator_delete__(local_30.Data);
      local_30.Data = (char *)0x0;
    }
    if (local_90 != (void *)0x0) {
      operator_delete__(local_90);
      local_90 = (void *)0x0;
    }
    if (local_9c[0] != (void *)0x0) {
      operator_delete__(local_9c[0]);
      local_9c[0] = (void *)0x0;
    }
    if (local_48.Data != (char *)0x0) {
      operator_delete__(local_48.Data);
      local_48.Data = (char *)0x0;
    }
    if (local_78.Data != (char *)0x0) {
      operator_delete__(local_78.Data);
      local_78.Data = (char *)0x0;
    }
    if (local_3c.Data != (char *)0x0) {
      operator_delete__(local_3c.Data);
      local_3c.Data = (char *)0x0;
    }
    if (local_6c.Data != (char *)0x0) {
      operator_delete__(local_6c.Data);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 0000793f10 00793f10_GetTargetAxis ====
extern undefined4 FUN_0078ae00(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_0078aff0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00793f10 name=GetTargetAxis conv=__thiscall body=1266

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Maybe<struct util::Vec3<double> > __thiscall
   ItineraryNodeUI__GetTargetAxis(void)const  */

void __thiscall ItineraryNodeUI__GetTargetAxis(ItineraryNodeUI *this)

{
  undefined4 stack0xfffffffc;
  char cVar1;
  ReferenceController *this_00;
  Fleet *this_01;
  undefined4 uVar2;
  Maybe_L_double_G_ MVar3;
  Maybe_L_double_G_ MVar4;
  bool bVar5;
  ItineraryNodeUI *pIVar6;
  bool bVar7;
  undefined4 *puVar8;
  FixedOrbit *pFVar9;
  Vec3_L_double_G_ *pVVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar14;
  Maybe_L_struct_FixedOrbit_G_ *this_02;
  undefined4 *in_stack_00000004;
  undefined4 uVar15;
  uint in_stack_fffffbc8;
  undefined1 *puVar16;
  uint uVar17;
  undefined4 uVar18;
  Vec3_L_double_G_ local_420;
  undefined1 local_408[8];
  FixedOrbit local_400;
  undefined1 local_318[16];
  char local_308;
  ItineraryNodeUI *local_300;
  ReferenceController *local_2f8;
  char local_2f1;
  WorldObject local_2f0;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  ReferenceController *pRStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  ReferenceController *pRStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pRStack_c = (ReferenceController *)0x0;
  uVar18 = 0x793f47;
  local_300 = this;
  StrategicManager__GetReferenceObject((StrategicManager *)this->_pad_0x0_0,&local_2f0);
  bVar7 = WorldObject__IsFleet(&local_2f0);
  if (bVar7) {
    pVVar10 = (Vec3_L_double_G_ *)local_318;
    uVar15 = 0;
    in_stack_fffffbc8 = in_stack_fffffbc8 & 0xffffff00;
    puVar8 = (undefined4 *)WorldObject__AsFleet(&local_2f0);
    if (((ReferenceController *)puVar8[1] != (ReferenceController *)0x0) &&
       (bVar7 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar8[1]),
       !bVar7)) {
      *puVar8 = 0;
    }
    ((slice_view *)&MVar3.Data)->_4_4_ = in_stack_fffffbc8;
    ((slice_view *)&MVar3.Data)->_0_4_ = uVar15;
    ((slice_view *)&MVar3)->_8_4_ = uVar18;
    ((slice_view *)&MVar3)->_12_4_ = pVVar10;
    pFVar9 = Fleet__GetEstimatedOrbit((Fleet *)*puVar8,&local_400,MVar3);
    pVVar10 = FixedOrbit__GetUpVector(pFVar9,pVVar10);
    uVar18 = *(undefined4 *)((int)&pVVar10->X + 4);
    uVar15 = *(undefined4 *)&pVVar10->Y;
    uVar2 = *(undefined4 *)((int)&pVVar10->Y + 4);
    *in_stack_00000004 = *(undefined4 *)&pVVar10->X;
    in_stack_00000004[1] = uVar18;
    in_stack_00000004[2] = uVar15;
    in_stack_00000004[3] = uVar2;
    *(double *)(in_stack_00000004 + 4) = pVVar10->Z;
    *(undefined1 *)(in_stack_00000004 + 6) = 1;
    FixedOrbit__dtor(&local_400);
    local_2f8 = pRStack_c;
LAB_00793fcf:
    if (local_2f8 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_2f8);
    }
  }
  else {
    bVar7 = WorldObject__IsCelestialObject(&local_2f0);
    if (bVar7) {
      this_00 = (this->ParentFleet).Controller;
      if ((this_00 != (ReferenceController *)0x0) &&
         (bVar7 = util__ReferenceController__IsDataStillValid(this_00), !bVar7)) {
        (this->ParentFleet).Pointer = (Fleet *)0x0;
      }
      this_01 = (this->ParentFleet).Pointer;
      piVar11 = (int *)WorldObject__AsCelestialObject(&local_2f0);
      piVar12 = (int *)Fleet__GetNearestRelevantBody(this_01);
      if ((piVar11[1] == piVar12[1]) && (*piVar11 == *piVar12)) {
        puVar8 = (undefined4 *)WorldObject__AsCelestialObject(&local_2f0);
        if (((ReferenceController *)puVar8[1] != (ReferenceController *)0x0) &&
           (bVar7 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar8[1]),
           !bVar7)) {
          *puVar8 = 0;
        }
        piVar11 = (int *)CelestialObject__GetAllFleetsOrbitingThis((CelestialObject *)*puVar8);
        bVar5 = true;
        bVar7 = true;
        iVar13 = (**(code **)(*(int *)(uintptr_t)piVar11 + 0xc))();
        if (iVar13 < 2) goto LAB_0079408f;
        local_2f1 = '\x01';
      }
      else {
        bVar5 = false;
        bVar7 = false;
LAB_0079408f:
        local_2f1 = '\0';
      }
      if (bVar7) {
        util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_38);
      }
      if ((pRStack_c != (ReferenceController *)0x0) && (bVar5)) {
        util__ReferenceController__ReleaseWeakReference(pRStack_c);
      }
      if (pRStack_1c != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(pRStack_1c);
      }
      if (local_2f8 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_2f8);
      }
      if (local_2f1 == '\0') {
        piVar11 = (int *)WorldObject__AsCelestialObject(&local_2f0);
        if (((ReferenceController *)piVar11[1] != (ReferenceController *)0x0) &&
           (bVar7 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar11[1]),
           !bVar7)) {
          *piVar11 = 0;
        }
        iVar13 = (*(code *)**(undefined4 **)(*piVar11 + 8))(local_408);
        cVar1 = *(char *)(iVar13 + 0xe8);
        local_400.FixedOrbitMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 =
             (int)((void *)(0x009194a4u));
        if (local_400.FixedOrbitMemoizationHandlerInstance.ResetFunctions.Data !=
            (pmf_e345282a *)0x0) {
          operator_delete__(local_400.FixedOrbitMemoizationHandlerInstance.ResetFunctions.Data);
        }
        local_400.FixedOrbitMemoizationHandlerInstance.ResetFunctions.Data = (pmf_e345282a *)0x0;
        local_400.FixedOrbitMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 =
             (int)((void *)(0x00919488u));
        local_400.Elements._pad_0x0_0 = (int)((void *)(0x00919980u));
        if ((void *)local_400.Elements._pad_0x0_0 != (void *)0x0) {
          operator_delete__((void *)local_400.Elements._pad_0x0_0);
          local_400.Elements._pad_0x0_0 = 0;
        }
        if (local_400.OrbitedBody.Pointer != (CelestialObject *)0x0) {
          util__ReferenceController__ReleaseWeakReference((ReferenceController *)local_400.OrbitedBody.Pointer);
        }
        if (local_2f8 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(local_2f8);
        }
        if (cVar1 != '\0') {
          piVar11 = (int *)WorldObject__AsCelestialObject(&local_2f0);
          if (((ReferenceController *)piVar11[1] != (ReferenceController *)0x0) &&
             (bVar7 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar11[1])
             , !bVar7)) {
            *piVar11 = 0;
          }
          pVVar10 = &local_420;
          this_02 = (Maybe_L_struct_FixedOrbit_G_ *)
                    (*(code *)**(undefined4 **)(*piVar11 + 8))(local_408);
          pFVar9 = util_Maybe_struct_FixedOrbit_operator(this_02);
          pVVar10 = FixedOrbit__GetUpVector(pFVar9,pVVar10);
          uVar18 = *(undefined4 *)((int)&pVVar10->X + 4);
          uVar15 = *(undefined4 *)&pVVar10->Y;
          uVar2 = *(undefined4 *)((int)&pVVar10->Y + 4);
          *in_stack_00000004 = *(undefined4 *)&pVVar10->X;
          in_stack_00000004[1] = uVar18;
          in_stack_00000004[2] = uVar15;
          in_stack_00000004[3] = uVar2;
          *(double *)(in_stack_00000004 + 4) = pVVar10->Z;
          *(undefined1 *)(in_stack_00000004 + 6) = 1;
          local_400.FixedOrbitMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 =
               (int)((void *)(0x009194a4u));
          if (local_400.FixedOrbitMemoizationHandlerInstance.ResetFunctions.Data !=
              (pmf_e345282a *)0x0) {
            operator_delete__(local_400.FixedOrbitMemoizationHandlerInstance.ResetFunctions.Data);
          }
          local_400.FixedOrbitMemoizationHandlerInstance.ResetFunctions.Data = (pmf_e345282a *)0x0;
          local_400.FixedOrbitMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 =
               (int)((void *)(0x00919488u));
          local_400.Elements._pad_0x0_0 = (int)((void *)(0x00919980u));
          if ((void *)local_400.Elements._pad_0x0_0 != (void *)0x0) {
            operator_delete__((void *)local_400.Elements._pad_0x0_0);
            local_400.Elements._pad_0x0_0 = 0;
          }
          if (local_400.OrbitedBody.Pointer != (CelestialObject *)0x0) {
            util__ReferenceController__ReleaseWeakReference((ReferenceController *)local_400.OrbitedBody.Pointer);
          }
          goto LAB_00793fcf;
        }
      }
      else {
        local_18 = 0;
        uStack_14 = 0;
        uStack_10 = 0;
        pRStack_c = (ReferenceController *)0x0;
        puVar8 = (undefined4 *)WorldObject__AsCelestialObject(&local_2f0);
        if (((ReferenceController *)puVar8[1] != (ReferenceController *)0x0) &&
           (bVar7 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar8[1]),
           !bVar7)) {
          *puVar8 = 0;
        }
        CelestialObject__GetAllFleetsOrbitingThis((CelestialObject *)*puVar8);
        if (local_2f8 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(local_2f8);
        }
        pIVar6 = local_300;
        local_28 = 0;
        uStack_24 = 0;
        iStack_20 = 0;
        pRStack_1c = (ReferenceController *)0x0;
        FUN_0078ae00(&local_28,&local_18,local_300);
        pDVar14 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_28;
        if (iStack_20 < 1) {
          pDVar14 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_18;
        }
        local_38 = 0;
        uStack_34 = 0;
        uStack_30 = 0;
        uStack_2c = 0;
        util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment((Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_38,pDVar14);
        puVar8 = &local_38;
        puVar16 = local_318;
        FUN_0078aff0(puVar16,puVar8,pIVar6);
        if (local_308 != '\0') {
          pVVar10 = &local_420;
          uVar18 = 0;
          uVar17 = (uint)puVar16 & 0xffffff00;
          if (((ReferenceController *)((slice_view *)&local_318)->_4_4_ != (ReferenceController *)0x0) &&
             (bVar7 = util__ReferenceController__IsDataStillValid((ReferenceController *)((slice_view *)&local_318)->_4_4_), !bVar7)) {
            ((slice_view *)&local_318)->_0_4_ = (Fleet *)0x0;
          }
          ((slice_view *)&MVar4.Data)->_4_4_ = uVar17;
          ((slice_view *)&MVar4.Data)->_0_4_ = uVar18;
          ((slice_view *)&MVar4)->_8_4_ = puVar8;
          ((slice_view *)&MVar4)->_12_4_ = pVVar10;
          pFVar9 = Fleet__GetEstimatedOrbit((Fleet *)((slice_view *)&local_318)->_0_4_,&local_400,MVar4);
          pVVar10 = FixedOrbit__GetUpVector(pFVar9,pVVar10);
          uVar18 = *(undefined4 *)((int)&pVVar10->X + 4);
          uVar15 = *(undefined4 *)&pVVar10->Y;
          uVar2 = *(undefined4 *)((int)&pVVar10->Y + 4);
          *in_stack_00000004 = *(undefined4 *)&pVVar10->X;
          in_stack_00000004[1] = uVar18;
          in_stack_00000004[2] = uVar15;
          in_stack_00000004[3] = uVar2;
          *(double *)(in_stack_00000004 + 4) = pVVar10->Z;
          *(undefined1 *)(in_stack_00000004 + 6) = 1;
          FixedOrbit__dtor(&local_400);
          if ((ReferenceController *)((slice_view *)&local_318)->_4_4_ != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference((ReferenceController *)((slice_view *)&local_318)->_4_4_);
          }
          util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_38);
          util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_28);
          util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_18);
          goto LAB_0079424d;
        }
        if ((ReferenceController *)((slice_view *)&local_318)->_4_4_ != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference((ReferenceController *)((slice_view *)&local_318)->_4_4_);
        }
        util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_38);
        util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_28);
        util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_18);
      }
    }
    *in_stack_00000004 = 0;
    in_stack_00000004[1] = 0;
    in_stack_00000004[2] = 0;
    in_stack_00000004[3] = 0;
    *(undefined8 *)(in_stack_00000004 + 4) = 0;
    *(undefined1 *)(in_stack_00000004 + 6) = 0;
  }
LAB_0079424d:
  NodeMouseOver__dtor(&local_2f0.Node);
  if (local_2f0.Object.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_2f0.Object.Controller);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007aaca0 007aaca0_IsScreenDistanceToObjectUnobscured ====
// decompiled by BatchDecomp @ 007aaca0 name=IsScreenDistanceToObjectUnobscured conv=__thiscall body=1244

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall GhostedUIButton__IsScreenDistanceToObjectUnobscured(class
   util::WeakPtr<class CelestialObject>,double)const  */

bool __thiscall
GhostedUIButton__IsScreenDistanceToObjectUnobscured(GhostedUIButton *this,CelestialObject *param_2,ReferenceController *param_3)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  StrategicManager *this_00;
  Vec3_L_double_G_ VVar2;
  Vec3_L_double_G_ VVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined4 unaff_EDI;
  float10 fVar6;
  double dVar7;
  undefined4 local_5a8;
  undefined4 uStack_5a4;
  undefined8 uStack_5a0;
  undefined4 uStack_59c;
  Vec3_L_double_G_ local_598;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined1 local_570[4];
  undefined4 uStack_56c;
  undefined8 uStack_568;
  undefined8 uStack_560;
  int local_558;
  ReferenceController *local_554;
  ReferenceController *local_464;
  ReferenceController *local_45c;
  ReferenceController *local_454;
  ReferenceController *local_42c;
  int local_400;
  ReferenceController *local_3fc;
  ReferenceController *local_30c;
  ReferenceController *local_304;
  ReferenceController *local_2fc;
  ReferenceController *local_2d4;
  ItineraryNode local_2a8;
  ItineraryNode local_158;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (((param_2 == (CelestialObject *)0x0) || (param_3 == (ReferenceController *)0x0)) ||
     (bVar4 = util__ReferenceController__IsDataStillValid(param_3), !bVar4)) {
    uVar5 = true;
  }
  else {
    bVar4 = (this->GetTimeSinceJ2000_s_MemoizedValue).IsValidData == false;
    if (bVar4) {
      iVar1 = (this->GhostedUIButtonMemoizationHandlerInstance).ResetFunctions.Size;
      uStack_560 = CONCAT44(iVar1 + 1,(undefined4)uStack_560);
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)
                 &this->GhostedUIButtonMemoizationHandlerInstance,(int *)((int)&uStack_560 + 4));
      bVar4 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                         &this->GhostedUIButtonMemoizationHandlerInstance,iVar1);
      if (bVar4) {
        (this->GhostedUIButtonMemoizationHandlerInstance).ResetFunctions.Data
        [(this->GhostedUIButtonMemoizationHandlerInstance).ResetFunctions.Size + -1] =
             CDE_PMF(pmf_55606f16, GhostedUIButton__GetTimeSinceJ2000_s_Clear);
      }
      StrategicManager__GetSelectedItineraryNode((StrategicManager *)this->_pad_0x0_0,&local_158);
      StrategicManager__GetHoveredItineraryNode((StrategicManager *)this->_pad_0x0_0);
      if ((local_158.Parent.Pointer == (Fleet *)0x0) && (local_400 == 0)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (local_2d4 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_2d4);
      }
      if (local_2fc != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_2fc);
      }
      if (local_304 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_304);
      }
      if (local_30c != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_30c);
      }
      if (local_3fc != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_3fc);
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
      if (bVar4) {
        dVar7 = StrategicManager__GetLookaheadTimeSinceJ2000_s((StrategicManager *)this->_pad_0x0_0);
      }
      else {
        dVar7 = StrategicManager__GetTimeSinceJ2000_s((StrategicManager *)this->_pad_0x0_0);
      }
      uStack_578 = CONCAT71((int7)((ulonglong)dVar7 >> 8),1);
      ((slice_view *)&local_580)->_0_4_ = *(undefined4 *)&dVar7;
      ((slice_view *)&local_580)->_4_4_ = *(undefined4 *)((char *)&dVar7 + 4);
      *(undefined4 *)&(this->GetTimeSinceJ2000_s_MemoizedValue).Data = (undefined4)local_580;
      *(undefined4 *)((int)&(this->GetTimeSinceJ2000_s_MemoizedValue).Data + 4) = ((slice_view *)&local_580)->_4_4_;
      *(undefined4 *)&(this->GetTimeSinceJ2000_s_MemoizedValue).IsValidData = (undefined4)uStack_578
      ;
      *(undefined4 *)((char *)&(this->GetTimeSinceJ2000_s_MemoizedValue) + 0xc) = ((slice_view *)&local_580)->_4_4_;
      bVar4 = (this->GetTimeSinceJ2000_s_MemoizedValue).IsValidData == false;
      local_580 = dVar7;
    }
    if (bVar4) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if ((param_3 != (ReferenceController *)0x0) &&
       (bVar4 = util__ReferenceController__IsDataStillValid(param_3), !bVar4)) {
      param_2 = (CelestialObject *)0x0;
    }
    uStack_578 = CONCAT44(param_2,(undefined4)uStack_578);
    if ((this->GetTimeSinceJ2000_s_MemoizedValue).IsValidData == false) {
      iVar1 = (this->GhostedUIButtonMemoizationHandlerInstance).ResetFunctions.Size;
      uStack_560 = CONCAT44(iVar1 + 1,(undefined4)uStack_560);
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)
                 &this->GhostedUIButtonMemoizationHandlerInstance,(int *)((int)&uStack_560 + 4));
      bVar4 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                         &this->GhostedUIButtonMemoizationHandlerInstance,iVar1);
      if (bVar4) {
        (this->GhostedUIButtonMemoizationHandlerInstance).ResetFunctions.Data
        [(this->GhostedUIButtonMemoizationHandlerInstance).ResetFunctions.Size + -1] =
             CDE_PMF(pmf_55606f16, GhostedUIButton__GetTimeSinceJ2000_s_Clear);
      }
      StrategicManager__GetSelectedItineraryNode((StrategicManager *)this->_pad_0x0_0,&local_2a8);
      StrategicManager__GetHoveredItineraryNode((StrategicManager *)this->_pad_0x0_0);
      if ((local_2a8.Parent.Pointer == (Fleet *)0x0) && (local_558 == 0)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (local_42c != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_42c);
      }
      if (local_454 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_454);
      }
      if (local_45c != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_45c);
      }
      if (local_464 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_464);
      }
      if (local_554 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_554);
      }
      if (local_2a8.CachedNearestOrbiter.Controller != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_2a8.CachedNearestOrbiter.Controller);
      }
      if (local_2a8.CachedNearestFleet.Controller != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_2a8.CachedNearestFleet.Controller);
      }
      if (local_2a8.CachedNearestBody.Controller != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_2a8.CachedNearestBody.Controller);
      }
      if (local_2a8.CachedGravityBody.Controller != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_2a8.CachedGravityBody.Controller);
      }
      if (local_2a8.Parent.Controller != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_2a8.Parent.Controller);
      }
      if (bVar4) {
        dVar7 = StrategicManager__GetLookaheadTimeSinceJ2000_s((StrategicManager *)this->_pad_0x0_0);
      }
      else {
        dVar7 = StrategicManager__GetTimeSinceJ2000_s((StrategicManager *)this->_pad_0x0_0);
      }
      uStack_560 = CONCAT71((int7)((ulonglong)dVar7 >> 8),1);
      ((slice_view *)&uStack_568)->_0_4_ = *(undefined4 *)&dVar7;
      ((slice_view *)&uStack_568)->_4_4_ = *(undefined4 *)((char *)&dVar7 + 4);
      *(undefined4 *)&(this->GetTimeSinceJ2000_s_MemoizedValue).Data = (undefined4)uStack_568;
      *(undefined4 *)((int)&(this->GetTimeSinceJ2000_s_MemoizedValue).Data + 4) = ((slice_view *)&uStack_568)->_4_4_;
      *(undefined4 *)&(this->GetTimeSinceJ2000_s_MemoizedValue).IsValidData = (undefined4)uStack_560
      ;
      *(undefined4 *)((char *)&(this->GetTimeSinceJ2000_s_MemoizedValue) + 0xc) = ((slice_view *)&uStack_568)->_4_4_;
      uStack_568 = dVar7;
      if ((this->GetTimeSinceJ2000_s_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
    }
    if ((this->GetLocation_km_MemoizedValue).IsValidData == false) {
      iVar1 = (this->GhostedUIButtonMemoizationHandlerInstance).ResetFunctions.Size;
      uStack_560 = CONCAT44(iVar1 + 1,(undefined4)uStack_560);
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)
                 &this->GhostedUIButtonMemoizationHandlerInstance,(int *)((int)&uStack_560 + 4));
      bVar4 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                         &this->GhostedUIButtonMemoizationHandlerInstance,iVar1);
      if (bVar4) {
        (this->GhostedUIButtonMemoizationHandlerInstance).ResetFunctions.Data
        [(this->GhostedUIButtonMemoizationHandlerInstance).ResetFunctions.Size + -1] =
             CDE_PMF(pmf_55606f16, GhostedUIButton__GetLocation_km_Clear);
      }
      iVar1 = this->_pad_0x0_0;
      fVar6 = (float10)(**(code **)(iVar1 + 0xdc))();
      (**(code **)(iVar1 + 0xd8))(local_570,(double)fVar6);
      this_00 = (StrategicManager *)this->_pad_0x0_0;
      fVar6 = (float10)(**(code **)(*(int *)this + 0xdc))();
      ((slice_view *)&VVar3.X)->_4_4_ = (undefined4)uStack_568;
      ((slice_view *)&VVar3.X)->_0_4_ = uStack_56c;
      ((slice_view *)&VVar3.Y)->_0_4_ = ((slice_view *)&uStack_568)->_4_4_;
      ((slice_view *)&VVar3.Y)->_4_4_ = (int)uStack_560;
      ((slice_view *)&VVar3.Z)->_0_4_ = (int)((ulonglong)uStack_560 >> 0x20);
      ((slice_view *)&VVar3.Z)->_4_4_ = SUB84((double)fVar6,0);
      StrategicManager__GetReferenceShiftedPosition_km(this_00,&local_598,VVar3,
                 (double)CONCAT44(unaff_EDI,(int)((ulonglong)(double)fVar6 >> 0x20)));
      ((slice_view *)&uStack_5a0)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_5a0)->_1_3_[0] | (((slice_view *)&uStack_5a0)->_1_3_[1] << 8) | (((slice_view *)&uStack_5a0)->_1_3_[2] << 16)) << 8));
      local_5a8 = *(undefined4 *)&local_598.Z;
      uStack_5a4 = (undefined4)((ulonglong)local_598.Z >> 0x20);
      *(undefined4 *)&(this->GetLocation_km_MemoizedValue).Data.X = ((slice_view *)&local_598.X)->_0_4_;
      *(undefined4 *)((int)&(this->GetLocation_km_MemoizedValue).Data.X + 4) = ((slice_view *)&local_598.X)->_4_4_;
      *(undefined4 *)&(this->GetLocation_km_MemoizedValue).Data.Y = ((slice_view *)&local_598.Y)->_0_4_;
      *(undefined4 *)((int)&(this->GetLocation_km_MemoizedValue).Data.Y + 4) = ((slice_view *)&local_598.Y)->_4_4_;
      *(undefined4 *)&(this->GetLocation_km_MemoizedValue).Data.Z = local_5a8;
      *(undefined4 *)((int)&(this->GetLocation_km_MemoizedValue).Data.Z + 4) = uStack_5a4;
      *(undefined4 *)&(this->GetLocation_km_MemoizedValue).IsValidData = uStack_5a0;
      *(undefined4 *)((char *)&(this->GetLocation_km_MemoizedValue) + 0x1c) = uStack_59c;
      if ((this->GetLocation_km_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
    }
    if ((param_3 != (ReferenceController *)0x0) &&
       (bVar4 = util__ReferenceController__IsDataStillValid(param_3), !bVar4)) {
      param_2 = (CelestialObject *)0x0;
    }
    dVar7 = CelestialObject__GetScreenRadius(((slice_view *)&uStack_578)->_4_4_,(this->GetTimeSinceJ2000_s_MemoizedValue).Data);
    ((slice_view *)&VVar2.Z)->_4_4_ = (int)((ulonglong)(this->GetLocation_km_MemoizedValue).Data.Z >> 0x20);
    memcpy((void *)((slice_view *)&VVar2)->raw + 0, (const void *)&(this->GetLocation_km_MemoizedValue).Data, 20);
    uVar5 = CelestialObject__IsScreenObjectUnobscured(param_2,VVar2,(this->GetTimeSinceJ2000_s_MemoizedValue).Data,dVar7);
  }
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar5;
}


//==== 00007bd6e0 007bd6e0_ShipVsCloud ====
extern undefined4 FUN_007ba980(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007bd6e0 name=ShipVsCloud conv=__cdecl body=1102

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* void __cdecl Collision__ShipVsCloud(class TacticalManager *,class util::WeakPtr<class
   Component>,class util::WeakPtr<class Component>,double,double) */

void __cdecl
Collision__ShipVsCloud(undefined4 param_1,int *param_2,ReferenceController *param_3,undefined4 param_4,
          ReferenceController *param_5,double param_6,double param_7)

{
  undefined4 stack0xfffffffc;
  Body *this;
  Body *this_00;
  Vec3_L_double_G_ VVar1;
  int *piVar2;
  bool bVar3;
  double *pdVar4;
  undefined4 *puVar5;
  Line3_L_double_G_ *pLVar6;
  Line3_L_double_G_ *pLVar7;
  MatterCloudComponent *pMVar8;
  Line3_L_double_G_ local_108;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  double local_c0;
  undefined1 local_b8[20];
  int **ppiStack_a4;
  MatterCloudComponent **ppMStack_a0;
  double *pdStack_9c;
  double *local_98;
  undefined4 *puStack_94;
  double *pdStack_90;
  undefined8 *puStack_8c;
  double local_88;
  double local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  double local_60;
  double dStack_58;
  double local_50;
  double local_48;
  double dStack_40;
  double local_38;
  undefined **local_30;
  void *pvStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  double local_20;
  MatterCloudComponent *local_18;
  ReferenceController *pRStack_14;
  int *local_10;
  ReferenceController *pRStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_20 = param_6;
  local_10 = param_2;
  local_10 = param_2;
  pRStack_c = param_3;
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_3);
  }
  _local_18 = CONCAT44(param_5,param_4);
  if (param_5 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_5);
  }
  local_80 = local_20 * param_7;
  if ((pRStack_c != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid(pRStack_c), !bVar3)) {
    local_10 = (int *)0x0;
  }
  pdVar4 = (double *)(**(code **)(*(int *)(uintptr_t)local_10 + 0x5c))(&local_d8);
  if (*(char *)(pdVar4 + 1) == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_88 = *pdVar4;
  if ((pRStack_c != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid(pRStack_c), !bVar3)) {
    local_10 = (int *)0x0;
  }
  piVar2 = local_10;
  if (((ReferenceController *)local_10[2] != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)local_10[2]),
     !bVar3)) {
    piVar2[1] = 0;
  }
  puVar5 = (undefined4 *)
           Body__GetInterpolatedState((Body *)piVar2[1],(double)CONCAT44(SUB84(local_20,0),local_b8));
  local_d8 = *puVar5;
  uStack_d4 = puVar5[1];
  uStack_d0 = puVar5[2];
  uStack_cc = puVar5[3];
  local_c8 = *(undefined8 *)(puVar5 + 4);
  if ((pRStack_c != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid(pRStack_c), !bVar3)) {
    local_10 = (int *)0x0;
  }
  piVar2 = local_10;
  if (((ReferenceController *)local_10[2] != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)local_10[2]),
     !bVar3)) {
    piVar2[1] = 0;
  }
  this = (Body *)piVar2[1];
  if (pRStack_14 == (ReferenceController *)0x0) {
    pMVar8 = local_18;
  }
  else {
    bVar3 = util__ReferenceController__IsDataStillValid(pRStack_14);
    pMVar8 = local_18;
    if (!bVar3) {
      pMVar8 = (MatterCloudComponent *)0x0;
    }
    _local_18 = CONCAT44(pRStack_14,pMVar8);
  }
  if (((ReferenceController *)pMVar8->_pad_0x0_0 != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)pMVar8->_pad_0x0_0),
     !bVar3)) {
    pMVar8->_pad_0x0_0 = 0;
  }
  this_00 = (Body *)pMVar8->_pad_0x0_0;
  pLVar6 = Body__GetPositionSweepLine_km(this,(Line3_L_double_G_ *)local_b8);
  pLVar7 = Body__GetPositionSweepLine_km(this_00,&local_108);
  local_60 = (pLVar7->A).X - (pLVar6->A).X;
  dStack_58 = (pLVar7->A).Y - (pLVar6->A).Y;
  local_48 = (pLVar7->B).X - (pLVar6->B).X;
  dStack_40 = (pLVar7->B).Y - (pLVar6->B).Y;
  local_38 = (pLVar7->B).Z - (pLVar6->B).Z;
  local_50 = (pLVar7->A).Z - (pLVar6->A).Z;
  local_108.B.X = local_48 - local_60;
  local_108.B.Y = dStack_40 - dStack_58;
  local_c0 = local_88 + local_88;
  local_108.B.Z = local_38 - local_50;
  util__Vec3_double___SafeNormalized(&local_108.B,(Vec3_L_double_G_ *)&ppMStack_a0);
  local_60 = local_60 - local_c0 * (double)CONCAT44(pdStack_9c,ppMStack_a0);
  dStack_58 = dStack_58 - local_c0 * (double)CONCAT44(puStack_94,local_98);
  local_50 = local_50 - local_c0 * (double)CONCAT44(puStack_8c,pdStack_90);
  if (pRStack_14 == (ReferenceController *)0x0) {
    pMVar8 = local_18;
  }
  else {
    bVar3 = util__ReferenceController__IsDataStillValid(pRStack_14);
    pMVar8 = local_18;
    if (!bVar3) {
      pMVar8 = (MatterCloudComponent *)0x0;
    }
    _local_18 = CONCAT44(pRStack_14,pMVar8);
  }
  if (((ReferenceController *)pMVar8->_pad_0x0_0 != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)pMVar8->_pad_0x0_0),
     !bVar3)) {
    pMVar8->_pad_0x0_0 = 0;
  }
  puVar5 = (undefined4 *)
           Body__GetEstimatedState((Body *)pMVar8->_pad_0x0_0,(double)CONCAT44(SUB84(local_80,0),local_b8));
  local_78 = *puVar5;
  uStack_74 = puVar5[1];
  uStack_70 = puVar5[2];
  uStack_6c = puVar5[3];
  local_68 = *(undefined8 *)(puVar5 + 4);
  local_30 = (undefined **)0x0;
  pvStack_2c = (void *)0x0;
  uStack_28 = 0;
  uStack_24 = 0;
  if (pRStack_14 == (ReferenceController *)0x0) {
    pMVar8 = local_18;
  }
  else {
    bVar3 = util__ReferenceController__IsDataStillValid(pRStack_14);
    pMVar8 = local_18;
    if (!bVar3) {
      pMVar8 = (MatterCloudComponent *)0x0;
    }
    _local_18 = CONCAT44(pRStack_14,pMVar8);
  }
  ((slice_view *)&VVar1.X)->_4_4_ = local_d8;
  ((slice_view *)&VVar1.X)->_0_4_ = &local_30;
  ((slice_view *)&VVar1.Y)->_0_4_ = uStack_d4;
  ((slice_view *)&VVar1.Y)->_4_4_ = uStack_d0;
  ((slice_view *)&VVar1.Z)->_0_4_ = uStack_cc;
  ((slice_view *)&VVar1.Z)->_4_4_ = (int)local_c8;
  MatterCloudComponent__GetHitsOnTarget(pMVar8,VVar1,(double)CONCAT44(SUB84(local_88,0),(int)((ulonglong)local_c8 >> 0x20)),
             (double)CONCAT44(SUB84(local_80,0),(int)((ulonglong)local_88 >> 0x20)));
  ((slice_view *)&local_b8)->_16_4_ = &param_1;
  ppiStack_a4 = &local_10;
  ppMStack_a0 = &local_18;
  pdStack_9c = &local_80;
  local_98 = &local_60;
  puStack_94 = &local_78;
  pdStack_90 = &local_20;
  puStack_8c = &param_7;
  FUN_007ba980(&local_30,((slice_view *)&local_b8)->_16_4_,ppiStack_a4,ppMStack_a0,pdStack_9c,local_98,puStack_94,
               pdStack_90,puStack_8c);
  local_30 = ((void *)(0x0091a900u));
  if (pvStack_2c != (void *)0x0) {
    operator_delete__(pvStack_2c);
  }
  pvStack_2c = (void *)0x0;
  local_30 = ((void *)(0x00919488u));
  if (pRStack_14 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRStack_14);
  }
  if (pRStack_c != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRStack_c);
  }
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  if (param_5 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_5);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007d9990 007d9990_TriggerArmorHitPopup ====
// decompiled by BatchDecomp @ 007d9990 name=TriggerArmorHitPopup conv=__thiscall body=2009

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftComponent__TriggerArmorHitPopup(void) */

void __thiscall SpacecraftComponent__TriggerArmorHitPopup(SpacecraftComponent *this)

{
  undefined4 stack0xfffffffc;
  Faction *pFVar1;
  Body *pBVar2;
  bool bVar3;
  Faction *pFVar4;
  LocStr *pLVar5;
  Str_L_char_G_ *pSVar6;
  undefined4 *puVar7;
  char *pcVar8;
  TacticalManager *pTVar9;
  int *piVar10;
  uint uVar11;
  code *pcVar12;
  char *pcVar13;
  SpacecraftComponent *pSVar14;
  ReferenceController *pRVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  LocStr local_cc[24];
  LocStr local_b4[24];
  void *local_9c[3];
  void *local_90;
  Str_L_char_G_ local_84;
  Str_L_char_G_ local_78;
  Str_L_char_G_ local_6c;
  Str_L_char_G_ local_60;
  Str_L_char_G_ local_54;
  Str_L_char_G_ local_48;
  Str_L_char_G_ local_3c;
  ReferenceController *local_2c;
  uint local_28;
  char local_22;
  char local_21;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_2c = (ReferenceController *)0x0;
  if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
     !bVar3)) {
    this->_pad_0x0_0 = 0;
  }
  pFVar1 = *(Faction **)(this->_pad_0x0_0 + 0x1e0);
  if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
     !bVar3)) {
    this->_pad_0x0_0 = 0;
  }
  pFVar4 = TacticalManager__GetPlayerAlliance(*(TacticalManager **)(this->_pad_0x0_0 + 0x1dc));
  local_21 = pFVar1 == pFVar4;
  if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
     !bVar3)) {
    this->_pad_0x0_0 = 0;
  }
  pFVar1 = *(Faction **)(this->_pad_0x0_0 + 0x1e0);
  if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
     !bVar3)) {
    this->_pad_0x0_0 = 0;
  }
  pFVar4 = TacticalManager__GetEnemyAlliance(*(TacticalManager **)(this->_pad_0x0_0 + 0x1dc));
  local_22 = pFVar1 == pFVar4;
  if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
     !bVar3)) {
    this->_pad_0x0_0 = 0;
  }
  pBVar2 = (Body *)this->_pad_0x0_0;
  Body__GetCapitalShipComponent_Memoize(pBVar2);
  if ((pBVar2->GetCapitalShipComponent_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((((pBVar2->GetCapitalShipComponent_MemoizedValue).Data.Pointer == (CapitalShipComponent *)0x0)
      || (pRVar15 = (pBVar2->GetCapitalShipComponent_MemoizedValue).Data.Controller,
         pRVar15 == (ReferenceController *)0x0)) ||
     (bVar3 = util__ReferenceController__IsDataStillValid(pRVar15), !bVar3)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (((local_21 != '\0') || (local_22 != '\0')) && (bVar3)) {
    if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
       (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
       !bVar3)) {
      this->_pad_0x0_0 = 0;
    }
    pBVar2 = (Body *)this->_pad_0x0_0;
    Body__IsAlive_Memoize(pBVar2);
    if ((pBVar2->IsAlive_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if ((pBVar2->IsAlive_MemoizedValue).Data != false) {
      local_20.Data = (char *)0x0;
      local_20.Capacity = 0;
      local_20.Length = 0;
      if (local_21 == '\0') {
        util__Str_char___Str_char__o5(&local_6c,"Enemy");
        local_48.Data = (char *)0x0;
        local_48.Capacity = 0;
        local_48.Length = 0;
        pLVar5 = (LocStr *)util__LocStr__LocStr(local_b4,&local_6c,&local_48);
        pSVar6 = util__LocStr__operator__o3(pLVar5);
        if (pSVar6->Capacity < 1) {
          pcVar13 = "";
        }
        else {
          pcVar13 = pSVar6->Data;
        }
        uVar11 = 0x38;
      }
      else {
        util__Str_char___Str_char__o5(&local_84,"Allied");
        local_54.Data = (char *)0x0;
        local_54.Capacity = 0;
        local_54.Length = 0;
        pLVar5 = (LocStr *)util__LocStr__LocStr(local_cc,&local_84,&local_54);
        pSVar6 = util__LocStr__operator__o3(pLVar5);
        if (pSVar6->Capacity < 1) {
          pcVar13 = "";
          uVar11 = 7;
        }
        else {
          pcVar13 = pSVar6->Data;
          uVar11 = 7;
        }
      }
      local_28 = uVar11;
      util__Str_char___Str_char__o5(&local_60,"ArmorDamaged Message");
      puVar7 = (undefined4 *)
               (**(code **)(**(int **)((this->GetArmorCollisionShells_MemoizedValue).Data.Size + 8)
                           + 0x48))(&local_78);
      if ((int)puVar7[1] < 1) {
        local_2c = (ReferenceController *)
                   &cde_l2_0091985b_NullString;
      }
      else {
        local_2c = (ReferenceController *)*puVar7;
      }
      local_3c.Data = (char *)0x0;
      local_3c.Capacity = 0;
      local_3c.Length = 0;
      pLVar5 = (LocStr *)util__LocStr__LocStr((LocStr *)local_9c,&local_60,&local_3c);
      pSVar6 = util__LocStr__operator__o3(pLVar5);
      if (pSVar6->Capacity < 1) {
        pcVar8 = "";
      }
      else {
        pcVar8 = pSVar6->Data;
      }
      util__Printf(&local_20,pcVar8,pcVar13,local_2c);
      if (local_90 != (void *)0x0) {
        operator_delete__(local_90);
        local_90 = (void *)0x0;
      }
      if (local_9c[0] != (void *)0x0) {
        operator_delete__(local_9c[0]);
        local_9c[0] = (void *)0x0;
      }
      if (local_3c.Data != (char *)0x0) {
        operator_delete__(local_3c.Data);
        local_3c.Data = (char *)0x0;
      }
      if (local_78.Data != (char *)0x0) {
        operator_delete__(local_78.Data);
        local_78.Data = (char *)0x0;
      }
      if (local_60.Data != (char *)0x0) {
        operator_delete__(local_60.Data);
        local_60.Data = (char *)0x0;
      }
      if ((uVar11 & 0x20) != 0) {
        uVar11 = uVar11 & 0xffffffdf;
        local_28 = uVar11;
        util__LocStr___LocStr(local_b4);
      }
      if (((uVar11 & 0x10) != 0) &&
         (uVar11 = uVar11 & 0xffffffef, local_28 = uVar11, local_48.Data != (char *)0x0)) {
        operator_delete__(local_48.Data);
        local_48.Data = (char *)0x0;
      }
      if (((uVar11 & 8) != 0) &&
         (uVar11 = uVar11 & 0xfffffff7, local_28 = uVar11, local_6c.Data != (char *)0x0)) {
        operator_delete__(local_6c.Data);
        local_6c.Data = (char *)0x0;
      }
      if ((uVar11 & 4) != 0) {
        uVar11 = uVar11 & 0xfffffffb;
        local_28 = uVar11;
        util__LocStr___LocStr(local_cc);
      }
      if (((uVar11 & 2) != 0) &&
         (uVar11 = uVar11 & 0xfffffffd, local_28 = uVar11, local_54.Data != (char *)0x0)) {
        operator_delete__(local_54.Data);
        local_54.Data = (char *)0x0;
      }
      if (((uVar11 & 1) != 0) && (local_28 = uVar11 & 0xfffffffe, local_84.Data != (char *)0x0)) {
        operator_delete__(local_84.Data);
      }
      local_14.Data = (char *)0x0;
      local_14.Capacity = 0;
      local_14.Length = 0;
      if (local_21 == '\0') {
        util__Str_char___Str_char__o5(&local_60,"Enemy");
        local_48.Data = (char *)0x0;
        local_48.Capacity = 0;
        local_48.Length = 0;
        pLVar5 = (LocStr *)util__LocStr__LocStr(local_cc,&local_60,&local_48);
        pSVar6 = util__LocStr__operator__o3(pLVar5);
        if (pSVar6->Capacity < 1) {
          pcVar13 = "";
        }
        else {
          pcVar13 = pSVar6->Data;
        }
        uVar11 = 0xe00;
      }
      else {
        util__Str_char___Str_char__o5(&local_78,"Allied");
        local_3c.Data = (char *)0x0;
        local_3c.Capacity = 0;
        local_3c.Length = 0;
        pLVar5 = (LocStr *)util__LocStr__LocStr(local_b4,&local_78,&local_3c);
        pSVar6 = util__LocStr__operator__o3(pLVar5);
        if (pSVar6->Capacity < 1) {
          pcVar13 = "";
          uVar11 = 0x1c0;
        }
        else {
          pcVar13 = pSVar6->Data;
          uVar11 = 0x1c0;
        }
      }
      uVar11 = uVar11 | local_28;
      util__Str_char___Str_char__o5(&local_6c,"ArmorDamaged Tooltip");
      pSVar6 = GetName(this,&local_84);
      if (pSVar6->Capacity < 1) {
        local_2c = (ReferenceController *)
                   &cde_l2_0091985b_NullString;
      }
      else {
        local_2c = (ReferenceController *)pSVar6->Data;
      }
      local_54.Data = (char *)0x0;
      local_54.Capacity = 0;
      local_54.Length = 0;
      pLVar5 = (LocStr *)util__LocStr__LocStr((LocStr *)local_9c,&local_6c,&local_54);
      pSVar6 = util__LocStr__operator__o3(pLVar5);
      if (pSVar6->Capacity < 1) {
        pcVar8 = "";
      }
      else {
        pcVar8 = pSVar6->Data;
      }
      util__Printf(&local_14,pcVar8,pcVar13,local_2c);
      if (local_90 != (void *)0x0) {
        operator_delete__(local_90);
        local_90 = (void *)0x0;
      }
      if (local_9c[0] != (void *)0x0) {
        operator_delete__(local_9c[0]);
        local_9c[0] = (void *)0x0;
      }
      if (local_54.Data != (char *)0x0) {
        operator_delete__(local_54.Data);
        local_54.Data = (char *)0x0;
      }
      if (local_84.Data != (char *)0x0) {
        operator_delete__(local_84.Data);
        local_84.Data = (char *)0x0;
      }
      if (local_6c.Data != (char *)0x0) {
        operator_delete__(local_6c.Data);
        local_6c.Data = (char *)0x0;
      }
      if ((uVar11 & 0x800) != 0) {
        uVar11 = uVar11 & 0xfffff7ff;
        util__LocStr___LocStr(local_cc);
      }
      if (((uVar11 & 0x400) != 0) && (uVar11 = uVar11 & 0xfffffbff, local_48.Data != (char *)0x0)) {
        operator_delete__(local_48.Data);
        local_48.Data = (char *)0x0;
      }
      if (((uVar11 & 0x200) != 0) && (uVar11 = uVar11 & 0xfffffdff, local_60.Data != (char *)0x0)) {
        operator_delete__(local_60.Data);
        local_60.Data = (char *)0x0;
      }
      if ((uVar11 & 0x100) != 0) {
        uVar11 = uVar11 & 0xfffffeff;
        util__LocStr___LocStr(local_b4);
      }
      if (((char)uVar11 < '\0') && (uVar11 = uVar11 & 0xffffff7f, local_3c.Data != (char *)0x0)) {
        operator_delete__(local_3c.Data);
        local_3c.Data = (char *)0x0;
      }
      if ((local_78.Data != (char *)0x0) && ((uVar11 & 0x40) != 0)) {
        operator_delete__(local_78.Data);
      }
      uVar16 = 0;
      uVar17 = 0;
      if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0), !bVar3)) {
        this->_pad_0x0_0 = 0;
      }
      pBVar2 = (Body *)this->_pad_0x0_0;
      Body__GetSpacecraftComponent_Memoize(pBVar2);
      pcVar12 = DebugBreak_exref;
      if ((pBVar2->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        pcVar12 = DebugBreak_exref;
        DebugBreak();
      }
      pSVar14 = (pBVar2->GetSpacecraftComponent_MemoizedValue).Data.Pointer;
      pRVar15 = (pBVar2->GetSpacecraftComponent_MemoizedValue).Data.Controller;
      if (pRVar15 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar15);
      }
      pTVar9 = Component__GetManager((Component *)this);
      piVar10 = (int *)TacticalManager__GetTacticalUI(pTVar9);
      if (((ReferenceController *)piVar10[1] != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar10[1]),
         !bVar3)) {
        *piVar10 = 0;
      }
      CombatNotifier__Trigger((CombatNotifier *)(*(int *)(uintptr_t)piVar10 + 0x1d4),6,&local_20,&local_14,pSVar14,pRVar15,uVar16,
                 uVar17);
      if (local_2c != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_2c);
      }
      if (local_21 != '\0') {
        pTVar9 = Component__GetManager((Component *)this);
        TacticalManager__GetStrategicGame_Memoize(pTVar9);
        if (*(char *)&(pTVar9->Effects).Controller == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          (*pcVar12)();
        }
        StrategicManager__TriggerAlliesDamagedMessages((StrategicManager *)(pTVar9->Effects).Pointer);
      }
      if (local_22 != '\0') {
        pTVar9 = Component__GetManager((Component *)this);
        TacticalManager__GetStrategicGame_Memoize(pTVar9);
        if (*(char *)&(pTVar9->Effects).Controller == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          (*pcVar12)();
        }
        StrategicManager__TriggerEnemiesDamagedMessages((StrategicManager *)(pTVar9->Effects).Pointer);
      }
      if (local_14.Data != (char *)0x0) {
        operator_delete__(local_14.Data);
        ((slice_view *)&local_14)->_0_8_ = ((slice_view *)&local_14)->_0_8_ & 0xffffffff00000000;
      }
      if (local_20.Data != (char *)0x0) {
        operator_delete__(local_20.Data);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007da990 007da990_TriggerDestroyedPopup ====
// decompiled by BatchDecomp @ 007da990 name=TriggerDestroyedPopup conv=__thiscall body=1839

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftComponent__TriggerDestroyedPopup(void) */

void __thiscall SpacecraftComponent__TriggerDestroyedPopup(SpacecraftComponent *this)

{
  undefined4 stack0xfffffffc;
  Faction *pFVar1;
  Body *pBVar2;
  CraftBlueprint *this_00;
  bool bVar3;
  Faction *pFVar4;
  LocStr *pLVar5;
  Str_L_char_G_ *pSVar6;
  char *pcVar7;
  TacticalManager *this_01;
  int *piVar8;
  uint uVar9;
  char *pcVar10;
  SpacecraftComponent *pSVar11;
  ReferenceController *pRVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  LocStr local_cc[24];
  LocStr local_b4[24];
  void *local_9c[3];
  void *local_90;
  Str_L_char_G_ local_84;
  Str_L_char_G_ local_78;
  Str_L_char_G_ local_6c;
  Str_L_char_G_ local_60;
  Str_L_char_G_ local_54;
  Str_L_char_G_ local_48;
  Str_L_char_G_ local_3c;
  ReferenceController *local_2c;
  uint local_28;
  char local_21;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_2c = (ReferenceController *)0x0;
  if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
    if (!bVar3) {
      this->_pad_0x0_0 = 0;
    }
  }
  pFVar1 = *(Faction **)(this->_pad_0x0_0 + 0x1e0);
  if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
    if (!bVar3) {
      this->_pad_0x0_0 = 0;
    }
  }
  pFVar4 = TacticalManager__GetPlayerAlliance(*(TacticalManager **)(this->_pad_0x0_0 + 0x1dc));
  local_21 = pFVar1 == pFVar4;
  if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
    if (!bVar3) {
      this->_pad_0x0_0 = 0;
    }
  }
  pFVar1 = *(Faction **)(this->_pad_0x0_0 + 0x1e0);
  if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
    if (!bVar3) {
      this->_pad_0x0_0 = 0;
    }
  }
  pFVar4 = TacticalManager__GetEnemyAlliance(*(TacticalManager **)(this->_pad_0x0_0 + 0x1dc));
  if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
    if (!bVar3) {
      this->_pad_0x0_0 = 0;
    }
  }
  pBVar2 = (Body *)this->_pad_0x0_0;
  Body__GetCapitalShipComponent_Memoize(pBVar2);
  if ((pBVar2->GetCapitalShipComponent_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if (((pBVar2->GetCapitalShipComponent_MemoizedValue).Data.Pointer != (CapitalShipComponent *)0x0)
     && (pRVar12 = (pBVar2->GetCapitalShipComponent_MemoizedValue).Data.Controller,
        pRVar12 != (ReferenceController *)0x0)) {
    bVar3 = util__ReferenceController__IsDataStillValid(pRVar12);
    if (bVar3) {
      bVar3 = true;
      goto LAB_007daaa3;
    }
  }
  bVar3 = false;
LAB_007daaa3:
  this_00 = *(CraftBlueprint **)((this->GetArmorCollisionShells_MemoizedValue).Data.Size + 8);
  CraftBlueprint__IsAPayload_Memoize(this_00);
  if (*(char *)((int)&(this_00->GetMainEngineModulePlacers_MemoizedValue).Data.Capacity + 3) == '\0'
     ) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((((local_21 != '\0') || (pFVar1 == pFVar4)) && (!bVar3)) &&
     (*(char *)((int)&(this_00->GetMainEngineModulePlacers_MemoizedValue).Data.Capacity + 2) == '\0'
     )) {
    local_20.Length = 0;
    local_20.Data = (char *)0x0;
    local_20.Capacity = 0;
    if (local_21 == '\0') {
      util__Str_char___Str_char__o5(&local_6c,"Enemy");
      local_48.Data = (char *)0x0;
      local_48.Capacity = 0;
      local_48.Length = 0;
      pLVar5 = (LocStr *)util__LocStr__LocStr(local_b4,&local_6c,&local_48);
      pSVar6 = util__LocStr__operator__o3(pLVar5);
      if (pSVar6->Capacity < 1) {
        pcVar10 = "";
      }
      else {
        pcVar10 = pSVar6->Data;
      }
      uVar9 = 0x38;
    }
    else {
      util__Str_char___Str_char__o5(&local_84,"Allied");
      local_54.Data = (char *)0x0;
      local_54.Capacity = 0;
      local_54.Length = 0;
      pLVar5 = (LocStr *)util__LocStr__LocStr(local_cc,&local_84,&local_54);
      pSVar6 = util__LocStr__operator__o3(pLVar5);
      if (pSVar6->Capacity < 1) {
        pcVar10 = "";
        uVar9 = 7;
      }
      else {
        pcVar10 = pSVar6->Data;
        uVar9 = 7;
      }
    }
    local_28 = uVar9;
    util__Str_char___Str_char__o5(&local_60,"CraftDisabled Message");
    pSVar6 = GetName(this,&local_78);
    if (pSVar6->Capacity < 1) {
      local_2c = (ReferenceController *)
                 &cde_l2_0091985b_NullString;
    }
    else {
      local_2c = (ReferenceController *)pSVar6->Data;
    }
    local_3c.Data = (char *)0x0;
    local_3c.Capacity = 0;
    local_3c.Length = 0;
    pLVar5 = (LocStr *)util__LocStr__LocStr((LocStr *)local_9c,&local_60,&local_3c);
    pSVar6 = util__LocStr__operator__o3(pLVar5);
    if (pSVar6->Capacity < 1) {
      pcVar7 = "";
    }
    else {
      pcVar7 = pSVar6->Data;
    }
    util__Printf(&local_20,pcVar7,pcVar10,local_2c);
    if (local_90 != (void *)0x0) {
      operator_delete__(local_90);
      local_90 = (void *)0x0;
    }
    if (local_9c[0] != (void *)0x0) {
      operator_delete__(local_9c[0]);
      local_9c[0] = (void *)0x0;
    }
    if (local_3c.Data != (char *)0x0) {
      operator_delete__(local_3c.Data);
      local_3c.Data = (char *)0x0;
    }
    if (local_78.Data != (char *)0x0) {
      operator_delete__(local_78.Data);
      local_78.Data = (char *)0x0;
    }
    if (local_60.Data != (char *)0x0) {
      operator_delete__(local_60.Data);
      local_60.Data = (char *)0x0;
    }
    if ((uVar9 & 0x20) != 0) {
      uVar9 = uVar9 & 0xffffffdf;
      local_28 = uVar9;
      util__LocStr___LocStr(local_b4);
    }
    if ((uVar9 & 0x10) != 0) {
      uVar9 = uVar9 & 0xffffffef;
      local_28 = uVar9;
      if (local_48.Data != (char *)0x0) {
        operator_delete__(local_48.Data);
        local_48.Data = (char *)0x0;
      }
    }
    if ((uVar9 & 8) != 0) {
      uVar9 = uVar9 & 0xfffffff7;
      local_28 = uVar9;
      if (local_6c.Data != (char *)0x0) {
        operator_delete__(local_6c.Data);
        local_6c.Data = (char *)0x0;
      }
    }
    if ((uVar9 & 4) != 0) {
      uVar9 = uVar9 & 0xfffffffb;
      local_28 = uVar9;
      util__LocStr___LocStr(local_cc);
    }
    if ((uVar9 & 2) != 0) {
      uVar9 = uVar9 & 0xfffffffd;
      local_28 = uVar9;
      if (local_54.Data != (char *)0x0) {
        operator_delete__(local_54.Data);
        local_54.Data = (char *)0x0;
      }
    }
    if ((uVar9 & 1) != 0) {
      local_28 = uVar9 & 0xfffffffe;
      if (local_84.Data != (char *)0x0) {
        operator_delete__(local_84.Data);
      }
    }
    local_14.Data = (char *)0x0;
    local_14.Capacity = 0;
    local_14.Length = 0;
    if (local_21 == '\0') {
      util__Str_char___Str_char__o5(&local_60,"Enemy");
      local_48.Data = (char *)0x0;
      local_48.Capacity = 0;
      local_48.Length = 0;
      pLVar5 = (LocStr *)util__LocStr__LocStr(local_cc,&local_60,&local_48);
      pSVar6 = util__LocStr__operator__o3(pLVar5);
      if (pSVar6->Capacity < 1) {
        pcVar10 = "";
      }
      else {
        pcVar10 = pSVar6->Data;
      }
      uVar9 = 0xe00;
    }
    else {
      util__Str_char___Str_char__o5(&local_78,"Allied");
      local_3c.Data = (char *)0x0;
      local_3c.Capacity = 0;
      local_3c.Length = 0;
      pLVar5 = (LocStr *)util__LocStr__LocStr(local_b4,&local_78,&local_3c);
      pSVar6 = util__LocStr__operator__o3(pLVar5);
      if (pSVar6->Capacity < 1) {
        pcVar10 = "";
        uVar9 = 0x1c0;
      }
      else {
        pcVar10 = pSVar6->Data;
        uVar9 = 0x1c0;
      }
    }
    uVar9 = uVar9 | local_28;
    util__Str_char___Str_char__o5(&local_6c,"CraftDisabled Tooltip");
    pSVar6 = GetName(this,&local_84);
    if (pSVar6->Capacity < 1) {
      local_2c = (ReferenceController *)
                 &cde_l2_0091985b_NullString;
    }
    else {
      local_2c = (ReferenceController *)pSVar6->Data;
    }
    local_54.Data = (char *)0x0;
    local_54.Capacity = 0;
    local_54.Length = 0;
    pLVar5 = (LocStr *)util__LocStr__LocStr((LocStr *)local_9c,&local_6c,&local_54);
    pSVar6 = util__LocStr__operator__o3(pLVar5);
    if (pSVar6->Capacity < 1) {
      pcVar7 = "";
    }
    else {
      pcVar7 = pSVar6->Data;
    }
    util__Printf(&local_14,pcVar7,pcVar10,local_2c);
    if (local_90 != (void *)0x0) {
      operator_delete__(local_90);
      local_90 = (void *)0x0;
    }
    if (local_9c[0] != (void *)0x0) {
      operator_delete__(local_9c[0]);
      local_9c[0] = (void *)0x0;
    }
    if (local_54.Data != (char *)0x0) {
      operator_delete__(local_54.Data);
      local_54.Data = (char *)0x0;
    }
    if (local_84.Data != (char *)0x0) {
      operator_delete__(local_84.Data);
      local_84.Data = (char *)0x0;
    }
    if (local_6c.Data != (char *)0x0) {
      operator_delete__(local_6c.Data);
      local_6c.Data = (char *)0x0;
    }
    if ((uVar9 & 0x800) != 0) {
      uVar9 = uVar9 & 0xfffff7ff;
      util__LocStr___LocStr(local_cc);
    }
    if ((uVar9 & 0x400) != 0) {
      uVar9 = uVar9 & 0xfffffbff;
      if (local_48.Data != (char *)0x0) {
        operator_delete__(local_48.Data);
        local_48.Data = (char *)0x0;
      }
    }
    if ((uVar9 & 0x200) != 0) {
      uVar9 = uVar9 & 0xfffffdff;
      if (local_60.Data != (char *)0x0) {
        operator_delete__(local_60.Data);
        local_60.Data = (char *)0x0;
      }
    }
    if ((uVar9 & 0x100) != 0) {
      uVar9 = uVar9 & 0xfffffeff;
      util__LocStr___LocStr(local_b4);
    }
    if ((char)uVar9 < '\0') {
      uVar9 = uVar9 & 0xffffff7f;
      if (local_3c.Data != (char *)0x0) {
        operator_delete__(local_3c.Data);
        local_3c.Data = (char *)0x0;
      }
    }
    if ((local_78.Data != (char *)0x0) && ((uVar9 & 0x40) != 0)) {
      operator_delete__(local_78.Data);
    }
    uVar13 = 0;
    uVar14 = 0;
    if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
      bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
      if (!bVar3) {
        this->_pad_0x0_0 = 0;
      }
    }
    pBVar2 = (Body *)this->_pad_0x0_0;
    Body__GetSpacecraftComponent_Memoize(pBVar2);
    if ((pBVar2->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    pSVar11 = (pBVar2->GetSpacecraftComponent_MemoizedValue).Data.Pointer;
    pRVar12 = (pBVar2->GetSpacecraftComponent_MemoizedValue).Data.Controller;
    if (pRVar12 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar12);
    }
    this_01 = Component__GetManager((Component *)this);
    piVar8 = (int *)TacticalManager__GetTacticalUI(this_01);
    if ((ReferenceController *)piVar8[1] != (ReferenceController *)0x0) {
      bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar8[1]);
      if (!bVar3) {
        *piVar8 = 0;
      }
    }
    CombatNotifier__Trigger((CombatNotifier *)(*(int *)(uintptr_t)piVar8 + 0x1d4),7,&local_20,&local_14,pSVar11,pRVar12,uVar13,
               uVar14);
    if (local_2c != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_2c);
    }
    if (local_14.Data != (char *)0x0) {
      operator_delete__(local_14.Data);
      ((slice_view *)&local_14)->_0_8_ = ((slice_view *)&local_14)->_0_8_ & 0xffffffff00000000;
    }
    if (local_20.Data != (char *)0x0) {
      operator_delete__(local_20.Data);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007db0c0 007db0c0_TriggerDisarmedPopup ====
// decompiled by BatchDecomp @ 007db0c0 name=TriggerDisarmedPopup conv=__thiscall body=1586

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftComponent__TriggerDisarmedPopup(void) */

void __thiscall SpacecraftComponent__TriggerDisarmedPopup(SpacecraftComponent *this)

{
  undefined4 stack0xfffffffc;
  Body *pBVar1;
  Faction *pFVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  Faction *pFVar9;
  LocStr *pLVar10;
  Str_L_char_G_ *pSVar11;
  undefined4 *puVar12;
  char *pcVar13;
  TacticalManager *pTVar14;
  int *piVar15;
  code *pcVar16;
  char *pcVar17;
  SpacecraftComponent *pSVar18;
  ReferenceController *this_00;
  undefined4 uVar19;
  undefined4 uVar20;
  void *local_c8[3];
  void *local_bc;
  void *local_b0[3];
  void *local_a4;
  Str_L_char_G_ local_98;
  Str_L_char_G_ local_8c;
  void *local_80[3];
  void *local_74;
  Str_L_char_G_ local_68;
  Str_L_char_G_ local_5c;
  Str_L_char_G_ local_50;
  Str_L_char_G_ local_44;
  ReferenceController *local_34;
  Str_L_char_G_ local_30;
  char local_22;
  char local_21;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_34 = (ReferenceController *)0x0;
  if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
     (bVar7 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
     !bVar7)) {
    this->_pad_0x0_0 = 0;
  }
  pBVar1 = (Body *)this->_pad_0x0_0;
  Body__IsAlive_Memoize(pBVar1);
  if ((pBVar1->IsAlive_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((pBVar1->IsAlive_MemoizedValue).Data != false) {
    if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
       (bVar7 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
       !bVar7)) {
      this->_pad_0x0_0 = 0;
    }
    pFVar2 = *(Faction **)(this->_pad_0x0_0 + 0x1e0);
    if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
       (bVar7 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
       !bVar7)) {
      this->_pad_0x0_0 = 0;
    }
    pFVar9 = TacticalManager__GetPlayerAlliance(*(TacticalManager **)(this->_pad_0x0_0 + 0x1dc));
    bVar7 = pFVar2 == pFVar9;
    local_21 = bVar7;
    if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
       (bVar8 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
       !bVar8)) {
      this->_pad_0x0_0 = 0;
    }
    pFVar2 = *(Faction **)(this->_pad_0x0_0 + 0x1e0);
    if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
       (bVar8 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
       !bVar8)) {
      this->_pad_0x0_0 = 0;
    }
    pFVar9 = TacticalManager__GetEnemyAlliance(*(TacticalManager **)(this->_pad_0x0_0 + 0x1dc));
    local_22 = pFVar2 == pFVar9;
    local_20.Length = 0;
    local_20.Data = (char *)0x0;
    local_20.Capacity = 0;
    if (bVar7) {
      util__Str_char___Str_char__o5(&local_68,"Allied");
      local_30.Data = (char *)0x0;
      local_30.Capacity = 0;
      local_30.Length = 0;
      pLVar10 = (LocStr *)util__LocStr__LocStr((LocStr *)local_80,&local_68,&local_30);
      pSVar11 = util__LocStr__operator__o3(pLVar10);
      if (pSVar11->Capacity < 1) {
        pcVar17 = "";
        bVar6 = true;
        bVar5 = true;
        bVar4 = true;
        bVar3 = false;
        bVar8 = false;
        bVar7 = false;
      }
      else {
        pcVar17 = pSVar11->Data;
        bVar6 = true;
        bVar5 = true;
        bVar4 = true;
        bVar3 = false;
        bVar8 = false;
        bVar7 = false;
      }
    }
    else {
      util__Str_char___Str_char__o5(&local_98,"Enemy");
      local_50.Data = (char *)0x0;
      local_50.Capacity = 0;
      local_50.Length = 0;
      pLVar10 = (LocStr *)util__LocStr__LocStr((LocStr *)local_c8,&local_98,&local_50);
      pSVar11 = util__LocStr__operator__o3(pLVar10);
      if (pSVar11->Capacity < 1) {
        pcVar17 = "";
      }
      else {
        pcVar17 = pSVar11->Data;
      }
      bVar6 = false;
      bVar5 = false;
      bVar4 = false;
      bVar3 = true;
      bVar8 = true;
      bVar7 = true;
    }
    util__Str_char___Str_char__o5(&local_8c,"CraftDisarmed Message");
    puVar12 = (undefined4 *)
              (**(code **)(**(int **)((this->GetArmorCollisionShells_MemoizedValue).Data.Size + 8) +
                          0x48))(&local_5c);
    if ((int)puVar12[1] < 1) {
      local_34 = (ReferenceController *)
                 &cde_l2_0091985b_NullString;
    }
    else {
      local_34 = (ReferenceController *)*puVar12;
    }
    local_44.Data = (char *)0x0;
    local_44.Capacity = 0;
    local_44.Length = 0;
    pLVar10 = (LocStr *)util__LocStr__LocStr((LocStr *)local_b0,&local_8c,&local_44);
    pSVar11 = util__LocStr__operator__o3(pLVar10);
    if (pSVar11->Capacity < 1) {
      pcVar13 = "";
    }
    else {
      pcVar13 = pSVar11->Data;
    }
    util__Printf(&local_20,pcVar13,pcVar17,local_34);
    if (local_a4 != (void *)0x0) {
      operator_delete__(local_a4);
      local_a4 = (void *)0x0;
    }
    if (local_b0[0] != (void *)0x0) {
      operator_delete__(local_b0[0]);
      local_b0[0] = (void *)0x0;
    }
    if (local_44.Data != (char *)0x0) {
      operator_delete__(local_44.Data);
      local_44.Data = (char *)0x0;
    }
    if (local_5c.Data != (char *)0x0) {
      operator_delete__(local_5c.Data);
      local_5c.Data = (char *)0x0;
    }
    if (local_8c.Data != (char *)0x0) {
      operator_delete__(local_8c.Data);
      local_8c.Data = (char *)0x0;
    }
    if (bVar7) {
      if (local_bc != (void *)0x0) {
        operator_delete__(local_bc);
        local_bc = (void *)0x0;
      }
      if (local_c8[0] != (void *)0x0) {
        operator_delete__(local_c8[0]);
        local_c8[0] = (void *)0x0;
      }
    }
    if ((bVar8) && (local_50.Data != (char *)0x0)) {
      operator_delete__(local_50.Data);
      local_50.Data = (char *)0x0;
    }
    if ((bVar3) && (local_98.Data != (char *)0x0)) {
      operator_delete__(local_98.Data);
      local_98.Data = (char *)0x0;
    }
    if (bVar4) {
      if (local_74 != (void *)0x0) {
        operator_delete__(local_74);
        local_74 = (void *)0x0;
      }
      if (local_80[0] != (void *)0x0) {
        operator_delete__(local_80[0]);
        local_80[0] = (void *)0x0;
      }
    }
    if ((bVar5) && (local_30.Data != (char *)0x0)) {
      operator_delete__(local_30.Data);
      local_30.Data = (char *)0x0;
    }
    if ((local_68.Data != (char *)0x0) && (bVar6)) {
      operator_delete__(local_68.Data);
    }
    local_14.Length = 0;
    local_14.Data = (char *)0x0;
    local_14.Capacity = 0;
    util__Str_char___Str_char__o5(&local_5c,"CraftDisarmed Tooltip");
    pSVar11 = GetName(this,&local_68);
    if (pSVar11->Capacity < 1) {
      pcVar17 = "";
    }
    else {
      pcVar17 = pSVar11->Data;
    }
    local_30.Data = (char *)0x0;
    local_30.Capacity = 0;
    local_30.Length = 0;
    pLVar10 = (LocStr *)util__LocStr__LocStr((LocStr *)local_80,&local_5c,&local_30);
    pSVar11 = util__LocStr__operator__o3(pLVar10);
    if (pSVar11->Capacity < 1) {
      pcVar13 = "";
    }
    else {
      pcVar13 = pSVar11->Data;
    }
    util__Printf(&local_14,pcVar13,pcVar17);
    if (local_74 != (void *)0x0) {
      operator_delete__(local_74);
      local_74 = (void *)0x0;
    }
    if (local_80[0] != (void *)0x0) {
      operator_delete__(local_80[0]);
      local_80[0] = (void *)0x0;
    }
    if (local_30.Data != (char *)0x0) {
      operator_delete__(local_30.Data);
      local_30.Data = (char *)0x0;
    }
    if (local_68.Data != (char *)0x0) {
      operator_delete__(local_68.Data);
      local_68.Data = (char *)0x0;
    }
    if (local_5c.Data != (char *)0x0) {
      operator_delete__(local_5c.Data);
    }
    uVar19 = 0;
    uVar20 = 0;
    if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
       (bVar7 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
       !bVar7)) {
      this->_pad_0x0_0 = 0;
    }
    pBVar1 = (Body *)this->_pad_0x0_0;
    Body__GetSpacecraftComponent_Memoize(pBVar1);
    pcVar16 = DebugBreak_exref;
    if ((pBVar1->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      pcVar16 = DebugBreak_exref;
      DebugBreak();
    }
    pSVar18 = (pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Pointer;
    this_00 = (pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Controller;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_00);
    }
    pTVar14 = Component__GetManager((Component *)this);
    piVar15 = (int *)TacticalManager__GetTacticalUI(pTVar14);
    if (((ReferenceController *)piVar15[1] != (ReferenceController *)0x0) &&
       (bVar7 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar15[1]),
       !bVar7)) {
      *piVar15 = 0;
    }
    CombatNotifier__Trigger((CombatNotifier *)(*(int *)(uintptr_t)piVar15 + 0x1d4),5,&local_20,&local_14,pSVar18,this_00,uVar19,
               uVar20);
    if (local_34 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_34);
    }
    if (local_21 != '\0') {
      pTVar14 = Component__GetManager((Component *)this);
      TacticalManager__GetStrategicGame_Memoize(pTVar14);
      if (*(char *)&(pTVar14->Effects).Controller == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        (*pcVar16)();
      }
      StrategicManager__TriggerAlliesLostModuleMessages((StrategicManager *)(pTVar14->Effects).Pointer);
    }
    if (local_22 != '\0') {
      pTVar14 = Component__GetManager((Component *)this);
      TacticalManager__GetStrategicGame_Memoize(pTVar14);
      if (*(char *)&(pTVar14->Effects).Controller == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        (*pcVar16)();
      }
      StrategicManager__TriggerEnemiesLostModuleMessages((StrategicManager *)(pTVar14->Effects).Pointer);
    }
    if (local_14.Data != (char *)0x0) {
      operator_delete__(local_14.Data);
      ((slice_view *)&local_14)->_0_8_ = ((slice_view *)&local_14)->_0_8_ & 0xffffffff00000000;
    }
    if (local_20.Data != (char *)0x0) {
      operator_delete__(local_20.Data);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007db700 007db700_TriggerOutOfFuelPopup ====
// decompiled by BatchDecomp @ 007db700 name=TriggerOutOfFuelPopup conv=__thiscall body=1184

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftComponent__TriggerOutOfFuelPopup(void) */

void __thiscall SpacecraftComponent__TriggerOutOfFuelPopup(SpacecraftComponent *this)

{
  undefined4 stack0xfffffffc;
  Faction *pFVar1;
  Body *pBVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  Faction *pFVar9;
  int iVar10;
  undefined4 *puVar11;
  LocStr *pLVar12;
  Str_L_char_G_ *pSVar13;
  char *pcVar14;
  TacticalManager *this_00;
  int *piVar15;
  CraftInstance *this_01;
  undefined1 *puVar16;
  char *pcVar17;
  SpacecraftComponent *pSVar18;
  ReferenceController *pRVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  LocStr local_98[24];
  LocStr local_80[24];
  Str_L_char_G_ local_68;
  void *local_5c[3];
  Str_L_char_G_ local_50;
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_2c.Length = 0;
  if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
    bVar8 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
    if (!bVar8) {
      this->_pad_0x0_0 = 0;
    }
  }
  pFVar1 = *(Faction **)(this->_pad_0x0_0 + 0x1e0);
  if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
    bVar8 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
    if (!bVar8) {
      this->_pad_0x0_0 = 0;
    }
  }
  pFVar9 = TacticalManager__GetPlayerAlliance(*(TacticalManager **)(this->_pad_0x0_0 + 0x1dc));
  if (pFVar1 == pFVar9) {
    if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
      bVar8 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
      if (!bVar8) {
        this->_pad_0x0_0 = 0;
      }
    }
    pBVar2 = (Body *)this->_pad_0x0_0;
    Body__IsAlive_Memoize(pBVar2);
    if ((pBVar2->IsAlive_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if ((pBVar2->IsAlive_MemoizedValue).Data != false) {
      pRVar19 = (ReferenceController *)(this->GetArmorCollisionShells_MemoizedValue).Data.Capacity;
      this_01 = (CraftInstance *)(this->GetArmorCollisionShells_MemoizedValue).Data.Size;
      if (pRVar19 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar19);
        if (pRVar19 != (ReferenceController *)0x0) {
          bVar8 = util__ReferenceController__IsDataStillValid(pRVar19);
          if (!bVar8) {
            this_01 = (CraftInstance *)0x0;
          }
        }
      }
      CraftInstance__GetMainEngineModules_Memoize(this_01);
      if ((this_01->GetMainEngineModules_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      iVar10 = (**(code **)((this_01->GetMainEngineModules_MemoizedValue).Data._pad_0x0_0 + 0xc))();
      if (pRVar19 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(pRVar19);
      }
      local_20.Length = 0;
      local_20.Data = (char *)0x0;
      local_20.Capacity = 0;
      util__Str_char___Str_char__o5(&local_38,"OutOfDeltaV Message");
      puVar11 = (undefined4 *)
                (**(code **)(**(int **)((this->GetArmorCollisionShells_MemoizedValue).Data.Size + 8)
                            + 0x48))(&local_44);
      if ((int)puVar11[1] < 1) {
        puVar16 = &cde_l2_0091985b_NullString;
      }
      else {
        puVar16 = (undefined1 *)*puVar11;
      }
      local_2c.Data = (char *)0x0;
      local_2c.Capacity = 0;
      local_2c.Length = 0;
      pLVar12 = (LocStr *)util__LocStr__LocStr((LocStr *)local_5c,&local_38,&local_2c);
      pSVar13 = util__LocStr__operator__o3(pLVar12);
      if (pSVar13->Capacity < 1) {
        pcVar17 = "";
      }
      else {
        pcVar17 = pSVar13->Data;
      }
      util__Printf(&local_20,pcVar17,puVar16);
      if (local_50.Data != (char *)0x0) {
        operator_delete__(local_50.Data);
        local_50.Data = (char *)0x0;
      }
      if (local_5c[0] != (void *)0x0) {
        operator_delete__(local_5c[0]);
        local_5c[0] = (void *)0x0;
      }
      if (local_2c.Data != (char *)0x0) {
        operator_delete__(local_2c.Data);
        local_2c.Data = (char *)0x0;
      }
      if (local_44.Data != (char *)0x0) {
        operator_delete__(local_44.Data);
        local_44.Data = (char *)0x0;
      }
      if (local_38.Data != (char *)0x0) {
        operator_delete__(local_38.Data);
      }
      local_14.Length = 0;
      local_14.Data = (char *)0x0;
      local_14.Capacity = 0;
      if (iVar10 < 1) {
        util__Str_char___Str_char__o5(&local_50,"OutOfDeltaVDamage Tooltip");
        local_38.Data = (char *)0x0;
        local_38.Capacity = 0;
        local_38.Length = 0;
        pLVar12 = (LocStr *)util__LocStr__LocStr(local_98,&local_50,&local_38);
        pSVar13 = util__LocStr__operator__o3(pLVar12);
        if (pSVar13->Capacity < 1) {
          pcVar17 = "";
          bVar7 = true;
          bVar6 = true;
          bVar5 = true;
          bVar4 = false;
          bVar3 = false;
          bVar8 = false;
        }
        else {
          pcVar17 = pSVar13->Data;
          bVar7 = true;
          bVar6 = true;
          bVar5 = true;
          bVar4 = false;
          bVar3 = false;
          bVar8 = false;
        }
      }
      else {
        util__Str_char___Str_char__o5(&local_44,"OutOfDeltaVEmpty Tooltip");
        local_2c.Data = (char *)0x0;
        local_2c.Capacity = 0;
        local_2c.Length = 0;
        pLVar12 = (LocStr *)util__LocStr__LocStr(local_80,&local_44,&local_2c);
        pSVar13 = util__LocStr__operator__o3(pLVar12);
        if (pSVar13->Capacity < 1) {
          pcVar17 = "";
        }
        else {
          pcVar17 = pSVar13->Data;
        }
        bVar7 = false;
        bVar6 = false;
        bVar5 = false;
        bVar4 = true;
        bVar3 = true;
        bVar8 = true;
      }
      pSVar13 = GetName(this,&local_68);
      if (pSVar13->Capacity < 1) {
        pcVar14 = "";
      }
      else {
        pcVar14 = pSVar13->Data;
      }
      util__Printf(&local_14,pcVar17,pcVar14);
      if (local_68.Data != (char *)0x0) {
        operator_delete__(local_68.Data);
        local_68.Data = (char *)0x0;
      }
      if (bVar8) {
        util__LocStr___LocStr(local_80);
      }
      if (bVar3) {
        if (local_2c.Data != (char *)0x0) {
          operator_delete__(local_2c.Data);
          local_2c.Data = (char *)0x0;
        }
      }
      if (bVar4) {
        if (local_44.Data != (char *)0x0) {
          operator_delete__(local_44.Data);
          local_44.Data = (char *)0x0;
        }
      }
      if (bVar5) {
        util__LocStr___LocStr(local_98);
      }
      if (bVar6) {
        if (local_38.Data != (char *)0x0) {
          operator_delete__(local_38.Data);
          local_38.Data = (char *)0x0;
        }
      }
      if ((local_50.Data != (char *)0x0) && (bVar7)) {
        operator_delete__(local_50.Data);
      }
      uVar20 = 0;
      uVar21 = 0;
      if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
        bVar8 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
        if (!bVar8) {
          this->_pad_0x0_0 = 0;
        }
      }
      pBVar2 = (Body *)this->_pad_0x0_0;
      Body__GetSpacecraftComponent_Memoize(pBVar2);
      if ((pBVar2->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      pSVar18 = (pBVar2->GetSpacecraftComponent_MemoizedValue).Data.Pointer;
      pRVar19 = (pBVar2->GetSpacecraftComponent_MemoizedValue).Data.Controller;
      if (pRVar19 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar19);
      }
      this_00 = Component__GetManager((Component *)this);
      piVar15 = (int *)TacticalManager__GetTacticalUI(this_00);
      if ((ReferenceController *)piVar15[1] != (ReferenceController *)0x0) {
        bVar8 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar15[1]);
        if (!bVar8) {
          *piVar15 = 0;
        }
      }
      CombatNotifier__Trigger((CombatNotifier *)(*(int *)(uintptr_t)piVar15 + 0x1d4),3,&local_20,&local_14,pSVar18,pRVar19,uVar20,
                 uVar21);
      if ((ReferenceController *)local_2c.Length != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference((ReferenceController *)local_2c.Length);
      }
      if (local_14.Data != (char *)0x0) {
        operator_delete__(local_14.Data);
        ((slice_view *)&local_14)->_0_8_ = ((slice_view *)&local_14)->_0_8_ & 0xffffffff00000000;
      }
      if (local_20.Data != (char *)0x0) {
        operator_delete__(local_20.Data);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007dbba0 007dbba0_TriggerOutOfPowerPopup ====
// decompiled by BatchDecomp @ 007dbba0 name=TriggerOutOfPowerPopup conv=__thiscall body=1586

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftComponent__TriggerOutOfPowerPopup(void) */

void __thiscall SpacecraftComponent__TriggerOutOfPowerPopup(SpacecraftComponent *this)

{
  undefined4 stack0xfffffffc;
  Body *pBVar1;
  Faction *pFVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  Faction *pFVar9;
  LocStr *pLVar10;
  Str_L_char_G_ *pSVar11;
  undefined4 *puVar12;
  char *pcVar13;
  TacticalManager *pTVar14;
  int *piVar15;
  code *pcVar16;
  char *pcVar17;
  SpacecraftComponent *pSVar18;
  ReferenceController *this_00;
  undefined4 uVar19;
  undefined4 uVar20;
  void *local_c8[3];
  void *local_bc;
  void *local_b0[3];
  void *local_a4;
  Str_L_char_G_ local_98;
  Str_L_char_G_ local_8c;
  void *local_80[3];
  void *local_74;
  Str_L_char_G_ local_68;
  Str_L_char_G_ local_5c;
  Str_L_char_G_ local_50;
  Str_L_char_G_ local_44;
  ReferenceController *local_34;
  Str_L_char_G_ local_30;
  char local_22;
  char local_21;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_34 = (ReferenceController *)0x0;
  if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
     (bVar7 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
     !bVar7)) {
    this->_pad_0x0_0 = 0;
  }
  pBVar1 = (Body *)this->_pad_0x0_0;
  Body__IsAlive_Memoize(pBVar1);
  if ((pBVar1->IsAlive_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((pBVar1->IsAlive_MemoizedValue).Data != false) {
    if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
       (bVar7 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
       !bVar7)) {
      this->_pad_0x0_0 = 0;
    }
    pFVar2 = *(Faction **)(this->_pad_0x0_0 + 0x1e0);
    if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
       (bVar7 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
       !bVar7)) {
      this->_pad_0x0_0 = 0;
    }
    pFVar9 = TacticalManager__GetPlayerAlliance(*(TacticalManager **)(this->_pad_0x0_0 + 0x1dc));
    bVar7 = pFVar2 == pFVar9;
    local_21 = bVar7;
    if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
       (bVar8 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
       !bVar8)) {
      this->_pad_0x0_0 = 0;
    }
    pFVar2 = *(Faction **)(this->_pad_0x0_0 + 0x1e0);
    if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
       (bVar8 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
       !bVar8)) {
      this->_pad_0x0_0 = 0;
    }
    pFVar9 = TacticalManager__GetEnemyAlliance(*(TacticalManager **)(this->_pad_0x0_0 + 0x1dc));
    local_22 = pFVar2 == pFVar9;
    local_20.Length = 0;
    local_20.Data = (char *)0x0;
    local_20.Capacity = 0;
    if (bVar7) {
      util__Str_char___Str_char__o5(&local_68,"Allied");
      local_30.Data = (char *)0x0;
      local_30.Capacity = 0;
      local_30.Length = 0;
      pLVar10 = (LocStr *)util__LocStr__LocStr((LocStr *)local_80,&local_68,&local_30);
      pSVar11 = util__LocStr__operator__o3(pLVar10);
      if (pSVar11->Capacity < 1) {
        pcVar17 = "";
        bVar6 = true;
        bVar5 = true;
        bVar4 = true;
        bVar3 = false;
        bVar8 = false;
        bVar7 = false;
      }
      else {
        pcVar17 = pSVar11->Data;
        bVar6 = true;
        bVar5 = true;
        bVar4 = true;
        bVar3 = false;
        bVar8 = false;
        bVar7 = false;
      }
    }
    else {
      util__Str_char___Str_char__o5(&local_98,"Enemy");
      local_50.Data = (char *)0x0;
      local_50.Capacity = 0;
      local_50.Length = 0;
      pLVar10 = (LocStr *)util__LocStr__LocStr((LocStr *)local_c8,&local_98,&local_50);
      pSVar11 = util__LocStr__operator__o3(pLVar10);
      if (pSVar11->Capacity < 1) {
        pcVar17 = "";
      }
      else {
        pcVar17 = pSVar11->Data;
      }
      bVar6 = false;
      bVar5 = false;
      bVar4 = false;
      bVar3 = true;
      bVar8 = true;
      bVar7 = true;
    }
    util__Str_char___Str_char__o5(&local_8c,"LostPower Message");
    puVar12 = (undefined4 *)
              (**(code **)(**(int **)((this->GetArmorCollisionShells_MemoizedValue).Data.Size + 8) +
                          0x48))(&local_5c);
    if ((int)puVar12[1] < 1) {
      local_34 = (ReferenceController *)
                 &cde_l2_0091985b_NullString;
    }
    else {
      local_34 = (ReferenceController *)*puVar12;
    }
    local_44.Data = (char *)0x0;
    local_44.Capacity = 0;
    local_44.Length = 0;
    pLVar10 = (LocStr *)util__LocStr__LocStr((LocStr *)local_b0,&local_8c,&local_44);
    pSVar11 = util__LocStr__operator__o3(pLVar10);
    if (pSVar11->Capacity < 1) {
      pcVar13 = "";
    }
    else {
      pcVar13 = pSVar11->Data;
    }
    util__Printf(&local_20,pcVar13,pcVar17,local_34);
    if (local_a4 != (void *)0x0) {
      operator_delete__(local_a4);
      local_a4 = (void *)0x0;
    }
    if (local_b0[0] != (void *)0x0) {
      operator_delete__(local_b0[0]);
      local_b0[0] = (void *)0x0;
    }
    if (local_44.Data != (char *)0x0) {
      operator_delete__(local_44.Data);
      local_44.Data = (char *)0x0;
    }
    if (local_5c.Data != (char *)0x0) {
      operator_delete__(local_5c.Data);
      local_5c.Data = (char *)0x0;
    }
    if (local_8c.Data != (char *)0x0) {
      operator_delete__(local_8c.Data);
      local_8c.Data = (char *)0x0;
    }
    if (bVar7) {
      if (local_bc != (void *)0x0) {
        operator_delete__(local_bc);
        local_bc = (void *)0x0;
      }
      if (local_c8[0] != (void *)0x0) {
        operator_delete__(local_c8[0]);
        local_c8[0] = (void *)0x0;
      }
    }
    if ((bVar8) && (local_50.Data != (char *)0x0)) {
      operator_delete__(local_50.Data);
      local_50.Data = (char *)0x0;
    }
    if ((bVar3) && (local_98.Data != (char *)0x0)) {
      operator_delete__(local_98.Data);
      local_98.Data = (char *)0x0;
    }
    if (bVar4) {
      if (local_74 != (void *)0x0) {
        operator_delete__(local_74);
        local_74 = (void *)0x0;
      }
      if (local_80[0] != (void *)0x0) {
        operator_delete__(local_80[0]);
        local_80[0] = (void *)0x0;
      }
    }
    if ((bVar5) && (local_30.Data != (char *)0x0)) {
      operator_delete__(local_30.Data);
      local_30.Data = (char *)0x0;
    }
    if ((local_68.Data != (char *)0x0) && (bVar6)) {
      operator_delete__(local_68.Data);
    }
    local_14.Length = 0;
    local_14.Data = (char *)0x0;
    local_14.Capacity = 0;
    util__Str_char___Str_char__o5(&local_5c,"LostPower Tooltip");
    pSVar11 = GetName(this,&local_68);
    if (pSVar11->Capacity < 1) {
      pcVar17 = "";
    }
    else {
      pcVar17 = pSVar11->Data;
    }
    local_30.Data = (char *)0x0;
    local_30.Capacity = 0;
    local_30.Length = 0;
    pLVar10 = (LocStr *)util__LocStr__LocStr((LocStr *)local_80,&local_5c,&local_30);
    pSVar11 = util__LocStr__operator__o3(pLVar10);
    if (pSVar11->Capacity < 1) {
      pcVar13 = "";
    }
    else {
      pcVar13 = pSVar11->Data;
    }
    util__Printf(&local_14,pcVar13,pcVar17);
    if (local_74 != (void *)0x0) {
      operator_delete__(local_74);
      local_74 = (void *)0x0;
    }
    if (local_80[0] != (void *)0x0) {
      operator_delete__(local_80[0]);
      local_80[0] = (void *)0x0;
    }
    if (local_30.Data != (char *)0x0) {
      operator_delete__(local_30.Data);
      local_30.Data = (char *)0x0;
    }
    if (local_68.Data != (char *)0x0) {
      operator_delete__(local_68.Data);
      local_68.Data = (char *)0x0;
    }
    if (local_5c.Data != (char *)0x0) {
      operator_delete__(local_5c.Data);
    }
    uVar19 = 0;
    uVar20 = 0;
    if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
       (bVar7 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
       !bVar7)) {
      this->_pad_0x0_0 = 0;
    }
    pBVar1 = (Body *)this->_pad_0x0_0;
    Body__GetSpacecraftComponent_Memoize(pBVar1);
    pcVar16 = DebugBreak_exref;
    if ((pBVar1->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      pcVar16 = DebugBreak_exref;
      DebugBreak();
    }
    pSVar18 = (pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Pointer;
    this_00 = (pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Controller;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_00);
    }
    pTVar14 = Component__GetManager((Component *)this);
    piVar15 = (int *)TacticalManager__GetTacticalUI(pTVar14);
    if (((ReferenceController *)piVar15[1] != (ReferenceController *)0x0) &&
       (bVar7 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar15[1]),
       !bVar7)) {
      *piVar15 = 0;
    }
    CombatNotifier__Trigger((CombatNotifier *)(*(int *)(uintptr_t)piVar15 + 0x1d4),4,&local_20,&local_14,pSVar18,this_00,uVar19,
               uVar20);
    if (local_34 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_34);
    }
    if (local_21 != '\0') {
      pTVar14 = Component__GetManager((Component *)this);
      TacticalManager__GetStrategicGame_Memoize(pTVar14);
      if (*(char *)&(pTVar14->Effects).Controller == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        (*pcVar16)();
      }
      StrategicManager__TriggerAlliesLostModuleMessages((StrategicManager *)(pTVar14->Effects).Pointer);
    }
    if (local_22 != '\0') {
      pTVar14 = Component__GetManager((Component *)this);
      TacticalManager__GetStrategicGame_Memoize(pTVar14);
      if (*(char *)&(pTVar14->Effects).Controller == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        (*pcVar16)();
      }
      StrategicManager__TriggerEnemiesLostModuleMessages((StrategicManager *)(pTVar14->Effects).Pointer);
    }
    if (local_14.Data != (char *)0x0) {
      operator_delete__(local_14.Data);
      ((slice_view *)&local_14)->_0_8_ = ((slice_view *)&local_14)->_0_8_ & 0xffffffff00000000;
    }
    if (local_20.Data != (char *)0x0) {
      operator_delete__(local_20.Data);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000862c90 00862c90_PrintTimeExtraTruncated ====
// decompiled by BatchDecomp @ 00862c90 name=PrintTimeExtraTruncated conv=__cdecl body=1191

/* WARNING: Removing unreachable block (ram,0x00863018) */
/* WARNING: Removing unreachable block (ram,0x00863028) */
/* class util::Str<char> __cdecl PrintTimeExtraTruncated(double,bool) */

Str_L_char_G_ * __cdecl
PrintTimeExtraTruncated(Str_L_char_G_ *__return_storage_ptr__,double param_1,bool param_2)

{
  int iVar1;
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
  Str_L_char_G_ *pSVar16;
  char *pcVar17;
  char *pcVar18;
  int iVar19;
  undefined4 unaff_EDI;
  int iVar20;
  undefined4 in_stack_00000008;
  bool bVar21;
  Str_L_char_G_ local_d4;
  Str_L_char_G_ local_c8;
  Str_L_char_G_ local_bc;
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
  undefined4 local_20;
  undefined1 local_1c[12];
  undefined1 local_10[12];
  
  local_20 = 0;
  SecondsToDaysHoursMinutesSeconds
            ((tuple4_L_int_Cint_Cint_Cdouble_G_ *)local_1c,(double)CONCAT44(unaff_EDI,((slice_view *)&param_1)->_0_4_));
  iVar1 = ((int)((slice_view *)&local_1c)->_0_4_ / 0x1e) / 0xc;
  iVar20 = ((int)((slice_view *)&local_1c)->_0_4_ / 0x1e) % 0xc;
  iVar19 = (int)((slice_view *)&local_1c)->_0_4_ % 0x1e;
  bVar21 = SUB81((ulonglong)param_1 >> 0x20,0);
  if (iVar1 < 1) {
    if (iVar20 < 1) {
      if (iVar19 < 1) {
        if ((int)((slice_view *)&local_1c)->_4_4_ < 1) {
          if ((int)((slice_view *)&local_1c)->_8_4_ < 1) {
            pSVar16 = PrintTimeName(&local_68,0,(int)(double)((slice_view *)&local_10)->_4_8_,bVar21);
            if (pSVar16->Capacity < 1) {
              pcVar17 = "";
            }
            else {
              pcVar17 = pSVar16->Data;
            }
            pSVar16 = util__Printf(&local_5c,"%i%s",(int)(double)((slice_view *)&local_10)->_4_8_,pcVar17);
            bVar14 = false;
            bVar13 = false;
            bVar12 = true;
            bVar21 = true;
          }
          else {
            pSVar16 = PrintTimeName(&local_80,1,((slice_view *)&local_1c)->_8_4_,bVar21);
            if (pSVar16->Capacity < 1) {
              pcVar17 = "";
            }
            else {
              pcVar17 = pSVar16->Data;
            }
            pSVar16 = util__Printf(&local_74,"%i%s",((slice_view *)&local_1c)->_8_4_,pcVar17);
            bVar14 = true;
            bVar13 = true;
            bVar12 = false;
            bVar21 = false;
          }
          bVar11 = true;
          bVar3 = false;
          pSVar16 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_50,pSVar16);
        }
        else {
          pSVar16 = PrintTimeName(&local_98,2,((slice_view *)&local_1c)->_4_4_,bVar21);
          if (pSVar16->Capacity < 1) {
            pcVar17 = "";
          }
          else {
            pcVar17 = pSVar16->Data;
          }
          pSVar16 = util__Printf(&local_8c,"%i%s",((slice_view *)&local_1c)->_4_4_,pcVar17);
          bVar14 = false;
          bVar13 = false;
          bVar12 = false;
          bVar21 = false;
          bVar11 = false;
          bVar3 = true;
        }
        pSVar16 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_44,pSVar16);
        bVar10 = true;
        bVar5 = false;
        bVar4 = false;
      }
      else {
        pSVar16 = PrintTimeName(&local_b0,3,iVar19,bVar21);
        if (pSVar16->Capacity < 1) {
          pcVar17 = "";
        }
        else {
          pcVar17 = pSVar16->Data;
        }
        pSVar16 = util__Printf(&local_a4,"%i%s",iVar19,pcVar17);
        bVar14 = false;
        bVar13 = false;
        bVar12 = false;
        bVar21 = false;
        bVar11 = false;
        bVar10 = false;
        bVar5 = true;
        bVar4 = true;
        bVar3 = false;
      }
      bVar9 = true;
      bVar7 = false;
      bVar6 = false;
      pSVar16 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_38,pSVar16);
    }
    else {
      pSVar16 = PrintTimeName(&local_c8,4,iVar20,bVar21);
      if (pSVar16->Capacity < 1) {
        pcVar17 = "";
      }
      else {
        pcVar17 = pSVar16->Data;
      }
      pSVar16 = util__Printf(&local_bc,"%i%s",iVar20,pcVar17);
      bVar14 = false;
      bVar13 = false;
      bVar12 = false;
      bVar21 = false;
      bVar11 = false;
      bVar10 = false;
      bVar9 = false;
      bVar7 = true;
      bVar6 = true;
      bVar5 = false;
      bVar4 = false;
      bVar3 = false;
    }
    bVar15 = true;
    bVar8 = false;
    bVar2 = false;
    pSVar16 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_2c,pSVar16);
  }
  else {
    pSVar16 = PrintTimeName((Str_L_char_G_ *)local_10,5,iVar1,bVar21);
    if (pSVar16->Capacity < 1) {
      pcVar17 = "";
    }
    else {
      pcVar17 = pSVar16->Data;
    }
    pSVar16 = util__Printf(&local_d4,"%i%s",iVar1,pcVar17);
    bVar15 = false;
    bVar14 = false;
    bVar13 = false;
    bVar12 = false;
    bVar21 = false;
    bVar11 = false;
    bVar10 = false;
    bVar9 = false;
    bVar8 = true;
    bVar7 = false;
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    bVar3 = false;
    bVar2 = true;
  }
  if (pSVar16->Capacity < 1) {
    pcVar17 = "";
  }
  else {
    pcVar17 = pSVar16->Data;
  }
  pcVar18 = "-";
  if (0.0 < (double)CONCAT44(((slice_view *)&param_1)->_0_4_,in_stack_00000008) ||
      (double)CONCAT44(((slice_view *)&param_1)->_0_4_,in_stack_00000008) == 0.0) {
    pcVar18 = "";
  }
  util__Printf(__return_storage_ptr__,"%s%s",pcVar18,pcVar17);
  if ((bVar15) && (local_2c.Data != (char *)0x0)) {
    operator_delete__(local_2c.Data);
    local_2c.Data = (char *)0x0;
  }
  if ((bVar9) && (local_38.Data != (char *)0x0)) {
    operator_delete__(local_38.Data);
    local_38.Data = (char *)0x0;
  }
  if ((bVar10) && (local_44.Data != (char *)0x0)) {
    operator_delete__(local_44.Data);
    local_44.Data = (char *)0x0;
  }
  if ((bVar11) && (local_50.Data != (char *)0x0)) {
    operator_delete__(local_50.Data);
    local_50.Data = (char *)0x0;
  }
  if ((bVar21) && (local_5c.Data != (char *)0x0)) {
    operator_delete__(local_5c.Data);
    local_5c.Data = (char *)0x0;
  }
  if ((bVar12) && (local_68.Data != (char *)0x0)) {
    operator_delete__(local_68.Data);
    local_68.Data = (char *)0x0;
  }
  if ((bVar13) && (local_74.Data != (char *)0x0)) {
    operator_delete__(local_74.Data);
    local_74.Data = (char *)0x0;
  }
  if ((bVar14) && (local_80.Data != (char *)0x0)) {
    operator_delete__(local_80.Data);
    local_80.Data = (char *)0x0;
  }
  if ((bVar3) && (local_98.Data != (char *)0x0)) {
    operator_delete__(local_98.Data);
    local_98.Data = (char *)0x0;
  }
  if ((bVar4) && (local_a4.Data != (char *)0x0)) {
    operator_delete__(local_a4.Data);
    local_a4.Data = (char *)0x0;
  }
  if ((bVar5) && (local_b0.Data != (char *)0x0)) {
    operator_delete__(local_b0.Data);
    local_b0.Data = (char *)0x0;
  }
  if ((bVar6) && (local_bc.Data != (char *)0x0)) {
    operator_delete__(local_bc.Data);
    local_bc.Data = (char *)0x0;
  }
  if ((bVar7) && (local_c8.Data != (char *)0x0)) {
    operator_delete__(local_c8.Data);
    local_c8.Data = (char *)0x0;
  }
  if ((bVar8) && (local_d4.Data != (char *)0x0)) {
    operator_delete__(local_d4.Data);
    local_d4.Data = (char *)0x0;
  }
  if (((char *)((slice_view *)&local_10)->_0_4_ != (char *)0x0) && (bVar2)) {
    operator_delete__((void *)((slice_view *)&local_10)->_0_4_);
  }
  return __return_storage_ptr__;
}

