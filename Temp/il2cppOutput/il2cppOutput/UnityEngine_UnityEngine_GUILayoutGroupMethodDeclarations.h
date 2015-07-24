#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t514;
// UnityEngine.RectOffset
struct RectOffset_t291;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t709;
// UnityEngine.GUIStyle
struct GUIStyle_t517;
// System.String
struct String_t;

// System.Void UnityEngine.GUILayoutGroup::.ctor()
extern "C" void GUILayoutGroup__ctor_m2439 (GUILayoutGroup_t514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUILayoutGroup::get_margin()
extern "C" RectOffset_t291 * GUILayoutGroup_get_margin_m2440 (GUILayoutGroup_t514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::ApplyOptions(UnityEngine.GUILayoutOption[])
extern "C" void GUILayoutGroup_ApplyOptions_m2441 (GUILayoutGroup_t514 * __this, GUILayoutOptionU5BU5D_t709* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::ApplyStyleSettings(UnityEngine.GUIStyle)
extern "C" void GUILayoutGroup_ApplyStyleSettings_m2442 (GUILayoutGroup_t514 * __this, GUIStyle_t517 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::ResetCursor()
extern "C" void GUILayoutGroup_ResetCursor_m2443 (GUILayoutGroup_t514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::CalcWidth()
extern "C" void GUILayoutGroup_CalcWidth_m2444 (GUILayoutGroup_t514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single)
extern "C" void GUILayoutGroup_SetHorizontal_m2445 (GUILayoutGroup_t514 * __this, float ___x, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::CalcHeight()
extern "C" void GUILayoutGroup_CalcHeight_m2446 (GUILayoutGroup_t514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single)
extern "C" void GUILayoutGroup_SetVertical_m2447 (GUILayoutGroup_t514 * __this, float ___y, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayoutGroup::ToString()
extern "C" String_t* GUILayoutGroup_ToString_m2448 (GUILayoutGroup_t514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
