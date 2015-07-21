#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2796;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t222;
// System.AsyncCallback
struct AsyncCallback_t223;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Predicate`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m16624_gshared (Predicate_1_t2796 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m16624(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2796 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m16624_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m16625_gshared (Predicate_1_t2796 * __this, UILineInfo_t372  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m16625(__this, ___obj, method) (( bool (*) (Predicate_1_t2796 *, UILineInfo_t372 , const MethodInfo*))Predicate_1_Invoke_m16625_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m16626_gshared (Predicate_1_t2796 * __this, UILineInfo_t372  ___obj, AsyncCallback_t223 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m16626(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2796 *, UILineInfo_t372 , AsyncCallback_t223 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m16626_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m16627_gshared (Predicate_1_t2796 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m16627(__this, ___result, method) (( bool (*) (Predicate_1_t2796 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m16627_gshared)(__this, ___result, method)
