#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t3054;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m19295_gshared (DefaultComparer_t3054 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m19295(__this, method) (( void (*) (DefaultComparer_t3054 *, const MethodInfo*))DefaultComparer__ctor_m19295_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m19296_gshared (DefaultComparer_t3054 * __this, TimeSpan_t1064  ___x, TimeSpan_t1064  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m19296(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t3054 *, TimeSpan_t1064 , TimeSpan_t1064 , const MethodInfo*))DefaultComparer_Compare_m19296_gshared)(__this, ___x, ___y, method)
