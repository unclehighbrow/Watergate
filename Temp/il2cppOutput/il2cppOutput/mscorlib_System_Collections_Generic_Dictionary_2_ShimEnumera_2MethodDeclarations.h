#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t2815;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2803;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m16828_gshared (ShimEnumerator_t2815 * __this, Dictionary_2_t2803 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m16828(__this, ___host, method) (( void (*) (ShimEnumerator_t2815 *, Dictionary_2_t2803 *, const MethodInfo*))ShimEnumerator__ctor_m16828_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m16829_gshared (ShimEnumerator_t2815 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m16829(__this, method) (( bool (*) (ShimEnumerator_t2815 *, const MethodInfo*))ShimEnumerator_MoveNext_m16829_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t1160  ShimEnumerator_get_Entry_m16830_gshared (ShimEnumerator_t2815 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m16830(__this, method) (( DictionaryEntry_t1160  (*) (ShimEnumerator_t2815 *, const MethodInfo*))ShimEnumerator_get_Entry_m16830_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m16831_gshared (ShimEnumerator_t2815 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m16831(__this, method) (( Object_t * (*) (ShimEnumerator_t2815 *, const MethodInfo*))ShimEnumerator_get_Key_m16831_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m16832_gshared (ShimEnumerator_t2815 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m16832(__this, method) (( Object_t * (*) (ShimEnumerator_t2815 *, const MethodInfo*))ShimEnumerator_get_Value_m16832_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m16833_gshared (ShimEnumerator_t2815 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m16833(__this, method) (( Object_t * (*) (ShimEnumerator_t2815 *, const MethodInfo*))ShimEnumerator_get_Current_m16833_gshared)(__this, method)
