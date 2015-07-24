#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>
struct KeyCollection_t2820;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
struct Dictionary_2_t602;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t3197;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.String[]
struct StringU5BU5D_t48;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_40.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_15MethodDeclarations.h"
#define KeyCollection__ctor_m16855(__this, ___dictionary, method) (( void (*) (KeyCollection_t2820 *, Dictionary_2_t602 *, const MethodInfo*))KeyCollection__ctor_m16762_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m16856(__this, ___item, method) (( void (*) (KeyCollection_t2820 *, String_t*, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m16763_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TKey>.Clear()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m16857(__this, method) (( void (*) (KeyCollection_t2820 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m16764_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m16858(__this, ___item, method) (( bool (*) (KeyCollection_t2820 *, String_t*, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m16765_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m16859(__this, ___item, method) (( bool (*) (KeyCollection_t2820 *, String_t*, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m16766_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m16860(__this, method) (( Object_t* (*) (KeyCollection_t2820 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m16767_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define KeyCollection_System_Collections_ICollection_CopyTo_m16861(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2820 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m16768_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m16862(__this, method) (( Object_t * (*) (KeyCollection_t2820 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m16769_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m16863(__this, method) (( bool (*) (KeyCollection_t2820 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m16770_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m16864(__this, method) (( bool (*) (KeyCollection_t2820 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m16771_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.ICollection.get_SyncRoot()
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m16865(__this, method) (( Object_t * (*) (KeyCollection_t2820 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m16772_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::CopyTo(TKey[],System.Int32)
#define KeyCollection_CopyTo_m16866(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2820 *, StringU5BU5D_t48*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m16773_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::GetEnumerator()
#define KeyCollection_GetEnumerator_m16867(__this, method) (( Enumerator_t3229  (*) (KeyCollection_t2820 *, const MethodInfo*))KeyCollection_GetEnumerator_m16774_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::get_Count()
#define KeyCollection_get_Count_m16868(__this, method) (( int32_t (*) (KeyCollection_t2820 *, const MethodInfo*))KeyCollection_get_Count_m16775_gshared)(__this, method)
