#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t655;
struct GcAchievementData_t655_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t664;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t664 * GcAchievementData_ToAchievement_m3324 (GcAchievementData_t655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t655_marshal(const GcAchievementData_t655& unmarshaled, GcAchievementData_t655_marshaled& marshaled);
void GcAchievementData_t655_marshal_back(const GcAchievementData_t655_marshaled& marshaled, GcAchievementData_t655& unmarshaled);
void GcAchievementData_t655_marshal_cleanup(GcAchievementData_t655_marshaled& marshaled);
