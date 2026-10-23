// game_031_pilot.c - M4 pilot: 2 cleaned stub impls (decomp2c v1)
// Manual fixes measured (single-function intervention log):
//   f1: extern FUN_00642700; vcall _padding_ -> int* offset (game_014:1156 pattern);
//       local_14 multi-type slot -> explicit union pun; extraout_ST0 -> natural return
//   f2: same vcall pattern; x87 accumulator (faddl) needs asm readback - pending
#include "port_prelude.h"

extern float10 FUN_00642700(); /* K&R; x87-return helper, no symbol in orig PDB */

/* compat-header zombie macro aliases a global that nobody uses;
   it collides with the struct member name of the same name */
#undef CavityCoolantComposition
#undef CavityWallComposition

/* local_14 slot reuse: double | Maybe* high half (Ghidra _4_4_ slice) */
typedef union {
  double d;
  struct { undefined4 lo; Maybe_L_double_G_ *hi; } h;
} local14_pun;


/* public: double __thiscall ArcLampPumpSubModule__GetCavityAbsorptionEfficiency_Percent(void)const
    */

double __thiscall
ArcLampPumpSubModule__GetCavityAbsorptionEfficiency_Percent(ArcLampPumpSubModule *this)

{
  Darray_L_double_G_ *pDVar1;
  int iVar2;
  double *pdVar3;
  Maybe_L_double_G_ *pMVar4;
  float10 fVar5;
  float10 extraout_ST0;
  double dVar6;
  Maybe_L_double_G_ local_48;
  double local_38;
  double local_30;
  double local_28;
  int local_20;
  double local_1c;
  local14_pun local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pDVar1 = &this->CachedPumpingBands_nm;
  fVar5 = (float10)FUN_00642700(pDVar1,this);
  local_1c = (double)fVar5;
  local_30 = local_1c;
  if (local_1c <= 0.0) {
    local_30 = 0.0;
  }
  if (/*3ff0000000000000*/1.0 <= local_30) {
    local_30 = /*3ff0000000000000*/1.0;
  }
  local_20 = (**(code **)(*(int *)pDVar1 + 0xc))();
  if (local_20 < 1) {
    dVar6 = 0.0;
  }
  else {
    local_28 = 0.0;
    local_14.d = 0.0;
    local_c = 0;
    iVar2 = (**(code **)(*(int *)pDVar1 + 0xc))();
    dVar6 = local_28;
    if (local_c < iVar2) {
      local_1c = local_14.d;
      do {
        pdVar3 = (double *)(**(code **)*(int *)pDVar1)(&local_c);
        local_28 = *pdVar3;
        local_38 = this->CavitySemimajorAxis_m * this->CavitySemimajorAxis_m -
                   this->CavitySemiminorAxis_m * this->CavitySemiminorAxis_m;
        pMVar4 = util__Sqrt(&local_48,&local_38);
        local_14.h.hi = pMVar4;
        if (pMVar4->IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        dVar6 = Material__GetOpticalAbsorption(this->CavityCoolantComposition,local_14.h.hi->Data,local_28);
        local_1c = dVar6 + local_1c;
        local_c = local_c + 1;
        local_14.d = local_1c;
        iVar2 = (**(code **)(*(int *)pDVar1 + 0xc))();
        dVar6 = local_14.d;
      } while (local_c < iVar2);
    }
    dVar6 = dVar6 / (double)local_20;
  }
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  if (/*3ff0000000000000*/1.0 <= dVar6) {
    dVar6 = /*3ff0000000000000*/1.0;
  }
  local_30 = (/*3ff0000000000000*/1.0 - dVar6) * (/*3ff0000000000000*/1.0 - local_30);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return local_30;
}




/* public: double __thiscall ArcLampPumpSubModule__GetCavityReflectanceEfficiency_Percent(void)const
    */

double __thiscall
ArcLampPumpSubModule__GetCavityReflectanceEfficiency_Percent(ArcLampPumpSubModule *this)

{
  int iVar1;
  double *pdVar2;
  float10 extraout_ST0;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar1 = (**(code **)(*(int *)&this->CachedPumpingBands_nm + 0xc))();
  if (0 < iVar1) {
    local_c = 0;
    iVar1 = (**(code **)(*(int *)&this->CachedPumpingBands_nm + 0xc))();
    if (local_c < iVar1) {
      do {
        pdVar2 = (double *)(**(code **)*(int *)&this->CachedPumpingBands_nm)(&local_c);
        Material__GetReflectanceCoefficient(this->CavityWallComposition,*pdVar2);
        local_c = local_c + 1;
        iVar1 = (**(code **)(*(int *)&this->CachedPumpingBands_nm + 0xc))();
      } while (local_c < iVar1);
    }
  }
  iVar1 = (**(code **)(*(int *)&this->CachedPumpingBands_nm + 0xc))();
  if (0 < iVar1) {
    local_c = 0;
    iVar1 = (**(code **)(*(int *)&this->CachedPumpingBands_nm + 0xc))();
    if (local_c < iVar1) {
      do {
        pdVar2 = (double *)(**(code **)*(int *)&this->CachedPumpingBands_nm)(&local_c);
        Material__GetReflectanceCoefficient(this->CachedLasingRodComposition,*pdVar2);
        local_c = local_c + 1;
        iVar1 = (**(code **)(*(int *)&this->CachedPumpingBands_nm + 0xc))();
      } while (local_c < iVar1);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


