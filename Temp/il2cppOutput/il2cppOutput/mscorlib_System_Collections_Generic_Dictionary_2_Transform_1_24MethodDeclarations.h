#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>
struct Transform_1_t2847;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t222;
// System.AsyncCallback
struct AsyncCallback_t223;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m17221_gshared (Transform_1_t2847 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m17221(__this, ___object, ___method, method) (( void (*) (Transform_1_t2847 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m17221_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>::Invoke(TKey,TValue)
extern "C" uint64_t Transform_1_Invoke_m17222_gshared (Transform_1_t2847 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m17222(__this, ___key, ___value, method) (( uint64_t (*) (Transform_1_t2847 *, uint64_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m17222_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m17223_gshared (Transform_1_t2847 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t223 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m17223(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2847 *, uint64_t, Object_t *, AsyncCallback_t223 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m17223_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>::EndInvoke(System.IAsyncResult)
extern "C" uint64_t Transform_1_EndInvoke_m17224_gshared (Transform_1_t2847 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m17224(__this, ___result, method) (( uint64_t (*) (Transform_1_t2847 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m17224_gshared)(__this, ___result, method)
