#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
struct Enumerator_t2847;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t2841;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m17217_gshared (Enumerator_t2847 * __this, Dictionary_2_t2841 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m17217(__this, ___dictionary, method) (( void (*) (Enumerator_t2847 *, Dictionary_2_t2841 *, const MethodInfo*))Enumerator__ctor_m17217_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m17218_gshared (Enumerator_t2847 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m17218(__this, method) (( Object_t * (*) (Enumerator_t2847 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m17218_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1160  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17219_gshared (Enumerator_t2847 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17219(__this, method) (( DictionaryEntry_t1160  (*) (Enumerator_t2847 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17219_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17220_gshared (Enumerator_t2847 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17220(__this, method) (( Object_t * (*) (Enumerator_t2847 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17220_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17221_gshared (Enumerator_t2847 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17221(__this, method) (( Object_t * (*) (Enumerator_t2847 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17221_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m17222_gshared (Enumerator_t2847 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m17222(__this, method) (( bool (*) (Enumerator_t2847 *, const MethodInfo*))Enumerator_MoveNext_m17222_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2842  Enumerator_get_Current_m17223_gshared (Enumerator_t2847 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m17223(__this, method) (( KeyValuePair_2_t2842  (*) (Enumerator_t2847 *, const MethodInfo*))Enumerator_get_Current_m17223_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m17224_gshared (Enumerator_t2847 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m17224(__this, method) (( uint64_t (*) (Enumerator_t2847 *, const MethodInfo*))Enumerator_get_CurrentKey_m17224_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m17225_gshared (Enumerator_t2847 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m17225(__this, method) (( Object_t * (*) (Enumerator_t2847 *, const MethodInfo*))Enumerator_get_CurrentValue_m17225_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m17226_gshared (Enumerator_t2847 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m17226(__this, method) (( void (*) (Enumerator_t2847 *, const MethodInfo*))Enumerator_VerifyState_m17226_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m17227_gshared (Enumerator_t2847 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m17227(__this, method) (( void (*) (Enumerator_t2847 *, const MethodInfo*))Enumerator_VerifyCurrent_m17227_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m17228_gshared (Enumerator_t2847 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m17228(__this, method) (( void (*) (Enumerator_t2847 *, const MethodInfo*))Enumerator_Dispose_m17228_gshared)(__this, method)
