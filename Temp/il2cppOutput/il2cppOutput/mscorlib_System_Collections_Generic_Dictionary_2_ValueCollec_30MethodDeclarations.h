#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>
struct ValueCollection_t2973;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t1031;
// System.Collections.Generic.IEnumerator`1<System.Boolean>
struct IEnumerator_1_t3314;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Boolean[]
struct BooleanU5BU5D_t1032;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_46.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_28MethodDeclarations.h"
#define ValueCollection__ctor_m18751(__this, ___dictionary, method) (( void (*) (ValueCollection_t2973 *, Dictionary_2_t1031 *, const MethodInfo*))ValueCollection__ctor_m18679_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m18752(__this, ___item, method) (( void (*) (ValueCollection_t2973 *, bool, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m18680_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m18753(__this, method) (( void (*) (ValueCollection_t2973 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m18681_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m18754(__this, ___item, method) (( bool (*) (ValueCollection_t2973 *, bool, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m18682_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m18755(__this, ___item, method) (( bool (*) (ValueCollection_t2973 *, bool, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m18683_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18756(__this, method) (( Object_t* (*) (ValueCollection_t2973 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18684_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m18757(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2973 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m18685_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18758(__this, method) (( Object_t * (*) (ValueCollection_t2973 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18686_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18759(__this, method) (( bool (*) (ValueCollection_t2973 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18687_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18760(__this, method) (( bool (*) (ValueCollection_t2973 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18688_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m18761(__this, method) (( Object_t * (*) (ValueCollection_t2973 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m18689_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m18762(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2973 *, BooleanU5BU5D_t1032*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m18690_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::GetEnumerator()
#define ValueCollection_GetEnumerator_m18763(__this, method) (( Enumerator_t3315  (*) (ValueCollection_t2973 *, const MethodInfo*))ValueCollection_GetEnumerator_m18691_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::get_Count()
#define ValueCollection_get_Count_m18764(__this, method) (( int32_t (*) (ValueCollection_t2973 *, const MethodInfo*))ValueCollection_get_Count_m18692_gshared)(__this, method)
