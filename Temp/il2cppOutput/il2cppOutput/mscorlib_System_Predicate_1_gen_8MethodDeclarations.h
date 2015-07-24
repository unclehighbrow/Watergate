#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Single>
struct Predicate_1_t2474;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t223;
// System.AsyncCallback
struct AsyncCallback_t224;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m12103_gshared (Predicate_1_t2474 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m12103(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2474 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m12103_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Single>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m12104_gshared (Predicate_1_t2474 * __this, float ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m12104(__this, ___obj, method) (( bool (*) (Predicate_1_t2474 *, float, const MethodInfo*))Predicate_1_Invoke_m12104_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m12105_gshared (Predicate_1_t2474 * __this, float ___obj, AsyncCallback_t224 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m12105(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2474 *, float, AsyncCallback_t224 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m12105_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m12106_gshared (Predicate_1_t2474 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m12106(__this, ___result, method) (( bool (*) (Predicate_1_t2474 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m12106_gshared)(__this, ___result, method)
