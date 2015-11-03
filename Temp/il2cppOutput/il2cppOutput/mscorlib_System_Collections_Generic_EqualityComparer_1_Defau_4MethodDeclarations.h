#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t2013;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m13812_gshared (DefaultComparer_t2013 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m13812(__this, method) (( void (*) (DefaultComparer_t2013 *, const MethodInfo*))DefaultComparer__ctor_m13812_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m13813_gshared (DefaultComparer_t2013 * __this, UIVertex_t245  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m13813(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2013 *, UIVertex_t245 , const MethodInfo*))DefaultComparer_GetHashCode_m13813_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m13814_gshared (DefaultComparer_t2013 * __this, UIVertex_t245  ___x, UIVertex_t245  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m13814(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2013 *, UIVertex_t245 , UIVertex_t245 , const MethodInfo*))DefaultComparer_Equals_m13814_gshared)(__this, ___x, ___y, method)
