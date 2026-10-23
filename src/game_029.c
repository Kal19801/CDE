// Auto-generated from Ghidra decompilation
#include "port_prelude.h"

//==== 008e420b except_handler4 ====


_EXCEPTION_DISPOSITION __cdecl
_except_handler4(_EXCEPTION_RECORD *param_1,_EXCEPTION_REGISTRATION_RECORD *param_2,
                _CONTEXT *param_3,void *param_4)

{
  _EXCEPTION_DISPOSITION _Var1;
  
  _Var1 = except_handler4_common
                    (&__security_cookie,__security_check_cookie,param_1,param_2,param_3,param_4);
}





//==== 008e422e operator_delete_008e422e ====


void __cdecl port_op_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008e4566. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  threading_e__free(param_1);
  return;
}





//==== 008e4233 bad_alloc_008e4233 ====


bad_alloc *  std__bad_alloc__bad_alloc(bad_alloc *this,bad_alloc *param_1)

{
  std__bad_array_new_length__bad_array_new_length__o2((exception *)this,(exception *)param_1);
  *(undefined ***)this = vftable;
  return this;
}





//==== 008e424e bad_alloc_008e424e ====


bad_alloc *  std__bad_alloc__bad_alloc__o3(bad_alloc *this)

{
  *(undefined4 *)&this->field_0x4 = 0;
  *(undefined4 *)&this->field_0x8 = 0;
  *(char **)&this->field_0x4 = "bad allocation";
  *(undefined ***)this = vftable;
  return this;
}





//==== 008e4266 bad_array_new_length ====


bad_array_new_length * 
std__bad_array_new_length__bad_array_new_length
          (bad_array_new_length *this,bad_array_new_length *param_1)

{
  std__bad_array_new_length__bad_array_new_length__o2((exception *)this,(exception *)param_1);
  *(undefined ***)this = vftable;
  return this;
}





//==== 008e4281 bad_array_new_length_008e4281 ====


bad_array_new_length * 
std__bad_array_new_length__bad_array_new_length__o4(bad_array_new_length *this)

{
  *(undefined4 *)&this->field_0x4 = 0;
  *(undefined4 *)&this->field_0x8 = 0;
  *(char **)&this->field_0x4 = "bad array new length";
  *(undefined ***)this = vftable;
  return this;
}





//==== 008e4299 scalar_deleting_destructor_008e4299 ====


void *  std__bad_alloc___scalar_deleting_destructor(bad_alloc *this,uint param_1)

{
  *(undefined ***)this = exception__vftable;
  ___std_exception_destroy(&this->field_0x4);
  if ((param_1 & 1) != 0) {
    port_op_delete(this);
  }
  return this;
}





//==== 008e42c6 scrt_throw_std_bad_alloc ====


void __cdecl scrt_throw_std_bad_alloc__o3(void)

{
  bad_alloc bStack_10;
  
  std__bad_alloc__bad_alloc__o3(&bStack_10);
                    /* WARNING: Subroutine does not return */
  CxxThrowException_8__o3(&bStack_10,(ThrowInfo *)&__TI2_AVbad_alloc_std__);
}





//==== 008e42e3 scrt_throw_std_bad_array_new_length ====


void __cdecl scrt_throw_std_bad_array_new_length__o3(void)

{
  bad_array_new_length bStack_10;
  
  std__bad_array_new_length__bad_array_new_length__o4(&bStack_10);
                    /* WARNING: Subroutine does not return */
  CxxThrowException_8__o3(&bStack_10,(ThrowInfo *)&__TI3_AVbad_array_new_length_std__);
}





//==== 008e4499 scrt_is_ucrt_dll_in_use ====


int __cdecl scrt_is_ucrt_dll_in_use__o3(void)

{
  return (uint)(__scrt_ucrt_dll_is_in_use != 0);
}





//==== 008e44a5 initialize_legacy_wide_specifiers ====


int __cdecl initialize_legacy_wide_specifiers(void)

{
  uint *puVar1;
  ulong64 *puVar2;
  
  puVar1 = (uint *)local_stdio_printf_options__o3();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  puVar2 = (ulong64 *)(uintptr_t)(local_stdio_scanf_options__o3());
  *(uint *)puVar2 = (uint)*puVar2 | 2;
  *(undefined4 *)((int)puVar2 + 4) = *(undefined4 *)((int)puVar2 + 4);
  return 0;
}





//==== 008e44c4 purecall ====


/* purecall */

void __cdecl purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x008e44c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  purecall();
  return;
}





//==== 008e44ca memset ====


/* memset */

void __cdecl memset__o3(void *param_1,int param_2,size_t param_3)

{
                    /* WARNING: Could not recover jumptable at 0x008e44ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  memset(param_1,param_2,param_3);
  return;
}





//==== 008e44d0 set_purecall_handler ====


/* set_purecall_handler */

void __cdecl set_purecall_handler(_purecall_handler)

{
                    /* WARNING: Could not recover jumptable at 0x008e44d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _set_purecall_handler(param_1);
  return;
}





//==== 008e44d6 std_exception_copy ====


void ___std_exception_copy(void)

{
                    /* WARNING: Could not recover jumptable at 0x008e44d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __std_exception_copy();
  return;
}





//==== 008e44dc std_exception_destroy ====


void ___std_exception_destroy(void)

{
                    /* WARNING: Could not recover jumptable at 0x008e44dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __std_exception_destroy();
  return;
}





//==== 008e44e2 CxxThrowException_8 ====


void CxxThrowException_8__o3(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x008e44e2. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}





//==== 008e44e8 memcpy ====


/* memcpy */

void __cdecl memcpy__o3(void *param_1,void *param_2,size_t param_3)

{
                    /* WARNING: Could not recover jumptable at 0x008e44e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  memcpy(param_1,param_2,param_3);
  return;
}





//==== 008e44ee memmove ====


/* memmove */

void __cdecl memmove__o3(void *param_1,void *param_2,size_t param_3)

{
                    /* WARNING: Could not recover jumptable at 0x008e44ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  memmove(param_1,param_2,param_3);
  return;
}





//==== 008e44f4 CxxFrameHandler3 ====


void ___CxxFrameHandler3(void)

{
                    /* WARNING: Could not recover jumptable at 0x008e44f4. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  __CxxFrameHandler3();
  return;
}





//==== 008e44fa except_handler4_common ====


/* except_handler4_common */

int __cdecl except_handler4_common(void *param_1,void *param_2,void *param_3,void *param_4,
                                   void *param_5,void *param_6)

{
                    /* WARNING: Could not recover jumptable at 0x008e44fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common(param_1,param_2,param_3,param_4,param_5,param_6);
  return 0;
}





//==== 008e4500 libm_sse2_acos_precise ====





//==== 008e4506 libm_sse2_exp_precise ====





//==== 008e450c libm_sse2_sqrt_precise ====





//==== 008e4512 CIatan2 ====


void libm_sse2_exp_precise__o2(void)

{
                    /* WARNING: Could not recover jumptable at 0x008e4512. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _CIatan2();
  return;
}





//==== 008e4518 libm_sse2_asin_precise ====





//==== 008e451e libm_sse2_cos_precise ====





//==== 008e4524 libm_sse2_sin_precise ====





//==== 008e452a libm_sse2_tan_precise ====





//==== 008e4530 CIfmod ====


/* __CIfmod: CRT import thunk removed (p46); real signature long double(...)
   declared in port_prelude.h; binds to _CIfmod import at bring-up */





//==== 008e4536 libm_sse2_log_precise ====





//==== 008e453c libm_sse2_atan_precise ====





//==== 008e4542 exit ====


/* exit */

void __cdecl exit(int)

{
                    /* WARNING: Could not recover jumptable at 0x008e4542. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  exit(param_1);
  return;
}





//==== 008e4548 libm_sse2_pow_precise ====





//==== 008e454e libm_sse2_log10_precise ====





//==== 008e4554 ceil ====


/* ceil */

float10 __cdecl libm_sse2_log10_precise__o3(double)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x008e4554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = ceil(param_1);
  return (float10)dVar1;
}





//==== 008e455a floor ====


/* floor */

float10 __cdecl floor__o3(double)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x008e455a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = floor(param_1);
  return (float10)dVar1;
}





//==== 008e4560 stdio_common_vsprintf ====


int ___stdio_common_vsprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x008e4560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __stdio_common_vsprintf();
  return 0;
}





//==== 008e4566 free ====


/* threading_e__free */

void __cdecl threading_e__free(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008e4566. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  threading_e__free(param_1);
  return;
}





//==== 008e456c malloc ====


/* malloc */

void __cdecl malloc__o3(size_t)

{
                    /* WARNING: Could not recover jumptable at 0x008e456c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  malloc(param_1);
  return;
}





//==== 008e4572 stdio_common_vsscanf ====


int ___stdio_common_vsscanf(void)

{
                    /* WARNING: Could not recover jumptable at 0x008e4572. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __stdio_common_vsscanf();
  return 0;
}





//==== 008e4578 seh_filter_exe ====


/* seh_filter_exe */

void __cdecl seh_filter_exe(void)

{
                    /* WARNING: Could not recover jumptable at 0x008e4578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  seh_filter_exe();
  return;
}





//==== 008e457e set_app_type ====


/* set_app_type */

void __cdecl set_app_type(void)

{
                    /* WARNING: Could not recover jumptable at 0x008e457e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  set_app_type();
  return;
}





//==== 008e4584 setusermatherr ====


void ___setusermatherr(void)

{
                    /* WARNING: Could not recover jumptable at 0x008e4584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __setusermatherr();
  return;
}





//==== 008e458a configure_narrow_argv ====


/* configure_narrow_argv */

void __cdecl configure_narrow_argv(void)

{
                    /* WARNING: Could not recover jumptable at 0x008e458a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  configure_narrow_argv();
  return;
}





//==== 008e4590 initialize_narrow_environment ====


/* initialize_narrow_environment */

void __cdecl initialize_narrow_environment(void)

{
                    /* WARNING: Could not recover jumptable at 0x008e4590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initialize_narrow_environment();
  return;
}





//==== 008e4596 get_initial_narrow_environment ====


/* get_initial_narrow_environment */

void * __cdecl get_initial_narrow_environment(void)

{
                    /* WARNING: Could not recover jumptable at 0x008e4596. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  get_initial_narrow_environment();
  return 0;
}





//==== 008e459c initterm ====


/* initterm */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x008e459c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}





//==== 008e45a2 initterm_e ====


/* initterm_e */

int __cdecl initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x008e45a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm_e();
  return 0;
}





//==== 008e45a8 exit_008e45a8 ====


/* exit */

void __cdecl exit__o3(int)

{
                    /* WARNING: Could not recover jumptable at 0x008e45a8. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _exit(param_1);
  return;
}





//==== 008e45ae set_fmode ====


/* set_fmode */

void __cdecl set_fmode(int)

{
                    /* WARNING: Could not recover jumptable at 0x008e45ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _set_fmode(param_1);
  return;
}





//==== 008e45b4 p___argc ====


int * ___p___argc(void)

{
                    /* WARNING: Could not recover jumptable at 0x008e45b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return __p___argc();
}





//==== 008e45ba p___argv ====


char *** ___p___argv(void)

{
                    /* WARNING: Could not recover jumptable at 0x008e45ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return __p___argv();
}





//==== 008e45c0 cexit ====


/* cexit */

void __cdecl cexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x008e45c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _cexit();
  return;
}





//==== 008e45c6 c_exit ====


/* c_exit */

void __cdecl c_exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x008e45c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _c_exit();
  return;
}





//==== 008e45cc register_thread_local_exe_atexit_callback ====


/* register_thread_local_exe_atexit_callback */

void __cdecl register_thread_local_exe_atexit_callback(void)

{
                    /* WARNING: Could not recover jumptable at 0x008e45cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  register_thread_local_exe_atexit_callback();
  return;
}





//==== 008e45d2 configthreadlocale ====


/* configthreadlocale */

void __cdecl configthreadlocale(int)

{
                    /* WARNING: Could not recover jumptable at 0x008e45d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _configthreadlocale(param_1);
  return;
}





//==== 008e45d8 set_new_mode ====


/* set_new_mode */

void __cdecl set_new_mode(void)

{
                    /* WARNING: Could not recover jumptable at 0x008e45d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  set_new_mode();
  return;
}





//==== 008e45de p__commode ====


void ___p__commode(void)

{
                    /* WARNING: Could not recover jumptable at 0x008e45de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __p__commode();
  return;
}





//==== 008e45e4 callnewh ====


/* callnewh */

int __cdecl callnewh(size_t param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008e45e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _callnewh(param_1);
  return 0;
}





//==== 008e45ea initialize_onexit_table ====


/* initialize_onexit_table */

int __cdecl initialize_onexit_table(void)

{
                    /* WARNING: Could not recover jumptable at 0x008e45ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initialize_onexit_table();
  return 0;
}





//==== 008e45f0 register_onexit_function ====


/* register_onexit_function */

int __cdecl register_onexit_function(void)

{
                    /* WARNING: Could not recover jumptable at 0x008e45f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  register_onexit_function();
  return 0;
}





//==== 008e45f6 crt_atexit ====


/* crt_atexit */

int __cdecl crt_atexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x008e45f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  crt_atexit();
  return 0;
}





//==== 008e45fc except1 ====


/* except1 */

void __cdecl except1(void)

{
                    /* WARNING: Could not recover jumptable at 0x008e45fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except1();
  return;
}





//==== 008e4602 controlfp_s ====


/* controlfp_s */

int __cdecl controlfp_s(uint *param_1,uint param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x008e4602. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _controlfp_s(param_1,param_2,param_3);
  return 0;
}





//==== 008e4608 terminate ====


/* terminate */

long __cdecl terminate(void)

{
                    /* WARNING: Could not recover jumptable at 0x008e4608. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  terminate();
  return 0;
}





//==== 008e460e IsProcessorFeaturePresent_4 ====


BOOL _IsProcessorFeaturePresent_4(DWORD ProcessorFeature)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x008e460e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsProcessorFeaturePresent(ProcessorFeature);
}





//==== 008e4650 dynamic_atexit_destructor_for_DefaultSetters ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclSpacecraftShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_SpacecraftShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 008e4b90 dynamic_atexit_destructor_for_ValueLocations ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclSpacecraftShader__GetValueLocations_void_:: 0 2:: 0 dynamicatexitdestructorforValueLocations''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_SpacecraftShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations(void)

{
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))));
  }
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) = (void **)0x0;
  return;
}

//==== 008e5270 dynamic_atexit_destructor_for_DefaultSetters_008e5270 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclArmorShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_ArmorShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 008e52b0 dynamic_atexit_destructor_for_DefaultSetters_008e52b0 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclAsteroidCratersShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_AsteroidCratersShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 008e52f0 dynamic_atexit_destructor_for_DefaultSetters_008e52f0 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclAsteroidDiffuseShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_AsteroidDiffuseShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 008e5330 dynamic_atexit_destructor_for_DefaultSetters_008e5330 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclAsteroidHeightShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_AsteroidHeightShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 008e5370 dynamic_atexit_destructor_for_DefaultSetters_008e5370 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclAsteroidNormalShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_AsteroidNormalShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 008e53b0 dynamic_atexit_destructor_for_DefaultSetters_008e53b0 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclBlastLauncherShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_BlastLauncherShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 008e53f0 dynamic_atexit_destructor_for_DefaultSetters_008e53f0 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclCityLightsShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_CityLightsShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 008e5430 dynamic_atexit_destructor_for_DefaultSetters_008e5430 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclDamageGeneratorShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_DamageGeneratorShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 008e5470 dynamic_atexit_destructor_for_DefaultSetters_008e5470 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclDamageShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_DamageShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 008e54b0 dynamic_atexit_destructor_for_DefaultSetters_008e54b0 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclDamagedArmorShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_DamagedArmorShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 008e54f0 dynamic_atexit_destructor_for_DefaultSetters_008e54f0 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclDeferredGlobalLightingShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_DeferredGlobalLightingShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 008e5530 dynamic_atexit_destructor_for_DefaultSetters_008e5530 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclDeferredWorldLightingShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_DeferredWorldLightingShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 008e5570 dynamic_atexit_destructor_for_DefaultSetters_008e5570 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclEquirectangularToCubeMapShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_EquirectangularToCubeMapShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 008e55b0 dynamic_atexit_destructor_for_DefaultSetters_008e55b0 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclExhaustShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_ExhaustShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 008e55f0 dynamic_atexit_destructor_for_DefaultSetters_008e55f0 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclGeneralModuleShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_GeneralModuleShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 008e5630 dynamic_atexit_destructor_for_DefaultSetters_008e5630 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclParticleShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_ParticleShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 008e5670 dynamic_atexit_destructor_for_DefaultSetters_008e5670 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclPlanetShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_PlanetShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 008e56b0 dynamic_atexit_destructor_for_DefaultSetters_008e56b0 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclPropellantTankShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_PropellantTankShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 008e56f0 dynamic_atexit_destructor_for_DefaultSetters_008e56f0 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclRadiatorShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_RadiatorShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 008e5730 dynamic_atexit_destructor_for_DefaultSetters_008e5730 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclRingShadowShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_RingShadowShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 008e5770 dynamic_atexit_destructor_for_DefaultSetters_008e5770 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclRingsShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_RingsShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 008e57b0 dynamic_atexit_destructor_for_DefaultSetters_008e57b0 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclRocketEngineShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_RocketEngineShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 008e57f0 dynamic_atexit_destructor_for_DefaultSetters_008e57f0 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclShadowShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_ShadowShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 008e5830 dynamic_atexit_destructor_for_DefaultSetters_008e5830 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclShockwaveShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_ShockwaveShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 008e5870 dynamic_atexit_destructor_for_DefaultSetters_008e5870 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclSimpleShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_SimpleShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 008e58b0 dynamic_atexit_destructor_for_DefaultSetters_008e58b0 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclSpacecraftShadowShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_SpacecraftShadowShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 008e58f0 dynamic_atexit_destructor_for_DefaultSetters_008e58f0 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclStarShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void)
    */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_StarShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 008e5a30 dynamic_atexit_destructor_for_ValueLocations_008e5a30 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclArmorShader__GetValueLocations_void_:: 0 2:: 0 dynamicatexitdestructorforValueLocations''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_ArmorShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations(void)

{
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))));
  }
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) = (void **)0x0;
  return;
}

//==== 008e5a70 dynamic_atexit_destructor_for_ValueLocations_008e5a70 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclAsteroidCratersShader__GetValueLocations_void_:: 0 2:: 0 dynamicatexitdestructorforValueLocations''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_AsteroidCratersShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations(void)

{
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))));
  }
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) = (void **)0x0;
  return;
}

//==== 008e5ab0 dynamic_atexit_destructor_for_ValueLocations_008e5ab0 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclAsteroidDiffuseShader__GetValueLocations_void_:: 0 2:: 0 dynamicatexitdestructorforValueLocations''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_AsteroidDiffuseShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations(void)

{
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))));
  }
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) = (void **)0x0;
  return;
}

//==== 008e5af0 dynamic_atexit_destructor_for_ValueLocations_008e5af0 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclAsteroidHeightShader__GetValueLocations_void_:: 0 2:: 0 dynamicatexitdestructorforValueLocations''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_AsteroidHeightShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations(void)

{
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))));
  }
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) = (void **)0x0;
  return;
}

//==== 008e5b30 dynamic_atexit_destructor_for_ValueLocations_008e5b30 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclAsteroidNormalShader__GetValueLocations_void_:: 0 2:: 0 dynamicatexitdestructorforValueLocations''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_AsteroidNormalShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations(void)

{
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))));
  }
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) = (void **)0x0;
  return;
}

//==== 008e5b70 dynamic_atexit_destructor_for_ValueLocations_008e5b70 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclBlastLauncherShader__GetValueLocations_void_:: 0 2:: 0 dynamicatexitdestructorforValueLocations''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_BlastLauncherShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations(void)

{
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))));
  }
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) = (void **)0x0;
  return;
}

//==== 008e5bb0 dynamic_atexit_destructor_for_ValueLocations_008e5bb0 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclCityLightsShader__GetValueLocations_void_:: 0 2:: 0 dynamicatexitdestructorforValueLocations''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_CityLightsShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations(void)

{
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))));
  }
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) = (void **)0x0;
  return;
}

//==== 008e5bf0 dynamic_atexit_destructor_for_ValueLocations_008e5bf0 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclDamageGeneratorShader__GetValueLocations_void_:: 0 2:: 0 dynamicatexitdestructorforValueLocations''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_DamageGeneratorShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations(void)

{
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))));
  }
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) = (void **)0x0;
  return;
}

//==== 008e5c30 dynamic_atexit_destructor_for_ValueLocations_008e5c30 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclDamageShader__GetValueLocations_void_:: 0 2:: 0 dynamicatexitdestructorforValueLocations''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_DamageShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations(void)

{
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))));
  }
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) = (void **)0x0;
  return;
}

//==== 008e5c70 dynamic_atexit_destructor_for_ValueLocations_008e5c70 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclDamagedArmorShader__GetValueLocations_void_:: 0 2:: 0 dynamicatexitdestructorforValueLocations''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_DamagedArmorShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations(void)

{
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))));
  }
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) = (void **)0x0;
  return;
}

//==== 008e5cb0 dynamic_atexit_destructor_for_ValueLocations_008e5cb0 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclDeferredGlobalLightingShader__GetValueLocations_void_:: 0 2:: 0 dynamicatexitdestructorforValueLocations''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_DeferredGlobalLightingShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations(void)

{
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))));
  }
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) = (void **)0x0;
  return;
}

//==== 008e5cf0 dynamic_atexit_destructor_for_ValueLocations_008e5cf0 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclDeferredWorldLightingShader__GetValueLocations_void_:: 0 2:: 0 dynamicatexitdestructorforValueLocations''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_DeferredWorldLightingShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations(void)

{
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))));
  }
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) = (void **)0x0;
  return;
}

//==== 008e5d30 dynamic_atexit_destructor_for_ValueLocations_008e5d30 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclEquirectangularToCubeMapShader__GetValueLocations_void_:: 0 2:: 0 dynamicatexitdestructorforValueLocations''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_EquirectangularToCubeMapShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations(void)

{
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))));
  }
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) = (void **)0x0;
  return;
}

//==== 008e5d70 dynamic_atexit_destructor_for_ValueLocations_008e5d70 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclExhaustShader__GetValueLocations_void_:: 0 2:: 0 dynamicatexitdestructorforValueLocations''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_ExhaustShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations(void)

{
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))));
  }
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) = (void **)0x0;
  return;
}

//==== 008e5db0 dynamic_atexit_destructor_for_ValueLocations_008e5db0 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclGeneralModuleShader__GetValueLocations_void_:: 0 2:: 0 dynamicatexitdestructorforValueLocations''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_GeneralModuleShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations(void)

{
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))));
  }
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) = (void **)0x0;
  return;
}

//==== 008e5df0 dynamic_atexit_destructor_for_ValueLocations_008e5df0 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclParticleShader__GetValueLocations_void_:: 0 2:: 0 dynamicatexitdestructorforValueLocations''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_ParticleShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations(void)

{
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))));
  }
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) = (void **)0x0;
  return;
}

//==== 008e5e30 dynamic_atexit_destructor_for_ValueLocations_008e5e30 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclPlanetShader__GetValueLocations_void_:: 0 2:: 0 dynamicatexitdestructorforValueLocations''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_PlanetShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations(void)

{
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))));
  }
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) = (void **)0x0;
  return;
}

//==== 008e5e70 dynamic_atexit_destructor_for_ValueLocations_008e5e70 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclPropellantTankShader__GetValueLocations_void_:: 0 2:: 0 dynamicatexitdestructorforValueLocations''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_PropellantTankShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations(void)

{
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))));
  }
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) = (void **)0x0;
  return;
}

//==== 008e5eb0 dynamic_atexit_destructor_for_ValueLocations_008e5eb0 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclRadiatorShader__GetValueLocations_void_:: 0 2:: 0 dynamicatexitdestructorforValueLocations''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_RadiatorShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations(void)

{
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))));
  }
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) = (void **)0x0;
  return;
}

//==== 008e5ef0 dynamic_atexit_destructor_for_ValueLocations_008e5ef0 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclRingShadowShader__GetValueLocations_void_:: 0 2:: 0 dynamicatexitdestructorforValueLocations''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_RingShadowShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations(void)

{
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))));
  }
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) = (void **)0x0;
  return;
}

//==== 008e5f30 dynamic_atexit_destructor_for_ValueLocations_008e5f30 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclRingsShader__GetValueLocations_void_:: 0 2:: 0 dynamicatexitdestructorforValueLocations''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_RingsShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations(void)

{
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))));
  }
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) = (void **)0x0;
  return;
}

//==== 008e5f70 dynamic_atexit_destructor_for_ValueLocations_008e5f70 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclRocketEngineShader__GetValueLocations_void_:: 0 2:: 0 dynamicatexitdestructorforValueLocations''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_RocketEngineShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations(void)

{
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))));
  }
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) = (void **)0x0;
  return;
}

//==== 008e5fb0 dynamic_atexit_destructor_for_ValueLocations_008e5fb0 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclShadowShader__GetValueLocations_void_:: 0 2:: 0 dynamicatexitdestructorforValueLocations''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_ShadowShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations(void)

{
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))));
  }
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) = (void **)0x0;
  return;
}

//==== 008e5ff0 dynamic_atexit_destructor_for_ValueLocations_008e5ff0 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclShockwaveShader__GetValueLocations_void_:: 0 2:: 0 dynamicatexitdestructorforValueLocations''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_ShockwaveShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations(void)

{
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))));
  }
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) = (void **)0x0;
  return;
}

//==== 008e6030 dynamic_atexit_destructor_for_ValueLocations_008e6030 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclSimpleShader__GetValueLocations_void_:: 0 2:: 0 dynamicatexitdestructorforValueLocations''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_SimpleShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations(void)

{
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))));
  }
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) = (void **)0x0;
  return;
}

//==== 008e6070 dynamic_atexit_destructor_for_ValueLocations_008e6070 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclSpacecraftShadowShader__GetValueLocations_void_:: 0 2:: 0 dynamicatexitdestructorforValueLocations''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_SpacecraftShadowShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations(void)

{
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))));
  }
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) = (void **)0x0;
  return;
}

//==== 008e60b0 dynamic_atexit_destructor_for_ValueLocations_008e60b0 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclStarShader__GetValueLocations_void_:: 0 2:: 0 dynamicatexitdestructorforValueLocations''(void)
    */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_StarShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations(void)

{
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))));
  }
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) = (void **)0x0;
  return;
}

//==== 008e6570 dynamic_atexit_destructor_for_StaticMembers ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclCoreUITheme__ReflectionInfoStruct_structCoreUITheme___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_CoreUITheme__ReflectionInfoStruct_struct_CoreUITheme___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0x22;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008e65c0 dynamic_atexit_destructor_for_StaticMembers_008e65c0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclThemeFont__ReflectionInfoStruct_structThemeFont___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_ThemeFont__ReflectionInfoStruct_struct_ThemeFont___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 4;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008e6610 dynamic_atexit_destructor_for_StaticMembers_008e6610 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclUITheme__ReflectionInfoStruct_structUITheme___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_UITheme__ReflectionInfoStruct_struct_UITheme___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 9;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008e6660 dynamic_atexit_destructor_for_StaticMembers_008e6660 ====


/* void __cdecl  0 private_staticintconst__cdeclCoreUITheme__ReflectionInfoStruct_structCoreUITheme___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_CoreUITheme__ReflectionInfoStruct_struct_CoreUITheme___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0x22;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008e66b0 dynamic_atexit_destructor_for_StaticMembers_008e66b0 ====


/* void __cdecl  0 private_staticintconst__cdeclThemeFont__ReflectionInfoStruct_structThemeFont___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_ThemeFont__ReflectionInfoStruct_struct_ThemeFont___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 4;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008e6700 dynamic_atexit_destructor_for_StaticMembers_008e6700 ====


/* void __cdecl  0 private_staticintconst__cdeclUITheme__ReflectionInfoStruct_structUITheme___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void)
    */

void __cdecl
 private__static_int_const___cdecl_UITheme__ReflectionInfoStruct_struct_UITheme___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 9;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008e67d0 dynamic_atexit_destructor_for_StaticMembers_008e67d0 ====


/* void __cdecl  0 private_staticstructColor__ClassMemberconst__cdeclutil__Color__ReflectionInfoStruct_structutil__Color___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_Color__ClassMember_const___cdecl_util__Color__ReflectionInfoStruct_struct_util__Color___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 5;
  piVar2 = & cde_l2_06c75d70__thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008e6820 dynamic_atexit_destructor_for_StaticMembers_008e6820 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclLevelRecord__ReflectionInfoStruct_structLevelRecord___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_LevelRecord__ReflectionInfoStruct_struct_LevelRecord___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 7;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008e6870 dynamic_atexit_destructor_for_StaticMembers_008e6870 ====


/* void __cdecl  0 private_staticintconst__cdeclutil__Color__ReflectionInfoStruct_structutil__Color___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_util__Color__ReflectionInfoStruct_struct_util__Color___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 5;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008e68c0 dynamic_atexit_destructor_for_StaticMembers_008e68c0 ====


/* void __cdecl  0 private_staticintconst__cdeclLevelRecord__ReflectionInfoStruct_structLevelRecord___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_LevelRecord__ReflectionInfoStruct_struct_LevelRecord___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 7;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008e7190 dynamic_atexit_destructor_for_StaticMembers_008e7190 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclSpeaker__ReflectionInfoStruct_structSpeaker___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_Speaker__ReflectionInfoStruct_struct_Speaker___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 6;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008e71e0 dynamic_atexit_destructor_for_StaticMembers_008e71e0 ====


/* void __cdecl  0 private_staticintconst__cdeclSpeaker__ReflectionInfoStruct_structSpeaker___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void)
    */

void __cdecl
 private__static_int_const___cdecl_Speaker__ReflectionInfoStruct_struct_Speaker___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 6;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008e8550 dynamic_atexit_destructor_for_StaticMembers_008e8550 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclCraftBlueprintArmor__ReflectionInfoStruct_classCraftBlueprintArmor___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_CraftBlueprintArmor__ReflectionInfoStruct_class_CraftBlueprintArmor___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 5;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008e85a0 dynamic_atexit_destructor_for_StaticMembers_008e85a0 ====


/* void __cdecl  0 private_staticintconst__cdeclCraftBlueprintArmor__ReflectionInfoStruct_classCraftBlueprintArmor___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_CraftBlueprintArmor__ReflectionInfoStruct_class_CraftBlueprintArmor___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 5;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008e9880 dynamic_atexit_destructor_for_DefaultSetters_008e9880 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclLineShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void)
    */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_LineShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 008e98d0 dynamic_atexit_destructor_for_StaticMembers_008e98d0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclCraftBlueprint__ReflectionInfoStruct_classCraftBlueprint___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_CraftBlueprint__ReflectionInfoStruct_class_CraftBlueprint___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 5;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008e9920 dynamic_atexit_destructor_for_StaticMembers_008e9920 ====


/* void __cdecl  0 private_staticintconst__cdeclCraftBlueprint__ReflectionInfoStruct_classCraftBlueprint___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_CraftBlueprint__ReflectionInfoStruct_class_CraftBlueprint___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 5;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008e9ef0 dynamic_atexit_destructor_for_ValueLocations_008e9ef0 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclLineShader__GetValueLocations_void_:: 0 2:: 0 dynamicatexitdestructorforValueLocations''(void)
    */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_LineShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations(void)

{
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))));
  }
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) = (void **)0x0;
  return;
}

//==== 008e9fb0 dynamic_atexit_destructor_for_StaticMembers_008e9fb0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclFaction__ReflectionInfoStruct_classFaction___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_Faction__ReflectionInfoStruct_class_Faction___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 10;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ea000 dynamic_atexit_destructor_for_StaticMembers_008ea000 ====


/* void __cdecl  0 private_staticintconst__cdeclFaction__ReflectionInfoStruct_classFaction___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void)
    */

void __cdecl
 private__static_int_const___cdecl_Faction__ReflectionInfoStruct_class_Faction___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 10;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ea4b0 dynamic_atexit_destructor_for_StaticMembers_008ea4b0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclComparisonModel__ReflectionInfoStruct_structComparisonModel___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_ComparisonModel__ReflectionInfoStruct_struct_ComparisonModel___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  if (DAT_009656f0 != (void *)0x0) {
    port_op_delete(DAT_009656f0);
    DAT_009656f0 = (void *)(uintptr_t) (undefined4)(uintptr_t)((void *)0x0);
  }
  if (StaticMembers != (ClassMember *)0x0) {
    port_op_delete(StaticMembers);
    StaticMembers = (ClassMember *)0x0;
  }
  return;
}





//==== 008ea4f0 dynamic_atexit_destructor_for_StaticMembers_008ea4f0 ====


/* void __cdecl  0 private_staticintconst__cdeclComparisonModel__ReflectionInfoStruct_structComparisonModel___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_ComparisonModel__ReflectionInfoStruct_struct_ComparisonModel___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  if (DAT_009656c4 != (void *)0x0) {
    port_op_delete(DAT_009656c4);
    DAT_009656c4 = (void *)(uintptr_t) (undefined4)(uintptr_t)((void *)0x0);
  }
  if (StaticMembers != (ClassMember *)0x0) {
    port_op_delete(StaticMembers);
    StaticMembers = (ClassMember *)0x0;
  }
  return;
}





//==== 008eabb0 dynamic_atexit_destructor_for_StaticMembers_008eabb0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclGameConstants__ReflectionInfoStruct_classGameConstants___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_GameConstants__ReflectionInfoStruct_class_GameConstants___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0xc;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008eac00 dynamic_atexit_destructor_for_StaticMembers_008eac00 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclImportLog__ReflectionInfoStruct_classImportLog___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_ImportLog__ReflectionInfoStruct_class_ImportLog___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 2;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008eac50 dynamic_atexit_destructor_for_StaticMembers_008eac50 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclMaterial__ReflectionInfoStruct_classMaterial___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_Material__ReflectionInfoStruct_class_Material___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0x27;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008eaca0 dynamic_atexit_destructor_for_StaticMembers_008eaca0 ====


/* void __cdecl  0 private_staticintconst__cdeclGameConstants__ReflectionInfoStruct_classGameConstants___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_GameConstants__ReflectionInfoStruct_class_GameConstants___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0xc;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008eacf0 dynamic_atexit_destructor_for_StaticMembers_008eacf0 ====


/* void __cdecl  0 private_staticintconst__cdeclImportLog__ReflectionInfoStruct_classImportLog___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_ImportLog__ReflectionInfoStruct_class_ImportLog___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 2;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ead40 dynamic_atexit_destructor_for_StaticMembers_008ead40 ====


/* void __cdecl  0 private_staticintconst__cdeclMaterial__ReflectionInfoStruct_classMaterial___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_Material__ReflectionInfoStruct_class_Material___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0x27;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008eb310 dynamic_atexit_destructor_for_DefaultSetters_008eb310 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclPostProcessCopyShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_PostProcessCopyShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 008eb9d0 dynamic_atexit_destructor_for_ValueLocations_008eb9d0 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclPostProcessCopyShader__GetValueLocations_void_:: 0 2:: 0 dynamicatexitdestructorforValueLocations''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_PostProcessCopyShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations(void)

{
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))));
  }
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) = (void **)0x0;
  return;
}

//==== 008ebf90 dynamic_atexit_destructor_for_StaticMembers_008ebf90 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclFuseModule__ReflectionInfoStruct_classFuseModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_FuseModule__ReflectionInfoStruct_class_FuseModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 9;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ebfe0 dynamic_atexit_destructor_for_StaticMembers_008ebfe0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclHomingPhase__ReflectionInfoStruct_classHomingPhase___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_HomingPhase__ReflectionInfoStruct_class_HomingPhase___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 4;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ec030 dynamic_atexit_destructor_for_StaticMembers_008ec030 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclHomingProperties__ReflectionInfoStruct_classHomingProperties___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_HomingProperties__ReflectionInfoStruct_class_HomingProperties___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 6;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ec080 dynamic_atexit_destructor_for_StaticMembers_008ec080 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclRemoteControlModule__ReflectionInfoStruct_classRemoteControlModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_RemoteControlModule__ReflectionInfoStruct_class_RemoteControlModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 6;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ec0d0 dynamic_atexit_destructor_for_StaticMembers_008ec0d0 ====


/* void __cdecl  0 private_staticintconst__cdeclFuseModule__ReflectionInfoStruct_classFuseModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_FuseModule__ReflectionInfoStruct_class_FuseModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 9;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ec120 dynamic_atexit_destructor_for_StaticMembers_008ec120 ====


/* void __cdecl  0 private_staticintconst__cdeclHomingPhase__ReflectionInfoStruct_classHomingPhase___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_HomingPhase__ReflectionInfoStruct_class_HomingPhase___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 4;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ec170 dynamic_atexit_destructor_for_StaticMembers_008ec170 ====


/* void __cdecl  0 private_staticintconst__cdeclHomingProperties__ReflectionInfoStruct_classHomingProperties___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_HomingProperties__ReflectionInfoStruct_class_HomingProperties___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 6;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ec1c0 dynamic_atexit_destructor_for_StaticMembers_008ec1c0 ====


/* void __cdecl  0 private_staticintconst__cdeclRemoteControlModule__ReflectionInfoStruct_classRemoteControlModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_RemoteControlModule__ReflectionInfoStruct_class_RemoteControlModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 6;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ec820 dynamic_atexit_destructor_for_StaticMembers_008ec820 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclCrewModule__ReflectionInfoStruct_classCrewModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_CrewModule__ReflectionInfoStruct_class_CrewModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 8;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ec870 dynamic_atexit_destructor_for_StaticMembers_008ec870 ====


/* void __cdecl  0 private_staticintconst__cdeclCrewModule__ReflectionInfoStruct_classCrewModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_CrewModule__ReflectionInfoStruct_class_CrewModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 8;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ed3d0 dynamic_atexit_destructor_for_StaticMembers_008ed3d0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclBlackBoxEngineModule__ReflectionInfoStruct_classBlackBoxEngineModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_BlackBoxEngineModule__ReflectionInfoStruct_class_BlackBoxEngineModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0xe;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ed420 dynamic_atexit_destructor_for_StaticMembers_008ed420 ====


/* void __cdecl  0 private_staticintconst__cdeclBlackBoxEngineModule__ReflectionInfoStruct_classBlackBoxEngineModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_BlackBoxEngineModule__ReflectionInfoStruct_class_BlackBoxEngineModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0xe;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ed970 dynamic_atexit_destructor_for_DefaultSetters_008ed970 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclNormalShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_NormalShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 008ed9b0 dynamic_atexit_destructor_for_StaticMembers_008ed9b0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclTurretSubModule__ReflectionInfoStruct_structTurretSubModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_TurretSubModule__ReflectionInfoStruct_struct_TurretSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 7;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008eda00 dynamic_atexit_destructor_for_StaticMembers_008eda00 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclCombustionRocketModule__ReflectionInfoStruct_classCombustionRocketModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_CombustionRocketModule__ReflectionInfoStruct_class_CombustionRocketModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 9;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008eda50 dynamic_atexit_destructor_for_StaticMembers_008eda50 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclReactionWheelSubModule__ReflectionInfoStruct_classReactionWheelSubModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_ReactionWheelSubModule__ReflectionInfoStruct_class_ReactionWheelSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 3;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008edaa0 dynamic_atexit_destructor_for_StaticMembers_008edaa0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclThermalRocketSubModule__ReflectionInfoStruct_classThermalRocketSubModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_ThermalRocketSubModule__ReflectionInfoStruct_class_ThermalRocketSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 9;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008edaf0 dynamic_atexit_destructor_for_StaticMembers_008edaf0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclTurretMotorSubModule__ReflectionInfoStruct_classTurretMotorSubModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_TurretMotorSubModule__ReflectionInfoStruct_class_TurretMotorSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 3;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008edb40 dynamic_atexit_destructor_for_StaticMembers_008edb40 ====


/* void __cdecl  0 private_staticintconst__cdeclTurretSubModule__ReflectionInfoStruct_structTurretSubModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_TurretSubModule__ReflectionInfoStruct_struct_TurretSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 7;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008edb90 dynamic_atexit_destructor_for_StaticMembers_008edb90 ====


/* void __cdecl  0 private_staticintconst__cdeclCombustionRocketModule__ReflectionInfoStruct_classCombustionRocketModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_CombustionRocketModule__ReflectionInfoStruct_class_CombustionRocketModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 9;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008edbe0 dynamic_atexit_destructor_for_StaticMembers_008edbe0 ====


/* void __cdecl  0 private_staticintconst__cdeclReactionWheelSubModule__ReflectionInfoStruct_classReactionWheelSubModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_ReactionWheelSubModule__ReflectionInfoStruct_class_ReactionWheelSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 3;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008edc30 dynamic_atexit_destructor_for_StaticMembers_008edc30 ====


/* void __cdecl  0 private_staticintconst__cdeclThermalRocketSubModule__ReflectionInfoStruct_classThermalRocketSubModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_ThermalRocketSubModule__ReflectionInfoStruct_class_ThermalRocketSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 9;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008edc80 dynamic_atexit_destructor_for_StaticMembers_008edc80 ====


/* void __cdecl  0 private_staticintconst__cdeclTurretMotorSubModule__ReflectionInfoStruct_classTurretMotorSubModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_TurretMotorSubModule__ReflectionInfoStruct_class_TurretMotorSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 3;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ee1d0 dynamic_atexit_destructor_for_ValueLocations_008ee1d0 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclNormalShader__GetValueLocations_void_:: 0 2:: 0 dynamicatexitdestructorforValueLocations''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_NormalShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations(void)

{
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))));
  }
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) = (void **)0x0;
  return;
}

//==== 008ee210 dynamic_atexit_destructor_for_StaticMembers_008ee210 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclMagnetoplasmadynamicThrusterModule__ReflectionInfoStruct_classMagnetoplasmadynamicThrusterModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_MagnetoplasmadynamicThrusterModule__ReflectionInfoStruct_class_MagnetoplasmadynamicThrusterModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0x10;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ee260 dynamic_atexit_destructor_for_StaticMembers_008ee260 ====


/* void __cdecl  0 private_staticintconst__cdeclMagnetoplasmadynamicThrusterModule__ReflectionInfoStruct_classMagnetoplasmadynamicThrusterModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_MagnetoplasmadynamicThrusterModule__ReflectionInfoStruct_class_MagnetoplasmadynamicThrusterModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0x10;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008eedc0 dynamic_atexit_destructor_for_StaticMembers_008eedc0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclNuclearThermalRocketModule__ReflectionInfoStruct_classNuclearThermalRocketModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_NuclearThermalRocketModule__ReflectionInfoStruct_class_NuclearThermalRocketModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 9;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008eee10 dynamic_atexit_destructor_for_StaticMembers_008eee10 ====


/* void __cdecl  0 private_staticintconst__cdeclNuclearThermalRocketModule__ReflectionInfoStruct_classNuclearThermalRocketModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_NuclearThermalRocketModule__ReflectionInfoStruct_class_NuclearThermalRocketModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 9;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ef370 dynamic_atexit_destructor_for_StaticMembers_008ef370 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclPropellantTankModule__ReflectionInfoStruct_classPropellantTankModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_PropellantTankModule__ReflectionInfoStruct_class_PropellantTankModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 10;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ef3c0 dynamic_atexit_destructor_for_StaticMembers_008ef3c0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclTankEjectorSubModule__ReflectionInfoStruct_classTankEjectorSubModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_TankEjectorSubModule__ReflectionInfoStruct_class_TankEjectorSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 3;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ef410 dynamic_atexit_destructor_for_StaticMembers_008ef410 ====


/* void __cdecl  0 private_staticintconst__cdeclPropellantTankModule__ReflectionInfoStruct_classPropellantTankModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_PropellantTankModule__ReflectionInfoStruct_class_PropellantTankModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 10;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ef460 dynamic_atexit_destructor_for_StaticMembers_008ef460 ====


/* void __cdecl  0 private_staticintconst__cdeclTankEjectorSubModule__ReflectionInfoStruct_classTankEjectorSubModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_TankEjectorSubModule__ReflectionInfoStruct_class_TankEjectorSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 3;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008efa30 dynamic_atexit_destructor_for_StaticMembers_008efa30 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclResistojetModule__ReflectionInfoStruct_classResistojetModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_ResistojetModule__ReflectionInfoStruct_class_ResistojetModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0xc;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008efa80 dynamic_atexit_destructor_for_StaticMembers_008efa80 ====


/* void __cdecl  0 private_staticintconst__cdeclResistojetModule__ReflectionInfoStruct_classResistojetModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_ResistojetModule__ReflectionInfoStruct_class_ResistojetModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0xc;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f0a60 dynamic_atexit_destructor_for_StaticMembers_008f0a60 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclCylindricalCoolerSubModule__ReflectionInfoStruct_classCylindricalCoolerSubModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_CylindricalCoolerSubModule__ReflectionInfoStruct_class_CylindricalCoolerSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  if (DAT_0096bc4c != (void *)0x0) {
    port_op_delete(DAT_0096bc4c);
    DAT_0096bc4c = (void *)(uintptr_t) (undefined4)(uintptr_t)((void *)0x0);
  }
  if (StaticMembers != (ClassMember *)0x0) {
    port_op_delete(StaticMembers);
    StaticMembers = (ClassMember *)0x0;
  }
  return;
}





//==== 008f0aa0 dynamic_atexit_destructor_for_StaticMembers_008f0aa0 ====


/* void __cdecl  0 private_staticintconst__cdeclCylindricalCoolerSubModule__ReflectionInfoStruct_classCylindricalCoolerSubModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_CylindricalCoolerSubModule__ReflectionInfoStruct_class_CylindricalCoolerSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  if (DAT_0096bc20 != (void *)0x0) {
    port_op_delete(DAT_0096bc20);
    DAT_0096bc20 = (void *)(uintptr_t) (undefined4)(uintptr_t)((void *)0x0);
  }
  if (StaticMembers != (ClassMember *)0x0) {
    port_op_delete(StaticMembers);
    StaticMembers = (ClassMember *)0x0;
  }
  return;
}





//==== 008f0fe0 dynamic_atexit_destructor_for_StaticMembers_008f0fe0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclCapacitorBankSubModule__ReflectionInfoStruct_classCapacitorBankSubModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_CapacitorBankSubModule__ReflectionInfoStruct_class_CapacitorBankSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 5;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f1030 dynamic_atexit_destructor_for_StaticMembers_008f1030 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclCapacitorSubModule__ReflectionInfoStruct_classCapacitorSubModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_CapacitorSubModule__ReflectionInfoStruct_class_CapacitorSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 4;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f1080 dynamic_atexit_destructor_for_StaticMembers_008f1080 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclLinearInductionMotorSubModule__ReflectionInfoStruct_classLinearInductionMotorSubModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_LinearInductionMotorSubModule__ReflectionInfoStruct_class_LinearInductionMotorSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 9;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f10d0 dynamic_atexit_destructor_for_StaticMembers_008f10d0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclLinearMotorSubModule__ReflectionInfoStruct_classLinearMotorSubModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_LinearMotorSubModule__ReflectionInfoStruct_class_LinearMotorSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 2;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f1120 dynamic_atexit_destructor_for_StaticMembers_008f1120 ====


/* void __cdecl  0 private_staticintconst__cdeclCapacitorBankSubModule__ReflectionInfoStruct_classCapacitorBankSubModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_CapacitorBankSubModule__ReflectionInfoStruct_class_CapacitorBankSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 5;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f1170 dynamic_atexit_destructor_for_StaticMembers_008f1170 ====


/* void __cdecl  0 private_staticintconst__cdeclCapacitorSubModule__ReflectionInfoStruct_classCapacitorSubModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_CapacitorSubModule__ReflectionInfoStruct_class_CapacitorSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 4;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f11c0 dynamic_atexit_destructor_for_StaticMembers_008f11c0 ====


/* void __cdecl  0 private_staticintconst__cdeclLinearInductionMotorSubModule__ReflectionInfoStruct_classLinearInductionMotorSubModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_LinearInductionMotorSubModule__ReflectionInfoStruct_class_LinearInductionMotorSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 9;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f1210 dynamic_atexit_destructor_for_StaticMembers_008f1210 ====


/* void __cdecl  0 private_staticintconst__cdeclLinearMotorSubModule__ReflectionInfoStruct_classLinearMotorSubModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_LinearMotorSubModule__ReflectionInfoStruct_class_LinearMotorSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 2;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f1760 dynamic_atexit_destructor_for_StaticMembers_008f1760 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclCargoModule__ReflectionInfoStruct_classCargoModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_CargoModule__ReflectionInfoStruct_class_CargoModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 7;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f17b0 dynamic_atexit_destructor_for_StaticMembers_008f17b0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclRadiationShieldModule__ReflectionInfoStruct_classRadiationShieldModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_RadiationShieldModule__ReflectionInfoStruct_class_RadiationShieldModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 6;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f1800 dynamic_atexit_destructor_for_StaticMembers_008f1800 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclSpacerModule__ReflectionInfoStruct_classSpacerModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_SpacerModule__ReflectionInfoStruct_class_SpacerModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 5;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f1850 dynamic_atexit_destructor_for_StaticMembers_008f1850 ====


/* void __cdecl  0 private_staticintconst__cdeclCargoModule__ReflectionInfoStruct_classCargoModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_CargoModule__ReflectionInfoStruct_class_CargoModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 7;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f18a0 dynamic_atexit_destructor_for_StaticMembers_008f18a0 ====


/* void __cdecl  0 private_staticintconst__cdeclRadiationShieldModule__ReflectionInfoStruct_classRadiationShieldModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_RadiationShieldModule__ReflectionInfoStruct_class_RadiationShieldModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 6;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f18f0 dynamic_atexit_destructor_for_StaticMembers_008f18f0 ====


/* void __cdecl  0 private_staticintconst__cdeclSpacerModule__ReflectionInfoStruct_classSpacerModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_SpacerModule__ReflectionInfoStruct_class_SpacerModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 5;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f1e40 dynamic_atexit_destructor_for_StaticMembers_008f1e40 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclNuclearReactorSubModule__ReflectionInfoStruct_classNuclearReactorSubModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_NuclearReactorSubModule__ReflectionInfoStruct_class_NuclearReactorSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0xc;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f1e90 dynamic_atexit_destructor_for_StaticMembers_008f1e90 ====


/* void __cdecl  0 private_staticintconst__cdeclNuclearReactorSubModule__ReflectionInfoStruct_classNuclearReactorSubModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_NuclearReactorSubModule__ReflectionInfoStruct_class_NuclearReactorSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0xc;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f23f0 dynamic_atexit_destructor_for_StaticMembers_008f23f0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclRadiatorModule__ReflectionInfoStruct_classRadiatorModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_RadiatorModule__ReflectionInfoStruct_class_RadiatorModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0xd;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f2440 dynamic_atexit_destructor_for_StaticMembers_008f2440 ====


/* void __cdecl  0 private_staticintconst__cdeclRadiatorModule__ReflectionInfoStruct_classRadiatorModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_RadiatorModule__ReflectionInfoStruct_class_RadiatorModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0xd;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f2a10 dynamic_atexit_destructor_for_StaticMembers_008f2a10 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclRefuelerModule__ReflectionInfoStruct_classRefuelerModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_RefuelerModule__ReflectionInfoStruct_class_RefuelerModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 7;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f2a60 dynamic_atexit_destructor_for_StaticMembers_008f2a60 ====


/* void __cdecl  0 private_staticintconst__cdeclRefuelerModule__ReflectionInfoStruct_classRefuelerModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_RefuelerModule__ReflectionInfoStruct_class_RefuelerModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 7;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f3030 dynamic_atexit_destructor_for_StaticMembers_008f3030 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclTurbineSubModule__ReflectionInfoStruct_classTurbineSubModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_TurbineSubModule__ReflectionInfoStruct_class_TurbineSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 6;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f3080 dynamic_atexit_destructor_for_StaticMembers_008f3080 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclTurbopumpSubModule__ReflectionInfoStruct_classTurbopumpSubModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_TurbopumpSubModule__ReflectionInfoStruct_class_TurbopumpSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 4;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f30d0 dynamic_atexit_destructor_for_StaticMembers_008f30d0 ====


/* void __cdecl  0 private_staticintconst__cdeclTurbineSubModule__ReflectionInfoStruct_classTurbineSubModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_TurbineSubModule__ReflectionInfoStruct_class_TurbineSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 6;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f3120 dynamic_atexit_destructor_for_StaticMembers_008f3120 ====


/* void __cdecl  0 private_staticintconst__cdeclTurbopumpSubModule__ReflectionInfoStruct_classTurbopumpSubModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_TurbopumpSubModule__ReflectionInfoStruct_class_TurbopumpSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 4;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f3670 dynamic_atexit_destructor_for_StaticMembers_008f3670 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclExtrudableSoloTurretSubModule__ReflectionInfoStruct_structExtrudableSoloTurretSubModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_ExtrudableSoloTurretSubModule__ReflectionInfoStruct_struct_ExtrudableSoloTurretSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 7;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f36c0 dynamic_atexit_destructor_for_StaticMembers_008f36c0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclExtrudableTurretSubModule__ReflectionInfoStruct_structExtrudableTurretSubModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_ExtrudableTurretSubModule__ReflectionInfoStruct_struct_ExtrudableTurretSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 8;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f3710 dynamic_atexit_destructor_for_StaticMembers_008f3710 ====


/* void __cdecl  0 private_staticintconst__cdeclExtrudableSoloTurretSubModule__ReflectionInfoStruct_structExtrudableSoloTurretSubModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_ExtrudableSoloTurretSubModule__ReflectionInfoStruct_struct_ExtrudableSoloTurretSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 7;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f3760 dynamic_atexit_destructor_for_StaticMembers_008f3760 ====


/* void __cdecl  0 private_staticintconst__cdeclExtrudableTurretSubModule__ReflectionInfoStruct_structExtrudableTurretSubModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_ExtrudableTurretSubModule__ReflectionInfoStruct_struct_ExtrudableTurretSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 8;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f3cb0 dynamic_atexit_destructor_for_StaticMembers_008f3cb0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclExplosiveModule__ReflectionInfoStruct_classExplosiveModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_ExplosiveModule__ReflectionInfoStruct_class_ExplosiveModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0xc;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f3d00 dynamic_atexit_destructor_for_StaticMembers_008f3d00 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclProximityDetonator__ReflectionInfoStruct_classProximityDetonator___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_ProximityDetonator__ReflectionInfoStruct_class_ProximityDetonator___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 5;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f3d50 dynamic_atexit_destructor_for_StaticMembers_008f3d50 ====


/* void __cdecl  0 private_staticintconst__cdeclExplosiveModule__ReflectionInfoStruct_classExplosiveModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_ExplosiveModule__ReflectionInfoStruct_class_ExplosiveModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0xc;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f3da0 dynamic_atexit_destructor_for_StaticMembers_008f3da0 ====


/* void __cdecl  0 private_staticintconst__cdeclProximityDetonator__ReflectionInfoStruct_classProximityDetonator___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_ProximityDetonator__ReflectionInfoStruct_class_ProximityDetonator___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 5;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f42f0 dynamic_atexit_destructor_for_StaticMembers_008f42f0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclCombustionMixtureSubModule__ReflectionInfoStruct_structCombustionMixtureSubModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_CombustionMixtureSubModule__ReflectionInfoStruct_struct_CombustionMixtureSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 4;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f4340 dynamic_atexit_destructor_for_StaticMembers_008f4340 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclFlareModule__ReflectionInfoStruct_classFlareModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_FlareModule__ReflectionInfoStruct_class_FlareModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 8;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f4390 dynamic_atexit_destructor_for_StaticMembers_008f4390 ====


/* void __cdecl  0 private_staticintconst__cdeclCombustionMixtureSubModule__ReflectionInfoStruct_structCombustionMixtureSubModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_CombustionMixtureSubModule__ReflectionInfoStruct_struct_CombustionMixtureSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 4;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f43e0 dynamic_atexit_destructor_for_StaticMembers_008f43e0 ====


/* void __cdecl  0 private_staticintconst__cdeclFlareModule__ReflectionInfoStruct_classFlareModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_FlareModule__ReflectionInfoStruct_class_FlareModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 8;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f49b0 dynamic_atexit_destructor_for_StaticMembers_008f49b0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclNuclearPayloadModule__ReflectionInfoStruct_classNuclearPayloadModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_NuclearPayloadModule__ReflectionInfoStruct_class_NuclearPayloadModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0x12;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f4a00 dynamic_atexit_destructor_for_StaticMembers_008f4a00 ====


/* void __cdecl  0 private_staticintconst__cdeclNuclearPayloadModule__ReflectionInfoStruct_classNuclearPayloadModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_NuclearPayloadModule__ReflectionInfoStruct_class_NuclearPayloadModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0x12;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f5550 dynamic_atexit_destructor_for_StaticMembers_008f5550 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclBlackBoxRadiationSubModule__ReflectionInfoStruct_structBlackBoxRadiationSubModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_BlackBoxRadiationSubModule__ReflectionInfoStruct_struct_BlackBoxRadiationSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 4;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f55a0 dynamic_atexit_destructor_for_StaticMembers_008f55a0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclBlackBoxPowerModule__ReflectionInfoStruct_classBlackBoxPowerModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_BlackBoxPowerModule__ReflectionInfoStruct_class_BlackBoxPowerModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0xe;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f55f0 dynamic_atexit_destructor_for_StaticMembers_008f55f0 ====


/* void __cdecl  0 private_staticintconst__cdeclBlackBoxRadiationSubModule__ReflectionInfoStruct_structBlackBoxRadiationSubModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_BlackBoxRadiationSubModule__ReflectionInfoStruct_struct_BlackBoxRadiationSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 4;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f5640 dynamic_atexit_destructor_for_StaticMembers_008f5640 ====


/* void __cdecl  0 private_staticintconst__cdeclBlackBoxPowerModule__ReflectionInfoStruct_classBlackBoxPowerModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_BlackBoxPowerModule__ReflectionInfoStruct_class_BlackBoxPowerModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0xe;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f5ba0 dynamic_atexit_destructor_for_StaticMembers_008f5ba0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclThermocoupleSubModule__ReflectionInfoStruct_classThermocoupleSubModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_ThermocoupleSubModule__ReflectionInfoStruct_class_ThermocoupleSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 4;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f5bf0 dynamic_atexit_destructor_for_StaticMembers_008f5bf0 ====


/* void __cdecl  0 private_staticintconst__cdeclThermocoupleSubModule__ReflectionInfoStruct_classThermocoupleSubModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_ThermocoupleSubModule__ReflectionInfoStruct_class_ThermocoupleSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 4;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f61d0 dynamic_atexit_destructor_for_StaticMembers_008f61d0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclRadioisotopePelletSubModule__ReflectionInfoStruct_classRadioisotopePelletSubModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_RadioisotopePelletSubModule__ReflectionInfoStruct_class_RadioisotopePelletSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 4;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f6220 dynamic_atexit_destructor_for_StaticMembers_008f6220 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclRadioisotopeThermoelectricGeneratorModule__ReflectionInfoStruct_classRadioisotopeThermoelectricGeneratorModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_RadioisotopeThermoelectricGeneratorModule__ReflectionInfoStruct_class_RadioisotopeThermoelectricGeneratorModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 10;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f6270 dynamic_atexit_destructor_for_StaticMembers_008f6270 ====


/* void __cdecl  0 private_staticintconst__cdeclRadioisotopePelletSubModule__ReflectionInfoStruct_classRadioisotopePelletSubModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_RadioisotopePelletSubModule__ReflectionInfoStruct_class_RadioisotopePelletSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 4;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f62c0 dynamic_atexit_destructor_for_StaticMembers_008f62c0 ====


/* void __cdecl  0 private_staticintconst__cdeclRadioisotopeThermoelectricGeneratorModule__ReflectionInfoStruct_classRadioisotopeThermoelectricGeneratorModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_RadioisotopeThermoelectricGeneratorModule__ReflectionInfoStruct_class_RadioisotopeThermoelectricGeneratorModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 10;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f6810 dynamic_atexit_destructor_for_StaticMembers_008f6810 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclThermoelectricFissionReactorModule__ReflectionInfoStruct_classThermoelectricFissionReactorModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_ThermoelectricFissionReactorModule__ReflectionInfoStruct_class_ThermoelectricFissionReactorModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0xe;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f6860 dynamic_atexit_destructor_for_StaticMembers_008f6860 ====


/* void __cdecl  0 private_staticintconst__cdeclThermoelectricFissionReactorModule__ReflectionInfoStruct_classThermoelectricFissionReactorModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_ThermoelectricFissionReactorModule__ReflectionInfoStruct_class_ThermoelectricFissionReactorModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0xe;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f6e30 dynamic_atexit_destructor_for_StaticMembers_008f6e30 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclTurboelectricFissionReactorModule__ReflectionInfoStruct_classTurboelectricFissionReactorModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_TurboelectricFissionReactorModule__ReflectionInfoStruct_class_TurboelectricFissionReactorModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 10;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f6e80 dynamic_atexit_destructor_for_StaticMembers_008f6e80 ====


/* void __cdecl  0 private_staticintconst__cdeclTurboelectricFissionReactorModule__ReflectionInfoStruct_classTurboelectricFissionReactorModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_TurboelectricFissionReactorModule__ReflectionInfoStruct_class_TurboelectricFissionReactorModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 10;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f7450 dynamic_atexit_destructor_for_StaticMembers_008f7450 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclAmmoModule__ReflectionInfoStruct_classAmmoModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_AmmoModule__ReflectionInfoStruct_class_AmmoModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 8;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f74a0 dynamic_atexit_destructor_for_StaticMembers_008f74a0 ====


/* void __cdecl  0 private_staticintconst__cdeclAmmoModule__ReflectionInfoStruct_classAmmoModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_AmmoModule__ReflectionInfoStruct_class_AmmoModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 8;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f7a70 dynamic_atexit_destructor_for_StaticMembers_008f7a70 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclBlackBoxLaserInfoSubModule__ReflectionInfoStruct_structBlackBoxLaserInfoSubModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_BlackBoxLaserInfoSubModule__ReflectionInfoStruct_struct_BlackBoxLaserInfoSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 9;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f7ac0 dynamic_atexit_destructor_for_StaticMembers_008f7ac0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclBlackBoxWeaponModule__ReflectionInfoStruct_classBlackBoxWeaponModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_BlackBoxWeaponModule__ReflectionInfoStruct_class_BlackBoxWeaponModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0x12;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f7b10 dynamic_atexit_destructor_for_StaticMembers_008f7b10 ====


/* void __cdecl  0 private_staticintconst__cdeclBlackBoxLaserInfoSubModule__ReflectionInfoStruct_structBlackBoxLaserInfoSubModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_BlackBoxLaserInfoSubModule__ReflectionInfoStruct_struct_BlackBoxLaserInfoSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 9;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f7b60 dynamic_atexit_destructor_for_StaticMembers_008f7b60 ====


/* void __cdecl  0 private_staticintconst__cdeclBlackBoxWeaponModule__ReflectionInfoStruct_classBlackBoxWeaponModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_BlackBoxWeaponModule__ReflectionInfoStruct_class_BlackBoxWeaponModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0x12;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f8130 dynamic_atexit_destructor_for_StaticMembers_008f8130 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclBlastLauncherModule__ReflectionInfoStruct_classBlastLauncherModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_BlastLauncherModule__ReflectionInfoStruct_class_BlastLauncherModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0xf;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f8180 dynamic_atexit_destructor_for_StaticMembers_008f8180 ====


/* void __cdecl  0 private_staticintconst__cdeclBlastLauncherModule__ReflectionInfoStruct_classBlastLauncherModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_BlastLauncherModule__ReflectionInfoStruct_class_BlastLauncherModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0xf;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f8750 dynamic_atexit_destructor_for_StaticMembers_008f8750 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclCarrierModule__ReflectionInfoStruct_classCarrierModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_CarrierModule__ReflectionInfoStruct_class_CarrierModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0xf;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f87a0 dynamic_atexit_destructor_for_StaticMembers_008f87a0 ====


/* void __cdecl  0 private_staticintconst__cdeclCarrierModule__ReflectionInfoStruct_classCarrierModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_CarrierModule__ReflectionInfoStruct_class_CarrierModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0xf;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f8d70 dynamic_atexit_destructor_for_StaticMembers_008f8d70 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclBarrelArmorSubModule__ReflectionInfoStruct_structBarrelArmorSubModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_BarrelArmorSubModule__ReflectionInfoStruct_struct_BarrelArmorSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 3;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f8dc0 dynamic_atexit_destructor_for_StaticMembers_008f8dc0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclCoilgunModule__ReflectionInfoStruct_classCoilgunModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_CoilgunModule__ReflectionInfoStruct_class_CoilgunModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0x11;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f8e10 dynamic_atexit_destructor_for_StaticMembers_008f8e10 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclSolenoidSubModule__ReflectionInfoStruct_classSolenoidSubModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_SolenoidSubModule__ReflectionInfoStruct_class_SolenoidSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 5;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f8e60 dynamic_atexit_destructor_for_StaticMembers_008f8e60 ====


/* void __cdecl  0 private_staticintconst__cdeclBarrelArmorSubModule__ReflectionInfoStruct_structBarrelArmorSubModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_BarrelArmorSubModule__ReflectionInfoStruct_struct_BarrelArmorSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 3;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f8eb0 dynamic_atexit_destructor_for_StaticMembers_008f8eb0 ====


/* void __cdecl  0 private_staticintconst__cdeclCoilgunModule__ReflectionInfoStruct_classCoilgunModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_CoilgunModule__ReflectionInfoStruct_class_CoilgunModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0x11;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f8f00 dynamic_atexit_destructor_for_StaticMembers_008f8f00 ====


/* void __cdecl  0 private_staticintconst__cdeclSolenoidSubModule__ReflectionInfoStruct_classSolenoidSubModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_SolenoidSubModule__ReflectionInfoStruct_class_SolenoidSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 5;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f94d0 dynamic_atexit_destructor_for_StaticMembers_008f94d0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclBallisticTubeSubModule__ReflectionInfoStruct_structBallisticTubeSubModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_BallisticTubeSubModule__ReflectionInfoStruct_struct_BallisticTubeSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 4;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f9520 dynamic_atexit_destructor_for_StaticMembers_008f9520 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclSolidPropellantSubModule__ReflectionInfoStruct_structSolidPropellantSubModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_SolidPropellantSubModule__ReflectionInfoStruct_struct_SolidPropellantSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 4;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f9570 dynamic_atexit_destructor_for_StaticMembers_008f9570 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclConventionalGunModule__ReflectionInfoStruct_classConventionalGunModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_ConventionalGunModule__ReflectionInfoStruct_class_ConventionalGunModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0xf;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f95c0 dynamic_atexit_destructor_for_StaticMembers_008f95c0 ====


/* void __cdecl  0 private_staticintconst__cdeclBallisticTubeSubModule__ReflectionInfoStruct_structBallisticTubeSubModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_BallisticTubeSubModule__ReflectionInfoStruct_struct_BallisticTubeSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 4;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f9610 dynamic_atexit_destructor_for_StaticMembers_008f9610 ====


/* void __cdecl  0 private_staticintconst__cdeclSolidPropellantSubModule__ReflectionInfoStruct_structSolidPropellantSubModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_SolidPropellantSubModule__ReflectionInfoStruct_struct_SolidPropellantSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 4;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f9660 dynamic_atexit_destructor_for_StaticMembers_008f9660 ====


/* void __cdecl  0 private_staticintconst__cdeclConventionalGunModule__ReflectionInfoStruct_classConventionalGunModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_ConventionalGunModule__ReflectionInfoStruct_class_ConventionalGunModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0xf;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f9c30 dynamic_atexit_destructor_for_StaticMembers_008f9c30 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclFixedLaserMountSubModule__ReflectionInfoStruct_structFixedLaserMountSubModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_FixedLaserMountSubModule__ReflectionInfoStruct_struct_FixedLaserMountSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 3;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f9c80 dynamic_atexit_destructor_for_StaticMembers_008f9c80 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclArcLampPumpSubModule__ReflectionInfoStruct_classArcLampPumpSubModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_ArcLampPumpSubModule__ReflectionInfoStruct_class_ArcLampPumpSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 9;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f9cd0 dynamic_atexit_destructor_for_StaticMembers_008f9cd0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclFrequencyDoublerSubModule__ReflectionInfoStruct_classFrequencyDoublerSubModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_FrequencyDoublerSubModule__ReflectionInfoStruct_class_FrequencyDoublerSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 4;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f9d20 dynamic_atexit_destructor_for_StaticMembers_008f9d20 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclLaserModule__ReflectionInfoStruct_classLaserModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_LaserModule__ReflectionInfoStruct_class_LaserModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0x16;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f9d70 dynamic_atexit_destructor_for_StaticMembers_008f9d70 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclLensSubModule__ReflectionInfoStruct_classLensSubModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_LensSubModule__ReflectionInfoStruct_class_LensSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 2;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f9dc0 dynamic_atexit_destructor_for_StaticMembers_008f9dc0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclNonlinearOpticSubModule__ReflectionInfoStruct_classNonlinearOpticSubModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_NonlinearOpticSubModule__ReflectionInfoStruct_class_NonlinearOpticSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 2;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f9e10 dynamic_atexit_destructor_for_StaticMembers_008f9e10 ====


/* void __cdecl  0 private_staticintconst__cdeclFixedLaserMountSubModule__ReflectionInfoStruct_structFixedLaserMountSubModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_FixedLaserMountSubModule__ReflectionInfoStruct_struct_FixedLaserMountSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 3;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f9e60 dynamic_atexit_destructor_for_StaticMembers_008f9e60 ====


/* void __cdecl  0 private_staticintconst__cdeclArcLampPumpSubModule__ReflectionInfoStruct_classArcLampPumpSubModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_ArcLampPumpSubModule__ReflectionInfoStruct_class_ArcLampPumpSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 9;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f9eb0 dynamic_atexit_destructor_for_StaticMembers_008f9eb0 ====


/* void __cdecl  0 private_staticintconst__cdeclFrequencyDoublerSubModule__ReflectionInfoStruct_classFrequencyDoublerSubModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_FrequencyDoublerSubModule__ReflectionInfoStruct_class_FrequencyDoublerSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 4;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f9f00 dynamic_atexit_destructor_for_StaticMembers_008f9f00 ====


/* void __cdecl  0 private_staticintconst__cdeclLaserModule__ReflectionInfoStruct_classLaserModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_LaserModule__ReflectionInfoStruct_class_LaserModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0x16;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f9f50 dynamic_atexit_destructor_for_StaticMembers_008f9f50 ====


/* void __cdecl  0 private_staticintconst__cdeclLensSubModule__ReflectionInfoStruct_classLensSubModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_LensSubModule__ReflectionInfoStruct_class_LensSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 2;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008f9fa0 dynamic_atexit_destructor_for_StaticMembers_008f9fa0 ====


/* void __cdecl  0 private_staticintconst__cdeclNonlinearOpticSubModule__ReflectionInfoStruct_classNonlinearOpticSubModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_NonlinearOpticSubModule__ReflectionInfoStruct_class_NonlinearOpticSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 2;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008faaf0 dynamic_atexit_destructor_for_StaticMembers_008faaf0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclRailsSubModule__ReflectionInfoStruct_structRailsSubModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_RailsSubModule__ReflectionInfoStruct_struct_RailsSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 4;
  puVar2 = (undefined4 *)&DAT_00977c88;
  do {
    puVar1 = puVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)puVar2[-4] != (void *)0x0) {
      port_op_delete((void *)puVar2[-4]);
      puVar2[-4] = 0;
    }
    if ((void *)*puVar1 != (void *)0x0) {
      port_op_delete((void *)*puVar1);
      *puVar1 = 0;
    }
    puVar2 = puVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008fab40 dynamic_atexit_destructor_for_StaticMembers_008fab40 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclRailgunModule__ReflectionInfoStruct_classRailgunModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_RailgunModule__ReflectionInfoStruct_class_RailgunModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0x10;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008fab90 dynamic_atexit_destructor_for_StaticMembers_008fab90 ====


/* void __cdecl  0 private_staticintconst__cdeclRailsSubModule__ReflectionInfoStruct_structRailsSubModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_RailsSubModule__ReflectionInfoStruct_struct_RailsSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 4;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008fabe0 dynamic_atexit_destructor_for_StaticMembers_008fabe0 ====


/* void __cdecl  0 private_staticintconst__cdeclRailgunModule__ReflectionInfoStruct_classRailgunModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_RailgunModule__ReflectionInfoStruct_class_RailgunModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0x10;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008fb1b0 dynamic_atexit_destructor_for_StaticMembers_008fb1b0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclStandaloneLaserMountModule__ReflectionInfoStruct_classStandaloneLaserMountModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_StandaloneLaserMountModule__ReflectionInfoStruct_class_StandaloneLaserMountModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 9;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008fb200 dynamic_atexit_destructor_for_StaticMembers_008fb200 ====


/* void __cdecl  0 private_staticintconst__cdeclStandaloneLaserMountModule__ReflectionInfoStruct_classStandaloneLaserMountModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_StandaloneLaserMountModule__ReflectionInfoStruct_class_StandaloneLaserMountModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 9;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008fbd60 dynamic_atexit_destructor_for_StaticMembers_008fbd60 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclAmmoBaySubModule__ReflectionInfoStruct_structAmmoBaySubModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_AmmoBaySubModule__ReflectionInfoStruct_struct_AmmoBaySubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 3;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008fbdb0 dynamic_atexit_destructor_for_StaticMembers_008fbdb0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclBarrelCoolingSubModule__ReflectionInfoStruct_classBarrelCoolingSubModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_BarrelCoolingSubModule__ReflectionInfoStruct_class_BarrelCoolingSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 5;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008fbe00 dynamic_atexit_destructor_for_StaticMembers_008fbe00 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclMassProjectileSubModule__ReflectionInfoStruct_classMassProjectileSubModule___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_MassProjectileSubModule__ReflectionInfoStruct_class_MassProjectileSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 6;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008fbe50 dynamic_atexit_destructor_for_StaticMembers_008fbe50 ====


/* void __cdecl  0 private_staticintconst__cdeclAmmoBaySubModule__ReflectionInfoStruct_structAmmoBaySubModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_AmmoBaySubModule__ReflectionInfoStruct_struct_AmmoBaySubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 3;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008fbea0 dynamic_atexit_destructor_for_StaticMembers_008fbea0 ====


/* void __cdecl  0 private_staticintconst__cdeclBarrelCoolingSubModule__ReflectionInfoStruct_classBarrelCoolingSubModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_BarrelCoolingSubModule__ReflectionInfoStruct_class_BarrelCoolingSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 5;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008fbef0 dynamic_atexit_destructor_for_StaticMembers_008fbef0 ====


/* void __cdecl  0 private_staticintconst__cdeclMassProjectileSubModule__ReflectionInfoStruct_classMassProjectileSubModule___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_MassProjectileSubModule__ReflectionInfoStruct_class_MassProjectileSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 6;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008fc4d0 dynamic_atexit_destructor_for_StaticMembers_008fc4d0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclDissociationReaction__ReflectionInfoStruct_structDissociationReaction___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_DissociationReaction__ReflectionInfoStruct_struct_DissociationReaction___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 3;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008fc520 dynamic_atexit_destructor_for_StaticMembers_008fc520 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclChemicalReaction__ReflectionInfoStruct_classChemicalReaction___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_ChemicalReaction__ReflectionInfoStruct_class_ChemicalReaction___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 8;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008fc570 dynamic_atexit_destructor_for_StaticMembers_008fc570 ====


/* void __cdecl  0 private_staticintconst__cdeclDissociationReaction__ReflectionInfoStruct_structDissociationReaction___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_DissociationReaction__ReflectionInfoStruct_struct_DissociationReaction___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 3;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008fc5c0 dynamic_atexit_destructor_for_StaticMembers_008fc5c0 ====


/* void __cdecl  0 private_staticintconst__cdeclChemicalReaction__ReflectionInfoStruct_classChemicalReaction___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_ChemicalReaction__ReflectionInfoStruct_class_ChemicalReaction___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 8;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008fc910 dynamic_atexit_destructor_for_StaticMembers_008fc910 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclElement__ReflectionInfoStruct_classElement___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_Element__ReflectionInfoStruct_class_Element___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0x1c;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008fc960 dynamic_atexit_destructor_for_StaticMembers_008fc960 ====


/* void __cdecl  0 private_staticintconst__cdeclElement__ReflectionInfoStruct_classElement___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void)
    */

void __cdecl
 private__static_int_const___cdecl_Element__ReflectionInfoStruct_class_Element___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0x1c;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008fca30 dynamic_atexit_destructor_for_StaticMembers_008fca30 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclEmissionSpectrum__ReflectionInfoStruct_classEmissionSpectrum___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_EmissionSpectrum__ReflectionInfoStruct_class_EmissionSpectrum___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  if (DAT_00979eac != (void *)0x0) {
    port_op_delete(DAT_00979eac);
    DAT_00979eac = (void *)(uintptr_t) (undefined4)(uintptr_t)((void *)0x0);
  }
  if (StaticMembers != (ClassMember *)0x0) {
    port_op_delete(StaticMembers);
    StaticMembers = (ClassMember *)0x0;
  }
  return;
}





//==== 008fca70 dynamic_atexit_destructor_for_StaticMembers_008fca70 ====


/* void __cdecl  0 private_staticintconst__cdeclEmissionSpectrum__ReflectionInfoStruct_classEmissionSpectrum___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_EmissionSpectrum__ReflectionInfoStruct_class_EmissionSpectrum___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  if (DAT_00979e80 != (void *)0x0) {
    port_op_delete(DAT_00979e80);
    DAT_00979e80 = (void *)(uintptr_t) (undefined4)(uintptr_t)((void *)0x0);
  }
  if (StaticMembers != (ClassMember *)0x0) {
    port_op_delete(StaticMembers);
    StaticMembers = (ClassMember *)0x0;
  }
  return;
}





//==== 008fcd40 dynamic_atexit_destructor_for_StaticMembers_008fcd40 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclFusionReaction__ReflectionInfoStruct_classFusionReaction___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_FusionReaction__ReflectionInfoStruct_class_FusionReaction___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 6;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008fcd90 dynamic_atexit_destructor_for_StaticMembers_008fcd90 ====


/* void __cdecl  0 private_staticintconst__cdeclFusionReaction__ReflectionInfoStruct_classFusionReaction___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_FusionReaction__ReflectionInfoStruct_class_FusionReaction___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 6;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008fcff0 dynamic_atexit_destructor_for_StaticMembers_008fcff0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclLasingMedium__ReflectionInfoStruct_structLasingMedium___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_LasingMedium__ReflectionInfoStruct_struct_LasingMedium___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 8;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008fd040 dynamic_atexit_destructor_for_StaticMembers_008fd040 ====


/* void __cdecl  0 private_staticintconst__cdeclLasingMedium__ReflectionInfoStruct_structLasingMedium___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_LasingMedium__ReflectionInfoStruct_struct_LasingMedium___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 8;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008fd390 dynamic_atexit_destructor_for_StaticMembers_008fd390 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclRefractiveIndexSpectrum__ReflectionInfoStruct_classRefractiveIndexSpectrum___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_RefractiveIndexSpectrum__ReflectionInfoStruct_class_RefractiveIndexSpectrum___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  if (DAT_0097a80c != (void *)0x0) {
    port_op_delete(DAT_0097a80c);
    DAT_0097a80c = (void *)(uintptr_t) (undefined4)(uintptr_t)((void *)0x0);
  }
  if (StaticMembers != (ClassMember *)0x0) {
    port_op_delete(StaticMembers);
    StaticMembers = (ClassMember *)0x0;
  }
  return;
}





//==== 008fd3d0 dynamic_atexit_destructor_for_StaticMembers_008fd3d0 ====


/* void __cdecl  0 private_staticintconst__cdeclRefractiveIndexSpectrum__ReflectionInfoStruct_classRefractiveIndexSpectrum___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_RefractiveIndexSpectrum__ReflectionInfoStruct_class_RefractiveIndexSpectrum___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  if (DAT_0097a7e0 != (void *)0x0) {
    port_op_delete(DAT_0097a7e0);
    DAT_0097a7e0 = (void *)(uintptr_t) (undefined4)(uintptr_t)((void *)0x0);
  }
  if (StaticMembers != (ClassMember *)0x0) {
    port_op_delete(StaticMembers);
    StaticMembers = (ClassMember *)0x0;
  }
  return;
}





//==== 008fecd0 dynamic_atexit_destructor_for_StaticMembers_008fecd0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclConcept__ReflectionInfoStruct_classConcept___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_Concept__ReflectionInfoStruct_class_Concept___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 9;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008fed20 dynamic_atexit_destructor_for_StaticMembers_008fed20 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclCredits__ReflectionInfoStruct_classCredits___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_Credits__ReflectionInfoStruct_class_Credits___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 9;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008fed70 dynamic_atexit_destructor_for_StaticMembers_008fed70 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclCreditsSection__ReflectionInfoStruct_classCreditsSection___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_CreditsSection__ReflectionInfoStruct_class_CreditsSection___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 2;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008fedc0 dynamic_atexit_destructor_for_StaticMembers_008fedc0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclNewsItem__ReflectionInfoStruct_classNewsItem___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_NewsItem__ReflectionInfoStruct_class_NewsItem___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 3;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008fee10 dynamic_atexit_destructor_for_StaticMembers_008fee10 ====


/* void __cdecl  0 private_staticintconst__cdeclConcept__ReflectionInfoStruct_classConcept___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void)
    */

void __cdecl
 private__static_int_const___cdecl_Concept__ReflectionInfoStruct_class_Concept___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 9;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008fee60 dynamic_atexit_destructor_for_StaticMembers_008fee60 ====


/* void __cdecl  0 private_staticintconst__cdeclCredits__ReflectionInfoStruct_classCredits___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void)
    */

void __cdecl
 private__static_int_const___cdecl_Credits__ReflectionInfoStruct_class_Credits___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 9;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008feeb0 dynamic_atexit_destructor_for_StaticMembers_008feeb0 ====


/* void __cdecl  0 private_staticintconst__cdeclCreditsSection__ReflectionInfoStruct_classCreditsSection___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_CreditsSection__ReflectionInfoStruct_class_CreditsSection___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 2;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008fef00 dynamic_atexit_destructor_for_StaticMembers_008fef00 ====


/* void __cdecl  0 private_staticintconst__cdeclNewsItem__ReflectionInfoStruct_classNewsItem___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_NewsItem__ReflectionInfoStruct_class_NewsItem___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 3;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ff2d0 dynamic_atexit_destructor_for_StaticMembers_008ff2d0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclAudioSettings__ReflectionInfoStruct_structAudioSettings___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_AudioSettings__ReflectionInfoStruct_struct_AudioSettings___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 5;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ff320 dynamic_atexit_destructor_for_StaticMembers_008ff320 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclGameGraphicsSettings__ReflectionInfoStruct_structGameGraphicsSettings___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_GameGraphicsSettings__ReflectionInfoStruct_struct_GameGraphicsSettings___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 10;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ff370 dynamic_atexit_destructor_for_StaticMembers_008ff370 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclGameplaySettings__ReflectionInfoStruct_structGameplaySettings___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_GameplaySettings__ReflectionInfoStruct_struct_GameplaySettings___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 5;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ff3c0 dynamic_atexit_destructor_for_StaticMembers_008ff3c0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclGeneralSettings__ReflectionInfoStruct_structGeneralSettings___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_GeneralSettings__ReflectionInfoStruct_struct_GeneralSettings___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 5;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ff410 dynamic_atexit_destructor_for_StaticMembers_008ff410 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclGraphicsSettings__ReflectionInfoStruct_structGraphicsSettings___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_GraphicsSettings__ReflectionInfoStruct_struct_GraphicsSettings___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 8;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ff460 dynamic_atexit_destructor_for_StaticMembers_008ff460 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclInterfaceSettings__ReflectionInfoStruct_structInterfaceSettings___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_InterfaceSettings__ReflectionInfoStruct_struct_InterfaceSettings___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0xd;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ff4b0 dynamic_atexit_destructor_for_StaticMembers_008ff4b0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclLightingSettings__ReflectionInfoStruct_structLightingSettings___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_LightingSettings__ReflectionInfoStruct_struct_LightingSettings___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 4;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ff500 dynamic_atexit_destructor_for_StaticMembers_008ff500 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclPostProcessSettings__ReflectionInfoStruct_structPostProcessSettings___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_PostProcessSettings__ReflectionInfoStruct_struct_PostProcessSettings___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 5;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ff550 dynamic_atexit_destructor_for_StaticMembers_008ff550 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclTextureSettings__ReflectionInfoStruct_structTextureSettings___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_TextureSettings__ReflectionInfoStruct_struct_TextureSettings___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 4;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ff5a0 dynamic_atexit_destructor_for_StaticMembers_008ff5a0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclPreferences__ReflectionInfoStruct_classPreferences___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_Preferences__ReflectionInfoStruct_class_Preferences___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 5;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ff5f0 dynamic_atexit_destructor_for_StaticMembers_008ff5f0 ====


/* void __cdecl  0 private_staticintconst__cdeclAudioSettings__ReflectionInfoStruct_structAudioSettings___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_AudioSettings__ReflectionInfoStruct_struct_AudioSettings___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 5;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ff640 dynamic_atexit_destructor_for_StaticMembers_008ff640 ====


/* void __cdecl  0 private_staticintconst__cdeclGameGraphicsSettings__ReflectionInfoStruct_structGameGraphicsSettings___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_GameGraphicsSettings__ReflectionInfoStruct_struct_GameGraphicsSettings___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 10;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ff690 dynamic_atexit_destructor_for_StaticMembers_008ff690 ====


/* void __cdecl  0 private_staticintconst__cdeclGameplaySettings__ReflectionInfoStruct_structGameplaySettings___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_GameplaySettings__ReflectionInfoStruct_struct_GameplaySettings___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 5;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ff6e0 dynamic_atexit_destructor_for_StaticMembers_008ff6e0 ====


/* void __cdecl  0 private_staticintconst__cdeclGeneralSettings__ReflectionInfoStruct_structGeneralSettings___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_GeneralSettings__ReflectionInfoStruct_struct_GeneralSettings___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 5;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ff730 dynamic_atexit_destructor_for_StaticMembers_008ff730 ====


/* void __cdecl  0 private_staticintconst__cdeclGraphicsSettings__ReflectionInfoStruct_structGraphicsSettings___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_GraphicsSettings__ReflectionInfoStruct_struct_GraphicsSettings___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 8;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ff780 dynamic_atexit_destructor_for_StaticMembers_008ff780 ====


/* void __cdecl  0 private_staticintconst__cdeclInterfaceSettings__ReflectionInfoStruct_structInterfaceSettings___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_InterfaceSettings__ReflectionInfoStruct_struct_InterfaceSettings___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0xd;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ff7d0 dynamic_atexit_destructor_for_StaticMembers_008ff7d0 ====


/* void __cdecl  0 private_staticintconst__cdeclLightingSettings__ReflectionInfoStruct_structLightingSettings___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_LightingSettings__ReflectionInfoStruct_struct_LightingSettings___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 4;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ff820 dynamic_atexit_destructor_for_StaticMembers_008ff820 ====


/* void __cdecl  0 private_staticintconst__cdeclPostProcessSettings__ReflectionInfoStruct_structPostProcessSettings___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_PostProcessSettings__ReflectionInfoStruct_struct_PostProcessSettings___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 5;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ff870 dynamic_atexit_destructor_for_StaticMembers_008ff870 ====


/* void __cdecl  0 private_staticintconst__cdeclTextureSettings__ReflectionInfoStruct_structTextureSettings___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_TextureSettings__ReflectionInfoStruct_struct_TextureSettings___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 4;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ff8c0 dynamic_atexit_destructor_for_StaticMembers_008ff8c0 ====


/* void __cdecl  0 private_staticintconst__cdeclPreferences__ReflectionInfoStruct_classPreferences___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_Preferences__ReflectionInfoStruct_class_Preferences___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 5;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 008ffa90 dynamic_atexit_destructor_for_DefaultSetters_008ffa90 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclNormalTextureShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_NormalTextureShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 009000d0 dynamic_atexit_destructor_for_ValueLocations_009000d0 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclNormalTextureShader__GetValueLocations_void_:: 0 2:: 0 dynamicatexitdestructorforValueLocations''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_NormalTextureShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations(void)

{
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))));
  }
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) = (void **)0x0;
  return;
}

//==== 00900110 dynamic_atexit_destructor_for_StaticMembers_00900110 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclCelestialOrbit__ReflectionInfoStruct_structCelestialOrbit___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_CelestialOrbit__ReflectionInfoStruct_struct_CelestialOrbit___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 3;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 00900160 dynamic_atexit_destructor_for_StaticMembers_00900160 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclOrbitalElements__ReflectionInfoStruct_structOrbitalElements___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_OrbitalElements__ReflectionInfoStruct_struct_OrbitalElements___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 8;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 009001b0 dynamic_atexit_destructor_for_StaticMembers_009001b0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclStarterFleet__ReflectionInfoStruct_structStarterFleet___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_StarterFleet__ReflectionInfoStruct_struct_StarterFleet___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0xd;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 00900200 dynamic_atexit_destructor_for_StaticMembers_00900200 ====


/* void __cdecl  0 private_staticintconst__cdeclCelestialOrbit__ReflectionInfoStruct_structCelestialOrbit___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_CelestialOrbit__ReflectionInfoStruct_struct_CelestialOrbit___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 3;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 00900250 dynamic_atexit_destructor_for_StaticMembers_00900250 ====


/* void __cdecl  0 private_staticintconst__cdeclOrbitalElements__ReflectionInfoStruct_structOrbitalElements___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_OrbitalElements__ReflectionInfoStruct_struct_OrbitalElements___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 8;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 009002a0 dynamic_atexit_destructor_for_StaticMembers_009002a0 ====


/* void __cdecl  0 private_staticintconst__cdeclStarterFleet__ReflectionInfoStruct_structStarterFleet___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_StarterFleet__ReflectionInfoStruct_struct_StarterFleet___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0xd;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 00900770 dynamic_atexit_destructor_for_StaticMembers_00900770 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclCampaign__ReflectionInfoStruct_structCampaign___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_Campaign__ReflectionInfoStruct_struct_Campaign___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 8;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 009007c0 dynamic_atexit_destructor_for_StaticMembers_009007c0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclCelestialLocation__ReflectionInfoStruct_structCelestialLocation___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_CelestialLocation__ReflectionInfoStruct_struct_CelestialLocation___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 4;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 00900810 dynamic_atexit_destructor_for_StaticMembers_00900810 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclCustomObjective__ReflectionInfoStruct_structCustomObjective___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_CustomObjective__ReflectionInfoStruct_struct_CustomObjective___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 4;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 00900860 dynamic_atexit_destructor_for_StaticMembers_00900860 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclCutsceneMessage__ReflectionInfoStruct_structCutsceneMessage___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_CutsceneMessage__ReflectionInfoStruct_struct_CutsceneMessage___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 3;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 009008b0 dynamic_atexit_destructor_for_StaticMembers_009008b0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclGlobalSaveValues__ReflectionInfoStruct_structGlobalSaveValues___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_GlobalSaveValues__ReflectionInfoStruct_struct_GlobalSaveValues___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 2;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 00900900 dynamic_atexit_destructor_for_StaticMembers_00900900 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclLevel__ReflectionInfoStruct_structLevel___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_Level__ReflectionInfoStruct_struct_Level___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0x15;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 00900950 dynamic_atexit_destructor_for_StaticMembers_00900950 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclLevelBadges__ReflectionInfoStruct_structLevelBadges___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_LevelBadges__ReflectionInfoStruct_struct_LevelBadges___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  ReflectionInfoStruct_L_struct_Campaign_G_ *pRVar1;
  ReflectionInfoStruct_L_struct_Campaign_G_ *pRVar2;
  int iVar3;
  
  iVar3 = 10;
  pRVar2 = (ReflectionInfoStruct_L_struct_Campaign_G_ *)(& cde_l2_850eb621_ReflectionInfo);
  do {
    pRVar1 = pRVar2 + -0x28;
    iVar3 = iVar3 + -1;
    if (*(void **)(pRVar2 + -0x10) != (void *)0x0) {
      port_op_delete(*(void **)(pRVar2 + -0x10));
      *(undefined4 *)(pRVar2 + -0x10) = 0;
    }
    if (*(void **)pRVar1 != (void *)0x0) {
      port_op_delete(*(void **)pRVar1);
      *(undefined4 *)pRVar1 = 0;
    }
    pRVar2 = pRVar1;
  } while (iVar3 != 0);
  return;
}





//==== 009009a0 dynamic_atexit_destructor_for_StaticMembers_009009a0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclLevelMessages__ReflectionInfoStruct_structLevelMessages___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_LevelMessages__ReflectionInfoStruct_struct_LevelMessages___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0xf;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 009009f0 dynamic_atexit_destructor_for_StaticMembers_009009f0 ====


/* void __cdecl  0 private_staticintconst__cdeclCampaign__ReflectionInfoStruct_structCampaign___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_Campaign__ReflectionInfoStruct_struct_Campaign___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 8;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 00900a40 dynamic_atexit_destructor_for_StaticMembers_00900a40 ====


/* void __cdecl  0 private_staticintconst__cdeclCelestialLocation__ReflectionInfoStruct_structCelestialLocation___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_CelestialLocation__ReflectionInfoStruct_struct_CelestialLocation___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 4;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 00900a90 dynamic_atexit_destructor_for_StaticMembers_00900a90 ====


/* void __cdecl  0 private_staticintconst__cdeclCustomObjective__ReflectionInfoStruct_structCustomObjective___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_CustomObjective__ReflectionInfoStruct_struct_CustomObjective___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 4;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 00900ae0 dynamic_atexit_destructor_for_StaticMembers_00900ae0 ====


/* void __cdecl  0 private_staticintconst__cdeclCutsceneMessage__ReflectionInfoStruct_structCutsceneMessage___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_CutsceneMessage__ReflectionInfoStruct_struct_CutsceneMessage___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 3;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 00900b30 dynamic_atexit_destructor_for_StaticMembers_00900b30 ====


/* void __cdecl  0 private_staticintconst__cdeclGlobalSaveValues__ReflectionInfoStruct_structGlobalSaveValues___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_GlobalSaveValues__ReflectionInfoStruct_struct_GlobalSaveValues___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 2;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 00900b80 dynamic_atexit_destructor_for_StaticMembers_00900b80 ====


/* void __cdecl  0 private_staticintconst__cdeclLevel__ReflectionInfoStruct_structLevel___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void)
    */

void __cdecl
 private__static_int_const___cdecl_Level__ReflectionInfoStruct_struct_Level___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0x15;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 00900bd0 dynamic_atexit_destructor_for_StaticMembers_00900bd0 ====


/* void __cdecl  0 private_staticintconst__cdeclLevelBadges__ReflectionInfoStruct_structLevelBadges___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_LevelBadges__ReflectionInfoStruct_struct_LevelBadges___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 10;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 00900c20 dynamic_atexit_destructor_for_StaticMembers_00900c20 ====


/* void __cdecl  0 private_staticintconst__cdeclLevelMessages__ReflectionInfoStruct_structLevelMessages___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_LevelMessages__ReflectionInfoStruct_struct_LevelMessages___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0xf;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 00902270 dynamic_atexit_destructor_for_StaticMembers_00902270 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclAsteroidSpectralType__ReflectionInfoStruct_structAsteroidSpectralType___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_AsteroidSpectralType__ReflectionInfoStruct_struct_AsteroidSpectralType___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 2;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 009022c0 dynamic_atexit_destructor_for_StaticMembers_009022c0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclCelestialAtmosphere__ReflectionInfoStruct_structCelestialAtmosphere___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_CelestialAtmosphere__ReflectionInfoStruct_struct_CelestialAtmosphere___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 3;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 00902310 dynamic_atexit_destructor_for_StaticMembers_00902310 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclCelestialBody__ReflectionInfoStruct_structCelestialBody___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_CelestialBody__ReflectionInfoStruct_struct_CelestialBody___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0xd;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 00902360 dynamic_atexit_destructor_for_StaticMembers_00902360 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclCelestialRing__ReflectionInfoStruct_structCelestialRing___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_CelestialRing__ReflectionInfoStruct_struct_CelestialRing___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 4;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 009023b0 dynamic_atexit_destructor_for_StaticMembers_009023b0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclCelestialRotation__ReflectionInfoStruct_structCelestialRotation___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_CelestialRotation__ReflectionInfoStruct_struct_CelestialRotation___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 3;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 00902400 dynamic_atexit_destructor_for_StaticMembers_00902400 ====


/* void __cdecl  0 private_staticintconst__cdeclAsteroidSpectralType__ReflectionInfoStruct_structAsteroidSpectralType___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_AsteroidSpectralType__ReflectionInfoStruct_struct_AsteroidSpectralType___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 2;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 00902450 dynamic_atexit_destructor_for_StaticMembers_00902450 ====


/* void __cdecl  0 private_staticintconst__cdeclCelestialAtmosphere__ReflectionInfoStruct_structCelestialAtmosphere___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_CelestialAtmosphere__ReflectionInfoStruct_struct_CelestialAtmosphere___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 3;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 009024a0 dynamic_atexit_destructor_for_StaticMembers_009024a0 ====


/* void __cdecl  0 private_staticintconst__cdeclCelestialBody__ReflectionInfoStruct_structCelestialBody___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_CelestialBody__ReflectionInfoStruct_struct_CelestialBody___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0xd;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 009024f0 dynamic_atexit_destructor_for_StaticMembers_009024f0 ====


/* void __cdecl  0 private_staticintconst__cdeclCelestialRing__ReflectionInfoStruct_structCelestialRing___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_CelestialRing__ReflectionInfoStruct_struct_CelestialRing___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 4;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 00902540 dynamic_atexit_destructor_for_StaticMembers_00902540 ====


/* void __cdecl  0 private_staticintconst__cdeclCelestialRotation__ReflectionInfoStruct_structCelestialRotation___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_CelestialRotation__ReflectionInfoStruct_struct_CelestialRotation___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 3;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 00902890 dynamic_atexit_destructor_for_DefaultSetters_00902890 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclNormal3DShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_Normal3DShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 00902d50 dynamic_atexit_destructor_for_ValueLocations_00902d50 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclNormal3DShader__GetValueLocations_void_:: 0 2:: 0 dynamicatexitdestructorforValueLocations''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_Normal3DShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations(void)

{
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))));
  }
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) = (void **)0x0;
  return;
}

//==== 00903d40 dynamic_atexit_destructor_for_StaticMembers_00903d40 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclInterceptionProtocol__ReflectionInfoStruct_structInterceptionProtocol___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_InterceptionProtocol__ReflectionInfoStruct_struct_InterceptionProtocol___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 10;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 00903d90 dynamic_atexit_destructor_for_StaticMembers_00903d90 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclLaunchProtocol__ReflectionInfoStruct_structLaunchProtocol___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_LaunchProtocol__ReflectionInfoStruct_struct_LaunchProtocol___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 7;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 00903de0 dynamic_atexit_destructor_for_StaticMembers_00903de0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclMilitaryDoctrine__ReflectionInfoStruct_structMilitaryDoctrine___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_MilitaryDoctrine__ReflectionInfoStruct_struct_MilitaryDoctrine___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 10;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 00903e30 dynamic_atexit_destructor_for_StaticMembers_00903e30 ====


/* void __cdecl  0 private_staticintconst__cdeclInterceptionProtocol__ReflectionInfoStruct_structInterceptionProtocol___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_InterceptionProtocol__ReflectionInfoStruct_struct_InterceptionProtocol___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 10;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 00903e80 dynamic_atexit_destructor_for_StaticMembers_00903e80 ====


/* void __cdecl  0 private_staticintconst__cdeclLaunchProtocol__ReflectionInfoStruct_structLaunchProtocol___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_LaunchProtocol__ReflectionInfoStruct_struct_LaunchProtocol___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 7;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 00903ed0 dynamic_atexit_destructor_for_StaticMembers_00903ed0 ====


/* void __cdecl  0 private_staticintconst__cdeclMilitaryDoctrine__ReflectionInfoStruct_structMilitaryDoctrine___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_MilitaryDoctrine__ReflectionInfoStruct_struct_MilitaryDoctrine___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 10;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 00905920 dynamic_atexit_destructor_for_DefaultSetters_00905920 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclPointShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_PointShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 00905e60 dynamic_atexit_destructor_for_ValueLocations_00905e60 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclPointShader__GetValueLocations_void_:: 0 2:: 0 dynamicatexitdestructorforValueLocations''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_PointShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations(void)

{
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))));
  }
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) = (void **)0x0;
  return;
}

//==== 0090c410 dynamic_atexit_destructor_for_StaticMembers_0090c410 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclCapitalShipProtocol__ReflectionInfoStruct_structCapitalShipProtocol___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_CapitalShipProtocol__ReflectionInfoStruct_struct_CapitalShipProtocol___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 5;
  piVar2 = & cde_l2_b73f2f5a_Count;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 0090c460 dynamic_atexit_destructor_for_StaticMembers_0090c460 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclCombatProtocol__ReflectionInfoStruct_structCombatProtocol___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_CombatProtocol__ReflectionInfoStruct_struct_CombatProtocol___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 6;
  piVar2 = & cde_l2_99cec2b2_Count;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 0090c4b0 dynamic_atexit_destructor_for_StaticMembers_0090c4b0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclDroneProtocol__ReflectionInfoStruct_structDroneProtocol___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_DroneProtocol__ReflectionInfoStruct_struct_DroneProtocol___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 8;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 0090c500 dynamic_atexit_destructor_for_StaticMembers_0090c500 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclFlareProtocol__ReflectionInfoStruct_structFlareProtocol___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_FlareProtocol__ReflectionInfoStruct_struct_FlareProtocol___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 5;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 0090c550 dynamic_atexit_destructor_for_StaticMembers_0090c550 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclMissileProtocol__ReflectionInfoStruct_structMissileProtocol___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_MissileProtocol__ReflectionInfoStruct_struct_MissileProtocol___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 4;
  piVar2 = & cde_l2_936f8627__thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 0090c5a0 dynamic_atexit_destructor_for_StaticMembers_0090c5a0 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclWeaponsProtocol__ReflectionInfoStruct_structWeaponsProtocol___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_WeaponsProtocol__ReflectionInfoStruct_struct_WeaponsProtocol___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 6;
  piVar2 = & cde_l2_c85ba4e1_Count;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 0090c5f0 dynamic_atexit_destructor_for_StaticMembers_0090c5f0 ====


/* void __cdecl  0 private_staticintconst__cdeclCapitalShipProtocol__ReflectionInfoStruct_structCapitalShipProtocol___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_CapitalShipProtocol__ReflectionInfoStruct_struct_CapitalShipProtocol___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 5;
  piVar2 = & cde_l2_2ed4ead7__thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 0090c640 dynamic_atexit_destructor_for_StaticMembers_0090c640 ====


/* void __cdecl  0 private_staticintconst__cdeclCombatProtocol__ReflectionInfoStruct_structCombatProtocol___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_CombatProtocol__ReflectionInfoStruct_struct_CombatProtocol___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 6;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 0090c690 dynamic_atexit_destructor_for_StaticMembers_0090c690 ====


/* void __cdecl  0 private_staticintconst__cdeclDroneProtocol__ReflectionInfoStruct_structDroneProtocol___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_DroneProtocol__ReflectionInfoStruct_struct_DroneProtocol___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 8;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 0090c6e0 dynamic_atexit_destructor_for_StaticMembers_0090c6e0 ====


/* void __cdecl  0 private_staticintconst__cdeclFlareProtocol__ReflectionInfoStruct_structFlareProtocol___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_FlareProtocol__ReflectionInfoStruct_struct_FlareProtocol___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 5;
  piVar2 = &_thread_safe_static_guard_0__;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 0090c730 dynamic_atexit_destructor_for_StaticMembers_0090c730 ====


/* void __cdecl  0 private_staticintconst__cdeclMissileProtocol__ReflectionInfoStruct_structMissileProtocol___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_MissileProtocol__ReflectionInfoStruct_struct_MissileProtocol___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 4;
  piVar2 = & cde_l2_eafc877e_Count;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 0090c780 dynamic_atexit_destructor_for_StaticMembers_0090c780 ====


/* void __cdecl  0 private_staticintconst__cdeclWeaponsProtocol__ReflectionInfoStruct_structWeaponsProtocol___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_WeaponsProtocol__ReflectionInfoStruct_struct_WeaponsProtocol___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 6;
  piVar2 = & cde_l2_2de5811c_Count;
  do {
    piVar1 = piVar2 + -10;
    iVar3 = iVar3 + -1;
    if ((void *)piVar2[-4] != (void *)0x0) {
      port_op_delete((void *)piVar2[-4]);
      piVar2[-4] = 0;
    }
    if ((void *)*piVar1 != (void *)0x0) {
      port_op_delete((void *)*piVar1);
      *piVar1 = 0;
    }
    piVar2 = piVar1;
  } while (iVar3 != 0);
  return;
}





//==== 0090dfd0 dynamic_atexit_destructor_for_DefaultSetters_0090dfd0 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclUIShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void)
    */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_UIShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 0090e610 dynamic_atexit_destructor_for_ValueLocations_0090e610 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclUIShader__GetValueLocations_void_:: 0 2:: 0 dynamicatexitdestructorforValueLocations''(void)
    */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_UIShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations(void)

{
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))));
  }
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) = (void **)0x0;
  return;
}

//==== 00910790 dynamic_atexit_destructor_for_DefaultSetters_00910790 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclNormalTexture3DShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_NormalTexture3DShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 00910850 dynamic_atexit_destructor_for_ValueLocations_00910850 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclNormalTexture3DShader__GetValueLocations_void_:: 0 2:: 0 dynamicatexitdestructorforValueLocations''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_NormalTexture3DShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations(void)

{
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))));
  }
  (*(struct Actor *)(ValueLocations))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(ValueLocations)))) = (void **)0x0;
  return;
}

//==== 00910930 dynamic_atexit_destructor_for_StaticMembers_00910930 ====


/* void __cdecl  0 private_staticstructutil__ClassMemberconst__cdeclLanguageOption__ReflectionInfoStruct_classLanguageOption___StaticGetMemberByIndex_int_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_struct_util__ClassMember_const___cdecl_LanguageOption__ReflectionInfoStruct_class_LanguageOption___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  if (DAT_0098cc04 != (void *)0x0) {
    port_op_delete(DAT_0098cc04);
    DAT_0098cc04 = (void *)(uintptr_t) (undefined4)(uintptr_t)((void *)0x0);
  }
  if (StaticMembers != (ClassMember *)0x0) {
    port_op_delete(StaticMembers);
    StaticMembers = (ClassMember *)0x0;
  }
  return;
}





//==== 00910970 dynamic_atexit_destructor_for_StaticMembers_00910970 ====


/* void __cdecl  0 private_staticintconst__cdeclLanguageOption__ReflectionInfoStruct_classLanguageOption___StaticGetMemberCount_void_:: 0 2:: 0 dynamicatexitdestructorforStaticMembers''(void) */

void __cdecl
 private__static_int_const___cdecl_LanguageOption__ReflectionInfoStruct_class_LanguageOption___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers(void)

{
  if (DAT_0098cbd8 != (void *)0x0) {
    port_op_delete(DAT_0098cbd8);
    DAT_0098cbd8 = (void *)(uintptr_t) (undefined4)(uintptr_t)((void *)0x0);
  }
  if (StaticMembers != (ClassMember *)0x0) {
    port_op_delete(StaticMembers);
    StaticMembers = (ClassMember *)0x0;
  }
  return;
}





//==== 00910c50 dynamic_atexit_destructor_for_DefaultSetters_00910c50 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclFontShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void)
    */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_FontShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 00910c90 dynamic_atexit_destructor_for_DefaultSetters_00910c90 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclLine2DShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_Line2DShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 00910cd0 dynamic_atexit_destructor_for_DefaultSetters_00910cd0 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclPoint2DShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_Point2DShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 00910d10 dynamic_atexit_destructor_for_DefaultSetters_00910d10 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclPostProcessBlurCrossShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_PostProcessBlurCrossShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 00910d50 dynamic_atexit_destructor_for_DefaultSetters_00910d50 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclPostProcessBlurShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_PostProcessBlurShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

//==== 00910d90 dynamic_atexit_destructor_for_DefaultSetters_00910d90 ====

/* void __cdecl  0 private_staticclassutil__Darray_void___cdecl___void_____cdeclPostProcessBrightnessShader__GetDefaultSetters_void_:: 0 2:: 0 dynamicatexitdestructorforDefaultSetters''(void) */

void __cdecl
 private__static_class_util__Darray_void____cdecl___void______cdecl_PostProcessBrightnessShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters(void)

{
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable_2;
  if ((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) != (_func___cdecl_void **)0x0) {
    port_op_delete((*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))));
  }
  (*(struct Actor *)(DefaultSetters))._pad_0x0_0 = (int)&vftable;
  (*(void ***)&((*(struct ActorDropdownAction *)(DefaultSetters)))) = (void **)0x0;
  return;
}

