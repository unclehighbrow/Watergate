#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t793;
// UnityEngine.Object
struct Object_t67;
struct Object_t67_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t73;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m3651_gshared (CachedInvokableCall_1_t793 * __this, Object_t67 * ___target, MethodInfo_t * ___theFunction, float ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m3651(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t793 *, Object_t67 *, MethodInfo_t *, float, const MethodInfo*))CachedInvokableCall_1__ctor_m3651_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m18319_gshared (CachedInvokableCall_1_t793 * __this, ObjectU5BU5D_t73* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m18319(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t793 *, ObjectU5BU5D_t73*, const MethodInfo*))CachedInvokableCall_1_Invoke_m18319_gshared)(__this, ___args, method)
