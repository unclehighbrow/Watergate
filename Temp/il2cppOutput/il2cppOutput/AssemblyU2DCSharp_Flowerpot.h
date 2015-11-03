#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WarpZone
struct WarpZone_t10;

#include "AssemblyU2DCSharp_Person.h"

// Flowerpot
struct  Flowerpot_t9  : public Person_t2
{
	// WarpZone Flowerpot::enter
	WarpZone_t10 * ___enter_14;
	// WarpZone Flowerpot::exit
	WarpZone_t10 * ___exit_15;
	// System.Int32 Flowerpot::minIntelligence
	int32_t ___minIntelligence_16;
	// System.Int32 Flowerpot::startIntelligence
	int32_t ___startIntelligence_17;
};
