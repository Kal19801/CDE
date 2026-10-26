
/* public: class util::Str<char> __thiscall LaserModule::GetQuickFluenceInfo(void)const  */

Str<char> * __thiscall
LaserModule::GetQuickFluenceInfo(LaserModule *this,Str<char> *__return_storage_ptr__)

{
  Str<char> SVar1;
  Str<char> SVar2;
  Str<char> SVar3;
  Str<char> SVar4;
  Str<char> *pSVar5;
  LocStr *this_00;
  int unaff_EDI;
  char *pcVar6;
  double dVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  void *local_e0 [3];
  void *local_d4;
  Str<char> local_c8;
  Str<char> local_bc;
  Str<char> local_b0;
  Str<char> local_a4;
  Str<char> local_98;
  Str<char> local_8c;
  Str<char> local_80;
  Str<char> local_74;
  Str<char> local_68;
  Str<char> local_5c;
  Str<char> local_50;
  undefined1 local_44 [12];
  Str<char> local_38;
  Str<char> *local_2c;
  undefined8 local_28;
  Str<char> local_20;
  Str<char> local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_2c = __return_storage_ptr__;
  dVar7 = GetIntensityAtRange_W__m2(this,__real_3ff0000000000000);
  local_14.Capacity = SUB84(dVar7,0);
  local_14.Length = (int)((ulonglong)dVar7 >> 0x20);
  dVar7 = GetIntensityAtRange_W__m2(this,__real_4024000000000000);
  local_20.Capacity = SUB84(dVar7,0);
  local_20.Length = (int)((ulonglong)dVar7 >> 0x20);
  local_44._4_8_ = GetIntensityAtRange_W__m2(this,__real_4059000000000000);
  pcVar8 = (char *)0x647311;
  local_28 = GetIntensityAtRange_W__m2(this,__real_408f400000000000);
  util::Str<char>::Str<char>(&local_c8,"Extreme_W__m2");
  util::Str<char>::Str<char>(&local_74,"Long_W__m2");
  util::Str<char>::Str<char>(&local_68,"Close_W__m2");
  util::Str<char>::Str<char>(&local_5c,"PointBlank_W__m2");
  util::Str<char>::Str<char>(&local_bc,"\n");
  pcVar10 = "LaserFluenceChart Tooltip";
  iVar9 = 0x647368;
  util::Str<char>::Str<char>(&local_50,"LaserFluenceChart Tooltip");
  GetUnitsOfType((Str<char> *)&stack0xffffff08,&local_c8);
  SVar1.Capacity = (int)pcVar10;
  SVar1.Data = (char *)iVar9;
  SVar1.Length = unaff_EDI;
  Print(&local_b0,(double)CONCAT44(pcVar8,(int)((ulonglong)local_28 >> 0x20)),SVar1);
  GetUnitsOfType((Str<char> *)&stack0xffffff08,&local_74);
  SVar2.Capacity = (int)pcVar10;
  SVar2.Data = (char *)iVar9;
  SVar2.Length = unaff_EDI;
  pSVar5 = Print(&local_a4,(double)CONCAT44(pcVar8,SUB84(local_44._4_8_,4)),SVar2);
  if (pSVar5->Capacity < 1) {
    pcVar6 = "";
  }
  else {
    pcVar6 = pSVar5->Data;
  }
  local_28 = (double)CONCAT44(pcVar6,(undefined4)local_28);
  GetUnitsOfType((Str<char> *)&stack0xffffff08,&local_68);
  SVar3.Capacity = (int)pcVar10;
  SVar3.Data = (char *)iVar9;
  SVar3.Length = unaff_EDI;
  pSVar5 = Print(&local_98,(double)CONCAT44(pcVar8,local_20.Length),SVar3);
  if (pSVar5->Capacity < 1) {
    pcVar6 = "";
  }
  else {
    pcVar6 = pSVar5->Data;
  }
  GetUnitsOfType((Str<char> *)&stack0xffffff08,&local_5c);
  SVar4.Capacity = (int)pcVar10;
  SVar4.Data = (char *)iVar9;
  SVar4.Length = unaff_EDI;
  pSVar5 = Print(&local_8c,(double)CONCAT44(pcVar8,local_14.Length),SVar4);
  if (pSVar5->Capacity < 1) {
    pcVar8 = "";
  }
  else {
    pcVar8 = pSVar5->Data;
  }
  local_38.Data = (char *)0x0;
  local_38.Capacity = 0;
  local_38.Length = 0;
  this_00 = (LocStr *)util::LocStr::LocStr((LocStr *)local_e0,&local_50,&local_38);
  pSVar5 = util::LocStr::operator*(this_00);
  local_14.Length = 0;
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  util::Str<char>::Str<char>(&local_14,pSVar5);
  util::Str<char>::operator+=(&local_14,&local_bc);
  util::Str<char>::Str<char>((Str<char> *)local_44,&local_14);
  if (local_14.Data != (char *)0x0) {
    operator_delete__(local_14.Data);
    local_14.Data = (char *)0x0;
  }
  pSVar5 = util::Printf(&local_80,"(%i km): %s\n(%i km): %s\n(%i km): %s\n(%i km): %s",1,pcVar8,10,
                        pcVar6,100);
  local_20.Length = 0;
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  util::Str<char>::Str<char>(&local_20,(Str<char> *)local_44);
  util::Str<char>::operator+=(&local_20,pSVar5);
  pSVar5 = local_2c;
  util::Str<char>::Str<char>(local_2c,&local_20);
  if (local_20.Data != (char *)0x0) {
    operator_delete__(local_20.Data);
  }
  if ((char *)local_44._0_4_ != (char *)0x0) {
    operator_delete__((void *)local_44._0_4_);
  }
  if (local_d4 != (void *)0x0) {
    operator_delete__(local_d4);
    local_d4 = (void *)0x0;
  }
  if (local_e0[0] != (void *)0x0) {
    operator_delete__(local_e0[0]);
    local_e0[0] = (void *)0x0;
  }
  if (local_38.Data != (char *)0x0) {
    operator_delete__(local_38.Data);
    local_38.Data = (char *)0x0;
  }
  if (local_80.Data != (char *)0x0) {
    operator_delete__(local_80.Data);
    local_80.Data = (char *)0x0;
  }
  if (local_8c.Data != (char *)0x0) {
    operator_delete__(local_8c.Data);
    local_8c.Data = (char *)0x0;
  }
  if (local_98.Data != (char *)0x0) {
    operator_delete__(local_98.Data);
    local_98.Data = (char *)0x0;
  }
  if (local_a4.Data != (char *)0x0) {
    operator_delete__(local_a4.Data);
    local_a4.Data = (char *)0x0;
  }
  if (local_b0.Data != (char *)0x0) {
    operator_delete__(local_b0.Data);
    local_b0.Data = (char *)0x0;
  }
  if (local_50.Data != (char *)0x0) {
    operator_delete__(local_50.Data);
    local_50.Data = (char *)0x0;
  }
  if (local_bc.Data != (char *)0x0) {
    operator_delete__(local_bc.Data);
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
  if (local_c8.Data != (char *)0x0) {
    operator_delete__(local_c8.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pSVar5;
}

