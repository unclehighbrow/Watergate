#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t250;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t2680;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t688;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
extern "C" void UnityEvent_1__ctor_m1927_gshared (UnityEvent_1_t250 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m1927(__this, method) (( void (*) (UnityEvent_1_t250 *, const MethodInfo*))UnityEvent_1__ctor_m1927_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m14848_gshared (UnityEvent_1_t250 * __this, UnityAction_1_t2680 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m14848(__this, ___call, method) (( void (*) (UnityEvent_1_t250 *, UnityAction_1_t2680 *, const MethodInfo*))UnityEvent_1_AddListener_m14848_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m14849_gshared (UnityEvent_1_t250 * __this, UnityAction_1_t2680 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m14849(__this, ___call, method) (( void (*) (UnityEvent_1_t250 *, UnityAction_1_t2680 *, const MethodInfo*))UnityEvent_1_RemoveListener_m14849_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m2226_gshared (UnityEvent_1_t250 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m2226(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t250 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m2226_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t688 * UnityEvent_1_GetDelegate_m2227_gshared (UnityEvent_1_t250 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m2227(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t688 * (*) (UnityEvent_1_t250 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m2227_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t688 * UnityEvent_1_GetDelegate_m14850_gshared (Object_t * __this /* static, unused */, UnityAction_1_t2680 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m14850(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t688 * (*) (Object_t * /* static, unused */, UnityAction_1_t2680 *, const MethodInfo*))UnityEvent_1_GetDelegate_m14850_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m1936_gshared (UnityEvent_1_t250 * __this, Vector2_t35  ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m1936(__this, ___arg0, method) (( void (*) (UnityEvent_1_t250 *, Vector2_t35 , const MethodInfo*))UnityEvent_1_Invoke_m1936_gshared)(__this, ___arg0, method)
