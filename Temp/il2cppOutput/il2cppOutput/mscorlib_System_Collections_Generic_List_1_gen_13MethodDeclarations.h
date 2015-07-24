#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.Text>
struct List_1_t354;
// System.Object
struct Object_t;
// UnityEngine.UI.Text
struct Text_t14;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Text>
struct IEnumerable_1_t3133;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Text>
struct IEnumerator_1_t3130;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Text>
struct ICollection_1_t3134;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>
struct ReadOnlyCollection_1_t2616;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t2614;
// System.Predicate`1<UnityEngine.UI.Text>
struct Predicate_1_t2617;
// System.Comparison`1<UnityEngine.UI.Text>
struct Comparison_1_t2619;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_18.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_23MethodDeclarations.h"
#define List_1__ctor_m1706(__this, method) (( void (*) (List_1_t354 *, const MethodInfo*))List_1__ctor_m3585_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m14109(__this, ___collection, method) (( void (*) (List_1_t354 *, Object_t*, const MethodInfo*))List_1__ctor_m11432_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.ctor(System.Int32)
#define List_1__ctor_m14110(__this, ___capacity, method) (( void (*) (List_1_t354 *, int32_t, const MethodInfo*))List_1__ctor_m11433_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.cctor()
#define List_1__cctor_m14111(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11434_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14112(__this, method) (( Object_t* (*) (List_1_t354 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3835_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m14113(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t354 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m3818_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m14114(__this, method) (( Object_t * (*) (List_1_t354 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m3814_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m14115(__this, ___item, method) (( int32_t (*) (List_1_t354 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m3823_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m14116(__this, ___item, method) (( bool (*) (List_1_t354 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m3825_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m14117(__this, ___item, method) (( int32_t (*) (List_1_t354 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m3826_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m14118(__this, ___index, ___item, method) (( void (*) (List_1_t354 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m3827_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m14119(__this, ___item, method) (( void (*) (List_1_t354 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m3828_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14120(__this, method) (( bool (*) (List_1_t354 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3830_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m14121(__this, method) (( bool (*) (List_1_t354 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m3816_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m14122(__this, method) (( Object_t * (*) (List_1_t354 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m3817_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m14123(__this, method) (( bool (*) (List_1_t354 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m3819_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m14124(__this, method) (( bool (*) (List_1_t354 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m3820_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m14125(__this, ___index, method) (( Object_t * (*) (List_1_t354 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m3821_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m14126(__this, ___index, ___value, method) (( void (*) (List_1_t354 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m3822_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Add(T)
#define List_1_Add_m14127(__this, ___item, method) (( void (*) (List_1_t354 *, Text_t14 *, const MethodInfo*))List_1_Add_m3831_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m14128(__this, ___newCount, method) (( void (*) (List_1_t354 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11435_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m14129(__this, ___collection, method) (( void (*) (List_1_t354 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11436_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m14130(__this, ___enumerable, method) (( void (*) (List_1_t354 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11437_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m14131(__this, ___collection, method) (( void (*) (List_1_t354 *, Object_t*, const MethodInfo*))List_1_AddRange_m11438_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Text>::AsReadOnly()
#define List_1_AsReadOnly_m14132(__this, method) (( ReadOnlyCollection_1_t2616 * (*) (List_1_t354 *, const MethodInfo*))List_1_AsReadOnly_m11439_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Clear()
#define List_1_Clear_m14133(__this, method) (( void (*) (List_1_t354 *, const MethodInfo*))List_1_Clear_m3824_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::Contains(T)
#define List_1_Contains_m14134(__this, ___item, method) (( bool (*) (List_1_t354 *, Text_t14 *, const MethodInfo*))List_1_Contains_m3832_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m14135(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t354 *, TextU5BU5D_t2614*, int32_t, const MethodInfo*))List_1_CopyTo_m3833_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Text>::Find(System.Predicate`1<T>)
#define List_1_Find_m14136(__this, ___match, method) (( Text_t14 * (*) (List_1_t354 *, Predicate_1_t2617 *, const MethodInfo*))List_1_Find_m11440_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m14137(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2617 *, const MethodInfo*))List_1_CheckMatch_m11441_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m14138(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t354 *, int32_t, int32_t, Predicate_1_t2617 *, const MethodInfo*))List_1_GetIndex_m11442_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Text>::GetEnumerator()
#define List_1_GetEnumerator_m14139(__this, method) (( Enumerator_t2618  (*) (List_1_t354 *, const MethodInfo*))List_1_GetEnumerator_m11443_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::IndexOf(T)
#define List_1_IndexOf_m14140(__this, ___item, method) (( int32_t (*) (List_1_t354 *, Text_t14 *, const MethodInfo*))List_1_IndexOf_m3836_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m14141(__this, ___start, ___delta, method) (( void (*) (List_1_t354 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11444_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m14142(__this, ___index, method) (( void (*) (List_1_t354 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11445_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Insert(System.Int32,T)
#define List_1_Insert_m14143(__this, ___index, ___item, method) (( void (*) (List_1_t354 *, int32_t, Text_t14 *, const MethodInfo*))List_1_Insert_m3837_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m14144(__this, ___collection, method) (( void (*) (List_1_t354 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11446_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::Remove(T)
#define List_1_Remove_m14145(__this, ___item, method) (( bool (*) (List_1_t354 *, Text_t14 *, const MethodInfo*))List_1_Remove_m3834_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m14146(__this, ___match, method) (( int32_t (*) (List_1_t354 *, Predicate_1_t2617 *, const MethodInfo*))List_1_RemoveAll_m11447_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m14147(__this, ___index, method) (( void (*) (List_1_t354 *, int32_t, const MethodInfo*))List_1_RemoveAt_m3829_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Reverse()
#define List_1_Reverse_m14148(__this, method) (( void (*) (List_1_t354 *, const MethodInfo*))List_1_Reverse_m11448_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Sort()
#define List_1_Sort_m14149(__this, method) (( void (*) (List_1_t354 *, const MethodInfo*))List_1_Sort_m11449_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m14150(__this, ___comparison, method) (( void (*) (List_1_t354 *, Comparison_1_t2619 *, const MethodInfo*))List_1_Sort_m11450_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Text>::ToArray()
#define List_1_ToArray_m14151(__this, method) (( TextU5BU5D_t2614* (*) (List_1_t354 *, const MethodInfo*))List_1_ToArray_m11451_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::TrimExcess()
#define List_1_TrimExcess_m14152(__this, method) (( void (*) (List_1_t354 *, const MethodInfo*))List_1_TrimExcess_m11452_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::get_Capacity()
#define List_1_get_Capacity_m14153(__this, method) (( int32_t (*) (List_1_t354 *, const MethodInfo*))List_1_get_Capacity_m11453_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m14154(__this, ___value, method) (( void (*) (List_1_t354 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11454_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::get_Count()
#define List_1_get_Count_m14155(__this, method) (( int32_t (*) (List_1_t354 *, const MethodInfo*))List_1_get_Count_m3815_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Text>::get_Item(System.Int32)
#define List_1_get_Item_m14156(__this, ___index, method) (( Text_t14 * (*) (List_1_t354 *, int32_t, const MethodInfo*))List_1_get_Item_m3838_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::set_Item(System.Int32,T)
#define List_1_set_Item_m14157(__this, ___index, ___value, method) (( void (*) (List_1_t354 *, int32_t, Text_t14 *, const MethodInfo*))List_1_set_Item_m3839_gshared)(__this, ___index, ___value, method)
