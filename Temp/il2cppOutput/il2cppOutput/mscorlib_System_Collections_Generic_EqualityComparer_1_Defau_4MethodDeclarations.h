#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t2644;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m14355_gshared (DefaultComparer_t2644 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m14355(__this, method) (( void (*) (DefaultComparer_t2644 *, const MethodInfo*))DefaultComparer__ctor_m14355_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m14356_gshared (DefaultComparer_t2644 * __this, UIVertex_t233  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m14356(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2644 *, UIVertex_t233 , const MethodInfo*))DefaultComparer_GetHashCode_m14356_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m14357_gshared (DefaultComparer_t2644 * __this, UIVertex_t233  ___x, UIVertex_t233  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m14357(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2644 *, UIVertex_t233 , UIVertex_t233 , const MethodInfo*))DefaultComparer_Equals_m14357_gshared)(__this, ___x, ___y, method)
