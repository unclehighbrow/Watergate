#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t2519;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t111;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Collections.Generic.Stack`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C" void Stack_1__ctor_m12633_gshared (Stack_1_t2519 * __this, const MethodInfo* method);
#define Stack_1__ctor_m12633(__this, method) (( void (*) (Stack_1_t2519 *, const MethodInfo*))Stack_1__ctor_m12633_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m12634_gshared (Stack_1_t2519 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m12634(__this, method) (( bool (*) (Stack_1_t2519 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m12634_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m12635_gshared (Stack_1_t2519 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m12635(__this, method) (( Object_t * (*) (Stack_1_t2519 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m12635_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m12636_gshared (Stack_1_t2519 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m12636(__this, ___dest, ___idx, method) (( void (*) (Stack_1_t2519 *, Array_t *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m12636_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12637_gshared (Stack_1_t2519 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12637(__this, method) (( Object_t* (*) (Stack_1_t2519 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12637_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m12638_gshared (Stack_1_t2519 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m12638(__this, method) (( Object_t * (*) (Stack_1_t2519 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m12638_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C" Object_t * Stack_1_Peek_m12639_gshared (Stack_1_t2519 * __this, const MethodInfo* method);
#define Stack_1_Peek_m12639(__this, method) (( Object_t * (*) (Stack_1_t2519 *, const MethodInfo*))Stack_1_Peek_m12639_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C" Object_t * Stack_1_Pop_m12640_gshared (Stack_1_t2519 * __this, const MethodInfo* method);
#define Stack_1_Pop_m12640(__this, method) (( Object_t * (*) (Stack_1_t2519 *, const MethodInfo*))Stack_1_Pop_m12640_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
extern "C" void Stack_1_Push_m12641_gshared (Stack_1_t2519 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Push_m12641(__this, ___t, method) (( void (*) (Stack_1_t2519 *, Object_t *, const MethodInfo*))Stack_1_Push_m12641_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" int32_t Stack_1_get_Count_m12642_gshared (Stack_1_t2519 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m12642(__this, method) (( int32_t (*) (Stack_1_t2519 *, const MethodInfo*))Stack_1_get_Count_m12642_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2522  Stack_1_GetEnumerator_m12643_gshared (Stack_1_t2519 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m12643(__this, method) (( Enumerator_t2522  (*) (Stack_1_t2519 *, const MethodInfo*))Stack_1_GetEnumerator_m12643_gshared)(__this, method)
