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

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t529;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t2426;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t2427;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t61;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t2428;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t2190;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t611;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t2194;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2197;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_35.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m16093_gshared (List_1_t529 * __this, const MethodInfo* method);
#define List_1__ctor_m16093(__this, method) (( void (*) (List_1_t529 *, const MethodInfo*))List_1__ctor_m16093_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m16094_gshared (List_1_t529 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m16094(__this, ___collection, method) (( void (*) (List_1_t529 *, Object_t*, const MethodInfo*))List_1__ctor_m16094_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m3284_gshared (List_1_t529 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m3284(__this, ___capacity, method) (( void (*) (List_1_t529 *, int32_t, const MethodInfo*))List_1__ctor_m3284_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m16095_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m16095(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16095_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16096_gshared (List_1_t529 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16096(__this, method) (( Object_t* (*) (List_1_t529 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16096_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m16097_gshared (List_1_t529 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m16097(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t529 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m16097_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m16098_gshared (List_1_t529 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m16098(__this, method) (( Object_t * (*) (List_1_t529 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m16098_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m16099_gshared (List_1_t529 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m16099(__this, ___item, method) (( int32_t (*) (List_1_t529 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m16099_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m16100_gshared (List_1_t529 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m16100(__this, ___item, method) (( bool (*) (List_1_t529 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m16100_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m16101_gshared (List_1_t529 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m16101(__this, ___item, method) (( int32_t (*) (List_1_t529 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m16101_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m16102_gshared (List_1_t529 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m16102(__this, ___index, ___item, method) (( void (*) (List_1_t529 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m16102_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m16103_gshared (List_1_t529 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m16103(__this, ___item, method) (( void (*) (List_1_t529 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m16103_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16104_gshared (List_1_t529 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16104(__this, method) (( bool (*) (List_1_t529 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16104_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m16105_gshared (List_1_t529 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m16105(__this, method) (( bool (*) (List_1_t529 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m16105_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m16106_gshared (List_1_t529 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m16106(__this, method) (( Object_t * (*) (List_1_t529 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m16106_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m16107_gshared (List_1_t529 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m16107(__this, method) (( bool (*) (List_1_t529 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m16107_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m16108_gshared (List_1_t529 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m16108(__this, method) (( bool (*) (List_1_t529 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m16108_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m16109_gshared (List_1_t529 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m16109(__this, ___index, method) (( Object_t * (*) (List_1_t529 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m16109_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m16110_gshared (List_1_t529 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m16110(__this, ___index, ___value, method) (( void (*) (List_1_t529 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m16110_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m16111_gshared (List_1_t529 * __this, UICharInfo_t393  ___item, const MethodInfo* method);
#define List_1_Add_m16111(__this, ___item, method) (( void (*) (List_1_t529 *, UICharInfo_t393 , const MethodInfo*))List_1_Add_m16111_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m16112_gshared (List_1_t529 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m16112(__this, ___newCount, method) (( void (*) (List_1_t529 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16112_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m16113_gshared (List_1_t529 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m16113(__this, ___collection, method) (( void (*) (List_1_t529 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16113_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m16114_gshared (List_1_t529 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m16114(__this, ___enumerable, method) (( void (*) (List_1_t529 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16114_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m16115_gshared (List_1_t529 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m16115(__this, ___collection, method) (( void (*) (List_1_t529 *, Object_t*, const MethodInfo*))List_1_AddRange_m16115_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2190 * List_1_AsReadOnly_m16116_gshared (List_1_t529 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m16116(__this, method) (( ReadOnlyCollection_1_t2190 * (*) (List_1_t529 *, const MethodInfo*))List_1_AsReadOnly_m16116_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m16117_gshared (List_1_t529 * __this, const MethodInfo* method);
#define List_1_Clear_m16117(__this, method) (( void (*) (List_1_t529 *, const MethodInfo*))List_1_Clear_m16117_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m16118_gshared (List_1_t529 * __this, UICharInfo_t393  ___item, const MethodInfo* method);
#define List_1_Contains_m16118(__this, ___item, method) (( bool (*) (List_1_t529 *, UICharInfo_t393 , const MethodInfo*))List_1_Contains_m16118_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m16119_gshared (List_1_t529 * __this, UICharInfoU5BU5D_t611* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m16119(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t529 *, UICharInfoU5BU5D_t611*, int32_t, const MethodInfo*))List_1_CopyTo_m16119_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t393  List_1_Find_m16120_gshared (List_1_t529 * __this, Predicate_1_t2194 * ___match, const MethodInfo* method);
#define List_1_Find_m16120(__this, ___match, method) (( UICharInfo_t393  (*) (List_1_t529 *, Predicate_1_t2194 *, const MethodInfo*))List_1_Find_m16120_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m16121_gshared (Object_t * __this /* static, unused */, Predicate_1_t2194 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m16121(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2194 *, const MethodInfo*))List_1_CheckMatch_m16121_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m16122_gshared (List_1_t529 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2194 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m16122(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t529 *, int32_t, int32_t, Predicate_1_t2194 *, const MethodInfo*))List_1_GetIndex_m16122_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t2189  List_1_GetEnumerator_m16123_gshared (List_1_t529 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m16123(__this, method) (( Enumerator_t2189  (*) (List_1_t529 *, const MethodInfo*))List_1_GetEnumerator_m16123_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m16124_gshared (List_1_t529 * __this, UICharInfo_t393  ___item, const MethodInfo* method);
#define List_1_IndexOf_m16124(__this, ___item, method) (( int32_t (*) (List_1_t529 *, UICharInfo_t393 , const MethodInfo*))List_1_IndexOf_m16124_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m16125_gshared (List_1_t529 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m16125(__this, ___start, ___delta, method) (( void (*) (List_1_t529 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16125_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m16126_gshared (List_1_t529 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m16126(__this, ___index, method) (( void (*) (List_1_t529 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16126_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m16127_gshared (List_1_t529 * __this, int32_t ___index, UICharInfo_t393  ___item, const MethodInfo* method);
#define List_1_Insert_m16127(__this, ___index, ___item, method) (( void (*) (List_1_t529 *, int32_t, UICharInfo_t393 , const MethodInfo*))List_1_Insert_m16127_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m16128_gshared (List_1_t529 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m16128(__this, ___collection, method) (( void (*) (List_1_t529 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16128_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m16129_gshared (List_1_t529 * __this, UICharInfo_t393  ___item, const MethodInfo* method);
#define List_1_Remove_m16129(__this, ___item, method) (( bool (*) (List_1_t529 *, UICharInfo_t393 , const MethodInfo*))List_1_Remove_m16129_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m16130_gshared (List_1_t529 * __this, Predicate_1_t2194 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m16130(__this, ___match, method) (( int32_t (*) (List_1_t529 *, Predicate_1_t2194 *, const MethodInfo*))List_1_RemoveAll_m16130_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m16131_gshared (List_1_t529 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m16131(__this, ___index, method) (( void (*) (List_1_t529 *, int32_t, const MethodInfo*))List_1_RemoveAt_m16131_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m16132_gshared (List_1_t529 * __this, const MethodInfo* method);
#define List_1_Reverse_m16132(__this, method) (( void (*) (List_1_t529 *, const MethodInfo*))List_1_Reverse_m16132_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m16133_gshared (List_1_t529 * __this, const MethodInfo* method);
#define List_1_Sort_m16133(__this, method) (( void (*) (List_1_t529 *, const MethodInfo*))List_1_Sort_m16133_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m16134_gshared (List_1_t529 * __this, Comparison_1_t2197 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m16134(__this, ___comparison, method) (( void (*) (List_1_t529 *, Comparison_1_t2197 *, const MethodInfo*))List_1_Sort_m16134_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t611* List_1_ToArray_m16135_gshared (List_1_t529 * __this, const MethodInfo* method);
#define List_1_ToArray_m16135(__this, method) (( UICharInfoU5BU5D_t611* (*) (List_1_t529 *, const MethodInfo*))List_1_ToArray_m16135_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m16136_gshared (List_1_t529 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m16136(__this, method) (( void (*) (List_1_t529 *, const MethodInfo*))List_1_TrimExcess_m16136_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m16137_gshared (List_1_t529 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m16137(__this, method) (( int32_t (*) (List_1_t529 *, const MethodInfo*))List_1_get_Capacity_m16137_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m16138_gshared (List_1_t529 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m16138(__this, ___value, method) (( void (*) (List_1_t529 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16138_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m16139_gshared (List_1_t529 * __this, const MethodInfo* method);
#define List_1_get_Count_m16139(__this, method) (( int32_t (*) (List_1_t529 *, const MethodInfo*))List_1_get_Count_m16139_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t393  List_1_get_Item_m16140_gshared (List_1_t529 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m16140(__this, ___index, method) (( UICharInfo_t393  (*) (List_1_t529 *, int32_t, const MethodInfo*))List_1_get_Item_m16140_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m16141_gshared (List_1_t529 * __this, int32_t ___index, UICharInfo_t393  ___value, const MethodInfo* method);
#define List_1_set_Item_m16141(__this, ___index, ___value, method) (( void (*) (List_1_t529 *, int32_t, UICharInfo_t393 , const MethodInfo*))List_1_set_Item_m16141_gshared)(__this, ___index, ___value, method)
