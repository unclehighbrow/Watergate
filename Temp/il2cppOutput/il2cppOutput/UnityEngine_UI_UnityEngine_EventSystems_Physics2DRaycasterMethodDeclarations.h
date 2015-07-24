#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.Physics2DRaycaster
struct Physics2DRaycaster_t170;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t159;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t160;

// System.Void UnityEngine.EventSystems.Physics2DRaycaster::.ctor()
extern "C" void Physics2DRaycaster__ctor_m643 (Physics2DRaycaster_t170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.Physics2DRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C" void Physics2DRaycaster_Raycast_m644 (Physics2DRaycaster_t170 * __this, PointerEventData_t159 * ___eventData, List_1_t160 * ___resultAppendList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
