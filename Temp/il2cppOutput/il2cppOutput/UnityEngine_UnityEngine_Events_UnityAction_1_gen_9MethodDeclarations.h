#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t2680;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t222;
// System.AsyncCallback
struct AsyncCallback_t223;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m14851_gshared (UnityAction_1_t2680 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m14851(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t2680 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m14851_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m14852_gshared (UnityAction_1_t2680 * __this, Vector2_t35  ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m14852(__this, ___arg0, method) (( void (*) (UnityAction_1_t2680 *, Vector2_t35 , const MethodInfo*))UnityAction_1_Invoke_m14852_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m14853_gshared (UnityAction_1_t2680 * __this, Vector2_t35  ___arg0, AsyncCallback_t223 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m14853(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t2680 *, Vector2_t35 , AsyncCallback_t223 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m14853_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m14854_gshared (UnityAction_1_t2680 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m14854(__this, ___result, method) (( void (*) (UnityAction_1_t2680 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m14854_gshared)(__this, ___result, method)
