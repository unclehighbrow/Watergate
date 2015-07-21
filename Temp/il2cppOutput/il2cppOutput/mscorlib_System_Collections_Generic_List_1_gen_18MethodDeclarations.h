#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t256;
// System.Object
struct Object_t;
// UnityEngine.UI.Selectable
struct Selectable_t179;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Selectable>
struct IEnumerable_1_t3161;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Selectable>
struct IEnumerator_1_t3162;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Selectable>
struct ICollection_1_t3163;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Selectable>
struct ReadOnlyCollection_1_t2684;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t2682;
// System.Predicate`1<UnityEngine.UI.Selectable>
struct Predicate_1_t2685;
// System.Comparison`1<UnityEngine.UI.Selectable>
struct Comparison_1_t2687;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Selectable>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_22.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_23MethodDeclarations.h"
#define List_1__ctor_m1960(__this, method) (( void (*) (List_1_t256 *, const MethodInfo*))List_1__ctor_m3577_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m14859(__this, ___collection, method) (( void (*) (List_1_t256 *, Object_t*, const MethodInfo*))List_1__ctor_m11424_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor(System.Int32)
#define List_1__ctor_m14860(__this, ___capacity, method) (( void (*) (List_1_t256 *, int32_t, const MethodInfo*))List_1__ctor_m11425_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.cctor()
#define List_1__cctor_m14861(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11426_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14862(__this, method) (( Object_t* (*) (List_1_t256 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3827_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m14863(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t256 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m3810_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m14864(__this, method) (( Object_t * (*) (List_1_t256 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m3806_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m14865(__this, ___item, method) (( int32_t (*) (List_1_t256 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m3815_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m14866(__this, ___item, method) (( bool (*) (List_1_t256 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m3817_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m14867(__this, ___item, method) (( int32_t (*) (List_1_t256 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m3818_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m14868(__this, ___index, ___item, method) (( void (*) (List_1_t256 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m3819_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m14869(__this, ___item, method) (( void (*) (List_1_t256 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m3820_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14870(__this, method) (( bool (*) (List_1_t256 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3822_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m14871(__this, method) (( bool (*) (List_1_t256 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m3808_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m14872(__this, method) (( Object_t * (*) (List_1_t256 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m3809_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m14873(__this, method) (( bool (*) (List_1_t256 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m3811_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m14874(__this, method) (( bool (*) (List_1_t256 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m3812_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m14875(__this, ___index, method) (( Object_t * (*) (List_1_t256 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m3813_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m14876(__this, ___index, ___value, method) (( void (*) (List_1_t256 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m3814_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Add(T)
#define List_1_Add_m14877(__this, ___item, method) (( void (*) (List_1_t256 *, Selectable_t179 *, const MethodInfo*))List_1_Add_m3823_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m14878(__this, ___newCount, method) (( void (*) (List_1_t256 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11427_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m14879(__this, ___collection, method) (( void (*) (List_1_t256 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11428_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m14880(__this, ___enumerable, method) (( void (*) (List_1_t256 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11429_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m14881(__this, ___collection, method) (( void (*) (List_1_t256 *, Object_t*, const MethodInfo*))List_1_AddRange_m11430_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AsReadOnly()
#define List_1_AsReadOnly_m14882(__this, method) (( ReadOnlyCollection_1_t2684 * (*) (List_1_t256 *, const MethodInfo*))List_1_AsReadOnly_m11431_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Clear()
#define List_1_Clear_m14883(__this, method) (( void (*) (List_1_t256 *, const MethodInfo*))List_1_Clear_m3816_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Contains(T)
#define List_1_Contains_m14884(__this, ___item, method) (( bool (*) (List_1_t256 *, Selectable_t179 *, const MethodInfo*))List_1_Contains_m3824_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m14885(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t256 *, SelectableU5BU5D_t2682*, int32_t, const MethodInfo*))List_1_CopyTo_m3825_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Find(System.Predicate`1<T>)
#define List_1_Find_m14886(__this, ___match, method) (( Selectable_t179 * (*) (List_1_t256 *, Predicate_1_t2685 *, const MethodInfo*))List_1_Find_m11432_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m14887(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2685 *, const MethodInfo*))List_1_CheckMatch_m11433_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m14888(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t256 *, int32_t, int32_t, Predicate_1_t2685 *, const MethodInfo*))List_1_GetIndex_m11434_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GetEnumerator()
#define List_1_GetEnumerator_m14889(__this, method) (( Enumerator_t2686  (*) (List_1_t256 *, const MethodInfo*))List_1_GetEnumerator_m11435_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::IndexOf(T)
#define List_1_IndexOf_m14890(__this, ___item, method) (( int32_t (*) (List_1_t256 *, Selectable_t179 *, const MethodInfo*))List_1_IndexOf_m3828_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m14891(__this, ___start, ___delta, method) (( void (*) (List_1_t256 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11436_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m14892(__this, ___index, method) (( void (*) (List_1_t256 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11437_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Insert(System.Int32,T)
#define List_1_Insert_m14893(__this, ___index, ___item, method) (( void (*) (List_1_t256 *, int32_t, Selectable_t179 *, const MethodInfo*))List_1_Insert_m3829_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m14894(__this, ___collection, method) (( void (*) (List_1_t256 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11438_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Remove(T)
#define List_1_Remove_m14895(__this, ___item, method) (( bool (*) (List_1_t256 *, Selectable_t179 *, const MethodInfo*))List_1_Remove_m3826_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m14896(__this, ___match, method) (( int32_t (*) (List_1_t256 *, Predicate_1_t2685 *, const MethodInfo*))List_1_RemoveAll_m11439_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m14897(__this, ___index, method) (( void (*) (List_1_t256 *, int32_t, const MethodInfo*))List_1_RemoveAt_m3821_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Reverse()
#define List_1_Reverse_m14898(__this, method) (( void (*) (List_1_t256 *, const MethodInfo*))List_1_Reverse_m11440_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Sort()
#define List_1_Sort_m14899(__this, method) (( void (*) (List_1_t256 *, const MethodInfo*))List_1_Sort_m11441_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m14900(__this, ___comparison, method) (( void (*) (List_1_t256 *, Comparison_1_t2687 *, const MethodInfo*))List_1_Sort_m11442_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::ToArray()
#define List_1_ToArray_m14901(__this, method) (( SelectableU5BU5D_t2682* (*) (List_1_t256 *, const MethodInfo*))List_1_ToArray_m11443_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::TrimExcess()
#define List_1_TrimExcess_m14902(__this, method) (( void (*) (List_1_t256 *, const MethodInfo*))List_1_TrimExcess_m11444_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::get_Capacity()
#define List_1_get_Capacity_m14903(__this, method) (( int32_t (*) (List_1_t256 *, const MethodInfo*))List_1_get_Capacity_m11445_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m14904(__this, ___value, method) (( void (*) (List_1_t256 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11446_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::get_Count()
#define List_1_get_Count_m14905(__this, method) (( int32_t (*) (List_1_t256 *, const MethodInfo*))List_1_get_Count_m3807_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::get_Item(System.Int32)
#define List_1_get_Item_m14906(__this, ___index, method) (( Selectable_t179 * (*) (List_1_t256 *, int32_t, const MethodInfo*))List_1_get_Item_m3830_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::set_Item(System.Int32,T)
#define List_1_set_Item_m14907(__this, ___index, ___value, method) (( void (*) (List_1_t256 *, int32_t, Selectable_t179 *, const MethodInfo*))List_1_set_Item_m3831_gshared)(__this, ___index, ___value, method)
