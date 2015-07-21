#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t792;
// UnityEngine.Object
struct Object_t66;
struct Object_t66_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t69;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m3643_gshared (CachedInvokableCall_1_t792 * __this, Object_t66 * ___target, MethodInfo_t * ___theFunction, float ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m3643(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t792 *, Object_t66 *, MethodInfo_t *, float, const MethodInfo*))CachedInvokableCall_1__ctor_m3643_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m18311_gshared (CachedInvokableCall_1_t792 * __this, ObjectU5BU5D_t69* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m18311(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t792 *, ObjectU5BU5D_t69*, const MethodInfo*))CachedInvokableCall_1_Invoke_m18311_gshared)(__this, ___args, method)
