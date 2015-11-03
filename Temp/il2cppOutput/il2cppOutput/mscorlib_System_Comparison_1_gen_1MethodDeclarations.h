#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t115;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t234;
// System.AsyncCallback
struct AsyncCallback_t235;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m1744_gshared (Comparison_1_t115 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m1744(__this, ___object, ___method, method) (( void (*) (Comparison_1_t115 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m1744_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m11703_gshared (Comparison_1_t115 * __this, RaycastResult_t146  ___x, RaycastResult_t146  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m11703(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t115 *, RaycastResult_t146 , RaycastResult_t146 , const MethodInfo*))Comparison_1_Invoke_m11703_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m11704_gshared (Comparison_1_t115 * __this, RaycastResult_t146  ___x, RaycastResult_t146  ___y, AsyncCallback_t235 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m11704(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t115 *, RaycastResult_t146 , RaycastResult_t146 , AsyncCallback_t235 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m11704_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m11705_gshared (Comparison_1_t115 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m11705(__this, ___result, method) (( int32_t (*) (Comparison_1_t115 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m11705_gshared)(__this, ___result, method)
