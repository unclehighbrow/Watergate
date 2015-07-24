#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t656;
struct GcAchievementData_t656_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t665;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t665 * GcAchievementData_ToAchievement_m3332 (GcAchievementData_t656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t656_marshal(const GcAchievementData_t656& unmarshaled, GcAchievementData_t656_marshaled& marshaled);
void GcAchievementData_t656_marshal_back(const GcAchievementData_t656_marshaled& marshaled, GcAchievementData_t656& unmarshaled);
void GcAchievementData_t656_marshal_cleanup(GcAchievementData_t656_marshaled& marshaled);
