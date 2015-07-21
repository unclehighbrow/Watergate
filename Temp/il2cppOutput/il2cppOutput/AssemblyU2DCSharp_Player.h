#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t24;
// Person
#include "AssemblyU2DCSharp_Person.h"
// Player
struct  Player_t1  : public Person_t3
{
	// System.Boolean Player::isDeepThroat
	bool ___isDeepThroat_14;
	// UnityEngine.GameObject Player::deepThroatPrefab
	GameObject_t24 * ___deepThroatPrefab_15;
	// UnityEngine.GameObject Player::scoreNotifPrefab
	GameObject_t24 * ___scoreNotifPrefab_16;
	// System.Single Player::maxIdleTime
	float ___maxIdleTime_17;
	// System.Single Player::idleTime
	float ___idleTime_18;
};
