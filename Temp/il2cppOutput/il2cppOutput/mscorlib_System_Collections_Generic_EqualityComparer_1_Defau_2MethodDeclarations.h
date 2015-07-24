#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t2537;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m12900_gshared (DefaultComparer_t2537 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12900(__this, method) (( void (*) (DefaultComparer_t2537 *, const MethodInfo*))DefaultComparer__ctor_m12900_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12901_gshared (DefaultComparer_t2537 * __this, RaycastResult_t155  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12901(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2537 *, RaycastResult_t155 , const MethodInfo*))DefaultComparer_GetHashCode_m12901_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12902_gshared (DefaultComparer_t2537 * __this, RaycastResult_t155  ___x, RaycastResult_t155  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12902(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2537 *, RaycastResult_t155 , RaycastResult_t155 , const MethodInfo*))DefaultComparer_Equals_m12902_gshared)(__this, ___x, ___y, method)
