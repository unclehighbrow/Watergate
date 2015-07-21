#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2802;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t721;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t3220;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t2806;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t2810;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2499;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int64>
struct IDictionary_2_t3224;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t731;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t3225;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t3226;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1158;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern "C" void Dictionary_2__ctor_m16639_gshared (Dictionary_2_t2802 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m16639(__this, method) (( void (*) (Dictionary_2_t2802 *, const MethodInfo*))Dictionary_2__ctor_m16639_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m16641_gshared (Dictionary_2_t2802 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m16641(__this, ___comparer, method) (( void (*) (Dictionary_2_t2802 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16641_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m16643_gshared (Dictionary_2_t2802 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m16643(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2802 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16643_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m16645_gshared (Dictionary_2_t2802 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m16645(__this, ___capacity, method) (( void (*) (Dictionary_2_t2802 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m16645_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m16647_gshared (Dictionary_2_t2802 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m16647(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2802 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16647_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m16649_gshared (Dictionary_2_t2802 * __this, SerializationInfo_t731 * ___info, StreamingContext_t732  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m16649(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2802 *, SerializationInfo_t731 *, StreamingContext_t732 , const MethodInfo*))Dictionary_2__ctor_m16649_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m16651_gshared (Dictionary_2_t2802 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m16651(__this, method) (( Object_t* (*) (Dictionary_2_t2802 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m16651_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m16653_gshared (Dictionary_2_t2802 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m16653(__this, method) (( Object_t* (*) (Dictionary_2_t2802 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m16653_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m16655_gshared (Dictionary_2_t2802 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m16655(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2802 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m16655_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m16657_gshared (Dictionary_2_t2802 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m16657(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2802 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m16657_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m16659_gshared (Dictionary_2_t2802 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m16659(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2802 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m16659_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m16661_gshared (Dictionary_2_t2802 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m16661(__this, ___key, method) (( bool (*) (Dictionary_2_t2802 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m16661_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m16663_gshared (Dictionary_2_t2802 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m16663(__this, ___key, method) (( void (*) (Dictionary_2_t2802 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m16663_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16665_gshared (Dictionary_2_t2802 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16665(__this, method) (( bool (*) (Dictionary_2_t2802 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16665_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16667_gshared (Dictionary_2_t2802 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16667(__this, method) (( Object_t * (*) (Dictionary_2_t2802 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16667_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16669_gshared (Dictionary_2_t2802 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16669(__this, method) (( bool (*) (Dictionary_2_t2802 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16669_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16671_gshared (Dictionary_2_t2802 * __this, KeyValuePair_2_t2803  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16671(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2802 *, KeyValuePair_2_t2803 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16671_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16673_gshared (Dictionary_2_t2802 * __this, KeyValuePair_2_t2803  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16673(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2802 *, KeyValuePair_2_t2803 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16673_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16675_gshared (Dictionary_2_t2802 * __this, KeyValuePair_2U5BU5D_t3225* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16675(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2802 *, KeyValuePair_2U5BU5D_t3225*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16675_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16677_gshared (Dictionary_2_t2802 * __this, KeyValuePair_2_t2803  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16677(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2802 *, KeyValuePair_2_t2803 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16677_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m16679_gshared (Dictionary_2_t2802 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m16679(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2802 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m16679_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16681_gshared (Dictionary_2_t2802 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16681(__this, method) (( Object_t * (*) (Dictionary_2_t2802 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16681_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16683_gshared (Dictionary_2_t2802 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16683(__this, method) (( Object_t* (*) (Dictionary_2_t2802 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16683_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16685_gshared (Dictionary_2_t2802 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16685(__this, method) (( Object_t * (*) (Dictionary_2_t2802 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16685_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m16687_gshared (Dictionary_2_t2802 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m16687(__this, method) (( int32_t (*) (Dictionary_2_t2802 *, const MethodInfo*))Dictionary_2_get_Count_m16687_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C" int64_t Dictionary_2_get_Item_m16689_gshared (Dictionary_2_t2802 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m16689(__this, ___key, method) (( int64_t (*) (Dictionary_2_t2802 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m16689_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m16691_gshared (Dictionary_2_t2802 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m16691(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2802 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_set_Item_m16691_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m16693_gshared (Dictionary_2_t2802 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m16693(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2802 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m16693_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m16695_gshared (Dictionary_2_t2802 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m16695(__this, ___size, method) (( void (*) (Dictionary_2_t2802 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m16695_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m16697_gshared (Dictionary_2_t2802 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m16697(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2802 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m16697_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2803  Dictionary_2_make_pair_m16699_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m16699(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2803  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_make_pair_m16699_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m16701_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m16701(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_key_m16701_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_value_m16703_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m16703(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_value_m16703_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m16705_gshared (Dictionary_2_t2802 * __this, KeyValuePair_2U5BU5D_t3225* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m16705(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2802 *, KeyValuePair_2U5BU5D_t3225*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m16705_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern "C" void Dictionary_2_Resize_m16707_gshared (Dictionary_2_t2802 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m16707(__this, method) (( void (*) (Dictionary_2_t2802 *, const MethodInfo*))Dictionary_2_Resize_m16707_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m16709_gshared (Dictionary_2_t2802 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m16709(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2802 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_Add_m16709_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C" void Dictionary_2_Clear_m16711_gshared (Dictionary_2_t2802 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m16711(__this, method) (( void (*) (Dictionary_2_t2802 *, const MethodInfo*))Dictionary_2_Clear_m16711_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m16713_gshared (Dictionary_2_t2802 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m16713(__this, ___key, method) (( bool (*) (Dictionary_2_t2802 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m16713_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m16715_gshared (Dictionary_2_t2802 * __this, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m16715(__this, ___value, method) (( bool (*) (Dictionary_2_t2802 *, int64_t, const MethodInfo*))Dictionary_2_ContainsValue_m16715_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m16717_gshared (Dictionary_2_t2802 * __this, SerializationInfo_t731 * ___info, StreamingContext_t732  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m16717(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2802 *, SerializationInfo_t731 *, StreamingContext_t732 , const MethodInfo*))Dictionary_2_GetObjectData_m16717_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m16719_gshared (Dictionary_2_t2802 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m16719(__this, ___sender, method) (( void (*) (Dictionary_2_t2802 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m16719_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m16721_gshared (Dictionary_2_t2802 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m16721(__this, ___key, method) (( bool (*) (Dictionary_2_t2802 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m16721_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m16723_gshared (Dictionary_2_t2802 * __this, Object_t * ___key, int64_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m16723(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2802 *, Object_t *, int64_t*, const MethodInfo*))Dictionary_2_TryGetValue_m16723_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t2806 * Dictionary_2_get_Keys_m16725_gshared (Dictionary_2_t2802 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m16725(__this, method) (( KeyCollection_t2806 * (*) (Dictionary_2_t2802 *, const MethodInfo*))Dictionary_2_get_Keys_m16725_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t2810 * Dictionary_2_get_Values_m16727_gshared (Dictionary_2_t2802 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m16727(__this, method) (( ValueCollection_t2810 * (*) (Dictionary_2_t2802 *, const MethodInfo*))Dictionary_2_get_Values_m16727_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m16729_gshared (Dictionary_2_t2802 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m16729(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2802 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m16729_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C" int64_t Dictionary_2_ToTValue_m16731_gshared (Dictionary_2_t2802 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m16731(__this, ___value, method) (( int64_t (*) (Dictionary_2_t2802 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m16731_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m16733_gshared (Dictionary_2_t2802 * __this, KeyValuePair_2_t2803  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m16733(__this, ___pair, method) (( bool (*) (Dictionary_2_t2802 *, KeyValuePair_2_t2803 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m16733_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t2808  Dictionary_2_GetEnumerator_m16735_gshared (Dictionary_2_t2802 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m16735(__this, method) (( Enumerator_t2808  (*) (Dictionary_2_t2802 *, const MethodInfo*))Dictionary_2_GetEnumerator_m16735_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1159  Dictionary_2_U3CCopyToU3Em__0_m16737_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m16737(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1159  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m16737_gshared)(__this /* static, unused */, ___key, ___value, method)
