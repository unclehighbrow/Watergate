#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Debug
struct Debug_t559;
// System.String
struct String_t;
// UnityEngine.Object
struct Object_t67;
struct Object_t67_marshaled;
// System.Exception
struct Exception_t65;
// System.Object
struct Object_t;

// System.Void UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)
extern "C" void Debug_Internal_Log_m2828 (Object_t * __this /* static, unused */, int32_t ___level, String_t* ___msg, Object_t67 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)
extern "C" void Debug_Internal_LogException_m2829 (Object_t * __this /* static, unused */, Exception_t65 * ___exception, Object_t67 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" void Debug_Log_m243 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" void Debug_LogError_m1570 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
extern "C" void Debug_LogError_m1814 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t67 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogException(System.Exception)
extern "C" void Debug_LogException_m2830 (Object_t * __this /* static, unused */, Exception_t65 * ___exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogException(System.Exception,UnityEngine.Object)
extern "C" void Debug_LogException_m1700 (Object_t * __this /* static, unused */, Exception_t65 * ___exception, Object_t67 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" void Debug_LogWarning_m2831 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
extern "C" void Debug_LogWarning_m1985 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t67 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
