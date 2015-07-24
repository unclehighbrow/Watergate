#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t2626;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2621;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14056_gshared (Enumerator_t2626 * __this, Dictionary_2_t2621 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m14056(__this, ___dictionary, method) (( void (*) (Enumerator_t2626 *, Dictionary_2_t2621 *, const MethodInfo*))Enumerator__ctor_m14056_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14057_gshared (Enumerator_t2626 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m14057(__this, method) (( Object_t * (*) (Enumerator_t2626 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m14057_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1160  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14058_gshared (Enumerator_t2626 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14058(__this, method) (( DictionaryEntry_t1160  (*) (Enumerator_t2626 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14058_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14059_gshared (Enumerator_t2626 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14059(__this, method) (( Object_t * (*) (Enumerator_t2626 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14059_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14060_gshared (Enumerator_t2626 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14060(__this, method) (( Object_t * (*) (Enumerator_t2626 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14060_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14061_gshared (Enumerator_t2626 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m14061(__this, method) (( bool (*) (Enumerator_t2626 *, const MethodInfo*))Enumerator_MoveNext_m14061_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2622  Enumerator_get_Current_m14062_gshared (Enumerator_t2626 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m14062(__this, method) (( KeyValuePair_2_t2622  (*) (Enumerator_t2626 *, const MethodInfo*))Enumerator_get_Current_m14062_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m14063_gshared (Enumerator_t2626 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m14063(__this, method) (( Object_t * (*) (Enumerator_t2626 *, const MethodInfo*))Enumerator_get_CurrentKey_m14063_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m14064_gshared (Enumerator_t2626 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m14064(__this, method) (( Object_t * (*) (Enumerator_t2626 *, const MethodInfo*))Enumerator_get_CurrentValue_m14064_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m14065_gshared (Enumerator_t2626 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m14065(__this, method) (( void (*) (Enumerator_t2626 *, const MethodInfo*))Enumerator_VerifyState_m14065_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m14066_gshared (Enumerator_t2626 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m14066(__this, method) (( void (*) (Enumerator_t2626 *, const MethodInfo*))Enumerator_VerifyCurrent_m14066_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m14067_gshared (Enumerator_t2626 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m14067(__this, method) (( void (*) (Enumerator_t2626 *, const MethodInfo*))Enumerator_Dispose_m14067_gshared)(__this, method)
