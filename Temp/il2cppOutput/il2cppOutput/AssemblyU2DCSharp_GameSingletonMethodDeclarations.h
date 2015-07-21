#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameSingleton
struct GameSingleton_t15;
// System.String
struct String_t;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t57;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void GameSingleton::.ctor()
extern "C" void GameSingleton__ctor_m16 (GameSingleton_t15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSingleton::Awake()
extern "C" void GameSingleton_Awake_m17 (GameSingleton_t15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 GameSingleton::GetGameView()
extern "C" Vector2_t35  GameSingleton_GetGameView_m18 (GameSingleton_t15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSingleton::Start()
extern "C" void GameSingleton_Start_m19 (GameSingleton_t15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSingleton::ProcessAuthentication(System.Boolean)
extern "C" void GameSingleton_ProcessAuthentication_m20 (GameSingleton_t15 * __this, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSingleton::FetchScores()
extern "C" void GameSingleton_FetchScores_m21 (GameSingleton_t15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameSingleton::RecordScore()
extern "C" bool GameSingleton_RecordScore_m22 (GameSingleton_t15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSingleton::ShowLeaderboardUI()
extern "C" void GameSingleton_ShowLeaderboardUI_m23 (GameSingleton_t15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSingleton::LoadNextLevel()
extern "C" void GameSingleton_LoadNextLevel_m24 (GameSingleton_t15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSingleton::GameOver()
extern "C" void GameSingleton_GameOver_m25 (GameSingleton_t15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSingleton::LoadLevel(System.String)
extern "C" void GameSingleton_LoadLevel_m26 (GameSingleton_t15 * __this, String_t* ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSingleton::<FetchScores>m__0(UnityEngine.SocialPlatforms.IScore[])
extern "C" void GameSingleton_U3CFetchScoresU3Em__0_m27 (Object_t * __this /* static, unused */, IScoreU5BU5D_t57* ___scores, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSingleton::<RecordScore>m__1(System.Boolean)
extern "C" void GameSingleton_U3CRecordScoreU3Em__1_m28 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
