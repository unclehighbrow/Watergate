#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUIUtility
struct GUIUtility_t525;
// System.String
struct String_t;
// UnityEngine.GUISkin
struct GUISkin_t510;
// System.Exception
struct Exception_t65;

// System.Void UnityEngine.GUIUtility::.cctor()
extern "C" void GUIUtility__cctor_m2455 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIUtility::get_systemCopyBuffer()
extern "C" String_t* GUIUtility_get_systemCopyBuffer_m2456 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)
extern "C" void GUIUtility_set_systemCopyBuffer_m2457 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUIUtility::GetDefaultSkin()
extern "C" GUISkin_t510 * GUIUtility_GetDefaultSkin_m2458 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)
extern "C" GUISkin_t510 * GUIUtility_Internal_GetDefaultSkin_m2459 (Object_t * __this /* static, unused */, int32_t ___skinMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::BeginGUI(System.Int32,System.Int32,System.Int32)
extern "C" void GUIUtility_BeginGUI_m2460 (Object_t * __this /* static, unused */, int32_t ___skinMode, int32_t ___instanceID, int32_t ___useGUILayout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::Internal_ExitGUI()
extern "C" void GUIUtility_Internal_ExitGUI_m2461 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::EndGUI(System.Int32)
extern "C" void GUIUtility_EndGUI_m2462 (Object_t * __this /* static, unused */, int32_t ___layoutType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIUtility::EndGUIFromException(System.Exception)
extern "C" bool GUIUtility_EndGUIFromException_m2463 (Object_t * __this /* static, unused */, Exception_t65 * ___exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::CheckOnGUI()
extern "C" void GUIUtility_CheckOnGUI_m2464 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::Internal_GetGUIDepth()
extern "C" int32_t GUIUtility_Internal_GetGUIDepth_m2465 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
