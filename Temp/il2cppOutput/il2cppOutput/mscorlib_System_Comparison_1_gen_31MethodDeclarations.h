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

// System.Comparison`1<UnityEngine.Vector3>
struct Comparison_1_t2109;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t234;
// System.AsyncCallback
struct AsyncCallback_t235;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Comparison`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m15234_gshared (Comparison_1_t2109 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m15234(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2109 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m15234_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m15235_gshared (Comparison_1_t2109 * __this, Vector3_t60  ___x, Vector3_t60  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m15235(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2109 *, Vector3_t60 , Vector3_t60 , const MethodInfo*))Comparison_1_Invoke_m15235_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector3>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m15236_gshared (Comparison_1_t2109 * __this, Vector3_t60  ___x, Vector3_t60  ___y, AsyncCallback_t235 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m15236(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2109 *, Vector3_t60 , Vector3_t60 , AsyncCallback_t235 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m15236_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m15237_gshared (Comparison_1_t2109 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m15237(__this, ___result, method) (( int32_t (*) (Comparison_1_t2109 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m15237_gshared)(__this, ___result, method)
