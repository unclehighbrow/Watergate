#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>
struct DefaultComparer_t2787;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m16486_gshared (DefaultComparer_t2787 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m16486(__this, method) (( void (*) (DefaultComparer_t2787 *, const MethodInfo*))DefaultComparer__ctor_m16486_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m16487_gshared (DefaultComparer_t2787 * __this, UICharInfo_t375  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m16487(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2787 *, UICharInfo_t375 , const MethodInfo*))DefaultComparer_GetHashCode_m16487_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m16488_gshared (DefaultComparer_t2787 * __this, UICharInfo_t375  ___x, UICharInfo_t375  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m16488(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2787 *, UICharInfo_t375 , UICharInfo_t375 , const MethodInfo*))DefaultComparer_Equals_m16488_gshared)(__this, ___x, ___y, method)
