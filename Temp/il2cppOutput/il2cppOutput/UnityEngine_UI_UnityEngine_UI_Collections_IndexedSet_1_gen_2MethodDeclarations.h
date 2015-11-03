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

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t1943;
// System.Collections.IEnumerator
struct IEnumerator_t61;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2083;
// System.Object[]
struct ObjectU5BU5D_t74;
// System.Predicate`1<System.Object>
struct Predicate_1_t1780;
// System.Comparison`1<System.Object>
struct Comparison_1_t1786;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m12816_gshared (IndexedSet_1_t1943 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m12816(__this, method) (( void (*) (IndexedSet_1_t1943 *, const MethodInfo*))IndexedSet_1__ctor_m12816_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12818_gshared (IndexedSet_1_t1943 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12818(__this, method) (( Object_t * (*) (IndexedSet_1_t1943 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12818_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m12820_gshared (IndexedSet_1_t1943 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m12820(__this, ___item, method) (( void (*) (IndexedSet_1_t1943 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m12820_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m12822_gshared (IndexedSet_1_t1943 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m12822(__this, ___item, method) (( bool (*) (IndexedSet_1_t1943 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m12822_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m12824_gshared (IndexedSet_1_t1943 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m12824(__this, method) (( Object_t* (*) (IndexedSet_1_t1943 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m12824_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m12826_gshared (IndexedSet_1_t1943 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m12826(__this, method) (( void (*) (IndexedSet_1_t1943 *, const MethodInfo*))IndexedSet_1_Clear_m12826_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m12828_gshared (IndexedSet_1_t1943 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m12828(__this, ___item, method) (( bool (*) (IndexedSet_1_t1943 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m12828_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m12830_gshared (IndexedSet_1_t1943 * __this, ObjectU5BU5D_t74* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m12830(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t1943 *, ObjectU5BU5D_t74*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m12830_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m12832_gshared (IndexedSet_1_t1943 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m12832(__this, method) (( int32_t (*) (IndexedSet_1_t1943 *, const MethodInfo*))IndexedSet_1_get_Count_m12832_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m12834_gshared (IndexedSet_1_t1943 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m12834(__this, method) (( bool (*) (IndexedSet_1_t1943 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m12834_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m12836_gshared (IndexedSet_1_t1943 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m12836(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t1943 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m12836_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m12838_gshared (IndexedSet_1_t1943 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m12838(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t1943 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m12838_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m12840_gshared (IndexedSet_1_t1943 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m12840(__this, ___index, method) (( void (*) (IndexedSet_1_t1943 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m12840_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m12842_gshared (IndexedSet_1_t1943 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m12842(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t1943 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m12842_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m12844_gshared (IndexedSet_1_t1943 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m12844(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t1943 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m12844_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m12845_gshared (IndexedSet_1_t1943 * __this, Predicate_1_t1780 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m12845(__this, ___match, method) (( void (*) (IndexedSet_1_t1943 *, Predicate_1_t1780 *, const MethodInfo*))IndexedSet_1_RemoveAll_m12845_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m12846_gshared (IndexedSet_1_t1943 * __this, Comparison_1_t1786 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m12846(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t1943 *, Comparison_1_t1786 *, const MethodInfo*))IndexedSet_1_Sort_m12846_gshared)(__this, ___sortLayoutFunction, method)
