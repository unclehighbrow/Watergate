#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t3041;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m19232_gshared (DefaultComparer_t3041 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m19232(__this, method) (( void (*) (DefaultComparer_t3041 *, const MethodInfo*))DefaultComparer__ctor_m19232_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m19233_gshared (DefaultComparer_t3041 * __this, DateTime_t73  ___x, DateTime_t73  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m19233(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t3041 *, DateTime_t73 , DateTime_t73 , const MethodInfo*))DefaultComparer_Compare_m19233_gshared)(__this, ___x, ___y, method)
