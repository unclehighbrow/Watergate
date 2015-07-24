#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>
struct EventFunction_1_t145;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.ISubmitHandler
struct ISubmitHandler_t325;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t120;
// System.IAsyncResult
struct IAsyncResult_t223;
// System.AsyncCallback
struct AsyncCallback_t224;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>::.ctor(System.Object,System.IntPtr)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_16MethodDeclarations.h"
#define EventFunction_1__ctor_m1599(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t145 *, Object_t *, IntPtr_t, const MethodInfo*))EventFunction_1__ctor_m12527_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
#define EventFunction_1_Invoke_m13156(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t145 *, Object_t *, BaseEventData_t120 *, const MethodInfo*))EventFunction_1_Invoke_m12529_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
#define EventFunction_1_BeginInvoke_m13157(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t145 *, Object_t *, BaseEventData_t120 *, AsyncCallback_t224 *, Object_t *, const MethodInfo*))EventFunction_1_BeginInvoke_m12531_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>::EndInvoke(System.IAsyncResult)
#define EventFunction_1_EndInvoke_m13158(__this, ___result, method) (( void (*) (EventFunction_1_t145 *, Object_t *, const MethodInfo*))EventFunction_1_EndInvoke_m12533_gshared)(__this, ___result, method)
