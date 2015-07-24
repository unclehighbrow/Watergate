#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_t755;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t626;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t112;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Object[]
struct ObjectU5BU5D_t73;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_42.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_8MethodDeclarations.h"
#define ValueCollection__ctor_m17424(__this, ___dictionary, method) (( void (*) (ValueCollection_t755 *, Dictionary_2_t626 *, const MethodInfo*))ValueCollection__ctor_m14072_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m17425(__this, ___item, method) (( void (*) (ValueCollection_t755 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m14073_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m17426(__this, method) (( void (*) (ValueCollection_t755 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m14074_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m17427(__this, ___item, method) (( bool (*) (ValueCollection_t755 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m14075_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m17428(__this, ___item, method) (( bool (*) (ValueCollection_t755 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m14076_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m17429(__this, method) (( Object_t* (*) (ValueCollection_t755 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m14077_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m17430(__this, ___array, ___index, method) (( void (*) (ValueCollection_t755 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m14078_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m17431(__this, method) (( Object_t * (*) (ValueCollection_t755 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m14079_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m17432(__this, method) (( bool (*) (ValueCollection_t755 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m14080_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m17433(__this, method) (( bool (*) (ValueCollection_t755 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m14081_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m17434(__this, method) (( Object_t * (*) (ValueCollection_t755 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m14082_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m17435(__this, ___array, ___index, method) (( void (*) (ValueCollection_t755 *, ObjectU5BU5D_t73*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m14083_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::GetEnumerator()
#define ValueCollection_GetEnumerator_m17436(__this, method) (( Enumerator_t3252  (*) (ValueCollection_t755 *, const MethodInfo*))ValueCollection_GetEnumerator_m14084_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::get_Count()
#define ValueCollection_get_Count_m17437(__this, method) (( int32_t (*) (ValueCollection_t755 *, const MethodInfo*))ValueCollection_get_Count_m14085_gshared)(__this, method)
