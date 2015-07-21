#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t2839;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t222;
// System.AsyncCallback
struct AsyncCallback_t223;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m17248_gshared (Transform_1_t2839 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m17248(__this, ___object, ___method, method) (( void (*) (Transform_1_t2839 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m17248_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1159  Transform_1_Invoke_m17249_gshared (Transform_1_t2839 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m17249(__this, ___key, ___value, method) (( DictionaryEntry_t1159  (*) (Transform_1_t2839 *, uint64_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m17249_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m17250_gshared (Transform_1_t2839 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t223 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m17250(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2839 *, uint64_t, Object_t *, AsyncCallback_t223 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m17250_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1159  Transform_1_EndInvoke_m17251_gshared (Transform_1_t2839 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m17251(__this, ___result, method) (( DictionaryEntry_t1159  (*) (Transform_1_t2839 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m17251_gshared)(__this, ___result, method)
