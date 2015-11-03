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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1944;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1843;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t615;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2388;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t61;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2389;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t829;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t1948;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m12847_gshared (Dictionary_2_t1944 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m12847(__this, method) (( void (*) (Dictionary_2_t1944 *, const MethodInfo*))Dictionary_2__ctor_m12847_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12848_gshared (Dictionary_2_t1944 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12848(__this, ___comparer, method) (( void (*) (Dictionary_2_t1944 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12848_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12849_gshared (Dictionary_2_t1944 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m12849(__this, ___capacity, method) (( void (*) (Dictionary_2_t1944 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12849_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12850_gshared (Dictionary_2_t1944 * __this, SerializationInfo_t615 * ___info, StreamingContext_t616  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m12850(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1944 *, SerializationInfo_t615 *, StreamingContext_t616 , const MethodInfo*))Dictionary_2__ctor_m12850_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12851_gshared (Dictionary_2_t1944 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12851(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1944 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12851_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12852_gshared (Dictionary_2_t1944 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12852(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1944 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12852_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12853_gshared (Dictionary_2_t1944 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12853(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1944 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12853_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12854_gshared (Dictionary_2_t1944 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m12854(__this, ___key, method) (( bool (*) (Dictionary_2_t1944 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12854_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12855_gshared (Dictionary_2_t1944 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12855(__this, ___key, method) (( void (*) (Dictionary_2_t1944 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12855_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12856_gshared (Dictionary_2_t1944 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12856(__this, method) (( bool (*) (Dictionary_2_t1944 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12856_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12857_gshared (Dictionary_2_t1944 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12857(__this, method) (( Object_t * (*) (Dictionary_2_t1944 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12857_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12858_gshared (Dictionary_2_t1944 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12858(__this, method) (( bool (*) (Dictionary_2_t1944 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12858_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12859_gshared (Dictionary_2_t1944 * __this, KeyValuePair_2_t1946  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12859(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1944 *, KeyValuePair_2_t1946 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12859_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12860_gshared (Dictionary_2_t1944 * __this, KeyValuePair_2_t1946  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12860(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1944 *, KeyValuePair_2_t1946 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12860_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12861_gshared (Dictionary_2_t1944 * __this, KeyValuePair_2U5BU5D_t2388* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12861(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1944 *, KeyValuePair_2U5BU5D_t2388*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12861_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12862_gshared (Dictionary_2_t1944 * __this, KeyValuePair_2_t1946  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12862(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1944 *, KeyValuePair_2_t1946 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12862_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12863_gshared (Dictionary_2_t1944 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12863(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1944 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12863_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12864_gshared (Dictionary_2_t1944 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12864(__this, method) (( Object_t * (*) (Dictionary_2_t1944 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12864_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12865_gshared (Dictionary_2_t1944 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12865(__this, method) (( Object_t* (*) (Dictionary_2_t1944 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12865_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12866_gshared (Dictionary_2_t1944 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12866(__this, method) (( Object_t * (*) (Dictionary_2_t1944 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12866_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12867_gshared (Dictionary_2_t1944 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m12867(__this, method) (( int32_t (*) (Dictionary_2_t1944 *, const MethodInfo*))Dictionary_2_get_Count_m12867_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m12868_gshared (Dictionary_2_t1944 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m12868(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1944 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m12868_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12869_gshared (Dictionary_2_t1944 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m12869(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1944 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m12869_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12870_gshared (Dictionary_2_t1944 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m12870(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1944 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12870_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12871_gshared (Dictionary_2_t1944 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m12871(__this, ___size, method) (( void (*) (Dictionary_2_t1944 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12871_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12872_gshared (Dictionary_2_t1944 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12872(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1944 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12872_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1946  Dictionary_2_make_pair_m12873_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m12873(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1946  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m12873_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m12874_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m12874(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m12874_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12875_gshared (Dictionary_2_t1944 * __this, KeyValuePair_2U5BU5D_t2388* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m12875(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1944 *, KeyValuePair_2U5BU5D_t2388*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12875_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m12876_gshared (Dictionary_2_t1944 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m12876(__this, method) (( void (*) (Dictionary_2_t1944 *, const MethodInfo*))Dictionary_2_Resize_m12876_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12877_gshared (Dictionary_2_t1944 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m12877(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1944 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m12877_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m12878_gshared (Dictionary_2_t1944 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m12878(__this, method) (( void (*) (Dictionary_2_t1944 *, const MethodInfo*))Dictionary_2_Clear_m12878_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12879_gshared (Dictionary_2_t1944 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m12879(__this, ___key, method) (( bool (*) (Dictionary_2_t1944 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m12879_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12880_gshared (Dictionary_2_t1944 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m12880(__this, ___value, method) (( bool (*) (Dictionary_2_t1944 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m12880_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12881_gshared (Dictionary_2_t1944 * __this, SerializationInfo_t615 * ___info, StreamingContext_t616  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m12881(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1944 *, SerializationInfo_t615 *, StreamingContext_t616 , const MethodInfo*))Dictionary_2_GetObjectData_m12881_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12882_gshared (Dictionary_2_t1944 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12882(__this, ___sender, method) (( void (*) (Dictionary_2_t1944 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12882_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12883_gshared (Dictionary_2_t1944 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m12883(__this, ___key, method) (( bool (*) (Dictionary_2_t1944 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m12883_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12884_gshared (Dictionary_2_t1944 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m12884(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1944 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m12884_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t1948 * Dictionary_2_get_Values_m12885_gshared (Dictionary_2_t1944 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m12885(__this, method) (( ValueCollection_t1948 * (*) (Dictionary_2_t1944 *, const MethodInfo*))Dictionary_2_get_Values_m12885_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m12886_gshared (Dictionary_2_t1944 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m12886(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1944 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12886_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m12887_gshared (Dictionary_2_t1944 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m12887(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1944 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12887_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12888_gshared (Dictionary_2_t1944 * __this, KeyValuePair_2_t1946  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12888(__this, ___pair, method) (( bool (*) (Dictionary_2_t1944 *, KeyValuePair_2_t1946 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12888_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1950  Dictionary_2_GetEnumerator_m12889_gshared (Dictionary_2_t1944 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12889(__this, method) (( Enumerator_t1950  (*) (Dictionary_2_t1944 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12889_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1019  Dictionary_2_U3CCopyToU3Em__0_m12890_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12890(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1019  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12890_gshared)(__this /* static, unused */, ___key, ___value, method)
