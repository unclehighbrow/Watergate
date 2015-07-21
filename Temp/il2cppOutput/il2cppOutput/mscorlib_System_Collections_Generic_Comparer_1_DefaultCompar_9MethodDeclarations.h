#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t3049;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m19270_gshared (DefaultComparer_t3049 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m19270(__this, method) (( void (*) (DefaultComparer_t3049 *, const MethodInfo*))DefaultComparer__ctor_m19270_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m19271_gshared (DefaultComparer_t3049 * __this, Guid_t775  ___x, Guid_t775  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m19271(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t3049 *, Guid_t775 , Guid_t775 , const MethodInfo*))DefaultComparer_Compare_m19271_gshared)(__this, ___x, ___y, method)
