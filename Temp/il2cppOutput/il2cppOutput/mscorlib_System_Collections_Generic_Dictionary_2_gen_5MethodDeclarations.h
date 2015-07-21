#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t528;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t720;
// System.Collections.Generic.ICollection`1<UnityEngine.GUIStyle>
struct ICollection_1_t3192;
// System.Object
struct Object_t;
// UnityEngine.GUIStyle
struct GUIStyle_t516;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GUIStyle>
struct KeyCollection_t2751;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>
struct ValueCollection_t741;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2415;
// System.Collections.Generic.IDictionary`2<System.String,UnityEngine.GUIStyle>
struct IDictionary_2_t3193;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t731;
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>[]
struct KeyValuePair_2U5BU5D_t3194;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>
struct IEnumerator_1_t3195;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1158;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__10.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_16MethodDeclarations.h"
#define Dictionary_2__ctor_m15754(__this, method) (( void (*) (Dictionary_2_t528 *, const MethodInfo*))Dictionary_2__ctor_m13875_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m3515(__this, ___comparer, method) (( void (*) (Dictionary_2_t528 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13877_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m15755(__this, ___dictionary, method) (( void (*) (Dictionary_2_t528 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13879_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Int32)
#define Dictionary_2__ctor_m15756(__this, ___capacity, method) (( void (*) (Dictionary_2_t528 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m13881_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m15757(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t528 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13883_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m15758(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t528 *, SerializationInfo_t731 *, StreamingContext_t732 , const MethodInfo*))Dictionary_2__ctor_m13885_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m15759(__this, method) (( Object_t* (*) (Dictionary_2_t528 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13887_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m15760(__this, method) (( Object_t* (*) (Dictionary_2_t528 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13889_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m15761(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t528 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m13891_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m15762(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t528 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m13893_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m15763(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t528 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13895_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m15764(__this, ___key, method) (( bool (*) (Dictionary_2_t528 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m13897_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m15765(__this, ___key, method) (( void (*) (Dictionary_2_t528 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13899_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15766(__this, method) (( bool (*) (Dictionary_2_t528 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13901_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15767(__this, method) (( Object_t * (*) (Dictionary_2_t528 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13903_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15768(__this, method) (( bool (*) (Dictionary_2_t528 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13905_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15769(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t528 *, KeyValuePair_2_t2750 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13907_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15770(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t528 *, KeyValuePair_2_t2750 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13909_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15771(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t528 *, KeyValuePair_2U5BU5D_t3194*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13911_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15772(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t528 *, KeyValuePair_2_t2750 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13913_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m15773(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t528 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13915_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15774(__this, method) (( Object_t * (*) (Dictionary_2_t528 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13917_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15775(__this, method) (( Object_t* (*) (Dictionary_2_t528 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13919_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15776(__this, method) (( Object_t * (*) (Dictionary_2_t528 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13921_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Count()
#define Dictionary_2_get_Count_m15777(__this, method) (( int32_t (*) (Dictionary_2_t528 *, const MethodInfo*))Dictionary_2_get_Count_m13923_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Item(TKey)
#define Dictionary_2_get_Item_m15778(__this, ___key, method) (( GUIStyle_t516 * (*) (Dictionary_2_t528 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m13925_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m15779(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t528 *, String_t*, GUIStyle_t516 *, const MethodInfo*))Dictionary_2_set_Item_m13927_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m15780(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t528 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m13929_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m15781(__this, ___size, method) (( void (*) (Dictionary_2_t528 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m13931_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m15782(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t528 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m13933_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m15783(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2750  (*) (Object_t * /* static, unused */, String_t*, GUIStyle_t516 *, const MethodInfo*))Dictionary_2_make_pair_m13935_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m15784(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, GUIStyle_t516 *, const MethodInfo*))Dictionary_2_pick_key_m13937_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m15785(__this /* static, unused */, ___key, ___value, method) (( GUIStyle_t516 * (*) (Object_t * /* static, unused */, String_t*, GUIStyle_t516 *, const MethodInfo*))Dictionary_2_pick_value_m13939_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m15786(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t528 *, KeyValuePair_2U5BU5D_t3194*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m13941_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Resize()
#define Dictionary_2_Resize_m15787(__this, method) (( void (*) (Dictionary_2_t528 *, const MethodInfo*))Dictionary_2_Resize_m13943_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Add(TKey,TValue)
#define Dictionary_2_Add_m15788(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t528 *, String_t*, GUIStyle_t516 *, const MethodInfo*))Dictionary_2_Add_m13945_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Clear()
#define Dictionary_2_Clear_m15789(__this, method) (( void (*) (Dictionary_2_t528 *, const MethodInfo*))Dictionary_2_Clear_m13947_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m15790(__this, ___key, method) (( bool (*) (Dictionary_2_t528 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m13949_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m15791(__this, ___value, method) (( bool (*) (Dictionary_2_t528 *, GUIStyle_t516 *, const MethodInfo*))Dictionary_2_ContainsValue_m13951_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m15792(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t528 *, SerializationInfo_t731 *, StreamingContext_t732 , const MethodInfo*))Dictionary_2_GetObjectData_m13953_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m15793(__this, ___sender, method) (( void (*) (Dictionary_2_t528 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m13955_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Remove(TKey)
#define Dictionary_2_Remove_m15794(__this, ___key, method) (( bool (*) (Dictionary_2_t528 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m13957_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m15795(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t528 *, String_t*, GUIStyle_t516 **, const MethodInfo*))Dictionary_2_TryGetValue_m13959_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Keys()
#define Dictionary_2_get_Keys_m15796(__this, method) (( KeyCollection_t2751 * (*) (Dictionary_2_t528 *, const MethodInfo*))Dictionary_2_get_Keys_m13961_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Values()
#define Dictionary_2_get_Values_m3516(__this, method) (( ValueCollection_t741 * (*) (Dictionary_2_t528 *, const MethodInfo*))Dictionary_2_get_Values_m13963_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m15797(__this, ___key, method) (( String_t* (*) (Dictionary_2_t528 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m13965_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m15798(__this, ___value, method) (( GUIStyle_t516 * (*) (Dictionary_2_t528 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m13967_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m15799(__this, ___pair, method) (( bool (*) (Dictionary_2_t528 *, KeyValuePair_2_t2750 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13969_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m15800(__this, method) (( Enumerator_t2752  (*) (Dictionary_2_t528 *, const MethodInfo*))Dictionary_2_GetEnumerator_m13971_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m15801(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1159  (*) (Object_t * /* static, unused */, String_t*, GUIStyle_t516 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13973_gshared)(__this /* static, unused */, ___key, ___value, method)
