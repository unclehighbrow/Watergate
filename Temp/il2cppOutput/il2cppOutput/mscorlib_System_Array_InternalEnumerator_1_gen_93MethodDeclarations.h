#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Decimal>
struct InternalEnumerator_1_t3031;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.Array/InternalEnumerator`1<System.Decimal>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m19114_gshared (InternalEnumerator_1_t3031 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m19114(__this, ___array, method) (( void (*) (InternalEnumerator_1_t3031 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m19114_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Decimal>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19115_gshared (InternalEnumerator_1_t3031 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19115(__this, method) (( Object_t * (*) (InternalEnumerator_1_t3031 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19115_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Decimal>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m19116_gshared (InternalEnumerator_1_t3031 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m19116(__this, method) (( void (*) (InternalEnumerator_1_t3031 *, const MethodInfo*))InternalEnumerator_1_Dispose_m19116_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Decimal>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m19117_gshared (InternalEnumerator_1_t3031 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m19117(__this, method) (( bool (*) (InternalEnumerator_1_t3031 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m19117_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Decimal>::get_Current()
extern "C" Decimal_t761  InternalEnumerator_1_get_Current_m19118_gshared (InternalEnumerator_1_t3031 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m19118(__this, method) (( Decimal_t761  (*) (InternalEnumerator_1_t3031 *, const MethodInfo*))InternalEnumerator_1_get_Current_m19118_gshared)(__this, method)
