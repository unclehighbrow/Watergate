#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t2432;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Object[]
struct ObjectU5BU5D_t73;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t112;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t875;

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m11490_gshared (Collection_1_t2432 * __this, const MethodInfo* method);
#define Collection_1__ctor_m11490(__this, method) (( void (*) (Collection_1_t2432 *, const MethodInfo*))Collection_1__ctor_m11490_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11491_gshared (Collection_1_t2432 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11491(__this, method) (( bool (*) (Collection_1_t2432 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11491_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m11492_gshared (Collection_1_t2432 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m11492(__this, ___array, ___index, method) (( void (*) (Collection_1_t2432 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m11492_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m11493_gshared (Collection_1_t2432 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m11493(__this, method) (( Object_t * (*) (Collection_1_t2432 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m11493_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m11494_gshared (Collection_1_t2432 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m11494(__this, ___value, method) (( int32_t (*) (Collection_1_t2432 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m11494_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m11495_gshared (Collection_1_t2432 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m11495(__this, ___value, method) (( bool (*) (Collection_1_t2432 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m11495_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m11496_gshared (Collection_1_t2432 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m11496(__this, ___value, method) (( int32_t (*) (Collection_1_t2432 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m11496_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m11497_gshared (Collection_1_t2432 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m11497(__this, ___index, ___value, method) (( void (*) (Collection_1_t2432 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m11497_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m11498_gshared (Collection_1_t2432 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m11498(__this, ___value, method) (( void (*) (Collection_1_t2432 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m11498_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m11499_gshared (Collection_1_t2432 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m11499(__this, method) (( bool (*) (Collection_1_t2432 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m11499_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m11500_gshared (Collection_1_t2432 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m11500(__this, method) (( Object_t * (*) (Collection_1_t2432 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m11500_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m11501_gshared (Collection_1_t2432 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m11501(__this, method) (( bool (*) (Collection_1_t2432 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m11501_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m11502_gshared (Collection_1_t2432 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m11502(__this, method) (( bool (*) (Collection_1_t2432 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m11502_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m11503_gshared (Collection_1_t2432 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m11503(__this, ___index, method) (( Object_t * (*) (Collection_1_t2432 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m11503_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m11504_gshared (Collection_1_t2432 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m11504(__this, ___index, ___value, method) (( void (*) (Collection_1_t2432 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m11504_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m11505_gshared (Collection_1_t2432 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m11505(__this, ___item, method) (( void (*) (Collection_1_t2432 *, Object_t *, const MethodInfo*))Collection_1_Add_m11505_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m11506_gshared (Collection_1_t2432 * __this, const MethodInfo* method);
#define Collection_1_Clear_m11506(__this, method) (( void (*) (Collection_1_t2432 *, const MethodInfo*))Collection_1_Clear_m11506_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m11507_gshared (Collection_1_t2432 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m11507(__this, method) (( void (*) (Collection_1_t2432 *, const MethodInfo*))Collection_1_ClearItems_m11507_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m11508_gshared (Collection_1_t2432 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m11508(__this, ___item, method) (( bool (*) (Collection_1_t2432 *, Object_t *, const MethodInfo*))Collection_1_Contains_m11508_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m11509_gshared (Collection_1_t2432 * __this, ObjectU5BU5D_t73* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m11509(__this, ___array, ___index, method) (( void (*) (Collection_1_t2432 *, ObjectU5BU5D_t73*, int32_t, const MethodInfo*))Collection_1_CopyTo_m11509_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m11510_gshared (Collection_1_t2432 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m11510(__this, method) (( Object_t* (*) (Collection_1_t2432 *, const MethodInfo*))Collection_1_GetEnumerator_m11510_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m11511_gshared (Collection_1_t2432 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m11511(__this, ___item, method) (( int32_t (*) (Collection_1_t2432 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m11511_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m11512_gshared (Collection_1_t2432 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m11512(__this, ___index, ___item, method) (( void (*) (Collection_1_t2432 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m11512_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m11513_gshared (Collection_1_t2432 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m11513(__this, ___index, ___item, method) (( void (*) (Collection_1_t2432 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m11513_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m11514_gshared (Collection_1_t2432 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m11514(__this, ___item, method) (( bool (*) (Collection_1_t2432 *, Object_t *, const MethodInfo*))Collection_1_Remove_m11514_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m11515_gshared (Collection_1_t2432 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m11515(__this, ___index, method) (( void (*) (Collection_1_t2432 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m11515_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m11516_gshared (Collection_1_t2432 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m11516(__this, ___index, method) (( void (*) (Collection_1_t2432 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m11516_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m11517_gshared (Collection_1_t2432 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m11517(__this, method) (( int32_t (*) (Collection_1_t2432 *, const MethodInfo*))Collection_1_get_Count_m11517_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m11518_gshared (Collection_1_t2432 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m11518(__this, ___index, method) (( Object_t * (*) (Collection_1_t2432 *, int32_t, const MethodInfo*))Collection_1_get_Item_m11518_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m11519_gshared (Collection_1_t2432 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m11519(__this, ___index, ___value, method) (( void (*) (Collection_1_t2432 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m11519_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m11520_gshared (Collection_1_t2432 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m11520(__this, ___index, ___item, method) (( void (*) (Collection_1_t2432 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m11520_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m11521_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m11521(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m11521_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m11522_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m11522(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m11522_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m11523_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m11523(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m11523_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m11524_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m11524(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m11524_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m11525_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m11525(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m11525_gshared)(__this /* static, unused */, ___list, method)
