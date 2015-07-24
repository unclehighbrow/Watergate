#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t689;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t73;
// System.Delegate
struct Delegate_t361;

// System.Void UnityEngine.Events.BaseInvokableCall::.ctor()
extern "C" void BaseInvokableCall__ctor_m3459 (BaseInvokableCall_t689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void BaseInvokableCall__ctor_m3460 (BaseInvokableCall_t689 * __this, Object_t * ___target, MethodInfo_t * ___function, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.BaseInvokableCall::AllowInvoke(System.Delegate)
extern "C" bool BaseInvokableCall_AllowInvoke_m3461 (Object_t * __this /* static, unused */, Delegate_t361 * ___delegate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Events.BaseInvokableCall::Find(System.Object,System.Reflection.MethodInfo)
