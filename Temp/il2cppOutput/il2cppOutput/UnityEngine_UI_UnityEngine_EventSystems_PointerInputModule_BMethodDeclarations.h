#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.PointerInputModule/ButtonState
struct ButtonState_t162;
// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData
struct MouseButtonEventData_t161;
// UnityEngine.EventSystems.PointerEventData/InputButton
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventData_Inp.h"

// System.Void UnityEngine.EventSystems.PointerInputModule/ButtonState::.ctor()
extern "C" void ButtonState__ctor_m568 (ButtonState_t162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData UnityEngine.EventSystems.PointerInputModule/ButtonState::get_eventData()
extern "C" MouseButtonEventData_t161 * ButtonState_get_eventData_m569 (ButtonState_t162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule/ButtonState::set_eventData(UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData)
extern "C" void ButtonState_set_eventData_m570 (ButtonState_t162 * __this, MouseButtonEventData_t161 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerInputModule/ButtonState::get_button()
extern "C" int32_t ButtonState_get_button_m571 (ButtonState_t162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule/ButtonState::set_button(UnityEngine.EventSystems.PointerEventData/InputButton)
extern "C" void ButtonState_set_button_m572 (ButtonState_t162 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
