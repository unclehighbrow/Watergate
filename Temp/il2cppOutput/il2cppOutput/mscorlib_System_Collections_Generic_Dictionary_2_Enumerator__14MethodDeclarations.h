#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
struct Enumerator_t2846;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t2840;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m17209_gshared (Enumerator_t2846 * __this, Dictionary_2_t2840 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m17209(__this, ___dictionary, method) (( void (*) (Enumerator_t2846 *, Dictionary_2_t2840 *, const MethodInfo*))Enumerator__ctor_m17209_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m17210_gshared (Enumerator_t2846 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m17210(__this, method) (( Object_t * (*) (Enumerator_t2846 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m17210_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1159  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17211_gshared (Enumerator_t2846 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17211(__this, method) (( DictionaryEntry_t1159  (*) (Enumerator_t2846 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17211_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17212_gshared (Enumerator_t2846 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17212(__this, method) (( Object_t * (*) (Enumerator_t2846 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17212_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17213_gshared (Enumerator_t2846 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17213(__this, method) (( Object_t * (*) (Enumerator_t2846 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17213_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m17214_gshared (Enumerator_t2846 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m17214(__this, method) (( bool (*) (Enumerator_t2846 *, const MethodInfo*))Enumerator_MoveNext_m17214_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2841  Enumerator_get_Current_m17215_gshared (Enumerator_t2846 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m17215(__this, method) (( KeyValuePair_2_t2841  (*) (Enumerator_t2846 *, const MethodInfo*))Enumerator_get_Current_m17215_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m17216_gshared (Enumerator_t2846 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m17216(__this, method) (( uint64_t (*) (Enumerator_t2846 *, const MethodInfo*))Enumerator_get_CurrentKey_m17216_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m17217_gshared (Enumerator_t2846 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m17217(__this, method) (( Object_t * (*) (Enumerator_t2846 *, const MethodInfo*))Enumerator_get_CurrentValue_m17217_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m17218_gshared (Enumerator_t2846 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m17218(__this, method) (( void (*) (Enumerator_t2846 *, const MethodInfo*))Enumerator_VerifyState_m17218_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m17219_gshared (Enumerator_t2846 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m17219(__this, method) (( void (*) (Enumerator_t2846 *, const MethodInfo*))Enumerator_VerifyCurrent_m17219_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m17220_gshared (Enumerator_t2846 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m17220(__this, method) (( void (*) (Enumerator_t2846 *, const MethodInfo*))Enumerator_Dispose_m17220_gshared)(__this, method)
