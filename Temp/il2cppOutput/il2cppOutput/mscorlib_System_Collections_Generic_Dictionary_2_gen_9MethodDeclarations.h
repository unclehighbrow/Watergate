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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1994;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1843;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t615;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2395;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t61;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2396;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t829;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t1998;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m13389_gshared (Dictionary_2_t1994 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m13389(__this, method) (( void (*) (Dictionary_2_t1994 *, const MethodInfo*))Dictionary_2__ctor_m13389_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13391_gshared (Dictionary_2_t1994 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m13391(__this, ___comparer, method) (( void (*) (Dictionary_2_t1994 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13391_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m13393_gshared (Dictionary_2_t1994 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m13393(__this, ___capacity, method) (( void (*) (Dictionary_2_t1994 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m13393_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m13395_gshared (Dictionary_2_t1994 * __this, SerializationInfo_t615 * ___info, StreamingContext_t616  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m13395(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1994 *, SerializationInfo_t615 *, StreamingContext_t616 , const MethodInfo*))Dictionary_2__ctor_m13395_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m13397_gshared (Dictionary_2_t1994 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m13397(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1994 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m13397_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m13399_gshared (Dictionary_2_t1994 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m13399(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1994 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m13399_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m13401_gshared (Dictionary_2_t1994 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m13401(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1994 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13401_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m13403_gshared (Dictionary_2_t1994 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m13403(__this, ___key, method) (( bool (*) (Dictionary_2_t1994 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m13403_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m13405_gshared (Dictionary_2_t1994 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m13405(__this, ___key, method) (( void (*) (Dictionary_2_t1994 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13405_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13407_gshared (Dictionary_2_t1994 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13407(__this, method) (( bool (*) (Dictionary_2_t1994 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13407_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13409_gshared (Dictionary_2_t1994 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13409(__this, method) (( Object_t * (*) (Dictionary_2_t1994 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13409_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13411_gshared (Dictionary_2_t1994 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13411(__this, method) (( bool (*) (Dictionary_2_t1994 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13411_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13413_gshared (Dictionary_2_t1994 * __this, KeyValuePair_2_t1996  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13413(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1994 *, KeyValuePair_2_t1996 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13413_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13415_gshared (Dictionary_2_t1994 * __this, KeyValuePair_2_t1996  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13415(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1994 *, KeyValuePair_2_t1996 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13415_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13417_gshared (Dictionary_2_t1994 * __this, KeyValuePair_2U5BU5D_t2395* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13417(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1994 *, KeyValuePair_2U5BU5D_t2395*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13417_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13419_gshared (Dictionary_2_t1994 * __this, KeyValuePair_2_t1996  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13419(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1994 *, KeyValuePair_2_t1996 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13419_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m13421_gshared (Dictionary_2_t1994 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13421(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1994 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13421_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13423_gshared (Dictionary_2_t1994 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13423(__this, method) (( Object_t * (*) (Dictionary_2_t1994 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13423_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13425_gshared (Dictionary_2_t1994 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13425(__this, method) (( Object_t* (*) (Dictionary_2_t1994 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13425_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13427_gshared (Dictionary_2_t1994 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13427(__this, method) (( Object_t * (*) (Dictionary_2_t1994 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13427_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m13429_gshared (Dictionary_2_t1994 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m13429(__this, method) (( int32_t (*) (Dictionary_2_t1994 *, const MethodInfo*))Dictionary_2_get_Count_m13429_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m13431_gshared (Dictionary_2_t1994 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m13431(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1994 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m13431_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m13433_gshared (Dictionary_2_t1994 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m13433(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1994 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m13433_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m13435_gshared (Dictionary_2_t1994 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m13435(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1994 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m13435_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m13437_gshared (Dictionary_2_t1994 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m13437(__this, ___size, method) (( void (*) (Dictionary_2_t1994 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m13437_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m13439_gshared (Dictionary_2_t1994 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m13439(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1994 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m13439_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1996  Dictionary_2_make_pair_m13441_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m13441(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1996  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m13441_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m13443_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m13443(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m13443_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m13445_gshared (Dictionary_2_t1994 * __this, KeyValuePair_2U5BU5D_t2395* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m13445(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1994 *, KeyValuePair_2U5BU5D_t2395*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m13445_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m13447_gshared (Dictionary_2_t1994 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m13447(__this, method) (( void (*) (Dictionary_2_t1994 *, const MethodInfo*))Dictionary_2_Resize_m13447_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m13449_gshared (Dictionary_2_t1994 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m13449(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1994 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m13449_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m13451_gshared (Dictionary_2_t1994 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m13451(__this, method) (( void (*) (Dictionary_2_t1994 *, const MethodInfo*))Dictionary_2_Clear_m13451_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m13453_gshared (Dictionary_2_t1994 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m13453(__this, ___key, method) (( bool (*) (Dictionary_2_t1994 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m13453_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m13455_gshared (Dictionary_2_t1994 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m13455(__this, ___value, method) (( bool (*) (Dictionary_2_t1994 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m13455_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m13457_gshared (Dictionary_2_t1994 * __this, SerializationInfo_t615 * ___info, StreamingContext_t616  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m13457(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1994 *, SerializationInfo_t615 *, StreamingContext_t616 , const MethodInfo*))Dictionary_2_GetObjectData_m13457_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m13459_gshared (Dictionary_2_t1994 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m13459(__this, ___sender, method) (( void (*) (Dictionary_2_t1994 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m13459_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m13461_gshared (Dictionary_2_t1994 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m13461(__this, ___key, method) (( bool (*) (Dictionary_2_t1994 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m13461_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m13463_gshared (Dictionary_2_t1994 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m13463(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1994 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m13463_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t1998 * Dictionary_2_get_Values_m13465_gshared (Dictionary_2_t1994 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m13465(__this, method) (( ValueCollection_t1998 * (*) (Dictionary_2_t1994 *, const MethodInfo*))Dictionary_2_get_Values_m13465_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m13467_gshared (Dictionary_2_t1994 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m13467(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1994 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m13467_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m13469_gshared (Dictionary_2_t1994 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m13469(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1994 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m13469_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13471_gshared (Dictionary_2_t1994 * __this, KeyValuePair_2_t1996  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m13471(__this, ___pair, method) (( bool (*) (Dictionary_2_t1994 *, KeyValuePair_2_t1996 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13471_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2000  Dictionary_2_GetEnumerator_m13473_gshared (Dictionary_2_t1994 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m13473(__this, method) (( Enumerator_t2000  (*) (Dictionary_2_t1994 *, const MethodInfo*))Dictionary_2_GetEnumerator_m13473_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1019  Dictionary_2_U3CCopyToU3Em__0_m13475_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m13475(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1019  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13475_gshared)(__this /* static, unused */, ___key, ___value, method)
