#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Security.Policy.StrongName>
struct List_1_t1946;
// System.Object
struct Object_t;
// System.Security.Policy.StrongName
struct StrongName_t1767;
// System.Collections.Generic.IEnumerable`1<System.Security.Policy.StrongName>
struct IEnumerable_1_t3319;
// System.Collections.Generic.IEnumerator`1<System.Security.Policy.StrongName>
struct IEnumerator_1_t3320;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>
struct ICollection_1_t3321;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>
struct ReadOnlyCollection_1_t3037;
// System.Security.Policy.StrongName[]
struct StrongNameU5BU5D_t3036;
// System.Predicate`1<System.Security.Policy.StrongName>
struct Predicate_1_t3038;
// System.Comparison`1<System.Security.Policy.StrongName>
struct Comparison_1_t3040;
// System.Collections.Generic.List`1/Enumerator<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_36.h"

// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_23MethodDeclarations.h"
#define List_1__ctor_m19142(__this, method) (( void (*) (List_1_t1946 *, const MethodInfo*))List_1__ctor_m3585_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m19143(__this, ___collection, method) (( void (*) (List_1_t1946 *, Object_t*, const MethodInfo*))List_1__ctor_m11432_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor(System.Int32)
#define List_1__ctor_m10570(__this, ___capacity, method) (( void (*) (List_1_t1946 *, int32_t, const MethodInfo*))List_1__ctor_m11433_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.cctor()
#define List_1__cctor_m19144(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11434_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19145(__this, method) (( Object_t* (*) (List_1_t1946 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3835_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m19146(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1946 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m3818_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m19147(__this, method) (( Object_t * (*) (List_1_t1946 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m3814_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m19148(__this, ___item, method) (( int32_t (*) (List_1_t1946 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m3823_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m19149(__this, ___item, method) (( bool (*) (List_1_t1946 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m3825_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m19150(__this, ___item, method) (( int32_t (*) (List_1_t1946 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m3826_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m19151(__this, ___index, ___item, method) (( void (*) (List_1_t1946 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m3827_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m19152(__this, ___item, method) (( void (*) (List_1_t1946 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m3828_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19153(__this, method) (( bool (*) (List_1_t1946 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3830_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m19154(__this, method) (( bool (*) (List_1_t1946 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m3816_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m19155(__this, method) (( Object_t * (*) (List_1_t1946 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m3817_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m19156(__this, method) (( bool (*) (List_1_t1946 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m3819_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m19157(__this, method) (( bool (*) (List_1_t1946 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m3820_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m19158(__this, ___index, method) (( Object_t * (*) (List_1_t1946 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m3821_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m19159(__this, ___index, ___value, method) (( void (*) (List_1_t1946 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m3822_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Add(T)
#define List_1_Add_m19160(__this, ___item, method) (( void (*) (List_1_t1946 *, StrongName_t1767 *, const MethodInfo*))List_1_Add_m3831_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m19161(__this, ___newCount, method) (( void (*) (List_1_t1946 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11435_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m19162(__this, ___collection, method) (( void (*) (List_1_t1946 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11436_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m19163(__this, ___enumerable, method) (( void (*) (List_1_t1946 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11437_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m19164(__this, ___collection, method) (( void (*) (List_1_t1946 *, Object_t*, const MethodInfo*))List_1_AddRange_m11438_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AsReadOnly()
#define List_1_AsReadOnly_m19165(__this, method) (( ReadOnlyCollection_1_t3037 * (*) (List_1_t1946 *, const MethodInfo*))List_1_AsReadOnly_m11439_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Clear()
#define List_1_Clear_m19166(__this, method) (( void (*) (List_1_t1946 *, const MethodInfo*))List_1_Clear_m3824_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Contains(T)
#define List_1_Contains_m19167(__this, ___item, method) (( bool (*) (List_1_t1946 *, StrongName_t1767 *, const MethodInfo*))List_1_Contains_m3832_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m19168(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1946 *, StrongNameU5BU5D_t3036*, int32_t, const MethodInfo*))List_1_CopyTo_m3833_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Find(System.Predicate`1<T>)
#define List_1_Find_m19169(__this, ___match, method) (( StrongName_t1767 * (*) (List_1_t1946 *, Predicate_1_t3038 *, const MethodInfo*))List_1_Find_m11440_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m19170(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3038 *, const MethodInfo*))List_1_CheckMatch_m11441_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m19171(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1946 *, int32_t, int32_t, Predicate_1_t3038 *, const MethodInfo*))List_1_GetIndex_m11442_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GetEnumerator()
#define List_1_GetEnumerator_m19172(__this, method) (( Enumerator_t3039  (*) (List_1_t1946 *, const MethodInfo*))List_1_GetEnumerator_m11443_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::IndexOf(T)
#define List_1_IndexOf_m19173(__this, ___item, method) (( int32_t (*) (List_1_t1946 *, StrongName_t1767 *, const MethodInfo*))List_1_IndexOf_m3836_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m19174(__this, ___start, ___delta, method) (( void (*) (List_1_t1946 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11444_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m19175(__this, ___index, method) (( void (*) (List_1_t1946 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11445_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Insert(System.Int32,T)
#define List_1_Insert_m19176(__this, ___index, ___item, method) (( void (*) (List_1_t1946 *, int32_t, StrongName_t1767 *, const MethodInfo*))List_1_Insert_m3837_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m19177(__this, ___collection, method) (( void (*) (List_1_t1946 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11446_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Remove(T)
#define List_1_Remove_m19178(__this, ___item, method) (( bool (*) (List_1_t1946 *, StrongName_t1767 *, const MethodInfo*))List_1_Remove_m3834_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m19179(__this, ___match, method) (( int32_t (*) (List_1_t1946 *, Predicate_1_t3038 *, const MethodInfo*))List_1_RemoveAll_m11447_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m19180(__this, ___index, method) (( void (*) (List_1_t1946 *, int32_t, const MethodInfo*))List_1_RemoveAt_m3829_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Reverse()
#define List_1_Reverse_m19181(__this, method) (( void (*) (List_1_t1946 *, const MethodInfo*))List_1_Reverse_m11448_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Sort()
#define List_1_Sort_m19182(__this, method) (( void (*) (List_1_t1946 *, const MethodInfo*))List_1_Sort_m11449_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m19183(__this, ___comparison, method) (( void (*) (List_1_t1946 *, Comparison_1_t3040 *, const MethodInfo*))List_1_Sort_m11450_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Security.Policy.StrongName>::ToArray()
#define List_1_ToArray_m19184(__this, method) (( StrongNameU5BU5D_t3036* (*) (List_1_t1946 *, const MethodInfo*))List_1_ToArray_m11451_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::TrimExcess()
#define List_1_TrimExcess_m19185(__this, method) (( void (*) (List_1_t1946 *, const MethodInfo*))List_1_TrimExcess_m11452_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Capacity()
#define List_1_get_Capacity_m19186(__this, method) (( int32_t (*) (List_1_t1946 *, const MethodInfo*))List_1_get_Capacity_m11453_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m19187(__this, ___value, method) (( void (*) (List_1_t1946 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11454_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Count()
#define List_1_get_Count_m19188(__this, method) (( int32_t (*) (List_1_t1946 *, const MethodInfo*))List_1_get_Count_m3815_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Item(System.Int32)
#define List_1_get_Item_m19189(__this, ___index, method) (( StrongName_t1767 * (*) (List_1_t1946 *, int32_t, const MethodInfo*))List_1_get_Item_m3838_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::set_Item(System.Int32,T)
#define List_1_set_Item_m19190(__this, ___index, ___value, method) (( void (*) (List_1_t1946 *, int32_t, StrongName_t1767 *, const MethodInfo*))List_1_set_Item_m3839_gshared)(__this, ___index, ___value, method)
