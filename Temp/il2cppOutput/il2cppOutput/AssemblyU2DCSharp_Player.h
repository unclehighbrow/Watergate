#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t31;
// UnityEngine.AudioClip
struct AudioClip_t18;
// UnityEngine.AudioSource
struct AudioSource_t17;

#include "AssemblyU2DCSharp_Person.h"

// Player
struct  Player_t3  : public Person_t2
{
	// System.Boolean Player::isDeepThroat
	bool ___isDeepThroat_14;
	// UnityEngine.GameObject Player::deepThroatPrefab
	GameObject_t31 * ___deepThroatPrefab_15;
	// UnityEngine.GameObject Player::scoreNotifPrefab
	GameObject_t31 * ___scoreNotifPrefab_16;
	// System.Single Player::maxIdleTime
	float ___maxIdleTime_17;
	// System.Single Player::idleTime
	float ___idleTime_18;
	// UnityEngine.AudioClip Player::pelletSound
	AudioClip_t18 * ___pelletSound_19;
	// UnityEngine.AudioClip Player::dyingSound
	AudioClip_t18 * ___dyingSound_20;
	// UnityEngine.AudioClip Player::flowerPotSound
	AudioClip_t18 * ___flowerPotSound_21;
	// UnityEngine.AudioClip Player::burglarDyingSound
	AudioClip_t18 * ___burglarDyingSound_22;
	// UnityEngine.AudioSource Player::audioSource
	AudioSource_t17 * ___audioSource_23;
};
