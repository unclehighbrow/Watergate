#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t28;
// System.Collections.Generic.List`1<Player>
struct List_1_t29;
// System.Collections.Generic.List`1<Burglar>
struct List_1_t30;
// System.Collections.Generic.List`1<WarpZone>
struct List_1_t31;
// UnityEngine.UI.Text
struct Text_t14;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t32;
// UnityEngine.CanvasGroup
struct CanvasGroup_t33;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t34;
// System.Predicate`1<Player>
struct Predicate_1_t35;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// LevelManager
struct  LevelManager_t36  : public MonoBehaviour_t16
{
	// UnityEngine.GameObject LevelManager::pelletHolder
	GameObject_t28 * ___pelletHolder_2;
	// System.Boolean LevelManager::scareMode
	bool ___scareMode_3;
	// System.Single LevelManager::timer
	float ___timer_4;
	// System.Collections.Generic.List`1<Player> LevelManager::players
	List_1_t29 * ___players_5;
	// System.Collections.Generic.List`1<Burglar> LevelManager::burglars
	List_1_t30 * ___burglars_6;
	// System.Collections.Generic.List`1<WarpZone> LevelManager::warpZones
	List_1_t31 * ___warpZones_7;
	// System.Int32 LevelManager::burglarsEatenInScareMode
	int32_t ___burglarsEatenInScareMode_8;
	// UnityEngine.UI.Text LevelManager::scoreUi
	Text_t14 * ___scoreUi_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> LevelManager::lifeUis
	List_1_t32 * ___lifeUis_10;
	// UnityEngine.CanvasGroup LevelManager::pausePanel
	CanvasGroup_t33 * ___pausePanel_11;
	// System.Single LevelManager::timeUntilFlowerpot
	float ___timeUntilFlowerpot_12;
	// UnityEngine.GameObject LevelManager::flowerpot
	GameObject_t28 * ___flowerpot_13;
	// System.Boolean LevelManager::tutorial
	bool ___tutorial_14;
	// System.Int32 LevelManager::level
	int32_t ___level_15;
	// System.Int32 LevelManager::gridSizeX
	int32_t ___gridSizeX_16;
	// System.Int32 LevelManager::gridSizeY
	int32_t ___gridSizeY_17;
	// System.Boolean LevelManager::_levelStarted
	bool ____levelStarted_18;
	// System.Collections.Generic.List`1<System.Single> LevelManager::cameraSizes
	List_1_t34 * ___cameraSizes_19;
};
struct LevelManager_t36_StaticFields{
	// System.Collections.Generic.List`1<System.Single> LevelManager::screenRatios
	List_1_t34 * ___screenRatios_20;
	// System.Predicate`1<Player> LevelManager::<>f__am$cache13
	Predicate_1_t35 * ___U3CU3Ef__amU24cache13_21;
};
