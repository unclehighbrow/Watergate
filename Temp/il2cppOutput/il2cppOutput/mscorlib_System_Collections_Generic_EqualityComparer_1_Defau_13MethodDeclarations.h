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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t2359;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m17865_gshared (DefaultComparer_t2359 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m17865(__this, method) (( void (*) (DefaultComparer_t2359 *, const MethodInfo*))DefaultComparer__ctor_m17865_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m17866_gshared (DefaultComparer_t2359 * __this, DateTime_t78  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m17866(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2359 *, DateTime_t78 , const MethodInfo*))DefaultComparer_GetHashCode_m17866_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m17867_gshared (DefaultComparer_t2359 * __this, DateTime_t78  ___x, DateTime_t78  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m17867(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2359 *, DateTime_t78 , DateTime_t78 , const MethodInfo*))DefaultComparer_Equals_m17867_gshared)(__this, ___x, ___y, method)
