#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t244;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t379;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t689;

// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
extern "C" void UnityEvent_1__ctor_m1924_gshared (UnityEvent_1_t244 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m1924(__this, method) (( void (*) (UnityEvent_1_t244 *, const MethodInfo*))UnityEvent_1__ctor_m1924_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m1937_gshared (UnityEvent_1_t244 * __this, UnityAction_1_t379 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m1937(__this, ___call, method) (( void (*) (UnityEvent_1_t244 *, UnityAction_1_t379 *, const MethodInfo*))UnityEvent_1_AddListener_m1937_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m1936_gshared (UnityEvent_1_t244 * __this, UnityAction_1_t379 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m1936(__this, ___call, method) (( void (*) (UnityEvent_1_t244 *, UnityAction_1_t379 *, const MethodInfo*))UnityEvent_1_RemoveListener_m1936_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m2231_gshared (UnityEvent_1_t244 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m2231(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t244 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m2231_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t689 * UnityEvent_1_GetDelegate_m2232_gshared (UnityEvent_1_t244 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m2232(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t689 * (*) (UnityEvent_1_t244 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m2232_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t689 * UnityEvent_1_GetDelegate_m14843_gshared (Object_t * __this /* static, unused */, UnityAction_1_t379 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m14843(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t689 * (*) (Object_t * /* static, unused */, UnityAction_1_t379 *, const MethodInfo*))UnityEvent_1_GetDelegate_m14843_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m1929_gshared (UnityEvent_1_t244 * __this, float ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m1929(__this, ___arg0, method) (( void (*) (UnityEvent_1_t244 *, float, const MethodInfo*))UnityEvent_1_Invoke_m1929_gshared)(__this, ___arg0, method)
