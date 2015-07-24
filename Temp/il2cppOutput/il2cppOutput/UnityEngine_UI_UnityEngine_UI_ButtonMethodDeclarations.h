#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Button
struct Button_t83;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t88;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t159;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t120;
// System.Collections.IEnumerator
struct IEnumerator_t59;

// System.Void UnityEngine.UI.Button::.ctor()
extern "C" void Button__ctor_m685 (Button_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C" ButtonClickedEvent_t88 * Button_get_onClick_m294 (Button_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
extern "C" void Button_set_onClick_m686 (Button_t83 * __this, ButtonClickedEvent_t88 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
extern "C" void Button_Press_m687 (Button_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Button_OnPointerClick_m688 (Button_t83 * __this, PointerEventData_t159 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Button_OnSubmit_m689 (Button_t83 * __this, BaseEventData_t120 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
extern "C" Object_t * Button_OnFinishSubmit_m690 (Button_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
