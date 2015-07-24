#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct InternalEnumerator_1_t2805;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m16746_gshared (InternalEnumerator_1_t2805 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m16746(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2805 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m16746_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16747_gshared (InternalEnumerator_1_t2805 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16747(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2805 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16747_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m16748_gshared (InternalEnumerator_1_t2805 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m16748(__this, method) (( void (*) (InternalEnumerator_1_t2805 *, const MethodInfo*))InternalEnumerator_1_Dispose_m16748_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m16749_gshared (InternalEnumerator_1_t2805 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m16749(__this, method) (( bool (*) (InternalEnumerator_1_t2805 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m16749_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Current()
extern "C" KeyValuePair_2_t2804  InternalEnumerator_1_get_Current_m16750_gshared (InternalEnumerator_1_t2805 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m16750(__this, method) (( KeyValuePair_2_t2804  (*) (InternalEnumerator_1_t2805 *, const MethodInfo*))InternalEnumerator_1_get_Current_m16750_gshared)(__this, method)
