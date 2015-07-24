#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.Vector2>
struct Predicate_1_t2486;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t223;
// System.AsyncCallback
struct AsyncCallback_t224;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Predicate`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m12255_gshared (Predicate_1_t2486 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m12255(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2486 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m12255_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector2>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m12256_gshared (Predicate_1_t2486 * __this, Vector2_t38  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m12256(__this, ___obj, method) (( bool (*) (Predicate_1_t2486 *, Vector2_t38 , const MethodInfo*))Predicate_1_Invoke_m12256_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector2>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m12257_gshared (Predicate_1_t2486 * __this, Vector2_t38  ___obj, AsyncCallback_t224 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m12257(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2486 *, Vector2_t38 , AsyncCallback_t224 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m12257_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m12258_gshared (Predicate_1_t2486 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m12258(__this, ___result, method) (( bool (*) (Predicate_1_t2486 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m12258_gshared)(__this, ___result, method)
