#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t251;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t2681;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t689;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
extern "C" void UnityEvent_1__ctor_m1934_gshared (UnityEvent_1_t251 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m1934(__this, method) (( void (*) (UnityEvent_1_t251 *, const MethodInfo*))UnityEvent_1__ctor_m1934_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m14856_gshared (UnityEvent_1_t251 * __this, UnityAction_1_t2681 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m14856(__this, ___call, method) (( void (*) (UnityEvent_1_t251 *, UnityAction_1_t2681 *, const MethodInfo*))UnityEvent_1_AddListener_m14856_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m14857_gshared (UnityEvent_1_t251 * __this, UnityAction_1_t2681 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m14857(__this, ___call, method) (( void (*) (UnityEvent_1_t251 *, UnityAction_1_t2681 *, const MethodInfo*))UnityEvent_1_RemoveListener_m14857_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m2233_gshared (UnityEvent_1_t251 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m2233(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t251 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m2233_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t689 * UnityEvent_1_GetDelegate_m2234_gshared (UnityEvent_1_t251 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m2234(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t689 * (*) (UnityEvent_1_t251 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m2234_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t689 * UnityEvent_1_GetDelegate_m14858_gshared (Object_t * __this /* static, unused */, UnityAction_1_t2681 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m14858(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t689 * (*) (Object_t * /* static, unused */, UnityAction_1_t2681 *, const MethodInfo*))UnityEvent_1_GetDelegate_m14858_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m1943_gshared (UnityEvent_1_t251 * __this, Vector2_t38  ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m1943(__this, ___arg0, method) (( void (*) (UnityEvent_1_t251 *, Vector2_t38 , const MethodInfo*))UnityEvent_1_Invoke_m1943_gshared)(__this, ___arg0, method)
