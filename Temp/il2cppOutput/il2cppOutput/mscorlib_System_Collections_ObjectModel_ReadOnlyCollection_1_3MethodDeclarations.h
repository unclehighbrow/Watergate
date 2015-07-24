#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>
struct ReadOnlyCollection_1_t2463;
// UnityEngine.GameObject
struct GameObject_t28;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<UnityEngine.GameObject>
struct IList_1_t2462;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t86;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GameObject>
struct IEnumerator_1_t3067;

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1MethodDeclarations.h"
#define ReadOnlyCollection_1__ctor_m11923(__this, ___list, method) (( void (*) (ReadOnlyCollection_1_t2463 *, Object_t*, const MethodInfo*))ReadOnlyCollection_1__ctor_m11460_gshared)(__this, ___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.Add(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m11924(__this, ___item, method) (( void (*) (ReadOnlyCollection_1_t2463 *, GameObject_t28 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m11461_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.Clear()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m11925(__this, method) (( void (*) (ReadOnlyCollection_1_t2463 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m11462_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m11926(__this, ___index, ___item, method) (( void (*) (ReadOnlyCollection_1_t2463 *, int32_t, GameObject_t28 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m11463_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.Remove(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m11927(__this, ___item, method) (( bool (*) (ReadOnlyCollection_1_t2463 *, GameObject_t28 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m11464_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m11928(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t2463 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m11465_gshared)(__this, ___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m11929(__this, ___index, method) (( GameObject_t28 * (*) (ReadOnlyCollection_1_t2463 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m11466_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m11930(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t2463 *, int32_t, GameObject_t28 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m11467_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11931(__this, method) (( bool (*) (ReadOnlyCollection_1_t2463 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11468_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m11932(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t2463 *, Array_t *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m11469_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IEnumerable.GetEnumerator()
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m11933(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t2463 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m11470_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.Add(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Add_m11934(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t2463 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Add_m11471_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.Clear()
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m11935(__this, method) (( void (*) (ReadOnlyCollection_1_t2463 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Clear_m11472_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.Contains(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m11936(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t2463 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Contains_m11473_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.IndexOf(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m11937(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t2463 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_IndexOf_m11474_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.Insert(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m11938(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t2463 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Insert_m11475_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.Remove(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m11939(__this, ___value, method) (( void (*) (ReadOnlyCollection_1_t2463 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Remove_m11476_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m11940(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t2463 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m11477_gshared)(__this, ___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.ICollection.get_IsSynchronized()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m11941(__this, method) (( bool (*) (ReadOnlyCollection_1_t2463 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m11478_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.ICollection.get_SyncRoot()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m11942(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t2463 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m11479_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.get_IsFixedSize()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m11943(__this, method) (( bool (*) (ReadOnlyCollection_1_t2463 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m11480_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m11944(__this, method) (( bool (*) (ReadOnlyCollection_1_t2463 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m11481_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m11945(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t2463 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_Item_m11482_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m11946(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t2463 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_set_Item_m11483_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::Contains(T)
#define ReadOnlyCollection_1_Contains_m11947(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t2463 *, GameObject_t28 *, const MethodInfo*))ReadOnlyCollection_1_Contains_m11484_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::CopyTo(T[],System.Int32)
#define ReadOnlyCollection_1_CopyTo_m11948(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t2463 *, GameObjectU5BU5D_t86*, int32_t, const MethodInfo*))ReadOnlyCollection_1_CopyTo_m11485_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::GetEnumerator()
#define ReadOnlyCollection_1_GetEnumerator_m11949(__this, method) (( Object_t* (*) (ReadOnlyCollection_1_t2463 *, const MethodInfo*))ReadOnlyCollection_1_GetEnumerator_m11486_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::IndexOf(T)
#define ReadOnlyCollection_1_IndexOf_m11950(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t2463 *, GameObject_t28 *, const MethodInfo*))ReadOnlyCollection_1_IndexOf_m11487_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::get_Count()
#define ReadOnlyCollection_1_get_Count_m11951(__this, method) (( int32_t (*) (ReadOnlyCollection_1_t2463 *, const MethodInfo*))ReadOnlyCollection_1_get_Count_m11488_gshared)(__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::get_Item(System.Int32)
#define ReadOnlyCollection_1_get_Item_m11952(__this, ___index, method) (( GameObject_t28 * (*) (ReadOnlyCollection_1_t2463 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_get_Item_m11489_gshared)(__this, ___index, method)
