#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1<System.TimeSpan>
struct Comparer_1_t3053;
// System.Object
struct Object_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.Comparer`1<System.TimeSpan>::.ctor()
extern "C" void Comparer_1__ctor_m19291_gshared (Comparer_1_t3053 * __this, const MethodInfo* method);
#define Comparer_1__ctor_m19291(__this, method) (( void (*) (Comparer_1_t3053 *, const MethodInfo*))Comparer_1__ctor_m19291_gshared)(__this, method)
// System.Void System.Collections.Generic.Comparer`1<System.TimeSpan>::.cctor()
extern "C" void Comparer_1__cctor_m19292_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Comparer_1__cctor_m19292(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))Comparer_1__cctor_m19292_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.Comparer`1<System.TimeSpan>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m19293_gshared (Comparer_1_t3053 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
#define Comparer_1_System_Collections_IComparer_Compare_m19293(__this, ___x, ___y, method) (( int32_t (*) (Comparer_1_t3053 *, Object_t *, Object_t *, const MethodInfo*))Comparer_1_System_Collections_IComparer_Compare_m19293_gshared)(__this, ___x, ___y, method)
// System.Int32 System.Collections.Generic.Comparer`1<System.TimeSpan>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.TimeSpan>::get_Default()
extern "C" Comparer_1_t3053 * Comparer_1_get_Default_m19294_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Comparer_1_get_Default_m19294(__this /* static, unused */, method) (( Comparer_1_t3053 * (*) (Object_t * /* static, unused */, const MethodInfo*))Comparer_1_get_Default_m19294_gshared)(__this /* static, unused */, method)
