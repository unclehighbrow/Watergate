#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t2630;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2620;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m14091_gshared (ShimEnumerator_t2630 * __this, Dictionary_2_t2620 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m14091(__this, ___host, method) (( void (*) (ShimEnumerator_t2630 *, Dictionary_2_t2620 *, const MethodInfo*))ShimEnumerator__ctor_m14091_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m14092_gshared (ShimEnumerator_t2630 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m14092(__this, method) (( bool (*) (ShimEnumerator_t2630 *, const MethodInfo*))ShimEnumerator_MoveNext_m14092_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1159  ShimEnumerator_get_Entry_m14093_gshared (ShimEnumerator_t2630 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m14093(__this, method) (( DictionaryEntry_t1159  (*) (ShimEnumerator_t2630 *, const MethodInfo*))ShimEnumerator_get_Entry_m14093_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m14094_gshared (ShimEnumerator_t2630 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m14094(__this, method) (( Object_t * (*) (ShimEnumerator_t2630 *, const MethodInfo*))ShimEnumerator_get_Key_m14094_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m14095_gshared (ShimEnumerator_t2630 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m14095(__this, method) (( Object_t * (*) (ShimEnumerator_t2630 *, const MethodInfo*))ShimEnumerator_get_Value_m14095_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m14096_gshared (ShimEnumerator_t2630 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m14096(__this, method) (( Object_t * (*) (ShimEnumerator_t2630 *, const MethodInfo*))ShimEnumerator_get_Current_m14096_gshared)(__this, method)
