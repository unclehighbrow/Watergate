#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
struct GenericEqualityComparer_1_t1952;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m10579_gshared (GenericEqualityComparer_1_t1952 * __this, const MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m10579(__this, method) (( void (*) (GenericEqualityComparer_1_t1952 *, const MethodInfo*))GenericEqualityComparer_1__ctor_m10579_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m19280_gshared (GenericEqualityComparer_1_t1952 * __this, Guid_t776  ___obj, const MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m19280(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t1952 *, Guid_t776 , const MethodInfo*))GenericEqualityComparer_1_GetHashCode_m19280_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m19281_gshared (GenericEqualityComparer_1_t1952 * __this, Guid_t776  ___x, Guid_t776  ___y, const MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m19281(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t1952 *, Guid_t776 , Guid_t776 , const MethodInfo*))GenericEqualityComparer_1_Equals_m19281_gshared)(__this, ___x, ___y, method)
