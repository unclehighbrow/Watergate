#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Event
struct Event_t236;
struct Event_t236_marshaled;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventType.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.EventModifiers
#include "UnityEngine_UnityEngine_EventModifiers.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Event::.ctor()
extern "C" void Event__ctor_m1838 (Event_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Init()
extern "C" void Event_Init_m2586 (Event_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Finalize()
extern "C" void Event_Finalize_m2587 (Event_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Cleanup()
extern "C" void Event_Cleanup_m2588 (Event_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::get_rawType()
extern "C" int32_t Event_get_rawType_m1869 (Event_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::get_type()
extern "C" int32_t Event_get_type_m2589 (Event_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
extern "C" Vector2_t38  Event_get_mousePosition_m2590 (Event_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)
extern "C" void Event_Internal_GetMousePosition_m2591 (Event_t236 * __this, Vector2_t38 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
extern "C" int32_t Event_get_modifiers_m1865 (Event_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.Event::get_character()
extern "C" uint16_t Event_get_character_m1867 (Event_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Event::get_commandName()
extern "C" String_t* Event_get_commandName_m2592 (Event_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
extern "C" int32_t Event_get_keyCode_m1866 (Event_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Event UnityEngine.Event::get_current()
extern "C" Event_t236 * Event_get_current_m2593 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
extern "C" void Event_Internal_SetNativeEvent_m2594 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_MakeMasterEventCurrent()
extern "C" void Event_Internal_MakeMasterEventCurrent_m2595 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::PopEvent(UnityEngine.Event)
extern "C" bool Event_PopEvent_m1870 (Object_t * __this /* static, unused */, Event_t236 * ___outEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_isKey()
extern "C" bool Event_get_isKey_m2596 (Event_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_isMouse()
extern "C" bool Event_get_isMouse_m2597 (Event_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Event::GetHashCode()
extern "C" int32_t Event_GetHashCode_m2598 (Event_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::Equals(System.Object)
extern "C" bool Event_Equals_m2599 (Event_t236 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Event::ToString()
extern "C" String_t* Event_ToString_m2600 (Event_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Event_t236_marshal(const Event_t236& unmarshaled, Event_t236_marshaled& marshaled);
void Event_t236_marshal_back(const Event_t236_marshaled& marshaled, Event_t236& unmarshaled);
void Event_t236_marshal_cleanup(Event_t236_marshaled& marshaled);
