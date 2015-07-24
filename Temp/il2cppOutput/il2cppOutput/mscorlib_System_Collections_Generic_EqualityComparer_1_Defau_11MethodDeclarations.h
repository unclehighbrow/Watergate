#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t3044;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m19249_gshared (DefaultComparer_t3044 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m19249(__this, method) (( void (*) (DefaultComparer_t3044 *, const MethodInfo*))DefaultComparer__ctor_m19249_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m19250_gshared (DefaultComparer_t3044 * __this, DateTime_t77  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m19250(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3044 *, DateTime_t77 , const MethodInfo*))DefaultComparer_GetHashCode_m19250_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m19251_gshared (DefaultComparer_t3044 * __this, DateTime_t77  ___x, DateTime_t77  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m19251(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3044 *, DateTime_t77 , DateTime_t77 , const MethodInfo*))DefaultComparer_Equals_m19251_gshared)(__this, ___x, ___y, method)
