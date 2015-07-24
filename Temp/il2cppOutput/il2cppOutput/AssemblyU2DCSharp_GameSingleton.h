#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_t17;
// System.Action`1<System.Boolean>
struct Action_1_t18;
// Singleton`1<GameSingleton>
#include "AssemblyU2DCSharp_Singleton_1_gen.h"
// GameSingleton
struct  GameSingleton_t19  : public Singleton_1_t20
{
	// System.Int32 GameSingleton::score
	int32_t ___score_5;
	// System.Int32 GameSingleton::lives
	int32_t ___lives_6;
	// System.Single GameSingleton::playerSpeed
	float ___playerSpeed_7;
	// System.Single GameSingleton::burglarSpeed
	float ___burglarSpeed_8;
	// System.Single GameSingleton::scareTimer
	float ___scareTimer_9;
	// System.Single GameSingleton::playerSpeedMultiplier
	float ___playerSpeedMultiplier_10;
	// System.Single GameSingleton::burglarSpeedMultiplier
	float ___burglarSpeedMultiplier_11;
	// System.Single GameSingleton::scareTimerMultipler
	float ___scareTimerMultipler_12;
	// System.String GameSingleton::leaderboard
	String_t* ___leaderboard_13;
	// System.Boolean GameSingleton::loggedIn
	bool ___loggedIn_14;
	// System.Int32 GameSingleton::highScore
	int32_t ___highScore_15;
	// System.Int32 GameSingleton::stashedLevel
	int32_t ___stashedLevel_16;
	// System.Boolean GameSingleton::justBeatTheGame
	bool ___justBeatTheGame_17;
	// System.Single GameSingleton::deviceWidth
	float ___deviceWidth_18;
	// System.Single GameSingleton::deviceHeight
	float ___deviceHeight_19;
};
struct GameSingleton_t19_StaticFields{
	// System.Action`1<UnityEngine.SocialPlatforms.IScore[]> GameSingleton::<>f__am$cacheF
	Action_1_t17 * ___U3CU3Ef__amU24cacheF_20;
	// System.Action`1<System.Boolean> GameSingleton::<>f__am$cache10
	Action_1_t18 * ___U3CU3Ef__amU24cache10_21;
};
