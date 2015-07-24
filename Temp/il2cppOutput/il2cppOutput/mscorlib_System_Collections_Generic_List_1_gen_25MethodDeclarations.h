#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct List_1_t520;
// System.Object
struct Object_t;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t519;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GUILayoutEntry>
struct IEnumerable_1_t3190;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GUILayoutEntry>
struct IEnumerator_1_t3191;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Collections.Generic.ICollection`1<UnityEngine.GUILayoutEntry>
struct ICollection_1_t3192;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>
struct ReadOnlyCollection_1_t2746;
// UnityEngine.GUILayoutEntry[]
struct GUILayoutEntryU5BU5D_t2744;
// System.Predicate`1<UnityEngine.GUILayoutEntry>
struct Predicate_1_t2747;
// System.Comparison`1<UnityEngine.GUILayoutEntry>
struct Comparison_1_t2748;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_23MethodDeclarations.h"
#define List_1__ctor_m3521(__this, method) (( void (*) (List_1_t520 *, const MethodInfo*))List_1__ctor_m3585_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m15671(__this, ___collection, method) (( void (*) (List_1_t520 *, Object_t*, const MethodInfo*))List_1__ctor_m11432_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor(System.Int32)
#define List_1__ctor_m15672(__this, ___capacity, method) (( void (*) (List_1_t520 *, int32_t, const MethodInfo*))List_1__ctor_m11433_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.cctor()
#define List_1__cctor_m15673(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11434_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15674(__this, method) (( Object_t* (*) (List_1_t520 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3835_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m15675(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t520 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m3818_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15676(__this, method) (( Object_t * (*) (List_1_t520 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m3814_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m15677(__this, ___item, method) (( int32_t (*) (List_1_t520 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m3823_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m15678(__this, ___item, method) (( bool (*) (List_1_t520 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m3825_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m15679(__this, ___item, method) (( int32_t (*) (List_1_t520 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m3826_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m15680(__this, ___index, ___item, method) (( void (*) (List_1_t520 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m3827_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m15681(__this, ___item, method) (( void (*) (List_1_t520 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m3828_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15682(__this, method) (( bool (*) (List_1_t520 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3830_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15683(__this, method) (( bool (*) (List_1_t520 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m3816_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m15684(__this, method) (( Object_t * (*) (List_1_t520 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m3817_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m15685(__this, method) (( bool (*) (List_1_t520 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m3819_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m15686(__this, method) (( bool (*) (List_1_t520 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m3820_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m15687(__this, ___index, method) (( Object_t * (*) (List_1_t520 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m3821_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m15688(__this, ___index, ___value, method) (( void (*) (List_1_t520 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m3822_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Add(T)
#define List_1_Add_m15689(__this, ___item, method) (( void (*) (List_1_t520 *, GUILayoutEntry_t519 *, const MethodInfo*))List_1_Add_m3831_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m15690(__this, ___newCount, method) (( void (*) (List_1_t520 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11435_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m15691(__this, ___collection, method) (( void (*) (List_1_t520 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11436_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m15692(__this, ___enumerable, method) (( void (*) (List_1_t520 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11437_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m15693(__this, ___collection, method) (( void (*) (List_1_t520 *, Object_t*, const MethodInfo*))List_1_AddRange_m11438_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AsReadOnly()
#define List_1_AsReadOnly_m15694(__this, method) (( ReadOnlyCollection_1_t2746 * (*) (List_1_t520 *, const MethodInfo*))List_1_AsReadOnly_m11439_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Clear()
#define List_1_Clear_m15695(__this, method) (( void (*) (List_1_t520 *, const MethodInfo*))List_1_Clear_m3824_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Contains(T)
#define List_1_Contains_m15696(__this, ___item, method) (( bool (*) (List_1_t520 *, GUILayoutEntry_t519 *, const MethodInfo*))List_1_Contains_m3832_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m15697(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t520 *, GUILayoutEntryU5BU5D_t2744*, int32_t, const MethodInfo*))List_1_CopyTo_m3833_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Find(System.Predicate`1<T>)
#define List_1_Find_m15698(__this, ___match, method) (( GUILayoutEntry_t519 * (*) (List_1_t520 *, Predicate_1_t2747 *, const MethodInfo*))List_1_Find_m11440_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m15699(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2747 *, const MethodInfo*))List_1_CheckMatch_m11441_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m15700(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t520 *, int32_t, int32_t, Predicate_1_t2747 *, const MethodInfo*))List_1_GetIndex_m11442_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetEnumerator()
#define List_1_GetEnumerator_m3518(__this, method) (( Enumerator_t740  (*) (List_1_t520 *, const MethodInfo*))List_1_GetEnumerator_m11443_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::IndexOf(T)
#define List_1_IndexOf_m15701(__this, ___item, method) (( int32_t (*) (List_1_t520 *, GUILayoutEntry_t519 *, const MethodInfo*))List_1_IndexOf_m3836_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m15702(__this, ___start, ___delta, method) (( void (*) (List_1_t520 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11444_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m15703(__this, ___index, method) (( void (*) (List_1_t520 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11445_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Insert(System.Int32,T)
#define List_1_Insert_m15704(__this, ___index, ___item, method) (( void (*) (List_1_t520 *, int32_t, GUILayoutEntry_t519 *, const MethodInfo*))List_1_Insert_m3837_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m15705(__this, ___collection, method) (( void (*) (List_1_t520 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11446_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Remove(T)
#define List_1_Remove_m15706(__this, ___item, method) (( bool (*) (List_1_t520 *, GUILayoutEntry_t519 *, const MethodInfo*))List_1_Remove_m3834_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m15707(__this, ___match, method) (( int32_t (*) (List_1_t520 *, Predicate_1_t2747 *, const MethodInfo*))List_1_RemoveAll_m11447_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m15708(__this, ___index, method) (( void (*) (List_1_t520 *, int32_t, const MethodInfo*))List_1_RemoveAt_m3829_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Reverse()
#define List_1_Reverse_m15709(__this, method) (( void (*) (List_1_t520 *, const MethodInfo*))List_1_Reverse_m11448_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Sort()
#define List_1_Sort_m15710(__this, method) (( void (*) (List_1_t520 *, const MethodInfo*))List_1_Sort_m11449_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m15711(__this, ___comparison, method) (( void (*) (List_1_t520 *, Comparison_1_t2748 *, const MethodInfo*))List_1_Sort_m11450_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::ToArray()
#define List_1_ToArray_m15712(__this, method) (( GUILayoutEntryU5BU5D_t2744* (*) (List_1_t520 *, const MethodInfo*))List_1_ToArray_m11451_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::TrimExcess()
#define List_1_TrimExcess_m15713(__this, method) (( void (*) (List_1_t520 *, const MethodInfo*))List_1_TrimExcess_m11452_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Capacity()
#define List_1_get_Capacity_m15714(__this, method) (( int32_t (*) (List_1_t520 *, const MethodInfo*))List_1_get_Capacity_m11453_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m15715(__this, ___value, method) (( void (*) (List_1_t520 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11454_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count()
#define List_1_get_Count_m15716(__this, method) (( int32_t (*) (List_1_t520 *, const MethodInfo*))List_1_get_Count_m3815_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32)
#define List_1_get_Item_m15717(__this, ___index, method) (( GUILayoutEntry_t519 * (*) (List_1_t520 *, int32_t, const MethodInfo*))List_1_get_Item_m3838_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Item(System.Int32,T)
#define List_1_set_Item_m15718(__this, ___index, ___value, method) (( void (*) (List_1_t520 *, int32_t, GUILayoutEntry_t519 *, const MethodInfo*))List_1_set_Item_m3839_gshared)(__this, ___index, ___value, method)
