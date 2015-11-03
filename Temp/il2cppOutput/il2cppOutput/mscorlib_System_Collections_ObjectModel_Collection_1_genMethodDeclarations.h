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

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t1776;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t61;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t74;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2083;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1775;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m10658_gshared (Collection_1_t1776 * __this, const MethodInfo* method);
#define Collection_1__ctor_m10658(__this, method) (( void (*) (Collection_1_t1776 *, const MethodInfo*))Collection_1__ctor_m10658_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10659_gshared (Collection_1_t1776 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10659(__this, method) (( bool (*) (Collection_1_t1776 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10659_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m10660_gshared (Collection_1_t1776 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m10660(__this, ___array, ___index, method) (( void (*) (Collection_1_t1776 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m10660_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m10661_gshared (Collection_1_t1776 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m10661(__this, method) (( Object_t * (*) (Collection_1_t1776 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m10661_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m10662_gshared (Collection_1_t1776 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m10662(__this, ___value, method) (( int32_t (*) (Collection_1_t1776 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m10662_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m10663_gshared (Collection_1_t1776 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m10663(__this, ___value, method) (( bool (*) (Collection_1_t1776 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m10663_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m10664_gshared (Collection_1_t1776 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m10664(__this, ___value, method) (( int32_t (*) (Collection_1_t1776 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m10664_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m10665_gshared (Collection_1_t1776 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m10665(__this, ___index, ___value, method) (( void (*) (Collection_1_t1776 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m10665_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m10666_gshared (Collection_1_t1776 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m10666(__this, ___value, method) (( void (*) (Collection_1_t1776 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m10666_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m10667_gshared (Collection_1_t1776 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m10667(__this, method) (( bool (*) (Collection_1_t1776 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m10667_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m10668_gshared (Collection_1_t1776 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m10668(__this, method) (( Object_t * (*) (Collection_1_t1776 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m10668_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m10669_gshared (Collection_1_t1776 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m10669(__this, method) (( bool (*) (Collection_1_t1776 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m10669_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m10670_gshared (Collection_1_t1776 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m10670(__this, method) (( bool (*) (Collection_1_t1776 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m10670_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m10671_gshared (Collection_1_t1776 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m10671(__this, ___index, method) (( Object_t * (*) (Collection_1_t1776 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m10671_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m10672_gshared (Collection_1_t1776 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m10672(__this, ___index, ___value, method) (( void (*) (Collection_1_t1776 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m10672_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m10673_gshared (Collection_1_t1776 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m10673(__this, ___item, method) (( void (*) (Collection_1_t1776 *, Object_t *, const MethodInfo*))Collection_1_Add_m10673_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m10674_gshared (Collection_1_t1776 * __this, const MethodInfo* method);
#define Collection_1_Clear_m10674(__this, method) (( void (*) (Collection_1_t1776 *, const MethodInfo*))Collection_1_Clear_m10674_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m10675_gshared (Collection_1_t1776 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m10675(__this, method) (( void (*) (Collection_1_t1776 *, const MethodInfo*))Collection_1_ClearItems_m10675_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m10676_gshared (Collection_1_t1776 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m10676(__this, ___item, method) (( bool (*) (Collection_1_t1776 *, Object_t *, const MethodInfo*))Collection_1_Contains_m10676_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m10677_gshared (Collection_1_t1776 * __this, ObjectU5BU5D_t74* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m10677(__this, ___array, ___index, method) (( void (*) (Collection_1_t1776 *, ObjectU5BU5D_t74*, int32_t, const MethodInfo*))Collection_1_CopyTo_m10677_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m10678_gshared (Collection_1_t1776 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m10678(__this, method) (( Object_t* (*) (Collection_1_t1776 *, const MethodInfo*))Collection_1_GetEnumerator_m10678_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m10679_gshared (Collection_1_t1776 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m10679(__this, ___item, method) (( int32_t (*) (Collection_1_t1776 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m10679_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m10680_gshared (Collection_1_t1776 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m10680(__this, ___index, ___item, method) (( void (*) (Collection_1_t1776 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m10680_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m10681_gshared (Collection_1_t1776 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m10681(__this, ___index, ___item, method) (( void (*) (Collection_1_t1776 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m10681_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m10682_gshared (Collection_1_t1776 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m10682(__this, ___item, method) (( bool (*) (Collection_1_t1776 *, Object_t *, const MethodInfo*))Collection_1_Remove_m10682_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m10683_gshared (Collection_1_t1776 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m10683(__this, ___index, method) (( void (*) (Collection_1_t1776 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m10683_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m10684_gshared (Collection_1_t1776 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m10684(__this, ___index, method) (( void (*) (Collection_1_t1776 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m10684_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m10685_gshared (Collection_1_t1776 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m10685(__this, method) (( int32_t (*) (Collection_1_t1776 *, const MethodInfo*))Collection_1_get_Count_m10685_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m10686_gshared (Collection_1_t1776 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m10686(__this, ___index, method) (( Object_t * (*) (Collection_1_t1776 *, int32_t, const MethodInfo*))Collection_1_get_Item_m10686_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m10687_gshared (Collection_1_t1776 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m10687(__this, ___index, ___value, method) (( void (*) (Collection_1_t1776 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m10687_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m10688_gshared (Collection_1_t1776 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m10688(__this, ___index, ___item, method) (( void (*) (Collection_1_t1776 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m10688_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m10689_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m10689(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m10689_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m10690_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m10690(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m10690_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m10691_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m10691(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m10691_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m10692_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m10692(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m10692_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m10693_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m10693(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m10693_gshared)(__this /* static, unused */, ___list, method)
