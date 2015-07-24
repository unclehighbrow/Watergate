#pragma once
#include <stdint.h>
// UnityEngine.Display[]
struct DisplayU5BU5D_t561;
// UnityEngine.Display
struct Display_t562;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t560;
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Display
struct  Display_t562  : public Object_t
{
	// System.IntPtr UnityEngine.Display::nativeDisplay
	IntPtr_t ___nativeDisplay_0;
};
struct Display_t562_StaticFields{
	// UnityEngine.Display[] UnityEngine.Display::displays
	DisplayU5BU5D_t561* ___displays_1;
	// UnityEngine.Display UnityEngine.Display::_mainDisplay
	Display_t562 * ____mainDisplay_2;
	// UnityEngine.Display/DisplaysUpdatedDelegate UnityEngine.Display::onDisplaysUpdated
	DisplaysUpdatedDelegate_t560 * ___onDisplaysUpdated_3;
};
