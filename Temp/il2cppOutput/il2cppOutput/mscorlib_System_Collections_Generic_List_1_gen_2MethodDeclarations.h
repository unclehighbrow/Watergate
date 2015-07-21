#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Single>
struct List_1_t31;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t3068;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t3069;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t3070;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>
struct ReadOnlyCollection_1_t2468;
// System.Single[]
struct SingleU5BU5D_t575;
// System.Predicate`1<System.Single>
struct Predicate_1_t2473;
// System.Comparison`1<System.Single>
struct Comparison_1_t2477;
// System.Collections.Generic.List`1/Enumerator<System.Single>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_9.h"

// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
extern "C" void List_1__ctor_m256_gshared (List_1_t31 * __this, const MethodInfo* method);
#define List_1__ctor_m256(__this, method) (( void (*) (List_1_t31 *, const MethodInfo*))List_1__ctor_m256_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m11958_gshared (List_1_t31 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m11958(__this, ___collection, method) (( void (*) (List_1_t31 *, Object_t*, const MethodInfo*))List_1__ctor_m11958_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Int32)
extern "C" void List_1__ctor_m11959_gshared (List_1_t31 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m11959(__this, ___capacity, method) (( void (*) (List_1_t31 *, int32_t, const MethodInfo*))List_1__ctor_m11959_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.cctor()
extern "C" void List_1__cctor_m11960_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m11960(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11960_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11961_gshared (List_1_t31 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11961(__this, method) (( Object_t* (*) (List_1_t31 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11961_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m11962_gshared (List_1_t31 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m11962(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t31 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11962_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m11963_gshared (List_1_t31 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11963(__this, method) (( Object_t * (*) (List_1_t31 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11963_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m11964_gshared (List_1_t31 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m11964(__this, ___item, method) (( int32_t (*) (List_1_t31 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11964_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m11965_gshared (List_1_t31 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m11965(__this, ___item, method) (( bool (*) (List_1_t31 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11965_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m11966_gshared (List_1_t31 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m11966(__this, ___item, method) (( int32_t (*) (List_1_t31 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11966_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m11967_gshared (List_1_t31 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m11967(__this, ___index, ___item, method) (( void (*) (List_1_t31 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11967_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m11968_gshared (List_1_t31 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m11968(__this, ___item, method) (( void (*) (List_1_t31 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11968_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11969_gshared (List_1_t31 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11969(__this, method) (( bool (*) (List_1_t31 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11969_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m11970_gshared (List_1_t31 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m11970(__this, method) (( bool (*) (List_1_t31 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11970_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m11971_gshared (List_1_t31 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m11971(__this, method) (( Object_t * (*) (List_1_t31 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11971_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m11972_gshared (List_1_t31 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m11972(__this, method) (( bool (*) (List_1_t31 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11972_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m11973_gshared (List_1_t31 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m11973(__this, method) (( bool (*) (List_1_t31 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11973_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m11974_gshared (List_1_t31 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m11974(__this, ___index, method) (( Object_t * (*) (List_1_t31 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11974_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m11975_gshared (List_1_t31 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m11975(__this, ___index, ___value, method) (( void (*) (List_1_t31 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11975_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
extern "C" void List_1_Add_m11976_gshared (List_1_t31 * __this, float ___item, const MethodInfo* method);
#define List_1_Add_m11976(__this, ___item, method) (( void (*) (List_1_t31 *, float, const MethodInfo*))List_1_Add_m11976_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m11977_gshared (List_1_t31 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m11977(__this, ___newCount, method) (( void (*) (List_1_t31 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11977_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m11978_gshared (List_1_t31 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m11978(__this, ___collection, method) (( void (*) (List_1_t31 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11978_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m11979_gshared (List_1_t31 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m11979(__this, ___enumerable, method) (( void (*) (List_1_t31 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11979_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m11980_gshared (List_1_t31 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m11980(__this, ___collection, method) (( void (*) (List_1_t31 *, Object_t*, const MethodInfo*))List_1_AddRange_m11980_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Single>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2468 * List_1_AsReadOnly_m11981_gshared (List_1_t31 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m11981(__this, method) (( ReadOnlyCollection_1_t2468 * (*) (List_1_t31 *, const MethodInfo*))List_1_AsReadOnly_m11981_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
extern "C" void List_1_Clear_m11982_gshared (List_1_t31 * __this, const MethodInfo* method);
#define List_1_Clear_m11982(__this, method) (( void (*) (List_1_t31 *, const MethodInfo*))List_1_Clear_m11982_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Contains(T)
extern "C" bool List_1_Contains_m11983_gshared (List_1_t31 * __this, float ___item, const MethodInfo* method);
#define List_1_Contains_m11983(__this, ___item, method) (( bool (*) (List_1_t31 *, float, const MethodInfo*))List_1_Contains_m11983_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m11984_gshared (List_1_t31 * __this, SingleU5BU5D_t575* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m11984(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t31 *, SingleU5BU5D_t575*, int32_t, const MethodInfo*))List_1_CopyTo_m11984_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Single>::Find(System.Predicate`1<T>)
extern "C" float List_1_Find_m11985_gshared (List_1_t31 * __this, Predicate_1_t2473 * ___match, const MethodInfo* method);
#define List_1_Find_m11985(__this, ___match, method) (( float (*) (List_1_t31 *, Predicate_1_t2473 *, const MethodInfo*))List_1_Find_m11985_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m11986_gshared (Object_t * __this /* static, unused */, Predicate_1_t2473 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m11986(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2473 *, const MethodInfo*))List_1_CheckMatch_m11986_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m11987_gshared (List_1_t31 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2473 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m11987(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t31 *, int32_t, int32_t, Predicate_1_t2473 *, const MethodInfo*))List_1_GetIndex_m11987_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Single>::GetEnumerator()
extern "C" Enumerator_t2466  List_1_GetEnumerator_m11988_gshared (List_1_t31 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m11988(__this, method) (( Enumerator_t2466  (*) (List_1_t31 *, const MethodInfo*))List_1_GetEnumerator_m11988_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m11989_gshared (List_1_t31 * __this, float ___item, const MethodInfo* method);
#define List_1_IndexOf_m11989(__this, ___item, method) (( int32_t (*) (List_1_t31 *, float, const MethodInfo*))List_1_IndexOf_m11989_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m11990_gshared (List_1_t31 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m11990(__this, ___start, ___delta, method) (( void (*) (List_1_t31 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11990_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m11991_gshared (List_1_t31 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m11991(__this, ___index, method) (( void (*) (List_1_t31 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11991_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m11992_gshared (List_1_t31 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define List_1_Insert_m11992(__this, ___index, ___item, method) (( void (*) (List_1_t31 *, int32_t, float, const MethodInfo*))List_1_Insert_m11992_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m11993_gshared (List_1_t31 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m11993(__this, ___collection, method) (( void (*) (List_1_t31 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11993_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Remove(T)
extern "C" bool List_1_Remove_m11994_gshared (List_1_t31 * __this, float ___item, const MethodInfo* method);
#define List_1_Remove_m11994(__this, ___item, method) (( bool (*) (List_1_t31 *, float, const MethodInfo*))List_1_Remove_m11994_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m11995_gshared (List_1_t31 * __this, Predicate_1_t2473 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m11995(__this, ___match, method) (( int32_t (*) (List_1_t31 *, Predicate_1_t2473 *, const MethodInfo*))List_1_RemoveAll_m11995_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m11996_gshared (List_1_t31 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m11996(__this, ___index, method) (( void (*) (List_1_t31 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11996_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Reverse()
extern "C" void List_1_Reverse_m11997_gshared (List_1_t31 * __this, const MethodInfo* method);
#define List_1_Reverse_m11997(__this, method) (( void (*) (List_1_t31 *, const MethodInfo*))List_1_Reverse_m11997_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort()
extern "C" void List_1_Sort_m11998_gshared (List_1_t31 * __this, const MethodInfo* method);
#define List_1_Sort_m11998(__this, method) (( void (*) (List_1_t31 *, const MethodInfo*))List_1_Sort_m11998_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m11999_gshared (List_1_t31 * __this, Comparison_1_t2477 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m11999(__this, ___comparison, method) (( void (*) (List_1_t31 *, Comparison_1_t2477 *, const MethodInfo*))List_1_Sort_m11999_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Single>::ToArray()
extern "C" SingleU5BU5D_t575* List_1_ToArray_m12000_gshared (List_1_t31 * __this, const MethodInfo* method);
#define List_1_ToArray_m12000(__this, method) (( SingleU5BU5D_t575* (*) (List_1_t31 *, const MethodInfo*))List_1_ToArray_m12000_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::TrimExcess()
extern "C" void List_1_TrimExcess_m12001_gshared (List_1_t31 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m12001(__this, method) (( void (*) (List_1_t31 *, const MethodInfo*))List_1_TrimExcess_m12001_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m12002_gshared (List_1_t31 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m12002(__this, method) (( int32_t (*) (List_1_t31 *, const MethodInfo*))List_1_get_Capacity_m12002_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m12003_gshared (List_1_t31 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m12003(__this, ___value, method) (( void (*) (List_1_t31 *, int32_t, const MethodInfo*))List_1_set_Capacity_m12003_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
extern "C" int32_t List_1_get_Count_m12004_gshared (List_1_t31 * __this, const MethodInfo* method);
#define List_1_get_Count_m12004(__this, method) (( int32_t (*) (List_1_t31 *, const MethodInfo*))List_1_get_Count_m12004_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
extern "C" float List_1_get_Item_m12005_gshared (List_1_t31 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m12005(__this, ___index, method) (( float (*) (List_1_t31 *, int32_t, const MethodInfo*))List_1_get_Item_m12005_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m12006_gshared (List_1_t31 * __this, int32_t ___index, float ___value, const MethodInfo* method);
#define List_1_set_Item_m12006(__this, ___index, ___value, method) (( void (*) (List_1_t31 *, int32_t, float, const MethodInfo*))List_1_set_Item_m12006_gshared)(__this, ___index, ___value, method)
