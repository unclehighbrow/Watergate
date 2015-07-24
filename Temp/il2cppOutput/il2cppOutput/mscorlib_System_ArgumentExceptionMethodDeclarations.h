#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ArgumentException
struct ArgumentException_t387;
// System.String
struct String_t;
// System.Exception
struct Exception_t65;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t732;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ArgumentException::.ctor()
extern "C" void ArgumentException__ctor_m9760 (ArgumentException_t387 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" void ArgumentException__ctor_m2006 (ArgumentException_t387 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.Exception)
extern "C" void ArgumentException__ctor_m4968 (ArgumentException_t387 * __this, String_t* ___message, Exception_t65 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
extern "C" void ArgumentException__ctor_m4869 (ArgumentException_t387 * __this, String_t* ___message, String_t* ___paramName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.String,System.Exception)
extern "C" void ArgumentException__ctor_m9761 (ArgumentException_t387 * __this, String_t* ___message, String_t* ___paramName, Exception_t65 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ArgumentException__ctor_m9762 (ArgumentException_t387 * __this, SerializationInfo_t732 * ___info, StreamingContext_t733  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ArgumentException::get_ParamName()
extern "C" String_t* ArgumentException_get_ParamName_m9763 (ArgumentException_t387 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ArgumentException::get_Message()
extern "C" String_t* ArgumentException_get_Message_m9764 (ArgumentException_t387 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ArgumentException_GetObjectData_m9765 (ArgumentException_t387 * __this, SerializationInfo_t732 * ___info, StreamingContext_t733  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
