#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t2572;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2566;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m13387_gshared (Enumerator_t2572 * __this, Dictionary_2_t2566 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m13387(__this, ___dictionary, method) (( void (*) (Enumerator_t2572 *, Dictionary_2_t2566 *, const MethodInfo*))Enumerator__ctor_m13387_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13388_gshared (Enumerator_t2572 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m13388(__this, method) (( Object_t * (*) (Enumerator_t2572 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m13388_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1160  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13389_gshared (Enumerator_t2572 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13389(__this, method) (( DictionaryEntry_t1160  (*) (Enumerator_t2572 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13389_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13390_gshared (Enumerator_t2572 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13390(__this, method) (( Object_t * (*) (Enumerator_t2572 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13390_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13391_gshared (Enumerator_t2572 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13391(__this, method) (( Object_t * (*) (Enumerator_t2572 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13391_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m13392_gshared (Enumerator_t2572 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m13392(__this, method) (( bool (*) (Enumerator_t2572 *, const MethodInfo*))Enumerator_MoveNext_m13392_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2567  Enumerator_get_Current_m13393_gshared (Enumerator_t2572 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m13393(__this, method) (( KeyValuePair_2_t2567  (*) (Enumerator_t2572 *, const MethodInfo*))Enumerator_get_Current_m13393_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m13394_gshared (Enumerator_t2572 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m13394(__this, method) (( int32_t (*) (Enumerator_t2572 *, const MethodInfo*))Enumerator_get_CurrentKey_m13394_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m13395_gshared (Enumerator_t2572 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m13395(__this, method) (( Object_t * (*) (Enumerator_t2572 *, const MethodInfo*))Enumerator_get_CurrentValue_m13395_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m13396_gshared (Enumerator_t2572 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m13396(__this, method) (( void (*) (Enumerator_t2572 *, const MethodInfo*))Enumerator_VerifyState_m13396_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m13397_gshared (Enumerator_t2572 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m13397(__this, method) (( void (*) (Enumerator_t2572 *, const MethodInfo*))Enumerator_VerifyCurrent_m13397_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m13398_gshared (Enumerator_t2572 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m13398(__this, method) (( void (*) (Enumerator_t2572 *, const MethodInfo*))Enumerator_Dispose_m13398_gshared)(__this, method)
