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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>
struct DefaultComparer_t2105;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::.ctor()
extern "C" void DefaultComparer__ctor_m15221_gshared (DefaultComparer_t2105 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m15221(__this, method) (( void (*) (DefaultComparer_t2105 *, const MethodInfo*))DefaultComparer__ctor_m15221_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m15222_gshared (DefaultComparer_t2105 * __this, Vector3_t60  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m15222(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2105 *, Vector3_t60 , const MethodInfo*))DefaultComparer_GetHashCode_m15222_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m15223_gshared (DefaultComparer_t2105 * __this, Vector3_t60  ___x, Vector3_t60  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m15223(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2105 *, Vector3_t60 , Vector3_t60 , const MethodInfo*))DefaultComparer_Equals_m15223_gshared)(__this, ___x, ___y, method)
