#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.String>
struct InvokableCall_1_t2937;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t2678;
// System.Object[]
struct ObjectU5BU5D_t73;

// System.Void UnityEngine.Events.InvokableCall`1<System.String>::.ctor(System.Object,System.Reflection.MethodInfo)
// UnityEngine.Events.InvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_genMethodDeclarations.h"
#define InvokableCall_1__ctor_m18330(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2937 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m13109_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.String>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
#define InvokableCall_1__ctor_m18331(__this, ___callback, method) (( void (*) (InvokableCall_1_t2937 *, UnityAction_1_t2678 *, const MethodInfo*))InvokableCall_1__ctor_m13110_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.String>::Invoke(System.Object[])
#define InvokableCall_1_Invoke_m18332(__this, ___args, method) (( void (*) (InvokableCall_1_t2937 *, ObjectU5BU5D_t73*, const MethodInfo*))InvokableCall_1_Invoke_m13111_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.String>::Find(System.Object,System.Reflection.MethodInfo)
#define InvokableCall_1_Find_m18333(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2937 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m13112_gshared)(__this, ___targetObj, ___method, method)
