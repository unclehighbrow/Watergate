#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2500;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t731;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t111;
// System.Object[]
struct ObjectU5BU5D_t69;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2499;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" void HashSet_1__ctor_m12351_gshared (HashSet_1_t2500 * __this, const MethodInfo* method);
#define HashSet_1__ctor_m12351(__this, method) (( void (*) (HashSet_1_t2500 *, const MethodInfo*))HashSet_1__ctor_m12351_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m12353_gshared (HashSet_1_t2500 * __this, SerializationInfo_t731 * ___info, StreamingContext_t732  ___context, const MethodInfo* method);
#define HashSet_1__ctor_m12353(__this, ___info, ___context, method) (( void (*) (HashSet_1_t2500 *, SerializationInfo_t731 *, StreamingContext_t732 , const MethodInfo*))HashSet_1__ctor_m12353_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12355_gshared (HashSet_1_t2500 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12355(__this, method) (( Object_t* (*) (HashSet_1_t2500 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12355_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12357_gshared (HashSet_1_t2500 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12357(__this, method) (( bool (*) (HashSet_1_t2500 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12357_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m12359_gshared (HashSet_1_t2500 * __this, ObjectU5BU5D_t69* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m12359(__this, ___array, ___index, method) (( void (*) (HashSet_1_t2500 *, ObjectU5BU5D_t69*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m12359_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m12361_gshared (HashSet_1_t2500 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m12361(__this, ___item, method) (( void (*) (HashSet_1_t2500 *, Object_t *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m12361_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m12363_gshared (HashSet_1_t2500 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m12363(__this, method) (( Object_t * (*) (HashSet_1_t2500 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m12363_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m12365_gshared (HashSet_1_t2500 * __this, const MethodInfo* method);
#define HashSet_1_get_Count_m12365(__this, method) (( int32_t (*) (HashSet_1_t2500 *, const MethodInfo*))HashSet_1_get_Count_m12365_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1_Init_m12367_gshared (HashSet_1_t2500 * __this, int32_t ___capacity, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1_Init_m12367(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t2500 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m12367_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::InitArrays(System.Int32)
extern "C" void HashSet_1_InitArrays_m12369_gshared (HashSet_1_t2500 * __this, int32_t ___size, const MethodInfo* method);
#define HashSet_1_InitArrays_m12369(__this, ___size, method) (( void (*) (HashSet_1_t2500 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m12369_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m12371_gshared (HashSet_1_t2500 * __this, int32_t ___index, int32_t ___hash, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_SlotsContainsAt_m12371(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t2500 *, int32_t, int32_t, Object_t *, const MethodInfo*))HashSet_1_SlotsContainsAt_m12371_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m12373_gshared (HashSet_1_t2500 * __this, ObjectU5BU5D_t69* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_CopyTo_m12373(__this, ___array, ___index, method) (( void (*) (HashSet_1_t2500 *, ObjectU5BU5D_t69*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m12373_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
extern "C" void HashSet_1_CopyTo_m12375_gshared (HashSet_1_t2500 * __this, ObjectU5BU5D_t69* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define HashSet_1_CopyTo_m12375(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t2500 *, ObjectU5BU5D_t69*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m12375_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Resize()
extern "C" void HashSet_1_Resize_m12377_gshared (HashSet_1_t2500 * __this, const MethodInfo* method);
#define HashSet_1_Resize_m12377(__this, method) (( void (*) (HashSet_1_t2500 *, const MethodInfo*))HashSet_1_Resize_m12377_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m12379_gshared (HashSet_1_t2500 * __this, int32_t ___index, const MethodInfo* method);
#define HashSet_1_GetLinkHashCode_m12379(__this, ___index, method) (( int32_t (*) (HashSet_1_t2500 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m12379_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m12381_gshared (HashSet_1_t2500 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_GetItemHashCode_m12381(__this, ___item, method) (( int32_t (*) (HashSet_1_t2500 *, Object_t *, const MethodInfo*))HashSet_1_GetItemHashCode_m12381_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
extern "C" bool HashSet_1_Add_m12382_gshared (HashSet_1_t2500 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Add_m12382(__this, ___item, method) (( bool (*) (HashSet_1_t2500 *, Object_t *, const MethodInfo*))HashSet_1_Add_m12382_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C" void HashSet_1_Clear_m12384_gshared (HashSet_1_t2500 * __this, const MethodInfo* method);
#define HashSet_1_Clear_m12384(__this, method) (( void (*) (HashSet_1_t2500 *, const MethodInfo*))HashSet_1_Clear_m12384_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
extern "C" bool HashSet_1_Contains_m12386_gshared (HashSet_1_t2500 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Contains_m12386(__this, ___item, method) (( bool (*) (HashSet_1_t2500 *, Object_t *, const MethodInfo*))HashSet_1_Contains_m12386_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
extern "C" bool HashSet_1_Remove_m12388_gshared (HashSet_1_t2500 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Remove_m12388(__this, ___item, method) (( bool (*) (HashSet_1_t2500 *, Object_t *, const MethodInfo*))HashSet_1_Remove_m12388_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1_GetObjectData_m12390_gshared (HashSet_1_t2500 * __this, SerializationInfo_t731 * ___info, StreamingContext_t732  ___context, const MethodInfo* method);
#define HashSet_1_GetObjectData_m12390(__this, ___info, ___context, method) (( void (*) (HashSet_1_t2500 *, SerializationInfo_t731 *, StreamingContext_t732 , const MethodInfo*))HashSet_1_GetObjectData_m12390_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::OnDeserialization(System.Object)
extern "C" void HashSet_1_OnDeserialization_m12392_gshared (HashSet_1_t2500 * __this, Object_t * ___sender, const MethodInfo* method);
#define HashSet_1_OnDeserialization_m12392(__this, ___sender, method) (( void (*) (HashSet_1_t2500 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m12392_gshared)(__this, ___sender, method)
