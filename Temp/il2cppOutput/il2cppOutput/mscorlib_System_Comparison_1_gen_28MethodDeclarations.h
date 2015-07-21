#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.String>
struct Comparison_1_t2766;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t222;
// System.AsyncCallback
struct AsyncCallback_t223;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.String>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_5MethodDeclarations.h"
#define Comparison_1__ctor_m16142(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2766 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m11561_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.String>::Invoke(T,T)
#define Comparison_1_Invoke_m16143(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2766 *, String_t*, String_t*, const MethodInfo*))Comparison_1_Invoke_m11562_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.String>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m16144(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2766 *, String_t*, String_t*, AsyncCallback_t223 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m11563_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.String>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m16145(__this, ___result, method) (( int32_t (*) (Comparison_1_t2766 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m11564_gshared)(__this, ___result, method)
