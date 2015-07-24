#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_t203;
// UnityEngine.Canvas
struct Canvas_t196;
// UnityEngine.Camera
struct Camera_t84;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t159;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t160;
// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_t201;
// UnityEngine.UI.Graphic
struct Graphic_t199;
// UnityEngine.UI.GraphicRaycaster/BlockingObjects
#include "UnityEngine_UI_UnityEngine_UI_GraphicRaycaster_BlockingObjec.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.UI.GraphicRaycaster::.ctor()
extern "C" void GraphicRaycaster__ctor_m798 (GraphicRaycaster_t203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::.cctor()
extern "C" void GraphicRaycaster__cctor_m799 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.GraphicRaycaster::get_sortOrderPriority()
extern "C" int32_t GraphicRaycaster_get_sortOrderPriority_m800 (GraphicRaycaster_t203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.GraphicRaycaster::get_renderOrderPriority()
extern "C" int32_t GraphicRaycaster_get_renderOrderPriority_m801 (GraphicRaycaster_t203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.GraphicRaycaster::get_ignoreReversedGraphics()
extern "C" bool GraphicRaycaster_get_ignoreReversedGraphics_m802 (GraphicRaycaster_t203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::set_ignoreReversedGraphics(System.Boolean)
extern "C" void GraphicRaycaster_set_ignoreReversedGraphics_m803 (GraphicRaycaster_t203 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.GraphicRaycaster/BlockingObjects UnityEngine.UI.GraphicRaycaster::get_blockingObjects()
extern "C" int32_t GraphicRaycaster_get_blockingObjects_m804 (GraphicRaycaster_t203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::set_blockingObjects(UnityEngine.UI.GraphicRaycaster/BlockingObjects)
extern "C" void GraphicRaycaster_set_blockingObjects_m805 (GraphicRaycaster_t203 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Canvas UnityEngine.UI.GraphicRaycaster::get_canvas()
extern "C" Canvas_t196 * GraphicRaycaster_get_canvas_m806 (GraphicRaycaster_t203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C" void GraphicRaycaster_Raycast_m807 (GraphicRaycaster_t203 * __this, PointerEventData_t159 * ___eventData, List_1_t160 * ___resultAppendList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.UI.GraphicRaycaster::get_eventCamera()
extern "C" Camera_t84 * GraphicRaycaster_get_eventCamera_m808 (GraphicRaycaster_t203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::Raycast(UnityEngine.Canvas,UnityEngine.Camera,UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.UI.Graphic>)
extern "C" void GraphicRaycaster_Raycast_m809 (Object_t * __this /* static, unused */, Canvas_t196 * ___canvas, Camera_t84 * ___eventCamera, Vector2_t38  ___pointerPosition, List_1_t201 * ___results, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.GraphicRaycaster::<Raycast>m__6(UnityEngine.UI.Graphic,UnityEngine.UI.Graphic)
extern "C" int32_t GraphicRaycaster_U3CRaycastU3Em__6_m810 (Object_t * __this /* static, unused */, Graphic_t199 * ___g1, Graphic_t199 * ___g2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
