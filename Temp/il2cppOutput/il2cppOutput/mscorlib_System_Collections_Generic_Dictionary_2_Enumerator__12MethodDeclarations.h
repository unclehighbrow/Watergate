#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
struct Enumerator_t2809;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2803;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m16781_gshared (Enumerator_t2809 * __this, Dictionary_2_t2803 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m16781(__this, ___dictionary, method) (( void (*) (Enumerator_t2809 *, Dictionary_2_t2803 *, const MethodInfo*))Enumerator__ctor_m16781_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m16782_gshared (Enumerator_t2809 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m16782(__this, method) (( Object_t * (*) (Enumerator_t2809 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m16782_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1160  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16783_gshared (Enumerator_t2809 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16783(__this, method) (( DictionaryEntry_t1160  (*) (Enumerator_t2809 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16783_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16784_gshared (Enumerator_t2809 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16784(__this, method) (( Object_t * (*) (Enumerator_t2809 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16784_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16785_gshared (Enumerator_t2809 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16785(__this, method) (( Object_t * (*) (Enumerator_t2809 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16785_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m16786_gshared (Enumerator_t2809 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m16786(__this, method) (( bool (*) (Enumerator_t2809 *, const MethodInfo*))Enumerator_MoveNext_m16786_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t2804  Enumerator_get_Current_m16787_gshared (Enumerator_t2809 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m16787(__this, method) (( KeyValuePair_2_t2804  (*) (Enumerator_t2809 *, const MethodInfo*))Enumerator_get_Current_m16787_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m16788_gshared (Enumerator_t2809 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m16788(__this, method) (( Object_t * (*) (Enumerator_t2809 *, const MethodInfo*))Enumerator_get_CurrentKey_m16788_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m16789_gshared (Enumerator_t2809 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m16789(__this, method) (( int64_t (*) (Enumerator_t2809 *, const MethodInfo*))Enumerator_get_CurrentValue_m16789_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m16790_gshared (Enumerator_t2809 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m16790(__this, method) (( void (*) (Enumerator_t2809 *, const MethodInfo*))Enumerator_VerifyState_m16790_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m16791_gshared (Enumerator_t2809 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m16791(__this, method) (( void (*) (Enumerator_t2809 *, const MethodInfo*))Enumerator_VerifyCurrent_m16791_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m16792_gshared (Enumerator_t2809 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m16792(__this, method) (( void (*) (Enumerator_t2809 *, const MethodInfo*))Enumerator_Dispose_m16792_gshared)(__this, method)
