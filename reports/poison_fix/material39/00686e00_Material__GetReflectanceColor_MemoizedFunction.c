// decompiled by BatchDecomp @ 00686e00 name=GetReflectanceColor_MemoizedFunction conv=__thiscall body=691

/* private: struct util::tuple2<struct util::Vec3<float>,struct util::Vec3<float> > __thiscall
   Material::GetReflectanceColor_MemoizedFunction(void)const  */

void __thiscall Material::GetReflectanceColor_MemoizedFunction(Material *this)

{
  RefractiveIndexSpectrum *pRVar1;
  undefined4 unaff_EDI;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  undefined8 *in_stack_00000004;
  float local_50;
  double local_3c;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  Vec3<float> local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (*(int *)((int)&this->ExternalAngularSensitivity__m_radians + 4) != 0) {
    fVar7 = 0.0;
    fVar3 = 0.0;
    fVar8 = 0.0;
    local_34 = 0.0;
    local_20 = 0.0;
    fVar2 = 0.0;
    local_18 = 0.0;
    fVar6 = 0.0;
    local_28 = 0.0;
    fVar9 = 0.0;
    local_2c = 0.0;
    local_30 = 0.0;
    local_50 = 0.0;
    local_24 = 0.0;
    local_1c = 0.0;
    local_3c = Physics::VisibleLightWavelengthRange_nm.Lower;
    if (Physics::VisibleLightWavelengthRange_nm.Lower <=
        Physics::VisibleLightWavelengthRange_nm.Upper) {
      do {
        Physics::GetVisibleColorFromWavelength
                  (&local_14,(double)CONCAT44(1,(int)((ulonglong)local_3c >> 0x20)),
                   SUB41(unaff_EDI,0));
        pRVar1 = *(RefractiveIndexSpectrum **)
                  ((int)&this->ExternalAngularSensitivity__m_radians + 4);
        if (pRVar1 == (RefractiveIndexSpectrum *)0x0) {
          dVar10 = 0.0;
          pRVar1 = (RefractiveIndexSpectrum *)0x0;
        }
        else {
          dVar10 = RefractiveIndexSpectrum::GetReflectanceCoefficient(pRVar1,local_3c);
          pRVar1 = *(RefractiveIndexSpectrum **)
                    ((int)&this->ExternalAngularSensitivity__m_radians + 4);
        }
        fVar3 = (float)dVar10;
        fVar2 = fVar3 * local_14.X + local_28;
        fVar6 = fVar3 * local_14.Y + local_2c;
        fVar9 = fVar3 * local_14.Z + local_30;
        if (pRVar1 == (RefractiveIndexSpectrum *)0x0) {
          dVar10 = 0.0;
        }
        else {
          dVar10 = RefractiveIndexSpectrum::GetReflectanceCoefficient(pRVar1,local_3c);
        }
        dVar5 = dVar10 + dVar10 + __real_3ff0000000000000;
        fVar4 = (float)((dVar10 * dVar10 * __real_4008000000000000 +
                        dVar10 * __real_4018000000000000) / (dVar5 * dVar5));
        fVar7 = local_14.X + local_34;
        fVar3 = fVar4 * local_14.X + local_50;
        local_18 = local_14.Z + local_18;
        fVar8 = fVar4 * local_14.Z + local_1c;
        local_20 = local_14.Y + local_20;
        local_24 = fVar4 * local_14.Y + local_24;
        local_3c = local_3c + __real_4024000000000000;
        local_34 = fVar7;
        local_30 = fVar9;
        local_2c = fVar6;
        local_28 = fVar2;
        local_1c = fVar8;
        local_50 = fVar3;
      } while (local_3c <= Physics::VisibleLightWavelengthRange_nm.Upper);
    }
    local_14.Z = fVar8 / local_18;
    *in_stack_00000004 = CONCAT44(local_24 / local_20,fVar3 / fVar7);
    *(float *)(in_stack_00000004 + 1) = local_14.Z;
    *(ulonglong *)((int)in_stack_00000004 + 0xc) = CONCAT44(fVar6 / local_20,fVar2 / fVar7);
    *(float *)((int)in_stack_00000004 + 0x14) = fVar9 / local_18;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_14.Z = 0.0;
  *in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 1) = 0;
  *(undefined8 *)((int)in_stack_00000004 + 0xc) = 0;
  *(undefined4 *)((int)in_stack_00000004 + 0x14) = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

