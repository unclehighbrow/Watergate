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

// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t1906;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t1866;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t587;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern "C" void UnityEvent_1__ctor_m12324_gshared (UnityEvent_1_t1906 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m12324(__this, method) (( void (*) (UnityEvent_1_t1906 *, const MethodInfo*))UnityEvent_1__ctor_m12324_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m12326_gshared (UnityEvent_1_t1906 * __this, UnityAction_1_t1866 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m12326(__this, ___call, method) (( void (*) (UnityEvent_1_t1906 *, UnityAction_1_t1866 *, const MethodInfo*))UnityEvent_1_AddListener_m12326_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m12328_gshared (UnityEvent_1_t1906 * __this, UnityAction_1_t1866 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m12328(__this, ___call, method) (( void (*) (UnityEvent_1_t1906 *, UnityAction_1_t1866 *, const MethodInfo*))UnityEvent_1_RemoveListener_m12328_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m12330_gshared (UnityEvent_1_t1906 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m12330(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t1906 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m12330_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t587 * UnityEvent_1_GetDelegate_m12332_gshared (UnityEvent_1_t1906 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m12332(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t587 * (*) (UnityEvent_1_t1906 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m12332_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t587 * UnityEvent_1_GetDelegate_m12334_gshared (Object_t * __this /* static, unused */, UnityAction_1_t1866 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m12334(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t587 * (*) (Object_t * /* static, unused */, UnityAction_1_t1866 *, const MethodInfo*))UnityEvent_1_GetDelegate_m12334_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m12335_gshared (UnityEvent_1_t1906 * __this, Object_t * ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m12335(__this, ___arg0, method) (( void (*) (UnityEvent_1_t1906 *, Object_t *, const MethodInfo*))UnityEvent_1_Invoke_m12335_gshared)(__this, ___arg0, method)
