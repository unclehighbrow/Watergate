#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t2989;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1096;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m18920_gshared (ShimEnumerator_t2989 * __this, Dictionary_2_t1096 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m18920(__this, ___host, method) (( void (*) (ShimEnumerator_t2989 *, Dictionary_2_t1096 *, const MethodInfo*))ShimEnumerator__ctor_m18920_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18921_gshared (ShimEnumerator_t2989 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m18921(__this, method) (( bool (*) (ShimEnumerator_t2989 *, const MethodInfo*))ShimEnumerator_MoveNext_m18921_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1160  ShimEnumerator_get_Entry_m18922_gshared (ShimEnumerator_t2989 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m18922(__this, method) (( DictionaryEntry_t1160  (*) (ShimEnumerator_t2989 *, const MethodInfo*))ShimEnumerator_get_Entry_m18922_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18923_gshared (ShimEnumerator_t2989 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m18923(__this, method) (( Object_t * (*) (ShimEnumerator_t2989 *, const MethodInfo*))ShimEnumerator_get_Key_m18923_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18924_gshared (ShimEnumerator_t2989 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m18924(__this, method) (( Object_t * (*) (ShimEnumerator_t2989 *, const MethodInfo*))ShimEnumerator_get_Value_m18924_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m18925_gshared (ShimEnumerator_t2989 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m18925(__this, method) (( Object_t * (*) (ShimEnumerator_t2989 *, const MethodInfo*))ShimEnumerator_get_Current_m18925_gshared)(__this, method)
