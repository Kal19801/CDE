// Auto-generated from Ghidra decompilation
#include "port_prelude.h"

//==== 004a58d0 GetStatic_004a58d0 ====


/* public: static class ShadowShader * __cdecl ShadowShader__GetStatic(void) */

ShadowShader * __cdecl ShadowShader__GetStatic(void)

{
  ShadowShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_a571dae2__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_af74693c__thread_safe_static_guard_0__);
    if ( cde_l2_af74693c__thread_safe_static_guard_0__ == -1) {
      this = (ShadowShader *)port_op_new(0x54);
      if (this == (ShadowShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x54);
        pSVar1 = (Shader *)ShadowShader__ShadowShader(this);
      }
       cde_l2_772dee8e_Singleton =
           (ShadowShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_af74693c__thread_safe_static_guard_0__);
    }
  }
  return cde_l2_772dee8e_Singleton;

}





//==== 004a5950 GetStatic_004a5950 ====


/* public: static class ShockwaveShader * __cdecl ShockwaveShader__GetStatic(void) */

ShockwaveShader * __cdecl ShockwaveShader__GetStatic(void)

{
  ShockwaveShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_ef42a047__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_41ac0342__thread_safe_static_guard_0__);
    if ( cde_l2_41ac0342__thread_safe_static_guard_0__ == -1) {
      this = (ShockwaveShader *)port_op_new(0x54);
      if (this == (ShockwaveShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x54);
        pSVar1 = (Shader *)ShockwaveShader__ShockwaveShader(this);
      }
       cde_l2_7f029cd8_Singleton = (ShockwaveShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_41ac0342__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_7f029cd8_Singleton;
}





//==== 004a59d0 GetStatic_004a59d0 ====


/* public: static class SimpleShader * __cdecl SimpleShader__GetStatic(void) */

SimpleShader * __cdecl SimpleShader__GetStatic(void)

{
  SimpleShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_9ac07bf8__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_3b1fe094__thread_safe_static_guard_0__);
    if ( cde_l2_3b1fe094__thread_safe_static_guard_0__ == -1) {
      this = (SimpleShader *)port_op_new(100);
      if (this == (SimpleShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,100);
        pSVar1 = (Shader *)SimpleShader__SimpleShader(this);
      }
       cde_l2_fac53c7c_Singleton =
           (SimpleShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_3b1fe094__thread_safe_static_guard_0__);
    }
  }
  return cde_l2_fac53c7c_Singleton;

}





//==== 004a5a50 GetStatic_004a5a50 ====


/* public: static class SpacecraftShadowShader * __cdecl SpacecraftShadowShader__GetStatic(void) */

SpacecraftShadowShader * __cdecl SpacecraftShadowShader__GetStatic(void)

{
  SpacecraftShadowShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_a66c1018__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_a66c1018__thread_safe_static_guard_0__);
    if ( cde_l2_a66c1018__thread_safe_static_guard_0__ == -1) {
      this = (SpacecraftShadowShader *)port_op_new(0x5c);
      if (this == (SpacecraftShadowShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x5c);
        pSVar1 = (Shader *)SpacecraftShadowShader__SpacecraftShadowShader(this);
      }
       cde_l2_b085159a_Singleton = (SpacecraftShadowShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_a66c1018__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_b085159a_Singleton;
}





//==== 004a5ad0 GetStatic_004a5ad0 ====


/* public: static class StarShader * __cdecl StarShader__GetStatic(void) */

StarShader * __cdecl StarShader__GetStatic(void)

{
  StarShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_33765518__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_a66c1018__thread_safe_static_guard_0__);
    if ( cde_l2_a66c1018__thread_safe_static_guard_0__ == -1) {
      this = (StarShader *)port_op_new(0x54);
      if (this == (StarShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x54);
        pSVar1 = (Shader *)StarShader__StarShader(this);
      }
       cde_l2_dd8fd90d_Singleton =
           (StarShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_a66c1018__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_dd8fd90d_Singleton;
}





//==== 004a5b50 GetValueLocations_004a5b50 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   ArmorShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl ArmorShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_08de9228__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_08de9228__thread_safe_static_guard_0__);
    if ( cde_l2_08de9228__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_49e1b354_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_49e1b354_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_49e1b354_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_ArmorShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_08de9228__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_49e1b354_ValueLocations;
}





//==== 004a5be0 GetValueLocations_004a5be0 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   AsteroidCratersShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl AsteroidCratersShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_bf1ff111__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_bf1ff111__thread_safe_static_guard_0__);
    if ( cde_l2_bf1ff111__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_c0e1e227_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_c0e1e227_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_c0e1e227_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_AsteroidCratersShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_bf1ff111__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_c0e1e227_ValueLocations;
}





//==== 004a5c70 GetValueLocations_004a5c70 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   AsteroidDiffuseShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl AsteroidDiffuseShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_bb60b7ac__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_bb60b7ac__thread_safe_static_guard_0__);
    if ( cde_l2_bb60b7ac__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_bdbe8b15_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_bdbe8b15_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_bdbe8b15_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_AsteroidDiffuseShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_bb60b7ac__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_bdbe8b15_ValueLocations;
}





//==== 004a5d00 GetValueLocations_004a5d00 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   AsteroidHeightShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl AsteroidHeightShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_0864d6b9__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_0864d6b9__thread_safe_static_guard_0__);
    if ( cde_l2_0864d6b9__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_6591e294_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_6591e294_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_6591e294_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_AsteroidHeightShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_0864d6b9__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_6591e294_ValueLocations;
}





//==== 004a5d90 GetValueLocations_004a5d90 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   AsteroidNormalShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl AsteroidNormalShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_fdd24ea5__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_fdd24ea5__thread_safe_static_guard_0__);
    if ( cde_l2_fdd24ea5__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_4d469b47_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_4d469b47_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_4d469b47_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_AsteroidNormalShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_fdd24ea5__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_4d469b47_ValueLocations;
}





//==== 004a5e20 GetValueLocations_004a5e20 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   BlastLauncherShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl BlastLauncherShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_e56e5415__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_e56e5415__thread_safe_static_guard_0__);
    if ( cde_l2_e56e5415__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_34fc9b0d_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_34fc9b0d_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_34fc9b0d_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_BlastLauncherShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_e56e5415__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_34fc9b0d_ValueLocations;
}





//==== 004a5eb0 GetValueLocations_004a5eb0 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   CityLightsShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl CityLightsShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_bef60b3b__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_bef60b3b__thread_safe_static_guard_0__);
    if ( cde_l2_bef60b3b__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_db58bde0_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_db58bde0_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_db58bde0_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_CityLightsShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_bef60b3b__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_db58bde0_ValueLocations;
}





//==== 004a5f40 GetValueLocations_004a5f40 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   DamageGeneratorShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl DamageGeneratorShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_8e5fb86e__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_8e5fb86e__thread_safe_static_guard_0__);
    if ( cde_l2_8e5fb86e__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_53bd7ae7_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_53bd7ae7_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_53bd7ae7_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_DamageGeneratorShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_8e5fb86e__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_53bd7ae7_ValueLocations;
}





//==== 004a5fd0 GetValueLocations_004a5fd0 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   DamageShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl DamageShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_d043f2a3__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_d043f2a3__thread_safe_static_guard_0__);
    if ( cde_l2_d043f2a3__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_b4cc841c_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_b4cc841c_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_b4cc841c_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_DamageShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_d043f2a3__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_b4cc841c_ValueLocations;
}





//==== 004a6060 GetValueLocations_004a6060 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   DamagedArmorShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl DamagedArmorShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_9e3ba46c__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_9e3ba46c__thread_safe_static_guard_0__);
    if ( cde_l2_9e3ba46c__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_1f073c63_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_1f073c63_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_1f073c63_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_DamagedArmorShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_9e3ba46c__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_1f073c63_ValueLocations;
}





//==== 004a60f0 GetValueLocations_004a60f0 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   DeferredGlobalLightingShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl DeferredGlobalLightingShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_e3f203a5__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_e3f203a5__thread_safe_static_guard_0__);
    if ( cde_l2_e3f203a5__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_76fef57d_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_76fef57d_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_76fef57d_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_DeferredGlobalLightingShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_e3f203a5__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_76fef57d_ValueLocations;
}





//==== 004a6180 GetValueLocations_004a6180 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   DeferredWorldLightingShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl DeferredWorldLightingShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_0680060c__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_0680060c__thread_safe_static_guard_0__);
    if ( cde_l2_0680060c__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_4ece91ea_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_4ece91ea_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_4ece91ea_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_DeferredWorldLightingShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_0680060c__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_4ece91ea_ValueLocations;
}





//==== 004a6210 GetValueLocations_004a6210 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   EquirectangularToCubeMapShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl EquirectangularToCubeMapShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_c792b937__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_c792b937__thread_safe_static_guard_0__);
    if ( cde_l2_c792b937__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_d512bd0a_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_d512bd0a_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_d512bd0a_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_EquirectangularToCubeMapShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_c792b937__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_d512bd0a_ValueLocations;
}





//==== 004a62a0 GetValueLocations_004a62a0 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   ExhaustShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl ExhaustShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_09f475bf__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_09f475bf__thread_safe_static_guard_0__);
    if ( cde_l2_09f475bf__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_756d1251_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_756d1251_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_756d1251_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_ExhaustShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_09f475bf__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_756d1251_ValueLocations;
}





//==== 004a6330 GetValueLocations_004a6330 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   GeneralModuleShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl GeneralModuleShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_08acfff6__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_08acfff6__thread_safe_static_guard_0__);
    if ( cde_l2_08acfff6__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_cf91e896_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_cf91e896_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_cf91e896_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_GeneralModuleShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_08acfff6__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_cf91e896_ValueLocations;
}





//==== 004a63c0 GetValueLocations_004a63c0 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   ParticleShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl ParticleShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_d9e6b5f4__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_d9e6b5f4__thread_safe_static_guard_0__);
    if ( cde_l2_d9e6b5f4__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_7dd4195a_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_7dd4195a_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_7dd4195a_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_ParticleShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_d9e6b5f4__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_7dd4195a_ValueLocations;
}





//==== 004a6450 GetValueLocations_004a6450 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   PlanetShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl PlanetShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_8acf0d57__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_8acf0d57__thread_safe_static_guard_0__);
    if ( cde_l2_8acf0d57__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_511f3bc0_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_511f3bc0_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_511f3bc0_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_PlanetShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_8acf0d57__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_511f3bc0_ValueLocations;
}





//==== 004a64e0 GetValueLocations_004a64e0 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   PropellantTankShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl PropellantTankShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_d88c7812__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_d88c7812__thread_safe_static_guard_0__);
    if ( cde_l2_d88c7812__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_5e9948ea_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_5e9948ea_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_5e9948ea_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_PropellantTankShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_d88c7812__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_5e9948ea_ValueLocations;
}





//==== 004a6570 GetValueLocations_004a6570 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   RadiatorShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl RadiatorShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_3e1a2b32__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_3e1a2b32__thread_safe_static_guard_0__);
    if ( cde_l2_3e1a2b32__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_dcdc7d33_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_dcdc7d33_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_dcdc7d33_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_RadiatorShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_3e1a2b32__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_dcdc7d33_ValueLocations;
}





//==== 004a6600 GetValueLocations_004a6600 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   RingShadowShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl RingShadowShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_204c7f52__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_204c7f52__thread_safe_static_guard_0__);
    if ( cde_l2_204c7f52__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_72c998f0_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_72c998f0_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_72c998f0_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_RingShadowShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_204c7f52__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_72c998f0_ValueLocations;
}





//==== 004a6690 GetValueLocations_004a6690 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   RingsShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl RingsShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_3788e619__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_3788e619__thread_safe_static_guard_0__);
    if ( cde_l2_3788e619__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_4d68d6b1_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_4d68d6b1_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_4d68d6b1_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_RingsShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_3788e619__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_4d68d6b1_ValueLocations;
}





//==== 004a6720 GetValueLocations_004a6720 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   RocketEngineShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl RocketEngineShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_c3fea693__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_c3fea693__thread_safe_static_guard_0__);
    if ( cde_l2_c3fea693__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_40dfed1c_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_40dfed1c_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_40dfed1c_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_RocketEngineShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_c3fea693__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_40dfed1c_ValueLocations;
}





//==== 004a67b0 GetValueLocations_004a67b0 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   ShadowShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl ShadowShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_77faeea3__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_77faeea3__thread_safe_static_guard_0__);
    if ( cde_l2_77faeea3__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_8f093a8b_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_8f093a8b_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_8f093a8b_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_ShadowShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_77faeea3__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_8f093a8b_ValueLocations;
}





//==== 004a6840 GetValueLocations_004a6840 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   ShockwaveShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl ShockwaveShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_51703b19__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_51703b19__thread_safe_static_guard_0__);
    if ( cde_l2_51703b19__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_e34a7f0c_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_e34a7f0c_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_e34a7f0c_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_ShockwaveShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_51703b19__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_e34a7f0c_ValueLocations;
}





//==== 004a68d0 GetValueLocations_004a68d0 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   SimpleShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl SimpleShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_cf365b5e__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_cf365b5e__thread_safe_static_guard_0__);
    if ( cde_l2_cf365b5e__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_29dfa488_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_29dfa488_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_29dfa488_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_SimpleShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_cf365b5e__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_29dfa488_ValueLocations;
}





//==== 004a6960 GetValueLocations_004a6960 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   SpacecraftShadowShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl SpacecraftShadowShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_218fbec0__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_218fbec0__thread_safe_static_guard_0__);
    if ( cde_l2_218fbec0__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_486c59bb_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_486c59bb_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_486c59bb_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_SpacecraftShadowShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_218fbec0__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_486c59bb_ValueLocations;
}





//==== 004a69f0 GetValueLocations_004a69f0 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   StarShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl StarShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_a2535e32__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_a2535e32__thread_safe_static_guard_0__);
    if ( cde_l2_a2535e32__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_0a0c4a65_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_0a0c4a65_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_0a0c4a65_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_StarShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_a2535e32__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_0a0c4a65_ValueLocations;
}





//==== 004a6a80 InitializeGameShaders ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* void __cdecl InitializeGameShaders(class PreferencesBase const *) */

void __cdecl InitializeGameShaders(PreferencesBase *param_1)

{
  undefined8 stack0xfffffffc;
  undefined4 uVar1;
  int iVar2;
  SpacecraftShader *pSVar3;
  RingsShader *pRVar4;
  PlanetShader *pPVar5;
  int iVar6;
  Str_L_char_G_ *pSVar7;
  char *pcVar8;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  StarShader__GetStatic();
  SimpleShader__GetStatic();
  DeferredGlobalLightingShader__GetStatic();
  DeferredWorldLightingShader__GetStatic();
  ExhaustShader__GetStatic();
  ShockwaveShader__GetStatic();
  DamageShader__GetStatic();
  DamagedArmorShader__GetStatic();
  ArmorShader__GetStatic();
  BlastLauncherShader__GetStatic();
  PropellantTankShader__GetStatic();
  RadiatorShader__GetStatic();
  RocketEngineShader__GetStatic();
  GeneralModuleShader__GetStatic();
  PlanetShader__GetStatic();
  RingsShader__GetStatic();
  ShadowShader__GetStatic();
  SpacecraftShadowShader__GetStatic();
  RingShadowShader__GetStatic();
  CityLightsShader__GetStatic();
  AsteroidCratersShader__GetStatic();
  AsteroidDiffuseShader__GetStatic();
  AsteroidHeightShader__GetStatic();
  AsteroidNormalShader__GetStatic();
  ParticleShader__GetStatic();
  DamageGeneratorShader__GetStatic();
  EquirectangularToCubeMapShader__GetStatic();
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  local_14.Length = 0;
  uVar1 = (**(code **)(param_1->_pad_0x0_0 + 0x98))();
  iVar2 = Preferences__GetShadowMapQuality((Preferences *)param_1);
  util__Printf(&local_14,(wchar_t*)("\n#define SHADOW_MAP_QUALITY %i\n#define SHADOW_MAP_SIZE %i"),iVar2,uVar1);
  pSVar3 = SpacecraftShader__GetStatic();
  util__Str_char___operator__o8((Str_L_char_G_ *)&pSVar3[1]._pad_0x4_1,&local_14);
  pRVar4 = RingsShader__GetStatic();
  util__Str_char___operator__o8(&pRVar4->AdditionalPreprocessor,&local_14);
  pcVar8 = "";
  if (0 < local_14.Capacity) {
    pcVar8 = local_14.Data;
  }
  pPVar5 = PlanetShader__GetStatic();
  iVar2 = Preferences__GetParallaxOcclusionMapQuality((Preferences *)param_1);
  iVar6 = Preferences__GetTextureSelfShadowingQuality((Preferences *)param_1);
  pSVar7 = util__Printf(&local_20,(wchar_t*)("%s\n#define SELF_SHADOW_QUALITY %i\n#define PARALLAX_MAP_QUALITY %i"),pcVar8
                        ,iVar6,iVar2);
  util__Str_char___operator__o8(&pPVar5->AdditionalPreprocessor,pSVar7);
  if (local_20.Data != (char *)0x0) {
    port_op_delete(local_20.Data);
  }
  if (local_14.Data != (char *)0x0) {
    port_op_delete(local_14.Data);
  }
  return;
}

//==== 004a6bf0 LoadAdditionalTextureLocation ====

/* private: static void __cdecl AsteroidDiffuseShader__LoadAdditionalTextureLocation(void) */

void __cdecl AsteroidDiffuseShader__LoadAdditionalTextureLocation(void)

{
  AsteroidDiffuseShader *pAVar1;
  AsteroidDiffuseShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  pcVar4 = "AdditionalTexture";
  pAVar2 = AsteroidDiffuseShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->AdditionalTextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103);
  if ((pAVar1->AdditionalTextureRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: AdditionalTexture."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  (**(code **)(pAVar1->_pad_0x0_0 + 0x84))(&local_8);
  return;
}

//==== 004a6c70 LoadAdditionalTextureLocation_004a6c70 ====

/* private: static void __cdecl EquirectangularToCubeMapShader__LoadAdditionalTextureLocation(void)
    */

void __cdecl EquirectangularToCubeMapShader__LoadAdditionalTextureLocation(void)

{
  EquirectangularToCubeMapShader *pEVar1;
  EquirectangularToCubeMapShader *pEVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pEVar1 = EquirectangularToCubeMapShader__GetStatic();
  pcVar4 = "AdditionalTexture";
  pEVar2 = EquirectangularToCubeMapShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pEVar2->_pad_0x4_1,pcVar4);
  (pEVar1->AdditionalTextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x11d);
  if ((pEVar1->AdditionalTextureRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x11d,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: AdditionalTexture."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pEVar1 = EquirectangularToCubeMapShader__GetStatic();
  (**(code **)(pEVar1->_pad_0x0_0 + 0x4c))(&local_8);
  return;
}

//==== 004a6cf0 LoadAlbedoLocation ====

/* private: static void __cdecl PlanetShader__LoadAlbedoLocation(void) */

void __cdecl PlanetShader__LoadAlbedoLocation(void)

{
  PlanetShader *pPVar1;
  PlanetShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PlanetShader__GetStatic();
  pcVar4 = "Albedo";
  pPVar2 = PlanetShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->AlbedoRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  if ((pPVar1->AlbedoRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: Albedo.");
    DebugBreak();
  }
  local_8 = 0;
  pPVar1 = PlanetShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x94))(&local_8);
  return;
}

//==== 004a6d70 LoadAlphaTextureLocation ====

/* private: static void __cdecl RingShadowShader__LoadAlphaTextureLocation(void) */

void __cdecl RingShadowShader__LoadAlphaTextureLocation(void)

{
  RingShadowShader *pRVar1;
  RingShadowShader *pRVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pRVar1 = RingShadowShader__GetStatic();
  pcVar4 = "AlphaTexture";
  pRVar2 = RingShadowShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pRVar2->_pad_0x4_1,pcVar4);
  (pRVar1->AlphaTextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd7);
  if ((pRVar1->AlphaTextureRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd7,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: AlphaTexture.");
    DebugBreak();
  }
  local_8 = 0;
  pRVar1 = RingShadowShader__GetStatic();
  (**(code **)(pRVar1->_pad_0x0_0 + 0x4c))(&local_8);
  return;
}

//==== 004a6df0 LoadAlphaTextureLocation_004a6df0 ====

/* private: static void __cdecl RingsShader__LoadAlphaTextureLocation(void) */

void __cdecl RingsShader__LoadAlphaTextureLocation(void)

{
  RingsShader *pRVar1;
  RingsShader *pRVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pRVar1 = RingsShader__GetStatic();
  pcVar4 = "AlphaTexture";
  pRVar2 = RingsShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pRVar2->_pad_0x4_1,pcVar4);
  (pRVar1->AlphaTextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200);
  if ((pRVar1->AlphaTextureRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: AlphaTexture.");
    DebugBreak();
  }
  local_8 = 1;
  pRVar1 = RingsShader__GetStatic();
  (**(code **)(pRVar1->_pad_0x0_0 + 0x60))(&local_8);
  return;
}

//==== 004a6e70 LoadApplyHeatLocation ====

/* private: static void __cdecl DamageShader__LoadApplyHeatLocation(void) */

void __cdecl DamageShader__LoadApplyHeatLocation(void)

{
  DamageShader *pDVar1;
  DamageShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_8;
  
  pDVar1 = DamageShader__GetStatic();
  pcVar4 = "ApplyHeat";
  pDVar2 = DamageShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->ApplyHeatRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x6c);
  if ((pDVar1->ApplyHeatRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x6c,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: ApplyHeat.");
    DebugBreak();
  }
  uStack_8 = uStack_8 & 0xffffff;
  pDVar1 = DamageShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 100))((int)&uStack_8 + 3);
  return;
}

//==== 004a6ee0 LoadBlackbodyRadiationPeakTemperature_KLocation_004a6ee0 ====

/* private: static void __cdecl PlanetShader__LoadBlackbodyRadiationPeakTemperature_KLocation(void)
    */

void __cdecl PlanetShader__LoadBlackbodyRadiationPeakTemperature_KLocation(void)

{
  PlanetShader *pPVar1;
  PlanetShader *pPVar2;
  int iVar3;
  double dVar4;
  char *pcVar5;
  float local_8;
  
  pPVar1 = PlanetShader__GetStatic();
  pcVar5 = "BlackbodyRadiationPeakTemperature_K";
  pPVar2 = PlanetShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar5);
  (pPVar1->BlackbodyRadiationPeakTemperature_KRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  if ((pPVar1->BlackbodyRadiationPeakTemperature_KRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: BlackbodyRadiationPeakTemperature_K."
                   );
    DebugBreak();
  }
  dVar4 = GetBlackbodyTexturePeakTemperature_K();
  local_8 = (float)dVar4;
  pPVar1 = PlanetShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x50))(&local_8);
  return;
}

//==== 004a6f60 LoadBlackbodyRadiationTextureLocation_004a6f60 ====

/* private: static void __cdecl PlanetShader__LoadBlackbodyRadiationTextureLocation(void) */

void __cdecl PlanetShader__LoadBlackbodyRadiationTextureLocation(void)

{
  PlanetShader *pPVar1;
  PlanetShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PlanetShader__GetStatic();
  pcVar4 = "BlackbodyRadiationTexture";
  pPVar2 = PlanetShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->BlackbodyRadiationTextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  if ((pPVar1->BlackbodyRadiationTextureRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: BlackbodyRadiationTexture."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pPVar1 = PlanetShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x54))(&local_8);
  return;
}

//==== 004a7000 LoadBottomLeftFrustumCornerLocation ====

/* private: static void __cdecl
   DeferredGlobalLightingShader__LoadBottomLeftFrustumCornerLocation(void) */

void __cdecl DeferredGlobalLightingShader__LoadBottomLeftFrustumCornerLocation(void)

{
  DeferredGlobalLightingShader *pDVar1;
  DeferredGlobalLightingShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined8 local_10;
  undefined4 local_8;
  
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  pcVar4 = "BottomLeftFrustumCorner";
  pDVar2 = DeferredGlobalLightingShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->BottomLeftFrustumCornerRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52);
  if ((pDVar1->BottomLeftFrustumCornerRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: BottomLeftFrustumCorner."
                   );
    DebugBreak();
  }
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  local_8 = 0;
  local_10 = 0;
  (**(code **)(pDVar1->_pad_0x0_0 + 0x60))(&local_10);
  return;
}

//==== 004a7090 LoadBottomLeftFrustumCornerLocation_004a7090 ====

/* private: static void __cdecl
   DeferredWorldLightingShader__LoadBottomLeftFrustumCornerLocation(void) */

void __cdecl DeferredWorldLightingShader__LoadBottomLeftFrustumCornerLocation(void)

{
  DeferredWorldLightingShader *pDVar1;
  DeferredWorldLightingShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined8 local_10;
  undefined4 local_8;
  
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  pcVar4 = "BottomLeftFrustumCorner";
  pDVar2 = DeferredWorldLightingShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->BottomLeftFrustumCornerRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a);
  if ((pDVar1->BottomLeftFrustumCornerRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: BottomLeftFrustumCorner."
                   );
    DebugBreak();
  }
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  local_8 = 0;
  local_10 = 0;
  (**(code **)(pDVar1->_pad_0x0_0 + 0x60))(&local_10);
  return;
}

//==== 004a7120 LoadBottomRightFrustumCornerLocation ====

/* private: static void __cdecl
   DeferredGlobalLightingShader__LoadBottomRightFrustumCornerLocation(void) */

void __cdecl DeferredGlobalLightingShader__LoadBottomRightFrustumCornerLocation(void)

{
  DeferredGlobalLightingShader *pDVar1;
  DeferredGlobalLightingShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined8 local_10;
  undefined4 local_8;
  
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  pcVar4 = "BottomRightFrustumCorner";
  pDVar2 = DeferredGlobalLightingShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->BottomRightFrustumCornerRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52);
  if ((pDVar1->BottomRightFrustumCornerRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: BottomRightFrustumCorner."
                   );
    DebugBreak();
  }
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  local_8 = 0;
  local_10 = 0;
  (**(code **)(pDVar1->_pad_0x0_0 + 0x68))(&local_10);
  return;
}

//==== 004a71b0 LoadBottomRightFrustumCornerLocation_004a71b0 ====

/* private: static void __cdecl
   DeferredWorldLightingShader__LoadBottomRightFrustumCornerLocation(void) */

void __cdecl DeferredWorldLightingShader__LoadBottomRightFrustumCornerLocation(void)

{
  DeferredWorldLightingShader *pDVar1;
  DeferredWorldLightingShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined8 local_10;
  undefined4 local_8;
  
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  pcVar4 = "BottomRightFrustumCorner";
  pDVar2 = DeferredWorldLightingShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->BottomRightFrustumCornerRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a);
  if ((pDVar1->BottomRightFrustumCornerRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: BottomRightFrustumCorner."
                   );
    DebugBreak();
  }
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  local_8 = 0;
  local_10 = 0;
  (**(code **)(pDVar1->_pad_0x0_0 + 0x68))(&local_10);
  return;
}

//==== 004a7240 LoadCameraPositionLocation_004a7240 ====

/* private: static void __cdecl DeferredGlobalLightingShader__LoadCameraPositionLocation(void) */

void __cdecl DeferredGlobalLightingShader__LoadCameraPositionLocation(void)

{
  DeferredGlobalLightingShader *pDVar1;
  DeferredGlobalLightingShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined8 local_10;
  undefined4 local_8;
  
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  pcVar4 = "CameraPosition";
  pDVar2 = DeferredGlobalLightingShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->CameraPositionRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52);
  if ((pDVar1->CameraPositionRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: CameraPosition.");
    DebugBreak();
  }
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  local_8 = 0;
  local_10 = 0;
  (**(code **)(pDVar1->_pad_0x0_0 + 0x7c))(&local_10);
  return;
}

//==== 004a72d0 LoadCameraPositionLocation_004a72d0 ====

/* private: static void __cdecl DeferredWorldLightingShader__LoadCameraPositionLocation(void) */

void __cdecl DeferredWorldLightingShader__LoadCameraPositionLocation(void)

{
  DeferredWorldLightingShader *pDVar1;
  DeferredWorldLightingShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined8 local_10;
  undefined4 local_8;
  
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  pcVar4 = "CameraPosition";
  pDVar2 = DeferredWorldLightingShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->CameraPositionRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a);
  if ((pDVar1->CameraPositionRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: CameraPosition.");
    DebugBreak();
  }
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  local_8 = 0;
  local_10 = 0;
  (**(code **)(pDVar1->_pad_0x0_0 + 0x7c))(&local_10);
  return;
}

//==== 004a7360 LoadCameraPositionLocation_004a7360 ====

/* private: static void __cdecl PlanetShader__LoadCameraPositionLocation(void) */

void __cdecl PlanetShader__LoadCameraPositionLocation(void)

{
  PlanetShader *pPVar1;
  PlanetShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined8 local_10;
  undefined4 local_8;
  
  pPVar1 = PlanetShader__GetStatic();
  pcVar4 = "CameraPosition";
  pPVar2 = PlanetShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->CameraPositionRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  if ((pPVar1->CameraPositionRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: CameraPosition.");
    DebugBreak();
  }
  pPVar1 = PlanetShader__GetStatic();
  local_8 = 0;
  local_10 = 0;
  (**(code **)(pPVar1->_pad_0x0_0 + 0xac))(&local_10);
  return;
}

//==== 004a7400 LoadCellSeparation_mLocation ====


/* private: static void __cdecl BlastLauncherShader__LoadCellSeparation_mLocation(void) */

void __cdecl BlastLauncherShader__LoadCellSeparation_mLocation(void)

{
  BlastLauncherShader *pBVar1;
  BlastLauncherShader *pBVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uStack_8;
  
  pBVar1 = BlastLauncherShader__GetStatic();
  pcVar4 = "CellSeparation_m";
  pBVar2 = BlastLauncherShader__GetStatic();
  uVar3 = (*___glewGetUniformLocation)(*(undefined4 *)(pBVar2 + 4),pcVar4);
  *(undefined4 *)(pBVar1 + 0x50) = uVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e);
  if (*(int *)(pBVar1 + 0x50) == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: CellSeparation_m.")
    ;
    DebugBreak();
  }
  uStack_8 = 0;
  pBVar1 = BlastLauncherShader__GetStatic();
  (**(code **)(*(int *)pBVar1 + 0x68))(&uStack_8);
  return;
}





//==== 004a7480 LoadCityLightsCubeTextureLocation ====

/* private: static void __cdecl PlanetShader__LoadCityLightsCubeTextureLocation(void) */

void __cdecl PlanetShader__LoadCityLightsCubeTextureLocation(void)

{
  PlanetShader *pPVar1;
  PlanetShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PlanetShader__GetStatic();
  pcVar4 = "CityLightsCubeTexture";
  pPVar2 = PlanetShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->CityLightsCubeTextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  if ((pPVar1->CityLightsCubeTextureRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: CityLightsCubeTexture."
                   );
    DebugBreak();
  }
  local_8 = 4;
  pPVar1 = PlanetShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x74))(&local_8);
  return;
}

//==== 004a7500 LoadCityLightsIntensityLocation ====

/* private: static void __cdecl PlanetShader__LoadCityLightsIntensityLocation(void) */

void __cdecl PlanetShader__LoadCityLightsIntensityLocation(void)

{
  PlanetShader *pPVar1;
  PlanetShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PlanetShader__GetStatic();
  pcVar4 = "CityLightsIntensity";
  pPVar2 = PlanetShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->CityLightsIntensityRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  if ((pPVar1->CityLightsIntensityRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: CityLightsIntensity."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pPVar1 = PlanetShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x9c))(&local_8);
  return;
}

//==== 004a7590 LoadColorAndRoughnessTextureLocation ====

/* private: static void __cdecl
   DeferredGlobalLightingShader__LoadColorAndRoughnessTextureLocation(void) */

void __cdecl DeferredGlobalLightingShader__LoadColorAndRoughnessTextureLocation(void)

{
  DeferredGlobalLightingShader *pDVar1;
  DeferredGlobalLightingShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  pcVar4 = "ColorAndRoughnessTexture";
  pDVar2 = DeferredGlobalLightingShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->ColorAndRoughnessTextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52);
  if ((pDVar1->ColorAndRoughnessTextureRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: ColorAndRoughnessTexture."
                   );
    DebugBreak();
  }
  local_8 = 1;
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x70))(&local_8);
  return;
}

//==== 004a7610 LoadColorAndRoughnessTextureLocation_004a7610 ====

/* private: static void __cdecl
   DeferredWorldLightingShader__LoadColorAndRoughnessTextureLocation(void) */

void __cdecl DeferredWorldLightingShader__LoadColorAndRoughnessTextureLocation(void)

{
  DeferredWorldLightingShader *pDVar1;
  DeferredWorldLightingShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  pcVar4 = "ColorAndRoughnessTexture";
  pDVar2 = DeferredWorldLightingShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->ColorAndRoughnessTextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a);
  if ((pDVar1->ColorAndRoughnessTextureRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: ColorAndRoughnessTexture."
                   );
    DebugBreak();
  }
  local_8 = 1;
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x70))(&local_8);
  return;
}

//==== 004a7690 LoadCubeMapFaceIDLocation ====

/* private: static void __cdecl AsteroidNormalShader__LoadCubeMapFaceIDLocation(void) */

void __cdecl AsteroidNormalShader__LoadCubeMapFaceIDLocation(void)

{
  AsteroidNormalShader *pAVar1;
  AsteroidNormalShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pAVar1 = AsteroidNormalShader__GetStatic();
  pcVar4 = "CubeMapFaceID";
  pAVar2 = AsteroidNormalShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->CubeMapFaceIDRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x10c);
  if ((pAVar1->CubeMapFaceIDRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x10c,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: CubeMapFaceID.");
    DebugBreak();
  }
  local_8 = 0;
  pAVar1 = AsteroidNormalShader__GetStatic();
  (**(code **)(pAVar1->_pad_0x0_0 + 0x50))(&local_8);
  return;
}

//==== 004a7710 LoadCubeMapFaceIDLocation_004a7710 ====

/* private: static void __cdecl EquirectangularToCubeMapShader__LoadCubeMapFaceIDLocation(void) */

void __cdecl EquirectangularToCubeMapShader__LoadCubeMapFaceIDLocation(void)

{
  EquirectangularToCubeMapShader *pEVar1;
  EquirectangularToCubeMapShader *pEVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pEVar1 = EquirectangularToCubeMapShader__GetStatic();
  pcVar4 = "CubeMapFaceID";
  pEVar2 = EquirectangularToCubeMapShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pEVar2->_pad_0x4_1,pcVar4);
  (pEVar1->CubeMapFaceIDRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x11d);
  if ((pEVar1->CubeMapFaceIDRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x11d,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: CubeMapFaceID.");
    DebugBreak();
  }
  local_8 = 0;
  pEVar1 = EquirectangularToCubeMapShader__GetStatic();
  (**(code **)(pEVar1->_pad_0x0_0 + 0x50))(&local_8);
  return;
}

//==== 004a7790 LoadDamageEffectLocation ====

/* private: static void __cdecl DamageShader__LoadDamageEffectLocation(void) */

void __cdecl DamageShader__LoadDamageEffectLocation(void)

{
  DamageShader *pDVar1;
  DamageShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DamageShader__GetStatic();
  pcVar4 = "DamageEffect";
  pDVar2 = DamageShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->DamageEffectRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x6c);
  if ((pDVar1->DamageEffectRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x6c,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: DamageEffect.");
    DebugBreak();
  }
  local_8 = 0;
  pDVar1 = DamageShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x58))(&local_8);
  return;
}

//==== 004a7810 LoadDamageTextureLocation_004a7810 ====


/* private: static void __cdecl SpacecraftShadowShader__LoadDamageTextureLocation(void) */

void __cdecl SpacecraftShadowShader__LoadDamageTextureLocation(void)

{
  SpacecraftShadowShader *pSVar1;
  SpacecraftShadowShader *pSVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uStack_8;
  
  pSVar1 = SpacecraftShadowShader__GetStatic();
  pcVar4 = "DamageTexture";
  pSVar2 = SpacecraftShadowShader__GetStatic();
  uVar3 = (*___glewGetUniformLocation)(*(undefined4 *)(pSVar2 + 4),pcVar4);
  *(undefined4 *)(pSVar1 + 0x48) = uVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd2);
  if (*(int *)(pSVar1 + 0x48) == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd2,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: DamageTexture.");
    DebugBreak();
  }
  uStack_8 = 0;
  pSVar1 = SpacecraftShadowShader__GetStatic();
  (**(code **)(*(int *)pSVar1 + 0x50))(&uStack_8);
  return;
}





//==== 004a7890 LoadDepthBufferTextureLocation ====

/* private: static void __cdecl DeferredGlobalLightingShader__LoadDepthBufferTextureLocation(void)
    */

void __cdecl DeferredGlobalLightingShader__LoadDepthBufferTextureLocation(void)

{
  DeferredGlobalLightingShader *pDVar1;
  DeferredGlobalLightingShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  pcVar4 = "DepthBufferTexture";
  pDVar2 = DeferredGlobalLightingShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->DepthBufferTextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52);
  if ((pDVar1->DepthBufferTextureRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: DepthBufferTexture."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x6c))(&local_8);
  return;
}

//==== 004a7910 LoadDepthBufferTextureLocation_004a7910 ====

/* private: static void __cdecl DeferredWorldLightingShader__LoadDepthBufferTextureLocation(void) */

void __cdecl DeferredWorldLightingShader__LoadDepthBufferTextureLocation(void)

{
  DeferredWorldLightingShader *pDVar1;
  DeferredWorldLightingShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  pcVar4 = "DepthBufferTexture";
  pDVar2 = DeferredWorldLightingShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->DepthBufferTextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a);
  if ((pDVar1->DepthBufferTextureRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: DepthBufferTexture."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x6c))(&local_8);
  return;
}

//==== 004a7990 LoadDiffuseCubeTextureLocation ====

/* private: static void __cdecl PlanetShader__LoadDiffuseCubeTextureLocation(void) */

void __cdecl PlanetShader__LoadDiffuseCubeTextureLocation(void)

{
  PlanetShader *pPVar1;
  PlanetShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PlanetShader__GetStatic();
  pcVar4 = "DiffuseCubeTexture";
  pPVar2 = PlanetShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->DiffuseCubeTextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  if ((pPVar1->DiffuseCubeTextureRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: DiffuseCubeTexture."
                   );
    DebugBreak();
  }
  local_8 = 1;
  pPVar1 = PlanetShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x68))(&local_8);
  return;
}

//==== 004a7a10 LoadDiffuseTextureLocation ====

/* private: static void __cdecl RingsShader__LoadDiffuseTextureLocation(void) */

void __cdecl RingsShader__LoadDiffuseTextureLocation(void)

{
  RingsShader *pRVar1;
  RingsShader *pRVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pRVar1 = RingsShader__GetStatic();
  pcVar4 = "DiffuseTexture";
  pRVar2 = RingsShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pRVar2->_pad_0x4_1,pcVar4);
  (pRVar1->DiffuseTextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200);
  if ((pRVar1->DiffuseTextureRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: DiffuseTexture.");
    DebugBreak();
  }
  local_8 = 0;
  pRVar1 = RingsShader__GetStatic();
  (**(code **)(pRVar1->_pad_0x0_0 + 0x5c))(&local_8);
  return;
}

//==== 004a7a90 LoadEffectLocation ====

/* private: static void __cdecl DamageShader__LoadEffectLocation(void) */

void __cdecl DamageShader__LoadEffectLocation(void)

{
  DamageShader *pDVar1;
  DamageShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DamageShader__GetStatic();
  pcVar4 = "Effect";
  pDVar2 = DamageShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->EffectRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x6c);
  if ((pDVar1->EffectRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x6c,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: Effect.");
    DebugBreak();
  }
  local_8 = 0;
  pDVar1 = DamageShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x50))(&local_8);
  return;
}

//==== 004a7b10 LoadExhaustVelocity_km_sLocation ====

/* private: static void __cdecl ExhaustShader__LoadExhaustVelocity_km_sLocation(void) */

void __cdecl ExhaustShader__LoadExhaustVelocity_km_sLocation(void)

{
  ExhaustShader *pEVar1;
  ExhaustShader *pEVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pEVar1 = ExhaustShader__GetStatic();
  pcVar4 = "ExhaustVelocity_km_s";
  pEVar2 = ExhaustShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pEVar2->_pad_0x4_1,pcVar4);
  (pEVar1->ExhaustVelocity_km_sRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x60);
  if ((pEVar1->ExhaustVelocity_km_sRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x60,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: ExhaustVelocity_km_s."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pEVar1 = ExhaustShader__GetStatic();
  (**(code **)(pEVar1->_pad_0x0_0 + 0x58))(&local_8);
  return;
}

//==== 004a7b90 LoadExhaustVisibleToInvisibleRatioLocation ====

/* private: static void __cdecl ExhaustShader__LoadExhaustVisibleToInvisibleRatioLocation(void) */

void __cdecl ExhaustShader__LoadExhaustVisibleToInvisibleRatioLocation(void)

{
  ExhaustShader *pEVar1;
  ExhaustShader *pEVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pEVar1 = ExhaustShader__GetStatic();
  pcVar4 = "ExhaustVisibleToInvisibleRatio";
  pEVar2 = ExhaustShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pEVar2->_pad_0x4_1,pcVar4);
  (pEVar1->ExhaustVisibleToInvisibleRatioRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x60);
  if ((pEVar1->ExhaustVisibleToInvisibleRatioRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x60,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: ExhaustVisibleToInvisibleRatio."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pEVar1 = ExhaustShader__GetStatic();
  (**(code **)(pEVar1->_pad_0x0_0 + 0x60))(&local_8);
  return;
}

//==== 004a7c10 LoadFarPlaneLocation_004a7c10 ====

/* private: static void __cdecl ArmorShader__LoadFarPlaneLocation(void) */

void __cdecl ArmorShader__LoadFarPlaneLocation(void)

{
  ArmorShader *pAVar1;
  ArmorShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pAVar1 = ArmorShader__GetStatic();
  pcVar4 = "FarPlane";
  pAVar2 = ArmorShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x78);
  local_8 = 0;
  pAVar1 = ArmorShader__GetStatic();
  (**(code **)(pAVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 004a7c60 LoadFarPlaneLocation_004a7c60 ====

/* private: static void __cdecl AsteroidCratersShader__LoadFarPlaneLocation(void) */

void __cdecl AsteroidCratersShader__LoadFarPlaneLocation(void)

{
  AsteroidCratersShader *pAVar1;
  AsteroidCratersShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pAVar1 = AsteroidCratersShader__GetStatic();
  pcVar4 = "FarPlane";
  pAVar2 = AsteroidCratersShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc);
  local_8 = 0;
  pAVar1 = AsteroidCratersShader__GetStatic();
  (**(code **)(pAVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 004a7cc0 LoadFarPlaneLocation_004a7cc0 ====

/* private: static void __cdecl AsteroidDiffuseShader__LoadFarPlaneLocation(void) */

void __cdecl AsteroidDiffuseShader__LoadFarPlaneLocation(void)

{
  AsteroidDiffuseShader *pAVar1;
  AsteroidDiffuseShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  pcVar4 = "FarPlane";
  pAVar2 = AsteroidDiffuseShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103);
  local_8 = 0;
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  (**(code **)(pAVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 004a7d20 LoadFarPlaneLocation_004a7d20 ====

/* private: static void __cdecl AsteroidHeightShader__LoadFarPlaneLocation(void) */

void __cdecl AsteroidHeightShader__LoadFarPlaneLocation(void)

{
  AsteroidHeightShader *pAVar1;
  AsteroidHeightShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pAVar1 = AsteroidHeightShader__GetStatic();
  pcVar4 = "FarPlane";
  pAVar2 = AsteroidHeightShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x107);
  local_8 = 0;
  pAVar1 = AsteroidHeightShader__GetStatic();
  (**(code **)(pAVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 004a7d80 LoadFarPlaneLocation_004a7d80 ====

/* private: static void __cdecl AsteroidNormalShader__LoadFarPlaneLocation(void) */

void __cdecl AsteroidNormalShader__LoadFarPlaneLocation(void)

{
  AsteroidNormalShader *pAVar1;
  AsteroidNormalShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pAVar1 = AsteroidNormalShader__GetStatic();
  pcVar4 = "FarPlane";
  pAVar2 = AsteroidNormalShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x10c);
  local_8 = 0;
  pAVar1 = AsteroidNormalShader__GetStatic();
  (**(code **)(pAVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 004a7de0 LoadFarPlaneLocation_004a7de0 ====


/* private: static void __cdecl BlastLauncherShader__LoadFarPlaneLocation(void) */

void __cdecl BlastLauncherShader__LoadFarPlaneLocation(void)

{
  BlastLauncherShader *pBVar1;
  BlastLauncherShader *pBVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uStack_8;
  
  pBVar1 = BlastLauncherShader__GetStatic();
  pcVar4 = "FarPlane";
  pBVar2 = BlastLauncherShader__GetStatic();
  uVar3 = (*___glewGetUniformLocation)(*(undefined4 *)(pBVar2 + 4),pcVar4);
  *(undefined4 *)(pBVar1 + 0x40) = uVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e);
  uStack_8 = 0;
  pBVar1 = BlastLauncherShader__GetStatic();
  (**(code **)(*(int *)pBVar1 + 0x48))(&uStack_8);
  return;
}





//==== 004a7e30 LoadFarPlaneLocation_004a7e30 ====

/* private: static void __cdecl CityLightsShader__LoadFarPlaneLocation(void) */

void __cdecl CityLightsShader__LoadFarPlaneLocation(void)

{
  CityLightsShader *pCVar1;
  CityLightsShader *pCVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pCVar1 = CityLightsShader__GetStatic();
  pcVar4 = "FarPlane";
  pCVar2 = CityLightsShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pCVar2->_pad_0x4_1,pcVar4);
  (pCVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6);
  local_8 = 0;
  pCVar1 = CityLightsShader__GetStatic();
  (**(code **)(pCVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 004a7e90 LoadFarPlaneLocation_004a7e90 ====

/* private: static void __cdecl DamageGeneratorShader__LoadFarPlaneLocation(void) */

void __cdecl DamageGeneratorShader__LoadFarPlaneLocation(void)

{
  DamageGeneratorShader *pDVar1;
  DamageGeneratorShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DamageGeneratorShader__GetStatic();
  pcVar4 = "FarPlane";
  pDVar2 = DamageGeneratorShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118);
  local_8 = 0;
  pDVar1 = DamageGeneratorShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 004a7ef0 LoadFarPlaneLocation_004a7ef0 ====

/* private: static void __cdecl DamageShader__LoadFarPlaneLocation(void) */

void __cdecl DamageShader__LoadFarPlaneLocation(void)

{
  DamageShader *pDVar1;
  DamageShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DamageShader__GetStatic();
  pcVar4 = "FarPlane";
  pDVar2 = DamageShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x6c);
  local_8 = 0;
  pDVar1 = DamageShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 004a7f40 LoadFarPlaneLocation_004a7f40 ====

/* private: static void __cdecl DamagedArmorShader__LoadFarPlaneLocation(void) */

void __cdecl DamagedArmorShader__LoadFarPlaneLocation(void)

{
  DamagedArmorShader *pDVar1;
  DamagedArmorShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DamagedArmorShader__GetStatic();
  pcVar4 = "FarPlane";
  pDVar2 = DamagedArmorShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x74);
  local_8 = 0;
  pDVar1 = DamagedArmorShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 004a7f90 LoadFarPlaneLocation_004a7f90 ====

/* private: static void __cdecl DeferredGlobalLightingShader__LoadFarPlaneLocation(void) */

void __cdecl DeferredGlobalLightingShader__LoadFarPlaneLocation(void)

{
  DeferredGlobalLightingShader *pDVar1;
  DeferredGlobalLightingShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  pcVar4 = "FarPlane";
  pDVar2 = DeferredGlobalLightingShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52);
  local_8 = 0;
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 004a7fe0 LoadFarPlaneLocation_004a7fe0 ====

/* private: static void __cdecl DeferredWorldLightingShader__LoadFarPlaneLocation(void) */

void __cdecl DeferredWorldLightingShader__LoadFarPlaneLocation(void)

{
  DeferredWorldLightingShader *pDVar1;
  DeferredWorldLightingShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  pcVar4 = "FarPlane";
  pDVar2 = DeferredWorldLightingShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a);
  local_8 = 0;
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 004a8030 LoadFarPlaneLocation_004a8030 ====

/* private: static void __cdecl EquirectangularToCubeMapShader__LoadFarPlaneLocation(void) */

void __cdecl EquirectangularToCubeMapShader__LoadFarPlaneLocation(void)

{
  EquirectangularToCubeMapShader *pEVar1;
  EquirectangularToCubeMapShader *pEVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pEVar1 = EquirectangularToCubeMapShader__GetStatic();
  pcVar4 = "FarPlane";
  pEVar2 = EquirectangularToCubeMapShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pEVar2->_pad_0x4_1,pcVar4);
  (pEVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x11d);
  local_8 = 0;
  pEVar1 = EquirectangularToCubeMapShader__GetStatic();
  (**(code **)(pEVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 004a8090 LoadFarPlaneLocation_004a8090 ====

/* private: static void __cdecl ExhaustShader__LoadFarPlaneLocation(void) */

void __cdecl ExhaustShader__LoadFarPlaneLocation(void)

{
  ExhaustShader *pEVar1;
  ExhaustShader *pEVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pEVar1 = ExhaustShader__GetStatic();
  pcVar4 = "FarPlane";
  pEVar2 = ExhaustShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pEVar2->_pad_0x4_1,pcVar4);
  (pEVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x60);
  local_8 = 0;
  pEVar1 = ExhaustShader__GetStatic();
  (**(code **)(pEVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 004a80e0 LoadFarPlaneLocation_004a80e0 ====

/* private: static void __cdecl GeneralModuleShader__LoadFarPlaneLocation(void) */

void __cdecl GeneralModuleShader__LoadFarPlaneLocation(void)

{
  GeneralModuleShader *pGVar1;
  GeneralModuleShader *pGVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pGVar1 = GeneralModuleShader__GetStatic();
  pcVar4 = "FarPlane";
  pGVar2 = GeneralModuleShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pGVar2->_pad_0x4_1,pcVar4);
  (pGVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8f);
  local_8 = 0;
  pGVar1 = GeneralModuleShader__GetStatic();
  (**(code **)(pGVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 004a8140 LoadFarPlaneLocation_004a8140 ====

/* private: static void __cdecl ParticleShader__LoadFarPlaneLocation(void) */

void __cdecl ParticleShader__LoadFarPlaneLocation(void)

{
  ParticleShader *pPVar1;
  ParticleShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = ParticleShader__GetStatic();
  pcVar4 = "FarPlane";
  pPVar2 = ParticleShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112);
  local_8 = 0;
  pPVar1 = ParticleShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 004a81a0 LoadFarPlaneLocation_004a81a0 ====

/* private: static void __cdecl PlanetShader__LoadFarPlaneLocation(void) */

void __cdecl PlanetShader__LoadFarPlaneLocation(void)

{
  PlanetShader *pPVar1;
  PlanetShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PlanetShader__GetStatic();
  pcVar4 = "FarPlane";
  pPVar2 = PlanetShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  local_8 = 0;
  pPVar1 = PlanetShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 004a8200 LoadFarPlaneLocation_004a8200 ====

/* private: static void __cdecl PropellantTankShader__LoadFarPlaneLocation(void) */

void __cdecl PropellantTankShader__LoadFarPlaneLocation(void)

{
  PropellantTankShader *pPVar1;
  PropellantTankShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PropellantTankShader__GetStatic();
  pcVar4 = "FarPlane";
  pPVar2 = PropellantTankShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83);
  local_8 = 0;
  pPVar1 = PropellantTankShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 004a8260 LoadFarPlaneLocation_004a8260 ====

/* private: static void __cdecl RadiatorShader__LoadFarPlaneLocation(void) */

void __cdecl RadiatorShader__LoadFarPlaneLocation(void)

{
  RadiatorShader *pRVar1;
  RadiatorShader *pRVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pRVar1 = RadiatorShader__GetStatic();
  pcVar4 = "FarPlane";
  pRVar2 = RadiatorShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pRVar2->_pad_0x4_1,pcVar4);
  (pRVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x87);
  local_8 = 0;
  pRVar1 = RadiatorShader__GetStatic();
  (**(code **)(pRVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 004a82c0 LoadFarPlaneLocation_004a82c0 ====

/* private: static void __cdecl RingShadowShader__LoadFarPlaneLocation(void) */

void __cdecl RingShadowShader__LoadFarPlaneLocation(void)

{
  RingShadowShader *pRVar1;
  RingShadowShader *pRVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pRVar1 = RingShadowShader__GetStatic();
  pcVar4 = "FarPlane";
  pRVar2 = RingShadowShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pRVar2->_pad_0x4_1,pcVar4);
  (pRVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd7);
  local_8 = 0;
  pRVar1 = RingShadowShader__GetStatic();
  (**(code **)(pRVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 004a8320 LoadFarPlaneLocation_004a8320 ====

/* private: static void __cdecl RingsShader__LoadFarPlaneLocation(void) */

void __cdecl RingsShader__LoadFarPlaneLocation(void)

{
  RingsShader *pRVar1;
  RingsShader *pRVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pRVar1 = RingsShader__GetStatic();
  pcVar4 = "FarPlane";
  pRVar2 = RingsShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pRVar2->_pad_0x4_1,pcVar4);
  (pRVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200);
  local_8 = 0;
  pRVar1 = RingsShader__GetStatic();
  (**(code **)(pRVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 004a8380 LoadFarPlaneLocation_004a8380 ====

/* private: static void __cdecl RocketEngineShader__LoadFarPlaneLocation(void) */

void __cdecl RocketEngineShader__LoadFarPlaneLocation(void)

{
  RocketEngineShader *pRVar1;
  RocketEngineShader *pRVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pRVar1 = RocketEngineShader__GetStatic();
  pcVar4 = "FarPlane";
  pRVar2 = RocketEngineShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pRVar2->_pad_0x4_1,pcVar4);
  (pRVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8b);
  local_8 = 0;
  pRVar1 = RocketEngineShader__GetStatic();
  (**(code **)(pRVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 004a83e0 LoadFarPlaneLocation_004a83e0 ====

/* private: static void __cdecl ShadowShader__LoadFarPlaneLocation(void) */

void __cdecl ShadowShader__LoadFarPlaneLocation(void)

{
  ShadowShader *pSVar1;
  ShadowShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pSVar1 = ShadowShader__GetStatic();
  pcVar4 = "FarPlane";
  pSVar2 = ShadowShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xca);
  local_8 = 0;
  pSVar1 = ShadowShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 004a8440 LoadFarPlaneLocation_004a8440 ====

/* private: static void __cdecl ShockwaveShader__LoadFarPlaneLocation(void) */

void __cdecl ShockwaveShader__LoadFarPlaneLocation(void)

{
  ShockwaveShader *pSVar1;
  ShockwaveShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pSVar1 = ShockwaveShader__GetStatic();
  pcVar4 = "FarPlane";
  pSVar2 = ShockwaveShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x62);
  local_8 = 0;
  pSVar1 = ShockwaveShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 004a8490 LoadFarPlaneLocation_004a8490 ====

/* private: static void __cdecl SimpleShader__LoadFarPlaneLocation(void) */

void __cdecl SimpleShader__LoadFarPlaneLocation(void)

{
  SimpleShader *pSVar1;
  SimpleShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pSVar1 = SimpleShader__GetStatic();
  pcVar4 = "FarPlane";
  pSVar2 = SimpleShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x13);
  local_8 = 0;
  pSVar1 = SimpleShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 004a84e0 LoadFarPlaneLocation_004a84e0 ====


/* private: static void __cdecl SpacecraftShadowShader__LoadFarPlaneLocation(void) */

void __cdecl SpacecraftShadowShader__LoadFarPlaneLocation(void)

{
  SpacecraftShadowShader *pSVar1;
  SpacecraftShadowShader *pSVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uStack_8;
  
  pSVar1 = SpacecraftShadowShader__GetStatic();
  pcVar4 = "FarPlane";
  pSVar2 = SpacecraftShadowShader__GetStatic();
  uVar3 = (*___glewGetUniformLocation)(*(undefined4 *)(pSVar2 + 4),pcVar4);
  *(undefined4 *)(pSVar1 + 0x40) = uVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd2);
  uStack_8 = 0;
  pSVar1 = SpacecraftShadowShader__GetStatic();
  (**(code **)(*(int *)pSVar1 + 0x48))(&uStack_8);
  return;
}





//==== 004a8540 LoadFarPlaneLocation_004a8540 ====

/* private: static void __cdecl StarShader__LoadFarPlaneLocation(void) */

void __cdecl StarShader__LoadFarPlaneLocation(void)

{
  StarShader *pSVar1;
  StarShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pSVar1 = StarShader__GetStatic();
  pcVar4 = "FarPlane";
  pSVar2 = StarShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xc);
  local_8 = 0;
  pSVar1 = StarShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 004a8590 LoadHeatingTemperature_KLocation ====

/* private: static void __cdecl DamageShader__LoadHeatingTemperature_KLocation(void) */

void __cdecl DamageShader__LoadHeatingTemperature_KLocation(void)

{
  DamageShader *pDVar1;
  DamageShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DamageShader__GetStatic();
  pcVar4 = "HeatingTemperature_K";
  pDVar2 = DamageShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->HeatingTemperature_KRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x6c);
  if ((pDVar1->HeatingTemperature_KRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x6c,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: HeatingTemperature_K."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pDVar1 = DamageShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x60))(&local_8);
  return;
}

//==== 004a8610 LoadHeightCubeTextureLocation ====

/* private: static void __cdecl PlanetShader__LoadHeightCubeTextureLocation(void) */

void __cdecl PlanetShader__LoadHeightCubeTextureLocation(void)

{
  PlanetShader *pPVar1;
  PlanetShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PlanetShader__GetStatic();
  pcVar4 = "HeightCubeTexture";
  pPVar2 = PlanetShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->HeightCubeTextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  local_8 = 5;
  pPVar1 = PlanetShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x78))(&local_8);
  return;
}

//==== 004a8670 LoadInitialFrequencyLocation ====

/* private: static void __cdecl CityLightsShader__LoadInitialFrequencyLocation(void) */

void __cdecl CityLightsShader__LoadInitialFrequencyLocation(void)

{
  CityLightsShader *pCVar1;
  CityLightsShader *pCVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pCVar1 = CityLightsShader__GetStatic();
  pcVar4 = "InitialFrequency";
  pCVar2 = CityLightsShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pCVar2->_pad_0x4_1,pcVar4);
  (pCVar1->InitialFrequencyRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6);
  if ((pCVar1->InitialFrequencyRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: InitialFrequency.")
    ;
    DebugBreak();
  }
  local_8 = 0;
  pCVar1 = CityLightsShader__GetStatic();
  (**(code **)(pCVar1->_pad_0x0_0 + 0x88))(&local_8);
  return;
}

//==== 004a86f0 LoadInverseModelMatrixLocation_004a86f0 ====

/* private: static void __cdecl ArmorShader__LoadInverseModelMatrixLocation(void) */

void __cdecl ArmorShader__LoadInverseModelMatrixLocation(void)

{
  ArmorShader *pAVar1;
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
  
  pAVar1 = ArmorShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pAVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a871b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x78);
  pAVar1 = ArmorShader__GetStatic();
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
  (**(code **)(pAVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 004a8730 LoadInverseModelMatrixLocation_004a8730 ====

/* private: static void __cdecl AsteroidCratersShader__LoadInverseModelMatrixLocation(void) */

void __cdecl AsteroidCratersShader__LoadInverseModelMatrixLocation(void)

{
  AsteroidCratersShader *pAVar1;
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
  
  pAVar1 = AsteroidCratersShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pAVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a875e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc);
  pAVar1 = AsteroidCratersShader__GetStatic();
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
  (**(code **)(pAVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 004a8770 LoadInverseModelMatrixLocation_004a8770 ====

/* private: static void __cdecl AsteroidDiffuseShader__LoadInverseModelMatrixLocation(void) */

void __cdecl AsteroidDiffuseShader__LoadInverseModelMatrixLocation(void)

{
  AsteroidDiffuseShader *pAVar1;
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
  
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pAVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a879e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103);
  pAVar1 = AsteroidDiffuseShader__GetStatic();
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
  (**(code **)(pAVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 004a87b0 LoadInverseModelMatrixLocation_004a87b0 ====

/* private: static void __cdecl AsteroidHeightShader__LoadInverseModelMatrixLocation(void) */

void __cdecl AsteroidHeightShader__LoadInverseModelMatrixLocation(void)

{
  AsteroidHeightShader *pAVar1;
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
  
  pAVar1 = AsteroidHeightShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pAVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a87de;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x107);
  pAVar1 = AsteroidHeightShader__GetStatic();
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
  (**(code **)(pAVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 004a87f0 LoadInverseModelMatrixLocation_004a87f0 ====

/* private: static void __cdecl AsteroidNormalShader__LoadInverseModelMatrixLocation(void) */

void __cdecl AsteroidNormalShader__LoadInverseModelMatrixLocation(void)

{
  AsteroidNormalShader *pAVar1;
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
  
  pAVar1 = AsteroidNormalShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pAVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a881e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x10c);
  pAVar1 = AsteroidNormalShader__GetStatic();
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
  (**(code **)(pAVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 004a8830 LoadInverseModelMatrixLocation_004a8830 ====


/* private: static void __cdecl BlastLauncherShader__LoadInverseModelMatrixLocation(void) */

void __cdecl BlastLauncherShader__LoadInverseModelMatrixLocation(void)

{
  BlastLauncherShader *pBVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
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
  
  pBVar1 = BlastLauncherShader__GetStatic();
  GetStatic();
  uVar2 = (*___glewGetUniformLocation)();
  *(undefined4 *)(pBVar1 + 0x30) = uVar2;
  uStack_18 = 0x4a885b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e);
  pBVar1 = BlastLauncherShader__GetStatic();
  iVar3 = 0;
  pfVar5 = afStack_54;
  do {
    iVar4 = iVar3 + 1;
    *pfVar5 = (float)(iVar3 == 0);
    pfVar5[1] = (float)(iVar3 == 1);
    pfVar5[2] = (float)(iVar3 == 2);
    pfVar5[3] = (float)(iVar3 == 3);
    iVar3 = iVar4;
    pfVar5 = pfVar5 + 4;
  } while (iVar4 < 4);
  iVar3 = 0;
  pfVar5 = afStack_dc;
  do {
    iVar4 = iVar3 + 1;
    *pfVar5 = (float)(iVar3 == 0);
    pfVar5[1] = (float)(iVar3 == 1);
    pfVar5[2] = (float)(iVar3 == 2);
    pfVar5[3] = (float)(iVar3 == 3);
    iVar3 = iVar4;
    pfVar5 = pfVar5 + 4;
  } while (iVar4 < 4);
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
  (**(code **)(*(int *)pBVar1 + 0x28))(&fStack_94);
  return;
}





//==== 004a8870 LoadInverseModelMatrixLocation_004a8870 ====

/* private: static void __cdecl CityLightsShader__LoadInverseModelMatrixLocation(void) */

void __cdecl CityLightsShader__LoadInverseModelMatrixLocation(void)

{
  CityLightsShader *pCVar1;
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
  
  pCVar1 = CityLightsShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pCVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a889e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6);
  pCVar1 = CityLightsShader__GetStatic();
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
  (**(code **)(pCVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 004a88b0 LoadInverseModelMatrixLocation_004a88b0 ====

/* private: static void __cdecl DamageGeneratorShader__LoadInverseModelMatrixLocation(void) */

void __cdecl DamageGeneratorShader__LoadInverseModelMatrixLocation(void)

{
  DamageGeneratorShader *pDVar1;
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
  
  pDVar1 = DamageGeneratorShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pDVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a88de;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118);
  pDVar1 = DamageGeneratorShader__GetStatic();
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
  (**(code **)(pDVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 004a88f0 LoadInverseModelMatrixLocation_004a88f0 ====

/* private: static void __cdecl DamageShader__LoadInverseModelMatrixLocation(void) */

void __cdecl DamageShader__LoadInverseModelMatrixLocation(void)

{
  DamageShader *pDVar1;
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
  
  pDVar1 = DamageShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pDVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a891b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x6c);
  pDVar1 = DamageShader__GetStatic();
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
  (**(code **)(pDVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 004a8930 LoadInverseModelMatrixLocation_004a8930 ====

/* private: static void __cdecl DamagedArmorShader__LoadInverseModelMatrixLocation(void) */

void __cdecl DamagedArmorShader__LoadInverseModelMatrixLocation(void)

{
  DamagedArmorShader *pDVar1;
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
  
  pDVar1 = DamagedArmorShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pDVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a895b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x74);
  pDVar1 = DamagedArmorShader__GetStatic();
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
  (**(code **)(pDVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 004a8970 LoadInverseModelMatrixLocation_004a8970 ====

/* private: static void __cdecl DeferredGlobalLightingShader__LoadInverseModelMatrixLocation(void)
    */

void __cdecl DeferredGlobalLightingShader__LoadInverseModelMatrixLocation(void)

{
  DeferredGlobalLightingShader *pDVar1;
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
  
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pDVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a899b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52);
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
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
  (**(code **)(pDVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 004a89b0 LoadInverseModelMatrixLocation_004a89b0 ====

/* private: static void __cdecl DeferredWorldLightingShader__LoadInverseModelMatrixLocation(void) */

void __cdecl DeferredWorldLightingShader__LoadInverseModelMatrixLocation(void)

{
  DeferredWorldLightingShader *pDVar1;
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
  
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pDVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a89db;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a);
  pDVar1 = DeferredWorldLightingShader__GetStatic();
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
  (**(code **)(pDVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 004a89f0 LoadInverseModelMatrixLocation_004a89f0 ====

/* private: static void __cdecl EquirectangularToCubeMapShader__LoadInverseModelMatrixLocation(void)
    */

void __cdecl EquirectangularToCubeMapShader__LoadInverseModelMatrixLocation(void)

{
  EquirectangularToCubeMapShader *pEVar1;
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
  
  pEVar1 = EquirectangularToCubeMapShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pEVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a8a1e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x11d);
  pEVar1 = EquirectangularToCubeMapShader__GetStatic();
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
  (**(code **)(pEVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 004a8a30 LoadInverseModelMatrixLocation_004a8a30 ====

/* private: static void __cdecl ExhaustShader__LoadInverseModelMatrixLocation(void) */

void __cdecl ExhaustShader__LoadInverseModelMatrixLocation(void)

{
  ExhaustShader *pEVar1;
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
  
  pEVar1 = ExhaustShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pEVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a8a5b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x60);
  pEVar1 = ExhaustShader__GetStatic();
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
  (**(code **)(pEVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 004a8a70 LoadInverseModelMatrixLocation_004a8a70 ====

/* private: static void __cdecl GeneralModuleShader__LoadInverseModelMatrixLocation(void) */

void __cdecl GeneralModuleShader__LoadInverseModelMatrixLocation(void)

{
  GeneralModuleShader *pGVar1;
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
  
  pGVar1 = GeneralModuleShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pGVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a8a9e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8f);
  pGVar1 = GeneralModuleShader__GetStatic();
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
  (**(code **)(pGVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 004a8ab0 LoadInverseModelMatrixLocation_004a8ab0 ====

/* private: static void __cdecl ParticleShader__LoadInverseModelMatrixLocation(void) */

void __cdecl ParticleShader__LoadInverseModelMatrixLocation(void)

{
  ParticleShader *pPVar1;
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
  
  pPVar1 = ParticleShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pPVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a8ade;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112);
  pPVar1 = ParticleShader__GetStatic();
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
  (**(code **)(pPVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 004a8af0 LoadInverseModelMatrixLocation_004a8af0 ====

/* private: static void __cdecl PlanetShader__LoadInverseModelMatrixLocation(void) */

void __cdecl PlanetShader__LoadInverseModelMatrixLocation(void)

{
  PlanetShader *pPVar1;
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
  
  pPVar1 = PlanetShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pPVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a8b1e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  pPVar1 = PlanetShader__GetStatic();
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
  (**(code **)(pPVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 004a8b30 LoadInverseModelMatrixLocation_004a8b30 ====

/* private: static void __cdecl PropellantTankShader__LoadInverseModelMatrixLocation(void) */

void __cdecl PropellantTankShader__LoadInverseModelMatrixLocation(void)

{
  PropellantTankShader *pPVar1;
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
  
  pPVar1 = PropellantTankShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pPVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a8b5e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83);
  pPVar1 = PropellantTankShader__GetStatic();
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
  (**(code **)(pPVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 004a8b70 LoadInverseModelMatrixLocation_004a8b70 ====

/* private: static void __cdecl RadiatorShader__LoadInverseModelMatrixLocation(void) */

void __cdecl RadiatorShader__LoadInverseModelMatrixLocation(void)

{
  RadiatorShader *pRVar1;
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
  
  pRVar1 = RadiatorShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pRVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a8b9e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x87);
  pRVar1 = RadiatorShader__GetStatic();
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
  (**(code **)(pRVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 004a8bb0 LoadInverseModelMatrixLocation_004a8bb0 ====

/* private: static void __cdecl RingShadowShader__LoadInverseModelMatrixLocation(void) */

void __cdecl RingShadowShader__LoadInverseModelMatrixLocation(void)

{
  RingShadowShader *pRVar1;
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
  
  pRVar1 = RingShadowShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pRVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a8bde;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd7);
  pRVar1 = RingShadowShader__GetStatic();
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
  (**(code **)(pRVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 004a8bf0 LoadInverseModelMatrixLocation_004a8bf0 ====

/* private: static void __cdecl RingsShader__LoadInverseModelMatrixLocation(void) */

void __cdecl RingsShader__LoadInverseModelMatrixLocation(void)

{
  RingsShader *pRVar1;
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
  
  pRVar1 = RingsShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pRVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a8c1e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200);
  pRVar1 = RingsShader__GetStatic();
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
  (**(code **)(pRVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 004a8c30 LoadInverseModelMatrixLocation_004a8c30 ====

/* private: static void __cdecl RocketEngineShader__LoadInverseModelMatrixLocation(void) */

void __cdecl RocketEngineShader__LoadInverseModelMatrixLocation(void)

{
  RocketEngineShader *pRVar1;
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
  
  pRVar1 = RocketEngineShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pRVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a8c5e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8b);
  pRVar1 = RocketEngineShader__GetStatic();
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
  (**(code **)(pRVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 004a8c70 LoadInverseModelMatrixLocation_004a8c70 ====

/* private: static void __cdecl ShadowShader__LoadInverseModelMatrixLocation(void) */

void __cdecl ShadowShader__LoadInverseModelMatrixLocation(void)

{
  ShadowShader *pSVar1;
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
  
  pSVar1 = ShadowShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pSVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a8c9e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xca);
  pSVar1 = ShadowShader__GetStatic();
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
  (**(code **)(pSVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 004a8cb0 LoadInverseModelMatrixLocation_004a8cb0 ====

/* private: static void __cdecl ShockwaveShader__LoadInverseModelMatrixLocation(void) */

void __cdecl ShockwaveShader__LoadInverseModelMatrixLocation(void)

{
  ShockwaveShader *pSVar1;
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
  
  pSVar1 = ShockwaveShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pSVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a8cdb;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x62);
  pSVar1 = ShockwaveShader__GetStatic();
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
  (**(code **)(pSVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 004a8cf0 LoadInverseModelMatrixLocation_004a8cf0 ====

/* private: static void __cdecl SimpleShader__LoadInverseModelMatrixLocation(void) */

void __cdecl SimpleShader__LoadInverseModelMatrixLocation(void)

{
  SimpleShader *pSVar1;
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
  
  pSVar1 = SimpleShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pSVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a8d1b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x13);
  pSVar1 = SimpleShader__GetStatic();
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
  (**(code **)(pSVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 004a8d30 LoadInverseModelMatrixLocation_004a8d30 ====


/* private: static void __cdecl SpacecraftShadowShader__LoadInverseModelMatrixLocation(void) */

void __cdecl SpacecraftShadowShader__LoadInverseModelMatrixLocation(void)

{
  SpacecraftShadowShader *pSVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
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
  
  pSVar1 = SpacecraftShadowShader__GetStatic();
  GetStatic();
  uVar2 = (*___glewGetUniformLocation)();
  *(undefined4 *)(pSVar1 + 0x30) = uVar2;
  uStack_18 = 0x4a8d5e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd2);
  pSVar1 = SpacecraftShadowShader__GetStatic();
  iVar3 = 0;
  pfVar5 = afStack_54;
  do {
    iVar4 = iVar3 + 1;
    *pfVar5 = (float)(iVar3 == 0);
    pfVar5[1] = (float)(iVar3 == 1);
    pfVar5[2] = (float)(iVar3 == 2);
    pfVar5[3] = (float)(iVar3 == 3);
    iVar3 = iVar4;
    pfVar5 = pfVar5 + 4;
  } while (iVar4 < 4);
  iVar3 = 0;
  pfVar5 = afStack_dc;
  do {
    iVar4 = iVar3 + 1;
    *pfVar5 = (float)(iVar3 == 0);
    pfVar5[1] = (float)(iVar3 == 1);
    pfVar5[2] = (float)(iVar3 == 2);
    pfVar5[3] = (float)(iVar3 == 3);
    iVar3 = iVar4;
    pfVar5 = pfVar5 + 4;
  } while (iVar4 < 4);
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
  (**(code **)(*(int *)pSVar1 + 0x28))(&fStack_94);
  return;
}





//==== 004a8d70 LoadInverseModelMatrixLocation_004a8d70 ====

/* private: static void __cdecl StarShader__LoadInverseModelMatrixLocation(void) */

void __cdecl StarShader__LoadInverseModelMatrixLocation(void)

{
  StarShader *pSVar1;
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
  
  pSVar1 = StarShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pSVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a8d9b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xc);
  pSVar1 = StarShader__GetStatic();
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
  (**(code **)(pSVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 004a8db0 LoadIsMainLightLocation ====

/* private: static void __cdecl DeferredGlobalLightingShader__LoadIsMainLightLocation(void) */

void __cdecl DeferredGlobalLightingShader__LoadIsMainLightLocation(void)

{
  DeferredGlobalLightingShader *pDVar1;
  DeferredGlobalLightingShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_8;
  
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  pcVar4 = "IsMainLight";
  pDVar2 = DeferredGlobalLightingShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->IsMainLightRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52);
  if ((pDVar1->IsMainLightRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: IsMainLight.");
    DebugBreak();
  }
  uStack_8 = uStack_8 & 0xffffff;
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x98))((int)&uStack_8 + 3);
  return;
}

//==== 004a8e30 LoadIsMainLightLocation_004a8e30 ====

/* private: static void __cdecl DeferredWorldLightingShader__LoadIsMainLightLocation(void) */

void __cdecl DeferredWorldLightingShader__LoadIsMainLightLocation(void)

{
  DeferredWorldLightingShader *pDVar1;
  DeferredWorldLightingShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_8;
  
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  pcVar4 = "IsMainLight";
  pDVar2 = DeferredWorldLightingShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->IsMainLightRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a);
  if ((pDVar1->IsMainLightRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: IsMainLight.");
    DebugBreak();
  }
  uStack_8 = uStack_8 & 0xffffff;
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x98))((int)&uStack_8 + 3);
  return;
}

//==== 004a8eb0 LoadLightColorLocation ====

/* private: static void __cdecl DeferredGlobalLightingShader__LoadLightColorLocation(void) */

void __cdecl DeferredGlobalLightingShader__LoadLightColorLocation(void)

{
  DeferredGlobalLightingShader *pDVar1;
  DeferredGlobalLightingShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined8 local_10;
  undefined4 local_8;
  
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  pcVar4 = "LightColor";
  pDVar2 = DeferredGlobalLightingShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->LightColorRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52);
  if ((pDVar1->LightColorRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: LightColor.");
    DebugBreak();
  }
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  local_8 = 0;
  local_10 = 0;
  (**(code **)(pDVar1->_pad_0x0_0 + 0x8c))(&local_10);
  return;
}

//==== 004a8f40 LoadLightColorLocation_004a8f40 ====

/* private: static void __cdecl DeferredWorldLightingShader__LoadLightColorLocation(void) */

void __cdecl DeferredWorldLightingShader__LoadLightColorLocation(void)

{
  DeferredWorldLightingShader *pDVar1;
  DeferredWorldLightingShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined8 local_10;
  undefined4 local_8;
  
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  pcVar4 = "LightColor";
  pDVar2 = DeferredWorldLightingShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->LightColorRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a);
  if ((pDVar1->LightColorRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: LightColor.");
    DebugBreak();
  }
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  local_8 = 0;
  local_10 = 0;
  (**(code **)(pDVar1->_pad_0x0_0 + 0x8c))(&local_10);
  return;
}

//==== 004a8fd0 LoadLightColorLocation_004a8fd0 ====

/* private: static void __cdecl RingsShader__LoadLightColorLocation(void) */

void __cdecl RingsShader__LoadLightColorLocation(void)

{
  RingsShader *pRVar1;
  RingsShader *pRVar2;
  int iVar3;
  char *pcVar4;
  undefined8 local_10;
  undefined4 local_8;
  
  pRVar1 = RingsShader__GetStatic();
  pcVar4 = "LightColor";
  pRVar2 = RingsShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pRVar2->_pad_0x4_1,pcVar4);
  (pRVar1->LightColorRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200);
  if ((pRVar1->LightColorRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: LightColor.");
    DebugBreak();
  }
  pRVar1 = RingsShader__GetStatic();
  local_8 = 0;
  local_10 = 0;
  (**(code **)(pRVar1->_pad_0x0_0 + 0x68))(&local_10);
  return;
}

//==== 004a9060 LoadLightConeHalfAngle_radiansLocation ====

/* private: static void __cdecl
   DeferredWorldLightingShader__LoadLightConeHalfAngle_radiansLocation(void) */

void __cdecl DeferredWorldLightingShader__LoadLightConeHalfAngle_radiansLocation(void)

{
  DeferredWorldLightingShader *pDVar1;
  DeferredWorldLightingShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  pcVar4 = "LightConeHalfAngle_radians";
  pDVar2 = DeferredWorldLightingShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->LightConeHalfAngle_radiansRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a);
  if ((pDVar1->LightConeHalfAngle_radiansRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: LightConeHalfAngle_radians."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0xb8))(&local_8);
  return;
}

//==== 004a90e0 LoadLightDirectionLocation ====

/* private: static void __cdecl DeferredGlobalLightingShader__LoadLightDirectionLocation(void) */

void __cdecl DeferredGlobalLightingShader__LoadLightDirectionLocation(void)

{
  DeferredGlobalLightingShader *pDVar1;
  DeferredGlobalLightingShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined8 local_10;
  undefined4 local_8;
  
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  pcVar4 = "LightDirection";
  pDVar2 = DeferredGlobalLightingShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->LightDirectionRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52);
  if ((pDVar1->LightDirectionRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: LightDirection.");
    DebugBreak();
  }
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  local_8 = 0;
  local_10 = 0;
  (**(code **)(pDVar1->_pad_0x0_0 + 0x94))(&local_10);
  return;
}

//==== 004a9170 LoadLightDirectionLocation_004a9170 ====

/* private: static void __cdecl DeferredWorldLightingShader__LoadLightDirectionLocation(void) */

void __cdecl DeferredWorldLightingShader__LoadLightDirectionLocation(void)

{
  DeferredWorldLightingShader *pDVar1;
  DeferredWorldLightingShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined8 local_10;
  undefined4 local_8;
  
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  pcVar4 = "LightDirection";
  pDVar2 = DeferredWorldLightingShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->LightDirectionRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a);
  if ((pDVar1->LightDirectionRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: LightDirection.");
    DebugBreak();
  }
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  local_8 = 0;
  local_10 = 0;
  (**(code **)(pDVar1->_pad_0x0_0 + 0x94))(&local_10);
  return;
}

//==== 004a9200 LoadLightInitialRadius_kmLocation ====

/* private: static void __cdecl DeferredWorldLightingShader__LoadLightInitialRadius_kmLocation(void)
    */

void __cdecl DeferredWorldLightingShader__LoadLightInitialRadius_kmLocation(void)

{
  DeferredWorldLightingShader *pDVar1;
  DeferredWorldLightingShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  pcVar4 = "LightInitialRadius_km";
  pDVar2 = DeferredWorldLightingShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->LightInitialRadius_kmRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a);
  if ((pDVar1->LightInitialRadius_kmRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: LightInitialRadius_km."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0xb0))(&local_8);
  return;
}

//==== 004a9280 LoadLightIrradiance_W_m2Location ====

/* private: static void __cdecl DeferredGlobalLightingShader__LoadLightIrradiance_W_m2Location(void)
    */

void __cdecl DeferredGlobalLightingShader__LoadLightIrradiance_W_m2Location(void)

{
  DeferredGlobalLightingShader *pDVar1;
  DeferredGlobalLightingShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  pcVar4 = "LightIrradiance_W_m2";
  pDVar2 = DeferredGlobalLightingShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->LightIrradiance_W_m2RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52);
  if ((pDVar1->LightIrradiance_W_m2RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: LightIrradiance_W_m2."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0xa0))(&local_8);
  return;
}

//==== 004a9300 LoadLightIrradiance_W_m2Location_004a9300 ====

/* private: static void __cdecl RingsShader__LoadLightIrradiance_W_m2Location(void) */

void __cdecl RingsShader__LoadLightIrradiance_W_m2Location(void)

{
  RingsShader *pRVar1;
  RingsShader *pRVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pRVar1 = RingsShader__GetStatic();
  pcVar4 = "LightIrradiance_W_m2";
  pRVar2 = RingsShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pRVar2->_pad_0x4_1,pcVar4);
  (pRVar1->LightIrradiance_W_m2RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200);
  if ((pRVar1->LightIrradiance_W_m2RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: LightIrradiance_W_m2."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pRVar1 = RingsShader__GetStatic();
  (**(code **)(pRVar1->_pad_0x0_0 + 0x70))(&local_8);
  return;
}

//==== 004a9380 LoadLightPositionLocation ====

/* private: static void __cdecl DeferredWorldLightingShader__LoadLightPositionLocation(void) */

void __cdecl DeferredWorldLightingShader__LoadLightPositionLocation(void)

{
  DeferredWorldLightingShader *pDVar1;
  DeferredWorldLightingShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined8 local_10;
  undefined4 local_8;
  
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  pcVar4 = "LightPosition";
  pDVar2 = DeferredWorldLightingShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->LightPositionRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a);
  if ((pDVar1->LightPositionRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: LightPosition.");
    DebugBreak();
  }
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  local_8 = 0;
  local_10 = 0;
  (**(code **)(pDVar1->_pad_0x0_0 + 0xa0))(&local_10);
  return;
}

//==== 004a9410 LoadLightPower_WLocation ====

/* private: static void __cdecl DeferredWorldLightingShader__LoadLightPower_WLocation(void) */

void __cdecl DeferredWorldLightingShader__LoadLightPower_WLocation(void)

{
  DeferredWorldLightingShader *pDVar1;
  DeferredWorldLightingShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  pcVar4 = "LightPower_W";
  pDVar2 = DeferredWorldLightingShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->LightPower_WRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a);
  if ((pDVar1->LightPower_WRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: LightPower_W.");
    DebugBreak();
  }
  local_8 = 0;
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0xa8))(&local_8);
  return;
}

//==== 004a9490 LoadLuminanceStoredInAlphaChannelLocation ====

/* private: static void __cdecl SimpleShader__LoadLuminanceStoredInAlphaChannelLocation(void) */

void __cdecl SimpleShader__LoadLuminanceStoredInAlphaChannelLocation(void)

{
  SimpleShader *pSVar1;
  SimpleShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_8;
  
  pSVar1 = SimpleShader__GetStatic();
  pcVar4 = "LuminanceStoredInAlphaChannel";
  pSVar2 = SimpleShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->LuminanceStoredInAlphaChannelRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x13);
  if ((pSVar1->LuminanceStoredInAlphaChannelRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x13,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: LuminanceStoredInAlphaChannel."
                   );
    DebugBreak();
  }
  uStack_8 = uStack_8 & 0xffffff;
  pSVar1 = SimpleShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0x4c))((int)&uStack_8 + 3);
  return;
}

//==== 004a9500 LoadLuminantIrradiance_W_m2Location_004a9500 ====

/* private: static void __cdecl PlanetShader__LoadLuminantIrradiance_W_m2Location(void) */

void __cdecl PlanetShader__LoadLuminantIrradiance_W_m2Location(void)

{
  PlanetShader *pPVar1;
  PlanetShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PlanetShader__GetStatic();
  pcVar4 = "LuminantIrradiance_W_m2";
  pPVar2 = PlanetShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->LuminantIrradiance_W_m2RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  if ((pPVar1->LuminantIrradiance_W_m2RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: LuminantIrradiance_W_m2."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pPVar1 = PlanetShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0xd8))(&local_8);
  return;
}

//==== 004a9590 LoadLuminantTemperature_KLocation_004a9590 ====

/* private: static void __cdecl PlanetShader__LoadLuminantTemperature_KLocation(void) */

void __cdecl PlanetShader__LoadLuminantTemperature_KLocation(void)

{
  PlanetShader *pPVar1;
  PlanetShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PlanetShader__GetStatic();
  pcVar4 = "LuminantTemperature_K";
  pPVar2 = PlanetShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->LuminantTemperature_KRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  if ((pPVar1->LuminantTemperature_KRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: LuminantTemperature_K."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pPVar1 = PlanetShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0xd0))(&local_8);
  return;
}

//==== 004a9620 LoadModelMatrixLocation_004a9620 ====

/* private: static void __cdecl ArmorShader__LoadModelMatrixLocation(void) */

void __cdecl ArmorShader__LoadModelMatrixLocation(void)

{
  ArmorShader *pAVar1;
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
  
  pAVar1 = ArmorShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pAVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a964b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x78);
  pAVar1 = ArmorShader__GetStatic();
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
  (**(code **)(pAVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 004a9660 LoadModelMatrixLocation_004a9660 ====

/* private: static void __cdecl AsteroidCratersShader__LoadModelMatrixLocation(void) */

void __cdecl AsteroidCratersShader__LoadModelMatrixLocation(void)

{
  AsteroidCratersShader *pAVar1;
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
  
  pAVar1 = AsteroidCratersShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pAVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a968e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc);
  pAVar1 = AsteroidCratersShader__GetStatic();
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
  (**(code **)(pAVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 004a96a0 LoadModelMatrixLocation_004a96a0 ====

/* private: static void __cdecl AsteroidDiffuseShader__LoadModelMatrixLocation(void) */

void __cdecl AsteroidDiffuseShader__LoadModelMatrixLocation(void)

{
  AsteroidDiffuseShader *pAVar1;
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
  
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pAVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a96ce;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103);
  pAVar1 = AsteroidDiffuseShader__GetStatic();
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
  (**(code **)(pAVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 004a96e0 LoadModelMatrixLocation_004a96e0 ====

/* private: static void __cdecl AsteroidHeightShader__LoadModelMatrixLocation(void) */

void __cdecl AsteroidHeightShader__LoadModelMatrixLocation(void)

{
  AsteroidHeightShader *pAVar1;
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
  
  pAVar1 = AsteroidHeightShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pAVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a970e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x107);
  pAVar1 = AsteroidHeightShader__GetStatic();
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
  (**(code **)(pAVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 004a9720 LoadModelMatrixLocation_004a9720 ====

/* private: static void __cdecl AsteroidNormalShader__LoadModelMatrixLocation(void) */

void __cdecl AsteroidNormalShader__LoadModelMatrixLocation(void)

{
  AsteroidNormalShader *pAVar1;
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
  
  pAVar1 = AsteroidNormalShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pAVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a974e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x10c);
  pAVar1 = AsteroidNormalShader__GetStatic();
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
  (**(code **)(pAVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 004a9760 LoadModelMatrixLocation_004a9760 ====


/* private: static void __cdecl BlastLauncherShader__LoadModelMatrixLocation(void) */

void __cdecl BlastLauncherShader__LoadModelMatrixLocation(void)

{
  BlastLauncherShader *pBVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
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
  
  pBVar1 = BlastLauncherShader__GetStatic();
  GetStatic();
  uVar2 = (*___glewGetUniformLocation)();
  *(undefined4 *)(pBVar1 + 0x2c) = uVar2;
  uStack_18 = 0x4a978b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e);
  pBVar1 = BlastLauncherShader__GetStatic();
  iVar3 = 0;
  pfVar5 = afStack_54;
  do {
    iVar4 = iVar3 + 1;
    *pfVar5 = (float)(iVar3 == 0);
    pfVar5[1] = (float)(iVar3 == 1);
    pfVar5[2] = (float)(iVar3 == 2);
    pfVar5[3] = (float)(iVar3 == 3);
    iVar3 = iVar4;
    pfVar5 = pfVar5 + 4;
  } while (iVar4 < 4);
  iVar3 = 0;
  pfVar5 = afStack_dc;
  do {
    iVar4 = iVar3 + 1;
    *pfVar5 = (float)(iVar3 == 0);
    pfVar5[1] = (float)(iVar3 == 1);
    pfVar5[2] = (float)(iVar3 == 2);
    pfVar5[3] = (float)(iVar3 == 3);
    iVar3 = iVar4;
    pfVar5 = pfVar5 + 4;
  } while (iVar4 < 4);
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
  (**(code **)(*(int *)pBVar1 + 0x20))(&fStack_94);
  return;
}





//==== 004a97a0 LoadModelMatrixLocation_004a97a0 ====

/* private: static void __cdecl CityLightsShader__LoadModelMatrixLocation(void) */

void __cdecl CityLightsShader__LoadModelMatrixLocation(void)

{
  CityLightsShader *pCVar1;
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
  
  pCVar1 = CityLightsShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pCVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a97ce;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6);
  pCVar1 = CityLightsShader__GetStatic();
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
  (**(code **)(pCVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 004a97e0 LoadModelMatrixLocation_004a97e0 ====

/* private: static void __cdecl DamageGeneratorShader__LoadModelMatrixLocation(void) */

void __cdecl DamageGeneratorShader__LoadModelMatrixLocation(void)

{
  DamageGeneratorShader *pDVar1;
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
  
  pDVar1 = DamageGeneratorShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pDVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a980e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118);
  pDVar1 = DamageGeneratorShader__GetStatic();
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
  (**(code **)(pDVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 004a9820 LoadModelMatrixLocation_004a9820 ====

/* private: static void __cdecl DamageShader__LoadModelMatrixLocation(void) */

void __cdecl DamageShader__LoadModelMatrixLocation(void)

{
  DamageShader *pDVar1;
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
  
  pDVar1 = DamageShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pDVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a984b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x6c);
  pDVar1 = DamageShader__GetStatic();
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
  (**(code **)(pDVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 004a9860 LoadModelMatrixLocation_004a9860 ====

/* private: static void __cdecl DamagedArmorShader__LoadModelMatrixLocation(void) */

void __cdecl DamagedArmorShader__LoadModelMatrixLocation(void)

{
  DamagedArmorShader *pDVar1;
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
  
  pDVar1 = DamagedArmorShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pDVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a988b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x74);
  pDVar1 = DamagedArmorShader__GetStatic();
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
  (**(code **)(pDVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 004a98a0 LoadModelMatrixLocation_004a98a0 ====

/* private: static void __cdecl DeferredGlobalLightingShader__LoadModelMatrixLocation(void) */

void __cdecl DeferredGlobalLightingShader__LoadModelMatrixLocation(void)

{
  DeferredGlobalLightingShader *pDVar1;
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
  
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pDVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a98cb;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52);
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
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
  (**(code **)(pDVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 004a98e0 LoadModelMatrixLocation_004a98e0 ====

/* private: static void __cdecl DeferredWorldLightingShader__LoadModelMatrixLocation(void) */

void __cdecl DeferredWorldLightingShader__LoadModelMatrixLocation(void)

{
  DeferredWorldLightingShader *pDVar1;
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
  
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pDVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a990b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a);
  pDVar1 = DeferredWorldLightingShader__GetStatic();
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
  (**(code **)(pDVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 004a9920 LoadModelMatrixLocation_004a9920 ====

/* private: static void __cdecl EquirectangularToCubeMapShader__LoadModelMatrixLocation(void) */

void __cdecl EquirectangularToCubeMapShader__LoadModelMatrixLocation(void)

{
  EquirectangularToCubeMapShader *pEVar1;
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
  
  pEVar1 = EquirectangularToCubeMapShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pEVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a994e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x11d);
  pEVar1 = EquirectangularToCubeMapShader__GetStatic();
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
  (**(code **)(pEVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 004a9960 LoadModelMatrixLocation_004a9960 ====

/* private: static void __cdecl ExhaustShader__LoadModelMatrixLocation(void) */

void __cdecl ExhaustShader__LoadModelMatrixLocation(void)

{
  ExhaustShader *pEVar1;
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
  
  pEVar1 = ExhaustShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pEVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a998b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x60);
  pEVar1 = ExhaustShader__GetStatic();
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
  (**(code **)(pEVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 004a99a0 LoadModelMatrixLocation_004a99a0 ====

/* private: static void __cdecl GeneralModuleShader__LoadModelMatrixLocation(void) */

void __cdecl GeneralModuleShader__LoadModelMatrixLocation(void)

{
  GeneralModuleShader *pGVar1;
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
  
  pGVar1 = GeneralModuleShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pGVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a99ce;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8f);
  pGVar1 = GeneralModuleShader__GetStatic();
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
  (**(code **)(pGVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 004a99e0 LoadModelMatrixLocation_004a99e0 ====

/* private: static void __cdecl ParticleShader__LoadModelMatrixLocation(void) */

void __cdecl ParticleShader__LoadModelMatrixLocation(void)

{
  ParticleShader *pPVar1;
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
  
  pPVar1 = ParticleShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pPVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a9a0e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112);
  pPVar1 = ParticleShader__GetStatic();
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
  (**(code **)(pPVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 004a9a20 LoadModelMatrixLocation_004a9a20 ====

/* private: static void __cdecl PlanetShader__LoadModelMatrixLocation(void) */

void __cdecl PlanetShader__LoadModelMatrixLocation(void)

{
  PlanetShader *pPVar1;
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
  
  pPVar1 = PlanetShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pPVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a9a4e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  pPVar1 = PlanetShader__GetStatic();
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
  (**(code **)(pPVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 004a9a60 LoadModelMatrixLocation_004a9a60 ====

/* private: static void __cdecl PropellantTankShader__LoadModelMatrixLocation(void) */

void __cdecl PropellantTankShader__LoadModelMatrixLocation(void)

{
  PropellantTankShader *pPVar1;
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
  
  pPVar1 = PropellantTankShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pPVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a9a8e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83);
  pPVar1 = PropellantTankShader__GetStatic();
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
  (**(code **)(pPVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 004a9aa0 LoadModelMatrixLocation_004a9aa0 ====

/* private: static void __cdecl RadiatorShader__LoadModelMatrixLocation(void) */

void __cdecl RadiatorShader__LoadModelMatrixLocation(void)

{
  RadiatorShader *pRVar1;
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
  
  pRVar1 = RadiatorShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pRVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a9ace;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x87);
  pRVar1 = RadiatorShader__GetStatic();
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
  (**(code **)(pRVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 004a9ae0 LoadModelMatrixLocation_004a9ae0 ====

/* private: static void __cdecl RingShadowShader__LoadModelMatrixLocation(void) */

void __cdecl RingShadowShader__LoadModelMatrixLocation(void)

{
  RingShadowShader *pRVar1;
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
  
  pRVar1 = RingShadowShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pRVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a9b0e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd7);
  pRVar1 = RingShadowShader__GetStatic();
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
  (**(code **)(pRVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 004a9b20 LoadModelMatrixLocation_004a9b20 ====

/* private: static void __cdecl RingsShader__LoadModelMatrixLocation(void) */

void __cdecl RingsShader__LoadModelMatrixLocation(void)

{
  RingsShader *pRVar1;
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
  
  pRVar1 = RingsShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pRVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a9b4e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200);
  pRVar1 = RingsShader__GetStatic();
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
  (**(code **)(pRVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 004a9b60 LoadModelMatrixLocation_004a9b60 ====

/* private: static void __cdecl RocketEngineShader__LoadModelMatrixLocation(void) */

void __cdecl RocketEngineShader__LoadModelMatrixLocation(void)

{
  RocketEngineShader *pRVar1;
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
  
  pRVar1 = RocketEngineShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pRVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a9b8e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8b);
  pRVar1 = RocketEngineShader__GetStatic();
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
  (**(code **)(pRVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 004a9ba0 LoadModelMatrixLocation_004a9ba0 ====

/* private: static void __cdecl ShadowShader__LoadModelMatrixLocation(void) */

void __cdecl ShadowShader__LoadModelMatrixLocation(void)

{
  ShadowShader *pSVar1;
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
  
  pSVar1 = ShadowShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pSVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a9bce;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xca);
  pSVar1 = ShadowShader__GetStatic();
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
  (**(code **)(pSVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 004a9be0 LoadModelMatrixLocation_004a9be0 ====

/* private: static void __cdecl ShockwaveShader__LoadModelMatrixLocation(void) */

void __cdecl ShockwaveShader__LoadModelMatrixLocation(void)

{
  ShockwaveShader *pSVar1;
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
  
  pSVar1 = ShockwaveShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pSVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a9c0b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x62);
  pSVar1 = ShockwaveShader__GetStatic();
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
  (**(code **)(pSVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 004a9c20 LoadModelMatrixLocation_004a9c20 ====

/* private: static void __cdecl SimpleShader__LoadModelMatrixLocation(void) */

void __cdecl SimpleShader__LoadModelMatrixLocation(void)

{
  SimpleShader *pSVar1;
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
  
  pSVar1 = SimpleShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pSVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a9c4b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x13);
  pSVar1 = SimpleShader__GetStatic();
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
  (**(code **)(pSVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 004a9c60 LoadModelMatrixLocation_004a9c60 ====


/* private: static void __cdecl SpacecraftShadowShader__LoadModelMatrixLocation(void) */

void __cdecl SpacecraftShadowShader__LoadModelMatrixLocation(void)

{
  SpacecraftShadowShader *pSVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
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
  
  pSVar1 = SpacecraftShadowShader__GetStatic();
  GetStatic();
  uVar2 = (*___glewGetUniformLocation)();
  *(undefined4 *)(pSVar1 + 0x2c) = uVar2;
  uStack_18 = 0x4a9c8e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd2);
  pSVar1 = SpacecraftShadowShader__GetStatic();
  iVar3 = 0;
  pfVar5 = afStack_54;
  do {
    iVar4 = iVar3 + 1;
    *pfVar5 = (float)(iVar3 == 0);
    pfVar5[1] = (float)(iVar3 == 1);
    pfVar5[2] = (float)(iVar3 == 2);
    pfVar5[3] = (float)(iVar3 == 3);
    iVar3 = iVar4;
    pfVar5 = pfVar5 + 4;
  } while (iVar4 < 4);
  iVar3 = 0;
  pfVar5 = afStack_dc;
  do {
    iVar4 = iVar3 + 1;
    *pfVar5 = (float)(iVar3 == 0);
    pfVar5[1] = (float)(iVar3 == 1);
    pfVar5[2] = (float)(iVar3 == 2);
    pfVar5[3] = (float)(iVar3 == 3);
    iVar3 = iVar4;
    pfVar5 = pfVar5 + 4;
  } while (iVar4 < 4);
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
  (**(code **)(*(int *)pSVar1 + 0x20))(&fStack_94);
  return;
}





//==== 004a9ca0 LoadModelMatrixLocation_004a9ca0 ====

/* private: static void __cdecl StarShader__LoadModelMatrixLocation(void) */

void __cdecl StarShader__LoadModelMatrixLocation(void)

{
  StarShader *pSVar1;
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
  
  pSVar1 = StarShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pSVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4a9ccb;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xc);
  pSVar1 = StarShader__GetStatic();
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
  (**(code **)(pSVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 004a9ce0 LoadNearPlaneLocation_004a9ce0 ====

/* private: static void __cdecl ArmorShader__LoadNearPlaneLocation(void) */

void __cdecl ArmorShader__LoadNearPlaneLocation(void)

{
  ArmorShader *pAVar1;
  ArmorShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pAVar1 = ArmorShader__GetStatic();
  pcVar4 = "NearPlane";
  pAVar2 = ArmorShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x78);
  local_8 = 0;
  pAVar1 = ArmorShader__GetStatic();
  (**(code **)(pAVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 004a9d30 LoadNearPlaneLocation_004a9d30 ====

/* private: static void __cdecl AsteroidCratersShader__LoadNearPlaneLocation(void) */

void __cdecl AsteroidCratersShader__LoadNearPlaneLocation(void)

{
  AsteroidCratersShader *pAVar1;
  AsteroidCratersShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pAVar1 = AsteroidCratersShader__GetStatic();
  pcVar4 = "NearPlane";
  pAVar2 = AsteroidCratersShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc);
  local_8 = 0;
  pAVar1 = AsteroidCratersShader__GetStatic();
  (**(code **)(pAVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 004a9d90 LoadNearPlaneLocation_004a9d90 ====

/* private: static void __cdecl AsteroidDiffuseShader__LoadNearPlaneLocation(void) */

void __cdecl AsteroidDiffuseShader__LoadNearPlaneLocation(void)

{
  AsteroidDiffuseShader *pAVar1;
  AsteroidDiffuseShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  pcVar4 = "NearPlane";
  pAVar2 = AsteroidDiffuseShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103);
  local_8 = 0;
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  (**(code **)(pAVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 004a9df0 LoadNearPlaneLocation_004a9df0 ====

/* private: static void __cdecl AsteroidHeightShader__LoadNearPlaneLocation(void) */

void __cdecl AsteroidHeightShader__LoadNearPlaneLocation(void)

{
  AsteroidHeightShader *pAVar1;
  AsteroidHeightShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pAVar1 = AsteroidHeightShader__GetStatic();
  pcVar4 = "NearPlane";
  pAVar2 = AsteroidHeightShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x107);
  local_8 = 0;
  pAVar1 = AsteroidHeightShader__GetStatic();
  (**(code **)(pAVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 004a9e50 LoadNearPlaneLocation_004a9e50 ====

/* private: static void __cdecl AsteroidNormalShader__LoadNearPlaneLocation(void) */

void __cdecl AsteroidNormalShader__LoadNearPlaneLocation(void)

{
  AsteroidNormalShader *pAVar1;
  AsteroidNormalShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pAVar1 = AsteroidNormalShader__GetStatic();
  pcVar4 = "NearPlane";
  pAVar2 = AsteroidNormalShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x10c);
  local_8 = 0;
  pAVar1 = AsteroidNormalShader__GetStatic();
  (**(code **)(pAVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 004a9eb0 LoadNearPlaneLocation_004a9eb0 ====


/* private: static void __cdecl BlastLauncherShader__LoadNearPlaneLocation(void) */

void __cdecl BlastLauncherShader__LoadNearPlaneLocation(void)

{
  BlastLauncherShader *pBVar1;
  BlastLauncherShader *pBVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uStack_8;
  
  pBVar1 = BlastLauncherShader__GetStatic();
  pcVar4 = "NearPlane";
  pBVar2 = BlastLauncherShader__GetStatic();
  uVar3 = (*___glewGetUniformLocation)(*(undefined4 *)(pBVar2 + 4),pcVar4);
  *(undefined4 *)(pBVar1 + 0x3c) = uVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e);
  uStack_8 = 0;
  pBVar1 = BlastLauncherShader__GetStatic();
  (**(code **)(*(int *)pBVar1 + 0x40))(&uStack_8);
  return;
}





//==== 004a9f00 LoadNearPlaneLocation_004a9f00 ====

/* private: static void __cdecl CityLightsShader__LoadNearPlaneLocation(void) */

void __cdecl CityLightsShader__LoadNearPlaneLocation(void)

{
  CityLightsShader *pCVar1;
  CityLightsShader *pCVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pCVar1 = CityLightsShader__GetStatic();
  pcVar4 = "NearPlane";
  pCVar2 = CityLightsShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pCVar2->_pad_0x4_1,pcVar4);
  (pCVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6);
  local_8 = 0;
  pCVar1 = CityLightsShader__GetStatic();
  (**(code **)(pCVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 004a9f60 LoadNearPlaneLocation_004a9f60 ====

/* private: static void __cdecl DamageGeneratorShader__LoadNearPlaneLocation(void) */

void __cdecl DamageGeneratorShader__LoadNearPlaneLocation(void)

{
  DamageGeneratorShader *pDVar1;
  DamageGeneratorShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DamageGeneratorShader__GetStatic();
  pcVar4 = "NearPlane";
  pDVar2 = DamageGeneratorShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118);
  local_8 = 0;
  pDVar1 = DamageGeneratorShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 004a9fc0 LoadNearPlaneLocation_004a9fc0 ====

/* private: static void __cdecl DamageShader__LoadNearPlaneLocation(void) */

void __cdecl DamageShader__LoadNearPlaneLocation(void)

{
  DamageShader *pDVar1;
  DamageShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DamageShader__GetStatic();
  pcVar4 = "NearPlane";
  pDVar2 = DamageShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x6c);
  local_8 = 0;
  pDVar1 = DamageShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 004aa010 LoadNearPlaneLocation_004aa010 ====

/* private: static void __cdecl DamagedArmorShader__LoadNearPlaneLocation(void) */

void __cdecl DamagedArmorShader__LoadNearPlaneLocation(void)

{
  DamagedArmorShader *pDVar1;
  DamagedArmorShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DamagedArmorShader__GetStatic();
  pcVar4 = "NearPlane";
  pDVar2 = DamagedArmorShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x74);
  local_8 = 0;
  pDVar1 = DamagedArmorShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 004aa060 LoadNearPlaneLocation_004aa060 ====

/* private: static void __cdecl DeferredGlobalLightingShader__LoadNearPlaneLocation(void) */

void __cdecl DeferredGlobalLightingShader__LoadNearPlaneLocation(void)

{
  DeferredGlobalLightingShader *pDVar1;
  DeferredGlobalLightingShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  pcVar4 = "NearPlane";
  pDVar2 = DeferredGlobalLightingShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52);
  local_8 = 0;
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 004aa0b0 LoadNearPlaneLocation_004aa0b0 ====

/* private: static void __cdecl DeferredWorldLightingShader__LoadNearPlaneLocation(void) */

void __cdecl DeferredWorldLightingShader__LoadNearPlaneLocation(void)

{
  DeferredWorldLightingShader *pDVar1;
  DeferredWorldLightingShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  pcVar4 = "NearPlane";
  pDVar2 = DeferredWorldLightingShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a);
  local_8 = 0;
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 004aa100 LoadNearPlaneLocation_004aa100 ====

/* private: static void __cdecl EquirectangularToCubeMapShader__LoadNearPlaneLocation(void) */

void __cdecl EquirectangularToCubeMapShader__LoadNearPlaneLocation(void)

{
  EquirectangularToCubeMapShader *pEVar1;
  EquirectangularToCubeMapShader *pEVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pEVar1 = EquirectangularToCubeMapShader__GetStatic();
  pcVar4 = "NearPlane";
  pEVar2 = EquirectangularToCubeMapShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pEVar2->_pad_0x4_1,pcVar4);
  (pEVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x11d);
  local_8 = 0;
  pEVar1 = EquirectangularToCubeMapShader__GetStatic();
  (**(code **)(pEVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 004aa160 LoadNearPlaneLocation_004aa160 ====

/* private: static void __cdecl ExhaustShader__LoadNearPlaneLocation(void) */

void __cdecl ExhaustShader__LoadNearPlaneLocation(void)

{
  ExhaustShader *pEVar1;
  ExhaustShader *pEVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pEVar1 = ExhaustShader__GetStatic();
  pcVar4 = "NearPlane";
  pEVar2 = ExhaustShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pEVar2->_pad_0x4_1,pcVar4);
  (pEVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x60);
  local_8 = 0;
  pEVar1 = ExhaustShader__GetStatic();
  (**(code **)(pEVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 004aa1b0 LoadNearPlaneLocation_004aa1b0 ====

/* private: static void __cdecl GeneralModuleShader__LoadNearPlaneLocation(void) */

void __cdecl GeneralModuleShader__LoadNearPlaneLocation(void)

{
  GeneralModuleShader *pGVar1;
  GeneralModuleShader *pGVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pGVar1 = GeneralModuleShader__GetStatic();
  pcVar4 = "NearPlane";
  pGVar2 = GeneralModuleShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pGVar2->_pad_0x4_1,pcVar4);
  (pGVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8f);
  local_8 = 0;
  pGVar1 = GeneralModuleShader__GetStatic();
  (**(code **)(pGVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 004aa210 LoadNearPlaneLocation_004aa210 ====

/* private: static void __cdecl ParticleShader__LoadNearPlaneLocation(void) */

void __cdecl ParticleShader__LoadNearPlaneLocation(void)

{
  ParticleShader *pPVar1;
  ParticleShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = ParticleShader__GetStatic();
  pcVar4 = "NearPlane";
  pPVar2 = ParticleShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112);
  local_8 = 0;
  pPVar1 = ParticleShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 004aa270 LoadNearPlaneLocation_004aa270 ====

/* private: static void __cdecl PlanetShader__LoadNearPlaneLocation(void) */

void __cdecl PlanetShader__LoadNearPlaneLocation(void)

{
  PlanetShader *pPVar1;
  PlanetShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PlanetShader__GetStatic();
  pcVar4 = "NearPlane";
  pPVar2 = PlanetShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  local_8 = 0;
  pPVar1 = PlanetShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 004aa2d0 LoadNearPlaneLocation_004aa2d0 ====

/* private: static void __cdecl PropellantTankShader__LoadNearPlaneLocation(void) */

void __cdecl PropellantTankShader__LoadNearPlaneLocation(void)

{
  PropellantTankShader *pPVar1;
  PropellantTankShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PropellantTankShader__GetStatic();
  pcVar4 = "NearPlane";
  pPVar2 = PropellantTankShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83);
  local_8 = 0;
  pPVar1 = PropellantTankShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 004aa330 LoadNearPlaneLocation_004aa330 ====

/* private: static void __cdecl RadiatorShader__LoadNearPlaneLocation(void) */

void __cdecl RadiatorShader__LoadNearPlaneLocation(void)

{
  RadiatorShader *pRVar1;
  RadiatorShader *pRVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pRVar1 = RadiatorShader__GetStatic();
  pcVar4 = "NearPlane";
  pRVar2 = RadiatorShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pRVar2->_pad_0x4_1,pcVar4);
  (pRVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x87);
  local_8 = 0;
  pRVar1 = RadiatorShader__GetStatic();
  (**(code **)(pRVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 004aa390 LoadNearPlaneLocation_004aa390 ====

/* private: static void __cdecl RingShadowShader__LoadNearPlaneLocation(void) */

void __cdecl RingShadowShader__LoadNearPlaneLocation(void)

{
  RingShadowShader *pRVar1;
  RingShadowShader *pRVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pRVar1 = RingShadowShader__GetStatic();
  pcVar4 = "NearPlane";
  pRVar2 = RingShadowShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pRVar2->_pad_0x4_1,pcVar4);
  (pRVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd7);
  local_8 = 0;
  pRVar1 = RingShadowShader__GetStatic();
  (**(code **)(pRVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 004aa3f0 LoadNearPlaneLocation_004aa3f0 ====

/* private: static void __cdecl RingsShader__LoadNearPlaneLocation(void) */

void __cdecl RingsShader__LoadNearPlaneLocation(void)

{
  RingsShader *pRVar1;
  RingsShader *pRVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pRVar1 = RingsShader__GetStatic();
  pcVar4 = "NearPlane";
  pRVar2 = RingsShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pRVar2->_pad_0x4_1,pcVar4);
  (pRVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200);
  local_8 = 0;
  pRVar1 = RingsShader__GetStatic();
  (**(code **)(pRVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 004aa450 LoadNearPlaneLocation_004aa450 ====

/* private: static void __cdecl RocketEngineShader__LoadNearPlaneLocation(void) */

void __cdecl RocketEngineShader__LoadNearPlaneLocation(void)

{
  RocketEngineShader *pRVar1;
  RocketEngineShader *pRVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pRVar1 = RocketEngineShader__GetStatic();
  pcVar4 = "NearPlane";
  pRVar2 = RocketEngineShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pRVar2->_pad_0x4_1,pcVar4);
  (pRVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8b);
  local_8 = 0;
  pRVar1 = RocketEngineShader__GetStatic();
  (**(code **)(pRVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 004aa4b0 LoadNearPlaneLocation_004aa4b0 ====

/* private: static void __cdecl ShadowShader__LoadNearPlaneLocation(void) */

void __cdecl ShadowShader__LoadNearPlaneLocation(void)

{
  ShadowShader *pSVar1;
  ShadowShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pSVar1 = ShadowShader__GetStatic();
  pcVar4 = "NearPlane";
  pSVar2 = ShadowShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xca);
  local_8 = 0;
  pSVar1 = ShadowShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 004aa510 LoadNearPlaneLocation_004aa510 ====

/* private: static void __cdecl ShockwaveShader__LoadNearPlaneLocation(void) */

void __cdecl ShockwaveShader__LoadNearPlaneLocation(void)

{
  ShockwaveShader *pSVar1;
  ShockwaveShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pSVar1 = ShockwaveShader__GetStatic();
  pcVar4 = "NearPlane";
  pSVar2 = ShockwaveShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x62);
  local_8 = 0;
  pSVar1 = ShockwaveShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 004aa560 LoadNearPlaneLocation_004aa560 ====

/* private: static void __cdecl SimpleShader__LoadNearPlaneLocation(void) */

void __cdecl SimpleShader__LoadNearPlaneLocation(void)

{
  SimpleShader *pSVar1;
  SimpleShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pSVar1 = SimpleShader__GetStatic();
  pcVar4 = "NearPlane";
  pSVar2 = SimpleShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x13);
  local_8 = 0;
  pSVar1 = SimpleShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 004aa5b0 LoadNearPlaneLocation_004aa5b0 ====


/* private: static void __cdecl SpacecraftShadowShader__LoadNearPlaneLocation(void) */

void __cdecl SpacecraftShadowShader__LoadNearPlaneLocation(void)

{
  SpacecraftShadowShader *pSVar1;
  SpacecraftShadowShader *pSVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uStack_8;
  
  pSVar1 = SpacecraftShadowShader__GetStatic();
  pcVar4 = "NearPlane";
  pSVar2 = SpacecraftShadowShader__GetStatic();
  uVar3 = (*___glewGetUniformLocation)(*(undefined4 *)(pSVar2 + 4),pcVar4);
  *(undefined4 *)(pSVar1 + 0x3c) = uVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd2);
  uStack_8 = 0;
  pSVar1 = SpacecraftShadowShader__GetStatic();
  (**(code **)(*(int *)pSVar1 + 0x40))(&uStack_8);
  return;
}





//==== 004aa610 LoadNearPlaneLocation_004aa610 ====

/* private: static void __cdecl StarShader__LoadNearPlaneLocation(void) */

void __cdecl StarShader__LoadNearPlaneLocation(void)

{
  StarShader *pSVar1;
  StarShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pSVar1 = StarShader__GetStatic();
  pcVar4 = "NearPlane";
  pSVar2 = StarShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xc);
  local_8 = 0;
  pSVar1 = StarShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 004aa660 LoadNormalCubeTextureLocation ====

/* private: static void __cdecl PlanetShader__LoadNormalCubeTextureLocation(void) */

void __cdecl PlanetShader__LoadNormalCubeTextureLocation(void)

{
  PlanetShader *pPVar1;
  PlanetShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PlanetShader__GetStatic();
  pcVar4 = "NormalCubeTexture";
  pPVar2 = PlanetShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->NormalCubeTextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  if ((pPVar1->NormalCubeTextureRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: NormalCubeTexture."
                   );
    DebugBreak();
  }
  local_8 = 2;
  pPVar1 = PlanetShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x6c))(&local_8);
  return;
}

//==== 004aa6e0 LoadNormalMatrixLocation_004aa6e0 ====

/* private: static void __cdecl ArmorShader__LoadNormalMatrixLocation(void) */

void __cdecl ArmorShader__LoadNormalMatrixLocation(void)

{
  ArmorShader *pAVar1;
  ArmorShader *pAVar2;
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
  
  pAVar1 = ArmorShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pAVar2 = ArmorShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x78);
  pAVar1 = ArmorShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pAVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 004aa770 LoadNormalMatrixLocation_004aa770 ====

/* private: static void __cdecl AsteroidCratersShader__LoadNormalMatrixLocation(void) */

void __cdecl AsteroidCratersShader__LoadNormalMatrixLocation(void)

{
  AsteroidCratersShader *pAVar1;
  AsteroidCratersShader *pAVar2;
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
  
  pAVar1 = AsteroidCratersShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pAVar2 = AsteroidCratersShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc);
  pAVar1 = AsteroidCratersShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pAVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 004aa800 LoadNormalMatrixLocation_004aa800 ====

/* private: static void __cdecl AsteroidDiffuseShader__LoadNormalMatrixLocation(void) */

void __cdecl AsteroidDiffuseShader__LoadNormalMatrixLocation(void)

{
  AsteroidDiffuseShader *pAVar1;
  AsteroidDiffuseShader *pAVar2;
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
  
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pAVar2 = AsteroidDiffuseShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103);
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pAVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 004aa890 LoadNormalMatrixLocation_004aa890 ====

/* private: static void __cdecl AsteroidHeightShader__LoadNormalMatrixLocation(void) */

void __cdecl AsteroidHeightShader__LoadNormalMatrixLocation(void)

{
  AsteroidHeightShader *pAVar1;
  AsteroidHeightShader *pAVar2;
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
  
  pAVar1 = AsteroidHeightShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pAVar2 = AsteroidHeightShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x107);
  pAVar1 = AsteroidHeightShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pAVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 004aa920 LoadNormalMatrixLocation_004aa920 ====

/* private: static void __cdecl AsteroidNormalShader__LoadNormalMatrixLocation(void) */

void __cdecl AsteroidNormalShader__LoadNormalMatrixLocation(void)

{
  AsteroidNormalShader *pAVar1;
  AsteroidNormalShader *pAVar2;
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
  
  pAVar1 = AsteroidNormalShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pAVar2 = AsteroidNormalShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x10c);
  pAVar1 = AsteroidNormalShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pAVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 004aa9b0 LoadNormalMatrixLocation_004aa9b0 ====


/* private: static void __cdecl BlastLauncherShader__LoadNormalMatrixLocation(void) */

void __cdecl BlastLauncherShader__LoadNormalMatrixLocation(void)

{
  BlastLauncherShader *pBVar1;
  BlastLauncherShader *pBVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pBVar1 = BlastLauncherShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pBVar2 = BlastLauncherShader__GetStatic();
  uVar3 = (*___glewGetUniformLocation)(*(undefined4 *)(pBVar2 + 4),pcVar4);
  *(undefined4 *)(pBVar1 + 0x38) = uVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e);
  pBVar1 = BlastLauncherShader__GetStatic();
  uStack_20 = 0x3f800000;
  uStack_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(*(int *)pBVar1 + 0x38))(&uStack_40);
  return;
}





//==== 004aaa40 LoadNormalMatrixLocation_004aaa40 ====

/* private: static void __cdecl CityLightsShader__LoadNormalMatrixLocation(void) */

void __cdecl CityLightsShader__LoadNormalMatrixLocation(void)

{
  CityLightsShader *pCVar1;
  CityLightsShader *pCVar2;
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
  
  pCVar1 = CityLightsShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pCVar2 = CityLightsShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pCVar2->_pad_0x4_1,pcVar4);
  (pCVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6);
  pCVar1 = CityLightsShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pCVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 004aaad0 LoadNormalMatrixLocation_004aaad0 ====

/* private: static void __cdecl DamageGeneratorShader__LoadNormalMatrixLocation(void) */

void __cdecl DamageGeneratorShader__LoadNormalMatrixLocation(void)

{
  DamageGeneratorShader *pDVar1;
  DamageGeneratorShader *pDVar2;
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
  
  pDVar1 = DamageGeneratorShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pDVar2 = DamageGeneratorShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118);
  pDVar1 = DamageGeneratorShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pDVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 004aab60 LoadNormalMatrixLocation_004aab60 ====

/* private: static void __cdecl DamageShader__LoadNormalMatrixLocation(void) */

void __cdecl DamageShader__LoadNormalMatrixLocation(void)

{
  DamageShader *pDVar1;
  DamageShader *pDVar2;
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
  
  pDVar1 = DamageShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pDVar2 = DamageShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x6c);
  pDVar1 = DamageShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pDVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 004aabf0 LoadNormalMatrixLocation_004aabf0 ====

/* private: static void __cdecl DamagedArmorShader__LoadNormalMatrixLocation(void) */

void __cdecl DamagedArmorShader__LoadNormalMatrixLocation(void)

{
  DamagedArmorShader *pDVar1;
  DamagedArmorShader *pDVar2;
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
  
  pDVar1 = DamagedArmorShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pDVar2 = DamagedArmorShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x74);
  pDVar1 = DamagedArmorShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pDVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 004aac80 LoadNormalMatrixLocation_004aac80 ====

/* private: static void __cdecl DeferredGlobalLightingShader__LoadNormalMatrixLocation(void) */

void __cdecl DeferredGlobalLightingShader__LoadNormalMatrixLocation(void)

{
  DeferredGlobalLightingShader *pDVar1;
  DeferredGlobalLightingShader *pDVar2;
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
  
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pDVar2 = DeferredGlobalLightingShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52);
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pDVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 004aad10 LoadNormalMatrixLocation_004aad10 ====

/* private: static void __cdecl DeferredWorldLightingShader__LoadNormalMatrixLocation(void) */

void __cdecl DeferredWorldLightingShader__LoadNormalMatrixLocation(void)

{
  DeferredWorldLightingShader *pDVar1;
  DeferredWorldLightingShader *pDVar2;
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
  
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pDVar2 = DeferredWorldLightingShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a);
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pDVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 004aada0 LoadNormalMatrixLocation_004aada0 ====

/* private: static void __cdecl EquirectangularToCubeMapShader__LoadNormalMatrixLocation(void) */

void __cdecl EquirectangularToCubeMapShader__LoadNormalMatrixLocation(void)

{
  EquirectangularToCubeMapShader *pEVar1;
  EquirectangularToCubeMapShader *pEVar2;
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
  
  pEVar1 = EquirectangularToCubeMapShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pEVar2 = EquirectangularToCubeMapShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pEVar2->_pad_0x4_1,pcVar4);
  (pEVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x11d);
  pEVar1 = EquirectangularToCubeMapShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pEVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 004aae30 LoadNormalMatrixLocation_004aae30 ====

/* private: static void __cdecl ExhaustShader__LoadNormalMatrixLocation(void) */

void __cdecl ExhaustShader__LoadNormalMatrixLocation(void)

{
  ExhaustShader *pEVar1;
  ExhaustShader *pEVar2;
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
  
  pEVar1 = ExhaustShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pEVar2 = ExhaustShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pEVar2->_pad_0x4_1,pcVar4);
  (pEVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x60);
  pEVar1 = ExhaustShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pEVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 004aaec0 LoadNormalMatrixLocation_004aaec0 ====

/* private: static void __cdecl GeneralModuleShader__LoadNormalMatrixLocation(void) */

void __cdecl GeneralModuleShader__LoadNormalMatrixLocation(void)

{
  GeneralModuleShader *pGVar1;
  GeneralModuleShader *pGVar2;
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
  
  pGVar1 = GeneralModuleShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pGVar2 = GeneralModuleShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pGVar2->_pad_0x4_1,pcVar4);
  (pGVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8f);
  pGVar1 = GeneralModuleShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pGVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 004aaf50 LoadNormalMatrixLocation_004aaf50 ====

/* private: static void __cdecl ParticleShader__LoadNormalMatrixLocation(void) */

void __cdecl ParticleShader__LoadNormalMatrixLocation(void)

{
  ParticleShader *pPVar1;
  ParticleShader *pPVar2;
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
  
  pPVar1 = ParticleShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pPVar2 = ParticleShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112);
  pPVar1 = ParticleShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 004aafe0 LoadNormalMatrixLocation_004aafe0 ====

/* private: static void __cdecl PlanetShader__LoadNormalMatrixLocation(void) */

void __cdecl PlanetShader__LoadNormalMatrixLocation(void)

{
  PlanetShader *pPVar1;
  PlanetShader *pPVar2;
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
  
  pPVar1 = PlanetShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pPVar2 = PlanetShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  pPVar1 = PlanetShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 004ab070 LoadNormalMatrixLocation_004ab070 ====

/* private: static void __cdecl PropellantTankShader__LoadNormalMatrixLocation(void) */

void __cdecl PropellantTankShader__LoadNormalMatrixLocation(void)

{
  PropellantTankShader *pPVar1;
  PropellantTankShader *pPVar2;
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
  
  pPVar1 = PropellantTankShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pPVar2 = PropellantTankShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83);
  pPVar1 = PropellantTankShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 004ab100 LoadNormalMatrixLocation_004ab100 ====

/* private: static void __cdecl RadiatorShader__LoadNormalMatrixLocation(void) */

void __cdecl RadiatorShader__LoadNormalMatrixLocation(void)

{
  RadiatorShader *pRVar1;
  RadiatorShader *pRVar2;
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
  
  pRVar1 = RadiatorShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pRVar2 = RadiatorShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pRVar2->_pad_0x4_1,pcVar4);
  (pRVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x87);
  pRVar1 = RadiatorShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pRVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 004ab190 LoadNormalMatrixLocation_004ab190 ====

/* private: static void __cdecl RingShadowShader__LoadNormalMatrixLocation(void) */

void __cdecl RingShadowShader__LoadNormalMatrixLocation(void)

{
  RingShadowShader *pRVar1;
  RingShadowShader *pRVar2;
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
  
  pRVar1 = RingShadowShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pRVar2 = RingShadowShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pRVar2->_pad_0x4_1,pcVar4);
  (pRVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd7);
  pRVar1 = RingShadowShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pRVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 004ab220 LoadNormalMatrixLocation_004ab220 ====

/* private: static void __cdecl RingsShader__LoadNormalMatrixLocation(void) */

void __cdecl RingsShader__LoadNormalMatrixLocation(void)

{
  RingsShader *pRVar1;
  RingsShader *pRVar2;
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
  
  pRVar1 = RingsShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pRVar2 = RingsShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pRVar2->_pad_0x4_1,pcVar4);
  (pRVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200);
  pRVar1 = RingsShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pRVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 004ab2b0 LoadNormalMatrixLocation_004ab2b0 ====

/* private: static void __cdecl RocketEngineShader__LoadNormalMatrixLocation(void) */

void __cdecl RocketEngineShader__LoadNormalMatrixLocation(void)

{
  RocketEngineShader *pRVar1;
  RocketEngineShader *pRVar2;
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
  
  pRVar1 = RocketEngineShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pRVar2 = RocketEngineShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pRVar2->_pad_0x4_1,pcVar4);
  (pRVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8b);
  pRVar1 = RocketEngineShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pRVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 004ab340 LoadNormalMatrixLocation_004ab340 ====

/* private: static void __cdecl ShadowShader__LoadNormalMatrixLocation(void) */

void __cdecl ShadowShader__LoadNormalMatrixLocation(void)

{
  ShadowShader *pSVar1;
  ShadowShader *pSVar2;
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
  
  pSVar1 = ShadowShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pSVar2 = ShadowShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xca);
  pSVar1 = ShadowShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pSVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 004ab3d0 LoadNormalMatrixLocation_004ab3d0 ====

/* private: static void __cdecl ShockwaveShader__LoadNormalMatrixLocation(void) */

void __cdecl ShockwaveShader__LoadNormalMatrixLocation(void)

{
  ShockwaveShader *pSVar1;
  ShockwaveShader *pSVar2;
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
  
  pSVar1 = ShockwaveShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pSVar2 = ShockwaveShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x62);
  pSVar1 = ShockwaveShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pSVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 004ab460 LoadNormalMatrixLocation_004ab460 ====

/* private: static void __cdecl SimpleShader__LoadNormalMatrixLocation(void) */

void __cdecl SimpleShader__LoadNormalMatrixLocation(void)

{
  SimpleShader *pSVar1;
  SimpleShader *pSVar2;
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
  
  pSVar1 = SimpleShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pSVar2 = SimpleShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x13);
  pSVar1 = SimpleShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pSVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 004ab4f0 LoadNormalMatrixLocation_004ab4f0 ====


/* private: static void __cdecl SpacecraftShadowShader__LoadNormalMatrixLocation(void) */

void __cdecl SpacecraftShadowShader__LoadNormalMatrixLocation(void)

{
  SpacecraftShadowShader *pSVar1;
  SpacecraftShadowShader *pSVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pSVar1 = SpacecraftShadowShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pSVar2 = SpacecraftShadowShader__GetStatic();
  uVar3 = (*___glewGetUniformLocation)(*(undefined4 *)(pSVar2 + 4),pcVar4);
  *(undefined4 *)(pSVar1 + 0x38) = uVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd2);
  pSVar1 = SpacecraftShadowShader__GetStatic();
  uStack_20 = 0x3f800000;
  uStack_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(*(int *)pSVar1 + 0x38))(&uStack_40);
  return;
}





//==== 004ab580 LoadNormalMatrixLocation_004ab580 ====

/* private: static void __cdecl StarShader__LoadNormalMatrixLocation(void) */

void __cdecl StarShader__LoadNormalMatrixLocation(void)

{
  StarShader *pSVar1;
  StarShader *pSVar2;
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
  
  pSVar1 = StarShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pSVar2 = StarShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xc);
  pSVar1 = StarShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pSVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 004ab610 LoadNormalSmoothingAmountLocation ====

/* private: static void __cdecl PlanetShader__LoadNormalSmoothingAmountLocation(void) */

void __cdecl PlanetShader__LoadNormalSmoothingAmountLocation(void)

{
  PlanetShader *pPVar1;
  PlanetShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PlanetShader__GetStatic();
  pcVar4 = "NormalSmoothingAmount";
  pPVar2 = PlanetShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->NormalSmoothingAmountRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  if ((pPVar1->NormalSmoothingAmountRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: NormalSmoothingAmount."
                   );
    DebugBreak();
  }
  local_8 = 0x3f800000;
  pPVar1 = PlanetShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0xa4))(&local_8);
  return;
}

//==== 004ab6a0 LoadNormalsTextureLocation ====

/* private: static void __cdecl DeferredGlobalLightingShader__LoadNormalsTextureLocation(void) */

void __cdecl DeferredGlobalLightingShader__LoadNormalsTextureLocation(void)

{
  DeferredGlobalLightingShader *pDVar1;
  DeferredGlobalLightingShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  pcVar4 = "NormalsTexture";
  pDVar2 = DeferredGlobalLightingShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->NormalsTextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52);
  if ((pDVar1->NormalsTextureRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: NormalsTexture.");
    DebugBreak();
  }
  local_8 = 2;
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x74))(&local_8);
  return;
}

//==== 004ab720 LoadNormalsTextureLocation_004ab720 ====

/* private: static void __cdecl DeferredWorldLightingShader__LoadNormalsTextureLocation(void) */

void __cdecl DeferredWorldLightingShader__LoadNormalsTextureLocation(void)

{
  DeferredWorldLightingShader *pDVar1;
  DeferredWorldLightingShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  pcVar4 = "NormalsTexture";
  pDVar2 = DeferredWorldLightingShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->NormalsTextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a);
  if ((pDVar1->NormalsTextureRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: NormalsTexture.");
    DebugBreak();
  }
  local_8 = 2;
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x74))(&local_8);
  return;
}

//==== 004ab7a0 LoadPayloadDiameter_mLocation ====


/* private: static void __cdecl BlastLauncherShader__LoadPayloadDiameter_mLocation(void) */

void __cdecl BlastLauncherShader__LoadPayloadDiameter_mLocation(void)

{
  BlastLauncherShader *pBVar1;
  BlastLauncherShader *pBVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uStack_8;
  
  pBVar1 = BlastLauncherShader__GetStatic();
  pcVar4 = "PayloadDiameter_m";
  pBVar2 = BlastLauncherShader__GetStatic();
  uVar3 = (*___glewGetUniformLocation)(*(undefined4 *)(pBVar2 + 4),pcVar4);
  *(undefined4 *)(pBVar1 + 0x4c) = uVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e);
  if (*(int *)(pBVar1 + 0x4c) == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: PayloadDiameter_m."
                   );
    DebugBreak();
  }
  uStack_8 = 0;
  pBVar1 = BlastLauncherShader__GetStatic();
  (**(code **)(*(int *)pBVar1 + 0x60))(&uStack_8);
  return;
}





//==== 004ab820 LoadPixelsPerMeterLocation ====

/* private: static void __cdecl ArmorShader__LoadPixelsPerMeterLocation(void) */

void __cdecl ArmorShader__LoadPixelsPerMeterLocation(void)

{
  ArmorShader *pAVar1;
  ArmorShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pAVar1 = ArmorShader__GetStatic();
  pcVar4 = "PixelsPerMeter";
  pAVar2 = ArmorShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->PixelsPerMeterRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x78);
  if ((pAVar1->PixelsPerMeterRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x78,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: PixelsPerMeter.");
    DebugBreak();
  }
  local_8 = 0;
  pAVar1 = ArmorShader__GetStatic();
  (**(code **)(pAVar1->_pad_0x0_0 + 0x58))(&local_8);
  return;
}

//==== 004ab8a0 LoadPixelsPerMeterLocation_004ab8a0 ====


/* private: static void __cdecl BlastLauncherShader__LoadPixelsPerMeterLocation(void) */

void __cdecl BlastLauncherShader__LoadPixelsPerMeterLocation(void)

{
  BlastLauncherShader *pBVar1;
  BlastLauncherShader *pBVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uStack_8;
  
  pBVar1 = BlastLauncherShader__GetStatic();
  pcVar4 = "PixelsPerMeter";
  pBVar2 = BlastLauncherShader__GetStatic();
  uVar3 = (*___glewGetUniformLocation)(*(undefined4 *)(pBVar2 + 4),pcVar4);
  *(undefined4 *)(pBVar1 + 0x48) = uVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e);
  if (*(int *)(pBVar1 + 0x48) == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: PixelsPerMeter.");
    DebugBreak();
  }
  uStack_8 = 0;
  pBVar1 = BlastLauncherShader__GetStatic();
  (**(code **)(*(int *)pBVar1 + 0x58))(&uStack_8);
  return;
}





//==== 004ab920 LoadPixelsPerMeterLocation_004ab920 ====

/* private: static void __cdecl DamagedArmorShader__LoadPixelsPerMeterLocation(void) */

void __cdecl DamagedArmorShader__LoadPixelsPerMeterLocation(void)

{
  DamagedArmorShader *pDVar1;
  DamagedArmorShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DamagedArmorShader__GetStatic();
  pcVar4 = "PixelsPerMeter";
  pDVar2 = DamagedArmorShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->PixelsPerMeterRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x74);
  if ((pDVar1->PixelsPerMeterRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x74,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: PixelsPerMeter.");
    DebugBreak();
  }
  local_8 = 0;
  pDVar1 = DamagedArmorShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x58))(&local_8);
  return;
}

//==== 004ab9a0 LoadPixelsPerMeterLocation_004ab9a0 ====

/* private: static void __cdecl GeneralModuleShader__LoadPixelsPerMeterLocation(void) */

void __cdecl GeneralModuleShader__LoadPixelsPerMeterLocation(void)

{
  GeneralModuleShader *pGVar1;
  GeneralModuleShader *pGVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pGVar1 = GeneralModuleShader__GetStatic();
  pcVar4 = "PixelsPerMeter";
  pGVar2 = GeneralModuleShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pGVar2->_pad_0x4_1,pcVar4);
  (pGVar1->PixelsPerMeterRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8f);
  if ((pGVar1->PixelsPerMeterRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8f,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: PixelsPerMeter.");
    DebugBreak();
  }
  local_8 = 0;
  pGVar1 = GeneralModuleShader__GetStatic();
  (**(code **)(pGVar1->_pad_0x0_0 + 0x58))(&local_8);
  return;
}

//==== 004aba20 LoadPixelsPerMeterLocation_004aba20 ====

/* private: static void __cdecl PropellantTankShader__LoadPixelsPerMeterLocation(void) */

void __cdecl PropellantTankShader__LoadPixelsPerMeterLocation(void)

{
  PropellantTankShader *pPVar1;
  PropellantTankShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PropellantTankShader__GetStatic();
  pcVar4 = "PixelsPerMeter";
  pPVar2 = PropellantTankShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->PixelsPerMeterRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83);
  if ((pPVar1->PixelsPerMeterRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: PixelsPerMeter.");
    DebugBreak();
  }
  local_8 = 0;
  pPVar1 = PropellantTankShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x58))(&local_8);
  return;
}

//==== 004abaa0 LoadPixelsPerMeterLocation_004abaa0 ====

/* private: static void __cdecl RadiatorShader__LoadPixelsPerMeterLocation(void) */

void __cdecl RadiatorShader__LoadPixelsPerMeterLocation(void)

{
  RadiatorShader *pRVar1;
  RadiatorShader *pRVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pRVar1 = RadiatorShader__GetStatic();
  pcVar4 = "PixelsPerMeter";
  pRVar2 = RadiatorShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pRVar2->_pad_0x4_1,pcVar4);
  (pRVar1->PixelsPerMeterRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x87);
  if ((pRVar1->PixelsPerMeterRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x87,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: PixelsPerMeter.");
    DebugBreak();
  }
  local_8 = 0;
  pRVar1 = RadiatorShader__GetStatic();
  (**(code **)(pRVar1->_pad_0x0_0 + 0x58))(&local_8);
  return;
}

//==== 004abb20 LoadPixelsPerMeterLocation_004abb20 ====

/* private: static void __cdecl RocketEngineShader__LoadPixelsPerMeterLocation(void) */

void __cdecl RocketEngineShader__LoadPixelsPerMeterLocation(void)

{
  RocketEngineShader *pRVar1;
  RocketEngineShader *pRVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pRVar1 = RocketEngineShader__GetStatic();
  pcVar4 = "PixelsPerMeter";
  pRVar2 = RocketEngineShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pRVar2->_pad_0x4_1,pcVar4);
  (pRVar1->PixelsPerMeterRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8b);
  if ((pRVar1->PixelsPerMeterRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8b,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: PixelsPerMeter.");
    DebugBreak();
  }
  local_8 = 0;
  pRVar1 = RocketEngineShader__GetStatic();
  (**(code **)(pRVar1->_pad_0x0_0 + 0x58))(&local_8);
  return;
}

//==== 004abba0 LoadPropellantTankCylindricalHeight_mLocation ====

/* private: static void __cdecl
   PropellantTankShader__LoadPropellantTankCylindricalHeight_mLocation(void) */

void __cdecl PropellantTankShader__LoadPropellantTankCylindricalHeight_mLocation(void)

{
  PropellantTankShader *pPVar1;
  PropellantTankShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PropellantTankShader__GetStatic();
  pcVar4 = "PropellantTankCylindricalHeight_m";
  pPVar2 = PropellantTankShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->PropellantTankCylindricalHeight_mRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83);
  if ((pPVar1->PropellantTankCylindricalHeight_mRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: PropellantTankCylindricalHeight_m."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pPVar1 = PropellantTankShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x60))(&local_8);
  return;
}

//==== 004abc20 LoadRandomIntegralOffsetLocation ====

/* private: static void __cdecl AsteroidCratersShader__LoadRandomIntegralOffsetLocation(void) */

void __cdecl AsteroidCratersShader__LoadRandomIntegralOffsetLocation(void)

{
  AsteroidCratersShader *pAVar1;
  AsteroidCratersShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  pAVar1 = AsteroidCratersShader__GetStatic();
  pcVar4 = "RandomIntegralOffset";
  pAVar2 = AsteroidCratersShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->RandomIntegralOffsetRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc);
  if ((pAVar1->RandomIntegralOffsetRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: RandomIntegralOffset."
                   );
    DebugBreak();
  }
  pAVar1 = AsteroidCratersShader__GetStatic();
  local_c = 0;
  local_8 = 0;
  (**(code **)(pAVar1->_pad_0x0_0 + 0x50))(&local_c);
  return;
}

//==== 004abcb0 LoadRandomOffsetLocation ====

/* private: static void __cdecl AsteroidDiffuseShader__LoadRandomOffsetLocation(void) */

void __cdecl AsteroidDiffuseShader__LoadRandomOffsetLocation(void)

{
  AsteroidDiffuseShader *pAVar1;
  AsteroidDiffuseShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  pcVar4 = "RandomOffset";
  pAVar2 = AsteroidDiffuseShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->RandomOffsetRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103);
  if ((pAVar1->RandomOffsetRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: RandomOffset.");
    DebugBreak();
  }
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  local_c = 0;
  local_8 = 0;
  (**(code **)(pAVar1->_pad_0x0_0 + 0x54))(&local_c);
  return;
}

//==== 004abd40 LoadRandomOffsetLocation_004abd40 ====

/* private: static void __cdecl CityLightsShader__LoadRandomOffsetLocation(void) */

void __cdecl CityLightsShader__LoadRandomOffsetLocation(void)

{
  CityLightsShader *pCVar1;
  CityLightsShader *pCVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  pCVar1 = CityLightsShader__GetStatic();
  pcVar4 = "RandomOffset";
  pCVar2 = CityLightsShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pCVar2->_pad_0x4_1,pcVar4);
  (pCVar1->RandomOffsetRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6);
  if ((pCVar1->RandomOffsetRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: RandomOffset.");
    DebugBreak();
  }
  pCVar1 = CityLightsShader__GetStatic();
  local_c = 0;
  local_8 = 0;
  (**(code **)(pCVar1->_pad_0x0_0 + 0x54))(&local_c);
  return;
}

//==== 004abdd0 LoadRandomOffsetLocation_004abdd0 ====

/* private: static void __cdecl DamageGeneratorShader__LoadRandomOffsetLocation(void) */

void __cdecl DamageGeneratorShader__LoadRandomOffsetLocation(void)

{
  DamageGeneratorShader *pDVar1;
  DamageGeneratorShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  pDVar1 = DamageGeneratorShader__GetStatic();
  pcVar4 = "RandomOffset";
  pDVar2 = DamageGeneratorShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->RandomOffsetRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118);
  if ((pDVar1->RandomOffsetRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: RandomOffset.");
    DebugBreak();
  }
  pDVar1 = DamageGeneratorShader__GetStatic();
  local_c = 0;
  local_8 = 0;
  (**(code **)(pDVar1->_pad_0x0_0 + 0x54))(&local_c);
  return;
}

//==== 004abe60 LoadRandomOffsetLocation_004abe60 ====

/* private: static void __cdecl ParticleShader__LoadRandomOffsetLocation(void) */

void __cdecl ParticleShader__LoadRandomOffsetLocation(void)

{
  ParticleShader *pPVar1;
  ParticleShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  pPVar1 = ParticleShader__GetStatic();
  pcVar4 = "RandomOffset";
  pPVar2 = ParticleShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->RandomOffsetRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112);
  if ((pPVar1->RandomOffsetRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: RandomOffset.");
    DebugBreak();
  }
  pPVar1 = ParticleShader__GetStatic();
  local_c = 0;
  local_8 = 0;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x54))(&local_c);
  return;
}

//==== 004abef0 LoadRandomizerLocation ====

/* private: static void __cdecl ExhaustShader__LoadRandomizerLocation(void) */

void __cdecl ExhaustShader__LoadRandomizerLocation(void)

{
  ExhaustShader *pEVar1;
  ExhaustShader *pEVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pEVar1 = ExhaustShader__GetStatic();
  pcVar4 = "Randomizer";
  pEVar2 = ExhaustShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pEVar2->_pad_0x4_1,pcVar4);
  (pEVar1->RandomizerRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x60);
  if ((pEVar1->RandomizerRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x60,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: Randomizer.");
    DebugBreak();
  }
  local_8 = 0;
  pEVar1 = ExhaustShader__GetStatic();
  (**(code **)(pEVar1->_pad_0x0_0 + 0x68))(&local_8);
  return;
}

//==== 004abf70 LoadReferenceIrradiance_W_m2Location_004abf70 ====

/* private: static void __cdecl
   DeferredGlobalLightingShader__LoadReferenceIrradiance_W_m2Location(void) */

void __cdecl DeferredGlobalLightingShader__LoadReferenceIrradiance_W_m2Location(void)

{
  DeferredGlobalLightingShader *pDVar1;
  DeferredGlobalLightingShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  pcVar4 = "ReferenceIrradiance_W_m2";
  pDVar2 = DeferredGlobalLightingShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->ReferenceIrradiance_W_m2RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52);
  if ((pDVar1->ReferenceIrradiance_W_m2RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: ReferenceIrradiance_W_m2."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x84))(&local_8);
  return;
}

//==== 004abff0 LoadReferenceIrradiance_W_m2Location_004abff0 ====

/* private: static void __cdecl
   DeferredWorldLightingShader__LoadReferenceIrradiance_W_m2Location(void) */

void __cdecl DeferredWorldLightingShader__LoadReferenceIrradiance_W_m2Location(void)

{
  DeferredWorldLightingShader *pDVar1;
  DeferredWorldLightingShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  pcVar4 = "ReferenceIrradiance_W_m2";
  pDVar2 = DeferredWorldLightingShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->ReferenceIrradiance_W_m2RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a);
  if ((pDVar1->ReferenceIrradiance_W_m2RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: ReferenceIrradiance_W_m2."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x84))(&local_8);
  return;
}

//==== 004ac070 LoadReferenceIrradiance_W_m2Location_004ac070 ====

/* private: static void __cdecl PlanetShader__LoadReferenceIrradiance_W_m2Location(void) */

void __cdecl PlanetShader__LoadReferenceIrradiance_W_m2Location(void)

{
  PlanetShader *pPVar1;
  PlanetShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PlanetShader__GetStatic();
  pcVar4 = "ReferenceIrradiance_W_m2";
  pPVar2 = PlanetShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->ReferenceIrradiance_W_m2RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  if ((pPVar1->ReferenceIrradiance_W_m2RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: ReferenceIrradiance_W_m2."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pPVar1 = PlanetShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0xf0))(&local_8);
  return;
}

//==== 004ac100 LoadReferenceIrradiance_W_m2Location_004ac100 ====

/* private: static void __cdecl RingsShader__LoadReferenceIrradiance_W_m2Location(void) */

void __cdecl RingsShader__LoadReferenceIrradiance_W_m2Location(void)

{
  RingsShader *pRVar1;
  RingsShader *pRVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pRVar1 = RingsShader__GetStatic();
  pcVar4 = "ReferenceIrradiance_W_m2";
  pRVar2 = RingsShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pRVar2->_pad_0x4_1,pcVar4);
  (pRVar1->ReferenceIrradiance_W_m2RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200);
  if ((pRVar1->ReferenceIrradiance_W_m2RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: ReferenceIrradiance_W_m2."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pRVar1 = RingsShader__GetStatic();
  (**(code **)(pRVar1->_pad_0x0_0 + 0x8c))(&local_8);
  return;
}

//==== 004ac180 LoadShadowFarPlaneLocation_004ac180 ====

/* private: static void __cdecl PlanetShader__LoadShadowFarPlaneLocation(void) */

void __cdecl PlanetShader__LoadShadowFarPlaneLocation(void)

{
  PlanetShader *pPVar1;
  PlanetShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PlanetShader__GetStatic();
  pcVar4 = "ShadowFarPlane";
  pPVar2 = PlanetShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->ShadowFarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  local_8 = 0;
  pPVar1 = PlanetShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0xbc))(&local_8);
  return;
}

//==== 004ac1e0 LoadShadowMapBiasLocation_004ac1e0 ====

/* private: static void __cdecl PlanetShader__LoadShadowMapBiasLocation(void) */

void __cdecl PlanetShader__LoadShadowMapBiasLocation(void)

{
  PlanetShader *pPVar1;
  PlanetShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PlanetShader__GetStatic();
  pcVar4 = "ShadowMapBias";
  pPVar2 = PlanetShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->ShadowMapBiasRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  local_8 = 0;
  pPVar1 = PlanetShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 100))(&local_8);
  return;
}

//==== 004ac240 LoadShadowMapBiasLocation_004ac240 ====

/* private: static void __cdecl RingsShader__LoadShadowMapBiasLocation(void) */

void __cdecl RingsShader__LoadShadowMapBiasLocation(void)

{
  RingsShader *pRVar1;
  RingsShader *pRVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pRVar1 = RingsShader__GetStatic();
  pcVar4 = "ShadowMapBias";
  pRVar2 = RingsShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pRVar2->_pad_0x4_1,pcVar4);
  (pRVar1->ShadowMapBiasRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200);
  local_8 = 0;
  pRVar1 = RingsShader__GetStatic();
  (**(code **)(pRVar1->_pad_0x0_0 + 0x58))(&local_8);
  return;
}

//==== 004ac2a0 LoadShadowMatrixLocation_004ac2a0 ====

/* private: static void __cdecl PlanetShader__LoadShadowMatrixLocation(void) */

void __cdecl PlanetShader__LoadShadowMatrixLocation(void)

{
  PlanetShader *pPVar1;
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
  
  pPVar1 = PlanetShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pPVar1->ShadowMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4ac2ce;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  pPVar1 = PlanetShader__GetStatic();
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
  (**(code **)(pPVar1->_pad_0x0_0 + 0x5c))(&fStack_94);
  return;
}

//==== 004ac2e0 LoadShadowMatrixLocation_004ac2e0 ====

/* private: static void __cdecl RingsShader__LoadShadowMatrixLocation(void) */

void __cdecl RingsShader__LoadShadowMatrixLocation(void)

{
  RingsShader *pRVar1;
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
  
  pRVar1 = RingsShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pRVar1->ShadowMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4ac30e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200);
  pRVar1 = RingsShader__GetStatic();
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
  (**(code **)(pRVar1->_pad_0x0_0 + 0x50))(&fStack_94);
  return;
}

//==== 004ac320 LoadShadowNearPlaneLocation_004ac320 ====

/* private: static void __cdecl PlanetShader__LoadShadowNearPlaneLocation(void) */

void __cdecl PlanetShader__LoadShadowNearPlaneLocation(void)

{
  PlanetShader *pPVar1;
  PlanetShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PlanetShader__GetStatic();
  pcVar4 = "ShadowNearPlane";
  pPVar2 = PlanetShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->ShadowNearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  local_8 = 0;
  pPVar1 = PlanetShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0xb4))(&local_8);
  return;
}

//==== 004ac380 LoadShadowTextureLocation_004ac380 ====

/* private: static void __cdecl PlanetShader__LoadShadowTextureLocation(void) */

void __cdecl PlanetShader__LoadShadowTextureLocation(void)

{
  PlanetShader *pPVar1;
  PlanetShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PlanetShader__GetStatic();
  pcVar4 = "ShadowTexture";
  pPVar2 = PlanetShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->ShadowTextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  local_8 = 6;
  pPVar1 = PlanetShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x7c))(&local_8);
  return;
}

//==== 004ac3e0 LoadShadowTextureLocation_004ac3e0 ====

/* private: static void __cdecl RingsShader__LoadShadowTextureLocation(void) */

void __cdecl RingsShader__LoadShadowTextureLocation(void)

{
  RingsShader *pRVar1;
  RingsShader *pRVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pRVar1 = RingsShader__GetStatic();
  pcVar4 = "ShadowTexture";
  pRVar2 = RingsShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pRVar2->_pad_0x4_1,pcVar4);
  (pRVar1->ShadowTextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200);
  local_8 = 2;
  pRVar1 = RingsShader__GetStatic();
  (**(code **)(pRVar1->_pad_0x0_0 + 0x74))(&local_8);
  return;
}

//==== 004ac440 LoadShouldDrawGlowLocation ====

/* private: static void __cdecl SimpleShader__LoadShouldDrawGlowLocation(void) */

void __cdecl SimpleShader__LoadShouldDrawGlowLocation(void)

{
  SimpleShader *pSVar1;
  SimpleShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_8;
  
  pSVar1 = SimpleShader__GetStatic();
  pcVar4 = "ShouldDrawGlow";
  pSVar2 = SimpleShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->ShouldDrawGlowRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x13);
  if ((pSVar1->ShouldDrawGlowRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x13,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: ShouldDrawGlow.");
    DebugBreak();
  }
  uStack_8 = CONCAT13(1,(undefined3)uStack_8);
  pSVar1 = SimpleShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0x54))((int)&uStack_8 + 3);
  return;
}

//==== 004ac4b0 LoadSpecularCubeTextureLocation ====

/* private: static void __cdecl PlanetShader__LoadSpecularCubeTextureLocation(void) */

void __cdecl PlanetShader__LoadSpecularCubeTextureLocation(void)

{
  PlanetShader *pPVar1;
  PlanetShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PlanetShader__GetStatic();
  pcVar4 = "SpecularCubeTexture";
  pPVar2 = PlanetShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->SpecularCubeTextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  if ((pPVar1->SpecularCubeTextureRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: SpecularCubeTexture."
                   );
    DebugBreak();
  }
  local_8 = 3;
  pPVar1 = PlanetShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x70))(&local_8);
  return;
}

//==== 004ac530 LoadStarlightColorLocation_004ac530 ====

/* private: static void __cdecl PlanetShader__LoadStarlightColorLocation(void) */

void __cdecl PlanetShader__LoadStarlightColorLocation(void)

{
  PlanetShader *pPVar1;
  PlanetShader *pPVar2;
  int iVar3;
  float fVar4;
  char *pcVar5;
  undefined8 local_1c;
  float local_14;
  ulonglong local_10;
  float local_8;
  
  pPVar1 = PlanetShader__GetStatic();
  pcVar5 = "StarlightColor";
  pPVar2 = PlanetShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar5);
  (pPVar1->StarlightColorRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  if ((pPVar1->StarlightColorRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: StarlightColor.");
    DebugBreak();
  }
  local_10 = (ulonglong)(uint)(float)Physics__AverageColorOfTheUniverse.X;
  local_8 = (float)Physics__AverageColorOfTheUniverse.Y;
  fVar4 = (float)Physics__AverageColorOfTheUniverse.Z;
  pPVar1 = PlanetShader__GetStatic();
  local_1c = CONCAT44(local_8,(int)local_10);
  local_14 = fVar4;
  (**(code **)(pPVar1->_pad_0x0_0 + 0xe0))(&local_1c);
  return;
}

//==== 004ac600 LoadStarlightColorLocation_004ac600 ====

/* private: static void __cdecl RingsShader__LoadStarlightColorLocation(void) */

void __cdecl RingsShader__LoadStarlightColorLocation(void)

{
  RingsShader *pRVar1;
  RingsShader *pRVar2;
  int iVar3;
  float fVar4;
  char *pcVar5;
  undefined8 local_1c;
  float local_14;
  ulonglong local_10;
  float local_8;
  
  pRVar1 = RingsShader__GetStatic();
  pcVar5 = "StarlightColor";
  pRVar2 = RingsShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pRVar2->_pad_0x4_1,pcVar5);
  (pRVar1->StarlightColorRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200);
  if ((pRVar1->StarlightColorRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: StarlightColor.");
    DebugBreak();
  }
  local_10 = (ulonglong)(uint)(float)Physics__AverageColorOfTheUniverse.X;
  local_8 = (float)Physics__AverageColorOfTheUniverse.Y;
  fVar4 = (float)Physics__AverageColorOfTheUniverse.Z;
  pRVar1 = RingsShader__GetStatic();
  local_1c = CONCAT44(local_8,(int)local_10);
  local_14 = fVar4;
  (**(code **)(pRVar1->_pad_0x0_0 + 0x7c))(&local_1c);
  return;
}

//==== 004ac6c0 LoadStarlightIrradiance_W_m2Location_004ac6c0 ====

/* private: static void __cdecl PlanetShader__LoadStarlightIrradiance_W_m2Location(void) */

void __cdecl PlanetShader__LoadStarlightIrradiance_W_m2Location(void)

{
  PlanetShader *pPVar1;
  PlanetShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PlanetShader__GetStatic();
  pcVar4 = "StarlightIrradiance_W_m2";
  pPVar2 = PlanetShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->StarlightIrradiance_W_m2RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  if ((pPVar1->StarlightIrradiance_W_m2RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: StarlightIrradiance_W_m2."
                   );
    DebugBreak();
  }
  local_8 = 0x3715937b;
  pPVar1 = PlanetShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0xe8))(&local_8);
  return;
}

//==== 004ac750 LoadStarlightIrradiance_W_m2Location_004ac750 ====

/* private: static void __cdecl RingsShader__LoadStarlightIrradiance_W_m2Location(void) */

void __cdecl RingsShader__LoadStarlightIrradiance_W_m2Location(void)

{
  RingsShader *pRVar1;
  RingsShader *pRVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pRVar1 = RingsShader__GetStatic();
  pcVar4 = "StarlightIrradiance_W_m2";
  pRVar2 = RingsShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pRVar2->_pad_0x4_1,pcVar4);
  (pRVar1->StarlightIrradiance_W_m2RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200);
  if ((pRVar1->StarlightIrradiance_W_m2RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: StarlightIrradiance_W_m2."
                   );
    DebugBreak();
  }
  local_8 = 0x3715937b;
  pRVar1 = RingsShader__GetStatic();
  (**(code **)(pRVar1->_pad_0x0_0 + 0x84))(&local_8);
  return;
}

//==== 004ac7e0 LoadSunIsInShadowLocation_004ac7e0 ====

/* private: static void __cdecl PlanetShader__LoadSunIsInShadowLocation(void) */

void __cdecl PlanetShader__LoadSunIsInShadowLocation(void)

{
  PlanetShader *pPVar1;
  PlanetShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_8;
  
  pPVar1 = PlanetShader__GetStatic();
  pcVar4 = "SunIsInShadow";
  pPVar2 = PlanetShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->SunIsInShadowRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  if ((pPVar1->SunIsInShadowRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: SunIsInShadow.");
    DebugBreak();
  }
  uStack_8 = uStack_8 & 0xffffff;
  pPVar1 = PlanetShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 200))((int)&uStack_8 + 3);
  return;
}

//==== 004ac860 LoadSunlightDirectionLocation_004ac860 ====

/* private: static void __cdecl PlanetShader__LoadSunlightDirectionLocation(void) */

void __cdecl PlanetShader__LoadSunlightDirectionLocation(void)

{
  PlanetShader *pPVar1;
  PlanetShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined8 local_10;
  undefined4 local_8;
  
  pPVar1 = PlanetShader__GetStatic();
  pcVar4 = "SunlightDirection";
  pPVar2 = PlanetShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->SunlightDirectionRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  if ((pPVar1->SunlightDirectionRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: SunlightDirection."
                   );
    DebugBreak();
  }
  pPVar1 = PlanetShader__GetStatic();
  local_8 = 0;
  local_10 = 0;
  (**(code **)(pPVar1->_pad_0x0_0 + 0xc4))(&local_10);
  return;
}

//==== 004ac900 LoadTextureLocation ====

/* private: static void __cdecl SimpleShader__LoadTextureLocation(void) */

void __cdecl SimpleShader__LoadTextureLocation(void)

{
  SimpleShader *pSVar1;
  SimpleShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pSVar1 = SimpleShader__GetStatic();
  pcVar4 = "Texture";
  pSVar2 = SimpleShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->TextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x13);
  if ((pSVar1->TextureRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x13,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: Texture.");
    DebugBreak();
  }
  local_8 = 0;
  pSVar1 = SimpleShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0x58))(&local_8);
  return;
}

//==== 004ac980 LoadTextureMaskLocation ====

/* private: static void __cdecl DamageShader__LoadTextureMaskLocation(void) */

void __cdecl DamageShader__LoadTextureMaskLocation(void)

{
  DamageShader *pDVar1;
  DamageShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DamageShader__GetStatic();
  pcVar4 = "TextureMask";
  pDVar2 = DamageShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->TextureMaskRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x6c);
  if ((pDVar1->TextureMaskRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x6c,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: TextureMask.");
    DebugBreak();
  }
  local_8 = 0;
  pDVar1 = DamageShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x6c))(&local_8);
  return;
}

//==== 004aca00 LoadTextureSizeLocation ====

/* private: static void __cdecl ArmorShader__LoadTextureSizeLocation(void) */

void __cdecl ArmorShader__LoadTextureSizeLocation(void)

{
  ArmorShader *pAVar1;
  ArmorShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  pAVar1 = ArmorShader__GetStatic();
  pcVar4 = "TextureSize";
  pAVar2 = ArmorShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->TextureSizeRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x78);
  if ((pAVar1->TextureSizeRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x78,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: TextureSize.");
    DebugBreak();
  }
  pAVar1 = ArmorShader__GetStatic();
  local_c = 0;
  local_8 = 0;
  (**(code **)(pAVar1->_pad_0x0_0 + 0x50))(&local_c);
  return;
}

//==== 004aca80 LoadTextureSizeLocation_004aca80 ====

/* private: static void __cdecl AsteroidCratersShader__LoadTextureSizeLocation(void) */

void __cdecl AsteroidCratersShader__LoadTextureSizeLocation(void)

{
  AsteroidCratersShader *pAVar1;
  AsteroidCratersShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  pAVar1 = AsteroidCratersShader__GetStatic();
  pcVar4 = "TextureSize";
  pAVar2 = AsteroidCratersShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->TextureSizeRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc);
  if ((pAVar1->TextureSizeRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: TextureSize.");
    DebugBreak();
  }
  pAVar1 = AsteroidCratersShader__GetStatic();
  local_c = 0;
  local_8 = 0;
  (**(code **)(pAVar1->_pad_0x0_0 + 0x4c))(&local_c);
  return;
}

//==== 004acb10 LoadTextureSizeLocation_004acb10 ====

/* private: static void __cdecl AsteroidDiffuseShader__LoadTextureSizeLocation(void) */

void __cdecl AsteroidDiffuseShader__LoadTextureSizeLocation(void)

{
  AsteroidDiffuseShader *pAVar1;
  AsteroidDiffuseShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  pcVar4 = "TextureSize";
  pAVar2 = AsteroidDiffuseShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->TextureSizeRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103);
  if ((pAVar1->TextureSizeRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: TextureSize.");
    DebugBreak();
  }
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  local_c = 0;
  local_8 = 0;
  (**(code **)(pAVar1->_pad_0x0_0 + 0x4c))(&local_c);
  return;
}

//==== 004acba0 LoadTextureSizeLocation_004acba0 ====

/* private: static void __cdecl AsteroidHeightShader__LoadTextureSizeLocation(void) */

void __cdecl AsteroidHeightShader__LoadTextureSizeLocation(void)

{
  AsteroidHeightShader *pAVar1;
  AsteroidHeightShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  pAVar1 = AsteroidHeightShader__GetStatic();
  pcVar4 = "TextureSize";
  pAVar2 = AsteroidHeightShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->TextureSizeRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x107);
  if ((pAVar1->TextureSizeRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x107,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: TextureSize.");
    DebugBreak();
  }
  pAVar1 = AsteroidHeightShader__GetStatic();
  local_c = 0;
  local_8 = 0;
  (**(code **)(pAVar1->_pad_0x0_0 + 0x4c))(&local_c);
  return;
}

//==== 004acc30 LoadTextureSizeLocation_004acc30 ====

/* private: static void __cdecl AsteroidNormalShader__LoadTextureSizeLocation(void) */

void __cdecl AsteroidNormalShader__LoadTextureSizeLocation(void)

{
  AsteroidNormalShader *pAVar1;
  AsteroidNormalShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  pAVar1 = AsteroidNormalShader__GetStatic();
  pcVar4 = "TextureSize";
  pAVar2 = AsteroidNormalShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->TextureSizeRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x10c);
  if ((pAVar1->TextureSizeRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x10c,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: TextureSize.");
    DebugBreak();
  }
  pAVar1 = AsteroidNormalShader__GetStatic();
  local_c = 0;
  local_8 = 0;
  (**(code **)(pAVar1->_pad_0x0_0 + 0x4c))(&local_c);
  return;
}

//==== 004accc0 LoadTextureSizeLocation_004accc0 ====


/* private: static void __cdecl BlastLauncherShader__LoadTextureSizeLocation(void) */

void __cdecl BlastLauncherShader__LoadTextureSizeLocation(void)

{
  BlastLauncherShader *pBVar1;
  BlastLauncherShader *pBVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  pBVar1 = BlastLauncherShader__GetStatic();
  pcVar4 = "TextureSize";
  pBVar2 = BlastLauncherShader__GetStatic();
  uVar3 = (*___glewGetUniformLocation)(*(undefined4 *)(pBVar2 + 4),pcVar4);
  *(undefined4 *)(pBVar1 + 0x44) = uVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e);
  if (*(int *)(pBVar1 + 0x44) == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: TextureSize.");
    DebugBreak();
  }
  pBVar1 = BlastLauncherShader__GetStatic();
  uStack_c = 0;
  uStack_8 = 0;
  (**(code **)(*(int *)pBVar1 + 0x50))(&uStack_c);
  return;
}





//==== 004acd40 LoadTextureSizeLocation_004acd40 ====

/* private: static void __cdecl CityLightsShader__LoadTextureSizeLocation(void) */

void __cdecl CityLightsShader__LoadTextureSizeLocation(void)

{
  CityLightsShader *pCVar1;
  CityLightsShader *pCVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  pCVar1 = CityLightsShader__GetStatic();
  pcVar4 = "TextureSize";
  pCVar2 = CityLightsShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pCVar2->_pad_0x4_1,pcVar4);
  (pCVar1->TextureSizeRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6);
  if ((pCVar1->TextureSizeRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: TextureSize.");
    DebugBreak();
  }
  pCVar1 = CityLightsShader__GetStatic();
  local_c = 0;
  local_8 = 0;
  (**(code **)(pCVar1->_pad_0x0_0 + 0x4c))(&local_c);
  return;
}

//==== 004acdd0 LoadTextureSizeLocation_004acdd0 ====

/* private: static void __cdecl DamageGeneratorShader__LoadTextureSizeLocation(void) */

void __cdecl DamageGeneratorShader__LoadTextureSizeLocation(void)

{
  DamageGeneratorShader *pDVar1;
  DamageGeneratorShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  pDVar1 = DamageGeneratorShader__GetStatic();
  pcVar4 = "TextureSize";
  pDVar2 = DamageGeneratorShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->TextureSizeRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118);
  if ((pDVar1->TextureSizeRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: TextureSize.");
    DebugBreak();
  }
  pDVar1 = DamageGeneratorShader__GetStatic();
  local_c = 0;
  local_8 = 0;
  (**(code **)(pDVar1->_pad_0x0_0 + 0x4c))(&local_c);
  return;
}

//==== 004ace60 LoadTextureSizeLocation_004ace60 ====

/* private: static void __cdecl DamagedArmorShader__LoadTextureSizeLocation(void) */

void __cdecl DamagedArmorShader__LoadTextureSizeLocation(void)

{
  DamagedArmorShader *pDVar1;
  DamagedArmorShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  pDVar1 = DamagedArmorShader__GetStatic();
  pcVar4 = "TextureSize";
  pDVar2 = DamagedArmorShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->TextureSizeRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x74);
  if ((pDVar1->TextureSizeRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x74,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: TextureSize.");
    DebugBreak();
  }
  pDVar1 = DamagedArmorShader__GetStatic();
  local_c = 0;
  local_8 = 0;
  (**(code **)(pDVar1->_pad_0x0_0 + 0x50))(&local_c);
  return;
}

//==== 004acee0 LoadTextureSizeLocation_004acee0 ====

/* private: static void __cdecl GeneralModuleShader__LoadTextureSizeLocation(void) */

void __cdecl GeneralModuleShader__LoadTextureSizeLocation(void)

{
  GeneralModuleShader *pGVar1;
  GeneralModuleShader *pGVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  pGVar1 = GeneralModuleShader__GetStatic();
  pcVar4 = "TextureSize";
  pGVar2 = GeneralModuleShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pGVar2->_pad_0x4_1,pcVar4);
  (pGVar1->TextureSizeRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8f);
  if ((pGVar1->TextureSizeRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8f,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: TextureSize.");
    DebugBreak();
  }
  pGVar1 = GeneralModuleShader__GetStatic();
  local_c = 0;
  local_8 = 0;
  (**(code **)(pGVar1->_pad_0x0_0 + 0x50))(&local_c);
  return;
}

//==== 004acf70 LoadTextureSizeLocation_004acf70 ====

/* private: static void __cdecl ParticleShader__LoadTextureSizeLocation(void) */

void __cdecl ParticleShader__LoadTextureSizeLocation(void)

{
  ParticleShader *pPVar1;
  ParticleShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  pPVar1 = ParticleShader__GetStatic();
  pcVar4 = "TextureSize";
  pPVar2 = ParticleShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->TextureSizeRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112);
  if ((pPVar1->TextureSizeRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: TextureSize.");
    DebugBreak();
  }
  pPVar1 = ParticleShader__GetStatic();
  local_c = 0;
  local_8 = 0;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x4c))(&local_c);
  return;
}

//==== 004ad000 LoadTextureSizeLocation_004ad000 ====

/* private: static void __cdecl PropellantTankShader__LoadTextureSizeLocation(void) */

void __cdecl PropellantTankShader__LoadTextureSizeLocation(void)

{
  PropellantTankShader *pPVar1;
  PropellantTankShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  pPVar1 = PropellantTankShader__GetStatic();
  pcVar4 = "TextureSize";
  pPVar2 = PropellantTankShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->TextureSizeRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83);
  if ((pPVar1->TextureSizeRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: TextureSize.");
    DebugBreak();
  }
  pPVar1 = PropellantTankShader__GetStatic();
  local_c = 0;
  local_8 = 0;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x50))(&local_c);
  return;
}

//==== 004ad090 LoadTextureSizeLocation_004ad090 ====

/* private: static void __cdecl RadiatorShader__LoadTextureSizeLocation(void) */

void __cdecl RadiatorShader__LoadTextureSizeLocation(void)

{
  RadiatorShader *pRVar1;
  RadiatorShader *pRVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  pRVar1 = RadiatorShader__GetStatic();
  pcVar4 = "TextureSize";
  pRVar2 = RadiatorShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pRVar2->_pad_0x4_1,pcVar4);
  (pRVar1->TextureSizeRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x87);
  if ((pRVar1->TextureSizeRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x87,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: TextureSize.");
    DebugBreak();
  }
  pRVar1 = RadiatorShader__GetStatic();
  local_c = 0;
  local_8 = 0;
  (**(code **)(pRVar1->_pad_0x0_0 + 0x50))(&local_c);
  return;
}

//==== 004ad120 LoadTextureSizeLocation_004ad120 ====

/* private: static void __cdecl RocketEngineShader__LoadTextureSizeLocation(void) */

void __cdecl RocketEngineShader__LoadTextureSizeLocation(void)

{
  RocketEngineShader *pRVar1;
  RocketEngineShader *pRVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  pRVar1 = RocketEngineShader__GetStatic();
  pcVar4 = "TextureSize";
  pRVar2 = RocketEngineShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pRVar2->_pad_0x4_1,pcVar4);
  (pRVar1->TextureSizeRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8b);
  if ((pRVar1->TextureSizeRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8b,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: TextureSize.");
    DebugBreak();
  }
  pRVar1 = RocketEngineShader__GetStatic();
  local_c = 0;
  local_8 = 0;
  (**(code **)(pRVar1->_pad_0x0_0 + 0x50))(&local_c);
  return;
}

//==== 004ad1b0 LoadTimeLocation ====

/* private: static void __cdecl ExhaustShader__LoadTimeLocation(void) */

void __cdecl ExhaustShader__LoadTimeLocation(void)

{
  ExhaustShader *pEVar1;
  ExhaustShader *pEVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pEVar1 = ExhaustShader__GetStatic();
  pcVar4 = "Time";
  pEVar2 = ExhaustShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pEVar2->_pad_0x4_1,pcVar4);
  (pEVar1->TimeRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x60);
  if ((pEVar1->TimeRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x60,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: Time.");
    DebugBreak();
  }
  local_8 = 0;
  pEVar1 = ExhaustShader__GetStatic();
  (**(code **)(pEVar1->_pad_0x0_0 + 0x50))(&local_8);
  return;
}

//==== 004ad230 LoadTopLeftFrustumCornerLocation ====

/* private: static void __cdecl DeferredGlobalLightingShader__LoadTopLeftFrustumCornerLocation(void)
    */

void __cdecl DeferredGlobalLightingShader__LoadTopLeftFrustumCornerLocation(void)

{
  DeferredGlobalLightingShader *pDVar1;
  DeferredGlobalLightingShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined8 local_10;
  undefined4 local_8;
  
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  pcVar4 = "TopLeftFrustumCorner";
  pDVar2 = DeferredGlobalLightingShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->TopLeftFrustumCornerRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52);
  if ((pDVar1->TopLeftFrustumCornerRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: TopLeftFrustumCorner."
                   );
    DebugBreak();
  }
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  local_8 = 0;
  local_10 = 0;
  (**(code **)(pDVar1->_pad_0x0_0 + 0x50))(&local_10);
  return;
}

//==== 004ad2c0 LoadTopLeftFrustumCornerLocation_004ad2c0 ====

/* private: static void __cdecl DeferredWorldLightingShader__LoadTopLeftFrustumCornerLocation(void)
    */

void __cdecl DeferredWorldLightingShader__LoadTopLeftFrustumCornerLocation(void)

{
  DeferredWorldLightingShader *pDVar1;
  DeferredWorldLightingShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined8 local_10;
  undefined4 local_8;
  
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  pcVar4 = "TopLeftFrustumCorner";
  pDVar2 = DeferredWorldLightingShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->TopLeftFrustumCornerRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a);
  if ((pDVar1->TopLeftFrustumCornerRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: TopLeftFrustumCorner."
                   );
    DebugBreak();
  }
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  local_8 = 0;
  local_10 = 0;
  (**(code **)(pDVar1->_pad_0x0_0 + 0x50))(&local_10);
  return;
}

//==== 004ad350 LoadTopRightFrustumCornerLocation ====

/* private: static void __cdecl
   DeferredGlobalLightingShader__LoadTopRightFrustumCornerLocation(void) */

void __cdecl DeferredGlobalLightingShader__LoadTopRightFrustumCornerLocation(void)

{
  DeferredGlobalLightingShader *pDVar1;
  DeferredGlobalLightingShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined8 local_10;
  undefined4 local_8;
  
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  pcVar4 = "TopRightFrustumCorner";
  pDVar2 = DeferredGlobalLightingShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->TopRightFrustumCornerRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52);
  if ((pDVar1->TopRightFrustumCornerRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: TopRightFrustumCorner."
                   );
    DebugBreak();
  }
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  local_8 = 0;
  local_10 = 0;
  (**(code **)(pDVar1->_pad_0x0_0 + 0x58))(&local_10);
  return;
}

//==== 004ad3e0 LoadTopRightFrustumCornerLocation_004ad3e0 ====

/* private: static void __cdecl DeferredWorldLightingShader__LoadTopRightFrustumCornerLocation(void)
    */

void __cdecl DeferredWorldLightingShader__LoadTopRightFrustumCornerLocation(void)

{
  DeferredWorldLightingShader *pDVar1;
  DeferredWorldLightingShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined8 local_10;
  undefined4 local_8;
  
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  pcVar4 = "TopRightFrustumCorner";
  pDVar2 = DeferredWorldLightingShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->TopRightFrustumCornerRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a);
  if ((pDVar1->TopRightFrustumCornerRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: TopRightFrustumCorner."
                   );
    DebugBreak();
  }
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  local_8 = 0;
  local_10 = 0;
  (**(code **)(pDVar1->_pad_0x0_0 + 0x58))(&local_10);
  return;
}

//==== 004ad470 LoadTotalTransformMatrixLocation_004ad470 ====

/* private: static void __cdecl ArmorShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl ArmorShader__LoadTotalTransformMatrixLocation(void)

{
  ArmorShader *pAVar1;
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
  
  pAVar1 = ArmorShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pAVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4ad49b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x78);
  pAVar1 = ArmorShader__GetStatic();
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
  (**(code **)(pAVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 004ad4b0 LoadTotalTransformMatrixLocation_004ad4b0 ====

/* private: static void __cdecl AsteroidCratersShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl AsteroidCratersShader__LoadTotalTransformMatrixLocation(void)

{
  AsteroidCratersShader *pAVar1;
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
  
  pAVar1 = AsteroidCratersShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pAVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4ad4de;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc);
  pAVar1 = AsteroidCratersShader__GetStatic();
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
  (**(code **)(pAVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 004ad4f0 LoadTotalTransformMatrixLocation_004ad4f0 ====

/* private: static void __cdecl AsteroidDiffuseShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl AsteroidDiffuseShader__LoadTotalTransformMatrixLocation(void)

{
  AsteroidDiffuseShader *pAVar1;
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
  
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pAVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4ad51e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103);
  pAVar1 = AsteroidDiffuseShader__GetStatic();
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
  (**(code **)(pAVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 004ad530 LoadTotalTransformMatrixLocation_004ad530 ====

/* private: static void __cdecl AsteroidHeightShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl AsteroidHeightShader__LoadTotalTransformMatrixLocation(void)

{
  AsteroidHeightShader *pAVar1;
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
  
  pAVar1 = AsteroidHeightShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pAVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4ad55e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x107);
  pAVar1 = AsteroidHeightShader__GetStatic();
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
  (**(code **)(pAVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 004ad570 LoadTotalTransformMatrixLocation_004ad570 ====

/* private: static void __cdecl AsteroidNormalShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl AsteroidNormalShader__LoadTotalTransformMatrixLocation(void)

{
  AsteroidNormalShader *pAVar1;
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
  
  pAVar1 = AsteroidNormalShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pAVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4ad59e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x10c);
  pAVar1 = AsteroidNormalShader__GetStatic();
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
  (**(code **)(pAVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 004ad5b0 LoadTotalTransformMatrixLocation_004ad5b0 ====


/* private: static void __cdecl BlastLauncherShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl BlastLauncherShader__LoadTotalTransformMatrixLocation(void)

{
  BlastLauncherShader *pBVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
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
  
  pBVar1 = BlastLauncherShader__GetStatic();
  GetStatic();
  uVar2 = (*___glewGetUniformLocation)();
  *(undefined4 *)(pBVar1 + 0x34) = uVar2;
  uStack_18 = 0x4ad5db;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e);
  pBVar1 = BlastLauncherShader__GetStatic();
  iVar3 = 0;
  pfVar5 = afStack_54;
  do {
    iVar4 = iVar3 + 1;
    *pfVar5 = (float)(iVar3 == 0);
    pfVar5[1] = (float)(iVar3 == 1);
    pfVar5[2] = (float)(iVar3 == 2);
    pfVar5[3] = (float)(iVar3 == 3);
    iVar3 = iVar4;
    pfVar5 = pfVar5 + 4;
  } while (iVar4 < 4);
  iVar3 = 0;
  pfVar5 = afStack_dc;
  do {
    iVar4 = iVar3 + 1;
    *pfVar5 = (float)(iVar3 == 0);
    pfVar5[1] = (float)(iVar3 == 1);
    pfVar5[2] = (float)(iVar3 == 2);
    pfVar5[3] = (float)(iVar3 == 3);
    iVar3 = iVar4;
    pfVar5 = pfVar5 + 4;
  } while (iVar4 < 4);
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
  (**(code **)(*(int *)pBVar1 + 0x30))(&fStack_94);
  return;
}





//==== 004ad5f0 LoadTotalTransformMatrixLocation_004ad5f0 ====

/* private: static void __cdecl CityLightsShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl CityLightsShader__LoadTotalTransformMatrixLocation(void)

{
  CityLightsShader *pCVar1;
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
  
  pCVar1 = CityLightsShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pCVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4ad61e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6);
  pCVar1 = CityLightsShader__GetStatic();
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
  (**(code **)(pCVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 004ad630 LoadTotalTransformMatrixLocation_004ad630 ====

/* private: static void __cdecl DamageGeneratorShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl DamageGeneratorShader__LoadTotalTransformMatrixLocation(void)

{
  DamageGeneratorShader *pDVar1;
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
  
  pDVar1 = DamageGeneratorShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pDVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4ad65e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118);
  pDVar1 = DamageGeneratorShader__GetStatic();
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
  (**(code **)(pDVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 004ad670 LoadTotalTransformMatrixLocation_004ad670 ====

/* private: static void __cdecl DamageShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl DamageShader__LoadTotalTransformMatrixLocation(void)

{
  DamageShader *pDVar1;
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
  
  pDVar1 = DamageShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pDVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4ad69b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x6c);
  pDVar1 = DamageShader__GetStatic();
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
  (**(code **)(pDVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 004ad6b0 LoadTotalTransformMatrixLocation_004ad6b0 ====

/* private: static void __cdecl DamagedArmorShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl DamagedArmorShader__LoadTotalTransformMatrixLocation(void)

{
  DamagedArmorShader *pDVar1;
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
  
  pDVar1 = DamagedArmorShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pDVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4ad6db;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x74);
  pDVar1 = DamagedArmorShader__GetStatic();
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
  (**(code **)(pDVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 004ad6f0 LoadTotalTransformMatrixLocation_004ad6f0 ====

/* private: static void __cdecl DeferredGlobalLightingShader__LoadTotalTransformMatrixLocation(void)
    */

void __cdecl DeferredGlobalLightingShader__LoadTotalTransformMatrixLocation(void)

{
  DeferredGlobalLightingShader *pDVar1;
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
  
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pDVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4ad71b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52);
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
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
  (**(code **)(pDVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 004ad730 LoadTotalTransformMatrixLocation_004ad730 ====

/* private: static void __cdecl DeferredWorldLightingShader__LoadTotalTransformMatrixLocation(void)
    */

void __cdecl DeferredWorldLightingShader__LoadTotalTransformMatrixLocation(void)

{
  DeferredWorldLightingShader *pDVar1;
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
  
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pDVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4ad75b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a);
  pDVar1 = DeferredWorldLightingShader__GetStatic();
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
  (**(code **)(pDVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 004ad770 LoadTotalTransformMatrixLocation_004ad770 ====

/* private: static void __cdecl
   EquirectangularToCubeMapShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl EquirectangularToCubeMapShader__LoadTotalTransformMatrixLocation(void)

{
  EquirectangularToCubeMapShader *pEVar1;
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
  
  pEVar1 = EquirectangularToCubeMapShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pEVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4ad79e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x11d);
  pEVar1 = EquirectangularToCubeMapShader__GetStatic();
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
  (**(code **)(pEVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 004ad7b0 LoadTotalTransformMatrixLocation_004ad7b0 ====

/* private: static void __cdecl ExhaustShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl ExhaustShader__LoadTotalTransformMatrixLocation(void)

{
  ExhaustShader *pEVar1;
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
  
  pEVar1 = ExhaustShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pEVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4ad7db;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x60);
  pEVar1 = ExhaustShader__GetStatic();
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
  (**(code **)(pEVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 004ad7f0 LoadTotalTransformMatrixLocation_004ad7f0 ====

/* private: static void __cdecl GeneralModuleShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl GeneralModuleShader__LoadTotalTransformMatrixLocation(void)

{
  GeneralModuleShader *pGVar1;
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
  
  pGVar1 = GeneralModuleShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pGVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4ad81e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8f);
  pGVar1 = GeneralModuleShader__GetStatic();
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
  (**(code **)(pGVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 004ad830 LoadTotalTransformMatrixLocation_004ad830 ====

/* private: static void __cdecl ParticleShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl ParticleShader__LoadTotalTransformMatrixLocation(void)

{
  ParticleShader *pPVar1;
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
  
  pPVar1 = ParticleShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pPVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4ad85e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112);
  pPVar1 = ParticleShader__GetStatic();
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
  (**(code **)(pPVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 004ad870 LoadTotalTransformMatrixLocation_004ad870 ====

/* private: static void __cdecl PlanetShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl PlanetShader__LoadTotalTransformMatrixLocation(void)

{
  PlanetShader *pPVar1;
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
  
  pPVar1 = PlanetShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pPVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4ad89e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  pPVar1 = PlanetShader__GetStatic();
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
  (**(code **)(pPVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 004ad8b0 LoadTotalTransformMatrixLocation_004ad8b0 ====

/* private: static void __cdecl PropellantTankShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl PropellantTankShader__LoadTotalTransformMatrixLocation(void)

{
  PropellantTankShader *pPVar1;
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
  
  pPVar1 = PropellantTankShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pPVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4ad8de;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83);
  pPVar1 = PropellantTankShader__GetStatic();
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
  (**(code **)(pPVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 004ad8f0 LoadTotalTransformMatrixLocation_004ad8f0 ====

/* private: static void __cdecl RadiatorShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl RadiatorShader__LoadTotalTransformMatrixLocation(void)

{
  RadiatorShader *pRVar1;
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
  
  pRVar1 = RadiatorShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pRVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4ad91e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x87);
  pRVar1 = RadiatorShader__GetStatic();
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
  (**(code **)(pRVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 004ad930 LoadTotalTransformMatrixLocation_004ad930 ====

/* private: static void __cdecl RingShadowShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl RingShadowShader__LoadTotalTransformMatrixLocation(void)

{
  RingShadowShader *pRVar1;
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
  
  pRVar1 = RingShadowShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pRVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4ad95e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd7);
  pRVar1 = RingShadowShader__GetStatic();
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
  (**(code **)(pRVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 004ad970 LoadTotalTransformMatrixLocation_004ad970 ====

/* private: static void __cdecl RingsShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl RingsShader__LoadTotalTransformMatrixLocation(void)

{
  RingsShader *pRVar1;
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
  
  pRVar1 = RingsShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pRVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4ad99e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200);
  pRVar1 = RingsShader__GetStatic();
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
  (**(code **)(pRVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 004ad9b0 LoadTotalTransformMatrixLocation_004ad9b0 ====

/* private: static void __cdecl RocketEngineShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl RocketEngineShader__LoadTotalTransformMatrixLocation(void)

{
  RocketEngineShader *pRVar1;
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
  
  pRVar1 = RocketEngineShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pRVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4ad9de;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8b);
  pRVar1 = RocketEngineShader__GetStatic();
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
  (**(code **)(pRVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 004ad9f0 LoadTotalTransformMatrixLocation_004ad9f0 ====

/* private: static void __cdecl ShadowShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl ShadowShader__LoadTotalTransformMatrixLocation(void)

{
  ShadowShader *pSVar1;
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
  
  pSVar1 = ShadowShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pSVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4ada1e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xca);
  pSVar1 = ShadowShader__GetStatic();
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
  (**(code **)(pSVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 004ada30 LoadTotalTransformMatrixLocation_004ada30 ====

/* private: static void __cdecl ShockwaveShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl ShockwaveShader__LoadTotalTransformMatrixLocation(void)

{
  ShockwaveShader *pSVar1;
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
  
  pSVar1 = ShockwaveShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pSVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4ada5b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x62);
  pSVar1 = ShockwaveShader__GetStatic();
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
  (**(code **)(pSVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 004ada70 LoadTotalTransformMatrixLocation_004ada70 ====

/* private: static void __cdecl SimpleShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl SimpleShader__LoadTotalTransformMatrixLocation(void)

{
  SimpleShader *pSVar1;
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
  
  pSVar1 = SimpleShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pSVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4ada9b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x13);
  pSVar1 = SimpleShader__GetStatic();
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
  (**(code **)(pSVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 004adab0 LoadTotalTransformMatrixLocation_004adab0 ====


/* private: static void __cdecl SpacecraftShadowShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl SpacecraftShadowShader__LoadTotalTransformMatrixLocation(void)

{
  SpacecraftShadowShader *pSVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
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
  
  pSVar1 = SpacecraftShadowShader__GetStatic();
  GetStatic();
  uVar2 = (*___glewGetUniformLocation)();
  *(undefined4 *)(pSVar1 + 0x34) = uVar2;
  uStack_18 = 0x4adade;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd2);
  pSVar1 = SpacecraftShadowShader__GetStatic();
  iVar3 = 0;
  pfVar5 = afStack_54;
  do {
    iVar4 = iVar3 + 1;
    *pfVar5 = (float)(iVar3 == 0);
    pfVar5[1] = (float)(iVar3 == 1);
    pfVar5[2] = (float)(iVar3 == 2);
    pfVar5[3] = (float)(iVar3 == 3);
    iVar3 = iVar4;
    pfVar5 = pfVar5 + 4;
  } while (iVar4 < 4);
  iVar3 = 0;
  pfVar5 = afStack_dc;
  do {
    iVar4 = iVar3 + 1;
    *pfVar5 = (float)(iVar3 == 0);
    pfVar5[1] = (float)(iVar3 == 1);
    pfVar5[2] = (float)(iVar3 == 2);
    pfVar5[3] = (float)(iVar3 == 3);
    iVar3 = iVar4;
    pfVar5 = pfVar5 + 4;
  } while (iVar4 < 4);
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
  (**(code **)(*(int *)pSVar1 + 0x30))(&fStack_94);
  return;
}





//==== 004adaf0 LoadTotalTransformMatrixLocation_004adaf0 ====

/* private: static void __cdecl StarShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl StarShader__LoadTotalTransformMatrixLocation(void)

{
  StarShader *pSVar1;
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
  
  pSVar1 = StarShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pSVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4adb1b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xc);
  pSVar1 = StarShader__GetStatic();
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
  (**(code **)(pSVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 004adb30 LoadUseTextureMaskLocation ====

/* private: static void __cdecl DamageShader__LoadUseTextureMaskLocation(void) */

void __cdecl DamageShader__LoadUseTextureMaskLocation(void)

{
  DamageShader *pDVar1;
  DamageShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_8;
  
  pDVar1 = DamageShader__GetStatic();
  pcVar4 = "UseTextureMask";
  pDVar2 = DamageShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->UseTextureMaskRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x6c);
  if ((pDVar1->UseTextureMaskRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x6c,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: UseTextureMask.");
    DebugBreak();
  }
  uStack_8 = uStack_8 & 0xffffff;
  pDVar1 = DamageShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x68))((int)&uStack_8 + 3);
  return;
}

//==== 004adba0 LoadUsesDamageTextureLocation_004adba0 ====


/* private: static void __cdecl SpacecraftShadowShader__LoadUsesDamageTextureLocation(void) */

void __cdecl SpacecraftShadowShader__LoadUsesDamageTextureLocation(void)

{
  SpacecraftShadowShader *pSVar1;
  SpacecraftShadowShader *pSVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uStack_8;
  
  pSVar1 = SpacecraftShadowShader__GetStatic();
  pcVar4 = "UsesDamageTexture";
  pSVar2 = SpacecraftShadowShader__GetStatic();
  uVar3 = (*___glewGetUniformLocation)(*(undefined4 *)(pSVar2 + 4),pcVar4);
  *(undefined4 *)(pSVar1 + 0x44) = uVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd2);
  if (*(int *)(pSVar1 + 0x44) == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd2,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: UsesDamageTexture."
                   );
    DebugBreak();
  }
  uStack_8 = uStack_8 & 0xffffff;
  pSVar1 = SpacecraftShadowShader__GetStatic();
  (**(code **)(*(int *)pSVar1 + 0x4c))((int)&uStack_8 + 3);
  return;
}





//==== 004adc20 LoadUsesDiffuseMapLocation ====

/* private: static void __cdecl PlanetShader__LoadUsesDiffuseMapLocation(void) */

void __cdecl PlanetShader__LoadUsesDiffuseMapLocation(void)

{
  PlanetShader *pPVar1;
  PlanetShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_8;
  
  pPVar1 = PlanetShader__GetStatic();
  pcVar4 = "UsesDiffuseMap";
  pPVar2 = PlanetShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->UsesDiffuseMapRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  if ((pPVar1->UsesDiffuseMapRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: UsesDiffuseMap.");
    DebugBreak();
  }
  uStack_8 = uStack_8 & 0xffffff;
  pPVar1 = PlanetShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x80))((int)&uStack_8 + 3);
  return;
}

//==== 004adca0 LoadUsesHeightMapLocation ====

/* private: static void __cdecl PlanetShader__LoadUsesHeightMapLocation(void) */

void __cdecl PlanetShader__LoadUsesHeightMapLocation(void)

{
  PlanetShader *pPVar1;
  PlanetShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_8;
  
  pPVar1 = PlanetShader__GetStatic();
  pcVar4 = "UsesHeightMap";
  pPVar2 = PlanetShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->UsesHeightMapRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  uStack_8 = uStack_8 & 0xffffff;
  pPVar1 = PlanetShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x8c))((int)&uStack_8 + 3);
  return;
}

//==== 004add00 LoadUsesNormalMapLocation ====

/* private: static void __cdecl PlanetShader__LoadUsesNormalMapLocation(void) */

void __cdecl PlanetShader__LoadUsesNormalMapLocation(void)

{
  PlanetShader *pPVar1;
  PlanetShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_8;
  
  pPVar1 = PlanetShader__GetStatic();
  pcVar4 = "UsesNormalMap";
  pPVar2 = PlanetShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->UsesNormalMapRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  if ((pPVar1->UsesNormalMapRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: UsesNormalMap.");
    DebugBreak();
  }
  uStack_8 = uStack_8 & 0xffffff;
  pPVar1 = PlanetShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x84))((int)&uStack_8 + 3);
  return;
}

//==== 004add80 LoadUsesSpecularMapLocation ====

/* private: static void __cdecl PlanetShader__LoadUsesSpecularMapLocation(void) */

void __cdecl PlanetShader__LoadUsesSpecularMapLocation(void)

{
  PlanetShader *pPVar1;
  PlanetShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_8;
  
  pPVar1 = PlanetShader__GetStatic();
  pcVar4 = "UsesSpecularMap";
  pPVar2 = PlanetShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->UsesSpecularMapRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  if ((pPVar1->UsesSpecularMapRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: UsesSpecularMap.");
    DebugBreak();
  }
  uStack_8 = uStack_8 & 0xffffff;
  pPVar1 = PlanetShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x88))((int)&uStack_8 + 3);
  return;
}

//==== 004ade00 LoadUsesTextureLocation ====

/* private: static void __cdecl SimpleShader__LoadUsesTextureLocation(void) */

void __cdecl SimpleShader__LoadUsesTextureLocation(void)

{
  SimpleShader *pSVar1;
  SimpleShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_8;
  
  pSVar1 = SimpleShader__GetStatic();
  pcVar4 = "UsesTexture";
  pSVar2 = SimpleShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->UsesTextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x13);
  if ((pSVar1->UsesTextureRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x13,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: UsesTexture.");
    DebugBreak();
  }
  uStack_8 = uStack_8 & 0xffffff;
  pSVar1 = SimpleShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0x50))((int)&uStack_8 + 3);
  return;
}

//==== 004ade70 LoadWhiteNoiseTextures0Location ====

/* private: static void __cdecl AsteroidCratersShader__LoadWhiteNoiseTextures0Location(void) */

void __cdecl AsteroidCratersShader__LoadWhiteNoiseTextures0Location(void)

{
  AsteroidCratersShader *pAVar1;
  AsteroidCratersShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pAVar1 = AsteroidCratersShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures0";
  pAVar2 = AsteroidCratersShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->WhiteNoiseTextures0RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc);
  if ((pAVar1->WhiteNoiseTextures0RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures0."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pAVar1 = AsteroidCratersShader__GetStatic();
  (**(code **)(pAVar1->_pad_0x0_0 + 0x54))(&local_8);
  return;
}

//==== 004adef0 LoadWhiteNoiseTextures0Location_004adef0 ====

/* private: static void __cdecl AsteroidDiffuseShader__LoadWhiteNoiseTextures0Location(void) */

void __cdecl AsteroidDiffuseShader__LoadWhiteNoiseTextures0Location(void)

{
  AsteroidDiffuseShader *pAVar1;
  AsteroidDiffuseShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures0";
  pAVar2 = AsteroidDiffuseShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->WhiteNoiseTextures0RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103);
  if ((pAVar1->WhiteNoiseTextures0RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures0."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  (**(code **)(pAVar1->_pad_0x0_0 + 0x58))(&local_8);
  return;
}

//==== 004adf70 LoadWhiteNoiseTextures0Location_004adf70 ====

/* private: static void __cdecl CityLightsShader__LoadWhiteNoiseTextures0Location(void) */

void __cdecl CityLightsShader__LoadWhiteNoiseTextures0Location(void)

{
  CityLightsShader *pCVar1;
  CityLightsShader *pCVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pCVar1 = CityLightsShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures0";
  pCVar2 = CityLightsShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pCVar2->_pad_0x4_1,pcVar4);
  (pCVar1->WhiteNoiseTextures0RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6);
  if ((pCVar1->WhiteNoiseTextures0RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures0."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pCVar1 = CityLightsShader__GetStatic();
  (**(code **)(pCVar1->_pad_0x0_0 + 0x58))(&local_8);
  return;
}

//==== 004adff0 LoadWhiteNoiseTextures0Location_004adff0 ====

/* private: static void __cdecl DamageGeneratorShader__LoadWhiteNoiseTextures0Location(void) */

void __cdecl DamageGeneratorShader__LoadWhiteNoiseTextures0Location(void)

{
  DamageGeneratorShader *pDVar1;
  DamageGeneratorShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DamageGeneratorShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures0";
  pDVar2 = DamageGeneratorShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->WhiteNoiseTextures0RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118);
  if ((pDVar1->WhiteNoiseTextures0RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures0."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pDVar1 = DamageGeneratorShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x58))(&local_8);
  return;
}

//==== 004ae070 LoadWhiteNoiseTextures0Location_004ae070 ====

/* private: static void __cdecl ParticleShader__LoadWhiteNoiseTextures0Location(void) */

void __cdecl ParticleShader__LoadWhiteNoiseTextures0Location(void)

{
  ParticleShader *pPVar1;
  ParticleShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = ParticleShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures0";
  pPVar2 = ParticleShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->WhiteNoiseTextures0RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112);
  if ((pPVar1->WhiteNoiseTextures0RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures0."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pPVar1 = ParticleShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x58))(&local_8);
  return;
}

//==== 004ae0f0 LoadWhiteNoiseTextures10Location ====

/* private: static void __cdecl AsteroidCratersShader__LoadWhiteNoiseTextures10Location(void) */

void __cdecl AsteroidCratersShader__LoadWhiteNoiseTextures10Location(void)

{
  AsteroidCratersShader *pAVar1;
  AsteroidCratersShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pAVar1 = AsteroidCratersShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures10";
  pAVar2 = AsteroidCratersShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->WhiteNoiseTextures10RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc);
  if ((pAVar1->WhiteNoiseTextures10RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures10."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pAVar1 = AsteroidCratersShader__GetStatic();
  (**(code **)(pAVar1->_pad_0x0_0 + 0x7c))(&local_8);
  return;
}

//==== 004ae170 LoadWhiteNoiseTextures10Location_004ae170 ====

/* private: static void __cdecl AsteroidDiffuseShader__LoadWhiteNoiseTextures10Location(void) */

void __cdecl AsteroidDiffuseShader__LoadWhiteNoiseTextures10Location(void)

{
  AsteroidDiffuseShader *pAVar1;
  AsteroidDiffuseShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures10";
  pAVar2 = AsteroidDiffuseShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->WhiteNoiseTextures10RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103);
  if ((pAVar1->WhiteNoiseTextures10RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures10."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  (**(code **)(pAVar1->_pad_0x0_0 + 0x80))(&local_8);
  return;
}

//==== 004ae1f0 LoadWhiteNoiseTextures10Location_004ae1f0 ====

/* private: static void __cdecl CityLightsShader__LoadWhiteNoiseTextures10Location(void) */

void __cdecl CityLightsShader__LoadWhiteNoiseTextures10Location(void)

{
  CityLightsShader *pCVar1;
  CityLightsShader *pCVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pCVar1 = CityLightsShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures10";
  pCVar2 = CityLightsShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pCVar2->_pad_0x4_1,pcVar4);
  (pCVar1->WhiteNoiseTextures10RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6);
  if ((pCVar1->WhiteNoiseTextures10RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures10."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pCVar1 = CityLightsShader__GetStatic();
  (**(code **)(pCVar1->_pad_0x0_0 + 0x80))(&local_8);
  return;
}

//==== 004ae270 LoadWhiteNoiseTextures10Location_004ae270 ====

/* private: static void __cdecl DamageGeneratorShader__LoadWhiteNoiseTextures10Location(void) */

void __cdecl DamageGeneratorShader__LoadWhiteNoiseTextures10Location(void)

{
  DamageGeneratorShader *pDVar1;
  DamageGeneratorShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DamageGeneratorShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures10";
  pDVar2 = DamageGeneratorShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->WhiteNoiseTextures10RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118);
  if ((pDVar1->WhiteNoiseTextures10RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures10."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pDVar1 = DamageGeneratorShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x80))(&local_8);
  return;
}

//==== 004ae2f0 LoadWhiteNoiseTextures10Location_004ae2f0 ====

/* private: static void __cdecl ParticleShader__LoadWhiteNoiseTextures10Location(void) */

void __cdecl ParticleShader__LoadWhiteNoiseTextures10Location(void)

{
  ParticleShader *pPVar1;
  ParticleShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = ParticleShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures10";
  pPVar2 = ParticleShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->WhiteNoiseTextures10RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112);
  if ((pPVar1->WhiteNoiseTextures10RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures10."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pPVar1 = ParticleShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x80))(&local_8);
  return;
}

//==== 004ae370 LoadWhiteNoiseTextures1Location ====

/* private: static void __cdecl AsteroidCratersShader__LoadWhiteNoiseTextures1Location(void) */

void __cdecl AsteroidCratersShader__LoadWhiteNoiseTextures1Location(void)

{
  AsteroidCratersShader *pAVar1;
  AsteroidCratersShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pAVar1 = AsteroidCratersShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures1";
  pAVar2 = AsteroidCratersShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->WhiteNoiseTextures1RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc);
  if ((pAVar1->WhiteNoiseTextures1RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures1."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pAVar1 = AsteroidCratersShader__GetStatic();
  (**(code **)(pAVar1->_pad_0x0_0 + 0x58))(&local_8);
  return;
}

//==== 004ae3f0 LoadWhiteNoiseTextures1Location_004ae3f0 ====

/* private: static void __cdecl AsteroidDiffuseShader__LoadWhiteNoiseTextures1Location(void) */

void __cdecl AsteroidDiffuseShader__LoadWhiteNoiseTextures1Location(void)

{
  AsteroidDiffuseShader *pAVar1;
  AsteroidDiffuseShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures1";
  pAVar2 = AsteroidDiffuseShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->WhiteNoiseTextures1RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103);
  if ((pAVar1->WhiteNoiseTextures1RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures1."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  (**(code **)(pAVar1->_pad_0x0_0 + 0x5c))(&local_8);
  return;
}

//==== 004ae470 LoadWhiteNoiseTextures1Location_004ae470 ====

/* private: static void __cdecl CityLightsShader__LoadWhiteNoiseTextures1Location(void) */

void __cdecl CityLightsShader__LoadWhiteNoiseTextures1Location(void)

{
  CityLightsShader *pCVar1;
  CityLightsShader *pCVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pCVar1 = CityLightsShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures1";
  pCVar2 = CityLightsShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pCVar2->_pad_0x4_1,pcVar4);
  (pCVar1->WhiteNoiseTextures1RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6);
  if ((pCVar1->WhiteNoiseTextures1RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures1."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pCVar1 = CityLightsShader__GetStatic();
  (**(code **)(pCVar1->_pad_0x0_0 + 0x5c))(&local_8);
  return;
}

//==== 004ae4f0 LoadWhiteNoiseTextures1Location_004ae4f0 ====

/* private: static void __cdecl DamageGeneratorShader__LoadWhiteNoiseTextures1Location(void) */

void __cdecl DamageGeneratorShader__LoadWhiteNoiseTextures1Location(void)

{
  DamageGeneratorShader *pDVar1;
  DamageGeneratorShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DamageGeneratorShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures1";
  pDVar2 = DamageGeneratorShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->WhiteNoiseTextures1RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118);
  if ((pDVar1->WhiteNoiseTextures1RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures1."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pDVar1 = DamageGeneratorShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x5c))(&local_8);
  return;
}

//==== 004ae570 LoadWhiteNoiseTextures1Location_004ae570 ====

/* private: static void __cdecl ParticleShader__LoadWhiteNoiseTextures1Location(void) */

void __cdecl ParticleShader__LoadWhiteNoiseTextures1Location(void)

{
  ParticleShader *pPVar1;
  ParticleShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = ParticleShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures1";
  pPVar2 = ParticleShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->WhiteNoiseTextures1RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112);
  if ((pPVar1->WhiteNoiseTextures1RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures1."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pPVar1 = ParticleShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x5c))(&local_8);
  return;
}

//==== 004ae5f0 LoadWhiteNoiseTextures2Location ====

/* private: static void __cdecl AsteroidCratersShader__LoadWhiteNoiseTextures2Location(void) */

void __cdecl AsteroidCratersShader__LoadWhiteNoiseTextures2Location(void)

{
  AsteroidCratersShader *pAVar1;
  AsteroidCratersShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pAVar1 = AsteroidCratersShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures2";
  pAVar2 = AsteroidCratersShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->WhiteNoiseTextures2RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc);
  if ((pAVar1->WhiteNoiseTextures2RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures2."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pAVar1 = AsteroidCratersShader__GetStatic();
  (**(code **)(pAVar1->_pad_0x0_0 + 0x5c))(&local_8);
  return;
}

//==== 004ae670 LoadWhiteNoiseTextures2Location_004ae670 ====

/* private: static void __cdecl AsteroidDiffuseShader__LoadWhiteNoiseTextures2Location(void) */

void __cdecl AsteroidDiffuseShader__LoadWhiteNoiseTextures2Location(void)

{
  AsteroidDiffuseShader *pAVar1;
  AsteroidDiffuseShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures2";
  pAVar2 = AsteroidDiffuseShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->WhiteNoiseTextures2RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103);
  if ((pAVar1->WhiteNoiseTextures2RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures2."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  (**(code **)(pAVar1->_pad_0x0_0 + 0x60))(&local_8);
  return;
}

//==== 004ae6f0 LoadWhiteNoiseTextures2Location_004ae6f0 ====

/* private: static void __cdecl CityLightsShader__LoadWhiteNoiseTextures2Location(void) */

void __cdecl CityLightsShader__LoadWhiteNoiseTextures2Location(void)

{
  CityLightsShader *pCVar1;
  CityLightsShader *pCVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pCVar1 = CityLightsShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures2";
  pCVar2 = CityLightsShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pCVar2->_pad_0x4_1,pcVar4);
  (pCVar1->WhiteNoiseTextures2RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6);
  if ((pCVar1->WhiteNoiseTextures2RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures2."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pCVar1 = CityLightsShader__GetStatic();
  (**(code **)(pCVar1->_pad_0x0_0 + 0x60))(&local_8);
  return;
}

//==== 004ae770 LoadWhiteNoiseTextures2Location_004ae770 ====

/* private: static void __cdecl DamageGeneratorShader__LoadWhiteNoiseTextures2Location(void) */

void __cdecl DamageGeneratorShader__LoadWhiteNoiseTextures2Location(void)

{
  DamageGeneratorShader *pDVar1;
  DamageGeneratorShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DamageGeneratorShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures2";
  pDVar2 = DamageGeneratorShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->WhiteNoiseTextures2RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118);
  if ((pDVar1->WhiteNoiseTextures2RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures2."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pDVar1 = DamageGeneratorShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x60))(&local_8);
  return;
}

//==== 004ae7f0 LoadWhiteNoiseTextures2Location_004ae7f0 ====

/* private: static void __cdecl ParticleShader__LoadWhiteNoiseTextures2Location(void) */

void __cdecl ParticleShader__LoadWhiteNoiseTextures2Location(void)

{
  ParticleShader *pPVar1;
  ParticleShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = ParticleShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures2";
  pPVar2 = ParticleShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->WhiteNoiseTextures2RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112);
  if ((pPVar1->WhiteNoiseTextures2RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures2."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pPVar1 = ParticleShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x60))(&local_8);
  return;
}

//==== 004ae870 LoadWhiteNoiseTextures3Location ====

/* private: static void __cdecl AsteroidCratersShader__LoadWhiteNoiseTextures3Location(void) */

void __cdecl AsteroidCratersShader__LoadWhiteNoiseTextures3Location(void)

{
  AsteroidCratersShader *pAVar1;
  AsteroidCratersShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pAVar1 = AsteroidCratersShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures3";
  pAVar2 = AsteroidCratersShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->WhiteNoiseTextures3RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc);
  if ((pAVar1->WhiteNoiseTextures3RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures3."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pAVar1 = AsteroidCratersShader__GetStatic();
  (**(code **)(pAVar1->_pad_0x0_0 + 0x60))(&local_8);
  return;
}

//==== 004ae8f0 LoadWhiteNoiseTextures3Location_004ae8f0 ====

/* private: static void __cdecl AsteroidDiffuseShader__LoadWhiteNoiseTextures3Location(void) */

void __cdecl AsteroidDiffuseShader__LoadWhiteNoiseTextures3Location(void)

{
  AsteroidDiffuseShader *pAVar1;
  AsteroidDiffuseShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures3";
  pAVar2 = AsteroidDiffuseShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->WhiteNoiseTextures3RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103);
  if ((pAVar1->WhiteNoiseTextures3RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures3."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  (**(code **)(pAVar1->_pad_0x0_0 + 100))(&local_8);
  return;
}

//==== 004ae970 LoadWhiteNoiseTextures3Location_004ae970 ====

/* private: static void __cdecl CityLightsShader__LoadWhiteNoiseTextures3Location(void) */

void __cdecl CityLightsShader__LoadWhiteNoiseTextures3Location(void)

{
  CityLightsShader *pCVar1;
  CityLightsShader *pCVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pCVar1 = CityLightsShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures3";
  pCVar2 = CityLightsShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pCVar2->_pad_0x4_1,pcVar4);
  (pCVar1->WhiteNoiseTextures3RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6);
  if ((pCVar1->WhiteNoiseTextures3RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures3."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pCVar1 = CityLightsShader__GetStatic();
  (**(code **)(pCVar1->_pad_0x0_0 + 100))(&local_8);
  return;
}

//==== 004ae9f0 LoadWhiteNoiseTextures3Location_004ae9f0 ====

/* private: static void __cdecl DamageGeneratorShader__LoadWhiteNoiseTextures3Location(void) */

void __cdecl DamageGeneratorShader__LoadWhiteNoiseTextures3Location(void)

{
  DamageGeneratorShader *pDVar1;
  DamageGeneratorShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DamageGeneratorShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures3";
  pDVar2 = DamageGeneratorShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->WhiteNoiseTextures3RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118);
  if ((pDVar1->WhiteNoiseTextures3RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures3."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pDVar1 = DamageGeneratorShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 100))(&local_8);
  return;
}

//==== 004aea70 LoadWhiteNoiseTextures3Location_004aea70 ====

/* private: static void __cdecl ParticleShader__LoadWhiteNoiseTextures3Location(void) */

void __cdecl ParticleShader__LoadWhiteNoiseTextures3Location(void)

{
  ParticleShader *pPVar1;
  ParticleShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = ParticleShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures3";
  pPVar2 = ParticleShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->WhiteNoiseTextures3RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112);
  if ((pPVar1->WhiteNoiseTextures3RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures3."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pPVar1 = ParticleShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 100))(&local_8);
  return;
}

//==== 004aeaf0 LoadWhiteNoiseTextures4Location ====

/* private: static void __cdecl AsteroidCratersShader__LoadWhiteNoiseTextures4Location(void) */

void __cdecl AsteroidCratersShader__LoadWhiteNoiseTextures4Location(void)

{
  AsteroidCratersShader *pAVar1;
  AsteroidCratersShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pAVar1 = AsteroidCratersShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures4";
  pAVar2 = AsteroidCratersShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->WhiteNoiseTextures4RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc);
  if ((pAVar1->WhiteNoiseTextures4RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures4."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pAVar1 = AsteroidCratersShader__GetStatic();
  (**(code **)(pAVar1->_pad_0x0_0 + 100))(&local_8);
  return;
}

//==== 004aeb70 LoadWhiteNoiseTextures4Location_004aeb70 ====

/* private: static void __cdecl AsteroidDiffuseShader__LoadWhiteNoiseTextures4Location(void) */

void __cdecl AsteroidDiffuseShader__LoadWhiteNoiseTextures4Location(void)

{
  AsteroidDiffuseShader *pAVar1;
  AsteroidDiffuseShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures4";
  pAVar2 = AsteroidDiffuseShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->WhiteNoiseTextures4RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103);
  if ((pAVar1->WhiteNoiseTextures4RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures4."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  (**(code **)(pAVar1->_pad_0x0_0 + 0x68))(&local_8);
  return;
}

//==== 004aebf0 LoadWhiteNoiseTextures4Location_004aebf0 ====

/* private: static void __cdecl CityLightsShader__LoadWhiteNoiseTextures4Location(void) */

void __cdecl CityLightsShader__LoadWhiteNoiseTextures4Location(void)

{
  CityLightsShader *pCVar1;
  CityLightsShader *pCVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pCVar1 = CityLightsShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures4";
  pCVar2 = CityLightsShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pCVar2->_pad_0x4_1,pcVar4);
  (pCVar1->WhiteNoiseTextures4RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6);
  if ((pCVar1->WhiteNoiseTextures4RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures4."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pCVar1 = CityLightsShader__GetStatic();
  (**(code **)(pCVar1->_pad_0x0_0 + 0x68))(&local_8);
  return;
}

//==== 004aec70 LoadWhiteNoiseTextures4Location_004aec70 ====

/* private: static void __cdecl DamageGeneratorShader__LoadWhiteNoiseTextures4Location(void) */

void __cdecl DamageGeneratorShader__LoadWhiteNoiseTextures4Location(void)

{
  DamageGeneratorShader *pDVar1;
  DamageGeneratorShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DamageGeneratorShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures4";
  pDVar2 = DamageGeneratorShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->WhiteNoiseTextures4RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118);
  if ((pDVar1->WhiteNoiseTextures4RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures4."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pDVar1 = DamageGeneratorShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x68))(&local_8);
  return;
}

//==== 004aecf0 LoadWhiteNoiseTextures4Location_004aecf0 ====

/* private: static void __cdecl ParticleShader__LoadWhiteNoiseTextures4Location(void) */

void __cdecl ParticleShader__LoadWhiteNoiseTextures4Location(void)

{
  ParticleShader *pPVar1;
  ParticleShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = ParticleShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures4";
  pPVar2 = ParticleShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->WhiteNoiseTextures4RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112);
  if ((pPVar1->WhiteNoiseTextures4RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures4."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pPVar1 = ParticleShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x68))(&local_8);
  return;
}

//==== 004aed70 LoadWhiteNoiseTextures5Location ====

/* private: static void __cdecl AsteroidCratersShader__LoadWhiteNoiseTextures5Location(void) */

void __cdecl AsteroidCratersShader__LoadWhiteNoiseTextures5Location(void)

{
  AsteroidCratersShader *pAVar1;
  AsteroidCratersShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pAVar1 = AsteroidCratersShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures5";
  pAVar2 = AsteroidCratersShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->WhiteNoiseTextures5RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc);
  if ((pAVar1->WhiteNoiseTextures5RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures5."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pAVar1 = AsteroidCratersShader__GetStatic();
  (**(code **)(pAVar1->_pad_0x0_0 + 0x68))(&local_8);
  return;
}

//==== 004aedf0 LoadWhiteNoiseTextures5Location_004aedf0 ====

/* private: static void __cdecl AsteroidDiffuseShader__LoadWhiteNoiseTextures5Location(void) */

void __cdecl AsteroidDiffuseShader__LoadWhiteNoiseTextures5Location(void)

{
  AsteroidDiffuseShader *pAVar1;
  AsteroidDiffuseShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures5";
  pAVar2 = AsteroidDiffuseShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->WhiteNoiseTextures5RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103);
  if ((pAVar1->WhiteNoiseTextures5RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures5."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  (**(code **)(pAVar1->_pad_0x0_0 + 0x6c))(&local_8);
  return;
}

//==== 004aee70 LoadWhiteNoiseTextures5Location_004aee70 ====

/* private: static void __cdecl CityLightsShader__LoadWhiteNoiseTextures5Location(void) */

void __cdecl CityLightsShader__LoadWhiteNoiseTextures5Location(void)

{
  CityLightsShader *pCVar1;
  CityLightsShader *pCVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pCVar1 = CityLightsShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures5";
  pCVar2 = CityLightsShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pCVar2->_pad_0x4_1,pcVar4);
  (pCVar1->WhiteNoiseTextures5RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6);
  if ((pCVar1->WhiteNoiseTextures5RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures5."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pCVar1 = CityLightsShader__GetStatic();
  (**(code **)(pCVar1->_pad_0x0_0 + 0x6c))(&local_8);
  return;
}

//==== 004aeef0 LoadWhiteNoiseTextures5Location_004aeef0 ====

/* private: static void __cdecl DamageGeneratorShader__LoadWhiteNoiseTextures5Location(void) */

void __cdecl DamageGeneratorShader__LoadWhiteNoiseTextures5Location(void)

{
  DamageGeneratorShader *pDVar1;
  DamageGeneratorShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DamageGeneratorShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures5";
  pDVar2 = DamageGeneratorShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->WhiteNoiseTextures5RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118);
  if ((pDVar1->WhiteNoiseTextures5RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures5."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pDVar1 = DamageGeneratorShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x6c))(&local_8);
  return;
}

//==== 004aef70 LoadWhiteNoiseTextures5Location_004aef70 ====

/* private: static void __cdecl ParticleShader__LoadWhiteNoiseTextures5Location(void) */

void __cdecl ParticleShader__LoadWhiteNoiseTextures5Location(void)

{
  ParticleShader *pPVar1;
  ParticleShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = ParticleShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures5";
  pPVar2 = ParticleShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->WhiteNoiseTextures5RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112);
  if ((pPVar1->WhiteNoiseTextures5RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures5."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pPVar1 = ParticleShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x6c))(&local_8);
  return;
}

//==== 004aeff0 LoadWhiteNoiseTextures6Location ====

/* private: static void __cdecl AsteroidCratersShader__LoadWhiteNoiseTextures6Location(void) */

void __cdecl AsteroidCratersShader__LoadWhiteNoiseTextures6Location(void)

{
  AsteroidCratersShader *pAVar1;
  AsteroidCratersShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pAVar1 = AsteroidCratersShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures6";
  pAVar2 = AsteroidCratersShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->WhiteNoiseTextures6RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc);
  if ((pAVar1->WhiteNoiseTextures6RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures6."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pAVar1 = AsteroidCratersShader__GetStatic();
  (**(code **)(pAVar1->_pad_0x0_0 + 0x6c))(&local_8);
  return;
}

//==== 004af070 LoadWhiteNoiseTextures6Location_004af070 ====

/* private: static void __cdecl AsteroidDiffuseShader__LoadWhiteNoiseTextures6Location(void) */

void __cdecl AsteroidDiffuseShader__LoadWhiteNoiseTextures6Location(void)

{
  AsteroidDiffuseShader *pAVar1;
  AsteroidDiffuseShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures6";
  pAVar2 = AsteroidDiffuseShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->WhiteNoiseTextures6RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103);
  if ((pAVar1->WhiteNoiseTextures6RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures6."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  (**(code **)(pAVar1->_pad_0x0_0 + 0x70))(&local_8);
  return;
}

//==== 004af0f0 LoadWhiteNoiseTextures6Location_004af0f0 ====

/* private: static void __cdecl CityLightsShader__LoadWhiteNoiseTextures6Location(void) */

void __cdecl CityLightsShader__LoadWhiteNoiseTextures6Location(void)

{
  CityLightsShader *pCVar1;
  CityLightsShader *pCVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pCVar1 = CityLightsShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures6";
  pCVar2 = CityLightsShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pCVar2->_pad_0x4_1,pcVar4);
  (pCVar1->WhiteNoiseTextures6RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6);
  if ((pCVar1->WhiteNoiseTextures6RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures6."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pCVar1 = CityLightsShader__GetStatic();
  (**(code **)(pCVar1->_pad_0x0_0 + 0x70))(&local_8);
  return;
}

//==== 004af170 LoadWhiteNoiseTextures6Location_004af170 ====

/* private: static void __cdecl DamageGeneratorShader__LoadWhiteNoiseTextures6Location(void) */

void __cdecl DamageGeneratorShader__LoadWhiteNoiseTextures6Location(void)

{
  DamageGeneratorShader *pDVar1;
  DamageGeneratorShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DamageGeneratorShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures6";
  pDVar2 = DamageGeneratorShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->WhiteNoiseTextures6RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118);
  if ((pDVar1->WhiteNoiseTextures6RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures6."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pDVar1 = DamageGeneratorShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x70))(&local_8);
  return;
}

//==== 004af1f0 LoadWhiteNoiseTextures6Location_004af1f0 ====

/* private: static void __cdecl ParticleShader__LoadWhiteNoiseTextures6Location(void) */

void __cdecl ParticleShader__LoadWhiteNoiseTextures6Location(void)

{
  ParticleShader *pPVar1;
  ParticleShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = ParticleShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures6";
  pPVar2 = ParticleShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->WhiteNoiseTextures6RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112);
  if ((pPVar1->WhiteNoiseTextures6RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures6."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pPVar1 = ParticleShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x70))(&local_8);
  return;
}

//==== 004af270 LoadWhiteNoiseTextures7Location ====

/* private: static void __cdecl AsteroidCratersShader__LoadWhiteNoiseTextures7Location(void) */

void __cdecl AsteroidCratersShader__LoadWhiteNoiseTextures7Location(void)

{
  AsteroidCratersShader *pAVar1;
  AsteroidCratersShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pAVar1 = AsteroidCratersShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures7";
  pAVar2 = AsteroidCratersShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->WhiteNoiseTextures7RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc);
  if ((pAVar1->WhiteNoiseTextures7RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures7."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pAVar1 = AsteroidCratersShader__GetStatic();
  (**(code **)(pAVar1->_pad_0x0_0 + 0x70))(&local_8);
  return;
}

//==== 004af2f0 LoadWhiteNoiseTextures7Location_004af2f0 ====

/* private: static void __cdecl AsteroidDiffuseShader__LoadWhiteNoiseTextures7Location(void) */

void __cdecl AsteroidDiffuseShader__LoadWhiteNoiseTextures7Location(void)

{
  AsteroidDiffuseShader *pAVar1;
  AsteroidDiffuseShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures7";
  pAVar2 = AsteroidDiffuseShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->WhiteNoiseTextures7RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103);
  if ((pAVar1->WhiteNoiseTextures7RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures7."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  (**(code **)(pAVar1->_pad_0x0_0 + 0x74))(&local_8);
  return;
}

//==== 004af370 LoadWhiteNoiseTextures7Location_004af370 ====

/* private: static void __cdecl CityLightsShader__LoadWhiteNoiseTextures7Location(void) */

void __cdecl CityLightsShader__LoadWhiteNoiseTextures7Location(void)

{
  CityLightsShader *pCVar1;
  CityLightsShader *pCVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pCVar1 = CityLightsShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures7";
  pCVar2 = CityLightsShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pCVar2->_pad_0x4_1,pcVar4);
  (pCVar1->WhiteNoiseTextures7RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6);
  if ((pCVar1->WhiteNoiseTextures7RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures7."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pCVar1 = CityLightsShader__GetStatic();
  (**(code **)(pCVar1->_pad_0x0_0 + 0x74))(&local_8);
  return;
}

//==== 004af3f0 LoadWhiteNoiseTextures7Location_004af3f0 ====

/* private: static void __cdecl DamageGeneratorShader__LoadWhiteNoiseTextures7Location(void) */

void __cdecl DamageGeneratorShader__LoadWhiteNoiseTextures7Location(void)

{
  DamageGeneratorShader *pDVar1;
  DamageGeneratorShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DamageGeneratorShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures7";
  pDVar2 = DamageGeneratorShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->WhiteNoiseTextures7RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118);
  if ((pDVar1->WhiteNoiseTextures7RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures7."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pDVar1 = DamageGeneratorShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x74))(&local_8);
  return;
}

//==== 004af470 LoadWhiteNoiseTextures7Location_004af470 ====

/* private: static void __cdecl ParticleShader__LoadWhiteNoiseTextures7Location(void) */

void __cdecl ParticleShader__LoadWhiteNoiseTextures7Location(void)

{
  ParticleShader *pPVar1;
  ParticleShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = ParticleShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures7";
  pPVar2 = ParticleShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->WhiteNoiseTextures7RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112);
  if ((pPVar1->WhiteNoiseTextures7RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures7."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pPVar1 = ParticleShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x74))(&local_8);
  return;
}

//==== 004af4f0 LoadWhiteNoiseTextures8Location ====

/* private: static void __cdecl AsteroidCratersShader__LoadWhiteNoiseTextures8Location(void) */

void __cdecl AsteroidCratersShader__LoadWhiteNoiseTextures8Location(void)

{
  AsteroidCratersShader *pAVar1;
  AsteroidCratersShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pAVar1 = AsteroidCratersShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures8";
  pAVar2 = AsteroidCratersShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->WhiteNoiseTextures8RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc);
  if ((pAVar1->WhiteNoiseTextures8RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures8."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pAVar1 = AsteroidCratersShader__GetStatic();
  (**(code **)(pAVar1->_pad_0x0_0 + 0x74))(&local_8);
  return;
}

//==== 004af570 LoadWhiteNoiseTextures8Location_004af570 ====

/* private: static void __cdecl AsteroidDiffuseShader__LoadWhiteNoiseTextures8Location(void) */

void __cdecl AsteroidDiffuseShader__LoadWhiteNoiseTextures8Location(void)

{
  AsteroidDiffuseShader *pAVar1;
  AsteroidDiffuseShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures8";
  pAVar2 = AsteroidDiffuseShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->WhiteNoiseTextures8RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103);
  if ((pAVar1->WhiteNoiseTextures8RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures8."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  (**(code **)(pAVar1->_pad_0x0_0 + 0x78))(&local_8);
  return;
}

//==== 004af5f0 LoadWhiteNoiseTextures8Location_004af5f0 ====

/* private: static void __cdecl CityLightsShader__LoadWhiteNoiseTextures8Location(void) */

void __cdecl CityLightsShader__LoadWhiteNoiseTextures8Location(void)

{
  CityLightsShader *pCVar1;
  CityLightsShader *pCVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pCVar1 = CityLightsShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures8";
  pCVar2 = CityLightsShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pCVar2->_pad_0x4_1,pcVar4);
  (pCVar1->WhiteNoiseTextures8RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6);
  if ((pCVar1->WhiteNoiseTextures8RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures8."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pCVar1 = CityLightsShader__GetStatic();
  (**(code **)(pCVar1->_pad_0x0_0 + 0x78))(&local_8);
  return;
}

//==== 004af670 LoadWhiteNoiseTextures8Location_004af670 ====

/* private: static void __cdecl DamageGeneratorShader__LoadWhiteNoiseTextures8Location(void) */

void __cdecl DamageGeneratorShader__LoadWhiteNoiseTextures8Location(void)

{
  DamageGeneratorShader *pDVar1;
  DamageGeneratorShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DamageGeneratorShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures8";
  pDVar2 = DamageGeneratorShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->WhiteNoiseTextures8RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118);
  if ((pDVar1->WhiteNoiseTextures8RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures8."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pDVar1 = DamageGeneratorShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x78))(&local_8);
  return;
}

//==== 004af6f0 LoadWhiteNoiseTextures8Location_004af6f0 ====

/* private: static void __cdecl ParticleShader__LoadWhiteNoiseTextures8Location(void) */

void __cdecl ParticleShader__LoadWhiteNoiseTextures8Location(void)

{
  ParticleShader *pPVar1;
  ParticleShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = ParticleShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures8";
  pPVar2 = ParticleShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->WhiteNoiseTextures8RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112);
  if ((pPVar1->WhiteNoiseTextures8RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures8."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pPVar1 = ParticleShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x78))(&local_8);
  return;
}

//==== 004af770 LoadWhiteNoiseTextures9Location ====

/* private: static void __cdecl AsteroidCratersShader__LoadWhiteNoiseTextures9Location(void) */

void __cdecl AsteroidCratersShader__LoadWhiteNoiseTextures9Location(void)

{
  AsteroidCratersShader *pAVar1;
  AsteroidCratersShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pAVar1 = AsteroidCratersShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures9";
  pAVar2 = AsteroidCratersShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->WhiteNoiseTextures9RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc);
  if ((pAVar1->WhiteNoiseTextures9RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures9."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pAVar1 = AsteroidCratersShader__GetStatic();
  (**(code **)(pAVar1->_pad_0x0_0 + 0x78))(&local_8);
  return;
}

//==== 004af7f0 LoadWhiteNoiseTextures9Location_004af7f0 ====

/* private: static void __cdecl AsteroidDiffuseShader__LoadWhiteNoiseTextures9Location(void) */

void __cdecl AsteroidDiffuseShader__LoadWhiteNoiseTextures9Location(void)

{
  AsteroidDiffuseShader *pAVar1;
  AsteroidDiffuseShader *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures9";
  pAVar2 = AsteroidDiffuseShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pAVar2->_pad_0x4_1,pcVar4);
  (pAVar1->WhiteNoiseTextures9RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103);
  if ((pAVar1->WhiteNoiseTextures9RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures9."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  (**(code **)(pAVar1->_pad_0x0_0 + 0x7c))(&local_8);
  return;
}

//==== 004af870 LoadWhiteNoiseTextures9Location_004af870 ====

/* private: static void __cdecl CityLightsShader__LoadWhiteNoiseTextures9Location(void) */

void __cdecl CityLightsShader__LoadWhiteNoiseTextures9Location(void)

{
  CityLightsShader *pCVar1;
  CityLightsShader *pCVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pCVar1 = CityLightsShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures9";
  pCVar2 = CityLightsShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pCVar2->_pad_0x4_1,pcVar4);
  (pCVar1->WhiteNoiseTextures9RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6);
  if ((pCVar1->WhiteNoiseTextures9RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures9."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pCVar1 = CityLightsShader__GetStatic();
  (**(code **)(pCVar1->_pad_0x0_0 + 0x7c))(&local_8);
  return;
}

//==== 004af8f0 LoadWhiteNoiseTextures9Location_004af8f0 ====

/* private: static void __cdecl DamageGeneratorShader__LoadWhiteNoiseTextures9Location(void) */

void __cdecl DamageGeneratorShader__LoadWhiteNoiseTextures9Location(void)

{
  DamageGeneratorShader *pDVar1;
  DamageGeneratorShader *pDVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pDVar1 = DamageGeneratorShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures9";
  pDVar2 = DamageGeneratorShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pDVar2->_pad_0x4_1,pcVar4);
  (pDVar1->WhiteNoiseTextures9RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118);
  if ((pDVar1->WhiteNoiseTextures9RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures9."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pDVar1 = DamageGeneratorShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x7c))(&local_8);
  return;
}

//==== 004af970 LoadWhiteNoiseTextures9Location_004af970 ====

/* private: static void __cdecl ParticleShader__LoadWhiteNoiseTextures9Location(void) */

void __cdecl ParticleShader__LoadWhiteNoiseTextures9Location(void)

{
  ParticleShader *pPVar1;
  ParticleShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = ParticleShader__GetStatic();
  pcVar4 = "WhiteNoiseTextures9";
  pPVar2 = ParticleShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->WhiteNoiseTextures9RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112);
  if ((pPVar1->WhiteNoiseTextures9RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: WhiteNoiseTextures9."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pPVar1 = ParticleShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x7c))(&local_8);
  return;
}

//==== 004af9f0 PartialResetState_004af9f0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall ArmorShader__PartialResetState(void)const  */

void __thiscall ArmorShader__PartialResetState(ArmorShader *this)

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

//==== 004afa50 PartialResetState_004afa50 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall AsteroidCratersShader__PartialResetState(void)const  */

void __thiscall AsteroidCratersShader__PartialResetState(AsteroidCratersShader *this)

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

//==== 004afab0 PartialResetState_004afab0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall AsteroidDiffuseShader__PartialResetState(void)const  */

void __thiscall AsteroidDiffuseShader__PartialResetState(AsteroidDiffuseShader *this)

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

//==== 004afb10 PartialResetState_004afb10 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall AsteroidHeightShader__PartialResetState(void)const  */

void __thiscall AsteroidHeightShader__PartialResetState(AsteroidHeightShader *this)

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

//==== 004afb70 PartialResetState_004afb70 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall AsteroidNormalShader__PartialResetState(void)const  */

void __thiscall AsteroidNormalShader__PartialResetState(AsteroidNormalShader *this)

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

//==== 004afbd0 PartialResetState_004afbd0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall BlastLauncherShader__PartialResetState(void)const  */

void __thiscall BlastLauncherShader__PartialResetState(BlastLauncherShader *this)

{
  undefined8 stack0xfffffffc;
  Darray_L_void____cdecl_P__void__G_ *pDVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (*(char *)&(this[0x60]) != 0) {
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

//==== 004afc30 PartialResetState_004afc30 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall CityLightsShader__PartialResetState(void)const  */

void __thiscall CityLightsShader__PartialResetState(CityLightsShader *this)

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

//==== 004afc90 PartialResetState_004afc90 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall DamageGeneratorShader__PartialResetState(void)const  */

void __thiscall DamageGeneratorShader__PartialResetState(DamageGeneratorShader *this)

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

//==== 004afcf0 PartialResetState_004afcf0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall DamageShader__PartialResetState(void)const  */

void __thiscall DamageShader__PartialResetState(DamageShader *this)

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

//==== 004afd50 PartialResetState_004afd50 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall DamagedArmorShader__PartialResetState(void)const  */

void __thiscall DamagedArmorShader__PartialResetState(DamagedArmorShader *this)

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

//==== 004afdb0 PartialResetState_004afdb0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall DeferredGlobalLightingShader__PartialResetState(void)const  */

void __thiscall DeferredGlobalLightingShader__PartialResetState(DeferredGlobalLightingShader *this)

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

//==== 004afe10 PartialResetState_004afe10 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall DeferredWorldLightingShader__PartialResetState(void)const  */

void __thiscall DeferredWorldLightingShader__PartialResetState(DeferredWorldLightingShader *this)

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

//==== 004afe70 PartialResetState_004afe70 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall EquirectangularToCubeMapShader__PartialResetState(void)const  */

void __thiscall
EquirectangularToCubeMapShader__PartialResetState(EquirectangularToCubeMapShader *this)

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

//==== 004afed0 PartialResetState_004afed0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall ExhaustShader__PartialResetState(void)const  */

void __thiscall ExhaustShader__PartialResetState(ExhaustShader *this)

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

//==== 004aff30 PartialResetState_004aff30 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall GeneralModuleShader__PartialResetState(void)const  */

void __thiscall GeneralModuleShader__PartialResetState(GeneralModuleShader *this)

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

//==== 004aff90 PartialResetState_004aff90 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall ParticleShader__PartialResetState(void)const  */

void __thiscall ParticleShader__PartialResetState(ParticleShader *this)

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

//==== 004afff0 PartialResetState_004afff0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall PlanetShader__PartialResetState(void)const  */

void __thiscall PlanetShader__PartialResetState(PlanetShader *this)

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

//==== 004b0050 PartialResetState_004b0050 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall PropellantTankShader__PartialResetState(void)const  */

void __thiscall PropellantTankShader__PartialResetState(PropellantTankShader *this)

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

//==== 004b00b0 PartialResetState_004b00b0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall RadiatorShader__PartialResetState(void)const  */

void __thiscall RadiatorShader__PartialResetState(RadiatorShader *this)

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

//==== 004b0110 PartialResetState_004b0110 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall RingShadowShader__PartialResetState(void)const  */

void __thiscall RingShadowShader__PartialResetState(RingShadowShader *this)

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

//==== 004b0170 PartialResetState_004b0170 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall RingsShader__PartialResetState(void)const  */

void __thiscall RingsShader__PartialResetState(RingsShader *this)

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

//==== 004b01d0 PartialResetState_004b01d0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall RocketEngineShader__PartialResetState(void)const  */

void __thiscall RocketEngineShader__PartialResetState(RocketEngineShader *this)

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

//==== 004b0230 PartialResetState_004b0230 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall ShadowShader__PartialResetState(void)const  */

void __thiscall ShadowShader__PartialResetState(ShadowShader *this)

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

//==== 004b0290 PartialResetState_004b0290 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall ShockwaveShader__PartialResetState(void)const  */

void __thiscall ShockwaveShader__PartialResetState(ShockwaveShader *this)

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

//==== 004b02f0 PartialResetState_004b02f0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall SimpleShader__PartialResetState(void)const  */

void __thiscall SimpleShader__PartialResetState(SimpleShader *this)

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

//==== 004b0350 PartialResetState_004b0350 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall SpacecraftShadowShader__PartialResetState(void)const  */

void __thiscall SpacecraftShadowShader__PartialResetState(SpacecraftShadowShader *this)

{
  undefined8 stack0xfffffffc;
  Darray_L_void____cdecl_P__void__G_ *pDVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (*(char *)&(this[0x58]) != 0) {
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

//==== 004b03b0 PartialResetState_004b03b0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall StarShader__PartialResetState(void)const  */

void __thiscall StarShader__PartialResetState(StarShader *this)

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

//==== 004b0410 PreFrameSetup ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* void __cdecl PreFrameSetup(class CameraManager *) */

void __cdecl PreFrameSetup(CameraManager *param_1)

{
  undefined8 stack0xfffffffc;
  DeferredGlobalLightingShader *pDVar1;
  DeferredWorldLightingShader *pDVar2;
  PlanetShader *pPVar3;
  SpacecraftShader *pSVar4;
  FrustumCornerVectors local_9c;
  Vec3_L_double_G_ local_3c;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  double local_14;
  ShaderStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  CameraManager__GetCameraPos(param_1,&local_3c);
  local_24 = local_3c.X;
  uStack_20 = local_3c.Y;
  uStack_1c = local_3c.Y;
  uStack_18 = local_3c.Z;
  local_14 = local_3c.Z;
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pDVar1);
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x78))(&local_24);
  Graphics__ShaderStack___ShaderStack(&local_9);
  local_24 = local_3c.X;
  uStack_20 = local_3c.Y;
  uStack_1c = local_3c.Y;
  uStack_18 = local_3c.Z;
  local_14 = local_3c.Z;
  pDVar2 = DeferredWorldLightingShader__GetStatic();
  Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pDVar2);
  pDVar2 = DeferredWorldLightingShader__GetStatic();
  (**(code **)(pDVar2->_pad_0x0_0 + 0x78))(&local_24);
  Graphics__ShaderStack___ShaderStack(&local_9);
  local_24 = local_3c.X;
  uStack_20 = local_3c.Y;
  uStack_1c = local_3c.Y;
  uStack_18 = local_3c.Z;
  local_14 = local_3c.Z;
  pPVar3 = PlanetShader__GetStatic();
  Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pPVar3);
  pPVar3 = PlanetShader__GetStatic();
  (**(code **)(pPVar3->_pad_0x0_0 + 0xa8))(&local_24);
  Graphics__ShaderStack___ShaderStack(&local_9);
  local_24 = local_3c.X;
  uStack_20 = local_3c.Y;
  uStack_1c = local_3c.Y;
  uStack_18 = local_3c.Z;
  local_14 = local_3c.Z;
  pSVar4 = SpacecraftShader__GetStatic();
  Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pSVar4);
  pSVar4 = SpacecraftShader__GetStatic();
  (**(code **)(pSVar4->_pad_0x0_0 + 0xbc))(&local_24);
  Graphics__ShaderStack___ShaderStack(&local_9);
  CameraManager__CalculateFrustumCornerVectors(&local_9c);
  pDVar2 = DeferredWorldLightingShader__GetStatic();
  Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pDVar2);
  pDVar2 = DeferredWorldLightingShader__GetStatic();
  (**(code **)(pDVar2->_pad_0x0_0 + 0x4c))(&local_9c);
  pDVar2 = DeferredWorldLightingShader__GetStatic();
  (**(code **)(pDVar2->_pad_0x0_0 + 0x54))(&local_9c.TopRight);
  pDVar2 = DeferredWorldLightingShader__GetStatic();
  (**(code **)(pDVar2->_pad_0x0_0 + 0x5c))(&local_9c.BottomLeft);
  pDVar2 = DeferredWorldLightingShader__GetStatic();
  (**(code **)(pDVar2->_pad_0x0_0 + 100))(&local_9c.BottomRight);
  Graphics__ShaderStack___ShaderStack(&local_9);
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pDVar1);
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x4c))(&local_9c);
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x54))(&local_9c.TopRight);
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x5c))(&local_9c.BottomLeft);
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 100))(&local_9c.BottomRight);
  Graphics__ShaderStack___ShaderStack(&local_9);
  return;
}

//==== 004b05f0 SetAdditionalTexture ====

/* public: virtual void __thiscall AsteroidDiffuseShader__SetAdditionalTexture(int const &)const  */

void __thiscall
AsteroidDiffuseShader__SetAdditionalTexture(AsteroidDiffuseShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->AdditionalTextureRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103);
  }
  return;
}

//==== 004b0680 SetAdditionalTexture_004b0680 ====

/* public: virtual void  EquirectangularToCubeMapShader__SetAdditionalTexture(int const
   &)const  */

void 
EquirectangularToCubeMapShader__SetAdditionalTexture
          (EquirectangularToCubeMapShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x11d,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x11d,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->AdditionalTextureRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x11d);
  }
  return;
}

//==== 004b0710 SetAdditionalTextureDefault ====

/* private: static void __cdecl AsteroidDiffuseShader__SetAdditionalTextureDefault(void) */

void __cdecl AsteroidDiffuseShader__SetAdditionalTextureDefault(void)

{
  AsteroidDiffuseShader *pAVar1;
  undefined4 local_8;
  
  local_8 = 0;
  pAVar1 = AsteroidDiffuseShader__GetStatic();
  (**(code **)(pAVar1->_pad_0x0_0 + 0x84))(&local_8);
  return;
}

//==== 004b0740 SetAdditionalTextureDefault_004b0740 ====

/* private: static void __cdecl EquirectangularToCubeMapShader__SetAdditionalTextureDefault(void) */

void __cdecl EquirectangularToCubeMapShader__SetAdditionalTextureDefault(void)

{
  EquirectangularToCubeMapShader *pEVar1;
  undefined4 local_8;
  
  local_8 = 0;
  pEVar1 = EquirectangularToCubeMapShader__GetStatic();
  (**(code **)(pEVar1->_pad_0x0_0 + 0x4c))(&local_8);
  return;
}

//==== 004b0760 SetAlbedo ====

/* public: virtual void  PlanetShader__SetAlbedo(float const &)const  */

void  PlanetShader__SetAlbedo(PlanetShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->AlbedoRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  }
  return;
}

