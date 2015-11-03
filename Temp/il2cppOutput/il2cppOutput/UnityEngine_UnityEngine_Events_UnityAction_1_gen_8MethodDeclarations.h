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

// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t1963;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t234;
// System.AsyncCallback
struct AsyncCallback_t235;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m13155_gshared (UnityAction_1_t1963 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m13155(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t1963 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m13155_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m13156_gshared (UnityAction_1_t1963 * __this, int32_t ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m13156(__this, ___arg0, method) (( void (*) (UnityAction_1_t1963 *, int32_t, const MethodInfo*))UnityAction_1_Invoke_m13156_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Int32>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m13157_gshared (UnityAction_1_t1963 * __this, int32_t ___arg0, AsyncCallback_t235 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m13157(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t1963 *, int32_t, AsyncCallback_t235 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m13157_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m13158_gshared (UnityAction_1_t1963 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m13158(__this, ___result, method) (( void (*) (UnityAction_1_t1963 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m13158_gshared)(__this, ___result, method)
