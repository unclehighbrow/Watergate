#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t38;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector2>
struct IEnumerable_1_t3071;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector2>
struct IEnumerator_1_t3072;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Collections.Generic.ICollection`1<UnityEngine.Vector2>
struct ICollection_1_t3073;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>
struct ReadOnlyCollection_1_t2481;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t212;
// System.Predicate`1<UnityEngine.Vector2>
struct Predicate_1_t2485;
// System.Comparison`1<UnityEngine.Vector2>
struct Comparison_1_t2488;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
extern "C" void List_1__ctor_m289_gshared (List_1_t38 * __this, const MethodInfo* method);
#define List_1__ctor_m289(__this, method) (( void (*) (List_1_t38 *, const MethodInfo*))List_1__ctor_m289_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m12116_gshared (List_1_t38 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m12116(__this, ___collection, method) (( void (*) (List_1_t38 *, Object_t*, const MethodInfo*))List_1__ctor_m12116_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor(System.Int32)
extern "C" void List_1__ctor_m12117_gshared (List_1_t38 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m12117(__this, ___capacity, method) (( void (*) (List_1_t38 *, int32_t, const MethodInfo*))List_1__ctor_m12117_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.cctor()
extern "C" void List_1__cctor_m12118_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m12118(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m12118_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12119_gshared (List_1_t38 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12119(__this, method) (( Object_t* (*) (List_1_t38 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12119_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m12120_gshared (List_1_t38 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m12120(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t38 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m12120_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m12121_gshared (List_1_t38 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m12121(__this, method) (( Object_t * (*) (List_1_t38 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m12121_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m12122_gshared (List_1_t38 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m12122(__this, ___item, method) (( int32_t (*) (List_1_t38 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m12122_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m12123_gshared (List_1_t38 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m12123(__this, ___item, method) (( bool (*) (List_1_t38 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m12123_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m12124_gshared (List_1_t38 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m12124(__this, ___item, method) (( int32_t (*) (List_1_t38 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m12124_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m12125_gshared (List_1_t38 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m12125(__this, ___index, ___item, method) (( void (*) (List_1_t38 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m12125_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m12126_gshared (List_1_t38 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m12126(__this, ___item, method) (( void (*) (List_1_t38 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m12126_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12127_gshared (List_1_t38 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12127(__this, method) (( bool (*) (List_1_t38 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12127_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m12128_gshared (List_1_t38 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m12128(__this, method) (( bool (*) (List_1_t38 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m12128_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m12129_gshared (List_1_t38 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m12129(__this, method) (( Object_t * (*) (List_1_t38 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m12129_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m12130_gshared (List_1_t38 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m12130(__this, method) (( bool (*) (List_1_t38 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m12130_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m12131_gshared (List_1_t38 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m12131(__this, method) (( bool (*) (List_1_t38 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m12131_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m12132_gshared (List_1_t38 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m12132(__this, ___index, method) (( Object_t * (*) (List_1_t38 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m12132_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m12133_gshared (List_1_t38 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m12133(__this, ___index, ___value, method) (( void (*) (List_1_t38 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m12133_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(T)
extern "C" void List_1_Add_m12134_gshared (List_1_t38 * __this, Vector2_t35  ___item, const MethodInfo* method);
#define List_1_Add_m12134(__this, ___item, method) (( void (*) (List_1_t38 *, Vector2_t35 , const MethodInfo*))List_1_Add_m12134_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m12135_gshared (List_1_t38 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m12135(__this, ___newCount, method) (( void (*) (List_1_t38 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m12135_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m12136_gshared (List_1_t38 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m12136(__this, ___collection, method) (( void (*) (List_1_t38 *, Object_t*, const MethodInfo*))List_1_AddCollection_m12136_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m12137_gshared (List_1_t38 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m12137(__this, ___enumerable, method) (( void (*) (List_1_t38 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m12137_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m12138_gshared (List_1_t38 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m12138(__this, ___collection, method) (( void (*) (List_1_t38 *, Object_t*, const MethodInfo*))List_1_AddRange_m12138_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Vector2>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2481 * List_1_AsReadOnly_m12139_gshared (List_1_t38 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m12139(__this, method) (( ReadOnlyCollection_1_t2481 * (*) (List_1_t38 *, const MethodInfo*))List_1_AsReadOnly_m12139_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Clear()
extern "C" void List_1_Clear_m12140_gshared (List_1_t38 * __this, const MethodInfo* method);
#define List_1_Clear_m12140(__this, method) (( void (*) (List_1_t38 *, const MethodInfo*))List_1_Clear_m12140_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::Contains(T)
extern "C" bool List_1_Contains_m12141_gshared (List_1_t38 * __this, Vector2_t35  ___item, const MethodInfo* method);
#define List_1_Contains_m12141(__this, ___item, method) (( bool (*) (List_1_t38 *, Vector2_t35 , const MethodInfo*))List_1_Contains_m12141_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m12142_gshared (List_1_t38 * __this, Vector2U5BU5D_t212* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m12142(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t38 *, Vector2U5BU5D_t212*, int32_t, const MethodInfo*))List_1_CopyTo_m12142_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Vector2>::Find(System.Predicate`1<T>)
extern "C" Vector2_t35  List_1_Find_m12143_gshared (List_1_t38 * __this, Predicate_1_t2485 * ___match, const MethodInfo* method);
#define List_1_Find_m12143(__this, ___match, method) (( Vector2_t35  (*) (List_1_t38 *, Predicate_1_t2485 *, const MethodInfo*))List_1_Find_m12143_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m12144_gshared (Object_t * __this /* static, unused */, Predicate_1_t2485 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m12144(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2485 *, const MethodInfo*))List_1_CheckMatch_m12144_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m12145_gshared (List_1_t38 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2485 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m12145(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t38 *, int32_t, int32_t, Predicate_1_t2485 *, const MethodInfo*))List_1_GetIndex_m12145_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Vector2>::GetEnumerator()
extern "C" Enumerator_t89  List_1_GetEnumerator_m290_gshared (List_1_t38 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m290(__this, method) (( Enumerator_t89  (*) (List_1_t38 *, const MethodInfo*))List_1_GetEnumerator_m290_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m12146_gshared (List_1_t38 * __this, Vector2_t35  ___item, const MethodInfo* method);
#define List_1_IndexOf_m12146(__this, ___item, method) (( int32_t (*) (List_1_t38 *, Vector2_t35 , const MethodInfo*))List_1_IndexOf_m12146_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m12147_gshared (List_1_t38 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m12147(__this, ___start, ___delta, method) (( void (*) (List_1_t38 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m12147_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m12148_gshared (List_1_t38 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m12148(__this, ___index, method) (( void (*) (List_1_t38 *, int32_t, const MethodInfo*))List_1_CheckIndex_m12148_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m12149_gshared (List_1_t38 * __this, int32_t ___index, Vector2_t35  ___item, const MethodInfo* method);
#define List_1_Insert_m12149(__this, ___index, ___item, method) (( void (*) (List_1_t38 *, int32_t, Vector2_t35 , const MethodInfo*))List_1_Insert_m12149_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m12150_gshared (List_1_t38 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m12150(__this, ___collection, method) (( void (*) (List_1_t38 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m12150_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::Remove(T)
extern "C" bool List_1_Remove_m12151_gshared (List_1_t38 * __this, Vector2_t35  ___item, const MethodInfo* method);
#define List_1_Remove_m12151(__this, ___item, method) (( bool (*) (List_1_t38 *, Vector2_t35 , const MethodInfo*))List_1_Remove_m12151_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m12152_gshared (List_1_t38 * __this, Predicate_1_t2485 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m12152(__this, ___match, method) (( int32_t (*) (List_1_t38 *, Predicate_1_t2485 *, const MethodInfo*))List_1_RemoveAll_m12152_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m12153_gshared (List_1_t38 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m12153(__this, ___index, method) (( void (*) (List_1_t38 *, int32_t, const MethodInfo*))List_1_RemoveAt_m12153_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Reverse()
extern "C" void List_1_Reverse_m12154_gshared (List_1_t38 * __this, const MethodInfo* method);
#define List_1_Reverse_m12154(__this, method) (( void (*) (List_1_t38 *, const MethodInfo*))List_1_Reverse_m12154_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Sort()
extern "C" void List_1_Sort_m12155_gshared (List_1_t38 * __this, const MethodInfo* method);
#define List_1_Sort_m12155(__this, method) (( void (*) (List_1_t38 *, const MethodInfo*))List_1_Sort_m12155_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m12156_gshared (List_1_t38 * __this, Comparison_1_t2488 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m12156(__this, ___comparison, method) (( void (*) (List_1_t38 *, Comparison_1_t2488 *, const MethodInfo*))List_1_Sort_m12156_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Vector2>::ToArray()
extern "C" Vector2U5BU5D_t212* List_1_ToArray_m12157_gshared (List_1_t38 * __this, const MethodInfo* method);
#define List_1_ToArray_m12157(__this, method) (( Vector2U5BU5D_t212* (*) (List_1_t38 *, const MethodInfo*))List_1_ToArray_m12157_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::TrimExcess()
extern "C" void List_1_TrimExcess_m12158_gshared (List_1_t38 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m12158(__this, method) (( void (*) (List_1_t38 *, const MethodInfo*))List_1_TrimExcess_m12158_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m12159_gshared (List_1_t38 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m12159(__this, method) (( int32_t (*) (List_1_t38 *, const MethodInfo*))List_1_get_Capacity_m12159_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m12160_gshared (List_1_t38 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m12160(__this, ___value, method) (( void (*) (List_1_t38 *, int32_t, const MethodInfo*))List_1_set_Capacity_m12160_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
extern "C" int32_t List_1_get_Count_m12161_gshared (List_1_t38 * __this, const MethodInfo* method);
#define List_1_get_Count_m12161(__this, method) (( int32_t (*) (List_1_t38 *, const MethodInfo*))List_1_get_Count_m12161_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
extern "C" Vector2_t35  List_1_get_Item_m12162_gshared (List_1_t38 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m12162(__this, ___index, method) (( Vector2_t35  (*) (List_1_t38 *, int32_t, const MethodInfo*))List_1_get_Item_m12162_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m12163_gshared (List_1_t38 * __this, int32_t ___index, Vector2_t35  ___value, const MethodInfo* method);
#define List_1_set_Item_m12163(__this, ___index, ___value, method) (( void (*) (List_1_t38 *, int32_t, Vector2_t35 , const MethodInfo*))List_1_set_Item_m12163_gshared)(__this, ___index, ___value, method)
