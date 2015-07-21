#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Boolean>
struct Action_1_t14;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t222;
// System.AsyncCallback
struct AsyncCallback_t223;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Byte>
#include "mscorlib_System_Action_1_gen_6MethodDeclarations.h"
#define Action_1__ctor_m222(__this, ___object, ___method, method) (( void (*) (Action_1_t14 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m11768_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Boolean>::Invoke(T)
#define Action_1_Invoke_m11769(__this, ___obj, method) (( void (*) (Action_1_t14 *, bool, const MethodInfo*))Action_1_Invoke_m11770_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m11771(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t14 *, bool, AsyncCallback_t223 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m11772_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Boolean>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m11773(__this, ___result, method) (( void (*) (Action_1_t14 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m11774_gshared)(__this, ___result, method)
