#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2501;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t732;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t112;
// System.Object[]
struct ObjectU5BU5D_t73;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2500;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" void HashSet_1__ctor_m12359_gshared (HashSet_1_t2501 * __this, const MethodInfo* method);
#define HashSet_1__ctor_m12359(__this, method) (( void (*) (HashSet_1_t2501 *, const MethodInfo*))HashSet_1__ctor_m12359_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m12361_gshared (HashSet_1_t2501 * __this, SerializationInfo_t732 * ___info, StreamingContext_t733  ___context, const MethodInfo* method);
#define HashSet_1__ctor_m12361(__this, ___info, ___context, method) (( void (*) (HashSet_1_t2501 *, SerializationInfo_t732 *, StreamingContext_t733 , const MethodInfo*))HashSet_1__ctor_m12361_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12363_gshared (HashSet_1_t2501 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12363(__this, method) (( Object_t* (*) (HashSet_1_t2501 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12363_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12365_gshared (HashSet_1_t2501 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12365(__this, method) (( bool (*) (HashSet_1_t2501 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12365_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m12367_gshared (HashSet_1_t2501 * __this, ObjectU5BU5D_t73* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m12367(__this, ___array, ___index, method) (( void (*) (HashSet_1_t2501 *, ObjectU5BU5D_t73*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m12367_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m12369_gshared (HashSet_1_t2501 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m12369(__this, ___item, method) (( void (*) (HashSet_1_t2501 *, Object_t *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m12369_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m12371_gshared (HashSet_1_t2501 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m12371(__this, method) (( Object_t * (*) (HashSet_1_t2501 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m12371_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m12373_gshared (HashSet_1_t2501 * __this, const MethodInfo* method);
#define HashSet_1_get_Count_m12373(__this, method) (( int32_t (*) (HashSet_1_t2501 *, const MethodInfo*))HashSet_1_get_Count_m12373_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1_Init_m12375_gshared (HashSet_1_t2501 * __this, int32_t ___capacity, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1_Init_m12375(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t2501 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m12375_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::InitArrays(System.Int32)
extern "C" void HashSet_1_InitArrays_m12377_gshared (HashSet_1_t2501 * __this, int32_t ___size, const MethodInfo* method);
#define HashSet_1_InitArrays_m12377(__this, ___size, method) (( void (*) (HashSet_1_t2501 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m12377_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m12379_gshared (HashSet_1_t2501 * __this, int32_t ___index, int32_t ___hash, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_SlotsContainsAt_m12379(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t2501 *, int32_t, int32_t, Object_t *, const MethodInfo*))HashSet_1_SlotsContainsAt_m12379_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m12381_gshared (HashSet_1_t2501 * __this, ObjectU5BU5D_t73* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_CopyTo_m12381(__this, ___array, ___index, method) (( void (*) (HashSet_1_t2501 *, ObjectU5BU5D_t73*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m12381_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
extern "C" void HashSet_1_CopyTo_m12383_gshared (HashSet_1_t2501 * __this, ObjectU5BU5D_t73* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define HashSet_1_CopyTo_m12383(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t2501 *, ObjectU5BU5D_t73*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m12383_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Resize()
extern "C" void HashSet_1_Resize_m12385_gshared (HashSet_1_t2501 * __this, const MethodInfo* method);
#define HashSet_1_Resize_m12385(__this, method) (( void (*) (HashSet_1_t2501 *, const MethodInfo*))HashSet_1_Resize_m12385_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m12387_gshared (HashSet_1_t2501 * __this, int32_t ___index, const MethodInfo* method);
#define HashSet_1_GetLinkHashCode_m12387(__this, ___index, method) (( int32_t (*) (HashSet_1_t2501 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m12387_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m12389_gshared (HashSet_1_t2501 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_GetItemHashCode_m12389(__this, ___item, method) (( int32_t (*) (HashSet_1_t2501 *, Object_t *, const MethodInfo*))HashSet_1_GetItemHashCode_m12389_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
extern "C" bool HashSet_1_Add_m12390_gshared (HashSet_1_t2501 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Add_m12390(__this, ___item, method) (( bool (*) (HashSet_1_t2501 *, Object_t *, const MethodInfo*))HashSet_1_Add_m12390_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C" void HashSet_1_Clear_m12392_gshared (HashSet_1_t2501 * __this, const MethodInfo* method);
#define HashSet_1_Clear_m12392(__this, method) (( void (*) (HashSet_1_t2501 *, const MethodInfo*))HashSet_1_Clear_m12392_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
extern "C" bool HashSet_1_Contains_m12394_gshared (HashSet_1_t2501 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Contains_m12394(__this, ___item, method) (( bool (*) (HashSet_1_t2501 *, Object_t *, const MethodInfo*))HashSet_1_Contains_m12394_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
extern "C" bool HashSet_1_Remove_m12396_gshared (HashSet_1_t2501 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Remove_m12396(__this, ___item, method) (( bool (*) (HashSet_1_t2501 *, Object_t *, const MethodInfo*))HashSet_1_Remove_m12396_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1_GetObjectData_m12398_gshared (HashSet_1_t2501 * __this, SerializationInfo_t732 * ___info, StreamingContext_t733  ___context, const MethodInfo* method);
#define HashSet_1_GetObjectData_m12398(__this, ___info, ___context, method) (( void (*) (HashSet_1_t2501 *, SerializationInfo_t732 *, StreamingContext_t733 , const MethodInfo*))HashSet_1_GetObjectData_m12398_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::OnDeserialization(System.Object)
extern "C" void HashSet_1_OnDeserialization_m12400_gshared (HashSet_1_t2501 * __this, Object_t * ___sender, const MethodInfo* method);
#define HashSet_1_OnDeserialization_m12400(__this, ___sender, method) (( void (*) (HashSet_1_t2501 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m12400_gshared)(__this, ___sender, method)
