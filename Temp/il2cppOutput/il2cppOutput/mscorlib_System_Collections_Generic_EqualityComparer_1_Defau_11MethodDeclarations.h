#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t3043;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m19241_gshared (DefaultComparer_t3043 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m19241(__this, method) (( void (*) (DefaultComparer_t3043 *, const MethodInfo*))DefaultComparer__ctor_m19241_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m19242_gshared (DefaultComparer_t3043 * __this, DateTime_t73  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m19242(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3043 *, DateTime_t73 , const MethodInfo*))DefaultComparer_GetHashCode_m19242_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m19243_gshared (DefaultComparer_t3043 * __this, DateTime_t73  ___x, DateTime_t73  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m19243(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3043 *, DateTime_t73 , DateTime_t73 , const MethodInfo*))DefaultComparer_Equals_m19243_gshared)(__this, ___x, ___y, method)
