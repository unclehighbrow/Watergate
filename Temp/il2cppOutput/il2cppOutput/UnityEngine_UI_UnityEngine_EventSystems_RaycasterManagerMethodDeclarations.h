#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.RaycasterManager
struct RaycasterManager_t153;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t154;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>
struct List_1_t152;

// System.Void UnityEngine.EventSystems.RaycasterManager::.cctor()
extern "C" void RaycasterManager__cctor_m470 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.RaycasterManager::AddRaycaster(UnityEngine.EventSystems.BaseRaycaster)
extern "C" void RaycasterManager_AddRaycaster_m471 (Object_t * __this /* static, unused */, BaseRaycaster_t154 * ___baseRaycaster, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster> UnityEngine.EventSystems.RaycasterManager::GetRaycasters()
extern "C" List_1_t152 * RaycasterManager_GetRaycasters_m472 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.RaycasterManager::RemoveRaycasters(UnityEngine.EventSystems.BaseRaycaster)
extern "C" void RaycasterManager_RemoveRaycasters_m473 (Object_t * __this /* static, unused */, BaseRaycaster_t154 * ___baseRaycaster, const MethodInfo* method) IL2CPP_METHOD_ATTR;
