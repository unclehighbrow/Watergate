#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t586;
struct AnimationCurve_t586_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t712;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m2985 (AnimationCurve_t586 * __this, KeyframeU5BU5D_t712* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m2986 (AnimationCurve_t586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m2987 (AnimationCurve_t586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m2988 (AnimationCurve_t586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m2989 (AnimationCurve_t586 * __this, KeyframeU5BU5D_t712* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t586_marshal(const AnimationCurve_t586& unmarshaled, AnimationCurve_t586_marshaled& marshaled);
void AnimationCurve_t586_marshal_back(const AnimationCurve_t586_marshaled& marshaled, AnimationCurve_t586& unmarshaled);
void AnimationCurve_t586_marshal_cleanup(AnimationCurve_t586_marshaled& marshaled);
