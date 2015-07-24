#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_t176;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t330;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t689;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
extern "C" void UnityEvent_1__ctor_m1686_gshared (UnityEvent_1_t176 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m1686(__this, method) (( void (*) (UnityEvent_1_t176 *, const MethodInfo*))UnityEvent_1__ctor_m1686_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m1689_gshared (UnityEvent_1_t176 * __this, UnityAction_1_t330 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m1689(__this, ___call, method) (( void (*) (UnityEvent_1_t176 *, UnityAction_1_t330 *, const MethodInfo*))UnityEvent_1_AddListener_m1689_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m13604_gshared (UnityEvent_1_t176 * __this, UnityAction_1_t330 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m13604(__this, ___call, method) (( void (*) (UnityEvent_1_t176 *, UnityAction_1_t330 *, const MethodInfo*))UnityEvent_1_RemoveListener_m13604_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m2222_gshared (UnityEvent_1_t176 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m2222(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t176 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m2222_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t689 * UnityEvent_1_GetDelegate_m2223_gshared (UnityEvent_1_t176 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m2223(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t689 * (*) (UnityEvent_1_t176 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m2223_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t689 * UnityEvent_1_GetDelegate_m13605_gshared (Object_t * __this /* static, unused */, UnityAction_1_t330 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m13605(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t689 * (*) (Object_t * /* static, unused */, UnityAction_1_t330 *, const MethodInfo*))UnityEvent_1_GetDelegate_m13605_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m1688_gshared (UnityEvent_1_t176 * __this, Color_t13  ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m1688(__this, ___arg0, method) (( void (*) (UnityEvent_1_t176 *, Color_t13 , const MethodInfo*))UnityEvent_1_Invoke_m1688_gshared)(__this, ___arg0, method)
