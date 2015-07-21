#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2565;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3099;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t721;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t2569;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t2573;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2562;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t3104;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t731;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t3105;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t3106;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1158;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m13247_gshared (Dictionary_2_t2565 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m13247(__this, method) (( void (*) (Dictionary_2_t2565 *, const MethodInfo*))Dictionary_2__ctor_m13247_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13249_gshared (Dictionary_2_t2565 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m13249(__this, ___comparer, method) (( void (*) (Dictionary_2_t2565 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13249_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m13251_gshared (Dictionary_2_t2565 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m13251(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2565 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13251_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m13253_gshared (Dictionary_2_t2565 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m13253(__this, ___capacity, method) (( void (*) (Dictionary_2_t2565 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m13253_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13255_gshared (Dictionary_2_t2565 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m13255(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2565 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13255_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m13257_gshared (Dictionary_2_t2565 * __this, SerializationInfo_t731 * ___info, StreamingContext_t732  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m13257(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2565 *, SerializationInfo_t731 *, StreamingContext_t732 , const MethodInfo*))Dictionary_2__ctor_m13257_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13259_gshared (Dictionary_2_t2565 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13259(__this, method) (( Object_t* (*) (Dictionary_2_t2565 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13259_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13261_gshared (Dictionary_2_t2565 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13261(__this, method) (( Object_t* (*) (Dictionary_2_t2565 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13261_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m13263_gshared (Dictionary_2_t2565 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m13263(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2565 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m13263_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m13265_gshared (Dictionary_2_t2565 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m13265(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2565 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m13265_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m13267_gshared (Dictionary_2_t2565 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m13267(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2565 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13267_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m13269_gshared (Dictionary_2_t2565 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m13269(__this, ___key, method) (( bool (*) (Dictionary_2_t2565 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m13269_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m13271_gshared (Dictionary_2_t2565 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m13271(__this, ___key, method) (( void (*) (Dictionary_2_t2565 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13271_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13273_gshared (Dictionary_2_t2565 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13273(__this, method) (( bool (*) (Dictionary_2_t2565 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13273_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13275_gshared (Dictionary_2_t2565 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13275(__this, method) (( Object_t * (*) (Dictionary_2_t2565 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13275_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13277_gshared (Dictionary_2_t2565 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13277(__this, method) (( bool (*) (Dictionary_2_t2565 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13277_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13279_gshared (Dictionary_2_t2565 * __this, KeyValuePair_2_t2566  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13279(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2565 *, KeyValuePair_2_t2566 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13279_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13281_gshared (Dictionary_2_t2565 * __this, KeyValuePair_2_t2566  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13281(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2565 *, KeyValuePair_2_t2566 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13281_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13283_gshared (Dictionary_2_t2565 * __this, KeyValuePair_2U5BU5D_t3105* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13283(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2565 *, KeyValuePair_2U5BU5D_t3105*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13283_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13285_gshared (Dictionary_2_t2565 * __this, KeyValuePair_2_t2566  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13285(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2565 *, KeyValuePair_2_t2566 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13285_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m13287_gshared (Dictionary_2_t2565 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13287(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2565 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13287_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13289_gshared (Dictionary_2_t2565 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13289(__this, method) (( Object_t * (*) (Dictionary_2_t2565 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13289_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13291_gshared (Dictionary_2_t2565 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13291(__this, method) (( Object_t* (*) (Dictionary_2_t2565 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13291_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13293_gshared (Dictionary_2_t2565 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13293(__this, method) (( Object_t * (*) (Dictionary_2_t2565 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13293_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m13295_gshared (Dictionary_2_t2565 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m13295(__this, method) (( int32_t (*) (Dictionary_2_t2565 *, const MethodInfo*))Dictionary_2_get_Count_m13295_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m13297_gshared (Dictionary_2_t2565 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m13297(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2565 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m13297_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m13299_gshared (Dictionary_2_t2565 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m13299(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2565 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m13299_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m13301_gshared (Dictionary_2_t2565 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m13301(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2565 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m13301_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m13303_gshared (Dictionary_2_t2565 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m13303(__this, ___size, method) (( void (*) (Dictionary_2_t2565 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m13303_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m13305_gshared (Dictionary_2_t2565 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m13305(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2565 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m13305_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2566  Dictionary_2_make_pair_m13307_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m13307(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2566  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m13307_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m13309_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m13309(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m13309_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m13311_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m13311(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m13311_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m13313_gshared (Dictionary_2_t2565 * __this, KeyValuePair_2U5BU5D_t3105* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m13313(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2565 *, KeyValuePair_2U5BU5D_t3105*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m13313_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m13315_gshared (Dictionary_2_t2565 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m13315(__this, method) (( void (*) (Dictionary_2_t2565 *, const MethodInfo*))Dictionary_2_Resize_m13315_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m13317_gshared (Dictionary_2_t2565 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m13317(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2565 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m13317_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m13319_gshared (Dictionary_2_t2565 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m13319(__this, method) (( void (*) (Dictionary_2_t2565 *, const MethodInfo*))Dictionary_2_Clear_m13319_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m13321_gshared (Dictionary_2_t2565 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m13321(__this, ___key, method) (( bool (*) (Dictionary_2_t2565 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m13321_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m13323_gshared (Dictionary_2_t2565 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m13323(__this, ___value, method) (( bool (*) (Dictionary_2_t2565 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m13323_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m13325_gshared (Dictionary_2_t2565 * __this, SerializationInfo_t731 * ___info, StreamingContext_t732  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m13325(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2565 *, SerializationInfo_t731 *, StreamingContext_t732 , const MethodInfo*))Dictionary_2_GetObjectData_m13325_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m13327_gshared (Dictionary_2_t2565 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m13327(__this, ___sender, method) (( void (*) (Dictionary_2_t2565 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m13327_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m13329_gshared (Dictionary_2_t2565 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m13329(__this, ___key, method) (( bool (*) (Dictionary_2_t2565 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m13329_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m13331_gshared (Dictionary_2_t2565 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m13331(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2565 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m13331_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t2569 * Dictionary_2_get_Keys_m13333_gshared (Dictionary_2_t2565 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m13333(__this, method) (( KeyCollection_t2569 * (*) (Dictionary_2_t2565 *, const MethodInfo*))Dictionary_2_get_Keys_m13333_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t2573 * Dictionary_2_get_Values_m13334_gshared (Dictionary_2_t2565 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m13334(__this, method) (( ValueCollection_t2573 * (*) (Dictionary_2_t2565 *, const MethodInfo*))Dictionary_2_get_Values_m13334_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m13336_gshared (Dictionary_2_t2565 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m13336(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2565 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m13336_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m13338_gshared (Dictionary_2_t2565 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m13338(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2565 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m13338_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13340_gshared (Dictionary_2_t2565 * __this, KeyValuePair_2_t2566  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m13340(__this, ___pair, method) (( bool (*) (Dictionary_2_t2565 *, KeyValuePair_2_t2566 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13340_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t2571  Dictionary_2_GetEnumerator_m13341_gshared (Dictionary_2_t2565 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m13341(__this, method) (( Enumerator_t2571  (*) (Dictionary_2_t2565 *, const MethodInfo*))Dictionary_2_GetEnumerator_m13341_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1159  Dictionary_2_U3CCopyToU3Em__0_m13343_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m13343(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1159  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13343_gshared)(__this /* static, unused */, ___key, ___value, method)
