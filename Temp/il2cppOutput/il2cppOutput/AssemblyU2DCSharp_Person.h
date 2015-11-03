#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// LevelManager
struct LevelManager_t30;
// UnityEngine.Animator
struct Animator_t41;
// Node[,]
struct NodeU5BU2CU5D_t42;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t43;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Color.h"

// Person
struct  Person_t2  : public MonoBehaviour_t14
{
	// System.Single Person::speed
	float ___speed_2;
	// UnityEngine.Vector2 Person::direction
	Vector2_t40  ___direction_3;
	// UnityEngine.Vector2 Person::destination
	Vector2_t40  ___destination_4;
	// UnityEngine.Vector2 Person::startPosition
	Vector2_t40  ___startPosition_5;
	// LevelManager Person::levelManager
	LevelManager_t30 * ___levelManager_6;
	// System.Int32 Person::intelligence
	int32_t ___intelligence_7;
	// UnityEngine.Animator Person::animator
	Animator_t41 * ___animator_8;
	// UnityEngine.Vector2 Person::preference
	Vector2_t40  ___preference_9;
	// Node[,] Person::grid
	NodeU5BU2CU5D_t42* ___grid_10;
	// UnityEngine.Color Person::spriteColor
	Color_t12  ___spriteColor_11;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> Person::path
	List_1_t43 * ___path_13;
};
struct Person_t2_StaticFields{
	// System.Collections.Generic.List`1<UnityEngine.Vector2> Person::possibleDirs
	List_1_t43 * ___possibleDirs_12;
};
