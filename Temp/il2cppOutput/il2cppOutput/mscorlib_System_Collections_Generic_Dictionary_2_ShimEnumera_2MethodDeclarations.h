#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t2814;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2802;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m16820_gshared (ShimEnumerator_t2814 * __this, Dictionary_2_t2802 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m16820(__this, ___host, method) (( void (*) (ShimEnumerator_t2814 *, Dictionary_2_t2802 *, const MethodInfo*))ShimEnumerator__ctor_m16820_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m16821_gshared (ShimEnumerator_t2814 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m16821(__this, method) (( bool (*) (ShimEnumerator_t2814 *, const MethodInfo*))ShimEnumerator_MoveNext_m16821_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t1159  ShimEnumerator_get_Entry_m16822_gshared (ShimEnumerator_t2814 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m16822(__this, method) (( DictionaryEntry_t1159  (*) (ShimEnumerator_t2814 *, const MethodInfo*))ShimEnumerator_get_Entry_m16822_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m16823_gshared (ShimEnumerator_t2814 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m16823(__this, method) (( Object_t * (*) (ShimEnumerator_t2814 *, const MethodInfo*))ShimEnumerator_get_Key_m16823_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m16824_gshared (ShimEnumerator_t2814 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m16824(__this, method) (( Object_t * (*) (ShimEnumerator_t2814 *, const MethodInfo*))ShimEnumerator_get_Value_m16824_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m16825_gshared (ShimEnumerator_t2814 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m16825(__this, method) (( Object_t * (*) (ShimEnumerator_t2814 *, const MethodInfo*))ShimEnumerator_get_Current_m16825_gshared)(__this, method)
