#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t657;
struct GcScoreData_t657_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t667;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t667 * GcScoreData_ToScore_m3333 (GcScoreData_t657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t657_marshal(const GcScoreData_t657& unmarshaled, GcScoreData_t657_marshaled& marshaled);
void GcScoreData_t657_marshal_back(const GcScoreData_t657_marshaled& marshaled, GcScoreData_t657& unmarshaled);
void GcScoreData_t657_marshal_cleanup(GcScoreData_t657_marshaled& marshaled);
