#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t226;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t732;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1914;
// System.Delegate
struct Delegate_t361;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m2209 (MulticastDelegate_t226 * __this, SerializationInfo_t732 * ___info, StreamingContext_t733  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m2207 (MulticastDelegate_t226 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m2208 (MulticastDelegate_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1914* MulticastDelegate_GetInvocationList_m2211 (MulticastDelegate_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t361 * MulticastDelegate_CombineImpl_m2212 (MulticastDelegate_t226 * __this, Delegate_t361 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m6639 (MulticastDelegate_t226 * __this, MulticastDelegate_t226 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t226 * MulticastDelegate_KPM_m6640 (Object_t * __this /* static, unused */, MulticastDelegate_t226 * ___needle, MulticastDelegate_t226 * ___haystack, MulticastDelegate_t226 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t361 * MulticastDelegate_RemoveImpl_m2213 (MulticastDelegate_t226 * __this, Delegate_t361 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
