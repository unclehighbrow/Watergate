#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_t13;
// System.Action`1<System.Boolean>
struct Action_1_t14;
// Singleton`1<GameSingleton>
#include "AssemblyU2DCSharp_Singleton_1_gen.h"
// GameSingleton
struct  GameSingleton_t15  : public Singleton_1_t16
{
	// System.Int32 GameSingleton::score
	int32_t ___score_5;
	// System.Int32 GameSingleton::lives
	int32_t ___lives_6;
	// System.Single GameSingleton::playerSpeed
	float ___playerSpeed_7;
	// System.Single GameSingleton::burglarSpeed
	float ___burglarSpeed_8;
	// System.Single GameSingleton::playerSpeedMultiplier
	float ___playerSpeedMultiplier_9;
	// System.Single GameSingleton::burglarSpeedMultiplier
	float ___burglarSpeedMultiplier_10;
	// System.String GameSingleton::leaderboard
	String_t* ___leaderboard_11;
	// System.Boolean GameSingleton::loggedIn
	bool ___loggedIn_12;
	// System.Int32 GameSingleton::highScore
	int32_t ___highScore_13;
	// System.Int32 GameSingleton::stashedLevel
	int32_t ___stashedLevel_14;
	// System.Single GameSingleton::deviceWidth
	float ___deviceWidth_15;
	// System.Single GameSingleton::deviceHeight
	float ___deviceHeight_16;
};
struct GameSingleton_t15_StaticFields{
	// System.Action`1<UnityEngine.SocialPlatforms.IScore[]> GameSingleton::<>f__am$cacheC
	Action_1_t13 * ___U3CU3Ef__amU24cacheC_17;
	// System.Action`1<System.Boolean> GameSingleton::<>f__am$cacheD
	Action_1_t14 * ___U3CU3Ef__amU24cacheD_18;
};
