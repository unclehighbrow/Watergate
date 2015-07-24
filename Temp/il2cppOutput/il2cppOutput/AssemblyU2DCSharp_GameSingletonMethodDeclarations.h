#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameSingleton
struct GameSingleton_t19;
// System.String
struct String_t;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t60;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void GameSingleton::.ctor()
extern "C" void GameSingleton__ctor_m23 (GameSingleton_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSingleton::Awake()
extern "C" void GameSingleton_Awake_m24 (GameSingleton_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 GameSingleton::GetGameView()
extern "C" Vector2_t38  GameSingleton_GetGameView_m25 (GameSingleton_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSingleton::Start()
extern "C" void GameSingleton_Start_m26 (GameSingleton_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSingleton::ProcessAuthentication(System.Boolean)
extern "C" void GameSingleton_ProcessAuthentication_m27 (GameSingleton_t19 * __this, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSingleton::FetchScores()
extern "C" void GameSingleton_FetchScores_m28 (GameSingleton_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameSingleton::RecordScore()
extern "C" bool GameSingleton_RecordScore_m29 (GameSingleton_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSingleton::ShowLeaderboardUI()
extern "C" void GameSingleton_ShowLeaderboardUI_m30 (GameSingleton_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSingleton::LoadNextLevel()
extern "C" void GameSingleton_LoadNextLevel_m31 (GameSingleton_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSingleton::GameOver()
extern "C" void GameSingleton_GameOver_m32 (GameSingleton_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSingleton::LoadLevel(System.String)
extern "C" void GameSingleton_LoadLevel_m33 (GameSingleton_t19 * __this, String_t* ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSingleton::<FetchScores>m__0(UnityEngine.SocialPlatforms.IScore[])
extern "C" void GameSingleton_U3CFetchScoresU3Em__0_m34 (Object_t * __this /* static, unused */, IScoreU5BU5D_t60* ___scores, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSingleton::<RecordScore>m__1(System.Boolean)
extern "C" void GameSingleton_U3CRecordScoreU3Em__1_m35 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
