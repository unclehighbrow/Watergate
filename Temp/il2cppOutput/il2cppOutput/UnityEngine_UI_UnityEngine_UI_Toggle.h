#pragma once
#include <stdint.h>
// UnityEngine.UI.Graphic
struct Graphic_t199;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t271;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t269;
// UnityEngine.UI.Selectable
#include "UnityEngine_UI_UnityEngine_UI_Selectable.h"
// UnityEngine.UI.Toggle/ToggleTransition
#include "UnityEngine_UI_UnityEngine_UI_Toggle_ToggleTransition.h"
// UnityEngine.UI.Toggle
struct  Toggle_t272  : public Selectable_t181
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_16;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_t199 * ___graphic_17;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_t271 * ___m_Group_18;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t269 * ___onValueChanged_19;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_20;
};
