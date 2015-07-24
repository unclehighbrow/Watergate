#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t587;
struct AnimationCurve_t587_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t713;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m2993 (AnimationCurve_t587 * __this, KeyframeU5BU5D_t713* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m2994 (AnimationCurve_t587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m2995 (AnimationCurve_t587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m2996 (AnimationCurve_t587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m2997 (AnimationCurve_t587 * __this, KeyframeU5BU5D_t713* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t587_marshal(const AnimationCurve_t587& unmarshaled, AnimationCurve_t587_marshaled& marshaled);
void AnimationCurve_t587_marshal_back(const AnimationCurve_t587_marshaled& marshaled, AnimationCurve_t587& unmarshaled);
void AnimationCurve_t587_marshal_cleanup(AnimationCurve_t587_marshaled& marshaled);
