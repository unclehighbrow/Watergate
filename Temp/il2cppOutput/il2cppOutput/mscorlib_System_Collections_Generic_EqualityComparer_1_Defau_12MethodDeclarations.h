#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t3048;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m19266_gshared (DefaultComparer_t3048 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m19266(__this, method) (( void (*) (DefaultComparer_t3048 *, const MethodInfo*))DefaultComparer__ctor_m19266_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m19267_gshared (DefaultComparer_t3048 * __this, DateTimeOffset_t775  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m19267(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3048 *, DateTimeOffset_t775 , const MethodInfo*))DefaultComparer_GetHashCode_m19267_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m19268_gshared (DefaultComparer_t3048 * __this, DateTimeOffset_t775  ___x, DateTimeOffset_t775  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m19268(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3048 *, DateTimeOffset_t775 , DateTimeOffset_t775 , const MethodInfo*))DefaultComparer_Equals_m19268_gshared)(__this, ___x, ___y, method)
