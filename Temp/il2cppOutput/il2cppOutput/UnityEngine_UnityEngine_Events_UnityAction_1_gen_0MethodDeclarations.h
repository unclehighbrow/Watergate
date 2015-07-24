#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t330;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t223;
// System.AsyncCallback
struct AsyncCallback_t224;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m1743_gshared (UnityAction_1_t330 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m1743(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t330 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m1743_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m13606_gshared (UnityAction_1_t330 * __this, Color_t13  ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m13606(__this, ___arg0, method) (( void (*) (UnityAction_1_t330 *, Color_t13 , const MethodInfo*))UnityAction_1_Invoke_m13606_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Color>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m13607_gshared (UnityAction_1_t330 * __this, Color_t13  ___arg0, AsyncCallback_t224 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m13607(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t330 *, Color_t13 , AsyncCallback_t224 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m13607_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m13608_gshared (UnityAction_1_t330 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m13608(__this, ___result, method) (( void (*) (UnityAction_1_t330 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m13608_gshared)(__this, ___result, method)
