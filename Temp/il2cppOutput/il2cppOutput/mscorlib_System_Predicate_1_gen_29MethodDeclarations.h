#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Byte[]>
struct Predicate_1_t2770;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t551;
// System.IAsyncResult
struct IAsyncResult_t223;
// System.AsyncCallback
struct AsyncCallback_t224;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Byte[]>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_4MethodDeclarations.h"
#define Predicate_1__ctor_m16233(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2770 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m11539_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Byte[]>::Invoke(T)
#define Predicate_1_Invoke_m16234(__this, ___obj, method) (( bool (*) (Predicate_1_t2770 *, ByteU5BU5D_t551*, const MethodInfo*))Predicate_1_Invoke_m11540_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Byte[]>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m16235(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2770 *, ByteU5BU5D_t551*, AsyncCallback_t224 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m11541_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Byte[]>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m16236(__this, ___result, method) (( bool (*) (Predicate_1_t2770 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m11542_gshared)(__this, ___result, method)
