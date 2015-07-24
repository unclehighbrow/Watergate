#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>
struct EventFunction_1_t138;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.IEndDragHandler
struct IEndDragHandler_t318;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t120;
// System.IAsyncResult
struct IAsyncResult_t223;
// System.AsyncCallback
struct AsyncCallback_t224;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>::.ctor(System.Object,System.IntPtr)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_16MethodDeclarations.h"
#define EventFunction_1__ctor_m1592(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t138 *, Object_t *, IntPtr_t, const MethodInfo*))EventFunction_1__ctor_m12527_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
#define EventFunction_1_Invoke_m13141(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t138 *, Object_t *, BaseEventData_t120 *, const MethodInfo*))EventFunction_1_Invoke_m12529_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
#define EventFunction_1_BeginInvoke_m13142(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t138 *, Object_t *, BaseEventData_t120 *, AsyncCallback_t224 *, Object_t *, const MethodInfo*))EventFunction_1_BeginInvoke_m12531_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>::EndInvoke(System.IAsyncResult)
#define EventFunction_1_EndInvoke_m13143(__this, ___result, method) (( void (*) (EventFunction_1_t138 *, Object_t *, const MethodInfo*))EventFunction_1_EndInvoke_m12533_gshared)(__this, ___result, method)
