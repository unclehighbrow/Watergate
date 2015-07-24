#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Physics
struct Physics_t572;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t351;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Internal_Raycast_m2938 (Object_t * __this /* static, unused */, Vector3_t58  ___origin, Vector3_t58  ___direction, RaycastHit_t329 * ___hitInfo, float ___maxDistance, int32_t ___layermask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_INTERNAL_CALL_Internal_Raycast_m2939 (Object_t * __this /* static, unused */, Vector3_t58 * ___origin, Vector3_t58 * ___direction, RaycastHit_t329 * ___hitInfo, float ___maxDistance, int32_t ___layermask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m2940 (Object_t * __this /* static, unused */, Vector3_t58  ___origin, Vector3_t58  ___direction, RaycastHit_t329 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m1756 (Object_t * __this /* static, unused */, Ray_t350  ___ray, RaycastHit_t329 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t351* Physics_RaycastAll_m1680 (Object_t * __this /* static, unused */, Ray_t350  ___ray, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t351* Physics_RaycastAll_m2941 (Object_t * __this /* static, unused */, Vector3_t58  ___origin, Vector3_t58  ___direction, float ___maxDistance, int32_t ___layermask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t351* Physics_INTERNAL_CALL_RaycastAll_m2942 (Object_t * __this /* static, unused */, Vector3_t58 * ___origin, Vector3_t58 * ___direction, float ___maxDistance, int32_t ___layermask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
