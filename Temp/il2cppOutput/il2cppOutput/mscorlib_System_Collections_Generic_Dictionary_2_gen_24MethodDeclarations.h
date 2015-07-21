#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t2955;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t721;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t3307;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
struct KeyCollection_t2958;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t2962;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2499;
// System.Collections.Generic.IDictionary`2<System.Object,System.Byte>
struct IDictionary_2_t3308;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t731;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t3309;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t3310;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1158;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__20.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m18527_gshared (Dictionary_2_t2955 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m18527(__this, method) (( void (*) (Dictionary_2_t2955 *, const MethodInfo*))Dictionary_2__ctor_m18527_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18528_gshared (Dictionary_2_t2955 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m18528(__this, ___comparer, method) (( void (*) (Dictionary_2_t2955 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18528_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m18530_gshared (Dictionary_2_t2955 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m18530(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2955 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18530_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m18532_gshared (Dictionary_2_t2955 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m18532(__this, ___capacity, method) (( void (*) (Dictionary_2_t2955 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18532_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18534_gshared (Dictionary_2_t2955 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m18534(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2955 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18534_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m18536_gshared (Dictionary_2_t2955 * __this, SerializationInfo_t731 * ___info, StreamingContext_t732  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m18536(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2955 *, SerializationInfo_t731 *, StreamingContext_t732 , const MethodInfo*))Dictionary_2__ctor_m18536_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18538_gshared (Dictionary_2_t2955 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18538(__this, method) (( Object_t* (*) (Dictionary_2_t2955 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18538_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18540_gshared (Dictionary_2_t2955 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18540(__this, method) (( Object_t* (*) (Dictionary_2_t2955 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18540_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m18542_gshared (Dictionary_2_t2955 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18542(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2955 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18542_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m18544_gshared (Dictionary_2_t2955 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18544(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2955 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18544_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m18546_gshared (Dictionary_2_t2955 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m18546(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2955 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18546_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m18548_gshared (Dictionary_2_t2955 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m18548(__this, ___key, method) (( bool (*) (Dictionary_2_t2955 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18548_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m18550_gshared (Dictionary_2_t2955 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m18550(__this, ___key, method) (( void (*) (Dictionary_2_t2955 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18550_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18552_gshared (Dictionary_2_t2955 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18552(__this, method) (( bool (*) (Dictionary_2_t2955 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18552_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18554_gshared (Dictionary_2_t2955 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18554(__this, method) (( Object_t * (*) (Dictionary_2_t2955 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18554_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18556_gshared (Dictionary_2_t2955 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18556(__this, method) (( bool (*) (Dictionary_2_t2955 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18556_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18558_gshared (Dictionary_2_t2955 * __this, KeyValuePair_2_t2956  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18558(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2955 *, KeyValuePair_2_t2956 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18558_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18560_gshared (Dictionary_2_t2955 * __this, KeyValuePair_2_t2956  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18560(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2955 *, KeyValuePair_2_t2956 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18560_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18562_gshared (Dictionary_2_t2955 * __this, KeyValuePair_2U5BU5D_t3309* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18562(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2955 *, KeyValuePair_2U5BU5D_t3309*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18562_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18564_gshared (Dictionary_2_t2955 * __this, KeyValuePair_2_t2956  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18564(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2955 *, KeyValuePair_2_t2956 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18564_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m18566_gshared (Dictionary_2_t2955 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18566(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2955 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18566_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18568_gshared (Dictionary_2_t2955 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18568(__this, method) (( Object_t * (*) (Dictionary_2_t2955 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18568_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18570_gshared (Dictionary_2_t2955 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18570(__this, method) (( Object_t* (*) (Dictionary_2_t2955 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18570_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18572_gshared (Dictionary_2_t2955 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18572(__this, method) (( Object_t * (*) (Dictionary_2_t2955 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18572_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m18574_gshared (Dictionary_2_t2955 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m18574(__this, method) (( int32_t (*) (Dictionary_2_t2955 *, const MethodInfo*))Dictionary_2_get_Count_m18574_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m18576_gshared (Dictionary_2_t2955 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m18576(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t2955 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m18576_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m18578_gshared (Dictionary_2_t2955 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m18578(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2955 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m18578_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m18580_gshared (Dictionary_2_t2955 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m18580(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2955 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m18580_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m18582_gshared (Dictionary_2_t2955 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m18582(__this, ___size, method) (( void (*) (Dictionary_2_t2955 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m18582_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m18584_gshared (Dictionary_2_t2955 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m18584(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2955 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m18584_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2956  Dictionary_2_make_pair_m18586_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m18586(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2956  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m18586_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m18588_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m18588(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m18588_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m18590_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m18590(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m18590_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m18592_gshared (Dictionary_2_t2955 * __this, KeyValuePair_2U5BU5D_t3309* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m18592(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2955 *, KeyValuePair_2U5BU5D_t3309*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m18592_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m18594_gshared (Dictionary_2_t2955 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m18594(__this, method) (( void (*) (Dictionary_2_t2955 *, const MethodInfo*))Dictionary_2_Resize_m18594_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m18596_gshared (Dictionary_2_t2955 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m18596(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2955 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_Add_m18596_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m18598_gshared (Dictionary_2_t2955 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m18598(__this, method) (( void (*) (Dictionary_2_t2955 *, const MethodInfo*))Dictionary_2_Clear_m18598_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m18600_gshared (Dictionary_2_t2955 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m18600(__this, ___key, method) (( bool (*) (Dictionary_2_t2955 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m18600_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m18602_gshared (Dictionary_2_t2955 * __this, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m18602(__this, ___value, method) (( bool (*) (Dictionary_2_t2955 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m18602_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m18604_gshared (Dictionary_2_t2955 * __this, SerializationInfo_t731 * ___info, StreamingContext_t732  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m18604(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2955 *, SerializationInfo_t731 *, StreamingContext_t732 , const MethodInfo*))Dictionary_2_GetObjectData_m18604_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m18606_gshared (Dictionary_2_t2955 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m18606(__this, ___sender, method) (( void (*) (Dictionary_2_t2955 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18606_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m18608_gshared (Dictionary_2_t2955 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m18608(__this, ___key, method) (( bool (*) (Dictionary_2_t2955 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m18608_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m18610_gshared (Dictionary_2_t2955 * __this, Object_t * ___key, uint8_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m18610(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2955 *, Object_t *, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m18610_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Keys()
extern "C" KeyCollection_t2958 * Dictionary_2_get_Keys_m18612_gshared (Dictionary_2_t2955 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m18612(__this, method) (( KeyCollection_t2958 * (*) (Dictionary_2_t2955 *, const MethodInfo*))Dictionary_2_get_Keys_m18612_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C" ValueCollection_t2962 * Dictionary_2_get_Values_m18614_gshared (Dictionary_2_t2955 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m18614(__this, method) (( ValueCollection_t2962 * (*) (Dictionary_2_t2955 *, const MethodInfo*))Dictionary_2_get_Values_m18614_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m18616_gshared (Dictionary_2_t2955 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m18616(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2955 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m18616_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m18618_gshared (Dictionary_2_t2955 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m18618(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t2955 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m18618_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m18620_gshared (Dictionary_2_t2955 * __this, KeyValuePair_2_t2956  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m18620(__this, ___pair, method) (( bool (*) (Dictionary_2_t2955 *, KeyValuePair_2_t2956 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18620_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t2960  Dictionary_2_GetEnumerator_m18622_gshared (Dictionary_2_t2955 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m18622(__this, method) (( Enumerator_t2960  (*) (Dictionary_2_t2955 *, const MethodInfo*))Dictionary_2_GetEnumerator_m18622_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1159  Dictionary_2_U3CCopyToU3Em__0_m18624_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m18624(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1159  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18624_gshared)(__this /* static, unused */, ___key, ___value, method)
