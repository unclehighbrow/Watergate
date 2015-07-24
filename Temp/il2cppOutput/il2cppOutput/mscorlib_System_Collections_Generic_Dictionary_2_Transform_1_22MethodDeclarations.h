#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct Transform_1_t2814;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t223;
// System.AsyncCallback
struct AsyncCallback_t224;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m16824_gshared (Transform_1_t2814 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m16824(__this, ___object, ___method, method) (( void (*) (Transform_1_t2814 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m16824_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2804  Transform_1_Invoke_m16825_gshared (Transform_1_t2814 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m16825(__this, ___key, ___value, method) (( KeyValuePair_2_t2804  (*) (Transform_1_t2814 *, Object_t *, int64_t, const MethodInfo*))Transform_1_Invoke_m16825_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m16826_gshared (Transform_1_t2814 * __this, Object_t * ___key, int64_t ___value, AsyncCallback_t224 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m16826(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2814 *, Object_t *, int64_t, AsyncCallback_t224 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m16826_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2804  Transform_1_EndInvoke_m16827_gshared (Transform_1_t2814 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m16827(__this, ___result, method) (( KeyValuePair_2_t2804  (*) (Transform_1_t2814 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m16827_gshared)(__this, ___result, method)
