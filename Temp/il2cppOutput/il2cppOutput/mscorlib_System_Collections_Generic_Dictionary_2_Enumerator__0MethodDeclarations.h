#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1918;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12606_gshared (Enumerator_t1925 * __this, Dictionary_2_t1918 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m12606(__this, ___dictionary, method) (( void (*) (Enumerator_t1925 *, Dictionary_2_t1918 *, const MethodInfo*))Enumerator__ctor_m12606_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12607_gshared (Enumerator_t1925 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m12607(__this, method) (( Object_t * (*) (Enumerator_t1925 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12607_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m12608_gshared (Enumerator_t1925 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m12608(__this, method) (( void (*) (Enumerator_t1925 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m12608_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1019  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12609_gshared (Enumerator_t1925 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12609(__this, method) (( DictionaryEntry_t1019  (*) (Enumerator_t1925 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12609_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12610_gshared (Enumerator_t1925 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12610(__this, method) (( Object_t * (*) (Enumerator_t1925 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12610_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12611_gshared (Enumerator_t1925 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12611(__this, method) (( Object_t * (*) (Enumerator_t1925 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12611_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12612_gshared (Enumerator_t1925 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m12612(__this, method) (( bool (*) (Enumerator_t1925 *, const MethodInfo*))Enumerator_MoveNext_m12612_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1920  Enumerator_get_Current_m12613_gshared (Enumerator_t1925 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m12613(__this, method) (( KeyValuePair_2_t1920  (*) (Enumerator_t1925 *, const MethodInfo*))Enumerator_get_Current_m12613_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m12614_gshared (Enumerator_t1925 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m12614(__this, method) (( int32_t (*) (Enumerator_t1925 *, const MethodInfo*))Enumerator_get_CurrentKey_m12614_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m12615_gshared (Enumerator_t1925 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m12615(__this, method) (( Object_t * (*) (Enumerator_t1925 *, const MethodInfo*))Enumerator_get_CurrentValue_m12615_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m12616_gshared (Enumerator_t1925 * __this, const MethodInfo* method);
#define Enumerator_Reset_m12616(__this, method) (( void (*) (Enumerator_t1925 *, const MethodInfo*))Enumerator_Reset_m12616_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m12617_gshared (Enumerator_t1925 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m12617(__this, method) (( void (*) (Enumerator_t1925 *, const MethodInfo*))Enumerator_VerifyState_m12617_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m12618_gshared (Enumerator_t1925 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m12618(__this, method) (( void (*) (Enumerator_t1925 *, const MethodInfo*))Enumerator_VerifyCurrent_m12618_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m12619_gshared (Enumerator_t1925 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m12619(__this, method) (( void (*) (Enumerator_t1925 *, const MethodInfo*))Enumerator_Dispose_m12619_gshared)(__this, method)
