#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t2579;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2566;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13439_gshared (ShimEnumerator_t2579 * __this, Dictionary_2_t2566 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m13439(__this, ___host, method) (( void (*) (ShimEnumerator_t2579 *, Dictionary_2_t2566 *, const MethodInfo*))ShimEnumerator__ctor_m13439_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13440_gshared (ShimEnumerator_t2579 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m13440(__this, method) (( bool (*) (ShimEnumerator_t2579 *, const MethodInfo*))ShimEnumerator_MoveNext_m13440_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1160  ShimEnumerator_get_Entry_m13441_gshared (ShimEnumerator_t2579 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m13441(__this, method) (( DictionaryEntry_t1160  (*) (ShimEnumerator_t2579 *, const MethodInfo*))ShimEnumerator_get_Entry_m13441_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13442_gshared (ShimEnumerator_t2579 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m13442(__this, method) (( Object_t * (*) (ShimEnumerator_t2579 *, const MethodInfo*))ShimEnumerator_get_Key_m13442_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13443_gshared (ShimEnumerator_t2579 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m13443(__this, method) (( Object_t * (*) (ShimEnumerator_t2579 *, const MethodInfo*))ShimEnumerator_get_Value_m13443_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m13444_gshared (ShimEnumerator_t2579 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m13444(__this, method) (( Object_t * (*) (ShimEnumerator_t2579 *, const MethodInfo*))ShimEnumerator_get_Current_m13444_gshared)(__this, method)
