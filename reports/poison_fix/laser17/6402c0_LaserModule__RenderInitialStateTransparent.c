
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall LaserModule::RenderInitialStateTransparent(double,class
   CameraManager *,struct util::Vec3<double>)const  */

void __thiscall
LaserModule::RenderInitialStateTransparent
          (LaserModule *this,double param_1,CameraManager *param_2,Vec3<double> param_3)

{
  int iVar1;
  int iVar2;
  Material *pMVar3;
  Vec3<double> VVar4;
  Vec3<double> VVar5;
  bool bVar6;
  Color *this_00;
  undefined4 unaff_EDI;
  float10 fVar7;
  double dVar8;
  int in_stack_00000010;
  Vec3<float> *__return_storage_ptr__;
  undefined1 local_44 [8];
  undefined1 local_3c [8];
  undefined1 auStack_34 [16];
  int local_24;
  double local_20;
  undefined1 local_18 [8];
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData == false) {
    iVar1 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
    local_24 = iVar1 + 1;
    util::Darray<struct_util::tuple2<enum_Order::Type,int>_>::SetSize
              ((Darray<struct_util::tuple2<enum_Order::Type,int>_> *)
               &this->GetFinalWavelength_nm_MemoizedValue,&local_24);
    bVar6 = util::Darray<void_(__thiscall_Fleet::*)(void)const_>::CheckSize
                      ((Darray<void_(__thiscall_Fleet::*)(void)const_> *)
                       &this->GetFinalWavelength_nm_MemoizedValue,iVar1);
    if (bVar6) {
      iVar1 = *(int *)((int)&(this->GetFinalWavelength_nm_MemoizedValue).Data + 4);
      iVar2 = *(int *)&(this->GetFinalWavelength_nm_MemoizedValue).IsValidData;
      *(code **)(iVar1 + -8 + iVar2 * 8) = FixedOrbit::GetEccentricityApoapsisRoot_Clear;
      *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
    }
    if (*(char *)&(this->FocusingMirror).Composition == '\0') {
      if ((char)(this->SecondFrequencyDoubler).Data.NonlinearOptic._padding_ == '\0') {
        pMVar3 = (this->Mirror).Composition;
        if ((char)(pMVar3->MaterialMemoizationHandlerInstance).ResetFunctions._padding_ == '\0') {
          util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        dVar8 = (pMVar3->LasingMediumProperties).Data.SpontaneousLifetime_s;
      }
      else {
        dVar8 = *(double *)&(this->SecondFrequencyDoubler).Data._padding_ * __real_3fe0000000000000;
      }
    }
    else {
      dVar8 = *(double *)&this->FocusingMirror * __real_3fe0000000000000;
    }
    fStack_10 = (float)CONCAT31(fStack_10._1_3_,1);
    local_18._0_4_ = SUB84(dVar8,0);
    local_18._4_4_ = (undefined4)((ulonglong)dVar8 >> 0x20);
    *(undefined4 *)&(this->GetFiringTemperatureJump_K_MemoizedValue).Data = local_18._0_4_;
    *(undefined4 *)((int)&(this->GetFiringTemperatureJump_K_MemoizedValue).Data + 4) =
         local_18._4_4_;
    *(float *)&(this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData = fStack_10;
    *(float *)&(this->GetFiringTemperatureJump_K_MemoizedValue).field_0xc = fStack_c;
    local_18 = (undefined1  [8])dVar8;
    if ((this->GetFiringTemperatureJump_K_MemoizedValue).IsValidData == false) {
      util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  if (param_2 != (CameraManager *)0x0) {
    local_20 = (this->GetFiringTemperatureJump_K_MemoizedValue).Data;
    bVar6 = Physics::IsWavelengthVisible(local_20);
    if ((bVar6) && ((this->Turret).Data.field_0x18 == '\0')) {
      __return_storage_ptr__ = (Vec3<float> *)(local_18 + 4);
      this_00 = Physics::GetVisibleTrueColorFromWavelength
                          ((Color *)local_44,
                           (double)CONCAT44(__return_storage_ptr__,
                                            (int)((ulonglong)local_20 >> 0x20)));
      util::Color::ToRGB(this_00,__return_storage_ptr__);
      local_44._0_4_ = &util::Reflectable::_vftable_;
      if ((void *)local_44._4_4_ != (void *)0x0) {
        operator_delete__((void *)local_44._4_4_);
      }
      fVar7 = (float10)(**(code **)(*(int *)&(this->FocusingMirror).CachedWavelength_nm + 0x7c))();
      local_20 = (double)(fVar7 + (float10)__real_0000000000000000);
      fVar7 = (float10)(**(code **)(this->_padding_ + 0x1b0))();
      local_20 = (double)(fVar7 + (float10)local_20);
      dVar8 = local_20 / __real_408f400000000000;
      local_3c = (undefined1  [8])(dVar8 * (double)CONCAT44(param_3.X._0_4_,in_stack_00000010));
      auStack_34._8_4_ = SUB84((double)param_3._12_8_ * dVar8,0);
      auStack_34._0_8_ = (double)CONCAT44(param_3.Y._0_4_,param_3.X._4_4_) * dVar8;
      auStack_34._12_4_ = (int)((ulonglong)((double)param_3._12_8_ * dVar8) >> 0x20);
      VVar5.X._4_4_ = SUB84((double)fStack_10,0);
      VVar5.X._0_4_ = (int)((ulonglong)(double)(float)local_18._4_4_ >> 0x20);
      VVar5.Y._0_4_ = (int)((ulonglong)(double)fStack_10 >> 0x20);
      VVar5.Y._4_4_ = SUB84((double)fStack_c,0);
      VVar5.Z._0_4_ = (int)((ulonglong)(double)fStack_c >> 0x20);
      VVar5.Z._4_4_ = unaff_EDI;
      EffectManager::RenderStandaloneDiscFlash
                (param_2,(double)CONCAT44(local_3c,(int)((ulonglong)
                                                         (((this->FocusingMirror).CachedRadius_m *
                                                          __real_3ff8000000000000) /
                                                         __real_408f400000000000) >> 0x20)),
                 (Vec3<double> *)&stack0x00000010,SUB84((double)(float)local_18._4_4_,0),VVar5);
      local_3c._4_4_ = param_3.X._0_4_;
      local_3c._0_4_ = in_stack_00000010;
      auStack_34._4_4_ = param_3.Y._0_4_;
      auStack_34._0_4_ = param_3.X._4_4_;
      auStack_34._8_8_ = param_3._12_8_;
      VVar4.Y._0_4_ = SUB84((double)fStack_10,0);
      VVar4.X = (double)(float)local_18._4_4_;
      VVar4.Y._4_4_ = (int)((ulonglong)(double)fStack_10 >> 0x20);
      VVar4.Z._0_4_ = SUB84((double)fStack_c,0);
      VVar4.Z._4_4_ = (int)((ulonglong)(double)fStack_c >> 0x20);
      EffectManager::RenderStandaloneFlash(param_2,(Vec3<double> *)local_3c,VVar4,true);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

