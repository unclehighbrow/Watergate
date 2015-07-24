#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
struct ThreadSafeDictionaryValueFactory_2_t764;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
struct ConstructorDelegate_t637;
// System.Type
struct Type_t;
// System.IAsyncResult
struct IAsyncResult_t223;
// System.AsyncCallback
struct AsyncCallback_t224;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::.ctor(System.Object,System.IntPtr)
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_5MethodDeclarations.h"
#define ThreadSafeDictionaryValueFactory_2__ctor_m3611(__this, ___object, ___method, method) (( void (*) (ThreadSafeDictionaryValueFactory_2_t764 *, Object_t *, IntPtr_t, const MethodInfo*))ThreadSafeDictionaryValueFactory_2__ctor_m17466_gshared)(__this, ___object, ___method, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::Invoke(TKey)
#define ThreadSafeDictionaryValueFactory_2_Invoke_m17467(__this, ___key, method) (( ConstructorDelegate_t637 * (*) (ThreadSafeDictionaryValueFactory_2_t764 *, Type_t *, const MethodInfo*))ThreadSafeDictionaryValueFactory_2_Invoke_m17468_gshared)(__this, ___key, method)
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::BeginInvoke(TKey,System.AsyncCallback,System.Object)
#define ThreadSafeDictionaryValueFactory_2_BeginInvoke_m17469(__this, ___key, ___callback, ___object, method) (( Object_t * (*) (ThreadSafeDictionaryValueFactory_2_t764 *, Type_t *, AsyncCallback_t224 *, Object_t *, const MethodInfo*))ThreadSafeDictionaryValueFactory_2_BeginInvoke_m17470_gshared)(__this, ___key, ___callback, ___object, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::EndInvoke(System.IAsyncResult)
#define ThreadSafeDictionaryValueFactory_2_EndInvoke_m17471(__this, ___result, method) (( ConstructorDelegate_t637 * (*) (ThreadSafeDictionaryValueFactory_2_t764 *, Object_t *, const MethodInfo*))ThreadSafeDictionaryValueFactory_2_EndInvoke_m17472_gshared)(__this, ___result, method)
