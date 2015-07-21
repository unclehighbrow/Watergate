#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>
struct DefaultComparer_t2484;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::.ctor()
extern "C" void DefaultComparer__ctor_m12244_gshared (DefaultComparer_t2484 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12244(__this, method) (( void (*) (DefaultComparer_t2484 *, const MethodInfo*))DefaultComparer__ctor_m12244_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12245_gshared (DefaultComparer_t2484 * __this, Vector2_t35  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12245(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2484 *, Vector2_t35 , const MethodInfo*))DefaultComparer_GetHashCode_m12245_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12246_gshared (DefaultComparer_t2484 * __this, Vector2_t35  ___x, Vector2_t35  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12246(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2484 *, Vector2_t35 , Vector2_t35 , const MethodInfo*))DefaultComparer_Equals_m12246_gshared)(__this, ___x, ___y, method)
