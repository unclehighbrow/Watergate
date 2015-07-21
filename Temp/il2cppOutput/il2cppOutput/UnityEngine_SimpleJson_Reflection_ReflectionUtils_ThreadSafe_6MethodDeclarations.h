#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t2866;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t721;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t2864;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2886;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t3131;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m17465_gshared (ThreadSafeDictionary_2_t2866 * __this, ThreadSafeDictionaryValueFactory_2_t2864 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m17465(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t2866 *, ThreadSafeDictionaryValueFactory_2_t2864 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m17465_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m17467_gshared (ThreadSafeDictionary_2_t2866 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m17467(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2866 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m17467_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m17469_gshared (ThreadSafeDictionary_2_t2866 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m17469(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2866 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m17469_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m17471_gshared (ThreadSafeDictionary_2_t2866 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m17471(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2866 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m17471_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m17473_gshared (ThreadSafeDictionary_2_t2866 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m17473(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t2866 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m17473_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m17475_gshared (ThreadSafeDictionary_2_t2866 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m17475(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2866 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m17475_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool ThreadSafeDictionary_2_Remove_m17477_gshared (ThreadSafeDictionary_2_t2866 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m17477(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t2866 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Remove_m17477_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m17479_gshared (ThreadSafeDictionary_2_t2866 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m17479(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t2866 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m17479_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m17481_gshared (ThreadSafeDictionary_2_t2866 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m17481(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2866 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m17481_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m17483_gshared (ThreadSafeDictionary_2_t2866 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m17483(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2866 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m17483_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m17485_gshared (ThreadSafeDictionary_2_t2866 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m17485(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t2866 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m17485_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m17487_gshared (ThreadSafeDictionary_2_t2866 * __this, KeyValuePair_2_t2621  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m17487(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t2866 *, KeyValuePair_2_t2621 , const MethodInfo*))ThreadSafeDictionary_2_Add_m17487_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m17489_gshared (ThreadSafeDictionary_2_t2866 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m17489(__this, method) (( void (*) (ThreadSafeDictionary_2_t2866 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m17489_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m17491_gshared (ThreadSafeDictionary_2_t2866 * __this, KeyValuePair_2_t2621  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m17491(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t2866 *, KeyValuePair_2_t2621 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m17491_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m17493_gshared (ThreadSafeDictionary_2_t2866 * __this, KeyValuePair_2U5BU5D_t2886* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m17493(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t2866 *, KeyValuePair_2U5BU5D_t2886*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m17493_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m17495_gshared (ThreadSafeDictionary_2_t2866 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m17495(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t2866 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m17495_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m17497_gshared (ThreadSafeDictionary_2_t2866 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m17497(__this, method) (( bool (*) (ThreadSafeDictionary_2_t2866 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m17497_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m17499_gshared (ThreadSafeDictionary_2_t2866 * __this, KeyValuePair_2_t2621  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m17499(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t2866 *, KeyValuePair_2_t2621 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m17499_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m17501_gshared (ThreadSafeDictionary_2_t2866 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m17501(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2866 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m17501_gshared)(__this, method)
