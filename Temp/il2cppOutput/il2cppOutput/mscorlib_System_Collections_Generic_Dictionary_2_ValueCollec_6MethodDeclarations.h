#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t2602;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2593;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3108;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Int32[]
struct Int32U5BU5D_t1095;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_7.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m13740_gshared (ValueCollection_t2602 * __this, Dictionary_2_t2593 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m13740(__this, ___dictionary, method) (( void (*) (ValueCollection_t2602 *, Dictionary_2_t2593 *, const MethodInfo*))ValueCollection__ctor_m13740_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m13741_gshared (ValueCollection_t2602 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m13741(__this, ___item, method) (( void (*) (ValueCollection_t2602 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m13741_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m13742_gshared (ValueCollection_t2602 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m13742(__this, method) (( void (*) (ValueCollection_t2602 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m13742_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m13743_gshared (ValueCollection_t2602 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m13743(__this, ___item, method) (( bool (*) (ValueCollection_t2602 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m13743_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m13744_gshared (ValueCollection_t2602 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m13744(__this, ___item, method) (( bool (*) (ValueCollection_t2602 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m13744_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m13745_gshared (ValueCollection_t2602 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m13745(__this, method) (( Object_t* (*) (ValueCollection_t2602 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m13745_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m13746_gshared (ValueCollection_t2602 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m13746(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2602 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m13746_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m13747_gshared (ValueCollection_t2602 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m13747(__this, method) (( Object_t * (*) (ValueCollection_t2602 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m13747_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m13748_gshared (ValueCollection_t2602 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m13748(__this, method) (( bool (*) (ValueCollection_t2602 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m13748_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m13749_gshared (ValueCollection_t2602 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m13749(__this, method) (( bool (*) (ValueCollection_t2602 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m13749_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m13750_gshared (ValueCollection_t2602 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m13750(__this, method) (( Object_t * (*) (ValueCollection_t2602 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m13750_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m13751_gshared (ValueCollection_t2602 * __this, Int32U5BU5D_t1095* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m13751(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2602 *, Int32U5BU5D_t1095*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m13751_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2603  ValueCollection_GetEnumerator_m13752_gshared (ValueCollection_t2602 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m13752(__this, method) (( Enumerator_t2603  (*) (ValueCollection_t2602 *, const MethodInfo*))ValueCollection_GetEnumerator_m13752_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m13753_gshared (ValueCollection_t2602 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m13753(__this, method) (( int32_t (*) (ValueCollection_t2602 *, const MethodInfo*))ValueCollection_get_Count_m13753_gshared)(__this, method)
