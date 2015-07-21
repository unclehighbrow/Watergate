#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t24;
// System.Collections.Generic.List`1<Player>
struct List_1_t25;
// System.Collections.Generic.List`1<Burglar>
struct List_1_t26;
// System.Collections.Generic.List`1<WarpZone>
struct List_1_t27;
// UnityEngine.UI.Text
struct Text_t28;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t29;
// UnityEngine.CanvasGroup
struct CanvasGroup_t30;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t31;
// System.Predicate`1<Player>
struct Predicate_1_t32;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// LevelManager
struct  LevelManager_t33  : public MonoBehaviour_t12
{
	// UnityEngine.GameObject LevelManager::pelletHolder
	GameObject_t24 * ___pelletHolder_2;
	// System.Boolean LevelManager::scareMode
	bool ___scareMode_3;
	// System.Single LevelManager::timer
	float ___timer_4;
	// System.Single LevelManager::timerStart
	float ___timerStart_5;
	// System.Collections.Generic.List`1<Player> LevelManager::players
	List_1_t25 * ___players_6;
	// System.Collections.Generic.List`1<Burglar> LevelManager::burglars
	List_1_t26 * ___burglars_7;
	// System.Collections.Generic.List`1<WarpZone> LevelManager::warpZones
	List_1_t27 * ___warpZones_8;
	// System.Int32 LevelManager::burglarsEatenInScareMode
	int32_t ___burglarsEatenInScareMode_9;
	// UnityEngine.UI.Text LevelManager::scoreUi
	Text_t28 * ___scoreUi_10;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> LevelManager::lifeUis
	List_1_t29 * ___lifeUis_11;
	// UnityEngine.CanvasGroup LevelManager::pausePanel
	CanvasGroup_t30 * ___pausePanel_12;
	// System.Single LevelManager::timeUntilFlowerpot
	float ___timeUntilFlowerpot_13;
	// UnityEngine.GameObject LevelManager::flowerpot
	GameObject_t24 * ___flowerpot_14;
	// System.Boolean LevelManager::tutorial
	bool ___tutorial_15;
	// System.Int32 LevelManager::level
	int32_t ___level_16;
	// System.Int32 LevelManager::gridSizeX
	int32_t ___gridSizeX_17;
	// System.Int32 LevelManager::gridSizeY
	int32_t ___gridSizeY_18;
	// System.Boolean LevelManager::_levelStarted
	bool ____levelStarted_19;
	// System.Collections.Generic.List`1<System.Single> LevelManager::cameraSizes
	List_1_t31 * ___cameraSizes_20;
};
struct LevelManager_t33_StaticFields{
	// System.Collections.Generic.List`1<System.Single> LevelManager::screenRatios
	List_1_t31 * ___screenRatios_21;
	// System.Predicate`1<Player> LevelManager::<>f__am$cache14
	Predicate_1_t32 * ___U3CU3Ef__amU24cache14_22;
};
