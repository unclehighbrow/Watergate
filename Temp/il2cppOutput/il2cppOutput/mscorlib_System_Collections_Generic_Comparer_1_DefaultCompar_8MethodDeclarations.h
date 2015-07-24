#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t3046;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m19257_gshared (DefaultComparer_t3046 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m19257(__this, method) (( void (*) (DefaultComparer_t3046 *, const MethodInfo*))DefaultComparer__ctor_m19257_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m19258_gshared (DefaultComparer_t3046 * __this, DateTimeOffset_t775  ___x, DateTimeOffset_t775  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m19258(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t3046 *, DateTimeOffset_t775 , DateTimeOffset_t775 , const MethodInfo*))DefaultComparer_Compare_m19258_gshared)(__this, ___x, ___y, method)
