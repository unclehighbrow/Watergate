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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>
struct DefaultComparer_t1827;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::.ctor()
extern "C" void DefaultComparer__ctor_m11424_gshared (DefaultComparer_t1827 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m11424(__this, method) (( void (*) (DefaultComparer_t1827 *, const MethodInfo*))DefaultComparer__ctor_m11424_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m11425_gshared (DefaultComparer_t1827 * __this, Vector2_t40  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m11425(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1827 *, Vector2_t40 , const MethodInfo*))DefaultComparer_GetHashCode_m11425_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m11426_gshared (DefaultComparer_t1827 * __this, Vector2_t40  ___x, Vector2_t40  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m11426(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1827 *, Vector2_t40 , Vector2_t40 , const MethodInfo*))DefaultComparer_Equals_m11426_gshared)(__this, ___x, ___y, method)
