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

// System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>
struct Predicate_1_t2332;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t234;
// System.AsyncCallback
struct AsyncCallback_t235;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Reflection_CustomAttributeNamedArgument.h"

// System.Void System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m17647_gshared (Predicate_1_t2332 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m17647(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2332 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m17647_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m17648_gshared (Predicate_1_t2332 * __this, CustomAttributeNamedArgument_t1289  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m17648(__this, ___obj, method) (( bool (*) (Predicate_1_t2332 *, CustomAttributeNamedArgument_t1289 , const MethodInfo*))Predicate_1_Invoke_m17648_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m17649_gshared (Predicate_1_t2332 * __this, CustomAttributeNamedArgument_t1289  ___obj, AsyncCallback_t235 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m17649(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2332 *, CustomAttributeNamedArgument_t1289 , AsyncCallback_t235 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m17649_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m17650_gshared (Predicate_1_t2332 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m17650(__this, ___result, method) (( bool (*) (Predicate_1_t2332 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m17650_gshared)(__this, ___result, method)
