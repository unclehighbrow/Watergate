#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t121;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t223;
// System.AsyncCallback
struct AsyncCallback_t224;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m1568_gshared (Comparison_1_t121 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m1568(__this, ___object, ___method, method) (( void (*) (Comparison_1_t121 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m1568_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m12524_gshared (Comparison_1_t121 * __this, RaycastResult_t155  ___x, RaycastResult_t155  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m12524(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t121 *, RaycastResult_t155 , RaycastResult_t155 , const MethodInfo*))Comparison_1_Invoke_m12524_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m12525_gshared (Comparison_1_t121 * __this, RaycastResult_t155  ___x, RaycastResult_t155  ___y, AsyncCallback_t224 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m12525(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t121 *, RaycastResult_t155 , RaycastResult_t155 , AsyncCallback_t224 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m12525_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m12526_gshared (Comparison_1_t121 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m12526(__this, ___result, method) (( int32_t (*) (Comparison_1_t121 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m12526_gshared)(__this, ___result, method)
