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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2251;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1843;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t615;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t2432;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t61;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t2433;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t829;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2256;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m16803_gshared (Dictionary_2_t2251 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m16803(__this, method) (( void (*) (Dictionary_2_t2251 *, const MethodInfo*))Dictionary_2__ctor_m16803_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m16804_gshared (Dictionary_2_t2251 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m16804(__this, ___comparer, method) (( void (*) (Dictionary_2_t2251 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16804_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m16806_gshared (Dictionary_2_t2251 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m16806(__this, ___capacity, method) (( void (*) (Dictionary_2_t2251 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m16806_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m16808_gshared (Dictionary_2_t2251 * __this, SerializationInfo_t615 * ___info, StreamingContext_t616  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m16808(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2251 *, SerializationInfo_t615 *, StreamingContext_t616 , const MethodInfo*))Dictionary_2__ctor_m16808_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m16810_gshared (Dictionary_2_t2251 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m16810(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2251 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m16810_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m16812_gshared (Dictionary_2_t2251 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m16812(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2251 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m16812_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m16814_gshared (Dictionary_2_t2251 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m16814(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2251 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m16814_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m16816_gshared (Dictionary_2_t2251 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m16816(__this, ___key, method) (( bool (*) (Dictionary_2_t2251 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m16816_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m16818_gshared (Dictionary_2_t2251 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m16818(__this, ___key, method) (( void (*) (Dictionary_2_t2251 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m16818_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16820_gshared (Dictionary_2_t2251 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16820(__this, method) (( bool (*) (Dictionary_2_t2251 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16820_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16822_gshared (Dictionary_2_t2251 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16822(__this, method) (( Object_t * (*) (Dictionary_2_t2251 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16822_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16824_gshared (Dictionary_2_t2251 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16824(__this, method) (( bool (*) (Dictionary_2_t2251 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16824_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16826_gshared (Dictionary_2_t2251 * __this, KeyValuePair_2_t2253  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16826(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2251 *, KeyValuePair_2_t2253 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16826_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16828_gshared (Dictionary_2_t2251 * __this, KeyValuePair_2_t2253  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16828(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2251 *, KeyValuePair_2_t2253 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16828_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16830_gshared (Dictionary_2_t2251 * __this, KeyValuePair_2U5BU5D_t2432* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16830(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2251 *, KeyValuePair_2U5BU5D_t2432*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16830_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16832_gshared (Dictionary_2_t2251 * __this, KeyValuePair_2_t2253  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16832(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2251 *, KeyValuePair_2_t2253 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16832_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m16834_gshared (Dictionary_2_t2251 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m16834(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2251 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m16834_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16836_gshared (Dictionary_2_t2251 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16836(__this, method) (( Object_t * (*) (Dictionary_2_t2251 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16836_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16838_gshared (Dictionary_2_t2251 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16838(__this, method) (( Object_t* (*) (Dictionary_2_t2251 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16838_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16840_gshared (Dictionary_2_t2251 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16840(__this, method) (( Object_t * (*) (Dictionary_2_t2251 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16840_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m16842_gshared (Dictionary_2_t2251 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m16842(__this, method) (( int32_t (*) (Dictionary_2_t2251 *, const MethodInfo*))Dictionary_2_get_Count_m16842_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m16844_gshared (Dictionary_2_t2251 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m16844(__this, ___key, method) (( bool (*) (Dictionary_2_t2251 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m16844_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m16846_gshared (Dictionary_2_t2251 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m16846(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2251 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m16846_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m16848_gshared (Dictionary_2_t2251 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m16848(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2251 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m16848_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m16850_gshared (Dictionary_2_t2251 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m16850(__this, ___size, method) (( void (*) (Dictionary_2_t2251 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m16850_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m16852_gshared (Dictionary_2_t2251 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m16852(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2251 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m16852_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2253  Dictionary_2_make_pair_m16854_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m16854(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2253  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m16854_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m16856_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m16856(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m16856_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m16858_gshared (Dictionary_2_t2251 * __this, KeyValuePair_2U5BU5D_t2432* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m16858(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2251 *, KeyValuePair_2U5BU5D_t2432*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m16858_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m16860_gshared (Dictionary_2_t2251 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m16860(__this, method) (( void (*) (Dictionary_2_t2251 *, const MethodInfo*))Dictionary_2_Resize_m16860_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m16862_gshared (Dictionary_2_t2251 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m16862(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2251 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m16862_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m16864_gshared (Dictionary_2_t2251 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m16864(__this, method) (( void (*) (Dictionary_2_t2251 *, const MethodInfo*))Dictionary_2_Clear_m16864_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m16866_gshared (Dictionary_2_t2251 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m16866(__this, ___key, method) (( bool (*) (Dictionary_2_t2251 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m16866_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m16868_gshared (Dictionary_2_t2251 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m16868(__this, ___value, method) (( bool (*) (Dictionary_2_t2251 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m16868_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m16870_gshared (Dictionary_2_t2251 * __this, SerializationInfo_t615 * ___info, StreamingContext_t616  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m16870(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2251 *, SerializationInfo_t615 *, StreamingContext_t616 , const MethodInfo*))Dictionary_2_GetObjectData_m16870_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m16872_gshared (Dictionary_2_t2251 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m16872(__this, ___sender, method) (( void (*) (Dictionary_2_t2251 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m16872_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m16874_gshared (Dictionary_2_t2251 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m16874(__this, ___key, method) (( bool (*) (Dictionary_2_t2251 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m16874_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m16876_gshared (Dictionary_2_t2251 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m16876(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2251 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m16876_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t2256 * Dictionary_2_get_Values_m16878_gshared (Dictionary_2_t2251 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m16878(__this, method) (( ValueCollection_t2256 * (*) (Dictionary_2_t2251 *, const MethodInfo*))Dictionary_2_get_Values_m16878_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m16880_gshared (Dictionary_2_t2251 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m16880(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2251 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m16880_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m16882_gshared (Dictionary_2_t2251 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m16882(__this, ___value, method) (( bool (*) (Dictionary_2_t2251 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m16882_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m16884_gshared (Dictionary_2_t2251 * __this, KeyValuePair_2_t2253  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m16884(__this, ___pair, method) (( bool (*) (Dictionary_2_t2251 *, KeyValuePair_2_t2253 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m16884_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2258  Dictionary_2_GetEnumerator_m16886_gshared (Dictionary_2_t2251 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m16886(__this, method) (( Enumerator_t2258  (*) (Dictionary_2_t2251 *, const MethodInfo*))Dictionary_2_GetEnumerator_m16886_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1019  Dictionary_2_U3CCopyToU3Em__0_m16888_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m16888(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1019  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m16888_gshared)(__this /* static, unused */, ___key, ___value, method)
