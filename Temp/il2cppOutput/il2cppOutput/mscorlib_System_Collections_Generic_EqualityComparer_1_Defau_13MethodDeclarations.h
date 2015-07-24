#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t3052;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m19287_gshared (DefaultComparer_t3052 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m19287(__this, method) (( void (*) (DefaultComparer_t3052 *, const MethodInfo*))DefaultComparer__ctor_m19287_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m19288_gshared (DefaultComparer_t3052 * __this, Guid_t776  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m19288(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3052 *, Guid_t776 , const MethodInfo*))DefaultComparer_GetHashCode_m19288_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m19289_gshared (DefaultComparer_t3052 * __this, Guid_t776  ___x, Guid_t776  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m19289(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3052 *, Guid_t776 , Guid_t776 , const MethodInfo*))DefaultComparer_Equals_m19289_gshared)(__this, ___x, ___y, method)
