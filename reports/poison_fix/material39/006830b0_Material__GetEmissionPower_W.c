// decompiled by BatchDecomp @ 006830b0 name=GetEmissionPower_W conv=__thiscall body=724

/* public: double __thiscall Material::GetEmissionPower_W(double,double)const  */

double __thiscall Material::GetEmissionPower_W(Material *this,double param_1,double param_2)

{
  Category CVar1;
  bool bVar2;
  int iVar3;
  Darray<double> *pDVar4;
  Darray<double> *pDVar5;
  double *pdVar6;
  code *pcVar7;
  float10 extraout_ST0;
  Darray<double> local_3c;
  bool local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  int local_18;
  int local_14;
  double local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar3 = (int)((param_1 / __real_40b3880000000000) * __real_4049000000000000);
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  local_18 = 0x32;
  if (iVar3 < 0x32) {
    local_18 = iVar3;
  }
  iVar3 = local_18 + 1;
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  local_14 = 0x32;
  if (iVar3 < 0x32) {
    local_14 = iVar3;
  }
  local_10 = (param_1 - (double)local_18 * __real_4059000000000000) / __real_4059000000000000;
  if (local_10 <= __real_0000000000000000) {
    local_10 = __real_0000000000000000;
  }
  if (__real_3ff0000000000000 <= local_10) {
    local_10 = __real_3ff0000000000000;
  }
  bVar2 = HasEmissionSpectra(this);
  if (bVar2) {
    if ((this->GetDecompositionReaction_MemoizedValue).IsValidData == false) {
      CVar1 = (this->GetCategory_MemoizedValue).Data;
      local_20._4_4_ = CVar1 + Nonmetal;
      util::Darray<class_util::Reflectable*>::SetSize
                ((Darray<class_util::Reflectable*> *)&(this->GetClasses_MemoizedValue).Data.Capacity
                 ,(int *)((int)&local_20 + 4));
      bVar2 = util::Darray<enum_GraphicsResource::Type>::CheckSize
                        ((Darray<enum_GraphicsResource::Type> *)
                         &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
      if (bVar2) {
        *(code **)(*(int *)&(this->GetClasses_MemoizedValue).IsValidData + -4 +
                  (this->GetCategory_MemoizedValue).Data * 4) = GetEmissivePowers_W_Clear;
      }
      pDVar4 = GetEmissivePowers_W_MemoizedFunction(this,(Darray<double> *)local_28);
      util::Darray<double>::Darray<double>(&local_3c,pDVar4);
      local_2c = true;
      util::Darray<double>::operator=
                ((Darray<double> *)((int)&(this->GetCost_CU__kg_MemoizedValue).Data + 4),&local_3c);
      (this->GetDecompositionReaction_MemoizedValue).IsValidData = local_2c;
      local_3c._padding_ = (int)&util::Darray<double>::_vftable_;
      if (local_3c.Data != (double *)0x0) {
        operator_delete__(local_3c.Data);
      }
      local_3c.Data = (double *)0x0;
      local_3c._padding_ = (int)&util::IArray<enum_CrewDepartment::Type>::_vftable_;
      local_28._0_4_ = &util::Darray<double>::_vftable_;
      if ((double *)local_28._4_4_ != (double *)0x0) {
        operator_delete__((void *)local_28._4_4_);
      }
      local_28._4_4_ = (double *)0x0;
      local_28._0_4_ = &util::IArray<enum_CrewDepartment::Type>::_vftable_;
    }
    pcVar7 = DebugBreak_exref;
    pDVar4 = (Darray<double> *)((int)&(this->GetCost_CU__kg_MemoizedValue).Data + 4);
    if ((this->GetDecompositionReaction_MemoizedValue).IsValidData == false) {
      util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if ((this->GetDecompositionReaction_MemoizedValue).IsValidData == false) {
      CVar1 = (this->GetCategory_MemoizedValue).Data;
      local_20._4_4_ = CVar1 + Nonmetal;
      util::Darray<class_util::Reflectable*>::SetSize
                ((Darray<class_util::Reflectable*> *)&(this->GetClasses_MemoizedValue).Data.Capacity
                 ,(int *)((int)&local_20 + 4));
      bVar2 = util::Darray<enum_GraphicsResource::Type>::CheckSize
                        ((Darray<enum_GraphicsResource::Type> *)
                         &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
      if (bVar2) {
        *(code **)(*(int *)&(this->GetClasses_MemoizedValue).IsValidData + -4 +
                  (this->GetCategory_MemoizedValue).Data * 4) = GetEmissivePowers_W_Clear;
      }
      pDVar5 = GetEmissivePowers_W_MemoizedFunction(this,(Darray<double> *)local_28);
      util::Darray<double>::Darray<double>(&local_3c,pDVar5);
      local_2c = true;
      util::Darray<double>::operator=(pDVar4,&local_3c);
      (this->GetDecompositionReaction_MemoizedValue).IsValidData = local_2c;
      local_3c._padding_ = (int)&util::Darray<double>::_vftable_;
      if (local_3c.Data != (double *)0x0) {
        operator_delete__(local_3c.Data);
      }
      local_3c.Data = (double *)0x0;
      local_3c._padding_ = (int)&util::IArray<enum_CrewDepartment::Type>::_vftable_;
      local_28._0_4_ = &util::Darray<double>::_vftable_;
      if ((double *)local_28._4_4_ != (double *)0x0) {
        operator_delete__((void *)local_28._4_4_);
      }
      local_28._4_4_ = (double *)0x0;
      local_28._0_4_ = &util::IArray<enum_CrewDepartment::Type>::_vftable_;
      pcVar7 = DebugBreak_exref;
    }
    if ((this->GetDecompositionReaction_MemoizedValue).IsValidData == false) {
      util::LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      (*pcVar7)();
    }
    pdVar6 = (double *)(**(code **)pDVar4->_padding_)(&local_18);
    local_20 = *pdVar6;
    pdVar6 = (double *)(**(code **)pDVar4->_padding_)(&local_14);
    local_20 = ((__real_3ff0000000000000 - local_10) * local_20 + *pdVar6 * local_10) * param_2;
  }
  else {
    local_20 = 0.0;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}

