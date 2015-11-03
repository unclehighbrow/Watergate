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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Single>
struct DefaultComparer_t1815;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Single>::.ctor()
extern "C" void DefaultComparer__ctor_m11270_gshared (DefaultComparer_t1815 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m11270(__this, method) (( void (*) (DefaultComparer_t1815 *, const MethodInfo*))DefaultComparer__ctor_m11270_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Single>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m11271_gshared (DefaultComparer_t1815 * __this, float ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m11271(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1815 *, float, const MethodInfo*))DefaultComparer_GetHashCode_m11271_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Single>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m11272_gshared (DefaultComparer_t1815 * __this, float ___x, float ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m11272(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1815 *, float, float, const MethodInfo*))DefaultComparer_Equals_m11272_gshared)(__this, ___x, ___y, method)
