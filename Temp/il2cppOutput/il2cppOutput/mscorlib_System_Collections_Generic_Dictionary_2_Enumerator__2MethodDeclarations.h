#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t2571;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2565;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m13379_gshared (Enumerator_t2571 * __this, Dictionary_2_t2565 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m13379(__this, ___dictionary, method) (( void (*) (Enumerator_t2571 *, Dictionary_2_t2565 *, const MethodInfo*))Enumerator__ctor_m13379_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13380_gshared (Enumerator_t2571 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m13380(__this, method) (( Object_t * (*) (Enumerator_t2571 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m13380_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1159  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13381_gshared (Enumerator_t2571 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13381(__this, method) (( DictionaryEntry_t1159  (*) (Enumerator_t2571 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13381_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13382_gshared (Enumerator_t2571 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13382(__this, method) (( Object_t * (*) (Enumerator_t2571 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13382_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13383_gshared (Enumerator_t2571 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13383(__this, method) (( Object_t * (*) (Enumerator_t2571 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13383_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m13384_gshared (Enumerator_t2571 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m13384(__this, method) (( bool (*) (Enumerator_t2571 *, const MethodInfo*))Enumerator_MoveNext_m13384_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2566  Enumerator_get_Current_m13385_gshared (Enumerator_t2571 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m13385(__this, method) (( KeyValuePair_2_t2566  (*) (Enumerator_t2571 *, const MethodInfo*))Enumerator_get_Current_m13385_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m13386_gshared (Enumerator_t2571 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m13386(__this, method) (( int32_t (*) (Enumerator_t2571 *, const MethodInfo*))Enumerator_get_CurrentKey_m13386_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m13387_gshared (Enumerator_t2571 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m13387(__this, method) (( Object_t * (*) (Enumerator_t2571 *, const MethodInfo*))Enumerator_get_CurrentValue_m13387_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m13388_gshared (Enumerator_t2571 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m13388(__this, method) (( void (*) (Enumerator_t2571 *, const MethodInfo*))Enumerator_VerifyState_m13388_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m13389_gshared (Enumerator_t2571 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m13389(__this, method) (( void (*) (Enumerator_t2571 *, const MethodInfo*))Enumerator_VerifyCurrent_m13389_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m13390_gshared (Enumerator_t2571 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m13390(__this, method) (( void (*) (Enumerator_t2571 *, const MethodInfo*))Enumerator_Dispose_m13390_gshared)(__this, method)
