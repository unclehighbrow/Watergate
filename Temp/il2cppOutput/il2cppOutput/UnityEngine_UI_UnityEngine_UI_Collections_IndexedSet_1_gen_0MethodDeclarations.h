#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t365;
// UnityEngine.UI.Graphic
struct Graphic_t199;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t3147;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t2654;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t2656;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t202;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m1771(__this, method) (( void (*) (IndexedSet_1_t365 *, const MethodInfo*))IndexedSet_1__ctor_m13613_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m14659(__this, method) (( Object_t * (*) (IndexedSet_1_t365 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m13615_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Add(T)
#define IndexedSet_1_Add_m14660(__this, ___item, method) (( void (*) (IndexedSet_1_t365 *, Graphic_t199 *, const MethodInfo*))IndexedSet_1_Add_m13617_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Remove(T)
#define IndexedSet_1_Remove_m14661(__this, ___item, method) (( bool (*) (IndexedSet_1_t365 *, Graphic_t199 *, const MethodInfo*))IndexedSet_1_Remove_m13619_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m14662(__this, method) (( Object_t* (*) (IndexedSet_1_t365 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m13621_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Clear()
#define IndexedSet_1_Clear_m14663(__this, method) (( void (*) (IndexedSet_1_t365 *, const MethodInfo*))IndexedSet_1_Clear_m13623_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Contains(T)
#define IndexedSet_1_Contains_m14664(__this, ___item, method) (( bool (*) (IndexedSet_1_t365 *, Graphic_t199 *, const MethodInfo*))IndexedSet_1_Contains_m13625_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m14665(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t365 *, GraphicU5BU5D_t2654*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m13627_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Count()
#define IndexedSet_1_get_Count_m14666(__this, method) (( int32_t (*) (IndexedSet_1_t365 *, const MethodInfo*))IndexedSet_1_get_Count_m13629_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m14667(__this, method) (( bool (*) (IndexedSet_1_t365 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m13631_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define IndexedSet_1_IndexOf_m14668(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t365 *, Graphic_t199 *, const MethodInfo*))IndexedSet_1_IndexOf_m13633_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m14669(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t365 *, int32_t, Graphic_t199 *, const MethodInfo*))IndexedSet_1_Insert_m13635_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m14670(__this, ___index, method) (( void (*) (IndexedSet_1_t365 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m13637_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m14671(__this, ___index, method) (( Graphic_t199 * (*) (IndexedSet_1_t365 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m13639_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m14672(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t365 *, int32_t, Graphic_t199 *, const MethodInfo*))IndexedSet_1_set_Item_m13641_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m14673(__this, ___match, method) (( void (*) (IndexedSet_1_t365 *, Predicate_1_t2656 *, const MethodInfo*))IndexedSet_1_RemoveAll_m13642_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m14674(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t365 *, Comparison_1_t202 *, const MethodInfo*))IndexedSet_1_Sort_m13643_gshared)(__this, ___sortLayoutFunction, method)
