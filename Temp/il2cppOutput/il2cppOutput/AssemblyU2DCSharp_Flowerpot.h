#pragma once
#include <stdint.h>
// WarpZone
struct WarpZone_t9;
// Person
#include "AssemblyU2DCSharp_Person.h"
// Flowerpot
struct  Flowerpot_t10  : public Person_t3
{
	// WarpZone Flowerpot::enter
	WarpZone_t9 * ___enter_14;
	// WarpZone Flowerpot::exit
	WarpZone_t9 * ___exit_15;
	// System.Int32 Flowerpot::minIntelligence
	int32_t ___minIntelligence_16;
	// System.Int32 Flowerpot::startIntelligence
	int32_t ___startIntelligence_17;
};
