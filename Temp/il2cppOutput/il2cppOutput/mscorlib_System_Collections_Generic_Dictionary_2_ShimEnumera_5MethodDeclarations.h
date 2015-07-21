#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t2966;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t2955;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m18702_gshared (ShimEnumerator_t2966 * __this, Dictionary_2_t2955 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m18702(__this, ___host, method) (( void (*) (ShimEnumerator_t2966 *, Dictionary_2_t2955 *, const MethodInfo*))ShimEnumerator__ctor_m18702_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18703_gshared (ShimEnumerator_t2966 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m18703(__this, method) (( bool (*) (ShimEnumerator_t2966 *, const MethodInfo*))ShimEnumerator_MoveNext_m18703_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t1159  ShimEnumerator_get_Entry_m18704_gshared (ShimEnumerator_t2966 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m18704(__this, method) (( DictionaryEntry_t1159  (*) (ShimEnumerator_t2966 *, const MethodInfo*))ShimEnumerator_get_Entry_m18704_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18705_gshared (ShimEnumerator_t2966 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m18705(__this, method) (( Object_t * (*) (ShimEnumerator_t2966 *, const MethodInfo*))ShimEnumerator_get_Key_m18705_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18706_gshared (ShimEnumerator_t2966 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m18706(__this, method) (( Object_t * (*) (ShimEnumerator_t2966 *, const MethodInfo*))ShimEnumerator_get_Value_m18706_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m18707_gshared (ShimEnumerator_t2966 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m18707(__this, method) (( Object_t * (*) (ShimEnumerator_t2966 *, const MethodInfo*))ShimEnumerator_get_Current_m18707_gshared)(__this, method)
