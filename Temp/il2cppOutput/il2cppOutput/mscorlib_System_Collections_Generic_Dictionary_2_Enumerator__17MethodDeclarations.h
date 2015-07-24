#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t2892;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t2889;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m17935_gshared (Enumerator_t2892 * __this, Dictionary_2_t2889 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m17935(__this, ___dictionary, method) (( void (*) (Enumerator_t2892 *, Dictionary_2_t2889 *, const MethodInfo*))Enumerator__ctor_m17935_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m17936_gshared (Enumerator_t2892 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m17936(__this, method) (( Object_t * (*) (Enumerator_t2892 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m17936_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1160  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17937_gshared (Enumerator_t2892 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17937(__this, method) (( DictionaryEntry_t1160  (*) (Enumerator_t2892 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17937_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17938_gshared (Enumerator_t2892 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17938(__this, method) (( Object_t * (*) (Enumerator_t2892 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17938_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17939_gshared (Enumerator_t2892 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17939(__this, method) (( Object_t * (*) (Enumerator_t2892 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17939_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m17940_gshared (Enumerator_t2892 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m17940(__this, method) (( bool (*) (Enumerator_t2892 *, const MethodInfo*))Enumerator_MoveNext_m17940_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2863  Enumerator_get_Current_m17941_gshared (Enumerator_t2892 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m17941(__this, method) (( KeyValuePair_2_t2863  (*) (Enumerator_t2892 *, const MethodInfo*))Enumerator_get_Current_m17941_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m17942_gshared (Enumerator_t2892 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m17942(__this, method) (( Object_t * (*) (Enumerator_t2892 *, const MethodInfo*))Enumerator_get_CurrentKey_m17942_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t2622  Enumerator_get_CurrentValue_m17943_gshared (Enumerator_t2892 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m17943(__this, method) (( KeyValuePair_2_t2622  (*) (Enumerator_t2892 *, const MethodInfo*))Enumerator_get_CurrentValue_m17943_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m17944_gshared (Enumerator_t2892 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m17944(__this, method) (( void (*) (Enumerator_t2892 *, const MethodInfo*))Enumerator_VerifyState_m17944_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m17945_gshared (Enumerator_t2892 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m17945(__this, method) (( void (*) (Enumerator_t2892 *, const MethodInfo*))Enumerator_VerifyCurrent_m17945_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m17946_gshared (Enumerator_t2892 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m17946(__this, method) (( void (*) (Enumerator_t2892 *, const MethodInfo*))Enumerator_Dispose_m17946_gshared)(__this, method)
