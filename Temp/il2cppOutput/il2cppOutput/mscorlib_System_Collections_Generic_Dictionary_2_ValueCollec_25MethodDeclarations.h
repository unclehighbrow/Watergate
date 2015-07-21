#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t2894;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t2888;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m17957_gshared (Enumerator_t2894 * __this, Dictionary_2_t2888 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m17957(__this, ___host, method) (( void (*) (Enumerator_t2894 *, Dictionary_2_t2888 *, const MethodInfo*))Enumerator__ctor_m17957_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m17958_gshared (Enumerator_t2894 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m17958(__this, method) (( Object_t * (*) (Enumerator_t2894 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m17958_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m17959_gshared (Enumerator_t2894 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m17959(__this, method) (( void (*) (Enumerator_t2894 *, const MethodInfo*))Enumerator_Dispose_m17959_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m17960_gshared (Enumerator_t2894 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m17960(__this, method) (( bool (*) (Enumerator_t2894 *, const MethodInfo*))Enumerator_MoveNext_m17960_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2621  Enumerator_get_Current_m17961_gshared (Enumerator_t2894 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m17961(__this, method) (( KeyValuePair_2_t2621  (*) (Enumerator_t2894 *, const MethodInfo*))Enumerator_get_Current_m17961_gshared)(__this, method)
