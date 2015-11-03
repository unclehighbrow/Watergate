#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.EventSystems.Physics2DRaycaster
struct Physics2DRaycaster_t162;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t151;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t152;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.EventSystems.Physics2DRaycaster::.ctor()
extern "C" void Physics2DRaycaster__ctor_m645 (Physics2DRaycaster_t162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.Physics2DRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C" void Physics2DRaycaster_Raycast_m646 (Physics2DRaycaster_t162 * __this, PointerEventData_t151 * ___eventData, List_1_t152 * ___resultAppendList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
