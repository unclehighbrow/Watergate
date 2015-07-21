#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2790;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t222;
// System.AsyncCallback
struct AsyncCallback_t223;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Comparison`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m16491_gshared (Comparison_1_t2790 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m16491(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2790 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m16491_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m16492_gshared (Comparison_1_t2790 * __this, UICharInfo_t374  ___x, UICharInfo_t374  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m16492(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2790 *, UICharInfo_t374 , UICharInfo_t374 , const MethodInfo*))Comparison_1_Invoke_m16492_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UICharInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m16493_gshared (Comparison_1_t2790 * __this, UICharInfo_t374  ___x, UICharInfo_t374  ___y, AsyncCallback_t223 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m16493(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2790 *, UICharInfo_t374 , UICharInfo_t374 , AsyncCallback_t223 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m16493_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m16494_gshared (Comparison_1_t2790 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m16494(__this, ___result, method) (( int32_t (*) (Comparison_1_t2790 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m16494_gshared)(__this, ___result, method)
