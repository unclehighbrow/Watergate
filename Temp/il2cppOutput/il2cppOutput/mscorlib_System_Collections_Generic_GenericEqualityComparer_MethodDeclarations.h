#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>
struct GenericEqualityComparer_1_t1947;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m10564_gshared (GenericEqualityComparer_1_t1947 * __this, const MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m10564(__this, method) (( void (*) (GenericEqualityComparer_1_t1947 *, const MethodInfo*))GenericEqualityComparer_1__ctor_m10564_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m19234_gshared (GenericEqualityComparer_1_t1947 * __this, DateTime_t73  ___obj, const MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m19234(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t1947 *, DateTime_t73 , const MethodInfo*))GenericEqualityComparer_1_GetHashCode_m19234_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m19235_gshared (GenericEqualityComparer_1_t1947 * __this, DateTime_t73  ___x, DateTime_t73  ___y, const MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m19235(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t1947 *, DateTime_t73 , DateTime_t73 , const MethodInfo*))GenericEqualityComparer_1_Equals_m19235_gshared)(__this, ___x, ___y, method)
