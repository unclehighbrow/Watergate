#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
struct InternalEnumerator_1_t2842;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m17174_gshared (InternalEnumerator_1_t2842 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m17174(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2842 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m17174_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17175_gshared (InternalEnumerator_1_t2842 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17175(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2842 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17175_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17176_gshared (InternalEnumerator_1_t2842 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m17176(__this, method) (( void (*) (InternalEnumerator_1_t2842 *, const MethodInfo*))InternalEnumerator_1_Dispose_m17176_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m17177_gshared (InternalEnumerator_1_t2842 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m17177(__this, method) (( bool (*) (InternalEnumerator_1_t2842 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m17177_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2841  InternalEnumerator_1_get_Current_m17178_gshared (InternalEnumerator_1_t2842 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m17178(__this, method) (( KeyValuePair_2_t2841  (*) (InternalEnumerator_1_t2842 *, const MethodInfo*))InternalEnumerator_1_get_Current_m17178_gshared)(__this, method)
