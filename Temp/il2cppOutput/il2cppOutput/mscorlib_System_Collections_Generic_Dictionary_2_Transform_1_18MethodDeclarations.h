#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.DictionaryEntry>
struct Transform_1_t2758;
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
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_10MethodDeclarations.h"
#define Transform_1__ctor_m16003(__this, ___object, ___method, method) (( void (*) (Transform_1_t2758 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m14083_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m16004(__this, ___key, ___value, method) (( DictionaryEntry_t1159  (*) (Transform_1_t2758 *, String_t*, String_t*, const MethodInfo*))Transform_1_Invoke_m14084_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m16005(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2758 *, String_t*, String_t*, AsyncCallback_t223 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m14085_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m16006(__this, ___result, method) (( DictionaryEntry_t1159  (*) (Transform_1_t2758 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m14086_gshared)(__this, ___result, method)
