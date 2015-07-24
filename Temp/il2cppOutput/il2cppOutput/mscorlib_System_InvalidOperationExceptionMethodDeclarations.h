#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.InvalidOperationException
struct InvalidOperationException_t1172;
// System.String
struct String_t;
// System.Exception
struct Exception_t65;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t732;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.InvalidOperationException::.ctor()
extern "C" void InvalidOperationException__ctor_m4870 (InvalidOperationException_t1172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" void InvalidOperationException__ctor_m4864 (InvalidOperationException_t1172 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
extern "C" void InvalidOperationException__ctor_m10179 (InvalidOperationException_t1172 * __this, String_t* ___message, Exception_t65 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void InvalidOperationException__ctor_m10180 (InvalidOperationException_t1172 * __this, SerializationInfo_t732 * ___info, StreamingContext_t733  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
