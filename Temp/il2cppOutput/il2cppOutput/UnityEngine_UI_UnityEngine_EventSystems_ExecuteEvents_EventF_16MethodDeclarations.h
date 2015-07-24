#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t342;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t120;
// System.IAsyncResult
struct IAsyncResult_t223;
// System.AsyncCallback
struct AsyncCallback_t224;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void EventFunction_1__ctor_m12527_gshared (EventFunction_1_t342 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define EventFunction_1__ctor_m12527(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t342 *, Object_t *, IntPtr_t, const MethodInfo*))EventFunction_1__ctor_m12527_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
extern "C" void EventFunction_1_Invoke_m12529_gshared (EventFunction_1_t342 * __this, Object_t * ___handler, BaseEventData_t120 * ___eventData, const MethodInfo* method);
#define EventFunction_1_Invoke_m12529(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t342 *, Object_t *, BaseEventData_t120 *, const MethodInfo*))EventFunction_1_Invoke_m12529_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
extern "C" Object_t * EventFunction_1_BeginInvoke_m12531_gshared (EventFunction_1_t342 * __this, Object_t * ___handler, BaseEventData_t120 * ___eventData, AsyncCallback_t224 * ___callback, Object_t * ___object, const MethodInfo* method);
#define EventFunction_1_BeginInvoke_m12531(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t342 *, Object_t *, BaseEventData_t120 *, AsyncCallback_t224 *, Object_t *, const MethodInfo*))EventFunction_1_BeginInvoke_m12531_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void EventFunction_1_EndInvoke_m12533_gshared (EventFunction_1_t342 * __this, Object_t * ___result, const MethodInfo* method);
#define EventFunction_1_EndInvoke_m12533(__this, ___result, method) (( void (*) (EventFunction_1_t342 *, Object_t *, const MethodInfo*))EventFunction_1_EndInvoke_m12533_gshared)(__this, ___result, method)
