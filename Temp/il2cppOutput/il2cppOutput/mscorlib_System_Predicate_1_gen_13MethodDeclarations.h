#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t2538;
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

// System.Void System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m12903_gshared (Predicate_1_t2538 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m12903(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2538 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m12903_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m12904_gshared (Predicate_1_t2538 * __this, RaycastResult_t155  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m12904(__this, ___obj, method) (( bool (*) (Predicate_1_t2538 *, RaycastResult_t155 , const MethodInfo*))Predicate_1_Invoke_m12904_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m12905_gshared (Predicate_1_t2538 * __this, RaycastResult_t155  ___obj, AsyncCallback_t224 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m12905(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2538 *, RaycastResult_t155 , AsyncCallback_t224 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m12905_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m12906_gshared (Predicate_1_t2538 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m12906(__this, ___result, method) (( bool (*) (Predicate_1_t2538 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m12906_gshared)(__this, ___result, method)
