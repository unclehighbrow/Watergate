#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.LayoutRebuilder
struct LayoutRebuilder_t295;
// UnityEngine.Transform
struct Transform_t66;
// UnityEngine.RectTransform
struct RectTransform_t70;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t337;
// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
struct UnityAction_1_t293;
// System.String
struct String_t;
// UnityEngine.Component
struct Component_t62;
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
// UnityEngine.UI.LayoutRebuilder
#include "UnityEngine_UI_UnityEngine_UI_LayoutRebuilder.h"

// System.Void UnityEngine.UI.LayoutRebuilder::.ctor(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder__ctor_m1479 (LayoutRebuilder_t295 * __this, RectTransform_t70 * ___controller, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::.cctor()
extern "C" void LayoutRebuilder__cctor_m1480 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::UnityEngine.UI.ICanvasElement.Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C" void LayoutRebuilder_UnityEngine_UI_ICanvasElement_Rebuild_m1481 (LayoutRebuilder_t295 * __this, int32_t ___executing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::ReapplyDrivenProperties(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder_ReapplyDrivenProperties_m1482 (Object_t * __this /* static, unused */, RectTransform_t70 * ___driven, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.LayoutRebuilder::get_transform()
extern "C" Transform_t66 * LayoutRebuilder_get_transform_m1483 (LayoutRebuilder_t295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::IsDestroyed()
extern "C" bool LayoutRebuilder_IsDestroyed_m1484 (LayoutRebuilder_t295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::StripDisabledBehavioursFromList(System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C" void LayoutRebuilder_StripDisabledBehavioursFromList_m1485 (Object_t * __this /* static, unused */, List_1_t337 * ___components, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::PerformLayoutControl(UnityEngine.RectTransform,UnityEngine.Events.UnityAction`1<UnityEngine.Component>)
extern "C" void LayoutRebuilder_PerformLayoutControl_m1486 (LayoutRebuilder_t295 * __this, RectTransform_t70 * ___rect, UnityAction_1_t293 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::PerformLayoutCalculation(UnityEngine.RectTransform,UnityEngine.Events.UnityAction`1<UnityEngine.Component>)
extern "C" void LayoutRebuilder_PerformLayoutCalculation_m1487 (LayoutRebuilder_t295 * __this, RectTransform_t70 * ___rect, UnityAction_1_t293 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::MarkLayoutForRebuild(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder_MarkLayoutForRebuild_m1488 (Object_t * __this /* static, unused */, RectTransform_t70 * ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::ValidLayoutGroup(UnityEngine.RectTransform)
extern "C" bool LayoutRebuilder_ValidLayoutGroup_m1489 (Object_t * __this /* static, unused */, RectTransform_t70 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::ValidController(UnityEngine.RectTransform)
extern "C" bool LayoutRebuilder_ValidController_m1490 (Object_t * __this /* static, unused */, RectTransform_t70 * ___layoutRoot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::MarkLayoutRootForRebuild(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder_MarkLayoutRootForRebuild_m1491 (Object_t * __this /* static, unused */, RectTransform_t70 * ___controller, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::Equals(UnityEngine.UI.LayoutRebuilder)
extern "C" bool LayoutRebuilder_Equals_m1492 (LayoutRebuilder_t295 * __this, LayoutRebuilder_t295  ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.LayoutRebuilder::GetHashCode()
extern "C" int32_t LayoutRebuilder_GetHashCode_m1493 (LayoutRebuilder_t295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.LayoutRebuilder::ToString()
extern "C" String_t* LayoutRebuilder_ToString_m1494 (LayoutRebuilder_t295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__9(UnityEngine.Component)
extern "C" void LayoutRebuilder_U3CRebuildU3Em__9_m1495 (Object_t * __this /* static, unused */, Component_t62 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__A(UnityEngine.Component)
extern "C" void LayoutRebuilder_U3CRebuildU3Em__A_m1496 (Object_t * __this /* static, unused */, Component_t62 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__B(UnityEngine.Component)
extern "C" void LayoutRebuilder_U3CRebuildU3Em__B_m1497 (Object_t * __this /* static, unused */, Component_t62 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__C(UnityEngine.Component)
extern "C" void LayoutRebuilder_U3CRebuildU3Em__C_m1498 (Object_t * __this /* static, unused */, Component_t62 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::<StripDisabledBehavioursFromList>m__D(UnityEngine.Component)
extern "C" bool LayoutRebuilder_U3CStripDisabledBehavioursFromListU3Em__D_m1499 (Object_t * __this /* static, unused */, Component_t62 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
