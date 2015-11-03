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

// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2203;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t234;
// System.AsyncCallback
struct AsyncCallback_t235;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Predicate`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m16367_gshared (Predicate_1_t2203 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m16367(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2203 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m16367_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m16368_gshared (Predicate_1_t2203 * __this, UILineInfo_t391  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m16368(__this, ___obj, method) (( bool (*) (Predicate_1_t2203 *, UILineInfo_t391 , const MethodInfo*))Predicate_1_Invoke_m16368_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m16369_gshared (Predicate_1_t2203 * __this, UILineInfo_t391  ___obj, AsyncCallback_t235 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m16369(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2203 *, UILineInfo_t391 , AsyncCallback_t235 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m16369_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m16370_gshared (Predicate_1_t2203 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m16370(__this, ___result, method) (( bool (*) (Predicate_1_t2203 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m16370_gshared)(__this, ___result, method)
