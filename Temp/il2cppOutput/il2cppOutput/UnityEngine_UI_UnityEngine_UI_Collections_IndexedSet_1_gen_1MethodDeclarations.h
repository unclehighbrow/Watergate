#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t2594;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t112;
// System.Object[]
struct ObjectU5BU5D_t73;
// System.Predicate`1<System.Object>
struct Predicate_1_t2436;
// System.Comparison`1<System.Object>
struct Comparison_1_t2443;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m13613_gshared (IndexedSet_1_t2594 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m13613(__this, method) (( void (*) (IndexedSet_1_t2594 *, const MethodInfo*))IndexedSet_1__ctor_m13613_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m13615_gshared (IndexedSet_1_t2594 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m13615(__this, method) (( Object_t * (*) (IndexedSet_1_t2594 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m13615_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m13617_gshared (IndexedSet_1_t2594 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m13617(__this, ___item, method) (( void (*) (IndexedSet_1_t2594 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m13617_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m13619_gshared (IndexedSet_1_t2594 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m13619(__this, ___item, method) (( bool (*) (IndexedSet_1_t2594 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m13619_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m13621_gshared (IndexedSet_1_t2594 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m13621(__this, method) (( Object_t* (*) (IndexedSet_1_t2594 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m13621_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m13623_gshared (IndexedSet_1_t2594 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m13623(__this, method) (( void (*) (IndexedSet_1_t2594 *, const MethodInfo*))IndexedSet_1_Clear_m13623_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m13625_gshared (IndexedSet_1_t2594 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m13625(__this, ___item, method) (( bool (*) (IndexedSet_1_t2594 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m13625_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m13627_gshared (IndexedSet_1_t2594 * __this, ObjectU5BU5D_t73* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m13627(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t2594 *, ObjectU5BU5D_t73*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m13627_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m13629_gshared (IndexedSet_1_t2594 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m13629(__this, method) (( int32_t (*) (IndexedSet_1_t2594 *, const MethodInfo*))IndexedSet_1_get_Count_m13629_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m13631_gshared (IndexedSet_1_t2594 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m13631(__this, method) (( bool (*) (IndexedSet_1_t2594 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m13631_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m13633_gshared (IndexedSet_1_t2594 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m13633(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t2594 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m13633_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m13635_gshared (IndexedSet_1_t2594 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m13635(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t2594 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m13635_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m13637_gshared (IndexedSet_1_t2594 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m13637(__this, ___index, method) (( void (*) (IndexedSet_1_t2594 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m13637_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m13639_gshared (IndexedSet_1_t2594 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m13639(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t2594 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m13639_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m13641_gshared (IndexedSet_1_t2594 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m13641(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t2594 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m13641_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m13642_gshared (IndexedSet_1_t2594 * __this, Predicate_1_t2436 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m13642(__this, ___match, method) (( void (*) (IndexedSet_1_t2594 *, Predicate_1_t2436 *, const MethodInfo*))IndexedSet_1_RemoveAll_m13642_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m13643_gshared (IndexedSet_1_t2594 * __this, Comparison_1_t2443 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m13643(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t2594 *, Comparison_1_t2443 *, const MethodInfo*))IndexedSet_1_Sort_m13643_gshared)(__this, ___sortLayoutFunction, method)
