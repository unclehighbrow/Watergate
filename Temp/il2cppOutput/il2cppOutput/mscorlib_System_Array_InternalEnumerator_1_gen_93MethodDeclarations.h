#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Decimal>
struct InternalEnumerator_1_t3032;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.Array/InternalEnumerator`1<System.Decimal>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m19122_gshared (InternalEnumerator_1_t3032 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m19122(__this, ___array, method) (( void (*) (InternalEnumerator_1_t3032 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m19122_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Decimal>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19123_gshared (InternalEnumerator_1_t3032 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19123(__this, method) (( Object_t * (*) (InternalEnumerator_1_t3032 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19123_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Decimal>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m19124_gshared (InternalEnumerator_1_t3032 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m19124(__this, method) (( void (*) (InternalEnumerator_1_t3032 *, const MethodInfo*))InternalEnumerator_1_Dispose_m19124_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Decimal>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m19125_gshared (InternalEnumerator_1_t3032 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m19125(__this, method) (( bool (*) (InternalEnumerator_1_t3032 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m19125_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Decimal>::get_Current()
extern "C" Decimal_t762  InternalEnumerator_1_get_Current_m19126_gshared (InternalEnumerator_1_t3032 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m19126(__this, method) (( Decimal_t762  (*) (InternalEnumerator_1_t3032 *, const MethodInfo*))InternalEnumerator_1_get_Current_m19126_gshared)(__this, method)
