#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
struct ThreadSafeDictionary_2_t767;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t3253;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
struct ICollection_1_t3260;
// System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
struct IDictionary_2_t726;
// System.Type
struct Type_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
struct ThreadSafeDictionaryValueFactory_2_t766;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>[]
struct KeyValuePair_2U5BU5D_t3261;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>>
struct IEnumerator_1_t3262;
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_20.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_6MethodDeclarations.h"
#define ThreadSafeDictionary_2__ctor_m3614(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t767 *, ThreadSafeDictionaryValueFactory_2_t766 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m17473_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::System.Collections.IEnumerable.GetEnumerator()
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m17569(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t767 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m17475_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::Get(TKey)
#define ThreadSafeDictionary_2_Get_m17570(__this, ___key, method) (( Object_t* (*) (ThreadSafeDictionary_2_t767 *, Type_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m17477_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::AddValue(TKey)
#define ThreadSafeDictionary_2_AddValue_m17571(__this, ___key, method) (( Object_t* (*) (ThreadSafeDictionary_2_t767 *, Type_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m17479_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::Add(TKey,TValue)
#define ThreadSafeDictionary_2_Add_m17572(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t767 *, Type_t *, Object_t*, const MethodInfo*))ThreadSafeDictionary_2_Add_m17481_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Keys()
#define ThreadSafeDictionary_2_get_Keys_m17573(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t767 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m17483_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::Remove(TKey)
#define ThreadSafeDictionary_2_Remove_m17574(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t767 *, Type_t *, const MethodInfo*))ThreadSafeDictionary_2_Remove_m17485_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::TryGetValue(TKey,TValue&)
#define ThreadSafeDictionary_2_TryGetValue_m17575(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t767 *, Type_t *, Object_t**, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m17487_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Values()
#define ThreadSafeDictionary_2_get_Values_m17576(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t767 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m17489_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Item(TKey)
#define ThreadSafeDictionary_2_get_Item_m17577(__this, ___key, method) (( Object_t* (*) (ThreadSafeDictionary_2_t767 *, Type_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m17491_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::set_Item(TKey,TValue)
#define ThreadSafeDictionary_2_set_Item_m17578(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t767 *, Type_t *, Object_t*, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m17493_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define ThreadSafeDictionary_2_Add_m17579(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t767 *, KeyValuePair_2_t2875 , const MethodInfo*))ThreadSafeDictionary_2_Add_m17495_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::Clear()
#define ThreadSafeDictionary_2_Clear_m17580(__this, method) (( void (*) (ThreadSafeDictionary_2_t767 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m17497_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define ThreadSafeDictionary_2_Contains_m17581(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t767 *, KeyValuePair_2_t2875 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m17499_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define ThreadSafeDictionary_2_CopyTo_m17582(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t767 *, KeyValuePair_2U5BU5D_t3261*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m17501_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Count()
#define ThreadSafeDictionary_2_get_Count_m17583(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t767 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m17503_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_IsReadOnly()
#define ThreadSafeDictionary_2_get_IsReadOnly_m17584(__this, method) (( bool (*) (ThreadSafeDictionary_2_t767 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m17505_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define ThreadSafeDictionary_2_Remove_m17585(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t767 *, KeyValuePair_2_t2875 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m17507_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::GetEnumerator()
#define ThreadSafeDictionary_2_GetEnumerator_m17586(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t767 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m17509_gshared)(__this, method)
