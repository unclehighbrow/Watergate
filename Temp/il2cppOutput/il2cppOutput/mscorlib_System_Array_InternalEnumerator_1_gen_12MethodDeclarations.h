#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Object>>
struct InternalEnumerator_1_t2502;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.HashSet`1/Link<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_Link_gen.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12401_gshared (InternalEnumerator_1_t2502 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12401(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2502 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12401_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12402_gshared (InternalEnumerator_1_t2502 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12402(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2502 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12402_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12403_gshared (InternalEnumerator_1_t2502 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12403(__this, method) (( void (*) (InternalEnumerator_1_t2502 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12403_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12404_gshared (InternalEnumerator_1_t2502 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12404(__this, method) (( bool (*) (InternalEnumerator_1_t2502 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12404_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::get_Current()
extern "C" Link_t2499  InternalEnumerator_1_get_Current_m12405_gshared (InternalEnumerator_1_t2502 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12405(__this, method) (( Link_t2499  (*) (InternalEnumerator_1_t2502 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12405_gshared)(__this, method)
