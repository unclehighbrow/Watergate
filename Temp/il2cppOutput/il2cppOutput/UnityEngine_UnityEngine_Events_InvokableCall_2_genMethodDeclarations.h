﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
struct InvokableCall_2_t2219;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t74;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_2__ctor_m16524_gshared (InvokableCall_2_t2219 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_2__ctor_m16524(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_2_t2219 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_2__ctor_m16524_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_2_Invoke_m16525_gshared (InvokableCall_2_t2219 * __this, ObjectU5BU5D_t74* ___args, const MethodInfo* method);
#define InvokableCall_2_Invoke_m16525(__this, ___args, method) (( void (*) (InvokableCall_2_t2219 *, ObjectU5BU5D_t74*, const MethodInfo*))InvokableCall_2_Invoke_m16525_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_2_Find_m16526_gshared (InvokableCall_2_t2219 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_2_Find_m16526(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_2_t2219 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_2_Find_m16526_gshared)(__this, ___targetObj, ___method, method)
