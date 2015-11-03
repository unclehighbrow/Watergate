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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>
struct DefaultComparer_t2116;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::.ctor()
extern "C" void DefaultComparer__ctor_m15371_gshared (DefaultComparer_t2116 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m15371(__this, method) (( void (*) (DefaultComparer_t2116 *, const MethodInfo*))DefaultComparer__ctor_m15371_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m15372_gshared (DefaultComparer_t2116 * __this, Color32_t352  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m15372(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2116 *, Color32_t352 , const MethodInfo*))DefaultComparer_GetHashCode_m15372_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m15373_gshared (DefaultComparer_t2116 * __this, Color32_t352  ___x, Color32_t352  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m15373(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2116 *, Color32_t352 , Color32_t352 , const MethodInfo*))DefaultComparer_Equals_m15373_gshared)(__this, ___x, ___y, method)
