#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t3056;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m19304_gshared (DefaultComparer_t3056 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m19304(__this, method) (( void (*) (DefaultComparer_t3056 *, const MethodInfo*))DefaultComparer__ctor_m19304_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m19305_gshared (DefaultComparer_t3056 * __this, TimeSpan_t1064  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m19305(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3056 *, TimeSpan_t1064 , const MethodInfo*))DefaultComparer_GetHashCode_m19305_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m19306_gshared (DefaultComparer_t3056 * __this, TimeSpan_t1064  ___x, TimeSpan_t1064  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m19306(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3056 *, TimeSpan_t1064 , TimeSpan_t1064 , const MethodInfo*))DefaultComparer_Equals_m19306_gshared)(__this, ___x, ___y, method)
