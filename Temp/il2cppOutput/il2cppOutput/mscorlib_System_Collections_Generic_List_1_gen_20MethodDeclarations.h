#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct List_1_t265;
// System.Object
struct Object_t;
// UnityEngine.UI.StencilMaterial/MatEntry
struct MatEntry_t264;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct IEnumerable_1_t3167;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct IEnumerator_1_t3168;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct ICollection_1_t3169;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct ReadOnlyCollection_1_t2696;
// UnityEngine.UI.StencilMaterial/MatEntry[]
struct MatEntryU5BU5D_t2694;
// System.Predicate`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct Predicate_1_t2697;
// System.Comparison`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct Comparison_1_t2699;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.StencilMaterial/MatEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_24.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_23MethodDeclarations.h"
#define List_1__ctor_m1976(__this, method) (( void (*) (List_1_t265 *, const MethodInfo*))List_1__ctor_m3577_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m15045(__this, ___collection, method) (( void (*) (List_1_t265 *, Object_t*, const MethodInfo*))List_1__ctor_m11424_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.ctor(System.Int32)
#define List_1__ctor_m15046(__this, ___capacity, method) (( void (*) (List_1_t265 *, int32_t, const MethodInfo*))List_1__ctor_m11425_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.cctor()
#define List_1__cctor_m15047(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11426_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15048(__this, method) (( Object_t* (*) (List_1_t265 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3827_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m15049(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t265 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m3810_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15050(__this, method) (( Object_t * (*) (List_1_t265 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m3806_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m15051(__this, ___item, method) (( int32_t (*) (List_1_t265 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m3815_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m15052(__this, ___item, method) (( bool (*) (List_1_t265 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m3817_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m15053(__this, ___item, method) (( int32_t (*) (List_1_t265 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m3818_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m15054(__this, ___index, ___item, method) (( void (*) (List_1_t265 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m3819_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m15055(__this, ___item, method) (( void (*) (List_1_t265 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m3820_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15056(__this, method) (( bool (*) (List_1_t265 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3822_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15057(__this, method) (( bool (*) (List_1_t265 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m3808_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m15058(__this, method) (( Object_t * (*) (List_1_t265 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m3809_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m15059(__this, method) (( bool (*) (List_1_t265 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m3811_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m15060(__this, method) (( bool (*) (List_1_t265 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m3812_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m15061(__this, ___index, method) (( Object_t * (*) (List_1_t265 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m3813_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m15062(__this, ___index, ___value, method) (( void (*) (List_1_t265 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m3814_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Add(T)
#define List_1_Add_m15063(__this, ___item, method) (( void (*) (List_1_t265 *, MatEntry_t264 *, const MethodInfo*))List_1_Add_m3823_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m15064(__this, ___newCount, method) (( void (*) (List_1_t265 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11427_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m15065(__this, ___collection, method) (( void (*) (List_1_t265 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11428_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m15066(__this, ___enumerable, method) (( void (*) (List_1_t265 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11429_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m15067(__this, ___collection, method) (( void (*) (List_1_t265 *, Object_t*, const MethodInfo*))List_1_AddRange_m11430_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AsReadOnly()
#define List_1_AsReadOnly_m15068(__this, method) (( ReadOnlyCollection_1_t2696 * (*) (List_1_t265 *, const MethodInfo*))List_1_AsReadOnly_m11431_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Clear()
#define List_1_Clear_m15069(__this, method) (( void (*) (List_1_t265 *, const MethodInfo*))List_1_Clear_m3816_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Contains(T)
#define List_1_Contains_m15070(__this, ___item, method) (( bool (*) (List_1_t265 *, MatEntry_t264 *, const MethodInfo*))List_1_Contains_m3824_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m15071(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t265 *, MatEntryU5BU5D_t2694*, int32_t, const MethodInfo*))List_1_CopyTo_m3825_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Find(System.Predicate`1<T>)
#define List_1_Find_m15072(__this, ___match, method) (( MatEntry_t264 * (*) (List_1_t265 *, Predicate_1_t2697 *, const MethodInfo*))List_1_Find_m11432_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m15073(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2697 *, const MethodInfo*))List_1_CheckMatch_m11433_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m15074(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t265 *, int32_t, int32_t, Predicate_1_t2697 *, const MethodInfo*))List_1_GetIndex_m11434_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::GetEnumerator()
#define List_1_GetEnumerator_m15075(__this, method) (( Enumerator_t2698  (*) (List_1_t265 *, const MethodInfo*))List_1_GetEnumerator_m11435_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::IndexOf(T)
#define List_1_IndexOf_m15076(__this, ___item, method) (( int32_t (*) (List_1_t265 *, MatEntry_t264 *, const MethodInfo*))List_1_IndexOf_m3828_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m15077(__this, ___start, ___delta, method) (( void (*) (List_1_t265 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11436_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m15078(__this, ___index, method) (( void (*) (List_1_t265 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11437_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Insert(System.Int32,T)
#define List_1_Insert_m15079(__this, ___index, ___item, method) (( void (*) (List_1_t265 *, int32_t, MatEntry_t264 *, const MethodInfo*))List_1_Insert_m3829_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m15080(__this, ___collection, method) (( void (*) (List_1_t265 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11438_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Remove(T)
#define List_1_Remove_m15081(__this, ___item, method) (( bool (*) (List_1_t265 *, MatEntry_t264 *, const MethodInfo*))List_1_Remove_m3826_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m15082(__this, ___match, method) (( int32_t (*) (List_1_t265 *, Predicate_1_t2697 *, const MethodInfo*))List_1_RemoveAll_m11439_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m15083(__this, ___index, method) (( void (*) (List_1_t265 *, int32_t, const MethodInfo*))List_1_RemoveAt_m3821_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Reverse()
#define List_1_Reverse_m15084(__this, method) (( void (*) (List_1_t265 *, const MethodInfo*))List_1_Reverse_m11440_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Sort()
#define List_1_Sort_m15085(__this, method) (( void (*) (List_1_t265 *, const MethodInfo*))List_1_Sort_m11441_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m15086(__this, ___comparison, method) (( void (*) (List_1_t265 *, Comparison_1_t2699 *, const MethodInfo*))List_1_Sort_m11442_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::ToArray()
#define List_1_ToArray_m15087(__this, method) (( MatEntryU5BU5D_t2694* (*) (List_1_t265 *, const MethodInfo*))List_1_ToArray_m11443_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::TrimExcess()
#define List_1_TrimExcess_m15088(__this, method) (( void (*) (List_1_t265 *, const MethodInfo*))List_1_TrimExcess_m11444_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::get_Capacity()
#define List_1_get_Capacity_m15089(__this, method) (( int32_t (*) (List_1_t265 *, const MethodInfo*))List_1_get_Capacity_m11445_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m15090(__this, ___value, method) (( void (*) (List_1_t265 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11446_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::get_Count()
#define List_1_get_Count_m15091(__this, method) (( int32_t (*) (List_1_t265 *, const MethodInfo*))List_1_get_Count_m3807_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::get_Item(System.Int32)
#define List_1_get_Item_m15092(__this, ___index, method) (( MatEntry_t264 * (*) (List_1_t265 *, int32_t, const MethodInfo*))List_1_get_Item_m3830_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::set_Item(System.Int32,T)
#define List_1_set_Item_m15093(__this, ___index, ___value, method) (( void (*) (List_1_t265 *, int32_t, MatEntry_t264 *, const MethodInfo*))List_1_set_Item_m3831_gshared)(__this, ___index, ___value, method)
