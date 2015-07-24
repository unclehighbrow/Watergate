#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2797;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t223;
// System.AsyncCallback
struct AsyncCallback_t224;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Predicate`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m16632_gshared (Predicate_1_t2797 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m16632(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2797 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m16632_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m16633_gshared (Predicate_1_t2797 * __this, UILineInfo_t373  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m16633(__this, ___obj, method) (( bool (*) (Predicate_1_t2797 *, UILineInfo_t373 , const MethodInfo*))Predicate_1_Invoke_m16633_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m16634_gshared (Predicate_1_t2797 * __this, UILineInfo_t373  ___obj, AsyncCallback_t224 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m16634(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2797 *, UILineInfo_t373 , AsyncCallback_t224 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m16634_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m16635_gshared (Predicate_1_t2797 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m16635(__this, ___result, method) (( bool (*) (Predicate_1_t2797 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m16635_gshared)(__this, ___result, method)
