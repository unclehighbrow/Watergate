#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Object>
struct Action_1_t2453;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t222;
// System.AsyncCallback
struct AsyncCallback_t223;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m11756_gshared (Action_1_t2453 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m11756(__this, ___object, ___method, method) (( void (*) (Action_1_t2453 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m11756_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Object>::Invoke(T)
extern "C" void Action_1_Invoke_m11758_gshared (Action_1_t2453 * __this, Object_t * ___obj, const MethodInfo* method);
#define Action_1_Invoke_m11758(__this, ___obj, method) (( void (*) (Action_1_t2453 *, Object_t *, const MethodInfo*))Action_1_Invoke_m11758_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m11760_gshared (Action_1_t2453 * __this, Object_t * ___obj, AsyncCallback_t223 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m11760(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t2453 *, Object_t *, AsyncCallback_t223 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m11760_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m11762_gshared (Action_1_t2453 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m11762(__this, ___result, method) (( void (*) (Action_1_t2453 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m11762_gshared)(__this, ___result, method)
