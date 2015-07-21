#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2520;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t222;
// System.AsyncCallback
struct AsyncCallback_t223;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m12649_gshared (UnityAction_1_t2520 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m12649(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t2520 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m12649_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m12650_gshared (UnityAction_1_t2520 * __this, Object_t * ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m12650(__this, ___arg0, method) (( void (*) (UnityAction_1_t2520 *, Object_t *, const MethodInfo*))UnityAction_1_Invoke_m12650_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Object>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m12651_gshared (UnityAction_1_t2520 * __this, Object_t * ___arg0, AsyncCallback_t223 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m12651(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t2520 *, Object_t *, AsyncCallback_t223 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m12651_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m12652_gshared (UnityAction_1_t2520 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m12652(__this, ___result, method) (( void (*) (UnityAction_1_t2520 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m12652_gshared)(__this, ___result, method)
