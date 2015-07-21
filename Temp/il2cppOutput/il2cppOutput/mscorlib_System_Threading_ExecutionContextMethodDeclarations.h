#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.ExecutionContext
struct ExecutionContext_t1640;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t731;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Threading.ExecutionContext::.ctor()
extern "C" void ExecutionContext__ctor_m9672 (ExecutionContext_t1640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ExecutionContext__ctor_m9673 (ExecutionContext_t1640 * __this, SerializationInfo_t731 * ___info, StreamingContext_t732  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ExecutionContext_GetObjectData_m9674 (ExecutionContext_t1640 * __this, SerializationInfo_t731 * ___info, StreamingContext_t732  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
