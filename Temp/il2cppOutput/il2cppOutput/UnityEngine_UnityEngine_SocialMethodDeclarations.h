#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Social
struct Social_t672;
// UnityEngine.SocialPlatforms.ISocialPlatform
struct ISocialPlatform_t673;
// UnityEngine.SocialPlatforms.ILocalUser
struct ILocalUser_t70;
// System.String
struct String_t;
// System.Action`1<System.Boolean>
struct Action_1_t14;
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_t13;

// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.Social::get_Active()
extern "C" Object_t * Social_get_Active_m3401 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.Social::get_localUser()
extern "C" Object_t * Social_get_localUser_m221 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Social::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>)
extern "C" void Social_ReportScore_m226 (Object_t * __this /* static, unused */, int64_t ___score, String_t* ___board, Action_1_t14 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Social::LoadScores(System.String,System.Action`1<UnityEngine.SocialPlatforms.IScore[]>)
extern "C" void Social_LoadScores_m224 (Object_t * __this /* static, unused */, String_t* ___leaderboardID, Action_1_t13 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Social::ShowLeaderboardUI()
extern "C" void Social_ShowLeaderboardUI_m227 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
