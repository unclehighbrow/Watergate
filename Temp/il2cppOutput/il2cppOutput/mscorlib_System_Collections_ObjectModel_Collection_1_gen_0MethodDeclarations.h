#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Single>
struct Collection_1_t2469;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Single[]
struct SingleU5BU5D_t575;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t3069;
// System.Collections.Generic.IList`1<System.Single>
struct IList_1_t2467;

// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::.ctor()
extern "C" void Collection_1__ctor_m12048_gshared (Collection_1_t2469 * __this, const MethodInfo* method);
#define Collection_1__ctor_m12048(__this, method) (( void (*) (Collection_1_t2469 *, const MethodInfo*))Collection_1__ctor_m12048_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12049_gshared (Collection_1_t2469 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12049(__this, method) (( bool (*) (Collection_1_t2469 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12049_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m12050_gshared (Collection_1_t2469 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m12050(__this, ___array, ___index, method) (( void (*) (Collection_1_t2469 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m12050_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m12051_gshared (Collection_1_t2469 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m12051(__this, method) (( Object_t * (*) (Collection_1_t2469 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m12051_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m12052_gshared (Collection_1_t2469 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m12052(__this, ___value, method) (( int32_t (*) (Collection_1_t2469 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m12052_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m12053_gshared (Collection_1_t2469 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m12053(__this, ___value, method) (( bool (*) (Collection_1_t2469 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m12053_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m12054_gshared (Collection_1_t2469 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m12054(__this, ___value, method) (( int32_t (*) (Collection_1_t2469 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m12054_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m12055_gshared (Collection_1_t2469 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m12055(__this, ___index, ___value, method) (( void (*) (Collection_1_t2469 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m12055_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m12056_gshared (Collection_1_t2469 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m12056(__this, ___value, method) (( void (*) (Collection_1_t2469 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m12056_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m12057_gshared (Collection_1_t2469 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m12057(__this, method) (( bool (*) (Collection_1_t2469 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m12057_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m12058_gshared (Collection_1_t2469 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m12058(__this, method) (( Object_t * (*) (Collection_1_t2469 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m12058_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m12059_gshared (Collection_1_t2469 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m12059(__this, method) (( bool (*) (Collection_1_t2469 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m12059_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m12060_gshared (Collection_1_t2469 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m12060(__this, method) (( bool (*) (Collection_1_t2469 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m12060_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m12061_gshared (Collection_1_t2469 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m12061(__this, ___index, method) (( Object_t * (*) (Collection_1_t2469 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m12061_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m12062_gshared (Collection_1_t2469 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m12062(__this, ___index, ___value, method) (( void (*) (Collection_1_t2469 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m12062_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::Add(T)
extern "C" void Collection_1_Add_m12063_gshared (Collection_1_t2469 * __this, float ___item, const MethodInfo* method);
#define Collection_1_Add_m12063(__this, ___item, method) (( void (*) (Collection_1_t2469 *, float, const MethodInfo*))Collection_1_Add_m12063_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::Clear()
extern "C" void Collection_1_Clear_m12064_gshared (Collection_1_t2469 * __this, const MethodInfo* method);
#define Collection_1_Clear_m12064(__this, method) (( void (*) (Collection_1_t2469 *, const MethodInfo*))Collection_1_Clear_m12064_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::ClearItems()
extern "C" void Collection_1_ClearItems_m12065_gshared (Collection_1_t2469 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m12065(__this, method) (( void (*) (Collection_1_t2469 *, const MethodInfo*))Collection_1_ClearItems_m12065_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::Contains(T)
extern "C" bool Collection_1_Contains_m12066_gshared (Collection_1_t2469 * __this, float ___item, const MethodInfo* method);
#define Collection_1_Contains_m12066(__this, ___item, method) (( bool (*) (Collection_1_t2469 *, float, const MethodInfo*))Collection_1_Contains_m12066_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m12067_gshared (Collection_1_t2469 * __this, SingleU5BU5D_t575* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m12067(__this, ___array, ___index, method) (( void (*) (Collection_1_t2469 *, SingleU5BU5D_t575*, int32_t, const MethodInfo*))Collection_1_CopyTo_m12067_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Single>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m12068_gshared (Collection_1_t2469 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m12068(__this, method) (( Object_t* (*) (Collection_1_t2469 *, const MethodInfo*))Collection_1_GetEnumerator_m12068_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Single>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m12069_gshared (Collection_1_t2469 * __this, float ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m12069(__this, ___item, method) (( int32_t (*) (Collection_1_t2469 *, float, const MethodInfo*))Collection_1_IndexOf_m12069_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m12070_gshared (Collection_1_t2469 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define Collection_1_Insert_m12070(__this, ___index, ___item, method) (( void (*) (Collection_1_t2469 *, int32_t, float, const MethodInfo*))Collection_1_Insert_m12070_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m12071_gshared (Collection_1_t2469 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m12071(__this, ___index, ___item, method) (( void (*) (Collection_1_t2469 *, int32_t, float, const MethodInfo*))Collection_1_InsertItem_m12071_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::Remove(T)
extern "C" bool Collection_1_Remove_m12072_gshared (Collection_1_t2469 * __this, float ___item, const MethodInfo* method);
#define Collection_1_Remove_m12072(__this, ___item, method) (( bool (*) (Collection_1_t2469 *, float, const MethodInfo*))Collection_1_Remove_m12072_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m12073_gshared (Collection_1_t2469 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m12073(__this, ___index, method) (( void (*) (Collection_1_t2469 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m12073_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m12074_gshared (Collection_1_t2469 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m12074(__this, ___index, method) (( void (*) (Collection_1_t2469 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m12074_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Single>::get_Count()
extern "C" int32_t Collection_1_get_Count_m12075_gshared (Collection_1_t2469 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m12075(__this, method) (( int32_t (*) (Collection_1_t2469 *, const MethodInfo*))Collection_1_get_Count_m12075_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Single>::get_Item(System.Int32)
extern "C" float Collection_1_get_Item_m12076_gshared (Collection_1_t2469 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m12076(__this, ___index, method) (( float (*) (Collection_1_t2469 *, int32_t, const MethodInfo*))Collection_1_get_Item_m12076_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m12077_gshared (Collection_1_t2469 * __this, int32_t ___index, float ___value, const MethodInfo* method);
#define Collection_1_set_Item_m12077(__this, ___index, ___value, method) (( void (*) (Collection_1_t2469 *, int32_t, float, const MethodInfo*))Collection_1_set_Item_m12077_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m12078_gshared (Collection_1_t2469 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define Collection_1_SetItem_m12078(__this, ___index, ___item, method) (( void (*) (Collection_1_t2469 *, int32_t, float, const MethodInfo*))Collection_1_SetItem_m12078_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m12079_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m12079(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m12079_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Single>::ConvertItem(System.Object)
extern "C" float Collection_1_ConvertItem_m12080_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m12080(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m12080_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m12081_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m12081(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m12081_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m12082_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m12082(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m12082_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m12083_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m12083(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m12083_gshared)(__this /* static, unused */, ___list, method)
