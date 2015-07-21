#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
struct Enumerator_t2808;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2802;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m16773_gshared (Enumerator_t2808 * __this, Dictionary_2_t2802 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m16773(__this, ___dictionary, method) (( void (*) (Enumerator_t2808 *, Dictionary_2_t2802 *, const MethodInfo*))Enumerator__ctor_m16773_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m16774_gshared (Enumerator_t2808 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m16774(__this, method) (( Object_t * (*) (Enumerator_t2808 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m16774_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1159  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16775_gshared (Enumerator_t2808 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16775(__this, method) (( DictionaryEntry_t1159  (*) (Enumerator_t2808 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16775_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16776_gshared (Enumerator_t2808 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16776(__this, method) (( Object_t * (*) (Enumerator_t2808 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16776_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16777_gshared (Enumerator_t2808 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16777(__this, method) (( Object_t * (*) (Enumerator_t2808 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16777_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m16778_gshared (Enumerator_t2808 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m16778(__this, method) (( bool (*) (Enumerator_t2808 *, const MethodInfo*))Enumerator_MoveNext_m16778_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t2803  Enumerator_get_Current_m16779_gshared (Enumerator_t2808 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m16779(__this, method) (( KeyValuePair_2_t2803  (*) (Enumerator_t2808 *, const MethodInfo*))Enumerator_get_Current_m16779_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m16780_gshared (Enumerator_t2808 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m16780(__this, method) (( Object_t * (*) (Enumerator_t2808 *, const MethodInfo*))Enumerator_get_CurrentKey_m16780_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m16781_gshared (Enumerator_t2808 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m16781(__this, method) (( int64_t (*) (Enumerator_t2808 *, const MethodInfo*))Enumerator_get_CurrentValue_m16781_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m16782_gshared (Enumerator_t2808 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m16782(__this, method) (( void (*) (Enumerator_t2808 *, const MethodInfo*))Enumerator_VerifyState_m16782_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m16783_gshared (Enumerator_t2808 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m16783(__this, method) (( void (*) (Enumerator_t2808 *, const MethodInfo*))Enumerator_VerifyCurrent_m16783_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m16784_gshared (Enumerator_t2808 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m16784(__this, method) (( void (*) (Enumerator_t2808 *, const MethodInfo*))Enumerator_Dispose_m16784_gshared)(__this, method)
