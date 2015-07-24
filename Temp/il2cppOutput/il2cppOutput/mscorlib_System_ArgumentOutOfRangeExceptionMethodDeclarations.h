#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t758;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t732;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ArgumentOutOfRangeException::.ctor()
extern "C" void ArgumentOutOfRangeException__ctor_m4999 (ArgumentOutOfRangeException_t758 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C" void ArgumentOutOfRangeException__ctor_m4871 (ArgumentOutOfRangeException_t758 * __this, String_t* ___paramName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
extern "C" void ArgumentOutOfRangeException__ctor_m3599 (ArgumentOutOfRangeException_t758 * __this, String_t* ___paramName, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
extern "C" void ArgumentOutOfRangeException__ctor_m9768 (ArgumentOutOfRangeException_t758 * __this, String_t* ___paramName, Object_t * ___actualValue, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ArgumentOutOfRangeException__ctor_m9769 (ArgumentOutOfRangeException_t758 * __this, SerializationInfo_t732 * ___info, StreamingContext_t733  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ArgumentOutOfRangeException::get_Message()
extern "C" String_t* ArgumentOutOfRangeException_get_Message_m9770 (ArgumentOutOfRangeException_t758 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ArgumentOutOfRangeException_GetObjectData_m9771 (ArgumentOutOfRangeException_t758 * __this, SerializationInfo_t732 * ___info, StreamingContext_t733  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
