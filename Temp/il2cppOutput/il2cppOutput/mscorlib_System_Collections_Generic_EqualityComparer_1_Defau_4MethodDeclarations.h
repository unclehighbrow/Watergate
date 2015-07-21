#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t2643;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m14347_gshared (DefaultComparer_t2643 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m14347(__this, method) (( void (*) (DefaultComparer_t2643 *, const MethodInfo*))DefaultComparer__ctor_m14347_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m14348_gshared (DefaultComparer_t2643 * __this, UIVertex_t232  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m14348(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2643 *, UIVertex_t232 , const MethodInfo*))DefaultComparer_GetHashCode_m14348_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m14349_gshared (DefaultComparer_t2643 * __this, UIVertex_t232  ___x, UIVertex_t232  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m14349(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2643 *, UIVertex_t232 , UIVertex_t232 , const MethodInfo*))DefaultComparer_Equals_m14349_gshared)(__this, ___x, ___y, method)
