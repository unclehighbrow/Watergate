#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct InternalEnumerator_1_t2957;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m18625_gshared (InternalEnumerator_1_t2957 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m18625(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2957 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m18625_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18626_gshared (InternalEnumerator_1_t2957 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18626(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2957 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18626_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m18627_gshared (InternalEnumerator_1_t2957 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m18627(__this, method) (( void (*) (InternalEnumerator_1_t2957 *, const MethodInfo*))InternalEnumerator_1_Dispose_m18627_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m18628_gshared (InternalEnumerator_1_t2957 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m18628(__this, method) (( bool (*) (InternalEnumerator_1_t2957 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m18628_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Current()
extern "C" KeyValuePair_2_t2956  InternalEnumerator_1_get_Current_m18629_gshared (InternalEnumerator_1_t2957 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m18629(__this, method) (( KeyValuePair_2_t2956  (*) (InternalEnumerator_1_t2957 *, const MethodInfo*))InternalEnumerator_1_get_Current_m18629_gshared)(__this, method)
