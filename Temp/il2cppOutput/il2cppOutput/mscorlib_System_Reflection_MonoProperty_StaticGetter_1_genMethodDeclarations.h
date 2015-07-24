#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
struct StaticGetter_1_t3027;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t223;
// System.AsyncCallback
struct AsyncCallback_t224;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/StaticGetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void StaticGetter_1__ctor_m19098_gshared (StaticGetter_1_t3027 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define StaticGetter_1__ctor_m19098(__this, ___object, ___method, method) (( void (*) (StaticGetter_1_t3027 *, Object_t *, IntPtr_t, const MethodInfo*))StaticGetter_1__ctor_m19098_gshared)(__this, ___object, ___method, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
extern "C" Object_t * StaticGetter_1_Invoke_m19099_gshared (StaticGetter_1_t3027 * __this, const MethodInfo* method);
#define StaticGetter_1_Invoke_m19099(__this, method) (( Object_t * (*) (StaticGetter_1_t3027 *, const MethodInfo*))StaticGetter_1_Invoke_m19099_gshared)(__this, method)
// System.IAsyncResult System.Reflection.MonoProperty/StaticGetter`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * StaticGetter_1_BeginInvoke_m19100_gshared (StaticGetter_1_t3027 * __this, AsyncCallback_t224 * ___callback, Object_t * ___object, const MethodInfo* method);
#define StaticGetter_1_BeginInvoke_m19100(__this, ___callback, ___object, method) (( Object_t * (*) (StaticGetter_1_t3027 *, AsyncCallback_t224 *, Object_t *, const MethodInfo*))StaticGetter_1_BeginInvoke_m19100_gshared)(__this, ___callback, ___object, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * StaticGetter_1_EndInvoke_m19101_gshared (StaticGetter_1_t3027 * __this, Object_t * ___result, const MethodInfo* method);
#define StaticGetter_1_EndInvoke_m19101(__this, ___result, method) (( Object_t * (*) (StaticGetter_1_t3027 *, Object_t *, const MethodInfo*))StaticGetter_1_EndInvoke_m19101_gshared)(__this, ___result, method)
