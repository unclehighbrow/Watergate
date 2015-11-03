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

// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2206;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t234;
// System.AsyncCallback
struct AsyncCallback_t235;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Comparison`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m16377_gshared (Comparison_1_t2206 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m16377(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2206 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m16377_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m16378_gshared (Comparison_1_t2206 * __this, UILineInfo_t391  ___x, UILineInfo_t391  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m16378(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2206 *, UILineInfo_t391 , UILineInfo_t391 , const MethodInfo*))Comparison_1_Invoke_m16378_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UILineInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m16379_gshared (Comparison_1_t2206 * __this, UILineInfo_t391  ___x, UILineInfo_t391  ___y, AsyncCallback_t235 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m16379(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2206 *, UILineInfo_t391 , UILineInfo_t391 , AsyncCallback_t235 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m16379_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m16380_gshared (Comparison_1_t2206 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m16380(__this, ___result, method) (( int32_t (*) (Comparison_1_t2206 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m16380_gshared)(__this, ___result, method)
