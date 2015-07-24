#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t1031;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t721;
// System.Collections.Generic.ICollection`1<System.Boolean>
struct ICollection_1_t3304;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>
struct KeyCollection_t2972;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>
struct ValueCollection_t2973;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2416;
// System.Collections.Generic.IDictionary`2<System.String,System.Boolean>
struct IDictionary_2_t3305;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t732;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t3306;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
struct IEnumerator_1_t3307;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1159;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__21.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_24MethodDeclarations.h"
#define Dictionary_2__ctor_m18534(__this, method) (( void (*) (Dictionary_2_t1031 *, const MethodInfo*))Dictionary_2__ctor_m18535_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m4903(__this, ___comparer, method) (( void (*) (Dictionary_2_t1031 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18536_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m18537(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1031 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18538_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Int32)
#define Dictionary_2__ctor_m18539(__this, ___capacity, method) (( void (*) (Dictionary_2_t1031 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18540_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m18541(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1031 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18542_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m18543(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1031 *, SerializationInfo_t732 *, StreamingContext_t733 , const MethodInfo*))Dictionary_2__ctor_m18544_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18545(__this, method) (( Object_t* (*) (Dictionary_2_t1031 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18546_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18547(__this, method) (( Object_t* (*) (Dictionary_2_t1031 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18548_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18549(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1031 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18550_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18551(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1031 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18552_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m18553(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1031 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18554_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m18555(__this, ___key, method) (( bool (*) (Dictionary_2_t1031 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18556_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m18557(__this, ___key, method) (( void (*) (Dictionary_2_t1031 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18558_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18559(__this, method) (( bool (*) (Dictionary_2_t1031 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18560_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18561(__this, method) (( Object_t * (*) (Dictionary_2_t1031 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18562_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18563(__this, method) (( bool (*) (Dictionary_2_t1031 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18564_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18565(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1031 *, KeyValuePair_2_t2971 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18566_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18567(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1031 *, KeyValuePair_2_t2971 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18568_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18569(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1031 *, KeyValuePair_2U5BU5D_t3306*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18570_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18571(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1031 *, KeyValuePair_2_t2971 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18572_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18573(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1031 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18574_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18575(__this, method) (( Object_t * (*) (Dictionary_2_t1031 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18576_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18577(__this, method) (( Object_t* (*) (Dictionary_2_t1031 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18578_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18579(__this, method) (( Object_t * (*) (Dictionary_2_t1031 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18580_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Count()
#define Dictionary_2_get_Count_m18581(__this, method) (( int32_t (*) (Dictionary_2_t1031 *, const MethodInfo*))Dictionary_2_get_Count_m18582_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Item(TKey)
#define Dictionary_2_get_Item_m18583(__this, ___key, method) (( bool (*) (Dictionary_2_t1031 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m18584_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m18585(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1031 *, String_t*, bool, const MethodInfo*))Dictionary_2_set_Item_m18586_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m18587(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1031 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m18588_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m18589(__this, ___size, method) (( void (*) (Dictionary_2_t1031 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m18590_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m18591(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1031 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m18592_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m18593(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2971  (*) (Object_t * /* static, unused */, String_t*, bool, const MethodInfo*))Dictionary_2_make_pair_m18594_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m18595(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, bool, const MethodInfo*))Dictionary_2_pick_key_m18596_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m18597(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, String_t*, bool, const MethodInfo*))Dictionary_2_pick_value_m18598_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m18599(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1031 *, KeyValuePair_2U5BU5D_t3306*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m18600_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Resize()
#define Dictionary_2_Resize_m18601(__this, method) (( void (*) (Dictionary_2_t1031 *, const MethodInfo*))Dictionary_2_Resize_m18602_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Add(TKey,TValue)
#define Dictionary_2_Add_m18603(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1031 *, String_t*, bool, const MethodInfo*))Dictionary_2_Add_m18604_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Clear()
#define Dictionary_2_Clear_m18605(__this, method) (( void (*) (Dictionary_2_t1031 *, const MethodInfo*))Dictionary_2_Clear_m18606_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m18607(__this, ___key, method) (( bool (*) (Dictionary_2_t1031 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m18608_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m18609(__this, ___value, method) (( bool (*) (Dictionary_2_t1031 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m18610_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m18611(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1031 *, SerializationInfo_t732 *, StreamingContext_t733 , const MethodInfo*))Dictionary_2_GetObjectData_m18612_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m18613(__this, ___sender, method) (( void (*) (Dictionary_2_t1031 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18614_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Remove(TKey)
#define Dictionary_2_Remove_m18615(__this, ___key, method) (( bool (*) (Dictionary_2_t1031 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m18616_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m18617(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1031 *, String_t*, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m18618_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Keys()
#define Dictionary_2_get_Keys_m18619(__this, method) (( KeyCollection_t2972 * (*) (Dictionary_2_t1031 *, const MethodInfo*))Dictionary_2_get_Keys_m18620_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Values()
#define Dictionary_2_get_Values_m18621(__this, method) (( ValueCollection_t2973 * (*) (Dictionary_2_t1031 *, const MethodInfo*))Dictionary_2_get_Values_m18622_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m18623(__this, ___key, method) (( String_t* (*) (Dictionary_2_t1031 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m18624_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m18625(__this, ___value, method) (( bool (*) (Dictionary_2_t1031 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m18626_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m18627(__this, ___pair, method) (( bool (*) (Dictionary_2_t1031 *, KeyValuePair_2_t2971 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18628_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m18629(__this, method) (( Enumerator_t2974  (*) (Dictionary_2_t1031 *, const MethodInfo*))Dictionary_2_GetEnumerator_m18630_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m18631(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1160  (*) (Object_t * /* static, unused */, String_t*, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18632_gshared)(__this /* static, unused */, ___key, ___value, method)
