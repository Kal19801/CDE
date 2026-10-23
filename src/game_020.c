// Auto-generated from Ghidra decompilation
#include "port_prelude.h"

//==== 0071e900 IsMajorPlanet ====

/* public: bool __thiscall CelestialBody__IsMajorPlanet(void)const  */

bool __thiscall CelestialBody__IsMajorPlanet(CelestialBody *this)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  code *pcVar6;
  double dVar7;
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
  if ((char)((this->RingSystem).Data.Radius_km != '\0')) {
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
  if (*(byte *)((int)&this[1].RingSystem.Data.DiffuseTexture.Type + 1) != 0) goto LAB_0071eaf3;
  iVar2 = *(int *)((int)&(this->Radii_km).Y_km + 4);
  local_c = (double)CONCAT44(iVar2 + 1,(undefined4)local_c);
  util__Darray_L_util__Reflectable_P_G___SetSize
            ((Darray_L_util__Reflectable_P_G_ *)((int)&(this->Radii_km).X_km + 4),
             (int *)((int)&local_c + 4));
  bVar3 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)((int)&(this->Radii_km).X_km + 4),iVar2);
  if (bVar3) {
    *(code **)((int)((this->Radii_km).Y_km + -4 + *(int *)((int)&(this->Radii_km).Y_km + 4) * 4))
         = (long long int (*)())(IsInHydrostaticEquilibrium_Clear);
  }
  if ((int)((this->Orbit).Data.Elements.SemiMajorAxis_km == 0)) {
LAB_0071eab8:
    uVar5 = 1;
  }
  else {
    *(uint32_t *)&local_24 = this->Albedo;
    if (((local_24 <= *(double *)&this->SpectralType) ||
        (local_24 < cde_ptr_as_double((void *)&(((this->Orbit).Data))) || local_24 == cde_ptr_as_double((void *)&(((this->Orbit).Data)))))
       || (piVar1 = &(this->Orbit).Data._pad_0x8_2, local_4c = local_24, uStack_44 = local_24,
          local_24 < *(double *)piVar1 || local_24 == *(double *)piVar1)) {
      (uint32_t)(local_24 = *(double *)&(this->Orbit).Data);
      local_4c = *(double *)&this->SpectralType;
      uStack_44 = *(double *)&(this->Orbit).Data._pad_0x8_2;
    }
    local_34 = (undefined4)local_4c;
    uStack_30 = (*(uint32_t*)((char*)&(local_4c)+4));
    uStack_2c = (undefined4)uStack_44;
    uStack_28 = (*(uint32_t*)((char*)&(uStack_44)+4));
    local_1c = util__Abs((double *)&uStack_2c);
    *(uint32_t *)&local_14 = util__Abs((double *)&local_34);
    local_c = util__Abs(&local_24);
    if (local_14 <= local_1c) {
      local_1c = util__Abs((double *)&local_34);
      cVar4 = '\0';
      if (local_c < local_1c) {
        cVar4 = '\x02';
      }
    }
    else {
      local_1c = util__Abs((double *)&uStack_2c);
      cVar4 = (local_c < local_1c) + '\x01';
    }
    if (cVar4 == '\0') {
LAB_0071ea94:
      local_c = (double)CONCAT44(uStack_30,local_34);
    }
    else if (cVar4 == '\x01') {
      local_c = (double)CONCAT44(uStack_28,uStack_2c);
    }
    else {
      local_c = local_24;
      if (cVar4 != '\x02') goto LAB_0071ea94;
    }
    local_1c = GetSphericalCutoffRadius_km(this);
    if (local_1c <= local_c) goto LAB_0071eab8;
    uVar5 = 0;
  }
  pcVar6 = DebugBreak_exref;
  local_c = (double)CONCAT17(1,CONCAT16(uVar5,(undefined6)local_c));
  *(undefined2 *)&(this[1].RingSystem.Data.DiffuseTexture.Type) = (*(uint16_t*)((char*)&(local_c)+6));
  if (*(byte *)((int)&this[1].RingSystem.Data.DiffuseTexture.Type + 1) == 0) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
LAB_0071eaf3:
  if ((((char)this[1].RingSystem.Data.DiffuseTexture.Type != Type__TwoDimensional) &&
      ((cVar4 = (char)(this->RingSystem).Data.Radius_km, cVar4 == '\0' ||
       (*(char *)((int)((this->Orbit).Data.Elements.LongitudeOfAscendingNode_degrees + 0xf8) ==
        '\0')))) && (local_1c = this->SurfaceTemperature_K, 5e+20 < local_1c)) ) {
    local_1c = local_1c * local_1c;
    if (cVar4 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      (*pcVar6)();
    }
    dVar7 = *(double *)&this->Rotation * 1000.0;
    libm_sse2_pow_precise(0.0,0.0);
    if (1.0 < (local_1c / dVar7) * 2.481e-28) {
      return true;
    }
  }
  return false;
}

//==== 0071eba0 IsMediumObject ====

/* public: bool __thiscall CelestialBody__IsMediumObject(void)const  */

bool __thiscall CelestialBody__IsMediumObject(CelestialBody *this)

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
  if (this->SurfaceTemperature_K < 1e+17) {
    return false;
  }
  return true;
}

//==== 0071ec00 IsPropertyReadOnly_0071ec00 ====


/* public: virtual bool __thiscall CelestialOrbit__IsPropertyReadOnly(struct util__ClassMember const
   &)const  */

bool __thiscall CelestialOrbit__IsPropertyReadOnly(CelestialOrbit *this,ClassMember *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  if ((param_1->Name).Capacity < 1) {
    pcVar2 = "";
  }
  else {
    pcVar2 = (param_1->Name).Data;
  }
  for (pcVar1 = "ParentBody"; (pcVar1[(int)(pcVar2 + -0x936f08)] != '\0' || (*pcVar1 != '\0'));
      pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)(pcVar2 + -0x936f08)] != *pcVar1) {
      return false;
    }
  }
  return true;
}





//==== 0071f7c0 RenderModel ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: int propagation algorithm not settling */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall CelestialBody__RenderModel(class PostProcessor *,bool)const  */

void __thiscall CelestialBody__RenderModel(CelestialBody *this,PostProcessor *param_1,bool param_2)

{
  undefined8 stack0xfffffffc;
  ReferenceController *pRVar1;
  int *piVar2;
  int *piVar3;
  Quaternion_L_double_G_ QVar4;
  Vec4_L_double_G_ VVar5;
  tuple2_L_unsigned_int_CTextureType__Type_G_ tVar6;
  bool bVar7;
  char cVar8;
  PlanetShader *pPVar9;
  OptionsSection__Graphics *pGVar10;
  Range_L_double_G_ *pRVar11;
  Matrix4x4_L_double_G_ *pMVar12;
  CustomTexture *pCVar13;
  int TVar14;
  Stack_L_util__tuple2_L_unsigned_int_CTextureType__Type_G___G_ *pSVar15;
  uint uVar16;
  Maybe_L_double_G_ *pMVar17;
  VertexBufferObject *this_00;
  tuple2_L_unsigned_int_CTextureType__Type_G_ *ptVar18;
  undefined4 uVar19;
  undefined4 uVar21;
  tuple2_L_unsigned_int_CTextureType__Type_G_ tVar20;
  double dVar22;
  int iVar23;
  int iVar24;
  Matrix4x4_L_double_G_ local_198;
  uint local_118;
  int TStack_114;
  uint uStack_110;
  int TStack_10c;
  tuple2_L_unsigned_int_CTextureType__Type_G_ local_108;
  tuple2_L_unsigned_int_CTextureType__Type_G_ local_100;
  tuple2_L_unsigned_int_CTextureType__Type_G_ tStack_f8;
  tuple2_L_unsigned_int_CTextureType__Type_G_ local_f0;
  tuple2_L_unsigned_int_CTextureType__Type_G_ local_e8;
  undefined1 auStack_e0 [8];
  tuple2_L_unsigned_int_CTextureType__Type_G_ local_d8;
  tuple2_L_unsigned_int_CTextureType__Type_G_ local_d0;
  tuple2_L_unsigned_int_CTextureType__Type_G_ local_c8;
  tuple2_L_unsigned_int_CTextureType__Type_G_ tStack_c0;
  tuple2_L_unsigned_int_CTextureType__Type_G_ local_b8;
  undefined1 local_ad;
  tuple2_L_unsigned_int_CTextureType__Type_G_ local_ac;
  TextureStack local_a4;
  TextureStack local_94;
  TextureStack local_84;
  TextureStack local_74;
  TextureStack local_64;
  Darray_L_int_G_ local_54;
  Darray_L_int_G_ local_44;
  double local_34;
  double local_2c;
  undefined8 local_24;
  tuple2_L_unsigned_int_CTextureType__Type_G_ tStack_1c;
  ShaderStack local_12;
  TransformStack local_11;
  tuple2_L_unsigned_int_CTextureType__Type_G_ local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_d0.Value2 = (int)param_1;
  pPVar9 = PlanetShader__GetStatic();
  Graphics__ShaderStack__ShaderStack(&local_12,(Shader *)pPVar9);
  pPVar9 = PlanetShader__GetStatic();
  pRVar11 = (Range_L_double_G_ *)auStack_e0;
  iVar24 = 0;
  iVar23 = pPVar9->_pad_0x0_0;
  pGVar10 = Graphics__Get();
  pRVar11 = Graphics__GetShadowNearFarPlanes(pGVar10,pRVar11,iVar24);
  (**(code **)(uintptr_t)(iVar23 + 0xb0))(pRVar11);
  pPVar9 = PlanetShader__GetStatic();
  pRVar11 = (Range_L_double_G_ *)auStack_e0;
  iVar24 = 0;
  iVar23 = pPVar9->_pad_0x0_0;
  pGVar10 = Graphics__Get();
  pRVar11 = Graphics__GetShadowNearFarPlanes(pGVar10,pRVar11,iVar24);
  (**(code **)(uintptr_t)(iVar23 + 0xb8))(&pRVar11->Upper);
  pPVar9 = PlanetShader__GetStatic();
  pMVar12 = &local_198;
  iVar24 = 0;
  iVar23 = pPVar9->_pad_0x0_0;
  pGVar10 = Graphics__Get();
  pMVar12 = (Matrix4x4_L_double_G_ *)(uintptr_t)(Graphics__GetShadowMatrix(pGVar10,pMVar12,iVar24));
  (**(code **)(uintptr_t)(iVar23 + 0x58))(pMVar12);
  iVar23 = 0;
  pGVar10 = Graphics__Get();
  tStack_1c = ({ __typeof__((Graphics__GetShadowBias(pGVar10,iVar23))) _tp = (Graphics__GetShadowBias(pGVar10,iVar23)); *( tuple2_L_unsigned_int_CTextureType__Type_G_ *)&_tp; });
  pPVar9 = PlanetShader__GetStatic();
  (**(code **)(pPVar9->_pad_0x0_0 + 0x60))(&tStack_1c);
  pCVar13 = GetBlackbodyTexture();
  local_ac.Value2 = Type__TwoDimensional;
  util__Darray_int___SingleItem(&local_54,(int *)&local_ac.Value2);
  Graphics__TextureStack__PeekState((int)&tStack_1c);
  if (pCVar13 == (CustomTexture *)0x0) {
    local_10.Value1 = 0xffffffff;
    local_10.Value2 = Type__TwoDimensional;
  }
  else {
    TVar14 = (**(code **)(pCVar13->_pad_0x0_0 + 0x18))();
    local_10.Value1 = (**(code **)(pCVar13->_pad_0x0_0 + 0x14))();
    local_10.Value2 = TVar14;
  }
  local_ac.Value2 = (int)&local_10;
  pSVar15 = (Stack_L_util__tuple2_L_unsigned_int_CTextureType__Type_G___G_ *)(Graphics__TextureStack__GetStack(0));
  iVar24 = pSVar15->Size;
  iVar23 = iVar24 + 1;
  pSVar15->Size = iVar23;
  pSVar15->EndData = pSVar15->Data + iVar23;
  bVar7 = util__Stack_L_util__tuple2_L_unsigned_int_CTextureType__Type_G___G___CheckSize(pSVar15,iVar24);
  if (bVar7) {
    ptVar18 = pSVar15->Data;
    iVar23 = pSVar15->Size;
    ptVar18[iVar23 + -1].Value1 = *(uint *)local_ac.Value2;
    ptVar18[iVar23 + -1].Value2 = *(int *)(local_ac.Value2 + 4);
  }
  Graphics__TextureStack__AlterState((TextureStack *)&local_54,*(int *)&(tStack_1c),0);
  local_ac.Value2 = (int)&(this->Model)._pad_0x38_14;
  Graphics__TextureStack__TextureStack_struct_CustomTexture
            (&local_a4,(CustomTexture **)&local_ac.Value2,1);
  local_ac.Value2 = (int)&(this->Model)._pad_0x70_28;
  Graphics__TextureStack__TextureStack_struct_CustomTexture
            (&local_94,(CustomTexture **)&local_ac.Value2,2);
  local_ac.Value2 = (int)&(this->HiResModel)._pad_0x8_2;
  Graphics__TextureStack__TextureStack_struct_CustomTexture
            (&local_84,(CustomTexture **)&local_ac.Value2,3);
  local_ac.Value2 = 4;
  util__Darray_int___SingleItem(&local_44,(int *)&local_ac.Value2);
  Graphics__TextureStack__PeekState((int)&local_10);
  if ((((this->HiResModel)._pad_0x78_30 == 0) ||
      (pRVar1 = (ReferenceController *)(this->HiResModel)._pad_0x7c_31,
      pRVar1 == (ReferenceController *)0x0)) ||
     (bVar7 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar7)) {
    tStack_1c.Value1 = 0xffffffff;
    tStack_1c.Value2 = Type__TwoDimensional;
  }
  else {
    pRVar1 = (ReferenceController *)(this->HiResModel)._pad_0x7c_31;
    if ((pRVar1 != (ReferenceController *)0x0) &&
       (bVar7 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar7)) {
      (this->HiResModel)._pad_0x78_30 = 0;
    }
    pRVar1 = (ReferenceController *)(this->HiResModel)._pad_0x7c_31;
    piVar2 = (int *)(this->HiResModel)._pad_0x78_30;
    if ((pRVar1 != (ReferenceController *)0x0) &&
       (bVar7 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar7)) {
      (this->HiResModel)._pad_0x78_30 = 0;
    }
    piVar3 = (int *)(this->HiResModel)._pad_0x78_30;
    TVar14 = (**(code **)(uintptr_t)(*piVar2 + 0x18))();
    tStack_1c.Value1 = (**(code **)(uintptr_t)(*piVar3 + 0x14))();
    tStack_1c.Value2 = TVar14;
  }
  local_ac.Value2 = (int)&tStack_1c;
  pSVar15 = (Stack_L_util__tuple2_L_unsigned_int_CTextureType__Type_G___G_ *)(Graphics__TextureStack__GetStack(4));
  iVar24 = pSVar15->Size;
  iVar23 = iVar24 + 1;
  pSVar15->Size = iVar23;
  pSVar15->EndData = pSVar15->Data + iVar23;
  bVar7 = util__Stack_L_util__tuple2_L_unsigned_int_CTextureType__Type_G___G___CheckSize(pSVar15,iVar24);
  if (bVar7) {
    ptVar18 = pSVar15->Data;
    iVar23 = pSVar15->Size;
    ptVar18[iVar23 + -1].Value1 = *(uint *)local_ac.Value2;
    ptVar18[iVar23 + -1].Value2 = *(int *)(local_ac.Value2 + 4);
  }
  Graphics__TextureStack__AlterState((TextureStack *)&local_44,*(int *)&(local_10),4);
  piVar2 = &(this->HiResModel)._pad_0x40_16;
  local_ac.Value2 = (int)piVar2;
  Graphics__TextureStack__TextureStack_struct_CustomTexture
            (&local_74,(CustomTexture **)&local_ac.Value2,5);
  iVar23 = 6;
  TVar14 = Type__TwoDimensional;
  uVar16 = PostProcessor__GetShadowTexture((PostProcessor *)local_d0.Value2,0);
  Graphics__TextureStack__TextureStack(&local_64,uVar16,TVar14,iVar23);
  local_ad = CustomTexture__IsInitialized((CustomTexture *)&(this->Model)._pad_0x38_14);
  pPVar9 = PlanetShader__GetStatic();
  (**(code **)(pPVar9->_pad_0x0_0 + 0x80))(&local_ad);
  local_ad = CustomTexture__IsInitialized((CustomTexture *)&(this->Model)._pad_0x70_28);
  pPVar9 = PlanetShader__GetStatic();
  (**(code **)(pPVar9->_pad_0x0_0 + 0x84))(&local_ad);
  local_ad = CustomTexture__IsInitialized((CustomTexture *)&(this->HiResModel)._pad_0x8_2);
  pPVar9 = PlanetShader__GetStatic();
  (**(code **)(pPVar9->_pad_0x0_0 + 0x88))(&local_ad);
  local_ad = CustomTexture__IsInitialized((CustomTexture *)piVar2);
  pPVar9 = PlanetShader__GetStatic();
  (**(code **)(pPVar9->_pad_0x0_0 + 0x8c))(&local_ad);
  pPVar9 = PlanetShader__GetStatic();
  (**(code **)(pPVar9->_pad_0x0_0 + 0xcc))(&(this->Orbit).Data.Elements._pad_0x8_2);
  tStack_1c = ({ __typeof__((GetLuminantIrradiance_W__m2(this))) _tp = (GetLuminantIrradiance_W__m2(this)); *( tuple2_L_unsigned_int_CTextureType__Type_G_ *)&_tp; });
  pPVar9 = PlanetShader__GetStatic();
  (**(code **)(pPVar9->_pad_0x0_0 + 0xd4))(&tStack_1c);
  local_108 = *(tuple2_L_unsigned_int_CTextureType__Type_G_ *)&this->Albedo;
  if ((((*(double *)&(local_108)) <= *(double *)&(this->SpectralType))
      || ((*(double *)&(local_108)) < *(double *)&(this->Orbit).Data ||
          (*(double *)&(local_108)) == *(double *)&(this->Orbit).Data)) ||
     (piVar2 = &(this->Orbit).Data._pad_0x8_2, local_c8 = local_108, tStack_c0 = local_108,
     (*(double *)&(local_108)) < *(double *)piVar2 || (*(double *)&(local_108)) == *(double *)piVar2)) {
    tStack_c0.Value1 = (this->Orbit).Data._pad_0x8_2;
    tStack_c0.Value2 = (this->Orbit).Data._pad_0xc_3;
    local_108.Value1 = (this->Orbit).Data._pad_0x0_0;
    local_108.Value2 = (this->Orbit).Data._pad_0x4_1;
    local_c8 = *(tuple2_L_unsigned_int_CTextureType__Type_G_ *)&this->SpectralType;
  }
  local_118 = local_c8.Value1;
  TStack_114 = local_c8.Value2;
  uStack_110 = tStack_c0.Value1;
  TStack_10c = tStack_c0.Value2;
  local_b8 = local_108;
  local_10 = ({ __typeof__((util__Abs((double *)&uStack_110))) _tp = (util__Abs((double *)&uStack_110)); *( tuple2_L_unsigned_int_CTextureType__Type_G_ *)&_tp; });
  local_d0 = ({ __typeof__((util__Abs((double *)&local_118))) _tp = (util__Abs((double *)&local_118)); *( tuple2_L_unsigned_int_CTextureType__Type_G_ *)&_tp; });
  tStack_1c = ({ __typeof__((util__Abs((double *)&local_108))) _tp = (util__Abs((double *)&local_108)); *( tuple2_L_unsigned_int_CTextureType__Type_G_ *)&_tp; });
  if ((*(double *)&(local_10)) <= (*(double *)&(local_d0))) {
    local_10 = ({ __typeof__((util__Abs((double *)&local_118))) _tp = (util__Abs((double *)&local_118)); *( tuple2_L_unsigned_int_CTextureType__Type_G_ *)&_tp; });
    cVar8 = '\0';
    if ((*(double *)&(local_10)) < (*(double *)&(tStack_1c))) {
      cVar8 = '\x02';
    }
  }
  else {
    local_10 = ({ __typeof__((util__Abs((double *)&uStack_110))) _tp = (util__Abs((double *)&uStack_110)); *( tuple2_L_unsigned_int_CTextureType__Type_G_ *)&_tp; });
    cVar8 = ((*(double *)&(local_10)) < (*(double *)&(tStack_1c))) + '\x01';
  }
  if (cVar8 == '\0') {
LAB_0071fcba:
    local_d0.Value2 = TStack_114;
    local_d0.Value1 = local_118;
  }
  else if (cVar8 == '\x01') {
    local_d0.Value2 = TStack_10c;
    local_d0.Value1 = uStack_110;
  }
  else {
    local_d0 = local_108;
    if (cVar8 != '\x02') goto LAB_0071fcba;
  }
  local_f0 = *(tuple2_L_unsigned_int_CTextureType__Type_G_ *)&this->Albedo;
  if ((((*(double *)&(local_f0)) <= *(double *)&(this->SpectralType))
      || ((*(double *)&(local_f0)) < *(double *)&(this->Orbit).Data ||
          (*(double *)&(local_f0)) == *(double *)&(this->Orbit).Data)) ||
     (piVar2 = &(this->Orbit).Data._pad_0x8_2, local_c8 = local_f0, tStack_c0 = local_f0,
     (*(double *)&(local_f0)) < *(double *)piVar2 || (*(double *)&(local_f0)) == *(double *)piVar2)) {
    tStack_c0.Value1 = (this->Orbit).Data._pad_0x8_2;
    tStack_c0.Value2 = (this->Orbit).Data._pad_0xc_3;
    local_f0.Value1 = (this->Orbit).Data._pad_0x0_0;
    local_f0.Value2 = (this->Orbit).Data._pad_0x4_1;
    local_c8 = *(tuple2_L_unsigned_int_CTextureType__Type_G_ *)&this->SpectralType;
  }
  local_100 = local_c8;
  tStack_f8 = tStack_c0;
  local_b8 = local_f0;
  local_ac = ({ __typeof__((util__Abs((double *)&tStack_f8))) _tp = (util__Abs((double *)&tStack_f8)); *( tuple2_L_unsigned_int_CTextureType__Type_G_ *)&_tp; });
  local_10 = ({ __typeof__((util__Abs((double *)&local_100))) _tp = (util__Abs((double *)&local_100)); *( tuple2_L_unsigned_int_CTextureType__Type_G_ *)&_tp; });
  tStack_1c = ({ __typeof__((util__Abs((double *)&local_f0))) _tp = (util__Abs((double *)&local_f0)); *( tuple2_L_unsigned_int_CTextureType__Type_G_ *)&_tp; });
  if ((*(double *)&(local_10)) <= (*(double *)&(local_ac))) {
    local_10 = ({ __typeof__((util__Abs((double *)&local_100))) _tp = (util__Abs((double *)&local_100)); *( tuple2_L_unsigned_int_CTextureType__Type_G_ *)&_tp; });
    cVar8 = '\0';
    if ((*(double *)&(tStack_1c)) < (*(double *)&(local_10))) {
      cVar8 = '\x02';
    }
  }
  else {
    local_10 = ({ __typeof__((util__Abs((double *)&tStack_f8))) _tp = (util__Abs((double *)&tStack_f8)); *( tuple2_L_unsigned_int_CTextureType__Type_G_ *)&_tp; });
    cVar8 = ((*(double *)&(tStack_1c)) < (*(double *)&(local_10))) + '\x01';
  }
  if (cVar8 == '\0') {
    local_ac = local_100;
  }
  else if (cVar8 == '\x01') {
    local_ac = tStack_f8;
  }
  else if (cVar8 == '\x02') {
    local_ac = local_f0;
  }
  else {
    local_ac = local_100;
  }
  local_d8 = *(tuple2_L_unsigned_int_CTextureType__Type_G_ *)&this->Albedo;
  if ((((*(double *)&(local_d8)) <= *(double *)&(this->SpectralType))
      || ((*(double *)&(local_d8)) < *(double *)&(this->Orbit).Data ||
          (*(double *)&(local_d8)) == *(double *)&(this->Orbit).Data)) ||
     (piVar2 = &(this->Orbit).Data._pad_0x8_2, local_e8 = local_d8,
     (*(uint64_t *)&(auStack_e0)) = (*(uint64_t *)&(local_d8)),
     (*(double *)&(local_d8)) < *(double *)piVar2 || (*(double *)&(local_d8)) == *(double *)piVar2)) {
    (*(uint32_t*)&(auStack_e0)) = (this->Orbit).Data._pad_0x8_2;
    (*(uint32_t*)((char*)&(auStack_e0)+4)) = (this->Orbit).Data._pad_0xc_3;
    local_d8.Value1 = (this->Orbit).Data._pad_0x0_0;
    local_d8.Value2 = (this->Orbit).Data._pad_0x4_1;
    local_e8 = *(tuple2_L_unsigned_int_CTextureType__Type_G_ *)&this->SpectralType;
  }
  local_c8 = local_e8;
  tStack_c0.Value1 = (*(uint32_t*)&(auStack_e0));
  tStack_c0.Value2 = (*(uint32_t*)((char*)&(auStack_e0)+4));
  local_b8 = local_d8;
  local_10 = ({ __typeof__((util__Abs((double *)&tStack_c0))) _tp = (util__Abs((double *)&tStack_c0)); *( tuple2_L_unsigned_int_CTextureType__Type_G_ *)&_tp; });
  local_d8 = ({ __typeof__((util__Abs((double *)&local_c8))) _tp = (util__Abs((double *)&local_c8)); *( tuple2_L_unsigned_int_CTextureType__Type_G_ *)&_tp; });
  tStack_1c = ({ __typeof__((util__Abs((double *)&local_b8))) _tp = (util__Abs((double *)&local_b8)); *( tuple2_L_unsigned_int_CTextureType__Type_G_ *)&_tp; });
  if ((*(double *)&(local_10)) <= (*(double *)&(local_d8))) {
    local_d8 = ({ __typeof__((util__Abs((double *)&local_c8))) _tp = (util__Abs((double *)&local_c8)); *( tuple2_L_unsigned_int_CTextureType__Type_G_ *)&_tp; });
    cVar8 = '\0';
    if ((*(double *)&(local_d8)) < (*(double *)&(tStack_1c))) {
      cVar8 = '\x02';
    }
  }
  else {
    local_d8 = ({ __typeof__((util__Abs((double *)&tStack_c0))) _tp = (util__Abs((double *)&tStack_c0)); *( tuple2_L_unsigned_int_CTextureType__Type_G_ *)&_tp; });
    cVar8 = ((*(double *)&(local_d8)) < (*(double *)&(tStack_1c))) + '\x01';
  }
  if (cVar8 == '\0') {
LAB_0071ff30:
    uVar16 = local_c8.Value1;
    TVar14 = local_c8.Value2;
  }
  else if (cVar8 == '\x01') {
    uVar16 = tStack_c0.Value1;
    TVar14 = tStack_c0.Value2;
  }
  else {
    if (cVar8 != '\x02') goto LAB_0071ff30;
    uVar16 = local_b8.Value1;
    TVar14 = local_b8.Value2;
  }
  local_2c = ((*(double *)&(local_d0)) - (*(double *)&(local_ac))) / (double)CONCAT44(TVar14,uVar16);
  pMVar17 = util__Sqrt((Maybe_L_double_G_ *)auStack_e0,&local_2c);
  if (pMVar17->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_34 = (1.0 - pMVar17->Data) * 5.0 + pMVar17->Data;
  pPVar9 = PlanetShader__GetStatic();
  (**(code **)(pPVar9->_pad_0x0_0 + 0xa0))(&local_34);
  dVar22 = (this->Orbit).Data.Elements.Epoch_JulianYears;
  uVar16 = SUB84(dVar22,0);
  TVar14 = (int)((ulonglong)dVar22 >> 0x20);
  if (((dVar22 <= 0.0) || (1.0 <= dVar22)) &&
     ((double)((this->Orbit).Data.Elements._pad_0x8_2 <= 798.0)) ) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\astronomy.cpp",0x16a,
                    "(Albedo > 0. && Albedo < 1.) || IsLuminousBody()",(char *)0x0);
    DebugBreak();
    dVar22 = (this->Orbit).Data.Elements.Epoch_JulianYears;
    uVar16 = SUB84(dVar22,0);
    TVar14 = (int)((ulonglong)dVar22 >> 0x20);
  }
  local_d8.Value2 = TVar14;
  local_d8.Value1 = uVar16;
  pPVar9 = PlanetShader__GetStatic();
  (**(code **)(pPVar9->_pad_0x0_0 + 0x90))(&local_d8);
  if (*(char *)&this[1].Atmosphere.Data.SurfacePressure_Pa == '\0') {
    iVar23 = *(int *)((int)&(this->Radii_km).Y_km + 4);
    local_d0.Value2 = iVar23 + Type__OneDimensional;
    util__Darray_L_util__Reflectable_P_G___SetSize
              ((Darray_L_util__Reflectable_P_G_ *)((int)&(this->Radii_km).X_km + 4),
               (int *)&local_d0.Value2);
    bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)((int)&(this->Radii_km).X_km + 4),iVar23);
    if (bVar7) {
      *(code **)((int)((this->Radii_km).Y_km + -4 + *(int *)((int)&(this->Radii_km).Y_km + 4) * 4
                ) )= (long long int (*)())(GetHumanHabitabilityScore_Clear);
    }
    dVar22 = GetHumanHabitabilityScore_MemoizedFunction(this);
    tVar20 = tStack_1c;
    tStack_1c.Value1 = 1;
    tVar6 = tStack_1c;
    (*(uint32_t*)&(local_24)) = SUB84(dVar22,0);
    (*(uint32_t*)((char*)&(local_24)+4)) = (undefined4)((ulonglong)dVar22 >> 0x20);
    tStack_1c.Value2 = tVar20.Value2;
    this[1].Atmosphere.Data._pad_0x8_2 = (int)local_24;
    *(undefined4 *)&((*(undefined4 *)((char *)&(this[1].Atmosphere.Data) + 0xc))) = (*(uint32_t*)((char*)&(local_24)+4));
    *(uint *)&this[1].Atmosphere.Data.SurfacePressure_Pa = tStack_1c.Value1;
    *(int *)((int)&this[1].Atmosphere.Data.SurfacePressure_Pa + 4) = tStack_1c.Value2;
    *(uint32_t *)&local_24 = dVar22;
    tStack_1c = tVar6;
    if (*(char *)&this[1].Atmosphere.Data.SurfacePressure_Pa == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  local_d8.Value1 = this[1].Atmosphere.Data._pad_0x8_2;
  local_d8.Value2 = (int)((*(undefined1 *)((char *)&(this[1].Atmosphere.Data) + 0xc)));
  pPVar9 = PlanetShader__GetStatic();
  (**(code **)(pPVar9->_pad_0x0_0 + 0x98))(&local_d8);
  Graphics__TransformStack__TransformStack(&local_11,Style__Default);
  dVar22 = 0.7853981633974483;
  tVar20.Value1 = 0;
  tVar20.Value2 = Type__TwoDimensional;
  libm_sse2_sin_precise(0.0);
  *(uint32_t *)&local_24 = dVar22 * 0.0;
  uVar19 = 0x54442d18;
  uVar21 = 0x3fe921fb;
  *(uint32_t *)&auStack_e0 = (uint64_t)dVar22;
  local_d8 = tVar20;
  tStack_1c = tVar20;
  libm_sse2_cos_precise(0.0);
  QVar4.Y = (int)local_24;
  QVar4.X = (double)(uintptr_t)((double)(int)(uintptr_t)(auStack_e0));
  QVar4.Z = (*(uint32_t*)((char*)&(local_24)+4));
  QVar4.Z = (int)local_24;
  QVar4.W = (*(uint32_t*)((char*)&(local_24)+4));
  QVar4.W = uVar19;
  (*(uint32_t *)((char *)&(QVar4.W) + 4)) = uVar21;
  Graphics__Rotate(QVar4);
  piVar2 = &(this->HiResModel)._pad_0x80_32;
  bVar7 = VertexBufferObjectInterface__IsGenerated((VertexBufferObjectInterface *)piVar2);
  local_f0 = *(tuple2_L_unsigned_int_CTextureType__Type_G_ *)&this->Albedo;
  local_c8 = *(tuple2_L_unsigned_int_CTextureType__Type_G_ *)&this->SpectralType;
  if (bVar7) {
    if ((((*(double *)&(local_f0)) <= (*(double *)&(local_c8))) ||
        ((*(double *)&(local_f0)) < *(double *)&(this->Orbit).Data ||
         (*(double *)&(local_f0)) == *(double *)&(this->Orbit).Data)) ||
       (piVar3 = &(this->Orbit).Data._pad_0x8_2, local_100 = local_f0, tStack_f8 = local_f0,
       (*(double *)&(local_f0)) < *(double *)piVar3 || (*(double *)&(local_f0)) == *(double *)piVar3)) {
      tStack_f8.Value1 = (this->Orbit).Data._pad_0x8_2;
      tStack_f8.Value2 = (this->Orbit).Data._pad_0xc_3;
      local_f0.Value1 = (this->Orbit).Data._pad_0x0_0;
      local_f0.Value2 = (this->Orbit).Data._pad_0x4_1;
      local_100 = local_c8;
    }
    local_c8 = local_100;
    tStack_c0 = tStack_f8;
    local_b8 = local_f0;
    local_d8 = ({ __typeof__((util__Abs((double *)&tStack_c0))) _tp = (util__Abs((double *)&tStack_c0)); *( tuple2_L_unsigned_int_CTextureType__Type_G_ *)&_tp; });
    local_10 = ({ __typeof__((util__Abs((double *)&local_c8))) _tp = (util__Abs((double *)&local_c8)); *( tuple2_L_unsigned_int_CTextureType__Type_G_ *)&_tp; });
    tStack_1c = ({ __typeof__((util__Abs((double *)&local_b8))) _tp = (util__Abs((double *)&local_b8)); *( tuple2_L_unsigned_int_CTextureType__Type_G_ *)&_tp; });
    if ((*(double *)&(local_d8)) <= (*(double *)&(local_10))) {
      local_d8 = ({ __typeof__((util__Abs((double *)&local_c8))) _tp = (util__Abs((double *)&local_c8)); *( tuple2_L_unsigned_int_CTextureType__Type_G_ *)&_tp; });
      cVar8 = '\0';
      if ((*(double *)&(local_d8)) < (*(double *)&(tStack_1c))) {
        cVar8 = '\x02';
      }
    }
    else {
      local_d8 = ({ __typeof__((util__Abs((double *)&tStack_c0))) _tp = (util__Abs((double *)&tStack_c0)); *( tuple2_L_unsigned_int_CTextureType__Type_G_ *)&_tp; });
      cVar8 = ((*(double *)&(local_d8)) < (*(double *)&(tStack_1c))) + '\x01';
    }
    tVar20 = local_c8;
    if (((cVar8 != '\0') && (tVar20 = tStack_c0, cVar8 != '\x01')) &&
       (tVar20 = local_c8, cVar8 == '\x02')) {
      tVar20 = local_b8;
    }
    ptVar18 = &local_c8;
    local_c8 = tVar20;
    tStack_c0 = tVar20;
    local_b8 = tVar20;
  }
  else {
    if ((((*(double *)&(local_f0)) <= (*(double *)&(local_c8))) ||
        ((*(double *)&(local_f0)) < *(double *)&(this->Orbit).Data ||
         (*(double *)&(local_f0)) == *(double *)&(this->Orbit).Data)) ||
       (piVar3 = &(this->Orbit).Data._pad_0x8_2,
       (*(double *)&(local_f0)) < *(double *)piVar3 || (*(double *)&(local_f0)) == *(double *)piVar3)) {
      tStack_c0.Value1 = (this->Orbit).Data._pad_0x8_2;
      tStack_c0.Value2 = (this->Orbit).Data._pad_0xc_3;
      local_f0.Value1 = (this->Orbit).Data._pad_0x0_0;
      local_f0.Value2 = (this->Orbit).Data._pad_0x4_1;
    }
    else {
      local_c8 = local_f0;
      tStack_c0 = local_f0;
    }
    local_b8 = local_f0;
    ptVar18 = &local_100;
    local_100 = local_c8;
    tStack_f8 = tStack_c0;
  }
  VVar5.W = ptVar18[2].Value2;
  (*(uint32_t *)((char *)&(VVar5) + 0)) = (uint32_t)(uintptr_t)(*(undefined1 (*) [20])ptVar18);
  Graphics__Scale(VVar5);
  bVar7 = VertexBufferObjectInterface__IsGenerated((VertexBufferObjectInterface *)piVar2);
  if (bVar7) {
    if (param_2) {
      bVar7 = VertexBufferObjectInterface__IsGenerated
                        ((VertexBufferObjectInterface *)&this[1].Radius_km);
      this_00 = (VertexBufferObject *)&this[1].Radius_km;
      if (bVar7) goto LAB_00720344;
    }
    this_00 = (VertexBufferObject *)piVar2;
  }
  else if (param_2) {
    this_00 = (VertexBufferObject *)(uintptr_t)(GetHighResPlanetModel());
  }
  else {
    this_00 = (VertexBufferObject *)(uintptr_t)(GetPlanetModel());
  }
LAB_00720344:
  bVar7 = VertexBufferObjectInterface__IsGenerated((VertexBufferObjectInterface *)this_00);
  if (bVar7) {
    VertexBufferObjectInterface__Render((VertexBufferObjectInterface *)this_00);
  }
  Graphics__TransformStack___TransformStack(&local_11);
  Graphics__TextureStack___TextureStack(&local_64);
  Graphics__TextureStack___TextureStack(&local_74);
  Graphics__TextureStack___TextureStack((TextureStack *)&local_44);
  Graphics__TextureStack___TextureStack(&local_84);
  Graphics__TextureStack___TextureStack(&local_94);
  Graphics__TextureStack___TextureStack(&local_a4);
  Graphics__TextureStack___TextureStack((TextureStack *)&local_54);
  Graphics__ShaderStack___ShaderStack(&local_12);
  return;
}

//==== 00720920 StaticFactory_00720920 ====

/* public: static class util__Reflectable * __cdecl
   AsteroidSpectralType__ReflectionInfoStruct_struct_AsteroidSpectralType___StaticFactory(void) */

Reflectable * __cdecl
AsteroidSpectralType__ReflectionInfoStruct_struct_AsteroidSpectralType___StaticFactory__o2(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x20));
  if (pRVar1 != (Reflectable *)0x0) {
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_429;
    pRVar1[1]._pad_0x0_0 = (int)&vftable_2;
    pRVar1[1].Name.Data = (char *)0x0;
    pRVar1[1].Name.Capacity = 0;
    pRVar1[1].Name.Length = 0;
  }
  return (Reflectable *)0x0;
}

//==== 00720970 StaticFactory_00720970 ====

/* public: static class util__Reflectable * __cdecl CelestialAtmosphere__ReflectionInfoStruct_L_struct_CelestialAtmosphere_G___StaticFactory(void) */

Reflectable * __cdecl
CelestialAtmosphere__ReflectionInfoStruct_struct_CelestialAtmosphere___StaticFactory(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x28));
  if (pRVar1 != (Reflectable *)0x0) {
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_436;
    pRVar1[1]._pad_0x0_0 = 0;
    pRVar1[1].Name.Data = (char *)0x0;
    pRVar1[1].Name.Capacity = (int)&vftable_435;
    pRVar1[1].Name.Length = 0;
    pRVar1[2]._pad_0x0_0 = 0;
    pRVar1[2].Name.Data = (char *)0x0;
  }
  return (Reflectable *)0x0;
}

//==== 007209d0 StaticFactory_007209d0 ====

/* public: static class util__Reflectable * __cdecl CelestialBody__ReflectionInfoStruct_L_struct_CelestialBody_G___StaticFactory(void) */

Reflectable * __cdecl CelestialBody__ReflectionInfoStruct_struct_CelestialBody___StaticFactory(void)

{
  Reflectable *this;
  
  this = (Reflectable *)(uintptr_t)(port_op_new(0x4b0));
  if (this != (Reflectable *)0x0) {
    EditorReflectable__EditorReflectable((EditorReflectable *)this);
    this->_pad_0x0_0 = (int)&vftable_437;
    this[3].Name.Data = (char *)0x0;
    this[3].Name.Capacity = 0;
    this[3].Name.Length = 0;
    this[4]._pad_0x0_0 = 0;
    this[3].Name.Data = (char *)&vftable_2;
    this[3].Name.Capacity = 0;
    this[3].Name.Length = 0;
    this[4]._pad_0x0_0 = 0;
    this[4].Name.Capacity = 0;
    this[4].Name.Length = 0;
    this[5]._pad_0x0_0 = 0;
    this[5].Name.Data = (char *)0x0;
    this[5].Name.Capacity = 0;
    this[5].Name.Length = 0;
    this[6]._pad_0x0_0 = 0;
    this[6].Name.Data = (char *)0x0;
    this[6].Name.Capacity = 0;
    this[6].Name.Length = 0;
    this[7]._pad_0x0_0 = 0;
    this[7].Name.Data = (char *)0x0;
    this[7].Name.Capacity = 0;
    this[8]._pad_0x0_0 = 0;
    this[8].Name.Data = (char *)0x0;
    this[8].Name.Capacity = 0;
    this[8].Name.Length = 0x3fe00000;
    this[9]._pad_0x0_0 = 0;
    *(undefined1 *)&this[9].Name.Data = 0;
    this[9].Name.Length = 0;
    this[10]._pad_0x0_0 = 0;
    this[10].Name.Data = (char *)0x0;
    this[9].Name.Capacity = (int)&vftable_403;
    this[10].Name.Capacity = 0;
    this[0xb].Name.Data = (char *)0x0;
    this[0xb].Name.Capacity = 0;
    this[0xb].Name.Length = 0;
    this[0xb]._pad_0x0_0 = (int)&vftable_396;
    this[0xc]._pad_0x0_0 = 0;
    this[0xc].Name.Data = (char *)0x0;
    this[0xc].Name.Capacity = 0;
    this[0xc].Name.Length = 0;
    this[0xd]._pad_0x0_0 = 0;
    this[0xd].Name.Data = (char *)0x0;
    this[0xd].Name.Capacity = 0;
    this[0xd].Name.Length = 0;
    this[0xe]._pad_0x0_0 = 0;
    this[0xe].Name.Data = (char *)0x0;
    this[0xe].Name.Capacity = 0;
    this[0xe].Name.Length = 0;
    this[0xf]._pad_0x0_0 = 0;
    this[0xf].Name.Data = (char *)0x0;
    *(undefined1 *)&this[0xf].Name.Capacity = 0;
    this[0x10].Name.Data = (char *)0x0;
    this[0x10].Name.Capacity = 0;
    this[0x10].Name.Length = 0;
    this[0x10]._pad_0x0_0 = (int)&vftable_434;
    this[0x11]._pad_0x0_0 = 0;
    this[0x11].Name.Data = (char *)0x0;
    this[0x11].Name.Capacity = 0;
    this[0x11].Name.Length = 0;
    this[0x12].Name.Data = (char *)0x0;
    this[0x12].Name.Capacity = 0;
    this[0x12].Name.Length = 0;
    this[0x12]._pad_0x0_0 = (int)&vftable_433;
    this[0x13]._pad_0x0_0 = 0;
    this[0x13].Name.Data = (char *)0x0;
    this[0x13].Name.Capacity = 0;
    this[0x13].Name.Length = 0;
    *(undefined1 *)&this[0x14]._pad_0x0_0 = 0;
    CustomTexture__CustomTexture((CustomTexture *)&this[0x14].Name);
    CustomTexture__CustomTexture((CustomTexture *)(this + 0x18));
    *(undefined1 *)&this[0x1c]._pad_0x0_0 = 0;
    this[0x1c].Name.Length = 0;
    this[0x1d]._pad_0x0_0 = 0;
    this[0x1d].Name.Data = (char *)0x0;
    this[0x1c].Name.Capacity = (int)&vftable_436;
    this[0x1d].Name.Capacity = 0;
    this[0x1d].Name.Length = 0;
    this[0x1e]._pad_0x0_0 = (int)&vftable_435;
    this[0x1e].Name.Data = (char *)0x0;
    this[0x1e].Name.Capacity = 0;
    this[0x1e].Name.Length = 0;
    *(undefined1 *)&this[0x1f]._pad_0x0_0 = 0;
    CubeMap__CubeMap((Type__CubeMap *)&this[0x1f].Name.Capacity);
    CubeMap__CubeMap((Type__CubeMap *)(this + 0x23));
    CubeMap__CubeMap((Type__CubeMap *)&this[0x26].Name.Capacity);
    CubeMap__CubeMap((Type__CubeMap *)(this + 0x2a));
    this[0x2d].Name.Capacity = 0;
    this[0x2d].Name.Length = 0;
    VertexBufferObject__VertexBufferObject((VertexBufferObject *)(this + 0x2e));
    VertexBufferObject__VertexBufferObject((VertexBufferObject *)(this + 0x38));
    this[0x42]._pad_0x0_0 = 0;
    this[0x42].Name.Data = (char *)0x0;
    this[0x42].Name.Capacity = 0;
    this[0x43]._pad_0x0_0 = 0;
    this[0x43].Name.Data = (char *)0x0;
    this[0x43].Name.Capacity = 0;
    this[0x43].Name.Length = 0;
    this[0x44]._pad_0x0_0 = 0;
    this[0x44].Name.Data = (char *)0x0;
    this[0x44].Name.Capacity = 0;
    this[0x44].Name.Length = 0;
    *(undefined1 *)&this[0x45]._pad_0x0_0 = 0;
    this[0x45].Name.Capacity = 0;
    this[0x45].Name.Length = 0;
    *(undefined1 *)&this[0x46]._pad_0x0_0 = 0;
    *(undefined2 *)&this[0x46].Name.Capacity = 0;
    this[0x47]._pad_0x0_0 = 0;
    this[0x47].Name.Data = (char *)0x0;
    *(undefined1 *)&this[0x47].Name.Capacity = 0;
    this[0x48]._pad_0x0_0 = 0;
    this[0x48].Name.Data = (char *)0x0;
    *(undefined1 *)&this[0x48].Name.Capacity = 0;
    *(undefined1 *)&this[0x49]._pad_0x0_0 = 0;
    this[0x49].Name.Capacity = 0;
    this[0x49].Name.Length = 0;
    *(undefined1 *)&this[0x4a]._pad_0x0_0 = 0;
    *(undefined1 *)&this[0x4a].Name.Capacity = 0;
  }
  return (Reflectable *)0x0;
}

//==== 007209f0 StaticFactory_007209f0 ====

/* public: static class util__Reflectable * __cdecl CelestialRing__ReflectionInfoStruct_L_struct_CelestialRing_G___StaticFactory(void) */

Reflectable * __cdecl CelestialRing__ReflectionInfoStruct_struct_CelestialRing___StaticFactory(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0xa0));
  if (pRVar1 != (Reflectable *)0x0) {
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_433;
    pRVar1[1]._pad_0x0_0 = 0;
    pRVar1[1].Name.Data = (char *)0x0;
    pRVar1[1].Name.Capacity = 0;
    pRVar1[1].Name.Length = 0;
    *(undefined1 *)&pRVar1[2]._pad_0x0_0 = 0;
    CustomTexture__CustomTexture((CustomTexture *)&pRVar1[2].Name);
    CustomTexture__CustomTexture((CustomTexture *)(pRVar1 + 6));
  }
  return (Reflectable *)0x0;
}

//==== 00720a50 StaticFactory_00720a50 ====

/* public: static class util__Reflectable * __cdecl CelestialRotation__ReflectionInfoStruct_L_struct_CelestialRotation_G___StaticFactory(void) */

Reflectable * __cdecl
CelestialRotation__ReflectionInfoStruct_struct_CelestialRotation___StaticFactory(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x20));
  if (pRVar1 != (Reflectable *)0x0) {
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_434;
    pRVar1[1]._pad_0x0_0 = 0;
    pRVar1[1].Name.Data = (char *)0x0;
    pRVar1[1].Name.Capacity = 0;
    pRVar1[1].Name.Length = 0;
  }
  return (Reflectable *)0x0;
}

//==== 00720a90 StaticGetMember_00720a90 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Maybe_L_structutil__ClassMember_G_ const __cdecl
   AsteroidSpectralType__ReflectionInfoStruct_struct_AsteroidSpectralType___StaticGetMember(class
   util__Str_L_char_G_ const &) */

Str_L_char_G_ * __cdecl
AsteroidSpectralType__ReflectionInfoStruct_struct_AsteroidSpectralType___StaticGetMember__o2
          (Str_L_char_G_ *param_1)

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
        cde_l2_01491c69__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_01491c69__thread_safe_static_guard_0__),
      cde_l2_01491c69__thread_safe_static_guard_0__ == -1)) {
     cde_l2_fb9df958_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_01491c69__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_fb9df958_Count) {
    piVar7 = &DAT_00980968;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_bce1d5dc__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_bce1d5dc__thread_safe_static_guard_0__),
          cde_l2_bce1d5dc__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_4569390f_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_00980964 = 0;
        DAT_00980968 = 0;
        DAT_0098096c = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980970,"Unused");
        _DAT_0098097c = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980980,"Composition");
        _DAT_0098098c = 8;
        _DAT_00980990 = 0x10;
        _DAT_00980994 = 4;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980998,"Material");
        _DAT_009809a4 = 1;
        atexit( private__static_struct_util__ClassMember_const___cdecl_AsteroidSpectralType__ReflectionInfoStruct_struct_AsteroidSpectralType___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_bce1d5dc__thread_safe_static_guard_0__);
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
LAB_00720b62:
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
          if (cVar3 == '\0') goto LAB_00720b62;
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
    } while (iVar6 <  cde_l2_fb9df958_Count);
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





//==== 00720d40 StaticGetMember_00720d40 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Maybe_L_structutil__ClassMember_G_ const __cdecl
   CelestialAtmosphere__ReflectionInfoStruct_struct_CelestialAtmosphere___StaticGetMember(class
   util__Str_L_char_G_ const &) */

Str_L_char_G_ * __cdecl
CelestialAtmosphere__ReflectionInfoStruct_struct_CelestialAtmosphere___StaticGetMember__o2
          (Str_L_char_G_ *param_1)

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
        cde_l2_a48b9efd__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_a48b9efd__thread_safe_static_guard_0__),
      cde_l2_a48b9efd__thread_safe_static_guard_0__ == -1)) {
     cde_l2_48a4ccc2_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_a48b9efd__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_48a4ccc2_Count) {
    piVar7 = &DAT_00980a40;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_4482fcab__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_4482fcab__thread_safe_static_guard_0__),
          cde_l2_4482fcab__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_0eb90106_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_00980a3c = 0;
        DAT_00980a40 = 0;
        DAT_00980a44 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980a48,"Unused");
        _DAT_00980a54 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980a58,"SurfacePressure_Pa");
        _DAT_00980a64 = 4;
        _DAT_00980a68 = 0x10;
        _DAT_00980a6c = 8;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980a70,"double");
        _DAT_00980a7c = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980a80,"Composition");
        _DAT_00980a8c = 0xb;
        _DAT_00980a90 = 0x18;
        _DAT_00980a94 = 0x10;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980a98,"ChemicalMakeup");
        _DAT_00980aa4 = 1;
        atexit( private__static_struct_util__ClassMember_const___cdecl_CelestialAtmosphere__ReflectionInfoStruct_struct_CelestialAtmosphere___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_4482fcab__thread_safe_static_guard_0__);
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
LAB_00720e12:
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
          if (cVar3 == '\0') goto LAB_00720e12;
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
    } while (iVar6 <  cde_l2_48a4ccc2_Count);
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





//==== 00721030 StaticGetMember_00721030 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Maybe_L_structutil__ClassMember_G_ const __cdecl
   CelestialRotation__ReflectionInfoStruct_struct_CelestialRotation___StaticGetMember(class
   util__Str_L_char_G_ const &) */

Str_L_char_G_ * __cdecl
CelestialRotation__ReflectionInfoStruct_struct_CelestialRotation___StaticGetMember__o2
          (Str_L_char_G_ *param_1)

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
        cde_l2_6b9cf64f__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_6b9cf64f__thread_safe_static_guard_0__),
      cde_l2_6b9cf64f__thread_safe_static_guard_0__ == -1)) {
     cde_l2_c3ca5c39_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_6b9cf64f__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_c3ca5c39_Count) {
    piVar7 = &DAT_00980b40;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_43b2a5c4__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_43b2a5c4__thread_safe_static_guard_0__),
          cde_l2_43b2a5c4__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_672d4584_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_00980b3c = 0;
        DAT_00980b40 = 0;
        DAT_00980b44 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980b48,"Unused");
        _DAT_00980b54 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980b58,"AxialTilt_degrees");
        _DAT_00980b64 = 4;
        _DAT_00980b68 = 0x10;
        _DAT_00980b6c = 8;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980b70,"double");
        _DAT_00980b7c = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980b80,"SiderealRotationPeriod_s");
        _DAT_00980b8c = 4;
        _DAT_00980b90 = 0x18;
        _DAT_00980b94 = 8;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980b98,"double");
        _DAT_00980ba4 = 0;
        atexit( private__static_struct_util__ClassMember_const___cdecl_CelestialRotation__ReflectionInfoStruct_struct_CelestialRotation___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_43b2a5c4__thread_safe_static_guard_0__);
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
LAB_00721102:
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
          if (cVar3 == '\0') goto LAB_00721102;
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
    } while (iVar6 <  cde_l2_c3ca5c39_Count);
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





//==== 00721320 StaticGetMemberByIndex_00721320 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl CelestialBody__ReflectionInfoStruct_struct_CelestialBody___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
CelestialBody__ReflectionInfoStruct_struct_CelestialBody___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_f4e417f6__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_f4e417f6__thread_safe_static_guard_0__);
    if ( cde_l2_f4e417f6__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_6b81121f_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_009806fc = 0;
      _DAT_00980700 = 0;
      _DAT_00980704 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980708,"Unused");
      _DAT_00980714 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980718,"Mass_kg");
      _DAT_00980724 = 4;
      _DAT_00980728 = 0x48;
      _DAT_0098072c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980730,"double");
      _DAT_0098073c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980740,"Radius_km");
      _DAT_0098074c = 4;
      _DAT_00980750 = 0x50;
      _DAT_00980754 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980758,"double");
      _DAT_00980764 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980768,"Radii_km");
      _DAT_00980774 = 0xb;
      _DAT_00980778 = 0x58;
      _DAT_0098077c = 0x18;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980780,"NonSphericalRadii");
      _DAT_0098078c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980790,"CustomResourceName");
      _DAT_0098079c = 6;
      _DAT_009807a0 = 0x70;
      _DAT_009807a4 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009807a8,"AStr");
      _DAT_009807b4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009807b8,"SurfaceTemperature_K");
      _DAT_009807c4 = 4;
      _DAT_009807c8 = 0x80;
      _DAT_009807cc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009807d0,"double");
      _DAT_009807dc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009807e0,"Albedo");
      _DAT_009807ec = 4;
      _DAT_009807f0 = 0x88;
      _DAT_009807f4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009807f8,"double");
      _DAT_00980804 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980808,"SpectralType");
      _DAT_00980814 = 8;
      _DAT_00980818 = 0x90;
      _DAT_0098081c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980820,"AsteroidSpectralType");
      _DAT_0098082c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980830,"IsGasComposition");
      _DAT_0098083c = 1;
      _DAT_00980840 = 0x94;
      _DAT_00980844 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980848,"bool");
      _DAT_00980854 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980858,"Orbit");
      _DAT_00980864 = 10;
      _DAT_00980868 = 0x98;
      _DAT_0098086c = 0x60;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980870,"CelestialOrbit");
      _DAT_0098087c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980880,"Rotation");
      _DAT_0098088c = 10;
      _DAT_00980890 = 0x100;
      _DAT_00980894 = 0x20;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980898,"CelestialRotation");
      _DAT_009808a4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009808a8,"RingSystem");
      _DAT_009808b4 = 10;
      _DAT_009808b8 = 0x120;
      _DAT_009808bc = 0xa0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009808c0,"CelestialRing");
      _DAT_009808cc = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009808d0,"Atmosphere");
      _DAT_009808dc = 10;
      _DAT_009808e0 = 0x1c8;
      _DAT_009808e4 = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009808e8,"CelestialAtmosphere");
      _DAT_009808f4 = 0x100;
      atexit( private__static_struct_util__ClassMember_const___cdecl_CelestialBody__ReflectionInfoStruct_struct_CelestialBody___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_f4e417f6__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_6b81121f_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_009806fc + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00980700 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_00980704 + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00980708 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_00980714)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_00980715)[iVar1];
  return __return_storage_ptr__;
}





//==== 00721740 StaticGetMemberByIndex_00721740 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl CelestialRing__ReflectionInfoStruct_struct_CelestialRing___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
CelestialRing__ReflectionInfoStruct_struct_CelestialRing___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_5cc708de__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_5cc708de__thread_safe_static_guard_0__);
    if ( cde_l2_5cc708de__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_a8d8e832_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00980c64 = 0;
      _DAT_00980c68 = 0;
      _DAT_00980c6c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980c70,"Unused");
      _DAT_00980c7c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980c80,"StartRadius_km");
      _DAT_00980c8c = 4;
      _DAT_00980c90 = 0x10;
      _DAT_00980c94 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980c98,"double");
      _DAT_00980ca4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980ca8,"EndRadius_km");
      _DAT_00980cb4 = 4;
      _DAT_00980cb8 = 0x18;
      _DAT_00980cbc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980cc0,"double");
      _DAT_00980ccc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980cd0,"UseDefaultTexture");
      _DAT_00980cdc = 1;
      _DAT_00980ce0 = 0x20;
      _DAT_00980ce4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980ce8,"bool");
      _DAT_00980cf4 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_CelestialRing__ReflectionInfoStruct_struct_CelestialRing___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_5cc708de__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_a8d8e832_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_00980c64 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00980c68 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_00980c6c + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00980c70 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_00980c7c)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_00980c7d)[iVar1];
  return __return_storage_ptr__;
}





//==== 00721900 StaticGetMemberCount_00721900 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl AsteroidSpectralType__ReflectionInfoStruct_struct_AsteroidSpectralType___StaticGetMemberCount(void) */

int __cdecl
AsteroidSpectralType__ReflectionInfoStruct_struct_AsteroidSpectralType___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_27a77f32__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_27a77f32__thread_safe_static_guard_0__);
    if ( cde_l2_27a77f32__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_3ebc7b62_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0098090c = 0;
      _DAT_00980910 = 0;
      _DAT_00980914 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980918,"Unused");
      _DAT_00980924 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980928,"Composition");
      _DAT_00980934 = 8;
      _DAT_00980938 = 0x10;
      _DAT_0098093c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980940,"Material");
      _DAT_0098094c = 1;
      atexit( private__static_int_const___cdecl_AsteroidSpectralType__ReflectionInfoStruct_struct_AsteroidSpectralType___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_27a77f32__thread_safe_static_guard_0__);
    }
  }
  return 2;
}





//==== 007219e0 StaticGetMemberCount_007219e0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl CelestialAtmosphere__ReflectionInfoStruct_struct_CelestialAtmosphere___StaticGetMemberCount(void) */

int __cdecl
CelestialAtmosphere__ReflectionInfoStruct_struct_CelestialAtmosphere___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_885a2126__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_885a2126__thread_safe_static_guard_0__);
    if ( cde_l2_885a2126__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_6a3ca45c_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_009809bc = 0;
      _DAT_009809c0 = 0;
      _DAT_009809c4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009809c8,"Unused");
      _DAT_009809d4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009809d8,"SurfacePressure_Pa");
      _DAT_009809e4 = 4;
      _DAT_009809e8 = 0x10;
      _DAT_009809ec = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009809f0,"double");
      _DAT_009809fc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980a00,"Composition");
      _DAT_00980a0c = 0xb;
      _DAT_00980a10 = 0x18;
      _DAT_00980a14 = 0x10;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980a18,"ChemicalMakeup");
      _DAT_00980a24 = 1;
      atexit( private__static_int_const___cdecl_CelestialAtmosphere__ReflectionInfoStruct_struct_CelestialAtmosphere___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_885a2126__thread_safe_static_guard_0__);
    }
  }
  return 3;
}





//==== 00721b10 StaticGetMemberCount_00721b10 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl CelestialBody__ReflectionInfoStruct_struct_CelestialBody___StaticGetMemberCount(void) */

int __cdecl CelestialBody__ReflectionInfoStruct_struct_CelestialBody___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_a7b982ed__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_a7b982ed__thread_safe_static_guard_0__);
    if ( cde_l2_a7b982ed__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_6284d773_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_009804ec = 0;
      _DAT_009804f0 = 0;
      _DAT_009804f4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009804f8,"Unused");
      _DAT_00980504 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980508,"Mass_kg");
      _DAT_00980514 = 4;
      _DAT_00980518 = 0x48;
      _DAT_0098051c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980520,"double");
      _DAT_0098052c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980530,"Radius_km");
      _DAT_0098053c = 4;
      _DAT_00980540 = 0x50;
      _DAT_00980544 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980548,"double");
      _DAT_00980554 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980558,"Radii_km");
      _DAT_00980564 = 0xb;
      _DAT_00980568 = 0x58;
      _DAT_0098056c = 0x18;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980570,"NonSphericalRadii");
      _DAT_0098057c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980580,"CustomResourceName");
      _DAT_0098058c = 6;
      _DAT_00980590 = 0x70;
      _DAT_00980594 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980598,"AStr");
      _DAT_009805a4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009805a8,"SurfaceTemperature_K");
      _DAT_009805b4 = 4;
      _DAT_009805b8 = 0x80;
      _DAT_009805bc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009805c0,"double");
      _DAT_009805cc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009805d0,"Albedo");
      _DAT_009805dc = 4;
      _DAT_009805e0 = 0x88;
      _DAT_009805e4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009805e8,"double");
      _DAT_009805f4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009805f8,"SpectralType");
      _DAT_00980604 = 8;
      _DAT_00980608 = 0x90;
      _DAT_0098060c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980610,"AsteroidSpectralType");
      _DAT_0098061c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980620,"IsGasComposition");
      _DAT_0098062c = 1;
      _DAT_00980630 = 0x94;
      _DAT_00980634 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980638,"bool");
      _DAT_00980644 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980648,"Orbit");
      _DAT_00980654 = 10;
      _DAT_00980658 = 0x98;
      _DAT_0098065c = 0x60;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980660,"CelestialOrbit");
      _DAT_0098066c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980670,"Rotation");
      _DAT_0098067c = 10;
      _DAT_00980680 = 0x100;
      _DAT_00980684 = 0x20;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980688,"CelestialRotation");
      _DAT_00980694 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980698,"RingSystem");
      _DAT_009806a4 = 10;
      _DAT_009806a8 = 0x120;
      _DAT_009806ac = 0xa0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009806b0,"CelestialRing");
      _DAT_009806bc = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009806c0,"Atmosphere");
      _DAT_009806cc = 10;
      _DAT_009806d0 = 0x1c8;
      _DAT_009806d4 = 0x28;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009806d8,"CelestialAtmosphere");
      _DAT_009806e4 = 0x100;
      atexit( private__static_int_const___cdecl_CelestialBody__ReflectionInfoStruct_struct_CelestialBody___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_a7b982ed__thread_safe_static_guard_0__);
    }
  }
  return 0xd;
}





//==== 00721ef0 StaticGetMemberCount_00721ef0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl CelestialRing__ReflectionInfoStruct_struct_CelestialRing___StaticGetMemberCount(void) */

int __cdecl CelestialRing__ReflectionInfoStruct_struct_CelestialRing___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_4d63f23e__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_4d63f23e__thread_safe_static_guard_0__);
    if ( cde_l2_4d63f23e__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_b1ed0842_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00980bbc = 0;
      _DAT_00980bc0 = 0;
      _DAT_00980bc4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980bc8,"Unused");
      _DAT_00980bd4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980bd8,"StartRadius_km");
      _DAT_00980be4 = 4;
      _DAT_00980be8 = 0x10;
      _DAT_00980bec = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980bf0,"double");
      _DAT_00980bfc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980c00,"EndRadius_km");
      _DAT_00980c0c = 4;
      _DAT_00980c10 = 0x18;
      _DAT_00980c14 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980c18,"double");
      _DAT_00980c24 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980c28,"UseDefaultTexture");
      _DAT_00980c34 = 1;
      _DAT_00980c38 = 0x20;
      _DAT_00980c3c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980c40,"bool");
      _DAT_00980c4c = 0;
      atexit( private__static_int_const___cdecl_CelestialRing__ReflectionInfoStruct_struct_CelestialRing___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_4d63f23e__thread_safe_static_guard_0__);
    }
  }
  return 4;
}





//==== 00722060 StaticGetMemberCount_00722060 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl CelestialRotation__ReflectionInfoStruct_struct_CelestialRotation___StaticGetMemberCount(void) */

int __cdecl
CelestialRotation__ReflectionInfoStruct_struct_CelestialRotation___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_fb620a93__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_fb620a93__thread_safe_static_guard_0__);
    if ( cde_l2_fb620a93__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_0d18c901_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00980abc = 0;
      _DAT_00980ac0 = 0;
      _DAT_00980ac4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980ac8,"Unused");
      _DAT_00980ad4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980ad8,"AxialTilt_degrees");
      _DAT_00980ae4 = 4;
      _DAT_00980ae8 = 0x10;
      _DAT_00980aec = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980af0,"double");
      _DAT_00980afc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980b00,"SiderealRotationPeriod_s");
      _DAT_00980b0c = 4;
      _DAT_00980b10 = 0x18;
      _DAT_00980b14 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980b18,"double");
      _DAT_00980b24 = 0;
      atexit( private__static_int_const___cdecl_CelestialRotation__ReflectionInfoStruct_struct_CelestialRotation___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_fb620a93__thread_safe_static_guard_0__);
    }
  }
  return 3;
}





//==== 00722190 StaticGetMembers_00722190 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Darray_L_structutil__ClassMember_G_ const __cdecl
   AsteroidSpectralType__ReflectionInfoStruct_struct_AsteroidSpectralType___StaticGetMembers(void)
    */

Darray_L_struct_util__ClassMember_G_ * __cdecl
AsteroidSpectralType__ReflectionInfoStruct_struct_AsteroidSpectralType___StaticGetMembers__o2(void)

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
        cde_l2_72d19b90__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_72d19b90__thread_safe_static_guard_0__),
      cde_l2_72d19b90__thread_safe_static_guard_0__ == -1)) {
     cde_l2_d0e64b8d_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_72d19b90__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_d0e64b8d_Count);
  iVar3 = 0;
  if (0 <  cde_l2_d0e64b8d_Count) {
    puVar4 = &DAT_00980968;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_bce1d5dc__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_bce1d5dc__thread_safe_static_guard_0__),
          cde_l2_bce1d5dc__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_4569390f_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_00980964 = 0;
        DAT_00980968 = 0;
        DAT_0098096c = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980970,"Unused");
        _DAT_0098097c = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980980,"Composition");
        _DAT_0098098c = 8;
        _DAT_00980990 = 0x10;
        _DAT_00980994 = 4;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980998,"Material");
        _DAT_009809a4 = 1;
        atexit( private__static_struct_util__ClassMember_const___cdecl_AsteroidSpectralType__ReflectionInfoStruct_struct_AsteroidSpectralType___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_bce1d5dc__thread_safe_static_guard_0__);
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
    } while (iVar3 <  cde_l2_d0e64b8d_Count);
  }
  return in_stack_00000004;
}





//==== 007223e0 StaticGetMembers_007223e0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Darray_L_structutil__ClassMember_G_ const __cdecl
   CelestialAtmosphere__ReflectionInfoStruct_struct_CelestialAtmosphere___StaticGetMembers(void) */

Darray_L_struct_util__ClassMember_G_ * __cdecl
CelestialAtmosphere__ReflectionInfoStruct_struct_CelestialAtmosphere___StaticGetMembers__o2(void)

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
        cde_l2_c0831309__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_c0831309__thread_safe_static_guard_0__),
      cde_l2_c0831309__thread_safe_static_guard_0__ == -1)) {
     cde_l2_9e704e06_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_c0831309__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_9e704e06_Count);
  iVar3 = 0;
  if (0 <  cde_l2_9e704e06_Count) {
    puVar4 = &DAT_00980a40;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_4482fcab__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_4482fcab__thread_safe_static_guard_0__),
          cde_l2_4482fcab__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_0eb90106_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_00980a3c = 0;
        DAT_00980a40 = 0;
        DAT_00980a44 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980a48,"Unused");
        _DAT_00980a54 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980a58,"SurfacePressure_Pa");
        _DAT_00980a64 = 4;
        _DAT_00980a68 = 0x10;
        _DAT_00980a6c = 8;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980a70,"double");
        _DAT_00980a7c = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980a80,"Composition");
        _DAT_00980a8c = 0xb;
        _DAT_00980a90 = 0x18;
        _DAT_00980a94 = 0x10;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980a98,"ChemicalMakeup");
        _DAT_00980aa4 = 1;
        atexit( private__static_struct_util__ClassMember_const___cdecl_CelestialAtmosphere__ReflectionInfoStruct_struct_CelestialAtmosphere___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_4482fcab__thread_safe_static_guard_0__);
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
    } while (iVar3 <  cde_l2_9e704e06_Count);
  }
  return in_stack_00000004;
}





//==== 00722670 StaticGetMembers_00722670 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Darray_L_structutil__ClassMember_G_ const __cdecl
   CelestialRotation__ReflectionInfoStruct_struct_CelestialRotation___StaticGetMembers(void) */

Darray_L_struct_util__ClassMember_G_ * __cdecl
CelestialRotation__ReflectionInfoStruct_struct_CelestialRotation___StaticGetMembers__o2(void)

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
        cde_l2_fdcd1d0e__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_fdcd1d0e__thread_safe_static_guard_0__),
      cde_l2_fdcd1d0e__thread_safe_static_guard_0__ == -1)) {
     cde_l2_5976f389_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_fdcd1d0e__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_5976f389_Count);
  iVar3 = 0;
  if (0 <  cde_l2_5976f389_Count) {
    puVar4 = &DAT_00980b40;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_43b2a5c4__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_43b2a5c4__thread_safe_static_guard_0__),
          cde_l2_43b2a5c4__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_672d4584_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_00980b3c = 0;
        DAT_00980b40 = 0;
        DAT_00980b44 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980b48,"Unused");
        _DAT_00980b54 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980b58,"AxialTilt_degrees");
        _DAT_00980b64 = 4;
        _DAT_00980b68 = 0x10;
        _DAT_00980b6c = 8;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980b70,"double");
        _DAT_00980b7c = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980b80,"SiderealRotationPeriod_s");
        _DAT_00980b8c = 4;
        _DAT_00980b90 = 0x18;
        _DAT_00980b94 = 8;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00980b98,"double");
        _DAT_00980ba4 = 0;
        atexit( private__static_struct_util__ClassMember_const___cdecl_CelestialRotation__ReflectionInfoStruct_struct_CelestialRotation___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_43b2a5c4__thread_safe_static_guard_0__);
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
    } while (iVar3 <  cde_l2_5976f389_Count);
  }
  return in_stack_00000004;
}





//==== 00722900 StaticGetReflectionInfo_00722900 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct AsteroidSpectralType__ReflectionInfoStruct_L_structAsteroidSpectralType_G_ *
   __cdecl AsteroidSpectralType__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_struct_AsteroidSpectralType_G_ * __cdecl
AsteroidSpectralType__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_e44a51a5__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_e44a51a5__thread_safe_static_guard_0__);
    if ( cde_l2_e44a51a5__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_14398a68_ReflectionInfo) = &vftable_430;
      _Init_thread_footer(& cde_l2_e44a51a5__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_14398a68_ReflectionInfo;
}





//==== 00722960 StaticGetReflectionInfo_00722960 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct CelestialAtmosphere__ReflectionInfoStruct_L_structCelestialAtmosphere_G_ *
   __cdecl CelestialAtmosphere__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_struct_CelestialAtmosphere_G_ * __cdecl
CelestialAtmosphere__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_7f6c1549__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_7f6c1549__thread_safe_static_guard_0__);
    if ( cde_l2_7f6c1549__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_e07b1ed3_ReflectionInfo) = &vftable_428;
      _Init_thread_footer(& cde_l2_7f6c1549__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_e07b1ed3_ReflectionInfo;
}





//==== 007229c0 StaticGetReflectionInfo_007229c0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct CelestialBody__ReflectionInfoStruct_L_structCelestialBody_G_ * __cdecl
   CelestialBody__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_struct_CelestialBody_G_ * __cdecl CelestialBody__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_d4e07a50__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_d4e07a50__thread_safe_static_guard_0__);
    if ( cde_l2_d4e07a50__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_435dde65_ReflectionInfo) = &vftable_431;
      _Init_thread_footer(& cde_l2_d4e07a50__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_435dde65_ReflectionInfo;
}





//==== 00722a20 StaticGetReflectionInfo_00722a20 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct CelestialRing__ReflectionInfoStruct_L_structCelestialRing_G_ * __cdecl
   CelestialRing__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_struct_CelestialRing_G_ * __cdecl CelestialRing__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_8e0a1deb__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_8e0a1deb__thread_safe_static_guard_0__);
    if ( cde_l2_8e0a1deb__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_0e68a6d2_ReflectionInfo) = &vftable_426;
      _Init_thread_footer(& cde_l2_8e0a1deb__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_0e68a6d2_ReflectionInfo;
}





//==== 00722a80 StaticGetReflectionInfo_00722a80 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct CelestialRotation__ReflectionInfoStruct_L_structCelestialRotation_G_ * __cdecl
   CelestialRotation__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_struct_CelestialRotation_G_ * __cdecl
CelestialRotation__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_cc0fc0a5__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_cc0fc0a5__thread_safe_static_guard_0__);
    if ( cde_l2_cc0fc0a5__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_02b4fcfd_ReflectionInfo) = &vftable_427;
      _Init_thread_footer(& cde_l2_cc0fc0a5__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_02b4fcfd_ReflectionInfo;
}





//==== 00722ae0 AddNewWidgetAndStore_UIWidget_ ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: class util__WeakPtr_L_structUIWidget_G_  Interface__AddNewWidgetAndStore_struct_UIWidget(class util__SharedPtr_L_structUIWidget_G_) */

undefined4 * 
Interface__AddNewWidgetAndStore_struct_UIWidget
          (OptionsSection__Interface *this,undefined4 *param_2,UIWidget *param_3,ReferenceController *param_4)

{
  int iVar1;
  SharedPtr_L_UIWidget_G_ *pSVar2;
  bool bVar3;
  SharedPtr_L_UIWidget_G_ *pSVar4;
  ReferenceControllerRegistry *pRVar5;
  UIWidget *pUVar6;
  ReferenceController *pRVar7;
  undefined1 auStack_18 [4];
  ReferenceController *pRStack_14;
  int iStack_10;
  undefined4 *puStack_c;
  OptionsSection__Interface *pIStack_8;
  
  puStack_c = param_2;
  pIStack_8 = this;
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(param_4);
  }
  iStack_10 = (((struct Interface *)(uintptr_t)(pIStack_8))->StoredWidgets).Size;
  pSVar4 = (((struct Interface *)(uintptr_t)(pIStack_8))->StoredWidgets).Data;
  pSVar2 = pSVar4 + iStack_10;
  for (; pSVar4 != pSVar2; pSVar4 = pSVar4 + 1) {
    if ((param_4 == pSVar4->Controller) && (param_3 == pSVar4->Pointer)) goto LAB_00722bae;
  }
  pRStack_14 = (ReferenceController *)(iStack_10 + 1);
  util__Darray_class_util__SharedPtr_struct_UIWidget_____SetSize
            ((Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *)&((struct Interface *)(uintptr_t)(pIStack_8))->StoredWidgets,
             (int *)&pRStack_14);
  bVar3 = util__Darray_class_util__SharedPtr_struct_UIWidget_____CheckSize
                    ((Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *)&((struct Interface *)(uintptr_t)(pIStack_8))->StoredWidgets,
                     iStack_10);
  if (bVar3) {
    iVar1 = (((struct Interface *)(uintptr_t)(pIStack_8))->StoredWidgets).Size;
    pSVar2 = (((struct Interface *)(uintptr_t)(pIStack_8))->StoredWidgets).Data;
    pRStack_14 = pSVar2[iVar1 + -1].Controller;
    pUVar6 = pSVar2[iVar1 + -1].Pointer;
    pSVar2[iVar1 + -1].Pointer = param_3;
    pSVar2[iVar1 + -1].Controller = param_4;
    if (param_4 != (ReferenceController *)0x0) {
      util__ReferenceController__AddStrongReference(param_4);
    }
    param_2 = puStack_c;
    if ((pRStack_14 != (ReferenceController *)0x0) &&
       (bVar3 = util__ReferenceController__ReleaseStrongReference(pRStack_14), param_2 = puStack_c,
       bVar3)) {
      if (pUVar6 != (UIWidget *)0x0) {
        (**(code **)(pUVar6->_pad_0x0_0 + 4))(1);
      }
      pRVar5 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar5,pUVar6);
      param_2 = puStack_c;
    }
  }
LAB_00722bae:
  pUVar6 = param_3;
  pRVar7 = param_4;
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_4);
  }
  AddNewWidget_L_struct_UIWidget_G_(pIStack_8,auStack_18,pUVar6,pRVar7);
  if (pRStack_14 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRStack_14);
  }
  *param_2 = (undefined4)(uintptr_t)(param_3);
  param_2[1] = (undefined4)(uintptr_t)(param_4);
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_4);
    bVar3 = util__ReferenceController__ReleaseStrongReference(param_4);
    if (bVar3) {
      if (param_3 != (UIWidget *)0x0) {
        (**(code **)(param_3->_pad_0x0_0 + 4))(1);
      }
      pUVar6 = param_3;
      pRVar5 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar5,pUVar6);
    }
  }
  if ((param_4 != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__ReleaseStrongReference(param_4), bVar3)) {
    if (param_3 != (UIWidget *)0x0) {
      (**(code **)(param_3->_pad_0x0_0 + 4))(1);
    }
    pRVar5 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar5,param_3);
  }
  return param_2;
}





//==== 007234a0 Join_util__WeakPtr_OrbiterInterface___ ====


/* class util__Darray_L_classutil__WeakPtr_L_structOrbiterInterface_G__G_ __cdecl util__Join_L_class_util__WeakPtr_L_structOrbiterInterface_G__G_(class util__Darray_L_classutil__WeakPtr_L_struct_OrbiterInterface_G__G_ const &,class util__Darray_L_classutil__WeakPtr_L_structOrbiterInterface_G__G_
   const &) */

void __cdecl
util__Join_class_util__WeakPtr_struct_OrbiterInterface
          (Darray_L_class_util__WeakPtr_L_struct_OrbiterInterface_G___G_ *param_1,
          Darray_L_class_util__WeakPtr_L_struct_OrbiterInterface_G___G_ *param_2)

{
  undefined8 stack0xfffffffc;
  ReferenceController *pRVar1;
  ReferenceController *pRVar2;
  Darray_L_class_util__WeakPtr_L_struct_OrbiterInterface_G___G_ *pDVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int *in_stack_0000000c;
  int *piStack_18;
  undefined4 *puStack_14;
  Darray_L_class_util__WeakPtr_L_struct_OrbiterInterface_G___G_ *pDStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pDStack_10 = param_2;
  piStack_18 = in_stack_0000000c;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar5 = (**(code **)(uintptr_t)(*in_stack_0000000c + 0xc))();
  iVar6 = (**(code **)(*(int *)pDStack_10 + 0xc))();
  Darray_L_class_util__WeakPtr_L_class_Body_G___G___Darray_L_class_util__WeakPtr_L_class_Body_G___G_
            ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)param_1,iVar5 + iVar6);
  iStack_c = 0;
  iVar5 = (**(code **)(*(int *)pDStack_10 + 0xc))();
  pDVar3 = pDStack_10;
  if (iStack_c < iVar5) {
    do {
      puStack_14 = (undefined4 *)(*(code *)**(undefined4 **)pDVar3)(&iStack_c);
      iVar5 = *(int *)(param_1 + 8);
      pDStack_10 = (Darray_L_class_util__WeakPtr_L_struct_OrbiterInterface_G___G_ *)(iVar5 + 1);
      Darray_L_class_util__WeakPtr_L_class_Body_G___G___SetSize
                ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)param_1,(int *)&pDStack_10);
      bVar4 = Darray_L_class_util__WeakPtr_L_class_Body_G___G___CheckSize
                        ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)param_1,iVar5);
      if (bVar4) {
        iVar5 = *(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 8;
        pRVar1 = *(ReferenceController **)(iVar5 + -4);
        *(undefined4 *)(iVar5 + -8) = *puStack_14;
        pRVar2 = (ReferenceController *)puStack_14[1];
        *(ReferenceController **)(iVar5 + -4) = pRVar2;
        if (pRVar2 != (ReferenceController *)0x0) {
          util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(pRVar2);
        }
        if (pRVar1 != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(pRVar1);
        }
      }
      iStack_c = iStack_c + 1;
      iVar5 = (**(code **)(*(int *)pDVar3 + 0xc))();
      in_stack_0000000c = piStack_18;
    } while (iStack_c < iVar5);
  }
  iStack_c = 0;
  iVar5 = (**(code **)(uintptr_t)(*in_stack_0000000c + 0xc))();
  if (iStack_c < iVar5) {
    do {
      puStack_14 = (undefined4 *)(**(code **)*in_stack_0000000c)(&iStack_c);
      iVar5 = *(int *)(param_1 + 8);
      piStack_18 = (int *)(iVar5 + 1);
      Darray_L_class_util__WeakPtr_L_class_Body_G___G___SetSize
                ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)param_1,(int *)&piStack_18);
      bVar4 = Darray_L_class_util__WeakPtr_L_class_Body_G___G___CheckSize
                        ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)param_1,iVar5);
      if (bVar4) {
        pRVar1 = *(ReferenceController **)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 8);
        iVar5 = *(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 8;
        *(undefined4 *)(iVar5 + -8) = *puStack_14;
        pRVar2 = (ReferenceController *)puStack_14[1];
        *(ReferenceController **)(iVar5 + -4) = pRVar2;
        if (pRVar2 != (ReferenceController *)0x0) {
          util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(pRVar2);
        }
        if (pRVar1 != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(pRVar1);
        }
      }
      iStack_c = iStack_c + 1;
      iVar5 = (**(code **)(uintptr_t)(*in_stack_0000000c + 0xc))();
    } while (iStack_c < iVar5);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00723d60 Normal3DShader ====

/* public: __thiscall Normal3DShader__Normal3DShader(void) */

Normal3DShader * __thiscall Normal3DShader__Normal3DShader(Normal3DShader *this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Darray_L_void____cdecl_P__void__G_ *pDVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  float local_78 [18];
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  Darray_L_void____cdecl_P__void__G_ *local_18;
  Darray_L_void____cdecl_P__void__G_ *local_14;
  
  Shader__Shader((Shader *)this);
  this->_pad_0x0_0 = (int)&vftable_438;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_18->Size;
  *(uint32_t *)&local_14 = (uint32_t)(uintptr_t)((Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1));
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar5 = local_18;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadModelMatrixLocation);
  }
  local_30 = 0;
  iStack_2c = 1;
  iStack_28 = 2;
  iStack_24 = 3;
  iVar10 = 0;
  pfVar11 = local_78;
  do {
    iVar7 = iVar10 + 1;
    *pfVar11 = (float)(iVar10 == 0);
    pfVar11[1] = (float)(iVar10 == 1);
    pfVar11[2] = (float)(iVar10 == 2);
    pfVar11[3] = (float)(iVar10 == 3);
    iVar10 = iVar7;
    pfVar11 = pfVar11 + 4;
  } while (iVar7 < 4);
  (this->InverseModelMatrixRegisterInstance).Location = -1;
  *(uint32_t *)&local_14 = GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  iVar4 = iStack_24;
  iVar3 = iStack_28;
  iVar7 = iStack_2c;
  iVar10 = local_30;
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadInverseModelMatrixLocation);
  }
  iVar8 = 0;
  pfVar11 = local_78;
  do {
    iVar9 = iVar8 + 1;
    *pfVar11 = (float)(iVar8 == iVar10);
    pfVar11[1] = (float)(iVar8 == iVar7);
    pfVar11[2] = (float)(iVar8 == iVar3);
    pfVar11[3] = (float)(iVar8 == iVar4);
    iVar8 = iVar9;
    pfVar11 = pfVar11 + 4;
  } while (iVar9 < 4);
  (this->TotalTransformMatrixRegisterInstance).Location = -1;
  *(uint32_t *)&local_14 = GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadTotalTransformMatrixLocation);
  }
  iVar10 = 0;
  pfVar11 = local_78;
  do {
    iVar7 = iVar10 + 1;
    bVar6 = iVar10 == iStack_2c;
    bVar1 = iVar10 == iStack_28;
    bVar2 = iVar10 == iStack_24;
    *pfVar11 = (float)(iVar10 == local_30);
    pfVar11[1] = (float)bVar6;
    pfVar11[2] = (float)bVar1;
    pfVar11[3] = (float)bVar2;
    iVar10 = iVar7;
    pfVar11 = pfVar11 + 4;
  } while (iVar7 < 4);
  (this->NormalMatrixRegisterInstance).Location = -1;
  *(uint32_t *)&local_14 = GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadNormalMatrixLocation);
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  *(uint32_t *)&local_14 = GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadNearPlaneLocation);
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  *(uint32_t *)&local_14 = GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadFarPlaneLocation);
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 00724ce0 GetClassID_00724ce0 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual unsigned long  CelestialObject__GetClassID(void)const  */

ulong CelestialObject__GetClassID(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_f0596b37__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_f0596b37__thread_safe_static_guard_0__);
    if ( cde_l2_f0596b37__thread_safe_static_guard_0__ == -1) {
       cde_l2_4fe6e8e9_ID =
           util__GetHash("CelestialObject");
      _Init_thread_footer(& cde_l2_f0596b37__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_4fe6e8e9_ID;
}





//==== 00724e20 GetData_00724e20 ====


/* public: class util__Darray_L_classutil__WeakPtr_L_classCelestialObject_G__G_ & 
   util__Maybe_class_util__Darray_class_util__WeakPtr_class_CelestialObject_______GetData(void) */

Darray_L_class_util__WeakPtr_L_class_CelestialObject_G___G_ * 
util__Maybe_class_util__Darray_class_util__WeakPtr_class_CelestialObject_______GetData__o2
          (Maybe_L_class_util__Darray_L_class_util__WeakPtr_L_class_CelestialObject_G___G___G_ *this)

{
  if (*(char *)&(this[0x10]) == 0) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,"IsValid()",
              (char *)0x0);
    DebugBreak();
  }
  return (Darray_L_class_util__WeakPtr_L_class_CelestialObject_G___G_ *)this;
}





//==== 00724e50 GetDefaultSetters_00724e50 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   Normal3DShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl Normal3DShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_c442e0f3__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_c442e0f3__thread_safe_static_guard_0__);
    if ( cde_l2_c442e0f3__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_d9dcd84e_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_d9dcd84e_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_d9dcd84e_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_Normal3DShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_c442e0f3__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_d9dcd84e_DefaultSetters;
}





//==== 00726270 GetLPointUIPixelRadius ====


/* public: static double __cdecl CelestialObject__GetLPointUIPixelRadius(void) */

double __cdecl CelestialObject__GetLPointUIPixelRadius(void)

{
  return 5.0;
}





//==== 00726df0 GetPositionAt_km ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: struct util__Vec3_L_double_G_  CelestialObject__GetPositionAt_km(double)const  */

Vec3_L_double_G_ *
CelestialObject__GetPositionAt_km(Vec3_L_double_G_ *__return_storage_ptr__,double param_1)

{
  undefined8 stack0xffffffcc;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  PhysicalState_L_util__Vec3_L_double_G___G_ *pPVar4;
  undefined4 in_stack_ffffffcc;
  
  pPVar4 = (PhysicalState_L_util__Vec3_L_double_G___G_ *)(uintptr_t)(GetStateAt((PhysicalState_L_util__Vec3_L_double_G___G_ *)&stack0xffffffcc,
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





//==== 00727e30 GetStatic_00727e30 ====


/* public: static class Normal3DShader * __cdecl Normal3DShader__GetStatic(void) */

Normal3DShader * __cdecl Normal3DShader__GetStatic(void)

{
  Normal3DShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_815526a0__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_52dd88d0__thread_safe_static_guard_0__);
    if ( cde_l2_52dd88d0__thread_safe_static_guard_0__ == -1) {
      this = (Normal3DShader *)port_op_new(0x54);
      if (this == (Normal3DShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x54);
        pSVar1 = (Shader *)Normal3DShader__Normal3DShader(this);
      }
       cde_l2_b6ea8b9d_Singleton = (Normal3DShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_52dd88d0__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_b6ea8b9d_Singleton;
}





//==== 00727ee0 GetValueLocations_00727ee0 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   Normal3DShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl Normal3DShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_61651cf9__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_61651cf9__thread_safe_static_guard_0__);
    if ( cde_l2_61651cf9__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_793d19c1_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_793d19c1_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_793d19c1_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_Normal3DShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_61651cf9__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_793d19c1_ValueLocations;
}





//==== 00728b20 LoadFarPlaneLocation_00728b20 ====

/* private: static void __cdecl Normal3DShader__LoadFarPlaneLocation(void) */

void __cdecl Normal3DShader__LoadFarPlaneLocation(void)

{
  Normal3DShader *pNVar1;
  Normal3DShader *pNVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pNVar1 = Normal3DShader__GetStatic();
  pcVar4 = "FarPlane";
  pNVar2 = Normal3DShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pNVar2->_pad_0x4_1,pcVar4);
  (pNVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8);
  local_8 = 0;
  pNVar1 = Normal3DShader__GetStatic();
  (**(code **)(pNVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 00728b70 LoadInverseModelMatrixLocation_00728b70 ====

/* private: static void __cdecl Normal3DShader__LoadInverseModelMatrixLocation(void) */

void __cdecl Normal3DShader__LoadInverseModelMatrixLocation(void)

{
  Normal3DShader *pNVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float afStack_dc [18];
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float afStack_54 [7];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pNVar1 = Normal3DShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pNVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x728b9b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8);
  pNVar1 = Normal3DShader__GetStatic();
  iVar2 = 0;
  pfVar4 = afStack_54;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = afStack_dc;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  fStack_94 = afStack_54[0];
  uStack_90 = afStack_54[1];
  uStack_8c = afStack_54[2];
  uStack_88 = afStack_54[3];
  uStack_84 = afStack_54[4];
  uStack_80 = afStack_54[5];
  uStack_7c = afStack_54[6];
  uStack_78 = uStack_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  (**(code **)(pNVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 00728bb0 LoadModelMatrixLocation_00728bb0 ====

/* private: static void __cdecl Normal3DShader__LoadModelMatrixLocation(void) */

void __cdecl Normal3DShader__LoadModelMatrixLocation(void)

{
  Normal3DShader *pNVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float afStack_dc [18];
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float afStack_54 [7];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pNVar1 = Normal3DShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pNVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x728bdb;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8);
  pNVar1 = Normal3DShader__GetStatic();
  iVar2 = 0;
  pfVar4 = afStack_54;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = afStack_dc;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  fStack_94 = afStack_54[0];
  uStack_90 = afStack_54[1];
  uStack_8c = afStack_54[2];
  uStack_88 = afStack_54[3];
  uStack_84 = afStack_54[4];
  uStack_80 = afStack_54[5];
  uStack_7c = afStack_54[6];
  uStack_78 = uStack_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  (**(code **)(pNVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 00728bf0 LoadNearPlaneLocation_00728bf0 ====

/* private: static void __cdecl Normal3DShader__LoadNearPlaneLocation(void) */

void __cdecl Normal3DShader__LoadNearPlaneLocation(void)

{
  Normal3DShader *pNVar1;
  Normal3DShader *pNVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pNVar1 = Normal3DShader__GetStatic();
  pcVar4 = "NearPlane";
  pNVar2 = Normal3DShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pNVar2->_pad_0x4_1,pcVar4);
  (pNVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8);
  local_8 = 0;
  pNVar1 = Normal3DShader__GetStatic();
  (**(code **)(pNVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 00728c40 LoadNormalMatrixLocation_00728c40 ====

/* private: static void __cdecl Normal3DShader__LoadNormalMatrixLocation(void) */

void __cdecl Normal3DShader__LoadNormalMatrixLocation(void)

{
  Normal3DShader *pNVar1;
  Normal3DShader *pNVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  
  pNVar1 = Normal3DShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pNVar2 = Normal3DShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pNVar2->_pad_0x4_1,pcVar4);
  (pNVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8);
  pNVar1 = Normal3DShader__GetStatic();
  *(uint32_t *)&local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pNVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 00728cd0 LoadTotalTransformMatrixLocation_00728cd0 ====

/* private: static void __cdecl Normal3DShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl Normal3DShader__LoadTotalTransformMatrixLocation(void)

{
  Normal3DShader *pNVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float afStack_dc [18];
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float afStack_54 [7];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pNVar1 = Normal3DShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pNVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x728cfb;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8);
  pNVar1 = Normal3DShader__GetStatic();
  iVar2 = 0;
  pfVar4 = afStack_54;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = afStack_dc;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  fStack_94 = afStack_54[0];
  uStack_90 = afStack_54[1];
  uStack_8c = afStack_54[2];
  uStack_88 = afStack_54[3];
  uStack_84 = afStack_54[4];
  uStack_80 = afStack_54[5];
  uStack_7c = afStack_54[6];
  uStack_78 = uStack_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  (**(code **)(pNVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 00728d10 PartialResetState_00728d10 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall Normal3DShader__PartialResetState(void)const  */

void __thiscall Normal3DShader__PartialResetState(Normal3DShader *this)

{
  undefined8 stack0xfffffffc;
  Darray_L_void____cdecl_P__void__G_ *pDVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (this->IsReadyToUse != false) {
    pDVar1 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetDefaultSetters());
    local_c = 0;
    iVar2 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
    if (local_c < iVar2) {
      do {
        puVar3 = (undefined4 *)(**(code **)pDVar1->_pad_0x0_0)(&local_c);
        (*(code *)*puVar3)();
        local_c = local_c + 1;
        iVar2 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
      } while (local_c < iVar2);
    }
  }
  return;
}

//==== 00729bb0 SetFarPlane_00729bb0 ====

/* public: virtual void  Normal3DShader__SetFarPlane(float const &)const  */

void  Normal3DShader__SetFarPlane(Normal3DShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->FarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8);
  }
  return;
}

//==== 00729c40 SetFarPlane_00729c40 ====

/* public: virtual void  Normal3DShader__SetFarPlane(double const &)const  */

void  Normal3DShader__SetFarPlane__o3(Normal3DShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->FarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8);
  }
  return;
}

//==== 00729cd0 SetInverseModelMatrix_00729cd0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  Normal3DShader__SetInverseModelMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
Normal3DShader__SetInverseModelMatrix(Normal3DShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->InverseModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8);
  }
  return;
}

//==== 00729d90 SetInverseModelMatrix_00729d90 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  Normal3DShader__SetInverseModelMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
Normal3DShader__SetInverseModelMatrix__o3(Normal3DShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->InverseModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8);
  }
  return;
}

//==== 00729e80 SetInverseModelMatrixDefault_00729e80 ====

/* private: static void __cdecl Normal3DShader__SetInverseModelMatrixDefault(void) */

void __cdecl Normal3DShader__SetInverseModelMatrixDefault(void)

{
  Normal3DShader *pNVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pNVar1 = Normal3DShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pNVar1->_pad_0x0_0 + 0x28))(&local_90);
  return;
}

//==== 00729f70 SetModelMatrix_00729f70 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  Normal3DShader__SetModelMatrix(struct util__Matrix4x4_L_float_G_
   const &)const  */

void  Normal3DShader__SetModelMatrix(Normal3DShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8);
  }
  return;
}

//==== 0072a030 SetModelMatrix_0072a030 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  Normal3DShader__SetModelMatrix(struct util__Matrix4x4_L_double_G_
   const &)const  */

void  Normal3DShader__SetModelMatrix__o3(Normal3DShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8);
  }
  return;
}

//==== 0072a120 SetModelMatrixDefault_0072a120 ====

/* private: static void __cdecl Normal3DShader__SetModelMatrixDefault(void) */

void __cdecl Normal3DShader__SetModelMatrixDefault(void)

{
  Normal3DShader *pNVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pNVar1 = Normal3DShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pNVar1->_pad_0x0_0 + 0x20))(&local_90);
  return;
}

//==== 0072a200 SetNearPlane_0072a200 ====

/* public: virtual void  Normal3DShader__SetNearPlane(float const &)const  */

void  Normal3DShader__SetNearPlane(Normal3DShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8);
  }
  return;
}

//==== 0072a290 SetNearPlane_0072a290 ====

/* public: virtual void  Normal3DShader__SetNearPlane(double const &)const  */

void  Normal3DShader__SetNearPlane__o3(Normal3DShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8);
  }
  return;
}

//==== 0072a320 SetNormalMatrix_0072a320 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  Normal3DShader__SetNormalMatrix(struct util__Matrix3x3_L_float_G_
   const &)const  */

void  Normal3DShader__SetNormalMatrix(Normal3DShader *this,Matrix3x3_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    local_2c = param_1->Data[0];
    fStack_28 = param_1->Data[1];
    fStack_24 = param_1->Data[2];
    fStack_20 = param_1->Data[3];
    local_1c = param_1->Data[4];
    fStack_18 = param_1->Data[5];
    fStack_14 = param_1->Data[6];
    fStack_10 = param_1->Data[7];
    local_c = param_1->Data[8];
    (*___glewUniformMatrix3fv)(iVar1,1,0,&local_2c);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8);
  }
  return;
}

//==== 0072a3e0 SetNormalMatrix_0072a3e0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  Normal3DShader__SetNormalMatrix(struct util__Matrix3x3_L_double_G_
   const &)const  */

void  Normal3DShader__SetNormalMatrix__o3(Normal3DShader *this,Matrix3x3_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    local_2c = (float)param_1->Data[0];
    local_28 = (float)param_1->Data[1];
    *(uint32_t *)&local_24 = (float)param_1->Data[2];
    *(uint32_t *)&local_20 = (float)param_1->Data[3];
    local_1c = (float)param_1->Data[4];
    local_18 = (float)param_1->Data[5];
    *(uint32_t *)&local_14 = (float)param_1->Data[6];
    local_10 = (float)param_1->Data[7];
    local_c = (float)param_1->Data[8];
    (*___glewUniformMatrix3fv)(iVar1,1,0,&local_2c);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8);
  }
  return;
}

//==== 0072a500 SetTotalTransformMatrix_0072a500 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  Normal3DShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
Normal3DShader__SetTotalTransformMatrix(Normal3DShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TotalTransformMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8);
  }
  return;
}

//==== 0072a5c0 SetTotalTransformMatrix_0072a5c0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  Normal3DShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
Normal3DShader__SetTotalTransformMatrix__o3(Normal3DShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TotalTransformMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",8);
  }
  return;
}

//==== 0072a6b0 SetTotalTransformMatrixDefault_0072a6b0 ====

/* private: static void __cdecl Normal3DShader__SetTotalTransformMatrixDefault(void) */

void __cdecl Normal3DShader__SetTotalTransformMatrixDefault(void)

{
  Normal3DShader *pNVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pNVar1 = Normal3DShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pNVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 0072a790 Setup_0072a790 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall Normal3DShader__Setup(void) */

bool __thiscall Normal3DShader__Setup(Normal3DShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Str_L_char_G_ *pSVar2;
  Normal3DShader *pNVar3;
  Darray_L_void____cdecl_P__void__G_ *pDVar4;
  int iVar5;
  undefined4 *puVar6;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  int local_10;
  ShaderStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_28.Length = 0;
  local_28.Data = (char *)0x0;
  local_28.Capacity = 0;
  this->IsReadyToUse = false;
  pSVar2 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_34,"#define THREE_DIMENSIONAL");
  local_1c.Length = 0;
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  util__Str_char___Str_char(&local_1c,pSVar2);
  util__Str_char___operator__o10(&local_1c,&this->AdditionalPreprocessor);
  util__Str_char___Str_char(&local_28,&local_1c);
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
  }
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
  }
  util__Str_char___Str_char(&local_34,"Color");
  util__Str_char___Str_char(&local_1c,"Mode__Normal");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_1c,&local_34,&local_28);
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
    (*(uint64_t*)&(local_1c)) = (*(uint64_t*)&(local_1c)) & 0xffffffff00000000;
  }
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
  }
  if (bVar1) {
    pNVar3 = Normal3DShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pNVar3);
    pDVar4 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
    local_10 = 0;
    iVar5 = (**(code **)(pDVar4->_pad_0x0_0 + 0xc))();
    if (local_10 < iVar5) {
      do {
        puVar6 = (undefined4 *)(**(code **)pDVar4->_pad_0x0_0)(&local_10);
        (*(code *)*puVar6)();
        local_10 = local_10 + 1;
        iVar5 = (**(code **)(pDVar4->_pad_0x0_0 + 0xc))();
      } while (local_10 < iVar5);
    }
    Graphics__ShaderStack___ShaderStack(&local_9);
  }
  this->IsReadyToUse = bVar1;
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  return bVar1;
}

//==== 0072aad0 AddNewWidget_OrbitUI_ ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: class util__WeakPtr_L_structOrbitUI_G_  Interface__AddNewWidget_struct_OrbitUI(class util__SharedPtr_L_structOrbitUI_G_) */

undefined4 * 
Interface__AddNewWidget_struct_OrbitUI
          (OptionsSection__Interface *this,undefined4 *param_2,UIWidget *param_3,ReferenceController *param_4)

{
  int iVar1;
  WeakPtr_L_UIWidget_G_ *pWVar2;
  bool bVar3;
  WeakPtr_L_UIWidget_G_ *pWVar4;
  ReferenceControllerRegistry *this_00;
  UIWidget *pUVar5;
  ReferenceController *pRVar6;
  ReferenceController *local_c;
  OptionsSection__Interface *local_8;
  
  local_8 = this;
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_4);
    util__ReferenceController__AddWeakReference(param_4);
  }
  iVar1 = (((struct Interface *)(uintptr_t)(local_8))->RootWidgets).Size;
  pWVar4 = (((struct Interface *)(uintptr_t)(local_8))->RootWidgets).Data;
  pWVar2 = pWVar4 + iVar1;
  for (; pWVar4 != pWVar2; pWVar4 = pWVar4 + 1) {
    if ((param_4 == pWVar4->Controller) && (param_3 == pWVar4->Pointer)) goto LAB_0072ab75;
  }
  local_c = (ReferenceController *)(iVar1 + 1);
  util__Darray_class_util__WeakPtr_class_Body_____SetSize
            ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&((struct Interface *)(uintptr_t)(local_8))->RootWidgets,(int *)&local_c);
  bVar3 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize
                    ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&((struct Interface *)(uintptr_t)(local_8))->RootWidgets,iVar1);
  if (bVar3) {
    iVar1 = (((struct Interface *)(uintptr_t)(local_8))->RootWidgets).Size;
    pWVar2 = (((struct Interface *)(uintptr_t)(local_8))->RootWidgets).Data;
    local_c = pWVar2[iVar1 + -1].Controller;
    pWVar2[iVar1 + -1].Pointer = param_3;
    pWVar2[iVar1 + -1].Controller = param_4;
    if (param_4 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(param_4);
    }
    if (local_c != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_c);
    }
  }
LAB_0072ab75:
  pUVar5 = param_3;
  pRVar6 = param_4;
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_4);
  }
  AddNewChildWidget(local_8,pUVar5,pRVar6);
  *param_2 = (undefined4)(uintptr_t)(param_3);
  param_2[1] = (undefined4)(uintptr_t)(param_4);
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_4);
    util__ReferenceController__ReleaseWeakReference(param_4);
    util__ReferenceController__ReleaseWeakReference(param_4);
    bVar3 = util__ReferenceController__ReleaseStrongReference(param_4);
    if (bVar3) {
      if (param_3 != (UIWidget *)0x0) {
        (**(code **)(param_3->_pad_0x0_0 + 4))(1);
      }
      this_00 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(this_00,param_3);
    }
  }
  return param_2;
}

//==== 0072b670 MakeTuple_util__WeakPtr_Fleet__double_ ====


/* struct util__tuple2_L_classutil__WeakPtr_L_classFleet_G__Cdouble_G_ __cdecl util__MakeTuple_L_class_util__WeakPtr_L_classFleet_G__Cdouble_G_(class util__WeakPtr_L_classFleet_G_,double) */

undefined4 * __cdecl
util__MakeTuple_class_util__WeakPtr_class_Fleet__double
          (undefined4 *param_1,undefined4 param_2,ReferenceController *param_3,undefined8 param_4)

{
  if (param_3 != (ReferenceController *)0x0) {
    util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(param_3);
  }
  *param_1 = param_2;
  param_1[1] = (undefined4)(uintptr_t)(param_3);
  if (param_3 != (ReferenceController *)0x0) {
    util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(param_3);
  }
  *(undefined8 *)(param_1 + 2) = param_4;
  if (param_3 != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(param_3);
    ReferenceController__ReleaseWeakReference(param_3);
  }
  return param_1;
}





//==== 0072ba70 Darray_util__SharedPtr_Body___ ====


/* public:  util__Darray_L_classutil__SharedPtr_L_classBody_G__G___Darray_L_class_util__SharedPtr_L_classBody_G__G_(class util__Darray_L_classutil__SharedPtr_L_classBody_G__G_ const &) */

Darray_L_class_util__SharedPtr_L_class_Body_G___G_ * 
util__Darray_class_util__SharedPtr_class_Body_____Darray_class_util__SharedPtr_class_Body
          (Darray_L_class_util__SharedPtr_L_class_Body_G___G_ *this,
          Darray_L_class_util__SharedPtr_L_class_Body_G___G_ *param_1)

{
  ReferenceController *this_00;
  bool bVar1;
  uint *puVar2;
  ReferenceControllerRegistry *this_01;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  ReferenceController *pRStack_c;
  Darray_L_class_util__SharedPtr_L_class_Body_G___G_ *pDStack_8;
  
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = (undefined **)(&vftable_48);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  pDStack_8 = this;
  pRStack_c = (ReferenceController *)(**(code **)(*(int *)param_1 + 0xc))();
  Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G___SetSize
            ((Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *)this,(int *)&pRStack_c);
  uVar4 = *(uint *)(this + 0xc);
  uVar3 = -(uint)((int)((ulonglong)uVar4 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 8);
  puVar2 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
  if (puVar2 == (uint *)0x0) {
    puVar2 = (uint *)0x0;
  }
  else {
    *puVar2 = uVar4;
    puVar2 = puVar2 + 1;
    puVar5 = puVar2;
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5 = puVar5 + 2;
    }
  }
  *(uint **)(pDStack_8 + 4) = puVar2;
  puVar5 = *(uint **)(param_1 + 4);
  if (puVar5 != puVar5 + *(int *)(param_1 + 8) * 2) {
    do {
      piVar6 = (int *)*puVar2;
      pRStack_c = (ReferenceController *)puVar2[1];
      *puVar2 = *puVar5;
      this_00 = (ReferenceController *)puVar5[1];
      puVar2[1] = (uint)this_00;
      if (this_00 != (ReferenceController *)0x0) {
        ReferenceController__AddStrongReference(this_00);
      }
      if ((pRStack_c != (ReferenceController *)0x0) &&
         (bVar1 = ReferenceController__ReleaseStrongReference(pRStack_c), bVar1)) {
        if (piVar6 != (int *)0x0) {
          (**(code **)(uintptr_t)(*piVar6 + 4))(1);
        }
        this_01 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
        ReferenceControllerRegistry__PointerWasDestroyed(this_01,piVar6);
      }
      puVar5 = puVar5 + 2;
      puVar2 = puVar2 + 2;
    } while (puVar5 != (uint *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 8));
    return pDStack_8;
  }
  return pDStack_8;
}





//==== 0072bba0 HashMap_util__WeakPtr_Fleet__double_ ====


/* public:  util__HashMap_L_classutil__WeakPtr_L_classFleet_G__Cdouble_G___HashMap_L_class_util__WeakPtr_L_classFleet_G__Cdouble_G_(int const &) */

HashMap_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G_ * 
util__HashMap_class_util__WeakPtr_class_Fleet__double___HashMap_class_util__WeakPtr_class_Fleet__double
          (HashMap_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G_ *this,int *param_1)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
  *(undefined4 *)this = 0;
  uVar5 = *param_1;
  *(uint *)(this + 4) = uVar5;
  if ((((int)uVar5 < 1) && (0x3ffffffe < (int)uVar5)) ||
     (((int)uVar5 < 0x40000000 && (-1 < (int)uVar5)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    *(undefined4 *)(this + 4) = 0;
    return this;
  }
  if (0 < (int)uVar5) {
    uVar4 = -(uint)((int)((ulonglong)uVar5 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 0x10);
    puVar2 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
    if (puVar2 == (uint *)0x0) {
      puVar2 = (uint *)0x0;
    }
    else {
      *puVar2 = uVar5;
      puVar2 = puVar2 + 1;
      puVar3 = puVar2;
      if (uVar5 != 0) {
        do {
          *puVar3 = (uint)&vftable_20;
          puVar3[1] = 0;
          puVar3[2] = 0;
          puVar3[3] = 0;
          uVar5 = uVar5 - 1;
          puVar3 = puVar3 + 4;
        } while (uVar5 != 0);
        *(uint **)this = puVar2;
        return this;
      }
    }
    *(uint **)this = puVar2;
  }
  return this;
}





//==== 0072bc60 HashMap_util__WeakPtr_Fleet__double__0072bc60 ====


/* public:  util__HashMap_L_classutil__WeakPtr_L_classFleet_G__Cdouble_G___HashMap_L_class_util__WeakPtr_L_classFleet_G__Cdouble_G_(class util__HashMap_L_classutil__WeakPtr_L_classFleet_G__Cdouble_G_
   const &) */

HashMap_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G_ * __thiscall
util__HashMap_class_util__WeakPtr_class_Fleet__double___HashMap_class_util__WeakPtr_class_Fleet__double__o2
          (HashMap_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G_ *this,
          HashMap_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G_ *param_1)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  *(undefined4 *)this = 0;
  uVar6 = *(uint *)(param_1 + 4);
  *(uint *)(this + 4) = uVar6;
  if ((((int)uVar6 < 1) && (0x3ffffffe < (int)uVar6)) ||
     (((int)uVar6 < 0x40000000 && (-1 < (int)uVar6)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\hashmap.inl",0x22,
              "Between(Capacity, 0, HASH_MAP_MAX_SIZE)",(char *)0x0);
    DebugBreak();
    uVar6 = *(uint *)(this + 4);
  }
  if (0 < (int)uVar6) {
    uVar4 = -(uint)((int)((ulonglong)uVar6 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 0x10);
    puVar3 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
    if (puVar3 == (uint *)0x0) {
      puVar3 = (uint *)0x0;
    }
    else {
      *puVar3 = uVar6;
      puVar3 = puVar3 + 1;
      puVar2 = puVar3;
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar2 = (uint)&vftable_20;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2 = puVar2 + 4;
      }
    }
    iVar5 = 0;
    *(uint **)this = puVar3;
    if (0 < *(int *)(this + 4)) {
      iVar7 = 0;
      do {
        Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G___G___op_assign
                  ((Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G___G_ *)
                   (*(int *)this + iVar7),
                   (Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G___G_ *)
                   (*(int *)param_1 + iVar7));
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + 0x10;
      } while (iVar5 < *(int *)(this + 4));
    }
    return this;
  }
  return this;
}





//==== 0072c840 operator__0072c840 ====


/* public: class util__Darray_L_structutil__tuple2_L_classutil__WeakPtr_L_classFleet_G__Cdouble_G__G_ &
    util__Darray_struct_util__tuple2_class_util__WeakPtr_class_Fleet__double_____operator(class util__Darray_L_structutil__tuple2_L_classutil__WeakPtr_L_classFleet_G__Cdouble_G__G_
   const &) */

Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G___G_ * 
util__Darray_struct_util__tuple2_class_util__WeakPtr_class_Fleet__double_____operator__o2
          (Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G___G_ *this,
          Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G___G_ *param_1)

{
  undefined8 *puVar1;
  ReferenceController *this_00;
  ReferenceController *this_01;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iStack_8;
  
  iStack_8 = (**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,&iStack_8);
  iVar2 = (**(code **)(*(int *)param_1 + 0xc))();
  if (iVar2 == 0) {
    (**(code **)(*(int *)this + 0x10))();
    return this;
  }
  CheckSizeDestructive(this);
  puVar4 = *(undefined4 **)(this + 4);
  puVar3 = *(undefined4 **)(param_1 + 4);
  if (puVar3 == puVar3 + *(int *)(param_1 + 8) * 4) {
    return this;
  }
  do {
    this_00 = (ReferenceController *)puVar4[1];
    *puVar4 = *puVar3;
    this_01 = (ReferenceController *)puVar3[1];
    puVar4[1] = (undefined4)(uintptr_t)(this_01);
    if (this_01 != (ReferenceController *)0x0) {
      util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(this_01);
    }
    if (this_00 != (ReferenceController *)0x0) {
      ReferenceController__ReleaseWeakReference(this_00);
    }
    puVar1 = (undefined8 *)(puVar3 + 2);
    puVar3 = puVar3 + 4;
    *(undefined8 *)(puVar4 + 2) = *puVar1;
    puVar4 = puVar4 + 4;
  } while (puVar3 != (undefined4 *)(*(int *)(param_1 + 8) * 0x10 + *(int *)(param_1 + 4)));
  return this;
}





//==== 0072c990 operator__0072c990 ====


/* public: class util__Darray_L_classutil__SharedPtr_L_structUIWidget_G__G_ & 
   util__Darray_class_util__SharedPtr_struct_UIWidget_____operator(class util__Darray_L_class_util__SharedPtr_L_structUIWidget_G__G_ const &) */

Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ * 
util__Darray_class_util__SharedPtr_struct_UIWidget_____operator__o2
          (Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *this,
          Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *param_1)

{
  ReferenceController *this_00;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  ReferenceControllerRegistry *this_01;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  ReferenceController *pRStack_8;
  
  pRStack_8 = (ReferenceController *)(**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,(int *)&pRStack_8);
  iVar2 = (**(code **)(*(int *)param_1 + 0xc))();
  if (iVar2 == 0) {
    (**(code **)(*(int *)this + 0x10))();
    return this;
  }
  uVar5 = *(uint *)(this + 8);
  if ((int)uVar5 < 0) {
    pRStack_8 = (ReferenceController *)0x0;
    SetSize(this,(int *)&pRStack_8);
    uVar5 = *(uint *)(this + 8);
  }
  if (0x3fffffff < (int)uVar5) {
    pRStack_8 = (ReferenceController *)0x3fffffff;
    SetSize(this,(int *)&pRStack_8);
    uVar5 = *(uint *)(this + 8);
  }
  uVar6 = *(uint *)(this + 0xc);
  if ((int)uVar6 < (int)uVar5) {
    if (uVar6 == 0) {
      *(uint *)(this + 0xc) = uVar5;
      uVar6 = uVar5;
    }
    if ((int)uVar6 < (int)uVar5) {
      do {
        uVar6 = uVar6 * 2;
      } while ((int)uVar6 < (int)uVar5);
      *(uint *)(this + 0xc) = uVar6;
    }
    if (0x3fffffff < (int)uVar6) {
      *(undefined4 *)(this + 0xc) = 0x3fffffff;
      uVar6 = 0x3fffffff;
    }
    if (*(SharedPtr_L_struct_UIWidget_G_ **)(this + 4) != (SharedPtr_L_struct_UIWidget_G_ *)0x0) {
      SharedPtr_L_struct_UIWidget_G____vector_deleting_destructor_
                (*(SharedPtr_L_struct_UIWidget_G_ **)(this + 4),3);
      uVar6 = *(uint *)(this + 0xc);
    }
    *(undefined4 *)(this + 4) = 0;
    uVar5 = -(uint)((int)((ulonglong)uVar6 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 8);
    puVar3 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar5) | uVar5 + 4);
    if (puVar3 == (uint *)0x0) {
      puVar3 = (uint *)0x0;
    }
    else {
      *puVar3 = uVar6;
      puVar3 = puVar3 + 1;
      puVar4 = puVar3;
      if (uVar6 != 0) {
        do {
          *puVar4 = 0;
          puVar4[1] = 0;
          uVar6 = uVar6 - 1;
          puVar4 = puVar4 + 2;
        } while (uVar6 != 0);
        *(uint **)(this + 4) = puVar3;
        goto LAB_0072cac4;
      }
    }
    *(uint **)(this + 4) = puVar3;
  }
  else {
    puVar3 = *(uint **)(this + 4);
  }
LAB_0072cac4:
  puVar4 = *(uint **)(param_1 + 4);
  if (puVar4 == puVar4 + *(int *)(param_1 + 8) * 2) {
    return this;
  }
  do {
    piVar7 = (int *)*puVar3;
    pRStack_8 = (ReferenceController *)puVar3[1];
    *puVar3 = *puVar4;
    this_00 = (ReferenceController *)puVar4[1];
    puVar3[1] = (uint)this_00;
    if (this_00 != (ReferenceController *)0x0) {
      ReferenceController__AddStrongReference(this_00);
    }
    if ((pRStack_8 != (ReferenceController *)0x0) &&
       (bVar1 = ReferenceController__ReleaseStrongReference(pRStack_8), bVar1)) {
      if (piVar7 != (int *)0x0) {
        (**(code **)(uintptr_t)(*piVar7 + 4))(1);
      }
      this_01 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
      ReferenceControllerRegistry__PointerWasDestroyed(this_01,piVar7);
    }
    puVar4 = puVar4 + 2;
    puVar3 = puVar3 + 2;
  } while (puVar4 != (uint *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 8));
  return this;
}





//==== 0072cb50 operator__0072cb50 ====


/* public: class util__HashMap_L_classutil__WeakPtr_L_classFleet_G__Cdouble_G_ & 
   util__HashMap_class_util__WeakPtr_class_Fleet__double___operator(class util__HashMap_L_class_util__WeakPtr_L_classFleet_G__Cdouble_G_ const &) */

HashMap_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G_ * 
util__HashMap_class_util__WeakPtr_class_Fleet__double___operator__o2
          (HashMap_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G_ *this,
          HashMap_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G_ *param_1)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar5 = *(int *)(param_1 + 4);
  *(int *)(this + 4) = iVar5;
  if (((0 < iVar5) || (iVar5 < 0x3fffffff)) && ((0x3fffffff < iVar5 || (iVar5 < 0)))) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\hashmap.inl",0x39,
              "Between(Capacity, 0, HASH_MAP_MAX_SIZE)",(char *)0x0);
    DebugBreak();
  }
  piVar1 = *(int **)this;
  if (piVar1 != (int *)0x0) {
    if (piVar1[-1] == 0) {
      port_op_delete(piVar1 + -1);
    }
    else {
      (**(code **)(uintptr_t)(*piVar1 + 0x18))(3);
    }
  }
  uVar6 = *(uint *)(this + 4);
  *(undefined4 *)this = 0;
  if (0 < (int)uVar6) {
    uVar4 = -(uint)((int)((ulonglong)uVar6 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 0x10);
    puVar3 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
    if (puVar3 == (uint *)0x0) {
      puVar3 = (uint *)0x0;
    }
    else {
      *puVar3 = uVar6;
      puVar3 = puVar3 + 1;
      puVar2 = puVar3;
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar2 = (uint)&vftable_20;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2 = puVar2 + 4;
      }
    }
    iVar5 = 0;
    *(uint **)this = puVar3;
    if (0 < *(int *)(this + 4)) {
      iVar7 = 0;
      do {
        Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G___G___op_assign
                  ((Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G___G_ *)
                   (*(int *)this + iVar7),
                   (Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G___G_ *)
                   (*(int *)param_1 + iVar7));
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + 0x10;
      } while (iVar5 < *(int *)(this + 4));
    }
    return this;
  }
  return this;
}





//==== 0072d770 scalar_deleting_destructor_0072d770 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__tuple4_L_classCraftBlueprintconst__P_Cint_Cstructutil__Range_L_double_G__Cdouble_G__G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__tuple4_class_CraftBlueprint_const__int_struct_util__Range_double__double______scalar_deleting_destructor
          (Darray_L_struct_util__tuple4_L_class_CraftBlueprint_const_P_Cint_Cstruct_util__Range_L_double_G__Cdouble_G___G_
           *this,uint param_1)

{
  *(undefined ***)this = (undefined **)(&vftable_442);
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





//==== 0072d830 scalar_deleting_destructor_0072d830 ====


/* public: virtual void * __thiscall BalloonPopupPayloadInterface:: 0 scalardeletingdestructor(unsigned int) */

void * 
BalloonPopupPayloadInterface___scalar_deleting_destructor
          (BalloonPopupPayloadInterface *this,uint param_1)

{
  *this = *(BalloonPopupPayloadInterface *)&vftable_440;
  if ((param_1 & 1) != 0) {
    port_op_delete(this,4);
  }
  return this;
}





//==== 0072dbb0 CheckSize_0072dbb0 ====


/* private: bool  util__Darray_L_structutil__tuple4_L_classCraftBlueprintconst_P_Cint_Cstruct_util__Range_L_double_G__Cdouble_G__G___CheckSize(int) */

bool 
util__Darray_struct_util__tuple4_class_CraftBlueprint_const__int_struct_util__Range_double__double_____CheckSize(Darray_L_struct_util__tuple4_L_class_CraftBlueprint_const_P_Cint_Cstruct_util__Range_L_double_G__Cdouble_G___G_
          *this,int param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined4 *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar7 = *(uint *)(this + 8);
  bVar11 = -1 < (int)uVar7;
  bVar2 = !bVar11;
  if (bVar2) {
    puStack_c = (undefined4 *)0x0;
    SetSize(this,(int *)&puStack_c);
    uVar7 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar2;
  bVar2 = (int)uVar7 < 0x40000000;
  if (!bVar2) {
    puStack_c = (undefined4 *)0x3fffffff;
    SetSize(this,(int *)&puStack_c);
    uVar7 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar9 = *(uint *)(this + 0xc);
  if ((int)uVar7 <= (int)uVar9) {
    return bVar2 && bVar11;
  }
  if (uVar9 == 0) {
    *(uint *)(this + 0xc) = uVar7;
    uVar9 = uVar7;
  }
  if ((int)uVar9 < (int)uVar7) {
    do {
      uVar9 = uVar9 * 2;
    } while ((int)uVar9 < (int)uVar7);
    *(uint *)(this + 0xc) = uVar9;
  }
  if (0x3fffffff < (int)uVar9) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar9 = 0x3fffffff;
  }
  puStack_c = (undefined4 *)
              port_op_new(-(uint)((int)((ulonglong)uVar9 * 0x20 >> 0x20) != 0) |
                             (uint)((ulonglong)uVar9 * 0x20));
  if (puStack_c == (undefined4 *)0x0) {
    puStack_c = (undefined4 *)0x0;
  }
  else if (uVar9 != 0) {
    puVar6 = puStack_c + 1;
    do {
      puVar6[-1] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      *(undefined8 *)(puVar6 + 5) = 0;
      uVar9 = uVar9 - 1;
      puVar6 = puVar6 + 8;
    } while (uVar9 != 0);
  }
  puVar6 = *(undefined4 **)(this + 4);
  if (puVar6 != (undefined4 *)0x0) {
    iVar1 = *(int *)(this + 8);
    puVar8 = puVar6;
    puVar10 = puStack_c;
    if (puVar6 != puVar6 + param_1 * 8) {
      do {
        if (puVar10 == puStack_c + iVar1 * 8) break;
        uVar3 = puVar8[1];
        uVar4 = puVar8[2];
        uVar5 = puVar8[3];
        *puVar10 = *puVar8;
        puVar10[1] = uVar3;
        puVar10[2] = uVar4;
        puVar10[3] = uVar5;
        puVar6 = puVar8 + 4;
        uVar3 = puVar8[5];
        uVar4 = puVar8[6];
        uVar5 = puVar8[7];
        puVar8 = puVar8 + 8;
        puVar10[4] = *puVar6;
        puVar10[5] = uVar3;
        puVar10[6] = uVar4;
        puVar10[7] = uVar5;
        puVar6 = *(undefined4 **)(this + 4);
        puVar10 = puVar10 + 8;
      } while (puVar8 != puVar6 + param_1 * 8);
    }
    port_op_delete(puVar6);
    *(undefined4 *)(this + 4) = 0;
  }
  *(undefined4 **)(this + 4) = puStack_c;
  return bStack_5;
}





//==== 0072dd10 CheckSizeDestructive_0072dd10 ====


/* private: bool  util__Darray_L_structutil__tuple2_L_classutil__WeakPtr_L_class_Fleet_G__Cdouble_G__G___CheckSizeDestructive(void) */

bool 
util__Darray_struct_util__tuple2_class_util__WeakPtr_class_Fleet__double_____CheckSizeDestructive
          (Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G___G_ *this)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  int *piStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  iVar7 = *(int *)(this + 8);
  bVar8 = iVar7 < 0;
  if (bVar8) {
    piStack_c = (int *)0x0;
    SetSize(this,(int *)&piStack_c);
    iVar7 = *(int *)(this + 8);
  }
  bStack_5 = !bVar8;
  if (0x3fffffff < iVar7) {
    piStack_c = (int *)0x3fffffff;
    SetSize(this,(int *)&piStack_c);
    iVar7 = *(int *)(this + 8);
    bStack_5 = false;
  }
  iVar5 = *(int *)(this + 0xc);
  if (iVar5 < iVar7) {
    if (iVar5 == 0) {
      *(int *)(this + 0xc) = iVar7;
      iVar5 = iVar7;
    }
    if (iVar5 < iVar7) {
      do {
        iVar5 = iVar5 * 2;
      } while (iVar5 < iVar7);
      *(int *)(this + 0xc) = iVar5;
    }
    if (0x3fffffff < iVar5) {
      *(undefined4 *)(this + 0xc) = 0x3fffffff;
    }
    iVar7 = *(int *)(this + 4);
    if (iVar7 != 0) {
      iVar5 = *(int *)(iVar7 + -4);
      piStack_c = (int *)(iVar7 + -4);
      if (iVar5 != 0) {
        iVar7 = iVar5 * 0x10 + 4 + iVar7;
        do {
          puVar1 = (undefined4 *)(iVar7 + -0x10);
          iVar7 = iVar7 + -0x10;
          iVar5 = iVar5 + -1;
          if ((ReferenceController *)*puVar1 != (ReferenceController *)0x0) {
            ReferenceController__ReleaseWeakReference((ReferenceController *)*puVar1);
          }
        } while (iVar5 != 0);
        iVar5 = *piStack_c;
      }
      port_op_delete(piStack_c,iVar5 * 0x10 + 4);
    }
    uVar6 = *(uint *)(this + 0xc);
    *(undefined4 *)(this + 4) = 0;
    uVar4 = -(uint)((int)((ulonglong)uVar6 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 0x10);
    puVar2 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
    if (puVar2 == (uint *)0x0) {
      puVar2 = (uint *)0x0;
    }
    else {
      *puVar2 = uVar6;
      puVar2 = puVar2 + 1;
      puVar3 = puVar2;
      if (uVar6 != 0) {
        do {
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = 0;
          puVar3[3] = 0;
          uVar6 = uVar6 - 1;
          puVar3 = puVar3 + 4;
        } while (uVar6 != 0);
        *(uint **)(this + 4) = puVar2;
        return bStack_5;
      }
    }
    *(uint **)(this + 4) = puVar2;
  }
  return bStack_5;
}





//==== 0072e070 Clear_0072e070 ====


/* public: virtual void  util__Darray_L_structutil__tuple4_L_classCraftBlueprintconst__P_Cint_Cstructutil__Range_L_double_G__Cdouble_G__G___Clear(void) */

void 
util__Darray_struct_util__tuple4_class_CraftBlueprint_const__int_struct_util__Range_double__double_____Clear(Darray_L_struct_util__tuple4_L_class_CraftBlueprint_const_P_Cint_Cstruct_util__Range_L_double_G__Cdouble_G___G_
      *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 0072e090 Clear_0072e090 ====


/* public: virtual void  util__Darray_L_structItineraryNode_G___Clear(void) */

void __thiscall util__Darray_struct_ItineraryNode___Clear(Darray_L_struct_ItineraryNode_G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 00730180 GetClassID_00730180 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual unsigned long  BalloonPopupLocationPayload__GetClassID(void)const  */

ulong BalloonPopupLocationPayload__GetClassID(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_f5cb1792__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_f5cb1792__thread_safe_static_guard_0__);
    if ( cde_l2_f5cb1792__thread_safe_static_guard_0__ == -1) {
       cde_l2_4fe6e8e9_ID = util__GetHash("BalloonPopupLocationPayload");
      _Init_thread_footer(& cde_l2_f5cb1792__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_4fe6e8e9_ID;
}





//==== 007301e0 GetClassID_007301e0 ====


/* public: virtual unsigned long __thiscall BalloonPopupPayloadInterface__GetClassID(void)const  */

ulong __thiscall BalloonPopupPayloadInterface__GetClassID(BalloonPopupPayloadInterface *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_3537ada4__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_3537ada4__thread_safe_static_guard_0__);
    if ( cde_l2_3537ada4__thread_safe_static_guard_0__ == -1) {
       cde_l2_59240d1f_ID = util__GetHash("BalloonPopupPayloadInterface");
      _Init_thread_footer(& cde_l2_3537ada4__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_59240d1f_ID;
}





//==== 00730240 GetClassID_00730240 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual unsigned long  Fleet__GetClassID(void)const  */

ulong Fleet__GetClassID(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_a9eece63__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_a9eece63__thread_safe_static_guard_0__);
    if ( cde_l2_a9eece63__thread_safe_static_guard_0__ == -1) {
       cde_l2_4fe6e8e9_ID =
           util__GetHash("Fleet");
      _Init_thread_footer(& cde_l2_a9eece63__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_4fe6e8e9_ID;
}





//==== 00733e60 IsPlayerFleet ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: bool  Fleet__IsPlayerFleet(void)const  */

bool Fleet__IsPlayerFleet(void)

{
  Faction *pFVar1;
  Faction *pFVar2;
  
  pFVar1 = (Faction *)(uintptr_t)(StrategicManager__GetPlayerAlliance());
  pFVar2 = (Faction *)(uintptr_t)(GetAlliance());
  return pFVar1 == pFVar2;
}





//==== 007348a0 SetSize_007348a0 ====


/* private: void  util__Darray_L_structutil__tuple4_L_classCraftBlueprintconst_P_Cint_Cstruct_util__Range_L_double_G__Cdouble_G__G___SetSize(int const &) */

void 
util__Darray_struct_util__tuple4_class_CraftBlueprint_const__int_struct_util__Range_double__double_____SetSize(Darray_L_struct_util__tuple4_L_class_CraftBlueprint_const_P_Cint_Cstruct_util__Range_L_double_G__Cdouble_G___G_
        *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
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
  iVar4 = 0x3fffffff;
  if (iVar2 < 0x3fffffff) {
    iVar4 = iVar2;
  }
  if (((iVar4 < *(int *)(this + 8)) && (iVar2 = *(int *)(this + 4), iVar2 != 0)) &&
     (puVar3 = (undefined4 *)(iVar4 * 0x20 + iVar2),
     puVar3 != (undefined4 *)(*(int *)(this + 8) * 0x20 + iVar2))) {
    do {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3 = puVar3 + 8;
    } while (puVar3 != (undefined4 *)(*(int *)(this + 8) * 0x20 + *(int *)(this + 4)));
  }
  *(int *)(this + 8) = iVar4;
  return;
}





//==== 007351a0 SwapRemoveAt_007351a0 ====


/* public: bool  util__Darray_L_classutil__SharedPtr_L_structUIWidget_G__G___SwapRemoveAt(int
   const &) */

bool 
util__Darray_class_util__SharedPtr_struct_UIWidget_____SwapRemoveAt
          (Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *this,int *param_1)

{
  int *piVar1;
  ReferenceController *this_00;
  ReferenceController *pRVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ReferenceControllerRegistry *pRVar6;
  int *piVar7;
  int *piVar8;
  ReferenceController *pRStack_c;
  
  iVar4 = (**(code **)(*(int *)this + 0xc))();
  if (iVar4 != 0) {
    iVar5 = (**(code **)(*(int *)this + 0xc))();
    iVar4 = *param_1;
    if (((iVar4 < 1) && (iVar5 + -1 <= iVar4)) || ((iVar4 <= iVar5 + -1 && (-1 < iVar4)))) {
      piVar7 = (int *)(*(int *)(this + 4) + iVar4 * 8);
      piVar8 = (int *)*piVar7;
      this_00 = (ReferenceController *)piVar7[1];
      piVar1 = (int *)(*(int *)(this + 4) + (*(int *)(this + 8) + -1) * 8);
      param_1 = piVar8;
      pRStack_c = this_00;
      if (this_00 != (ReferenceController *)0x0) {
        ReferenceController__AddStrongReference(this_00);
        param_1 = (int *)*piVar7;
        pRStack_c = (ReferenceController *)piVar7[1];
      }
      *piVar7 = *piVar1;
      pRVar2 = (ReferenceController *)piVar1[1];
      piVar7[1] = (int)pRVar2;
      if (pRVar2 != (ReferenceController *)0x0) {
        ReferenceController__AddStrongReference(pRVar2);
      }
      if (pRStack_c != (ReferenceController *)0x0) {
        bVar3 = ReferenceController__ReleaseStrongReference(pRStack_c);
        if (bVar3) {
          if (param_1 != (int *)0x0) {
            (**(code **)(uintptr_t)(*param_1 + 4))(1);
          }
          piVar7 = param_1;
          pRVar6 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
          ReferenceControllerRegistry__PointerWasDestroyed(pRVar6,piVar7);
        }
      }
      param_1 = (int *)*piVar1;
      pRVar2 = (ReferenceController *)piVar1[1];
      *piVar1 = (int)piVar8;
      piVar1[1] = (int)this_00;
      if (this_00 != (ReferenceController *)0x0) {
        ReferenceController__AddStrongReference(this_00);
      }
      if (pRVar2 != (ReferenceController *)0x0) {
        bVar3 = ReferenceController__ReleaseStrongReference(pRVar2);
        if (bVar3) {
          if (param_1 != (int *)0x0) {
            (**(code **)(uintptr_t)(*param_1 + 4))(1);
          }
          piVar7 = param_1;
          pRVar6 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
          ReferenceControllerRegistry__PointerWasDestroyed(pRVar6,piVar7);
        }
      }
      if (this_00 != (ReferenceController *)0x0) {
        bVar3 = ReferenceController__ReleaseStrongReference(this_00);
        if (bVar3) {
          if (piVar8 != (int *)0x0) {
            (**(code **)(uintptr_t)(*piVar8 + 4))(1);
          }
          pRVar6 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
          ReferenceControllerRegistry__PointerWasDestroyed(pRVar6,piVar8);
        }
      }
      param_1 = (int *)(*(int *)(this + 8) + -1);
      SetSize(this,(int *)&param_1);
      return true;
    }
  }
  return false;
}





//==== 00736d50 operator___00736d50 ====


/* public: struct util__tuple2_L_structItineraryNode_Cbool_G_ *  util__Maybe_L_struct_util__tuple2_L_structItineraryNode_Cbool_G__G___op_arrow(void) */

tuple2_L_struct_ItineraryNode_Cbool_G_ * 
util__Maybe_struct_util__tuple2_struct_ItineraryNode_bool_____operator
          (Maybe_L_struct_util__tuple2_L_struct_ItineraryNode_Cbool_G___G_ *this)

{
  if (*(char *)&(this[0x158]) == 0) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,"IsValid()",
              (char *)0x0);
    DebugBreak();
  }
  return (tuple2_L_struct_ItineraryNode_Cbool_G_ *)this;
}





//==== 00739550 Clear_00739550 ====

/* public: void  util__WeakPtr_L_classFleet_G___Clear(void) */

void __thiscall util__WeakPtr_class_Fleet___Clear(WeakPtr_L_class_Fleet_G_ *this)

{
  int *piVar1;
  ReferenceController *pRVar2;
  HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *pHVar3;
  undefined4 *puVar4;
  Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_ *pDVar5;
  int iVar6;
  
  pRVar2 = *(ReferenceController **)(this + 4);
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  if (pRVar2 != (ReferenceController *)0x0) {
    piVar1 = &pRVar2->WeakReferenceCount;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.cpp",
                0x15,"WeakReferenceCount >= 0",(char *)0x0);
      DebugBreak();
    }
    if ((pRVar2->StrongReferenceCount == 0) && (pRVar2->WeakReferenceCount == 0)) {
      if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_0098956c) {
        _Init_thread_header(&DAT_0098956c);
        if (DAT_0098956c == -1) {
          DAT_00989568 = (undefined4)(uintptr_t)((HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0);
          pHVar3 = (HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)(uintptr_t)(port_op_new(8));
          if (pHVar3 == (HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0) {
            pHVar3 = (HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0;
          }
          else {
            pHVar3->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                            *)0x0;
            pHVar3->Capacity = 0;
            pHVar3->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                            *)0x0;
            pHVar3->Capacity = 10000;
            puVar4 = (undefined4 *)(uintptr_t)(port_op_new(0x27104));
            if (puVar4 == (undefined4 *)0x0) {
              pHVar3->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                              *)0x0;
            }
            else {
              *puVar4 = 10000;
              iVar6 = 10000;
              pDVar5 = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                        *)(puVar4 + 1);
              do {
                pDVar5->_pad_0x0_0 =
                     (int)&vftable_554;
                pDVar5->Data = (tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)
                               0x0;
                pDVar5->Size = 0;
                pDVar5->Capacity = 0;
                iVar6 = iVar6 + -1;
                pDVar5 = pDVar5 + 1;
              } while (iVar6 != 0);
              pHVar3->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                              *)(puVar4 + 1);
            }
          }
          DAT_00989568 = (undefined4)(uintptr_t)(pHVar3);
          atexit(FUN_0090ff50);
          _Init_thread_footer(&DAT_0098956c);
        }
      }
      ReferenceControllerRegistry__Unregister((ReferenceControllerRegistry *)DAT_00989568,pRVar2);
    }
    return;
  }
  return;
}

//==== 0073f270 GetClassID_0073f270 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual unsigned long  BalloonPopupNodePayload__GetClassID(void)const  */

ulong BalloonPopupNodePayload__GetClassID(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_9a4704cb__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_9a4704cb__thread_safe_static_guard_0__);
    if ( cde_l2_9a4704cb__thread_safe_static_guard_0__ == -1) {
       cde_l2_b53e8fb1_ID = util__GetHash("BalloonPopupNodePayload");
      _Init_thread_footer(& cde_l2_9a4704cb__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_b53e8fb1_ID;
}





//==== 00744420 GetTooltip_00744420 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual class util__Str_L_char_G_  BalloonPopupNodePayload__GetTooltip(void)const
    */

Str_L_char_G_ * BalloonPopupNodePayload__GetTooltip(Str_L_char_G_ *__return_storage_ptr__)

{
  LocStr *this;
  Str_L_char_G_ *pSVar1;
  void *local_34 [3];
  void *local_28;
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char(&local_1c,"Undo");
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  this = (LocStr *)util__LocStr__LocStr((LocStr *)local_34,&local_1c,&local_10);
  pSVar1 = util__LocStr__operator__o3(this);
  util__Str_char___Str_char(__return_storage_ptr__,pSVar1);
  if (local_28 != (void *)0x0) {
    port_op_delete(local_28);
    local_28 = (void *)0x0;
  }
  if (local_34[0] != (void *)0x0) {
    port_op_delete(local_34[0]);
    local_34[0] = (void *)0x0;
  }
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
    local_10.Data = (char *)0x0;
  }
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
  }
  return __return_storage_ptr__;
}





//==== 00748380 SetWhiteNoiseTextures_AsteroidCratersShader__ ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* void __cdecl SetWhiteNoiseTextures_L_classAsteroidCratersShader_P_G_(class AsteroidCratersShader *)
    */

void __cdecl SetWhiteNoiseTextures_class_AsteroidCratersShader(AsteroidCratersShader *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  Darray_L_int_G_ local_18;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18._pad_0x0_0 = 0;
  local_18.Data = (int *)0x0;
  local_18.Size = 0;
  local_18.Capacity = 0;
  ProcGenTextureManager__GetWhiteNoiseSamplerIDs(&local_18);
  iVar1 = param_1->_pad_0x0_0;
  local_1c = 0;
  uVar2 = (**(code **)local_18._pad_0x0_0)(&local_1c);
  (**(code **)(uintptr_t)(iVar1 + 0x54))(uVar2);
  iVar1 = param_1->_pad_0x0_0;
  local_1c = 1;
  uVar2 = (**(code **)local_18._pad_0x0_0)(&local_1c);
  (**(code **)(uintptr_t)(iVar1 + 0x58))(uVar2);
  iVar1 = param_1->_pad_0x0_0;
  local_1c = 2;
  uVar2 = (**(code **)local_18._pad_0x0_0)(&local_1c);
  (**(code **)(uintptr_t)(iVar1 + 0x5c))(uVar2);
  iVar1 = param_1->_pad_0x0_0;
  local_1c = 3;
  uVar2 = (**(code **)local_18._pad_0x0_0)(&local_1c);
  (**(code **)(uintptr_t)(iVar1 + 0x60))(uVar2);
  iVar1 = param_1->_pad_0x0_0;
  local_1c = 4;
  uVar2 = (**(code **)local_18._pad_0x0_0)(&local_1c);
  (**(code **)(uintptr_t)(iVar1 + 100))(uVar2);
  iVar1 = param_1->_pad_0x0_0;
  local_1c = 5;
  uVar2 = (**(code **)local_18._pad_0x0_0)(&local_1c);
  (**(code **)(uintptr_t)(iVar1 + 0x68))(uVar2);
  iVar1 = param_1->_pad_0x0_0;
  local_1c = 6;
  uVar2 = (**(code **)local_18._pad_0x0_0)(&local_1c);
  (**(code **)(uintptr_t)(iVar1 + 0x6c))(uVar2);
  iVar1 = param_1->_pad_0x0_0;
  local_1c = 7;
  uVar2 = (**(code **)local_18._pad_0x0_0)(&local_1c);
  (**(code **)(uintptr_t)(iVar1 + 0x70))(uVar2);
  iVar1 = param_1->_pad_0x0_0;
  local_1c = 8;
  uVar2 = (**(code **)local_18._pad_0x0_0)(&local_1c);
  (**(code **)(uintptr_t)(iVar1 + 0x74))(uVar2);
  iVar1 = param_1->_pad_0x0_0;
  local_1c = 9;
  uVar2 = (**(code **)local_18._pad_0x0_0)(&local_1c);
  (**(code **)(uintptr_t)(iVar1 + 0x78))(uVar2);
  iVar1 = param_1->_pad_0x0_0;
  local_1c = 10;
  uVar2 = (**(code **)local_18._pad_0x0_0)(&local_1c);
  (**(code **)(uintptr_t)(iVar1 + 0x7c))(uVar2);
  local_18._pad_0x0_0 = (int)&vftable_11;
  if (local_18.Data != (int *)0x0) {
    port_op_delete(local_18.Data);
  }
  return;
}

//==== 00748500 vector_deleting_destructor_00748500 ====


/* public: void * __thiscall util__SharedPtr_L_structCubeMap_G_:: 0 vectordeletingdestructor(unsigned
   int) */

void * 
util__SharedPtr_struct_CubeMap____vector_deleting_destructor
          (SharedPtr_L_struct_CubeMap_G_ *this,uint param_1)

{
  SharedPtr_L_struct_CubeMap_G_ *pSVar1;
  SharedPtr_L_struct_CubeMap_G_ *pSVar2;
  SharedPtr_L_struct_CubeMap_G_ *pSVar3;
  bool bVar4;
  ReferenceControllerRegistry *pRVar5;
  int *piVar6;
  int iVar7;
  
  if ((param_1 & 2) != 0) {
    pSVar1 = this + -4;
    iVar7 = *(int *)pSVar1;
    pSVar3 = this + iVar7 * 8;
    while (iVar7 != 0) {
      pSVar2 = pSVar3 + -4;
      pSVar3 = pSVar3 + -8;
      iVar7 = iVar7 + -1;
      if ((*(ReferenceController **)pSVar2 != (ReferenceController *)0x0) &&
         (bVar4 = ReferenceController__ReleaseStrongReference(*(ReferenceController **)pSVar2),
         bVar4)) {
        piVar6 = *(int **)pSVar3;
        if (piVar6 != (int *)0x0) {
          (**(code **)(uintptr_t)(*piVar6 + 0x10))(1);
          piVar6 = *(int **)pSVar3;
        }
        pRVar5 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
        ReferenceControllerRegistry__PointerWasDestroyed(pRVar5,piVar6);
        *(int *)pSVar3 = 0;
      }
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(pSVar1,*(int *)pSVar1 * 8 + 4);
    }
    return pSVar1;
  }
  if ((*(ReferenceController **)(this + 4) != (ReferenceController *)0x0) &&
     (bVar4 = ReferenceController__ReleaseStrongReference(*(ReferenceController **)(this + 4)),
     bVar4)) {
    piVar6 = *(int **)this;
    if (piVar6 != (int *)0x0) {
      (**(code **)(uintptr_t)(*piVar6 + 0x10))(1);
      piVar6 = *(int **)this;
    }
    pRVar5 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
    ReferenceControllerRegistry__PointerWasDestroyed(pRVar5,piVar6);
    *(undefined4 *)this = 0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,8);
  }
  return this;
}





//==== 007485d0 scalar_deleting_destructor_007485d0 ====


/* public: virtual void * __thiscall util__Darray_L_structTemporaryFramebuffer_G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_TemporaryFramebuffer____scalar_deleting_destructor
          (Darray_L_struct_TemporaryFramebuffer_G_ *this,uint param_1)

{
  *(undefined ***)this = &vftable_445;
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





//==== 00748620 scalar_deleting_destructor_00748620 ====


/* public: virtual void * __thiscall util__Darray_L_classutil__SharedPtr_L_structCubeMap_G__G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_class_util__SharedPtr_struct_CubeMap______scalar_deleting_destructor
          (Darray_L_class_util__SharedPtr_L_struct_CubeMap_G___G_ *this,uint param_1)

{
  *(undefined ***)this = (undefined **)(&vftable_444);
  if (*(SharedPtr_L_struct_CubeMap_G_ **)(this + 4) != (SharedPtr_L_struct_CubeMap_G_ *)0x0) {
    SharedPtr_L_struct_CubeMap_G____vector_deleting_destructor_
              (*(SharedPtr_L_struct_CubeMap_G_ **)(this + 4),3);
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)(&vftable);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 00748660 CheckSize_00748660 ====


/* private: bool  util__Darray_L_classutil__SharedPtr_L_structCubeMap_G__G___CheckSize(int) */

bool 
util__Darray_class_util__SharedPtr_struct_CubeMap_____CheckSize
          (Darray_L_class_util__SharedPtr_L_struct_CubeMap_G___G_ *this,int param_1)

{
  uint *puVar1;
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar2;
  ReferenceControllerRegistry *this_02;
  uint uVar3;
  SharedPtr_L_struct_CubeMap_G_ *this_03;
  uint uVar4;
  uint *puVar5;
  SharedPtr_L_struct_CubeMap_G_ *pSVar6;
  bool bVar7;
  int *piVar8;
  uint *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar3 = *(uint *)(this + 8);
  bVar7 = -1 < (int)uVar3;
  bVar2 = !bVar7;
  if (bVar2) {
    puStack_c = (uint *)0x0;
    SetSize(this,(int *)&puStack_c);
    uVar3 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar2;
  bVar2 = (int)uVar3 < 0x40000000;
  if (!bVar2) {
    puStack_c = (uint *)0x3fffffff;
    SetSize(this,(int *)&puStack_c);
    uVar3 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar4 = *(uint *)(this + 0xc);
  if ((int)uVar3 <= (int)uVar4) {
    return bVar2 && bVar7;
  }
  if (uVar4 == 0) {
    *(uint *)(this + 0xc) = uVar3;
    uVar4 = uVar3;
  }
  if ((int)uVar4 < (int)uVar3) {
    do {
      uVar4 = uVar4 * 2;
    } while ((int)uVar4 < (int)uVar3);
    *(uint *)(this + 0xc) = uVar4;
  }
  if (0x3fffffff < (int)uVar4) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar4 = 0x3fffffff;
  }
  uVar3 = -(uint)((int)((ulonglong)uVar4 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 8);
  puStack_c = (uint *)port_op_new(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
  if (puStack_c == (uint *)0x0) {
    puStack_c = (uint *)0x0;
  }
  else {
    *puStack_c = uVar4;
    puStack_c = puStack_c + 1;
    puVar1 = puStack_c;
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 2;
    }
  }
  this_03 = *(SharedPtr_L_struct_CubeMap_G_ **)(this + 4);
  if (this_03 != (SharedPtr_L_struct_CubeMap_G_ *)0x0) {
    puVar1 = puStack_c + *(int *)(this + 8) * 2;
    puVar5 = puStack_c;
    pSVar6 = this_03;
    if (this_03 != this_03 + param_1 * 8) {
      do {
        if (puVar5 == puVar1) break;
        piVar8 = (int *)*puVar5;
        this_00 = (ReferenceController *)puVar5[1];
        *puVar5 = *(uint *)pSVar6;
        this_01 = *(ReferenceController **)(pSVar6 + 4);
        puVar5[1] = (uint)this_01;
        if (this_01 != (ReferenceController *)0x0) {
          ReferenceController__AddStrongReference(this_01);
        }
        if ((this_00 != (ReferenceController *)0x0) &&
           (bVar2 = ReferenceController__ReleaseStrongReference(this_00), bVar2)) {
          if (piVar8 != (int *)0x0) {
            (**(code **)(uintptr_t)(*piVar8 + 0x10))(1);
          }
          this_02 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
          ReferenceControllerRegistry__PointerWasDestroyed(this_02,piVar8);
        }
        pSVar6 = pSVar6 + 8;
        puVar5 = puVar5 + 2;
        this_03 = *(SharedPtr_L_struct_CubeMap_G_ **)(this + 4);
      } while (pSVar6 != this_03 + param_1 * 8);
    }
    if (this_03 != (SharedPtr_L_struct_CubeMap_G_ *)0x0) {
      SharedPtr_L_struct_CubeMap_G____vector_deleting_destructor_(this_03,3);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(uint **)(this + 4) = puStack_c;
  return bStack_5;
}





//==== 00748810 Clear_00748810 ====


/* public: virtual void  util__Darray_L_structTemporaryFramebuffer_G___Clear(void) */

void __thiscall
util__Darray_struct_TemporaryFramebuffer___Clear(Darray_L_struct_TemporaryFramebuffer_G_ *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  TemporaryFramebuffer TStack_c;
  
  if (0 < *(int *)(this + 8)) {
    puVar2 = *(undefined4 **)(this + 4);
    if ((puVar2 != (undefined4 *)0x0) && (puVar2 != puVar2 + *(int *)(this + 8) * 2)) {
      do {
        puVar1 = (undefined4 *)
                 TemporaryFramebuffer__TemporaryFramebuffer
                           (&TStack_c,0xffffffff,(TextureInterface *)0x0);
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        puVar2 = puVar2 + 2;
      } while (puVar2 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 8));
    }
    *(undefined4 *)(this + 8) = 0;
    return;
  }
  *(undefined4 *)(this + 8) = 0;
  return;
}





//==== 00748870 Clear_00748870 ====


/* public: virtual void  util__Darray_L_classutil__SharedPtr_L_structCubeMap_G__G___Clear(void)
    */

void 
util__Darray_class_util__SharedPtr_struct_CubeMap_____Clear
          (Darray_L_class_util__SharedPtr_L_struct_CubeMap_G___G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 00748890 ConvertEquirectangularToCubeMap ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: static void __cdecl PlanetTextureManager__ConvertEquirectangularToCubeMap(struct
   CustomTexture *,struct Type__CubeMap *,enum TextureChannels__Type) */

void __cdecl
PlanetTextureManager__ConvertEquirectangularToCubeMap
          (CustomTexture *param_1,Type__CubeMap *param_2,int param_3)

{
  undefined8 stack0xfffffffc;
  Vec4_L_int_G_ VVar1;
  Vec3_L_int_G_ VVar2;
  int iVar3;
  int iVar4;
  TemporaryFramebuffer *pTVar5;
  EquirectangularToCubeMapShader *pEVar6;
  int local_74;
  int local_70;
  int local_6c;
  CustomTexture *local_68;
  TextureStack local_64;
  TextureInitOptions local_54;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 local_20 [12];
  int iStack_14;
  int local_10;
  ShaderStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_68 = param_1;
  CustomTexture__GetSize(param_1);
  iVar3 = util__Abs(&local_28);
  iVar4 = util__Abs(&local_2c);
  if (iVar3 < iVar4) {
    local_2c = local_28;
  }
  local_54.Channels = param_3;
  local_70 = local_2c / 2;
  (*(uint32_t*)((char*)&(local_20)+8)) = (*(uint32_t*)((char*)&(local_20)+8)) & 0xffffff00;
  iStack_14 = CONCAT31((*(uint24_t*)((char*)&(iStack_14)+1)),true);
  local_54.Mipmaps.Data.MinLevel = 0;
  local_54.Mipmaps.Data.MaxLevel.Data = 0;
  (*(uint32_t *)((char *)&(local_54.Mipmaps.Data.MaxLevel) + 4)) = (*(uint32_t*)((char*)&(local_20)+8));
  (*(uint32_t *)((char *)&(local_54.Mipmaps) + 12)) = iStack_14;
  local_54.Quality = EightBit;
  local_54.TextureR = ClampToEdge;
  local_54.TextureT = ClampToEdge;
  local_54.TextureS = ClampToEdge;
  local_54.NearestFiltering = false;
  (*(uint32_t*)&(local_20)) = (uint32_t)(uintptr_t)((undefined4 *)0x0);
  (*(uint32_t*)((char*)&(local_20)+4)) = (uint32_t)(uintptr_t)((TemporaryFramebuffer *)0x0);
  (*(uint32_t*)((char*)&(local_20)+8)) = 0;
  iStack_14 = 0;
  VVar2.Y = local_70;
  VVar2.X = local_70;
  local_6c = local_70;
  CubeMap__InitializeAndGetTemporaryFramebuffers
            (param_2,(Darray_L_TemporaryFramebuffer_G_ *)local_20,VVar2,&local_54);
  *(uint32_t *)&local_24 = 0;
  local_10 = 0;
  iVar3 = (**(code **)((*(uint32_t*)&(local_20)) + 0xc))();
  if (local_10 < iVar3) {
    do {
      pTVar5 = (TemporaryFramebuffer *)(**(code **)(*(uint32_t*)&(local_20)))(&local_10);
      Graphics__TextureStack__TextureStack_struct_CustomTexture(&local_64,&local_68,0);
      pEVar6 = EquirectangularToCubeMapShader__GetStatic();
      Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pEVar6);
      local_74 = local_24;
      *(uint32_t *)&local_24 = local_24 + 1;
      pEVar6 = EquirectangularToCubeMapShader__GetStatic();
      (**(code **)(pEVar6->_pad_0x0_0 + 0x50))(&local_74);
      VVar1.Y = local_6c;
      VVar1.X = local_70;
      ProcGenTextureManager__GenerateTexture((*(Vec3_L_int_G_ *)&(VVar1)),pTVar5);
      Graphics__ShaderStack___ShaderStack(&local_9);
      Graphics__TextureStack___TextureStack(&local_64);
      local_10 = local_10 + 1;
      iVar3 = (**(code **)((*(uint32_t*)&(local_20)) + 0xc))();
    } while (local_10 < iVar3);
  }
  (*(uint32_t*)&(local_20)) = (uint32_t)(uintptr_t)(&vftable_445);
  if ((TemporaryFramebuffer *)(*(uint32_t*)((char*)&(local_20)+4)) != (TemporaryFramebuffer *)0x0) {
    port_op_delete((void *)(*(uint32_t*)((char*)&(local_20)+4)));
  }
  return;
}

//==== 00748a10 GeneratePlanetTextures ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: static void __cdecl PlanetTextureManager__GeneratePlanetTextures(struct Type__CubeMap *,struct
   Type__CubeMap *,struct Type__CubeMap *,double,bool) */

void __cdecl
PlanetTextureManager__GeneratePlanetTextures
          (Type__CubeMap *param_1,Type__CubeMap *param_2,Type__CubeMap *param_3,double param_4,bool param_5)

{
  undefined8 stack0xfffffffc;
  tuple2_L_unsigned_int_CTextureType__Type_G_ *ptVar1;
  Vec2_L_int_G_ VVar2;
  Vec2_L_int_G_ VVar3;
  Vec2_L_int_G_ VVar4;
  Vec2_L_int_G_ VVar5;
  Vec2_L_int_G_ VVar6;
  Vec2_L_int_G_ VVar7;
  tuple2_L_unsigned_int_CTextureType__Type_G_ tVar8;
  Vec2_L_int_G_ VVar9;
  bool bVar10;
  int iVar11;
  CustomTexture **ppCVar12;
  AsteroidCratersShader *pAVar13;
  Stack_L_util__tuple2_L_unsigned_int_CTextureType__Type_G___G_ *this;
  AsteroidDiffuseShader *pAVar14;
  Vec2_L_double_G_ *pVVar15;
  TemporaryFramebuffer *pTVar16;
  AsteroidHeightShader *pAVar17;
  AsteroidNormalShader *pAVar18;
  uint uVar19;
  int iVar20;
  code *pcVar21;
  uint uVar22;
  int iVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  Vec2_L_int_G_ VVar26;
  TextureInterface *in_stack_00000010;
  Vec2_L_double_G_ local_100;
  double local_f0;
  Type__CubeMap *local_e8;
  Darray_L_TemporaryFramebuffer_G_ local_e4;
  Darray_L_TemporaryFramebuffer_G_ local_d4;
  Darray_L_TemporaryFramebuffer_G_ local_c4;
  int local_b4;
  int local_b0;
  TextureStack local_ac;
  CustomTexture local_9c [2];
  TextureInitOptions local_60;
  Maybe_L_TemporaryFramebuffer_G_ local_38;
  uint local_2c;
  Type__CubeMap *local_28;
  TextureStack local_24;
  BlendStack local_11;
  ShaderStack local_10;
  ShaderStack local_f;
  ShaderStack local_e;
  ShaderStack local_d;
  Type__CubeMap *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = param_1;
  local_e8 = param_2;
  local_28 = param_3;
  bVar10 = CustomTexture__IsInitialized((CustomTexture *)param_1);
  pcVar21 = DebugBreak_exref;
  if (((bVar10) || (bVar10 = CustomTexture__IsInitialized((CustomTexture *)param_2), bVar10)) ||
     (bVar10 = CustomTexture__IsInitialized((CustomTexture *)param_3), bVar10)) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\planettextures.cpp",0x51,
                    "!DiffuseTexture->IsInitialized() && !NormalTexture->IsInitialized() && !HeightTexture->IsInitialized()"
                    ,(char *)0x0);
    DebugBreak();
  }
  local_24.StoredChannels._pad_0x0_0 = 0;
  local_24.StoredChannels.Data = (int *)0x0;
  local_24.StoredChannels.Size = local_24.StoredChannels.Size & 0xffffff00;
  local_24.StoredChannels.Capacity = CONCAT31((*(uint24_t *)((char *)&(local_24.StoredChannels.Capacity) + 1)),1);
  local_60.Quality = EightBit;
  local_60.TextureR = ClampToEdge;
  local_60.Mipmaps.Data.MinLevel = 0;
  local_60.Mipmaps.Data.MaxLevel.Data = 0;
  (*(uint32_t *)((char *)&(local_60.Mipmaps.Data.MaxLevel) + 4)) = local_24.StoredChannels.Size;
  (*(uint32_t *)((char *)&(local_60.Mipmaps) + 12)) = local_24.StoredChannels.Capacity;
  local_60.TextureT = ClampToEdge;
  local_60.TextureS = ClampToEdge;
  local_60.NearestFiltering = false;
  local_60.Channels = RGB;
  local_b4 = 0x200;
  local_b0 = 0x200;
  if ((*(uint8_t*)((char*)&(param_4)+4)) == '\0') {
    (*(uint32_t*)((char*)&(local_38)+8)) = (*(uint32_t*)&(param_4));
    local_38.Data.Target = in_stack_00000010;
    local_f0 = util__Abs((double *)&local_38.Data.Target);
    uVar24 = SUB84(local_f0,0);
    uVar25 = (undefined4)((ulonglong)local_f0 >> 0x20);
    if (local_f0 == 0.0) {
      uVar22 = 0xffffffff;
    }
    else {
      libm_sse2_log10_precise(0.0);
      local_f0 = (double)CONCAT44(uVar25,uVar24);
      local_f0 = util__Floor(&local_f0);
      uVar22 = ~(int)local_f0;
    }
    uVar22 = uVar22 + 3;
    if ((int)uVar22 < 1) {
      uVar22 = 0;
    }
    uVar19 = 2;
    if ((int)uVar22 < 2) {
      uVar19 = uVar22;
    }
  }
  else {
    uVar19 = 0;
    local_b4 = 0x200;
  }
  uVar22 = (int)uVar19 >> 0x1f;
  iVar23 = (uVar22 & 0xfffffffe) + 2;
  iVar11 = (uVar19 ^ uVar22) - uVar22;
  if (iVar11 == 0) {
    iVar20 = 1;
  }
  else {
    iVar20 = iVar23;
    if ((iVar11 != 1) && (iVar11 = iVar11 + -1, 0 < iVar11)) {
      do {
        iVar20 = iVar20 * iVar23;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
  }
  local_b4 = local_b4 / iVar20;
  local_b0 = local_b0 / iVar20;
  Graphics__BlendStack__BlendStack(&local_11,BlendMode__Disabled);
  iVar23 = 1;
  iVar11 = ProcGenTextureManager__GetWhiteNoiseTextureCount();
  ppCVar12 = ProcGenTextureManager__GetWhiteNoiseTextures();
  Graphics__TextureStack__TextureStack(&local_ac,ppCVar12,iVar11,iVar23);
  local_e4._pad_0x0_0 = 0;
  local_e4.Data = (TemporaryFramebuffer *)0x0;
  local_e4.Size = 0;
  local_e4.Capacity = 0;
  VVar26.Y = local_b0;
  VVar26.X = local_b4;
  CubeMap__InitializeAndGetTemporaryFramebuffers(local_c,&local_e4,(*(Vec3_L_int_G_ *)&(VVar26)),&local_60);
  local_d4._pad_0x0_0 = 0;
  local_d4.Data = (TemporaryFramebuffer *)0x0;
  local_d4.Size = 0;
  local_d4.Capacity = 0;
  VVar4.Y = local_b0;
  VVar4.X = local_b4;
  CubeMap__InitializeAndGetTemporaryFramebuffers(local_28,&local_d4,(*(Vec3_L_int_G_ *)&(VVar4)),&local_60);
  local_c4._pad_0x0_0 = 0;
  local_c4.Data = (TemporaryFramebuffer *)0x0;
  local_c4.Size = 0;
  local_c4.Capacity = 0;
  VVar5.Y = local_b0;
  VVar5.X = local_b4;
  CubeMap__InitializeAndGetTemporaryFramebuffers(local_e8,&local_c4,(*(Vec3_L_int_G_ *)&(VVar5)),&local_60);
  local_c = (Type__CubeMap *)0x0;
  do {
    CustomTexture__CustomTexture(local_9c);
    VVar6.Y = local_b0;
    VVar6.X = local_b4;
    CustomTexture__InitializeAndGetTemporaryFramebuffer(local_9c,&local_38,(*(Vec3_L_int_G_ *)&(VVar6)),&local_60);
    if (local_38.IsValidData != false) {
      pAVar13 = AsteroidCratersShader__GetStatic();
      Graphics__ShaderStack__ShaderStack(&local_d,(Shader *)pAVar13);
      pAVar13 = AsteroidCratersShader__GetStatic();
      (**(code **)(pAVar13->_pad_0x0_0 + 0x4c))(&local_b4);
      pAVar13 = AsteroidCratersShader__GetStatic();
      SetWhiteNoiseTextures_class_AsteroidCratersShader(pAVar13);
      pAVar13 = AsteroidCratersShader__GetStatic();
      iVar11 = pAVar13->_pad_0x0_0;
      VVar26 = ProcGenTextureManager__GetRandomIntegralOffset();
      (**(code **)(uintptr_t)(iVar11 + 0x50))(VVar26.X);
      if (local_38.IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        (*pcVar21)();
      }
      VVar7.Y = local_b0;
      VVar7.X = local_b4;
      ProcGenTextureManager__GenerateTexture((*(Vec3_L_int_G_ *)&(VVar7)),&local_38.Data);
      Graphics__ShaderStack___ShaderStack(&local_d);
    }
    local_24.StoredChannels._pad_0x0_0 = (int)&vftable_11;
    local_24.StoredChannels.Data = (int *)0x0;
    local_24.StoredChannels.Size = 0;
    local_24.StoredChannels.Capacity = 1;
    local_24.StoredChannels.Data = (int *)(uintptr_t)(port_op_new(4));
    iVar11 = local_24.StoredChannels.Size;
    if (local_24.StoredChannels.Data == (int *)0x0) {
      local_24.StoredChannels.Data = (int *)0x0;
    }
    else {
      *local_24.StoredChannels.Data = 0;
    }
    iVar23 = 0;
    if (0 < local_24.StoredChannels.Capacity) {
      do {
        local_24.StoredChannels.Data[iVar23] = 0;
        iVar23 = iVar23 + 1;
      } while (iVar23 < local_24.StoredChannels.Capacity);
    }
    local_e8 = (Type__CubeMap *)(local_24.StoredChannels.Size + 1);
    util__Darray_L_util__Reflectable_P_G___SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&local_24,(int *)&local_e8);
    bVar10 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                       ((Darray_L_GraphicsResource__Type_G_ *)&local_24,iVar11);
    if (bVar10) {
      local_24.StoredChannels.Data[local_24.StoredChannels.Size - 1] = 0;
    }
    Graphics__TextureStack__PeekState((int)&local_2c);
    local_e8 = (Type__CubeMap *)(**(code **)(uintptr_t)(local_9c[0]._pad_0x0_0 + 0x18))();
    uVar22 = (**(code **)(uintptr_t)(local_9c[0]._pad_0x0_0 + 0x14))();
    this = (Stack_L_util__tuple2_L_unsigned_int_CTextureType__Type_G___G_ *)(Graphics__TextureStack__GetStack(0));
    iVar23 = this->Size;
    iVar11 = iVar23 + 1;
    this->Size = iVar11;
    this->EndData = this->Data + iVar11;
    bVar10 = util__Stack_L_util__tuple2_L_unsigned_int_CTextureType__Type_G___G___CheckSize(this,iVar23);
    if (bVar10) {
      ptVar1 = this->Data;
      iVar11 = this->Size;
      ptVar1[iVar11 + -1].Value1 = uVar22;
      ptVar1[iVar11 + -1].Value2 = (int)local_e8;
    }
    tVar8.Value2 = (int)local_28;
    tVar8.Value1 = local_2c;
    Graphics__TextureStack__AlterState(&local_24,*(int *)&(tVar8),0);
    pAVar14 = AsteroidDiffuseShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_e,(Shader *)pAVar14);
    pAVar14 = AsteroidDiffuseShader__GetStatic();
    (**(code **)(pAVar14->_pad_0x0_0 + 0x4c))(&local_b4);
    pAVar14 = AsteroidDiffuseShader__GetStatic();
    SetWhiteNoiseTextures_class_ParticleShader((ParticleShader *)pAVar14);
    pAVar14 = AsteroidDiffuseShader__GetStatic();
    iVar11 = pAVar14->_pad_0x0_0;
    pVVar15 = ProcGenTextureManager__GetRandomOffset(&local_100);
    (**(code **)(uintptr_t)(iVar11 + 0x50))(pVVar15);
    pTVar16 = (TemporaryFramebuffer *)(**(code **)local_e4._pad_0x0_0)(&local_c);
    VVar3.Y = local_b0;
    VVar3.X = local_b4;
    ProcGenTextureManager__GenerateTexture((*(Vec3_L_int_G_ *)&(VVar3)),pTVar16);
    Graphics__ShaderStack___ShaderStack(&local_e);
    pAVar17 = AsteroidHeightShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_f,(Shader *)pAVar17);
    pAVar17 = AsteroidHeightShader__GetStatic();
    (**(code **)(pAVar17->_pad_0x0_0 + 0x4c))(&local_b4);
    pTVar16 = (TemporaryFramebuffer *)(**(code **)local_d4._pad_0x0_0)(&local_c);
    VVar2.Y = local_b0;
    VVar2.X = local_b4;
    ProcGenTextureManager__GenerateTexture((*(Vec3_L_int_G_ *)&(VVar2)),pTVar16);
    Graphics__ShaderStack___ShaderStack(&local_f);
    pAVar18 = AsteroidNormalShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_10,(Shader *)pAVar18);
    pAVar18 = AsteroidNormalShader__GetStatic();
    (**(code **)(pAVar18->_pad_0x0_0 + 0x50))(&local_c);
    pAVar18 = AsteroidNormalShader__GetStatic();
    (**(code **)(pAVar18->_pad_0x0_0 + 0x4c))(&local_b4);
    pTVar16 = (TemporaryFramebuffer *)(**(code **)local_c4._pad_0x0_0)(&local_c);
    VVar9.Y = local_b0;
    VVar9.X = local_b4;
    ProcGenTextureManager__GenerateTexture((*(Vec3_L_int_G_ *)&(VVar9)),pTVar16);
    Graphics__ShaderStack___ShaderStack(&local_10);
    Graphics__TextureStack___TextureStack(&local_24);
    local_9c[0]._pad_0x0_0 = (int)&vftable_141;
    CustomTexture__Destroy(local_9c);
    GraphicsResourceInterface___GraphicsResourceInterface((GraphicsResourceInterface *)local_9c);
    local_c = (Type__CubeMap *)((int)&((struct Actor *)(uintptr_t)(local_c))->_pad_0x0_0 + 1);
    pcVar21 = DebugBreak_exref;
  } while ((int)local_c < 6);
  local_c4._pad_0x0_0 = (int)&vftable_445;
  if (local_c4.Data != (TemporaryFramebuffer *)0x0) {
    port_op_delete(local_c4.Data);
  }
  local_c4.Data = (TemporaryFramebuffer *)0x0;
  local_c4._pad_0x0_0 = (int)&vftable;
  local_d4._pad_0x0_0 = (int)&vftable_445;
  if (local_d4.Data != (TemporaryFramebuffer *)0x0) {
    port_op_delete(local_d4.Data);
  }
  local_d4.Data = (TemporaryFramebuffer *)0x0;
  local_d4._pad_0x0_0 = (int)&vftable;
  local_e4._pad_0x0_0 = (int)&vftable_445;
  if (local_e4.Data != (TemporaryFramebuffer *)0x0) {
    port_op_delete(local_e4.Data);
  }
  local_e4.Data = (TemporaryFramebuffer *)0x0;
  local_e4._pad_0x0_0 = (int)&vftable;
  Graphics__TextureStack___TextureStack(&local_ac);
  BlendStack__dtor(&local_11);
  return;
}

//==== 00749040 GetCityLightsTexture ====


/* public: static class util__WeakPtr_L_structCubeMap_G_ __cdecl
   PlanetTextureManager__GetCityLightsTexture(int) */

void __cdecl PlanetTextureManager__GetCityLightsTexture(int)

{
  undefined8 stack0x00000008;
  undefined8 stack0xfffffffc;
  Vec4_L_int_G_ VVar1;
  Vec2_L_int_G_ VVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  Type__CubeMap *pCVar6;
  int *piVar7;
  ReferenceControllerRegistry *pRVar8;
  ReferenceController *pRVar9;
  TemporaryFramebuffer *pTVar10;
  CustomTexture **ppCVar11;
  CityLightsShader *pCVar12;
  Vec2_L_double_G_ *pVVar13;
  code *pcVar14;
  int in_stack_00000008;
  int iVar15;
  int *piVar16;
  Vec2_L_double_G_ VStack_94;
  undefined8 uStack_84;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 *puStack_6c;
  ReferenceController *pRStack_68;
  int iStack_64;
  int iStack_60;
  TextureInitOptions *pTStack_5c;
  TextureStack TStack_58;
  undefined1 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined **ppuStack_20;
  void *pvStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  BlendStack BStack_e;
  ShaderStack SStack_d;
  ReferenceController *pRStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  puStack_6c = (undefined4 *)param_1;
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_00981a98) &&
     (_Init_thread_header(&DAT_00981a98), DAT_00981a98 == -1)) {
    puVar5 = (undefined4 *)port_op_new(0x1c);
    if (puVar5 == (undefined4 *)0x0) {
      DAT_0095f46c = (undefined4)(uintptr_t)((undefined4 *)0x0);
    }
    else {
      *puVar5 = 3;
      iVar4 = 3;
      DAT_0095f46c = (undefined4)(uintptr_t)(puVar5 + 1);
      puVar5 = (undefined4 *)(uintptr_t)(DAT_0095f46c);
      do {
        *puVar5 = 0;
        puVar5[1] = 0;
        iVar4 = iVar4 + -1;
        puVar5 = puVar5 + 2;
      } while (iVar4 != 0);
    }
    iVar4 = 0;
    if (0 < DAT_0095f474) {
      do {
        puVar5 = (undefined4 *)(uintptr_t)(DAT_0095f46c);
        pRVar9 = (ReferenceController *)(*(undefined4 *)(0x0095f46cu + (iVar4 * 2 + 1) * 4));
        piVar7 = (int *)(*(undefined4 *)(0x0095f46cu + (iVar4 * 2) * 4));
        (*(undefined4 *)(0x0095f46cu + (iVar4 * 2) * 4)) = 0;
        puVar5[iVar4 * 2 + 1] = 0;
        if ((pRVar9 != (ReferenceController *)0x0) &&
           (bVar3 = util__ReferenceController__ReleaseStrongReference(pRVar9), bVar3)) {
          if (piVar7 != (int *)0x0) {
            (**(code **)(uintptr_t)(*piVar7 + 0x10))(1);
          }
          pRVar8 = util__ReferenceControllerRegistry__Get();
          util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar8,piVar7);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < DAT_0095f474);
    }
    atexit(FUN_00903810);
    _Init_thread_footer(&DAT_00981a98);
  }
  pcVar14 = DebugBreak_exref;
  if (((0 < in_stack_00000008) || (in_stack_00000008 < 3)) &&
     ((3 < in_stack_00000008 || (in_stack_00000008 < 0)))) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\planettextures.cpp",0x25,
                    "Between(ID, 0, GetCityLightsTextureCount())",(char *)0x0);
    DebugBreak();
  }
  if (DAT_0095f470 == 0) {
LAB_0074910a:
    iStack_64 = 0;
    util__Darray_class_util__SharedPtr_struct_CubeMap_____SetSize
              ((Darray_L_class_util__SharedPtr_L_struct_CubeMap_G___G_ *)&PTR__vftable__0095f468,&iStack_64)
    ;
    iStack_64 = 3;
    do {
      pCVar6 = (Type__CubeMap *)port_op_new(0x38);
      if (pCVar6 == (Type__CubeMap *)0x0) {
        piVar7 = (int *)0x0;
LAB_00749145:
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                        ,0xd4,"NewPointer",(char *)0x0);
        (*pcVar14)();
      }
      else {
        piVar7 = (int *)CubeMap__CubeMap(pCVar6);
        if (piVar7 == (int *)0x0) goto LAB_00749145;
      }
      piVar16 = piVar7;
      pRVar8 = util__ReferenceControllerRegistry__Get();
      pRVar9 = util__ReferenceControllerRegistry__Register(pRVar8,piVar16);
      if (pRVar9 != (ReferenceController *)0x0) {
        util__ReferenceController__AddStrongReference(pRVar9);
      }
      iVar4 = DAT_0095f470;
      pRStack_c = (ReferenceController *)(DAT_0095f470 + 1);
      util__Darray_class_util__SharedPtr_struct_CubeMap_____SetSize
                ((Darray_L_class_util__SharedPtr_L_struct_CubeMap_G___G_ *)&PTR__vftable__0095f468,
                 (int *)&pRStack_c);
      bVar3 = util__Darray_class_util__SharedPtr_struct_CubeMap_____CheckSize
                        ((Darray_L_class_util__SharedPtr_L_struct_CubeMap_G___G_ *)&PTR__vftable__0095f468,
                         iVar4);
      iVar4 = DAT_0095f470;
      puVar5 = (undefined4 *)(uintptr_t)(DAT_0095f46c);
      if (bVar3) {
        pRStack_c = (ReferenceController *)(*(undefined4 *)(0x0095f46cu + (DAT_0095f470 * 2 + -1) * 4));
        piVar16 = (int *)(*(undefined4 *)(0x0095f46cu + (DAT_0095f470 * 2 + -2) * 4));
        (*(undefined4 *)(0x0095f46cu + (DAT_0095f470 * 2 + -2) * 4)) = (undefined4)(uintptr_t)piVar7;
        puVar5[iVar4 * 2 + -1] = (undefined4)(uintptr_t)(pRVar9);
        if (pRVar9 != (ReferenceController *)0x0) {
          util__ReferenceController__AddStrongReference(pRVar9);
        }
        if ((pRStack_c != (ReferenceController *)0x0) &&
           (bVar3 = util__ReferenceController__ReleaseStrongReference(pRStack_c), bVar3)) {
          if (piVar16 != (int *)0x0) {
            (**(code **)(uintptr_t)(*piVar16 + 0x10))(1);
          }
          pRVar8 = util__ReferenceControllerRegistry__Get();
          util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar8,piVar16);
        }
      }
      if ((pRVar9 != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__ReleaseStrongReference(pRVar9), bVar3)) {
        if (piVar7 != (int *)0x0) {
          (**(code **)(uintptr_t)(*piVar7 + 0x10))(1);
        }
        pRVar8 = util__ReferenceControllerRegistry__Get();
        util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar8,piVar7);
      }
      if (DAT_0095f470 < 1) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3c,
                        "Size > 0",(char *)0x0);
        DebugBreak();
      }
      pCVar6 = (Type__CubeMap *)(*(undefined4 *)(0x0095f46cu + (DAT_0095f470 * 2 + -2) * 4));
      pRVar9 = (ReferenceController *)(*(undefined4 *)(0x0095f46cu + (DAT_0095f470 * 2 + -1) * 4));
      pRStack_68 = pRVar9;
      if (pRVar9 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar9);
      }
      uStack_7c = 0;
      uStack_78 = 0;
      uStack_74 = uStack_74 & 0xffffff00;
      uStack_70 = CONCAT31((*(uint24_t*)((char*)&(uStack_70)+1)),1);
      uStack_38 = 0;
      uStack_24 = 0;
      uStack_3c = 1;
      uStack_40 = 1;
      uStack_44 = 1;
      uStack_48 = 0;
      iStack_60 = 0x200;
      pTStack_5c = (TextureInitOptions *)0x200;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = uStack_74;
      uStack_28 = uStack_70;
      ppuStack_20 = (undefined **)0x0;
      pvStack_1c = (void *)0x0;
      uStack_18 = 0;
      uStack_14 = 0;
      if ((pRVar9 != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid(pRVar9), !bVar3)) {
        pCVar6 = (Type__CubeMap *)0x0;
      }
      VVar2.Y = iStack_60;
      VVar2.X = (int)&ppuStack_20;
      CubeMap__InitializeAndGetTemporaryFramebuffers(pCVar6,(Darray_L_TemporaryFramebuffer_G_ *)&uStack_24,(*(Vec3_L_int_G_ *)&VVar2),pTStack_5c);
      pRStack_c = (ReferenceController *)0x0;
      iVar4 = (*(code *)ppuStack_20[3])();
      if ((int)pRStack_c < iVar4) {
        do {
          pTVar10 = (TemporaryFramebuffer *)(*(code *)*ppuStack_20)(&pRStack_c);
          Graphics__BlendStack__BlendStack(&BStack_e,BufferComposite__Overwrite);
          iVar15 = 1;
          iVar4 = ProcGenTextureManager__GetWhiteNoiseTextureCount();
          ppCVar11 = ProcGenTextureManager__GetWhiteNoiseTextures();
          Graphics__TextureStack__TextureStack(&TStack_58,ppCVar11,iVar4,iVar15);
          pCVar12 = CityLightsShader__GetStatic();
          Graphics__ShaderStack__ShaderStack(&SStack_d,(Shader *)pCVar12);
          uStack_84 = 0x3ff0000000000000;
          pCVar12 = CityLightsShader__GetStatic();
          (**(code **)(pCVar12->_pad_0x0_0 + 0x84))(&uStack_84);
          pCVar12 = CityLightsShader__GetStatic();
          (**(code **)(pCVar12->_pad_0x0_0 + 0x4c))(&iStack_60);
          pCVar12 = CityLightsShader__GetStatic();
          iVar4 = pCVar12->_pad_0x0_0;
          pVVar13 = ProcGenTextureManager__GetRandomOffset(&VStack_94);
          (**(code **)(uintptr_t)(iVar4 + 0x50))(pVVar13);
          pCVar12 = CityLightsShader__GetStatic();
          SetWhiteNoiseTextures_L_class_ParticleShader_P_G_((ParticleShader *)pCVar12);
          VVar1.Y = (int)pTStack_5c;
          VVar1.X = iStack_60;
          ProcGenTextureManager__GenerateTexture((*(Vec3_L_int_G_ *)&(VVar1)),pTVar10);
          Graphics__ShaderStack___ShaderStack(&SStack_d);
          Graphics__TextureStack___TextureStack(&TStack_58);
          BlendStack__dtor(&BStack_e);
          pRStack_c = (ReferenceController *)((int)&pRStack_c->StrongReferenceCount + 1);
          iVar4 = (*(code *)ppuStack_20[3])();
          pRVar9 = pRStack_68;
        } while ((int)pRStack_c < iVar4);
      }
      ppuStack_20 = &vftable_445;
      if (pvStack_1c != (void *)0x0) {
        port_op_delete(pvStack_1c);
      }
      pvStack_1c = (void *)0x0;
      ppuStack_20 = (undefined **)(&vftable);
      if (pRVar9 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(pRVar9);
      }
      iStack_64 = iStack_64 + -1;
      pcVar14 = DebugBreak_exref;
    } while (iStack_64 != 0);
  }
  else {
    pRStack_c = (ReferenceController *)0x0;
    iVar4 = (**(code **)(uintptr_t)(PTR__vftable__0095f468 + 0xc))();
    if ((int)pRStack_c < iVar4) {
      do {
        puVar5 = (undefined4 *)(**(code **)PTR__vftable__0095f468)(&pRStack_c);
        bVar3 = CustomTexture__IsInitialized((CustomTexture *)*puVar5);
        if (!bVar3) goto LAB_0074910a;
        pRStack_c = (ReferenceController *)((int)&pRStack_c->StrongReferenceCount + 1);
        iVar4 = (**(code **)(uintptr_t)(PTR__vftable__0095f468 + 0xc))();
      } while ((int)pRStack_c < iVar4);
    }
  }
  iVar4 = (int)((ulonglong)((longlong)in_stack_00000008 * 0x55555555) >> 0x20) - in_stack_00000008;
  in_stack_00000008 = ((iVar4 >> 1) - (iVar4 >> 0x1f)) * 3 + in_stack_00000008;
  puVar5 = (undefined4 *)(**(code **)PTR__vftable__0095f468)(&stack0x00000008);
  *puStack_6c = *puVar5;
  pRVar9 = (ReferenceController *)puVar5[1];
  puStack_6c[1] = (undefined4)(uintptr_t)(pRVar9);
  if (pRVar9 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar9);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00749550 PreGenerate ====


/* public: static void __cdecl PlanetTextureManager__PreGenerate(void) */

void __cdecl PlanetTextureManager__PreGenerate(void)

{
  int iVar1;
  undefined1 auStack_c [4];
  ReferenceController *pRStack_8;
  
  iVar1 = 0;
  do {
    GetCityLightsTexture((int)auStack_c);
    if (pRStack_8 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRStack_8);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return;
}





//==== 00749590 SetAll_00749590 ====


/* public: virtual void  util__Darray_L_classutil__SharedPtr_L_structCubeMap_G___G___SetAll(class util__SharedPtr_L_structCubeMap_G_ const &) */

void 
util__Darray_class_util__SharedPtr_struct_CubeMap_____SetAll
          (Darray_L_class_util__SharedPtr_L_struct_CubeMap_G___G_ *this,SharedPtr_L_struct_CubeMap_G_ *param_1)

{
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar1;
  ReferenceControllerRegistry *this_02;
  int *piVar2;
  int *piVar3;
  
  piVar2 = *(int **)(this + 4);
  if (piVar2 != piVar2 + *(int *)(this + 8) * 2) {
    do {
      piVar3 = (int *)*piVar2;
      this_00 = (ReferenceController *)piVar2[1];
      *piVar2 = *(int *)param_1;
      this_01 = *(ReferenceController **)(param_1 + 4);
      piVar2[1] = (int)this_01;
      if (this_01 != (ReferenceController *)0x0) {
        ReferenceController__AddStrongReference(this_01);
      }
      if ((this_00 != (ReferenceController *)0x0) &&
         (bVar1 = ReferenceController__ReleaseStrongReference(this_00), bVar1)) {
        if (piVar3 != (int *)0x0) {
          (**(code **)(uintptr_t)(*piVar3 + 0x10))(1);
        }
        this_02 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
        ReferenceControllerRegistry__PointerWasDestroyed(this_02,piVar3);
      }
      piVar2 = piVar2 + 2;
    } while (piVar2 != (int *)(*(int *)(this + 4) + *(int *)(this + 8) * 8));
  }
  return;
}





//==== 00749620 SetSize_00749620 ====


/* private: void  util__Darray_L_classutil__SharedPtr_L_structCubeMap_G__G___SetSize(int const
   &) */

void 
util__Darray_class_util__SharedPtr_struct_CubeMap_____SetSize
          (Darray_L_class_util__SharedPtr_L_struct_CubeMap_G___G_ *this,int *param_1)

{
  ReferenceController *this_00;
  bool bVar1;
  int iVar2;
  ReferenceControllerRegistry *this_01;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
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
     (piVar4 = (int *)(iVar2 + iVar3 * 8), piVar4 != (int *)(iVar2 + *(int *)(this + 8) * 8))) {
    do {
      this_00 = (ReferenceController *)piVar4[1];
      piVar5 = (int *)*piVar4;
      *piVar4 = 0;
      piVar4[1] = 0;
      if ((this_00 != (ReferenceController *)0x0) &&
         (bVar1 = ReferenceController__ReleaseStrongReference(this_00), bVar1)) {
        if (piVar5 != (int *)0x0) {
          (**(code **)(uintptr_t)(*piVar5 + 0x10))(1);
        }
        this_01 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
        ReferenceControllerRegistry__PointerWasDestroyed(this_01,piVar5);
      }
      piVar4 = piVar4 + 2;
    } while (piVar4 != (int *)(*(int *)(this + 4) + *(int *)(this + 8) * 8));
    *(int *)(this + 8) = iVar3;
    return;
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 00749700 GetTypeName_00749700 ====


/* public: virtual class util__Str_L_char_G_  LaunchProtocol__ReflectionInfoStruct_struct_LaunchProtocol___GetTypeName(void)const  */

Str_L_char_G_ * 
LaunchProtocol__ReflectionInfoStruct_struct_LaunchProtocol___GetTypeName
          (ReflectionInfoStruct_L_struct_LaunchProtocol_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"LaunchProtocol");
  return __return_storage_ptr__;
}





//==== 00749720 GetMembers_00749720 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   LaunchProtocol__ReflectionInfoStruct_struct_LaunchProtocol___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
LaunchProtocol__ReflectionInfoStruct_struct_LaunchProtocol___GetMembers__o2
          (ReflectionInfoStruct_L_struct_LaunchProtocol_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_49689087__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_49689087__thread_safe_static_guard_0__),
      cde_l2_49689087__thread_safe_static_guard_0__ == -1)) {
     cde_l2_3433cb3d_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_49689087__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_3433cb3d_Count);
  iVar3 = 0;
  if (0 <  cde_l2_3433cb3d_Count) {
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
    } while (iVar3 <  cde_l2_3433cb3d_Count);
  }
  return in_stack_00000004;
}





//==== 00749860 GetMember_00749860 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   LaunchProtocol__ReflectionInfoStruct_struct_LaunchProtocol___GetMember(class util__Str_L_char_G_
   const &)const  */

Str_L_char_G_ * 
LaunchProtocol__ReflectionInfoStruct_struct_LaunchProtocol___GetMember__o2
          (ReflectionInfoStruct_L_struct_LaunchProtocol_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_c92fec29__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_c92fec29__thread_safe_static_guard_0__),
      cde_l2_c92fec29__thread_safe_static_guard_0__ == -1)) {
     cde_l2_702011cc_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_c92fec29__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_702011cc_Count) {
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
LAB_007498ed:
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
          if (cVar3 == '\0') goto LAB_007498ed;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_702011cc_Count);
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





//==== 00749a00 GetFactory_00749a00 ====


/* public: virtual class util__Reflectable * (__cdecl*
   LaunchProtocol__ReflectionInfoStruct_struct_LaunchProtocol___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall LaunchProtocol__ReflectionInfoStruct_struct_LaunchProtocol___GetFactory__o2
          (ReflectionInfoStruct_L_struct_LaunchProtocol_G_ *this)

{
  return StaticFactory;
}





//==== 00749a10 GetTypeName_00749a10 ====


/* public: virtual class util__Str_L_char_G_ 
   InterceptionProtocol__ReflectionInfoStruct_struct_InterceptionProtocol___GetTypeName(void)const
    */

Str_L_char_G_ * 
InterceptionProtocol__ReflectionInfoStruct_struct_InterceptionProtocol___GetTypeName__o2
          (ReflectionInfoStruct_L_struct_InterceptionProtocol_G_ *this,Str_L_char_G_ *__return_storage_ptr__
          )

{
  util__Str_char___Str_char(__return_storage_ptr__,"InterceptionProtocol");
  return __return_storage_ptr__;
}





//==== 00749a30 GetMembers_00749a30 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   InterceptionProtocol__ReflectionInfoStruct_struct_InterceptionProtocol___GetMembers(void)const
    */

Darray_L_struct_util__ClassMember_G_ * 
InterceptionProtocol__ReflectionInfoStruct_struct_InterceptionProtocol___GetMembers__o2
          (ReflectionInfoStruct_L_struct_InterceptionProtocol_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_940f72c0__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_940f72c0__thread_safe_static_guard_0__),
      cde_l2_940f72c0__thread_safe_static_guard_0__ == -1)) {
     cde_l2_20560ad1_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_940f72c0__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_20560ad1_Count);
  iVar3 = 0;
  if (0 <  cde_l2_20560ad1_Count) {
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
    } while (iVar3 <  cde_l2_20560ad1_Count);
  }
  return in_stack_00000004;
}





//==== 00749b70 GetMember_00749b70 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   InterceptionProtocol__ReflectionInfoStruct_struct_InterceptionProtocol___GetMember(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
InterceptionProtocol__ReflectionInfoStruct_struct_InterceptionProtocol___GetMember__o2
          (ReflectionInfoStruct_L_struct_InterceptionProtocol_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_d2535474__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_d2535474__thread_safe_static_guard_0__),
      cde_l2_d2535474__thread_safe_static_guard_0__ == -1)) {
     cde_l2_a833ba08_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_d2535474__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_a833ba08_Count) {
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
LAB_00749bfd:
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
          if (cVar3 == '\0') goto LAB_00749bfd;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_a833ba08_Count);
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





//==== 00749d10 GetFactory_00749d10 ====


/* public: virtual class util__Reflectable * (__cdecl*
   InterceptionProtocol__ReflectionInfoStruct_struct_InterceptionProtocol___GetFactory(void)const
   )(void) */

_func_Reflectable_ptr * 
__thiscall InterceptionProtocol__ReflectionInfoStruct_struct_InterceptionProtocol___GetFactory__o2
          (ReflectionInfoStruct_L_struct_InterceptionProtocol_G_ *this)

{
  return StaticFactory;
}





//==== 00749d20 GetTypeName_00749d20 ====


/* public: virtual class util__Str_L_char_G_  MilitaryDoctrine__ReflectionInfoStruct_struct_MilitaryDoctrine___GetTypeName(void)const  */

Str_L_char_G_ * 
MilitaryDoctrine__ReflectionInfoStruct_struct_MilitaryDoctrine___GetTypeName
          (ReflectionInfoStruct_L_struct_MilitaryDoctrine_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"MilitaryDoctrine");
  return __return_storage_ptr__;
}





//==== 00749d40 GetMembers_00749d40 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   MilitaryDoctrine__ReflectionInfoStruct_struct_MilitaryDoctrine___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
MilitaryDoctrine__ReflectionInfoStruct_struct_MilitaryDoctrine___GetMembers__o2
          (ReflectionInfoStruct_L_struct_MilitaryDoctrine_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_7f797fb3__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_7f797fb3__thread_safe_static_guard_0__),
      cde_l2_7f797fb3__thread_safe_static_guard_0__ == -1)) {
     cde_l2_953592f5_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_7f797fb3__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_953592f5_Count);
  iVar3 = 0;
  if (0 <  cde_l2_953592f5_Count) {
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
    } while (iVar3 <  cde_l2_953592f5_Count);
  }
  return in_stack_00000004;
}





//==== 00749e80 GetMember_00749e80 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   MilitaryDoctrine__ReflectionInfoStruct_struct_MilitaryDoctrine___GetMember(class util__Str_L_char_G_
   const &)const  */

Str_L_char_G_ * 
MilitaryDoctrine__ReflectionInfoStruct_struct_MilitaryDoctrine___GetMember__o2
          (ReflectionInfoStruct_L_struct_MilitaryDoctrine_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_6b3fa74e__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_6b3fa74e__thread_safe_static_guard_0__),
      cde_l2_6b3fa74e__thread_safe_static_guard_0__ == -1)) {
     cde_l2_a641a6f8_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_6b3fa74e__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_a641a6f8_Count) {
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
LAB_00749f0d:
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
          if (cVar3 == '\0') goto LAB_00749f0d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_a641a6f8_Count);
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





//==== 0074a020 GetFactory_0074a020 ====


/* public: virtual class util__Reflectable * (__cdecl*
   MilitaryDoctrine__ReflectionInfoStruct_struct_MilitaryDoctrine___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall MilitaryDoctrine__ReflectionInfoStruct_struct_MilitaryDoctrine___GetFactory__o2
          (ReflectionInfoStruct_L_struct_MilitaryDoctrine_G_ *this)

{
  return StaticFactory;
}





//==== 0074b180 CombatProtocol ====

/* public: virtual __thiscall CombatProtocol___CombatProtocol(void) */

void __thiscall CombatProtocol___CombatProtocol(CombatProtocol *this)

{
  void *pvVar1;
  TargetPriority *pTVar2;
  
  (this->FlareDoctrine).Data._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->FlareDoctrine).Data._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->FlareDoctrine).Data._pad_0x4_1 = 0;
  }
  pTVar2 = (this->WeaponsDoctrine).Data.TargetPriorities.Data;
  (this->WeaponsDoctrine).Data.TargetPriorities._pad_0x0_0 =
       (int)&vftable_2;
  if (pTVar2 != (TargetPriority *)0x0) {
    port_op_delete(pTVar2);
  }
  (this->WeaponsDoctrine).Data.TargetPriorities.Data = (TargetPriority *)0x0;
  (this->WeaponsDoctrine).Data.TargetPriorities._pad_0x0_0 =
       (int)&vftable;
  (this->WeaponsDoctrine).Data._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->WeaponsDoctrine).Data._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->WeaponsDoctrine).Data._pad_0x4_1 = 0;
  }
  (this->MissileDoctrine).Data._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->MissileDoctrine).Data._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->MissileDoctrine).Data._pad_0x4_1 = 0;
  }
  (this->DroneDoctrine).Data._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->DroneDoctrine).Data._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->DroneDoctrine).Data._pad_0x4_1 = 0;
  }
  (this->CapitalShipDoctrine).Data._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->CapitalShipDoctrine).Data._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->CapitalShipDoctrine).Data._pad_0x4_1 = 0;
  }
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  return;
}

//==== 0074ccd0 scalar_deleting_destructor_0074ccd0 ====


/* public: virtual void * __thiscall util__Darray_L_classutil__Darray_L_classutil__WeakPtr_L_class_SpacecraftComponent_G__G__G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_class_util__Darray_class_util__WeakPtr_class_SpacecraftComponent________scalar_deleting_destructor
          (Darray_L_class_util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___G_ *this,
          uint param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 4);
  *(undefined ***)this = (undefined **)(&vftable_452);
  if (piVar1 != (int *)0x0) {
    if (piVar1[-1] == 0) {
      port_op_delete(piVar1 + -1);
    }
    else {
      (**(code **)(uintptr_t)(*piVar1 + 0x18))(3);
    }
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)(&vftable);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 0074cd30 scalar_deleting_destructor_0074cd30 ====

/* public: virtual void * __thiscall MilitaryDoctrine:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall
MilitaryDoctrine___scalar_deleting_destructor(MilitaryDoctrine *this,uint param_1)

{
  void *pvVar1;
  
  CombatProtocol___CombatProtocol(&(this->CombatDoctrine).Data);
  (this->DroneInterceptDoctrine).Data._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->DroneInterceptDoctrine).Data._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->DroneInterceptDoctrine).Data._pad_0x4_1 = 0;
  }
  (this->MissileInterceptDoctrine).Data._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->MissileInterceptDoctrine).Data._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->MissileInterceptDoctrine).Data._pad_0x4_1 = 0;
  }
  (this->CapitalShipInterceptDoctrine).Data._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->CapitalShipInterceptDoctrine).Data._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->CapitalShipInterceptDoctrine).Data._pad_0x4_1 = 0;
  }
  (this->DroneLaunchDoctrine).Data._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->DroneLaunchDoctrine).Data._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->DroneLaunchDoctrine).Data._pad_0x4_1 = 0;
  }
  (this->MissileLaunchDoctrine).Data._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->MissileLaunchDoctrine).Data._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->MissileLaunchDoctrine).Data._pad_0x4_1 = 0;
  }
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x280);
  }
  return this;
}

//==== 0074ee60 Clear_0074ee60 ====


/* public: virtual void  util__Darray_L_classutil__Darray_L_classutil__WeakPtr_L_class_SpacecraftComponent_G__G__G___Clear(void) */

void 
util__Darray_class_util__Darray_class_util__WeakPtr_class_SpacecraftComponent_______Clear
          (Darray_L_class_util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 007512c0 GetReflectionInfo_007512c0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   InterceptionProtocol__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall InterceptionProtocol__GetReflectionInfo(InterceptionProtocol *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_0f96fc7e__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_0f96fc7e__thread_safe_static_guard_0__);
    if ( cde_l2_0f96fc7e__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_0449b7b8_ReflectionInfo) = &vftable_447;
      _Init_thread_footer(& cde_l2_0f96fc7e__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_0449b7b8_ReflectionInfo;
}





//==== 007512d0 GetReflectionInfo_007512d0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   LaunchProtocol__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall LaunchProtocol__GetReflectionInfo(LaunchProtocol *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_8d8d7cab__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_8d8d7cab__thread_safe_static_guard_0__);
    if ( cde_l2_8d8d7cab__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_bbda11db_ReflectionInfo) = &vftable_446;
      _Init_thread_footer(& cde_l2_8d8d7cab__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_bbda11db_ReflectionInfo;
}





//==== 007512e0 GetReflectionInfo_007512e0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   MilitaryDoctrine__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall MilitaryDoctrine__GetReflectionInfo(MilitaryDoctrine *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_df2601a6__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_df2601a6__thread_safe_static_guard_0__);
    if ( cde_l2_df2601a6__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_a6576728_ReflectionInfo) = &vftable_448;
      _Init_thread_footer(& cde_l2_df2601a6__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_a6576728_ReflectionInfo;
}





//==== 00752770 IsUnlocked_00752770 ====


/* public: bool __thiscall MilitaryDoctrine__IsUnlocked(class DataParser *)const  */

bool __thiscall MilitaryDoctrine__IsUnlocked(MilitaryDoctrine *this,DataParser *param_1)

{
  undefined8 stack0xfffffffc;
  undefined1 uVar1;
  bool bVar2;
  Campaign *this_00;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  this_00 = GetDefaultCampaign(param_1);
  if (this->AlwaysAvailableInSandbox == false) {
    piVar6 = &this_00->ModPriority;
    iStack_c = 0;
    iVar3 = (**(code **)(uintptr_t)(*piVar6 + 0xc))();
    if (iStack_c < iVar3) {
      do {
        piVar4 = (int *)(**(code **)*piVar6)(&iStack_c);
        if (*(MilitaryDoctrine **)(*piVar4 + 0x84) == this) {
          piVar6 = &this_00->ModPriority;
          iStack_c = 0;
          iVar3 = (**(code **)(uintptr_t)(*piVar6 + 0xc))();
          if (iStack_c < iVar3) goto LAB_00752805;
          goto LAB_00752838;
        }
        iStack_c = iStack_c + 1;
        iVar3 = (**(code **)(uintptr_t)(*piVar6 + 0xc))();
      } while (iStack_c < iVar3);
    }
  }
LAB_007527d8:
  uVar1 = 1;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar1;
LAB_00752805:
  puVar5 = (undefined4 *)(**(code **)*piVar6)(&iStack_c);
  if ((MilitaryDoctrine *)(((Level *)*puVar5)->AdditionalAlliances).Data == this) {
    bVar2 = Campaign__IsAllowedToPlayLevel(this_00,param_1,(Level *)*puVar5);
    if (bVar2) goto LAB_007527d8;
  }
  iStack_c = iStack_c + 1;
  iVar3 = (**(code **)(uintptr_t)(*piVar6 + 0xc))();
  if (iVar3 <= iStack_c) {
LAB_00752838:
    uVar1 = 0;
    __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
    return (bool)uVar1;
  }
  goto LAB_00752805;
}





//==== 00753640 StaticFactory_00753640 ====

/* public: static class util__Reflectable * __cdecl
   InterceptionProtocol__ReflectionInfoStruct_struct_InterceptionProtocol___StaticFactory(void) */

Reflectable * __cdecl
InterceptionProtocol__ReflectionInfoStruct_struct_InterceptionProtocol___StaticFactory__o2(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x40));
  if (pRVar1 != (Reflectable *)0x0) {
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_450;
    pRVar1[1]._pad_0x0_0 = 0;
    pRVar1[1].Name.Data = (char *)0x3ff00000;
    pRVar1[1].Name.Capacity = 0;
    pRVar1[1].Name.Length = 0;
    pRVar1[2]._pad_0x0_0 = 0;
    pRVar1[2].Name.Data = (char *)0x0;
    pRVar1[2].Name.Capacity = 0;
    pRVar1[3]._pad_0x0_0 = 0;
    pRVar1[3].Name.Data = (char *)0x3ff00000;
    pRVar1[3].Name.Capacity = 0;
    pRVar1[3].Name.Length = 0x3ff00000;
  }
  return (Reflectable *)0x0;
}

//==== 00753690 StaticFactory_00753690 ====

/* public: static class util__Reflectable * __cdecl LaunchProtocol__ReflectionInfoStruct_L_struct_LaunchProtocol_G___StaticFactory(void) */

Reflectable * __cdecl LaunchProtocol__ReflectionInfoStruct_struct_LaunchProtocol___StaticFactory(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x38));
  if (pRVar1 != (Reflectable *)0x0) {
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_449;
    *(undefined1 *)&pRVar1[1]._pad_0x0_0 = 1;
    pRVar1[1].Name.Capacity = 0;
    pRVar1[1].Name.Length = 0;
    pRVar1[2]._pad_0x0_0 = 0;
    pRVar1[2].Name.Data = (char *)0x0;
    pRVar1[2].Name.Capacity = 0;
    pRVar1[2].Name.Length = 0;
    pRVar1[3]._pad_0x0_0 = 0;
  }
  return (Reflectable *)0x0;
}

//==== 007536e0 StaticFactory_007536e0 ====

/* public: static class util__Reflectable * __cdecl MilitaryDoctrine__ReflectionInfoStruct_L_struct_MilitaryDoctrine_G___StaticFactory(void) */

Reflectable * __cdecl MilitaryDoctrine__ReflectionInfoStruct_struct_MilitaryDoctrine___StaticFactory(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x280));
  if (pRVar1 != (Reflectable *)0x0) {
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_451;
    *(undefined2 *)&pRVar1[1]._pad_0x0_0 = 0;
    pRVar1[1].Name.Length = 0;
    pRVar1[2]._pad_0x0_0 = 0;
    pRVar1[2].Name.Data = (char *)0x0;
    pRVar1[1].Name.Capacity = (int)&vftable_449;
    *(undefined1 *)&pRVar1[2].Name.Capacity = 1;
    pRVar1[3]._pad_0x0_0 = 0;
    pRVar1[3].Name.Data = (char *)0x0;
    pRVar1[3].Name.Capacity = 0;
    pRVar1[3].Name.Length = 0;
    pRVar1[4]._pad_0x0_0 = 0;
    pRVar1[4].Name.Data = (char *)0x0;
    pRVar1[4].Name.Capacity = 0;
    *(undefined1 *)&pRVar1[5]._pad_0x0_0 = 0;
    pRVar1[5].Name.Length = 0;
    pRVar1[6]._pad_0x0_0 = 0;
    pRVar1[6].Name.Data = (char *)0x0;
    pRVar1[5].Name.Capacity = (int)&vftable_449;
    *(undefined1 *)&pRVar1[6].Name.Capacity = 1;
    pRVar1[7]._pad_0x0_0 = 0;
    pRVar1[7].Name.Data = (char *)0x0;
    pRVar1[7].Name.Capacity = 0;
    pRVar1[7].Name.Length = 0;
    pRVar1[8]._pad_0x0_0 = 0;
    pRVar1[8].Name.Data = (char *)0x0;
    pRVar1[8].Name.Capacity = 0;
    *(undefined1 *)&pRVar1[9]._pad_0x0_0 = 0;
    pRVar1[9].Name.Length = 0;
    pRVar1[10]._pad_0x0_0 = 0;
    pRVar1[10].Name.Data = (char *)0x0;
    pRVar1[9].Name.Capacity = (int)&vftable_450;
    pRVar1[10].Name.Capacity = 0;
    pRVar1[10].Name.Length = 0x3ff00000;
    pRVar1[0xb]._pad_0x0_0 = 0;
    pRVar1[0xb].Name.Data = (char *)0x0;
    pRVar1[0xb].Name.Capacity = 0;
    pRVar1[0xb].Name.Length = 0;
    pRVar1[0xc]._pad_0x0_0 = 0;
    pRVar1[0xc].Name.Capacity = 0;
    pRVar1[0xc].Name.Length = 0x3ff00000;
    pRVar1[0xd]._pad_0x0_0 = 0;
    pRVar1[0xd].Name.Data = (char *)0x3ff00000;
    *(undefined1 *)&pRVar1[0xd].Name.Capacity = 0;
    pRVar1[0xe].Name.Data = (char *)0x0;
    pRVar1[0xe].Name.Capacity = 0;
    pRVar1[0xe].Name.Length = 0;
    pRVar1[0xe]._pad_0x0_0 = (int)&vftable_450;
    pRVar1[0xf]._pad_0x0_0 = 0;
    pRVar1[0xf].Name.Data = (char *)0x3ff00000;
    pRVar1[0xf].Name.Capacity = 0;
    pRVar1[0xf].Name.Length = 0;
    pRVar1[0x10]._pad_0x0_0 = 0;
    pRVar1[0x10].Name.Data = (char *)0x0;
    pRVar1[0x10].Name.Capacity = 0;
    pRVar1[0x11]._pad_0x0_0 = 0;
    pRVar1[0x11].Name.Data = (char *)0x3ff00000;
    pRVar1[0x11].Name.Capacity = 0;
    pRVar1[0x11].Name.Length = 0x3ff00000;
    *(undefined1 *)&pRVar1[0x12]._pad_0x0_0 = 0;
    pRVar1[0x12].Name.Length = 0;
    pRVar1[0x13]._pad_0x0_0 = 0;
    pRVar1[0x13].Name.Data = (char *)0x0;
    pRVar1[0x12].Name.Capacity = (int)&vftable_450;
    pRVar1[0x13].Name.Capacity = 0;
    pRVar1[0x13].Name.Length = 0x3ff00000;
    pRVar1[0x14]._pad_0x0_0 = 0;
    pRVar1[0x14].Name.Data = (char *)0x0;
    pRVar1[0x14].Name.Capacity = 0;
    pRVar1[0x14].Name.Length = 0;
    pRVar1[0x15]._pad_0x0_0 = 0;
    pRVar1[0x15].Name.Capacity = 0;
    pRVar1[0x15].Name.Length = 0x3ff00000;
    pRVar1[0x16]._pad_0x0_0 = 0;
    pRVar1[0x16].Name.Data = (char *)0x3ff00000;
    *(undefined1 *)&pRVar1[0x16].Name.Capacity = 0;
    CombatProtocol__CombatProtocol((CombatProtocol *)(pRVar1 + 0x17));
    *(undefined1 *)&pRVar1[0x27]._pad_0x0_0 = 0;
    *(undefined1 *)&pRVar1[0x27].Name.Capacity = 0;
  }
  return (Reflectable *)0x0;
}

//==== 007538c0 StaticGetMemberByIndex_007538c0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   InterceptionProtocol__ReflectionInfoStruct_struct_InterceptionProtocol___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
InterceptionProtocol__ReflectionInfoStruct_struct_InterceptionProtocol___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_ab04ab6c__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_ab04ab6c__thread_safe_static_guard_0__);
    if ( cde_l2_ab04ab6c__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_1c1122e4_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00981fa4 = 0;
      _DAT_00981fa8 = 0;
      _DAT_00981fac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981fb0,"Unused");
      _DAT_00981fbc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981fc0,"DeltaVBudget_Percent");
      _DAT_00981fcc = 4;
      _DAT_00981fd0 = 0x10;
      _DAT_00981fd4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981fd8,"double");
      _DAT_00981fe4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981fe8,"InstantaneousDeltaVBudget_Percent");
      _DAT_00981ff4 = 4;
      _DAT_00981ff8 = 0x18;
      _DAT_00981ffc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00982000,"double");
      _DAT_0098200c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00982010,"DistanceMaximum_km");
      _DAT_0098201c = 4;
      _DAT_00982020 = 0x20;
      _DAT_00982024 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00982028,"double");
      _DAT_00982034 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00982038,"OnlyEnsurePlanarity");
      _DAT_00982044 = 1;
      _DAT_00982048 = 0x28;
      _DAT_0098204c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00982050,"bool");
      _DAT_0098205c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00982060,"InterceptCapitalShips");
      _DAT_0098206c = 1;
      _DAT_00982070 = 0x29;
      _DAT_00982074 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00982078,"bool");
      _DAT_00982084 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00982088,"InterceptDrones");
      _DAT_00982094 = 1;
      _DAT_00982098 = 0x2a;
      _DAT_0098209c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009820a0,"bool");
      _DAT_009820ac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009820b0,"InterceptMissiles");
      _DAT_009820bc = 1;
      _DAT_009820c0 = 0x2b;
      _DAT_009820c4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009820c8,"bool");
      _DAT_009820d4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009820d8,"TonnageWeightFactor");
      _DAT_009820e4 = 4;
      _DAT_009820e8 = 0x30;
      _DAT_009820ec = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009820f0,"double");
      _DAT_009820fc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00982100,"DistanceWeightFactor");
      _DAT_0098210c = 4;
      _DAT_00982110 = 0x38;
      _DAT_00982114 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00982118,"double");
      _DAT_00982124 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_InterceptionProtocol__ReflectionInfoStruct_struct_InterceptionProtocol___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_ab04ab6c__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_1c1122e4_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_00981fa4 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00981fa8 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_00981fac + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00981fb0 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_00981fbc)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_00981fbd)[iVar1];
  return __return_storage_ptr__;
}





//==== 00753c10 StaticGetMemberByIndex_00753c10 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   LaunchProtocol__ReflectionInfoStruct_struct_LaunchProtocol___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
LaunchProtocol__ReflectionInfoStruct_struct_LaunchProtocol___StaticGetMemberByIndex__o2
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_5155c714__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_5155c714__thread_safe_static_guard_0__);
    if ( cde_l2_5155c714__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_6cf0c245_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0098225c = 0;
      _DAT_00982260 = 0;
      _DAT_00982264 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00982268,"Unused");
      _DAT_00982274 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00982278,"OnlyWhenNodal");
      _DAT_00982284 = 1;
      _DAT_00982288 = 0x10;
      _DAT_0098228c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00982290,"bool");
      _DAT_0098229c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009822a0,"DistanceMaximum_km");
      _DAT_009822ac = 4;
      _DAT_009822b0 = 0x18;
      _DAT_009822b4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009822b8,"double");
      _DAT_009822c4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009822c8,"StaggerDistance_km");
      _DAT_009822d4 = 4;
      _DAT_009822d8 = 0x20;
      _DAT_009822dc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009822e0,"double");
      _DAT_009822ec = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009822f0,"WingsInFlightNeeded");
      _DAT_009822fc = 2;
      _DAT_00982300 = 0x28;
      _DAT_00982304 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00982308,"int");
      _DAT_00982314 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00982318,"AttackWingSize");
      _DAT_00982324 = 2;
      _DAT_00982328 = 0x2c;
      _DAT_0098232c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00982330,"int");
      _DAT_0098233c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00982340,"ReserveSize");
      _DAT_0098234c = 2;
      _DAT_00982350 = 0x30;
      _DAT_00982354 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00982358,"int");
      _DAT_00982364 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_LaunchProtocol__ReflectionInfoStruct_struct_LaunchProtocol___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_5155c714__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_6cf0c245_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_0098225c + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00982260 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_00982264 + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00982268 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_00982274)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_00982275)[iVar1];
  return __return_storage_ptr__;
}





//==== 00753e90 StaticGetMemberByIndex_00753e90 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   MilitaryDoctrine__ReflectionInfoStruct_struct_MilitaryDoctrine___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
MilitaryDoctrine__ReflectionInfoStruct_struct_MilitaryDoctrine___StaticGetMemberByIndex__o2
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_389b6310__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_389b6310__thread_safe_static_guard_0__);
    if ( cde_l2_389b6310__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_b13ad172_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00981c74 = 0;
      _DAT_00981c78 = 0;
      _DAT_00981c7c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981c80,"Unused");
      _DAT_00981c8c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981c90,"DisableWeaponsOutsideOfCombat");
      _DAT_00981c9c = 1;
      _DAT_00981ca0 = 0x10;
      _DAT_00981ca4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981ca8,"bool");
      _DAT_00981cb4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981cb8,"DoNotTryToStayInHillSphere");
      _DAT_00981cc4 = 1;
      _DAT_00981cc8 = 0x11;
      _DAT_00981ccc = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981cd0,"bool");
      _DAT_00981cdc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981ce0,"MissileLaunchDoctrine");
      _DAT_00981cec = 10;
      _DAT_00981cf0 = 0x18;
      _DAT_00981cf4 = 0x38;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981cf8,"LaunchProtocol");
      _DAT_00981d04 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981d08,"DroneLaunchDoctrine");
      _DAT_00981d14 = 10;
      _DAT_00981d18 = 0x58;
      _DAT_00981d1c = 0x38;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981d20,"LaunchProtocol");
      _DAT_00981d2c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981d30,"CapitalShipInterceptDoctrine");
      _DAT_00981d3c = 10;
      _DAT_00981d40 = 0x98;
      _DAT_00981d44 = 0x40;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981d48,"InterceptionProtocol");
      _DAT_00981d54 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981d58,"MissileInterceptDoctrine");
      _DAT_00981d64 = 10;
      _DAT_00981d68 = 0xe0;
      _DAT_00981d6c = 0x40;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981d70,"InterceptionProtocol");
      _DAT_00981d7c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981d80,"DroneInterceptDoctrine");
      _DAT_00981d8c = 10;
      _DAT_00981d90 = 0x128;
      _DAT_00981d94 = 0x40;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981d98,"InterceptionProtocol");
      _DAT_00981da4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981da8,"CombatDoctrine");
      _DAT_00981db4 = 10;
      _DAT_00981db8 = 0x170;
      _DAT_00981dbc = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981dc0,"CombatProtocol");
      _DAT_00981dcc = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981dd0,"AlwaysAvailableInSandbox");
      _DAT_00981ddc = 1;
      _DAT_00981de0 = 0x278;
      _DAT_00981de4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981de8,"bool");
      _DAT_00981df4 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_MilitaryDoctrine__ReflectionInfoStruct_struct_MilitaryDoctrine___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_389b6310__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_b13ad172_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_00981c74 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00981c78 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_00981c7c + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00981c80 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_00981c8c)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_00981c8d)[iVar1];
  return __return_storage_ptr__;
}





//==== 007541e0 StaticGetMemberCount_007541e0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl InterceptionProtocol__ReflectionInfoStruct_struct_InterceptionProtocol___StaticGetMemberCount(void) */

int __cdecl
InterceptionProtocol__ReflectionInfoStruct_struct_InterceptionProtocol___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_c39180e6__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_c39180e6__thread_safe_static_guard_0__);
    if ( cde_l2_c39180e6__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_aad61721_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00981e0c = 0;
      _DAT_00981e10 = 0;
      _DAT_00981e14 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981e18,"Unused");
      _DAT_00981e24 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981e28,"DeltaVBudget_Percent");
      _DAT_00981e34 = 4;
      _DAT_00981e38 = 0x10;
      _DAT_00981e3c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981e40,"double");
      _DAT_00981e4c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981e50,"InstantaneousDeltaVBudget_Percent");
      _DAT_00981e5c = 4;
      _DAT_00981e60 = 0x18;
      _DAT_00981e64 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981e68,"double");
      _DAT_00981e74 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981e78,"DistanceMaximum_km");
      _DAT_00981e84 = 4;
      _DAT_00981e88 = 0x20;
      _DAT_00981e8c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981e90,"double");
      _DAT_00981e9c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981ea0,"OnlyEnsurePlanarity");
      _DAT_00981eac = 1;
      _DAT_00981eb0 = 0x28;
      _DAT_00981eb4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981eb8,"bool");
      _DAT_00981ec4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981ec8,"InterceptCapitalShips");
      _DAT_00981ed4 = 1;
      _DAT_00981ed8 = 0x29;
      _DAT_00981edc = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981ee0,"bool");
      _DAT_00981eec = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981ef0,"InterceptDrones");
      _DAT_00981efc = 1;
      _DAT_00981f00 = 0x2a;
      _DAT_00981f04 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981f08,"bool");
      _DAT_00981f14 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981f18,"InterceptMissiles");
      _DAT_00981f24 = 1;
      _DAT_00981f28 = 0x2b;
      _DAT_00981f2c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981f30,"bool");
      _DAT_00981f3c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981f40,"TonnageWeightFactor");
      _DAT_00981f4c = 4;
      _DAT_00981f50 = 0x30;
      _DAT_00981f54 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981f58,"double");
      _DAT_00981f64 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981f68,"DistanceWeightFactor");
      _DAT_00981f74 = 4;
      _DAT_00981f78 = 0x38;
      _DAT_00981f7c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981f80,"double");
      _DAT_00981f8c = 0;
      atexit( private__static_int_const___cdecl_InterceptionProtocol__ReflectionInfoStruct_struct_InterceptionProtocol___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_c39180e6__thread_safe_static_guard_0__);
    }
  }
  return 10;
}





//==== 007544f0 StaticGetMemberCount_007544f0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl LaunchProtocol__ReflectionInfoStruct_struct_LaunchProtocol___StaticGetMemberCount(void) */

int __cdecl LaunchProtocol__ReflectionInfoStruct_struct_LaunchProtocol___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_72f8c9de__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_72f8c9de__thread_safe_static_guard_0__);
    if ( cde_l2_72f8c9de__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_776e3032_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0098213c = 0;
      _DAT_00982140 = 0;
      _DAT_00982144 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00982148,"Unused");
      _DAT_00982154 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00982158,"OnlyWhenNodal");
      _DAT_00982164 = 1;
      _DAT_00982168 = 0x10;
      _DAT_0098216c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00982170,"bool");
      _DAT_0098217c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00982180,"DistanceMaximum_km");
      _DAT_0098218c = 4;
      _DAT_00982190 = 0x18;
      _DAT_00982194 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00982198,"double");
      _DAT_009821a4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009821a8,"StaggerDistance_km");
      _DAT_009821b4 = 4;
      _DAT_009821b8 = 0x20;
      _DAT_009821bc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009821c0,"double");
      _DAT_009821cc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009821d0,"WingsInFlightNeeded");
      _DAT_009821dc = 2;
      _DAT_009821e0 = 0x28;
      _DAT_009821e4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009821e8,"int");
      _DAT_009821f4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009821f8,"AttackWingSize");
      _DAT_00982204 = 2;
      _DAT_00982208 = 0x2c;
      _DAT_0098220c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00982210,"int");
      _DAT_0098221c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00982220,"ReserveSize");
      _DAT_0098222c = 2;
      _DAT_00982230 = 0x30;
      _DAT_00982234 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00982238,"int");
      _DAT_00982244 = 0;
      atexit( private__static_int_const___cdecl_LaunchProtocol__ReflectionInfoStruct_struct_LaunchProtocol___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_72f8c9de__thread_safe_static_guard_0__);
    }
  }
  return 7;
}





//==== 00754730 StaticGetMemberCount_00754730 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl MilitaryDoctrine__ReflectionInfoStruct_struct_MilitaryDoctrine___StaticGetMemberCount(void) */

int __cdecl
MilitaryDoctrine__ReflectionInfoStruct_struct_MilitaryDoctrine___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_299c7c43__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_299c7c43__thread_safe_static_guard_0__);
    if ( cde_l2_299c7c43__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_e64cd877_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00981adc = 0;
      _DAT_00981ae0 = 0;
      _DAT_00981ae4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981ae8,"Unused");
      _DAT_00981af4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981af8,"DisableWeaponsOutsideOfCombat");
      _DAT_00981b04 = 1;
      _DAT_00981b08 = 0x10;
      _DAT_00981b0c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981b10,"bool");
      _DAT_00981b1c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981b20,"DoNotTryToStayInHillSphere");
      _DAT_00981b2c = 1;
      _DAT_00981b30 = 0x11;
      _DAT_00981b34 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981b38,"bool");
      _DAT_00981b44 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981b48,"MissileLaunchDoctrine");
      _DAT_00981b54 = 10;
      _DAT_00981b58 = 0x18;
      _DAT_00981b5c = 0x38;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981b60,"LaunchProtocol");
      _DAT_00981b6c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981b70,"DroneLaunchDoctrine");
      _DAT_00981b7c = 10;
      _DAT_00981b80 = 0x58;
      _DAT_00981b84 = 0x38;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981b88,"LaunchProtocol");
      _DAT_00981b94 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981b98,"CapitalShipInterceptDoctrine");
      _DAT_00981ba4 = 10;
      _DAT_00981ba8 = 0x98;
      _DAT_00981bac = 0x40;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981bb0,"InterceptionProtocol");
      _DAT_00981bbc = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981bc0,"MissileInterceptDoctrine");
      _DAT_00981bcc = 10;
      _DAT_00981bd0 = 0xe0;
      _DAT_00981bd4 = 0x40;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981bd8,"InterceptionProtocol");
      _DAT_00981be4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981be8,"DroneInterceptDoctrine");
      _DAT_00981bf4 = 10;
      _DAT_00981bf8 = 0x128;
      _DAT_00981bfc = 0x40;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981c00,"InterceptionProtocol");
      _DAT_00981c0c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981c10,"CombatDoctrine");
      _DAT_00981c1c = 10;
      _DAT_00981c20 = 0x170;
      _DAT_00981c24 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981c28,"CombatProtocol");
      _DAT_00981c34 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981c38,"AlwaysAvailableInSandbox");
      _DAT_00981c44 = 1;
      _DAT_00981c48 = 0x278;
      _DAT_00981c4c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00981c50,"bool");
      _DAT_00981c5c = 0;
      atexit( private__static_int_const___cdecl_MilitaryDoctrine__ReflectionInfoStruct_struct_MilitaryDoctrine___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_299c7c43__thread_safe_static_guard_0__);
    }
  }
  return 10;
}





//==== 00754a40 StaticGetReflectionInfo_00754a40 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct InterceptionProtocol__ReflectionInfoStruct_L_structInterceptionProtocol_G_ *
   __cdecl InterceptionProtocol__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_struct_InterceptionProtocol_G_ * __cdecl
InterceptionProtocol__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_0f96fc7e__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_0f96fc7e__thread_safe_static_guard_0__);
    if ( cde_l2_0f96fc7e__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_0449b7b8_ReflectionInfo) = &vftable_447;
      _Init_thread_footer(& cde_l2_0f96fc7e__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_0449b7b8_ReflectionInfo;
}





//==== 00754aa0 StaticGetReflectionInfo_00754aa0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct LaunchProtocol__ReflectionInfoStruct_L_structLaunchProtocol_G_ * __cdecl
   LaunchProtocol__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_struct_LaunchProtocol_G_ * __cdecl LaunchProtocol__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_8d8d7cab__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_8d8d7cab__thread_safe_static_guard_0__);
    if ( cde_l2_8d8d7cab__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_bbda11db_ReflectionInfo) = &vftable_446;
      _Init_thread_footer(& cde_l2_8d8d7cab__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_bbda11db_ReflectionInfo;
}





//==== 00754b00 StaticGetReflectionInfo_00754b00 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct MilitaryDoctrine__ReflectionInfoStruct_L_structMilitaryDoctrine_G_ * __cdecl
   MilitaryDoctrine__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_struct_MilitaryDoctrine_G_ * __cdecl
MilitaryDoctrine__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_df2601a6__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_df2601a6__thread_safe_static_guard_0__);
    if ( cde_l2_df2601a6__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_a6576728_ReflectionInfo) = &vftable_448;
      _Init_thread_footer(& cde_l2_df2601a6__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_a6576728_ReflectionInfo;
}





//==== 007587c0 GetPrunedWeakArray_Body_ ====


/* class util__Darray_L_classutil__WeakPtr_L_classBody_G__G_ __cdecl util__GetPrunedWeakArray_class_Body(class util__Darray_L_classutil__WeakPtr_L_classBody_G__G_ const &) */

void __cdecl util__GetPrunedWeakArray_class_Body(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_1)

{
  undefined8 stack0xfffffffc;
  ReferenceController *this;
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *in_stack_00000008;
  ReferenceController *pRStack_14;
  undefined1 uStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uStack_10 = 0;
  iVar2 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
  Darray_L_class_util__WeakPtr_L_class_Body_G___G___Darray_L_class_util__WeakPtr_L_class_Body_G___G_(param_1,iVar2);
  iStack_c = 0;
  iVar2 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
  if (iStack_c < iVar2) {
    do {
      piVar3 = (int *)(**(code **)*in_stack_00000008)(&iStack_c);
      if (((*piVar3 != 0) && ((ReferenceController *)piVar3[1] != (ReferenceController *)0x0)) &&
         (bVar1 = ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]), bVar1)) {
        iVar2 = *(int *)(param_1 + 8);
        pRStack_14 = (ReferenceController *)(iVar2 + 1);
        Darray_L_class_util__WeakPtr_L_class_Body_G___G___SetSize(param_1,(int *)&pRStack_14);
        bVar1 = Darray_L_class_util__WeakPtr_L_class_Body_G___G___CheckSize(param_1,iVar2);
        if (bVar1) {
          iVar2 = *(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 8;
          pRStack_14 = *(ReferenceController **)(iVar2 + -4);
          *(int *)(iVar2 + -8) = *piVar3;
          this = (ReferenceController *)piVar3[1];
          *(ReferenceController **)(iVar2 + -4) = this;
          if (this != (ReferenceController *)0x0) {
            util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(this);
          }
          if (pRStack_14 != (ReferenceController *)0x0) {
            ReferenceController__ReleaseWeakReference(pRStack_14);
          }
        }
      }
      iStack_c = iStack_c + 1;
      iVar2 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
    } while (iStack_c < iVar2);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 007588b0 GetTypedDataOfType_Speaker_ ====


/* public: class util__Darray_L_structSpeaker_P_G_ 
   util__SerializationManagerInterface__GetTypedDataOfType_struct_Speaker(bool)const  */

void 
util__SerializationManagerInterface__GetTypedDataOfType_struct_Speaker__o2
          (SerializationManagerInterface *this,bool param_1)

{
  undefined8 stack0xfffffffc;
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined3 in_stack_00000005;
  undefined1 in_stack_00000008;
  Str_L_char_G_ SStack_2c;
  int iStack_20;
  undefined **ppuStack_1c;
  void *pvStack_18;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iStack_c = CONCAT31((*(uint24_t*)((char*)&(iStack_c)+1)),in_stack_00000008);
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_2c,"Speaker");
  (**(code **)((int)*(int *)this + 4))(&ppuStack_1c,&SStack_2c,iStack_c);
  if (SStack_2c.Data != (char *)0x0) {
    port_op_delete(SStack_2c.Data);
    SStack_2c.Data = (char *)0x0;
  }
  *(undefined4 *)_param_1 = 0;
  *(undefined4 *)(_param_1 + 4) = 0;
  *(undefined4 *)(_param_1 + 8) = 0;
  *(undefined4 *)(_param_1 + 0xc) = 0;
  iVar3 = (*(code *)ppuStack_1c[3])();
  Darray_L_class_Manager_P_G___Darray_L_class_Manager_P_G_(_param_1,iVar3);
  iStack_c = 0;
  iVar3 = (*(code *)ppuStack_1c[3])();
  if (iStack_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(*(code *)*ppuStack_1c)(&iStack_c);
      iVar3 = *(int *)(_param_1 + 8);
      uVar1 = *puVar4;
      iStack_20 = iVar3 + 1;
      Darray_L_class_util__Reflectable_P_G___SetSize
                ((Darray_L_class_util__Reflectable_P_G_ *)_param_1,&iStack_20);
      bVar2 = Darray_L_enum_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_enum_GraphicsResource__Type_G_ *)_param_1,iVar3);
      if (bVar2) {
        *(undefined4 *)(*(int *)(_param_1 + 4) + -4 + *(int *)(_param_1 + 8) * 4) = uVar1;
      }
      iStack_c = iStack_c + 1;
      iVar3 = (*(code *)ppuStack_1c[3])();
    } while (iStack_c < iVar3);
  }
  ppuStack_1c = (undefined **)(&vftable_6);
  if (pvStack_18 != (void *)0x0) {
    port_op_delete(pvStack_18);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 007589b0 Join_util__WeakPtr_SpacecraftComponent___ ====


/* class util__Darray_L_classutil__WeakPtr_L_classSpacecraftComponent_G__G_ __cdecl util__Join_L_class_util__WeakPtr_L_classSpacecraftComponent_G__G_(class util__Darray_L_classutil__WeakPtr_L_class_SpacecraftComponent_G__G_ const &,class util__Darray_L_classutil__WeakPtr_L_classSpacecraftComponent_G___G_ const &) */

void __cdecl
util__Join_class_util__WeakPtr_class_SpacecraftComponent
          (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *param_1,
          Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *param_2)

{
  undefined8 stack0xfffffffc;
  ReferenceController *pRVar1;
  ReferenceController *pRVar2;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *pDVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int *in_stack_0000000c;
  int *piStack_18;
  undefined4 *puStack_14;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *pDStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pDStack_10 = param_2;
  piStack_18 = in_stack_0000000c;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar5 = (**(code **)(uintptr_t)(*in_stack_0000000c + 0xc))();
  iVar6 = (**(code **)(*(int *)pDStack_10 + 0xc))();
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_(param_1,iVar5 + iVar6);
  iStack_c = 0;
  iVar5 = (**(code **)(*(int *)pDStack_10 + 0xc))();
  pDVar3 = pDStack_10;
  if (iStack_c < iVar5) {
    do {
      puStack_14 = (undefined4 *)(*(code *)**(undefined4 **)pDVar3)(&iStack_c);
      iVar5 = *(int *)(param_1 + 8);
      pDStack_10 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)(iVar5 + 1);
      Darray_L_class_util__WeakPtr_L_class_Body_G___G___SetSize
                ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)param_1,(int *)&pDStack_10);
      bVar4 = Darray_L_class_util__WeakPtr_L_class_Body_G___G___CheckSize
                        ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)param_1,iVar5);
      if (bVar4) {
        iVar5 = *(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 8;
        pRVar1 = *(ReferenceController **)(iVar5 + -4);
        *(undefined4 *)(iVar5 + -8) = *puStack_14;
        pRVar2 = (ReferenceController *)puStack_14[1];
        *(ReferenceController **)(iVar5 + -4) = pRVar2;
        if (pRVar2 != (ReferenceController *)0x0) {
          util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(pRVar2);
        }
        if (pRVar1 != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(pRVar1);
        }
      }
      iStack_c = iStack_c + 1;
      iVar5 = (**(code **)(*(int *)pDVar3 + 0xc))();
      in_stack_0000000c = piStack_18;
    } while (iStack_c < iVar5);
  }
  iStack_c = 0;
  iVar5 = (**(code **)(uintptr_t)(*in_stack_0000000c + 0xc))();
  if (iStack_c < iVar5) {
    do {
      puStack_14 = (undefined4 *)(**(code **)*in_stack_0000000c)(&iStack_c);
      iVar5 = *(int *)(param_1 + 8);
      piStack_18 = (int *)(iVar5 + 1);
      Darray_L_class_util__WeakPtr_L_class_Body_G___G___SetSize
                ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)param_1,(int *)&piStack_18);
      bVar4 = Darray_L_class_util__WeakPtr_L_class_Body_G___G___CheckSize
                        ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)param_1,iVar5);
      if (bVar4) {
        pRVar1 = *(ReferenceController **)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 8);
        iVar5 = *(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 8;
        *(undefined4 *)(iVar5 + -8) = *puStack_14;
        pRVar2 = (ReferenceController *)puStack_14[1];
        *(ReferenceController **)(iVar5 + -4) = pRVar2;
        if (pRVar2 != (ReferenceController *)0x0) {
          util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(pRVar2);
        }
        if (pRVar1 != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(pRVar1);
        }
      }
      iStack_c = iStack_c + 1;
      iVar5 = (**(code **)(uintptr_t)(*in_stack_0000000c + 0xc))();
    } while (iStack_c < iVar5);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00758b10 KillActor_Fleet_ ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void  ActorHandler__KillActor_L_classFleet_G_(class util__WeakPtr_L_classFleet_G_) */

void __thiscall
ActorHandler__KillActor_class_Fleet(ActorHandler *this,Actor *param_2,ReferenceController *param_3)

{
  WeakPtr_L_Actor_G_ *pWVar1;
  WeakPtr_L_Actor_G_ *pWVar2;
  Actor *pAStack_c;
  ReferenceController *pRStack_8;
  
  pRStack_8 = param_3;
  pAStack_c = param_2;
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_3);
  }
  pWVar2 = (this->DeletionPending).Data;
  pWVar1 = pWVar2 + (this->DeletionPending).Size;
  for (; pWVar2 != pWVar1; pWVar2 = pWVar2 + 1) {
    if ((param_3 == pWVar2->Controller) && (param_2 == pWVar2->Pointer)) goto LAB_00758b63;
  }
  util__Darray_class_util__WeakPtr_class_Body_____Add
            ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&this->DeletionPending,
             (WeakPtr_L_class_Body_G_ *)&pAStack_c);
LAB_00758b63:
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  return;
}





//==== 007590b0 MethodCallerConst__public__bool___thiscall_StrategicManager__GetCutsceneNotificationUIVisibility_void_const__ ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_L_class_StrategicManager_Cbool_G___MethodCallerConst_L__public_bool__thiscall_StrategicManager__GetCutsceneNotificationUIVisibility_void_const_G_(void const * const) */

bool __cdecl
util__DelegateFactory_class_StrategicManager_bool___MethodCallerConst__public__bool___thiscall_StrategicManager__GetCutsceneNotificationUIVisibility_void_const
          (void *param_1)

{
  int iVar1;
  int *piVar2;
  GameManager *this;
  DataParser *pDVar3;
  Campaign *pCVar4;
  SoundEffect *pSVar5;
  
  iVar1 = *(int *)((int)param_1 + 0xac);
  this = Manager__GetParent(param_1);
  pDVar3 = GameManager__GetDataManager(this);
  pCVar4 = GetCurrentCampaign(pDVar3);
  pSVar5 = pCVar4[1].MainMenuMusic;
  piVar2 = &pSVar5->_pad_0x0_0;
  while( true ) {
    if (pSVar5 == (SoundEffect *)(piVar2 + pCVar4[1].LevelOrder._pad_0x0_0)) {
      return false;
    }
    if (pSVar5->_pad_0x0_0 == iVar1) break;
    pSVar5 = (SoundEffect *)&pSVar5->_pad_0x4_1;
  }
  return true;
}

//==== 00759100 MethodCallerConst__public__bool___thiscall_StrategicManager__GetNotificationUIVisibility_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static bool __cdecl util__DelegateFactory_L_class_StrategicManager_Cbool_G___MethodCallerConst_L__public_bool__thiscall_StrategicManager__GetNotificationUIVisibility_void_const_G_(void const * const) */

bool util__DelegateFactory_L_StrategicManager_Cbool_G___MethodCallerConst_L__public__bool___thiscall_StrategicManager__GetNotificationUIVisibility_void_const__G_
               (void *param_1)

{
  bool bVar1;
  
  if (*(char *)((int)param_1 + 0xa68) == '\0') {
    bVar1 = StrategicManager__IsInCutscene();
    if (!bVar1) {
      return true;
    }
  }
  return false;
}





//==== 00759120 MethodCallerConst__public__bool___thiscall_StrategicManager__IsSkippingTutorialAllowed_void_const__ ====


/* public: static bool __cdecl util__DelegateFactory_L_class_StrategicManager_Cbool_G___MethodCallerConst_L__public_bool__thiscall_StrategicManager__IsSkippingTutorialAllowed_void_const_G_(void const * const) */

bool __cdecl
util__DelegateFactory_class_StrategicManager_bool___MethodCallerConst__public__bool___thiscall_StrategicManager__IsSkippingTutorialAllowed_void_const
          (void *param_1)

{
  if ((*(int *)((int)param_1 + 0xac) != 0) &&
     (*(char *)(*(int *)((int)param_1 + 0xac) + 0x1e4) == '\0')) {
    return true;
  }
  return false;
}





//==== 00759150 MethodCallerConst__public__bool___thiscall_StrategicManager__ShouldGridBeShowing_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_L_class_StrategicManager_Cbool_G___MethodCallerConst_L__public_bool__thiscall_StrategicManager__ShouldGridBeShowing_void_const_G_(void const * const) */

bool util__DelegateFactory_L_StrategicManager_Cbool_G___MethodCallerConst_L__public__bool___thiscall_StrategicManager__ShouldGridBeShowing_void_const__G_
               (void *param_1)

{
  bool bVar1;
  Preferences *this;
  
  this = (Preferences *)Manager__GetOptions(param_1);
  bVar1 = Preferences__IsShowingCelestialGridWhenRotating(this);
  if (bVar1) {
    if (*(ReferenceController **)((int)param_1 + 0xb14) != (ReferenceController *)0x0) {
      bVar1 = ReferenceController__IsDataStillValid(*(ReferenceController **)((int)param_1 + 0xb14))
      ;
      if (!bVar1) {
        *(undefined4 *)((int)param_1 + 0xb10) = 0;
      }
    }
    bVar1 = UIWidget__IsCaptured(*(UIWidget **)((int)param_1 + 0xb10));
    if ((bVar1) && (*(char *)((int)param_1 + 0xa68) == '\0')) {
      bVar1 = StrategicManager__IsInCutscene();
      if (!bVar1) {
        return true;
      }
    }
  }
  return false;
}





//==== 00759f30 Zip_util__WeakPtr_Fleet__util__tuple2_util__WeakPtr_Fleet__double___ ====


/* class util__Darray_L_structutil__tuple2_L_classutil__WeakPtr_L_classFleet_G__Cstructutil__tuple2_L_class_util__WeakPtr_L_classFleet_G__Cdouble_G__G__G_ __cdecl util__Zip_L_classutil__WeakPtr_L_classFleet_G__Cstruct_util__tuple2_L_classutil__WeakPtr_L_classFleet_G__Cdouble_G__G_(class util__Darray_L_class_util__WeakPtr_L_classFleet_G__G_ const &,class util__Darray_L_structutil__tuple2_L_class_util__WeakPtr_L_classFleet_G__Cdouble_G__G_ const &) */

void __cdecl
util__Zip_class_util__WeakPtr_class_Fleet__struct_util__tuple2_class_util__WeakPtr_class_Fleet__double
          (Darray_L_class_util__WeakPtr_L_class_Fleet_G___G_ *param_1,
          Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G___G_ *param_2)

{
  undefined8 stack0xfffffffc;
  ReferenceController *pRVar1;
  ReferenceController *this;
  int *piVar2;
  Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G___G_ *pDVar3;
  Darray_L_class_util__WeakPtr_L_class_Fleet_G___G_ *pDVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined4 *puVar13;
  int iVar14;
  int *in_stack_0000000c;
  undefined4 uStack_60;
  ReferenceController *pRStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  ReferenceController *pRStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  ReferenceController *pRStack_3c;
  undefined4 uStack_38;
  ReferenceController *pRStack_34;
  undefined4 *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  ReferenceController *pRStack_20;
  Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G___G_ *pDStack_1c;
  undefined4 *puStack_18;
  Darray_L_class_util__WeakPtr_L_class_Fleet_G___G_ *pDStack_14;
  undefined4 *puStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  puVar13 = (undefined4 *)0x0;
  pDStack_1c = param_2;
  pDStack_14 = param_1;
  piStack_24 = in_stack_0000000c;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  puStack_18 = (undefined4 *)0x0;
  uVar6 = (**(code **)(uintptr_t)(*in_stack_0000000c + 0xc))();
  uVar7 = (**(code **)(*(int *)pDStack_1c + 0xc))();
  *(undefined ***)param_1 =
       &vftable_460;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((int)uVar6 < (int)uVar7) {
    uVar6 = uVar7;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar6;
  if (((int)uVar6 < 0) || (0x3fffffff < (int)uVar6)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar6) {
    uVar7 = -(uint)((int)((ulonglong)uVar6 * 0x18 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 0x18);
    puVar8 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar7) | uVar7 + 4);
    pDVar4 = pDStack_14;
    if (puVar8 == (uint *)0x0) {
      puVar12 = (uint *)0x0;
    }
    else {
      *puVar8 = uVar6;
      puVar12 = puVar8 + 1;
      if (uVar6 != 0) {
        puVar9 = puVar8 + 5;
        puVar8 = puVar12;
        do {
          *puVar8 = 0;
          puVar8 = puVar8 + 6;
          puVar9[-3] = 0;
          puVar9[-2] = 0;
          puVar9[-1] = 0;
          puVar9[0] = 0;
          puVar9[1] = 0;
          uVar6 = uVar6 - 1;
          puVar9 = puVar9 + 6;
        } while (uVar6 != 0);
      }
    }
    *(uint **)(param_1 + 4) = puVar12;
    iStack_c = 0;
    if (0 < *(int *)(param_1 + 0xc)) {
      iVar14 = 0;
      do {
        puVar13 = (undefined4 *)(*(int *)(pDVar4 + 4) + iVar14);
        *puVar13 = 0;
        pRVar1 = (ReferenceController *)puVar13[1];
        puVar13[1] = 0;
        if (pRVar1 != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(pRVar1);
        }
        pRVar1 = (ReferenceController *)puVar13[3];
        puVar13[2] = 0;
        puVar13[3] = 0;
        if (pRVar1 != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(pRVar1);
        }
        iStack_c = iStack_c + 1;
        *(undefined8 *)(puVar13 + 4) = 0;
        iVar14 = iVar14 + 0x18;
        puVar13 = puStack_18;
      } while (iStack_c < *(int *)(pDVar4 + 0xc));
    }
  }
  iStack_c = 0;
  while( true ) {
    piVar2 = piStack_24;
    iVar14 = (**(code **)(uintptr_t)(*piStack_24 + 0xc))();
    iVar10 = (**(code **)(*(int *)pDStack_1c + 0xc))();
    if (iVar14 < iVar10) {
      iVar14 = iVar10;
    }
    if (iVar14 <= iStack_c) break;
    iVar14 = (**(code **)(uintptr_t)(*piVar2 + 0xc))();
    if (iStack_c < iVar14) {
      uVar6 = (uint)puVar13 | 1;
      puVar13 = (undefined4 *)(**(code **)*piVar2)(&iStack_c);
      uStack_60 = *puVar13;
      pRStack_5c = (ReferenceController *)puVar13[1];
      if (pRStack_5c != (ReferenceController *)0x0) {
        util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(pRStack_5c);
      }
      uStack_58 = *(undefined8 *)(puVar13 + 2);
      puVar13 = &uStack_60;
    }
    else {
      uStack_50 = 0;
      uVar6 = (uint)puVar13 | 2;
      pRStack_4c = (ReferenceController *)0x0;
      uStack_48 = 0;
      puVar13 = &uStack_50;
    }
    pDVar3 = pDStack_1c;
    puStack_18 = puVar13;
    iVar14 = (**(code **)(*(int *)pDStack_1c + 0xc))();
    if (iStack_c < iVar14) {
      puVar11 = (undefined4 *)(*(code *)**(undefined4 **)pDVar3)(&iStack_c);
      uStack_40 = *puVar11;
      pRStack_3c = (ReferenceController *)puVar11[1];
      if (pRStack_3c != (ReferenceController *)0x0) {
        util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(pRStack_3c);
      }
      puStack_10 = &uStack_40;
      uVar7 = 4;
    }
    else {
      uStack_38 = 0;
      puStack_10 = &uStack_38;
      uVar7 = 8;
      pRStack_34 = (ReferenceController *)0x0;
    }
    pRVar1 = (ReferenceController *)puVar13[1];
    puStack_30 = (undefined4 *)(uVar7 | uVar6);
    uStack_2c = *puVar13;
    if (pRVar1 != (ReferenceController *)0x0) {
      util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(pRVar1);
    }
    this = (ReferenceController *)puStack_10[1];
    uStack_28 = *puStack_10;
    if (this != (ReferenceController *)0x0) {
      util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(this);
    }
    if (pRVar1 != (ReferenceController *)0x0) {
      util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(pRVar1);
    }
    if ((this != (ReferenceController *)0x0) &&
       (util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(this), this != (ReferenceController *)0x0)) {
      util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(this);
    }
    if (pRVar1 != (ReferenceController *)0x0) {
      util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(pRVar1);
    }
    if (this != (ReferenceController *)0x0) {
      ReferenceController__ReleaseWeakReference(this);
    }
    if (pRVar1 != (ReferenceController *)0x0) {
      ReferenceController__ReleaseWeakReference(pRVar1);
    }
    if (this != (ReferenceController *)0x0) {
      ReferenceController__ReleaseWeakReference(this);
    }
    if (pRVar1 != (ReferenceController *)0x0) {
      ReferenceController__ReleaseWeakReference(pRVar1);
    }
    iVar14 = *(int *)(pDStack_14 + 8);
    puStack_10 = (undefined4 *)(iVar14 + 1);
    Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cstruct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G___G___G___SetSize((Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cstruct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G___G___G_
               *)pDStack_14,(int *)&puStack_10);
    bVar5 = Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cstruct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G___G___G___CheckSize((Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cstruct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G___G___G_
                         *)pDStack_14,iVar14);
    if (bVar5) {
      iVar14 = *(int *)(pDStack_14 + 8);
      puStack_10 = *(undefined4 **)(pDStack_14 + 4);
      pRStack_20 = (ReferenceController *)puStack_10[iVar14 * 6 + -5];
      puStack_10[iVar14 * 6 + -6] = uStack_28;
      puStack_10[iVar14 * 6 + -5] = (undefined4)(uintptr_t)(this);
      if (this != (ReferenceController *)0x0) {
        util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(this);
      }
      if (pRStack_20 != (ReferenceController *)0x0) {
        ReferenceController__ReleaseWeakReference(pRStack_20);
      }
      pRStack_20 = (ReferenceController *)puStack_10[iVar14 * 6 + -3];
      puStack_10[iVar14 * 6 + -4] = uStack_2c;
      puStack_10[iVar14 * 6 + -3] = (undefined4)(uintptr_t)(pRVar1);
      if (pRVar1 != (ReferenceController *)0x0) {
        util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(pRVar1);
      }
      if (pRStack_20 != (ReferenceController *)0x0) {
        ReferenceController__ReleaseWeakReference(pRStack_20);
      }
      *(undefined8 *)(puStack_10 + iVar14 * 6 + -2) = *(undefined8 *)(puStack_18 + 2);
    }
    if (pRVar1 != (ReferenceController *)0x0) {
      ReferenceController__ReleaseWeakReference(pRVar1);
    }
    if (this != (ReferenceController *)0x0) {
      ReferenceController__ReleaseWeakReference(this);
    }
    puVar13 = puStack_30;
    if ((((uint)puStack_30 & 8) != 0) &&
       (puVar13 = (undefined4 *)((uint)puStack_30 & 0xfffffff7),
       pRStack_34 != (ReferenceController *)0x0)) {
      ReferenceController__ReleaseWeakReference(pRStack_34);
    }
    if ((((uint)puVar13 & 4) != 0) &&
       (puVar13 = (undefined4 *)((uint)puVar13 & 0xfffffffb),
       pRStack_3c != (ReferenceController *)0x0)) {
      ReferenceController__ReleaseWeakReference(pRStack_3c);
    }
    if ((((uint)puVar13 & 2) != 0) &&
       (puVar13 = (undefined4 *)((uint)puVar13 & 0xfffffffd),
       pRStack_4c != (ReferenceController *)0x0)) {
      ReferenceController__ReleaseWeakReference(pRStack_4c);
    }
    if ((((uint)puVar13 & 1) != 0) &&
       (puVar13 = (undefined4 *)((uint)puVar13 & 0xfffffffe),
       pRStack_5c != (ReferenceController *)0x0)) {
      ReferenceController__ReleaseWeakReference(pRStack_5c);
    }
    iStack_c = iStack_c + 1;
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0075a300 Darray_LevelSpeakerMessage_ ====


/* public:  util__Darray_L_structLevelSpeakerMessage_G___Darray_L_struct_LevelSpeakerMessage_G_(int) */

Darray_L_struct_LevelSpeakerMessage_G_ * 
util__Darray_struct_LevelSpeakerMessage___Darray_struct_LevelSpeakerMessage
          (Darray_L_struct_LevelSpeakerMessage_G_ *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  Str_L_char_G_ SStack_34;
  Str_L_char_G_ SStack_28;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  *(undefined ***)this = &vftable_416;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(int *)(this + 0xc) = param_1;
  if ((param_1 < 0) || (0x3fffffff < param_1)) {
    *(undefined4 *)(this + 0xc) = 0;
  }
  else if (0 < param_1) {
    uVar2 = -(uint)((int)((ulonglong)(uint)param_1 * 0x1c >> 0x20) != 0) |
            (uint)((ulonglong)(uint)param_1 * 0x1c);
    piVar1 = (int *)port_op_new(-(uint)(0xfffffffb < uVar2) | uVar2 + 4);
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      *piVar1 = param_1;
      piVar1 = piVar1 + 1;
      piVar3 = piVar1;
      if (param_1 != 0) {
        do {
          *piVar3 = 0;
          SStack_1c.Data = (char *)0x0;
          SStack_1c.Capacity = 0;
          param_1 = param_1 + -1;
          SStack_1c.Length = 0;
          SStack_10.Data = (char *)0x0;
          SStack_10.Capacity = 0;
          SStack_10.Length = 0;
          LocStr__LocStr((LocStr *)(piVar3 + 1),&SStack_10,&SStack_1c);
          if (SStack_10.Data != (char *)0x0) {
            port_op_delete(SStack_10.Data);
            SStack_10.Data = (char *)0x0;
          }
          if (SStack_1c.Data != (char *)0x0) {
            port_op_delete(SStack_1c.Data);
          }
          piVar3 = piVar3 + 7;
        } while (param_1 != 0);
      }
    }
    iVar4 = 0;
    *(int **)(this + 4) = piVar1;
    if (0 < *(int *)(this + 0xc)) {
      param_1 = 0;
      do {
        SStack_10.Data = (char *)0x0;
        SStack_10.Capacity = 0;
        SStack_10.Length = 0;
        SStack_1c.Data = (char *)0x0;
        SStack_1c.Capacity = 0;
        SStack_1c.Length = 0;
        LocStr__LocStr((LocStr *)&SStack_34,&SStack_1c,&SStack_10);
        if (SStack_1c.Data != (char *)0x0) {
          port_op_delete(SStack_1c.Data);
          SStack_1c.Data = (char *)0x0;
        }
        if (SStack_10.Data != (char *)0x0) {
          port_op_delete(SStack_10.Data);
          SStack_10.Data = (char *)0x0;
        }
        iVar5 = *(int *)(this + 4);
        *(undefined4 *)(iVar5 + param_1) = 0;
        iVar5 = param_1 + iVar5;
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar5 + 4),&SStack_34);
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar5 + 0x10),&SStack_28);
        if (SStack_28.Data != (char *)0x0) {
          port_op_delete(SStack_28.Data);
          SStack_28.Data = (char *)0x0;
        }
        if (SStack_34.Data != (char *)0x0) {
          port_op_delete(SStack_34.Data);
        }
        iVar4 = iVar4 + 1;
        param_1 = param_1 + 0x1c;
      } while (iVar4 < *(int *)(this + 0xc));
    }
    return this;
  }
  return this;
}





//==== 0075a500 Darray_PendingBattle_ ====


/* public:  util__Darray_L_structPendingBattle_G___Darray_L_structPendingBattle_G_(class
   util__Darray_L_structPendingBattle_G_ const &) */

Darray_L_struct_PendingBattle_G_ * 
util__Darray_struct_PendingBattle___Darray_struct_PendingBattle
          (Darray_L_struct_PendingBattle_G_ *this,Darray_L_struct_PendingBattle_G_ *param_1)

{
  uint *puVar1;
  ReferenceController *pRVar2;
  ReferenceController *pRVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iStack_c;
  Darray_L_struct_PendingBattle_G_ *pDStack_8;
  
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &vftable_459;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  pDStack_8 = this;
  iStack_c = (**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,&iStack_c);
  uVar6 = *(uint *)(this + 0xc);
  uVar5 = -(uint)((int)((ulonglong)uVar6 * 0x18 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 0x18);
  puVar4 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar5) | uVar5 + 4);
  if (puVar4 == (uint *)0x0) {
    puVar4 = (uint *)0x0;
  }
  else {
    *puVar4 = uVar6;
    puVar4 = puVar4 + 1;
    puVar7 = puVar4;
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[4] = 0;
      puVar7[5] = 0;
      puVar7 = puVar7 + 6;
    }
  }
  *(uint **)(this + 4) = puVar4;
  puVar7 = *(uint **)(param_1 + 4);
  if (puVar7 != puVar7 + *(int *)(param_1 + 8) * 6) {
    puVar4 = puVar4 + 1;
    do {
      pRVar2 = (ReferenceController *)*puVar4;
      puVar4[-1] = *puVar7;
      pRVar3 = (ReferenceController *)puVar7[1];
      *puVar4 = (uint)pRVar3;
      if (pRVar3 != (ReferenceController *)0x0) {
        util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(pRVar3);
      }
      if (pRVar2 != (ReferenceController *)0x0) {
        ReferenceController__ReleaseWeakReference(pRVar2);
      }
      pRVar2 = (ReferenceController *)puVar4[2];
      puVar4[1] = puVar7[2];
      pRVar3 = (ReferenceController *)puVar7[3];
      puVar4[2] = (uint)pRVar3;
      if (pRVar3 != (ReferenceController *)0x0) {
        util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(pRVar3);
      }
      if (pRVar2 != (ReferenceController *)0x0) {
        ReferenceController__ReleaseWeakReference(pRVar2);
      }
      puVar1 = puVar7 + 4;
      puVar7 = puVar7 + 6;
      *(undefined8 *)(puVar4 + 3) = *(undefined8 *)puVar1;
      puVar4 = puVar4 + 6;
    } while (puVar7 != (uint *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 0x18));
  }
  return pDStack_8;
}





//==== 0075a650 Darray_PendingBattle__0075a650 ====


/* public:  util__Darray_L_structPendingBattle_G___Darray_L_structPendingBattle_G_(int) */

Darray_L_struct_PendingBattle_G_ * __thiscall
util__Darray_struct_PendingBattle___Darray_struct_PendingBattle__o2
          (Darray_L_struct_PendingBattle_G_ *this,int param_1)

{
  ReferenceController *pRVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  *(undefined ***)this = &vftable_459;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(int *)(this + 0xc) = param_1;
  if ((param_1 < 0) || (0x3fffffff < param_1)) {
    *(undefined4 *)(this + 0xc) = 0;
  }
  else if (0 < param_1) {
    uVar4 = -(uint)((int)((ulonglong)(uint)param_1 * 0x18 >> 0x20) != 0) |
            (uint)((ulonglong)(uint)param_1 * 0x18);
    piVar2 = (int *)port_op_new(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      *piVar2 = param_1;
      piVar2 = piVar2 + 1;
      piVar3 = piVar2;
      if (param_1 != 0) {
        do {
          *piVar3 = 0;
          piVar3[1] = 0;
          piVar3[2] = 0;
          piVar3[3] = 0;
          piVar3[4] = 0;
          piVar3[5] = 0;
          param_1 = param_1 + -1;
          piVar3 = piVar3 + 6;
        } while (param_1 != 0);
      }
    }
    iVar5 = 0;
    *(int **)(this + 4) = piVar2;
    if (0 < *(int *)(this + 0xc)) {
      param_1 = 0;
      do {
        puVar6 = (undefined4 *)(*(int *)(this + 4) + param_1);
        *puVar6 = 0;
        pRVar1 = (ReferenceController *)puVar6[1];
        puVar6[1] = 0;
        if (pRVar1 != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(pRVar1);
        }
        pRVar1 = (ReferenceController *)puVar6[3];
        puVar6[2] = 0;
        puVar6[3] = 0;
        if (pRVar1 != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(pRVar1);
        }
        iVar5 = iVar5 + 1;
        param_1 = param_1 + 0x18;
        *(undefined8 *)(puVar6 + 4) = 0;
      } while (iVar5 < *(int *)(this + 0xc));
    }
    return this;
  }
  return this;
}





//==== 0075a780 Darray_SpeakerMessage__0075a780 ====


/* public:  util__Darray_L_structSpeakerMessage_G___Darray_L_structSpeakerMessage_G_(int) */

Darray_L_struct_SpeakerMessage_G_ * 
util__Darray_struct_SpeakerMessage___Darray_struct_SpeakerMessage
          (Darray_L_struct_SpeakerMessage_G_ *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  Str_L_char_G_ SStack_34;
  Str_L_char_G_ SStack_28;
  Str_L_char_G_ SStack_1c;
  undefined1 uStack_10;
  undefined1 uStack_c;
  int iStack_8;
  
  *(undefined ***)this = (undefined **)(&vftable_82);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(int *)(this + 0xc) = param_1;
  if ((param_1 < 0) || (0x3fffffff < param_1)) {
    *(undefined4 *)(this + 0xc) = 0;
  }
  else if (0 < param_1) {
    uVar3 = -(uint)((int)((ulonglong)(uint)param_1 * 0x34 >> 0x20) != 0) |
            (uint)((ulonglong)(uint)param_1 * 0x34);
    piVar1 = (int *)port_op_new(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
    if (piVar1 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      *piVar1 = param_1;
      piVar4 = piVar1 + 1;
      if (param_1 != 0) {
        piVar2 = piVar1 + 5;
        piVar1 = piVar4;
        do {
          *piVar1 = 0;
          piVar1 = piVar1 + 0xd;
          *(undefined1 *)(piVar2 + -3) = 0;
          piVar2[-2] = 0;
          piVar2[-1] = 0;
          *piVar2 = 0;
          piVar2[1] = 0;
          piVar2[2] = 0;
          piVar2[3] = 0;
          piVar2[4] = 0;
          piVar2[5] = 0;
          piVar2[6] = 0;
          *(undefined1 *)(piVar2 + 7) = 0;
          *(undefined1 *)(piVar2 + 8) = 0;
          param_1 = param_1 + -1;
          piVar2 = piVar2 + 0xd;
        } while (param_1 != 0);
      }
    }
    *(int **)(this + 4) = piVar4;
    param_1 = 0;
    if (0 < *(int *)(this + 0xc)) {
      iStack_8 = 0;
      do {
        puVar5 = (undefined4 *)(*(int *)(this + 4) + iStack_8);
        SStack_34.Data = (char *)0x0;
        SStack_34.Capacity = 0;
        SStack_34.Length = 0;
        SStack_28.Data = (char *)0x0;
        SStack_1c.Length = 0;
        SStack_28.Capacity = 0;
        SStack_28.Length = 0;
        SStack_1c.Data = (char *)0x0;
        SStack_1c.Capacity = 0;
        uStack_10 = 0;
        uStack_c = 0;
        *puVar5 = 0;
        *(undefined1 *)(puVar5 + 1) = 0;
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar5 + 2),&SStack_34);
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar5 + 5),&SStack_28);
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar5 + 8),&SStack_1c);
        param_1 = param_1 + 1;
        *(undefined1 *)(puVar5 + 0xb) = 0;
        iStack_8 = iStack_8 + 0x34;
        *(undefined1 *)(puVar5 + 0xc) = 0;
      } while (param_1 < *(int *)(this + 0xc));
      return this;
    }
  }
  return this;
}





//==== 0075ab10 Darray_util__SharedPtr_Body____0075ab10 ====


/* public:  util__Darray_L_classutil__SharedPtr_L_classBody_G__G___Darray_L_class_util__SharedPtr_L_classBody_G__G_(int) */

Darray_L_class_util__SharedPtr_L_class_Body_G___G_ * __thiscall
util__Darray_class_util__SharedPtr_class_Body_____Darray_class_util__SharedPtr_class_Body__o2
          (Darray_L_class_util__SharedPtr_L_class_Body_G___G_ *this,int param_1)

{
  int iVar1;
  ReferenceController *this_00;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  ReferenceControllerRegistry *this_01;
  uint uVar5;
  int iVar6;
  
  *(undefined ***)this = (undefined **)(&vftable_48);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(int *)(this + 0xc) = param_1;
  if ((param_1 < 0) || (0x3fffffff < param_1)) {
    *(undefined4 *)(this + 0xc) = 0;
  }
  else if (0 < param_1) {
    uVar5 = -(uint)((int)((ulonglong)(uint)param_1 * 8 >> 0x20) != 0) |
            (uint)((ulonglong)(uint)param_1 * 8);
    piVar3 = (int *)port_op_new(-(uint)(0xfffffffb < uVar5) | uVar5 + 4);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      *piVar3 = param_1;
      piVar3 = piVar3 + 1;
      piVar4 = piVar3;
      if (param_1 != 0) {
        do {
          *piVar4 = 0;
          piVar4[1] = 0;
          param_1 = param_1 + -1;
          piVar4 = piVar4 + 2;
        } while (param_1 != 0);
      }
    }
    iVar6 = 0;
    *(int **)(this + 4) = piVar3;
    if (0 < *(int *)(this + 0xc)) {
      do {
        iVar1 = *(int *)(this + 4);
        this_00 = *(ReferenceController **)(iVar1 + 4 + iVar6 * 8);
        piVar3 = *(int **)(iVar1 + iVar6 * 8);
        *(undefined4 *)(iVar1 + iVar6 * 8) = 0;
        *(undefined4 *)(iVar1 + 4 + iVar6 * 8) = 0;
        if ((this_00 != (ReferenceController *)0x0) &&
           (bVar2 = ReferenceController__ReleaseStrongReference(this_00), bVar2)) {
          if (piVar3 != (int *)0x0) {
            (**(code **)(uintptr_t)(*piVar3 + 4))(1);
          }
          this_01 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
          ReferenceControllerRegistry__PointerWasDestroyed(this_01,piVar3);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(this + 0xc));
      return this;
    }
  }
  return this;
}





//==== 0075ac70 Quaternion_double__0075ac70 ====


/* public:  util__Quaternion_double___Quaternion_double(struct util__Vec3_L_double_G_,struct
   util__Vec3_L_double_G_,struct util__Vec3_L_double_G_) */

Quaternion_L_double_G_ * 
util__Quaternion_double___Quaternion_double
          (Quaternion_L_double_G_ *this,Vec4_L_double_G_ param_1,Vec4_L_double_G_ param_2,Vec4_L_double_G_ param_3)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Matrix3x3_L_double_G_ MStack_50;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(unsigned int *)(&(MStack_50.Data[0])) = 0;
  *(unsigned int *)((char *)&(MStack_50.Data[0]) + 4) = 0x3ff00000;
  *(unsigned int *)(&(MStack_50.Data[1])) = 0;
  *(unsigned int *)((char *)&(MStack_50.Data[1]) + 4) = 0;
  *(unsigned int *)(&(MStack_50.Data[2])) = 0;
  *(unsigned int *)((char *)&(MStack_50.Data[2]) + 4) = 0;
  *(unsigned int *)(&(MStack_50.Data[3])) = 0;
  *(unsigned int *)((char *)&(MStack_50.Data[3]) + 4) = 0;
  iVar1 = 0;
  *(unsigned int *)(&(MStack_50.Data[4])) = 0;
  *(unsigned int *)((char *)&(MStack_50.Data[4]) + 4) = 0x3ff00000;
  *(unsigned int *)(&(MStack_50.Data[5])) = 0;
  *(unsigned int *)((char *)&(MStack_50.Data[5]) + 4) = 0;
  *(unsigned int *)(&(MStack_50.Data[6])) = 0;
  *(unsigned int *)((char *)&(MStack_50.Data[6]) + 4) = 0;
  *(unsigned int *)(&(MStack_50.Data[7])) = 0;
  *(unsigned int *)((char *)&(MStack_50.Data[7]) + 4) = 0;
  MStack_50.Data[8] = 1.0;
  do {
    if (iVar1 == 0) {
LAB_0075acfb:
      uVar2 = param_3.X;
      uVar3 = param_3.Y;
    }
    else if (iVar1 == 1) {
      uVar2 = param_3.Y;
      uVar3 = param_3.Z;
    }
    else {
      if (iVar1 != 2) goto LAB_0075acfb;
      uVar2 = param_3.Z;
      uVar3 = param_3.W;
    }
    MStack_50.Data[iVar1] = (double)CONCAT44(uVar3,uVar2);
    if (iVar1 == 0) {
LAB_0075ad1f:
      uVar2 = param_2.X;
      uVar3 = param_2.Y;
    }
    else if (iVar1 == 1) {
      uVar2 = param_2.Y;
      uVar3 = param_2.Z;
    }
    else {
      if (iVar1 != 2) goto LAB_0075ad1f;
      uVar2 = param_2.Z;
      uVar3 = param_2.W;
    }
    MStack_50.Data[iVar1 + 3] = (double)CONCAT44(uVar3,uVar2);
    if (iVar1 == 0) {
LAB_0075ad47:
      uVar2 = param_1.X;
      uVar3 = param_1.Y;
    }
    else if (iVar1 == 1) {
      uVar2 = param_1.Y;
      uVar3 = param_1.Z;
    }
    else {
      if (iVar1 != 2) goto LAB_0075ad47;
      uVar2 = param_1.Z;
      uVar3 = param_1.W;
    }
    MStack_50.Data[iVar1 + 6] = (double)CONCAT44(uVar3,uVar2);
    iVar1 = iVar1 + 1;
    if (2 < iVar1) {
      SetFromMatrix(this,&MStack_50);
      __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return this;
    }
  } while( true );
}





//==== 0075afe0 SpeakerMessage ====


/* public:  SpeakerMessage__SpeakerMessage(struct Speaker *,bool,class
   util__Str_L_char_G_,class util__Str_L_char_G_,class util__Maybe_L_classutil__Str_L_char_G__G_,bool) */

SpeakerMessage * 
SpeakerMessage__SpeakerMessage
          (SpeakerMessage *this,Speaker *param_1,bool param_2,char *param_3,undefined4 param_5,
          undefined4 param_6,char *param_4,undefined4 param_8,undefined4 param_9,char *param_10,
          undefined4 param_11,undefined4 param_12,undefined1 param_13,undefined1 param_14)

{
  this->Talker = param_1;
  this->AutoClose = param_2;
  util__Str_char___Str_char(&this->Message,(Str_L_char_G_ *)&param_3);
  util__Str_char___Str_char(&this->AudioTrack,(Str_L_char_G_ *)&param_4);
  util__Str_char___Str_char(&(this->TutorialTag).Data,(Str_L_char_G_ *)&param_10);
  (this->TutorialTag).IsValidData = (bool)param_13;
  this->SlowPrint = (bool)param_14;
  if (param_3 != (char *)0x0) {
    port_op_delete(param_3);
    param_3 = (char *)0x0;
  }
  if (param_4 != (char *)0x0) {
    port_op_delete(param_4);
    param_4 = (char *)0x0;
  }
  if (param_10 != (char *)0x0) {
    port_op_delete(param_10);
  }
  return this;
}





//==== 0075b320 Darray_BacklogMessage_ ====


/* public: virtual __thiscall util__Darray_struct_BacklogMessage____Darray_struct_BacklogMessage(void) */

void __thiscall
util__Darray_struct_BacklogMessage____Darray_struct_BacklogMessage(Darray_L_struct_BacklogMessage_G_ *this)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(this + 4);
  *(undefined ***)this = &vftable_83;
  if (iVar4 != 0) {
    piVar1 = (int *)(iVar4 + -4);
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    else {
      puVar2 = (undefined4 *)(iVar4 + 0x30 + iVar3 * 0x44);
      do {
        iVar3 = iVar3 + -1;
        if ((void *)puVar2[-0x11] != (void *)0x0) {
          port_op_delete((void *)puVar2[-0x11]);
          puVar2[-0x11] = 0;
        }
        if ((void *)puVar2[-0x14] != (void *)0x0) {
          port_op_delete((void *)puVar2[-0x14]);
          puVar2[-0x14] = 0;
        }
        puVar2[-0x1c] = (undefined4)(uintptr_t)(&vftable_5);
        if ((void *)puVar2[-0x1b] != (void *)0x0) {
          port_op_delete((void *)puVar2[-0x1b]);
          puVar2[-0x1b] = 0;
        }
        puVar2 = puVar2 + -0x11;
      } while (iVar3 != 0);
      iVar4 = *piVar1;
    }
    port_op_delete(piVar1,iVar4 * 0x44 + 4);
  }
  *(undefined ***)this = (undefined **)(&vftable);
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 0075b460 tuple2_util__WeakPtr_Fleet__util__tuple2_util__WeakPtr_Fleet__double___ ====

/* public:  tuple2_L_classutil__WeakPtr_L_classFleet_G__Cstruct_util__tuple2_L_classutil__WeakPtr_L_classFleet_G__Cdouble_G__G___dtor(void) */

void 
util__tuple2_class_util__WeakPtr_class_Fleet__struct_util__tuple2_class_util__WeakPtr_class_Fleet__double______tuple2_class_util__WeakPtr_class_Fleet__struct_util__tuple2_class_util__WeakPtr_class_Fleet__double(tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cstruct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G___G_
           *this)

{
  int *piVar1;
  ReferenceController *pRVar2;
  HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *pHVar3;
  undefined4 *puVar4;
  Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_ *pDVar5;
  int iVar6;
  
  if (*(ReferenceController **)(this + 0xc) != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(*(ReferenceController **)(this + 0xc));
  }
  pRVar2 = *(ReferenceController **)(this + 4);
  if (pRVar2 == (ReferenceController *)0x0) {
    return;
  }
  piVar1 = &pRVar2->WeakReferenceCount;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.cpp",0x15
              ,"WeakReferenceCount >= 0",(char *)0x0);
    DebugBreak();
  }
  if ((pRVar2->StrongReferenceCount == 0) && (pRVar2->WeakReferenceCount == 0)) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_0098956c) {
      _Init_thread_header(&DAT_0098956c);
      if (DAT_0098956c == -1) {
        DAT_00989568 = (undefined4)(uintptr_t)((HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0);
        pHVar3 = (HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)(uintptr_t)(port_op_new(8));
        if (pHVar3 == (HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0) {
          pHVar3 = (HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0;
        }
        else {
          pHVar3->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                          *)0x0;
          pHVar3->Capacity = 0;
          pHVar3->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                          *)0x0;
          pHVar3->Capacity = 10000;
          puVar4 = (undefined4 *)(uintptr_t)(port_op_new(0x27104));
          if (puVar4 == (undefined4 *)0x0) {
            pHVar3->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                            *)0x0;
          }
          else {
            *puVar4 = 10000;
            iVar6 = 10000;
            pDVar5 = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                      *)(puVar4 + 1);
            do {
              pDVar5->_pad_0x0_0 =
                   (int)&vftable_554;
              pDVar5->Data = (tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0;
              pDVar5->Size = 0;
              pDVar5->Capacity = 0;
              iVar6 = iVar6 + -1;
              pDVar5 = pDVar5 + 1;
            } while (iVar6 != 0);
            pHVar3->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                            *)(puVar4 + 1);
          }
        }
        DAT_00989568 = (undefined4)(uintptr_t)(pHVar3);
        atexit(FUN_0090ff50);
        _Init_thread_footer(&DAT_0098956c);
      }
    }
    ReferenceControllerRegistry__Unregister((ReferenceControllerRegistry *)DAT_00989568,pRVar2);
  }
  return;
}

//==== 0075b480 NotificationManager_0075b480 ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: __thiscall NotificationManager___NotificationManager(void) */

void __thiscall NotificationManager___NotificationManager(NotificationManager *this)

{
  ReferenceController *this_00;
  SpeakerMessage *this_01;
  pmf_530da703 *ppVar1;
  
  this_00 = (this->MessageUI).Controller;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  Darray_L_BacklogMessage_G___dtor(&this->NotificationBacklog);
  this_01 = (this->CurrentNotifications).Data;
  (this->CurrentNotifications)._pad_0x0_0 = (int)&vftable_82;
  if (this_01 != (SpeakerMessage *)0x0) {
    SpeakerMessage___vector_deleting_destructor(this_01,3);
  }
  (this->CurrentNotifications).Data = (SpeakerMessage *)0x0;
  (this->CurrentNotifications)._pad_0x0_0 = (int)&vftable;
  ppVar1 = (this->NotificationManagerMemoizationHandlerInstance).ResetFunctions.Data;
  (this->NotificationManagerMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 =
       (int)&vftable_2;
  if (ppVar1 != (pmf_530da703 *)0x0) {
    port_op_delete(ppVar1);
  }
  (this->NotificationManagerMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 =
       (int)&vftable;
  (this->NotificationManagerMemoizationHandlerInstance).ResetFunctions.Data = (pmf_530da703 *)0x0;
  return;
}

//==== 0075b650 operator__0075b650 ====


/* public: class util__Darray_L_structLevelSpeakerMessage_G_ &  util__Darray_struct_LevelSpeakerMessage___operator(class util__Darray_L_structLevelSpeakerMessage_G_ const &) */

Darray_L_struct_LevelSpeakerMessage_G_ * 
util__Darray_struct_LevelSpeakerMessage___operator
          (Darray_L_struct_LevelSpeakerMessage_G_ *this,Darray_L_struct_LevelSpeakerMessage_G_ *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iStack_8;
  
  iStack_8 = (**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,&iStack_8);
  iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
  if (iVar1 == 0) {
    (**(code **)(*(int *)this + 0x10))();
    return this;
  }
  CheckSizeDestructive(this);
  puVar3 = *(undefined4 **)(param_1 + 4);
  puVar2 = *(undefined4 **)(this + 4);
  if (puVar3 == puVar3 + *(int *)(param_1 + 8) * 7) {
    return this;
  }
  do {
    *puVar2 = *puVar3;
    util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar2 + 1),(Str_L_char_G_ *)(puVar3 + 1));
    util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar2 + 4),(Str_L_char_G_ *)(puVar3 + 4));
    puVar2 = puVar2 + 7;
    puVar3 = puVar3 + 7;
  } while (puVar3 != (undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 0x1c));
  return this;
}





//==== 0075b710 operator__0075b710 ====


/* public: class util__Darray_L_structLevelTutorialMessage_G_ &  util__Darray_struct_LevelTutorialMessage___operator(class util__Darray_L_structLevelTutorialMessage_G_ const &) */

Darray_L_struct_LevelTutorialMessage_G_ * 
util__Darray_struct_LevelTutorialMessage___operator
          (Darray_L_struct_LevelTutorialMessage_G_ *this,Darray_L_struct_LevelTutorialMessage_G_ *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iStack_8;
  
  iStack_8 = (**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,&iStack_8);
  iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
  if (iVar1 == 0) {
    (**(code **)(*(int *)this + 0x10))();
    return this;
  }
  CheckSizeDestructive(this);
  puVar3 = *(undefined4 **)(param_1 + 4);
  puVar2 = *(undefined4 **)(this + 4);
  if (puVar3 == puVar3 + *(int *)(param_1 + 8) * 10) {
    return this;
  }
  do {
    *puVar2 = *puVar3;
    util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar2 + 1),(Str_L_char_G_ *)(puVar3 + 1));
    util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar2 + 4),(Str_L_char_G_ *)(puVar3 + 4));
    util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar2 + 7),(Str_L_char_G_ *)(puVar3 + 7));
    puVar2 = puVar2 + 10;
    puVar3 = puVar3 + 10;
  } while (puVar3 != (undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 0x28));
  return this;
}





//==== 0075b9d0 operator__0075b9d0 ====


/* public: class util__Maybe_L_structPendingBattle_G_ &  util__Maybe_struct_PendingBattle___operator(class util__Maybe_L_structPendingBattle_G_ const &) */

Maybe_L_struct_PendingBattle_G_ * 
util__Maybe_struct_PendingBattle___operator
          (Maybe_L_struct_PendingBattle_G_ *this,Maybe_L_struct_PendingBattle_G_ *param_1)

{
  ReferenceController *pRVar1;
  ReferenceController *pRVar2;
  
  pRVar1 = *(ReferenceController **)(this + 4);
  *(undefined4 *)this = *(undefined4 *)param_1;
  pRVar2 = *(ReferenceController **)(param_1 + 4);
  *(ReferenceController **)(this + 4) = pRVar2;
  if (pRVar2 != (ReferenceController *)0x0) {
    util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(pRVar2);
  }
  if (pRVar1 != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(pRVar1);
  }
  pRVar1 = *(ReferenceController **)(this + 0xc);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  pRVar2 = *(ReferenceController **)(param_1 + 0xc);
  *(ReferenceController **)(this + 0xc) = pRVar2;
  if (pRVar2 != (ReferenceController *)0x0) {
    util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(pRVar2);
  }
  if (pRVar1 != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(pRVar1);
  }
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  this[0x18] = param_1[0x18];
  return this;
}





//==== 0075e5b0 operator___0075e5b0 ====


/* public: class util__Darray_L_classutil__WeakPtr_L_structModuleCompartment_G__G_ & 
   util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____operator(class util__Darray_L_class_util__WeakPtr_L_structModuleCompartment_G__G_ const &) */

Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ * 
util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____operator__o2
          (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *this,
          Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *param_1)

{
  ReferenceController *this_00;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  pDVar1 = param_1;
  if (*(int *)(this + 8) == 0) {
    Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___op_assign
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)this,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)param_1);
    return this;
  }
  iVar2 = (**(code **)(*(int *)param_1 + 0xc))();
  if (iVar2 != 0) {
    iVar2 = *(int *)(this + 8);
    iVar3 = (**(code **)(*(int *)pDVar1 + 0xc))();
    param_1 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)(iVar3 + *(int *)(this + 8))
    ;
    Darray_L_class_util__WeakPtr_L_class_Body_G___G___SetSize
              ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)this,(int *)&param_1);
    Darray_L_class_util__WeakPtr_L_class_Body_G___G___CheckSize
              ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)this,iVar2);
    puVar4 = *(undefined4 **)(pDVar1 + 4);
    puVar5 = (undefined4 *)(*(int *)(this + 4) + iVar2 * 8);
    if (puVar5 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 8)) {
      do {
        param_1 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)puVar5[1];
        *puVar5 = *puVar4;
        this_00 = (ReferenceController *)puVar4[1];
        puVar5[1] = (undefined4)(uintptr_t)(this_00);
        if (this_00 != (ReferenceController *)0x0) {
          util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(this_00);
        }
        if (param_1 != (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)0x0) {
          ReferenceController__ReleaseWeakReference((ReferenceController *)param_1);
        }
        puVar5 = puVar5 + 2;
        puVar4 = puVar4 + 2;
      } while (puVar5 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 8));
    }
    return this;
  }
  return this;
}





//==== 0075e780 scalar_deleting_destructor_0075e780 ====


/* public: virtual void * __thiscall util__Darray_L_structWorldObject_G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_WorldObject____scalar_deleting_destructor__o2
          (Darray_L_struct_WorldObject_G_ *this,uint param_1)

{
  util__Darray_struct_WorldObject____scalar_deleting_destructor(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 0075e7b0 scalar_deleting_destructor_0075e7b0 ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void * __thiscall CameraPanner:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall CameraPanner___scalar_deleting_destructor(CameraPanner *this,uint param_1)

{
  this->_pad_0x0_0 = (int)&vftable_49;
  this->_pad_0x158_86 = (int)&vftable_48;
  if ((SharedPtr_L_UIWidget_G_ *)this->_pad_0x15c_87 != (SharedPtr_L_UIWidget_G_ *)0x0) {
    util__SharedPtr_L_UIWidget_G____vector_deleting_destructor_
              ((SharedPtr_L_UIWidget_G_ *)this->_pad_0x15c_87,3);
  }
  this->_pad_0x15c_87 = 0;
  this->_pad_0x158_86 = (int)&vftable;
  if ((ReferenceController *)this->_pad_0x154_85 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this->_pad_0x154_85);
  }
  UIAttributes___UIAttributes((UIAttributes *)&this->_pad_0x8_2);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x198);
  }
  return this;
}

//==== 0075e820 scalar_deleting_destructor_0075e820 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void * __thiscall CameraRoller:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall CameraRoller___scalar_deleting_destructor(CameraRoller *this,uint param_1)

{
  *(undefined ***)this = &vftable_49;
  *(undefined ***)&this->field_0x158 = (undefined **)(&vftable_48);
  if (*(SharedPtr_L_struct_UIWidget_G_ **)&this->field_0x15c != (SharedPtr_L_struct_UIWidget_G_ *)0x0) {
    util__SharedPtr_struct_UIWidget____vector_deleting_destructor
              (*(SharedPtr_L_struct_UIWidget_G_ **)&this->field_0x15c,3);
  }
  *(undefined4 *)&this->field_0x15c = 0;
  *(undefined ***)&this->field_0x158 = (undefined **)(&vftable);
  if (*(ReferenceController **)&this->field_0x154 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(*(ReferenceController **)&this->field_0x154);
  }
  UIAttributes___UIAttributes((UIAttributes *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,400);
  }
  return this;
}





//==== 0075f350 CheckSize_0075f350 ====


/* private: bool  util__Darray_L_structLevelSpeakerMessage_G___CheckSize(int) */

bool 
util__Darray_struct_LevelSpeakerMessage___CheckSize
          (Darray_L_struct_LevelSpeakerMessage_G_ *this,int param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  LevelSpeakerMessage *this_00;
  uint uVar4;
  LevelSpeakerMessage *pLVar5;
  bool bVar6;
  Str_L_char_G_ SStack_2c;
  Str_L_char_G_ SStack_20;
  uint *puStack_14;
  uint *puStack_10;
  uint *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar3 = *(uint *)(this + 8);
  bVar6 = -1 < (int)uVar3;
  bVar1 = !bVar6;
  if (bVar1) {
    puStack_10 = (uint *)0x0;
    SetSize(this,(int *)&puStack_10);
    uVar3 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar1;
  bVar1 = (int)uVar3 < 0x40000000;
  if (!bVar1) {
    puStack_10 = (uint *)0x3fffffff;
    SetSize(this,(int *)&puStack_10);
    uVar3 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar4 = *(uint *)(this + 0xc);
  if ((int)uVar3 <= (int)uVar4) {
    return bVar1 && bVar6;
  }
  if (uVar4 == 0) {
    *(uint *)(this + 0xc) = uVar3;
    uVar4 = uVar3;
  }
  if ((int)uVar4 < (int)uVar3) {
    do {
      uVar4 = uVar4 * 2;
    } while ((int)uVar4 < (int)uVar3);
    *(uint *)(this + 0xc) = uVar4;
  }
  if (0x3fffffff < (int)uVar4) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar4 = 0x3fffffff;
  }
  uVar3 = -(uint)((int)((ulonglong)uVar4 * 0x1c >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 0x1c);
  puVar2 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
  if (puVar2 == (uint *)0x0) {
    puStack_c = (uint *)0x0;
  }
  else {
    *puVar2 = uVar4;
    puVar2 = puVar2 + 1;
    puStack_c = puVar2;
    while (uVar4 != 0) {
      *puVar2 = 0;
      SStack_2c.Data = (char *)0x0;
      SStack_2c.Capacity = 0;
      uVar4 = uVar4 - 1;
      SStack_2c.Length = 0;
      SStack_20.Data = (char *)0x0;
      SStack_20.Capacity = 0;
      SStack_20.Length = 0;
      LocStr__LocStr((LocStr *)(puVar2 + 1),&SStack_20,&SStack_2c);
      if (SStack_20.Data != (char *)0x0) {
        port_op_delete(SStack_20.Data);
        SStack_20.Data = (char *)0x0;
      }
      if (SStack_2c.Data != (char *)0x0) {
        port_op_delete(SStack_2c.Data);
        SStack_2c.Data = (char *)0x0;
      }
      puVar2 = puVar2 + 7;
    }
  }
  this_00 = *(LevelSpeakerMessage **)(this + 4);
  if (this_00 != (LevelSpeakerMessage *)0x0) {
    puStack_14 = puStack_c + *(int *)(this + 8) * 7;
    puVar2 = puStack_c;
    pLVar5 = this_00;
    puStack_10 = puStack_c;
    if (this_00 != (LevelSpeakerMessage *)(param_1 * 0x1c + (int)this_00)) {
      do {
        puStack_10 = puVar2;
        if (puVar2 == puStack_14) break;
        *puVar2 = (uint)pLVar5->Talker;
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar2 + 1),&pLVar5->Message);
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar2 + 4),(Str_L_char_G_ *)(pLVar5 + 1));
        pLVar5 = (LevelSpeakerMessage *)&pLVar5[1].Message.Length;
        puVar2 = puStack_10 + 7;
        this_00 = *(LevelSpeakerMessage **)(this + 4);
        puStack_10 = puVar2;
      } while (pLVar5 != (LevelSpeakerMessage *)(param_1 * 0x1c + (int)this_00));
    }
    if (this_00 != (LevelSpeakerMessage *)0x0) {
      LevelSpeakerMessage___vector_deleting_destructor(this_00,3);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(uint **)(this + 4) = puStack_c;
  return bStack_5;
}





//==== 0075f930 CheckSizeDestructive_0075f930 ====


/* private: bool  util__Darray_L_structLevelSpeakerMessage_G___CheckSizeDestructive(void) */

bool 
util__Darray_struct_LevelSpeakerMessage___CheckSizeDestructive
          (Darray_L_struct_LevelSpeakerMessage_G_ *this)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  Str_L_char_G_ SStack_24;
  Str_L_char_G_ SStack_18;
  uint *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar3 = *(uint *)(this + 8);
  bVar5 = -1 < (int)uVar3;
  bVar1 = !bVar5;
  if (bVar1) {
    puStack_c = (uint *)0x0;
    SetSize(this,(int *)&puStack_c);
    uVar3 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar1;
  bVar1 = (int)uVar3 < 0x40000000;
  if (!bVar1) {
    puStack_c = (uint *)0x3fffffff;
    SetSize(this,(int *)&puStack_c);
    uVar3 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar4 = *(uint *)(this + 0xc);
  if ((int)uVar3 <= (int)uVar4) {
    return bVar1 && bVar5;
  }
  if (uVar4 == 0) {
    *(uint *)(this + 0xc) = uVar3;
    uVar4 = uVar3;
  }
  if ((int)uVar4 < (int)uVar3) {
    do {
      uVar4 = uVar4 * 2;
    } while ((int)uVar4 < (int)uVar3);
    *(uint *)(this + 0xc) = uVar4;
  }
  if (0x3fffffff < (int)uVar4) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar4 = 0x3fffffff;
  }
  if (*(LevelSpeakerMessage **)(this + 4) != (LevelSpeakerMessage *)0x0) {
    LevelSpeakerMessage___vector_deleting_destructor(*(LevelSpeakerMessage **)(this + 4),3);
    uVar4 = *(uint *)(this + 0xc);
  }
  *(undefined4 *)(this + 4) = 0;
  uVar3 = -(uint)((int)((ulonglong)uVar4 * 0x1c >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 0x1c);
  puVar2 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
  if (puVar2 != (uint *)0x0) {
    *puVar2 = uVar4;
    puVar2 = puVar2 + 1;
    puStack_c = puVar2;
    while (uVar4 != 0) {
      *puVar2 = 0;
      SStack_24.Data = (char *)0x0;
      SStack_24.Capacity = 0;
      uVar4 = uVar4 - 1;
      SStack_24.Length = 0;
      SStack_18.Data = (char *)0x0;
      SStack_18.Capacity = 0;
      SStack_18.Length = 0;
      LocStr__LocStr((LocStr *)(puVar2 + 1),&SStack_18,&SStack_24);
      if (SStack_18.Data != (char *)0x0) {
        port_op_delete(SStack_18.Data);
        SStack_18.Data = (char *)0x0;
      }
      if (SStack_24.Data != (char *)0x0) {
        port_op_delete(SStack_24.Data);
      }
      puVar2 = puVar2 + 7;
    }
    *(uint **)(this + 4) = puStack_c;
    return bStack_5;
  }
  *(undefined4 *)(this + 4) = 0;
  return bStack_5;
}





//==== 0075fac0 CheckSizeDestructive_0075fac0 ====


/* private: bool  util__Darray_L_structLevelTutorialMessage_G___CheckSizeDestructive(void) */

bool 
util__Darray_struct_LevelTutorialMessage___CheckSizeDestructive
          (Darray_L_struct_LevelTutorialMessage_G_ *this)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  bool bVar6;
  Str_L_char_G_ SStack_28;
  Str_L_char_G_ SStack_1c;
  Darray_L_struct_LevelTutorialMessage_G_ *pDStack_10;
  uint *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar3 = *(uint *)(this + 8);
  bVar6 = -1 < (int)uVar3;
  bVar1 = !bVar6;
  pDStack_10 = this;
  if (bVar1) {
    puStack_c = (uint *)0x0;
    SetSize(this,(int *)&puStack_c);
    uVar3 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar1;
  bVar1 = (int)uVar3 < 0x40000000;
  if (!bVar1) {
    puStack_c = (uint *)0x3fffffff;
    SetSize(this,(int *)&puStack_c);
    uVar3 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar5 = *(uint *)(this + 0xc);
  if ((int)uVar3 <= (int)uVar5) {
    return bVar1 && bVar6;
  }
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
  if (*(LevelTutorialMessage **)(this + 4) != (LevelTutorialMessage *)0x0) {
    LevelTutorialMessage___vector_deleting_destructor(*(LevelTutorialMessage **)(this + 4),3);
    uVar5 = *(uint *)(this + 0xc);
  }
  *(undefined4 *)(this + 4) = 0;
  uVar3 = -(uint)((int)((ulonglong)uVar5 * 0x28 >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 0x28);
  puVar2 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
  if (puVar2 == (uint *)0x0) {
    *(undefined4 *)(this + 4) = 0;
    return bStack_5;
  }
  *puVar2 = uVar5;
  puStack_c = puVar2 + 1;
  if (uVar5 != 0) {
    puVar2 = puVar2 + 4;
    puVar4 = puStack_c;
    do {
      *puVar4 = 0;
      puVar2[-2] = 0;
      puVar2[-1] = 0;
      uVar5 = uVar5 - 1;
      *puVar2 = 0;
      SStack_28.Data = (char *)0x0;
      SStack_28.Capacity = 0;
      SStack_28.Length = 0;
      SStack_1c.Data = (char *)0x0;
      SStack_1c.Capacity = 0;
      SStack_1c.Length = 0;
      LocStr__LocStr((LocStr *)(puVar2 + 1),&SStack_1c,&SStack_28);
      if (SStack_1c.Data != (char *)0x0) {
        port_op_delete(SStack_1c.Data);
        SStack_1c.Data = (char *)0x0;
      }
      if (SStack_28.Data != (char *)0x0) {
        port_op_delete(SStack_28.Data);
      }
      puVar4 = puVar4 + 10;
      puVar2 = puVar2 + 10;
      this = pDStack_10;
    } while (uVar5 != 0);
  }
  *(uint **)(this + 4) = puStack_c;
  return bStack_5;
}





//==== 0075fde0 CheckSizeDestructive_0075fde0 ====


/* private: bool  util__Darray_L_classutil__Darray_L_classutil__WeakPtr_L_class_SpacecraftComponent_G__G__G___CheckSizeDestructive(void) */

bool 
util__Darray_class_util__Darray_class_util__WeakPtr_class_SpacecraftComponent_______CheckSizeDestructive
          (Darray_L_class_util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___G_ *this)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  bool bVar9;
  Darray_L_class_util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___G_ *pDStack_8;
  
  iVar6 = *(int *)(this + 8);
  bVar9 = -1 < iVar6;
  pDStack_8 = this;
  if (!bVar9) {
    pDStack_8 = (Darray_L_class_util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___G_ *)0x0;
    SetSize(this,(int *)&pDStack_8);
    iVar6 = *(int *)(this + 8);
  }
  bVar7 = iVar6 < 0x40000000;
  if (!bVar7) {
    pDStack_8 = (Darray_L_class_util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___G_ *)
                0x3fffffff;
    SetSize(this,(int *)&pDStack_8);
    iVar6 = *(int *)(this + 8);
  }
  bVar7 = bVar7 && bVar9;
  iVar2 = *(int *)(this + 0xc);
  if (iVar2 < iVar6) {
    if (iVar2 == 0) {
      *(int *)(this + 0xc) = iVar6;
      iVar2 = iVar6;
    }
    if (iVar2 < iVar6) {
      do {
        iVar2 = iVar2 * 2;
      } while (iVar2 < iVar6);
      *(int *)(this + 0xc) = iVar2;
    }
    if (0x3fffffff < iVar2) {
      *(undefined4 *)(this + 0xc) = 0x3fffffff;
    }
    piVar1 = *(int **)(this + 4);
    if (piVar1 != (int *)0x0) {
      if (piVar1[-1] == 0) {
        port_op_delete(piVar1 + -1);
      }
      else {
        (**(code **)(uintptr_t)(*piVar1 + 0x18))(3);
      }
    }
    uVar8 = *(uint *)(this + 0xc);
    *(undefined4 *)(this + 4) = 0;
    uVar5 = -(uint)((int)((ulonglong)uVar8 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar8 * 0x10);
    puVar3 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar5) | uVar5 + 4);
    if (puVar3 == (uint *)0x0) {
      puVar3 = (uint *)0x0;
    }
    else {
      *puVar3 = uVar8;
      puVar3 = puVar3 + 1;
      puVar4 = puVar3;
      if (uVar8 != 0) {
        do {
          *puVar4 = (uint)&vftable_66;
          puVar4[1] = 0;
          puVar4[2] = 0;
          puVar4[3] = 0;
          uVar8 = uVar8 - 1;
          puVar4 = puVar4 + 4;
        } while (uVar8 != 0);
        *(uint **)(this + 4) = puVar3;
        return bVar7;
      }
    }
    *(uint **)(this + 4) = puVar3;
  }
  return bVar7;
}





//==== 0075ff10 Clear_0075ff10 ====


/* public: virtual void  util__Darray_L_structutil__tuple2_L_classutil__WeakPtr_L_class_Fleet_G__Cstructutil__tuple2_L_classutil__WeakPtr_L_classFleet_G__Cdouble_G__G__G___Clear(void) */

void 
util__Darray_struct_util__tuple2_class_util__WeakPtr_class_Fleet__struct_util__tuple2_class_util__WeakPtr_class_Fleet__double_______Clear(Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cstruct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G___G___G_
        *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 0075ff30 Clear_0075ff30 ====


/* public: virtual void  util__Darray_L_structPendingBattle_G___Clear(void) */

void __thiscall util__Darray_struct_PendingBattle___Clear(Darray_L_struct_PendingBattle_G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 0075ff50 Clear_0075ff50 ====


/* public: virtual void  util__Darray_L_structWorldObject_G___Clear(void) */

void __thiscall util__Darray_struct_WorldObject___Clear(Darray_L_struct_WorldObject_G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 00760070 Click_00760070 ====


/* public: virtual void __thiscall CameraPanner__Click(void) */

void __thiscall CameraPanner__Click(CameraPanner *this)

{
  void *pvVar1;
  _func___cdecl_void_void_ptr *p_Var2;
  
  pvVar1 = (this->ClickOff).Callee;
  if ((pvVar1 != (void *)0x0) &&
     (p_Var2 = (this->ClickOff).CallbackFunction, p_Var2 != (_func___cdecl_void_void_ptr *)0x0)) {
    (*p_Var2)(pvVar1);
  }
  return;
}





//==== 00763f70 GetClassID_00763f70 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual unsigned long  StrategicManager__GetClassID(void)const  */

ulong StrategicManager__GetClassID(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_62d720be__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_62d720be__thread_safe_static_guard_0__);
    if ( cde_l2_62d720be__thread_safe_static_guard_0__ == -1) {
       cde_l2_4fe6e8e9_ID
           = util__GetHash("StrategicManager");
      _Init_thread_footer(& cde_l2_62d720be__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_4fe6e8e9_ID;
}





//==== 00763fd0 GetConflictWaitTimeMaximum_s ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: double  StrategicManager__GetConflictWaitTimeMaximum_s(void)const  */

double StrategicManager__GetConflictWaitTimeMaximum_s(void)

{
  return 120.0;
}





//==== 00764890 GetDepth_00764890 ====


/* public: virtual double __thiscall CameraPanner__GetDepth(struct util__Vec2_L_double_G_)const  */

double __thiscall CameraPanner__GetDepth(CameraPanner *this,Vec4_L_double_G_ param_1)

{
  return 1.0;
}





//==== 00765490 GetGlobalLights_00765490 ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual class util__Darray_L_structGlobalLight_G_ 
   TacticalManager__GetGlobalLights(void)const  */

Darray_L_GlobalLight_G_ * TacticalManager__GetGlobalLights(Darray_L_GlobalLight_G_ *__return_storage_ptr__)

{
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_92;
  __return_storage_ptr__->Data = (GlobalLight *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  return __return_storage_ptr__;
}

//==== 00765ee0 GetMinZoomRange_km ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: double  StrategicManager__GetMinZoomRange_km(void)const  */

double StrategicManager__GetMinZoomRange_km(void)

{
  return 10.0;
}





//==== 00765ef0 GetMissileClampRange_km ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: double  StrategicManager__GetMissileClampRange_km(void)const  */

double StrategicManager__GetMissileClampRange_km(void)

{
  return 7.5;
}





//==== 007692b0 LoadGraphicsResources_007692b0 ====


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual void  StrategicManager__LoadGraphicsResources(void) */

void StrategicManager__LoadGraphicsResources(void)

{
  undefined8 stack0xfffffffc;
  undefined1 auVar1 [4];
  Str_L_char_G_ local_20;
  undefined1 local_14 [4];
  Str_L_char_G_ local_10;
  
  local_10.Length = __security_cookie ^ (uint)&stack0xfffffffc;
  util__Str_char___Str_char((Str_L_char_G_ *)local_14,"Pre-generated City Light Textures");
  *(uint32_t *)&auVar1 = (uint32_t)"";
  if (0 < (int)local_10.Data) {
    memcpy(&auVar1, &local_14, 4);
  }
  util__Printf(&local_20,(wchar_t*)("Loading %s..."),auVar1);
  StartLoading((Str_L_char_G_ *)(local_14 + 4));
  if (local_20.Data != (char *)0x0) {
    port_op_delete(local_20.Data);
  }
  PlanetTextureManager__PreGenerate();
  EndLoading((Timer *)(local_14 + 4));
  if (local_14 != (uint32_t)0x0) {
    port_op_delete((void *)local_14);
  }
  return;
}





//==== 00769990 NumericallyIntegrate ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: struct util__PhysicalState_L_structutil__Vec3_L_double_G__G_ 
   StrategicManager__NumericallyIntegrate(struct util__PhysicalState_L_structutil__Vec3_L_double_G___G_,double,double,struct util__Vec3_L_double_G_)const  */

PhysicalState_L_util__Vec3_L_double_G___G_ *
StrategicManager__NumericallyIntegrate(PhysicalState_L_util__Vec3_L_double_G___G_ *__return_storage_ptr__)

{
  undefined8 stack0x00000008;
  undefined8 in_stack_00000040;
  
  FUN_00759160(__return_storage_ptr__,&stack0x00000008,in_stack_00000040);
  return __return_storage_ptr__;
}





//==== 0076a320 Remove_0076a320 ====


/* public: bool  util__Darray_L_classutil__WeakPtr_L_structMinimapRangeWidget_G___G___Remove(class util__WeakPtr_L_structMinimapRangeWidget_G_ const &) */

bool 
util__Darray_class_util__WeakPtr_struct_MinimapRangeWidget_____Remove
          (Darray_L_class_util__WeakPtr_L_struct_MinimapRangeWidget_G___G_ *this,
          WeakPtr_L_struct_MinimapRangeWidget_G_ *param_1)

{
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar1;
  int *piVar2;
  
  bVar1 = false;
  piVar2 = *(int **)(this + 4);
  if (piVar2 != piVar2 + *(int *)(this + 8) * 2) {
    do {
      if (bVar1) {
        this_00 = (ReferenceController *)piVar2[-1];
        piVar2[-2] = *piVar2;
        this_01 = (ReferenceController *)piVar2[1];
        piVar2[-1] = (int)this_01;
        if (this_01 != (ReferenceController *)0x0) {
          util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(this_01);
        }
        if (this_00 != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(this_00);
        }
      }
      else if ((*(int *)(param_1 + 4) == piVar2[1]) && (*(int *)param_1 == *piVar2)) {
        bVar1 = true;
      }
      piVar2 = piVar2 + 2;
    } while (piVar2 != (int *)(*(int *)(this + 4) + *(int *)(this + 8) * 8));
    if (bVar1) {
      param_1 = (WeakPtr_L_struct_MinimapRangeWidget_G_ *)(*(int *)(this + 8) + -1);
      Darray_L_class_util__WeakPtr_L_class_Body_G___G___SetSize
                ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)this,(int *)&param_1);
      return true;
    }
  }
  return false;
}





//==== 0076bab0 SetAll_0076bab0 ====


/* public: virtual void  util__Darray_L_structutil__tuple2_L_classutil__WeakPtr_L_class_Fleet_G__Cstructutil__tuple2_L_classutil__WeakPtr_L_classFleet_G__Cdouble_G__G__G___SetAll(struct
   util__tuple2_L_classutil__WeakPtr_L_classFleet_G__Cstructutil__tuple2_L_classutil__WeakPtr_L_class_Fleet_G__Cdouble_G__G_ const &) */

void 
util__Darray_struct_util__tuple2_class_util__WeakPtr_class_Fleet__struct_util__tuple2_class_util__WeakPtr_class_Fleet__double_______SetAll(Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cstruct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G___G___G_
         *this,tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cstruct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G___G_
               *param_1)

{
  ReferenceController *pRVar1;
  ReferenceController *pRVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = *(undefined4 **)(this + 4);
  if (puVar3 != puVar3 + *(int *)(this + 8) * 6) {
    puVar4 = puVar3 + 3;
    do {
      pRVar1 = (ReferenceController *)puVar4[-2];
      *puVar3 = *(undefined4 *)param_1;
      pRVar2 = *(ReferenceController **)(param_1 + 4);
      puVar4[-2] = (undefined4)(uintptr_t)(pRVar2);
      if (pRVar2 != (ReferenceController *)0x0) {
        util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(pRVar2);
      }
      if (pRVar1 != (ReferenceController *)0x0) {
        ReferenceController__ReleaseWeakReference(pRVar1);
      }
      pRVar1 = (ReferenceController *)*puVar4;
      puVar4[-1] = *(undefined4 *)(param_1 + 8);
      pRVar2 = *(ReferenceController **)(param_1 + 0xc);
      *puVar4 = (undefined4)(uintptr_t)(pRVar2);
      if (pRVar2 != (ReferenceController *)0x0) {
        util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(pRVar2);
      }
      if (pRVar1 != (ReferenceController *)0x0) {
        ReferenceController__ReleaseWeakReference(pRVar1);
      }
      *(undefined8 *)(puVar4 + 1) = *(undefined8 *)(param_1 + 0x10);
      puVar3 = puVar3 + 6;
      puVar4 = puVar4 + 6;
    } while (puVar3 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x18));
  }
  return;
}





//==== 0076c4e0 SetSize_0076c4e0 ====


/* private: void  util__Darray_L_structutil__tuple2_L_classutil__WeakPtr_L_classFleet_G__Cstruct_util__tuple2_L_classutil__WeakPtr_L_classFleet_G__Cdouble_G__G__G___SetSize(int const &) */

void 
util__Darray_struct_util__tuple2_class_util__WeakPtr_class_Fleet__struct_util__tuple2_class_util__WeakPtr_class_Fleet__double_______SetSize(Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cstruct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G___G___G_
          *this,int *param_1)

{
  ReferenceController *pRVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar3 = *param_1;
  if (((iVar3 < 1) && (0x3ffffffe < iVar3)) || ((iVar3 < 0x40000000 && (-1 < iVar3)))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (!bVar2) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0x2a5,
              "Between(value, 0, DARRAY_MAX_SIZE)",(char *)0x0);
    DebugBreak();
    iVar3 = *param_1;
  }
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  iVar4 = 0x3fffffff;
  if (iVar3 < 0x3fffffff) {
    iVar4 = iVar3;
  }
  if ((iVar4 < *(int *)(this + 8)) && (iVar3 = *(int *)(this + 4), iVar3 != 0)) {
    puVar5 = (undefined4 *)(iVar3 + iVar4 * 0x18);
    if (puVar5 != (undefined4 *)(iVar3 + *(int *)(this + 8) * 0x18)) {
      puVar6 = puVar5 + 3;
      do {
        pRVar1 = (ReferenceController *)puVar6[-2];
        *puVar5 = 0;
        puVar6[-2] = 0;
        if (pRVar1 != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(pRVar1);
        }
        pRVar1 = (ReferenceController *)*puVar6;
        puVar6[-1] = 0;
        *puVar6 = 0;
        if (pRVar1 != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(pRVar1);
        }
        puVar5 = puVar5 + 6;
        *(undefined8 *)(puVar6 + 1) = 0;
        puVar6 = puVar6 + 6;
      } while (puVar5 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x18));
      *(int *)(this + 8) = iVar4;
      return;
    }
    *(int *)(this + 8) = iVar4;
    return;
  }
  *(int *)(this + 8) = iVar4;
  return;
}





//==== 0076c5e0 SetSize_0076c5e0 ====


/* private: void  util__Darray_L_structLevelSpeakerMessage_G___SetSize(int const &) */

void 
util__Darray_struct_LevelSpeakerMessage___SetSize
          (Darray_L_struct_LevelSpeakerMessage_G_ *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
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
     (puVar4 = (undefined4 *)(iVar2 + iVar3 * 0x1c),
     puVar4 != (undefined4 *)(iVar2 + *(int *)(this + 8) * 0x1c))) {
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
      *puVar4 = 0;
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar4 + 1),&SStack_34);
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar4 + 4),&SStack_28);
      if (SStack_28.Data != (char *)0x0) {
        port_op_delete(SStack_28.Data);
        SStack_28.Data = (char *)0x0;
      }
      if (SStack_34.Data != (char *)0x0) {
        port_op_delete(SStack_34.Data);
      }
      puVar4 = puVar4 + 7;
    } while (puVar4 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x1c));
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 0076c760 SetSize_0076c760 ====


/* private: void  util__Darray_L_structPendingBattle_G___SetSize(int const &) */

void __thiscall
util__Darray_struct_PendingBattle___SetSize(Darray_L_struct_PendingBattle_G_ *this,int *param_1)

{
  ReferenceController *pRVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar3 = *param_1;
  if (((iVar3 < 1) && (0x3ffffffe < iVar3)) || ((iVar3 < 0x40000000 && (-1 < iVar3)))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (!bVar2) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0x2a5,
              "Between(value, 0, DARRAY_MAX_SIZE)",(char *)0x0);
    DebugBreak();
    iVar3 = *param_1;
  }
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  iVar4 = 0x3fffffff;
  if (iVar3 < 0x3fffffff) {
    iVar4 = iVar3;
  }
  if (((iVar4 < *(int *)(this + 8)) && (iVar3 = *(int *)(this + 4), iVar3 != 0)) &&
     (puVar5 = (undefined4 *)(iVar3 + iVar4 * 0x18),
     puVar5 != (undefined4 *)(iVar3 + *(int *)(this + 8) * 0x18))) {
    do {
      pRVar1 = (ReferenceController *)puVar5[1];
      *puVar5 = 0;
      puVar5[1] = 0;
      if (pRVar1 != (ReferenceController *)0x0) {
        ReferenceController__ReleaseWeakReference(pRVar1);
      }
      pRVar1 = (ReferenceController *)puVar5[3];
      puVar5[2] = 0;
      puVar5[3] = 0;
      if (pRVar1 != (ReferenceController *)0x0) {
        ReferenceController__ReleaseWeakReference(pRVar1);
      }
      *(undefined8 *)(puVar5 + 4) = 0;
      puVar5 = puVar5 + 6;
    } while (puVar5 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x18));
  }
  *(int *)(this + 8) = iVar4;
  return;
}





//==== 0076f850 MethodCaller_UIListBox_ActorDropdownAction___private__void___thiscall_UIListBox_struct_ActorDropdownAction___OnCommitSearchString_bool__ ====


/* private: static void __cdecl util__Delegate_L_void_Cbool_G___MethodCaller_L_structUIListBox_L_struct_ActorDropdownAction_G__C_private_void__thiscallUIListBox_L_struct_ActorDropdownAction_G___OnCommitSearchString_bool__G_(void *,bool) */

void __cdecl
util__Delegate_void_bool___MethodCaller_struct_UIListBox_struct_ActorDropdownAction___private__void___thiscall_UIListBox_struct_ActorDropdownAction___OnCommitSearchString_bool
          (void *param_1,bool param_2)

{
  UIListBox_L_struct_ActorDropdownAction_G___OnCommitSearchString
            ((UIListBox_L_struct_ActorDropdownAction_G_ *)param_1,param_2);
  return;
}





//==== 0076fdc0 Darray_util__tuple2_util__Str_char__util__Darray_ActorDropdownAction_____ ====


/* public:  util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_structActorDropdownAction_G__G__G___Darray_L_structutil__tuple2_L_class_util__Str_L_char_G__Cclassutil__Darray_L_structActorDropdownAction_G__G__G_(class util__Darray_L_struct_util__tuple2_L_classutil__Str_L_char_G__Cclassutil__Darray_L_structActorDropdownAction_G__G__G_ const &) */

Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G_
* 
util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_struct_ActorDropdownAction_______Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_struct_ActorDropdownAction
          (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G_
           *this,Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G_
                 *param_1)

{
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G_
  *pDVar1;
  uint *puVar2;
  uint uVar3;
  Str_L_char_G_ *pSVar4;
  uint uVar5;
  Str_L_char_G_ *this_00;
  
  pDVar1 = param_1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &vftable_462;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  param_1 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G_
             *)(**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,(int *)&param_1);
  uVar5 = *(uint *)(this + 0xc);
  uVar3 = -(uint)((int)((ulonglong)uVar5 * 0x1c >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 0x1c);
  puVar2 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
  if (puVar2 == (uint *)0x0) {
    this_00 = (Str_L_char_G_ *)0x0;
  }
  else {
    *puVar2 = uVar5;
    this_00 = (Str_L_char_G_ *)(puVar2 + 1);
    if (uVar5 != 0) {
      puVar2 = puVar2 + 6;
      pSVar4 = this_00;
      do {
        pSVar4->Data = (char *)0x0;
        pSVar4 = (Str_L_char_G_ *)&pSVar4[2].Capacity;
        puVar2[-4] = 0;
        puVar2[-3] = 0;
        puVar2[-2] = (uint)&vftable_463;
        puVar2[-1] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        uVar5 = uVar5 - 1;
        puVar2 = puVar2 + 7;
      } while (uVar5 != 0);
    }
  }
  *(Str_L_char_G_ **)(this + 4) = this_00;
  pSVar4 = *(Str_L_char_G_ **)(pDVar1 + 4);
  if (pSVar4 == (Str_L_char_G_ *)((int)pSVar4 + *(int *)(pDVar1 + 8) * 0x1c)) {
    return this;
  }
  do {
    util__Maybe_struct_util__ClassMember___operator(this_00,pSVar4);
    Darray_L_struct_ActorDropdownAction_G___op_assign
              ((Darray_L_struct_ActorDropdownAction_G_ *)(this_00 + 1),
               (Darray_L_struct_ActorDropdownAction_G_ *)(pSVar4 + 1));
    pSVar4 = (Str_L_char_G_ *)&pSVar4[2].Capacity;
    this_00 = (Str_L_char_G_ *)&this_00[2].Capacity;
  } while (pSVar4 != (Str_L_char_G_ *)(*(int *)(pDVar1 + 4) + *(int *)(pDVar1 + 8) * 0x1c));
  return this;
}





//==== 007706a0 UIListBox_ActorDropdownAction_ ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public:  UIListBox_L_structActorDropdownAction_G___UIListBox_L_struct_ActorDropdownAction_G_(struct UIAttributes,struct util__Attribute_L_classutil__Str_L_char_G__G_ const
   &,class util__Delegate_L_int_CstructActorDropdownAction_G_,struct util__Attribute_L_class_util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclassutil__Darray_L_struct_ActorDropdownAction_G__G__G__G_ const &,class util__Delegate_L_void_CstructActorDropdownAction_G_,class
   util__Delegate_L_classutil__Str_L_char_G__CstructActorDropdownAction_G_,class util__Delegate_L_struct_ActorDropdownAction_G_,class util__Delegate_L_classutil__Str_L_char_G__CstructActorDropdownAction_G_,class
   util__Delegate_L_void___cdecl_P__void__CstructActorDropdownAction_G_,class util__Maybe_L_int_G_,class
   util__Delegate_L_structutil__Color_CstructActorDropdownAction_G_,class util__Delegate_L_class_util__Str_L_char_G__CstructActorDropdownAction_G_,class util__Delegate_L_structUIWidget_P_Cstruct_ActorDropdownAction_G_,bool,bool) */

UIListBox_L_struct_ActorDropdownAction_G_ * 
UIListBox_struct_ActorDropdownAction___UIListBox_struct_ActorDropdownAction
          (UIListBox_L_struct_ActorDropdownAction_G_ *this)

{
  undefined8 stack0x00000004;
  undefined8 stack0xfffffe98;
  UIAttributes UVar1;
  bool bVar2;
  undefined4 *puVar3;
  SharedPtr_L_struct_UIWidget_G_ *pSVar4;
  ReferenceControllerRegistry *this_00;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *param_2;
  undefined4 in_stack_00000150;
  undefined4 in_stack_00000154;
  undefined4 in_stack_00000158;
  undefined4 in_stack_0000015c;
  undefined4 in_stack_00000160;
  undefined4 in_stack_00000164;
  undefined4 in_stack_00000168;
  undefined4 in_stack_0000016c;
  undefined4 in_stack_00000170;
  undefined4 in_stack_00000174;
  undefined4 in_stack_00000178;
  undefined4 in_stack_0000017c;
  undefined4 in_stack_00000180;
  undefined4 in_stack_00000184;
  UIListBox_L_struct_ActorDropdownAction_G_ in_stack_00000188;
  undefined4 in_stack_0000018c;
  undefined4 in_stack_00000190;
  undefined4 in_stack_00000194;
  undefined4 in_stack_00000198;
  undefined4 in_stack_0000019c;
  undefined4 in_stack_000001a0;
  UIListBox_L_struct_ActorDropdownAction_G_ in_stack_000001a4;
  UIListBox_L_struct_ActorDropdownAction_G_ in_stack_000001a8;
  undefined1 auVar7 [12];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [44];
  undefined1 auVar16 [44];
  undefined1 in_stack_fffffe98 [316];
  float in_stack_ffffffd4;
  float in_stack_ffffffd8;
  undefined4 in_stack_ffffffdc;
  int *piVar17;
  undefined **local_14;
  tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G_ *local_10;
  int *local_c;
  ReferenceController *local_8;
  undefined1 auVar15 [32];
  
  puVar3 = param_2;
  UIAttributes__UIAttributes((UIAttributes *)&stack0xfffffe98,(UIAttributes *)&stack0x00000004);
  UVar1.TextColor.Data.Value.Value = in_stack_ffffffd4;
*(uint32_t *)&auVar7 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffe98) + 4)));
*(uint32_t *)&auVar10 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffe98) + 32)));
*(uint32_t *)&auVar11 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffe98) + 44)));
*(uint32_t *)&auVar13 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffe98) + 180)));
*(uint32_t *)&auVar14 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffe98) + 196)));
*(uint32_t *)&auVar16 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffe98) + 240)));
  UVar1.Parent = (Manager *)(*(uint32_t*)&(in_stack_fffffe98));
  UVar1.Tag.Data = (char *)(*(uint32_t*)&(auVar7));
  UVar1.Tag.Capacity = (*(uint32_t*)((char*)&(auVar7)+4));
  UVar1.Tag.Length = (*(uint32_t*)((char*)&(auVar7)+8));
  uVar8 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffe98) + 16)),0);
  uVar9 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffe98) + 16)),8);
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
  uVar8 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffe98) + 56)),0);
  uVar9 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffe98) + 56)),8);
  UVar1.DesiredSize.Getter.Callee = (void *)(int)uVar8;
  UVar1.DesiredSize.Getter.CallbackFunction =
       (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar8 >> 0x20);
  UVar1.DesiredSize.Value.X = (int)uVar9;
  UVar1.DesiredSize.Value.Y = (int)((ulonglong)uVar9 >> 0x20);
  uVar8 = SUB248((*(uint32_t *)((char *)&(in_stack_fffffe98) + 72)),0);
*(uint32_t *)&auVar12 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffffe98) + 72)),8));
  UVar1.FillProportion.Getter.Callee = (void *)(int)uVar8;
  UVar1.FillProportion.Getter.CallbackFunction =
       (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar8 >> 0x20);
  UVar1.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar12));
  UVar1.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar12)+8));
  uVar8 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffe98) + 96)),0);
  UVar1.HitTestShape.Getter.Callee = (void *)(int)uVar8;
  UVar1.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar8 >> 0x20));
  UVar1.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffffe98) + 96)),8);
  (*(uint32_t *)((char *)&(UVar1) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffffe98) + 108));
  uVar8 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffe98) + 112)),0);
  UVar1.Depth.Getter.Callee = (void *)(int)uVar8;
  UVar1.Depth.Getter.CallbackFunction =
       (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar8 >> 0x20);
  UVar1.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffffe98) + 112)),8);
  uVar8 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffe98) + 128)),0);
  UVar1.Icon.Getter.Callee = (void *)(int)uVar8;
  UVar1.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar8 >> 0x20));
  UVar1.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffffe98) + 128)),8);
  uVar8 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffe98) + 140)),0);
*(uint32_t *)&auVar7 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffe98) + 140)),8));
  UVar1.Tooltip.Getter.Callee = (void *)(int)uVar8;
  UVar1.Tooltip.Getter.CallbackFunction =
       (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar8 >> 0x20);
  UVar1.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar7));
  UVar1.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar7)+4));
  UVar1.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar7)+8));
  uVar8 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffe98) + 160)),0);
*(uint32_t *)&auVar7 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffe98) + 160)),8));
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
  UVar1.TextColor.Data.Getter.Callee = (void *)(int)(*(uint64_t *)((char *)&(in_stack_fffffe98) + 284));
  UVar1.TextColor.Data.Getter.CallbackFunction =
       (_func___cdecl_Color_void_ptr *)(int)((ulonglong)(*(uint64_t *)((char *)&(in_stack_fffffe98) + 284)) >> 0x20);
  UVar1.TextColor.Data.Value._pad_0x0_0 = (*(uint32_t *)((char *)&(in_stack_fffffe98) + 292));
  UVar1.TextColor.Data.Value._pad_0x4_1 = (*(uint32_t *)((char *)&(in_stack_fffffe98) + 296));
  UVar1.TextColor.Data.Value._pad_0x8_2 = (*(uint32_t *)((char *)&(in_stack_fffffe98) + 300));
  UVar1.TextColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(in_stack_fffffe98) + 304));
  UVar1.TextColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(in_stack_fffffe98) + 308));
  UVar1.TextColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(in_stack_fffffe98) + 312));
  UVar1.TextColor.Data.Value.Alpha = in_stack_ffffffd8;
  UVar1.TextColor.IsValidData = SUB41(in_stack_ffffffdc,0);
  (*(uint32_t *)((char *)&(UVar1.TextColor) + 41)) = SUB43(in_stack_ffffffdc,1);
  UIWidget__UIWidget((UIWidget *)this,UVar1);
  *(undefined ***)this = &vftable_464;
  *(undefined4 *)(this + 0x168) = *puVar3;
  *(undefined4 *)(this + 0x16c) = puVar3[1];
  util__Str_char___Str_char((Str_L_char_G_ *)(this + 0x170),(Str_L_char_G_ *)(puVar3 + 2));
  *(undefined4 *)(this + 0x17c) = in_stack_00000184;
  this[0x180] = in_stack_00000188;
  *(undefined4 *)(this + 0x184) = in_stack_00000150;
  *(undefined4 *)(this + 0x188) = in_stack_00000154;
  *(undefined4 *)(this + 0x18c) = in_stack_0000015c;
  *(undefined4 *)(this + 400) = in_stack_00000160;
  *(undefined4 *)(this + 0x194) = in_stack_00000164;
  *(undefined4 *)(this + 0x198) = in_stack_00000168;
  *(undefined4 *)(this + 0x19c) = in_stack_0000016c;
  *(undefined4 *)(this + 0x1a0) = in_stack_00000170;
  *(undefined4 *)(this + 0x1a4) = in_stack_0000017c;
  *(undefined4 *)(this + 0x1a8) = in_stack_00000180;
  *(undefined4 *)(this + 0x1ac) = in_stack_00000174;
  *(undefined4 *)(this + 0x1b0) = in_stack_00000178;
  *(undefined4 *)(this + 0x1b4) = in_stack_0000018c;
  *(undefined4 *)(this + 0x1b8) = in_stack_00000190;
  *(undefined4 *)(this + 0x1bc) = in_stack_00000194;
  *(undefined4 *)(this + 0x1c0) = in_stack_00000198;
  *(undefined4 *)(this + 0x1c4) = in_stack_0000019c;
  *(undefined4 *)(this + 0x1c8) = in_stack_000001a0;
  this[0x1cc] = in_stack_000001a8;
  this[0x1cd] = in_stack_000001a4;
  *(undefined4 *)(this + 0x1d0) = 0;
  *(undefined4 *)(this + 0x1d4) = 0;
  *(undefined4 *)(this + 0x1d8) = 0;
  *(uint32_t *)&local_14 = (uint32_t)(uintptr_t)(&vftable_462);
  local_10 = (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G_ *)0x0;
  local_c = (int *)0x0;
  local_8 = (ReferenceController *)0x0;
  *(undefined4 *)(this + 0x1dc) = 0;
  *(undefined4 *)(this + 0x1e0) = 0;
  util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_struct_ActorDropdownAction_______Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_struct_ActorDropdownAction
            ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G_
              *)(this + 0x1e4),
             (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G_
              *)&local_14);
  *(uint32_t *)&local_14 = (uint32_t)(uintptr_t)(&vftable_462);
  if (local_10 !=
      (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G_ *)0x0) {
    util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G____vector_deleting_destructor_(local_10);
  }
  *(undefined4 *)(this + 500) = 0;
  *(undefined4 *)(this + 0x1f8) = 100;
  puVar3 = (undefined4 *)(uintptr_t)(port_op_new(0x644));
  if (puVar3 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = puVar3 + 1;
    *puVar3 = 100;
    iVar5 = 100;
    puVar3 = puVar6;
    do {
      *puVar3 = (undefined4)(uintptr_t)(&vftable_466);
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      iVar5 = iVar5 + -1;
      puVar3 = puVar3 + 4;
    } while (iVar5 != 0);
  }
  *(undefined4 **)(this + 500) = puVar6;
  *(undefined4 *)(this + 0x1fc) = 0;
  *(undefined4 *)(this + 0x200) = 0;
  *(undefined4 *)(this + 0x204) = 0;
  *(undefined4 *)(this + 0x208) = 0;
  pSVar4 = (SharedPtr_L_struct_UIWidget_G_ *)
           Generate(this,(Attribute_L_class_util__Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G___G_
                          *)&local_c);
  UIWidget__AddChildWidget_struct_UIWidget((UIWidget *)this,pSVar4);
  if ((local_8 != (ReferenceController *)0x0) &&
     (bVar2 = util__ReferenceController__ReleaseStrongReference(local_8), bVar2)) {
    if (local_c != (int *)0x0) {
      (**(code **)(uintptr_t)(*local_c + 4))();
    }
    piVar17 = local_c;
    this_00 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(this_00,piVar17);
  }
  UIAttributes___UIAttributes((UIAttributes *)&stack0x00000004);
  return this;
}

//==== 00770da0 Color ====

/* public:  util__Color__Color(struct util__Color const &) */

Color *  util__Color__Color(Color *this,Color *param_1)

{
  this->_pad_0x0_0 = (int)&vftable_5;
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const((Str_L_char_G_ *)&this->_pad_0x4_1,(Str_L_char_G_ *)&param_1->_pad_0x4_1);
  this->_pad_0x0_0 = (int)&vftable_59;
  this->Hue_degrees = param_1->Hue_degrees;
  this->Saturation = param_1->Saturation;
  this->Value = param_1->Value;
  this->Alpha = param_1->Alpha;
  return this;
}

//==== 007716a0 Darray_util__tuple2_util__Str_char__util__Darray_ActorDropdownAction______007716a0 ====


/* public: virtual  Darray_L_structutil__tuple2_L_class_util__Str_L_char_G__Cclassutil__Darray_L_structActorDropdownAction_G__G__G___dtor(void) */

void 
util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_struct_ActorDropdownAction________Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_struct_ActorDropdownAction(Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G_
           *this)

{
  *(undefined ***)this = &vftable_462;
  if (*(tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G_ **)(this + 4)
      != (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G_ *)0x0) {
    tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G____vector_deleting_destructor_
              (*(tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G_ **)
                (this + 4),3);
  }
  *(undefined ***)this = (undefined **)(&vftable);
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 00771860 operator___00771860 ====


/* public: virtual struct util__tuple2_L_structActorDropdownAction_Cclassutil__WeakPtr_L_struct_UIWidget_G__G_ &  util__Darray_L_structutil__tuple2_L_structActorDropdownAction_Cclass_util__WeakPtr_L_structUIWidget_G__G__G___op_subscript(int const &)const  */

tuple2_L_struct_ActorDropdownAction_Cclass_util__WeakPtr_L_struct_UIWidget_G___G_ * 
util__Darray_struct_util__tuple2_struct_ActorDropdownAction_class_util__WeakPtr_struct_UIWidget_______operator(Darray_L_struct_util__tuple2_L_struct_ActorDropdownAction_Cclass_util__WeakPtr_L_struct_UIWidget_G___G___G_
             *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 < 0) || (*(int *)(this + 8) <= iVar1)) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0xa0,
              "Index >= 0 && Index < Size",(char *)0x0);
    DebugBreak();
    iVar1 = *param_1;
  }
  return (tuple2_L_struct_ActorDropdownAction_Cclass_util__WeakPtr_L_struct_UIWidget_G___G_ *)
         (iVar1 * 0x2d0 + *(int *)(this + 4));
}





//==== 00772190 vector_deleting_destructor_00772190 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__tuple2_L_struct_ActorDropdownAction_Cclassutil__WeakPtr_L_structUIWidget_G__G__G_:: 0 vectordeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__tuple2_struct_ActorDropdownAction_class_util__WeakPtr_struct_UIWidget________vector_deleting_destructor
          (Darray_L_struct_util__tuple2_L_struct_ActorDropdownAction_Cclass_util__WeakPtr_L_struct_UIWidget_G___G___G_
           *this,uint param_1)

{
  Darray_L_struct_util__tuple2_L_struct_ActorDropdownAction_Cclass_util__WeakPtr_L_struct_UIWidget_G___G___G_
  *pDVar1;
  Darray_L_struct_util__tuple2_L_struct_ActorDropdownAction_Cclass_util__WeakPtr_L_struct_UIWidget_G___G___G_
  *pDVar2;
  Darray_L_struct_util__tuple2_L_struct_ActorDropdownAction_Cclass_util__WeakPtr_L_struct_UIWidget_G___G___G_
  *pDVar3;
  int iVar4;
  
  if ((param_1 & 2) != 0) {
    pDVar1 = this + -4;
    iVar4 = *(int *)pDVar1;
    pDVar3 = this + iVar4 * 0x10;
    while (iVar4 != 0) {
      pDVar2 = pDVar3 + -0x10;
      iVar4 = iVar4 + -1;
      *(undefined ***)pDVar2 = &vftable_466;
      if (*(tuple2_L_struct_ActorDropdownAction_Cclass_util__WeakPtr_L_struct_UIWidget_G___G_ **)
           (pDVar3 + -0xc) !=
          (tuple2_L_struct_ActorDropdownAction_Cclass_util__WeakPtr_L_struct_UIWidget_G___G_ *)0x0) {
        tuple2_L_struct_ActorDropdownAction_Cclass_util__WeakPtr_L_struct_UIWidget_G___G____vector_deleting_destructor_
                  (*(tuple2_L_struct_ActorDropdownAction_Cclass_util__WeakPtr_L_struct_UIWidget_G___G_ **)
                    (pDVar3 + -0xc),3);
      }
      *(undefined4 *)(pDVar3 + -0xc) = 0;
      *(undefined ***)pDVar2 = (undefined **)(&vftable);
      pDVar3 = pDVar2;
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(pDVar1,*(int *)pDVar1 * 0x10 + 4);
    }
    return this + -4;
  }
  *(undefined ***)this = &vftable_466;
  if (*(tuple2_L_struct_ActorDropdownAction_Cclass_util__WeakPtr_L_struct_UIWidget_G___G_ **)(this + 4) !=
      (tuple2_L_struct_ActorDropdownAction_Cclass_util__WeakPtr_L_struct_UIWidget_G___G_ *)0x0) {
    tuple2_L_struct_ActorDropdownAction_Cclass_util__WeakPtr_L_struct_UIWidget_G___G____vector_deleting_destructor_
              (*(tuple2_L_struct_ActorDropdownAction_Cclass_util__WeakPtr_L_struct_UIWidget_G___G_ **)
                (this + 4),3);
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)(&vftable);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 007724f0 scalar_deleting_destructor_007724f0 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_structActorDropdownAction_G__G__G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_struct_ActorDropdownAction________scalar_deleting_destructor
          (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G_
           *this,uint param_1)

{
  *(undefined ***)this = &vftable_462;
  if (*(tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G_ **)(this + 4)
      != (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G_ *)0x0) {
    tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G____vector_deleting_destructor_
              (*(tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G_ **)
                (this + 4),3);
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)(&vftable);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 00772570 scalar_deleting_destructor_00772570 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void * __thiscall UIListBox_L_structActorDropdownAction_G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
UIListBox_struct_ActorDropdownAction____scalar_deleting_destructor
          (UIListBox_L_struct_ActorDropdownAction_G_ *this,uint param_1)

{
  int *piVar1;
  
  if (*(ReferenceController **)(this + 0x208) != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(*(ReferenceController **)(this + 0x208));
  }
  if (*(ReferenceController **)(this + 0x200) != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(*(ReferenceController **)(this + 0x200));
  }
  piVar1 = *(int **)(this + 500);
  if (piVar1 != (int *)0x0) {
    if (piVar1[-1] == 0) {
      port_op_delete(piVar1 + -1);
    }
    else {
      (**(code **)(uintptr_t)(*piVar1 + 0x18))(3);
    }
  }
  *(undefined4 *)(this + 500) = 0;
  *(undefined ***)(this + 0x1e4) =
       &vftable_462;
  if (*(tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G_ **)
       (this + 0x1e8) !=
      (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G_ *)0x0) {
    util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G____vector_deleting_destructor_
              (*(tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G_ **)
                (this + 0x1e8),3);
  }
  *(undefined4 *)(this + 0x1e8) = 0;
  *(undefined ***)(this + 0x1e4) = (undefined **)(&vftable);
  if (*(void **)(this + 0x1d0) != (void *)0x0) {
    port_op_delete(*(void **)(this + 0x1d0));
    *(undefined4 *)(this + 0x1d0) = 0;
  }
  if (*(void **)(this + 0x170) != (void *)0x0) {
    port_op_delete(*(void **)(this + 0x170));
    *(undefined4 *)(this + 0x170) = 0;
  }
  *(undefined ***)this = &vftable_49;
  *(undefined ***)(this + 0x158) = (undefined **)(&vftable_48);
  if (*(SharedPtr_L_struct_UIWidget_G_ **)(this + 0x15c) != (SharedPtr_L_struct_UIWidget_G_ *)0x0) {
    util__SharedPtr_struct_UIWidget____vector_deleting_destructor
              (*(SharedPtr_L_struct_UIWidget_G_ **)(this + 0x15c),3);
  }
  *(undefined4 *)(this + 0x15c) = 0;
  *(undefined ***)(this + 0x158) = (undefined **)(&vftable);
  if (*(ReferenceController **)(this + 0x154) != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(*(ReferenceController **)(this + 0x154));
  }
  UIAttributes___UIAttributes((UIAttributes *)(this + 8));
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x210);
  }
  return this;
}





//==== 00772760 Add_00772760 ====


/* public: bool  util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_structActorDropdownAction_G__G__G___Add(struct util__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_structActorDropdownAction_G__G_ const &) */

bool 
util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_struct_ActorDropdownAction_______Add(Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G_
      *this,tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G_ *param_1)

{
  int iVar1;
  bool bVar2;
  int iStack_8;
  
  iVar1 = *(int *)(this + 8);
  iStack_8 = iVar1 + 1;
  SetSize(this,&iStack_8);
  bVar2 = CheckSize(this,iVar1);
  if (!bVar2) {
  }
  iVar1 = *(int *)(this + 4) + *(int *)(this + 8) * 0x1c;
  util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar1 + -0x1c),(Str_L_char_G_ *)param_1);
  Darray_L_struct_ActorDropdownAction_G___op_assign
            ((Darray_L_struct_ActorDropdownAction_G_ *)(iVar1 + -0x10),
             (Darray_L_struct_ActorDropdownAction_G_ *)(param_1 + 0xc));
  return true;
}





//==== 00772db0 CheckSize_00772db0 ====


/* private: bool  util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_structActorDropdownAction_G__G__G___CheckSize(int) */

bool 
util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_struct_ActorDropdownAction_______CheckSize(Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G_
            *this,int param_1)

{
  Str_L_char_G_ *pSVar1;
  bool bVar2;
  uint *puVar3;
  uint uVar4;
  Str_L_char_G_ *pSVar5;
  Str_L_char_G_ *this_00;
  uint uVar6;
  Str_L_char_G_ *pSVar7;
  bool bVar8;
  Str_L_char_G_ *pSStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar4 = *(uint *)(this + 8);
  bVar8 = -1 < (int)uVar4;
  bVar2 = !bVar8;
  if (bVar2) {
    pSStack_c = (Str_L_char_G_ *)0x0;
    SetSize(this,(int *)&pSStack_c);
    uVar4 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar2;
  bVar2 = (int)uVar4 < 0x40000000;
  if (!bVar2) {
    pSStack_c = (Str_L_char_G_ *)0x3fffffff;
    SetSize(this,(int *)&pSStack_c);
    uVar4 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar6 = *(uint *)(this + 0xc);
  if ((int)uVar4 <= (int)uVar6) {
    return bVar2 && bVar8;
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
  uVar4 = -(uint)((int)((ulonglong)uVar6 * 0x1c >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 0x1c);
  puVar3 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
  if (puVar3 == (uint *)0x0) {
    pSStack_c = (Str_L_char_G_ *)0x0;
  }
  else {
    *puVar3 = uVar6;
    pSStack_c = (Str_L_char_G_ *)(puVar3 + 1);
    if (uVar6 != 0) {
      puVar3 = puVar3 + 6;
      pSVar5 = pSStack_c;
      do {
        pSVar5->Data = (char *)0x0;
        pSVar5 = (Str_L_char_G_ *)&pSVar5[2].Capacity;
        puVar3[-4] = 0;
        puVar3[-3] = 0;
        puVar3[-2] = (uint)&vftable_463;
        puVar3[-1] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        uVar6 = uVar6 - 1;
        puVar3 = puVar3 + 7;
      } while (uVar6 != 0);
    }
  }
  pSVar5 = *(Str_L_char_G_ **)(this + 4);
  if (pSVar5 != (Str_L_char_G_ *)0x0) {
    pSVar1 = (Str_L_char_G_ *)((int)pSStack_c + *(int *)(this + 8) * 0x1c);
    this_00 = pSStack_c;
    pSVar7 = pSVar5;
    if (pSVar5 != (Str_L_char_G_ *)(param_1 * 0x1c + (int)pSVar5)) {
      do {
        if (this_00 == pSVar1) break;
        util__Maybe_struct_util__ClassMember___operator(this_00,pSVar7);
        Darray_L_struct_ActorDropdownAction_G___op_assign
                  ((Darray_L_struct_ActorDropdownAction_G_ *)(this_00 + 1),
                   (Darray_L_struct_ActorDropdownAction_G_ *)(pSVar7 + 1));
        pSVar7 = (Str_L_char_G_ *)&pSVar7[2].Capacity;
        pSVar5 = *(Str_L_char_G_ **)(this + 4);
        this_00 = (Str_L_char_G_ *)&this_00[2].Capacity;
      } while (pSVar7 != (Str_L_char_G_ *)(param_1 * 0x1c + (int)pSVar5));
    }
    if (pSVar5 != (Str_L_char_G_ *)0x0) {
      tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G____vector_deleting_destructor_
                ((tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G_ *)
                 pSVar5,3);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(Str_L_char_G_ **)(this + 4) = pSStack_c;
  return bStack_5;
}





//==== 007731d0 CheckSizeDestructive_007731d0 ====


/* private: bool  util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_structActorDropdownAction_G__G__G___CheckSizeDestructive(void) */

bool 
util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_struct_ActorDropdownAction_______CheckSizeDestructive
          (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G_
           *this)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  bool bVar5;
  uint uVar6;
  bool bVar7;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G_
  *pDStack_8;
  
  uVar3 = *(uint *)(this + 8);
  bVar7 = -1 < (int)uVar3;
  pDStack_8 = this;
  if (!bVar7) {
    pDStack_8 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G_
                 *)0x0;
    SetSize(this,(int *)&pDStack_8);
    uVar3 = *(uint *)(this + 8);
  }
  bVar5 = (int)uVar3 < 0x40000000;
  if (!bVar5) {
    pDStack_8 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G_
                 *)0x3fffffff;
    SetSize(this,(int *)&pDStack_8);
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
    if (*(tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G_ **)
         (this + 4) !=
        (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G_ *)0x0) {
      tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G____vector_deleting_destructor_
                (*(tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G_ **)
                  (this + 4),3);
      uVar6 = *(uint *)(this + 0xc);
    }
    *(undefined4 *)(this + 4) = 0;
    uVar3 = -(uint)((int)((ulonglong)uVar6 * 0x1c >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 0x1c);
    puVar1 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
    if (puVar1 == (uint *)0x0) {
      puVar4 = (uint *)0x0;
    }
    else {
      *puVar1 = uVar6;
      puVar4 = puVar1 + 1;
      if (uVar6 != 0) {
        puVar2 = puVar1 + 6;
        puVar1 = puVar4;
        do {
          *puVar1 = 0;
          puVar1 = puVar1 + 7;
          puVar2[-4] = 0;
          puVar2[-3] = 0;
          puVar2[-2] = (uint)&vftable_463;
          puVar2[-1] = 0;
          *puVar2 = 0;
          puVar2[1] = 0;
          uVar6 = uVar6 - 1;
          puVar2 = puVar2 + 7;
        } while (uVar6 != 0);
        *(uint **)(this + 4) = puVar4;
        return bVar5;
      }
    }
    *(uint **)(this + 4) = puVar4;
  }
  return bVar5;
}





//==== 007734b0 Clear_007734b0 ====


/* public: virtual void  util__Darray_L_structutil__tuple2_L_structActorDropdownAction_Cclass_util__WeakPtr_L_structUIWidget_G__G__G___Clear(void) */

void 
util__Darray_struct_util__tuple2_struct_ActorDropdownAction_class_util__WeakPtr_struct_UIWidget_______Clear(Darray_L_struct_util__tuple2_L_struct_ActorDropdownAction_Cclass_util__WeakPtr_L_struct_UIWidget_G___G___G_
        *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 007734d0 Clear_007734d0 ====


/* public: virtual void  util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_structActorDropdownAction_G__G__G___Clear(void) */

void 
util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_struct_ActorDropdownAction_______Clear(Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G_
        *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 007734f0 Clear_007734f0 ====


/* public: virtual void  util__Darray_L_structActorDropdownAction_G___Clear(void) */

void __thiscall
util__Darray_struct_ActorDropdownAction___Clear(Darray_L_struct_ActorDropdownAction_G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 00774fd0 Get_00774fd0 ====


/* public: class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclassutil__Darray_L_struct_ActorDropdownAction_G__G__G_ const  util__Attribute_L_classutil__Darray_L_struct_util__tuple2_L_classutil__Str_L_char_G__Cclassutil__Darray_L_structActorDropdownAction_G__G__G___G___Get(void)const  */

Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G_
* 
util__Attribute_class_util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_struct_ActorDropdownAction_________Get(Attribute_L_class_util__Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G___G_
      *this)

{
  bool bVar1;
  bool bVar2;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G_
  *pDVar3;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G_
  *in_stack_00000004;
  undefined **ppuStack_48;
  tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G_ *ptStack_44;
  undefined **ppuStack_38;
  tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G_ *ptStack_34;
  undefined **ppuStack_28;
  tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G_ *ptStack_24;
  undefined **ppuStack_18;
  tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G_ *ptStack_14;
  undefined4 uStack_8;
  
  uStack_8 = 0;
  if ((*(int *)this == 0) || (*(code **)(uintptr_t)(this + 4) == (code *)0x0)) {
    pDVar3 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G_
              *)Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G___Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G_
                          ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G_
                            *)&ppuStack_28,
                           (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G_
                            *)(this + 8));
    bVar2 = false;
    bVar1 = true;
  }
  else {
    pDVar3 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G_
              *)(**(code **)(uintptr_t)(this + 4))(&ppuStack_48,*(int *)this);
    pDVar3 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G_
              *)Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G___Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G_
                          ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G_
                            *)&ppuStack_18,pDVar3);
    Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G___Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G_
              ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G_
                *)&ppuStack_38,pDVar3);
    ppuStack_18 = &vftable_462;
    if (ptStack_14 !=
        (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G_ *)0x0) {
      tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G____vector_deleting_destructor_(ptStack_14,3);
    }
    bVar2 = true;
    bVar1 = false;
    ptStack_14 = (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G_ *)
                 0x0;
    ppuStack_18 = (undefined **)(&vftable);
    ppuStack_48 = &vftable_462;
    if (ptStack_44 !=
        (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G_ *)0x0) {
      tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G____vector_deleting_destructor_(ptStack_44,3);
    }
    pDVar3 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G_
              *)&ppuStack_38;
  }
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G___Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G_
            (in_stack_00000004,pDVar3);
  if (bVar1) {
    ppuStack_28 = &vftable_462;
    if (ptStack_24 !=
        (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G_ *)0x0) {
      tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G____vector_deleting_destructor_(ptStack_24,3);
    }
    ptStack_24 = (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G_ *)
                 0x0;
    ppuStack_28 = (undefined **)(&vftable);
  }
  if (bVar2) {
    ppuStack_38 = &vftable_462;
    if (ptStack_34 !=
        (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G_ *)0x0) {
      tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G____vector_deleting_destructor_(ptStack_34,3);
    }
  }
  return in_stack_00000004;
}





//==== 007755d0 GetDropdownColor ====

/* WARNING: Removing unreachable block (ram,0x007758f2) */
/* WARNING: Removing unreachable block (ram,0x0077590c) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: struct util__Color  ActorDropdown__GetDropdownColor(struct
   ActorDropdownAction)const  */

Color * ActorDropdown__GetDropdownColor
                  (Color *__return_storage_ptr__,undefined4 param_2,ReferenceController *param_3)

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
  Faction *pFVar11;
  undefined ***pppuVar12;
  Faction *pFVar13;
  int iVar14;
  Color *pCVar15;
  CustomUIThemeInterface *pCVar16;
  Str_L_char_G_ *pSVar17;
  ReferenceController *this;
  int in_stack_000002c0;
  ReferenceController *in_stack_000002c8;
  float fVar18;
  Color local_134;
  Color local_114;
  Color local_f4;
  Color local_d4;
  Color local_b4;
  Color local_94;
  Color local_74;
  undefined **local_54;
  Str_L_char_G_ local_50;
  undefined **local_44;
  undefined **local_40;
  undefined **local_3c;
  ReferenceController *local_38;
  undefined **local_34;
  Str_L_char_G_ local_30;
  undefined **local_24;
  undefined **ppuStack_20;
  undefined **ppuStack_1c;
  ReferenceController *pRStack_18;
  undefined **local_14;
  undefined **local_10;
  Color *local_c;
  ReferenceController *local_8;
  
  local_10 = (undefined **)0x0;
  if (in_stack_000002c0 == 0) {
    bVar10 = WorldObject__IsFleet();
    if (bVar10) {
      bVar10 = WorldObject__IsFleet();
      if (!bVar10) {
        util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\ui\\dropdownui.cpp",0x26
                        ,"IsFleet()",(char *)0x0);
        DebugBreak();
      }
      if (param_3 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(param_3);
        util__ReferenceController__IsDataStillValid(param_3);
      }
      pFVar11 = (Faction *)(uintptr_t)(Fleet__GetAlliance());
      local_c = (Color *)(uintptr_t)(StrategicManager__GetAllianceColor(&local_134,pFVar11));
      bVar6 = true;
      bVar5 = false;
      bVar1 = true;
      this = param_3;
    }
    else {
      local_c = (Color *)util__Color__Color__o7(&local_114);
      bVar6 = false;
      bVar5 = true;
      bVar1 = false;
      this = local_8;
    }
    bVar9 = false;
    bVar8 = false;
    bVar7 = false;
    bVar4 = true;
    bVar3 = false;
    bVar2 = false;
    bVar10 = false;
    local_34 = &vftable_5;
    util__Str_char___Str_char(&local_30,(Str_L_char_G_ *)&local_c->_pad_0x4_1);
    local_34 = &vftable_59;
    *(uint32_t *)&local_24 = *(uint32_t *)&local_c->Hue_degrees;
    *(uint32_t *)&ppuStack_20 = *(uint32_t *)&local_c->Saturation;
    *(uint32_t *)&ppuStack_1c = *(uint32_t *)&local_c->Value;
    pRStack_18 = (ReferenceController *)(uintptr_t)*(undefined4 *)&((local_c->Alpha));
    pSVar17 = &local_30;
    *(uint32_t *)&local_14 = (uint32_t)(uintptr_t)(ppuStack_20);
    local_10 = ppuStack_1c;
    local_c = (Color *)local_24;
    local_8 = pRStack_18;
  }
  else {
    if (in_stack_000002c0 == 3) {
      pppuVar12 = (undefined ***)util__Color__Color__o7(&local_f4);
      bVar9 = false;
      bVar8 = false;
      bVar3 = true;
      bVar2 = false;
      bVar10 = false;
    }
    else {
      if (in_stack_000002c0 == 2) {
        if (in_stack_000002c8 != (ReferenceController *)0x0) {
          util__ReferenceController__IsDataStillValid(in_stack_000002c8);
        }
        fVar18 = 1.0;
        pFVar11 = (Faction *)(uintptr_t)(Fleet__GetAlliance());
        pFVar13 = (Faction *)(uintptr_t)(StrategicManager__GetPlayerAlliance());
        iVar14 = (int)(uintptr_t)(util__Color__Color__o7(&local_d4));
        bVar9 = false;
        bVar2 = true;
        bVar10 = false;
      }
      else {
        if ((in_stack_000002c0 == 6) || (in_stack_000002c0 == 7)) {
          pCVar16 = (CustomUIThemeInterface *)(uintptr_t)(Manager__GetCustomTheme());
          pCVar15 = (Color *)util__Color__Color(&local_94,(Color *)&pCVar16[99].field_0x8);
          bVar10 = false;
        }
        else {
          pCVar15 = (Color *)util__Color__Color__o7(&local_b4);
          bVar10 = true;
        }
        bVar9 = true;
        bVar2 = false;
        iVar14 = (int)(uintptr_t)(util__Color__Color(&local_74,pCVar15));
      }
      local_34 = &vftable_5;
      util__Str_char___Str_char(&local_30,(Str_L_char_G_ *)(iVar14 + 4));
      *(uint32_t *)&local_24 = (uint32_t)(uintptr_t)(*(undefined ***)(iVar14 + 0x10));
      ppuStack_20 = *(undefined ***)(iVar14 + 0x14);
      ppuStack_1c = *(undefined ***)(iVar14 + 0x18);
      pRStack_18 = *(ReferenceController **)(iVar14 + 0x1c);
      local_34 = &vftable_59;
      pppuVar12 = &local_34;
      bVar8 = true;
      bVar3 = false;
    }
    bVar7 = true;
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    bVar1 = false;
    local_54 = &vftable_5;
    util__Str_char___Str_char(&local_50,(Str_L_char_G_ *)(pppuVar12 + 1));
    local_44 = pppuVar12[4];
    pSVar17 = &local_50;
    local_c = (Color *)local_44;
    local_40 = pppuVar12[5];
    *(uint32_t *)&local_14 = (uint32_t)(uintptr_t)(local_40);
    local_3c = pppuVar12[6];
    local_10 = local_3c;
    this = (ReferenceController *)pppuVar12[7];
    local_54 = &vftable_59;
    local_38 = this;
    local_8 = this;
  }
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_5;
  util__Str_char___Str_char((Str_L_char_G_ *)&__return_storage_ptr__->_pad_0x4_1,pSVar17);
  __return_storage_ptr__->Hue_degrees = (double)(uintptr_t)((float)(int)(uintptr_t)(local_c));
  __return_storage_ptr__->Saturation = (double)(uintptr_t)((float)(int)(uintptr_t)(local_14));
  __return_storage_ptr__->Value = (double)(uintptr_t)((float)(int)(uintptr_t)(local_10));
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_59;
  __return_storage_ptr__->Alpha = (double)(uintptr_t)((float)(int)(uintptr_t)(local_8));
  if ((bVar7) && (local_50.Data != (char *)0x0)) {
    port_op_delete(local_50.Data);
  }
  if ((bVar8) && (local_30.Data != (char *)0x0)) {
    port_op_delete(local_30.Data);
  }
  if ((bVar9) &&
     (local_74._pad_0x0_0 = (int)&vftable_5,
     (void *)local_74._pad_0x4_1 != (void *)0x0)) {
    port_op_delete((void *)local_74._pad_0x4_1);
    local_74._pad_0x4_1 = 0;
  }
  if ((bVar10) &&
     (local_b4._pad_0x0_0 = (int)&vftable_5,
     (void *)local_b4._pad_0x4_1 != (void *)0x0)) {
    port_op_delete((void *)local_b4._pad_0x4_1);
    local_b4._pad_0x4_1 = 0;
  }
  if ((bVar2) &&
     (local_d4._pad_0x0_0 = (int)&vftable_5,
     (void *)local_d4._pad_0x4_1 != (void *)0x0)) {
    port_op_delete((void *)local_d4._pad_0x4_1);
    local_d4._pad_0x4_1 = 0;
  }
  if ((bVar3) &&
     (local_f4._pad_0x0_0 = (int)&vftable_5,
     (void *)local_f4._pad_0x4_1 != (void *)0x0)) {
    port_op_delete((void *)local_f4._pad_0x4_1);
    local_f4._pad_0x4_1 = 0;
  }
  if ((bVar4) && (local_30.Data != (char *)0x0)) {
    port_op_delete(local_30.Data);
  }
  if ((bVar5) &&
     (local_114._pad_0x0_0 = (int)&vftable_5,
     (void *)local_114._pad_0x4_1 != (void *)0x0)) {
    port_op_delete((void *)local_114._pad_0x4_1);
    local_114._pad_0x4_1 = 0;
  }
  if ((bVar6) &&
     (local_134._pad_0x0_0 = (int)&vftable_5,
     (void *)local_134._pad_0x4_1 != (void *)0x0)) {
    port_op_delete((void *)local_134._pad_0x4_1);
    local_134._pad_0x4_1 = 0;
  }
  if ((this != (ReferenceController *)0x0) && (bVar1)) {
    util__ReferenceController__ReleaseWeakReference(this);
  }
  if (in_stack_000002c8 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(in_stack_000002c8);
  }
  NodeMouseOver__dtor();
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  return __return_storage_ptr__;
}

//==== 00775a60 GetDropdownIcon ====


/* WARNING: Removing unreachable block (ram,0x00775b48) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: void (__cdecl* ActorDropdown__GetDropdownIcon(struct ActorDropdownAction)const
   )(void) */

_func_void * ActorDropdown__GetDropdownIcon(undefined4 param_1,ReferenceController *param_2)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  Faction *pFVar4;
  Faction *pFVar5;
  code *pcVar6;
  int in_stack_000002bc;
  ReferenceController *in_stack_000002c4;
  ReferenceController *local_8;
  
  bVar2 = false;
  local_8 = (ReferenceController *)0x0;
  if (in_stack_000002bc == 0) {
    bVar1 = WorldObject__IsFleet();
    if (bVar1) {
      bVar2 = WorldObject__IsFleet();
      if (!bVar2) {
        util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\ui\\dropdownui.cpp",0x26
                        ,"IsFleet()",(char *)0x0);
        DebugBreak();
      }
      local_8 = param_2;
      if (param_2 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(param_2);
        util__ReferenceController__IsDataStillValid(param_2);
      }
      pcVar3 = (code *)(uintptr_t) Fleet__GetIcon(false);
      bVar2 = true;
    }
    else {
      bVar1 = WorldObject__IsCelestialObject();
      if (bVar1) {
        pcVar3 = (long long int (*)())(Icons__SimpleCircle);
      }
      else {
        bVar1 = WorldObject__IsLPoint();
        if (bVar1) {
          pcVar3 = (long long int (*)())(Icons__LagrangePoint);
        }
        else {
          bVar1 = ItineraryNode__IsValid();
          if ((bVar1) && (bVar1 = ItineraryNode__IsValid(), bVar1)) {
            pcVar3 = (long long int (*)())(Icons__NodeWithLine);
          }
          else {
            pcVar3 = (long long int (*)())((_func_void *)0x0);
          }
        }
      }
    }
  }
  else if (in_stack_000002bc == 1) {
    pcVar3 = Icons__PerspectiveOrbit;
  }
  else {
    if (in_stack_000002bc == 2) {
      if (in_stack_000002c4 != (ReferenceController *)0x0) {
        util__ReferenceController__IsDataStillValid(in_stack_000002c4);
      }
      pFVar4 = (Faction *)(uintptr_t)(Fleet__GetAlliance());
      pFVar5 = (Faction *)(uintptr_t)(StrategicManager__GetPlayerAlliance());
      pcVar3 = (long long int (*)())(Icons__Intercept);
      pcVar6 = (long long int (*)())(Icons__Join);
      bVar1 = pFVar4 == pFVar5;
    }
    else {
      if (in_stack_000002bc == 3) {
        pcVar3 = (long long int (*)())(Icons__Flyby);
        goto LAB_00775be7;
      }
      if (in_stack_000002bc == 5) {
        pcVar3 = (long long int (*)())(Icons__ClearBurn);
        goto LAB_00775be7;
      }
      if (in_stack_000002bc == 4) {
        pcVar3 = (long long int (*)())(Icons__TopDownOrbit);
        goto LAB_00775be7;
      }
      if (in_stack_000002bc == 6) {
        pcVar3 = (long long int (*)())(Icons__Plus);
        goto LAB_00775be7;
      }
      pcVar3 = (long long int (*)())((_func_void *)0x0);
      pcVar6 = (long long int (*)())(Icons__Minus);
      bVar1 = in_stack_000002bc == 7;
    }
    if (bVar1) {
      pcVar3 = pcVar6;
    }
  }
LAB_00775be7:
  if ((local_8 != (ReferenceController *)0x0) && (bVar2)) {
    util__ReferenceController__ReleaseWeakReference(local_8);
  }
  if (in_stack_000002c4 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(in_stack_000002c4);
  }
  NodeMouseOver__dtor();
  if (param_2 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_2);
  }
  return (_func_void *)(pcVar3);
}





//==== 00776490 GetDropdownRowHeight ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: int  ActorDropdown__GetDropdownRowHeight(struct ActorDropdownAction)const  */

int ActorDropdown__GetDropdownRowHeight(undefined4 param_1,ReferenceController *param_2)

{
  bool bVar1;
  ReferenceController *this;
  bool bVar2;
  bool bVar3;
  CoreUITheme *pCVar4;
  Font *pFVar5;
  Font *this_00;
  Font *this_01;
  Str_L_char_G_ *pSVar6;
  Vec2_L_int_G_ VVar7;
  ReferenceController *in_stack_000002c4;
  int iVar8;
  undefined1 local_24 [20];
  undefined4 local_10;
  ReferenceController *local_c;
  float local_8;
  
  bVar1 = false;
  bVar3 = false;
  local_c = (ReferenceController *)0x0;
  bVar2 = WorldObject__IsFleet();
  if (bVar2) {
    local_10 = param_1;
    local_c = param_2;
    if (param_2 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(param_2);
      bVar3 = util__ReferenceController__IsDataStillValid(param_2);
      local_10 = param_1;
      if (!bVar3) {
        local_10 = 0;
      }
    }
    pCVar4 = (CoreUITheme *)(uintptr_t)(Manager__GetTheme());
    pFVar5 = ThemeFont__Get((ThemeFont *)&(pCVar4->MainFont).FontUsed.CharInfo[8].Advance.Y);
    pCVar4 = (CoreUITheme *)(uintptr_t)(Manager__GetTheme());
    this_00 = ThemeFont__Get((ThemeFont *)&(pCVar4->MainFont).FontUsed.CharInfo[8].Advance.Y);
    pCVar4 = (CoreUITheme *)(uintptr_t)(Manager__GetTheme());
    this_01 = ThemeFont__Get((ThemeFont *)&(pCVar4->MainFont).FontUsed.CharInfo[8].Advance.Y);
    bVar3 = false;
    iVar8 = 0;
    pSVar6 = (Str_L_char_G_ *)(uintptr_t)(Fleet__GetQuickInfo((Str_L_char_G_ *)(local_24 + 8)));
    VVar7 = Font__GetTextSize(pFVar5,(Str_L_char_G_ *)local_24,(int)pSVar6,iVar8,bVar3);
    local_8 = Font__GetLineSpacingMultiplier(this_01);
    local_8 = local_8 - 1.0;
    iVar8 = Font__GetHeight(this_00);
    bVar1 = true;
    bVar3 = true;
    iVar8 = *(int *)(VVar7.X + 4) + (int)((float)iVar8 * local_8);
  }
  else {
    pCVar4 = (CoreUITheme *)(uintptr_t)(Manager__GetTheme());
    pFVar5 = ThemeFont__Get((ThemeFont *)&(pCVar4->MainFont).FontUsed.CharInfo[8].Advance.Y);
    iVar8 = Font__GetHeight(pFVar5);
    iVar8 = iVar8 + 4;
  }
  this = local_c;
  if ((bVar3) && ((void *)(*(uint32_t*)((char*)&(local_24)+8)) != (void *)0x0)) {
    port_op_delete((void *)(*(uint32_t*)((char*)&(local_24)+8)));
    (*(uint32_t*)((char*)&(local_24)+8)) = (uint32_t)(uintptr_t)((void *)0x0);
  }
  if ((this != (ReferenceController *)0x0) && (bVar1)) {
    util__ReferenceController__ReleaseWeakReference(this);
  }
  if (in_stack_000002c4 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(in_stack_000002c4);
  }
  NodeMouseOver__dtor();
  if (param_2 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_2);
  }
  return iVar8;
}





//==== 00778670 IsItineraryPoint ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: bool const  WorldObject__IsItineraryPoint(void)const  */

bool WorldObject__IsItineraryPoint(void)

{
  bool bVar1;
  
  bVar1 = ItineraryNode__IsValid();
  if (bVar1) {
    bVar1 = ItineraryNode__IsValid();
    if (bVar1) {
      return true;
    }
  }
  return false;
}





//==== 00778940 Last_00778940 ====


/* public: virtual struct util__tuple2_L_structActorDropdownAction_Cclassutil__WeakPtr_L_struct_UIWidget_G__G_ &  util__Darray_L_structutil__tuple2_L_structActorDropdownAction_Cclass_util__WeakPtr_L_structUIWidget_G__G__G___Last(void) */

tuple2_L_struct_ActorDropdownAction_Cclass_util__WeakPtr_L_struct_UIWidget_G___G_ * 
util__Darray_struct_util__tuple2_struct_ActorDropdownAction_class_util__WeakPtr_struct_UIWidget_______Last(Darray_L_struct_util__tuple2_L_struct_ActorDropdownAction_Cclass_util__WeakPtr_L_struct_UIWidget_G___G___G_
       *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3c,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (tuple2_L_struct_ActorDropdownAction_Cclass_util__WeakPtr_L_struct_UIWidget_G___G_ *)
         (*(int *)(this + 4) + -0x2d0 + iVar1 * 0x2d0);
}





//==== 00778980 Last_00778980 ====


/* public: virtual struct util__tuple2_L_structActorDropdownAction_Cclassutil__WeakPtr_L_struct_UIWidget_G__G_ const &  util__Darray_L_structutil__tuple2_L_structActorDropdownAction_Cclass_util__WeakPtr_L_structUIWidget_G__G__G___Last(void)const  */

tuple2_L_struct_ActorDropdownAction_Cclass_util__WeakPtr_L_struct_UIWidget_G___G_ * 
util__Darray_struct_util__tuple2_struct_ActorDropdownAction_class_util__WeakPtr_struct_UIWidget_______Last__o3(Darray_L_struct_util__tuple2_L_struct_ActorDropdownAction_Cclass_util__WeakPtr_L_struct_UIWidget_G___G___G_
       *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3d,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (tuple2_L_struct_ActorDropdownAction_Cclass_util__WeakPtr_L_struct_UIWidget_G___G_ *)
         (*(int *)(this + 4) + -0x2d0 + iVar1 * 0x2d0);
}





//==== 00778fd0 SetAll_00778fd0 ====


/* public: virtual void  util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_structActorDropdownAction_G__G__G___SetAll(struct util__tuple2_L_class_util__Str_L_char_G__Cclassutil__Darray_L_structActorDropdownAction_G__G_ const &) */

void 
util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_struct_ActorDropdownAction_______SetAll(Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G___G_
         *this,tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_ActorDropdownAction_G___G_
               *param_1)

{
  Str_L_char_G_ *this_00;
  
  this_00 = *(Str_L_char_G_ **)(this + 4);
  if (this_00 != (Str_L_char_G_ *)((int)this_00 + *(int *)(this + 8) * 0x1c)) {
    do {
      util__Maybe_struct_util__ClassMember___operator(this_00,(Str_L_char_G_ *)param_1);
      Darray_L_struct_ActorDropdownAction_G___op_assign
                ((Darray_L_struct_ActorDropdownAction_G_ *)(this_00 + 1),
                 (Darray_L_struct_ActorDropdownAction_G_ *)(param_1 + 0xc));
      this_00 = (Str_L_char_G_ *)&this_00[2].Capacity;
    } while (this_00 != (Str_L_char_G_ *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x1c));
  }
  return;
}





//==== 0077a120 MethodCaller__public__void___thiscall_StrategicManager__ShiftCameraToCurrentSelection_void__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_L_class_StrategicManager_Cvoid_G___MethodCaller_L__public_void__thiscall_StrategicManager__ShiftCameraToCurrentSelection_void__G_(void *) */

void util__DelegateFactory_L_StrategicManager_Cvoid_G___MethodCaller_L__public__void___thiscall_StrategicManager__ShiftCameraToCurrentSelection_void__G_
               (void *param_1)

{
  Vec4_L_double_G_ VVar1;
  CameraManager *pCVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Vec3_L_double_G_ VStack_1c;
  
  StrategicManager__GetCurrentSelectionLocation_km(&VStack_1c);
  pCVar2 = Manager__GetCameras(param_1);
  CameraManager__ClearCameraOffset(pCVar2);
  uVar3 = SUB84(VStack_1c.Z,0);
  uVar4 = (undefined4)((ulonglong)VStack_1c.Z >> 0x20);
  pCVar2 = Manager__GetCameras(param_1);
  VVar1.Y = VStack_1c.Y;
  VVar1.X = VStack_1c.X;
  VVar1.Y = VStack_1c.Y;
  VVar1.Z = VStack_1c.Z;
  VVar1.Z = uVar3;
  VVar1.W = uVar4;
  CameraManager__AddCameraOffset(pCVar2,(*(Vec4_L_double_G_ *)&(VVar1)));
  return;
}





//==== 0077a140 MethodCaller_UIListBox_ItineraryNode___private__void___thiscall_UIListBox_struct_ItineraryNode___OnCommitSearchString_bool__ ====


/* private: static void __cdecl util__Delegate_L_void_Cbool_G___MethodCaller_L_structUIListBox_L_struct_ItineraryNode_G__C_private_void__thiscallUIListBox_L_struct_ItineraryNode_G___OnCommitSearchString_bool__G_(void *,bool) */

void __cdecl
util__Delegate_void_bool___MethodCaller_struct_UIListBox_struct_ItineraryNode___private__void___thiscall_UIListBox_struct_ItineraryNode___OnCommitSearchString_bool
          (void *param_1,bool param_2)

{
  UIListBox_L_struct_ItineraryNode_G___OnCommitSearchString
            ((UIListBox_L_struct_ItineraryNode_G_ *)param_1,param_2);
  return;
}





//==== 0077a190 MethodCallerConst__public__bool___thiscall_BurnInfoCustomWidget__CanEdit_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static bool __cdecl util__DelegateFactory_L_struct_BurnInfoCustomWidget_Cbool_G___MethodCallerConst_L__public_bool__thiscall_BurnInfoCustomWidget__CanEdit_void_const_G_(void const * const) */

bool util__DelegateFactory_L_BurnInfoCustomWidget_Cbool_G___MethodCallerConst_L__public__bool___thiscall_BurnInfoCustomWidget__CanEdit_void_const__G_
               (void *param_1)

{
  bool bVar1;
  
  bVar1 = StrategicManager__IsTurnRunning();
  return !bVar1;
}





//==== 0077a1c0 MethodCallerConst__private__void____cdecl___thiscall_HUDItineraryInfoPanel__GetBeginCancelButtonIcon_void_const__void__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static void (__cdecl*__cdecl util__DelegateFactory_L_structHUDItineraryInfoPanel_Cvoid____cdecl_P__void__G___MethodCallerConst_L__private_void___cdecl_P__thiscall_HUDItineraryInfoPanel__GetBeginCancelButtonIcon_void_const__void__G_(void const * const))(void) */

_func_void *
util__DelegateFactory_struct_HUDItineraryInfoPanel_void____cdecl___void____MethodCallerConst__private__void____cdecl___thiscall_HUDItineraryInfoPanel__GetBeginCancelButtonIcon_void_const__void
          (void *param_1)

{
  bool bVar1;
  code *pcVar2;
  
  bVar1 = HUDItineraryInfoPanel__HasMission();
  pcVar2 = (long long int (*)())(Icons__BurnGrabber);
  if (bVar1) {
    pcVar2 = (long long int (*)())(Icons__CancelTrajectory);
  }
  return (_func_void *)(pcVar2);
}




