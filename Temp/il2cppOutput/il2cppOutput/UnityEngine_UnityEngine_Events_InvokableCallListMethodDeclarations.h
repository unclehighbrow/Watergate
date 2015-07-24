#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t696;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t689;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t73;

// System.Void UnityEngine.Events.InvokableCallList::.ctor()
extern "C" void InvokableCallList__ctor_m3476 (InvokableCallList_t696 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
extern "C" void InvokableCallList_AddPersistentInvokableCall_m3477 (InvokableCallList_t696 * __this, BaseInvokableCall_t689 * ___call, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
extern "C" void InvokableCallList_AddListener_m3478 (InvokableCallList_t696 * __this, BaseInvokableCall_t689 * ___call, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCallList_RemoveListener_m3479 (InvokableCallList_t696 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
extern "C" void InvokableCallList_ClearPersistent_m3480 (InvokableCallList_t696 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::Invoke(System.Object[])
extern "C" void InvokableCallList_Invoke_m3481 (InvokableCallList_t696 * __this, ObjectU5BU5D_t73* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
