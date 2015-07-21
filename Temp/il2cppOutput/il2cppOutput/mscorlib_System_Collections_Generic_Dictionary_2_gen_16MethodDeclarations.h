#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2620;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t721;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t2623;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t2627;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2499;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t3130;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t731;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2886;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t3131;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1158;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m13875_gshared (Dictionary_2_t2620 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m13875(__this, method) (( void (*) (Dictionary_2_t2620 *, const MethodInfo*))Dictionary_2__ctor_m13875_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13877_gshared (Dictionary_2_t2620 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m13877(__this, ___comparer, method) (( void (*) (Dictionary_2_t2620 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13877_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m13879_gshared (Dictionary_2_t2620 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m13879(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2620 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13879_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m13881_gshared (Dictionary_2_t2620 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m13881(__this, ___capacity, method) (( void (*) (Dictionary_2_t2620 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m13881_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13883_gshared (Dictionary_2_t2620 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m13883(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2620 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13883_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m13885_gshared (Dictionary_2_t2620 * __this, SerializationInfo_t731 * ___info, StreamingContext_t732  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m13885(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2620 *, SerializationInfo_t731 *, StreamingContext_t732 , const MethodInfo*))Dictionary_2__ctor_m13885_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13887_gshared (Dictionary_2_t2620 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13887(__this, method) (( Object_t* (*) (Dictionary_2_t2620 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13887_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13889_gshared (Dictionary_2_t2620 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13889(__this, method) (( Object_t* (*) (Dictionary_2_t2620 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13889_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m13891_gshared (Dictionary_2_t2620 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m13891(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2620 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m13891_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m13893_gshared (Dictionary_2_t2620 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m13893(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2620 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m13893_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m13895_gshared (Dictionary_2_t2620 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m13895(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2620 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13895_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m13897_gshared (Dictionary_2_t2620 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m13897(__this, ___key, method) (( bool (*) (Dictionary_2_t2620 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m13897_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m13899_gshared (Dictionary_2_t2620 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m13899(__this, ___key, method) (( void (*) (Dictionary_2_t2620 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13899_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13901_gshared (Dictionary_2_t2620 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13901(__this, method) (( bool (*) (Dictionary_2_t2620 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13901_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13903_gshared (Dictionary_2_t2620 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13903(__this, method) (( Object_t * (*) (Dictionary_2_t2620 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13903_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13905_gshared (Dictionary_2_t2620 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13905(__this, method) (( bool (*) (Dictionary_2_t2620 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13905_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13907_gshared (Dictionary_2_t2620 * __this, KeyValuePair_2_t2621  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13907(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2620 *, KeyValuePair_2_t2621 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13907_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13909_gshared (Dictionary_2_t2620 * __this, KeyValuePair_2_t2621  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13909(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2620 *, KeyValuePair_2_t2621 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13909_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13911_gshared (Dictionary_2_t2620 * __this, KeyValuePair_2U5BU5D_t2886* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13911(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2620 *, KeyValuePair_2U5BU5D_t2886*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13911_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13913_gshared (Dictionary_2_t2620 * __this, KeyValuePair_2_t2621  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13913(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2620 *, KeyValuePair_2_t2621 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13913_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m13915_gshared (Dictionary_2_t2620 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13915(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2620 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13915_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13917_gshared (Dictionary_2_t2620 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13917(__this, method) (( Object_t * (*) (Dictionary_2_t2620 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13917_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13919_gshared (Dictionary_2_t2620 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13919(__this, method) (( Object_t* (*) (Dictionary_2_t2620 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13919_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13921_gshared (Dictionary_2_t2620 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13921(__this, method) (( Object_t * (*) (Dictionary_2_t2620 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13921_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m13923_gshared (Dictionary_2_t2620 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m13923(__this, method) (( int32_t (*) (Dictionary_2_t2620 *, const MethodInfo*))Dictionary_2_get_Count_m13923_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m13925_gshared (Dictionary_2_t2620 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m13925(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2620 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m13925_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m13927_gshared (Dictionary_2_t2620 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m13927(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2620 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m13927_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m13929_gshared (Dictionary_2_t2620 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m13929(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2620 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m13929_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m13931_gshared (Dictionary_2_t2620 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m13931(__this, ___size, method) (( void (*) (Dictionary_2_t2620 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m13931_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m13933_gshared (Dictionary_2_t2620 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m13933(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2620 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m13933_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2621  Dictionary_2_make_pair_m13935_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m13935(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2621  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m13935_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m13937_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m13937(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m13937_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m13939_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m13939(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m13939_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m13941_gshared (Dictionary_2_t2620 * __this, KeyValuePair_2U5BU5D_t2886* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m13941(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2620 *, KeyValuePair_2U5BU5D_t2886*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m13941_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m13943_gshared (Dictionary_2_t2620 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m13943(__this, method) (( void (*) (Dictionary_2_t2620 *, const MethodInfo*))Dictionary_2_Resize_m13943_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m13945_gshared (Dictionary_2_t2620 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m13945(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2620 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m13945_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m13947_gshared (Dictionary_2_t2620 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m13947(__this, method) (( void (*) (Dictionary_2_t2620 *, const MethodInfo*))Dictionary_2_Clear_m13947_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m13949_gshared (Dictionary_2_t2620 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m13949(__this, ___key, method) (( bool (*) (Dictionary_2_t2620 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m13949_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m13951_gshared (Dictionary_2_t2620 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m13951(__this, ___value, method) (( bool (*) (Dictionary_2_t2620 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m13951_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m13953_gshared (Dictionary_2_t2620 * __this, SerializationInfo_t731 * ___info, StreamingContext_t732  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m13953(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2620 *, SerializationInfo_t731 *, StreamingContext_t732 , const MethodInfo*))Dictionary_2_GetObjectData_m13953_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m13955_gshared (Dictionary_2_t2620 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m13955(__this, ___sender, method) (( void (*) (Dictionary_2_t2620 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m13955_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m13957_gshared (Dictionary_2_t2620 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m13957(__this, ___key, method) (( bool (*) (Dictionary_2_t2620 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m13957_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m13959_gshared (Dictionary_2_t2620 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m13959(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2620 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m13959_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t2623 * Dictionary_2_get_Keys_m13961_gshared (Dictionary_2_t2620 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m13961(__this, method) (( KeyCollection_t2623 * (*) (Dictionary_2_t2620 *, const MethodInfo*))Dictionary_2_get_Keys_m13961_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t2627 * Dictionary_2_get_Values_m13963_gshared (Dictionary_2_t2620 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m13963(__this, method) (( ValueCollection_t2627 * (*) (Dictionary_2_t2620 *, const MethodInfo*))Dictionary_2_get_Values_m13963_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m13965_gshared (Dictionary_2_t2620 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m13965(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2620 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m13965_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m13967_gshared (Dictionary_2_t2620 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m13967(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2620 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m13967_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13969_gshared (Dictionary_2_t2620 * __this, KeyValuePair_2_t2621  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m13969(__this, ___pair, method) (( bool (*) (Dictionary_2_t2620 *, KeyValuePair_2_t2621 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13969_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2625  Dictionary_2_GetEnumerator_m13971_gshared (Dictionary_2_t2620 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m13971(__this, method) (( Enumerator_t2625  (*) (Dictionary_2_t2620 *, const MethodInfo*))Dictionary_2_GetEnumerator_m13971_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1159  Dictionary_2_U3CCopyToU3Em__0_m13973_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m13973(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1159  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13973_gshared)(__this /* static, unused */, ___key, ___value, method)
