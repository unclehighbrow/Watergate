#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1095;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3099;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t2981;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t2985;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2562;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t3315;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t731;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t3316;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t3317;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1158;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_26.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__22.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m18789_gshared (Dictionary_2_t1095 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m18789(__this, method) (( void (*) (Dictionary_2_t1095 *, const MethodInfo*))Dictionary_2__ctor_m18789_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18790_gshared (Dictionary_2_t1095 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m18790(__this, ___comparer, method) (( void (*) (Dictionary_2_t1095 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18790_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m18791_gshared (Dictionary_2_t1095 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m18791(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1095 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18791_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m18792_gshared (Dictionary_2_t1095 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m18792(__this, ___capacity, method) (( void (*) (Dictionary_2_t1095 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18792_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18793_gshared (Dictionary_2_t1095 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m18793(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1095 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18793_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m18794_gshared (Dictionary_2_t1095 * __this, SerializationInfo_t731 * ___info, StreamingContext_t732  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m18794(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1095 *, SerializationInfo_t731 *, StreamingContext_t732 , const MethodInfo*))Dictionary_2__ctor_m18794_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18795_gshared (Dictionary_2_t1095 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18795(__this, method) (( Object_t* (*) (Dictionary_2_t1095 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18795_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18796_gshared (Dictionary_2_t1095 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18796(__this, method) (( Object_t* (*) (Dictionary_2_t1095 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18796_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m18797_gshared (Dictionary_2_t1095 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18797(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1095 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18797_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m18798_gshared (Dictionary_2_t1095 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18798(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1095 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18798_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m18799_gshared (Dictionary_2_t1095 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m18799(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1095 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18799_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m18800_gshared (Dictionary_2_t1095 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m18800(__this, ___key, method) (( bool (*) (Dictionary_2_t1095 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18800_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m18801_gshared (Dictionary_2_t1095 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m18801(__this, ___key, method) (( void (*) (Dictionary_2_t1095 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18801_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18802_gshared (Dictionary_2_t1095 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18802(__this, method) (( bool (*) (Dictionary_2_t1095 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18802_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18803_gshared (Dictionary_2_t1095 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18803(__this, method) (( Object_t * (*) (Dictionary_2_t1095 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18803_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18804_gshared (Dictionary_2_t1095 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18804(__this, method) (( bool (*) (Dictionary_2_t1095 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18804_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18805_gshared (Dictionary_2_t1095 * __this, KeyValuePair_2_t2979  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18805(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1095 *, KeyValuePair_2_t2979 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18805_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18806_gshared (Dictionary_2_t1095 * __this, KeyValuePair_2_t2979  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18806(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1095 *, KeyValuePair_2_t2979 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18806_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18807_gshared (Dictionary_2_t1095 * __this, KeyValuePair_2U5BU5D_t3316* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18807(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1095 *, KeyValuePair_2U5BU5D_t3316*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18807_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18808_gshared (Dictionary_2_t1095 * __this, KeyValuePair_2_t2979  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18808(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1095 *, KeyValuePair_2_t2979 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18808_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m18809_gshared (Dictionary_2_t1095 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18809(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1095 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18809_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18810_gshared (Dictionary_2_t1095 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18810(__this, method) (( Object_t * (*) (Dictionary_2_t1095 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18810_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18811_gshared (Dictionary_2_t1095 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18811(__this, method) (( Object_t* (*) (Dictionary_2_t1095 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18811_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18812_gshared (Dictionary_2_t1095 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18812(__this, method) (( Object_t * (*) (Dictionary_2_t1095 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18812_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m18813_gshared (Dictionary_2_t1095 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m18813(__this, method) (( int32_t (*) (Dictionary_2_t1095 *, const MethodInfo*))Dictionary_2_get_Count_m18813_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m18814_gshared (Dictionary_2_t1095 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m18814(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1095 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m18814_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m18815_gshared (Dictionary_2_t1095 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m18815(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1095 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m18815_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m18816_gshared (Dictionary_2_t1095 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m18816(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1095 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m18816_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m18817_gshared (Dictionary_2_t1095 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m18817(__this, ___size, method) (( void (*) (Dictionary_2_t1095 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m18817_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m18818_gshared (Dictionary_2_t1095 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m18818(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1095 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m18818_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2979  Dictionary_2_make_pair_m18819_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m18819(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2979  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m18819_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m18820_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m18820(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m18820_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m18821_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m18821(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m18821_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m18822_gshared (Dictionary_2_t1095 * __this, KeyValuePair_2U5BU5D_t3316* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m18822(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1095 *, KeyValuePair_2U5BU5D_t3316*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m18822_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m18823_gshared (Dictionary_2_t1095 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m18823(__this, method) (( void (*) (Dictionary_2_t1095 *, const MethodInfo*))Dictionary_2_Resize_m18823_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m18824_gshared (Dictionary_2_t1095 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m18824(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1095 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m18824_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m18825_gshared (Dictionary_2_t1095 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m18825(__this, method) (( void (*) (Dictionary_2_t1095 *, const MethodInfo*))Dictionary_2_Clear_m18825_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m18826_gshared (Dictionary_2_t1095 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m18826(__this, ___key, method) (( bool (*) (Dictionary_2_t1095 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m18826_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m18827_gshared (Dictionary_2_t1095 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m18827(__this, ___value, method) (( bool (*) (Dictionary_2_t1095 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m18827_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m18828_gshared (Dictionary_2_t1095 * __this, SerializationInfo_t731 * ___info, StreamingContext_t732  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m18828(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1095 *, SerializationInfo_t731 *, StreamingContext_t732 , const MethodInfo*))Dictionary_2_GetObjectData_m18828_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m18829_gshared (Dictionary_2_t1095 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m18829(__this, ___sender, method) (( void (*) (Dictionary_2_t1095 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18829_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m18830_gshared (Dictionary_2_t1095 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m18830(__this, ___key, method) (( bool (*) (Dictionary_2_t1095 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m18830_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m18831_gshared (Dictionary_2_t1095 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m18831(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1095 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m18831_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C" KeyCollection_t2981 * Dictionary_2_get_Keys_m18832_gshared (Dictionary_2_t1095 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m18832(__this, method) (( KeyCollection_t2981 * (*) (Dictionary_2_t1095 *, const MethodInfo*))Dictionary_2_get_Keys_m18832_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t2985 * Dictionary_2_get_Values_m18833_gshared (Dictionary_2_t1095 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m18833(__this, method) (( ValueCollection_t2985 * (*) (Dictionary_2_t1095 *, const MethodInfo*))Dictionary_2_get_Values_m18833_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m18834_gshared (Dictionary_2_t1095 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m18834(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1095 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m18834_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m18835_gshared (Dictionary_2_t1095 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m18835(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1095 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m18835_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m18836_gshared (Dictionary_2_t1095 * __this, KeyValuePair_2_t2979  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m18836(__this, ___pair, method) (( bool (*) (Dictionary_2_t1095 *, KeyValuePair_2_t2979 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18836_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2983  Dictionary_2_GetEnumerator_m18837_gshared (Dictionary_2_t1095 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m18837(__this, method) (( Enumerator_t2983  (*) (Dictionary_2_t1095 *, const MethodInfo*))Dictionary_2_GetEnumerator_m18837_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1159  Dictionary_2_U3CCopyToU3Em__0_m18838_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m18838(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1159  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18838_gshared)(__this /* static, unused */, ___key, ___value, method)
