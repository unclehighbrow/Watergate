#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.DateTime>
struct InternalEnumerator_1_t3031;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Array/InternalEnumerator`1<System.DateTime>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m19117_gshared (InternalEnumerator_1_t3031 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m19117(__this, ___array, method) (( void (*) (InternalEnumerator_1_t3031 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m19117_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19118_gshared (InternalEnumerator_1_t3031 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19118(__this, method) (( Object_t * (*) (InternalEnumerator_1_t3031 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19118_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m19119_gshared (InternalEnumerator_1_t3031 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m19119(__this, method) (( void (*) (InternalEnumerator_1_t3031 *, const MethodInfo*))InternalEnumerator_1_Dispose_m19119_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.DateTime>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m19120_gshared (InternalEnumerator_1_t3031 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m19120(__this, method) (( bool (*) (InternalEnumerator_1_t3031 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m19120_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.DateTime>::get_Current()
extern "C" DateTime_t77  InternalEnumerator_1_get_Current_m19121_gshared (InternalEnumerator_1_t3031 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m19121(__this, method) (( DateTime_t77  (*) (InternalEnumerator_1_t3031 *, const MethodInfo*))InternalEnumerator_1_get_Current_m19121_gshared)(__this, method)
