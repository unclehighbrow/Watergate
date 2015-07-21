#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2592;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t721;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3099;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t2597;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t2601;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2499;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t3114;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t731;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t3115;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t3116;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1158;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m13636_gshared (Dictionary_2_t2592 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m13636(__this, method) (( void (*) (Dictionary_2_t2592 *, const MethodInfo*))Dictionary_2__ctor_m13636_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13637_gshared (Dictionary_2_t2592 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m13637(__this, ___comparer, method) (( void (*) (Dictionary_2_t2592 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13637_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m13638_gshared (Dictionary_2_t2592 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m13638(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2592 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13638_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m13639_gshared (Dictionary_2_t2592 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m13639(__this, ___capacity, method) (( void (*) (Dictionary_2_t2592 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m13639_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13640_gshared (Dictionary_2_t2592 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m13640(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2592 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13640_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m13641_gshared (Dictionary_2_t2592 * __this, SerializationInfo_t731 * ___info, StreamingContext_t732  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m13641(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2592 *, SerializationInfo_t731 *, StreamingContext_t732 , const MethodInfo*))Dictionary_2__ctor_m13641_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13642_gshared (Dictionary_2_t2592 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13642(__this, method) (( Object_t* (*) (Dictionary_2_t2592 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13642_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13643_gshared (Dictionary_2_t2592 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13643(__this, method) (( Object_t* (*) (Dictionary_2_t2592 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13643_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m13644_gshared (Dictionary_2_t2592 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m13644(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2592 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m13644_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m13645_gshared (Dictionary_2_t2592 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m13645(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2592 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m13645_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m13646_gshared (Dictionary_2_t2592 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m13646(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2592 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13646_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m13647_gshared (Dictionary_2_t2592 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m13647(__this, ___key, method) (( bool (*) (Dictionary_2_t2592 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m13647_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m13648_gshared (Dictionary_2_t2592 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m13648(__this, ___key, method) (( void (*) (Dictionary_2_t2592 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13648_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13649_gshared (Dictionary_2_t2592 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13649(__this, method) (( bool (*) (Dictionary_2_t2592 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13649_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13650_gshared (Dictionary_2_t2592 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13650(__this, method) (( Object_t * (*) (Dictionary_2_t2592 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13650_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13651_gshared (Dictionary_2_t2592 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13651(__this, method) (( bool (*) (Dictionary_2_t2592 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13651_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13652_gshared (Dictionary_2_t2592 * __this, KeyValuePair_2_t2595  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13652(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2592 *, KeyValuePair_2_t2595 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13652_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13653_gshared (Dictionary_2_t2592 * __this, KeyValuePair_2_t2595  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13653(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2592 *, KeyValuePair_2_t2595 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13653_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13654_gshared (Dictionary_2_t2592 * __this, KeyValuePair_2U5BU5D_t3115* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13654(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2592 *, KeyValuePair_2U5BU5D_t3115*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13654_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13655_gshared (Dictionary_2_t2592 * __this, KeyValuePair_2_t2595  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13655(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2592 *, KeyValuePair_2_t2595 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13655_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m13656_gshared (Dictionary_2_t2592 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13656(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2592 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13656_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13657_gshared (Dictionary_2_t2592 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13657(__this, method) (( Object_t * (*) (Dictionary_2_t2592 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13657_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13658_gshared (Dictionary_2_t2592 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13658(__this, method) (( Object_t* (*) (Dictionary_2_t2592 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13658_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13659_gshared (Dictionary_2_t2592 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13659(__this, method) (( Object_t * (*) (Dictionary_2_t2592 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13659_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m13660_gshared (Dictionary_2_t2592 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m13660(__this, method) (( int32_t (*) (Dictionary_2_t2592 *, const MethodInfo*))Dictionary_2_get_Count_m13660_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m13661_gshared (Dictionary_2_t2592 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m13661(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2592 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m13661_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m13662_gshared (Dictionary_2_t2592 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m13662(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2592 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m13662_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m13663_gshared (Dictionary_2_t2592 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m13663(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2592 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m13663_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m13664_gshared (Dictionary_2_t2592 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m13664(__this, ___size, method) (( void (*) (Dictionary_2_t2592 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m13664_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m13665_gshared (Dictionary_2_t2592 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m13665(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2592 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m13665_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2595  Dictionary_2_make_pair_m13666_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m13666(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2595  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m13666_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m13667_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m13667(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m13667_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m13668_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m13668(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m13668_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m13669_gshared (Dictionary_2_t2592 * __this, KeyValuePair_2U5BU5D_t3115* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m13669(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2592 *, KeyValuePair_2U5BU5D_t3115*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m13669_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m13670_gshared (Dictionary_2_t2592 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m13670(__this, method) (( void (*) (Dictionary_2_t2592 *, const MethodInfo*))Dictionary_2_Resize_m13670_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m13671_gshared (Dictionary_2_t2592 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m13671(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2592 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m13671_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m13672_gshared (Dictionary_2_t2592 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m13672(__this, method) (( void (*) (Dictionary_2_t2592 *, const MethodInfo*))Dictionary_2_Clear_m13672_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m13673_gshared (Dictionary_2_t2592 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m13673(__this, ___key, method) (( bool (*) (Dictionary_2_t2592 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m13673_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m13674_gshared (Dictionary_2_t2592 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m13674(__this, ___value, method) (( bool (*) (Dictionary_2_t2592 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m13674_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m13675_gshared (Dictionary_2_t2592 * __this, SerializationInfo_t731 * ___info, StreamingContext_t732  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m13675(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2592 *, SerializationInfo_t731 *, StreamingContext_t732 , const MethodInfo*))Dictionary_2_GetObjectData_m13675_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m13676_gshared (Dictionary_2_t2592 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m13676(__this, ___sender, method) (( void (*) (Dictionary_2_t2592 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m13676_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m13677_gshared (Dictionary_2_t2592 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m13677(__this, ___key, method) (( bool (*) (Dictionary_2_t2592 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m13677_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m13678_gshared (Dictionary_2_t2592 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m13678(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2592 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m13678_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t2597 * Dictionary_2_get_Keys_m13679_gshared (Dictionary_2_t2592 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m13679(__this, method) (( KeyCollection_t2597 * (*) (Dictionary_2_t2592 *, const MethodInfo*))Dictionary_2_get_Keys_m13679_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t2601 * Dictionary_2_get_Values_m13680_gshared (Dictionary_2_t2592 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m13680(__this, method) (( ValueCollection_t2601 * (*) (Dictionary_2_t2592 *, const MethodInfo*))Dictionary_2_get_Values_m13680_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m13681_gshared (Dictionary_2_t2592 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m13681(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2592 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m13681_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m13682_gshared (Dictionary_2_t2592 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m13682(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2592 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m13682_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13683_gshared (Dictionary_2_t2592 * __this, KeyValuePair_2_t2595  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m13683(__this, ___pair, method) (( bool (*) (Dictionary_2_t2592 *, KeyValuePair_2_t2595 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13683_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2599  Dictionary_2_GetEnumerator_m13684_gshared (Dictionary_2_t2592 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m13684(__this, method) (( Enumerator_t2599  (*) (Dictionary_2_t2592 *, const MethodInfo*))Dictionary_2_GetEnumerator_m13684_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1159  Dictionary_2_U3CCopyToU3Em__0_m13685_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m13685(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1159  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13685_gshared)(__this /* static, unused */, ___key, ___value, method)
