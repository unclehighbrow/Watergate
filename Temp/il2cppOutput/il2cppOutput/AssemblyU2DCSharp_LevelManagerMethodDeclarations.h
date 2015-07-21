#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LevelManager
struct LevelManager_t33;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// Player
struct Player_t1;

// System.Void LevelManager::.ctor()
extern "C" void LevelManager__ctor_m56 (LevelManager_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::.cctor()
extern "C" void LevelManager__cctor_m57 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::Start()
extern "C" void LevelManager_Start_m58 (LevelManager_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LevelManager::get_LevelStarted()
extern "C" bool LevelManager_get_LevelStarted_m59 (LevelManager_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::set_LevelStarted(System.Boolean)
extern "C" void LevelManager_set_LevelStarted_m60 (LevelManager_t33 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::Pause()
extern "C" void LevelManager_Pause_m61 (LevelManager_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::OnApplicationPause(System.Boolean)
extern "C" void LevelManager_OnApplicationPause_m62 (LevelManager_t33 * __this, bool ___pauseStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::Resume()
extern "C" void LevelManager_Resume_m63 (LevelManager_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::SetFlowerpotTimer()
extern "C" void LevelManager_SetFlowerpotTimer_m64 (LevelManager_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::Awake()
extern "C" void LevelManager_Awake_m65 (LevelManager_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::FlashBurglars()
extern "C" void LevelManager_FlashBurglars_m66 (LevelManager_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator LevelManager::LoadNextLevel()
extern "C" Object_t * LevelManager_LoadNextLevel_m67 (LevelManager_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::Update()
extern "C" void LevelManager_Update_m68 (LevelManager_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::StartScareMode()
extern "C" void LevelManager_StartScareMode_m69 (LevelManager_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::EndScareMode()
extern "C" void LevelManager_EndScareMode_m70 (LevelManager_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::RectifyLifeUis()
extern "C" void LevelManager_RectifyLifeUis_m71 (LevelManager_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::FinishDying()
extern "C" void LevelManager_FinishDying_m72 (LevelManager_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::Die()
extern "C" void LevelManager_Die_m73 (LevelManager_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::<Awake>m__2()
extern "C" void LevelManager_U3CAwakeU3Em__2_m74 (LevelManager_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::<Awake>m__3()
extern "C" void LevelManager_U3CAwakeU3Em__3_m75 (LevelManager_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LevelManager::<FinishDying>m__4(Player)
extern "C" bool LevelManager_U3CFinishDyingU3Em__4_m76 (Object_t * __this /* static, unused */, Player_t1 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
