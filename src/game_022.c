// Auto-generated from Ghidra decompilation
#include "port_prelude.h"

//==== 007c5670 scalar_deleting_destructor_007c5670 ====

/* public: virtual void * __thiscall PhotonPacketComponent:: 0 scalardeletingdestructor(unsigned
   int) */

void * __thiscall
PhotonPacketComponent___scalar_deleting_destructor(PhotonPacketComponent *this,uint param_1)

{
  this->_pad_0x0_0 = (int)&vftable_495;
  if ((ReferenceController *)this->_pad_0x8_2 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this->_pad_0x8_2);
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x40);
  }
  return this;
}

//==== 007c5770 GetAdditionalMomentum_kg_m__s_007c5770 ====


/* public: virtual double __thiscall PhotonPacketComponent__GetAdditionalMomentum_kg_m__s(void)const
    */

double __thiscall PhotonPacketComponent__GetAdditionalMomentum_kg_m__s(PhotonPacketComponent *this)

{
  return this->Energy_J / 299792458.0;
}





//==== 007c5780 GetClassID_007c5780 ====


/* public: virtual unsigned long __thiscall ExplosionComponent__GetClassID(void)const  */

ulong __thiscall ExplosionComponent__GetClassID(ExplosionComponent *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_39c93013__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_39c93013__thread_safe_static_guard_0__);
    if ( cde_l2_39c93013__thread_safe_static_guard_0__ == -1) {
       cde_l2r_114c9736_ID = util__GetHash("ExplosionComponent");
      _Init_thread_footer(& cde_l2_39c93013__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2r_114c9736_ID;
}





//==== 007c57e0 GetClassID_007c57e0 ====


/* public: virtual unsigned long __thiscall PhotonPacketComponent__GetClassID(void)const  */

ulong __thiscall PhotonPacketComponent__GetClassID(PhotonPacketComponent *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_2bc5cd40__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_2bc5cd40__thread_safe_static_guard_0__);
    if ( cde_l2_2bc5cd40__thread_safe_static_guard_0__ == -1) {
       cde_l2r_e5c9104c_ID = util__GetHash("PhotonPacketComponent");
      _Init_thread_footer(& cde_l2_2bc5cd40__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2r_e5c9104c_ID;
}





//==== 007c5840 GetClassID_007c5840 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual unsigned long  ShotComponent__GetClassID(void)const  */

ulong ShotComponent__GetClassID(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_cc6b9c5a__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_cc6b9c5a__thread_safe_static_guard_0__);
    if ( cde_l2_cc6b9c5a__thread_safe_static_guard_0__ == -1) {
       cde_l2r_63ab3f5e_ID =
           util__GetHash("ShotComponent");
      _Init_thread_footer(& cde_l2_cc6b9c5a__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2r_63ab3f5e_ID;
}





//==== 007c58a0 GetClassID_007c58a0 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual unsigned long  UntrackComponent__GetClassID(void)const  */

ulong UntrackComponent__GetClassID(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_e6ebefbb__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_e6ebefbb__thread_safe_static_guard_0__);
    if ( cde_l2_e6ebefbb__thread_safe_static_guard_0__ == -1) {
       cde_l2r_6f994b55_ID
           = util__GetHash("UntrackComponent");
      _Init_thread_footer(& cde_l2_e6ebefbb__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2r_6f994b55_ID;
}





//==== 007c5900 GetDuration_s ====


/* public: double __thiscall ExplosionComponent__GetDuration_s(void)const  */

double __thiscall ExplosionComponent__GetDuration_s(ExplosionComponent *this)

{
  return this->Duration_s;
}





//==== 007c5a40 GetFractionEnergyOnArea ====


/* public: double __thiscall ExplosionComponent__GetFractionEnergyOnArea(double,double)const  */

double __thiscall
ExplosionComponent__GetFractionEnergyOnArea(ExplosionComponent *this,double param_1,double param_2)

{
  double dVar1;
  
  dVar1 = param_1 / (param_2 * 1000.0 * param_2 * 1000.0 * 12.566370614359172);
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  if (1.0 <= dVar1) {
    dVar1 = 1.0;
  }
  return dVar1;
}





//==== 007c5b90 GetGasMass_kg ====


/* public: double __thiscall ExplosionComponent__GetGasMass_kg(void)const  */

double __thiscall ExplosionComponent__GetGasMass_kg(ExplosionComponent *this)

{
  return this->GasMass_kg;
}





//==== 007c5c30 GetMaxRange_km ====


/* public: double __thiscall ExplosionComponent__GetMaxRange_km(void)const  */

double __thiscall ExplosionComponent__GetMaxRange_km(ExplosionComponent *this)

{
  double dVar1;
  double dStack_c;
  
  dStack_c = this->PhotonEnergy_J;
  if ((dStack_c <= 0.0) || (this->PhotonWavelength_nm <= 0.0)) {
    dStack_c = 0.0;
  }
  dVar1 = GetGasEnergy_J(this);
  dVar1 = GetExplosionFalloffRange_km(dVar1 + dStack_c);
  return dVar1;
}





//==== 007c5c80 GetPhotonEnergy_J ====


/* public: double __thiscall ExplosionComponent__GetPhotonEnergy_J(void)const  */

double __thiscall ExplosionComponent__GetPhotonEnergy_J(ExplosionComponent *this)

{
  if ((0.0 < this->PhotonEnergy_J) && (0.0 < this->PhotonWavelength_nm)) {
    return this->PhotonEnergy_J;
  }
  return 0.0;
}





//==== 007c5cc0 GetPhotonWavelength_nm ====


/* public: double __thiscall ExplosionComponent__GetPhotonWavelength_nm(void)const  */

double __thiscall ExplosionComponent__GetPhotonWavelength_nm(ExplosionComponent *this)

{
  return this->PhotonWavelength_nm;
}





//==== 007c5cd0 GetRadius_km_007c5cd0 ====


/* public: virtual class util__Maybe_L_double_G_ __thiscall ExplosionComponent__GetRadius_km(void)const
    */

Maybe_L_double_G_ * __thiscall
ExplosionComponent__GetRadius_km(ExplosionComponent *this,Maybe_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  double dStack_c;
  
  dStack_c = this->PhotonEnergy_J;
  if ((dStack_c <= 0.0) || (this->PhotonWavelength_nm <= 0.0)) {
    dStack_c = 0.0;
  }
  dVar1 = GetGasEnergy_J(this);
  dVar1 = GetExplosionFalloffRange_km(dVar1 + dStack_c);
  __return_storage_ptr__->Data = dVar1;
  __return_storage_ptr__->IsValidData = true;
  return __return_storage_ptr__;
}





//==== 007c5ee0 GetTotalEnergy_J_007c5ee0 ====


/* public: double __thiscall ExplosionComponent__GetTotalEnergy_J(void)const  */

double __thiscall ExplosionComponent__GetTotalEnergy_J(ExplosionComponent *this)

{
  double dVar1;
  double dVar2;
  
  dVar2 = this->PhotonEnergy_J;
  if ((0.0 < dVar2) && (0.0 < this->PhotonWavelength_nm)) {
    dVar1 = GetGasEnergy_J(this);
    return dVar1 + dVar2;
  }
  dVar2 = GetGasEnergy_J(this);
  return dVar2 + 0.0;
}





//==== 007c62f0 IsGasExplosion ====

/* public: bool __thiscall ExplosionComponent__IsGasExplosion(void)const  */

bool __thiscall ExplosionComponent__IsGasExplosion(ExplosionComponent *this)

{
  int iVar1;
  
  iVar1 = (**(code **)((this->GasComposition)._pad_0x0_0 + 0xc))();
  if (((0 < iVar1) && (0.0 < this->GasMass_kg)) && (0.0 < this->GasTemperature_K)) {
    return true;
  }
  return false;
}

//==== 007c6330 IsPhotonExplosion ====


/* public: bool __thiscall ExplosionComponent__IsPhotonExplosion(void)const  */

bool __thiscall ExplosionComponent__IsPhotonExplosion(ExplosionComponent *this)

{
  if ((0.0 < this->PhotonEnergy_J) && (0.0 < this->PhotonWavelength_nm)) {
    return true;
  }
  return false;
}





//==== 007c6790 OriginShift_007c6790 ====


/* public: virtual void  PhotonPacketComponent__OriginShift(struct
   util__PhysicalState_L_structutil__Vec3_L_double_G__G_) */

void 
PhotonPacketComponent__OriginShift
          (PhotonPacketComponent *this,double param_2,double param_3,double param_4)

{
  (this->EmitPosition_km).X = (this->EmitPosition_km).X + param_2;
  (this->EmitPosition_km).Y = param_3 + (this->EmitPosition_km).Y;
  (this->EmitPosition_km).Z = param_4 + (this->EmitPosition_km).Z;
  return;
}





//==== 007c7050 DoesLineCylinderIntersect_double_ ====


/* bool __cdecl util__DoesLineCylinderIntersect_double(struct util__Line3_L_double_G_,double,struct
   util__Line3_L_double_G_) */

bool __cdecl
util__DoesLineCylinderIntersect_double(Line3_L_double_G_ param_1,double param_2,Line3_L_double_G_ param_3)

{
  undefined8 stack0xfffffff0;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  double dVar8;
  Line3_L_double_G_ LVar9;
  Line3_L_double_G_ LVar10;
  Line3_L_double_G_ LVar11;
  Line3_L_double_G_ LVar12;
  Vec4_L_double_G_ VVar13;
  Vec4_L_double_G_ VVar14;
  Vec4_L_double_G_ VVar15;
  Vec4_L_double_G_ VVar16;
  Vec4_L_double_G_ VVar17;
  Vec4_L_double_G_ VVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 uVar21;
  double *pdVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dStack_e8;
  Vec3_L_double_G_ VStack_e0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  double dStack_b8;
  Vec4_L_double_G_ VStack_b0;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  double dStack_80;
  double dStack_78;
  char cStack_6a;
  char cStack_69;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  Plane_L_double_G_ PStack_38;
  uint uStack_14;
  
  uStack_14 = __security_cookie ^ (uint)&stack0xfffffff0;
  uStack_48 = param_3.B.Y;
  uStack_44 = param_3.B.Z;
  uStack_40 = param_3.B.Z;
  uStack_3c = param_3.B.W;
  uStack_68 = param_3.A.X;
  uStack_64 = param_3.A.Y;
  uStack_60 = param_3.A.Y;
  uStack_5c = param_3.A.Z;
  uStack_58 = param_3.A.Z;
  uStack_54 = param_3.A.W;
  uStack_50 = param_3.B.X;
  uStack_4c = param_3.B.Y;
  uStack_c8 = param_1.A.Z;
  uStack_c4 = param_1.A.W;
  uStack_c0 = param_1.B.X;
  uStack_bc = param_1.B.Y;
  uStack_90 = param_1.B.Y;
  uStack_8c = param_1.B.Z;
  uStack_88 = param_1.B.Z;
  uStack_84 = param_1.B.W;
  LVar9.A.Y = param_1.A.X;
  *(uint32_t *)&LVar9.A.X = (uint32_t)(uintptr_t)(&PStack_38.Mode__Normal.Y);
  LVar9.A.Y = param_1.A.Y;
  LVar9.A.Z = param_1.A.Y;
  LVar9.A.Z = param_1.A.Z;
  LVar9.A.W = param_1.A.Z;
  LVar9.B.X = param_1.A.W;
  LVar9.B.Y = param_1.B.X;
  LVar9.B.Y = param_1.B.Y;
  LVar9.B.Z = param_1.B.Y;
  LVar9.B.Z = param_1.B.Z;
  LVar9.B.W = param_1.B.Z;
  LVar12.A.Y = param_3.A.X;
  LVar12.A.X = (int)((ulonglong)param_2 >> 0x20);
  LVar12.A.Y = param_3.A.Y;
  LVar12.A.Z = param_3.A.Y;
  LVar12.A.Z = param_3.A.Z;
  LVar12.A.W = param_3.A.Z;
  LVar12.B.X = param_3.A.W;
  LVar12.B.Y = param_3.B.X;
  LVar12.B.Y = param_3.B.Y;
  LVar12.B.Z = param_3.B.Y;
  LVar12.B.Z = param_3.B.Z;
  LVar12.B.W = param_3.B.Z;
  LineTubeIntersect_L_double_G_(LVar9,(double)CONCAT44(SUB84(param_2,0),param_1.B.W),LVar12);
  dStack_e8 = 0.0;
  *(uint32_t *)&dVar2 = *(uint32_t *)&(param_1.A);
  dVar4 = param_1.A.Y;
  if (PStack_38.OriginDistance != '\0') {
    VStack_b0.X = (double)CONCAT44(uStack_bc,uStack_c0) - dVar2;
    (*(uint64_t*)((char*)&(auVar6)+4)) = CONCAT44(uStack_bc,uStack_c0);
    (*(uint32_t*)&(auVar6)) = param_1.A.Y;
    (*(uint64_t*)&(auVar23)) = (*(uint64_t*)&(auVar6)) << 0x20;
    (*(uint32_t*)((char*)&(auVar23)+8)) = param_1.A.Y;
    (*(uint32_t *)((char *)&(auVar23) + 12)) = param_1.A.Z;
    VStack_b0.Y = (double)CONCAT44(uStack_8c,uStack_90) - (*(uint64_t*)((char*)&(auVar23)+8));
    (*(uint64_t*)((char*)&(auVar7)+4)) = dVar4;
    (*(uint32_t*)&(auVar7)) = uStack_8c;
    (*(uint64_t*)&(auVar24)) = (*(uint64_t*)&(auVar7)) << 0x20;
    (*(uint32_t*)((char*)&(auVar24)+8)) = uStack_88;
    (*(uint32_t *)((char *)&(auVar24) + 12)) = uStack_84;
    VStack_b0.Z = (*(uint64_t*)((char*)&(auVar24)+8)) - (double)CONCAT44(uStack_c4,uStack_c8);
    Vec3_L_double_G___SafeNormalized(&VStack_b0,&VStack_e0);
    VStack_b0.Y = (double)CONCAT44(uStack_4c,uStack_50) - (double)CONCAT44(uStack_64,uStack_68);
    dStack_78 = (double)CONCAT44(uStack_44,uStack_48) - (double)CONCAT44(uStack_5c,uStack_60);
    dStack_80 = (double)CONCAT44(uStack_3c,uStack_40) - (double)CONCAT44(uStack_54,uStack_58);
    VStack_b0.Z = 0;
    VStack_b0.W = 0;
    dVar1 = dStack_78 * PStack_38.Mode__Normal.Y + (double)CONCAT44(uStack_5c,uStack_60);
    dVar3 = dStack_80 * PStack_38.Mode__Normal.Y + (double)CONCAT44(uStack_54,uStack_58);
    *(uint32_t *)&auVar23 = *(uint32_t *)&(param_1.A);
    LVar10.A.Z = uStack_c8;
    LVar10.A.X = (double)(*(uint64_t*)&(auVar23));
    LVar10.A.Y = (double)(*(uint64_t*)((char*)&(auVar23)+8));
    LVar10.A.W = uStack_c4;
    LVar10.B.X = uStack_c0;
    LVar10.B.Y = uStack_bc;
    LVar10.B.Y = uStack_90;
    LVar10.B.Z = uStack_8c;
    LVar10.B.Z = uStack_88;
    LVar10.B.W = uStack_84;
    VVar13.Y = VStack_e0.Y;
    VVar13.X = VStack_e0.X;
    VVar13.Y = VStack_e0.Y;
    VVar13.Z = VStack_e0.Z;
    VVar13.Z = SUB84(VStack_e0.Z,0);
    VVar13.W = (int)((ulonglong)VStack_e0.Z >> 0x20);
    VVar17.Y = SUB84(dVar1,0);
    VVar17.X = VStack_b0.Y * PStack_38.Mode__Normal.Y + (double)CONCAT44(uStack_64,uStack_68);
    VVar17.Z = (int)((ulonglong)dVar1 >> 0x20);
    VVar17.Z = SUB84(dVar3,0);
    VVar17.W = (int)((ulonglong)dVar3 >> 0x20);
    dStack_b8 = PointAlongTube_L_double_G_(LVar10,VVar13,VVar17);
    dVar1 = dStack_78 * PStack_38.Mode__Normal.Z + (double)CONCAT44(uStack_5c,uStack_60);
    dVar3 = dStack_80 * PStack_38.Mode__Normal.Z + (double)CONCAT44(uStack_54,uStack_58);
    LVar11.A.Z = uStack_c8;
    LVar11.A.X = (double)(*(uint64_t*)&(auVar23));
    LVar11.A.Y = (double)(*(uint64_t*)((char*)&(auVar23)+8));
    LVar11.A.W = uStack_c4;
    LVar11.B.X = uStack_c0;
    LVar11.B.Y = uStack_bc;
    LVar11.B.Y = uStack_90;
    LVar11.B.Z = uStack_8c;
    LVar11.B.Z = uStack_88;
    LVar11.B.W = uStack_84;
    VVar14.Y = VStack_e0.Y;
    VVar14.X = VStack_e0.X;
    VVar14.Y = VStack_e0.Y;
    VVar14.Z = VStack_e0.Z;
    VVar14.Z = SUB84(VStack_e0.Z,0);
    VVar14.W = (int)((ulonglong)VStack_e0.Z >> 0x20);
    VVar18.Y = SUB84(dVar1,0);
    VVar18.X = VStack_b0.Y * PStack_38.Mode__Normal.Z + (double)CONCAT44(uStack_64,uStack_68);
    VVar18.Z = (int)((ulonglong)dVar1 >> 0x20);
    VVar18.Z = SUB84(dVar3,0);
    VVar18.W = (int)((ulonglong)dVar3 >> 0x20);
    dStack_80 = PointAlongTube_L_double_G_(LVar11,VVar14,VVar18);
    if (((((dStack_b8 <= 0.0) && (1.0 <= dStack_b8)) || ((dStack_b8 <= 1.0 && (0.0 <= dStack_b8))))
        || ((dStack_80 <= 0.0 && (1.0 <= dStack_80)))) || ((dStack_80 <= 1.0 && (0.0 <= dStack_80)))
       ) goto LAB_007c7705;
  }
  PStack_38.Mode__Normal.Y = param_1.B.X - dVar2;
  PStack_38.Mode__Normal.Z = param_1.B.Y - dVar4;
  PStack_38.OriginDistance = param_1.B.Z - param_1.A.Z;
  Vec3_L_double_G___SafeNormalized((Vec3_L_double_G_ *)&PStack_38.Mode__Normal.Y,&VStack_e0);
  VStack_b0.Y = param_3.A.X;
  VStack_b0.Z = param_3.A.Y;
  VStack_b0.Z = param_3.A.Y;
  VStack_b0.W = param_3.A.Z;
  uStack_90 = param_3.A.Z;
  uStack_8c = param_3.A.W;
  uStack_88 = param_3.B.X;
  uStack_84 = param_3.B.Y;
  uStack_c8 = param_3.B.Y;
  uStack_c4 = param_3.B.Z;
  uStack_c0 = param_3.B.Z;
  uStack_bc = param_3.B.W;
  VVar15.Y = VStack_e0.Y;
  VVar15.X = VStack_e0.X;
  VVar15.Y = VStack_e0.Y;
  VVar15.Z = VStack_e0.Z;
  VVar15.Z = SUB84(VStack_e0.Z,0);
  VVar15.W = (int)((ulonglong)VStack_e0.Z >> 0x20);
  pdVar22 = (double *)Plane_L_double_G___Plane_L_double_G_(&PStack_38,VVar15,param_1.A);
  dVar8 = (double)CONCAT44(VStack_b0.Z,VStack_b0.Y);
  (*(uint32_t*)((char*)&(auVar19)+8)) = VStack_b0.Z;
  (*(uint64_t*)&(auVar19)) = dVar8;
  (*(uint32_t *)((char *)&(auVar19) + 12)) = VStack_b0.W;
  dVar1 = *pdVar22;
  dVar3 = pdVar22[1];
  PStack_38.Mode__Normal.Z = pdVar22[2];
  PStack_38.OriginDistance = pdVar22[3];
  VStack_b0.X = (*(uint64_t*)((char*)&(auVar19)+8));
  dStack_78 = ((double)CONCAT44(uStack_84,uStack_88) - dVar8) * dVar1 +
              ((double)CONCAT44(uStack_c4,uStack_c8) - VStack_b0.X) * dVar3 +
              ((double)CONCAT44(uStack_bc,uStack_c0) - (double)CONCAT44(uStack_8c,uStack_90)) *
              PStack_38.Mode__Normal.Z;
  cStack_69 = NAN(dStack_78) == (dStack_78 == 0.0);
  if ((bool)cStack_69) {
    dStack_78 = ((PStack_38.OriginDistance * dVar1 - dVar8) * dVar1 +
                 (PStack_38.OriginDistance * dVar3 - VStack_b0.X) * dVar3 +
                (PStack_38.OriginDistance * PStack_38.Mode__Normal.Z -
                (double)CONCAT44(uStack_8c,uStack_90)) * PStack_38.Mode__Normal.Z) / dStack_78;
  }
  else {
    dStack_78 = 0.0;
  }
  VStack_b0.Y = param_3.A.X;
  VStack_b0.Z = param_3.A.Y;
  VStack_b0.Z = param_3.A.Y;
  VStack_b0.W = param_3.A.Z;
  uStack_90 = param_3.A.Z;
  uStack_8c = param_3.A.W;
  uStack_88 = param_3.B.X;
  uStack_84 = param_3.B.Y;
  uStack_c8 = param_3.B.Y;
  uStack_c4 = param_3.B.Z;
  uStack_c0 = param_3.B.Z;
  uStack_bc = param_3.B.W;
  VVar16.Y = VStack_e0.Y;
  VVar16.X = VStack_e0.X;
  VVar16.Y = VStack_e0.Y;
  VVar16.Z = VStack_e0.Z;
  VVar16.Z = SUB84(VStack_e0.Z,0);
  VVar16.W = (int)((ulonglong)VStack_e0.Z >> 0x20);
  pdVar22 = (double *)Plane_L_double_G___Plane_L_double_G_(&PStack_38,VVar16,param_1.B);
  dVar5 = (double)CONCAT44(VStack_b0.Z,VStack_b0.Y);
  (*(uint32_t*)((char*)&(auVar20)+8)) = VStack_b0.Z;
  (*(uint64_t*)&(auVar20)) = dVar5;
  (*(uint32_t *)((char *)&(auVar20) + 12)) = VStack_b0.W;
  dVar3 = *pdVar22;
  dVar8 = pdVar22[1];
  PStack_38.Mode__Normal.Z = pdVar22[2];
  PStack_38.OriginDistance = pdVar22[3];
  VStack_b0.X = (*(uint64_t*)((char*)&(auVar20)+8));
  VStack_b0.Y = VStack_b0.Z;
  VStack_b0.Z = VStack_b0.W;
  dVar1 = ((double)CONCAT44(uStack_84,uStack_88) - dVar5) * dVar3 +
          ((double)CONCAT44(uStack_c4,uStack_c8) - VStack_b0.X) * dVar8 +
          ((double)CONCAT44(uStack_bc,uStack_c0) - (double)CONCAT44(uStack_8c,uStack_90)) *
          PStack_38.Mode__Normal.Z;
  cStack_6a = NAN(dVar1) == (dVar1 == 0.0);
  if ((bool)cStack_6a) {
    dStack_e8 = ((PStack_38.OriginDistance * dVar3 - dVar5) * dVar3 +
                 (PStack_38.OriginDistance * dVar8 - VStack_b0.X) * dVar8 +
                (PStack_38.OriginDistance * PStack_38.Mode__Normal.Z -
                (double)CONCAT44(uStack_8c,uStack_90)) * PStack_38.Mode__Normal.Z) / dVar1;
  }
  if ((cStack_69 != '\0') || ((bool)cStack_6a)) {
    if ((cStack_69 == '\0') || (!(bool)cStack_6a)) {
      LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\advancedgeometry.inl",
                0x22c,"CapA_t.IsValid() && CapB_t.IsValid()",(char *)0x0);
      DebugBreak();
    }
    if (cStack_69 == '\0') {
      LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,"IsValid()"
                ,(char *)0x0);
      DebugBreak();
    }
    *(uint32_t *)&dVar1 = *(uint32_t *)&(param_3.A);
    dVar3 = param_3.A.Y;
    dVar8 = param_3.A.Z;
    dStack_80 = (param_3.B.Y - dVar3) * dStack_78 + dVar3;
    dStack_b8 = (param_3.B.X - dVar1) * dStack_78 + dVar1;
    dStack_78 = (param_3.B.Z - dVar8) * dStack_78 + dVar8;
    if (cStack_6a == '\0') {
      LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,"IsValid()"
                ,(char *)0x0);
      DebugBreak();
    }
    dVar5 = dStack_78 - param_1.A.Z;
    VStack_b0.Y = (double)CONCAT44(VStack_b0.Z,VStack_b0.Y);
    if (((dStack_b8 - dVar2) * (dStack_b8 - dVar2) + (dStack_80 - dVar4) * (dStack_80 - dVar4) +
         dVar5 * dVar5 <= param_2 * param_2) ||
       (dVar2 = ((param_3.B.X - dVar1) * dStack_e8 + dVar1) - param_1.B.X,
       dVar4 = ((param_3.B.Y - dVar3) * dStack_e8 + dVar3) - param_1.B.Y,
       dVar1 = ((param_3.B.Z - dVar8) * dStack_e8 + dVar8) - param_1.B.Z,
       VStack_b0.Y = (double)CONCAT44(VStack_b0.Z,VStack_b0.Y),
       dVar2 * dVar2 + dVar4 * dVar4 + dVar1 * dVar1 <= param_2 * param_2)) {
LAB_007c7705:
      uVar21 = 1;
      __security_check_cookie(uStack_14 ^ (uint)&stack0xfffffff0);
      return (bool)uVar21;
    }
  }
  uVar21 = 0;
  __security_check_cookie(uStack_14 ^ (uint)&stack0xfffffff0);
  return (bool)uVar21;
}





//==== 007c8d30 Join_util__SharedPtr_CollisionHit___ ====


/* class util__Darray_L_classutil__SharedPtr_L_structCollisionHit_G__G_ __cdecl util__Join_L_class_util__SharedPtr_L_structCollisionHit_G__G_(class util__Darray_L_classutil__SharedPtr_L_struct_CollisionHit_G__G_ const &,class util__Darray_L_classutil__SharedPtr_L_structCollisionHit_G__G_ const &)
    */

void __cdecl
util__Join_class_util__SharedPtr_struct_CollisionHit
          (Darray_L_class_util__SharedPtr_L_struct_CollisionHit_G___G_ *param_1,
          Darray_L_class_util__SharedPtr_L_struct_CollisionHit_G___G_ *param_2)

{
  undefined8 stack0xfffffffc;
  ReferenceController *pRVar1;
  ReferenceController *this;
  Darray_L_class_util__SharedPtr_L_struct_CollisionHit_G___G_ *pDVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ReferenceControllerRegistry *pRVar6;
  int *in_stack_0000000c;
  void *pvVar7;
  ReferenceController *pRStack_14;
  Darray_L_class_util__SharedPtr_L_struct_CollisionHit_G___G_ *pDStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pDStack_10 = param_2;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar4 = (**(code **)(*(int *)param_2 + 0xc))();
  iVar5 = (**(code **)(uintptr_t)(*in_stack_0000000c + 0xc))();
  Darray_L_class_util__SharedPtr_L_struct_CollisionHit_G___G___Darray_L_class_util__SharedPtr_L_struct_CollisionHit_G___G_(param_1,iVar4 + iVar5);
  pDVar2 = pDStack_10;
  iStack_c = 0;
  iVar4 = (**(code **)(*(int *)pDStack_10 + 0xc))();
  if (iStack_c < iVar4) {
    do {
      pDStack_10 = (Darray_L_class_util__SharedPtr_L_struct_CollisionHit_G___G_ *)
                   (*(code *)**(undefined4 **)pDVar2)(&iStack_c);
      iVar4 = *(int *)(param_1 + 8);
      pRStack_14 = (ReferenceController *)(iVar4 + 1);
      Darray_L_class_util__SharedPtr_L_struct_CollisionHit_G___G___SetSize(param_1,(int *)&pRStack_14);
      bVar3 = Darray_L_class_util__SharedPtr_L_struct_CollisionHit_G___G___CheckSize(param_1,iVar4);
      if (bVar3) {
        pvVar7 = *(void **)(*(int *)(param_1 + 4) + -8 + *(int *)(param_1 + 8) * 8);
        iVar4 = *(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 8;
        pRStack_14 = *(ReferenceController **)(iVar4 + -4);
        *(int *)(iVar4 + -8) = *(int *)pDStack_10;
        pRVar1 = *(ReferenceController **)(pDStack_10 + 4);
        *(ReferenceController **)(iVar4 + -4) = pRVar1;
        if (pRVar1 != (ReferenceController *)0x0) {
          ReferenceController__AddStrongReference(pRVar1);
        }
        if ((pRStack_14 != (ReferenceController *)0x0) &&
           (bVar3 = ReferenceController__ReleaseStrongReference(pRStack_14), bVar3)) {
          if (pvVar7 != (void *)0x0) {
            if (*(ReferenceController **)((int)pvVar7 + 0x8c) != (ReferenceController *)0x0) {
              ReferenceController__ReleaseWeakReference
                        (*(ReferenceController **)((int)pvVar7 + 0x8c));
            }
            port_op_delete(pvVar7,0x1b0);
          }
          pRVar6 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
          ReferenceControllerRegistry__PointerWasDestroyed(pRVar6,pvVar7);
        }
      }
      iStack_c = iStack_c + 1;
      iVar4 = (**(code **)(*(int *)pDVar2 + 0xc))();
    } while (iStack_c < iVar4);
  }
  iStack_c = 0;
  iVar4 = (**(code **)(uintptr_t)(*in_stack_0000000c + 0xc))();
  if (iStack_c < iVar4) {
    do {
      pDStack_10 = (Darray_L_class_util__SharedPtr_L_struct_CollisionHit_G___G_ *)
                   (**(code **)*in_stack_0000000c)(&iStack_c);
      iVar4 = *(int *)(param_1 + 8);
      pRStack_14 = (ReferenceController *)(iVar4 + 1);
      Darray_L_class_util__SharedPtr_L_struct_CollisionHit_G___G___SetSize(param_1,(int *)&pRStack_14);
      bVar3 = Darray_L_class_util__SharedPtr_L_struct_CollisionHit_G___G___CheckSize(param_1,iVar4);
      if (bVar3) {
        pvVar7 = *(void **)(*(int *)(param_1 + 4) + -8 + *(int *)(param_1 + 8) * 8);
        iVar4 = *(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 8;
        pRVar1 = *(ReferenceController **)(iVar4 + -4);
        *(int *)(iVar4 + -8) = *(int *)pDStack_10;
        this = *(ReferenceController **)(pDStack_10 + 4);
        *(ReferenceController **)(iVar4 + -4) = this;
        if (this != (ReferenceController *)0x0) {
          ReferenceController__AddStrongReference(this);
        }
        if ((pRVar1 != (ReferenceController *)0x0) &&
           (bVar3 = ReferenceController__ReleaseStrongReference(pRVar1), bVar3)) {
          if (pvVar7 != (void *)0x0) {
            if (*(ReferenceController **)((int)pvVar7 + 0x8c) != (ReferenceController *)0x0) {
              ReferenceController__ReleaseWeakReference
                        (*(ReferenceController **)((int)pvVar7 + 0x8c));
            }
            port_op_delete(pvVar7,0x1b0);
          }
          pRVar6 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
          ReferenceControllerRegistry__PointerWasDestroyed(pRVar6,pvVar7);
        }
      }
      iStack_c = iStack_c + 1;
      iVar4 = (**(code **)(uintptr_t)(*in_stack_0000000c + 0xc))();
    } while (iStack_c < iVar4);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 007c9730 Darray_ThrusterLayout_ ====


/* public:  util__Darray_L_structThrusterLayout_G___Darray_L_structThrusterLayout_G_(class
   util__Darray_L_structThrusterLayout_G_ const &) */

Darray_L_struct_ThrusterLayout_G_ * 
util__Darray_struct_ThrusterLayout___Darray_struct_ThrusterLayout
          (Darray_L_struct_ThrusterLayout_G_ *this,Darray_L_struct_ThrusterLayout_G_ *param_1)

{
  ReferenceController *this_00;
  ReferenceController *this_01;
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint *puStack_8;
  
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &vftable_505;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  puStack_8 = (uint *)(**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,(int *)&puStack_8);
  uVar6 = *(uint *)(this + 0xc);
  uVar4 = -(uint)((int)((ulonglong)uVar6 * 0x68 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 0x68);
  puVar2 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
  if (puVar2 == (uint *)0x0) {
    puVar5 = (uint *)0x0;
  }
  else {
    *puVar2 = uVar6;
    puVar5 = puVar2 + 1;
    if (uVar6 != 0) {
      puVar3 = puVar2 + 7;
      puVar2 = puVar5;
      do {
        *puVar2 = 0;
        puVar2 = puVar2 + 0x1a;
        puVar3[-5] = 0;
        puVar3[-4] = 0;
        puVar3[-3] = 0;
        puVar3[-2] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        puVar3[0xb] = 0;
        puVar3[0xc] = 0;
        puVar3[0xd] = 0;
        puVar3[0xe] = 0;
        puVar3[0xf] = 0;
        puVar3[0x10] = 0;
        puVar3[0x11] = 0;
        puVar3[0x12] = 0;
        puVar3[0x13] = 0;
        uVar6 = uVar6 - 1;
        puVar3 = puVar3 + 0x1a;
      } while (uVar6 != 0);
    }
  }
  *(uint **)(this + 4) = puVar5;
  puStack_8 = *(uint **)(param_1 + 4);
  if (puStack_8 == puStack_8 + *(int *)(param_1 + 8) * 0x1a) {
    return this;
  }
  puVar2 = puStack_8 + 2;
  puVar5 = puVar5 + 1;
  do {
    this_00 = (ReferenceController *)*puVar5;
    puVar5[-1] = *puStack_8;
    this_01 = (ReferenceController *)puVar2[-1];
    *puVar5 = (uint)this_01;
    if (this_01 != (ReferenceController *)0x0) {
      util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(this_01);
    }
    if (this_00 != (ReferenceController *)0x0) {
      ReferenceController__ReleaseWeakReference(this_00);
    }
    uVar6 = puVar2[1];
    uVar4 = puVar2[2];
    uVar1 = puVar2[3];
    puVar5[1] = *puVar2;
    puVar5[2] = uVar6;
    puVar5[3] = uVar4;
    puVar5[4] = uVar1;
    puStack_8 = puStack_8 + 0x1a;
    *(undefined8 *)(puVar5 + 5) = *(undefined8 *)(puVar2 + 4);
    uVar6 = puVar2[7];
    uVar4 = puVar2[8];
    uVar1 = puVar2[9];
    puVar5[7] = puVar2[6];
    puVar5[8] = uVar6;
    puVar5[9] = uVar4;
    puVar5[10] = uVar1;
    *(undefined8 *)(puVar5 + 0xb) = *(undefined8 *)(puVar2 + 10);
    uVar6 = puVar2[0xd];
    uVar4 = puVar2[0xe];
    uVar1 = puVar2[0xf];
    puVar5[0xd] = puVar2[0xc];
    puVar5[0xe] = uVar6;
    puVar5[0xf] = uVar4;
    puVar5[0x10] = uVar1;
    *(undefined8 *)(puVar5 + 0x11) = *(undefined8 *)(puVar2 + 0x10);
    uVar6 = puVar2[0x13];
    uVar4 = puVar2[0x14];
    uVar1 = puVar2[0x15];
    puVar5[0x13] = puVar2[0x12];
    puVar5[0x14] = uVar6;
    puVar5[0x15] = uVar4;
    puVar5[0x16] = uVar1;
    puVar3 = puVar2 + 0x16;
    puVar2 = puVar2 + 0x1a;
    *(undefined8 *)(puVar5 + 0x17) = *(undefined8 *)puVar3;
    puVar5 = puVar5 + 0x1a;
  } while (puStack_8 != (uint *)(*(int *)(param_1 + 8) * 0x68 + *(int *)(param_1 + 4)));
  return this;
}





//==== 007c98b0 Darray_ThrusterLayout__007c98b0 ====


/* public:  util__Darray_L_structThrusterLayout_G___Darray_L_structThrusterLayout_G_(int) */

Darray_L_struct_ThrusterLayout_G_ * 
util__Darray_struct_ThrusterLayout___Darray_struct_ThrusterLayout__o2
          (Darray_L_struct_ThrusterLayout_G_ *this,int param_1)

{
  ReferenceController *this_00;
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  
  *(undefined ***)this = &vftable_505;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(int *)(this + 0xc) = param_1;
  if ((param_1 < 0) || (0x3fffffff < param_1)) {
    *(undefined4 *)(this + 0xc) = 0;
  }
  else if (0 < param_1) {
    uVar3 = -(uint)((int)((ulonglong)(uint)param_1 * 0x68 >> 0x20) != 0) |
            (uint)((ulonglong)(uint)param_1 * 0x68);
    piVar1 = (int *)port_op_new(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
    if (piVar1 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      *piVar1 = param_1;
      piVar4 = piVar1 + 1;
      if (param_1 != 0) {
        piVar2 = piVar1 + 7;
        piVar1 = piVar4;
        do {
          *piVar1 = 0;
          piVar1 = piVar1 + 0x1a;
          piVar2[-5] = 0;
          piVar2[-4] = 0;
          piVar2[-3] = 0;
          piVar2[-2] = 0;
          piVar2[-1] = 0;
          *piVar2 = 0;
          piVar2[1] = 0;
          piVar2[2] = 0;
          piVar2[3] = 0;
          piVar2[4] = 0;
          piVar2[5] = 0;
          piVar2[6] = 0;
          piVar2[7] = 0;
          piVar2[8] = 0;
          piVar2[9] = 0;
          piVar2[10] = 0;
          piVar2[0xb] = 0;
          piVar2[0xc] = 0;
          piVar2[0xd] = 0;
          piVar2[0xe] = 0;
          piVar2[0xf] = 0;
          piVar2[0x10] = 0;
          piVar2[0x11] = 0;
          piVar2[0x12] = 0;
          piVar2[0x13] = 0;
          param_1 = param_1 + -1;
          piVar2 = piVar2 + 0x1a;
        } while (param_1 != 0);
      }
    }
    *(int **)(this + 4) = piVar4;
    param_1 = 0;
    if (0 < *(int *)(this + 0xc)) {
      iVar5 = 0;
      do {
        puVar6 = (undefined4 *)(*(int *)(this + 4) + iVar5);
        *puVar6 = 0;
        this_00 = (ReferenceController *)puVar6[1];
        puVar6[1] = 0;
        if (this_00 != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(this_00);
        }
        param_1 = param_1 + 1;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        iVar5 = iVar5 + 0x68;
        *(undefined8 *)(puVar6 + 6) = 0;
        puVar6[8] = 0;
        puVar6[9] = 0;
        puVar6[10] = 0;
        puVar6[0xb] = 0;
        *(undefined8 *)(puVar6 + 0xc) = 0;
        puVar6[0xe] = 0;
        puVar6[0xf] = 0;
        puVar6[0x10] = 0;
        puVar6[0x11] = 0;
        *(undefined8 *)(puVar6 + 0x12) = 0;
        puVar6[0x14] = 0;
        puVar6[0x15] = 0;
        puVar6[0x16] = 0;
        puVar6[0x17] = 0;
        *(undefined8 *)(puVar6 + 0x18) = 0;
      } while (param_1 < *(int *)(this + 0xc));
      return this;
    }
  }
  return this;
}





//==== 007c9a20 Darray_WorldLight__007c9a20 ====


/* public:  util__Darray_L_structWorldLight_G___Darray_L_structWorldLight_G_(class
   util__Darray_L_structWorldLight_G_ const &) */

Darray_L_struct_WorldLight_G_ * 
util__Darray_struct_WorldLight___Darray_struct_WorldLight
          (Darray_L_struct_WorldLight_G_ *this,Darray_L_struct_WorldLight_G_ *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iStack_c;
  Darray_L_struct_WorldLight_G_ *pDStack_8;
  
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &vftable_168;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  pDStack_8 = this;
  iStack_c = (**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,&iStack_c);
  uVar5 = *(uint *)(this + 0xc);
  puVar1 = (undefined4 *)
           port_op_new(-(uint)((int)((ulonglong)uVar5 * 0x68 >> 0x20) != 0) |
                          (uint)((ulonglong)uVar5 * 0x68));
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else if (uVar5 != 0) {
    puVar2 = puVar1 + 10;
    do {
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
      *(undefined1 *)(puVar2 + 0xe) = 0;
      uVar5 = uVar5 - 1;
      puVar2 = puVar2 + 0x1a;
    } while (uVar5 != 0);
  }
  *(undefined4 **)(pDStack_8 + 4) = puVar1;
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 == puVar2 + *(int *)(param_1 + 8) * 0x1a) {
    return pDStack_8;
  }
  do {
    puVar4 = puVar2 + 0x1a;
    puVar6 = puVar1;
    for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar1 = puVar1 + 0x1a;
    puVar2 = puVar4;
  } while (puVar4 != (undefined4 *)(*(int *)(param_1 + 8) * 0x68 + *(int *)(param_1 + 4)));
  return pDStack_8;
}





//==== 007c9b20 Darray_WorldLight__007c9b20 ====


/* public:  util__Darray_L_structWorldLight_G___Darray_L_structWorldLight_G_(int) */

Darray_L_struct_WorldLight_G_ * 
util__Darray_struct_WorldLight___Darray_struct_WorldLight__o2
          (Darray_L_struct_WorldLight_G_ *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 auStack_6c [24];
  undefined1 uStack_c;
  
  *(undefined ***)this = &vftable_168;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(int *)(this + 0xc) = param_1;
  if ((param_1 < 0) || (0x3fffffff < param_1)) {
    *(undefined4 *)(this + 0xc) = 0;
  }
  else if (0 < param_1) {
    pvVar1 = (void *)(uintptr_t)(port_op_new(-(uint)((int)((ulonglong)(uint)param_1 * 0x68 >> 0x20) != 0) |
                            (uint)((ulonglong)(uint)param_1 * 0x68)));
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else if (param_1 != 0) {
      puVar3 = (undefined4 *)((int)pvVar1 + 0x28);
      do {
        puVar3[-10] = 0;
        puVar3[-9] = 0;
        puVar3[-8] = 0;
        puVar3[-7] = 0;
        puVar3[-6] = 0;
        puVar3[-5] = 0;
        puVar3[-4] = 0;
        puVar3[-3] = 0;
        puVar3[-2] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        puVar3[0xb] = 0;
        puVar3[0xc] = 0;
        puVar3[0xd] = 0;
        *(undefined1 *)(puVar3 + 0xe) = 0;
        param_1 = param_1 + -1;
        puVar3 = puVar3 + 0x1a;
      } while (param_1 != 0);
    }
    *(void **)(this + 4) = pvVar1;
    iVar2 = 0;
    if (0 < *(int *)(this + 0xc)) {
      iVar5 = 0;
      do {
        uStack_c = 0;
        puVar6 = (undefined4 *)(*(int *)(this + 4) + iVar5);
        auStack_6c[0] = 0;
        auStack_6c[1] = 0;
        auStack_6c[2] = 0;
        auStack_6c[3] = 0;
        iVar2 = iVar2 + 1;
        iVar5 = iVar5 + 0x68;
        auStack_6c[4] = 0;
        auStack_6c[5] = 0;
        auStack_6c[6] = 0;
        auStack_6c[7] = 0;
        auStack_6c[8] = 0;
        auStack_6c[9] = 0;
        auStack_6c[10] = 0;
        auStack_6c[0xb] = 0;
        auStack_6c[0xc] = 0;
        auStack_6c[0xd] = 0;
        auStack_6c[0xe] = 0;
        auStack_6c[0xf] = 0;
        auStack_6c[0x10] = 0;
        auStack_6c[0x11] = 0;
        auStack_6c[0x12] = 0;
        auStack_6c[0x13] = 0;
        auStack_6c[0x14] = 0;
        auStack_6c[0x15] = 0;
        auStack_6c[0x16] = 0;
        auStack_6c[0x17] = 0;
        puVar3 = auStack_6c;
        for (iVar4 = 0x1a; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar6 = puVar6 + 1;
        }
      } while (iVar2 < *(int *)(this + 0xc));
      return this;
    }
  }
  return this;
}





//==== 007c9c30 Darray_util__SharedPtr_CollisionHit___ ====


/* public:  util__Darray_L_classutil__SharedPtr_L_structCollisionHit_G__G___Darray_L_class_util__SharedPtr_L_structCollisionHit_G__G_(class util__Darray_L_classutil__SharedPtr_L_struct_CollisionHit_G__G_ const &) */

Darray_L_class_util__SharedPtr_L_struct_CollisionHit_G___G_ * 
util__Darray_class_util__SharedPtr_struct_CollisionHit_____Darray_class_util__SharedPtr_struct_CollisionHit
          (Darray_L_class_util__SharedPtr_L_struct_CollisionHit_G___G_ *this,
          Darray_L_class_util__SharedPtr_L_struct_CollisionHit_G___G_ *param_1)

{
  ReferenceController *this_00;
  bool bVar1;
  uint *puVar2;
  ReferenceControllerRegistry *this_01;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  void *pvVar6;
  ReferenceController *pRStack_c;
  Darray_L_class_util__SharedPtr_L_struct_CollisionHit_G___G_ *pDStack_8;
  
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &vftable_107;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  pDStack_8 = this;
  pRStack_c = (ReferenceController *)(**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,(int *)&pRStack_c);
  uVar5 = *(uint *)(this + 0xc);
  uVar3 = -(uint)((int)((ulonglong)uVar5 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 8);
  puVar2 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
  if (puVar2 == (uint *)0x0) {
    puVar2 = (uint *)0x0;
  }
  else {
    *puVar2 = uVar5;
    puVar2 = puVar2 + 1;
    puVar4 = puVar2;
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4 = puVar4 + 2;
    }
  }
  *(uint **)(pDStack_8 + 4) = puVar2;
  puVar4 = *(uint **)(param_1 + 4);
  if (puVar4 != puVar4 + *(int *)(param_1 + 8) * 2) {
    do {
      pvVar6 = (void *)*puVar2;
      pRStack_c = (ReferenceController *)puVar2[1];
      *puVar2 = *puVar4;
      this_00 = (ReferenceController *)puVar4[1];
      puVar2[1] = (uint)this_00;
      if (this_00 != (ReferenceController *)0x0) {
        ReferenceController__AddStrongReference(this_00);
      }
      if ((pRStack_c != (ReferenceController *)0x0) &&
         (bVar1 = ReferenceController__ReleaseStrongReference(pRStack_c), bVar1)) {
        if (pvVar6 != (void *)0x0) {
          if (*(ReferenceController **)((int)pvVar6 + 0x8c) != (ReferenceController *)0x0) {
            ReferenceController__ReleaseWeakReference(*(ReferenceController **)((int)pvVar6 + 0x8c))
            ;
          }
          port_op_delete(pvVar6,0x1b0);
        }
        this_01 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
        ReferenceControllerRegistry__PointerWasDestroyed(this_01,pvVar6);
      }
      puVar4 = puVar4 + 2;
      puVar2 = puVar2 + 2;
    } while (puVar4 != (uint *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 8));
    return pDStack_8;
  }
  return pDStack_8;
}





//==== 007c9d70 Darray_util__SharedPtr_CollisionHit____007c9d70 ====


/* public:  util__Darray_L_classutil__SharedPtr_L_structCollisionHit_G__G___Darray_L_class_util__SharedPtr_L_structCollisionHit_G__G_(int) */

Darray_L_class_util__SharedPtr_L_struct_CollisionHit_G___G_ * 
util__Darray_class_util__SharedPtr_struct_CollisionHit_____Darray_class_util__SharedPtr_struct_CollisionHit__o2
          (Darray_L_class_util__SharedPtr_L_struct_CollisionHit_G___G_ *this,int param_1)

{
  int iVar1;
  ReferenceController *this_00;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  ReferenceControllerRegistry *this_01;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  
  *(undefined ***)this = &vftable_107;
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
        pvVar7 = *(void **)(iVar1 + iVar6 * 8);
        *(undefined4 *)(iVar1 + iVar6 * 8) = 0;
        *(undefined4 *)(iVar1 + 4 + iVar6 * 8) = 0;
        if ((this_00 != (ReferenceController *)0x0) &&
           (bVar2 = ReferenceController__ReleaseStrongReference(this_00), bVar2)) {
          if (pvVar7 != (void *)0x0) {
            if (*(ReferenceController **)((int)pvVar7 + 0x8c) != (ReferenceController *)0x0) {
              ReferenceController__ReleaseWeakReference
                        (*(ReferenceController **)((int)pvVar7 + 0x8c));
            }
            port_op_delete(pvVar7,0x1b0);
          }
          this_01 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
          ReferenceControllerRegistry__PointerWasDestroyed(this_01,pvVar7);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(this + 0xc));
    }
    return this;
  }
  return this;
}





//==== 007c9e90 Darray_util__SharedPtr_ModuleCompartment____007c9e90 ====


/* public:  util__Darray_L_classutil__SharedPtr_L_structModuleCompartment_G__G___Darray_L_class_util__SharedPtr_L_structModuleCompartment_G__G_(class util__Darray_L_classutil__SharedPtr_L_struct_ModuleCompartment_G__G_ const &) */

Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ * 
util__Darray_class_util__SharedPtr_struct_ModuleCompartment_____Darray_class_util__SharedPtr_struct_ModuleCompartment
          (Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *this,
          Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *param_1)

{
  ReferenceController *this_00;
  bool bVar1;
  uint *puVar2;
  ReferenceControllerRegistry *this_01;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  ReferenceController *pRStack_c;
  Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *pDStack_8;
  
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = (undefined **)(&vftable_112);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  pDStack_8 = this;
  pRStack_c = (ReferenceController *)(**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,(int *)&pRStack_c);
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
      puVar6 = (undefined4 *)*puVar2;
      pRStack_c = (ReferenceController *)puVar2[1];
      *puVar2 = *puVar5;
      this_00 = (ReferenceController *)puVar5[1];
      puVar2[1] = (uint)this_00;
      if (this_00 != (ReferenceController *)0x0) {
        ReferenceController__AddStrongReference(this_00);
      }
      if ((pRStack_c != (ReferenceController *)0x0) &&
         (bVar1 = ReferenceController__ReleaseStrongReference(pRStack_c), bVar1)) {
        if (puVar6 != (undefined4 *)0x0) {
          (**(code **)*puVar6)(1);
        }
        this_01 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
        ReferenceControllerRegistry__PointerWasDestroyed(this_01,puVar6);
      }
      puVar5 = puVar5 + 2;
      puVar2 = puVar2 + 2;
    } while (puVar5 != (uint *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 8));
    return pDStack_8;
  }
  return pDStack_8;
}





//==== 007c9fc0 ArmorCollisionShell ====


/* public: __thiscall ArmorCollisionShell__ArmorCollisionShell(struct ArmorCollisionShell const &)
    */

ArmorCollisionShell * __thiscall
ArmorCollisionShell__ArmorCollisionShell(ArmorCollisionShell *this,ArmorCollisionShell *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  this->SegmentID = param_1->SegmentID;
  this->LayerID = param_1->LayerID;
  uVar1 = *(undefined4 *)((int)&(param_1->Shell).Tube_km.A.X + 4);
  uVar2 = (undefined4)((param_1->Shell).Tube_km.A.Y);
  uVar3 = *(undefined4 *)((int)&(param_1->Shell).Tube_km.A.Y + 4);
  uVar2 = *(undefined4 *)&(param_1->Shell).Tube_km.A.Y;
  *(undefined4 *)((int)&(this->Shell).Tube_km.A.X + 4) = uVar1;
  *(undefined4 *)&(this->Shell).Tube_km.A.Y = uVar2;
  *(undefined4 *)((int)&(this->Shell).Tube_km.A.Y + 4) = uVar3;
  uVar1 = *(undefined4 *)((int)&(param_1->Shell).Tube_km.A.Z + 4);
  uVar2 = (undefined4)((param_1->Shell).Tube_km.B.X);
  uVar3 = *(undefined4 *)((int)&(param_1->Shell).Tube_km.B.X + 4);
  uVar2 = *(undefined4 *)&(param_1->Shell).Tube_km.A.Y;
  *(undefined4 *)((int)&(this->Shell).Tube_km.A.Z + 4) = uVar1;
  *(undefined4 *)&(this->Shell).Tube_km.A.Y = uVar2;
  *(undefined4 *)((int)&(this->Shell).Tube_km.B.X + 4) = uVar3;
  uVar1 = *(undefined4 *)((int)&(param_1->Shell).Tube_km.B.Y + 4);
  uVar2 = (undefined4)((param_1->Shell).Tube_km.B.Z);
  uVar3 = *(undefined4 *)((int)&(param_1->Shell).Tube_km.B.Z + 4);
  uVar2 = *(undefined4 *)&(param_1->Shell).Tube_km.A.Y;
  *(undefined4 *)((int)&(this->Shell).Tube_km.B.Y + 4) = uVar1;
  *(undefined4 *)&(this->Shell).Tube_km.A.Y = uVar2;
  *(undefined4 *)((int)&(this->Shell).Tube_km.B.Z + 4) = uVar3;
  uVar1 = *(undefined4 *)((int)&(param_1->Shell).TubeDirection.X + 4);
  uVar2 = (undefined4)((param_1->Shell).TubeDirection.Y);
  uVar3 = *(undefined4 *)((int)&(param_1->Shell).TubeDirection.Y + 4);
  uVar2 = *(undefined4 *)&(param_1->Shell).TubeDirection.Y;
  *(undefined4 *)((int)&(this->Shell).TubeDirection.X + 4) = uVar1;
  *(undefined4 *)&(this->Shell).TubeDirection.Y = uVar2;
  *(undefined4 *)((int)&(this->Shell).TubeDirection.Y + 4) = uVar3;
  (this->Shell).TubeDirection.Z = (param_1->Shell).TubeDirection.Z;
  uVar1 = *(undefined4 *)((int)&(param_1->Shell).TubeUp.X + 4);
  uVar2 = (undefined4)((param_1->Shell).TubeUp.Y);
  uVar3 = *(undefined4 *)((int)&(param_1->Shell).TubeUp.Y + 4);
  uVar2 = *(undefined4 *)&(param_1->Shell).TubeUp.Y;
  *(undefined4 *)((int)&(this->Shell).TubeUp.X + 4) = uVar1;
  *(undefined4 *)&(this->Shell).TubeUp.Y = uVar2;
  *(undefined4 *)((int)&(this->Shell).TubeUp.Y + 4) = uVar3;
  (this->Shell).TubeUp.Z = (param_1->Shell).TubeUp.Z;
  (this->Shell).Radii_km.X = (param_1->Shell).Radii_km.X;
  (this->Shell).Radii_km.Y = (param_1->Shell).Radii_km.Y;
  (this->Shell).Capped = (param_1->Shell).Capped;
  return this;
}





//==== 007ca610 AssocArray_WeaponModule__util__Darray_util__WeakPtr_Body_____ ====


/* public:  AssocArray_L_classWeaponModule_P_Cclassutil__Darray_L_class_util__WeakPtr_L_classBody_G__G__G___dtor(void) */

void 
util__AssocArray_class_WeaponModule__class_util__Darray_class_util__WeakPtr_class_Body________AssocArray_class_WeaponModule__class_util__Darray_class_util__WeakPtr_class_Body(AssocArray_L_class_WeaponModule_P_Cclass_util__Darray_L_class_util__WeakPtr_L_class_Body_G___G___G_
           *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *this_00;
  
  iVar3 = *(int *)this;
  if (iVar3 != 0) {
    piVar1 = (int *)(iVar3 + -4);
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      this_00 = (Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)(iVar3 + 4 + iVar2 * 0x14);
      do {
        this_00 = this_00 + -0x14;
        util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(this_00)
        ;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      iVar3 = *piVar1;
    }
    port_op_delete(piVar1,iVar3 * 0x14 + 4);
  }
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)this = 0;
  return;
}





//==== 007ca690 Darray_ThrusterLayout__007ca690 ====


/* public: virtual __thiscall util__Darray_struct_ThrusterLayout____Darray_struct_ThrusterLayout(void) */

void __thiscall
util__Darray_struct_ThrusterLayout____Darray_struct_ThrusterLayout(Darray_L_struct_ThrusterLayout_G_ *this)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(this + 4);
  *(undefined ***)this = &vftable_505;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
    if (iVar3 != 0) {
      iVar4 = iVar3 * 0x68 + 4 + iVar2;
      do {
        puVar1 = (undefined4 *)(iVar4 + -0x68);
        iVar4 = iVar4 + -0x68;
        iVar3 = iVar3 + -1;
        if ((ReferenceController *)*puVar1 != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference((ReferenceController *)*puVar1);
        }
      } while (iVar3 != 0);
      iVar3 = *(int *)(iVar2 + -4);
    }
    port_op_delete((int *)(iVar2 + -4),iVar3 * 0x68 + 4);
  }
  *(undefined ***)this = (undefined **)(&vftable);
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 007ca970 operator__007ca970 ====


/* public: class util__Darray_L_structThrusterLayout_G_ &  util__Darray_struct_ThrusterLayout___operator(class util__Darray_L_structThrusterLayout_G_ const &) */

Darray_L_struct_ThrusterLayout_G_ * 
util__Darray_struct_ThrusterLayout___operator
          (Darray_L_struct_ThrusterLayout_G_ *this,Darray_L_struct_ThrusterLayout_G_ *param_1)

{
  undefined8 *puVar1;
  ReferenceController *this_00;
  ReferenceController *this_01;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puStack_8;
  
  puStack_8 = (undefined4 *)(**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,(int *)&puStack_8);
  iVar5 = (**(code **)(*(int *)param_1 + 0xc))();
  if (iVar5 == 0) {
    (**(code **)(*(int *)this + 0x10))();
  }
  else {
    CheckSizeDestructive(this);
    puVar7 = *(undefined4 **)(this + 4);
    puStack_8 = *(undefined4 **)(param_1 + 4);
    if (puStack_8 != puStack_8 + *(int *)(param_1 + 8) * 0x1a) {
      puVar6 = puStack_8 + 2;
      do {
        this_00 = (ReferenceController *)puVar7[1];
        *puVar7 = *puStack_8;
        this_01 = (ReferenceController *)puVar6[-1];
        puVar7[1] = (undefined4)(uintptr_t)(this_01);
        if (this_01 != (ReferenceController *)0x0) {
          util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(this_01);
        }
        if (this_00 != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(this_00);
        }
        uVar2 = puVar6[1];
        uVar3 = puVar6[2];
        uVar4 = puVar6[3];
        puStack_8 = puStack_8 + 0x1a;
        puVar7[2] = *puVar6;
        puVar7[3] = uVar2;
        puVar7[4] = uVar3;
        puVar7[5] = uVar4;
        *(undefined8 *)(puVar7 + 6) = *(undefined8 *)(puVar6 + 4);
        uVar2 = puVar6[7];
        uVar3 = puVar6[8];
        uVar4 = puVar6[9];
        puVar7[8] = puVar6[6];
        puVar7[9] = uVar2;
        puVar7[10] = uVar3;
        puVar7[0xb] = uVar4;
        *(undefined8 *)(puVar7 + 0xc) = *(undefined8 *)(puVar6 + 10);
        uVar2 = puVar6[0xd];
        uVar3 = puVar6[0xe];
        uVar4 = puVar6[0xf];
        puVar7[0xe] = puVar6[0xc];
        puVar7[0xf] = uVar2;
        puVar7[0x10] = uVar3;
        puVar7[0x11] = uVar4;
        *(undefined8 *)(puVar7 + 0x12) = *(undefined8 *)(puVar6 + 0x10);
        uVar2 = puVar6[0x13];
        uVar3 = puVar6[0x14];
        uVar4 = puVar6[0x15];
        puVar7[0x14] = puVar6[0x12];
        puVar7[0x15] = uVar2;
        puVar7[0x16] = uVar3;
        puVar7[0x17] = uVar4;
        puVar1 = (undefined8 *)(puVar6 + 0x16);
        puVar6 = puVar6 + 0x1a;
        *(undefined8 *)(puVar7 + 0x18) = *puVar1;
        puVar7 = puVar7 + 0x1a;
      } while (puStack_8 != (undefined4 *)(*(int *)(param_1 + 8) * 0x68 + *(int *)(param_1 + 4)));
      return this;
    }
  }
  return this;
}





//==== 007caa70 operator__007caa70 ====


/* public: class util__Darray_L_structWorldLight_G_ &  util__Darray_struct_WorldLight___operator__o2(class util__Darray_L_structWorldLight_G_ const &) */

Darray_L_struct_WorldLight_G_ * 
util__Darray_struct_WorldLight___operator__o2
          (Darray_L_struct_WorldLight_G_ *this,Darray_L_struct_WorldLight_G_ *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puStack_8;
  
  puStack_8 = (undefined4 *)(**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,(int *)&puStack_8);
  iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
  if (iVar1 == 0) {
    (**(code **)(*(int *)this + 0x10))();
    return this;
  }
  uVar3 = *(uint *)(this + 8);
  if ((int)uVar3 < 0) {
    puStack_8 = (undefined4 *)0x0;
    SetSize(this,(int *)&puStack_8);
    uVar3 = *(uint *)(this + 8);
  }
  if (0x3fffffff < (int)uVar3) {
    puStack_8 = (undefined4 *)0x3fffffff;
    SetSize(this,(int *)&puStack_8);
    uVar3 = *(uint *)(this + 8);
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
    if (*(void **)(this + 4) != (void *)0x0) {
      port_op_delete(*(void **)(this + 4));
      uVar5 = *(uint *)(this + 0xc);
    }
    *(undefined4 *)(this + 4) = 0;
    puStack_8 = (undefined4 *)
                port_op_new(-(uint)((int)((ulonglong)uVar5 * 0x68 >> 0x20) != 0) |
                               (uint)((ulonglong)uVar5 * 0x68));
    if (puStack_8 == (undefined4 *)0x0) {
      puStack_8 = (undefined4 *)0x0;
    }
    else if (uVar5 != 0) {
      puVar2 = puStack_8 + 10;
      do {
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
        *(undefined1 *)(puVar2 + 0xe) = 0;
        uVar5 = uVar5 - 1;
        puVar2 = puVar2 + 0x1a;
      } while (uVar5 != 0);
      *(undefined4 **)(this + 4) = puStack_8;
      goto LAB_007cabbc;
    }
    *(undefined4 **)(this + 4) = puStack_8;
  }
  else {
    puStack_8 = *(undefined4 **)(this + 4);
  }
LAB_007cabbc:
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 == puVar2 + *(int *)(param_1 + 8) * 0x1a) {
    return this;
  }
  do {
    puVar4 = puVar2 + 0x1a;
    puVar6 = puStack_8;
    for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar6 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar6 = puVar6 + 1;
    }
    puStack_8 = puStack_8 + 0x1a;
    puVar2 = puVar4;
  } while (puVar4 != (undefined4 *)(*(int *)(param_1 + 8) * 0x68 + *(int *)(param_1 + 4)));
  return this;
}





//==== 007cac80 operator__007cac80 ====


/* public: struct ThrusterLayout & __thiscall ThrusterLayout__operator(struct ThrusterLayout const
   &) */

ThrusterLayout * __thiscall ThrusterLayout__operator(ThrusterLayout *this,ThrusterLayout *param_1)

{
  ReferenceController *this_00;
  ReferenceController *this_01;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  this_00 = (this->Engine).Controller;
  (this->Engine).Pointer = (param_1->Engine).Pointer;
  this_01 = (param_1->Engine).Controller;
  (this->Engine).Controller = this_01;
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_01);
  }
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  uVar1 = *(undefined4 *)((int)&(param_1->ThrustPosition_m).X + 4);
  uVar2 = *(undefined4 *)&(param_1->ThrustPosition_m).Y;
  uVar3 = *(undefined4 *)((int)&(param_1->ThrustPosition_m).Y + 4);
  *(undefined4 *)&(this->ThrustPosition_m).X = *(undefined4 *)&(param_1->ThrustPosition_m).X;
  *(undefined4 *)((int)&(this->ThrustPosition_m).X + 4) = uVar1;
  *(undefined4 *)&(this->ThrustPosition_m).Y = uVar2;
  *(undefined4 *)((int)&(this->ThrustPosition_m).Y + 4) = uVar3;
  (this->ThrustPosition_m).Z = (param_1->ThrustPosition_m).Z;
  uVar1 = *(undefined4 *)((int)&(param_1->ExhaustPosition_m).X + 4);
  uVar2 = *(undefined4 *)&(param_1->ExhaustPosition_m).Y;
  uVar3 = *(undefined4 *)((int)&(param_1->ExhaustPosition_m).Y + 4);
  *(undefined4 *)&(this->ExhaustPosition_m).X = *(undefined4 *)&(param_1->ExhaustPosition_m).X;
  *(undefined4 *)((int)&(this->ExhaustPosition_m).X + 4) = uVar1;
  *(undefined4 *)&(this->ExhaustPosition_m).Y = uVar2;
  *(undefined4 *)((int)&(this->ExhaustPosition_m).Y + 4) = uVar3;
  (this->ExhaustPosition_m).Z = (param_1->ExhaustPosition_m).Z;
  uVar1 = *(undefined4 *)((int)&(param_1->UngimballedDirection).X + 4);
  uVar2 = *(undefined4 *)&(param_1->UngimballedDirection).Y;
  uVar3 = *(undefined4 *)((int)&(param_1->UngimballedDirection).Y + 4);
  *(undefined4 *)&(this->UngimballedDirection).X = *(undefined4 *)&(param_1->UngimballedDirection).X
  ;
  *(undefined4 *)((int)&(this->UngimballedDirection).X + 4) = uVar1;
  *(undefined4 *)&(this->UngimballedDirection).Y = uVar2;
  *(undefined4 *)((int)&(this->UngimballedDirection).Y + 4) = uVar3;
  (this->UngimballedDirection).Z = (param_1->UngimballedDirection).Z;
  uVar1 = *(undefined4 *)((int)&(param_1->Direction).X + 4);
  uVar2 = *(undefined4 *)&(param_1->Direction).Y;
  uVar3 = *(undefined4 *)((int)&(param_1->Direction).Y + 4);
  *(undefined4 *)&(this->Direction).X = *(undefined4 *)&(param_1->Direction).X;
  *(undefined4 *)((int)&(this->Direction).X + 4) = uVar1;
  *(undefined4 *)&(this->Direction).Y = uVar2;
  *(undefined4 *)((int)&(this->Direction).Y + 4) = uVar3;
  (this->Direction).Z = (param_1->Direction).Z;
  return this;
}





//==== 007cbc10 vector_deleting_destructor_007cbc10 ====


/* public: virtual void * __thiscall util__Darray_L_structWorldLight_G_:: 0 vectordeletingdestructor(unsigned int) */

void * 
util__Darray_struct_WorldLight____vector_deleting_destructor
          (Darray_L_struct_WorldLight_G_ *this,uint param_1)

{
  Darray_L_struct_WorldLight_G_ *pDVar1;
  Darray_L_struct_WorldLight_G_ *pDVar2;
  Darray_L_struct_WorldLight_G_ *pDVar3;
  int iVar4;
  
  if ((param_1 & 2) != 0) {
    pDVar1 = this + -4;
    iVar4 = *(int *)pDVar1;
    pDVar3 = this + iVar4 * 0x10;
    while (iVar4 != 0) {
      pDVar2 = pDVar3 + -0x10;
      iVar4 = iVar4 + -1;
      *(undefined ***)pDVar2 = &vftable_168;
      if (*(void **)(pDVar3 + -0xc) != (void *)0x0) {
        port_op_delete(*(void **)(pDVar3 + -0xc));
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
  *(undefined ***)this = &vftable_168;
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





//==== 007cbcd0 scalar_deleting_destructor_007cbcd0 ====


/* public: virtual void * __thiscall util__Darray_L_structThrusterLayout_G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_ThrusterLayout____scalar_deleting_destructor
          (Darray_L_struct_ThrusterLayout_G_ *this,uint param_1)

{
  util__Darray_struct_ThrusterLayout____Darray_struct_ThrusterLayout(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 007cbd00 scalar_deleting_destructor_007cbd00 ====


/* public: virtual void * __thiscall util__Darray_L_classutil__Darray_L_structWorldLight_G__G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_class_util__Darray_struct_WorldLight______scalar_deleting_destructor
          (Darray_L_class_util__Darray_L_struct_WorldLight_G___G_ *this,uint param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 4);
  *(undefined ***)this = &vftable_507;
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





//==== 007cc0b0 CheckSize_007cc0b0 ====


/* private: bool  util__Darray_L_structThrusterLayout_G___CheckSize(int) */

bool __thiscall
util__Darray_struct_ThrusterLayout___CheckSize(Darray_L_struct_ThrusterLayout_G_ *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  bool bVar3;
  uint *puVar4;
  uint uVar5;
  ThrusterLayout *pTVar6;
  ThrusterLayout *pTVar7;
  ThrusterLayout *this_00;
  ReferenceController **ppRVar8;
  uint uVar9;
  ThrusterLayout *pTVar10;
  int iVar11;
  bool bVar12;
  ThrusterLayout *pTStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar5 = *(uint *)(this + 8);
  bVar12 = -1 < (int)uVar5;
  bVar3 = !bVar12;
  if (bVar3) {
    pTStack_c = (ThrusterLayout *)0x0;
    SetSize(this,(int *)&pTStack_c);
    uVar5 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar3;
  bVar3 = (int)uVar5 < 0x40000000;
  if (!bVar3) {
    pTStack_c = (ThrusterLayout *)0x3fffffff;
    SetSize(this,(int *)&pTStack_c);
    uVar5 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar9 = *(uint *)(this + 0xc);
  if ((int)uVar5 <= (int)uVar9) {
    return bVar3 && bVar12;
  }
  if (uVar9 == 0) {
    *(uint *)(this + 0xc) = uVar5;
    uVar9 = uVar5;
  }
  if ((int)uVar9 < (int)uVar5) {
    do {
      uVar9 = uVar9 * 2;
    } while ((int)uVar9 < (int)uVar5);
    *(uint *)(this + 0xc) = uVar9;
  }
  if (0x3fffffff < (int)uVar9) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar9 = 0x3fffffff;
  }
  uVar5 = -(uint)((int)((ulonglong)uVar9 * 0x68 >> 0x20) != 0) | (uint)((ulonglong)uVar9 * 0x68);
  puVar4 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar5) | uVar5 + 4);
  if (puVar4 == (uint *)0x0) {
    pTStack_c = (ThrusterLayout *)0x0;
  }
  else {
    *puVar4 = uVar9;
    pTStack_c = (ThrusterLayout *)(puVar4 + 1);
    if (uVar9 != 0) {
      puVar4 = puVar4 + 7;
      pTVar6 = pTStack_c;
      do {
        (pTVar6->Engine).Pointer = (EngineCompartment *)0x0;
        pTVar6 = pTVar6 + 1;
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
        puVar4[0xe] = 0;
        puVar4[0xf] = 0;
        puVar4[0x10] = 0;
        puVar4[0x11] = 0;
        puVar4[0x12] = 0;
        puVar4[0x13] = 0;
        uVar9 = uVar9 - 1;
        puVar4 = puVar4 + 0x1a;
      } while (uVar9 != 0);
    }
  }
  pTVar6 = *(ThrusterLayout **)(this + 4);
  if (pTVar6 != (ThrusterLayout *)0x0) {
    pTVar7 = pTStack_c + *(int *)(this + 8);
    this_00 = pTStack_c;
    pTVar10 = pTVar6;
    if (pTVar6 != pTVar6 + param_1) {
      do {
        if (this_00 == pTVar7) break;
        ThrusterLayout__operator(this_00,pTVar10);
        pTVar10 = pTVar10 + 1;
        pTVar6 = *(ThrusterLayout **)(this + 4);
        this_00 = this_00 + 1;
      } while (pTVar10 != pTVar6 + param_1);
    }
    if (pTVar6 != (ThrusterLayout *)0x0) {
      iVar11 = *(int *)((int)&pTVar6[-1].Direction.Z + 4);
      piVar1 = (int *)((int)&pTVar6[-1].Direction.Z + 4);
      if (iVar11 == 0) {
        iVar11 = 0;
      }
      else {
        ppRVar8 = &pTVar6[iVar11].Engine.Controller;
        do {
          puVar2 = (undefined4 *)(ppRVar8 + -0x1a);
          ppRVar8 = ppRVar8 + -0x1a;
          iVar11 = iVar11 + -1;
          if ((ReferenceController *)*puVar2 != (ReferenceController *)0x0) {
            ReferenceController__ReleaseWeakReference((ReferenceController *)*puVar2);
          }
        } while (iVar11 != 0);
        iVar11 = *piVar1;
      }
      port_op_delete(piVar1,iVar11 * 0x68 + 4);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(ThrusterLayout **)(this + 4) = pTStack_c;
  return bStack_5;
}





//==== 007cc290 CheckSize_007cc290 ====


/* private: bool  util__Darray_L_classutil__Darray_L_structWorldLight_G__G___CheckSize(int) */

bool 
util__Darray_class_util__Darray_struct_WorldLight_____CheckSize
          (Darray_L_class_util__Darray_L_struct_WorldLight_G___G_ *this,int param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  Darray_L_struct_WorldLight_G_ *pDVar4;
  Darray_L_struct_WorldLight_G_ *pDVar5;
  Darray_L_struct_WorldLight_G_ *this_00;
  uint uVar6;
  Darray_L_struct_WorldLight_G_ *pDVar7;
  bool bVar8;
  Darray_L_struct_WorldLight_G_ *pDStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar3 = *(uint *)(this + 8);
  bVar8 = -1 < (int)uVar3;
  bVar1 = !bVar8;
  if (bVar1) {
    pDStack_c = (Darray_L_struct_WorldLight_G_ *)0x0;
    SetSize(this,(int *)&pDStack_c);
    uVar3 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar1;
  bVar1 = (int)uVar3 < 0x40000000;
  if (!bVar1) {
    pDStack_c = (Darray_L_struct_WorldLight_G_ *)0x3fffffff;
    SetSize(this,(int *)&pDStack_c);
    uVar3 = *(uint *)(this + 8);
    bStack_5 = false;
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
  uVar3 = -(uint)((int)((ulonglong)uVar6 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 0x10);
  puVar2 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
  if (puVar2 == (uint *)0x0) {
    pDStack_c = (Darray_L_struct_WorldLight_G_ *)0x0;
  }
  else {
    *puVar2 = uVar6;
    pDStack_c = (Darray_L_struct_WorldLight_G_ *)(puVar2 + 1);
    pDVar4 = pDStack_c;
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined ***)pDVar4 = &vftable_168;
      *(undefined4 *)(pDVar4 + 4) = 0;
      *(undefined4 *)(pDVar4 + 8) = 0;
      *(undefined4 *)(pDVar4 + 0xc) = 0;
      pDVar4 = pDVar4 + 0x10;
    }
  }
  pDVar4 = *(Darray_L_struct_WorldLight_G_ **)(this + 4);
  if (pDVar4 != (Darray_L_struct_WorldLight_G_ *)0x0) {
    pDVar5 = pDStack_c + *(int *)(this + 8) * 0x10;
    this_00 = pDStack_c;
    pDVar7 = pDVar4;
    if (pDVar4 != pDVar4 + param_1 * 0x10) {
      do {
        if (this_00 == pDVar5) break;
        Darray_L_struct_WorldLight_G___op_assign(this_00,pDVar7);
        pDVar7 = pDVar7 + 0x10;
        pDVar4 = *(Darray_L_struct_WorldLight_G_ **)(this + 4);
        this_00 = this_00 + 0x10;
      } while (pDVar7 != pDVar4 + param_1 * 0x10);
    }
    if (pDVar4 != (Darray_L_struct_WorldLight_G_ *)0x0) {
      if (*(int *)(pDVar4 + -4) == 0) {
        port_op_delete(pDVar4 + -4);
      }
      else {
        (**(code **)(*(int *)pDVar4 + 0x18))(3);
      }
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(Darray_L_struct_WorldLight_G_ **)(this + 4) = pDStack_c;
  return bStack_5;
}





//==== 007cc420 CheckSizeDestructive_007cc420 ====


/* private: bool  util__Darray_L_structThrusterLayout_G___CheckSizeDestructive(void) */

bool __thiscall
util__Darray_struct_ThrusterLayout___CheckSizeDestructive(Darray_L_struct_ThrusterLayout_G_ *this)

{
  undefined4 *puVar1;
  bool bVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  int *piStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  iVar9 = *(int *)(this + 8);
  bVar10 = -1 < iVar9;
  bVar2 = !bVar10;
  if (bVar2) {
    piStack_c = (int *)0x0;
    SetSize(this,(int *)&piStack_c);
    iVar9 = *(int *)(this + 8);
  }
  bStack_5 = !bVar2;
  bVar2 = iVar9 < 0x40000000;
  if (!bVar2) {
    piStack_c = (int *)0x3fffffff;
    SetSize(this,(int *)&piStack_c);
    iVar9 = *(int *)(this + 8);
    bStack_5 = false;
  }
  iVar7 = *(int *)(this + 0xc);
  if (iVar7 < iVar9) {
    if (iVar7 == 0) {
      *(int *)(this + 0xc) = iVar9;
      iVar7 = iVar9;
    }
    if (iVar7 < iVar9) {
      do {
        iVar7 = iVar7 * 2;
      } while (iVar7 < iVar9);
      *(int *)(this + 0xc) = iVar7;
    }
    if (0x3fffffff < iVar7) {
      *(undefined4 *)(this + 0xc) = 0x3fffffff;
    }
    iVar9 = *(int *)(this + 4);
    if (iVar9 != 0) {
      iVar7 = *(int *)(iVar9 + -4);
      piStack_c = (int *)(iVar9 + -4);
      if (iVar7 != 0) {
        iVar9 = iVar7 * 0x68 + 4 + iVar9;
        do {
          puVar1 = (undefined4 *)(iVar9 + -0x68);
          iVar9 = iVar9 + -0x68;
          iVar7 = iVar7 + -1;
          if ((ReferenceController *)*puVar1 != (ReferenceController *)0x0) {
            ReferenceController__ReleaseWeakReference((ReferenceController *)*puVar1);
          }
        } while (iVar7 != 0);
        iVar7 = *piStack_c;
      }
      port_op_delete(piStack_c,iVar7 * 0x68 + 4);
    }
    uVar8 = *(uint *)(this + 0xc);
    *(undefined4 *)(this + 4) = 0;
    uVar5 = -(uint)((int)((ulonglong)uVar8 * 0x68 >> 0x20) != 0) | (uint)((ulonglong)uVar8 * 0x68);
    puVar3 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar5) | uVar5 + 4);
    if (puVar3 == (uint *)0x0) {
      puVar6 = (uint *)0x0;
    }
    else {
      *puVar3 = uVar8;
      puVar6 = puVar3 + 1;
      if (uVar8 != 0) {
        puVar4 = puVar3 + 7;
        puVar3 = puVar6;
        do {
          *puVar3 = 0;
          puVar3 = puVar3 + 0x1a;
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
          puVar4[0xe] = 0;
          puVar4[0xf] = 0;
          puVar4[0x10] = 0;
          puVar4[0x11] = 0;
          puVar4[0x12] = 0;
          puVar4[0x13] = 0;
          uVar8 = uVar8 - 1;
          puVar4 = puVar4 + 0x1a;
        } while (uVar8 != 0);
        *(uint **)(this + 4) = puVar6;
        return bStack_5;
      }
    }
    *(uint **)(this + 4) = puVar6;
    return bStack_5;
  }
  return bVar2 && bVar10;
}





//==== 007cc5a0 Clear_007cc5a0 ====


/* public: virtual void  util__Darray_L_structThrusterLayout_G___Clear(void) */

void __thiscall util__Darray_struct_ThrusterLayout___Clear(Darray_L_struct_ThrusterLayout_G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 007cc5c0 Clear_007cc5c0 ====


/* public: virtual void  util__Darray_L_classutil__Darray_L_structWorldLight_G__G___Clear(void)
    */

void 
util__Darray_class_util__Darray_struct_WorldLight_____Clear
          (Darray_L_class_util__Darray_L_struct_WorldLight_G___G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 007cfef0 GetClassID_007cfef0 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual unsigned long  SpacecraftComponent__GetClassID(void)const  */

ulong SpacecraftComponent__GetClassID(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_703d6e6d__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_703d6e6d__thread_safe_static_guard_0__);
    if ( cde_l2_703d6e6d__thread_safe_static_guard_0__ == -1) {
       cde_l2r_1c0e5faa_ID = util__GetHash("SpacecraftComponent");
      _Init_thread_footer(& cde_l2_703d6e6d__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2r_1c0e5faa_ID;
}





//==== 007cff50 GetClosestApproachCollisionTime_s ====


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: class util__Maybe_L_double_G_ 
   SpacecraftComponent__GetClosestApproachCollisionTime_s(double,struct
   util__Line3_L_double_G_,double,struct util__Line3_L_double_G_)const  */

Maybe_L_double_G_ *
SpacecraftComponent__GetClosestApproachCollisionTime_s
          (Maybe_L_double_G_ *__return_storage_ptr__,double param_1,Line3_L_double_G_ param_2,double param_3
          ,Line3_L_double_G_ param_4)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Maybe_L_double_G_ *pMVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 in_stack_00000008;
  undefined1 local_84 [16];
  double local_74;
  double local_6c;
  double local_64;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_20 = (double)(*(uint64_t *)((char *)&(param_2) + 20)) - (double)CONCAT44(param_2.A.X,(*(uint32_t*)((char*)&(param_1)+4)));
  dVar3 = (double)CONCAT44((*(uint32_t*)&(param_1)),in_stack_00000008) +
          (double)CONCAT44((*(uint32_t*)&(param_3)),param_2.B.W);
  local_38 = (double)(*(uint64_t *)((char *)&(param_4) + 20)) - (double)CONCAT44(param_4.A.X,(*(uint32_t*)((char*)&(param_3)+4)));
  local_30 = (double)(*(uint64_t *)((char *)&(param_4.B) + 4)) - (double)(*(uint64_t *)((char *)&(param_4.A) + 4));
  local_18 = (double)(*(uint64_t *)((char *)&(param_2.B) + 4)) - (double)(*(uint64_t *)((char *)&(param_2.A) + 4));
  in_stack_00000008 = SUB84(dVar3,0);
  (*(uint32_t*)&(param_1)) = (undefined4)((ulonglong)dVar3 >> 0x20);
  local_28 = (double)(*(uint64_t *)((char *)&(param_4.B) + 12)) - (double)(*(uint64_t *)((char *)&(param_4.A) + 12));
  *(uint64_t *)&local_10 = (double)(*(uint64_t *)((char *)&(param_2.B) + 12)) - (double)(*(uint64_t *)((char *)&(param_2.A) + 12));
  (*(uint64_t*)((char*)&(local_84)+8)) =
       (double)CONCAT44(param_2.A.X,(*(uint32_t*)((char*)&(param_1)+4))) -
       (double)CONCAT44(param_4.A.X,(*(uint32_t*)((char*)&(param_3)+4)));
  local_58 = (double)(*(uint64_t *)((char *)&(param_2.A) + 4)) - (double)(*(uint64_t *)((char *)&(param_4.A) + 4));
  local_50 = local_20 - local_38;
  local_6c = local_18 - local_30;
  local_48 = local_10 - local_28;
  local_74 = (double)(*(uint64_t *)((char *)&(param_2.A) + 12)) - (double)(*(uint64_t *)((char *)&(param_4.A) + 12));
  local_40 = local_6c * local_6c + local_50 * local_50 + local_48 * local_48;
  local_64 = 1e-08;
  bVar1 = util__Equals_double(&local_38,&local_20,&local_64);
  if (((bVar1) && (bVar1 = util__Equals_double(&local_30,&local_18,&local_64), bVar1)) &&
     (bVar1 = util__Equals_double(&local_28,&local_10,&local_64), bVar1)) {
    local_58 = 0.0;
  }
  else {
    local_58 = -((local_58 * local_6c + (double)(*(uint64_t*)((char*)&(local_84)+8)) * local_50 + local_74 * local_48) /
                local_40);
    if (local_58 < 0.0) goto LAB_007d02c2;
  }
  dVar5 = (((double)(*(uint64_t *)((char *)&(param_4.B) + 4)) - (double)(*(uint64_t *)((char *)&(param_4.A) + 4))) * local_58 + (double)(*(uint64_t *)((char *)&(param_4.A) + 4)))
          - (((double)(*(uint64_t *)((char *)&(param_2.B) + 4)) - (double)(*(uint64_t *)((char *)&(param_2.A) + 4))) * local_58 +
            (double)(*(uint64_t *)((char *)&(param_2.A) + 4)));
  dVar4 = (((double)(*(uint64_t *)((char *)&(param_4) + 20)) - (double)CONCAT44(param_4.A.X,(*(uint32_t*)((char*)&(param_3)+4)))) * local_58 +
          (double)CONCAT44(param_4.A.X,(*(uint32_t*)((char*)&(param_3)+4)))) -
          (((double)(*(uint64_t *)((char *)&(param_2) + 20)) - (double)CONCAT44(param_2.A.X,(*(uint32_t*)((char*)&(param_1)+4)))) * local_58 +
          (double)CONCAT44(param_2.A.X,(*(uint32_t*)((char*)&(param_1)+4))));
  dVar3 = (((double)(*(uint64_t *)((char *)&(param_4.B) + 12)) - (double)(*(uint64_t *)((char *)&(param_4.A) + 12))) * local_58 +
          (double)(*(uint64_t *)((char *)&(param_4.A) + 12))) -
          (((double)(*(uint64_t *)((char *)&(param_2.B) + 12)) - (double)(*(uint64_t *)((char *)&(param_2.A) + 12))) * local_58 +
          (double)(*(uint64_t *)((char *)&(param_2.A) + 12)));
  local_40 = dVar4 * dVar4 + dVar5 * dVar5 + dVar3 * dVar3;
  pMVar2 = util__Sqrt((Maybe_L_double_G_ *)local_84,&local_40);
  if (pMVar2->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar3 = (double)CONCAT44((*(uint32_t*)&(param_1)),in_stack_00000008) - pMVar2->Data;
  in_stack_00000008 = SUB84(dVar3,0);
  (*(uint32_t*)&(param_1)) = (undefined4)((ulonglong)dVar3 >> 0x20);
  if ((0.0 <= dVar3) && (local_40 = CraftInstance__GetMaxAcceleration_m__s2(), 0.0 < local_40)) {
    dVar3 = (double)CONCAT44((*(uint32_t*)&(param_1)),in_stack_00000008) * 1000.0;
    local_40 = (dVar3 + dVar3) / local_40;
    pMVar2 = util__Sqrt((Maybe_L_double_G_ *)local_84,&local_40);
    if (pMVar2->IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if (pMVar2->Data * 5.0 < local_58) {
      __return_storage_ptr__->IsValidData = false;
      __return_storage_ptr__->Data = 0.0;
      return __return_storage_ptr__;
    }
    __return_storage_ptr__->Data = local_58;
    __return_storage_ptr__->IsValidData = true;
    return __return_storage_ptr__;
  }
LAB_007d02c2:
  __return_storage_ptr__->Data = 0.0;
  __return_storage_ptr__->IsValidData = false;
  return __return_storage_ptr__;
}





//==== 007d0f20 GetIconOfShips ====


/* public: static void (__cdecl*__cdecl SpacecraftComponent__GetIconOfShips(class util__Darray_L_class_util__WeakPtr_L_classSpacecraftComponent_G__G_ const &,bool))(void) */

_func_void * __cdecl
SpacecraftComponent__GetIconOfShips
          (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *param_1,bool param_2)

{
  bool bVar1;
  code *pcVar2;
  
  bVar1 = IsStationsOnlyFleet(param_1);
  if (!param_2) {
    if (bVar1) {
      return Icons__ShipSquare;
    }
    bVar1 = IsCapitalShipFleet(param_1);
    if (bVar1) {
      return Icons__ShipDiamond;
    }
    bVar1 = IsDroneFleet(param_1);
    if (bVar1) {
      return Icons__ShipTriangle;
    }
    bVar1 = IsMissileFleet(param_1);
    pcVar2 = (long long int (*)())(Icons__ShipSmallSquare);
    if (bVar1) {
      pcVar2 = (long long int (*)())(Icons__ShipCircle);
    }
    return (_func_void *)(pcVar2);
  }
  if (bVar1) {
    return Icons__RawShipSquare;
  }
  bVar1 = IsCapitalShipFleet(param_1);
  if (bVar1) {
    return Icons__RawShipDiamond;
  }
  bVar1 = IsDroneFleet(param_1);
  if (bVar1) {
    return Icons__RawShipTriangle;
  }
  bVar1 = IsMissileFleet(param_1);
  pcVar2 = Icons__RawShipSmallSquare;
  if (bVar1) {
    pcVar2 = (long long int (*)())(Icons__RawShipCircle);
  }
  return (_func_void *)(pcVar2);
}





//==== 007d10c0 GetMaxAcceleration_km__s2 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual double  SpacecraftComponent__GetMaxAcceleration_km__s2(void)const  */

double SpacecraftComponent__GetMaxAcceleration_km__s2(void)

{
  int iVar1;
  double dVar2;
  
  dVar2 = CraftInstance__GetMaxAcceleration_m__s2();
  iVar1 = CraftInstance__GetCrewCount();
  if ((0 < iVar1) && (49.033249999999995 <= dVar2)) {
    return 0.049033249999999994;
  }
  return dVar2 / 1000.0;
}





//==== 007d2a50 GetShipGroupQuickInfo ====


/* public: static class util__Str_L_char_G_ __cdecl SpacecraftComponent__GetShipGroupQuickInfo(class
   util__Darray_L_classutil__WeakPtr_L_classSpacecraftComponent_G__G_ const &) */

Str_L_char_G_ * __cdecl
SpacecraftComponent__GetShipGroupQuickInfo
          (Str_L_char_G_ *__return_storage_ptr__,
          Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *param_1)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  int iVar2;
  int *piVar3;
  Str_L_char_G_ *pSVar4;
  LocStr *pLVar5;
  Str_L_char_G_ *pSVar6;
  undefined4 uVar7;
  Str_L_char_G_ *pSVar8;
  Str_L_char_G_ *pSVar9;
  char *pcVar10;
  Str_L_char_G_ *pSVar11;
  LocStr aLStack_88 [24];
  LocStr aLStack_70 [24];
  Str_L_char_G_ SStack_58;
  Str_L_char_G_ SStack_4c;
  Str_L_char_G_ SStack_40;
  Str_L_char_G_ SStack_34;
  int iStack_28;
  Str_L_char_G_ SStack_24;
  Str_L_char_G_ SStack_18;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar2 = (**(code **)(*(int *)param_1 + 0xc))();
  if (iVar2 == 0) {
    __return_storage_ptr__->Data = (char *)0x0;
    __return_storage_ptr__->Capacity = 0;
    __return_storage_ptr__->Length = 0;
    __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
    return __return_storage_ptr__;
  }
  iVar2 = (**(code **)(*(int *)param_1 + 0xc))();
  if (iVar2 == 1) {
    piVar3 = (int *)(**(code **)(*(int *)param_1 + 0x1c))();
    if (((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) &&
       (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]),
       !bVar1)) {
      *piVar3 = 0;
    }
    (**(code **)(**(int **)(*(int *)(*piVar3 + 0x118) + 8) + 0x48))(__return_storage_ptr__);
    __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
    return __return_storage_ptr__;
  }
  iStack_c = 0;
  iVar2 = (**(code **)(*(int *)param_1 + 0xc))();
  if (iStack_c < iVar2) {
    do {
      piVar3 = (int *)(*(code *)**(undefined4 **)param_1)(&iStack_c);
      if (((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]),
         !bVar1)) {
        *piVar3 = 0;
      }
      iStack_28 = *(int *)(*(int *)(*piVar3 + 0x118) + 8);
      piVar3 = (int *)(**(code **)(*(int *)param_1 + 0x1c))();
      if (((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]),
         !bVar1)) {
        *piVar3 = 0;
      }
      if (iStack_28 != *(int *)(*(int *)(*piVar3 + 0x118) + 8)) {
        util__Str_char___Str_char(&SStack_58,"MixedShips");
        util__Str_char___Str_char(&SStack_24,"Space");
        SStack_18.Data = (char *)0x0;
        SStack_18.Capacity = 0;
        SStack_18.Length = 0;
        SStack_34.Data = (char *)0x0;
        SStack_34.Capacity = 0;
        SStack_34.Length = 0;
        pLVar5 = (LocStr *)util__LocStr__LocStr(aLStack_70,&SStack_58,&SStack_18);
        pSVar4 = util__LocStr__operator__o3(pLVar5);
        pSVar11 = __return_storage_ptr__;
        pLVar5 = (LocStr *)util__LocStr__LocStr(aLStack_88,&SStack_24,&SStack_34);
        pSVar6 = util__LocStr__operator__o3(pLVar5);
        pSVar9 = &SStack_40;
        uVar7 = (**(code **)(*(int *)param_1 + 0xc))();
        pSVar8 = util__Printf(&SStack_4c,(wchar_t*)("%ix"),uVar7);
        pSVar9 = util__Str_char___operator(pSVar8,pSVar9,pSVar6);
        util__Str_char___operator(pSVar9,pSVar11,pSVar4);
        if (SStack_40.Data != (char *)0x0) {
          port_op_delete(SStack_40.Data);
          SStack_40.Data = (char *)0x0;
        }
        if (SStack_4c.Data != (char *)0x0) {
          port_op_delete(SStack_4c.Data);
          SStack_4c.Data = (char *)0x0;
        }
        util__LocStr___LocStr(aLStack_88);
        if (SStack_34.Data != (char *)0x0) {
          port_op_delete(SStack_34.Data);
          SStack_34.Data = (char *)0x0;
        }
        util__LocStr___LocStr(aLStack_70);
        if (SStack_18.Data != (char *)0x0) {
          port_op_delete(SStack_18.Data);
          SStack_18.Data = (char *)0x0;
        }
        pcVar10 = SStack_58.Data;
        if (SStack_24.Data != (char *)0x0) {
          port_op_delete(SStack_24.Data);
          SStack_24.Data = (char *)0x0;
          pcVar10 = SStack_58.Data;
        }
        goto LAB_007d2c63;
      }
      iStack_c = iStack_c + 1;
      iVar2 = (**(code **)(*(int *)param_1 + 0xc))();
    } while (iStack_c < iVar2);
  }
  util__Str_char___Str_char(&SStack_24,"Space");
  piVar3 = (int *)(**(code **)(*(int *)param_1 + 0x1c))();
  if (((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) &&
     (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]), !bVar1)
     ) {
    *piVar3 = 0;
  }
  SStack_18.Data = (char *)0x0;
  SStack_18.Capacity = 0;
  SStack_18.Length = 0;
  pSVar4 = (Str_L_char_G_ *)(**(code **)(**(int **)(*(int *)(*piVar3 + 0x118) + 8) + 0x48))(&SStack_40);
  pSVar11 = __return_storage_ptr__;
  pLVar5 = (LocStr *)util__LocStr__LocStr(aLStack_70,&SStack_24,&SStack_18);
  pSVar6 = util__LocStr__operator__o3(pLVar5);
  pSVar9 = &SStack_58;
  uVar7 = (**(code **)(*(int *)param_1 + 0xc))();
  pSVar8 = util__Printf(&SStack_4c,(wchar_t*)("%ix"),uVar7);
  pSVar9 = util__Str_char___operator(pSVar8,pSVar9,pSVar6);
  util__Str_char___operator(pSVar9,pSVar11,pSVar4);
  if (SStack_58.Data != (char *)0x0) {
    port_op_delete(SStack_58.Data);
    SStack_58.Data = (char *)0x0;
  }
  if (SStack_4c.Data != (char *)0x0) {
    port_op_delete(SStack_4c.Data);
    SStack_4c.Data = (char *)0x0;
  }
  util__LocStr___LocStr(aLStack_70);
  if (SStack_18.Data != (char *)0x0) {
    port_op_delete(SStack_18.Data);
    SStack_18.Data = (char *)0x0;
  }
  pcVar10 = SStack_24.Data;
  if (SStack_40.Data != (char *)0x0) {
    port_op_delete(SStack_40.Data);
    SStack_40.Data = (char *)0x0;
    pcVar10 = SStack_24.Data;
  }
LAB_007d2c63:
  if (pcVar10 != (char *)0x0) {
    port_op_delete(pcVar10);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}





//==== 007d4840 IsCapitalShipFleet ====


/* public: static bool __cdecl SpacecraftComponent__IsCapitalShipFleet(class util__Darray_L_class_util__WeakPtr_L_classSpacecraftComponent_G__G_ const &) */

bool __cdecl
SpacecraftComponent__IsCapitalShipFleet
          (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *param_1)

{
  undefined8 stack0xfffffffc;
  CraftBlueprint *this;
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar1 = IsStationsOnlyFleet(param_1);
  if (!bVar1) {
    iStack_c = 0;
    iVar3 = (**(code **)(*(int *)param_1 + 0xc))();
    if (iStack_c < iVar3) {
      do {
        piVar4 = (int *)(*(code *)**(undefined4 **)param_1)(&iStack_c);
        if (((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]),
           !bVar1)) {
          *piVar4 = 0;
        }
        this = *(CraftBlueprint **)(*(int *)(*piVar4 + 0x118) + 8);
        CraftBlueprint__IsACapitalShip_Memoize(this);
        if (*(char *)((int)&(this->GetMainEngineModulePlacers_MemoizedValue).Data.Data + 1) == '\0')
        {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        if ((char)((this->GetMainEngineModulePlacers_MemoizedValue).Data.Data != '\0')){
          uVar2 = 1;
          __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
          return (bool)uVar2;
        }
        iStack_c = iStack_c + 1;
        iVar3 = (**(code **)(*(int *)param_1 + 0xc))();
      } while (iStack_c < iVar3);
    }
  }
  uVar2 = 0;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}





//==== 007d4950 IsDroneFleet ====


/* public: static bool __cdecl SpacecraftComponent__IsDroneFleet(class util__Darray_L_class_util__WeakPtr_L_classSpacecraftComponent_G__G_ const &) */

bool __cdecl
SpacecraftComponent__IsDroneFleet(Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *param_1)

{
  undefined8 stack0xfffffffc;
  CraftBlueprint *this;
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar1 = IsCapitalShipFleet(param_1);
  if ((!bVar1) && (bVar1 = IsStationsOnlyFleet(param_1), !bVar1)) {
    iStack_c = 0;
    iVar3 = (**(code **)(*(int *)param_1 + 0xc))();
    if (iStack_c < iVar3) {
      do {
        piVar4 = (int *)(*(code *)**(undefined4 **)param_1)(&iStack_c);
        if (((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]),
           !bVar1)) {
          *piVar4 = 0;
        }
        this = *(CraftBlueprint **)(*(int *)(*piVar4 + 0x118) + 8);
        CraftBlueprint__IsADrone_Memoize(this);
        if (*(char *)((int)&(this->GetMainEngineModulePlacers_MemoizedValue).Data.Capacity + 1) ==
            '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        if ((char)(this->GetMainEngineModulePlacers_MemoizedValue).Data.Capacity != '\0') {
          uVar2 = 1;
          __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
          return (bool)uVar2;
        }
        iStack_c = iStack_c + 1;
        iVar3 = (**(code **)(*(int *)param_1 + 0xc))();
      } while (iStack_c < iVar3);
    }
  }
  uVar2 = 0;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}





//==== 007d4a80 IsMissileFleet ====


/* public: static bool __cdecl SpacecraftComponent__IsMissileFleet(class util__Darray_L_class_util__WeakPtr_L_classSpacecraftComponent_G__G_ const &) */

bool __cdecl
SpacecraftComponent__IsMissileFleet
          (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *param_1)

{
  undefined8 stack0xfffffffc;
  CraftBlueprint *this;
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar1 = IsCapitalShipFleet(param_1);
  if (((!bVar1) && (bVar1 = IsStationsOnlyFleet(param_1), !bVar1)) &&
     (bVar1 = IsDroneFleet(param_1), !bVar1)) {
    iStack_c = 0;
    iVar3 = (**(code **)(*(int *)param_1 + 0xc))();
    if (iStack_c < iVar3) {
      do {
        piVar4 = (int *)(*(code *)**(undefined4 **)param_1)(&iStack_c);
        if (((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]),
           !bVar1)) {
          *piVar4 = 0;
        }
        this = *(CraftBlueprint **)(*(int *)(*piVar4 + 0x118) + 8);
        CraftBlueprint__IsAMissile_Memoize(this);
        if (*(char *)((int)&(this->GetMainEngineModulePlacers_MemoizedValue).Data.Size + 3) == '\0')
        {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        if (*(char *)((int)&(this->GetMainEngineModulePlacers_MemoizedValue).Data.Size + 2) != '\0')
        {
          uVar2 = 1;
          __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
          return (bool)uVar2;
        }
        iStack_c = iStack_c + 1;
        iVar3 = (**(code **)(*(int *)param_1 + 0xc))();
      } while (iStack_c < iVar3);
    }
  }
  uVar2 = 0;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}





//==== 007d4bc0 IsStationsOnlyFleet ====


/* public: static bool __cdecl SpacecraftComponent__IsStationsOnlyFleet(class util__Darray_L_class_util__WeakPtr_L_classSpacecraftComponent_G__G_ const &) */

bool __cdecl
SpacecraftComponent__IsStationsOnlyFleet
          (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *param_1)

{
  undefined8 stack0xfffffffc;
  CraftBlueprint *this;
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iStack_c = 0;
  iVar3 = (**(code **)(*(int *)param_1 + 0xc))();
  if (iStack_c < iVar3) {
    do {
      piVar4 = (int *)(*(code *)**(undefined4 **)param_1)(&iStack_c);
      if (((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]),
         !bVar1)) {
        *piVar4 = 0;
      }
      this = *(CraftBlueprint **)(*(int *)(*piVar4 + 0x118) + 8);
      CraftBlueprint__IsAStation_Memoize(this);
      if (*(char *)((int)&(this->GetMainEngineModulePlacers_MemoizedValue).Data._pad_0x0_0 + 3) ==
          '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if (*(char *)((int)&(this->GetMainEngineModulePlacers_MemoizedValue).Data._pad_0x0_0 + 2) !=
          '\0') {
        uVar2 = 1;
        __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
        return (bool)uVar2;
      }
      iStack_c = iStack_c + 1;
      iVar3 = (**(code **)(*(int *)param_1 + 0xc))();
    } while (iStack_c < iVar3);
  }
  uVar2 = 0;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}





//==== 007d8d80 SetAll_007d8d80 ====


/* public: virtual void  util__Darray_L_structThrusterLayout_G___SetAll(struct ThrusterLayout
   const &) */

void 
util__Darray_struct_ThrusterLayout___SetAll
          (Darray_L_struct_ThrusterLayout_G_ *this,ThrusterLayout *param_1)

{
  ReferenceController *this_00;
  ReferenceController *this_01;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(this + 4);
  if (puVar4 != puVar4 + *(int *)(this + 8) * 0x1a) {
    do {
      this_00 = (ReferenceController *)puVar4[1];
      *puVar4 = (undefined4)(uintptr_t)((param_1->Engine).Pointer);
      this_01 = (param_1->Engine).Controller;
      puVar4[1] = (undefined4)(uintptr_t)(this_01);
      if (this_01 != (ReferenceController *)0x0) {
        util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(this_01);
      }
      if (this_00 != (ReferenceController *)0x0) {
        ReferenceController__ReleaseWeakReference(this_00);
      }
      uVar1 = *(undefined4 *)((int)&(param_1->ThrustPosition_m).X + 4);
      uVar2 = *(undefined4 *)&(param_1->ThrustPosition_m).Y;
      uVar3 = *(undefined4 *)((int)&(param_1->ThrustPosition_m).Y + 4);
      puVar4[2] = *(undefined4 *)&(param_1->ThrustPosition_m).X;
      puVar4[3] = uVar1;
      puVar4[4] = uVar2;
      puVar4[5] = uVar3;
      *(double *)(puVar4 + 6) = (param_1->ThrustPosition_m).Z;
      uVar1 = *(undefined4 *)((int)&(param_1->ExhaustPosition_m).X + 4);
      uVar2 = *(undefined4 *)&(param_1->ExhaustPosition_m).Y;
      uVar3 = *(undefined4 *)((int)&(param_1->ExhaustPosition_m).Y + 4);
      puVar4[8] = *(undefined4 *)&(param_1->ExhaustPosition_m).X;
      puVar4[9] = uVar1;
      puVar4[10] = uVar2;
      puVar4[0xb] = uVar3;
      *(double *)(puVar4 + 0xc) = (param_1->ExhaustPosition_m).Z;
      uVar1 = *(undefined4 *)((int)&(param_1->UngimballedDirection).X + 4);
      uVar2 = *(undefined4 *)&(param_1->UngimballedDirection).Y;
      uVar3 = *(undefined4 *)((int)&(param_1->UngimballedDirection).Y + 4);
      puVar4[0xe] = *(undefined4 *)&(param_1->UngimballedDirection).X;
      puVar4[0xf] = uVar1;
      puVar4[0x10] = uVar2;
      puVar4[0x11] = uVar3;
      *(double *)(puVar4 + 0x12) = (param_1->UngimballedDirection).Z;
      uVar1 = *(undefined4 *)((int)&(param_1->Direction).X + 4);
      uVar2 = *(undefined4 *)&(param_1->Direction).Y;
      uVar3 = *(undefined4 *)((int)&(param_1->Direction).Y + 4);
      puVar4[0x14] = *(undefined4 *)&(param_1->Direction).X;
      puVar4[0x15] = uVar1;
      puVar4[0x16] = uVar2;
      puVar4[0x17] = uVar3;
      *(double *)(puVar4 + 0x18) = (param_1->Direction).Z;
      puVar4 = puVar4 + 0x1a;
    } while (puVar4 != (undefined4 *)(*(int *)(this + 8) * 0x68 + *(int *)(this + 4)));
  }
  return;
}





//==== 007d8e30 SetAll_007d8e30 ====


/* public: virtual void  util__Darray_L_classutil__Darray_L_structWorldLight_G___G___SetAll(class util__Darray_L_structWorldLight_G_ const &) */

void 
util__Darray_class_util__Darray_struct_WorldLight_____SetAll
          (Darray_L_class_util__Darray_L_struct_WorldLight_G___G_ *this,Darray_L_struct_WorldLight_G_ *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  Darray_L_struct_WorldLight_G_ *this_00;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puStack_8;
  
  this_00 = *(Darray_L_struct_WorldLight_G_ **)(this + 4);
  if (this_00 != this_00 + *(int *)(this + 8) * 0x10) {
    do {
      puStack_8 = (undefined4 *)(**(code **)(*(int *)param_1 + 0xc))();
      Darray_L_struct_WorldLight_G___SetSize(this_00,(int *)&puStack_8);
      iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
      if (iVar1 == 0) {
        (**(code **)(*(int *)this_00 + 0x10))();
      }
      else {
        uVar2 = *(uint *)(this_00 + 8);
        if ((int)uVar2 < 0) {
          puStack_8 = (undefined4 *)0x0;
          Darray_L_struct_WorldLight_G___SetSize(this_00,(int *)&puStack_8);
          uVar2 = *(uint *)(this_00 + 8);
        }
        if (0x3fffffff < (int)uVar2) {
          puStack_8 = (undefined4 *)0x3fffffff;
          Darray_L_struct_WorldLight_G___SetSize(this_00,(int *)&puStack_8);
          uVar2 = *(uint *)(this_00 + 8);
        }
        uVar6 = *(uint *)(this_00 + 0xc);
        if ((int)uVar6 < (int)uVar2) {
          if (uVar6 == 0) {
            *(uint *)(this_00 + 0xc) = uVar2;
            uVar6 = uVar2;
          }
          if ((int)uVar6 < (int)uVar2) {
            do {
              uVar6 = uVar6 * 2;
            } while ((int)uVar6 < (int)uVar2);
            *(uint *)(this_00 + 0xc) = uVar6;
          }
          if (0x3fffffff < (int)uVar6) {
            *(undefined4 *)(this_00 + 0xc) = 0x3fffffff;
            uVar6 = 0x3fffffff;
          }
          if (*(void **)(this_00 + 4) != (void *)0x0) {
            port_op_delete(*(void **)(this_00 + 4));
            uVar6 = *(uint *)(this_00 + 0xc);
          }
          *(undefined4 *)(this_00 + 4) = 0;
          puStack_8 = (undefined4 *)
                      port_op_new(-(uint)((int)((ulonglong)uVar6 * 0x68 >> 0x20) != 0) |
                                     (uint)((ulonglong)uVar6 * 0x68));
          if (puStack_8 == (undefined4 *)0x0) {
            puStack_8 = (undefined4 *)0x0;
          }
          else if (uVar6 != 0) {
            puVar3 = puStack_8 + 10;
            do {
              puVar3[-10] = 0;
              puVar3[-9] = 0;
              puVar3[-8] = 0;
              puVar3[-7] = 0;
              puVar3[-6] = 0;
              puVar3[-5] = 0;
              puVar3[-4] = 0;
              puVar3[-3] = 0;
              puVar3[-2] = 0;
              puVar3[-1] = 0;
              *puVar3 = 0;
              puVar3[1] = 0;
              puVar3[2] = 0;
              puVar3[3] = 0;
              puVar3[4] = 0;
              puVar3[5] = 0;
              puVar3[6] = 0;
              puVar3[7] = 0;
              puVar3[8] = 0;
              puVar3[9] = 0;
              puVar3[10] = 0;
              puVar3[0xb] = 0;
              puVar3[0xc] = 0;
              puVar3[0xd] = 0;
              *(undefined1 *)(puVar3 + 0xe) = 0;
              uVar6 = uVar6 - 1;
              puVar3 = puVar3 + 0x1a;
            } while (uVar6 != 0);
            *(undefined4 **)(this_00 + 4) = puStack_8;
            goto LAB_007d8f8c;
          }
          *(undefined4 **)(this_00 + 4) = puStack_8;
        }
        else {
          puStack_8 = *(undefined4 **)(this_00 + 4);
        }
LAB_007d8f8c:
        puVar3 = *(undefined4 **)(param_1 + 4);
        puVar5 = puStack_8;
        if (puVar3 != puVar3 + *(int *)(param_1 + 8) * 0x1a) {
          do {
            puVar4 = puVar3 + 0x1a;
            puVar7 = puVar5;
            for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar7 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar7 = puVar7 + 1;
            }
            puVar3 = puVar4;
            puVar5 = puVar5 + 0x1a;
          } while (puVar4 != (undefined4 *)(*(int *)(param_1 + 8) * 0x68 + *(int *)(param_1 + 4)));
        }
      }
      this_00 = this_00 + 0x10;
    } while (this_00 !=
             (Darray_L_struct_WorldLight_G_ *)(*(int *)(this + 8) * 0x10 + *(int *)(this + 4)));
  }
  return;
}





//==== 007d8ff0 SetSize_007d8ff0 ====


/* private: void  util__Darray_L_structThrusterLayout_G___SetSize(int const &) */

void __thiscall
util__Darray_struct_ThrusterLayout___SetSize(Darray_L_struct_ThrusterLayout_G_ *this,int *param_1)

{
  ReferenceController *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
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
     (puVar4 = (undefined4 *)(iVar3 * 0x68 + iVar2),
     puVar4 != (undefined4 *)(*(int *)(this + 8) * 0x68 + iVar2))) {
    do {
      this_00 = (ReferenceController *)puVar4[1];
      *puVar4 = 0;
      puVar4[1] = 0;
      if (this_00 != (ReferenceController *)0x0) {
        ReferenceController__ReleaseWeakReference(this_00);
      }
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      *(undefined8 *)(puVar4 + 6) = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      *(undefined8 *)(puVar4 + 0xc) = 0;
      puVar4[0xe] = 0;
      puVar4[0xf] = 0;
      puVar4[0x10] = 0;
      puVar4[0x11] = 0;
      *(undefined8 *)(puVar4 + 0x12) = 0;
      puVar4[0x14] = 0;
      puVar4[0x15] = 0;
      puVar4[0x16] = 0;
      puVar4[0x17] = 0;
      *(undefined8 *)(puVar4 + 0x18) = 0;
      puVar4 = puVar4 + 0x1a;
    } while (puVar4 != (undefined4 *)(*(int *)(this + 8) * 0x68 + *(int *)(this + 4)));
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 007d9110 SetSize_007d9110 ====


/* private: void  util__Darray_L_classutil__Darray_L_structWorldLight_G__G___SetSize(int const
   &) */

void 
util__Darray_class_util__Darray_struct_WorldLight_____SetSize
          (Darray_L_class_util__Darray_L_struct_WorldLight_G___G_ *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  Darray_L_struct_WorldLight_G_ *this_00;
  undefined **ppuStack_14;
  void *pvStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
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
     (this_00 = (Darray_L_struct_WorldLight_G_ *)(iVar3 * 0x10 + iVar2),
     this_00 != (Darray_L_struct_WorldLight_G_ *)(*(int *)(this + 8) * 0x10 + iVar2))) {
    do {
      ppuStack_14 = &vftable_168;
      pvStack_10 = (void *)0x0;
      uStack_c = 0;
      uStack_8 = 0;
      Darray_L_struct_WorldLight_G___op_assign(this_00,(Darray_L_struct_WorldLight_G_ *)&ppuStack_14);
      ppuStack_14 = &vftable_168;
      if (pvStack_10 != (void *)0x0) {
        port_op_delete(pvStack_10);
      }
      this_00 = this_00 + 0x10;
    } while (this_00 !=
             (Darray_L_struct_WorldLight_G_ *)(*(int *)(this + 8) * 0x10 + *(int *)(this + 4)));
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 007d9200 SwapRemoveAt_007d9200 ====


/* public: bool  util__Darray_L_classutil__SharedPtr_L_structModuleCompartment_G___G___SwapRemoveAt(int const &) */

bool 
util__Darray_class_util__SharedPtr_struct_ModuleCompartment_____SwapRemoveAt
          (Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *this,int *param_1)

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
            (**(code **)*param_1)(1);
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
            (**(code **)*param_1)(1);
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
            (**(code **)*piVar8)(1);
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





//==== 007def10 AssocArray_WeaponModule__util__Darray_util__WeakPtr_Body______007def10 ====


/* public:  util__AssocArray_L_classWeaponModule_P_Cclassutil__Darray_L_class_util__WeakPtr_L_classBody_G__G__G___AssocArray_L_classWeaponModule_P_Cclassutil__Darray_L_class_util__WeakPtr_L_classBody_G__G__G_(int const &) */

AssocArray_L_class_WeaponModule_P_Cclass_util__Darray_L_class_util__WeakPtr_L_class_Body_G___G___G_ * 
util__AssocArray_class_WeaponModule__class_util__Darray_class_util__WeakPtr_class_Body_______AssocArray_class_WeaponModule__class_util__Darray_class_util__WeakPtr_class_Body
          (AssocArray_L_class_WeaponModule_P_Cclass_util__Darray_L_class_util__WeakPtr_L_class_Body_G___G___G_
           *this,int *param_1)

{
  uint *puVar1;
  uint *puVar2;
  void *pvVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  uVar6 = *param_1;
  *(uint *)(this + 8) = uVar6;
  if (((int)uVar6 < 0) || (0x3fffffff < (int)uVar6)) {
    *(undefined4 *)(this + 8) = 0;
  }
  else if (0 < (int)uVar6) {
    uVar4 = -(uint)((int)((ulonglong)uVar6 * 0x14 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 0x14);
    puVar1 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
    if (puVar1 == (uint *)0x0) {
      puVar5 = (uint *)0x0;
    }
    else {
      *puVar1 = uVar6;
      puVar5 = puVar1 + 1;
      if (uVar6 != 0) {
        puVar2 = puVar1 + 4;
        puVar1 = puVar5;
        do {
          *puVar1 = 0;
          puVar1 = puVar1 + 5;
          puVar2[-2] = (uint)&vftable_74;
          puVar2[-1] = 0;
          *puVar2 = 0;
          puVar2[1] = 0;
          uVar6 = uVar6 - 1;
          puVar2 = puVar2 + 5;
        } while (uVar6 != 0);
      }
    }
    uVar6 = *(uint *)(this + 8);
    *(uint **)this = puVar5;
    pvVar3 = (void *)(uintptr_t)(port_op_new(uVar6));
    if (pvVar3 == (void *)0x0) {
      *(undefined4 *)(this + 4) = 0;
      return this;
    }
    memset(pvVar3,0,uVar6);
    *(void **)(this + 4) = pvVar3;
    return this;
  }
  return this;
}





//==== 007df010 AssocArray_WeaponModule__util__Darray_util__WeakPtr_Body______007df010 ====


/* public:  util__AssocArray_L_classWeaponModule_P_Cclassutil__Darray_L_class_util__WeakPtr_L_classBody_G__G__G___AssocArray_L_classWeaponModule_P_Cclassutil__Darray_L_class_util__WeakPtr_L_classBody_G__G__G_(class util__AssocArray_L_classWeaponModule_P_Cclass_util__Darray_L_classutil__WeakPtr_L_classBody_G__G__G_ const &) */

AssocArray_L_class_WeaponModule_P_Cclass_util__Darray_L_class_util__WeakPtr_L_class_Body_G___G___G_ * 
util__AssocArray_class_WeaponModule__class_util__Darray_class_util__WeakPtr_class_Body_______AssocArray_class_WeaponModule__class_util__Darray_class_util__WeakPtr_class_Body__o2
          (AssocArray_L_class_WeaponModule_P_Cclass_util__Darray_L_class_util__WeakPtr_L_class_Body_G___G___G_
           *this,AssocArray_L_class_WeaponModule_P_Cclass_util__Darray_L_class_util__WeakPtr_L_class_Body_G___G___G_
                 *param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  void *pvVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  uVar9 = *(uint *)(param_1 + 8);
  *(uint *)(this + 8) = uVar9;
  if (((int)uVar9 < 0) || (0x3fffffff < (int)uVar9)) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\assocarray.inl",0x22,
              "Capacity >= 0 && Capacity <= ASSOC_ARRAY_MAX_SIZE",(char *)0x0);
    DebugBreak();
    uVar9 = *(uint *)(this + 8);
  }
  if ((int)uVar9 < 1) {
    return this;
  }
  uVar6 = -(uint)((int)((ulonglong)uVar9 * 0x14 >> 0x20) != 0) | (uint)((ulonglong)uVar9 * 0x14);
  puVar3 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar6) | uVar6 + 4);
  if (puVar3 == (uint *)0x0) {
    puVar7 = (uint *)0x0;
  }
  else {
    *puVar3 = uVar9;
    puVar7 = puVar3 + 1;
    if (uVar9 != 0) {
      puVar4 = puVar3 + 4;
      puVar3 = puVar7;
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 5;
        puVar4[-2] = (uint)&vftable_74;
        puVar4[-1] = 0;
        *puVar4 = 0;
        puVar4[1] = 0;
        uVar9 = uVar9 - 1;
        puVar4 = puVar4 + 5;
      } while (uVar9 != 0);
    }
  }
  uVar9 = *(uint *)(this + 8);
  *(uint **)this = puVar7;
  pvVar5 = (void *)(uintptr_t)(port_op_new(uVar9));
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)0x0;
  }
  else {
    memset(pvVar5,0,uVar9);
  }
  *(void **)(this + 4) = pvVar5;
  iVar10 = 0;
  if (0 < *(int *)(this + 8)) {
    iVar8 = 0;
    do {
      iVar1 = *(int *)this;
      iVar2 = *(int *)param_1;
      *(undefined4 *)(iVar1 + iVar8) = *(undefined4 *)(iVar2 + iVar8);
      Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___op_assign
                ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
                 ((undefined4 *)(iVar1 + iVar8) + 1),
                 (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)(iVar2 + 4 + iVar8));
      iVar8 = iVar8 + 0x14;
      *(undefined1 *)(iVar10 + *(int *)(this + 4)) = *(undefined1 *)(iVar10 + *(int *)(param_1 + 4))
      ;
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(this + 8));
  }
  return this;
}





//==== 007df580 operator__007df580 ====


/* public: class util__AssocArray_L_classWeaponModule_P_Cclassutil__Darray_L_classutil__WeakPtr_L_class_Body_G__G__G_ &  util__AssocArray_L_classWeaponModule_P_Cclassutil__Darray_L_class_util__WeakPtr_L_classBody_G__G__G___op_assign(class util__AssocArray_L_classWeaponModule_P_Cclass_util__Darray_L_classutil__WeakPtr_L_classBody_G__G__G_ const &) */

AssocArray_L_class_WeaponModule_P_Cclass_util__Darray_L_class_util__WeakPtr_L_class_Body_G___G___G_ * 
util__AssocArray_class_WeaponModule__class_util__Darray_class_util__WeakPtr_class_Body_______operator(AssocArray_L_class_WeaponModule_P_Cclass_util__Darray_L_class_util__WeakPtr_L_class_Body_G___G___G_
          *this,AssocArray_L_class_WeaponModule_P_Cclass_util__Darray_L_class_util__WeakPtr_L_class_Body_G___G___G_
                *param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  void *pvVar5;
  uint uVar6;
  uint *puVar7;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *this_00;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  iVar10 = *(int *)(param_1 + 8);
  *(int *)(this + 8) = iVar10;
  if ((iVar10 < 0) || (0x3fffffff < iVar10)) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\assocarray.inl",0x3e,
              "Capacity >= 0 && Capacity <= ASSOC_ARRAY_MAX_SIZE",(char *)0x0);
    DebugBreak();
  }
  iVar10 = *(int *)this;
  if (iVar10 != 0) {
    iVar8 = *(int *)(iVar10 + -4);
    if (iVar8 == 0) {
      iVar8 = 0;
    }
    else {
      this_00 = (Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)(iVar10 + 4 + iVar8 * 0x14);
      do {
        this_00 = this_00 + -0x14;
        util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(this_00)
        ;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      iVar8 = *(int *)(iVar10 + -4);
    }
    port_op_delete((int *)(iVar10 + -4),iVar8 * 0x14 + 4);
  }
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
  }
  uVar9 = *(uint *)(this + 8);
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  if (0 < (int)uVar9) {
    uVar6 = -(uint)((int)((ulonglong)uVar9 * 0x14 >> 0x20) != 0) | (uint)((ulonglong)uVar9 * 0x14);
    puVar3 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar6) | uVar6 + 4);
    if (puVar3 == (uint *)0x0) {
      puVar7 = (uint *)0x0;
    }
    else {
      *puVar3 = uVar9;
      puVar7 = puVar3 + 1;
      if (uVar9 != 0) {
        puVar4 = puVar3 + 4;
        puVar3 = puVar7;
        do {
          *puVar3 = 0;
          puVar3 = puVar3 + 5;
          puVar4[-2] = (uint)&vftable_74;
          puVar4[-1] = 0;
          *puVar4 = 0;
          puVar4[1] = 0;
          uVar9 = uVar9 - 1;
          puVar4 = puVar4 + 5;
        } while (uVar9 != 0);
      }
    }
    uVar9 = *(uint *)(this + 8);
    *(uint **)this = puVar7;
    pvVar5 = (void *)(uintptr_t)(port_op_new(uVar9));
    if (pvVar5 == (void *)0x0) {
      pvVar5 = (void *)0x0;
    }
    else {
      memset(pvVar5,0,uVar9);
    }
    *(void **)(this + 4) = pvVar5;
    iVar10 = 0;
    if (0 < *(int *)(this + 8)) {
      iVar8 = 0;
      do {
        iVar1 = *(int *)this;
        iVar2 = *(int *)param_1;
        *(undefined4 *)(iVar1 + iVar8) = *(undefined4 *)(iVar2 + iVar8);
        Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___op_assign
                  ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
                   ((undefined4 *)(iVar1 + iVar8) + 1),
                   (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)(iVar2 + 4 + iVar8));
        iVar8 = iVar8 + 0x14;
        *(undefined1 *)(iVar10 + *(int *)(this + 4)) =
             *(undefined1 *)(iVar10 + *(int *)(param_1 + 4));
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(this + 8));
    }
  }
  return this;
}





//==== 007e0ea0 scalar_deleting_destructor_007e0ea0 ====


/* public: virtual void * __thiscall util__Darray_L_classutil__Darray_L_struct__PUNK_P_public_classutil__Darray_classutil__WeakPtr_classBody____thiscallSpacecraftTargeting__FindTargetsForWeapon_classWeaponModule__classutil__Darray_classutil__WeakPtr_classBody__const__bool_const____PUNK_P_5__TargetData_G__P_G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_class_util__Darray_struct__public__class_util__Darray_class_util__WeakPtr_class_Body______thiscall_SpacecraftTargeting__FindTargetsForWeapon_class_WeaponModule__class_util__Darray_class_util__WeakPtr_class_Body____const__bool_const_____5___TargetData______scalar_deleting_destructor
          (Darray_L_class_util__Darray_L_struct__public__class_util__Darray_L_class_util__WeakPtr_L_class_Body_G___G____thiscall_SpacecraftTargeting__FindTargetsForWeapon_class_WeaponModule_P_Cclass_util__Darray_L_class_util__WeakPtr_L_class_Body_G___G__const__Cbool_const_____5___TargetData_G__P_G_
           *this,uint param_1)

{
  *(undefined ***)this = &PTR_operator___0093d290;
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = &PTR_purecall_0093d250;
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 007e0ef0 scalar_deleting_destructor_007e0ef0 ====


/* public: virtual void * __thiscall util__Darray_L_struct__PUNK_P_public_classutil__Darray_classutil__WeakPtr_classBody____thiscallSpacecraftTargeting__FindTargetsForWeapon_classWeaponModule__classutil__Darray_classutil__WeakPtr_classBody__const__bool_const____PUNK_P_5__TargetData_G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct__public__class_util__Darray_class_util__WeakPtr_class_Body______thiscall_SpacecraftTargeting__FindTargetsForWeapon_class_WeaponModule__class_util__Darray_class_util__WeakPtr_class_Body____const__bool_const_____5___TargetData____scalar_deleting_destructor__o2
          (Darray_L_struct__public__class_util__Darray_L_class_util__WeakPtr_L_class_Body_G___G____thiscall_SpacecraftTargeting__FindTargetsForWeapon_class_WeaponModule_P_Cclass_util__Darray_L_class_util__WeakPtr_L_class_Body_G___G__const__Cbool_const_____5___TargetData_G_
           *this,uint param_1)

{
  util__Darray_struct__public__class_util__Darray_class_util__WeakPtr_class_Body______thiscall_SpacecraftTargeting__FindTargetsForWeapon_class_WeaponModule__class_util__Darray_class_util__WeakPtr_class_Body____const__bool_const_____5___TargetData____scalar_deleting_destructor();
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 007e0f20 scalar_deleting_destructor_007e0f20 ====


/* public: virtual void * __thiscall util__IArray_L_struct__PUNK_P_public_classutil__Darray_classutil__WeakPtr_classBody____thiscallSpacecraftTargeting__FindTargetsForWeapon_classWeaponModule__classutil__Darray_classutil__WeakPtr_classBody__const__bool_const____PUNK_P_5__TargetData_G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__IArray_struct__public__class_util__Darray_class_util__WeakPtr_class_Body______thiscall_SpacecraftTargeting__FindTargetsForWeapon_class_WeaponModule__class_util__Darray_class_util__WeakPtr_class_Body____const__bool_const_____5___TargetData____scalar_deleting_destructor
          (IArray_L_struct__public__class_util__Darray_L_class_util__WeakPtr_L_class_Body_G___G____thiscall_SpacecraftTargeting__FindTargetsForWeapon_class_WeaponModule_P_Cclass_util__Darray_L_class_util__WeakPtr_L_class_Body_G___G__const__Cbool_const_____5___TargetData_G_
           *this,uint param_1)

{
  *(undefined ***)this = &PTR_purecall_0093d250;
  if ((param_1 & 1) != 0) {
    port_op_delete(this,4);
  }
  return this;
}





//==== 007e1690 Find_007e1690 ====


/* public: class util__Maybe_L_double_G_ *  util__AssocArray_L_classCraftBlueprintconst__P_Cclassutil__Maybe_L_double_G__G___Find(class CraftBlueprint const * const &)const  */

Maybe_L_double_G_ * 
util__AssocArray_class_CraftBlueprint_const__class_util__Maybe_double_____Find
          (AssocArray_L_class_CraftBlueprint_const_P_Cclass_util__Maybe_L_double_G___G_ *this,
          CraftBlueprint **param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = *(uint *)(this + 8);
  if (uVar3 != 0) {
    for (uVar4 = (uint)((int)*param_1 * -0x61c8864f) % uVar3; (int)uVar4 < 0; uVar4 = uVar4 + uVar3)
    {
    }
    if ((int)uVar3 <= (int)uVar4) {
      uVar4 = (int)uVar4 % (int)uVar3;
    }
    cVar2 = *(char *)(*(int *)(this + 4) + uVar4);
    for (iVar5 = 0; (cVar2 != '\0' && (iVar5 < (int)uVar3)); iVar5 = iVar5 + 1) {
      piVar1 = (int *)(*(int *)this + uVar4 * 0x18);
      if ((CraftBlueprint *)*piVar1 == *param_1) {
        return (Maybe_L_double_G_ *)(piVar1 + 2);
      }
      for (uVar4 = uVar4 + 1; (int)uVar4 < 0; uVar4 = uVar4 + uVar3) {
      }
      if ((int)uVar3 <= (int)uVar4) {
        uVar4 = (int)uVar4 % (int)uVar3;
      }
      cVar2 = *(char *)(*(int *)(this + 4) + uVar4);
    }
  }
  return (Maybe_L_double_G_ *)0x0;
}





//==== 007e4220 New_util__PhysicalState_util__Vec3_double____double_util__Darray_MaterialConstituent__double_double_ ====


/* public: void  EffectHandler_L_classShockwave_C100_G___New_L_structutil__PhysicalState_L_struct_util__Vec3_L_double_G__G__Cdouble_Cclassutil__Darray_L_structMaterialConstituent_G__Cdouble_Cdouble_G_(struct
   util__PhysicalState_L_structutil__Vec3_L_double_G__G_,double,class util__Darray_L_struct_MaterialConstituent_G_,double,double) */

void 
EffectHandler_class_Shockwave_100___New_struct_util__PhysicalState_struct_util__Vec3_double____double_class_util__Darray_struct_MaterialConstituent__double_double
          (EffectHandler_L_class_Shockwave_C100_G_ *this,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,
          undefined4 param_8,undefined4 param_9,undefined4 param_10,undefined4 param_11,
          undefined4 param_12,undefined4 param_13,double param_14,undefined **param_15,
          void *param_16,undefined4 param_17,undefined4 param_18,undefined8 param_19,
          undefined8 param_20)

{
  undefined8 stack0xfffffffc;
  EffectHandler_L_class_Shockwave_C100_G_ EVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  EffectHandler_L_class_Shockwave_C100_G_ *pEVar5;
  double dVar6;
  undefined **ppuStack_34;
  void *pvStack_30;
  undefined **ppuStack_24;
  void *pvStack_20;
  double dStack_14;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x2c34) < 100) {
    *(int *)(this + 0x2c34) = *(int *)(this + 0x2c34) + 1;
    iVar2 = *(int *)(this + 0x2c30);
    do {
      iVar4 = iVar2;
      if (99 < iVar4) goto LAB_007e4423;
      EVar1 = this[iVar4];
      *(int *)(this + 0x2c30) = iVar4 + 1;
      iVar2 = iVar4 + 1;
    } while (*(char *)&(EVar1) != 0);
    *(char *)&(this[iVar4]) = 0x1;
    if ((iVar4 < 0) || (99 < iVar4)) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\sarray.inl",0x35,
                      "Index >= 0 && Index < Size",(char *)0x0);
      DebugBreak();
    }
    iVar4 = iVar4 * 0x70;
    pEVar5 = this + iVar4 + 0x78;
    *(undefined4 *)pEVar5 = param_2;
    *(undefined4 *)(pEVar5 + 4) = param_3;
    *(undefined4 *)(pEVar5 + 8) = param_4;
    *(undefined4 *)(pEVar5 + 0xc) = param_5;
    pEVar5 = this + iVar4 + 0x88;
    *(undefined4 *)pEVar5 = param_6;
    *(undefined4 *)(pEVar5 + 4) = param_7;
    *(undefined4 *)(pEVar5 + 8) = param_8;
    *(undefined4 *)(pEVar5 + 0xc) = param_9;
    pEVar5 = this + iVar4 + 0x98;
    *(undefined4 *)pEVar5 = param_10;
    *(undefined4 *)(pEVar5 + 4) = param_11;
    *(undefined4 *)(pEVar5 + 8) = param_12;
    *(undefined4 *)(pEVar5 + 0xc) = param_13;
    if (param_14 <= 0.0) {
      util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\tactical\\effects.cpp",0x13d,
                      "InRadius_km > 0.",(char *)0x0);
      DebugBreak();
    }
    *(double *)(this + iVar4 + 200) = param_14;
    pEVar5 = this + iVar4 + 0xa8;
    util__Darray_struct_MaterialConstituent___operator
              ((Darray_L_struct_MaterialConstituent_G_ *)pEVar5,
               (Darray_L_struct_MaterialConstituent_G_ *)&param_15);
    *(undefined8 *)(this + iVar4 + 0xb8) = param_19;
    *(undefined8 *)(this + iVar4 + 0xc0) = param_20;
    dStack_14 = 0.0;
    iStack_c = 0;
    iVar2 = (**(code **)(*(int *)pEVar5 + 0xc))();
    if (iStack_c < iVar2) {
      do {
        puVar3 = (undefined4 *)(*(code *)**(undefined4 **)pEVar5)(&iStack_c);
        dVar6 = Material__GetGasExpansionVelocity_km__s
                          ((Material *)*puVar3,*(double *)(this + iVar4 + 0xc0));
        iStack_c = iStack_c + 1;
        pEVar5 = this + iVar4 + 0xa8;
        dStack_14 = dVar6 * *(double *)(puVar3 + 2) + dStack_14;
        iVar2 = (**(code **)(*(int *)pEVar5 + 0xc))();
      } while (iStack_c < iVar2);
    }
    iVar2 = util__Unzip_class_Material_const__double_struct_MaterialConstituent__o2
                      ((Darray_L_struct_MaterialConstituent_G_ *)&ppuStack_34);
    dVar6 = util__Sum_L_double_G_((Darray_L_double_G_ *)(iVar2 + 0x10));
    ppuStack_24 = (undefined **)(&vftable_63);
    *(double *)(this + iVar4 + 0xd0) = dStack_14 / dVar6;
    if (pvStack_20 != (void *)0x0) {
      port_op_delete(pvStack_20);
    }
    pvStack_20 = (void *)0x0;
    ppuStack_24 = (undefined **)(&vftable);
    ppuStack_34 = (undefined **)(&vftable_2);
    if (pvStack_30 != (void *)0x0) {
      port_op_delete(pvStack_30);
    }
    *(char *)((char *)this + iVar4 + 0xd8) = 1;
    *(double *)(this + iVar4 + 200) =
         *(double *)(this + iVar4 + 0xd0) * 0.0005 + *(double *)(this + iVar4 + 200);
  }
LAB_007e4423:
  param_15 = (undefined **)(&vftable_15);
  if (param_16 != (void *)0x0) {
    port_op_delete(param_16);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 007e4f20 EffectHandler_BeamStreak_5000_ ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public:  EffectHandler_L_classBeamStreak_C5000_G___EffectHandler_L_class_BeamStreak_C5000_G_(class EffectManager *,class util__Str_L_char_G_ const &) */

EffectHandler_L_class_BeamStreak_C5000_G_ * 
EffectHandler_class_BeamStreak_5000___EffectHandler_class_BeamStreak_5000
          (EffectHandler_L_class_BeamStreak_C5000_G_ *this,EffectManager *param_1,Str_L_char_G_ *param_2)

{
  EffectHandler_L_class_BeamStreak_C5000_G_ *pEVar1;
  EffectHandler_L_class_BeamStreak_C5000_G_ *pEVar2;
  int iVar3;
  int iVar4;
  EffectManager **ppEVar5;
  EffectManager *apEStack_70 [2];
  undefined1 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  EffectHandler_L_class_BeamStreak_C5000_G_ *pEStack_8;
  
  apEStack_70[0] = (EffectManager *)0x1388;
  pEVar2 = this + 0x1390;
  *(undefined ***)(this + 5000) = &vftable_510;
  pEVar1 = this + 0x13b0;
  do {
    *(undefined4 *)pEVar2 = 0;
    pEVar2 = pEVar2 + 0x68;
    *(undefined4 *)(pEVar1 + -0x1c) = 0;
    *(char *)&(pEVar1[-0x18]) = 0x0;
    *(undefined4 *)(pEVar1 + -0x10) = 0;
    *(undefined4 *)(pEVar1 + -0xc) = 0;
    *(undefined4 *)(pEVar1 + -8) = 0;
    *(undefined4 *)(pEVar1 + -4) = 0;
    *(undefined4 *)pEVar1 = 0;
    *(undefined4 *)(pEVar1 + 4) = 0;
    *(undefined4 *)(pEVar1 + 8) = 0;
    *(undefined4 *)(pEVar1 + 0xc) = 0;
    *(undefined4 *)(pEVar1 + 0x10) = 0;
    *(undefined4 *)(pEVar1 + 0x14) = 0;
    *(undefined4 *)(pEVar1 + 0x18) = 0;
    *(undefined4 *)(pEVar1 + 0x1c) = 0;
    *(undefined4 *)(pEVar1 + 0x20) = 0;
    *(undefined4 *)(pEVar1 + 0x24) = 0;
    *(undefined4 *)(pEVar1 + 0x28) = 0;
    *(undefined4 *)(pEVar1 + 0x2c) = 0;
    *(undefined4 *)(pEVar1 + 0x30) = 0;
    *(undefined4 *)(pEVar1 + 0x34) = 0;
    *(undefined4 *)(pEVar1 + 0x38) = 0;
    *(undefined4 *)(pEVar1 + 0x3c) = 0;
    *(undefined8 *)(pEVar1 + 0x40) = 0;
    apEStack_70[0] =
         (EffectManager *)((int)&apEStack_70[0][-1].HiResSphereObject.VertexData.Capacity + 3);
    pEVar1 = pEVar1 + 0x68;
  } while (apEStack_70[0] != (EffectManager *)0x0);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  apEStack_70[1] = apEStack_70[0];
  pEStack_8 = this;
  (**(code **)(*(int *)(this + 5000) + 0x10))(apEStack_70);
  *(undefined4 *)(this + 0x802d0) = 0;
  *(undefined4 *)(this + 0x802d4) = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)(this + 0x802d8),param_2);
  iVar4 = 0;
  pEVar2 = this + 0x1390;
  do {
    apEStack_70[0] = param_1;
    apEStack_70[1] = (EffectManager *)(this + iVar4);
    uStack_68 = 0;
    uStack_10 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    if ((iVar4 < 0) || (4999 < iVar4)) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\sarray.inl",0x35,
                      "Index >= 0 && Index < Size",(char *)0x0);
      DebugBreak();
    }
    ppEVar5 = apEStack_70;
    pEVar1 = pEVar2;
    for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(EffectManager **)pEVar1 = *ppEVar5;
      ppEVar5 = ppEVar5 + 1;
      pEVar1 = pEVar1 + 4;
    }
    *(char *)&(pEStack_8[iVar4]) = 0x0;
    iVar4 = iVar4 + 1;
    pEVar2 = pEVar2 + 0x68;
    this = pEStack_8;
  } while (iVar4 < 5000);
  return pEStack_8;
}





//==== 007e5070 EffectHandler_PhotonFlash_1000_ ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public:  EffectHandler_L_classPhotonFlash_C1000_G___EffectHandler_L_class_PhotonFlash_C1000_G_(class EffectManager *,class util__Str_L_char_G_ const &) */

EffectHandler_L_class_PhotonFlash_C1000_G_ * 
EffectHandler_class_PhotonFlash_1000___EffectHandler_class_PhotonFlash_1000
          (EffectHandler_L_class_PhotonFlash_C1000_G_ *this,EffectManager *param_1,Str_L_char_G_ *param_2)

{
  EffectHandler_L_class_PhotonFlash_C1000_G_ *pEVar1;
  EffectHandler_L_class_PhotonFlash_C1000_G_ *pEVar2;
  int iVar3;
  int iVar4;
  EffectManager **ppEVar5;
  EffectManager *apEStack_90 [16];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined1 uStack_38;
  EffectManager *pEStack_34;
  EffectManager *pEStack_30;
  EffectManager *pEStack_2c;
  undefined1 uStack_28;
  undefined1 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  EffectHandler_L_class_PhotonFlash_C1000_G_ *pEStack_8;
  
  apEStack_90[0] = (EffectManager *)0x3e8;
  pEVar2 = this + 0x3f0;
  *(undefined ***)(this + 1000) = &vftable_509;
  pEVar1 = this + 0x420;
  do {
    *(undefined4 *)pEVar2 = 0;
    pEVar2 = pEVar2 + 0x88;
    *(undefined4 *)(pEVar1 + -0x2c) = 0;
    *(undefined4 *)(pEVar1 + -0x28) = 0;
    *(undefined4 *)(pEVar1 + -0x24) = 0;
    *(undefined4 *)(pEVar1 + -0x20) = 0;
    *(undefined4 *)(pEVar1 + -0x1c) = 0;
    *(undefined4 *)(pEVar1 + -0x18) = 0;
    *(undefined4 *)(pEVar1 + -0x14) = 0;
    *(undefined4 *)(pEVar1 + -0x10) = 0;
    *(undefined4 *)(pEVar1 + -0xc) = 0;
    *(undefined4 *)(pEVar1 + -8) = 0;
    *(undefined4 *)(pEVar1 + -4) = 0;
    *(undefined4 *)pEVar1 = 0;
    *(undefined4 *)(pEVar1 + 4) = 0;
    *(char *)&(pEVar1[0x28]) = 0x0;
    *(undefined8 *)(pEVar1 + 0x20) = 0;
    *(undefined4 *)(pEVar1 + 0x10) = 0;
    *(undefined4 *)(pEVar1 + 0x14) = 0;
    *(undefined4 *)(pEVar1 + 0x18) = 0;
    *(undefined4 *)(pEVar1 + 0x1c) = 0;
    *(undefined4 *)(pEVar1 + 0x2c) = 0;
    *(undefined4 *)(pEVar1 + 0x30) = 0;
    *(undefined4 *)(pEVar1 + 0x34) = 0;
    *(char *)&(pEVar1[0x38]) = 0x0;
    *(char *)&(pEVar1[0x3c]) = 0x0;
    *(undefined8 *)(pEVar1 + 0x50) = 0;
    *(undefined4 *)(pEVar1 + 0x40) = 0;
    *(undefined4 *)(pEVar1 + 0x44) = 0;
    *(undefined4 *)(pEVar1 + 0x48) = 0;
    *(undefined4 *)(pEVar1 + 0x4c) = 0;
    apEStack_90[0] =
         (EffectManager *)((int)&apEStack_90[0][-1].HiResSphereObject.VertexData.Capacity + 3);
    pEVar1 = pEVar1 + 0x88;
  } while (apEStack_90[0] != (EffectManager *)0x0);
  apEStack_90[2] = (EffectManager *)0x0;
  apEStack_90[3] = (EffectManager *)0x0;
  apEStack_90[4] = (EffectManager *)0x0;
  apEStack_90[5] = (EffectManager *)0x0;
  uStack_38 = 0;
  apEStack_90[6] = (EffectManager *)0x0;
  apEStack_90[7] = (EffectManager *)0x0;
  apEStack_90[8] = (EffectManager *)0x0;
  apEStack_90[9] = (EffectManager *)0x0;
  apEStack_90[10] = (EffectManager *)0x0;
  apEStack_90[0xb] = (EffectManager *)0x0;
  apEStack_90[0xc] = (EffectManager *)0x0;
  apEStack_90[0xd] = (EffectManager *)0x0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  apEStack_90[1] = apEStack_90[0];
  pEStack_34 = apEStack_90[0];
  pEStack_30 = apEStack_90[0];
  pEStack_2c = apEStack_90[0];
  pEStack_8 = this;
  (**(code **)(*(int *)(this + 1000) + 0x10))(apEStack_90);
  *(undefined4 *)(this + 0x21730) = 0;
  *(undefined4 *)(this + 0x21734) = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)(this + 0x21738),param_2);
  iVar4 = 0;
  pEVar2 = this + 0x3f0;
  do {
    apEStack_90[0] = param_1;
    apEStack_90[1] = (EffectManager *)(this + iVar4);
    uStack_40 = 0;
    uStack_38 = 0;
    pEStack_34 = (EffectManager *)0x0;
    pEStack_30 = (EffectManager *)0x0;
    pEStack_2c = (EffectManager *)0x0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_10 = 0;
    apEStack_90[2] = (EffectManager *)0x0;
    apEStack_90[3] = (EffectManager *)0x0;
    apEStack_90[4] = (EffectManager *)0x0;
    apEStack_90[5] = (EffectManager *)0x0;
    apEStack_90[6] = (EffectManager *)0x0;
    apEStack_90[7] = (EffectManager *)0x0;
    apEStack_90[8] = (EffectManager *)0x0;
    apEStack_90[9] = (EffectManager *)0x0;
    apEStack_90[10] = (EffectManager *)0x0;
    apEStack_90[0xb] = (EffectManager *)0x0;
    apEStack_90[0xc] = (EffectManager *)0x0;
    apEStack_90[0xd] = (EffectManager *)0x0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    if ((iVar4 < 0) || (999 < iVar4)) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\sarray.inl",0x35,
                      "Index >= 0 && Index < Size",(char *)0x0);
      DebugBreak();
    }
    ppEVar5 = apEStack_90;
    pEVar1 = pEVar2;
    for (iVar3 = 0x22; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(EffectManager **)pEVar1 = *ppEVar5;
      ppEVar5 = ppEVar5 + 1;
      pEVar1 = pEVar1 + 4;
    }
    *(char *)&(pEStack_8[iVar4]) = 0x0;
    iVar4 = iVar4 + 1;
    pEVar2 = pEVar2 + 0x88;
    this = pEStack_8;
  } while (iVar4 < 1000);
  return pEStack_8;
}





//==== 007e5240 EffectHandler_Shockwave_100_ ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public:  EffectHandler_L_classShockwave_C100_G___EffectHandler_L_classShockwave_C100_G_(class
   EffectManager *,class util__Str_L_char_G_ const &) */

EffectHandler_L_class_Shockwave_C100_G_ * 
EffectHandler_class_Shockwave_100___EffectHandler_class_Shockwave_100
          (EffectHandler_L_class_Shockwave_C100_G_ *this,EffectManager *param_1,Str_L_char_G_ *param_2)

{
  EffectHandler_L_class_Shockwave_C100_G_ *pEVar1;
  int iVar2;
  EffectHandler_L_class_Shockwave_C100_G_ *pEVar3;
  EffectManager *pEStack_78;
  EffectManager *pEStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined **ppuStack_40;
  EffectManager *pEStack_3c;
  EffectManager *pEStack_38;
  EffectManager *pEStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  EffectHandler_L_class_Shockwave_C100_G_ EStack_10;
  EffectHandler_L_class_Shockwave_C100_G_ *pEStack_8;
  
  pEVar3 = this + 0x70;
  *(undefined ***)(this + 0x68) = &vftable_512;
  pEStack_78 = (EffectManager *)0x64;
  pEVar1 = this + 0xa0;
  do {
    *(undefined4 *)pEVar3 = 0;
    pEVar3 = pEVar3 + 0x70;
    *(undefined4 *)(pEVar1 + -0x2c) = 0;
    *(undefined4 *)(pEVar1 + -0x28) = 0;
    *(undefined4 *)(pEVar1 + -0x24) = 0;
    *(undefined4 *)(pEVar1 + -0x20) = 0;
    *(undefined4 *)(pEVar1 + -0x1c) = 0;
    *(undefined4 *)(pEVar1 + -0x18) = 0;
    *(undefined4 *)(pEVar1 + -0x14) = 0;
    *(undefined4 *)(pEVar1 + -0x10) = 0;
    *(undefined4 *)(pEVar1 + -0xc) = 0;
    *(undefined4 *)(pEVar1 + -8) = 0;
    *(undefined4 *)(pEVar1 + -4) = 0;
    *(undefined4 *)pEVar1 = 0;
    *(undefined4 *)(pEVar1 + 4) = 0;
    *(undefined ***)(pEVar1 + 8) = (undefined **)(&vftable_15);
    *(undefined4 *)(pEVar1 + 0xc) = 0;
    *(undefined4 *)(pEVar1 + 0x10) = 0;
    *(undefined4 *)(pEVar1 + 0x14) = 0;
    *(char *)&(pEVar1[0x38]) = 0x0;
    *(undefined4 *)(pEVar1 + 0x18) = 0;
    *(undefined4 *)(pEVar1 + 0x1c) = 0;
    *(undefined4 *)(pEVar1 + 0x20) = 0;
    *(undefined4 *)(pEVar1 + 0x24) = 0;
    *(undefined4 *)(pEVar1 + 0x28) = 0;
    *(undefined4 *)(pEVar1 + 0x2c) = 0;
    *(undefined4 *)(pEVar1 + 0x30) = 0;
    *(undefined4 *)(pEVar1 + 0x34) = 0;
    pEStack_78 = (EffectManager *)((int)&pEStack_78[-1].HiResSphereObject.VertexData.Capacity + 3);
    pEVar1 = pEVar1 + 0x70;
  } while (pEStack_78 != (EffectManager *)0x0);
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  ppuStack_40 = (undefined **)(&vftable_15);
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  *(char *)&(EStack_10) = 0x0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  pEStack_74 = pEStack_78;
  pEStack_3c = pEStack_78;
  pEStack_38 = pEStack_78;
  pEStack_34 = pEStack_78;
  pEStack_8 = this;
  (**(code **)(*(int *)(this + 0x68) + 0x10))(&pEStack_78);
  ppuStack_40 = (undefined **)(&vftable_15);
  if (pEStack_3c != (EffectManager *)0x0) {
    port_op_delete(pEStack_3c);
  }
  *(undefined4 *)(this + 0x2c30) = 0;
  *(undefined4 *)(this + 0x2c34) = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)(this + 0x2c38),param_2);
  iVar2 = 0;
  pEVar3 = this + 0x78;
  do {
    pEVar1 = this + iVar2;
    pEStack_78 = param_1;
    ppuStack_40 = (undefined **)(&vftable_15);
    pEStack_3c = (EffectManager *)0x0;
    pEStack_38 = (EffectManager *)0x0;
    pEStack_34 = (EffectManager *)0x0;
    *(char *)&(EStack_10) = 0x0;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    pEStack_74 = (EffectManager *)pEVar1;
    if ((iVar2 < 0) || (99 < iVar2)) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\sarray.inl",0x35,
                      "Index >= 0 && Index < Size",(char *)0x0);
      DebugBreak();
    }
    *(EffectManager **)(pEVar3 + -8) = pEStack_78;
    *(undefined4 *)pEVar3 = uStack_70;
    *(undefined4 *)(pEVar3 + 4) = uStack_6c;
    *(undefined4 *)(pEVar3 + 8) = uStack_68;
    *(undefined4 *)(pEVar3 + 0xc) = uStack_64;
    *(EffectManager **)(pEVar3 + -4) = pEStack_74;
    *(undefined4 *)(pEVar3 + 0x10) = uStack_60;
    *(undefined4 *)(pEVar3 + 0x14) = uStack_5c;
    *(undefined4 *)(pEVar3 + 0x18) = uStack_58;
    *(undefined4 *)(pEVar3 + 0x1c) = uStack_54;
    *(undefined4 *)(pEVar3 + 0x20) = uStack_50;
    *(undefined4 *)(pEVar3 + 0x24) = uStack_4c;
    *(undefined4 *)(pEVar3 + 0x28) = uStack_48;
    *(undefined4 *)(pEVar3 + 0x2c) = uStack_44;
    util__Darray_struct_MaterialConstituent___operator
              ((Darray_L_struct_MaterialConstituent_G_ *)(pEVar3 + 0x30),
               (Darray_L_struct_MaterialConstituent_G_ *)&ppuStack_40);
    pEVar3[0x60] = EStack_10;
    ppuStack_40 = (undefined **)(&vftable_15);
    *(undefined4 *)(pEVar3 + 0x40) = uStack_30;
    *(undefined4 *)(pEVar3 + 0x44) = uStack_2c;
    *(undefined4 *)(pEVar3 + 0x48) = uStack_28;
    *(undefined4 *)(pEVar3 + 0x4c) = uStack_24;
    *(undefined4 *)(pEVar3 + 0x50) = uStack_20;
    *(undefined4 *)(pEVar3 + 0x54) = uStack_1c;
    *(undefined4 *)(pEVar3 + 0x58) = uStack_18;
    *(undefined4 *)(pEVar3 + 0x5c) = uStack_14;
    if (pEStack_3c != (EffectManager *)0x0) {
      port_op_delete(pEStack_3c);
    }
    iVar2 = iVar2 + 1;
    *(undefined4 *)pEVar1 = 0;
    pEVar3 = pEVar3 + 0x70;
    this = pEStack_8;
  } while (iVar2 < 100);
  return pEStack_8;
}





//==== 007e5430 EffectHandler_Spark_2000_ ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public:  EffectHandler_L_classSpark_C2000_G___EffectHandler_L_classSpark_C2000_G_(class
   EffectManager *,class util__Str_L_char_G_ const &) */

EffectHandler_L_class_Spark_C2000_G_ * 
EffectHandler_class_Spark_2000___EffectHandler_class_Spark_2000
          (EffectHandler_L_class_Spark_C2000_G_ *this,EffectManager *param_1,Str_L_char_G_ *param_2)

{
  EffectHandler_L_class_Spark_C2000_G_ *pEVar1;
  EffectHandler_L_class_Spark_C2000_G_ *pEVar2;
  int iVar3;
  int iVar4;
  EffectManager **ppEVar5;
  EffectManager *apEStack_b8 [4];
  undefined8 uStack_a8;
  undefined4 uStack_98;
  undefined4 uStack_94;
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
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  EffectHandler_L_class_Spark_C2000_G_ *pEStack_8;
  
  apEStack_b8[0] = (EffectManager *)0x7d0;
  pEVar2 = this + 0x7d8;
  *(undefined ***)(this + 2000) = &vftable_511;
  pEVar1 = this + 0x820;
  do {
    *(undefined4 *)pEVar2 = 0;
    pEVar2 = pEVar2 + 0xb0;
    *(undefined4 *)(pEVar1 + -0x44) = 0;
    *(undefined4 *)(pEVar1 + -0x40) = 0;
    *(undefined8 *)(pEVar1 + -0x38) = 0;
    *(undefined4 *)(pEVar1 + -0x28) = 0;
    *(undefined4 *)(pEVar1 + -0x24) = 0;
    *(undefined4 *)(pEVar1 + -0x20) = 0;
    *(undefined4 *)(pEVar1 + -0x1c) = 0;
    *(undefined4 *)(pEVar1 + -0x18) = 0;
    *(undefined4 *)(pEVar1 + -0x14) = 0;
    *(undefined4 *)(pEVar1 + -0x10) = 0;
    *(undefined4 *)(pEVar1 + -0xc) = 0;
    *(undefined4 *)(pEVar1 + -8) = 0;
    *(undefined4 *)(pEVar1 + -4) = 0;
    *(undefined4 *)pEVar1 = 0;
    *(undefined4 *)(pEVar1 + 4) = 0;
    *(undefined4 *)(pEVar1 + 8) = 0;
    *(undefined4 *)(pEVar1 + 0xc) = 0;
    *(undefined4 *)(pEVar1 + 0x10) = 0;
    *(undefined4 *)(pEVar1 + 0x14) = 0;
    *(undefined4 *)(pEVar1 + 0x18) = 0;
    *(undefined4 *)(pEVar1 + 0x1c) = 0;
    *(undefined4 *)(pEVar1 + 0x20) = 0;
    *(undefined4 *)(pEVar1 + 0x24) = 0;
    *(undefined4 *)(pEVar1 + 0x28) = 0;
    *(undefined4 *)(pEVar1 + 0x2c) = 0;
    *(undefined4 *)(pEVar1 + 0x30) = 0;
    *(undefined4 *)(pEVar1 + 0x34) = 0;
    *(undefined4 *)(pEVar1 + 0x38) = 0;
    *(undefined4 *)(pEVar1 + 0x3c) = 0;
    *(undefined4 *)(pEVar1 + 0x40) = 0;
    *(undefined4 *)(pEVar1 + 0x44) = 0;
    *(undefined4 *)(pEVar1 + 0x48) = 0;
    *(undefined4 *)(pEVar1 + 0x4c) = 0;
    *(undefined4 *)(pEVar1 + 0x50) = 0;
    *(undefined4 *)(pEVar1 + 0x54) = 0;
    *(undefined4 *)(pEVar1 + 0x58) = 0;
    *(undefined4 *)(pEVar1 + 0x5c) = 0;
    *(undefined4 *)(pEVar1 + 0x60) = 0;
    *(undefined4 *)(pEVar1 + 100) = 0;
    apEStack_b8[0] =
         (EffectManager *)((int)&apEStack_b8[0][-1].HiResSphereObject.VertexData.Capacity + 3);
    pEVar1 = pEVar1 + 0xb0;
  } while (apEStack_b8[0] != (EffectManager *)0x0);
  uStack_a8 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  apEStack_b8[1] = apEStack_b8[0];
  apEStack_b8[2] = apEStack_b8[0];
  pEStack_8 = this;
  (**(code **)(*(int *)(this + 2000) + 0x10))(apEStack_b8);
  *(undefined4 *)(this + 0x566d8) = 0;
  *(undefined4 *)(this + 0x566dc) = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)(this + 0x566e0),param_2);
  iVar4 = 0;
  pEVar2 = this + 0x7d8;
  do {
    apEStack_b8[0] = param_1;
    apEStack_b8[1] = (EffectManager *)(this + iVar4);
    apEStack_b8[2] = (EffectManager *)0x0;
    uStack_a8 = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_c = 0;
    if ((iVar4 < 0) || (1999 < iVar4)) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\sarray.inl",0x35,
                      "Index >= 0 && Index < Size",(char *)0x0);
      DebugBreak();
    }
    ppEVar5 = apEStack_b8;
    pEVar1 = pEVar2;
    for (iVar3 = 0x2c; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(EffectManager **)pEVar1 = *ppEVar5;
      ppEVar5 = ppEVar5 + 1;
      pEVar1 = pEVar1 + 4;
    }
    *(char *)&(pEStack_8[iVar4]) = 0x0;
    iVar4 = iVar4 + 1;
    pEVar2 = pEVar2 + 0xb0;
    this = pEStack_8;
  } while (iVar4 < 2000);
  return pEStack_8;
}





//==== 007e5600 EffectManager ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: __thiscall EffectManager__EffectManager(class Manager *) */

EffectManager * __thiscall EffectManager__EffectManager(EffectManager *this,Manager *param_1)

{
  Str_L_char_G_ SStack_10;
  
  this->Parent = param_1;
  util__Str_char___Str_char(&SStack_10,"Flash");
  EffectHandler_class_PhotonFlash_1000___EffectHandler_class_PhotonFlash_1000
            ((EffectHandler_L_class_PhotonFlash_C1000_G_ *)&this->Flashes,this,&SStack_10);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  util__Str_char___Str_char(&SStack_10,"Beam");
  EffectHandler_class_BeamStreak_5000___EffectHandler_class_BeamStreak_5000
            ((EffectHandler_L_class_BeamStreak_C5000_G_ *)&this->Beams,this,&SStack_10);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  util__Str_char___Str_char(&SStack_10,"Spark");
  EffectHandler_class_Spark_2000___EffectHandler_class_Spark_2000
            ((EffectHandler_L_class_Spark_C2000_G_ *)&this->Sparks,this,&SStack_10);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  util__Str_char___Str_char(&SStack_10,"Shockwave");
  EffectHandler_class_Shockwave_100___EffectHandler_class_Shockwave_100
            ((EffectHandler_L_class_Shockwave_C100_G_ *)&this->Shockwaves,this,&SStack_10);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  this->ScreenIsFlashedOut = false;
  *(undefined4 *)&(this->ScreenFlashColor).X = 0;
  *(undefined4 *)((int)&(this->ScreenFlashColor).X + 4) = 0;
  *(undefined4 *)&(this->ScreenFlashColor).Y = 0;
  *(undefined4 *)((int)&(this->ScreenFlashColor).Y + 4) = 0;
  *(undefined4 *)&(this->ScreenFlashColor).Z = 0;
  *(undefined4 *)((int)&(this->ScreenFlashColor).Z + 4) = 0;
  *(undefined4 *)&this->ScreenFlashIntensity_J = 0;
  *(undefined4 *)((int)&this->ScreenFlashIntensity_J + 4) = 0;
  *(undefined4 *)&(this->ScreenFlashLocation_km).Data.X = 0;
  *(undefined4 *)((int)&(this->ScreenFlashLocation_km).Data.X + 4) = 0;
  *(undefined4 *)&(this->ScreenFlashLocation_km).Data.Y = 0;
  *(undefined4 *)((int)&(this->ScreenFlashLocation_km).Data.Y + 4) = 0;
  (this->ScreenFlashLocation_km).Data.Z = 0.0;
  (this->ScreenFlashLocation_km).IsValidData = false;
  VertexBufferObject__VertexBufferObject(&this->SphereObject);
  VertexBufferObject__VertexBufferObject(&this->HiResSphereObject);
  return this;
}





//==== 007e5710 Clear_007e5710 ====


/* public: virtual void  util__Sarray_L_classBeamStreak_C5000_G___Clear(void) */

void __thiscall util__Sarray_class_BeamStreak_5000___Clear(Sarray_L_class_BeamStreak_C5000_G_ *this)

{
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 uStack_64;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined8 uStack_c;
  
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  (**(code **)(*(int *)this + 0x10))(&uStack_6c);
  return;
}





//==== 007e5760 Clear_007e5760 ====


/* public: virtual void  util__Sarray_L_classPhotonFlash_C1000_G___Clear(void) */

void __thiscall util__Sarray_class_PhotonFlash_1000___Clear(Sarray_L_class_PhotonFlash_C1000_G_ *this)

{
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
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  undefined1 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 uStack_24;
  undefined1 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined8 uStack_c;
  
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_34 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_30 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_2c = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_3c = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  (**(code **)(*(int *)this + 0x10))(&uStack_8c);
  return;
}





//==== 007e57e0 Clear_007e57e0 ====


/* public: virtual void  util__Sarray_L_classShockwave_C100_G___Clear(void) */

void __thiscall util__Sarray_class_Shockwave_100___Clear(Sarray_L_class_Shockwave_C100_G_ *this)

{
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined **ppuStack_3c;
  void *pvStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 uStack_c;
  
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  ppuStack_3c = (undefined **)(&vftable_15);
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  pvStack_38 = (void *)0x0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_c = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  (**(code **)(*(int *)this + 0x10))(&uStack_74);
  ppuStack_3c = (undefined **)(&vftable_15);
  if (pvStack_38 != (void *)0x0) {
    port_op_delete(pvStack_38);
  }
  return;
}





//==== 007e5850 Clear_007e5850 ====


/* public: virtual void  util__Sarray_L_classSpark_C2000_G___Clear(void) */

void __thiscall util__Sarray_class_Spark_2000___Clear(Sarray_L_class_Spark_C2000_G_ *this)

{
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a4;
  undefined4 uStack_94;
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
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a4 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  (**(code **)(*(int *)this + 0x10))(&uStack_b4);
  return;
}





//==== 007e58c0 DestroyAll ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall EffectManager__DestroyAll(void) */

void __thiscall EffectManager__DestroyAll(EffectManager *this)

{
  int iVar1;
  EffectHandler_L_BeamStreak_C5000_G_ *pEVar2;
  EffectHandler_L_PhotonFlash_C1000_G_ *pEVar3;
  EffectHandler_L_Spark_C2000_G_ *pEVar4;
  
  pEVar2 = &this->Beams;
  for (iVar1 = 0x4e2; iVar1 != 0; iVar1 = iVar1 + -1) {
    pEVar2->AliveFlag[0] = false;
    pEVar2->AliveFlag[1] = false;
    pEVar2->AliveFlag[2] = false;
    pEVar2->AliveFlag[3] = false;
    pEVar2 = (EffectHandler_L_BeamStreak_C5000_G_ *)(pEVar2->AliveFlag + 4);
  }
  pEVar3 = &this->Flashes;
  for (iVar1 = 0xfa; iVar1 != 0; iVar1 = iVar1 + -1) {
    pEVar3->AliveFlag[0] = false;
    pEVar3->AliveFlag[1] = false;
    pEVar3->AliveFlag[2] = false;
    pEVar3->AliveFlag[3] = false;
    pEVar3 = (EffectHandler_L_PhotonFlash_C1000_G_ *)(pEVar3->AliveFlag + 4);
  }
  pEVar4 = &this->Sparks;
  for (iVar1 = 500; iVar1 != 0; iVar1 = iVar1 + -1) {
    pEVar4->AliveFlag[0] = false;
    pEVar4->AliveFlag[1] = false;
    pEVar4->AliveFlag[2] = false;
    pEVar4->AliveFlag[3] = false;
    pEVar4 = (EffectHandler_L_Spark_C2000_G_ *)(pEVar4->AliveFlag + 4);
  }
  (this->Shockwaves).AliveFlag[0] = false;
  (this->Shockwaves).AliveFlag[1] = false;
  (this->Shockwaves).AliveFlag[2] = false;
  (this->Shockwaves).AliveFlag[3] = false;
  (this->Shockwaves).AliveFlag[4] = false;
  (this->Shockwaves).AliveFlag[5] = false;
  (this->Shockwaves).AliveFlag[6] = false;
  (this->Shockwaves).AliveFlag[7] = false;
  (this->Shockwaves).AliveFlag[8] = false;
  (this->Shockwaves).AliveFlag[9] = false;
  (this->Shockwaves).AliveFlag[10] = false;
  (this->Shockwaves).AliveFlag[0xb] = false;
  (this->Shockwaves).AliveFlag[0xc] = false;
  (this->Shockwaves).AliveFlag[0xd] = false;
  (this->Shockwaves).AliveFlag[0xe] = false;
  (this->Shockwaves).AliveFlag[0xf] = false;
  (this->Shockwaves).AliveFlag[0x10] = false;
  (this->Shockwaves).AliveFlag[0x11] = false;
  (this->Shockwaves).AliveFlag[0x12] = false;
  (this->Shockwaves).AliveFlag[0x13] = false;
  (this->Shockwaves).AliveFlag[0x14] = false;
  (this->Shockwaves).AliveFlag[0x15] = false;
  (this->Shockwaves).AliveFlag[0x16] = false;
  (this->Shockwaves).AliveFlag[0x17] = false;
  (this->Shockwaves).AliveFlag[0x18] = false;
  (this->Shockwaves).AliveFlag[0x19] = false;
  (this->Shockwaves).AliveFlag[0x1a] = false;
  (this->Shockwaves).AliveFlag[0x1b] = false;
  (this->Shockwaves).AliveFlag[0x1c] = false;
  (this->Shockwaves).AliveFlag[0x1d] = false;
  (this->Shockwaves).AliveFlag[0x1e] = false;
  (this->Shockwaves).AliveFlag[0x1f] = false;
  (this->Shockwaves).AliveFlag[0x20] = false;
  (this->Shockwaves).AliveFlag[0x21] = false;
  (this->Shockwaves).AliveFlag[0x22] = false;
  (this->Shockwaves).AliveFlag[0x23] = false;
  (this->Shockwaves).AliveFlag[0x24] = false;
  (this->Shockwaves).AliveFlag[0x25] = false;
  (this->Shockwaves).AliveFlag[0x26] = false;
  (this->Shockwaves).AliveFlag[0x27] = false;
  (this->Shockwaves).AliveFlag[0x28] = false;
  (this->Shockwaves).AliveFlag[0x29] = false;
  (this->Shockwaves).AliveFlag[0x2a] = false;
  (this->Shockwaves).AliveFlag[0x2b] = false;
  (this->Shockwaves).AliveFlag[0x2c] = false;
  (this->Shockwaves).AliveFlag[0x2d] = false;
  (this->Shockwaves).AliveFlag[0x2e] = false;
  (this->Shockwaves).AliveFlag[0x2f] = false;
  (this->Shockwaves).AliveFlag[0x30] = false;
  (this->Shockwaves).AliveFlag[0x31] = false;
  (this->Shockwaves).AliveFlag[0x32] = false;
  (this->Shockwaves).AliveFlag[0x33] = false;
  (this->Shockwaves).AliveFlag[0x34] = false;
  (this->Shockwaves).AliveFlag[0x35] = false;
  (this->Shockwaves).AliveFlag[0x36] = false;
  (this->Shockwaves).AliveFlag[0x37] = false;
  (this->Shockwaves).AliveFlag[0x38] = false;
  (this->Shockwaves).AliveFlag[0x39] = false;
  (this->Shockwaves).AliveFlag[0x3a] = false;
  (this->Shockwaves).AliveFlag[0x3b] = false;
  (this->Shockwaves).AliveFlag[0x3c] = false;
  (this->Shockwaves).AliveFlag[0x3d] = false;
  (this->Shockwaves).AliveFlag[0x3e] = false;
  (this->Shockwaves).AliveFlag[0x3f] = false;
  (this->Shockwaves).AliveFlag[0x40] = false;
  (this->Shockwaves).AliveFlag[0x41] = false;
  (this->Shockwaves).AliveFlag[0x42] = false;
  (this->Shockwaves).AliveFlag[0x43] = false;
  (this->Shockwaves).AliveFlag[0x44] = false;
  (this->Shockwaves).AliveFlag[0x45] = false;
  (this->Shockwaves).AliveFlag[0x46] = false;
  (this->Shockwaves).AliveFlag[0x47] = false;
  (this->Shockwaves).AliveFlag[0x48] = false;
  (this->Shockwaves).AliveFlag[0x49] = false;
  (this->Shockwaves).AliveFlag[0x4a] = false;
  (this->Shockwaves).AliveFlag[0x4b] = false;
  (this->Shockwaves).AliveFlag[0x4c] = false;
  (this->Shockwaves).AliveFlag[0x4d] = false;
  (this->Shockwaves).AliveFlag[0x4e] = false;
  (this->Shockwaves).AliveFlag[0x4f] = false;
  (this->Shockwaves).AliveFlag[0x50] = false;
  (this->Shockwaves).AliveFlag[0x51] = false;
  (this->Shockwaves).AliveFlag[0x52] = false;
  (this->Shockwaves).AliveFlag[0x53] = false;
  (this->Shockwaves).AliveFlag[0x54] = false;
  (this->Shockwaves).AliveFlag[0x55] = false;
  (this->Shockwaves).AliveFlag[0x56] = false;
  (this->Shockwaves).AliveFlag[0x57] = false;
  (this->Shockwaves).AliveFlag[0x58] = false;
  (this->Shockwaves).AliveFlag[0x59] = false;
  (this->Shockwaves).AliveFlag[0x5a] = false;
  (this->Shockwaves).AliveFlag[0x5b] = false;
  (this->Shockwaves).AliveFlag[0x5c] = false;
  (this->Shockwaves).AliveFlag[0x5d] = false;
  (this->Shockwaves).AliveFlag[0x5e] = false;
  (this->Shockwaves).AliveFlag[0x5f] = false;
  (this->Shockwaves).AliveFlag[0x60] = false;
  (this->Shockwaves).AliveFlag[0x61] = false;
  (this->Shockwaves).AliveFlag[0x62] = false;
  (this->Shockwaves).AliveFlag[99] = false;
  *(undefined4 *)&(this->ScreenFlashColor).X = 0;
  *(undefined4 *)((int)&(this->ScreenFlashColor).X + 4) = 0;
  *(undefined4 *)&(this->ScreenFlashColor).Y = 0;
  *(undefined4 *)((int)&(this->ScreenFlashColor).Y + 4) = 0;
  (this->ScreenFlashColor).Z = 0.0;
  this->ScreenFlashIntensity_J = 0.0;
  *(undefined4 *)&(this->ScreenFlashLocation_km).Data.X = 0;
  *(undefined4 *)((int)&(this->ScreenFlashLocation_km).Data.X + 4) = 0;
  *(undefined4 *)&(this->ScreenFlashLocation_km).Data.Y = 0;
  *(undefined4 *)((int)&(this->ScreenFlashLocation_km).Data.Y + 4) = 0;
  (this->ScreenFlashLocation_km).IsValidData = false;
  (this->ScreenFlashLocation_km).Data.Z = 0.0;
  return;
}





//==== 007e5ca0 GetWorldLights_007e5ca0 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: class util__Darray_L_structWorldLight_G_ __thiscall EffectManager__GetWorldLights(void)const
    */

void __thiscall EffectManager__GetWorldLights(EffectManager *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  Darray_L_struct_WorldLight_G_ *in_stack_00000004;
  undefined4 auStack_74 [4];
  double dStack_64;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  double dStack_4c;
  undefined8 uStack_44;
  double dStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined8 uStack_1c;
  undefined1 uStack_14;
  EffectManager *pEStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = &vftable_168;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 1;
  pEStack_c = this;
  puVar2 = (undefined4 *)port_op_new(0x68);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
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
    *(undefined1 *)(puVar2 + 0x18) = 0;
  }
  iVar5 = 0;
  *(undefined4 **)(in_stack_00000004 + 4) = puVar2;
  if (0 < *(int *)(in_stack_00000004 + 0xc)) {
    iVar3 = 0;
    do {
      uStack_14 = 0;
      puVar6 = (undefined4 *)(*(int *)(in_stack_00000004 + 4) + iVar3);
      auStack_74[0] = 0;
      auStack_74[1] = 0;
      auStack_74[2] = 0;
      auStack_74[3] = 0;
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 0x68;
      dStack_64 = 0.0;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      dStack_4c = 0.0;
      uStack_44 = 0;
      dStack_3c = 0.0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_1c = 0;
      puVar2 = auStack_74;
      for (iVar4 = 0x1a; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar6 = puVar6 + 1;
      }
      this = pEStack_c;
    } while (iVar5 < *(int *)(in_stack_00000004 + 0xc));
  }
  if ((this->ScreenFlashLocation_km).IsValidData != false) {
    auStack_74[0] = *(undefined4 *)&(this->ScreenFlashLocation_km).Data.X;
    auStack_74[1] = *(undefined4 *)((int)&(this->ScreenFlashLocation_km).Data.X + 4);
    auStack_74[2] = *(undefined4 *)&(this->ScreenFlashLocation_km).Data.Y;
    auStack_74[3] = *(undefined4 *)((int)&(this->ScreenFlashLocation_km).Data.Y + 4);
    uStack_14 = 0;
    dStack_64 = (this->ScreenFlashLocation_km).Data.Z;
    uStack_5c = *(undefined4 *)&(this->ScreenFlashColor).X;
    uStack_58 = *(undefined4 *)((int)&(this->ScreenFlashColor).X + 4);
    uStack_54 = *(undefined4 *)&(this->ScreenFlashColor).Y;
    uStack_50 = *(undefined4 *)((int)&(this->ScreenFlashColor).Y + 4);
    dStack_4c = (this->ScreenFlashColor).Z;
    uStack_44 = 0x3f50624dd2f1a9fc;
    dStack_3c = this->ScreenFlashIntensity_J / 0.05;
    iVar5 = *(int *)(in_stack_00000004 + 8);
    pEStack_c = (EffectManager *)(iVar5 + 1);
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_1c = 0;
    util__Darray_struct_WorldLight___SetSize(in_stack_00000004,(int *)&pEStack_c);
    bVar1 = util__Darray_struct_WorldLight___CheckSize(in_stack_00000004,iVar5);
    if (bVar1) {
      puVar2 = auStack_74;
      puVar6 = (undefined4 *)
               (*(int *)(in_stack_00000004 + 4) + *(int *)(in_stack_00000004 + 8) * 0x68 + -0x68);
      for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar6 = puVar6 + 1;
      }
      __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 007e5e30 Last_007e5e30 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual class BeamStreak &  util__Sarray_L_classBeamStreak_C5000_G___Last(void) */

BeamStreak * __thiscall
util__Sarray_class_BeamStreak_5000___Last(Sarray_L_class_BeamStreak_C5000_G_ *this)

{
  return (BeamStreak *)(this + 0x7eee0);
}





//==== 007e5e40 Last_007e5e40 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual class PhotonFlash &  util__Sarray_L_classPhotonFlash_C1000_G___Last(void)
    */

PhotonFlash * __thiscall
util__Sarray_class_PhotonFlash_1000___Last(Sarray_L_class_PhotonFlash_C1000_G_ *this)

{
  return (PhotonFlash *)(this + 0x212c0);
}





//==== 007e5e50 Last_007e5e50 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual class Shockwave &  util__Sarray_L_classShockwave_C100_G___Last(void) */

Shockwave * __thiscall util__Sarray_class_Shockwave_100___Last(Sarray_L_class_Shockwave_C100_G_ *this)

{
  return (Shockwave *)(this + 0x2b58);
}





//==== 007e5e60 Last_007e5e60 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual class Spark &  util__Sarray_L_classSpark_C2000_G___Last(void) */

Spark * __thiscall util__Sarray_class_Spark_2000___Last(Sarray_L_class_Spark_C2000_G_ *this)

{
  return (Spark *)(this + 0x55e58);
}





//==== 007e5e70 LoadGraphicsResources_007e5e70 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall EffectManager__LoadGraphicsResources(void) */

void __thiscall EffectManager__LoadGraphicsResources(EffectManager *this)

{
  VertexBufferObject *pVVar1;
  bool bVar2;
  Str_L_char_G_ SStack_14;
  uint uStack_8;
  
  pVVar1 = &this->SphereObject;
  bVar2 = VertexBufferObjectInterface__IsGenerated((VertexBufferObjectInterface *)pVVar1);
  if (!bVar2) {
    FillTessellatedSphere(1.0,0,pVVar1);
    VertexBufferObjectInterface__Generate((VertexBufferObjectInterface *)pVVar1);
  }
  pVVar1 = &this->HiResSphereObject;
  bVar2 = VertexBufferObjectInterface__IsGenerated((VertexBufferObjectInterface *)pVVar1);
  if (!bVar2) {
    FillTessellatedSphere(1.0,2,pVVar1);
    VertexBufferObjectInterface__Generate((VertexBufferObjectInterface *)pVVar1);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  util__Str_char___Str_char(&SStack_14,"Pre-generated Particle Textures");
  FUN_007e3ff0();
  if (SStack_14.Data != (char *)0x0) {
    port_op_delete(SStack_14.Data);
  }
  return;
}





//==== 007e6670 NewBeamStreak_007e6670 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void  EffectManager__NewBeamStreak(struct util__Vec3_L_double_G_,struct
   util__Vec3_L_double_G_,double,struct util__Vec3_L_double_G_,double) */

void 
EffectManager__NewBeamStreak
          (EffectManager *this,Vec3_L_double_G_ param_1,Vec3_L_double_G_ param_2,double param_3,
          Vec3_L_double_G_ param_4,double param_5)

{
  Vec3_L_double_G_ *pVVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (this->Beams).AddsThisFrame;
  if (iVar3 < 5000) {
    iVar4 = (this->Beams).LastCreatedIndex;
    (this->Beams).AddsThisFrame = iVar3 + 1;
    if (iVar4 < 5000) {
      while( true ) {
        bVar2 = (this->Beams).AliveFlag[iVar4];
        iVar3 = iVar4 + 1;
        (this->Beams).LastCreatedIndex = iVar3;
        if (bVar2 == false) break;
        iVar4 = iVar3;
        if (4999 < iVar3) {
          return;
        }
      }
      (this->Beams).AliveFlag[iVar4] = true;
      if ((iVar4 < 0) || (4999 < iVar4)) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\sarray.inl",0x35,
                        "Index >= 0 && Index < Size",(char *)0x0);
        DebugBreak();
      }
      (this->Beams).Effects.Data[iVar4].Dying = false;
      pVVar1 = &(this->Beams).Effects.Data[iVar4].Start_km;
      *(undefined4 *)&pVVar1->X = param_1.X;
      *(undefined4 *)((int)&pVVar1->X + 4) = param_1.Y;
      *(undefined4 *)&pVVar1->Y = param_1.Y;
      *(undefined4 *)((int)&pVVar1->Y + 4) = param_1.Z;
      (this->Beams).Effects.Data[iVar4].Start_km.Z = param_1.Z;
      pVVar1 = &(this->Beams).Effects.Data[iVar4].End_km;
      *(undefined4 *)&pVVar1->X = param_2.X;
      *(undefined4 *)((int)&pVVar1->X + 4) = param_2.Y;
      *(undefined4 *)&pVVar1->Y = param_2.Y;
      *(undefined4 *)((int)&pVVar1->Y + 4) = param_2.Z;
      (this->Beams).Effects.Data[iVar4].End_km.Z = param_2.Z;
      (this->Beams).Effects.Data[iVar4].Radius_km = param_3 / 1000.0;
      pVVar1 = &(this->Beams).Effects.Data[iVar4].Color;
      *(undefined4 *)&pVVar1->X = param_4.X;
      *(undefined4 *)((int)&pVVar1->X + 4) = param_4.Y;
      *(undefined4 *)&pVVar1->Y = param_4.Y;
      *(undefined4 *)((int)&pVVar1->Y + 4) = param_4.Z;
      (this->Beams).Effects.Data[iVar4].Color.Z = param_4.Z;
      (this->Beams).Effects.Data[iVar4].Brightness = param_5;
    }
  }
  return;
}





//==== 007e6790 NewExplosion ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void  EffectManager__NewExplosion(struct util__PhysicalState_L_struct_util__Vec3_L_double_G__G_,double,double,double,double,class util__Darray_L_structMaterialConstituent_G_
   const &) */

void 
EffectManager__NewExplosion
          (EffectManager *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
          undefined4 param_13,double param_14,undefined8 param_15,undefined4 param_16,
          undefined4 param_17,undefined8 param_18,int *param_19)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined **ppuStack_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  piVar5 = param_19;
  uStack_18 = CONCAT44(0x7e67a2,(undefined4)uStack_18);
  iVar6 = (**(code **)(uintptr_t)(*param_19 + 0xc))();
  if ((0 < iVar6) && (350.0 < (double)CONCAT44(param_17,param_16))) {
    puStack_2c = (undefined4 *)0x0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_18 = 0;
    ppuStack_30 = (undefined **)((uint)ppuStack_30 & 0xffffff00);
    NewFlash(this,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
             param_12,param_13,0x3ff0000000000000,param_15,0,CONCAT44(param_17,param_16),0,0,0,0);
    uStack_18 = CONCAT44(param_17,param_16);
    ppuStack_30 = (undefined **)(&vftable_15);
    puStack_2c = (undefined4 *)0x0;
    uStack_28 = 0;
    uStack_24 = piVar5[3];
    uStack_20 = param_18;
    param_19 = (int *)(**(code **)(uintptr_t)(*piVar5 + 0xc))();
    util__Darray_struct_MaterialConstituent___SetSize
              ((Darray_L_struct_MaterialConstituent_G_ *)&ppuStack_30,(int *)&param_19);
    uVar9 = uStack_24;
    puStack_2c = (undefined4 *)
                 port_op_new(-(uint)((int)((ulonglong)uStack_24 * 0x10 >> 0x20) != 0) |
                                (uint)((ulonglong)uStack_24 * 0x10));
    puVar7 = puStack_2c;
    if (puStack_2c == (undefined4 *)0x0) {
      puStack_2c = (undefined4 *)0x0;
    }
    else {
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar7 = 0;
        *(undefined8 *)(puVar7 + 2) = 0;
        puVar7 = puVar7 + 4;
      }
    }
    puVar7 = (undefined4 *)piVar5[1];
    puVar8 = puStack_2c;
    if (puVar7 != puVar7 + piVar5[2] * 4) {
      do {
        uVar1 = *puVar7;
        uVar2 = puVar7[1];
        uVar3 = puVar7[2];
        uVar4 = puVar7[3];
        puVar7 = puVar7 + 4;
        *puVar8 = uVar1;
        puVar8[1] = uVar2;
        puVar8[2] = uVar3;
        puVar8[3] = uVar4;
        puVar8 = puVar8 + 4;
      } while (puVar7 != (undefined4 *)(piVar5[2] * 0x10 + piVar5[1]));
    }
    EffectHandler_class_Shockwave_100___New_struct_util__PhysicalState_struct_util__Vec3_double____double_class_util__Darray_struct_MaterialConstituent__double_double
              ((EffectHandler_L_class_Shockwave_C100_G_ *)&this->Shockwaves,param_2,param_3,param_4,
               param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,param_13,
               param_14 / 1000.0,(undefined **)0,(void *)0,0,0,0,0);
  }
  return;
}





//==== 007e6ea0 Num_007e6ea0 ====


/* public: virtual int const  util__Sarray_L_classBeamStreak_C5000_G___Num(void)const  */

int __thiscall util__Sarray_class_BeamStreak_5000___Num(Sarray_L_class_BeamStreak_C5000_G_ *this)

{
  return 5000;
}





//==== 007e6eb0 Num_007e6eb0 ====


/* public: virtual int const  util__Sarray_L_classPhotonFlash_C1000_G___Num(void)const  */

int __thiscall util__Sarray_class_PhotonFlash_1000___Num(Sarray_L_class_PhotonFlash_C1000_G_ *this)

{
  return 1000;
}





//==== 007e6ec0 Num_007e6ec0 ====


/* public: virtual int const  util__Sarray_L_classShockwave_C100_G___Num(void)const  */

int __thiscall util__Sarray_class_Shockwave_100___Num(Sarray_L_class_Shockwave_C100_G_ *this)

{
  return 100;
}





//==== 007e6ed0 Num_007e6ed0 ====


/* public: virtual int const  util__Sarray_L_classSpark_C2000_G___Num(void)const  */

int __thiscall util__Sarray_class_Spark_2000___Num(Sarray_L_class_Spark_C2000_G_ *this)

{
  return 2000;
}





//==== 007e6ee0 OriginShift_007e6ee0 ====


/* WARNING: int propagation algorithm not settling */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void  EffectManager__OriginShift(struct util__PhysicalState_L_struct_util__Vec3_L_double_G__G_) */

void 
EffectManager__OriginShift
          (EffectManager *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,double param_6,double param_7,double param_8,double param_9)

{
  undefined8 stack0xfffffffc;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  uint uVar4;
  double *pdVar5;
  int iVar6;
  
  uVar4 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar6 = 0;
  pdVar5 = &(this->Flashes).Effects.Data[0].State.Velocity.Z;
  do {
    if ((this->Flashes).AliveFlag[iVar6] != false) {
      if ((iVar6 < 0) || (999 < iVar6)) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\sarray.inl",0x35,
                        "Index >= 0 && Index < Size",(char *)0x0);
        DebugBreak();
      }
      pdVar5[-5] = pdVar5[-5] + (double)CONCAT44(param_3,param_2);
      pdVar5[-4] = (double)CONCAT44(param_5,param_4) + pdVar5[-4];
      pdVar5[-3] = pdVar5[-3] + param_6;
      ((Vec3_L_double_G_ *)(pdVar5 + -2))->X = ((Vec3_L_double_G_ *)(pdVar5 + -2))->X + param_7;
      pdVar5[-1] = pdVar5[-1] + param_8;
      *pdVar5 = *pdVar5 + param_9;
    }
    iVar6 = iVar6 + 1;
    pdVar5 = pdVar5 + 0x11;
  } while (iVar6 < 1000);
  iVar6 = 0;
  pdVar5 = &(this->Beams).Effects.Data[0].End_km.Z;
  do {
    if ((this->Beams).AliveFlag[iVar6] != false) {
      if ((iVar6 < 0) || (4999 < iVar6)) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\sarray.inl",0x35,
                        "Index >= 0 && Index < Size",(char *)0x0);
        DebugBreak();
      }
      dVar3 = pdVar5[-4] + (double)CONCAT44(param_5,param_4);
      (*(uint32_t*)((char*)&(auVar1)+8)) = SUB84(dVar3,0);
      (*(uint64_t*)&(auVar1)) = pdVar5[-5] + (double)CONCAT44(param_3,param_2);
      (*(uint32_t *)((char *)&(auVar1) + 12)) = (int)((ulonglong)dVar3 >> 0x20);
(*(uint64_t *)(pdVar5 + -5)) = (*(uint64_t *)&(auVar1));
(*(uint64_t *)((char *)(pdVar5 + -5) + 8)) = (*(uint64_t *)((char *)&(auVar1) + 8));
      pdVar5[-3] = param_6 + pdVar5[-3];
      dVar3 = pdVar5[-1] + (double)CONCAT44(param_5,param_4);
      (*(uint32_t*)((char*)&(auVar2)+8)) = SUB84(dVar3,0);
      (*(uint64_t*)&(auVar2)) = ((Vec3_L_double_G_ *)(pdVar5 + -2))->X + (double)CONCAT44(param_3,param_2);
      (*(uint32_t *)((char *)&(auVar2) + 12)) = (int)((ulonglong)dVar3 >> 0x20);
      ((Vec3_L_double_G_ *)(pdVar5 + -2))->X = (double)(*(uint64_t*)&(auVar2));
      ((Vec3_L_double_G_ *)(pdVar5 + -2))->Y = (double)(*(uint64_t*)((char*)&(auVar2)+8));
      *pdVar5 = param_6 + *pdVar5;
    }
    iVar6 = iVar6 + 1;
    pdVar5 = pdVar5 + 0xd;
  } while (iVar6 < 5000);
  pdVar5 = &(this->Sparks).Effects.Data[0].State.Velocity.Z;
  iVar6 = 0;
  do {
    if ((this->Sparks).AliveFlag[iVar6] != false) {
      if ((iVar6 < 0) || (1999 < iVar6)) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\sarray.inl",0x35,
                        "Index >= 0 && Index < Size",(char *)0x0);
        DebugBreak();
      }
      pdVar5[-5] = (double)CONCAT44(param_3,param_2) + pdVar5[-5];
      pdVar5[-4] = pdVar5[-4] + (double)CONCAT44(param_5,param_4);
      pdVar5[-3] = pdVar5[-3] + param_6;
      ((Vec3_L_double_G_ *)(pdVar5 + -2))->X = param_7 + ((Vec3_L_double_G_ *)(pdVar5 + -2))->X;
      pdVar5[-1] = pdVar5[-1] + param_8;
      *pdVar5 = *pdVar5 + param_9;
      pdVar5[1] = pdVar5[1] + (double)CONCAT44(param_3,param_2);
      pdVar5[2] = pdVar5[2] + (double)CONCAT44(param_5,param_4);
      pdVar5[3] = pdVar5[3] + param_6;
      pdVar5[4] = pdVar5[4] + param_7;
      pdVar5[5] = param_8 + pdVar5[5];
      pdVar5[6] = pdVar5[6] + param_9;
    }
    iVar6 = iVar6 + 1;
    pdVar5 = pdVar5 + 0x16;
  } while (iVar6 < 2000);
  iVar6 = 0;
  pdVar5 = &(this->Shockwaves).Effects.Data[0].State.Velocity.Z;
  do {
    if ((this->Shockwaves).AliveFlag[iVar6] != false) {
      if ((iVar6 < 0) || (99 < iVar6)) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\sarray.inl",0x35,
                        "Index >= 0 && Index < Size",(char *)0x0);
        DebugBreak();
      }
      pdVar5[-5] = pdVar5[-5] + (double)CONCAT44(param_3,param_2);
      pdVar5[-4] = (double)CONCAT44(param_5,param_4) + pdVar5[-4];
      pdVar5[-3] = pdVar5[-3] + param_6;
      ((Vec3_L_double_G_ *)(pdVar5 + -2))->X = ((Vec3_L_double_G_ *)(pdVar5 + -2))->X + param_7;
      pdVar5[-1] = pdVar5[-1] + param_8;
      *pdVar5 = *pdVar5 + param_9;
    }
    iVar6 = iVar6 + 1;
    pdVar5 = pdVar5 + 0xe;
  } while (iVar6 < 100);
  __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 007e7230 PostTick_007e7230 ====


/* WARNING: int propagation algorithm not settling */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall EffectManager__PostTick(double) */

void __thiscall EffectManager__PostTick(EffectManager *this,double param_1)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  bool *pbVar7;
  double *pdVar8;
  Shockwave *this_00;
  int iVar9;
  double *pdVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_8;
  
  iVar9 = 0;
  pbVar7 = &(this->Flashes).Effects.Data[0].Startup;
  do {
    if ((this->Flashes).AliveFlag[iVar9] != false) {
      if ((iVar9 < 0) || (999 < iVar9)) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\sarray.inl",0x35,
                        "Index >= 0 && Index < Size",(char *)0x0);
        DebugBreak();
      }
      if (*pbVar7 == false) {
        **(bool **)(pbVar7 + -0x54) = false;
      }
      else {
        *pbVar7 = false;
      }
    }
    iVar9 = iVar9 + 1;
    pbVar7 = pbVar7 + 0x88;
  } while (iVar9 < 1000);
  (this->Flashes).AddsThisFrame = 0;
  pbVar7 = &(this->Beams).Effects.Data[0].Dying;
  (this->Flashes).LastCreatedIndex = 0;
  iVar9 = 0;
  do {
    if ((this->Beams).AliveFlag[iVar9] != false) {
      if ((iVar9 < 0) || (4999 < iVar9)) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\sarray.inl",0x35,
                        "Index >= 0 && Index < Size",(char *)0x0);
        DebugBreak();
      }
      if (*pbVar7 == false) {
        *pbVar7 = true;
      }
      else {
        **(bool **)(pbVar7 + -4) = false;
      }
    }
    iVar9 = iVar9 + 1;
    pbVar7 = pbVar7 + 0x68;
  } while (iVar9 < 5000);
  (this->Beams).AddsThisFrame = 0;
  (this->Beams).LastCreatedIndex = 0;
  pdVar10 = &(this->Sparks).Effects.Data[0].State.Velocity.Z;
  iStack_8 = 0;
  do {
    if ((this->Sparks).AliveFlag[iStack_8] != false) {
      if ((iStack_8 < 0) || (1999 < iStack_8)) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\sarray.inl",0x35,
                        "Index >= 0 && Index < Size",(char *)0x0);
        DebugBreak();
      }
      *(undefined4 *)(pdVar10 + 1) = *(undefined4 *)(pdVar10 + -5);
      *(undefined4 *)((int)pdVar10 + 0xc) = *(undefined4 *)((int)pdVar10 + -0x24);
      *(undefined4 *)(pdVar10 + 2) = *(undefined4 *)(pdVar10 + -4);
      *(undefined4 *)((int)pdVar10 + 0x14) = *(undefined4 *)((int)pdVar10 + -0x1c);
      uVar2 = *(undefined4 *)(pdVar10 + -2);
      *(undefined4 *)(pdVar10 + 3) = *(undefined4 *)(pdVar10 + -3);
      *(undefined4 *)((int)pdVar10 + 0x1c) = *(undefined4 *)((int)pdVar10 + -0x14);
      *(undefined4 *)(pdVar10 + 4) = uVar2;
      *(undefined4 *)((int)pdVar10 + 0x24) = *(undefined4 *)((int)pdVar10 + -0xc);
      *(undefined4 *)(pdVar10 + 5) = *(undefined4 *)(pdVar10 + -1);
      *(undefined4 *)((int)pdVar10 + 0x2c) = *(undefined4 *)((int)pdVar10 + -4);
      *(undefined4 *)(pdVar10 + 6) = *(undefined4 *)pdVar10;
      *(undefined4 *)((int)pdVar10 + 0x34) = *(undefined4 *)((int)pdVar10 + 4);
      dVar11 = pdVar10[-1] * param_1 + pdVar10[-4];
      uVar2 = *(undefined4 *)(pdVar10 + -2);
      uVar3 = *(undefined4 *)((int)pdVar10 + -0xc);
      uVar4 = *(undefined4 *)(pdVar10 + -1);
      uVar5 = *(undefined4 *)((int)pdVar10 + -4);
      dVar12 = *pdVar10;
      (*(uint32_t*)((char*)&(auVar1)+8)) = SUB84(dVar11,0);
      (*(uint64_t*)&(auVar1)) = param_1 * ((Vec3_L_double_G_ *)(pdVar10 + -2))->X + pdVar10[-5];
      (*(uint32_t *)((char *)&(auVar1) + 12)) = (int)((ulonglong)dVar11 >> 0x20);
(*(uint64_t *)(pdVar10 + -5)) = (*(uint64_t *)&(auVar1));
(*(uint64_t *)((char *)(pdVar10 + -5) + 8)) = (*(uint64_t *)((char *)&(auVar1) + 8));
      pdVar10[-3] = param_1 * *pdVar10 + pdVar10[-3];
      *(undefined4 *)(pdVar10 + -2) = uVar2;
      *(undefined4 *)((int)pdVar10 + -0xc) = uVar3;
      uStack_28 = SUB84(dVar12,0);
      uStack_24 = (undefined4)((ulonglong)dVar12 >> 0x20);
      *(undefined4 *)(pdVar10 + -1) = uVar4;
      *(undefined4 *)((int)pdVar10 + -4) = uVar5;
      *(undefined4 *)pdVar10 = uStack_28;
      *(undefined4 *)((int)pdVar10 + 4) = uStack_24;
      dVar12 = pdVar10[-7];
      pdVar10[-7] = dVar12 - param_1;
      if (0.0 < dVar12 - param_1) {
        dVar12 = util__Abs(pdVar10 + 0xb);
        pdVar8 = pdVar10 + 10;
        dVar11 = util__Abs(pdVar8);
        dVar13 = util__Abs(pdVar10 + 0xc);
        if (dVar12 <= dVar11) {
          dVar12 = util__Abs(pdVar8);
          cVar6 = '\0';
          if (dVar12 < dVar13) {
            cVar6 = '\x02';
          }
        }
        else {
          dVar12 = util__Abs(pdVar10 + 0xb);
          cVar6 = (dVar12 < dVar13) + '\x01';
        }
        if (cVar6 != '\0') {
          if (cVar6 == '\x01') {
            pdVar8 = pdVar10 + 0xb;
          }
          else if (cVar6 == '\x02') {
            pdVar8 = pdVar10 + 0xc;
          }
        }
        if (0.1 < *pdVar8) goto LAB_007e7485;
      }
      **(undefined1 **)((int)pdVar10 + -0x44) = 0;
    }
LAB_007e7485:
    iStack_8 = iStack_8 + 1;
    pdVar10 = pdVar10 + 0x16;
    if (1999 < iStack_8) {
      (this->Sparks).AddsThisFrame = 0;
      this_00 = (this->Shockwaves).Effects.Data;
      (this->Sparks).LastCreatedIndex = 0;
      iVar9 = 0;
      do {
        if ((this->Shockwaves).AliveFlag[iVar9] != false) {
          if ((iVar9 < 0) || (99 < iVar9)) {
            util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\sarray.inl",
                            0x35,"Index >= 0 && Index < Size",(char *)0x0);
            DebugBreak();
          }
          Shockwave__PostTick(this_00,param_1);
        }
        iVar9 = iVar9 + 1;
        this_00 = this_00 + 1;
      } while (iVar9 < 100);
      (this->Shockwaves).AddsThisFrame = 0;
      (this->Shockwaves).LastCreatedIndex = 0;
      if ((this->ScreenIsFlashedOut != false) &&
         (dVar12 = this->ScreenFlashIntensity_J * 0.25, this->ScreenFlashIntensity_J = dVar12,
         dVar12 <= 100000000.0)) {
        this->ScreenIsFlashedOut = false;
      }
      return;
    }
  } while( true );
}





//==== 007e7560 PostTick_007e7560 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall Shockwave__PostTick(double) */

void __thiscall Shockwave__PostTick(Shockwave *this,double param_1)

{
  float *pfVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  Vec4_L_float_G_ *pVVar5;
  int iVar6;
  Vec4_L_float_G_ aVStack_60 [2];
  double dStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  float fStack_1c;
  float *pfStack_18;
  float *pfStack_14;
  float fStack_c;
  float fStack_8;
  
  dVar2 = (this->State).Velocity.Y;
  dVar3 = (this->State).Position.Y;
  dStack_40 = (this->State).Velocity.Z * param_1 + (this->State).Position.Z;
  uStack_38 = *(undefined4 *)&(this->State).Velocity.X;
  uStack_34 = *(undefined4 *)((int)&(this->State).Velocity.X + 4);
  uStack_30 = *(undefined4 *)&(this->State).Velocity.Y;
  uStack_2c = *(undefined4 *)((int)&(this->State).Velocity.Y + 4);
  dVar4 = (this->State).Velocity.Z;
  (this->State).Position.X = (this->State).Velocity.X * param_1 + (this->State).Position.X;
  (this->State).Position.Y = dVar2 * param_1 + dVar3;
  (this->State).Position.Z = dStack_40;
  *(undefined4 *)&(this->State).Velocity.X = uStack_38;
  *(undefined4 *)((int)&(this->State).Velocity.X + 4) = uStack_34;
  (*(uint32_t*)&(uStack_28)) = SUB84(dVar4,0);
  (*(uint32_t*)((char*)&(uStack_28)+4)) = (undefined4)((ulonglong)dVar4 >> 0x20);
  *(undefined4 *)&(this->State).Velocity.Y = uStack_30;
  *(undefined4 *)((int)&(this->State).Velocity.Y + 4) = uStack_2c;
  *(undefined4 *)&(this->State).Velocity.Z = (undefined4)uStack_28;
  *(undefined4 *)((int)&(this->State).Velocity.Z + 4) = (*(uint32_t*)((char*)&(uStack_28)+4));
  uStack_28 = dVar4;
  pVVar5 = (Vec4_L_float_G_ *)(uintptr_t)(GetColor(this,aVStack_60));
  pfVar1 = &pVVar5->Y;
  fStack_8 = util__Abs(pfVar1);
  fStack_c = util__Abs(&pVVar5->X);
  pfStack_14 = &pVVar5->Z;
  fStack_1c = util__Abs(pfStack_14);
  pfStack_18 = &pVVar5->W;
  if (fStack_8 <= fStack_c) {
    fStack_c = util__Abs(&pVVar5->X);
    fStack_8 = util__Abs(pfStack_18);
    if (fStack_1c <= fStack_c) {
      fStack_c = util__Abs(&pVVar5->X);
      iVar6 = 0;
      if (fStack_c < fStack_8) {
        iVar6 = 3;
      }
    }
    else {
      fStack_c = util__Abs(pfStack_14);
      iVar6 = (fStack_c < fStack_8) + 2;
    }
  }
  else {
    fStack_c = util__Abs(pfVar1);
    fStack_8 = util__Abs(pfStack_18);
    if (fStack_1c <= fStack_c) {
      fStack_c = util__Abs(pfVar1);
      iVar6 = (uint)(fStack_c < fStack_8) * 2 + 1;
    }
    else {
      fStack_c = util__Abs(pfStack_14);
      iVar6 = (fStack_c < fStack_8) + 2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x007e76d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_007e77b0)[iVar6])();
  return;
}





//==== 007e77c0 PreTick_007e77c0 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall EffectManager__PreTick(double) */

void __thiscall EffectManager__PreTick(EffectManager *this,double param_1)

{
  if ((this->ScreenFlashLocation_km).IsValidData != false) {
    (this->ScreenFlashLocation_km).IsValidData = false;
    *(undefined4 *)&(this->ScreenFlashLocation_km).Data.X = 0;
    *(undefined4 *)((int)&(this->ScreenFlashLocation_km).Data.X + 4) = 0;
    *(undefined4 *)&(this->ScreenFlashLocation_km).Data.Y = 0;
    *(undefined4 *)((int)&(this->ScreenFlashLocation_km).Data.Y + 4) = 0;
    (this->ScreenFlashLocation_km).Data.Z = 0.0;
  }
  return;
}





//==== 007e77f0 Render_007e77f0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall EffectManager__Render(void)const  */

void __thiscall EffectManager__Render(EffectManager *this)

{
  undefined8 stack0xfffffffc;
  SimpleShader *pSVar1;
  CameraManager *local_2c;
  Vec4_L_double_G_ local_28;
  CullStack local_f;
  DepthStack local_e;
  ShaderStack local_d;
  CullStack local_c;
  BlendStack local_b;
  DepthStack local_a;
  DrawStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  Graphics__CullStack__CullStack(&local_f,CullMode__Disabled);
  Graphics__DepthStack__DepthStack(&local_e,DepthMode__ReadWrite);
  pSVar1 = SimpleShader__GetStatic();
  Graphics__ShaderStack__ShaderStack(&local_d,(Shader *)pSVar1);
  local_9.NullDraw = true;
  pSVar1 = SimpleShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0x4c))(&local_9);
  local_2c = Manager__GetCameras(this->Parent);
  local_9.NullDraw = true;
  pSVar1 = SimpleShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0x54))(&local_9);
  FUN_007e4870(&local_2c);
  Graphics__CullStack__CullStack(&local_c,CullMode__Disabled);
  Graphics__BlendStack__BlendStack(&local_b,BlendMode__Disabled);
  Graphics__DepthStack__DepthStack(&local_a,DepthMode__Read);
  local_9.NullDraw = true;
  pSVar1 = SimpleShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0x54))(&local_9);
  Graphics__DrawStack__DrawStack(&local_9,7);
  CameraManager__GetCameraPos(local_2c,&local_28);
  FUN_007e4660(&local_28,this);
  FUN_007e4450(&local_28,this);
  Graphics__DrawStack___DrawStack(&local_9);
  DepthStack__dtor(&local_a);
  BlendStack__dtor(&local_b);
  CullStack__dtor(&local_c);
  Graphics__ShaderStack___ShaderStack(&local_d);
  DepthStack__dtor(&local_e);
  CullStack__dtor(&local_f);
  return;
}

//==== 007e7920 RenderDiscFlash ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: static void __cdecl EffectManager__RenderDiscFlash(class CameraManager *,double,struct
   util__Vec3_L_double_G_ const &,struct util__Vec3_L_double_G_ const &) */

void __cdecl
EffectManager__RenderDiscFlash
          (CameraManager *param_1,double param_2,Vec3_L_double_G_ *param_3,Vec3_L_double_G_ *param_4)

{
  undefined8 stack0xfffffffc;
  Vec4_L_double_G_ VVar1;
  Vec4_L_double_G_ VVar2;
  Vec4_L_double_G_ VVar3;
  Quaternion_L_double_G_ *pQVar4;
  undefined4 in_stack_00000008;
  Quaternion_L_double_G_ QStack_2c;
  TransformStack TStack_9;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  Graphics__TransformStack__TransformStack(&TStack_9,Style__Default);
  VVar2.W = (int)((ulonglong)*(undefined8 *)(*(uint32_t *)(uintptr_t)*(uint32_t *)((char *)&(param_2)+4) + 0x10) >> 0x20);
  (*(uint32_t *)((char *)&(VVar2) + 0)) = *(uint32_t *)(uintptr_t)*(uint32_t *)((char *)&(param_2)+4);
  Graphics__Translate(VVar2);
  VVar1.Z = 0;
  VVar1.X = 0.0;
  VVar1.Y = 0.0;
  VVar1.W = 0xbff00000;
  VVar3.W = (int)((ulonglong)param_3->Z >> 0x20);
  (*(uint32_t *)((char *)&(VVar3) + 0)) = (uint32_t)(uintptr_t)(*(undefined1 (*) [20])param_3);
  pQVar4 = (Quaternion_L_double_G_ *)
           util__Quaternion_double___Quaternion_double(&QStack_2c,VVar1,VVar3);
  Graphics__Rotate(*pQVar4);
  DrawCircle((double)CONCAT44((*(uint32_t*)&(param_2)),in_stack_00000008),0x10,true,0.0);
  Graphics__TransformStack___TransformStack(&TStack_9);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 007e79f0 RenderFlash ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: static void __cdecl EffectManager__RenderFlash(class CameraManager *,struct
   util__Vec3_L_double_G_ const &,bool) */

void __cdecl EffectManager__RenderFlash(CameraManager *param_1,Vec3_L_double_G_ *param_2,bool param_3)

{
  undefined8 stack0xfffffffc;
  Vec4_L_double_G_ VVar1;
  Vec4_L_double_G_ VVar2;
  Quaternion_L_double_G_ *pQVar3;
  double dVar4;
  int iVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  Quaternion_L_double_G_ QStack_2c;
  TransformStack TStack_9;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  Graphics__TransformStack__TransformStack(&TStack_9,Style__Default);
  VVar2.W = (int)((ulonglong)param_2->Z >> 0x20);
  (*(uint32_t *)((char *)&(VVar2) + 0)) = (uint32_t)(uintptr_t)(*(undefined1 (*) [20])param_2);
  Graphics__Translate(VVar2);
  pQVar3 = (Quaternion_L_double_G_ *)(uintptr_t)(CameraManager__GetIconBillboardOrientation(param_1,&QStack_2c));
  Graphics__Rotate(*pQVar3);
  if (param_3) {
    dVar4 = 5.0;
  }
  else {
    dVar4 = 3.0;
  }
  uVar7 = 0;
  uVar8 = 0;
  bVar6 = true;
  iVar5 = 0xc;
  VVar1.W = (int)((ulonglong)param_2->Z >> 0x20);
  (*(uint32_t *)((char *)&(VVar1) + 0)) = (uint32_t)(uintptr_t)(*(undefined1 (*) [20])param_2);
  dVar4 = CameraManager__GetBillboardRadius(param_1,(*(Vec4_L_double_G_ *)&(VVar1)),dVar4);
  DrawCircle(dVar4,iVar5,bVar6,(double)CONCAT44(uVar8,uVar7));
  Graphics__TransformStack___TransformStack(&TStack_9);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 007e7ad0 RenderScreenEffects ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall EffectManager__RenderScreenEffects(void)const  */

void __thiscall EffectManager__RenderScreenEffects(EffectManager *this)

{
  undefined8 stack0xfffffffc;
  Vec4_L_int_G_ VVar1;
  BlendSet BVar2;
  Vec4_L_float_G_ VVar3;
  BlendSet BVar4;
  GameManager *pGVar5;
  SimpleShader *pSVar6;
  double dVar7;
  undefined1 local_b;
  ShaderStack local_a;
  BlendStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (this->ScreenIsFlashedOut != false) {
    pGVar5 = Manager__GetParent(this->Parent);
    if (pGVar5->DebugDraw == false) {
      pSVar6 = SimpleShader__GetStatic();
      Graphics__ShaderStack__ShaderStack(&local_a,(Shader *)pSVar6);
      local_b = 1;
      pSVar6 = SimpleShader__GetStatic();
      (**(code **)(pSVar6->_pad_0x0_0 + 0x4c))(&local_b);
      local_b = 0;
      pSVar6 = SimpleShader__GetStatic();
      (**(code **)(pSVar6->_pad_0x0_0 + 0x50))(&local_b);
      BVar2.Equation = 0x8006;
      BVar2.Source = 0x302;
      BVar2.Dest = 1;
      BVar4.Equation = 0x8006;
      BVar4.Source = 1;
      BVar4.Dest = 1;
      Graphics__BlendStack__BlendStack(&local_9,BVar2,BVar4);
      dVar7 = (this->ScreenFlashIntensity_J - 100000000.0) / 10000000000.0;
      if (dVar7 <= 0.0) {
        dVar7 = 0.0;
      }
      if (1.0 <= dVar7) {
        dVar7 = 1.0;
      }
      VVar3.Y = (float)(this->ScreenFlashColor).Y;
      VVar3.X = (float)(this->ScreenFlashColor).X;
      VVar3.Z = (float)(this->ScreenFlashColor).Z;
      glColorLuminance((*(Vec3_L_float_G_ *)&(VVar3)),(float)dVar7);
      VVar1.Y = *(unsigned int *)((char *)&(Graphics__GlobalState.ViewMatrix.Data[0xf]) + 4);
      VVar1.X = *(unsigned int *)(&(Graphics__GlobalState.ViewMatrix.Data[0xf]));
      RenderFullscreenQuad((*(Vec3_L_int_G_ *)&(VVar1)));
      BlendStack__dtor(&local_9);
      Graphics__ShaderStack___ShaderStack(&local_a);
    }
  }
  return;
}

//==== 007e7c20 RenderStandaloneDiscFlash ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: static void __cdecl EffectManager__RenderStandaloneDiscFlash(class CameraManager
   *,double,struct util__Vec3_L_double_G_ const &,struct util__Vec3_L_double_G_ const &,struct
   util__Vec3_L_double_G_) */

void __cdecl
EffectManager__RenderStandaloneDiscFlash
          (CameraManager *param_1,double param_2,Vec3_L_double_G_ *param_3,Vec3_L_double_G_ *param_4,
          Vec3_L_double_G_ param_5)

{
  undefined8 stack0xfffffffc;
  Vec4_L_float_G_ VVar1;
  SimpleShader *pSVar2;
  Vec3_L_double_G_ *pVVar3;
  undefined1 local_c;
  CullStack local_b;
  DepthStack local_a;
  ShaderStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  Graphics__CullStack__CullStack(&local_b,CullMode__Disabled);
  Graphics__DepthStack__DepthStack(&local_a,DepthMode__ReadWrite);
  pSVar2 = SimpleShader__GetStatic();
  Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pSVar2);
  local_c = 1;
  pSVar2 = SimpleShader__GetStatic();
  (**(code **)(pSVar2->_pad_0x0_0 + 0x4c))(&local_c);
  local_c = 1;
  pSVar2 = SimpleShader__GetStatic();
  pVVar3 = (Vec3_L_double_G_ *)&local_c;
  (**(code **)(pSVar2->_pad_0x0_0 + 0x54))();
  VVar1.Y = (float)(double)(*(uint64_t*)((char*)&(param_5)+4));
  VVar1.X = (float)(double)CONCAT44(param_5.X,param_4);
  VVar1.Z = (float)(double)(*(uint64_t *)((char *)&(param_5) + 12));
  glColorLuminance((*(Vec3_L_float_G_ *)&(VVar1)),1.0);
  RenderDiscFlash(param_1,param_2,param_3,pVVar3);
  Graphics__ShaderStack___ShaderStack(&local_9);
  DepthStack__dtor(&local_a);
  CullStack__dtor(&local_b);
  return;
}

//==== 007e7d10 RenderStandaloneFlash ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: static void __cdecl EffectManager__RenderStandaloneFlash(class CameraManager *,struct
   util__Vec3_L_double_G_ const &,struct util__Vec3_L_double_G_,bool) */

void __cdecl
EffectManager__RenderStandaloneFlash
          (CameraManager *param_1,Vec3_L_double_G_ *param_2,Vec3_L_double_G_ param_3,bool param_4)

{
  undefined8 stack0xfffffffc;
  Vec4_L_float_G_ VVar1;
  SimpleShader *pSVar2;
  undefined1 local_c;
  CullStack local_b;
  DepthStack local_a;
  ShaderStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  Graphics__CullStack__CullStack(&local_b,CullMode__Disabled);
  Graphics__DepthStack__DepthStack(&local_a,DepthMode__ReadWrite);
  pSVar2 = SimpleShader__GetStatic();
  Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pSVar2);
  local_c = 1;
  pSVar2 = SimpleShader__GetStatic();
  (**(code **)(pSVar2->_pad_0x0_0 + 0x4c))(&local_c);
  local_c = 1;
  pSVar2 = SimpleShader__GetStatic();
  (**(code **)(pSVar2->_pad_0x0_0 + 0x54))(&local_c);
  VVar1.Y = (float)param_3.Y;
  VVar1.X = (float)param_3.X;
  VVar1.Z = (float)param_3.Z;
  glColorLuminance((*(Vec3_L_float_G_ *)&(VVar1)),1.0);
  RenderFlash(param_1,param_2,param_4);
  Graphics__ShaderStack___ShaderStack(&local_9);
  DepthStack__dtor(&local_a);
  CullStack__dtor(&local_b);
  return;
}

//==== 007e7df0 RenderTransparent_007e7df0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall EffectManager__RenderTransparent(void)const  */

void __thiscall EffectManager__RenderTransparent(EffectManager *this)

{
  undefined8 stack0xfffffffc;
  double dVar1;
  double dVar2;
  BlendSet BVar3;
  Vec4_L_double_G_ VVar4;
  Vec3_L_float_G_ VVar5;
  BlendSet BVar6;
  EffectManager *pEVar7;
  ShockwaveShader *pSVar8;
  PreferencesBase *pPVar9;
  LineShader *pLVar10;
  double *pdVar11;
  int iVar12;
  Vec4_L_float_G_ local_40;
  CameraManager *local_30;
  EffectManager *local_2c;
  Vec4_L_double_G_ local_28;
  CullStack local_e;
  CullStack local_d;
  DrawStack local_c;
  ShaderStack local_b;
  BlendStack local_a;
  TransformStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_2c = this;
  Graphics__CullStack__CullStack(&local_e,CullMode__Disabled);
  local_30 = Manager__GetCameras(this->Parent);
  Graphics__DepthStack__DepthStack((DepthStack *)&local_c,DepthMode__Read);
  pSVar8 = ShockwaveShader__GetStatic();
  Graphics__ShaderStack__ShaderStack(&local_b,(Shader *)pSVar8);
  BVar3.Equation = 0x8008;
  BVar3.Source = 1;
  BVar3.Dest = 1;
  BVar6.Equation = 0x8008;
  BVar6.Source = 1;
  BVar6.Dest = 1;
  Graphics__BlendStack__BlendStack(&local_a,BVar3,BVar6);
  iVar12 = 0;
  pdVar11 = &(this->Shockwaves).Effects.Data[0].Radius_km;
  do {
    if ((this->Shockwaves).AliveFlag[iVar12] != false) {
      if ((iVar12 < 0) || (99 < iVar12)) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\sarray.inl",0x2e,
                        "Index >= 0 && Index < Size",(char *)0x0);
        DebugBreak();
      }
      Shockwave__GetColor((Shockwave *)(pdVar11 + -0xb),&local_40);
      VVar5.Z = local_40.Z;
      VVar5.X = local_40.X;
      VVar5.Y = local_40.Y;
      glColorLuminance(VVar5,local_40.W);
      if ((iVar12 < 0) || (99 < iVar12)) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\sarray.inl",0x2e,
                        "Index >= 0 && Index < Size",(char *)0x0);
        DebugBreak();
      }
      if ((iVar12 < 0) || (99 < iVar12)) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\sarray.inl",0x2e,
                        "Index >= 0 && Index < Size",(char *)0x0);
        DebugBreak();
      }
      if ((iVar12 < 0) || (99 < iVar12)) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\sarray.inl",0x2e,
                        "Index >= 0 && Index < Size",(char *)0x0);
        DebugBreak();
      }
      dVar1 = *pdVar11;
      if ((iVar12 < 0) || (99 < iVar12)) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\sarray.inl",0x2e,
                        "Index >= 0 && Index < Size",(char *)0x0);
        DebugBreak();
      }
      if ((iVar12 < 0) || (99 < iVar12)) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\sarray.inl",0x2e,
                        "Index >= 0 && Index < Size",(char *)0x0);
        DebugBreak();
      }
      local_28.Y =
           *(undefined4 *)&(((PhysicalState_L_util__Vec3_L_double_G___G_ *)(pdVar11 + -10))->Position).X;
      local_28.Z = *(undefined4 *)((int)pdVar11 + -0x4c);
      local_28.Z = *(undefined4 *)(pdVar11 + -9);
      local_28.W = *(undefined4 *)((int)pdVar11 + -0x44);
      dVar2 = pdVar11[-8];
      Graphics__TransformStack__TransformStack(&local_9,Style__Default);
      VVar4.Y = local_28.Z;
      VVar4.X = local_28.Y;
      VVar4.Y = local_28.Z;
      VVar4.Z = local_28.W;
      VVar4.Z = SUB84(dVar2,0);
      VVar4.W = (int)((ulonglong)dVar2 >> 0x20);
      Graphics__Translate(VVar4);
      Graphics__Scale(dVar1);
      VertexBufferObjectInterface__Render
                ((VertexBufferObjectInterface *)&local_2c->HiResSphereObject);
      Graphics__TransformStack___TransformStack(&local_9);
      this = local_2c;
    }
    iVar12 = iVar12 + 1;
    pdVar11 = pdVar11 + 0xe;
  } while (iVar12 < 100);
  BlendStack__dtor(&local_a);
  Graphics__ShaderStack___ShaderStack(&local_b);
  DepthStack__dtor((DepthStack *)&local_c);
  pEVar7 = local_2c;
  pPVar9 = Manager__GetOptions(local_2c->Parent);
  iVar12 = (**(code **)(pPVar9->_pad_0x0_0 + 0x90))();
  Graphics__CullStack__CullStack(&local_d,CullMode__Disabled);
  Graphics__BlendStack__BlendStack((BlendStack *)&local_9,DefaultWithoutAlpha);
  Graphics__DepthStack__DepthStack((DepthStack *)&local_a,DepthMode__Read);
  pLVar10 = LineShader__GetStatic();
  Graphics__ShaderStack__ShaderStack(&local_b,(Shader *)pLVar10);
  if (0 < iVar12) {
    glScaleColor(100.0);
  }
  CameraManager__GetCameraPos(local_30,&local_28);
  Graphics__DrawStack__DrawStack(&local_c,7);
  FUN_007e4b00(&local_28,pEVar7);
  FUN_007e4d10(&local_28,pEVar7);
  Graphics__DrawStack___DrawStack(&local_c);
  glScaleColor(1.0);
  Graphics__ShaderStack___ShaderStack(&local_b);
  DepthStack__dtor((DepthStack *)&local_a);
  BlendStack__dtor((BlendStack *)&local_9);
  CullStack__dtor(&local_d);
  CullStack__dtor(&local_e);
  return;
}

//==== 007e8110 SetAll_007e8110 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void  util__Sarray_L_classBeamStreak_C5000_G___SetAll(class BeamStreak
   const &) */

void __thiscall
util__Sarray_class_BeamStreak_5000___SetAll(Sarray_L_class_BeamStreak_C5000_G_ *this,BeamStreak *param_1)

{
  Sarray_L_class_BeamStreak_C5000_G_ *pSVar1;
  int iVar2;
  int iVar3;
  BeamStreak *pBVar4;
  Sarray_L_class_BeamStreak_C5000_G_ *pSVar5;
  
  iVar3 = 5000;
  pSVar1 = this + 8;
  do {
    pBVar4 = param_1;
    pSVar5 = pSVar1;
    for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(EffectManager **)pSVar5 = pBVar4->Parent;
      pBVar4 = (BeamStreak *)&pBVar4->Alive;
      pSVar5 = pSVar5 + 4;
    }
    iVar3 = iVar3 + -1;
    pSVar1 = pSVar1 + 0x68;
  } while (iVar3 != 0);
  return;
}





//==== 007e8140 SetAll_007e8140 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void  util__Sarray_L_classPhotonFlash_C1000_G___SetAll(class PhotonFlash
   const &) */

void 
util__Sarray_class_PhotonFlash_1000___SetAll
          (Sarray_L_class_PhotonFlash_C1000_G_ *this,PhotonFlash *param_1)

{
  Sarray_L_class_PhotonFlash_C1000_G_ *pSVar1;
  int iVar2;
  int iVar3;
  PhotonFlash *pPVar4;
  Sarray_L_class_PhotonFlash_C1000_G_ *pSVar5;
  
  iVar3 = 1000;
  pSVar1 = this + 8;
  do {
    pPVar4 = param_1;
    pSVar5 = pSVar1;
    for (iVar2 = 0x22; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(EffectManager **)pSVar5 = pPVar4->Parent;
      pPVar4 = (PhotonFlash *)&pPVar4->Alive;
      pSVar5 = pSVar5 + 4;
    }
    iVar3 = iVar3 + -1;
    pSVar1 = pSVar1 + 0x88;
  } while (iVar3 != 0);
  return;
}





//==== 007e8170 SetAll_007e8170 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void  util__Sarray_L_classShockwave_C100_G___SetAll(class Shockwave const
   &) */

void __thiscall
util__Sarray_class_Shockwave_100___SetAll(Sarray_L_class_Shockwave_C100_G_ *this,Shockwave *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  Sarray_L_class_Shockwave_C100_G_ *pSVar5;
  
  iVar4 = 100;
  pSVar5 = this + 0x10;
  do {
    *(EffectManager **)(pSVar5 + -8) = param_1->Parent;
    *(bool **)(pSVar5 + -4) = param_1->Alive;
    uVar1 = *(undefined4 *)((int)&(param_1->State).Position.X + 4);
    uVar2 = *(undefined4 *)&(param_1->State).Position.Y;
    uVar3 = *(undefined4 *)((int)&(param_1->State).Position.Y + 4);
    *(undefined4 *)pSVar5 = *(undefined4 *)&(param_1->State).Position.X;
    *(undefined4 *)(pSVar5 + 4) = uVar1;
    *(undefined4 *)(pSVar5 + 8) = uVar2;
    *(undefined4 *)(pSVar5 + 0xc) = uVar3;
    uVar1 = *(undefined4 *)((int)&(param_1->State).Position.Z + 4);
    uVar2 = *(undefined4 *)&(param_1->State).Velocity.X;
    uVar3 = *(undefined4 *)((int)&(param_1->State).Velocity.X + 4);
    *(undefined4 *)(pSVar5 + 0x10) = *(undefined4 *)&(param_1->State).Position.Z;
    *(undefined4 *)(pSVar5 + 0x14) = uVar1;
    *(undefined4 *)(pSVar5 + 0x18) = uVar2;
    *(undefined4 *)(pSVar5 + 0x1c) = uVar3;
    uVar1 = *(undefined4 *)((int)&(param_1->State).Velocity.Y + 4);
    uVar2 = *(undefined4 *)&(param_1->State).Velocity.Z;
    uVar3 = *(undefined4 *)((int)&(param_1->State).Velocity.Z + 4);
    *(undefined4 *)(pSVar5 + 0x20) = *(undefined4 *)&(param_1->State).Velocity.Y;
    *(undefined4 *)(pSVar5 + 0x24) = uVar1;
    *(undefined4 *)(pSVar5 + 0x28) = uVar2;
    *(undefined4 *)(pSVar5 + 0x2c) = uVar3;
    Darray_L_struct_MaterialConstituent_G___op_assign
              ((Darray_L_struct_MaterialConstituent_G_ *)(pSVar5 + 0x30),
               (Darray_L_struct_MaterialConstituent_G_ *)&param_1->GasComposition);
    *(double *)(pSVar5 + 0x40) = param_1->GasMass_kg;
    *(double *)(pSVar5 + 0x48) = param_1->GasTemperature_K;
    *(double *)(pSVar5 + 0x50) = param_1->Radius_km;
    *(double *)(pSVar5 + 0x58) = param_1->ExpansionVelocity_km__s;
    pSVar5[0x60] = *(Sarray_L_class_Shockwave_C100_G_ *)&param_1->Buffer__First;
    iVar4 = iVar4 + -1;
    pSVar5 = pSVar5 + 0x70;
  } while (iVar4 != 0);
  return;
}





//==== 007e81f0 SetAll_007e81f0 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void  util__Sarray_L_classSpark_C2000_G___SetAll(class Spark const &) */

void __thiscall
util__Sarray_class_Spark_2000___SetAll(Sarray_L_class_Spark_C2000_G_ *this,Spark *param_1)

{
  Sarray_L_class_Spark_C2000_G_ *pSVar1;
  int iVar2;
  int iVar3;
  Spark *pSVar4;
  Sarray_L_class_Spark_C2000_G_ *pSVar5;
  
  iVar3 = 2000;
  pSVar1 = this + 8;
  do {
    pSVar4 = param_1;
    pSVar5 = pSVar1;
    for (iVar2 = 0x2c; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(EffectManager **)pSVar5 = pSVar4->Parent;
      pSVar4 = (Spark *)&pSVar4->Alive;
      pSVar5 = pSVar5 + 4;
    }
    iVar3 = iVar3 + -1;
    pSVar1 = pSVar1 + 0xb0;
  } while (iVar3 != 0);
  return;
}





//==== 007e8220 ConstantAccelerationTrajectoryVelocity_double_ ====


/* struct util__Vec3_L_double_G_ __cdecl util__ConstantAccelerationTrajectoryVelocity_double(struct
   util__PhysicalState_L_structutil__Vec3_L_double_G__G_,struct util__PhysicalState_L_struct_util__Vec3_L_double_G__G_,double) */

Vec3_L_double_G_ * __cdecl
util__ConstantAccelerationTrajectoryVelocity_double
          (Vec3_L_double_G_ *__return_storage_ptr__,double param_2,double param_3,double param_4,
          double param_5,double param_6,double param_7,double param_8,double param_9,double param_10
          ,double param_11,double param_12,double param_13,double param_14)

{
  undefined8 stack0xfffffffc;
  Maybe_L_double_G_ *pMVar1;
  int *piVar2;
  int *piVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  Vec3_L_double_G_ VStack_108;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  int iStack_d8;
  int iStack_d4;
  undefined1 auStack_d0 [4];
  int iStack_cc;
  undefined1 auStack_c8 [4];
  int iStack_c4;
  undefined8 uStack_c0;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  char cStack_78;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  double dStack_28;
  double dStack_20;
  double dStack_18;
  double dStack_10;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (param_14 <= 0.0) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\algorithm.inl",0x1d8,
              "Acceleration > 0",(char *)0x0);
    DebugBreak();
  }
  _auStack_d0 = param_8 - param_2;
  _auStack_c8 = param_9 - param_3;
  uStack_c0 = param_10 - param_4;
  if (((NAN(*(double *)&(_auStack_d0)) != (*(double *)&(_auStack_d0) == 0.0)) && (NAN(*(double *)&(_auStack_c8)) != (*(double *)&(_auStack_c8) == 0.0))) &&
     (NAN(*(double *)&(uStack_c0)) != (*(double *)&(uStack_c0) == 0.0))) {
    __return_storage_ptr__->X = param_11 - param_5;
    __return_storage_ptr__->Y = param_12 - param_6;
    __return_storage_ptr__->Z = param_13 - param_7;
    __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
    return __return_storage_ptr__;
  }
  Vec3_L_double_G___SafeNormalized((Vec3_L_double_G_ *)auStack_d0,&VStack_108);
  dStack_f0 = _auStack_c8 * _auStack_c8 + _auStack_d0 * _auStack_d0 + uStack_c0 * uStack_c0;
  pMVar1 = (Maybe_L_double_G_ *)(uintptr_t)(Sqrt((Maybe_L_double_G_ *)auStack_38,&dStack_f0));
  if (pMVar1->IsValidData == false) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,"IsValid()",
              (char *)0x0);
    DebugBreak();
  }
  uStack_30 = pMVar1->Data;
  dVar9 = VStack_108.X * param_5 + VStack_108.Y * param_6 + VStack_108.Z * param_7;
  dVar7 = dVar9 * VStack_108.Y;
  dVar8 = dVar9 * VStack_108.X;
  dVar9 = dVar9 * VStack_108.Z;
  dStack_18 = VStack_108.X * param_11 + VStack_108.Y * param_12 + VStack_108.Z * param_13;
  dVar4 = dStack_18 * VStack_108.X;
  dVar5 = dStack_18 * VStack_108.Z;
  dStack_18 = dStack_18 * VStack_108.Y;
  dVar6 = (param_12 - param_6) * VStack_108.Y + (param_11 - param_5) * VStack_108.X +
          (param_13 - param_7) * VStack_108.Z;
  dStack_e0 = (param_11 - param_5) - VStack_108.X * dVar6;
  dStack_f0 = (param_12 - param_6) - VStack_108.Y * dVar6;
  dStack_e8 = (param_13 - param_7) - VStack_108.Z * dVar6;
  dStack_10 = VStack_108.Y * dVar7 + VStack_108.X * dVar8 + VStack_108.Z * dVar9;
  dStack_20 = dVar7 * dVar7 + dVar8 * dVar8 + dVar9 * dVar9;
  pMVar1 = (Maybe_L_double_G_ *)(uintptr_t)(Sqrt((Maybe_L_double_G_ *)auStack_c8,&dStack_20));
  if (pMVar1->IsValidData == false) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,"IsValid()",
              (char *)0x0);
    DebugBreak();
  }
  dStack_28 = pMVar1->Data;
  if (NAN(dStack_10) == (dStack_10 == 0.0)) {
    dVar6 = Abs(&dStack_10);
    dStack_10 = dStack_10 / dVar6;
    dStack_20 = dStack_10;
  }
  else {
    dStack_10 = 0.0;
  }
  dStack_28 = dStack_10 * dStack_28;
  dStack_10 = VStack_108.X * dVar4 + VStack_108.Y * dStack_18 + VStack_108.Z * dVar5;
  dStack_18 = dVar4 * dVar4 + dStack_18 * dStack_18 + dVar5 * dVar5;
  pMVar1 = (Maybe_L_double_G_ *)(uintptr_t)(Sqrt((Maybe_L_double_G_ *)auStack_c8,&dStack_18));
  if (pMVar1->IsValidData == false) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,"IsValid()",
              (char *)0x0);
    DebugBreak();
  }
  dVar4 = pMVar1->Data;
  if (NAN(dStack_10) == (dStack_10 == 0.0)) {
    dStack_18 = Abs(&dStack_10);
    dStack_18 = dStack_10 / dStack_18;
  }
  else {
    dStack_18 = 0.0;
  }
  dStack_18 = dStack_18 * dVar4;
  dStack_20 = 0.0;
  dStack_10 = uStack_30;
  uStack_30 = param_14;
  if (param_14 <= 0.0) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\algorithm.inl",0x1b1,
              "Acceleration > 0",(char *)0x0);
    DebugBreak();
  }
  _auStack_d0 = (double)CONCAT44(&uStack_30,auStack_d0);
  _auStack_c8 = (double)CONCAT44(&dStack_28,&dStack_18);
  uStack_c0 = (double)CONCAT44(&dStack_10,&dStack_20);
  FUN_007e8eb0(&iStack_98,1);
  FUN_007e8eb0(&iStack_70,0xffffffff);
  if (cStack_78 == '\0') {
    if ((char)iStack_50 == '\0') {
      iStack_d8 = 0;
      *(uint32_t *)&auStack_d0 = (uint32_t)0x0;
      iStack_cc = 0;
      *(uint32_t *)&auStack_c8 = (uint32_t)0x0;
      iStack_c4 = 0;
      (*(uint32_t*)&(uStack_c0)) = 0;
      (*(uint32_t*)((char*)&(uStack_c0)+4)) = 0;
    }
    else {
      iStack_d8 = iStack_70;
      iStack_d4 = iStack_6c;
      *(uint32_t *)&auStack_d0 = (uint32_t)iStack_68;
      iStack_cc = iStack_64;
      *(uint32_t *)&auStack_c8 = (uint32_t)iStack_60;
      iStack_c4 = iStack_5c;
      (*(uint32_t*)&(uStack_c0)) = iStack_58;
      (*(uint32_t*)((char*)&(uStack_c0)+4)) = iStack_54;
    }
    iStack_48 = iStack_d8;
    iStack_44 = iStack_d4;
    iStack_40 = (int)auStack_d0;
    iStack_3c = iStack_cc;
    piVar2 = &iStack_48;
    (*(uint32_t*)&(auStack_38)) = (uint32_t)(uintptr_t)(auStack_c8);
    (*(uint32_t*)((char*)&(auStack_38)+4)) = iStack_c4;
    uStack_30 = (double)CONCAT44((*(uint32_t*)((char*)&(uStack_c0)+4)),(int)uStack_c0);
  }
  else {
    if ((char)iStack_50 != '\0') {
      piVar2 = &iStack_98;
      if ((double)CONCAT44(iStack_54,iStack_58) < (double)CONCAT44(iStack_7c,iStack_80) ||
          (double)CONCAT44(iStack_54,iStack_58) == (double)CONCAT44(iStack_7c,iStack_80)) {
        piVar2 = &iStack_70;
      }
      iStack_d8 = *piVar2;
      iStack_d4 = piVar2[1];
      *(uint32_t *)&auStack_d0 = (uint32_t)piVar2[2];
      iStack_cc = piVar2[3];
      piVar3 = &iStack_d8;
      *(uint32_t *)&auStack_c8 = (uint32_t)piVar2[4];
      iStack_c4 = piVar2[5];
      (*(uint32_t*)&(uStack_c0)) = piVar2[6];
      (*(uint32_t*)((char*)&(uStack_c0)+4)) = piVar2[7];
      goto LAB_007e87e1;
    }
    piVar2 = &iStack_d8;
    iStack_d8 = iStack_98;
    iStack_d4 = iStack_94;
    *(uint32_t *)&auStack_d0 = (uint32_t)iStack_90;
    iStack_cc = iStack_8c;
    *(uint32_t *)&auStack_c8 = (uint32_t)iStack_88;
    iStack_c4 = iStack_84;
    (*(uint32_t*)&(uStack_c0)) = iStack_80;
    (*(uint32_t*)((char*)&(uStack_c0)+4)) = iStack_7c;
  }
  iStack_68 = *piVar2;
  iStack_64 = piVar2[1];
  iStack_60 = piVar2[2];
  iStack_5c = piVar2[3];
  piVar3 = &iStack_68;
  iStack_58 = piVar2[4];
  iStack_54 = piVar2[5];
  iStack_50 = piVar2[6];
  iStack_4c = piVar2[7];
LAB_007e87e1:
  iStack_b8 = *piVar3;
  iStack_b4 = piVar3[1];
  iStack_b0 = piVar3[2];
  iStack_ac = piVar3[3];
  iStack_a8 = piVar3[4];
  iStack_a4 = piVar3[5];
  iStack_a0 = piVar3[6];
  iStack_9c = piVar3[7];
  uStack_30 = Abs((double *)&iStack_b0);
  uStack_30 = uStack_30 * (param_14 + param_14);
  pMVar1 = (Maybe_L_double_G_ *)(uintptr_t)(Sqrt((Maybe_L_double_G_ *)auStack_c8,(double *)&uStack_30));
  if (pMVar1->IsValidData == false) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,"IsValid()",
              (char *)0x0);
    DebugBreak();
  }
  dVar4 = pMVar1->Data;
  dVar5 = (double)iStack_b8;
  __return_storage_ptr__->X = VStack_108.X * dVar5 * dVar4 + dStack_e0;
  __return_storage_ptr__->Y = VStack_108.Y * dVar5 * dVar4 + dStack_f0;
  __return_storage_ptr__->Z = VStack_108.Z * dVar5 * dVar4 + dStack_e8;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}





//==== 007e9710 GetAccelEstimatedTimeToGo_double_ ====


/* class util__Maybe_L_double_G_ __cdecl util__GetAccelEstimatedTimeToGo_double(struct
   util__PhysicalState_L_structutil__Vec3_L_double_G__G_,struct util__PhysicalState_L_struct_util__Vec3_L_double_G__G_,double) */

Maybe_L_double_G_ * __cdecl
util__GetAccelEstimatedTimeToGo_double
          (Maybe_L_double_G_ *__return_storage_ptr__,double param_2,double param_3,double param_4,
          double param_5,double param_6,double param_7,double param_8,double param_9,double param_10
          ,double param_11,double param_12,double param_13,double param_14)

{
  bool bVar1;
  Maybe_L_double_G_ *pMVar2;
  Vec3_L_double_G_ *pVVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  Maybe_L_double_G_ MStack_70;
  Maybe_L_double_G_ MStack_60;
  undefined1 auStack_50 [16];
  double dStack_40;
  undefined1 auStack_38 [16];
  double dStack_28;
  Vec3_L_double_G_ VStack_20;
  
  param_8 = param_8 - param_2;
  param_9 = param_9 - param_3;
  dStack_40 = param_10 - param_4;
  MStack_60.Data = param_12 - param_6;
  dStack_80 = param_13 - param_7;
  (*(uint32_t*)((char*)&(auStack_50)+8)) = SUB84(param_9,0);
  (*(uint64_t*)&(auStack_50)) = param_8;
  (*(uint32_t *)((char *)&(auStack_50) + 12)) = (int)((ulonglong)param_9 >> 0x20);
  dStack_78 = param_11 - param_5;
  dStack_88 = param_8 * param_8 + param_9 * param_9 + dStack_40 * dStack_40;
  (*(uint32_t*)((char*)&(auStack_38)+8)) = SUB84(MStack_60.Data,0);
  (*(uint64_t*)&(auStack_38)) = dStack_78;
  (*(uint32_t *)((char *)&(auStack_38) + 12)) = (int)((ulonglong)MStack_60.Data >> 0x20);
  dStack_28 = dStack_80;
  pMVar2 = (Maybe_L_double_G_ *)(uintptr_t)(Sqrt(&MStack_70,&dStack_88));
  if (pMVar2->IsValidData == false) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,"IsValid()",
              (char *)0x0);
    DebugBreak();
  }
  MStack_70.Data = pMVar2->Data;
  pVVar3 = (Vec3_L_double_G_ *)(uintptr_t)(Vec3_L_double_G___SafeNormalized((Vec3_L_double_G_ *)auStack_50,&VStack_20));
  dVar5 = pVVar3->Y * MStack_60.Data + pVVar3->X * dStack_78 + pVVar3->Z * dStack_80;
  dStack_88 = -dVar5;
  dVar4 = -dVar5 * pVVar3->X;
  dVar5 = -dVar5 * pVVar3->Y;
  dVar6 = dStack_88 * pVVar3->Z;
  dStack_80 = dVar5 * dVar5 + dVar4 * dVar4 + dVar6 * dVar6;
  pMVar2 = (Maybe_L_double_G_ *)(uintptr_t)(Sqrt(&MStack_60,&dStack_80));
  if (pMVar2->IsValidData == false) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,"IsValid()",
              (char *)0x0);
    DebugBreak();
  }
  dStack_78 = pMVar2->Data;
  if (NAN(dStack_88) == (dStack_88 == 0.0)) {
    dStack_80 = Abs(&dStack_88);
    dStack_80 = dStack_88 / dStack_80;
    dVar4 = dStack_80;
  }
  else {
    dVar4 = 0.0;
  }
  param_14 = param_14 * 0.5;
  dVar4 = dVar4 * dStack_78;
  if (NAN(param_14) == (param_14 == 0.0)) {
    dVar5 = dVar4 * dVar4 - param_14 * 4.0 * -MStack_70.Data;
    if (0.0 <= dVar5) {
      MStack_70.Data = dVar4;
      libm_sse2_sqrt_precise(0.0);
      dVar4 = 1.0 / (param_14 + param_14);
      dVar6 = (dVar5 - MStack_70.Data) * dVar4;
      dVar4 = (-MStack_70.Data - dVar5) * dVar4;
      goto LAB_007e998c;
    }
  }
  else if (NAN(dVar4) == (dVar4 == 0.0)) {
    dVar4 = -MStack_70.Data / dVar4;
    dVar6 = -dVar4;
    dVar4 = -dVar4;
LAB_007e998c:
    if (0.0 <= dVar6) {
      bVar1 = true;
      if (0.0 <= dVar4) {
        if (dVar4 <= dVar6) {
          dVar6 = dVar4;
        }
        __return_storage_ptr__->Data = dVar6;
        __return_storage_ptr__->IsValidData = true;
        return __return_storage_ptr__;
      }
      goto LAB_007e99ca;
    }
    if (0.0 <= dVar4) {
      __return_storage_ptr__->Data = dVar4;
      __return_storage_ptr__->IsValidData = true;
      return __return_storage_ptr__;
    }
  }
  dVar6 = 0.0;
  bVar1 = false;
LAB_007e99ca:
  __return_storage_ptr__->Data = dVar6;
  __return_storage_ptr__->IsValidData = bVar1;
  return __return_storage_ptr__;
}





//==== 007e99e0 Order_007e99e0 ====


/* public: __thiscall Order__Order(enum Order__Type) */

Order * __thiscall Order__Order(Order *this,int param_1)

{
  this->OrderType = param_1;
  *(undefined4 *)&(this->Orientation).X = 0;
  *(undefined4 *)((int)&(this->Orientation).X + 4) = 0;
  *(undefined4 *)&(this->Orientation).Y = 0;
  *(undefined4 *)((int)&(this->Orientation).Y + 4) = 0;
  (this->Orientation).Z = 0.0;
  (this->Orientation).W = 1.0;
  return this;
}





//==== 007e9a10 operator___007e9a10 ====


/* public: bool __thiscall Order__operator(class Order const &)const  */

bool __thiscall Order__operator(Order *this,Order *param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (param_1->OrderType != this->OrderType) {
    return false;
  }
  dVar2 = (param_1->Orientation).X;
  dVar4 = (this->Orientation).X;
  if ((((((NAN(dVar2) || NAN(dVar4)) == (dVar2 == dVar4)) ||
        (dVar3 = (param_1->Orientation).Y, pdVar1 = &(this->Orientation).Y,
        (NAN(dVar3) || NAN(*pdVar1)) == (dVar3 == *pdVar1))) ||
       (dVar3 = (param_1->Orientation).Z, pdVar1 = &(this->Orientation).Z,
       (NAN(dVar3) || NAN(*pdVar1)) == (dVar3 == *pdVar1))) ||
      (dVar3 = (param_1->Orientation).W, pdVar1 = &(this->Orientation).W,
      (NAN(dVar3) || NAN(*pdVar1)) == (dVar3 == *pdVar1))) &&
     ((((NAN(dVar2) || NAN(-dVar4)) == (dVar2 == -dVar4) ||
       (dVar2 = (param_1->Orientation).Y, dVar4 = -(this->Orientation).Y,
       (NAN(dVar2) || NAN(dVar4)) == (dVar2 == dVar4))) ||
      ((dVar2 = (param_1->Orientation).Z, dVar4 = -(this->Orientation).Z,
       (NAN(dVar2) || NAN(dVar4)) == (dVar2 == dVar4) ||
       (dVar2 = (param_1->Orientation).W, dVar4 = -(this->Orientation).W,
       (NAN(dVar2) || NAN(dVar4)) == (dVar2 == dVar4))))))) {
    if (param_1->OrderType == OrderType__Move) {
      return false;
    }
    if (param_1->OrderType == OrderType__Orient) {
      return false;
    }
  }
  return true;
}





//==== 007e9af0 DoesOrderDisableDodging ====


/* public: static bool __cdecl Order__DoesOrderDisableDodging(class util__Maybe_L_classOrder_G_) */

bool __cdecl Order__DoesOrderDisableDodging(int)

{
  char in_stack_0000002c;
  
  if ((in_stack_0000002c != '\0') && ((param_1 == 4 || (param_1 == 7)))) {
    return true;
  }
  return false;
}





//==== 007ea840 IsOrderPersistantAcrossCombats ====


/* public: static bool __cdecl Order__IsOrderPersistantAcrossCombats(class util__Maybe_L_classOrder_G_)
    */

bool __cdecl Order__IsOrderPersistantAcrossCombats(int)

{
  Order *pOVar1;
  char in_stack_0000002c;
  
  if (in_stack_0000002c == '\0') {
    return false;
  }
  if ((((param_1 != 4) && (param_1 != 6)) && (param_1 != 7)) &&
     (pOVar1 = util__Maybe_class_Order___operator((Maybe_L_class_Order_G_ *)&param_1),
     pOVar1->OrderType != AIOrder__Roll)) {
    return false;
  }
  return true;
}





//==== 007ead20 GetMissileGuidanceThrustDirection ====


/* struct util__Vec3_L_double_G_ __cdecl Maneuvering__GetMissileGuidanceThrustDirection(struct
   util__PhysicalState_L_structutil__Vec3_L_double_G__G_,struct util__PhysicalState_L_struct_util__Vec3_L_double_G__G_,struct util__Vec3_L_double_G_,enum Maneuvering__MissilePhase__Type,class
   HomingProperties const *,double,double) */

Vec3_L_double_G_ * __cdecl
Maneuvering__GetMissileGuidanceThrustDirection
          (Vec3_L_double_G_ *__return_storage_ptr__,double param_2,double param_3,double param_4,
          double param_5,double param_6,double param_7,double param_8,double param_9,double param_10
          ,double param_11,double param_12,double param_13,double param_14,double param_15,
          double param_16,int param_17,int param_18,undefined4 param_19,undefined4 param_20,
          double param_21)

{
  int iVar1;
  Vec4_L_double_G_ VVar2;
  Vec4_L_double_G_ VVar3;
  bool bVar4;
  Vec3_L_double_G_ *pVVar5;
  Vec3_L_double_G_ *pVVar6;
  Maybe_L_double_G_ *pMVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  Vec3_L_double_G_ VStack_e8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  Vec3_L_double_G_ VStack_b8;
  Vec3_L_double_G_ *pVStack_9c;
  double dStack_98;
  Vec3_L_double_G_ VStack_90;
  undefined1 auStack_78 [40];
  double dStack_50;
  undefined1 auStack_48 [16];
  double dStack_38;
  undefined1 auStack_30 [16];
  double dStack_20;
  double dStack_18;
  uint uStack_c;
  
  uStack_c = __security_cookie ^ (uint)&dStack_120;
  pVStack_9c = __return_storage_ptr__;
  if (param_18 == 0) {
    param_18 = 0;
LAB_007ead64:
    (*(uint64_t*)&(auStack_78)) = param_8 - param_2;
    (*(uint64_t*)((char*)&(auStack_78)+8)) = param_9 - param_3;
    (*(uint64_t *)((char *)&(auStack_78) + 16)) = param_10 - param_4;
    dStack_50 = param_13 - param_7;
    (*(uint32_t *)((char *)&(auStack_78) + 32)) = SUB84(param_12 - param_6,0);
    (*(uint64_t *)((char *)&(auStack_78) + 24)) = param_11 - param_5;
    (*(uint32_t *)((char *)&(auStack_78) + 36)) = (int)((ulonglong)(param_12 - param_6) >> 0x20);
    if (((NAN((double)(*(uint64_t*)&(auStack_78))) == ((double)(*(uint64_t*)&(auStack_78)) == 0.0)) ||
        (NAN((double)(*(uint64_t*)((char*)&(auStack_78)+8))) == ((double)(*(uint64_t*)((char*)&(auStack_78)+8)) == 0.0))) ||
       (NAN((double)(*(uint64_t *)((char *)&(auStack_78) + 16))) == ((double)(*(uint64_t *)((char *)&(auStack_78) + 16)) == 0.0))) {
      util__Vec3_double___SafeNormalized((Vec3_L_double_G_ *)auStack_78,&VStack_e8);
    }
    else {
      VStack_e8.Z = 0.0;
      VStack_e8.X = 0.0;
      VStack_e8.Y = 0.0;
    }
LAB_007eb411:
    VStack_b8.X = VStack_e8.X;
    VStack_b8.Y = VStack_e8.Y;
    pVVar6 = &VStack_b8;
    VStack_b8.Z = VStack_e8.Z;
LAB_007eb42f:
    VStack_90.X = pVVar6->X;
    VStack_90.Y = pVVar6->Y;
    pVVar5 = &VStack_90;
    VStack_90.Z = pVVar6->Z;
  }
  else {
    if (param_17 == 0) {
      param_18 = param_18 + 0x18;
    }
    else if (param_17 == 1) {
      param_18 = param_18 + 0x38;
    }
    else {
      param_18 = param_18 + 0x58;
      if (param_17 != 2) {
        param_18 = 0;
      }
    }
    if (param_18 == 0) goto LAB_007ead64;
    iVar1 = *(int *)(param_18 + 0x10);
    if (iVar1 == 4) {
      dStack_100 = param_14 / 1000.0;
      VStack_e8.X = param_8 - param_2;
      dStack_18 = param_15 / 1000.0;
      dStack_f8 = param_16 / 1000.0;
      VStack_e8.Y = param_9 - param_3;
      dStack_d0 = param_11 - param_5;
      dStack_c8 = param_12 - param_6;
      VStack_e8.Z = param_10 - param_4;
      dStack_118 = param_13 - param_7;
      dStack_c0 = dStack_118;
      if (((NAN(VStack_e8.X) == (VStack_e8.X == 0.0)) || (NAN(VStack_e8.Y) == (VStack_e8.Y == 0.0)))
         || (NAN(VStack_e8.Z) == (VStack_e8.Z == 0.0))) {
        dVar8 = VStack_e8.Y * VStack_e8.Y + VStack_e8.X * VStack_e8.X + VStack_e8.Z * VStack_e8.Z;
        dStack_108 = (VStack_e8.Y * dStack_118 - VStack_e8.Z * dStack_c8) / dVar8;
        dStack_120 = (dStack_d0 * VStack_e8.Z - VStack_e8.X * dStack_118) / dVar8;
        dStack_118 = (VStack_e8.X * dStack_c8 - dStack_d0 * VStack_e8.Y) / dVar8;
        pVVar5 = util__Vec3_double___SafeNormalized(&VStack_e8,(Vec3_L_double_G_ *)auStack_78);
        pVVar6 = &VStack_90;
        dVar8 = dStack_18 * pVVar5->Y + pVVar5->X * dStack_100 + pVVar5->Z * dStack_f8;
        VStack_90.X = (dStack_c8 * dStack_118 - dStack_c0 * dStack_120) * 3.0 +
                      (dStack_100 - pVVar5->X * dVar8);
        VStack_90.Y = (dStack_c0 * dStack_108 - dStack_d0 * dStack_118) * 3.0 +
                      (dStack_18 - pVVar5->Y * dVar8);
        VStack_90.Z = (dStack_d0 * dStack_120 - dStack_c8 * dStack_108) * 3.0 +
                      (dStack_f8 - pVVar5->Z * dVar8);
      }
      else {
        VStack_90.Z = 0.0;
        VStack_90.X = 0.0;
        VStack_90.Y = 0.0;
        pVVar6 = &VStack_90;
      }
      goto LAB_007eb46f;
    }
    if (iVar1 != 3) {
      if (iVar1 != 2) {
        if (iVar1 == 1) goto LAB_007ead64;
        VStack_e8.X = 0.0;
        VStack_e8.Y = 0.0;
        VStack_e8.Z = 0.0;
        goto LAB_007eb411;
      }
      VStack_90.X = param_8 - param_2;
      dStack_f0 = param_9 - param_3;
      dStack_110 = param_10 - param_4;
      dStack_f8 = param_11 - param_5;
      dStack_118 = param_12 - param_6;
      dStack_100 = param_13 - param_7;
      if ((((NAN(VStack_90.X) != (VStack_90.X == 0.0)) && (NAN(dStack_f0) != (dStack_f0 == 0.0))) &&
          (NAN(dStack_110) != (dStack_110 == 0.0))) ||
         (-(dStack_118 * dStack_f0 + dStack_f8 * VStack_90.X + dStack_100 * dStack_110) <= 0.0)) {
        VStack_e8.Z = 0.0;
        VStack_e8.X = 0.0;
        VStack_e8.Y = 0.0;
        pVVar6 = &VStack_e8;
      }
      else {
        dStack_108 = dStack_f0 * dStack_f0 + VStack_90.X * VStack_90.X + dStack_110 * dStack_110;
        pMVar7 = util__Sqrt((Maybe_L_double_G_ *)&VStack_b8,&dStack_108);
        (*(uint32_t*)&(dStack_120)) = (uint32_t)(uintptr_t)(pMVar7);
        if (pMVar7->IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        dStack_98 = ((Maybe_L_double_G_ *)(uintptr_t)*(uint32_t *)&(dStack_120))->Data;
        dStack_18 = dStack_118 * dStack_118 + dStack_f8 * dStack_f8 + dStack_100 * dStack_100;
        pMVar7 = util__Sqrt((Maybe_L_double_G_ *)&VStack_e8,&dStack_18);
        dStack_120 = (double)CONCAT44((*(uint32_t*)((char*)&(dStack_120)+4)),pMVar7);
        if (pMVar7->IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
          pMVar7 = (Maybe_L_double_G_ *)(uintptr_t)((*(uint32_t*)&(dStack_120)));
        }
        dVar8 = dStack_98 / pMVar7->Data;
        VStack_b8.X = dStack_f8 * dVar8 + VStack_90.X;
        VStack_b8.Y = dStack_118 * dVar8 + dStack_f0;
        VStack_b8.Z = dStack_100 * dVar8 + dStack_110;
        util__Vec3_double___SafeNormalized(&VStack_b8,&VStack_e8);
        pVVar6 = &VStack_e8;
      }
      goto LAB_007eb42f;
    }
    dStack_108 = param_8 - param_2;
    dStack_120 = param_12 - param_6;
    dVar8 = param_9 - param_3;
    dVar11 = param_10 - param_4;
    dVar9 = param_11 - param_5;
    dVar12 = param_13 - param_7;
    if (((NAN(dStack_108) == (dStack_108 == 0.0)) || (NAN(dVar8) == (dVar8 == 0.0))) ||
       (NAN(dVar11) == (dVar11 == 0.0))) {
      pVVar5 = &VStack_e8;
      dVar13 = dStack_108 * dStack_108 + dVar8 * dVar8 + dVar11 * dVar11;
      dVar10 = (dVar8 * dVar12 - dStack_120 * dVar11) / dVar13;
      dVar11 = (dVar11 * dVar9 - dVar12 * dStack_108) / dVar13;
      dVar13 = (dStack_120 * dStack_108 - dVar8 * dVar9) / dVar13;
      VStack_e8.X = (dStack_120 * dVar13 - dVar12 * dVar11) * 3.0;
      VStack_e8.Y = (dVar12 * dVar10 - dVar9 * dVar13) * 3.0;
      VStack_e8.Z = (dVar9 * dVar11 - dStack_120 * dVar10) * 3.0;
    }
    else {
      VStack_e8.Z = 0.0;
      VStack_e8.X = 0.0;
      VStack_e8.Y = 0.0;
      pVVar5 = &VStack_e8;
    }
  }
  pVVar6 = (Vec3_L_double_G_ *)auStack_78;
  (*(uint64_t*)&(auStack_78)) = pVVar5->X;
  (*(uint64_t*)((char*)&(auStack_78)+8)) = pVVar5->Y;
  (*(uint64_t *)((char *)&(auStack_78) + 16)) = pVVar5->Z;
LAB_007eb46f:
  dStack_38 = param_10 - param_4;
  VStack_e8.X = pVVar6->X;
  VStack_e8.Y = pVVar6->Y;
  VStack_e8.Z = pVVar6->Z;
  dStack_20 = param_13 - param_7;
  (*(uint32_t*)((char*)&(auStack_48)+8)) = SUB84(param_9 - param_3,0);
  (*(uint64_t*)&(auStack_48)) = param_8 - param_2;
  (*(uint32_t *)((char *)&(auStack_48) + 12)) = (int)((ulonglong)(param_9 - param_3) >> 0x20);
  (*(uint32_t*)((char*)&(auStack_30)+8)) = SUB84(param_12 - param_6,0);
  (*(uint64_t*)&(auStack_30)) = param_11 - param_5;
  (*(uint32_t *)((char *)&(auStack_30) + 12)) = (int)((ulonglong)(param_12 - param_6) >> 0x20);
  util__Vec3_double___SafeNormalized((Vec3_L_double_G_ *)auStack_48,&VStack_b8);
  dVar8 = pVVar6->X;
  if (((NAN(dVar8) == (dVar8 == 0.0)) || (NAN(VStack_e8.Y) == (VStack_e8.Y == 0.0))) ||
     (dVar9 = pVVar6->Z, NAN(dVar9) == (dVar9 == 0.0))) {
    pVVar6 = util__Vec3_double___Normalized(&VStack_e8,(Vec3_L_double_G_ *)auStack_78);
    dVar8 = VStack_e8.X;
    dVar9 = VStack_e8.Z;
  }
  else {
    (*(uint64_t*)&(auStack_78)) = VStack_b8.X;
    (*(uint64_t*)((char*)&(auStack_78)+8)) = VStack_b8.Y;
    pVVar6 = (Vec3_L_double_G_ *)auStack_78;
    (*(uint64_t *)((char *)&(auStack_78) + 16)) = VStack_b8.Z;
  }
  dStack_108 = pVVar6->Z;
  dStack_120 = 1.0;
  VStack_90.X = pVVar6->X;
  VStack_90.Y = pVVar6->Y;
  if (param_18 == 0) {
    dStack_f0 = 0.0;
  }
  else {
    dStack_f0 = *(double *)(param_18 + 0x18);
  }
  dStack_f0 = dStack_f0 * param_21;
  uVar14 = *(undefined4 *)&pVVar6->X;
  uVar15 = *(undefined4 *)((int)&pVVar6->X + 4);
  uVar16 = *(undefined4 *)&pVVar6->Y;
  uVar17 = *(undefined4 *)((int)&pVVar6->Y + 4);
  if (0.0 < dStack_f0) {
    dStack_110 = VStack_e8.Y * VStack_e8.Y + dVar8 * dVar8 + dVar9 * dVar9;
    pMVar7 = util__Sqrt((Maybe_L_double_G_ *)&VStack_e8,&dStack_110);
    if (pMVar7->IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dStack_120 = (pMVar7->Data * 1000.0) / dStack_f0;
    uVar14 = VStack_90.X;
    uVar15 = VStack_90.Y;
    uVar16 = VStack_90.Y;
    uVar17 = VStack_90.Z;
  }
  if ((param_18 != 0) && (*(char *)(param_18 + 0x14) != '\0')) {
    VVar2.Y = VStack_b8.Y;
    VVar2.X = VStack_b8.X;
    VVar2.Z = VStack_b8.Z;
    VVar2.Z = VStack_b8.Z;
    VVar3.Y = uVar15;
    VVar3.X = uVar14;
    VVar3.Y = uVar16;
    VVar3.Z = uVar17;
    VVar3.Z = SUB84(dStack_108,0);
    VVar3.W = (int)((ulonglong)dStack_108 >> 0x20);
    util__Quaternion_double___Quaternion_double((Quaternion_L_double_G_ *)auStack_78,VVar2,VVar3);
    dStack_98 = (double)(*(uint64_t *)((char *)&(auStack_78) + 24));
    if ((double)(*(uint64_t *)((char *)&(auStack_78) + 24)) <= 0.0) {
      dStack_98 = 0.0;
    }
    if (1.0 <= dStack_98) {
      dStack_98 = 1.0;
    }
    dStack_18 = dStack_98;
    if (((-1.0 < dStack_98) || (dStack_98 < 1.0)) && ((1.0 < dStack_98 || (dStack_98 < -1.0)))) {
      dStack_f0 = -1.0;
      dStack_110 = 1e-08;
      bVar4 = util__Equals_double(&dStack_18,&dStack_f0,&dStack_110);
      if (!bVar4) {
        VStack_90.X = 1.0;
        dStack_110 = 1e-08;
        bVar4 = util__Equals_double(&dStack_18,&VStack_90.X,&dStack_110);
        if (!bVar4) {
          util__LogEnsure("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\coremath.h"
                          ,0x5b,
                          "Between_L_Type_G_(X, (int)-1, (int)1) || Equals(X, (int)-1) || Equals(X, (int)1)"
                          ,(char *)0x0);
        }
      }
    }
    dVar8 = dStack_18;
    if (dStack_18 <= -1.0) {
      dVar8 = -1.0;
    }
    if (1.0 <= dVar8) {
      dVar8 = 1.0;
    }
    libm_sse2_acos_precise(0.0);
    if (dStack_120 <= 0.0) {
      dStack_120 = 0.0;
    }
    if (1.0 <= dStack_120) {
      dStack_120 = 1.0;
    }
    dStack_120 = dStack_120 * (dVar8 + dVar8);
    dStack_18 = dStack_98;
    if (((-1.0 < dStack_98) || (dStack_98 < 1.0)) && ((1.0 < dStack_98 || (dStack_98 < -1.0)))) {
      dStack_f0 = -1.0;
      dStack_110 = 1e-08;
      bVar4 = util__Equals_double(&dStack_18,&dStack_f0,&dStack_110);
      if (!bVar4) {
        VStack_90.X = 1.0;
        dStack_110 = 1e-08;
        bVar4 = util__Equals_double(&dStack_18,&VStack_90.X,&dStack_110);
        if (!bVar4) {
          util__LogEnsure("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\coremath.h"
                          ,0x5b,
                          "Between_L_Type_G_(X, (int)-1, (int)1) || Equals(X, (int)-1) || Equals(X, (int)1)"
                          ,(char *)0x0);
        }
      }
    }
    dVar8 = dStack_18;
    if (dStack_18 <= -1.0) {
      dVar8 = -1.0;
    }
    if (1.0 <= dVar8) {
      dVar8 = 1.0;
    }
    libm_sse2_acos_precise(0.0);
    dStack_100 = dVar8 + dVar8;
    dVar8 = 1.0 - (double)(*(uint64_t *)((char *)&(auStack_78) + 24)) * (double)(*(uint64_t *)((char *)&(auStack_78) + 24));
    if (dVar8 <= 0.0) {
      dVar8 = 0.0;
    }
    if (1.0 <= dVar8) {
      dVar8 = 1.0;
    }
    libm_sse2_sqrt_precise(0.0);
    dStack_f8 = (double)(*(uint64_t*)&(auStack_78));
    dStack_118 = (double)(*(uint64_t*)((char*)&(auStack_78)+8));
    dStack_108 = (double)(*(uint64_t *)((char *)&(auStack_78) + 16));
    if (1e-08 < dVar8) {
      dVar8 = 1.0 / dVar8;
      dStack_118 = (double)(*(uint64_t*)((char*)&(auStack_78)+8)) * dVar8;
      dStack_f8 = dVar8 * (double)(*(uint64_t*)&(auStack_78));
      dStack_108 = (double)(*(uint64_t *)((char *)&(auStack_78) + 16)) * dVar8;
    }
    if (dStack_120 <= dStack_100) {
      dStack_100 = dStack_120;
    }
    dVar8 = dStack_100 * 0.5;
    dStack_100 = dVar8;
    libm_sse2_sin_precise(0.0);
    dStack_110 = dVar8 * dStack_f8;
    dStack_108 = dVar8 * dStack_108;
    dStack_98 = dVar8 * dStack_118;
    libm_sse2_cos_precise(0.0);
    pVVar6 = pVStack_9c;
    dStack_f8 = -dStack_110;
    dVar8 = -dStack_98;
    dStack_118 = -dStack_108;
    dVar12 = ((VStack_b8.Z * dStack_98 + dStack_110 * 0.0) - VStack_b8.Y * dStack_108) +
             VStack_b8.X * dStack_100;
    dVar13 = (dStack_98 * 0.0 - VStack_b8.Z * dStack_110) + VStack_b8.X * dStack_108 +
             VStack_b8.Y * dStack_100;
    dVar11 = (VStack_b8.Y * dStack_110 - VStack_b8.X * dStack_98) + dStack_108 * 0.0 +
             VStack_b8.Z * dStack_100;
    dVar9 = dStack_100 * 0.0 -
            (VStack_b8.Y * dStack_98 + VStack_b8.X * dStack_110 + VStack_b8.Z * dStack_108);
    VStack_e8.X = ((dVar13 * dStack_118 + dVar12 * dStack_100) - dVar11 * dVar8) + dVar9 * dStack_f8
    ;
    VStack_e8.Y = (dVar13 * dStack_100 - dVar12 * dStack_118) + dVar11 * dStack_f8 + dVar9 * dVar8;
    VStack_e8.Z = (dVar12 * dVar8 - dVar13 * dStack_f8) + dVar11 * dStack_100 + dVar9 * dStack_118;
    dStack_120 = dStack_100;
    dStack_110 = dVar8;
    dStack_100 = dVar12;
    util__Vec3_double___SafeNormalized(&VStack_e8,pVStack_9c);
    __security_check_cookie(uStack_c ^ (uint)&dStack_120);
    return pVVar6;
  }
  if (dStack_120 < 1.0) {
    (*(uint64_t *)((char *)&(auStack_78) + 16)) = 0.0;
    (*(uint32_t*)&(auStack_78)) = 0;
    (*(uint32_t*)((char*)&(auStack_78)+4)) = 0;
    (*(uint32_t*)((char*)&(auStack_78)+8)) = 0;
    (*(uint32_t *)((char *)&(auStack_78) + 12)) = 0;
  }
  else {
    (*(uint64_t *)((char *)&(auStack_78) + 16)) = dStack_108;
    (*(uint32_t*)&(auStack_78)) = uVar14;
    (*(uint32_t*)((char*)&(auStack_78)+4)) = uVar15;
    (*(uint32_t*)((char*)&(auStack_78)+8)) = uVar16;
    (*(uint32_t *)((char *)&(auStack_78) + 12)) = uVar17;
  }
  *(undefined4 *)&(pVStack_9c->X) = (*(uint32_t*)&(auStack_78));
  *(undefined4 *)((int)&pVStack_9c->X + 4) = (*(uint32_t*)((char*)&(auStack_78)+4));
  *(undefined4 *)&(pVStack_9c->Y) = (*(uint32_t*)((char*)&(auStack_78)+8));
  *(undefined4 *)((int)&pVStack_9c->Y + 4) = (*(uint32_t *)((char *)&(auStack_78) + 12));
  pVStack_9c->Z = (double)(*(uint64_t *)((char *)&(auStack_78) + 16));
  __security_check_cookie(uStack_c ^ (uint)&dStack_120);
  return pVStack_9c;
}





//==== 007ebc00 GetTypeName_007ebc00 ====


/* public: virtual class util__Str_L_char_G_  FlareProtocol__ReflectionInfoStruct_struct_FlareProtocol___GetTypeName(void)const  */

Str_L_char_G_ * 
FlareProtocol__ReflectionInfoStruct_struct_FlareProtocol___GetTypeName
          (ReflectionInfoStruct_L_struct_FlareProtocol_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"FlareProtocol");
  return __return_storage_ptr__;
}





//==== 007ebc20 GetMembers_007ebc20 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   FlareProtocol__ReflectionInfoStruct_struct_FlareProtocol___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
FlareProtocol__ReflectionInfoStruct_struct_FlareProtocol___GetMembers__o2
          (ReflectionInfoStruct_L_struct_FlareProtocol_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_c23e3dd0__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_c23e3dd0__thread_safe_static_guard_0__),
      cde_l2_c23e3dd0__thread_safe_static_guard_0__ == -1)) {
     cde_l2_4c4f5343_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_c23e3dd0__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_4c4f5343_Count);
  iVar3 = 0;
  if (0 <  cde_l2_4c4f5343_Count) {
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
    } while (iVar3 <  cde_l2_4c4f5343_Count);
  }
  return in_stack_00000004;
}





//==== 007ebd60 GetMember_007ebd60 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   FlareProtocol__ReflectionInfoStruct_struct_FlareProtocol___GetMember(class util__Str_L_char_G_ const
   &)const  */

Str_L_char_G_ * 
FlareProtocol__ReflectionInfoStruct_struct_FlareProtocol___GetMember__o2
          (ReflectionInfoStruct_L_struct_FlareProtocol_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_936f8627__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_936f8627__thread_safe_static_guard_0__),
      cde_l2_936f8627__thread_safe_static_guard_0__ == -1)) {
     cde_l2_9ad54d74_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_936f8627__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_9ad54d74_Count) {
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
LAB_007ebded:
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
          if (cVar3 == '\0') goto LAB_007ebded;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_9ad54d74_Count);
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





//==== 007ebf00 GetFactory_007ebf00 ====


/* public: virtual class util__Reflectable * (__cdecl*
   FlareProtocol__ReflectionInfoStruct_struct_FlareProtocol___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall FlareProtocol__ReflectionInfoStruct_struct_FlareProtocol___GetFactory__o2
          (ReflectionInfoStruct_L_struct_FlareProtocol_G_ *this)

{
  return StaticFactory;
}





//==== 007ebf10 GetTypeName_007ebf10 ====


/* public: virtual class util__Str_L_char_G_  DroneProtocol__ReflectionInfoStruct_struct_DroneProtocol___GetTypeName(void)const  */

Str_L_char_G_ * 
DroneProtocol__ReflectionInfoStruct_struct_DroneProtocol___GetTypeName
          (ReflectionInfoStruct_L_struct_DroneProtocol_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"DroneProtocol");
  return __return_storage_ptr__;
}





//==== 007ebf30 GetMembers_007ebf30 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   DroneProtocol__ReflectionInfoStruct_struct_DroneProtocol___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
DroneProtocol__ReflectionInfoStruct_struct_DroneProtocol___GetMembers__o2
          (ReflectionInfoStruct_L_struct_DroneProtocol_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_7742ac24__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_7742ac24__thread_safe_static_guard_0__),
      cde_l2_7742ac24__thread_safe_static_guard_0__ == -1)) {
     cde_l2_eafc877e_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_7742ac24__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_eafc877e_Count);
  iVar3 = 0;
  if (0 <  cde_l2_eafc877e_Count) {
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
    } while (iVar3 <  cde_l2_eafc877e_Count);
  }
  return in_stack_00000004;
}





//==== 007ec070 GetMember_007ec070 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   DroneProtocol__ReflectionInfoStruct_struct_DroneProtocol___GetMember(class util__Str_L_char_G_ const
   &)const  */

Str_L_char_G_ * 
DroneProtocol__ReflectionInfoStruct_struct_DroneProtocol___GetMember__o2
          (ReflectionInfoStruct_L_struct_DroneProtocol_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_64fe7b45__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_64fe7b45__thread_safe_static_guard_0__),
      cde_l2_64fe7b45__thread_safe_static_guard_0__ == -1)) {
     cde_l2_b6250b8d_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_64fe7b45__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_b6250b8d_Count) {
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
LAB_007ec0fd:
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
          if (cVar3 == '\0') goto LAB_007ec0fd;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_b6250b8d_Count);
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





//==== 007ec210 GetFactory_007ec210 ====


/* public: virtual class util__Reflectable * (__cdecl*
   DroneProtocol__ReflectionInfoStruct_struct_DroneProtocol___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall DroneProtocol__ReflectionInfoStruct_struct_DroneProtocol___GetFactory__o2
          (ReflectionInfoStruct_L_struct_DroneProtocol_G_ *this)

{
  return StaticFactory;
}





//==== 007ec220 GetTypeName_007ec220 ====


/* public: virtual class util__Str_L_char_G_  MissileProtocol__ReflectionInfoStruct_struct_MissileProtocol___GetTypeName(void)const  */

Str_L_char_G_ * 
MissileProtocol__ReflectionInfoStruct_struct_MissileProtocol___GetTypeName
          (ReflectionInfoStruct_L_struct_MissileProtocol_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"MissileProtocol");
  return __return_storage_ptr__;
}





//==== 007ec240 GetMembers_007ec240 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   MissileProtocol__ReflectionInfoStruct_struct_MissileProtocol___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
MissileProtocol__ReflectionInfoStruct_struct_MissileProtocol___GetMembers__o2
          (ReflectionInfoStruct_L_struct_MissileProtocol_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_62d982e6__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_62d982e6__thread_safe_static_guard_0__),
      cde_l2_62d982e6__thread_safe_static_guard_0__ == -1)) {
     cde_l2_b73f2f5a_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_62d982e6__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_b73f2f5a_Count);
  iVar3 = 0;
  if (0 <  cde_l2_b73f2f5a_Count) {
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
    } while (iVar3 <  cde_l2_b73f2f5a_Count);
  }
  return in_stack_00000004;
}





//==== 007ec380 GetMember_007ec380 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   MissileProtocol__ReflectionInfoStruct_struct_MissileProtocol___GetMember(class util__Str_L_char_G_
   const &)const  */

Str_L_char_G_ * 
MissileProtocol__ReflectionInfoStruct_struct_MissileProtocol___GetMember__o2
          (ReflectionInfoStruct_L_struct_MissileProtocol_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_00c7c186__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_00c7c186__thread_safe_static_guard_0__),
      cde_l2_00c7c186__thread_safe_static_guard_0__ == -1)) {
     cde_l2_a01beac8_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_00c7c186__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_a01beac8_Count) {
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
LAB_007ec40d:
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
          if (cVar3 == '\0') goto LAB_007ec40d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_a01beac8_Count);
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





//==== 007ec520 GetFactory_007ec520 ====


/* public: virtual class util__Reflectable * (__cdecl*
   MissileProtocol__ReflectionInfoStruct_struct_MissileProtocol___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall MissileProtocol__ReflectionInfoStruct_struct_MissileProtocol___GetFactory__o2
          (ReflectionInfoStruct_L_struct_MissileProtocol_G_ *this)

{
  return StaticFactory;
}





//==== 007ec530 GetTypeName_007ec530 ====


/* public: virtual class util__Str_L_char_G_  CapitalShipProtocol__ReflectionInfoStruct_struct_CapitalShipProtocol___GetTypeName(void)const  */

Str_L_char_G_ * 
CapitalShipProtocol__ReflectionInfoStruct_struct_CapitalShipProtocol___GetTypeName
          (ReflectionInfoStruct_L_struct_CapitalShipProtocol_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"CapitalShipProtocol");
  return __return_storage_ptr__;
}





//==== 007ec550 GetMembers_007ec550 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   CapitalShipProtocol__ReflectionInfoStruct_struct_CapitalShipProtocol___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
CapitalShipProtocol__ReflectionInfoStruct_struct_CapitalShipProtocol___GetMembers__o2
          (ReflectionInfoStruct_L_struct_CapitalShipProtocol_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_2ed4ead7__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_2ed4ead7__thread_safe_static_guard_0__),
      cde_l2_2ed4ead7__thread_safe_static_guard_0__ == -1)) {
     cde_l2_a2d37b61_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_2ed4ead7__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_a2d37b61_Count);
  iVar3 = 0;
  if (0 <  cde_l2_a2d37b61_Count) {
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
    } while (iVar3 <  cde_l2_a2d37b61_Count);
  }
  return in_stack_00000004;
}





//==== 007ec690 GetMember_007ec690 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   CapitalShipProtocol__ReflectionInfoStruct_struct_CapitalShipProtocol___GetMember(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
CapitalShipProtocol__ReflectionInfoStruct_struct_CapitalShipProtocol___GetMember__o2
          (ReflectionInfoStruct_L_struct_CapitalShipProtocol_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_a5499ed0__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_a5499ed0__thread_safe_static_guard_0__),
      cde_l2_a5499ed0__thread_safe_static_guard_0__ == -1)) {
     cde_l2_c85ba4e1_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_a5499ed0__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_c85ba4e1_Count) {
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
LAB_007ec71d:
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
          if (cVar3 == '\0') goto LAB_007ec71d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_c85ba4e1_Count);
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





//==== 007ec830 GetFactory_007ec830 ====


/* public: virtual class util__Reflectable * (__cdecl*
   CapitalShipProtocol__ReflectionInfoStruct_struct_CapitalShipProtocol___GetFactory(void)const
   )(void) */

_func_Reflectable_ptr * 
__thiscall CapitalShipProtocol__ReflectionInfoStruct_struct_CapitalShipProtocol___GetFactory__o2
          (ReflectionInfoStruct_L_struct_CapitalShipProtocol_G_ *this)

{
  return StaticFactory;
}





//==== 007ec840 GetTypeName_007ec840 ====


/* public: virtual class util__Str_L_char_G_  WeaponsProtocol__ReflectionInfoStruct_struct_WeaponsProtocol___GetTypeName(void)const  */

Str_L_char_G_ * 
WeaponsProtocol__ReflectionInfoStruct_struct_WeaponsProtocol___GetTypeName
          (ReflectionInfoStruct_L_struct_WeaponsProtocol_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"WeaponsProtocol");
  return __return_storage_ptr__;
}





//==== 007ec860 GetMembers_007ec860 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   WeaponsProtocol__ReflectionInfoStruct_struct_WeaponsProtocol___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
WeaponsProtocol__ReflectionInfoStruct_struct_WeaponsProtocol___GetMembers__o2
          (ReflectionInfoStruct_L_struct_WeaponsProtocol_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_4b75de74__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_4b75de74__thread_safe_static_guard_0__),
      cde_l2_4b75de74__thread_safe_static_guard_0__ == -1)) {
     cde_l2_bb99de3b_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_4b75de74__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_bb99de3b_Count);
  iVar3 = 0;
  if (0 <  cde_l2_bb99de3b_Count) {
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
    } while (iVar3 <  cde_l2_bb99de3b_Count);
  }
  return in_stack_00000004;
}





//==== 007ec9a0 GetMember_007ec9a0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   WeaponsProtocol__ReflectionInfoStruct_struct_WeaponsProtocol___GetMember(class util__Str_L_char_G_
   const &)const  */

Str_L_char_G_ * 
WeaponsProtocol__ReflectionInfoStruct_struct_WeaponsProtocol___GetMember__o2
          (ReflectionInfoStruct_L_struct_WeaponsProtocol_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_418a1b30__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_418a1b30__thread_safe_static_guard_0__),
      cde_l2_418a1b30__thread_safe_static_guard_0__ == -1)) {
     cde_l2_2de5811c_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_418a1b30__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_2de5811c_Count) {
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
LAB_007eca2d:
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
          if (cVar3 == '\0') goto LAB_007eca2d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_2de5811c_Count);
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





//==== 007ecb40 GetFactory_007ecb40 ====


/* public: virtual class util__Reflectable * (__cdecl*
   WeaponsProtocol__ReflectionInfoStruct_struct_WeaponsProtocol___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall WeaponsProtocol__ReflectionInfoStruct_struct_WeaponsProtocol___GetFactory__o2
          (ReflectionInfoStruct_L_struct_WeaponsProtocol_G_ *this)

{
  return StaticFactory;
}





//==== 007ecb50 GetTypeName_007ecb50 ====


/* public: virtual class util__Str_L_char_G_  CombatProtocol__ReflectionInfoStruct_struct_CombatProtocol___GetTypeName(void)const  */

Str_L_char_G_ * 
CombatProtocol__ReflectionInfoStruct_struct_CombatProtocol___GetTypeName
          (ReflectionInfoStruct_L_struct_CombatProtocol_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"CombatProtocol");
  return __return_storage_ptr__;
}





//==== 007ecb70 GetMembers_007ecb70 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   CombatProtocol__ReflectionInfoStruct_struct_CombatProtocol___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
CombatProtocol__ReflectionInfoStruct_struct_CombatProtocol___GetMembers__o2
          (ReflectionInfoStruct_L_struct_CombatProtocol_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_609ccb48__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_609ccb48__thread_safe_static_guard_0__),
      cde_l2_609ccb48__thread_safe_static_guard_0__ == -1)) {
     cde_l2_5872413e_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_609ccb48__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_5872413e_Count);
  iVar3 = 0;
  if (0 <  cde_l2_5872413e_Count) {
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
    } while (iVar3 <  cde_l2_5872413e_Count);
  }
  return in_stack_00000004;
}





//==== 007eccb0 GetMember_007eccb0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   CombatProtocol__ReflectionInfoStruct_struct_CombatProtocol___GetMember(class util__Str_L_char_G_
   const &)const  */

Str_L_char_G_ * 
CombatProtocol__ReflectionInfoStruct_struct_CombatProtocol___GetMember__o2
          (ReflectionInfoStruct_L_struct_CombatProtocol_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_ba7af144__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_ba7af144__thread_safe_static_guard_0__),
      cde_l2_ba7af144__thread_safe_static_guard_0__ == -1)) {
     cde_l2_99cec2b2_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_ba7af144__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_99cec2b2_Count) {
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
LAB_007ecd3d:
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
          if (cVar3 == '\0') goto LAB_007ecd3d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_99cec2b2_Count);
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





//==== 007ece50 GetFactory_007ece50 ====


/* public: virtual class util__Reflectable * (__cdecl*
   CombatProtocol__ReflectionInfoStruct_struct_CombatProtocol___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall CombatProtocol__ReflectionInfoStruct_struct_CombatProtocol___GetFactory__o2
          (ReflectionInfoStruct_L_struct_CombatProtocol_G_ *this)

{
  return StaticFactory;
}





//==== 007eeaa0 MapPtrCast_ModuleCompartment_WeaponCompartment_ ====


/* class util__Darray_L_classutil__WeakPtr_L_structModuleCompartment_G__G_ __cdecl
   util__MapPtrCast_struct_ModuleCompartment_struct_WeaponCompartment(class util__Darray_L_class_util__WeakPtr_L_structWeaponCompartment_G__G_ const &) */

void __cdecl
util__MapPtrCast_struct_ModuleCompartment_struct_WeaponCompartment__o2
          (Darray_L_class_util__WeakPtr_L_struct_WeaponCompartment_G___G_ *param_1)

{
  undefined8 stack0xfffffffc;
  ReferenceController *this;
  undefined4 uVar1;
  int iVar2;
  ReferenceController *this_00;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int *in_stack_00000008;
  int iStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar4 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
  Darray_L_class_util__WeakPtr_L_class_Body_G___G___Darray_L_class_util__WeakPtr_L_class_Body_G___G_
            ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)param_1,iVar4);
  iStack_c = 0;
  iVar4 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
  if (iStack_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*in_stack_00000008)(&iStack_c);
      this = (ReferenceController *)puVar5[1];
      uVar1 = *puVar5;
      if (this != (ReferenceController *)0x0) {
        util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(this);
        util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(this);
        ReferenceController__ReleaseWeakReference(this);
      }
      iVar4 = *(int *)(param_1 + 8);
      iStack_10 = iVar4 + 1;
      Darray_L_class_util__WeakPtr_L_class_Body_G___G___SetSize
                ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)param_1,&iStack_10);
      bVar3 = Darray_L_class_util__WeakPtr_L_class_Body_G___G___CheckSize
                        ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)param_1,iVar4);
      if (bVar3) {
        iVar4 = *(int *)(param_1 + 8);
        iVar2 = *(int *)(param_1 + 4);
        this_00 = *(ReferenceController **)(iVar2 + -4 + iVar4 * 8);
        *(undefined4 *)(iVar2 + -8 + iVar4 * 8) = uVar1;
        *(ReferenceController **)(iVar2 + -4 + iVar4 * 8) = this;
        if (this != (ReferenceController *)0x0) {
          util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(this);
        }
        if (this_00 != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(this_00);
        }
      }
      if (this != (ReferenceController *)0x0) {
        ReferenceController__ReleaseWeakReference(this);
      }
      iStack_c = iStack_c + 1;
      iVar4 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
    } while (iStack_c < iVar4);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 007eed00 CombatProtocol_007eed00 ====

/* public: __thiscall CombatProtocol__CombatProtocol(void) */

CombatProtocol * __thiscall CombatProtocol__CombatProtocol(CombatProtocol *this)

{
  this->_pad_0x4_1 = 0;
  this->_pad_0x8_2 = 0;
  this->_pad_0xc_3 = 0;
  this->_pad_0x0_0 = (int)&vftable_524;
  (this->CapitalShipDoctrine).Data._pad_0x4_1 = 0;
  (this->CapitalShipDoctrine).Data._pad_0x8_2 = 0;
  (this->CapitalShipDoctrine).Data._pad_0xc_3 = 0;
  (this->CapitalShipDoctrine).Data._pad_0x0_0 = (int)&vftable_522;
  (this->CapitalShipDoctrine).Data.EnterCombatOrder = AIOrder__Broadside;
  (this->CapitalShipDoctrine).Data.TargetInRangeOrder = AIOrder__Broadside;
  (this->CapitalShipDoctrine).Data.TargetsOutOfRangeOrder = AIOrder__Homing;
  (this->CapitalShipDoctrine).Data.CivilianShipCombatOrder = AIOrder__Scatter;
  (this->CapitalShipDoctrine).IsValidData = false;
  (this->DroneDoctrine).Data._pad_0x4_1 = 0;
  (this->DroneDoctrine).Data._pad_0x8_2 = 0;
  *(undefined4 *)&(*(undefined4 *)((char *)&((this->DroneDoctrine).Data) + 0xc)) = 0;
  *(undefined4 *)&(this->DroneDoctrine).Data.MinimumInterceptTime_s = 0;
  *(undefined4 *)((int)&(this->DroneDoctrine).Data.MinimumInterceptTime_s + 4) = 0x403e0000;
  *(undefined4 *)&(this->DroneDoctrine).Data.InterceptDeltaVLimit_Percent = 0;
  *(undefined4 *)((int)&(this->DroneDoctrine).Data.InterceptDeltaVLimit_Percent + 4) = 0x3fd00000;
  (this->DroneDoctrine).Data._pad_0x0_0 = (int)&vftable_520;
  (this->DroneDoctrine).Data.LaunchDefensively = true;
  (this->DroneDoctrine).Data.WeaponDestroyedOrder = AIOrder__Homing;
  (this->DroneDoctrine).Data.TargetInRangeOrder = AIOrder__Broadside;
  (this->DroneDoctrine).Data.TargetOutOfRangeOrder = AIOrder__Homing;
  (this->DroneDoctrine).Data.EnemyMissilesInboundOrder = AIOrder__Scatter;
  (this->DroneDoctrine).IsValidData = false;
  (this->MissileDoctrine).Data._pad_0x4_1 = 0;
  (this->MissileDoctrine).Data._pad_0x8_2 = 0;
  *(undefined4 *)&(*(undefined4 *)((char *)&((this->MissileDoctrine).Data) + 0xc)) = 0;
  (this->MissileDoctrine).Data.MinimumInterceptTime_s = 60.0;
  (this->MissileDoctrine).Data._pad_0x0_0 = (int)&vftable_521;
  (this->MissileDoctrine).Data.SeekOrder = AIOrder__Homing;
  (this->MissileDoctrine).IsValidData = false;
  (this->WeaponsDoctrine).Data._pad_0x4_1 = 0;
  (this->WeaponsDoctrine).Data._pad_0x8_2 = 0;
  (this->WeaponsDoctrine).Data._pad_0xc_3 = 0;
  (this->WeaponsDoctrine).Data._pad_0x0_0 = (int)&vftable_523;
  (this->WeaponsDoctrine).Data.NeverIgnoreRange = false;
  (this->WeaponsDoctrine).Data.IgnoreRangeIfOverAmmoThreshold_Percent = 1.0;
  *(undefined2 *)&(this->WeaponsDoctrine).Data.IgnoreRangeOnlyWhenThreatsAreFiring = 1;
  (this->WeaponsDoctrine).Data.TargetPriorities._pad_0x0_0 =
       (int)&vftable_2;
  (this->WeaponsDoctrine).Data.TargetPriorities.Data = (TargetPriority *)0x0;
  (this->WeaponsDoctrine).Data.TargetPriorities.Size = 0;
  (this->WeaponsDoctrine).Data.TargetPriorities.Capacity = 0;
  (this->WeaponsDoctrine).IsValidData = false;
  (this->FlareDoctrine).Data._pad_0x4_1 = 0;
  (this->FlareDoctrine).Data._pad_0x8_2 = 0;
  (this->FlareDoctrine).Data._pad_0xc_3 = 0;
  (this->FlareDoctrine).Data._pad_0x0_0 = (int)&vftable_519;
  (this->FlareDoctrine).Data.AntiFlareOrder = AIOrder__Homing;
  (this->FlareDoctrine).Data.FlaresNeededInFlight = 3;
  (this->FlareDoctrine).Data.LaunchEvenIfHeatIsNotEnough = false;
  (this->FlareDoctrine).Data.OnlyAgainstUncrewedEnemies = false;
  (this->FlareDoctrine).IsValidData = false;
  return this;
}

//==== 007eeeb0 operator___007eeeb0 ====


/* public: struct DroneProtocol *  util__Maybe_L_structDroneProtocol_G___op_arrow(void) */

DroneProtocol * __thiscall
util__Maybe_struct_DroneProtocol___operator(Maybe_L_struct_DroneProtocol_G_ *this)

{
  if (*(char *)&(this[0x38]) == 0) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,"IsValid()",
              (char *)0x0);
    DebugBreak();
  }
  return (DroneProtocol *)this;
}





//==== 007eeee0 operator___007eeee0 ====


/* public: struct MissileProtocol *  util__Maybe_L_structMissileProtocol_G___op_arrow(void)
    */

MissileProtocol * __thiscall
util__Maybe_struct_MissileProtocol___operator(Maybe_L_struct_MissileProtocol_G_ *this)

{
  if (*(char *)&(this[0x20]) == 0) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,"IsValid()",
              (char *)0x0);
    DebugBreak();
  }
  return (MissileProtocol *)this;
}





//==== 007f0290 scalar_deleting_destructor_007f0290 ====


/* public: virtual void * __thiscall CombatProtocol:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall CombatProtocol___scalar_deleting_destructor(CombatProtocol *this,uint param_1)

{
  CombatProtocol___CombatProtocol(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x100);
  }
  return this;
}





//==== 007f02c0 scalar_deleting_destructor_007f02c0 ====

/* public: virtual void * __thiscall WeaponsProtocol:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall WeaponsProtocol___scalar_deleting_destructor(WeaponsProtocol *this,uint param_1)

{
  TargetPriority *pTVar1;
  
  pTVar1 = (this->TargetPriorities).Data;
  (this->TargetPriorities)._pad_0x0_0 = (int)&vftable_2;
  if (pTVar1 != (TargetPriority *)0x0) {
    port_op_delete(pTVar1);
  }
  (this->TargetPriorities).Data = (TargetPriority *)0x0;
  (this->TargetPriorities)._pad_0x0_0 = (int)&vftable;
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x38);
  }
  return this;
}

//==== 007f1410 GetReflectionInfo_007f1410 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   CapitalShipProtocol__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall CapitalShipProtocol__GetReflectionInfo(CapitalShipProtocol *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_5baec1c7__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_5baec1c7__thread_safe_static_guard_0__);
    if ( cde_l2_5baec1c7__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_b0707fd4_ReflectionInfo) = &vftable_516;
      _Init_thread_footer(& cde_l2_5baec1c7__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_b0707fd4_ReflectionInfo;
}





//==== 007f1420 GetReflectionInfo_007f1420 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   CombatProtocol__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall CombatProtocol__GetReflectionInfo(CombatProtocol *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_a9964897__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_a9964897__thread_safe_static_guard_0__);
    if ( cde_l2_a9964897__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_45de7ad0_ReflectionInfo) = &vftable_518;
      _Init_thread_footer(& cde_l2_a9964897__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_45de7ad0_ReflectionInfo;
}





//==== 007f1430 GetReflectionInfo_007f1430 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   DroneProtocol__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall DroneProtocol__GetReflectionInfo(DroneProtocol *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_3059080b__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_3059080b__thread_safe_static_guard_0__);
    if ( cde_l2_3059080b__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_697131ac_ReflectionInfo) = &vftable_514;
      _Init_thread_footer(& cde_l2_3059080b__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_697131ac_ReflectionInfo;
}





//==== 007f1440 GetReflectionInfo_007f1440 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   FlareProtocol__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall FlareProtocol__GetReflectionInfo(FlareProtocol *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_033f5118__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_033f5118__thread_safe_static_guard_0__);
    if ( cde_l2_033f5118__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_90d02fe8_ReflectionInfo) = &vftable_513;
      _Init_thread_footer(& cde_l2_033f5118__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_90d02fe8_ReflectionInfo;
}





//==== 007f1450 GetReflectionInfo_007f1450 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   MissileProtocol__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall MissileProtocol__GetReflectionInfo(MissileProtocol *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_d73ad0b0__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_d73ad0b0__thread_safe_static_guard_0__);
    if ( cde_l2_d73ad0b0__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_587ba6cf_ReflectionInfo) = &vftable_515;
      _Init_thread_footer(& cde_l2_d73ad0b0__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_587ba6cf_ReflectionInfo;
}





//==== 007f1460 GetReflectionInfo_007f1460 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   WeaponsProtocol__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall WeaponsProtocol__GetReflectionInfo(WeaponsProtocol *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_56feaf80__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_56feaf80__thread_safe_static_guard_0__);
    if ( cde_l2_56feaf80__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_cfc557e9_ReflectionInfo) = &vftable_517;
      _Init_thread_footer(& cde_l2_56feaf80__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_cfc557e9_ReflectionInfo;
}





//==== 007f2120 StaticFactory_007f2120 ====

/* public: static class util__Reflectable * __cdecl CapitalShipProtocol__ReflectionInfoStruct_L_struct_CapitalShipProtocol_G___StaticFactory(void) */

Reflectable * __cdecl
CapitalShipProtocol__ReflectionInfoStruct_struct_CapitalShipProtocol___StaticFactory(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x20));
  if (pRVar1 != (Reflectable *)0x0) {
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_522;
    pRVar1[1]._pad_0x0_0 = 2;
    pRVar1[1].Name.Data = (char *)0x2;
    pRVar1[1].Name.Capacity = 1;
    pRVar1[1].Name.Length = 4;
  }
  return (Reflectable *)0x0;
}

//==== 007f2170 StaticFactory_007f2170 ====

/* public: static class util__Reflectable * __cdecl CombatProtocol__ReflectionInfoStruct_L_struct_CombatProtocol_G___StaticFactory(void) */

Reflectable * __cdecl CombatProtocol__ReflectionInfoStruct_struct_CombatProtocol___StaticFactory(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x100));
  if (pRVar1 != (Reflectable *)0x0) {
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_524;
    pRVar1[1].Name.Data = (char *)0x0;
    pRVar1[1].Name.Capacity = 0;
    pRVar1[1].Name.Length = 0;
    pRVar1[1]._pad_0x0_0 = (int)&vftable_522;
    pRVar1[2]._pad_0x0_0 = 2;
    pRVar1[2].Name.Data = (char *)0x2;
    pRVar1[2].Name.Capacity = 1;
    pRVar1[2].Name.Length = 4;
    *(undefined1 *)&pRVar1[3]._pad_0x0_0 = 0;
    pRVar1[3].Name.Length = 0;
    pRVar1[4]._pad_0x0_0 = 0;
    pRVar1[4].Name.Data = (char *)0x0;
    pRVar1[4].Name.Capacity = 0;
    pRVar1[4].Name.Length = 0x403e0000;
    pRVar1[5]._pad_0x0_0 = 0;
    pRVar1[5].Name.Data = (char *)0x3fd00000;
    pRVar1[3].Name.Capacity = (int)&vftable_520;
    *(undefined1 *)&pRVar1[5].Name.Capacity = 1;
    pRVar1[5].Name.Length = 1;
    pRVar1[6]._pad_0x0_0 = 2;
    pRVar1[6].Name.Data = (char *)0x1;
    pRVar1[6].Name.Capacity = 4;
    *(undefined1 *)&pRVar1[7]._pad_0x0_0 = 0;
    pRVar1[7].Name.Length = 0;
    pRVar1[8]._pad_0x0_0 = 0;
    pRVar1[8].Name.Data = (char *)0x0;
    pRVar1[8].Name.Capacity = 0;
    pRVar1[8].Name.Length = 0x404e0000;
    pRVar1[7].Name.Capacity = (int)&vftable_521;
    pRVar1[9]._pad_0x0_0 = 1;
    *(undefined1 *)&pRVar1[9].Name.Capacity = 0;
    pRVar1[10].Name.Data = (char *)0x0;
    pRVar1[10].Name.Capacity = 0;
    pRVar1[10].Name.Length = 0;
    pRVar1[10]._pad_0x0_0 = (int)&vftable_523;
    *(undefined1 *)&pRVar1[0xb]._pad_0x0_0 = 0;
    pRVar1[0xb].Name.Capacity = 0;
    pRVar1[0xb].Name.Length = 0x3ff00000;
    *(undefined2 *)&pRVar1[0xc]._pad_0x0_0 = 1;
    pRVar1[0xc].Name.Data = (char *)&vftable_2;
    pRVar1[0xc].Name.Capacity = 0;
    pRVar1[0xc].Name.Length = 0;
    pRVar1[0xd]._pad_0x0_0 = 0;
    *(undefined1 *)&pRVar1[0xd].Name.Capacity = 0;
    pRVar1[0xe].Name.Data = (char *)0x0;
    pRVar1[0xe].Name.Capacity = 0;
    pRVar1[0xe].Name.Length = 0;
    pRVar1[0xe]._pad_0x0_0 = (int)&vftable_519;
    pRVar1[0xf]._pad_0x0_0 = 1;
    pRVar1[0xf].Name.Data = (char *)0x3;
    *(undefined2 *)&pRVar1[0xf].Name.Capacity = 0;
    *(undefined1 *)&pRVar1[0xf].Name.Length = 0;
  }
  return (Reflectable *)0x0;
}

//==== 007f2340 StaticFactory_007f2340 ====

/* public: static class util__Reflectable * __cdecl DroneProtocol__ReflectionInfoStruct_L_struct_DroneProtocol_G___StaticFactory(void) */

Reflectable * __cdecl DroneProtocol__ReflectionInfoStruct_struct_DroneProtocol___StaticFactory(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x38));
  if (pRVar1 != (Reflectable *)0x0) {
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_520;
    pRVar1[1]._pad_0x0_0 = 0;
    pRVar1[1].Name.Data = (char *)0x403e0000;
    pRVar1[1].Name.Capacity = 0;
    pRVar1[1].Name.Length = 0x3fd00000;
    *(undefined1 *)&pRVar1[2]._pad_0x0_0 = 1;
    pRVar1[2].Name.Data = (char *)0x1;
    pRVar1[2].Name.Capacity = 2;
    pRVar1[2].Name.Length = 1;
    pRVar1[3]._pad_0x0_0 = 4;
  }
  return (Reflectable *)0x0;
}

//==== 007f23a0 StaticFactory_007f23a0 ====

/* public: static class util__Reflectable * __cdecl FlareProtocol__ReflectionInfoStruct_L_struct_FlareProtocol_G___StaticFactory(void) */

Reflectable * __cdecl FlareProtocol__ReflectionInfoStruct_struct_FlareProtocol___StaticFactory(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x1c));
  if (pRVar1 != (Reflectable *)0x0) {
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_519;
    pRVar1[1]._pad_0x0_0 = 1;
    pRVar1[1].Name.Data = (char *)0x3;
    *(undefined2 *)&pRVar1[1].Name.Capacity = 0;
  }
  return (Reflectable *)0x0;
}

//==== 007f23f0 StaticFactory_007f23f0 ====

/* public: static class util__Reflectable * __cdecl MissileProtocol__ReflectionInfoStruct_L_struct_MissileProtocol_G___StaticFactory(void) */

Reflectable * __cdecl MissileProtocol__ReflectionInfoStruct_struct_MissileProtocol___StaticFactory(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x20));
  if (pRVar1 != (Reflectable *)0x0) {
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_521;
    pRVar1[1]._pad_0x0_0 = 0;
    pRVar1[1].Name.Data = (char *)0x404e0000;
    pRVar1[1].Name.Capacity = 1;
  }
  return (Reflectable *)0x0;
}

//==== 007f2440 StaticFactory_007f2440 ====

/* public: static class util__Reflectable * __cdecl WeaponsProtocol__ReflectionInfoStruct_L_struct_WeaponsProtocol_G___StaticFactory(void) */

Reflectable * __cdecl WeaponsProtocol__ReflectionInfoStruct_struct_WeaponsProtocol___StaticFactory(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x38));
  if (pRVar1 != (Reflectable *)0x0) {
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_523;
    *(undefined1 *)&pRVar1[1]._pad_0x0_0 = 0;
    pRVar1[1].Name.Capacity = 0;
    pRVar1[1].Name.Length = 0x3ff00000;
    *(undefined2 *)&pRVar1[2]._pad_0x0_0 = 1;
    pRVar1[2].Name.Data = (char *)&vftable_2;
    pRVar1[2].Name.Capacity = 0;
    pRVar1[2].Name.Length = 0;
    pRVar1[3]._pad_0x0_0 = 0;
  }
  return (Reflectable *)0x0;
}

//==== 007f24a0 StaticGetMemberByIndex_007f24a0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   CapitalShipProtocol__ReflectionInfoStruct_struct_CapitalShipProtocol___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
CapitalShipProtocol__ReflectionInfoStruct_struct_CapitalShipProtocol___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_b3980bda__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_b3980bda__thread_safe_static_guard_0__);
    if ( cde_l2_b3980bda__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_e450802c_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00986adc = 0;
      _DAT_00986ae0 = 0;
      _DAT_00986ae4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986ae8,"Unused");
      _DAT_00986af4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986af8,"EnterCombatOrder");
      _DAT_00986b04 = 9;
      _DAT_00986b08 = 0x10;
      _DAT_00986b0c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986b10,"AIOrder");
      _DAT_00986b1c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986b20,"TargetInRangeOrder");
      _DAT_00986b2c = 9;
      _DAT_00986b30 = 0x14;
      _DAT_00986b34 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986b38,"AIOrder");
      _DAT_00986b44 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986b48,"TargetsOutOfRangeOrder");
      _DAT_00986b54 = 9;
      _DAT_00986b58 = 0x18;
      _DAT_00986b5c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986b60,"AIOrder");
      _DAT_00986b6c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986b70,"CivilianShipCombatOrder");
      _DAT_00986b7c = 9;
      _DAT_00986b80 = 0x1c;
      _DAT_00986b84 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986b88,"AIOrder");
      _DAT_00986b94 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_CapitalShipProtocol__ReflectionInfoStruct_struct_CapitalShipProtocol___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_b3980bda__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_e450802c_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_00986adc + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00986ae0 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_00986ae4 + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00986ae8 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_00986af4)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_00986af5)[iVar1];
  return __return_storage_ptr__;
}





//==== 007f26a0 StaticGetMemberByIndex_007f26a0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   CombatProtocol__ReflectionInfoStruct_struct_CombatProtocol___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
CombatProtocol__ReflectionInfoStruct_struct_CombatProtocol___StaticGetMemberByIndex__o2
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_d23c3887__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_d23c3887__thread_safe_static_guard_0__);
    if ( cde_l2_d23c3887__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_f43c8352_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_009866f4 = 0;
      _DAT_009866f8 = 0;
      _DAT_009866fc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986700,"Unused");
      _DAT_0098670c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986710,"CapitalShipDoctrine");
      _DAT_0098671c = 10;
      _DAT_00986720 = 0x10;
      _DAT_00986724 = 0x20;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986728,"CapitalShipProtocol");
      _DAT_00986734 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986738,"DroneDoctrine");
      _DAT_00986744 = 10;
      _DAT_00986748 = 0x38;
      _DAT_0098674c = 0x38;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986750,"DroneProtocol");
      _DAT_0098675c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986760,"MissileDoctrine");
      _DAT_0098676c = 10;
      _DAT_00986770 = 0x78;
      _DAT_00986774 = 0x20;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986778,"MissileProtocol");
      _DAT_00986784 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986788,"WeaponsDoctrine");
      _DAT_00986794 = 10;
      _DAT_00986798 = 0xa0;
      _DAT_0098679c = 0x38;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009867a0,"WeaponsProtocol");
      _DAT_009867ac = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009867b0,"FlareDoctrine");
      _DAT_009867bc = 10;
      _DAT_009867c0 = 0xe0;
      _DAT_009867c4 = 0x1c;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009867c8,"FlareProtocol");
      _DAT_009867d4 = 0x100;
      atexit( private__static_struct_util__ClassMember_const___cdecl_CombatProtocol__ReflectionInfoStruct_struct_CombatProtocol___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_d23c3887__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_f43c8352_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_009866f4 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_009866f8 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_009866fc + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00986700 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0098670c)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0098670d)[iVar1];
  return __return_storage_ptr__;
}





//==== 007f28e0 StaticGetMemberByIndex_007f28e0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl DroneProtocol__ReflectionInfoStruct_struct_DroneProtocol___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
DroneProtocol__ReflectionInfoStruct_struct_DroneProtocol___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_beb86a94__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_beb86a94__thread_safe_static_guard_0__);
    if ( cde_l2_beb86a94__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_0810a178_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00986e64 = 0;
      _DAT_00986e68 = 0;
      _DAT_00986e6c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986e70,"Unused");
      _DAT_00986e7c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986e80,"MinimumInterceptTime_s");
      _DAT_00986e8c = 4;
      _DAT_00986e90 = 0x10;
      _DAT_00986e94 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986e98,"double");
      _DAT_00986ea4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986ea8,"InterceptDeltaVLimit_Percent");
      _DAT_00986eb4 = 4;
      _DAT_00986eb8 = 0x18;
      _DAT_00986ebc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986ec0,"double");
      _DAT_00986ecc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986ed0,"LaunchDefensively");
      _DAT_00986edc = 1;
      _DAT_00986ee0 = 0x20;
      _DAT_00986ee4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986ee8,"bool");
      _DAT_00986ef4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986ef8,"WeaponDestroyedOrder");
      _DAT_00986f04 = 9;
      _DAT_00986f08 = 0x24;
      _DAT_00986f0c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986f10,"AIOrder");
      _DAT_00986f1c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986f20,"TargetInRangeOrder");
      _DAT_00986f2c = 9;
      _DAT_00986f30 = 0x28;
      _DAT_00986f34 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986f38,"AIOrder");
      _DAT_00986f44 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986f48,"TargetOutOfRangeOrder");
      _DAT_00986f54 = 9;
      _DAT_00986f58 = 0x2c;
      _DAT_00986f5c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986f60,"AIOrder");
      _DAT_00986f6c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986f70,"EnemyMissilesInboundOrder");
      _DAT_00986f7c = 9;
      _DAT_00986f80 = 0x30;
      _DAT_00986f84 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986f88,"AIOrder");
      _DAT_00986f94 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_DroneProtocol__ReflectionInfoStruct_struct_DroneProtocol___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_beb86a94__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_0810a178_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_00986e64 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00986e68 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_00986e6c + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00986e70 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_00986e7c)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_00986e7d)[iVar1];
  return __return_storage_ptr__;
}





//==== 007f2bb0 StaticGetMemberByIndex_007f2bb0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl FlareProtocol__ReflectionInfoStruct_struct_FlareProtocol___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
FlareProtocol__ReflectionInfoStruct_struct_FlareProtocol___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_5bbb93e7__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_5bbb93e7__thread_safe_static_guard_0__);
    if ( cde_l2_5bbb93e7__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_3a7bf7b4_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0098707c = 0;
      _DAT_00987080 = 0;
      _DAT_00987084 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00987088,"Unused");
      _DAT_00987094 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00987098,"AntiFlareOrder");
      _DAT_009870a4 = 9;
      _DAT_009870a8 = 0x10;
      _DAT_009870ac = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009870b0,"AIOrder");
      _DAT_009870bc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009870c0,"FlaresNeededInFlight");
      _DAT_009870cc = 2;
      _DAT_009870d0 = 0x14;
      _DAT_009870d4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009870d8,"int");
      _DAT_009870e4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009870e8,"LaunchEvenIfHeatIsNotEnough");
      _DAT_009870f4 = 1;
      _DAT_009870f8 = 0x18;
      _DAT_009870fc = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00987100,"bool");
      _DAT_0098710c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00987110,"OnlyAgainstUncrewedEnemies");
      _DAT_0098711c = 1;
      _DAT_00987120 = 0x19;
      _DAT_00987124 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00987128,"bool");
      _DAT_00987134 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_FlareProtocol__ReflectionInfoStruct_struct_FlareProtocol___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_5bbb93e7__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_3a7bf7b4_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_0098707c + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00987080 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_00987084 + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00987088 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_00987094)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_00987095)[iVar1];
  return __return_storage_ptr__;
}





//==== 007f2db0 StaticGetMemberByIndex_007f2db0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   MissileProtocol__ReflectionInfoStruct_struct_MissileProtocol___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
MissileProtocol__ReflectionInfoStruct_struct_MissileProtocol___StaticGetMemberByIndex__o2
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_7d3d01af__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_7d3d01af__thread_safe_static_guard_0__);
    if ( cde_l2_7d3d01af__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_9f39d869_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00986c6c = 0;
      _DAT_00986c70 = 0;
      _DAT_00986c74 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986c78,"Unused");
      _DAT_00986c84 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986c88,"MinimumInterceptTime_s");
      _DAT_00986c94 = 4;
      _DAT_00986c98 = 0x10;
      _DAT_00986c9c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986ca0,"double");
      _DAT_00986cac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986cb0,"SeekOrder");
      _DAT_00986cbc = 9;
      _DAT_00986cc0 = 0x18;
      _DAT_00986cc4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986cc8,"AIOrder");
      _DAT_00986cd4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986cd8,"EnemyMissilesInboundOrder");
      _DAT_00986ce4 = 9;
      _DAT_00986ce8 = 0x1c;
      _DAT_00986cec = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986cf0,"AIOrder");
      _DAT_00986cfc = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_MissileProtocol__ReflectionInfoStruct_struct_MissileProtocol___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_7d3d01af__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_9f39d869_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_00986c6c + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00986c70 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_00986c74 + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00986c78 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_00986c84)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_00986c85)[iVar1];
  return __return_storage_ptr__;
}





//==== 007f2f70 StaticGetMemberByIndex_007f2f70 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   WeaponsProtocol__ReflectionInfoStruct_struct_WeaponsProtocol___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
WeaponsProtocol__ReflectionInfoStruct_struct_WeaponsProtocol___StaticGetMemberByIndex__o2
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_cddc8895__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_cddc8895__thread_safe_static_guard_0__);
    if ( cde_l2_cddc8895__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_a5b3737c_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00986904 = 0;
      _DAT_00986908 = 0;
      _DAT_0098690c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986910,"Unused");
      _DAT_0098691c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986920,"NeverIgnoreRange");
      _DAT_0098692c = 1;
      _DAT_00986930 = 0x10;
      _DAT_00986934 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986938,"bool");
      _DAT_00986944 = 0;
      util__Str_char___Str_char
                ((Str_L_char_G_ *)&DAT_00986948,"IgnoreRangeIfOverAmmoThreshold_Percent");
      _DAT_00986954 = 4;
      _DAT_00986958 = 0x18;
      _DAT_0098695c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986960,"double");
      _DAT_0098696c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986970,"IgnoreRangeOnlyWhenThreatsAreFiring");
      _DAT_0098697c = 1;
      _DAT_00986980 = 0x20;
      _DAT_00986984 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986988,"bool");
      _DAT_00986994 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986998,"IgnoreRangeForLaunchers");
      _DAT_009869a4 = 1;
      _DAT_009869a8 = 0x21;
      _DAT_009869ac = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009869b0,"bool");
      _DAT_009869bc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009869c0,"TargetPriorities");
      _DAT_009869cc = 9;
      _DAT_009869d0 = 0x24;
      _DAT_009869d4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009869d8,"TargetPriority");
      _DAT_009869e4 = 1;
      atexit( private__static_struct_util__ClassMember_const___cdecl_WeaponsProtocol__ReflectionInfoStruct_struct_WeaponsProtocol___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_cddc8895__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_a5b3737c_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_00986904 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00986908 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0098690c + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00986910 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0098691c)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0098691d)[iVar1];
  return __return_storage_ptr__;
}





//==== 007f31b0 StaticGetMemberCount_007f31b0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl CapitalShipProtocol__ReflectionInfoStruct_struct_CapitalShipProtocol___StaticGetMemberCount(void) */

int __cdecl
CapitalShipProtocol__ReflectionInfoStruct_struct_CapitalShipProtocol___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_9bd77045__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_9bd77045__thread_safe_static_guard_0__);
    if ( cde_l2_9bd77045__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_0584522c_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00986a04 = 0;
      _DAT_00986a08 = 0;
      _DAT_00986a0c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986a10,"Unused");
      _DAT_00986a1c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986a20,"EnterCombatOrder");
      _DAT_00986a2c = 9;
      _DAT_00986a30 = 0x10;
      _DAT_00986a34 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986a38,"AIOrder");
      _DAT_00986a44 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986a48,"TargetInRangeOrder");
      _DAT_00986a54 = 9;
      _DAT_00986a58 = 0x14;
      _DAT_00986a5c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986a60,"AIOrder");
      _DAT_00986a6c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986a70,"TargetsOutOfRangeOrder");
      _DAT_00986a7c = 9;
      _DAT_00986a80 = 0x18;
      _DAT_00986a84 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986a88,"AIOrder");
      _DAT_00986a94 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986a98,"CivilianShipCombatOrder");
      _DAT_00986aa4 = 9;
      _DAT_00986aa8 = 0x1c;
      _DAT_00986aac = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986ab0,"AIOrder");
      _DAT_00986abc = 0;
      atexit( private__static_int_const___cdecl_CapitalShipProtocol__ReflectionInfoStruct_struct_CapitalShipProtocol___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_9bd77045__thread_safe_static_guard_0__);
    }
  }
  return 5;
}





//==== 007f3360 StaticGetMemberCount_007f3360 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl CombatProtocol__ReflectionInfoStruct_struct_CombatProtocol___StaticGetMemberCount(void) */

int __cdecl CombatProtocol__ReflectionInfoStruct_struct_CombatProtocol___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_6c4fbee8__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_6c4fbee8__thread_safe_static_guard_0__);
    if ( cde_l2_6c4fbee8__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_f7094b1b_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_009865fc = 0;
      _DAT_00986600 = 0;
      _DAT_00986604 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986608,"Unused");
      _DAT_00986614 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986618,"CapitalShipDoctrine");
      _DAT_00986624 = 10;
      _DAT_00986628 = 0x10;
      _DAT_0098662c = 0x20;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986630,"CapitalShipProtocol");
      _DAT_0098663c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986640,"DroneDoctrine");
      _DAT_0098664c = 10;
      _DAT_00986650 = 0x38;
      _DAT_00986654 = 0x38;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986658,"DroneProtocol");
      _DAT_00986664 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986668,"MissileDoctrine");
      _DAT_00986674 = 10;
      _DAT_00986678 = 0x78;
      _DAT_0098667c = 0x20;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986680,"MissileProtocol");
      _DAT_0098668c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986690,"WeaponsDoctrine");
      _DAT_0098669c = 10;
      _DAT_009866a0 = 0xa0;
      _DAT_009866a4 = 0x38;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009866a8,"WeaponsProtocol");
      _DAT_009866b4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009866b8,"FlareDoctrine");
      _DAT_009866c4 = 10;
      _DAT_009866c8 = 0xe0;
      _DAT_009866cc = 0x1c;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009866d0,"FlareProtocol");
      _DAT_009866dc = 0x100;
      atexit( private__static_int_const___cdecl_CombatProtocol__ReflectionInfoStruct_struct_CombatProtocol___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_6c4fbee8__thread_safe_static_guard_0__);
    }
  }
  return 6;
}





//==== 007f3560 StaticGetMemberCount_007f3560 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl DroneProtocol__ReflectionInfoStruct_struct_DroneProtocol___StaticGetMemberCount(void) */

int __cdecl DroneProtocol__ReflectionInfoStruct_struct_DroneProtocol___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_adc9bb85__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_adc9bb85__thread_safe_static_guard_0__);
    if ( cde_l2_adc9bb85__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_62b197b3_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00986d1c = 0;
      _DAT_00986d20 = 0;
      _DAT_00986d24 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986d28,"Unused");
      _DAT_00986d34 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986d38,"MinimumInterceptTime_s");
      _DAT_00986d44 = 4;
      _DAT_00986d48 = 0x10;
      _DAT_00986d4c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986d50,"double");
      _DAT_00986d5c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986d60,"InterceptDeltaVLimit_Percent");
      _DAT_00986d6c = 4;
      _DAT_00986d70 = 0x18;
      _DAT_00986d74 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986d78,"double");
      _DAT_00986d84 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986d88,"LaunchDefensively");
      _DAT_00986d94 = 1;
      _DAT_00986d98 = 0x20;
      _DAT_00986d9c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986da0,"bool");
      _DAT_00986dac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986db0,"WeaponDestroyedOrder");
      _DAT_00986dbc = 9;
      _DAT_00986dc0 = 0x24;
      _DAT_00986dc4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986dc8,"AIOrder");
      _DAT_00986dd4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986dd8,"TargetInRangeOrder");
      _DAT_00986de4 = 9;
      _DAT_00986de8 = 0x28;
      _DAT_00986dec = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986df0,"AIOrder");
      _DAT_00986dfc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986e00,"TargetOutOfRangeOrder");
      _DAT_00986e0c = 9;
      _DAT_00986e10 = 0x2c;
      _DAT_00986e14 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986e18,"AIOrder");
      _DAT_00986e24 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986e28,"EnemyMissilesInboundOrder");
      _DAT_00986e34 = 9;
      _DAT_00986e38 = 0x30;
      _DAT_00986e3c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986e40,"AIOrder");
      _DAT_00986e4c = 0;
      atexit( private__static_int_const___cdecl_DroneProtocol__ReflectionInfoStruct_struct_DroneProtocol___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_adc9bb85__thread_safe_static_guard_0__);
    }
  }
  return 8;
}





//==== 007f37e0 StaticGetMemberCount_007f37e0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl FlareProtocol__ReflectionInfoStruct_struct_FlareProtocol___StaticGetMemberCount(void) */

int __cdecl FlareProtocol__ReflectionInfoStruct_struct_FlareProtocol___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_52d9f63c__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_52d9f63c__thread_safe_static_guard_0__);
    if ( cde_l2_52d9f63c__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_c84af5fa_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00986fac = 0;
      _DAT_00986fb0 = 0;
      _DAT_00986fb4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986fb8,"Unused");
      _DAT_00986fc4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986fc8,"AntiFlareOrder");
      _DAT_00986fd4 = 9;
      _DAT_00986fd8 = 0x10;
      _DAT_00986fdc = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986fe0,"AIOrder");
      _DAT_00986fec = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986ff0,"FlaresNeededInFlight");
      _DAT_00986ffc = 2;
      _DAT_00987000 = 0x14;
      _DAT_00987004 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00987008,"int");
      _DAT_00987014 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00987018,"LaunchEvenIfHeatIsNotEnough");
      _DAT_00987024 = 1;
      _DAT_00987028 = 0x18;
      _DAT_0098702c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00987030,"bool");
      _DAT_0098703c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00987040,"OnlyAgainstUncrewedEnemies");
      _DAT_0098704c = 1;
      _DAT_00987050 = 0x19;
      _DAT_00987054 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00987058,"bool");
      _DAT_00987064 = 0;
      atexit( private__static_int_const___cdecl_FlareProtocol__ReflectionInfoStruct_struct_FlareProtocol___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_52d9f63c__thread_safe_static_guard_0__);
    }
  }
  return 5;
}





//==== 007f3990 StaticGetMemberCount_007f3990 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl MissileProtocol__ReflectionInfoStruct_struct_MissileProtocol___StaticGetMemberCount(void) */

int __cdecl
MissileProtocol__ReflectionInfoStruct_struct_MissileProtocol___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_15e77e48__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_15e77e48__thread_safe_static_guard_0__);
    if ( cde_l2_15e77e48__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_96bd0754_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00986bbc = 0;
      _DAT_00986bc0 = 0;
      _DAT_00986bc4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986bc8,"Unused");
      _DAT_00986bd4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986bd8,"MinimumInterceptTime_s");
      _DAT_00986be4 = 4;
      _DAT_00986be8 = 0x10;
      _DAT_00986bec = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986bf0,"double");
      _DAT_00986bfc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986c00,"SeekOrder");
      _DAT_00986c0c = 9;
      _DAT_00986c10 = 0x18;
      _DAT_00986c14 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986c18,"AIOrder");
      _DAT_00986c24 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986c28,"EnemyMissilesInboundOrder");
      _DAT_00986c34 = 9;
      _DAT_00986c38 = 0x1c;
      _DAT_00986c3c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986c40,"AIOrder");
      _DAT_00986c4c = 0;
      atexit( private__static_int_const___cdecl_MissileProtocol__ReflectionInfoStruct_struct_MissileProtocol___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_15e77e48__thread_safe_static_guard_0__);
    }
  }
  return 4;
}





//==== 007f3b00 StaticGetMemberCount_007f3b00 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl WeaponsProtocol__ReflectionInfoStruct_struct_WeaponsProtocol___StaticGetMemberCount(void) */

int __cdecl
WeaponsProtocol__ReflectionInfoStruct_struct_WeaponsProtocol___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_f0630572__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_f0630572__thread_safe_static_guard_0__);
    if ( cde_l2_f0630572__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_172b94ec_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_009867fc = 0;
      _DAT_00986800 = 0;
      _DAT_00986804 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986808,"Unused");
      _DAT_00986814 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986818,"NeverIgnoreRange");
      _DAT_00986824 = 1;
      _DAT_00986828 = 0x10;
      _DAT_0098682c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986830,"bool");
      _DAT_0098683c = 0;
      util__Str_char___Str_char
                ((Str_L_char_G_ *)&DAT_00986840,"IgnoreRangeIfOverAmmoThreshold_Percent");
      _DAT_0098684c = 4;
      _DAT_00986850 = 0x18;
      _DAT_00986854 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986858,"double");
      _DAT_00986864 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986868,"IgnoreRangeOnlyWhenThreatsAreFiring");
      _DAT_00986874 = 1;
      _DAT_00986878 = 0x20;
      _DAT_0098687c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986880,"bool");
      _DAT_0098688c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00986890,"IgnoreRangeForLaunchers");
      _DAT_0098689c = 1;
      _DAT_009868a0 = 0x21;
      _DAT_009868a4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009868a8,"bool");
      _DAT_009868b4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009868b8,"TargetPriorities");
      _DAT_009868c4 = 9;
      _DAT_009868c8 = 0x24;
      _DAT_009868cc = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009868d0,"TargetPriority");
      _DAT_009868dc = 1;
      atexit( private__static_int_const___cdecl_WeaponsProtocol__ReflectionInfoStruct_struct_WeaponsProtocol___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_f0630572__thread_safe_static_guard_0__);
    }
  }
  return 6;
}





//==== 007f3d00 StaticGetReflectionInfo_007f3d00 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct CapitalShipProtocol__ReflectionInfoStruct_L_structCapitalShipProtocol_G_ *
   __cdecl CapitalShipProtocol__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_struct_CapitalShipProtocol_G_ * __cdecl
CapitalShipProtocol__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_5baec1c7__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_5baec1c7__thread_safe_static_guard_0__);
    if ( cde_l2_5baec1c7__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_b0707fd4_ReflectionInfo) = &vftable_516;
      _Init_thread_footer(& cde_l2_5baec1c7__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_b0707fd4_ReflectionInfo;
}





//==== 007f3d60 StaticGetReflectionInfo_007f3d60 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct CombatProtocol__ReflectionInfoStruct_L_structCombatProtocol_G_ * __cdecl
   CombatProtocol__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_struct_CombatProtocol_G_ * __cdecl CombatProtocol__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_a9964897__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_a9964897__thread_safe_static_guard_0__);
    if ( cde_l2_a9964897__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_45de7ad0_ReflectionInfo) = &vftable_518;
      _Init_thread_footer(& cde_l2_a9964897__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_45de7ad0_ReflectionInfo;
}





//==== 007f3dc0 StaticGetReflectionInfo_007f3dc0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct DroneProtocol__ReflectionInfoStruct_L_structDroneProtocol_G_ * __cdecl
   DroneProtocol__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_struct_DroneProtocol_G_ * __cdecl DroneProtocol__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_3059080b__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_3059080b__thread_safe_static_guard_0__);
    if ( cde_l2_3059080b__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_697131ac_ReflectionInfo) = &vftable_514;
      _Init_thread_footer(& cde_l2_3059080b__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_697131ac_ReflectionInfo;
}





//==== 007f3e20 StaticGetReflectionInfo_007f3e20 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct FlareProtocol__ReflectionInfoStruct_L_structFlareProtocol_G_ * __cdecl
   FlareProtocol__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_struct_FlareProtocol_G_ * __cdecl FlareProtocol__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_033f5118__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_033f5118__thread_safe_static_guard_0__);
    if ( cde_l2_033f5118__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_90d02fe8_ReflectionInfo) = &vftable_513;
      _Init_thread_footer(& cde_l2_033f5118__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_90d02fe8_ReflectionInfo;
}





//==== 007f3e80 StaticGetReflectionInfo_007f3e80 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct MissileProtocol__ReflectionInfoStruct_L_structMissileProtocol_G_ * __cdecl
   MissileProtocol__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_struct_MissileProtocol_G_ * __cdecl
MissileProtocol__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_d73ad0b0__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_d73ad0b0__thread_safe_static_guard_0__);
    if ( cde_l2_d73ad0b0__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_587ba6cf_ReflectionInfo) = &vftable_515;
      _Init_thread_footer(& cde_l2_d73ad0b0__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_587ba6cf_ReflectionInfo;
}





//==== 007f3ee0 StaticGetReflectionInfo_007f3ee0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct WeaponsProtocol__ReflectionInfoStruct_L_structWeaponsProtocol_G_ * __cdecl
   WeaponsProtocol__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_struct_WeaponsProtocol_G_ * __cdecl
WeaponsProtocol__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_56feaf80__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_56feaf80__thread_safe_static_guard_0__);
    if ( cde_l2_56feaf80__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_cfc557e9_ReflectionInfo) = &vftable_517;
      _Init_thread_footer(& cde_l2_56feaf80__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_cfc557e9_ReflectionInfo;
}





//==== 007f6230 Join_WorldLight_ ====


/* class util__Darray_L_structWorldLight_G_ __cdecl util__Join_L_structWorldLight_G_(class
   util__Darray_L_classutil__Darray_L_structWorldLight_G__G_ const &) */

void __cdecl util__Join_struct_WorldLight(Darray_L_class_util__Darray_L_struct_WorldLight_G___G_ *param_1)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  int iVar2;
  int *piVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *in_stack_00000008;
  undefined4 auStack_88 [24];
  undefined1 uStack_28;
  int *piStack_20;
  undefined4 *puStack_1c;
  int iStack_18;
  int *piStack_14;
  int iStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  uVar8 = 0;
  piStack_14 = in_stack_00000008;
  iStack_c = 0;
  iVar2 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
  if (iStack_c < iVar2) {
    do {
      piVar3 = (int *)(**(code **)*in_stack_00000008)(&iStack_c);
      iVar2 = (**(code **)(uintptr_t)(*piVar3 + 0xc))();
      iStack_c = iStack_c + 1;
      uVar8 = uVar8 + iVar2;
      iVar2 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
    } while (iStack_c < iVar2);
  }
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined ***)param_1 = &vftable_168;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar8;
  if (((int)uVar8 < 0) || (0x3fffffff < (int)uVar8)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar8) {
    pvVar4 = (void *)(uintptr_t)(port_op_new(-(uint)((int)((ulonglong)uVar8 * 0x68 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar8 * 0x68)));
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else if (uVar8 != 0) {
      puVar6 = (undefined4 *)((int)pvVar4 + 0x28);
      do {
        puVar6[-10] = 0;
        puVar6[-9] = 0;
        puVar6[-8] = 0;
        puVar6[-7] = 0;
        puVar6[-6] = 0;
        puVar6[-5] = 0;
        puVar6[-4] = 0;
        puVar6[-3] = 0;
        puVar6[-2] = 0;
        puVar6[-1] = 0;
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[6] = 0;
        puVar6[7] = 0;
        puVar6[8] = 0;
        puVar6[9] = 0;
        puVar6[10] = 0;
        puVar6[0xb] = 0;
        puVar6[0xc] = 0;
        puVar6[0xd] = 0;
        *(undefined1 *)(puVar6 + 0xe) = 0;
        uVar8 = uVar8 - 1;
        puVar6 = puVar6 + 0x1a;
      } while (uVar8 != 0);
    }
    iVar2 = 0;
    *(void **)(param_1 + 4) = pvVar4;
    if (0 < *(int *)(param_1 + 0xc)) {
      iVar5 = 0;
      do {
        uStack_28 = 0;
        puVar9 = (undefined4 *)(*(int *)(param_1 + 4) + iVar5);
        auStack_88[0] = 0;
        auStack_88[1] = 0;
        auStack_88[2] = 0;
        auStack_88[3] = 0;
        iVar2 = iVar2 + 1;
        iVar5 = iVar5 + 0x68;
        auStack_88[4] = 0;
        auStack_88[5] = 0;
        auStack_88[6] = 0;
        auStack_88[7] = 0;
        auStack_88[8] = 0;
        auStack_88[9] = 0;
        auStack_88[10] = 0;
        auStack_88[0xb] = 0;
        auStack_88[0xc] = 0;
        auStack_88[0xd] = 0;
        auStack_88[0xe] = 0;
        auStack_88[0xf] = 0;
        auStack_88[0x10] = 0;
        auStack_88[0x11] = 0;
        auStack_88[0x12] = 0;
        auStack_88[0x13] = 0;
        auStack_88[0x14] = 0;
        auStack_88[0x15] = 0;
        auStack_88[0x16] = 0;
        auStack_88[0x17] = 0;
        puVar6 = auStack_88;
        for (iVar7 = 0x1a; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar9 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        }
        in_stack_00000008 = piStack_14;
      } while (iVar2 < *(int *)(param_1 + 0xc));
    }
  }
  iStack_10 = 0;
  iVar2 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
  if (iStack_10 < iVar2) {
    do {
      piVar3 = (int *)(**(code **)*in_stack_00000008)(&iStack_10);
      iStack_c = 0;
      piStack_20 = piVar3;
      iVar2 = (**(code **)(uintptr_t)(*piVar3 + 0xc))();
      if (iStack_c < iVar2) {
        do {
          puStack_1c = (undefined4 *)(**(code **)*piVar3)(&iStack_c);
          iVar2 = *(int *)(param_1 + 8);
          iStack_18 = iVar2 + 1;
          Darray_L_struct_WorldLight_G___SetSize((Darray_L_struct_WorldLight_G_ *)param_1,&iStack_18);
          bVar1 = Darray_L_struct_WorldLight_G___CheckSize((Darray_L_struct_WorldLight_G_ *)param_1,iVar2);
          piVar3 = piStack_20;
          if (bVar1) {
            puVar6 = puStack_1c;
            puVar9 = (undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 0x68 + -0x68);
            for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar9 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar9 = puVar9 + 1;
            }
          }
          iStack_c = iStack_c + 1;
          iVar2 = (**(code **)(uintptr_t)(*piStack_20 + 0xc))();
        } while (iStack_c < iVar2);
      }
      in_stack_00000008 = piStack_14;
      iStack_10 = iStack_10 + 1;
      iVar2 = (**(code **)(uintptr_t)(*piStack_14 + 0xc))();
    } while (iStack_10 < iVar2);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 007f6bb0 MethodCaller__private__void___thiscall_TacticalManager__AddActorTrigger_class_util__WeakPtr_class_Actor___ ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: static void __cdecl util__DelegateFactory_L_classTacticalManager_Cvoid_Cclass_util__WeakPtr_L_classActor_G__G___MethodCaller_L__private_void__thiscall_TacticalManager__AddActorTrigger_classutil__WeakPtr_L_classActor_G___G_(void *,class
   util__WeakPtr_L_classActor_G_) */

void util__DelegateFactory_L_TacticalManager_Cvoid_Cutil__WeakPtr_L_Actor_G___G___MethodCaller_L__private__void___thiscall_TacticalManager__AddActorTrigger_class_util__WeakPtr_L_class_Actor_G___G_
               (void *param_1,WeakPtr_L_Actor_G_ param_2)

{
  int *piVar1;
  HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *pHVar2;
  undefined4 *puVar3;
  Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_ *pDVar4;
  int iVar5;
  
  if (param_2.Controller != (ReferenceController *)0x0) {
    util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(param_2.Controller);
  }
  TacticalManager__OnBodiesAddedOrRemoved();
  if (param_2.Controller == (ReferenceController *)0x0) {
    return;
  }
  ReferenceController__ReleaseWeakReference(param_2.Controller);
  piVar1 = &(param_2.Controller)->WeakReferenceCount;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.cpp",0x15
              ,"WeakReferenceCount >= 0",(char *)0x0);
    DebugBreak();
  }
  if (((param_2.Controller)->StrongReferenceCount == 0) &&
     ((param_2.Controller)->WeakReferenceCount == 0)) {
    if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_0098956c) &&
       (_Init_thread_header(&DAT_0098956c), DAT_0098956c == -1)) {
      DAT_00989568 = (undefined4)(uintptr_t)((HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0);
      pHVar2 = (HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)(uintptr_t)(port_op_new(8));
      if (pHVar2 == (HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0) {
        pHVar2 = (HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0;
      }
      else {
        pHVar2->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                        *)0x0;
        pHVar2->Capacity = 0;
        pHVar2->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                        *)0x0;
        pHVar2->Capacity = 10000;
        puVar3 = (undefined4 *)(uintptr_t)(port_op_new(0x27104));
        if (puVar3 == (undefined4 *)0x0) {
          pHVar2->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                          *)0x0;
        }
        else {
          *puVar3 = 10000;
          iVar5 = 10000;
          pDVar4 = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_ *
                   )(puVar3 + 1);
          do {
            pDVar4->_pad_0x0_0 =
                 (int)&vftable_554;
            pDVar4->Data = (tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0;
            pDVar4->Size = 0;
            pDVar4->Capacity = 0;
            iVar5 = iVar5 + -1;
            pDVar4 = pDVar4 + 1;
          } while (iVar5 != 0);
          pHVar2->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                          *)(puVar3 + 1);
        }
      }
      DAT_00989568 = (undefined4)(uintptr_t)(pHVar2);
      atexit(FUN_0090ff50);
      _Init_thread_footer(&DAT_0098956c);
    }
    ReferenceControllerRegistry__Unregister
              ((ReferenceControllerRegistry *)DAT_00989568,param_2.Controller);
  }
  return;
}

//==== 007f6bf0 MethodCaller__public__void___thiscall_StrategicManager__CloseEndCredits_void__ ====


/* public: static void __cdecl util__DelegateFactory_L_class_StrategicManager_Cvoid_G___MethodCaller_L__public_void__thiscall_StrategicManager__CloseEndCredits_void__G_(void *) */

void __cdecl
util__DelegateFactory_class_StrategicManager_void___MethodCaller__public__void___thiscall_StrategicManager__CloseEndCredits_void(void *param_1)

{
  *(undefined1 *)((int)param_1 + 0xa8) = 1;
  return;
}





//==== 007f6c80 MethodCaller__private__void___thiscall_TacticalManager__DisableCameraLock_void__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static void __cdecl util__DelegateFactory_L_class_TacticalManager_Cvoid_G___MethodCaller_L__private_void__thiscall_TacticalManager__DisableCameraLock_void__G_(void *) */

void util__DelegateFactory_class_TacticalManager_void___MethodCaller__private__void___thiscall_TacticalManager__DisableCameraLock_void(void *param_1)

{
  bool bVar1;
  
  if (*(ReferenceController **)((int)param_1 + 0x25c) != (ReferenceController *)0x0) {
    bVar1 = ReferenceController__IsDataStillValid(*(ReferenceController **)((int)param_1 + 0x25c));
    if (!bVar1) {
      *(undefined4 *)((int)param_1 + 600) = 0;
    }
  }
  HUDTactical__SetCameraLock(false);
  return;
}





//==== 007f6cc0 MethodCallerConst__public__bool___thiscall_TacticalManager__ShouldGridBeShowing_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_L_class_TacticalManager_Cbool_G___MethodCallerConst_L__public_bool__thiscall_TacticalManager__ShouldGridBeShowing_void_const_G_(void const * const) */

bool util__DelegateFactory_L_TacticalManager_Cbool_G___MethodCallerConst_L__public__bool___thiscall_TacticalManager__ShouldGridBeShowing_void_const__G_
               (void *param_1)

{
  bool bVar1;
  char cVar2;
  Preferences *this;
  
  this = (Preferences *)Manager__GetOptions(param_1);
  bVar1 = Preferences__IsShowingCelestialGridWhenRotating(this);
  if (bVar1) {
    if ((*(ReferenceController **)((int)param_1 + 0x274) != (ReferenceController *)0x0) &&
       (bVar1 = ReferenceController__IsDataStillValid
                          (*(ReferenceController **)((int)param_1 + 0x274)), !bVar1)) {
      *(undefined4 *)((int)param_1 + 0x270) = 0;
    }
    bVar1 = UIWidget__IsCaptured(*(UIWidget **)((int)param_1 + 0x270));
    if (bVar1) {
      TacticalManager__GetStrategicGame_Memoize();
      if (*(char *)((int)param_1 + 0xec) == '\0') {
        LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                  "IsValid()",(char *)0x0);
        DebugBreak();
      }
      bVar1 = StrategicManager__IsNotInScreenshotMode();
      if (bVar1) {
        return true;
      }
    }
  }
  if ((*(ReferenceController **)((int)param_1 + 0x26c) != (ReferenceController *)0x0) &&
     (bVar1 = ReferenceController__IsDataStillValid(*(ReferenceController **)((int)param_1 + 0x26c))
     , !bVar1)) {
    *(undefined4 *)((int)param_1 + 0x268) = 0;
  }
  cVar2 = (**(code **)(**(int **)((int)param_1 + 0x268) + 8))();
  if (cVar2 != '\0') {
    return true;
  }
  return false;
}





//==== 007f6cd0 MethodCallerConst__public__bool___thiscall_StrategicManager__ShouldShowEndCredits_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_L_class_StrategicManager_Cbool_G___MethodCallerConst_L__public_bool__thiscall_StrategicManager__ShouldShowEndCredits_void_const_G_(void const * const) */

bool util__DelegateFactory_L_StrategicManager_Cbool_G___MethodCallerConst_L__public__bool___thiscall_StrategicManager__ShouldShowEndCredits_void_const__G_
               (void *param_1)

{
  bool bVar1;
  
  bVar1 = StrategicManager__IsInEndCreditsLevel();
  if (bVar1) {
    bVar1 = NotificationManager__AreNotificationsVisible
                      ((NotificationManager *)((int)param_1 + 0xa80));
    if (!bVar1) {
      return true;
    }
  }
  return false;
}





//==== 007f6ed0 NewActor_Actor_ ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: class util__WeakPtr_L_classActor_G_  ActorHandler__NewActor_L_classActor_G_(class
   util__SharedPtr_L_classActor_G_) */

undefined4 * 
ActorHandler__NewActor_class_Actor
          (ActorHandler *this,undefined4 *param_2,Actor *param_3,ReferenceController *param_4)

{
  SharedPtr_L_Actor_G_ *pSVar1;
  undefined4 *puVar2;
  bool bVar3;
  ReferenceControllerRegistry *pRVar4;
  SharedPtr_L_Actor_G_ *pSVar5;
  Actor *pAVar6;
  Actor *pAStack_18;
  ReferenceController *pRStack_14;
  undefined4 *puStack_10;
  ActorHandler *pAStack_c;
  char cStack_5;
  
  puStack_10 = param_2;
  pAStack_c = this;
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(param_4);
  }
  pSVar5 = (pAStack_c->CreationPending).Data;
  pSVar1 = pSVar5 + (pAStack_c->CreationPending).Size;
  for (; pSVar5 != pSVar1; pSVar5 = pSVar5 + 1) {
    if ((param_4 == pSVar5->Controller) && (param_3 == pSVar5->Pointer)) {
      cStack_5 = '\x01';
      goto LAB_007f6f28;
    }
  }
  cStack_5 = '\0';
LAB_007f6f28:
  if ((param_4 != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__ReleaseStrongReference(param_4), bVar3)) {
    if (param_3 != (Actor *)0x0) {
      (**(code **)(param_3->_pad_0x0_0 + 4))(1);
    }
    pAVar6 = param_3;
    pRVar4 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar4,pAVar6);
  }
  if (cStack_5 != '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\infrastructure\\manager.h",0x25,
                    "!CreationPending.Contains(CreatedActor.template Cast_L_Actor_G_())",(char *)0x0);
    DebugBreak();
  }
  pAStack_18 = param_3;
  pRStack_14 = param_4;
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(param_4);
  }
  pSVar5 = (pAStack_c->CreationPending).Data;
  pSVar1 = pSVar5 + (pAStack_c->CreationPending).Size;
  for (; pSVar5 != pSVar1; pSVar5 = pSVar5 + 1) {
    if ((param_4 == pSVar5->Controller) && (param_3 == pSVar5->Pointer)) goto LAB_007f6fb9;
  }
  util__Darray_class_util__SharedPtr_struct_UIWidget_____Add
            ((Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *)&pAStack_c->CreationPending,
             (SharedPtr_L_struct_UIWidget_G_ *)&pAStack_18);
LAB_007f6fb9:
  if ((param_4 != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__ReleaseStrongReference(param_4), bVar3)) {
    if (param_3 != (Actor *)0x0) {
      (**(code **)(param_3->_pad_0x0_0 + 4))(1);
    }
    pAVar6 = param_3;
    pRVar4 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar4,pAVar6);
  }
  (**(code **)(param_3->_pad_0x0_0 + 0x38))();
  puVar2 = puStack_10;
  *puStack_10 = (undefined4)(uintptr_t)(param_3);
  puStack_10[1] = (undefined4)(uintptr_t)(param_4);
  if (((param_4 != (ReferenceController *)0x0) &&
      (util__ReferenceController__AddWeakReference(param_4), param_4 != (ReferenceController *)0x0))
     && (bVar3 = util__ReferenceController__ReleaseStrongReference(param_4), bVar3)) {
    if (param_3 != (Actor *)0x0) {
      (**(code **)(param_3->_pad_0x0_0 + 4))(1);
    }
    pRVar4 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar4,param_3);
  }
  return puVar2;
}





//==== 007f7050 QuadraticMinPositive_double_ ====


/* class util__Maybe_L_double_G_ __cdecl util__QuadraticMinPositive_double(class util__Maybe_L_struct_util__tuple2_L_double_Cdouble_G__G_ const &) */

Maybe_L_double_G_ * __cdecl
util__QuadraticMinPositive_double
          (Maybe_L_double_G_ *__return_storage_ptr__,Maybe_L_struct_util__tuple2_L_double_Cdouble_G___G_ *param_1
          )

{
  double dVar1;
  bool bVar2;
  double dVar3;
  
  if (*(char *)&(param_1[0x10]) == 0) {
    __return_storage_ptr__->IsValidData = false;
    __return_storage_ptr__->Data = 0.0;
    return __return_storage_ptr__;
  }
  dVar3 = *(double *)param_1;
  dVar1 = *(double *)(param_1 + 8);
  if (dVar3 < 0.0) {
    if (0.0 <= dVar1) {
      __return_storage_ptr__->IsValidData = true;
      __return_storage_ptr__->Data = dVar1;
      return __return_storage_ptr__;
    }
    dVar3 = 0.0;
    bVar2 = false;
  }
  else {
    bVar2 = true;
    if (0.0 <= dVar1) {
      if (dVar1 <= dVar3) {
        dVar3 = dVar1;
      }
      __return_storage_ptr__->IsValidData = true;
      __return_storage_ptr__->Data = dVar3;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->IsValidData = bVar2;
  __return_storage_ptr__->Data = dVar3;
  return __return_storage_ptr__;
}





//==== 007f7ba0 SharedPtr_EffectManager_ ====


/* public:  SharedPtr_L_classEffectManager_G___dtor(void) */

void __thiscall
util__SharedPtr_class_EffectManager____SharedPtr_class_EffectManager(SharedPtr_L_class_EffectManager_G_ *this)

{
  undefined4 *puVar1;
  bool bVar2;
  ReferenceControllerRegistry *this_00;
  int iVar3;
  undefined4 *puVar4;
  void *pvVar5;
  
  if (*(ReferenceController **)(this + 4) != (ReferenceController *)0x0) {
    bVar2 = ReferenceController__ReleaseStrongReference(*(ReferenceController **)(this + 4));
    if (bVar2) {
      pvVar5 = *(void **)this;
      if (pvVar5 != (void *)0x0) {
        *(undefined ***)((int)pvVar5 + 0xfaee8) = &vftable_8;
        if (*(void **)((int)pvVar5 + 0xfaeec) != (void *)0x0) {
          port_op_delete(*(void **)((int)pvVar5 + 0xfaeec));
        }
        *(undefined4 *)((int)pvVar5 + 0xfaeec) = 0;
        *(undefined ***)((int)pvVar5 + 0xfaee8) = (undefined **)(&vftable);
        VertexBufferObjectInterface___VertexBufferObjectInterface((VertexBufferObjectInterface *)((int)pvVar5 + 0xfae58));
        *(undefined ***)((int)pvVar5 + 0xfae48) = &vftable_8;
        if (*(void **)((int)pvVar5 + 0xfae4c) != (void *)0x0) {
          port_op_delete(*(void **)((int)pvVar5 + 0xfae4c));
        }
        *(undefined4 *)((int)pvVar5 + 0xfae4c) = 0;
        *(undefined ***)((int)pvVar5 + 0xfae48) = (undefined **)(&vftable);
        VertexBufferObjectInterface___VertexBufferObjectInterface((VertexBufferObjectInterface *)((int)pvVar5 + 0xfadb8));
        if (*(void **)((int)pvVar5 + 0xfad60) != (void *)0x0) {
          port_op_delete(*(void **)((int)pvVar5 + 0xfad60));
          *(undefined4 *)((int)pvVar5 + 0xfad60) = 0;
        }
        *(undefined ***)((int)pvVar5 + 0xf8190) = &vftable_512;
        iVar3 = 100;
        puVar4 = (undefined4 *)((int)pvVar5 + 0xfad90);
        do {
          puVar1 = puVar4 + -0x1c;
          iVar3 = iVar3 + -1;
          *puVar1 = (undefined4)(uintptr_t)(&vftable_15);
          if ((void *)puVar4[-0x1b] != (void *)0x0) {
            port_op_delete((void *)puVar4[-0x1b]);
          }
          puVar4[-0x1b] = 0;
          *puVar1 = (undefined4)(uintptr_t)(&vftable);
          puVar4 = puVar1;
        } while (iVar3 != 0);
        if (*(void **)((int)pvVar5 + 0xf8118) != (void *)0x0) {
          port_op_delete(*(void **)((int)pvVar5 + 0xf8118));
          *(undefined4 *)((int)pvVar5 + 0xf8118) = 0;
        }
        *(undefined ***)((int)pvVar5 + 0xa2208) = &vftable_511;
        if (*(void **)((int)pvVar5 + 0xa1a28) != (void *)0x0) {
          port_op_delete(*(void **)((int)pvVar5 + 0xa1a28));
          *(undefined4 *)((int)pvVar5 + 0xa1a28) = 0;
        }
        *(undefined ***)((int)pvVar5 + 0x22ad8) = &vftable_510;
        if (*(void **)((int)pvVar5 + 0x21740) != (void *)0x0) {
          port_op_delete(*(void **)((int)pvVar5 + 0x21740));
          *(undefined4 *)((int)pvVar5 + 0x21740) = 0;
        }
        *(undefined ***)((int)pvVar5 + 0x3f0) = &vftable_509;
        port_op_delete(pvVar5,0xfaef8);
        pvVar5 = *(void **)this;
      }
      this_00 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
      ReferenceControllerRegistry__PointerWasDestroyed(this_00,pvVar5);
      *(undefined4 *)this = 0;
    }
  }
  return;
}





//==== 007f80f0 operator__007f80f0 ====


/* public: class util__Darray_L_structWorldLight_G_  util__Darray_L_struct_WorldLight_G___op_add(class util__Darray_L_structWorldLight_G_ const &) */

Darray_L_struct_WorldLight_G_ * 
util__Darray_struct_WorldLight___operator__o3
          (Darray_L_struct_WorldLight_G_ *this,Darray_L_struct_WorldLight_G_ *param_1)

{
  undefined8 stack0x00000008;
  Darray_L_struct_WorldLight_G_ *pDVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  Darray_L_struct_WorldLight_G_ *in_stack_00000008;
  
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  util__Darray_struct_WorldLight___Darray_struct_WorldLight(param_1,this);
  pDVar1 = in_stack_00000008;
  if (*(int *)(param_1 + 8) == 0) {
    util__Darray_struct_WorldLight___operator__o2(param_1,in_stack_00000008);
    return param_1;
  }
  iVar2 = (**(code **)(*(int *)in_stack_00000008 + 0xc))();
  if (iVar2 != 0) {
    iVar2 = *(int *)(param_1 + 8);
    iVar3 = (**(code **)(*(int *)in_stack_00000008 + 0xc))();
    in_stack_00000008 = (Darray_L_struct_WorldLight_G_ *)(iVar3 + *(int *)(param_1 + 8));
    SetSize(param_1,(int *)&stack0x00000008);
    CheckSize(param_1,iVar2);
    puVar7 = *(undefined4 **)(pDVar1 + 4);
    puVar4 = (undefined4 *)(iVar2 * 0x68 + *(int *)(param_1 + 4));
    if (puVar4 != (undefined4 *)(*(int *)(param_1 + 8) * 0x68 + *(int *)(param_1 + 4))) {
      do {
        puVar5 = puVar4 + 0x1a;
        puVar6 = puVar7;
        for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar4 = puVar4 + 1;
        }
        puVar7 = puVar7 + 0x1a;
        puVar4 = puVar5;
      } while (puVar5 != (undefined4 *)(*(int *)(param_1 + 8) * 0x68 + *(int *)(param_1 + 4)));
    }
    return param_1;
  }
  return param_1;
}





//==== 007fe030 GetClassID_007fe030 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual unsigned long  TacticalManager__GetClassID(void)const  */

ulong TacticalManager__GetClassID(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_93bc0da9__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_93bc0da9__thread_safe_static_guard_0__);
    if ( cde_l2_93bc0da9__thread_safe_static_guard_0__ == -1) {
       cde_l2r_622f9afa_ID =
           util__GetHash("TacticalManager");
      _Init_thread_footer(& cde_l2_93bc0da9__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2r_622f9afa_ID;
}





//==== 008059b0 SwapRemove ====


/* public: bool  util__Darray_L_classutil__WeakPtr_L_classDebrisComponent_G___G___SwapRemove(class util__WeakPtr_L_classDebrisComponent_G_ const &) */

bool 
util__Darray_class_util__WeakPtr_class_DebrisComponent_____SwapRemove
          (Darray_L_class_util__WeakPtr_L_class_DebrisComponent_G___G_ *this,
          WeakPtr_L_class_DebrisComponent_G_ *param_1)

{
  int *piVar1;
  ReferenceController *this_00;
  int iVar2;
  ReferenceController *pRVar3;
  int *piVar4;
  
  piVar4 = *(int **)(this + 4);
  piVar1 = piVar4 + *(int *)(this + 8) * 2;
  if (piVar4 != piVar1) {
    do {
      this_00 = (ReferenceController *)piVar4[1];
      if (*(ReferenceController **)(param_1 + 4) == this_00) {
        iVar2 = *piVar4;
        if (*(int *)param_1 == iVar2) {
          param_1 = (WeakPtr_L_class_DebrisComponent_G_ *)this_00;
          if (this_00 != (ReferenceController *)0x0) {
            util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(this_00);
            param_1 = (WeakPtr_L_class_DebrisComponent_G_ *)piVar4[1];
          }
          *piVar4 = piVar1[-2];
          pRVar3 = (ReferenceController *)piVar1[-1];
          piVar4[1] = (int)pRVar3;
          if (pRVar3 != (ReferenceController *)0x0) {
            util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(pRVar3);
          }
          if (param_1 != (WeakPtr_L_class_DebrisComponent_G_ *)0x0) {
            ReferenceController__ReleaseWeakReference((ReferenceController *)param_1);
          }
          pRVar3 = (ReferenceController *)piVar1[-1];
          piVar1[-2] = iVar2;
          piVar1[-1] = (int)this_00;
          if (this_00 != (ReferenceController *)0x0) {
            util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(this_00);
          }
          if (pRVar3 != (ReferenceController *)0x0) {
            ReferenceController__ReleaseWeakReference(pRVar3);
          }
          if (this_00 != (ReferenceController *)0x0) {
            ReferenceController__ReleaseWeakReference(this_00);
          }
          param_1 = (WeakPtr_L_class_DebrisComponent_G_ *)(*(int *)(this + 8) + -1);
          Darray_L_class_util__WeakPtr_L_class_Body_G___G___SetSize
                    ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)this,(int *)&param_1);
          return true;
        }
      }
      piVar4 = piVar4 + 2;
    } while (piVar4 != piVar1);
  }
  return false;
}





//==== 00807070 MethodCaller__public__void___thiscall_OrderModeOverlay__Click_void__ ====


/* public: static void __cdecl util__DelegateFactory_L_struct_OrderModeOverlay_Cvoid_G___MethodCaller_L__public_void__thiscallOrderModeOverlay__Click_void__G_(void
   *) */

void __cdecl
util__DelegateFactory_struct_OrderModeOverlay_void___MethodCaller__public__void___thiscall_OrderModeOverlay__Click_void(void *param_1)

{
  int iVar1;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *this;
  int iVar2;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ aDStack_2c [16];
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ aDStack_1c [16];
  int iStack_c;
  int iStack_8;
  
  if (*(int *)((int)param_1 + 0x1c8) == 1) {
    iStack_c = (uint)(*(uint24_t*)((char*)&(iStack_c)+1)) << 8;
    iStack_8 = (uint)(*(uint24_t*)((char*)&(iStack_8)+1)) << 8;
    FUN_004d6990(aDStack_2c,(int)param_1 + 0x1b8,iStack_c);
    FUN_00806ea0(aDStack_1c,aDStack_2c,iStack_8);
    Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___dtor((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)aDStack_2c);
    FUN_00806bd0(aDStack_1c,param_1);
    this = (Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)aDStack_1c;
  }
  else {
    if (*(int *)((int)param_1 + 0x1c8) != 2) {
      return;
    }
    iStack_8 = (uint)(*(uint24_t*)((char*)&(iStack_8)+1)) << 8;
    iStack_c = (uint)(*(uint24_t*)((char*)&(iStack_c)+1)) << 8;
    FUN_004d6990(aDStack_1c,(int)param_1 + 0x1b8,iStack_8);
    FUN_00806ea0(aDStack_2c,aDStack_1c,iStack_c);
    Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___dtor(aDStack_1c);
    FUN_00806900(aDStack_2c,param_1);
    this = aDStack_2c;
  }
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(this);
  *(undefined4 *)((int)param_1 + 0x1c8) = 0;
  iVar2 = *(unsigned int *)(&(Graphics__GlobalState.ViewMatrix.Data[0xf])) / 2;
  iVar1 = *(unsigned int *)((char *)&(Graphics__GlobalState.ViewMatrix.Data[0xf]) + 4) / 2;
  *(undefined4 *)((int)param_1 + 0x1a0) = 0;
  *(undefined4 *)((int)param_1 + 0x1a4) = 0;
  *(undefined4 *)((int)param_1 + 0x1a8) = 0;
  *(undefined4 *)((int)param_1 + 0x1ac) = 0;
  *(int *)((int)param_1 + 0x19c) = iVar1;
  *(undefined8 *)((int)param_1 + 0x1b0) = 0;
  *(int *)((int)param_1 + 0x198) = iVar2;
  return;
}





//==== 008070e0 MethodCallerConst__private__double___thiscall_SpacecraftButton__GetIconDepth_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: static double __cdecl util__DelegateFactory_L_struct_SpacecraftButton_Cdouble_G___MethodCallerConst_L__private_double__thiscall_SpacecraftButton__GetIconDepth_void_const_G_(void const * const) */

double util__DelegateFactory_L_SpacecraftButton_Cdouble_G___MethodCallerConst_L__private__double___thiscall_SpacecraftButton__GetIconDepth_void_const__G_
                 (void *param_1)

{
  int iVar1;
  ReferenceController *this;
  Vec4_L_double_G_ VVar2;
  bool bVar3;
  CameraManager *this_00;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Vec3_L_double_G_ VStack_1c;
  
  if (*(ReferenceController **)((int)param_1 + 0x19c) != (ReferenceController *)0x0) {
    bVar3 = ReferenceController__IsDataStillValid(*(ReferenceController **)((int)param_1 + 0x19c));
    if (!bVar3) {
      *(undefined4 *)((int)param_1 + 0x198) = 0;
    }
  }
  iVar1 = *(int *)((int)param_1 + 0x198);
  this = *(ReferenceController **)(iVar1 + 8);
  if (this != (ReferenceController *)0x0) {
    bVar3 = ReferenceController__IsDataStillValid(this);
    if (!bVar3) {
      *(undefined4 *)(iVar1 + 4) = 0;
    }
  }
  Body__GetPosition_km(&VStack_1c);
  uVar5 = SUB84(VStack_1c.Z,0);
  uVar6 = (undefined4)((ulonglong)VStack_1c.Z >> 0x20);
  this_00 = Manager__GetCameras(*(Manager **)((int)param_1 + 8));
  VVar2.Y = VStack_1c.Y;
  VVar2.X = VStack_1c.X;
  VVar2.Y = VStack_1c.Y;
  VVar2.Z = VStack_1c.Z;
  VVar2.Z = uVar5;
  VVar2.W = uVar6;
  dVar4 = CameraManager__GetScreenDepth(this_00,VVar2);
  return dVar4;
}





//==== 008070f0 MethodCallerConst__private__enum_WidgetShape__Type___thiscall_SpacecraftButton__GetIconShape_void_const__ ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static enum WidgetShape__Type __cdecl util__DelegateFactory_L_structSpacecraftButton_Cenum_WidgetShape__Type_G___MethodCallerConst_L__private_enumWidgetShape__Type__thiscall_SpacecraftButton__GetIconShape_void_const_G_(void const * const) */

int util__DelegateFactory_L_SpacecraftButton_CWidgetShape__Type_G___MethodCallerConst_L__private__enum_WidgetShape__Type___thiscall_SpacecraftButton__GetIconShape_void_const__G_
               (void *param_1)

{
  int iVar1;
  bool bVar2;
  CraftBlueprint *this;
  int TVar3;
  
  if (*(ReferenceController **)((int)param_1 + 0x19c) != (ReferenceController *)0x0) {
    bVar2 = ReferenceController__IsDataStillValid(*(ReferenceController **)((int)param_1 + 0x19c));
    if (!bVar2) {
      *(undefined4 *)((int)param_1 + 0x198) = 0;
    }
  }
  iVar1 = *(int *)((int)param_1 + 0x198);
  if (*(ReferenceController **)(iVar1 + 8) != (ReferenceController *)0x0) {
    bVar2 = ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar1 + 8));
    if (!bVar2) {
      *(undefined4 *)(iVar1 + 4) = 0;
    }
  }
  iVar1 = *(int *)(iVar1 + 4);
  Body__GetSpacecraftComponent_Memoize();
  if (*(char *)(iVar1 + 0x2c) == '\0') {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,"IsValid()",
              (char *)0x0);
    DebugBreak();
  }
  if (*(ReferenceController **)(iVar1 + 0x28) != (ReferenceController *)0x0) {
    bVar2 = ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar1 + 0x28));
    if (!bVar2) {
      *(undefined4 *)(iVar1 + 0x24) = 0;
    }
  }
  this = (CraftBlueprint *)(uintptr_t)(SpacecraftComponent__GetCraftDesign());
  CraftBlueprint__GetShipClass_Memoize(this);
  if ((char)(this->GetMainEngineModules_MemoizedValue).Data._pad_0x0_0 == '\0') {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,"IsValid()",
              (char *)0x0);
    DebugBreak();
  }
  TVar3 = CraftBlueprint__GetShapeFromClass
                    (*(int *)&(this->GetMainEngineModulePlacers_MemoizedValue).IsValidData);
  return TVar3;
}

//==== 00807100 MethodCallerConst__private__struct_util__Vec2_int____thiscall_SpacecraftButton__GetScreenLocation_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static struct util__Vec2_L_int_G_ __cdecl util__DelegateFactory_L_struct_SpacecraftButton_Cstructutil__Vec2_L_int_G__G___MethodCallerConst_L__private_structutil__Vec2_L_int_G____thiscallSpacecraftButton__GetScreenLocation_void_const_G_(void const * const) */

Vec2_L_int_G_ util__DelegateFactory_L_SpacecraftButton_Cutil__Vec2_L_int_G___G___MethodCallerConst_L__private__struct_util__Vec2_L_int_G____thiscall_SpacecraftButton__GetScreenLocation_void_const__G_
                    (void *param_1)

{
  Vec4_L_int_G_ VVar1;
  
  util__DelegateFactory_struct_SpacecraftButton_struct_util__Vec2_int_____MethodCallerConst__private__struct_util__Vec2_int____thiscall_SpacecraftButton__GetScreenLocation_void_const(&VVar1);
  *(undefined4 *)param_1 = *(undefined4 *)VVar1.X;
  *(undefined4 *)((int)param_1 + 4) = ((undefined4 *)VVar1.X)[1];
  VVar1.Y = (int)param_1;
  VVar1.X = (int)param_1;
}





//==== 00809490 MethodCaller__public__void___thiscall_Minimap__OnMarqueeSelect_struct_util__AABB_struct_util__Vec2_int_____ ====


/* public: static void __cdecl util__DelegateFactory_L_structMinimap_Cvoid_Cstructutil__AABB_L_struct_util__Vec2_L_int_G__G__G___MethodCaller_L__public_void__thiscallMinimap__OnMarqueeSelect_struct_util__AABB_L_structutil__Vec2_L_int_G__G___G_(void *,struct util__AABB_L_structutil__Vec2_L_int_G__G_) */

void __cdecl
util__DelegateFactory_struct_Minimap_void_struct_util__AABB_struct_util__Vec2_int_______MethodCaller__public__void___thiscall_Minimap__OnMarqueeSelect_struct_util__AABB_struct_util__Vec2_int__o2
          (Minimap *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  util__DelegateFactory_struct_Minimap_void_struct_util__AABB_struct_util__Vec2_int_______MethodCaller__public__void___thiscall_Minimap__OnMarqueeSelect_struct_util__AABB_struct_util__Vec2_int(param_1,param_2,param_3,param_4,param_5);
  return;
}





//==== 008094b0 MethodCallerConst__private__struct_util__Vec2_int____thiscall_MinimapRangeWidget__GetIconLocation_void_const__ ====


/* public: static struct util__Vec2_L_int_G_ __cdecl util__DelegateFactory_L_struct_MinimapRangeWidget_Cstructutil__Vec2_L_int_G__G___MethodCallerConst_L__private_structutil__Vec2_L_int_G____thiscallMinimapRangeWidget__GetIconLocation_void_const_G_(void const * const) */

Vec2_L_int_G_ __cdecl
util__DelegateFactory_struct_MinimapRangeWidget_struct_util__Vec2_int_____MethodCallerConst__private__struct_util__Vec2_int____thiscall_MinimapRangeWidget__GetIconLocation_void_const
          (void *param_1)

{
  Vec2_L_int_G_ VVar1;
  MinimapRangeWidget *in_stack_00000008;
  
  VVar1 = MinimapRangeWidget__GetIconLocation(in_stack_00000008);
  *(undefined4 *)param_1 = *(undefined4 *)VVar1.X;
  *(undefined4 *)((int)param_1 + 4) = ((undefined4 *)VVar1.X)[1];
  VVar1.Y = (int)param_1;
  VVar1.X = (int)param_1;
}





//==== 008094e0 MethodCallerConst__private__class_util__Str_char____thiscall_MinimapRangeWidget__GetInfo_void_const__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_struct_MinimapRangeWidget_Cclassutil__Str_L_char_G__G___MethodCallerConst_L__private_classutil__Str_L_char_G____thiscallMinimapRangeWidget__GetInfo_void_const_G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_struct_MinimapRangeWidget_class_util__Str_char_____MethodCallerConst__private__class_util__Str_char____thiscall_MinimapRangeWidget__GetInfo_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(MinimapRangeWidget__GetInfo((MinimapRangeWidget *)param_1,&SStack_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 00809520 MethodCallerConst__private__class_util__Str_char____thiscall_MinimapWidget__GetInfo_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_structMinimapWidget_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__private_classutil__Str_L_char_G___thiscall_MinimapWidget__GetInfo_void_const_G_(void const * const) */

Str_L_char_G_ *
util__DelegateFactory_struct_MinimapWidget_class_util__Str_char_____MethodCallerConst__private__class_util__Str_char____thiscall_MinimapWidget__GetInfo_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ local_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(MinimapWidget__GetInfo(&local_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 00809560 MethodCallerConst__private__struct_util__Vec2_int____thiscall_MinimapWidget__GetLocationWithinMinimap_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static struct util__Vec2_L_int_G_ __cdecl util__DelegateFactory_L_structMinimapWidget_Cstruct_util__Vec2_L_int_G__G___MethodCallerConst_L__private_structutil__Vec2_L_int_G___thiscall_MinimapWidget__GetLocationWithinMinimap_void_const_G_(void const * const) */

Vec2_L_int_G_ util__DelegateFactory_L_MinimapWidget_Cutil__Vec2_L_int_G___G___MethodCallerConst_L__private__struct_util__Vec2_L_int_G____thiscall_MinimapWidget__GetLocationWithinMinimap_void_const__G_
                    (void *param_1)

{
  Vec4_L_int_G_ VVar1;
  
  util__DelegateFactory_struct_MinimapWidget_struct_util__Vec2_int_____MethodCallerConst__private__struct_util__Vec2_int____thiscall_MinimapWidget__GetLocationWithinMinimap_void_const(&VVar1);
  *(undefined4 *)param_1 = *(undefined4 *)VVar1.X;
  *(undefined4 *)((int)param_1 + 4) = ((undefined4 *)VVar1.X)[1];
  VVar1.Y = (int)param_1;
  VVar1.X = (int)param_1;
}





//==== 008096a0 MethodCallerConst__private__void____cdecl___thiscall_MinimapRangeWidget__GetWeaponIcon_void_const__void__ ====


/* public: static void (__cdecl*__cdecl util__DelegateFactory_L_structMinimapRangeWidget_Cvoid____cdecl_P__void__G___MethodCallerConst_L__private_void___cdecl_P__thiscall_MinimapRangeWidget__GetWeaponIcon_void_const__void__G_(void const * const))(void) */

_func_void * __cdecl
util__DelegateFactory_struct_MinimapRangeWidget_void____cdecl___void____MethodCallerConst__private__void____cdecl___thiscall_MinimapRangeWidget__GetWeaponIcon_void_const__void
          (void *param_1)

{
  _func_void *p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x008096af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = (_func_void *)(**(code **)(**(int **)((int)param_1 + 0x180) + 0x13c))();
}





//==== 008096d0 MethodCallerConst__private__bool___thiscall_MinimapWidget__ShouldShowIcon_void_const__ ====


/* public: static bool __cdecl util__DelegateFactory_L_struct_MinimapWidget_Cbool_G___MethodCallerConst_L__private_bool__thiscall_MinimapWidget__ShouldShowIcon_void_const_G_(void const * const) */

bool __cdecl
util__DelegateFactory_struct_MinimapWidget_bool___MethodCallerConst__private__bool___thiscall_MinimapWidget__ShouldShowIcon_void_const
          (void *param_1)

{
  bool bVar1;
  
  if ((*(int *)((int)param_1 + 0x198) != 0) &&
     (*(ReferenceController **)((int)param_1 + 0x19c) != (ReferenceController *)0x0)) {
    bVar1 = ReferenceController__IsDataStillValid(*(ReferenceController **)((int)param_1 + 0x19c));
    if (bVar1) {
      return true;
    }
  }
  return false;
}





//==== 00809ad0 Minimap ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: __thiscall Minimap__Minimap(struct UIAttributes) */

Minimap * __thiscall Minimap__Minimap(Minimap *this,UIAttributes param_1)

{
  undefined8 stack0xfffffe8c;
  undefined8 stack0xfffffe9c;
  UIAttributes UVar1;
  UIAttributes UVar2;
  Delegate_L_void_G_ DVar3;
  Delegate_L_void_Cutil__AABB_L_util__Vec2_L_int_G___G___G_ DVar4;
  bool bVar5;
  MarqueeSelect *this_00;
  int *piVar6;
  ReferenceControllerRegistry *pRVar7;
  ReferenceController *this_01;
  undefined8 in_stack_fffffe8c;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [12];
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [44];
  undefined1 auVar19 [44];
  undefined1 in_stack_fffffe9c [308];
  float in_stack_ffffffd0;
  float in_stack_ffffffd4;
  Minimap *pMVar20;
  float in_stack_ffffffd8;
  code *pcVar21;
  float fVar22;
  Minimap *pMVar23;
  Str_L_char_G_ *pSVar24;
  code *pcVar25;
  int *piVar26;
  undefined1 local_10 [8];
  ReferenceController *pRStack_8;
  undefined1 auVar18 [32];
  
  util__Str_char___Str_char((Str_L_char_G_ *)local_10,"RangeFinder");
  pSVar24 = (Str_L_char_G_ *)local_10;
  fVar22 = 1.181053e-38;
  util__Str_char___operator__o8(&param_1.Tag,pSVar24);
  if ((Str_L_char_G_ *)(*(uint32_t*)&(local_10)) != (Str_L_char_G_ *)0x0) {
    fVar22 = 1.1810548e-38;
    port_op_delete((void *)(*(uint32_t*)&(local_10)));
    pSVar24 = (Str_L_char_G_ *)(*(uint32_t*)&(local_10));
  }
  iVar8 = 0x809b15;
  UIAttributes__UIAttributes((UIAttributes *)&stack0xfffffe9c,&param_1);
  iVar9 = 0x809b1c;
  UVar2.TextColor.Data.Value.Hue_degrees = in_stack_ffffffd0;
*(uint32_t *)&auVar10 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 4)));
*(uint32_t *)&auVar13 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 32)));
*(uint32_t *)&auVar14 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 44)));
*(uint32_t *)&auVar16 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 180)));
*(uint32_t *)&auVar17 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 196)));
*(uint32_t *)&auVar19 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 240)));
  UVar2.Parent = (Manager *)(*(uint32_t*)&(in_stack_fffffe9c));
  UVar2.Tag.Data = (char *)(*(uint32_t*)&(auVar10));
  UVar2.Tag.Capacity = (*(uint32_t*)((char*)&(auVar10)+4));
  UVar2.Tag.Length = (*(uint32_t*)((char*)&(auVar10)+8));
  uVar11 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 16)),0);
  uVar12 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 16)),8);
  UVar2.Location.Getter.Callee = (void *)(int)uVar11;
  UVar2.Location.Getter.CallbackFunction =
       (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar11 >> 0x20);
  UVar2.Location.Value.X = (int)uVar12;
  UVar2.Location.Value.Y = (int)((ulonglong)uVar12 >> 0x20);
  UVar2.Visible.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar13));
  UVar2.Visible.Getter.CallbackFunction =
       (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar13)) >> 0x20);
  UVar2.Visible.Value = (bool)auVar13[8];
  (*(uint24_t *)((char *)&(UVar2.Visible) + 9)) = (*(uint24_t*)((char*)&(auVar13)+9));
  UVar2.Enabled.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar14));
  UVar2.Enabled.Getter.CallbackFunction =
       (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar14)) >> 0x20);
  UVar2.Enabled.Value = (bool)auVar14[8];
  (*(uint24_t *)((char *)&(UVar2.Enabled) + 9)) = (*(uint24_t*)((char*)&(auVar14)+9));
  uVar11 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 56)),0);
  uVar12 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 56)),8);
  UVar2.DesiredSize.Getter.Callee = (void *)(int)uVar11;
  UVar2.DesiredSize.Getter.CallbackFunction =
       (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar11 >> 0x20);
  UVar2.DesiredSize.Value.X = (int)uVar12;
  UVar2.DesiredSize.Value.Y = (int)((ulonglong)uVar12 >> 0x20);
  uVar11 = SUB248((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 72)),0);
*(uint32_t *)&auVar15 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 72)),8));
  UVar2.FillProportion.Getter.Callee = (void *)(int)uVar11;
  UVar2.FillProportion.Getter.CallbackFunction =
       (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar11 >> 0x20);
  UVar2.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar15));
  UVar2.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar15)+8));
  uVar11 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 96)),0);
  UVar2.HitTestShape.Getter.Callee = (void *)(int)uVar11;
  UVar2.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar11 >> 0x20));
  UVar2.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 96)),8);
  (*(uint32_t *)((char *)&(UVar2) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffffe9c) + 108));
  uVar11 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 112)),0);
  UVar2.Depth.Getter.Callee = (void *)(int)uVar11;
  UVar2.Depth.Getter.CallbackFunction =
       (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar11 >> 0x20);
  UVar2.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 112)),8);
  uVar11 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 128)),0);
  UVar2.Icon.Getter.Callee = (void *)(int)uVar11;
  UVar2.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar11 >> 0x20));
  UVar2.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 128)),8);
  uVar11 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 140)),0);
*(uint32_t *)&auVar10 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 140)),8));
  UVar2.Tooltip.Getter.Callee = (void *)(int)uVar11;
  UVar2.Tooltip.Getter.CallbackFunction =
       (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar11 >> 0x20);
  UVar2.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar10));
  UVar2.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar10)+4));
  UVar2.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar10)+8));
  uVar11 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 160)),0);
*(uint32_t *)&auVar10 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 160)),8));
  UVar2.VerboseTooltip.Getter.Callee = (void *)(int)uVar11;
  UVar2.VerboseTooltip.Getter.CallbackFunction =
       (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar11 >> 0x20);
  UVar2.VerboseTooltip.Value.Data = (char *)(*(uint32_t*)&(auVar10));
  UVar2.VerboseTooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar10)+4));
  UVar2.VerboseTooltip.Value.Length = (*(uint32_t*)((char*)&(auVar10)+8));
  uVar11 = SUB128((*(uint32_t *)((char *)&(auVar16) + 0)),0);
  UVar2.TextFont.Data.Getter.Callee = (void *)(int)uVar11;
  UVar2.TextFont.Data.Getter.CallbackFunction =
       (_func___cdecl_Font_ptr_void_ptr *)(int)((ulonglong)uVar11 >> 0x20);
  UVar2.TextFont.Data.Value = (Font *)SUB124((*(uint32_t *)((char *)&(auVar16) + 0)),8);
  UVar2.TextFont.IsValidData = (bool)auVar16[0xc];
  (*(uint32_t *)((char *)&(UVar2.TextFont) + 13)) = (*(uint32_t *)((char *)&(auVar16) + 13));
  uVar11 = SUB408((*(uint32_t *)((char *)&(auVar17) + 0)),0);
*(uint32_t *)&auVar18 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar17) + 0)),8));
  UVar2.ForegroundColor.Data.Getter.Callee = (void *)(int)uVar11;
  UVar2.ForegroundColor.Data.Getter.CallbackFunction =
       (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar11 >> 0x20);
  UVar2.ForegroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar18));
  UVar2.ForegroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar18)+4));
  UVar2.ForegroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar18)+8));
  UVar2.ForegroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar18) + 12));
  UVar2.ForegroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar18) + 16));
  UVar2.ForegroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar18) + 20));
  UVar2.ForegroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar18) + 24));
  UVar2.ForegroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar18) + 28));
  UVar2.ForegroundColor.IsValidData = (bool)auVar17[0x28];
  (*(uint32_t *)((char *)&(UVar2.ForegroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar17) + 41));
  uVar11 = SUB408((*(uint32_t *)((char *)&(auVar19) + 0)),0);
*(uint32_t *)&auVar18 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar19) + 0)),8));
  UVar2.BackgroundColor.Data.Getter.Callee = (void *)(int)uVar11;
  UVar2.BackgroundColor.Data.Getter.CallbackFunction =
       (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar11 >> 0x20);
  UVar2.BackgroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar18));
  UVar2.BackgroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar18)+4));
  UVar2.BackgroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar18)+8));
  UVar2.BackgroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar18) + 12));
  UVar2.BackgroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar18) + 16));
  UVar2.BackgroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar18) + 20));
  UVar2.BackgroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar18) + 24));
  UVar2.BackgroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar18) + 28));
  UVar2.BackgroundColor.IsValidData = (bool)auVar19[0x28];
  (*(uint32_t *)((char *)&(UVar2.BackgroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar19) + 41));
  UVar2.TextColor.Data.Getter.Callee = (void *)(int)(*(uint64_t *)((char *)&(in_stack_fffffe9c) + 284));
  UVar2.TextColor.Data.Getter.CallbackFunction =
       (_func___cdecl_Color_void_ptr *)(int)((ulonglong)(*(uint64_t *)((char *)&(in_stack_fffffe9c) + 284)) >> 0x20);
  UVar2.TextColor.Data.Value._pad_0x0_0 = (*(uint32_t *)((char *)&(in_stack_fffffe9c) + 292));
  UVar2.TextColor.Data.Value._pad_0x4_1 = (*(uint32_t *)((char *)&(in_stack_fffffe9c) + 296));
  UVar2.TextColor.Data.Value._pad_0x8_2 = (*(uint32_t *)((char *)&(in_stack_fffffe9c) + 300));
  UVar2.TextColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(in_stack_fffffe9c) + 304));
  UVar2.TextColor.Data.Value.Saturation = in_stack_ffffffd4;
  UVar2.TextColor.Data.Value.Value = in_stack_ffffffd8;
  UVar2.TextColor.Data.Value.Alpha = fVar22;
  (*(uint32_t *)((char *)&(UVar2.TextColor) + 40)) = (uint32_t)(uintptr_t)(pSVar24);
  UIWidget__UIWidget((UIWidget *)this,UVar2);
  this->_pad_0x0_0 = (int)&vftable_530;
  (this->ChildRangeMarkers)._pad_0x0_0 = (int)&vftable_74;
  (this->ChildRangeMarkers).Data = (WeakPtr_L_MinimapRangeWidget_G_ *)0x0;
  (this->ChildRangeMarkers).Size = 0;
  (this->ChildRangeMarkers).Capacity = 0;
  this_00 = (MarqueeSelect *)(uintptr_t)(port_op_new(0x1a0));
  if (this_00 == (MarqueeSelect *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    pcVar25 = util__DelegateFactory_L_Minimap_Cvoid_Cutil__AABB_L_util__Vec2_L_int_G___G___G___MethodCaller_L__public__void___thiscall_Minimap__OnMarqueeSelect_struct_util__AABB_L_struct_util__Vec2_L_int_G___G___G_
    ;
    pcVar21 = (long long int (*)())(_guard_check_icall_nop);
    pMVar20 = this;
    pMVar23 = this;
    UIWidget__Attr((UIWidget *)this,(UIAttributes *)&stack0xfffffe8c);
    UVar1.Tag.Capacity = iVar8;
    UVar1.Parent = (Manager *)in_stack_fffffe8c;
    UVar1.Tag.Data = (char *)(uintptr_t)(SUB84(in_stack_fffffe8c,4));
    UVar1.Tag.Length = iVar9;
*(uint32_t *)&auVar10 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 16)));
*(uint32_t *)&auVar13 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 28)));
*(uint32_t *)&auVar16 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 164)));
*(uint32_t *)&auVar17 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 180)));
*(uint32_t *)&auVar19 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 224)));
    uVar11 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 0)),0);
    uVar12 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 0)),8);
    UVar1.Location.Getter.Callee = (void *)(int)uVar11;
    UVar1.Location.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar11 >> 0x20);
    UVar1.Location.Value.X = (int)uVar12;
    UVar1.Location.Value.Y = (int)((ulonglong)uVar12 >> 0x20);
    UVar1.Visible.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar10));
    UVar1.Visible.Getter.CallbackFunction =
         (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar10)) >> 0x20);
    UVar1.Visible.Value = (bool)auVar10[8];
    (*(uint24_t *)((char *)&(UVar1.Visible) + 9)) = (*(uint24_t*)((char*)&(auVar10)+9));
    UVar1.Enabled.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar13));
    UVar1.Enabled.Getter.CallbackFunction =
         (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar13)) >> 0x20);
    UVar1.Enabled.Value = (bool)auVar13[8];
    (*(uint24_t *)((char *)&(UVar1.Enabled) + 9)) = (*(uint24_t*)((char*)&(auVar13)+9));
    uVar11 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 40)),0);
    uVar12 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 40)),8);
    UVar1.DesiredSize.Getter.Callee = (void *)(int)uVar11;
    UVar1.DesiredSize.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar11 >> 0x20);
    UVar1.DesiredSize.Value.X = (int)uVar12;
    UVar1.DesiredSize.Value.Y = (int)((ulonglong)uVar12 >> 0x20);
    uVar11 = SUB248((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 56)),0);
*(uint32_t *)&auVar15 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 56)),8));
    UVar1.FillProportion.Getter.Callee = (void *)(int)uVar11;
    UVar1.FillProportion.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar11 >> 0x20);
    UVar1.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar15));
    UVar1.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar15)+8));
    uVar11 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 80)),0);
    UVar1.HitTestShape.Getter.Callee = (void *)(int)uVar11;
    UVar1.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar11 >> 0x20));
    UVar1.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 80)),8);
    (*(uint32_t *)((char *)&(UVar1) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffffe9c) + 92));
    uVar11 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 96)),0);
    UVar1.Depth.Getter.Callee = (void *)(int)uVar11;
    UVar1.Depth.Getter.CallbackFunction =
         (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar11 >> 0x20);
    UVar1.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 96)),8);
    uVar11 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 112)),0);
    UVar1.Icon.Getter.Callee = (void *)(int)uVar11;
    UVar1.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar11 >> 0x20));
    UVar1.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 112)),8);
    uVar11 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 124)),0);
*(uint32_t *)&auVar10 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 124)),8));
    UVar1.Tooltip.Getter.Callee = (void *)(int)uVar11;
    UVar1.Tooltip.Getter.CallbackFunction =
         (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar11 >> 0x20);
    UVar1.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar10));
    UVar1.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar10)+4));
    UVar1.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar10)+8));
    uVar11 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 144)),0);
*(uint32_t *)&auVar10 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 144)),8));
    UVar1.VerboseTooltip.Getter.Callee = (void *)(int)uVar11;
    UVar1.VerboseTooltip.Getter.CallbackFunction =
         (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar11 >> 0x20);
    UVar1.VerboseTooltip.Value.Data = (char *)(*(uint32_t*)&(auVar10));
    UVar1.VerboseTooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar10)+4));
    UVar1.VerboseTooltip.Value.Length = (*(uint32_t*)((char*)&(auVar10)+8));
    uVar11 = SUB128((*(uint32_t *)((char *)&(auVar16) + 0)),0);
    UVar1.TextFont.Data.Getter.Callee = (void *)(int)uVar11;
    UVar1.TextFont.Data.Getter.CallbackFunction =
         (_func___cdecl_Font_ptr_void_ptr *)(int)((ulonglong)uVar11 >> 0x20);
    UVar1.TextFont.Data.Value = (Font *)SUB124((*(uint32_t *)((char *)&(auVar16) + 0)),8);
    UVar1.TextFont.IsValidData = (bool)auVar16[0xc];
    (*(uint32_t *)((char *)&(UVar1.TextFont) + 13)) = (*(uint32_t *)((char *)&(auVar16) + 13));
    uVar11 = SUB408((*(uint32_t *)((char *)&(auVar17) + 0)),0);
*(uint32_t *)&auVar18 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar17) + 0)),8));
    UVar1.ForegroundColor.Data.Getter.Callee = (void *)(int)uVar11;
    UVar1.ForegroundColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar11 >> 0x20);
    UVar1.ForegroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar18));
    UVar1.ForegroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar18)+4));
    UVar1.ForegroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar18)+8));
    UVar1.ForegroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar18) + 12));
    UVar1.ForegroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar18) + 16));
    UVar1.ForegroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar18) + 20));
    UVar1.ForegroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar18) + 24));
    UVar1.ForegroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar18) + 28));
    UVar1.ForegroundColor.IsValidData = (bool)auVar17[0x28];
    (*(uint32_t *)((char *)&(UVar1.ForegroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar17) + 41));
    uVar11 = SUB408((*(uint32_t *)((char *)&(auVar19) + 0)),0);
*(uint32_t *)&auVar18 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar19) + 0)),8));
    UVar1.BackgroundColor.Data.Getter.Callee = (void *)(int)uVar11;
    UVar1.BackgroundColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar11 >> 0x20);
    UVar1.BackgroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar18));
    UVar1.BackgroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar18)+4));
    UVar1.BackgroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar18)+8));
    UVar1.BackgroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar18) + 12));
    UVar1.BackgroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar18) + 16));
    UVar1.BackgroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar18) + 20));
    UVar1.BackgroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar18) + 24));
    UVar1.BackgroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar18) + 28));
    UVar1.BackgroundColor.IsValidData = (bool)auVar19[0x28];
    (*(uint32_t *)((char *)&(UVar1.BackgroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar19) + 41));
    uVar11 = SUB408((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 268)),0);
*(uint32_t *)&auVar18 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(in_stack_fffffe9c) + 268)),8));
    UVar1.TextColor.Data.Getter.Callee = (void *)(int)uVar11;
    UVar1.TextColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar11 >> 0x20);
    UVar1.TextColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar18));
    UVar1.TextColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar18)+4));
    UVar1.TextColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar18)+8));
    UVar1.TextColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar18) + 12));
    UVar1.TextColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar18) + 16));
    UVar1.TextColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar18) + 20));
    UVar1.TextColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar18) + 24));
    UVar1.TextColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar18) + 28));
    (*(uint32_t *)((char *)&(UVar1.TextColor) + 40)) = in_stack_ffffffd0;
    DVar3.CallbackFunction = (void (*)(void *))(pcVar21);
    DVar3.Callee = pMVar20;
    DVar4.CallbackFunction = (void (*)(void *, struct AABB_L_util__Vec2_L_int_G___G_))(pcVar25);
    DVar4.Callee = pMVar23;
    piVar6 = (int *)MarqueeSelect__MarqueeSelect(this_00,UVar1,DVar3,DVar4);
    if (piVar6 != (int *)0x0) goto LAB_00809ba7;
  }
  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl",
                  0xd4,"NewPointer",(char *)0x0);
  DebugBreak();
LAB_00809ba7:
  piVar26 = piVar6;
  pRVar7 = util__ReferenceControllerRegistry__Get();
  this_01 = util__ReferenceControllerRegistry__Register(pRVar7,piVar26);
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
  }
  pRStack_8 = this_01;
  (*(uint32_t*)((char*)&(local_10)+4)) = (uint32_t)(uintptr_t)(piVar6);
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
  }
  util__Darray_L_util__SharedPtr_L_UIWidget_G___G___Add
            ((Darray_L_util__SharedPtr_L_UIWidget_G___G_ *)&this->_pad_0x158_86,
             (SharedPtr_L_UIWidget_G_ *)(local_10 + 4));
  if (this_01 != (ReferenceController *)0x0) {
    bVar5 = util__ReferenceController__ReleaseStrongReference(this_01);
    if (bVar5) {
      if (piVar6 != (int *)0x0) {
        (**(code **)(uintptr_t)(*piVar6 + 4))();
      }
      piVar26 = piVar6;
      pRVar7 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar7,piVar26);
    }
    bVar5 = util__ReferenceController__ReleaseStrongReference(this_01);
    if (bVar5) {
      if (piVar6 != (int *)0x0) {
        (**(code **)(uintptr_t)(*piVar6 + 4))();
      }
      pRVar7 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar7,piVar6);
    }
  }
  UIAttributes___UIAttributes(&param_1);
  return this;
}

//==== 0080a0c0 scalar_deleting_destructor_0080a0c0 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__tuple3_L_classCraftBlueprintconst__P_Cbool_Cbool_G__G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__tuple3_class_CraftBlueprint_const__bool_bool______scalar_deleting_destructor
          (Darray_L_struct_util__tuple3_L_class_CraftBlueprint_const_P_Cbool_Cbool_G___G_ *this,uint param_1)

{
  *(undefined ***)this = &vftable_531;
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





//==== 0080a110 scalar_deleting_destructor_0080a110 ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void * __thiscall Minimap:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall Minimap___scalar_deleting_destructor(Minimap *this,uint param_1)

{
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&this->ChildRangeMarkers);
  this->_pad_0x0_0 = (int)&vftable_49;
  this->_pad_0x158_86 = (int)&vftable_48;
  if ((SharedPtr_L_struct_UIWidget_G_ *)this->_pad_0x15c_87 != (SharedPtr_L_struct_UIWidget_G_ *)0x0) {
    util__SharedPtr_struct_UIWidget____vector_deleting_destructor
              ((SharedPtr_L_struct_UIWidget_G_ *)this->_pad_0x15c_87,3);
  }
  this->_pad_0x15c_87 = 0;
  this->_pad_0x158_86 = (int)&vftable;
  if ((ReferenceController *)this->_pad_0x154_85 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this->_pad_0x154_85);
  }
  UIAttributes___UIAttributes((UIAttributes *)&this->_pad_0x8_2);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x178);
  }
  return this;
}

//==== 0080a470 CheckSize_0080a470 ====


/* private: bool  util__Darray_L_structutil__tuple3_L_classCraftBlueprintconst_P_Cbool_Cbool_G___G___CheckSize(int) */

bool 
util__Darray_struct_util__tuple3_class_CraftBlueprint_const__bool_bool_____CheckSize
          (Darray_L_struct_util__tuple3_L_class_CraftBlueprint_const_P_Cbool_Cbool_G___G_ *this,int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  bool bVar9;
  undefined4 *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar4 = *(uint *)(this + 8);
  bVar9 = -1 < (int)uVar4;
  bVar1 = !bVar9;
  if (bVar1) {
    puStack_c = (undefined4 *)0x0;
    SetSize(this,(int *)&puStack_c);
    uVar4 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar1;
  bVar1 = (int)uVar4 < 0x40000000;
  if (!bVar1) {
    puStack_c = (undefined4 *)0x3fffffff;
    SetSize(this,(int *)&puStack_c);
    uVar4 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar7 = *(uint *)(this + 0xc);
  if ((int)uVar4 <= (int)uVar7) {
    return bVar1 && bVar9;
  }
  if (uVar7 == 0) {
    *(uint *)(this + 0xc) = uVar4;
    uVar7 = uVar4;
  }
  if ((int)uVar7 < (int)uVar4) {
    do {
      uVar7 = uVar7 * 2;
    } while ((int)uVar7 < (int)uVar4);
    *(uint *)(this + 0xc) = uVar7;
  }
  if (0x3fffffff < (int)uVar7) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar7 = 0x3fffffff;
  }
  puStack_c = (undefined4 *)
              port_op_new(-(uint)((int)((ulonglong)uVar7 * 8 >> 0x20) != 0) |
                             (uint)((ulonglong)uVar7 * 8));
  if (puStack_c == (undefined4 *)0x0) {
    puStack_c = (undefined4 *)0x0;
  }
  else if (uVar7 != 0) {
    iVar3 = (int)puStack_c + 5;
    do {
      *(undefined4 *)(iVar3 + -5) = 0;
      *(undefined2 *)(iVar3 + -1) = 0;
      uVar7 = uVar7 - 1;
      iVar3 = iVar3 + 8;
    } while (uVar7 != 0);
  }
  puVar2 = puStack_c;
  puVar5 = *(undefined4 **)(this + 4);
  if (puVar5 != (undefined4 *)0x0) {
    iVar3 = *(int *)(this + 8);
    puVar6 = puVar5;
    puVar8 = puStack_c;
    if (puVar5 != puVar5 + param_1 * 2) {
      do {
        if (puVar8 == puStack_c + iVar3 * 2) break;
        *puVar8 = *puVar5;
        puVar6 = puVar5 + 1;
        puVar5 = puVar5 + 2;
        puVar8[1] = *puVar6;
        puVar6 = *(undefined4 **)(this + 4);
        puVar8 = puVar8 + 2;
      } while (puVar5 != puVar6 + param_1 * 2);
    }
    port_op_delete(puVar6);
    *(undefined4 *)(this + 4) = 0;
  }
  *(undefined4 **)(this + 4) = puVar2;
  return bStack_5;
}





//==== 0080a5c0 Clear_0080a5c0 ====


/* public: virtual void  util__Darray_L_structutil__tuple3_L_classCraftBlueprintconst__P_Cbool_Cbool_G__G___Clear(void) */

void 
util__Darray_struct_util__tuple3_class_CraftBlueprint_const__bool_bool_____Clear
          (Darray_L_struct_util__tuple3_L_class_CraftBlueprint_const_P_Cbool_Cbool_G___G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 0080a860 GetArcRadius ====


/* private: double __thiscall MinimapRangeWidget__GetArcRadius(void)const  */

double __thiscall MinimapRangeWidget__GetArcRadius(MinimapRangeWidget *this)

{
  int iVar1;
  int iVar2;
  Maybe_L_double_G_ *pMVar3;
  Vec4_L_int_G_ VVar4;
  double dVar5;
  undefined1 auStack_24 [16];
  double dStack_14;
  undefined8 uStack_c;
  
  uStack_c = GetRange_km(this);
  dVar5 = GetDistanceToTarget_km(this);
  uStack_c = uStack_c / dVar5;
  if (uStack_c <= 0.0) {
    uStack_c = 0.0;
  }
  if (1.0 <= uStack_c) {
    uStack_c = 1.0;
  }
  GetTargetLocationOnMinimap(this,&VVar4);
  iVar1 = *(int *)VVar4.X;
  iVar2 = ((int *)VVar4.X)[1];
  GetTargeterLocationOnMinimap(this,&VVar4);
  (*(uint64_t*)((char*)&(auStack_24)+8)) = (double)iVar1 * uStack_c + (double)*(int *)VVar4.X * (1.0 - uStack_c);
  dStack_14 = (double)iVar2 * uStack_c + (double)((int *)VVar4.X)[1] * (1.0 - uStack_c);
  GetTargeterLocationOnMinimap(this);
  dStack_14 = ((double)(*(uint32_t*)((char*)&(uStack_c)+4)) - (double)(int)dStack_14) *
              ((double)(*(uint32_t*)((char*)&(uStack_c)+4)) - (double)(int)dStack_14) +
              ((double)(int)uStack_c - (double)(int)(double)(*(uint64_t*)((char*)&(auStack_24)+8))) *
              ((double)(int)uStack_c - (double)(int)(double)(*(uint64_t*)((char*)&(auStack_24)+8)));
  pMVar3 = util__Sqrt((Maybe_L_double_G_ *)auStack_24,&dStack_14);
  if (pMVar3->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return pMVar3->Data;
}





//==== 0080ab10 GetIconLocation ====


/* private: struct util__Vec2_L_int_G_ __thiscall MinimapRangeWidget__GetIconLocation(void)const  */

Vec2_L_int_G_ __thiscall MinimapRangeWidget__GetIconLocation(MinimapRangeWidget *this)

{
  float10 fVar1;
  Vec4_L_int_G_ VVar2;
  double dVar3;
  double dVar4;
  int *in_stack_00000004;
  Vec3_L_double_G_ VStack_3c;
  int iStack_2c;
  int iStack_28;
  double dStack_24;
  double dStack_1c;
  Vec3_L_double_G_ VStack_14;
  
  GetTargeterLocationOnMinimap(this);
  dStack_24 = GetArcHalfAngle_radians(this);
  dVar3 = GetArcRadius(this);
  dStack_1c = dVar3;
  GetTargetLocationOnMinimap(this);
  GetTargeterLocationOnMinimap(this);
  VStack_3c.X = (double)VStack_3c.Y - (double)VStack_14.Y;
  VStack_3c.Y = (double)VStack_3c.Z - (double)VStack_14.Z;
  util__Vec2_double___SafeNormalized((Vec2_L_double_G_*)(&VStack_3c),&VStack_14);
  fVar1 = (float10)__CIatan2();
  VStack_14.Y = (double)fVar1 - dStack_24;
  dStack_24 = util__Cos(&VStack_14.Y);
  dVar3 = dStack_24 * dVar3;
  dVar4 = util__Sin(&VStack_14.Y);
  *in_stack_00000004 = iStack_2c + (int)dVar3;
  VVar2.Y = iStack_28 + (int)(dVar4 * dStack_1c);
  in_stack_00000004[1] = VVar2.Y;
  VVar2.X = (int)in_stack_00000004;
}





//==== 0080bfd0 GetWorldToMinimapScale__km ====


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: double  Minimap__GetWorldToMinimapScale__km(void)const  */

double Minimap__GetWorldToMinimapScale__km(void)

{
  undefined8 stack0xfffffffc;
  double dVar1;
  Vec4_L_int_G_ VVar2;
  double dVar3;
  double dVar4;
  double local_18;
  double local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  UIWidget__GetTrueSize((UIWidget *)this,&VVar2);
  local_18 = (double)*(int *)VVar2.X - 20.0;
  *(uint64_t *)&local_10 = (double)((int *)VVar2.X)[1] - 20.0;
  if (local_18 <= 0.0) {
    local_18 = 0.0;
  }
  if (local_10 <= 0.0) {
    *(uint32_t *)&local_10 = 0.0;
  }
  dVar3 = util__Abs(&local_10);
  dVar4 = util__Abs(&local_18);
  dVar1 = local_18;
  if (dVar4 < dVar3) {
    dVar1 = local_10;
  }
  dVar3 = TacticalManager__GetBattleRadius_km();
  if (dVar3 <= 0.0) {
    dVar3 = 1.0;
  }
  else {
    dVar3 = (dVar1 * 0.5) / dVar3;
  }
  return dVar3;
}





//==== 0080d0c0 SafeNormalized_0080d0c0 ====


/* public: struct util__Vec2_L_double_G_ const __thiscall util__Vec2_double___SafeNormalized(void)const
    */

Vec2_L_double_G_ * __thiscall
util__Vec2_double___SafeNormalized(Vec2_L_double_G_ *this,Vec2_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  Maybe_L_double_G_ *pMVar4;
  Maybe_L_double_G_ MStack_24;
  double dStack_c;
  
  dStack_c = this->X * this->X + this->Y * this->Y;
  pMVar4 = (Maybe_L_double_G_ *)(uintptr_t)(Sqrt(&MStack_24,&dStack_c));
  if (pMVar4->IsValidData == false) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,"IsValid()",
              (char *)0x0);
    DebugBreak();
  }
  dVar1 = this->X;
  dVar2 = pMVar4->Data;
  if (((NAN(dVar1) == (dVar1 == 0.0)) || (NAN(this->Y) == (this->Y == 0.0))) &&
     (NAN(dVar2) == (dVar2 == 0.0))) {
    dVar3 = this->Y;
    __return_storage_ptr__->X = dVar1 * (1.0 / dVar2);
    __return_storage_ptr__->Y = (1.0 / dVar2) * dVar3;
    return __return_storage_ptr__;
  }
  *(undefined4 *)&__return_storage_ptr__->X = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = 0;
  *(undefined4 *)&__return_storage_ptr__->Y = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = 0;
  return __return_storage_ptr__;
}





//==== 0080d1a0 SetSize_0080d1a0 ====


/* private: void  util__Darray_L_structutil__tuple3_L_classCraftBlueprintconst_P_Cbool_Cbool_G___G___SetSize(int const &) */

void 
util__Darray_struct_util__tuple3_class_CraftBlueprint_const__bool_bool_____SetSize
          (Darray_L_struct_util__tuple3_L_class_CraftBlueprint_const_P_Cbool_Cbool_G___G_ *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uStack_8;
  
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
     (puVar3 = (undefined4 *)(iVar2 + iVar4 * 8),
     puVar3 != (undefined4 *)(iVar2 + *(int *)(this + 8) * 8))) {
    do {
      uStack_8 = uStack_8 & 0xffff0000;
      puVar3[1] = uStack_8;
      *puVar3 = 0;
      puVar3 = puVar3 + 2;
    } while (puVar3 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 8));
  }
  *(int *)(this + 8) = iVar4;
  return;
}





//==== 0080e440 Join_Module__ ====


/* class util__Darray_L_classModule_P_G_ __cdecl util__Join_L_classModule_P_G_(class util__Darray_L_class_util__Darray_L_classModule_P_G__G_ const &) */

void __cdecl util__Join_class_Module(Darray_L_class_util__Darray_L_class_Module_P_G___G_ *param_1)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  int iVar2;
  int *piVar3;
  void *pvVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *in_stack_00000008;
  int iStack_14;
  uint uStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  uVar6 = 0;
  iStack_c = 0;
  iVar2 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
  if (iStack_c < iVar2) {
    do {
      piVar3 = (int *)(**(code **)*in_stack_00000008)(&iStack_c);
      iVar2 = (**(code **)(uintptr_t)(*piVar3 + 0xc))();
      iStack_c = iStack_c + 1;
      uVar6 = uVar6 + iVar2;
      iVar2 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
    } while (iStack_c < iVar2);
  }
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined ***)param_1 = (undefined **)(&vftable_6);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar6;
  if (((int)uVar6 < 0) || (0x3fffffff < (int)uVar6)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar6) {
    uStack_10 = -(uint)((int)((ulonglong)uVar6 * 4 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 4);
    pvVar4 = (void *)(uintptr_t)(port_op_new(uStack_10));
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      memset(pvVar4,0,uStack_10);
    }
    iVar2 = 0;
    *(void **)(param_1 + 4) = pvVar4;
    if (0 < *(int *)(param_1 + 0xc)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 4) + iVar2 * 4) = 0;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0xc));
    }
  }
  uStack_10 = 0;
  iVar2 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
  if ((int)uStack_10 < iVar2) {
    do {
      piVar3 = (int *)(**(code **)*in_stack_00000008)(&uStack_10);
      iStack_c = 0;
      iVar2 = (**(code **)(uintptr_t)(*piVar3 + 0xc))();
      if (iStack_c < iVar2) {
        do {
          puVar5 = (undefined4 *)(**(code **)*piVar3)(&iStack_c);
          iVar2 = *(int *)(param_1 + 8);
          iStack_14 = iVar2 + 1;
          Darray_L_class_util__Reflectable_P_G___SetSize
                    ((Darray_L_class_util__Reflectable_P_G_ *)param_1,&iStack_14);
          bVar1 = Darray_L_enum_GraphicsResource__Type_G___CheckSize
                            ((Darray_L_enum_GraphicsResource__Type_G_ *)param_1,iVar2);
          if (bVar1) {
            *(undefined4 *)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 4) = *puVar5;
          }
          iStack_c = iStack_c + 1;
          iVar2 = (**(code **)(uintptr_t)(*piVar3 + 0xc))();
        } while (iStack_c < iVar2);
      }
      uStack_10 = uStack_10 + 1;
      iVar2 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
    } while ((int)uStack_10 < iVar2);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0080f0f0 MethodCallerConst__private__bool___thiscall_CompartmentButton__GetActionsVisibility_void_const__ ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static bool __cdecl util__DelegateFactory_L_struct_CompartmentButton_Cbool_G___MethodCallerConst_L__private_bool__thiscall_CompartmentButton__GetActionsVisibility_void_const_G_(void const * const) */

bool util__DelegateFactory_L_CompartmentButton_Cbool_G___MethodCallerConst_L__private__bool___thiscall_CompartmentButton__GetActionsVisibility_void_const__G_
               (void *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  WeakPtr_L_Minimap_G_ WVar4;
  ReferenceController *pRStack_c;
  
  bVar2 = false;
  cVar1 = (**(code **)(*(int *)param_1 + 8))();
  if (cVar1 != '\0') {
    WVar4 = HUDTactical__GetMinimapUI();
    if ((*(int *)((int)param_1 + 500) == (WVar4.Pointer)->_pad_0x4_1) &&
       (*(int *)((int)param_1 + 0x1f0) == (WVar4.Pointer)->_pad_0x0_0)) {
      bVar3 = true;
      bVar2 = true;
      goto LAB_00814bb2;
    }
    bVar2 = true;
  }
  bVar3 = false;
LAB_00814bb2:
  if ((pRStack_c != (ReferenceController *)0x0) && (bVar2)) {
    ReferenceController__ReleaseWeakReference(pRStack_c);
  }
  return bVar3;
}

//==== 0080f100 MethodCallerConst__private__void____cdecl___thiscall_SpacecraftCompartmentUI__GetAdvancedToggleIcon_void_const__void__ ====


/* public: static void (__cdecl*__cdecl util__DelegateFactory_L_structSpacecraftCompartmentUI_Cvoid____cdecl_P__void__G___MethodCallerConst_L__private_void___cdecl_P__thiscall_SpacecraftCompartmentUI__GetAdvancedToggleIcon_void_const__void__G_(void const * const))(void) */

_func_void * __cdecl
util__DelegateFactory_struct_SpacecraftCompartmentUI_void____cdecl___void____MethodCallerConst__private__void____cdecl___thiscall_SpacecraftCompartmentUI__GetAdvancedToggleIcon_void_const__void
          (void *param_1)

{
  code *pcVar1;
  
  pcVar1 = (long long int (*)())(Icons__DownButton);
  if (*(char *)((int)param_1 + 0x184) != '\0') {
    pcVar1 = (long long int (*)())(Icons__UpButton);
  }
  return (_func_void *)(pcVar1);
}





//==== 0080f150 MethodCallerConst__private__struct_util__Vec2_int____thiscall_CompartmentButton__GetControlLocation_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static struct util__Vec2_L_int_G_ __cdecl util__DelegateFactory_L_struct_CompartmentButton_Cstructutil__Vec2_L_int_G__G___MethodCallerConst_L__private_structutil__Vec2_L_int_G____thiscallCompartmentButton__GetControlLocation_void_const_G_(void const * const) */

Vec2_L_int_G_ util__DelegateFactory_L_CompartmentButton_Cutil__Vec2_L_int_G___G___MethodCallerConst_L__private__struct_util__Vec2_L_int_G____thiscall_CompartmentButton__GetControlLocation_void_const__G_
                    (void *param_1)

{
  Vec4_L_int_G_ VVar1;
  
  util__DelegateFactory_struct_CompartmentButton_struct_util__Vec2_int_____MethodCallerConst__private__struct_util__Vec2_int____thiscall_CompartmentButton__GetControlLocation_void_const(&VVar1);
  *(undefined4 *)param_1 = *(undefined4 *)VVar1.X;
  *(undefined4 *)((int)param_1 + 4) = ((undefined4 *)VVar1.X)[1];
  VVar1.Y = (int)param_1;
  VVar1.X = (int)param_1;
}





//==== 0080f180 MethodCallerConst__private__bool___thiscall_CompartmentButton__GetControlVisibility_void_const__ ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: static bool __cdecl util__DelegateFactory_L_struct_CompartmentButton_Cbool_G___MethodCallerConst_L__private_bool__thiscall_CompartmentButton__GetControlVisibility_void_const_G_(void const * const) */

bool util__DelegateFactory_L_CompartmentButton_Cbool_G___MethodCallerConst_L__private__bool___thiscall_CompartmentButton__GetControlVisibility_void_const__G_
               (void *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  WeakPtr_L_Minimap_G_ WVar4;
  ReferenceController *pRStack_c;
  
  bVar3 = false;
  cVar1 = (**(code **)(*(int *)param_1 + 8))();
  if (cVar1 != '\0') {
    bVar2 = UIWidget__IsHovered(param_1);
    if (bVar2) {
      bVar2 = true;
      goto LAB_008154b4;
    }
    WVar4 = HUDTactical__GetMinimapUI();
    if ((*(int *)((int)param_1 + 500) == (WVar4.Pointer)->_pad_0x4_1) &&
       (*(int *)((int)param_1 + 0x1f0) == (WVar4.Pointer)->_pad_0x0_0)) {
      bVar3 = true;
      bVar2 = true;
      goto LAB_008154b4;
    }
    bVar3 = true;
  }
  bVar2 = false;
LAB_008154b4:
  if ((pRStack_c != (ReferenceController *)0x0) && (bVar3)) {
    ReferenceController__ReleaseWeakReference(pRStack_c);
  }
  return bVar2;
}

//==== 0080f190 MethodCallerConst__public__class_util__Str_char____thiscall_ModuleUI__GetGeneralModuleInfo_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_structModuleUI_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G___thiscall_ModuleUI__GetGeneralModuleInfo_void_const_G_(void const * const) */

Str_L_char_G_ *
util__DelegateFactory_struct_ModuleUI_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_ModuleUI__GetGeneralModuleInfo_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ local_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(ModuleUI__GetGeneralModuleInfo(&local_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 0080f1e0 MethodCallerConst__private__bool___thiscall_SpacecraftCompartmentUI__ShouldShowShipInfo_void_const__ ====


/* public: static bool __cdecl util__DelegateFactory_L_struct_SpacecraftCompartmentUI_Cbool_G___MethodCallerConst_L__private_bool__thiscall_SpacecraftCompartmentUI__ShouldShowShipInfo_void_const_G_(void const * const) */

bool __cdecl
util__DelegateFactory_struct_SpacecraftCompartmentUI_bool___MethodCallerConst__private__bool___thiscall_SpacecraftCompartmentUI__ShouldShowShipInfo_void_const
          (void *param_1)

{
  int iVar1;
  int aiStack_14 [4];
  
  Attribute_L_class_util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___G___Get
            ((Attribute_L_class_util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___G_ *)
             ((int)param_1 + 0x16c));
  iVar1 = (**(code **)(uintptr_t)(aiStack_14[0] + 0xc))();
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___dtor((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)aiStack_14);
}





//==== 0080f220 MethodCallerConst__private__class_util__Str_char____thiscall_SpacecraftCompartmentUI__GetHeatingText_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_struct_SpacecraftCompartmentUI_Cclassutil__Str_L_char_G__G___MethodCallerConst_L__private_class_util__Str_L_char_G___thiscallSpacecraftCompartmentUI__GetHeatingText_void_const_G_(void const *
   const) */

Str_L_char_G_ *
util__DelegateFactory_struct_SpacecraftCompartmentUI_class_util__Str_char_____MethodCallerConst__private__class_util__Str_char____thiscall_SpacecraftCompartmentUI__GetHeatingText_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ local_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(SpacecraftCompartmentUI__GetHeatingText(&local_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 0080f260 MethodCallerConst__private__class_util__Str_char____thiscall_SpacecraftCompartmentUI__GetHeatingTooltip_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_struct_SpacecraftCompartmentUI_Cclassutil__Str_L_char_G__G___MethodCallerConst_L__private_class_util__Str_L_char_G___thiscallSpacecraftCompartmentUI__GetHeatingTooltip_void_const_G_(void const *
   const) */

Str_L_char_G_ *
util__DelegateFactory_struct_SpacecraftCompartmentUI_class_util__Str_char_____MethodCallerConst__private__class_util__Str_char____thiscall_SpacecraftCompartmentUI__GetHeatingTooltip_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ local_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(SpacecraftCompartmentUI__GetHeatingTooltip(&local_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 0080f2a0 MethodCallerConst__private__class_util__Str_char____thiscall_ModuleUI__GetModuleButtonVerboseTooltip_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_structModuleUI_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__private_classutil__Str_L_char_G___thiscall_ModuleUI__GetModuleButtonVerboseTooltip_void_const_G_(void const * const) */

Str_L_char_G_ *
util__DelegateFactory_struct_ModuleUI_class_util__Str_char_____MethodCallerConst__private__class_util__Str_char____thiscall_ModuleUI__GetModuleButtonVerboseTooltip_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ local_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(ModuleUI__GetModuleButtonVerboseTooltip(&local_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 0080f2e0 MethodCallerConst__private__enum_VerticalAlignment__Type___thiscall_ModuleUI__GetNameVerticalAlign_void_const__ ====


/* public: static enum VerticalAlignment__Type __cdecl util__DelegateFactory_L_structModuleUI_Cenum_VerticalAlignment__Type_G___MethodCallerConst_L__private_enumVerticalAlignment__Type__thiscall_ModuleUI__GetNameVerticalAlign_void_const_G_(void const * const) */

int __cdecl
util__DelegateFactory_struct_ModuleUI_enum_VerticalAlignment__Type___MethodCallerConst__private__enum_VerticalAlignment__Type___thiscall_ModuleUI__GetNameVerticalAlign_void_const
          (void *param_1)

{
  bool bVar1;
  int iVar2;
  
  if (*(ReferenceController **)((int)param_1 + 0x1f0) != (ReferenceController *)0x0) {
    bVar1 = ReferenceController__IsDataStillValid(*(ReferenceController **)((int)param_1 + 0x1f0));
    if (!bVar1) {
      *(undefined4 *)((int)param_1 + 0x1ec) = 0;
    }
  }
  iVar2 = UIStaticText__GetLines(*(UIStaticText **)((int)param_1 + 0x1ec));
  return (uint)(iVar2 < 2);
}





//==== 0080f350 MethodCallerConst__private__class_util__Str_char____thiscall_SpacecraftCompartmentUI__GetSelectionNameInfo_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_struct_SpacecraftCompartmentUI_Cclassutil__Str_L_char_G__G___MethodCallerConst_L__private_class_util__Str_L_char_G___thiscallSpacecraftCompartmentUI__GetSelectionNameInfo_void_const_G_(void const
   * const) */

Str_L_char_G_ *
util__DelegateFactory_struct_SpacecraftCompartmentUI_class_util__Str_char_____MethodCallerConst__private__class_util__Str_char____thiscall_SpacecraftCompartmentUI__GetSelectionNameInfo_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ local_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(SpacecraftCompartmentUI__GetSelectionNameInfo(&local_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 0080f390 MethodCallerConst__private__class_util__Str_char____thiscall_SpacecraftCompartmentUI__GetSelectionTitle_void_const__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_struct_SpacecraftCompartmentUI_Cclassutil__Str_L_char_G__G___MethodCallerConst_L__private_class_util__Str_L_char_G___thiscallSpacecraftCompartmentUI__GetSelectionTitle_void_const_G_(void const *
   const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_struct_SpacecraftCompartmentUI_class_util__Str_char_____MethodCallerConst__private__class_util__Str_char____thiscall_SpacecraftCompartmentUI__GetSelectionTitle_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ aDStack_20 [16];
  Str_L_char_G_ SStack_10;
  
  Attribute_L_class_util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___G___Get
            ((Attribute_L_class_util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___G_ *)
             ((int)param_1 + 0x16c));
  SpacecraftComponent__GetShipGroupQuickInfo(&SStack_10,aDStack_20);
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___dtor(aDStack_20);
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,&SStack_10);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 0080f3f0 MethodCallerConst__public__struct_util__Vec2_int____thiscall_CompartmentButton__GetSize_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static struct util__Vec2_L_int_G_ __cdecl util__DelegateFactory_L_struct_CompartmentButton_Cstructutil__Vec2_L_int_G__G___MethodCallerConst_L__public_structutil__Vec2_L_int_G____thiscallCompartmentButton__GetSize_void_const_G_(void const * const) */

Vec2_L_int_G_ util__DelegateFactory_L_CompartmentButton_Cutil__Vec2_L_int_G___G___MethodCallerConst_L__public__struct_util__Vec2_L_int_G____thiscall_CompartmentButton__GetSize_void_const__G_
                    (void *param_1)

{
  double dVar1;
  double dVar2;
  Vec4_L_int_G_ VVar3;
  int in_stack_00000008;
  
  util__DelegateFactory_struct_CompartmentButton_struct_util__Vec2_int_____MethodCallerConst__public__struct_util__Vec2_int____thiscall_CompartmentButton__GetSize_void_const();
  if (*(char *)(in_stack_00000008 + 0x1e0) == '\0') {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,"IsValid()",
              (char *)0x0);
    DebugBreak();
  }
  dVar1 = *(double *)(in_stack_00000008 + 0x1d8);
  dVar2 = *(double *)(in_stack_00000008 + 0x1c8);
  VVar3.Y = (int)(*(double *)(in_stack_00000008 + 0x1d0) - *(double *)(in_stack_00000008 + 0x1c0));
  *(int *)param_1 = VVar3.Y;
  *(int *)((int)param_1 + 4) = (int)(dVar1 - dVar2);
  VVar3.X = (int)param_1;
  return *(Vec2_L_int_G_ *)&(VVar3);
}





//==== 0080f460 MethodCallerConst__private__void____cdecl___thiscall_ModuleUI__GetStatusBarIcon_void_const__void__ ====


/* public: static void (__cdecl*__cdecl util__DelegateFactory_L_structModuleUI_Cvoid____cdecl_P__void__G___MethodCallerConst_L__private_void___cdecl_P__thiscall_ModuleUI__GetStatusBarIcon_void_const__void__G_(void const * const))(void) */

_func_void * __cdecl
util__DelegateFactory_struct_ModuleUI_void____cdecl___void____MethodCallerConst__private__void____cdecl___thiscall_ModuleUI__GetStatusBarIcon_void_const__void
          (void *param_1)

{
  _func_void *p_Var1;
  
  if (*(int **)((int)param_1 + 0x1c0) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0080f473. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    p_Var1 = (_func_void *)(**(code **)(**(int **)((int)param_1 + 0x1c0) + 0x118))();
  }
  return (_func_void *)0x0;
}





//==== 0080f480 MethodCallerConst__private__struct_util__Range_double____thiscall_ModuleUI__GetStatusBarPercentages_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static struct util__Range_L_double_G_ __cdecl util__DelegateFactory_L_structModuleUI_Cstruct_util__Range_L_double_G__G___MethodCallerConst_L__private_structutil__Range_L_double_G___thiscall_ModuleUI__GetStatusBarPercentages_void_const_G_(void const * const) */

Range_L_double_G_ *
util__DelegateFactory_struct_ModuleUI_struct_util__Range_double_____MethodCallerConst__private__struct_util__Range_double____thiscall_ModuleUI__GetStatusBarPercentages_void_const
          (Range_L_double_G_ *__return_storage_ptr__,void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Range_L_double_G_ *pRVar4;
  Range_L_double_G_ local_14;
  
  pRVar4 = (Range_L_double_G_ *)(uintptr_t)(ModuleUI__GetStatusBarPercentages(&local_14));
  uVar1 = *(undefined4 *)((int)&pRVar4->Lower + 4);
  uVar2 = *(undefined4 *)&pRVar4->Upper;
  uVar3 = *(undefined4 *)((int)&pRVar4->Upper + 4);
  *(undefined4 *)&__return_storage_ptr__->Lower = *(undefined4 *)&pRVar4->Lower;
  *(undefined4 *)((int)&__return_storage_ptr__->Lower + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Upper = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Upper + 4) = uVar3;
  return __return_storage_ptr__;
}





//==== 0080f4a0 MethodCallerConst__private__class_util__Str_char____thiscall_ModuleUI__GetStatusString_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_structModuleUI_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__private_classutil__Str_L_char_G___thiscall_ModuleUI__GetStatusString_void_const_G_(void const * const) */

Str_L_char_G_ *
util__DelegateFactory_struct_ModuleUI_class_util__Str_char_____MethodCallerConst__private__class_util__Str_char____thiscall_ModuleUI__GetStatusString_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ local_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(ModuleUI__GetStatusString(&local_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 0080f4e0 MethodCallerConst__private__class_util__Str_char____thiscall_ModuleUI__GetTitleLabel_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_structModuleUI_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__private_classutil__Str_L_char_G___thiscall_ModuleUI__GetTitleLabel_void_const_G_(void const * const) */

Str_L_char_G_ *
util__DelegateFactory_struct_ModuleUI_class_util__Str_char_____MethodCallerConst__private__class_util__Str_char____thiscall_ModuleUI__GetTitleLabel_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ local_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(ModuleUI__GetTitleLabel(&local_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 0080f5a0 MethodCallerConst__private__bool___thiscall_SpacecraftCompartmentUI__IsAdvancedViewToggled_void_const__ ====


/* public: static bool __cdecl util__DelegateFactory_L_struct_SpacecraftCompartmentUI_Cbool_G___MethodCallerConst_L__private_bool__thiscall_SpacecraftCompartmentUI__IsAdvancedViewToggled_void_const_G_(void const * const) */

bool __cdecl
util__DelegateFactory_struct_SpacecraftCompartmentUI_bool___MethodCallerConst__private__bool___thiscall_SpacecraftCompartmentUI__IsAdvancedViewToggled_void_const
          (void *param_1)

{
  return (bool)*(undefined1 *)((int)param_1 + 0x184);
}





//==== 0080f5b0 MethodCallerConst__private__bool___thiscall_ModuleRadioActionButton__IsToggled_void_const__ ====


/* public: static bool __cdecl util__DelegateFactory_L_struct_ModuleRadioActionButton_Cbool_G___MethodCallerConst_L__private_bool__thiscall_ModuleRadioActionButton__IsToggled_void_const_G_(void const * const) */

bool __cdecl
util__DelegateFactory_struct_ModuleRadioActionButton_bool___MethodCallerConst__private__bool___thiscall_ModuleRadioActionButton__IsToggled_void_const
          (void *param_1)

{
  undefined8 stack0xfffffffc;
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iStack_c = 0;
  iVar2 = (**(code **)(*(int *)((int)param_1 + 0x1e0) + 0xc))();
  if (iStack_c < iVar2) {
    do {
      puVar3 = (undefined4 *)(*(code *)**(undefined4 **)((int)param_1 + 0x1e0))(&iStack_c);
      if (*(int *)*puVar3 == *(int *)((int)param_1 + 0x1f0)) {
        uVar1 = 1;
        __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
        return (bool)uVar1;
      }
      iStack_c = iStack_c + 1;
      iVar2 = (**(code **)(*(int *)((int)param_1 + 0x1e0) + 0xc))();
    } while (iStack_c < iVar2);
  }
  uVar1 = 0;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar1;
}





//==== 0080f630 MethodCallerConst__private__bool___thiscall_ModuleToggleActionButton__IsToggled_void_const__ ====


/* public: static bool __cdecl util__DelegateFactory_L_struct_ModuleToggleActionButton_Cbool_G___MethodCallerConst_L__private_bool__thiscall_ModuleToggleActionButton__IsToggled_void_const_G_(void const * const) */

bool __cdecl
util__DelegateFactory_struct_ModuleToggleActionButton_bool___MethodCallerConst__private__bool___thiscall_ModuleToggleActionButton__IsToggled_void_const
          (void *param_1)

{
  undefined8 stack0xfffffffc;
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iStack_c = 0;
  iVar2 = (**(code **)(*(int *)((int)param_1 + 0x1e0) + 0xc))();
  if (iStack_c < iVar2) {
    do {
      puVar3 = (undefined4 *)(*(code *)**(undefined4 **)((int)param_1 + 0x1e0))(&iStack_c);
      if (*(char *)*puVar3 != '\0') {
        uVar1 = 1;
        __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
        return (bool)uVar1;
      }
      iStack_c = iStack_c + 1;
      iVar2 = (**(code **)(*(int *)((int)param_1 + 0x1e0) + 0xc))();
    } while (iStack_c < iVar2);
  }
  uVar1 = 0;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar1;
}





//==== 00811d70 UIShader ====

/* public: __thiscall UIShader__UIShader(void) */

UIShader * __thiscall UIShader__UIShader(UIShader *this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Darray_L_void____cdecl_P__void__G_ *pDVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  float local_78 [18];
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  Darray_L_void____cdecl_P__void__G_ *local_18;
  Darray_L_void____cdecl_P__void__G_ *local_14;
  
  Shader__Shader((Shader *)this);
  this->_pad_0x0_0 = (int)&vftable_532;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar11 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar6 = local_18;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(LoadModelMatrixLocation);
  }
  local_30 = 0;
  iStack_2c = 1;
  iStack_28 = 2;
  iStack_24 = 3;
  iVar11 = 0;
  pfVar13 = local_78;
  iVar12 = 0;
  iVar14 = 1;
  iVar15 = 2;
  iVar9 = 3;
  do {
    iVar5 = iStack_24;
    iVar4 = iStack_28;
    iVar3 = iStack_2c;
    iVar10 = local_30;
    iVar8 = iVar11 + 1;
    *pfVar13 = (float)(iVar11 == iVar12);
    pfVar13[1] = (float)(iVar11 == iVar14);
    pfVar13[2] = (float)(iVar11 == iVar15);
    pfVar13[3] = (float)(iVar11 == iVar9);
    iVar11 = iVar8;
    pfVar13 = pfVar13 + 4;
    iVar12 = iVar10;
    iVar14 = iVar3;
    iVar15 = iVar4;
    iVar9 = iVar5;
  } while (iVar8 < 4);
  (this->InverseModelMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  iVar15 = iStack_24;
  iVar14 = iStack_28;
  iVar12 = iStack_2c;
  iVar11 = local_30;
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(LoadInverseModelMatrixLocation);
  }
  iVar9 = 0;
  pfVar13 = local_78;
  do {
    iVar10 = iVar9 + 1;
    *pfVar13 = (float)(iVar9 == iVar11);
    pfVar13[1] = (float)(iVar9 == iVar12);
    pfVar13[2] = (float)(iVar9 == iVar14);
    pfVar13[3] = (float)(iVar9 == iVar15);
    iVar9 = iVar10;
    pfVar13 = pfVar13 + 4;
  } while (iVar10 < 4);
  (this->TotalTransformMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(LoadTotalTransformMatrixLocation);
  }
  iVar11 = 0;
  pfVar13 = local_78;
  do {
    iVar12 = iVar11 + 1;
    bVar7 = iVar11 == iStack_2c;
    bVar1 = iVar11 == iStack_28;
    bVar2 = iVar11 == iStack_24;
    *pfVar13 = (float)(iVar11 == local_30);
    pfVar13[1] = (float)bVar7;
    pfVar13[2] = (float)bVar1;
    pfVar13[3] = (float)bVar2;
    iVar11 = iVar12;
    pfVar13 = pfVar13 + 4;
  } while (iVar12 < 4);
  (this->NormalMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(LoadNormalMatrixLocation);
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(LoadNearPlaneLocation);
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(LoadFarPlaneLocation);
  }
  (this->EmbossedRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(LoadEmbossedLocation);
  }
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetDefaultSetters());
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(SetEmbossedDefault);
  }
  (this->GradientAmountRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(LoadGradientAmountLocation);
  }
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetDefaultSetters());
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(SetGradientAmountDefault);
  }
  (this->UISizeRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(LoadUISizeLocation);
  }
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetDefaultSetters());
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(SetUISizeDefault);
  }
  (this->RadialRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(LoadRadialLocation);
  }
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetDefaultSetters());
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(SetRadialDefault);
  }
  (this->BordersRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(LoadBordersLocation);
  }
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetDefaultSetters());
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(SetBordersDefault);
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 00812270 Darray_util__tuple2_util__Str_char__util__Darray_util__Delegate_void_______ ====


/* public: virtual  Darray_L_structutil__tuple2_L_class_util__Str_L_char_G__Cclassutil__Darray_L_classutil__Delegate_L_void_G__G__G__G___dtor(void) */

void 
util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_class_util__Delegate_void__________Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_class_util__Delegate_void(Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Delegate_L_void_G___G___G___G_
           *this)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(this + 4);
  *(undefined ***)this = &vftable_535;
  if (iVar5 != 0) {
    piVar1 = (int *)(iVar5 + -4);
    iVar4 = *piVar1;
    puVar3 = (undefined4 *)(iVar5 + iVar4 * 0x1c);
    if (iVar4 == 0) {
      iVar5 = 0;
    }
    else {
      do {
        puVar2 = puVar3 + -7;
        iVar4 = iVar4 + -1;
        puVar3[-4] = (undefined4)(uintptr_t)(&vftable_109);
        if ((void *)puVar3[-3] != (void *)0x0) {
          port_op_delete((void *)puVar3[-3]);
        }
        puVar3[-3] = 0;
        puVar3[-4] = (undefined4)(uintptr_t)(&vftable);
        if ((void *)*puVar2 != (void *)0x0) {
          port_op_delete((void *)*puVar2);
          *puVar2 = 0;
        }
        puVar3 = puVar2;
      } while (iVar4 != 0);
      iVar5 = *piVar1;
    }
    port_op_delete(piVar1,iVar5 * 0x1c + 4);
  }
  *(undefined ***)this = (undefined **)(&vftable);
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 00812320 operator__00812320 ====


/* public: class util__Darray_L_classutil__Delegate_L_void_G__G_ &  util__Darray_L_class_util__Delegate_L_void_G__G___op_assign(class util__Darray_L_classutil__Delegate_L_void_G__G_ const &) */

Darray_L_class_util__Delegate_L_void_G___G_ * 
util__Darray_class_util__Delegate_void_____operator
          (Darray_L_class_util__Delegate_L_void_G___G_ *this,Darray_L_class_util__Delegate_L_void_G___G_ *param_1)

{
  undefined4 *puVar1;
  Darray_L_class_util__Delegate_L_void_G___G_ *pDVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  pDVar2 = param_1;
  param_1 = (Darray_L_class_util__Delegate_L_void_G___G_ *)(**(code **)(*(int *)param_1 + 0xc))();
  Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G___SetSize
            ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)this,(int *)&param_1);
  iVar3 = (**(code **)(*(int *)pDVar2 + 0xc))();
  if (iVar3 == 0) {
    (**(code **)(*(int *)this + 0x10))();
    return this;
  }
  uVar5 = *(uint *)(this + 8);
  if ((int)uVar5 < 0) {
    param_1 = (Darray_L_class_util__Delegate_L_void_G___G_ *)0x0;
    Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G___SetSize
              ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)this,(int *)&param_1);
    uVar5 = *(uint *)(this + 8);
  }
  if (0x3fffffff < (int)uVar5) {
    param_1 = (Darray_L_class_util__Delegate_L_void_G___G_ *)0x3fffffff;
    Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G___SetSize
              ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)this,(int *)&param_1);
    uVar5 = *(uint *)(this + 8);
  }
  uVar7 = *(uint *)(this + 0xc);
  if ((int)uVar7 < (int)uVar5) {
    if (uVar7 == 0) {
      *(uint *)(this + 0xc) = uVar5;
      uVar7 = uVar5;
    }
    if ((int)uVar7 < (int)uVar5) {
      do {
        uVar7 = uVar7 * 2;
      } while ((int)uVar7 < (int)uVar5);
      *(uint *)(this + 0xc) = uVar7;
    }
    if (0x3fffffff < (int)uVar7) {
      *(undefined4 *)(this + 0xc) = 0x3fffffff;
      uVar7 = 0x3fffffff;
    }
    if (*(void **)(this + 4) != (void *)0x0) {
      port_op_delete(*(void **)(this + 4));
      uVar7 = *(uint *)(this + 0xc);
    }
    *(undefined4 *)(this + 4) = 0;
    puVar4 = (undefined4 *)
             port_op_new(-(uint)((int)((ulonglong)uVar7 * 8 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar7 * 8));
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar6 = puVar4;
      if (uVar7 != 0) {
        do {
          *puVar6 = 0;
          puVar6[1] = 0;
          uVar7 = uVar7 - 1;
          puVar6 = puVar6 + 2;
        } while (uVar7 != 0);
        *(undefined4 **)(this + 4) = puVar4;
        goto LAB_00812444;
      }
    }
    *(undefined4 **)(this + 4) = puVar4;
  }
  else {
    puVar4 = *(undefined4 **)(this + 4);
  }
LAB_00812444:
  puVar6 = *(undefined4 **)(pDVar2 + 4);
  if (puVar6 != puVar6 + *(int *)(pDVar2 + 8) * 2) {
    do {
      *puVar4 = *puVar6;
      puVar1 = puVar6 + 1;
      puVar6 = puVar6 + 2;
      puVar4[1] = *puVar1;
      puVar4 = puVar4 + 2;
    } while (puVar6 != (undefined4 *)(*(int *)(pDVar2 + 4) + *(int *)(pDVar2 + 8) * 8));
  }
  return this;
}





//==== 00813d60 scalar_deleting_destructor_00813d60 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Delegate_L_void_G__G__G__G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_class_util__Delegate_void__________scalar_deleting_destructor__o2
          (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Delegate_L_void_G___G___G___G_
           *this,uint param_1)

{
  util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_class_util__Delegate_void__________scalar_deleting_destructor(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 008141a0 scalar_deleting_destructor_008141a0 ====


/* public: virtual void * __thiscall UIShader:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall UIShader___scalar_deleting_destructor(UIShader *this,uint param_1)

{
  char *pcVar1;
  
  pcVar1 = (this->AdditionalPreprocessor).Data;
  if (pcVar1 != (char *)0x0) {
    port_op_delete(pcVar1);
    (this->AdditionalPreprocessor).Data = (char *)0x0;
  }
  Shader___Shader((Shader *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x68);
  }
  return this;
}





//==== 008146b0 Clear_008146b0 ====


/* public: virtual void  util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Delegate_L_void_G__G__G__G___Clear(void) */

void 
util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_class_util__Delegate_void_________Clear(Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Delegate_L_void_G___G___G___G_
        *this)

{
  Str_L_char_G_ *this_00;
  Str_L_char_G_ SStack_20;
  undefined **ppuStack_14;
  void *pvStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (0 < *(int *)(this + 8)) {
    this_00 = *(Str_L_char_G_ **)(this + 4);
    if ((this_00 != (Str_L_char_G_ *)0x0) &&
       (this_00 != (Str_L_char_G_ *)((int)this_00 + *(int *)(this + 8) * 0x1c))) {
      do {
        SStack_20.Data = (char *)0x0;
        SStack_20.Capacity = 0;
        SStack_20.Length = 0;
        ppuStack_14 = &vftable_109;
        pvStack_10 = (void *)0x0;
        uStack_c = 0;
        uStack_8 = 0;
        util__Maybe_struct_util__ClassMember___operator(this_00,&SStack_20);
        Darray_L_class_util__Delegate_L_void_G___G___op_assign
                  ((Darray_L_class_util__Delegate_L_void_G___G_ *)(this_00 + 1),
                   (Darray_L_class_util__Delegate_L_void_G___G_ *)&ppuStack_14);
        ppuStack_14 = &vftable_109;
        if (pvStack_10 != (void *)0x0) {
          port_op_delete(pvStack_10);
        }
        pvStack_10 = (void *)0x0;
        ppuStack_14 = (undefined **)(&vftable);
        if (SStack_20.Data != (char *)0x0) {
          port_op_delete(SStack_20.Data);
        }
        this_00 = (Str_L_char_G_ *)&this_00[2].Capacity;
      } while (this_00 != (Str_L_char_G_ *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x1c));
    }
    *(undefined4 *)(this + 8) = 0;
    return;
  }
  *(undefined4 *)(this + 8) = 0;
  return;
}





//==== 00814ac0 Get_00814ac0 ====


/* public: class util__Darray_L_classutil__WeakPtr_L_classSpacecraftComponent_G__G_ const 
   util__Attribute_class_util__Darray_class_util__WeakPtr_class_SpacecraftComponent_______Get(void)const  */

Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ * 
util__Attribute_class_util__Darray_class_util__WeakPtr_class_SpacecraftComponent_______Get__o2
          (Attribute_L_class_util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___G_ *this)

{
  bool bVar1;
  bool bVar2;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *pDVar3;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *in_stack_00000004;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ aDStack_48 [16];
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ aDStack_38 [16];
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ aDStack_28 [16];
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ aDStack_18 [16];
  undefined4 uStack_8;
  
  uStack_8 = 0;
  if ((*(int *)this == 0) || (*(code **)(uintptr_t)(this + 4) == (code *)0x0)) {
    pDVar3 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_
                       (aDStack_48,
                        (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)(this + 8));
    bVar2 = false;
    bVar1 = true;
  }
  else {
    pDVar3 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             (**(code **)(uintptr_t)(this + 4))(aDStack_38,*(int *)this);
    pDVar3 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_(aDStack_28,pDVar3);
    Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_(aDStack_18,pDVar3);
    Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___dtor(aDStack_28);
    bVar2 = true;
    bVar1 = false;
    Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___dtor(aDStack_38);
    pDVar3 = aDStack_18;
  }
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_(in_stack_00000004,pDVar3);
  if (bVar1) {
    Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___dtor(aDStack_48);
  }
  if (bVar2) {
    Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___dtor(aDStack_18);
  }
  return in_stack_00000004;
}





//==== 00815040 GetClassID_00815040 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual unsigned long  CompartmentButton__GetClassID(void)const  */

ulong CompartmentButton__GetClassID(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_f8ba908f__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_f8ba908f__thread_safe_static_guard_0__);
    if ( cde_l2_f8ba908f__thread_safe_static_guard_0__ == -1) {
       cde_l2r_bde7b245_ID
           = util__GetHash("CompartmentButton");
      _Init_thread_footer(& cde_l2_f8ba908f__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2r_bde7b245_ID;
}





//==== 008150a0 GetClassID_008150a0 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual unsigned long  ShipArmorButton__GetClassID(void)const  */

ulong ShipArmorButton__GetClassID(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_ec4759fc__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_ec4759fc__thread_safe_static_guard_0__);
    if ( cde_l2_ec4759fc__thread_safe_static_guard_0__ == -1) {
       cde_l2r_4a045ed7_ID =
           util__GetHash("ShipArmorButton");
      _Init_thread_footer(& cde_l2_ec4759fc__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2r_4a045ed7_ID;
}





//==== 008154d0 GetDefaultSetters_008154d0 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   UIShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl UIShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_81110687__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_81110687__thread_safe_static_guard_0__);
    if ( cde_l2_81110687__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_e64f66c2_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_e64f66c2_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_e64f66c2_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_UIShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_81110687__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_e64f66c2_DefaultSetters;
}





//==== 008195a0 GetStatic_008195a0 ====


/* public: static class UIShader * __cdecl UIShader__GetStatic(void) */

UIShader * __cdecl UIShader__GetStatic(void)

{
  UIShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_f3449abd__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_81110687__thread_safe_static_guard_0__);
    if ( cde_l2_81110687__thread_safe_static_guard_0__ == -1) {
      this = (UIShader *)port_op_new(0x68);
      if (this == (UIShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x68);
        pSVar1 = (Shader *)UIShader__UIShader(this);
      }
       cde_l2_047ea128_Singleton =
           (UIShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_81110687__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_047ea128_Singleton;
}





//==== 0081a430 GetValueLocations_0081a430 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   UIShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl UIShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_cd1b1494__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_cd1b1494__thread_safe_static_guard_0__);
    if ( cde_l2_cd1b1494__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_05c93005_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_05c93005_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_05c93005_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_UIShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_cd1b1494__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_05c93005_ValueLocations;
}





//==== 0081aba0 HitTest_0081aba0 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual bool  CompartmentButton__HitTest(struct util__Vec2_L_double_G_)const  */

bool CompartmentButton__HitTest(Vec3_L_double_G_)

{
  undefined8 stack0xffffffdc;
  Vec4_L_double_G_ VVar1;
  Maybe_L_util__Vec3_L_double_G___G_ *pMVar2;
  undefined4 in_stack_ffffffdc;
  
  VVar1.Z = in_stack_ffffffdc;
  (*(uint32_t *)((char *)&(VVar1) + 0)) = (*(uint32_t *)((char *)&(param_1) + 4));
  pMVar2 = (Maybe_L_util__Vec3_L_double_G___G_ *)(uintptr_t)(GetHitTestPoint_km((Maybe_L_util__Vec3_L_double_G___G_ *)&stack0xffffffdc,VVar1));
  return pMVar2->IsValidData;
}





//==== 0081abd0 HitTest_0081abd0 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual bool  ShipArmorButton__HitTest(struct util__Vec2_L_double_G_)const  */

bool ShipArmorButton__HitTest(Vec3_L_double_G_)

{
  undefined8 stack0xffffffdc;
  Vec4_L_double_G_ VVar1;
  Maybe_L_util__Vec3_L_double_G___G_ *pMVar2;
  bool in_stack_ffffffdc;
  
  VVar1.Z = 1;
  (*(uint32_t *)((char *)&(VVar1) + 0)) = (*(uint32_t *)((char *)&(param_1) + 4));
  pMVar2 = (Maybe_L_util__Vec3_L_double_G___G_ *)(uintptr_t)(GetHitTestPoint_km((Maybe_L_util__Vec3_L_double_G___G_ *)&stack0xffffffdc,VVar1,in_stack_ffffffdc
                             ));
  return pMVar2->IsValidData;
}





//==== 0081b6b0 LoadBordersLocation ====

/* private: static void __cdecl UIShader__LoadBordersLocation(void) */

void __cdecl UIShader__LoadBordersLocation(void)

{
  UIShader *pUVar1;
  UIShader *pUVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_8;
  
  pUVar1 = UIShader__GetStatic();
  pcVar4 = "Borders";
  pUVar2 = UIShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pUVar2->_pad_0x4_1,pcVar4);
  (pUVar1->BordersRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38);
  if ((pUVar1->BordersRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: Borders.");
    DebugBreak();
  }
  uStack_8 = CONCAT13(1,(undefined3)uStack_8);
  pUVar1 = UIShader__GetStatic();
  (**(code **)(pUVar1->_pad_0x0_0 + 100))((int)&uStack_8 + 3);
  return;
}

//==== 0081b720 LoadEmbossedLocation ====

/* private: static void __cdecl UIShader__LoadEmbossedLocation(void) */

void __cdecl UIShader__LoadEmbossedLocation(void)

{
  UIShader *pUVar1;
  UIShader *pUVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_8;
  
  pUVar1 = UIShader__GetStatic();
  pcVar4 = "Embossed";
  pUVar2 = UIShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pUVar2->_pad_0x4_1,pcVar4);
  (pUVar1->EmbossedRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38);
  if ((pUVar1->EmbossedRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: Embossed.");
    DebugBreak();
  }
  uStack_8 = uStack_8 & 0xffffff;
  pUVar1 = UIShader__GetStatic();
  (**(code **)(pUVar1->_pad_0x0_0 + 0x4c))((int)&uStack_8 + 3);
  return;
}

//==== 0081b790 LoadFarPlaneLocation_0081b790 ====

/* private: static void __cdecl UIShader__LoadFarPlaneLocation(void) */

void __cdecl UIShader__LoadFarPlaneLocation(void)

{
  UIShader *pUVar1;
  UIShader *pUVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pUVar1 = UIShader__GetStatic();
  pcVar4 = "FarPlane";
  pUVar2 = UIShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pUVar2->_pad_0x4_1,pcVar4);
  (pUVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38);
  local_8 = 0;
  pUVar1 = UIShader__GetStatic();
  (**(code **)(pUVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 0081b7e0 LoadGradientAmountLocation ====

/* private: static void __cdecl UIShader__LoadGradientAmountLocation(void) */

void __cdecl UIShader__LoadGradientAmountLocation(void)

{
  UIShader *pUVar1;
  UIShader *pUVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pUVar1 = UIShader__GetStatic();
  pcVar4 = "GradientAmount";
  pUVar2 = UIShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pUVar2->_pad_0x4_1,pcVar4);
  (pUVar1->GradientAmountRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38);
  if ((pUVar1->GradientAmountRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: GradientAmount.");
    DebugBreak();
  }
  local_8 = 0;
  pUVar1 = UIShader__GetStatic();
  (**(code **)(pUVar1->_pad_0x0_0 + 0x54))(&local_8);
  return;
}

//==== 0081b860 LoadInverseModelMatrixLocation_0081b860 ====

/* private: static void __cdecl UIShader__LoadInverseModelMatrixLocation(void) */

void __cdecl UIShader__LoadInverseModelMatrixLocation(void)

{
  UIShader *pUVar1;
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
  
  pUVar1 = UIShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pUVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x81b88b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38);
  pUVar1 = UIShader__GetStatic();
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
  (**(code **)(pUVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 0081b8a0 LoadModelMatrixLocation_0081b8a0 ====

/* private: static void __cdecl UIShader__LoadModelMatrixLocation(void) */

void __cdecl UIShader__LoadModelMatrixLocation(void)

{
  UIShader *pUVar1;
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
  
  pUVar1 = UIShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pUVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x81b8cb;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38);
  pUVar1 = UIShader__GetStatic();
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
  (**(code **)(pUVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 0081b8e0 LoadNearPlaneLocation_0081b8e0 ====

/* private: static void __cdecl UIShader__LoadNearPlaneLocation(void) */

void __cdecl UIShader__LoadNearPlaneLocation(void)

{
  UIShader *pUVar1;
  UIShader *pUVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pUVar1 = UIShader__GetStatic();
  pcVar4 = "NearPlane";
  pUVar2 = UIShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pUVar2->_pad_0x4_1,pcVar4);
  (pUVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38);
  local_8 = 0;
  pUVar1 = UIShader__GetStatic();
  (**(code **)(pUVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 0081b930 LoadNormalMatrixLocation_0081b930 ====

/* private: static void __cdecl UIShader__LoadNormalMatrixLocation(void) */

void __cdecl UIShader__LoadNormalMatrixLocation(void)

{
  UIShader *pUVar1;
  UIShader *pUVar2;
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
  
  pUVar1 = UIShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pUVar2 = UIShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pUVar2->_pad_0x4_1,pcVar4);
  (pUVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38);
  pUVar1 = UIShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pUVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

