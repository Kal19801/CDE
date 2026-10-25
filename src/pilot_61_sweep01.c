// pilot_sweep_sweep01.c - assembled by scripts/sweep_assemble.py (r19)
// reuses fam8_assemble fix passes (zip oracle/in-batch protos/vft channel/data closure)
/* ---- r20 incomplete-type forward decls (pointer-position only) ---- */
typedef struct Darray Darray;
typedef struct Maybe Maybe;
typedef struct SharedPtr SharedPtr;
typedef struct Str Str;
typedef struct Vec3 Vec3;
typedef struct WeakPtr WeakPtr;
typedef struct Darray_L_class_util__Reflectable_P_G_ Darray_L_class_util__Reflectable_P__G_;
#include "port_prelude.h"
#include "cde_win32_compat.h"
#include "cde_types_r20.h"
typedef union {
  struct {
    undefined8 _12_8_;
  };
  struct {
    undefined4 _0_4_;
    undefined4 _4_4_;
  };
  undefined1 raw[32];
} slice_view;
/* ---- externs: stub-oracle names (K&R; ret types by call site) ---- */
extern int ItineraryNode__operator_(); /* K&R stub; ret by call site */
extern int LibrationOrbit_GetActualOrbit_Memoize(); /* K&R stub; ret by call site */
extern int ModuleCompartment_ModuleCompartment__o2(); /* K&R stub; ret by call site */
extern int NodeMouseOver__dtor(); /* K&R stub; ret by call site */
extern int TacticalManager_GetStrategicGame_Memoize(); /* K&R stub; ret by call site */
extern int util_Darray_struct_WorldObject_Darray_struct_WorldObject__o2(); /* K&R stub; ret by call site */
extern int util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(); /* K&R stub; ret by call site */
extern int util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2(); /* K&R stub; ret by call site */
/* ---- data refs: xmm consts / UNK data (cde_data_map.h __real_ idiom) ---- */
#define _DAT_00960e60 (*(undefined1 *)(0x00960e60u))
#define _DAT_00960e70 (*(undefined1 *)(0x00960e70u))
#define _DAT_00960e80 (*(undefined1 *)(0x00960e80u))
#define _DAT_00960e90 (*(undefined1 *)(0x00960e90u))
#define _DAT_00960ea0 (*(undefined1 *)(0x00960ea0u))
#define _DAT_00960eb0 (*(undefined1 *)(0x00960eb0u))
#define _DAT_00960ec0 (*(undefined1 *)(0x00960ec0u))
#define _DAT_00960ed0 (*(undefined1 *)(0x00960ed0u))
#define _DAT_00960ee0 (*(undefined1 *)(0x00960ee0u))
#define _DAT_00960ef0 (*(undefined1 *)(0x00960ef0u))
#define _DAT_0096117c (*(undefined1 *)(0x0096117cu))
#define _DAT_0096118c (*(undefined1 *)(0x0096118cu))
#define _DAT_0096119c (*(undefined1 *)(0x0096119cu))
#define _DAT_009611ac (*(undefined1 *)(0x009611acu))
#define _DAT_009611bc (*(undefined1 *)(0x009611bcu))
#define _DAT_009611cc (*(undefined1 *)(0x009611ccu))
#define _DAT_009611dc (*(undefined1 *)(0x009611dcu))
#define _DAT_009611ec (*(undefined1 *)(0x009611ecu))
#define _DAT_009611fc (*(undefined1 *)(0x009611fcu))
#define _DAT_0096120c (*(undefined1 *)(0x0096120cu))
#define _DAT_0096121c (*(undefined1 *)(0x0096121cu))
#define _DAT_0096122c (*(undefined1 *)(0x0096122cu))
#define _DAT_0096123c (*(undefined1 *)(0x0096123cu))
#define _DAT_00961348 (*(undefined1 *)(0x00961348u))
#define _DAT_00961358 (*(undefined1 *)(0x00961358u))
#define _DAT_009619d0 (*(undefined1 *)(0x009619d0u))
#define _DAT_009619e0 (*(undefined1 *)(0x009619e0u))
#define _DAT_009619f0 (*(undefined1 *)(0x009619f0u))
#define _DAT_00961a00 (*(undefined1 *)(0x00961a00u))
#define _DAT_00961a10 (*(undefined1 *)(0x00961a10u))
#define _DAT_00961a20 (*(undefined1 *)(0x00961a20u))
#define _DAT_00961a30 (*(undefined1 *)(0x00961a30u))
#define _DAT_00961a40 (*(undefined1 *)(0x00961a40u))
#define _DAT_00961a50 (*(undefined1 *)(0x00961a50u))
#define _DAT_00962a48 (*(undefined1 *)(0x00962a48u))
#define _DAT_00962be8 (*(undefined1 *)(0x00962be8u))
#define _DAT_00962bf8 (*(undefined1 *)(0x00962bf8u))
#define _DAT_00962c08 (*(undefined1 *)(0x00962c08u))
#define _DAT_00962c18 (*(undefined1 *)(0x00962c18u))
#define _DAT_00962c28 (*(undefined1 *)(0x00962c28u))
#define _DAT_00962c38 (*(undefined1 *)(0x00962c38u))
#define _DAT_00962c48 (*(undefined1 *)(0x00962c48u))
#define _DAT_00962c58 (*(undefined1 *)(0x00962c58u))
#define _DAT_00962c68 (*(undefined1 *)(0x00962c68u))
#define _DAT_00962c78 (*(undefined1 *)(0x00962c78u))
#define _DAT_00962c88 (*(undefined1 *)(0x00962c88u))
#define _DAT_00963210 (*(undefined1 *)(0x00963210u))
#define _DAT_00963220 (*(undefined1 *)(0x00963220u))
#define _DAT_00963230 (*(undefined1 *)(0x00963230u))
#define _DAT_00963240 (*(undefined1 *)(0x00963240u))
#define _DAT_00963250 (*(undefined1 *)(0x00963250u))
#define _DAT_00963260 (*(undefined1 *)(0x00963260u))
#define _DAT_009635c8 (*(undefined1 *)(0x009635c8u))
#define _DAT_009635d8 (*(undefined1 *)(0x009635d8u))
#define _DAT_009635e8 (*(undefined1 *)(0x009635e8u))
#define _DAT_009635f8 (*(undefined1 *)(0x009635f8u))
#define _DAT_00963608 (*(undefined1 *)(0x00963608u))
#define _DAT_00963618 (*(undefined1 *)(0x00963618u))
#define _DAT_00963628 (*(undefined1 *)(0x00963628u))
#define _DAT_00963850 (*(undefined1 *)(0x00963850u))
#define _DAT_00963860 (*(undefined1 *)(0x00963860u))
#define _DAT_00963870 (*(undefined1 *)(0x00963870u))
#define _DAT_00963880 (*(undefined1 *)(0x00963880u))
#define _DAT_00963890 (*(undefined1 *)(0x00963890u))
#define _DAT_009638a0 (*(undefined1 *)(0x009638a0u))
#define _DAT_009638b0 (*(undefined1 *)(0x009638b0u))
#define _DAT_009638c0 (*(undefined1 *)(0x009638c0u))
#define _DAT_009638d0 (*(undefined1 *)(0x009638d0u))
#define _DAT_009638e0 (*(undefined1 *)(0x009638e0u))
#define _DAT_009638f0 (*(undefined1 *)(0x009638f0u))
#define _DAT_00963900 (*(undefined1 *)(0x00963900u))
#define _DAT_00963910 (*(undefined1 *)(0x00963910u))
#define _DAT_00963b48 (*(undefined1 *)(0x00963b48u))
#define _DAT_00963b58 (*(undefined1 *)(0x00963b58u))
#define _DAT_00963b68 (*(undefined1 *)(0x00963b68u))
#define _DAT_00963b78 (*(undefined1 *)(0x00963b78u))
#define _DAT_00963b88 (*(undefined1 *)(0x00963b88u))
#define _DAT_00963b98 (*(undefined1 *)(0x00963b98u))
#define _DAT_00963ba8 (*(undefined1 *)(0x00963ba8u))
#define _DAT_00963bb8 (*(undefined1 *)(0x00963bb8u))
#define _DAT_00963bc8 (*(undefined1 *)(0x00963bc8u))
#define _DAT_00963bd8 (*(undefined1 *)(0x00963bd8u))
#define _DAT_00963be8 (*(undefined1 *)(0x00963be8u))
#define _DAT_00963d60 (*(undefined1 *)(0x00963d60u))
#define _DAT_00963d70 (*(undefined1 *)(0x00963d70u))
#define _DAT_00963d80 (*(undefined1 *)(0x00963d80u))
#define _DAT_00963d90 (*(undefined1 *)(0x00963d90u))
#define _DAT_00963da0 (*(undefined1 *)(0x00963da0u))
#define _DAT_00963db0 (*(undefined1 *)(0x00963db0u))
#define _DAT_00964150 (*(undefined1 *)(0x00964150u))
#define _DAT_00964160 (*(undefined1 *)(0x00964160u))
#define _DAT_00964170 (*(undefined1 *)(0x00964170u))
#define _DAT_00964180 (*(undefined1 *)(0x00964180u))
#define _DAT_00964190 (*(undefined1 *)(0x00964190u))
#define _DAT_009641a0 (*(undefined1 *)(0x009641a0u))
#define _DAT_009641b0 (*(undefined1 *)(0x009641b0u))
#define _DAT_009641c0 (*(undefined1 *)(0x009641c0u))
#define _DAT_009641d0 (*(undefined1 *)(0x009641d0u))
#define _DAT_009641e0 (*(undefined1 *)(0x009641e0u))
#define _DAT_009641f0 (*(undefined1 *)(0x009641f0u))
#define _DAT_00964420 (*(undefined1 *)(0x00964420u))
#define _DAT_00964430 (*(undefined1 *)(0x00964430u))
#define _DAT_00964440 (*(undefined1 *)(0x00964440u))
#define _DAT_00964450 (*(undefined1 *)(0x00964450u))
#define _DAT_00964460 (*(undefined1 *)(0x00964460u))
#define _DAT_00964470 (*(undefined1 *)(0x00964470u))
#define _DAT_00964480 (*(undefined1 *)(0x00964480u))
#define _DAT_00964490 (*(undefined1 *)(0x00964490u))
#define _DAT_009644a0 (*(undefined1 *)(0x009644a0u))
#define _DAT_009644b0 (*(undefined1 *)(0x009644b0u))
#define _DAT_009644c0 (*(undefined1 *)(0x009644c0u))
#define _DAT_009645f8 (*(undefined1 *)(0x009645f8u))
#define _DAT_00964608 (*(undefined1 *)(0x00964608u))
#define _DAT_00964618 (*(undefined1 *)(0x00964618u))
#define _DAT_00964628 (*(undefined1 *)(0x00964628u))
#define _DAT_009647f0 (*(undefined1 *)(0x009647f0u))
#define _DAT_00964800 (*(undefined1 *)(0x00964800u))
#define _DAT_00964810 (*(undefined1 *)(0x00964810u))
#define _DAT_00964820 (*(undefined1 *)(0x00964820u))
#define _DAT_00964830 (*(undefined1 *)(0x00964830u))
#define _DAT_00964840 (*(undefined1 *)(0x00964840u))
#define _DAT_00964850 (*(undefined1 *)(0x00964850u))
#define _DAT_00964860 (*(undefined1 *)(0x00964860u))
#define _DAT_00964870 (*(undefined1 *)(0x00964870u))
#define _DAT_00964880 (*(undefined1 *)(0x00964880u))
#define _DAT_00964890 (*(undefined1 *)(0x00964890u))
#define _DAT_00964c68 (*(undefined1 *)(0x00964c68u))
#define _DAT_00964c78 (*(undefined1 *)(0x00964c78u))
#define _DAT_00964c88 (*(undefined1 *)(0x00964c88u))
#define _DAT_00964c98 (*(undefined1 *)(0x00964c98u))
#define _DAT_00964ca8 (*(undefined1 *)(0x00964ca8u))
#define _DAT_00964cb8 (*(undefined1 *)(0x00964cb8u))
#define _DAT_00964cc8 (*(undefined1 *)(0x00964cc8u))
#define _DAT_00964cd8 (*(undefined1 *)(0x00964cd8u))
#define _DAT_00964ce8 (*(undefined1 *)(0x00964ce8u))
#define _DAT_00964cf8 (*(undefined1 *)(0x00964cf8u))
#define _DAT_00964d08 (*(undefined1 *)(0x00964d08u))
#define _DAT_00964e28 (*(undefined1 *)(0x00964e28u))
#define _DAT_009651a0 (*(undefined1 *)(0x009651a0u))
#define _DAT_009651c0 (*(undefined1 *)(0x009651c0u))
#define _DAT_009651e0 (*(undefined1 *)(0x009651e0u))
#define _DAT_00965220 (*(undefined1 *)(0x00965220u))
#define _DAT_00965244 (*(undefined1 *)(0x00965244u))
#define _DAT_00965264 (*(undefined1 *)(0x00965264u))
#define _DAT_00965284 (*(undefined1 *)(0x00965284u))
#define _DAT_00965294 (*(undefined1 *)(0x00965294u))
#define _DAT_009652a4 (*(undefined1 *)(0x009652a4u))
#define _DAT_009652b4 (*(undefined1 *)(0x009652b4u))
#define _DAT_009652c4 (*(undefined1 *)(0x009652c4u))
#define _DAT_009652d4 (*(undefined1 *)(0x009652d4u))
#define _DAT_009652e4 (*(undefined1 *)(0x009652e4u))
#define _DAT_009652f4 (*(undefined1 *)(0x009652f4u))
#define _DAT_00965518 (*(undefined1 *)(0x00965518u))
#define _DAT_00965528 (*(undefined1 *)(0x00965528u))
#define _DAT_00965538 (*(undefined1 *)(0x00965538u))
#define _DAT_00965548 (*(undefined1 *)(0x00965548u))
#define _DAT_00965558 (*(undefined1 *)(0x00965558u))
#define _DAT_00965568 (*(undefined1 *)(0x00965568u))
#define _DAT_00965578 (*(undefined1 *)(0x00965578u))
#define _DAT_00965588 (*(undefined1 *)(0x00965588u))
#define _DAT_00965598 (*(undefined1 *)(0x00965598u))
#define _DAT_009655a8 (*(undefined1 *)(0x009655a8u))
#define _DAT_009655b8 (*(undefined1 *)(0x009655b8u))
#define _DAT_009655c8 (*(undefined1 *)(0x009655c8u))
#define _DAT_009655d8 (*(undefined1 *)(0x009655d8u))
#define _DAT_00965d40 (*(undefined1 *)(0x00965d40u))
#define _DAT_00965d50 (*(undefined1 *)(0x00965d50u))
#define _DAT_00965d60 (*(undefined1 *)(0x00965d60u))
#define _DAT_00965d70 (*(undefined1 *)(0x00965d70u))
#define _DAT_00965d80 (*(undefined1 *)(0x00965d80u))
#define _DAT_00965d90 (*(undefined1 *)(0x00965d90u))
#define _DAT_00965da0 (*(undefined1 *)(0x00965da0u))
#define _DAT_00965db0 (*(undefined1 *)(0x00965db0u))
#define _DAT_00965dc0 (*(undefined1 *)(0x00965dc0u))
#define _DAT_00965dd0 (*(undefined1 *)(0x00965dd0u))
#define _DAT_00965de0 (*(undefined1 *)(0x00965de0u))
#define _DAT_00966c90 (*(undefined1 *)(0x00966c90u))
#define _DAT_00966ca0 (*(undefined1 *)(0x00966ca0u))
#define _DAT_00966cb0 (*(undefined1 *)(0x00966cb0u))
#define _DAT_00966cc0 (*(undefined1 *)(0x00966cc0u))
#define _DAT_00966cd0 (*(undefined1 *)(0x00966cd0u))
#define _DAT_00966ce0 (*(undefined1 *)(0x00966ce0u))
#define _DAT_00966cf0 (*(undefined1 *)(0x00966cf0u))
#define _DAT_00966d00 (*(undefined1 *)(0x00966d00u))
#define _DAT_00966d10 (*(undefined1 *)(0x00966d10u))
#define _DAT_00966d20 (*(undefined1 *)(0x00966d20u))
#define _DAT_00966d30 (*(undefined1 *)(0x00966d30u))
#define _DAT_00966d40 (*(undefined1 *)(0x00966d40u))
#define _DAT_00966d50 (*(undefined1 *)(0x00966d50u))
#define _DAT_00966fb8 (*(undefined1 *)(0x00966fb8u))
#define _DAT_00966fc8 (*(undefined1 *)(0x00966fc8u))
#define _DAT_00966fd8 (*(undefined1 *)(0x00966fd8u))
#define _DAT_00966fe8 (*(undefined1 *)(0x00966fe8u))
#define _DAT_00966ff8 (*(undefined1 *)(0x00966ff8u))
#define _DAT_00967008 (*(undefined1 *)(0x00967008u))
#define _DAT_00967018 (*(undefined1 *)(0x00967018u))
#define _DAT_00967028 (*(undefined1 *)(0x00967028u))
#define _DAT_00967038 (*(undefined1 *)(0x00967038u))
#define _DAT_00967048 (*(undefined1 *)(0x00967048u))
#define _DAT_00967058 (*(undefined1 *)(0x00967058u))
#define _DAT_00967b20 (*(undefined1 *)(0x00967b20u))
#define _DAT_00967b30 (*(undefined1 *)(0x00967b30u))
#define _DAT_00967b40 (*(undefined1 *)(0x00967b40u))
#define _DAT_00967b50 (*(undefined1 *)(0x00967b50u))
#define _DAT_00967b60 (*(undefined1 *)(0x00967b60u))
#define _DAT_00967b70 (*(undefined1 *)(0x00967b70u))
#define _DAT_00967b80 (*(undefined1 *)(0x00967b80u))
#define _DAT_00967b90 (*(undefined1 *)(0x00967b90u))
#define _DAT_00967ba0 (*(undefined1 *)(0x00967ba0u))
#define _DAT_00967bb0 (*(undefined1 *)(0x00967bb0u))
#define _DAT_00967bc0 (*(undefined1 *)(0x00967bc0u))
#define _DAT_00967bd0 (*(undefined1 *)(0x00967bd0u))
#define _DAT_00967e0c (*(undefined1 *)(0x00967e0cu))
#define _DAT_00967e1c (*(undefined1 *)(0x00967e1cu))
#define _DAT_00967e2c (*(undefined1 *)(0x00967e2cu))
#define _DAT_00967e3c (*(undefined1 *)(0x00967e3cu))
#define _DAT_00967e4c (*(undefined1 *)(0x00967e4cu))
#define _DAT_00967e5c (*(undefined1 *)(0x00967e5cu))
#define _DAT_00967e6c (*(undefined1 *)(0x00967e6cu))
#define _DAT_00967e7c (*(undefined1 *)(0x00967e7cu))
#define _DAT_00967e8c (*(undefined1 *)(0x00967e8cu))
#define _DAT_00967e9c (*(undefined1 *)(0x00967e9cu))
#define _DAT_00967eac (*(undefined1 *)(0x00967eacu))
#define _DAT_00968380 (*(undefined1 *)(0x00968380u))
#define _DAT_00968390 (*(undefined1 *)(0x00968390u))
#define _DAT_009683a0 (*(undefined1 *)(0x009683a0u))
#define _DAT_009683b0 (*(undefined1 *)(0x009683b0u))
#define _DAT_009683c0 (*(undefined1 *)(0x009683c0u))
#define _DAT_009683d0 (*(undefined1 *)(0x009683d0u))
#define _DAT_009683e0 (*(undefined1 *)(0x009683e0u))
#define _DAT_009683f0 (*(undefined1 *)(0x009683f0u))
#define _DAT_00968400 (*(undefined1 *)(0x00968400u))
#define _DAT_00968410 (*(undefined1 *)(0x00968410u))
#define _DAT_00968420 (*(undefined1 *)(0x00968420u))
#define _DAT_00968aac (*(undefined1 *)(0x00968aacu))
#define _DAT_00968abc (*(undefined1 *)(0x00968abcu))
#define _DAT_00968acc (*(undefined1 *)(0x00968accu))
#define _DAT_00968adc (*(undefined1 *)(0x00968adcu))
#define _DAT_00968aec (*(undefined1 *)(0x00968aecu))
#define _DAT_00968afc (*(undefined1 *)(0x00968afcu))
#define _DAT_00968b1c (*(undefined1 *)(0x00968b1cu))
#define _DAT_00968b2c (*(undefined1 *)(0x00968b2cu))
#define _DAT_00968b3c (*(undefined1 *)(0x00968b3cu))

//==== 000048b0d0 0048b0d0_stbi_jpeg_test_file ====

// decompiled by BatchDecomp @ 0048b0d0 name=stbi_jpeg_test_file conv=__cdecl body=116

/* WARNING: Function: _chkstk replaced with injection: alloca_probe */
/* stbi_jpeg_test_file */

void __cdecl stbi_jpeg_test_file(void)

{
  undefined4 stack0xfffffffc;
  char cVar1;
  uint uVar2;
  long _Offset;
  FILE *in_ECX;
  
  uVar2 = __security_cookie ^ (uint)&stack0xfffffffc;
  _Offset = ftell(in_ECX);
  cVar1 = FUN_004896f0();
  if (cVar1 != -0x28) {
    DAT_009936c8 = "Corrupt JPEG";
  }
  fseek(in_ECX,_Offset,0);
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000496ce0 00496ce0_RenderSimple ====
// decompiled by BatchDecomp @ 00496ce0 name=RenderSimple conv=__thiscall body=31

/* public: void __thiscall GameModel__RenderSimple(void)const  */

void __thiscall GameModel__RenderSimple(GameModel *this)

{
  bool bVar1;
  
  bVar1 = VertexBufferObjectInterface__IsGenerated((VertexBufferObjectInterface *)this);
  if ((bVar1) && (this->StructureComposition != (Material *)0x0)) {
    VertexBufferObjectInterface__Render((VertexBufferObjectInterface *)this);
    return;
  }
  return;
}


//==== 0000498910 00498910_SetPaintedByDefaultDefault ====
// decompiled by BatchDecomp @ 00498910 name=SetPaintedByDefaultDefault conv=__cdecl body=28

/* private: static void __cdecl SpacecraftShader__SetPaintedByDefaultDefault(void) */

void __cdecl SpacecraftShader__SetPaintedByDefaultDefault(void)

{
  undefined4 stack0xfffffffb;
  SpacecraftShader *pSVar1;
  uint3 in_ECX;
  uint uVar2;
  
  uVar2 = (uint)in_ECX;
  pSVar1 = GetStatic();
  (**(code **)(*(int *)pSVar1 + 0x6c))(&stack0xfffffffb,uVar2);
  return;
}


//==== 000049a2b0 0049a2b0_SetUseSplineTexCoordsDefault ====
// decompiled by BatchDecomp @ 0049a2b0 name=SetUseSplineTexCoordsDefault conv=__cdecl body=28

/* private: static void __cdecl SpacecraftShader__SetUseSplineTexCoordsDefault(void) */

void __cdecl SpacecraftShader__SetUseSplineTexCoordsDefault(void)

{
  undefined4 stack0xfffffffb;
  SpacecraftShader *pSVar1;
  undefined3 in_ECX;
  undefined4 uVar2;
  
  uVar2 = CONCAT13(1,in_ECX);
  pSVar1 = GetStatic();
  (**(code **)(*(int *)pSVar1 + 0x70))(&stack0xfffffffb,uVar2);
  return;
}


//==== 000049a360 0049a360_SetUsesDamageTextureDefault ====
// decompiled by BatchDecomp @ 0049a360 name=SetUsesDamageTextureDefault conv=__cdecl body=28

/* private: static void __cdecl SpacecraftShader__SetUsesDamageTextureDefault(void) */

void __cdecl SpacecraftShader__SetUsesDamageTextureDefault(void)

{
  undefined4 stack0xfffffffb;
  SpacecraftShader *pSVar1;
  uint3 in_ECX;
  uint uVar2;
  
  uVar2 = (uint)in_ECX;
  pSVar1 = GetStatic();
  (**(code **)(*(int *)pSVar1 + 0x68))(&stack0xfffffffb,uVar2);
  return;
}


//==== 000049a410 0049a410_SetUsesNormalTextureDefault ====
// decompiled by BatchDecomp @ 0049a410 name=SetUsesNormalTextureDefault conv=__cdecl body=28

/* private: static void __cdecl SpacecraftShader__SetUsesNormalTextureDefault(void) */

void __cdecl SpacecraftShader__SetUsesNormalTextureDefault(void)

{
  undefined4 stack0xfffffffb;
  SpacecraftShader *pSVar1;
  uint3 in_ECX;
  uint uVar2;
  
  uVar2 = (uint)in_ECX;
  pSVar1 = GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 100))(&stack0xfffffffb,uVar2);
  return;
}


//==== 000049a8e0 0049a8e0__ItineraryNode ====
// decompiled by BatchDecomp @ 0049a8e0 name=~ItineraryNode conv=__thiscall body=76

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: __thiscall ItineraryNode__dtor(void) */

void __thiscall ItineraryNode__dtor(ItineraryNode *this)

{
  int *piVar1;
  ReferenceController *pRVar2;
  
  pRVar2 = (this->CachedNearestOrbiter).Controller;
  if (pRVar2 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar2);
  }
  pRVar2 = (this->CachedNearestFleet).Controller;
  if (pRVar2 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar2);
  }
  pRVar2 = (this->CachedNearestBody).Controller;
  if (pRVar2 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar2);
  }
  pRVar2 = (this->CachedGravityBody).Controller;
  if (pRVar2 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar2);
  }
  pRVar2 = (this->Parent).Controller;
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
  util__ReferenceController__CheckForWeakRelease(pRVar2);
  return;
}


//==== 00004b9d70 004b9d70_SetLuminanceStoredInAlphaChannelDefault ====
// decompiled by BatchDecomp @ 004b9d70 name=SetLuminanceStoredInAlphaChannelDefault conv=__cdecl body=28

/* private: static void __cdecl SimpleShader__SetLuminanceStoredInAlphaChannelDefault(void) */

void __cdecl SimpleShader__SetLuminanceStoredInAlphaChannelDefault(void)

{
  undefined4 stack0xfffffffb;
  SimpleShader *pSVar1;
  uint3 in_ECX;
  uint uVar2;
  
  uVar2 = (uint)in_ECX;
  pSVar1 = GetStatic();
  (**(code **)(*(int *)pSVar1 + 0x4c))(&stack0xfffffffb,uVar2);
  return;
}


//==== 00004c5f70 004c5f70_SetShouldDrawGlowDefault ====
// decompiled by BatchDecomp @ 004c5f70 name=SetShouldDrawGlowDefault conv=__cdecl body=28

/* private: static void __cdecl SimpleShader__SetShouldDrawGlowDefault(void) */

void __cdecl SimpleShader__SetShouldDrawGlowDefault(void)

{
  undefined4 stack0xfffffffb;
  SimpleShader *pSVar1;
  undefined3 in_ECX;
  undefined4 uVar2;
  
  uVar2 = CONCAT13(1,in_ECX);
  pSVar1 = GetStatic();
  (**(code **)(*(int *)pSVar1 + 0x54))(&stack0xfffffffb,uVar2);
  return;
}


//==== 00004cc900 004cc900_SetUsesDamageTextureDefault ====
// decompiled by BatchDecomp @ 004cc900 name=SetUsesDamageTextureDefault conv=__cdecl body=28

/* private: static void __cdecl SpacecraftShadowShader__SetUsesDamageTextureDefault(void) */

void __cdecl SpacecraftShadowShader__SetUsesDamageTextureDefault(void)

{
  undefined4 stack0xfffffffb;
  SpacecraftShadowShader *pSVar1;
  uint3 in_ECX;
  uint uVar2;
  
  uVar2 = (uint)in_ECX;
  pSVar1 = GetStatic();
  (**(code **)(*(int *)pSVar1 + 0x4c))(&stack0xfffffffb,uVar2);
  return;
}


//==== 00004cc9b0 004cc9b0_SetUsesDiffuseMapDefault ====
// decompiled by BatchDecomp @ 004cc9b0 name=SetUsesDiffuseMapDefault conv=__cdecl body=31

/* private: static void __cdecl PlanetShader__SetUsesDiffuseMapDefault(void) */

void __cdecl PlanetShader__SetUsesDiffuseMapDefault(void)

{
  undefined4 stack0xfffffffb;
  PlanetShader *pPVar1;
  uint3 in_ECX;
  uint uVar2;
  
  uVar2 = (uint)in_ECX;
  pPVar1 = GetStatic();
  (**(code **)(*(int *)pPVar1 + 0x80))(&stack0xfffffffb,uVar2);
  return;
}


//==== 00004cca60 004cca60_SetUsesHeightMapDefault ====
// decompiled by BatchDecomp @ 004cca60 name=SetUsesHeightMapDefault conv=__cdecl body=31

/* private: static void __cdecl PlanetShader__SetUsesHeightMapDefault(void) */

void __cdecl PlanetShader__SetUsesHeightMapDefault(void)

{
  undefined4 stack0xfffffffb;
  PlanetShader *pPVar1;
  uint3 in_ECX;
  uint uVar2;
  
  uVar2 = (uint)in_ECX;
  pPVar1 = GetStatic();
  (**(code **)(*(int *)pPVar1 + 0x8c))(&stack0xfffffffb,uVar2);
  return;
}


//==== 00004ccb10 004ccb10_SetUsesNormalMapDefault ====
// decompiled by BatchDecomp @ 004ccb10 name=SetUsesNormalMapDefault conv=__cdecl body=31

/* private: static void __cdecl PlanetShader__SetUsesNormalMapDefault(void) */

void __cdecl PlanetShader__SetUsesNormalMapDefault(void)

{
  undefined4 stack0xfffffffb;
  PlanetShader *pPVar1;
  uint3 in_ECX;
  uint uVar2;
  
  uVar2 = (uint)in_ECX;
  pPVar1 = GetStatic();
  (**(code **)(*(int *)pPVar1 + 0x84))(&stack0xfffffffb,uVar2);
  return;
}


//==== 00004ccbc0 004ccbc0_SetUsesSpecularMapDefault ====
// decompiled by BatchDecomp @ 004ccbc0 name=SetUsesSpecularMapDefault conv=__cdecl body=31

/* private: static void __cdecl PlanetShader__SetUsesSpecularMapDefault(void) */

void __cdecl PlanetShader__SetUsesSpecularMapDefault(void)

{
  undefined4 stack0xfffffffb;
  PlanetShader *pPVar1;
  uint3 in_ECX;
  uint uVar2;
  
  uVar2 = (uint)in_ECX;
  pPVar1 = GetStatic();
  (**(code **)(*(int *)pPVar1 + 0x88))(&stack0xfffffffb,uVar2);
  return;
}


//==== 00004ccc70 004ccc70_SetUsesTextureDefault ====
// decompiled by BatchDecomp @ 004ccc70 name=SetUsesTextureDefault conv=__cdecl body=28

/* private: static void __cdecl SimpleShader__SetUsesTextureDefault(void) */

void __cdecl SimpleShader__SetUsesTextureDefault(void)

{
  undefined4 stack0xfffffffb;
  SimpleShader *pSVar1;
  uint3 in_ECX;
  uint uVar2;
  
  uVar2 = (uint)in_ECX;
  pSVar1 = GetStatic();
  (**(code **)(*(int *)pSVar1 + 0x50))(&stack0xfffffffb,uVar2);
  return;
}


//==== 00004e3870 004e3870_GetRecordInfo ====
// decompiled by BatchDecomp @ 004e3870 name=GetRecordInfo conv=__thiscall body=87

/* public: class util::Str<char> __thiscall LevelRecordSlotUI__GetRecordInfo(void)const  */

Str_L_char_G_ * __thiscall
LevelRecordSlotUI__GetRecordInfo(LevelRecordSlotUI *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 stack0xffffffd4;
  undefined4 stack0xfffffffc;
  Str_L_char_G_ SVar1;
  int unaff_EDI;
  Maybe_L_double_G_ *__return_storage_ptr___00;
  Attribute_L_LevelRecord_G_ *pAVar2;
  LevelRecordMetadata *pLVar3;
  Maybe_L_double_G_ local_18;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pLVar3 = &this->Metadata;
  pAVar2 = &this->Record;
  __return_storage_ptr___00 = &local_18;
  LevelRecord__GetValue(__return_storage_ptr___00,(Attribute_L_struct_LevelRecord_G_ *)pAVar2,pLVar3);
  if (local_18.IsValidData == false) {
    util__Str_char___Str_char__o5(__return_storage_ptr__,"-");
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return __return_storage_ptr__;
  }
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffffd4,&(this->Metadata).Name);
  SVar1.Capacity = (int)pLVar3;
  SVar1.Data = (char *)pAVar2;
  SVar1.Length = unaff_EDI;
  Print(__return_storage_ptr__,(double)CONCAT44(__return_storage_ptr___00,((slice_view *)&local_18.Data)->_4_4_),SVar1
       );
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 00004fd660 004fd660_Clear ====
#undef PauseMenu /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 004fd660 name=Clear conv=__thiscall body=97

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall PauseMenuHandler__Clear(void) */

void __thiscall PauseMenuHandler__Clear(PauseMenuHandler *this)

{
  ReferenceController *this_00;
  bool bVar1;
  Interface *this_01;
  ReferenceControllerRegistry *this_02;
  UIWidget *pUVar2;
  
  this_01 = UIWidget__GetInterfacer((UIWidget *)this);
  Interface__KillPopup(this_01);
  this_00 = (this->PauseMenu).Controller;
  pUVar2 = (this->PauseMenu).Pointer;
  (this->PauseMenu).Pointer = (UIWidget *)0x0;
  (this->PauseMenu).Controller = (ReferenceController *)0x0;
  if (this_00 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__ReleaseStrongReference(this_00);
    if (bVar1) {
      if (pUVar2 != (UIWidget *)0x0) {
        (**(code **)(pUVar2->_pad_0x0_0 + 4))(1);
      }
      this_02 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(this_02,pUVar2);
    }
  }
  *(undefined1 *)&this[1]._pad_0x0_0 = 0;
  return;
}


//==== 0000529160 00529160_operator__ ====
// decompiled by BatchDecomp @ 00529160 name=operator[] conv=__thiscall body=69

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual struct CompartmentCollisionShell & __thiscall util::Darray<struct
   CompartmentCollisionShell>::operator[](int const &)const  */

CompartmentCollisionShell * __thiscall
util__Darray_struct_CompartmentCollisionShell___operator__(Darray_L_struct_CompartmentCollisionShell_G_ *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 < 0) || (*(int *)(this + 8) <= iVar1)) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0xa0,
              "Index >= 0 && Index < Size",(char *)0x0);
    DebugBreak();
    iVar1 = *param_1;
  }
  return (CompartmentCollisionShell *)(iVar1 * 0x118 + *(int *)(this + 4));
}


//==== 000058ade0 0058ade0_RefreshCurrentModule ====
// decompiled by BatchDecomp @ 0058ade0 name=RefreshCurrentModule conv=__thiscall body=106

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall ModuleDesignManager__RefreshCurrentModule(void) */

void __thiscall ModuleDesignManager__RefreshCurrentModule(ModuleDesignManager *this)

{
  Module *this_00;
  ReferenceController *pRVar1;
  bool bVar2;
  GameManager *this_01;
  DataParser *pDVar3;
  HWND unaff_EDI;
  
  this_00 = this->SelectedModule;
  if (this_00 != (Module *)0x0) {
    this_01 = (GameManager *)Manager__GetParent(unaff_EDI);
    pDVar3 = GameManager__GetDataManager(this_01);
    Module__FullGenerate(this_00,pDVar3);
  }
  if (((this->MessageBoxA).Options.Data != (tuple2_L_util__Str_L_char_G__Cutil__Delegate_L_void_G___G_ *)0x0) &&
     (pRVar1 = (ReferenceController *)(this->MessageBoxA).Options.Size,
     pRVar1 != (ReferenceController *)0x0)) {
    bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (bVar2) {
      pRVar1 = (ReferenceController *)(this->MessageBoxA).Options.Size;
      if (pRVar1 != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
        if (!bVar2) {
          (this->MessageBoxA).Options.Data = (tuple2_L_util__Str_L_char_G__Cutil__Delegate_L_void_G___G_ *)0x0;
        }
      }
      ErrorMessageUI__Rebuild((ErrorMessageUI *)(this->MessageBoxA).Options.Data);
      return;
    }
  }
  return;
}


//==== 00005967b0 005967b0__scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 005967b0 name=`scalar_deleting_destructor' conv=__thiscall body=38

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall RemoteControlCompartment::`scalar deleting destructor'(unsigned
   int) */

void * __thiscall
RemoteControlCompartment___scalar_deleting_destructor_(RemoteControlCompartment *this,uint param_1)

{
  ModuleCompartment_ModuleCompartment__o2((ModuleCompartment *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x118);
  }
  return this;
}


//==== 000059b470 0059b470__scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 0059b470 name=`scalar_deleting_destructor' conv=__thiscall body=89

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall AmmoCompartment::`scalar deleting destructor'(unsigned int) */

void * __thiscall AmmoCompartment___scalar_deleting_destructor_(AmmoCompartment *this,uint param_1)

{
  pmf_c80f96c6 *ppVar1;
  
  ppVar1 = (this->AmmoCompartmentMemoizationHandlerInstance).ResetFunctions.Data;
  (this->AmmoCompartmentMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 =
       (int)((void *)(0x009194a4u));
  if (ppVar1 != (pmf_c80f96c6 *)0x0) {
    operator_delete__(ppVar1);
  }
  (this->AmmoCompartmentMemoizationHandlerInstance).ResetFunctions.Data = (pmf_c80f96c6 *)0x0;
  (this->AmmoCompartmentMemoizationHandlerInstance).ResetFunctions._pad_0x0_0 =
       (int)((void *)(0x00919488u));
  ModuleCompartment_ModuleCompartment__o2((ModuleCompartment *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x130);
  }
  return this;
}


//==== 00005bb490 005bb490__scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 005bb490 name=`scalar_deleting_destructor' conv=__thiscall body=38

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall NuclearPayloadCompartment::`scalar deleting
   destructor'(unsigned int) */

void * __thiscall
NuclearPayloadCompartment___scalar_deleting_destructor_(NuclearPayloadCompartment *this,uint param_1)

{
  ModuleCompartment_ModuleCompartment__o2((ModuleCompartment *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x120);
  }
  return this;
}


//==== 00005ced50 005ced50_GetTotalRadiation_W ====
// decompiled by BatchDecomp @ 005ced50 name=GetTotalRadiation_W conv=__thiscall body=51

/* public: double __thiscall Module__GetTotalRadiation_W(void)const  */

double __thiscall Module__GetTotalRadiation_W(Module *this)

{
  undefined4 stack0xfffffffc;
  float10 extraout_ST0;
  undefined1 local_20[24];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  (**(code **)(*(int *)this + 0xcc))(local_20);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00005cee70 005cee70_InnerSortFunction ====
// decompiled by BatchDecomp @ 005cee70 name=InnerSortFunction conv=__thiscall body=79

/* public: virtual bool __thiscall Module__InnerSortFunction(class Module const *,class Module const
   *)const  */

bool __thiscall Module__InnerSortFunction(Module *this,Module *param_1,Module *param_2)

{
  Type TVar1;
  char *pcVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  
  if (param_2->_pad_0x0_0 < 1) {
    pcVar2 = "";
  }
  else {
    pcVar2 = (char *)param_2->_pad_0x0_0;
  }
  if (0 < param_1->_pad_0x0_0) {
    TVar1 = util__InnerSortFunction((char *)param_1->_pad_0x0_0,pcVar2);
    return CONCAT31(extraout_var,TVar1) == 2;
  }
  TVar1 = util__InnerSortFunction("",pcVar2);
  return CONCAT31(extraout_var_00,TVar1) == 2;
}


//==== 00005d7b60 005d7b60_Instantiate ====
// decompiled by BatchDecomp @ 005d7b60 name=Instantiate conv=__thiscall body=110

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::SharedPtr<struct ModuleCompartment> __thiscall
   SpacerModule__Instantiate(void)const  */

int * __thiscall SpacerModule__Instantiate(SpacerModule *this)

{
  ModuleCompartment *this_00;
  void *pvVar1;
  ReferenceControllerRegistry *this_01;
  ReferenceController *this_02;
  int *in_stack_00000004;
  void *pvVar2;
  
  this_00 = (ModuleCompartment *)operator_new(0x108);
  if (this_00 == (ModuleCompartment *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = (void *)ModuleCompartment__ModuleCompartment(this_00);
    if (pvVar1 != (void *)0x0) goto LAB_005d7ba6;
  }
  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl",
                  0xd4,"NewPointer",(char *)0x0);
  DebugBreak();
LAB_005d7ba6:
  pvVar2 = pvVar1;
  this_01 = util__ReferenceControllerRegistry__Get();
  this_02 = util__ReferenceControllerRegistry__Register(this_01,pvVar2);
  *in_stack_00000004 = (int)pvVar1;
  in_stack_00000004[1] = (int)this_02;
  if (this_02 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_02);
  }
  return in_stack_00000004;
}


//==== 00005d7fb0 005d7fb0__scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 005d7fb0 name=`scalar_deleting_destructor' conv=__thiscall body=38

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall CargoCompartment::`scalar deleting destructor'(unsigned int) */

void * __thiscall
CargoCompartment___scalar_deleting_destructor_(CargoCompartment *this,uint param_1)

{
  ModuleCompartment_ModuleCompartment__o2((ModuleCompartment *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x108);
  }
  return this;
}


//==== 00005d7fe0 005d7fe0__scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 005d7fe0 name=`scalar_deleting_destructor' conv=__thiscall body=38

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall RadiationShieldCompartment::`scalar deleting
   destructor'(unsigned int) */

void * __thiscall
RadiationShieldCompartment___scalar_deleting_destructor_(RadiationShieldCompartment *this,uint param_1)

{
  ModuleCompartment_ModuleCompartment__o2((ModuleCompartment *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x110);
  }
  return this;
}


//==== 00005eab80 005eab80__scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 005eab80 name=`scalar_deleting_destructor' conv=__thiscall body=51

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall RefuelerCompartment::`scalar deleting destructor'(unsigned int)
    */

void * __thiscall
RefuelerCompartment___scalar_deleting_destructor_(RefuelerCompartment *this,uint param_1)

{
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &this->CachedReactionMassCompartments);
  ModuleCompartment_ModuleCompartment__o2((ModuleCompartment *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x128);
  }
  return this;
}


//==== 000061fa30 0061fa30__scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 0061fa30 name=`scalar_deleting_destructor' conv=__thiscall body=66

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall RailgunCompartment::`scalar deleting destructor'(unsigned int)
    */

void * __thiscall
RailgunCompartment___scalar_deleting_destructor_(RailgunCompartment *this,uint param_1)

{
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&this->_pad_0x0_0);
  if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this->_pad_0x0_0);
  }
  ModuleCompartment_ModuleCompartment__o2((ModuleCompartment *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x208);
  }
  return this;
}


//==== 000065b340 0065b340__scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 0065b340 name=`scalar_deleting_destructor' conv=__thiscall body=77

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall StandaloneLaserMountCompartment::`scalar deleting
   destructor'(unsigned int) */

void * __thiscall
StandaloneLaserMountCompartment___scalar_deleting_destructor_(StandaloneLaserMountCompartment *this,uint param_1)

{
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)(this + 1));
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&this->_pad_0x0_0);
  if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this->_pad_0x0_0);
  }
  ModuleCompartment_ModuleCompartment__o2((ModuleCompartment *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x218);
  }
  return this;
}


//==== 000066a500 0066a500_GetAmmoMass_kg ====
// decompiled by BatchDecomp @ 0066a500 name=GetAmmoMass_kg conv=__thiscall body=116

/* public: double __thiscall AmmoBaySubModule__GetAmmoMass_kg(void)const  */

double __thiscall AmmoBaySubModule__GetAmmoMass_kg(AmmoBaySubModule *this)

{
  undefined4 stack0xfffffffc;
  Darray_L_MaterialComposition_G_ *pDVar1;
  int iVar2;
  float10 extraout_ST0;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pDVar1 = &(this->CachedInfo).Composition;
  local_c = 0;
  iVar2 = (**(code **)((this->CachedInfo).Composition._pad_0x0_0 + 0xc))();
  if (local_c < iVar2) {
    do {
      (**(code **)*(int *)pDVar1)(&local_c);
      local_c = local_c + 1;
      iVar2 = (**(code **)(*(int *)pDVar1 + 0xc))();
    } while (local_c < iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 0000690690 00690690_PrintDeltaV ====
// decompiled by BatchDecomp @ 00690690 name=PrintDeltaV conv=__cdecl body=47

/* class util::Str<char> __cdecl PrintDeltaV(double) */

Str_L_char_G_ * __cdecl PrintDeltaV(Str_L_char_G_ *__return_storage_ptr__,double param_1)

{
  int unaff_EBP;
  undefined4 in_stack_00000008;
  
  PrintUnits(__return_storage_ptr__,
             (double)CONCAT44("m/s",(int)((ulonglong)
                                          ((double)CONCAT44(((slice_view *)&param_1)->_0_4_,in_stack_00000008) *
                                          /*408f400000000000*/1000.0) >> 0x20)),(char *)0x1,unaff_EBP);
  return __return_storage_ptr__;
}


//==== 00006cebe0 006cebe0_PlaySelectedLevel ====
// decompiled by BatchDecomp @ 006cebe0 name=PlaySelectedLevel conv=__thiscall body=104

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall BriefingsHandler__PlaySelectedLevel(void) */

void __thiscall BriefingsHandler__PlaySelectedLevel(BriefingsHandler *this)

{
  Delegate_L_void_G_ DVar1;
  Delegate_L_void_G_ DVar2;
  Interface *this_00;
  GameManager *pGVar3;
  StrategicManager *this_01;
  HWND unaff_EDI;
  void *pvVar4;
  _func___cdecl_void_void_ptr *p_Var5;
  void *pvVar6;
  StrategicManager *pSVar7;
  bool bVar8;
  _func___cdecl_void_void_ptr *p_Var9;
  
  p_Var9 = (_func___cdecl_void_void_ptr *)0x0;
  pvVar6 = (void *)0x0;
  p_Var5 = (_func___cdecl_void_void_ptr *)0x0;
  pvVar4 = (void *)0x0;
  this_00 = Manager__GetInterfacer((Manager *)this->Parent);
  DVar1.CallbackFunction = p_Var5;
  DVar1.Callee = pvVar4;
  DVar2.CallbackFunction = p_Var9;
  DVar2.Callee = pvVar6;
  Interface__NewScreen(this_00,DVar1,DVar2);
  pGVar3 = (GameManager *)Manager__GetParent(unaff_EDI);
  this_01 = GameManager__PlaySelectedLevel(pGVar3);
  bVar8 = true;
  pSVar7 = this_01;
  pGVar3 = (GameManager *)Manager__GetParent((HWND)this_01);
  GameManager__SwitchToSession(pGVar3,(Manager *)pSVar7,bVar8);
  StrategicManager__StartLevel(this_01,this->SelectedLevel);
  this->CanAffectCamera = false;
  this->SelectedSubject = ~LevelPresets;
  this->SelectedData = (Reflectable *)0x0;
  this->SelectedCraft = (CraftBlueprint *)0x0;
  this->SelectedLevel = (Level *)0x0;
  return;
}


//==== 00006ecf50 006ecf50__FixedOrbit ====
// decompiled by BatchDecomp @ 006ecf50 name=~FixedOrbit conv=__thiscall body=83

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: __thiscall FixedOrbit__dtor(void) */

void __thiscall FixedOrbit__dtor(FixedOrbit *this)

{
  int *piVar1;
  void *pvVar2;
  ReferenceController *this_00;
  
  pvVar2 = (void *)(this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Capacity;
  (this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Size =
       (int)((void *)(0x009194a4u));
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  (this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Capacity = 0;
  (this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Size =
       (int)((void *)(0x00919488u));
  (this->Elements)._pad_0x0_0 = (int)((void *)(0x00919980u));
  pvVar2 = *(void **)(char *)&(this->Elements) + 0xc;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
    *(undefined4 *)((char *)&(this->Elements) + 0xc) = 0;
  }
  this_00 = (ReferenceController *)(this->Elements)._pad_0x0_0;
  if (this_00 == (ReferenceController *)0x0) {
    return;
  }
  piVar1 = &this_00->WeakReferenceCount;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.cpp"
                    ,0x15,"WeakReferenceCount >= 0",(char *)0x0);
    DebugBreak();
  }
  util__ReferenceController__CheckForWeakRelease(this_00);
  return;
}


//==== 00006ed370 006ed370_operator_ ====
#undef t /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 006ed370 name=operator= conv=__thiscall body=105

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct WorldObject & __thiscall WorldObject__operator_(struct WorldObject const &) */

WorldObject * __thiscall WorldObject__operator_(WorldObject *this,WorldObject *param_1)

{
  ReferenceController *this_00;
  ReferenceController *this_01;
  
  this_00 = (this->Object).Controller;
  (this->Object).Pointer = (param_1->Object).Pointer;
  this_01 = (param_1->Object).Controller;
  (this->Object).Controller = this_01;
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_01);
  }
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  this->LPointID = param_1->LPointID;
  ItineraryNode__operator_(&(this->Node).LastNode,&(param_1->Node).LastNode);
  ItineraryNode__operator_(&(this->Node).NextNode,&(param_1->Node).NextNode);
  (this->Node).t = (param_1->Node).t;
  return this;
}


//==== 00006f6370 006f6370_GetLibrationOrbit ====
// decompiled by BatchDecomp @ 006f6370 name=GetLibrationOrbit conv=__thiscall body=28

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::Maybe<struct LibrationOrbit> __thiscall
   OrbiterInterface__GetLibrationOrbit(void)const  */

LibrationOrbit * __thiscall OrbiterInterface__GetLibrationOrbit(OrbiterInterface *this)

{
  LibrationOrbit *in_stack_00000004;
  
  LibrationOrbit__LibrationOrbit(in_stack_00000004);
  *(undefined1 *)
   &in_stack_00000004[1].LibrationOrbitMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 0;
  return in_stack_00000004;
}


//==== 00006f7b70 006f7b70_IsAFleetSelected ====
// decompiled by BatchDecomp @ 006f7b70 name=IsAFleetSelected conv=__thiscall body=119

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall LevelEditor__IsAFleetSelected(void)const  */

bool __thiscall LevelEditor__IsAFleetSelected(LevelEditor *this)

{
  WorldObject *this_00;
  bool bVar1;
  bool bVar2;
  Actor *pAVar3;
  ReferenceController *local_8;
  
  this_00 = (WorldObject *)(this + 0x80);
  local_8 = (ReferenceController *)0x0;
  bVar1 = WorldObject__IsValid(this_00);
  if (bVar1) {
    bVar1 = WorldObject__IsLevelEditorBody(this_00);
    if (!bVar1) goto LAB_006f7bc8;
    pAVar3 = (this_00->Object).Pointer;
    local_8 = *(ReferenceController **)(this + 0x84);
    if (local_8 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(local_8);
      bVar1 = util__ReferenceController__IsDataStillValid(local_8);
      if (!bVar1) {
        pAVar3 = (Actor *)0x0;
      }
    }
    bVar1 = true;
    if (pAVar3[3]._pad_0x0_0 != 0) {
      bVar2 = true;
      goto LAB_006f7bd0;
    }
  }
  else {
LAB_006f7bc8:
    bVar1 = false;
  }
  bVar2 = false;
LAB_006f7bd0:
  if ((local_8 != (ReferenceController *)0x0) && (bVar1)) {
    util__ReferenceController__ReleaseWeakReference(local_8);
  }
  return bVar2;
}


//==== 00006f8620 006f8620_RebuildCurrentLevel ====
// decompiled by BatchDecomp @ 006f8620 name=RebuildCurrentLevel conv=__thiscall body=109

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: void __thiscall ScenarioEditor__RebuildCurrentLevel(void) */

void __thiscall ScenarioEditor__RebuildCurrentLevel(ScenarioEditor *this)

{
  Reflectable *this_00;
  Level *this_01;
  bool bVar1;
  MetagameManager *this_02;
  Reflectable *pRVar2;
  Level *this_03;
  
  CorrectCurrentLevelValidity(this);
  RegeneratePropertyUI(this);
  this_02 = MainManager__GetMetagame(*(MainManager **)this);
  MetagameManager__SaveAllDesigns(this_02);
  MainManager__PlayTitleMusic(*(MainManager **)this);
  UpdateListBoxUI(this);
  this_00 = *(Reflectable **)(this + 100);
  if (this_00 != (Reflectable *)0x0) {
    bVar1 = Reflectable__RebuildCurrentLevel(this_00);
    pRVar2 = (Reflectable *)0x0;
    if (bVar1) {
      pRVar2 = this_00;
    }
    if (pRVar2 != (Reflectable *)0x0) {
      this_01 = *(Level **)(this + 100);
      if (this_01 != (Level *)0x0) {
        bVar1 = Reflectable__RebuildCurrentLevel((Reflectable *)this_01);
        this_03 = (Level *)0x0;
        if (bVar1) {
          this_03 = this_01;
        }
        Level__CacheNecessaryLimits(this_03);
        return;
      }
      Level__CacheNecessaryLimits((Level *)0x0);
      return;
    }
  }
  return;
}


//==== 00007040f0 007040f0_HasBeenDamaged ====
// decompiled by BatchDecomp @ 007040f0 name=HasBeenDamaged conv=__thiscall body=4

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall CapitalShipComponent__HasBeenDamaged(void)const  */

bool __thiscall CapitalShipComponent__HasBeenDamaged(CapitalShipComponent *this)

{
  return this->IsUnscathed;
}


//==== 000070e8c0 0070e8c0_GetAbsoluteOrbitalState ====
// decompiled by BatchDecomp @ 0070e8c0 name=GetAbsoluteOrbitalState conv=__thiscall body=84

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct util::PhysicalState<struct util::Vec3<double> > __thiscall
   LibrationOrbit__GetAbsoluteOrbitalState(double)const  */

undefined4 __thiscall LibrationOrbit__GetAbsoluteOrbitalState(LibrationOrbit *this,double param_1)

{
  LibrationOrbit_GetActualOrbit_Memoize(this);
  if ((char)this[1]._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  FixedOrbit__GetAbsoluteOrbitalState(&(this->GetActualOrbit_MemoizedValue).Data,param_1);
  return ((slice_view *)&param_1)->_0_4_;
}


//==== 000070f2a0 0070f2a0_GetAbsoluteVelocityToCircularlyOrbit_km__s ====
// decompiled by BatchDecomp @ 0070f2a0 name=GetAbsoluteVelocityToCircularlyOrbit_km__s conv=__thiscall body=87

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct Vec3_L_double_G_ __thiscall
   FixedOrbit__GetAbsoluteVelocityToCircularlyOrbit_km__s(struct util::PhysicalState<struct
   util::Vec3<double> >,double)const  */

Vec3_L_double_G_ * __thiscall
FixedOrbit__GetAbsoluteVelocityToCircularlyOrbit_km__s(FixedOrbit *this,Vec3_L_double_G_ *__return_storage_ptr__,undefined4 param_3,
          undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,
          undefined4 param_8,undefined4 param_9,undefined4 param_10,undefined4 param_11,
          undefined4 param_12,undefined4 param_13,undefined4 param_14,undefined8 param_15)

{
  ReferenceController *this_00;
  bool bVar1;
  
  this_00 = (ReferenceController *)(this->Elements)._pad_0x0_0;
  if (this_00 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__IsDataStillValid(this_00);
    if (!bVar1) {
      (this->OrbitedBody).Controller = (ReferenceController *)0x0;
    }
  }
  CelestialObject__GetAbsoluteVelocityToOrbit_km__s((CelestialObject *)(this->OrbitedBody).Controller,__return_storage_ptr__,param_3,
             param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,param_13,
             param_14,param_15);
  return __return_storage_ptr__;
}


//==== 0000712190 00712190_GetStateRelativeToOrbit ====
// decompiled by BatchDecomp @ 00712190 name=GetStateRelativeToOrbit conv=__thiscall body=87

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct util::PhysicalState<struct util::Vec3<double> > __thiscall
   FixedOrbit__GetStateRelativeToOrbit(struct util::PhysicalState<struct util::Vec3<double>
   >,double)const  */

undefined4 __thiscall
FixedOrbit__GetStateRelativeToOrbit(FixedOrbit *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
          undefined4 param_13,undefined4 param_14,undefined8 param_15)

{
  ReferenceController *this_00;
  bool bVar1;
  
  this_00 = (ReferenceController *)(this->Elements)._pad_0x0_0;
  if (this_00 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__IsDataStillValid(this_00);
    if (!bVar1) {
      (this->OrbitedBody).Controller = (ReferenceController *)0x0;
    }
  }
  CelestialObject__GetStateRelativeToThis((CelestialObject *)(this->OrbitedBody).Controller,param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,param_9,param_10,param_11,param_12,param_13,param_14,param_15);
  return param_2;
}


//==== 0000726230 00726230_GetLPointTagName ====
// decompiled by BatchDecomp @ 00726230 name=GetLPointTagName conv=__thiscall body=49

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Str<char> __thiscall CelestialObject__GetLPointTagName(int)const  */

Str_L_char_G_ * __thiscall
CelestialObject__GetLPointTagName(CelestialObject *this,Str_L_char_G_ *__return_storage_ptr__,int param_1)

{
  undefined1 *puVar1;
  
  if (this->BodyTemplate->_pad_0x0_0 < 1) {
    puVar1 = &cde_l2_0091985b_NullString;
  }
  else {
    puVar1 = (undefined1 *)this->BodyTemplate->_pad_0x0_0;
  }
  util__Printf(__return_storage_ptr__,"%s L%i",puVar1,param_1);
  return __return_storage_ptr__;
}


//==== 0000727eb0 00727eb0_GetTagName ====
// decompiled by BatchDecomp @ 00727eb0 name=GetTagName conv=__thiscall body=25

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::Str<char> __thiscall CelestialObject__GetTagName(void)const  */

Str_L_char_G_ * __thiscall
CelestialObject__GetTagName(CelestialObject *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,(Str_L_char_G_ *)(*(int *)&this->IsOrigin_MemoizedValue + 4));
  return __return_storage_ptr__;
}


//==== 000072cd60 0072cd60_operator__ ====
// decompiled by BatchDecomp @ 0072cd60 name=operator[] conv=__thiscall body=69

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual struct ItineraryNode & __thiscall util::Darray<struct
   ItineraryNode>::operator[](int const &)const  */

ItineraryNode * __thiscall
util__Darray_struct_ItineraryNode___operator__(Darray_L_struct_ItineraryNode_G_ *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 < 0) || (*(int *)(this + 8) <= iVar1)) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0xa0,
              "Index >= 0 && Index < Size",(char *)0x0);
    DebugBreak();
    iVar1 = *param_1;
  }
  return (ItineraryNode *)(iVar1 * 0x150 + *(int *)(this + 4));
}


//==== 000072d800 0072d800__scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 0072d800 name=`scalar_deleting_destructor' conv=__thiscall body=36

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall BalloonPopupLocationPayload::`scalar deleting
   destructor'(unsigned int) */

void * __thiscall
BalloonPopupLocationPayload___scalar_deleting_destructor_(BalloonPopupLocationPayload *this,uint param_1)

{
  this->_pad_0x0_0 = (int)((void *)(0x00938a68u));
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x28);
  }
  return this;
}


//==== 000072f6a0 0072f6a0_Disband ====
// decompiled by BatchDecomp @ 0072f6a0 name=Disband conv=__thiscall body=85

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Fleet__Disband(void) */

void __thiscall Fleet__Disband(Fleet *this)

{
  undefined4 stack0xfffffff4;
  bool bVar1;
  int iStack_8;
  
  iStack_8 = 0x72f6b2;
  (**(code **)(*(int *)&this[1].Location.OrbitParameters.Data.
                        GetEccentricityPeriapsisRoot_MemoizedValue.IsValidData + 0x10))();
  iStack_8 = 0x72f6b9;
  (**(code **)(*(int *)this + 0x40))();
  iStack_8 = 0x72f6c1;
  bVar1 = Manager__IsCurrentlyTheActiveManager((Manager *)this->ParentStrategic);
  if (bVar1) {
util__UnAlly((SpacecraftComponent *)&stack0xfffffff4);
    StrategicManager__OnFleetChanged(this->ParentStrategic);
  }
util__UnAlly((SpacecraftComponent *)&stack0xfffffff4);
  StrategicManager__KillFleet(this->ParentStrategic);
  return;
}


//==== 000072fea0 0072fea0_GetAllShips ====
// decompiled by BatchDecomp @ 0072fea0 name=GetAllShips conv=__thiscall body=25

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Darray<class util::SharedPtr<class Body> > __thiscall
   Fleet__GetAllShips(void)const  */

Darray_L_class_util__SharedPtr_L_class_Body_G___G_ * __thiscall Fleet__GetAllShips(Fleet *this)

{
  Darray_L_class_util__SharedPtr_L_class_Body_G___G_ *in_stack_00000004;
  
  util__Darray_class_util__SharedPtr_class_Body_____Darray_class_util__SharedPtr_class_Body(in_stack_00000004,
             (Darray_L_class_util__SharedPtr_L_class_Body_G___G_ *)
             &this[1].Location.OrbitParameters.Data.GetEccentricityPeriapsisRoot_MemoizedValue.
              IsValidData);
  return in_stack_00000004;
}


//==== 00007342a0 007342a0_OnChangedPositioning ====
// decompiled by BatchDecomp @ 007342a0 name=OnChangedPositioning conv=__thiscall body=40

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Fleet__OnChangedPositioning(void) */

void __thiscall Fleet__OnChangedPositioning(Fleet *this)

{
  undefined4 stack0xfffffff4;
  bool bVar1;
  int iStack_8;
  
  iStack_8 = 0x7342ab;
  bVar1 = Manager__IsCurrentlyTheActiveManager((Manager *)this->ParentStrategic);
  if (bVar1) {
util__UnAlly((SpacecraftComponent *)&stack0xfffffff4);
    StrategicManager__OnFleetChanged(this->ParentStrategic);
  }
  return;
}


//==== 0000736a80 00736a80_BalloonPopupLocationPayload ====
// decompiled by BatchDecomp @ 00736a80 name=BalloonPopupLocationPayload conv=__thiscall body=49

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: __thiscall BalloonPopupLocationPayload__BalloonPopupLocationPayload(class
   StrategicManager *,struct Vec3_L_double_G_,double) */

BalloonPopupLocationPayload * __thiscall
BalloonPopupLocationPayload__BalloonPopupLocationPayload(BalloonPopupLocationPayload *this,StrategicManager *param_1,Vec3_L_double_G_ param_2,
          double param_3)

{
  undefined4 in_stack_00000008;
  
  this->Parent = param_1;
  *(undefined4 *)&(this->Position).X = in_stack_00000008;
  *(undefined4 *)((int)&(this->Position).X + 4) = ((slice_view *)&param_2.X)->_0_4_;
  *(undefined4 *)&(this->Position).Y = ((slice_view *)&param_2.X)->_4_4_;
  *(undefined4 *)((int)&(this->Position).Y + 4) = ((slice_view *)&param_2.Y)->_0_4_;
  this->_pad_0x0_0 = (int)((void *)(0x00938b10u));
  (this->Position).Z = (double)((slice_view *)&param_2)->_12_8_;
  this->TimeSinceJ2000_s = (double)CONCAT44(((slice_view *)&param_3)->_0_4_,((slice_view *)&param_2.Z)->_4_4_);
  return this;
}


//==== 0000737980 00737980__scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 00737980 name=`scalar_deleting_destructor' conv=__thiscall body=111

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall BalloonPopupNodePayload::`scalar deleting destructor'(unsigned
   int) */

void * __thiscall
BalloonPopupNodePayload___scalar_deleting_destructor_(BalloonPopupNodePayload *this,uint param_1)

{
  ReferenceController *pRVar1;
  
  pRVar1 = (this->Node).CachedNearestOrbiter.Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  pRVar1 = (this->Node).CachedNearestFleet.Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  pRVar1 = (this->Node).CachedNearestBody.Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  pRVar1 = (this->Node).CachedGravityBody.Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  pRVar1 = (this->Node).Parent.Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  this->_pad_0x0_0 = (int)((void *)(0x00938a68u));
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x158);
  }
  return this;
}


//==== 0000751090 00751090_GetOurStateAt ====
// decompiled by BatchDecomp @ 00751090 name=GetOurStateAt conv=__thiscall body=61

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct util::PhysicalState<struct util::Vec3<double> > __thiscall
   OrbitalInterception__GetOurStateAt(double)const  */

undefined4 __thiscall OrbitalInterception__GetOurStateAt(OrbitalInterception *this,double param_1)

{
  ReferenceController *this_00;
  bool bVar1;
  
  this_00 = (this->OurFleet).Controller;
  if (this_00 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__IsDataStillValid(this_00);
    if (!bVar1) {
      (this->OurFleet).Pointer = (Fleet *)0x0;
    }
  }
  Fleet__GetStateAt((this->OurFleet).Pointer,param_1);
  return ((slice_view *)&param_1)->_0_4_;
}


//==== 000075ad80 0075ad80_PendingBattle ====
// decompiled by BatchDecomp @ 0075ad80 name=PendingBattle conv=__thiscall body=98

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: __thiscall PendingBattle__PendingBattle(class util::WeakPtr<class Fleet>,class
   util::WeakPtr<class Fleet>,double) */

PendingBattle * __thiscall
PendingBattle__PendingBattle(PendingBattle *this,Fleet *param_2,ReferenceController *param_3,Fleet *param_4,
          ReferenceController *param_5,double param_6)

{
  (this->Attacker).Pointer = param_2;
  (this->Attacker).Controller = param_3;
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_3);
  }
  (this->Defender).Pointer = param_4;
  (this->Defender).Controller = param_5;
  if (param_5 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_5);
  }
  this->TimeSinceJ2000_s = param_6;
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  if (param_5 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_5);
  }
  return this;
}


//==== 000075ba40 0075ba40_operator_ ====
// decompiled by BatchDecomp @ 0075ba40 name=operator= conv=__thiscall body=98

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct PendingBattle & __thiscall PendingBattle__operator_(struct PendingBattle const &)
    */

PendingBattle * __thiscall PendingBattle__operator_(PendingBattle *this,PendingBattle *param_1)

{
  ReferenceController *pRVar1;
  ReferenceController *pRVar2;
  
  pRVar1 = (this->Attacker).Controller;
  (this->Attacker).Pointer = (param_1->Attacker).Pointer;
  pRVar2 = (param_1->Attacker).Controller;
  (this->Attacker).Controller = pRVar2;
  if (pRVar2 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar2);
  }
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  pRVar1 = (this->Defender).Controller;
  (this->Defender).Pointer = (param_1->Defender).Pointer;
  pRVar2 = (param_1->Defender).Controller;
  (this->Defender).Controller = pRVar2;
  if (pRVar2 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar2);
  }
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  this->TimeSinceJ2000_s = param_1->TimeSinceJ2000_s;
  return this;
}


//==== 000075c060 0075c060_operator__ ====
// decompiled by BatchDecomp @ 0075c060 name=operator[] conv=__thiscall body=69

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual struct WorldObject & __thiscall util::Darray<struct WorldObject>::operator[](int
   const &)const  */

WorldObject * __thiscall
FUN_0075c060(Darray_L_struct_WorldObject_G_ *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 < 0) || (*(int *)(this + 8) <= iVar1)) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0xa0,
              "Index >= 0 && Index < Size",(char *)0x0);
    DebugBreak();
    iVar1 = *param_1;
  }
  return (WorldObject *)(iVar1 * 0x2b8 + *(int *)(this + 4));
}


//==== 0000771640 00771640_WorldObject ====
#undef t /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 00771640 name=WorldObject conv=__thiscall body=91

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: __thiscall WorldObject__WorldObject(struct WorldObject const &) */

WorldObject * __thiscall WorldObject__WorldObject(WorldObject *this,WorldObject *param_1)

{
  ReferenceController *this_00;
  
  (this->Object).Pointer = (param_1->Object).Pointer;
  this_00 = (param_1->Object).Controller;
  (this->Object).Controller = this_00;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  this->LPointID = param_1->LPointID;
  ItineraryNode__ItineraryNode(&(this->Node).LastNode,&(param_1->Node).LastNode);
  ItineraryNode__ItineraryNode(&(this->Node).NextNode,&(param_1->Node).NextNode);
  (this->Node).t = (param_1->Node).t;
  return this;
}


//==== 00007716d0 007716d0__ActorDropdownAction ====
// decompiled by BatchDecomp @ 007716d0 name=~ActorDropdownAction conv=__thiscall body=39

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: __thiscall ActorDropdownAction__dtor(void) */

void __thiscall ActorDropdownAction__dtor(ActorDropdownAction *this)

{
  int *piVar1;
  ReferenceController *pRVar2;
  
  pRVar2 = (this->AdditionalFleet).Controller;
  if (pRVar2 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar2);
  }
  NodeMouseOver__dtor(&(this->Data).Node);
  pRVar2 = (this->Data).Object.Controller;
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
  util__ReferenceController__CheckForWeakRelease(pRVar2);
  return;
}


//==== 00007718b0 007718b0_operator__ ====
// decompiled by BatchDecomp @ 007718b0 name=operator[] conv=__thiscall body=69

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual struct ActorDropdownAction & __thiscall util::Darray<struct
   ActorDropdownAction>::operator[](int const &)const  */

ActorDropdownAction * __thiscall
util__Darray_struct_ActorDropdownAction___operator__(Darray_L_struct_ActorDropdownAction_G_ *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 < 0) || (*(int *)(this + 8) <= iVar1)) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0xa0,
              "Index >= 0 && Index < Size",(char *)0x0);
    DebugBreak();
    iVar1 = *param_1;
  }
  return (ActorDropdownAction *)(iVar1 * 0x2c8 + *(int *)(this + 4));
}


//==== 00007726a0 007726a0__scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 007726a0 name=`scalar_deleting_destructor' conv=__thiscall body=66

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall ActorDropButton::`scalar deleting destructor'(unsigned int) */

void * __thiscall ActorDropButton___scalar_deleting_destructor_(ActorDropButton *this,uint param_1)

{
  ReferenceController *this_00;
  
  util_Darray_struct_WorldObject_Darray_struct_WorldObject__o2((Darray_L_struct_WorldObject_G_ *)&(this->ListPopulator).Value);
  this_00 = (this->Dropdown).Popup.Controller;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  UIButton___UIButton((UIButton *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x1e8);
  }
  return this;
}


//==== 0000772b70 00772b70_AsLevelEditorBody ====
// decompiled by BatchDecomp @ 00772b70 name=AsLevelEditorBody conv=__thiscall body=74

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::WeakPtr<class LevelEditorBody> __thiscall
   WorldObject__AsLevelEditorBody(void)const  */

undefined4 * __thiscall WorldObject__AsLevelEditorBody(WorldObject *this)

{
  ReferenceController *this_00;
  bool bVar1;
  undefined4 *in_stack_00000004;
  
  bVar1 = IsLevelEditorBody(this);
  if (!bVar1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\ui\\dropdownui.cpp",0x38,
                    "IsLevelEditorBody()",(char *)0x0);
    DebugBreak();
  }
  *in_stack_00000004 = (this->Object).Pointer;
  this_00 = (this->Object).Controller;
  in_stack_00000004[1] = this_00;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  return in_stack_00000004;
}


//==== 0000778900 00778900_IsValid ====
// decompiled by BatchDecomp @ 00778900 name=IsValid conv=__thiscall body=59

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool const __thiscall WorldObject__IsValid(void)const  */

bool __thiscall WorldObject__IsValid(WorldObject *this)

{
  ReferenceController *this_00;
  bool bVar1;
  
  if ((((this->Object).Pointer != (Actor *)0x0) &&
      (this_00 = (this->Object).Controller, this_00 != (ReferenceController *)0x0)) &&
     (bVar1 = util__ReferenceController__IsDataStillValid(this_00), bVar1)) {
    return true;
  }
  bVar1 = ItineraryNode__IsValid(&(this->Node).LastNode);
  if ((bVar1) && (bVar1 = ItineraryNode__IsValid(&(this->Node).NextNode), bVar1)) {
    return true;
  }
  return false;
}


//==== 00007921d0 007921d0_GetMouseOverNode_Clear ====
#undef t /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 007921d0 name=GetMouseOverNode_Clear conv=__thiscall body=114

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall ItineraryNodeUI__GetMouseOverNode_Clear(void)const  */

void __thiscall ItineraryNodeUI__GetMouseOverNode_Clear(ItineraryNodeUI *this)

{
  NodeMouseOver local_2ac;
  
  ItineraryNode__ItineraryNode(&local_2ac.LastNode);
  ItineraryNode__ItineraryNode(&local_2ac.NextNode);
  local_2ac.t = 0.0;
  ItineraryNode__operator_((ItineraryNode *)&this->GetMouseOverNode_MemoizedValue,&local_2ac.LastNode);
  ItineraryNode__operator_(&(this->GetMouseOverNode_MemoizedValue).Data.NextNode,&local_2ac.NextNode);
  (this->GetMouseOverNode_MemoizedValue).Data.t = local_2ac.t;
  NodeMouseOver__dtor(&local_2ac);
  (this->GetMouseOverNode_MemoizedValue).IsValidData = false;
  return;
}


//==== 00007a09a0 007a09a0_GetLocation ====
// decompiled by BatchDecomp @ 007a09a0 name=GetLocation conv=__thiscall body=82

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::Maybe<struct util::Vec3<double> > __thiscall
   BalloonPopupLocationPayload__GetLocation(void)const  */

undefined4 * __thiscall BalloonPopupLocationPayload__GetLocation(BalloonPopupLocationPayload *this)

{
  undefined4 stack0xffffffe4;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Vec3_L_double_G_ *pVVar5;
  undefined4 *in_stack_00000004;
  undefined4 in_stack_ffffffe4;
  
  pVVar5 = StrategicManager__GetReferenceShiftedPosition_km(this->Parent,(Vec3_L_double_G_ *)&stack0xffffffe4,
                      *(Vec3_L_double_G_ *)((int)&(this->Position).X + 4),
                      (double)CONCAT44(in_stack_ffffffe4,
                                       (int)((ulonglong)this->TimeSinceJ2000_s >> 0x20)));
  uVar1 = *(undefined4 *)&pVVar5->X;
  uVar2 = *(undefined4 *)((int)&pVVar5->X + 4);
  uVar3 = *(undefined4 *)&pVVar5->Y;
  uVar4 = *(undefined4 *)((int)&pVVar5->Y + 4);
  *(undefined1 *)(in_stack_00000004 + 6) = 1;
  *in_stack_00000004 = uVar1;
  in_stack_00000004[1] = uVar2;
  in_stack_00000004[2] = uVar3;
  in_stack_00000004[3] = uVar4;
  *(double *)(in_stack_00000004 + 4) = pVVar5->Z;
  return in_stack_00000004;
}


//==== 00007a91a0 007a91a0_operator_ ====
#undef t /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 007a91a0 name=operator= conv=__thiscall body=58

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct NodeMouseOver & __thiscall NodeMouseOver__operator_(struct NodeMouseOver const &)
    */

NodeMouseOver * __thiscall NodeMouseOver__operator_(NodeMouseOver *this,NodeMouseOver *param_1)

{
  ItineraryNode__operator_(&this->LastNode,&param_1->LastNode);
  ItineraryNode__operator_(&this->NextNode,&param_1->NextNode);
  this->t = param_1->t;
  return this;
}


//==== 00007a9620 007a9620__scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 007a9620 name=`scalar_deleting_destructor' conv=__thiscall body=55

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall CelestialObjectUIButton::`scalar deleting destructor'(unsigned
   int) */

void * __thiscall
CelestialObjectUIButton___scalar_deleting_destructor_(CelestialObjectUIButton *this,uint param_1)

{
  ReferenceController *this_00;
  
  this_00 = (this->Object).Controller;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  GhostedUIButton___GhostedUIButton((GhostedUIButton *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x1e8);
  }
  return this;
}


//==== 00007a9690 007a9690__scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 007a9690 name=`scalar_deleting_destructor' conv=__thiscall body=55

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall LagrangePointUIButton::`scalar deleting destructor'(unsigned
   int) */

void * __thiscall
LagrangePointUIButton___scalar_deleting_destructor_(LagrangePointUIButton *this,uint param_1)

{
  ReferenceController *this_00;
  
  this_00 = (this->LPoint).Object.Controller;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  GhostedUIButton___GhostedUIButton((GhostedUIButton *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x1f0);
  }
  return this;
}


//==== 00007b7920 007b7920_UnAlly ====
// decompiled by BatchDecomp @ 007b7920 name=UnAlly conv=__thiscall body=45

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall Body__UnAlly(void) */

void __thiscall Body__UnAlly(Body *this)

{
  undefined4 stack0xfffffff0;
  TacticalManager *pTVar1;
  
  pTVar1 = this->ParentTactical;
util__UnAlly((SpacecraftComponent *)&stack0xfffffff0);
  TacticalManager__OnBodyUnallied(pTVar1);
  this->Alliance = (Faction *)0x0;
  return;
}


//==== 00007c1240 007c1240__scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 007c1240 name=`scalar_deleting_destructor' conv=__thiscall body=65

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void * __thiscall Collision_RTreeNode::`scalar deleting destructor'(unsigned int) */

void * __thiscall Collision__RTreeNode___scalar_deleting_destructor_(RTreeNode *this,uint param_1)

{
  if (this->Left != (RTreeNode *)0x0) {
    _scalar_deleting_destructor_(this->Left,1);
  }
  if (this->Right != (RTreeNode *)0x0) {
    _scalar_deleting_destructor_(this->Right,1);
  }
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&this->LeafColliders);
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x48);
  }
  return this;
}


//==== 00007c18b0 007c18b0_CapitalShipComponent ====
// decompiled by BatchDecomp @ 007c18b0 name=CapitalShipComponent conv=__thiscall body=105

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: __thiscall CapitalShipComponent__CapitalShipComponent(class util::WeakPtr<class
   Body>,class util::Str<char> const &,unsigned int) */

CapitalShipComponent * __thiscall
CapitalShipComponent__CapitalShipComponent(CapitalShipComponent *this,undefined4 param_2,ReferenceController *param_3,
          Str_L_char_G_ *param_4,uint param_5)

{
  ReferenceController *pRVar1;
  
  pRVar1 = param_3;
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_3);
  }
  Component__Component((Component *)this,param_2,pRVar1);
  this->_pad_0x0_0 = (int)((void *)(0x0093c9acu));
  util__Str_char___Str_char(&this->ShipName,param_4);
  this->IsNameChanged = false;
  this->UniqueID = param_5;
  this->IsUnscathed = true;
  (this->MinimapIcon).Pointer = (MinimapWidget *)0x0;
  (this->MinimapIcon).Controller = (ReferenceController *)0x0;
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  return this;
}


//==== 00007c1920 007c1920__scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 007c1920 name=`scalar_deleting_destructor' conv=__thiscall body=83

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall CapitalShipComponent::`scalar deleting destructor'(unsigned
   int) */

void * __thiscall
CapitalShipComponent___scalar_deleting_destructor_(CapitalShipComponent *this,uint param_1)

{
  ReferenceController *this_00;
  char *pcVar1;
  
  this_00 = (this->MinimapIcon).Controller;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  pcVar1 = (this->ShipName).Data;
  if (pcVar1 != (char *)0x0) {
    operator_delete__(pcVar1);
    (this->ShipName).Data = (char *)0x0;
  }
  this->_pad_0x0_0 = (int)((void *)(0x0093c8e4u));
  if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this->_pad_0x0_0);
  }
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x2c);
  }
  return this;
}


//==== 00007c1980 007c1980__scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 007c1980 name=`scalar_deleting_destructor' conv=__thiscall body=48

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall Component::`scalar deleting destructor'(unsigned int) */

void * __thiscall Component___scalar_deleting_destructor_(Component *this,uint param_1)

{
  ReferenceController *this_00;
  
  this->_pad_0x0_0 = (int)((void *)(0x0093c8e4u));
  this_00 = (this->Parent).Controller;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  if ((param_1 & 1) != 0) {
    operator_delete(this,0xc);
  }
  return this;
}


//==== 00007c1a70 007c1a70_GetID ====
// decompiled by BatchDecomp @ 007c1a70 name=GetID conv=__thiscall body=4

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: unsigned int __thiscall CapitalShipComponent__GetID(void)const  */

uint __thiscall CapitalShipComponent__GetID(CapitalShipComponent *this)

{
  return this->UniqueID;
}


//==== 00007c1ac0 007c1ac0_GetName ====
// decompiled by BatchDecomp @ 007c1ac0 name=GetName conv=__thiscall body=22

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Str<char> __thiscall CapitalShipComponent__GetName(void)const  */

Str_L_char_G_ * __thiscall
CapitalShipComponent__GetName(CapitalShipComponent *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,&this->ShipName);
  return __return_storage_ptr__;
}


//==== 00007c1ae0 007c1ae0_GetNamePointer ====
// decompiled by BatchDecomp @ 007c1ae0 name=GetNamePointer conv=__thiscall body=4

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Str_L_char_G_ * __thiscall CapitalShipComponent__GetNamePointer(void) */

Str_L_char_G_ * __thiscall CapitalShipComponent__GetNamePointer(CapitalShipComponent *this)

{
  return &this->ShipName;
}


//==== 00007c1c80 007c1c80_InstantiateCopy ====
// decompiled by BatchDecomp @ 007c1c80 name=InstantiateCopy conv=__thiscall body=67

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::SharedPtr<class Component> __thiscall
   Component__InstantiateCopy(class util::WeakPtr<class Body>) */

undefined4 * __thiscall
Component__InstantiateCopy(undefined4 param_1,undefined4 *param_2,undefined4 param_3,ReferenceController *param_4)

{
  util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\tactical\\components\\component.h",0x28,
                  "0",(char *)0x0);
  DebugBreak();
  *param_2 = 0;
  param_2[1] = 0;
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_4);
  }
  return param_2;
}


//==== 00007c21d0 007c21d0_ControllableComponent ====
// decompiled by BatchDecomp @ 007c21d0 name=ControllableComponent conv=__thiscall body=85

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: __thiscall ControllableComponent__ControllableComponent(class util::WeakPtr<class Body>)
    */

ControllableComponent * __thiscall
ControllableComponent__ControllableComponent(ControllableComponent *this,undefined4 param_2,ReferenceController *param_3)

{
  ReferenceController *pRVar1;
  
  pRVar1 = param_3;
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_3);
  }
  Component__Component((Component *)this,param_2,pRVar1);
  this->_pad_0x0_0 = (int)((void *)(0x0093ca20u));
  Order__Order(&(this->CurrentOrder).Data,None);
  (this->CurrentOrder).IsValidData = false;
  this->ShouldSplitFromMainFleet = false;
  this->IsDodgingEnabled = true;
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  return this;
}


//==== 00007c3140 007c3140__scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 007c3140 name=`scalar_deleting_destructor' conv=__thiscall body=100

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall DebrisComponent::`scalar deleting destructor'(unsigned int) */

void * __thiscall DebrisComponent___scalar_deleting_destructor_(DebrisComponent *this,uint param_1)

{
  ReferenceController *this_00;
  bool bVar1;
  ReferenceControllerRegistry *this_01;
  ModuleCompartment *pMVar2;
  
  this_00 = (this->Compartment).Controller;
  if (this_00 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__ReleaseStrongReference(this_00);
    if (bVar1) {
      pMVar2 = (this->Compartment).Pointer;
      if (pMVar2 != (ModuleCompartment *)0x0) {
        (**(code **)*(int *)pMVar2)(1);
        pMVar2 = (this->Compartment).Pointer;
      }
      this_01 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(this_01,pMVar2);
      (this->Compartment).Pointer = (ModuleCompartment *)0x0;
    }
  }
  this->_pad_0x0_0 = (int)((void *)(0x0093c8e4u));
  if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this->_pad_0x0_0);
  }
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x14);
  }
  return this;
}


//==== 00007c31b0 007c31b0_GetBoundingCylinder_km ====
// decompiled by BatchDecomp @ 007c31b0 name=GetBoundingCylinder_km conv=__thiscall body=90

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util::Maybe<struct util::Cylinder<double> > __thiscall
   DebrisComponent__GetBoundingCylinder_km(void)const  */

void __thiscall DebrisComponent__GetBoundingCylinder_km(DebrisComponent *this)

{
  int *piVar1;
  float10 fVar2;
  float10 fVar3;
  double dVar4;
  double *in_stack_00000004;
  
  piVar1 = *(int **)&((this->Compartment).Pointer)->LostPower;
  fVar2 = (float10)(**(code **)(*piVar1 + 0xa8))();
  fVar3 = (float10)(**(code **)(*piVar1 + 0xa4))();
  dVar4 = (double)fVar2 / /*408f400000000000*/1000.0;
  *in_stack_00000004 = (double)(fVar3 / (float10)/*408f400000000000*/1000.0);
  in_stack_00000004[1] = dVar4;
  *(undefined1 *)(in_stack_00000004 + 2) = 1;
  return;
}


//==== 00007c5530 007c5530_ShotComponent ====
// decompiled by BatchDecomp @ 007c5530 name=ShotComponent conv=__thiscall body=83

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: __thiscall ShotComponent__ShotComponent(class util::WeakPtr<class Body>,bool) */

ShotComponent * __thiscall
ShotComponent__ShotComponent(ShotComponent *this,undefined4 param_2,ReferenceController *param_3,bool param_4)

{
  ReferenceController *pRVar1;
  
  pRVar1 = param_3;
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_3);
  }
  Component__Component((Component *)this,param_2,pRVar1);
  this->_pad_0x0_0 = (int)((void *)(0x0093cc78u));
  (this->MinimapIcon).Pointer = (MinimapWidget *)0x0;
  (this->MinimapIcon).Controller = (ReferenceController *)0x0;
  this->IsBullet = param_4;
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  return this;
}


//==== 00007c5590 007c5590_UntrackComponent ====
// decompiled by BatchDecomp @ 007c5590 name=UntrackComponent conv=__thiscall body=113

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: __thiscall UntrackComponent__UntrackComponent(class util::WeakPtr<class Body>,class
   util::WeakPtr<class Body>) */

UntrackComponent * __thiscall
UntrackComponent__UntrackComponent(UntrackComponent *this,undefined4 param_2,ReferenceController *param_3,Body *param_4,
          ReferenceController *param_5)

{
  ReferenceController *pRVar1;
  
  pRVar1 = param_3;
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_3);
  }
  Component__Component((Component *)this,param_2,pRVar1);
  this->_pad_0x0_0 = (int)((void *)(0x0093ccecu));
  (this->Countdown_s).Data = 0.0;
  (this->Countdown_s).IsValidData = false;
  (this->Target).Pointer = param_4;
  (this->Target).Controller = param_5;
  if (param_5 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(param_5);
  }
  if (param_3 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_3);
  }
  if (param_5 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_5);
  }
  return this;
}


//==== 00007c56a0 007c56a0__scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 007c56a0 name=`scalar_deleting_destructor' conv=__thiscall body=60

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall ShotComponent::`scalar deleting destructor'(unsigned int) */

void * __thiscall ShotComponent___scalar_deleting_destructor_(ShotComponent *this,uint param_1)

{
  ReferenceController *this_00;
  
  this_00 = (this->MinimapIcon).Controller;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  this->_pad_0x0_0 = (int)((void *)(0x0093c8e4u));
  if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this->_pad_0x0_0);
  }
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x18);
  }
  return this;
}


//==== 00007c56e0 007c56e0__scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 007c56e0 name=`scalar_deleting_destructor' conv=__thiscall body=60

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall UntrackComponent::`scalar deleting destructor'(unsigned int) */

void * __thiscall
UntrackComponent___scalar_deleting_destructor_(UntrackComponent *this,uint param_1)

{
  ReferenceController *this_00;
  
  this_00 = (this->Target).Controller;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  this->_pad_0x0_0 = (int)((void *)(0x0093c8e4u));
  if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this->_pad_0x0_0);
  }
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x28);
  }
  return this;
}


//==== 00007e1490 007e1490_FUN_007e1490 ====
void __fastcall FUN_007e1490(Darray_L_class_util__Reflectable_P__G_ *param_1);

// decompiled by BatchDecomp @ 007e1490 name=FUN_007e1490 conv=unknown body=24

void __fastcall FUN_007e1490(Darray_L_class_util__Reflectable_P__G_ *param_1)

{
  int local_8;
  
  local_8 = 0;
  util__Darray_class_util__Reflectable____SetSize(param_1,&local_8);
  return;
}


//==== 00007e3f10 007e3f10_UntargetAllCompartments ====
// decompiled by BatchDecomp @ 007e3f10 name=UntargetAllCompartments conv=__thiscall body=15

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftTargeting__UntargetAllCompartments(void) */

void __thiscall SpacecraftTargeting__UntargetAllCompartments(SpacecraftTargeting *this)

{
                    /* WARNING: Could not recover jumptable at 0x007e3f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(this->EnemyTargetedCompartments).Data[2].Pointer)();
  return;
}


//==== 00007f0f30 007f0f30_GetAlliedShips ====
// decompiled by BatchDecomp @ 007f0f30 name=GetAlliedShips conv=__thiscall body=99

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: class util::Darray<class util::WeakPtr<class SpacecraftComponent> > __thiscall
   TacticalAI__GetAlliedShips(void)const  */

Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ * __thiscall
TacticalAI__GetAlliedShips(TacticalAI *this)

{
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *pDVar1;
  bool bVar2;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *in_stack_00000004;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_24[16];
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_14[16];
  
  bVar2 = this->ControlsAllies == false;
  if (bVar2) {
    pDVar1 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             TacticalManager__GetAISpacecraftComponents(this->Parent);
  }
  else {
    pDVar1 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             TacticalManager__GetPlayerSpacecraftComponents(this->Parent);
  }
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(in_stack_00000004,pDVar1);
  if (bVar2) {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_14);
  }
  else {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_24);
  }
  return in_stack_00000004;
}


//==== 00007feb70 007feb70_GetNotifications ====
// decompiled by BatchDecomp @ 007feb70 name=GetNotifications conv=__thiscall body=57

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class NotificationManager * __thiscall TacticalManager__GetNotifications(void) */

NotificationManager * __thiscall TacticalManager__GetNotifications(TacticalManager *this)

{
  NotificationManager *pNVar1;
  
  TacticalManager_GetStrategicGame_Memoize(this);
  if (*(char *)&(this->Effects).Controller == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pNVar1 = StrategicManager__GetNotifications((StrategicManager *)(this->Effects).Pointer);
  return pNVar1;
}


//==== 00007ff630 007ff630_GetSpacecraftComponents ====
// decompiled by BatchDecomp @ 007ff630 name=GetSpacecraftComponents conv=__thiscall body=25

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::Darray<class util::WeakPtr<class SpacecraftComponent> > __thiscall
   TacticalManager__GetSpacecraftComponents(void)const  */

Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ * __thiscall
TacticalManager__GetSpacecraftComponents(TacticalManager *this)

{
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *in_stack_00000004;
  
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(in_stack_00000004,
             (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
             &(this->Optimizers).SpacecraftComponents.Size);
  return in_stack_00000004;
}


//==== 00008073e0 008073e0__scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 008073e0 name=`scalar_deleting_destructor' conv=__thiscall body=84

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall OrderModeOverlay::`scalar deleting destructor'(unsigned int) */

void * __thiscall
OrderModeOverlay___scalar_deleting_destructor_(OrderModeOverlay *this,uint param_1)

{
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&this->ShipsGetter);
  this->_pad_0x0_0 = (int)((void *)(0x0091d1e0u));
  util__Darray_class_util__SharedPtr_struct_UIWidget______Darray_class_util__SharedPtr_struct_UIWidget((Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *)&this->_pad_0x0_0);
  if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this->_pad_0x0_0);
  }
  UIAttributes___UIAttributes((UIAttributes *)&this->_pad_0x0_0);
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x1d0);
  }
  return this;
}


//==== 0000807440 00807440__scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 00807440 name=`scalar_deleting_destructor' conv=__thiscall body=88

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall SpacecraftButton::`scalar deleting destructor'(unsigned int) */

void * __thiscall
SpacecraftButton___scalar_deleting_destructor_(SpacecraftButton *this,uint param_1)

{
  ReferenceController *this_00;
  
  this_00 = (this->Spacecraft).Controller;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  this->_pad_0x0_0 = (int)((void *)(0x0091d1e0u));
  util__Darray_class_util__SharedPtr_struct_UIWidget______Darray_class_util__SharedPtr_struct_UIWidget((Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *)&this->_pad_0x0_0);
  if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this->_pad_0x0_0);
  }
  UIAttributes___UIAttributes((UIAttributes *)&this->_pad_0x0_0);
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x1a8);
  }
  return this;
}


//==== 00008074a0 008074a0_BeginMoving ====

// decompiled by BatchDecomp @ 008074a0 name=BeginMoving conv=__thiscall body=78

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall OrderModeOverlay__BeginMoving(class util::Darray<class
   util::WeakPtr<class SpacecraftComponent> > const &) */

void __thiscall
OrderModeOverlay__BeginMoving(OrderModeOverlay *this,Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *param_1)

{
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_18[16];
  uint local_8;
  
  local_8 = local_8 & 0xffffff00;
  FUN_004d6990(local_18,param_1,local_8);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&this->ShipsGetter,local_18)
  ;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_18);
  this->OrderMode = Move;
  SetInitialPlane(this);
  return;
}


//==== 00008074f0 008074f0_BeginOrienting ====

// decompiled by BatchDecomp @ 008074f0 name=BeginOrienting conv=__thiscall body=78

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall OrderModeOverlay__BeginOrienting(class util::Darray<class
   util::WeakPtr<class SpacecraftComponent> > const &) */

void __thiscall
OrderModeOverlay__BeginOrienting(OrderModeOverlay *this,Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *param_1)

{
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_18[16];
  uint local_8;
  
  local_8 = local_8 & 0xffffff00;
  FUN_004d6990(local_18,param_1,local_8);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
            ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&this->ShipsGetter,local_18)
  ;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_18);
  this->OrderMode = Orient;
  SetInitialPlane(this);
  return;
}


//==== 0000807e60 00807e60_HandleKeyInput ====
// decompiled by BatchDecomp @ 00807e60 name=HandleKeyInput conv=__thiscall body=55

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual bool __thiscall OrderModeOverlay__HandleKeyInput(int,enum KeyInput::Type,struct
   InputModifiers const &) */

bool __thiscall
OrderModeOverlay__HandleKeyInput(OrderModeOverlay *this,int param_1,Type param_2,InputModifiers *param_3)

{
  if ((param_2 == Pressed) && (((param_1 == 0x100 || (param_1 == 0x101)) || (param_1 == 0x102)))) {
    this->OrderMode = None;
    return true;
  }
  return false;
}


//==== 000080a5e0 0080a5e0_GetAgainstCraft ====
// decompiled by BatchDecomp @ 0080a5e0 name=GetAgainstCraft conv=__thiscall body=111

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::WeakPtr<class SpacecraftComponent> __thiscall
   MinimapRangeWidget__GetAgainstCraft(void)const  */

undefined4 __thiscall MinimapRangeWidget__GetAgainstCraft(MinimapRangeWidget *this)

{
  double dVar1;
  TacticalManager *this_00;
  Vec3_L_double_G_ VVar2;
  undefined4 in_stack_00000004;
  
  this_00 = (TacticalManager *)this->_pad_0x0_0;
  TacticalManager__GetSelectedBodiesCenter_km_Memoize(this_00);
  if ((this_00->GetSelectedBodiesCenter_km_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar1 = (this_00->GetSelectedBodiesCenter_km_MemoizedValue).Data.Z;
  ((slice_view *)&VVar2.X)->_4_4_ = *(undefined4 *)&(this_00->GetSelectedBodiesCenter_km_MemoizedValue).Data.X;
  ((slice_view *)&VVar2.X)->_0_4_ = in_stack_00000004;
  ((slice_view *)&VVar2.Y)->_0_4_ =
       *(undefined4 *)((int)&(this_00->GetSelectedBodiesCenter_km_MemoizedValue).Data.X + 4);
  ((slice_view *)&VVar2.Y)->_4_4_ = *(undefined4 *)&(this_00->GetSelectedBodiesCenter_km_MemoizedValue).Data.Y;
  ((slice_view *)&VVar2.Z)->_0_4_ =
       *(undefined4 *)((int)&(this_00->GetSelectedBodiesCenter_km_MemoizedValue).Data.Y + 4);
  ((slice_view *)&VVar2.Z)->_4_4_ = *(undefined4 *)&dVar1;
  TacticalManager__GetNearestOppositionCraftOfType((TacticalManager *)this->_pad_0x0_0,VVar2,(Faction *)((ulonglong)dVar1 >> 0x20),
             (CraftBlueprint *)this->TargetAlliance);
  return in_stack_00000004;
}


//==== 0000813e50 00813e50__scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 00813e50 name=`scalar_deleting_destructor' conv=__thiscall body=100

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall ModuleActionButton::`scalar deleting destructor'(unsigned int)
    */

void * __thiscall
ModuleActionButton___scalar_deleting_destructor_(ModuleActionButton *this,uint param_1)

{
  Delegate_L_void_G_ *pDVar1;
  
  pDVar1 = (this->Actions).Data;
  (this->Actions)._pad_0x0_0 =
       (int)((void *)(0x00920638u));
  if (pDVar1 != (Delegate_L_void_G_ *)0x0) {
    operator_delete__(pDVar1);
  }
  (this->Actions).Data = (Delegate_L_void_G_ *)0x0;
  (this->Actions)._pad_0x0_0 = (int)((void *)(0x00919488u));
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&this->Ships);
  UIButton___UIButton((UIButton *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x1d0);
  }
  return this;
}


//==== 0000813ec0 00813ec0__scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 00813ec0 name=`scalar_deleting_destructor' conv=__thiscall body=100

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall ModuleRadioActionButton::`scalar deleting destructor'(unsigned
   int) */

void * __thiscall
ModuleRadioActionButton___scalar_deleting_destructor_(ModuleRadioActionButton *this,uint param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (this->Toggles).Data;
  (this->Toggles)._pad_0x0_0 = (int)((void *)(0x009194a4u));
  if (ppiVar1 != (int **)0x0) {
    operator_delete__(ppiVar1);
  }
  (this->Toggles).Data = (int **)0x0;
  (this->Toggles)._pad_0x0_0 = (int)((void *)(0x00919488u));
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&this->Ships);
  UIButton___UIButton((UIButton *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x1f8);
  }
  return this;
}


//==== 0000813f30 00813f30__scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 00813f30 name=`scalar_deleting_destructor' conv=__thiscall body=100

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall ModuleToggleActionButton::`scalar deleting destructor'(unsigned
   int) */

void * __thiscall
ModuleToggleActionButton___scalar_deleting_destructor_(ModuleToggleActionButton *this,uint param_1)

{
  bool **ppbVar1;
  
  ppbVar1 = (this->Toggles).Data;
  (this->Toggles)._pad_0x0_0 = (int)((void *)(0x009194a4u));
  if (ppbVar1 != (bool **)0x0) {
    operator_delete__(ppbVar1);
  }
  (this->Toggles).Data = (bool **)0x0;
  (this->Toggles)._pad_0x0_0 = (int)((void *)(0x00919488u));
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&this->Ships);
  UIButton___UIButton((UIButton *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x1f0);
  }
  return this;
}


//==== 0000814000 00814000__scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 00814000 name=`scalar_deleting_destructor' conv=__thiscall body=55

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall ShipArmorButton::`scalar deleting destructor'(unsigned int) */

void * __thiscall ShipArmorButton___scalar_deleting_destructor_(ShipArmorButton *this,uint param_1)

{
  ReferenceController *this_00;
  
  this_00 = (this->Ship).Controller;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  UIButton___UIButton((UIButton *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x1b8);
  }
  return this;
}


//==== 000081feb0 0081feb0_SetBordersDefault ====
// decompiled by BatchDecomp @ 0081feb0 name=SetBordersDefault conv=__cdecl body=28

/* private: static void __cdecl UIShader__SetBordersDefault(void) */

void __cdecl UIShader__SetBordersDefault(void)

{
  undefined4 stack0xfffffffb;
  UIShader *pUVar1;
  undefined3 in_ECX;
  undefined4 uVar2;
  
  uVar2 = CONCAT13(1,in_ECX);
  pUVar1 = GetStatic();
  (**(code **)(pUVar1->_pad_0x0_0 + 100))(&stack0xfffffffb,uVar2);
  return;
}


//==== 000081ff60 0081ff60_SetEmbossedDefault ====
// decompiled by BatchDecomp @ 0081ff60 name=SetEmbossedDefault conv=__cdecl body=28

/* private: static void __cdecl UIShader__SetEmbossedDefault(void) */

void __cdecl UIShader__SetEmbossedDefault(void)

{
  undefined4 stack0xfffffffb;
  UIShader *pUVar1;
  uint3 in_ECX;
  uint uVar2;
  
  uVar2 = (uint)in_ECX;
  pUVar1 = GetStatic();
  (**(code **)(*(int *)pUVar1 + 0x4c))(&stack0xfffffffb,uVar2);
  return;
}


//==== 0000820a90 00820a90_SetRadialDefault ====
// decompiled by BatchDecomp @ 00820a90 name=SetRadialDefault conv=__cdecl body=28

/* private: static void __cdecl UIShader__SetRadialDefault(void) */

void __cdecl UIShader__SetRadialDefault(void)

{
  undefined4 stack0xfffffffb;
  UIShader *pUVar1;
  uint3 in_ECX;
  uint uVar2;
  
  uVar2 = (uint)in_ECX;
  pUVar1 = GetStatic();
  (**(code **)(*(int *)pUVar1 + 0x60))(&stack0xfffffffb,uVar2);
  return;
}


//==== 0000821880 00821880__scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 00821880 name=`scalar_deleting_destructor' conv=__thiscall body=60

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall BalloonPopupCombatPayload::`scalar deleting
   destructor'(unsigned int) */

void * __thiscall
BalloonPopupCombatPayload___scalar_deleting_destructor_(BalloonPopupCombatPayload *this,uint param_1)

{
  ReferenceController *pRVar1;
  
  pRVar1 = (this->System).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  pRVar1 = (this->Spacecraft).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  this->_pad_0x0_0 = (int)((void *)(0x00938a68u));
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x50);
  }
  return this;
}


//==== 0000822ee0 00822ee0__scalar_deleting_destructor_ ====
// decompiled by BatchDecomp @ 00822ee0 name=`scalar_deleting_destructor' conv=__thiscall body=113

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void * __thiscall OrderButton::`scalar deleting destructor'(unsigned int) */

void * __thiscall OrderButton___scalar_deleting_destructor_(OrderButton *this,uint param_1)

{
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&this->ShipsGetter);
  if ((void *)this->_pad_0x0_0 != (void *)0x0) {
    operator_delete__((void *)this->_pad_0x0_0);
    this->_pad_0x0_0 = 0;
  }
  this->_pad_0x0_0 = (int)((void *)(0x0091d1e0u));
  util__Darray_class_util__SharedPtr_struct_UIWidget______Darray_class_util__SharedPtr_struct_UIWidget((Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *)&this->_pad_0x0_0);
  if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this->_pad_0x0_0);
  }
  UIAttributes___UIAttributes((UIAttributes *)&this->_pad_0x0_0);
  if ((param_1 & 1) != 0) {
    operator_delete(this,0x1e8);
  }
  return this;
}


//==== 000082a9c0 0082a9c0_RequestRebuild ====
// decompiled by BatchDecomp @ 0082a9c0 name=RequestRebuild conv=__thiscall body=8

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall ShipListUI__RequestRebuild(void) */

void __thiscall ShipListUI__RequestRebuild(ShipListUI *this)

{
  this->RebuildPending = true;
  return;
}


//==== 000082f370 0082f370_GetCollapseOption ====
// decompiled by BatchDecomp @ 0082f370 name=GetCollapseOption conv=__thiscall body=7

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: enum HUDTactical::CollapseItems __thiscall HUDTactical__GetCollapseOption(void)const  */

CollapseItems __thiscall HUDTactical__GetCollapseOption(HUDTactical *this)

{
  return this->CollapseOption;
}


//==== 000082feb0 0082feb0_GetSpacecraftUI ====
// decompiled by BatchDecomp @ 0082feb0 name=GetSpacecraftUI conv=__thiscall body=40

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class util::WeakPtr<struct SpacecraftUIOverlay> __thiscall
   HUDTactical__GetSpacecraftUI(void)const  */

undefined4 * __thiscall HUDTactical__GetSpacecraftUI(HUDTactical *this)

{
  ReferenceController *this_00;
  undefined4 *in_stack_00000004;
  
  this_00 = (this->SpacecraftUI).Controller;
  *in_stack_00000004 = (this->SpacecraftUI).Pointer;
  in_stack_00000004[1] = this_00;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  return in_stack_00000004;
}


//==== 0000855e80 00855e80_FUN_00855e80 ====
void FUN_00855e80(char *param_1);

// decompiled by BatchDecomp @ 00855e80 name=FUN_00855e80 conv=unknown body=27

void FUN_00855e80(char *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 != (char *)0x0) {
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      iVar2 = iVar2 + 1;
      cVar1 = param_1[iVar2];
    }
    return;
  }
  return;
}


//==== 0000882030 00882030_FillArc ====
// decompiled by BatchDecomp @ 00882030 name=FillArc conv=__cdecl body=79

/* void __cdecl FillArc(double,double,int,double,double,bool) */

void __cdecl
FillArc(double param_1,double param_2,int param_3,double param_4,double param_5,bool param_6)

{
  bool unaff_BP;
  
  FillEllipticalArc(param_1,param_2,param_1,param_2,param_3,param_4,param_5,unaff_BP);
  return;
}


//==== 0000889d70 00889d70_GetCustomTheme ====
// decompiled by BatchDecomp @ 00889d70 name=GetCustomTheme conv=__thiscall body=22

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* protected: struct CustomUIThemeInterface const * __thiscall UIWidget__GetCustomTheme(void)const
    */

CustomUIThemeInterface * __thiscall UIWidget__GetCustomTheme(UIWidget *this)

{
  CapitalShipComponent *this_00;
  int *piVar1;
  CustomUIThemeInterface *pCVar2;
  HWND unaff_retaddr;
  
  this_00 = (CapitalShipComponent *)Manager__GetParent(unaff_retaddr);
  piVar1 = (int *)CapitalShipComponent__GetID(this_00);
                    /* WARNING: Could not recover jumptable at 0x00889d83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar2 = (CustomUIThemeInterface *)(**(code **)(*piVar1 + 0x6c))();
  return pCVar2;
}


//==== 000088a5d0 0088a5d0_GetTheme ====
// decompiled by BatchDecomp @ 0088a5d0 name=GetTheme conv=__thiscall body=22

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* protected: struct CoreUITheme const * __thiscall UIWidget__GetTheme(void)const  */

CoreUITheme * __thiscall UIWidget__GetTheme(UIWidget *this)

{
  CapitalShipComponent *this_00;
  int *piVar1;
  CoreUITheme *pCVar2;
  HWND unaff_retaddr;
  
  this_00 = (CapitalShipComponent *)Manager__GetParent(unaff_retaddr);
  piVar1 = (int *)CapitalShipComponent__GetID(this_00);
                    /* WARNING: Could not recover jumptable at 0x0088a5e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar2 = (CoreUITheme *)(**(code **)(*piVar1 + 0x68))();
  return pCVar2;
}


//==== 00008975c0 008975c0_FUN_008975c0 ====
void __fastcall FUN_008975c0(int *param_1);

// decompiled by BatchDecomp @ 008975c0 name=FUN_008975c0 conv=unknown body=106

void __fastcall FUN_008975c0(int *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ local_24;
  Str_L_char_G_ local_14;
  char *local_8;
  
  param_1 = (int *)*param_1;
  if (param_1[1] != 0) {
    pSVar1 = (Str_L_char_G_ *)(*param_1 + -0x10 + param_1[1] * 0x10);
    util__Str_char___Str_char(&local_14,pSVar1);
    local_8 = pSVar1[1].Data;
    param_1[1] = param_1[1] + -1;
    param_1[3] = param_1[1] * 0x10 + *param_1;
    util__Str_char___Str_char(&local_24,&local_14);
    if (local_14.Data != (char *)0x0) {
      operator_delete__(local_14.Data);
    }
    if (local_24.Data != (char *)0x0) {
      operator_delete__(local_24.Data);
    }
  }
  return;
}


//==== 00008aa650 008aa650_FUN_008aa650 ====
void FUN_008aa650(int *param_1);

// decompiled by BatchDecomp @ 008aa650 name=FUN_008aa650 conv=unknown body=88

void FUN_008aa650(int *param_1)

{
  undefined4 stack0xfffffffc;
  int iVar1;
  undefined4 uVar2;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar1 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar1) {
    do {
      uVar2 = (**(code **)*param_1)(&local_c);
      FUN_008ac7d0(uVar2);
      local_c = local_c + 1;
      iVar1 = (**(code **)(*param_1 + 0xc))();
    } while (local_c < iVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00008dc140 008dc140___glfwFreeMonitors ====
// decompiled by BatchDecomp @ 008dc140 name=__glfwFreeMonitors conv=unknown body=115

void __glfwFreeMonitors(void *param_1,int param_2)

{
  undefined4 *_Memory;
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      _Memory = *(undefined4 **)((int)param_1 + iVar1 * 4);
      if (_Memory != (undefined4 *)0x0) {
        free((void *)_Memory[0xc]);
        free((void *)_Memory[0xd]);
        free((void *)_Memory[0xe]);
        _Memory[0xc] = 0;
        _Memory[0xd] = 0;
        _Memory[0xe] = 0;
        _Memory[0xf] = 0;
        free((void *)_Memory[0x10]);
        free((void *)_Memory[0x11]);
        free((void *)_Memory[0x12]);
        _Memory[0x10] = 0;
        _Memory[0x11] = 0;
        _Memory[0x12] = 0;
        _Memory[0x13] = 0;
        free((void *)_Memory[4]);
        free((void *)*_Memory);
        free(_Memory);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  free(param_1);
  return;
}


//==== 00008dc530 008dc530___glfwInputWindowCloseRequest ====
// decompiled by BatchDecomp @ 008dc530 name=__glfwInputWindowCloseRequest conv=unknown body=28

void __glfwInputWindowCloseRequest(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 1;
  if (*(code **)(param_1 + 0x24c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008dc549. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x24c))();
    return;
  }
  return;
}


//==== 00008deaa0 008deaa0___glfwPlatformDestroyCursor ====
// decompiled by BatchDecomp @ 008deaa0 name=__glfwPlatformDestroyCursor conv=unknown body=19

void __glfwPlatformDestroyCursor(int param_1)

{
  if (*(HICON *)(param_1 + 4) != (HICON)0x0) {
    DestroyIcon(*(HICON *)(param_1 + 4));
  }
  return;
}


//==== 00008e3cbd 008e3cbd__ftol3_except ====
// decompiled by BatchDecomp @ 008e3cbd name=_ftol3_except conv=__cdecl body=68

void __cdecl _ftol3_except(void)

{
  int in_EDX;
  byte in_FPUControlWord;
  
  if ((in_EDX == 8) || ((*(byte *)((int)&_MinSubInexact + in_EDX + 7) & in_FPUControlWord) == 0)) {
    except1();
  }
  return;
}


//==== 00008e47d0 008e47d0_FUN_008e47d0 ====
void FUN_008e47d0(void);

// decompiled by BatchDecomp @ 008e47d0 name=FUN_008e47d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e47d0(void)

{
  _DAT_00960ed0 = ((void *)(0x009194a4u));
  if (DAT_00960ed4 != (void *)0x0) {
    operator_delete__(DAT_00960ed4);
  }
  _DAT_00960ed0 = ((void *)(0x00919488u));
  DAT_00960ed4 = (void *)0x0;
  return;
}


//==== 00008e4810 008e4810_FUN_008e4810 ====
void FUN_008e4810(void);

// decompiled by BatchDecomp @ 008e4810 name=FUN_008e4810 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e4810(void)

{
  _DAT_00960e90 = ((void *)(0x009194a4u));
  if (DAT_00960e94 != (void *)0x0) {
    operator_delete__(DAT_00960e94);
  }
  _DAT_00960e90 = ((void *)(0x00919488u));
  DAT_00960e94 = (void *)0x0;
  return;
}


//==== 00008e4850 008e4850_FUN_008e4850 ====
void FUN_008e4850(void);

// decompiled by BatchDecomp @ 008e4850 name=FUN_008e4850 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e4850(void)

{
  _DAT_00960eb0 = ((void *)(0x009194a4u));
  if (DAT_00960eb4 != (void *)0x0) {
    operator_delete__(DAT_00960eb4);
  }
  _DAT_00960eb0 = ((void *)(0x00919488u));
  DAT_00960eb4 = (void *)0x0;
  return;
}


//==== 00008e4890 008e4890_FUN_008e4890 ====
void FUN_008e4890(void);

// decompiled by BatchDecomp @ 008e4890 name=FUN_008e4890 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e4890(void)

{
  _DAT_00960ea0 = ((void *)(0x009194a4u));
  if (DAT_00960ea4 != (void *)0x0) {
    operator_delete__(DAT_00960ea4);
  }
  _DAT_00960ea0 = ((void *)(0x00919488u));
  DAT_00960ea4 = (void *)0x0;
  return;
}


//==== 00008e48d0 008e48d0_FUN_008e48d0 ====
void FUN_008e48d0(void);

// decompiled by BatchDecomp @ 008e48d0 name=FUN_008e48d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e48d0(void)

{
  _DAT_00960ef0 = ((void *)(0x009194a4u));
  if (DAT_00960ef4 != (void *)0x0) {
    operator_delete__(DAT_00960ef4);
  }
  _DAT_00960ef0 = ((void *)(0x00919488u));
  DAT_00960ef4 = (void *)0x0;
  return;
}


//==== 00008e4910 008e4910_FUN_008e4910 ====
void FUN_008e4910(void);

// decompiled by BatchDecomp @ 008e4910 name=FUN_008e4910 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e4910(void)

{
  _DAT_00960e60 = ((void *)(0x009194a4u));
  if (DAT_00960e64 != (void *)0x0) {
    operator_delete__(DAT_00960e64);
  }
  _DAT_00960e60 = ((void *)(0x00919488u));
  DAT_00960e64 = (void *)0x0;
  return;
}


//==== 00008e4950 008e4950_FUN_008e4950 ====
void FUN_008e4950(void);

// decompiled by BatchDecomp @ 008e4950 name=FUN_008e4950 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e4950(void)

{
  _DAT_00960ee0 = ((void *)(0x009194a4u));
  if (DAT_00960ee4 != (void *)0x0) {
    operator_delete__(DAT_00960ee4);
  }
  _DAT_00960ee0 = ((void *)(0x00919488u));
  DAT_00960ee4 = (void *)0x0;
  return;
}


//==== 00008e4990 008e4990_FUN_008e4990 ====
void FUN_008e4990(void);

// decompiled by BatchDecomp @ 008e4990 name=FUN_008e4990 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e4990(void)

{
  _DAT_00960e80 = ((void *)(0x009194a4u));
  if (DAT_00960e84 != (void *)0x0) {
    operator_delete__(DAT_00960e84);
  }
  _DAT_00960e80 = ((void *)(0x00919488u));
  DAT_00960e84 = (void *)0x0;
  return;
}


//==== 00008e49d0 008e49d0_FUN_008e49d0 ====
void FUN_008e49d0(void);

// decompiled by BatchDecomp @ 008e49d0 name=FUN_008e49d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e49d0(void)

{
  _DAT_00960e70 = ((void *)(0x009194a4u));
  if (DAT_00960e74 != (void *)0x0) {
    operator_delete__(DAT_00960e74);
  }
  _DAT_00960e70 = ((void *)(0x00919488u));
  DAT_00960e74 = (void *)0x0;
  return;
}


//==== 00008e4a10 008e4a10_FUN_008e4a10 ====
void FUN_008e4a10(void);

// decompiled by BatchDecomp @ 008e4a10 name=FUN_008e4a10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e4a10(void)

{
  _DAT_00960ec0 = ((void *)(0x009194a4u));
  if (DAT_00960ec4 != (void *)0x0) {
    operator_delete__(DAT_00960ec4);
  }
  _DAT_00960ec0 = ((void *)(0x00919488u));
  DAT_00960ec4 = (void *)0x0;
  return;
}


//==== 00008e4d90 008e4d90_FUN_008e4d90 ====
void FUN_008e4d90(void);

// decompiled by BatchDecomp @ 008e4d90 name=FUN_008e4d90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e4d90(void)

{
  _DAT_0096120c = ((void *)(0x009194a4u));
  if (DAT_00961210 != (void *)0x0) {
    operator_delete__(DAT_00961210);
  }
  _DAT_0096120c = ((void *)(0x00919488u));
  DAT_00961210 = (void *)0x0;
  return;
}


//==== 00008e4dd0 008e4dd0_FUN_008e4dd0 ====
void FUN_008e4dd0(void);

// decompiled by BatchDecomp @ 008e4dd0 name=FUN_008e4dd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e4dd0(void)

{
  _DAT_0096119c = ((void *)(0x009194a4u));
  if (DAT_009611a0 != (void *)0x0) {
    operator_delete__(DAT_009611a0);
  }
  _DAT_0096119c = ((void *)(0x00919488u));
  DAT_009611a0 = (void *)0x0;
  return;
}


//==== 00008e4e10 008e4e10_FUN_008e4e10 ====
void FUN_008e4e10(void);

// decompiled by BatchDecomp @ 008e4e10 name=FUN_008e4e10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e4e10(void)

{
  _DAT_009611ec = ((void *)(0x009194a4u));
  if (DAT_009611f0 != (void *)0x0) {
    operator_delete__(DAT_009611f0);
  }
  _DAT_009611ec = ((void *)(0x00919488u));
  DAT_009611f0 = (void *)0x0;
  return;
}


//==== 00008e4e50 008e4e50_FUN_008e4e50 ====
void FUN_008e4e50(void);

// decompiled by BatchDecomp @ 008e4e50 name=FUN_008e4e50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e4e50(void)

{
  _DAT_009611cc = ((void *)(0x009194a4u));
  if (DAT_009611d0 != (void *)0x0) {
    operator_delete__(DAT_009611d0);
  }
  _DAT_009611cc = ((void *)(0x00919488u));
  DAT_009611d0 = (void *)0x0;
  return;
}


//==== 00008e4e90 008e4e90_FUN_008e4e90 ====
void FUN_008e4e90(void);

// decompiled by BatchDecomp @ 008e4e90 name=FUN_008e4e90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e4e90(void)

{
  _DAT_0096118c = ((void *)(0x009194a4u));
  if (DAT_00961190 != (void *)0x0) {
    operator_delete__(DAT_00961190);
  }
  _DAT_0096118c = ((void *)(0x00919488u));
  DAT_00961190 = (void *)0x0;
  return;
}


//==== 00008e4ed0 008e4ed0_FUN_008e4ed0 ====
void FUN_008e4ed0(void);

// decompiled by BatchDecomp @ 008e4ed0 name=FUN_008e4ed0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e4ed0(void)

{
  _DAT_0096121c = ((void *)(0x009194a4u));
  if (DAT_00961220 != (void *)0x0) {
    operator_delete__(DAT_00961220);
  }
  _DAT_0096121c = ((void *)(0x00919488u));
  DAT_00961220 = (void *)0x0;
  return;
}


//==== 00008e4f10 008e4f10_FUN_008e4f10 ====
void FUN_008e4f10(void);

// decompiled by BatchDecomp @ 008e4f10 name=FUN_008e4f10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e4f10(void)

{
  _DAT_0096117c = ((void *)(0x009194a4u));
  if (DAT_00961180 != (void *)0x0) {
    operator_delete__(DAT_00961180);
  }
  _DAT_0096117c = ((void *)(0x00919488u));
  DAT_00961180 = (void *)0x0;
  return;
}


//==== 00008e4f50 008e4f50_FUN_008e4f50 ====
void FUN_008e4f50(void);

// decompiled by BatchDecomp @ 008e4f50 name=FUN_008e4f50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e4f50(void)

{
  _DAT_0096123c = ((void *)(0x009194a4u));
  if (DAT_00961240 != (void *)0x0) {
    operator_delete__(DAT_00961240);
  }
  _DAT_0096123c = ((void *)(0x00919488u));
  DAT_00961240 = (void *)0x0;
  return;
}


//==== 00008e4f90 008e4f90_FUN_008e4f90 ====
void FUN_008e4f90(void);

// decompiled by BatchDecomp @ 008e4f90 name=FUN_008e4f90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e4f90(void)

{
  _DAT_009611dc = ((void *)(0x009194a4u));
  if (DAT_009611e0 != (void *)0x0) {
    operator_delete__(DAT_009611e0);
  }
  _DAT_009611dc = ((void *)(0x00919488u));
  DAT_009611e0 = (void *)0x0;
  return;
}


//==== 00008e4fd0 008e4fd0_FUN_008e4fd0 ====
void FUN_008e4fd0(void);

// decompiled by BatchDecomp @ 008e4fd0 name=FUN_008e4fd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e4fd0(void)

{
  _DAT_009611bc = ((void *)(0x009194a4u));
  if (DAT_009611c0 != (void *)0x0) {
    operator_delete__(DAT_009611c0);
  }
  _DAT_009611bc = ((void *)(0x00919488u));
  DAT_009611c0 = (void *)0x0;
  return;
}


//==== 00008e5010 008e5010_FUN_008e5010 ====
void FUN_008e5010(void);

// decompiled by BatchDecomp @ 008e5010 name=FUN_008e5010 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e5010(void)

{
  _DAT_009611ac = ((void *)(0x009194a4u));
  if (DAT_009611b0 != (void *)0x0) {
    operator_delete__(DAT_009611b0);
  }
  _DAT_009611ac = ((void *)(0x00919488u));
  DAT_009611b0 = (void *)0x0;
  return;
}


//==== 00008e5050 008e5050_FUN_008e5050 ====
void FUN_008e5050(void);

// decompiled by BatchDecomp @ 008e5050 name=FUN_008e5050 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e5050(void)

{
  _DAT_0096122c = ((void *)(0x009194a4u));
  if (DAT_00961230 != (void *)0x0) {
    operator_delete__(DAT_00961230);
  }
  _DAT_0096122c = ((void *)(0x00919488u));
  DAT_00961230 = (void *)0x0;
  return;
}


//==== 00008e5090 008e5090_FUN_008e5090 ====
void FUN_008e5090(void);

// decompiled by BatchDecomp @ 008e5090 name=FUN_008e5090 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e5090(void)

{
  _DAT_009611fc = ((void *)(0x009194a4u));
  if (DAT_00961200 != (void *)0x0) {
    operator_delete__(DAT_00961200);
  }
  _DAT_009611fc = ((void *)(0x00919488u));
  DAT_00961200 = (void *)0x0;
  return;
}


//==== 00008e5970 008e5970_FUN_008e5970 ====
void FUN_008e5970(void);

// decompiled by BatchDecomp @ 008e5970 name=FUN_008e5970 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e5970(void)

{
  _DAT_00961348 = ((void *)(0x009194a4u));
  if (DAT_0096134c != (void *)0x0) {
    operator_delete__(DAT_0096134c);
  }
  _DAT_00961348 = ((void *)(0x00919488u));
  DAT_0096134c = (void *)0x0;
  return;
}


//==== 00008e59b0 008e59b0_FUN_008e59b0 ====
void FUN_008e59b0(void);

// decompiled by BatchDecomp @ 008e59b0 name=FUN_008e59b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e59b0(void)

{
  _DAT_00961358 = ((void *)(0x009194a4u));
  if (DAT_0096135c != (void *)0x0) {
    operator_delete__(DAT_0096135c);
  }
  _DAT_00961358 = ((void *)(0x00919488u));
  DAT_0096135c = (void *)0x0;
  return;
}


//==== 00008e6210 008e6210_FUN_008e6210 ====
void FUN_008e6210(void);

// decompiled by BatchDecomp @ 008e6210 name=FUN_008e6210 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e6210(void)

{
  _DAT_00961a00 = ((void *)(0x009194a4u));
  if (DAT_00961a04 != (void *)0x0) {
    operator_delete__(DAT_00961a04);
  }
  _DAT_00961a00 = ((void *)(0x00919488u));
  DAT_00961a04 = (void *)0x0;
  return;
}


//==== 00008e6250 008e6250_FUN_008e6250 ====
void FUN_008e6250(void);

// decompiled by BatchDecomp @ 008e6250 name=FUN_008e6250 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e6250(void)

{
  _DAT_00961a50 = ((void *)(0x009194a4u));
  if (DAT_00961a54 != (void *)0x0) {
    operator_delete__(DAT_00961a54);
  }
  _DAT_00961a50 = ((void *)(0x00919488u));
  DAT_00961a54 = (void *)0x0;
  return;
}


//==== 00008e6290 008e6290_FUN_008e6290 ====
void FUN_008e6290(void);

// decompiled by BatchDecomp @ 008e6290 name=FUN_008e6290 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e6290(void)

{
  _DAT_00961a30 = ((void *)(0x009194a4u));
  if (DAT_00961a34 != (void *)0x0) {
    operator_delete__(DAT_00961a34);
  }
  _DAT_00961a30 = ((void *)(0x00919488u));
  DAT_00961a34 = (void *)0x0;
  return;
}


//==== 00008e62d0 008e62d0_FUN_008e62d0 ====
void FUN_008e62d0(void);

// decompiled by BatchDecomp @ 008e62d0 name=FUN_008e62d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e62d0(void)

{
  _DAT_009619e0 = ((void *)(0x009194a4u));
  if (DAT_009619e4 != (void *)0x0) {
    operator_delete__(DAT_009619e4);
  }
  _DAT_009619e0 = ((void *)(0x00919488u));
  DAT_009619e4 = (void *)0x0;
  return;
}


//==== 00008e6310 008e6310_FUN_008e6310 ====
void FUN_008e6310(void);

// decompiled by BatchDecomp @ 008e6310 name=FUN_008e6310 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e6310(void)

{
  _DAT_009619d0 = ((void *)(0x009194a4u));
  if (DAT_009619d4 != (void *)0x0) {
    operator_delete__(DAT_009619d4);
  }
  _DAT_009619d0 = ((void *)(0x00919488u));
  DAT_009619d4 = (void *)0x0;
  return;
}


//==== 00008e6350 008e6350_FUN_008e6350 ====
void FUN_008e6350(void);

// decompiled by BatchDecomp @ 008e6350 name=FUN_008e6350 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e6350(void)

{
  _DAT_009619f0 = ((void *)(0x009194a4u));
  if (DAT_009619f4 != (void *)0x0) {
    operator_delete__(DAT_009619f4);
  }
  _DAT_009619f0 = ((void *)(0x00919488u));
  DAT_009619f4 = (void *)0x0;
  return;
}


//==== 00008e6390 008e6390_FUN_008e6390 ====
void FUN_008e6390(void);

// decompiled by BatchDecomp @ 008e6390 name=FUN_008e6390 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e6390(void)

{
  _DAT_00961a40 = ((void *)(0x009194a4u));
  if (DAT_00961a44 != (void *)0x0) {
    operator_delete__(DAT_00961a44);
  }
  _DAT_00961a40 = ((void *)(0x00919488u));
  DAT_00961a44 = (void *)0x0;
  return;
}


//==== 00008e63d0 008e63d0_FUN_008e63d0 ====
void FUN_008e63d0(void);

// decompiled by BatchDecomp @ 008e63d0 name=FUN_008e63d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e63d0(void)

{
  _DAT_00961a20 = ((void *)(0x009194a4u));
  if (DAT_00961a24 != (void *)0x0) {
    operator_delete__(DAT_00961a24);
  }
  _DAT_00961a20 = ((void *)(0x00919488u));
  DAT_00961a24 = (void *)0x0;
  return;
}


//==== 00008e6410 008e6410_FUN_008e6410 ====
void FUN_008e6410(void);

// decompiled by BatchDecomp @ 008e6410 name=FUN_008e6410 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e6410(void)

{
  _DAT_00961a10 = ((void *)(0x009194a4u));
  if (DAT_00961a14 != (void *)0x0) {
    operator_delete__(DAT_00961a14);
  }
  _DAT_00961a10 = ((void *)(0x00919488u));
  DAT_00961a14 = (void *)0x0;
  return;
}


//==== 00008e6770 008e6770_FUN_008e6770 ====
void FUN_008e6770(void);

// decompiled by BatchDecomp @ 008e6770 name=FUN_008e6770 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e6770(void)

{
  _DAT_00962a48 = ((void *)(0x009194a4u));
  if (DAT_00962a4c != (void *)0x0) {
    operator_delete__(DAT_00962a4c);
  }
  _DAT_00962a48 = ((void *)(0x00919488u));
  DAT_00962a4c = (void *)0x0;
  return;
}


//==== 00008e6a70 008e6a70_FUN_008e6a70 ====
void FUN_008e6a70(void);

// decompiled by BatchDecomp @ 008e6a70 name=FUN_008e6a70 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e6a70(void)

{
  _DAT_00962c68 = ((void *)(0x009194a4u));
  if (DAT_00962c6c != (void *)0x0) {
    operator_delete__(DAT_00962c6c);
  }
  _DAT_00962c68 = ((void *)(0x00919488u));
  DAT_00962c6c = (void *)0x0;
  return;
}


//==== 00008e6ab0 008e6ab0_FUN_008e6ab0 ====
void FUN_008e6ab0(void);

// decompiled by BatchDecomp @ 008e6ab0 name=FUN_008e6ab0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e6ab0(void)

{
  _DAT_00962c08 = ((void *)(0x009194a4u));
  if (DAT_00962c0c != (void *)0x0) {
    operator_delete__(DAT_00962c0c);
  }
  _DAT_00962c08 = ((void *)(0x00919488u));
  DAT_00962c0c = (void *)0x0;
  return;
}


//==== 00008e6af0 008e6af0_FUN_008e6af0 ====
void FUN_008e6af0(void);

// decompiled by BatchDecomp @ 008e6af0 name=FUN_008e6af0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e6af0(void)

{
  _DAT_00962c38 = ((void *)(0x009194a4u));
  if (DAT_00962c3c != (void *)0x0) {
    operator_delete__(DAT_00962c3c);
  }
  _DAT_00962c38 = ((void *)(0x00919488u));
  DAT_00962c3c = (void *)0x0;
  return;
}


//==== 00008e6b30 008e6b30_FUN_008e6b30 ====
void FUN_008e6b30(void);

// decompiled by BatchDecomp @ 008e6b30 name=FUN_008e6b30 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e6b30(void)

{
  _DAT_00962bf8 = ((void *)(0x009194a4u));
  if (DAT_00962bfc != (void *)0x0) {
    operator_delete__(DAT_00962bfc);
  }
  _DAT_00962bf8 = ((void *)(0x00919488u));
  DAT_00962bfc = (void *)0x0;
  return;
}


//==== 00008e6b70 008e6b70_FUN_008e6b70 ====
void FUN_008e6b70(void);

// decompiled by BatchDecomp @ 008e6b70 name=FUN_008e6b70 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e6b70(void)

{
  _DAT_00962c78 = ((void *)(0x009194a4u));
  if (DAT_00962c7c != (void *)0x0) {
    operator_delete__(DAT_00962c7c);
  }
  _DAT_00962c78 = ((void *)(0x00919488u));
  DAT_00962c7c = (void *)0x0;
  return;
}


//==== 00008e6bb0 008e6bb0_FUN_008e6bb0 ====
void FUN_008e6bb0(void);

// decompiled by BatchDecomp @ 008e6bb0 name=FUN_008e6bb0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e6bb0(void)

{
  _DAT_00962be8 = ((void *)(0x009194a4u));
  if (DAT_00962bec != (void *)0x0) {
    operator_delete__(DAT_00962bec);
  }
  _DAT_00962be8 = ((void *)(0x00919488u));
  DAT_00962bec = (void *)0x0;
  return;
}


//==== 00008e6bf0 008e6bf0_FUN_008e6bf0 ====
void FUN_008e6bf0(void);

// decompiled by BatchDecomp @ 008e6bf0 name=FUN_008e6bf0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e6bf0(void)

{
  _DAT_00962c48 = ((void *)(0x009194a4u));
  if (DAT_00962c4c != (void *)0x0) {
    operator_delete__(DAT_00962c4c);
  }
  _DAT_00962c48 = ((void *)(0x00919488u));
  DAT_00962c4c = (void *)0x0;
  return;
}


//==== 00008e6c30 008e6c30_FUN_008e6c30 ====
void FUN_008e6c30(void);

// decompiled by BatchDecomp @ 008e6c30 name=FUN_008e6c30 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e6c30(void)

{
  _DAT_00962c28 = ((void *)(0x009194a4u));
  if (DAT_00962c2c != (void *)0x0) {
    operator_delete__(DAT_00962c2c);
  }
  _DAT_00962c28 = ((void *)(0x00919488u));
  DAT_00962c2c = (void *)0x0;
  return;
}


//==== 00008e6c70 008e6c70_FUN_008e6c70 ====
void FUN_008e6c70(void);

// decompiled by BatchDecomp @ 008e6c70 name=FUN_008e6c70 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e6c70(void)

{
  _DAT_00962c18 = ((void *)(0x009194a4u));
  if (DAT_00962c1c != (void *)0x0) {
    operator_delete__(DAT_00962c1c);
  }
  _DAT_00962c18 = ((void *)(0x00919488u));
  DAT_00962c1c = (void *)0x0;
  return;
}


//==== 00008e6cb0 008e6cb0_FUN_008e6cb0 ====
void FUN_008e6cb0(void);

// decompiled by BatchDecomp @ 008e6cb0 name=FUN_008e6cb0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e6cb0(void)

{
  _DAT_00962c88 = ((void *)(0x009194a4u));
  if (DAT_00962c8c != (void *)0x0) {
    operator_delete__(DAT_00962c8c);
  }
  _DAT_00962c88 = ((void *)(0x00919488u));
  DAT_00962c8c = (void *)0x0;
  return;
}


//==== 00008e6cf0 008e6cf0_FUN_008e6cf0 ====
void FUN_008e6cf0(void);

// decompiled by BatchDecomp @ 008e6cf0 name=FUN_008e6cf0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e6cf0(void)

{
  _DAT_00962c58 = ((void *)(0x009194a4u));
  if (DAT_00962c5c != (void *)0x0) {
    operator_delete__(DAT_00962c5c);
  }
  _DAT_00962c58 = ((void *)(0x00919488u));
  DAT_00962c5c = (void *)0x0;
  return;
}


//==== 00008e6f50 008e6f50_FUN_008e6f50 ====
void FUN_008e6f50(void);

// decompiled by BatchDecomp @ 008e6f50 name=FUN_008e6f50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e6f50(void)

{
  _DAT_00963220 = ((void *)(0x009194a4u));
  if (DAT_00963224 != (void *)0x0) {
    operator_delete__(DAT_00963224);
  }
  _DAT_00963220 = ((void *)(0x00919488u));
  DAT_00963224 = (void *)0x0;
  return;
}


//==== 00008e6f90 008e6f90_FUN_008e6f90 ====
void FUN_008e6f90(void);

// decompiled by BatchDecomp @ 008e6f90 name=FUN_008e6f90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e6f90(void)

{
  _DAT_00963260 = ((void *)(0x009194a4u));
  if (DAT_00963264 != (void *)0x0) {
    operator_delete__(DAT_00963264);
  }
  _DAT_00963260 = ((void *)(0x00919488u));
  DAT_00963264 = (void *)0x0;
  return;
}


//==== 00008e6fd0 008e6fd0_FUN_008e6fd0 ====
void FUN_008e6fd0(void);

// decompiled by BatchDecomp @ 008e6fd0 name=FUN_008e6fd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e6fd0(void)

{
  _DAT_00963250 = ((void *)(0x009194a4u));
  if (DAT_00963254 != (void *)0x0) {
    operator_delete__(DAT_00963254);
  }
  _DAT_00963250 = ((void *)(0x00919488u));
  DAT_00963254 = (void *)0x0;
  return;
}


//==== 00008e7010 008e7010_FUN_008e7010 ====
void FUN_008e7010(void);

// decompiled by BatchDecomp @ 008e7010 name=FUN_008e7010 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e7010(void)

{
  _DAT_00963210 = ((void *)(0x009194a4u));
  if (DAT_00963214 != (void *)0x0) {
    operator_delete__(DAT_00963214);
  }
  _DAT_00963210 = ((void *)(0x00919488u));
  DAT_00963214 = (void *)0x0;
  return;
}


//==== 00008e7050 008e7050_FUN_008e7050 ====
void FUN_008e7050(void);

// decompiled by BatchDecomp @ 008e7050 name=FUN_008e7050 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e7050(void)

{
  _DAT_00963240 = ((void *)(0x009194a4u));
  if (DAT_00963244 != (void *)0x0) {
    operator_delete__(DAT_00963244);
  }
  _DAT_00963240 = ((void *)(0x00919488u));
  DAT_00963244 = (void *)0x0;
  return;
}


//==== 00008e7090 008e7090_FUN_008e7090 ====
void FUN_008e7090(void);

// decompiled by BatchDecomp @ 008e7090 name=FUN_008e7090 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e7090(void)

{
  _DAT_00963230 = ((void *)(0x009194a4u));
  if (DAT_00963234 != (void *)0x0) {
    operator_delete__(DAT_00963234);
  }
  _DAT_00963230 = ((void *)(0x00919488u));
  DAT_00963234 = (void *)0x0;
  return;
}


//==== 00008e7310 008e7310_FUN_008e7310 ====
void FUN_008e7310(void);

// decompiled by BatchDecomp @ 008e7310 name=FUN_008e7310 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e7310(void)

{
  _DAT_009635d8 = ((void *)(0x009194a4u));
  if (DAT_009635dc != (void *)0x0) {
    operator_delete__(DAT_009635dc);
  }
  _DAT_009635d8 = ((void *)(0x00919488u));
  DAT_009635dc = (void *)0x0;
  return;
}


//==== 00008e7350 008e7350_FUN_008e7350 ====
void FUN_008e7350(void);

// decompiled by BatchDecomp @ 008e7350 name=FUN_008e7350 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e7350(void)

{
  _DAT_00963618 = ((void *)(0x009194a4u));
  if (DAT_0096361c != (void *)0x0) {
    operator_delete__(DAT_0096361c);
  }
  _DAT_00963618 = ((void *)(0x00919488u));
  DAT_0096361c = (void *)0x0;
  return;
}


//==== 00008e7390 008e7390_FUN_008e7390 ====
void FUN_008e7390(void);

// decompiled by BatchDecomp @ 008e7390 name=FUN_008e7390 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e7390(void)

{
  _DAT_00963608 = ((void *)(0x009194a4u));
  if (DAT_0096360c != (void *)0x0) {
    operator_delete__(DAT_0096360c);
  }
  _DAT_00963608 = ((void *)(0x00919488u));
  DAT_0096360c = (void *)0x0;
  return;
}


//==== 00008e73d0 008e73d0_FUN_008e73d0 ====
void FUN_008e73d0(void);

// decompiled by BatchDecomp @ 008e73d0 name=FUN_008e73d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e73d0(void)

{
  _DAT_009635c8 = ((void *)(0x009194a4u));
  if (DAT_009635cc != (void *)0x0) {
    operator_delete__(DAT_009635cc);
  }
  _DAT_009635c8 = ((void *)(0x00919488u));
  DAT_009635cc = (void *)0x0;
  return;
}


//==== 00008e7410 008e7410_FUN_008e7410 ====
void FUN_008e7410(void);

// decompiled by BatchDecomp @ 008e7410 name=FUN_008e7410 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e7410(void)

{
  _DAT_00963628 = ((void *)(0x009194a4u));
  if (DAT_0096362c != (void *)0x0) {
    operator_delete__(DAT_0096362c);
  }
  _DAT_00963628 = ((void *)(0x00919488u));
  DAT_0096362c = (void *)0x0;
  return;
}


//==== 00008e7450 008e7450_FUN_008e7450 ====
void FUN_008e7450(void);

// decompiled by BatchDecomp @ 008e7450 name=FUN_008e7450 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e7450(void)

{
  _DAT_009635f8 = ((void *)(0x009194a4u));
  if (DAT_009635fc != (void *)0x0) {
    operator_delete__(DAT_009635fc);
  }
  _DAT_009635f8 = ((void *)(0x00919488u));
  DAT_009635fc = (void *)0x0;
  return;
}


//==== 00008e7490 008e7490_FUN_008e7490 ====
void FUN_008e7490(void);

// decompiled by BatchDecomp @ 008e7490 name=FUN_008e7490 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e7490(void)

{
  _DAT_009635e8 = ((void *)(0x009194a4u));
  if (DAT_009635ec != (void *)0x0) {
    operator_delete__(DAT_009635ec);
  }
  _DAT_009635e8 = ((void *)(0x00919488u));
  DAT_009635ec = (void *)0x0;
  return;
}


//==== 00008e7750 008e7750_FUN_008e7750 ====
void FUN_008e7750(void);

// decompiled by BatchDecomp @ 008e7750 name=FUN_008e7750 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e7750(void)

{
  _DAT_009638c0 = ((void *)(0x009194a4u));
  if (DAT_009638c4 != (void *)0x0) {
    operator_delete__(DAT_009638c4);
  }
  _DAT_009638c0 = ((void *)(0x00919488u));
  DAT_009638c4 = (void *)0x0;
  return;
}


//==== 00008e7790 008e7790_FUN_008e7790 ====
void FUN_008e7790(void);

// decompiled by BatchDecomp @ 008e7790 name=FUN_008e7790 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e7790(void)

{
  _DAT_00963870 = ((void *)(0x009194a4u));
  if (DAT_00963874 != (void *)0x0) {
    operator_delete__(DAT_00963874);
  }
  _DAT_00963870 = ((void *)(0x00919488u));
  DAT_00963874 = (void *)0x0;
  return;
}


//==== 00008e77d0 008e77d0_FUN_008e77d0 ====
void FUN_008e77d0(void);

// decompiled by BatchDecomp @ 008e77d0 name=FUN_008e77d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e77d0(void)

{
  _DAT_00963910 = ((void *)(0x009194a4u));
  if (DAT_00963914 != (void *)0x0) {
    operator_delete__(DAT_00963914);
  }
  _DAT_00963910 = ((void *)(0x00919488u));
  DAT_00963914 = (void *)0x0;
  return;
}


//==== 00008e7810 008e7810_FUN_008e7810 ====
void FUN_008e7810(void);

// decompiled by BatchDecomp @ 008e7810 name=FUN_008e7810 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e7810(void)

{
  _DAT_009638a0 = ((void *)(0x009194a4u));
  if (DAT_009638a4 != (void *)0x0) {
    operator_delete__(DAT_009638a4);
  }
  _DAT_009638a0 = ((void *)(0x00919488u));
  DAT_009638a4 = (void *)0x0;
  return;
}


//==== 00008e7850 008e7850_FUN_008e7850 ====
void FUN_008e7850(void);

// decompiled by BatchDecomp @ 008e7850 name=FUN_008e7850 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e7850(void)

{
  _DAT_00963860 = ((void *)(0x009194a4u));
  if (DAT_00963864 != (void *)0x0) {
    operator_delete__(DAT_00963864);
  }
  _DAT_00963860 = ((void *)(0x00919488u));
  DAT_00963864 = (void *)0x0;
  return;
}


//==== 00008e7890 008e7890_FUN_008e7890 ====
void FUN_008e7890(void);

// decompiled by BatchDecomp @ 008e7890 name=FUN_008e7890 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e7890(void)

{
  _DAT_009638e0 = ((void *)(0x009194a4u));
  if (DAT_009638e4 != (void *)0x0) {
    operator_delete__(DAT_009638e4);
  }
  _DAT_009638e0 = ((void *)(0x00919488u));
  DAT_009638e4 = (void *)0x0;
  return;
}


//==== 00008e78d0 008e78d0_FUN_008e78d0 ====
void FUN_008e78d0(void);

// decompiled by BatchDecomp @ 008e78d0 name=FUN_008e78d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e78d0(void)

{
  _DAT_00963850 = ((void *)(0x009194a4u));
  if (DAT_00963854 != (void *)0x0) {
    operator_delete__(DAT_00963854);
  }
  _DAT_00963850 = ((void *)(0x00919488u));
  DAT_00963854 = (void *)0x0;
  return;
}


//==== 00008e7910 008e7910_FUN_008e7910 ====
void FUN_008e7910(void);

// decompiled by BatchDecomp @ 008e7910 name=FUN_008e7910 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e7910(void)

{
  _DAT_00963900 = ((void *)(0x009194a4u));
  if (DAT_00963904 != (void *)0x0) {
    operator_delete__(DAT_00963904);
  }
  _DAT_00963900 = ((void *)(0x00919488u));
  DAT_00963904 = (void *)0x0;
  return;
}


//==== 00008e7950 008e7950_FUN_008e7950 ====
void FUN_008e7950(void);

// decompiled by BatchDecomp @ 008e7950 name=FUN_008e7950 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e7950(void)

{
  _DAT_009638d0 = ((void *)(0x009194a4u));
  if (DAT_009638d4 != (void *)0x0) {
    operator_delete__(DAT_009638d4);
  }
  _DAT_009638d0 = ((void *)(0x00919488u));
  DAT_009638d4 = (void *)0x0;
  return;
}


//==== 00008e7990 008e7990_FUN_008e7990 ====
void FUN_008e7990(void);

// decompiled by BatchDecomp @ 008e7990 name=FUN_008e7990 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e7990(void)

{
  _DAT_00963890 = ((void *)(0x009194a4u));
  if (DAT_00963894 != (void *)0x0) {
    operator_delete__(DAT_00963894);
  }
  _DAT_00963890 = ((void *)(0x00919488u));
  DAT_00963894 = (void *)0x0;
  return;
}


//==== 00008e79d0 008e79d0_FUN_008e79d0 ====
void FUN_008e79d0(void);

// decompiled by BatchDecomp @ 008e79d0 name=FUN_008e79d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e79d0(void)

{
  _DAT_00963880 = ((void *)(0x009194a4u));
  if (DAT_00963884 != (void *)0x0) {
    operator_delete__(DAT_00963884);
  }
  _DAT_00963880 = ((void *)(0x00919488u));
  DAT_00963884 = (void *)0x0;
  return;
}


//==== 00008e7a10 008e7a10_FUN_008e7a10 ====
void FUN_008e7a10(void);

// decompiled by BatchDecomp @ 008e7a10 name=FUN_008e7a10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e7a10(void)

{
  _DAT_009638f0 = ((void *)(0x009194a4u));
  if (DAT_009638f4 != (void *)0x0) {
    operator_delete__(DAT_009638f4);
  }
  _DAT_009638f0 = ((void *)(0x00919488u));
  DAT_009638f4 = (void *)0x0;
  return;
}


//==== 00008e7a50 008e7a50_FUN_008e7a50 ====
void FUN_008e7a50(void);

// decompiled by BatchDecomp @ 008e7a50 name=FUN_008e7a50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e7a50(void)

{
  _DAT_009638b0 = ((void *)(0x009194a4u));
  if (DAT_009638b4 != (void *)0x0) {
    operator_delete__(DAT_009638b4);
  }
  _DAT_009638b0 = ((void *)(0x00919488u));
  DAT_009638b4 = (void *)0x0;
  return;
}


//==== 00008e7d90 008e7d90_FUN_008e7d90 ====
void FUN_008e7d90(void);

// decompiled by BatchDecomp @ 008e7d90 name=FUN_008e7d90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e7d90(void)

{
  _DAT_00963bd8 = ((void *)(0x009194a4u));
  if (DAT_00963bdc != (void *)0x0) {
    operator_delete__(DAT_00963bdc);
  }
  _DAT_00963bd8 = ((void *)(0x00919488u));
  DAT_00963bdc = (void *)0x0;
  return;
}


//==== 00008e7dd0 008e7dd0_FUN_008e7dd0 ====
void FUN_008e7dd0(void);

// decompiled by BatchDecomp @ 008e7dd0 name=FUN_008e7dd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e7dd0(void)

{
  _DAT_00963b68 = ((void *)(0x009194a4u));
  if (DAT_00963b6c != (void *)0x0) {
    operator_delete__(DAT_00963b6c);
  }
  _DAT_00963b68 = ((void *)(0x00919488u));
  DAT_00963b6c = (void *)0x0;
  return;
}


//==== 00008e7e10 008e7e10_FUN_008e7e10 ====
void FUN_008e7e10(void);

// decompiled by BatchDecomp @ 008e7e10 name=FUN_008e7e10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e7e10(void)

{
  _DAT_00963be8 = ((void *)(0x009194a4u));
  if (DAT_00963bec != (void *)0x0) {
    operator_delete__(DAT_00963bec);
  }
  _DAT_00963be8 = ((void *)(0x00919488u));
  DAT_00963bec = (void *)0x0;
  return;
}


//==== 00008e7e50 008e7e50_FUN_008e7e50 ====
void FUN_008e7e50(void);

// decompiled by BatchDecomp @ 008e7e50 name=FUN_008e7e50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e7e50(void)

{
  _DAT_00963b98 = ((void *)(0x009194a4u));
  if (DAT_00963b9c != (void *)0x0) {
    operator_delete__(DAT_00963b9c);
  }
  _DAT_00963b98 = ((void *)(0x00919488u));
  DAT_00963b9c = (void *)0x0;
  return;
}


//==== 00008e7e90 008e7e90_FUN_008e7e90 ====
void FUN_008e7e90(void);

// decompiled by BatchDecomp @ 008e7e90 name=FUN_008e7e90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e7e90(void)

{
  _DAT_00963b58 = ((void *)(0x009194a4u));
  if (DAT_00963b5c != (void *)0x0) {
    operator_delete__(DAT_00963b5c);
  }
  _DAT_00963b58 = ((void *)(0x00919488u));
  DAT_00963b5c = (void *)0x0;
  return;
}


//==== 00008e7ed0 008e7ed0_FUN_008e7ed0 ====
void FUN_008e7ed0(void);

// decompiled by BatchDecomp @ 008e7ed0 name=FUN_008e7ed0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e7ed0(void)

{
  _DAT_00963b48 = ((void *)(0x009194a4u));
  if (DAT_00963b4c != (void *)0x0) {
    operator_delete__(DAT_00963b4c);
  }
  _DAT_00963b48 = ((void *)(0x00919488u));
  DAT_00963b4c = (void *)0x0;
  return;
}


//==== 00008e7f10 008e7f10_FUN_008e7f10 ====
void FUN_008e7f10(void);

// decompiled by BatchDecomp @ 008e7f10 name=FUN_008e7f10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e7f10(void)

{
  _DAT_00963ba8 = ((void *)(0x009194a4u));
  if (DAT_00963bac != (void *)0x0) {
    operator_delete__(DAT_00963bac);
  }
  _DAT_00963ba8 = ((void *)(0x00919488u));
  DAT_00963bac = (void *)0x0;
  return;
}


//==== 00008e7f50 008e7f50_FUN_008e7f50 ====
void FUN_008e7f50(void);

// decompiled by BatchDecomp @ 008e7f50 name=FUN_008e7f50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e7f50(void)

{
  _DAT_00963bb8 = ((void *)(0x009194a4u));
  if (DAT_00963bbc != (void *)0x0) {
    operator_delete__(DAT_00963bbc);
  }
  _DAT_00963bb8 = ((void *)(0x00919488u));
  DAT_00963bbc = (void *)0x0;
  return;
}


//==== 00008e7f90 008e7f90_FUN_008e7f90 ====
void FUN_008e7f90(void);

// decompiled by BatchDecomp @ 008e7f90 name=FUN_008e7f90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e7f90(void)

{
  _DAT_00963b88 = ((void *)(0x009194a4u));
  if (DAT_00963b8c != (void *)0x0) {
    operator_delete__(DAT_00963b8c);
  }
  _DAT_00963b88 = ((void *)(0x00919488u));
  DAT_00963b8c = (void *)0x0;
  return;
}


//==== 00008e7fd0 008e7fd0_FUN_008e7fd0 ====
void FUN_008e7fd0(void);

// decompiled by BatchDecomp @ 008e7fd0 name=FUN_008e7fd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e7fd0(void)

{
  _DAT_00963b78 = ((void *)(0x009194a4u));
  if (DAT_00963b7c != (void *)0x0) {
    operator_delete__(DAT_00963b7c);
  }
  _DAT_00963b78 = ((void *)(0x00919488u));
  DAT_00963b7c = (void *)0x0;
  return;
}


//==== 00008e8010 008e8010_FUN_008e8010 ====
void FUN_008e8010(void);

// decompiled by BatchDecomp @ 008e8010 name=FUN_008e8010 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e8010(void)

{
  _DAT_00963bc8 = ((void *)(0x009194a4u));
  if (DAT_00963bcc != (void *)0x0) {
    operator_delete__(DAT_00963bcc);
  }
  _DAT_00963bc8 = ((void *)(0x00919488u));
  DAT_00963bcc = (void *)0x0;
  return;
}


//==== 00008e8270 008e8270_FUN_008e8270 ====
void FUN_008e8270(void);

// decompiled by BatchDecomp @ 008e8270 name=FUN_008e8270 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e8270(void)

{
  _DAT_00963d70 = ((void *)(0x009194a4u));
  if (DAT_00963d74 != (void *)0x0) {
    operator_delete__(DAT_00963d74);
  }
  _DAT_00963d70 = ((void *)(0x00919488u));
  DAT_00963d74 = (void *)0x0;
  return;
}


//==== 00008e82b0 008e82b0_FUN_008e82b0 ====
void FUN_008e82b0(void);

// decompiled by BatchDecomp @ 008e82b0 name=FUN_008e82b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e82b0(void)

{
  _DAT_00963db0 = ((void *)(0x009194a4u));
  if (DAT_00963db4 != (void *)0x0) {
    operator_delete__(DAT_00963db4);
  }
  _DAT_00963db0 = ((void *)(0x00919488u));
  DAT_00963db4 = (void *)0x0;
  return;
}


//==== 00008e82f0 008e82f0_FUN_008e82f0 ====
void FUN_008e82f0(void);

// decompiled by BatchDecomp @ 008e82f0 name=FUN_008e82f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e82f0(void)

{
  _DAT_00963da0 = ((void *)(0x009194a4u));
  if (DAT_00963da4 != (void *)0x0) {
    operator_delete__(DAT_00963da4);
  }
  _DAT_00963da0 = ((void *)(0x00919488u));
  DAT_00963da4 = (void *)0x0;
  return;
}


//==== 00008e8330 008e8330_FUN_008e8330 ====
void FUN_008e8330(void);

// decompiled by BatchDecomp @ 008e8330 name=FUN_008e8330 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e8330(void)

{
  _DAT_00963d60 = ((void *)(0x009194a4u));
  if (DAT_00963d64 != (void *)0x0) {
    operator_delete__(DAT_00963d64);
  }
  _DAT_00963d60 = ((void *)(0x00919488u));
  DAT_00963d64 = (void *)0x0;
  return;
}


//==== 00008e8370 008e8370_FUN_008e8370 ====
void FUN_008e8370(void);

// decompiled by BatchDecomp @ 008e8370 name=FUN_008e8370 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e8370(void)

{
  _DAT_00963d90 = ((void *)(0x009194a4u));
  if (DAT_00963d94 != (void *)0x0) {
    operator_delete__(DAT_00963d94);
  }
  _DAT_00963d90 = ((void *)(0x00919488u));
  DAT_00963d94 = (void *)0x0;
  return;
}


//==== 00008e83b0 008e83b0_FUN_008e83b0 ====
void FUN_008e83b0(void);

// decompiled by BatchDecomp @ 008e83b0 name=FUN_008e83b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e83b0(void)

{
  _DAT_00963d80 = ((void *)(0x009194a4u));
  if (DAT_00963d84 != (void *)0x0) {
    operator_delete__(DAT_00963d84);
  }
  _DAT_00963d80 = ((void *)(0x00919488u));
  DAT_00963d84 = (void *)0x0;
  return;
}


//==== 00008e8750 008e8750_FUN_008e8750 ====
void FUN_008e8750(void);

// decompiled by BatchDecomp @ 008e8750 name=FUN_008e8750 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e8750(void)

{
  _DAT_009641c0 = ((void *)(0x009194a4u));
  if (DAT_009641c4 != (void *)0x0) {
    operator_delete__(DAT_009641c4);
  }
  _DAT_009641c0 = ((void *)(0x00919488u));
  DAT_009641c4 = (void *)0x0;
  return;
}


//==== 00008e8790 008e8790_FUN_008e8790 ====
void FUN_008e8790(void);

// decompiled by BatchDecomp @ 008e8790 name=FUN_008e8790 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e8790(void)

{
  _DAT_00964160 = ((void *)(0x009194a4u));
  if (DAT_00964164 != (void *)0x0) {
    operator_delete__(DAT_00964164);
  }
  _DAT_00964160 = ((void *)(0x00919488u));
  DAT_00964164 = (void *)0x0;
  return;
}


//==== 00008e87d0 008e87d0_FUN_008e87d0 ====
void FUN_008e87d0(void);

// decompiled by BatchDecomp @ 008e87d0 name=FUN_008e87d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e87d0(void)

{
  _DAT_009641a0 = ((void *)(0x009194a4u));
  if (DAT_009641a4 != (void *)0x0) {
    operator_delete__(DAT_009641a4);
  }
  _DAT_009641a0 = ((void *)(0x00919488u));
  DAT_009641a4 = (void *)0x0;
  return;
}


//==== 00008e8810 008e8810_FUN_008e8810 ====
void FUN_008e8810(void);

// decompiled by BatchDecomp @ 008e8810 name=FUN_008e8810 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e8810(void)

{
  _DAT_00964190 = ((void *)(0x009194a4u));
  if (DAT_00964194 != (void *)0x0) {
    operator_delete__(DAT_00964194);
  }
  _DAT_00964190 = ((void *)(0x00919488u));
  DAT_00964194 = (void *)0x0;
  return;
}


//==== 00008e8850 008e8850_FUN_008e8850 ====
void FUN_008e8850(void);

// decompiled by BatchDecomp @ 008e8850 name=FUN_008e8850 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e8850(void)

{
  _DAT_009641e0 = ((void *)(0x009194a4u));
  if (DAT_009641e4 != (void *)0x0) {
    operator_delete__(DAT_009641e4);
  }
  _DAT_009641e0 = ((void *)(0x00919488u));
  DAT_009641e4 = (void *)0x0;
  return;
}


//==== 00008e8890 008e8890_FUN_008e8890 ====
void FUN_008e8890(void);

// decompiled by BatchDecomp @ 008e8890 name=FUN_008e8890 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e8890(void)

{
  _DAT_00964150 = ((void *)(0x009194a4u));
  if (DAT_00964154 != (void *)0x0) {
    operator_delete__(DAT_00964154);
  }
  _DAT_00964150 = ((void *)(0x00919488u));
  DAT_00964154 = (void *)0x0;
  return;
}


//==== 00008e88d0 008e88d0_FUN_008e88d0 ====
void FUN_008e88d0(void);

// decompiled by BatchDecomp @ 008e88d0 name=FUN_008e88d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e88d0(void)

{
  _DAT_009641d0 = ((void *)(0x009194a4u));
  if (DAT_009641d4 != (void *)0x0) {
    operator_delete__(DAT_009641d4);
  }
  _DAT_009641d0 = ((void *)(0x00919488u));
  DAT_009641d4 = (void *)0x0;
  return;
}


//==== 00008e8910 008e8910_FUN_008e8910 ====
void FUN_008e8910(void);

// decompiled by BatchDecomp @ 008e8910 name=FUN_008e8910 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e8910(void)

{
  _DAT_00964180 = ((void *)(0x009194a4u));
  if (DAT_00964184 != (void *)0x0) {
    operator_delete__(DAT_00964184);
  }
  _DAT_00964180 = ((void *)(0x00919488u));
  DAT_00964184 = (void *)0x0;
  return;
}


//==== 00008e8950 008e8950_FUN_008e8950 ====
void FUN_008e8950(void);

// decompiled by BatchDecomp @ 008e8950 name=FUN_008e8950 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e8950(void)

{
  _DAT_00964170 = ((void *)(0x009194a4u));
  if (DAT_00964174 != (void *)0x0) {
    operator_delete__(DAT_00964174);
  }
  _DAT_00964170 = ((void *)(0x00919488u));
  DAT_00964174 = (void *)0x0;
  return;
}


//==== 00008e8990 008e8990_FUN_008e8990 ====
void FUN_008e8990(void);

// decompiled by BatchDecomp @ 008e8990 name=FUN_008e8990 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e8990(void)

{
  _DAT_009641f0 = ((void *)(0x009194a4u));
  if (DAT_009641f4 != (void *)0x0) {
    operator_delete__(DAT_009641f4);
  }
  _DAT_009641f0 = ((void *)(0x00919488u));
  DAT_009641f4 = (void *)0x0;
  return;
}


//==== 00008e89d0 008e89d0_FUN_008e89d0 ====
void FUN_008e89d0(void);

// decompiled by BatchDecomp @ 008e89d0 name=FUN_008e89d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e89d0(void)

{
  _DAT_009641b0 = ((void *)(0x009194a4u));
  if (DAT_009641b4 != (void *)0x0) {
    operator_delete__(DAT_009641b4);
  }
  _DAT_009641b0 = ((void *)(0x00919488u));
  DAT_009641b4 = (void *)0x0;
  return;
}


//==== 00008e8cd0 008e8cd0_FUN_008e8cd0 ====
void FUN_008e8cd0(void);

// decompiled by BatchDecomp @ 008e8cd0 name=FUN_008e8cd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e8cd0(void)

{
  _DAT_00964490 = ((void *)(0x009194a4u));
  if (DAT_00964494 != (void *)0x0) {
    operator_delete__(DAT_00964494);
  }
  _DAT_00964490 = ((void *)(0x00919488u));
  DAT_00964494 = (void *)0x0;
  return;
}


//==== 00008e8d10 008e8d10_FUN_008e8d10 ====
void FUN_008e8d10(void);

// decompiled by BatchDecomp @ 008e8d10 name=FUN_008e8d10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e8d10(void)

{
  _DAT_00964430 = ((void *)(0x009194a4u));
  if (DAT_00964434 != (void *)0x0) {
    operator_delete__(DAT_00964434);
  }
  _DAT_00964430 = ((void *)(0x00919488u));
  DAT_00964434 = (void *)0x0;
  return;
}


//==== 00008e8d50 008e8d50_FUN_008e8d50 ====
void FUN_008e8d50(void);

// decompiled by BatchDecomp @ 008e8d50 name=FUN_008e8d50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e8d50(void)

{
  _DAT_00964470 = ((void *)(0x009194a4u));
  if (DAT_00964474 != (void *)0x0) {
    operator_delete__(DAT_00964474);
  }
  _DAT_00964470 = ((void *)(0x00919488u));
  DAT_00964474 = (void *)0x0;
  return;
}


//==== 00008e8d90 008e8d90_FUN_008e8d90 ====
void FUN_008e8d90(void);

// decompiled by BatchDecomp @ 008e8d90 name=FUN_008e8d90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e8d90(void)

{
  _DAT_00964460 = ((void *)(0x009194a4u));
  if (DAT_00964464 != (void *)0x0) {
    operator_delete__(DAT_00964464);
  }
  _DAT_00964460 = ((void *)(0x00919488u));
  DAT_00964464 = (void *)0x0;
  return;
}


//==== 00008e8dd0 008e8dd0_FUN_008e8dd0 ====
void FUN_008e8dd0(void);

// decompiled by BatchDecomp @ 008e8dd0 name=FUN_008e8dd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e8dd0(void)

{
  _DAT_009644b0 = ((void *)(0x009194a4u));
  if (DAT_009644b4 != (void *)0x0) {
    operator_delete__(DAT_009644b4);
  }
  _DAT_009644b0 = ((void *)(0x00919488u));
  DAT_009644b4 = (void *)0x0;
  return;
}


//==== 00008e8e10 008e8e10_FUN_008e8e10 ====
void FUN_008e8e10(void);

// decompiled by BatchDecomp @ 008e8e10 name=FUN_008e8e10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e8e10(void)

{
  _DAT_00964420 = ((void *)(0x009194a4u));
  if (DAT_00964424 != (void *)0x0) {
    operator_delete__(DAT_00964424);
  }
  _DAT_00964420 = ((void *)(0x00919488u));
  DAT_00964424 = (void *)0x0;
  return;
}


//==== 00008e8e50 008e8e50_FUN_008e8e50 ====
void FUN_008e8e50(void);

// decompiled by BatchDecomp @ 008e8e50 name=FUN_008e8e50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e8e50(void)

{
  _DAT_009644a0 = ((void *)(0x009194a4u));
  if (DAT_009644a4 != (void *)0x0) {
    operator_delete__(DAT_009644a4);
  }
  _DAT_009644a0 = ((void *)(0x00919488u));
  DAT_009644a4 = (void *)0x0;
  return;
}


//==== 00008e8e90 008e8e90_FUN_008e8e90 ====
void FUN_008e8e90(void);

// decompiled by BatchDecomp @ 008e8e90 name=FUN_008e8e90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e8e90(void)

{
  _DAT_00964450 = ((void *)(0x009194a4u));
  if (DAT_00964454 != (void *)0x0) {
    operator_delete__(DAT_00964454);
  }
  _DAT_00964450 = ((void *)(0x00919488u));
  DAT_00964454 = (void *)0x0;
  return;
}


//==== 00008e8ed0 008e8ed0_FUN_008e8ed0 ====
void FUN_008e8ed0(void);

// decompiled by BatchDecomp @ 008e8ed0 name=FUN_008e8ed0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e8ed0(void)

{
  _DAT_00964440 = ((void *)(0x009194a4u));
  if (DAT_00964444 != (void *)0x0) {
    operator_delete__(DAT_00964444);
  }
  _DAT_00964440 = ((void *)(0x00919488u));
  DAT_00964444 = (void *)0x0;
  return;
}


//==== 00008e8f10 008e8f10_FUN_008e8f10 ====
void FUN_008e8f10(void);

// decompiled by BatchDecomp @ 008e8f10 name=FUN_008e8f10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e8f10(void)

{
  _DAT_009644c0 = ((void *)(0x009194a4u));
  if (DAT_009644c4 != (void *)0x0) {
    operator_delete__(DAT_009644c4);
  }
  _DAT_009644c0 = ((void *)(0x00919488u));
  DAT_009644c4 = (void *)0x0;
  return;
}


//==== 00008e8f50 008e8f50_FUN_008e8f50 ====
void FUN_008e8f50(void);

// decompiled by BatchDecomp @ 008e8f50 name=FUN_008e8f50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e8f50(void)

{
  _DAT_00964480 = ((void *)(0x009194a4u));
  if (DAT_00964484 != (void *)0x0) {
    operator_delete__(DAT_00964484);
  }
  _DAT_00964480 = ((void *)(0x00919488u));
  DAT_00964484 = (void *)0x0;
  return;
}


//==== 00008e9180 008e9180_FUN_008e9180 ====
void FUN_008e9180(void);

// decompiled by BatchDecomp @ 008e9180 name=FUN_008e9180 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e9180(void)

{
  _DAT_00964608 = ((void *)(0x009194a4u));
  if (DAT_0096460c != (void *)0x0) {
    operator_delete__(DAT_0096460c);
  }
  _DAT_00964608 = ((void *)(0x00919488u));
  DAT_0096460c = (void *)0x0;
  return;
}


//==== 00008e91c0 008e91c0_FUN_008e91c0 ====
void FUN_008e91c0(void);

// decompiled by BatchDecomp @ 008e91c0 name=FUN_008e91c0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e91c0(void)

{
  _DAT_00964628 = ((void *)(0x009194a4u));
  if (DAT_0096462c != (void *)0x0) {
    operator_delete__(DAT_0096462c);
  }
  _DAT_00964628 = ((void *)(0x00919488u));
  DAT_0096462c = (void *)0x0;
  return;
}


//==== 00008e9200 008e9200_FUN_008e9200 ====
void FUN_008e9200(void);

// decompiled by BatchDecomp @ 008e9200 name=FUN_008e9200 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e9200(void)

{
  _DAT_009645f8 = ((void *)(0x009194a4u));
  if (DAT_009645fc != (void *)0x0) {
    operator_delete__(DAT_009645fc);
  }
  _DAT_009645f8 = ((void *)(0x00919488u));
  DAT_009645fc = (void *)0x0;
  return;
}


//==== 00008e9240 008e9240_FUN_008e9240 ====
void FUN_008e9240(void);

// decompiled by BatchDecomp @ 008e9240 name=FUN_008e9240 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e9240(void)

{
  _DAT_00964618 = ((void *)(0x009194a4u));
  if (DAT_0096461c != (void *)0x0) {
    operator_delete__(DAT_0096461c);
  }
  _DAT_00964618 = ((void *)(0x00919488u));
  DAT_0096461c = (void *)0x0;
  return;
}


//==== 00008e9460 008e9460_FUN_008e9460 ====
void FUN_008e9460(void);

// decompiled by BatchDecomp @ 008e9460 name=FUN_008e9460 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e9460(void)

{
  _DAT_00964860 = ((void *)(0x009194a4u));
  if (DAT_00964864 != (void *)0x0) {
    operator_delete__(DAT_00964864);
  }
  _DAT_00964860 = ((void *)(0x00919488u));
  DAT_00964864 = (void *)0x0;
  return;
}


//==== 00008e94a0 008e94a0_FUN_008e94a0 ====
void FUN_008e94a0(void);

// decompiled by BatchDecomp @ 008e94a0 name=FUN_008e94a0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e94a0(void)

{
  _DAT_00964800 = ((void *)(0x009194a4u));
  if (DAT_00964804 != (void *)0x0) {
    operator_delete__(DAT_00964804);
  }
  _DAT_00964800 = ((void *)(0x00919488u));
  DAT_00964804 = (void *)0x0;
  return;
}


//==== 00008e94e0 008e94e0_FUN_008e94e0 ====
void FUN_008e94e0(void);

// decompiled by BatchDecomp @ 008e94e0 name=FUN_008e94e0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e94e0(void)

{
  _DAT_00964840 = ((void *)(0x009194a4u));
  if (DAT_00964844 != (void *)0x0) {
    operator_delete__(DAT_00964844);
  }
  _DAT_00964840 = ((void *)(0x00919488u));
  DAT_00964844 = (void *)0x0;
  return;
}


//==== 00008e9520 008e9520_FUN_008e9520 ====
void FUN_008e9520(void);

// decompiled by BatchDecomp @ 008e9520 name=FUN_008e9520 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e9520(void)

{
  _DAT_00964830 = ((void *)(0x009194a4u));
  if (DAT_00964834 != (void *)0x0) {
    operator_delete__(DAT_00964834);
  }
  _DAT_00964830 = ((void *)(0x00919488u));
  DAT_00964834 = (void *)0x0;
  return;
}


//==== 00008e9560 008e9560_FUN_008e9560 ====
void FUN_008e9560(void);

// decompiled by BatchDecomp @ 008e9560 name=FUN_008e9560 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e9560(void)

{
  _DAT_00964880 = ((void *)(0x009194a4u));
  if (DAT_00964884 != (void *)0x0) {
    operator_delete__(DAT_00964884);
  }
  _DAT_00964880 = ((void *)(0x00919488u));
  DAT_00964884 = (void *)0x0;
  return;
}


//==== 00008e95a0 008e95a0_FUN_008e95a0 ====
void FUN_008e95a0(void);

// decompiled by BatchDecomp @ 008e95a0 name=FUN_008e95a0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e95a0(void)

{
  _DAT_009647f0 = ((void *)(0x009194a4u));
  if (DAT_009647f4 != (void *)0x0) {
    operator_delete__(DAT_009647f4);
  }
  _DAT_009647f0 = ((void *)(0x00919488u));
  DAT_009647f4 = (void *)0x0;
  return;
}


//==== 00008e95e0 008e95e0_FUN_008e95e0 ====
void FUN_008e95e0(void);

// decompiled by BatchDecomp @ 008e95e0 name=FUN_008e95e0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e95e0(void)

{
  _DAT_00964870 = ((void *)(0x009194a4u));
  if (DAT_00964874 != (void *)0x0) {
    operator_delete__(DAT_00964874);
  }
  _DAT_00964870 = ((void *)(0x00919488u));
  DAT_00964874 = (void *)0x0;
  return;
}


//==== 00008e9620 008e9620_FUN_008e9620 ====
void FUN_008e9620(void);

// decompiled by BatchDecomp @ 008e9620 name=FUN_008e9620 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e9620(void)

{
  _DAT_00964820 = ((void *)(0x009194a4u));
  if (DAT_00964824 != (void *)0x0) {
    operator_delete__(DAT_00964824);
  }
  _DAT_00964820 = ((void *)(0x00919488u));
  DAT_00964824 = (void *)0x0;
  return;
}


//==== 00008e9660 008e9660_FUN_008e9660 ====
void FUN_008e9660(void);

// decompiled by BatchDecomp @ 008e9660 name=FUN_008e9660 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e9660(void)

{
  _DAT_00964810 = ((void *)(0x009194a4u));
  if (DAT_00964814 != (void *)0x0) {
    operator_delete__(DAT_00964814);
  }
  _DAT_00964810 = ((void *)(0x00919488u));
  DAT_00964814 = (void *)0x0;
  return;
}


//==== 00008e96a0 008e96a0_FUN_008e96a0 ====
void FUN_008e96a0(void);

// decompiled by BatchDecomp @ 008e96a0 name=FUN_008e96a0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e96a0(void)

{
  _DAT_00964890 = ((void *)(0x009194a4u));
  if (DAT_00964894 != (void *)0x0) {
    operator_delete__(DAT_00964894);
  }
  _DAT_00964890 = ((void *)(0x00919488u));
  DAT_00964894 = (void *)0x0;
  return;
}


//==== 00008e96e0 008e96e0_FUN_008e96e0 ====
void FUN_008e96e0(void);

// decompiled by BatchDecomp @ 008e96e0 name=FUN_008e96e0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e96e0(void)

{
  _DAT_00964850 = ((void *)(0x009194a4u));
  if (DAT_00964854 != (void *)0x0) {
    operator_delete__(DAT_00964854);
  }
  _DAT_00964850 = ((void *)(0x00919488u));
  DAT_00964854 = (void *)0x0;
  return;
}


//==== 00008e9ad0 008e9ad0_FUN_008e9ad0 ====
void FUN_008e9ad0(void);

// decompiled by BatchDecomp @ 008e9ad0 name=FUN_008e9ad0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e9ad0(void)

{
  _DAT_00964cd8 = ((void *)(0x009194a4u));
  if (DAT_00964cdc != (void *)0x0) {
    operator_delete__(DAT_00964cdc);
  }
  _DAT_00964cd8 = ((void *)(0x00919488u));
  DAT_00964cdc = (void *)0x0;
  return;
}


//==== 00008e9b10 008e9b10_FUN_008e9b10 ====
void FUN_008e9b10(void);

// decompiled by BatchDecomp @ 008e9b10 name=FUN_008e9b10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e9b10(void)

{
  _DAT_00964c78 = ((void *)(0x009194a4u));
  if (DAT_00964c7c != (void *)0x0) {
    operator_delete__(DAT_00964c7c);
  }
  _DAT_00964c78 = ((void *)(0x00919488u));
  DAT_00964c7c = (void *)0x0;
  return;
}


//==== 00008e9b50 008e9b50_FUN_008e9b50 ====
void FUN_008e9b50(void);

// decompiled by BatchDecomp @ 008e9b50 name=FUN_008e9b50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e9b50(void)

{
  _DAT_00964cb8 = ((void *)(0x009194a4u));
  if (DAT_00964cbc != (void *)0x0) {
    operator_delete__(DAT_00964cbc);
  }
  _DAT_00964cb8 = ((void *)(0x00919488u));
  DAT_00964cbc = (void *)0x0;
  return;
}


//==== 00008e9b90 008e9b90_FUN_008e9b90 ====
void FUN_008e9b90(void);

// decompiled by BatchDecomp @ 008e9b90 name=FUN_008e9b90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e9b90(void)

{
  _DAT_00964ca8 = ((void *)(0x009194a4u));
  if (DAT_00964cac != (void *)0x0) {
    operator_delete__(DAT_00964cac);
  }
  _DAT_00964ca8 = ((void *)(0x00919488u));
  DAT_00964cac = (void *)0x0;
  return;
}


//==== 00008e9bd0 008e9bd0_FUN_008e9bd0 ====
void FUN_008e9bd0(void);

// decompiled by BatchDecomp @ 008e9bd0 name=FUN_008e9bd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e9bd0(void)

{
  _DAT_00964cf8 = ((void *)(0x009194a4u));
  if (DAT_00964cfc != (void *)0x0) {
    operator_delete__(DAT_00964cfc);
  }
  _DAT_00964cf8 = ((void *)(0x00919488u));
  DAT_00964cfc = (void *)0x0;
  return;
}


//==== 00008e9c10 008e9c10_FUN_008e9c10 ====
void FUN_008e9c10(void);

// decompiled by BatchDecomp @ 008e9c10 name=FUN_008e9c10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e9c10(void)

{
  _DAT_00964c68 = ((void *)(0x009194a4u));
  if (DAT_00964c6c != (void *)0x0) {
    operator_delete__(DAT_00964c6c);
  }
  _DAT_00964c68 = ((void *)(0x00919488u));
  DAT_00964c6c = (void *)0x0;
  return;
}


//==== 00008e9c50 008e9c50_FUN_008e9c50 ====
void FUN_008e9c50(void);

// decompiled by BatchDecomp @ 008e9c50 name=FUN_008e9c50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e9c50(void)

{
  _DAT_00964ce8 = ((void *)(0x009194a4u));
  if (DAT_00964cec != (void *)0x0) {
    operator_delete__(DAT_00964cec);
  }
  _DAT_00964ce8 = ((void *)(0x00919488u));
  DAT_00964cec = (void *)0x0;
  return;
}


//==== 00008e9c90 008e9c90_FUN_008e9c90 ====
void FUN_008e9c90(void);

// decompiled by BatchDecomp @ 008e9c90 name=FUN_008e9c90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e9c90(void)

{
  _DAT_00964c98 = ((void *)(0x009194a4u));
  if (DAT_00964c9c != (void *)0x0) {
    operator_delete__(DAT_00964c9c);
  }
  _DAT_00964c98 = ((void *)(0x00919488u));
  DAT_00964c9c = (void *)0x0;
  return;
}


//==== 00008e9cd0 008e9cd0_FUN_008e9cd0 ====
void FUN_008e9cd0(void);

// decompiled by BatchDecomp @ 008e9cd0 name=FUN_008e9cd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e9cd0(void)

{
  _DAT_00964c88 = ((void *)(0x009194a4u));
  if (DAT_00964c8c != (void *)0x0) {
    operator_delete__(DAT_00964c8c);
  }
  _DAT_00964c88 = ((void *)(0x00919488u));
  DAT_00964c8c = (void *)0x0;
  return;
}


//==== 00008e9d10 008e9d10_FUN_008e9d10 ====
void FUN_008e9d10(void);

// decompiled by BatchDecomp @ 008e9d10 name=FUN_008e9d10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e9d10(void)

{
  _DAT_00964d08 = ((void *)(0x009194a4u));
  if (DAT_00964d0c != (void *)0x0) {
    operator_delete__(DAT_00964d0c);
  }
  _DAT_00964d08 = ((void *)(0x00919488u));
  DAT_00964d0c = (void *)0x0;
  return;
}


//==== 00008e9d50 008e9d50_FUN_008e9d50 ====
void FUN_008e9d50(void);

// decompiled by BatchDecomp @ 008e9d50 name=FUN_008e9d50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e9d50(void)

{
  _DAT_00964cc8 = ((void *)(0x009194a4u));
  if (DAT_00964ccc != (void *)0x0) {
    operator_delete__(DAT_00964ccc);
  }
  _DAT_00964cc8 = ((void *)(0x00919488u));
  DAT_00964ccc = (void *)0x0;
  return;
}


//==== 00008e9f50 008e9f50_FUN_008e9f50 ====
void FUN_008e9f50(void);

// decompiled by BatchDecomp @ 008e9f50 name=FUN_008e9f50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e9f50(void)

{
  _DAT_00964e28 = ((void *)(0x009194a4u));
  if (DAT_00964e2c != (void *)0x0) {
    operator_delete__(DAT_00964e2c);
  }
  _DAT_00964e28 = ((void *)(0x00919488u));
  DAT_00964e2c = (void *)0x0;
  return;
}


//==== 00008ea130 008ea130_FUN_008ea130 ====
void FUN_008ea130(void);

// decompiled by BatchDecomp @ 008ea130 name=FUN_008ea130 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ea130(void)

{
  _DAT_009652a4 = ((void *)(0x009194a4u));
  if (DAT_009652a8 != (void *)0x0) {
    operator_delete__(DAT_009652a8);
  }
  _DAT_009652a4 = ((void *)(0x00919488u));
  DAT_009652a8 = (void *)0x0;
  return;
}


//==== 00008ea170 008ea170_FUN_008ea170 ====
void FUN_008ea170(void);

// decompiled by BatchDecomp @ 008ea170 name=FUN_008ea170 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ea170(void)

{
  _DAT_009652e4 = ((void *)(0x009194a4u));
  if (DAT_009652e8 != (void *)0x0) {
    operator_delete__(DAT_009652e8);
  }
  _DAT_009652e4 = ((void *)(0x00919488u));
  DAT_009652e8 = (void *)0x0;
  return;
}


//==== 00008ea1b0 008ea1b0_FUN_008ea1b0 ====
void FUN_008ea1b0(void);

// decompiled by BatchDecomp @ 008ea1b0 name=FUN_008ea1b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ea1b0(void)

{
  _DAT_009652d4 = ((void *)(0x009194a4u));
  if (DAT_009652d8 != (void *)0x0) {
    operator_delete__(DAT_009652d8);
  }
  _DAT_009652d4 = ((void *)(0x00919488u));
  DAT_009652d8 = (void *)0x0;
  return;
}


//==== 00008ea1f0 008ea1f0_FUN_008ea1f0 ====
void FUN_008ea1f0(void);

// decompiled by BatchDecomp @ 008ea1f0 name=FUN_008ea1f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ea1f0(void)

{
  _DAT_00965294 = ((void *)(0x009194a4u));
  if (DAT_00965298 != (void *)0x0) {
    operator_delete__(DAT_00965298);
  }
  _DAT_00965294 = ((void *)(0x00919488u));
  DAT_00965298 = (void *)0x0;
  return;
}


//==== 00008ea230 008ea230_FUN_008ea230 ====
void FUN_008ea230(void);

// decompiled by BatchDecomp @ 008ea230 name=FUN_008ea230 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ea230(void)

{
  _DAT_009652f4 = ((void *)(0x009194a4u));
  if (DAT_009652f8 != (void *)0x0) {
    operator_delete__(DAT_009652f8);
  }
  _DAT_009652f4 = ((void *)(0x00919488u));
  DAT_009652f8 = (void *)0x0;
  return;
}


//==== 00008ea270 008ea270_FUN_008ea270 ====
void FUN_008ea270(void);

// decompiled by BatchDecomp @ 008ea270 name=FUN_008ea270 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ea270(void)

{
  _DAT_009652c4 = ((void *)(0x009194a4u));
  if (DAT_009652c8 != (void *)0x0) {
    operator_delete__(DAT_009652c8);
  }
  _DAT_009652c4 = ((void *)(0x00919488u));
  DAT_009652c8 = (void *)0x0;
  return;
}


//==== 00008ea2b0 008ea2b0_FUN_008ea2b0 ====
void FUN_008ea2b0(void);

// decompiled by BatchDecomp @ 008ea2b0 name=FUN_008ea2b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ea2b0(void)

{
  _DAT_009652b4 = ((void *)(0x009194a4u));
  if (DAT_009652b8 != (void *)0x0) {
    operator_delete__(DAT_009652b8);
  }
  _DAT_009652b4 = ((void *)(0x00919488u));
  DAT_009652b8 = (void *)0x0;
  return;
}


//==== 00008ea360 008ea360_FUN_008ea360 ====
void FUN_008ea360(void);

// decompiled by BatchDecomp @ 008ea360 name=FUN_008ea360 conv=unknown body=48

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ea360(void)

{
  _DAT_00965220 = ((void *)(0x0091953cu));
  if (DAT_00965224 != (LocStr *)0x0) {
    util__LocStr___vector_deleting_destructor_(DAT_00965224,3);
  }
  _DAT_00965220 = ((void *)(0x00919488u));
  DAT_00965224 = (LocStr *)0x0;
  return;
}


//==== 00008ea390 008ea390_FUN_008ea390 ====
void FUN_008ea390(void);

// decompiled by BatchDecomp @ 008ea390 name=FUN_008ea390 conv=unknown body=48

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ea390(void)

{
  _DAT_00965244 = ((void *)(0x0091953cu));
  if (DAT_00965248 != (LocStr *)0x0) {
    util__LocStr___vector_deleting_destructor_(DAT_00965248,3);
  }
  _DAT_00965244 = ((void *)(0x00919488u));
  DAT_00965248 = (LocStr *)0x0;
  return;
}


//==== 00008ea3c0 008ea3c0_FUN_008ea3c0 ====
void FUN_008ea3c0(void);

// decompiled by BatchDecomp @ 008ea3c0 name=FUN_008ea3c0 conv=unknown body=48

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ea3c0(void)

{
  _DAT_009651e0 = ((void *)(0x0091953cu));
  if (DAT_009651e4 != (LocStr *)0x0) {
    util__LocStr___vector_deleting_destructor_(DAT_009651e4,3);
  }
  _DAT_009651e0 = ((void *)(0x00919488u));
  DAT_009651e4 = (LocStr *)0x0;
  return;
}


//==== 00008ea3f0 008ea3f0_FUN_008ea3f0 ====
void FUN_008ea3f0(void);

// decompiled by BatchDecomp @ 008ea3f0 name=FUN_008ea3f0 conv=unknown body=48

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ea3f0(void)

{
  _DAT_00965264 = ((void *)(0x0091953cu));
  if (DAT_00965268 != (LocStr *)0x0) {
    util__LocStr___vector_deleting_destructor_(DAT_00965268,3);
  }
  _DAT_00965264 = ((void *)(0x00919488u));
  DAT_00965268 = (LocStr *)0x0;
  return;
}


//==== 00008ea420 008ea420_FUN_008ea420 ====
void FUN_008ea420(void);

// decompiled by BatchDecomp @ 008ea420 name=FUN_008ea420 conv=unknown body=48

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ea420(void)

{
  _DAT_009651c0 = ((void *)(0x0091953cu));
  if (DAT_009651c4 != (LocStr *)0x0) {
    util__LocStr___vector_deleting_destructor_(DAT_009651c4,3);
  }
  _DAT_009651c0 = ((void *)(0x00919488u));
  DAT_009651c4 = (LocStr *)0x0;
  return;
}


//==== 00008ea450 008ea450_FUN_008ea450 ====
void FUN_008ea450(void);

// decompiled by BatchDecomp @ 008ea450 name=FUN_008ea450 conv=unknown body=48

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ea450(void)

{
  _DAT_009651a0 = ((void *)(0x0091953cu));
  if (DAT_009651a4 != (LocStr *)0x0) {
    util__LocStr___vector_deleting_destructor_(DAT_009651a4,3);
  }
  _DAT_009651a0 = ((void *)(0x00919488u));
  DAT_009651a4 = (LocStr *)0x0;
  return;
}


//==== 00008ea480 008ea480_FUN_008ea480 ====
void FUN_008ea480(void);

// decompiled by BatchDecomp @ 008ea480 name=FUN_008ea480 conv=unknown body=48

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ea480(void)

{
  _DAT_00965284 = ((void *)(0x0091953cu));
  if (DAT_00965288 != (LocStr *)0x0) {
    util__LocStr___vector_deleting_destructor_(DAT_00965288,3);
  }
  _DAT_00965284 = ((void *)(0x00919488u));
  DAT_00965288 = (LocStr *)0x0;
  return;
}


//==== 00008ea6d0 008ea6d0_FUN_008ea6d0 ====
void FUN_008ea6d0(void);

// decompiled by BatchDecomp @ 008ea6d0 name=FUN_008ea6d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ea6d0(void)

{
  _DAT_00965588 = ((void *)(0x009194a4u));
  if (DAT_0096558c != (void *)0x0) {
    operator_delete__(DAT_0096558c);
  }
  _DAT_00965588 = ((void *)(0x00919488u));
  DAT_0096558c = (void *)0x0;
  return;
}


//==== 00008ea710 008ea710_FUN_008ea710 ====
void FUN_008ea710(void);

// decompiled by BatchDecomp @ 008ea710 name=FUN_008ea710 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ea710(void)

{
  _DAT_00965548 = ((void *)(0x009194a4u));
  if (DAT_0096554c != (void *)0x0) {
    operator_delete__(DAT_0096554c);
  }
  _DAT_00965548 = ((void *)(0x00919488u));
  DAT_0096554c = (void *)0x0;
  return;
}


//==== 00008ea750 008ea750_FUN_008ea750 ====
void FUN_008ea750(void);

// decompiled by BatchDecomp @ 008ea750 name=FUN_008ea750 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ea750(void)

{
  _DAT_009655c8 = ((void *)(0x009194a4u));
  if (DAT_009655cc != (void *)0x0) {
    operator_delete__(DAT_009655cc);
  }
  _DAT_009655c8 = ((void *)(0x00919488u));
  DAT_009655cc = (void *)0x0;
  return;
}


//==== 00008ea790 008ea790_FUN_008ea790 ====
void FUN_008ea790(void);

// decompiled by BatchDecomp @ 008ea790 name=FUN_008ea790 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ea790(void)

{
  _DAT_00965568 = ((void *)(0x009194a4u));
  if (DAT_0096556c != (void *)0x0) {
    operator_delete__(DAT_0096556c);
  }
  _DAT_00965568 = ((void *)(0x00919488u));
  DAT_0096556c = (void *)0x0;
  return;
}


//==== 00008ea7d0 008ea7d0_FUN_008ea7d0 ====
void FUN_008ea7d0(void);

// decompiled by BatchDecomp @ 008ea7d0 name=FUN_008ea7d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ea7d0(void)

{
  _DAT_00965558 = ((void *)(0x009194a4u));
  if (DAT_0096555c != (void *)0x0) {
    operator_delete__(DAT_0096555c);
  }
  _DAT_00965558 = ((void *)(0x00919488u));
  DAT_0096555c = (void *)0x0;
  return;
}


//==== 00008ea810 008ea810_FUN_008ea810 ====
void FUN_008ea810(void);

// decompiled by BatchDecomp @ 008ea810 name=FUN_008ea810 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ea810(void)

{
  _DAT_009655a8 = ((void *)(0x009194a4u));
  if (DAT_009655ac != (void *)0x0) {
    operator_delete__(DAT_009655ac);
  }
  _DAT_009655a8 = ((void *)(0x00919488u));
  DAT_009655ac = (void *)0x0;
  return;
}


//==== 00008ea850 008ea850_FUN_008ea850 ====
void FUN_008ea850(void);

// decompiled by BatchDecomp @ 008ea850 name=FUN_008ea850 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ea850(void)

{
  _DAT_00965538 = ((void *)(0x009194a4u));
  if (DAT_0096553c != (void *)0x0) {
    operator_delete__(DAT_0096553c);
  }
  _DAT_00965538 = ((void *)(0x00919488u));
  DAT_0096553c = (void *)0x0;
  return;
}


//==== 00008ea890 008ea890_FUN_008ea890 ====
void FUN_008ea890(void);

// decompiled by BatchDecomp @ 008ea890 name=FUN_008ea890 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ea890(void)

{
  _DAT_009655d8 = ((void *)(0x009194a4u));
  if (DAT_009655dc != (void *)0x0) {
    operator_delete__(DAT_009655dc);
  }
  _DAT_009655d8 = ((void *)(0x00919488u));
  DAT_009655dc = (void *)0x0;
  return;
}


//==== 00008ea8d0 008ea8d0_FUN_008ea8d0 ====
void FUN_008ea8d0(void);

// decompiled by BatchDecomp @ 008ea8d0 name=FUN_008ea8d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ea8d0(void)

{
  _DAT_00965598 = ((void *)(0x009194a4u));
  if (DAT_0096559c != (void *)0x0) {
    operator_delete__(DAT_0096559c);
  }
  _DAT_00965598 = ((void *)(0x00919488u));
  DAT_0096559c = (void *)0x0;
  return;
}


//==== 00008ea910 008ea910_FUN_008ea910 ====
void FUN_008ea910(void);

// decompiled by BatchDecomp @ 008ea910 name=FUN_008ea910 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ea910(void)

{
  _DAT_00965528 = ((void *)(0x009194a4u));
  if (DAT_0096552c != (void *)0x0) {
    operator_delete__(DAT_0096552c);
  }
  _DAT_00965528 = ((void *)(0x00919488u));
  DAT_0096552c = (void *)0x0;
  return;
}


//==== 00008ea950 008ea950_FUN_008ea950 ====
void FUN_008ea950(void);

// decompiled by BatchDecomp @ 008ea950 name=FUN_008ea950 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ea950(void)

{
  _DAT_00965518 = ((void *)(0x009194a4u));
  if (DAT_0096551c != (void *)0x0) {
    operator_delete__(DAT_0096551c);
  }
  _DAT_00965518 = ((void *)(0x00919488u));
  DAT_0096551c = (void *)0x0;
  return;
}


//==== 00008ea990 008ea990_FUN_008ea990 ====
void FUN_008ea990(void);

// decompiled by BatchDecomp @ 008ea990 name=FUN_008ea990 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ea990(void)

{
  _DAT_009655b8 = ((void *)(0x009194a4u));
  if (DAT_009655bc != (void *)0x0) {
    operator_delete__(DAT_009655bc);
  }
  _DAT_009655b8 = ((void *)(0x00919488u));
  DAT_009655bc = (void *)0x0;
  return;
}


//==== 00008ea9d0 008ea9d0_FUN_008ea9d0 ====
void FUN_008ea9d0(void);

// decompiled by BatchDecomp @ 008ea9d0 name=FUN_008ea9d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ea9d0(void)

{
  _DAT_00965578 = ((void *)(0x009194a4u));
  if (DAT_0096557c != (void *)0x0) {
    operator_delete__(DAT_0096557c);
  }
  _DAT_00965578 = ((void *)(0x00919488u));
  DAT_0096557c = (void *)0x0;
  return;
}


//==== 00008eaef0 008eaef0_FUN_008eaef0 ====
void FUN_008eaef0(void);

// decompiled by BatchDecomp @ 008eaef0 name=FUN_008eaef0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eaef0(void)

{
  _DAT_00965db0 = ((void *)(0x009194a4u));
  if (DAT_00965db4 != (void *)0x0) {
    operator_delete__(DAT_00965db4);
  }
  _DAT_00965db0 = ((void *)(0x00919488u));
  DAT_00965db4 = (void *)0x0;
  return;
}


//==== 00008eaf30 008eaf30_FUN_008eaf30 ====
void FUN_008eaf30(void);

// decompiled by BatchDecomp @ 008eaf30 name=FUN_008eaf30 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eaf30(void)

{
  _DAT_00965d50 = ((void *)(0x009194a4u));
  if (DAT_00965d54 != (void *)0x0) {
    operator_delete__(DAT_00965d54);
  }
  _DAT_00965d50 = ((void *)(0x00919488u));
  DAT_00965d54 = (void *)0x0;
  return;
}


//==== 00008eaf70 008eaf70_FUN_008eaf70 ====
void FUN_008eaf70(void);

// decompiled by BatchDecomp @ 008eaf70 name=FUN_008eaf70 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eaf70(void)

{
  _DAT_00965d90 = ((void *)(0x009194a4u));
  if (DAT_00965d94 != (void *)0x0) {
    operator_delete__(DAT_00965d94);
  }
  _DAT_00965d90 = ((void *)(0x00919488u));
  DAT_00965d94 = (void *)0x0;
  return;
}


//==== 00008eafb0 008eafb0_FUN_008eafb0 ====
void FUN_008eafb0(void);

// decompiled by BatchDecomp @ 008eafb0 name=FUN_008eafb0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eafb0(void)

{
  _DAT_00965d80 = ((void *)(0x009194a4u));
  if (DAT_00965d84 != (void *)0x0) {
    operator_delete__(DAT_00965d84);
  }
  _DAT_00965d80 = ((void *)(0x00919488u));
  DAT_00965d84 = (void *)0x0;
  return;
}


//==== 00008eaff0 008eaff0_FUN_008eaff0 ====
void FUN_008eaff0(void);

// decompiled by BatchDecomp @ 008eaff0 name=FUN_008eaff0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eaff0(void)

{
  _DAT_00965dd0 = ((void *)(0x009194a4u));
  if (DAT_00965dd4 != (void *)0x0) {
    operator_delete__(DAT_00965dd4);
  }
  _DAT_00965dd0 = ((void *)(0x00919488u));
  DAT_00965dd4 = (void *)0x0;
  return;
}


//==== 00008eb030 008eb030_FUN_008eb030 ====
void FUN_008eb030(void);

// decompiled by BatchDecomp @ 008eb030 name=FUN_008eb030 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eb030(void)

{
  _DAT_00965d40 = ((void *)(0x009194a4u));
  if (DAT_00965d44 != (void *)0x0) {
    operator_delete__(DAT_00965d44);
  }
  _DAT_00965d40 = ((void *)(0x00919488u));
  DAT_00965d44 = (void *)0x0;
  return;
}


//==== 00008eb070 008eb070_FUN_008eb070 ====
void FUN_008eb070(void);

// decompiled by BatchDecomp @ 008eb070 name=FUN_008eb070 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eb070(void)

{
  _DAT_00965dc0 = ((void *)(0x009194a4u));
  if (DAT_00965dc4 != (void *)0x0) {
    operator_delete__(DAT_00965dc4);
  }
  _DAT_00965dc0 = ((void *)(0x00919488u));
  DAT_00965dc4 = (void *)0x0;
  return;
}


//==== 00008eb0b0 008eb0b0_FUN_008eb0b0 ====
void FUN_008eb0b0(void);

// decompiled by BatchDecomp @ 008eb0b0 name=FUN_008eb0b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eb0b0(void)

{
  _DAT_00965d70 = ((void *)(0x009194a4u));
  if (DAT_00965d74 != (void *)0x0) {
    operator_delete__(DAT_00965d74);
  }
  _DAT_00965d70 = ((void *)(0x00919488u));
  DAT_00965d74 = (void *)0x0;
  return;
}


//==== 00008eb0f0 008eb0f0_FUN_008eb0f0 ====
void FUN_008eb0f0(void);

// decompiled by BatchDecomp @ 008eb0f0 name=FUN_008eb0f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eb0f0(void)

{
  _DAT_00965d60 = ((void *)(0x009194a4u));
  if (DAT_00965d64 != (void *)0x0) {
    operator_delete__(DAT_00965d64);
  }
  _DAT_00965d60 = ((void *)(0x00919488u));
  DAT_00965d64 = (void *)0x0;
  return;
}


//==== 00008eb130 008eb130_FUN_008eb130 ====
void FUN_008eb130(void);

// decompiled by BatchDecomp @ 008eb130 name=FUN_008eb130 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eb130(void)

{
  _DAT_00965de0 = ((void *)(0x009194a4u));
  if (DAT_00965de4 != (void *)0x0) {
    operator_delete__(DAT_00965de4);
  }
  _DAT_00965de0 = ((void *)(0x00919488u));
  DAT_00965de4 = (void *)0x0;
  return;
}


//==== 00008eb170 008eb170_FUN_008eb170 ====
void FUN_008eb170(void);

// decompiled by BatchDecomp @ 008eb170 name=FUN_008eb170 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eb170(void)

{
  _DAT_00965da0 = ((void *)(0x009194a4u));
  if (DAT_00965da4 != (void *)0x0) {
    operator_delete__(DAT_00965da4);
  }
  _DAT_00965da0 = ((void *)(0x00919488u));
  DAT_00965da4 = (void *)0x0;
  return;
}


//==== 00008eb4f0 008eb4f0_FUN_008eb4f0 ====
void FUN_008eb4f0(void);

// decompiled by BatchDecomp @ 008eb4f0 name=FUN_008eb4f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eb4f0(void)

{
  _DAT_00966d00 = ((void *)(0x009194a4u));
  if (DAT_00966d04 != (void *)0x0) {
    operator_delete__(DAT_00966d04);
  }
  _DAT_00966d00 = ((void *)(0x00919488u));
  DAT_00966d04 = (void *)0x0;
  return;
}


//==== 00008eb530 008eb530_FUN_008eb530 ====
void FUN_008eb530(void);

// decompiled by BatchDecomp @ 008eb530 name=FUN_008eb530 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eb530(void)

{
  _DAT_00966ca0 = ((void *)(0x009194a4u));
  if (DAT_00966ca4 != (void *)0x0) {
    operator_delete__(DAT_00966ca4);
  }
  _DAT_00966ca0 = ((void *)(0x00919488u));
  DAT_00966ca4 = (void *)0x0;
  return;
}


//==== 00008eb570 008eb570_FUN_008eb570 ====
void FUN_008eb570(void);

// decompiled by BatchDecomp @ 008eb570 name=FUN_008eb570 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eb570(void)

{
  _DAT_00966d40 = ((void *)(0x009194a4u));
  if (DAT_00966d44 != (void *)0x0) {
    operator_delete__(DAT_00966d44);
  }
  _DAT_00966d40 = ((void *)(0x00919488u));
  DAT_00966d44 = (void *)0x0;
  return;
}


//==== 00008eb5b0 008eb5b0_FUN_008eb5b0 ====
void FUN_008eb5b0(void);

// decompiled by BatchDecomp @ 008eb5b0 name=FUN_008eb5b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eb5b0(void)

{
  _DAT_00966ce0 = ((void *)(0x009194a4u));
  if (DAT_00966ce4 != (void *)0x0) {
    operator_delete__(DAT_00966ce4);
  }
  _DAT_00966ce0 = ((void *)(0x00919488u));
  DAT_00966ce4 = (void *)0x0;
  return;
}


//==== 00008eb5f0 008eb5f0_FUN_008eb5f0 ====
void FUN_008eb5f0(void);

// decompiled by BatchDecomp @ 008eb5f0 name=FUN_008eb5f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eb5f0(void)

{
  _DAT_00966cd0 = ((void *)(0x009194a4u));
  if (DAT_00966cd4 != (void *)0x0) {
    operator_delete__(DAT_00966cd4);
  }
  _DAT_00966cd0 = ((void *)(0x00919488u));
  DAT_00966cd4 = (void *)0x0;
  return;
}


//==== 00008eb630 008eb630_FUN_008eb630 ====
void FUN_008eb630(void);

// decompiled by BatchDecomp @ 008eb630 name=FUN_008eb630 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eb630(void)

{
  _DAT_00966d20 = ((void *)(0x009194a4u));
  if (DAT_00966d24 != (void *)0x0) {
    operator_delete__(DAT_00966d24);
  }
  _DAT_00966d20 = ((void *)(0x00919488u));
  DAT_00966d24 = (void *)0x0;
  return;
}


//==== 00008eb670 008eb670_FUN_008eb670 ====
void FUN_008eb670(void);

// decompiled by BatchDecomp @ 008eb670 name=FUN_008eb670 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eb670(void)

{
  _DAT_00966c90 = ((void *)(0x009194a4u));
  if (DAT_00966c94 != (void *)0x0) {
    operator_delete__(DAT_00966c94);
  }
  _DAT_00966c90 = ((void *)(0x00919488u));
  DAT_00966c94 = (void *)0x0;
  return;
}


//==== 00008eb6b0 008eb6b0_FUN_008eb6b0 ====
void FUN_008eb6b0(void);

// decompiled by BatchDecomp @ 008eb6b0 name=FUN_008eb6b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eb6b0(void)

{
  _DAT_00966d50 = ((void *)(0x009194a4u));
  if (DAT_00966d54 != (void *)0x0) {
    operator_delete__(DAT_00966d54);
  }
  _DAT_00966d50 = ((void *)(0x00919488u));
  DAT_00966d54 = (void *)0x0;
  return;
}


//==== 00008eb6f0 008eb6f0_FUN_008eb6f0 ====
void FUN_008eb6f0(void);

// decompiled by BatchDecomp @ 008eb6f0 name=FUN_008eb6f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eb6f0(void)

{
  _DAT_00966d10 = ((void *)(0x009194a4u));
  if (DAT_00966d14 != (void *)0x0) {
    operator_delete__(DAT_00966d14);
  }
  _DAT_00966d10 = ((void *)(0x00919488u));
  DAT_00966d14 = (void *)0x0;
  return;
}


//==== 00008eb730 008eb730_FUN_008eb730 ====
void FUN_008eb730(void);

// decompiled by BatchDecomp @ 008eb730 name=FUN_008eb730 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eb730(void)

{
  _DAT_00966cc0 = ((void *)(0x009194a4u));
  if (DAT_00966cc4 != (void *)0x0) {
    operator_delete__(DAT_00966cc4);
  }
  _DAT_00966cc0 = ((void *)(0x00919488u));
  DAT_00966cc4 = (void *)0x0;
  return;
}


//==== 00008eb770 008eb770_FUN_008eb770 ====
void FUN_008eb770(void);

// decompiled by BatchDecomp @ 008eb770 name=FUN_008eb770 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eb770(void)

{
  _DAT_00966cb0 = ((void *)(0x009194a4u));
  if (DAT_00966cb4 != (void *)0x0) {
    operator_delete__(DAT_00966cb4);
  }
  _DAT_00966cb0 = ((void *)(0x00919488u));
  DAT_00966cb4 = (void *)0x0;
  return;
}


//==== 00008eb7b0 008eb7b0_FUN_008eb7b0 ====
void FUN_008eb7b0(void);

// decompiled by BatchDecomp @ 008eb7b0 name=FUN_008eb7b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eb7b0(void)

{
  _DAT_00966d30 = ((void *)(0x009194a4u));
  if (DAT_00966d34 != (void *)0x0) {
    operator_delete__(DAT_00966d34);
  }
  _DAT_00966d30 = ((void *)(0x00919488u));
  DAT_00966d34 = (void *)0x0;
  return;
}


//==== 00008eb7f0 008eb7f0_FUN_008eb7f0 ====
void FUN_008eb7f0(void);

// decompiled by BatchDecomp @ 008eb7f0 name=FUN_008eb7f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eb7f0(void)

{
  _DAT_00966cf0 = ((void *)(0x009194a4u));
  if (DAT_00966cf4 != (void *)0x0) {
    operator_delete__(DAT_00966cf4);
  }
  _DAT_00966cf0 = ((void *)(0x00919488u));
  DAT_00966cf4 = (void *)0x0;
  return;
}


//==== 00008ebb70 008ebb70_FUN_008ebb70 ====
void FUN_008ebb70(void);

// decompiled by BatchDecomp @ 008ebb70 name=FUN_008ebb70 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ebb70(void)

{
  _DAT_00967028 = ((void *)(0x009194a4u));
  if (DAT_0096702c != (void *)0x0) {
    operator_delete__(DAT_0096702c);
  }
  _DAT_00967028 = ((void *)(0x00919488u));
  DAT_0096702c = (void *)0x0;
  return;
}


//==== 00008ebbb0 008ebbb0_FUN_008ebbb0 ====
void FUN_008ebbb0(void);

// decompiled by BatchDecomp @ 008ebbb0 name=FUN_008ebbb0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ebbb0(void)

{
  _DAT_00966fc8 = ((void *)(0x009194a4u));
  if (DAT_00966fcc != (void *)0x0) {
    operator_delete__(DAT_00966fcc);
  }
  _DAT_00966fc8 = ((void *)(0x00919488u));
  DAT_00966fcc = (void *)0x0;
  return;
}


//==== 00008ebbf0 008ebbf0_FUN_008ebbf0 ====
void FUN_008ebbf0(void);

// decompiled by BatchDecomp @ 008ebbf0 name=FUN_008ebbf0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ebbf0(void)

{
  _DAT_00967008 = ((void *)(0x009194a4u));
  if (DAT_0096700c != (void *)0x0) {
    operator_delete__(DAT_0096700c);
  }
  _DAT_00967008 = ((void *)(0x00919488u));
  DAT_0096700c = (void *)0x0;
  return;
}


//==== 00008ebc30 008ebc30_FUN_008ebc30 ====
void FUN_008ebc30(void);

// decompiled by BatchDecomp @ 008ebc30 name=FUN_008ebc30 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ebc30(void)

{
  _DAT_00966ff8 = ((void *)(0x009194a4u));
  if (DAT_00966ffc != (void *)0x0) {
    operator_delete__(DAT_00966ffc);
  }
  _DAT_00966ff8 = ((void *)(0x00919488u));
  DAT_00966ffc = (void *)0x0;
  return;
}


//==== 00008ebc70 008ebc70_FUN_008ebc70 ====
void FUN_008ebc70(void);

// decompiled by BatchDecomp @ 008ebc70 name=FUN_008ebc70 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ebc70(void)

{
  _DAT_00967048 = ((void *)(0x009194a4u));
  if (DAT_0096704c != (void *)0x0) {
    operator_delete__(DAT_0096704c);
  }
  _DAT_00967048 = ((void *)(0x00919488u));
  DAT_0096704c = (void *)0x0;
  return;
}


//==== 00008ebcb0 008ebcb0_FUN_008ebcb0 ====
void FUN_008ebcb0(void);

// decompiled by BatchDecomp @ 008ebcb0 name=FUN_008ebcb0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ebcb0(void)

{
  _DAT_00966fb8 = ((void *)(0x009194a4u));
  if (DAT_00966fbc != (void *)0x0) {
    operator_delete__(DAT_00966fbc);
  }
  _DAT_00966fb8 = ((void *)(0x00919488u));
  DAT_00966fbc = (void *)0x0;
  return;
}


//==== 00008ebcf0 008ebcf0_FUN_008ebcf0 ====
void FUN_008ebcf0(void);

// decompiled by BatchDecomp @ 008ebcf0 name=FUN_008ebcf0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ebcf0(void)

{
  _DAT_00967038 = ((void *)(0x009194a4u));
  if (DAT_0096703c != (void *)0x0) {
    operator_delete__(DAT_0096703c);
  }
  _DAT_00967038 = ((void *)(0x00919488u));
  DAT_0096703c = (void *)0x0;
  return;
}


//==== 00008ebd30 008ebd30_FUN_008ebd30 ====
void FUN_008ebd30(void);

// decompiled by BatchDecomp @ 008ebd30 name=FUN_008ebd30 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ebd30(void)

{
  _DAT_00966fe8 = ((void *)(0x009194a4u));
  if (DAT_00966fec != (void *)0x0) {
    operator_delete__(DAT_00966fec);
  }
  _DAT_00966fe8 = ((void *)(0x00919488u));
  DAT_00966fec = (void *)0x0;
  return;
}


//==== 00008ebd70 008ebd70_FUN_008ebd70 ====
void FUN_008ebd70(void);

// decompiled by BatchDecomp @ 008ebd70 name=FUN_008ebd70 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ebd70(void)

{
  _DAT_00966fd8 = ((void *)(0x009194a4u));
  if (DAT_00966fdc != (void *)0x0) {
    operator_delete__(DAT_00966fdc);
  }
  _DAT_00966fd8 = ((void *)(0x00919488u));
  DAT_00966fdc = (void *)0x0;
  return;
}


//==== 00008ebdb0 008ebdb0_FUN_008ebdb0 ====
void FUN_008ebdb0(void);

// decompiled by BatchDecomp @ 008ebdb0 name=FUN_008ebdb0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ebdb0(void)

{
  _DAT_00967058 = ((void *)(0x009194a4u));
  if (DAT_0096705c != (void *)0x0) {
    operator_delete__(DAT_0096705c);
  }
  _DAT_00967058 = ((void *)(0x00919488u));
  DAT_0096705c = (void *)0x0;
  return;
}


//==== 00008ebdf0 008ebdf0_FUN_008ebdf0 ====
void FUN_008ebdf0(void);

// decompiled by BatchDecomp @ 008ebdf0 name=FUN_008ebdf0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ebdf0(void)

{
  _DAT_00967018 = ((void *)(0x009194a4u));
  if (DAT_0096701c != (void *)0x0) {
    operator_delete__(DAT_0096701c);
  }
  _DAT_00967018 = ((void *)(0x00919488u));
  DAT_0096701c = (void *)0x0;
  return;
}


//==== 00008ec390 008ec390_FUN_008ec390 ====
void FUN_008ec390(void);

// decompiled by BatchDecomp @ 008ec390 name=FUN_008ec390 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ec390(void)

{
  _DAT_00967b90 = ((void *)(0x009194a4u));
  if (DAT_00967b94 != (void *)0x0) {
    operator_delete__(DAT_00967b94);
  }
  _DAT_00967b90 = ((void *)(0x00919488u));
  DAT_00967b94 = (void *)0x0;
  return;
}


//==== 00008ec3d0 008ec3d0_FUN_008ec3d0 ====
void FUN_008ec3d0(void);

// decompiled by BatchDecomp @ 008ec3d0 name=FUN_008ec3d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ec3d0(void)

{
  _DAT_00967b30 = ((void *)(0x009194a4u));
  if (DAT_00967b34 != (void *)0x0) {
    operator_delete__(DAT_00967b34);
  }
  _DAT_00967b30 = ((void *)(0x00919488u));
  DAT_00967b34 = (void *)0x0;
  return;
}


//==== 00008ec410 008ec410_FUN_008ec410 ====
void FUN_008ec410(void);

// decompiled by BatchDecomp @ 008ec410 name=FUN_008ec410 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ec410(void)

{
  _DAT_00967b70 = ((void *)(0x009194a4u));
  if (DAT_00967b74 != (void *)0x0) {
    operator_delete__(DAT_00967b74);
  }
  _DAT_00967b70 = ((void *)(0x00919488u));
  DAT_00967b74 = (void *)0x0;
  return;
}


//==== 00008ec450 008ec450_FUN_008ec450 ====
void FUN_008ec450(void);

// decompiled by BatchDecomp @ 008ec450 name=FUN_008ec450 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ec450(void)

{
  _DAT_00967b60 = ((void *)(0x009194a4u));
  if (DAT_00967b64 != (void *)0x0) {
    operator_delete__(DAT_00967b64);
  }
  _DAT_00967b60 = ((void *)(0x00919488u));
  DAT_00967b64 = (void *)0x0;
  return;
}


//==== 00008ec490 008ec490_FUN_008ec490 ====
void FUN_008ec490(void);

// decompiled by BatchDecomp @ 008ec490 name=FUN_008ec490 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ec490(void)

{
  _DAT_00967bb0 = ((void *)(0x009194a4u));
  if (DAT_00967bb4 != (void *)0x0) {
    operator_delete__(DAT_00967bb4);
  }
  _DAT_00967bb0 = ((void *)(0x00919488u));
  DAT_00967bb4 = (void *)0x0;
  return;
}


//==== 00008ec4d0 008ec4d0_FUN_008ec4d0 ====
void FUN_008ec4d0(void);

// decompiled by BatchDecomp @ 008ec4d0 name=FUN_008ec4d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ec4d0(void)

{
  _DAT_00967b20 = ((void *)(0x009194a4u));
  if (DAT_00967b24 != (void *)0x0) {
    operator_delete__(DAT_00967b24);
  }
  _DAT_00967b20 = ((void *)(0x00919488u));
  DAT_00967b24 = (void *)0x0;
  return;
}


//==== 00008ec510 008ec510_FUN_008ec510 ====
void FUN_008ec510(void);

// decompiled by BatchDecomp @ 008ec510 name=FUN_008ec510 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ec510(void)

{
  _DAT_00967bc0 = ((void *)(0x009194a4u));
  if (DAT_00967bc4 != (void *)0x0) {
    operator_delete__(DAT_00967bc4);
  }
  _DAT_00967bc0 = ((void *)(0x00919488u));
  DAT_00967bc4 = (void *)0x0;
  return;
}


//==== 00008ec550 008ec550_FUN_008ec550 ====
void FUN_008ec550(void);

// decompiled by BatchDecomp @ 008ec550 name=FUN_008ec550 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ec550(void)

{
  _DAT_00967ba0 = ((void *)(0x009194a4u));
  if (DAT_00967ba4 != (void *)0x0) {
    operator_delete__(DAT_00967ba4);
  }
  _DAT_00967ba0 = ((void *)(0x00919488u));
  DAT_00967ba4 = (void *)0x0;
  return;
}


//==== 00008ec590 008ec590_FUN_008ec590 ====
void FUN_008ec590(void);

// decompiled by BatchDecomp @ 008ec590 name=FUN_008ec590 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ec590(void)

{
  _DAT_00967b50 = ((void *)(0x009194a4u));
  if (DAT_00967b54 != (void *)0x0) {
    operator_delete__(DAT_00967b54);
  }
  _DAT_00967b50 = ((void *)(0x00919488u));
  DAT_00967b54 = (void *)0x0;
  return;
}


//==== 00008ec5d0 008ec5d0_FUN_008ec5d0 ====
void FUN_008ec5d0(void);

// decompiled by BatchDecomp @ 008ec5d0 name=FUN_008ec5d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ec5d0(void)

{
  _DAT_00967b40 = ((void *)(0x009194a4u));
  if (DAT_00967b44 != (void *)0x0) {
    operator_delete__(DAT_00967b44);
  }
  _DAT_00967b40 = ((void *)(0x00919488u));
  DAT_00967b44 = (void *)0x0;
  return;
}


//==== 00008ec610 008ec610_FUN_008ec610 ====
void FUN_008ec610(void);

// decompiled by BatchDecomp @ 008ec610 name=FUN_008ec610 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ec610(void)

{
  _DAT_00967bd0 = ((void *)(0x009194a4u));
  if (DAT_00967bd4 != (void *)0x0) {
    operator_delete__(DAT_00967bd4);
  }
  _DAT_00967bd0 = ((void *)(0x00919488u));
  DAT_00967bd4 = (void *)0x0;
  return;
}


//==== 00008ec650 008ec650_FUN_008ec650 ====
void FUN_008ec650(void);

// decompiled by BatchDecomp @ 008ec650 name=FUN_008ec650 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ec650(void)

{
  _DAT_00967b80 = ((void *)(0x009194a4u));
  if (DAT_00967b84 != (void *)0x0) {
    operator_delete__(DAT_00967b84);
  }
  _DAT_00967b80 = ((void *)(0x00919488u));
  DAT_00967b84 = (void *)0x0;
  return;
}


//==== 00008eca20 008eca20_FUN_008eca20 ====
void FUN_008eca20(void);

// decompiled by BatchDecomp @ 008eca20 name=FUN_008eca20 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eca20(void)

{
  _DAT_00967e7c = ((void *)(0x009194a4u));
  if (DAT_00967e80 != (void *)0x0) {
    operator_delete__(DAT_00967e80);
  }
  _DAT_00967e7c = ((void *)(0x00919488u));
  DAT_00967e80 = (void *)0x0;
  return;
}


//==== 00008eca60 008eca60_FUN_008eca60 ====
void FUN_008eca60(void);

// decompiled by BatchDecomp @ 008eca60 name=FUN_008eca60 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eca60(void)

{
  _DAT_00967e1c = ((void *)(0x009194a4u));
  if (DAT_00967e20 != (void *)0x0) {
    operator_delete__(DAT_00967e20);
  }
  _DAT_00967e1c = ((void *)(0x00919488u));
  DAT_00967e20 = (void *)0x0;
  return;
}


//==== 00008ecaa0 008ecaa0_FUN_008ecaa0 ====
void FUN_008ecaa0(void);

// decompiled by BatchDecomp @ 008ecaa0 name=FUN_008ecaa0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ecaa0(void)

{
  _DAT_00967e5c = ((void *)(0x009194a4u));
  if (DAT_00967e60 != (void *)0x0) {
    operator_delete__(DAT_00967e60);
  }
  _DAT_00967e5c = ((void *)(0x00919488u));
  DAT_00967e60 = (void *)0x0;
  return;
}


//==== 00008ecae0 008ecae0_FUN_008ecae0 ====
void FUN_008ecae0(void);

// decompiled by BatchDecomp @ 008ecae0 name=FUN_008ecae0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ecae0(void)

{
  _DAT_00967e4c = ((void *)(0x009194a4u));
  if (DAT_00967e50 != (void *)0x0) {
    operator_delete__(DAT_00967e50);
  }
  _DAT_00967e4c = ((void *)(0x00919488u));
  DAT_00967e50 = (void *)0x0;
  return;
}


//==== 00008ecb20 008ecb20_FUN_008ecb20 ====
void FUN_008ecb20(void);

// decompiled by BatchDecomp @ 008ecb20 name=FUN_008ecb20 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ecb20(void)

{
  _DAT_00967e9c = ((void *)(0x009194a4u));
  if (DAT_00967ea0 != (void *)0x0) {
    operator_delete__(DAT_00967ea0);
  }
  _DAT_00967e9c = ((void *)(0x00919488u));
  DAT_00967ea0 = (void *)0x0;
  return;
}


//==== 00008ecb60 008ecb60_FUN_008ecb60 ====
void FUN_008ecb60(void);

// decompiled by BatchDecomp @ 008ecb60 name=FUN_008ecb60 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ecb60(void)

{
  _DAT_00967e0c = ((void *)(0x009194a4u));
  if (DAT_00967e10 != (void *)0x0) {
    operator_delete__(DAT_00967e10);
  }
  _DAT_00967e0c = ((void *)(0x00919488u));
  DAT_00967e10 = (void *)0x0;
  return;
}


//==== 00008ecba0 008ecba0_FUN_008ecba0 ====
void FUN_008ecba0(void);

// decompiled by BatchDecomp @ 008ecba0 name=FUN_008ecba0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ecba0(void)

{
  _DAT_00967e8c = ((void *)(0x009194a4u));
  if (DAT_00967e90 != (void *)0x0) {
    operator_delete__(DAT_00967e90);
  }
  _DAT_00967e8c = ((void *)(0x00919488u));
  DAT_00967e90 = (void *)0x0;
  return;
}


//==== 00008ecbe0 008ecbe0_FUN_008ecbe0 ====
void FUN_008ecbe0(void);

// decompiled by BatchDecomp @ 008ecbe0 name=FUN_008ecbe0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ecbe0(void)

{
  _DAT_00967e3c = ((void *)(0x009194a4u));
  if (DAT_00967e40 != (void *)0x0) {
    operator_delete__(DAT_00967e40);
  }
  _DAT_00967e3c = ((void *)(0x00919488u));
  DAT_00967e40 = (void *)0x0;
  return;
}


//==== 00008ecc20 008ecc20_FUN_008ecc20 ====
void FUN_008ecc20(void);

// decompiled by BatchDecomp @ 008ecc20 name=FUN_008ecc20 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ecc20(void)

{
  _DAT_00967e2c = ((void *)(0x009194a4u));
  if (DAT_00967e30 != (void *)0x0) {
    operator_delete__(DAT_00967e30);
  }
  _DAT_00967e2c = ((void *)(0x00919488u));
  DAT_00967e30 = (void *)0x0;
  return;
}


//==== 00008ecc60 008ecc60_FUN_008ecc60 ====
void FUN_008ecc60(void);

// decompiled by BatchDecomp @ 008ecc60 name=FUN_008ecc60 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ecc60(void)

{
  _DAT_00967eac = ((void *)(0x009194a4u));
  if (DAT_00967eb0 != (void *)0x0) {
    operator_delete__(DAT_00967eb0);
  }
  _DAT_00967eac = ((void *)(0x00919488u));
  DAT_00967eb0 = (void *)0x0;
  return;
}


//==== 00008ecca0 008ecca0_FUN_008ecca0 ====
void FUN_008ecca0(void);

// decompiled by BatchDecomp @ 008ecca0 name=FUN_008ecca0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ecca0(void)

{
  _DAT_00967e6c = ((void *)(0x009194a4u));
  if (DAT_00967e70 != (void *)0x0) {
    operator_delete__(DAT_00967e70);
  }
  _DAT_00967e6c = ((void *)(0x00919488u));
  DAT_00967e70 = (void *)0x0;
  return;
}


//==== 00008ecfa0 008ecfa0_FUN_008ecfa0 ====
void FUN_008ecfa0(void);

// decompiled by BatchDecomp @ 008ecfa0 name=FUN_008ecfa0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ecfa0(void)

{
  _DAT_009683f0 = ((void *)(0x009194a4u));
  if (DAT_009683f4 != (void *)0x0) {
    operator_delete__(DAT_009683f4);
  }
  _DAT_009683f0 = ((void *)(0x00919488u));
  DAT_009683f4 = (void *)0x0;
  return;
}


//==== 00008ecff0 008ecff0_FUN_008ecff0 ====
void FUN_008ecff0(void);

// decompiled by BatchDecomp @ 008ecff0 name=FUN_008ecff0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ecff0(void)

{
  _DAT_009683b0 = ((void *)(0x009194a4u));
  if (DAT_009683b4 != (void *)0x0) {
    operator_delete__(DAT_009683b4);
  }
  _DAT_009683b0 = ((void *)(0x00919488u));
  DAT_009683b4 = (void *)0x0;
  return;
}


//==== 00008ed030 008ed030_FUN_008ed030 ====
void FUN_008ed030(void);

// decompiled by BatchDecomp @ 008ed030 name=FUN_008ed030 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ed030(void)

{
  _DAT_009683d0 = ((void *)(0x009194a4u));
  if (DAT_009683d4 != (void *)0x0) {
    operator_delete__(DAT_009683d4);
  }
  _DAT_009683d0 = ((void *)(0x00919488u));
  DAT_009683d4 = (void *)0x0;
  return;
}


//==== 00008ed070 008ed070_FUN_008ed070 ====
void FUN_008ed070(void);

// decompiled by BatchDecomp @ 008ed070 name=FUN_008ed070 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ed070(void)

{
  _DAT_009683c0 = ((void *)(0x009194a4u));
  if (DAT_009683c4 != (void *)0x0) {
    operator_delete__(DAT_009683c4);
  }
  _DAT_009683c0 = ((void *)(0x00919488u));
  DAT_009683c4 = (void *)0x0;
  return;
}


//==== 00008ed0b0 008ed0b0_FUN_008ed0b0 ====
void FUN_008ed0b0(void);

// decompiled by BatchDecomp @ 008ed0b0 name=FUN_008ed0b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ed0b0(void)

{
  _DAT_00968410 = ((void *)(0x009194a4u));
  if (DAT_00968414 != (void *)0x0) {
    operator_delete__(DAT_00968414);
  }
  _DAT_00968410 = ((void *)(0x00919488u));
  DAT_00968414 = (void *)0x0;
  return;
}


//==== 00008ed0f0 008ed0f0_FUN_008ed0f0 ====
void FUN_008ed0f0(void);

// decompiled by BatchDecomp @ 008ed0f0 name=FUN_008ed0f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ed0f0(void)

{
  _DAT_009683a0 = ((void *)(0x009194a4u));
  if (DAT_009683a4 != (void *)0x0) {
    operator_delete__(DAT_009683a4);
  }
  _DAT_009683a0 = ((void *)(0x00919488u));
  DAT_009683a4 = (void *)0x0;
  return;
}


//==== 00008ed130 008ed130_FUN_008ed130 ====
void FUN_008ed130(void);

// decompiled by BatchDecomp @ 008ed130 name=FUN_008ed130 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ed130(void)

{
  _DAT_00968400 = ((void *)(0x009194a4u));
  if (DAT_00968404 != (void *)0x0) {
    operator_delete__(DAT_00968404);
  }
  _DAT_00968400 = ((void *)(0x00919488u));
  DAT_00968404 = (void *)0x0;
  return;
}


//==== 00008ed170 008ed170_FUN_008ed170 ====
void FUN_008ed170(void);

// decompiled by BatchDecomp @ 008ed170 name=FUN_008ed170 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ed170(void)

{
  _DAT_00968390 = ((void *)(0x009194a4u));
  if (DAT_00968394 != (void *)0x0) {
    operator_delete__(DAT_00968394);
  }
  _DAT_00968390 = ((void *)(0x00919488u));
  DAT_00968394 = (void *)0x0;
  return;
}


//==== 00008ed1b0 008ed1b0_FUN_008ed1b0 ====
void FUN_008ed1b0(void);

// decompiled by BatchDecomp @ 008ed1b0 name=FUN_008ed1b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ed1b0(void)

{
  _DAT_00968380 = ((void *)(0x009194a4u));
  if (DAT_00968384 != (void *)0x0) {
    operator_delete__(DAT_00968384);
  }
  _DAT_00968380 = ((void *)(0x00919488u));
  DAT_00968384 = (void *)0x0;
  return;
}


//==== 00008ed1f0 008ed1f0_FUN_008ed1f0 ====
void FUN_008ed1f0(void);

// decompiled by BatchDecomp @ 008ed1f0 name=FUN_008ed1f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ed1f0(void)

{
  _DAT_00968420 = ((void *)(0x009194a4u));
  if (DAT_00968424 != (void *)0x0) {
    operator_delete__(DAT_00968424);
  }
  _DAT_00968420 = ((void *)(0x00919488u));
  DAT_00968424 = (void *)0x0;
  return;
}


//==== 00008ed230 008ed230_FUN_008ed230 ====
void FUN_008ed230(void);

// decompiled by BatchDecomp @ 008ed230 name=FUN_008ed230 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ed230(void)

{
  _DAT_009683e0 = ((void *)(0x009194a4u));
  if (DAT_009683e4 != (void *)0x0) {
    operator_delete__(DAT_009683e4);
  }
  _DAT_009683e0 = ((void *)(0x00919488u));
  DAT_009683e4 = (void *)0x0;
  return;
}


//==== 00008ed5b0 008ed5b0_FUN_008ed5b0 ====
void FUN_008ed5b0(void);

// decompiled by BatchDecomp @ 008ed5b0 name=FUN_008ed5b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ed5b0(void)

{
  _DAT_00968b1c = ((void *)(0x009194a4u));
  if (DAT_00968b20 != (void *)0x0) {
    operator_delete__(DAT_00968b20);
  }
  _DAT_00968b1c = ((void *)(0x00919488u));
  DAT_00968b20 = (void *)0x0;
  return;
}


//==== 00008ed5f0 008ed5f0_FUN_008ed5f0 ====
void FUN_008ed5f0(void);

// decompiled by BatchDecomp @ 008ed5f0 name=FUN_008ed5f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ed5f0(void)

{
  _DAT_00968abc = ((void *)(0x009194a4u));
  if (DAT_00968ac0 != (void *)0x0) {
    operator_delete__(DAT_00968ac0);
  }
  _DAT_00968abc = ((void *)(0x00919488u));
  DAT_00968ac0 = (void *)0x0;
  return;
}


//==== 00008ed630 008ed630_FUN_008ed630 ====
void FUN_008ed630(void);

// decompiled by BatchDecomp @ 008ed630 name=FUN_008ed630 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ed630(void)

{
  _DAT_00968afc = ((void *)(0x009194a4u));
  if (DAT_00968b00 != (void *)0x0) {
    operator_delete__(DAT_00968b00);
  }
  _DAT_00968afc = ((void *)(0x00919488u));
  DAT_00968b00 = (void *)0x0;
  return;
}


//==== 00008ed670 008ed670_FUN_008ed670 ====
void FUN_008ed670(void);

// decompiled by BatchDecomp @ 008ed670 name=FUN_008ed670 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ed670(void)

{
  _DAT_00968aec = ((void *)(0x009194a4u));
  if (DAT_00968af0 != (void *)0x0) {
    operator_delete__(DAT_00968af0);
  }
  _DAT_00968aec = ((void *)(0x00919488u));
  DAT_00968af0 = (void *)0x0;
  return;
}


//==== 00008ed6b0 008ed6b0_FUN_008ed6b0 ====
void FUN_008ed6b0(void);

// decompiled by BatchDecomp @ 008ed6b0 name=FUN_008ed6b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ed6b0(void)

{
  _DAT_00968b3c = ((void *)(0x009194a4u));
  if (DAT_00968b40 != (void *)0x0) {
    operator_delete__(DAT_00968b40);
  }
  _DAT_00968b3c = ((void *)(0x00919488u));
  DAT_00968b40 = (void *)0x0;
  return;
}


//==== 00008ed6f0 008ed6f0_FUN_008ed6f0 ====
void FUN_008ed6f0(void);

// decompiled by BatchDecomp @ 008ed6f0 name=FUN_008ed6f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ed6f0(void)

{
  _DAT_00968aac = ((void *)(0x009194a4u));
  if (DAT_00968ab0 != (void *)0x0) {
    operator_delete__(DAT_00968ab0);
  }
  _DAT_00968aac = ((void *)(0x00919488u));
  DAT_00968ab0 = (void *)0x0;
  return;
}


//==== 00008ed730 008ed730_FUN_008ed730 ====
void FUN_008ed730(void);

// decompiled by BatchDecomp @ 008ed730 name=FUN_008ed730 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ed730(void)

{
  _DAT_00968b2c = ((void *)(0x009194a4u));
  if (DAT_00968b30 != (void *)0x0) {
    operator_delete__(DAT_00968b30);
  }
  _DAT_00968b2c = ((void *)(0x00919488u));
  DAT_00968b30 = (void *)0x0;
  return;
}


//==== 00008ed770 008ed770_FUN_008ed770 ====
void FUN_008ed770(void);

// decompiled by BatchDecomp @ 008ed770 name=FUN_008ed770 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ed770(void)

{
  _DAT_00968adc = ((void *)(0x009194a4u));
  if (DAT_00968ae0 != (void *)0x0) {
    operator_delete__(DAT_00968ae0);
  }
  _DAT_00968adc = ((void *)(0x00919488u));
  DAT_00968ae0 = (void *)0x0;
  return;
}


//==== 00008ed7b0 008ed7b0_FUN_008ed7b0 ====
void FUN_008ed7b0(void);

// decompiled by BatchDecomp @ 008ed7b0 name=FUN_008ed7b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ed7b0(void)

{
  _DAT_00968acc = ((void *)(0x009194a4u));
  if (DAT_00968ad0 != (void *)0x0) {
    operator_delete__(DAT_00968ad0);
  }
  _DAT_00968acc = ((void *)(0x00919488u));
  DAT_00968ad0 = (void *)0x0;
  return;
}

