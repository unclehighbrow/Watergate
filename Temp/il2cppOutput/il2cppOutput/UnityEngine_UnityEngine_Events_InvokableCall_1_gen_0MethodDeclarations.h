#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
struct InvokableCall_1_t1940;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t347;
// System.Object[]
struct ObjectU5BU5D_t74;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m12802_gshared (InvokableCall_1_t1940 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m12802(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t1940 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m12802_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m12803_gshared (InvokableCall_1_t1940 * __this, UnityAction_1_t347 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m12803(__this, ___action, method) (( void (*) (InvokableCall_1_t1940 *, UnityAction_1_t347 *, const MethodInfo*))InvokableCall_1__ctor_m12803_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m12804_gshared (InvokableCall_1_t1940 * __this, ObjectU5BU5D_t74* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m12804(__this, ___args, method) (( void (*) (InvokableCall_1_t1940 *, ObjectU5BU5D_t74*, const MethodInfo*))InvokableCall_1_Invoke_m12804_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m12805_gshared (InvokableCall_1_t1940 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m12805(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t1940 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m12805_gshared)(__this, ___targetObj, ___method, method)
