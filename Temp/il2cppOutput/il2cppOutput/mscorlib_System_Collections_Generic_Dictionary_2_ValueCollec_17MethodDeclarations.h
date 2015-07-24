#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t2811;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2803;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_t3228;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Int64[]
struct Int64U5BU5D_t1915;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_18.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m16797_gshared (ValueCollection_t2811 * __this, Dictionary_2_t2803 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m16797(__this, ___dictionary, method) (( void (*) (ValueCollection_t2811 *, Dictionary_2_t2803 *, const MethodInfo*))ValueCollection__ctor_m16797_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m16798_gshared (ValueCollection_t2811 * __this, int64_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m16798(__this, ___item, method) (( void (*) (ValueCollection_t2811 *, int64_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m16798_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m16799_gshared (ValueCollection_t2811 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m16799(__this, method) (( void (*) (ValueCollection_t2811 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m16799_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m16800_gshared (ValueCollection_t2811 * __this, int64_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m16800(__this, ___item, method) (( bool (*) (ValueCollection_t2811 *, int64_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m16800_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m16801_gshared (ValueCollection_t2811 * __this, int64_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m16801(__this, ___item, method) (( bool (*) (ValueCollection_t2811 *, int64_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m16801_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m16802_gshared (ValueCollection_t2811 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m16802(__this, method) (( Object_t* (*) (ValueCollection_t2811 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m16802_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m16803_gshared (ValueCollection_t2811 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m16803(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2811 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m16803_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m16804_gshared (ValueCollection_t2811 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m16804(__this, method) (( Object_t * (*) (ValueCollection_t2811 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m16804_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m16805_gshared (ValueCollection_t2811 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m16805(__this, method) (( bool (*) (ValueCollection_t2811 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m16805_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m16806_gshared (ValueCollection_t2811 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m16806(__this, method) (( bool (*) (ValueCollection_t2811 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m16806_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m16807_gshared (ValueCollection_t2811 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m16807(__this, method) (( Object_t * (*) (ValueCollection_t2811 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m16807_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m16808_gshared (ValueCollection_t2811 * __this, Int64U5BU5D_t1915* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m16808(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2811 *, Int64U5BU5D_t1915*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m16808_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t2812  ValueCollection_GetEnumerator_m16809_gshared (ValueCollection_t2811 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m16809(__this, method) (( Enumerator_t2812  (*) (ValueCollection_t2811 *, const MethodInfo*))ValueCollection_GetEnumerator_m16809_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m16810_gshared (ValueCollection_t2811 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m16810(__this, method) (( int32_t (*) (ValueCollection_t2811 *, const MethodInfo*))ValueCollection_get_Count_m16810_gshared)(__this, method)
