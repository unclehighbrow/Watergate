#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Touch
struct Touch_t105;
struct Touch_t105_marshaled;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"

// System.Int32 UnityEngine.Touch::get_fingerId()
extern "C" int32_t Touch_get_fingerId_m363 (Touch_t105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" Vector2_t38  Touch_get_position_m364 (Touch_t105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C" int32_t Touch_get_phase_m355 (Touch_t105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Touch_t105_marshal(const Touch_t105& unmarshaled, Touch_t105_marshaled& marshaled);
void Touch_t105_marshal_back(const Touch_t105_marshaled& marshaled, Touch_t105& unmarshaled);
void Touch_t105_marshal_cleanup(Touch_t105_marshaled& marshaled);
