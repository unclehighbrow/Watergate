#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t156;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t122;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.EventSystems.MoveDirection
#include "UnityEngine_UI_UnityEngine_EventSystems_MoveDirection.h"

// System.Void UnityEngine.EventSystems.AxisEventData::.ctor(UnityEngine.EventSystems.EventSystem)
extern "C" void AxisEventData__ctor_m493 (AxisEventData_t156 * __this, EventSystem_t122 * ___eventSystem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.AxisEventData::get_moveVector()
extern "C" Vector2_t38  AxisEventData_get_moveVector_m494 (AxisEventData_t156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.AxisEventData::set_moveVector(UnityEngine.Vector2)
extern "C" void AxisEventData_set_moveVector_m495 (AxisEventData_t156 * __this, Vector2_t38  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.MoveDirection UnityEngine.EventSystems.AxisEventData::get_moveDir()
extern "C" int32_t AxisEventData_get_moveDir_m496 (AxisEventData_t156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.AxisEventData::set_moveDir(UnityEngine.EventSystems.MoveDirection)
extern "C" void AxisEventData_set_moveDir_m497 (AxisEventData_t156 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
