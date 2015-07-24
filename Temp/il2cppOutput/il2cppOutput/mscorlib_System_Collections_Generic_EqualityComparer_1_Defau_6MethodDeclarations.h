#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
struct DefaultComparer_t2796;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m16629_gshared (DefaultComparer_t2796 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m16629(__this, method) (( void (*) (DefaultComparer_t2796 *, const MethodInfo*))DefaultComparer__ctor_m16629_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m16630_gshared (DefaultComparer_t2796 * __this, UILineInfo_t373  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m16630(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2796 *, UILineInfo_t373 , const MethodInfo*))DefaultComparer_GetHashCode_m16630_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m16631_gshared (DefaultComparer_t2796 * __this, UILineInfo_t373  ___x, UILineInfo_t373  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m16631(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2796 *, UILineInfo_t373 , UILineInfo_t373 , const MethodInfo*))DefaultComparer_Equals_m16631_gshared)(__this, ___x, ___y, method)
