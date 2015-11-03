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
// UnityEngine.UI.Image
struct Image_t53;
// UnityEngine.GameObject
struct GameObject_t31;
// Player
struct Player_t3;
// LevelManager
struct LevelManager_t30;
// UnityEngine.Sprite
struct Sprite_t8;
// UnityEngine.AudioSource
struct AudioSource_t17;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// TutorialBase
struct  TutorialBase_t27  : public MonoBehaviour_t14
{
	// UnityEngine.UI.Text TutorialBase::uiText
	Text_t15 * ___uiText_2;
	// UnityEngine.UI.Text TutorialBase::shadowText
	Text_t15 * ___shadowText_3;
	// UnityEngine.UI.Image TutorialBase::pointer
	Image_t53 * ___pointer_4;
	// System.Int32 TutorialBase::currentLines
	int32_t ___currentLines_5;
	// System.Boolean TutorialBase::next
	bool ___next_6;
	// System.Boolean TutorialBase::writing
	bool ___writing_7;
	// System.Int32 TutorialBase::mode
	int32_t ___mode_8;
	// System.Int32 TutorialBase::goalsHit
	int32_t ___goalsHit_9;
	// System.Single TutorialBase::writingDelayDefault
	float ___writingDelayDefault_10;
	// System.Single TutorialBase::writingDelay
	float ___writingDelay_11;
	// UnityEngine.GameObject TutorialBase::wallHolder1
	GameObject_t31 * ___wallHolder1_12;
	// UnityEngine.GameObject TutorialBase::wallHolder2
	GameObject_t31 * ___wallHolder2_13;
	// Player TutorialBase::woodward
	Player_t3 * ___woodward_14;
	// Player TutorialBase::bernstein
	Player_t3 * ___bernstein_15;
	// LevelManager TutorialBase::levelManager
	LevelManager_t30 * ___levelManager_16;
	// UnityEngine.UI.Image TutorialBase::image
	Image_t53 * ___image_17;
	// UnityEngine.Sprite TutorialBase::woodwardSprite
	Sprite_t8 * ___woodwardSprite_18;
	// UnityEngine.Sprite TutorialBase::bernsteinSprite
	Sprite_t8 * ___bernsteinSprite_19;
	// UnityEngine.Sprite TutorialBase::deepThroatSprite
	Sprite_t8 * ___deepThroatSprite_20;
	// UnityEngine.GameObject TutorialBase::tutorialArrowW
	GameObject_t31 * ___tutorialArrowW_21;
	// UnityEngine.GameObject TutorialBase::tutorialArrowB
	GameObject_t31 * ___tutorialArrowB_22;
	// System.Int32 TutorialBase::Line
	int32_t ___Line_23;
	// UnityEngine.AudioSource TutorialBase::audioSource
	AudioSource_t17 * ___audioSource_24;
};
