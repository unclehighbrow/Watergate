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

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t320;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t2419;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t2390;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t61;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2420;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t2133;
// System.Int32[]
struct Int32U5BU5D_t422;
// System.Predicate`1<System.Int32>
struct Predicate_1_t2136;
// System.Comparison`1<System.Int32>
struct Comparison_1_t2140;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_33.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m15538_gshared (List_1_t320 * __this, const MethodInfo* method);
#define List_1__ctor_m15538(__this, method) (( void (*) (List_1_t320 *, const MethodInfo*))List_1__ctor_m15538_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m15539_gshared (List_1_t320 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m15539(__this, ___collection, method) (( void (*) (List_1_t320 *, Object_t*, const MethodInfo*))List_1__ctor_m15539_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m15540_gshared (List_1_t320 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m15540(__this, ___capacity, method) (( void (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1__ctor_m15540_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m15541_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m15541(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m15541_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15542_gshared (List_1_t320 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15542(__this, method) (( Object_t* (*) (List_1_t320 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15542_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m15543_gshared (List_1_t320 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m15543(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t320 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15543_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m15544_gshared (List_1_t320 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15544(__this, method) (( Object_t * (*) (List_1_t320 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15544_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m15545_gshared (List_1_t320 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m15545(__this, ___item, method) (( int32_t (*) (List_1_t320 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m15545_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m15546_gshared (List_1_t320 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m15546(__this, ___item, method) (( bool (*) (List_1_t320 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m15546_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m15547_gshared (List_1_t320 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m15547(__this, ___item, method) (( int32_t (*) (List_1_t320 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m15547_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m15548_gshared (List_1_t320 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m15548(__this, ___index, ___item, method) (( void (*) (List_1_t320 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m15548_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m15549_gshared (List_1_t320 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m15549(__this, ___item, method) (( void (*) (List_1_t320 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m15549_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15550_gshared (List_1_t320 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15550(__this, method) (( bool (*) (List_1_t320 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15550_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m15551_gshared (List_1_t320 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15551(__this, method) (( bool (*) (List_1_t320 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15551_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m15552_gshared (List_1_t320 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m15552(__this, method) (( Object_t * (*) (List_1_t320 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15552_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m15553_gshared (List_1_t320 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m15553(__this, method) (( bool (*) (List_1_t320 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15553_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m15554_gshared (List_1_t320 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m15554(__this, method) (( bool (*) (List_1_t320 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15554_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m15555_gshared (List_1_t320 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m15555(__this, ___index, method) (( Object_t * (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m15555_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m15556_gshared (List_1_t320 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m15556(__this, ___index, ___value, method) (( void (*) (List_1_t320 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m15556_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m15557_gshared (List_1_t320 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m15557(__this, ___item, method) (( void (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1_Add_m15557_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m15558_gshared (List_1_t320 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m15558(__this, ___newCount, method) (( void (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m15558_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m15559_gshared (List_1_t320 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m15559(__this, ___collection, method) (( void (*) (List_1_t320 *, Object_t*, const MethodInfo*))List_1_AddCollection_m15559_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m15560_gshared (List_1_t320 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m15560(__this, ___enumerable, method) (( void (*) (List_1_t320 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m15560_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m2310_gshared (List_1_t320 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m2310(__this, ___collection, method) (( void (*) (List_1_t320 *, Object_t*, const MethodInfo*))List_1_AddRange_m2310_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2133 * List_1_AsReadOnly_m15561_gshared (List_1_t320 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m15561(__this, method) (( ReadOnlyCollection_1_t2133 * (*) (List_1_t320 *, const MethodInfo*))List_1_AsReadOnly_m15561_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m15562_gshared (List_1_t320 * __this, const MethodInfo* method);
#define List_1_Clear_m15562(__this, method) (( void (*) (List_1_t320 *, const MethodInfo*))List_1_Clear_m15562_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m15563_gshared (List_1_t320 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m15563(__this, ___item, method) (( bool (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1_Contains_m15563_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m15564_gshared (List_1_t320 * __this, Int32U5BU5D_t422* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m15564(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t320 *, Int32U5BU5D_t422*, int32_t, const MethodInfo*))List_1_CopyTo_m15564_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m15565_gshared (List_1_t320 * __this, Predicate_1_t2136 * ___match, const MethodInfo* method);
#define List_1_Find_m15565(__this, ___match, method) (( int32_t (*) (List_1_t320 *, Predicate_1_t2136 *, const MethodInfo*))List_1_Find_m15565_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m15566_gshared (Object_t * __this /* static, unused */, Predicate_1_t2136 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m15566(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2136 *, const MethodInfo*))List_1_CheckMatch_m15566_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m15567_gshared (List_1_t320 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2136 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m15567(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t320 *, int32_t, int32_t, Predicate_1_t2136 *, const MethodInfo*))List_1_GetIndex_m15567_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t2132  List_1_GetEnumerator_m15568_gshared (List_1_t320 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m15568(__this, method) (( Enumerator_t2132  (*) (List_1_t320 *, const MethodInfo*))List_1_GetEnumerator_m15568_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m15569_gshared (List_1_t320 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m15569(__this, ___item, method) (( int32_t (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1_IndexOf_m15569_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m15570_gshared (List_1_t320 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m15570(__this, ___start, ___delta, method) (( void (*) (List_1_t320 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m15570_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m15571_gshared (List_1_t320 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m15571(__this, ___index, method) (( void (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1_CheckIndex_m15571_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m15572_gshared (List_1_t320 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m15572(__this, ___index, ___item, method) (( void (*) (List_1_t320 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m15572_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m15573_gshared (List_1_t320 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m15573(__this, ___collection, method) (( void (*) (List_1_t320 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m15573_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m15574_gshared (List_1_t320 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m15574(__this, ___item, method) (( bool (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1_Remove_m15574_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m15575_gshared (List_1_t320 * __this, Predicate_1_t2136 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m15575(__this, ___match, method) (( int32_t (*) (List_1_t320 *, Predicate_1_t2136 *, const MethodInfo*))List_1_RemoveAll_m15575_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m15576_gshared (List_1_t320 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m15576(__this, ___index, method) (( void (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1_RemoveAt_m15576_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m15577_gshared (List_1_t320 * __this, const MethodInfo* method);
#define List_1_Reverse_m15577(__this, method) (( void (*) (List_1_t320 *, const MethodInfo*))List_1_Reverse_m15577_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m15578_gshared (List_1_t320 * __this, const MethodInfo* method);
#define List_1_Sort_m15578(__this, method) (( void (*) (List_1_t320 *, const MethodInfo*))List_1_Sort_m15578_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m15579_gshared (List_1_t320 * __this, Comparison_1_t2140 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m15579(__this, ___comparison, method) (( void (*) (List_1_t320 *, Comparison_1_t2140 *, const MethodInfo*))List_1_Sort_m15579_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t422* List_1_ToArray_m15580_gshared (List_1_t320 * __this, const MethodInfo* method);
#define List_1_ToArray_m15580(__this, method) (( Int32U5BU5D_t422* (*) (List_1_t320 *, const MethodInfo*))List_1_ToArray_m15580_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m15581_gshared (List_1_t320 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m15581(__this, method) (( void (*) (List_1_t320 *, const MethodInfo*))List_1_TrimExcess_m15581_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m15582_gshared (List_1_t320 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m15582(__this, method) (( int32_t (*) (List_1_t320 *, const MethodInfo*))List_1_get_Capacity_m15582_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m15583_gshared (List_1_t320 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m15583(__this, ___value, method) (( void (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1_set_Capacity_m15583_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m15584_gshared (List_1_t320 * __this, const MethodInfo* method);
#define List_1_get_Count_m15584(__this, method) (( int32_t (*) (List_1_t320 *, const MethodInfo*))List_1_get_Count_m15584_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m15585_gshared (List_1_t320 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m15585(__this, ___index, method) (( int32_t (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1_get_Item_m15585_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m15586_gshared (List_1_t320 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m15586(__this, ___index, ___value, method) (( void (*) (List_1_t320 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m15586_gshared)(__this, ___index, ___value, method)
