#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t2609;
// System.Object
struct Object_t;
// UnityEngine.UI.ICanvasElement
struct ICanvasElement_t331;
// System.IAsyncResult
struct IAsyncResult_t223;
// System.AsyncCallback
struct AsyncCallback_t224;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_6MethodDeclarations.h"
#define Transform_1__ctor_m14771(__this, ___object, ___method, method) (( void (*) (Transform_1_t2609 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m13763_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m14772(__this, ___key, ___value, method) (( DictionaryEntry_t1160  (*) (Transform_1_t2609 *, Object_t *, int32_t, const MethodInfo*))Transform_1_Invoke_m13764_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m14773(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2609 *, Object_t *, int32_t, AsyncCallback_t224 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m13765_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m14774(__this, ___result, method) (( DictionaryEntry_t1160  (*) (Transform_1_t2609 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m13766_gshared)(__this, ___result, method)
