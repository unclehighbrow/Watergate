#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t2963;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t2956;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t3312;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Byte[]
struct ByteU5BU5D_t551;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_29.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m18679_gshared (ValueCollection_t2963 * __this, Dictionary_2_t2956 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m18679(__this, ___dictionary, method) (( void (*) (ValueCollection_t2963 *, Dictionary_2_t2956 *, const MethodInfo*))ValueCollection__ctor_m18679_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m18680_gshared (ValueCollection_t2963 * __this, uint8_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m18680(__this, ___item, method) (( void (*) (ValueCollection_t2963 *, uint8_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m18680_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m18681_gshared (ValueCollection_t2963 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m18681(__this, method) (( void (*) (ValueCollection_t2963 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m18681_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m18682_gshared (ValueCollection_t2963 * __this, uint8_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m18682(__this, ___item, method) (( bool (*) (ValueCollection_t2963 *, uint8_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m18682_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m18683_gshared (ValueCollection_t2963 * __this, uint8_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m18683(__this, ___item, method) (( bool (*) (ValueCollection_t2963 *, uint8_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m18683_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18684_gshared (ValueCollection_t2963 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18684(__this, method) (( Object_t* (*) (ValueCollection_t2963 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18684_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m18685_gshared (ValueCollection_t2963 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m18685(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2963 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m18685_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18686_gshared (ValueCollection_t2963 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18686(__this, method) (( Object_t * (*) (ValueCollection_t2963 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18686_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18687_gshared (ValueCollection_t2963 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18687(__this, method) (( bool (*) (ValueCollection_t2963 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18687_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18688_gshared (ValueCollection_t2963 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18688(__this, method) (( bool (*) (ValueCollection_t2963 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18688_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m18689_gshared (ValueCollection_t2963 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m18689(__this, method) (( Object_t * (*) (ValueCollection_t2963 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m18689_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m18690_gshared (ValueCollection_t2963 * __this, ByteU5BU5D_t551* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m18690(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2963 *, ByteU5BU5D_t551*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m18690_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t2964  ValueCollection_GetEnumerator_m18691_gshared (ValueCollection_t2963 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m18691(__this, method) (( Enumerator_t2964  (*) (ValueCollection_t2963 *, const MethodInfo*))ValueCollection_GetEnumerator_m18691_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m18692_gshared (ValueCollection_t2963 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m18692(__this, method) (( int32_t (*) (ValueCollection_t2963 *, const MethodInfo*))ValueCollection_get_Count_m18692_gshared)(__this, method)
