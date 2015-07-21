#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t2625;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2620;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14048_gshared (Enumerator_t2625 * __this, Dictionary_2_t2620 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m14048(__this, ___dictionary, method) (( void (*) (Enumerator_t2625 *, Dictionary_2_t2620 *, const MethodInfo*))Enumerator__ctor_m14048_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14049_gshared (Enumerator_t2625 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m14049(__this, method) (( Object_t * (*) (Enumerator_t2625 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m14049_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1159  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14050_gshared (Enumerator_t2625 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14050(__this, method) (( DictionaryEntry_t1159  (*) (Enumerator_t2625 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14050_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14051_gshared (Enumerator_t2625 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14051(__this, method) (( Object_t * (*) (Enumerator_t2625 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14051_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14052_gshared (Enumerator_t2625 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14052(__this, method) (( Object_t * (*) (Enumerator_t2625 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14052_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14053_gshared (Enumerator_t2625 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m14053(__this, method) (( bool (*) (Enumerator_t2625 *, const MethodInfo*))Enumerator_MoveNext_m14053_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2621  Enumerator_get_Current_m14054_gshared (Enumerator_t2625 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m14054(__this, method) (( KeyValuePair_2_t2621  (*) (Enumerator_t2625 *, const MethodInfo*))Enumerator_get_Current_m14054_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m14055_gshared (Enumerator_t2625 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m14055(__this, method) (( Object_t * (*) (Enumerator_t2625 *, const MethodInfo*))Enumerator_get_CurrentKey_m14055_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m14056_gshared (Enumerator_t2625 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m14056(__this, method) (( Object_t * (*) (Enumerator_t2625 *, const MethodInfo*))Enumerator_get_CurrentValue_m14056_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m14057_gshared (Enumerator_t2625 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m14057(__this, method) (( void (*) (Enumerator_t2625 *, const MethodInfo*))Enumerator_VerifyState_m14057_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m14058_gshared (Enumerator_t2625 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m14058(__this, method) (( void (*) (Enumerator_t2625 *, const MethodInfo*))Enumerator_VerifyCurrent_m14058_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m14059_gshared (Enumerator_t2625 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m14059(__this, method) (( void (*) (Enumerator_t2625 *, const MethodInfo*))Enumerator_Dispose_m14059_gshared)(__this, method)
