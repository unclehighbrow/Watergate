#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t2967;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t2956;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m18710_gshared (ShimEnumerator_t2967 * __this, Dictionary_2_t2956 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m18710(__this, ___host, method) (( void (*) (ShimEnumerator_t2967 *, Dictionary_2_t2956 *, const MethodInfo*))ShimEnumerator__ctor_m18710_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18711_gshared (ShimEnumerator_t2967 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m18711(__this, method) (( bool (*) (ShimEnumerator_t2967 *, const MethodInfo*))ShimEnumerator_MoveNext_m18711_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t1160  ShimEnumerator_get_Entry_m18712_gshared (ShimEnumerator_t2967 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m18712(__this, method) (( DictionaryEntry_t1160  (*) (ShimEnumerator_t2967 *, const MethodInfo*))ShimEnumerator_get_Entry_m18712_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18713_gshared (ShimEnumerator_t2967 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m18713(__this, method) (( Object_t * (*) (ShimEnumerator_t2967 *, const MethodInfo*))ShimEnumerator_get_Key_m18713_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18714_gshared (ShimEnumerator_t2967 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m18714(__this, method) (( Object_t * (*) (ShimEnumerator_t2967 *, const MethodInfo*))ShimEnumerator_get_Value_m18714_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m18715_gshared (ShimEnumerator_t2967 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m18715(__this, method) (( Object_t * (*) (ShimEnumerator_t2967 *, const MethodInfo*))ShimEnumerator_get_Current_m18715_gshared)(__this, method)
