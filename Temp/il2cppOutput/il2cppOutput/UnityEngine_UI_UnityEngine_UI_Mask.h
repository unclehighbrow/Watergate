#pragma once
#include <stdint.h>
// UnityEngine.Material
struct Material_t192;
// UnityEngine.UI.Graphic
struct Graphic_t199;
// UnityEngine.RectTransform
struct RectTransform_t70;
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"
// UnityEngine.UI.Mask
struct  Mask_t299  : public UIBehaviour_t123
{
	// System.Boolean UnityEngine.UI.Mask::m_ShowMaskGraphic
	bool ___m_ShowMaskGraphic_2;
	// UnityEngine.Material UnityEngine.UI.Mask::m_RenderMaterial
	Material_t192 * ___m_RenderMaterial_3;
	// UnityEngine.UI.Graphic UnityEngine.UI.Mask::m_Graphic
	Graphic_t199 * ___m_Graphic_4;
	// UnityEngine.RectTransform UnityEngine.UI.Mask::m_RectTransform
	RectTransform_t70 * ___m_RectTransform_5;
};
