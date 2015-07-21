#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t2605;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2592;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13763_gshared (ShimEnumerator_t2605 * __this, Dictionary_2_t2592 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m13763(__this, ___host, method) (( void (*) (ShimEnumerator_t2605 *, Dictionary_2_t2592 *, const MethodInfo*))ShimEnumerator__ctor_m13763_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13764_gshared (ShimEnumerator_t2605 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m13764(__this, method) (( bool (*) (ShimEnumerator_t2605 *, const MethodInfo*))ShimEnumerator_MoveNext_m13764_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1159  ShimEnumerator_get_Entry_m13765_gshared (ShimEnumerator_t2605 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m13765(__this, method) (( DictionaryEntry_t1159  (*) (ShimEnumerator_t2605 *, const MethodInfo*))ShimEnumerator_get_Entry_m13765_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13766_gshared (ShimEnumerator_t2605 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m13766(__this, method) (( Object_t * (*) (ShimEnumerator_t2605 *, const MethodInfo*))ShimEnumerator_get_Key_m13766_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13767_gshared (ShimEnumerator_t2605 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m13767(__this, method) (( Object_t * (*) (ShimEnumerator_t2605 *, const MethodInfo*))ShimEnumerator_get_Value_m13767_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m13768_gshared (ShimEnumerator_t2605 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m13768(__this, method) (( Object_t * (*) (ShimEnumerator_t2605 *, const MethodInfo*))ShimEnumerator_get_Current_m13768_gshared)(__this, method)
