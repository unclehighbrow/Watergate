#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct List_1_t127;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.EventTrigger/Entry
struct Entry_t126;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct IEnumerable_1_t3095;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct IEnumerator_1_t3096;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct ICollection_1_t3097;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct ReadOnlyCollection_1_t2549;
// UnityEngine.EventSystems.EventTrigger/Entry[]
struct EntryU5BU5D_t2547;
// System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct Predicate_1_t2550;
// System.Comparison`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct Comparison_1_t2552;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_15.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_23MethodDeclarations.h"
#define List_1__ctor_m1579(__this, method) (( void (*) (List_1_t127 *, const MethodInfo*))List_1__ctor_m3585_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m13006(__this, ___collection, method) (( void (*) (List_1_t127 *, Object_t*, const MethodInfo*))List_1__ctor_m11432_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Int32)
#define List_1__ctor_m13007(__this, ___capacity, method) (( void (*) (List_1_t127 *, int32_t, const MethodInfo*))List_1__ctor_m11433_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.cctor()
#define List_1__cctor_m13008(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11434_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13009(__this, method) (( Object_t* (*) (List_1_t127 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3835_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m13010(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t127 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m3818_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13011(__this, method) (( Object_t * (*) (List_1_t127 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m3814_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m13012(__this, ___item, method) (( int32_t (*) (List_1_t127 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m3823_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m13013(__this, ___item, method) (( bool (*) (List_1_t127 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m3825_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m13014(__this, ___item, method) (( int32_t (*) (List_1_t127 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m3826_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m13015(__this, ___index, ___item, method) (( void (*) (List_1_t127 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m3827_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m13016(__this, ___item, method) (( void (*) (List_1_t127 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m3828_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13017(__this, method) (( bool (*) (List_1_t127 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3830_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m13018(__this, method) (( bool (*) (List_1_t127 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m3816_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m13019(__this, method) (( Object_t * (*) (List_1_t127 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m3817_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m13020(__this, method) (( bool (*) (List_1_t127 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m3819_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m13021(__this, method) (( bool (*) (List_1_t127 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m3820_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m13022(__this, ___index, method) (( Object_t * (*) (List_1_t127 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m3821_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m13023(__this, ___index, ___value, method) (( void (*) (List_1_t127 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m3822_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Add(T)
#define List_1_Add_m13024(__this, ___item, method) (( void (*) (List_1_t127 *, Entry_t126 *, const MethodInfo*))List_1_Add_m3831_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m13025(__this, ___newCount, method) (( void (*) (List_1_t127 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11435_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m13026(__this, ___collection, method) (( void (*) (List_1_t127 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11436_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m13027(__this, ___enumerable, method) (( void (*) (List_1_t127 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11437_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m13028(__this, ___collection, method) (( void (*) (List_1_t127 *, Object_t*, const MethodInfo*))List_1_AddRange_m11438_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AsReadOnly()
#define List_1_AsReadOnly_m13029(__this, method) (( ReadOnlyCollection_1_t2549 * (*) (List_1_t127 *, const MethodInfo*))List_1_AsReadOnly_m11439_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Clear()
#define List_1_Clear_m13030(__this, method) (( void (*) (List_1_t127 *, const MethodInfo*))List_1_Clear_m3824_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Contains(T)
#define List_1_Contains_m13031(__this, ___item, method) (( bool (*) (List_1_t127 *, Entry_t126 *, const MethodInfo*))List_1_Contains_m3832_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m13032(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t127 *, EntryU5BU5D_t2547*, int32_t, const MethodInfo*))List_1_CopyTo_m3833_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Find(System.Predicate`1<T>)
#define List_1_Find_m13033(__this, ___match, method) (( Entry_t126 * (*) (List_1_t127 *, Predicate_1_t2550 *, const MethodInfo*))List_1_Find_m11440_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m13034(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2550 *, const MethodInfo*))List_1_CheckMatch_m11441_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m13035(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t127 *, int32_t, int32_t, Predicate_1_t2550 *, const MethodInfo*))List_1_GetIndex_m11442_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetEnumerator()
#define List_1_GetEnumerator_m13036(__this, method) (( Enumerator_t2551  (*) (List_1_t127 *, const MethodInfo*))List_1_GetEnumerator_m11443_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::IndexOf(T)
#define List_1_IndexOf_m13037(__this, ___item, method) (( int32_t (*) (List_1_t127 *, Entry_t126 *, const MethodInfo*))List_1_IndexOf_m3836_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m13038(__this, ___start, ___delta, method) (( void (*) (List_1_t127 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11444_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m13039(__this, ___index, method) (( void (*) (List_1_t127 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11445_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Insert(System.Int32,T)
#define List_1_Insert_m13040(__this, ___index, ___item, method) (( void (*) (List_1_t127 *, int32_t, Entry_t126 *, const MethodInfo*))List_1_Insert_m3837_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m13041(__this, ___collection, method) (( void (*) (List_1_t127 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11446_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Remove(T)
#define List_1_Remove_m13042(__this, ___item, method) (( bool (*) (List_1_t127 *, Entry_t126 *, const MethodInfo*))List_1_Remove_m3834_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m13043(__this, ___match, method) (( int32_t (*) (List_1_t127 *, Predicate_1_t2550 *, const MethodInfo*))List_1_RemoveAll_m11447_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m13044(__this, ___index, method) (( void (*) (List_1_t127 *, int32_t, const MethodInfo*))List_1_RemoveAt_m3829_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Reverse()
#define List_1_Reverse_m13045(__this, method) (( void (*) (List_1_t127 *, const MethodInfo*))List_1_Reverse_m11448_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Sort()
#define List_1_Sort_m13046(__this, method) (( void (*) (List_1_t127 *, const MethodInfo*))List_1_Sort_m11449_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m13047(__this, ___comparison, method) (( void (*) (List_1_t127 *, Comparison_1_t2552 *, const MethodInfo*))List_1_Sort_m11450_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::ToArray()
#define List_1_ToArray_m13048(__this, method) (( EntryU5BU5D_t2547* (*) (List_1_t127 *, const MethodInfo*))List_1_ToArray_m11451_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::TrimExcess()
#define List_1_TrimExcess_m13049(__this, method) (( void (*) (List_1_t127 *, const MethodInfo*))List_1_TrimExcess_m11452_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Capacity()
#define List_1_get_Capacity_m13050(__this, method) (( int32_t (*) (List_1_t127 *, const MethodInfo*))List_1_get_Capacity_m11453_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m13051(__this, ___value, method) (( void (*) (List_1_t127 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11454_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Count()
#define List_1_get_Count_m13052(__this, method) (( int32_t (*) (List_1_t127 *, const MethodInfo*))List_1_get_Count_m3815_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Item(System.Int32)
#define List_1_get_Item_m13053(__this, ___index, method) (( Entry_t126 * (*) (List_1_t127 *, int32_t, const MethodInfo*))List_1_get_Item_m3838_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::set_Item(System.Int32,T)
#define List_1_set_Item_m13054(__this, ___index, ___value, method) (( void (*) (List_1_t127 *, int32_t, Entry_t126 *, const MethodInfo*))List_1_set_Item_m3839_gshared)(__this, ___index, ___value, method)
