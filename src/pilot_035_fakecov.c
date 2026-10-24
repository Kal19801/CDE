/* pilot_035_fakecov.c - r11: 3 个 MethodCaller 模板实例化真身 (仅 fn-ptr 引用,
   无既有定义; orig ABI 从 disasm 实锤). 与 pilot_034 同构的批处理 TU. */
#include "port_prelude.h"

//==== 006267a0 MethodCallerConst__public__double___thiscall_CoilgunModule__GetChartAcceleration_m__s2_double_const__0 ====
/* r11-fakecov-fix */
/* disasm 6267a0: cdecl(obj@8, double@0xc); thiscall GetChartAcceleration(obj,d) */
double util__DelegateFactory_L_CoilgunModule_Cdouble_Cdouble_G___MethodCallerConst_L__public__double___thiscall_CoilgunModule__GetChartAcceleration_m__s2_double_const__C0__G_(void *param_1,double param_2)

{
  return CoilgunModule__GetChartAcceleration_m__s2(param_1,param_2);
}

//==== 0064fb10 MethodCallerConst__public__double___thiscall_RailgunModule__GetChartAcceleration_m__s2_double_const__0 ====
/* r11-fakecov-fix */
/* disasm 64fb10: 同 6267a0, Railgun 版 */
double util__DelegateFactory_L_RailgunModule_Cdouble_Cdouble_G___MethodCallerConst_L__public__double___thiscall_RailgunModule__GetChartAcceleration_m__s2_double_const__C0__G_(void *param_1,double param_2)

{
  return RailgunModule__GetChartAcceleration_m__s2(param_1,param_2);
}

//==== 00809490 MethodCaller__public__void___thiscall_Minimap__OnMarqueeSelect_struct_util__AABB_struct_util__Vec2_int_____ ====
/* r11-fakecov-fix */
/* disasm 809490: cdecl(obj@8, AABB@0xc); thiscall OnMarqueeSelect(obj,aabb) */
void util__DelegateFactory_L_Minimap_Cvoid_Cutil__AABB_L_util__Vec2_L_int_G___G___G___MethodCaller_L__public__void___thiscall_Minimap__OnMarqueeSelect_struct_util__AABB_L_struct_util__Vec2_L_int_G___G___G_(void *param_1,AABB_L_util__Vec2_L_int_G___G_ param_2)

{
  Minimap__OnMarqueeSelect(param_1,param_2);
}
