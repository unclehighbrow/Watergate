#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t31;
// System.Collections.Generic.List`1<Player>
struct List_1_t32;
// System.Collections.Generic.List`1<Burglar>
struct List_1_t33;
// System.Collections.Generic.List`1<WarpZone>
struct List_1_t34;
// UnityEngine.UI.Text
struct Text_t15;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t35;
// UnityEngine.CanvasGroup
struct CanvasGroup_t36;
// UnityEngine.AudioSource
struct AudioSource_t17;
// UnityEngine.AudioClip
struct AudioClip_t18;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t37;
// System.Predicate`1<Player>
struct Predicate_1_t38;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// LevelManager
struct  LevelManager_t30  : public MonoBehaviour_t14
{
	// UnityEngine.GameObject LevelManager::pelletHolder
	GameObject_t31 * ___pelletHolder_2;
	// System.Boolean LevelManager::scareMode
	bool ___scareMode_3;
	// System.Single LevelManager::timer
	float ___timer_4;
	// System.Collections.Generic.List`1<Player> LevelManager::players
	List_1_t32 * ___players_5;
	// System.Collections.Generic.List`1<Burglar> LevelManager::burglars
	List_1_t33 * ___burglars_6;
	// System.Collections.Generic.List`1<WarpZone> LevelManager::warpZones
	List_1_t34 * ___warpZones_7;
	// System.Int32 LevelManager::burglarsEatenInScareMode
	int32_t ___burglarsEatenInScareMode_8;
	// UnityEngine.UI.Text LevelManager::scoreUi
	Text_t15 * ___scoreUi_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> LevelManager::lifeUis
	List_1_t35 * ___lifeUis_10;
	// UnityEngine.CanvasGroup LevelManager::pausePanel
	CanvasGroup_t36 * ___pausePanel_11;
	// System.Single LevelManager::timeUntilFlowerpot
	float ___timeUntilFlowerpot_12;
	// UnityEngine.GameObject LevelManager::flowerpot
	GameObject_t31 * ___flowerpot_13;
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
	// UnityEngine.AudioSource LevelManager::audioSource
	AudioSource_t17 * ___audioSource_19;
	// UnityEngine.AudioClip LevelManager::powerPelletSound
	AudioClip_t18 * ___powerPelletSound_20;
	// UnityEngine.AudioClip LevelManager::ticSound
	AudioClip_t18 * ___ticSound_21;
	// UnityEngine.AudioClip LevelManager::tocSound
	AudioClip_t18 * ___tocSound_22;
	// UnityEngine.AudioSource LevelManager::music
	AudioSource_t17 * ___music_23;
	// System.Collections.Generic.List`1<System.Single> LevelManager::cameraSizes
	List_1_t37 * ___cameraSizes_24;
};
struct LevelManager_t30_StaticFields{
	// System.Collections.Generic.List`1<System.Single> LevelManager::screenRatios
	List_1_t37 * ___screenRatios_25;
	// System.Predicate`1<Player> LevelManager::<>f__am$cache18
	Predicate_1_t38 * ___U3CU3Ef__amU24cache18_26;
};
