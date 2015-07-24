#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>
struct Transform_1_t2923;
// System.Object
struct Object_t;
// UnityEngine.Event
struct Event_t236;
struct Event_t236_marshaled;
// System.IAsyncResult
struct IAsyncResult_t223;
// System.AsyncCallback
struct AsyncCallback_t224;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_6MethodDeclarations.h"
#define Transform_1__ctor_m18246(__this, ___object, ___method, method) (( void (*) (Transform_1_t2923 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m13763_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m18247(__this, ___key, ___value, method) (( DictionaryEntry_t1160  (*) (Transform_1_t2923 *, Event_t236 *, int32_t, const MethodInfo*))Transform_1_Invoke_m13764_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m18248(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2923 *, Event_t236 *, int32_t, AsyncCallback_t224 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m13765_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m18249(__this, ___result, method) (( DictionaryEntry_t1160  (*) (Transform_1_t2923 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m13766_gshared)(__this, ___result, method)
