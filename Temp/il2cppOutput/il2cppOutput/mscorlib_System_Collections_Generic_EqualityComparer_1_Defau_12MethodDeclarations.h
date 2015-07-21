#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t3047;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m19258_gshared (DefaultComparer_t3047 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m19258(__this, method) (( void (*) (DefaultComparer_t3047 *, const MethodInfo*))DefaultComparer__ctor_m19258_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m19259_gshared (DefaultComparer_t3047 * __this, DateTimeOffset_t774  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m19259(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3047 *, DateTimeOffset_t774 , const MethodInfo*))DefaultComparer_GetHashCode_m19259_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m19260_gshared (DefaultComparer_t3047 * __this, DateTimeOffset_t774  ___x, DateTimeOffset_t774  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m19260(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3047 *, DateTimeOffset_t774 , DateTimeOffset_t774 , const MethodInfo*))DefaultComparer_Equals_m19260_gshared)(__this, ___x, ___y, method)
