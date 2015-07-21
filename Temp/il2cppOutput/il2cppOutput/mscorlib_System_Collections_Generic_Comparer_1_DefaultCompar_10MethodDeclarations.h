#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t3053;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m19287_gshared (DefaultComparer_t3053 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m19287(__this, method) (( void (*) (DefaultComparer_t3053 *, const MethodInfo*))DefaultComparer__ctor_m19287_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m19288_gshared (DefaultComparer_t3053 * __this, TimeSpan_t1063  ___x, TimeSpan_t1063  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m19288(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t3053 *, TimeSpan_t1063 , TimeSpan_t1063 , const MethodInfo*))DefaultComparer_Compare_m19288_gshared)(__this, ___x, ___y, method)
