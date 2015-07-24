#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Camera
struct Camera_t84;
// UnityEngine.RenderTexture
struct RenderTexture_t501;
// UnityEngine.Camera[]
struct CameraU5BU5D_t671;
// UnityEngine.GameObject
struct GameObject_t28;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Single UnityEngine.Camera::get_nearClipPlane()
extern "C" float Camera_get_nearClipPlane_m1667 (Camera_t84 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_farClipPlane()
extern "C" float Camera_get_farClipPlane_m1666 (Camera_t84 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
extern "C" void Camera_set_orthographicSize_m277 (Camera_t84 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_depth()
extern "C" float Camera_get_depth_m1571 (Camera_t84 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern "C" int32_t Camera_get_cullingMask_m1678 (Camera_t84 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_eventMask()
extern "C" int32_t Camera_get_eventMask_m2811 (Camera_t84 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_get_pixelRect_m2812 (Camera_t84 * __this, Rect_t230 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
extern "C" Rect_t230  Camera_get_pixelRect_m2813 (Camera_t84 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
extern "C" RenderTexture_t501 * Camera_get_targetTexture_m2814 (Camera_t84 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
extern "C" int32_t Camera_get_clearFlags_m2815 (Camera_t84 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
extern "C" Vector3_t58  Camera_ScreenToWorldPoint_m365 (Camera_t84 * __this, Vector3_t58  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToWorldPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t58  Camera_INTERNAL_CALL_ScreenToWorldPoint_m2816 (Object_t * __this /* static, unused */, Camera_t84 * ___self, Vector3_t58 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
extern "C" Vector3_t58  Camera_ScreenToViewportPoint_m1755 (Camera_t84 * __this, Vector3_t58  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t58  Camera_INTERNAL_CALL_ScreenToViewportPoint_m2817 (Object_t * __this /* static, unused */, Camera_t84 * ___self, Vector3_t58 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C" Ray_t350  Camera_ScreenPointToRay_m1665 (Camera_t84 * __this, Vector3_t58  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Ray_t350  Camera_INTERNAL_CALL_ScreenPointToRay_m2818 (Object_t * __this /* static, unused */, Camera_t84 * ___self, Vector3_t58 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C" Camera_t84 * Camera_get_main_m276 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
extern "C" int32_t Camera_get_allCamerasCount_m2819 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
extern "C" int32_t Camera_GetAllCameras_m2820 (Object_t * __this /* static, unused */, CameraU5BU5D_t671* ___cameras, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPreCull(UnityEngine.Camera)
extern "C" void Camera_FireOnPreCull_m2821 (Object_t * __this /* static, unused */, Camera_t84 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPreRender(UnityEngine.Camera)
extern "C" void Camera_FireOnPreRender_m2822 (Object_t * __this /* static, unused */, Camera_t84 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPostRender(UnityEngine.Camera)
extern "C" void Camera_FireOnPostRender_m2823 (Object_t * __this /* static, unused */, Camera_t84 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry(UnityEngine.Ray,System.Single,System.Int32)
extern "C" GameObject_t28 * Camera_RaycastTry_m2824 (Camera_t84 * __this, Ray_t350  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t28 * Camera_INTERNAL_CALL_RaycastTry_m2825 (Object_t * __this /* static, unused */, Camera_t84 * ___self, Ray_t350 * ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
extern "C" GameObject_t28 * Camera_RaycastTry2D_m2826 (Camera_t84 * __this, Ray_t350  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t28 * Camera_INTERNAL_CALL_RaycastTry2D_m2827 (Object_t * __this /* static, unused */, Camera_t84 * ___self, Ray_t350 * ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
