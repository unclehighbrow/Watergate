#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2799;
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

// System.Void System.Comparison`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m16634_gshared (Comparison_1_t2799 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m16634(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2799 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m16634_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m16635_gshared (Comparison_1_t2799 * __this, UILineInfo_t372  ___x, UILineInfo_t372  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m16635(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2799 *, UILineInfo_t372 , UILineInfo_t372 , const MethodInfo*))Comparison_1_Invoke_m16635_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UILineInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m16636_gshared (Comparison_1_t2799 * __this, UILineInfo_t372  ___x, UILineInfo_t372  ___y, AsyncCallback_t223 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m16636(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2799 *, UILineInfo_t372 , UILineInfo_t372 , AsyncCallback_t223 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m16636_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m16637_gshared (Comparison_1_t2799 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m16637(__this, ___result, method) (( int32_t (*) (Comparison_1_t2799 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m16637_gshared)(__this, ___result, method)
