#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Byte[]>
struct Predicate_1_t2769;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t550;
// System.IAsyncResult
struct IAsyncResult_t222;
// System.AsyncCallback
struct AsyncCallback_t223;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Byte[]>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_4MethodDeclarations.h"
#define Predicate_1__ctor_m16225(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2769 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m11531_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Byte[]>::Invoke(T)
#define Predicate_1_Invoke_m16226(__this, ___obj, method) (( bool (*) (Predicate_1_t2769 *, ByteU5BU5D_t550*, const MethodInfo*))Predicate_1_Invoke_m11532_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Byte[]>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m16227(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2769 *, ByteU5BU5D_t550*, AsyncCallback_t223 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m11533_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Byte[]>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m16228(__this, ___result, method) (( bool (*) (Predicate_1_t2769 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m11534_gshared)(__this, ___result, method)
