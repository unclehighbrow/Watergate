#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t170;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t222;
// System.AsyncCallback
struct AsyncCallback_t223;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void System.Comparison`1<UnityEngine.RaycastHit>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m1670_gshared (Comparison_1_t170 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m1670(__this, ___object, ___method, method) (( void (*) (Comparison_1_t170 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m1670_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m13588_gshared (Comparison_1_t170 * __this, RaycastHit_t328  ___x, RaycastHit_t328  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m13588(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t170 *, RaycastHit_t328 , RaycastHit_t328 , const MethodInfo*))Comparison_1_Invoke_m13588_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.RaycastHit>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m13589_gshared (Comparison_1_t170 * __this, RaycastHit_t328  ___x, RaycastHit_t328  ___y, AsyncCallback_t223 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m13589(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t170 *, RaycastHit_t328 , RaycastHit_t328 , AsyncCallback_t223 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m13589_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m13590_gshared (Comparison_1_t170 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m13590(__this, ___result, method) (( int32_t (*) (Comparison_1_t170 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m13590_gshared)(__this, ___result, method)
