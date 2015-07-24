#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t2631;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2621;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m14099_gshared (ShimEnumerator_t2631 * __this, Dictionary_2_t2621 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m14099(__this, ___host, method) (( void (*) (ShimEnumerator_t2631 *, Dictionary_2_t2621 *, const MethodInfo*))ShimEnumerator__ctor_m14099_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m14100_gshared (ShimEnumerator_t2631 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m14100(__this, method) (( bool (*) (ShimEnumerator_t2631 *, const MethodInfo*))ShimEnumerator_MoveNext_m14100_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1160  ShimEnumerator_get_Entry_m14101_gshared (ShimEnumerator_t2631 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m14101(__this, method) (( DictionaryEntry_t1160  (*) (ShimEnumerator_t2631 *, const MethodInfo*))ShimEnumerator_get_Entry_m14101_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m14102_gshared (ShimEnumerator_t2631 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m14102(__this, method) (( Object_t * (*) (ShimEnumerator_t2631 *, const MethodInfo*))ShimEnumerator_get_Key_m14102_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m14103_gshared (ShimEnumerator_t2631 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m14103(__this, method) (( Object_t * (*) (ShimEnumerator_t2631 *, const MethodInfo*))ShimEnumerator_get_Value_m14103_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m14104_gshared (ShimEnumerator_t2631 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m14104(__this, method) (( Object_t * (*) (ShimEnumerator_t2631 *, const MethodInfo*))ShimEnumerator_get_Current_m14104_gshared)(__this, method)
