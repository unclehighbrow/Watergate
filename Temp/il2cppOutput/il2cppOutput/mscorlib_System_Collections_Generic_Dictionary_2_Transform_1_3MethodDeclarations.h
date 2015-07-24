#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.DictionaryEntry>
struct Transform_1_t2564;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t159;
// System.IAsyncResult
struct IAsyncResult_t223;
// System.AsyncCallback
struct AsyncCallback_t224;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_1MethodDeclarations.h"
#define Transform_1__ctor_m13456(__this, ___object, ___method, method) (( void (*) (Transform_1_t2564 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m13426_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m13457(__this, ___key, ___value, method) (( DictionaryEntry_t1160  (*) (Transform_1_t2564 *, int32_t, PointerEventData_t159 *, const MethodInfo*))Transform_1_Invoke_m13427_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m13458(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2564 *, int32_t, PointerEventData_t159 *, AsyncCallback_t224 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m13428_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m13459(__this, ___result, method) (( DictionaryEntry_t1160  (*) (Transform_1_t2564 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m13429_gshared)(__this, ___result, method)
