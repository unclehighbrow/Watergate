#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>
struct DefaultComparer_t2434;
// System.Object
struct Object_t;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>::.ctor()
extern "C" void DefaultComparer__ctor_m11528_gshared (DefaultComparer_t2434 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m11528(__this, method) (( void (*) (DefaultComparer_t2434 *, const MethodInfo*))DefaultComparer__ctor_m11528_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m11529_gshared (DefaultComparer_t2434 * __this, Object_t * ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m11529(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2434 *, Object_t *, const MethodInfo*))DefaultComparer_GetHashCode_m11529_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m11530_gshared (DefaultComparer_t2434 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m11530(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2434 *, Object_t *, Object_t *, const MethodInfo*))DefaultComparer_Equals_m11530_gshared)(__this, ___x, ___y, method)
