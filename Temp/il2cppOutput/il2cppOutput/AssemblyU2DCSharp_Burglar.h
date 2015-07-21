#pragma once
#include <stdint.h>
// Player
struct Player_t1;
// Person
#include "AssemblyU2DCSharp_Person.h"
// Burglar
struct  Burglar_t2  : public Person_t3
{
	// System.Single Burglar::scareModeSpeedMultiplier
	float ___scareModeSpeedMultiplier_14;
	// System.Single Burglar::deadSpeedMultiplier
	float ___deadSpeedMultiplier_15;
	// Player Burglar::hardTarget
	Player_t1 * ___hardTarget_16;
};
