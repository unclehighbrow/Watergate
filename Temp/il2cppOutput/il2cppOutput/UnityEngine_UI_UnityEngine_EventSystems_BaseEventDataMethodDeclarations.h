#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t120;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t119;
// UnityEngine.GameObject
struct GameObject_t28;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t122;

// System.Void UnityEngine.EventSystems.BaseEventData::.ctor(UnityEngine.EventSystems.EventSystem)
extern "C" void BaseEventData__ctor_m498 (BaseEventData_t120 * __this, EventSystem_t122 * ___eventSystem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::Reset()
extern "C" void BaseEventData_Reset_m499 (BaseEventData_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::Use()
extern "C" void BaseEventData_Use_m500 (BaseEventData_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseEventData::get_used()
extern "C" bool BaseEventData_get_used_m501 (BaseEventData_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.BaseEventData::get_currentInputModule()
extern "C" BaseInputModule_t119 * BaseEventData_get_currentInputModule_m502 (BaseEventData_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.BaseEventData::get_selectedObject()
extern "C" GameObject_t28 * BaseEventData_get_selectedObject_m503 (BaseEventData_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::set_selectedObject(UnityEngine.GameObject)
extern "C" void BaseEventData_set_selectedObject_m504 (BaseEventData_t120 * __this, GameObject_t28 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
