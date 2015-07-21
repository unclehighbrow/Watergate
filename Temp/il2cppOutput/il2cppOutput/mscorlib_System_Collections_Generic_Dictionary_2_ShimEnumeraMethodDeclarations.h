#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t2578;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2565;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13431_gshared (ShimEnumerator_t2578 * __this, Dictionary_2_t2565 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m13431(__this, ___host, method) (( void (*) (ShimEnumerator_t2578 *, Dictionary_2_t2565 *, const MethodInfo*))ShimEnumerator__ctor_m13431_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13432_gshared (ShimEnumerator_t2578 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m13432(__this, method) (( bool (*) (ShimEnumerator_t2578 *, const MethodInfo*))ShimEnumerator_MoveNext_m13432_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1159  ShimEnumerator_get_Entry_m13433_gshared (ShimEnumerator_t2578 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m13433(__this, method) (( DictionaryEntry_t1159  (*) (ShimEnumerator_t2578 *, const MethodInfo*))ShimEnumerator_get_Entry_m13433_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13434_gshared (ShimEnumerator_t2578 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m13434(__this, method) (( Object_t * (*) (ShimEnumerator_t2578 *, const MethodInfo*))ShimEnumerator_get_Key_m13434_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13435_gshared (ShimEnumerator_t2578 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m13435(__this, method) (( Object_t * (*) (ShimEnumerator_t2578 *, const MethodInfo*))ShimEnumerator_get_Value_m13435_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m13436_gshared (ShimEnumerator_t2578 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m13436(__this, method) (( Object_t * (*) (ShimEnumerator_t2578 *, const MethodInfo*))ShimEnumerator_get_Current_m13436_gshared)(__this, method)
