#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t3051;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m19279_gshared (DefaultComparer_t3051 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m19279(__this, method) (( void (*) (DefaultComparer_t3051 *, const MethodInfo*))DefaultComparer__ctor_m19279_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m19280_gshared (DefaultComparer_t3051 * __this, Guid_t775  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m19280(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3051 *, Guid_t775 , const MethodInfo*))DefaultComparer_GetHashCode_m19280_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m19281_gshared (DefaultComparer_t3051 * __this, Guid_t775  ___x, Guid_t775  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m19281(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3051 *, Guid_t775 , Guid_t775 , const MethodInfo*))DefaultComparer_Equals_m19281_gshared)(__this, ___x, ___y, method)
