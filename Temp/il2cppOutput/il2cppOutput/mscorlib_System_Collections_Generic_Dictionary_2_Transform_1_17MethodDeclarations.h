﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t2753;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_6MethodDeclarations.h"
#define Transform_1__ctor_m15905(__this, ___object, ___method, method) (( void (*) (Transform_1_t2753 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m13755_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m15906(__this, ___key, ___value, method) (( DictionaryEntry_t1159  (*) (Transform_1_t2753 *, String_t*, int32_t, const MethodInfo*))Transform_1_Invoke_m13756_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m15907(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2753 *, String_t*, int32_t, AsyncCallback_t223 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m13757_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m15908(__this, ___result, method) (( DictionaryEntry_t1159  (*) (Transform_1_t2753 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m13758_gshared)(__this, ___result, method)