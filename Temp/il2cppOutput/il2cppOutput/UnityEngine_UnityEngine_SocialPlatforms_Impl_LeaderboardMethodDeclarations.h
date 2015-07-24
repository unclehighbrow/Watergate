#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct Leaderboard_t496;
// System.String
struct String_t;
// UnityEngine.SocialPlatforms.IScore
struct IScore_t76;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t60;
// System.String[]
struct StringU5BU5D_t48;
// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScope.h"
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_Range.h"
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"

// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
extern "C" void Leaderboard__ctor_m3388 (Leaderboard_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::ToString()
extern "C" String_t* Leaderboard_ToString_m3389 (Leaderboard_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetLocalUserScore(UnityEngine.SocialPlatforms.IScore)
extern "C" void Leaderboard_SetLocalUserScore_m3390 (Leaderboard_t496 * __this, Object_t * ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetMaxRange(System.UInt32)
extern "C" void Leaderboard_SetMaxRange_m3391 (Leaderboard_t496 * __this, uint32_t ___maxRange, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
extern "C" void Leaderboard_SetScores_m3392 (Leaderboard_t496 * __this, IScoreU5BU5D_t60* ___scores, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
extern "C" void Leaderboard_SetTitle_m3393 (Leaderboard_t496 * __this, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::GetUserFilter()
extern "C" StringU5BU5D_t48* Leaderboard_GetUserFilter_m3394 (Leaderboard_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
extern "C" String_t* Leaderboard_get_id_m3395 (Leaderboard_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
extern "C" void Leaderboard_set_id_m3396 (Leaderboard_t496 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
extern "C" int32_t Leaderboard_get_userScope_m3397 (Leaderboard_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
extern "C" void Leaderboard_set_userScope_m3398 (Leaderboard_t496 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
extern "C" Range_t668  Leaderboard_get_range_m3399 (Leaderboard_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
extern "C" void Leaderboard_set_range_m3400 (Leaderboard_t496 * __this, Range_t668  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
extern "C" int32_t Leaderboard_get_timeScope_m3401 (Leaderboard_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
extern "C" void Leaderboard_set_timeScope_m3402 (Leaderboard_t496 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
