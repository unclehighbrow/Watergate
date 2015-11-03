#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t59;
// LevelManager
struct LevelManager_t30;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// WatergateControl
struct  WatergateControl_t58  : public MonoBehaviour_t14
{
	// System.Collections.Hashtable WatergateControl::touchMap
	Hashtable_t59 * ___touchMap_2;
	// UnityEngine.Vector3 WatergateControl::firstMousePosition
	Vector3_t60  ___firstMousePosition_3;
	// LevelManager WatergateControl::levelManager
	LevelManager_t30 * ___levelManager_4;
};
