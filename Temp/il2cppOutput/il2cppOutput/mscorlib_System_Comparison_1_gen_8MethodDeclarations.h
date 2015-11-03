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

// System.Comparison`1<System.Single>
struct Comparison_1_t1820;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t234;
// System.AsyncCallback
struct AsyncCallback_t235;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m11285_gshared (Comparison_1_t1820 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m11285(__this, ___object, ___method, method) (( void (*) (Comparison_1_t1820 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m11285_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Single>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m11286_gshared (Comparison_1_t1820 * __this, float ___x, float ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m11286(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t1820 *, float, float, const MethodInfo*))Comparison_1_Invoke_m11286_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Single>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m11287_gshared (Comparison_1_t1820 * __this, float ___x, float ___y, AsyncCallback_t235 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m11287(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t1820 *, float, float, AsyncCallback_t235 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m11287_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m11288_gshared (Comparison_1_t1820 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m11288(__this, ___result, method) (( int32_t (*) (Comparison_1_t1820 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m11288_gshared)(__this, ___result, method)
