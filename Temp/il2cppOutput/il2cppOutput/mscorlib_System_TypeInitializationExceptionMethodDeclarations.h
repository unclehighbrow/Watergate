﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.TypeInitializationException
struct TypeInitializationException_t1669;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t615;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.TypeInitializationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TypeInitializationException__ctor_m10440 (TypeInitializationException_t1669 * __this, SerializationInfo_t615 * ___info, StreamingContext_t616  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TypeInitializationException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TypeInitializationException_GetObjectData_m10441 (TypeInitializationException_t1669 * __this, SerializationInfo_t615 * ___info, StreamingContext_t616  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
