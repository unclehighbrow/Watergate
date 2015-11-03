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

// System.Comparison`1<System.Reflection.CustomAttributeTypedArgument>
struct Comparison_1_t2324;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t234;
// System.AsyncCallback
struct AsyncCallback_t235;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Reflection_CustomAttributeTypedArgument.h"

// System.Void System.Comparison`1<System.Reflection.CustomAttributeTypedArgument>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m17490_gshared (Comparison_1_t2324 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m17490(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2324 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m17490_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Reflection.CustomAttributeTypedArgument>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m17491_gshared (Comparison_1_t2324 * __this, CustomAttributeTypedArgument_t1290  ___x, CustomAttributeTypedArgument_t1290  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m17491(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2324 *, CustomAttributeTypedArgument_t1290 , CustomAttributeTypedArgument_t1290 , const MethodInfo*))Comparison_1_Invoke_m17491_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Reflection.CustomAttributeTypedArgument>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m17492_gshared (Comparison_1_t2324 * __this, CustomAttributeTypedArgument_t1290  ___x, CustomAttributeTypedArgument_t1290  ___y, AsyncCallback_t235 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m17492(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2324 *, CustomAttributeTypedArgument_t1290 , CustomAttributeTypedArgument_t1290 , AsyncCallback_t235 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m17492_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Reflection.CustomAttributeTypedArgument>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m17493_gshared (Comparison_1_t2324 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m17493(__this, ___result, method) (( int32_t (*) (Comparison_1_t2324 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m17493_gshared)(__this, ___result, method)
