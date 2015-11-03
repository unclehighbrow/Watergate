#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t255;

#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic.h"
#include "UnityEngine_UnityEngine_Rect.h"

// UnityEngine.UI.RawImage
struct  RawImage_t254  : public MaskableGraphic_t221
{
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t255 * ___m_Texture_26;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_t239  ___m_UVRect_27;
};
