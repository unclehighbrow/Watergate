#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct UnityAction_1_t149;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t328;
// System.IAsyncResult
struct IAsyncResult_t223;
// System.AsyncCallback
struct AsyncCallback_t224;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6MethodDeclarations.h"
#define UnityAction_1__ctor_m1601(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t149 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m12657_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Invoke(T0)
#define UnityAction_1_Invoke_m12672(__this, ___arg0, method) (( void (*) (UnityAction_1_t149 *, List_1_t328 *, const MethodInfo*))UnityAction_1_Invoke_m12658_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m12673(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t149 *, List_1_t328 *, AsyncCallback_t224 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m12659_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m12674(__this, ___result, method) (( void (*) (UnityAction_1_t149 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m12660_gshared)(__this, ___result, method)
