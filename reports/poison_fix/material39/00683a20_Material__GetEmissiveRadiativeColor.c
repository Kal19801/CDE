// decompiled by BatchDecomp @ 00683a20 name=GetEmissiveRadiativeColor conv=__thiscall body=373

/* public: struct util::Vec3<float> __thiscall
   Material::GetEmissiveRadiativeColor(double,double,double)const  */

Vec3<float> * __thiscall
Material::GetEmissiveRadiativeColor
          (Material *this,Vec3<float> *__return_storage_ptr__,double param_1,double param_2,
          double param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  Vec3<float> *pVVar4;
  undefined4 unaff_EDI;
  double dVar5;
  float fVar6;
  double dVar7;
  undefined4 in_stack_00000008;
  Vec3<float> local_44;
  undefined1 local_38 [12];
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined8 local_24;
  float local_1c;
  float local_18;
  undefined4 uStack_14;
  float local_10;
  float local_c;
  float fStack_8;
  
  local_2c = in_stack_00000008;
  uStack_28 = param_1._0_4_;
  local_24 = (double)CONCAT44(param_2._0_4_,param_1._4_4_);
  dVar7 = Physics::GetBlackbodyRadiation_W
                    (local_24,__real_3ff0000000000000,
                     (double)CONCAT44(param_1._0_4_,in_stack_00000008));
  dVar5 = local_24 * (double)CONCAT44(param_3._0_4_,param_2._4_4_);
  local_c = SUB84(dVar7,0);
  fStack_8 = (float)((ulonglong)dVar7 >> 0x20);
  local_18 = SUB84(dVar5,0);
  uStack_14 = (undefined4)((ulonglong)dVar5 >> 0x20);
  local_38._4_8_ = GetEmissionPower_W(this,(double)CONCAT44(uStack_28,local_2c),dVar5);
  dVar5 = Physics::GetBlackbodyRadiation_W
                    (local_24,__real_3ff0000000000000,(double)CONCAT44(uStack_28,local_2c));
  local_24._4_4_ = (float)((double)CONCAT44(fStack_8,local_c) / ((double)local_38._4_8_ + dVar5));
  local_24._0_4_ = SUB84(dVar5,0);
  pVVar4 = Physics::GetBlackbodyRadiationColor
                     ((Vec3<float> *)local_38,(double)CONCAT44(unaff_EDI,uStack_28));
  uVar1._0_4_ = pVVar4->X;
  uVar1._4_4_ = pVVar4->Y;
  fStack_8 = pVVar4->Z;
  local_10 = (float)uVar1;
  local_c = (float)((ulonglong)uVar1 >> 0x20);
  pVVar4 = GetEmissionColor(this,&local_44,(double)CONCAT44(local_18,uStack_28),
                            (double)CONCAT44(unaff_EDI,uStack_14));
  fVar6 = __real_3f800000 - local_24._4_4_;
  uVar2._0_4_ = pVVar4->X;
  uVar2._4_4_ = pVVar4->Y;
  fVar3 = pVVar4->Z;
  local_1c = (float)uVar2;
  local_18 = (float)((ulonglong)uVar2 >> 0x20);
  __return_storage_ptr__->X = fVar6 * local_1c + local_10 * local_24._4_4_;
  __return_storage_ptr__->Y = fVar6 * local_18 + local_c * local_24._4_4_;
  __return_storage_ptr__->Z = fVar6 * fVar3 + fStack_8 * local_24._4_4_;
  return __return_storage_ptr__;
}

