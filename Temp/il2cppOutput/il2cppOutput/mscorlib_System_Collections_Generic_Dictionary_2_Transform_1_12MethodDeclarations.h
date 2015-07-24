#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>
struct Transform_1_t2613;
// System.Object
struct Object_t;
// UnityEngine.Font
struct Font_t188;
// System.Collections.Generic.List`1<UnityEngine.UI.Text>
struct List_1_t354;
// System.IAsyncResult
struct IAsyncResult_t223;
// System.AsyncCallback
struct AsyncCallback_t224;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_10MethodDeclarations.h"
#define Transform_1__ctor_m14105(__this, ___object, ___method, method) (( void (*) (Transform_1_t2613 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m14091_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m14106(__this, ___key, ___value, method) (( DictionaryEntry_t1160  (*) (Transform_1_t2613 *, Font_t188 *, List_1_t354 *, const MethodInfo*))Transform_1_Invoke_m14092_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m14107(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2613 *, Font_t188 *, List_1_t354 *, AsyncCallback_t224 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m14093_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m14108(__this, ___result, method) (( DictionaryEntry_t1160  (*) (Transform_1_t2613 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m14094_gshared)(__this, ___result, method)
