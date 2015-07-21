#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t2888;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t721;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t3279;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct KeyCollection_t2889;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ValueCollection_t2893;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2499;
// System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IDictionary_2_t3280;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t731;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>[]
struct KeyValuePair_2U5BU5D_t3281;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
struct IEnumerator_1_t3282;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1158;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__17.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void Dictionary_2__ctor_m17809_gshared (Dictionary_2_t2888 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m17809(__this, method) (( void (*) (Dictionary_2_t2888 *, const MethodInfo*))Dictionary_2__ctor_m17809_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17811_gshared (Dictionary_2_t2888 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17811(__this, ___comparer, method) (( void (*) (Dictionary_2_t2888 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17811_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m17813_gshared (Dictionary_2_t2888 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m17813(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2888 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17813_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m17815_gshared (Dictionary_2_t2888 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m17815(__this, ___capacity, method) (( void (*) (Dictionary_2_t2888 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17815_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17817_gshared (Dictionary_2_t2888 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17817(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2888 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17817_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m17819_gshared (Dictionary_2_t2888 * __this, SerializationInfo_t731 * ___info, StreamingContext_t732  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m17819(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2888 *, SerializationInfo_t731 *, StreamingContext_t732 , const MethodInfo*))Dictionary_2__ctor_m17819_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17821_gshared (Dictionary_2_t2888 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17821(__this, method) (( Object_t* (*) (Dictionary_2_t2888 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17821_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17823_gshared (Dictionary_2_t2888 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17823(__this, method) (( Object_t* (*) (Dictionary_2_t2888 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17823_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m17825_gshared (Dictionary_2_t2888 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17825(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2888 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17825_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m17827_gshared (Dictionary_2_t2888 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17827(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2888 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17827_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m17829_gshared (Dictionary_2_t2888 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m17829(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2888 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17829_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m17831_gshared (Dictionary_2_t2888 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m17831(__this, ___key, method) (( bool (*) (Dictionary_2_t2888 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17831_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m17833_gshared (Dictionary_2_t2888 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m17833(__this, ___key, method) (( void (*) (Dictionary_2_t2888 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17833_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17835_gshared (Dictionary_2_t2888 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17835(__this, method) (( bool (*) (Dictionary_2_t2888 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17835_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17837_gshared (Dictionary_2_t2888 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17837(__this, method) (( Object_t * (*) (Dictionary_2_t2888 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17837_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17839_gshared (Dictionary_2_t2888 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17839(__this, method) (( bool (*) (Dictionary_2_t2888 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17839_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17841_gshared (Dictionary_2_t2888 * __this, KeyValuePair_2_t2862  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17841(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2888 *, KeyValuePair_2_t2862 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17841_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17843_gshared (Dictionary_2_t2888 * __this, KeyValuePair_2_t2862  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17843(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2888 *, KeyValuePair_2_t2862 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17843_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17845_gshared (Dictionary_2_t2888 * __this, KeyValuePair_2U5BU5D_t3281* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17845(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2888 *, KeyValuePair_2U5BU5D_t3281*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17845_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17847_gshared (Dictionary_2_t2888 * __this, KeyValuePair_2_t2862  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17847(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2888 *, KeyValuePair_2_t2862 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17847_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m17849_gshared (Dictionary_2_t2888 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17849(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2888 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17849_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17851_gshared (Dictionary_2_t2888 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17851(__this, method) (( Object_t * (*) (Dictionary_2_t2888 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17851_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17853_gshared (Dictionary_2_t2888 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17853(__this, method) (( Object_t* (*) (Dictionary_2_t2888 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17853_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17855_gshared (Dictionary_2_t2888 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17855(__this, method) (( Object_t * (*) (Dictionary_2_t2888 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17855_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m17857_gshared (Dictionary_2_t2888 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m17857(__this, method) (( int32_t (*) (Dictionary_2_t2888 *, const MethodInfo*))Dictionary_2_get_Count_m17857_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(TKey)
extern "C" KeyValuePair_2_t2621  Dictionary_2_get_Item_m17859_gshared (Dictionary_2_t2888 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m17859(__this, ___key, method) (( KeyValuePair_2_t2621  (*) (Dictionary_2_t2888 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m17859_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m17861_gshared (Dictionary_2_t2888 * __this, Object_t * ___key, KeyValuePair_2_t2621  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m17861(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2888 *, Object_t *, KeyValuePair_2_t2621 , const MethodInfo*))Dictionary_2_set_Item_m17861_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m17863_gshared (Dictionary_2_t2888 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m17863(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2888 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17863_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m17865_gshared (Dictionary_2_t2888 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m17865(__this, ___size, method) (( void (*) (Dictionary_2_t2888 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17865_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m17867_gshared (Dictionary_2_t2888 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m17867(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2888 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17867_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2862  Dictionary_2_make_pair_m17869_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2621  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m17869(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2862  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t2621 , const MethodInfo*))Dictionary_2_make_pair_m17869_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m17871_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2621  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m17871(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t2621 , const MethodInfo*))Dictionary_2_pick_key_m17871_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_value(TKey,TValue)
extern "C" KeyValuePair_2_t2621  Dictionary_2_pick_value_m17873_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2621  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m17873(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2621  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t2621 , const MethodInfo*))Dictionary_2_pick_value_m17873_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m17875_gshared (Dictionary_2_t2888 * __this, KeyValuePair_2U5BU5D_t3281* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m17875(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2888 *, KeyValuePair_2U5BU5D_t3281*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17875_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Resize()
extern "C" void Dictionary_2_Resize_m17877_gshared (Dictionary_2_t2888 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m17877(__this, method) (( void (*) (Dictionary_2_t2888 *, const MethodInfo*))Dictionary_2_Resize_m17877_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m17879_gshared (Dictionary_2_t2888 * __this, Object_t * ___key, KeyValuePair_2_t2621  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m17879(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2888 *, Object_t *, KeyValuePair_2_t2621 , const MethodInfo*))Dictionary_2_Add_m17879_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void Dictionary_2_Clear_m17881_gshared (Dictionary_2_t2888 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m17881(__this, method) (( void (*) (Dictionary_2_t2888 *, const MethodInfo*))Dictionary_2_Clear_m17881_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m17883_gshared (Dictionary_2_t2888 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m17883(__this, ___key, method) (( bool (*) (Dictionary_2_t2888 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m17883_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m17885_gshared (Dictionary_2_t2888 * __this, KeyValuePair_2_t2621  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m17885(__this, ___value, method) (( bool (*) (Dictionary_2_t2888 *, KeyValuePair_2_t2621 , const MethodInfo*))Dictionary_2_ContainsValue_m17885_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m17887_gshared (Dictionary_2_t2888 * __this, SerializationInfo_t731 * ___info, StreamingContext_t732  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m17887(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2888 *, SerializationInfo_t731 *, StreamingContext_t732 , const MethodInfo*))Dictionary_2_GetObjectData_m17887_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m17889_gshared (Dictionary_2_t2888 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m17889(__this, ___sender, method) (( void (*) (Dictionary_2_t2888 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17889_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m17891_gshared (Dictionary_2_t2888 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m17891(__this, ___key, method) (( bool (*) (Dictionary_2_t2888 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m17891_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m17893_gshared (Dictionary_2_t2888 * __this, Object_t * ___key, KeyValuePair_2_t2621 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m17893(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2888 *, Object_t *, KeyValuePair_2_t2621 *, const MethodInfo*))Dictionary_2_TryGetValue_m17893_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Keys()
extern "C" KeyCollection_t2889 * Dictionary_2_get_Keys_m17895_gshared (Dictionary_2_t2888 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m17895(__this, method) (( KeyCollection_t2889 * (*) (Dictionary_2_t2888 *, const MethodInfo*))Dictionary_2_get_Keys_m17895_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Values()
extern "C" ValueCollection_t2893 * Dictionary_2_get_Values_m17897_gshared (Dictionary_2_t2888 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m17897(__this, method) (( ValueCollection_t2893 * (*) (Dictionary_2_t2888 *, const MethodInfo*))Dictionary_2_get_Values_m17897_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m17899_gshared (Dictionary_2_t2888 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m17899(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2888 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17899_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTValue(System.Object)
extern "C" KeyValuePair_2_t2621  Dictionary_2_ToTValue_m17901_gshared (Dictionary_2_t2888 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m17901(__this, ___value, method) (( KeyValuePair_2_t2621  (*) (Dictionary_2_t2888 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17901_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m17903_gshared (Dictionary_2_t2888 * __this, KeyValuePair_2_t2862  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m17903(__this, ___pair, method) (( bool (*) (Dictionary_2_t2888 *, KeyValuePair_2_t2862 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17903_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t2891  Dictionary_2_GetEnumerator_m17905_gshared (Dictionary_2_t2888 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m17905(__this, method) (( Enumerator_t2891  (*) (Dictionary_2_t2888 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17905_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1159  Dictionary_2_U3CCopyToU3Em__0_m17907_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2621  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m17907(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1159  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t2621 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17907_gshared)(__this /* static, unused */, ___key, ___value, method)
