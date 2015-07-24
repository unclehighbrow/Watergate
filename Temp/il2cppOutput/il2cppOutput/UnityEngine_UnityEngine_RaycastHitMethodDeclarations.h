#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RaycastHit
struct RaycastHit_t329;
// UnityEngine.Collider
struct Collider_t352;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" Vector3_t58  RaycastHit_get_point_m1684 (RaycastHit_t329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" Vector3_t58  RaycastHit_get_normal_m1685 (RaycastHit_t329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" float RaycastHit_get_distance_m1683 (RaycastHit_t329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" Collider_t352 * RaycastHit_get_collider_m1682 (RaycastHit_t329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
