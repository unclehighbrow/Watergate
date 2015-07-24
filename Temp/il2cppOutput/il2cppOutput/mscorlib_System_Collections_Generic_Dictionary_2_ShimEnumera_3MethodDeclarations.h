#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
struct ShimEnumerator_t2853;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t2841;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m17264_gshared (ShimEnumerator_t2853 * __this, Dictionary_2_t2841 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m17264(__this, ___host, method) (( void (*) (ShimEnumerator_t2853 *, Dictionary_2_t2841 *, const MethodInfo*))ShimEnumerator__ctor_m17264_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m17265_gshared (ShimEnumerator_t2853 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m17265(__this, method) (( bool (*) (ShimEnumerator_t2853 *, const MethodInfo*))ShimEnumerator_MoveNext_m17265_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1160  ShimEnumerator_get_Entry_m17266_gshared (ShimEnumerator_t2853 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m17266(__this, method) (( DictionaryEntry_t1160  (*) (ShimEnumerator_t2853 *, const MethodInfo*))ShimEnumerator_get_Entry_m17266_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m17267_gshared (ShimEnumerator_t2853 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m17267(__this, method) (( Object_t * (*) (ShimEnumerator_t2853 *, const MethodInfo*))ShimEnumerator_get_Key_m17267_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m17268_gshared (ShimEnumerator_t2853 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m17268(__this, method) (( Object_t * (*) (ShimEnumerator_t2853 *, const MethodInfo*))ShimEnumerator_get_Value_m17268_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m17269_gshared (ShimEnumerator_t2853 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m17269(__this, method) (( Object_t * (*) (ShimEnumerator_t2853 *, const MethodInfo*))ShimEnumerator_get_Current_m17269_gshared)(__this, method)
