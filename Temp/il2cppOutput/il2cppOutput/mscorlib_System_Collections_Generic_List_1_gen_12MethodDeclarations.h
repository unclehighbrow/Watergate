﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct List_1_t163;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.PointerInputModule/ButtonState
struct ButtonState_t162;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct IEnumerable_1_t3111;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct IEnumerator_1_t3112;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct ICollection_1_t3113;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct ReadOnlyCollection_1_t2586;
// UnityEngine.EventSystems.PointerInputModule/ButtonState[]
struct ButtonStateU5BU5D_t2584;
// System.Predicate`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct Predicate_1_t2587;
// System.Comparison`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct Comparison_1_t2589;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_17.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_23MethodDeclarations.h"
#define List_1__ctor_m1618(__this, method) (( void (*) (List_1_t163 *, const MethodInfo*))List_1__ctor_m3585_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m13503(__this, ___collection, method) (( void (*) (List_1_t163 *, Object_t*, const MethodInfo*))List_1__ctor_m11432_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.ctor(System.Int32)
#define List_1__ctor_m13504(__this, ___capacity, method) (( void (*) (List_1_t163 *, int32_t, const MethodInfo*))List_1__ctor_m11433_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.cctor()
#define List_1__cctor_m13505(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11434_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13506(__this, method) (( Object_t* (*) (List_1_t163 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3835_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m13507(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t163 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m3818_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13508(__this, method) (( Object_t * (*) (List_1_t163 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m3814_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m13509(__this, ___item, method) (( int32_t (*) (List_1_t163 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m3823_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m13510(__this, ___item, method) (( bool (*) (List_1_t163 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m3825_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m13511(__this, ___item, method) (( int32_t (*) (List_1_t163 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m3826_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m13512(__this, ___index, ___item, method) (( void (*) (List_1_t163 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m3827_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m13513(__this, ___item, method) (( void (*) (List_1_t163 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m3828_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13514(__this, method) (( bool (*) (List_1_t163 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3830_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m13515(__this, method) (( bool (*) (List_1_t163 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m3816_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m13516(__this, method) (( Object_t * (*) (List_1_t163 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m3817_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m13517(__this, method) (( bool (*) (List_1_t163 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m3819_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m13518(__this, method) (( bool (*) (List_1_t163 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m3820_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m13519(__this, ___index, method) (( Object_t * (*) (List_1_t163 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m3821_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m13520(__this, ___index, ___value, method) (( void (*) (List_1_t163 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m3822_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Add(T)
#define List_1_Add_m13521(__this, ___item, method) (( void (*) (List_1_t163 *, ButtonState_t162 *, const MethodInfo*))List_1_Add_m3831_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m13522(__this, ___newCount, method) (( void (*) (List_1_t163 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11435_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m13523(__this, ___collection, method) (( void (*) (List_1_t163 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11436_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m13524(__this, ___enumerable, method) (( void (*) (List_1_t163 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11437_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m13525(__this, ___collection, method) (( void (*) (List_1_t163 *, Object_t*, const MethodInfo*))List_1_AddRange_m11438_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::AsReadOnly()
#define List_1_AsReadOnly_m13526(__this, method) (( ReadOnlyCollection_1_t2586 * (*) (List_1_t163 *, const MethodInfo*))List_1_AsReadOnly_m11439_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Clear()
#define List_1_Clear_m13527(__this, method) (( void (*) (List_1_t163 *, const MethodInfo*))List_1_Clear_m3824_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Contains(T)
#define List_1_Contains_m13528(__this, ___item, method) (( bool (*) (List_1_t163 *, ButtonState_t162 *, const MethodInfo*))List_1_Contains_m3832_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m13529(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t163 *, ButtonStateU5BU5D_t2584*, int32_t, const MethodInfo*))List_1_CopyTo_m3833_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Find(System.Predicate`1<T>)
#define List_1_Find_m13530(__this, ___match, method) (( ButtonState_t162 * (*) (List_1_t163 *, Predicate_1_t2587 *, const MethodInfo*))List_1_Find_m11440_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m13531(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2587 *, const MethodInfo*))List_1_CheckMatch_m11441_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m13532(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t163 *, int32_t, int32_t, Predicate_1_t2587 *, const MethodInfo*))List_1_GetIndex_m11442_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::GetEnumerator()
#define List_1_GetEnumerator_m13533(__this, method) (( Enumerator_t2588  (*) (List_1_t163 *, const MethodInfo*))List_1_GetEnumerator_m11443_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::IndexOf(T)
#define List_1_IndexOf_m13534(__this, ___item, method) (( int32_t (*) (List_1_t163 *, ButtonState_t162 *, const MethodInfo*))List_1_IndexOf_m3836_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m13535(__this, ___start, ___delta, method) (( void (*) (List_1_t163 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11444_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m13536(__this, ___index, method) (( void (*) (List_1_t163 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11445_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Insert(System.Int32,T)
#define List_1_Insert_m13537(__this, ___index, ___item, method) (( void (*) (List_1_t163 *, int32_t, ButtonState_t162 *, const MethodInfo*))List_1_Insert_m3837_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m13538(__this, ___collection, method) (( void (*) (List_1_t163 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11446_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Remove(T)
#define List_1_Remove_m13539(__this, ___item, method) (( bool (*) (List_1_t163 *, ButtonState_t162 *, const MethodInfo*))List_1_Remove_m3834_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m13540(__this, ___match, method) (( int32_t (*) (List_1_t163 *, Predicate_1_t2587 *, const MethodInfo*))List_1_RemoveAll_m11447_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m13541(__this, ___index, method) (( void (*) (List_1_t163 *, int32_t, const MethodInfo*))List_1_RemoveAt_m3829_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Reverse()
#define List_1_Reverse_m13542(__this, method) (( void (*) (List_1_t163 *, const MethodInfo*))List_1_Reverse_m11448_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Sort()
#define List_1_Sort_m13543(__this, method) (( void (*) (List_1_t163 *, const MethodInfo*))List_1_Sort_m11449_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m13544(__this, ___comparison, method) (( void (*) (List_1_t163 *, Comparison_1_t2589 *, const MethodInfo*))List_1_Sort_m11450_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::ToArray()
#define List_1_ToArray_m13545(__this, method) (( ButtonStateU5BU5D_t2584* (*) (List_1_t163 *, const MethodInfo*))List_1_ToArray_m11451_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::TrimExcess()
#define List_1_TrimExcess_m13546(__this, method) (( void (*) (List_1_t163 *, const MethodInfo*))List_1_TrimExcess_m11452_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Capacity()
#define List_1_get_Capacity_m13547(__this, method) (( int32_t (*) (List_1_t163 *, const MethodInfo*))List_1_get_Capacity_m11453_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m13548(__this, ___value, method) (( void (*) (List_1_t163 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11454_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Count()
#define List_1_get_Count_m13549(__this, method) (( int32_t (*) (List_1_t163 *, const MethodInfo*))List_1_get_Count_m3815_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Item(System.Int32)
#define List_1_get_Item_m13550(__this, ___index, method) (( ButtonState_t162 * (*) (List_1_t163 *, int32_t, const MethodInfo*))List_1_get_Item_m3838_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::set_Item(System.Int32,T)
#define List_1_set_Item_m13551(__this, ___index, ___value, method) (( void (*) (List_1_t163 *, int32_t, ButtonState_t162 *, const MethodInfo*))List_1_set_Item_m3839_gshared)(__this, ___index, ___value, method)
