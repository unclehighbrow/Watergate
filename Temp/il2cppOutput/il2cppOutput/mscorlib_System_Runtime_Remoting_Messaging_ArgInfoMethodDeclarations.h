#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.ArgInfo
struct ArgInfo_t1640;
// System.Reflection.MethodBase
struct MethodBase_t791;
// System.Object[]
struct ObjectU5BU5D_t73;
// System.Runtime.Remoting.Messaging.ArgInfoType
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoType.h"

// System.Void System.Runtime.Remoting.Messaging.ArgInfo::.ctor(System.Reflection.MethodBase,System.Runtime.Remoting.Messaging.ArgInfoType)
extern "C" void ArgInfo__ctor_m8704 (ArgInfo_t1640 * __this, MethodBase_t791 * ___method, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ArgInfo::GetInOutArgs(System.Object[])
extern "C" ObjectU5BU5D_t73* ArgInfo_GetInOutArgs_m8705 (ArgInfo_t1640 * __this, ObjectU5BU5D_t73* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
