#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
struct InvokableCall_4_t2933;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t73;

// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_4__ctor_m18310_gshared (InvokableCall_4_t2933 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_4__ctor_m18310(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_4_t2933 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_4__ctor_m18310_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_4_Invoke_m18311_gshared (InvokableCall_4_t2933 * __this, ObjectU5BU5D_t73* ___args, const MethodInfo* method);
#define InvokableCall_4_Invoke_m18311(__this, ___args, method) (( void (*) (InvokableCall_4_t2933 *, ObjectU5BU5D_t73*, const MethodInfo*))InvokableCall_4_Invoke_m18311_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_4_Find_m18312_gshared (InvokableCall_4_t2933 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_4_Find_m18312(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_4_t2933 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_4_Find_m18312_gshared)(__this, ___targetObj, ___method, method)
