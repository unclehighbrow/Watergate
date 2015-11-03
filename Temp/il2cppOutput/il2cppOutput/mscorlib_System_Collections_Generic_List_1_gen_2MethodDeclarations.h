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

// System.Collections.Generic.List`1<System.Single>
struct List_1_t37;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t2374;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t2375;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t61;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t2376;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>
struct ReadOnlyCollection_1_t1810;
// System.Single[]
struct SingleU5BU5D_t510;
// System.Predicate`1<System.Single>
struct Predicate_1_t1816;
// System.Comparison`1<System.Single>
struct Comparison_1_t1820;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_8.h"

// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
extern "C" void List_1__ctor_m263_gshared (List_1_t37 * __this, const MethodInfo* method);
#define List_1__ctor_m263(__this, method) (( void (*) (List_1_t37 *, const MethodInfo*))List_1__ctor_m263_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m11134_gshared (List_1_t37 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m11134(__this, ___collection, method) (( void (*) (List_1_t37 *, Object_t*, const MethodInfo*))List_1__ctor_m11134_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Int32)
extern "C" void List_1__ctor_m11135_gshared (List_1_t37 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m11135(__this, ___capacity, method) (( void (*) (List_1_t37 *, int32_t, const MethodInfo*))List_1__ctor_m11135_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.cctor()
extern "C" void List_1__cctor_m11136_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m11136(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11136_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11137_gshared (List_1_t37 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11137(__this, method) (( Object_t* (*) (List_1_t37 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11137_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m11138_gshared (List_1_t37 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m11138(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t37 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11138_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m11139_gshared (List_1_t37 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11139(__this, method) (( Object_t * (*) (List_1_t37 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11139_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m11140_gshared (List_1_t37 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m11140(__this, ___item, method) (( int32_t (*) (List_1_t37 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11140_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m11141_gshared (List_1_t37 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m11141(__this, ___item, method) (( bool (*) (List_1_t37 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11141_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m11142_gshared (List_1_t37 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m11142(__this, ___item, method) (( int32_t (*) (List_1_t37 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11142_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m11143_gshared (List_1_t37 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m11143(__this, ___index, ___item, method) (( void (*) (List_1_t37 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11143_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m11144_gshared (List_1_t37 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m11144(__this, ___item, method) (( void (*) (List_1_t37 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11144_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11145_gshared (List_1_t37 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11145(__this, method) (( bool (*) (List_1_t37 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11145_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m11146_gshared (List_1_t37 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m11146(__this, method) (( bool (*) (List_1_t37 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11146_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m11147_gshared (List_1_t37 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m11147(__this, method) (( Object_t * (*) (List_1_t37 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11147_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m11148_gshared (List_1_t37 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m11148(__this, method) (( bool (*) (List_1_t37 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11148_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m11149_gshared (List_1_t37 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m11149(__this, method) (( bool (*) (List_1_t37 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11149_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m11150_gshared (List_1_t37 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m11150(__this, ___index, method) (( Object_t * (*) (List_1_t37 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11150_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m11151_gshared (List_1_t37 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m11151(__this, ___index, ___value, method) (( void (*) (List_1_t37 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11151_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
extern "C" void List_1_Add_m11152_gshared (List_1_t37 * __this, float ___item, const MethodInfo* method);
#define List_1_Add_m11152(__this, ___item, method) (( void (*) (List_1_t37 *, float, const MethodInfo*))List_1_Add_m11152_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m11153_gshared (List_1_t37 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m11153(__this, ___newCount, method) (( void (*) (List_1_t37 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11153_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m11154_gshared (List_1_t37 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m11154(__this, ___collection, method) (( void (*) (List_1_t37 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11154_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m11155_gshared (List_1_t37 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m11155(__this, ___enumerable, method) (( void (*) (List_1_t37 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11155_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m11156_gshared (List_1_t37 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m11156(__this, ___collection, method) (( void (*) (List_1_t37 *, Object_t*, const MethodInfo*))List_1_AddRange_m11156_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Single>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1810 * List_1_AsReadOnly_m11157_gshared (List_1_t37 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m11157(__this, method) (( ReadOnlyCollection_1_t1810 * (*) (List_1_t37 *, const MethodInfo*))List_1_AsReadOnly_m11157_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
extern "C" void List_1_Clear_m11158_gshared (List_1_t37 * __this, const MethodInfo* method);
#define List_1_Clear_m11158(__this, method) (( void (*) (List_1_t37 *, const MethodInfo*))List_1_Clear_m11158_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Contains(T)
extern "C" bool List_1_Contains_m11159_gshared (List_1_t37 * __this, float ___item, const MethodInfo* method);
#define List_1_Contains_m11159(__this, ___item, method) (( bool (*) (List_1_t37 *, float, const MethodInfo*))List_1_Contains_m11159_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m11160_gshared (List_1_t37 * __this, SingleU5BU5D_t510* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m11160(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t37 *, SingleU5BU5D_t510*, int32_t, const MethodInfo*))List_1_CopyTo_m11160_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Single>::Find(System.Predicate`1<T>)
extern "C" float List_1_Find_m11161_gshared (List_1_t37 * __this, Predicate_1_t1816 * ___match, const MethodInfo* method);
#define List_1_Find_m11161(__this, ___match, method) (( float (*) (List_1_t37 *, Predicate_1_t1816 *, const MethodInfo*))List_1_Find_m11161_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m11162_gshared (Object_t * __this /* static, unused */, Predicate_1_t1816 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m11162(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1816 *, const MethodInfo*))List_1_CheckMatch_m11162_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m11163_gshared (List_1_t37 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1816 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m11163(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t37 *, int32_t, int32_t, Predicate_1_t1816 *, const MethodInfo*))List_1_GetIndex_m11163_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Single>::GetEnumerator()
extern "C" Enumerator_t1809  List_1_GetEnumerator_m11164_gshared (List_1_t37 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m11164(__this, method) (( Enumerator_t1809  (*) (List_1_t37 *, const MethodInfo*))List_1_GetEnumerator_m11164_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m11165_gshared (List_1_t37 * __this, float ___item, const MethodInfo* method);
#define List_1_IndexOf_m11165(__this, ___item, method) (( int32_t (*) (List_1_t37 *, float, const MethodInfo*))List_1_IndexOf_m11165_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m11166_gshared (List_1_t37 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m11166(__this, ___start, ___delta, method) (( void (*) (List_1_t37 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11166_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m11167_gshared (List_1_t37 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m11167(__this, ___index, method) (( void (*) (List_1_t37 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11167_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m11168_gshared (List_1_t37 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define List_1_Insert_m11168(__this, ___index, ___item, method) (( void (*) (List_1_t37 *, int32_t, float, const MethodInfo*))List_1_Insert_m11168_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m11169_gshared (List_1_t37 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m11169(__this, ___collection, method) (( void (*) (List_1_t37 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11169_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Remove(T)
extern "C" bool List_1_Remove_m11170_gshared (List_1_t37 * __this, float ___item, const MethodInfo* method);
#define List_1_Remove_m11170(__this, ___item, method) (( bool (*) (List_1_t37 *, float, const MethodInfo*))List_1_Remove_m11170_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m11171_gshared (List_1_t37 * __this, Predicate_1_t1816 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m11171(__this, ___match, method) (( int32_t (*) (List_1_t37 *, Predicate_1_t1816 *, const MethodInfo*))List_1_RemoveAll_m11171_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m11172_gshared (List_1_t37 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m11172(__this, ___index, method) (( void (*) (List_1_t37 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11172_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Reverse()
extern "C" void List_1_Reverse_m11173_gshared (List_1_t37 * __this, const MethodInfo* method);
#define List_1_Reverse_m11173(__this, method) (( void (*) (List_1_t37 *, const MethodInfo*))List_1_Reverse_m11173_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort()
extern "C" void List_1_Sort_m11174_gshared (List_1_t37 * __this, const MethodInfo* method);
#define List_1_Sort_m11174(__this, method) (( void (*) (List_1_t37 *, const MethodInfo*))List_1_Sort_m11174_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m11175_gshared (List_1_t37 * __this, Comparison_1_t1820 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m11175(__this, ___comparison, method) (( void (*) (List_1_t37 *, Comparison_1_t1820 *, const MethodInfo*))List_1_Sort_m11175_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Single>::ToArray()
extern "C" SingleU5BU5D_t510* List_1_ToArray_m11176_gshared (List_1_t37 * __this, const MethodInfo* method);
#define List_1_ToArray_m11176(__this, method) (( SingleU5BU5D_t510* (*) (List_1_t37 *, const MethodInfo*))List_1_ToArray_m11176_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::TrimExcess()
extern "C" void List_1_TrimExcess_m11177_gshared (List_1_t37 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m11177(__this, method) (( void (*) (List_1_t37 *, const MethodInfo*))List_1_TrimExcess_m11177_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m11178_gshared (List_1_t37 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m11178(__this, method) (( int32_t (*) (List_1_t37 *, const MethodInfo*))List_1_get_Capacity_m11178_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m11179_gshared (List_1_t37 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m11179(__this, ___value, method) (( void (*) (List_1_t37 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11179_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
extern "C" int32_t List_1_get_Count_m11180_gshared (List_1_t37 * __this, const MethodInfo* method);
#define List_1_get_Count_m11180(__this, method) (( int32_t (*) (List_1_t37 *, const MethodInfo*))List_1_get_Count_m11180_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
extern "C" float List_1_get_Item_m11181_gshared (List_1_t37 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m11181(__this, ___index, method) (( float (*) (List_1_t37 *, int32_t, const MethodInfo*))List_1_get_Item_m11181_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m11182_gshared (List_1_t37 * __this, int32_t ___index, float ___value, const MethodInfo* method);
#define List_1_set_Item_m11182(__this, ___index, ___value, method) (( void (*) (List_1_t37 *, int32_t, float, const MethodInfo*))List_1_set_Item_m11182_gshared)(__this, ___index, ___value, method)
