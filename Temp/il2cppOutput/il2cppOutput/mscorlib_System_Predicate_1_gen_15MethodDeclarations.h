#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct Predicate_1_t2549;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.EventTrigger/Entry
struct Entry_t124;
// System.IAsyncResult
struct IAsyncResult_t222;
// System.AsyncCallback
struct AsyncCallback_t223;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_4MethodDeclarations.h"
#define Predicate_1__ctor_m13077(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2549 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m11531_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>::Invoke(T)
#define Predicate_1_Invoke_m13078(__this, ___obj, method) (( bool (*) (Predicate_1_t2549 *, Entry_t124 *, const MethodInfo*))Predicate_1_Invoke_m11532_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m13079(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2549 *, Entry_t124 *, AsyncCallback_t223 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m11533_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m13080(__this, ___result, method) (( bool (*) (Predicate_1_t2549 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m11534_gshared)(__this, ___result, method)
