#pragma once
#include <stdint.h>
// UnityEngine.UI.Text
struct Text_t14;
// UnityEngine.UI.Image
struct Image_t51;
// UnityEngine.GameObject
struct GameObject_t28;
// Player
struct Player_t1;
// LevelManager
struct LevelManager_t36;
// UnityEngine.Sprite
struct Sprite_t7;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TutorialBase
struct  TutorialBase_t26  : public MonoBehaviour_t16
{
	// UnityEngine.UI.Text TutorialBase::uiText
	Text_t14 * ___uiText_2;
	// UnityEngine.UI.Text TutorialBase::shadowText
	Text_t14 * ___shadowText_3;
	// UnityEngine.UI.Image TutorialBase::pointer
	Image_t51 * ___pointer_4;
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
	GameObject_t28 * ___wallHolder1_12;
	// UnityEngine.GameObject TutorialBase::wallHolder2
	GameObject_t28 * ___wallHolder2_13;
	// Player TutorialBase::woodward
	Player_t1 * ___woodward_14;
	// Player TutorialBase::bernstein
	Player_t1 * ___bernstein_15;
	// LevelManager TutorialBase::levelManager
	LevelManager_t36 * ___levelManager_16;
	// UnityEngine.UI.Image TutorialBase::image
	Image_t51 * ___image_17;
	// UnityEngine.Sprite TutorialBase::woodwardSprite
	Sprite_t7 * ___woodwardSprite_18;
	// UnityEngine.Sprite TutorialBase::bernsteinSprite
	Sprite_t7 * ___bernsteinSprite_19;
	// UnityEngine.Sprite TutorialBase::deepThroatSprite
	Sprite_t7 * ___deepThroatSprite_20;
	// UnityEngine.GameObject TutorialBase::tutorialArrowW
	GameObject_t28 * ___tutorialArrowW_21;
	// UnityEngine.GameObject TutorialBase::tutorialArrowB
	GameObject_t28 * ___tutorialArrowB_22;
	// System.Int32 TutorialBase::Line
	int32_t ___Line_23;
};
