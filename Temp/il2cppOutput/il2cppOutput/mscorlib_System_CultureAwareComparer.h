#pragma once
#include <stdint.h>
// System.Globalization.CompareInfo
struct CompareInfo_t1359;
// System.StringComparer
#include "mscorlib_System_StringComparer.h"
// System.CultureAwareComparer
struct  CultureAwareComparer_t1875  : public StringComparer_t741
{
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_4;
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t1359 * ____compareInfo_5;
};
