#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t379;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t223;
// System.AsyncCallback
struct AsyncCallback_t224;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m1935_gshared (UnityAction_1_t379 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m1935(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t379 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m1935_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m14844_gshared (UnityAction_1_t379 * __this, float ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m14844(__this, ___arg0, method) (( void (*) (UnityAction_1_t379 *, float, const MethodInfo*))UnityAction_1_Invoke_m14844_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Single>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m14845_gshared (UnityAction_1_t379 * __this, float ___arg0, AsyncCallback_t224 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m14845(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t379 *, float, AsyncCallback_t224 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m14845_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m14846_gshared (UnityAction_1_t379 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m14846(__this, ___result, method) (( void (*) (UnityAction_1_t379 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m14846_gshared)(__this, ___result, method)
