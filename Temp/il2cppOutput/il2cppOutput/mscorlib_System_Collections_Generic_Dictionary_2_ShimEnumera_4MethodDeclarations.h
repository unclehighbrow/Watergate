#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ShimEnumerator_t2897;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t2888;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m17974_gshared (ShimEnumerator_t2897 * __this, Dictionary_2_t2888 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m17974(__this, ___host, method) (( void (*) (ShimEnumerator_t2897 *, Dictionary_2_t2888 *, const MethodInfo*))ShimEnumerator__ctor_m17974_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m17975_gshared (ShimEnumerator_t2897 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m17975(__this, method) (( bool (*) (ShimEnumerator_t2897 *, const MethodInfo*))ShimEnumerator_MoveNext_m17975_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern "C" DictionaryEntry_t1159  ShimEnumerator_get_Entry_m17976_gshared (ShimEnumerator_t2897 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m17976(__this, method) (( DictionaryEntry_t1159  (*) (ShimEnumerator_t2897 *, const MethodInfo*))ShimEnumerator_get_Entry_m17976_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m17977_gshared (ShimEnumerator_t2897 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m17977(__this, method) (( Object_t * (*) (ShimEnumerator_t2897 *, const MethodInfo*))ShimEnumerator_get_Key_m17977_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m17978_gshared (ShimEnumerator_t2897 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m17978(__this, method) (( Object_t * (*) (ShimEnumerator_t2897 *, const MethodInfo*))ShimEnumerator_get_Value_m17978_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m17979_gshared (ShimEnumerator_t2897 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m17979(__this, method) (( Object_t * (*) (ShimEnumerator_t2897 *, const MethodInfo*))ShimEnumerator_get_Current_m17979_gshared)(__this, method)
