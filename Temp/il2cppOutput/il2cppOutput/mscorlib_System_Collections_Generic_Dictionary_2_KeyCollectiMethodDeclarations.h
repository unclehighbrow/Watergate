#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t754;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t626;
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
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_42.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_5MethodDeclarations.h"
#define KeyCollection__ctor_m17410(__this, ___dictionary, method) (( void (*) (KeyCollection_t754 *, Dictionary_2_t626 *, const MethodInfo*))KeyCollection__ctor_m14037_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m17411(__this, ___item, method) (( void (*) (KeyCollection_t754 *, String_t*, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m14038_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m17412(__this, method) (( void (*) (KeyCollection_t754 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m14039_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m17413(__this, ___item, method) (( bool (*) (KeyCollection_t754 *, String_t*, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m14040_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m17414(__this, ___item, method) (( bool (*) (KeyCollection_t754 *, String_t*, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m14041_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m17415(__this, method) (( Object_t* (*) (KeyCollection_t754 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m14042_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define KeyCollection_System_Collections_ICollection_CopyTo_m17416(__this, ___array, ___index, method) (( void (*) (KeyCollection_t754 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m14043_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::System.Collections.IEnumerable.GetEnumerator()
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m17417(__this, method) (( Object_t * (*) (KeyCollection_t754 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m14044_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m17418(__this, method) (( bool (*) (KeyCollection_t754 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m14045_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::System.Collections.ICollection.get_IsSynchronized()
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m17419(__this, method) (( bool (*) (KeyCollection_t754 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m14046_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::System.Collections.ICollection.get_SyncRoot()
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m17420(__this, method) (( Object_t * (*) (KeyCollection_t754 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m14047_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::CopyTo(TKey[],System.Int32)
#define KeyCollection_CopyTo_m17421(__this, ___array, ___index, method) (( void (*) (KeyCollection_t754 *, StringU5BU5D_t48*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m14048_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::GetEnumerator()
#define KeyCollection_GetEnumerator_m17422(__this, method) (( Enumerator_t3251  (*) (KeyCollection_t754 *, const MethodInfo*))KeyCollection_GetEnumerator_m14049_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::get_Count()
#define KeyCollection_get_Count_m17423(__this, method) (( int32_t (*) (KeyCollection_t754 *, const MethodInfo*))KeyCollection_get_Count_m14050_gshared)(__this, method)
