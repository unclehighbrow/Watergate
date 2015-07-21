﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
struct Enumerator_t2983;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1095;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_26.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18869_gshared (Enumerator_t2983 * __this, Dictionary_2_t1095 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m18869(__this, ___dictionary, method) (( void (*) (Enumerator_t2983 *, Dictionary_2_t1095 *, const MethodInfo*))Enumerator__ctor_m18869_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18870_gshared (Enumerator_t2983 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m18870(__this, method) (( Object_t * (*) (Enumerator_t2983 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m18870_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1159  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18871_gshared (Enumerator_t2983 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18871(__this, method) (( DictionaryEntry_t1159  (*) (Enumerator_t2983 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18871_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18872_gshared (Enumerator_t2983 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18872(__this, method) (( Object_t * (*) (Enumerator_t2983 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18872_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18873_gshared (Enumerator_t2983 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18873(__this, method) (( Object_t * (*) (Enumerator_t2983 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18873_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18874_gshared (Enumerator_t2983 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m18874(__this, method) (( bool (*) (Enumerator_t2983 *, const MethodInfo*))Enumerator_MoveNext_m18874_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t2979  Enumerator_get_Current_m18875_gshared (Enumerator_t2983 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m18875(__this, method) (( KeyValuePair_2_t2979  (*) (Enumerator_t2983 *, const MethodInfo*))Enumerator_get_Current_m18875_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m18876_gshared (Enumerator_t2983 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m18876(__this, method) (( int32_t (*) (Enumerator_t2983 *, const MethodInfo*))Enumerator_get_CurrentKey_m18876_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m18877_gshared (Enumerator_t2983 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m18877(__this, method) (( int32_t (*) (Enumerator_t2983 *, const MethodInfo*))Enumerator_get_CurrentValue_m18877_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m18878_gshared (Enumerator_t2983 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m18878(__this, method) (( void (*) (Enumerator_t2983 *, const MethodInfo*))Enumerator_VerifyState_m18878_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m18879_gshared (Enumerator_t2983 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m18879(__this, method) (( void (*) (Enumerator_t2983 *, const MethodInfo*))Enumerator_VerifyCurrent_m18879_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m18880_gshared (Enumerator_t2983 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m18880(__this, method) (( void (*) (Enumerator_t2983 *, const MethodInfo*))Enumerator_Dispose_m18880_gshared)(__this, method)
