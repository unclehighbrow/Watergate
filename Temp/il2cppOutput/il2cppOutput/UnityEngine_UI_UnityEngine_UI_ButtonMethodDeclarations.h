#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Button
struct Button_t81;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t86;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t157;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t118;
// System.Collections.IEnumerator
struct IEnumerator_t59;

// System.Void UnityEngine.UI.Button::.ctor()
extern "C" void Button__ctor_m670 (Button_t81 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C" ButtonClickedEvent_t86 * Button_get_onClick_m275 (Button_t81 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
extern "C" void Button_set_onClick_m671 (Button_t81 * __this, ButtonClickedEvent_t86 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
extern "C" void Button_Press_m672 (Button_t81 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Button_OnPointerClick_m673 (Button_t81 * __this, PointerEventData_t157 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Button_OnSubmit_m674 (Button_t81 * __this, BaseEventData_t118 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
extern "C" Object_t * Button_OnFinishSubmit_m675 (Button_t81 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
