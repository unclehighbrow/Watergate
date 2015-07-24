#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct UnityAction_4_t2932;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t223;
// System.AsyncCallback
struct AsyncCallback_t224;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_4__ctor_m18313_gshared (UnityAction_4_t2932 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_4__ctor_m18313(__this, ___object, ___method, method) (( void (*) (UnityAction_4_t2932 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_4__ctor_m18313_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T0,T1,T2,T3)
extern "C" void UnityAction_4_Invoke_m18314_gshared (UnityAction_4_t2932 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, const MethodInfo* method);
#define UnityAction_4_Invoke_m18314(__this, ___arg0, ___arg1, ___arg2, ___arg3, method) (( void (*) (UnityAction_4_t2932 *, Object_t *, Object_t *, Object_t *, Object_t *, const MethodInfo*))UnityAction_4_Invoke_m18314_gshared)(__this, ___arg0, ___arg1, ___arg2, ___arg3, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,T3,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_4_BeginInvoke_m18315_gshared (UnityAction_4_t2932 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, AsyncCallback_t224 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_4_BeginInvoke_m18315(__this, ___arg0, ___arg1, ___arg2, ___arg3, ___callback, ___object, method) (( Object_t * (*) (UnityAction_4_t2932 *, Object_t *, Object_t *, Object_t *, Object_t *, AsyncCallback_t224 *, Object_t *, const MethodInfo*))UnityAction_4_BeginInvoke_m18315_gshared)(__this, ___arg0, ___arg1, ___arg2, ___arg3, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_4_EndInvoke_m18316_gshared (UnityAction_4_t2932 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_4_EndInvoke_m18316(__this, ___result, method) (( void (*) (UnityAction_4_t2932 *, Object_t *, const MethodInfo*))UnityAction_4_EndInvoke_m18316_gshared)(__this, ___result, method)
