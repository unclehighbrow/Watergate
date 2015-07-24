#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DelegateSerializationHolder
struct DelegateSerializationHolder_t1836;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t732;
// System.Delegate
struct Delegate_t361;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.DelegateSerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DelegateSerializationHolder__ctor_m10109 (DelegateSerializationHolder_t1836 * __this, SerializationInfo_t732 * ___info, StreamingContext_t733  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DelegateSerializationHolder::GetDelegateData(System.Delegate,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DelegateSerializationHolder_GetDelegateData_m10110 (Object_t * __this /* static, unused */, Delegate_t361 * ___instance, SerializationInfo_t732 * ___info, StreamingContext_t733  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DelegateSerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DelegateSerializationHolder_GetObjectData_m10111 (DelegateSerializationHolder_t1836 * __this, SerializationInfo_t732 * ___info, StreamingContext_t733  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.DelegateSerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * DelegateSerializationHolder_GetRealObject_m10112 (DelegateSerializationHolder_t1836 * __this, StreamingContext_t733  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
