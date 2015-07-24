#pragma once
#include <stdint.h>
// LevelManager
struct LevelManager_t36;
// UnityEngine.Animator
struct Animator_t39;
// Node[,]
struct NodeU5BU2CU5D_t40;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t41;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// Person
struct  Person_t3  : public MonoBehaviour_t16
{
	// System.Single Person::speed
	float ___speed_2;
	// UnityEngine.Vector2 Person::direction
	Vector2_t38  ___direction_3;
	// UnityEngine.Vector2 Person::destination
	Vector2_t38  ___destination_4;
	// UnityEngine.Vector2 Person::startPosition
	Vector2_t38  ___startPosition_5;
	// LevelManager Person::levelManager
	LevelManager_t36 * ___levelManager_6;
	// System.Int32 Person::intelligence
	int32_t ___intelligence_7;
	// UnityEngine.Animator Person::animator
	Animator_t39 * ___animator_8;
	// UnityEngine.Vector2 Person::preference
	Vector2_t38  ___preference_9;
	// Node[,] Person::grid
	NodeU5BU2CU5D_t40* ___grid_10;
	// UnityEngine.Color Person::spriteColor
	Color_t13  ___spriteColor_11;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> Person::path
	List_1_t41 * ___path_13;
};
struct Person_t3_StaticFields{
	// System.Collections.Generic.List`1<UnityEngine.Vector2> Person::possibleDirs
	List_1_t41 * ___possibleDirs_12;
};
