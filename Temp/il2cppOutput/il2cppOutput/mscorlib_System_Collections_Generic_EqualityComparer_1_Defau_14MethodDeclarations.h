#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t3055;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m19296_gshared (DefaultComparer_t3055 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m19296(__this, method) (( void (*) (DefaultComparer_t3055 *, const MethodInfo*))DefaultComparer__ctor_m19296_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m19297_gshared (DefaultComparer_t3055 * __this, TimeSpan_t1063  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m19297(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3055 *, TimeSpan_t1063 , const MethodInfo*))DefaultComparer_GetHashCode_m19297_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m19298_gshared (DefaultComparer_t3055 * __this, TimeSpan_t1063  ___x, TimeSpan_t1063  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m19298(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3055 *, TimeSpan_t1063 , TimeSpan_t1063 , const MethodInfo*))DefaultComparer_Equals_m19298_gshared)(__this, ___x, ___y, method)
