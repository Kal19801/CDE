// Auto-generated from Ghidra decompilation
#include "port_prelude.h"

//==== 005af220 GetThrust_N ====

/* public: double __thiscall MagnetoplasmadynamicThrusterModule__GetThrust_N(void)const  */

double __thiscall
MagnetoplasmadynamicThrusterModule__GetThrust_N(MagnetoplasmadynamicThrusterModule *this)

{
  double dVar1;
  double dVar2;
  
  dVar1 = *(double *)&this[1]._pad_0x70_28;
  dVar2 = GetThrustCoefficient(this);
  dVar1 = dVar2 * 2.0000000000000002e-07 * dVar1 * dVar1 * 0.5;
  if ((NAN(dVar1)) || ((dVar1 != 0.0 && (NAN(dVar1 / dVar1))))) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\modules\\enginemodules\\electromagneticpropulsionmodules.cpp"
                    ,0x5b,"IsNumericallyValid(Thrust_N)",(char *)0x0);
    DebugBreak();
  }
  return dVar1;
}

//==== 005af2c0 GetTotalVoltage_V ====

/* public: double __thiscall MagnetoplasmadynamicThrusterModule__GetTotalVoltage_V(void)const  */

double __thiscall
MagnetoplasmadynamicThrusterModule__GetTotalVoltage_V(MagnetoplasmadynamicThrusterModule *this)

{
  double dVar1;
  double dVar2;
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
  
  dVar3 = GetThrust_N(this);
  dVar1 = *(double *)&this[1]._pad_0x70_28;
  dVar4 = TurbopumpSubModule__GetMassFlowRate_kg__s((TurbopumpSubModule *)&this[1]._pad_0x78_30);
  dVar5 = TurbopumpSubModule__GetMassFlowRate_kg__s((TurbopumpSubModule *)&this[1]._pad_0x78_30);
  dVar2 = *(double *)&this[1]._pad_0x70_28;
  dVar6 = Physics__GetTemperature_K(0.4);
  dVar7 = Physics__GetTemperature_K(1.0);
  dVar5 = Material__GetAtomNumber((Material *)this[1]._pad_0x6c_27,dVar5);
  dVar7 = (dVar5 / dVar2) * (dVar7 + dVar6) * Physics__BoltzmannConstant_J__K;
  dVar5 = TurbopumpSubModule__GetMassFlowRate_kg__s((TurbopumpSubModule *)&this[1]._pad_0x78_30);
  dVar2 = *(double *)&this[1]._pad_0x70_28;
  dVar8 = Material__GetFirstIonizationEnergy_kJ__mol((Material *)this[1]._pad_0x6c_27);
  dVar9 = Material__GetAtomNumber((Material *)this[1]._pad_0x6c_27,dVar5);
  dVar10 = TurbopumpSubModule__GetMassFlowRate_kg__s((TurbopumpSubModule *)&this[1]._pad_0x78_30);
  dVar5 = *(double *)&this[1]._pad_0x70_28;
  dVar6 = ((Material *)this[1]._pad_0x6c_27)->SpecificHeat_J__kg_K;
  dVar10 = Material__GetAtomNumber((Material *)this[1]._pad_0x6c_27,dVar10);
  dVar11 = Material__GetWorkFunction_eV((Material *)this[1]._pad_0x64_25);
  dVar12 = Material__GetWorkFunction_eV((Material *)this[1]._pad_0x60_24);
  dVar13 = GetAnodeSheathVoltageDrop_V(this);
  return dVar13 + ((dVar3 * dVar3) / (dVar4 * (dVar1 + dVar1))) * 1.25 + dVar7 +
                  ((dVar9 / dVar2) * dVar8 * 1000.0) / 6.022e+23 +
                  ((dVar10 / dVar5) * dVar6 * 1000.0) / 6.022e+23 + dVar12 + dVar11;
}

//==== 005af4d0 GetVoltageChartData ====

/* public: class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cdouble_G__G_ __thiscall
   MagnetoplasmadynamicThrusterModule__GetVoltageChartData(void)const  */

Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ * __thiscall
MagnetoplasmadynamicThrusterModule__GetVoltageChartData
          (MagnetoplasmadynamicThrusterModule *this,
          Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ *__return_storage_ptr__)

{
  int iVar1;
  tuple2_L_util__Str_L_char_G__Cdouble_G_ *ptVar2;
  Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ *this_00;
  bool bVar3;
  LocStr *pLVar4;
  Str_L_char_G_ *pSVar5;
  Str_L_char_G_ local_8c;
  Str_L_char_G_ local_80;
  void *local_74;
  double local_70;
  void *local_68 [3];
  Str_L_char_G_ local_5c;
  double local_50;
  Str_L_char_G_ local_48;
  Str_L_char_G_ local_3c;
  undefined1 local_30 [4];
  undefined8 local_2c;
  undefined1 local_24 [12];
  Str_L_char_G_ local_18;
  double local_c;
  
  this_00 = __return_storage_ptr__;
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (tuple2_L_util__Str_L_char_G__Cdouble_G_ *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->_pad_0x0_0 =
       (int)&vftable_105;
  __return_storage_ptr__->Data = (tuple2_L_util__Str_L_char_G__Cdouble_G_ *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  util__Str_char___Str_char(&local_48,"MPDThrusterChart BackEMF");
  *(uint32_t *)&local_c = GetThrust_N(this);
  (*(uint64_t*)((char*)&(local_24)+4)) = *(undefined8 *)&this[1]._pad_0x70_28;
  *(uint32_t *)&local_c = local_c * local_c;
  local_50 = TurbopumpSubModule__GetMassFlowRate_kg__s((TurbopumpSubModule *)&this[1]._pad_0x78_30);
  *(uint32_t *)&local_30 = (uint32_t)0x0;
  (*(uint32_t*)&(local_2c)) = 0;
  (*(uint32_t*)((char*)&(local_2c)+4)) = 0;
  (uint64_t)(local_c = (local_c / (local_50 * ((double)(*(uint64_t*)((char*)&(local_24)+4)) + (double)(*(uint64_t*)((char*)&(local_24)+4))))) * 1.25);
  pLVar4 = (LocStr *)util__LocStr__LocStr((LocStr *)local_68,&local_48,(Str_L_char_G_ *)local_30);
  pSVar5 = util__LocStr__operator__o3(pLVar4);
  util__Str_char___Str_char((Str_L_char_G_ *)local_24,pSVar5);
  util__Str_char___Str_char(&local_18,(Str_L_char_G_ *)local_24);
  util__Str_char___Str_char(&local_80,&local_18);
  local_70 = local_c;
  if (local_18.Data != (char *)0x0) {
    port_op_delete(local_18.Data);
  }
  if ((char *)(*(uint32_t*)&(local_24)) != (char *)0x0) {
    port_op_delete((void *)(*(uint32_t*)&(local_24)));
  }
  iVar1 = this_00->Size;
  __return_storage_ptr__ = (Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ *)(iVar1 + 1);
  util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___SetSize
            (this_00,(int *)&__return_storage_ptr__);
  bVar3 = util__Darray_L_PowerUsage_G___CheckSize((Darray_L_PowerUsage_G_ *)this_00,iVar1);
  if (bVar3) {
    iVar1 = this_00->Size;
    ptVar2 = this_00->Data;
    util__Str_char___operator__o8(&ptVar2[iVar1 + -1].Value1,&local_80);
    ptVar2[iVar1 + -1].Value2 = local_c;
  }
  if (local_80.Data != (char *)0x0) {
    port_op_delete(local_80.Data);
  }
  if (local_5c.Data != (char *)0x0) {
    port_op_delete(local_5c.Data);
    local_5c.Data = (char *)0x0;
  }
  if (local_68[0] != (void *)0x0) {
    port_op_delete(local_68[0]);
    local_68[0] = (void *)0x0;
  }
  if (local_30 != (uint32_t)0x0) {
    port_op_delete((void *)local_30);
    *(uint32_t *)&local_30 = (uint32_t)0x0;
  }
  if (local_48.Data != (char *)0x0) {
    port_op_delete(local_48.Data);
  }
  util__Str_char___Str_char((Str_L_char_G_ *)local_24,"MPDThrusterChart AnodeSheath");
  *(uint32_t *)&local_30 = (uint32_t)0x0;
  (*(uint32_t*)&(local_2c)) = 0;
  (*(uint32_t*)((char*)&(local_2c)+4)) = 0;
  pLVar4 = (LocStr *)
           util__LocStr__LocStr((LocStr *)local_68,(Str_L_char_G_ *)local_24,(Str_L_char_G_ *)local_30);
  pSVar5 = util__LocStr__operator__o3(pLVar4);
  util__Str_char___Str_char(&local_18,pSVar5);
  *(uint32_t *)&local_c = GetAnodeSheathVoltageDrop_V(this);
  util__Str_char___Str_char(&local_48,&local_18);
  util__Str_char___Str_char(&local_80,&local_48);
  local_70 = local_c;
  if (local_48.Data != (char *)0x0) {
    port_op_delete(local_48.Data);
  }
  if (local_18.Data != (char *)0x0) {
    port_op_delete(local_18.Data);
  }
  iVar1 = this_00->Size;
  __return_storage_ptr__ = (Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ *)(iVar1 + 1);
  util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___SetSize
            (this_00,(int *)&__return_storage_ptr__);
  bVar3 = util__Darray_L_PowerUsage_G___CheckSize((Darray_L_PowerUsage_G_ *)this_00,iVar1);
  if (bVar3) {
    iVar1 = this_00->Size;
    ptVar2 = this_00->Data;
    util__Str_char___operator__o8(&ptVar2[iVar1 + -1].Value1,&local_80);
    ptVar2[iVar1 + -1].Value2 = local_c;
  }
  if (local_80.Data != (char *)0x0) {
    port_op_delete(local_80.Data);
  }
  if (local_5c.Data != (char *)0x0) {
    port_op_delete(local_5c.Data);
    local_5c.Data = (char *)0x0;
  }
  if (local_68[0] != (void *)0x0) {
    port_op_delete(local_68[0]);
    local_68[0] = (void *)0x0;
  }
  if (local_30 != (uint32_t)0x0) {
    port_op_delete((void *)local_30);
    *(uint32_t *)&local_30 = (uint32_t)0x0;
  }
  if ((char *)(*(uint32_t*)&(local_24)) != (char *)0x0) {
    port_op_delete((void *)(*(uint32_t*)&(local_24)));
  }
  util__Str_char___Str_char(&local_8c,"MPDThrusterChart PlasmaHeating");
  (*(uint64_t*)((char*)&(local_24)+4)) =
       TurbopumpSubModule__GetMassFlowRate_kg__s((TurbopumpSubModule *)&this[1]._pad_0x78_30);
  local_50 = *(double *)&this[1]._pad_0x70_28;
  local_2c = Physics__GetTemperature_K(0.4);
  *(uint32_t *)&local_c = Physics__GetTemperature_K(1.0);
  (*(uint64_t*)((char*)&(local_24)+4)) = Material__GetAtomNumber((Material *)this[1]._pad_0x6c_27,(double)(*(uint64_t*)((char*)&(local_24)+4)));
  local_18.Data = (char *)0x0;
  local_18.Capacity = 0;
  local_18.Length = 0;
  local_c = ((double)(*(uint64_t*)((char*)&(local_24)+4)) / local_50) * (local_c + local_2c) *
            Physics__BoltzmannConstant_J__K;
  pLVar4 = (LocStr *)util__LocStr__LocStr((LocStr *)local_68,&local_8c,&local_18);
  pSVar5 = util__LocStr__operator__o3(pLVar4);
  util__Str_char___Str_char((Str_L_char_G_ *)local_30,pSVar5);
  util__Str_char___Str_char(&local_48,(Str_L_char_G_ *)local_30);
  util__Str_char___Str_char(&local_80,&local_48);
  local_70 = local_c;
  if (local_48.Data != (char *)0x0) {
    port_op_delete(local_48.Data);
  }
  if (local_30 != (uint32_t)0x0) {
    port_op_delete((void *)local_30);
  }
  iVar1 = this_00->Size;
  __return_storage_ptr__ = (Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ *)(iVar1 + 1);
  util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___SetSize
            (this_00,(int *)&__return_storage_ptr__);
  bVar3 = util__Darray_L_PowerUsage_G___CheckSize((Darray_L_PowerUsage_G_ *)this_00,iVar1);
  if (bVar3) {
    iVar1 = this_00->Size;
    ptVar2 = this_00->Data;
    util__Str_char___operator__o8(&ptVar2[iVar1 + -1].Value1,&local_80);
    ptVar2[iVar1 + -1].Value2 = local_c;
  }
  if (local_80.Data != (char *)0x0) {
    port_op_delete(local_80.Data);
  }
  if (local_5c.Data != (char *)0x0) {
    port_op_delete(local_5c.Data);
    local_5c.Data = (char *)0x0;
  }
  if (local_68[0] != (void *)0x0) {
    port_op_delete(local_68[0]);
    local_68[0] = (void *)0x0;
  }
  if (local_18.Data != (char *)0x0) {
    port_op_delete(local_18.Data);
    local_18.Data = (char *)0x0;
  }
  if (local_8c.Data != (char *)0x0) {
    port_op_delete(local_8c.Data);
  }
  util__Str_char___Str_char((Str_L_char_G_ *)local_24,"MPDThrusterChart WorkFunction");
  local_2c = Material__GetWorkFunction_eV((Material *)this[1]._pad_0x64_25);
  *(uint32_t *)&local_c = Material__GetWorkFunction_eV((Material *)this[1]._pad_0x60_24);
  *(uint32_t *)&local_c = local_c + local_2c;
  local_18.Data = (char *)0x0;
  local_18.Capacity = 0;
  local_18.Length = 0;
  pLVar4 = (LocStr *)util__LocStr__LocStr((LocStr *)local_68,(Str_L_char_G_ *)local_24,&local_18);
  pSVar5 = util__LocStr__operator__o3(pLVar4);
  util__Str_char___Str_char(&local_48,pSVar5);
  util__Str_char___Str_char(&local_8c,&local_48);
  util__Str_char___Str_char(&local_80,&local_8c);
  local_70 = local_c;
  if (local_8c.Data != (char *)0x0) {
    port_op_delete(local_8c.Data);
  }
  if (local_48.Data != (char *)0x0) {
    port_op_delete(local_48.Data);
  }
  iVar1 = this_00->Size;
  __return_storage_ptr__ = (Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ *)(iVar1 + 1);
  util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___SetSize
            (this_00,(int *)&__return_storage_ptr__);
  bVar3 = util__Darray_L_PowerUsage_G___CheckSize((Darray_L_PowerUsage_G_ *)this_00,iVar1);
  if (bVar3) {
    iVar1 = this_00->Size;
    ptVar2 = this_00->Data;
    util__Str_char___operator__o8(&ptVar2[iVar1 + -1].Value1,&local_80);
    ptVar2[iVar1 + -1].Value2 = local_c;
  }
  if (local_80.Data != (char *)0x0) {
    port_op_delete(local_80.Data);
  }
  if (local_5c.Data != (char *)0x0) {
    port_op_delete(local_5c.Data);
    local_5c.Data = (char *)0x0;
  }
  if (local_68[0] != (void *)0x0) {
    port_op_delete(local_68[0]);
    local_68[0] = (void *)0x0;
  }
  if (local_18.Data != (char *)0x0) {
    port_op_delete(local_18.Data);
    local_18.Data = (char *)0x0;
  }
  if ((char *)(*(uint32_t*)&(local_24)) != (char *)0x0) {
    port_op_delete((void *)(*(uint32_t*)&(local_24)));
  }
  util__Str_char___Str_char(&local_5c,"MPDThrusterChart Ionization");
  local_2c = TurbopumpSubModule__GetMassFlowRate_kg__s((TurbopumpSubModule *)&this[1]._pad_0x78_30);
  (*(uint64_t*)((char*)&(local_24)+4)) = *(undefined8 *)&this[1]._pad_0x70_28;
  local_50 = Material__GetFirstIonizationEnergy_kJ__mol((Material *)this[1]._pad_0x6c_27);
  local_2c = Material__GetAtomNumber((Material *)this[1]._pad_0x6c_27,local_2c);
  local_18.Data = (char *)0x0;
  local_18.Capacity = 0;
  local_18.Length = 0;
  (uint64_t)(local_c = ((local_2c / (double)(*(uint64_t*)((char*)&(local_24)+4))) * local_50 * 1000.0) / 6.022e+23);
  pLVar4 = (LocStr *)util__LocStr__LocStr((LocStr *)&local_80,&local_5c,&local_18);
  pSVar5 = util__LocStr__operator__o3(pLVar4);
  util__Str_char___Str_char(&local_48,pSVar5);
  util__Str_char___Str_char(&local_8c,&local_48);
  util__Str_char___Str_char(&local_3c,&local_8c);
  local_2c = local_c;
  if (local_8c.Data != (char *)0x0) {
    port_op_delete(local_8c.Data);
  }
  if (local_48.Data != (char *)0x0) {
    port_op_delete(local_48.Data);
  }
  iVar1 = this_00->Size;
  __return_storage_ptr__ = (Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ *)(iVar1 + 1);
  util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___SetSize
            (this_00,(int *)&__return_storage_ptr__);
  bVar3 = util__Darray_L_PowerUsage_G___CheckSize((Darray_L_PowerUsage_G_ *)this_00,iVar1);
  if (bVar3) {
    iVar1 = this_00->Size;
    ptVar2 = this_00->Data;
    util__Str_char___operator__o8(&ptVar2[iVar1 + -1].Value1,&local_3c);
    ptVar2[iVar1 + -1].Value2 = local_c;
  }
  if (local_3c.Data != (char *)0x0) {
    port_op_delete(local_3c.Data);
  }
  if (local_74 != (void *)0x0) {
    port_op_delete(local_74);
    *(uint32_t *)&local_74 = (uint32_t)(uintptr_t)((void *)0x0);
  }
  if (local_80.Data != (char *)0x0) {
    port_op_delete(local_80.Data);
    local_80.Data = (char *)0x0;
  }
  if (local_18.Data != (char *)0x0) {
    port_op_delete(local_18.Data);
    local_18.Data = (char *)0x0;
  }
  if (local_5c.Data != (char *)0x0) {
    port_op_delete(local_5c.Data);
  }
  local_2c = TurbopumpSubModule__GetMassFlowRate_kg__s((TurbopumpSubModule *)&this[1]._pad_0x78_30);
  (*(uint64_t*)((char*)&(local_24)+4)) = *(undefined8 *)&this[1]._pad_0x70_28;
  local_50 = ((Material *)this[1]._pad_0x6c_27)->SpecificHeat_J__kg_K * 1000.0;
  local_2c = Material__GetAtomNumber((Material *)this[1]._pad_0x6c_27,local_2c);
  if (0.0 < ((local_2c / (double)(*(uint64_t*)((char*)&(local_24)+4))) * local_50) / 6.022e+23) {
    util__Str_char___Str_char(&local_48,"MPDThrusterChart CovalentDissociation");
    local_2c = TurbopumpSubModule__GetMassFlowRate_kg__s
                         ((TurbopumpSubModule *)&this[1]._pad_0x78_30);
    (*(uint64_t*)((char*)&(local_24)+4)) = *(undefined8 *)&this[1]._pad_0x70_28;
    local_50 = ((Material *)this[1]._pad_0x6c_27)->SpecificHeat_J__kg_K * 1000.0;
    local_2c = Material__GetAtomNumber((Material *)this[1]._pad_0x6c_27,local_2c);
    local_18.Data = (char *)0x0;
    local_18.Capacity = 0;
    local_18.Length = 0;
    (uint64_t)(local_c = ((local_2c / (double)(*(uint64_t*)((char*)&(local_24)+4))) * local_50) / 6.022e+23);
    pLVar4 = (LocStr *)util__LocStr__LocStr((LocStr *)&local_80,&local_48,&local_18);
    pSVar5 = util__LocStr__operator__o3(pLVar4);
    util__Str_char___Str_char(&local_8c,pSVar5);
    util__Str_char___Str_char(&local_5c,&local_8c);
    util__Str_char___Str_char(&local_3c,&local_5c);
    local_2c = local_c;
    if (local_5c.Data != (char *)0x0) {
      port_op_delete(local_5c.Data);
    }
    if (local_8c.Data != (char *)0x0) {
      port_op_delete(local_8c.Data);
    }
    iVar1 = this_00->Size;
    __return_storage_ptr__ = (Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ *)(iVar1 + 1);
    util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___SetSize
              (this_00,(int *)&__return_storage_ptr__);
    bVar3 = util__Darray_L_PowerUsage_G___CheckSize((Darray_L_PowerUsage_G_ *)this_00,iVar1);
    if (bVar3) {
      iVar1 = this_00->Size;
      ptVar2 = this_00->Data;
      util__Str_char___operator__o8(&ptVar2[iVar1 + -1].Value1,&local_3c);
      ptVar2[iVar1 + -1].Value2 = local_c;
    }
    if (local_3c.Data != (char *)0x0) {
      port_op_delete(local_3c.Data);
    }
    if (local_74 != (void *)0x0) {
      port_op_delete(local_74);
      *(uint32_t *)&local_74 = (uint32_t)(uintptr_t)((void *)0x0);
    }
    if (local_80.Data != (char *)0x0) {
      port_op_delete(local_80.Data);
      local_80.Data = (char *)0x0;
    }
    if (local_18.Data != (char *)0x0) {
      port_op_delete(local_18.Data);
      local_18.Data = (char *)0x0;
    }
    if (local_48.Data != (char *)0x0) {
      port_op_delete(local_48.Data);
    }
  }
  return this_00;
}

//==== 005affc0 Render_005affc0 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void  ModuleDiagram_class_MagnetoplasmadynamicThrusterModule___Render(void)const  */

void 
ModuleDiagram_class_MagnetoplasmadynamicThrusterModule___Render
          (ModuleDiagram_L_class_MagnetoplasmadynamicThrusterModule_G_ *this)

{
  undefined8 stack0xfffffffc;
  Manager *pMVar1;
  NormalShader *pNVar2;
  Vec2_L_int_G_ VVar3;
  ShaderStack SStack_9;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pNVar2 = NormalShader__GetStatic();
  Graphics__ShaderStack__ShaderStack(&SStack_9,(Shader *)pNVar2);
  pMVar1 = *(Manager **)(this + 8);
  UIWidget__GetTrueSize((UIWidget *)this,&VVar3);
  MagnetoplasmadynamicThrusterModule__RenderDiagram
            (*(MagnetoplasmadynamicThrusterModule **)(this + 0x168),pMVar1,*(Vec2_L_int_G_ *)VVar3.X);
  Graphics__ShaderStack___ShaderStack(&SStack_9);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 005b0020 RenderDiagram ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void  MagnetoplasmadynamicThrusterModule__RenderDiagram(class Manager *,struct
   util__Vec2_L_int_G_)const  */

void 
MagnetoplasmadynamicThrusterModule__RenderDiagram
          (MagnetoplasmadynamicThrusterModule *this,Manager *param_1,Vec2_L_int_G_ param_2)

{
  undefined8 stack0xffffffcc;
  undefined8 stack0xfffffffc;
  undefined1 auVar1 [8];
  Vec4_L_double_G_ VVar2;
  Vec3_L_double_G_ VVar3;
  Vec2_L_double_G_ VVar4;
  Vec3_L_double_G_ VVar5;
  Vec4_L_double_G_ VVar6;
  Vec2_L_double_G_ VVar7;
  undefined1 auVar8 [16];
  int iVar9;
  double *pdVar10;
  Cylinder_L_double_G_ *pCVar11;
  Vec3_L_float_G_ *pVVar12;
  Cylinder_L_double_G_ *pCVar13;
  Darray_L_util__Vec2_L_double_G___G_ *pDVar14;
  double dVar15;
  double dVar16;
  Cylinder_L_double_G_ local_4c;
  undefined1 local_3c [12];
  int iStack_30;
  double local_2c;
  undefined1 local_24 [8];
  undefined8 uStack_1c;
  double local_14;
  TransformStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar9 = (**(code **)(this->_pad_0x0_0 + 0x160))(local_3c);
  pCVar13 = &local_4c;
  local_2c = *(double *)(iVar9 + 8);
  uStack_1c = local_2c;
  pdVar10 = (double *)(**(code **)(this->_pad_0x0_0 + 0x160))();
  local_4c.Height = *pdVar10 + *pdVar10;
  dVar15 = local_2c;
  dVar16 = local_4c.Height;
  if ((char)this[1]._pad_0x0_0 != '\0') {
    if ((char)this[1]._pad_0x0_0 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
      if ((char)this[1]._pad_0x0_0 == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
    }
    local_2c = TurretSubModule__GetObjectOffsetFromTurret_m((TurretSubModule *)&this->_pad_0x70_28);
    dVar16 = TurretSubModule__GetOuterRadius_m((TurretSubModule *)&this->_pad_0x70_28);
    uStack_1c = dVar16 + local_2c + uStack_1c;
    if ((char)this[1]._pad_0x0_0 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    local_2c = TurretSubModule__GetOuterRadius_m((TurretSubModule *)&this->_pad_0x70_28);
    local_2c = local_2c + local_2c;
    dVar15 = uStack_1c;
    dVar16 = local_4c.Height;
    if (local_4c.Height <= local_2c) {
      dVar16 = local_2c;
    }
  }
  *(uint64_t *)&local_24 = (uint64_t)((double)param_2.X / dVar15);
  uStack_1c = (double)param_2.Y / dVar16;
  local_2c = util__Abs((double *)&uStack_1c);
  local_4c.Height = util__Abs((double *)local_24);
  memcpy(&auVar1, &local_24, 12);
  if (local_2c < local_4c.Height) {
    *(uint32_t *)&auVar1 = (uint64_t)uStack_1c;
  }
  *(uint64_t *)&local_14 = (double)(uintptr_t)(1.0 / (double)(int)(uintptr_t)(auVar1));
  local_2c = (double)(uintptr_t)(2.0 / (double)(int)(uintptr_t)(auVar1));
  uStack_1c = (double)(uintptr_t)((double)(int)(uintptr_t)(auVar1));
  Graphics__TransformStack__TransformStack(&local_9,Style__Default);
  (*(uint64_t*)((char*)&(auVar8)+8)) = 0;
  (*(uint64_t*)&(auVar8)) = (double)(param_2.Y / 2);
  Graphics__Translate((*(Vec2_L_double_G_ *)cde_shl16((auVar8), 0x40)));
  Graphics__Scale(uStack_1c);
  if ((char)this[1]._pad_0x0_0 != '\0') {
    (*(uint64_t*)&(local_3c)) = TurretSubModule__GetOuterRadius_m((TurretSubModule *)&this->_pad_0x70_28);
    stack0xffffffcc = 0.0;
    VVar4.Y = 0.0;
    VVar4.X = (double)(*(uint64_t*)&(local_3c));
    Graphics__Translate(VVar4);
    if ((char)this[1]._pad_0x0_0 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    TurretSubModule__RenderDiagram((TurretSubModule *)&this->_pad_0x70_28,uStack_1c);
    if ((char)this[1]._pad_0x0_0 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    (*(uint64_t*)&(local_3c)) =
         TurretSubModule__GetObjectOffsetFromTurret_m((TurretSubModule *)&this->_pad_0x70_28);
    stack0xffffffcc = 0.0;
    VVar5.Y = 0.0;
    VVar5.X = (double)(*(uint64_t*)&(local_3c));
    Graphics__Translate(VVar5);
  }
  pCVar11 = TurbopumpSubModule__GetTurbopumpCylinder_m
                      ((TurbopumpSubModule *)&this[1]._pad_0x78_30,(Cylinder_L_double_G_ *)local_3c);
  VVar6.Y = 0.0;
  VVar6.X = pCVar11->Height * 0.5;
  Graphics__Translate(VVar6);
  pCVar11 = TurbopumpSubModule__GetTurbopumpCylinder_m
                      ((TurbopumpSubModule *)&this[1]._pad_0x78_30,&local_4c);
  (*(uint32_t*)&(local_3c)) = *(undefined4 *)&pCVar11->Height;
  (*(uint32_t*)((char*)&(local_3c)+4)) = *(undefined4 *)((int)&pCVar11->Height + 4);
  stack0xffffffcc = 0.0;
  pCVar11 = TurbopumpSubModule__GetTurbopumpCylinder_m
                      ((TurbopumpSubModule *)&this[1]._pad_0x78_30,(Cylinder_L_double_G_ *)local_24);
  local_4c.Height = pCVar11->Radius + pCVar11->Radius;
  pVVar12 = Material__GetDiagramColor
                      ((Material *)this[1]._pad_0x88_34,(Vec3_L_float_G_ *)(local_24 + 4));
  glColorVec(*pVVar12);
  (*(uint32_t*)((char*)&(local_3c)+8)) = SUB84(local_4c.Height,0);
  iStack_30 = (int)((ulonglong)local_4c.Height >> 0x20);
  VVar3.Y = (*(uint32_t*)((char*)&(local_3c)+4));
  VVar3.X = (*(uint32_t*)&(local_3c));
  VVar3.Y = (*(uint32_t*)((char*)&(local_3c)+8));
  VVar3.Z = iStack_30;
  DrawRectAt((*(Vec4_L_double_G_ *)cde_z16lit(0)),(*(Vec4_L_double_G_ *)&(VVar3)),true,
             (double)CONCAT44(pCVar13,(int)((ulonglong)local_2c >> 0x20)));
  glColor(Preset__White,1.0);
  VVar2.Y = (*(uint32_t*)((char*)&(local_3c)+4));
  VVar2.X = (*(uint32_t*)&(local_3c));
  VVar2.Y = (*(uint32_t*)((char*)&(local_3c)+8));
  VVar2.Z = iStack_30;
  DrawAntialiasedRectAt((*(Vec4_L_double_G_ *)cde_z16lit(0)),(*(Vec4_L_double_G_ *)&(VVar2)),local_2c,local_14,false);
  pCVar13 = TurbopumpSubModule__GetTurbopumpCylinder_m
                      ((TurbopumpSubModule *)&this[1]._pad_0x78_30,(Cylinder_L_double_G_ *)local_3c);
  VVar7.Y = 0.0;
  VVar7.X = pCVar13->Height * 0.5;
  Graphics__Translate(VVar7);
  glColor(Preset__White,1.0);
  uStack_1c = (double)CONCAT44(&local_14,this);
  pDVar14 = (Darray_L_util__Vec2_L_double_G___G_ *)(uintptr_t)(GetCathodeSpline_m(this,(Darray_L_util__Vec2_L_double_G___G_ *)local_3c));
  FUN_005ab410(pDVar14);
  (*(uint32_t*)&(local_3c)) = (uint32_t)(uintptr_t)(&vftable_12);
  if ((Vec2_L_double_G_ *)(*(uint32_t*)((char*)&(local_3c)+4)) != (Vec2_L_double_G_ *)0x0) {
    port_op_delete((void *)(*(uint32_t*)((char*)&(local_3c)+4)));
  }
  pDVar14 = (Darray_L_util__Vec2_L_double_G___G_ *)(uintptr_t)(GetAnodeSpline_m(this,(Darray_L_util__Vec2_L_double_G___G_ *)local_3c));
  FUN_005ab410(pDVar14);
  (*(uint32_t*)&(local_3c)) = (uint32_t)(uintptr_t)(&vftable_12);
  if ((Vec2_L_double_G_ *)(*(uint32_t*)((char*)&(local_3c)+4)) != (Vec2_L_double_G_ *)0x0) {
    port_op_delete((void *)(*(uint32_t*)((char*)&(local_3c)+4)));
  }
  pDVar14 = (Darray_L_util__Vec2_L_double_G___G_ *)(uintptr_t)(GetInsulatorSpline_m(this,(Darray_L_util__Vec2_L_double_G___G_ *)local_3c));
  FUN_005ab410(pDVar14);
  (*(uint32_t*)&(local_3c)) = (uint32_t)(uintptr_t)(&vftable_12);
  if ((Vec2_L_double_G_ *)(*(uint32_t*)((char*)&(local_3c)+4)) != (Vec2_L_double_G_ *)0x0) {
    port_op_delete((void *)(*(uint32_t*)((char*)&(local_3c)+4)));
  }
  Graphics__TransformStack___TransformStack(&local_9);
  return;
}

//==== 005b04b0 SetCachedData_005b04b0 ====

/* public: virtual void  MagnetoplasmadynamicThrusterModule__SetCachedData(class
   DataParser *) */

void 
MagnetoplasmadynamicThrusterModule__SetCachedData
          (MagnetoplasmadynamicThrusterModule *this,DataParser *param_1)

{
  EngineModule__SetCachedData((EngineModule *)this,param_1);
  TurbopumpSubModule__PassThroughCachedData
            ((TurbopumpSubModule *)&this[1]._pad_0x78_30,
             ((Material *)this[1]._pad_0x6c_27)->Density_kg__m3,(Material *)this[1]._pad_0x6c_27,
             true);
  TurbopumpSubModule__PassThroughCachedData2
            ((TurbopumpSubModule *)&this[1]._pad_0x78_30,
             *(double *)(this[1]._pad_0x6c_27 + 0x98) + 1.0);
  return;
}

//==== 005b0510 StaticFactory_005b0510 ====

/* public: static class util__Reflectable * __cdecl
   MagnetoplasmadynamicThrusterModule__ReflectionInfoStruct_class_MagnetoplasmadynamicThrusterModule___StaticFactory(void) */

Reflectable * __cdecl
MagnetoplasmadynamicThrusterModule__ReflectionInfoStruct_class_MagnetoplasmadynamicThrusterModule___StaticFactory__o2(void)

{
  EngineModule *this;
  
  this = (EngineModule *)(uintptr_t)(port_op_new(0x230));
  if (this != (EngineModule *)0x0) {
    memset(this,0,0x230);
    EngineModule__EngineModule(this);
    this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__7;
    this->_pad_0x34_13 =
         (int)&vftable_for_util__RTTIBaseClass__7;
    *(undefined4 *)&this[1].Gimbal.Data.CachedObjectEndRadialMomentOfInertia_kg_m2 = 0;
    *(undefined4 *)((int)&this[1].Gimbal.Data.CachedObjectEndRadialMomentOfInertia_kg_m2 + 4) = 0;
    *(undefined4 *)&this[1].Gimbal.Data.CachedObjectMass_kg = 0;
    *(undefined4 *)((int)&this[1].Gimbal.Data.CachedObjectMass_kg + 4) = 0;
    *(undefined4 *)&this[1].GimbalAngle_degrees = 0;
    this[1].Gimbal.Data.ExtruderModel.Pointer = (GameModel *)0x0;
    this[1].Gimbal.Data.ExtruderModel.Controller = (ReferenceController *)0x0;
    *(undefined4 *)&this[1].Gimbal.IsValidData = 0;
  *(undefined4 *)((char *)&this[1].Gimbal + 0x8c) = 0;
    *(undefined4 *)((int)&this[1].GimbalAngle_degrees + 4) = 0;
    this[1].ExhaustPlumeModel.Pointer = (GameColorModel *)0x0;
    this[1].ExhaustPlumeModel.Controller = (ReferenceController *)0x0;
    this[2]._pad_0x0_0 = 0;
    this[2]._pad_0x4_1 = 0;
    TurbopumpSubModule__TurbopumpSubModule((TurbopumpSubModule *)&this[2]._pad_0x8_2);
    return (Reflectable *)this;
  }
  return (Reflectable *)0x0;
}

//==== 005b05a0 StaticGetMemberByIndex_005b05a0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   MagnetoplasmadynamicThrusterModule__ReflectionInfoStruct_class_MagnetoplasmadynamicThrusterModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
MagnetoplasmadynamicThrusterModule__ReflectionInfoStruct_class_MagnetoplasmadynamicThrusterModule___StaticGetMemberByIndex(ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_2eef99b5__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_2eef99b5__thread_safe_static_guard_0__);
    if ( cde_l2_2eef99b5__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_ba8a3412_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00969b8c = 0;
      _DAT_00969b90 = 0;
      _DAT_00969b94 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969b98,"Unused");
      _DAT_00969ba4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969ba8,"SteamWorkshopID");
      _DAT_00969bb4 = 6;
      _DAT_00969bb8 = 0x10;
      _DAT_00969bbc = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969bc0,"AStr");
      _DAT_00969bcc = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969bd0,"Description");
      _DAT_00969bdc = 6;
      _DAT_00969be0 = 0x20;
      _DAT_00969be4 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969be8,"AStr");
      _DAT_00969bf4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969bf8,"UsesCustomName");
      _DAT_00969c04 = 1;
      _DAT_00969c08 = 0x68;
      _DAT_00969c0c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969c10,"bool");
      _DAT_00969c1c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969c20,"CathodeRadius_m");
      _DAT_00969c2c = 4;
      _DAT_00969c30 = 0x1b0;
      _DAT_00969c34 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969c38,"double");
      _DAT_00969c44 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969c48,"ChamberThickness_m");
      _DAT_00969c54 = 4;
      _DAT_00969c58 = 0x1b8;
      _DAT_00969c5c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969c60,"double");
      _DAT_00969c6c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969c70,"AnodeThickness_m");
      _DAT_00969c7c = 4;
      _DAT_00969c80 = 0x1c0;
      _DAT_00969c84 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969c88,"double");
      _DAT_00969c94 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969c98,"ThrusterLength_m");
      _DAT_00969ca4 = 4;
      _DAT_00969ca8 = 0x1c8;
      _DAT_00969cac = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969cb0,"double");
      _DAT_00969cbc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969cc0,"CathodeComposition");
      _DAT_00969ccc = 8;
      _DAT_00969cd0 = 0x1d0;
      _DAT_00969cd4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969cd8,"Material");
      _DAT_00969ce4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969ce8,"AnodeComposition");
      _DAT_00969cf4 = 8;
      _DAT_00969cf8 = 0x1d4;
      _DAT_00969cfc = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969d00,"Material");
      _DAT_00969d0c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969d10,"InsulatorComposition");
      _DAT_00969d1c = 8;
      _DAT_00969d20 = 0x1d8;
      _DAT_00969d24 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969d28,"Material");
      _DAT_00969d34 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969d38,"Propellant");
      _DAT_00969d44 = 8;
      _DAT_00969d48 = 0x1dc;
      _DAT_00969d4c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969d50,"Material");
      _DAT_00969d5c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969d60,"Current_A");
      _DAT_00969d6c = 4;
      _DAT_00969d70 = 0x1e0;
      _DAT_00969d74 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969d78,"double");
      _DAT_00969d84 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969d88,"Injector");
      _DAT_00969d94 = 10;
      _DAT_00969d98 = 0x1e8;
      _DAT_00969d9c = 0x48;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969da0,"TurbopumpSubModule");
      _DAT_00969dac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969db0,"Gimbal");
      _DAT_00969dbc = 10;
      _DAT_00969dc0 = 0x70;
      _DAT_00969dc4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969dc8,"TurretSubModule");
      _DAT_00969dd4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969dd8,"GimbalAngle_degrees");
      _DAT_00969de4 = 4;
      _DAT_00969de8 = 0x178;
      _DAT_00969dec = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969df0,"double");
      _DAT_00969dfc = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_MagnetoplasmadynamicThrusterModule__ReflectionInfoStruct_class_MagnetoplasmadynamicThrusterModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_2eef99b5__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_ba8a3412_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_00969b8c + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_00969b90 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_00969b94 + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_00969b98 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_00969ba4)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_00969ba5)[iVar1];
  return __return_storage_ptr__;
}





//==== 005b0a90 StaticGetMemberCount_005b0a90 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl MagnetoplasmadynamicThrusterModule__ReflectionInfoStruct_class_MagnetoplasmadynamicThrusterModule___StaticGetMemberCount(void) */

int __cdecl
MagnetoplasmadynamicThrusterModule__ReflectionInfoStruct_class_MagnetoplasmadynamicThrusterModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_9210ccff__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_9210ccff__thread_safe_static_guard_0__);
    if ( cde_l2_9210ccff__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_da2b286f_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_00969904 = 0;
      _DAT_00969908 = 0;
      _DAT_0096990c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969910,"Unused");
      _DAT_0096991c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969920,"SteamWorkshopID");
      _DAT_0096992c = 6;
      _DAT_00969930 = 0x10;
      _DAT_00969934 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969938,"AStr");
      _DAT_00969944 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969948,"Description");
      _DAT_00969954 = 6;
      _DAT_00969958 = 0x20;
      _DAT_0096995c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969960,"AStr");
      _DAT_0096996c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969970,"UsesCustomName");
      _DAT_0096997c = 1;
      _DAT_00969980 = 0x68;
      _DAT_00969984 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969988,"bool");
      _DAT_00969994 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969998,"CathodeRadius_m");
      _DAT_009699a4 = 4;
      _DAT_009699a8 = 0x1b0;
      _DAT_009699ac = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009699b0,"double");
      _DAT_009699bc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009699c0,"ChamberThickness_m");
      _DAT_009699cc = 4;
      _DAT_009699d0 = 0x1b8;
      _DAT_009699d4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009699d8,"double");
      _DAT_009699e4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_009699e8,"AnodeThickness_m");
      _DAT_009699f4 = 4;
      _DAT_009699f8 = 0x1c0;
      _DAT_009699fc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969a00,"double");
      _DAT_00969a0c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969a10,"ThrusterLength_m");
      _DAT_00969a1c = 4;
      _DAT_00969a20 = 0x1c8;
      _DAT_00969a24 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969a28,"double");
      _DAT_00969a34 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969a38,"CathodeComposition");
      _DAT_00969a44 = 8;
      _DAT_00969a48 = 0x1d0;
      _DAT_00969a4c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969a50,"Material");
      _DAT_00969a5c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969a60,"AnodeComposition");
      _DAT_00969a6c = 8;
      _DAT_00969a70 = 0x1d4;
      _DAT_00969a74 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969a78,"Material");
      _DAT_00969a84 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969a88,"InsulatorComposition");
      _DAT_00969a94 = 8;
      _DAT_00969a98 = 0x1d8;
      _DAT_00969a9c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969aa0,"Material");
      _DAT_00969aac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969ab0,"Propellant");
      _DAT_00969abc = 8;
      _DAT_00969ac0 = 0x1dc;
      _DAT_00969ac4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969ac8,"Material");
      _DAT_00969ad4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969ad8,"Current_A");
      _DAT_00969ae4 = 4;
      _DAT_00969ae8 = 0x1e0;
      _DAT_00969aec = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969af0,"double");
      _DAT_00969afc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969b00,"Injector");
      _DAT_00969b0c = 10;
      _DAT_00969b10 = 0x1e8;
      _DAT_00969b14 = 0x48;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969b18,"TurbopumpSubModule");
      _DAT_00969b24 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969b28,"Gimbal");
      _DAT_00969b34 = 10;
      _DAT_00969b38 = 0x70;
      _DAT_00969b3c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969b40,"TurretSubModule");
      _DAT_00969b4c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969b50,"GimbalAngle_degrees");
      _DAT_00969b5c = 4;
      _DAT_00969b60 = 0x178;
      _DAT_00969b64 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_00969b68,"double");
      _DAT_00969b74 = 0;
      atexit( private__static_int_const___cdecl_MagnetoplasmadynamicThrusterModule__ReflectionInfoStruct_class_MagnetoplasmadynamicThrusterModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_9210ccff__thread_safe_static_guard_0__);
    }
  }
  return 0x10;
}





//==== 005b0f40 StaticGetReflectionInfo_005b0f40 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct MagnetoplasmadynamicThrusterModule__ReflectionInfoStruct_L_class_MagnetoplasmadynamicThrusterModule_G_ * __cdecl
   MagnetoplasmadynamicThrusterModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_MagnetoplasmadynamicThrusterModule_G_ * __cdecl
MagnetoplasmadynamicThrusterModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_d6946334__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_d6946334__thread_safe_static_guard_0__);
    if ( cde_l2_d6946334__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_d3e6b623_ReflectionInfo) = &vftable_194;
      _Init_thread_footer(& cde_l2_d6946334__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoStruct_L_class_MagnetoplasmadynamicThrusterModule_G_ * *)&cde_l2_d3e6b623_ReflectionInfo;
}





//==== 005b1360 MethodCallerConst__public__bool___thiscall_EngineCompartment__IsEngineUndamaged_int_const__ ====


/* public: static bool __cdecl util__DelegateFactory_L_struct_EngineCompartment_Cbool_Cint_G___MethodCallerConst_L__public_bool__thiscall_EngineCompartment__IsEngineUndamaged_int_const_G_(void const * const,int) */

bool __cdecl
util__DelegateFactory_struct_EngineCompartment_bool_int___MethodCallerConst__public__bool___thiscall_EngineCompartment__IsEngineUndamaged_int_const
          (void *param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = EngineCompartment__IsEngineUndamaged((EngineCompartment *)param_1,param_2);
}





//==== 005b1370 MethodCallerConst___thunk_____thiscall_WeaponModule__vcall_360__flat_____0__ ====


/* public: static bool __cdecl util__DelegateFactory_L_class_WeaponModule_Cbool_G___MethodCallerConst_L___thunk____thiscallWeaponModule____PUNK_P_vcall_360_C_flat_______C0__G_(void const * const) */

bool __cdecl
util__DelegateFactory_class_WeaponModule_bool___MethodCallerConst___thunk_____thiscall_WeaponModule___vcall__360__flat_______0(void *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Load optimize_e__size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x005b1991. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(uintptr_t)(*(int *)param_1+ 0x168))();
  return (bool)uVar1;
}





//==== 005b1380 MethodCallerConst___thunk_____thiscall_EngineModule__vcall_364__flat_____0__ ====


/* public: static double __cdecl util__DelegateFactory_L_class_EngineModule_Cdouble_G___MethodCallerConst_L___thunk____thiscallEngineModule____PUNK_P_vcall_364_C_flat_______C0__G_(void const * const) */

double __cdecl
util__DelegateFactory_class_EngineModule_double___MethodCallerConst___thunk_____thiscall_EngineModule___vcall__364__flat_______0(void *param_1)

{
  float10 fVar1;
  
                    /* WARNING: Load optimize_e__size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x005b1999. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float10)(**(code **)(uintptr_t)(*(int *)param_1+ 0x16c))();
  return (double)fVar1;
}





//==== 005b1390 MethodCallerConst__public__bool___thiscall_EngineModule__CanGimbal_void_const__0__ ====


/* public: static bool __cdecl util__DelegateFactory_L_class_EngineModule_Cbool_G___MethodCallerConst_L__public_bool__thiscallEngineModule__CanGimbal_void_const__C0__G_(void const * const) */

bool __cdecl
util__DelegateFactory_class_EngineModule_bool___MethodCallerConst__public__bool___thiscall_EngineModule__CanGimbal_void_const__0(void *param_1)

{
  float10 fVar1;
  
                    /* WARNING: Load optimize_e__size is inaccurate */
  fVar1 = (float10)(**(code **)(uintptr_t)(*(int *)param_1+ 0x180))();
  if (0.0 < (double)fVar1) {
                    /* WARNING: Load optimize_e__size is inaccurate */
    fVar1 = (float10)(**(code **)(uintptr_t)(*(int *)param_1+ 0x184))();
    if (0.0 < (double)fVar1) {
      return true;
    }
  }
  return false;
}





//==== 005b13a0 MethodCallerConst__public__class_util__Str_char____thiscall_EngineModule__GetEngineInfo_void_const__0__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_classEngineModule_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G___thiscall_EngineModule__GetEngineInfo_void_const_C0__G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_EngineModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_EngineModule__GetEngineInfo_void_const__0
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(EngineModule__GetEngineInfo((EngineModule *)param_1,&SStack_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 005b13e0 MethodCallerConst__public__class_util__Str_char____thiscall_EngineModule__GetGimbalInfo_void_const__0__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_classEngineModule_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G___thiscall_EngineModule__GetGimbalInfo_void_const_C0__G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_EngineModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_EngineModule__GetGimbalInfo_void_const__0
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(EngineModule__GetGimbalInfo((EngineModule *)param_1,&SStack_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 005b1420 MethodCallerConst__public__double___thiscall_EngineModule__GetGimbalUsedRadius_m_void_const__0__ ====


/* public: static double __cdecl util__DelegateFactory_L_class_EngineModule_Cdouble_G___MethodCallerConst_L__public_double__thiscall_EngineModule__GetGimbalUsedRadius_m_void_const_C0__G_(void const * const) */

double __cdecl
util__DelegateFactory_class_EngineModule_double___MethodCallerConst__public__double___thiscall_EngineModule__GetGimbalUsedRadius_m_void_const__0
          (void *param_1)

{
  int iVar1;
  double *pdVar2;
  float10 fVar3;
  undefined1 auStack_14 [16];
  
  if (*(char *)((int)param_1 + 0x170) == '\0') {
    iVar1 = 1;
  }
  else {
    iVar1 = *(int *)((int)param_1 + 0x98);
  }
                    /* WARNING: Load optimize_e__size is inaccurate */
  if (iVar1 == 1) {
    fVar3 = (float10)(**(code **)(uintptr_t)(*(int *)param_1+ 0x164))();
    return (double)fVar3;
  }
  pdVar2 = (double *)(**(code **)(uintptr_t)(*(int *)param_1+ 0x160))(auStack_14);
  return *pdVar2;
}





//==== 005b15f0 EngineModule_005b15f0 ====

/* public: __thiscall EngineModule__EngineModule(void) */

EngineModule * __thiscall EngineModule__EngineModule(EngineModule *this)

{
  Module__Module((Module *)this);
  this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__8;
  this->_pad_0x34_13 = (int)&vftable_for_util__RTTIBaseClass__8;
  TurretSubModule__TurretSubModule((TurretSubModule *)&(this->Gimbal).Data.ArmorThickness_m);
  *(undefined1 *)&this[1].Gimbal.Data.MomentumWheels._pad_0x8_2 = 0;
  *(undefined8 *)&this[1].Gimbal.Data.MomentumWheels.Composition = 0;
  *(undefined4 *)&this[1].Gimbal.Data.MomentumWheels.RotationalSpeed_RPM = 0;
  *(undefined4 *)((int)&this[1].Gimbal.Data.MomentumWheels.RotationalSpeed_RPM + 4) = 0;
  this[1].Gimbal.Data.MomentumWheels.CachedAxisCount =
       (int)&vftable_80;
  *(undefined4 *)&((*(undefined4 *)((char *)&(this[1].Gimbal.Data.MomentumWheels) + 0x24))) = 0;
  *(undefined4 *)&this[1].Gimbal.Data.MomentumWheels.CachedRadius_m = 0;
  *(undefined4 *)((int)&this[1].Gimbal.Data.MomentumWheels.CachedRadius_m + 4) = 0;
  *(undefined ***)&this[1].Gimbal.Data.MomentumWheels.CachedHeight_m = (undefined **)(&vftable_80);
  *(undefined4 *)((int)&this[1].Gimbal.Data.MomentumWheels.CachedHeight_m + 4) = 0;
  this[1].Gimbal.Data.MomentumWheels.CachedWheelCount = 0;
  *(undefined4 *)&((*(undefined4 *)((char *)&(this[1].Gimbal.Data.MomentumWheels) + 0x3c))) = 0;
  *(undefined4 *)&this[1].Gimbal.Data.CachedObjectRadius_m = 0;
  *(undefined4 *)((int)&this[1].Gimbal.Data.CachedObjectRadius_m + 4) = 0;
  return this;
}

//==== 005b17a0 operator___005b17a0 ====


/* public: class util__Darray_L_structInfoBox_G_ &  util__Darray_struct_InfoBox___operator(class util__Darray_L_structInfoBox_G_ const &) */

Darray_L_struct_InfoBox_G_ * 
util__Darray_struct_InfoBox___operator
          (Darray_L_struct_InfoBox_G_ *this,Darray_L_struct_InfoBox_G_ *param_1)

{
  Str_L_char_G_ *pSVar1;
  Darray_L_struct_InfoBox_G_ *pDVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  Str_L_char_G_ *pSVar6;
  Str_L_char_G_ *pSVar7;
  
  pDVar2 = param_1;
  if (*(int *)(this + 8) == 0) {
    param_1 = (Darray_L_struct_InfoBox_G_ *)(**(code **)(*(int *)param_1 + 0xc))();
    SetSize(this,(int *)&param_1);
    iVar3 = (**(code **)(*(int *)pDVar2 + 0xc))();
    if (iVar3 == 0) {
      (**(code **)(*(int *)this + 0x10))();
      return this;
    }
    CheckSizeDestructive(this);
    param_1 = *(Darray_L_struct_InfoBox_G_ **)(this + 4);
    puVar5 = *(undefined4 **)(pDVar2 + 4);
    if (puVar5 != puVar5 + *(int *)(pDVar2 + 8) * 0xe) {
      pSVar7 = (Str_L_char_G_ *)(puVar5 + 8);
      pSVar6 = (Str_L_char_G_ *)(param_1 + 0x20);
      do {
        *(undefined4 *)param_1 = *puVar5;
        pSVar6[-3].Length = pSVar7[-3].Length;
        pSVar6[-2].Data = pSVar7[-2].Data;
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)&pSVar6[-2].Capacity,(Str_L_char_G_ *)&pSVar7[-2].Capacity);
        pSVar6[-1].Capacity = pSVar7[-1].Capacity;
        pSVar6[-1].Length = pSVar7[-1].Length;
        util__Maybe_struct_util__ClassMember___operator(pSVar6,pSVar7);
        iVar3 = pSVar7[1].Capacity;
        param_1 = param_1 + 0x38;
        puVar5 = puVar5 + 0xe;
        pSVar6[1].Data = pSVar7[1].Data;
        pSVar6[1].Capacity = iVar3;
        pSVar1 = pSVar7 + 1;
        pSVar7 = (Str_L_char_G_ *)&pSVar7[4].Length;
        pSVar6[1].Length = pSVar1->Length;
        pSVar6 = (Str_L_char_G_ *)&pSVar6[4].Length;
      } while (puVar5 != (undefined4 *)(*(int *)(pDVar2 + 4) + *(int *)(pDVar2 + 8) * 0x38));
      return this;
    }
  }
  else {
    iVar3 = (**(code **)(*(int *)param_1 + 0xc))();
    if (iVar3 != 0) {
      iVar3 = *(int *)(this + 8);
      iVar4 = (**(code **)(*(int *)pDVar2 + 0xc))();
      param_1 = (Darray_L_struct_InfoBox_G_ *)(iVar4 + *(int *)(this + 8));
      SetSize(this,(int *)&param_1);
      CheckSize(this,iVar3);
      param_1 = *(Darray_L_struct_InfoBox_G_ **)(pDVar2 + 4);
      puVar5 = (undefined4 *)(*(int *)(this + 4) + iVar3 * 0x38);
      if (puVar5 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x38)) {
        pSVar7 = (Str_L_char_G_ *)(puVar5 + 8);
        pSVar6 = (Str_L_char_G_ *)(param_1 + 0x20);
        do {
          *puVar5 = *(undefined4 *)param_1;
          pSVar7[-3].Length = pSVar6[-3].Length;
          pSVar7[-2].Data = pSVar6[-2].Data;
          util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)&pSVar7[-2].Capacity,(Str_L_char_G_ *)&pSVar6[-2].Capacity);
          pSVar7[-1].Capacity = pSVar6[-1].Capacity;
          pSVar7[-1].Length = pSVar6[-1].Length;
          util__Maybe_struct_util__ClassMember___operator(pSVar7,pSVar6);
          iVar3 = pSVar6[1].Capacity;
          param_1 = param_1 + 0x38;
          puVar5 = puVar5 + 0xe;
          pSVar7[1].Data = pSVar6[1].Data;
          pSVar7[1].Capacity = iVar3;
          pSVar1 = pSVar6 + 1;
          pSVar6 = (Str_L_char_G_ *)&pSVar6[4].Length;
          pSVar7[1].Length = pSVar1->Length;
          pSVar7 = (Str_L_char_G_ *)&pSVar7[4].Length;
        } while (puVar5 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x38));
      }
    }
  }
  return this;
}





//==== 005b1977 vcall_340__flat____ ====

/* [thunk]: __thiscall WeaponModule:: 0 vcall{340,{flat}}' }' */

void __thiscall WeaponModule___vcall__340__flat(WeaponModule *this)

{
                    /* WARNING: Could not recover jumptable at 0x005b1979. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_pad_0x0_0 + 0x154))();
  return;
}

//==== 005b197f vcall_344__flat____ ====


/* [thunk]: __thiscall PowerModule:: 0 vcall{344,{flat}}' }' */

void __thiscall PowerModule___vcall__344__flat(PowerModule *this)

{
                    /* WARNING: Could not recover jumptable at 0x005b1981. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 0x158))();
  return;
}





//==== 005b1987 vcall_348__flat____ ====

/* [thunk]: __thiscall WeaponModule:: 0 vcall{348,{flat}}' }' */

void __thiscall WeaponModule___vcall__348__flat(WeaponModule *this)

{
                    /* WARNING: Could not recover jumptable at 0x005b1989. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_pad_0x0_0 + 0x15c))();
  return;
}

//==== 005b198f vcall_360__flat____ ====

/* [thunk]: __thiscall WeaponModule:: 0 vcall{360,{flat}}' }' */

void __thiscall WeaponModule___vcall__360__flat(WeaponModule *this)

{
                    /* WARNING: Could not recover jumptable at 0x005b1991. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_pad_0x0_0 + 0x168))();
  return;
}

//==== 005b1997 vcall_364__flat____ ====

/* [thunk]: __thiscall EngineModule:: 0 vcall{364,{flat}}' }' */

void __thiscall EngineModule___vcall__364__flat(EngineModule *this)

{
                    /* WARNING: Could not recover jumptable at 0x005b1999. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_pad_0x0_0 + 0x16c))();
  return;
}

//==== 005b199f vcall_384__flat____ ====

/* [thunk]: __thiscall WeaponModule:: 0 vcall{384,{flat}}' }' */

void __thiscall WeaponModule___vcall__384__flat(WeaponModule *this)

{
                    /* WARNING: Could not recover jumptable at 0x005b19a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_pad_0x0_0 + 0x180))();
  return;
}

//==== 005b19a7 vcall_388__flat____ ====

/* [thunk]: __thiscall EngineModule:: 0 vcall{388,{flat}}' }' */

void __thiscall EngineModule___vcall__388__flat(EngineModule *this)

{
                    /* WARNING: Could not recover jumptable at 0x005b19a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_pad_0x0_0 + 0x184))();
  return;
}

//==== 005b19b0 vector_deleting_destructor_005b19b0 ====


/* public: virtual void * __thiscall util__Darray_L_classutil__WeakPtr_L_classSpacecraftComponent_G___G_:: 0 vectordeletingdestructor(unsigned int) */

void * 
util__Darray_class_util__WeakPtr_class_SpacecraftComponent______vector_deleting_destructor
          (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *this,uint param_1)

{
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *pDVar1;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *pDVar2;
  void *pvVar3;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *pDVar4;
  int iVar5;
  
  if ((param_1 & 2) != 0) {
    iVar5 = *(int *)(this + -4);
    pDVar1 = this + -4;
    pDVar4 = this + iVar5 * 0x10;
    while (iVar5 != 0) {
      pvVar3 = *(void **)(pDVar4 + -0xc);
      pDVar2 = pDVar4 + -0x10;
      iVar5 = iVar5 + -1;
      *(undefined ***)pDVar2 = &vftable_66;
      if (pvVar3 != (void *)0x0) {
        _vector_destructor_iterator_
                  (pvVar3,8,*(uint *)((int)pvVar3 + -4),
                   util__WeakPtr_class_SpacecraftComponent____WeakPtr_class_SpacecraftComponent);
        port_op_delete((int *)((int)pvVar3 + -4),*(int *)((int)pvVar3 + -4) * 8 + 4);
      }
      *(undefined4 *)(pDVar4 + -0xc) = 0;
      *(undefined ***)pDVar2 = (undefined **)(&vftable);
      pDVar4 = pDVar2;
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(pDVar1,*(int *)pDVar1 * 0x10 + 4);
    }
    return pDVar1;
  }
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___dtor(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 005b1a70 scalar_deleting_destructor_005b1a70 ====


/* public: virtual void * __thiscall EngineModule:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall EngineModule___scalar_deleting_destructor(EngineModule *this,uint param_1)

{
  ReferenceController *this_00;
  
  this_00 = *(ReferenceController **)((int)&this[1].Gimbal.Data.CachedObjectRadius_m + 4);
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  util__Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G___Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G___dtor((Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)
             &this[1].Gimbal.Data.MomentumWheels.CachedHeight_m);
  util__Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G___Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G___dtor((Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)
             &this[1].Gimbal.Data.MomentumWheels.CachedAxisCount);
  SharedPtr_L_struct_GameColorModel_G___dtor((SharedPtr_L_struct_GameColorModel_G_ *)
             &this[1].Gimbal.Data.MomentumWheels.RotationalSpeed_RPM);
  TurretSubModule___TurretSubModule((TurretSubModule *)&(this->Gimbal).Data.ArmorThickness_m);
  Module___Module((Module *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x1b0);
  }
  return this;
}





//==== 005b1ad0 CanGimbal ====

/* public: bool __thiscall EngineModule__CanGimbal(void)const  */

bool __thiscall EngineModule__CanGimbal(EngineModule *this)

{
  float10 fVar1;
  
  fVar1 = (float10)(**(code **)(this->_pad_0x0_0 + 0x180))();
  if (0.0 < (double)fVar1) {
    fVar1 = (float10)(**(code **)(this->_pad_0x0_0 + 0x184))();
    if (0.0 < (double)fVar1) {
      return true;
    }
  }
  return false;
}

//==== 005b1b20 CheckSize_005b1b20 ====


/* private: bool  util__Darray_L_classutil__Darray_L_classutil__WeakPtr_L_class_SpacecraftComponent_G__G__G___CheckSize(int) */

bool 
util__Darray_class_util__Darray_class_util__WeakPtr_class_SpacecraftComponent_______CheckSize
          (Darray_L_class_util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___G_ *this,
          int param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *pDVar4;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *pDVar5;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *this_00;
  uint uVar6;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *pDVar7;
  bool bVar8;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *pDStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar3 = *(uint *)(this + 8);
  bVar8 = -1 < (int)uVar3;
  bVar1 = !bVar8;
  if (bVar1) {
    pDStack_c = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)0x0;
    SetSize(this,(int *)&pDStack_c);
    uVar3 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar1;
  bVar1 = (int)uVar3 < 0x40000000;
  if (!bVar1) {
    pDStack_c = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)0x3fffffff;
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
    pDStack_c = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)0x0;
  }
  else {
    *puVar2 = uVar6;
    pDStack_c = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)(puVar2 + 1);
    pDVar4 = pDStack_c;
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined ***)pDVar4 = &vftable_66;
      *(undefined4 *)(pDVar4 + 4) = 0;
      *(undefined4 *)(pDVar4 + 8) = 0;
      *(undefined4 *)(pDVar4 + 0xc) = 0;
      pDVar4 = pDVar4 + 0x10;
    }
  }
  pDVar4 = *(Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ **)(this + 4);
  if (pDVar4 != (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)0x0) {
    pDVar5 = pDStack_c + *(int *)(this + 8) * 0x10;
    this_00 = pDStack_c;
    pDVar7 = pDVar4;
    if (pDVar4 != pDVar4 + param_1 * 0x10) {
      do {
        if (this_00 == pDVar5) break;
        Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___op_assign(this_00,pDVar7);
        pDVar7 = pDVar7 + 0x10;
        pDVar4 = *(Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ **)(this + 4);
        this_00 = this_00 + 0x10;
      } while (pDVar7 != pDVar4 + param_1 * 0x10);
    }
    if (pDVar4 != (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)0x0) {
      if (*(int *)(pDVar4 + -4) == 0) {
        port_op_delete(pDVar4 + -4);
      }
      else {
        (**(code **)(*(int *)pDVar4 + 0x18))(3);
      }
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ **)(this + 4) = pDStack_c;
  return bStack_5;
}





//==== 005b1cb0 CheckSizeDestructive_005b1cb0 ====


/* private: bool  util__Darray_L_structInfoBox_G___CheckSizeDestructive(void) */

bool __thiscall util__Darray_struct_InfoBox___CheckSizeDestructive(Darray_L_struct_InfoBox_G_ *this)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  Str_L_char_G_ *this_00;
  bool bVar6;
  Str_L_char_G_ SStack_28;
  Str_L_char_G_ SStack_1c;
  Darray_L_struct_InfoBox_G_ *pDStack_10;
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
    if (*(InfoBox **)(this + 4) != (InfoBox *)0x0) {
      InfoBox___vector_deleting_destructor(*(InfoBox **)(this + 4),3);
      uVar5 = *(uint *)(this + 0xc);
    }
    *(undefined4 *)(this + 4) = 0;
    uVar3 = -(uint)((int)((ulonglong)uVar5 * 0x38 >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 0x38);
    puVar2 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
    if (puVar2 == (uint *)0x0) {
      puVar4 = (uint *)0x0;
    }
    else {
      *puVar2 = uVar5;
      puVar4 = puVar2 + 1;
      if (uVar5 != 0) {
        SStack_1c.Data = (char *)0x0;
        SStack_1c.Capacity = 0;
        SStack_1c.Length = 0;
        SStack_28.Data = (char *)0x0;
        this_00 = (Str_L_char_G_ *)(puVar2 + 4);
        SStack_28.Capacity = 0;
        SStack_28.Length = 0;
        puStack_c = puVar4;
        do {
          *puVar4 = 0;
          this_00[-1].Capacity = 0;
          this_00[-1].Length = 0;
          util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(this_00,&SStack_1c);
          this_00[1].Data = (char *)0x0;
          this_00[1].Capacity = 0;
          util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const((Str_L_char_G_ *)&this_00[1].Length,&SStack_28);
          this_00[2].Length = 0;
          puVar4 = puVar4 + 0xe;
          this_00[3].Data = (char *)0x0;
          *(undefined1 *)&this_00[3].Capacity = 0;
          this_00 = (Str_L_char_G_ *)&this_00[4].Length;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
        *(uint **)(pDStack_10 + 4) = puStack_c;
        return bStack_5;
      }
    }
    *(uint **)(this + 4) = puVar4;
    return bStack_5;
  }
  return bVar1 && bVar6;
}





//==== 005b1e50 DestroyModels ====

/* public: virtual void __thiscall EngineModule__DestroyModels(void) */

void __thiscall EngineModule__DestroyModels(EngineModule *this)

{
  int *piVar1;
  ReferenceController *pRVar2;
  bool bVar3;
  ReferenceControllerRegistry *this_00;
  HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *pHVar4;
  undefined4 *puVar5;
  Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_ *pDVar6;
  int iVar7;
  VertexBufferObjectInterface *this_01;
  
  Module__DestroyModels((Module *)this);
  pRVar2 = *(ReferenceController **)
            ((int)&this[1].Gimbal.Data.MomentumWheels.RotationalSpeed_RPM + 4);
  this_01 = *(VertexBufferObjectInterface **)&this[1].Gimbal.Data.MomentumWheels.RotationalSpeed_RPM
  ;
  *(undefined4 *)&this[1].Gimbal.Data.MomentumWheels.RotationalSpeed_RPM = 0;
  *(undefined4 *)((int)&this[1].Gimbal.Data.MomentumWheels.RotationalSpeed_RPM + 4) = 0;
  if (pRVar2 != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__ReleaseStrongReference(pRVar2);
    if (bVar3) {
      if (this_01 != (VertexBufferObjectInterface *)0x0) {
        this_01[1]._pad_0x0_0 = (int)&vftable_10;
        if ((void *)this_01[1].Type != (void *)0x0) {
          port_op_delete((void *)this_01[1].Type);
        }
        this_01[1].Type = 0;
        this_01[1]._pad_0x0_0 = (int)&vftable;
        VertexBufferObjectInterface___VertexBufferObjectInterface(this_01);
        port_op_delete(this_01,0xa0);
      }
      this_00 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(this_00,this_01);
    }
  }
  (**(code **)(uintptr_t)(this[1].Gimbal.Data.MomentumWheels.CachedAxisCount + 0x10))();
  (**(code **)(*(int *)&this[1].Gimbal.Data.MomentumWheels.CachedHeight_m + 0x10))();
  pRVar2 = *(ReferenceController **)((int)&this[1].Gimbal.Data.CachedObjectRadius_m + 4);
  *(undefined4 *)&this[1].Gimbal.Data.CachedObjectRadius_m = 0;
  *(undefined4 *)((int)&this[1].Gimbal.Data.CachedObjectRadius_m + 4) = 0;
  if (pRVar2 == (ReferenceController *)0x0) {
    return;
  }
  piVar1 = &pRVar2->WeakReferenceCount;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.cpp"
                    ,0x15,"WeakReferenceCount >= 0",(char *)0x0);
    DebugBreak();
  }
  if ((pRVar2->StrongReferenceCount == 0) && (pRVar2->WeakReferenceCount == 0)) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_0098956c) {
      _Init_thread_header(&DAT_0098956c);
      if (DAT_0098956c == -1) {
        DAT_00989568 = (undefined4)(uintptr_t)((HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0);
        pHVar4 = (HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)(uintptr_t)(port_op_new(8));
        if (pHVar4 == (HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0) {
          pHVar4 = (HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0;
        }
        else {
          pHVar4->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                          *)0x0;
          pHVar4->Capacity = 0;
          pHVar4->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                          *)0x0;
          pHVar4->Capacity = 10000;
          puVar5 = (undefined4 *)(uintptr_t)(port_op_new(0x27104));
          if (puVar5 == (undefined4 *)0x0) {
            pHVar4->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                            *)0x0;
          }
          else {
            *puVar5 = 10000;
            iVar7 = 10000;
            pDVar6 = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                      *)(puVar5 + 1);
            do {
              pDVar6->_pad_0x0_0 =
                   (int)&vftable_554;
              pDVar6->Data = (tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0;
              pDVar6->Size = 0;
              pDVar6->Capacity = 0;
              iVar7 = iVar7 + -1;
              pDVar6 = pDVar6 + 1;
            } while (iVar7 != 0);
            pHVar4->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                            *)(puVar5 + 1);
          }
        }
        DAT_00989568 = (undefined4)(uintptr_t)(pHVar4);
        atexit(FUN_0090ff50);
        _Init_thread_footer(&DAT_0098956c);
      }
    }
    util__ReferenceControllerRegistry__Unregister
              ((ReferenceControllerRegistry *)DAT_00989568,pRVar2);
  }
  return;
}

//==== 005b1f20 ExpendReactionMass_005b1f20 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall EngineCompartment__ExpendReactionMass(double) */

void __thiscall EngineCompartment__ExpendReactionMass(EngineCompartment *this,double param_1)

{
  undefined8 stack0xfffffffc;
  int *piVar1;
  int iVar2;
  Darray_L_util__WeakPtr_L_PropellantTankCompartment_G___G_ *pDVar3;
  double dVar4;
  undefined **local_20;
  void *local_1c;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(uint32_t *)&local_10 = 0;
  piVar1 = (int *)(**(code **)(*(int *)this->_pad_0x38_14 + 0x170))(&local_20);
  *(uint32_t *)&local_c = 0;
  iVar2 = (**(code **)(uintptr_t)(*piVar1 + 0xc))();
  if (local_c < iVar2) {
    do {
      iVar2 = (**(code **)*piVar1)(&local_c);
      dVar4 = *(double *)(iVar2 + 8) * param_1;
      pDVar3 = (Darray_L_util__WeakPtr_L_PropellantTankCompartment_G___G_ *)
               (**(code **)(this->CachedReactionMassCompartments)._pad_0x0_0)(&local_10);
      PropellantTankCompartment__SiphonFromMultiplePropellantTanks(pDVar3,dVar4);
      *(uint32_t *)&local_10 = local_10 + 1;
      *(uint32_t *)&local_c = local_c + 1;
      iVar2 = (**(code **)(uintptr_t)(*piVar1 + 0xc))();
    } while (local_c < iVar2);
  }
  *(uint32_t *)&local_20 = (uint32_t)(uintptr_t)(&vftable_15);
  if (local_1c != (void *)0x0) {
    port_op_delete(local_1c);
  }
  return;
}

//==== 005b2520 GenerateModels ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall EngineModule__GenerateModels(void) */

void __thiscall EngineModule__GenerateModels(EngineModule *this)

{
  undefined8 stack0xfffffffc;
  VertexBufferObject *this_00;
  TransformStack local_a;
  TransformStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  Module__GenerateModels((Module *)this);
  Graphics__TransformStack__TransformStack(&local_a,GraphicsTransformFlag__ClearToIdentity);
  (**(code **)(this->_pad_0x0_0 + 0x188))();
  if ((*(int *)&this[1].Gimbal.Data.MomentumWheels.RotationalSpeed_RPM != 0) &&
     (*(int *)((int)&this[1].Gimbal.Data.MomentumWheels.RotationalSpeed_RPM + 4) != 0)) {
    Graphics__TransformStack__TransformStack(&local_9,GraphicsTransformFlag__ClearToIdentity);
    this_00 = GameModel__GetVertexObject
                        (*(GameModel **)&this[1].Gimbal.Data.MomentumWheels.RotationalSpeed_RPM);
    VertexBufferObjectInterface__Generate((VertexBufferObjectInterface *)this_00);
    Graphics__TransformStack___TransformStack(&local_9);
  }
  Graphics__TransformStack___TransformStack(&local_a);
  return;
}

//==== 005b25a0 GenerateTextures_005b25a0 ====

/* public: virtual void __thiscall EngineCompartment__GenerateTextures(void) */

void __thiscall EngineCompartment__GenerateTextures(EngineCompartment *this)

{
  int iVar1;
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar2;
  ReferenceControllerRegistry *pRVar3;
  SharedPtr_L_ArmorTextureHandler_G_ SVar4;
  ArmorTextureHandler *this_02;
  ArmorTextureHandler *local_10;
  ReferenceController *local_c;
  int local_8;
  
  iVar1 = this->_pad_0x38_14;
  if (*(char *)(iVar1 + 0x170) != '\0') {
    if (*(char *)(iVar1 + 0x170) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    *(void **)&SVar4 = TurretSubModule__GenerateNewTexture((TurretSubModule *)(iVar1 + 0x70));
    iVar1 = this->_pad_0x54_21;
    local_8 = iVar1 + 1;
    util__Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G___SetSize
              ((Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G_ *)&this->_pad_0x4c_19,&local_8);
    bVar2 = util__Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G___CheckSize
                      ((Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G_ *)&this->_pad_0x4c_19,iVar1);
    if (bVar2) {
      this_02 = *(ArmorTextureHandler **)(this->_pad_0x50_20 + -8 + this->_pad_0x54_21 * 8);
      iVar1 = this->_pad_0x50_20 + this->_pad_0x54_21 * 8;
      this_00 = *(ReferenceController **)(iVar1 + -4);
      *(int *)(iVar1 + -8) = ((SVar4.Pointer)->Texture)._pad_0x0_0;
      this_01 = (ReferenceController *)((SVar4.Pointer)->Texture)._pad_0x4_1;
      *(ReferenceController **)(iVar1 + -4) = this_01;
      if (this_01 != (ReferenceController *)0x0) {
        util__ReferenceController__AddStrongReference(this_01);
      }
      if (this_00 != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__ReleaseStrongReference(this_00);
        if (bVar2) {
          if (this_02 != (ArmorTextureHandler *)0x0) {
            ArmorTextureHandler___scalar_deleting_destructor(this_02,1);
          }
          pRVar3 = util__ReferenceControllerRegistry__Get();
          util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar3,this_02);
        }
      }
    }
    if (local_c != (ReferenceController *)0x0) {
      bVar2 = util__ReferenceController__ReleaseStrongReference(local_c);
      if (bVar2) {
        if (local_10 != (ArmorTextureHandler *)0x0) {
          ArmorTextureHandler___scalar_deleting_destructor(local_10,1);
        }
        pRVar3 = util__ReferenceControllerRegistry__Get();
        util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar3,local_10);
      }
    }
  }
  return;
}

//==== 005b2890 GetArmorCarvingRadius_m ====

/* public: virtual class util__Maybe_L_double_G_ __thiscall
   EngineModule__GetArmorCarvingRadius_m(void)const  */

Maybe_L_double_G_ * __thiscall
EngineModule__GetArmorCarvingRadius_m(EngineModule *this,Maybe_L_double_G_ *__return_storage_ptr__)

{
  Cylinder_L_double_G_ *pCVar1;
  double dVar2;
  Cylinder_L_double_G_ local_14;
  
  if (((char)this[1].Gimbal.Data.MomentumWheels._pad_0x8_2 != '\0') &&
     (45.0 < *(double *)&this[1].Gimbal.Data.MomentumWheels.Composition)) {
    if ((char)this[1].Gimbal.Data.MomentumWheels._pad_0x8_2 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar2 = TurretSubModule__GetOuterRadius_m
                      ((TurretSubModule *)&(this->Gimbal).Data.ArmorThickness_m);
    __return_storage_ptr__->Data = dVar2;
    __return_storage_ptr__->IsValidData = true;
    return __return_storage_ptr__;
  }
  pCVar1 = (Cylinder_L_double_G_ *)(uintptr_t)(GetGimballedEngineDimensions_m(this,&local_14));
  __return_storage_ptr__->Data = pCVar1->Radius;
  __return_storage_ptr__->IsValidData = true;
  return __return_storage_ptr__;
}

//==== 005b2920 GetAttachmentCount ====

/* public: int __thiscall EngineModule__GetAttachmentCount(void)const  */

int __thiscall EngineModule__GetAttachmentCount(EngineModule *this)

{
  if ((char)this[1].Gimbal.Data.MomentumWheels._pad_0x8_2 != '\0') {
    return (this->Gimbal).Data.MomentumWheels.CachedAxisCount;
  }
  return 1;
}

//==== 005b2940 GetClassID_005b2940 ====


/* public: virtual unsigned long __thiscall EngineModule__GetClassID(void)const  */

ulong __thiscall EngineModule__GetClassID(EngineModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_619c513d__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_619c513d__thread_safe_static_guard_0__);
    if ( cde_l2_619c513d__thread_safe_static_guard_0__ == -1) {
       cde_l2_8fc058cd_ID =
           util__GetHash("EngineModule");
      _Init_thread_footer(& cde_l2_619c513d__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_8fc058cd_ID;
}





//==== 005b29a0 GetCompartmentPieceRotation_005b29a0 ====


/* public: virtual struct util__Quaternion_L_double_G_ 
   EngineCompartment__GetCompartmentPieceRotation(void)const  */

Quaternion_L_double_G_ * 
EngineCompartment__GetCompartmentPieceRotation
          (EngineCompartment *this,Quaternion_L_double_G_ *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)((int)&(this->GimbalOrientation).X + 4);
  uVar2 = *(undefined4 *)&(this->GimbalOrientation).Y;
  uVar3 = *(undefined4 *)((int)&(this->GimbalOrientation).Y + 4);
  *(undefined4 *)&__return_storage_ptr__->X = *(undefined4 *)&(this->GimbalOrientation).X;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Y = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = uVar3;
  uVar1 = *(undefined4 *)((int)&(this->GimbalOrientation).Z + 4);
  uVar2 = *(undefined4 *)&(this->GimbalOrientation).W;
  uVar3 = *(undefined4 *)((int)&(this->GimbalOrientation).W + 4);
  *(undefined4 *)&__return_storage_ptr__->X = *(undefined4 *)&(this->GimbalOrientation).X;
  *(undefined4 *)((int)&__return_storage_ptr__->Z + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->W = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->W + 4) = uVar3;
  return __return_storage_ptr__;
}





//==== 005b29c0 GetCubicBoundingBox_m ====


/* public: virtual struct util__AABB_L_structutil__Vec3_L_double_G__G_ __thiscall
   EngineModule__GetCubicBoundingBox_m(void)const  */

double * __thiscall EngineModule__GetCubicBoundingBox_m(EngineModule *this)

{
  double dVar1;
  double dVar2;
  double *in_stack_00000004;
  Cylinder_L_double_G_ CStack_2c;
  double dStack_14;
  double dStack_c;
  
  GetGimballedEngineDimensions_m(this,&CStack_2c);
  dStack_c = -CStack_2c.Radius;
  dStack_14 = GetStartingHeight_m(this);
  dVar2 = GetStartingHeight_m(this);
  dVar2 = dVar2 + CStack_2c.Height;
  dVar1 = dStack_c;
  if (CStack_2c.Radius <= dStack_c) {
    dVar1 = CStack_2c.Radius;
  }
  *in_stack_00000004 = dVar1;
  dVar1 = dStack_c;
  if (CStack_2c.Radius <= dStack_c) {
    dVar1 = CStack_2c.Radius;
  }
  in_stack_00000004[1] = dVar1;
  dVar1 = dStack_14;
  if (dVar2 <= dStack_14) {
    dVar1 = dVar2;
  }
  if (dStack_14 <= dVar2) {
    dStack_14 = dVar2;
  }
  in_stack_00000004[2] = dVar1;
  dVar2 = dStack_c;
  if (dStack_c <= CStack_2c.Radius) {
    dVar2 = CStack_2c.Radius;
  }
  in_stack_00000004[5] = dStack_14;
  if (dStack_c <= CStack_2c.Radius) {
    dStack_c = CStack_2c.Radius;
  }
  in_stack_00000004[3] = dVar2;
  in_stack_00000004[4] = dStack_c;
  return in_stack_00000004;
}





//==== 005b2be0 GetDefaultThrustDirection ====


/* public: static struct util__Vec3_L_double_G_ __cdecl
   EngineCompartment__GetDefaultThrustDirection(void) */

Vec3_L_double_G_ * __cdecl
EngineCompartment__GetDefaultThrustDirection(Vec3_L_double_G_ *__return_storage_ptr__)

{
  *(undefined4 *)&__return_storage_ptr__->X = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = 0;
  *(undefined4 *)&__return_storage_ptr__->Y = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = 0;
  __return_storage_ptr__->Z = -1.0;
  return __return_storage_ptr__;
}





//==== 005b2c00 GetDeltaV_km__s_005b2c00 ====

/* public: double __thiscall EngineModule__GetDeltaV_km__s(double,double)const  */

double __thiscall EngineModule__GetDeltaV_km__s(EngineModule *this,double param_1,double param_2)

{
  float10 fVar1;
  double dVar2;
  
  fVar1 = (float10)(**(code **)(this->_pad_0x0_0 + 0x15c))();
  dVar2 = (param_1 + param_2) / param_1;
  libm_sse2_log_precise(0.0);
  return dVar2 * (double)fVar1;
}

//==== 005b2e90 GetExhaustPlumeStartingHeight_m ====


/* public: double __thiscall EngineModule__GetExhaustPlumeStartingHeight_m(void)const  */

double __thiscall EngineModule__GetExhaustPlumeStartingHeight_m(EngineModule *this)

{
  Cylinder_L_double_G_ *pCVar1;
  Cylinder_L_double_G_ CStack_1c;
  double dStack_c;
  
  dStack_c = GetStartingHeight_m(this);
  dStack_c = -dStack_c;
  pCVar1 = (Cylinder_L_double_G_ *)(uintptr_t)(GetGimballedEngineDimensions_m(this,&CStack_1c));
  return dStack_c - pCVar1->Height;
}





//==== 005b2ed0 GetExhaustVelocity_km__s ====

/* public: double __thiscall EngineCompartment__GetExhaustVelocity_km__s(void)const  */

double __thiscall EngineCompartment__GetExhaustVelocity_km__s(EngineCompartment *this)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(this->_pad_0x0_0 + 0x14))();
  if (cVar1 != '\0') {
    iVar2 = GetUndamagedEnginesCount(this);
    if (0 < iVar2) {
      return 0.0;
    }
  }
  return this->CachedExhaustVelocity_km__s;
}

//==== 005b2f20 GetGimbalAngularVelocity_radians__s ====

/* public: virtual double __thiscall EngineModule__GetGimbalAngularVelocity_radians__s(void)const
    */

double __thiscall EngineModule__GetGimbalAngularVelocity_radians__s(EngineModule *this)

{
  double dVar1;
  
  if ((char)this[1].Gimbal.Data.MomentumWheels._pad_0x8_2 != '\0') {
    if ((char)this[1].Gimbal.Data.MomentumWheels._pad_0x8_2 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar1 = TurretSubModule__GetRotationalSpeed_radians__s
                      ((TurretSubModule *)&(this->Gimbal).Data.ArmorThickness_m);
    return dVar1;
  }
  return 0.0;
}

//==== 005b2f80 GetGimbalCenter_m ====

/* public: struct util__Vec3_L_double_G_ __thiscall EngineModule__GetGimbalCenter_m(void)const  */

Vec3_L_double_G_ * __thiscall
EngineModule__GetGimbalCenter_m(EngineModule *this,Vec3_L_double_G_ *__return_storage_ptr__)

{
  Cylinder_L_double_G_ *pCVar1;
  Cylinder_L_double_G_ local_1c;
  double local_c;
  
  if (((char)this[1].Gimbal.Data.MomentumWheels._pad_0x8_2 == '\0') ||
     (45.0 < *(double *)&this[1].Gimbal.Data.MomentumWheels.Composition)) {
    *(uint32_t *)&local_c = 0.0;
  }
  else {
    if ((char)this[1].Gimbal.Data.MomentumWheels._pad_0x8_2 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    local_c = TurretSubModule__GetOuterRadius_m
                        ((TurretSubModule *)&(this->Gimbal).Data.ArmorThickness_m);
    pCVar1 = (Cylinder_L_double_G_ *)(uintptr_t)(GetGimballedEngineDimensions_m(this,&local_1c));
    *(uint32_t *)&local_c = local_c - pCVar1->Height;
  }
  *(undefined4 *)&__return_storage_ptr__->X = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = 0;
  *(undefined4 *)&__return_storage_ptr__->Y = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = 0;
  __return_storage_ptr__->Z = local_c;
  return __return_storage_ptr__;
}

//==== 005b3370 GetGimbalUsedRadius_m ====

/* public: double __thiscall EngineModule__GetGimbalUsedRadius_m(void)const  */

double __thiscall EngineModule__GetGimbalUsedRadius_m(EngineModule *this)

{
  int iVar1;
  double *pdVar2;
  float10 fVar3;
  undefined1 local_14 [16];
  
  if ((char)this[1].Gimbal.Data.MomentumWheels._pad_0x8_2 == '\0') {
    iVar1 = 1;
  }
  else {
    iVar1 = (this->Gimbal).Data.MomentumWheels.CachedAxisCount;
  }
  if (iVar1 == 1) {
    fVar3 = (float10)(**(code **)(this->_pad_0x0_0 + 0x164))();
    return (double)fVar3;
  }
  pdVar2 = (double *)(**(code **)(this->_pad_0x0_0 + 0x160))(local_14);
  return *pdVar2;
}

//==== 005b33c0 GetGimballedEngineDimensions_m ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: struct util__Cylinder_L_double_G_ 
   EngineModule__GetGimballedEngineDimensions_m(void)const  */

Cylinder_L_double_G_ * 
EngineModule__GetGimballedEngineDimensions_m
          (EngineModule *this,Cylinder_L_double_G_ *__return_storage_ptr__)

{
  undefined8 stack0xfffffffc;
  double *pdVar1;
  float10 fVar2;
  double dVar3;
  undefined1 local_48 [8];
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  undefined1 local_20 [8];
  double local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((char)this[1].Gimbal.Data.MomentumWheels._pad_0x8_2 == '\0') {
    (*(uint32_t*)((char*)&(local_10)+4)) = 1;
  }
  else {
    (*(uint32_t*)((char*)&(local_10)+4)) = (this->Gimbal).Data.MomentumWheels.CachedAxisCount;
  }
  pdVar1 = (double *)(**(code **)(this->_pad_0x0_0 + 0x160))(local_48);
  *(uint32_t *)&(local_38) = util__GetCirclePackingInACircleRadius_double((*(uint32_t*)((char*)&(local_10)+4)));
  *(uint32_t *)&local_38 = local_38 * *pdVar1;
  memcpy(&local_28, &local_38, 4);
  (**(code **)(this->_pad_0x0_0 + 0x160))(local_20);
  if ((char)this[1].Gimbal.Data.MomentumWheels._pad_0x8_2 == '\0') {
    __return_storage_ptr__->Radius = local_38;
  }
  else {
    fVar2 = (float10)(**(code **)(this->_pad_0x0_0 + 0x180))();
    *(uint64_t *)&local_10 = (double)fVar2;
    if ((char)this[1].Gimbal.Data.MomentumWheels._pad_0x8_2 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    local_30 = TurretSubModule__GetObjectOffsetFromTurret_m
                         ((TurretSubModule *)&(this->Gimbal).Data.ArmorThickness_m);
    *(uint32_t *)&local_30 = local_30 + local_18;
    local_40 = util__Sin((double *)&local_10);
    local_40 = local_40 * local_30;
    dVar3 = util__Cos((double *)&local_10);
    local_40 = dVar3 * local_28 + local_40;
    if ((char)this[1].Gimbal.Data.MomentumWheels._pad_0x8_2 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    local_18 = TurretSubModule__GetOuterRadius_m
                         ((TurretSubModule *)&(this->Gimbal).Data.ArmorThickness_m);
    local_18 = local_18 + local_30;
    if (local_40 <= local_38) {
      local_40 = local_38;
    }
    __return_storage_ptr__->Radius = local_40;
  }
  __return_storage_ptr__->Height = local_18;
  return __return_storage_ptr__;
}

//==== 005b38c0 GetInfoBoxes_005b38c0 ====


/* public: virtual class util__Darray_L_structInfoBox_G_ __thiscall
   EngineModule__GetInfoBoxes(void)const  */

void __thiscall EngineModule__GetInfoBoxes(EngineModule *this)

{
  undefined8 stack0xfffffffc;
  LocStr *pLVar1;
  Str_L_char_G_ *pSVar2;
  InfoBox *pIVar3;
  Darray_L_struct_InfoBox_G_ *pDVar4;
  Darray_L_struct_InfoBox_G_ *in_stack_00000004;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcStack_94;
  InfoBox IStack_74;
  void *apvStack_3c [3];
  void *pvStack_30;
  undefined **ppuStack_24;
  Str_L_char_G_ SStack_20;
  Str_L_char_G_ SStack_14;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_InfoBox___Darray_struct_InfoBox(in_stack_00000004,1);
  util__Str_char___Str_char(&SStack_20,"InfoBox EnginePropulsionVitals Tooltip");
  SStack_14.Data = (char *)0x0;
  SStack_14.Capacity = 0;
  SStack_14.Length = 0;
  pcStack_94 = (char *)0x5b392e;
  pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_3c,&SStack_20,&SStack_14);
  pSVar2 = util__LocStr__operator__o3(pLVar1);
  uVar5 = 0;
  uVar6 = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)&pcStack_94,pSVar2);
  pIVar3 = (InfoBox *)
           InfoBox__InfoBox(&IStack_74,(_func___cdecl_void *)(uintptr_t)(Icons__Propulsion),this,(_func___cdecl_Str_L_char_G__void_ptr*)(util__DelegateFactory_class_EngineModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_EngineModule__GetEngineInfo_void_const__0),0,0,0,(void *)(uintptr_t)uVar5,(_func___cdecl_Str_L_char_G__void_ptr *)(uintptr_t)(uVar6),0,0,0,(Delegate_L_bool_G_){0},0);
  util__Darray_struct_InfoBox___Add(in_stack_00000004,pIVar3);
  if (IStack_74.Tooltip.Value.Data != (char *)0x0) {
    port_op_delete(IStack_74.Tooltip.Value.Data);
    IStack_74.Tooltip.Value.Data = (char *)0x0;
  }
  if (IStack_74.Info.Value.Data != (char *)0x0) {
    port_op_delete(IStack_74.Info.Value.Data);
    IStack_74.Info.Value.Data = (char *)0x0;
  }
  if (pvStack_30 != (void *)0x0) {
    port_op_delete(pvStack_30);
    pvStack_30 = (void *)0x0;
  }
  if (apvStack_3c[0] != (void *)0x0) {
    port_op_delete(apvStack_3c[0]);
    apvStack_3c[0] = (void *)0x0;
  }
  if (SStack_14.Data != (char *)0x0) {
    port_op_delete(SStack_14.Data);
    SStack_14.Data = (char *)0x0;
  }
  if ((InfoBox *)SStack_20.Data != (InfoBox *)0x0) {
    port_op_delete(SStack_20.Data);
  }
  util__Str_char___Str_char(&SStack_20,"InfoBox EngineGimbalInfo Tooltip");
  SStack_14.Data = (char *)0x0;
  SStack_14.Capacity = 0;
  SStack_14.Length = 0;
  pcStack_94 = (char *)0x5b3a4f;
  pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_3c,&SStack_20,&SStack_14);
  pSVar2 = util__LocStr__operator__o3(pLVar1);
  uVar5 = 0;
  uVar6 = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)&pcStack_94,pSVar2);
  pIVar3 = (InfoBox *)
           InfoBox__InfoBox(&IStack_74,(_func___cdecl_void *)(uintptr_t)(Icons__FiringArc),this,(_func___cdecl_Str_L_char_G__void_ptr*)(util__DelegateFactory_class_EngineModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_EngineModule__GetGimbalInfo_void_const__0),0,0,0,(void *)(uintptr_t)uVar5,(_func___cdecl_Str_L_char_G__void_ptr *)(uintptr_t)(uVar6),0,0,0,(Delegate_L_bool_G_){0},0);
  util__Darray_struct_InfoBox___Add(in_stack_00000004,pIVar3);
  if (IStack_74.Tooltip.Value.Data != (char *)0x0) {
    port_op_delete(IStack_74.Tooltip.Value.Data);
    IStack_74.Tooltip.Value.Data = (char *)0x0;
  }
  if (IStack_74.Info.Value.Data != (char *)0x0) {
    port_op_delete(IStack_74.Info.Value.Data);
    IStack_74.Info.Value.Data = (char *)0x0;
  }
  if (pvStack_30 != (void *)0x0) {
    port_op_delete(pvStack_30);
    pvStack_30 = (void *)0x0;
  }
  if (apvStack_3c[0] != (void *)0x0) {
    port_op_delete(apvStack_3c[0]);
    apvStack_3c[0] = (void *)0x0;
  }
  if (SStack_14.Data != (char *)0x0) {
    port_op_delete(SStack_14.Data);
    SStack_14.Data = (char *)0x0;
  }
  if ((InfoBox *)SStack_20.Data != (InfoBox *)0x0) {
    port_op_delete(SStack_20.Data);
  }
  pDVar4 = (Darray_L_struct_InfoBox_G_ *)Module__GetInfoBoxes((Module *)this);
  util__Darray_struct_InfoBox___operator(in_stack_00000004,pDVar4);
  ppuStack_24 = &vftable_127;
  if ((InfoBox *)SStack_20.Data != (InfoBox *)0x0) {
    InfoBox___vector_deleting_destructor((InfoBox *)SStack_20.Data,3);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 005b3b70 GetMaxGimbalAngle_radians_005b3b70 ====

/* public: virtual double __thiscall EngineModule__GetMaxGimbalAngle_radians(void)const  */

double __thiscall EngineModule__GetMaxGimbalAngle_radians(EngineModule *this)

{
  if ((char)this[1].Gimbal.Data.MomentumWheels._pad_0x8_2 != '\0') {
    return *(double *)&this[1].Gimbal.Data.MomentumWheels.Composition * 0.017453292519943295;
  }
  return 0.0;
}

//==== 005b3bb0 GetMaxMassFlowRate_kg__s_005b3bb0 ====

/* public: virtual double __thiscall EngineModule__GetMaxMassFlowRate_kg__s(void)const  */

double __thiscall EngineModule__GetMaxMassFlowRate_kg__s(EngineModule *this)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)(**(code **)(this->_pad_0x0_0 + 0x15c))();
  fVar2 = (float10)(**(code **)(this->_pad_0x0_0 + 0x158))();
  return (double)(fVar2 / ((float10)(double)fVar1 * (float10)1000.0));
}

//==== 005b3bf0 GetMaxThrust_N_005b3bf0 ====

/* public: double __thiscall EngineCompartment__GetMaxThrust_N(void)const  */

double __thiscall EngineCompartment__GetMaxThrust_N(EngineCompartment *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  cVar1 = (**(code **)(this->_pad_0x0_0 + 0x14))();
  if (cVar1 != '\0') {
    return 0.0;
  }
  if (*(char *)(this->_pad_0x38_14 + 0x170) == '\0') {
    iVar3 = 1;
  }
  else {
    iVar3 = *(int *)(this->_pad_0x38_14 + 0x98);
  }
  iVar2 = GetUndamagedEnginesCount(this);
  dVar4 = (double)iVar2 / (double)iVar3;
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  if (1.0 <= dVar4) {
    dVar4 = 1.0;
  }
  return this->CachedMaxThrust_N * dVar4;
}

//==== 005b3c80 GetPropellants_005b3c80 ====

/* public: virtual class util__Darray_L_structMaterialConstituent_G_ __thiscall
   EngineModule__GetPropellants(void)const  */

Darray_L_MaterialConstituent_G_ * __thiscall
EngineModule__GetPropellants(EngineModule *this,Darray_L_MaterialConstituent_G_ *__return_storage_ptr__)

{
  MaterialConstituent *pMVar1;
  Darray_L_MaterialConstituent_G_ *this_00;
  bool bVar2;
  int iVar3;
  Material *pMVar4;
  undefined4 uStack_10;
  
  this_00 = __return_storage_ptr__;
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (MaterialConstituent *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_15;
  __return_storage_ptr__->Data = (MaterialConstituent *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  iVar3 = (**(code **)(this->_pad_0x0_0 + 0x174))();
  if (iVar3 != 0) {
    pMVar4 = (Material *)(**(code **)(this->_pad_0x0_0 + 0x174))();
    iVar3 = this_00->Size;
    __return_storage_ptr__ = (Darray_L_MaterialConstituent_G_ *)(iVar3 + 1);
    util__Darray_L_MaterialConstituent_G___SetSize(this_00,(int *)&__return_storage_ptr__);
    bVar2 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                      ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar3);
    if (bVar2) {
      pMVar1 = this_00->Data + this_00->Size + -1;
      pMVar1->Type = pMVar4;
      *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar1) + 0x4)) = uStack_10;
      *(undefined4 *)&pMVar1->UnitlessFraction = 0;
      *(undefined4 *)((int)&pMVar1->UnitlessFraction + 4) = 0x3ff00000;
    }
  }
  return this_00;
}

//==== 005b3d20 GetReactionMassConsumptionForThrust_kg ====


/* public: double 
   EngineCompartment__GetReactionMassConsumptionForThrust_kg(double,double)const  */

double 
EngineCompartment__GetReactionMassConsumptionForThrust_kg
          (EngineCompartment *this,double param_1,double param_2)

{
  double dVar1;
  
  dVar1 = GetMaxThrust_N(this);
  if (dVar1 + 1e-08 < param_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\modules\\enginemodules\\enginemodules.cpp"
                    ,0x1e9,"Thrust_N <= GetMaxThrust_N() + EPSILON",(char *)0x0);
    DebugBreak();
  }
  dVar1 = GetMaxThrust_N(this);
  if (dVar1 <= param_1) {
    param_1 = dVar1;
  }
  return (param_1 / (this->CachedExhaustVelocity_km__s * 1000.0)) * param_2;
}





//==== 005b3db0 GetStartingHeight_m ====

/* public: double __thiscall EngineModule__GetStartingHeight_m(void)const  */

double __thiscall EngineModule__GetStartingHeight_m(EngineModule *this)

{
  Cylinder_L_double_G_ *pCVar1;
  double dVar2;
  Cylinder_L_double_G_ local_14;
  
  if ((45.0 < *(double *)&this[1].Gimbal.Data.MomentumWheels.Composition) &&
     ((char)this[1].Gimbal.Data.MomentumWheels._pad_0x8_2 != '\0')) {
    if ((char)this[1].Gimbal.Data.MomentumWheels._pad_0x8_2 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar2 = TurretSubModule__GetOuterRadius_m
                      ((TurretSubModule *)&(this->Gimbal).Data.ArmorThickness_m);
    return -dVar2;
  }
  pCVar1 = (Cylinder_L_double_G_ *)(uintptr_t)(GetGimballedEngineDimensions_m(this,&local_14));
  return -pCVar1->Height;
}

//==== 005b3e40 GetStatuses_005b3e40 ====

/* public: virtual class DesignStatusBuffer  EngineModule__GetStatuses(class DataParser
   *)const  */

DesignStatusBuffer * 
EngineModule__GetStatuses
          (EngineModule *this,DesignStatusBuffer *__return_storage_ptr__,DataParser *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *pSVar4;
  ModulePlacer *pMVar5;
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
  if ((char)this[1].Gimbal.Data.MomentumWheels._pad_0x8_2 != '\0') {
    util__Str_char___Str_char(&local_3c,"EngineModuleSlowGimbal");
    local_30.Data = (char *)0x0;
    local_30.Capacity = 0;
    local_30.Length = 0;
    local_24.Data = (char *)0x0;
    local_24.Capacity = 0;
    local_24.Length = 0;
    local_18.Data = (char *)0x0;
    local_18.Capacity = 0;
    local_18.Length = 0;
    if ((char)this[1].Gimbal.Data.MomentumWheels._pad_0x8_2 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    pMVar5 = (ModulePlacer *)0x0;
    pSVar4 = &local_30;
    pSVar3 = &local_24;
    pSVar2 = &local_18;
    pSVar1 = &local_3c;
    local_c = TurretSubModule__GetRotationalSpeed_radians__s
                        ((TurretSubModule *)&(this->Gimbal).Data.ArmorThickness_m);
    DesignStatusBuffer__CheckError
              (__return_storage_ptr__,local_c < DAT_0095f360,pSVar1,pSVar2,pSVar3,pSVar4,pMVar5);
    if (local_18.Data != (char *)0x0) {
      port_op_delete(local_18.Data);
      local_18.Data = (char *)0x0;
    }
    if (local_24.Data != (char *)0x0) {
      port_op_delete(local_24.Data);
      local_24.Data = (char *)0x0;
    }
    if (local_30.Data != (char *)0x0) {
      port_op_delete(local_30.Data);
      local_30.Data = (char *)0x0;
    }
    if (local_3c.Data != (char *)0x0) {
      port_op_delete(local_3c.Data);
    }
  }
  return __return_storage_ptr__;
}

//==== 005b3f80 GetThrustMassRatio_m__s2 ====

/* public: double __thiscall EngineModule__GetThrustMassRatio_m__s2(void)const  */

double __thiscall EngineModule__GetThrustMassRatio_m__s2(EngineModule *this)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)(**(code **)(this->_pad_0x0_0 + 0x158))();
  fVar2 = (float10)(**(code **)(this->_pad_0x0_0 + 0x88))();
  return (double)((float10)(double)fVar1 / fVar2);
}

//==== 005b3fb0 GetThrustPower_W ====

/* public: double __thiscall EngineModule__GetThrustPower_W(void)const  */

double __thiscall EngineModule__GetThrustPower_W(EngineModule *this)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)(**(code **)(this->_pad_0x0_0 + 0x15c))();
  fVar2 = (float10)(**(code **)(this->_pad_0x0_0 + 0x158))();
  return (double)((float10)(double)fVar1 * (float10)1000.0 * fVar2 * (float10)0.5);
}

//==== 005b4250 GetUndamagedEnginesCount ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: int __thiscall EngineCompartment__GetUndamagedEnginesCount(void)const  */

int __thiscall EngineCompartment__GetUndamagedEnginesCount(EngineCompartment *this)

{
  undefined8 stack0xfffffffc;
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  EngineCompartment *pEVar6;
  int local_28;
  undefined1 local_24;
  undefined **local_20;
  undefined4 *puStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  EngineCompartment *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(uint32_t *)&local_c = 0;
  piVar5 = &this->_pad_0x3c_15;
  *(uint32_t *)&local_20 = (uint32_t)(uintptr_t)(&vftable_2);
  puStack_1c = (undefined4 *)0x0;
  iStack_18 = 0;
  uStack_14 = 0;
  *(uint32_t *)&local_10 = (uint32_t)(uintptr_t)(this);
  iVar3 = (**(code **)(this->_pad_0x3c_15 + 0xc))();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*piVar5)(&local_c);
      iVar3 = iStack_18;
      uVar1 = *puVar4;
      *(uint32_t *)&local_28 = iStack_18 + 1;
      util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)&local_20,&local_28);
      bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_GraphicsResource__Type_G_ *)&local_20,iVar3);
      if (bVar2) {
        puStack_1c[iStack_18 + -1] = uVar1;
      }
      *(uint32_t *)&local_c = local_c + 1;
      iVar3 = (**(code **)(uintptr_t)(*piVar5 + 0xc))();
      this = local_10;
    } while (local_c < iVar3);
  }
  if ((*(char *)(this->_pad_0x38_14 + 0x170) != '\0') &&
     (iVar3 = (*(code *)local_20[3])(), iVar3 != 0)) {
    (*(code *)local_20[3])();
    bVar2 = false;
    iVar3 = 0;
    puVar4 = puStack_1c;
    this = local_10;
    if (puStack_1c != puStack_1c + iStack_18) {
      do {
        if (bVar2) {
          puVar4[-1] = *puVar4;
        }
        else if (iVar3 == 0) {
          bVar2 = true;
        }
        puVar4 = puVar4 + 1;
        iVar3 = iVar3 + 1;
      } while (puVar4 != puStack_1c + iStack_18);
      if (bVar2) {
        *(uint32_t *)&local_28 = iStack_18 + -1;
        util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)&local_20,&local_28)
        ;
        this = local_10;
      }
    }
  }
  *(uint32_t *)&local_24 = 0;
  *(uint32_t *)&local_10 = (uint32_t)(uintptr_t)((EngineCompartment *)0x0);
  *(uint32_t *)&local_c = 0;
  iVar3 = (*(code *)local_20[3])();
  if (local_c < iVar3) {
    do {
      piVar5 = (int *)(*(code *)*local_20)(&local_c);
      if ((float)*(double *)(*piVar5 + 0x148) <= *(float *)(*piVar5 + 0x150)) {
        *(uint32_t *)&local_10 = (uint32_t)(uintptr_t)((EngineCompartment *)((int)local_10 + 1));
      }
      *(uint32_t *)&local_c = local_c + 1;
      iVar3 = (*(code *)local_20[3])();
    } while (local_c < iVar3);
  }
  if (*(char *)(this->_pad_0x38_14 + 0x170) == '\0') {
    iVar3 = 1;
  }
  else {
    iVar3 = *(int *)(this->_pad_0x38_14 + 0x98);
  }
  *(uint32_t *)&local_20 = (uint32_t)(uintptr_t)(&vftable_2);
  pEVar6 = local_10;
  if ((int)local_10 < 1) {
    pEVar6 = (EngineCompartment *)0x0;
  }
  if (iVar3 <= (int)pEVar6) {
    pEVar6 = (EngineCompartment *)iVar3;
  }
  if (puStack_1c != (undefined4 *)0x0) {
    port_op_delete(puStack_1c);
  }
  return (int)pEVar6;
}

//==== 005b4420 GetUngimballedThrustDirection ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: struct util__Vec3_L_double_G_ 
   EngineCompartment__GetUngimballedThrustDirection(void)const  */

Vec3_L_double_G_ *
EngineCompartment__GetUngimballedThrustDirection(Vec3_L_double_G_ *__return_storage_ptr__)

{
  undefined8 stack0xffffffdc;
  Quaternion_L_double_G_ QVar1;
  Vec4_L_double_G_ VVar2;
  Quaternion_L_double_G_ *pQVar3;
  undefined4 in_stack_ffffffdc;
  
  pQVar3 = (Quaternion_L_double_G_ *)(uintptr_t)(ModuleCompartment__GetOrientation((Quaternion_L_double_G_ *)&stack0xffffffdc));
  (*(uint32_t *)((char *)&(QVar1.W) + 4)) = 0;
  (*(uint32_t *)((char *)&(QVar1) + 0)) = (uint32_t)(uintptr_t)(*(undefined1 (*) [28])((int)&pQVar3->X + 4));
  VVar2.Z = 0;
  (*(uint32_t *)((char *)&(VVar2) + 0)) = ZEXT812(0);
  VVar2.Z = 0xbff00000;
  VVar2.W = in_stack_ffffffdc;
  util__Rotate_double(__return_storage_ptr__,QVar1,(*(Vec3_L_double_G_ *)&(VVar2)));
  return __return_storage_ptr__;
}





//==== 005b4470 HasAllNeededReactionMass ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: bool __thiscall EngineCompartment__HasAllNeededReactionMass(void)const  */

bool __thiscall EngineCompartment__HasAllNeededReactionMass(EngineCompartment *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(uint32_t *)&local_10 = 0;
  iVar2 = (**(code **)((this->CachedReactionMassCompartments)._pad_0x0_0 + 0xc))();
  if (iVar2 <= local_10) {
    return true;
  }
LAB_005b44a4:
  piVar3 = (int *)(**(code **)(this->CachedReactionMassCompartments)._pad_0x0_0)(&local_10);
  *(uint32_t *)&local_c = 0;
  iVar2 = (**(code **)(uintptr_t)(*piVar3 + 0xc))();
  if (iVar2 <= local_c) {
    return false;
  }
  do {
    piVar4 = (int *)(**(code **)*piVar3)(&local_c);
    if (((*piVar4 != 0) && ((ReferenceController *)piVar4[1] != (ReferenceController *)0x0)) &&
       (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]), bVar1
       )) {
      if (((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]),
         !bVar1)) {
        *piVar4 = 0;
      }
      if (*(char *)(*piVar4 + 0x5c) == '\0') {
        if (((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]),
           !bVar1)) {
          *piVar4 = 0;
        }
        if (0.0 < *(double *)(*piVar4 + 0x108)) break;
      }
    }
    *(uint32_t *)&local_c = local_c + 1;
    iVar2 = (**(code **)(uintptr_t)(*piVar3 + 0xc))();
    if (iVar2 <= local_c) {
      return false;
    }
  } while( true );
  *(uint32_t *)&local_10 = local_10 + 1;
  iVar2 = (**(code **)((this->CachedReactionMassCompartments)._pad_0x0_0 + 0xc))();
  if (iVar2 <= local_10) {
    return true;
  }
  goto LAB_005b44a4;
}

//==== 005b45f0 InnerSortFunction_005b45f0 ====

/* public: virtual bool __thiscall EngineModule__InnerSortFunction(class Module const *,class Module
   const *)const  */

bool __thiscall EngineModule__InnerSortFunction(EngineModule *this,Module *param_1,Module *param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)(**(code **)(param_1->_pad_0x0_0 + 0x15c))();
  fVar2 = (float10)(**(code **)(param_2->_pad_0x0_0 + 0x15c))();
  return (double)fVar1 < (double)fVar2;
}

//==== 005b4630 IsEngineUndamaged ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: bool __thiscall EngineCompartment__IsEngineUndamaged(int)const  */

bool __thiscall EngineCompartment__IsEngineUndamaged(EngineCompartment *this,int param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  int *piVar2;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(uint32_t *)&local_c = param_1 + 1;
  if (*(char *)(this->_pad_0x38_14 + 0x170) == '\0') {
    *(uint32_t *)&local_c = param_1;
  }
  iVar1 = (**(code **)(this->_pad_0x3c_15 + 0xc))();
  if (((local_c < 1) && (iVar1 + -1 <= local_c)) || ((local_c <= iVar1 + -1 && (-1 < local_c)))) {
    piVar2 = (int *)(**(code **)this->_pad_0x3c_15)(&local_c);
    if ((float)*(double *)(*piVar2 + 0x148) <= *(float *)(*piVar2 + 0x150)) {
      return true;
    }
  }
  return false;
}

//==== 005b47e0 PreTick ====

/* public: virtual void __thiscall EngineCompartment__PreTick(double) */

void __thiscall EngineCompartment__PreTick(EngineCompartment *this,double param_1)

{
  undefined8 stack0xfffffffc;
  Darray_L_util__Darray_L_util__WeakPtr_L_PropellantTankCompartment_G___G___G_ *pDVar1;
  int iVar2;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *this_00;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *pDVar3;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_20 [16];
  uint local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pDVar1 = &this->CachedReactionMassCompartments;
  this->IsBurning = false;
  *(uint32_t *)&local_c = 0;
  iVar2 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
  if (local_c < iVar2) {
    do {
      this_00 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
                (**(code **)pDVar1->_pad_0x0_0)(&local_c);
      *(uint32_t *)&local_10 = local_10 & 0xffffff00;
      pDVar3 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               FUN_005b0fa0(local_20,this_00,local_10);
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2(this_00,pDVar3);
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_20);
      *(uint32_t *)&local_c = local_c + 1;
      iVar2 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
    } while (local_c < iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

//==== 005b4aa0 Render_005b4aa0 ====


/* public: void  EngineModule__Render(class util__Darray_L_classutil__SharedPtr_L_class_ArmorTextureHandler_G__G_ const &,struct util__Quaternion_L_double_G_,double)const  */

void 
EngineModule__Render
          (EngineModule *this,Darray_L_class_util__SharedPtr_L_class_ArmorTextureHandler_G___G_ *param_1,
          Quaternion_L_double_G_ param_2,double param_3)

{
  undefined8 stack0xfffffffc;
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  bool bStack_2c;
  TextureStack TStack_28;
  EngineModule *pEStack_18;
  Darray_L_class_util__SharedPtr_L_class_ArmorTextureHandler_G___G_ *pDStack_14;
  char cStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iStack_c = 0;
  piVar1 = &this[1].Gimbal.Data.MomentumWheels.CachedAxisCount;
  iVar3 = (**(code **)(uintptr_t)(this[1].Gimbal.Data.MomentumWheels.CachedAxisCount + 0xc))();
  if (iStack_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*piVar1)(&iStack_c);
      if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
         !bVar2)) {
        *puVar4 = 0;
      }
      GameModel__GetTextureID((GameModel *)*puVar4);
      if ((cStack_10 == '\0') ||
         (iVar3 = (**(code **)(*(int *)param_1 + 0xc))(), iVar3 <= (int)pDStack_14)) {
LAB_005b4b8f:
        bStack_2c = false;
        uVar6 = 0xffffffff;
      }
      else {
        if (cStack_10 == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        puVar5 = (undefined4 *)(*(code *)**(undefined4 **)param_1)(&pDStack_14);
        bVar2 = ArmorTextureHandler__IsGenerated((ArmorTextureHandler *)*puVar5);
        if (!bVar2) goto LAB_005b4b8f;
        bStack_2c = true;
        if (cStack_10 == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        puVar5 = (undefined4 *)(*(code *)**(undefined4 **)param_1)(&pDStack_14);
        uVar6 = ArmorTextureHandler__GetTexture((ArmorTextureHandler *)*puVar5);
      }
      Graphics__TextureStack__TextureStack(&TStack_28,uVar6,Type__TwoDimensional,2);
      if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
         !bVar2)) {
        *puVar4 = 0;
      }
      GameModel__Render((GameModel *)*puVar4,0.0,0.5,bStack_2c);
      Graphics__TextureStack___TextureStack(&TStack_28);
      iStack_c = iStack_c + 1;
      iVar3 = (**(code **)(uintptr_t)(*piVar1 + 0xc))();
    } while (iStack_c < iVar3);
  }
  pDStack_14 = param_1;
  pEStack_18 = this;
  FUN_005b1170(&this[1].Gimbal.Data.MomentumWheels.CachedHeight_m,this,param_1,
               (undefined1 *)((int)&param_2.W + 4));
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 005b4d50 RenderInitialStateSimple ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall EngineModule__RenderInitialStateSimple(struct
   util__Vec3_L_double_G_)const  */

void __thiscall EngineModule__RenderInitialStateSimple(EngineModule *this,Vec3_L_double_G_ param_1)

{
  undefined8 stack0xfffffffc;
  int *piVar1;
  Vec4_L_double_G_ VVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  double *pdVar6;
  Vec2_L_double_G_ *pVVar7;
  int iVar8;
  double dVar9;
  Vec2_L_double_G_ local_38;
  undefined1 local_28 [16];
  undefined4 *local_18;
  int local_14;
  TransformStack local_d;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(uint32_t *)&local_c = 0;
  piVar1 = &this[1].Gimbal.Data.MomentumWheels.CachedAxisCount;
  iVar4 = (**(code **)(uintptr_t)(this[1].Gimbal.Data.MomentumWheels.CachedAxisCount + 0xc))();
  if (local_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*piVar1)(&local_c);
      if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
         !bVar3)) {
        *puVar5 = 0;
      }
      GameModel__RenderSimple((GameModel *)*puVar5);
      *(uint32_t *)&local_c = local_c + 1;
      iVar4 = (**(code **)(uintptr_t)(*piVar1 + 0xc))();
    } while (local_c < iVar4);
  }
  *(uint32_t *)&local_c = 0;
  iVar4 = (**(code **)(*(int *)&this[1].Gimbal.Data.MomentumWheels.CachedHeight_m + 0xc))();
  if (local_c < iVar4) {
    do {
      local_18 = (undefined4 *)
                 (*(code *)**(undefined4 **)&this[1].Gimbal.Data.MomentumWheels.CachedHeight_m)
                           (&local_c);
      iVar4 = 0;
      while( true ) {
        if ((char)this[1].Gimbal.Data.MomentumWheels._pad_0x8_2 == '\0') {
          iVar8 = 1;
        }
        else {
          iVar8 = (this->Gimbal).Data.MomentumWheels.CachedAxisCount;
        }
        if (iVar8 <= iVar4) break;
        Graphics__TransformStack__TransformStack(&local_d,Style__Default);
        if ((char)this[1].Gimbal.Data.MomentumWheels._pad_0x8_2 == '\0') {
          *(uint32_t *)&local_14 = 1;
        }
        else {
          *(uint32_t *)&local_14 = (this->Gimbal).Data.MomentumWheels.CachedAxisCount;
        }
        pdVar6 = (double *)(**(code **)(this->_pad_0x0_0 + 0x160))(local_28);
        pVVar7 = util__GetCirclePackingInACircleOffset_double(&local_38,local_14,iVar4);
        dVar9 = (pVVar7->Y * *pdVar6) / 1000.0;
        VVar2.Y = SUB84(dVar9,0);
        VVar2.X = (*pdVar6 * pVVar7->X) / 1000.0;
        VVar2.Z = (int)((ulonglong)dVar9 >> 0x20);
        VVar2.Z = 0.0;
        Graphics__Translate(VVar2);
        puVar5 = local_18;
        if (((ReferenceController *)local_18[1] != (ReferenceController *)0x0) &&
           (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)local_18[1]),
           !bVar3)) {
          *puVar5 = 0;
        }
        GameModel__RenderSimple((GameModel *)*puVar5);
        Graphics__TransformStack___TransformStack(&local_d);
        iVar4 = iVar4 + 1;
      }
      *(uint32_t *)&local_c = local_c + 1;
      iVar4 = (**(code **)(*(int *)&this[1].Gimbal.Data.MomentumWheels.CachedHeight_m + 0xc))();
    } while (local_c < iVar4);
  }
  return;
}

//==== 005b4ef0 RenderInitialStateTransparent_005b4ef0 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void  EngineModule__RenderInitialStateTransparent(double,class
   CameraManager *,struct util__Vec3_L_double_G_)const  */

void 
EngineModule__RenderInitialStateTransparent
          (EngineModule *this,double param_1,CameraManager *param_2,Vec3_L_double_G_ param_3)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = 0;
  uStack_8 = 0;
  RenderTransparent(this,(Delegate_L_bool_Cint_G_ *)&uStack_c);
  return;
}





//==== 005b5340 RenderTransparent_005b5340 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall EngineModule__RenderTransparent(class util__Delegate_L_bool_Cint_G_ const
   &)const  */

void __thiscall EngineModule__RenderTransparent(EngineModule *this,Delegate_L_bool_Cint_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  Vec3_L_double_G_ VVar1;
  char cVar2;
  ExhaustShader *pEVar3;
  int iVar4;
  double *pdVar5;
  Vec2_L_double_G_ *pVVar6;
  int iVar7;
  float10 fVar8;
  double dVar9;
  Vec2_L_double_G_ local_38;
  undefined1 local_28 [16];
  Delegate_L_bool_Cint_G_ *local_18;
  undefined8 local_14;
  ShaderStack local_c;
  BlendStack local_b;
  CullStack local_a;
  TransformStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18 = param_1;
  if ((*(int *)&this[1].Gimbal.Data.MomentumWheels.RotationalSpeed_RPM != 0) &&
     (*(int *)((int)&this[1].Gimbal.Data.MomentumWheels.RotationalSpeed_RPM + 4) != 0)) {
    pEVar3 = ExhaustShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_c,(Shader *)pEVar3);
    Graphics__BlendStack__BlendStack(&local_b,BlendMode__Sum);
    Graphics__CullStack__CullStack(&local_a,CullMode__Disabled);
    fVar8 = (float10)(**(code **)(this->_pad_0x0_0 + 0x15c))();
    *(uint64_t *)&local_14 = (double)fVar8;
    pEVar3 = ExhaustShader__GetStatic();
    (**(code **)(pEVar3->_pad_0x0_0 + 0x54))(&local_14);
    fVar8 = (float10)(**(code **)(this->_pad_0x0_0 + 0x18c))();
    *(uint64_t *)&local_14 = (double)fVar8;
    pEVar3 = ExhaustShader__GetStatic();
    (**(code **)(pEVar3->_pad_0x0_0 + 0x5c))(&local_14);
    iVar7 = 0;
    while( true ) {
      if ((char)this[1].Gimbal.Data.MomentumWheels._pad_0x8_2 == '\0') {
        iVar4 = 1;
      }
      else {
        iVar4 = (this->Gimbal).Data.MomentumWheels.CachedAxisCount;
      }
      if (iVar4 <= iVar7) break;
      if ((*(int *)param_1 == 0) || (*(code **)(uintptr_t)(param_1 + 4) == (code *)0x0)) {
LAB_005b5411:
        Graphics__TransformStack__TransformStack(&local_9,Style__Default);
        if ((char)this[1].Gimbal.Data.MomentumWheels._pad_0x8_2 == '\0') {
          *(uint32_t *)&local_14 = (double)CONCAT44(1,(undefined4)local_14);
        }
        else {
          local_14 = (double)CONCAT44((this->Gimbal).Data.MomentumWheels.CachedAxisCount,
                                      (undefined4)local_14);
        }
        pdVar5 = (double *)(**(code **)(this->_pad_0x0_0 + 0x160))(local_28);
        pVVar6 = util__GetCirclePackingInACircleOffset_double(&local_38,(*(uint32_t*)((char*)&(local_14)+4)),iVar7);
        dVar9 = (pVVar6->Y * *pdVar5) / 1000.0;
        VVar1.Y = SUB84(dVar9,0);
        VVar1.X = (pVVar6->X * *pdVar5) / 1000.0;
        VVar1.Z = (int)((ulonglong)dVar9 >> 0x20);
        VVar1.Z = 0.0;
        Graphics__Translate(VVar1);
        GameColorModel__Render
                  (*(GameColorModel **)&this[1].Gimbal.Data.MomentumWheels.RotationalSpeed_RPM);
        Graphics__TransformStack___TransformStack(&local_9);
        param_1 = local_18;
      }
      else {
        cVar2 = (**(code **)(uintptr_t)(param_1 + 4))(*(int *)param_1,iVar7);
        if (cVar2 != '\0') goto LAB_005b5411;
      }
      iVar7 = iVar7 + 1;
    }
    CullStack__dtor(&local_a);
    BlendStack__dtor(&local_b);
    Graphics__ShaderStack___ShaderStack(&local_c);
  }
  return;
}

//==== 005b58f0 SetCachedData_005b58f0 ====

/* public: virtual void __thiscall EngineModule__SetCachedData(class DataParser *) */

void __thiscall EngineModule__SetCachedData(EngineModule *this,DataParser *param_1)

{
  Attribute_L_double_G_ AVar1;
  Attribute_L_double_G_ AVar2;
  Attribute_L_double_G_ AVar3;
  Maybe_L_TurretSubModule_G_ *pMVar4;
  code *pcVar5;
  double dVar6;
  EngineModule *pEVar7;
  code *pcVar8;
  double dVar9;
  EngineModule *pEVar10;
  code *pcVar11;
  double dVar12;
  
  if ((char)this[1].Gimbal.Data.MomentumWheels._pad_0x8_2 != '\0') {
    pMVar4 = &this->Gimbal;
    pcVar11 = (long long int (*)())(util__DelegateFactory_L_EngineModule_Cdouble_G___MethodCallerConst_L___thunk_____thiscall_EngineModule___vcall__364_C_flat_______C0__G_);
    dVar12 = 0.0;
    pcVar8 = (long long int (*)())(util__DelegateFactory_L_WeaponModule_Cbool_G___MethodCallerConst_L___thunk_____thiscall_WeaponModule___vcall__360_C_flat_______C0__G_);
    dVar9 = 0.0;
    pcVar5 = (long long int (*)())(util__DelegateFactory_L_EngineModule_Cdouble_G___MethodCallerConst_L__public__double___thiscall_EngineModule__GetGimbalUsedRadius_m_void_const__C0__G_);
    dVar6 = 0.0;
    pEVar7 = this;
    pEVar10 = this;
    if ((char)this[1].Gimbal.Data.MomentumWheels._pad_0x8_2 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    AVar1.Getter.CallbackFunction = (double (*)(void *))(pcVar5);
    AVar1.Getter.Callee = this;
    AVar1.Value = dVar6;
    AVar2.Getter.CallbackFunction = (double (*)(void *))(pcVar8);
    AVar2.Getter.Callee = pEVar7;
    AVar2.Value = dVar9;
    AVar3.Getter.CallbackFunction = (double (*)(void *))(pcVar11);
    AVar3.Getter.Callee = pEVar10;
    AVar3.Value = dVar12;
    TurretSubModule__PassThroughCachedData
              ((TurretSubModule *)&(pMVar4->Data).ArmorThickness_m,AVar1,AVar2,AVar3);
  }
  return;
}

//==== 005b5c80 SetSize_005b5c80 ====


/* private: void  util__Darray_L_classutil__Darray_L_classutil__WeakPtr_L_class_SpacecraftComponent_G__G__G___SetSize(int const &) */

void 
util__Darray_class_util__Darray_class_util__WeakPtr_class_SpacecraftComponent_______SetSize
          (Darray_L_class_util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___G_ *this,
          int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  bool bVar3;
  int iVar4;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *this_00;
  int iVar5;
  undefined **ppuStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  Darray_L_class_util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___G_ *pDStack_8;
  
  iVar4 = *param_1;
  if (((iVar4 < 1) && (0x3ffffffe < iVar4)) || ((iVar4 < 0x40000000 && (-1 < iVar4)))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  pDStack_8 = this;
  if (!bVar3) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0x2a5,
              "Between(value, 0, DARRAY_MAX_SIZE)",(char *)0x0);
    DebugBreak();
    iVar4 = *param_1;
  }
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  iStack_c = 0x3fffffff;
  if (iVar4 < 0x3fffffff) {
    iStack_c = iVar4;
  }
  if ((iStack_c < *(int *)(this + 8)) && (iVar4 = *(int *)(this + 4), iVar4 != 0)) {
    this_00 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)(iStack_c * 0x10 + iVar4);
    if (this_00 !=
        (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
        (*(int *)(this + 8) * 0x10 + iVar4)) {
      do {
        ppuStack_1c = &vftable_66;
        iStack_18 = 0;
        uStack_14 = 0;
        uStack_10 = 0;
        Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___op_assign
                  (this_00,(Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&ppuStack_1c);
        ppuStack_1c = &vftable_66;
        if (iStack_18 != 0) {
          iVar4 = *(int *)(iStack_18 + -4);
          piVar1 = (int *)(iStack_18 + -4);
          if (iVar4 != 0) {
            iVar5 = iStack_18 + 4 + iVar4 * 8;
            do {
              puVar2 = (undefined4 *)(iVar5 + -8);
              iVar5 = iVar5 + -8;
              iVar4 = iVar4 + -1;
              if ((ReferenceController *)*puVar2 != (ReferenceController *)0x0) {
                ReferenceController__ReleaseWeakReference((ReferenceController *)*puVar2);
              }
            } while (iVar4 != 0);
            iVar4 = *piVar1;
            this = pDStack_8;
          }
          port_op_delete(piVar1,iVar4 * 8 + 4);
        }
        this_00 = this_00 + 0x10;
      } while (this_00 !=
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               (*(int *)(this + 8) * 0x10 + *(int *)(this + 4)));
      *(int *)(this + 8) = iStack_c;
      return;
    }
    *(int *)(this + 8) = iStack_c;
    return;
  }
  *(int *)(this + 8) = iStack_c;
  return;
}





//==== 005b5de0 StaticGetPropertyGetters_005b5de0 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cdouble___thiscall_util__Reflectable___P__void_const_G__G_ __thiscall EngineModule__StaticGetPropertyGetters(void)const
    */

void __thiscall EngineModule__StaticGetPropertyGetters(EngineModule *this)

{
  undefined8 stack0xffffffc0;
  undefined8 stack0xfffffffc;
  Str_L_char_G_ *pSVar1;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G___G_
  *pDVar2;
  Str_L_char_G_ *pSVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  Str_L_char_G_ *pSVar8;
  int iVar9;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cvoid____cdecl_P__void__G___G_ *in_stack_00000004;
  int iVar10;
  Maybe_L_int_G_ *pMVar11;
  int iStack_3c;
  undefined1 auStack_24 [8];
  int iStack_1c;
  undefined4 uStack_18;
  undefined8 uStack_14;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)(this);
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_0096a3a0) &&
     (_Init_thread_header(&DAT_0096a3a0), DAT_0096a3a0 == -1)) {
    puVar5 = (undefined4 *)port_op_new(0xa4);
    if (puVar5 == (undefined4 *)0x0) {
      DAT_0095f36c = (undefined4)(uintptr_t)((Str_L_char_G_ *)0x0);
    }
    else {
      DAT_0095f36c = (undefined4)(uintptr_t)((Str_L_char_G_ *)(puVar5 + 1));
      *puVar5 = 10;
      iVar10 = 10;
      pSVar3 = (Str_L_char_G_ *)(uintptr_t)(DAT_0095f36c);
      do {
        pSVar3->Data = (char *)0x0;
        pSVar3->Capacity = 0;
        pSVar3->Length = 0;
        pSVar3[1].Data = (char *)0x0;
        iVar10 = iVar10 + -1;
        pSVar3 = (Str_L_char_G_ *)&pSVar3[1].Capacity;
      } while (iVar10 != 0);
    }
    iVar10 = 0;
    if (0 < DAT_0095f374) {
      (*(uint32_t*)&(auStack_24)) = (uint32_t)(uintptr_t)((char *)0x0);
      iVar9 = 0;
      (*(uint32_t*)((char*)&(auStack_24)+4)) = (uint32_t)(uintptr_t)((void *)0x0);
      iStack_1c = 0;
      uStack_18 = 0;
      do {
        pSVar3 = (Str_L_char_G_ *)((int)(int)(uintptr_t)(DAT_0095f36c) + iVar9);
        util__Str_char___operator__o8(pSVar3,(Str_L_char_G_ *)auStack_24);
        iVar10 = iVar10 + 1;
        pSVar3[1].Data = (char *)0x0;
        iVar9 = iVar9 + 0x10;
      } while (iVar10 < DAT_0095f374);
    }
    atexit(FUN_008ee7b0);
    iStack_3c = 0x5b620d;
    _Init_thread_footer(&DAT_0096a3a0);
  }
  if (DAT_0095f370 == 0) {
    pDVar2 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G___G_
              *)Module__StaticGetPropertyGetters((Module *)(*(uint32_t*)((char*)&(uStack_14)+4)));
    util__Darray_struct_util__tuple2_class_util__Str_char__double____thiscall_util__Reflectable_____void_const______operator((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G___G_
                 *)&PTR__vftable__0095f368,pDVar2);
    util__Darray_struct_util__tuple2_class_util__Str_char__double____thiscall_util__Reflectable_____void_const_______Darray_struct_util__tuple2_class_util__Str_char__double____thiscall_util__Reflectable_____void_const((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G___G_
                *)auStack_24);
    pSVar8 = (Str_L_char_G_ *)&stack0xffffffc0;
    (*(uint32_t*)&(uStack_14)) = 0;
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)((EngineModule *)((uint)(*(uint32_t*)((char*)&(uStack_14)+4)) & 0xffffff00));
    pMVar11 = (Maybe_L_int_G_ *)&uStack_14;
    iVar10 = 3;
    pSVar3 = (Str_L_char_G_ *)
             util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetMaxGimbalAngle_radians");
    util__Str_char___SubStr(pSVar3,pSVar8,iVar10,pMVar11);
    FUN_005b16a0();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
    pSVar8 = (Str_L_char_G_ *)&stack0xffffffc0;
    (*(uint32_t*)&(uStack_14)) = 0;
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)((EngineModule *)((uint)(*(uint32_t*)((char*)&(uStack_14)+4)) & 0xffffff00));
    pMVar11 = (Maybe_L_int_G_ *)&uStack_14;
    iVar10 = 3;
    pSVar3 = (Str_L_char_G_ *)
             util__Str_char___Str_char
                       ((Str_L_char_G_ *)(auStack_24 + 4),"GetGimbalAngularVelocity_radians__s");
    util__Str_char___SubStr(pSVar3,pSVar8,iVar10,pMVar11);
    FUN_005b16a0();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
    pSVar8 = (Str_L_char_G_ *)&stack0xffffffc0;
    (*(uint32_t*)&(uStack_14)) = 0;
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)((EngineModule *)((uint)(*(uint32_t*)((char*)&(uStack_14)+4)) & 0xffffff00));
    pMVar11 = (Maybe_L_int_G_ *)&uStack_14;
    iVar10 = 3;
    pSVar3 = (Str_L_char_G_ *)
             util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetThrustPower_W");
    util__Str_char___SubStr(pSVar3,pSVar8,iVar10,pMVar11);
    FUN_005b16a0();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
    pSVar8 = (Str_L_char_G_ *)&stack0xffffffc0;
    (*(uint32_t*)&(uStack_14)) = 0;
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)((EngineModule *)((uint)(*(uint32_t*)((char*)&(uStack_14)+4)) & 0xffffff00));
    pMVar11 = (Maybe_L_int_G_ *)&uStack_14;
    iVar10 = 3;
    pSVar3 = (Str_L_char_G_ *)
             util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetMaxMassFlowRate_kg__s");
    util__Str_char___SubStr(pSVar3,pSVar8,iVar10,pMVar11);
    FUN_005b16a0();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
    pSVar8 = (Str_L_char_G_ *)&stack0xffffffc0;
    (*(uint32_t*)&(uStack_14)) = 0;
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)((EngineModule *)((uint)(*(uint32_t*)((char*)&(uStack_14)+4)) & 0xffffff00));
    pMVar11 = (Maybe_L_int_G_ *)&uStack_14;
    iVar10 = 3;
    pSVar3 = (Str_L_char_G_ *)
             util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetThrustMassRatio_m__s2");
    util__Str_char___SubStr(pSVar3,pSVar8,iVar10,pMVar11);
    FUN_005b16a0();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
    pSVar8 = (Str_L_char_G_ *)&stack0xffffffc0;
    (*(uint32_t*)&(uStack_14)) = 0;
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)((EngineModule *)((uint)(*(uint32_t*)((char*)&(uStack_14)+4)) & 0xffffff00));
    pMVar11 = (Maybe_L_int_G_ *)&uStack_14;
    iVar10 = 3;
    pSVar3 = (Str_L_char_G_ *)util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetMaxThrust_N")
    ;
    util__Str_char___SubStr(pSVar3,pSVar8,iVar10,pMVar11);
    FUN_005b16a0();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
    pSVar8 = (Str_L_char_G_ *)&stack0xffffffc0;
    (*(uint32_t*)&(uStack_14)) = 0;
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)((EngineModule *)((uint)(*(uint32_t*)((char*)&(uStack_14)+4)) & 0xffffff00));
    pMVar11 = (Maybe_L_int_G_ *)&uStack_14;
    iVar10 = 3;
    pSVar3 = (Str_L_char_G_ *)
             util__Str_char___Str_char
                       ((Str_L_char_G_ *)(auStack_24 + 4),"GetEffectiveExhaustVelocity_km__s");
    util__Str_char___SubStr(pSVar3,pSVar8,iVar10,pMVar11);
    FUN_005b16a0();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
  }
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = (undefined **)(&PTR_vftable_0095f33c);
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(int *)(in_stack_00000004 + 0xc) = DAT_0095f374;
  (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)((EngineModule *)(**(code **)(uintptr_t)(PTR__vftable__0095f368 + 0xc))());
  util__Darray_struct_util__tuple2_class_util__Str_char__void____cdecl___void______SetSize
            (in_stack_00000004,(int *)((int)&uStack_14 + 4));
  uVar7 = *(uint *)(in_stack_00000004 + 0xc);
  uVar6 = -(uint)((int)((ulonglong)uVar7 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar7 * 0x10);
  puVar4 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar6) | uVar6 + 4);
  if (puVar4 == (uint *)0x0) {
    pSVar3 = (Str_L_char_G_ *)0x0;
  }
  else {
    *puVar4 = uVar7;
    pSVar3 = (Str_L_char_G_ *)(puVar4 + 1);
    pSVar8 = pSVar3;
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      pSVar8->Data = (char *)0x0;
      pSVar8->Capacity = 0;
      pSVar8->Length = 0;
      pSVar8[1].Data = (char *)0x0;
      pSVar8 = (Str_L_char_G_ *)&pSVar8[1].Capacity;
    }
  }
  *(Str_L_char_G_ **)(in_stack_00000004 + 4) = pSVar3;
  pSVar8 = (Str_L_char_G_ *)(uintptr_t)(DAT_0095f36c);
  if (DAT_0095f36c != (Str_L_char_G_ *)(DAT_0095f370 * 0x10 + (int)DAT_0095f36c)) {
    do {
      util__Str_char___operator__o8(pSVar3,pSVar8);
      pSVar1 = pSVar8 + 1;
      pSVar8 = (Str_L_char_G_ *)&pSVar8[1].Capacity;
      pSVar3[1].Data = pSVar1->Data;
      pSVar3 = (Str_L_char_G_ *)&pSVar3[1].Capacity;
    } while (pSVar8 != (Str_L_char_G_ *)(DAT_0095f370 * 0x10 + (int)DAT_0095f36c));
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 005b6220 GetClassID_005b6220 ====


/* public: virtual unsigned long __thiscall NuclearThermalRocketModule__GetClassID(void)const  */

ulong __thiscall NuclearThermalRocketModule__GetClassID(NuclearThermalRocketModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_12008f1c__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_12008f1c__thread_safe_static_guard_0__);
    if ( cde_l2_12008f1c__thread_safe_static_guard_0__ == -1) {
       cde_l2_8fc058cd_ID = util__GetHash("NuclearThermalRocketModule");
      _Init_thread_footer(& cde_l2_12008f1c__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_8fc058cd_ID;
}





//==== 005b6850 GetShortName_005b6850 ====


/* public: virtual class util__Str_L_char_G_ 
   NuclearThermalRocketModule__GetShortName(void)const  */

Str_L_char_G_ * 
NuclearThermalRocketModule__GetShortName
          (NuclearThermalRocketModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  LocStr *this_00;
  Str_L_char_G_ *pSVar1;
  void *apvStack_34 [3];
  void *pvStack_28;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  util__Str_char___Str_char(&SStack_1c,"Engine NTR");
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_34,&SStack_1c,&SStack_10);
  pSVar1 = util__LocStr__operator__o3(this_00);
  util__Str_char___Str_char(__return_storage_ptr__,pSVar1);
  if (pvStack_28 != (void *)0x0) {
    port_op_delete(pvStack_28);
    pvStack_28 = (void *)0x0;
  }
  if (apvStack_34[0] != (void *)0x0) {
    port_op_delete(apvStack_34[0]);
    apvStack_34[0] = (void *)0x0;
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
    SStack_10.Data = (char *)0x0;
  }
  if (SStack_1c.Data != (char *)0x0) {
    port_op_delete(SStack_1c.Data);
  }
  return __return_storage_ptr__;
}





//==== 005b6900 GetIcon_005b6900 ====


/* public: virtual void (__cdecl*__thiscall NuclearThermalRocketModule__GetIcon(void)const )(void)
    */

_func_void * __thiscall NuclearThermalRocketModule__GetIcon(NuclearThermalRocketModule *this)

{
  return Icons__NuclearPropulsion;
}





//==== 005b6910 Instantiate_005b6910 ====

/* public: virtual class util__SharedPtr_L_structModuleCompartment_G_ __thiscall
   NuclearThermalRocketModule__Instantiate(void)const  */

undefined4 * __thiscall NuclearThermalRocketModule__Instantiate(NuclearThermalRocketModule *this)

{
  bool bVar1;
  EngineCompartment *this_00;
  ReferenceControllerRegistry *pRVar2;
  ReferenceController *this_01;
  undefined4 *in_stack_00000004;
  EngineCompartment *pEVar3;
  
  this_00 = (EngineCompartment *)(uintptr_t)(port_op_new(0x1a0));
  if (this_00 == (EngineCompartment *)0x0) {
    this_00 = (EngineCompartment *)0x0;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  else {
    EngineCompartment__EngineCompartment(this_00);
    this_00->_pad_0x0_0 = (int)&vftable_197;
    this_00[1]._pad_0x0_0 = 0;
    this_00[1]._pad_0x4_1 = 0;
    this_00[1]._pad_0x8_2 = 0;
    this_00[1]._pad_0xc_3 = 0;
    this_00[1]._pad_0x0_0 = (int)&vftable_2;
    this_00[1]._pad_0x4_1 = 0;
    this_00[1]._pad_0x8_2 = 0;
    this_00[1]._pad_0xc_3 = 0;
    this_00[1]._pad_0x10_4 = 0;
    this_00[1]._pad_0x14_5 = 0;
    *(undefined1 *)&this_00[1]._pad_0x18_6 = 0;
    this_00[1]._pad_0x20_8 = -0x66666666;
    this_00[1]._pad_0x24_9 = 0x40059999;
  }
  pEVar3 = this_00;
  pRVar2 = util__ReferenceControllerRegistry__Get();
  this_01 = util__ReferenceControllerRegistry__Register(pRVar2,pEVar3);
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
  }
  *in_stack_00000004 = (undefined4)(uintptr_t)(this_00);
  in_stack_00000004[1] = (undefined4)(uintptr_t)(this_01);
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
    bVar1 = util__ReferenceController__ReleaseStrongReference(this_01);
    if (bVar1) {
      if (this_00 != (EngineCompartment *)0x0) {
        (**(code **)this_00->_pad_0x0_0)(1);
      }
      pRVar2 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar2,this_00);
    }
  }
  return in_stack_00000004;
}

//==== 005b6a10 GetComposition_005b6a10 ====

/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   NuclearThermalRocketModule__GetComposition(void)const  */

Darray_L_MaterialComposition_G_ * __thiscall
NuclearThermalRocketModule__GetComposition
          (NuclearThermalRocketModule *this,Darray_L_MaterialComposition_G_ *__return_storage_ptr__)

{
  int iVar1;
  Darray_L_struct_MaterialComposition_G_ *pDVar2;
  Darray_L_struct_MaterialComposition_G_ *pDVar3;
  undefined **local_3c;
  void *local_38;
  undefined **local_2c;
  void *local_28;
  Darray_L_MaterialComposition_G_ local_1c;
  int *local_c;
  double *local_8;
  
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (MaterialComposition *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  Module__GetComposition((Module *)this,__return_storage_ptr__);
  iVar1 = EngineModule__GetAttachmentCount((EngineModule *)this);
  iVar1 = iVar1 + -1;
  if (0 < iVar1) {
    *(uint32_t *)&local_c = (uint32_t)(uintptr_t)(&(this->ThermalRocket)._pad_0x8_2);
    local_8 = &(this->ThermalRocket).Injector.PumpRadius_m;
    do {
      pDVar2 = (Darray_L_struct_MaterialComposition_G_ *)(**(code **)(uintptr_t)(*local_c + 0x68))(&local_3c);
      pDVar3 = (Darray_L_struct_MaterialComposition_G_ *)
               (**(code **)(*(int *)local_8 + 0x68))(&local_2c);
      local_1c._pad_0x0_0 = 0;
      local_1c.Data = (MaterialComposition *)0x0;
      local_1c.Size = 0;
      local_1c.Capacity = 0;
      util__Darray_L_MaterialComposition_G___Darray_L_MaterialComposition_G_(&local_1c,pDVar3);
      util__Darray_L_MaterialComposition_G___op_iadd(&local_1c,pDVar2);
      util__Darray_L_MaterialComposition_G___op_iadd
          (__return_storage_ptr__,(Darray_L_struct_MaterialComposition_G_ *)&local_1c);
      local_1c._pad_0x0_0 = (int)&vftable_75;
      if (local_1c.Data != (MaterialComposition *)0x0) {
        port_op_delete(local_1c.Data);
      }
      local_1c.Data = (MaterialComposition *)0x0;
      local_1c._pad_0x0_0 = (int)&vftable;
      local_2c = (undefined **)(&vftable_75);
      if (local_28 != (void *)0x0) {
        port_op_delete(local_28);
      }
      *(uint32_t *)&local_28 = (uint32_t)(uintptr_t)((void *)0x0);
      local_2c = (undefined **)(&vftable);
      *(uint32_t *)&local_3c = (uint32_t)(uintptr_t)(&vftable_75);
      if (local_38 != (void *)0x0) {
        port_op_delete(local_38);
      }
      *(uint32_t *)&local_38 = (uint32_t)(uintptr_t)((void *)0x0);
      *(uint32_t *)&local_3c = (uint32_t)(uintptr_t)(&vftable);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return __return_storage_ptr__;
}

//==== 005b6b20 GetCrewRequired_005b6b20 ====

/* public: virtual class util__Darray_L_structCrewJob_G_ __thiscall
   NuclearThermalRocketModule__GetCrewRequired(void)const  */

Darray_L_CrewJob_G_ * __thiscall
NuclearThermalRocketModule__GetCrewRequired
          (NuclearThermalRocketModule *this,Darray_L_CrewJob_G_ *__return_storage_ptr__)

{
  bool *pbVar1;
  code *pcVar2;
  int iVar3;
  Darray_L_CrewJob_G_ *pDVar4;
  Darray_L_CrewJob_G_ *pDVar5;
  int iVar6;
  CrewJob *pCVar7;
  CrewJob *pCVar8;
  Darray_L_CrewJob_G_ local_30;
  Darray_L_CrewJob_G_ local_20;
  int local_10;
  Darray_L_CrewJob_G_ *local_c;
  Darray_L_CrewJob_G_ *local_8;
  
  local_8 = __return_storage_ptr__;
  iVar3 = EngineModule__GetAttachmentCount((EngineModule *)this);
  pDVar4 = (Darray_L_CrewJob_G_ *)(uintptr_t)(ThermalRocketSubModule__GetCrewRequired
                     ((ThermalRocketSubModule *)&(this->ThermalRocket).Injector.PumpRadius_m,
                      &local_30,iVar3));
  *(uint32_t *)&local_c = (uint32_t)(uintptr_t)(pDVar4);
  iVar3 = EngineModule__GetAttachmentCount((EngineModule *)this);
  pDVar5 = (Darray_L_CrewJob_G_ *)(uintptr_t)(NuclearReactorSubModule__GetCrewRequired
                     ((NuclearReactorSubModule *)&(this->ThermalRocket)._pad_0x8_2,&local_20));
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (CrewJob *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  util__Darray_L_CrewJob_G___Darray_L_CrewJob_G_(__return_storage_ptr__,(Darray_L_struct_CrewJob_G_ *)pDVar5);
  pcVar2 = *(code **)(pDVar4->_pad_0x0_0 + 0xc);
  if (__return_storage_ptr__->Size == 0) {
    *(uint32_t *)&local_10 = (*pcVar2)();
    util__Darray_L_CrewJob_G___SetSize(__return_storage_ptr__,&local_10);
    iVar3 = (**(code **)(pDVar4->_pad_0x0_0 + 0xc))();
    if (iVar3 == 0) {
      (**(code **)(__return_storage_ptr__->_pad_0x0_0 + 0x10))();
    }
    else {
      util__Darray_L_CrewJob_G___CheckSizeDestructive(__return_storage_ptr__);
      pDVar4 = local_c;
      pCVar8 = __return_storage_ptr__->Data;
      pCVar7 = local_c->Data;
      if (pCVar7 != pCVar7 + local_c->Size) {
        do {
          pCVar8->Dept = pCVar7->Dept;
          util__Str_char___operator__o8(&pCVar8->Name,&pCVar7->Name);
          pCVar8->CrewRequired = pCVar7->CrewRequired;
          pbVar1 = &pCVar7->WatchRequired;
          pCVar7 = pCVar7 + 1;
          pCVar8->WatchRequired = *pbVar1;
          __return_storage_ptr__ = local_8;
          pCVar8 = pCVar8 + 1;
        } while (pCVar7 != pDVar4->Data + pDVar4->Size);
      }
    }
  }
  else {
    iVar3 = (*pcVar2)();
    if (iVar3 != 0) {
      iVar3 = __return_storage_ptr__->Size;
      iVar6 = (**(code **)(pDVar4->_pad_0x0_0 + 0xc))();
      local_8 = (Darray_L_CrewJob_G_ *)(iVar6 + __return_storage_ptr__->Size);
      util__Darray_L_CrewJob_G___SetSize(__return_storage_ptr__,(int *)&local_8);
      util__Darray_L_CrewJob_G___CheckSize(__return_storage_ptr__,iVar3);
      pCVar7 = __return_storage_ptr__->Data + iVar3;
      pCVar8 = pDVar4->Data;
      if (pCVar7 != __return_storage_ptr__->Data + __return_storage_ptr__->Size) {
        do {
          pCVar7->Dept = pCVar8->Dept;
          util__Str_char___operator__o8(&pCVar7->Name,&pCVar8->Name);
          pCVar7->CrewRequired = pCVar8->CrewRequired;
          pCVar7->WatchRequired = pCVar8->WatchRequired;
          pCVar7 = pCVar7 + 1;
          pCVar8 = pCVar8 + 1;
        } while (pCVar7 != __return_storage_ptr__->Data + __return_storage_ptr__->Size);
      }
    }
  }
  Darray_L_CrewJob_G___dtor(&local_20);
  Darray_L_CrewJob_G___dtor(&local_30);
  return __return_storage_ptr__;
}

//==== 005b6ca0 GetMaxMassFlowRate_kg__s_005b6ca0 ====


/* public: virtual double __thiscall NuclearThermalRocketModule__GetMaxMassFlowRate_kg__s(void)const
    */

double __thiscall
NuclearThermalRocketModule__GetMaxMassFlowRate_kg__s(NuclearThermalRocketModule *this)

{
  int iVar1;
  double dVar2;
  
  dVar2 = ThermalRocketSubModule__GetMaxMassFlowRate_kg__s
                    ((ThermalRocketSubModule *)&(this->ThermalRocket).Injector.PumpRadius_m);
  iVar1 = EngineModule__GetAttachmentCount((EngineModule *)this);
  return (double)iVar1 * dVar2;
}





//==== 005b6ce0 GetEffectiveExhaustVelocity_km__s_005b6ce0 ====


/* public: virtual double __thiscall
   NuclearThermalRocketModule__GetEffectiveExhaustVelocity_km__s(void)const  */

double __thiscall
NuclearThermalRocketModule__GetEffectiveExhaustVelocity_km__s(NuclearThermalRocketModule *this)

{
  ThermalRocketSubModule__GetEffectiveExhaustVelocity_km__s_Memoize
            ((ThermalRocketSubModule *)&(this->ThermalRocket).Injector.PumpRadius_m);
  if ((char)((this->ThermalRocket).Injector.CachedFlowTemperature_K == '\0')){
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return *(double *)&(this->ThermalRocket).Injector.CachedFluid;
}





//==== 005b6d20 GetMaxThrust_N_005b6d20 ====


/* public: virtual double __thiscall NuclearThermalRocketModule__GetMaxThrust_N(void)const  */

double __thiscall NuclearThermalRocketModule__GetMaxThrust_N(NuclearThermalRocketModule *this)

{
  int iVar1;
  double dVar2;
  
  dVar2 = ThermalRocketSubModule__GetMaxThrust_N
                    ((ThermalRocketSubModule *)&(this->ThermalRocket).Injector.PumpRadius_m);
  iVar1 = EngineModule__GetAttachmentCount((EngineModule *)this);
  return (double)iVar1 * dVar2;
}





//==== 005b6d60 GetStructuralMaterial_005b6d60 ====


/* public: virtual class Material const * __thiscall CarrierModule__GetStructuralMaterial(void)const
    */

Material * __thiscall CarrierModule__GetStructuralMaterial(CarrierModule *this)

{
  return (Material *)(this->AttachedAmmoBay).Data.Capacity;
}





//==== 005b6d70 GetStructuralMaterial_005b6d70 ====

/* public: virtual class Material const * __thiscall
   NuclearThermalRocketModule__GetStructuralMaterial(void)const  */

Material * __thiscall
NuclearThermalRocketModule__GetStructuralMaterial(NuclearThermalRocketModule *this)

{
  return (Material *)this[1]._pad_0x10_4;
}

//==== 005b6d80 GetStructuralThickness_m_005b6d80 ====

/* public: virtual double __thiscall NuclearThermalRocketModule__GetStructuralThickness_m(void)const
    */

double __thiscall
NuclearThermalRocketModule__GetStructuralThickness_m(NuclearThermalRocketModule *this)

{
  return *(double *)&this[1]._pad_0x20_8;
}

//==== 005b6d90 GetEngineDimensions_m_005b6d90 ====


/* public: virtual struct util__Cylinder_L_double_G_ 
   NuclearThermalRocketModule__GetEngineDimensions_m(void)const  */

Cylinder_L_double_G_ * 
NuclearThermalRocketModule__GetEngineDimensions_m
          (NuclearThermalRocketModule *this,Cylinder_L_double_G_ *__return_storage_ptr__)

{
  ThermalRocketSubModule__GetEngineDimensions_m
            ((ThermalRocketSubModule *)&(this->ThermalRocket).Injector.PumpRadius_m,
             __return_storage_ptr__);
  return __return_storage_ptr__;
}





//==== 005b6db0 GetEngineInitialRadius_m_005b6db0 ====

/* public: virtual double __thiscall NuclearThermalRocketModule__GetEngineInitialRadius_m(void)const
    */

double __thiscall
NuclearThermalRocketModule__GetEngineInitialRadius_m(NuclearThermalRocketModule *this)

{
  Cylinder_L_double_G_ *pCVar1;
  Cylinder_L_double_G_ CStack_14;
  
  pCVar1 = TurbopumpSubModule__GetTurbopumpCylinder_m
                     ((TurbopumpSubModule *)&this[1]._pad_0x48_18,&CStack_14);
  return pCVar1->Radius;
}

//==== 005b6dc0 GetEngineEndMomentOfInertia_kg_m2_005b6dc0 ====

/* public: virtual double __thiscall
   NuclearThermalRocketModule__GetEngineEndMomentOfInertia_kg_m2(void)const  */

double __thiscall
NuclearThermalRocketModule__GetEngineEndMomentOfInertia_kg_m2(NuclearThermalRocketModule *this)

{
  double *this_00;
  double dVar1;
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  double dStack_24;
  double dStack_1c;
  double dStack_14;
  double dStack_c;
  
  this_00 = &(this->ThermalRocket).Injector.PumpRadius_m;
  dStack_c = (*(double *)&this[1]._pad_0x18_6 * 3.141592653589793 * *(double *)&this[1]._pad_0x18_6
             * *(double *)&this[1]._pad_0x30_12) / 3.141592653589793;
  util__Sqrt((Maybe_L_double_G_ *)auStack_34,&dStack_c);
  if (auStack_34[8] == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dStack_c = (*(double *)&this[1]._pad_0x18_6 * 3.141592653589793 * *(double *)&this[1]._pad_0x18_6
             * *(double *)&this[1]._pad_0x28_10) / 3.141592653589793;
  util__Sqrt((Maybe_L_double_G_ *)auStack_44,&dStack_c);
  if (auStack_44[8] == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((double)(*(uint64_t*)&(auStack_44)) <= (double)(*(uint64_t*)&(auStack_34))) {
    (*(uint64_t*)&(auStack_44)) = (*(uint64_t*)&(auStack_34));
  }
  dStack_c = *(double *)&this[1]._pad_0x98_38;
  (*(uint64_t*)((char*)&(auStack_34)+8)) = (*(uint64_t*)&(auStack_44));
  dVar1 = ThermalRocketSubModule__GetNozzleLength_m((ThermalRocketSubModule *)this_00);
  dStack_c = dVar1 + dStack_c;
  (*(uint64_t*)((char*)&(auStack_44)+8)) = TurbopumpSubModule__GetLength_m((TurbopumpSubModule *)&this[1]._pad_0x48_18);
  (*(uint64_t*)((char*)&(auStack_44)+8)) = (double)(*(uint64_t*)((char*)&(auStack_44)+8)) + dStack_c * 0.5;
  dStack_14 = *(double *)&this[1]._pad_0x20_8;
  dVar1 = ThermalRocketSubModule__GetPrimarySurfaceArea_m2((ThermalRocketSubModule *)this_00);
  dStack_1c = *(double *)(this[1]._pad_0x10_4 + 0x30) * dVar1 * dStack_14;
  dStack_24 = *(double *)&this[1]._pad_0x20_8;
  dStack_14 = dStack_24;
  dVar1 = ThermalRocketSubModule__GetPrimarySurfaceArea_m2((ThermalRocketSubModule *)this_00);
  dStack_14 = *(double *)(this[1]._pad_0x10_4 + 0x30) * dVar1 * dStack_14;
  dVar1 = Mechanics__ThickCylindericalShellRadialMomentOfInertia_kg_m2
                    (dStack_c,(double)(*(uint64_t*)((char*)&(auStack_34)+8)),dStack_24 + (double)(*(uint64_t*)((char*)&(auStack_34)+8)),
                     dStack_1c);
  (*(uint64_t*)((char*)&(auStack_44)+8)) = dVar1 + (double)(*(uint64_t*)((char*)&(auStack_44)+8)) * (double)(*(uint64_t*)((char*)&(auStack_44)+8)) * dStack_14;
  dVar1 = TurbopumpSubModule__GetEndRadialMomentOfInertia_kg_m2
                    ((TurbopumpSubModule *)&this[1]._pad_0x48_18);
  return dVar1 + (double)(*(uint64_t*)((char*)&(auStack_44)+8));
}

//==== 005b6dd0 GetEngineMass_kg_005b6dd0 ====


/* public: virtual double __thiscall NuclearThermalRocketModule__GetEngineMass_kg(void)const  */

double __thiscall NuclearThermalRocketModule__GetEngineMass_kg(NuclearThermalRocketModule *this)

{
  int iVar1;
  double dVar2;
  
  dVar2 = ThermalRocketSubModule__GetTotalMass_kg
                    ((ThermalRocketSubModule *)&(this->ThermalRocket).Injector.PumpRadius_m);
  iVar1 = EngineModule__GetAttachmentCount((EngineModule *)this);
  return (double)iVar1 * dVar2;
}





//==== 005b6e10 GetHeatSignature_W_005b6e10 ====


/* public: virtual double __thiscall NuclearThermalRocketModule__GetHeatSignature_W(void)const  */

double __thiscall NuclearThermalRocketModule__GetHeatSignature_W(NuclearThermalRocketModule *this)

{
  int iVar1;
  double dVar2;
  
  dVar2 = ThermalRocketSubModule__GetHeatSignature_W
                    ((ThermalRocketSubModule *)&(this->ThermalRocket).Injector.PumpRadius_m);
  iVar1 = EngineModule__GetAttachmentCount((EngineModule *)this);
  return (double)iVar1 * dVar2;
}





//==== 005b6e50 GetSteadyStateTemperature_K_005b6e50 ====


/* public: virtual double __thiscall
   NuclearThermalRocketModule__GetSteadyStateTemperature_K(void)const  */

double __thiscall
NuclearThermalRocketModule__GetSteadyStateTemperature_K(NuclearThermalRocketModule *this)

{
  double *this_00;
  float10 fVar1;
  double dVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  this_00 = &(this->ThermalRocket).Injector.PumpRadius_m;
  uVar4 = 0x3e45798ee2308c3a;
  uVar3 = 0x14;
  dVar2 = ThermalRocketSubModule__GetGasWallTemperature_K((ThermalRocketSubModule *)this_00);
  fVar1 = (float10)FUN_005c2210(this_00,0,dVar2,uVar3,uVar4);
  return (double)fVar1;
}





//==== 005b6e60 GetEmittedRadiation ====

/* public: virtual struct Radiation 
   NuclearThermalRocketModule__GetEmittedRadiation(void)const  */

Radiation * 
NuclearThermalRocketModule__GetEmittedRadiation
          (NuclearThermalRocketModule *this,Radiation *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  NuclearReactorSubModule__GetEmittedRadiation_Memoize
            ((NuclearReactorSubModule *)&(this->ThermalRocket)._pad_0x8_2);
  if ((char)((this->ThermalRocket).GetGasExpansionPlume_MemoizedValue.Data.ExhaustVelocity_km__s
      == '\0') ) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar1 = *(double *)&(this->ThermalRocket).GetGasExpansionPlume_MemoizedValue.Data.Products.Size;
  dVar2 = (this->ThermalRocket).GetGasExpansionPlume_MemoizedValue.Data.StartRadius_m;
  dVar3 = (this->ThermalRocket).GetGasExpansionPlume_MemoizedValue.Data.StartTemperature_K;
  iVar4 = EngineModule__GetAttachmentCount((EngineModule *)this);
  iVar5 = EngineModule__GetAttachmentCount((EngineModule *)this);
  iVar6 = EngineModule__GetAttachmentCount((EngineModule *)this);
  __return_storage_ptr__->ThermalNeutrons_W = (double)iVar4 * dVar1;
  __return_storage_ptr__->FastNeutrons_W = (double)iVar5 * dVar2;
  __return_storage_ptr__->GammaRays_W = (double)iVar6 * dVar3;
  return __return_storage_ptr__;
}

//==== 005b7310 GenerateDesignUI_005b7310 ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual struct UIWidget * __thiscall NuclearThermalRocketModule__GenerateDesignUI(class
   Manager *)const  */

UIWidget * __thiscall
NuclearThermalRocketModule__GenerateDesignUI(NuclearThermalRocketModule *this,Manager *param_1)

{
  undefined8 stack0xfffffb84;
  undefined8 stack0xfffffbb8;
  UIAttributes UVar1;
  UIAttributes UVar2;
  LayoutAttributes LVar3;
  bool bVar4;
  bool bVar5;
  UIWidget *pUVar6;
  UIAttributes *pUVar7;
  undefined4 *puVar8;
  UIWidget *pUVar9;
  Data *pDVar10;
  undefined1 in_stack_fffffb84 [44];
  void *in_stack_fffffbb0;
  _func___cdecl_bool_void_ptr *in_stack_fffffbb4;
  undefined1 auVar11 [12];
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [44];
  undefined1 auVar19 [44];
  undefined1 in_stack_fffffbb8 [268];
  float in_stack_fffffcc4;
  float fVar21;
  float in_stack_fffffcc8;
  float fVar22;
  float in_stack_fffffccc;
  undefined4 in_stack_fffffcd0;
  undefined4 uVar23;
  void *in_stack_fffffcd4;
  void *pvVar24;
  _func___cdecl_Color_void_ptr *in_stack_fffffcd8;
  _func___cdecl_Color_void_ptr *p_Var25;
  int in_stack_fffffcdc;
  int iVar26;
  int in_stack_fffffce0;
  int iVar27;
  int in_stack_fffffce4;
  int iVar28;
  int in_stack_fffffce8;
  int iVar29;
  float in_stack_fffffcec;
  float in_stack_fffffcf0;
  float fVar30;
  float in_stack_fffffcf4;
  float fVar31;
  float fVar32;
  float fVar33;
  Manager *pMVar34;
  undefined4 uVar35;
  UIAttributes local_2f4;
  UIAttributes local_1ac;
  LayoutAttributes local_64;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  undefined8 uStack_24;
  Darray_L_util__SharedPtr_L_UIWidget_G___G_ local_1c;
  NuclearThermalRocketModule *local_c;
  UIRowLayout *local_8;
  undefined1 auVar20 [32];
  
  bVar5 = false;
  bVar4 = false;
  local_8 = (UIRowLayout *)0x0;
  *(uint32_t *)&local_c = (uint32_t)(uintptr_t)(this);
  local_8 = (UIRowLayout *)(uintptr_t)(port_op_new(0x218));
  if (local_8 == (UIRowLayout *)0x0) {
    pUVar6 = (UIWidget *)0x0;
  }
  else {
    pUVar6 = (UIWidget *)(uintptr_t)(port_op_new(0x170));
    if (pUVar6 == (UIWidget *)0x0) {
      pUVar6 = (UIWidget *)0x0;
    }
    else {
      fVar32 = 8.398419e-39;
      pMVar34 = param_1;
      UIAttributes__UIAttributes(&local_1ac,param_1);
      *(uint32_t *)&local_34 = 0;
      uStack_2c = 0x3ff0000000000000;
      uStack_24 = 0x3ff0000000000000;
      uStack_30 = 0;
      local_1ac.FillProportion.Getter.Callee = (void *)0x0;
      local_1ac.FillProportion.Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0;
      local_1ac.FillProportion.Value.X = 0;
      local_1ac.FillProportion.Value.Y = 0x3ff00000;
      local_1ac.FillProportion.Value.Y = 1.0;
      in_stack_fffffbb0 = (void *)0x5b73a4;
      UIAttributes__UIAttributes((UIAttributes *)&stack0xfffffbb8,&local_1ac);
      in_stack_fffffbb4 = (_func___cdecl_bool_void_ptr *)0x5b73ab;
      UVar2.BackgroundColor.Data.Value.Saturation = in_stack_fffffcc4;
*(uint32_t *)&auVar11 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 4)));
*(uint32_t *)&auVar14 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 32)));
*(uint32_t *)&auVar15 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 44)));
*(uint32_t *)&auVar17 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 180)));
*(uint32_t *)&auVar19 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 196)));
      UVar2.Parent = (Manager *)(*(uint32_t*)&(in_stack_fffffbb8));
      UVar2.Tag.Data = (char *)(*(uint32_t*)&(auVar11));
      UVar2.Tag.Capacity = (*(uint32_t*)((char*)&(auVar11)+4));
      UVar2.Tag.Length = (*(uint32_t*)((char*)&(auVar11)+8));
      uVar12 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 16)),0);
      uVar13 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 16)),8);
      UVar2.Location.Getter.Callee = (void *)(int)uVar12;
      UVar2.Location.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
      UVar2.Location.Value.X = (int)uVar13;
      UVar2.Location.Value.Y = (int)((ulonglong)uVar13 >> 0x20);
      UVar2.Visible.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar14));
      UVar2.Visible.Getter.CallbackFunction =
           (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar14)) >> 0x20);
      UVar2.Visible.Value = (bool)auVar14[8];
      (*(uint24_t *)((char *)&(UVar2.Visible) + 9)) = (*(uint24_t*)((char*)&(auVar14)+9));
      UVar2.Enabled.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar15));
      UVar2.Enabled.Getter.CallbackFunction =
           (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar15)) >> 0x20);
      UVar2.Enabled.Value = (bool)auVar15[8];
      (*(uint24_t *)((char *)&(UVar2.Enabled) + 9)) = (*(uint24_t*)((char*)&(auVar15)+9));
      uVar12 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 56)),0);
      uVar13 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 56)),8);
      UVar2.DesiredSize.Getter.Callee = (void *)(int)uVar12;
      UVar2.DesiredSize.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
      UVar2.DesiredSize.Value.X = (int)uVar13;
      UVar2.DesiredSize.Value.Y = (int)((ulonglong)uVar13 >> 0x20);
      uVar12 = SUB248((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 72)),0);
*(uint32_t *)&auVar16 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 72)),8));
      UVar2.FillProportion.Getter.Callee = (void *)(int)uVar12;
      UVar2.FillProportion.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
      UVar2.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar16));
      UVar2.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar16)+8));
      uVar12 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 96)),0);
      UVar2.HitTestShape.Getter.Callee = (void *)(int)uVar12;
      UVar2.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar12 >> 0x20));
      UVar2.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 96)),8);
      (*(uint32_t *)((char *)&(UVar2) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffffbb8) + 108));
      uVar12 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 112)),0);
      UVar2.Depth.Getter.Callee = (void *)(int)uVar12;
      UVar2.Depth.Getter.CallbackFunction =
           (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
      UVar2.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 112)),8);
      uVar12 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 128)),0);
      UVar2.Icon.Getter.Callee = (void *)(int)uVar12;
      UVar2.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar12 >> 0x20));
      UVar2.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 128)),8);
      uVar12 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 140)),0);
*(uint32_t *)&auVar11 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 140)),8));
      UVar2.Tooltip.Getter.Callee = (void *)(int)uVar12;
      UVar2.Tooltip.Getter.CallbackFunction =
           (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
      UVar2.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar11));
      UVar2.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar11)+4));
      UVar2.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar11)+8));
      uVar12 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 160)),0);
*(uint32_t *)&auVar11 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 160)),8));
      UVar2.VerboseTooltip.Getter.Callee = (void *)(int)uVar12;
      UVar2.VerboseTooltip.Getter.CallbackFunction =
           (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
      UVar2.VerboseTooltip.Value.Data = (char *)(*(uint32_t*)&(auVar11));
      UVar2.VerboseTooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar11)+4));
      UVar2.VerboseTooltip.Value.Length = (*(uint32_t*)((char*)&(auVar11)+8));
      uVar12 = SUB128((*(uint32_t *)((char *)&(auVar17) + 0)),0);
      UVar2.TextFont.Data.Getter.Callee = (void *)(int)uVar12;
      UVar2.TextFont.Data.Getter.CallbackFunction =
           (_func___cdecl_Font_ptr_void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
      UVar2.TextFont.Data.Value = (Font *)SUB124((*(uint32_t *)((char *)&(auVar17) + 0)),8);
      UVar2.TextFont.IsValidData = (bool)auVar17[0xc];
      (*(uint32_t *)((char *)&(UVar2.TextFont) + 13)) = (*(uint32_t *)((char *)&(auVar17) + 13));
      uVar12 = SUB408((*(uint32_t *)((char *)&(auVar19) + 0)),0);
*(uint32_t *)&auVar20 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar19) + 0)),8));
      UVar2.ForegroundColor.Data.Getter.Callee = (void *)(int)uVar12;
      UVar2.ForegroundColor.Data.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
      UVar2.ForegroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar20));
      UVar2.ForegroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar20)+4));
      UVar2.ForegroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar20)+8));
      UVar2.ForegroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar20) + 12));
      UVar2.ForegroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar20) + 16));
      UVar2.ForegroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar20) + 20));
      UVar2.ForegroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar20) + 24));
      UVar2.ForegroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar20) + 28));
      UVar2.ForegroundColor.IsValidData = (bool)auVar19[0x28];
      (*(uint32_t *)((char *)&(UVar2.ForegroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar19) + 41));
      UVar2.BackgroundColor.Data.Getter.Callee = (void *)(int)(*(uint64_t *)((char *)&(in_stack_fffffbb8) + 240));
      UVar2.BackgroundColor.Data.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)(*(uint64_t *)((char *)&(in_stack_fffffbb8) + 240)) >> 0x20);
      UVar2.BackgroundColor.Data.Value._pad_0x0_0 = (*(uint32_t *)((char *)&(in_stack_fffffbb8) + 248));
      UVar2.BackgroundColor.Data.Value._pad_0x4_1 = (*(uint32_t *)((char *)&(in_stack_fffffbb8) + 252));
      UVar2.BackgroundColor.Data.Value._pad_0x8_2 = (*(uint32_t *)((char *)&(in_stack_fffffbb8) + 256));
      UVar2.BackgroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(in_stack_fffffbb8) + 260));
      UVar2.BackgroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(in_stack_fffffbb8) + 264));
      UVar2.BackgroundColor.Data.Value.Value = in_stack_fffffcc8;
      UVar2.BackgroundColor.Data.Value.Alpha = in_stack_fffffccc;
      UVar2.BackgroundColor.IsValidData = SUB41(in_stack_fffffcd0,0);
      (*(uint32_t *)((char *)&(UVar2.BackgroundColor) + 41)) = SUB43(in_stack_fffffcd0,1);
      UVar2.TextColor.Data.Getter.Callee = in_stack_fffffcd4;
      UVar2.TextColor.Data.Getter.CallbackFunction = in_stack_fffffcd8;
      UVar2.TextColor.Data.Value._pad_0x0_0 = in_stack_fffffcdc;
      UVar2.TextColor.Data.Value._pad_0x4_1 = in_stack_fffffce0;
      UVar2.TextColor.Data.Value._pad_0x8_2 = in_stack_fffffce4;
      UVar2.TextColor.Data.Value._pad_0xc_3 = in_stack_fffffce8;
      UVar2.TextColor.Data.Value.Hue_degrees = in_stack_fffffcec;
      UVar2.TextColor.Data.Value.Saturation = in_stack_fffffcf0;
      UVar2.TextColor.Data.Value.Value = in_stack_fffffcf4;
      UVar2.TextColor.Data.Value.Alpha = fVar32;
      (*(uint32_t *)((char *)&(UVar2.TextColor) + 40)) = (uint32_t)(uintptr_t)(pMVar34);
      UIWidget__UIWidget(pUVar6,UVar2);
      pUVar6->_pad_0x0_0 = (int)&vftable_198;
      pUVar6[1]._pad_0x0_0 = (int)this;
      UIAttributes___UIAttributes(&local_1ac);
    }
    local_1c._pad_0x0_0 = (int)&vftable_48;
    local_1c.Data = (SharedPtr_L_UIWidget_G_ *)0x0;
    local_1c.Size = 0;
    local_1c.Capacity = 0;
    pUVar7 = (UIAttributes *)UIAttributes__UIAttributes(&local_2f4,param_1);
    *(uint32_t *)&local_34 = 0;
    uStack_2c = 0x3ff0000000000000;
    uStack_24 = 0x3ff0000000000000;
    uStack_30 = 0;
    (pUVar7->FillProportion).Getter.Callee = (void *)0x0;
    (pUVar7->FillProportion).Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0;
    *(undefined4 *)&(pUVar7->FillProportion).Value.X = 0;
    *(undefined4 *)((int)&(pUVar7->FillProportion).Value.X + 4) = 0x3ff00000;
    (pUVar7->FillProportion).Value.Y = 1.0;
    puVar8 = (undefined4 *)LayoutAttributes__LayoutAttributes(&local_64);
    uVar23 = *puVar8;
    pvVar24 = (void *)puVar8[1];
    p_Var25 = (_func___cdecl_Color_void_ptr *)puVar8[2];
    iVar26 = puVar8[3];
    iVar27 = puVar8[4];
    iVar28 = puVar8[5];
    iVar29 = puVar8[6];
    fVar32 = (float)puVar8[7];
    fVar30 = (float)puVar8[8];
    fVar31 = (float)puVar8[9];
    fVar33 = (float)puVar8[10];
    uVar35 = puVar8[0xb];
    pUVar9 = NuclearReactorSubModule__GenerateModuleDiagram
                       ((NuclearReactorSubModule *)&(local_c->ThermalRocket)._pad_0x8_2,param_1);
    fVar21 = 8.398764e-39;
    pDVar10 = (Data *)(uintptr_t)(UILayout__Data__Add((Data *)&local_1c,pUVar9));
    fVar22 = 8.398773e-39;
    pDVar10 = (Data *)(uintptr_t)(UILayout__Data__Add(pDVar10,pUVar6));
    UIAttributes__UIAttributes((UIAttributes *)&stack0xfffffb84,pUVar7);
    UVar1.Enabled.Getter.Callee = in_stack_fffffbb0;
*(uint32_t *)&auVar11 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffb84) + 4)));
*(uint32_t *)&auVar14 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffb84) + 32)));
    UVar1.Parent = (Manager *)(*(uint32_t*)&(in_stack_fffffb84));
    UVar1.Tag.Data = (char *)(*(uint32_t*)&(auVar11));
    UVar1.Tag.Capacity = (*(uint32_t*)((char*)&(auVar11)+4));
    UVar1.Tag.Length = (*(uint32_t*)((char*)&(auVar11)+8));
    uVar12 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffb84) + 16)),0);
    uVar13 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffb84) + 16)),8);
    UVar1.Location.Getter.Callee = (void *)(int)uVar12;
    UVar1.Location.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
    UVar1.Location.Value.X = (int)uVar13;
    UVar1.Location.Value.Y = (int)((ulonglong)uVar13 >> 0x20);
    UVar1.Visible.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar14));
    UVar1.Visible.Getter.CallbackFunction =
         (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar14)) >> 0x20);
    UVar1.Visible.Value = (bool)auVar14[8];
    (*(uint24_t *)((char *)&(UVar1.Visible) + 9)) = (*(uint24_t*)((char*)&(auVar14)+9));
    UVar1.Enabled.Getter.CallbackFunction = in_stack_fffffbb4;
*(uint32_t *)&auVar17 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 128)));
*(uint32_t *)&auVar19 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 144)));
*(uint32_t *)&auVar18 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 188)));
    UVar1.Enabled.Value = (bool)in_stack_fffffbb8[0];
    (*(uint24_t *)((char *)&(UVar1.Enabled) + 9)) = (*(uint24_t*)((char*)&(in_stack_fffffbb8)+1));
    uVar12 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 4)),0);
    uVar13 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 4)),8);
    UVar1.DesiredSize.Getter.Callee = (void *)(int)uVar12;
    UVar1.DesiredSize.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
    UVar1.DesiredSize.Value.X = (int)uVar13;
    UVar1.DesiredSize.Value.Y = (int)((ulonglong)uVar13 >> 0x20);
    uVar12 = SUB248((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 20)),0);
*(uint32_t *)&auVar16 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 20)),8));
    UVar1.FillProportion.Getter.Callee = (void *)(int)uVar12;
    UVar1.FillProportion.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
    UVar1.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar16));
    UVar1.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar16)+8));
    uVar12 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 44)),0);
    UVar1.HitTestShape.Getter.Callee = (void *)(int)uVar12;
    UVar1.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar12 >> 0x20));
    UVar1.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 44)),8);
    (*(uint32_t *)((char *)&(UVar1) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffffbb8) + 56));
    uVar12 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 60)),0);
    UVar1.Depth.Getter.Callee = (void *)(int)uVar12;
    UVar1.Depth.Getter.CallbackFunction =
         (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
    UVar1.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 60)),8);
    uVar12 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 76)),0);
    UVar1.Icon.Getter.Callee = (void *)(int)uVar12;
    UVar1.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar12 >> 0x20));
    UVar1.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 76)),8);
    uVar12 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 88)),0);
*(uint32_t *)&auVar11 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 88)),8));
    UVar1.Tooltip.Getter.Callee = (void *)(int)uVar12;
    UVar1.Tooltip.Getter.CallbackFunction =
         (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
    UVar1.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar11));
    UVar1.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar11)+4));
    UVar1.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar11)+8));
    uVar12 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 108)),0);
*(uint32_t *)&auVar11 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffbb8) + 108)),8));
    UVar1.VerboseTooltip.Getter.Callee = (void *)(int)uVar12;
    UVar1.VerboseTooltip.Getter.CallbackFunction =
         (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
    UVar1.VerboseTooltip.Value.Data = (char *)(*(uint32_t*)&(auVar11));
    UVar1.VerboseTooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar11)+4));
    UVar1.VerboseTooltip.Value.Length = (*(uint32_t*)((char*)&(auVar11)+8));
    uVar12 = SUB128((*(uint32_t *)((char *)&(auVar17) + 0)),0);
    UVar1.TextFont.Data.Getter.Callee = (void *)(int)uVar12;
    UVar1.TextFont.Data.Getter.CallbackFunction =
         (_func___cdecl_Font_ptr_void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
    UVar1.TextFont.Data.Value = (Font *)SUB124((*(uint32_t *)((char *)&(auVar17) + 0)),8);
    UVar1.TextFont.IsValidData = (bool)auVar17[0xc];
    (*(uint32_t *)((char *)&(UVar1.TextFont) + 13)) = (*(uint32_t *)((char *)&(auVar17) + 13));
    uVar12 = SUB408((*(uint32_t *)((char *)&(auVar19) + 0)),0);
*(uint32_t *)&auVar20 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar19) + 0)),8));
    UVar1.ForegroundColor.Data.Getter.Callee = (void *)(int)uVar12;
    UVar1.ForegroundColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
    UVar1.ForegroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar20));
    UVar1.ForegroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar20)+4));
    UVar1.ForegroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar20)+8));
    UVar1.ForegroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar20) + 12));
    UVar1.ForegroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar20) + 16));
    UVar1.ForegroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar20) + 20));
    UVar1.ForegroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar20) + 24));
    UVar1.ForegroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar20) + 28));
    UVar1.ForegroundColor.IsValidData = (bool)auVar19[0x28];
    (*(uint32_t *)((char *)&(UVar1.ForegroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar19) + 41));
    uVar12 = SUB408((*(uint32_t *)((char *)&(auVar18) + 0)),0);
*(uint32_t *)&auVar20 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar18) + 0)),8));
    UVar1.BackgroundColor.Data.Getter.Callee = (void *)(int)uVar12;
    UVar1.BackgroundColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar12 >> 0x20);
    UVar1.BackgroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar20));
    UVar1.BackgroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar20)+4));
    UVar1.BackgroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar20)+8));
    UVar1.BackgroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar20) + 12));
    UVar1.BackgroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar20) + 16));
    UVar1.BackgroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar20) + 20));
    UVar1.BackgroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar20) + 24));
    UVar1.BackgroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar20) + 28));
    UVar1.BackgroundColor.IsValidData = (bool)auVar18[0x28];
    (*(uint32_t *)((char *)&(UVar1.BackgroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar18) + 41));
    UVar1.TextColor.Data.Getter.Callee = (void *)(int)(*(uint64_t *)((char *)&(in_stack_fffffbb8) + 232));
    UVar1.TextColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)(*(uint64_t *)((char *)&(in_stack_fffffbb8) + 232)) >> 0x20);
    UVar1.TextColor.Data.Value._pad_0x0_0 = (*(uint32_t *)((char *)&(in_stack_fffffbb8) + 240));
    UVar1.TextColor.Data.Value._pad_0x4_1 = (*(uint32_t *)((char *)&(in_stack_fffffbb8) + 244));
    UVar1.TextColor.Data.Value._pad_0x8_2 = (*(uint32_t *)((char *)&(in_stack_fffffbb8) + 248));
    UVar1.TextColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(in_stack_fffffbb8) + 252));
    UVar1.TextColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(in_stack_fffffbb8) + 256));
    UVar1.TextColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(in_stack_fffffbb8) + 260));
    UVar1.TextColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(in_stack_fffffbb8) + 264));
    UVar1.TextColor.Data.Value.Alpha = fVar21;
    (*(uint32_t *)((char *)&(UVar1.TextColor) + 40)) = fVar22;
    LVar3.Margin.Getter.CallbackFunction = pvVar24;
    LVar3.Margin.Getter.Callee = (void *)uVar23;
    LVar3.Margin.Value.X = (int)p_Var25;
    LVar3.Margin.Value.Y = iVar26;
    LVar3.Padding.Getter.Callee = (void *)iVar27;
    LVar3.Padding.Getter.CallbackFunction = (_func___cdecl_int_void_ptr *)iVar28;
    LVar3.Padding.Value = iVar29;
    LVar3.Background__HasBackground.Getter.Callee = *(void **)&(fVar32);
    LVar3.Background__HasBackground.Getter.CallbackFunction = *(_func___cdecl_bool_void_ptr *)&(fVar30);
    (*(uint32_t *)((char *)&(LVar3.Background__HasBackground) + 8)) = fVar31;
    (*(uint32_t *)((char *)&(LVar3) + 40)) = fVar33;
    LVar3.HasFlexibleSizing = SUB41(uVar35,0);
    (*(uint32_t *)((char *)&(LVar3) + 45)) = SUB43(uVar35,1);
    pUVar6 = (UIWidget *)UIRowLayout__UIRowLayout(local_8,UVar1,pDVar10,LVar3);
    bVar5 = true;
    bVar4 = true;
  }
  if (bVar4) {
    UIAttributes___UIAttributes(&local_2f4);
  }
  if (bVar5) {
    Darray_L_util__SharedPtr_L_UIWidget_G___G___dtor(&local_1c);
  }
  return pUVar6;
}

//==== 005b74b0 BuildModels_005b74b0 ====

/* public: virtual void __thiscall NuclearThermalRocketModule__BuildModels(void) */

void __thiscall NuclearThermalRocketModule__BuildModels(NuclearThermalRocketModule *this)

{
  undefined8 stack0xfffffee0;
  undefined8 stack0xffffff10;
  undefined8 stack0xffffff58;
  ReferenceController *this_00;
  Maybe_L_TurretSubModule_G_ MVar1;
  undefined **ppuVar2;
  Str_L_char_G_ in_stack_fffffee0;
  undefined8 uVar3;
  undefined4 in_stack_fffffef4;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 in_stack_ffffff08;
  undefined **ppuVar8;
  Str_L_char_G_ in_stack_ffffff10;
  int iVar9;
  undefined4 in_stack_ffffff20;
  undefined8 uVar10;
  int iVar11;
  undefined4 in_stack_ffffff30;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 uVar15;
  undefined7 in_stack_ffffff4d;
  undefined **ppuVar16;
  Str_L_char_G_ in_stack_ffffff58;
  int iVar17;
  undefined4 in_stack_ffffff68;
  double dVar18;
  
  EngineModule__GetStartingHeight_m((EngineModule *)this);
  util__Str_char___Str_char((Str_L_char_G_ *)&stack0xfffffee0,(Str_L_char_G_ *)&this->_pad_0x74_29);
  ppuVar2 = &vftable_5;
  (*(uint32_t*)&(uVar3)) = this->_pad_0x80_32;
  (*(uint32_t*)((char*)&(uVar3)+4)) = this->_pad_0x84_33;
  uVar4 = CONCAT31((int3)((uint)in_stack_fffffef4 >> 8),(char)this->_pad_0x88_34);
  iVar5 = this->_pad_0x8c_35;
  (*(uint32_t*)&(uVar6)) = this->_pad_0x90_36;
  (*(uint32_t*)((char*)&(uVar6)+4)) = this->_pad_0x94_37;
  iVar7 = this->_pad_0x98_38;
  util__Str_char___Str_char((Str_L_char_G_ *)&stack0xffffff10,(Str_L_char_G_ *)&this->_pad_0xa4_41);
  ppuVar8 = &vftable_186;
  iVar9 = this->_pad_0xb0_44;
  (*(uint32_t*)&(uVar10)) = this->_pad_0xb8_46;
  (*(uint32_t*)((char*)&(uVar10)+4)) = this->_pad_0xbc_47;
  iVar11 = this->_pad_0xc0_48;
  (*(uint32_t*)&(uVar12)) = this->_pad_0xc8_50;
  (*(uint32_t*)((char*)&(uVar12)+4)) = this->_pad_0xcc_51;
  (*(uint32_t*)&(uVar13)) = this->_pad_0xd0_52;
  (*(uint32_t*)((char*)&(uVar13)+4)) = this->_pad_0xd4_53;
  (*(uint32_t*)&(uVar14)) = this->_pad_0xd8_54;
  (*(uint32_t*)((char*)&(uVar14)+4)) = this->_pad_0xdc_55;
  uVar15 = (undefined1)this->_pad_0xe0_56;
  util__Str_char___Str_char((Str_L_char_G_ *)&stack0xffffff58,(Str_L_char_G_ *)&this->field_0xec);
  ppuVar16 = &vftable_188;
  iVar17 = (this->NuclearReactor)._pad_0x0_0;
  dVar18 = *(double *)&(this->NuclearReactor)._pad_0x8_2;
  this_00 = *(ReferenceController **)((int)&(this->NuclearReactor).ControlRodMass_kg + 4);
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  MVar1.Data._pad_0x4_1 = (int)in_stack_fffffee0.Data;
  MVar1.Data._pad_0x8_2 = in_stack_fffffee0.Capacity;
  (*(uint32_t *)((char *)&(MVar1.Data) + 12)) = in_stack_fffffee0.Length;
  MVar1.Data._pad_0x0_0 = (int)ppuVar2;
  MVar1.Data.InnerRadius_m = (double)uVar3;
  (*(uint32_t *)((char *)&(MVar1.Data) + 24)) = uVar4;
  MVar1.Data.ArmorComposition = (Material *)iVar5;
  MVar1.Data.ArmorThickness_m = (double)uVar6;
  MVar1.Data.MomentumWheels._pad_0x0_0 = iVar7;
  MVar1.Data.MomentumWheels._pad_0x4_1 = in_stack_ffffff08;
  MVar1.Data.MomentumWheels._pad_0x8_2 = (int)ppuVar8;
  MVar1.Data.MomentumWheels._pad_0xc_3 = (int)in_stack_ffffff10.Data;
  MVar1.Data.MomentumWheels.Composition = (Material *)in_stack_ffffff10.Capacity;
  (*(uint32_t *)((char *)&(MVar1.Data.MomentumWheels) + 20)) = in_stack_ffffff10.Length;
  MVar1.Data.MomentumWheels.RotationalSpeed_RPM = iVar9;
  (*(uint32_t *)((char *)&(MVar1.Data.MomentumWheels.RotationalSpeed_RPM) + 4)) = in_stack_ffffff20;
  (*(uint64_t *)((char *)&(MVar1.Data.MomentumWheels) + 32)) = uVar10;
  MVar1.Data.MomentumWheels.CachedRadius_m = iVar11;
  (*(uint32_t *)((char *)&(MVar1.Data.MomentumWheels.CachedRadius_m) + 4)) = in_stack_ffffff30;
  MVar1.Data.MomentumWheels.CachedHeight_m = (double)uVar12;
  (*(uint64_t *)((char *)&(MVar1.Data.MomentumWheels) + 56)) = uVar13;
  MVar1.Data.CachedObjectRadius_m = (double)uVar14;
  MVar1.Data.CachedObjectEndRadialMomentOfInertia_kg_m2 = uVar15;
  (*(uint56_t *)((char *)&(MVar1.Data.CachedObjectEndRadialMomentOfInertia_kg_m2) + 1)) = in_stack_ffffff4d;
  *(uint32_t *)&(MVar1.Data).CachedObjectMass_kg = (uint32_t)(uintptr_t)ppuVar16;
  (*(uint32_t *)((char *)&(MVar1.Data) + 124)) = *(uint32_t *)&(in_stack_ffffff58);
  (*(uint32_t *)((char *)&(MVar1) + 136)) = iVar17;
  (*(uint32_t *)((char *)&(MVar1) + 140)) = in_stack_ffffff68;
  ThermalRocketSubModule__BuildModels
            ((ThermalRocketSubModule *)&(this->ThermalRocket).Injector.PumpRadius_m,
             (Darray_L_util__SharedPtr_L_GameModel_G___G_ *)&this->_pad_0x58_22,
             (Darray_L_util__WeakPtr_L_GameModel_G___G_ *)&(this->NuclearReactor).CachedNoFluid,
             (Darray_L_util__WeakPtr_L_GameModel_G___G_ *)&(this->NuclearReactor).CachedDimensions_m.Height,
             (WeakPtr_L_GameModel_G_ *)&(this->NuclearReactor).CachedCoolantFlowRate_kg__s,MVar1,dVar18)
  ;
  return;
}

//==== 005b76e0 GetExhaustPlumeModelRatio_005b76e0 ====

/* public: virtual double __thiscall
   NuclearThermalRocketModule__GetExhaustPlumeModelRatio(void)const  */

double __thiscall
NuclearThermalRocketModule__GetExhaustPlumeModelRatio(NuclearThermalRocketModule *this)

{
  ThermalRocketSubModule__GetExhaustPlumeModelRatio_Memoize();
  if ((char)this[1]._pad_0x8_2 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return *(double *)(this + 1);
}

//==== 005b7720 SetCachedData_005b7720 ====

/* public: virtual void __thiscall NuclearThermalRocketModule__SetCachedData(class DataParser *) */

void __thiscall
NuclearThermalRocketModule__SetCachedData(NuclearThermalRocketModule *this,DataParser *param_1)

{
  double *this_00;
  int *this_01;
  int iVar1;
  Material *this_02;
  Cylinder_L_double_G_ CVar2;
  Darray_L_MaterialConstituent_G_ *pDVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined ***pppuVar8;
  undefined **local_24;
  void *local_20;
  double local_1c;
  undefined1 local_14 [16];
  
  EngineModule__SetCachedData((EngineModule *)this,param_1);
  pppuVar8 = &local_24;
  iVar1 = *(int *)&(this->ThermalRocket).GetGasExpansionPlume_MemoizedValue.Data.MassFlowRate_kg__s;
  this_00 = &(this->ThermalRocket).Injector.PumpRadius_m;
  pDVar3 = (Darray_L_MaterialConstituent_G_ *)(**(code **)(this->_pad_0x0_0 + 0x170))();
  ThermalRocketSubModule__PassThroughCachedData
            ((ThermalRocketSubModule *)this_00,*(double *)&this->ThermalRocket,
             *(double *)(iVar1 + 0x98),
             *(Material **)
              &(this->ThermalRocket).GetGasExpansionPlume_MemoizedValue.Data.MassFlowRate_kg__s,
             pDVar3);
  *(uint32_t *)&local_24 = (uint32_t)(uintptr_t)(&vftable_15);
  if (local_20 != (void *)0x0) {
    port_op_delete(local_20);
  }
  uVar7 = 1;
  (*(uint64_t*)((char*)&(local_14)+8)) =
       TurbopumpSubModule__GetMassFlowRate_kg__s((TurbopumpSubModule *)&this[1]._pad_0x48_18);
  uVar5 = (undefined4)(*(uint64_t*)((char*)&(local_14)+8));
  uVar6 = (undefined4)((ulonglong)(*(uint64_t*)((char*)&(local_14)+8)) >> 0x20);
  (*(uint32_t*)&(local_1c)) = (this->ThermalRocket)._pad_0x0_0;
  (*(uint32_t*)((char*)&(local_1c)+4)) = (this->ThermalRocket)._pad_0x4_1;
  (*(uint64_t*)((char*)&(local_14)+8)) = ThermalRocketSubModule__GetChamberRadius_m((ThermalRocketSubModule *)this_00);
  this_01 = &(this->ThermalRocket)._pad_0x8_2;
  CVar2.Height = SUB84(local_1c,0);
  CVar2.Radius = (double)(*(uint64_t*)((char*)&(local_14)+8));
  (*(uint32_t *)((char *)&(CVar2.Height) + 4)) = (int)((ulonglong)local_1c >> 0x20);
  NuclearReactorSubModule__PassThroughCachedData
            ((NuclearReactorSubModule *)this_01,CVar2,(double)CONCAT44(uVar6,uVar5),(bool)uVar7);
  NuclearReactorSubModule__PassThroughCachedData2
            ((NuclearReactorSubModule *)this_01,
             *(double *)
              (*(int *)&(this->ThermalRocket).GetGasExpansionPlume_MemoizedValue.Data.
                        MassFlowRate_kg__s + 0x98));
  iVar1 = *(int *)&(this->ThermalRocket).GetGasExpansionPlume_MemoizedValue.Data.MassFlowRate_kg__s;
  *(uint32_t *)&local_1c = NuclearReactorSubModule__GetThermalHeatGenerated_W((NuclearReactorSubModule *)this_01);
  dVar4 = ThermalRocketSubModule__GetMaxMassFlowRate_kg__s
                    ((ThermalRocketSubModule *)&(this->ThermalRocket).Injector.PumpRadius_m);
  *(uint32_t *)&local_1c = local_1c / (dVar4 * *(double *)(iVar1 + 0x90));
  dVar4 = NuclearReactorSubModule__GetAmbientCoolantTemperature_K
                    ((NuclearReactorSubModule *)this_01);
  ThermalRocketSubModule__PassThroughCachedData2
            ((ThermalRocketSubModule *)&(this->ThermalRocket).Injector.PumpRadius_m,dVar4 + local_1c
            );
  iVar1 = *(int *)&(this->ThermalRocket).GetGasExpansionPlume_MemoizedValue.Data.MassFlowRate_kg__s;
  *(uint32_t *)&local_1c = NuclearReactorSubModule__GetThermalHeatGenerated_W((NuclearReactorSubModule *)this_01);
  dVar4 = ThermalRocketSubModule__GetMaxMassFlowRate_kg__s
                    ((ThermalRocketSubModule *)&(this->ThermalRocket).Injector.PumpRadius_m);
  *(uint32_t *)&local_1c = local_1c / (dVar4 * *(double *)(iVar1 + 0x90));
  dVar4 = NuclearReactorSubModule__GetAmbientCoolantTemperature_K
                    ((NuclearReactorSubModule *)this_01);
  *(uint32_t *)&local_1c = dVar4 + local_1c;
  this_02 = *(Material **)
             &(this->ThermalRocket).GetGasExpansionPlume_MemoizedValue.Data.MassFlowRate_kg__s;
  dVar4 = ThermalRocketSubModule__GetChamberPressure_Pa((ThermalRocketSubModule *)this_00);
  Material__GetFinalDissociationProducts
            (this_02,(Darray_L_MaterialConstituent_G_ *)local_14,
             (double)CONCAT44(SUB84(dVar4,0),(int)((ulonglong)local_1c >> 0x20)),
             (double)CONCAT44(pppuVar8,(int)((ulonglong)dVar4 >> 0x20)));
  ThermalRocketSubModule__PassThroughCachedData3
            ((ThermalRocketSubModule *)this_00,(Darray_L_MaterialConstituent_G_ *)local_14);
  (*(uint32_t*)&(local_14)) = (uint32_t)(uintptr_t)(&vftable_15);
  if ((MaterialConstituent *)(*(uint32_t*)((char*)&(local_14)+4)) != (MaterialConstituent *)0x0) {
    port_op_delete((void *)(*(uint32_t*)((char*)&(local_14)+4)));
  }
  return;
}

//==== 005b78e0 GetReflectionInfo_005b78e0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   NuclearThermalRocketModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall
NuclearThermalRocketModule__GetReflectionInfo(NuclearThermalRocketModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_1b176a36__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_1b176a36__thread_safe_static_guard_0__);
    if ( cde_l2_1b176a36__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_23648004_ReflectionInfo) = &vftable_196;
      _Init_thread_footer(& cde_l2_1b176a36__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_23648004_ReflectionInfo;
}





//==== 005b78f0 scalar_deleting_destructor_005b78f0 ====

/* public: virtual void * __thiscall NuclearThermalRocketModule:: 0 scalardeletingdestructor(unsigned int) */

void * 
NuclearThermalRocketModule___scalar_deleting_destructor
          (NuclearThermalRocketModule *this,uint param_1)

{
  void *pvVar1;
  
  ThermalRocketSubModule___ThermalRocketSubModule((ThermalRocketSubModule *)&(this->ThermalRocket).Injector.PumpRadius_m);
  pvVar1 = (void *)(this->ThermalRocket).ThermalRocketSubModuleMemoizationHandlerInstance.
                   ResetFunctions.Capacity;
  (this->ThermalRocket).ThermalRocketSubModuleMemoizationHandlerInstance.ResetFunctions.Size =
       (int)&vftable_142;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  (this->ThermalRocket).ThermalRocketSubModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0
  ;
  (this->ThermalRocket).ThermalRocketSubModuleMemoizationHandlerInstance.ResetFunctions.Size =
       (int)&vftable;
  (this->ThermalRocket)._pad_0x8_2 = (int)&vftable_5;
  pvVar1 = (void *)(this->ThermalRocket)._pad_0xc_3;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->ThermalRocket)._pad_0xc_3 = 0;
  }
  EngineModule___EngineModule((EngineModule *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x3c0);
  }
  return this;
}

//==== 005b7980 GetTypeName_005b7980 ====


/* public: virtual class util__Str_L_char_G_ 
   NuclearThermalRocketModule__ReflectionInfoStruct_class_NuclearThermalRocketModule___GetTypeName(void)const  */

Str_L_char_G_ * 
NuclearThermalRocketModule__ReflectionInfoStruct_class_NuclearThermalRocketModule___GetTypeName
          (ReflectionInfoStruct_L_class_NuclearThermalRocketModule_G_ *this,
          Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"NuclearThermalRocketModule");
  return __return_storage_ptr__;
}





//==== 005b79a0 GetMembers_005b79a0 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   NuclearThermalRocketModule__ReflectionInfoStruct_class_NuclearThermalRocketModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
NuclearThermalRocketModule__ReflectionInfoStruct_class_NuclearThermalRocketModule___GetMembers
          (ReflectionInfoStruct_L_class_NuclearThermalRocketModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_ba8b35a5__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_ba8b35a5__thread_safe_static_guard_0__),
      cde_l2_ba8b35a5__thread_safe_static_guard_0__ == -1)) {
     cde_l2_57555ab6_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_ba8b35a5__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_57555ab6_Count);
  iVar3 = 0;
  if (0 <  cde_l2_57555ab6_Count) {
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
    } while (iVar3 <  cde_l2_57555ab6_Count);
  }
  return in_stack_00000004;
}





//==== 005b7ae0 GetMember_005b7ae0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   NuclearThermalRocketModule__ReflectionInfoStruct_class_NuclearThermalRocketModule___GetMember(class util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
NuclearThermalRocketModule__ReflectionInfoStruct_class_NuclearThermalRocketModule___GetMember
          (ReflectionInfoStruct_L_class_NuclearThermalRocketModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_a1a2aed4__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_a1a2aed4__thread_safe_static_guard_0__),
      cde_l2_a1a2aed4__thread_safe_static_guard_0__ == -1)) {
     cde_l2_04107e0f_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_a1a2aed4__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_04107e0f_Count) {
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
LAB_005b7b6d:
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
          if (cVar3 == '\0') goto LAB_005b7b6d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_04107e0f_Count);
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





//==== 005b7c80 GetFactory_005b7c80 ====


/* public: virtual class util__Reflectable * (__cdecl*
   NuclearThermalRocketModule__ReflectionInfoStruct_class_NuclearThermalRocketModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall NuclearThermalRocketModule__ReflectionInfoStruct_class_NuclearThermalRocketModule___GetFactory
          (ReflectionInfoStruct_L_class_NuclearThermalRocketModule_G_ *this)

{
  return StaticFactory;
}





//==== 005b7c90 GenerateTextures_005b7c90 ====

/* public: virtual void __thiscall NuclearThermalRocketCompartment__GenerateTextures(void) */

void __thiscall
NuclearThermalRocketCompartment__GenerateTextures(NuclearThermalRocketCompartment *this)

{
  EngineModule *this_00;
  ReferenceController *this_01;
  bool bVar1;
  int iVar2;
  Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G_ *pDVar3;
  int iVar4;
  ReferenceControllerRegistry *this_02;
  SharedPtr_L_ArmorTextureHandler_G_ *pSVar5;
  undefined4 *puVar6;
  int *this_03;
  ArmorTextureHandler *this_04;
  Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G_ local_1c;
  int *local_c;
  ReferenceController *local_8;
  
  EngineCompartment__GenerateTextures((EngineCompartment *)this);
  this_00 = (EngineModule *)this->_pad_0x38_14;
  iVar2 = EngineModule__GetAttachmentCount(this_00);
  pDVar3 = ThermalRocketSubModule__GenerateTextures
                     ((ThermalRocketSubModule *)
                      &this_00[2].Gimbal.Data.MomentumWheels.CachedRadius_m,&local_1c,iVar2);
  this_03 = &this->_pad_0x4c_19;
  *(uint32_t *)&local_c = (uint32_t)(uintptr_t)(this_03);
  if (this->_pad_0x54_21 == 0) {
    util__Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G___op_assign
              ((Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G_ *)this_03,
               (Darray_L_class_util__SharedPtr_L_class_ArmorTextureHandler_G___G_ *)pDVar3);
  }
  else {
    iVar2 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
    if (iVar2 != 0) {
      iVar2 = this->_pad_0x54_21;
      iVar4 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
      local_8 = (ReferenceController *)(iVar4 + this->_pad_0x54_21);
      util__Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G___SetSize
                ((Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G_ *)this_03,(int *)&local_8);
      util__Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G___CheckSize
                ((Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G_ *)this_03,iVar2);
      pSVar5 = pDVar3->Data;
      puVar6 = (undefined4 *)(this->_pad_0x50_20 + iVar2 * 8);
      if (puVar6 != (undefined4 *)(this->_pad_0x50_20 + this->_pad_0x54_21 * 8)) {
        do {
          this_04 = (ArmorTextureHandler *)*puVar6;
          local_8 = (ReferenceController *)puVar6[1];
          *puVar6 = (undefined4)(uintptr_t)(pSVar5->Pointer);
          this_01 = pSVar5->Controller;
          puVar6[1] = (undefined4)(uintptr_t)(this_01);
          if (this_01 != (ReferenceController *)0x0) {
            util__ReferenceController__AddStrongReference(this_01);
          }
          if ((local_8 != (ReferenceController *)0x0) &&
             (bVar1 = util__ReferenceController__ReleaseStrongReference(local_8), bVar1)) {
            if (this_04 != (ArmorTextureHandler *)0x0) {
              ArmorTextureHandler___scalar_deleting_destructor(this_04,1);
            }
            this_02 = util__ReferenceControllerRegistry__Get();
            util__ReferenceControllerRegistry__PointerWasDestroyed(this_02,this_04);
          }
          puVar6 = puVar6 + 2;
          pSVar5 = pSVar5 + 1;
        } while (puVar6 != (undefined4 *)(local_c[1] + local_c[2] * 8));
      }
    }
  }
  local_1c._pad_0x0_0 = (int)&vftable_91;
  if (local_1c.Data != (SharedPtr_L_ArmorTextureHandler_G_ *)0x0) {
    util__SharedPtr_L_ArmorTextureHandler_G_____vector_deleting_destructor_(local_1c.Data,3);
  }
  return;
}

//==== 005b7f50 Render_005b7f50 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void  ModuleDiagram_class_NuclearThermalRocketModule___Render(void)const  */

void 
ModuleDiagram_class_NuclearThermalRocketModule___Render
          (ModuleDiagram_L_class_NuclearThermalRocketModule_G_ *this)

{
  undefined8 stack0xfffffffc;
  Manager *this_00;
  int iVar1;
  NormalShader *pNVar2;
  CoreUITheme *pCVar3;
  Font *pFVar4;
  Vec2_L_int_G_ VVar5;
  Maybe_L_struct_TurretSubModule_G_ *pMVar6;
  int iVar7;
  int iVar8;
  ShaderStack SStack_9;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pNVar2 = NormalShader__GetStatic();
  Graphics__ShaderStack__ShaderStack(&SStack_9,(Shader *)pNVar2);
  this_00 = *(Manager **)(this + 8);
  UIWidget__GetTrueSize((UIWidget *)this,&VVar5);
  iVar1 = *(int *)(this + 0x168);
  iVar8 = ((int *)VVar5.X)[1];
  iVar7 = *(int *)VVar5.X;
  pMVar6 = (Maybe_L_struct_TurretSubModule_G_ *)(iVar1 + 0x70);
  pCVar3 = (CoreUITheme *)(uintptr_t)(Manager__GetTheme(this_00));
  pFVar4 = ThemeFont__Get((ThemeFont *)&(pCVar3->MainFont).FontUsed.CharInfo[1].BitmapSize.Y);
  VVar5.Y = iVar8;
  VVar5.X = iVar7;
  ThermalRocketSubModule__RenderUIDiagram
            ((ThermalRocketSubModule *)(iVar1 + 0x280),pFVar4,pMVar6,VVar5);
  Graphics__ShaderStack___ShaderStack(&SStack_9);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 005b7fd0 StaticFactory_005b7fd0 ====

/* public: static class util__Reflectable * __cdecl
   NuclearThermalRocketModule__ReflectionInfoStruct_class_NuclearThermalRocketModule___StaticFactory(void) */

Reflectable * __cdecl
NuclearThermalRocketModule__ReflectionInfoStruct_class_NuclearThermalRocketModule___StaticFactory__o2(void)

{
  EngineModule *this;
  
  this = (EngineModule *)(uintptr_t)(port_op_new(0x3c0));
  if (this != (EngineModule *)0x0) {
    memset(this,0,0x3c0);
    EngineModule__EngineModule(this);
    this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__9;
    this->_pad_0x34_13 = (int)&vftable_for_util__RTTIBaseClass__9;
    NuclearReactorSubModule__NuclearReactorSubModule
              ((NuclearReactorSubModule *)&this[1].Gimbal.Data.CachedObjectMass_kg);
    ThermalRocketSubModule__ThermalRocketSubModule
              ((ThermalRocketSubModule *)&this[2].Gimbal.Data.MomentumWheels.CachedRadius_m);
    return (Reflectable *)this;
  }
  return (Reflectable *)0x0;
}

//==== 005b8030 StaticGetMemberByIndex_005b8030 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   NuclearThermalRocketModule__ReflectionInfoStruct_class_NuclearThermalRocketModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
NuclearThermalRocketModule__ReflectionInfoStruct_class_NuclearThermalRocketModule___StaticGetMemberByIndex(ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_8dff904f__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_8dff904f__thread_safe_static_guard_0__);
    if ( cde_l2_8dff904f__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_dea4a929_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096a524 = 0;
      _DAT_0096a528 = 0;
      _DAT_0096a52c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a530,"Unused");
      _DAT_0096a53c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a540,"SteamWorkshopID");
      _DAT_0096a54c = 6;
      _DAT_0096a550 = 0x10;
      _DAT_0096a554 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a558,"AStr");
      _DAT_0096a564 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a568,"Description");
      _DAT_0096a574 = 6;
      _DAT_0096a578 = 0x20;
      _DAT_0096a57c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a580,"AStr");
      _DAT_0096a58c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a590,"UsesCustomName");
      _DAT_0096a59c = 1;
      _DAT_0096a5a0 = 0x68;
      _DAT_0096a5a4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a5a8,"bool");
      _DAT_0096a5b4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a5b8,"ReactorCoreHeight_m");
      _DAT_0096a5c4 = 4;
      _DAT_0096a5c8 = 0x1b0;
      _DAT_0096a5cc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a5d0,"double");
      _DAT_0096a5dc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a5e0,"NuclearReactor");
      _DAT_0096a5ec = 10;
      _DAT_0096a5f0 = 0x1b8;
      _DAT_0096a5f4 = 200;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a5f8,"NuclearReactorSubModule");
      _DAT_0096a604 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a608,"ThermalRocket");
      _DAT_0096a614 = 10;
      _DAT_0096a618 = 0x280;
      _DAT_0096a61c = 0x140;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a620,"ThermalRocketSubModule");
      _DAT_0096a62c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a630,"Gimbal");
      _DAT_0096a63c = 10;
      _DAT_0096a640 = 0x70;
      _DAT_0096a644 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a648,"TurretSubModule");
      _DAT_0096a654 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a658,"GimbalAngle_degrees");
      _DAT_0096a664 = 4;
      _DAT_0096a668 = 0x178;
      _DAT_0096a66c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a670,"double");
      _DAT_0096a67c = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_NuclearThermalRocketModule__ReflectionInfoStruct_class_NuclearThermalRocketModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_8dff904f__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_dea4a929_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_0096a524 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_0096a528 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0096a52c + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_0096a530 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0096a53c)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0096a53d)[iVar1];
  return __return_storage_ptr__;
}





//==== 005b8340 StaticGetMemberCount_005b8340 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl NuclearThermalRocketModule__ReflectionInfoStruct_class_NuclearThermalRocketModule___StaticGetMemberCount(void) */

int __cdecl
NuclearThermalRocketModule__ReflectionInfoStruct_class_NuclearThermalRocketModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_d741cb11__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_d741cb11__thread_safe_static_guard_0__);
    if ( cde_l2_d741cb11__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_a1f61913_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096a3b4 = 0;
      _DAT_0096a3b8 = 0;
      _DAT_0096a3bc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a3c0,"Unused");
      _DAT_0096a3cc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a3d0,"SteamWorkshopID");
      _DAT_0096a3dc = 6;
      _DAT_0096a3e0 = 0x10;
      _DAT_0096a3e4 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a3e8,"AStr");
      _DAT_0096a3f4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a3f8,"Description");
      _DAT_0096a404 = 6;
      _DAT_0096a408 = 0x20;
      _DAT_0096a40c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a410,"AStr");
      _DAT_0096a41c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a420,"UsesCustomName");
      _DAT_0096a42c = 1;
      _DAT_0096a430 = 0x68;
      _DAT_0096a434 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a438,"bool");
      _DAT_0096a444 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a448,"ReactorCoreHeight_m");
      _DAT_0096a454 = 4;
      _DAT_0096a458 = 0x1b0;
      _DAT_0096a45c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a460,"double");
      _DAT_0096a46c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a470,"NuclearReactor");
      _DAT_0096a47c = 10;
      _DAT_0096a480 = 0x1b8;
      _DAT_0096a484 = 200;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a488,"NuclearReactorSubModule");
      _DAT_0096a494 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a498,"ThermalRocket");
      _DAT_0096a4a4 = 10;
      _DAT_0096a4a8 = 0x280;
      _DAT_0096a4ac = 0x140;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a4b0,"ThermalRocketSubModule");
      _DAT_0096a4bc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a4c0,"Gimbal");
      _DAT_0096a4cc = 10;
      _DAT_0096a4d0 = 0x70;
      _DAT_0096a4d4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a4d8,"TurretSubModule");
      _DAT_0096a4e4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a4e8,"GimbalAngle_degrees");
      _DAT_0096a4f4 = 4;
      _DAT_0096a4f8 = 0x178;
      _DAT_0096a4fc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a500,"double");
      _DAT_0096a50c = 0;
      atexit( private__static_int_const___cdecl_NuclearThermalRocketModule__ReflectionInfoStruct_class_NuclearThermalRocketModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_d741cb11__thread_safe_static_guard_0__);
    }
  }
  return 9;
}





//==== 005b8610 StaticGetReflectionInfo_005b8610 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct NuclearThermalRocketModule__ReflectionInfoStruct_L_class_NuclearThermalRocketModule_G_ * __cdecl NuclearThermalRocketModule__StaticGetReflectionInfo(void)
    */

ReflectionInfoStruct_L_class_NuclearThermalRocketModule_G_ * __cdecl
NuclearThermalRocketModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_1b176a36__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_1b176a36__thread_safe_static_guard_0__);
    if ( cde_l2_1b176a36__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_23648004_ReflectionInfo) = &vftable_196;
      _Init_thread_footer(& cde_l2_1b176a36__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_23648004_ReflectionInfo;
}





//==== 005b8790 GetComposition_005b8790 ====


/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   TankEjectorSubModule__GetComposition(void)const  */

Darray_L_struct_MaterialConstituent_G_ * __thiscall
TankEjectorSubModule__GetComposition(TankEjectorSubModule *this)

{
  undefined8 stack0x00000004;
  undefined4 *puVar1;
  double dVar2;
  Material *pMVar3;
  Darray_L_struct_MaterialConstituent_G_ *this_00;
  bool bVar4;
  Darray_L_struct_MaterialConstituent_G_ *in_stack_00000004;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  this_00 = in_stack_00000004;
  in_stack_00000004 = (Darray_L_struct_MaterialConstituent_G_ *)0x1;
  *(undefined4 *)this_00 = 0;
  *(undefined4 *)(this_00 + 4) = 0;
  *(undefined4 *)(this_00 + 8) = 0;
  *(undefined4 *)(this_00 + 0xc) = 0;
  *(undefined ***)this_00 = (undefined **)(&vftable_75);
  *(undefined4 *)(this_00 + 4) = 0;
  *(undefined4 *)(this_00 + 8) = 0;
  *(undefined4 *)(this_00 + 0xc) = 0;
  pMVar3 = this->ExplosiveBoltComposition;
  dVar2 = this->ExplosiveBoltMass_kg;
  util__Darray_struct_MaterialConstituent___SetSize(this_00,(int *)&stack0x00000004);
  bVar4 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                    ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)this_00,0);
  if (bVar4) {
    uStack_c = SUB84(dVar2,0);
    uStack_8 = (undefined4)((ulonglong)dVar2 >> 0x20);
    puVar1 = (undefined4 *)(*(int *)(this_00 + 4) + -0x10 + *(int *)(this_00 + 8) * 0x10);
    *puVar1 = (undefined4)(uintptr_t)(pMVar3);
    puVar1[1] = uStack_10;
    puVar1[2] = uStack_c;
    puVar1[3] = uStack_8;
  }
  return this_00;
}





//==== 005b8810 GetPointerPropertyChoices_005b8810 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   TankEjectorSubModule__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
TankEjectorSubModule__GetPointerPropertyChoices
          (TankEjectorSubModule *this,ClassMember *param_1,SerializationManagerInterface *param_2)

{
  char *pcVar1;
  SerializationManagerInterface SVar2;
  int in_stack_0000000c;
  
  if (*(int *)&param_2[1] < 1) {
    SVar2 = *(SerializationManagerInterface *)&cde_l2_0b2b1c9f_NullString;
  }
  else {
    SVar2 = *param_2;
  }
  for (pcVar1 = "ExplosiveBoltComposition";
      (pcVar1[(int)(*(int *)&SVar2 + -0x927458)] != '\0' || (*pcVar1 != '\0')); pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)(*(int *)&SVar2 + -0x927458)] != *pcVar1) {
      (param_1->Name).Data =
           (char *)&vftable_85;
      (param_1->Name).Capacity = 0;
      (param_1->Name).Length = 0;
      *(undefined4 *)&param_1->Type = 0;
      return param_1;
    }
  }
  GetMaterials((DataParser *)param_1,in_stack_0000000c,true);
  return param_1;
}





//==== 005b8890 GetReflectionInfo_005b8890 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   TankEjectorSubModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall TankEjectorSubModule__GetReflectionInfo(TankEjectorSubModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_0adca564__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_0adca564__thread_safe_static_guard_0__);
    if ( cde_l2_0adca564__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_494fba2f_ReflectionInfo) = &vftable_200;
      _Init_thread_footer(& cde_l2_0adca564__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_494fba2f_ReflectionInfo;
}





//==== 005b88a0 GetTypeName_005b88a0 ====


/* public: virtual class util__Str_L_char_G_  TankEjectorSubModule__ReflectionInfoStruct_class_TankEjectorSubModule___GetTypeName(void)const  */

Str_L_char_G_ * 
TankEjectorSubModule__ReflectionInfoStruct_class_TankEjectorSubModule___GetTypeName
          (ReflectionInfoStruct_L_class_TankEjectorSubModule_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"TankEjectorSubModule");
  return __return_storage_ptr__;
}





//==== 005b88c0 GetMembers_005b88c0 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   TankEjectorSubModule__ReflectionInfoStruct_class_TankEjectorSubModule___GetMembers(void)const  */

undefined4 
TankEjectorSubModule__ReflectionInfoStruct_class_TankEjectorSubModule___GetMembers__o2
          (ReflectionInfoStruct_L_class_TankEjectorSubModule_G_ *this)

{
  undefined4 in_stack_00000004;
  
  StaticGetMembers();
}





//==== 005b88e0 GetMember_005b88e0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   TankEjectorSubModule__ReflectionInfoStruct_class_TankEjectorSubModule___GetMember(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
TankEjectorSubModule__ReflectionInfoStruct_class_TankEjectorSubModule___GetMember__o2
          (ReflectionInfoStruct_L_class_TankEjectorSubModule_G_ *this,Str_L_char_G_ *param_1)

{
  StaticGetMember(param_1);
  return param_1;
}





//==== 005b8900 GetFactory_005b8900 ====


/* public: virtual class util__Reflectable * (__cdecl*
   TankEjectorSubModule__ReflectionInfoStruct_class_TankEjectorSubModule___GetFactory(void)const
   )(void) */

_func_Reflectable_ptr * 
__thiscall TankEjectorSubModule__ReflectionInfoStruct_class_TankEjectorSubModule___GetFactory__o2
          (ReflectionInfoStruct_L_class_TankEjectorSubModule_G_ *this)

{
  return StaticFactory;
}





//==== 005b8910 GetClassID_005b8910 ====


/* public: virtual unsigned long __thiscall PropellantTankModule__GetClassID(void)const  */

ulong __thiscall PropellantTankModule__GetClassID(PropellantTankModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_b73f946f__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_b73f946f__thread_safe_static_guard_0__);
    if ( cde_l2_b73f946f__thread_safe_static_guard_0__ == -1) {
       cde_l2_8fc058cd_ID = util__GetHash("PropellantTankModule");
      _Init_thread_footer(& cde_l2_b73f946f__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_8fc058cd_ID;
}





//==== 005b90b0 GetIcon_005b90b0 ====

/* public: virtual void (__cdecl*__thiscall PropellantTankModule__GetIcon(void)const )(void) */

_func_void * __thiscall PropellantTankModule__GetIcon(PropellantTankModule *this)

{
  bool bVar1;
  code *pcVar2;
  
  if (((char)this[1]._pad_0x18_6 != '\0') && (0.0 < *(double *)&this[1]._pad_0x8_2)) {
    bVar1 = Material__IsAMonopropellant((Material *)(this->External).Data._pad_0x0_0);
    pcVar2 = (long long int (*)())(Icons__DropTank);
    if (bVar1) {
      pcVar2 = (long long int (*)())(Icons__ExplodingDropTank);
    }
    return (_func_void *)(pcVar2);
  }
  bVar1 = Material__IsAMonopropellant((Material *)(this->External).Data._pad_0x0_0);
  pcVar2 = (long long int (*)())(Icons__PropellantTank);
  if (bVar1) {
    pcVar2 = (long long int (*)())(Icons__ExplodingPropellantTank);
  }
  return (_func_void *)(pcVar2);
}

//==== 005b91c0 IsAttachingModule ====

/* public: virtual bool __thiscall PropellantTankModule__IsAttachingModule(void)const  */

bool __thiscall PropellantTankModule__IsAttachingModule(PropellantTankModule *this)

{
  return (bool)(char)this[1]._pad_0x18_6;
}

//==== 005b91d0 GetComposition_005b91d0 ====

/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   PropellantTankModule__GetComposition(void)const  */

Darray_L_MaterialComposition_G_ * __thiscall
PropellantTankModule__GetComposition
          (PropellantTankModule *this,Darray_L_MaterialComposition_G_ *__return_storage_ptr__)

{
  MaterialComposition *pMVar1;
  undefined8 uVar2;
  int iVar3;
  Material *pMVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  undefined4 uStack_38;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined8 local_14;
  double local_c;
  
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (MaterialComposition *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  Module__GetComposition((Module *)this,__return_storage_ptr__);
  iVar3 = __return_storage_ptr__->Size;
  pMVar4 = (Material *)(this->External).Data._pad_0x0_0;
  uVar2 = *(undefined8 *)&(this->External).Data._pad_0x8_2;
  *(uint32_t *)&local_14 = (double)CONCAT44(iVar3 + 1,(undefined4)local_14);
  util__Darray_L_MaterialConstituent_G___SetSize
            ((Darray_L_MaterialConstituent_G_ *)__return_storage_ptr__,(int *)((int)&local_14 + 4));
  bVar7 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                    ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)__return_storage_ptr__,iVar3);
  if (bVar7) {
    uStack_1c = (undefined4)uVar2;
    uStack_18 = (undefined4)((ulonglong)uVar2 >> 0x20);
    pMVar1 = __return_storage_ptr__->Data + __return_storage_ptr__->Size + -1;
    pMVar1->Type = pMVar4;
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar1) + 0x4)) = uStack_20;
    *(undefined4 *)&pMVar1->Mass_kg = uStack_1c;
    *(undefined4 *)((int)&pMVar1->Mass_kg + 4) = uStack_18;
  }
  dVar8 = ((double)((this->External).Data._pad_0x8_2 /
          *(double *)((this->External).Data._pad_0x0_0 + 0x30)) /
          ((this->External).Data.ExplosiveBoltMass_kg * 3.141592653589793));
  libm_sse2_pow_precise(0.0,0.0);
  *(uint32_t *)&local_c = dVar8 * 2101400.0 * 2.1;
  *(uint32_t *)&local_14 = dVar8;
  dVar8 = Material__GetYieldStrength_Pa((Material *)(this->External).Data._pad_0x4_1);
  *(uint32_t *)&local_c = local_c / (dVar8 * 2.0);
  pMVar4 = (Material *)(this->External).Data._pad_0x4_1;
  local_14 = local_14 * local_14 * 3.141592653589793 *
             (*(double *)&(this->External).Data.ExplosiveBoltComposition + local_c) * 0.25 *
             pMVar4->Density_kg__m3;
  dVar8 = (*(double *)&(this->External).Data._pad_0x8_2 /
          *(double *)((this->External).Data._pad_0x0_0 + 0x30)) /
          ((this->External).Data.ExplosiveBoltMass_kg * 3.141592653589793);
  libm_sse2_pow_precise(0.0,0.0);
  *(uint32_t *)&local_c = dVar8 * 2101400.0 * 2.1;
  dVar9 = Material__GetYieldStrength_Pa(pMVar4);
  dVar5 = *(double *)&(this->External).Data._pad_0x8_2 /
          *(double *)((this->External).Data._pad_0x0_0 + 0x30);
  dVar6 = local_c / (dVar9 * 2.0);
  dVar9 = dVar5 / ((this->External).Data.ExplosiveBoltMass_kg * 3.141592653589793);
  *(uint32_t *)&local_c = dVar5;
  libm_sse2_pow_precise(0.0,0.0);
  pMVar4 = (Material *)(this->External).Data._pad_0x4_1;
  iVar3 = __return_storage_ptr__->Size;
  local_14 = local_14 * local_14 * 3.141592653589793 *
             (*(double *)&(this->External).Data.ExplosiveBoltComposition + local_c) * 0.25 *
             pMVar4->Density_kg__m3;
  *(uint32_t *)&local_14 = (double)CONCAT44(iVar3 + 1,(undefined4)local_14);
  util__Darray_L_MaterialConstituent_G___SetSize
            ((Darray_L_MaterialConstituent_G_ *)__return_storage_ptr__,(int *)((int)&local_14 + 4));
  bVar7 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                    ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)__return_storage_ptr__,iVar3);
  if (bVar7) {
    pMVar1 = __return_storage_ptr__->Data + __return_storage_ptr__->Size + -1;
    pMVar1->Type = pMVar4;
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar1) + 0x4)) = uStack_38;
    pMVar1->Mass_kg = dVar8;
  }
  return __return_storage_ptr__;
}

//==== 005b9430 GetStartingDryMass_kg ====

/* public: virtual double __thiscall PropellantTankModule__GetStartingDryMass_kg(void)const  */

double __thiscall PropellantTankModule__GetStartingDryMass_kg(PropellantTankModule *this)

{
  double dVar1;
  double dVar2;
  Material *this_00;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar3 = (*(double *)&(this->External).Data._pad_0x8_2 /
          *(double *)((this->External).Data._pad_0x0_0 + 0x30)) /
          ((this->External).Data.ExplosiveBoltMass_kg * 3.141592653589793);
  libm_sse2_pow_precise(0.0,0.0);
  dVar7 = Material__GetYieldStrength_Pa((Material *)(this->External).Data._pad_0x4_1);
  this_00 = (Material *)(this->External).Data._pad_0x4_1;
  dVar1 = *(double *)&(this->External).Data.ExplosiveBoltComposition;
  dVar2 = this_00->Density_kg__m3;
  
  dVar3 = (*(double *)&(this->External).Data._pad_0x8_2 /
          *(double *)((this->External).Data._pad_0x0_0 + 0x30)) /
          ((this->External).Data.ExplosiveBoltMass_kg * 3.141592653589793);
  libm_sse2_pow_precise(0.0,0.0);
  dVar8 = Material__GetYieldStrength_Pa(this_00);
  dVar5 = *(double *)&(this->External).Data._pad_0x8_2 /
          *(double *)((this->External).Data._pad_0x0_0 + 0x30);
  dVar8 = (dVar4 * 2101400.0 * 2.1) / (dVar8 * 2.0);
  dVar6 = dVar5 / ((this->External).Data.ExplosiveBoltMass_kg * 3.141592653589793);
  libm_sse2_pow_precise(0.0,0.0);
  return ((dVar5 - dVar6 * dVar6 * dVar6 * 4.1887902047863905 * 0.5) /
          (dVar6 * dVar6 * 3.141592653589793) + dVar6 * 0.5 + dVar6 * 0.5) *
         ((dVar8 + dVar8) / 2.1 + *(double *)&(this->External).Data.ExplosiveBoltComposition) *
         dVar4 * 6.283185307179586 * *(double *)((this->External).Data._pad_0x4_1 + 0x30) +
         dVar3 * dVar3 * 3.141592653589793 * ((dVar3 * 2101400.0 * 2.1) / (dVar7 * 2.0) + dVar1) *
         0.25 * dVar2;
}

//==== 005b9600 GetHullLength_m_005b9600 ====


/* public: virtual double __thiscall ExplosiveModule__GetHullLength_m(void)const  */

double __thiscall ExplosiveModule__GetHullLength_m(ExplosiveModule *this)

{
  return *(double *)&this->ShrapnelComposition;
}





//==== 005b9610 GetHullRadius_m_005b9610 ====

/* public: virtual double __thiscall PropellantTankModule__GetHullRadius_m(void)const  */

double __thiscall PropellantTankModule__GetHullRadius_m(PropellantTankModule *this)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (*(double *)&(this->External).Data._pad_0x8_2 /
          *(double *)((this->External).Data._pad_0x0_0 + 0x30)) /
          ((this->External).Data.ExplosiveBoltMass_kg * 3.141592653589793);
  libm_sse2_pow_precise(0.0,0.0);
  dVar2 = Material__GetYieldStrength_Pa((Material *)(this->External).Data._pad_0x4_1);
  dVar2 = (dVar1 * 2101400.0 * 2.1) / (dVar2 + dVar2);
  dVar2 = (dVar2 + dVar2) / 2.1 + *(double *)&(this->External).Data.ExplosiveBoltComposition;
  return dVar2 + dVar2 + dVar1;
}

//==== 005b96b0 GetHullLength_m_005b96b0 ====

/* public: virtual double __thiscall PropellantTankModule__GetHullLength_m(void)const  */

double __thiscall PropellantTankModule__GetHullLength_m(PropellantTankModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = *(double *)&(this->External).Data._pad_0x8_2 /
          *(double *)((this->External).Data._pad_0x0_0 + 0x30);
  dVar2 = dVar1 / ((this->External).Data.ExplosiveBoltMass_kg * 3.141592653589793);
  libm_sse2_pow_precise(0.0,0.0);
  dVar4 = Material__GetYieldStrength_Pa((Material *)(this->External).Data._pad_0x4_1);
  dVar4 = *(double *)&(this->External).Data.ExplosiveBoltComposition +
          (dVar2 * 2101400.0 * 2.1) / (dVar4 + dVar4);
  dVar3 = dVar2 * 0.5 + dVar2 * 0.5;
  return (dVar1 - dVar2 * dVar2 * dVar2 * 4.1887902047863905 * 0.5) /
         (dVar2 * dVar2 * 3.141592653589793) + dVar3 + dVar3 + dVar4 + dVar4;
}

//==== 005b97a0 GetStructuralMaterial_005b97a0 ====

/* public: virtual class Material const * __thiscall
   PropellantTankModule__GetStructuralMaterial(void)const  */

Material * __thiscall PropellantTankModule__GetStructuralMaterial(PropellantTankModule *this)

{
  return (Material *)(this->External).Data._pad_0x4_1;
}

//==== 005b97b0 GetStructuralThickness_m_005b97b0 ====

/* public: virtual double __thiscall PropellantTankModule__GetStructuralThickness_m(void)const  */

double __thiscall PropellantTankModule__GetStructuralThickness_m(PropellantTankModule *this)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (*(double *)&(this->External).Data._pad_0x8_2 /
          *(double *)((this->External).Data._pad_0x0_0 + 0x30)) /
          ((this->External).Data.ExplosiveBoltMass_kg * 3.141592653589793);
  libm_sse2_pow_precise(0.0,0.0);
  dVar2 = Material__GetYieldStrength_Pa((Material *)(this->External).Data._pad_0x4_1);
  dVar1 = (dVar1 * 2101400.0 * 2.1) / (dVar2 + dVar2);
  return (dVar1 + dVar1) / 2.1 + *(double *)&(this->External).Data.ExplosiveBoltComposition;
}

//==== 005b9840 GetCubicBoundingBox_m_005b9840 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual struct util__AABB_L_structutil__Vec3_L_double_G__G_ __thiscall
   PropellantTankModule__GetCubicBoundingBox_m(void)const  */

AABB_L_util__Vec3_L_double_G___G_ * __thiscall
PropellantTankModule__GetCubicBoundingBox_m
          (PropellantTankModule *this,AABB_L_util__Vec3_L_double_G___G_ *__return_storage_ptr__)

{
  float10 fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if ((char)this[1]._pad_0x18_6 == '\0') {
    Module__GetCubicBoundingBox_m((Module *)this,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  fVar1 = (float10)(**(code **)(this->_pad_0x0_0 + 0xa4))();
  dVar3 = (double)fVar1;
  fVar1 = (float10)(**(code **)(this->_pad_0x0_0 + 0xa8))();
  dVar7 = (double)fVar1 * -0.5;
  dVar5 = (double)fVar1 * 0.5;
  dVar6 = dVar3 * 2.0;
  dVar2 = dVar7;
  if (dVar5 <= dVar7) {
    dVar2 = dVar5;
  }
  if (dVar7 <= dVar5) {
    dVar7 = dVar5;
  }
  dVar5 = 0.0;
  if (0.0 <= dVar6) {
    dVar5 = dVar6;
  }
  (__return_storage_ptr__->Lower).X = dVar2;
  dVar2 = -dVar3;
  if (dVar3 <= -dVar3) {
    dVar2 = dVar3;
  }
  dVar4 = -dVar3;
  if (-dVar3 <= dVar3) {
    dVar4 = dVar3;
  }
  (__return_storage_ptr__->Lower).Y = dVar2;
  dVar3 = 0.0;
  if (dVar6 <= 0.0) {
    dVar3 = dVar6;
  }
  (__return_storage_ptr__->Lower).Z = dVar3;
  (__return_storage_ptr__->Upper).X = dVar7;
  (__return_storage_ptr__->Upper).Y = dVar4;
  (__return_storage_ptr__->Upper).Z = dVar5;
  return __return_storage_ptr__;
}

//==== 005b9920 GetArmorCarvingRadius_m_005b9920 ====


/* public: virtual class util__Maybe_L_double_G_ __thiscall
   RadiatorModule__GetArmorCarvingRadius_m(void)const  */

Maybe_L_double_G_ * __thiscall
RadiatorModule__GetArmorCarvingRadius_m(RadiatorModule *this,Maybe_L_double_G_ *__return_storage_ptr__)

{
  __return_storage_ptr__->Data = 0.0;
  __return_storage_ptr__->IsValidData = true;
  return __return_storage_ptr__;
}





//==== 005b9940 IsTacticallyImportant ====

/* public: virtual bool __thiscall PropellantTankModule__IsTacticallyImportant(bool)const  */

bool __thiscall PropellantTankModule__IsTacticallyImportant(PropellantTankModule *this,bool param_1)

{
  if (((char)this[1]._pad_0x18_6 != '\0') && (0.0 < *(double *)&this[1]._pad_0x8_2)) {
    return true;
  }
  return false;
}

//==== 005b9970 GetRadiationShielding_005b9970 ====

/* public: virtual struct util__tuple2_L_classMaterial_P_Cstructutil__Cylinder_L_double_G__G_ __thiscall
   PropellantTankModule__GetRadiationShielding(void)const  */

int * __thiscall PropellantTankModule__GetRadiationShielding(PropellantTankModule *this)

{
  float10 fVar1;
  double dVar2;
  double dVar3;
  int *in_stack_00000004;
  
  dVar2 = (*(double *)&(this->External).Data._pad_0x8_2 /
          *(double *)((this->External).Data._pad_0x0_0 + 0x30)) /
          ((this->External).Data.ExplosiveBoltMass_kg * 3.141592653589793);
  libm_sse2_pow_precise(0.0,0.0);
  dVar3 = Material__GetYieldStrength_Pa((Material *)(this->External).Data._pad_0x4_1);
  dVar2 = *(double *)&(this->External).Data.ExplosiveBoltComposition +
          (dVar2 * 2101400.0 * 2.1) / (dVar3 + dVar3);
  fVar1 = (float10)(**(code **)(this->_pad_0x0_0 + 0xa4))();
  *in_stack_00000004 = (this->External).Data._pad_0x4_1;
  *(double *)(in_stack_00000004 + 2) = (double)fVar1;
  *(double *)(in_stack_00000004 + 4) = dVar2 + dVar2;
}

//==== 005b9a30 GetModuleAmmoExplosion_005b9a30 ====

/* public: virtual struct AmmoExplosion 
   PropellantTankModule__GetModuleAmmoExplosion(void)const  */

AmmoExplosion * 
PropellantTankModule__GetModuleAmmoExplosion
          (PropellantTankModule *this,AmmoExplosion *__return_storage_ptr__)

{
  bool bVar1;
  Darray_L_MaterialConstituent_G_ *pDVar2;
  double dVar3;
  Darray_L_MaterialConstituent_G_ local_14;
  
  (__return_storage_ptr__->GasComposition)._pad_0x0_0 =
       (int)&vftable_15;
  (__return_storage_ptr__->GasComposition).Data = (MaterialConstituent *)0x0;
  (__return_storage_ptr__->GasComposition).Size = 0;
  (__return_storage_ptr__->GasComposition).Capacity = 0;
  *(undefined4 *)&__return_storage_ptr__->Mass_kg = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->Mass_kg + 4) = 0;
  *(undefined4 *)&__return_storage_ptr__->Temperature_K = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->Temperature_K + 4) = 0;
  bVar1 = Material__IsAMonopropellant((Material *)(this->External).Data._pad_0x0_0);
  if (bVar1) {
    pDVar2 = (Darray_L_MaterialConstituent_G_ *)(uintptr_t)(Material__GetDecompositionProductsByMassPercent
                       ((Material *)(this->External).Data._pad_0x0_0,&local_14));
    util__Darray_L_MaterialConstituent_G___op_assign
              (&__return_storage_ptr__->GasComposition,(Darray_L_struct_MaterialConstituent_G_ *)pDVar2)
    ;
    local_14._pad_0x0_0 = (int)&vftable_15;
    if (local_14.Data != (MaterialConstituent *)0x0) {
      port_op_delete(local_14.Data);
    }
    __return_storage_ptr__->Mass_kg = (double)((this->External).Data._pad_0x8_2);
    dVar3 = Material__GetAdiabaticFlameTemperature_K((Material *)(this->External).Data._pad_0x0_0);
    __return_storage_ptr__->Temperature_K = dVar3;
  }
  return __return_storage_ptr__;
}

//==== 005b9d90 GetOneLineStatusBarPercentages ====

/* public: virtual class util__Maybe_L_structutil__Range_L_double_G__G_ 
   PropellantTankModule__GetOneLineStatusBarPercentages(class util__Darray_L_class_util__WeakPtr_L_structModuleCompartment_G__G_ const &)const  */

void 
PropellantTankModule__GetOneLineStatusBarPercentages
          (PropellantTankModule *this,
          Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *param_1)

{
  undefined8 stack0xfffffffc;
  double dVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *in_stack_00000008;
  double local_28;
  undefined4 *local_1c [4];
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar3 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
  if (iVar3 != 0) {
    util__MapPtrCast_struct_PropellantTankCompartment_struct_ModuleCompartment__o2
              ((Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)local_1c);
    *(uint32_t *)&local_c = 0;
    *(uint32_t *)&local_28 = 0.0;
    iVar3 = (*(code *)local_1c[0][3])();
    if (local_c < iVar3) {
      do {
        piVar4 = (int *)(*(code *)*local_1c[0])(&local_c);
        if (((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) &&
           (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]),
           !bVar2)) {
          *piVar4 = 0;
        }
        *(uint32_t *)&local_28 = *(double *)(*piVar4 + 0x108) + local_28;
        *(uint32_t *)&local_c = local_c + 1;
        iVar3 = (*(code *)local_1c[0][3])();
      } while (local_c < iVar3);
    }
    iVar3 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
    dVar1 = *(double *)&(this->External).Data._pad_0x8_2;
    *(char *)&(param_1[0x10]) = 0x1;
    *(uint64_t *)&local_28 = local_28 / (dVar1 * (double)iVar3);
    if (local_28 <= 0.0) {
      *(uint32_t *)&local_28 = 0.0;
    }
    if (1.0 <= local_28) {
      *(uint32_t *)&local_28 = 1.0;
    }
    *(double *)param_1 = local_28;
    *(double *)(param_1 + 8) = local_28;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_1c);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(char *)&(param_1[0x10]) = 0x0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

//==== 005b9eb0 GetStatuses_005b9eb0 ====

/* public: virtual class DesignStatusBuffer  PropellantTankModule__GetStatuses(class
   DataParser *)const  */

DesignStatusBuffer * 
PropellantTankModule__GetStatuses
          (PropellantTankModule *this,DesignStatusBuffer *__return_storage_ptr__,DataParser *param_1
          )

{
  int iVar1;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *pSVar4;
  Str_L_char_G_ *pSVar5;
  ModulePlacer *pMVar6;
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
  util__Str_char___Str_char(&local_3c,"PropellantTankPropellantTooHot");
  pSVar5 = &local_30;
  iVar1 = (this->External).Data._pad_0x0_0;
  pMVar6 = (ModulePlacer *)0x0;
  pSVar4 = &local_24;
  local_30.Data = (char *)0x0;
  pSVar3 = &local_18;
  local_30.Capacity = 0;
  pSVar2 = &local_3c;
  local_30.Length = 0;
  local_24.Data = (char *)0x0;
  local_24.Capacity = 0;
  local_24.Length = 0;
  local_18.Data = (char *)0x0;
  local_18.Capacity = 0;
  local_18.Length = 0;
  *(uint32_t *)&local_c = Material__GetSafeUseTemperature_K((Material *)(this->External).Data._pad_0x4_1);
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,local_c < *(double *)(iVar1 + 0x98),pSVar2,pSVar3,pSVar4,pSVar5,
             pMVar6);
  if (local_18.Data != (char *)0x0) {
    port_op_delete(local_18.Data);
    local_18.Data = (char *)0x0;
  }
  if (local_24.Data != (char *)0x0) {
    port_op_delete(local_24.Data);
    local_24.Data = (char *)0x0;
  }
  if (local_30.Data != (char *)0x0) {
    port_op_delete(local_30.Data);
    local_30.Data = (char *)0x0;
  }
  if (local_3c.Data != (char *)0x0) {
    port_op_delete(local_3c.Data);
  }
  return __return_storage_ptr__;
}

//==== 005b9fc0 GetInfoBoxes_005b9fc0 ====


/* public: virtual class util__Darray_L_structInfoBox_G_ __thiscall
   PropellantTankModule__GetInfoBoxes(void)const  */

void __thiscall PropellantTankModule__GetInfoBoxes(PropellantTankModule *this)

{
  undefined8 stack0xfffffffc;
  LocStr *pLVar1;
  Str_L_char_G_ *pSVar2;
  InfoBox *pIVar3;
  Darray_L_struct_InfoBox_G_ *in_stack_00000004;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcStack_e0;
  char *pcStack_cc;
  void *apvStack_ac [3];
  void *pvStack_a0;
  InfoBox IStack_94;
  void *apvStack_5c [3];
  Str_L_char_G_ SStack_50;
  Str_L_char_G_ SStack_44;
  void *apvStack_38 [3];
  void *pvStack_2c;
  Str_L_char_G_ SStack_20;
  Str_L_char_G_ SStack_14;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_InfoBox___Darray_struct_InfoBox(in_stack_00000004,1);
  util__Str_char___Str_char(&SStack_44,"InfoBox PropellantMassRatio Tooltip");
  SStack_20.Data = (char *)0x0;
  SStack_20.Capacity = 0;
  SStack_20.Length = 0;
  pcStack_cc = (char *)0x5ba031;
  pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_5c,&SStack_44,&SStack_20);
  pSVar2 = util__LocStr__operator__o3(pLVar1);
  util__Str_char___Str_char((Str_L_char_G_ *)&pcStack_cc,pSVar2);
  pcStack_e0 = (char *)0x0;
  pIVar3 = (InfoBox *)
           InfoBox__InfoBox(&IStack_94,Icons__MassRatio,this,(_func___cdecl_Str_L_char_G__void_ptr*)(util__DelegateFactory_class_PropellantTankModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_PropellantTankModule__GetMassRatio_void_const__0),0,0,0,0,(((_func___cdecl_Str_L_char_G__void_ptr *)cde_rsp_slot())),0,0,0,(Delegate_L_bool_G_){0},0);
  util__Darray_struct_InfoBox___Add(in_stack_00000004,pIVar3);
  if (IStack_94.Tooltip.Value.Data != (char *)0x0) {
    port_op_delete(IStack_94.Tooltip.Value.Data);
    IStack_94.Tooltip.Value.Data = (char *)0x0;
  }
  if (IStack_94.Info.Value.Data != (char *)0x0) {
    port_op_delete(IStack_94.Info.Value.Data);
    IStack_94.Info.Value.Data = (char *)0x0;
  }
  if (SStack_50.Data != (char *)0x0) {
    port_op_delete(SStack_50.Data);
    SStack_50.Data = (char *)0x0;
  }
  if (apvStack_5c[0] != (void *)0x0) {
    port_op_delete(apvStack_5c[0]);
    apvStack_5c[0] = (void *)0x0;
  }
  if (SStack_20.Data != (char *)0x0) {
    port_op_delete(SStack_20.Data);
    SStack_20.Data = (char *)0x0;
  }
  if (SStack_44.Data != (char *)0x0) {
    port_op_delete(SStack_44.Data);
  }
  util__Str_char___Str_char(&SStack_50,"InfoBox PropellantDetonation Tooltip");
  util__Str_char___Str_char(&SStack_44,"InfoBox PropellantDetonation");
  SStack_14.Data = (char *)0x0;
  SStack_14.Capacity = 0;
  SStack_14.Length = 0;
  pcStack_cc = (char *)0x5ba168;
  pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_38,&SStack_50,&SStack_14);
  pSVar2 = util__LocStr__operator__o3(pLVar1);
  util__Str_char___Str_char((Str_L_char_G_ *)&pcStack_cc,pSVar2);
  SStack_20.Data = (char *)0x0;
  SStack_20.Capacity = 0;
  SStack_20.Length = 0;
  pcStack_e0 = (char *)0x5ba1b2;
  pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_ac,&SStack_44,&SStack_20);
  pSVar2 = util__LocStr__operator__o3(pLVar1);
  uVar4 = 0;
  uVar5 = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)&pcStack_e0,pSVar2);
  pIVar3 = (InfoBox *)InfoBox__InfoBox(&IStack_94,(_func___cdecl_void *)(uintptr_t)(Icons__Explosion),(void*)(uVar4),(_func___cdecl_Str_L_char_G__void_ptr*)((_func___cdecl_Str_L_char_G__void_ptr*)(uVar5)),((Str_L_char_G_ *)&pcStack_e0)->Data,((Str_L_char_G_ *)&pcStack_e0)->Capacity,((Str_L_char_G_ *)&pcStack_e0)->Length,0,0,((Str_L_char_G_ *)&pcStack_cc)->Data,((Str_L_char_G_ *)&pcStack_cc)->Capacity,((Str_L_char_G_ *)&pcStack_cc)->Length,(Delegate_L_bool_G_){(void *)(uintptr_t)(this),(bool (*)(void *))(uintptr_t)(util__DelegateFactory_class_PropellantTankModule_bool___MethodCallerConst__public__bool___thiscall_PropellantTankModule__IsExplosionHazard_void_const__0)},0);
  util__Darray_struct_InfoBox___Add(in_stack_00000004,pIVar3);
  if (IStack_94.Tooltip.Value.Data != (char *)0x0) {
    port_op_delete(IStack_94.Tooltip.Value.Data);
    IStack_94.Tooltip.Value.Data = (char *)0x0;
  }
  if (IStack_94.Info.Value.Data != (char *)0x0) {
    port_op_delete(IStack_94.Info.Value.Data);
    IStack_94.Info.Value.Data = (char *)0x0;
  }
  if (pvStack_a0 != (void *)0x0) {
    port_op_delete(pvStack_a0);
    pvStack_a0 = (void *)0x0;
  }
  if (apvStack_ac[0] != (void *)0x0) {
    port_op_delete(apvStack_ac[0]);
    apvStack_ac[0] = (void *)0x0;
  }
  if (SStack_20.Data != (char *)0x0) {
    port_op_delete(SStack_20.Data);
    SStack_20.Data = (char *)0x0;
  }
  if (pvStack_2c != (void *)0x0) {
    port_op_delete(pvStack_2c);
    pvStack_2c = (void *)0x0;
  }
  if (apvStack_38[0] != (void *)0x0) {
    port_op_delete(apvStack_38[0]);
    apvStack_38[0] = (void *)0x0;
  }
  if (SStack_14.Data != (char *)0x0) {
    port_op_delete(SStack_14.Data);
    SStack_14.Data = (char *)0x0;
  }
  if (SStack_44.Data != (char *)0x0) {
    port_op_delete(SStack_44.Data);
    SStack_44.Data = (char *)0x0;
  }
  if (SStack_50.Data != (char *)0x0) {
    port_op_delete(SStack_50.Data);
  }
  util__Str_char___Str_char(&SStack_50,"InfoBox PropellantArmor Tooltip");
  SStack_14.Data = (char *)0x0;
  SStack_14.Capacity = 0;
  SStack_14.Length = 0;
  pcStack_cc = (char *)0x5ba321;
  pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_38,&SStack_50,&SStack_14);
  pSVar2 = util__LocStr__operator__o3(pLVar1);
  util__Str_char___Str_char((Str_L_char_G_ *)&pcStack_cc,pSVar2);
  pcStack_e0 = (char *)0x0;
  pIVar3 = (InfoBox *)
           InfoBox__InfoBox(&IStack_94,Icons__ArmorShield,this,(_func___cdecl_Str_L_char_G__void_ptr*)(util__DelegateFactory_class_PropellantTankModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_PropellantTankModule__GetArmorInfo_void_const__0),0,0,0,0,(((_func___cdecl_Str_L_char_G__void_ptr *)cde_rsp_slot())),0,0,0,(Delegate_L_bool_G_){0},0);
  util__Darray_struct_InfoBox___Add(in_stack_00000004,pIVar3);
  if (IStack_94.Tooltip.Value.Data != (char *)0x0) {
    port_op_delete(IStack_94.Tooltip.Value.Data);
    IStack_94.Tooltip.Value.Data = (char *)0x0;
  }
  if (IStack_94.Info.Value.Data != (char *)0x0) {
    port_op_delete(IStack_94.Info.Value.Data);
    IStack_94.Info.Value.Data = (char *)0x0;
  }
  if (pvStack_2c != (void *)0x0) {
    port_op_delete(pvStack_2c);
    pvStack_2c = (void *)0x0;
  }
  if (apvStack_38[0] != (void *)0x0) {
    port_op_delete(apvStack_38[0]);
    apvStack_38[0] = (void *)0x0;
  }
  if (SStack_14.Data != (char *)0x0) {
    port_op_delete(SStack_14.Data);
    SStack_14.Data = (char *)0x0;
  }
  if (SStack_50.Data != (char *)0x0) {
    port_op_delete(SStack_50.Data);
  }
  util__Str_char___Str_char(&SStack_50,"InfoBox PropellantEjection Tooltip");
  SStack_14.Data = (char *)0x0;
  SStack_14.Capacity = 0;
  SStack_14.Length = 0;
  pcStack_cc = (char *)0x5ba44b;
  pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_38,&SStack_50,&SStack_14);
  pSVar2 = util__LocStr__operator__o3(pLVar1);
  util__Str_char___Str_char((Str_L_char_G_ *)&pcStack_cc,pSVar2);
  pcStack_e0 = (char *)0x0;
  pIVar3 = (InfoBox *)
           InfoBox__InfoBox(&IStack_94,Icons__Expand,this,(_func___cdecl_Str_L_char_G__void_ptr*)(util__DelegateFactory_class_PropellantTankModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_PropellantTankModule__GetDetachInfo_void_const__0),0,0,0,0,(((_func___cdecl_Str_L_char_G__void_ptr *)cde_rsp_slot())),0,0,0,(Delegate_L_bool_G_){0},0);
  util__Darray_struct_InfoBox___Add(in_stack_00000004,pIVar3);
  if (IStack_94.Tooltip.Value.Data != (char *)0x0) {
    port_op_delete(IStack_94.Tooltip.Value.Data);
    IStack_94.Tooltip.Value.Data = (char *)0x0;
  }
  if (IStack_94.Info.Value.Data != (char *)0x0) {
    port_op_delete(IStack_94.Info.Value.Data);
    IStack_94.Info.Value.Data = (char *)0x0;
  }
  if (pvStack_2c != (void *)0x0) {
    port_op_delete(pvStack_2c);
    pvStack_2c = (void *)0x0;
  }
  if (apvStack_38[0] != (void *)0x0) {
    port_op_delete(apvStack_38[0]);
    apvStack_38[0] = (void *)0x0;
  }
  if (SStack_14.Data != (char *)0x0) {
    port_op_delete(SStack_14.Data);
    SStack_14.Data = (char *)0x0;
  }
  if (SStack_50.Data != (char *)0x0) {
    port_op_delete(SStack_50.Data);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 005ba690 BuildModels_005ba690 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall PropellantTankModule__BuildModels(void) */

void __thiscall PropellantTankModule__BuildModels(PropellantTankModule *this)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  WeakPtr_L_CustomTexture_G_ WVar2;
  Quaternion_L_double_G_ QVar3;
  Quaternion_L_double_G_ QVar4;
  Vec3_L_double_G_ VVar5;
  Vec4_L_double_G_ VVar6;
  bool bVar7;
  GameModel *pGVar8;
  int iVar9;
  VertexBufferObject *pVVar10;
  ReferenceControllerRegistry *pRVar11;
  ReferenceController *pRVar12;
  PropellantTankShader *pPVar13;
  CustomTexture *pCVar14;
  Vec2_L_double_G_ *pVVar15;
  TextureInitOptions *pTVar16;
  undefined4 *puVar17;
  ReferenceController *this_00;
  float10 fVar18;
  undefined4 uVar19;
  undefined4 uVar21;
  double dVar20;
  double dVar22;
  undefined4 uVar23;
  code *pcVar24;
  CustomTexture *pCVar25;
  _func_GeneralModuleShader_ptr *p_Var26;
  undefined1 uVar27;
  GameModel *pGVar28;
  TextureInitOptions local_80;
  double local_58;
  double dStack_50;
  double local_48;
  undefined8 uStack_40;
  Vec3_L_double_G_ VStack_38;
  undefined8 local_28;
  GameModel *local_20;
  undefined8 local_1c;
  SharedPtr_L_CustomTexture_G_ local_14;
  ShaderStack local_a;
  TransformStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  uVar19 = 0;
  pGVar8 = (GameModel *)(uintptr_t)(port_op_new(0xb8));
  if (pGVar8 == (GameModel *)0x0) {
    pGVar8 = (GameModel *)0x0;
  }
  else {
    pGVar8 = (GameModel *)
             GameModel__GameModel
                       (pGVar8,(Material *)(this->External).Data._pad_0x4_1,(Material *)0x0,
                        ({ __typeof__(((ulonglong)CONCAT31((int3)((uint)uVar19 >> 8),1) << 0x20)) _t_ = ((ulonglong)CONCAT31((int3)((uint)uVar19 >> 8),1) << 0x20); *(Maybe_L_int_G_ *)&_t_; }));
  }
  fVar18 = (float10)(**(code **)(this->_pad_0x0_0 + 0xa4))();
  iVar9 = GetUniversalRadialSegmentation((double)fVar18);
  fVar18 = (float10)(**(code **)(this->_pad_0x0_0 + 0xa4))();
  *(uint64_t *)&local_1c = (double)fVar18 / 1000.0;
  fVar18 = (float10)(**(code **)(this->_pad_0x0_0 + 0xa8))();
  *(uint64_t *)&local_28 = (double)fVar18 / 1000.0;
  Graphics__TransformStack__TransformStack(&local_9,Style__Default);
  uStack_40 = 0.0;
  VStack_38.X = 0.0;
  VStack_38.Y = 0.0;
  if ((char)this[1]._pad_0x18_6 != '\0') {
    VStack_38.Y = local_1c;
  }
  VVar6.Z = SUB84(VStack_38.Y,0);
  VVar6.X = 0.0;
  VVar6.Y = 0.0;
  VVar6.W = (int)((ulonglong)VStack_38.Y >> 0x20);
  Graphics__Translate(VVar6);
  if ((char)this[1]._pad_0x18_6 == '\0') {
    *(uint32_t *)&local_48 = 0.0;
    uStack_40 = 0.0;
    VStack_38.X = 0.0;
    VStack_38.Y = 0;
    VStack_38.Z = 0x3ff00000;
  }
  else {
    dVar20 = 0.7853981633974483;
    libm_sse2_sin_precise(0.0);
    *(uint32_t *)&local_48 = dVar20 * 0.0;
    uStack_40 = dVar20;
    VStack_38.X = local_48;
    uVar19 = 0x54442d18;
    uVar21 = 0x3fe921fb;
    libm_sse2_cos_precise(0.0);
    VStack_38.Z = uVar21;
    VStack_38.Y = uVar19;
  }
  QVar3.Y = (undefined4)uStack_40;
  QVar3.X = local_48;
  QVar3.Z = (*(uint32_t*)((char*)&(uStack_40)+4));
  QVar3.Z = VStack_38.X;
  QVar3.W = VStack_38.Y;
  QVar3.W = VStack_38.Y;
  (*(uint32_t *)((char *)&(QVar3.W) + 4)) = VStack_38.Z;
  Graphics__Rotate(QVar3);
  dVar20 = 0.7853981633974483;
  dVar22 = 0.0;
  libm_sse2_sin_precise(0.0);
  VStack_38.X = dVar20 * 0.0;
  uVar19 = 0x54442d18;
  uVar21 = 0x3fe921fb;
  local_58 = dVar20;
  dStack_50 = dVar22;
  VStack_38.Y = dVar22;
  libm_sse2_cos_precise(0.0);
  QVar4.Y = VStack_38.X;
  QVar4.X = local_58;
  QVar4.Z = VStack_38.Y;
  QVar4.Z = VStack_38.X;
  QVar4.W = VStack_38.Y;
  QVar4.W = uVar19;
  (*(uint32_t *)((char *)&(QVar4.W) + 4)) = uVar21;
  Graphics__Rotate(QVar4);
  pVVar10 = GameModel__GetVertexObject(pGVar8);
  RenderCapsule(local_1c,local_28,2.0,iVar9,pVVar10);
  if ((char)this[1]._pad_0x18_6 != '\0') {
    bVar7 = false;
    pVVar10 = GameModel__GetVertexObject(pGVar8);
    VertexBufferObjectInterface__SetIsSpline((VertexBufferObjectInterface *)pVVar10,bVar7);
  }
  Graphics__TransformStack___TransformStack(&local_9);
  if (pGVar8 == (GameModel *)0x0) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  pGVar28 = pGVar8;
  pRVar11 = util__ReferenceControllerRegistry__Get();
  pRVar12 = util__ReferenceControllerRegistry__Register(pRVar11,pGVar28);
  (*(uint32_t*)((char*)&(local_28)+4)) = (uint32_t)(uintptr_t)(pRVar12);
  if (pRVar12 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(pRVar12);
  }
  iVar9 = *(int *)&this->HeightToRadiusRatio;
  *(uint32_t *)&local_20 = (uint32_t)(uintptr_t)((GameModel *)(iVar9 + 1));
  util__Darray_L_util__SharedPtr_L_GameModel_G___G___SetSize
            ((Darray_L_util__SharedPtr_L_GameModel_G___G_ *)&this->ReactionMass_kg,(int *)&local_20);
  bVar7 = util__Darray_L_util__SharedPtr_L_GameModel_G___G___CheckSize
                    ((Darray_L_util__SharedPtr_L_GameModel_G___G_ *)&this->ReactionMass_kg,iVar9);
  pRVar12 = (ReferenceController *)(uintptr_t)((*(uint32_t*)((char*)&(local_28)+4)));
  if (bVar7) {
    iVar9 = *(int *)&this->HeightToRadiusRatio;
    iVar1 = *(int *)((int)&this->ReactionMass_kg + 4);
    *(uint32_t *)&local_20 = (uint32_t)(uintptr_t)(*(GameModel **)(iVar1 + -8 + iVar9 * 8));
    this_00 = *(ReferenceController **)(iVar1 + -4 + iVar9 * 8);
    *(uint32_t *)&local_1c = (double)CONCAT44(this_00,(undefined4)local_1c);
    *(GameModel **)(iVar1 + -8 + iVar9 * 8) = pGVar8;
    *(ReferenceController **)(iVar1 + -4 + iVar9 * 8) = (ReferenceController *)(uintptr_t)((*(uint32_t*)((char*)&(local_28)+4)));
    if ((*(uint32_t*)((char*)&(local_28)+4)) != (ReferenceController *)0x0) {
      util__ReferenceController__AddStrongReference((ReferenceController*)((ReferenceController*)((*(uint32_t*)((char*)&(local_28)+4)))));
      this_00 = (ReferenceController *)(uintptr_t)((*(uint32_t*)((char*)&(local_1c)+4)));
    }
    if ((this_00 != (ReferenceController *)0x0) &&
       (bVar7 = util__ReferenceController__ReleaseStrongReference(this_00), bVar7)) {
      if (local_20 != (GameModel *)0x0) {
        GameModel___scalar_deleting_destructor(local_20,1);
      }
      pGVar28 = local_20;
      pRVar11 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar11,pGVar28);
    }
  }
  if ((pRVar12 != (ReferenceController *)0x0) &&
     (bVar7 = util__ReferenceController__ReleaseStrongReference(pRVar12), bVar7)) {
    if (pGVar8 != (GameModel *)0x0) {
      GameModel___scalar_deleting_destructor(pGVar8,1);
    }
    pRVar11 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar11,pGVar8);
  }
  pPVar13 = PropellantTankShader__GetStatic();
  Graphics__ShaderStack__ShaderStack(&local_a,(Shader *)pPVar13);
  local_1c = *(double *)&(this->External).Data._pad_0x8_2 /
             *(double *)((this->External).Data._pad_0x0_0 + 0x30);
  dVar20 = local_1c / ((this->External).Data.ExplosiveBoltMass_kg * 3.141592653589793);
  libm_sse2_pow_precise(0.0,0.0);
  local_1c = (local_1c - dVar20 * dVar20 * dVar20 * 4.1887902047863905 * 0.5) /
             (dVar20 * dVar20 * 3.141592653589793) + dVar20 * 0.5 + dVar20 * 0.5;
  pPVar13 = PropellantTankShader__GetStatic();
  uVar27 = (undefined1)(uintptr_t) SUB41(&local_1c,0);
  (**(code **)(pPVar13->_pad_0x0_0 + 0x5c))();
  local_14.Pointer = (CustomTexture *)0x0;
  local_14.Controller = (ReferenceController *)0x0;
  pCVar14 = (CustomTexture *)(uintptr_t)(port_op_new(0x3c));
  if (pCVar14 == (CustomTexture *)0x0) {
    pCVar14 = (CustomTexture *)0x0;
  }
  else {
    pCVar14 = (CustomTexture *)CustomTexture__CustomTexture(pCVar14);
    if (pCVar14 != (CustomTexture *)0x0) goto LAB_005baa53;
  }
  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl",
                  0xd4,"NewPointer",(char *)0x0);
  DebugBreak();
LAB_005baa53:
  pCVar25 = pCVar14;
  pRVar11 = util__ReferenceControllerRegistry__Get();
  local_14.Controller = util__ReferenceControllerRegistry__Register(pRVar11,pCVar25);
  local_14.Pointer = pCVar14;
  if (local_14.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(local_14.Controller);
  }
  p_Var26 = (_func_GeneralModuleShader_ptr *)0x0;
  pcVar24 = (long long int (*)())(GetPropellantTankShader);
  pVVar15 = (Vec2_L_double_G_ *)(uintptr_t)(GetTextureSize_m(this,&VStack_38));
  uVar19 = *(undefined4 *)((int)&pVVar15->X + 4);
  uVar21 = *(undefined4 *)&pVVar15->Y;
  uVar23 = *(undefined4 *)((int)&pVVar15->Y + 4);
  pTVar16 = Module__GetDefaultTextureOptions(&local_80,true);
  pCVar14 = local_14.Pointer;
  pRVar12 = local_14.Controller;
  if (local_14.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(local_14.Controller);
  }
  WVar2.Controller = pRVar12;
  WVar2.Pointer = pCVar14;
  VVar5.Y = uVar21;
  VVar5.X = uVar19;
  VVar5.Y = uVar23;
  *(uint32_t *)&VVar5.Z = (uint32_t)(uintptr_t)(pcVar24);
  ArmorTextureHandler__BuildNormalsTexture_L_class_GeneralModuleShader_P____cdecl_P__void__G_
            (WVar2,pTVar16,VVar5,p_Var26,(bool)uVar27);
  puVar17 = (undefined4 *)(**(code **)(*(int *)&this->ReactionMass_kg + 8))();
  GameModel__SetTexture((GameModel *)*puVar17,&local_14);
  if ((local_14.Controller != (ReferenceController *)0x0) &&
     (bVar7 = util__ReferenceController__ReleaseStrongReference(local_14.Controller), bVar7)) {
    if (local_14.Pointer != (CustomTexture *)0x0) {
      (**(code **)((local_14.Pointer)->_pad_0x0_0 + 0x10))(1);
    }
    pCVar14 = local_14.Pointer;
    pRVar11 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar11,pCVar14);
    local_14.Pointer = (CustomTexture *)0x0;
  }
  Graphics__ShaderStack___ShaderStack(&local_a);
  return;
}

//==== 005bab20 GetPointerPropertyChoices_005bab20 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   PropellantTankModule__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
PropellantTankModule__GetPointerPropertyChoices
          (PropellantTankModule *this,ClassMember *param_1,SerializationManagerInterface *param_2)

{
  char *pcVar1;
  SerializationManagerInterface SVar2;
  int in_stack_0000000c;
  undefined1 uVar3;
  
  if (*(int *)&param_2[1] < 1) {
    SVar2 = *(SerializationManagerInterface *)&cde_l2_0b2b1c9f_NullString;
  }
  else {
    SVar2 = *param_2;
  }
  for (pcVar1 = "Propellant"; (pcVar1[(int)(*(int *)&SVar2 + -0x9216a0)] != '\0' || (*pcVar1 != '\0'));
      pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)(*(int *)&SVar2 + -0x9216a0)] != *pcVar1) {
      if (*(int *)&param_2[1] < 1) {
        SVar2 = *(SerializationManagerInterface *)&cde_l2_0b2b1c9f_NullString;
      }
      else {
        SVar2 = *param_2;
      }
      for (pcVar1 = "StructureComposition";
          (pcVar1[(int)(*(int *)&SVar2 + -0x9274a0)] != '\0' || (*pcVar1 != '\0')); pcVar1 = pcVar1 + 1)
      {
        if (pcVar1[(int)(*(int *)&SVar2 + -0x9274a0)] != *pcVar1) {
          (param_1->Name).Data =
               (char *)&vftable_85;
          (param_1->Name).Capacity = 0;
          (param_1->Name).Length = 0;
          *(undefined4 *)&param_1->Type = 0;
          return param_1;
        }
      }
      uVar3 = false;
LAB_005bab5a:
      GetMaterials((DataParser *)param_1,in_stack_0000000c,(bool)uVar3);
      return param_1;
    }
  }
  uVar3 = 2;
  goto LAB_005bab5a;
}





//==== 005babd0 GetReflectionInfo_005babd0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   PropellantTankModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall PropellantTankModule__GetReflectionInfo(PropellantTankModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_850a3686__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_850a3686__thread_safe_static_guard_0__);
    if ( cde_l2_850a3686__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_2285ffb7_ReflectionInfo) = &vftable_201;
      _Init_thread_footer(& cde_l2_850a3686__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_2285ffb7_ReflectionInfo;
}





//==== 005babe0 scalar_deleting_destructor_005babe0 ====


/* public: virtual void * __thiscall PropellantTankModule:: 0 scalardeletingdestructor(unsigned
   int) */

void * __thiscall
PropellantTankModule___scalar_deleting_destructor(PropellantTankModule *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined ** *)&(this->External).IsValidData = &vftable_5;
  pvVar1 = *(void * *)&(this->External).field_0x24;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->External)) + 0x24)) = 0;
  }
  Module___Module((Module *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0xb8);
  }
  return this;
}





//==== 005bac30 GetTypeName_005bac30 ====


/* public: virtual class util__Str_L_char_G_  PropellantTankModule__ReflectionInfoStruct_class_PropellantTankModule___GetTypeName(void)const  */

Str_L_char_G_ * 
PropellantTankModule__ReflectionInfoStruct_class_PropellantTankModule___GetTypeName
          (ReflectionInfoStruct_L_class_PropellantTankModule_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"PropellantTankModule");
  return __return_storage_ptr__;
}





//==== 005bac50 GetMembers_005bac50 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   PropellantTankModule__ReflectionInfoStruct_class_PropellantTankModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
PropellantTankModule__ReflectionInfoStruct_class_PropellantTankModule___GetMembers__o2
          (ReflectionInfoStruct_L_class_PropellantTankModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_48268e79__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_48268e79__thread_safe_static_guard_0__),
      cde_l2_48268e79__thread_safe_static_guard_0__ == -1)) {
     cde_l2_30e36fe1_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_48268e79__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_30e36fe1_Count);
  iVar3 = 0;
  if (0 <  cde_l2_30e36fe1_Count) {
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
    } while (iVar3 <  cde_l2_30e36fe1_Count);
  }
  return in_stack_00000004;
}





//==== 005bad90 GetMember_005bad90 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   PropellantTankModule__ReflectionInfoStruct_class_PropellantTankModule___GetMember(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
PropellantTankModule__ReflectionInfoStruct_class_PropellantTankModule___GetMember__o2
          (ReflectionInfoStruct_L_class_PropellantTankModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_544e4005__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_544e4005__thread_safe_static_guard_0__),
      cde_l2_544e4005__thread_safe_static_guard_0__ == -1)) {
     cde_l2_f537076d_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_544e4005__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_f537076d_Count) {
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
LAB_005bae1d:
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
          if (cVar3 == '\0') goto LAB_005bae1d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_f537076d_Count);
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





//==== 005baf30 GetFactory_005baf30 ====


/* public: virtual class util__Reflectable * (__cdecl*
   PropellantTankModule__ReflectionInfoStruct_class_PropellantTankModule___GetFactory(void)const
   )(void) */

_func_Reflectable_ptr * 
__thiscall PropellantTankModule__ReflectionInfoStruct_class_PropellantTankModule___GetFactory__o2
          (ReflectionInfoStruct_L_class_PropellantTankModule_G_ *this)

{
  return StaticFactory;
}





//==== 005baf40 MapPtrCast_PropellantTankCompartment_ModuleCompartment_ ====


/* class util__Darray_L_classutil__WeakPtr_L_structPropellantTankCompartment_G__G_ __cdecl
   util__MapPtrCast_struct_PropellantTankCompartment_struct_ModuleCompartment(class
   util__Darray_L_classutil__WeakPtr_L_structModuleCompartment_G__G_ const &) */

void __cdecl
util__MapPtrCast_struct_PropellantTankCompartment_struct_ModuleCompartment__o2
          (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *param_1)

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
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)param_1,iVar4);
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





//==== 005bb050 MethodCallerConst__public__bool___thiscall_PropellantTankModule__CanBeDiscarded_void_const__0__ ====


/* public: static bool __cdecl util__DelegateFactory_L_class_PropellantTankModule_Cbool_G___MethodCallerConst_L__public_bool__thiscall_PropellantTankModule__CanBeDiscarded_void_const_C0__G_(void const * const) */

bool __cdecl
util__DelegateFactory_class_PropellantTankModule_bool___MethodCallerConst__public__bool___thiscall_PropellantTankModule__CanBeDiscarded_void_const__0
          (void *param_1)

{
  if ((*(char *)((int)param_1 + 0xb0) != '\0') && (0.0 < *(double *)((int)param_1 + 0xa0))) {
    return true;
  }
  return false;
}





//==== 005bb060 MethodCallerConst__public__class_util__Str_char____thiscall_PropellantTankModule__GetArmorInfo_void_const__0__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_class_PropellantTankModule_Cclassutil__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G____thiscallPropellantTankModule__GetArmorInfo_void_const_C0__G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_PropellantTankModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_PropellantTankModule__GetArmorInfo_void_const__0
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = PropellantTankModule__GetArmorInfo((PropellantTankModule *)param_1,&SStack_10);
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 005bb0a0 MethodCallerConst__public__class_util__Str_char____thiscall_PropellantTankModule__GetDetachInfo_void_const__0__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_class_PropellantTankModule_Cclassutil__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G____thiscallPropellantTankModule__GetDetachInfo_void_const_C0__G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_PropellantTankModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_PropellantTankModule__GetDetachInfo_void_const__0
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(PropellantTankModule__GetDetachInfo((PropellantTankModule *)param_1,&SStack_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 005bb0e0 MethodCallerConst__public__class_util__Str_char____thiscall_PropellantTankModule__GetMassRatio_void_const__0__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_class_PropellantTankModule_Cclassutil__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G____thiscallPropellantTankModule__GetMassRatio_void_const_C0__G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_PropellantTankModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_PropellantTankModule__GetMassRatio_void_const__0
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(PropellantTankModule__GetMassRatio((PropellantTankModule *)param_1,&SStack_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 005bb120 MethodCallerConst__public__bool___thiscall_PropellantTankModule__IsArmored_void_const__0__ ====


/* public: static bool __cdecl util__DelegateFactory_L_class_PropellantTankModule_Cbool_G___MethodCallerConst_L__public_bool__thiscall_PropellantTankModule__IsArmored_void_const_C0__G_(void const * const) */

bool __cdecl
util__DelegateFactory_class_PropellantTankModule_bool___MethodCallerConst__public__bool___thiscall_PropellantTankModule__IsArmored_void_const__0
          (void *param_1)

{
  return 0.0 < *(double *)((int)param_1 + 0x88);
}





//==== 005bb130 MethodCallerConst__public__bool___thiscall_PropellantTankModule__IsExplosionHazard_void_const__0__ ====


/* WARNING: Removing unreachable block (ram,0x006885d8) */
/* public: static bool __cdecl util__DelegateFactory_L_class_PropellantTankModule_Cbool_G___MethodCallerConst_L__public_bool__thiscall_PropellantTankModule__IsExplosionHazard_void_const_C0__G_(void const * const) */

bool __cdecl
util__DelegateFactory_class_PropellantTankModule_bool___MethodCallerConst__public__bool___thiscall_PropellantTankModule__IsExplosionHazard_void_const__0
          (void *param_1)

{
  Material *this;
  Category CVar1;
  ChemicalReaction *pCVar2;
  bool bVar3;
  int iStack_8;
  
  this = *(Material **)((int)param_1 + 0x70);
  bVar3 = (char)this[1].Elements.Capacity == '\0';
  if (bVar3) {
    CVar1 = (this->GetCategory_MemoizedValue).Data;
    iStack_8 = CVar1 + Category__Nonmetal;
    Darray_L_class_util__Reflectable_P_G___SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)&(this->GetClasses_MemoizedValue).Data.Capacity,
               &iStack_8);
    bVar3 = Darray_L_enum_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
    if (bVar3) {
      *(code **)((int)((this->GetClasses_MemoizedValue).IsValidData + -4 +
                (this->GetCategory_MemoizedValue).Data * 4) )= (long long int (*)())(Material__GetDecompositionReaction_Clear);
    }
    pCVar2 = Material__GetDecompositionReaction_MemoizedFunction(this);
    iStack_8 = CONCAT31((*(uint24_t*)((char*)&(iStack_8)+1)),1);
    this[1].Elements.Size = (int)pCVar2;
    bVar3 = false;
    this[1].Elements.Capacity = iStack_8;
  }
  if (bVar3) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,"IsValid()",
              (char *)0x0);
    DebugBreak();
  }
  if (this[1].Elements.Size != 0) {
    if ((char)this[1].Elements.Capacity == '\0') {
      CVar1 = (this->GetCategory_MemoizedValue).Data;
      iStack_8 = CVar1 + Category__Nonmetal;
      Darray_L_class_util__Reflectable_P_G___SetSize
                ((Darray_L_class_util__Reflectable_P_G_ *)&(this->GetClasses_MemoizedValue).Data.Capacity
                 ,&iStack_8);
      bVar3 = Darray_L_enum_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_enum_GraphicsResource__Type_G_ *)
                         &(this->GetClasses_MemoizedValue).Data.Capacity,CVar1);
      if (bVar3) {
        *(code **)((int)((this->GetClasses_MemoizedValue).IsValidData + -4 +
                  (this->GetCategory_MemoizedValue).Data * 4) )= (long long int (*)())(Material__GetDecompositionReaction_Clear);
      }
      pCVar2 = Material__GetDecompositionReaction_MemoizedFunction(this);
      iStack_8 = CONCAT31((*(uint24_t*)((char*)&(iStack_8)+1)),1);
      this[1].Elements.Size = (int)pCVar2;
      this[1].Elements.Capacity = iStack_8;
    }
    bVar3 = ChemicalReaction__IsPropulsiveReaction((ChemicalReaction *)this[1].Elements.Size);
    if (bVar3) {
      return true;
    }
  }
  return false;
}





//==== 005bb4c0 ArePropellantTanksAtMaximum ====


/* public: static bool __cdecl PropellantTankCompartment__ArePropellantTanksAtMaximum(class
   util__Darray_L_classutil__WeakPtr_L_structPropellantTankCompartment_G__G_ const &) */

bool __cdecl
PropellantTankCompartment__ArePropellantTanksAtMaximum
          (Darray_L_class_util__WeakPtr_L_struct_PropellantTankCompartment_G___G_ *param_1)

{
  undefined8 stack0xfffffffc;
  double *pdVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iStack_c = 0;
  iVar4 = (**(code **)(*(int *)param_1 + 0xc))();
  if (iStack_c < iVar4) {
    do {
      piVar5 = (int *)(*(code *)**(undefined4 **)param_1)(&iStack_c);
      if ((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]);
        if (!bVar2) {
          *piVar5 = 0;
        }
      }
      iVar4 = *piVar5;
      if ((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]);
        if (!bVar2) {
          *piVar5 = 0;
        }
      }
      pdVar1 = (double *)(*(int *)(*piVar5 + 0x38) + 0x78);
      if ((NAN(*(double *)(iVar4 + 0x108)) || NAN(*pdVar1)) ==
          (*(double *)(iVar4 + 0x108) == *pdVar1)) {
        uVar3 = 0;
        __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
        return (bool)uVar3;
      }
      iStack_c = iStack_c + 1;
      iVar4 = (**(code **)(*(int *)param_1 + 0xc))();
    } while (iStack_c < iVar4);
  }
  uVar3 = 1;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar3;
}





//==== 005bb580 CanBeDiscarded ====

/* public: bool __thiscall PropellantTankModule__CanBeDiscarded(void)const  */

bool __thiscall PropellantTankModule__CanBeDiscarded(PropellantTankModule *this)

{
  if (((char)this[1]._pad_0x18_6 != '\0') && (0.0 < *(double *)&this[1]._pad_0x8_2)) {
    return true;
  }
  return false;
}

//==== 005bb830 EndOfSessionResolution_005bb830 ====

/* public: virtual bool __thiscall PropellantTankCompartment__EndOfSessionResolution(void) */

bool __thiscall PropellantTankCompartment__EndOfSessionResolution(PropellantTankCompartment *this)

{
  if ((((*(char *)(this->_pad_0x38_14 + 0xb0) != '\0') &&
       (0.0 < *(double *)(this->_pad_0x38_14 + 0xa0))) && (this->DiscardWhenEmpty != false)) &&
     (this->ReactionMass_kg <= 0.0)) {
    Detach();
  }
  *(undefined1 *)&this->_pad_0x68_26 = 0;
  this->_pad_0x60_24 = 0;
  this->_pad_0x64_25 = 0;
  return true;
}

//==== 005bbbd0 GenerateTextures_005bbbd0 ====

/* public: virtual void __thiscall PropellantTankCompartment__GenerateTextures(void) */

void __thiscall PropellantTankCompartment__GenerateTextures(PropellantTankCompartment *this)

{
  int iVar1;
  int iVar2;
  PropellantTankCompartment *pPVar3;
  bool bVar4;
  ArmorTextureHandler *pAVar5;
  ReferenceControllerRegistry *pRVar6;
  ReferenceController *this_00;
  Vec2_L_double_G_ *pVVar7;
  TextureInitOptions *pTVar8;
  ArmorTextureHandler *pAVar9;
  TextureInitOptions local_44;
  Vec2_L_double_G_ local_1c;
  ReferenceController *local_c;
  PropellantTankCompartment *local_8;
  
  local_8 = this;
  pAVar5 = (ArmorTextureHandler *)(uintptr_t)(port_op_new(0xe8));
  if (pAVar5 == (ArmorTextureHandler *)0x0) {
    pAVar5 = (ArmorTextureHandler *)0x0;
  }
  else {
    memset(pAVar5,0,0xe8);
    pAVar5 = (ArmorTextureHandler *)ArmorTextureHandler__ArmorTextureHandler(pAVar5);
    if (pAVar5 != (ArmorTextureHandler *)0x0) goto LAB_005bbc2f;
  }
  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl",
                  0xd4,"NewPointer",(char *)0x0);
  DebugBreak();
LAB_005bbc2f:
  pAVar9 = pAVar5;
  pRVar6 = util__ReferenceControllerRegistry__Get();
  this_00 = util__ReferenceControllerRegistry__Register(pRVar6,pAVar9);
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_00);
  }
  pVVar7 = PropellantTankModule__GetTextureSize_m
                     ((PropellantTankModule *)local_8->_pad_0x38_14,&local_1c);
  bVar4 = false;
  pTVar8 = Module__GetDefaultTextureOptions(&local_44,false);
  ArmorTextureHandler__GenerateTexture(*pVVar7,pTVar8,bVar4);
  iVar1 = local_8->_pad_0x54_21;
  *(uint32_t *)&local_c = (uint32_t)(uintptr_t)((ReferenceController *)(iVar1 + 1));
  util__Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G___SetSize
            ((Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G_ *)&local_8->_pad_0x4c_19,(int *)&local_c
            );
  pPVar3 = local_8;
  bVar4 = util__Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G___CheckSize
                    ((Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G_ *)&local_8->_pad_0x4c_19,iVar1);
  if (bVar4) {
    iVar1 = pPVar3->_pad_0x54_21;
    iVar2 = pPVar3->_pad_0x50_20;
    *(uint32_t *)&local_c = (uint32_t)(uintptr_t)(*(ReferenceController **)(iVar2 + -4 + iVar1 * 8));
    pAVar9 = *(ArmorTextureHandler **)(iVar2 + -8 + iVar1 * 8);
    *(ArmorTextureHandler **)(iVar2 + -8 + iVar1 * 8) = pAVar5;
    *(ReferenceController **)(iVar2 + -4 + iVar1 * 8) = this_00;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddStrongReference(this_00);
    }
    if ((local_c != (ReferenceController *)0x0) &&
       (bVar4 = util__ReferenceController__ReleaseStrongReference(local_c), bVar4)) {
      if (pAVar9 != (ArmorTextureHandler *)0x0) {
        ArmorTextureHandler___scalar_deleting_destructor(pAVar9,1);
      }
      pRVar6 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar6,pAVar9);
    }
  }
  if ((this_00 != (ReferenceController *)0x0) &&
     (bVar4 = util__ReferenceController__ReleaseStrongReference(this_00), bVar4)) {
    if (pAVar5 != (ArmorTextureHandler *)0x0) {
      ArmorTextureHandler___scalar_deleting_destructor(pAVar5,1);
    }
    pRVar6 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar6,pAVar5);
  }
  return;
}

//==== 005bbd30 GetArmorInfo ====

/* public: class util__Str_L_char_G_ __thiscall PropellantTankModule__GetArmorInfo(void)const  */

Str_L_char_G_ * __thiscall
PropellantTankModule__GetArmorInfo(PropellantTankModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined8 stack0xffffff90;
  Str_L_char_G_ SVar1;
  LocStr *this_00;
  Str_L_char_G_ *pSVar2;
  char *pcVar3;
  char *in_stack_ffffff90;
  int in_stack_ffffff94;
  int iVar4;
  void **ppvVar5;
  void *local_58 [3];
  void *local_4c;
  Str_L_char_G_ local_40;
  void *local_34 [3];
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char(&local_40,"AdditionalArmorThickness_m");
  util__Str_char___Str_char(&local_1c,"InfoBox PropellantArmor");
  ppvVar5 = local_34;
  iVar4 = 0x5bbd60;
  (**(code **)(*(int *)(this->External).Data._pad_0x4_1 + 0x48))();
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff90,&local_40);
  SVar1.Capacity = iVar4;
  SVar1.Data = (char *)in_stack_ffffff94;
  SVar1.Length = (int)ppvVar5;
  Print(&local_28,
        (double)CONCAT44(in_stack_ffffff90,
                         (int)((ulonglong)
                               *(undefined8 *)&(this->External).Data.ExplosiveBoltComposition >>
                              0x20)),SVar1);
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)local_58,&local_1c,&local_10);
  pSVar2 = util__LocStr__operator__o3(this_00);
  if (pSVar2->Capacity < 1) {
    pcVar3 = "";
  }
  else {
    pcVar3 = pSVar2->Data;
  }
  util__Printf(__return_storage_ptr__,(wchar_t*)(pcVar3));
  if (local_4c != (void *)0x0) {
    port_op_delete(local_4c);
    *(uint32_t *)&local_4c = (uint32_t)(uintptr_t)((void *)0x0);
  }
  if (local_58[0] != (void *)0x0) {
    port_op_delete(local_58[0]);
    local_58[0] = (void *)0x0;
  }
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
    local_10.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_34[0] != (void *)0x0) {
    port_op_delete(local_34[0]);
    local_34[0] = (void *)0x0;
  }
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
    local_1c.Data = (char *)0x0;
  }
  if (local_40.Data != (char *)0x0) {
    port_op_delete(local_40.Data);
  }
  return __return_storage_ptr__;
}

//==== 005bbfe0 GetEjectionSpeed_km__s ====

/* public: double __thiscall PropellantTankModule__GetEjectionSpeed_km__s(double)const  */

double __thiscall
PropellantTankModule__GetEjectionSpeed_km__s(PropellantTankModule *this,double param_1)

{
  double dVar1;
  double dVar2;
  Material *this_00;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  if (((char)this[1]._pad_0x18_6 != '\0') && (0.0 < *(double *)&this[1]._pad_0x8_2)) {
    dVar4 = ((double)((this->External).Data._pad_0x8_2 /
            *(double *)((this->External).Data._pad_0x0_0 + 0x30)) /
            ((this->External).Data.ExplosiveBoltMass_kg * 3.141592653589793));
    libm_sse2_pow_precise(0.0,0.0);
    dVar8 = Material__GetYieldStrength_Pa((Material *)(this->External).Data._pad_0x4_1);
    dVar10 = *(double *)&(this->External).Data.ExplosiveBoltComposition;
    this_00 = (Material *)(this->External).Data._pad_0x4_1;
    dVar1 = this_00->Density_kg__m3;
    dVar5 = (*(double *)&(this->External).Data._pad_0x8_2 /
            *(double *)((this->External).Data._pad_0x0_0 + 0x30)) /
            ((this->External).Data.ExplosiveBoltMass_kg * 3.141592653589793);
    libm_sse2_pow_precise(0.0,0.0);
    dVar9 = Material__GetYieldStrength_Pa(this_00);
    dVar6 = *(double *)&(this->External).Data._pad_0x8_2 /
            *(double *)((this->External).Data._pad_0x0_0 + 0x30);
    dVar3 = (dVar5 * 2101400.0 * 2.1) / (dVar9 * 2.0);
    dVar7 = dVar6 / ((this->External).Data.ExplosiveBoltMass_kg * 3.141592653589793);
    libm_sse2_pow_precise(0.0,0.0);
    dVar9 = *(double *)&(this->External).Data.ExplosiveBoltComposition;
    dVar2 = *(double *)((this->External).Data._pad_0x4_1 + 0x30);
    if ((char)this[1]._pad_0x18_6 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar10 = Material__GetInfinitelyTampedSandwichExplosiveVelocity_m__s
                       ((Material *)this[1]._pad_0x10_4,*(double *)&this[1]._pad_0x8_2,
                        ((dVar6 - dVar7 * dVar7 * dVar7 * 4.1887902047863905 * 0.5) /
                         (dVar7 * dVar7 * 3.141592653589793) + dVar7 * 0.5 + dVar7 * 0.5) *
                        ((dVar3 + dVar3) / 2.1 + dVar9) * dVar5 * 6.283185307179586 * dVar2 +
                        dVar4 * dVar4 * 3.141592653589793 *
                        (dVar10 + (dVar4 * 2101400.0 * 2.1) / (dVar8 * 2.0)) * 0.25 * dVar1 +
                        param_1);
    return dVar10 / 1000.0;
  }
  return 0.0;
}

//==== 005bc360 GetPropellantTankShader ====


/* class PropellantTankShader * __cdecl GetPropellantTankShader(void) */

PropellantTankShader * __cdecl GetPropellantTankShader(void)

{
  PropellantTankShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_3669c62b__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_036117bd__thread_safe_static_guard_0__);
    if ( cde_l2_036117bd__thread_safe_static_guard_0__ == -1) {
      this = (PropellantTankShader *)port_op_new(0x60);
      if (this == (PropellantTankShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x60);
        pSVar1 = (Shader *)PropellantTankShader__PropellantTankShader(this);
      }
       cde_l2_ec4956de_Singleton = (PropellantTankShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_036117bd__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_398cd5cf_Singleton;
}





//==== 005bc4d0 GetTextureSize_m ====

/* public: struct util__Vec2_L_double_G_  PropellantTankModule__GetTextureSize_m(void)const
    */

Vec2_L_double_G_ * 
PropellantTankModule__GetTextureSize_m
          (PropellantTankModule *this,Vec2_L_double_G_ *__return_storage_ptr__)

{
  float10 fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar2 = *(double *)&(this->External).Data._pad_0x8_2 /
          *(double *)((this->External).Data._pad_0x0_0 + 0x30);
  dVar3 = dVar2 / ((this->External).Data.ExplosiveBoltMass_kg * 3.141592653589793);
  libm_sse2_pow_precise(0.0,0.0);
  dVar6 = dVar3 * 0.5;
  dVar4 = dVar6 + dVar3;
  fVar1 = (float10)(**(code **)(this->_pad_0x0_0 + 0xa4))();
  dVar7 = (((dVar3 - dVar6) * (dVar3 - dVar6)) / (dVar4 * dVar4)) * 3.0;
  __return_storage_ptr__->X = (double)(fVar1 * (float10)6.283185307179586);
  dVar5 = 4.0 - dVar7;
  libm_sse2_sqrt_precise(0.0);
  __return_storage_ptr__->Y =
       (dVar7 / (dVar5 + 10.0) + 1.0) * dVar4 * 3.141592653589793 * 0.5 +
       (dVar2 - dVar3 * dVar3 * dVar3 * 4.1887902047863905 * 0.5) /
       (dVar3 * dVar3 * 3.141592653589793) + dVar6 + dVar6;
  return __return_storage_ptr__;
}

//==== 005bc630 GetUIActions_005bc630 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual class util__Darray_L_structutil__tuple5_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cclassutil__Delegate_L_void_G__Cclassutil__Str_L_char_G__G__G_
   __thiscall PropellantTankCompartment__GetUIActions(void) */

Darray_L_util__tuple5_L_void____cdecl_P__void__Cutil__Str_L_char_G__Cutil__Str_L_char_G__Cutil__Delegate_L_void_G__Cutil__Str_L_char_G___G___G_
* __thiscall PropellantTankCompartment__GetUIActions(PropellantTankCompartment *this)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  LocStr *pLVar3;
  Str_L_char_G_ *pSVar4;
  int iVar5;
  Darray_L_util__tuple5_L_void____cdecl_P__void__Cutil__Str_L_char_G__Cutil__Str_L_char_G__Cutil__Delegate_L_void_G__Cutil__Str_L_char_G___G___G_
  *in_stack_00000004;
  void *local_c0 [3];
  void *local_b4;
  void *local_a8 [3];
  void *local_9c;
  Str_L_char_G_ local_90;
  Str_L_char_G_ local_84;
  Str_L_char_G_ local_78;
  Str_L_char_G_ local_6c;
  code *local_60;
  Str_L_char_G_ local_5c;
  Str_L_char_G_ local_50;
  PropellantTankCompartment *local_44;
  code *local_40;
  Str_L_char_G_ local_3c;
  Str_L_char_G_ local_30;
  Str_L_char_G_ local_24;
  Str_L_char_G_ local_18;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 =
       &vftable_169;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  if ((*(char *)(this->_pad_0x38_14 + 0xb0) != '\0') &&
     (0.0 < *(double *)(this->_pad_0x38_14 + 0xa0))) {
    util__Str_char___Str_char(&local_90,"PropellantTankUI Eject Tooltip");
    util__Str_char___Str_char(&local_30,"PropellantTankUI Eject");
    local_24.Data = (char *)0x0;
    local_24.Capacity = 0;
    local_24.Length = 0;
    local_18.Data = (char *)0x0;
    local_18.Capacity = 0;
    local_18.Length = 0;
    util__Str_char___Str_char(&local_84,"Eject");
    pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_c0,&local_90,&local_24);
    pSVar4 = util__LocStr__operator__o3(pLVar3);
    util__Str_char___Str_char(&local_78,pSVar4);
    pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_a8,&local_30,&local_18);
    pSVar4 = util__LocStr__operator__o3(pLVar3);
    util__Str_char___Str_char(&local_6c,pSVar4);
    local_60 = (long long int (*)())(Icons__Expand);
    util__Str_char___Str_char(&local_5c,&local_6c);
    util__Str_char___Str_char(&local_50,&local_78);
    local_40 = util__DelegateFactory_L_PropellantTankCompartment_Cvoid_G___MethodCaller_L__public__void___thiscall_PropellantTankCompartment__Detach_void__G_;
    local_44 = this;
    util__Str_char___Str_char(&local_3c,&local_84);
    if (local_6c.Data != (char *)0x0) {
      port_op_delete(local_6c.Data);
    }
    if (local_78.Data != (char *)0x0) {
      port_op_delete(local_78.Data);
    }
    if (local_84.Data != (char *)0x0) {
      port_op_delete(local_84.Data);
    }
    iVar1 = *(int *)(in_stack_00000004 + 8);
    *(uint32_t *)&local_c = iVar1 + 1;
    util__Darray_L_util__tuple5_L_void____cdecl_P__void__Cutil__Str_L_char_G__Cutil__Str_L_char_G__Cutil__Delegate_L_void_G__Cutil__Str_L_char_G___G___G___SetSize(in_stack_00000004,&local_c);
    bVar2 = util__Darray_L_util__tuple5_L_void____cdecl_P__void__Cutil__Str_L_char_G__Cutil__Str_L_char_G__Cutil__Delegate_L_void_G__Cutil__Str_L_char_G___G___G___CheckSize(in_stack_00000004,iVar1);
    if (bVar2) {
      iVar1 = *(int *)(in_stack_00000004 + 4);
      iVar5 = *(int *)(in_stack_00000004 + 8) * 0x30;
      *(code **)(iVar5 + -0x30 + iVar1) = local_60;
      util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x2c + iVar5),&local_5c);
      util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x20 + iVar5),&local_50);
      *(PropellantTankCompartment **)(iVar5 + -0x14 + iVar1) = local_44;
      *(code **)(iVar5 + -0x10 + iVar1) = local_40;
      util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0xc + iVar5),&local_3c);
    }
    if (local_3c.Data != (char *)0x0) {
      port_op_delete(local_3c.Data);
    }
    if (local_50.Data != (char *)0x0) {
      port_op_delete(local_50.Data);
    }
    if (local_5c.Data != (char *)0x0) {
      port_op_delete(local_5c.Data);
    }
    if (local_9c != (void *)0x0) {
      port_op_delete(local_9c);
      local_9c = (void *)0x0;
    }
    if (local_a8[0] != (void *)0x0) {
      port_op_delete(local_a8[0]);
      local_a8[0] = (void *)0x0;
    }
    if (local_18.Data != (char *)0x0) {
      port_op_delete(local_18.Data);
      local_18.Data = (char *)0x0;
    }
    if (local_b4 != (void *)0x0) {
      port_op_delete(local_b4);
      local_b4 = (void *)0x0;
    }
    if (local_c0[0] != (void *)0x0) {
      port_op_delete(local_c0[0]);
      local_c0[0] = (void *)0x0;
    }
    if (local_24.Data != (char *)0x0) {
      port_op_delete(local_24.Data);
      local_24.Data = (char *)0x0;
    }
    if (local_30.Data != (char *)0x0) {
      port_op_delete(local_30.Data);
      local_30.Data = (char *)0x0;
    }
    if (local_90.Data != (char *)0x0) {
      port_op_delete(local_90.Data);
    }
  }
  return in_stack_00000004;
}

//==== 005bc910 GetUIToggleActions_005bc910 ====

/* public: virtual class util__Darray_L_structutil__tuple5_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cbool_P_Cclassutil__Str_L_char_G__G__G_ __thiscall
   PropellantTankCompartment__GetUIToggleActions(void) */

Darray_L_util__tuple5_L_void____cdecl_P__void__Cutil__Str_L_char_G__Cutil__Str_L_char_G__Cbool_P_Cutil__Str_L_char_G___G___G_
* __thiscall PropellantTankCompartment__GetUIToggleActions(PropellantTankCompartment *this)

{
  undefined8 stack0x00000004;
  int iVar1;
  Darray_L_util__tuple5_L_void____cdecl_P__void__Cutil__Str_L_char_G__Cutil__Str_L_char_G__Cbool_P_Cutil__Str_L_char_G___G___G_
  *this_00;
  bool bVar2;
  LocStr *pLVar3;
  Str_L_char_G_ *pSVar4;
  int iVar5;
  Darray_L_util__tuple5_L_void____cdecl_P__void__Cutil__Str_L_char_G__Cutil__Str_L_char_G__Cbool_P_Cutil__Str_L_char_G___G___G_
  *in_stack_00000004;
  void *local_b4 [3];
  void *local_a8;
  void *local_9c [3];
  void *local_90;
  Str_L_char_G_ local_84;
  Str_L_char_G_ local_78;
  Str_L_char_G_ local_6c;
  Str_L_char_G_ local_60;
  code *local_54;
  Str_L_char_G_ local_50;
  Str_L_char_G_ local_44;
  bool *local_38;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  this_00 = in_stack_00000004;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = (undefined **)(&vftable_170);
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  if ((*(char *)(this->_pad_0x38_14 + 0xb0) != '\0') &&
     (0.0 < *(double *)(this->_pad_0x38_14 + 0xa0))) {
    util__Str_char___Str_char(&local_84,"PropellantTankUI EjectWhenEmpty Tooltip");
    util__Str_char___Str_char(&local_28,"PropellantTankUI EjectWhenEmpty");
    local_1c.Data = (char *)0x0;
    local_1c.Capacity = 0;
    local_1c.Length = 0;
    local_10.Data = (char *)0x0;
    local_10.Capacity = 0;
    local_10.Length = 0;
    util__Str_char___Str_char(&local_78,"Eject When Empty");
    pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_b4,&local_84,&local_1c);
    pSVar4 = util__LocStr__operator__o3(pLVar3);
    util__Str_char___Str_char(&local_6c,pSVar4);
    pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_9c,&local_28,&local_10);
    pSVar4 = util__LocStr__operator__o3(pLVar3);
    util__Str_char___Str_char(&local_60,pSVar4);
    *(uint32_t *)&local_54 = (uint32_t)(uintptr_t)(Icons__CancelFuelDroplet);
    util__Str_char___Str_char(&local_50,&local_60);
    util__Str_char___Str_char(&local_44,&local_6c);
    *(uint32_t *)&local_38 = (uint32_t)(uintptr_t)(&this->DiscardWhenEmpty);
    util__Str_char___Str_char(&local_34,&local_78);
    if (local_60.Data != (char *)0x0) {
      port_op_delete(local_60.Data);
    }
    if (local_6c.Data != (char *)0x0) {
      port_op_delete(local_6c.Data);
    }
    if (local_78.Data != (char *)0x0) {
      port_op_delete(local_78.Data);
    }
    iVar1 = *(int *)(in_stack_00000004 + 8);
    in_stack_00000004 =
         (Darray_L_util__tuple5_L_void____cdecl_P__void__Cutil__Str_L_char_G__Cutil__Str_L_char_G__Cbool_P_Cutil__Str_L_char_G___G___G_
          *)(iVar1 + 1);
    util__Darray_L_util__tuple5_L_void____cdecl_P__void__Cutil__Str_L_char_G__Cutil__Str_L_char_G__Cbool_P_Cutil__Str_L_char_G___G___G___SetSize(this_00,(int *)&stack0x00000004);
    bVar2 = util__Darray_L_util__tuple5_L_void____cdecl_P__void__Cutil__Str_L_char_G__Cutil__Str_L_char_G__Cbool_P_Cutil__Str_L_char_G___G___G___CheckSize(this_00,iVar1);
    if (bVar2) {
      iVar1 = *(int *)(this_00 + 4);
      iVar5 = *(int *)(this_00 + 8) * 0x2c;
      *(code **)(iVar5 + -0x2c + iVar1) = local_54;
      util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x28 + iVar5),&local_50);
      util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x1c + iVar5),&local_44);
      *(bool **)(iVar5 + -0x10 + iVar1) = local_38;
      util__Str_char___operator__o8((Str_L_char_G_ *)(iVar5 + -0xc + iVar1),&local_34);
    }
    if (local_34.Data != (char *)0x0) {
      port_op_delete(local_34.Data);
    }
    if (local_44.Data != (char *)0x0) {
      port_op_delete(local_44.Data);
    }
    if (local_50.Data != (char *)0x0) {
      port_op_delete(local_50.Data);
    }
    if (local_90 != (void *)0x0) {
      port_op_delete(local_90);
      local_90 = (void *)0x0;
    }
    if (local_9c[0] != (void *)0x0) {
      port_op_delete(local_9c[0]);
      local_9c[0] = (void *)0x0;
    }
    if (local_10.Data != (char *)0x0) {
      port_op_delete(local_10.Data);
      local_10.Data = (char *)0x0;
    }
    if (local_a8 != (void *)0x0) {
      port_op_delete(local_a8);
      local_a8 = (void *)0x0;
    }
    if (local_b4[0] != (void *)0x0) {
      port_op_delete(local_b4[0]);
      local_b4[0] = (void *)0x0;
    }
    if (local_1c.Data != (char *)0x0) {
      port_op_delete(local_1c.Data);
      local_1c.Data = (char *)0x0;
    }
    if (local_28.Data != (char *)0x0) {
      port_op_delete(local_28.Data);
      local_28.Data = (char *)0x0;
    }
    if (local_84.Data != (char *)0x0) {
      port_op_delete(local_84.Data);
    }
  }
  return this_00;
}

//==== 005bcbd0 GetWetMass_kg_005bcbd0 ====

/* public: virtual double __thiscall PropellantTankCompartment__GetWetMass_kg(void)const  */

double __thiscall PropellantTankCompartment__GetWetMass_kg(PropellantTankCompartment *this)

{
  float10 fVar1;
  
  fVar1 = (float10)(**(code **)(this->_pad_0x0_0 + 0xc))();
  return (double)(fVar1 + (float10)this->ReactionMass_kg);
}

//==== 005bce40 IsDamaged_005bce40 ====


/* public: virtual bool __thiscall PropellantTankCompartment__IsDamaged(void)const  */

bool __thiscall PropellantTankCompartment__IsDamaged(PropellantTankCompartment *this)

{
  return 0.0 < this->TotalPierceArea_m2;
}





//==== 005bce60 IsDestroyed_005bce60 ====

/* public: virtual bool __thiscall PropellantTankCompartment__IsDestroyed(void)const  */

bool __thiscall PropellantTankCompartment__IsDestroyed(PropellantTankCompartment *this)

{
  Vec2_L_double_G_ local_14;
  
  PropellantTankModule__GetTextureSize_m((PropellantTankModule *)this->_pad_0x38_14,&local_14);
  return local_14.Y * local_14.X * 0.25 <= this->TotalPierceArea_m2;
}

//==== 005bcea0 IsExplosionHazard ====

/* WARNING: Removing unreachable block (ram,0x006885d8) */
/* WARNING: Removing unreachable block (ram,0x00688547) */
/* public: bool __thiscall PropellantTankModule__IsExplosionHazard(void)const  */

bool __thiscall PropellantTankModule__IsExplosionHazard(PropellantTankModule *this)

{
  Material *this_00;
  Category CVar1;
  bool bVar2;
  ChemicalReaction *pCVar3;
  int iStack_8;
  
  this_00 = (Material *)(this->External).Data._pad_0x0_0;
  if ((char)this_00[1].Elements.Capacity == '\0') {
    CVar1 = (this_00->GetCategory_MemoizedValue).Data;
    iStack_8 = CVar1 + Category__Nonmetal;
    util__Darray_L_util__Reflectable_P_G___SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&(this_00->GetClasses_MemoizedValue).Data.Capacity,
               &iStack_8);
    bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)
                       &(this_00->GetClasses_MemoizedValue).Data.Capacity,CVar1);
    if (bVar2) {
      *(code **)((int)((this_00->GetClasses_MemoizedValue).IsValidData + -4 +
                (this_00->GetCategory_MemoizedValue).Data * 4) )= (long long int (*)())(Material__GetDecompositionReaction_Clear);
    }
    pCVar3 = Material__GetDecompositionReaction_MemoizedFunction(this_00);
    iStack_8 = CONCAT31((*(uint24_t*)((char*)&(iStack_8)+1)),1);
    this_00[1].Elements.Size = (int)pCVar3;
    this_00[1].Elements.Capacity = iStack_8;
  }
  if (this_00[1].Elements.Size != 0) {
    if ((char)this_00[1].Elements.Capacity == '\0') {
      CVar1 = (this_00->GetCategory_MemoizedValue).Data;
      iStack_8 = CVar1 + Category__Nonmetal;
      util__Darray_L_util__Reflectable_P_G___SetSize
                ((Darray_L_util__Reflectable_P_G_ *)&(this_00->GetClasses_MemoizedValue).Data.Capacity,
                 &iStack_8);
      bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_GraphicsResource__Type_G_ *)
                         &(this_00->GetClasses_MemoizedValue).Data.Capacity,CVar1);
      if (bVar2) {
        *(code **)((int)((this_00->GetClasses_MemoizedValue).IsValidData + -4 +
                  (this_00->GetCategory_MemoizedValue).Data * 4) )= (long long int (*)())(Material__GetDecompositionReaction_Clear);
      }
      pCVar3 = Material__GetDecompositionReaction_MemoizedFunction(this_00);
      iStack_8 = CONCAT31((*(uint24_t*)((char*)&(iStack_8)+1)),1);
      this_00[1].Elements.Size = (int)pCVar3;
      this_00[1].Elements.Capacity = iStack_8;
    }
    bVar2 = ChemicalReaction__IsPropulsiveReaction((ChemicalReaction *)this_00[1].Elements.Size);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

//==== 005bd9a0 PushIntoMultiplePropellantTanks ====


/* public: static void __cdecl PropellantTankCompartment__PushIntoMultiplePropellantTanks(class
   util__Darray_L_classutil__WeakPtr_L_structPropellantTankCompartment_G__G_ const &,double) */

void __cdecl
PropellantTankCompartment__PushIntoMultiplePropellantTanks
          (Darray_L_class_util__WeakPtr_L_struct_PropellantTankCompartment_G___G_ *param_1,double param_2)

{
  undefined8 stack0xfffffffc;
  ReferenceController *this;
  bool bVar1;
  int iVar2;
  int *piVar3;
  ReferenceController *this_00;
  double dVar4;
  double dVar5;
  undefined4 in_stack_00000008;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 *apuStack_38 [4];
  undefined4 *apuStack_28 [4];
  undefined1 uStack_18;
  undefined8 uStack_14;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  (*(uint40_t*)&(uStack_14)) = (uint5)(uint)uStack_14;
  uStack_18 = 0;
  uStack_50 = 0;
  iStack_4c = 0;
  iStack_48 = 0;
  uStack_44 = 0;
  iVar2 = (**(code **)(*(int *)param_1 + 0xc))();
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&uStack_50,iVar2);
  iStack_c = 0;
  iVar2 = (**(code **)(*(int *)param_1 + 0xc))();
  if (iStack_c < iVar2) {
    do {
      piVar3 = (int *)(*(code *)**(undefined4 **)param_1)(&iStack_c);
      if (((*piVar3 != 0) && ((ReferenceController *)piVar3[1] != (ReferenceController *)0x0)) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]),
         iVar2 = iStack_48, bVar1)) {
        uStack_40 = (double)CONCAT44(iStack_48 + 1,(undefined4)uStack_40);
        util__Darray_class_util__WeakPtr_class_Body_____SetSize
                  ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&uStack_50,
                   (int *)((int)&uStack_40 + 4));
        bVar1 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize
                          ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&uStack_50,iVar2);
        if (bVar1) {
          this_00 = *(ReferenceController **)(iStack_4c + -4 + iStack_48 * 8);
          *(int *)(iStack_4c + -8 + iStack_48 * 8) = *piVar3;
          this = (ReferenceController *)piVar3[1];
          uStack_40 = (double)CONCAT44(this_00,(undefined4)uStack_40);
          *(ReferenceController **)(iStack_4c + -4 + iStack_48 * 8) = this;
          if (this != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this);
            this_00 = (ReferenceController *)(uintptr_t)((*(uint32_t*)((char*)&(uStack_40)+4)));
          }
          if (this_00 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(this_00);
          }
        }
      }
      iStack_c = iStack_c + 1;
      iVar2 = (**(code **)(*(int *)param_1 + 0xc))();
    } while (iStack_c < iVar2);
  }
  FUN_005bb140(apuStack_38,&uStack_50,(*(uint32_t*)((char*)&(uStack_14)+4)));
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&uStack_50);
  uStack_14 = (double)CONCAT44((*(uint32_t*)&(param_2)),in_stack_00000008);
  iStack_c = 0;
  iVar2 = (*(code *)apuStack_38[0][3])();
  if (iStack_c < iVar2) {
    do {
      piVar3 = (int *)(*(code *)*apuStack_38[0])(&iStack_c);
      if (((*piVar3 != 0) && ((ReferenceController *)piVar3[1] != (ReferenceController *)0x0)) &&
         ((bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]),
          bVar1 && (0.0 < uStack_14)))) {
        uStack_40 = 0.0;
        if (((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]),
           !bVar1)) {
          *piVar3 = 0;
        }
        iVar2 = *piVar3;
        if (((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]),
           !bVar1)) {
          *piVar3 = 0;
        }
        dVar5 = *(double *)(*(int *)(*piVar3 + 0x38) + 0x78);
        if (*(double *)(iVar2 + 0x108) <= dVar5 && dVar5 != *(double *)(iVar2 + 0x108)) {
          if (((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) &&
             (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]),
             !bVar1)) {
            *piVar3 = 0;
          }
          iVar2 = *(int *)(*piVar3 + 0x38);
          if (((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) &&
             (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]),
             !bVar1)) {
            *piVar3 = 0;
          }
          uStack_40 = *(double *)(iVar2 + 0x78) - *(double *)(*piVar3 + 0x108);
          if (uStack_14 <= uStack_40) {
            uStack_40 = uStack_14;
          }
        }
        if (((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]),
           !bVar1)) {
          *piVar3 = 0;
        }
        iVar2 = *piVar3;
        dVar4 = *(double *)(iVar2 + 0x108) + uStack_40;
        dVar5 = *(double *)(*(int *)(iVar2 + 0x38) + 0x78);
        if (dVar4 <= dVar5) {
          dVar5 = dVar4;
        }
        *(double *)(iVar2 + 0x108) = dVar5;
        dVar5 = uStack_14 - uStack_40;
        uStack_14 = 0.0;
        if (0.0 <= dVar5) {
          uStack_14 = dVar5;
        }
      }
      iStack_c = iStack_c + 1;
      iVar2 = (*(code *)apuStack_38[0][3])();
    } while (iStack_c < iVar2);
  }
  iStack_c = 0;
  iVar2 = (*(code *)apuStack_28[0][3])();
  if (iStack_c < iVar2) {
    do {
      piVar3 = (int *)(*(code *)*apuStack_28[0])(&iStack_c);
      if ((((*piVar3 != 0) && ((ReferenceController *)piVar3[1] != (ReferenceController *)0x0)) &&
          (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]),
          bVar1)) && (0.0 < uStack_14)) {
        uStack_40 = 0.0;
        if (((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]),
           !bVar1)) {
          *piVar3 = 0;
        }
        iVar2 = *piVar3;
        if (((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]),
           !bVar1)) {
          *piVar3 = 0;
        }
        dVar5 = *(double *)(*(int *)(*piVar3 + 0x38) + 0x78);
        if (*(double *)(iVar2 + 0x108) <= dVar5 && dVar5 != *(double *)(iVar2 + 0x108)) {
          if (((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) &&
             (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]),
             !bVar1)) {
            *piVar3 = 0;
          }
          iVar2 = *(int *)(*piVar3 + 0x38);
          if (((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) &&
             (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]),
             !bVar1)) {
            *piVar3 = 0;
          }
          uStack_40 = *(double *)(iVar2 + 0x78) - *(double *)(*piVar3 + 0x108);
          if (uStack_14 <= uStack_40) {
            uStack_40 = uStack_14;
          }
        }
        if (((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]),
           !bVar1)) {
          *piVar3 = 0;
        }
        iVar2 = *piVar3;
        dVar4 = *(double *)(iVar2 + 0x108) + uStack_40;
        dVar5 = *(double *)(*(int *)(iVar2 + 0x38) + 0x78);
        if (dVar4 <= dVar5) {
          dVar5 = dVar4;
        }
        *(double *)(iVar2 + 0x108) = dVar5;
        dVar5 = uStack_14 - uStack_40;
        uStack_14 = 0.0;
        if (0.0 <= dVar5) {
          uStack_14 = dVar5;
        }
      }
      iStack_c = iStack_c + 1;
      iVar2 = (*(code *)apuStack_28[0][3])();
    } while (iStack_c < iVar2);
  }
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)apuStack_28);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)apuStack_38);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 005bddd0 RenderSimple_005bddd0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall PropellantTankCompartment__RenderSimple(void)const  */

void __thiscall PropellantTankCompartment__RenderSimple(PropellantTankCompartment *this)

{
  undefined8 stack0xfffffffc;
  Shader *pSVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  int TVar7;
  TextureStack local_20;
  int local_10;
  ShaderStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pSVar1 = (Shader *)SpacecraftShadowShader__GetStatic();
  Graphics__ShaderStack__ShaderStack(&local_9,pSVar1);
  piVar6 = (int *)(this->_pad_0x38_14 + 0x58);
  *(uint32_t *)&local_10 = 0;
  iVar2 = (**(code **)(uintptr_t)(*piVar6 + 0xc))();
  if (local_10 < iVar2) {
    do {
      puVar3 = (undefined4 *)(**(code **)*piVar6)(&local_10);
      puVar4 = (undefined4 *)(**(code **)(this->_pad_0x4c_19 + 0x1c))();
      iVar2 = 0;
      TVar7 = Type__TwoDimensional;
      uVar5 = ArmorTextureHandler__GetTexture((ArmorTextureHandler *)*puVar4);
      Graphics__TextureStack__TextureStack(&local_20,uVar5,TVar7,iVar2);
      GameModel__RenderSimple((GameModel *)*puVar3);
      Graphics__TextureStack___TextureStack(&local_20);
      *(uint32_t *)&local_10 = local_10 + 1;
      iVar2 = (**(code **)(uintptr_t)(*piVar6 + 0xc))();
    } while (local_10 < iVar2);
  }
  Graphics__ShaderStack___ShaderStack(&local_9);
  return;
}

//==== 005bde70 RunActions_005bde70 ====

/* public: virtual void __thiscall PropellantTankCompartment__RunActions(double) */

void __thiscall
PropellantTankCompartment__RunActions(PropellantTankCompartment *this,double param_1)

{
  if ((((*(char *)(this->_pad_0x38_14 + 0xb0) != '\0') &&
       (0.0 < *(double *)(this->_pad_0x38_14 + 0xa0))) && (this->DiscardWhenEmpty != false)) &&
     (this->ReactionMass_kg <= 0.0)) {
    Detach();
  }
  return;
}

//==== 005be000 StaticFactory_005be000 ====

/* public: static class util__Reflectable * __cdecl PropellantTankModule__ReflectionInfoStruct_L_class_PropellantTankModule_G___StaticFactory(void) */

Reflectable * __cdecl
PropellantTankModule__ReflectionInfoStruct_class_PropellantTankModule___StaticFactory(void)

{
  Module *this;
  
  this = (Module *)(uintptr_t)(port_op_new(0xb8));
  if (this != (Module *)0x0) {
    memset(this,0,0xb8);
    Module__Module(this);
    this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__10;
    *(undefined4 *)&(this->GetTotalPowerUsage_W_MemoizedValue).field_0xc = (undefined4)(uintptr_t)&vftable_for_util__RTTIBaseClass__10;
    this[1].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    this[1].Models.Size = 0;
    this[1].Models.Capacity = 0;
    this[1].UsesCustomName = false;
    this[1].IsUserCreated = false;
  *(undefined2 *)((char *)&this[1] + 0x4a) = 0;
  *(undefined4 *)((char *)&this[1] + 0x4c) = 0;
    this[2]._pad_0x0_0 = 0;
    this[2]._pad_0x4_1 = 0;
    this[2]._pad_0x8_2 = 0;
    this[2]._pad_0xc_3 = 0;
    this[1].Models.Capacity = 0;
    this[1].UsesCustomName = false;
    this[1].IsUserCreated = false;
  *(undefined2 *)((char *)&this[1] + 0x4a) = 0;
  *(undefined4 *)((char *)&this[1] + 0x4c) = 0;
    this[1].Models.Size = (int)&vftable_199;
    *(undefined1 *)&this[2]._pad_0x10_4 = 0;
    return (Reflectable *)this;
  }
  return (Reflectable *)0x0;
}

//==== 005be090 StaticFactory_005be090 ====

/* public: static class util__Reflectable * __cdecl TankEjectorSubModule__ReflectionInfoStruct_L_class_TankEjectorSubModule_G___StaticFactory(void) */

Reflectable * __cdecl
TankEjectorSubModule__ReflectionInfoStruct_class_TankEjectorSubModule___StaticFactory(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x20));
  if (pRVar1 != (Reflectable *)0x0) {
    pRVar1->_pad_0x0_0 = 0;
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1[1]._pad_0x0_0 = 0;
    pRVar1[1].Name.Data = (char *)0x0;
    pRVar1[1].Name.Capacity = 0;
    pRVar1[1].Name.Length = 0;
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_199;
  }
  return (Reflectable *)0x0;
}

//==== 005be0d0 StaticGetMember_005be0d0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Maybe_L_structutil__ClassMember_G_ const __cdecl
   TankEjectorSubModule__ReflectionInfoStruct_class_TankEjectorSubModule___StaticGetMember(class
   util__Str_L_char_G_ const &) */

Str_L_char_G_ * __cdecl
TankEjectorSubModule__ReflectionInfoStruct_class_TankEjectorSubModule___StaticGetMember__o2
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
        cde_l2_889556c3__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_889556c3__thread_safe_static_guard_0__),
      cde_l2_889556c3__thread_safe_static_guard_0__ == -1)) {
     cde_l2_a3f0667c_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_889556c3__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_a3f0667c_Count) {
    piVar7 = &DAT_0096ad20;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_15a434b3__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_15a434b3__thread_safe_static_guard_0__),
          cde_l2_15a434b3__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_2f480782_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_0096ad1c = 0;
        DAT_0096ad20 = 0;
        DAT_0096ad24 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ad28,"Unused");
        _DAT_0096ad34 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ad38,"ExplosiveBoltMass_kg");
        _DAT_0096ad44 = 4;
        _DAT_0096ad48 = 0x10;
        _DAT_0096ad4c = 8;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ad50,"double");
        _DAT_0096ad5c = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ad60,"ExplosiveBoltComposition");
        _DAT_0096ad6c = 8;
        _DAT_0096ad70 = 0x18;
        _DAT_0096ad74 = 4;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ad78,"Material");
        _DAT_0096ad84 = 0;
        atexit( private__static_struct_util__ClassMember_const___cdecl_TankEjectorSubModule__ReflectionInfoStruct_class_TankEjectorSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_15a434b3__thread_safe_static_guard_0__);
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
LAB_005be1a2:
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
          if (cVar3 == '\0') goto LAB_005be1a2;
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
    } while (iVar6 <  cde_l2_a3f0667c_Count);
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





//==== 005be3c0 StaticGetMemberByIndex_005be3c0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   PropellantTankModule__ReflectionInfoStruct_class_PropellantTankModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
PropellantTankModule__ReflectionInfoStruct_class_PropellantTankModule___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_c535d170__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_c535d170__thread_safe_static_guard_0__);
    if ( cde_l2_c535d170__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_ca9df5c6_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096ab04 = 0;
      _DAT_0096ab08 = 0;
      _DAT_0096ab0c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ab10,"Unused");
      _DAT_0096ab1c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ab20,"SteamWorkshopID");
      _DAT_0096ab2c = 6;
      _DAT_0096ab30 = 0x10;
      _DAT_0096ab34 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ab38,"AStr");
      _DAT_0096ab44 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ab48,"Description");
      _DAT_0096ab54 = 6;
      _DAT_0096ab58 = 0x20;
      _DAT_0096ab5c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ab60,"AStr");
      _DAT_0096ab6c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ab70,"UsesCustomName");
      _DAT_0096ab7c = 1;
      _DAT_0096ab80 = 0x68;
      _DAT_0096ab84 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ab88,"bool");
      _DAT_0096ab94 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ab98,"Propellant");
      _DAT_0096aba4 = 8;
      _DAT_0096aba8 = 0x70;
      _DAT_0096abac = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096abb0,"Material");
      _DAT_0096abbc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096abc0,"StructureComposition");
      _DAT_0096abcc = 8;
      _DAT_0096abd0 = 0x74;
      _DAT_0096abd4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096abd8,"Material");
      _DAT_0096abe4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096abe8,"ReactionMass_kg");
      _DAT_0096abf4 = 4;
      _DAT_0096abf8 = 0x78;
      _DAT_0096abfc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ac00,"double");
      _DAT_0096ac0c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ac10,"HeightToRadiusRatio");
      _DAT_0096ac1c = 4;
      _DAT_0096ac20 = 0x80;
      _DAT_0096ac24 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ac28,"double");
      _DAT_0096ac34 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ac38,"AdditionalArmorThickness_m");
      _DAT_0096ac44 = 4;
      _DAT_0096ac48 = 0x88;
      _DAT_0096ac4c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ac50,"double");
      _DAT_0096ac5c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ac60,"External");
      _DAT_0096ac6c = 10;
      _DAT_0096ac70 = 0x90;
      _DAT_0096ac74 = 0x20;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ac78,"TankEjectorSubModule");
      _DAT_0096ac84 = 0x100;
      atexit( private__static_struct_util__ClassMember_const___cdecl_PropellantTankModule__ReflectionInfoStruct_class_PropellantTankModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_c535d170__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_ca9df5c6_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_0096ab04 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_0096ab08 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0096ab0c + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_0096ab10 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0096ab1c)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0096ab1d)[iVar1];
  return __return_storage_ptr__;
}





//==== 005be710 StaticGetMemberCount_005be710 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl PropellantTankModule__ReflectionInfoStruct_class_PropellantTankModule___StaticGetMemberCount(void) */

int __cdecl
PropellantTankModule__ReflectionInfoStruct_class_PropellantTankModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_dbe71681__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_dbe71681__thread_safe_static_guard_0__);
    if ( cde_l2_dbe71681__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_6a971219_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096a96c = 0;
      _DAT_0096a970 = 0;
      _DAT_0096a974 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a978,"Unused");
      _DAT_0096a984 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a988,"SteamWorkshopID");
      _DAT_0096a994 = 6;
      _DAT_0096a998 = 0x10;
      _DAT_0096a99c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a9a0,"AStr");
      _DAT_0096a9ac = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a9b0,"Description");
      _DAT_0096a9bc = 6;
      _DAT_0096a9c0 = 0x20;
      _DAT_0096a9c4 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a9c8,"AStr");
      _DAT_0096a9d4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a9d8,"UsesCustomName");
      _DAT_0096a9e4 = 1;
      _DAT_0096a9e8 = 0x68;
      _DAT_0096a9ec = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096a9f0,"bool");
      _DAT_0096a9fc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096aa00,"Propellant");
      _DAT_0096aa0c = 8;
      _DAT_0096aa10 = 0x70;
      _DAT_0096aa14 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096aa18,"Material");
      _DAT_0096aa24 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096aa28,"StructureComposition");
      _DAT_0096aa34 = 8;
      _DAT_0096aa38 = 0x74;
      _DAT_0096aa3c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096aa40,"Material");
      _DAT_0096aa4c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096aa50,"ReactionMass_kg");
      _DAT_0096aa5c = 4;
      _DAT_0096aa60 = 0x78;
      _DAT_0096aa64 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096aa68,"double");
      _DAT_0096aa74 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096aa78,"HeightToRadiusRatio");
      _DAT_0096aa84 = 4;
      _DAT_0096aa88 = 0x80;
      _DAT_0096aa8c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096aa90,"double");
      _DAT_0096aa9c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096aaa0,"AdditionalArmorThickness_m");
      _DAT_0096aaac = 4;
      _DAT_0096aab0 = 0x88;
      _DAT_0096aab4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096aab8,"double");
      _DAT_0096aac4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096aac8,"External");
      _DAT_0096aad4 = 10;
      _DAT_0096aad8 = 0x90;
      _DAT_0096aadc = 0x20;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096aae0,"TankEjectorSubModule");
      _DAT_0096aaec = 0x100;
      atexit( private__static_int_const___cdecl_PropellantTankModule__ReflectionInfoStruct_class_PropellantTankModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_dbe71681__thread_safe_static_guard_0__);
    }
  }
  return 10;
}





//==== 005bea20 StaticGetMemberCount_005bea20 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl TankEjectorSubModule__ReflectionInfoStruct_class_TankEjectorSubModule___StaticGetMemberCount(void) */

int __cdecl
TankEjectorSubModule__ReflectionInfoStruct_class_TankEjectorSubModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_e1a65c4d__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_e1a65c4d__thread_safe_static_guard_0__);
    if ( cde_l2_e1a65c4d__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_6018ca49_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096ac9c = 0;
      _DAT_0096aca0 = 0;
      _DAT_0096aca4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096aca8,"Unused");
      _DAT_0096acb4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096acb8,"ExplosiveBoltMass_kg");
      _DAT_0096acc4 = 4;
      _DAT_0096acc8 = 0x10;
      _DAT_0096accc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096acd0,"double");
      _DAT_0096acdc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ace0,"ExplosiveBoltComposition");
      _DAT_0096acec = 8;
      _DAT_0096acf0 = 0x18;
      _DAT_0096acf4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096acf8,"Material");
      _DAT_0096ad04 = 0;
      atexit( private__static_int_const___cdecl_TankEjectorSubModule__ReflectionInfoStruct_class_TankEjectorSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_e1a65c4d__thread_safe_static_guard_0__);
    }
  }
  return 3;
}





//==== 005beb50 StaticGetMembers_005beb50 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Darray_L_structutil__ClassMember_G_ const __cdecl
   TankEjectorSubModule__ReflectionInfoStruct_class_TankEjectorSubModule___StaticGetMembers(void) */

Darray_L_struct_util__ClassMember_G_ * __cdecl
TankEjectorSubModule__ReflectionInfoStruct_class_TankEjectorSubModule___StaticGetMembers__o2(void)

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
        cde_l2_8b4a78a3__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_8b4a78a3__thread_safe_static_guard_0__),
      cde_l2_8b4a78a3__thread_safe_static_guard_0__ == -1)) {
     cde_l2_ac391687_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_8b4a78a3__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_ac391687_Count);
  iVar3 = 0;
  if (0 <  cde_l2_ac391687_Count) {
    puVar4 = &DAT_0096ad20;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_15a434b3__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_15a434b3__thread_safe_static_guard_0__),
          cde_l2_15a434b3__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_2f480782_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_0096ad1c = 0;
        DAT_0096ad20 = 0;
        DAT_0096ad24 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ad28,"Unused");
        _DAT_0096ad34 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ad38,"ExplosiveBoltMass_kg");
        _DAT_0096ad44 = 4;
        _DAT_0096ad48 = 0x10;
        _DAT_0096ad4c = 8;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ad50,"double");
        _DAT_0096ad5c = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ad60,"ExplosiveBoltComposition");
        _DAT_0096ad6c = 8;
        _DAT_0096ad70 = 0x18;
        _DAT_0096ad74 = 4;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ad78,"Material");
        _DAT_0096ad84 = 0;
        atexit( private__static_struct_util__ClassMember_const___cdecl_TankEjectorSubModule__ReflectionInfoStruct_class_TankEjectorSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_15a434b3__thread_safe_static_guard_0__);
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
    } while (iVar3 <  cde_l2_ac391687_Count);
  }
  return in_stack_00000004;
}





//==== 005bede0 StaticGetReflectionInfo_005bede0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct PropellantTankModule__ReflectionInfoStruct_L_classPropellantTankModule_G_ *
   __cdecl PropellantTankModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_PropellantTankModule_G_ * __cdecl
PropellantTankModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_850a3686__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_850a3686__thread_safe_static_guard_0__);
    if ( cde_l2_850a3686__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_2285ffb7_ReflectionInfo) = &vftable_201;
      _Init_thread_footer(& cde_l2_850a3686__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_2285ffb7_ReflectionInfo;
}





//==== 005bee40 StaticGetReflectionInfo_005bee40 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct TankEjectorSubModule__ReflectionInfoStruct_L_classTankEjectorSubModule_G_ *
   __cdecl TankEjectorSubModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_TankEjectorSubModule_G_ * __cdecl
TankEjectorSubModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_0adca564__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_0adca564__thread_safe_static_guard_0__);
    if ( cde_l2_0adca564__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_494fba2f_ReflectionInfo) = &vftable_200;
      _Init_thread_footer(& cde_l2_0adca564__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_494fba2f_ReflectionInfo;
}





//==== 005beea0 WillDetachWhenEmpty ====

/* public: bool __thiscall PropellantTankCompartment__WillDetachWhenEmpty(void)const  */

bool __thiscall PropellantTankCompartment__WillDetachWhenEmpty(PropellantTankCompartment *this)

{
  if (((*(char *)(this->_pad_0x38_14 + 0xb0) != '\0') &&
      (0.0 < *(double *)(this->_pad_0x38_14 + 0xa0))) && (this->DiscardWhenEmpty != false)) {
    return true;
  }
  return false;
}

//==== 005beed0 GetClassID_005beed0 ====


/* public: virtual unsigned long __thiscall ResistojetModule__GetClassID(void)const  */

ulong __thiscall ResistojetModule__GetClassID(ResistojetModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_3ea9e114__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_3ea9e114__thread_safe_static_guard_0__);
    if ( cde_l2_3ea9e114__thread_safe_static_guard_0__ == -1) {
       cde_l2_8fc058cd_ID
           = util__GetHash("ResistojetModule");
      _Init_thread_footer(& cde_l2_3ea9e114__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_8fc058cd_ID;
}





//==== 005bf720 GetShortName_005bf720 ====


/* public: virtual class util__Str_L_char_G_ __thiscall ResistojetModule__GetShortName(void)const  */

Str_L_char_G_ * __thiscall
ResistojetModule__GetShortName(ResistojetModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  LocStr *this_00;
  Str_L_char_G_ *pSVar1;
  void *apvStack_34 [3];
  void *pvStack_28;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  util__Str_char___Str_char(&SStack_1c,"Engine Resistojet");
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_34,&SStack_1c,&SStack_10);
  pSVar1 = util__LocStr__operator__o3(this_00);
  util__Str_char___Str_char(__return_storage_ptr__,pSVar1);
  if (pvStack_28 != (void *)0x0) {
    port_op_delete(pvStack_28);
    pvStack_28 = (void *)0x0;
  }
  if (apvStack_34[0] != (void *)0x0) {
    port_op_delete(apvStack_34[0]);
    apvStack_34[0] = (void *)0x0;
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
    SStack_10.Data = (char *)0x0;
  }
  if (SStack_1c.Data != (char *)0x0) {
    port_op_delete(SStack_1c.Data);
  }
  return __return_storage_ptr__;
}





//==== 005bf7d0 GetIcon_005bf7d0 ====


/* public: virtual void (__cdecl*__thiscall ResistojetModule__GetIcon(void)const )(void) */

_func_void * __thiscall ResistojetModule__GetIcon(ResistojetModule *this)

{
  return Icons__Resistojet;
}





//==== 005bf7e0 Instantiate_005bf7e0 ====

/* public: virtual class util__SharedPtr_L_structModuleCompartment_G_ __thiscall
   ResistojetModule__Instantiate(void)const  */

undefined4 * __thiscall ResistojetModule__Instantiate(ResistojetModule *this)

{
  bool bVar1;
  EngineCompartment *this_00;
  ReferenceControllerRegistry *pRVar2;
  ReferenceController *this_01;
  undefined4 *in_stack_00000004;
  EngineCompartment *pEVar3;
  
  this_00 = (EngineCompartment *)(uintptr_t)(port_op_new(0x1a0));
  if (this_00 == (EngineCompartment *)0x0) {
    this_00 = (EngineCompartment *)0x0;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  else {
    EngineCompartment__EngineCompartment(this_00);
    this_00->_pad_0x0_0 = (int)&vftable_204;
    this_00[1]._pad_0x0_0 = 0;
    this_00[1]._pad_0x4_1 = 0;
    this_00[1]._pad_0x8_2 = 0;
    this_00[1]._pad_0xc_3 = 0;
    this_00[1]._pad_0x0_0 = (int)&vftable_2;
    this_00[1]._pad_0x4_1 = 0;
    this_00[1]._pad_0x8_2 = 0;
    this_00[1]._pad_0xc_3 = 0;
    this_00[1]._pad_0x10_4 = 0;
    this_00[1]._pad_0x14_5 = 0;
    *(undefined1 *)&this_00[1]._pad_0x18_6 = 0;
    this_00[1]._pad_0x20_8 = -0x66666666;
    this_00[1]._pad_0x24_9 = 0x40059999;
  }
  pEVar3 = this_00;
  pRVar2 = util__ReferenceControllerRegistry__Get();
  this_01 = util__ReferenceControllerRegistry__Register(pRVar2,pEVar3);
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
  }
  *in_stack_00000004 = (undefined4)(uintptr_t)(this_00);
  in_stack_00000004[1] = (undefined4)(uintptr_t)(this_01);
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
    bVar1 = util__ReferenceController__ReleaseStrongReference(this_01);
    if (bVar1) {
      if (this_00 != (EngineCompartment *)0x0) {
        (**(code **)this_00->_pad_0x0_0)(1);
      }
      pRVar2 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar2,this_00);
    }
  }
  return in_stack_00000004;
}

//==== 005bf8e0 GetComposition_005bf8e0 ====

/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   ResistojetModule__GetComposition(void)const  */

Darray_L_MaterialComposition_G_ * __thiscall
ResistojetModule__GetComposition
          (ResistojetModule *this,Darray_L_MaterialComposition_G_ *__return_storage_ptr__)

{
  Material *pMVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Darray_L_MaterialComposition_G_ *this_00;
  bool bVar5;
  int iVar6;
  Darray_L_struct_MaterialConstituent_G_ *pDVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  MaterialComposition *pMVar11;
  Darray_L_MaterialComposition_G_ *pDVar12;
  double dVar13;
  Material *local_2c;
  void *pvStack_28;
  undefined8 uStack_24;
  undefined8 local_1c;
  undefined8 local_14;
  undefined8 local_c;
  
  this_00 = __return_storage_ptr__;
  *(uint32_t *)&local_1c = (double)CONCAT44(this,(undefined4)local_1c);
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (MaterialComposition *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  Module__GetComposition((Module *)this,__return_storage_ptr__);
  iVar6 = EngineModule__GetAttachmentCount((EngineModule *)this);
  pDVar12 = (Darray_L_MaterialComposition_G_ *)(iVar6 + -1);
  __return_storage_ptr__ = pDVar12;
  if (0 < (int)pDVar12) {
    piVar9 = &(this->ThermalRocket).Injector._pad_0x8_2;
    *(uint32_t *)&local_14 = (double)CONCAT44(piVar9,(undefined4)local_14);
    do {
      __return_storage_ptr__ = pDVar12;
      pDVar7 = (Darray_L_struct_MaterialConstituent_G_ *)(**(code **)(uintptr_t)(*piVar9 + 0x68))(&local_2c);
      if (this_00->Size == 0) {
        util__Darray_L_MaterialConstituent_G___op_assign((Darray_L_MaterialConstituent_G_ *)this_00,pDVar7);
      }
      else {
        iVar6 = (**(code **)(*(int *)pDVar7 + 0xc))();
        if (iVar6 != 0) {
          iVar6 = this_00->Size;
          iVar8 = (**(code **)(*(int *)pDVar7 + 0xc))();
          *(uint32_t *)&local_c = (double)CONCAT44(iVar8 + this_00->Size,(undefined4)local_c);
          util__Darray_L_MaterialConstituent_G___SetSize
                    ((Darray_L_MaterialConstituent_G_ *)this_00,(int *)((int)&local_c + 4));
          util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                    ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar6);
          puVar10 = *(undefined4 **)(pDVar7 + 4);
          pMVar11 = this_00->Data + iVar6;
          pDVar12 = __return_storage_ptr__;
          if (pMVar11 != this_00->Data + this_00->Size) {
            do {
              pMVar1 = (Material *)*puVar10;
              uVar2 = puVar10[1];
              uVar3 = puVar10[2];
              uVar4 = puVar10[3];
              puVar10 = puVar10 + 4;
              pMVar11->Type = pMVar1;
              *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar11) + 0x4)) = uVar2;
              *(undefined4 *)&pMVar11->Mass_kg = uVar3;
              *(undefined4 *)((int)&pMVar11->Mass_kg + 4) = uVar4;
              pMVar11 = pMVar11 + 1;
            } while (pMVar11 != this_00->Data + this_00->Size);
          }
        }
      }
      local_2c = (Material *)&vftable_75;
      if (pvStack_28 != (void *)0x0) {
        port_op_delete(pvStack_28);
      }
      pDVar12 = (Darray_L_MaterialComposition_G_ *)((int)&pDVar12[-1].Capacity + 3);
      pvStack_28 = (void *)0x0;
      local_2c = (Material *)&vftable;
      piVar9 = (int *)(uintptr_t)((*(uint32_t*)((char*)&(local_14)+4)));
    } while (pDVar12 != (Darray_L_MaterialComposition_G_ *)0x0);
    __return_storage_ptr__ = (Darray_L_MaterialComposition_G_ *)0x0;
    this = (ResistojetModule *)(uintptr_t)((*(uint32_t*)((char*)&(local_1c)+4)));
  }
  (uint32_t)(local_14 = *(double *)&((this->ThermalRocket).Injector));
  *(uint32_t *)&local_1c = local_14 * local_14;
  dVar13 = ThermalRocketSubModule__GetChamberRadius_m
                     ((ThermalRocketSubModule *)&(this->ThermalRocket).Injector._pad_0x8_2);
  dVar13 = dVar13 - (local_14 + local_14);
  uStack_24 = 0.0;
  if (0.0 <= dVar13) {
    uStack_24 = dVar13;
  }
  *(uint32_t *)&local_14 = (this->ThermalRocket).RegenerativeCooling_Percent / (local_14 * 3.0);
  *(uint32_t *)&local_c = util__Floor((double *)&local_14);
  iVar6 = (int)local_c;
  if (iVar6 < 1) {
    iVar6 = 1;
  }
  local_1c = local_1c * 19.739208802178716 * uStack_24 * (double)iVar6 *
             *(double *)
              (*(int *)((int)&(this->ThermalRocket).NozzleExpansionAngle_degrees + 4) + 0x30);
  iVar8 = EngineModule__GetAttachmentCount((EngineModule *)this);
  iVar6 = this_00->Size;
  local_2c = *(Material **)((int)&(this->ThermalRocket).NozzleExpansionAngle_degrees + 4);
  __return_storage_ptr__ = (Darray_L_MaterialComposition_G_ *)(iVar6 + 1);
  uStack_24 = (double)iVar8 * local_1c;
  util__Darray_L_MaterialConstituent_G___SetSize
            ((Darray_L_MaterialConstituent_G_ *)this_00,(int *)&__return_storage_ptr__);
  bVar5 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                    ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar6);
  if (bVar5) {
    pMVar11 = this_00->Data + this_00->Size + -1;
    pMVar11->Type = local_2c;
    *(void * *)&(*(undefined1 *)(void *)((char *)(uintptr_t)(pMVar11) + 0x4)) = pvStack_28;
    *(undefined4 *)&pMVar11->Mass_kg = (undefined4)uStack_24;
    *(undefined4 *)((int)&pMVar11->Mass_kg + 4) = (*(uint32_t*)((char*)&(uStack_24)+4));
  }
  return this_00;
}

//==== 005bfae0 GetPowerUsage_005bfae0 ====


/* public: virtual class util__Darray_L_structPowerUsage_G_ __thiscall
   ResistojetModule__GetPowerUsage(void)const  */

void __thiscall ResistojetModule__GetPowerUsage(ResistojetModule *this)

{
  undefined8 stack0xfffffffc;
  ResistojetModule *pRVar1;
  bool bVar2;
  int iVar3;
  LocStr *this_00;
  Str_L_char_G_ *pSVar4;
  int iVar5;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ *in_stack_00000004;
  Str_L_char_G_ SStack_78;
  double dStack_68;
  void *apvStack_60 [3];
  void *pvStack_54;
  Str_L_char_G_ SStack_48;
  Str_L_char_G_ SStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  Str_L_char_G_ SStack_28;
  ResistojetModule *pRStack_1c;
  undefined8 uStack_18;
  int iStack_10;
  char cStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  pRStack_1c = this;
  Module__GetPowerUsage((Module *)this,(((Darray_L_PowerUsage_G_ *)cde_rsp_slot())));
  (*(uint40_t*)&(uStack_18)) = (uint5)(uint)uStack_18;
  FUN_005ab070(&iStack_10,(*(uint32_t*)((char*)&(uStack_18)+4)));
  if (cStack_c == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  iVar3 = (*(code *)**(undefined4 **)in_stack_00000004)(&iStack_10);
  uStack_30 = *(undefined4 *)(iVar3 + 0x10);
  uStack_2c = *(undefined4 *)(iVar3 + 0x14);
  if (cStack_c == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  iVar3 = (**(code **)(*(int *)in_stack_00000004 + 0xc))();
  if (iVar3 != 0) {
    iVar3 = (**(code **)(*(int *)in_stack_00000004 + 0xc))();
    if (((iStack_10 < 1) && (iVar3 + -1 <= iStack_10)) ||
       ((iStack_10 <= iVar3 + -1 && (-1 < iStack_10)))) {
      iVar3 = 0;
      pSVar4 = *(Str_L_char_G_ **)(in_stack_00000004 + 4);
      bVar2 = false;
      uStack_18 = (double)((ulonglong)uStack_18 & 0xffffffff);
      iVar5 = iStack_10;
      if (pSVar4 != pSVar4 + *(int *)(in_stack_00000004 + 8) * 2) {
        do {
          if (bVar2) {
            util__Str_char___operator__o8(pSVar4 + -2,pSVar4);
            iVar3 = pSVar4[1].Length;
            pSVar4[-1].Capacity = pSVar4[1].Capacity;
            pSVar4[-1].Length = iVar3;
            iVar3 = (*(uint32_t*)((char*)&(uStack_18)+4));
            iVar5 = iStack_10;
          }
          else if (iVar3 == iVar5) {
            bVar2 = true;
          }
          iVar3 = iVar3 + 1;
          uStack_18 = (double)CONCAT44(iVar3,(uint)uStack_18);
          pSVar4 = pSVar4 + 2;
        } while (pSVar4 != (Str_L_char_G_ *)
                           (*(int *)(in_stack_00000004 + 4) + *(int *)(in_stack_00000004 + 8) * 0x18
                           ));
        if (bVar2) {
          uStack_18 = (double)CONCAT44(*(int *)(in_stack_00000004 + 8) + -1,(uint)uStack_18);
          util__Darray_struct_util__tuple2_class_util__Str_char__double_____SetSize
                    (in_stack_00000004,(int *)((int)&uStack_18 + 4));
        }
      }
    }
  }
  util__Str_char___Str_char(&SStack_48,"PowerUse InjectorAndCoil");
  SStack_28.Data = (char *)0x0;
  SStack_28.Capacity = 0;
  SStack_28.Length = 0;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_60,&SStack_48,&SStack_28);
  pSVar4 = util__LocStr__operator__o3(this_00);
  util__Str_char___Str_char(&SStack_3c,pSVar4);
  pRVar1 = pRStack_1c;
  iVar3 = EngineModule__GetAttachmentCount((EngineModule *)pRStack_1c);
  uStack_18 = ((pRVar1->ThermalRocket).NozzleExpansionRatio + (double)CONCAT44(uStack_2c,uStack_30))
              * (double)iVar3;
  util__Str_char___Str_char(&SStack_78,&SStack_3c);
  dStack_68 = uStack_18;
  if (SStack_3c.Data != (char *)0x0) {
    port_op_delete(SStack_3c.Data);
  }
  iVar3 = *(int *)(in_stack_00000004 + 8);
  pRStack_1c = (ResistojetModule *)(iVar3 + 1);
  util__Darray_struct_util__tuple2_class_util__Str_char__double_____SetSize
            (in_stack_00000004,(int *)&pRStack_1c);
  bVar2 = util__Darray_struct_PowerUsage___CheckSize
                    ((Darray_L_struct_PowerUsage_G_ *)in_stack_00000004,iVar3);
  if (bVar2) {
    iVar3 = *(int *)(in_stack_00000004 + 4) + *(int *)(in_stack_00000004 + 8) * 0x18;
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar3 + -0x18),&SStack_78);
    *(double *)(iVar3 + -8) = uStack_18;
  }
  if (SStack_78.Data != (char *)0x0) {
    port_op_delete(SStack_78.Data);
  }
  if (pvStack_54 != (void *)0x0) {
    port_op_delete(pvStack_54);
    pvStack_54 = (void *)0x0;
  }
  if (apvStack_60[0] != (void *)0x0) {
    port_op_delete(apvStack_60[0]);
    apvStack_60[0] = (void *)0x0;
  }
  if (SStack_28.Data != (char *)0x0) {
    port_op_delete(SStack_28.Data);
    SStack_28.Data = (char *)0x0;
  }
  if (SStack_48.Data != (char *)0x0) {
    port_op_delete(SStack_48.Data);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 005bfd60 GetCrewRequired_005bfd60 ====

/* public: virtual class util__Darray_L_structCrewJob_G_ __thiscall
   ResistojetModule__GetCrewRequired(void)const  */

Darray_L_CrewJob_G_ * __thiscall
ResistojetModule__GetCrewRequired(ResistojetModule *this,Darray_L_CrewJob_G_ *__return_storage_ptr__)

{
  int iVar1;
  
  iVar1 = EngineModule__GetAttachmentCount((EngineModule *)this);
  ThermalRocketSubModule__GetCrewRequired
            ((ThermalRocketSubModule *)&(this->ThermalRocket).Injector._pad_0x8_2,
             __return_storage_ptr__,iVar1);
  return __return_storage_ptr__;
}

//==== 005bfd90 GetMaxMassFlowRate_kg__s_005bfd90 ====

/* public: virtual double __thiscall ResistojetModule__GetMaxMassFlowRate_kg__s(void)const  */

double __thiscall ResistojetModule__GetMaxMassFlowRate_kg__s(ResistojetModule *this)

{
  int iVar1;
  double dVar2;
  
  dVar2 = ThermalRocketSubModule__GetMaxMassFlowRate_kg__s
                    ((ThermalRocketSubModule *)&(this->ThermalRocket).Injector._pad_0x8_2);
  iVar1 = EngineModule__GetAttachmentCount((EngineModule *)this);
  return (double)iVar1 * dVar2;
}

//==== 005bfdd0 GetEffectiveExhaustVelocity_km__s_005bfdd0 ====

/* public: virtual double __thiscall ResistojetModule__GetEffectiveExhaustVelocity_km__s(void)const
    */

double __thiscall ResistojetModule__GetEffectiveExhaustVelocity_km__s(ResistojetModule *this)

{
  ThermalRocketSubModule__GetEffectiveExhaustVelocity_km__s_Memoize();
  if ((char)((this->ThermalRocket).Injector.CachedFluidDensity_kg__m3 == '\0')){
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return (double)((this->ThermalRocket).Injector.CachedNoFluid);
}

//==== 005bfe10 GetMaxThrust_N_005bfe10 ====

/* public: virtual double __thiscall ResistojetModule__GetMaxThrust_N(void)const  */

double __thiscall ResistojetModule__GetMaxThrust_N(ResistojetModule *this)

{
  int iVar1;
  double dVar2;
  
  dVar2 = ThermalRocketSubModule__GetMaxThrust_N();
  iVar1 = EngineModule__GetAttachmentCount((EngineModule *)this);
  return (double)iVar1 * dVar2;
}

//==== 005bfe50 GetSolePropellant_005bfe50 ====


/* public: virtual class Material const * __thiscall ResistojetModule__GetSolePropellant(void)const
    */

Material * __thiscall ResistojetModule__GetSolePropellant(ResistojetModule *this)

{
  return (Material *)(uintptr_t)*(uint32_t *)&(this->ThermalRocket).NozzleExpansionAngle_degrees;
}





//==== 005bfe60 GetStructuralMaterial_005bfe60 ====

/* public: virtual class Material const * __thiscall
   ResistojetModule__GetStructuralMaterial(void)const  */

Material * __thiscall ResistojetModule__GetStructuralMaterial(ResistojetModule *this)

{
  return (Material *)this[1]._pad_0x0_0;
}

//==== 005bfe70 GetStructuralThickness_m_005bfe70 ====

/* public: virtual double __thiscall ResistojetModule__GetStructuralThickness_m(void)const  */

double __thiscall ResistojetModule__GetStructuralThickness_m(ResistojetModule *this)

{
  return *(double *)&this[1]._pad_0x10_4;
}

//==== 005bfe80 GetEngineDimensions_m_005bfe80 ====

/* public: virtual struct util__Cylinder_L_double_G_ 
   ResistojetModule__GetEngineDimensions_m(void)const  */

Cylinder_L_double_G_ * 
ResistojetModule__GetEngineDimensions_m
          (ResistojetModule *this,Cylinder_L_double_G_ *__return_storage_ptr__)

{
  ThermalRocketSubModule__GetEngineDimensions_m
            ((ThermalRocketSubModule *)&(this->ThermalRocket).Injector._pad_0x8_2,
             __return_storage_ptr__);
  return __return_storage_ptr__;
}

//==== 005bfea0 GetEngineInitialRadius_m_005bfea0 ====

/* public: virtual double __thiscall ResistojetModule__GetEngineInitialRadius_m(void)const  */

double __thiscall ResistojetModule__GetEngineInitialRadius_m(ResistojetModule *this)

{
  Cylinder_L_double_G_ *pCVar1;
  Cylinder_L_double_G_ CStack_14;
  
  pCVar1 = TurbopumpSubModule__GetTurbopumpCylinder_m
                     ((TurbopumpSubModule *)&this[1]._pad_0x38_14,&CStack_14);
  return pCVar1->Radius;
}

//==== 005bfeb0 GetEngineEndMomentOfInertia_kg_m2_005bfeb0 ====

/* public: virtual double __thiscall ResistojetModule__GetEngineEndMomentOfInertia_kg_m2(void)const
    */

double __thiscall ResistojetModule__GetEngineEndMomentOfInertia_kg_m2(ResistojetModule *this)

{
  int *this_00;
  double dVar1;
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  double dStack_24;
  double dStack_1c;
  double dStack_14;
  double dStack_c;
  
  this_00 = &(this->ThermalRocket).Injector._pad_0x8_2;
  dStack_c = (*(double *)&this[1]._pad_0x8_2 * 3.141592653589793 * *(double *)&this[1]._pad_0x8_2 *
             *(double *)&this[1]._pad_0x20_8) / 3.141592653589793;
  util__Sqrt((Maybe_L_double_G_ *)auStack_34,&dStack_c);
  if (auStack_34[8] == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dStack_c = (*(double *)&this[1]._pad_0x8_2 * 3.141592653589793 * *(double *)&this[1]._pad_0x8_2 *
             *(double *)&this[1]._pad_0x18_6) / 3.141592653589793;
  util__Sqrt((Maybe_L_double_G_ *)auStack_44,&dStack_c);
  if (auStack_44[8] == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((double)(*(uint64_t*)&(auStack_44)) <= (double)(*(uint64_t*)&(auStack_34))) {
    (*(uint64_t*)&(auStack_44)) = (*(uint64_t*)&(auStack_34));
  }
  dStack_c = *(double *)&this[1]._pad_0x88_34;
  (*(uint64_t*)((char*)&(auStack_34)+8)) = (*(uint64_t*)&(auStack_44));
  dVar1 = ThermalRocketSubModule__GetNozzleLength_m((ThermalRocketSubModule *)this_00);
  dStack_c = dVar1 + dStack_c;
  (*(uint64_t*)((char*)&(auStack_44)+8)) = TurbopumpSubModule__GetLength_m((TurbopumpSubModule *)&this[1]._pad_0x38_14);
  (*(uint64_t*)((char*)&(auStack_44)+8)) = (double)(*(uint64_t*)((char*)&(auStack_44)+8)) + dStack_c * 0.5;
  dStack_14 = *(double *)&this[1]._pad_0x10_4;
  dVar1 = ThermalRocketSubModule__GetPrimarySurfaceArea_m2((ThermalRocketSubModule *)this_00);
  dStack_1c = *(double *)(this[1]._pad_0x0_0 + 0x30) * dVar1 * dStack_14;
  dStack_24 = *(double *)&this[1]._pad_0x10_4;
  dStack_14 = dStack_24;
  dVar1 = ThermalRocketSubModule__GetPrimarySurfaceArea_m2((ThermalRocketSubModule *)this_00);
  dStack_14 = *(double *)(this[1]._pad_0x0_0 + 0x30) * dVar1 * dStack_14;
  dVar1 = Mechanics__ThickCylindericalShellRadialMomentOfInertia_kg_m2
                    (dStack_c,(double)(*(uint64_t*)((char*)&(auStack_34)+8)),dStack_24 + (double)(*(uint64_t*)((char*)&(auStack_34)+8)),
                     dStack_1c);
  (*(uint64_t*)((char*)&(auStack_44)+8)) = dVar1 + (double)(*(uint64_t*)((char*)&(auStack_44)+8)) * (double)(*(uint64_t*)((char*)&(auStack_44)+8)) * dStack_14;
  dVar1 = TurbopumpSubModule__GetEndRadialMomentOfInertia_kg_m2
                    ((TurbopumpSubModule *)&this[1]._pad_0x38_14);
  return dVar1 + (double)(*(uint64_t*)((char*)&(auStack_44)+8));
}

//==== 005bfec0 GetEngineMass_kg_005bfec0 ====

/* public: virtual double __thiscall ResistojetModule__GetEngineMass_kg(void)const  */

double __thiscall ResistojetModule__GetEngineMass_kg(ResistojetModule *this)

{
  int iVar1;
  double dVar2;
  
  dVar2 = ThermalRocketSubModule__GetTotalMass_kg
                    ((ThermalRocketSubModule *)&(this->ThermalRocket).Injector._pad_0x8_2);
  iVar1 = EngineModule__GetAttachmentCount((EngineModule *)this);
  return (double)iVar1 * dVar2;
}

//==== 005bff00 GetHeatSignature_W_005bff00 ====

/* public: virtual double __thiscall ResistojetModule__GetHeatSignature_W(void)const  */

double __thiscall ResistojetModule__GetHeatSignature_W(ResistojetModule *this)

{
  int iVar1;
  double dVar2;
  
  dVar2 = ThermalRocketSubModule__GetHeatSignature_W
                    ((ThermalRocketSubModule *)&(this->ThermalRocket).Injector._pad_0x8_2);
  iVar1 = EngineModule__GetAttachmentCount((EngineModule *)this);
  return (double)iVar1 * dVar2;
}

//==== 005bff40 GetSteadyStateTemperature_K_005bff40 ====

/* public: virtual double __thiscall ResistojetModule__GetSteadyStateTemperature_K(void)const  */

double __thiscall ResistojetModule__GetSteadyStateTemperature_K(ResistojetModule *this)

{
  int *this_00;
  float10 fVar1;
  double dVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  this_00 = &(this->ThermalRocket).Injector._pad_0x8_2;
  uVar4 = 0x3e45798ee2308c3a;
  uVar3 = 0x14;
  dVar2 = ThermalRocketSubModule__GetGasWallTemperature_K((ThermalRocketSubModule *)this_00);
  fVar1 = (float10)FUN_005c2210(this_00,0,dVar2,uVar3,uVar4);
  return (double)fVar1;
}

//==== 005bff50 GetStatuses_005bff50 ====

/* public: virtual class DesignStatusBuffer  ResistojetModule__GetStatuses(class
   DataParser *)const  */

DesignStatusBuffer * 
ResistojetModule__GetStatuses
          (ResistojetModule *this,DesignStatusBuffer *__return_storage_ptr__,DataParser *param_1)

{
  Str_L_char_G_ *pSVar1;
  double dVar2;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *pSVar4;
  Str_L_char_G_ *pSVar5;
  ModulePlacer *pMVar6;
  Str_L_char_G_ local_48;
  Str_L_char_G_ local_3c;
  Str_L_char_G_ local_30;
  Str_L_char_G_ local_24;
  double local_18;
  undefined1 local_10 [4];
  undefined8 local_c;
  
  __return_storage_ptr__->DataManager = (DataParser *)0x0;
  (__return_storage_ptr__->Messages)._pad_0x0_0 = 0;
  (__return_storage_ptr__->Messages).Data = (DesignStatusMessage *)0x0;
  (__return_storage_ptr__->Messages).Size = 0;
  *(undefined8 *)&(__return_storage_ptr__->Messages).Capacity = 0;
  EngineModule__GetStatuses((EngineModule *)this,__return_storage_ptr__,param_1);
  util__Str_char___Str_char(&local_48,"ResistojetCoilMelt");
  pSVar5 = &local_30;
  pMVar6 = (ModulePlacer *)0x0;
  pSVar4 = &local_24;
  local_30.Data = (char *)0x0;
  local_30.Capacity = 0;
  local_30.Length = 0;
  local_24.Data = (char *)0x0;
  local_24.Capacity = 0;
  local_24.Length = 0;
  dVar2 = Material__GetSafeUseTemperature_K
                    (*(Material **)((int)&(this->ThermalRocket).NozzleExpansionAngle_degrees + 4));
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(PrintTemperature(&local_3c,(double)CONCAT44(pSVar4,(int)((ulonglong)dVar2 >> 0x20))));
  pSVar3 = &local_48;
  *(uint32_t *)&local_c = GetChamberTemperature_K(this);
  local_18 = Material__GetSafeUseTemperature_K
                       (*(Material **)((int)&(this->ThermalRocket).NozzleExpansionAngle_degrees + 4)
                       );
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,local_18 < local_c,pSVar3,pSVar1,pSVar4,pSVar5,pMVar6);
  if (local_3c.Data != (char *)0x0) {
    port_op_delete(local_3c.Data);
    local_3c.Data = (char *)0x0;
  }
  if (local_24.Data != (char *)0x0) {
    port_op_delete(local_24.Data);
    local_24.Data = (char *)0x0;
  }
  if (local_30.Data != (char *)0x0) {
    port_op_delete(local_30.Data);
    local_30.Data = (char *)0x0;
  }
  if (local_48.Data != (char *)0x0) {
    port_op_delete(local_48.Data);
  }
  util__Str_char___Str_char(&local_48,"ResistojetRadiusTooSmall");
  local_18 = *(double *)&(this->ThermalRocket).Injector;
  *(uint32_t *)&local_10 = (uint32_t)0x0;
  (*(uint32_t*)&(local_c)) = 0;
  (*(uint32_t*)((char*)&(local_c)+4)) = 0;
  local_24.Data = (char *)0x0;
  local_24.Capacity = 0;
  local_24.Length = 0;
  local_30.Data = (char *)0x0;
  local_30.Capacity = 0;
  local_30.Length = 0;
  dVar2 = ThermalRocketSubModule__GetChamberRadius_m
                    ((ThermalRocketSubModule *)&(this->ThermalRocket).Injector._pad_0x8_2);
  local_18 = dVar2 - (local_18 + local_18);
  dVar2 = 0.0;
  if (0.0 <= local_18) {
    dVar2 = local_18;
  }
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,dVar2 <= 0.0,&local_48,&local_30,&local_24,(Str_L_char_G_ *)local_10
             ,(ModulePlacer *)0x0);
  if (local_30.Data != (char *)0x0) {
    port_op_delete(local_30.Data);
    local_30.Data = (char *)0x0;
  }
  if (local_24.Data != (char *)0x0) {
    port_op_delete(local_24.Data);
    local_24.Data = (char *)0x0;
  }
  if (local_10 != (uint32_t)0x0) {
    port_op_delete((void *)local_10);
    *(uint32_t *)&local_10 = (uint32_t)0x0;
  }
  if (local_48.Data != (char *)0x0) {
    port_op_delete(local_48.Data);
  }
  util__Str_char___Str_char(&local_48,"ResistojetPropellantNotVaporized");
  pMVar6 = (ModulePlacer *)0x0;
  pSVar5 = (Str_L_char_G_ *)local_10;
  *(uint32_t *)&local_10 = (uint32_t)0x0;
  pSVar4 = &local_24;
  pSVar3 = &local_30;
  (*(uint32_t*)&(local_c)) = 0;
  (*(uint32_t*)((char*)&(local_c)+4)) = 0;
  pSVar1 = &local_48;
  local_24.Data = (char *)0x0;
  local_24.Capacity = 0;
  local_24.Length = 0;
  local_30.Data = (char *)0x0;
  local_30.Capacity = 0;
  local_30.Length = 0;
  local_18 = GetChamberTemperature_K(this);
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,
             local_18 <
             *(double *)(*(int *)&(this->ThermalRocket).NozzleExpansionAngle_degrees + 0xa0),pSVar1,
             pSVar3,pSVar4,pSVar5,pMVar6);
  if (local_30.Data != (char *)0x0) {
    port_op_delete(local_30.Data);
    local_30.Data = (char *)0x0;
  }
  if (local_24.Data != (char *)0x0) {
    port_op_delete(local_24.Data);
    local_24.Data = (char *)0x0;
  }
  if (local_10 != (uint32_t)0x0) {
    port_op_delete((void *)local_10);
    *(uint32_t *)&local_10 = (uint32_t)0x0;
  }
  if (local_48.Data != (char *)0x0) {
    port_op_delete(local_48.Data);
  }
  return __return_storage_ptr__;
}

//==== 005c0490 GenerateDesignUI_005c0490 ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual struct UIWidget * __thiscall ResistojetModule__GenerateDesignUI(class Manager
   *)const  */

UIWidget * __thiscall ResistojetModule__GenerateDesignUI(ResistojetModule *this,Manager *param_1)

{
  undefined8 stack0xfffffd4c;
  UIAttributes UVar1;
  UIWidget *this_00;
  undefined1 auVar2 [12];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [44];
  undefined1 auVar11 [44];
  undefined1 in_stack_fffffd4c [320];
  float fVar12;
  UIAttributes local_164;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined8 uStack_14;
  undefined8 uStack_c;
  undefined1 auVar10 [32];
  
  this_00 = (UIWidget *)(uintptr_t)(port_op_new(0x170));
  if (this_00 != (UIWidget *)0x0) {
    fVar12 = 8.450567e-39;
    UIAttributes__UIAttributes(&local_164,param_1);
    *(uint32_t *)&local_1c = 0;
    uStack_14 = 0x3ff0000000000000;
    uStack_c = 0x3ff0000000000000;
    uStack_18 = 0;
    local_164.FillProportion.Getter.Callee = (void *)0x0;
    local_164.FillProportion.Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0;
    local_164.FillProportion.Value.X = 0;
    local_164.FillProportion.Value.Y = 0x3ff00000;
    local_164.FillProportion.Value.Y = 1.0;
    UIAttributes__UIAttributes((UIAttributes *)&stack0xfffffd4c,&local_164);
    UVar1.TextColor.Data.Value.Alpha = fVar12;
*(uint32_t *)&auVar2 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 4)));
*(uint32_t *)&auVar5 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 32)));
*(uint32_t *)&auVar6 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 44)));
*(uint32_t *)&auVar8 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 180)));
*(uint32_t *)&auVar9 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 196)));
*(uint32_t *)&auVar11 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 240)));
    UVar1.Parent = (Manager *)(*(uint32_t*)&(in_stack_fffffd4c));
    UVar1.Tag.Data = (char *)(*(uint32_t*)&(auVar2));
    UVar1.Tag.Capacity = (*(uint32_t*)((char*)&(auVar2)+4));
    UVar1.Tag.Length = (*(uint32_t*)((char*)&(auVar2)+8));
    uVar3 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 16)),0);
    uVar4 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 16)),8);
    UVar1.Location.Getter.Callee = (void *)(int)uVar3;
    UVar1.Location.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar3 >> 0x20);
    UVar1.Location.Value.X = (int)uVar4;
    UVar1.Location.Value.Y = (int)((ulonglong)uVar4 >> 0x20);
    UVar1.Visible.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar5));
    UVar1.Visible.Getter.CallbackFunction =
         (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar5)) >> 0x20);
    UVar1.Visible.Value = (bool)auVar5[8];
    (*(uint24_t *)((char *)&(UVar1.Visible) + 9)) = (*(uint24_t*)((char*)&(auVar5)+9));
    UVar1.Enabled.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar6));
    UVar1.Enabled.Getter.CallbackFunction =
         (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar6)) >> 0x20);
    UVar1.Enabled.Value = (bool)auVar6[8];
    (*(uint24_t *)((char *)&(UVar1.Enabled) + 9)) = (*(uint24_t*)((char*)&(auVar6)+9));
    uVar3 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 56)),0);
    uVar4 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 56)),8);
    UVar1.DesiredSize.Getter.Callee = (void *)(int)uVar3;
    UVar1.DesiredSize.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar3 >> 0x20);
    UVar1.DesiredSize.Value.X = (int)uVar4;
    UVar1.DesiredSize.Value.Y = (int)((ulonglong)uVar4 >> 0x20);
    uVar3 = SUB248((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 72)),0);
*(uint32_t *)&auVar7 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 72)),8));
    UVar1.FillProportion.Getter.Callee = (void *)(int)uVar3;
    UVar1.FillProportion.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar3 >> 0x20);
    UVar1.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar7));
    UVar1.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar7)+8));
    uVar3 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 96)),0);
    UVar1.HitTestShape.Getter.Callee = (void *)(int)uVar3;
    UVar1.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar3 >> 0x20));
    UVar1.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 96)),8);
    (*(uint32_t *)((char *)&(UVar1) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffffd4c) + 108));
    uVar3 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 112)),0);
    UVar1.Depth.Getter.Callee = (void *)(int)uVar3;
    UVar1.Depth.Getter.CallbackFunction =
         (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar3 >> 0x20);
    UVar1.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 112)),8);
    uVar3 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 128)),0);
    UVar1.Icon.Getter.Callee = (void *)(int)uVar3;
    UVar1.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar3 >> 0x20));
    UVar1.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 128)),8);
    uVar3 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 140)),0);
*(uint32_t *)&auVar2 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 140)),8));
    UVar1.Tooltip.Getter.Callee = (void *)(int)uVar3;
    UVar1.Tooltip.Getter.CallbackFunction =
         (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar3 >> 0x20);
    UVar1.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar2));
    UVar1.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar2)+4));
    UVar1.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar2)+8));
    uVar3 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 160)),0);
*(uint32_t *)&auVar2 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffd4c) + 160)),8));
    UVar1.VerboseTooltip.Getter.Callee = (void *)(int)uVar3;
    UVar1.VerboseTooltip.Getter.CallbackFunction =
         (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar3 >> 0x20);
    UVar1.VerboseTooltip.Value.Data = (char *)(*(uint32_t*)&(auVar2));
    UVar1.VerboseTooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar2)+4));
    UVar1.VerboseTooltip.Value.Length = (*(uint32_t*)((char*)&(auVar2)+8));
    uVar3 = SUB128((*(uint32_t *)((char *)&(auVar8) + 0)),0);
    UVar1.TextFont.Data.Getter.Callee = (void *)(int)uVar3;
    UVar1.TextFont.Data.Getter.CallbackFunction =
         (_func___cdecl_Font_ptr_void_ptr *)(int)((ulonglong)uVar3 >> 0x20);
    UVar1.TextFont.Data.Value = (Font *)SUB124((*(uint32_t *)((char *)&(auVar8) + 0)),8);
    UVar1.TextFont.IsValidData = (bool)auVar8[0xc];
    (*(uint32_t *)((char *)&(UVar1.TextFont) + 13)) = (*(uint32_t *)((char *)&(auVar8) + 13));
    uVar3 = SUB408((*(uint32_t *)((char *)&(auVar9) + 0)),0);
*(uint32_t *)&auVar10 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar9) + 0)),8));
    UVar1.ForegroundColor.Data.Getter.Callee = (void *)(int)uVar3;
    UVar1.ForegroundColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar3 >> 0x20);
    UVar1.ForegroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar10));
    UVar1.ForegroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar10)+4));
    UVar1.ForegroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar10)+8));
    UVar1.ForegroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar10) + 12));
    UVar1.ForegroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar10) + 16));
    UVar1.ForegroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar10) + 20));
    UVar1.ForegroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar10) + 24));
    UVar1.ForegroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar10) + 28));
    UVar1.ForegroundColor.IsValidData = (bool)auVar9[0x28];
    (*(uint32_t *)((char *)&(UVar1.ForegroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar9) + 41));
    uVar3 = SUB408((*(uint32_t *)((char *)&(auVar11) + 0)),0);
*(uint32_t *)&auVar10 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar11) + 0)),8));
    UVar1.BackgroundColor.Data.Getter.Callee = (void *)(int)uVar3;
    UVar1.BackgroundColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar3 >> 0x20);
    UVar1.BackgroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar10));
    UVar1.BackgroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar10)+4));
    UVar1.BackgroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar10)+8));
    UVar1.BackgroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar10) + 12));
    UVar1.BackgroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar10) + 16));
    UVar1.BackgroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar10) + 20));
    UVar1.BackgroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar10) + 24));
    UVar1.BackgroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar10) + 28));
    UVar1.BackgroundColor.IsValidData = (bool)auVar11[0x28];
    (*(uint32_t *)((char *)&(UVar1.BackgroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar11) + 41));
    UVar1.TextColor.Data.Getter.Callee = (void *)(int)(*(uint64_t *)((char *)&(in_stack_fffffd4c) + 284));
    UVar1.TextColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)(*(uint64_t *)((char *)&(in_stack_fffffd4c) + 284)) >> 0x20);
    UVar1.TextColor.Data.Value._pad_0x0_0 = (*(uint32_t *)((char *)&(in_stack_fffffd4c) + 292));
    UVar1.TextColor.Data.Value._pad_0x4_1 = (*(uint32_t *)((char *)&(in_stack_fffffd4c) + 296));
    UVar1.TextColor.Data.Value._pad_0x8_2 = (*(uint32_t *)((char *)&(in_stack_fffffd4c) + 300));
    UVar1.TextColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(in_stack_fffffd4c) + 304));
    UVar1.TextColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(in_stack_fffffd4c) + 308));
    UVar1.TextColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(in_stack_fffffd4c) + 312));
    UVar1.TextColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(in_stack_fffffd4c) + 316));
    (*(uint32_t *)((char *)&(UVar1.TextColor) + 40)) = (uint32_t)(uintptr_t)(param_1);
    UIWidget__UIWidget(this_00,UVar1);
    this_00->_pad_0x0_0 = (int)&vftable_205;
    this_00[1]._pad_0x0_0 = (int)this;
    UIAttributes___UIAttributes(&local_164);
  }
  return (UIWidget *)0x0;
}

//==== 005c0540 BuildModels_005c0540 ====

/* public: virtual void __thiscall ResistojetModule__BuildModels(void) */

void __thiscall ResistojetModule__BuildModels(ResistojetModule *this)

{
  undefined8 stack0xfffffee0;
  undefined8 stack0xffffff10;
  undefined8 stack0xffffff58;
  ReferenceController *this_00;
  Maybe_L_TurretSubModule_G_ MVar1;
  undefined **ppuVar2;
  Str_L_char_G_ in_stack_fffffee0;
  undefined8 uVar3;
  undefined4 in_stack_fffffef4;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 in_stack_ffffff08;
  undefined **ppuVar8;
  Str_L_char_G_ in_stack_ffffff10;
  int iVar9;
  undefined4 in_stack_ffffff20;
  undefined8 uVar10;
  int iVar11;
  undefined4 in_stack_ffffff30;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 uVar15;
  undefined7 in_stack_ffffff4d;
  undefined **ppuVar16;
  Str_L_char_G_ in_stack_ffffff58;
  Material *pMVar17;
  undefined4 in_stack_ffffff68;
  double dVar18;
  
  EngineModule__GetStartingHeight_m((EngineModule *)this);
  util__Str_char___Str_char((Str_L_char_G_ *)&stack0xfffffee0,(Str_L_char_G_ *)&this->_pad_0x74_29);
  ppuVar2 = &vftable_5;
  (*(uint32_t*)&(uVar3)) = this->_pad_0x80_32;
  (*(uint32_t*)((char*)&(uVar3)+4)) = this->_pad_0x84_33;
  uVar4 = CONCAT31((int3)((uint)in_stack_fffffef4 >> 8),(char)this->_pad_0x88_34);
  iVar5 = this->_pad_0x8c_35;
  (*(uint32_t*)&(uVar6)) = this->_pad_0x90_36;
  (*(uint32_t*)((char*)&(uVar6)+4)) = this->_pad_0x94_37;
  iVar7 = this->_pad_0x98_38;
  util__Str_char___Str_char((Str_L_char_G_ *)&stack0xffffff10,(Str_L_char_G_ *)&this->_pad_0xa4_41);
  ppuVar8 = &vftable_186;
  iVar9 = this->_pad_0xb0_44;
  (*(uint32_t*)&(uVar10)) = this->_pad_0xb8_46;
  (*(uint32_t*)((char*)&(uVar10)+4)) = this->_pad_0xbc_47;
  iVar11 = this->_pad_0xc0_48;
  (*(uint32_t*)&(uVar12)) = this->_pad_0xc8_50;
  (*(uint32_t*)((char*)&(uVar12)+4)) = this->_pad_0xcc_51;
  (*(uint32_t*)&(uVar13)) = this->_pad_0xd0_52;
  (*(uint32_t*)((char*)&(uVar13)+4)) = this->_pad_0xd4_53;
  (*(uint32_t*)&(uVar14)) = this->_pad_0xd8_54;
  (*(uint32_t*)((char*)&(uVar14)+4)) = this->_pad_0xdc_55;
  uVar15 = (undefined1)this->_pad_0xe0_56;
  util__Str_char___Str_char((Str_L_char_G_ *)&stack0xffffff58,(Str_L_char_G_ *)&this->field_0xec);
  ppuVar16 = &vftable_188;
  pMVar17 = this->Propellant;
  dVar18 = this->ChamberLength_m;
  this_00 = *(ReferenceController **)
             ((int)&(this->ThermalRocket).GetGasExpansionPlume_MemoizedValue.Data.MassFlowRate_kg__s
             + 4);
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  MVar1.Data._pad_0x4_1 = (int)in_stack_fffffee0.Data;
  MVar1.Data._pad_0x8_2 = in_stack_fffffee0.Capacity;
  (*(uint32_t *)((char *)&(MVar1.Data) + 12)) = in_stack_fffffee0.Length;
  MVar1.Data._pad_0x0_0 = (int)ppuVar2;
  MVar1.Data.InnerRadius_m = (double)uVar3;
  (*(uint32_t *)((char *)&(MVar1.Data) + 24)) = uVar4;
  MVar1.Data.ArmorComposition = (Material *)iVar5;
  MVar1.Data.ArmorThickness_m = (double)uVar6;
  MVar1.Data.MomentumWheels._pad_0x0_0 = iVar7;
  MVar1.Data.MomentumWheels._pad_0x4_1 = in_stack_ffffff08;
  MVar1.Data.MomentumWheels._pad_0x8_2 = (int)ppuVar8;
  MVar1.Data.MomentumWheels._pad_0xc_3 = (int)in_stack_ffffff10.Data;
  MVar1.Data.MomentumWheels.Composition = (Material *)in_stack_ffffff10.Capacity;
  (*(uint32_t *)((char *)&(MVar1.Data.MomentumWheels) + 20)) = in_stack_ffffff10.Length;
  MVar1.Data.MomentumWheels.RotationalSpeed_RPM = iVar9;
  (*(uint32_t *)((char *)&(MVar1.Data.MomentumWheels.RotationalSpeed_RPM) + 4)) = in_stack_ffffff20;
  (*(uint64_t *)((char *)&(MVar1.Data.MomentumWheels) + 32)) = uVar10;
  MVar1.Data.MomentumWheels.CachedRadius_m = iVar11;
  (*(uint32_t *)((char *)&(MVar1.Data.MomentumWheels.CachedRadius_m) + 4)) = in_stack_ffffff30;
  MVar1.Data.MomentumWheels.CachedHeight_m = (double)uVar12;
  (*(uint64_t *)((char *)&(MVar1.Data.MomentumWheels) + 56)) = uVar13;
  MVar1.Data.CachedObjectRadius_m = (double)uVar14;
  MVar1.Data.CachedObjectEndRadialMomentOfInertia_kg_m2 = uVar15;
  (*(uint56_t *)((char *)&(MVar1.Data.CachedObjectEndRadialMomentOfInertia_kg_m2) + 1)) = in_stack_ffffff4d;
  *(uint32_t *)&(MVar1.Data).CachedObjectMass_kg = (uint32_t)(uintptr_t)ppuVar16;
  (*(uint32_t *)((char *)&(MVar1.Data) + 124)) = *(uint32_t *)&(in_stack_ffffff58);
  (*(uint32_t *)((char *)&(MVar1) + 136)) = (uint32_t)(uintptr_t)(pMVar17);
  (*(uint32_t *)((char *)&(MVar1) + 140)) = in_stack_ffffff68;
  ThermalRocketSubModule__BuildModels
            ((ThermalRocketSubModule *)&(this->ThermalRocket).Injector._pad_0x8_2,
             (Darray_L_util__SharedPtr_L_GameModel_G___G_ *)&this->_pad_0x58_22,
             (Darray_L_util__WeakPtr_L_GameModel_G___G_ *)
             &(this->ThermalRocket).GetExhaustPlumeModelRatio_MemoizedValue.IsValidData,
             (Darray_L_util__WeakPtr_L_GameModel_G___G_ *)&(this->ThermalRocket).ThroatRadius_m,
             (WeakPtr_L_GameModel_G_ *)&(this->ThermalRocket).ChamberContractionRatio,MVar1,dVar18);
  return;
}

//==== 005c0770 GetExhaustPlumeModelRatio_005c0770 ====

/* public: virtual double __thiscall ResistojetModule__GetExhaustPlumeModelRatio(void)const  */

double __thiscall ResistojetModule__GetExhaustPlumeModelRatio(ResistojetModule *this)

{
  ThermalRocketSubModule__GetExhaustPlumeModelRatio_Memoize();
  if ((char)(this->ThermalRocket).CachedProducts.Capacity == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return *(double *)&(this->ThermalRocket).CachedProducts.Data;
}

//==== 005c07b0 SetCachedData_005c07b0 ====

/* public: virtual void __thiscall ResistojetModule__SetCachedData(class DataParser *) */

void __thiscall ResistojetModule__SetCachedData(ResistojetModule *this,DataParser *param_1)

{
  Material *pMVar1;
  Darray_L_MaterialConstituent_G_ *pDVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Darray_L_MaterialConstituent_G_ *pDVar6;
  Darray_L_MaterialConstituent_G_ local_14;
  
  EngineModule__SetCachedData((EngineModule *)this,param_1);
  pDVar6 = &local_14;
  pMVar1 = *(Material * *)&(this->ThermalRocket).NozzleExpansionAngle_degrees;
  pDVar2 = (Darray_L_MaterialConstituent_G_ *)(**(code **)(this->_pad_0x0_0 + 0x170))();
  ThermalRocketSubModule__PassThroughCachedData
            ((ThermalRocketSubModule *)&(this->ThermalRocket).Injector._pad_0x8_2,
             (this->ThermalRocket).RegenerativeCooling_Percent,pMVar1->ThermalConductivity_W__m_K,
             pMVar1,pDVar2);
  local_14._pad_0x0_0 = (int)&vftable_15;
  if (local_14.Data != (MaterialConstituent *)0x0) {
    port_op_delete(local_14.Data);
  }
  dVar3 = GetChamberTemperature_K(this);
  ThermalRocketSubModule__PassThroughCachedData2
            ((ThermalRocketSubModule *)&(this->ThermalRocket).Injector._pad_0x8_2,dVar3);
  dVar3 = ThermalRocketSubModule__GetChamberPressure_Pa
                    ((ThermalRocketSubModule *)&(this->ThermalRocket).Injector._pad_0x8_2);
  uVar4 = SUB84(dVar3,0);
  uVar5 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar3 = GetChamberTemperature_K(this);
  Material__GetFinalDissociationProducts
            (*(Material **)&(this->ThermalRocket).NozzleExpansionAngle_degrees,&local_14,
             (double)CONCAT44(uVar4,(int)((ulonglong)dVar3 >> 0x20)),(double)CONCAT44(pDVar6,uVar5))
  ;
  ThermalRocketSubModule__PassThroughCachedData3
            ((ThermalRocketSubModule *)&(this->ThermalRocket).Injector._pad_0x8_2,&local_14);
  local_14._pad_0x0_0 = (int)&vftable_15;
  if (local_14.Data != (MaterialConstituent *)0x0) {
    port_op_delete(local_14.Data);
  }
  return;
}

//==== 005c0890 GetPointerPropertyChoices_005c0890 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   ResistojetModule__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
ResistojetModule__GetPointerPropertyChoices
          (ResistojetModule *this,ClassMember *param_1,SerializationManagerInterface *param_2)

{
  char *pcVar1;
  SerializationManagerInterface SVar2;
  int in_stack_0000000c;
  undefined1 uVar3;
  
  if (*(int *)&param_2[1] < 1) {
    SVar2 = *(SerializationManagerInterface *)&cde_l2_0b2b1c9f_NullString;
  }
  else {
    SVar2 = *param_2;
  }
  for (pcVar1 = "Propellant"; (pcVar1[(int)(*(int *)&SVar2 + -0x9216a0)] != '\0' || (*pcVar1 != '\0'));
      pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)(*(int *)&SVar2 + -0x9216a0)] != *pcVar1) {
      if (*(int *)&param_2[1] < 1) {
        SVar2 = *(SerializationManagerInterface *)&cde_l2_0b2b1c9f_NullString;
      }
      else {
        SVar2 = *param_2;
      }
      for (pcVar1 = "CoilComposition";
          (pcVar1[(int)(*(int *)&SVar2 + -0x927a88)] != '\0' || (*pcVar1 != '\0')); pcVar1 = pcVar1 + 1)
      {
        if (pcVar1[(int)(*(int *)&SVar2 + -0x927a88)] != *pcVar1) {
          (param_1->Name).Data =
               (char *)&vftable_85;
          (param_1->Name).Capacity = 0;
          (param_1->Name).Length = 0;
          *(undefined4 *)&param_1->Type = 0;
          return param_1;
        }
      }
      uVar3 = 3;
LAB_005c08ca:
      GetMaterials((DataParser *)param_1,in_stack_0000000c,(bool)uVar3);
      return param_1;
    }
  }
  uVar3 = 2;
  goto LAB_005c08ca;
}





//==== 005c0940 GetReflectionInfo_005c0940 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   ResistojetModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall ResistojetModule__GetReflectionInfo(ResistojetModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_7fcbdc73__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_7fcbdc73__thread_safe_static_guard_0__);
    if ( cde_l2_7fcbdc73__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_823c606b_ReflectionInfo) = &vftable_203;
      _Init_thread_footer(& cde_l2_7fcbdc73__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_823c606b_ReflectionInfo;
}





//==== 005c0950 scalar_deleting_destructor_005c0950 ====

/* public: virtual void * __thiscall ResistojetModule:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall
ResistojetModule___scalar_deleting_destructor(ResistojetModule *this,uint param_1)

{
  ThermalRocketSubModule___ThermalRocketSubModule((ThermalRocketSubModule *)&(this->ThermalRocket).Injector._pad_0x8_2);
  EngineModule___EngineModule((EngineModule *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x310);
  }
  return this;
}

//==== 005c0990 GetTypeName_005c0990 ====


/* public: virtual class util__Str_L_char_G_  ResistojetModule__ReflectionInfoStruct_class_ResistojetModule___GetTypeName(void)const  */

Str_L_char_G_ * 
ResistojetModule__ReflectionInfoStruct_class_ResistojetModule___GetTypeName
          (ReflectionInfoStruct_L_class_ResistojetModule_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"ResistojetModule");
  return __return_storage_ptr__;
}





//==== 005c09b0 GetMembers_005c09b0 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   ResistojetModule__ReflectionInfoStruct_class_ResistojetModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
ResistojetModule__ReflectionInfoStruct_class_ResistojetModule___GetMembers__o2
          (ReflectionInfoStruct_L_class_ResistojetModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_7bc244ed__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_7bc244ed__thread_safe_static_guard_0__),
      cde_l2_7bc244ed__thread_safe_static_guard_0__ == -1)) {
     cde_l2_4cd6a200_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_7bc244ed__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_4cd6a200_Count);
  iVar3 = 0;
  if (0 <  cde_l2_4cd6a200_Count) {
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
    } while (iVar3 <  cde_l2_4cd6a200_Count);
  }
  return in_stack_00000004;
}





//==== 005c0af0 GetMember_005c0af0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   ResistojetModule__ReflectionInfoStruct_class_ResistojetModule___GetMember(class util__Str_L_char_G_
   const &)const  */

Str_L_char_G_ * 
ResistojetModule__ReflectionInfoStruct_class_ResistojetModule___GetMember__o2
          (ReflectionInfoStruct_L_class_ResistojetModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_54fe7633__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_54fe7633__thread_safe_static_guard_0__),
      cde_l2_54fe7633__thread_safe_static_guard_0__ == -1)) {
     cde_l2_da0b1c92_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_54fe7633__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_da0b1c92_Count) {
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
LAB_005c0b7d:
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
          if (cVar3 == '\0') goto LAB_005c0b7d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_da0b1c92_Count);
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





//==== 005c0c90 GetFactory_005c0c90 ====


/* public: virtual class util__Reflectable * (__cdecl*
   ResistojetModule__ReflectionInfoStruct_class_ResistojetModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall ResistojetModule__ReflectionInfoStruct_class_ResistojetModule___GetFactory__o2
          (ReflectionInfoStruct_L_class_ResistojetModule_G_ *this)

{
  return StaticFactory;
}





//==== 005c0ca0 GenerateTextures_005c0ca0 ====

/* public: virtual void __thiscall ResistojetCompartment__GenerateTextures(void) */

void __thiscall ResistojetCompartment__GenerateTextures(ResistojetCompartment *this)

{
  EngineModule *this_00;
  ReferenceController *this_01;
  bool bVar1;
  int iVar2;
  Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G_ *pDVar3;
  int iVar4;
  ReferenceControllerRegistry *this_02;
  SharedPtr_L_ArmorTextureHandler_G_ *pSVar5;
  undefined4 *puVar6;
  int *this_03;
  ArmorTextureHandler *this_04;
  Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G_ local_1c;
  int *local_c;
  ReferenceController *local_8;
  
  EngineCompartment__GenerateTextures((EngineCompartment *)this);
  this_00 = (EngineModule *)this->_pad_0x38_14;
  iVar2 = EngineModule__GetAttachmentCount(this_00);
  pDVar3 = ThermalRocketSubModule__GenerateTextures
                     ((ThermalRocketSubModule *)&this_00[1].GimbalAngle_degrees,&local_1c,iVar2);
  this_03 = &this->_pad_0x4c_19;
  *(uint32_t *)&local_c = (uint32_t)(uintptr_t)(this_03);
  if (this->_pad_0x54_21 == 0) {
    util__Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G___op_assign
              ((Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G_ *)this_03,
               (Darray_L_class_util__SharedPtr_L_class_ArmorTextureHandler_G___G_ *)pDVar3);
  }
  else {
    iVar2 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
    if (iVar2 != 0) {
      iVar2 = this->_pad_0x54_21;
      iVar4 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
      local_8 = (ReferenceController *)(iVar4 + this->_pad_0x54_21);
      util__Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G___SetSize
                ((Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G_ *)this_03,(int *)&local_8);
      util__Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G___CheckSize
                ((Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G_ *)this_03,iVar2);
      pSVar5 = pDVar3->Data;
      puVar6 = (undefined4 *)(this->_pad_0x50_20 + iVar2 * 8);
      if (puVar6 != (undefined4 *)(this->_pad_0x50_20 + this->_pad_0x54_21 * 8)) {
        do {
          this_04 = (ArmorTextureHandler *)*puVar6;
          local_8 = (ReferenceController *)puVar6[1];
          *puVar6 = (undefined4)(uintptr_t)(pSVar5->Pointer);
          this_01 = pSVar5->Controller;
          puVar6[1] = (undefined4)(uintptr_t)(this_01);
          if (this_01 != (ReferenceController *)0x0) {
            util__ReferenceController__AddStrongReference(this_01);
          }
          if ((local_8 != (ReferenceController *)0x0) &&
             (bVar1 = util__ReferenceController__ReleaseStrongReference(local_8), bVar1)) {
            if (this_04 != (ArmorTextureHandler *)0x0) {
              ArmorTextureHandler___scalar_deleting_destructor(this_04,1);
            }
            this_02 = util__ReferenceControllerRegistry__Get();
            util__ReferenceControllerRegistry__PointerWasDestroyed(this_02,this_04);
          }
          puVar6 = puVar6 + 2;
          pSVar5 = pSVar5 + 1;
        } while (puVar6 != (undefined4 *)(local_c[1] + local_c[2] * 8));
      }
    }
  }
  local_1c._pad_0x0_0 = (int)&vftable_91;
  if (local_1c.Data != (SharedPtr_L_ArmorTextureHandler_G_ *)0x0) {
    util__SharedPtr_L_ArmorTextureHandler_G_____vector_deleting_destructor_(local_1c.Data,3);
  }
  return;
}

//==== 005c0db0 GetChamberTemperature_K ====

/* public: double __thiscall ResistojetModule__GetChamberTemperature_K(void)const  */

double __thiscall ResistojetModule__GetChamberTemperature_K(ResistojetModule *this)

{
  double dVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double local_14;
  double local_c;
  
  dVar1 = *(double *)(*(int *)&(this->ThermalRocket).NozzleExpansionAngle_degrees + 0x98);
  dVar4 = GetHeatTransferCoefficient_W__m2_K(this);
  *(uint32_t *)&local_14 = 0.0;
  if (dVar4 <= 0.0) {
    *(uint32_t *)&local_c = (this->ThermalRocket).NozzleExpansionRatio;
  }
  else {
    local_14 = *(double *)&(this->ThermalRocket).Injector;
    dVar4 = ThermalRocketSubModule__GetChamberRadius_m
                      ((ThermalRocketSubModule *)&(this->ThermalRocket).Injector._pad_0x8_2);
    dVar4 = dVar4 - (local_14 + local_14);
    dVar3 = 0.0;
    if (0.0 <= dVar4) {
      dVar3 = dVar4;
    }
    *(uint32_t *)&local_14 = (this->ThermalRocket).RegenerativeCooling_Percent / (local_14 * 3.0);
    *(uint32_t *)&local_c = util__Floor(&local_14);
    iVar2 = (int)local_c;
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    dVar3 = *(double *)&(this->ThermalRocket).Injector * 39.47841760435743 * dVar3 * (double)iVar2;
    dVar4 = 0.0;
    if (0.0 <= dVar3) {
      dVar4 = dVar3;
    }
    dVar3 = GetHeatTransferCoefficient_W__m2_K(this);
    *(uint32_t *)&local_c = (this->ThermalRocket).NozzleExpansionRatio;
    *(uint32_t *)&local_14 = local_c / (dVar3 * dVar4);
  }
  dVar4 = ThermalRocketSubModule__GetMaxMassFlowRate_kg__s
                    ((ThermalRocketSubModule *)&(this->ThermalRocket).Injector._pad_0x8_2);
  dVar4 = local_c / dVar4;
  dVar3 = Material__GetSpecificGasConstant_J__kg_K
                    (*(Material **)&(this->ThermalRocket).NozzleExpansionAngle_degrees);
  dVar4 = dVar4 / dVar3;
  if (local_14 <= dVar4) {
    dVar4 = local_14;
  }
  return dVar4 + dVar1;
}

//==== 005c0f00 GetHeatTransferCoefficient_W__m2_K ====

/* public: double __thiscall ResistojetModule__GetHeatTransferCoefficient_W__m2_K(void)const  */

double __thiscall ResistojetModule__GetHeatTransferCoefficient_W__m2_K(ResistojetModule *this)

{
  int iVar1;
  float10 fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  fVar2 = (float10)(**(code **)(this->_pad_0x0_0 + 0x154))();
  dVar3 = ThermalRocketSubModule__GetChamberArea_m2
                    ((ThermalRocketSubModule *)&(this->ThermalRocket).Injector._pad_0x8_2);
  iVar1 = *(int *)&(this->ThermalRocket).NozzleExpansionAngle_degrees;
  dVar3 = (double)fVar2 / (dVar3 * *(double *)(iVar1 + 0x30));
  dVar4 = ThermalRocketSubModule__GetChamberRadius_m
                    ((ThermalRocketSubModule *)&(this->ThermalRocket).Injector._pad_0x8_2);
  dVar3 = Mechanics__GetInternalPipeFlowReynoldsNumber
                    (*(double *)(iVar1 + 0x30),*(double *)(iVar1 + 0xf8),dVar4,dVar3);
  dVar4 = Material__GetPrandtlNumber
                    (*(Material **)&(this->ThermalRocket).NozzleExpansionAngle_degrees);
  dVar4 = Mechanics__GetForcedConventionInTurbulentPipeFlowNusseltNumber(dVar4,dVar3);
  dVar3 = *(double *)(*(int *)&(this->ThermalRocket).NozzleExpansionAngle_degrees + 0xa8);
  dVar5 = ThermalRocketSubModule__GetChamberRadius_m
                    ((ThermalRocketSubModule *)&(this->ThermalRocket).Injector._pad_0x8_2);
  return (dVar4 * dVar3) / dVar5;
}

//==== 005c1170 Render_005c1170 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void  ModuleDiagram_L_classResistojetModule_G___Render(void)const  */

void __thiscall
ModuleDiagram_class_ResistojetModule___Render(ModuleDiagram_L_class_ResistojetModule_G_ *this)

{
  undefined8 stack0xfffffffc;
  Manager *this_00;
  int iVar1;
  NormalShader *pNVar2;
  CoreUITheme *pCVar3;
  Font *pFVar4;
  Vec2_L_int_G_ VVar5;
  Maybe_L_struct_TurretSubModule_G_ *pMVar6;
  int iVar7;
  int iVar8;
  ShaderStack SStack_9;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pNVar2 = NormalShader__GetStatic();
  Graphics__ShaderStack__ShaderStack(&SStack_9,(Shader *)pNVar2);
  this_00 = *(Manager **)(this + 8);
  UIWidget__GetTrueSize((UIWidget *)this,&VVar5);
  iVar1 = *(int *)(this + 0x168);
  iVar8 = ((int *)VVar5.X)[1];
  iVar7 = *(int *)VVar5.X;
  pMVar6 = (Maybe_L_struct_TurretSubModule_G_ *)(iVar1 + 0x70);
  pCVar3 = (CoreUITheme *)(uintptr_t)(Manager__GetTheme(this_00));
  pFVar4 = ThemeFont__Get((ThemeFont *)&(pCVar3->MainFont).FontUsed.CharInfo[1].BitmapSize.Y);
  VVar5.Y = iVar8;
  VVar5.X = iVar7;
  ThermalRocketSubModule__RenderUIDiagram
            ((ThermalRocketSubModule *)(iVar1 + 0x1d0),pFVar4,pMVar6,VVar5);
  Graphics__ShaderStack___ShaderStack(&SStack_9);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 005c11f0 StaticFactory_005c11f0 ====

/* public: static class util__Reflectable * __cdecl ResistojetModule__ReflectionInfoStruct_L_class_ResistojetModule_G___StaticFactory(void) */

Reflectable * __cdecl ResistojetModule__ReflectionInfoStruct_class_ResistojetModule___StaticFactory(void)

{
  EngineModule *this;
  
  this = (EngineModule *)(uintptr_t)(port_op_new(0x310));
  if (this != (EngineModule *)0x0) {
    memset(this,0,0x310);
    EngineModule__EngineModule(this);
    this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__11;
    this->_pad_0x34_13 = (int)&vftable_for_util__RTTIBaseClass__11;
    ThermalRocketSubModule__ThermalRocketSubModule
              ((ThermalRocketSubModule *)&this[1].GimbalAngle_degrees);
    return (Reflectable *)this;
  }
  return (Reflectable *)0x0;
}

//==== 005c1240 StaticGetMemberByIndex_005c1240 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   ResistojetModule__ReflectionInfoStruct_class_ResistojetModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
ResistojetModule__ReflectionInfoStruct_class_ResistojetModule___StaticGetMemberByIndex__o2
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_73a9b0b0__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_73a9b0b0__thread_safe_static_guard_0__);
    if ( cde_l2_73a9b0b0__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_ec54d81f_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096b23c = 0;
      _DAT_0096b240 = 0;
      _DAT_0096b244 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b248,"Unused");
      _DAT_0096b254 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b258,"SteamWorkshopID");
      _DAT_0096b264 = 6;
      _DAT_0096b268 = 0x10;
      _DAT_0096b26c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b270,"AStr");
      _DAT_0096b27c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b280,"Description");
      _DAT_0096b28c = 6;
      _DAT_0096b290 = 0x20;
      _DAT_0096b294 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b298,"AStr");
      _DAT_0096b2a4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b2a8,"UsesCustomName");
      _DAT_0096b2b4 = 1;
      _DAT_0096b2b8 = 0x68;
      _DAT_0096b2bc = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b2c0,"bool");
      _DAT_0096b2cc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b2d0,"PowerSupplied_W");
      _DAT_0096b2dc = 4;
      _DAT_0096b2e0 = 0x1b0;
      _DAT_0096b2e4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b2e8,"double");
      _DAT_0096b2f4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b2f8,"Propellant");
      _DAT_0096b304 = 8;
      _DAT_0096b308 = 0x1b8;
      _DAT_0096b30c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b310,"Material");
      _DAT_0096b31c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b320,"CoilComposition");
      _DAT_0096b32c = 8;
      _DAT_0096b330 = 0x1bc;
      _DAT_0096b334 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b338,"Material");
      _DAT_0096b344 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b348,"ChamberLength_m");
      _DAT_0096b354 = 4;
      _DAT_0096b358 = 0x1c0;
      _DAT_0096b35c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b360,"double");
      _DAT_0096b36c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b370,"CoilRadius_m");
      _DAT_0096b37c = 4;
      _DAT_0096b380 = 0x1c8;
      _DAT_0096b384 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b388,"double");
      _DAT_0096b394 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b398,"ThermalRocket");
      _DAT_0096b3a4 = 10;
      _DAT_0096b3a8 = 0x1d0;
      _DAT_0096b3ac = 0x140;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b3b0,"ThermalRocketSubModule");
      _DAT_0096b3bc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b3c0,"Gimbal");
      _DAT_0096b3cc = 10;
      _DAT_0096b3d0 = 0x70;
      _DAT_0096b3d4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b3d8,"TurretSubModule");
      _DAT_0096b3e4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b3e8,"GimbalAngle_degrees");
      _DAT_0096b3f4 = 4;
      _DAT_0096b3f8 = 0x178;
      _DAT_0096b3fc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b400,"double");
      _DAT_0096b40c = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_ResistojetModule__ReflectionInfoStruct_class_ResistojetModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_73a9b0b0__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_ec54d81f_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_0096b23c + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_0096b240 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0096b244 + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_0096b248 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0096b254)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0096b255)[iVar1];
  return __return_storage_ptr__;
}





//==== 005c1620 StaticGetMemberCount_005c1620 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl ResistojetModule__ReflectionInfoStruct_class_ResistojetModule___StaticGetMemberCount(void) */

int __cdecl
ResistojetModule__ReflectionInfoStruct_class_ResistojetModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_871fe197__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_871fe197__thread_safe_static_guard_0__);
    if ( cde_l2_871fe197__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_aff1098d_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096b054 = 0;
      _DAT_0096b058 = 0;
      _DAT_0096b05c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b060,"Unused");
      _DAT_0096b06c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b070,"SteamWorkshopID");
      _DAT_0096b07c = 6;
      _DAT_0096b080 = 0x10;
      _DAT_0096b084 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b088,"AStr");
      _DAT_0096b094 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b098,"Description");
      _DAT_0096b0a4 = 6;
      _DAT_0096b0a8 = 0x20;
      _DAT_0096b0ac = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b0b0,"AStr");
      _DAT_0096b0bc = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b0c0,"UsesCustomName");
      _DAT_0096b0cc = 1;
      _DAT_0096b0d0 = 0x68;
      _DAT_0096b0d4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b0d8,"bool");
      _DAT_0096b0e4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b0e8,"PowerSupplied_W");
      _DAT_0096b0f4 = 4;
      _DAT_0096b0f8 = 0x1b0;
      _DAT_0096b0fc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b100,"double");
      _DAT_0096b10c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b110,"Propellant");
      _DAT_0096b11c = 8;
      _DAT_0096b120 = 0x1b8;
      _DAT_0096b124 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b128,"Material");
      _DAT_0096b134 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b138,"CoilComposition");
      _DAT_0096b144 = 8;
      _DAT_0096b148 = 0x1bc;
      _DAT_0096b14c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b150,"Material");
      _DAT_0096b15c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b160,"ChamberLength_m");
      _DAT_0096b16c = 4;
      _DAT_0096b170 = 0x1c0;
      _DAT_0096b174 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b178,"double");
      _DAT_0096b184 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b188,"CoilRadius_m");
      _DAT_0096b194 = 4;
      _DAT_0096b198 = 0x1c8;
      _DAT_0096b19c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b1a0,"double");
      _DAT_0096b1ac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b1b0,"ThermalRocket");
      _DAT_0096b1bc = 10;
      _DAT_0096b1c0 = 0x1d0;
      _DAT_0096b1c4 = 0x140;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b1c8,"ThermalRocketSubModule");
      _DAT_0096b1d4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b1d8,"Gimbal");
      _DAT_0096b1e4 = 10;
      _DAT_0096b1e8 = 0x70;
      _DAT_0096b1ec = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b1f0,"TurretSubModule");
      _DAT_0096b1fc = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b200,"GimbalAngle_degrees");
      _DAT_0096b20c = 4;
      _DAT_0096b210 = 0x178;
      _DAT_0096b214 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096b218,"double");
      _DAT_0096b224 = 0;
      atexit( private__static_int_const___cdecl_ResistojetModule__ReflectionInfoStruct_class_ResistojetModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_871fe197__thread_safe_static_guard_0__);
    }
  }
  return 0xc;
}





//==== 005c19b0 StaticGetReflectionInfo_005c19b0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct ResistojetModule__ReflectionInfoStruct_L_classResistojetModule_G_ * __cdecl
   ResistojetModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_ResistojetModule_G_ * __cdecl
ResistojetModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_7fcbdc73__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_7fcbdc73__thread_safe_static_guard_0__);
    if ( cde_l2_7fcbdc73__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_823c606b_ReflectionInfo) = &vftable_203;
      _Init_thread_footer(& cde_l2_7fcbdc73__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_823c606b_ReflectionInfo;
}





//==== 005c1b30 GetComposition_005c1b30 ====

/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   ThermalRocketSubModule__GetComposition(void)const  */

Darray_L_MaterialComposition_G_ * __thiscall
ThermalRocketSubModule__GetComposition
          (ThermalRocketSubModule *this,Darray_L_MaterialComposition_G_ *__return_storage_ptr__)

{
  MaterialComposition *pMVar1;
  double dVar2;
  double dVar3;
  Material *pMVar4;
  int iVar5;
  Darray_L_MaterialComposition_G_ *this_00;
  bool bVar6;
  double dVar7;
  undefined4 uStack_18;
  
  this_00 = __return_storage_ptr__;
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (MaterialComposition *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  (**(code **)((this->Injector)._pad_0x0_0 + 0x68))(__return_storage_ptr__);
  dVar2 = this->ChamberWallThickness_m;
  pMVar4 = this->ChamberComposition;
  dVar7 = GetPrimarySurfaceArea_m2(this);
  dVar3 = pMVar4->Density_kg__m3;
  iVar5 = this_00->Size;
  __return_storage_ptr__ = (Darray_L_MaterialComposition_G_ *)(iVar5 + 1);
  util__Darray_L_MaterialConstituent_G___SetSize
            ((Darray_L_MaterialConstituent_G_ *)this_00,(int *)&__return_storage_ptr__);
  bVar6 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                    ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar5);
  if (bVar6) {
    pMVar1 = this_00->Data + this_00->Size + -1;
    pMVar1->Type = pMVar4;
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar1) + 0x4)) = uStack_18;
    pMVar1->Mass_kg = dVar3 * dVar7 * dVar2;
  }
  return this_00;
}

//==== 005c1bc0 GetPowerUsage_005c1bc0 ====


/* public: virtual class util__Darray_L_structPowerUsage_G_ __thiscall
   ThermalRocketSubModule__GetPowerUsage(void)const  */

void __thiscall ThermalRocketSubModule__GetPowerUsage(ThermalRocketSubModule *this)

{
  undefined4 *in_stack_00000004;
  
  *in_stack_00000004 = 0;
  in_stack_00000004[1] = 0;
  in_stack_00000004[2] = 0;
  in_stack_00000004[3] = 0;
  *in_stack_00000004 = (undefined4)(uintptr_t)(&vftable_105);
  in_stack_00000004[1] = 0;
  in_stack_00000004[2] = 0;
  in_stack_00000004[3] = 0;
  return;
}





//==== 005c1bf0 GetStatuses_005c1bf0 ====

/* public: virtual class DesignStatusBuffer  ThermalRocketSubModule__GetStatuses(class
   DataParser *)const  */

DesignStatusBuffer * 
ThermalRocketSubModule__GetStatuses
          (ThermalRocketSubModule *this,DesignStatusBuffer *__return_storage_ptr__,
          DataParser *param_1)

{
  undefined8 stack0xffffff78;
  undefined8 stack0xffffff7c;
  Str_L_char_G_ SVar1;
  Str_L_char_G_ SVar2;
  Str_L_char_G_ SVar3;
  Str_L_char_G_ SVar4;
  Str_L_char_G_ SVar5;
  Str_L_char_G_ SVar6;
  Str_L_char_G_ SVar7;
  Str_L_char_G_ *pSVar8;
  Str_L_char_G_ *pSVar9;
  char *pcVar10;
  float10 fVar11;
  double dVar12;
  char *pcVar13;
  Str_L_char_G_ *pSVar14;
  int iVar15;
  int iVar16;
  Str_L_char_G_ *pSVar17;
  ModulePlacer *pMVar18;
  Str_L_char_G_ local_60;
  Str_L_char_G_ local_54;
  Str_L_char_G_ local_48;
  Str_L_char_G_ local_3c;
  Str_L_char_G_ local_30;
  Str_L_char_G_ local_24;
  double local_18;
  undefined1 local_10 [4];
  undefined8 local_c;
  
  __return_storage_ptr__->DataManager = (DataParser *)0x0;
  (__return_storage_ptr__->Messages)._pad_0x0_0 = 0;
  (__return_storage_ptr__->Messages).Data = (DesignStatusMessage *)0x0;
  (__return_storage_ptr__->Messages).Size = 0;
  *(undefined8 *)&(__return_storage_ptr__->Messages).Capacity = 0;
  (**(code **)((this->Injector)._pad_0x0_0 + 100))();
  util__Str_char___Str_char(&local_60,"ChamberComposition->GetSafeUseTemperature_K()");
  util__Str_char___Str_char(&local_3c,"GetSteadyStateWallTemperature_K()");
  util__Str_char___Str_char(&local_30,"ThermalRocketWallMelt");
  local_24.Data = (char *)0x0;
  local_24.Capacity = 0;
  local_24.Length = 0;
  GetGasWallTemperature_K(this);
  fVar11 = (float10)FUN_005c2210(this,0);
  *(uint64_t *)&local_c = (double)fVar11;
  iVar16 = 0x14;
  dVar12 = GetGasWallTemperature_K(this);
  pcVar13 = (char *)(uintptr_t)(SUB84(dVar12,0));
  iVar15 = (int)((ulonglong)dVar12 >> 0x20);
  fVar11 = (float10)FUN_005c2210(this,0);
  pSVar17 = &local_24;
  local_18 = (double)fVar11;
  pMVar18 = (ModulePlacer *)0x0;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff7c,&local_60);
  dVar12 = Material__GetSafeUseTemperature_K(this->ChamberComposition);
  pcVar10 = (char *)((ulonglong)dVar12 >> 0x20);
  SVar5.Capacity = iVar16;
  SVar5.Data = (char *)iVar15;
  SVar5.Length = (int)pSVar17;
  pSVar8 = Print(&local_54,(double)CONCAT44(pcVar13,pcVar10),SVar5);
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff78,&local_3c);
  SVar1.Capacity = iVar15;
  SVar1.Data = pcVar13;
  SVar1.Length = (int)pSVar8;
  pSVar9 = Print(&local_48,(double)CONCAT44(pcVar10,(int)((ulonglong)local_c >> 0x20)),SVar1);
  pSVar14 = &local_30;
  *(uint32_t *)&local_c = Material__GetSafeUseTemperature_K(this->ChamberComposition);
  pcVar10 = (char *)(uint)(local_c <= local_18);
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,local_c <= local_18,pSVar14,pSVar9,pSVar8,pSVar17,pMVar18);
  if (local_48.Data != (char *)0x0) {
    port_op_delete(local_48.Data);
    local_48.Data = (char *)0x0;
  }
  if (local_54.Data != (char *)0x0) {
    port_op_delete(local_54.Data);
    local_54.Data = (char *)0x0;
  }
  if (local_24.Data != (char *)0x0) {
    port_op_delete(local_24.Data);
    local_24.Data = (char *)0x0;
  }
  if (local_30.Data != (char *)0x0) {
    port_op_delete(local_30.Data);
    local_30.Data = (char *)0x0;
  }
  if (local_3c.Data != (char *)0x0) {
    port_op_delete(local_3c.Data);
    local_3c.Data = (char *)0x0;
  }
  if (local_60.Data != (char *)0x0) {
    port_op_delete(local_60.Data);
  }
  util__Str_char___Str_char(&local_54,"GetHeatGenerated_W()");
  util__Str_char___Str_char(&local_3c,"ThermalRocketOverheating");
  pMVar18 = (ModulePlacer *)0x0;
  pSVar17 = (Str_L_char_G_ *)local_10;
  *(uint32_t *)&local_10 = (uint32_t)0x0;
  pSVar8 = &local_24;
  (*(uint32_t*)&(local_c)) = 0;
  (*(uint32_t*)((char*)&(local_c)+4)) = 0;
  local_24.Data = (char *)0x0;
  local_24.Capacity = 0;
  local_24.Length = 0;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff78,&local_54);
  dVar12 = GetHeatGenerated_W(this);
  SVar2.Capacity = (int)pSVar9;
  SVar2.Data = (char *)pSVar14;
  SVar2.Length = (int)pSVar8;
  pSVar9 = Print(&local_60,(double)CONCAT44(pcVar10,(int)((ulonglong)dVar12 >> 0x20)),SVar2);
  pSVar14 = &local_3c;
  local_18 = GetHeatGenerated_W(this);
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,0.0 < local_18,pSVar14,pSVar9,pSVar8,pSVar17,pMVar18);
  if (local_60.Data != (char *)0x0) {
    port_op_delete(local_60.Data);
    local_60.Data = (char *)0x0;
  }
  if (local_24.Data != (char *)0x0) {
    port_op_delete(local_24.Data);
    local_24.Data = (char *)0x0;
  }
  if (local_10 != (uint32_t)0x0) {
    port_op_delete((void *)local_10);
    *(uint32_t *)&local_10 = (uint32_t)0x0;
  }
  if (local_3c.Data != (char *)0x0) {
    port_op_delete(local_3c.Data);
    local_3c.Data = (char *)0x0;
  }
  if (local_54.Data != (char *)0x0) {
    port_op_delete(local_54.Data);
  }
  util__Str_char___Str_char(&local_48,"GetChamberStress_Pa()");
  util__Str_char___Str_char(&local_30,"ChamberComposition->GetYieldStrength_Pa()");
  util__Str_char___Str_char(&local_3c,"ThermalRocketOverpressurized");
  pMVar18 = (ModulePlacer *)0x0;
  pSVar17 = &local_24;
  local_24.Data = (char *)0x0;
  local_24.Capacity = 0;
  local_24.Length = 0;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff7c,&local_48);
  dVar12 = GetChamberStress_Pa(this);
  pcVar10 = (char *)((ulonglong)dVar12 >> 0x20);
  SVar6.Capacity = (int)pSVar8;
  SVar6.Data = (char *)pSVar9;
  SVar6.Length = (int)pSVar17;
  pSVar8 = Print(&local_54,(double)CONCAT44(pSVar14,pcVar10),SVar6);
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff78,&local_30);
  dVar12 = Material__GetYieldStrength_Pa(this->ChamberComposition);
  SVar3.Capacity = (int)pSVar9;
  SVar3.Data = (char *)pSVar14;
  SVar3.Length = (int)pSVar8;
  pSVar9 = Print(&local_60,(double)CONCAT44(pcVar10,(int)((ulonglong)dVar12 >> 0x20)),SVar3);
  pSVar14 = &local_3c;
  *(uint32_t *)&local_c = Material__GetYieldStrength_Pa(this->ChamberComposition);
  local_18 = GetChamberStress_Pa(this);
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,local_c < local_18,pSVar14,pSVar9,pSVar8,pSVar17,pMVar18);
  if (local_60.Data != (char *)0x0) {
    port_op_delete(local_60.Data);
    local_60.Data = (char *)0x0;
  }
  if (local_54.Data != (char *)0x0) {
    port_op_delete(local_54.Data);
    local_54.Data = (char *)0x0;
  }
  if (local_24.Data != (char *)0x0) {
    port_op_delete(local_24.Data);
    local_24.Data = (char *)0x0;
  }
  if (local_3c.Data != (char *)0x0) {
    port_op_delete(local_3c.Data);
    local_3c.Data = (char *)0x0;
  }
  if (local_30.Data != (char *)0x0) {
    port_op_delete(local_30.Data);
    local_30.Data = (char *)0x0;
  }
  if (local_48.Data != (char *)0x0) {
    port_op_delete(local_48.Data);
  }
  util__Str_char___Str_char(&local_48,"GetChamberThermalStress_Pa()");
  util__Str_char___Str_char(&local_30,"ChamberComposition->GetYieldStrength_Pa()");
  util__Str_char___Str_char(&local_3c,"ThermalRocketThermalExpansionStress");
  pMVar18 = (ModulePlacer *)0x0;
  pSVar17 = &local_24;
  local_24.Data = (char *)0x0;
  local_24.Capacity = 0;
  local_24.Length = 0;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff7c,&local_48);
  dVar12 = GetChamberThermalStress_Pa(this);
  pcVar10 = (char *)((ulonglong)dVar12 >> 0x20);
  SVar7.Capacity = (int)pSVar8;
  SVar7.Data = (char *)pSVar9;
  SVar7.Length = (int)pSVar17;
  pSVar8 = Print(&local_54,(double)CONCAT44(pSVar14,pcVar10),SVar7);
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff78,&local_30);
  dVar12 = Material__GetYieldStrength_Pa(this->ChamberComposition);
  SVar4.Capacity = (int)pSVar9;
  SVar4.Data = (char *)pSVar14;
  SVar4.Length = (int)pSVar8;
  pSVar9 = Print(&local_60,(double)CONCAT44(pcVar10,(int)((ulonglong)dVar12 >> 0x20)),SVar4);
  pSVar14 = &local_3c;
  *(uint32_t *)&local_c = Material__GetYieldStrength_Pa(this->ChamberComposition);
  local_18 = GetChamberThermalStress_Pa(this);
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,local_c < local_18,pSVar14,pSVar9,pSVar8,pSVar17,pMVar18);
  if (local_60.Data != (char *)0x0) {
    port_op_delete(local_60.Data);
    local_60.Data = (char *)0x0;
  }
  if (local_54.Data != (char *)0x0) {
    port_op_delete(local_54.Data);
    local_54.Data = (char *)0x0;
  }
  if (local_24.Data != (char *)0x0) {
    port_op_delete(local_24.Data);
    local_24.Data = (char *)0x0;
  }
  if (local_3c.Data != (char *)0x0) {
    port_op_delete(local_3c.Data);
    local_3c.Data = (char *)0x0;
  }
  if (local_30.Data != (char *)0x0) {
    port_op_delete(local_30.Data);
    local_30.Data = (char *)0x0;
  }
  if (local_48.Data != (char *)0x0) {
    port_op_delete(local_48.Data);
  }
  return __return_storage_ptr__;
}

//==== 005c2190 GetPointerPropertyChoices_005c2190 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   ThermalRocketSubModule__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
ThermalRocketSubModule__GetPointerPropertyChoices
          (ThermalRocketSubModule *this,ClassMember *param_1,SerializationManagerInterface *param_2)

{
  char *pcVar1;
  SerializationManagerInterface SVar2;
  int in_stack_0000000c;
  
  if (*(int *)&param_2[1] < 1) {
    SVar2 = *(SerializationManagerInterface *)&cde_l2_0b2b1c9f_NullString;
  }
  else {
    SVar2 = *param_2;
  }
  for (pcVar1 = "ChamberComposition";
      (pcVar1[(int)(*(int *)&SVar2 + -0x925a34)] != '\0' || (*pcVar1 != '\0')); pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)(*(int *)&SVar2 + -0x925a34)] != *pcVar1) {
      (param_1->Name).Data =
           (char *)&vftable_85;
      (param_1->Name).Capacity = 0;
      (param_1->Name).Length = 0;
      *(undefined4 *)&param_1->Type = 0;
      return param_1;
    }
  }
  GetMaterials((DataParser *)param_1,in_stack_0000000c,false);
  return param_1;
}





//==== 005c2570 MakeTuple_util__Vec2_double__util__Color_ ====

/* struct util__tuple2_L_structutil__Vec2_L_double_G__Cstructutil__Color_G_ __cdecl util__MakeTuple_L_struct_util__Vec2_L_double_G__Cstructutil__Color_G_(struct util__Vec2_L_double_G_,struct util__Color) */

tuple2_L_util__Vec2_L_double_G__Cutil__Color_G_ * __cdecl
util__MakeTuple_struct_util__Vec2_double__struct_util__Color
          (tuple2_L_util__Vec2_L_double_G__Cutil__Color_G_ *__return_storage_ptr__,Vec2_L_double_G_ param_1,
          Color param_2)

{
  undefined4 in_stack_00000008;
  Str_L_char_G_ local_30;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&local_30,(Str_L_char_G_ *)&param_2);
  local_8 = (float)param_2._pad_0xc_3;
  *(uint32_t *)&local_24 = param_2._pad_0xc_3;
  *(uint32_t *)&local_c = param_2.Hue_degrees;
  *(uint32_t *)&local_20 = param_2.Hue_degrees;
  *(uint32_t *)&local_10 = param_2.Saturation;
  *(uint32_t *)&local_1c = param_2.Saturation;
  *(uint32_t *)&local_14 = param_2.Value;
  local_18 = param_2.Value;
  *(undefined4 *)&(__return_storage_ptr__->Value1).X = in_stack_00000008;
  *(undefined4 *)((int)&(__return_storage_ptr__->Value1).X + 4) = param_1.X;
  *(undefined4 *)&(__return_storage_ptr__->Value1).Y = param_1.Y;
  *(undefined4 *)((int)&(__return_storage_ptr__->Value1).Y + 4) = param_1.Y;
  (__return_storage_ptr__->Value2)._pad_0x0_0 = (int)&vftable_5;
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const((Str_L_char_G_ *)&(__return_storage_ptr__->Value2)._pad_0x4_1,&local_30);
  (__return_storage_ptr__->Value2).Hue_degrees = local_8;
  (__return_storage_ptr__->Value2).Saturation = local_c;
  (__return_storage_ptr__->Value2).Value = local_10;
  (__return_storage_ptr__->Value2)._pad_0x0_0 = (int)&vftable_5;
  (__return_storage_ptr__->Value2).Alpha = local_14;
  if (local_30.Data != (char *)0x0) {
    port_op_delete(local_30.Data);
  }
  if (param_2._pad_0x0_0 != 0) {
    port_op_delete((void *)param_2._pad_0x0_0);
  }
  return __return_storage_ptr__;
}

//==== 005c2650 Darray_util__tuple2_util__Vec2_double__util__Color___ ====


/* public:  util__Darray_L_structutil__tuple2_L_structutil__Vec2_L_double_G__Cstructutil__Color_G___G___Darray_L_structutil__tuple2_L_structutil__Vec2_L_double_G__Cstructutil__Color_G__G_(int) */

Darray_L_struct_util__tuple2_L_struct_util__Vec2_L_double_G__Cstruct_util__Color_G___G_ * 
util__Darray_struct_util__tuple2_struct_util__Vec2_double__struct_util__Color_____Darray_struct_util__tuple2_struct_util__Vec2_double__struct_util__Color
          (Darray_L_struct_util__tuple2_L_struct_util__Vec2_L_double_G__Cstruct_util__Color_G___G_ *this,
          int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_24 [16];
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  *(undefined ***)this = &vftable_206;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(int *)(this + 0xc) = param_1;
  if ((param_1 < 0) || (0x3fffffff < param_1)) {
    *(undefined4 *)(this + 0xc) = 0;
  }
  else if (0 < param_1) {
    uVar3 = -(uint)((int)((ulonglong)(uint)param_1 * 0x30 >> 0x20) != 0) |
            (uint)((ulonglong)(uint)param_1 * 0x30);
    piVar2 = (int *)port_op_new(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      *piVar2 = param_1;
      piVar2 = piVar2 + 1;
      piVar4 = piVar2;
      if (param_1 != 0) {
        do {
          *piVar4 = 0;
          piVar4[1] = 0;
          piVar4[2] = 0;
          piVar4[3] = 0;
          Color__Color((Color *)(piVar4 + 4));
          param_1 = param_1 + -1;
          piVar4 = piVar4 + 0xc;
        } while (param_1 != 0);
      }
    }
    *(int **)(this + 4) = piVar2;
    param_1 = 0;
    if (0 < *(int *)(this + 0xc)) {
      iVar5 = 0;
      do {
        Color__Color((Color *)auStack_24);
        iVar1 = *(int *)(this + 4);
        *(undefined8 *)(iVar5 + iVar1) = 0;
        *(undefined8 *)(iVar5 + 8 + iVar1) = 0;
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar1 + 0x14 + iVar5),(Str_L_char_G_ *)(auStack_24 + 4));
        *(float *)(iVar5 + 0x20 + iVar1) = fStack_14;
        *(float *)(iVar5 + 0x24 + iVar1) = fStack_10;
        *(float *)(iVar5 + 0x28 + iVar1) = fStack_c;
        *(float *)(iVar5 + 0x2c + iVar1) = fStack_8;
        (*(uint32_t*)&(auStack_24)) = (uint32_t)(uintptr_t)(&vftable_5);
        if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
          port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
        }
        iVar5 = iVar5 + 0x30;
        param_1 = param_1 + 1;
      } while (param_1 < *(int *)(this + 0xc));
    }
    return this;
  }
  return this;
}





//==== 005c27b0 Darray_util__tuple2_util__Vec2_double__util__Color____005c27b0 ====


/* public: virtual  Darray_L_structutil__tuple2_L_structutil__Vec2_L_double_G__Cstructutil__Color_G__G___dtor(void)
    */

void __thiscall
util__Darray_struct_util__tuple2_struct_util__Vec2_double__struct_util__Color______Darray_struct_util__tuple2_struct_util__Vec2_double__struct_util__Color(Darray_L_struct_util__tuple2_L_struct_util__Vec2_L_double_G__Cstruct_util__Color_G___G_ *this)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar3 = *(int *)(this + 4);
  *(undefined ***)this = &vftable_206;
  if (iVar3 != 0) {
    piVar1 = (int *)(iVar3 + -4);
    iVar5 = *piVar1;
    if (iVar5 != 0) {
      puVar4 = (undefined4 *)(iVar5 * 0x30 + 0x14 + iVar3);
      do {
        puVar2 = puVar4 + -0xc;
        iVar5 = iVar5 + -1;
        puVar4[-0xd] = (undefined4)(uintptr_t)(&vftable_5);
        if ((void *)*puVar2 != (void *)0x0) {
          port_op_delete((void *)*puVar2);
          *puVar2 = 0;
        }
        puVar4 = puVar2;
      } while (iVar5 != 0);
      iVar5 = *piVar1;
    }
    port_op_delete(piVar1,iVar5 * 0x30 + 4);
  }
  *(undefined ***)this = (undefined **)(&vftable);
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 005c28e0 scalar_deleting_destructor_005c28e0 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__tuple2_L_struct_util__Vec2_L_double_G__Cstructutil__Color_G__G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__tuple2_struct_util__Vec2_double__struct_util__Color______scalar_deleting_destructor__o2
          (Darray_L_struct_util__tuple2_L_struct_util__Vec2_L_double_G__Cstruct_util__Color_G___G_ *this,
          uint param_1)

{
  util__Darray_struct_util__tuple2_struct_util__Vec2_double__struct_util__Color______scalar_deleting_destructor(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 005c2910 Add_005c2910 ====


/* public: bool  util__Darray_L_structutil__tuple2_L_structutil__Vec2_L_double_G__Cstruct_util__Color_G__G___Add(struct util__tuple2_L_structutil__Vec2_L_double_G__Cstructutil__Color_G_ const &) */

bool 
util__Darray_struct_util__tuple2_struct_util__Vec2_double__struct_util__Color_____Add
          (Darray_L_struct_util__tuple2_L_struct_util__Vec2_L_double_G__Cstruct_util__Color_G___G_ *this,
          tuple2_L_struct_util__Vec2_L_double_G__Cstruct_util__Color_G_ *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  int iStack_8;
  
  iVar2 = *(int *)(this + 8);
  iStack_8 = iVar2 + 1;
  SetSize(this,&iStack_8);
  bVar6 = CheckSize(this,iVar2);
  if (!bVar6) {
  }
  iVar2 = *(int *)(this + 4);
  iVar7 = *(int *)(this + 8) * 0x30;
  uVar3 = *(undefined4 *)(param_1 + 4);
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)(iVar7 + -0x30 + iVar2);
  *puVar1 = *(undefined4 *)param_1;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar2 + -0x1c + iVar7),(Str_L_char_G_ *)(param_1 + 0x14));
  *(undefined4 *)(iVar7 + -0x10 + iVar2) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(iVar7 + -0xc + iVar2) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(iVar7 + -8 + iVar2) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(iVar7 + -4 + iVar2) = *(undefined4 *)(param_1 + 0x2c);
  return true;
}





//==== 005c3420 BuildModels_005c3420 ====

/* public: void  ThermalRocketSubModule__BuildModels(class util__Darray_L_class_util__SharedPtr_L_structGameModel_G__G_ *,class util__Darray_L_classutil__WeakPtr_L_structGameModel_G__G_
   *,class util__Darray_L_classutil__WeakPtr_L_structGameModel_G__G_ *,class util__WeakPtr_L_struct_GameModel_G_ *,class util__Maybe_L_structTurretSubModule_G_,double)const  */

void 
ThermalRocketSubModule__BuildModels
          (undefined4 param_1_00,Darray_L_class_util__SharedPtr_L_struct_GameModel_G___G_ *param_1,
          Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_2,
          Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_3,undefined4 *param_4)

{
  undefined8 stack0x00000014;
  undefined8 stack0xffffff94;
  undefined8 stack0xffffffbc;
  undefined8 stack0xfffffffc;
  int iVar1;
  Quaternion_L_double_G_ QVar2;
  Maybe_L_int_G_ MVar3;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *pDVar4;
  bool bVar5;
  int iVar6;
  undefined4 *puVar7;
  Cylinder_L_double_G_ *pCVar8;
  GameModel *pGVar9;
  ReferenceControllerRegistry *pRVar10;
  ReferenceController *pRVar11;
  GameModel *pGVar12;
  double *pdVar13;
  VertexBufferObject *pVVar14;
  double *pdVar15;
  Maybe_L_double_G_ *pMVar16;
  CustomTexture *this;
  int *piVar17;
  TextureInitOptions *pTVar18;
  ThermalRocketSubModule *pTVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  char in_stack_00000114;
  double in_stack_0000011c;
  ReferenceController *pRVar24;
  code *pcVar25;
  int *piVar26;
  undefined4 uVar27;
  TextureInitOptions local_a8;
  double local_80;
  undefined4 *local_78;
  undefined1 local_74 [12];
  GameModel *pGStack_68;
  undefined1 local_64 [8];
  undefined8 uStack_5c;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *local_54;
  ThermalRocketSubModule *local_50;
  undefined1 local_4c [12];
  ReferenceController *pRStack_40;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *local_3c;
  undefined **local_38;
  void *pvStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined **local_28;
  void *pvStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  TransformStack local_d;
  GameModel *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(uint32_t *)&local_3c = (uint32_t)(uintptr_t)(param_2);
  *(uint32_t *)&local_54 = (uint32_t)(uintptr_t)(param_3);
  local_78 = param_4;
  (**(code **)(*(int *)param_2 + 0x10))();
  (**(code **)(*(int *)param_3 + 0x10))();
  pRVar11 = (ReferenceController *)param_4[1];
  *param_4 = 0;
  param_4[1] = 0;
  if (pRVar11 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar11);
  }
  pcVar25 = DebugBreak_exref;
  local_80 = 0.0;
  if (in_stack_00000114 != '\0') {
    Graphics__TransformStack__TransformStack(&local_d,Style__Default);
    Graphics__Translate(0.0,0.0,in_stack_0000011c / 1000.0);
    if (in_stack_00000114 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    join_0x00001100_8_ = TurretSubModule__GetOuterRadius_m((TurretSubModule *)&stack0x00000014);
    Graphics__Translate(0.0,0.0,join_0x00001100_8_ / 1000.0);
    if (in_stack_00000114 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    TurretSubModule__BuildModels((TurretSubModule *)&stack0x00000014,param_1,true);
    *(uint32_t *)&local_c = (uint32_t)(uintptr_t)((GameModel *)0x0);
    iVar6 = (**(code **)(*(int *)param_1 + 0xc))();
    if ((int)local_c < iVar6) {
      do {
        puVar7 = (undefined4 *)(*(code *)**(undefined4 **)param_1)(&local_c);
        pRVar11 = (ReferenceController *)puVar7[1];
        stack0xffffffbc = (double)CONCAT44(*puVar7,(*(uint32_t*)((char*)&(local_4c)+8)));
        if (pRVar11 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar11);
        }
        (*(uint32_t*)((char*)&(uStack_5c)+4)) = (uint32_t)(uintptr_t)(local_3c);
        iVar6 = *(int *)(local_3c + 8);
        stack0xffffff94 = (double)CONCAT44(iVar6 + 1,(*(uint32_t*)((char*)&(local_74)+8)));
        util__Darray_class_util__WeakPtr_class_Body_____SetSize(local_3c,(int *)&pGStack_68);
        pDVar4 = (Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)(uintptr_t)((*(uint32_t*)((char*)&(uStack_5c)+4)));
        bVar5 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_*)((Darray_L_class_util__WeakPtr_L_class_Body_G___G_*)((*(uint32_t*)((char*)&(uStack_5c)+4)))),iVar6);
        if (bVar5) {
          iVar6 = *(int *)(pDVar4 + 8);
          iVar1 = *(int *)(pDVar4 + 4);
          pRVar24 = *(ReferenceController **)(iVar1 + -4 + iVar6 * 8);
          *(ReferenceController **)(iVar1 + -8 + iVar6 * 8) = pRStack_40;
          *(ReferenceController **)(iVar1 + -4 + iVar6 * 8) = pRVar11;
          if (pRVar11 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(pRVar11);
          }
          if (pRVar24 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar24);
          }
        }
        if (pRVar11 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar11);
        }
        *(uint32_t *)&local_c = (uint32_t)(uintptr_t)((GameModel *)((int)&(local_c->VertexObject)._pad_0x0_0 + 1));
        iVar6 = (**(code **)(*(int *)param_1 + 0xc))();
        param_3 = local_54;
        pcVar25 = DebugBreak_exref;
      } while ((int)local_c < iVar6);
    }
    Graphics__TransformStack___TransformStack(&local_d);
  }
  Graphics__Translate(0.0,0.0,in_stack_0000011c / 1000.0);
  if (in_stack_00000114 != '\0') {
    join_0x00001100_8_ = TurretSubModule__GetOuterRadius_m((TurretSubModule *)&stack0x00000014);
    Graphics__Translate(0.0,0.0,join_0x00001100_8_ / 1000.0);
    if (in_stack_00000114 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      (*pcVar25)();
    }
    join_0x00001100_8_ =
         TurretSubModule__GetObjectOffsetFromTurret_m((TurretSubModule *)&stack0x00000014);
    Graphics__Translate(0.0,0.0,join_0x00001100_8_ / 1000.0);
  }
  pCVar8 = TurbopumpSubModule__GetTurbopumpCylinder_m
                     (&local_50->Injector,(Cylinder_L_double_G_ *)local_4c);
  Graphics__Translate(0.0,0.0,(pCVar8->Height * 0.5) / 1000.0);
  TurbopumpSubModule__BuildModels(&local_50->Injector,param_1);
  puVar7 = (undefined4 *)(**(code **)(*(int *)param_1 + 8))();
  pRVar11 = (ReferenceController *)puVar7[1];
  (*(uint32_t*)&(uStack_5c)) = *puVar7;
  (*(uint32_t*)((char*)&(uStack_5c)+4)) = (uint32_t)(uintptr_t)((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)pRVar11);
  pRStack_40 = pRVar11;
  if (pRVar11 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar11);
  }
  util__Darray_class_util__WeakPtr_class_Body_____Add(param_3,(WeakPtr_L_class_Body_G_ *)(local_64 + 8))
  ;
  if (pRStack_40 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRStack_40);
  }
  pTVar19 = local_50;
  pCVar8 = TurbopumpSubModule__GetTurbopumpCylinder_m
                     (&local_50->Injector,(Cylinder_L_double_G_ *)local_4c);
  dVar23 = (pCVar8->Height * 0.5) / 1000.0;
  Graphics__Translate(0.0,0.0,dVar23);
  uVar20 = (undefined4)((ulonglong)dVar23 >> 0x20);
  pGVar9 = (GameModel *)(uintptr_t)(port_op_new(0xb8));
  if (pGVar9 == (GameModel *)0x0) {
    *(uint32_t *)&local_c = (uint32_t)(uintptr_t)((GameModel *)0x0);
LAB_005c37b3:
    pGVar9 = local_c;
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    (*pcVar25)();
  }
  else {
    (*(uint24_t*)((char*)&(MVar3)+5)) = (int3)((uint)uVar20 >> 8);
    MVar3.IsValidData = true;
    MVar3.Data = (uint)(in_stack_00000114 != '\0');
    pGVar9 = (GameModel *)
             GameModel__GameModel(pGVar9,pTVar19->ChamberComposition,(Material *)0x0,MVar3);
    *(uint32_t *)&local_c = (uint32_t)(uintptr_t)(pGVar9);
    if (pGVar9 == (GameModel *)0x0) goto LAB_005c37b3;
  }
  pRVar10 = util__ReferenceControllerRegistry__Get();
  pRVar11 = util__ReferenceControllerRegistry__Register(pRVar10,pGVar9);
  if (pRVar11 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(pRVar11);
  }
  iVar6 = *(int *)(param_1 + 8);
  pRStack_40 = (ReferenceController *)(iVar6 + 1);
  util__Darray_class_util__SharedPtr_struct_GameModel_____SetSize(param_1,(int *)(local_4c + 0xc));
  bVar5 = util__Darray_class_util__SharedPtr_struct_GameModel_____CheckSize(param_1,iVar6);
  pGVar9 = local_c;
  if (bVar5) {
    iVar6 = *(int *)(param_1 + 8);
    iVar1 = *(int *)(param_1 + 4);
    stack0xffffff94 = (double)CONCAT44(*(undefined4 *)(iVar1 + -8 + iVar6 * 8),(*(uint32_t*)((char*)&(local_74)+8)));
    pRStack_40 = *(ReferenceController **)(iVar1 + -4 + iVar6 * 8);
    *(GameModel **)(iVar1 + -8 + iVar6 * 8) = local_c;
    *(ReferenceController **)(iVar1 + -4 + iVar6 * 8) = pRVar11;
    if (pRVar11 != (ReferenceController *)0x0) {
      util__ReferenceController__AddStrongReference(pRVar11);
    }
    if ((pRStack_40 != (ReferenceController *)0x0) &&
       (bVar5 = util__ReferenceController__ReleaseStrongReference(pRStack_40), bVar5)) {
      pGVar12 = (GameModel *)0x0;
      if (pGStack_68 != (GameModel *)0x0) {
        GameModel___scalar_deleting_destructor(pGStack_68,1);
        pGVar12 = pGStack_68;
      }
      pRVar10 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar10,pGVar12);
    }
  }
  if (pRVar11 != (ReferenceController *)0x0) {
    bVar5 = util__ReferenceController__ReleaseStrongReference(pRVar11);
    if (bVar5) {
      if (pGVar9 != (GameModel *)0x0) {
        GameModel___scalar_deleting_destructor(pGVar9,1);
      }
      pRVar10 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar10,pGVar9);
    }
  }
  pTVar19 = local_50;
  uStack_5c = local_50->ChamberWallThickness_m;
  unique0x0000a400 = local_50->CachedChamberLength_m;
  dVar23 = GetNozzleLength_m(local_50);
  unique0x10000c15 = dVar23 + stack0xffffffbc + uStack_5c;
  Graphics__Translate(0.0,0.0,unique0x10000c15 / 1000.0);
  uVar20 = 0x54442d18;
  uVar22 = 0xbfe921fb;
  uVar21 = 0;
  uVar27 = 0;
  libm_sse2_sin_precise(0.0);
  stack0xffffffbc = (double)CONCAT44(uVar27,uVar21);
  (*(uint32_t*)&(uStack_5c)) = uVar21;
  *(uint64_t *)&local_64 = (uint64_t)((double)CONCAT44(uVar22,uVar20) * 0.0);
  (*(uint32_t*)((char*)&(uStack_5c)+4)) = (uint32_t)(uintptr_t)((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)uVar27);
  uVar21 = 0x54442d18;
  uVar27 = 0xbfe921fb;
  (*(uint32_t*)&(local_4c)) = uVar20;
  (*(uint32_t*)((char*)&(local_4c)+4)) = uVar22;
  libm_sse2_cos_precise(0.0);
  QVar2.Y = (*(uint32_t*)((char*)&(local_4c)+4));
  QVar2.X = (*(uint32_t*)&(local_4c));
  QVar2.Y = (*(uint32_t*)&(local_64));
  QVar2.Z = (*(uint32_t*)((char*)&(local_64)+4));
  QVar2.Z = (*(uint32_t*)&(local_64));
  QVar2.W = (*(uint32_t*)((char*)&(local_64)+4));
  QVar2.W = uVar21;
  (*(uint32_t *)((char *)&(QVar2.W) + 4)) = uVar27;
  Graphics__Rotate(QVar2);
  *(uint32_t *)&local_38 = (uint32_t)(uintptr_t)((undefined **)0x0);
  pvStack_34 = (void *)0x0;
  iStack_30 = 0;
  uStack_2c = 0;
  GetSpline_m(pTVar19);
  *(uint32_t *)&local_28 = (uint32_t)(uintptr_t)((undefined **)0x0);
  pvStack_24 = (void *)0x0;
  iStack_20 = 0;
  uStack_1c = 0;
  iVar6 = (*(code *)local_38[3])();
  util__Darray_struct_util__Vec2_double_____Darray_struct_util__Vec2_double
            ((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_28,iVar6);
  *(uint32_t *)&local_c = (uint32_t)(uintptr_t)((GameModel *)0x0);
  iVar6 = (*(code *)local_38[3])();
  if ((int)local_c < iVar6) {
    do {
      pdVar13 = (double *)(*(code *)*local_38)(&local_c);
      iVar6 = iStack_20;
      stack0xffffffbc = (double)CONCAT44(iStack_20 + 1,(*(uint32_t*)((char*)&(local_4c)+8)));
      unique0x100009c3 = pdVar13[1] / 1000.0;
      uStack_5c = *pdVar13 / 1000.0;
      util__Darray_struct_util__Vec2_double_____SetSize
                ((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_28,(int *)(local_4c + 0xc));
      bVar5 = util__Darray_struct_util__Vec2_double_____CheckSize
                        ((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_28,iVar6);
      if (bVar5) {
        *(double *)((int)pvStack_24 + iStack_20 * 0x10 + -0x10) = uStack_5c;
        *(double *)((int)pvStack_24 + iStack_20 * 0x10 + -8) = stack0xffffff94;
      }
      *(uint32_t *)&local_c = (uint32_t)(uintptr_t)((GameModel *)((int)&(local_c->VertexObject)._pad_0x0_0 + 1));
      iVar6 = (*(code *)local_38[3])();
      pTVar19 = local_50;
    } while ((int)local_c < iVar6);
  }
  puVar7 = (undefined4 *)(**(code **)(*(int *)param_1 + 8))();
  pGVar9 = (GameModel *)*puVar7;
  dVar23 = GetMaxRadius_m(pTVar19);
  iVar6 = GetUniversalRadialSegmentation(dVar23);
  if (iVar6 < 0x10) {
    iVar6 = 0x10;
  }
  pVVar14 = GameModel__GetVertexObject(pGVar9);
  RenderSpline((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_28,iVar6,true,false,pVVar14);
  *(uint32_t *)&local_c = (uint32_t)(uintptr_t)((GameModel *)0x0);
  if (iStack_30 != 1 && -1 < iStack_30 + -1) {
    do {
      stack0xffffffbc =
           (double)CONCAT44((undefined1 *)((int)&(local_c->VertexObject)._pad_0x0_0 + 1),
                            (*(uint32_t*)((char*)&(local_4c)+8)));
      pdVar13 = (double *)(*(code *)*local_38)(local_4c + 0xc);
      pdVar15 = (double *)(*(code *)*local_38)(&local_c);
      uStack_5c = (*pdVar15 - *pdVar13) * (*pdVar15 - *pdVar13) +
                  (pdVar15[1] - pdVar13[1]) * (pdVar15[1] - pdVar13[1]);
      pMVar16 = util__Sqrt((Maybe_L_double_G_ *)local_74,(double *)(local_64 + 8));
      if (pMVar16->IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      local_80 = pMVar16->Data + local_80;
      *(uint32_t *)&local_c = (uint32_t)(uintptr_t)((GameModel *)((int)&(local_c->VertexObject)._pad_0x0_0 + 1));
    } while ((int)local_c < iStack_30 + -1);
  }
  (*(uint64_t*)&(local_4c)) = GetMaxRadius_m(local_50);
  (*(uint64_t*)&(local_4c)) = (double)(*(uint64_t*)&(local_4c)) * 6.283185307179586;
  stack0xffffffbc = local_80;
  local_18 = 0;
  this = (CustomTexture *)(uintptr_t)(port_op_new(0x3c));
  if (this == (CustomTexture *)0x0) {
    piVar17 = (int *)0x0;
  }
  else {
    piVar17 = (int *)CustomTexture__CustomTexture(this);
    if (piVar17 != (int *)0x0) goto LAB_005c3b5e;
  }
  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl",
                  0xd4,"NewPointer",(char *)0x0);
  DebugBreak();
LAB_005c3b5e:
  piVar26 = piVar17;
  pRVar10 = util__ReferenceControllerRegistry__Get();
  (*(uint32_t*)((char*)&(local_18)+4)) = (uint32_t)(uintptr_t)(util__ReferenceControllerRegistry__Register(pRVar10,piVar26));
  (*(uint32_t*)&(local_18)) = (uint32_t)(uintptr_t)(piVar17);
  if ((*(uint32_t*)((char*)&(local_18)+4)) != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference((ReferenceController*)((ReferenceController*)((*(uint32_t*)((char*)&(local_18)+4)))));
  }
  uVar27 = 0;
  pcVar25 = (long long int (*)())(GetRocketEngineShader);
  uVar20 = (*(uint32_t*)&(local_4c));
  uVar21 = (*(uint32_t*)((char*)&(local_4c)+4));
  uVar22 = (*(uint32_t*)((char*)&(local_4c)+8));
  pRVar24 = pRStack_40;
  pTVar18 = Module__GetDefaultTextureOptions(&local_a8,true);
  piVar17 = (int *)local_18;
  pRVar11 = (ReferenceController *)(uintptr_t)((*(uint32_t*)((char*)&(local_18)+4)));
  if ((*(uint32_t*)((char*)&(local_18)+4)) != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference((ReferenceController*)((ReferenceController*)((*(uint32_t*)((char*)&(local_18)+4)))));
  }
  ArmorTextureHandler__BuildNormalsTexture_L_class_GeneralModuleShader_P____cdecl_P__void__G_
            (piVar17,pRVar11,pTVar18,uVar20,uVar21,uVar22,pRVar24,pcVar25,uVar27);
  puVar7 = (undefined4 *)(**(code **)(*(int *)param_1 + 8))();
  GameModel__SetTexture((GameModel *)*puVar7,(SharedPtr_L_struct_CustomTexture_G_ *)&local_18);
  puVar7 = (undefined4 *)(**(code **)(*(int *)param_1 + 8))();
  pRVar11 = (ReferenceController *)puVar7[1];
  (*(uint32_t*)((char*)&(uStack_5c)+4)) = (uint32_t)(uintptr_t)((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)*puVar7);
  if (pRVar11 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar11);
  }
  iVar6 = *(int *)(local_54 + 8);
  stack0xffffffbc = (double)CONCAT44(iVar6 + 1,(*(uint32_t*)((char*)&(local_4c)+8)));
  util__Darray_class_util__WeakPtr_class_Body_____SetSize(local_54,(int *)(local_4c + 0xc));
  pDVar4 = local_54;
  bVar5 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(local_54,iVar6);
  if (bVar5) {
    iVar6 = *(int *)(pDVar4 + 8);
    iVar1 = *(int *)(pDVar4 + 4);
    pRVar24 = *(ReferenceController **)(iVar1 + -4 + iVar6 * 8);
    *(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ **)(iVar1 + -8 + iVar6 * 8) = (Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)(uintptr_t)((*(uint32_t*)((char*)&(uStack_5c)+4)));
    *(ReferenceController **)(iVar1 + -4 + iVar6 * 8) = pRVar11;
    if (pRVar11 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar11);
    }
    if (pRVar24 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRVar24);
    }
  }
  if (pRVar11 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar11);
  }
  puVar7 = (undefined4 *)(**(code **)(*(int *)param_1 + 8))();
  pRVar11 = (ReferenceController *)local_78[1];
  *local_78 = *puVar7;
  pRVar24 = (ReferenceController *)puVar7[1];
  local_78[1] = (undefined4)(uintptr_t)(pRVar24);
  if (pRVar24 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar24);
  }
  if (pRVar11 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar11);
  }
  if (((*(uint32_t*)((char*)&(local_18)+4)) != (ReferenceController *)0x0) &&
     (bVar5 = util__ReferenceController__ReleaseStrongReference((ReferenceController*)((ReferenceController*)((*(uint32_t*)((char*)&(local_18)+4))))), bVar5)) {
    if ((int *)local_18 != (int *)0x0) {
      (**(code **)(*(int *)local_18 + 0x10))(1);
    }
    piVar17 = (int *)local_18;
    pRVar10 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar10,piVar17);
    (*(uint32_t*)&(local_18)) = (uint32_t)(uintptr_t)((int *)0x0);
  }
  *(uint32_t *)&local_28 = (uint32_t)(uintptr_t)(&vftable_12);
  if (pvStack_24 != (void *)0x0) {
    port_op_delete(pvStack_24);
  }
  pvStack_24 = (void *)0x0;
  *(uint32_t *)&local_28 = (uint32_t)(uintptr_t)(&vftable);
  *(uint32_t *)&local_38 = (uint32_t)(uintptr_t)(&vftable_12);
  if (pvStack_34 != (void *)0x0) {
    port_op_delete(pvStack_34);
  }
  pvStack_34 = (void *)0x0;
  *(uint32_t *)&local_38 = (uint32_t)(uintptr_t)(&vftable);
  TurretSubModule___TurretSubModule((TurretSubModule *)&stack0x00000014);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

//==== 005c3d10 CheckSize_005c3d10 ====


/* private: bool  util__Darray_L_structutil__tuple2_L_structutil__Vec2_L_double_G__Cstruct_util__Color_G__G___CheckSize(int) */

bool 
util__Darray_struct_util__tuple2_struct_util__Vec2_double__struct_util__Color_____CheckSize
          (Darray_L_struct_util__tuple2_L_struct_util__Vec2_L_double_G__Cstruct_util__Color_G___G_ *this,
          int param_1)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  bool bVar9;
  uint *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar4 = *(uint *)(this + 8);
  bVar9 = -1 < (int)uVar4;
  bVar1 = !bVar9;
  if (bVar1) {
    puStack_c = (uint *)0x0;
    SetSize(this,(int *)&puStack_c);
    uVar4 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar1;
  bVar1 = (int)uVar4 < 0x40000000;
  if (!bVar1) {
    puStack_c = (uint *)0x3fffffff;
    SetSize(this,(int *)&puStack_c);
    uVar4 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar5 = *(uint *)(this + 0xc);
  if ((int)uVar4 <= (int)uVar5) {
    return bVar1 && bVar9;
  }
  if (uVar5 == 0) {
    *(uint *)(this + 0xc) = uVar4;
    uVar5 = uVar4;
  }
  if ((int)uVar5 < (int)uVar4) {
    do {
      uVar5 = uVar5 * 2;
    } while ((int)uVar5 < (int)uVar4);
    *(uint *)(this + 0xc) = uVar5;
  }
  if (0x3fffffff < (int)uVar5) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar5 = 0x3fffffff;
  }
  uVar4 = -(uint)((int)((ulonglong)uVar5 * 0x30 >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 0x30);
  puVar3 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
  if (puVar3 == (uint *)0x0) {
    puStack_c = (uint *)0x0;
  }
  else {
    *puVar3 = uVar5;
    puVar3 = puVar3 + 1;
    puStack_c = puVar3;
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      Color__Color((Color *)(puVar3 + 4));
      puVar3 = puVar3 + 0xc;
    }
  }
  puVar3 = *(uint **)(this + 4);
  if (puVar3 != (uint *)0x0) {
    puVar7 = puStack_c + *(int *)(this + 8) * 0xc;
    if (puVar3 != puVar3 + param_1 * 0xc) {
      puVar8 = puStack_c + 8;
      puVar6 = puVar3;
      do {
        if (puVar8 + -8 == puVar7) break;
        uVar4 = puVar6[1];
        uVar5 = puVar6[2];
        uVar2 = puVar6[3];
        puVar8[-8] = *puVar6;
        puVar8[-7] = uVar4;
        puVar8[-6] = uVar5;
        puVar8[-5] = uVar2;
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar8 + -3),(Str_L_char_G_ *)(puVar6 + 5));
        *puVar8 = puVar6[8];
        puVar8[1] = puVar6[9];
        puVar8[2] = puVar6[10];
        puVar3 = puVar6 + 0xb;
        puVar6 = puVar6 + 0xc;
        puVar8[3] = *puVar3;
        puVar8 = puVar8 + 0xc;
        puVar3 = *(uint **)(this + 4);
      } while (puVar6 != puVar3 + param_1 * 0xc);
    }
    if (puVar3 != (uint *)0x0) {
      uVar4 = puVar3[-1];
      if (uVar4 == 0) {
        uVar4 = 0;
      }
      else {
        puVar7 = puVar3 + uVar4 * 0xc + 5;
        do {
          puVar6 = puVar7 + -0xc;
          uVar4 = uVar4 - 1;
          puVar7[-0xd] = (uint)&vftable_5;
          if ((void *)*puVar6 != (void *)0x0) {
            port_op_delete((void *)*puVar6);
            *puVar6 = 0;
          }
          puVar7 = puVar6;
        } while (uVar4 != 0);
        uVar4 = puVar3[-1];
      }
      port_op_delete(puVar3 + -1,uVar4 * 0x30 + 4);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(uint **)(this + 4) = puStack_c;
  return bStack_5;
}





//==== 005c3f00 Clear_005c3f00 ====


/* public: virtual void  util__Darray_L_structutil__tuple2_L_structutil__Vec2_L_double_G__Cstruct_util__Color_G__G___Clear(void) */

void 
util__Darray_struct_util__tuple2_struct_util__Vec2_double__struct_util__Color_____Clear
          (Darray_L_struct_util__tuple2_L_struct_util__Vec2_L_double_G__Cstruct_util__Color_G___G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 005c3f20 GenerateTextures_005c3f20 ====


/* public: class util__Darray_L_classutil__SharedPtr_L_classArmorTextureHandler_G__G_ __thiscall
   ThermalRocketSubModule__GenerateTextures(int)const  */

void * __thiscall ThermalRocketSubModule__GenerateTextures(ThermalRocketSubModule *this,void *param_1,int param_2)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  ReferenceController *pRVar2;
  Vec3_L_double_G_ VVar3;
  Darray_L_class_util__SharedPtr_L_class_ArmorTextureHandler_G___G_ *pDVar4;
  bool bVar5;
  uint *puVar6;
  uint *puVar7;
  ReferenceControllerRegistry *pRVar8;
  ArmorTextureHandler *pAVar9;
  Maybe_L_double_G_ *pMVar10;
  uint uVar11;
  ReferenceController *this_00;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  ArmorTextureHandler *pAVar16;
  Maybe_L_double_G_ MStack_d8;
  undefined1 auStack_c8 [16];
  Maybe_L_double_G_ MStack_b8;
  Maybe_L_double_G_ MStack_a8;
  Maybe_L_double_G_ MStack_98;
  Maybe_L_double_G_ MStack_88;
  Maybe_L_double_G_ MStack_78;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  ReferenceController *pRStack_48;
  Darray_L_class_util__SharedPtr_L_class_ArmorTextureHandler_G___G_ *pDStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  TextureInitOptions TStack_30;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pDStack_44 = (Darray_L_class_util__SharedPtr_L_class_ArmorTextureHandler_G___G_ *)param_1;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined ***)param_1 =
       &vftable_91;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = param_2;
  if (((int)param_2 < 0) || (0x3fffffff < (int)param_2)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else {
    if ((int)param_2 < 1) goto LAB_005c4491;
    uVar11 = -(uint)((int)((ulonglong)param_2 * 8 >> 0x20) != 0) |
             (uint)((ulonglong)param_2 * 8);
    puVar6 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar11) | uVar11 + 4);
    if (puVar6 == (uint *)0x0) {
      puVar6 = (uint *)0x0;
    }
    else {
      *puVar6 = param_2;
      puVar6 = puVar6 + 1;
      puVar7 = puVar6;
      uVar11 = param_2;
      if (param_2 != 0) {
        do {
          *puVar7 = 0;
          puVar7[1] = 0;
          uVar11 = uVar11 - 1;
          puVar7 = puVar7 + 2;
        } while (uVar11 != 0);
      }
    }
    iVar12 = 0;
    *(uint **)(param_1 + 4) = puVar6;
    if (0 < *(int *)(param_1 + 0xc)) {
      do {
        iVar1 = *(int *)(param_1 + 4);
        uStack_38 = (double)CONCAT44(*(undefined4 *)(iVar1 + iVar12 * 8),(undefined4)uStack_38);
        pRVar2 = *(ReferenceController **)(iVar1 + 4 + iVar12 * 8);
        *(undefined4 *)(iVar1 + iVar12 * 8) = 0;
        *(undefined4 *)(iVar1 + 4 + iVar12 * 8) = 0;
        if ((pRVar2 != (ReferenceController *)0x0) &&
           (bVar5 = util__ReferenceController__ReleaseStrongReference(pRVar2), bVar5)) {
          if ((*(uint32_t*)((char*)&(uStack_38)+4)) != (ArmorTextureHandler *)0x0) {
            ArmorTextureHandler___scalar_deleting_destructor((ArmorTextureHandler*)((ArmorTextureHandler*)((*(uint32_t*)((char*)&(uStack_38)+4)))),1);
          }
          pAVar9 = (ArmorTextureHandler *)(uintptr_t)((*(uint32_t*)((char*)&(uStack_38)+4)));
          pRVar8 = util__ReferenceControllerRegistry__Get();
          util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar8,pAVar9);
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(param_1 + 0xc));
    }
  }
  if (0 < (int)param_2) {
    do {
      pAVar9 = (ArmorTextureHandler *)port_op_new(0xe8);
      if (pAVar9 == (ArmorTextureHandler *)0x0) {
        pAVar9 = (ArmorTextureHandler *)0x0;
LAB_005c4080:
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                        ,0xd4,"NewPointer",(char *)0x0);
        DebugBreak();
      }
      else {
        memset(pAVar9,0,0xe8);
        pAVar9 = (ArmorTextureHandler *)ArmorTextureHandler__ArmorTextureHandler(pAVar9);
        if (pAVar9 == (ArmorTextureHandler *)0x0) goto LAB_005c4080;
      }
      pAVar16 = pAVar9;
      pRVar8 = util__ReferenceControllerRegistry__Get();
      pRStack_48 = util__ReferenceControllerRegistry__Register(pRVar8,pAVar16);
      if (pRStack_48 != (ReferenceController *)0x0) {
        util__ReferenceController__AddStrongReference(pRStack_48);
      }
      uStack_40 = (this->ThroatRadius_m * 3.141592653589793 * this->ThroatRadius_m *
                  this->NozzleExpansionRatio) / 3.141592653589793;
      util__Sqrt(&MStack_88,(double *)&uStack_40);
      if (MStack_88.IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      uStack_40 = (this->ThroatRadius_m * 3.141592653589793 * this->ThroatRadius_m *
                  this->ChamberContractionRatio) / 3.141592653589793;
      util__Sqrt(&MStack_78,(double *)&uStack_40);
      if (MStack_78.IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      uVar13 = SUB84(MStack_78.Data,0);
      uVar14 = (undefined4)((ulonglong)MStack_78.Data >> 0x20);
      if (MStack_78.Data <= MStack_88.Data) {
        uVar13 = SUB84(MStack_88.Data,0);
        uVar14 = (undefined4)((ulonglong)MStack_88.Data >> 0x20);
      }
      (*(uint64_t*)((char*)&(auStack_c8)+8)) = 0;
      (*(uint64_t*)&(auStack_c8)) = (double)CONCAT44(uVar14,uVar13) * 6.283185307179586;
      uStack_40 = (this->ThroatRadius_m * 3.141592653589793 * this->ThroatRadius_m *
                  this->NozzleExpansionRatio) / 3.141592653589793;
      util__Sqrt(&MStack_98,(double *)&uStack_40);
      if (MStack_98.IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      uStack_38 = MStack_98.Data - this->ThroatRadius_m;
      uStack_40 = GetNozzleLength_m(this);
      dStack_50 = uStack_40 * uStack_40 + uStack_38 * uStack_38;
      pMVar10 = util__Sqrt(&MStack_d8,&dStack_50);
      (*(uint32_t*)((char*)&(uStack_38)+4)) = (uint32_t)(uintptr_t)((ArmorTextureHandler *)pMVar10);
      if (pMVar10->IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      dStack_68 = ((Maybe_L_double_G_ *)(*(uint32_t*)((char*)&(uStack_38)+4)))->Data;
      uStack_40 = (this->ThroatRadius_m * 3.141592653589793 * this->ThroatRadius_m *
                  this->ChamberContractionRatio) / 3.141592653589793;
      util__Sqrt(&MStack_a8,(double *)&uStack_40);
      if (MStack_a8.IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      dStack_60 = MStack_a8.Data;
      dStack_58 = this->CachedChamberLength_m;
      uStack_38 = (this->ThroatRadius_m * 3.141592653589793 * this->ThroatRadius_m *
                  this->ChamberContractionRatio) / 3.141592653589793;
      util__Sqrt(&MStack_b8,(double *)&uStack_38);
      if (MStack_b8.IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      TStack_30.NearestFiltering = false;
      TStack_30.TextureR = Repeat;
      TStack_30.Mipmaps.Data.MinLevel = 0;
      TStack_30.Mipmaps.Data.MaxLevel.Data = 0;
      TStack_30.Mipmaps.Data.MaxLevel.IsValidData = false;
      TStack_30.Mipmaps.IsValidData = false;
      dVar15 = dStack_58 + dStack_60 + (MStack_b8.Data - this->ThroatRadius_m) + dStack_68;
      TStack_30.Quality = EightBit;
      TStack_30.TextureS = Repeat;
      TStack_30.TextureT = ClampToEdge;
      TStack_30.Channels = RG;
      VVar3.Y = SUB84(dVar15,0);
      VVar3.X = (double)(*(uint64_t*)&(auStack_c8));
      VVar3.Z = (int)((ulonglong)dVar15 >> 0x20);
      ArmorTextureHandler__GenerateTexture(pAVar9,VVar3,&TStack_30,false);
      iVar12 = *(int *)(pDStack_44 + 8);
      uStack_38 = (double)CONCAT44(iVar12 + 1,(undefined4)uStack_38);
      util__Darray_class_util__SharedPtr_class_ArmorTextureHandler_____SetSize
                (pDStack_44,(int *)((int)&uStack_38 + 4));
      pDVar4 = pDStack_44;
      bVar5 = util__Darray_class_util__SharedPtr_class_ArmorTextureHandler_____CheckSize
                        (pDStack_44,iVar12);
      pRVar2 = pRStack_48;
      if (bVar5) {
        iVar12 = *(int *)(pDVar4 + 8);
        iVar1 = *(int *)(pDVar4 + 4);
        uStack_38 = (double)CONCAT44(*(undefined4 *)(iVar1 + -8 + iVar12 * 8),(undefined4)uStack_38)
        ;
        this_00 = *(ReferenceController **)(iVar1 + -4 + iVar12 * 8);
        uStack_40 = (double)CONCAT44(this_00,(undefined4)uStack_40);
        *(ArmorTextureHandler **)(iVar1 + -8 + iVar12 * 8) = pAVar9;
        *(ReferenceController **)(iVar1 + -4 + iVar12 * 8) = pRStack_48;
        if (pRStack_48 != (ReferenceController *)0x0) {
          util__ReferenceController__AddStrongReference(pRStack_48);
          this_00 = (ReferenceController *)(uintptr_t)((*(uint32_t*)((char*)&(uStack_40)+4)));
        }
        if ((this_00 != (ReferenceController *)0x0) &&
           (bVar5 = util__ReferenceController__ReleaseStrongReference(this_00), bVar5)) {
          if ((*(uint32_t*)((char*)&(uStack_38)+4)) != (ArmorTextureHandler *)0x0) {
            ArmorTextureHandler___scalar_deleting_destructor((ArmorTextureHandler*)((ArmorTextureHandler*)((*(uint32_t*)((char*)&(uStack_38)+4)))),1);
          }
          pAVar16 = (ArmorTextureHandler *)(uintptr_t)((*(uint32_t*)((char*)&(uStack_38)+4)));
          pRVar8 = util__ReferenceControllerRegistry__Get();
          util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar8,pAVar16);
        }
      }
      if ((pRVar2 != (ReferenceController *)0x0) &&
         (bVar5 = util__ReferenceController__ReleaseStrongReference(pRVar2), bVar5)) {
        if (pAVar9 != (ArmorTextureHandler *)0x0) {
          ArmorTextureHandler___scalar_deleting_destructor(pAVar9,1);
        }
        pRVar8 = util__ReferenceControllerRegistry__Get();
        util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar8,pAVar9);
      }
      param_2 = param_2 - 1;
      if (param_2 == 0) {
        __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
        return param_1;
      }
    } while( true );
  }
LAB_005c4491:
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return param_1;
}





//==== 005c44b0 GetChamberArea_m2 ====


/* public: double __thiscall ThermalRocketSubModule__GetChamberArea_m2(void)const  */

double __thiscall ThermalRocketSubModule__GetChamberArea_m2(ThermalRocketSubModule *this)

{
  return this->ThroatRadius_m * 3.141592653589793 * this->ThroatRadius_m *
         this->ChamberContractionRatio;
}





//==== 005c44f0 GetChamberCoolingArea_m2 ====


/* public: double __thiscall ThermalRocketSubModule__GetChamberCoolingArea_m2(void)const  */

double __thiscall ThermalRocketSubModule__GetChamberCoolingArea_m2(ThermalRocketSubModule *this)

{
  Maybe_L_double_G_ MStack_24;
  double dStack_14;
  double dStack_c;
  
  dStack_14 = this->CachedChamberLength_m;
  dStack_c = (this->ThroatRadius_m * 3.141592653589793 * this->ThroatRadius_m *
             this->ChamberContractionRatio) / 3.141592653589793;
  util__Sqrt(&MStack_24,&dStack_c);
  if (MStack_24.IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return MStack_24.Data * 6.283185307179586 * dStack_14;
}





//==== 005c4580 GetChamberEndChamfer_m ====


/* public: double __thiscall ThermalRocketSubModule__GetChamberEndChamfer_m(void)const  */

double __thiscall ThermalRocketSubModule__GetChamberEndChamfer_m(ThermalRocketSubModule *this)

{
  Maybe_L_double_G_ MStack_24;
  double dStack_14;
  double dStack_c;
  
  dStack_14 = this->CachedChamberLength_m;
  dStack_c = (this->ThroatRadius_m * 3.141592653589793 * this->ThroatRadius_m *
             this->ChamberContractionRatio) / 3.141592653589793;
  util__Sqrt(&MStack_24,&dStack_c);
  if (MStack_24.IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  MStack_24.Data = MStack_24.Data - this->ThroatRadius_m;
  if (dStack_14 <= MStack_24.Data) {
    MStack_24.Data = dStack_14;
  }
  return MStack_24.Data * 0.2;
}





//==== 005c4620 GetChamberPressure_Pa ====


/* public: double __thiscall ThermalRocketSubModule__GetChamberPressure_Pa(void)const  */

double __thiscall ThermalRocketSubModule__GetChamberPressure_Pa(ThermalRocketSubModule *this)

{
  Maybe_L_double_G_ *pMVar1;
  double dVar2;
  Maybe_L_double_G_ MStack_34;
  double dStack_24;
  double dStack_1c;
  double dStack_14;
  double dStack_c;
  
  dStack_c = Material__GetMixtureAdiabaticIndex
                       ((Darray_L_struct_MaterialConstituent_G_ *)&this->CachedReactants);
  dVar2 = Material__GetMixtureSpecificGasConstant_J__kg_K
                    ((Darray_L_struct_MaterialConstituent_G_ *)&this->CachedReactants);
  dStack_14 = (this->CachedChamberTemperature_K * dVar2) / dStack_c;
  dStack_24 = TurbopumpSubModule__GetMassFlowRate_kg__s(&this->Injector);
  dStack_1c = this->ThroatRadius_m;
  pMVar1 = util__Sqrt(&MStack_34,&dStack_14);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar2 = (dStack_c + 1.0) * 0.5;
  libm_sse2_pow_precise(0.0,0.0);
  return dVar2 * (dStack_24 / (dStack_1c * 3.141592653589793 * dStack_1c)) * pMVar1->Data;
}





//==== 005c4710 GetChamberRadius_m ====


/* public: double __thiscall ThermalRocketSubModule__GetChamberRadius_m(void)const  */

double __thiscall ThermalRocketSubModule__GetChamberRadius_m(ThermalRocketSubModule *this)

{
  Maybe_L_double_G_ MStack_1c;
  double dStack_c;
  
  dStack_c = (this->ThroatRadius_m * 3.141592653589793 * this->ThroatRadius_m *
             this->ChamberContractionRatio) / 3.141592653589793;
  util__Sqrt(&MStack_1c,&dStack_c);
  if (MStack_1c.IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return MStack_1c.Data;
}





//==== 005c4780 GetChamberStartChamfer_m ====


/* public: double __thiscall ThermalRocketSubModule__GetChamberStartChamfer_m(void)const  */

double __thiscall ThermalRocketSubModule__GetChamberStartChamfer_m(ThermalRocketSubModule *this)

{
  Maybe_L_double_G_ MStack_24;
  double dStack_14;
  double dStack_c;
  
  dStack_14 = this->CachedChamberLength_m;
  dStack_c = (this->ThroatRadius_m * 3.141592653589793 * this->ThroatRadius_m *
             this->ChamberContractionRatio) / 3.141592653589793;
  util__Sqrt(&MStack_24,&dStack_c);
  if (MStack_24.IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if (dStack_14 <= MStack_24.Data) {
    MStack_24.Data = dStack_14;
  }
  return MStack_24.Data * 0.2;
}





//==== 005c4960 GetChamberThermalStress_Pa ====


/* public: double __thiscall ThermalRocketSubModule__GetChamberThermalStress_Pa(void)const  */

double __thiscall ThermalRocketSubModule__GetChamberThermalStress_Pa(ThermalRocketSubModule *this)

{
  int iVar1;
  double dVar2;
  double dStack_14;
  double dStack_c;
  
  if (0.0 < this->RegenerativeCooling_Percent) {
    dVar2 = this->ChamberWallThickness_m * 0.5;
    dStack_c = (this->CachedChamberLength_m * this->RegenerativeCooling_Percent) / (dVar2 + dVar2);
    dStack_c = util__Floor(&dStack_c);
    iVar1 = 0;
    if (-1 < (int)dStack_c) {
      iVar1 = (int)dStack_c;
    }
    if (0 < iVar1) {
      dStack_14 = Material__GetPoissonsRatio(this->ChamberComposition);
      dStack_14 = 1.0 - dStack_14;
      dStack_c = GetGasWallTemperature_K(this);
      dVar2 = GetLiquidWallTemperature_K(this);
      dStack_c = Material__GetThermalExpansionStress_Pa(this->ChamberComposition,dStack_c - dVar2);
      dStack_c = dStack_c + dStack_c;
      dVar2 = util__Abs(&dStack_14);
      return dStack_c / dVar2;
    }
  }
  return 0.0;
}





//==== 005c4c40 GetCrewRequired_005c4c40 ====


/* public: class util__Darray_L_structCrewJob_G_ 
   ThermalRocketSubModule__GetCrewRequired(int)const  */

int  ThermalRocketSubModule__GetCrewRequired(ThermalRocketSubModule *this,int param_1)

{
  int iVar1;
  int this_00;
  bool bVar2;
  LocStr *this_01;
  Str_L_char_G_ *pSVar3;
  int iVar4;
  int in_stack_00000008;
  Str_L_char_G_ SStack_64;
  double dStack_58;
  undefined1 uStack_50;
  void *apvStack_48 [3];
  void *pvStack_3c;
  Str_L_char_G_ SStack_30;
  Str_L_char_G_ SStack_24;
  Str_L_char_G_ SStack_18;
  double dStack_c;
  
  this_00 = param_1;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined ***)param_1 = &vftable_120;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  util__Str_char___Str_char(&SStack_30,"CrewEngineTechnician");
  SStack_18.Data = (char *)0x0;
  SStack_18.Capacity = 0;
  SStack_18.Length = 0;
  this_01 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_48,&SStack_30,&SStack_18);
  pSVar3 = util__LocStr__operator__o3(this_01);
  util__Str_char___Str_char(&SStack_24,pSVar3);
  util__Str_char___Str_char(&SStack_64,&SStack_24);
  uStack_50 = 0;
  dStack_58 = (double)in_stack_00000008 * 0.2;
  dStack_c = dStack_58;
  if (SStack_24.Data != (char *)0x0) {
    port_op_delete(SStack_24.Data);
  }
  iVar1 = *(int *)(this_00 + 8);
  param_1 = iVar1 + 1;
  util__Darray_struct_CrewJob___SetSize((Darray_L_struct_CrewJob_G_ *)this_00,&param_1);
  bVar2 = util__Darray_struct_CrewJob___CheckSize((Darray_L_struct_CrewJob_G_ *)this_00,iVar1);
  if (bVar2) {
    iVar1 = *(int *)(this_00 + 4);
    iVar4 = *(int *)(this_00 + 8) * 0x20;
    *(undefined4 *)(iVar4 + -0x20 + iVar1) = 2;
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x1c + iVar4),&SStack_64);
    *(double *)(iVar4 + -0x10 + iVar1) = dStack_c;
    *(undefined1 *)(iVar4 + -8 + iVar1) = 0;
  }
  if (SStack_64.Data != (char *)0x0) {
    port_op_delete(SStack_64.Data);
  }
  if (pvStack_3c != (void *)0x0) {
    port_op_delete(pvStack_3c);
    pvStack_3c = (void *)0x0;
  }
  if (apvStack_48[0] != (void *)0x0) {
    port_op_delete(apvStack_48[0]);
    apvStack_48[0] = (void *)0x0;
  }
  if (SStack_18.Data != (char *)0x0) {
    port_op_delete(SStack_18.Data);
    SStack_18.Data = (char *)0x0;
  }
  if (SStack_30.Data != (char *)0x0) {
    port_op_delete(SStack_30.Data);
  }
  return this_00;
}





//==== 005c4f80 GetEngineDimensions_m_005c4f80 ====


/* public: struct util__Cylinder_L_double_G_ 
   ThermalRocketSubModule__GetEngineDimensions_m(void)const  */

Cylinder_L_double_G_ * 
ThermalRocketSubModule__GetEngineDimensions_m
          (ThermalRocketSubModule *this,Cylinder_L_double_G_ *__return_storage_ptr__)

{
  Cylinder_L_double_G_ *pCVar1;
  double dVar2;
  Cylinder_L_double_G_ CStack_24;
  double dStack_14;
  double dStack_c;
  
  dStack_14 = this->ChamberWallThickness_m;
  dStack_c = this->CachedChamberLength_m;
  dVar2 = GetNozzleLength_m(this);
  dStack_14 = dVar2 + dStack_c + dStack_14;
  pCVar1 = TurbopumpSubModule__GetTurbopumpCylinder_m(&this->Injector,&CStack_24);
  dStack_14 = pCVar1->Height + dStack_14;
  dVar2 = GetMaxRadius_m(this);
  __return_storage_ptr__->Radius = dVar2;
  __return_storage_ptr__->Height = dStack_14;
  return __return_storage_ptr__;
}





//==== 005c5000 GetEngineHeatTransferCoefficient_W__m2_K ====

/* public: double __thiscall
   ThermalRocketSubModule__GetEngineHeatTransferCoefficient_W__m2_K(void)const  */

double __thiscall
ThermalRocketSubModule__GetEngineHeatTransferCoefficient_W__m2_K(ThermalRocketSubModule *this)

{
  Material *pMVar1;
  double dVar2;
  double dVar3;
  Maybe_L_double_G_ local_34;
  double local_24;
  double local_1c;
  double local_14;
  double local_c;
  
  *(uint32_t *)&local_1c = TurbopumpSubModule__GetMassFlowRate_kg__s(&this->Injector);
  dVar3 = this->ThroatRadius_m * 3.141592653589793 * this->ThroatRadius_m *
          this->ChamberContractionRatio;
  *(uint32_t *)&local_c = dVar3 / 3.141592653589793;
  *(uint32_t *)&local_1c = local_1c / (this->CachedCoolant->Density_kg__m3 * dVar3);
  util__Sqrt(&local_34,&local_c);
  if (local_34.IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  *(uint32_t *)&local_24 = local_34.Data;
  dVar3 = Material__GetPrandtlNumber(this->CachedCoolant);
  *(uint32_t *)&local_14 = dVar3;
  libm_sse2_pow_precise(0.0,0.0);
  pMVar1 = this->CachedCoolant;
  dVar2 = (pMVar1->Density_kg__m3 * local_1c) / (double)((pMVar1->Dissociation).Data._pad_0x8_2);
  *(uint32_t *)&local_14 = dVar3;
  libm_sse2_pow_precise(0.0,0.0);
  *(uint32_t *)&local_1c = dVar2 * 0.026;
  dVar3 = local_24 + local_24;
  libm_sse2_pow_precise(0.0,0.0);
  return (local_1c / dVar3) * local_14 * pMVar1->Resistivity_Ohm_m;
}

//==== 005c52e0 GetGasExpansionPlume_Clear ====


/* public: void __thiscall ThermalRocketSubModule__GetGasExpansionPlume_Clear(void)const  */

void __thiscall ThermalRocketSubModule__GetGasExpansionPlume_Clear(ThermalRocketSubModule *this)

{
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
  bool bStack_c;
  
  ppuStack_3c = (undefined **)(&vftable_15);
  pvStack_38 = (void *)0x0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  bStack_c = false;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  util__Darray_struct_MaterialConstituent___operator
            ((Darray_L_struct_MaterialConstituent_G_ *)&this->GetGasExpansionPlume_MemoizedValue,
             (Darray_L_struct_MaterialConstituent_G_ *)&ppuStack_3c);
  (this->GetGasExpansionPlume_MemoizedValue).Data.DisableShimmer = bStack_c;
  ppuStack_3c = (undefined **)(&vftable_15);
  *(undefined4 *)&(this->GetGasExpansionPlume_MemoizedValue).Data.StartRadius_m = uStack_2c;
  *(undefined4 *)((int)&(this->GetGasExpansionPlume_MemoizedValue).Data.StartRadius_m + 4) =
       uStack_28;
  *(undefined4 *)&(this->GetGasExpansionPlume_MemoizedValue).Data.StartTemperature_K = uStack_24;
  *(undefined4 *)((int)&(this->GetGasExpansionPlume_MemoizedValue).Data.StartTemperature_K + 4) =
       uStack_20;
  *(undefined4 *)&(this->GetGasExpansionPlume_MemoizedValue).Data.ExhaustVelocity_km__s = uStack_1c;
  *(undefined4 *)((int)&(this->GetGasExpansionPlume_MemoizedValue).Data.ExhaustVelocity_km__s + 4) =
       uStack_18;
  *(undefined4 *)&(this->GetGasExpansionPlume_MemoizedValue).Data.MassFlowRate_kg__s = uStack_14;
  *(undefined4 *)((int)&(this->GetGasExpansionPlume_MemoizedValue).Data.MassFlowRate_kg__s + 4) =
       uStack_10;
  if (pvStack_38 != (void *)0x0) {
    port_op_delete(pvStack_38);
  }
  (this->GetGasExpansionPlume_MemoizedValue).IsValidData = false;
  return;
}





//==== 005c5650 GetGasWallTemperature_K ====


/* public: double __thiscall ThermalRocketSubModule__GetGasWallTemperature_K(void)const  */

double __thiscall ThermalRocketSubModule__GetGasWallTemperature_K(ThermalRocketSubModule *this)

{
  double dVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dStack_2c;
  double dStack_24;
  double dStack_1c;
  double dStack_14;
  double dStack_c;
  
  dVar1 = this->CachedChamberTemperature_K;
  dStack_14 = 0.0;
  if (0.0 < this->RegenerativeCooling_Percent) {
    dVar3 = this->ChamberWallThickness_m * 0.5;
    dStack_c = (this->CachedChamberLength_m * this->RegenerativeCooling_Percent) / (dVar3 + dVar3);
    dVar3 = util__Floor(&dStack_c);
    iVar2 = 0;
    if (-1 < (int)dVar3) {
      iVar2 = (int)dVar3;
    }
    if (0 < iVar2) {
      dStack_c = this->ChamberWallThickness_m;
      dStack_1c = GetRegenerativeCoolingArea_m2(this);
      dVar3 = GetChamberCoolingArea_m2(this);
      dStack_24 = (dVar3 + dStack_1c) * 0.5;
      dStack_1c = GetRegenerativeCoolingArea_m2(this);
      dVar3 = GetChamberCoolingArea_m2(this);
      dStack_2c = (dVar3 + dStack_1c) * 0.5;
      dStack_1c = GetRegenerativeCoolingHeatTransferCoefficient_W__m2_K(this);
      dVar3 = GetRegenerativeCoolingArea_m2(this);
      dStack_1c = 1.0 / (dVar3 * dStack_1c);
      dStack_c = dStack_c / (this->ChamberComposition->Resistivity_Ohm_m * dStack_24) + dStack_1c;
      dStack_24 = GetEngineHeatTransferCoefficient_W__m2_K(this);
      dVar3 = GetChamberCoolingArea_m2(this);
      dStack_1c = 1.0 / ((1.0 / (dStack_24 * dVar3) + dStack_c) * dStack_2c);
      dStack_c = this->CachedChamberTemperature_K;
      if (0.0 < this->RegenerativeCooling_Percent) {
        dVar3 = this->ChamberWallThickness_m * 0.5;
        dStack_2c = (this->CachedChamberLength_m * this->RegenerativeCooling_Percent) /
                    (dVar3 + dVar3);
        dStack_24 = util__Floor(&dStack_2c);
        iVar2 = 0;
        if (-1 < (int)dStack_24) {
          iVar2 = (int)dStack_24;
        }
        if (0 < iVar2) {
          dStack_14 = this->CachedCoolantStorageTemperature_K;
        }
      }
      dStack_24 = GetRegenerativeCoolingArea_m2(this);
      dVar4 = GetChamberCoolingArea_m2(this);
      dVar3 = this->ChamberWallThickness_m;
      dStack_24 = (dVar4 + dStack_24) * 0.5;
      dStack_c = (dStack_c - dStack_14) * dStack_1c * dStack_24;
      dVar5 = GetChamberCoolingArea_m2(this);
      dStack_24 = dStack_c;
      dVar5 = dStack_c / dVar5;
      dVar4 = this->ChamberComposition->Resistivity_Ohm_m;
      dVar6 = GetLiquidWallTemperature_K(this);
      dVar6 = dVar6 + (dVar5 * dVar3) / dVar4;
      if (dVar1 <= dVar6) {
        dVar6 = dVar1;
      }
      return dVar6;
    }
  }
  dVar3 = this->CachedChamberTemperature_K;
  if (dVar1 <= this->CachedChamberTemperature_K) {
    dVar3 = dVar1;
  }
  return dVar3;
}





//==== 005c58c0 GetHeatGenerated_W_005c58c0 ====


/* public: double __thiscall ThermalRocketSubModule__GetHeatGenerated_W(void)const  */

double __thiscall ThermalRocketSubModule__GetHeatGenerated_W(ThermalRocketSubModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = GetGasWallTemperature_K(this);
  dVar2 = Material__GetSafeUseTemperature_K(this->ChamberComposition);
  dVar3 = GetEngineHeatTransferCoefficient_W__m2_K(this);
  dVar4 = GetPrimarySurfaceArea_m2(this);
  dVar4 = dVar4 * dVar3 * (dVar1 - dVar2);
  dVar1 = 0.0;
  if (0.0 <= dVar4) {
    dVar1 = dVar4;
  }
  dVar4 = this->ThroatRadius_m;
  dVar2 = this->NozzleExpansionRatio;
  dVar3 = Material__GetSafeUseTemperature_K(this->ChamberComposition);
  dVar2 = Physics__GetBlackbodyRadiation_W(dVar4 * 3.141592653589793 * dVar4 * dVar2,0.8,dVar3);
  dVar4 = 0.0;
  if (0.0 <= dVar1 - dVar2) {
    dVar4 = dVar1 - dVar2;
  }
  return dVar4;
}





//==== 005c5980 GetHeatSignature_W_005c5980 ====


/* public: double __thiscall ThermalRocketSubModule__GetHeatSignature_W(void)const  */

double __thiscall ThermalRocketSubModule__GetHeatSignature_W(ThermalRocketSubModule *this)

{
  double dVar1;
  Maybe_L_double_G_ MStack_44;
  double dStack_34;
  double dStack_2c;
  double dStack_24;
  double dStack_1c;
  double dStack_14;
  double dStack_c;
  
  dStack_c = this->ThroatRadius_m * 3.141592653589793 * this->ThroatRadius_m *
             this->NozzleExpansionRatio;
  dVar1 = Material__GetSafeUseTemperature_K(this->ChamberComposition);
  dStack_34 = Physics__GetBlackbodyRadiation_W(dStack_c,0.8,dVar1);
  dStack_c = this->CachedChamberTemperature_K;
  dVar1 = Material__GetMixtureAdiabaticIndex
                    ((Darray_L_struct_MaterialConstituent_G_ *)&this->CachedProducts);
  dStack_c = dStack_c / ((dVar1 - 1.0) * 0.5 + 1.0);
  dStack_2c = this->ThroatRadius_m * 3.141592653589793 * this->ThroatRadius_m;
  dStack_14 = (this->NozzleExpansionRatio * dStack_2c) / 3.141592653589793;
  util__Sqrt(&MStack_44,&dStack_14);
  if (MStack_44.IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dStack_24 = MStack_44.Data;
  dStack_1c = this->ThroatRadius_m;
  dVar1 = GetNozzleLength_m(this);
  dStack_24 = dVar1 * (dStack_1c * 3.141592653589793 * dStack_1c + dStack_24) * 0.5;
  dVar1 = GetNozzleTemperature_K(this);
  dStack_24 = Physics__GetBlackbodyRadiation_W(dStack_24,1.0,dVar1);
  dVar1 = Physics__GetBlackbodyRadiation_W(dStack_2c,1.0,dStack_c);
  return dVar1 + dStack_34 + dStack_24;
}





//==== 005c5b40 GetInitialRadius_m ====


/* public: double __thiscall ThermalRocketSubModule__GetInitialRadius_m(void)const  */

double __thiscall ThermalRocketSubModule__GetInitialRadius_m(ThermalRocketSubModule *this)

{
  Cylinder_L_double_G_ *pCVar1;
  Cylinder_L_double_G_ CStack_14;
  
  pCVar1 = TurbopumpSubModule__GetTurbopumpCylinder_m(&this->Injector,&CStack_14);
  return pCVar1->Radius;
}





//==== 005c5b60 GetInjectorAndEngineEndMomentOfInertia_kg_m2 ====


/* public: double __thiscall
   ThermalRocketSubModule__GetInjectorAndEngineEndMomentOfInertia_kg_m2(void)const  */

double __thiscall
ThermalRocketSubModule__GetInjectorAndEngineEndMomentOfInertia_kg_m2(ThermalRocketSubModule *this)

{
  double dVar1;
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  double dStack_24;
  double dStack_1c;
  double dStack_14;
  double dStack_c;
  
  dStack_c = (this->ThroatRadius_m * 3.141592653589793 * this->ThroatRadius_m *
             this->NozzleExpansionRatio) / 3.141592653589793;
  util__Sqrt((Maybe_L_double_G_ *)auStack_34,&dStack_c);
  if (auStack_34[8] == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dStack_c = (this->ThroatRadius_m * 3.141592653589793 * this->ThroatRadius_m *
             this->ChamberContractionRatio) / 3.141592653589793;
  util__Sqrt((Maybe_L_double_G_ *)auStack_44,&dStack_c);
  if (auStack_44[8] == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((double)(*(uint64_t*)&(auStack_44)) <= (double)(*(uint64_t*)&(auStack_34))) {
    (*(uint64_t*)&(auStack_44)) = (*(uint64_t*)&(auStack_34));
  }
  dStack_c = this->CachedChamberLength_m;
  (*(uint64_t*)((char*)&(auStack_34)+8)) = (*(uint64_t*)&(auStack_44));
  dVar1 = GetNozzleLength_m(this);
  dStack_c = dVar1 + dStack_c;
  (*(uint64_t*)((char*)&(auStack_44)+8)) = TurbopumpSubModule__GetLength_m(&this->Injector);
  (*(uint64_t*)((char*)&(auStack_44)+8)) = (double)(*(uint64_t*)((char*)&(auStack_44)+8)) + dStack_c * 0.5;
  dStack_14 = this->ChamberWallThickness_m;
  dVar1 = GetPrimarySurfaceArea_m2(this);
  dStack_1c = this->ChamberComposition->Density_kg__m3 * dVar1 * dStack_14;
  dStack_24 = this->ChamberWallThickness_m;
  dStack_14 = dStack_24;
  dVar1 = GetPrimarySurfaceArea_m2(this);
  dStack_14 = this->ChamberComposition->Density_kg__m3 * dVar1 * dStack_14;
  dVar1 = Mechanics__ThickCylindericalShellRadialMomentOfInertia_kg_m2
                    (dStack_c,(double)(*(uint64_t*)((char*)&(auStack_34)+8)),dStack_24 + (double)(*(uint64_t*)((char*)&(auStack_34)+8)),
                     dStack_1c);
  (*(uint64_t*)((char*)&(auStack_44)+8)) = dVar1 + (double)(*(uint64_t*)((char*)&(auStack_44)+8)) * (double)(*(uint64_t*)((char*)&(auStack_44)+8)) * dStack_14;
  dVar1 = TurbopumpSubModule__GetEndRadialMomentOfInertia_kg_m2(&this->Injector);
  return dVar1 + (double)(*(uint64_t*)((char*)&(auStack_44)+8));
}





//==== 005c60a0 GetLiquidWallTemperature_K ====


/* public: double __thiscall ThermalRocketSubModule__GetLiquidWallTemperature_K(void)const  */

double __thiscall ThermalRocketSubModule__GetLiquidWallTemperature_K(ThermalRocketSubModule *this)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dStack_2c;
  double dStack_24;
  double dStack_1c;
  double dStack_14;
  double dStack_c;
  
  if (this->RegenerativeCooling_Percent <= 0.0) {
    return 0.0;
  }
  dVar2 = this->ChamberWallThickness_m * 0.5;
  dStack_1c = (this->RegenerativeCooling_Percent * this->CachedChamberLength_m) / (dVar2 + dVar2);
  dStack_1c = util__Floor(&dStack_1c);
  iVar1 = 0;
  if (-1 < (int)dStack_1c) {
    iVar1 = (int)dStack_1c;
  }
  if (iVar1 < 1) {
    return 0.0;
  }
  dStack_c = this->ChamberWallThickness_m;
  dStack_1c = GetRegenerativeCoolingArea_m2(this);
  dVar2 = GetChamberCoolingArea_m2(this);
  dStack_14 = (dVar2 + dStack_1c) * 0.5;
  dStack_1c = GetRegenerativeCoolingArea_m2(this);
  dVar2 = GetChamberCoolingArea_m2(this);
  dStack_24 = (dVar2 + dStack_1c) * 0.5;
  dStack_1c = GetRegenerativeCoolingHeatTransferCoefficient_W__m2_K(this);
  dVar2 = GetRegenerativeCoolingArea_m2(this);
  dStack_1c = 1.0 / (dVar2 * dStack_1c);
  dStack_c = dStack_c / (this->ChamberComposition->Resistivity_Ohm_m * dStack_14) + dStack_1c;
  dStack_1c = GetEngineHeatTransferCoefficient_W__m2_K(this);
  dStack_14 = GetChamberCoolingArea_m2(this);
  dVar2 = (1.0 / (dStack_1c * dStack_14) + dStack_c) * dStack_24;
  dStack_c = this->CachedChamberTemperature_K;
  if (0.0 < this->RegenerativeCooling_Percent) {
    dVar3 = this->ChamberWallThickness_m * 0.5;
    dStack_24 = (this->RegenerativeCooling_Percent * this->CachedChamberLength_m) / (dVar3 + dVar3);
    dStack_1c = util__Floor(&dStack_24);
    iVar1 = 0;
    if (-1 < (int)dStack_1c) {
      iVar1 = (int)dStack_1c;
    }
    if (0 < iVar1) {
      dStack_14 = this->CachedCoolantStorageTemperature_K;
      goto LAB_005c6247;
    }
  }
  dStack_14 = 0.0;
LAB_005c6247:
  dStack_1c = GetRegenerativeCoolingArea_m2(this);
  dVar4 = GetChamberCoolingArea_m2(this);
  dVar4 = dVar4 + dStack_1c;
  dVar3 = 0.0;
  if (0.0 < this->RegenerativeCooling_Percent) {
    dVar3 = this->ChamberWallThickness_m * 0.5;
    dStack_2c = (this->RegenerativeCooling_Percent * this->CachedChamberLength_m) / (dVar3 + dVar3);
    dVar3 = util__Floor(&dStack_2c);
    iVar1 = 0;
    if (-1 < (int)dVar3) {
      iVar1 = (int)dVar3;
    }
    if (iVar1 < 1) {
      dVar3 = 0.0;
    }
    else {
      dVar3 = this->CachedCoolantStorageTemperature_K;
    }
  }
  dStack_c = (dStack_c - dStack_14) * (1.0 / dVar2) * dVar4 * 0.5;
  dStack_1c = dVar3;
  dVar2 = GetRegenerativeCoolingArea_m2(this);
  dVar2 = dStack_c / dVar2;
  dVar3 = GetRegenerativeCoolingHeatTransferCoefficient_W__m2_K(this);
  return dVar2 / dVar3 + dStack_1c;
}





//==== 005c6320 GetMaxMassFlowRate_kg__s_005c6320 ====


/* public: double __thiscall ThermalRocketSubModule__GetMaxMassFlowRate_kg__s(void)const  */

double __thiscall ThermalRocketSubModule__GetMaxMassFlowRate_kg__s(ThermalRocketSubModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dStack_14;
  double dStack_c;
  
  dStack_14 = 0.5235987755982988;
  dStack_c = 0.5235987755982988;
  dVar1 = (this->Injector).RotationalSpeed_RPM;
  dVar2 = (this->Injector).PumpRadius_m;
  dVar3 = (this->Injector).PumpRadius_m;
  dVar6 = util__Tan(&dStack_c);
  dVar7 = util__Tan(&dStack_14);
  dVar4 = (this->Injector).PumpRadius_m;
  dVar5 = dVar4 * 0.2;
  return ((dVar4 * 3.141592653589793 * dVar4 - dVar5 * 3.141592653589793 * dVar5) -
         (dVar5 + dVar4) * 0.5 * 0.001) *
         (((dVar1 / 60.0) * 6.283185307179586 * (dVar2 * 0.2 + dVar3) * 0.5) / (dVar7 + 1.0 / dVar6)
         ) * (this->Injector).CachedFluidDensity_kg__m3;
}





//==== 005c6330 GetMaxRadius_m ====


/* public: double __thiscall ThermalRocketSubModule__GetMaxRadius_m(void)const  */

double __thiscall ThermalRocketSubModule__GetMaxRadius_m(ThermalRocketSubModule *this)

{
  Cylinder_L_double_G_ *pCVar1;
  Cylinder_L_double_G_ CStack_3c;
  Maybe_L_double_G_ MStack_2c;
  Maybe_L_double_G_ MStack_1c;
  double dStack_c;
  
  dStack_c = (this->ThroatRadius_m * 3.141592653589793 * this->ThroatRadius_m *
             this->NozzleExpansionRatio) / 3.141592653589793;
  util__Sqrt(&MStack_2c,&dStack_c);
  if (MStack_2c.IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dStack_c = (this->ThroatRadius_m * 3.141592653589793 * this->ThroatRadius_m *
             this->ChamberContractionRatio) / 3.141592653589793;
  util__Sqrt(&MStack_1c,&dStack_c);
  if (MStack_1c.IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if (MStack_1c.Data <= MStack_2c.Data) {
    MStack_1c.Data = MStack_2c.Data;
  }
  dStack_c = MStack_1c.Data + this->ChamberWallThickness_m;
  pCVar1 = TurbopumpSubModule__GetTurbopumpCylinder_m(&this->Injector,&CStack_3c);
  if (dStack_c <= pCVar1->Radius) {
    dStack_c = pCVar1->Radius;
  }
  return dStack_c;
}





//==== 005c66e0 GetNozzleLength_m ====


/* public: double __thiscall ThermalRocketSubModule__GetNozzleLength_m(void)const  */

double __thiscall ThermalRocketSubModule__GetNozzleLength_m(ThermalRocketSubModule *this)

{
  double dVar1;
  Maybe_L_double_G_ MStack_34;
  double dStack_24;
  double dStack_1c;
  double dStack_14;
  double dStack_c;
  
  dStack_24 = this->ChamberWallThickness_m;
  dStack_14 = this->NozzleExpansionAngle_degrees * 0.017453292519943295;
  dStack_c = (this->ThroatRadius_m * 3.141592653589793 * this->ThroatRadius_m *
             this->NozzleExpansionRatio) / 3.141592653589793;
  util__Sqrt(&MStack_34,&dStack_c);
  if (MStack_34.IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dStack_1c = MStack_34.Data - this->ThroatRadius_m;
  dVar1 = util__Tan(&dStack_14);
  dVar1 = (dStack_1c / dVar1) * 0.8;
  if (dVar1 <= dStack_24) {
    dVar1 = dStack_24;
  }
  return dVar1;
}





//==== 005c6890 GetNozzlePressure_Pa ====


/* public: double __thiscall ThermalRocketSubModule__GetNozzlePressure_Pa(void)const  */

double __thiscall ThermalRocketSubModule__GetNozzlePressure_Pa(ThermalRocketSubModule *this)

{
  double dVar1;
  double dVar2;
  
  if (this->NozzleExpansionRatio <= 1.0) {
    dVar1 = GetThroatPressure_Pa(this);
  }
  dVar1 = Material__GetMixtureAdiabaticIndex
                    ((Darray_L_struct_MaterialConstituent_G_ *)&this->CachedProducts);
  dVar2 = GetNozzleMachNumber(this);
  dVar1 = dVar2 * dVar2 * (dVar1 - 1.0) * 0.5 + 1.0;
  libm_sse2_pow_precise(0.0,0.0);
  dVar2 = GetThroatPressure_Pa(this);
  return dVar2 * dVar1;
}





//==== 005c6930 GetNozzleTemperature_K ====


/* public: double __thiscall ThermalRocketSubModule__GetNozzleTemperature_K(void)const  */

double __thiscall ThermalRocketSubModule__GetNozzleTemperature_K(ThermalRocketSubModule *this)

{
  Darray_L_MaterialConstituent_G_ *pDVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  pDVar1 = &this->CachedProducts;
  if (this->NozzleExpansionRatio <= 1.0) {
    dVar2 = this->CachedChamberTemperature_K;
    dVar3 = Material__GetMixtureAdiabaticIndex((Darray_L_struct_MaterialConstituent_G_ *)pDVar1);
    return dVar2 / ((dVar3 - 1.0) * 0.5 + 1.0);
  }
  dVar3 = Material__GetMixtureAdiabaticIndex((Darray_L_struct_MaterialConstituent_G_ *)pDVar1);
  dVar4 = GetNozzleMachNumber(this);
  dVar2 = this->CachedChamberTemperature_K;
  dVar5 = Material__GetMixtureAdiabaticIndex((Darray_L_struct_MaterialConstituent_G_ *)pDVar1);
  return (dVar2 / ((dVar5 - 1.0) * 0.5 + 1.0)) / (dVar4 * dVar4 * (dVar3 - 1.0) * 0.5 + 1.0);
}





//==== 005c6c50 GetRegenerativeCoolingArea_m2 ====


/* public: double __thiscall ThermalRocketSubModule__GetRegenerativeCoolingArea_m2(void)const  */

double __thiscall
ThermalRocketSubModule__GetRegenerativeCoolingArea_m2(ThermalRocketSubModule *this)

{
  int iVar1;
  double dVar2;
  Maybe_L_double_G_ MStack_24;
  double dStack_14;
  double dStack_c;
  
  dVar2 = this->ChamberWallThickness_m * 0.5;
  dStack_c = (this->CachedChamberLength_m * this->RegenerativeCooling_Percent) / (dVar2 + dVar2);
  dVar2 = util__Floor(&dStack_c);
  iVar1 = 0;
  if (-1 < (int)dVar2) {
    iVar1 = (int)dVar2;
  }
  dStack_14 = (this->ThroatRadius_m * 3.141592653589793 * this->ThroatRadius_m *
              this->ChamberContractionRatio) / 3.141592653589793;
  util__Sqrt(&MStack_24,&dStack_14);
  if (MStack_24.IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return MStack_24.Data * 6.283185307179586 * (double)iVar1 *
         this->ChamberWallThickness_m * 0.5 * 6.283185307179586 * 0.5;
}





//==== 005c6d50 GetRegenerativeCoolingHeatTransferCoefficient_W__m2_K ====

/* public: double 
   ThermalRocketSubModule__GetRegenerativeCoolingHeatTransferCoefficient_W__m2_K(void)const  */

double 
ThermalRocketSubModule__GetRegenerativeCoolingHeatTransferCoefficient_W__m2_K
          (ThermalRocketSubModule *this)

{
  Material *this_00;
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  Maybe_L_double_G_ local_2c;
  double local_1c;
  double local_14;
  double local_c;
  
  *(uint32_t *)&local_1c = TurbopumpSubModule__GetMassFlowRate_kg__s(&this->Injector);
  dVar2 = this->ChamberWallThickness_m * 0.5;
  *(uint32_t *)&local_1c = local_1c / (dVar2 * 3.141592653589793 * dVar2 * this->CachedCoolant->Density_kg__m3);
  *(uint32_t *)&local_c = (this->CachedChamberLength_m * this->RegenerativeCooling_Percent) / (dVar2 + dVar2);
  dVar2 = util__Floor(&local_c);
  iVar1 = 0;
  if (-1 < (int)dVar2) {
    iVar1 = (int)dVar2;
  }
  local_14 = (this->ThroatRadius_m * 3.141592653589793 * this->ThroatRadius_m *
             this->ChamberContractionRatio) / 3.141592653589793;
  util__Sqrt(&local_2c,&local_14);
  if (local_2c.IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  this_00 = this->CachedCoolant;
  dVar4 = this->ChamberWallThickness_m * 0.5;
  dVar3 = local_2c.Data * 6.283185307179586 * (double)iVar1;
  dVar2 = *(double *)&(this_00->Dissociation).Data._pad_0x8_2;
  dVar7 = this_00->Density_kg__m3;
  dVar6 = this_00->Resistivity_Ohm_m;
  dVar8 = local_1c;
  dVar5 = Material__GetPrandtlNumber(this_00);
  dVar2 = Mechanics__GetInternalLaminarPipeFlowHeatTransferCoefficient_W__m2_K
                    (dVar5,dVar6,dVar7,dVar2,dVar4,dVar3,dVar8);
  return dVar2;
}

//==== 005c6ec0 GetRocketEngineShader ====


/* class RocketEngineShader * __cdecl GetRocketEngineShader(void) */

RocketEngineShader * __cdecl GetRocketEngineShader(void)

{
  RocketEngineShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_44fbb442__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_231c133f__thread_safe_static_guard_0__);
    if ( cde_l2_231c133f__thread_safe_static_guard_0__ == -1) {
      this = (RocketEngineShader *)port_op_new(0x5c);
      if (this == (RocketEngineShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x5c);
        pSVar1 = (Shader *)RocketEngineShader__RocketEngineShader(this);
      }
       cde_l2_34128338_Singleton = (RocketEngineShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_231c133f__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_34128338_Singleton;
}





//==== 005c6ed0 GetSpline_m ====


/* public: class util__Darray_L_structutil__Vec2_L_double_G__G_ __thiscall
   ThermalRocketSubModule__GetSpline_m(void)const  */

void __thiscall ThermalRocketSubModule__GetSpline_m(ThermalRocketSubModule *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  Maybe_L_double_G_ *pMVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  double dVar8;
  Darray_L_struct_util__Vec2_L_double_G___G_ *in_stack_00000004;
  Maybe_L_double_G_ MStack_9c;
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [17];
  char cStack_4b;
  char cStack_4a;
  char cStack_49;
  undefined1 auStack_48 [16];
  double dStack_38;
  undefined1 auStack_30 [8];
  double dStack_28;
  Maybe_L_double_G_ *pMStack_20;
  int iStack_1c;
  double dStack_18;
  double dStack_10;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  dStack_38 = (this->ThroatRadius_m * 3.141592653589793 * this->ThroatRadius_m *
              this->NozzleExpansionRatio) / 3.141592653589793;
  util__Sqrt((Maybe_L_double_G_ *)auStack_30,&dStack_38);
  if ((*(uint8_t*)&(dStack_28)) == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  (*(uint64_t*)((char*)&(auStack_8c)+8)) = (double)(uintptr_t)((double)(int)(uintptr_t)(auStack_30) - this->ThroatRadius_m);
  dStack_38 = GetNozzleLength_m(this);
  dStack_10 = 0.0;
  if (0.0 < dStack_38) {
    dStack_38 = this->ChamberWallThickness_m;
    dStack_10 = GetNozzleLength_m(this);
    dStack_10 = dStack_38 / dStack_10;
    dStack_38 = dStack_10;
  }
  pMStack_20 = util__Sqrt((Maybe_L_double_G_ *)auStack_30,&dStack_10);
  if (pMStack_20->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dStack_18 = this->ChamberWallThickness_m;
  dStack_38 = pMStack_20->Data * (double)(*(uint64_t*)((char*)&(auStack_8c)+8)) + this->ThroatRadius_m + dStack_18;
  dVar8 = GetNozzleLength_m(this);
  (*(uint64_t*)((char*)&(auStack_7c)+8)) = 0.0;
  if (0.0 <= dVar8 - dStack_18) {
    (*(uint64_t*)((char*)&(auStack_7c)+8)) = dVar8 - dStack_18;
  }
  dStack_18 = (this->ThroatRadius_m * 3.141592653589793 * this->ThroatRadius_m *
              this->NozzleExpansionRatio) / 3.141592653589793;
  util__Sqrt((Maybe_L_double_G_ *)auStack_30,&dStack_18);
  if ((*(uint8_t*)&(dStack_28)) == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  (*(uint64_t*)((char*)&(auStack_6c)+8)) = (double)(uintptr_t)((double)(int)(uintptr_t)(auStack_30) * 0.2);
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = (undefined **)(&vftable_12);
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 10;
  puVar2 = (undefined4 *)port_op_new(0xa0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    iVar5 = 10;
    puVar3 = puVar2;
    do {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      iVar5 = iVar5 + -1;
      puVar3 = puVar3 + 4;
    } while (iVar5 != 0);
  }
  *(undefined4 **)(in_stack_00000004 + 4) = puVar2;
  iVar5 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0xc)) {
    iVar6 = 0;
    do {
      iVar6 = iVar6 + 0x10;
      iVar5 = iVar5 + 1;
      puVar2 = (undefined4 *)(*(int *)(in_stack_00000004 + 4) + -0x10 + iVar6);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
    } while (iVar5 < *(int *)(in_stack_00000004 + 0xc));
  }
  dStack_18 = this->CachedChamberLength_m;
  dVar8 = GetNozzleLength_m(this);
  iVar5 = *(int *)(in_stack_00000004 + 8);
  dStack_18 = dVar8 + dStack_18;
  pMStack_20 = (Maybe_L_double_G_ *)(iVar5 + 1);
  util__Darray_struct_util__Vec2_double_____SetSize(in_stack_00000004,(int *)&pMStack_20);
  bVar1 = util__Darray_struct_util__Vec2_double_____CheckSize(in_stack_00000004,iVar5);
  if (bVar1) {
    iVar5 = *(int *)(in_stack_00000004 + 8);
    iVar6 = *(int *)(in_stack_00000004 + 4);
    *(undefined8 *)(iVar6 + -0x10 + iVar5 * 0x10) = 0;
    *(double *)(iVar6 + -8 + iVar5 * 0x10) = dStack_18;
  }
  (*(uint64_t*)((char*)&(auStack_5c)+8)) = this->CachedChamberLength_m;
  dStack_18 = (this->ThroatRadius_m * 3.141592653589793 * this->ThroatRadius_m *
              this->ChamberContractionRatio) / 3.141592653589793;
  util__Sqrt((Maybe_L_double_G_ *)auStack_30,&dStack_18);
  if ((*(uint8_t*)&(dStack_28)) == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  (*(uint64_t*)((char*)&(auStack_48)+8)) = (uint64_t)(uintptr_t)(auStack_30);
  dVar8 = GetChamberStartChamfer_m(this);
  (*(uint64_t*)((char*)&(auStack_48)+8)) = (double)(*(uint64_t*)((char*)&(auStack_48)+8)) - dVar8;
  dVar8 = GetNozzleLength_m(this);
  iVar5 = *(int *)(in_stack_00000004 + 8);
  (*(uint64_t*)((char*)&(auStack_5c)+8)) = dVar8 + (double)(*(uint64_t*)((char*)&(auStack_5c)+8));
  pMStack_20 = (Maybe_L_double_G_ *)(iVar5 + 1);
  util__Darray_struct_util__Vec2_double_____SetSize(in_stack_00000004,(int *)&pMStack_20);
  bVar1 = util__Darray_struct_util__Vec2_double_____CheckSize(in_stack_00000004,iVar5);
  if (bVar1) {
    iVar5 = *(int *)(in_stack_00000004 + 8);
    iVar6 = *(int *)(in_stack_00000004 + 4);
    *(undefined8 *)(iVar6 + -0x10 + iVar5 * 0x10) = (*(uint64_t*)((char*)&(auStack_48)+8));
    *(undefined8 *)(iVar6 + -8 + iVar5 * 0x10) = (*(uint64_t*)((char*)&(auStack_5c)+8));
  }
  (*(uint64_t*)((char*)&(auStack_48)+8)) = this->CachedChamberLength_m;
  dStack_18 = (this->ThroatRadius_m * 3.141592653589793 * this->ThroatRadius_m *
              this->ChamberContractionRatio) / 3.141592653589793;
  util__Sqrt((Maybe_L_double_G_ *)auStack_30,&dStack_18);
  if ((*(uint8_t*)&(dStack_28)) == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  (*(uint64_t*)((char*)&(auStack_5c)+8)) = (uint64_t)(uintptr_t)(auStack_30);
  dVar8 = GetNozzleLength_m(this);
  (*(uint64_t*)((char*)&(auStack_48)+8)) = dVar8 + (double)(*(uint64_t*)((char*)&(auStack_48)+8));
  dVar8 = GetChamberStartChamfer_m(this);
  iVar5 = *(int *)(in_stack_00000004 + 8);
  (*(uint64_t*)((char*)&(auStack_48)+8)) = (double)(*(uint64_t*)((char*)&(auStack_48)+8)) - dVar8;
  pMStack_20 = (Maybe_L_double_G_ *)(iVar5 + 1);
  util__Darray_struct_util__Vec2_double_____SetSize(in_stack_00000004,(int *)&pMStack_20);
  bVar1 = util__Darray_struct_util__Vec2_double_____CheckSize(in_stack_00000004,iVar5);
  if (bVar1) {
    iVar5 = *(int *)(in_stack_00000004 + 8);
    iVar6 = *(int *)(in_stack_00000004 + 4);
    *(undefined8 *)(iVar6 + -0x10 + iVar5 * 0x10) = (*(uint64_t*)((char*)&(auStack_5c)+8));
    *(undefined8 *)(iVar6 + -8 + iVar5 * 0x10) = (*(uint64_t*)((char*)&(auStack_48)+8));
  }
  dStack_18 = (this->ThroatRadius_m * 3.141592653589793 * this->ThroatRadius_m *
              this->ChamberContractionRatio) / 3.141592653589793;
  util__Sqrt((Maybe_L_double_G_ *)auStack_30,&dStack_18);
  if ((*(uint8_t*)&(dStack_28)) == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  (*(uint64_t*)((char*)&(auStack_5c)+8)) = (uint64_t)(uintptr_t)(auStack_30);
  (*(uint64_t*)((char*)&(auStack_48)+8)) = GetNozzleLength_m(this);
  dVar8 = GetChamberEndChamfer_m(this);
  iVar5 = *(int *)(in_stack_00000004 + 8);
  (*(uint64_t*)((char*)&(auStack_48)+8)) = dVar8 + (double)(*(uint64_t*)((char*)&(auStack_48)+8));
  pMStack_20 = (Maybe_L_double_G_ *)(iVar5 + 1);
  util__Darray_struct_util__Vec2_double_____SetSize(in_stack_00000004,(int *)&pMStack_20);
  bVar1 = util__Darray_struct_util__Vec2_double_____CheckSize(in_stack_00000004,iVar5);
  if (bVar1) {
    iVar5 = *(int *)(in_stack_00000004 + 8);
    iVar6 = *(int *)(in_stack_00000004 + 4);
    *(undefined8 *)(iVar6 + -0x10 + iVar5 * 0x10) = (*(uint64_t*)((char*)&(auStack_5c)+8));
    *(undefined8 *)(iVar6 + -8 + iVar5 * 0x10) = (*(uint64_t*)((char*)&(auStack_48)+8));
  }
  dStack_18 = (this->ThroatRadius_m * 3.141592653589793 * this->ThroatRadius_m *
              this->ChamberContractionRatio) / 3.141592653589793;
  util__Sqrt((Maybe_L_double_G_ *)auStack_30,&dStack_18);
  if ((*(uint8_t*)&(dStack_28)) == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  (*(uint64_t*)((char*)&(auStack_48)+8)) = (uint64_t)(uintptr_t)(auStack_30);
  dVar8 = GetChamberEndChamfer_m(this);
  (*(uint64_t*)((char*)&(auStack_48)+8)) = (double)(*(uint64_t*)((char*)&(auStack_48)+8)) - dVar8;
  (*(uint64_t*)((char*)&(auStack_5c)+8)) = GetNozzleLength_m(this);
  iVar5 = *(int *)(in_stack_00000004 + 8);
  pMStack_20 = (Maybe_L_double_G_ *)(iVar5 + 1);
  util__Darray_struct_util__Vec2_double_____SetSize(in_stack_00000004,(int *)&pMStack_20);
  bVar1 = util__Darray_struct_util__Vec2_double_____CheckSize(in_stack_00000004,iVar5);
  if (bVar1) {
    iVar5 = *(int *)(in_stack_00000004 + 8);
    iVar6 = *(int *)(in_stack_00000004 + 4);
    *(undefined8 *)(iVar6 + -0x10 + iVar5 * 0x10) = (*(uint64_t*)((char*)&(auStack_48)+8));
    *(undefined8 *)(iVar6 + -8 + iVar5 * 0x10) = (*(uint64_t*)((char*)&(auStack_5c)+8));
  }
  dStack_18 = this->ThroatRadius_m;
  (*(uint64_t*)((char*)&(auStack_48)+8)) = GetNozzleLength_m(this);
  iVar5 = *(int *)(in_stack_00000004 + 8);
  pMStack_20 = (Maybe_L_double_G_ *)(iVar5 + 1);
  util__Darray_struct_util__Vec2_double_____SetSize(in_stack_00000004,(int *)&pMStack_20);
  bVar1 = util__Darray_struct_util__Vec2_double_____CheckSize(in_stack_00000004,iVar5);
  if (bVar1) {
    iVar5 = *(int *)(in_stack_00000004 + 8);
    iVar6 = *(int *)(in_stack_00000004 + 4);
    *(double *)(iVar6 + -0x10 + iVar5 * 0x10) = dStack_18;
    *(undefined8 *)(iVar6 + -8 + iVar5 * 0x10) = (*(uint64_t*)((char*)&(auStack_48)+8));
  }
  if (1.0 < this->NozzleExpansionRatio) {
    iStack_1c = 0;
    do {
      iStack_1c = iStack_1c + 1;
      dStack_18 = (double)((float)iStack_1c * 0.125);
      (*(uint64_t*)((char*)&(auStack_48)+8)) = dStack_18 * (double)(*(uint64_t*)((char*)&(auStack_8c)+8)) + this->ThroatRadius_m;
      dVar8 = GetNozzleLength_m(this);
      iVar5 = *(int *)(in_stack_00000004 + 8);
      pMStack_20 = (Maybe_L_double_G_ *)(iVar5 + 1);
      dStack_18 = dVar8 * (1.0 - dStack_18 * dStack_18);
      util__Darray_struct_util__Vec2_double_____SetSize(in_stack_00000004,(int *)&pMStack_20);
      bVar1 = util__Darray_struct_util__Vec2_double_____CheckSize(in_stack_00000004,iVar5);
      if (bVar1) {
        iVar5 = *(int *)(in_stack_00000004 + 8);
        iVar6 = *(int *)(in_stack_00000004 + 4);
        *(undefined8 *)(iVar6 + -0x10 + iVar5 * 0x10) = (*(uint64_t*)((char*)&(auStack_48)+8));
        *(double *)(iVar6 + -8 + iVar5 * 0x10) = dStack_18;
      }
    } while (iStack_1c < 8);
    dVar8 = this->RegenerativeCooling_Percent;
    pMStack_20 = (Maybe_L_double_G_ *)0x7;
    cStack_49 = 0.5 < dVar8;
    cStack_4a = 0.25 < dVar8;
    cStack_4b = 0.0 < dVar8;
    (*(uint64_t*)((char*)&(auStack_48)+8)) = (double)(*(uint64_t*)((char*)&(auStack_7c)+8)) * 0.125 * 0.25;
    if ((double)(*(uint64_t*)((char*)&(auStack_6c)+8)) <= (double)(*(uint64_t*)((char*)&(auStack_48)+8))) {
      (*(uint64_t*)((char*)&(auStack_48)+8)) = (*(uint64_t*)((char*)&(auStack_6c)+8));
    }
    do {
      dStack_18 = (double)((float)(int)((int)&pMStack_20->Data + 1) * 0.125);
      (*(uint64_t*)((char*)&(auStack_6c)+8)) = GetNozzleLength_m(this);
      (*(uint64_t*)((char*)&(auStack_6c)+8)) = (double)(*(uint64_t*)((char*)&(auStack_6c)+8)) * (1.0 - dStack_18 * dStack_18);
      if ((double)(*(uint64_t*)((char*)&(auStack_7c)+8)) <= (double)(*(uint64_t*)((char*)&(auStack_6c)+8))) {
        (*(uint64_t*)((char*)&(auStack_6c)+8)) = (*(uint64_t*)((char*)&(auStack_7c)+8));
      }
      dStack_18 = (double)(*(uint64_t*)((char*)&(auStack_6c)+8));
      dVar8 = GetNozzleLength_m(this);
      dStack_28 = 1.0 - dStack_18 / dVar8;
      pMVar4 = util__Sqrt(&MStack_9c,&dStack_28);
      if (pMVar4->IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      iVar5 = *(int *)(in_stack_00000004 + 8);
      iStack_1c = iVar5 + 1;
      (*(uint64_t*)((char*)&(auStack_5c)+8)) =
           pMVar4->Data * (double)(*(uint64_t*)((char*)&(auStack_8c)+8)) + this->ThroatRadius_m +
           this->ChamberWallThickness_m;
      util__Darray_struct_util__Vec2_double_____SetSize(in_stack_00000004,&iStack_1c);
      bVar1 = util__Darray_struct_util__Vec2_double_____CheckSize(in_stack_00000004,iVar5);
      if (bVar1) {
        iVar5 = *(int *)(in_stack_00000004 + 8);
        iVar6 = *(int *)(in_stack_00000004 + 4);
        *(undefined8 *)(iVar6 + -0x10 + iVar5 * 0x10) = (*(uint64_t*)((char*)&(auStack_5c)+8));
        *(undefined8 *)(iVar6 + -8 + iVar5 * 0x10) = (*(uint64_t*)((char*)&(auStack_6c)+8));
      }
      if ((0 < (int)pMStack_20) &&
         (((cStack_49 != '\0' || ((cStack_4a != '\0' && (((uint)pMStack_20 & 1) != 0)))) ||
          ((cStack_4b != '\0' && (((byte)pMStack_20 & 3) == 3)))))) {
        iVar5 = *(int *)(in_stack_00000004 + 8);
        dStack_18 = (double)(*(uint64_t*)((char*)&(auStack_48)+8)) + (double)(*(uint64_t*)((char*)&(auStack_5c)+8));
        iStack_1c = iVar5 + 1;
        util__Darray_struct_util__Vec2_double_____SetSize(in_stack_00000004,&iStack_1c);
        bVar1 = util__Darray_struct_util__Vec2_double_____CheckSize(in_stack_00000004,iVar5);
        if (bVar1) {
          iVar5 = *(int *)(in_stack_00000004 + 8);
          iVar6 = *(int *)(in_stack_00000004 + 4);
          *(double *)(iVar6 + -0x10 + iVar5 * 0x10) = dStack_18;
          *(undefined8 *)(iVar6 + -8 + iVar5 * 0x10) = (*(uint64_t*)((char*)&(auStack_6c)+8));
        }
        iVar5 = *(int *)(in_stack_00000004 + 8);
        (*(uint64_t*)((char*)&(auStack_6c)+8)) = (double)(*(uint64_t*)((char*)&(auStack_48)+8)) + (double)(*(uint64_t*)((char*)&(auStack_6c)+8));
        iStack_1c = iVar5 + 1;
        util__Darray_struct_util__Vec2_double_____SetSize(in_stack_00000004,&iStack_1c);
        bVar1 = util__Darray_struct_util__Vec2_double_____CheckSize(in_stack_00000004,iVar5);
        if (bVar1) {
          iVar5 = *(int *)(in_stack_00000004 + 8);
          iVar6 = *(int *)(in_stack_00000004 + 4);
          *(double *)(iVar6 + -0x10 + iVar5 * 0x10) = dStack_18;
          *(undefined8 *)(iVar6 + -8 + iVar5 * 0x10) = (*(uint64_t*)((char*)&(auStack_6c)+8));
        }
        iVar5 = *(int *)(in_stack_00000004 + 8);
        iStack_1c = iVar5 + 1;
        util__Darray_struct_util__Vec2_double_____SetSize(in_stack_00000004,&iStack_1c);
        bVar1 = util__Darray_struct_util__Vec2_double_____CheckSize(in_stack_00000004,iVar5);
        if (bVar1) {
          iVar5 = *(int *)(in_stack_00000004 + 8);
          iVar6 = *(int *)(in_stack_00000004 + 4);
          *(undefined8 *)(iVar6 + -0x10 + iVar5 * 0x10) = (*(uint64_t*)((char*)&(auStack_5c)+8));
          *(undefined8 *)(iVar6 + -8 + iVar5 * 0x10) = (*(uint64_t*)((char*)&(auStack_6c)+8));
        }
      }
      pMStack_20 = (Maybe_L_double_G_ *)((char *)pMStack_20 - 1);
    } while (-1 < (int)pMStack_20);
  }
  dStack_28 = this->ChamberWallThickness_m;
  dStack_18 = dStack_28 + this->ThroatRadius_m;
  if (dStack_18 <= dStack_38) {
    dStack_18 = dStack_38;
  }
  dVar8 = GetNozzleLength_m(this);
  iVar5 = *(int *)(in_stack_00000004 + 8);
  dStack_28 = dVar8 - dStack_28;
  iStack_1c = iVar5 + 1;
  util__Darray_struct_util__Vec2_double_____SetSize(in_stack_00000004,&iStack_1c);
  bVar1 = util__Darray_struct_util__Vec2_double_____CheckSize(in_stack_00000004,iVar5);
  if (bVar1) {
    iVar5 = *(int *)(in_stack_00000004 + 8);
    iVar6 = *(int *)(in_stack_00000004 + 4);
    *(double *)(iVar6 + -0x10 + iVar5 * 0x10) = dStack_18;
    *(double *)(iVar6 + -8 + iVar5 * 0x10) = dStack_28;
  }
  dStack_28 = (this->ThroatRadius_m * 3.141592653589793 * this->ThroatRadius_m *
              this->ChamberContractionRatio) / 3.141592653589793;
  util__Sqrt((Maybe_L_double_G_ *)auStack_6c,&dStack_28);
  pcVar7 = DebugBreak_exref;
  if (auStack_6c[8] == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    pcVar7 = DebugBreak_exref;
    DebugBreak();
  }
  (*(uint64_t*)((char*)&(auStack_48)+8)) = (*(uint64_t*)&(auStack_6c));
  (*(uint64_t*)((char*)&(auStack_5c)+8)) = this->ChamberWallThickness_m;
  (*(uint64_t*)((char*)&(auStack_7c)+8)) = this->CachedChamberLength_m;
  dStack_18 = (this->ThroatRadius_m * 3.141592653589793 * this->ThroatRadius_m *
              this->ChamberContractionRatio) / 3.141592653589793;
  util__Sqrt((Maybe_L_double_G_ *)auStack_8c,&dStack_18);
  if (auStack_8c[8] == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    (*pcVar7)();
  }
  dStack_28 = this->ChamberWallThickness_m;
  dVar8 = (double)(*(uint64_t*)&(auStack_8c)) - this->ThroatRadius_m;
  if ((double)(*(uint64_t*)((char*)&(auStack_7c)+8)) <= dVar8) {
    dVar8 = (double)(*(uint64_t*)((char*)&(auStack_7c)+8));
  }
  (*(uint64_t*)((char*)&(auStack_5c)+8)) = ((double)(*(uint64_t*)((char*)&(auStack_5c)+8)) + (double)(*(uint64_t*)((char*)&(auStack_48)+8))) - dVar8 * 0.2;
  if ((double)(*(uint64_t*)((char*)&(auStack_5c)+8)) <= dStack_38) {
    (*(uint64_t*)((char*)&(auStack_5c)+8)) = dStack_38;
  }
  dVar8 = GetNozzleLength_m(this);
  iVar5 = *(int *)(in_stack_00000004 + 8);
  dStack_28 = dVar8 - dStack_28;
  iStack_1c = iVar5 + 1;
  util__Darray_struct_util__Vec2_double_____SetSize(in_stack_00000004,&iStack_1c);
  bVar1 = util__Darray_struct_util__Vec2_double_____CheckSize(in_stack_00000004,iVar5);
  if (bVar1) {
    iVar5 = *(int *)(in_stack_00000004 + 8);
    iVar6 = *(int *)(in_stack_00000004 + 4);
    *(undefined8 *)(iVar6 + -0x10 + iVar5 * 0x10) = (*(uint64_t*)((char*)&(auStack_5c)+8));
    *(double *)(iVar6 + -8 + iVar5 * 0x10) = dStack_28;
  }
  (*(uint64_t*)((char*)&(auStack_48)+8)) = GetNozzleLength_m(this);
  dStack_18 = this->ChamberWallThickness_m;
  dStack_38 = this->CachedChamberLength_m;
  dStack_28 = (this->ThroatRadius_m * 3.141592653589793 * this->ThroatRadius_m *
              this->ChamberContractionRatio) / 3.141592653589793;
  util__Sqrt((Maybe_L_double_G_ *)auStack_7c,&dStack_28);
  pcVar7 = DebugBreak_exref;
  if (auStack_7c[8] == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    pcVar7 = DebugBreak_exref;
    DebugBreak();
  }
  dVar8 = (double)(*(uint64_t*)&(auStack_7c)) - this->ThroatRadius_m;
  if (dStack_38 <= dVar8) {
    dVar8 = dStack_38;
  }
  dStack_38 = dVar8;
  dVar8 = GetNozzleLength_m(this);
  dStack_18 = (dVar8 - dStack_18) + dStack_38 * 0.2;
  if (dStack_18 <= (double)(*(uint64_t*)((char*)&(auStack_48)+8))) {
    dStack_18 = (double)(*(uint64_t*)((char*)&(auStack_48)+8));
  }
  dStack_28 = (this->ThroatRadius_m * 3.141592653589793 * this->ThroatRadius_m *
              this->ChamberContractionRatio) / 3.141592653589793;
  util__Sqrt((Maybe_L_double_G_ *)auStack_48,&dStack_28);
  if (auStack_48[8] == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    (*pcVar7)();
  }
  iVar5 = *(int *)(in_stack_00000004 + 8);
  dStack_38 = (double)(*(uint64_t*)&(auStack_48)) + this->ChamberWallThickness_m;
  iStack_1c = iVar5 + 1;
  util__Darray_struct_util__Vec2_double_____SetSize(in_stack_00000004,&iStack_1c);
  bVar1 = util__Darray_struct_util__Vec2_double_____CheckSize(in_stack_00000004,iVar5);
  if (bVar1) {
    iVar5 = *(int *)(in_stack_00000004 + 8);
    iVar6 = *(int *)(in_stack_00000004 + 4);
    *(double *)(iVar6 + -0x10 + iVar5 * 0x10) = dStack_38;
    *(double *)(iVar6 + -8 + iVar5 * 0x10) = dStack_18;
  }
  dStack_38 = this->ChamberWallThickness_m;
  dStack_28 = this->CachedChamberLength_m;
  (*(uint64_t*)((char*)&(auStack_48)+8)) = GetNozzleLength_m(this);
  dStack_28 = dStack_28 + dStack_38;
  dStack_38 = this->CachedChamberLength_m;
  (*(uint64_t*)((char*)&(auStack_48)+8)) = (double)(*(uint64_t*)((char*)&(auStack_48)+8)) + dStack_28;
  dStack_28 = (this->ThroatRadius_m * 3.141592653589793 * this->ThroatRadius_m *
              this->ChamberContractionRatio) / 3.141592653589793;
  util__Sqrt((Maybe_L_double_G_ *)auStack_5c,&dStack_28);
  pcVar7 = DebugBreak_exref;
  if (auStack_5c[8] == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    pcVar7 = DebugBreak_exref;
    DebugBreak();
  }
  if (dStack_38 <= (double)(*(uint64_t*)&(auStack_5c))) {
    (*(uint64_t*)&(auStack_5c)) = dStack_38;
  }
  dStack_38 = (this->ThroatRadius_m * 3.141592653589793 * this->ThroatRadius_m *
              this->ChamberContractionRatio) / 3.141592653589793;
  dStack_18 = (double)(*(uint64_t*)&(auStack_5c));
  util__Sqrt((Maybe_L_double_G_ *)auStack_6c,&dStack_38);
  if (auStack_6c[8] == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    (*pcVar7)();
  }
  (*(uint64_t*)((char*)&(auStack_7c)+8)) = (double)(*(uint64_t*)&(auStack_6c)) + this->ChamberWallThickness_m;
  iVar5 = *(int *)(in_stack_00000004 + 8);
  iStack_1c = iVar5 + 1;
  dStack_18 = (double)(*(uint64_t*)((char*)&(auStack_48)+8)) - dStack_18 * 0.2;
  util__Darray_struct_util__Vec2_double_____SetSize(in_stack_00000004,&iStack_1c);
  bVar1 = util__Darray_struct_util__Vec2_double_____CheckSize(in_stack_00000004,iVar5);
  if (bVar1) {
    iVar5 = *(int *)(in_stack_00000004 + 8);
    iVar6 = *(int *)(in_stack_00000004 + 4);
    *(undefined8 *)(iVar6 + -0x10 + iVar5 * 0x10) = (*(uint64_t*)((char*)&(auStack_7c)+8));
    *(double *)(iVar6 + -8 + iVar5 * 0x10) = dStack_18;
  }
  dStack_38 = this->ChamberWallThickness_m;
  dStack_28 = this->CachedChamberLength_m;
  (*(uint64_t*)((char*)&(auStack_7c)+8)) = GetNozzleLength_m(this);
  (*(uint64_t*)((char*)&(auStack_7c)+8)) = (double)(*(uint64_t*)((char*)&(auStack_7c)+8)) + dStack_28 + dStack_38;
  dStack_28 = (this->ThroatRadius_m * 3.141592653589793 * this->ThroatRadius_m *
              this->ChamberContractionRatio) / 3.141592653589793;
  util__Sqrt((Maybe_L_double_G_ *)auStack_6c,&dStack_28);
  pcVar7 = DebugBreak_exref;
  if (auStack_6c[8] == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    pcVar7 = DebugBreak_exref;
    DebugBreak();
  }
  dStack_18 = (double)(*(uint64_t*)&(auStack_6c));
  (*(uint64_t*)((char*)&(auStack_5c)+8)) = this->ChamberWallThickness_m;
  (*(uint64_t*)((char*)&(auStack_48)+8)) = this->CachedChamberLength_m;
  dStack_38 = (this->ThroatRadius_m * 3.141592653589793 * this->ThroatRadius_m *
              this->ChamberContractionRatio) / 3.141592653589793;
  util__Sqrt((Maybe_L_double_G_ *)auStack_8c,&dStack_38);
  if (auStack_8c[8] == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    (*pcVar7)();
  }
  if ((double)(*(uint64_t*)((char*)&(auStack_48)+8)) <= (double)(*(uint64_t*)&(auStack_8c))) {
    (*(uint64_t*)&(auStack_8c)) = (*(uint64_t*)((char*)&(auStack_48)+8));
  }
  iVar5 = *(int *)(in_stack_00000004 + 8);
  iStack_1c = iVar5 + 1;
  (*(uint64_t*)((char*)&(auStack_5c)+8)) = ((double)(*(uint64_t*)((char*)&(auStack_5c)+8)) + dStack_18) - (double)(*(uint64_t*)&(auStack_8c)) * 0.2;
  util__Darray_struct_util__Vec2_double_____SetSize(in_stack_00000004,&iStack_1c);
  bVar1 = util__Darray_struct_util__Vec2_double_____CheckSize(in_stack_00000004,iVar5);
  if (bVar1) {
    iVar5 = *(int *)(in_stack_00000004 + 8);
    iVar6 = *(int *)(in_stack_00000004 + 4);
    *(undefined8 *)(iVar6 + -0x10 + iVar5 * 0x10) = (*(uint64_t*)((char*)&(auStack_5c)+8));
    *(undefined8 *)(iVar6 + -8 + iVar5 * 0x10) = (*(uint64_t*)((char*)&(auStack_7c)+8));
  }
  dStack_38 = this->ChamberWallThickness_m;
  dStack_28 = this->CachedChamberLength_m;
  dVar8 = GetNozzleLength_m(this);
  iVar5 = *(int *)(in_stack_00000004 + 8);
  iStack_1c = iVar5 + 1;
  dStack_28 = dVar8 + dStack_28 + dStack_38;
  util__Darray_struct_util__Vec2_double_____SetSize(in_stack_00000004,&iStack_1c);
  bVar1 = util__Darray_struct_util__Vec2_double_____CheckSize(in_stack_00000004,iVar5);
  if (bVar1) {
    iVar5 = *(int *)(in_stack_00000004 + 8);
    iVar6 = *(int *)(in_stack_00000004 + 4);
    *(undefined8 *)(iVar6 + -0x10 + iVar5 * 0x10) = 0;
    *(double *)(iVar6 + -8 + iVar5 * 0x10) = dStack_28;
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 005c7ed0 GetSteadyStateWallTemperature_K ====


/* public: double __thiscall ThermalRocketSubModule__GetSteadyStateWallTemperature_K(void)const  */

double __thiscall
ThermalRocketSubModule__GetSteadyStateWallTemperature_K(ThermalRocketSubModule *this)

{
  float10 fVar1;
  double dVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x3e45798ee2308c3a;
  uVar3 = 0x14;
  dVar2 = GetGasWallTemperature_K(this);
  fVar1 = (float10)FUN_005c2210(this,0,dVar2,uVar3,uVar4);
  return (double)fVar1;
}





//==== 005c7f10 GetThroatPressure_Pa ====


/* public: double __thiscall ThermalRocketSubModule__GetThroatPressure_Pa(void)const  */

double __thiscall ThermalRocketSubModule__GetThroatPressure_Pa(ThermalRocketSubModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = Material__GetMixtureAdiabaticIndex
                    ((Darray_L_struct_MaterialConstituent_G_ *)&this->CachedProducts);
  dVar1 = this->ChamberContractionRatio * -1.66;
  libm_sse2_exp_precise(0.0);
  dVar3 = GetChamberPressure_Pa(this);
  dVar2 = (dVar2 - 1.0) * 0.5 + 1.0;
  libm_sse2_pow_precise(0.0,0.0);
  return dVar2 * dVar3 * (1.0 - dVar1);
}





//==== 005c7fb0 GetTotalMass_kg_005c7fb0 ====


/* public: double __thiscall ThermalRocketSubModule__GetTotalMass_kg(void)const  */

double __thiscall ThermalRocketSubModule__GetTotalMass_kg(ThermalRocketSubModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = TurbopumpSubModule__GetSolidMass_kg(&this->Injector);
  dVar1 = this->ChamberWallThickness_m;
  dVar3 = GetPrimarySurfaceArea_m2(this);
  return dVar3 * dVar1 * this->ChamberComposition->Density_kg__m3 + dVar2;
}





//==== 005c8110 PassThroughCachedData2 ====


/* public: void __thiscall ThermalRocketSubModule__PassThroughCachedData2(double) */

void __thiscall
ThermalRocketSubModule__PassThroughCachedData2(ThermalRocketSubModule *this,double param_1)

{
  this->CachedChamberTemperature_K = param_1;
  return;
}





//==== 005c8130 PassThroughCachedData3 ====

/* public: void __thiscall ThermalRocketSubModule__PassThroughCachedData3(class util__Darray_L_struct_MaterialConstituent_G_ const &) */

void __thiscall
ThermalRocketSubModule__PassThroughCachedData3
          (ThermalRocketSubModule *this,Darray_L_MaterialConstituent_G_ *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Material **ppMVar4;
  Darray_L_MaterialConstituent_G_ *pDVar5;
  int iVar6;
  MaterialConstituent *pMVar7;
  MaterialConstituent *pMVar8;
  uint uVar9;
  Darray_L_MaterialConstituent_G_ *this_00;
  uint uVar10;
  
  pDVar5 = param_1;
  this_00 = &this->CachedProducts;
  param_1 = (Darray_L_MaterialConstituent_G_ *)(**(code **)(param_1->_pad_0x0_0 + 0xc))();
  util__Darray_L_MaterialConstituent_G___SetSize(this_00,(int *)&param_1);
  iVar6 = (**(code **)(pDVar5->_pad_0x0_0 + 0xc))();
  if (iVar6 == 0) {
    (**(code **)(this_00->_pad_0x0_0 + 0x10))();
    return;
  }
  uVar9 = (this->CachedProducts).Size;
  if ((int)uVar9 < 0) {
    param_1 = (Darray_L_MaterialConstituent_G_ *)0x0;
    util__Darray_L_MaterialConstituent_G___SetSize(this_00,(int *)&param_1);
    uVar9 = (this->CachedProducts).Size;
  }
  if (0x3fffffff < (int)uVar9) {
    param_1 = (Darray_L_MaterialConstituent_G_ *)0x3fffffff;
    util__Darray_L_MaterialConstituent_G___SetSize(this_00,(int *)&param_1);
    uVar9 = (this->CachedProducts).Size;
  }
  uVar10 = (this->CachedProducts).Capacity;
  if ((int)uVar10 < (int)uVar9) {
    if (uVar10 == 0) {
      (this->CachedProducts).Capacity = uVar9;
      uVar10 = uVar9;
    }
    if ((int)uVar10 < (int)uVar9) {
      do {
        uVar10 = uVar10 * 2;
      } while ((int)uVar10 < (int)uVar9);
      (this->CachedProducts).Capacity = uVar10;
    }
    if (0x3fffffff < (int)uVar10) {
      (this->CachedProducts).Capacity = 0x3fffffff;
      uVar10 = 0x3fffffff;
    }
    pMVar7 = (this->CachedProducts).Data;
    if (pMVar7 != (MaterialConstituent *)0x0) {
      port_op_delete(pMVar7);
      uVar10 = (this->CachedProducts).Capacity;
    }
    (this->CachedProducts).Data = (MaterialConstituent *)0x0;
    pMVar7 = (MaterialConstituent *)(uintptr_t)(port_op_new(-(uint)((int)((ulonglong)uVar10 * 0x10 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar10 * 0x10)));
    if (pMVar7 == (MaterialConstituent *)0x0) {
      pMVar7 = (MaterialConstituent *)0x0;
    }
    else {
      pMVar8 = pMVar7;
      if (uVar10 != 0) {
        do {
          pMVar8->Type = (Material *)0x0;
          pMVar8->UnitlessFraction = 0.0;
          uVar10 = uVar10 - 1;
          pMVar8 = pMVar8 + 1;
        } while (uVar10 != 0);
        (this->CachedProducts).Data = pMVar7;
        goto LAB_00528ea2;
      }
    }
    (this->CachedProducts).Data = pMVar7;
  }
  else {
    pMVar7 = (this->CachedProducts).Data;
  }
LAB_00528ea2:
  pMVar8 = pDVar5->Data;
  if (pMVar8 != pMVar8 + pDVar5->Size) {
    do {
      ppMVar4 = &pMVar8->Type;
      uVar1 = *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar8) + 0x4));
      uVar2 = *(undefined4 *)&pMVar8->UnitlessFraction;
      uVar3 = *(undefined4 *)((int)&pMVar8->UnitlessFraction + 4);
      pMVar8 = pMVar8 + 1;
      pMVar7->Type = *ppMVar4;
      *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar7) + 0x4)) = uVar1;
      *(undefined4 *)&pMVar7->UnitlessFraction = uVar2;
      *(undefined4 *)((int)&pMVar7->UnitlessFraction + 4) = uVar3;
      pMVar7 = pMVar7 + 1;
    } while (pMVar8 != pDVar5->Data + pDVar5->Size);
  }
  return;
}

//==== 005c8140 PassThroughCachedData ====


/* public: void  ThermalRocketSubModule__PassThroughCachedData(double,double,class
   Material *,class util__Darray_L_structMaterialConstituent_G_ const &) */

void 
ThermalRocketSubModule__PassThroughCachedData
          (ThermalRocketSubModule *this,double param_1,double param_2,Material *param_3,
          Darray_L_struct_MaterialConstituent_G_ *param_4)

{
  this->CachedChamberLength_m = param_1;
  this->CachedCoolantStorageTemperature_K = param_2;
  this->CachedCoolant = param_3;
  TurbopumpSubModule__PassThroughCachedData(&this->Injector,param_3->Density_kg__m3,param_3,true);
  TurbopumpSubModule__PassThroughCachedData2(&this->Injector,param_2);
  util__Darray_struct_MaterialConstituent___operator
            ((Darray_L_struct_MaterialConstituent_G_ *)&this->CachedReactants,param_4);
  return;
}





//==== 005ca850 SetAll_005ca850 ====


/* public: virtual void  util__Darray_L_structutil__tuple2_L_structutil__Vec2_L_double_G__Cstruct_util__Color_G__G___SetAll(struct util__tuple2_L_structutil__Vec2_L_double_G__Cstructutil__Color_G_ const &)
    */

void 
util__Darray_struct_util__tuple2_struct_util__Vec2_double__struct_util__Color_____SetAll
          (Darray_L_struct_util__tuple2_L_struct_util__Vec2_L_double_G__Cstruct_util__Color_G___G_ *this,
          tuple2_L_struct_util__Vec2_L_double_G__Cstruct_util__Color_G_ *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(this + 4);
  if (puVar4 != puVar4 + *(int *)(this + 8) * 0xc) {
    do {
      uVar1 = *(undefined4 *)(param_1 + 4);
      uVar2 = *(undefined4 *)(param_1 + 8);
      uVar3 = *(undefined4 *)(param_1 + 0xc);
      *puVar4 = *(undefined4 *)param_1;
      puVar4[1] = uVar1;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar4 + 5),(Str_L_char_G_ *)(param_1 + 0x14));
      puVar4[8] = *(undefined4 *)(param_1 + 0x20);
      puVar4[9] = *(undefined4 *)(param_1 + 0x24);
      puVar4[10] = *(undefined4 *)(param_1 + 0x28);
      puVar4[0xb] = *(undefined4 *)(param_1 + 0x2c);
      puVar4 = puVar4 + 0xc;
    } while (puVar4 != (undefined4 *)(*(int *)(this + 8) * 0x30 + *(int *)(this + 4)));
  }
  return;
}





//==== 005ca8c0 SetSize_005ca8c0 ====


/* private: void  util__Darray_L_structutil__tuple2_L_structutil__Vec2_L_double_G__Cstruct_util__Color_G__G___SetSize(int const &) */

void 
util__Darray_struct_util__tuple2_struct_util__Vec2_double__struct_util__Color_____SetSize
          (Darray_L_struct_util__tuple2_L_struct_util__Vec2_L_double_G__Cstruct_util__Color_G___G_ *this,
          int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 auStack_24 [16];
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
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
     (puVar4 = (undefined8 *)(iVar3 * 0x30 + iVar2),
     puVar4 != (undefined8 *)(*(int *)(this + 8) * 0x30 + iVar2))) {
    do {
      Color__Color((Color *)auStack_24);
      *puVar4 = 0;
      puVar4[1] = 0;
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)((int)puVar4 + 0x14),(Str_L_char_G_ *)(auStack_24 + 4));
      (*(uint32_t*)&(auStack_24)) = (uint32_t)(uintptr_t)(&vftable_5);
      *(float *)(puVar4 + 4) = fStack_14;
      *(float *)((int)puVar4 + 0x24) = fStack_10;
      *(float *)(puVar4 + 5) = fStack_c;
      *(float *)((int)puVar4 + 0x2c) = fStack_8;
      if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
        port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
      }
      puVar4 = puVar4 + 6;
    } while (puVar4 != (undefined8 *)(*(int *)(this + 8) * 0x30 + *(int *)(this + 4)));
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 005cb4e0 MethodCallerConst___thunk_____thiscall_Module__vcall_228__flat_____0__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_classModule_Cclass_util__Str_L_char_G__G___MethodCallerConst_L___thunk____thiscallModule____PUNK_P_vcall_228_C_flat_______C0__G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_Module_class_util__Str_char_____MethodCallerConst___thunk_____thiscall_Module___vcall__228__flat_______0
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  undefined4 uStack_10;
  
  pSVar1 = (Str_L_char_G_ *)Module___vcall__228__flat((Module *)param_1);
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (uStack_10 != (void *)0x0) {
    port_op_delete(uStack_10);
  }
  return __return_storage_ptr__;
}





//==== 005cb520 MethodCallerConst__public__bool___thiscall_Module__EmitsRadiation_void_const__0__ ====


/* public: static bool __cdecl util__DelegateFactory_L_classModule_Cbool_G___MethodCallerConst_L__public__bool__thiscallModule__EmitsRadiation_void_const_C0__G_(void const * const) */

bool __cdecl
util__DelegateFactory_class_Module_bool___MethodCallerConst__public__bool___thiscall_Module__EmitsRadiation_void_const__0(void *param_1)

{
  undefined8 stack0xfffffffc;
  undefined1 uVar1;
  double dStack_20;
  double dStack_18;
  double dStack_10;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
                    /* WARNING: Load optimize_e__size is inaccurate */
  (**(code **)(uintptr_t)(*(int *)param_1 + 0xcc))(&dStack_20);
  uVar1 = 0.0 < dStack_18 + dStack_20 + dStack_10;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar1;
}





//==== 005cb530 MethodCallerConst__public__class_util__Str_char____thiscall_Module__GetCrewInfo_void_const__0__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_classModule_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G___thiscall_Module__GetCrewInfo_void_const_C0__G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_Module_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_Module__GetCrewInfo_void_const__0
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = Module__GetCrewInfo((Module *)param_1,&SStack_10);
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 005cb570 MethodCallerConst__public__class_util__Str_char____thiscall_Module__GetHeatTransferInfo_void_const__0__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_classModule_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G___thiscall_Module__GetHeatTransferInfo_void_const_C0__G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_Module_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_Module__GetHeatTransferInfo_void_const__0
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = Module__GetHeatTransferInfo((Module *)param_1,&SStack_10);
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 005cb5b0 MethodCallerConst__public__class_util__Str_char____thiscall_Module__GetMassInfo_void_const__0__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_classModule_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G___thiscall_Module__GetMassInfo_void_const_C0__G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_Module_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_Module__GetMassInfo_void_const__0
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(Module__GetMassInfo((Module *)param_1,&SStack_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 005cb5f0 MethodCallerConst__public__class_util__Str_char____thiscall_Module__GetPowerUseInfo_void_const__0__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_classModule_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G___thiscall_Module__GetPowerUseInfo_void_const_C0__G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_Module_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_Module__GetPowerUseInfo_void_const__0
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(Module__GetPowerUseInfo((Module *)param_1,&SStack_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 005cb630 MethodCallerConst__public__class_util__Str_char____thiscall_Module__GetRadiationInfo_void_const__0__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_classModule_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G___thiscall_Module__GetRadiationInfo_void_const_C0__G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_Module_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_Module__GetRadiationInfo_void_const__0
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = Module__GetRadiationInfo((Module *)param_1,&SStack_10);
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 005cb670 MethodCallerConst__public__bool___thiscall_Module__RequiresCooling_void_const__0__ ====


/* public: static bool __cdecl util__DelegateFactory_L_classModule_Cbool_G___MethodCallerConst_L__public__bool__thiscallModule__RequiresCooling_void_const_C0__G_(void const * const) */

bool __cdecl
util__DelegateFactory_class_Module_bool___MethodCallerConst__public__bool___thiscall_Module__RequiresCooling_void_const__0(void *param_1)

{
  int iVar1;
  undefined1 auStack_34 [48];
  
                    /* WARNING: Load optimize_e__size is inaccurate */
  iVar1 = (**(code **)(uintptr_t)(*(int *)param_1 + 200))(auStack_34);
  return (bool)*(undefined1 *)(iVar1 + 0x28);
}





//==== 005cb680 MethodCallerConst__public__bool___thiscall_Module__RequiresCrew_void_const__0__ ====


/* public: static bool __cdecl util__DelegateFactory_L_classModule_Cbool_G___MethodCallerConst_L__public__bool__thiscallModule__RequiresCrew_void_const_C0__G_(void const * const) */

bool __cdecl
util__DelegateFactory_class_Module_bool___MethodCallerConst__public__bool___thiscall_Module__RequiresCrew_void_const__0(void *param_1)

{
  double dVar1;
  
  dVar1 = Module__GetCrewCountRequired((Module *)param_1);
  return 0.0 < dVar1;
}





//==== 005cb690 MethodCallerConst__public__bool___thiscall_Module__RequiresPower_void_const__0__ ====


/* public: static bool __cdecl util__DelegateFactory_L_classModule_Cbool_G___MethodCallerConst_L__public__bool__thiscallModule__RequiresPower_void_const_C0__G_(void const * const) */

bool __cdecl
util__DelegateFactory_class_Module_bool___MethodCallerConst__public__bool___thiscall_Module__RequiresPower_void_const__0(void *param_1)

{
  float10 fVar1;
  
                    /* WARNING: Load optimize_e__size is inaccurate */
  fVar1 = (float10)(**(code **)(uintptr_t)(*(int *)param_1 + 0x9c))();
  return 0.0 < (double)fVar1;
}





//==== 005cb6a0 Darray_InfoBox__005cb6a0 ====


/* public:  util__Darray_L_structInfoBox_G___Darray_L_structInfoBox_G_(class util__Darray_L_struct_InfoBox_G_ const &) */

Darray_L_struct_InfoBox_G_ * 
util__Darray_struct_InfoBox___Darray_struct_InfoBox
          (Darray_L_struct_InfoBox_G_ *this,Darray_L_struct_InfoBox_G_ *param_1)

{
  Str_L_char_G_ *pSVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  int *piVar7;
  Str_L_char_G_ *pSVar8;
  uint uVar9;
  Str_L_char_G_ *pSVar10;
  Str_L_char_G_ SStack_24;
  Str_L_char_G_ SStack_18;
  uint *puStack_c;
  Darray_L_struct_InfoBox_G_ *pDStack_8;
  
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &vftable_127;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  pDStack_8 = this;
  puStack_c = (uint *)(**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,(int *)&puStack_c);
  uVar9 = *(uint *)(this + 0xc);
  uVar4 = -(uint)((int)((ulonglong)uVar9 * 0x38 >> 0x20) != 0) | (uint)((ulonglong)uVar9 * 0x38);
  puVar3 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
  if (puVar3 == (uint *)0x0) {
    puVar5 = (uint *)0x0;
  }
  else {
    *puVar3 = uVar9;
    puVar6 = puVar3 + 1;
    puVar5 = puVar6;
    puStack_c = puVar6;
    if (uVar9 != 0) {
      SStack_18.Data = (char *)0x0;
      pSVar8 = (Str_L_char_G_ *)(puVar3 + 4);
      SStack_18.Capacity = 0;
      SStack_18.Length = 0;
      SStack_24.Data = (char *)0x0;
      SStack_24.Capacity = 0;
      SStack_24.Length = 0;
      do {
        *puVar6 = 0;
        pSVar8[-1].Capacity = 0;
        pSVar8[-1].Length = 0;
        util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(pSVar8,&SStack_18);
        pSVar8[1].Data = (char *)0x0;
        pSVar8[1].Capacity = 0;
        util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const((Str_L_char_G_ *)&pSVar8[1].Length,&SStack_24);
        pSVar8[2].Length = 0;
        puVar6 = puVar6 + 0xe;
        pSVar8[3].Data = (char *)0x0;
        *(undefined1 *)&pSVar8[3].Capacity = 0;
        pSVar8 = (Str_L_char_G_ *)&pSVar8[4].Length;
        uVar9 = uVar9 - 1;
        puVar5 = puStack_c;
        this = pDStack_8;
      } while (uVar9 != 0);
    }
  }
  *(uint **)(this + 4) = puVar5;
  piVar7 = *(int **)(param_1 + 4);
  if (piVar7 == piVar7 + *(int *)(param_1 + 8) * 0xe) {
    return this;
  }
  pSVar8 = (Str_L_char_G_ *)(puVar5 + 8);
  pSVar10 = (Str_L_char_G_ *)(piVar7 + 8);
  do {
    pSVar8[-3].Capacity = *piVar7;
    pSVar8[-3].Length = pSVar10[-3].Length;
    pSVar8[-2].Data = pSVar10[-2].Data;
    util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)&pSVar8[-2].Capacity,(Str_L_char_G_ *)&pSVar10[-2].Capacity);
    pSVar8[-1].Capacity = pSVar10[-1].Capacity;
    pSVar8[-1].Length = pSVar10[-1].Length;
    util__Maybe_struct_util__ClassMember___operator(pSVar8,pSVar10);
    iVar2 = pSVar10[1].Capacity;
    piVar7 = piVar7 + 0xe;
    pSVar8[1].Data = pSVar10[1].Data;
    pSVar8[1].Capacity = iVar2;
    pSVar1 = pSVar10 + 1;
    pSVar10 = (Str_L_char_G_ *)&pSVar10[4].Length;
    pSVar8[1].Length = pSVar1->Length;
    pSVar8 = (Str_L_char_G_ *)&pSVar8[4].Length;
  } while (piVar7 != (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 0x38));
  return pDStack_8;
}





//==== 005cb860 Module_005cb860 ====

/* public: __thiscall Module__Module(void) */

Module * __thiscall Module__Module(Module *this)

{
  int iVar1;
  ReferenceController *this_00;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ReferenceControllerRegistry *this_01;
  int iVar5;
  GameModel *this_02;
  
  EditorReflectable__EditorReflectable((EditorReflectable *)this);
  *(undefined4 *)&(this->GetTotalPowerUsage_W_MemoizedValue).field_0xc = (undefined4)(uintptr_t)vftable_87;
  this->_pad_0x0_0 = (int)(uintptr_t) (undefined **)((int)&vftable_for_EditorReflectable__3);
  *(undefined4 *)&(this->GetTotalPowerUsage_W_MemoizedValue).field_0xc = (undefined4)(uintptr_t)vftable_for_util__RTTIBaseClass__3;
  (this->Models)._pad_0x0_0 = 0;
  (this->Models).Data = (undefined **)((SharedPtr_L_GameModel_G_ *)0x0);
  (this->Models).Size = 0;
  (this->Models).Capacity = 0;
  (this->Models)._pad_0x0_0 =
       (int)&vftable_166;
  (this->Models).Data = (SharedPtr_L_GameModel_G_ *)0x0;
  (this->Models).Size = 0;
  (this->Models).Capacity = 0;
  this->UsesCustomName = false;
  this->IsUserCreated = false;
  *(undefined6 *)&(*(undefined6 *)(void *)((char *)(uintptr_t)(this) + 0x4a)) = 0;
  *(undefined1 *)&this[1]._pad_0x0_0 = 0;
  this[1]._pad_0x8_2 = (int)&vftable_167;
  this[1]._pad_0xc_3 = 0;
  this[1]._pad_0x10_4 = 0;
  this[1].ModuleMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 1;
  puVar3 = (undefined4 *)(uintptr_t)(port_op_new(0xc));
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 1;
    puVar4 = puVar3 + 1;
    *puVar4 = 0;
    puVar3[2] = 0;
  }
  iVar5 = 0;
  this[1]._pad_0xc_3 = (int)puVar4;
  if (0 < this[1].ModuleMemoizationHandlerInstance.ResetFunctions._pad_0x0_0) {
    do {
      iVar1 = this[1]._pad_0xc_3;
      this_00 = *(ReferenceController **)(iVar1 + 4 + iVar5 * 8);
      this_02 = *(GameModel **)(iVar1 + iVar5 * 8);
      *(undefined4 *)(iVar1 + iVar5 * 8) = 0;
      *(undefined4 *)(iVar1 + 4 + iVar5 * 8) = 0;
      if ((this_00 != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__ReleaseStrongReference(this_00), bVar2)) {
        if (this_02 != (GameModel *)0x0) {
          GameModel___scalar_deleting_destructor(this_02,1);
        }
        this_01 = util__ReferenceControllerRegistry__Get();
        util__ReferenceControllerRegistry__PointerWasDestroyed(this_01,this_02);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < this[1].ModuleMemoizationHandlerInstance.ResetFunctions._pad_0x0_0);
  }
  *(undefined1 *)&this[1].ModuleMemoizationHandlerInstance.ResetFunctions.Data = 0;
  return this;
}

//==== 005cba11 vcall_156__flat____ ====

/* [thunk]: __thiscall Module:: 0 vcall{156,{flat}}' }' */

void __thiscall Module___vcall__156__flat(Module *this)

{
                    /* WARNING: Could not recover jumptable at 0x005cba13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_pad_0x0_0 + 0x9c))();
  return;
}

//==== 005cba19 vcall_228__flat____ ====

/* [thunk]: __thiscall Module:: 0 vcall{228,{flat}}' }' */

void * __thiscall Module___vcall__228__flat(Module *this)

{
                    /* WARNING: Could not recover jumptable at 0x005cba1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (void *)(uintptr_t)(**(code **)(this->_pad_0x0_0 + 0xe4))();
}

//==== 005cba30 AreCompartmentsOverheating ====


/* public: bool  Module__AreCompartmentsOverheating(class util__Darray_L_class_util__WeakPtr_L_structModuleCompartment_G__G_ const &)const  */

bool 
Module__AreCompartmentsOverheating
          (Module *this,Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *param_1)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iStack_c = 0;
  iVar4 = (**(code **)(*(int *)param_1 + 0xc))();
  if (iStack_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(*(code *)**(undefined4 **)param_1)(&iStack_c);
      if ((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) {
        bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]);
        if (!bVar1) {
          *puVar5 = 0;
        }
      }
      cVar2 = (**(code **)(*(int *)*puVar5 + 0x74))();
      if (cVar2 != '\0') {
        uVar3 = 1;
        __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
        return (bool)uVar3;
      }
      iStack_c = iStack_c + 1;
      iVar4 = (**(code **)(*(int *)param_1 + 0xc))();
    } while (iStack_c < iVar4);
  }
  uVar3 = 0;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar3;
}





//==== 005cbac0 BuildModels_005cbac0 ====


/* public: virtual void __thiscall Module__BuildModels(void) */

void __thiscall Module__BuildModels(Module *this)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  double dVar2;
  Quaternion_L_double_G_ QVar3;
  Maybe_L_int_G_ MVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  GameModel *pGVar8;
  Material *pMVar9;
  ReferenceControllerRegistry *pRVar10;
  ReferenceController *pRVar11;
  undefined4 *puVar12;
  VertexBufferObject *pVVar13;
  CustomTexture *this_00;
  int *piVar14;
  ReferenceController *this_01;
  float10 fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 *puVar19;
  Material *pMVar20;
  int iVar21;
  code *pcVar22;
  undefined4 uVar23;
  GameModel *pGVar24;
  int *piVar25;
  undefined4 uVar26;
  int *piVar27;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_5c [4];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 uStack_40;
  undefined1 uStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  GameModel *pGStack_14;
  undefined8 uStack_10;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  uStack_2c = (double)CONCAT44(this,(undefined4)uStack_2c);
  pGVar8 = (GameModel *)port_op_new(0xb8);
  if (pGVar8 == (GameModel *)0x0) {
    pGVar8 = (GameModel *)0x0;
LAB_005cbb28:
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0xd4,"NewPointer",(char *)0x0);
    DebugBreak();
  }
  else {
    uVar23 = 0x5cbaf7;
    cVar6 = (**(code **)(this->_pad_0x0_0 + 0x108))();
    pMVar20 = (Material *)0x0;
    uVar23 = CONCAT31((int3)((uint)uVar23 >> 8),cVar6 != '\0');
    iVar21 = 0;
    pMVar9 = (Material *)(**(code **)(this->_pad_0x0_0 + 0xb0))();
    (*(uint32_t*)((char*)&(MVar4)+4)) = uVar23;
    MVar4.Data = iVar21;
    pGVar8 = (GameModel *)GameModel__GameModel(pGVar8,pMVar9,pMVar20,MVar4);
    if (pGVar8 == (GameModel *)0x0) goto LAB_005cbb28;
  }
  pGVar24 = pGVar8;
  pRVar10 = util__ReferenceControllerRegistry__Get();
  pRVar11 = util__ReferenceControllerRegistry__Register(pRVar10,pGVar24);
  if (pRVar11 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(pRVar11);
  }
  iVar21 = this[1]._pad_0x10_4;
  pGStack_14 = (GameModel *)(iVar21 + 1);
  util__Darray_class_util__SharedPtr_struct_GameModel_____SetSize
            ((Darray_L_class_util__SharedPtr_L_struct_GameModel_G___G_ *)&this[1]._pad_0x8_2,
             (int *)&pGStack_14);
  iVar5 = (int)(*(uint32_t*)((char*)&(uStack_2c)+4));
  bVar7 = util__Darray_class_util__SharedPtr_struct_GameModel_____CheckSize
                    ((Darray_L_class_util__SharedPtr_L_struct_GameModel_G___G_ *)
                     ((int)(*(uint32_t*)((char*)&(uStack_2c)+4)) + 0x58),iVar21);
  if (bVar7) {
    iVar21 = *(int *)(iVar5 + 0x60);
    iVar1 = *(int *)(iVar5 + 0x5c);
    pGStack_14 = *(GameModel **)(iVar1 + -8 + iVar21 * 8);
    this_01 = *(ReferenceController **)(iVar1 + -4 + iVar21 * 8);
    uStack_1c = (double)CONCAT44(this_01,(undefined4)uStack_1c);
    *(GameModel **)(iVar1 + -8 + iVar21 * 8) = pGVar8;
    *(ReferenceController **)(iVar1 + -4 + iVar21 * 8) = pRVar11;
    if (pRVar11 != (ReferenceController *)0x0) {
      util__ReferenceController__AddStrongReference(pRVar11);
      this_01 = (ReferenceController *)(uintptr_t)((*(uint32_t*)((char*)&(uStack_1c)+4)));
    }
    if ((this_01 != (ReferenceController *)0x0) &&
       (bVar7 = util__ReferenceController__ReleaseStrongReference(this_01), bVar7)) {
      if (pGStack_14 != (GameModel *)0x0) {
        GameModel___scalar_deleting_destructor(pGStack_14,1);
      }
      pGVar24 = pGStack_14;
      pRVar10 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar10,pGVar24);
    }
  }
  if ((pRVar11 != (ReferenceController *)0x0) &&
     (bVar7 = util__ReferenceController__ReleaseStrongReference(pRVar11), bVar7)) {
    if (pGVar8 != (GameModel *)0x0) {
      GameModel___scalar_deleting_destructor(pGVar8,1);
    }
    pRVar10 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar10,pGVar8);
  }
  uVar23 = 0x54442d18;
  uVar17 = 0x3fe921fb;
  uVar16 = 0;
  uVar18 = 0;
  libm_sse2_sin_precise(0.0);
  uStack_1c = (double)CONCAT44(uVar18,uVar16);
  dVar2 = (double)CONCAT44(uVar17,uVar23) * 0.0;
  uVar16 = 0x54442d18;
  uVar18 = 0x3fe921fb;
  uStack_24 = uVar23;
  uStack_20 = uVar17;
  libm_sse2_cos_precise(0.0);
  uStack_6c = SUB84(dVar2,0);
  uStack_68 = (undefined4)((ulonglong)dVar2 >> 0x20);
  QVar3.Y = uStack_20;
  QVar3.X = uStack_24;
  QVar3.Y = uStack_6c;
  QVar3.Z = uStack_68;
  QVar3.Z = uStack_6c;
  QVar3.W = uStack_68;
  QVar3.W = uVar16;
  (*(uint32_t *)((char *)&(QVar3.W) + 4)) = uVar18;
  Graphics__Rotate(QVar3);
  puVar12 = (undefined4 *)(**(code **)(*(int *)(iVar5 + 0x58) + 8))();
  piVar27 = (int *)(uintptr_t)((*(uint32_t*)((char*)&(uStack_2c)+4)));
  pGVar8 = (GameModel *)*puVar12;
  fVar15 = (float10)(**(code **)(*(uint32_t *)(uintptr_t)*(uint32_t *)((char *)&(uStack_2c)+4) + 0xa8))();
  uStack_1c = (double)fVar15;
  fVar15 = (float10)(**(code **)(uintptr_t)(*piVar27 + 0xa4))();
  uStack_2c = (double)fVar15;
  pVVar13 = GameModel__GetVertexObject(pGVar8);
  fVar15 = (float10)(**(code **)(uintptr_t)(*piVar27 + 0xa4))();
  iVar21 = GetUniversalRadialSegmentation((double)fVar15);
  FillChamferedCylinder(uStack_2c / 1000.0,uStack_1c / 1000.0,0.1,iVar21,pVVar13);
  fVar15 = (float10)(**(code **)(uintptr_t)(*piVar27 + 0xa4))();
  uStack_1c = (double)(fVar15 + fVar15);
  fVar15 = (float10)(**(code **)(uintptr_t)(*piVar27 + 0xa8))();
  uStack_1c = (double)(fVar15 + (float10)uStack_1c);
  fVar15 = (float10)(**(code **)(uintptr_t)(*piVar27 + 0xa4))();
  uStack_34 = (double)fVar15 * 6.283185307179586;
  uStack_2c = uStack_1c;
  uStack_10 = 0;
  this_00 = (CustomTexture *)port_op_new(0x3c);
  if (this_00 == (CustomTexture *)0x0) {
    piVar14 = (int *)0x0;
  }
  else {
    piVar14 = (int *)CustomTexture__CustomTexture(this_00);
    if (piVar14 != (int *)0x0) goto LAB_005cbd77;
  }
  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl",
                  0xd4,"NewPointer",(char *)0x0);
  DebugBreak();
LAB_005cbd77:
  piVar25 = piVar14;
  pRVar10 = util__ReferenceControllerRegistry__Get();
  (*(uint32_t*)((char*)&(uStack_10)+4)) = (uint32_t)(uintptr_t)(util__ReferenceControllerRegistry__Register(pRVar10,piVar25));
  (*(uint32_t*)&(uStack_10)) = (uint32_t)(uintptr_t)(piVar14);
  if ((*(uint32_t*)((char*)&(uStack_10)+4)) != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference((ReferenceController*)((ReferenceController*)((*(uint32_t*)((char*)&(uStack_10)+4)))));
  }
  uVar26 = 0;
  pcVar22 = (long long int (*)())(GetGeneralModuleShader);
  auStack_5c[0] = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  puVar19 = auStack_5c;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_58 = 0;
  uStack_54 = 1;
  uStack_4c = 2;
  piVar14 = (int *)uStack_10;
  pRVar11 = (ReferenceController *)(uintptr_t)((*(uint32_t*)((char*)&(uStack_10)+4)));
  uVar23 = (undefined4)uStack_34;
  uVar16 = (*(uint32_t*)((char*)&(uStack_34)+4));
  uVar17 = (undefined4)uStack_2c;
  uVar18 = (*(uint32_t*)((char*)&(uStack_2c)+4));
  if ((*(uint32_t*)((char*)&(uStack_10)+4)) != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference((ReferenceController*)((ReferenceController*)((*(uint32_t*)((char*)&(uStack_10)+4)))));
  }
  ArmorTextureHandler__BuildNormalsTexture_L_class_GeneralModuleShader_P____cdecl_P__void__G_
            (piVar14,pRVar11,puVar19,uVar23,uVar16,uVar17,uVar18,pcVar22,uVar26);
  puVar12 = (undefined4 *)(**(code **)(uintptr_t)(piVar27[0x16] + 8))();
  GameModel__SetTexture((GameModel *)*puVar12,(SharedPtr_L_struct_CustomTexture_G_ *)&uStack_10);
  if (((*(uint32_t*)((char*)&(uStack_10)+4)) != (ReferenceController *)0x0) &&
     (bVar7 = util__ReferenceController__ReleaseStrongReference((ReferenceController*)((ReferenceController*)((*(uint32_t*)((char*)&(uStack_10)+4))))), bVar7)) {
    if ((int *)uStack_10 != (int *)0x0) {
      (**(code **)(*(int *)uStack_10 + 0x10))(1);
    }
    piVar27 = (int *)uStack_10;
    pRVar10 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar10,piVar27);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 005cbe60 DestroyModels_005cbe60 ====

/* public: virtual void __thiscall Module__DestroyModels(void) */

void __thiscall Module__DestroyModels(Module *this)

{
                    /* WARNING: Could not recover jumptable at 0x005cbe66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(uintptr_t)(this[1]._pad_0x8_2 + 0x10))();
  return;
}

//==== 005cbe70 EmitsRadiation ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: bool __thiscall Module__EmitsRadiation(void)const  */

bool __thiscall Module__EmitsRadiation(Module *this)

{
  undefined8 stack0xfffffffc;
  double local_20;
  double local_18;
  double local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  (**(code **)(this->_pad_0x0_0 + 0xcc))(&local_20);
  return 0.0 < local_18 + local_20 + local_10;
}

//==== 005cbec0 FullDememoize ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall Module__FullDememoize(void) */

void __thiscall Module__FullDememoize(Module *this)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  undefined4 *puVar2;
  Reflectable local_1c;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  (**(code **)(this->_pad_0x0_0 + 0x70))();
  GetSubModulesOfDatum(&local_1c);
  *(uint32_t *)&local_c = 0;
  iVar1 = (**(code **)(uintptr_t)(local_1c._pad_0x0_0 + 0xc))();
  if (local_c < iVar1) {
    do {
      puVar2 = (undefined4 *)(**(code **)local_1c._pad_0x0_0)(&local_c);
      (**(code **)(*(int *)*puVar2 + 0x74))();
      *(uint32_t *)&local_c = local_c + 1;
      iVar1 = (**(code **)(uintptr_t)(local_1c._pad_0x0_0 + 0xc))();
    } while (local_c < iVar1);
  }
  local_1c._pad_0x0_0 = (int)&vftable_2;
  if (local_1c.Name.Data != (char *)0x0) {
    port_op_delete(local_1c.Name.Data);
  }
  return;
}

//==== 005cbf50 FullGenerate ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall Module__FullGenerate(class DataParser *) */

void __thiscall Module__FullGenerate(Module *this,DataParser *param_1)

{
  undefined8 stack0xfffffffc;
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  Str_L_char_G_ *pSVar6;
  Reflectable local_34;
  Str_L_char_G_ local_24;
  Str_L_char_G_ local_18;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  (**(code **)(this->_pad_0x0_0 + 0x70))();
  GetSubModulesOfDatum(&local_34);
  *(uint32_t *)&local_c = 0;
  iVar3 = (**(code **)(uintptr_t)(local_34._pad_0x0_0 + 0xc))();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)local_34._pad_0x0_0)(&local_c);
      (**(code **)(*(int *)*puVar4 + 0x74))();
      *(uint32_t *)&local_c = local_c + 1;
      iVar3 = (**(code **)(uintptr_t)(local_34._pad_0x0_0 + 0xc))();
    } while (local_c < iVar3);
  }
  local_34._pad_0x0_0 = (int)&vftable_2;
  if (local_34.Name.Data != (char *)0x0) {
    port_op_delete(local_34.Name.Data);
  }
  util__SimpleSerializationManager__CorrectImport
            ((SimpleSerializationManager *)param_1,(Reflectable *)this);
  (**(code **)(this->_pad_0x0_0 + 0x144))(param_1);
  cVar1 = (**(code **)(this->_pad_0x0_0 + 0x34))();
  if ((*(char *)&this[1].ModuleMemoizationHandlerInstance.ResetFunctions.Data == '\0') &&
     (cVar1 != '\0')) {
    local_24.Length = 0;
    local_24.Data = (char *)0x0;
    local_24.Capacity = 0;
    (**(code **)(this->_pad_0x0_0 + 0x124))(&local_24);
    local_18.Length = 0;
    local_18.Data = (char *)0x0;
    local_18.Capacity = 0;
    util__Str_char___Str_char(&local_18,&local_24);
    iVar3 = 1;
    do {
      bVar2 = util__SimpleSerializationManager__IsDatumNameUnique
                        ((SimpleSerializationManager *)param_1,(Reflectable *)this,&local_18);
      if (bVar2) goto LAB_005cc0af;
      iVar3 = iVar3 + 1;
      pcVar5 = "";
      if (0 < local_24.Capacity) {
        pcVar5 = local_24.Data;
      }
      pSVar6 = util__Printf(&local_34.Name,(wchar_t*)("%s %i"),pcVar5,iVar3);
      util__Str_char___operator__o8(&local_18,pSVar6);
      if (local_34.Name.Data != (char *)0x0) {
        port_op_delete(local_34.Name.Data);
        local_34.Name.Data = (char *)0x0;
      }
    } while (iVar3 < 0x7fffffff);
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\modules\\modules.cpp",0x1ca,
                    "Unique",(char *)0x0);
    DebugBreak();
LAB_005cc0af:
    util__SimpleSerializationManager__RenameDatum
              ((SimpleSerializationManager *)param_1,(Reflectable *)this,&local_18);
    if (local_18.Data != (char *)0x0) {
      port_op_delete(local_18.Data);
      (*(uint64_t*)&(local_18)) = (*(uint64_t*)&(local_18)) & 0xffffffff00000000;
    }
    if (local_24.Data != (char *)0x0) {
      port_op_delete(local_24.Data);
    }
  }
  (**(code **)(this->_pad_0x0_0 + 0x14c))();
  (**(code **)(this->_pad_0x0_0 + 0x150))();
  return;
}

//==== 005cc110 GenerateDesignUI_005cc110 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual struct UIWidget * __thiscall Module__GenerateDesignUI(class Manager *)const  */

UIWidget * __thiscall Module__GenerateDesignUI(Module *this,Manager *param_1)

{
  return (UIWidget *)0x0;
}





//==== 005cc120 GenerateModels_005cc120 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall Module__GenerateModels(void) */

void __thiscall Module__GenerateModels(Module *this)

{
  undefined8 stack0xfffffffc;
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  VertexBufferObject *pVVar5;
  int local_10;
  TransformStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar1 = &this[1]._pad_0x8_2;
  iVar3 = (**(code **)(uintptr_t)(this[1]._pad_0x8_2 + 0xc))();
  if (iVar3 == 0) {
    Graphics__TransformStack__TransformStack(&local_9,GraphicsTransformFlag__ClearToIdentity);
    (**(code **)(this->_pad_0x0_0 + 0xf8))();
    *(uint32_t *)&local_10 = 0;
    iVar3 = (**(code **)(uintptr_t)(*piVar1 + 0xc))();
    if (local_10 < iVar3) {
      do {
        puVar4 = (undefined4 *)(**(code **)*piVar1)(&local_10);
        pVVar5 = GameModel__GetVertexObject((GameModel *)*puVar4);
        cVar2 = (**(code **)(pVVar5->_pad_0x0_0 + 0x14))();
        if (cVar2 != '\0') {
          pVVar5 = GameModel__GetVertexObject((GameModel *)*puVar4);
          VertexBufferObjectInterface__Generate((VertexBufferObjectInterface *)pVVar5);
        }
        *(uint32_t *)&local_10 = local_10 + 1;
        iVar3 = (**(code **)(uintptr_t)(*piVar1 + 0xc))();
      } while (local_10 < iVar3);
    }
    Graphics__TransformStack___TransformStack(&local_9);
  }
  return;
}

//==== 005cc1d0 GenerateQuickDiagrams ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual class util__Darray_L_structUIWidget_P_G_ __thiscall
   Module__GenerateQuickDiagrams(class Manager *)const  */

void __thiscall Module__GenerateQuickDiagrams(Module *this,Manager *param_1)

{
  param_1->_pad_0x0_0 = (int)&vftable_2;
  param_1->Parent = (GameManager *)0x0;
  (param_1->ActorStore).Pointer = (ActorHandler *)0x0;
  param_1[1]._pad_0x0_0 = 0;
  return;
}

//==== 005cc200 GetAdditionalCosts_005cc200 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual class util__Darray_L_structStructureCost_G_ __thiscall
   Module__GetAdditionalCosts(void)const  */

Darray_L_StructureCost_G_ * __thiscall
Module__GetAdditionalCosts(Module *this,Darray_L_StructureCost_G_ *__return_storage_ptr__)

{
  undefined8 stack0xfffffffc;
  double *pdVar1;
  int iVar2;
  undefined4 *puVar3;
  StructureCost *this_00;
  tuple2_L_util__Str_L_char_G__Cdouble_G_ *ptVar4;
  Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ local_34;
  int local_24;
  Reflectable local_20;
  int local_10;
  undefined1 local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(uint32_t *)&local_c = 0;
  GetSubModulesOfDatum(&local_20);
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (StructureCost *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  iVar2 = (**(code **)(uintptr_t)(local_20._pad_0x0_0 + 0xc))();
  util__Darray_L_PowerUsage_G___Darray_L_PowerUsage_G_((Darray_L_PowerUsage_G_ *)__return_storage_ptr__,iVar2);
  *(uint32_t *)&local_10 = 0;
  iVar2 = (**(code **)(uintptr_t)(local_20._pad_0x0_0 + 0xc))();
  if (local_10 < iVar2) {
    do {
      puVar3 = (undefined4 *)(**(code **)local_20._pad_0x0_0)(&local_10);
      (**(code **)(*(int *)*puVar3 + 0x6c))(&local_34);
      if (__return_storage_ptr__->Size == 0) {
        util__Darray_L_StructureCost_G___op_assign
                  (__return_storage_ptr__,(Darray_L_struct_StructureCost_G_ *)&local_34);
      }
      else {
        iVar2 = (**(code **)(uintptr_t)(local_34._pad_0x0_0 + 0xc))();
        if (iVar2 != 0) {
          iVar2 = __return_storage_ptr__->Size;
          *(uint32_t *)&local_24 = (**(code **)(uintptr_t)(local_34._pad_0x0_0 + 0xc))();
          *(uint32_t *)&local_24 = local_24 + __return_storage_ptr__->Size;
          util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___SetSize
                    ((Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ *)__return_storage_ptr__,
                     &local_24);
          util__Darray_L_PowerUsage_G___CheckSize((Darray_L_PowerUsage_G_ *)__return_storage_ptr__,iVar2);
          this_00 = __return_storage_ptr__->Data + iVar2;
          ptVar4 = local_34.Data;
          if (this_00 != __return_storage_ptr__->Data + __return_storage_ptr__->Size) {
            do {
              util__Str_char___operator__o8(&this_00->Label,&ptVar4->Value1);
              pdVar1 = &ptVar4->Value2;
              ptVar4 = ptVar4 + 1;
              this_00->Cost_c = *pdVar1;
              this_00 = this_00 + 1;
            } while (this_00 != __return_storage_ptr__->Data + __return_storage_ptr__->Size);
          }
        }
      }
      util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___dtor(&local_34);
      *(uint32_t *)&local_10 = local_10 + 1;
      iVar2 = (**(code **)(uintptr_t)(local_20._pad_0x0_0 + 0xc))();
    } while (local_10 < iVar2);
  }
  local_20._pad_0x0_0 = (int)&vftable_2;
  if (local_20.Name.Data != (char *)0x0) {
    port_op_delete(local_20.Name.Data);
  }
  return __return_storage_ptr__;
}

//==== 005cc350 GetAttenuatedRadiation ====

/* public: struct Radiation  Module__GetAttenuatedRadiation(struct Radiation,bool)const
    */

Radiation * 
Module__GetAttenuatedRadiation
          (Module *this,Radiation *__return_storage_ptr__,Radiation param_1,bool param_2)

{
  Radiation RVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 in_stack_00000008;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  undefined1 local_54 [24];
  undefined1 local_3c [24];
  undefined1 local_24 [24];
  double local_c;
  
  piVar2 = (int *)(**(code **)(this->_pad_0x0_0 + 0xd0))(local_54);
  if (*piVar2 != 0) {
    iVar3 = (**(code **)(this->_pad_0x0_0 + 0xd0))(local_24);
    if (0.0 < *(double *)(iVar3 + 0x10)) {
      iVar3 = (**(code **)(this->_pad_0x0_0 + 0xd0))(local_3c);
      if (0.0 < *(double *)(iVar3 + 8)) {
        if ((*(uint8_t *)((char *)&(param_1.GammaRays_W) + 4)) == '\0') {
          uVar5 = 0x3ff00000;
        }
        else {
          uVar5 = 0x3fe00000;
        }
        *(uint64_t *)&local_c = (double)((ulonglong)uVar5 << 0x20);
        iVar3 = (**(code **)(this->_pad_0x0_0 + 0xd0))(local_3c);
        dVar8 = *(double *)(iVar3 + 0x10) * local_c;
        uVar6 = CONCAT44(param_1.ThermalNeutrons_W,in_stack_00000008);
        uVar7 = (*(uint64_t*)((char*)&(param_1)+4));
        puVar4 = (undefined4 *)(**(code **)(this->_pad_0x0_0 + 0xd0))(local_24);
        RVar1.FastNeutrons_W = (double)uVar7;
        RVar1.ThermalNeutrons_W = (double)uVar6;
        RVar1.GammaRays_W = (double)(*(uint64_t *)((char *)&(param_1) + 12));
        Material__GetAttenuatedRadiation((Material *)*puVar4,__return_storage_ptr__,RVar1,dVar8);
        return __return_storage_ptr__;
      }
    }
  }
  *(undefined4 *)&__return_storage_ptr__->ThermalNeutrons_W = in_stack_00000008;
  *(undefined4 *)((int)&__return_storage_ptr__->ThermalNeutrons_W + 4) =
       param_1.ThermalNeutrons_W;
  *(undefined4 *)&(__return_storage_ptr__->FastNeutrons_W) = (*(uint32_t *)((char *)&(param_1.ThermalNeutrons_W) + 4));
  *(undefined4 *)((int)&__return_storage_ptr__->FastNeutrons_W + 4) = param_1.FastNeutrons_W;
  __return_storage_ptr__->GammaRays_W = (double)(*(uint64_t *)((char *)&(param_1) + 12));
  return __return_storage_ptr__;
}

//==== 005cc550 GetCombinedComposition ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: class util__Darray_L_structMaterialComposition_G_ __thiscall
   Module__GetCombinedComposition(void)const  */

Darray_L_MaterialComposition_G_ * __thiscall
Module__GetCombinedComposition(Module *this,Darray_L_MaterialComposition_G_ *__return_storage_ptr__)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  MaterialComposition *pMVar6;
  MaterialComposition *pMVar7;
  undefined **local_2c;
  void *local_28;
  int *local_1c;
  int local_18;
  int local_14;
  undefined1 local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (MaterialComposition *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_75;
  __return_storage_ptr__->Data = (MaterialComposition *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  piVar4 = (int *)(**(code **)(this->_pad_0x0_0 + 0x84))(&local_2c);
  *(uint32_t *)&local_c = 0;
  iVar5 = (**(code **)(uintptr_t)(*piVar4 + 0xc))();
  if (local_c < iVar5) {
    do {
      *(uint32_t *)&local_1c = (uint32_t)(uintptr_t)((int *)(**(code **)*piVar4)(&local_c));
      if ((Material *)*local_1c != (Material *)0x0) {
        *(uint32_t *)&local_14 = 0;
        pMVar6 = __return_storage_ptr__->Data;
        pMVar7 = pMVar6 + __return_storage_ptr__->Size;
        for (; pMVar6 != pMVar7; pMVar6 = pMVar6 + 1) {
          if (pMVar6->Type == (Material *)*local_1c) {
            *(uint32_t *)&local_10 = 1;
            iVar5 = (**(code **)__return_storage_ptr__->_pad_0x0_0)(&local_14);
            *(double *)(iVar5 + 8) = *(double *)(local_1c + 2) + *(double *)(iVar5 + 8);
            goto LAB_005cc622;
          }
          *(uint32_t *)&local_14 = local_14 + 1;
        }
        iVar5 = __return_storage_ptr__->Size;
        *(uint32_t *)&local_14 = 0;
        *(uint32_t *)&local_10 = 0;
        local_18 = iVar5 + 1;
        util__Darray_L_MaterialConstituent_G___SetSize
                  ((Darray_L_MaterialConstituent_G_ *)__return_storage_ptr__,&local_18);
        bVar3 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                          ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)__return_storage_ptr__,
                           iVar5);
        if (bVar3) {
          iVar5 = local_1c[1];
          iVar1 = local_1c[2];
          iVar2 = local_1c[3];
          pMVar6 = __return_storage_ptr__->Data + __return_storage_ptr__->Size + -1;
          pMVar6->Type = (Material *)*local_1c;
          *(int *)&(*(undefined1 *)(void *)((char *)(uintptr_t)(pMVar6) + 0x4)) = iVar5;
          *(int *)&pMVar6->Mass_kg = iVar1;
          *(int *)((int)&pMVar6->Mass_kg + 4) = iVar2;
        }
      }
LAB_005cc622:
      *(uint32_t *)&local_c = local_c + 1;
      iVar5 = (**(code **)(uintptr_t)(*piVar4 + 0xc))();
    } while (local_c < iVar5);
  }
  local_2c = (undefined **)(&vftable_75);
  if (local_28 != (void *)0x0) {
    port_op_delete(local_28);
  }
  return __return_storage_ptr__;
}

//==== 005cc690 GetCombinedCosts ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: class util__Darray_L_structStructureCost_G_ __thiscall Module__GetCombinedCosts(void)const
    */

Darray_L_StructureCost_G_ * __thiscall
Module__GetCombinedCosts(Module *this,Darray_L_StructureCost_G_ *__return_storage_ptr__)

{
  undefined8 stack0xfffffffc;
  Material *this_00;
  StructureCost *pSVar1;
  PowerUsage *pPVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  MaterialConstituent *pMVar7;
  undefined4 *puVar8;
  int iVar9;
  Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ local_8c;
  Str_L_char_G_ local_7c;
  double local_6c;
  undefined **local_64;
  void *local_60;
  Str_L_char_G_ local_54;
  Darray_L_PowerUsage_G_ local_48;
  Module *local_38;
  Darray_L_MaterialConstituent_G_ local_34;
  Str_L_char_G_ *local_24;
  int local_20;
  undefined1 local_1c;
  int local_18;
  int local_14;
  undefined8 local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_34._pad_0x0_0 = (int)&vftable_75;
  local_34.Data = (MaterialConstituent *)0x0;
  local_34.Size = 0;
  local_34.Capacity = 0;
  *(uint32_t *)&local_38 = (uint32_t)(uintptr_t)(this);
  piVar4 = (int *)(**(code **)(this->_pad_0x0_0 + 0x84))(&local_64);
  *(uint32_t *)&local_14 = 0;
  iVar5 = (**(code **)(uintptr_t)(*piVar4 + 0xc))();
  if (local_14 < iVar5) {
    do {
      piVar6 = (int *)(**(code **)*piVar4)(&local_14);
      iVar5 = local_34.Size;
      *(uint32_t *)&local_10 = (double)CONCAT44(piVar6,(undefined4)local_10);
      if ((Material *)*piVar6 != (Material *)0x0) {
        *(uint32_t *)&local_20 = 0;
        *(uint32_t *)&local_24 = (uint32_t)(uintptr_t)((Str_L_char_G_ *)local_34.Size);
        for (pMVar7 = local_34.Data; pMVar7 != local_34.Data + local_34.Size; pMVar7 = pMVar7 + 1) {
          if (pMVar7->Type == (Material *)*piVar6) {
            *(uint32_t *)&local_1c = 1;
            iVar5 = (**(code **)local_34._pad_0x0_0)(&local_20);
            *(double *)(iVar5 + 8) = *(double *)((int)(*(uint32_t*)((char*)&(local_10)+4)) + 8) + *(double *)(iVar5 + 8);
            goto LAB_005cc770;
          }
          *(uint32_t *)&local_20 = local_20 + 1;
        }
        *(uint32_t *)&local_20 = 0;
        *(uint32_t *)&local_1c = 0;
        *(uint32_t *)&local_24 = (uint32_t)(uintptr_t)((Str_L_char_G_ *)((int)(char **)local_34.Size + 1));
        util__Darray_L_MaterialConstituent_G___SetSize(&local_34,(int *)&local_24);
        bVar3 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                          ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)&local_34,iVar5);
        if (bVar3) {
          *(uint32_t *)&local_34.Data[(int)((int)&((Str_L_char_G_ *)(local_34.Size + -0xc))->Length + 3)] =
               *(uint32_t *)(uintptr_t)*(uint32_t *)((char *)&(local_10)+4);
        }
      }
LAB_005cc770:
      *(uint32_t *)&local_14 = local_14 + 1;
      iVar5 = (**(code **)(uintptr_t)(*piVar4 + 0xc))();
    } while (local_14 < iVar5);
  }
  *(uint32_t *)&local_64 = (uint32_t)(uintptr_t)(&vftable_75);
  if (local_60 != (void *)0x0) {
    port_op_delete(local_60);
  }
  local_60 = (void *)0x0;
  *(uint32_t *)&local_64 = (uint32_t)(uintptr_t)(&vftable);
  local_48._pad_0x0_0 = 0;
  local_48.Data = (PowerUsage *)0x0;
  local_48.Size = 0;
  local_48.Capacity = 0;
  iVar5 = (**(code **)(uintptr_t)(local_34._pad_0x0_0 + 0xc))();
  util__Darray_L_PowerUsage_G___Darray_L_PowerUsage_G_(&local_48,iVar5);
  local_18 = 0;
  iVar5 = (**(code **)(uintptr_t)(local_34._pad_0x0_0 + 0xc))();
  if (local_18 < iVar5) {
    do {
      puVar8 = (undefined4 *)(**(code **)local_34._pad_0x0_0)(&local_18);
      this_00 = (Material *)*puVar8;
      Material__GetCost_c__kg_Memoize(this_00);
      if ((char)this_00[1].Elements._pad_0x0_0 == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      (**(code **)(*(int *)*puVar8 + 0x48))(&local_54);
      *(uint32_t *)&local_10 = *(double *)(puVar8 + 2) * *(double *)&this_00[1]._pad_0x8_2;
      util__Str_char___Str_char(&local_7c,&local_54);
      local_6c = local_10;
      if (local_54.Data != (char *)0x0) {
        port_op_delete(local_54.Data);
        local_54.Data = (char *)0x0;
      }
      iVar5 = local_48.Size;
      *(uint32_t *)&local_24 = (uint32_t)(uintptr_t)((Str_L_char_G_ *)(local_48.Size + 1));
      util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___SetSize
                ((Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ *)&local_48,(int *)&local_24);
      bVar3 = util__Darray_L_PowerUsage_G___CheckSize(&local_48,iVar5);
      iVar5 = local_48.Size;
      pPVar2 = local_48.Data;
      if (bVar3) {
        util__Str_char___operator__o8(&local_48.Data[local_48.Size + -1].Label,&local_7c);
        pPVar2[iVar5 + -1].PowerUsed_W = local_10;
      }
      if (local_7c.Data != (char *)0x0) {
        port_op_delete(local_7c.Data);
      }
      local_18 = local_18 + 1;
      iVar5 = (**(code **)(uintptr_t)(local_34._pad_0x0_0 + 0xc))();
    } while (local_18 < iVar5);
  }
  piVar4 = (int *)(**(code **)(local_38->_pad_0x0_0 + 0x94))(&local_8c);
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (StructureCost *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  iVar5 = (**(code **)(uintptr_t)(*piVar4 + 0xc))();
  iVar9 = (**(code **)(uintptr_t)(local_48._pad_0x0_0 + 0xc))();
  util__Darray_L_PowerUsage_G___Darray_L_PowerUsage_G_
            ((Darray_L_PowerUsage_G_ *)__return_storage_ptr__,iVar5 + iVar9);
  *(uint64_t *)&local_10 = (double)((ulonglong)local_10 & 0xffffffff);
  iVar5 = (**(code **)(uintptr_t)(local_48._pad_0x0_0 + 0xc))();
  if ((int)(*(uint32_t*)((char*)&(local_10)+4)) < iVar5) {
    do {
      *(uint32_t *)&local_24 = (uint32_t)(uintptr_t)((Str_L_char_G_ *)(**(code **)local_48._pad_0x0_0)((int)&local_10 + 4));
      iVar5 = __return_storage_ptr__->Size;
      *(uint32_t *)&local_38 = (uint32_t)(uintptr_t)((Module *)(iVar5 + 1));
      util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___SetSize
                ((Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ *)__return_storage_ptr__,
                 (int *)&local_38);
      bVar3 = util__Darray_L_PowerUsage_G___CheckSize
                        ((Darray_L_PowerUsage_G_ *)__return_storage_ptr__,iVar5);
      if (bVar3) {
        iVar5 = __return_storage_ptr__->Size;
        pSVar1 = __return_storage_ptr__->Data;
        util__Str_char___operator__o8(&pSVar1[iVar5 + -1].Label,local_24);
        pSVar1[iVar5 + -1].Cost_c = *(double *)&local_24[1].Capacity;
      }
      *(uint32_t *)&local_10 = (double)CONCAT44((int)(*(uint32_t*)((char*)&(local_10)+4)) + 1,(undefined4)local_10);
      iVar5 = (**(code **)(uintptr_t)(local_48._pad_0x0_0 + 0xc))();
    } while ((int)(*(uint32_t*)((char*)&(local_10)+4)) < iVar5);
  }
  *(uint64_t *)&local_10 = (double)((ulonglong)local_10 & 0xffffffff);
  iVar5 = (**(code **)(uintptr_t)(*piVar4 + 0xc))();
  if ((int)(*(uint32_t*)((char*)&(local_10)+4)) < iVar5) {
    do {
      *(uint32_t *)&local_24 = (uint32_t)(uintptr_t)((Str_L_char_G_ *)(**(code **)*piVar4)((int)&local_10 + 4));
      iVar5 = __return_storage_ptr__->Size;
      *(uint32_t *)&local_38 = (uint32_t)(uintptr_t)((Module *)(iVar5 + 1));
      util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___SetSize
                ((Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ *)__return_storage_ptr__,
                 (int *)&local_38);
      bVar3 = util__Darray_L_PowerUsage_G___CheckSize
                        ((Darray_L_PowerUsage_G_ *)__return_storage_ptr__,iVar5);
      if (bVar3) {
        iVar5 = __return_storage_ptr__->Size;
        pSVar1 = __return_storage_ptr__->Data;
        util__Str_char___operator__o8(&pSVar1[iVar5 + -1].Label,local_24);
        pSVar1[iVar5 + -1].Cost_c = *(double *)&local_24[1].Capacity;
      }
      *(uint32_t *)&local_10 = (double)CONCAT44((int)(*(uint32_t*)((char*)&(local_10)+4)) + 1,(undefined4)local_10);
      iVar5 = (**(code **)(uintptr_t)(*piVar4 + 0xc))();
    } while ((int)(*(uint32_t*)((char*)&(local_10)+4)) < iVar5);
  }
  util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___dtor((Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ *)&local_48);
  local_34._pad_0x0_0 = (int)&vftable_75;
  if (local_34.Data != (MaterialConstituent *)0x0) {
    port_op_delete(local_34.Data);
  }
  local_34.Data = (MaterialConstituent *)0x0;
  local_34._pad_0x0_0 = (int)&vftable;
  util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___dtor(&local_8c);
  return __return_storage_ptr__;
}

//==== 005cca70 GetComposition_005cca70 ====

/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   Module__GetComposition(void)const  */

Darray_L_MaterialComposition_G_ * __thiscall
Module__GetComposition(Module *this,Darray_L_MaterialComposition_G_ *__return_storage_ptr__)

{
  Reflectable *pRVar1;
  Reflectable local_18;
  uint local_8;
  
  pRVar1 = &local_18;
  local_8 = local_8 & 0xffffff00;
  GetSubModulesOfDatum(pRVar1);
  FUN_005cacf0(__return_storage_ptr__,&local_18,local_8,pRVar1,this);
  local_18._pad_0x0_0 = (int)&vftable_2;
  if (local_18.Name.Data != (char *)0x0) {
    port_op_delete(local_18.Name.Data);
  }
  return __return_storage_ptr__;
}

//==== 005ccd30 GetCrewInfo_005ccd30 ====


/* public: class util__Str_L_char_G_ __thiscall Module__GetCrewInfo(void)const  */

Str_L_char_G_ * __thiscall Module__GetCrewInfo(Module *this,Str_L_char_G_ *__return_storage_ptr__)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 auVar6 [4];
  LocStr *this_00;
  Str_L_char_G_ *pSVar7;
  char *pcVar8;
  double dVar9;
  void *apvStack_4c [3];
  void *pvStack_40;
  Str_L_char_G_ SStack_34;
  Str_L_char_G_ SStack_28;
  Str_L_char_G_ SStack_1c;
  undefined1 auStack_10 [4];
  double dStack_c;
  
  dStack_c = (double)(ulonglong)(*(uint32_t*)&(dStack_c));
  dStack_c = GetCrewCountRequired(this);
  if (dStack_c <= 0.0) {
    pSVar7 = (Str_L_char_G_ *)auStack_10;
    *(uint32_t *)&auStack_10 = (uint32_t)0x0;
    dStack_c = 0.0;
    bVar5 = false;
    bVar4 = false;
    bVar3 = false;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    util__Str_char___Str_char(&SStack_34,"InfoBox ModuleCrew");
    SStack_1c.Data = (char *)0x0;
    SStack_1c.Capacity = 0;
    SStack_1c.Length = 0;
    this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_4c,&SStack_34,&SStack_1c);
    pSVar7 = util__LocStr__operator__o3(this_00);
    if (pSVar7->Capacity < 1) {
      pcVar8 = "";
    }
    else {
      pcVar8 = pSVar7->Data;
    }
    dVar9 = GetCrewCountRequired(this);
    pSVar7 = util__Printf(&SStack_28,(wchar_t*)(pcVar8),dVar9);
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar1 = false;
  }
  memcpy(&auVar6, &auStack_10, 4);
  util__Str_char___Str_char(__return_storage_ptr__,pSVar7);
  if ((bVar1) && (auVar6 != (uint32_t)0x0)) {
    port_op_delete((void *)auVar6);
  }
  if (bVar2) {
    if (SStack_28.Data != (char *)0x0) {
      port_op_delete(SStack_28.Data);
      SStack_28.Data = (char *)0x0;
    }
  }
  if (bVar3) {
    if (pvStack_40 != (void *)0x0) {
      port_op_delete(pvStack_40);
      pvStack_40 = (void *)0x0;
    }
    if (apvStack_4c[0] != (void *)0x0) {
      port_op_delete(apvStack_4c[0]);
      apvStack_4c[0] = (void *)0x0;
    }
  }
  if (bVar4) {
    if (SStack_1c.Data != (char *)0x0) {
      port_op_delete(SStack_1c.Data);
      SStack_1c.Data = (char *)0x0;
    }
  }
  if ((SStack_34.Data != (char *)0x0) && (bVar5)) {
    port_op_delete(SStack_34.Data);
  }
  return __return_storage_ptr__;
}





//==== 005cce90 GetCubicBoundingBox_m_005cce90 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual struct util__AABB_L_structutil__Vec3_L_double_G__G_ __thiscall
   Module__GetCubicBoundingBox_m(void)const  */

AABB_L_util__Vec3_L_double_G___G_ * __thiscall
Module__GetCubicBoundingBox_m(Module *this,AABB_L_util__Vec3_L_double_G___G_ *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  float10 fVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  
  fVar3 = (float10)(**(code **)(this->_pad_0x0_0 + 0xa4))();
  dVar1 = (double)fVar3;
  fVar3 = (float10)(**(code **)(this->_pad_0x0_0 + 0xa8))();
  uVar5 = (uint)((ulonglong)dVar1 >> 0x20);
  dVar2 = -dVar1;
  if (-dVar1 <= dVar1) {
    dVar2 = dVar1;
  }
  uVar4 = uVar5 ^ 0x80000000;
  if (dVar1 <= -dVar1) {
    uVar4 = uVar5;
  }
  dVar7 = (double)fVar3 * -0.5;
  dVar6 = (double)fVar3 * 0.5;
  *(int *)&(__return_storage_ptr__->Lower).X = SUB84(dVar1,0);
  *(uint *)((int)&(__return_storage_ptr__->Lower).X + 4) = uVar4;
  *(int *)&(__return_storage_ptr__->Lower).Y = SUB84(dVar1,0);
  *(uint *)((int)&(__return_storage_ptr__->Lower).Y + 4) = uVar4;
  dVar1 = dVar7;
  if (dVar6 <= dVar7) {
    dVar1 = dVar6;
  }
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  (__return_storage_ptr__->Lower).Z = dVar1;
  (__return_storage_ptr__->Upper).X = dVar2;
  (__return_storage_ptr__->Upper).Y = dVar2;
  (__return_storage_ptr__->Upper).Z = dVar7;
  return __return_storage_ptr__;
}

//==== 005ccf30 GetDefaultTextureOptions ====


/* public: static struct TextureInitOptions __cdecl Module__GetDefaultTextureOptions(bool) */

TextureInitOptions * __cdecl
Module__GetDefaultTextureOptions(TextureInitOptions *__return_storage_ptr__,bool param_1)

{
  __return_storage_ptr__->NearestFiltering = false;
  __return_storage_ptr__->TextureR = Repeat;
  (__return_storage_ptr__->Mipmaps).Data.MinLevel = 0;
  (__return_storage_ptr__->Mipmaps).Data.MaxLevel.Data = 0;
  (__return_storage_ptr__->Mipmaps).Data.MaxLevel.IsValidData = false;
  (__return_storage_ptr__->Mipmaps).IsValidData = false;
  __return_storage_ptr__->Quality = EightBit;
  __return_storage_ptr__->TextureS = Repeat;
  __return_storage_ptr__->TextureT = ClampToEdge;
  __return_storage_ptr__->Channels = RG;
  return __return_storage_ptr__;
}





//==== 005ccf80 GetDefaultTextureSize_m ====

/* public: struct util__Vec2_L_double_G_ __thiscall Module__GetDefaultTextureSize_m(void)const  */

Vec2_L_double_G_ * __thiscall
Module__GetDefaultTextureSize_m(Module *this,Vec2_L_double_G_ *__return_storage_ptr__)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)(**(code **)(this->_pad_0x0_0 + 0xa4))();
  fVar2 = (float10)(**(code **)(this->_pad_0x0_0 + 0xa8))();
  fVar3 = (float10)(**(code **)(this->_pad_0x0_0 + 0xa4))();
  __return_storage_ptr__->X = (double)(fVar3 * (float10)6.283185307179586);
  __return_storage_ptr__->Y = (double)(fVar2 + (float10)(double)(fVar1 + fVar1));
  return __return_storage_ptr__;
}

//==== 005ccfe0 GetForwardInfoBoxes ====


/* public: virtual class util__Darray_L_structInfoBox_G_ __thiscall
   Module__GetForwardInfoBoxes(void)const  */

void __thiscall Module__GetForwardInfoBoxes(Module *this)

{
  undefined8 stack0xfffffffc;
  LocStr *pLVar1;
  Str_L_char_G_ *pSVar2;
  InfoBox *pIVar3;
  Darray_L_struct_InfoBox_G_ *in_stack_00000004;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcStack_90;
  InfoBox IStack_70;
  void *apvStack_38 [3];
  void *pvStack_2c;
  Str_L_char_G_ SStack_20;
  Str_L_char_G_ SStack_14;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_InfoBox___Darray_struct_InfoBox(in_stack_00000004,(Darray_L_struct_InfoBox_G_*)((Darray_L_struct_InfoBox_G_*)(3)));
  util__Str_char___Str_char(&SStack_20,"InfoBox ModulePower Tooltip");
  SStack_14.Data = (char *)0x0;
  SStack_14.Capacity = 0;
  SStack_14.Length = 0;
  pcStack_90 = (char *)0x5cd04a;
  pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_38,&SStack_20,&SStack_14);
  pSVar2 = util__LocStr__operator__o3(pLVar1);
  uVar4 = 0;
  uVar5 = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)&pcStack_90,pSVar2);
  pIVar3 = (InfoBox *)
           InfoBox__InfoBox(&IStack_70,Icons__Power,this,(_func___cdecl_Str_L_char_G__void_ptr*)(util__DelegateFactory_class_Module_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_Module__GetPowerUseInfo_void_const__0),0,0,0,(void *)(uintptr_t)(uVar4),(_func___cdecl_Str_L_char_G__void_ptr*)(uVar5),0,0,0,(Delegate_L_bool_G_){0},0);
  util__Darray_struct_InfoBox___Add(in_stack_00000004,pIVar3);
  if (IStack_70.Tooltip.Value.Data != (char *)0x0) {
    port_op_delete(IStack_70.Tooltip.Value.Data);
    IStack_70.Tooltip.Value.Data = (char *)0x0;
  }
  if (IStack_70.Info.Value.Data != (char *)0x0) {
    port_op_delete(IStack_70.Info.Value.Data);
    IStack_70.Info.Value.Data = (char *)0x0;
  }
  if (pvStack_2c != (void *)0x0) {
    port_op_delete(pvStack_2c);
    pvStack_2c = (void *)0x0;
  }
  if (apvStack_38[0] != (void *)0x0) {
    port_op_delete(apvStack_38[0]);
    apvStack_38[0] = (void *)0x0;
  }
  if (SStack_14.Data != (char *)0x0) {
    port_op_delete(SStack_14.Data);
    SStack_14.Data = (char *)0x0;
  }
  if (SStack_20.Data != (char *)0x0) {
    port_op_delete(SStack_20.Data);
  }
  util__Str_char___Str_char(&SStack_20,"InfoBox ModuleMass Tooltip");
  SStack_14.Data = (char *)0x0;
  SStack_14.Capacity = 0;
  SStack_14.Length = 0;
  pcStack_90 = (char *)0x5cd16f;
  pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_38,&SStack_20,&SStack_14);
  pSVar2 = util__LocStr__operator__o3(pLVar1);
  uVar4 = 0;
  uVar5 = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)&pcStack_90,pSVar2);
  pIVar3 = (InfoBox *)
           InfoBox__InfoBox(&IStack_70,Icons__Mass,this,(_func___cdecl_Str_L_char_G__void_ptr*)(util__DelegateFactory_class_Module_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_Module__GetMassInfo_void_const__0),0,0,0,(void *)(uintptr_t)(uVar4),(_func___cdecl_Str_L_char_G__void_ptr*)(uVar5),0,0,0,(Delegate_L_bool_G_){0},0);
  util__Darray_struct_InfoBox___Add(in_stack_00000004,pIVar3);
  if (IStack_70.Tooltip.Value.Data != (char *)0x0) {
    port_op_delete(IStack_70.Tooltip.Value.Data);
    IStack_70.Tooltip.Value.Data = (char *)0x0;
  }
  if (IStack_70.Info.Value.Data != (char *)0x0) {
    port_op_delete(IStack_70.Info.Value.Data);
    IStack_70.Info.Value.Data = (char *)0x0;
  }
  if (pvStack_2c != (void *)0x0) {
    port_op_delete(pvStack_2c);
    pvStack_2c = (void *)0x0;
  }
  if (apvStack_38[0] != (void *)0x0) {
    port_op_delete(apvStack_38[0]);
    apvStack_38[0] = (void *)0x0;
  }
  if (SStack_14.Data != (char *)0x0) {
    port_op_delete(SStack_14.Data);
    SStack_14.Data = (char *)0x0;
  }
  if (SStack_20.Data != (char *)0x0) {
    port_op_delete(SStack_20.Data);
  }
  util__Str_char___Str_char(&SStack_20,"InfoBox ModuleCost Tooltip");
  SStack_14.Data = (char *)0x0;
  SStack_14.Capacity = 0;
  SStack_14.Length = 0;
  pcStack_90 = (char *)0x5cd294;
  pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_38,&SStack_20,&SStack_14);
  pSVar2 = util__LocStr__operator__o3(pLVar1);
  uVar4 = 0;
  uVar5 = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)&pcStack_90,pSVar2);
  pIVar3 = (InfoBox *)
           InfoBox__InfoBox(&IStack_70,(_func___cdecl_void *)(uintptr_t)(Icons__Cost),this,(_func___cdecl_Str_L_char_G__void_ptr*)(util__DelegateFactory_class_Module_class_util__Str_char_____MethodCallerConst___thunk_____thiscall_Module___vcall__228__flat_______0),0,0,0,(void *)(uintptr_t)uVar4,(_func___cdecl_Str_L_char_G__void_ptr *)(uintptr_t)(uVar5),0,0,0,(Delegate_L_bool_G_){0},0);
  util__Darray_struct_InfoBox___Add(in_stack_00000004,pIVar3);
  if (IStack_70.Tooltip.Value.Data != (char *)0x0) {
    port_op_delete(IStack_70.Tooltip.Value.Data);
    IStack_70.Tooltip.Value.Data = (char *)0x0;
  }
  if (IStack_70.Info.Value.Data != (char *)0x0) {
    port_op_delete(IStack_70.Info.Value.Data);
    IStack_70.Info.Value.Data = (char *)0x0;
  }
  if (pvStack_2c != (void *)0x0) {
    port_op_delete(pvStack_2c);
    pvStack_2c = (void *)0x0;
  }
  if (apvStack_38[0] != (void *)0x0) {
    port_op_delete(apvStack_38[0]);
    apvStack_38[0] = (void *)0x0;
  }
  if (SStack_14.Data != (char *)0x0) {
    port_op_delete(SStack_14.Data);
    SStack_14.Data = (char *)0x0;
  }
  if (SStack_20.Data != (char *)0x0) {
    port_op_delete(SStack_20.Data);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 005cd390 GetGeneralModuleShader ====


/* class GeneralModuleShader * __cdecl GetGeneralModuleShader(void) */

GeneralModuleShader * __cdecl GetGeneralModuleShader(void)

{
  GeneralModuleShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_3887c5d0__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_47536993__thread_safe_static_guard_0__);
    if ( cde_l2_47536993__thread_safe_static_guard_0__ == -1) {
      this = (GeneralModuleShader *)port_op_new(0x5c);
      if (this == (GeneralModuleShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x5c);
        pSVar1 = (Shader *)GeneralModuleShader__GeneralModuleShader(this);
      }
       cde_l2_357ce277_Singleton = (GeneralModuleShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_47536993__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_357ce277_Singleton;
}





//==== 005cd3a0 GetHeatTransferInfo ====

/* WARNING: Removing unreachable block (ram,0x005cd558) */
/* WARNING: Removing unreachable block (ram,0x005cd565) */
/* public: class util__Str_L_char_G_ __thiscall Module__GetHeatTransferInfo(void)const  */

Str_L_char_G_ * __thiscall Module__GetHeatTransferInfo(Module *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined8 stack0xfffffed0;
  undefined8 stack0xfffffed4;
  Str_L_char_G_ SVar1;
  Str_L_char_G_ SVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  LocStr *this_00;
  Str_L_char_G_ *pSVar12;
  char *in_stack_fffffed0;
  char *in_stack_fffffed4;
  char *pcVar13;
  int iVar14;
  char *pcVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  char local_110 [48];
  undefined1 local_e0 [48];
  undefined1 local_b0 [48];
  void *local_80 [3];
  void *local_74;
  Str_L_char_G_ local_68;
  Str_L_char_G_ local_5c;
  Str_L_char_G_ local_50;
  Str_L_char_G_ local_44;
  undefined4 local_38;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  *(uint32_t *)&local_38 = 0;
  puVar17 = local_b0;
  iVar11 = (**(code **)(this->_pad_0x0_0 + 200))();
  if (*(char *)(iVar11 + 0x28) == '\0') {
    pSVar12 = &local_1c;
    local_1c.Data = (char *)0x0;
    bVar10 = true;
    bVar9 = false;
    bVar8 = false;
    bVar7 = false;
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    bVar3 = false;
    local_1c.Capacity = 0;
    local_1c.Length = 0;
  }
  else {
    util__Str_char___Str_char(&local_68,"GetCoolantProperties()->PeakTemperature_K");
    util__Str_char___Str_char(&local_34,"GetCoolantProperties()->HeatTransferRate_W");
    util__Str_char___Str_char(&local_28,"InfoBox ModuleHeat");
    puVar16 = local_e0;
    iVar14 = 0x5cd408;
    iVar11 = (**(code **)(this->_pad_0x0_0 + 200))();
    if (*(char *)(iVar11 + 0x28) == '\0') {
      in_stack_fffffed4 = "IsValid()";
      in_stack_fffffed0 = (char *)0x17;
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      iVar14 = 0x5cd42e;
      DebugBreak();
    }
    GetUnitsOfType((Str_L_char_G_ *)&stack0xfffffed0,&local_68);
    SVar1.Capacity = iVar14;
    SVar1.Data = in_stack_fffffed4;
    SVar1.Length = (int)puVar16;
    Print(&local_5c,
            (double)CONCAT44(in_stack_fffffed0,
                             (int)((ulonglong)*(undefined8 *)(iVar11 + 0x18) >> 0x20)),SVar1);
    pcVar15 = local_110;
    pcVar13 = (char *)0x5cd473;
    iVar11 = (**(code **)(this->_pad_0x0_0 + 200))();
    if (*(char *)(iVar11 + 0x28) == '\0') {
      pcVar15 = "IsValid()";
      pcVar13 = (char *)0x17;
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      puVar16 = (undefined1 *)0x5cd493;
      DebugBreak();
    }
    GetUnitsOfType((Str_L_char_G_ *)&stack0xfffffed4,&local_34);
    SVar2.Capacity = (int)puVar16;
    SVar2.Data = pcVar15;
    SVar2.Length = (int)puVar17;
    Print(&local_50,
            (double)CONCAT44(pcVar13,(char *)((ulonglong)*(undefined8 *)(iVar11 + 0x20) >> 0x20)),
            SVar2);
    local_10.Data = (char *)0x0;
    local_10.Capacity = 0;
    local_10.Length = 0;
    this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)local_80,&local_28,&local_10);
    pSVar12 = util__LocStr__operator__o3(this_00);
    if (pSVar12->Capacity < 1) {
      pcVar15 = "";
    }
    else {
      pcVar15 = pSVar12->Data;
    }
    pSVar12 = util__Printf(&local_44,(wchar_t*)(pcVar15));
    bVar10 = false;
    bVar9 = true;
    bVar8 = true;
    bVar7 = true;
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
  }
  pcVar15 = local_1c.Data;
  util__Str_char___Str_char(__return_storage_ptr__,pSVar12);
  if ((bVar10) && (pcVar15 != (char *)0x0)) {
    port_op_delete(pcVar15);
  }
  if (bVar4) {
    if (local_74 != (void *)0x0) {
      port_op_delete(local_74);
      *(uint32_t *)&local_74 = (uint32_t)(uintptr_t)((void *)0x0);
    }
    if (local_80[0] != (void *)0x0) {
      port_op_delete(local_80[0]);
      local_80[0] = (void *)0x0;
    }
  }
  if ((bVar5) && (local_10.Data != (char *)0x0)) {
    port_op_delete(local_10.Data);
    local_10.Data = (char *)0x0;
  }
  if ((bVar6) && (local_50.Data != (char *)0x0)) {
    port_op_delete(local_50.Data);
    local_50.Data = (char *)0x0;
  }
  if ((bVar7) && (local_5c.Data != (char *)0x0)) {
    port_op_delete(local_5c.Data);
    local_5c.Data = (char *)0x0;
  }
  if ((bVar8) && (local_28.Data != (char *)0x0)) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if ((bVar9) && (local_34.Data != (char *)0x0)) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if ((local_68.Data != (char *)0x0) && (bVar3)) {
    port_op_delete(local_68.Data);
  }
  return __return_storage_ptr__;
}

//==== 005cd670 GetInfoBoxes_005cd670 ====


/* public: virtual class util__Darray_L_structInfoBox_G_ __thiscall Module__GetInfoBoxes(void)const  */

void * __thiscall Module__GetInfoBoxes(Module *this)

{
  undefined8 stack0xfffffffc;
  LocStr *pLVar1;
  Str_L_char_G_ *pSVar2;
  InfoBox *pIVar3;
  Darray_L_struct_InfoBox_G_ *in_stack_00000004;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcStack_90;
  InfoBox IStack_70;
  void *apvStack_38 [3];
  void *pvStack_2c;
  Str_L_char_G_ SStack_20;
  Str_L_char_G_ SStack_14;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_InfoBox___Darray_struct_InfoBox(in_stack_00000004,(Darray_L_struct_InfoBox_G_*)((Darray_L_struct_InfoBox_G_*)(3)));
  util__Str_char___Str_char(&SStack_20,"InfoBox ModuleHeatTransfer Tooltip");
  SStack_14.Data = (char *)0x0;
  SStack_14.Capacity = 0;
  SStack_14.Length = 0;
  pcStack_90 = (char *)0x5cd6da;
  pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_38,&SStack_20,&SStack_14);
  pSVar2 = util__LocStr__operator__o3(pLVar1);
  uVar4 = 0;
  uVar5 = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)&pcStack_90,pSVar2);
  pIVar3 = (InfoBox *)
           InfoBox__InfoBox(&IStack_70,Icons__Radiator,this,(_func___cdecl_Str_L_char_G__void_ptr*)(util__DelegateFactory_class_Module_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_Module__GetHeatTransferInfo_void_const__0),0,0,0,(void *)(uintptr_t)(uVar4),(_func___cdecl_Str_L_char_G__void_ptr*)(uVar5),0,0,0,(Delegate_L_bool_G_){0},0);
  util__Darray_struct_InfoBox___Add(in_stack_00000004,pIVar3);
  if (IStack_70.Tooltip.Value.Data != (char *)0x0) {
    port_op_delete(IStack_70.Tooltip.Value.Data);
    IStack_70.Tooltip.Value.Data = (char *)0x0;
  }
  if (IStack_70.Info.Value.Data != (char *)0x0) {
    port_op_delete(IStack_70.Info.Value.Data);
    IStack_70.Info.Value.Data = (char *)0x0;
  }
  if (pvStack_2c != (void *)0x0) {
    port_op_delete(pvStack_2c);
    pvStack_2c = (void *)0x0;
  }
  if (apvStack_38[0] != (void *)0x0) {
    port_op_delete(apvStack_38[0]);
    apvStack_38[0] = (void *)0x0;
  }
  if (SStack_14.Data != (char *)0x0) {
    port_op_delete(SStack_14.Data);
    SStack_14.Data = (char *)0x0;
  }
  if (SStack_20.Data != (char *)0x0) {
    port_op_delete(SStack_20.Data);
  }
  util__Str_char___Str_char(&SStack_20,"InfoBox ModuleCrew Tooltip");
  SStack_14.Data = (char *)0x0;
  SStack_14.Capacity = 0;
  SStack_14.Length = 0;
  pcStack_90 = (char *)0x5cd7fb;
  pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_38,&SStack_20,&SStack_14);
  pSVar2 = util__LocStr__operator__o3(pLVar1);
  uVar4 = 0;
  uVar5 = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)&pcStack_90,pSVar2);
  pIVar3 = (InfoBox *)
           InfoBox__InfoBox(&IStack_70,Icons__OutOfCrew,this,(_func___cdecl_Str_L_char_G__void_ptr*)(util__DelegateFactory_class_Module_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_Module__GetCrewInfo_void_const__0),0,0,0,(void *)(uintptr_t)(uVar4),(_func___cdecl_Str_L_char_G__void_ptr*)(uVar5),0,0,0,(Delegate_L_bool_G_){0},0);
  util__Darray_struct_InfoBox___Add(in_stack_00000004,pIVar3);
  if (IStack_70.Tooltip.Value.Data != (char *)0x0) {
    port_op_delete(IStack_70.Tooltip.Value.Data);
    IStack_70.Tooltip.Value.Data = (char *)0x0;
  }
  if (IStack_70.Info.Value.Data != (char *)0x0) {
    port_op_delete(IStack_70.Info.Value.Data);
    IStack_70.Info.Value.Data = (char *)0x0;
  }
  if (pvStack_2c != (void *)0x0) {
    port_op_delete(pvStack_2c);
    pvStack_2c = (void *)0x0;
  }
  if (apvStack_38[0] != (void *)0x0) {
    port_op_delete(apvStack_38[0]);
    apvStack_38[0] = (void *)0x0;
  }
  if (SStack_14.Data != (char *)0x0) {
    port_op_delete(SStack_14.Data);
    SStack_14.Data = (char *)0x0;
  }
  if (SStack_20.Data != (char *)0x0) {
    port_op_delete(SStack_20.Data);
  }
  util__Str_char___Str_char(&SStack_20,"InfoBox ModuleRadiation Tooltip");
  SStack_14.Data = (char *)0x0;
  SStack_14.Capacity = 0;
  SStack_14.Length = 0;
  pcStack_90 = (char *)0x5cd91c;
  pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_38,&SStack_20,&SStack_14);
  pSVar2 = util__LocStr__operator__o3(pLVar1);
  uVar4 = 0;
  uVar5 = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)&pcStack_90,pSVar2);
  pIVar3 = (InfoBox *)
           InfoBox__InfoBox(&IStack_70,(_func___cdecl_void *)(uintptr_t)(Icons__RadiationHazard),this,(_func___cdecl_Str_L_char_G__void_ptr*)(util__DelegateFactory_class_Module_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_Module__GetRadiationInfo_void_const__0),0,0,0,(void *)(uintptr_t)uVar4,(_func___cdecl_Str_L_char_G__void_ptr *)(uintptr_t)(uVar5),0,0,0,(Delegate_L_bool_G_){0},0);
  util__Darray_struct_InfoBox___Add(in_stack_00000004,pIVar3);
  if (IStack_70.Tooltip.Value.Data != (char *)0x0) {
    port_op_delete(IStack_70.Tooltip.Value.Data);
    IStack_70.Tooltip.Value.Data = (char *)0x0;
  }
  if (IStack_70.Info.Value.Data != (char *)0x0) {
    port_op_delete(IStack_70.Info.Value.Data);
    IStack_70.Info.Value.Data = (char *)0x0;
  }
  if (pvStack_2c != (void *)0x0) {
    port_op_delete(pvStack_2c);
    pvStack_2c = (void *)0x0;
  }
  if (apvStack_38[0] != (void *)0x0) {
    port_op_delete(apvStack_38[0]);
    apvStack_38[0] = (void *)0x0;
  }
  if (SStack_14.Data != (char *)0x0) {
    port_op_delete(SStack_14.Data);
    SStack_14.Data = (char *)0x0;
  }
  if (SStack_20.Data != (char *)0x0) {
    port_op_delete(SStack_20.Data);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return 0;
}





//==== 005cda10 GetLocalizedName ====

/* public: virtual class util__Str_L_char_G_ __thiscall Module__GetLocalizedName(void)const  */

Str_L_char_G_ * __thiscall Module__GetLocalizedName(Module *this,Str_L_char_G_ *__return_storage_ptr__)

{
  Str_L_char_G_ *pSVar1;
  bool bVar2;
  Str_L_char_G_ local_20;
  void *local_14 [3];
  undefined4 local_8;
  
  bVar2 = *(char *)&this[1].ModuleMemoizationHandlerInstance.ResetFunctions.Data == '\0';
  local_8 = 0;
  if (bVar2) {
    pSVar1 = (Str_L_char_G_ *)(**(code **)(this->_pad_0x0_0 + 0x124))(local_14);
  }
  else {
    pSVar1 = util__Reflectable__GetLocalizedName((Reflectable *)this,&local_20);
  }
  util__Str_char___Str_char(__return_storage_ptr__,pSVar1);
  if (bVar2) {
    if (local_14[0] != (void *)0x0) {
      port_op_delete(local_14[0]);
      local_14[0] = (void *)0x0;
    }
  }
  if ((local_20.Data != (char *)0x0) && (!bVar2)) {
    port_op_delete(local_20.Data);
  }
  return __return_storage_ptr__;
}

//==== 005cdc70 GetMass_kg_005cdc70 ====

/* public: double __thiscall Module__GetMass_kg(void)const  */

double __thiscall Module__GetMass_kg(Module *this)

{
  float10 fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x005cdc78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float10)(**(code **)(this->_pad_0x0_0 + 0x90))();
  return (double)fVar1;
}

//==== 005cdd70 GetPowerRequired_W ====

/* public: virtual double __thiscall Module__GetPowerRequired_W(void)const  */

double __thiscall Module__GetPowerRequired_W(Module *this)

{
  int iVar1;
  SharedPtr_L_GameModel_G_ *pSVar2;
  double dVar3;
  bool bVar4;
  undefined4 uVar5;
  float10 fVar6;
  Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ local_24;
  undefined8 local_14;
  undefined8 uStack_c;
  
  if ((char)this[1]._pad_0x0_0 == '\0') {
    iVar1 = (this->Models).Size;
    uStack_c = (double)CONCAT44(iVar1 + 1,(uint)uStack_c);
    util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
              ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)&this->Models,(int *)((int)&uStack_c + 4));
    bVar4 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)&this->Models,iVar1);
    if (bVar4) {
      pSVar2 = (this->Models).Data;
      iVar1 = (this->Models).Size;
      pSVar2[iVar1 + -1].Pointer = (GameModel *)GetTotalPowerUsage_W_Clear;
      pSVar2[iVar1 + -1].Controller = (ReferenceController *)0x0;
    }
    (*(uint40_t*)&(uStack_c)) = (uint5)(uint)uStack_c;
    uVar5 = (**(code **)(this->_pad_0x0_0 + 0x98))(&local_24,(*(uint32_t*)((char*)&(uStack_c)+4)));
    fVar6 = (float10)FUN_005caeb0(uVar5);
    uStack_c = (double)fVar6;
    util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___dtor(&local_24);
    dVar3 = uStack_c;
    *(uint32_t *)&local_14 = uStack_c;
    uStack_c = (double)CONCAT71((*(uint56_t*)((char*)&(uStack_c)+1)),1);
    (*(uint32_t*)&(local_14)) = SUB84(dVar3,0);
    (*(uint32_t*)((char*)&(local_14)+4)) = (int)((ulonglong)dVar3 >> 0x20);
    this->UsesCustomName = (bool)(undefined1)local_14;
    this->IsUserCreated = (bool)(*(uint8_t*)((char*)&(local_14)+1));
    *(undefined2 *)&(*(undefined2 *)(void *)((char *)(uintptr_t)(this) + 0x4a)) = (*(uint16_t*)((char*)&(local_14)+2));
    *(int *)&(*(undefined1 *)(void *)((char *)(uintptr_t)(this) + 0x4c)) = (*(uint32_t*)((char*)&(local_14)+4));
    this[1]._pad_0x0_0 = (uint)uStack_c;
    this[1]._pad_0x4_1 = (*(uint32_t*)((char*)&(local_14)+4));
    if ((char)this[1]._pad_0x0_0 == '\0') {
      *(uint32_t *)&local_14 = dVar3;
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  return *(double *)&this->UsesCustomName;
}

//==== 005cde30 GetPowerUsage_005cde30 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual class util__Darray_L_structPowerUsage_G_ __thiscall Module__GetPowerUsage(void)const
    */

Darray_L_PowerUsage_G_ * __thiscall
Module__GetPowerUsage(Module *this,Darray_L_PowerUsage_G_ *__return_storage_ptr__)

{
  undefined8 stack0xfffffffc;
  Str_L_char_G_ *pSVar1;
  int iVar2;
  undefined4 *puVar3;
  Darray_L_struct_StructureCost_G_ *pDVar4;
  PowerUsage *this_00;
  Str_L_char_G_ *pSVar5;
  Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ local_30;
  int local_20;
  Reflectable local_1c;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (PowerUsage *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->_pad_0x0_0 =
       (int)&vftable_105;
  __return_storage_ptr__->Data = (PowerUsage *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  GetSubModulesOfDatum(&local_1c);
  *(uint32_t *)&local_c = 0;
  iVar2 = (**(code **)(uintptr_t)(local_1c._pad_0x0_0 + 0xc))();
  if (local_c < iVar2) {
    do {
      puVar3 = (undefined4 *)(**(code **)local_1c._pad_0x0_0)(&local_c);
      pDVar4 = (Darray_L_struct_StructureCost_G_ *)(**(code **)(*(int *)*puVar3 + 0x70))(&local_30);
      if (__return_storage_ptr__->Size == 0) {
        util__Darray_L_StructureCost_G___op_assign
                  ((Darray_L_StructureCost_G_ *)__return_storage_ptr__,pDVar4);
      }
      else {
        iVar2 = (**(code **)(*(int *)pDVar4 + 0xc))();
        if (iVar2 != 0) {
          iVar2 = __return_storage_ptr__->Size;
          *(uint32_t *)&local_20 = (**(code **)(*(int *)pDVar4 + 0xc))();
          *(uint32_t *)&local_20 = local_20 + __return_storage_ptr__->Size;
          util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___SetSize
                    ((Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ *)__return_storage_ptr__,
                     &local_20);
          util__Darray_L_PowerUsage_G___CheckSize(__return_storage_ptr__,iVar2);
          pSVar5 = *(Str_L_char_G_ **)(pDVar4 + 4);
          this_00 = __return_storage_ptr__->Data + iVar2;
          if (this_00 != __return_storage_ptr__->Data + __return_storage_ptr__->Size) {
            do {
              util__Str_char___operator__o8(&this_00->Label,pSVar5);
              pSVar1 = pSVar5 + 1;
              pSVar5 = pSVar5 + 2;
              this_00->PowerUsed_W = *(double *)&pSVar1->Capacity;
              this_00 = this_00 + 1;
            } while (this_00 != __return_storage_ptr__->Data + __return_storage_ptr__->Size);
          }
        }
      }
      util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___dtor(&local_30);
      *(uint32_t *)&local_c = local_c + 1;
      iVar2 = (**(code **)(uintptr_t)(local_1c._pad_0x0_0 + 0xc))();
    } while (local_c < iVar2);
  }
  local_1c._pad_0x0_0 = (int)&vftable_2;
  if (local_1c.Name.Data != (char *)0x0) {
    port_op_delete(local_1c.Name.Data);
  }
  return __return_storage_ptr__;
}

//==== 005ce160 GetQuickName ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: class util__Str_L_char_G_ __thiscall Module__GetQuickName(void)const  */

Str_L_char_G_ * __thiscall Module__GetQuickName(Module *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  Str_L_char_G_ *pSVar5;
  Str_L_char_G_ *pSVar6;
  Str_L_char_G_ local_54;
  Str_L_char_G_ local_48;
  undefined4 local_3c;
  Str_L_char_G_ local_38;
  void *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined8 local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(uint32_t *)&local_3c = 0;
  pSVar6 = &local_38;
  local_2c = (void *)0x0;
  *(uint32_t *)&local_10 = 0;
  *(uint32_t *)&local_20 = (uint32_t)(uintptr_t)((void *)0x0);
  uStack_1c = 0;
  uStack_18 = 0;
  pvStack_14 = (void *)0x0;
  *(uint32_t *)&local_28 = 0;
  *(uint32_t *)&local_24 = 0;
  pSVar5 = (Str_L_char_G_ *)(**(code **)(this->_pad_0x0_0 + 0x44))(pSVar6,&local_2c);
  util__LocStr__LocStr((LocStr *)&local_20,pSVar5,pSVar6);
  if (local_38.Data != (char *)0x0) {
    port_op_delete(local_38.Data);
    local_38.Data = (char *)0x0;
  }
  if (local_2c != (void *)0x0) {
    port_op_delete(local_2c);
  }
  bVar4 = util__LocStr__HasLocalizedString((LocStr *)&local_20);
  if (bVar4) {
    pSVar5 = &local_54;
    pSVar6 = util__LocStr__operator__o3((LocStr *)&local_20);
    bVar3 = true;
    bVar2 = false;
    bVar4 = false;
    bVar1 = false;
  }
  else {
    bVar4 = *(char *)&this[1].ModuleMemoizationHandlerInstance.ResetFunctions.Data == '\0';
    if (bVar4) {
      pSVar6 = (Str_L_char_G_ *)(**(code **)(this->_pad_0x0_0 + 0x128))(&local_2c);
    }
    else {
      pSVar6 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_48,(Str_L_char_G_ *)&this->_pad_0x4_1);
    }
    bVar3 = false;
    bVar2 = !bVar4;
    bVar1 = true;
    pSVar5 = &local_38;
  }
  pSVar6 = (Str_L_char_G_ *)util__Str_char___Str_char(pSVar5,pSVar6);
  util__Str_char___Str_char(__return_storage_ptr__,pSVar6);
  if (bVar1) {
    if (local_38.Data != (char *)0x0) {
      port_op_delete(local_38.Data);
      local_38.Data = (char *)0x0;
    }
  }
  if (bVar4) {
    if (local_2c != (void *)0x0) {
      port_op_delete(local_2c);
      local_2c = (void *)0x0;
    }
  }
  if (bVar2) {
    if (local_48.Data != (char *)0x0) {
      port_op_delete(local_48.Data);
      local_48.Data = (char *)0x0;
    }
  }
  if ((local_54.Data != (char *)0x0) && (bVar3)) {
    port_op_delete(local_54.Data);
    local_54.Data = (char *)0x0;
  }
  if (pvStack_14 != (void *)0x0) {
    port_op_delete(pvStack_14);
    pvStack_14 = (void *)0x0;
  }
  if (local_20 != (void *)0x0) {
    port_op_delete(local_20);
  }
  return __return_storage_ptr__;
}

//==== 005ce300 GetRadiationInfo ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: class util__Str_L_char_G_ __thiscall Module__GetRadiationInfo(void)const  */

Str_L_char_G_ * __thiscall Module__GetRadiationInfo(Module *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined8 stack0xffffff58;
  undefined8 stack0xfffffffc;
  Str_L_char_G_ SVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auVar9 [4];
  LocStr *this_00;
  Str_L_char_G_ *pSVar10;
  char *pcVar11;
  char *in_stack_ffffff58;
  int iVar12;
  double *pdVar13;
  double *pdVar14;
  void *local_8c [3];
  void *local_80;
  Str_L_char_G_ local_74;
  Str_L_char_G_ local_68;
  Str_L_char_G_ local_5c;
  Str_L_char_G_ local_50;
  Str_L_char_G_ local_44;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  undefined4 local_18;
  undefined1 auStack_14 [4];
  double local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(uint64_t *)&local_10 = (double)(ulonglong)(*(uint32_t*)&(local_10));
  pdVar14 = &local_20;
  (**(code **)(this->_pad_0x0_0 + 0xcc))();
  if ((double)CONCAT44(auStack_14,local_18) + local_20 + local_10 <= 0.0) {
    pSVar10 = (Str_L_char_G_ *)auStack_14;
    *(uint32_t *)&auStack_14 = (uint32_t)0x0;
    *(uint32_t *)&local_10 = 0.0;
    bVar8 = false;
    bVar7 = false;
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    bVar3 = false;
    bVar2 = true;
  }
  else {
    util__Str_char___Str_char(&local_74,"GetTotalRadiation_W()");
    util__Str_char___Str_char(&local_50,"InfoBox RadiationHazard");
    pdVar13 = &local_38;
    iVar12 = 0x5ce375;
    (**(code **)(this->_pad_0x0_0 + 0xcc))();
    *(uint32_t *)&local_10 = local_30 + local_38 + local_28;
    GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff58,&local_74);
    SVar1.Capacity = (int)pdVar13;
    SVar1.Data = (char *)iVar12;
    SVar1.Length = (int)pdVar14;
    Print(&local_68,(double)CONCAT44(in_stack_ffffff58,(int)((ulonglong)local_10 >> 0x20)),SVar1);
    local_44.Data = (char *)0x0;
    local_44.Capacity = 0;
    local_44.Length = 0;
    this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)local_8c,&local_50,&local_44);
    pSVar10 = util__LocStr__operator__o3(this_00);
    if (pSVar10->Capacity < 1) {
      pcVar11 = "";
    }
    else {
      pcVar11 = pSVar10->Data;
    }
    pSVar10 = util__Printf(&local_5c,(wchar_t*)(pcVar11));
    bVar8 = true;
    bVar7 = true;
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
    bVar2 = false;
  }
  memcpy(&auVar9, &auStack_14, 16);
  util__Str_char___Str_char(__return_storage_ptr__,pSVar10);
  if ((bVar2) && (auVar9 != (uint32_t)0x0)) {
    port_op_delete((void *)auVar9);
  }
  if ((bVar3) && (local_5c.Data != (char *)0x0)) {
    port_op_delete(local_5c.Data);
    local_5c.Data = (char *)0x0;
  }
  if (bVar4) {
    if (local_80 != (void *)0x0) {
      port_op_delete(local_80);
      local_80 = (void *)0x0;
    }
    if (local_8c[0] != (void *)0x0) {
      port_op_delete(local_8c[0]);
      local_8c[0] = (void *)0x0;
    }
  }
  if ((bVar5) && (local_44.Data != (char *)0x0)) {
    port_op_delete(local_44.Data);
    local_44.Data = (char *)0x0;
  }
  if ((bVar6) && (local_68.Data != (char *)0x0)) {
    port_op_delete(local_68.Data);
    local_68.Data = (char *)0x0;
  }
  if ((bVar7) && (local_50.Data != (char *)0x0)) {
    port_op_delete(local_50.Data);
    local_50.Data = (char *)0x0;
  }
  if ((local_74.Data != (char *)0x0) && (bVar8)) {
    port_op_delete(local_74.Data);
  }
  return __return_storage_ptr__;
}

//==== 005ceab0 GetStartingWetMass_kg ====

/* public: virtual double __thiscall Module__GetStartingWetMass_kg(void)const  */

double __thiscall Module__GetStartingWetMass_kg(Module *this)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)(**(code **)(this->_pad_0x0_0 + 0x8c))();
  fVar2 = (float10)(**(code **)(this->_pad_0x0_0 + 0x88))();
  return (double)(fVar2 + (float10)(double)fVar1);
}

//==== 005ceae0 GetStatuses_005ceae0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual class DesignStatusBuffer __thiscall Module__GetStatuses(class DataParser *)const
    */

DesignStatusBuffer * __thiscall
Module__GetStatuses(Module *this,DesignStatusBuffer *__return_storage_ptr__,DataParser *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  undefined4 *puVar2;
  DesignStatusBuffer *pDVar3;
  undefined1 local_38 [4];
  Darray_L_DesignStatusMessage_G_ local_34;
  Reflectable local_20;
  DataParser *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(uint32_t *)&local_10 = (uint32_t)(uintptr_t)(param_1);
  __return_storage_ptr__->DataManager = (DataParser *)0x0;
  (__return_storage_ptr__->Messages)._pad_0x0_0 = 0;
  (__return_storage_ptr__->Messages).Data = (DesignStatusMessage *)0x0;
  (__return_storage_ptr__->Messages).Size = 0;
  *(undefined8 *)&(__return_storage_ptr__->Messages).Capacity = 0;
  DesignStatusBuffer__DesignStatusBuffer(__return_storage_ptr__,param_1);
  GetSubModulesOfDatum(&local_20);
  *(uint32_t *)&local_c = 0;
  iVar1 = (**(code **)(uintptr_t)(local_20._pad_0x0_0 + 0xc))();
  if (local_c < iVar1) {
    do {
      puVar2 = (undefined4 *)(**(code **)local_20._pad_0x0_0)(&local_c);
      pDVar3 = (DesignStatusBuffer *)(**(code **)(*(int *)*puVar2 + 100))(local_38,local_10);
      DesignStatusBuffer__operator__o2(__return_storage_ptr__,pDVar3);
      Darray_L_DesignStatusMessage_G___dtor(&local_34);
      *(uint32_t *)&local_c = local_c + 1;
      iVar1 = (**(code **)(uintptr_t)(local_20._pad_0x0_0 + 0xc))();
    } while (local_c < iVar1);
  }
  local_20._pad_0x0_0 = (int)&vftable_2;
  if (local_20.Name.Data != (char *)0x0) {
    port_op_delete(local_20.Name.Data);
  }
  return __return_storage_ptr__;
}

//==== 005ceba0 GetSubModulesOfDatum ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* class util__Darray_L_classSubModuleconst_P_G_ __cdecl GetSubModulesOfDatum(class util__Reflectable
   const *) */

Reflectable * __cdecl GetSubModulesOfDatum(Reflectable *param_1)

{
  undefined8 stack0xfffffffc;
  int *piVar1;
  undefined4 uVar2;
  undefined4 *in_stack_00000008;
  undefined **local_1c;
  ClassMember *local_18;
  undefined1 local_c [4];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  param_1->_pad_0x0_0 = 0;
  (param_1->Name).Data = (char *)0x0;
  (param_1->Name).Capacity = 0;
  (param_1->Name).Length = 0;
  param_1->_pad_0x0_0 = (int)&vftable_2;
  (param_1->Name).Data = (char *)0x0;
  (param_1->Name).Capacity = 0;
  (param_1->Name).Length = 0;
  piVar1 = (int *)(**(code **)*in_stack_00000008)();
  uVar2 = (**(code **)(uintptr_t)(*piVar1 + 4))(&local_1c,local_c,param_1);
  FUN_005ca9b0(uVar2);
  *(uint32_t *)&local_1c = (uint32_t)(uintptr_t)(&vftable_52);
  if (local_18 != (ClassMember *)0x0) {
    util__ClassMember___vector_deleting_destructor(local_18,3);
  }
  return param_1;
}

//==== 005cecb0 GetTotalPowerUsage_W_Clear ====

/* public: void __thiscall Module__GetTotalPowerUsage_W_Clear(void)const  */

void __thiscall Module__GetTotalPowerUsage_W_Clear(Module *this)

{
  *(undefined1 *)&this[1]._pad_0x0_0 = 0;
  this->UsesCustomName = false;
  this->IsUserCreated = false;
  *(undefined6 *)&(*(undefined6 *)(void *)((char *)(uintptr_t)(this) + 0x4a)) = 0;
  return;
}

//==== 005cecc0 GetTotalPowerUsage_W_Memoize ====

/* public: void __thiscall Module__GetTotalPowerUsage_W_Memoize(void)const  */

void __thiscall Module__GetTotalPowerUsage_W_Memoize(Module *this)

{
  int iVar1;
  SharedPtr_L_GameModel_G_ *pSVar2;
  double dVar3;
  bool bVar4;
  undefined4 uVar5;
  float10 fVar6;
  Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ local_24;
  undefined4 local_14;
  int iStack_10;
  undefined8 uStack_c;
  
  if ((char)this[1]._pad_0x0_0 == '\0') {
    iVar1 = (this->Models).Size;
    uStack_c = (double)CONCAT44(iVar1 + 1,(uint)uStack_c);
    util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
              ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)&this->Models,(int *)((int)&uStack_c + 4));
    bVar4 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)&this->Models,iVar1);
    if (bVar4) {
      pSVar2 = (this->Models).Data;
      iVar1 = (this->Models).Size;
      pSVar2[iVar1 + -1].Pointer = (GameModel *)GetTotalPowerUsage_W_Clear;
      pSVar2[iVar1 + -1].Controller = (ReferenceController *)0x0;
    }
    (*(uint40_t*)&(uStack_c)) = (uint5)(uint)uStack_c;
    uVar5 = (**(code **)(this->_pad_0x0_0 + 0x98))(&local_24,(*(uint32_t*)((char*)&(uStack_c)+4)));
    fVar6 = (float10)FUN_005caeb0(uVar5);
    uStack_c = (double)fVar6;
    util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___dtor(&local_24);
    dVar3 = uStack_c;
    uStack_c = (double)CONCAT71((*(uint56_t*)((char*)&(uStack_c)+1)),1);
    *(uint32_t *)&local_14 = SUB84(dVar3,0);
    iStack_10 = (int)((ulonglong)dVar3 >> 0x20);
    this->UsesCustomName = (bool)(undefined1)local_14;
    this->IsUserCreated = (bool)(*(uint8_t*)((char*)&(local_14)+1));
    *(undefined2 *)&(*(undefined2 *)(void *)((char *)(uintptr_t)(this) + 0x4a)) = (*(uint16_t*)((char*)&(local_14)+2));
    *(int *)&(*(undefined1 *)(void *)((char *)(uintptr_t)(this) + 0x4c)) = iStack_10;
    this[1]._pad_0x0_0 = (uint)uStack_c;
    this[1]._pad_0x4_1 = iStack_10;
  }
  return;
}

//==== 005ced90 GetWarningIcon_005ced90 ====

/* public: void (__cdecl*__thiscall Module__GetWarningIcon(void)const )(void) */

_func_void * __thiscall Module__GetWarningIcon(Module *this)

{
  bool bVar1;
  DesignStatusBuffer *pDVar2;
  code *pcVar3;
  undefined1 local_1c [4];
  Darray_L_DesignStatusMessage_G_ local_18;
  
  pDVar2 = (DesignStatusBuffer *)(**(code **)(this->_pad_0x0_0 + 0xdc))(local_1c,0);
  bVar1 = DesignStatusBuffer__IsOperational(pDVar2);
  Darray_L_DesignStatusMessage_G___dtor(&local_18);
  if (!bVar1) {
    return Icons__Error;
  }
  pDVar2 = (DesignStatusBuffer *)(**(code **)(this->_pad_0x0_0 + 0xdc))(local_1c,0);
  bVar1 = DesignStatusBuffer__HasWarnings(pDVar2);
  Darray_L_DesignStatusMessage_G___dtor(&local_18);
  pcVar3 = (long long int (*)())((_func_void *)0x0);
  if (bVar1) {
    pcVar3 = (long long int (*)())(Icons__Warning);
  }
  return (_func_void *)(pcVar3);
}

//==== 005cee00 HasRadiationShielding ====

/* public: bool __thiscall Module__HasRadiationShielding(void)const  */

bool __thiscall Module__HasRadiationShielding(Module *this)

{
  int *piVar1;
  int iVar2;
  undefined1 local_4c [24];
  undefined1 local_34 [24];
  undefined1 local_1c [24];
  
  piVar1 = (int *)(**(code **)(this->_pad_0x0_0 + 0xd0))(local_1c);
  if (*piVar1 != 0) {
    iVar2 = (**(code **)(this->_pad_0x0_0 + 0xd0))(local_34);
    if (0.0 < *(double *)(iVar2 + 0x10)) {
      iVar2 = (**(code **)(this->_pad_0x0_0 + 0xd0))(local_4c);
      if (0.0 < *(double *)(iVar2 + 8)) {
        return true;
      }
    }
  }
  return false;
}

//==== 005ceec0 IsPropertyReadOnly_005ceec0 ====


/* public: virtual bool __thiscall Module__IsPropertyReadOnly(struct util__ClassMember const &)const
    */

bool __thiscall Module__IsPropertyReadOnly(Module *this,ClassMember *param_1)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  
  if ((param_1->Name).Capacity < 1) {
    pcVar3 = "";
  }
  else {
    pcVar3 = (param_1->Name).Data;
  }
  for (pcVar2 = "UsesCustomName"; (pcVar2[(int)(pcVar3 + -0x924ad0)] != '\0' || (*pcVar2 != '\0'));
      pcVar2 = pcVar2 + 1) {
    if (pcVar2[(int)(pcVar3 + -0x924ad0)] != *pcVar2) {
      bVar1 = EditorReflectable__IsPropertyReadOnly((EditorReflectable *)this,param_1);
      if (bVar1) {
        return true;
      }
      return bVar1;
    }
  }
  return true;
}





//==== 005cef10 Print_005cef10 ====

/* public: virtual class util__Str_L_char_G_ __thiscall Module__Print(void)const  */

Str_L_char_G_ * __thiscall Module__Print(Module *this,Str_L_char_G_ *__return_storage_ptr__)

{
  Darray_L_struct_InfoBox_G_ *pDVar1;
  Darray_L_struct_InfoBox_G_ *pDVar2;
  Str_L_char_G_ *pSVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  char *pcVar6;
  undefined **local_4c;
  InfoBox *local_48;
  Str_L_char_G_ local_3c;
  void *local_30 [3];
  undefined **local_24;
  InfoBox *local_20;
  Darray_L_InfoBox_G_ local_14;
  
  pDVar1 = (Darray_L_struct_InfoBox_G_ *)(**(code **)(this->_pad_0x0_0 + 0xec))(&local_4c);
  pDVar2 = (Darray_L_struct_InfoBox_G_ *)(**(code **)(this->_pad_0x0_0 + 0xe8))(&local_24);
  local_14._pad_0x0_0 = 0;
  local_14.Data = (InfoBox *)0x0;
  local_14.Size = 0;
  local_14.Capacity = 0;
  util__Darray_L_InfoBox_G___Darray_L_InfoBox_G_(&local_14,pDVar2);
  util__Darray_L_InfoBox_G___op_iadd(&local_14,pDVar1);
  pSVar3 = ConvertInfoBoxesToString(&local_3c,&local_14);
  if (pSVar3->Capacity < 1) {
    pcVar6 = "";
  }
  else {
    pcVar6 = pSVar3->Data;
  }
  puVar4 = (undefined4 *)(**(code **)(this->_pad_0x0_0 + 0x48))(local_30);
  if ((int)puVar4[1] < 1) {
    puVar5 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
  }
  else {
    puVar5 = (undefined1 *)*puVar4;
  }
  util__Printf(__return_storage_ptr__,(wchar_t*)("%s\n\n%s"),puVar5,pcVar6);
  if (local_30[0] != (void *)0x0) {
    port_op_delete(local_30[0]);
    local_30[0] = (void *)0x0;
  }
  if (local_3c.Data != (char *)0x0) {
    port_op_delete(local_3c.Data);
    local_3c.Data = (char *)0x0;
  }
  local_14._pad_0x0_0 = (int)&vftable_127;
  if (local_14.Data != (InfoBox *)0x0) {
    InfoBox___vector_deleting_destructor(local_14.Data,3);
  }
  local_14.Data = (InfoBox *)0x0;
  local_14._pad_0x0_0 = (int)&vftable;
  *(uint32_t *)&local_24 = (uint32_t)(uintptr_t)(&vftable_127);
  if (local_20 != (InfoBox *)0x0) {
    InfoBox___vector_deleting_destructor(local_20,3);
  }
  *(uint32_t *)&local_20 = (uint32_t)(uintptr_t)((InfoBox *)0x0);
  *(uint32_t *)&local_24 = (uint32_t)(uintptr_t)(&vftable);
  *(uint32_t *)&local_4c = (uint32_t)(uintptr_t)(&vftable_127);
  if (local_48 != (InfoBox *)0x0) {
    InfoBox___vector_deleting_destructor(local_48,3);
  }
  return __return_storage_ptr__;
}

//==== 005cf040 RemainsEntirelyWithinArmor ====

/* public: bool __thiscall Module__RemainsEntirelyWithinArmor(void)const  */

bool __thiscall Module__RemainsEntirelyWithinArmor(Module *this)

{
  char cVar1;
  int iVar2;
  undefined1 local_34 [48];
  
  cVar1 = (**(code **)(this->_pad_0x0_0 + 0x78))();
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(this->_pad_0x0_0 + 0xac))(local_34);
    if (0.0 < *(double *)(iVar2 + 0x28)) {
      return false;
    }
  }
  return true;
}

//==== 005cf080 RenderInitialState_005cf080 ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void  Module__RenderInitialState(double,class CameraManager *,class
   util__Darray_L_classutil__SharedPtr_L_classArmorTextureHandler_G__G_ const &,double,struct
   util__Vec3_L_double_G_)const  */

void 
Module__RenderInitialState
          (Module *this,double param_1,CameraManager *param_2,
          Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G_ *param_3,double param_4,Vec3_L_double_G_ param_5
          )

{
  FUN_005cab80(&this[1]._pad_0x8_2,param_3);
  return;
}

//==== 005cf0a0 RenderInitialStateSimple_005cf0a0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall Module__RenderInitialStateSimple(struct util__Vec3_L_double_G_)const
    */

void __thiscall Module__RenderInitialStateSimple(Module *this,Vec3_L_double_G_ param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  undefined4 *puVar2;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(uint32_t *)&local_c = 0;
  iVar1 = (**(code **)(uintptr_t)(this[1]._pad_0x8_2 + 0xc))();
  if (local_c < iVar1) {
    do {
      puVar2 = (undefined4 *)(**(code **)this[1]._pad_0x8_2)(&local_c);
      GameModel__RenderSimple((GameModel *)*puVar2);
      *(uint32_t *)&local_c = local_c + 1;
      iVar1 = (**(code **)(uintptr_t)(this[1]._pad_0x8_2 + 0xc))();
    } while (local_c < iVar1);
  }
  return;
}

//==== 005cf100 RequiresCooling ====

/* public: bool __thiscall Module__RequiresCooling(void)const  */

bool __thiscall Module__RequiresCooling(Module *this)

{
  int iVar1;
  undefined1 local_34 [48];
  
  iVar1 = (**(code **)(this->_pad_0x0_0 + 200))(local_34);
  return (bool)*(undefined1 *)(iVar1 + 0x28);
}

//==== 005cf120 RequiresCrew ====


/* public: bool __thiscall Module__RequiresCrew(void)const  */

bool __thiscall Module__RequiresCrew(Module *this)

{
  double dVar1;
  
  dVar1 = GetCrewCountRequired(this);
  return 0.0 < dVar1;
}





//==== 005cf150 RequiresPower ====

/* public: bool __thiscall Module__RequiresPower(void)const  */

bool __thiscall Module__RequiresPower(Module *this)

{
  float10 fVar1;
  
  fVar1 = (float10)(**(code **)(this->_pad_0x0_0 + 0x9c))();
  return 0.0 < (double)fVar1;
}

//==== 005cf180 ShouldGenerateStatusWidget ====

/* public: bool  Module__ShouldGenerateStatusWidget(class util__Darray_L_class_util__WeakPtr_L_structModuleCompartment_G__G_ const &,bool,bool)const  */

bool 
Module__ShouldGenerateStatusWidget
          (Module *this,Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *param_1,bool param_2
          ,bool param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined3 in_stack_00000009;
  Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G___G_
  local_18 [16];
  uint local_8;
  
  local_8 = 0;
  if (param_2) {
    cVar1 = (**(code **)(this->_pad_0x0_0 + 0x10c))();
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(this->_pad_0x0_0 + 0x11c))();
      if (cVar1 == '\0') {
        iVar3 = (**(code **)(*(int *)param_1 + 0xc))();
        if (0 < iVar3) {
          _param_2 = 0;
          puVar4 = (undefined4 *)(*(code *)**(undefined4 **)param_1)(&param_2);
          if ((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) {
            bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]);
            if (!bVar2) {
              *puVar4 = 0;
            }
          }
          piVar5 = (int *)(**(code **)(*(int *)*puVar4 + 0x90))(local_18);
          local_8 = 1;
          iVar3 = (**(code **)(uintptr_t)(*piVar5 + 0xc))();
          if (0 < iVar3) goto LAB_005cf210;
        }
LAB_005cf23b:
        bVar2 = false;
        goto LAB_005cf212;
      }
    }
  }
  else if (!param_3) {
    cVar1 = (**(code **)(this->_pad_0x0_0 + 0x78))();
    if (cVar1 == '\0') goto LAB_005cf23b;
  }
LAB_005cf210:
  bVar2 = true;
LAB_005cf212:
  if ((local_8 & 1) != 0) {
    util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__class_util__Delegate_void__class_util__Str_char________Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__class_util__Delegate_void__class_util__Str_char(local_18);
  }
  return bVar2;
}

//==== 005cf320 SortModulesByType ====


/* public: static class util__Darray_L_classModuleconst_P_G_ __cdecl Module__SortModulesByType(class
   util__Darray_L_classModuleconst_P_G_ const &) */

Darray_L_class_Module_const_P_G_ * __cdecl
Module__SortModulesByType(Darray_L_class_Module_const_P_G_ *param_1)

{
  FUN_005cb2d0(param_1);
  return param_1;
}





//==== 005cf340 StaticGetPropertyGetters_005cf340 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cdouble___thiscall_util__Reflectable___P__void_const_G__G_ __thiscall Module__StaticGetPropertyGetters(void)const  */

void * __thiscall Module__StaticGetPropertyGetters(Module *this)

{
  undefined8 stack0xffffffc0;
  undefined8 stack0xfffffffc;
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ *pSVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  Str_L_char_G_ *pSVar7;
  int iVar8;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cvoid____cdecl_P__void__G___G_ *in_stack_00000004;
  int iVar9;
  Maybe_L_int_G_ *pMVar10;
  int iStack_3c;
  undefined1 auStack_24 [8];
  int iStack_1c;
  undefined4 uStack_18;
  Maybe_L_int_G_ MStack_14;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_0096bbec) &&
     (_Init_thread_header(&DAT_0096bbec), DAT_0096bbec == -1)) {
    puVar4 = (undefined4 *)port_op_new(0xa4);
    if (puVar4 == (undefined4 *)0x0) {
      DAT_0095f37c = (undefined4)(uintptr_t)((Str_L_char_G_ *)0x0);
    }
    else {
      DAT_0095f37c = (undefined4)(uintptr_t)((Str_L_char_G_ *)(puVar4 + 1));
      *puVar4 = 10;
      iVar9 = 10;
      pSVar2 = (Str_L_char_G_ *)(uintptr_t)(DAT_0095f37c);
      do {
        pSVar2->Data = (char *)0x0;
        pSVar2->Capacity = 0;
        pSVar2->Length = 0;
        pSVar2[1].Data = (char *)0x0;
        iVar9 = iVar9 + -1;
        pSVar2 = (Str_L_char_G_ *)&pSVar2[1].Capacity;
      } while (iVar9 != 0);
    }
    iVar9 = 0;
    if (0 < DAT_0095f384) {
      (*(uint32_t*)&(auStack_24)) = (uint32_t)(uintptr_t)((char *)0x0);
      iVar8 = 0;
      (*(uint32_t*)((char*)&(auStack_24)+4)) = (uint32_t)(uintptr_t)((void *)0x0);
      iStack_1c = 0;
      uStack_18 = 0;
      do {
        pSVar2 = (Str_L_char_G_ *)((int)(int)(uintptr_t)(DAT_0095f37c) + iVar8);
        util__Str_char___operator__o8(pSVar2,(Str_L_char_G_ *)auStack_24);
        iVar9 = iVar9 + 1;
        pSVar2[1].Data = (char *)0x0;
        iVar8 = iVar8 + 0x10;
      } while (iVar9 < DAT_0095f384);
    }
    atexit(FUN_008f04d0);
    iStack_3c = 0x5cf6bd;
    _Init_thread_footer(&DAT_0096bbec);
  }
  if (DAT_0095f380 == 0) {
    pSVar7 = (Str_L_char_G_ *)&stack0xffffffc0;
    MStack_14.Data = 0;
    (*(uint32_t*)((char*)&(MStack_14)+4)) = (*(uint32_t*)((char*)&(MStack_14)+4)) & 0xffffff00;
    pMVar10 = &MStack_14;
    iVar9 = 3;
    pSVar2 = (Str_L_char_G_ *)util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetMass_kg");
    util__Str_char___SubStr(pSVar2,pSVar7,iVar9,pMVar10);
    FUN_005cb950();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
    pSVar7 = (Str_L_char_G_ *)&stack0xffffffc0;
    MStack_14.Data = 0;
    (*(uint32_t*)((char*)&(MStack_14)+4)) = (*(uint32_t*)((char*)&(MStack_14)+4)) & 0xffffff00;
    pMVar10 = &MStack_14;
    iVar9 = 3;
    pSVar2 = (Str_L_char_G_ *)util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetTotalCost_c")
    ;
    util__Str_char___SubStr(pSVar2,pSVar7,iVar9,pMVar10);
    FUN_005cb950();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
    pSVar7 = (Str_L_char_G_ *)&stack0xffffffc0;
    MStack_14.Data = 0;
    (*(uint32_t*)((char*)&(MStack_14)+4)) = (*(uint32_t*)((char*)&(MStack_14)+4)) & 0xffffff00;
    pMVar10 = &MStack_14;
    iVar9 = 3;
    pSVar2 = (Str_L_char_G_ *)
             util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetCrewCountRequired");
    util__Str_char___SubStr(pSVar2,pSVar7,iVar9,pMVar10);
    FUN_005cb950();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
    pSVar7 = (Str_L_char_G_ *)&stack0xffffffc0;
    MStack_14.Data = 0;
    (*(uint32_t*)((char*)&(MStack_14)+4)) = (*(uint32_t*)((char*)&(MStack_14)+4)) & 0xffffff00;
    pMVar10 = &MStack_14;
    iVar9 = 3;
    pSVar2 = (Str_L_char_G_ *)
             util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetPowerRequired_W");
    util__Str_char___SubStr(pSVar2,pSVar7,iVar9,pMVar10);
    FUN_005cb950();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
    pSVar7 = (Str_L_char_G_ *)&stack0xffffffc0;
    MStack_14.Data = 0;
    (*(uint32_t*)((char*)&(MStack_14)+4)) = (*(uint32_t*)((char*)&(MStack_14)+4)) & 0xffffff00;
    pMVar10 = &MStack_14;
    iVar9 = 3;
    pSVar2 = (Str_L_char_G_ *)
             util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetTotalRadiation_W");
    util__Str_char___SubStr(pSVar2,pSVar7,iVar9,pMVar10);
    FUN_005cb950();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
  }
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = (undefined **)(&PTR_vftable_0095f378);
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(int *)(in_stack_00000004 + 0xc) = DAT_0095f384;
  (*(uint32_t*)((char*)&(MStack_14)+4)) = (**(code **)(uintptr_t)(PTR__vftable__0095f378 + 0xc))();
  util__Darray_struct_util__tuple2_class_util__Str_char__void____cdecl___void______SetSize
            (in_stack_00000004,(int *)&MStack_14.IsValidData);
  uVar6 = *(uint *)(in_stack_00000004 + 0xc);
  uVar5 = -(uint)((int)((ulonglong)uVar6 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 0x10);
  puVar3 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar5) | uVar5 + 4);
  if (puVar3 == (uint *)0x0) {
    pSVar2 = (Str_L_char_G_ *)0x0;
  }
  else {
    *puVar3 = uVar6;
    pSVar2 = (Str_L_char_G_ *)(puVar3 + 1);
    pSVar7 = pSVar2;
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      pSVar7->Data = (char *)0x0;
      pSVar7->Capacity = 0;
      pSVar7->Length = 0;
      pSVar7[1].Data = (char *)0x0;
      pSVar7 = (Str_L_char_G_ *)&pSVar7[1].Capacity;
    }
  }
  *(Str_L_char_G_ **)(in_stack_00000004 + 4) = pSVar2;
  pSVar7 = (Str_L_char_G_ *)(uintptr_t)(DAT_0095f37c);
  if (DAT_0095f37c != (Str_L_char_G_ *)(DAT_0095f380 * 0x10 + (int)DAT_0095f37c)) {
    do {
      util__Str_char___operator__o8(pSVar2,pSVar7);
      pSVar1 = pSVar7 + 1;
      pSVar7 = (Str_L_char_G_ *)&pSVar7[1].Capacity;
      pSVar2[1].Data = pSVar1->Data;
      pSVar2 = (Str_L_char_G_ *)&pSVar2[1].Capacity;
    } while (pSVar7 != (Str_L_char_G_ *)(DAT_0095f380 * 0x10 + (int)DAT_0095f37c));
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return 0;
}





//==== 005cf6d0 SuppliesCrew ====

/* public: bool __thiscall Module__SuppliesCrew(void)const  */

bool __thiscall Module__SuppliesCrew(Module *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->_pad_0x0_0 + 0xbc))();
}

//==== 005cf6e0 UpdateName ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall Module__UpdateName(class DataParser *) */

void __thiscall Module__UpdateName(Module *this,DataParser *param_1)

{
  undefined8 stack0xfffffffc;
  char cVar1;
  bool bVar2;
  char *pcVar3;
  Str_L_char_G_ *pSVar4;
  int iVar5;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  cVar1 = (**(code **)(this->_pad_0x0_0 + 0x34))();
  if ((*(char *)&this[1].ModuleMemoizationHandlerInstance.ResetFunctions.Data == '\0') &&
     (cVar1 != '\0')) {
    local_20.Length = 0;
    local_20.Data = (char *)0x0;
    local_20.Capacity = 0;
    (**(code **)(this->_pad_0x0_0 + 0x124))(&local_20);
    local_14.Length = 0;
    local_14.Data = (char *)0x0;
    local_14.Capacity = 0;
    util__Str_char___Str_char(&local_14,&local_20);
    iVar5 = 1;
    do {
      bVar2 = util__SimpleSerializationManager__IsDatumNameUnique
                        ((SimpleSerializationManager *)param_1,(Reflectable *)this,&local_14);
      if (bVar2) goto LAB_005cf7c8;
      iVar5 = iVar5 + 1;
      pcVar3 = "";
      if (0 < local_20.Capacity) {
        pcVar3 = local_20.Data;
      }
      pSVar4 = util__Printf(&local_2c,(wchar_t*)("%s %i"),pcVar3,iVar5);
      util__Str_char___operator__o8(&local_14,pSVar4);
      if (local_2c.Data != (char *)0x0) {
        port_op_delete(local_2c.Data);
        local_2c.Data = (char *)0x0;
      }
    } while (iVar5 < 0x7fffffff);
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\modules\\modules.cpp",0x1ca,
                    "Unique",(char *)0x0);
    DebugBreak();
LAB_005cf7c8:
    util__SimpleSerializationManager__RenameDatum
              ((SimpleSerializationManager *)param_1,(Reflectable *)this,&local_14);
    if (local_14.Data != (char *)0x0) {
      port_op_delete(local_14.Data);
      (*(uint64_t*)&(local_14)) = (*(uint64_t*)&(local_14)) & 0xffffffff00000000;
    }
    if (local_20.Data != (char *)0x0) {
      port_op_delete(local_20.Data);
    }
  }
  return;
}

//==== 005cf810 GetComposition_005cf810 ====


/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   CylindricalCoolerSubModule__GetComposition(void)const  */

Darray_L_struct_MaterialConstituent_G_ * __thiscall
CylindricalCoolerSubModule__GetComposition(CylindricalCoolerSubModule *this)

{
  undefined8 stack0x00000004;
  int *piVar1;
  double dVar2;
  Material *pMVar3;
  Darray_L_struct_MaterialConstituent_G_ *this_00;
  bool bVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  Darray_L_struct_MaterialConstituent_G_ *in_stack_00000004;
  undefined4 uStack_28;
  int iStack_18;
  double dStack_c;
  
  this_00 = in_stack_00000004;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = (undefined **)(&vftable_75);
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 1;
  puVar5 = (undefined4 *)port_op_new(0x10);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = 0;
    *(undefined8 *)(puVar5 + 2) = 0;
  }
  iVar7 = 0;
  *(undefined4 **)(in_stack_00000004 + 4) = puVar5;
  if (0 < *(int *)(in_stack_00000004 + 0xc)) {
    iVar6 = 0;
    do {
      iVar6 = iVar6 + 0x10;
      iVar7 = iVar7 + 1;
      puVar5 = (undefined4 *)(*(int *)(in_stack_00000004 + 4) + -0x10 + iVar6);
      *puVar5 = 0;
      puVar5[1] = uStack_28;
      puVar5[2] = 0;
      puVar5[3] = 0;
    } while (iVar7 < *(int *)(in_stack_00000004 + 0xc));
  }
  dVar2 = (this->CachedDimensions_m).Radius;
  dStack_c = (this->CachedDimensions_m).Height / 0.001;
  dVar8 = util__Floor(&dStack_c);
  iVar7 = 1;
  if (1 < (int)dVar8) {
    iVar7 = (int)dVar8;
  }
  pMVar3 = this->CachedCoolant;
  iVar6 = *(int *)(in_stack_00000004 + 8);
  dVar8 = pMVar3->Density_kg__m3;
  in_stack_00000004 = (Darray_L_struct_MaterialConstituent_G_ *)(iVar6 + 1);
  util__Darray_struct_MaterialConstituent___SetSize(this_00,(int *)&stack0x00000004);
  bVar4 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                    ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar6);
  if (bVar4) {
    piVar1 = (int *)(*(int *)(this_00 + 4) + -0x10 + *(int *)(this_00 + 8) * 0x10);
    *piVar1 = (int)pMVar3;
    piVar1[1] = iStack_18;
    *(double *)(piVar1 + 2) =
         (double)iVar7 * dVar2 * 6.283185307179586 * 3.141592653589793e-06 * dVar8;
  }
  return this_00;
}





//==== 005cf940 GetReflectionInfo_005cf940 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   CylindricalCoolerSubModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall
CylindricalCoolerSubModule__GetReflectionInfo(CylindricalCoolerSubModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_e918c5a1__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_e918c5a1__thread_safe_static_guard_0__);
    if ( cde_l2_e918c5a1__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_7460a30c_ReflectionInfo) = &vftable_208;
      _Init_thread_footer(& cde_l2_e918c5a1__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_7460a30c_ReflectionInfo;
}





//==== 005cf950 scalar_deleting_destructor_005cf950 ====

/* public: virtual void * __thiscall AudioSettings:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall AudioSettings___scalar_deleting_destructor(AudioSettings *this,uint param_1)

{
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x30);
  }
  return this;
}

//==== 005cf990 GetTypeName_005cf990 ====


/* public: virtual class util__Str_L_char_G_ 
   CylindricalCoolerSubModule__ReflectionInfoStruct_class_CylindricalCoolerSubModule___GetTypeName(void)const  */

Str_L_char_G_ * 
CylindricalCoolerSubModule__ReflectionInfoStruct_class_CylindricalCoolerSubModule___GetTypeName
          (ReflectionInfoStruct_L_class_CylindricalCoolerSubModule_G_ *this,
          Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"CylindricalCoolerSubModule");
  return __return_storage_ptr__;
}





//==== 005cf9b0 GetMembers_005cf9b0 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   CylindricalCoolerSubModule__ReflectionInfoStruct_class_CylindricalCoolerSubModule___GetMembers(void)const  */

undefined4 
CylindricalCoolerSubModule__ReflectionInfoStruct_class_CylindricalCoolerSubModule___GetMembers
          (ReflectionInfoStruct_L_class_CylindricalCoolerSubModule_G_ *this)

{
  undefined4 in_stack_00000004;
  
  StaticGetMembers();
}





//==== 005cf9d0 GetMember_005cf9d0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   CylindricalCoolerSubModule__ReflectionInfoStruct_class_CylindricalCoolerSubModule___GetMember(class util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
CylindricalCoolerSubModule__ReflectionInfoStruct_class_CylindricalCoolerSubModule___GetMember
          (ReflectionInfoStruct_L_class_CylindricalCoolerSubModule_G_ *this,Str_L_char_G_ *param_1)

{
  StaticGetMember(param_1);
  return param_1;
}





//==== 005cf9f0 GetFactory_005cf9f0 ====


/* public: virtual class util__Reflectable * (__cdecl*
   CylindricalCoolerSubModule__ReflectionInfoStruct_class_CylindricalCoolerSubModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall CylindricalCoolerSubModule__ReflectionInfoStruct_class_CylindricalCoolerSubModule___GetFactory
          (ReflectionInfoStruct_L_class_CylindricalCoolerSubModule_G_ *this)

{
  return StaticFactory;
}





//==== 005cfce0 GetCoolantTotalVolume_m3 ====


/* public: double __thiscall CylindricalCoolerSubModule__GetCoolantTotalVolume_m3(void)const  */

double __thiscall
CylindricalCoolerSubModule__GetCoolantTotalVolume_m3(CylindricalCoolerSubModule *this)

{
  double dVar1;
  int iVar2;
  double dVar3;
  double dStack_c;
  
  dVar1 = (this->CachedDimensions_m).Radius;
  dStack_c = (this->CachedDimensions_m).Height / 0.001;
  dVar3 = util__Floor(&dStack_c);
  iVar2 = 1;
  if (1 < (int)dVar3) {
    iVar2 = (int)dVar3;
  }
  return (double)iVar2 * dVar1 * 6.283185307179586 * 3.141592653589793e-06;
}





//==== 005d00b0 GetExhaustPlumeModelRatio_005d00b0 ====


/* public: double __thiscall GasExpansionPlume__GetExhaustPlumeModelRatio(double)const  */

double __thiscall
GasExpansionPlume__GetExhaustPlumeModelRatio(GasExpansionPlume *this,double param_1)

{
  Maybe_L_double_G_ *pMVar1;
  double dVar2;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [16];
  double dStack_14;
  double dStack_c;
  
  (*(uint64_t*)((char*)&(auStack_34)+8)) = GetPlumeVisibleLength_m(this);
  (*(uint64_t*)((char*)&(auStack_34)+8)) = (double)(*(uint64_t*)((char*)&(auStack_34)+8)) + param_1;
  dVar2 = GetPlumeVisibleLength_m(this);
  (*(uint64_t*)((char*)&(auStack_24)+8)) = GetPlumeRadius_m(this,dVar2);
  dStack_14 = GetFinalExhaustLength_m(this);
  dStack_c = GetPlumeVisibleLength_m(this);
  if (dStack_c <= dStack_14) {
    dStack_c = dStack_14;
  }
  dStack_c = dStack_c + param_1;
  dVar2 = GetPlumeVisibleLength_m(this);
  dStack_14 = GetPlumeRadius_m(this,dVar2);
  dVar2 = GetFinalExhaustRadius_m(this);
  if (dVar2 <= dStack_14) {
    dVar2 = dStack_14;
  }
  param_1 = (double)(*(uint64_t*)((char*)&(auStack_24)+8)) * (double)(*(uint64_t*)((char*)&(auStack_24)+8)) +
            (double)(*(uint64_t*)((char*)&(auStack_34)+8)) * (double)(*(uint64_t*)((char*)&(auStack_34)+8));
  dStack_14 = dVar2;
  pMVar1 = util__Sqrt((Maybe_L_double_G_ *)auStack_34,&param_1);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  (*(uint64_t*)((char*)&(auStack_34)+8)) = pMVar1->Data;
  param_1 = dStack_14 * dStack_14 + dStack_c * dStack_c;
  pMVar1 = util__Sqrt((Maybe_L_double_G_ *)auStack_24,&param_1);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  (*(uint64_t*)((char*)&(auStack_34)+8)) = (double)(*(uint64_t*)((char*)&(auStack_34)+8)) / pMVar1->Data;
  if ((double)(*(uint64_t*)((char*)&(auStack_34)+8)) <= 0.0) {
    (*(uint64_t*)((char*)&(auStack_34)+8)) = 0.0;
  }
  if (1.0 <= (double)(*(uint64_t*)((char*)&(auStack_34)+8))) {
    (*(uint64_t*)((char*)&(auStack_34)+8)) = 1.0;
  }
  return (double)(*(uint64_t*)((char*)&(auStack_34)+8));
}





//==== 005d0a00 GetShimmerExponent ====


/* public: static double __cdecl GasExpansionPlume__GetShimmerExponent(void) */

double __cdecl GasExpansionPlume__GetShimmerExponent(void)

{
  return 0.5;
}





//==== 005d0a10 GetThermalConductance_W__K ====

/* public: double __thiscall CylindricalCoolerSubModule__GetThermalConductance_W__K(void)const  */

double __thiscall
CylindricalCoolerSubModule__GetThermalConductance_W__K(CylindricalCoolerSubModule *this)

{
  Material *pMVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double local_24;
  double local_1c;
  double local_14;
  double local_c;
  
  pMVar1 = this->CachedCoolant;
  if (((0.0 < pMVar1->Density_kg__m3) && (0.0 < (double)((pMVar1->Dissociation).Data._pad_0x8_2))
     && (0.0 < pMVar1->Resistivity_Ohm_m)) ) {
    *(uint32_t *)&local_c = Material__GetPrandtlNumber(pMVar1);
    if (0.0 < local_c) goto LAB_005d0a7c;
  }
  util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\modules\\othermodules\\commonsubmodules.cpp"
                  ,0xa0,
                  "CachedCoolant->Density_kg__m3 > 0 && CachedCoolant->Viscosity_Pa_s > 0 && CachedCoolant->ThermalConductivity_W__m_K > 0 && CachedCoolant->GetPrandtlNumber() > 0"
                  ,(char *)0x0);
  DebugBreak();
LAB_005d0a7c:
  local_1c = (this->CachedCoolantMassFlowRate_kg__s / this->CachedCoolant->Density_kg__m3) /
             3.1415926535897933e-06;
  *(uint32_t *)&local_24 = (this->CachedDimensions_m).Radius * 6.283185307179586;
  *(uint32_t *)&local_c = (this->CachedDimensions_m).Height / 0.001;
  *(uint32_t *)&local_14 = util__Floor(&local_c);
  iVar2 = 1;
  if (1 < (int)local_14) {
    iVar2 = (int)local_14;
  }
  pMVar1 = this->CachedCoolant;
  dVar3 = (double)iVar2 * local_24;
  dVar8 = 0.001;
  dVar5 = *(double *)&(pMVar1->Dissociation).Data._pad_0x8_2;
  dVar7 = pMVar1->Density_kg__m3;
  dVar6 = pMVar1->Resistivity_Ohm_m;
  dVar9 = local_1c;
  dVar4 = Material__GetPrandtlNumber(pMVar1);
  local_14 = Mechanics__GetInternalLaminarPipeFlowHeatTransferCoefficient_W__m2_K
                       (dVar4,dVar6,dVar7,dVar5,dVar8,dVar3,dVar9);
  *(uint32_t *)&local_1c = (this->CachedDimensions_m).Radius * 6.283185307179586;
  *(uint32_t *)&local_24 = (this->CachedDimensions_m).Height / 0.001;
  dVar5 = util__Floor(&local_24);
  iVar2 = 1;
  if (1 < (int)dVar5) {
    iVar2 = (int)dVar5;
  }
  return (double)iVar2 * local_1c * 0.006283185307179587 * 0.5 * local_14;
}

