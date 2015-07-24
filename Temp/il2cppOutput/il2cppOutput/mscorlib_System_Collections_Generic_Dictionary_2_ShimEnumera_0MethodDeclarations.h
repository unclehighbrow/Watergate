#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t2606;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2593;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13771_gshared (ShimEnumerator_t2606 * __this, Dictionary_2_t2593 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m13771(__this, ___host, method) (( void (*) (ShimEnumerator_t2606 *, Dictionary_2_t2593 *, const MethodInfo*))ShimEnumerator__ctor_m13771_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13772_gshared (ShimEnumerator_t2606 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m13772(__this, method) (( bool (*) (ShimEnumerator_t2606 *, const MethodInfo*))ShimEnumerator_MoveNext_m13772_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1160  ShimEnumerator_get_Entry_m13773_gshared (ShimEnumerator_t2606 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m13773(__this, method) (( DictionaryEntry_t1160  (*) (ShimEnumerator_t2606 *, const MethodInfo*))ShimEnumerator_get_Entry_m13773_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13774_gshared (ShimEnumerator_t2606 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m13774(__this, method) (( Object_t * (*) (ShimEnumerator_t2606 *, const MethodInfo*))ShimEnumerator_get_Key_m13774_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13775_gshared (ShimEnumerator_t2606 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m13775(__this, method) (( Object_t * (*) (ShimEnumerator_t2606 *, const MethodInfo*))ShimEnumerator_get_Value_m13775_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m13776_gshared (ShimEnumerator_t2606 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m13776(__this, method) (( Object_t * (*) (ShimEnumerator_t2606 *, const MethodInfo*))ShimEnumerator_get_Current_m13776_gshared)(__this, method)
