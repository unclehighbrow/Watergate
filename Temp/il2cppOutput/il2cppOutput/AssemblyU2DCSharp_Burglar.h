#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Player
struct Player_t3;

#include "AssemblyU2DCSharp_Person.h"

// Burglar
struct  Burglar_t1  : public Person_t2
{
	// System.Single Burglar::scareModeSpeedMultiplier
	float ___scareModeSpeedMultiplier_14;
	// System.Single Burglar::deadSpeedMultiplier
	float ___deadSpeedMultiplier_15;
	// Player Burglar::hardTarget
	Player_t3 * ___hardTarget_16;
};
