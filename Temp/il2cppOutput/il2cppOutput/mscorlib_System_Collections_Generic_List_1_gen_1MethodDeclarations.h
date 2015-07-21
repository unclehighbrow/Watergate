#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Burglar>
struct List_1_t26;
// System.Object
struct Object_t;
// Burglar
struct Burglar_t2;
// System.Collections.Generic.IEnumerable`1<Burglar>
struct IEnumerable_1_t3062;
// System.Collections.Generic.IEnumerator`1<Burglar>
struct IEnumerator_1_t3063;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Collections.Generic.ICollection`1<Burglar>
struct ICollection_1_t3064;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Burglar>
struct ReadOnlyCollection_1_t2458;
// Burglar[]
struct BurglarU5BU5D_t79;
// System.Predicate`1<Burglar>
struct Predicate_1_t2459;
// System.Comparison`1<Burglar>
struct Comparison_1_t2460;
// System.Collections.Generic.List`1/Enumerator<Burglar>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0.h"

// System.Void System.Collections.Generic.List`1<Burglar>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_23MethodDeclarations.h"
#define List_1__ctor_m255(__this, method) (( void (*) (List_1_t26 *, const MethodInfo*))List_1__ctor_m3577_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Burglar>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m268(__this, ___collection, method) (( void (*) (List_1_t26 *, Object_t*, const MethodInfo*))List_1__ctor_m11424_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Burglar>::.ctor(System.Int32)
#define List_1__ctor_m11780(__this, ___capacity, method) (( void (*) (List_1_t26 *, int32_t, const MethodInfo*))List_1__ctor_m11425_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Burglar>::.cctor()
#define List_1__cctor_m11781(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11426_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Burglar>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11782(__this, method) (( Object_t* (*) (List_1_t26 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3827_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Burglar>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m11783(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t26 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m3810_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Burglar>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11784(__this, method) (( Object_t * (*) (List_1_t26 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m3806_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Burglar>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m11785(__this, ___item, method) (( int32_t (*) (List_1_t26 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m3815_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Burglar>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m11786(__this, ___item, method) (( bool (*) (List_1_t26 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m3817_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Burglar>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m11787(__this, ___item, method) (( int32_t (*) (List_1_t26 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m3818_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Burglar>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m11788(__this, ___index, ___item, method) (( void (*) (List_1_t26 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m3819_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Burglar>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m11789(__this, ___item, method) (( void (*) (List_1_t26 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m3820_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Burglar>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11790(__this, method) (( bool (*) (List_1_t26 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3822_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Burglar>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m11791(__this, method) (( bool (*) (List_1_t26 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m3808_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Burglar>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m11792(__this, method) (( Object_t * (*) (List_1_t26 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m3809_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Burglar>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m11793(__this, method) (( bool (*) (List_1_t26 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m3811_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Burglar>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m11794(__this, method) (( bool (*) (List_1_t26 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m3812_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Burglar>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m11795(__this, ___index, method) (( Object_t * (*) (List_1_t26 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m3813_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Burglar>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m11796(__this, ___index, ___value, method) (( void (*) (List_1_t26 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m3814_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Burglar>::Add(T)
#define List_1_Add_m11797(__this, ___item, method) (( void (*) (List_1_t26 *, Burglar_t2 *, const MethodInfo*))List_1_Add_m3823_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Burglar>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m11798(__this, ___newCount, method) (( void (*) (List_1_t26 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11427_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Burglar>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m11799(__this, ___collection, method) (( void (*) (List_1_t26 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11428_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Burglar>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m11800(__this, ___enumerable, method) (( void (*) (List_1_t26 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11429_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Burglar>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m11801(__this, ___collection, method) (( void (*) (List_1_t26 *, Object_t*, const MethodInfo*))List_1_AddRange_m11430_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Burglar>::AsReadOnly()
#define List_1_AsReadOnly_m11802(__this, method) (( ReadOnlyCollection_1_t2458 * (*) (List_1_t26 *, const MethodInfo*))List_1_AsReadOnly_m11431_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Burglar>::Clear()
#define List_1_Clear_m11803(__this, method) (( void (*) (List_1_t26 *, const MethodInfo*))List_1_Clear_m3816_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Burglar>::Contains(T)
#define List_1_Contains_m11804(__this, ___item, method) (( bool (*) (List_1_t26 *, Burglar_t2 *, const MethodInfo*))List_1_Contains_m3824_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Burglar>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m11805(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t26 *, BurglarU5BU5D_t79*, int32_t, const MethodInfo*))List_1_CopyTo_m3825_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Burglar>::Find(System.Predicate`1<T>)
#define List_1_Find_m11806(__this, ___match, method) (( Burglar_t2 * (*) (List_1_t26 *, Predicate_1_t2459 *, const MethodInfo*))List_1_Find_m11432_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Burglar>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m11807(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2459 *, const MethodInfo*))List_1_CheckMatch_m11433_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Burglar>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m11808(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t26 *, int32_t, int32_t, Predicate_1_t2459 *, const MethodInfo*))List_1_GetIndex_m11434_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Burglar>::GetEnumerator()
#define List_1_GetEnumerator_m279(__this, method) (( Enumerator_t88  (*) (List_1_t26 *, const MethodInfo*))List_1_GetEnumerator_m11435_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Burglar>::IndexOf(T)
#define List_1_IndexOf_m11809(__this, ___item, method) (( int32_t (*) (List_1_t26 *, Burglar_t2 *, const MethodInfo*))List_1_IndexOf_m3828_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Burglar>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m11810(__this, ___start, ___delta, method) (( void (*) (List_1_t26 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11436_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Burglar>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m11811(__this, ___index, method) (( void (*) (List_1_t26 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11437_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Burglar>::Insert(System.Int32,T)
#define List_1_Insert_m11812(__this, ___index, ___item, method) (( void (*) (List_1_t26 *, int32_t, Burglar_t2 *, const MethodInfo*))List_1_Insert_m3829_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Burglar>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m11813(__this, ___collection, method) (( void (*) (List_1_t26 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11438_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<Burglar>::Remove(T)
#define List_1_Remove_m11814(__this, ___item, method) (( bool (*) (List_1_t26 *, Burglar_t2 *, const MethodInfo*))List_1_Remove_m3826_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Burglar>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m11815(__this, ___match, method) (( int32_t (*) (List_1_t26 *, Predicate_1_t2459 *, const MethodInfo*))List_1_RemoveAll_m11439_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Burglar>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m11816(__this, ___index, method) (( void (*) (List_1_t26 *, int32_t, const MethodInfo*))List_1_RemoveAt_m3821_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Burglar>::Reverse()
#define List_1_Reverse_m11817(__this, method) (( void (*) (List_1_t26 *, const MethodInfo*))List_1_Reverse_m11440_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Burglar>::Sort()
#define List_1_Sort_m11818(__this, method) (( void (*) (List_1_t26 *, const MethodInfo*))List_1_Sort_m11441_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Burglar>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m11819(__this, ___comparison, method) (( void (*) (List_1_t26 *, Comparison_1_t2460 *, const MethodInfo*))List_1_Sort_m11442_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Burglar>::ToArray()
#define List_1_ToArray_m11820(__this, method) (( BurglarU5BU5D_t79* (*) (List_1_t26 *, const MethodInfo*))List_1_ToArray_m11443_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Burglar>::TrimExcess()
#define List_1_TrimExcess_m11821(__this, method) (( void (*) (List_1_t26 *, const MethodInfo*))List_1_TrimExcess_m11444_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Burglar>::get_Capacity()
#define List_1_get_Capacity_m11822(__this, method) (( int32_t (*) (List_1_t26 *, const MethodInfo*))List_1_get_Capacity_m11445_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Burglar>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m11823(__this, ___value, method) (( void (*) (List_1_t26 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11446_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Burglar>::get_Count()
#define List_1_get_Count_m11824(__this, method) (( int32_t (*) (List_1_t26 *, const MethodInfo*))List_1_get_Count_m3807_gshared)(__this, method)
// T System.Collections.Generic.List`1<Burglar>::get_Item(System.Int32)
#define List_1_get_Item_m11825(__this, ___index, method) (( Burglar_t2 * (*) (List_1_t26 *, int32_t, const MethodInfo*))List_1_get_Item_m3830_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Burglar>::set_Item(System.Int32,T)
#define List_1_set_Item_m11826(__this, ___index, ___value, method) (( void (*) (List_1_t26 *, int32_t, Burglar_t2 *, const MethodInfo*))List_1_set_Item_m3831_gshared)(__this, ___index, ___value, method)
