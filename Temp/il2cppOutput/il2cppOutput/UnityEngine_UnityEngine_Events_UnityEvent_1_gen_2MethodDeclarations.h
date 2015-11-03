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

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t191;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t1963;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t587;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
extern "C" void UnityEvent_1__ctor_m1918_gshared (UnityEvent_1_t191 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m1918(__this, method) (( void (*) (UnityEvent_1_t191 *, const MethodInfo*))UnityEvent_1__ctor_m1918_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m13150_gshared (UnityEvent_1_t191 * __this, UnityAction_1_t1963 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m13150(__this, ___call, method) (( void (*) (UnityEvent_1_t191 *, UnityAction_1_t1963 *, const MethodInfo*))UnityEvent_1_AddListener_m13150_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m13151_gshared (UnityEvent_1_t191 * __this, UnityAction_1_t1963 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m13151(__this, ___call, method) (( void (*) (UnityEvent_1_t191 *, UnityAction_1_t1963 *, const MethodInfo*))UnityEvent_1_RemoveListener_m13151_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Int32>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m13152_gshared (UnityEvent_1_t191 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m13152(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t191 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m13152_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t587 * UnityEvent_1_GetDelegate_m13153_gshared (UnityEvent_1_t191 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m13153(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t587 * (*) (UnityEvent_1_t191 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m13153_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t587 * UnityEvent_1_GetDelegate_m13154_gshared (Object_t * __this /* static, unused */, UnityAction_1_t1963 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m13154(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t587 * (*) (Object_t * /* static, unused */, UnityAction_1_t1963 *, const MethodInfo*))UnityEvent_1_GetDelegate_m13154_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m1922_gshared (UnityEvent_1_t191 * __this, int32_t ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m1922(__this, ___arg0, method) (( void (*) (UnityEvent_1_t191 *, int32_t, const MethodInfo*))UnityEvent_1_Invoke_m1922_gshared)(__this, ___arg0, method)
