﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t151;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t110;
// UnityEngine.GameObject
struct GameObject_t31;
// UnityEngine.Camera
struct Camera_t81;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventData_Inp.h"

// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
extern "C" void PointerEventData__ctor_m500 (PointerEventData_t151 * __this, EventSystem_t110 * ___eventSystem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerEnter()
extern "C" GameObject_t31 * PointerEventData_get_pointerEnter_m501 (PointerEventData_t151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerEnter(UnityEngine.GameObject)
extern "C" void PointerEventData_set_pointerEnter_m502 (PointerEventData_t151 * __this, GameObject_t31 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_lastPress()
extern "C" GameObject_t31 * PointerEventData_get_lastPress_m503 (PointerEventData_t151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_lastPress(UnityEngine.GameObject)
extern "C" void PointerEventData_set_lastPress_m504 (PointerEventData_t151 * __this, GameObject_t31 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_rawPointerPress()
extern "C" GameObject_t31 * PointerEventData_get_rawPointerPress_m505 (PointerEventData_t151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_rawPointerPress(UnityEngine.GameObject)
extern "C" void PointerEventData_set_rawPointerPress_m506 (PointerEventData_t151 * __this, GameObject_t31 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerDrag()
extern "C" GameObject_t31 * PointerEventData_get_pointerDrag_m507 (PointerEventData_t151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerDrag(UnityEngine.GameObject)
extern "C" void PointerEventData_set_pointerDrag_m508 (PointerEventData_t151 * __this, GameObject_t31 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerCurrentRaycast()
extern "C" RaycastResult_t146  PointerEventData_get_pointerCurrentRaycast_m509 (PointerEventData_t151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerCurrentRaycast(UnityEngine.EventSystems.RaycastResult)
extern "C" void PointerEventData_set_pointerCurrentRaycast_m510 (PointerEventData_t151 * __this, RaycastResult_t146  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerPressRaycast()
extern "C" RaycastResult_t146  PointerEventData_get_pointerPressRaycast_m511 (PointerEventData_t151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerPressRaycast(UnityEngine.EventSystems.RaycastResult)
extern "C" void PointerEventData_set_pointerPressRaycast_m512 (PointerEventData_t151 * __this, RaycastResult_t146  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_eligibleForClick()
extern "C" bool PointerEventData_get_eligibleForClick_m513 (PointerEventData_t151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_eligibleForClick(System.Boolean)
extern "C" void PointerEventData_set_eligibleForClick_m514 (PointerEventData_t151 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_pointerId()
extern "C" int32_t PointerEventData_get_pointerId_m515 (PointerEventData_t151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerId(System.Int32)
extern "C" void PointerEventData_set_pointerId_m516 (PointerEventData_t151 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
extern "C" Vector2_t40  PointerEventData_get_position_m517 (PointerEventData_t151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_position(UnityEngine.Vector2)
extern "C" void PointerEventData_set_position_m518 (PointerEventData_t151 * __this, Vector2_t40  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_delta()
extern "C" Vector2_t40  PointerEventData_get_delta_m519 (PointerEventData_t151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_delta(UnityEngine.Vector2)
extern "C" void PointerEventData_set_delta_m520 (PointerEventData_t151 * __this, Vector2_t40  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_pressPosition()
extern "C" Vector2_t40  PointerEventData_get_pressPosition_m521 (PointerEventData_t151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pressPosition(UnityEngine.Vector2)
extern "C" void PointerEventData_set_pressPosition_m522 (PointerEventData_t151 * __this, Vector2_t40  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::get_worldPosition()
extern "C" Vector3_t60  PointerEventData_get_worldPosition_m523 (PointerEventData_t151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_worldPosition(UnityEngine.Vector3)
extern "C" void PointerEventData_set_worldPosition_m524 (PointerEventData_t151 * __this, Vector3_t60  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::get_worldNormal()
extern "C" Vector3_t60  PointerEventData_get_worldNormal_m525 (PointerEventData_t151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_worldNormal(UnityEngine.Vector3)
extern "C" void PointerEventData_set_worldNormal_m526 (PointerEventData_t151 * __this, Vector3_t60  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.EventSystems.PointerEventData::get_clickTime()
extern "C" float PointerEventData_get_clickTime_m527 (PointerEventData_t151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_clickTime(System.Single)
extern "C" void PointerEventData_set_clickTime_m528 (PointerEventData_t151 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_clickCount()
extern "C" int32_t PointerEventData_get_clickCount_m529 (PointerEventData_t151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_clickCount(System.Int32)
extern "C" void PointerEventData_set_clickCount_m530 (PointerEventData_t151 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_scrollDelta()
extern "C" Vector2_t40  PointerEventData_get_scrollDelta_m531 (PointerEventData_t151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_scrollDelta(UnityEngine.Vector2)
extern "C" void PointerEventData_set_scrollDelta_m532 (PointerEventData_t151 * __this, Vector2_t40  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_useDragThreshold()
extern "C" bool PointerEventData_get_useDragThreshold_m533 (PointerEventData_t151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_useDragThreshold(System.Boolean)
extern "C" void PointerEventData_set_useDragThreshold_m534 (PointerEventData_t151 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_dragging()
extern "C" bool PointerEventData_get_dragging_m535 (PointerEventData_t151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_dragging(System.Boolean)
extern "C" void PointerEventData_set_dragging_m536 (PointerEventData_t151 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::get_button()
extern "C" int32_t PointerEventData_get_button_m537 (PointerEventData_t151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_button(UnityEngine.EventSystems.PointerEventData/InputButton)
extern "C" void PointerEventData_set_button_m538 (PointerEventData_t151 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::IsPointerMoving()
extern "C" bool PointerEventData_IsPointerMoving_m539 (PointerEventData_t151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::IsScrolling()
extern "C" bool PointerEventData_IsScrolling_m540 (PointerEventData_t151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_enterEventCamera()
extern "C" Camera_t81 * PointerEventData_get_enterEventCamera_m541 (PointerEventData_t151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
extern "C" Camera_t81 * PointerEventData_get_pressEventCamera_m542 (PointerEventData_t151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerPress()
extern "C" GameObject_t31 * PointerEventData_get_pointerPress_m543 (PointerEventData_t151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerPress(UnityEngine.GameObject)
extern "C" void PointerEventData_set_pointerPress_m544 (PointerEventData_t151 * __this, GameObject_t31 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.PointerEventData::ToString()
extern "C" String_t* PointerEventData_ToString_m545 (PointerEventData_t151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
