#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
struct UnityAction_1_t293;
// System.Object
struct Object_t;
// UnityEngine.Component
struct Component_t62;
// System.IAsyncResult
struct IAsyncResult_t223;
// System.AsyncCallback
struct AsyncCallback_t224;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6MethodDeclarations.h"
#define UnityAction_1__ctor_m2042(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t293 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m12657_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::Invoke(T0)
#define UnityAction_1_Invoke_m15370(__this, ___arg0, method) (( void (*) (UnityAction_1_t293 *, Component_t62 *, const MethodInfo*))UnityAction_1_Invoke_m12658_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Component>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m15371(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t293 *, Component_t62 *, AsyncCallback_t224 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m12659_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m15372(__this, ___result, method) (( void (*) (UnityAction_1_t293 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m12660_gshared)(__this, ___result, method)
