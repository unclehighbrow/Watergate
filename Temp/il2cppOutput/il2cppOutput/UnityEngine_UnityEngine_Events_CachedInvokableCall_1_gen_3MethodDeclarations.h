#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Object>
struct CachedInvokableCall_1_t2934;
// UnityEngine.Object
struct Object_t67;
struct Object_t67_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t73;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m18317_gshared (CachedInvokableCall_1_t2934 * __this, Object_t67 * ___target, MethodInfo_t * ___theFunction, Object_t * ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m18317(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t2934 *, Object_t67 *, MethodInfo_t *, Object_t *, const MethodInfo*))CachedInvokableCall_1__ctor_m18317_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m18318_gshared (CachedInvokableCall_1_t2934 * __this, ObjectU5BU5D_t73* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m18318(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t2934 *, ObjectU5BU5D_t73*, const MethodInfo*))CachedInvokableCall_1_Invoke_m18318_gshared)(__this, ___args, method)
