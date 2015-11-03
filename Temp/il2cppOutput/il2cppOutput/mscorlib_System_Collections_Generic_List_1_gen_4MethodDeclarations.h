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

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t43;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector2>
struct IEnumerable_1_t2377;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector2>
struct IEnumerator_1_t2378;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t61;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.Vector2>
struct ICollection_1_t2379;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>
struct ReadOnlyCollection_1_t1823;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t222;
// System.Predicate`1<UnityEngine.Vector2>
struct Predicate_1_t1828;
// System.Comparison`1<UnityEngine.Vector2>
struct Comparison_1_t1831;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
extern "C" void List_1__ctor_m309_gshared (List_1_t43 * __this, const MethodInfo* method);
#define List_1__ctor_m309(__this, method) (( void (*) (List_1_t43 *, const MethodInfo*))List_1__ctor_m309_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m11295_gshared (List_1_t43 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m11295(__this, ___collection, method) (( void (*) (List_1_t43 *, Object_t*, const MethodInfo*))List_1__ctor_m11295_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor(System.Int32)
extern "C" void List_1__ctor_m11296_gshared (List_1_t43 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m11296(__this, ___capacity, method) (( void (*) (List_1_t43 *, int32_t, const MethodInfo*))List_1__ctor_m11296_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.cctor()
extern "C" void List_1__cctor_m11297_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m11297(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11297_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11298_gshared (List_1_t43 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11298(__this, method) (( Object_t* (*) (List_1_t43 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11298_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m11299_gshared (List_1_t43 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m11299(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t43 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11299_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m11300_gshared (List_1_t43 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11300(__this, method) (( Object_t * (*) (List_1_t43 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11300_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m11301_gshared (List_1_t43 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m11301(__this, ___item, method) (( int32_t (*) (List_1_t43 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11301_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m11302_gshared (List_1_t43 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m11302(__this, ___item, method) (( bool (*) (List_1_t43 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11302_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m11303_gshared (List_1_t43 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m11303(__this, ___item, method) (( int32_t (*) (List_1_t43 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11303_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m11304_gshared (List_1_t43 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m11304(__this, ___index, ___item, method) (( void (*) (List_1_t43 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11304_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m11305_gshared (List_1_t43 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m11305(__this, ___item, method) (( void (*) (List_1_t43 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11305_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11306_gshared (List_1_t43 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11306(__this, method) (( bool (*) (List_1_t43 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11306_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m11307_gshared (List_1_t43 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m11307(__this, method) (( bool (*) (List_1_t43 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11307_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m11308_gshared (List_1_t43 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m11308(__this, method) (( Object_t * (*) (List_1_t43 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11308_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m11309_gshared (List_1_t43 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m11309(__this, method) (( bool (*) (List_1_t43 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11309_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m11310_gshared (List_1_t43 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m11310(__this, method) (( bool (*) (List_1_t43 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11310_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m11311_gshared (List_1_t43 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m11311(__this, ___index, method) (( Object_t * (*) (List_1_t43 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11311_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m11312_gshared (List_1_t43 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m11312(__this, ___index, ___value, method) (( void (*) (List_1_t43 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11312_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(T)
extern "C" void List_1_Add_m11313_gshared (List_1_t43 * __this, Vector2_t40  ___item, const MethodInfo* method);
#define List_1_Add_m11313(__this, ___item, method) (( void (*) (List_1_t43 *, Vector2_t40 , const MethodInfo*))List_1_Add_m11313_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m11314_gshared (List_1_t43 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m11314(__this, ___newCount, method) (( void (*) (List_1_t43 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11314_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m11315_gshared (List_1_t43 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m11315(__this, ___collection, method) (( void (*) (List_1_t43 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11315_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m11316_gshared (List_1_t43 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m11316(__this, ___enumerable, method) (( void (*) (List_1_t43 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11316_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m2304_gshared (List_1_t43 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m2304(__this, ___collection, method) (( void (*) (List_1_t43 *, Object_t*, const MethodInfo*))List_1_AddRange_m2304_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Vector2>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1823 * List_1_AsReadOnly_m11317_gshared (List_1_t43 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m11317(__this, method) (( ReadOnlyCollection_1_t1823 * (*) (List_1_t43 *, const MethodInfo*))List_1_AsReadOnly_m11317_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Clear()
extern "C" void List_1_Clear_m11318_gshared (List_1_t43 * __this, const MethodInfo* method);
#define List_1_Clear_m11318(__this, method) (( void (*) (List_1_t43 *, const MethodInfo*))List_1_Clear_m11318_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::Contains(T)
extern "C" bool List_1_Contains_m11319_gshared (List_1_t43 * __this, Vector2_t40  ___item, const MethodInfo* method);
#define List_1_Contains_m11319(__this, ___item, method) (( bool (*) (List_1_t43 *, Vector2_t40 , const MethodInfo*))List_1_Contains_m11319_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m11320_gshared (List_1_t43 * __this, Vector2U5BU5D_t222* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m11320(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t43 *, Vector2U5BU5D_t222*, int32_t, const MethodInfo*))List_1_CopyTo_m11320_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Vector2>::Find(System.Predicate`1<T>)
extern "C" Vector2_t40  List_1_Find_m11321_gshared (List_1_t43 * __this, Predicate_1_t1828 * ___match, const MethodInfo* method);
#define List_1_Find_m11321(__this, ___match, method) (( Vector2_t40  (*) (List_1_t43 *, Predicate_1_t1828 *, const MethodInfo*))List_1_Find_m11321_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m11322_gshared (Object_t * __this /* static, unused */, Predicate_1_t1828 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m11322(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1828 *, const MethodInfo*))List_1_CheckMatch_m11322_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m11323_gshared (List_1_t43 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1828 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m11323(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t43 *, int32_t, int32_t, Predicate_1_t1828 *, const MethodInfo*))List_1_GetIndex_m11323_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Vector2>::GetEnumerator()
extern "C" Enumerator_t92  List_1_GetEnumerator_m310_gshared (List_1_t43 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m310(__this, method) (( Enumerator_t92  (*) (List_1_t43 *, const MethodInfo*))List_1_GetEnumerator_m310_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m11324_gshared (List_1_t43 * __this, Vector2_t40  ___item, const MethodInfo* method);
#define List_1_IndexOf_m11324(__this, ___item, method) (( int32_t (*) (List_1_t43 *, Vector2_t40 , const MethodInfo*))List_1_IndexOf_m11324_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m11325_gshared (List_1_t43 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m11325(__this, ___start, ___delta, method) (( void (*) (List_1_t43 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11325_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m11326_gshared (List_1_t43 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m11326(__this, ___index, method) (( void (*) (List_1_t43 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11326_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m11327_gshared (List_1_t43 * __this, int32_t ___index, Vector2_t40  ___item, const MethodInfo* method);
#define List_1_Insert_m11327(__this, ___index, ___item, method) (( void (*) (List_1_t43 *, int32_t, Vector2_t40 , const MethodInfo*))List_1_Insert_m11327_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m11328_gshared (List_1_t43 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m11328(__this, ___collection, method) (( void (*) (List_1_t43 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11328_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::Remove(T)
extern "C" bool List_1_Remove_m11329_gshared (List_1_t43 * __this, Vector2_t40  ___item, const MethodInfo* method);
#define List_1_Remove_m11329(__this, ___item, method) (( bool (*) (List_1_t43 *, Vector2_t40 , const MethodInfo*))List_1_Remove_m11329_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m11330_gshared (List_1_t43 * __this, Predicate_1_t1828 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m11330(__this, ___match, method) (( int32_t (*) (List_1_t43 *, Predicate_1_t1828 *, const MethodInfo*))List_1_RemoveAll_m11330_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m11331_gshared (List_1_t43 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m11331(__this, ___index, method) (( void (*) (List_1_t43 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11331_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Reverse()
extern "C" void List_1_Reverse_m11332_gshared (List_1_t43 * __this, const MethodInfo* method);
#define List_1_Reverse_m11332(__this, method) (( void (*) (List_1_t43 *, const MethodInfo*))List_1_Reverse_m11332_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Sort()
extern "C" void List_1_Sort_m11333_gshared (List_1_t43 * __this, const MethodInfo* method);
#define List_1_Sort_m11333(__this, method) (( void (*) (List_1_t43 *, const MethodInfo*))List_1_Sort_m11333_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m11334_gshared (List_1_t43 * __this, Comparison_1_t1831 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m11334(__this, ___comparison, method) (( void (*) (List_1_t43 *, Comparison_1_t1831 *, const MethodInfo*))List_1_Sort_m11334_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Vector2>::ToArray()
extern "C" Vector2U5BU5D_t222* List_1_ToArray_m11335_gshared (List_1_t43 * __this, const MethodInfo* method);
#define List_1_ToArray_m11335(__this, method) (( Vector2U5BU5D_t222* (*) (List_1_t43 *, const MethodInfo*))List_1_ToArray_m11335_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::TrimExcess()
extern "C" void List_1_TrimExcess_m11336_gshared (List_1_t43 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m11336(__this, method) (( void (*) (List_1_t43 *, const MethodInfo*))List_1_TrimExcess_m11336_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m11337_gshared (List_1_t43 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m11337(__this, method) (( int32_t (*) (List_1_t43 *, const MethodInfo*))List_1_get_Capacity_m11337_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m11338_gshared (List_1_t43 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m11338(__this, ___value, method) (( void (*) (List_1_t43 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11338_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
extern "C" int32_t List_1_get_Count_m11339_gshared (List_1_t43 * __this, const MethodInfo* method);
#define List_1_get_Count_m11339(__this, method) (( int32_t (*) (List_1_t43 *, const MethodInfo*))List_1_get_Count_m11339_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
extern "C" Vector2_t40  List_1_get_Item_m11340_gshared (List_1_t43 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m11340(__this, ___index, method) (( Vector2_t40  (*) (List_1_t43 *, int32_t, const MethodInfo*))List_1_get_Item_m11340_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m11341_gshared (List_1_t43 * __this, int32_t ___index, Vector2_t40  ___value, const MethodInfo* method);
#define List_1_set_Item_m11341(__this, ___index, ___value, method) (( void (*) (List_1_t43 *, int32_t, Vector2_t40 , const MethodInfo*))List_1_set_Item_m11341_gshared)(__this, ___index, ___value, method)
