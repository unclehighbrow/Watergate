#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t364;
// UnityEngine.UI.Graphic
struct Graphic_t198;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t3146;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t2653;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t2655;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t201;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m1760(__this, method) (( void (*) (IndexedSet_1_t364 *, const MethodInfo*))IndexedSet_1__ctor_m13605_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m14651(__this, method) (( Object_t * (*) (IndexedSet_1_t364 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m13607_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Add(T)
#define IndexedSet_1_Add_m14652(__this, ___item, method) (( void (*) (IndexedSet_1_t364 *, Graphic_t198 *, const MethodInfo*))IndexedSet_1_Add_m13609_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Remove(T)
#define IndexedSet_1_Remove_m14653(__this, ___item, method) (( bool (*) (IndexedSet_1_t364 *, Graphic_t198 *, const MethodInfo*))IndexedSet_1_Remove_m13611_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m14654(__this, method) (( Object_t* (*) (IndexedSet_1_t364 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m13613_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Clear()
#define IndexedSet_1_Clear_m14655(__this, method) (( void (*) (IndexedSet_1_t364 *, const MethodInfo*))IndexedSet_1_Clear_m13615_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Contains(T)
#define IndexedSet_1_Contains_m14656(__this, ___item, method) (( bool (*) (IndexedSet_1_t364 *, Graphic_t198 *, const MethodInfo*))IndexedSet_1_Contains_m13617_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m14657(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t364 *, GraphicU5BU5D_t2653*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m13619_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Count()
#define IndexedSet_1_get_Count_m14658(__this, method) (( int32_t (*) (IndexedSet_1_t364 *, const MethodInfo*))IndexedSet_1_get_Count_m13621_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m14659(__this, method) (( bool (*) (IndexedSet_1_t364 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m13623_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define IndexedSet_1_IndexOf_m14660(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t364 *, Graphic_t198 *, const MethodInfo*))IndexedSet_1_IndexOf_m13625_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m14661(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t364 *, int32_t, Graphic_t198 *, const MethodInfo*))IndexedSet_1_Insert_m13627_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m14662(__this, ___index, method) (( void (*) (IndexedSet_1_t364 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m13629_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m14663(__this, ___index, method) (( Graphic_t198 * (*) (IndexedSet_1_t364 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m13631_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m14664(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t364 *, int32_t, Graphic_t198 *, const MethodInfo*))IndexedSet_1_set_Item_m13633_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m14665(__this, ___match, method) (( void (*) (IndexedSet_1_t364 *, Predicate_1_t2655 *, const MethodInfo*))IndexedSet_1_RemoveAll_m13634_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m14666(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t364 *, Comparison_1_t201 *, const MethodInfo*))IndexedSet_1_Sort_m13635_gshared)(__this, ___sortLayoutFunction, method)
