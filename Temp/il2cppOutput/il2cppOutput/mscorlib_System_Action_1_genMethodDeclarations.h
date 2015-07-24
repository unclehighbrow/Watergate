#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Boolean>
struct Action_1_t18;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t223;
// System.AsyncCallback
struct AsyncCallback_t224;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Byte>
#include "mscorlib_System_Action_1_gen_6MethodDeclarations.h"
#define Action_1__ctor_m242(__this, ___object, ___method, method) (( void (*) (Action_1_t18 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m11776_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Boolean>::Invoke(T)
#define Action_1_Invoke_m11777(__this, ___obj, method) (( void (*) (Action_1_t18 *, bool, const MethodInfo*))Action_1_Invoke_m11778_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m11779(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t18 *, bool, AsyncCallback_t224 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m11780_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Boolean>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m11781(__this, ___result, method) (( void (*) (Action_1_t18 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m11782_gshared)(__this, ___result, method)
