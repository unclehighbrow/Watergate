#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.HumanBone
struct HumanBone_t591;
struct HumanBone_t591_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.HumanBone::get_boneName()
extern "C" String_t* HumanBone_get_boneName_m3016 (HumanBone_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
extern "C" void HumanBone_set_boneName_m3017 (HumanBone_t591 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.HumanBone::get_humanName()
extern "C" String_t* HumanBone_get_humanName_m3018 (HumanBone_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
extern "C" void HumanBone_set_humanName_m3019 (HumanBone_t591 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void HumanBone_t591_marshal(const HumanBone_t591& unmarshaled, HumanBone_t591_marshaled& marshaled);
void HumanBone_t591_marshal_back(const HumanBone_t591_marshaled& marshaled, HumanBone_t591& unmarshaled);
void HumanBone_t591_marshal_cleanup(HumanBone_t591_marshaled& marshaled);
