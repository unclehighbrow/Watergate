#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct DefaultComparer_t2900;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void DefaultComparer__ctor_m17993_gshared (DefaultComparer_t2900 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m17993(__this, method) (( void (*) (DefaultComparer_t2900 *, const MethodInfo*))DefaultComparer__ctor_m17993_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m17994_gshared (DefaultComparer_t2900 * __this, KeyValuePair_2_t2622  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m17994(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2900 *, KeyValuePair_2_t2622 , const MethodInfo*))DefaultComparer_GetHashCode_m17994_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m17995_gshared (DefaultComparer_t2900 * __this, KeyValuePair_2_t2622  ___x, KeyValuePair_2_t2622  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m17995(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2900 *, KeyValuePair_2_t2622 , KeyValuePair_2_t2622 , const MethodInfo*))DefaultComparer_Equals_m17995_gshared)(__this, ___x, ___y, method)
