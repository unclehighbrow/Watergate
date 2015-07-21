#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t2988;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1095;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m18912_gshared (ShimEnumerator_t2988 * __this, Dictionary_2_t1095 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m18912(__this, ___host, method) (( void (*) (ShimEnumerator_t2988 *, Dictionary_2_t1095 *, const MethodInfo*))ShimEnumerator__ctor_m18912_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18913_gshared (ShimEnumerator_t2988 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m18913(__this, method) (( bool (*) (ShimEnumerator_t2988 *, const MethodInfo*))ShimEnumerator_MoveNext_m18913_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1159  ShimEnumerator_get_Entry_m18914_gshared (ShimEnumerator_t2988 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m18914(__this, method) (( DictionaryEntry_t1159  (*) (ShimEnumerator_t2988 *, const MethodInfo*))ShimEnumerator_get_Entry_m18914_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18915_gshared (ShimEnumerator_t2988 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m18915(__this, method) (( Object_t * (*) (ShimEnumerator_t2988 *, const MethodInfo*))ShimEnumerator_get_Key_m18915_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18916_gshared (ShimEnumerator_t2988 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m18916(__this, method) (( Object_t * (*) (ShimEnumerator_t2988 *, const MethodInfo*))ShimEnumerator_get_Value_m18916_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m18917_gshared (ShimEnumerator_t2988 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m18917(__this, method) (( Object_t * (*) (ShimEnumerator_t2988 *, const MethodInfo*))ShimEnumerator_get_Current_m18917_gshared)(__this, method)
