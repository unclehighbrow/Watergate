#pragma once
#include <stdint.h>
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct Dictionary_2_t516;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t515;
// UnityEngine.GUIStyle
struct GUIStyle_t517;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.GUILayoutUtility
struct  GUILayoutUtility_t518  : public Object_t
{
};
struct GUILayoutUtility_t518_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache> UnityEngine.GUILayoutUtility::storedLayouts
	Dictionary_2_t516 * ___storedLayouts_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache> UnityEngine.GUILayoutUtility::storedWindows
	Dictionary_2_t516 * ___storedWindows_1;
	// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::current
	LayoutCache_t515 * ___current_2;
	// UnityEngine.Rect UnityEngine.GUILayoutUtility::kDummyRect
	Rect_t230  ___kDummyRect_3;
	// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::s_SpaceStyle
	GUIStyle_t517 * ___s_SpaceStyle_4;
};
