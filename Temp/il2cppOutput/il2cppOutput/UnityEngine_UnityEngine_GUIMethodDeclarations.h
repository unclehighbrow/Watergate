#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUI
struct GUI_t512;
// UnityEngine.GUISkin
struct GUISkin_t510;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t509;
// UnityEngine.GUIStyle
struct GUIStyle_t517;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C" void GUI__cctor_m2406 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C" void GUI_set_nextScrollStepTime_m2407 (Object_t * __this /* static, unused */, DateTime_t77  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C" void GUI_set_skin_m2408 (Object_t * __this /* static, unused */, GUISkin_t510 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C" GUISkin_t510 * GUI_get_skin_m2409 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C" void GUI_set_changed_m2410 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" void GUI_CallWindowDelegate_m2411 (Object_t * __this /* static, unused */, WindowFunction_t509 * ___func, int32_t ___id, GUISkin_t510 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t517 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
