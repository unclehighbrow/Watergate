#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t15;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t16;
// UnityEngine.AudioSource
struct AudioSource_t17;
// UnityEngine.AudioClip
struct AudioClip_t18;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// GameOver
struct  GameOver_t13  : public MonoBehaviour_t14
{
	// UnityEngine.UI.Text GameOver::HighScore
	Text_t15 * ___HighScore_2;
	// UnityEngine.SpriteRenderer GameOver::Nixon
	SpriteRenderer_t16 * ___Nixon_3;
	// UnityEngine.SpriteRenderer GameOver::LeftHand
	SpriteRenderer_t16 * ___LeftHand_4;
	// UnityEngine.SpriteRenderer GameOver::RightHand
	SpriteRenderer_t16 * ___RightHand_5;
	// UnityEngine.AudioSource GameOver::audioSource
	AudioSource_t17 * ___audioSource_6;
	// UnityEngine.AudioClip GameOver::nixonLaugh
	AudioClip_t18 * ___nixonLaugh_7;
	// UnityEngine.AudioClip GameOver::rap
	AudioClip_t18 * ___rap_8;
};
