#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>
struct DefaultComparer_t2485;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::.ctor()
extern "C" void DefaultComparer__ctor_m12252_gshared (DefaultComparer_t2485 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12252(__this, method) (( void (*) (DefaultComparer_t2485 *, const MethodInfo*))DefaultComparer__ctor_m12252_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12253_gshared (DefaultComparer_t2485 * __this, Vector2_t38  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12253(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2485 *, Vector2_t38 , const MethodInfo*))DefaultComparer_GetHashCode_m12253_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12254_gshared (DefaultComparer_t2485 * __this, Vector2_t38  ___x, Vector2_t38  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12254(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2485 *, Vector2_t38 , Vector2_t38 , const MethodInfo*))DefaultComparer_Equals_m12254_gshared)(__this, ___x, ___y, method)
