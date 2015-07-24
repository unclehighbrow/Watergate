#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t2520;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t112;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Collections.Generic.Stack`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C" void Stack_1__ctor_m12641_gshared (Stack_1_t2520 * __this, const MethodInfo* method);
#define Stack_1__ctor_m12641(__this, method) (( void (*) (Stack_1_t2520 *, const MethodInfo*))Stack_1__ctor_m12641_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m12642_gshared (Stack_1_t2520 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m12642(__this, method) (( bool (*) (Stack_1_t2520 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m12642_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m12643_gshared (Stack_1_t2520 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m12643(__this, method) (( Object_t * (*) (Stack_1_t2520 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m12643_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m12644_gshared (Stack_1_t2520 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m12644(__this, ___dest, ___idx, method) (( void (*) (Stack_1_t2520 *, Array_t *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m12644_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12645_gshared (Stack_1_t2520 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12645(__this, method) (( Object_t* (*) (Stack_1_t2520 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12645_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m12646_gshared (Stack_1_t2520 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m12646(__this, method) (( Object_t * (*) (Stack_1_t2520 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m12646_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C" Object_t * Stack_1_Peek_m12647_gshared (Stack_1_t2520 * __this, const MethodInfo* method);
#define Stack_1_Peek_m12647(__this, method) (( Object_t * (*) (Stack_1_t2520 *, const MethodInfo*))Stack_1_Peek_m12647_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C" Object_t * Stack_1_Pop_m12648_gshared (Stack_1_t2520 * __this, const MethodInfo* method);
#define Stack_1_Pop_m12648(__this, method) (( Object_t * (*) (Stack_1_t2520 *, const MethodInfo*))Stack_1_Pop_m12648_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
extern "C" void Stack_1_Push_m12649_gshared (Stack_1_t2520 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Push_m12649(__this, ___t, method) (( void (*) (Stack_1_t2520 *, Object_t *, const MethodInfo*))Stack_1_Push_m12649_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" int32_t Stack_1_get_Count_m12650_gshared (Stack_1_t2520 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m12650(__this, method) (( int32_t (*) (Stack_1_t2520 *, const MethodInfo*))Stack_1_get_Count_m12650_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2523  Stack_1_GetEnumerator_m12651_gshared (Stack_1_t2520 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m12651(__this, method) (( Enumerator_t2523  (*) (Stack_1_t2520 *, const MethodInfo*))Stack_1_GetEnumerator_m12651_gshared)(__this, method)
