#pragma once
#include <stdint.h>
// GameSingleton
struct GameSingleton_t19;
// System.Object
struct Object_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Singleton`1<GameSingleton>
struct  Singleton_1_t20  : public MonoBehaviour_t16
{
};
struct Singleton_1_t20_StaticFields{
	// T Singleton`1<GameSingleton>::_instance
	GameSingleton_t19 * ____instance_2;
	// System.Object Singleton`1<GameSingleton>::_lock
	Object_t * ____lock_3;
	// System.Boolean Singleton`1<GameSingleton>::applicationIsQuitting
	bool ___applicationIsQuitting_4;
};
