﻿#pragma once
#include <stdint.h>
// UnityEngine.Font
struct Font_t186;
// UnityEngine.GUIStyle
struct GUIStyle_t516;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t527;
// UnityEngine.GUISettings
struct GUISettings_t525;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t528;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_t526;
// UnityEngine.GUISkin
struct GUISkin_t509;
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObject.h"
// UnityEngine.GUISkin
struct  GUISkin_t509  : public ScriptableObject_t6
{
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_t186 * ___m_Font_2;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t516 * ___m_box_3;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t516 * ___m_button_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t516 * ___m_toggle_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t516 * ___m_label_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t516 * ___m_textField_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t516 * ___m_textArea_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t516 * ___m_window_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t516 * ___m_horizontalSlider_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t516 * ___m_horizontalSliderThumb_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t516 * ___m_verticalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t516 * ___m_verticalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t516 * ___m_horizontalScrollbar_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t516 * ___m_horizontalScrollbarThumb_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t516 * ___m_horizontalScrollbarLeftButton_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t516 * ___m_horizontalScrollbarRightButton_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t516 * ___m_verticalScrollbar_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t516 * ___m_verticalScrollbarThumb_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t516 * ___m_verticalScrollbarUpButton_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t516 * ___m_verticalScrollbarDownButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t516 * ___m_ScrollView_22;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t527* ___m_CustomStyles_23;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_t525 * ___m_Settings_24;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::styles
	Dictionary_2_t528 * ___styles_26;
};
struct GUISkin_t509_StaticFields{
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t516 * ___ms_Error_25;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_t526 * ___m_SkinChanged_27;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_t509 * ___current_28;
};
