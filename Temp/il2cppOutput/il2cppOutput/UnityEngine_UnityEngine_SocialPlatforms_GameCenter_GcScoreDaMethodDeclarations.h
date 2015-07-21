#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t656;
struct GcScoreData_t656_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t666;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t666 * GcScoreData_ToScore_m3325 (GcScoreData_t656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t656_marshal(const GcScoreData_t656& unmarshaled, GcScoreData_t656_marshaled& marshaled);
void GcScoreData_t656_marshal_back(const GcScoreData_t656_marshaled& marshaled, GcScoreData_t656& unmarshaled);
void GcScoreData_t656_marshal_cleanup(GcScoreData_t656_marshaled& marshaled);
