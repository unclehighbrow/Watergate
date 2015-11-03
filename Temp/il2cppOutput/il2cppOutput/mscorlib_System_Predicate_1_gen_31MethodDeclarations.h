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

// System.Predicate`1<UnityEngine.Vector3>
struct Predicate_1_t2106;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t234;
// System.AsyncCallback
struct AsyncCallback_t235;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Predicate`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m15224_gshared (Predicate_1_t2106 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m15224(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2106 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m15224_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector3>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m15225_gshared (Predicate_1_t2106 * __this, Vector3_t60  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m15225(__this, ___obj, method) (( bool (*) (Predicate_1_t2106 *, Vector3_t60 , const MethodInfo*))Predicate_1_Invoke_m15225_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector3>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m15226_gshared (Predicate_1_t2106 * __this, Vector3_t60  ___obj, AsyncCallback_t235 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m15226(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2106 *, Vector3_t60 , AsyncCallback_t235 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m15226_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m15227_gshared (Predicate_1_t2106 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m15227(__this, ___result, method) (( bool (*) (Predicate_1_t2106 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m15227_gshared)(__this, ___result, method)
