#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t2570;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2566;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3108;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Int32[]
struct Int32U5BU5D_t1095;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_1.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m13368_gshared (KeyCollection_t2570 * __this, Dictionary_2_t2566 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m13368(__this, ___dictionary, method) (( void (*) (KeyCollection_t2570 *, Dictionary_2_t2566 *, const MethodInfo*))KeyCollection__ctor_m13368_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m13369_gshared (KeyCollection_t2570 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m13369(__this, ___item, method) (( void (*) (KeyCollection_t2570 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m13369_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m13370_gshared (KeyCollection_t2570 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m13370(__this, method) (( void (*) (KeyCollection_t2570 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m13370_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m13371_gshared (KeyCollection_t2570 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m13371(__this, ___item, method) (( bool (*) (KeyCollection_t2570 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m13371_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m13372_gshared (KeyCollection_t2570 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m13372(__this, ___item, method) (( bool (*) (KeyCollection_t2570 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m13372_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m13373_gshared (KeyCollection_t2570 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m13373(__this, method) (( Object_t* (*) (KeyCollection_t2570 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m13373_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m13374_gshared (KeyCollection_t2570 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m13374(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2570 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m13374_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m13375_gshared (KeyCollection_t2570 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m13375(__this, method) (( Object_t * (*) (KeyCollection_t2570 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m13375_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m13376_gshared (KeyCollection_t2570 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m13376(__this, method) (( bool (*) (KeyCollection_t2570 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m13376_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m13377_gshared (KeyCollection_t2570 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m13377(__this, method) (( bool (*) (KeyCollection_t2570 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m13377_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m13378_gshared (KeyCollection_t2570 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m13378(__this, method) (( Object_t * (*) (KeyCollection_t2570 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m13378_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m13379_gshared (KeyCollection_t2570 * __this, Int32U5BU5D_t1095* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m13379(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2570 *, Int32U5BU5D_t1095*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m13379_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t2571  KeyCollection_GetEnumerator_m13380_gshared (KeyCollection_t2570 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m13380(__this, method) (( Enumerator_t2571  (*) (KeyCollection_t2570 *, const MethodInfo*))KeyCollection_GetEnumerator_m13380_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m13381_gshared (KeyCollection_t2570 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m13381(__this, method) (( int32_t (*) (KeyCollection_t2570 *, const MethodInfo*))KeyCollection_get_Count_m13381_gshared)(__this, method)
