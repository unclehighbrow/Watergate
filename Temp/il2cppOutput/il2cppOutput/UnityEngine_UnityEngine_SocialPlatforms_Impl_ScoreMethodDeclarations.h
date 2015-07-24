#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t667;
// System.String
struct String_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
extern "C" void Score__ctor_m3378 (Score_t667 * __this, String_t* ___leaderboardID, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
extern "C" void Score__ctor_m3379 (Score_t667 * __this, String_t* ___leaderboardID, int64_t ___value, String_t* ___userID, DateTime_t77  ___date, String_t* ___formattedValue, int32_t ___rank, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.Score::ToString()
extern "C" String_t* Score_ToString_m3380 (Score_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
extern "C" String_t* Score_get_leaderboardID_m3381 (Score_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
extern "C" void Score_set_leaderboardID_m3382 (Score_t667 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
extern "C" int64_t Score_get_value_m3383 (Score_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
extern "C" void Score_set_value_m3384 (Score_t667 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime UnityEngine.SocialPlatforms.Impl.Score::get_date()
extern "C" DateTime_t77  Score_get_date_m3385 (Score_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_formattedValue()
extern "C" String_t* Score_get_formattedValue_m3386 (Score_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_userID()
extern "C" String_t* Score_get_userID_m3387 (Score_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
