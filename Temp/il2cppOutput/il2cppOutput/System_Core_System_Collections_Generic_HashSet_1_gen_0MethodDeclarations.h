#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t1840;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t615;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2083;
// System.Object[]
struct ObjectU5BU5D_t74;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t61;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1843;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" void HashSet_1__ctor_m11532_gshared (HashSet_1_t1840 * __this, const MethodInfo* method);
#define HashSet_1__ctor_m11532(__this, method) (( void (*) (HashSet_1_t1840 *, const MethodInfo*))HashSet_1__ctor_m11532_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m11534_gshared (HashSet_1_t1840 * __this, SerializationInfo_t615 * ___info, StreamingContext_t616  ___context, const MethodInfo* method);
#define HashSet_1__ctor_m11534(__this, ___info, ___context, method) (( void (*) (HashSet_1_t1840 *, SerializationInfo_t615 *, StreamingContext_t616 , const MethodInfo*))HashSet_1__ctor_m11534_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11536_gshared (HashSet_1_t1840 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11536(__this, method) (( Object_t* (*) (HashSet_1_t1840 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11536_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11538_gshared (HashSet_1_t1840 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11538(__this, method) (( bool (*) (HashSet_1_t1840 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11538_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m11540_gshared (HashSet_1_t1840 * __this, ObjectU5BU5D_t74* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m11540(__this, ___array, ___index, method) (( void (*) (HashSet_1_t1840 *, ObjectU5BU5D_t74*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m11540_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m11542_gshared (HashSet_1_t1840 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m11542(__this, ___item, method) (( void (*) (HashSet_1_t1840 *, Object_t *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m11542_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m11544_gshared (HashSet_1_t1840 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m11544(__this, method) (( Object_t * (*) (HashSet_1_t1840 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m11544_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m11546_gshared (HashSet_1_t1840 * __this, const MethodInfo* method);
#define HashSet_1_get_Count_m11546(__this, method) (( int32_t (*) (HashSet_1_t1840 *, const MethodInfo*))HashSet_1_get_Count_m11546_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1_Init_m11548_gshared (HashSet_1_t1840 * __this, int32_t ___capacity, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1_Init_m11548(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t1840 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m11548_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::InitArrays(System.Int32)
extern "C" void HashSet_1_InitArrays_m11550_gshared (HashSet_1_t1840 * __this, int32_t ___size, const MethodInfo* method);
#define HashSet_1_InitArrays_m11550(__this, ___size, method) (( void (*) (HashSet_1_t1840 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m11550_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m11552_gshared (HashSet_1_t1840 * __this, int32_t ___index, int32_t ___hash, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_SlotsContainsAt_m11552(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t1840 *, int32_t, int32_t, Object_t *, const MethodInfo*))HashSet_1_SlotsContainsAt_m11552_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m11554_gshared (HashSet_1_t1840 * __this, ObjectU5BU5D_t74* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_CopyTo_m11554(__this, ___array, ___index, method) (( void (*) (HashSet_1_t1840 *, ObjectU5BU5D_t74*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m11554_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
extern "C" void HashSet_1_CopyTo_m11556_gshared (HashSet_1_t1840 * __this, ObjectU5BU5D_t74* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define HashSet_1_CopyTo_m11556(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t1840 *, ObjectU5BU5D_t74*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m11556_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Resize()
extern "C" void HashSet_1_Resize_m11558_gshared (HashSet_1_t1840 * __this, const MethodInfo* method);
#define HashSet_1_Resize_m11558(__this, method) (( void (*) (HashSet_1_t1840 *, const MethodInfo*))HashSet_1_Resize_m11558_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m11560_gshared (HashSet_1_t1840 * __this, int32_t ___index, const MethodInfo* method);
#define HashSet_1_GetLinkHashCode_m11560(__this, ___index, method) (( int32_t (*) (HashSet_1_t1840 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m11560_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m11562_gshared (HashSet_1_t1840 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_GetItemHashCode_m11562(__this, ___item, method) (( int32_t (*) (HashSet_1_t1840 *, Object_t *, const MethodInfo*))HashSet_1_GetItemHashCode_m11562_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
extern "C" bool HashSet_1_Add_m11563_gshared (HashSet_1_t1840 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Add_m11563(__this, ___item, method) (( bool (*) (HashSet_1_t1840 *, Object_t *, const MethodInfo*))HashSet_1_Add_m11563_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C" void HashSet_1_Clear_m11565_gshared (HashSet_1_t1840 * __this, const MethodInfo* method);
#define HashSet_1_Clear_m11565(__this, method) (( void (*) (HashSet_1_t1840 *, const MethodInfo*))HashSet_1_Clear_m11565_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
extern "C" bool HashSet_1_Contains_m11567_gshared (HashSet_1_t1840 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Contains_m11567(__this, ___item, method) (( bool (*) (HashSet_1_t1840 *, Object_t *, const MethodInfo*))HashSet_1_Contains_m11567_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
extern "C" bool HashSet_1_Remove_m11569_gshared (HashSet_1_t1840 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Remove_m11569(__this, ___item, method) (( bool (*) (HashSet_1_t1840 *, Object_t *, const MethodInfo*))HashSet_1_Remove_m11569_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1_GetObjectData_m11571_gshared (HashSet_1_t1840 * __this, SerializationInfo_t615 * ___info, StreamingContext_t616  ___context, const MethodInfo* method);
#define HashSet_1_GetObjectData_m11571(__this, ___info, ___context, method) (( void (*) (HashSet_1_t1840 *, SerializationInfo_t615 *, StreamingContext_t616 , const MethodInfo*))HashSet_1_GetObjectData_m11571_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::OnDeserialization(System.Object)
extern "C" void HashSet_1_OnDeserialization_m11573_gshared (HashSet_1_t1840 * __this, Object_t * ___sender, const MethodInfo* method);
#define HashSet_1_OnDeserialization_m11573(__this, ___sender, method) (( void (*) (HashSet_1_t1840 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m11573_gshared)(__this, ___sender, method)
