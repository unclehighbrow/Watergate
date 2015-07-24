﻿#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" void MonoBehaviour__ctor_m231 (MonoBehaviour_t16 * __this, const MethodInfo* method)
{
	{
		Behaviour__ctor_m2806(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" Coroutine_t235 * MonoBehaviour_StartCoroutine_m260 (MonoBehaviour_t16 * __this, Object_t * ___routine, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___routine;
		Coroutine_t235 * L_1 = MonoBehaviour_StartCoroutine_Auto_m2864(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t235 * MonoBehaviour_StartCoroutine_Auto_m2864 (MonoBehaviour_t16 * __this, Object_t * ___routine, const MethodInfo* method)
{
	typedef Coroutine_t235 * (*MonoBehaviour_StartCoroutine_Auto_m2864_ftn) (MonoBehaviour_t16 *, Object_t *);
	static MonoBehaviour_StartCoroutine_Auto_m2864_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StartCoroutine_Auto_m2864_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)");
	return _il2cpp_icall_func(__this, ___routine);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String,System.Object)
extern "C" Coroutine_t235 * MonoBehaviour_StartCoroutine_m2865 (MonoBehaviour_t16 * __this, String_t* ___methodName, Object_t * ___value, const MethodInfo* method)
{
	typedef Coroutine_t235 * (*MonoBehaviour_StartCoroutine_m2865_ftn) (MonoBehaviour_t16 *, String_t*, Object_t *);
	static MonoBehaviour_StartCoroutine_m2865_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StartCoroutine_m2865_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StartCoroutine(System.String,System.Object)");
	return _il2cpp_icall_func(__this, ___methodName, ___value);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
extern "C" Coroutine_t235 * MonoBehaviour_StartCoroutine_m235 (MonoBehaviour_t16 * __this, String_t* ___methodName, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		V_0 = NULL;
		String_t* L_0 = ___methodName;
		Object_t * L_1 = V_0;
		Coroutine_t235 * L_2 = MonoBehaviour_StartCoroutine_m2865(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
extern "C" void MonoBehaviour_StopCoroutine_m357 (MonoBehaviour_t16 * __this, String_t* ___methodName, const MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutine_m357_ftn) (MonoBehaviour_t16 *, String_t*);
	static MonoBehaviour_StopCoroutine_m357_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutine_m357_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutine(System.String)");
	_il2cpp_icall_func(__this, ___methodName);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutine_m2866 (MonoBehaviour_t16 * __this, Object_t * ___routine, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___routine;
		MonoBehaviour_StopCoroutineViaEnumerator_Auto_m2867(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
extern "C" void MonoBehaviour_StopCoroutine_m1925 (MonoBehaviour_t16 * __this, Coroutine_t235 * ___routine, const MethodInfo* method)
{
	{
		Coroutine_t235 * L_0 = ___routine;
		MonoBehaviour_StopCoroutine_Auto_m2868(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutineViaEnumerator_Auto_m2867 (MonoBehaviour_t16 * __this, Object_t * ___routine, const MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutineViaEnumerator_Auto_m2867_ftn) (MonoBehaviour_t16 *, Object_t *);
	static MonoBehaviour_StopCoroutineViaEnumerator_Auto_m2867_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutineViaEnumerator_Auto_m2867_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)");
	_il2cpp_icall_func(__this, ___routine);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)
extern "C" void MonoBehaviour_StopCoroutine_Auto_m2868 (MonoBehaviour_t16 * __this, Coroutine_t235 * ___routine, const MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutine_Auto_m2868_ftn) (MonoBehaviour_t16 *, Coroutine_t235 *);
	static MonoBehaviour_StopCoroutine_Auto_m2868_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutine_Auto_m2868_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)");
	_il2cpp_icall_func(__this, ___routine);
}
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhaseMethodDeclarations.h"



// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionMode.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionModeMethodDeclarations.h"



// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"

// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"


// System.Int32 UnityEngine.Touch::get_fingerId()
extern "C" int32_t Touch_get_fingerId_m363 (Touch_t105 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FingerId_0);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" Vector2_t38  Touch_get_position_m364 (Touch_t105 * __this, const MethodInfo* method)
{
	{
		Vector2_t38  L_0 = (__this->___m_Position_1);
		return L_0;
	}
}
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C" int32_t Touch_get_phase_m355 (Touch_t105 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Phase_6);
		return L_0;
	}
}
// Conversion methods for marshalling of: UnityEngine.Touch
void Touch_t105_marshal(const Touch_t105& unmarshaled, Touch_t105_marshaled& marshaled)
{
	marshaled.___m_FingerId_0 = unmarshaled.___m_FingerId_0;
	marshaled.___m_Position_1 = unmarshaled.___m_Position_1;
	marshaled.___m_RawPosition_2 = unmarshaled.___m_RawPosition_2;
	marshaled.___m_PositionDelta_3 = unmarshaled.___m_PositionDelta_3;
	marshaled.___m_TimeDelta_4 = unmarshaled.___m_TimeDelta_4;
	marshaled.___m_TapCount_5 = unmarshaled.___m_TapCount_5;
	marshaled.___m_Phase_6 = unmarshaled.___m_Phase_6;
}
void Touch_t105_marshal_back(const Touch_t105_marshaled& marshaled, Touch_t105& unmarshaled)
{
	unmarshaled.___m_FingerId_0 = marshaled.___m_FingerId_0;
	unmarshaled.___m_Position_1 = marshaled.___m_Position_1;
	unmarshaled.___m_RawPosition_2 = marshaled.___m_RawPosition_2;
	unmarshaled.___m_PositionDelta_3 = marshaled.___m_PositionDelta_3;
	unmarshaled.___m_TimeDelta_4 = marshaled.___m_TimeDelta_4;
	unmarshaled.___m_TapCount_5 = marshaled.___m_TapCount_5;
	unmarshaled.___m_Phase_6 = marshaled.___m_Phase_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.Touch
void Touch_t105_marshal_cleanup(Touch_t105_marshaled& marshaled)
{
}
// UnityEngine.Input
#include "UnityEngine_UnityEngine_Input.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"

// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
#include "UnityEngine_ArrayTypes.h"
// System.Single
#include "mscorlib_System_Single.h"


// System.Void UnityEngine.Input::.cctor()
extern "C" void Input__cctor_m2869 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Input::GetKeyDownString(System.String)
extern "C" bool Input_GetKeyDownString_m2870 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	typedef bool (*Input_GetKeyDownString_m2870_ftn) (String_t*);
	static Input_GetKeyDownString_m2870_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetKeyDownString_m2870_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetKeyDownString(System.String)");
	return _il2cpp_icall_func(___name);
}
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
extern "C" float Input_GetAxisRaw_m1656 (Object_t * __this /* static, unused */, String_t* ___axisName, const MethodInfo* method)
{
	typedef float (*Input_GetAxisRaw_m1656_ftn) (String_t*);
	static Input_GetAxisRaw_m1656_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetAxisRaw_m1656_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetAxisRaw(System.String)");
	return _il2cpp_icall_func(___axisName);
}
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
extern "C" bool Input_GetButtonDown_m1655 (Object_t * __this /* static, unused */, String_t* ___buttonName, const MethodInfo* method)
{
	typedef bool (*Input_GetButtonDown_m1655_ftn) (String_t*);
	static Input_GetButtonDown_m1655_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetButtonDown_m1655_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetButtonDown(System.String)");
	return _il2cpp_icall_func(___buttonName);
}
// System.Boolean UnityEngine.Input::GetKeyDown(System.String)
extern TypeInfo* Input_t100_il2cpp_TypeInfo_var;
extern "C" bool Input_GetKeyDown_m342 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t100_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDownString_m2870(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern "C" bool Input_GetMouseButton_m1663 (Object_t * __this /* static, unused */, int32_t ___button, const MethodInfo* method)
{
	typedef bool (*Input_GetMouseButton_m1663_ftn) (int32_t);
	static Input_GetMouseButton_m1663_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButton_m1663_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButton(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C" bool Input_GetMouseButtonDown_m1625 (Object_t * __this /* static, unused */, int32_t ___button, const MethodInfo* method)
{
	typedef bool (*Input_GetMouseButtonDown_m1625_ftn) (int32_t);
	static Input_GetMouseButtonDown_m1625_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButtonDown_m1625_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonDown(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
extern "C" bool Input_GetMouseButtonUp_m1626 (Object_t * __this /* static, unused */, int32_t ___button, const MethodInfo* method)
{
	typedef bool (*Input_GetMouseButtonUp_m1626_ftn) (int32_t);
	static Input_GetMouseButtonUp_m1626_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButtonUp_m1626_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonUp(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C" Vector3_t58  Input_get_mousePosition_m1627 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Vector3_t58  (*Input_get_mousePosition_m1627_ftn) ();
	static Input_get_mousePosition_m1627_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_mousePosition_m1627_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mousePosition()");
	return _il2cpp_icall_func();
}
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
extern "C" Vector2_t38  Input_get_mouseScrollDelta_m1628 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Vector2_t38  (*Input_get_mouseScrollDelta_m1628_ftn) ();
	static Input_get_mouseScrollDelta_m1628_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_mouseScrollDelta_m1628_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mouseScrollDelta()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Input::get_mousePresent()
extern "C" bool Input_get_mousePresent_m1654 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Input_get_mousePresent_m1654_ftn) ();
	static Input_get_mousePresent_m1654_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_mousePresent_m1654_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mousePresent()");
	return _il2cpp_icall_func();
}
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
extern TypeInfo* Input_t100_il2cpp_TypeInfo_var;
extern TypeInfo* TouchU5BU5D_t104_il2cpp_TypeInfo_var;
extern "C" TouchU5BU5D_t104* Input_get_touches_m354 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		TouchU5BU5D_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(990);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	TouchU5BU5D_t104* V_1 = {0};
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t100_il2cpp_TypeInfo_var);
		int32_t L_0 = Input_get_touchCount_m356(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = ((TouchU5BU5D_t104*)SZArrayNew(TouchU5BU5D_t104_il2cpp_TypeInfo_var, L_1));
		V_2 = 0;
		goto IL_002a;
	}

IL_0014:
	{
		TouchU5BU5D_t104* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t100_il2cpp_TypeInfo_var);
		Touch_t105  L_5 = Input_GetTouch_m1662(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		*((Touch_t105 *)(Touch_t105 *)SZArrayLdElema(L_2, L_3)) = L_5;
		int32_t L_6 = V_2;
		V_2 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_002a:
	{
		int32_t L_7 = V_2;
		int32_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0014;
		}
	}
	{
		TouchU5BU5D_t104* L_9 = V_1;
		return L_9;
	}
}
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
extern "C" Touch_t105  Input_GetTouch_m1662 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method)
{
	typedef Touch_t105  (*Input_GetTouch_m1662_ftn) (int32_t);
	static Input_GetTouch_m1662_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetTouch_m1662_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetTouch(System.Int32)");
	return _il2cpp_icall_func(___index);
}
// System.Int32 UnityEngine.Input::get_touchCount()
extern "C" int32_t Input_get_touchCount_m356 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Input_get_touchCount_m356_ftn) ();
	static Input_get_touchCount_m356_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_touchCount_m356_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_touchCount()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Input::get_touchSupported()
extern "C" bool Input_get_touchSupported_m1661 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)
extern "C" void Input_set_imeCompositionMode_m1917 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Input_set_imeCompositionMode_m1917_ftn) (int32_t);
	static Input_set_imeCompositionMode_m1917_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_set_imeCompositionMode_m1917_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)");
	_il2cpp_icall_func(___value);
}
// System.String UnityEngine.Input::get_compositionString()
extern "C" String_t* Input_get_compositionString_m1844 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*Input_get_compositionString_m1844_ftn) ();
	static Input_get_compositionString_m1844_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_compositionString_m1844_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_compositionString()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)
extern "C" void Input_INTERNAL_set_compositionCursorPos_m2871 (Object_t * __this /* static, unused */, Vector2_t38 * ___value, const MethodInfo* method)
{
	typedef void (*Input_INTERNAL_set_compositionCursorPos_m2871_ftn) (Vector2_t38 *);
	static Input_INTERNAL_set_compositionCursorPos_m2871_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_INTERNAL_set_compositionCursorPos_m2871_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)");
	_il2cpp_icall_func(___value);
}
// System.Void UnityEngine.Input::set_compositionCursorPos(UnityEngine.Vector2)
extern TypeInfo* Input_t100_il2cpp_TypeInfo_var;
extern "C" void Input_set_compositionCursorPos_m1905 (Object_t * __this /* static, unused */, Vector2_t38  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t100_il2cpp_TypeInfo_var);
		Input_INTERNAL_set_compositionCursorPos_m2871(NULL /*static, unused*/, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlagsMethodDeclarations.h"



// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"

// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"


// System.Void UnityEngine.Object::.ctor()
extern "C" void Object__ctor_m2872 (Object_t67 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
extern "C" Object_t67 * Object_Internal_CloneSingle_m2873 (Object_t * __this /* static, unused */, Object_t67 * ___data, const MethodInfo* method)
{
	typedef Object_t67 * (*Object_Internal_CloneSingle_m2873_ftn) (Object_t67 *);
	static Object_Internal_CloneSingle_m2873_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_Internal_CloneSingle_m2873_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)");
	return _il2cpp_icall_func(___data);
}
// UnityEngine.Object UnityEngine.Object::Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" Object_t67 * Object_Internal_InstantiateSingle_m2874 (Object_t * __this /* static, unused */, Object_t67 * ___data, Vector3_t58  ___pos, Quaternion_t99  ___rot, const MethodInfo* method)
{
	{
		Object_t67 * L_0 = ___data;
		Object_t67 * L_1 = Object_INTERNAL_CALL_Internal_InstantiateSingle_m2875(NULL /*static, unused*/, L_0, (&___pos), (&___rot), /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Object UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C" Object_t67 * Object_INTERNAL_CALL_Internal_InstantiateSingle_m2875 (Object_t * __this /* static, unused */, Object_t67 * ___data, Vector3_t58 * ___pos, Quaternion_t99 * ___rot, const MethodInfo* method)
{
	typedef Object_t67 * (*Object_INTERNAL_CALL_Internal_InstantiateSingle_m2875_ftn) (Object_t67 *, Vector3_t58 *, Quaternion_t99 *);
	static Object_INTERNAL_CALL_Internal_InstantiateSingle_m2875_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_INTERNAL_CALL_Internal_InstantiateSingle_m2875_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)");
	return _il2cpp_icall_func(___data, ___pos, ___rot);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
extern "C" void Object_Destroy_m2876 (Object_t * __this /* static, unused */, Object_t67 * ___obj, float ___t, const MethodInfo* method)
{
	typedef void (*Object_Destroy_m2876_ftn) (Object_t67 *, float);
	static Object_Destroy_m2876_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_Destroy_m2876_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)");
	_il2cpp_icall_func(___obj, ___t);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" void Object_Destroy_m303 (Object_t * __this /* static, unused */, Object_t67 * ___obj, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		Object_t67 * L_0 = ___obj;
		float L_1 = V_0;
		Object_Destroy_m2876(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
extern "C" void Object_DestroyImmediate_m2877 (Object_t * __this /* static, unused */, Object_t67 * ___obj, bool ___allowDestroyingAssets, const MethodInfo* method)
{
	typedef void (*Object_DestroyImmediate_m2877_ftn) (Object_t67 *, bool);
	static Object_DestroyImmediate_m2877_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_DestroyImmediate_m2877_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)");
	_il2cpp_icall_func(___obj, ___allowDestroyingAssets);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern "C" void Object_DestroyImmediate_m1920 (Object_t * __this /* static, unused */, Object_t67 * ___obj, const MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 0;
		Object_t67 * L_0 = ___obj;
		bool L_1 = V_0;
		Object_DestroyImmediate_m2877(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
extern "C" ObjectU5BU5D_t704* Object_FindObjectsOfType_m2878 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	typedef ObjectU5BU5D_t704* (*Object_FindObjectsOfType_m2878_ftn) (Type_t *);
	static Object_FindObjectsOfType_m2878_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_FindObjectsOfType_m2878_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::FindObjectsOfType(System.Type)");
	return _il2cpp_icall_func(___type);
}
// System.String UnityEngine.Object::get_name()
extern "C" String_t* Object_get_name_m358 (Object_t67 * __this, const MethodInfo* method)
{
	typedef String_t* (*Object_get_name_m358_ftn) (Object_t67 *);
	static Object_get_name_m358_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_get_name_m358_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::get_name()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Object::set_name(System.String)
extern "C" void Object_set_name_m1987 (Object_t67 * __this, String_t* ___value, const MethodInfo* method)
{
	typedef void (*Object_set_name_m1987_ftn) (Object_t67 *, String_t*);
	static Object_set_name_m1987_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_set_name_m1987_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_name(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C" void Object_DontDestroyOnLoad_m2879 (Object_t * __this /* static, unused */, Object_t67 * ___target, const MethodInfo* method)
{
	typedef void (*Object_DontDestroyOnLoad_m2879_ftn) (Object_t67 *);
	static Object_DontDestroyOnLoad_m2879_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_DontDestroyOnLoad_m2879_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)");
	_il2cpp_icall_func(___target);
}
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern "C" void Object_set_hideFlags_m1885 (Object_t67 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Object_set_hideFlags_m1885_ftn) (Object_t67 *, int32_t);
	static Object_set_hideFlags_m1885_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_set_hideFlags_m1885_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)");
	_il2cpp_icall_func(__this, ___value);
}
// System.String UnityEngine.Object::ToString()
extern "C" String_t* Object_ToString_m377 (Object_t67 * __this, const MethodInfo* method)
{
	typedef String_t* (*Object_ToString_m377_ftn) (Object_t67 *);
	static Object_ToString_m377_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_ToString_m377_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::ToString()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Object::Equals(System.Object)
extern TypeInfo* Object_t67_il2cpp_TypeInfo_var;
extern "C" bool Object_Equals_m374 (Object_t67 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___o;
		bool L_1 = Object_CompareBaseObjects_m2880(NULL /*static, unused*/, __this, ((Object_t67 *)IsInst(L_0, Object_t67_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 UnityEngine.Object::GetHashCode()
extern "C" int32_t Object_GetHashCode_m376 (Object_t67 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Object_GetInstanceID_m2882(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Object::CompareBaseObjects(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_CompareBaseObjects_m2880 (Object_t * __this /* static, unused */, Object_t67 * ___lhs, Object_t67 * ___rhs, const MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		Object_t67 * L_0 = ___lhs;
		V_0 = ((((Object_t*)(Object_t67 *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		Object_t67 * L_1 = ___rhs;
		V_1 = ((((Object_t*)(Object_t67 *)L_1) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		return 1;
	}

IL_0018:
	{
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		Object_t67 * L_5 = ___lhs;
		bool L_6 = Object_IsNativeObjectAlive_m2881(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_0028:
	{
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		Object_t67 * L_8 = ___rhs;
		bool L_9 = Object_IsNativeObjectAlive_m2881(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
	}

IL_0038:
	{
		Object_t67 * L_10 = ___lhs;
		NullCheck(L_10);
		int32_t L_11 = (L_10->___m_InstanceID_0);
		Object_t67 * L_12 = ___rhs;
		NullCheck(L_12);
		int32_t L_13 = (L_12->___m_InstanceID_0);
		return ((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Object::IsNativeObjectAlive(UnityEngine.Object)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" bool Object_IsNativeObjectAlive_m2881 (Object_t * __this /* static, unused */, Object_t67 * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t67 * L_0 = ___o;
		NullCheck(L_0);
		IntPtr_t L_1 = Object_GetCachedPtr_m2883(L_0, /*hidden argument*/NULL);
		IntPtr_t L_2 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_3 = IntPtr_op_Inequality_m3556(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 UnityEngine.Object::GetInstanceID()
extern "C" int32_t Object_GetInstanceID_m2882 (Object_t67 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_InstanceID_0);
		return L_0;
	}
}
// System.IntPtr UnityEngine.Object::GetCachedPtr()
extern "C" IntPtr_t Object_GetCachedPtr_m2883 (Object_t67 * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___m_CachedPtr_1);
		return L_0;
	}
}
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" Object_t67 * Object_Instantiate_m339 (Object_t * __this /* static, unused */, Object_t67 * ___original, Vector3_t58  ___position, Quaternion_t99  ___rotation, const MethodInfo* method)
{
	{
		Object_t67 * L_0 = ___original;
		Object_CheckNullArgument_m2884(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral236, /*hidden argument*/NULL);
		Object_t67 * L_1 = ___original;
		Vector3_t58  L_2 = ___position;
		Quaternion_t99  L_3 = ___rotation;
		Object_t67 * L_4 = Object_Internal_InstantiateSingle_m2874(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
extern TypeInfo* ArgumentException_t387_il2cpp_TypeInfo_var;
extern "C" void Object_CheckNullArgument_m2884 (Object_t * __this /* static, unused */, Object_t * ___arg, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t387_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(361);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___arg;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___message;
		ArgumentException_t387 * L_2 = (ArgumentException_t387 *)il2cpp_codegen_object_new (ArgumentException_t387_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2006(L_2, L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000d:
	{
		return;
	}
}
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
extern "C" Object_t67 * Object_FindObjectOfType_m2885 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	ObjectU5BU5D_t704* V_0 = {0};
	{
		Type_t * L_0 = ___type;
		ObjectU5BU5D_t704* L_1 = Object_FindObjectsOfType_m2878(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ObjectU5BU5D_t704* L_2 = V_0;
		NullCheck(L_2);
		if ((((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ObjectU5BU5D_t704* L_3 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		int32_t L_4 = 0;
		return (*(Object_t67 **)(Object_t67 **)SZArrayLdElema(L_3, L_4));
	}

IL_0014:
	{
		return (Object_t67 *)NULL;
	}
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" bool Object_op_Implicit_m1569 (Object_t * __this /* static, unused */, Object_t67 * ___exists, const MethodInfo* method)
{
	{
		Object_t67 * L_0 = ___exists;
		bool L_1 = Object_CompareBaseObjects_m2880(NULL /*static, unused*/, L_0, (Object_t67 *)NULL, /*hidden argument*/NULL);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_op_Equality_m204 (Object_t * __this /* static, unused */, Object_t67 * ___x, Object_t67 * ___y, const MethodInfo* method)
{
	{
		Object_t67 * L_0 = ___x;
		Object_t67 * L_1 = ___y;
		bool L_2 = Object_CompareBaseObjects_m2880(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_op_Inequality_m207 (Object_t * __this /* static, unused */, Object_t67 * ___x, Object_t67 * ___y, const MethodInfo* method)
{
	{
		Object_t67 * L_0 = ___x;
		Object_t67 * L_1 = ___y;
		bool L_2 = Object_CompareBaseObjects_m2880(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.Object
void Object_t67_marshal(const Object_t67& unmarshaled, Object_t67_marshaled& marshaled)
{
	marshaled.___m_InstanceID_0 = unmarshaled.___m_InstanceID_0;
	marshaled.___m_CachedPtr_1 = unmarshaled.___m_CachedPtr_1;
}
void Object_t67_marshal_back(const Object_t67_marshaled& marshaled, Object_t67& unmarshaled)
{
	unmarshaled.___m_InstanceID_0 = marshaled.___m_InstanceID_0;
	unmarshaled.___m_CachedPtr_1 = marshaled.___m_CachedPtr_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.Object
void Object_t67_marshal_cleanup(Object_t67_marshaled& marshaled)
{
}
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"

// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// System.Collections.Generic.List`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_gen_14.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"


// System.Void UnityEngine.Component::.ctor()
extern "C" void Component__ctor_m2886 (Component_t62 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2872(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" Transform_t66 * Component_get_transform_m197 (Component_t62 * __this, const MethodInfo* method)
{
	typedef Transform_t66 * (*Component_get_transform_m197_ftn) (Component_t62 *);
	static Component_get_transform_m197_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_transform_m197_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_transform()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" GameObject_t28 * Component_get_gameObject_m258 (Component_t62 * __this, const MethodInfo* method)
{
	typedef GameObject_t28 * (*Component_get_gameObject_m258_ftn) (Component_t62 *);
	static Component_get_gameObject_m258_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_gameObject_m258_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_gameObject()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
extern "C" Component_t62 * Component_GetComponent_m2038 (Component_t62 * __this, Type_t * ___type, const MethodInfo* method)
{
	{
		GameObject_t28 * L_0 = Component_get_gameObject_m258(__this, /*hidden argument*/NULL);
		Type_t * L_1 = ___type;
		NullCheck(L_0);
		Component_t62 * L_2 = GameObject_GetComponent_m2890(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
extern "C" void Component_GetComponentFastPath_m2887 (Component_t62 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, const MethodInfo* method)
{
	typedef void (*Component_GetComponentFastPath_m2887_ftn) (Component_t62 *, Type_t *, IntPtr_t);
	static Component_GetComponentFastPath_m2887_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_GetComponentFastPath_m2887_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)");
	_il2cpp_icall_func(__this, ___type, ___oneFurtherThanResultValue);
}
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
extern "C" void Component_GetComponentsForListInternal_m2888 (Component_t62 * __this, Type_t * ___searchType, Object_t * ___resultList, const MethodInfo* method)
{
	typedef void (*Component_GetComponentsForListInternal_m2888_ftn) (Component_t62 *, Type_t *, Object_t *);
	static Component_GetComponentsForListInternal_m2888_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_GetComponentsForListInternal_m2888_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)");
	_il2cpp_icall_func(__this, ___searchType, ___resultList);
}
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C" void Component_GetComponents_m1721 (Component_t62 * __this, Type_t * ___type, List_1_t337 * ___results, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		List_1_t337 * L_1 = ___results;
		Component_GetComponentsForListInternal_m2888(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"


// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" void GameObject__ctor_m1884 (GameObject_t28 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Object__ctor_m2872(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		GameObject_Internal_CreateGameObject_m2896(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GameObject::.ctor()
extern "C" void GameObject__ctor_m2889 (GameObject_t28 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2872(__this, /*hidden argument*/NULL);
		GameObject_Internal_CreateGameObject_m2896(NULL /*static, unused*/, __this, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
extern "C" Component_t62 * GameObject_GetComponent_m2890 (GameObject_t28 * __this, Type_t * ___type, const MethodInfo* method)
{
	typedef Component_t62 * (*GameObject_GetComponent_m2890_ftn) (GameObject_t28 *, Type_t *);
	static GameObject_GetComponent_m2890_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponent_m2890_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponent(System.Type)");
	return _il2cpp_icall_func(__this, ___type);
}
// System.Void UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)
extern "C" void GameObject_GetComponentFastPath_m2891 (GameObject_t28 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, const MethodInfo* method)
{
	typedef void (*GameObject_GetComponentFastPath_m2891_ftn) (GameObject_t28 *, Type_t *, IntPtr_t);
	static GameObject_GetComponentFastPath_m2891_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponentFastPath_m2891_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)");
	_il2cpp_icall_func(__this, ___type, ___oneFurtherThanResultValue);
}
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
extern "C" Array_t * GameObject_GetComponentsInternal_m2892 (GameObject_t28 * __this, Type_t * ___type, bool ___useSearchTypeAsArrayReturnType, bool ___recursive, bool ___includeInactive, bool ___reverse, Object_t * ___resultList, const MethodInfo* method)
{
	typedef Array_t * (*GameObject_GetComponentsInternal_m2892_ftn) (GameObject_t28 *, Type_t *, bool, bool, bool, bool, Object_t *);
	static GameObject_GetComponentsInternal_m2892_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponentsInternal_m2892_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)");
	return _il2cpp_icall_func(__this, ___type, ___useSearchTypeAsArrayReturnType, ___recursive, ___includeInactive, ___reverse, ___resultList);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" Transform_t66 * GameObject_get_transform_m280 (GameObject_t28 * __this, const MethodInfo* method)
{
	typedef Transform_t66 * (*GameObject_get_transform_m280_ftn) (GameObject_t28 *);
	static GameObject_get_transform_m280_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_transform_m280_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_transform()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.GameObject::get_layer()
extern "C" int32_t GameObject_get_layer_m1888 (GameObject_t28 * __this, const MethodInfo* method)
{
	typedef int32_t (*GameObject_get_layer_m1888_ftn) (GameObject_t28 *);
	static GameObject_get_layer_m1888_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_layer_m1888_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_layer()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
extern "C" void GameObject_set_layer_m1889 (GameObject_t28 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*GameObject_set_layer_m1889_ftn) (GameObject_t28 *, int32_t);
	static GameObject_set_layer_m1889_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_set_layer_m1889_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::set_layer(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" void GameObject_SetActive_m353 (GameObject_t28 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*GameObject_SetActive_m353_ftn) (GameObject_t28 *, bool);
	static GameObject_SetActive_m353_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_SetActive_m353_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SetActive(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.GameObject::get_activeSelf()
extern "C" bool GameObject_get_activeSelf_m352 (GameObject_t28 * __this, const MethodInfo* method)
{
	typedef bool (*GameObject_get_activeSelf_m352_ftn) (GameObject_t28 *);
	static GameObject_get_activeSelf_m352_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_activeSelf_m352_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_activeSelf()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
extern "C" bool GameObject_get_activeInHierarchy_m1611 (GameObject_t28 * __this, const MethodInfo* method)
{
	typedef bool (*GameObject_get_activeInHierarchy_m1611_ftn) (GameObject_t28 *);
	static GameObject_get_activeInHierarchy_m1611_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_activeInHierarchy_m1611_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_activeInHierarchy()");
	return _il2cpp_icall_func(__this);
}
// System.String UnityEngine.GameObject::get_tag()
extern "C" String_t* GameObject_get_tag_m333 (GameObject_t28 * __this, const MethodInfo* method)
{
	typedef String_t* (*GameObject_get_tag_m333_ftn) (GameObject_t28 *);
	static GameObject_get_tag_m333_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_tag_m333_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_tag()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
extern "C" bool GameObject_CompareTag_m259 (GameObject_t28 * __this, String_t* ___tag, const MethodInfo* method)
{
	typedef bool (*GameObject_CompareTag_m259_ftn) (GameObject_t28 *, String_t*);
	static GameObject_CompareTag_m259_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_CompareTag_m259_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::CompareTag(System.String)");
	return _il2cpp_icall_func(__this, ___tag);
}
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
extern "C" GameObjectU5BU5D_t86* GameObject_FindGameObjectsWithTag_m289 (Object_t * __this /* static, unused */, String_t* ___tag, const MethodInfo* method)
{
	typedef GameObjectU5BU5D_t86* (*GameObject_FindGameObjectsWithTag_m289_ftn) (String_t*);
	static GameObject_FindGameObjectsWithTag_m289_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_FindGameObjectsWithTag_m289_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::FindGameObjectsWithTag(System.String)");
	return _il2cpp_icall_func(___tag);
}
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C" void GameObject_SendMessage_m2893 (GameObject_t28 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, const MethodInfo* method)
{
	typedef void (*GameObject_SendMessage_m2893_ftn) (GameObject_t28 *, String_t*, Object_t *, int32_t);
	static GameObject_SendMessage_m2893_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_SendMessage_m2893_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, ___methodName, ___value, ___options);
}
// UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
extern "C" Component_t62 * GameObject_Internal_AddComponentWithType_m2894 (GameObject_t28 * __this, Type_t * ___componentType, const MethodInfo* method)
{
	typedef Component_t62 * (*GameObject_Internal_AddComponentWithType_m2894_ftn) (GameObject_t28 *, Type_t *);
	static GameObject_Internal_AddComponentWithType_m2894_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Internal_AddComponentWithType_m2894_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)");
	return _il2cpp_icall_func(__this, ___componentType);
}
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
extern "C" Component_t62 * GameObject_AddComponent_m2895 (GameObject_t28 * __this, Type_t * ___componentType, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___componentType;
		Component_t62 * L_1 = GameObject_Internal_AddComponentWithType_m2894(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
extern "C" void GameObject_Internal_CreateGameObject_m2896 (Object_t * __this /* static, unused */, GameObject_t28 * ___mono, String_t* ___name, const MethodInfo* method)
{
	typedef void (*GameObject_Internal_CreateGameObject_m2896_ftn) (GameObject_t28 *, String_t*);
	static GameObject_Internal_CreateGameObject_m2896_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Internal_CreateGameObject_m2896_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)");
	_il2cpp_icall_func(___mono, ___name);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C" GameObject_t28 * GameObject_Find_m232 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	typedef GameObject_t28 * (*GameObject_Find_m232_ftn) (String_t*);
	static GameObject_Find_m232_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Find_m232_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Find(System.String)");
	return _il2cpp_icall_func(___name);
}
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_Enumerator.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_EnumeratorMethodDeclarations.h"

// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"


// System.Void UnityEngine.Transform/Enumerator::.ctor(UnityEngine.Transform)
extern "C" void Enumerator__ctor_m2897 (Enumerator_t566 * __this, Transform_t66 * ___outer, const MethodInfo* method)
{
	{
		__this->___currentIndex_1 = (-1);
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		Transform_t66 * L_0 = ___outer;
		__this->___outer_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Transform/Enumerator::get_Current()
extern "C" Object_t * Enumerator_get_Current_m2898 (Enumerator_t566 * __this, const MethodInfo* method)
{
	{
		Transform_t66 * L_0 = (__this->___outer_0);
		int32_t L_1 = (__this->___currentIndex_1);
		NullCheck(L_0);
		Transform_t66 * L_2 = Transform_GetChild_m2037(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.Transform/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m2899 (Enumerator_t566 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Transform_t66 * L_0 = (__this->___outer_0);
		NullCheck(L_0);
		int32_t L_1 = Transform_get_childCount_m281(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = (__this->___currentIndex_1);
		int32_t L_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		V_1 = L_3;
		__this->___currentIndex_1 = L_3;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		return ((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"


// System.Void UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_position_m2900 (Transform_t66 * __this, Vector3_t58 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_position_m2900_ftn) (Transform_t66 *, Vector3_t58 *);
	static Transform_INTERNAL_get_position_m2900_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_position_m2900_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_position_m2901 (Transform_t66 * __this, Vector3_t58 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_position_m2901_ftn) (Transform_t66 *, Vector3_t58 *);
	static Transform_INTERNAL_set_position_m2901_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_position_m2901_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" Vector3_t58  Transform_get_position_m198 (Transform_t66 * __this, const MethodInfo* method)
{
	Vector3_t58  V_0 = {0};
	{
		Transform_INTERNAL_get_position_m2900(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t58  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" void Transform_set_position_m213 (Transform_t66 * __this, Vector3_t58  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_position_m2901(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localPosition_m2902 (Transform_t66 * __this, Vector3_t58 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localPosition_m2902_ftn) (Transform_t66 *, Vector3_t58 *);
	static Transform_INTERNAL_get_localPosition_m2902_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localPosition_m2902_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localPosition_m2903 (Transform_t66 * __this, Vector3_t58 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localPosition_m2903_ftn) (Transform_t66 *, Vector3_t58 *);
	static Transform_INTERNAL_set_localPosition_m2903_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localPosition_m2903_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C" Vector3_t58  Transform_get_localPosition_m1891 (Transform_t66 * __this, const MethodInfo* method)
{
	Vector3_t58  V_0 = {0};
	{
		Transform_INTERNAL_get_localPosition_m2902(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t58  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" void Transform_set_localPosition_m1898 (Transform_t66 * __this, Vector3_t58  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localPosition_m2903(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C" Vector3_t58  Transform_get_forward_m1763 (Transform_t66 * __this, const MethodInfo* method)
{
	{
		Quaternion_t99  L_0 = Transform_get_rotation_m1759(__this, /*hidden argument*/NULL);
		Vector3_t58  L_1 = Vector3_get_forward_m1760(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t58  L_2 = Quaternion_op_Multiply_m1761(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_rotation_m2904 (Transform_t66 * __this, Quaternion_t99 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_rotation_m2904_ftn) (Transform_t66 *, Quaternion_t99 *);
	static Transform_INTERNAL_get_rotation_m2904_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_rotation_m2904_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" Quaternion_t99  Transform_get_rotation_m1759 (Transform_t66 * __this, const MethodInfo* method)
{
	Quaternion_t99  V_0 = {0};
	{
		Transform_INTERNAL_get_rotation_m2904(__this, (&V_0), /*hidden argument*/NULL);
		Quaternion_t99  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_localRotation_m2905 (Transform_t66 * __this, Quaternion_t99 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localRotation_m2905_ftn) (Transform_t66 *, Quaternion_t99 *);
	static Transform_INTERNAL_get_localRotation_m2905_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localRotation_m2905_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_localRotation_m2906 (Transform_t66 * __this, Quaternion_t99 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localRotation_m2906_ftn) (Transform_t66 *, Quaternion_t99 *);
	static Transform_INTERNAL_set_localRotation_m2906_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localRotation_m2906_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C" Quaternion_t99  Transform_get_localRotation_m1893 (Transform_t66 * __this, const MethodInfo* method)
{
	Quaternion_t99  V_0 = {0};
	{
		Transform_INTERNAL_get_localRotation_m2905(__this, (&V_0), /*hidden argument*/NULL);
		Quaternion_t99  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" void Transform_set_localRotation_m1899 (Transform_t66 * __this, Quaternion_t99  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localRotation_m2906(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localScale_m2907 (Transform_t66 * __this, Vector3_t58 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localScale_m2907_ftn) (Transform_t66 *, Vector3_t58 *);
	static Transform_INTERNAL_get_localScale_m2907_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localScale_m2907_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localScale_m2908 (Transform_t66 * __this, Vector3_t58 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localScale_m2908_ftn) (Transform_t66 *, Vector3_t58 *);
	static Transform_INTERNAL_set_localScale_m2908_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localScale_m2908_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" Vector3_t58  Transform_get_localScale_m220 (Transform_t66 * __this, const MethodInfo* method)
{
	Vector3_t58  V_0 = {0};
	{
		Transform_INTERNAL_get_localScale_m2907(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t58  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" void Transform_set_localScale_m224 (Transform_t66 * __this, Vector3_t58  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localScale_m2908(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C" Transform_t66 * Transform_get_parent_m1604 (Transform_t66 * __this, const MethodInfo* method)
{
	{
		Transform_t66 * L_0 = Transform_get_parentInternal_m2909(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern TypeInfo* RectTransform_t70_il2cpp_TypeInfo_var;
extern "C" void Transform_set_parent_m1919 (Transform_t66 * __this, Transform_t66 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t70_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		s_Il2CppMethodIntialized = true;
	}
	{
		if (!((RectTransform_t70 *)IsInst(__this, RectTransform_t70_il2cpp_TypeInfo_var)))
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m1985(NULL /*static, unused*/, (String_t*) &_stringLiteral237, __this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		Transform_t66 * L_0 = ___value;
		Transform_set_parentInternal_m2910(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Transform::get_parentInternal()
extern "C" Transform_t66 * Transform_get_parentInternal_m2909 (Transform_t66 * __this, const MethodInfo* method)
{
	typedef Transform_t66 * (*Transform_get_parentInternal_m2909_ftn) (Transform_t66 *);
	static Transform_get_parentInternal_m2909_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_parentInternal_m2909_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_parentInternal()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)
extern "C" void Transform_set_parentInternal_m2910 (Transform_t66 * __this, Transform_t66 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_set_parentInternal_m2910_ftn) (Transform_t66 *, Transform_t66 *);
	static Transform_set_parentInternal_m2910_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_set_parentInternal_m2910_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern "C" void Transform_SetParent_m1886 (Transform_t66 * __this, Transform_t66 * ___parent, const MethodInfo* method)
{
	{
		Transform_t66 * L_0 = ___parent;
		Transform_SetParent_m2911(__this, L_0, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
extern "C" void Transform_SetParent_m2911 (Transform_t66 * __this, Transform_t66 * ___parent, bool ___worldPositionStays, const MethodInfo* method)
{
	typedef void (*Transform_SetParent_m2911_ftn) (Transform_t66 *, Transform_t66 *, bool);
	static Transform_SetParent_m2911_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetParent_m2911_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)");
	_il2cpp_icall_func(__this, ___parent, ___worldPositionStays);
}
// System.Void UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)
extern "C" void Transform_INTERNAL_get_worldToLocalMatrix_m2912 (Transform_t66 * __this, Matrix4x4_t380 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_worldToLocalMatrix_m2912_ftn) (Transform_t66 *, Matrix4x4_t380 *);
	static Transform_INTERNAL_get_worldToLocalMatrix_m2912_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_worldToLocalMatrix_m2912_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
extern "C" Matrix4x4_t380  Transform_get_worldToLocalMatrix_m1952 (Transform_t66 * __this, const MethodInfo* method)
{
	Matrix4x4_t380  V_0 = {0};
	{
		Transform_INTERNAL_get_worldToLocalMatrix_m2912(__this, (&V_0), /*hidden argument*/NULL);
		Matrix4x4_t380  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
extern "C" Vector3_t58  Transform_TransformPoint_m1972 (Transform_t66 * __this, Vector3_t58  ___position, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = Transform_INTERNAL_CALL_TransformPoint_m2913(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t58  Transform_INTERNAL_CALL_TransformPoint_m2913 (Object_t * __this /* static, unused */, Transform_t66 * ___self, Vector3_t58 * ___position, const MethodInfo* method)
{
	typedef Vector3_t58  (*Transform_INTERNAL_CALL_TransformPoint_m2913_ftn) (Transform_t66 *, Vector3_t58 *);
	static Transform_INTERNAL_CALL_TransformPoint_m2913_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_TransformPoint_m2913_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
extern "C" Vector3_t58  Transform_InverseTransformPoint_m1857 (Transform_t66 * __this, Vector3_t58  ___position, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = Transform_INTERNAL_CALL_InverseTransformPoint_m2914(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t58  Transform_INTERNAL_CALL_InverseTransformPoint_m2914 (Object_t * __this /* static, unused */, Transform_t66 * ___self, Vector3_t58 * ___position, const MethodInfo* method)
{
	typedef Vector3_t58  (*Transform_INTERNAL_CALL_InverseTransformPoint_m2914_ftn) (Transform_t66 *, Vector3_t58 *);
	static Transform_INTERNAL_CALL_InverseTransformPoint_m2914_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_InverseTransformPoint_m2914_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" int32_t Transform_get_childCount_m281 (Transform_t66 * __this, const MethodInfo* method)
{
	typedef int32_t (*Transform_get_childCount_m281_ftn) (Transform_t66 *);
	static Transform_get_childCount_m281_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_childCount_m281_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_childCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::SetAsFirstSibling()
extern "C" void Transform_SetAsFirstSibling_m1887 (Transform_t66 * __this, const MethodInfo* method)
{
	typedef void (*Transform_SetAsFirstSibling_m1887_ftn) (Transform_t66 *);
	static Transform_SetAsFirstSibling_m1887_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetAsFirstSibling_m1887_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetAsFirstSibling()");
	_il2cpp_icall_func(__this);
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern TypeInfo* Enumerator_t566_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_GetEnumerator_m2915 (Transform_t66 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t566_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(991);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t566 * L_0 = (Enumerator_t566 *)il2cpp_codegen_object_new (Enumerator_t566_il2cpp_TypeInfo_var);
		Enumerator__ctor_m2897(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" Transform_t66 * Transform_GetChild_m2037 (Transform_t66 * __this, int32_t ___index, const MethodInfo* method)
{
	typedef Transform_t66 * (*Transform_GetChild_m2037_ftn) (Transform_t66 *, int32_t);
	static Transform_GetChild_m2037_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_GetChild_m2037_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::GetChild(System.Int32)");
	return _il2cpp_icall_func(__this, ___index);
}
// UnityEngine.Time
#include "UnityEngine_UnityEngine_Time.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"



// System.Single UnityEngine.Time::get_deltaTime()
extern "C" float Time_get_deltaTime_m301 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_deltaTime_m301_ftn) ();
	static Time_get_deltaTime_m301_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_deltaTime_m301_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_deltaTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_unscaledTime()
extern "C" float Time_get_unscaledTime_m1658 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_unscaledTime_m1658_ftn) ();
	static Time_get_unscaledTime_m1658_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_unscaledTime_m1658_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
extern "C" float Time_get_unscaledDeltaTime_m1691 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_unscaledDeltaTime_m1691_ftn) ();
	static Time_get_unscaledDeltaTime_m1691_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_unscaledDeltaTime_m1691_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledDeltaTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_timeScale()
extern "C" float Time_get_timeScale_m362 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_timeScale_m362_ftn) ();
	static Time_get_timeScale_m362_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_timeScale_m362_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_timeScale()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Time::set_timeScale(System.Single)
extern "C" void Time_set_timeScale_m282 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method)
{
	typedef void (*Time_set_timeScale_m282_ftn) (float);
	static Time_set_timeScale_m282_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_set_timeScale_m282_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::set_timeScale(System.Single)");
	_il2cpp_icall_func(___value);
}
// UnityEngine.Random
#include "UnityEngine_UnityEngine_Random.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"



// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C" int32_t Random_Range_m212 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, const MethodInfo* method)
{
	{
		int32_t L_0 = ___min;
		int32_t L_1 = ___max;
		int32_t L_2 = Random_RandomRangeInt_m2916(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)
extern "C" int32_t Random_RandomRangeInt_m2916 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, const MethodInfo* method)
{
	typedef int32_t (*Random_RandomRangeInt_m2916_ftn) (int32_t, int32_t);
	static Random_RandomRangeInt_m2916_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_RandomRangeInt_m2916_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)");
	return _il2cpp_icall_func(___min, ___max);
}
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstruction.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstructionMethodDeclarations.h"



// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m2917 (YieldInstruction_t486 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
void YieldInstruction_t486_marshal(const YieldInstruction_t486& unmarshaled, YieldInstruction_t486_marshaled& marshaled)
{
}
void YieldInstruction_t486_marshal_back(const YieldInstruction_t486_marshaled& marshaled, YieldInstruction_t486& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
void YieldInstruction_t486_marshal_cleanup(YieldInstruction_t486_marshaled& marshaled)
{
}
// UnityEngine.PlayerPrefsException
#include "UnityEngine_UnityEngine_PlayerPrefsException.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.PlayerPrefsException
#include "UnityEngine_UnityEngine_PlayerPrefsExceptionMethodDeclarations.h"

// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"


// System.Void UnityEngine.PlayerPrefsException::.ctor(System.String)
extern "C" void PlayerPrefsException__ctor_m2918 (PlayerPrefsException_t569 * __this, String_t* ___error, const MethodInfo* method)
{
	{
		String_t* L_0 = ___error;
		Exception__ctor_m3557(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefs.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefsMethodDeclarations.h"

// System.String
#include "mscorlib_System_StringMethodDeclarations.h"


// System.Boolean UnityEngine.PlayerPrefs::TrySetInt(System.String,System.Int32)
extern "C" bool PlayerPrefs_TrySetInt_m2919 (Object_t * __this /* static, unused */, String_t* ___key, int32_t ___value, const MethodInfo* method)
{
	typedef bool (*PlayerPrefs_TrySetInt_m2919_ftn) (String_t*, int32_t);
	static PlayerPrefs_TrySetInt_m2919_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_TrySetInt_m2919_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::TrySetInt(System.String,System.Int32)");
	return _il2cpp_icall_func(___key, ___value);
}
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
extern TypeInfo* PlayerPrefsException_t569_il2cpp_TypeInfo_var;
extern "C" void PlayerPrefs_SetInt_m246 (Object_t * __this /* static, unused */, String_t* ___key, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerPrefsException_t569_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(992);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___key;
		int32_t L_1 = ___value;
		bool L_2 = PlayerPrefs_TrySetInt_m2919(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		PlayerPrefsException_t569 * L_3 = (PlayerPrefsException_t569 *)il2cpp_codegen_object_new (PlayerPrefsException_t569_il2cpp_TypeInfo_var);
		PlayerPrefsException__ctor_m2918(L_3, (String_t*) &_stringLiteral238, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0017:
	{
		return;
	}
}
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
extern "C" int32_t PlayerPrefs_GetInt_m240 (Object_t * __this /* static, unused */, String_t* ___key, int32_t ___defaultValue, const MethodInfo* method)
{
	typedef int32_t (*PlayerPrefs_GetInt_m240_ftn) (String_t*, int32_t);
	static PlayerPrefs_GetInt_m240_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_GetInt_m240_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)");
	return _il2cpp_icall_func(___key, ___defaultValue);
}
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
extern "C" int32_t PlayerPrefs_GetInt_m250 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		String_t* L_0 = ___key;
		int32_t L_1 = V_0;
		int32_t L_2 = PlayerPrefs_GetInt_m240(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
extern "C" String_t* PlayerPrefs_GetString_m2920 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___defaultValue, const MethodInfo* method)
{
	typedef String_t* (*PlayerPrefs_GetString_m2920_ftn) (String_t*, String_t*);
	static PlayerPrefs_GetString_m2920_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_GetString_m2920_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::GetString(System.String,System.String)");
	return _il2cpp_icall_func(___key, ___defaultValue);
}
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* PlayerPrefs_GetString_m2921 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		String_t* L_1 = ___key;
		String_t* L_2 = V_0;
		String_t* L_3 = PlayerPrefs_GetString_m2920(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Particle
#include "UnityEngine_UnityEngine_Particle.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Particle
#include "UnityEngine_UnityEngine_ParticleMethodDeclarations.h"

// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"


// UnityEngine.Vector3 UnityEngine.Particle::get_position()
extern "C" Vector3_t58  Particle_get_position_m2922 (Particle_t571 * __this, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = (__this->___m_Position_0);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_position(UnityEngine.Vector3)
extern "C" void Particle_set_position_m2923 (Particle_t571 * __this, Vector3_t58  ___value, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = ___value;
		__this->___m_Position_0 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Particle::get_velocity()
extern "C" Vector3_t58  Particle_get_velocity_m2924 (Particle_t571 * __this, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = (__this->___m_Velocity_1);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_velocity(UnityEngine.Vector3)
extern "C" void Particle_set_velocity_m2925 (Particle_t571 * __this, Vector3_t58  ___value, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = ___value;
		__this->___m_Velocity_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_energy()
extern "C" float Particle_get_energy_m2926 (Particle_t571 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Energy_5);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_energy(System.Single)
extern "C" void Particle_set_energy_m2927 (Particle_t571 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Energy_5 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_startEnergy()
extern "C" float Particle_get_startEnergy_m2928 (Particle_t571 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_StartEnergy_6);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_startEnergy(System.Single)
extern "C" void Particle_set_startEnergy_m2929 (Particle_t571 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_StartEnergy_6 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_size()
extern "C" float Particle_get_size_m2930 (Particle_t571 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Size_2);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_size(System.Single)
extern "C" void Particle_set_size_m2931 (Particle_t571 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Size_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_rotation()
extern "C" float Particle_get_rotation_m2932 (Particle_t571 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Rotation_3);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_rotation(System.Single)
extern "C" void Particle_set_rotation_m2933 (Particle_t571 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Rotation_3 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_angularVelocity()
extern "C" float Particle_get_angularVelocity_m2934 (Particle_t571 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_AngularVelocity_4);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_angularVelocity(System.Single)
extern "C" void Particle_set_angularVelocity_m2935 (Particle_t571 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_AngularVelocity_4 = L_0;
		return;
	}
}
// UnityEngine.Color UnityEngine.Particle::get_color()
extern "C" Color_t13  Particle_get_color_m2936 (Particle_t571 * __this, const MethodInfo* method)
{
	{
		Color_t13  L_0 = (__this->___m_Color_7);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_color(UnityEngine.Color)
extern "C" void Particle_set_color_m2937 (Particle_t571 * __this, Color_t13  ___value, const MethodInfo* method)
{
	{
		Color_t13  L_0 = ___value;
		__this->___m_Color_7 = L_0;
		return;
	}
}
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_Physics.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_PhysicsMethodDeclarations.h"

// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"


// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Internal_Raycast_m2938 (Object_t * __this /* static, unused */, Vector3_t58  ___origin, Vector3_t58  ___direction, RaycastHit_t329 * ___hitInfo, float ___maxDistance, int32_t ___layermask, const MethodInfo* method)
{
	{
		RaycastHit_t329 * L_0 = ___hitInfo;
		float L_1 = ___maxDistance;
		int32_t L_2 = ___layermask;
		bool L_3 = Physics_INTERNAL_CALL_Internal_Raycast_m2939(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_INTERNAL_CALL_Internal_Raycast_m2939 (Object_t * __this /* static, unused */, Vector3_t58 * ___origin, Vector3_t58 * ___direction, RaycastHit_t329 * ___hitInfo, float ___maxDistance, int32_t ___layermask, const MethodInfo* method)
{
	typedef bool (*Physics_INTERNAL_CALL_Internal_Raycast_m2939_ftn) (Vector3_t58 *, Vector3_t58 *, RaycastHit_t329 *, float, int32_t);
	static Physics_INTERNAL_CALL_Internal_Raycast_m2939_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_Internal_Raycast_m2939_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___origin, ___direction, ___hitInfo, ___maxDistance, ___layermask);
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m2940 (Object_t * __this /* static, unused */, Vector3_t58  ___origin, Vector3_t58  ___direction, RaycastHit_t329 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = ___origin;
		Vector3_t58  L_1 = ___direction;
		RaycastHit_t329 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = ___layerMask;
		bool L_5 = Physics_Internal_Raycast_m2938(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m1756 (Object_t * __this /* static, unused */, Ray_t350  ___ray, RaycastHit_t329 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = Ray_get_origin_m1668((&___ray), /*hidden argument*/NULL);
		Vector3_t58  L_1 = Ray_get_direction_m1669((&___ray), /*hidden argument*/NULL);
		RaycastHit_t329 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = ___layerMask;
		bool L_5 = Physics_Raycast_m2940(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t351* Physics_RaycastAll_m1680 (Object_t * __this /* static, unused */, Ray_t350  ___ray, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = Ray_get_origin_m1668((&___ray), /*hidden argument*/NULL);
		Vector3_t58  L_1 = Ray_get_direction_m1669((&___ray), /*hidden argument*/NULL);
		float L_2 = ___maxDistance;
		int32_t L_3 = ___layerMask;
		RaycastHitU5BU5D_t351* L_4 = Physics_RaycastAll_m2941(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t351* Physics_RaycastAll_m2941 (Object_t * __this /* static, unused */, Vector3_t58  ___origin, Vector3_t58  ___direction, float ___maxDistance, int32_t ___layermask, const MethodInfo* method)
{
	{
		float L_0 = ___maxDistance;
		int32_t L_1 = ___layermask;
		RaycastHitU5BU5D_t351* L_2 = Physics_INTERNAL_CALL_RaycastAll_m2942(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t351* Physics_INTERNAL_CALL_RaycastAll_m2942 (Object_t * __this /* static, unused */, Vector3_t58 * ___origin, Vector3_t58 * ___direction, float ___maxDistance, int32_t ___layermask, const MethodInfo* method)
{
	typedef RaycastHitU5BU5D_t351* (*Physics_INTERNAL_CALL_RaycastAll_m2942_ftn) (Vector3_t58 *, Vector3_t58 *, float, int32_t);
	static Physics_INTERNAL_CALL_RaycastAll_m2942_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_RaycastAll_m2942_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___origin, ___direction, ___maxDistance, ___layermask);
}
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_Collider.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_ColliderMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"



// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" Vector3_t58  RaycastHit_get_point_m1684 (RaycastHit_t329 * __this, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = (__this->___m_Point_0);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" Vector3_t58  RaycastHit_get_normal_m1685 (RaycastHit_t329 * __this, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = (__this->___m_Normal_1);
		return L_0;
	}
}
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" float RaycastHit_get_distance_m1683 (RaycastHit_t329 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Distance_3);
		return L_0;
	}
}
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" Collider_t352 * RaycastHit_get_collider_m1682 (RaycastHit_t329 * __this, const MethodInfo* method)
{
	{
		Collider_t352 * L_0 = (__this->___m_Collider_5);
		return L_0;
	}
}
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2D.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_28.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_28MethodDeclarations.h"


// System.Void UnityEngine.Physics2D::.cctor()
extern TypeInfo* List_1_t573_il2cpp_TypeInfo_var;
extern TypeInfo* Physics2D_t96_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3558_MethodInfo_var;
extern "C" void Physics2D__cctor_m2943 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t573_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(993);
		Physics2D_t96_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		List_1__ctor_m3558_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483962);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t573 * L_0 = (List_1_t573 *)il2cpp_codegen_object_new (List_1_t573_il2cpp_TypeInfo_var);
		List_1__ctor_m3558(L_0, /*hidden argument*/List_1__ctor_m3558_MethodInfo_var);
		((Physics2D_t96_StaticFields*)Physics2D_t96_il2cpp_TypeInfo_var->static_fields)->___m_LastDisabledRigidbody2D_0 = L_0;
		return;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::LinecastAll(UnityEngine.Vector2,UnityEngine.Vector2)
extern TypeInfo* Physics2D_t96_il2cpp_TypeInfo_var;
extern "C" RaycastHit2DU5BU5D_t95* Physics2D_LinecastAll_m331 (Object_t * __this /* static, unused */, Vector2_t38  ___start, Vector2_t38  ___end, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t96_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		V_2 = ((int32_t)-5);
		int32_t L_0 = V_2;
		float L_1 = V_1;
		float L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t96_il2cpp_TypeInfo_var);
		RaycastHit2DU5BU5D_t95* L_3 = Physics2D_INTERNAL_CALL_LinecastAll_m2944(NULL /*static, unused*/, (&___start), (&___end), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::INTERNAL_CALL_LinecastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2DU5BU5D_t95* Physics2D_INTERNAL_CALL_LinecastAll_m2944 (Object_t * __this /* static, unused */, Vector2_t38 * ___start, Vector2_t38 * ___end, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method)
{
	typedef RaycastHit2DU5BU5D_t95* (*Physics2D_INTERNAL_CALL_LinecastAll_m2944_ftn) (Vector2_t38 *, Vector2_t38 *, int32_t, float, float);
	static Physics2D_INTERNAL_CALL_LinecastAll_m2944_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_LinecastAll_m2944_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_LinecastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Int32,System.Single,System.Single)");
	return _il2cpp_icall_func(___start, ___end, ___layerMask, ___minDepth, ___maxDepth);
}
// System.Void UnityEngine.Physics2D::Internal_Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern TypeInfo* Physics2D_t96_il2cpp_TypeInfo_var;
extern "C" void Physics2D_Internal_Raycast_m2945 (Object_t * __this /* static, unused */, Vector2_t38  ___origin, Vector2_t38  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t97 * ___raycastHit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t96_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		float L_2 = ___minDepth;
		float L_3 = ___maxDepth;
		RaycastHit2D_t97 * L_4 = ___raycastHit;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t96_il2cpp_TypeInfo_var);
		Physics2D_INTERNAL_CALL_Internal_Raycast_m2946(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_INTERNAL_CALL_Internal_Raycast_m2946 (Object_t * __this /* static, unused */, Vector2_t38 * ___origin, Vector2_t38 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t97 * ___raycastHit, const MethodInfo* method)
{
	typedef void (*Physics2D_INTERNAL_CALL_Internal_Raycast_m2946_ftn) (Vector2_t38 *, Vector2_t38 *, float, int32_t, float, float, RaycastHit2D_t97 *);
	static Physics2D_INTERNAL_CALL_Internal_Raycast_m2946_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_Internal_Raycast_m2946_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)");
	_il2cpp_icall_func(___origin, ___direction, ___distance, ___layerMask, ___minDepth, ___maxDepth, ___raycastHit);
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern TypeInfo* Physics2D_t96_il2cpp_TypeInfo_var;
extern "C" RaycastHit2D_t97  Physics2D_Raycast_m1757 (Object_t * __this /* static, unused */, Vector2_t38  ___origin, Vector2_t38  ___direction, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t96_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		Vector2_t38  L_0 = ___origin;
		Vector2_t38  L_1 = ___direction;
		float L_2 = ___distance;
		int32_t L_3 = ___layerMask;
		float L_4 = V_1;
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t96_il2cpp_TypeInfo_var);
		RaycastHit2D_t97  L_6 = Physics2D_Raycast_m2947(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
extern TypeInfo* Physics2D_t96_il2cpp_TypeInfo_var;
extern "C" RaycastHit2D_t97  Physics2D_Raycast_m2947 (Object_t * __this /* static, unused */, Vector2_t38  ___origin, Vector2_t38  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t96_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	RaycastHit2D_t97  V_0 = {0};
	{
		Vector2_t38  L_0 = ___origin;
		Vector2_t38  L_1 = ___direction;
		float L_2 = ___distance;
		int32_t L_3 = ___layerMask;
		float L_4 = ___minDepth;
		float L_5 = ___maxDepth;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t96_il2cpp_TypeInfo_var);
		Physics2D_Internal_Raycast_m2945(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, (&V_0), /*hidden argument*/NULL);
		RaycastHit2D_t97  L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::RaycastAll(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern TypeInfo* Physics2D_t96_il2cpp_TypeInfo_var;
extern "C" RaycastHit2DU5BU5D_t95* Physics2D_RaycastAll_m1670 (Object_t * __this /* static, unused */, Vector2_t38  ___origin, Vector2_t38  ___direction, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t96_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		float L_2 = V_1;
		float L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t96_il2cpp_TypeInfo_var);
		RaycastHit2DU5BU5D_t95* L_4 = Physics2D_INTERNAL_CALL_RaycastAll_m2948(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2DU5BU5D_t95* Physics2D_INTERNAL_CALL_RaycastAll_m2948 (Object_t * __this /* static, unused */, Vector2_t38 * ___origin, Vector2_t38 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method)
{
	typedef RaycastHit2DU5BU5D_t95* (*Physics2D_INTERNAL_CALL_RaycastAll_m2948_ftn) (Vector2_t38 *, Vector2_t38 *, float, int32_t, float, float);
	static Physics2D_INTERNAL_CALL_RaycastAll_m2948_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_RaycastAll_m2948_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)");
	return _il2cpp_icall_func(___origin, ___direction, ___distance, ___layerMask, ___minDepth, ___maxDepth);
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2DMethodDeclarations.h"

// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2D.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2D.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2DMethodDeclarations.h"


// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
extern "C" Vector2_t38  RaycastHit2D_get_point_m1672 (RaycastHit2D_t97 * __this, const MethodInfo* method)
{
	{
		Vector2_t38  L_0 = (__this->___m_Point_1);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal()
extern "C" Vector2_t38  RaycastHit2D_get_normal_m1673 (RaycastHit2D_t97 * __this, const MethodInfo* method)
{
	{
		Vector2_t38  L_0 = (__this->___m_Normal_2);
		return L_0;
	}
}
// System.Single UnityEngine.RaycastHit2D::get_fraction()
extern "C" float RaycastHit2D_get_fraction_m1758 (RaycastHit2D_t97 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Fraction_4);
		return L_0;
	}
}
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern "C" Collider2D_t61 * RaycastHit2D_get_collider_m1671 (RaycastHit2D_t97 * __this, const MethodInfo* method)
{
	{
		Collider2D_t61 * L_0 = (__this->___m_Collider_5);
		return L_0;
	}
}
// UnityEngine.Rigidbody2D UnityEngine.RaycastHit2D::get_rigidbody()
extern "C" Rigidbody2D_t63 * RaycastHit2D_get_rigidbody_m2949 (RaycastHit2D_t97 * __this, const MethodInfo* method)
{
	Rigidbody2D_t63 * G_B3_0 = {0};
	{
		Collider2D_t61 * L_0 = RaycastHit2D_get_collider_m1671(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m207(NULL /*static, unused*/, L_0, (Object_t67 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Collider2D_t61 * L_2 = RaycastHit2D_get_collider_m1671(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody2D_t63 * L_3 = Collider2D_get_attachedRigidbody_m2952(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = ((Rigidbody2D_t63 *)(NULL));
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
extern "C" Transform_t66 * RaycastHit2D_get_transform_m332 (RaycastHit2D_t97 * __this, const MethodInfo* method)
{
	Rigidbody2D_t63 * V_0 = {0};
	{
		Rigidbody2D_t63 * L_0 = RaycastHit2D_get_rigidbody_m2949(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Rigidbody2D_t63 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m207(NULL /*static, unused*/, L_1, (Object_t67 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Rigidbody2D_t63 * L_3 = V_0;
		NullCheck(L_3);
		Transform_t66 * L_4 = Component_get_transform_m197(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001a:
	{
		Collider2D_t61 * L_5 = RaycastHit2D_get_collider_m1671(__this, /*hidden argument*/NULL);
		bool L_6 = Object_op_Inequality_m207(NULL /*static, unused*/, L_5, (Object_t67 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		Collider2D_t61 * L_7 = RaycastHit2D_get_collider_m1671(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_t66 * L_8 = Component_get_transform_m197(L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0037:
	{
		return (Transform_t66 *)NULL;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2DMethodDeclarations.h"



// System.Void UnityEngine.Rigidbody2D::MovePosition(UnityEngine.Vector2)
extern "C" void Rigidbody2D_MovePosition_m202 (Rigidbody2D_t63 * __this, Vector2_t38  ___position, const MethodInfo* method)
{
	{
		Rigidbody2D_INTERNAL_CALL_MovePosition_m2950(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody2D::INTERNAL_CALL_MovePosition(UnityEngine.Rigidbody2D,UnityEngine.Vector2&)
extern "C" void Rigidbody2D_INTERNAL_CALL_MovePosition_m2950 (Object_t * __this /* static, unused */, Rigidbody2D_t63 * ___self, Vector2_t38 * ___position, const MethodInfo* method)
{
	typedef void (*Rigidbody2D_INTERNAL_CALL_MovePosition_m2950_ftn) (Rigidbody2D_t63 *, Vector2_t38 *);
	static Rigidbody2D_INTERNAL_CALL_MovePosition_m2950_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_INTERNAL_CALL_MovePosition_m2950_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::INTERNAL_CALL_MovePosition(UnityEngine.Rigidbody2D,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___self, ___position);
}
// System.Void UnityEngine.Rigidbody2D::INTERNAL_set_velocity(UnityEngine.Vector2&)
extern "C" void Rigidbody2D_INTERNAL_set_velocity_m2951 (Rigidbody2D_t63 * __this, Vector2_t38 * ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody2D_INTERNAL_set_velocity_m2951_ftn) (Rigidbody2D_t63 *, Vector2_t38 *);
	static Rigidbody2D_INTERNAL_set_velocity_m2951_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_INTERNAL_set_velocity_m2951_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::INTERNAL_set_velocity(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C" void Rigidbody2D_set_velocity_m215 (Rigidbody2D_t63 * __this, Vector2_t38  ___value, const MethodInfo* method)
{
	{
		Rigidbody2D_INTERNAL_set_velocity_m2951(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// UnityEngine.Rigidbody2D UnityEngine.Collider2D::get_attachedRigidbody()
extern "C" Rigidbody2D_t63 * Collider2D_get_attachedRigidbody_m2952 (Collider2D_t61 * __this, const MethodInfo* method)
{
	typedef Rigidbody2D_t63 * (*Collider2D_get_attachedRigidbody_m2952_ftn) (Collider2D_t61 *);
	static Collider2D_get_attachedRigidbody_m2952_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider2D_get_attachedRigidbody_m2952_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider2D::get_attachedRigidbody()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChan.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChanMethodDeclarations.h"

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr)
extern "C" void AudioConfigurationChangeHandler__ctor_m2953 (AudioConfigurationChangeHandler_t574 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
extern "C" void AudioConfigurationChangeHandler_Invoke_m2954 (AudioConfigurationChangeHandler_t574 * __this, bool ___deviceWasChanged, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		AudioConfigurationChangeHandler_Invoke_m2954((AudioConfigurationChangeHandler_t574 *)__this->___prev_9,___deviceWasChanged, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, bool ___deviceWasChanged, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___deviceWasChanged,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, bool ___deviceWasChanged, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___deviceWasChanged,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_AudioConfigurationChangeHandler_t574(Il2CppObject* delegate, bool ___deviceWasChanged)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___deviceWasChanged' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___deviceWasChanged);

	// Marshaling cleanup of parameter '___deviceWasChanged' native representation

}
// System.IAsyncResult UnityEngine.AudioSettings/AudioConfigurationChangeHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern TypeInfo* Boolean_t111_il2cpp_TypeInfo_var;
extern "C" Object_t * AudioConfigurationChangeHandler_BeginInvoke_m2955 (AudioConfigurationChangeHandler_t574 * __this, bool ___deviceWasChanged, AsyncCallback_t224 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t111_il2cpp_TypeInfo_var, &___deviceWasChanged);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::EndInvoke(System.IAsyncResult)
extern "C" void AudioConfigurationChangeHandler_EndInvoke_m2956 (AudioConfigurationChangeHandler_t574 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettings.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettingsMethodDeclarations.h"



// System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean)
extern TypeInfo* AudioSettings_t575_il2cpp_TypeInfo_var;
extern "C" void AudioSettings_InvokeOnAudioConfigurationChanged_m2957 (AudioSettings_t575 * __this, bool ___deviceWasChanged, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AudioSettings_t575_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(994);
		s_Il2CppMethodIntialized = true;
	}
	{
		AudioConfigurationChangeHandler_t574 * L_0 = ((AudioSettings_t575_StaticFields*)AudioSettings_t575_il2cpp_TypeInfo_var->static_fields)->___OnAudioConfigurationChanged_0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		AudioConfigurationChangeHandler_t574 * L_1 = ((AudioSettings_t575_StaticFields*)AudioSettings_t575_il2cpp_TypeInfo_var->static_fields)->___OnAudioConfigurationChanged_0;
		bool L_2 = ___deviceWasChanged;
		NullCheck(L_1);
		VirtActionInvoker1< bool >::Invoke(10 /* System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean) */, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallback.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallbackMethodDeclarations.h"

#include "mscorlib_ArrayTypes.h"


// System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr)
extern "C" void PCMReaderCallback__ctor_m2958 (PCMReaderCallback_t577 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
extern "C" void PCMReaderCallback_Invoke_m2959 (PCMReaderCallback_t577 * __this, SingleU5BU5D_t576* ___data, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMReaderCallback_Invoke_m2959((PCMReaderCallback_t577 *)__this->___prev_9,___data, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, SingleU5BU5D_t576* ___data, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, SingleU5BU5D_t576* ___data, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_PCMReaderCallback_t577(Il2CppObject* delegate, SingleU5BU5D_t576* ___data)
{
	typedef void (STDCALL *native_function_ptr_type)(float*);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___data' to native representation
	float* ____data_marshaled = { 0 };
	____data_marshaled = il2cpp_codegen_marshal_array<float>((Il2CppCodeGenArray*)___data);

	// Native function invocation
	_il2cpp_pinvoke_func(____data_marshaled);

	// Marshaling cleanup of parameter '___data' native representation

}
// System.IAsyncResult UnityEngine.AudioClip/PCMReaderCallback::BeginInvoke(System.Single[],System.AsyncCallback,System.Object)
extern "C" Object_t * PCMReaderCallback_BeginInvoke_m2960 (PCMReaderCallback_t577 * __this, SingleU5BU5D_t576* ___data, AsyncCallback_t224 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult)
extern "C" void PCMReaderCallback_EndInvoke_m2961 (PCMReaderCallback_t577 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallback.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallbackMethodDeclarations.h"



// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr)
extern "C" void PCMSetPositionCallback__ctor_m2962 (PCMSetPositionCallback_t578 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
extern "C" void PCMSetPositionCallback_Invoke_m2963 (PCMSetPositionCallback_t578 * __this, int32_t ___position, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMSetPositionCallback_Invoke_m2963((PCMSetPositionCallback_t578 *)__this->___prev_9,___position, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___position, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___position,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___position, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___position,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_PCMSetPositionCallback_t578(Il2CppObject* delegate, int32_t ___position)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___position' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___position);

	// Marshaling cleanup of parameter '___position' native representation

}
// System.IAsyncResult UnityEngine.AudioClip/PCMSetPositionCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t75_il2cpp_TypeInfo_var;
extern "C" Object_t * PCMSetPositionCallback_BeginInvoke_m2964 (PCMSetPositionCallback_t578 * __this, int32_t ___position, AsyncCallback_t224 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t75_il2cpp_TypeInfo_var, &___position);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::EndInvoke(System.IAsyncResult)
extern "C" void PCMSetPositionCallback_EndInvoke_m2965 (PCMSetPositionCallback_t578 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClip.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClipMethodDeclarations.h"



// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
extern "C" void AudioClip_InvokePCMReaderCallback_Internal_m2966 (AudioClip_t579 * __this, SingleU5BU5D_t576* ___data, const MethodInfo* method)
{
	{
		PCMReaderCallback_t577 * L_0 = (__this->___m_PCMReaderCallback_2);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMReaderCallback_t577 * L_1 = (__this->___m_PCMReaderCallback_2);
		SingleU5BU5D_t576* L_2 = ___data;
		NullCheck(L_1);
		VirtActionInvoker1< SingleU5BU5D_t576* >::Invoke(10 /* System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[]) */, L_1, L_2);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
extern "C" void AudioClip_InvokePCMSetPositionCallback_Internal_m2967 (AudioClip_t579 * __this, int32_t ___position, const MethodInfo* method)
{
	{
		PCMSetPositionCallback_t578 * L_0 = (__this->___m_PCMSetPositionCallback_3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMSetPositionCallback_t578 * L_1 = (__this->___m_PCMSetPositionCallback_3);
		int32_t L_2 = ___position;
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(10 /* System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32) */, L_1, L_2);
	}

IL_0017:
	{
		return;
	}
}
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDevice.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDeviceMethodDeclarations.h"



// System.String UnityEngine.WebCamDevice::get_name()
extern "C" String_t* WebCamDevice_get_name_m2968 (WebCamDevice_t580 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Name_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern "C" bool WebCamDevice_get_isFrontFacing_m2969 (WebCamDevice_t580 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Flags_1);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)1))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.WebCamDevice
void WebCamDevice_t580_marshal(const WebCamDevice_t580& unmarshaled, WebCamDevice_t580_marshaled& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Name_0);
	marshaled.___m_Flags_1 = unmarshaled.___m_Flags_1;
}
void WebCamDevice_t580_marshal_back(const WebCamDevice_t580_marshaled& marshaled, WebCamDevice_t580& unmarshaled)
{
	unmarshaled.___m_Name_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Name_0);
	unmarshaled.___m_Flags_1 = marshaled.___m_Flags_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.WebCamDevice
void WebCamDevice_t580_marshal_cleanup(WebCamDevice_t580_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// UnityEngine.AnimationEventSource
#include "UnityEngine_UnityEngine_AnimationEventSource.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimationEventSource
#include "UnityEngine_UnityEngine_AnimationEventSourceMethodDeclarations.h"



// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEvent.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEventMethodDeclarations.h"

// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationState.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"
// UnityEngine.AnimatorClipInfo
#include "UnityEngine_UnityEngine_AnimatorClipInfo.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"


// System.Void UnityEngine.AnimationEvent::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void AnimationEvent__ctor_m2970 (AnimationEvent_t583 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		__this->___m_Time_0 = (0.0f);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___m_FunctionName_1 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___m_StringParameter_2 = L_1;
		__this->___m_ObjectReferenceParameter_3 = (Object_t67 *)NULL;
		__this->___m_FloatParameter_4 = (0.0f);
		__this->___m_IntParameter_5 = 0;
		__this->___m_MessageOptions_6 = 0;
		__this->___m_Source_7 = 0;
		__this->___m_StateSender_8 = (AnimationState_t582 *)NULL;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_data()
extern "C" String_t* AnimationEvent_get_data_m2971 (AnimationEvent_t583 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringParameter_2);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_data(System.String)
extern "C" void AnimationEvent_set_data_m2972 (AnimationEvent_t583 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_StringParameter_2 = L_0;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_stringParameter()
extern "C" String_t* AnimationEvent_get_stringParameter_m2973 (AnimationEvent_t583 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringParameter_2);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_stringParameter(System.String)
extern "C" void AnimationEvent_set_stringParameter_m2974 (AnimationEvent_t583 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_StringParameter_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_floatParameter()
extern "C" float AnimationEvent_get_floatParameter_m2975 (AnimationEvent_t583 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_FloatParameter_4);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_floatParameter(System.Single)
extern "C" void AnimationEvent_set_floatParameter_m2976 (AnimationEvent_t583 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_FloatParameter_4 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.AnimationEvent::get_intParameter()
extern "C" int32_t AnimationEvent_get_intParameter_m2977 (AnimationEvent_t583 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_IntParameter_5);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_intParameter(System.Int32)
extern "C" void AnimationEvent_set_intParameter_m2978 (AnimationEvent_t583 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_IntParameter_5 = L_0;
		return;
	}
}
// UnityEngine.Object UnityEngine.AnimationEvent::get_objectReferenceParameter()
extern "C" Object_t67 * AnimationEvent_get_objectReferenceParameter_m2979 (AnimationEvent_t583 * __this, const MethodInfo* method)
{
	{
		Object_t67 * L_0 = (__this->___m_ObjectReferenceParameter_3);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_objectReferenceParameter(UnityEngine.Object)
extern "C" void AnimationEvent_set_objectReferenceParameter_m2980 (AnimationEvent_t583 * __this, Object_t67 * ___value, const MethodInfo* method)
{
	{
		Object_t67 * L_0 = ___value;
		__this->___m_ObjectReferenceParameter_3 = L_0;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_functionName()
extern "C" String_t* AnimationEvent_get_functionName_m2981 (AnimationEvent_t583 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_FunctionName_1);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_functionName(System.String)
extern "C" void AnimationEvent_set_functionName_m2982 (AnimationEvent_t583 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_FunctionName_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_time()
extern "C" float AnimationEvent_get_time_m2983 (AnimationEvent_t583 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Time_0);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_time(System.Single)
extern "C" void AnimationEvent_set_time_m2984 (AnimationEvent_t583 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Time_0 = L_0;
		return;
	}
}
// UnityEngine.SendMessageOptions UnityEngine.AnimationEvent::get_messageOptions()
extern "C" int32_t AnimationEvent_get_messageOptions_m2985 (AnimationEvent_t583 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_MessageOptions_6);
		return (int32_t)(L_0);
	}
}
// System.Void UnityEngine.AnimationEvent::set_messageOptions(UnityEngine.SendMessageOptions)
extern "C" void AnimationEvent_set_messageOptions_m2986 (AnimationEvent_t583 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_MessageOptions_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByLegacy()
extern "C" bool AnimationEvent_get_isFiredByLegacy_m2987 (AnimationEvent_t583 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Source_7);
		return ((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByAnimator()
extern "C" bool AnimationEvent_get_isFiredByAnimator_m2988 (AnimationEvent_t583 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Source_7);
		return ((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// UnityEngine.AnimationState UnityEngine.AnimationEvent::get_animationState()
extern "C" AnimationState_t582 * AnimationEvent_get_animationState_m2989 (AnimationEvent_t583 * __this, const MethodInfo* method)
{
	{
		bool L_0 = AnimationEvent_get_isFiredByLegacy_m2987(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m1570(NULL /*static, unused*/, (String_t*) &_stringLiteral239, /*hidden argument*/NULL);
	}

IL_0015:
	{
		AnimationState_t582 * L_1 = (__this->___m_StateSender_8);
		return L_1;
	}
}
// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::get_animatorStateInfo()
extern "C" AnimatorStateInfo_t584  AnimationEvent_get_animatorStateInfo_m2990 (AnimationEvent_t583 * __this, const MethodInfo* method)
{
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_m2988(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m1570(NULL /*static, unused*/, (String_t*) &_stringLiteral240, /*hidden argument*/NULL);
	}

IL_0015:
	{
		AnimatorStateInfo_t584  L_1 = (__this->___m_AnimatorStateInfo_9);
		return L_1;
	}
}
// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::get_animatorClipInfo()
extern "C" AnimatorClipInfo_t585  AnimationEvent_get_animatorClipInfo_m2991 (AnimationEvent_t583 * __this, const MethodInfo* method)
{
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_m2988(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m1570(NULL /*static, unused*/, (String_t*) &_stringLiteral241, /*hidden argument*/NULL);
	}

IL_0015:
	{
		AnimatorClipInfo_t585  L_1 = (__this->___m_AnimatorClipInfo_10);
		return L_1;
	}
}
// System.Int32 UnityEngine.AnimationEvent::GetHash()
extern "C" int32_t AnimationEvent_GetHash_m2992 (AnimationEvent_t583 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		V_0 = 0;
		String_t* L_0 = AnimationEvent_get_functionName_m2981(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		float L_3 = AnimationEvent_get_time_m2983(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = Single_GetHashCode_m3514((&V_1), /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)33)*(int32_t)L_2))+(int32_t)L_4));
		int32_t L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_KeyframeMethodDeclarations.h"



// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurve.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurveMethodDeclarations.h"



// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m2993 (AnimationCurve_t587 * __this, KeyframeU5BU5D_t713* ___keys, const MethodInfo* method)
{
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		KeyframeU5BU5D_t713* L_0 = ___keys;
		AnimationCurve_Init_m2997(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m2994 (AnimationCurve_t587 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		AnimationCurve_Init_m2997(__this, (KeyframeU5BU5D_t713*)(KeyframeU5BU5D_t713*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m2995 (AnimationCurve_t587 * __this, const MethodInfo* method)
{
	typedef void (*AnimationCurve_Cleanup_m2995_ftn) (AnimationCurve_t587 *);
	static AnimationCurve_Cleanup_m2995_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Cleanup_m2995_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m2996 (AnimationCurve_t587 * __this, const MethodInfo* method)
{
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		AnimationCurve_Cleanup_m2995(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m375(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m2997 (AnimationCurve_t587 * __this, KeyframeU5BU5D_t713* ___keys, const MethodInfo* method)
{
	typedef void (*AnimationCurve_Init_m2997_ftn) (AnimationCurve_t587 *, KeyframeU5BU5D_t713*);
	static AnimationCurve_Init_m2997_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Init_m2997_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])");
	_il2cpp_icall_func(__this, ___keys);
}
// Conversion methods for marshalling of: UnityEngine.AnimationCurve
void AnimationCurve_t587_marshal(const AnimationCurve_t587& unmarshaled, AnimationCurve_t587_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void AnimationCurve_t587_marshal_back(const AnimationCurve_t587_marshaled& marshaled, AnimationCurve_t587& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationCurve
void AnimationCurve_t587_marshal_cleanup(AnimationCurve_t587_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationStateMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimatorClipInfo
#include "UnityEngine_UnityEngine_AnimatorClipInfoMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfoMethodDeclarations.h"

// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"


// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
extern "C" bool AnimatorStateInfo_IsName_m2998 (AnimatorStateInfo_t584 * __this, String_t* ___name, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m3018(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = (__this->___m_FullPath_2);
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = (__this->___m_Name_0);
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = (__this->___m_Path_1);
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 1;
	}

IL_002b:
	{
		return G_B4_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_fullPathHash()
extern "C" int32_t AnimatorStateInfo_get_fullPathHash_m2999 (AnimatorStateInfo_t584 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FullPath_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_nameHash()
extern "C" int32_t AnimatorStateInfo_get_nameHash_m3000 (AnimatorStateInfo_t584 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Path_1);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_shortNameHash()
extern "C" int32_t AnimatorStateInfo_get_shortNameHash_m3001 (AnimatorStateInfo_t584 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Name_0);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
extern "C" float AnimatorStateInfo_get_normalizedTime_m3002 (AnimatorStateInfo_t584 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_NormalizedTime_3);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_length()
extern "C" float AnimatorStateInfo_get_length_m3003 (AnimatorStateInfo_t584 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Length_4);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_tagHash()
extern "C" int32_t AnimatorStateInfo_get_tagHash_m3004 (AnimatorStateInfo_t584 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Tag_5);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorStateInfo::IsTag(System.String)
extern "C" bool AnimatorStateInfo_IsTag_m3005 (AnimatorStateInfo_t584 * __this, String_t* ___tag, const MethodInfo* method)
{
	{
		String_t* L_0 = ___tag;
		int32_t L_1 = Animator_StringToHash_m3018(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___m_Tag_5);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimatorStateInfo::get_loop()
extern "C" bool AnimatorStateInfo_get_loop_m3006 (AnimatorStateInfo_t584 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Loop_6);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.AnimatorTransitionInfo
#include "UnityEngine_UnityEngine_AnimatorTransitionInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimatorTransitionInfo
#include "UnityEngine_UnityEngine_AnimatorTransitionInfoMethodDeclarations.h"



// System.Boolean UnityEngine.AnimatorTransitionInfo::IsName(System.String)
extern "C" bool AnimatorTransitionInfo_IsName_m3007 (AnimatorTransitionInfo_t589 * __this, String_t* ___name, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m3018(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___m_Name_2);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = ___name;
		int32_t L_4 = Animator_StringToHash_m3018(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		int32_t L_5 = (__this->___m_FullPath_0);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsUserName(System.String)
extern "C" bool AnimatorTransitionInfo_IsUserName_m3008 (AnimatorTransitionInfo_t589 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m3018(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___m_UserName_1);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
extern "C" int32_t AnimatorTransitionInfo_get_fullPathHash_m3009 (AnimatorTransitionInfo_t589 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FullPath_0);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
extern "C" int32_t AnimatorTransitionInfo_get_nameHash_m3010 (AnimatorTransitionInfo_t589 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Name_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
extern "C" int32_t AnimatorTransitionInfo_get_userNameHash_m3011 (AnimatorTransitionInfo_t589 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_UserName_1);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
extern "C" float AnimatorTransitionInfo_get_normalizedTime_m3012 (AnimatorTransitionInfo_t589 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_NormalizedTime_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_anyState()
extern "C" bool AnimatorTransitionInfo_get_anyState_m3013 (AnimatorTransitionInfo_t589 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_AnyState_4);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_entry()
extern "C" bool AnimatorTransitionInfo_get_entry_m3014 (AnimatorTransitionInfo_t589 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TransitionType_5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_exit()
extern "C" bool AnimatorTransitionInfo_get_exit_m3015 (AnimatorTransitionInfo_t589 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TransitionType_5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
void AnimatorTransitionInfo_t589_marshal(const AnimatorTransitionInfo_t589& unmarshaled, AnimatorTransitionInfo_t589_marshaled& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.___m_FullPath_0;
	marshaled.___m_UserName_1 = unmarshaled.___m_UserName_1;
	marshaled.___m_Name_2 = unmarshaled.___m_Name_2;
	marshaled.___m_NormalizedTime_3 = unmarshaled.___m_NormalizedTime_3;
	marshaled.___m_AnyState_4 = unmarshaled.___m_AnyState_4;
	marshaled.___m_TransitionType_5 = unmarshaled.___m_TransitionType_5;
}
void AnimatorTransitionInfo_t589_marshal_back(const AnimatorTransitionInfo_t589_marshaled& marshaled, AnimatorTransitionInfo_t589& unmarshaled)
{
	unmarshaled.___m_FullPath_0 = marshaled.___m_FullPath_0;
	unmarshaled.___m_UserName_1 = marshaled.___m_UserName_1;
	unmarshaled.___m_Name_2 = marshaled.___m_Name_2;
	unmarshaled.___m_NormalizedTime_3 = marshaled.___m_NormalizedTime_3;
	unmarshaled.___m_AnyState_4 = marshaled.___m_AnyState_4;
	unmarshaled.___m_TransitionType_5 = marshaled.___m_TransitionType_5;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
void AnimatorTransitionInfo_t589_marshal_cleanup(AnimatorTransitionInfo_t589_marshaled& marshaled)
{
}
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
#ifndef _MSC_VER
#else
#endif

// UnityEngine.RuntimeAnimatorController
#include "UnityEngine_UnityEngine_RuntimeAnimatorController.h"


// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
extern "C" void Animator_SetFloat_m317 (Animator_t39 * __this, String_t* ___name, float ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		float L_1 = ___value;
		Animator_SetFloatString_m3019(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Animator::GetBool(System.String)
extern "C" bool Animator_GetBool_m190 (Animator_t39 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		bool L_1 = Animator_GetBoolString_m3021(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
extern "C" void Animator_SetBool_m193 (Animator_t39 * __this, String_t* ___name, bool ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		bool L_1 = ___value;
		Animator_SetBoolString_m3020(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern "C" void Animator_SetTrigger_m1980 (Animator_t39 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Animator_SetTriggerString_m3022(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern "C" void Animator_ResetTrigger_m1979 (Animator_t39 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Animator_ResetTriggerString_m3023(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::Play(System.String)
extern "C" void Animator_Play_m318 (Animator_t39 * __this, String_t* ___stateName, const MethodInfo* method)
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		V_1 = (-1);
		String_t* L_0 = ___stateName;
		int32_t L_1 = V_1;
		float L_2 = V_0;
		Animator_Play_m3016(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::Play(System.String,System.Int32,System.Single)
extern "C" void Animator_Play_m3016 (Animator_t39 * __this, String_t* ___stateName, int32_t ___layer, float ___normalizedTime, const MethodInfo* method)
{
	{
		String_t* L_0 = ___stateName;
		int32_t L_1 = Animator_StringToHash_m3018(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___layer;
		float L_3 = ___normalizedTime;
		Animator_Play_m3017(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)
extern "C" void Animator_Play_m3017 (Animator_t39 * __this, int32_t ___stateNameHash, int32_t ___layer, float ___normalizedTime, const MethodInfo* method)
{
	typedef void (*Animator_Play_m3017_ftn) (Animator_t39 *, int32_t, int32_t, float);
	static Animator_Play_m3017_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_Play_m3017_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___stateNameHash, ___layer, ___normalizedTime);
}
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
extern "C" RuntimeAnimatorController_t381 * Animator_get_runtimeAnimatorController_m1978 (Animator_t39 * __this, const MethodInfo* method)
{
	typedef RuntimeAnimatorController_t381 * (*Animator_get_runtimeAnimatorController_m1978_ftn) (Animator_t39 *);
	static Animator_get_runtimeAnimatorController_m1978_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_runtimeAnimatorController_m1978_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_runtimeAnimatorController()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C" int32_t Animator_StringToHash_m3018 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	typedef int32_t (*Animator_StringToHash_m3018_ftn) (String_t*);
	static Animator_StringToHash_m3018_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StringToHash_m3018_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StringToHash(System.String)");
	return _il2cpp_icall_func(___name);
}
// System.Void UnityEngine.Animator::SetFloatString(System.String,System.Single)
extern "C" void Animator_SetFloatString_m3019 (Animator_t39 * __this, String_t* ___name, float ___value, const MethodInfo* method)
{
	typedef void (*Animator_SetFloatString_m3019_ftn) (Animator_t39 *, String_t*, float);
	static Animator_SetFloatString_m3019_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatString_m3019_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatString(System.String,System.Single)");
	_il2cpp_icall_func(__this, ___name, ___value);
}
// System.Void UnityEngine.Animator::SetBoolString(System.String,System.Boolean)
extern "C" void Animator_SetBoolString_m3020 (Animator_t39 * __this, String_t* ___name, bool ___value, const MethodInfo* method)
{
	typedef void (*Animator_SetBoolString_m3020_ftn) (Animator_t39 *, String_t*, bool);
	static Animator_SetBoolString_m3020_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetBoolString_m3020_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetBoolString(System.String,System.Boolean)");
	_il2cpp_icall_func(__this, ___name, ___value);
}
// System.Boolean UnityEngine.Animator::GetBoolString(System.String)
extern "C" bool Animator_GetBoolString_m3021 (Animator_t39 * __this, String_t* ___name, const MethodInfo* method)
{
	typedef bool (*Animator_GetBoolString_m3021_ftn) (Animator_t39 *, String_t*);
	static Animator_GetBoolString_m3021_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetBoolString_m3021_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetBoolString(System.String)");
	return _il2cpp_icall_func(__this, ___name);
}
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C" void Animator_SetTriggerString_m3022 (Animator_t39 * __this, String_t* ___name, const MethodInfo* method)
{
	typedef void (*Animator_SetTriggerString_m3022_ftn) (Animator_t39 *, String_t*);
	static Animator_SetTriggerString_m3022_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTriggerString_m3022_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name);
}
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C" void Animator_ResetTriggerString_m3023 (Animator_t39 * __this, String_t* ___name, const MethodInfo* method)
{
	typedef void (*Animator_ResetTriggerString_m3023_ftn) (Animator_t39 *, String_t*);
	static Animator_ResetTriggerString_m3023_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ResetTriggerString_m3023_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name);
}
// UnityEngine.SkeletonBone
#include "UnityEngine_UnityEngine_SkeletonBone.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SkeletonBone
#include "UnityEngine_UnityEngine_SkeletonBoneMethodDeclarations.h"



// Conversion methods for marshalling of: UnityEngine.SkeletonBone
void SkeletonBone_t590_marshal(const SkeletonBone_t590& unmarshaled, SkeletonBone_t590_marshaled& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___position_1 = unmarshaled.___position_1;
	marshaled.___rotation_2 = unmarshaled.___rotation_2;
	marshaled.___scale_3 = unmarshaled.___scale_3;
	marshaled.___transformModified_4 = unmarshaled.___transformModified_4;
}
void SkeletonBone_t590_marshal_back(const SkeletonBone_t590_marshaled& marshaled, SkeletonBone_t590& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	unmarshaled.___position_1 = marshaled.___position_1;
	unmarshaled.___rotation_2 = marshaled.___rotation_2;
	unmarshaled.___scale_3 = marshaled.___scale_3;
	unmarshaled.___transformModified_4 = marshaled.___transformModified_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
void SkeletonBone_t590_marshal_cleanup(SkeletonBone_t590_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimit.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimitMethodDeclarations.h"



// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBone.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBoneMethodDeclarations.h"



// System.String UnityEngine.HumanBone::get_boneName()
extern "C" String_t* HumanBone_get_boneName_m3024 (HumanBone_t592 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_BoneName_0);
		return L_0;
	}
}
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
extern "C" void HumanBone_set_boneName_m3025 (HumanBone_t592 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_BoneName_0 = L_0;
		return;
	}
}
// System.String UnityEngine.HumanBone::get_humanName()
extern "C" String_t* HumanBone_get_humanName_m3026 (HumanBone_t592 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_HumanName_1);
		return L_0;
	}
}
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
extern "C" void HumanBone_set_humanName_m3027 (HumanBone_t592 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_HumanName_1 = L_0;
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.HumanBone
void HumanBone_t592_marshal(const HumanBone_t592& unmarshaled, HumanBone_t592_marshaled& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_BoneName_0);
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string(unmarshaled.___m_HumanName_1);
	marshaled.___limit_2 = unmarshaled.___limit_2;
}
void HumanBone_t592_marshal_back(const HumanBone_t592_marshaled& marshaled, HumanBone_t592& unmarshaled)
{
	unmarshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_BoneName_0);
	unmarshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string_result(marshaled.___m_HumanName_1);
	unmarshaled.___limit_2 = marshaled.___limit_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
void HumanBone_t592_marshal_cleanup(HumanBone_t592_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RuntimeAnimatorController
#include "UnityEngine_UnityEngine_RuntimeAnimatorControllerMethodDeclarations.h"



// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchorMethodDeclarations.h"



// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapModeMethodDeclarations.h"



// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapModeMethodDeclarations.h"



// UnityEngine.TextMesh
#include "UnityEngine_UnityEngine_TextMesh.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextMesh
#include "UnityEngine_UnityEngine_TextMeshMethodDeclarations.h"



// System.Void UnityEngine.TextMesh::set_text(System.String)
extern "C" void TextMesh_set_text_m341 (TextMesh_t98 * __this, String_t* ___value, const MethodInfo* method)
{
	typedef void (*TextMesh_set_text_m341_ftn) (TextMesh_t98 *, String_t*);
	static TextMesh_set_text_m341_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextMesh_set_text_m341_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextMesh::set_text(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfoMethodDeclarations.h"

// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"


// System.Int32 UnityEngine.CharacterInfo::get_advance()
extern "C" int32_t CharacterInfo_get_advance_m3028 (CharacterInfo_t593 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___width_3);
		return (((int32_t)L_0));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphWidth()
extern "C" int32_t CharacterInfo_get_glyphWidth_m3029 (CharacterInfo_t593 * __this, const MethodInfo* method)
{
	{
		Rect_t230 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_width_m1726(L_0, /*hidden argument*/NULL);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphHeight()
extern "C" int32_t CharacterInfo_get_glyphHeight_m3030 (CharacterInfo_t593 * __this, const MethodInfo* method)
{
	{
		Rect_t230 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_height_m1727(L_0, /*hidden argument*/NULL);
		return (((int32_t)((-L_1))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_bearing()
extern "C" int32_t CharacterInfo_get_bearing_m3031 (CharacterInfo_t593 * __this, const MethodInfo* method)
{
	{
		Rect_t230 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m1731(L_0, /*hidden argument*/NULL);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minY()
extern "C" int32_t CharacterInfo_get_minY_m3032 (CharacterInfo_t593 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t230 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m1732(L_1, /*hidden argument*/NULL);
		Rect_t230 * L_3 = &(__this->___vert_2);
		float L_4 = Rect_get_height_m1727(L_3, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)((float)((float)L_2+(float)L_4))))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxY()
extern "C" int32_t CharacterInfo_get_maxY_m3033 (CharacterInfo_t593 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t230 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m1732(L_1, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)L_2))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minX()
extern "C" int32_t CharacterInfo_get_minX_m3034 (CharacterInfo_t593 * __this, const MethodInfo* method)
{
	{
		Rect_t230 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m1731(L_0, /*hidden argument*/NULL);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxX()
extern "C" int32_t CharacterInfo_get_maxX_m3035 (CharacterInfo_t593 * __this, const MethodInfo* method)
{
	{
		Rect_t230 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m1731(L_0, /*hidden argument*/NULL);
		Rect_t230 * L_2 = &(__this->___vert_2);
		float L_3 = Rect_get_width_m1726(L_2, /*hidden argument*/NULL);
		return (((int32_t)((float)((float)L_1+(float)L_3))));
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeftUnFlipped()
extern "C" Vector2_t38  CharacterInfo_get_uvBottomLeftUnFlipped_m3036 (CharacterInfo_t593 * __this, const MethodInfo* method)
{
	{
		Rect_t230 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m1731(L_0, /*hidden argument*/NULL);
		Rect_t230 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m1732(L_2, /*hidden argument*/NULL);
		Vector2_t38  L_4 = {0};
		Vector2__ctor_m306(&L_4, L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRightUnFlipped()
extern "C" Vector2_t38  CharacterInfo_get_uvBottomRightUnFlipped_m3037 (CharacterInfo_t593 * __this, const MethodInfo* method)
{
	{
		Rect_t230 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m1731(L_0, /*hidden argument*/NULL);
		Rect_t230 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m1726(L_2, /*hidden argument*/NULL);
		Rect_t230 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m1732(L_4, /*hidden argument*/NULL);
		Vector2_t38  L_6 = {0};
		Vector2__ctor_m306(&L_6, ((float)((float)L_1+(float)L_3)), L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRightUnFlipped()
extern "C" Vector2_t38  CharacterInfo_get_uvTopRightUnFlipped_m3038 (CharacterInfo_t593 * __this, const MethodInfo* method)
{
	{
		Rect_t230 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m1731(L_0, /*hidden argument*/NULL);
		Rect_t230 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m1726(L_2, /*hidden argument*/NULL);
		Rect_t230 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m1732(L_4, /*hidden argument*/NULL);
		Rect_t230 * L_6 = &(__this->___uv_1);
		float L_7 = Rect_get_height_m1727(L_6, /*hidden argument*/NULL);
		Vector2_t38  L_8 = {0};
		Vector2__ctor_m306(&L_8, ((float)((float)L_1+(float)L_3)), ((float)((float)L_5+(float)L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeftUnFlipped()
extern "C" Vector2_t38  CharacterInfo_get_uvTopLeftUnFlipped_m3039 (CharacterInfo_t593 * __this, const MethodInfo* method)
{
	{
		Rect_t230 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m1731(L_0, /*hidden argument*/NULL);
		Rect_t230 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m1732(L_2, /*hidden argument*/NULL);
		Rect_t230 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_height_m1727(L_4, /*hidden argument*/NULL);
		Vector2_t38  L_6 = {0};
		Vector2__ctor_m306(&L_6, L_1, ((float)((float)L_3+(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeft()
extern "C" Vector2_t38  CharacterInfo_get_uvBottomLeft_m3040 (CharacterInfo_t593 * __this, const MethodInfo* method)
{
	Vector2_t38  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t38  L_1 = CharacterInfo_get_uvBottomLeftUnFlipped_m3036(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t38  L_2 = CharacterInfo_get_uvBottomLeftUnFlipped_m3036(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRight()
extern "C" Vector2_t38  CharacterInfo_get_uvBottomRight_m3041 (CharacterInfo_t593 * __this, const MethodInfo* method)
{
	Vector2_t38  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t38  L_1 = CharacterInfo_get_uvTopLeftUnFlipped_m3039(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t38  L_2 = CharacterInfo_get_uvBottomRightUnFlipped_m3037(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRight()
extern "C" Vector2_t38  CharacterInfo_get_uvTopRight_m3042 (CharacterInfo_t593 * __this, const MethodInfo* method)
{
	Vector2_t38  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t38  L_1 = CharacterInfo_get_uvTopRightUnFlipped_m3038(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t38  L_2 = CharacterInfo_get_uvTopRightUnFlipped_m3038(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeft()
extern "C" Vector2_t38  CharacterInfo_get_uvTopLeft_m3043 (CharacterInfo_t593 * __this, const MethodInfo* method)
{
	Vector2_t38  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t38  L_1 = CharacterInfo_get_uvBottomRightUnFlipped_m3037(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t38  L_2 = CharacterInfo_get_uvTopLeftUnFlipped_m3039(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// Conversion methods for marshalling of: UnityEngine.CharacterInfo
void CharacterInfo_t593_marshal(const CharacterInfo_t593& unmarshaled, CharacterInfo_t593_marshaled& marshaled)
{
	marshaled.___index_0 = unmarshaled.___index_0;
	marshaled.___uv_1 = unmarshaled.___uv_1;
	marshaled.___vert_2 = unmarshaled.___vert_2;
	marshaled.___width_3 = unmarshaled.___width_3;
	marshaled.___size_4 = unmarshaled.___size_4;
	marshaled.___style_5 = unmarshaled.___style_5;
	marshaled.___flipped_6 = unmarshaled.___flipped_6;
	marshaled.___ascent_7 = unmarshaled.___ascent_7;
}
void CharacterInfo_t593_marshal_back(const CharacterInfo_t593_marshaled& marshaled, CharacterInfo_t593& unmarshaled)
{
	unmarshaled.___index_0 = marshaled.___index_0;
	unmarshaled.___uv_1 = marshaled.___uv_1;
	unmarshaled.___vert_2 = marshaled.___vert_2;
	unmarshaled.___width_3 = marshaled.___width_3;
	unmarshaled.___size_4 = marshaled.___size_4;
	unmarshaled.___style_5 = marshaled.___style_5;
	unmarshaled.___flipped_6 = marshaled.___flipped_6;
	unmarshaled.___ascent_7 = marshaled.___ascent_7;
}
// Conversion method for clean up from marshalling of: UnityEngine.CharacterInfo
void CharacterInfo_t593_marshal_cleanup(CharacterInfo_t593_marshaled& marshaled)
{
}
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallback.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallbackMethodDeclarations.h"



// System.Void UnityEngine.Font/FontTextureRebuildCallback::.ctor(System.Object,System.IntPtr)
extern "C" void FontTextureRebuildCallback__ctor_m3044 (FontTextureRebuildCallback_t594 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::Invoke()
extern "C" void FontTextureRebuildCallback_Invoke_m3045 (FontTextureRebuildCallback_t594 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		FontTextureRebuildCallback_Invoke_m3045((FontTextureRebuildCallback_t594 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_FontTextureRebuildCallback_t594(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Font/FontTextureRebuildCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * FontTextureRebuildCallback_BeginInvoke_m3046 (FontTextureRebuildCallback_t594 * __this, AsyncCallback_t224 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::EndInvoke(System.IAsyncResult)
extern "C" void FontTextureRebuildCallback_EndInvoke_m3047 (FontTextureRebuildCallback_t594 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Font
#include "UnityEngine_UnityEngine_FontMethodDeclarations.h"

// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_gen_1.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_gen_1MethodDeclarations.h"


// System.Void UnityEngine.Font::add_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern TypeInfo* Font_t188_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t355_il2cpp_TypeInfo_var;
extern "C" void Font_add_textureRebuilt_m1708 (Object_t * __this /* static, unused */, Action_1_t355 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Font_t188_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(274);
		Action_1_t355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t355 * L_0 = ((Font_t188_StaticFields*)Font_t188_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2;
		Action_1_t355 * L_1 = ___value;
		Delegate_t361 * L_2 = Delegate_Combine_m1746(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Font_t188_StaticFields*)Font_t188_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2 = ((Action_1_t355 *)Castclass(L_2, Action_1_t355_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Font::remove_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern TypeInfo* Font_t188_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t355_il2cpp_TypeInfo_var;
extern "C" void Font_remove_textureRebuilt_m3048 (Object_t * __this /* static, unused */, Action_1_t355 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Font_t188_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(274);
		Action_1_t355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t355 * L_0 = ((Font_t188_StaticFields*)Font_t188_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2;
		Action_1_t355 * L_1 = ___value;
		Delegate_t361 * L_2 = Delegate_Remove_m1747(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Font_t188_StaticFields*)Font_t188_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2 = ((Action_1_t355 *)Castclass(L_2, Action_1_t355_il2cpp_TypeInfo_var));
		return;
	}
}
// UnityEngine.Material UnityEngine.Font::get_material()
extern "C" Material_t192 * Font_get_material_m1991 (Font_t188 * __this, const MethodInfo* method)
{
	typedef Material_t192 * (*Font_get_material_m1991_ftn) (Font_t188 *);
	static Font_get_material_m1991_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_material_m1991_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_material()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Font::HasCharacter(System.Char)
extern "C" bool Font_HasCharacter_m1868 (Font_t188 * __this, uint16_t ___c, const MethodInfo* method)
{
	typedef bool (*Font_HasCharacter_m1868_ftn) (Font_t188 *, uint16_t);
	static Font_HasCharacter_m1868_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_HasCharacter_m1868_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::HasCharacter(System.Char)");
	return _il2cpp_icall_func(__this, ___c);
}
// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
extern TypeInfo* Font_t188_il2cpp_TypeInfo_var;
extern "C" void Font_InvokeTextureRebuilt_Internal_m3049 (Object_t * __this /* static, unused */, Font_t188 * ___font, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Font_t188_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(274);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t355 * V_0 = {0};
	{
		Action_1_t355 * L_0 = ((Font_t188_StaticFields*)Font_t188_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2;
		V_0 = L_0;
		Action_1_t355 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t355 * L_2 = V_0;
		Font_t188 * L_3 = ___font;
		NullCheck(L_2);
		VirtActionInvoker1< Font_t188 * >::Invoke(10 /* System.Void System.Action`1<UnityEngine.Font>::Invoke(!0) */, L_2, L_3);
	}

IL_0013:
	{
		Font_t188 * L_4 = ___font;
		NullCheck(L_4);
		FontTextureRebuildCallback_t594 * L_5 = (L_4->___m_FontTextureRebuildCallback_3);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Font_t188 * L_6 = ___font;
		NullCheck(L_6);
		FontTextureRebuildCallback_t594 * L_7 = (L_6->___m_FontTextureRebuildCallback_3);
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(10 /* System.Void UnityEngine.Font/FontTextureRebuildCallback::Invoke() */, L_7);
	}

IL_0029:
	{
		return;
	}
}
// System.Boolean UnityEngine.Font::get_dynamic()
extern "C" bool Font_get_dynamic_m1994 (Font_t188 * __this, const MethodInfo* method)
{
	typedef bool (*Font_get_dynamic_m1994_ftn) (Font_t188 *);
	static Font_get_dynamic_m1994_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_dynamic_m1994_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_dynamic()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Font::get_fontSize()
extern "C" int32_t Font_get_fontSize_m1996 (Font_t188 * __this, const MethodInfo* method)
{
	typedef int32_t (*Font_get_fontSize_m1996_ftn) (Font_t188 *);
	static Font_get_fontSize_m1996_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_fontSize_m1996_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_fontSize()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfoMethodDeclarations.h"



// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfoMethodDeclarations.h"



// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGenerator.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGeneratorMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_15.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_29.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_30.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_15MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_29MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_30MethodDeclarations.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettingsMethodDeclarations.h"


// System.Void UnityEngine.TextGenerator::.ctor()
extern "C" void TextGenerator__ctor_m1839 (TextGenerator_t102 * __this, const MethodInfo* method)
{
	{
		TextGenerator__ctor_m1989(__this, ((int32_t)50), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::.ctor(System.Int32)
extern TypeInfo* List_1_t234_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t595_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t596_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3559_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m3560_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m3561_MethodInfo_var;
extern "C" void TextGenerator__ctor_m1989 (TextGenerator_t102 * __this, int32_t ___initialCapacity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		List_1_t595_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(995);
		List_1_t596_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(996);
		List_1__ctor_m3559_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483963);
		List_1__ctor_m3560_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483964);
		List_1__ctor_m3561_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483965);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___initialCapacity;
		List_1_t234 * L_1 = (List_1_t234 *)il2cpp_codegen_object_new (List_1_t234_il2cpp_TypeInfo_var);
		List_1__ctor_m3559(L_1, ((int32_t)((int32_t)((int32_t)((int32_t)L_0+(int32_t)1))*(int32_t)4)), /*hidden argument*/List_1__ctor_m3559_MethodInfo_var);
		__this->___m_Verts_5 = L_1;
		int32_t L_2 = ___initialCapacity;
		List_1_t595 * L_3 = (List_1_t595 *)il2cpp_codegen_object_new (List_1_t595_il2cpp_TypeInfo_var);
		List_1__ctor_m3560(L_3, ((int32_t)((int32_t)L_2+(int32_t)1)), /*hidden argument*/List_1__ctor_m3560_MethodInfo_var);
		__this->___m_Characters_6 = L_3;
		List_1_t596 * L_4 = (List_1_t596 *)il2cpp_codegen_object_new (List_1_t596_il2cpp_TypeInfo_var);
		List_1__ctor_m3561(L_4, ((int32_t)20), /*hidden argument*/List_1__ctor_m3561_MethodInfo_var);
		__this->___m_Lines_7 = L_4;
		TextGenerator_Init_m3051(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::System.IDisposable.Dispose()
extern "C" void TextGenerator_System_IDisposable_Dispose_m3050 (TextGenerator_t102 * __this, const MethodInfo* method)
{
	{
		TextGenerator_Dispose_cpp_m3052(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::Init()
extern "C" void TextGenerator_Init_m3051 (TextGenerator_t102 * __this, const MethodInfo* method)
{
	typedef void (*TextGenerator_Init_m3051_ftn) (TextGenerator_t102 *);
	static TextGenerator_Init_m3051_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_Init_m3051_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::Dispose_cpp()
extern "C" void TextGenerator_Dispose_cpp_m3052 (TextGenerator_t102 * __this, const MethodInfo* method)
{
	typedef void (*TextGenerator_Dispose_cpp_m3052_ftn) (TextGenerator_t102 *);
	static TextGenerator_Dispose_cpp_m3052_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_Dispose_cpp_m3052_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Dispose_cpp()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.TextGenerator::Populate_Internal(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,UnityEngine.VerticalWrapMode,UnityEngine.HorizontalWrapMode,System.Boolean,UnityEngine.TextAnchor,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
extern "C" bool TextGenerator_Populate_Internal_m3053 (TextGenerator_t102 * __this, String_t* ___str, Font_t188 * ___font, Color_t13  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, Vector2_t38  ___extents, Vector2_t38  ___pivot, bool ___generateOutOfBounds, const MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		Font_t188 * L_1 = ___font;
		Color_t13  L_2 = ___color;
		int32_t L_3 = ___fontSize;
		float L_4 = ___scaleFactor;
		float L_5 = ___lineSpacing;
		int32_t L_6 = ___style;
		bool L_7 = ___richText;
		bool L_8 = ___resizeTextForBestFit;
		int32_t L_9 = ___resizeTextMinSize;
		int32_t L_10 = ___resizeTextMaxSize;
		int32_t L_11 = ___verticalOverFlow;
		int32_t L_12 = ___horizontalOverflow;
		bool L_13 = ___updateBounds;
		int32_t L_14 = ___anchor;
		float L_15 = ((&___extents)->___x_1);
		float L_16 = ((&___extents)->___y_2);
		float L_17 = ((&___pivot)->___x_1);
		float L_18 = ((&___pivot)->___y_2);
		bool L_19 = ___generateOutOfBounds;
		bool L_20 = TextGenerator_Populate_Internal_cpp_m3054(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
		return L_20;
	}
}
// System.Boolean UnityEngine.TextGenerator::Populate_Internal_cpp(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C" bool TextGenerator_Populate_Internal_cpp_m3054 (TextGenerator_t102 * __this, String_t* ___str, Font_t188 * ___font, Color_t13  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, const MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		Font_t188 * L_1 = ___font;
		int32_t L_2 = ___fontSize;
		float L_3 = ___scaleFactor;
		float L_4 = ___lineSpacing;
		int32_t L_5 = ___style;
		bool L_6 = ___richText;
		bool L_7 = ___resizeTextForBestFit;
		int32_t L_8 = ___resizeTextMinSize;
		int32_t L_9 = ___resizeTextMaxSize;
		int32_t L_10 = ___verticalOverFlow;
		int32_t L_11 = ___horizontalOverflow;
		bool L_12 = ___updateBounds;
		int32_t L_13 = ___anchor;
		float L_14 = ___extentsX;
		float L_15 = ___extentsY;
		float L_16 = ___pivotX;
		float L_17 = ___pivotY;
		bool L_18 = ___generateOutOfBounds;
		bool L_19 = TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3055(NULL /*static, unused*/, __this, L_0, L_1, (&___color), L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
		return L_19;
	}
}
// System.Boolean UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C" bool TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3055 (Object_t * __this /* static, unused */, TextGenerator_t102 * ___self, String_t* ___str, Font_t188 * ___font, Color_t13 * ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, const MethodInfo* method)
{
	typedef bool (*TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3055_ftn) (TextGenerator_t102 *, String_t*, Font_t188 *, Color_t13 *, int32_t, float, float, int32_t, bool, bool, int32_t, int32_t, int32_t, int32_t, bool, int32_t, float, float, float, float, bool);
	static TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3055_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3055_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)");
	return _il2cpp_icall_func(___self, ___str, ___font, ___color, ___fontSize, ___scaleFactor, ___lineSpacing, ___style, ___richText, ___resizeTextForBestFit, ___resizeTextMinSize, ___resizeTextMaxSize, ___verticalOverFlow, ___horizontalOverflow, ___updateBounds, ___anchor, ___extentsX, ___extentsY, ___pivotX, ___pivotY, ___generateOutOfBounds);
}
// UnityEngine.Rect UnityEngine.TextGenerator::get_rectExtents()
extern "C" Rect_t230  TextGenerator_get_rectExtents_m1883 (TextGenerator_t102 * __this, const MethodInfo* method)
{
	typedef Rect_t230  (*TextGenerator_get_rectExtents_m1883_ftn) (TextGenerator_t102 *);
	static TextGenerator_get_rectExtents_m1883_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_rectExtents_m1883_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_rectExtents()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_vertexCount()
extern "C" int32_t TextGenerator_get_vertexCount_m3056 (TextGenerator_t102 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_vertexCount_m3056_ftn) (TextGenerator_t102 *);
	static TextGenerator_get_vertexCount_m3056_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_vertexCount_m3056_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_vertexCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::GetVerticesInternal(System.Object)
extern "C" void TextGenerator_GetVerticesInternal_m3057 (TextGenerator_t102 * __this, Object_t * ___vertices, const MethodInfo* method)
{
	typedef void (*TextGenerator_GetVerticesInternal_m3057_ftn) (TextGenerator_t102 *, Object_t *);
	static TextGenerator_GetVerticesInternal_m3057_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetVerticesInternal_m3057_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___vertices);
}
// UnityEngine.UIVertex[] UnityEngine.TextGenerator::GetVerticesArray()
extern "C" UIVertexU5BU5D_t232* TextGenerator_GetVerticesArray_m3058 (TextGenerator_t102 * __this, const MethodInfo* method)
{
	typedef UIVertexU5BU5D_t232* (*TextGenerator_GetVerticesArray_m3058_ftn) (TextGenerator_t102 *);
	static TextGenerator_GetVerticesArray_m3058_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetVerticesArray_m3058_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_characterCount()
extern "C" int32_t TextGenerator_get_characterCount_m3059 (TextGenerator_t102 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_characterCount_m3059_ftn) (TextGenerator_t102 *);
	static TextGenerator_get_characterCount_m3059_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_characterCount_m3059_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_characterCount()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_characterCountVisible()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t68_il2cpp_TypeInfo_var;
extern "C" int32_t TextGenerator_get_characterCountVisible_m1862 (TextGenerator_t102 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		Mathf_t68_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = (__this->___m_LastString_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m1881(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0036;
	}

IL_0016:
	{
		String_t* L_2 = (__this->___m_LastString_1);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m350(L_2, /*hidden argument*/NULL);
		int32_t L_4 = TextGenerator_get_vertexCount_m3056(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
		int32_t L_5 = Mathf_Max_m214(NULL /*static, unused*/, 0, ((int32_t)((int32_t)((int32_t)((int32_t)L_4-(int32_t)4))/(int32_t)4)), /*hidden argument*/NULL);
		int32_t L_6 = Mathf_Min_m1874(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
// System.Void UnityEngine.TextGenerator::GetCharactersInternal(System.Object)
extern "C" void TextGenerator_GetCharactersInternal_m3060 (TextGenerator_t102 * __this, Object_t * ___characters, const MethodInfo* method)
{
	typedef void (*TextGenerator_GetCharactersInternal_m3060_ftn) (TextGenerator_t102 *, Object_t *);
	static TextGenerator_GetCharactersInternal_m3060_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetCharactersInternal_m3060_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersInternal(System.Object)");
	_il2cpp_icall_func(__this, ___characters);
}
// UnityEngine.UICharInfo[] UnityEngine.TextGenerator::GetCharactersArray()
extern "C" UICharInfoU5BU5D_t714* TextGenerator_GetCharactersArray_m3061 (TextGenerator_t102 * __this, const MethodInfo* method)
{
	typedef UICharInfoU5BU5D_t714* (*TextGenerator_GetCharactersArray_m3061_ftn) (TextGenerator_t102 *);
	static TextGenerator_GetCharactersArray_m3061_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetCharactersArray_m3061_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_lineCount()
extern "C" int32_t TextGenerator_get_lineCount_m348 (TextGenerator_t102 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_lineCount_m348_ftn) (TextGenerator_t102 *);
	static TextGenerator_get_lineCount_m348_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_lineCount_m348_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_lineCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::GetLinesInternal(System.Object)
extern "C" void TextGenerator_GetLinesInternal_m3062 (TextGenerator_t102 * __this, Object_t * ___lines, const MethodInfo* method)
{
	typedef void (*TextGenerator_GetLinesInternal_m3062_ftn) (TextGenerator_t102 *, Object_t *);
	static TextGenerator_GetLinesInternal_m3062_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetLinesInternal_m3062_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___lines);
}
// UnityEngine.UILineInfo[] UnityEngine.TextGenerator::GetLinesArray()
extern "C" UILineInfoU5BU5D_t715* TextGenerator_GetLinesArray_m3063 (TextGenerator_t102 * __this, const MethodInfo* method)
{
	typedef UILineInfoU5BU5D_t715* (*TextGenerator_GetLinesArray_m3063_ftn) (TextGenerator_t102 *);
	static TextGenerator_GetLinesArray_m3063_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetLinesArray_m3063_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()
extern "C" int32_t TextGenerator_get_fontSizeUsedForBestFit_m1904 (TextGenerator_t102 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_fontSizeUsedForBestFit_m1904_ftn) (TextGenerator_t102 *);
	static TextGenerator_get_fontSizeUsedForBestFit_m1904_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_fontSizeUsedForBestFit_m1904_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::Finalize()
extern TypeInfo* IDisposable_t69_il2cpp_TypeInfo_var;
extern "C" void TextGenerator_Finalize_m3064 (TextGenerator_t102 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t69_il2cpp_TypeInfo_var, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m375(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_0012:
	{
		return;
	}
}
// UnityEngine.TextGenerationSettings UnityEngine.TextGenerator::ValidatedSettings(UnityEngine.TextGenerationSettings)
extern "C" TextGenerationSettings_t335  TextGenerator_ValidatedSettings_m3065 (TextGenerator_t102 * __this, TextGenerationSettings_t335  ___settings, const MethodInfo* method)
{
	{
		Font_t188 * L_0 = ((&___settings)->___font_0);
		bool L_1 = Object_op_Inequality_m207(NULL /*static, unused*/, L_0, (Object_t67 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Font_t188 * L_2 = ((&___settings)->___font_0);
		NullCheck(L_2);
		bool L_3 = Font_get_dynamic_m1994(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		TextGenerationSettings_t335  L_4 = ___settings;
		return L_4;
	}

IL_0025:
	{
		int32_t L_5 = ((&___settings)->___fontSize_2);
		if (L_5)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_6 = ((&___settings)->___fontStyle_6);
		if (!L_6)
		{
			goto IL_0057;
		}
	}

IL_003d:
	{
		Debug_LogWarning_m2831(NULL /*static, unused*/, (String_t*) &_stringLiteral242, /*hidden argument*/NULL);
		(&___settings)->___fontSize_2 = 0;
		(&___settings)->___fontStyle_6 = 0;
	}

IL_0057:
	{
		bool L_7 = ((&___settings)->___resizeTextForBestFit_8);
		if (!L_7)
		{
			goto IL_0075;
		}
	}
	{
		Debug_LogWarning_m2831(NULL /*static, unused*/, (String_t*) &_stringLiteral243, /*hidden argument*/NULL);
		(&___settings)->___resizeTextForBestFit_8 = 0;
	}

IL_0075:
	{
		TextGenerationSettings_t335  L_8 = ___settings;
		return L_8;
	}
}
// System.Void UnityEngine.TextGenerator::Invalidate()
extern "C" void TextGenerator_Invalidate_m1993 (TextGenerator_t102 * __this, const MethodInfo* method)
{
	{
		__this->___m_HasGenerated_3 = 0;
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetCharacters(System.Collections.Generic.List`1<UnityEngine.UICharInfo>)
extern "C" void TextGenerator_GetCharacters_m3066 (TextGenerator_t102 * __this, List_1_t595 * ___characters, const MethodInfo* method)
{
	{
		List_1_t595 * L_0 = ___characters;
		TextGenerator_GetCharactersInternal_m3060(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetLines(System.Collections.Generic.List`1<UnityEngine.UILineInfo>)
extern "C" void TextGenerator_GetLines_m3067 (TextGenerator_t102 * __this, List_1_t596 * ___lines, const MethodInfo* method)
{
	{
		List_1_t596 * L_0 = ___lines;
		TextGenerator_GetLinesInternal_m3062(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void TextGenerator_GetVertices_m3068 (TextGenerator_t102 * __this, List_1_t234 * ___vertices, const MethodInfo* method)
{
	{
		List_1_t234 * L_0 = ___vertices;
		TextGenerator_GetVerticesInternal_m3057(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.TextGenerator::GetPreferredWidth(System.String,UnityEngine.TextGenerationSettings)
extern "C" float TextGenerator_GetPreferredWidth_m1998 (TextGenerator_t102 * __this, String_t* ___str, TextGenerationSettings_t335  ___settings, const MethodInfo* method)
{
	Rect_t230  V_0 = {0};
	{
		(&___settings)->___horizontalOverflow_13 = 1;
		(&___settings)->___verticalOverflow_12 = 1;
		(&___settings)->___updateBounds_11 = 1;
		String_t* L_0 = ___str;
		TextGenerationSettings_t335  L_1 = ___settings;
		TextGenerator_Populate_m1882(__this, L_0, L_1, /*hidden argument*/NULL);
		Rect_t230  L_2 = TextGenerator_get_rectExtents_m1883(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Rect_get_width_m1726((&V_0), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Single UnityEngine.TextGenerator::GetPreferredHeight(System.String,UnityEngine.TextGenerationSettings)
extern "C" float TextGenerator_GetPreferredHeight_m1999 (TextGenerator_t102 * __this, String_t* ___str, TextGenerationSettings_t335  ___settings, const MethodInfo* method)
{
	Rect_t230  V_0 = {0};
	{
		(&___settings)->___verticalOverflow_12 = 1;
		(&___settings)->___updateBounds_11 = 1;
		String_t* L_0 = ___str;
		TextGenerationSettings_t335  L_1 = ___settings;
		TextGenerator_Populate_m1882(__this, L_0, L_1, /*hidden argument*/NULL);
		Rect_t230  L_2 = TextGenerator_get_rectExtents_m1883(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Rect_get_height_m1727((&V_0), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.TextGenerator::Populate(System.String,UnityEngine.TextGenerationSettings)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool TextGenerator_Populate_m1882 (TextGenerator_t102 * __this, String_t* ___str, TextGenerationSettings_t335  ___settings, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___m_HasGenerated_3);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_1 = ___str;
		String_t* L_2 = (__this->___m_LastString_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m334(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		TextGenerationSettings_t335  L_4 = (__this->___m_LastSettings_2);
		bool L_5 = TextGenerationSettings_Equals_m3445((&___settings), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		bool L_6 = (__this->___m_LastValid_4);
		return L_6;
	}

IL_0035:
	{
		String_t* L_7 = ___str;
		TextGenerationSettings_t335  L_8 = ___settings;
		bool L_9 = TextGenerator_PopulateAlways_m3069(__this, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Boolean UnityEngine.TextGenerator::PopulateAlways(System.String,UnityEngine.TextGenerationSettings)
extern "C" bool TextGenerator_PopulateAlways_m3069 (TextGenerator_t102 * __this, String_t* ___str, TextGenerationSettings_t335  ___settings, const MethodInfo* method)
{
	TextGenerationSettings_t335  V_0 = {0};
	{
		String_t* L_0 = ___str;
		__this->___m_LastString_1 = L_0;
		__this->___m_HasGenerated_3 = 1;
		__this->___m_CachedVerts_8 = 0;
		__this->___m_CachedCharacters_9 = 0;
		__this->___m_CachedLines_10 = 0;
		TextGenerationSettings_t335  L_1 = ___settings;
		__this->___m_LastSettings_2 = L_1;
		TextGenerationSettings_t335  L_2 = ___settings;
		TextGenerationSettings_t335  L_3 = TextGenerator_ValidatedSettings_m3065(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = ___str;
		Font_t188 * L_5 = ((&V_0)->___font_0);
		Color_t13  L_6 = ((&V_0)->___color_1);
		int32_t L_7 = ((&V_0)->___fontSize_2);
		float L_8 = ((&V_0)->___scaleFactor_5);
		float L_9 = ((&V_0)->___lineSpacing_3);
		int32_t L_10 = ((&V_0)->___fontStyle_6);
		bool L_11 = ((&V_0)->___richText_4);
		bool L_12 = ((&V_0)->___resizeTextForBestFit_8);
		int32_t L_13 = ((&V_0)->___resizeTextMinSize_9);
		int32_t L_14 = ((&V_0)->___resizeTextMaxSize_10);
		int32_t L_15 = ((&V_0)->___verticalOverflow_12);
		int32_t L_16 = ((&V_0)->___horizontalOverflow_13);
		bool L_17 = ((&V_0)->___updateBounds_11);
		int32_t L_18 = ((&V_0)->___textAnchor_7);
		Vector2_t38  L_19 = ((&V_0)->___generationExtents_14);
		Vector2_t38  L_20 = ((&V_0)->___pivot_15);
		bool L_21 = ((&V_0)->___generateOutOfBounds_16);
		bool L_22 = TextGenerator_Populate_Internal_m3053(__this, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
		__this->___m_LastValid_4 = L_22;
		bool L_23 = (__this->___m_LastValid_4);
		return L_23;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::get_verts()
extern "C" Object_t* TextGenerator_get_verts_m1997 (TextGenerator_t102 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedVerts_8);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t234 * L_1 = (__this->___m_Verts_5);
		TextGenerator_GetVertices_m3068(__this, L_1, /*hidden argument*/NULL);
		__this->___m_CachedVerts_8 = 1;
	}

IL_001e:
	{
		List_1_t234 * L_2 = (__this->___m_Verts_5);
		return L_2;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UICharInfo> UnityEngine.TextGenerator::get_characters()
extern "C" Object_t* TextGenerator_get_characters_m1863 (TextGenerator_t102 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedCharacters_9);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t595 * L_1 = (__this->___m_Characters_6);
		TextGenerator_GetCharacters_m3066(__this, L_1, /*hidden argument*/NULL);
		__this->___m_CachedCharacters_9 = 1;
	}

IL_001e:
	{
		List_1_t595 * L_2 = (__this->___m_Characters_6);
		return L_2;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::get_lines()
extern "C" Object_t* TextGenerator_get_lines_m1861 (TextGenerator_t102 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedLines_10);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t596 * L_1 = (__this->___m_Lines_7);
		TextGenerator_GetLines_m3067(__this, L_1, /*hidden argument*/NULL);
		__this->___m_CachedLines_10 = 1;
	}

IL_001e:
	{
		List_1_t596 * L_2 = (__this->___m_Lines_7);
		return L_2;
	}
}
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderMode.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderModeMethodDeclarations.h"



// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvases.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvasesMethodDeclarations.h"



// System.Void UnityEngine.Canvas/WillRenderCanvases::.ctor(System.Object,System.IntPtr)
extern "C" void WillRenderCanvases__ctor_m1694 (WillRenderCanvases_t353 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::Invoke()
extern "C" void WillRenderCanvases_Invoke_m3070 (WillRenderCanvases_t353 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		WillRenderCanvases_Invoke_m3070((WillRenderCanvases_t353 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_WillRenderCanvases_t353(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Canvas/WillRenderCanvases::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * WillRenderCanvases_BeginInvoke_m3071 (WillRenderCanvases_t353 * __this, AsyncCallback_t224 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::EndInvoke(System.IAsyncResult)
extern "C" void WillRenderCanvases_EndInvoke_m3072 (WillRenderCanvases_t353 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_Canvas.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_CanvasMethodDeclarations.h"

// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"


// System.Void UnityEngine.Canvas::add_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern TypeInfo* Canvas_t196_il2cpp_TypeInfo_var;
extern TypeInfo* WillRenderCanvases_t353_il2cpp_TypeInfo_var;
extern "C" void Canvas_add_willRenderCanvases_m1695 (Object_t * __this /* static, unused */, WillRenderCanvases_t353 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Canvas_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		WillRenderCanvases_t353_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	{
		WillRenderCanvases_t353 * L_0 = ((Canvas_t196_StaticFields*)Canvas_t196_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		WillRenderCanvases_t353 * L_1 = ___value;
		Delegate_t361 * L_2 = Delegate_Combine_m1746(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Canvas_t196_StaticFields*)Canvas_t196_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2 = ((WillRenderCanvases_t353 *)Castclass(L_2, WillRenderCanvases_t353_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Canvas::remove_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern TypeInfo* Canvas_t196_il2cpp_TypeInfo_var;
extern TypeInfo* WillRenderCanvases_t353_il2cpp_TypeInfo_var;
extern "C" void Canvas_remove_willRenderCanvases_m3073 (Object_t * __this /* static, unused */, WillRenderCanvases_t353 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Canvas_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		WillRenderCanvases_t353_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	{
		WillRenderCanvases_t353 * L_0 = ((Canvas_t196_StaticFields*)Canvas_t196_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		WillRenderCanvases_t353 * L_1 = ___value;
		Delegate_t361 * L_2 = Delegate_Remove_m1747(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Canvas_t196_StaticFields*)Canvas_t196_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2 = ((WillRenderCanvases_t353 *)Castclass(L_2, WillRenderCanvases_t353_il2cpp_TypeInfo_var));
		return;
	}
}
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
extern "C" int32_t Canvas_get_renderMode_m1752 (Canvas_t196 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_renderMode_m1752_ftn) (Canvas_t196 *);
	static Canvas_get_renderMode_m1752_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_renderMode_m1752_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderMode()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Canvas::get_isRootCanvas()
extern "C" bool Canvas_get_isRootCanvas_m2012 (Canvas_t196 * __this, const MethodInfo* method)
{
	typedef bool (*Canvas_get_isRootCanvas_m2012_ftn) (Canvas_t196 *);
	static Canvas_get_isRootCanvas_m2012_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_isRootCanvas_m2012_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_isRootCanvas()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
extern "C" Camera_t84 * Canvas_get_worldCamera_m1766 (Canvas_t196 * __this, const MethodInfo* method)
{
	typedef Camera_t84 * (*Canvas_get_worldCamera_m1766_ftn) (Canvas_t196 *);
	static Canvas_get_worldCamera_m1766_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_worldCamera_m1766_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_worldCamera()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Canvas::get_scaleFactor()
extern "C" float Canvas_get_scaleFactor_m1995 (Canvas_t196 * __this, const MethodInfo* method)
{
	typedef float (*Canvas_get_scaleFactor_m1995_ftn) (Canvas_t196 *);
	static Canvas_get_scaleFactor_m1995_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_scaleFactor_m1995_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_scaleFactor()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_scaleFactor(System.Single)
extern "C" void Canvas_set_scaleFactor_m2016 (Canvas_t196 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Canvas_set_scaleFactor_m2016_ftn) (Canvas_t196 *, float);
	static Canvas_set_scaleFactor_m2016_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_scaleFactor_m2016_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_scaleFactor(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Canvas::get_referencePixelsPerUnit()
extern "C" float Canvas_get_referencePixelsPerUnit_m1785 (Canvas_t196 * __this, const MethodInfo* method)
{
	typedef float (*Canvas_get_referencePixelsPerUnit_m1785_ftn) (Canvas_t196 *);
	static Canvas_get_referencePixelsPerUnit_m1785_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_referencePixelsPerUnit_m1785_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_referencePixelsPerUnit()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)
extern "C" void Canvas_set_referencePixelsPerUnit_m2017 (Canvas_t196 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Canvas_set_referencePixelsPerUnit_m2017_ftn) (Canvas_t196 *, float);
	static Canvas_set_referencePixelsPerUnit_m2017_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_referencePixelsPerUnit_m2017_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Canvas::get_pixelPerfect()
extern "C" bool Canvas_get_pixelPerfect_m1737 (Canvas_t196 * __this, const MethodInfo* method)
{
	typedef bool (*Canvas_get_pixelPerfect_m1737_ftn) (Canvas_t196 *);
	static Canvas_get_pixelPerfect_m1737_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_pixelPerfect_m1737_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_pixelPerfect()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_renderOrder()
extern "C" int32_t Canvas_get_renderOrder_m1754 (Canvas_t196 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_renderOrder_m1754_ftn) (Canvas_t196 *);
	static Canvas_get_renderOrder_m1754_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_renderOrder_m1754_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderOrder()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_sortingOrder()
extern "C" int32_t Canvas_get_sortingOrder_m1753 (Canvas_t196 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_sortingOrder_m1753_ftn) (Canvas_t196 *);
	static Canvas_get_sortingOrder_m1753_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_sortingOrder_m1753_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_sortingOrder()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_cachedSortingLayerValue()
extern "C" int32_t Canvas_get_cachedSortingLayerValue_m1765 (Canvas_t196 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_cachedSortingLayerValue_m1765_ftn) (Canvas_t196 *);
	static Canvas_get_cachedSortingLayerValue_m1765_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_cachedSortingLayerValue_m1765_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_cachedSortingLayerValue()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasMaterial()
extern "C" Material_t192 * Canvas_GetDefaultCanvasMaterial_m1718 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Material_t192 * (*Canvas_GetDefaultCanvasMaterial_m1718_ftn) ();
	static Canvas_GetDefaultCanvasMaterial_m1718_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_GetDefaultCanvasMaterial_m1718_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasMaterial()");
	return _il2cpp_icall_func();
}
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasTextMaterial()
extern "C" Material_t192 * Canvas_GetDefaultCanvasTextMaterial_m1990 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Material_t192 * (*Canvas_GetDefaultCanvasTextMaterial_m1990_ftn) ();
	static Canvas_GetDefaultCanvasTextMaterial_m1990_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_GetDefaultCanvasTextMaterial_m1990_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasTextMaterial()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Canvas::SendWillRenderCanvases()
extern TypeInfo* Canvas_t196_il2cpp_TypeInfo_var;
extern "C" void Canvas_SendWillRenderCanvases_m3074 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Canvas_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	{
		WillRenderCanvases_t353 * L_0 = ((Canvas_t196_StaticFields*)Canvas_t196_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		WillRenderCanvases_t353 * L_1 = ((Canvas_t196_StaticFields*)Canvas_t196_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(10 /* System.Void UnityEngine.Canvas/WillRenderCanvases::Invoke() */, L_1);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Canvas::ForceUpdateCanvases()
extern "C" void Canvas_ForceUpdateCanvases_m1938 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Canvas_SendWillRenderCanvases_m3074(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroup.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroupMethodDeclarations.h"



// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
extern "C" void CanvasGroup_set_alpha_m283 (CanvasGroup_t33 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*CanvasGroup_set_alpha_m283_ftn) (CanvasGroup_t33 *, float);
	static CanvasGroup_set_alpha_m283_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_set_alpha_m283_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::set_alpha(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.CanvasGroup::get_interactable()
extern "C" bool CanvasGroup_get_interactable_m1968 (CanvasGroup_t33 * __this, const MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_interactable_m1968_ftn) (CanvasGroup_t33 *);
	static CanvasGroup_get_interactable_m1968_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_interactable_m1968_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_interactable()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::get_blocksRaycasts()
extern "C" bool CanvasGroup_get_blocksRaycasts_m3075 (CanvasGroup_t33 * __this, const MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_blocksRaycasts_m3075_ftn) (CanvasGroup_t33 *);
	static CanvasGroup_get_blocksRaycasts_m3075_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_blocksRaycasts_m3075_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_blocksRaycasts()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::get_ignoreParentGroups()
extern "C" bool CanvasGroup_get_ignoreParentGroups_m1736 (CanvasGroup_t33 * __this, const MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_ignoreParentGroups_m1736_ftn) (CanvasGroup_t33 *);
	static CanvasGroup_get_ignoreParentGroups_m1736_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_ignoreParentGroups_m1736_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_ignoreParentGroups()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern "C" bool CanvasGroup_IsRaycastLocationValid_m3076 (CanvasGroup_t33 * __this, Vector2_t38  ___sp, Camera_t84 * ___eventCamera, const MethodInfo* method)
{
	{
		bool L_0 = CanvasGroup_get_blocksRaycasts_m3075(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertexMethodDeclarations.h"

// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"


// System.Void UnityEngine.UIVertex::.cctor()
extern TypeInfo* UIVertex_t233_il2cpp_TypeInfo_var;
extern "C" void UIVertex__cctor_m3077 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UIVertex_t233_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	UIVertex_t233  V_0 = {0};
	{
		Color32_t340  L_0 = {0};
		Color32__ctor_m1702(&L_0, ((int32_t)255), ((int32_t)255), ((int32_t)255), ((int32_t)255), /*hidden argument*/NULL);
		((UIVertex_t233_StaticFields*)UIVertex_t233_il2cpp_TypeInfo_var->static_fields)->___s_DefaultColor_6 = L_0;
		Vector4_t333  L_1 = {0};
		Vector4__ctor_m1733(&L_1, (1.0f), (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		((UIVertex_t233_StaticFields*)UIVertex_t233_il2cpp_TypeInfo_var->static_fields)->___s_DefaultTangent_7 = L_1;
		Initobj (UIVertex_t233_il2cpp_TypeInfo_var, (&V_0));
		Vector3_t58  L_2 = Vector3_get_zero_m1608(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___position_0 = L_2;
		Vector3_t58  L_3 = Vector3_get_back_m2616(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___normal_1 = L_3;
		Vector4_t333  L_4 = ((UIVertex_t233_StaticFields*)UIVertex_t233_il2cpp_TypeInfo_var->static_fields)->___s_DefaultTangent_7;
		(&V_0)->___tangent_5 = L_4;
		Color32_t340  L_5 = ((UIVertex_t233_StaticFields*)UIVertex_t233_il2cpp_TypeInfo_var->static_fields)->___s_DefaultColor_6;
		(&V_0)->___color_2 = L_5;
		Vector2_t38  L_6 = Vector2_get_zero_m195(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___uv0_3 = L_6;
		Vector2_t38  L_7 = Vector2_get_zero_m195(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___uv1_4 = L_7;
		UIVertex_t233  L_8 = V_0;
		((UIVertex_t233_StaticFields*)UIVertex_t233_il2cpp_TypeInfo_var->static_fields)->___simpleVert_8 = L_8;
		return;
	}
}
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRenderer.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRendererMethodDeclarations.h"

// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// System.UInt16
#include "mscorlib_System_UInt16.h"
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"


// System.Void UnityEngine.CanvasRenderer::SetColor(UnityEngine.Color)
extern "C" void CanvasRenderer_SetColor_m1742 (CanvasRenderer_t195 * __this, Color_t13  ___color, const MethodInfo* method)
{
	{
		CanvasRenderer_INTERNAL_CALL_SetColor_m3078(NULL /*static, unused*/, __this, (&___color), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)
extern "C" void CanvasRenderer_INTERNAL_CALL_SetColor_m3078 (Object_t * __this /* static, unused */, CanvasRenderer_t195 * ___self, Color_t13 * ___color, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_INTERNAL_CALL_SetColor_m3078_ftn) (CanvasRenderer_t195 *, Color_t13 *);
	static CanvasRenderer_INTERNAL_CALL_SetColor_m3078_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_INTERNAL_CALL_SetColor_m3078_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)");
	_il2cpp_icall_func(___self, ___color);
}
// UnityEngine.Color UnityEngine.CanvasRenderer::GetColor()
extern "C" Color_t13  CanvasRenderer_GetColor_m1740 (CanvasRenderer_t195 * __this, const MethodInfo* method)
{
	typedef Color_t13  (*CanvasRenderer_GetColor_m1740_ftn) (CanvasRenderer_t195 *);
	static CanvasRenderer_GetColor_m1740_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_GetColor_m1740_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::GetColor()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CanvasRenderer::set_isMask(System.Boolean)
extern "C" void CanvasRenderer_set_isMask_m2048 (CanvasRenderer_t195 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_set_isMask_m2048_ftn) (CanvasRenderer_t195 *, bool);
	static CanvasRenderer_set_isMask_m2048_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_set_isMask_m2048_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::set_isMask(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)
extern "C" void CanvasRenderer_SetMaterial_m1730 (CanvasRenderer_t195 * __this, Material_t192 * ___material, Texture_t240 * ___texture, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetMaterial_m1730_ftn) (CanvasRenderer_t195 *, Material_t192 *, Texture_t240 *);
	static CanvasRenderer_SetMaterial_m1730_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetMaterial_m1730_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)");
	_il2cpp_icall_func(__this, ___material, ___texture);
}
// System.Void UnityEngine.CanvasRenderer::SetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* UInt16_t369_il2cpp_TypeInfo_var;
extern "C" void CanvasRenderer_SetVertices_m1728 (CanvasRenderer_t195 * __this, List_1_t234 * ___vertices, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		UInt16_t369_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(997);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t234 * L_0 = ___vertices;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count() */, L_0);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0039;
		}
	}
	{
		ObjectU5BU5D_t73* L_2 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 1));
		uint16_t L_3 = ((int32_t)65535);
		Object_t * L_4 = Box(UInt16_t369_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_4;
		String_t* L_5 = UnityString_Format_m2796(NULL /*static, unused*/, (String_t*) &_stringLiteral244, L_2, /*hidden argument*/NULL);
		Debug_LogWarning_m1985(NULL /*static, unused*/, L_5, __this, /*hidden argument*/NULL);
		List_1_t234 * L_6 = ___vertices;
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear() */, L_6);
	}

IL_0039:
	{
		List_1_t234 * L_7 = ___vertices;
		CanvasRenderer_SetVerticesInternal_m3079(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)
extern "C" void CanvasRenderer_SetVerticesInternal_m3079 (CanvasRenderer_t195 * __this, Object_t * ___vertices, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetVerticesInternal_m3079_ftn) (CanvasRenderer_t195 *, Object_t *);
	static CanvasRenderer_SetVerticesInternal_m3079_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetVerticesInternal_m3079_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___vertices);
}
// System.Void UnityEngine.CanvasRenderer::SetVertices(UnityEngine.UIVertex[],System.Int32)
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* UInt16_t369_il2cpp_TypeInfo_var;
extern "C" void CanvasRenderer_SetVertices_m1845 (CanvasRenderer_t195 * __this, UIVertexU5BU5D_t232* ___vertices, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		UInt16_t369_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(997);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___size;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0031;
		}
	}
	{
		ObjectU5BU5D_t73* L_1 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 1));
		uint16_t L_2 = ((int32_t)65535);
		Object_t * L_3 = Box(UInt16_t369_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_3;
		String_t* L_4 = UnityString_Format_m2796(NULL /*static, unused*/, (String_t*) &_stringLiteral244, L_1, /*hidden argument*/NULL);
		Debug_LogWarning_m1985(NULL /*static, unused*/, L_4, __this, /*hidden argument*/NULL);
		___size = 0;
	}

IL_0031:
	{
		UIVertexU5BU5D_t232* L_5 = ___vertices;
		int32_t L_6 = ___size;
		CanvasRenderer_SetVerticesInternalArray_m3080(__this, L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)
extern "C" void CanvasRenderer_SetVerticesInternalArray_m3080 (CanvasRenderer_t195 * __this, UIVertexU5BU5D_t232* ___vertices, int32_t ___size, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetVerticesInternalArray_m3080_ftn) (CanvasRenderer_t195 *, UIVertexU5BU5D_t232*, int32_t);
	static CanvasRenderer_SetVerticesInternalArray_m3080_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetVerticesInternalArray_m3080_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)");
	_il2cpp_icall_func(__this, ___vertices, ___size);
}
// System.Void UnityEngine.CanvasRenderer::Clear()
extern "C" void CanvasRenderer_Clear_m1723 (CanvasRenderer_t195 * __this, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_Clear_m1723_ftn) (CanvasRenderer_t195 *);
	static CanvasRenderer_Clear_m1723_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_Clear_m1723_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::Clear()");
	_il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.CanvasRenderer::get_absoluteDepth()
extern "C" int32_t CanvasRenderer_get_absoluteDepth_m1719 (CanvasRenderer_t195 * __this, const MethodInfo* method)
{
	typedef int32_t (*CanvasRenderer_get_absoluteDepth_m1719_ftn) (CanvasRenderer_t195 *);
	static CanvasRenderer_get_absoluteDepth_m1719_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_get_absoluteDepth_m1719_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::get_absoluteDepth()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtility.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtilityMethodDeclarations.h"

// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_PlaneMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"


// System.Void UnityEngine.RectTransformUtility::.cctor()
extern TypeInfo* Vector3U5BU5D_t252_il2cpp_TypeInfo_var;
extern TypeInfo* RectTransformUtility_t360_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility__cctor_m3081 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(342);
		RectTransformUtility_t360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		s_Il2CppMethodIntialized = true;
	}
	{
		((RectTransformUtility_t360_StaticFields*)RectTransformUtility_t360_il2cpp_TypeInfo_var->static_fields)->___s_Corners_0 = ((Vector3U5BU5D_t252*)SZArrayNew(Vector3U5BU5D_t252_il2cpp_TypeInfo_var, 4));
		return;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera)
extern TypeInfo* RectTransformUtility_t360_il2cpp_TypeInfo_var;
extern "C" bool RectTransformUtility_RectangleContainsScreenPoint_m1767 (Object_t * __this /* static, unused */, RectTransform_t70 * ___rect, Vector2_t38  ___screenPoint, Camera_t84 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		s_Il2CppMethodIntialized = true;
	}
	{
		RectTransform_t70 * L_0 = ___rect;
		Camera_t84 * L_1 = ___cam;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t360_il2cpp_TypeInfo_var);
		bool L_2 = RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3082(NULL /*static, unused*/, L_0, (&___screenPoint), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)
extern "C" bool RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3082 (Object_t * __this /* static, unused */, RectTransform_t70 * ___rect, Vector2_t38 * ___screenPoint, Camera_t84 * ___cam, const MethodInfo* method)
{
	typedef bool (*RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3082_ftn) (RectTransform_t70 *, Vector2_t38 *, Camera_t84 *);
	static RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3082_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3082_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)");
	return _il2cpp_icall_func(___rect, ___screenPoint, ___cam);
}
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas)
extern TypeInfo* RectTransformUtility_t360_il2cpp_TypeInfo_var;
extern "C" Vector2_t38  RectTransformUtility_PixelAdjustPoint_m1738 (Object_t * __this /* static, unused */, Vector2_t38  ___point, Transform_t66 * ___elementTransform, Canvas_t196 * ___canvas, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t38  V_0 = {0};
	{
		Vector2_t38  L_0 = ___point;
		Transform_t66 * L_1 = ___elementTransform;
		Canvas_t196 * L_2 = ___canvas;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t360_il2cpp_TypeInfo_var);
		RectTransformUtility_PixelAdjustPoint_m3083(NULL /*static, unused*/, L_0, L_1, L_2, (&V_0), /*hidden argument*/NULL);
		Vector2_t38  L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern TypeInfo* RectTransformUtility_t360_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility_PixelAdjustPoint_m3083 (Object_t * __this /* static, unused */, Vector2_t38  ___point, Transform_t66 * ___elementTransform, Canvas_t196 * ___canvas, Vector2_t38 * ___output, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t66 * L_0 = ___elementTransform;
		Canvas_t196 * L_1 = ___canvas;
		Vector2_t38 * L_2 = ___output;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t360_il2cpp_TypeInfo_var);
		RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3084(NULL /*static, unused*/, (&___point), L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3084 (Object_t * __this /* static, unused */, Vector2_t38 * ___point, Transform_t66 * ___elementTransform, Canvas_t196 * ___canvas, Vector2_t38 * ___output, const MethodInfo* method)
{
	typedef void (*RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3084_ftn) (Vector2_t38 *, Transform_t66 *, Canvas_t196 *, Vector2_t38 *);
	static RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3084_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3084_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___point, ___elementTransform, ___canvas, ___output);
}
// UnityEngine.Rect UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)
extern "C" Rect_t230  RectTransformUtility_PixelAdjustRect_m1739 (Object_t * __this /* static, unused */, RectTransform_t70 * ___rectTransform, Canvas_t196 * ___canvas, const MethodInfo* method)
{
	typedef Rect_t230  (*RectTransformUtility_PixelAdjustRect_m1739_ftn) (RectTransform_t70 *, Canvas_t196 *);
	static RectTransformUtility_PixelAdjustRect_m1739_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_PixelAdjustRect_m1739_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)");
	return _il2cpp_icall_func(___rectTransform, ___canvas);
}
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector3&)
extern TypeInfo* RectTransformUtility_t360_il2cpp_TypeInfo_var;
extern "C" bool RectTransformUtility_ScreenPointToWorldPointInRectangle_m3085 (Object_t * __this /* static, unused */, RectTransform_t70 * ___rect, Vector2_t38  ___screenPoint, Camera_t84 * ___cam, Vector3_t58 * ___worldPoint, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		s_Il2CppMethodIntialized = true;
	}
	Ray_t350  V_0 = {0};
	Plane_t372  V_1 = {0};
	float V_2 = 0.0f;
	{
		Vector3_t58 * L_0 = ___worldPoint;
		Vector2_t38  L_1 = Vector2_get_zero_m195(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t58  L_2 = Vector2_op_Implicit_m314(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		*L_0 = L_2;
		Camera_t84 * L_3 = ___cam;
		Vector2_t38  L_4 = ___screenPoint;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t360_il2cpp_TypeInfo_var);
		Ray_t350  L_5 = RectTransformUtility_ScreenPointToRay_m3086(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		RectTransform_t70 * L_6 = ___rect;
		NullCheck(L_6);
		Quaternion_t99  L_7 = Transform_get_rotation_m1759(L_6, /*hidden argument*/NULL);
		Vector3_t58  L_8 = Vector3_get_back_m2616(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t58  L_9 = Quaternion_op_Multiply_m1761(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		RectTransform_t70 * L_10 = ___rect;
		NullCheck(L_10);
		Vector3_t58  L_11 = Transform_get_position_m198(L_10, /*hidden argument*/NULL);
		Plane__ctor_m1858((&V_1), L_9, L_11, /*hidden argument*/NULL);
		Ray_t350  L_12 = V_0;
		bool L_13 = Plane_Raycast_m1859((&V_1), L_12, (&V_2), /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0046;
		}
	}
	{
		return 0;
	}

IL_0046:
	{
		Vector3_t58 * L_14 = ___worldPoint;
		float L_15 = V_2;
		Vector3_t58  L_16 = Ray_GetPoint_m1860((&V_0), L_15, /*hidden argument*/NULL);
		*L_14 = L_16;
		return 1;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
extern TypeInfo* RectTransformUtility_t360_il2cpp_TypeInfo_var;
extern "C" bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m1809 (Object_t * __this /* static, unused */, RectTransform_t70 * ___rect, Vector2_t38  ___screenPoint, Camera_t84 * ___cam, Vector2_t38 * ___localPoint, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t58  V_0 = {0};
	{
		Vector2_t38 * L_0 = ___localPoint;
		Vector2_t38  L_1 = Vector2_get_zero_m195(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_0 = L_1;
		RectTransform_t70 * L_2 = ___rect;
		Vector2_t38  L_3 = ___screenPoint;
		Camera_t84 * L_4 = ___cam;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t360_il2cpp_TypeInfo_var);
		bool L_5 = RectTransformUtility_ScreenPointToWorldPointInRectangle_m3085(NULL /*static, unused*/, L_2, L_3, L_4, (&V_0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		Vector2_t38 * L_6 = ___localPoint;
		RectTransform_t70 * L_7 = ___rect;
		Vector3_t58  L_8 = V_0;
		NullCheck(L_7);
		Vector3_t58  L_9 = Transform_InverseTransformPoint_m1857(L_7, L_8, /*hidden argument*/NULL);
		Vector2_t38  L_10 = Vector2_op_Implicit_m199(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		*L_6 = L_10;
		return 1;
	}

IL_002e:
	{
		return 0;
	}
}
// UnityEngine.Ray UnityEngine.RectTransformUtility::ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector2)
extern "C" Ray_t350  RectTransformUtility_ScreenPointToRay_m3086 (Object_t * __this /* static, unused */, Camera_t84 * ___cam, Vector2_t38  ___screenPos, const MethodInfo* method)
{
	Vector3_t58  V_0 = {0};
	{
		Camera_t84 * L_0 = ___cam;
		bool L_1 = Object_op_Inequality_m207(NULL /*static, unused*/, L_0, (Object_t67 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Camera_t84 * L_2 = ___cam;
		Vector2_t38  L_3 = ___screenPos;
		Vector3_t58  L_4 = Vector2_op_Implicit_m314(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Ray_t350  L_5 = Camera_ScreenPointToRay_m1665(L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0019:
	{
		Vector2_t38  L_6 = ___screenPos;
		Vector3_t58  L_7 = Vector2_op_Implicit_m314(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Vector3_t58 * L_8 = (&V_0);
		float L_9 = (L_8->___z_3);
		L_8->___z_3 = ((float)((float)L_9-(float)(100.0f)));
		Vector3_t58  L_10 = V_0;
		Vector3_t58  L_11 = Vector3_get_forward_m1760(NULL /*static, unused*/, /*hidden argument*/NULL);
		Ray_t350  L_12 = {0};
		Ray__ctor_m2704(&L_12, L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Void UnityEngine.RectTransformUtility::FlipLayoutOnAxis(UnityEngine.RectTransform,System.Int32,System.Boolean,System.Boolean)
extern TypeInfo* RectTransform_t70_il2cpp_TypeInfo_var;
extern TypeInfo* RectTransformUtility_t360_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility_FlipLayoutOnAxis_m1933 (Object_t * __this /* static, unused */, RectTransform_t70 * ___rect, int32_t ___axis, bool ___keepPositioning, bool ___recursive, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t70_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		RectTransformUtility_t360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	RectTransform_t70 * V_1 = {0};
	Vector2_t38  V_2 = {0};
	Vector2_t38  V_3 = {0};
	Vector2_t38  V_4 = {0};
	Vector2_t38  V_5 = {0};
	float V_6 = 0.0f;
	{
		RectTransform_t70 * L_0 = ___rect;
		bool L_1 = Object_op_Equality_m204(NULL /*static, unused*/, L_0, (Object_t67 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_2 = ___recursive;
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		V_0 = 0;
		goto IL_0040;
	}

IL_001a:
	{
		RectTransform_t70 * L_3 = ___rect;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Transform_t66 * L_5 = Transform_GetChild_m2037(L_3, L_4, /*hidden argument*/NULL);
		V_1 = ((RectTransform_t70 *)IsInst(L_5, RectTransform_t70_il2cpp_TypeInfo_var));
		RectTransform_t70 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m207(NULL /*static, unused*/, L_6, (Object_t67 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		RectTransform_t70 * L_8 = V_1;
		int32_t L_9 = ___axis;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t360_il2cpp_TypeInfo_var);
		RectTransformUtility_FlipLayoutOnAxis_m1933(NULL /*static, unused*/, L_8, L_9, 0, 1, /*hidden argument*/NULL);
	}

IL_003c:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_11 = V_0;
		RectTransform_t70 * L_12 = ___rect;
		NullCheck(L_12);
		int32_t L_13 = Transform_get_childCount_m281(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_001a;
		}
	}

IL_004c:
	{
		RectTransform_t70 * L_14 = ___rect;
		NullCheck(L_14);
		Vector2_t38  L_15 = RectTransform_get_pivot_m1791(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		int32_t L_16 = ___axis;
		int32_t L_17 = ___axis;
		float L_18 = Vector2_get_Item_m1805((&V_2), L_17, /*hidden argument*/NULL);
		Vector2_set_Item_m1815((&V_2), L_16, ((float)((float)(1.0f)-(float)L_18)), /*hidden argument*/NULL);
		RectTransform_t70 * L_19 = ___rect;
		Vector2_t38  L_20 = V_2;
		NullCheck(L_19);
		RectTransform_set_pivot_m1902(L_19, L_20, /*hidden argument*/NULL);
		bool L_21 = ___keepPositioning;
		if (!L_21)
		{
			goto IL_0077;
		}
	}
	{
		return;
	}

IL_0077:
	{
		RectTransform_t70 * L_22 = ___rect;
		NullCheck(L_22);
		Vector2_t38  L_23 = RectTransform_get_anchoredPosition_m1896(L_22, /*hidden argument*/NULL);
		V_3 = L_23;
		int32_t L_24 = ___axis;
		int32_t L_25 = ___axis;
		float L_26 = Vector2_get_Item_m1805((&V_3), L_25, /*hidden argument*/NULL);
		Vector2_set_Item_m1815((&V_3), L_24, ((-L_26)), /*hidden argument*/NULL);
		RectTransform_t70 * L_27 = ___rect;
		Vector2_t38  L_28 = V_3;
		NullCheck(L_27);
		RectTransform_set_anchoredPosition_m1901(L_27, L_28, /*hidden argument*/NULL);
		RectTransform_t70 * L_29 = ___rect;
		NullCheck(L_29);
		Vector2_t38  L_30 = RectTransform_get_anchorMin_m1795(L_29, /*hidden argument*/NULL);
		V_4 = L_30;
		RectTransform_t70 * L_31 = ___rect;
		NullCheck(L_31);
		Vector2_t38  L_32 = RectTransform_get_anchorMax_m1895(L_31, /*hidden argument*/NULL);
		V_5 = L_32;
		int32_t L_33 = ___axis;
		float L_34 = Vector2_get_Item_m1805((&V_4), L_33, /*hidden argument*/NULL);
		V_6 = L_34;
		int32_t L_35 = ___axis;
		int32_t L_36 = ___axis;
		float L_37 = Vector2_get_Item_m1805((&V_5), L_36, /*hidden argument*/NULL);
		Vector2_set_Item_m1815((&V_4), L_35, ((float)((float)(1.0f)-(float)L_37)), /*hidden argument*/NULL);
		int32_t L_38 = ___axis;
		float L_39 = V_6;
		Vector2_set_Item_m1815((&V_5), L_38, ((float)((float)(1.0f)-(float)L_39)), /*hidden argument*/NULL);
		RectTransform_t70 * L_40 = ___rect;
		Vector2_t38  L_41 = V_4;
		NullCheck(L_40);
		RectTransform_set_anchorMin_m1900(L_40, L_41, /*hidden argument*/NULL);
		RectTransform_t70 * L_42 = ___rect;
		Vector2_t38  L_43 = V_5;
		NullCheck(L_42);
		RectTransform_set_anchorMax_m1796(L_42, L_43, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransformUtility::FlipLayoutAxes(UnityEngine.RectTransform,System.Boolean,System.Boolean)
extern TypeInfo* RectTransform_t70_il2cpp_TypeInfo_var;
extern TypeInfo* RectTransformUtility_t360_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility_FlipLayoutAxes_m1932 (Object_t * __this /* static, unused */, RectTransform_t70 * ___rect, bool ___keepPositioning, bool ___recursive, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t70_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		RectTransformUtility_t360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	RectTransform_t70 * V_1 = {0};
	{
		RectTransform_t70 * L_0 = ___rect;
		bool L_1 = Object_op_Equality_m204(NULL /*static, unused*/, L_0, (Object_t67 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_2 = ___recursive;
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		V_0 = 0;
		goto IL_003f;
	}

IL_001a:
	{
		RectTransform_t70 * L_3 = ___rect;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Transform_t66 * L_5 = Transform_GetChild_m2037(L_3, L_4, /*hidden argument*/NULL);
		V_1 = ((RectTransform_t70 *)IsInst(L_5, RectTransform_t70_il2cpp_TypeInfo_var));
		RectTransform_t70 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m207(NULL /*static, unused*/, L_6, (Object_t67 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		RectTransform_t70 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t360_il2cpp_TypeInfo_var);
		RectTransformUtility_FlipLayoutAxes_m1932(NULL /*static, unused*/, L_8, 0, 1, /*hidden argument*/NULL);
	}

IL_003b:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_10 = V_0;
		RectTransform_t70 * L_11 = ___rect;
		NullCheck(L_11);
		int32_t L_12 = Transform_get_childCount_m281(L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}

IL_004b:
	{
		RectTransform_t70 * L_13 = ___rect;
		RectTransform_t70 * L_14 = ___rect;
		NullCheck(L_14);
		Vector2_t38  L_15 = RectTransform_get_pivot_m1791(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t360_il2cpp_TypeInfo_var);
		Vector2_t38  L_16 = RectTransformUtility_GetTransposed_m3087(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		RectTransform_set_pivot_m1902(L_13, L_16, /*hidden argument*/NULL);
		RectTransform_t70 * L_17 = ___rect;
		RectTransform_t70 * L_18 = ___rect;
		NullCheck(L_18);
		Vector2_t38  L_19 = RectTransform_get_sizeDelta_m1897(L_18, /*hidden argument*/NULL);
		Vector2_t38  L_20 = RectTransformUtility_GetTransposed_m3087(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		RectTransform_set_sizeDelta_m1797(L_17, L_20, /*hidden argument*/NULL);
		bool L_21 = ___keepPositioning;
		if (!L_21)
		{
			goto IL_0074;
		}
	}
	{
		return;
	}

IL_0074:
	{
		RectTransform_t70 * L_22 = ___rect;
		RectTransform_t70 * L_23 = ___rect;
		NullCheck(L_23);
		Vector2_t38  L_24 = RectTransform_get_anchoredPosition_m1896(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t360_il2cpp_TypeInfo_var);
		Vector2_t38  L_25 = RectTransformUtility_GetTransposed_m3087(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		RectTransform_set_anchoredPosition_m1901(L_22, L_25, /*hidden argument*/NULL);
		RectTransform_t70 * L_26 = ___rect;
		RectTransform_t70 * L_27 = ___rect;
		NullCheck(L_27);
		Vector2_t38  L_28 = RectTransform_get_anchorMin_m1795(L_27, /*hidden argument*/NULL);
		Vector2_t38  L_29 = RectTransformUtility_GetTransposed_m3087(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		RectTransform_set_anchorMin_m1900(L_26, L_29, /*hidden argument*/NULL);
		RectTransform_t70 * L_30 = ___rect;
		RectTransform_t70 * L_31 = ___rect;
		NullCheck(L_31);
		Vector2_t38  L_32 = RectTransform_get_anchorMax_m1895(L_31, /*hidden argument*/NULL);
		Vector2_t38  L_33 = RectTransformUtility_GetTransposed_m3087(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		NullCheck(L_30);
		RectTransform_set_anchorMax_m1796(L_30, L_33, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::GetTransposed(UnityEngine.Vector2)
extern "C" Vector2_t38  RectTransformUtility_GetTransposed_m3087 (Object_t * __this /* static, unused */, Vector2_t38  ___input, const MethodInfo* method)
{
	{
		float L_0 = ((&___input)->___y_2);
		float L_1 = ((&___input)->___x_1);
		Vector2_t38  L_2 = {0};
		Vector2__ctor_m306(&L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Networking.Match.Request
#include "UnityEngine_UnityEngine_Networking_Match_Request.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.Request
#include "UnityEngine_UnityEngine_Networking_Match_RequestMethodDeclarations.h"

// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"


// System.Void UnityEngine.Networking.Match.Request::.ctor()
extern "C" void Request__ctor_m3088 (Request_t598 * __this, const MethodInfo* method)
{
	{
		__this->___version_0 = 1;
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Match.Request::get_sourceId()
extern "C" uint64_t Request_get_sourceId_m3089 (Request_t598 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CsourceIdU3Ek__BackingField_1);
		return L_0;
	}
}
// UnityEngine.Networking.Types.AppID UnityEngine.Networking.Match.Request::get_appId()
extern "C" uint64_t Request_get_appId_m3090 (Request_t598 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CappIdU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.Networking.Match.Request::get_domain()
extern "C" int32_t Request_get_domain_m3091 (Request_t598 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CdomainU3Ek__BackingField_3);
		return L_0;
	}
}
// System.String UnityEngine.Networking.Match.Request::ToString()
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t616_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t615_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t75_il2cpp_TypeInfo_var;
extern "C" String_t* Request_ToString_m3092 (Request_t598 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		SourceID_t616_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(998);
		AppID_t615_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(999);
		Int32_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t73* L_0 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = Object_ToString_m380(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t73* L_2 = L_0;
		uint64_t L_3 = Request_get_sourceId_m3089(__this, /*hidden argument*/NULL);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(SourceID_t616_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m3562(L_5, (String_t*) &_stringLiteral246, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t73* L_7 = L_2;
		uint64_t L_8 = Request_get_appId_m3090(__this, /*hidden argument*/NULL);
		uint64_t L_9 = L_8;
		Object_t * L_10 = Box(AppID_t615_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_10);
		String_t* L_11 = Enum_ToString_m3562(L_10, (String_t*) &_stringLiteral246, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t73* L_12 = L_7;
		int32_t L_13 = Request_get_domain_m3091(__this, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(Int32_t75_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m2796(NULL /*static, unused*/, (String_t*) &_stringLiteral245, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBase.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBaseMethodDeclarations.h"

// System.FormatException
#include "mscorlib_System_FormatException.h"
// System.UInt64
#include "mscorlib_System_UInt64.h"
// System.FormatException
#include "mscorlib_System_FormatExceptionMethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"


// System.Void UnityEngine.Networking.Match.ResponseBase::.ctor()
extern "C" void ResponseBase__ctor_m3093 (ResponseBase_t599 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.Match.ResponseBase::Parse(System.Object)
// System.String UnityEngine.Networking.Match.ResponseBase::ParseJSONString(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern TypeInfo* IDictionary_2_t716_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t750_il2cpp_TypeInfo_var;
extern "C" String_t* ResponseBase_ParseJSONString_m3094 (ResponseBase_t599 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1000);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		FormatException_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1001);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t716_il2cpp_TypeInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		return ((String_t*)IsInst(L_3, String_t_il2cpp_TypeInfo_var));
	}

IL_0015:
	{
		String_t* L_4 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m351(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral247, /*hidden argument*/NULL);
		FormatException_t750 * L_6 = (FormatException_t750 *)il2cpp_codegen_object_new (FormatException_t750_il2cpp_TypeInfo_var);
		FormatException__ctor_m3563(L_6, L_5, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}
}
// System.Int32 UnityEngine.Networking.Match.ResponseBase::ParseJSONInt32(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern TypeInfo* IDictionary_2_t716_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t744_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t750_il2cpp_TypeInfo_var;
extern "C" int32_t ResponseBase_ParseJSONInt32_m3095 (ResponseBase_t599 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1000);
		Convert_t744_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(965);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		FormatException_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1001);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t716_il2cpp_TypeInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t744_il2cpp_TypeInfo_var);
		int32_t L_4 = Convert_ToInt32_m3564(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m351(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral247, /*hidden argument*/NULL);
		FormatException_t750 * L_7 = (FormatException_t750 *)il2cpp_codegen_object_new (FormatException_t750_il2cpp_TypeInfo_var);
		FormatException__ctor_m3563(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// System.UInt16 UnityEngine.Networking.Match.ResponseBase::ParseJSONUInt16(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern TypeInfo* IDictionary_2_t716_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t744_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t750_il2cpp_TypeInfo_var;
extern "C" uint16_t ResponseBase_ParseJSONUInt16_m3096 (ResponseBase_t599 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1000);
		Convert_t744_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(965);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		FormatException_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1001);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t716_il2cpp_TypeInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t744_il2cpp_TypeInfo_var);
		uint16_t L_4 = Convert_ToUInt16_m3565(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m351(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral247, /*hidden argument*/NULL);
		FormatException_t750 * L_7 = (FormatException_t750 *)il2cpp_codegen_object_new (FormatException_t750_il2cpp_TypeInfo_var);
		FormatException__ctor_m3563(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// System.UInt64 UnityEngine.Networking.Match.ResponseBase::ParseJSONUInt64(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern TypeInfo* IDictionary_2_t716_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t744_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t750_il2cpp_TypeInfo_var;
extern "C" uint64_t ResponseBase_ParseJSONUInt64_m3097 (ResponseBase_t599 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1000);
		Convert_t744_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(965);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		FormatException_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1001);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t716_il2cpp_TypeInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t744_il2cpp_TypeInfo_var);
		uint64_t L_4 = Convert_ToUInt64_m3566(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m351(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral247, /*hidden argument*/NULL);
		FormatException_t750 * L_7 = (FormatException_t750 *)il2cpp_codegen_object_new (FormatException_t750_il2cpp_TypeInfo_var);
		FormatException__ctor_m3563(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// System.Boolean UnityEngine.Networking.Match.ResponseBase::ParseJSONBool(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern TypeInfo* IDictionary_2_t716_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t744_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t750_il2cpp_TypeInfo_var;
extern "C" bool ResponseBase_ParseJSONBool_m3098 (ResponseBase_t599 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1000);
		Convert_t744_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(965);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		FormatException_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1001);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t716_il2cpp_TypeInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t744_il2cpp_TypeInfo_var);
		bool L_4 = Convert_ToBoolean_m3567(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m351(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral247, /*hidden argument*/NULL);
		FormatException_t750 * L_7 = (FormatException_t750 *)il2cpp_codegen_object_new (FormatException_t750_il2cpp_TypeInfo_var);
		FormatException__ctor_m3563(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// UnityEngine.Networking.Match.Response
#include "UnityEngine_UnityEngine_Networking_Match_Response.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.Response
#include "UnityEngine_UnityEngine_Networking_Match_ResponseMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.Response::.ctor()
extern "C" void Response__ctor_m3099 (Response_t600 * __this, const MethodInfo* method)
{
	{
		ResponseBase__ctor_m3093(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.Response::get_success()
extern "C" bool Response_get_success_m3100 (Response_t600 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CsuccessU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.Response::set_success(System.Boolean)
extern "C" void Response_set_success_m3101 (Response_t600 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CsuccessU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.Response::get_extendedInfo()
extern "C" String_t* Response_get_extendedInfo_m3102 (Response_t600 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CextendedInfoU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.Response::set_extendedInfo(System.String)
extern "C" void Response_set_extendedInfo_m3103 (Response_t600 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CextendedInfoU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.Response::ToString()
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t111_il2cpp_TypeInfo_var;
extern "C" String_t* Response_ToString_m3104 (Response_t600 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		Boolean_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t73* L_0 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Object_ToString_m380(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t73* L_2 = L_0;
		bool L_3 = Response_get_success_m3100(__this, /*hidden argument*/NULL);
		bool L_4 = L_3;
		Object_t * L_5 = Box(Boolean_t111_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t73* L_6 = L_2;
		String_t* L_7 = Response_get_extendedInfo_m3102(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m2796(NULL /*static, unused*/, (String_t*) &_stringLiteral248, L_6, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void UnityEngine.Networking.Match.Response::Parse(System.Object)
extern TypeInfo* IDictionary_2_t716_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t750_il2cpp_TypeInfo_var;
extern "C" void Response_Parse_m3105 (Response_t600 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1000);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		FormatException_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1001);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((Object_t*)IsInst(L_0, IDictionary_2_t716_il2cpp_TypeInfo_var));
		Object_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		Object_t * L_2 = ___obj;
		Object_t* L_3 = V_0;
		bool L_4 = ResponseBase_ParseJSONBool_m3098(__this, (String_t*) &_stringLiteral249, L_2, L_3, /*hidden argument*/NULL);
		Response_set_success_m3101(__this, L_4, /*hidden argument*/NULL);
		Object_t * L_5 = ___obj;
		Object_t* L_6 = V_0;
		String_t* L_7 = ResponseBase_ParseJSONString_m3094(__this, (String_t*) &_stringLiteral250, L_5, L_6, /*hidden argument*/NULL);
		Response_set_extendedInfo_m3103(__this, L_7, /*hidden argument*/NULL);
		bool L_8 = Response_get_success_m3100(__this, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0054;
		}
	}
	{
		String_t* L_9 = Response_get_extendedInfo_m3102(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m351(NULL /*static, unused*/, (String_t*) &_stringLiteral251, L_9, /*hidden argument*/NULL);
		FormatException_t750 * L_11 = (FormatException_t750 *)il2cpp_codegen_object_new (FormatException_t750_il2cpp_TypeInfo_var);
		FormatException__ctor_m3563(L_11, L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0054:
	{
		return;
	}
}
// UnityEngine.Networking.Match.BasicResponse
#include "UnityEngine_UnityEngine_Networking_Match_BasicResponse.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.BasicResponse
#include "UnityEngine_UnityEngine_Networking_Match_BasicResponseMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.BasicResponse::.ctor()
extern "C" void BasicResponse__ctor_m3106 (BasicResponse_t601 * __this, const MethodInfo* method)
{
	{
		Response__ctor_m3099(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Match.CreateMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.CreateMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchRequestMethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_7.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_7MethodDeclarations.h"


// System.Void UnityEngine.Networking.Match.CreateMatchRequest::.ctor()
extern "C" void CreateMatchRequest__ctor_m3107 (CreateMatchRequest_t603 * __this, const MethodInfo* method)
{
	{
		Request__ctor_m3088(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_name()
extern "C" String_t* CreateMatchRequest_get_name_m3108 (CreateMatchRequest_t603 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_name(System.String)
extern "C" void CreateMatchRequest_set_name_m3109 (CreateMatchRequest_t603 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.UInt32 UnityEngine.Networking.Match.CreateMatchRequest::get_size()
extern "C" uint32_t CreateMatchRequest_get_size_m3110 (CreateMatchRequest_t603 * __this, const MethodInfo* method)
{
	{
		uint32_t L_0 = (__this->___U3CsizeU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_size(System.UInt32)
extern "C" void CreateMatchRequest_set_size_m3111 (CreateMatchRequest_t603 * __this, uint32_t ___value, const MethodInfo* method)
{
	{
		uint32_t L_0 = ___value;
		__this->___U3CsizeU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.CreateMatchRequest::get_advertise()
extern "C" bool CreateMatchRequest_get_advertise_m3112 (CreateMatchRequest_t603 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CadvertiseU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_advertise(System.Boolean)
extern "C" void CreateMatchRequest_set_advertise_m3113 (CreateMatchRequest_t603 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CadvertiseU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_password()
extern "C" String_t* CreateMatchRequest_get_password_m3114 (CreateMatchRequest_t603 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CpasswordU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_password(System.String)
extern "C" void CreateMatchRequest_set_password_m3115 (CreateMatchRequest_t603 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CpasswordU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.CreateMatchRequest::get_matchAttributes()
extern "C" Dictionary_2_t602 * CreateMatchRequest_get_matchAttributes_m3116 (CreateMatchRequest_t603 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t602 * L_0 = (__this->___U3CmatchAttributesU3Ek__BackingField_8);
		return L_0;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::ToString()
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32_t751_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t111_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t75_il2cpp_TypeInfo_var;
extern "C" String_t* CreateMatchRequest_ToString_m3117 (CreateMatchRequest_t603 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		UInt32_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1002);
		Boolean_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		Int32_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t73* G_B2_1 = {0};
	ObjectU5BU5D_t73* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t73* G_B1_1 = {0};
	ObjectU5BU5D_t73* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t73* G_B3_2 = {0};
	ObjectU5BU5D_t73* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t73* G_B5_1 = {0};
	ObjectU5BU5D_t73* G_B5_2 = {0};
	String_t* G_B5_3 = {0};
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t73* G_B4_1 = {0};
	ObjectU5BU5D_t73* G_B4_2 = {0};
	String_t* G_B4_3 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t73* G_B6_2 = {0};
	ObjectU5BU5D_t73* G_B6_3 = {0};
	String_t* G_B6_4 = {0};
	{
		ObjectU5BU5D_t73* L_0 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Request_ToString_m3092(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t73* L_2 = L_0;
		String_t* L_3 = CreateMatchRequest_get_name_m3108(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t73* L_4 = L_2;
		uint32_t L_5 = CreateMatchRequest_get_size_m3110(__this, /*hidden argument*/NULL);
		uint32_t L_6 = L_5;
		Object_t * L_7 = Box(UInt32_t751_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t73* L_8 = L_4;
		bool L_9 = CreateMatchRequest_get_advertise_m3112(__this, /*hidden argument*/NULL);
		bool L_10 = L_9;
		Object_t * L_11 = Box(Boolean_t111_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_11;
		ObjectU5BU5D_t73* L_12 = L_8;
		String_t* L_13 = CreateMatchRequest_get_password_m3114(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_15 = String_op_Equality_m334(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		G_B1_0 = 4;
		G_B1_1 = L_12;
		G_B1_2 = L_12;
		G_B1_3 = (String_t*) &_stringLiteral252;
		if (!L_15)
		{
			G_B2_0 = 4;
			G_B2_1 = L_12;
			G_B2_2 = L_12;
			G_B2_3 = (String_t*) &_stringLiteral252;
			goto IL_005a;
		}
	}
	{
		G_B3_0 = (String_t*) &_stringLiteral253;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_005f;
	}

IL_005a:
	{
		G_B3_0 = (String_t*) &_stringLiteral254;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_005f:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)G_B3_0;
		ObjectU5BU5D_t73* L_16 = G_B3_3;
		Dictionary_2_t602 * L_17 = CreateMatchRequest_get_matchAttributes_m3116(__this, /*hidden argument*/NULL);
		G_B4_0 = 5;
		G_B4_1 = L_16;
		G_B4_2 = L_16;
		G_B4_3 = G_B3_4;
		if (L_17)
		{
			G_B5_0 = 5;
			G_B5_1 = L_16;
			G_B5_2 = L_16;
			G_B5_3 = G_B3_4;
			goto IL_0073;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_007e;
	}

IL_0073:
	{
		Dictionary_2_t602 * L_18 = CreateMatchRequest_get_matchAttributes_m3116(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count() */, L_18);
		G_B6_0 = L_19;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_007e:
	{
		int32_t L_20 = G_B6_0;
		Object_t * L_21 = Box(Int32_t75_il2cpp_TypeInfo_var, &L_20);
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B6_2, G_B6_1)) = (Object_t *)L_21;
		String_t* L_22 = UnityString_Format_m2796(NULL /*static, unused*/, G_B6_4, G_B6_3, /*hidden argument*/NULL);
		return L_22;
	}
}
// UnityEngine.Networking.Match.CreateMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchResponse.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.CreateMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchResponseMethodDeclarations.h"

// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"


// System.Void UnityEngine.Networking.Match.CreateMatchResponse::.ctor()
extern "C" void CreateMatchResponse__ctor_m3118 (CreateMatchResponse_t604 * __this, const MethodInfo* method)
{
	{
		BasicResponse__ctor_m3106(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchResponse::get_address()
extern "C" String_t* CreateMatchResponse_get_address_m3119 (CreateMatchResponse_t604 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaddressU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_address(System.String)
extern "C" void CreateMatchResponse_set_address_m3120 (CreateMatchResponse_t604 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaddressU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.CreateMatchResponse::get_port()
extern "C" int32_t CreateMatchResponse_get_port_m3121 (CreateMatchResponse_t604 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CportU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_port(System.Int32)
extern "C" void CreateMatchResponse_set_port_m3122 (CreateMatchResponse_t604 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CportU3Ek__BackingField_3 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.CreateMatchResponse::get_networkId()
extern "C" uint64_t CreateMatchResponse_get_networkId_m3123 (CreateMatchResponse_t604 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void CreateMatchResponse_set_networkId_m3124 (CreateMatchResponse_t604 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchResponse::get_accessTokenString()
extern "C" String_t* CreateMatchResponse_get_accessTokenString_m3125 (CreateMatchResponse_t604 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaccessTokenStringU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_accessTokenString(System.String)
extern "C" void CreateMatchResponse_set_accessTokenString_m3126 (CreateMatchResponse_t604 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaccessTokenStringU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.CreateMatchResponse::get_nodeId()
extern "C" uint16_t CreateMatchResponse_get_nodeId_m3127 (CreateMatchResponse_t604 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void CreateMatchResponse_set_nodeId_m3128 (CreateMatchResponse_t604 * __this, uint16_t ___value, const MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.CreateMatchResponse::get_usingRelay()
extern "C" bool CreateMatchResponse_get_usingRelay_m3129 (CreateMatchResponse_t604 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CusingRelayU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_usingRelay(System.Boolean)
extern "C" void CreateMatchResponse_set_usingRelay_m3130 (CreateMatchResponse_t604 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CusingRelayU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchResponse::ToString()
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t75_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t617_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t618_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t111_il2cpp_TypeInfo_var;
extern "C" String_t* CreateMatchResponse_ToString_m3131 (CreateMatchResponse_t604 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		Int32_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		NetworkID_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1003);
		NodeID_t618_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1004);
		Boolean_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t73* L_0 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Response_ToString_m3104(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t73* L_2 = L_0;
		String_t* L_3 = CreateMatchResponse_get_address_m3119(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t73* L_4 = L_2;
		int32_t L_5 = CreateMatchResponse_get_port_m3121(__this, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t75_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t73* L_8 = L_4;
		uint64_t L_9 = CreateMatchResponse_get_networkId_m3123(__this, /*hidden argument*/NULL);
		uint64_t L_10 = L_9;
		Object_t * L_11 = Box(NetworkID_t617_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_11);
		String_t* L_12 = Enum_ToString_m3562(L_11, (String_t*) &_stringLiteral246, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_12;
		ObjectU5BU5D_t73* L_13 = L_8;
		uint16_t L_14 = CreateMatchResponse_get_nodeId_m3127(__this, /*hidden argument*/NULL);
		uint16_t L_15 = L_14;
		Object_t * L_16 = Box(NodeID_t618_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_16);
		String_t* L_17 = Enum_ToString_m3562(L_16, (String_t*) &_stringLiteral246, /*hidden argument*/NULL);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 4)) = (Object_t *)L_17;
		ObjectU5BU5D_t73* L_18 = L_13;
		bool L_19 = CreateMatchResponse_get_usingRelay_m3129(__this, /*hidden argument*/NULL);
		bool L_20 = L_19;
		Object_t * L_21 = Box(Boolean_t111_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 5);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 5)) = (Object_t *)L_21;
		String_t* L_22 = UnityString_Format_m2796(NULL /*static, unused*/, (String_t*) &_stringLiteral255, L_18, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::Parse(System.Object)
extern TypeInfo* IDictionary_2_t716_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t750_il2cpp_TypeInfo_var;
extern "C" void CreateMatchResponse_Parse_m3132 (CreateMatchResponse_t604 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1000);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		FormatException_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1001);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		Response_Parse_m3105(__this, L_0, /*hidden argument*/NULL);
		Object_t * L_1 = ___obj;
		V_0 = ((Object_t*)IsInst(L_1, IDictionary_2_t716_il2cpp_TypeInfo_var));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_008b;
		}
	}
	{
		Object_t * L_3 = ___obj;
		Object_t* L_4 = V_0;
		String_t* L_5 = ResponseBase_ParseJSONString_m3094(__this, (String_t*) &_stringLiteral256, L_3, L_4, /*hidden argument*/NULL);
		CreateMatchResponse_set_address_m3120(__this, L_5, /*hidden argument*/NULL);
		Object_t * L_6 = ___obj;
		Object_t* L_7 = V_0;
		int32_t L_8 = ResponseBase_ParseJSONInt32_m3095(__this, (String_t*) &_stringLiteral257, L_6, L_7, /*hidden argument*/NULL);
		CreateMatchResponse_set_port_m3122(__this, L_8, /*hidden argument*/NULL);
		Object_t * L_9 = ___obj;
		Object_t* L_10 = V_0;
		uint64_t L_11 = ResponseBase_ParseJSONUInt64_m3097(__this, (String_t*) &_stringLiteral258, L_9, L_10, /*hidden argument*/NULL);
		CreateMatchResponse_set_networkId_m3124(__this, L_11, /*hidden argument*/NULL);
		Object_t * L_12 = ___obj;
		Object_t* L_13 = V_0;
		String_t* L_14 = ResponseBase_ParseJSONString_m3094(__this, (String_t*) &_stringLiteral259, L_12, L_13, /*hidden argument*/NULL);
		CreateMatchResponse_set_accessTokenString_m3126(__this, L_14, /*hidden argument*/NULL);
		Object_t * L_15 = ___obj;
		Object_t* L_16 = V_0;
		uint16_t L_17 = ResponseBase_ParseJSONUInt16_m3096(__this, (String_t*) &_stringLiteral260, L_15, L_16, /*hidden argument*/NULL);
		CreateMatchResponse_set_nodeId_m3128(__this, L_17, /*hidden argument*/NULL);
		Object_t * L_18 = ___obj;
		Object_t* L_19 = V_0;
		bool L_20 = ResponseBase_ParseJSONBool_m3098(__this, (String_t*) &_stringLiteral261, L_18, L_19, /*hidden argument*/NULL);
		CreateMatchResponse_set_usingRelay_m3130(__this, L_20, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_008b:
	{
		Object_t * L_21 = ___obj;
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m351(NULL /*static, unused*/, (String_t*) &_stringLiteral262, L_22, /*hidden argument*/NULL);
		FormatException_t750 * L_24 = (FormatException_t750 *)il2cpp_codegen_object_new (FormatException_t750_il2cpp_TypeInfo_var);
		FormatException__ctor_m3563(L_24, L_23, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_00a1:
	{
		return;
	}
}
// UnityEngine.Networking.Match.JoinMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.JoinMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchRequestMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.JoinMatchRequest::.ctor()
extern "C" void JoinMatchRequest__ctor_m3133 (JoinMatchRequest_t605 * __this, const MethodInfo* method)
{
	{
		Request__ctor_m3088(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchRequest::get_networkId()
extern "C" uint64_t JoinMatchRequest_get_networkId_m3134 (JoinMatchRequest_t605 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void JoinMatchRequest_set_networkId_m3135 (JoinMatchRequest_t605 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchRequest::get_password()
extern "C" String_t* JoinMatchRequest_get_password_m3136 (JoinMatchRequest_t605 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CpasswordU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_password(System.String)
extern "C" void JoinMatchRequest_set_password_m3137 (JoinMatchRequest_t605 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CpasswordU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchRequest::ToString()
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t617_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* JoinMatchRequest_ToString_m3138 (JoinMatchRequest_t605 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		NetworkID_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1003);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t73* G_B2_1 = {0};
	ObjectU5BU5D_t73* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t73* G_B1_1 = {0};
	ObjectU5BU5D_t73* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t73* G_B3_2 = {0};
	ObjectU5BU5D_t73* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	{
		ObjectU5BU5D_t73* L_0 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Request_ToString_m3092(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t73* L_2 = L_0;
		uint64_t L_3 = JoinMatchRequest_get_networkId_m3134(__this, /*hidden argument*/NULL);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(NetworkID_t617_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m3562(L_5, (String_t*) &_stringLiteral246, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t73* L_7 = L_2;
		String_t* L_8 = JoinMatchRequest_get_password_m3136(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_10 = String_op_Equality_m334(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		G_B1_0 = 2;
		G_B1_1 = L_7;
		G_B1_2 = L_7;
		G_B1_3 = (String_t*) &_stringLiteral263;
		if (!L_10)
		{
			G_B2_0 = 2;
			G_B2_1 = L_7;
			G_B2_2 = L_7;
			G_B2_3 = (String_t*) &_stringLiteral263;
			goto IL_004d;
		}
	}
	{
		G_B3_0 = (String_t*) &_stringLiteral253;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0052;
	}

IL_004d:
	{
		G_B3_0 = (String_t*) &_stringLiteral254;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0052:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)G_B3_0;
		String_t* L_11 = UnityString_Format_m2796(NULL /*static, unused*/, G_B3_4, G_B3_3, /*hidden argument*/NULL);
		return L_11;
	}
}
// UnityEngine.Networking.Match.JoinMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchResponse.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.JoinMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchResponseMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.JoinMatchResponse::.ctor()
extern "C" void JoinMatchResponse__ctor_m3139 (JoinMatchResponse_t606 * __this, const MethodInfo* method)
{
	{
		BasicResponse__ctor_m3106(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchResponse::get_address()
extern "C" String_t* JoinMatchResponse_get_address_m3140 (JoinMatchResponse_t606 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaddressU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_address(System.String)
extern "C" void JoinMatchResponse_set_address_m3141 (JoinMatchResponse_t606 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaddressU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.JoinMatchResponse::get_port()
extern "C" int32_t JoinMatchResponse_get_port_m3142 (JoinMatchResponse_t606 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CportU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_port(System.Int32)
extern "C" void JoinMatchResponse_set_port_m3143 (JoinMatchResponse_t606 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CportU3Ek__BackingField_3 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchResponse::get_networkId()
extern "C" uint64_t JoinMatchResponse_get_networkId_m3144 (JoinMatchResponse_t606 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void JoinMatchResponse_set_networkId_m3145 (JoinMatchResponse_t606 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchResponse::get_accessTokenString()
extern "C" String_t* JoinMatchResponse_get_accessTokenString_m3146 (JoinMatchResponse_t606 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaccessTokenStringU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_accessTokenString(System.String)
extern "C" void JoinMatchResponse_set_accessTokenString_m3147 (JoinMatchResponse_t606 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaccessTokenStringU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.JoinMatchResponse::get_nodeId()
extern "C" uint16_t JoinMatchResponse_get_nodeId_m3148 (JoinMatchResponse_t606 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void JoinMatchResponse_set_nodeId_m3149 (JoinMatchResponse_t606 * __this, uint16_t ___value, const MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.JoinMatchResponse::get_usingRelay()
extern "C" bool JoinMatchResponse_get_usingRelay_m3150 (JoinMatchResponse_t606 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CusingRelayU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_usingRelay(System.Boolean)
extern "C" void JoinMatchResponse_set_usingRelay_m3151 (JoinMatchResponse_t606 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CusingRelayU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchResponse::ToString()
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t75_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t617_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t618_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t111_il2cpp_TypeInfo_var;
extern "C" String_t* JoinMatchResponse_ToString_m3152 (JoinMatchResponse_t606 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		Int32_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		NetworkID_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1003);
		NodeID_t618_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1004);
		Boolean_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t73* L_0 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Response_ToString_m3104(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t73* L_2 = L_0;
		String_t* L_3 = JoinMatchResponse_get_address_m3140(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t73* L_4 = L_2;
		int32_t L_5 = JoinMatchResponse_get_port_m3142(__this, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t75_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t73* L_8 = L_4;
		uint64_t L_9 = JoinMatchResponse_get_networkId_m3144(__this, /*hidden argument*/NULL);
		uint64_t L_10 = L_9;
		Object_t * L_11 = Box(NetworkID_t617_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_11);
		String_t* L_12 = Enum_ToString_m3562(L_11, (String_t*) &_stringLiteral246, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_12;
		ObjectU5BU5D_t73* L_13 = L_8;
		uint16_t L_14 = JoinMatchResponse_get_nodeId_m3148(__this, /*hidden argument*/NULL);
		uint16_t L_15 = L_14;
		Object_t * L_16 = Box(NodeID_t618_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_16);
		String_t* L_17 = Enum_ToString_m3562(L_16, (String_t*) &_stringLiteral246, /*hidden argument*/NULL);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 4)) = (Object_t *)L_17;
		ObjectU5BU5D_t73* L_18 = L_13;
		bool L_19 = JoinMatchResponse_get_usingRelay_m3150(__this, /*hidden argument*/NULL);
		bool L_20 = L_19;
		Object_t * L_21 = Box(Boolean_t111_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 5);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 5)) = (Object_t *)L_21;
		String_t* L_22 = UnityString_Format_m2796(NULL /*static, unused*/, (String_t*) &_stringLiteral255, L_18, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::Parse(System.Object)
extern TypeInfo* IDictionary_2_t716_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t750_il2cpp_TypeInfo_var;
extern "C" void JoinMatchResponse_Parse_m3153 (JoinMatchResponse_t606 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1000);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		FormatException_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1001);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		Response_Parse_m3105(__this, L_0, /*hidden argument*/NULL);
		Object_t * L_1 = ___obj;
		V_0 = ((Object_t*)IsInst(L_1, IDictionary_2_t716_il2cpp_TypeInfo_var));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_008b;
		}
	}
	{
		Object_t * L_3 = ___obj;
		Object_t* L_4 = V_0;
		String_t* L_5 = ResponseBase_ParseJSONString_m3094(__this, (String_t*) &_stringLiteral256, L_3, L_4, /*hidden argument*/NULL);
		JoinMatchResponse_set_address_m3141(__this, L_5, /*hidden argument*/NULL);
		Object_t * L_6 = ___obj;
		Object_t* L_7 = V_0;
		int32_t L_8 = ResponseBase_ParseJSONInt32_m3095(__this, (String_t*) &_stringLiteral257, L_6, L_7, /*hidden argument*/NULL);
		JoinMatchResponse_set_port_m3143(__this, L_8, /*hidden argument*/NULL);
		Object_t * L_9 = ___obj;
		Object_t* L_10 = V_0;
		uint64_t L_11 = ResponseBase_ParseJSONUInt64_m3097(__this, (String_t*) &_stringLiteral258, L_9, L_10, /*hidden argument*/NULL);
		JoinMatchResponse_set_networkId_m3145(__this, L_11, /*hidden argument*/NULL);
		Object_t * L_12 = ___obj;
		Object_t* L_13 = V_0;
		String_t* L_14 = ResponseBase_ParseJSONString_m3094(__this, (String_t*) &_stringLiteral259, L_12, L_13, /*hidden argument*/NULL);
		JoinMatchResponse_set_accessTokenString_m3147(__this, L_14, /*hidden argument*/NULL);
		Object_t * L_15 = ___obj;
		Object_t* L_16 = V_0;
		uint16_t L_17 = ResponseBase_ParseJSONUInt16_m3096(__this, (String_t*) &_stringLiteral260, L_15, L_16, /*hidden argument*/NULL);
		JoinMatchResponse_set_nodeId_m3149(__this, L_17, /*hidden argument*/NULL);
		Object_t * L_18 = ___obj;
		Object_t* L_19 = V_0;
		bool L_20 = ResponseBase_ParseJSONBool_m3098(__this, (String_t*) &_stringLiteral261, L_18, L_19, /*hidden argument*/NULL);
		JoinMatchResponse_set_usingRelay_m3151(__this, L_20, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_008b:
	{
		Object_t * L_21 = ___obj;
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m351(NULL /*static, unused*/, (String_t*) &_stringLiteral262, L_22, /*hidden argument*/NULL);
		FormatException_t750 * L_24 = (FormatException_t750 *)il2cpp_codegen_object_new (FormatException_t750_il2cpp_TypeInfo_var);
		FormatException__ctor_m3563(L_24, L_23, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_00a1:
	{
		return;
	}
}
// UnityEngine.Networking.Match.DestroyMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_DestroyMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.DestroyMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_DestroyMatchRequestMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.DestroyMatchRequest::.ctor()
extern "C" void DestroyMatchRequest__ctor_m3154 (DestroyMatchRequest_t607 * __this, const MethodInfo* method)
{
	{
		Request__ctor_m3088(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DestroyMatchRequest::get_networkId()
extern "C" uint64_t DestroyMatchRequest_get_networkId_m3155 (DestroyMatchRequest_t607 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.DestroyMatchRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void DestroyMatchRequest_set_networkId_m3156 (DestroyMatchRequest_t607 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.DestroyMatchRequest::ToString()
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t617_il2cpp_TypeInfo_var;
extern "C" String_t* DestroyMatchRequest_ToString_m3157 (DestroyMatchRequest_t607 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		NetworkID_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1003);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t73* L_0 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = Request_ToString_m3092(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t73* L_2 = L_0;
		uint64_t L_3 = DestroyMatchRequest_get_networkId_m3155(__this, /*hidden argument*/NULL);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(NetworkID_t617_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m3562(L_5, (String_t*) &_stringLiteral246, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		String_t* L_7 = UnityString_Format_m2796(NULL /*static, unused*/, (String_t*) &_stringLiteral264, L_2, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.Networking.Match.DropConnectionRequest
#include "UnityEngine_UnityEngine_Networking_Match_DropConnectionReque.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.DropConnectionRequest
#include "UnityEngine_UnityEngine_Networking_Match_DropConnectionRequeMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.DropConnectionRequest::.ctor()
extern "C" void DropConnectionRequest__ctor_m3158 (DropConnectionRequest_t608 * __this, const MethodInfo* method)
{
	{
		Request__ctor_m3088(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DropConnectionRequest::get_networkId()
extern "C" uint64_t DropConnectionRequest_get_networkId_m3159 (DropConnectionRequest_t608 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void DropConnectionRequest_set_networkId_m3160 (DropConnectionRequest_t608 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.DropConnectionRequest::get_nodeId()
extern "C" uint16_t DropConnectionRequest_get_nodeId_m3161 (DropConnectionRequest_t608 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void DropConnectionRequest_set_nodeId_m3162 (DropConnectionRequest_t608 * __this, uint16_t ___value, const MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.DropConnectionRequest::ToString()
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t617_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t618_il2cpp_TypeInfo_var;
extern "C" String_t* DropConnectionRequest_ToString_m3163 (DropConnectionRequest_t608 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		NetworkID_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1003);
		NodeID_t618_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1004);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t73* L_0 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Request_ToString_m3092(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t73* L_2 = L_0;
		uint64_t L_3 = DropConnectionRequest_get_networkId_m3159(__this, /*hidden argument*/NULL);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(NetworkID_t617_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m3562(L_5, (String_t*) &_stringLiteral246, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t73* L_7 = L_2;
		uint16_t L_8 = DropConnectionRequest_get_nodeId_m3161(__this, /*hidden argument*/NULL);
		uint16_t L_9 = L_8;
		Object_t * L_10 = Box(NodeID_t618_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_10);
		String_t* L_11 = Enum_ToString_m3562(L_10, (String_t*) &_stringLiteral246, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m2796(NULL /*static, unused*/, (String_t*) &_stringLiteral265, L_7, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.Networking.Match.ListMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.ListMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchRequestMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.ListMatchRequest::.ctor()
extern "C" void ListMatchRequest__ctor_m3164 (ListMatchRequest_t609 * __this, const MethodInfo* method)
{
	{
		Request__ctor_m3088(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageSize()
extern "C" int32_t ListMatchRequest_get_pageSize_m3165 (ListMatchRequest_t609 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CpageSizeU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageSize(System.Int32)
extern "C" void ListMatchRequest_set_pageSize_m3166 (ListMatchRequest_t609 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CpageSizeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageNum()
extern "C" int32_t ListMatchRequest_get_pageNum_m3167 (ListMatchRequest_t609 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CpageNumU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageNum(System.Int32)
extern "C" void ListMatchRequest_set_pageNum_m3168 (ListMatchRequest_t609 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CpageNumU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchRequest::get_nameFilter()
extern "C" String_t* ListMatchRequest_get_nameFilter_m3169 (ListMatchRequest_t609 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameFilterU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_nameFilter(System.String)
extern "C" void ListMatchRequest_set_nameFilter_m3170 (ListMatchRequest_t609 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameFilterU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterLessThan()
extern "C" Dictionary_2_t602 * ListMatchRequest_get_matchAttributeFilterLessThan_m3171 (ListMatchRequest_t609 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t602 * L_0 = (__this->___U3CmatchAttributeFilterLessThanU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterGreaterThan()
extern "C" Dictionary_2_t602 * ListMatchRequest_get_matchAttributeFilterGreaterThan_m3172 (ListMatchRequest_t609 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t602 * L_0 = (__this->___U3CmatchAttributeFilterGreaterThanU3Ek__BackingField_8);
		return L_0;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchRequest::ToString()
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t75_il2cpp_TypeInfo_var;
extern "C" String_t* ListMatchRequest_ToString_m3173 (ListMatchRequest_t609 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		Int32_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t73* G_B2_1 = {0};
	ObjectU5BU5D_t73* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t73* G_B1_1 = {0};
	ObjectU5BU5D_t73* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t73* G_B3_2 = {0};
	ObjectU5BU5D_t73* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t73* G_B5_1 = {0};
	ObjectU5BU5D_t73* G_B5_2 = {0};
	String_t* G_B5_3 = {0};
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t73* G_B4_1 = {0};
	ObjectU5BU5D_t73* G_B4_2 = {0};
	String_t* G_B4_3 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t73* G_B6_2 = {0};
	ObjectU5BU5D_t73* G_B6_3 = {0};
	String_t* G_B6_4 = {0};
	{
		ObjectU5BU5D_t73* L_0 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Request_ToString_m3092(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t73* L_2 = L_0;
		int32_t L_3 = ListMatchRequest_get_pageSize_m3165(__this, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(Int32_t75_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t73* L_6 = L_2;
		int32_t L_7 = ListMatchRequest_get_pageNum_m3167(__this, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		Object_t * L_9 = Box(Int32_t75_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_9;
		ObjectU5BU5D_t73* L_10 = L_6;
		String_t* L_11 = ListMatchRequest_get_nameFilter_m3169(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 3);
		ArrayElementTypeCheck (L_10, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 3)) = (Object_t *)L_11;
		ObjectU5BU5D_t73* L_12 = L_10;
		Dictionary_2_t602 * L_13 = ListMatchRequest_get_matchAttributeFilterLessThan_m3171(__this, /*hidden argument*/NULL);
		G_B1_0 = 4;
		G_B1_1 = L_12;
		G_B1_2 = L_12;
		G_B1_3 = (String_t*) &_stringLiteral266;
		if (L_13)
		{
			G_B2_0 = 4;
			G_B2_1 = L_12;
			G_B2_2 = L_12;
			G_B2_3 = (String_t*) &_stringLiteral266;
			goto IL_004c;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0057;
	}

IL_004c:
	{
		Dictionary_2_t602 * L_14 = ListMatchRequest_get_matchAttributeFilterLessThan_m3171(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count() */, L_14);
		G_B3_0 = L_15;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0057:
	{
		int32_t L_16 = G_B3_0;
		Object_t * L_17 = Box(Int32_t75_il2cpp_TypeInfo_var, &L_16);
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)L_17;
		ObjectU5BU5D_t73* L_18 = G_B3_3;
		Dictionary_2_t602 * L_19 = ListMatchRequest_get_matchAttributeFilterGreaterThan_m3172(__this, /*hidden argument*/NULL);
		G_B4_0 = 5;
		G_B4_1 = L_18;
		G_B4_2 = L_18;
		G_B4_3 = G_B3_4;
		if (L_19)
		{
			G_B5_0 = 5;
			G_B5_1 = L_18;
			G_B5_2 = L_18;
			G_B5_3 = G_B3_4;
			goto IL_0070;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_007b;
	}

IL_0070:
	{
		Dictionary_2_t602 * L_20 = ListMatchRequest_get_matchAttributeFilterGreaterThan_m3172(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		int32_t L_21 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count() */, L_20);
		G_B6_0 = L_21;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_007b:
	{
		int32_t L_22 = G_B6_0;
		Object_t * L_23 = Box(Int32_t75_il2cpp_TypeInfo_var, &L_22);
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, L_23);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B6_2, G_B6_1)) = (Object_t *)L_23;
		String_t* L_24 = UnityString_Format_m2796(NULL /*static, unused*/, G_B6_4, G_B6_3, /*hidden argument*/NULL);
		return L_24;
	}
}
// UnityEngine.Networking.Match.MatchDirectConnectInfo
#include "UnityEngine_UnityEngine_Networking_Match_MatchDirectConnectI.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.MatchDirectConnectInfo
#include "UnityEngine_UnityEngine_Networking_Match_MatchDirectConnectIMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::.ctor()
extern "C" void MatchDirectConnectInfo__ctor_m3174 (MatchDirectConnectInfo_t610 * __this, const MethodInfo* method)
{
	{
		ResponseBase__ctor_m3093(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDirectConnectInfo::get_nodeId()
extern "C" uint16_t MatchDirectConnectInfo_get_nodeId_m3175 (MatchDirectConnectInfo_t610 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void MatchDirectConnectInfo_set_nodeId_m3176 (MatchDirectConnectInfo_t610 * __this, uint16_t ___value, const MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::get_publicAddress()
extern "C" String_t* MatchDirectConnectInfo_get_publicAddress_m3177 (MatchDirectConnectInfo_t610 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CpublicAddressU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_publicAddress(System.String)
extern "C" void MatchDirectConnectInfo_set_publicAddress_m3178 (MatchDirectConnectInfo_t610 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CpublicAddressU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::get_privateAddress()
extern "C" String_t* MatchDirectConnectInfo_get_privateAddress_m3179 (MatchDirectConnectInfo_t610 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CprivateAddressU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_privateAddress(System.String)
extern "C" void MatchDirectConnectInfo_set_privateAddress_m3180 (MatchDirectConnectInfo_t610 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CprivateAddressU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::ToString()
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t618_il2cpp_TypeInfo_var;
extern "C" String_t* MatchDirectConnectInfo_ToString_m3181 (MatchDirectConnectInfo_t610 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		NodeID_t618_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1004);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t73* L_0 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = Object_ToString_m380(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t73* L_2 = L_0;
		uint16_t L_3 = MatchDirectConnectInfo_get_nodeId_m3175(__this, /*hidden argument*/NULL);
		uint16_t L_4 = L_3;
		Object_t * L_5 = Box(NodeID_t618_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t73* L_6 = L_2;
		String_t* L_7 = MatchDirectConnectInfo_get_publicAddress_m3177(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t73* L_8 = L_6;
		String_t* L_9 = MatchDirectConnectInfo_get_privateAddress_m3179(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_9;
		String_t* L_10 = UnityString_Format_m2796(NULL /*static, unused*/, (String_t*) &_stringLiteral267, L_8, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::Parse(System.Object)
extern TypeInfo* IDictionary_2_t716_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t750_il2cpp_TypeInfo_var;
extern "C" void MatchDirectConnectInfo_Parse_m3182 (MatchDirectConnectInfo_t610 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1000);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		FormatException_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1001);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((Object_t*)IsInst(L_0, IDictionary_2_t716_il2cpp_TypeInfo_var));
		Object_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_004b;
		}
	}
	{
		Object_t * L_2 = ___obj;
		Object_t* L_3 = V_0;
		uint16_t L_4 = ResponseBase_ParseJSONUInt16_m3096(__this, (String_t*) &_stringLiteral260, L_2, L_3, /*hidden argument*/NULL);
		MatchDirectConnectInfo_set_nodeId_m3176(__this, L_4, /*hidden argument*/NULL);
		Object_t * L_5 = ___obj;
		Object_t* L_6 = V_0;
		String_t* L_7 = ResponseBase_ParseJSONString_m3094(__this, (String_t*) &_stringLiteral268, L_5, L_6, /*hidden argument*/NULL);
		MatchDirectConnectInfo_set_publicAddress_m3178(__this, L_7, /*hidden argument*/NULL);
		Object_t * L_8 = ___obj;
		Object_t* L_9 = V_0;
		String_t* L_10 = ResponseBase_ParseJSONString_m3094(__this, (String_t*) &_stringLiteral269, L_8, L_9, /*hidden argument*/NULL);
		MatchDirectConnectInfo_set_privateAddress_m3180(__this, L_10, /*hidden argument*/NULL);
		goto IL_0061;
	}

IL_004b:
	{
		Object_t * L_11 = ___obj;
		NullCheck(L_11);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m351(NULL /*static, unused*/, (String_t*) &_stringLiteral262, L_12, /*hidden argument*/NULL);
		FormatException_t750 * L_14 = (FormatException_t750 *)il2cpp_codegen_object_new (FormatException_t750_il2cpp_TypeInfo_var);
		FormatException__ctor_m3563(L_14, L_13, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_0061:
	{
		return;
	}
}
// UnityEngine.Networking.Match.MatchDesc
#include "UnityEngine_UnityEngine_Networking_Match_MatchDesc.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.MatchDesc
#include "UnityEngine_UnityEngine_Networking_Match_MatchDescMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_31.h"
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_31MethodDeclarations.h"
struct ResponseBase_t599;
struct List_1_t611;
struct String_t;
struct Object_t;
struct IDictionary_2_t716;
struct ResponseBase_t599;
struct List_1_t341;
struct String_t;
struct Object_t;
struct IDictionary_2_t716;
// Declaration System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<System.Object>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
// System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<System.Object>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" List_1_t341 * ResponseBase_ParseJSONList_TisObject_t_m3569_gshared (ResponseBase_t599 * __this, String_t* p0, Object_t * p1, Object_t* p2, const MethodInfo* method);
#define ResponseBase_ParseJSONList_TisObject_t_m3569(__this, p0, p1, p2, method) (( List_1_t341 * (*) (ResponseBase_t599 *, String_t*, Object_t *, Object_t*, const MethodInfo*))ResponseBase_ParseJSONList_TisObject_t_m3569_gshared)(__this, p0, p1, p2, method)
// Declaration System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDirectConnectInfo>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
// System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDirectConnectInfo>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t610_m3568(__this, p0, p1, p2, method) (( List_1_t611 * (*) (ResponseBase_t599 *, String_t*, Object_t *, Object_t*, const MethodInfo*))ResponseBase_ParseJSONList_TisObject_t_m3569_gshared)(__this, p0, p1, p2, method)


// System.Void UnityEngine.Networking.Match.MatchDesc::.ctor()
extern "C" void MatchDesc__ctor_m3183 (MatchDesc_t612 * __this, const MethodInfo* method)
{
	{
		ResponseBase__ctor_m3093(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.MatchDesc::get_networkId()
extern "C" uint64_t MatchDesc_get_networkId_m3184 (MatchDesc_t612 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void MatchDesc_set_networkId_m3185 (MatchDesc_t612 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDesc::get_name()
extern "C" String_t* MatchDesc_get_name_m3186 (MatchDesc_t612 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_name(System.String)
extern "C" void MatchDesc_set_name_m3187 (MatchDesc_t612 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_averageEloScore()
extern "C" int32_t MatchDesc_get_averageEloScore_m3188 (MatchDesc_t612 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CaverageEloScoreU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_maxSize()
extern "C" int32_t MatchDesc_get_maxSize_m3189 (MatchDesc_t612 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CmaxSizeU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_maxSize(System.Int32)
extern "C" void MatchDesc_set_maxSize_m3190 (MatchDesc_t612 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CmaxSizeU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_currentSize()
extern "C" int32_t MatchDesc_get_currentSize_m3191 (MatchDesc_t612 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CcurrentSizeU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_currentSize(System.Int32)
extern "C" void MatchDesc_set_currentSize_m3192 (MatchDesc_t612 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CcurrentSizeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.MatchDesc::get_isPrivate()
extern "C" bool MatchDesc_get_isPrivate_m3193 (MatchDesc_t612 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CisPrivateU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_isPrivate(System.Boolean)
extern "C" void MatchDesc_set_isPrivate_m3194 (MatchDesc_t612 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CisPrivateU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.MatchDesc::get_matchAttributes()
extern "C" Dictionary_2_t602 * MatchDesc_get_matchAttributes_m3195 (MatchDesc_t612 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t602 * L_0 = (__this->___U3CmatchAttributesU3Ek__BackingField_6);
		return L_0;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDesc::get_hostNodeId()
extern "C" uint16_t MatchDesc_get_hostNodeId_m3196 (MatchDesc_t612 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3ChostNodeIdU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo> UnityEngine.Networking.Match.MatchDesc::get_directConnectInfos()
extern "C" List_1_t611 * MatchDesc_get_directConnectInfos_m3197 (MatchDesc_t612 * __this, const MethodInfo* method)
{
	{
		List_1_t611 * L_0 = (__this->___U3CdirectConnectInfosU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_directConnectInfos(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>)
extern "C" void MatchDesc_set_directConnectInfos_m3198 (MatchDesc_t612 * __this, List_1_t611 * ___value, const MethodInfo* method)
{
	{
		List_1_t611 * L_0 = ___value;
		__this->___U3CdirectConnectInfosU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDesc::ToString()
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t617_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t75_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t111_il2cpp_TypeInfo_var;
extern "C" String_t* MatchDesc_ToString_m3199 (MatchDesc_t612 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		NetworkID_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1003);
		Int32_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		Boolean_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t73* G_B2_1 = {0};
	ObjectU5BU5D_t73* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t73* G_B1_1 = {0};
	ObjectU5BU5D_t73* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t73* G_B3_2 = {0};
	ObjectU5BU5D_t73* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	{
		ObjectU5BU5D_t73* L_0 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, ((int32_t)9)));
		String_t* L_1 = Object_ToString_m380(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t73* L_2 = L_0;
		uint64_t L_3 = MatchDesc_get_networkId_m3184(__this, /*hidden argument*/NULL);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(NetworkID_t617_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m3562(L_5, (String_t*) &_stringLiteral246, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t73* L_7 = L_2;
		String_t* L_8 = MatchDesc_get_name_m3186(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)L_8;
		ObjectU5BU5D_t73* L_9 = L_7;
		int32_t L_10 = MatchDesc_get_averageEloScore_m3188(__this, /*hidden argument*/NULL);
		int32_t L_11 = L_10;
		Object_t * L_12 = Box(Int32_t75_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 3);
		ArrayElementTypeCheck (L_9, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 3)) = (Object_t *)L_12;
		ObjectU5BU5D_t73* L_13 = L_9;
		int32_t L_14 = MatchDesc_get_maxSize_m3189(__this, /*hidden argument*/NULL);
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(Int32_t75_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 4)) = (Object_t *)L_16;
		ObjectU5BU5D_t73* L_17 = L_13;
		int32_t L_18 = MatchDesc_get_currentSize_m3191(__this, /*hidden argument*/NULL);
		int32_t L_19 = L_18;
		Object_t * L_20 = Box(Int32_t75_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 5);
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 5)) = (Object_t *)L_20;
		ObjectU5BU5D_t73* L_21 = L_17;
		bool L_22 = MatchDesc_get_isPrivate_m3193(__this, /*hidden argument*/NULL);
		bool L_23 = L_22;
		Object_t * L_24 = Box(Boolean_t111_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 6);
		ArrayElementTypeCheck (L_21, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, 6)) = (Object_t *)L_24;
		ObjectU5BU5D_t73* L_25 = L_21;
		Dictionary_2_t602 * L_26 = MatchDesc_get_matchAttributes_m3195(__this, /*hidden argument*/NULL);
		G_B1_0 = 7;
		G_B1_1 = L_25;
		G_B1_2 = L_25;
		G_B1_3 = (String_t*) &_stringLiteral270;
		if (L_26)
		{
			G_B2_0 = 7;
			G_B2_1 = L_25;
			G_B2_2 = L_25;
			G_B2_3 = (String_t*) &_stringLiteral270;
			goto IL_0081;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_008c;
	}

IL_0081:
	{
		Dictionary_2_t602 * L_27 = MatchDesc_get_matchAttributes_m3195(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		int32_t L_28 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count() */, L_27);
		G_B3_0 = L_28;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_008c:
	{
		int32_t L_29 = G_B3_0;
		Object_t * L_30 = Box(Int32_t75_il2cpp_TypeInfo_var, &L_29);
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, L_30);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)L_30;
		ObjectU5BU5D_t73* L_31 = G_B3_3;
		List_1_t611 * L_32 = MatchDesc_get_directConnectInfos_m3197(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		int32_t L_33 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Count() */, L_32);
		int32_t L_34 = L_33;
		Object_t * L_35 = Box(Int32_t75_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 8);
		ArrayElementTypeCheck (L_31, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 8)) = (Object_t *)L_35;
		String_t* L_36 = UnityString_Format_m2796(NULL /*static, unused*/, G_B3_4, L_31, /*hidden argument*/NULL);
		return L_36;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::Parse(System.Object)
extern TypeInfo* IDictionary_2_t716_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t750_il2cpp_TypeInfo_var;
extern const MethodInfo* ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t610_m3568_MethodInfo_var;
extern "C" void MatchDesc_Parse_m3200 (MatchDesc_t612 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1000);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		FormatException_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1001);
		ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t610_m3568_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483966);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((Object_t*)IsInst(L_0, IDictionary_2_t716_il2cpp_TypeInfo_var));
		Object_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0084;
		}
	}
	{
		Object_t * L_2 = ___obj;
		Object_t* L_3 = V_0;
		uint64_t L_4 = ResponseBase_ParseJSONUInt64_m3097(__this, (String_t*) &_stringLiteral258, L_2, L_3, /*hidden argument*/NULL);
		MatchDesc_set_networkId_m3185(__this, L_4, /*hidden argument*/NULL);
		Object_t * L_5 = ___obj;
		Object_t* L_6 = V_0;
		String_t* L_7 = ResponseBase_ParseJSONString_m3094(__this, (String_t*) &_stringLiteral271, L_5, L_6, /*hidden argument*/NULL);
		MatchDesc_set_name_m3187(__this, L_7, /*hidden argument*/NULL);
		Object_t * L_8 = ___obj;
		Object_t* L_9 = V_0;
		int32_t L_10 = ResponseBase_ParseJSONInt32_m3095(__this, (String_t*) &_stringLiteral272, L_8, L_9, /*hidden argument*/NULL);
		MatchDesc_set_maxSize_m3190(__this, L_10, /*hidden argument*/NULL);
		Object_t * L_11 = ___obj;
		Object_t* L_12 = V_0;
		int32_t L_13 = ResponseBase_ParseJSONInt32_m3095(__this, (String_t*) &_stringLiteral273, L_11, L_12, /*hidden argument*/NULL);
		MatchDesc_set_currentSize_m3192(__this, L_13, /*hidden argument*/NULL);
		Object_t * L_14 = ___obj;
		Object_t* L_15 = V_0;
		bool L_16 = ResponseBase_ParseJSONBool_m3098(__this, (String_t*) &_stringLiteral274, L_14, L_15, /*hidden argument*/NULL);
		MatchDesc_set_isPrivate_m3194(__this, L_16, /*hidden argument*/NULL);
		Object_t * L_17 = ___obj;
		Object_t* L_18 = V_0;
		List_1_t611 * L_19 = ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t610_m3568(__this, (String_t*) &_stringLiteral275, L_17, L_18, /*hidden argument*/ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t610_m3568_MethodInfo_var);
		MatchDesc_set_directConnectInfos_m3198(__this, L_19, /*hidden argument*/NULL);
		goto IL_009a;
	}

IL_0084:
	{
		Object_t * L_20 = ___obj;
		NullCheck(L_20);
		String_t* L_21 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m351(NULL /*static, unused*/, (String_t*) &_stringLiteral262, L_21, /*hidden argument*/NULL);
		FormatException_t750 * L_23 = (FormatException_t750 *)il2cpp_codegen_object_new (FormatException_t750_il2cpp_TypeInfo_var);
		FormatException__ctor_m3563(L_23, L_22, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_009a:
	{
		return;
	}
}
// UnityEngine.Networking.Match.ListMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchResponse.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.ListMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchResponseMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_32.h"
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_32MethodDeclarations.h"
struct ResponseBase_t599;
struct List_1_t613;
struct String_t;
struct Object_t;
struct IDictionary_2_t716;
// Declaration System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDesc>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
// System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDesc>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ResponseBase_ParseJSONList_TisMatchDesc_t612_m3570(__this, p0, p1, p2, method) (( List_1_t613 * (*) (ResponseBase_t599 *, String_t*, Object_t *, Object_t*, const MethodInfo*))ResponseBase_ParseJSONList_TisObject_t_m3569_gshared)(__this, p0, p1, p2, method)


// System.Void UnityEngine.Networking.Match.ListMatchResponse::.ctor()
extern "C" void ListMatchResponse__ctor_m3201 (ListMatchResponse_t614 * __this, const MethodInfo* method)
{
	{
		BasicResponse__ctor_m3106(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc> UnityEngine.Networking.Match.ListMatchResponse::get_matches()
extern "C" List_1_t613 * ListMatchResponse_get_matches_m3202 (ListMatchResponse_t614 * __this, const MethodInfo* method)
{
	{
		List_1_t613 * L_0 = (__this->___U3CmatchesU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchResponse::set_matches(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>)
extern "C" void ListMatchResponse_set_matches_m3203 (ListMatchResponse_t614 * __this, List_1_t613 * ___value, const MethodInfo* method)
{
	{
		List_1_t613 * L_0 = ___value;
		__this->___U3CmatchesU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchResponse::ToString()
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t75_il2cpp_TypeInfo_var;
extern "C" String_t* ListMatchResponse_ToString_m3204 (ListMatchResponse_t614 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		Int32_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t73* L_0 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = Response_ToString_m3104(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t73* L_2 = L_0;
		List_1_t613 * L_3 = ListMatchResponse_get_matches_m3202(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Count() */, L_3);
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(Int32_t75_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		String_t* L_7 = UnityString_Format_m2796(NULL /*static, unused*/, (String_t*) &_stringLiteral276, L_2, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchResponse::Parse(System.Object)
extern TypeInfo* IDictionary_2_t716_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t750_il2cpp_TypeInfo_var;
extern const MethodInfo* ResponseBase_ParseJSONList_TisMatchDesc_t612_m3570_MethodInfo_var;
extern "C" void ListMatchResponse_Parse_m3205 (ListMatchResponse_t614 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1000);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		FormatException_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1001);
		ResponseBase_ParseJSONList_TisMatchDesc_t612_m3570_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483967);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		Response_Parse_m3105(__this, L_0, /*hidden argument*/NULL);
		Object_t * L_1 = ___obj;
		V_0 = ((Object_t*)IsInst(L_1, IDictionary_2_t716_il2cpp_TypeInfo_var));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		Object_t * L_3 = ___obj;
		Object_t* L_4 = V_0;
		List_1_t613 * L_5 = ResponseBase_ParseJSONList_TisMatchDesc_t612_m3570(__this, (String_t*) &_stringLiteral277, L_3, L_4, /*hidden argument*/ResponseBase_ParseJSONList_TisMatchDesc_t612_m3570_MethodInfo_var);
		ListMatchResponse_set_matches_m3203(__this, L_5, /*hidden argument*/NULL);
		goto IL_0042;
	}

IL_002c:
	{
		Object_t * L_6 = ___obj;
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m351(NULL /*static, unused*/, (String_t*) &_stringLiteral262, L_7, /*hidden argument*/NULL);
		FormatException_t750 * L_9 = (FormatException_t750 *)il2cpp_codegen_object_new (FormatException_t750_il2cpp_TypeInfo_var);
		FormatException__ctor_m3563(L_9, L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0042:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppIDMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceIDMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkIDMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeIDMethodDeclarations.h"



// UnityEngine.Networking.Types.NetworkAccessToken
#include "UnityEngine_UnityEngine_Networking_Types_NetworkAccessToken.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.NetworkAccessToken
#include "UnityEngine_UnityEngine_Networking_Types_NetworkAccessTokenMethodDeclarations.h"



// System.Void UnityEngine.Networking.Types.NetworkAccessToken::.ctor()
extern TypeInfo* ByteU5BU5D_t551_il2cpp_TypeInfo_var;
extern "C" void NetworkAccessToken__ctor_m3206 (NetworkAccessToken_t619 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t551_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		__this->___array_0 = ((ByteU5BU5D_t551*)SZArrayNew(ByteU5BU5D_t551_il2cpp_TypeInfo_var, ((int32_t)64)));
		return;
	}
}
// System.String UnityEngine.Networking.Types.NetworkAccessToken::GetByteString()
extern TypeInfo* Convert_t744_il2cpp_TypeInfo_var;
extern "C" String_t* NetworkAccessToken_GetByteString_m3207 (NetworkAccessToken_t619 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t744_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(965);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t551* L_0 = (__this->___array_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t744_il2cpp_TypeInfo_var);
		String_t* L_1 = Convert_ToBase64String_m3571(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Networking.Utility
#include "UnityEngine_UnityEngine_Networking_Utility.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Utility
#include "UnityEngine_UnityEngine_Networking_UtilityMethodDeclarations.h"

// System.Random
#include "mscorlib_System_Random.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_8.h"
// System.Environment
#include "mscorlib_System_EnvironmentMethodDeclarations.h"
// System.Random
#include "mscorlib_System_RandomMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_8MethodDeclarations.h"
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"


// System.Void UnityEngine.Networking.Utility::.cctor()
extern TypeInfo* Random_t620_il2cpp_TypeInfo_var;
extern TypeInfo* Utility_t622_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t621_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3574_MethodInfo_var;
extern "C" void Utility__cctor_m3208 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Random_t620_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1008);
		Utility_t622_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1009);
		Dictionary_2_t621_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1010);
		Dictionary_2__ctor_m3574_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483968);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = Environment_get_TickCount_m3572(NULL /*static, unused*/, /*hidden argument*/NULL);
		Random_t620 * L_1 = (Random_t620 *)il2cpp_codegen_object_new (Random_t620_il2cpp_TypeInfo_var);
		Random__ctor_m3573(L_1, L_0, /*hidden argument*/NULL);
		((Utility_t622_StaticFields*)Utility_t622_il2cpp_TypeInfo_var->static_fields)->___s_randomGenerator_0 = L_1;
		((Utility_t622_StaticFields*)Utility_t622_il2cpp_TypeInfo_var->static_fields)->___s_useRandomSourceID_1 = 0;
		((Utility_t622_StaticFields*)Utility_t622_il2cpp_TypeInfo_var->static_fields)->___s_randomSourceComponent_2 = 0;
		((Utility_t622_StaticFields*)Utility_t622_il2cpp_TypeInfo_var->static_fields)->___s_programAppID_3 = (((int64_t)(-1)));
		Dictionary_2_t621 * L_2 = (Dictionary_2_t621 *)il2cpp_codegen_object_new (Dictionary_2_t621_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3574(L_2, /*hidden argument*/Dictionary_2__ctor_m3574_MethodInfo_var);
		((Utility_t622_StaticFields*)Utility_t622_il2cpp_TypeInfo_var->static_fields)->___s_dictTokens_4 = L_2;
		return;
	}
}
// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Utility::GetSourceID()
extern TypeInfo* Utility_t622_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t75_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" uint64_t Utility_GetSourceID_m3209 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utility_t622_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1009);
		Int32_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = SystemInfo_get_deviceUniqueIdentifier_m2281(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t622_il2cpp_TypeInfo_var);
		int32_t L_1 = ((Utility_t622_StaticFields*)Utility_t622_il2cpp_TypeInfo_var->static_fields)->___s_randomSourceComponent_2;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t75_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m340(NULL /*static, unused*/, L_0, L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_4);
		return (uint64_t)((((int64_t)L_5)));
	}
}
// System.Void UnityEngine.Networking.Utility::SetAppID(UnityEngine.Networking.Types.AppID)
extern TypeInfo* Utility_t622_il2cpp_TypeInfo_var;
extern "C" void Utility_SetAppID_m3210 (Object_t * __this /* static, unused */, uint64_t ___newAppID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utility_t622_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1009);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint64_t L_0 = ___newAppID;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t622_il2cpp_TypeInfo_var);
		((Utility_t622_StaticFields*)Utility_t622_il2cpp_TypeInfo_var->static_fields)->___s_programAppID_3 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.AppID UnityEngine.Networking.Utility::GetAppID()
extern TypeInfo* Utility_t622_il2cpp_TypeInfo_var;
extern "C" uint64_t Utility_GetAppID_m3211 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utility_t622_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1009);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t622_il2cpp_TypeInfo_var);
		uint64_t L_0 = ((Utility_t622_StaticFields*)Utility_t622_il2cpp_TypeInfo_var->static_fields)->___s_programAppID_3;
		return L_0;
	}
}
// UnityEngine.Networking.Types.NetworkAccessToken UnityEngine.Networking.Utility::GetAccessTokenForNetwork(UnityEngine.Networking.Types.NetworkID)
extern TypeInfo* Utility_t622_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkAccessToken_t619_il2cpp_TypeInfo_var;
extern "C" NetworkAccessToken_t619 * Utility_GetAccessTokenForNetwork_m3212 (Object_t * __this /* static, unused */, uint64_t ___netId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utility_t622_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1009);
		NetworkAccessToken_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1007);
		s_Il2CppMethodIntialized = true;
	}
	NetworkAccessToken_t619 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t622_il2cpp_TypeInfo_var);
		Dictionary_2_t621 * L_0 = ((Utility_t622_StaticFields*)Utility_t622_il2cpp_TypeInfo_var->static_fields)->___s_dictTokens_4;
		uint64_t L_1 = ___netId;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker2< bool, uint64_t, NetworkAccessToken_t619 ** >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::TryGetValue(!0,!1&) */, L_0, L_1, (&V_0));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		NetworkAccessToken_t619 * L_3 = (NetworkAccessToken_t619 *)il2cpp_codegen_object_new (NetworkAccessToken_t619_il2cpp_TypeInfo_var);
		NetworkAccessToken__ctor_m3206(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0018:
	{
		NetworkAccessToken_t619 * L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Networking.Match.NetworkMatch
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.NetworkMatch
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatchMethodDeclarations.h"

// System.Uri
#include "System_System_Uri.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWForm.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWW.h"
// System.Enum
#include "mscorlib_System_Enum.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_6.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_0.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_1.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_2.h"
// System.Uri
#include "System_System_UriMethodDeclarations.h"
// System.UInt64
#include "mscorlib_System_UInt64MethodDeclarations.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWFormMethodDeclarations.h"
// System.UInt32
#include "mscorlib_System_UInt32MethodDeclarations.h"
// System.Boolean
#include "mscorlib_System_BooleanMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_6MethodDeclarations.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWWMethodDeclarations.h"
struct NetworkMatch_t624;
struct IEnumerator_t59;
struct WWW_t548;
struct ResponseDelegate_1_t717;
struct NetworkMatch_t624;
struct IEnumerator_t59;
struct WWW_t548;
struct ResponseDelegate_1_t752;
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<System.Object>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<System.Object>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
extern "C" Object_t * NetworkMatch_ProcessMatchResponse_TisObject_t_m3576_gshared (NetworkMatch_t624 * __this, WWW_t548 * p0, ResponseDelegate_1_t752 * p1, const MethodInfo* method);
#define NetworkMatch_ProcessMatchResponse_TisObject_t_m3576(__this, p0, p1, method) (( Object_t * (*) (NetworkMatch_t624 *, WWW_t548 *, ResponseDelegate_1_t752 *, const MethodInfo*))NetworkMatch_ProcessMatchResponse_TisObject_t_m3576_gshared)(__this, p0, p1, method)
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.CreateMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.CreateMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
#define NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t604_m3575(__this, p0, p1, method) (( Object_t * (*) (NetworkMatch_t624 *, WWW_t548 *, ResponseDelegate_1_t717 *, const MethodInfo*))NetworkMatch_ProcessMatchResponse_TisObject_t_m3576_gshared)(__this, p0, p1, method)
struct NetworkMatch_t624;
struct IEnumerator_t59;
struct WWW_t548;
struct ResponseDelegate_1_t718;
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.JoinMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.JoinMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
#define NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t606_m3577(__this, p0, p1, method) (( Object_t * (*) (NetworkMatch_t624 *, WWW_t548 *, ResponseDelegate_1_t718 *, const MethodInfo*))NetworkMatch_ProcessMatchResponse_TisObject_t_m3576_gshared)(__this, p0, p1, method)
struct NetworkMatch_t624;
struct IEnumerator_t59;
struct WWW_t548;
struct ResponseDelegate_1_t719;
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.BasicResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.BasicResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
#define NetworkMatch_ProcessMatchResponse_TisBasicResponse_t601_m3578(__this, p0, p1, method) (( Object_t * (*) (NetworkMatch_t624 *, WWW_t548 *, ResponseDelegate_1_t719 *, const MethodInfo*))NetworkMatch_ProcessMatchResponse_TisObject_t_m3576_gshared)(__this, p0, p1, method)
struct NetworkMatch_t624;
struct IEnumerator_t59;
struct WWW_t548;
struct ResponseDelegate_1_t720;
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.ListMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.ListMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
#define NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t614_m3579(__this, p0, p1, method) (( Object_t * (*) (NetworkMatch_t624 *, WWW_t548 *, ResponseDelegate_1_t720 *, const MethodInfo*))NetworkMatch_ProcessMatchResponse_TisObject_t_m3576_gshared)(__this, p0, p1, method)


// System.Void UnityEngine.Networking.Match.NetworkMatch::.ctor()
extern TypeInfo* Uri_t623_il2cpp_TypeInfo_var;
extern "C" void NetworkMatch__ctor_m3213 (NetworkMatch_t624 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1011);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	uint64_t V_1 = 0;
	{
		Uri_t623 * L_0 = (Uri_t623 *)il2cpp_codegen_object_new (Uri_t623_il2cpp_TypeInfo_var);
		Uri__ctor_m3580(L_0, (String_t*) &_stringLiteral278, /*hidden argument*/NULL);
		__this->___m_BaseUri_3 = L_0;
		MonoBehaviour__ctor_m231(__this, /*hidden argument*/NULL);
		String_t* L_1 = PlayerPrefs_GetString_m2921(NULL /*static, unused*/, (String_t*) &_stringLiteral279, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		bool L_3 = UInt64_TryParse_m3581(NULL /*static, unused*/, L_2, (&V_1), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_003d;
		}
	}
	{
		Debug_Log_m243(NULL /*static, unused*/, (String_t*) &_stringLiteral280, /*hidden argument*/NULL);
		goto IL_0044;
	}

IL_003d:
	{
		uint64_t L_4 = V_1;
		NetworkMatch_SetProgramAppID_m3216(__this, L_4, /*hidden argument*/NULL);
	}

IL_0044:
	{
		return;
	}
}
// System.Uri UnityEngine.Networking.Match.NetworkMatch::get_baseUri()
extern "C" Uri_t623 * NetworkMatch_get_baseUri_m3214 (NetworkMatch_t624 * __this, const MethodInfo* method)
{
	{
		Uri_t623 * L_0 = (__this->___m_BaseUri_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch::set_baseUri(System.Uri)
extern "C" void NetworkMatch_set_baseUri_m3215 (NetworkMatch_t624 * __this, Uri_t623 * ___value, const MethodInfo* method)
{
	{
		Uri_t623 * L_0 = ___value;
		__this->___m_BaseUri_3 = L_0;
		return;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch::SetProgramAppID(UnityEngine.Networking.Types.AppID)
extern TypeInfo* Utility_t622_il2cpp_TypeInfo_var;
extern "C" void NetworkMatch_SetProgramAppID_m3216 (NetworkMatch_t624 * __this, uint64_t ___programAppID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utility_t622_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1009);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint64_t L_0 = ___programAppID;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t622_il2cpp_TypeInfo_var);
		Utility_SetAppID_m3210(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(System.String,System.UInt32,System.Boolean,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern TypeInfo* CreateMatchRequest_t603_il2cpp_TypeInfo_var;
extern "C" Coroutine_t235 * NetworkMatch_CreateMatch_m3217 (NetworkMatch_t624 * __this, String_t* ___matchName, uint32_t ___matchSize, bool ___matchAdvertise, String_t* ___matchPassword, ResponseDelegate_1_t717 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CreateMatchRequest_t603_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1012);
		s_Il2CppMethodIntialized = true;
	}
	CreateMatchRequest_t603 * V_0 = {0};
	{
		CreateMatchRequest_t603 * L_0 = (CreateMatchRequest_t603 *)il2cpp_codegen_object_new (CreateMatchRequest_t603_il2cpp_TypeInfo_var);
		CreateMatchRequest__ctor_m3107(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		CreateMatchRequest_t603 * L_1 = V_0;
		String_t* L_2 = ___matchName;
		NullCheck(L_1);
		CreateMatchRequest_set_name_m3109(L_1, L_2, /*hidden argument*/NULL);
		CreateMatchRequest_t603 * L_3 = V_0;
		uint32_t L_4 = ___matchSize;
		NullCheck(L_3);
		CreateMatchRequest_set_size_m3111(L_3, L_4, /*hidden argument*/NULL);
		CreateMatchRequest_t603 * L_5 = V_0;
		bool L_6 = ___matchAdvertise;
		NullCheck(L_5);
		CreateMatchRequest_set_advertise_m3113(L_5, L_6, /*hidden argument*/NULL);
		CreateMatchRequest_t603 * L_7 = V_0;
		String_t* L_8 = ___matchPassword;
		NullCheck(L_7);
		CreateMatchRequest_set_password_m3115(L_7, L_8, /*hidden argument*/NULL);
		CreateMatchRequest_t603 * L_9 = V_0;
		ResponseDelegate_1_t717 * L_10 = ___callback;
		Coroutine_t235 * L_11 = NetworkMatch_CreateMatch_m3218(__this, L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(UnityEngine.Networking.Match.CreateMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern TypeInfo* Uri_t623_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t552_il2cpp_TypeInfo_var;
extern TypeInfo* Utility_t622_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t616_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t615_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t548_il2cpp_TypeInfo_var;
extern const MethodInfo* NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t604_m3575_MethodInfo_var;
extern "C" Coroutine_t235 * NetworkMatch_CreateMatch_m3218 (NetworkMatch_t624 * __this, CreateMatchRequest_t603 * ___req, ResponseDelegate_1_t717 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1011);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		WWWForm_t552_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1014);
		Utility_t622_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1009);
		SourceID_t616_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(998);
		AppID_t615_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(999);
		WWW_t548_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1015);
		NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t604_m3575_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483969);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t623 * V_0 = {0};
	WWWForm_t552 * V_1 = {0};
	WWW_t548 * V_2 = {0};
	uint32_t V_3 = 0;
	bool V_4 = false;
	{
		Uri_t623 * L_0 = NetworkMatch_get_baseUri_m3214(__this, /*hidden argument*/NULL);
		Uri_t623 * L_1 = (Uri_t623 *)il2cpp_codegen_object_new (Uri_t623_il2cpp_TypeInfo_var);
		Uri__ctor_m3582(L_1, L_0, (String_t*) &_stringLiteral281, /*hidden argument*/NULL);
		V_0 = L_1;
		Uri_t623 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m340(NULL /*static, unused*/, (String_t*) &_stringLiteral282, L_2, /*hidden argument*/NULL);
		Debug_Log_m243(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		WWWForm_t552 * L_4 = (WWWForm_t552 *)il2cpp_codegen_object_new (WWWForm_t552_il2cpp_TypeInfo_var);
		WWWForm__ctor_m2782(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		WWWForm_t552 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t622_il2cpp_TypeInfo_var);
		uint64_t L_6 = Utility_GetSourceID_m3209(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_7 = L_6;
		Object_t * L_8 = Box(SourceID_t616_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_8);
		NullCheck(L_5);
		WWWForm_AddField_m2783(L_5, (String_t*) &_stringLiteral283, L_9, /*hidden argument*/NULL);
		WWWForm_t552 * L_10 = V_1;
		uint64_t L_11 = Utility_GetAppID_m3211(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_12 = L_11;
		Object_t * L_13 = Box(AppID_t615_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_13);
		NullCheck(L_10);
		WWWForm_AddField_m2783(L_10, (String_t*) &_stringLiteral284, L_14, /*hidden argument*/NULL);
		WWWForm_t552 * L_15 = V_1;
		NullCheck(L_15);
		WWWForm_AddField_m2785(L_15, (String_t*) &_stringLiteral259, 0, /*hidden argument*/NULL);
		WWWForm_t552 * L_16 = V_1;
		NullCheck(L_16);
		WWWForm_AddField_m2785(L_16, (String_t*) &_stringLiteral285, 0, /*hidden argument*/NULL);
		WWWForm_t552 * L_17 = V_1;
		CreateMatchRequest_t603 * L_18 = ___req;
		NullCheck(L_18);
		String_t* L_19 = CreateMatchRequest_get_name_m3108(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		WWWForm_AddField_m2783(L_17, (String_t*) &_stringLiteral271, L_19, /*hidden argument*/NULL);
		WWWForm_t552 * L_20 = V_1;
		CreateMatchRequest_t603 * L_21 = ___req;
		NullCheck(L_21);
		uint32_t L_22 = CreateMatchRequest_get_size_m3110(L_21, /*hidden argument*/NULL);
		V_3 = L_22;
		String_t* L_23 = UInt32_ToString_m3583((&V_3), /*hidden argument*/NULL);
		NullCheck(L_20);
		WWWForm_AddField_m2783(L_20, (String_t*) &_stringLiteral286, L_23, /*hidden argument*/NULL);
		WWWForm_t552 * L_24 = V_1;
		CreateMatchRequest_t603 * L_25 = ___req;
		NullCheck(L_25);
		bool L_26 = CreateMatchRequest_get_advertise_m3112(L_25, /*hidden argument*/NULL);
		V_4 = L_26;
		String_t* L_27 = Boolean_ToString_m3584((&V_4), /*hidden argument*/NULL);
		NullCheck(L_24);
		WWWForm_AddField_m2783(L_24, (String_t*) &_stringLiteral287, L_27, /*hidden argument*/NULL);
		WWWForm_t552 * L_28 = V_1;
		CreateMatchRequest_t603 * L_29 = ___req;
		NullCheck(L_29);
		String_t* L_30 = CreateMatchRequest_get_password_m3114(L_29, /*hidden argument*/NULL);
		NullCheck(L_28);
		WWWForm_AddField_m2783(L_28, (String_t*) &_stringLiteral288, L_30, /*hidden argument*/NULL);
		WWWForm_t552 * L_31 = V_1;
		NullCheck(L_31);
		Dictionary_2_t710 * L_32 = WWWForm_get_headers_m2786(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_32, (String_t*) &_stringLiteral289, (String_t*) &_stringLiteral290);
		Uri_t623 * L_33 = V_0;
		NullCheck(L_33);
		String_t* L_34 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_33);
		WWWForm_t552 * L_35 = V_1;
		WWW_t548 * L_36 = (WWW_t548 *)il2cpp_codegen_object_new (WWW_t548_il2cpp_TypeInfo_var);
		WWW__ctor_m2767(L_36, L_34, L_35, /*hidden argument*/NULL);
		V_2 = L_36;
		WWW_t548 * L_37 = V_2;
		ResponseDelegate_1_t717 * L_38 = ___callback;
		Object_t * L_39 = NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t604_m3575(__this, L_37, L_38, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t604_m3575_MethodInfo_var);
		Coroutine_t235 * L_40 = MonoBehaviour_StartCoroutine_m260(__this, L_39, /*hidden argument*/NULL);
		return L_40;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Types.NetworkID,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern TypeInfo* JoinMatchRequest_t605_il2cpp_TypeInfo_var;
extern "C" Coroutine_t235 * NetworkMatch_JoinMatch_m3219 (NetworkMatch_t624 * __this, uint64_t ___netId, String_t* ___matchPassword, ResponseDelegate_1_t718 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JoinMatchRequest_t605_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1016);
		s_Il2CppMethodIntialized = true;
	}
	JoinMatchRequest_t605 * V_0 = {0};
	{
		JoinMatchRequest_t605 * L_0 = (JoinMatchRequest_t605 *)il2cpp_codegen_object_new (JoinMatchRequest_t605_il2cpp_TypeInfo_var);
		JoinMatchRequest__ctor_m3133(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		JoinMatchRequest_t605 * L_1 = V_0;
		uint64_t L_2 = ___netId;
		NullCheck(L_1);
		JoinMatchRequest_set_networkId_m3135(L_1, L_2, /*hidden argument*/NULL);
		JoinMatchRequest_t605 * L_3 = V_0;
		String_t* L_4 = ___matchPassword;
		NullCheck(L_3);
		JoinMatchRequest_set_password_m3137(L_3, L_4, /*hidden argument*/NULL);
		JoinMatchRequest_t605 * L_5 = V_0;
		ResponseDelegate_1_t718 * L_6 = ___callback;
		Coroutine_t235 * L_7 = NetworkMatch_JoinMatch_m3220(__this, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Match.JoinMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern TypeInfo* Uri_t623_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t552_il2cpp_TypeInfo_var;
extern TypeInfo* Utility_t622_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t616_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t615_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t617_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t548_il2cpp_TypeInfo_var;
extern const MethodInfo* NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t606_m3577_MethodInfo_var;
extern "C" Coroutine_t235 * NetworkMatch_JoinMatch_m3220 (NetworkMatch_t624 * __this, JoinMatchRequest_t605 * ___req, ResponseDelegate_1_t718 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1011);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		WWWForm_t552_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1014);
		Utility_t622_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1009);
		SourceID_t616_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(998);
		AppID_t615_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(999);
		NetworkID_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1003);
		WWW_t548_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1015);
		NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t606_m3577_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483970);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t623 * V_0 = {0};
	WWWForm_t552 * V_1 = {0};
	WWW_t548 * V_2 = {0};
	{
		Uri_t623 * L_0 = NetworkMatch_get_baseUri_m3214(__this, /*hidden argument*/NULL);
		Uri_t623 * L_1 = (Uri_t623 *)il2cpp_codegen_object_new (Uri_t623_il2cpp_TypeInfo_var);
		Uri__ctor_m3582(L_1, L_0, (String_t*) &_stringLiteral291, /*hidden argument*/NULL);
		V_0 = L_1;
		Uri_t623 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m340(NULL /*static, unused*/, (String_t*) &_stringLiteral292, L_2, /*hidden argument*/NULL);
		Debug_Log_m243(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		WWWForm_t552 * L_4 = (WWWForm_t552 *)il2cpp_codegen_object_new (WWWForm_t552_il2cpp_TypeInfo_var);
		WWWForm__ctor_m2782(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		WWWForm_t552 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t622_il2cpp_TypeInfo_var);
		uint64_t L_6 = Utility_GetSourceID_m3209(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_7 = L_6;
		Object_t * L_8 = Box(SourceID_t616_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_8);
		NullCheck(L_5);
		WWWForm_AddField_m2783(L_5, (String_t*) &_stringLiteral283, L_9, /*hidden argument*/NULL);
		WWWForm_t552 * L_10 = V_1;
		uint64_t L_11 = Utility_GetAppID_m3211(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_12 = L_11;
		Object_t * L_13 = Box(AppID_t615_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_13);
		NullCheck(L_10);
		WWWForm_AddField_m2783(L_10, (String_t*) &_stringLiteral284, L_14, /*hidden argument*/NULL);
		WWWForm_t552 * L_15 = V_1;
		NullCheck(L_15);
		WWWForm_AddField_m2785(L_15, (String_t*) &_stringLiteral259, 0, /*hidden argument*/NULL);
		WWWForm_t552 * L_16 = V_1;
		NullCheck(L_16);
		WWWForm_AddField_m2785(L_16, (String_t*) &_stringLiteral285, 0, /*hidden argument*/NULL);
		WWWForm_t552 * L_17 = V_1;
		JoinMatchRequest_t605 * L_18 = ___req;
		NullCheck(L_18);
		uint64_t L_19 = JoinMatchRequest_get_networkId_m3134(L_18, /*hidden argument*/NULL);
		uint64_t L_20 = L_19;
		Object_t * L_21 = Box(NetworkID_t617_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_21);
		NullCheck(L_17);
		WWWForm_AddField_m2783(L_17, (String_t*) &_stringLiteral258, L_22, /*hidden argument*/NULL);
		WWWForm_t552 * L_23 = V_1;
		JoinMatchRequest_t605 * L_24 = ___req;
		NullCheck(L_24);
		String_t* L_25 = JoinMatchRequest_get_password_m3136(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		WWWForm_AddField_m2783(L_23, (String_t*) &_stringLiteral288, L_25, /*hidden argument*/NULL);
		WWWForm_t552 * L_26 = V_1;
		NullCheck(L_26);
		Dictionary_2_t710 * L_27 = WWWForm_get_headers_m2786(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_27, (String_t*) &_stringLiteral289, (String_t*) &_stringLiteral290);
		Uri_t623 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_28);
		WWWForm_t552 * L_30 = V_1;
		WWW_t548 * L_31 = (WWW_t548 *)il2cpp_codegen_object_new (WWW_t548_il2cpp_TypeInfo_var);
		WWW__ctor_m2767(L_31, L_29, L_30, /*hidden argument*/NULL);
		V_2 = L_31;
		WWW_t548 * L_32 = V_2;
		ResponseDelegate_1_t718 * L_33 = ___callback;
		Object_t * L_34 = NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t606_m3577(__this, L_32, L_33, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t606_m3577_MethodInfo_var);
		Coroutine_t235 * L_35 = MonoBehaviour_StartCoroutine_m260(__this, L_34, /*hidden argument*/NULL);
		return L_35;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern TypeInfo* DestroyMatchRequest_t607_il2cpp_TypeInfo_var;
extern "C" Coroutine_t235 * NetworkMatch_DestroyMatch_m3221 (NetworkMatch_t624 * __this, uint64_t ___netId, ResponseDelegate_1_t719 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DestroyMatchRequest_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1018);
		s_Il2CppMethodIntialized = true;
	}
	DestroyMatchRequest_t607 * V_0 = {0};
	{
		DestroyMatchRequest_t607 * L_0 = (DestroyMatchRequest_t607 *)il2cpp_codegen_object_new (DestroyMatchRequest_t607_il2cpp_TypeInfo_var);
		DestroyMatchRequest__ctor_m3154(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		DestroyMatchRequest_t607 * L_1 = V_0;
		uint64_t L_2 = ___netId;
		NullCheck(L_1);
		DestroyMatchRequest_set_networkId_m3156(L_1, L_2, /*hidden argument*/NULL);
		DestroyMatchRequest_t607 * L_3 = V_0;
		ResponseDelegate_1_t719 * L_4 = ___callback;
		Coroutine_t235 * L_5 = NetworkMatch_DestroyMatch_m3222(__this, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Match.DestroyMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern TypeInfo* Uri_t623_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t552_il2cpp_TypeInfo_var;
extern TypeInfo* Utility_t622_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t616_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t615_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t617_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t548_il2cpp_TypeInfo_var;
extern const MethodInfo* NetworkMatch_ProcessMatchResponse_TisBasicResponse_t601_m3578_MethodInfo_var;
extern "C" Coroutine_t235 * NetworkMatch_DestroyMatch_m3222 (NetworkMatch_t624 * __this, DestroyMatchRequest_t607 * ___req, ResponseDelegate_1_t719 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1011);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		WWWForm_t552_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1014);
		Utility_t622_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1009);
		SourceID_t616_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(998);
		AppID_t615_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(999);
		NetworkID_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1003);
		WWW_t548_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1015);
		NetworkMatch_ProcessMatchResponse_TisBasicResponse_t601_m3578_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483971);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t623 * V_0 = {0};
	WWWForm_t552 * V_1 = {0};
	WWW_t548 * V_2 = {0};
	{
		Uri_t623 * L_0 = NetworkMatch_get_baseUri_m3214(__this, /*hidden argument*/NULL);
		Uri_t623 * L_1 = (Uri_t623 *)il2cpp_codegen_object_new (Uri_t623_il2cpp_TypeInfo_var);
		Uri__ctor_m3582(L_1, L_0, (String_t*) &_stringLiteral293, /*hidden argument*/NULL);
		V_0 = L_1;
		Uri_t623 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m351(NULL /*static, unused*/, (String_t*) &_stringLiteral294, L_3, /*hidden argument*/NULL);
		Debug_Log_m243(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		WWWForm_t552 * L_5 = (WWWForm_t552 *)il2cpp_codegen_object_new (WWWForm_t552_il2cpp_TypeInfo_var);
		WWWForm__ctor_m2782(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		WWWForm_t552 * L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t622_il2cpp_TypeInfo_var);
		uint64_t L_7 = Utility_GetSourceID_m3209(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_8 = L_7;
		Object_t * L_9 = Box(SourceID_t616_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_9);
		NullCheck(L_6);
		WWWForm_AddField_m2783(L_6, (String_t*) &_stringLiteral283, L_10, /*hidden argument*/NULL);
		WWWForm_t552 * L_11 = V_1;
		uint64_t L_12 = Utility_GetAppID_m3211(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_13 = L_12;
		Object_t * L_14 = Box(AppID_t615_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_14);
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_14);
		NullCheck(L_11);
		WWWForm_AddField_m2783(L_11, (String_t*) &_stringLiteral284, L_15, /*hidden argument*/NULL);
		WWWForm_t552 * L_16 = V_1;
		DestroyMatchRequest_t607 * L_17 = ___req;
		NullCheck(L_17);
		uint64_t L_18 = DestroyMatchRequest_get_networkId_m3155(L_17, /*hidden argument*/NULL);
		NetworkAccessToken_t619 * L_19 = Utility_GetAccessTokenForNetwork_m3212(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		String_t* L_20 = NetworkAccessToken_GetByteString_m3207(L_19, /*hidden argument*/NULL);
		NullCheck(L_16);
		WWWForm_AddField_m2783(L_16, (String_t*) &_stringLiteral259, L_20, /*hidden argument*/NULL);
		WWWForm_t552 * L_21 = V_1;
		NullCheck(L_21);
		WWWForm_AddField_m2785(L_21, (String_t*) &_stringLiteral285, 0, /*hidden argument*/NULL);
		WWWForm_t552 * L_22 = V_1;
		DestroyMatchRequest_t607 * L_23 = ___req;
		NullCheck(L_23);
		uint64_t L_24 = DestroyMatchRequest_get_networkId_m3155(L_23, /*hidden argument*/NULL);
		uint64_t L_25 = L_24;
		Object_t * L_26 = Box(NetworkID_t617_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_26);
		String_t* L_27 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_26);
		NullCheck(L_22);
		WWWForm_AddField_m2783(L_22, (String_t*) &_stringLiteral258, L_27, /*hidden argument*/NULL);
		WWWForm_t552 * L_28 = V_1;
		NullCheck(L_28);
		Dictionary_2_t710 * L_29 = WWWForm_get_headers_m2786(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_29, (String_t*) &_stringLiteral289, (String_t*) &_stringLiteral290);
		Uri_t623 * L_30 = V_0;
		NullCheck(L_30);
		String_t* L_31 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_30);
		WWWForm_t552 * L_32 = V_1;
		WWW_t548 * L_33 = (WWW_t548 *)il2cpp_codegen_object_new (WWW_t548_il2cpp_TypeInfo_var);
		WWW__ctor_m2767(L_33, L_31, L_32, /*hidden argument*/NULL);
		V_2 = L_33;
		WWW_t548 * L_34 = V_2;
		ResponseDelegate_1_t719 * L_35 = ___callback;
		Object_t * L_36 = NetworkMatch_ProcessMatchResponse_TisBasicResponse_t601_m3578(__this, L_34, L_35, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisBasicResponse_t601_m3578_MethodInfo_var);
		Coroutine_t235 * L_37 = MonoBehaviour_StartCoroutine_m260(__this, L_36, /*hidden argument*/NULL);
		return L_37;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NodeID,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern TypeInfo* DropConnectionRequest_t608_il2cpp_TypeInfo_var;
extern "C" Coroutine_t235 * NetworkMatch_DropConnection_m3223 (NetworkMatch_t624 * __this, uint64_t ___netId, uint16_t ___dropNodeId, ResponseDelegate_1_t719 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DropConnectionRequest_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1020);
		s_Il2CppMethodIntialized = true;
	}
	DropConnectionRequest_t608 * V_0 = {0};
	{
		DropConnectionRequest_t608 * L_0 = (DropConnectionRequest_t608 *)il2cpp_codegen_object_new (DropConnectionRequest_t608_il2cpp_TypeInfo_var);
		DropConnectionRequest__ctor_m3158(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		DropConnectionRequest_t608 * L_1 = V_0;
		uint64_t L_2 = ___netId;
		NullCheck(L_1);
		DropConnectionRequest_set_networkId_m3160(L_1, L_2, /*hidden argument*/NULL);
		DropConnectionRequest_t608 * L_3 = V_0;
		uint16_t L_4 = ___dropNodeId;
		NullCheck(L_3);
		DropConnectionRequest_set_nodeId_m3162(L_3, L_4, /*hidden argument*/NULL);
		DropConnectionRequest_t608 * L_5 = V_0;
		ResponseDelegate_1_t719 * L_6 = ___callback;
		Coroutine_t235 * L_7 = NetworkMatch_DropConnection_m3224(__this, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Match.DropConnectionRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern TypeInfo* Uri_t623_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t552_il2cpp_TypeInfo_var;
extern TypeInfo* Utility_t622_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t616_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t615_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t617_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t618_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t548_il2cpp_TypeInfo_var;
extern const MethodInfo* NetworkMatch_ProcessMatchResponse_TisBasicResponse_t601_m3578_MethodInfo_var;
extern "C" Coroutine_t235 * NetworkMatch_DropConnection_m3224 (NetworkMatch_t624 * __this, DropConnectionRequest_t608 * ___req, ResponseDelegate_1_t719 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1011);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		WWWForm_t552_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1014);
		Utility_t622_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1009);
		SourceID_t616_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(998);
		AppID_t615_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(999);
		NetworkID_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1003);
		NodeID_t618_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1004);
		WWW_t548_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1015);
		NetworkMatch_ProcessMatchResponse_TisBasicResponse_t601_m3578_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483971);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t623 * V_0 = {0};
	WWWForm_t552 * V_1 = {0};
	WWW_t548 * V_2 = {0};
	{
		Uri_t623 * L_0 = NetworkMatch_get_baseUri_m3214(__this, /*hidden argument*/NULL);
		Uri_t623 * L_1 = (Uri_t623 *)il2cpp_codegen_object_new (Uri_t623_il2cpp_TypeInfo_var);
		Uri__ctor_m3582(L_1, L_0, (String_t*) &_stringLiteral295, /*hidden argument*/NULL);
		V_0 = L_1;
		Uri_t623 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m340(NULL /*static, unused*/, (String_t*) &_stringLiteral296, L_2, /*hidden argument*/NULL);
		Debug_Log_m243(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		WWWForm_t552 * L_4 = (WWWForm_t552 *)il2cpp_codegen_object_new (WWWForm_t552_il2cpp_TypeInfo_var);
		WWWForm__ctor_m2782(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		WWWForm_t552 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t622_il2cpp_TypeInfo_var);
		uint64_t L_6 = Utility_GetSourceID_m3209(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_7 = L_6;
		Object_t * L_8 = Box(SourceID_t616_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_8);
		NullCheck(L_5);
		WWWForm_AddField_m2783(L_5, (String_t*) &_stringLiteral283, L_9, /*hidden argument*/NULL);
		WWWForm_t552 * L_10 = V_1;
		uint64_t L_11 = Utility_GetAppID_m3211(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_12 = L_11;
		Object_t * L_13 = Box(AppID_t615_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_13);
		NullCheck(L_10);
		WWWForm_AddField_m2783(L_10, (String_t*) &_stringLiteral284, L_14, /*hidden argument*/NULL);
		WWWForm_t552 * L_15 = V_1;
		DropConnectionRequest_t608 * L_16 = ___req;
		NullCheck(L_16);
		uint64_t L_17 = DropConnectionRequest_get_networkId_m3159(L_16, /*hidden argument*/NULL);
		NetworkAccessToken_t619 * L_18 = Utility_GetAccessTokenForNetwork_m3212(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		String_t* L_19 = NetworkAccessToken_GetByteString_m3207(L_18, /*hidden argument*/NULL);
		NullCheck(L_15);
		WWWForm_AddField_m2783(L_15, (String_t*) &_stringLiteral259, L_19, /*hidden argument*/NULL);
		WWWForm_t552 * L_20 = V_1;
		NullCheck(L_20);
		WWWForm_AddField_m2785(L_20, (String_t*) &_stringLiteral285, 0, /*hidden argument*/NULL);
		WWWForm_t552 * L_21 = V_1;
		DropConnectionRequest_t608 * L_22 = ___req;
		NullCheck(L_22);
		uint64_t L_23 = DropConnectionRequest_get_networkId_m3159(L_22, /*hidden argument*/NULL);
		uint64_t L_24 = L_23;
		Object_t * L_25 = Box(NetworkID_t617_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_25);
		String_t* L_26 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_25);
		NullCheck(L_21);
		WWWForm_AddField_m2783(L_21, (String_t*) &_stringLiteral258, L_26, /*hidden argument*/NULL);
		WWWForm_t552 * L_27 = V_1;
		DropConnectionRequest_t608 * L_28 = ___req;
		NullCheck(L_28);
		uint16_t L_29 = DropConnectionRequest_get_nodeId_m3161(L_28, /*hidden argument*/NULL);
		uint16_t L_30 = L_29;
		Object_t * L_31 = Box(NodeID_t618_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_31);
		String_t* L_32 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_31);
		NullCheck(L_27);
		WWWForm_AddField_m2783(L_27, (String_t*) &_stringLiteral260, L_32, /*hidden argument*/NULL);
		WWWForm_t552 * L_33 = V_1;
		NullCheck(L_33);
		Dictionary_2_t710 * L_34 = WWWForm_get_headers_m2786(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_34, (String_t*) &_stringLiteral289, (String_t*) &_stringLiteral290);
		Uri_t623 * L_35 = V_0;
		NullCheck(L_35);
		String_t* L_36 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_35);
		WWWForm_t552 * L_37 = V_1;
		WWW_t548 * L_38 = (WWW_t548 *)il2cpp_codegen_object_new (WWW_t548_il2cpp_TypeInfo_var);
		WWW__ctor_m2767(L_38, L_36, L_37, /*hidden argument*/NULL);
		V_2 = L_38;
		WWW_t548 * L_39 = V_2;
		ResponseDelegate_1_t719 * L_40 = ___callback;
		Object_t * L_41 = NetworkMatch_ProcessMatchResponse_TisBasicResponse_t601_m3578(__this, L_39, L_40, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisBasicResponse_t601_m3578_MethodInfo_var);
		Coroutine_t235 * L_42 = MonoBehaviour_StartCoroutine_m260(__this, L_41, /*hidden argument*/NULL);
		return L_42;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(System.Int32,System.Int32,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern TypeInfo* ListMatchRequest_t609_il2cpp_TypeInfo_var;
extern "C" Coroutine_t235 * NetworkMatch_ListMatches_m3225 (NetworkMatch_t624 * __this, int32_t ___startPageNumber, int32_t ___resultPageSize, String_t* ___matchNameFilter, ResponseDelegate_1_t720 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ListMatchRequest_t609_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1021);
		s_Il2CppMethodIntialized = true;
	}
	ListMatchRequest_t609 * V_0 = {0};
	{
		ListMatchRequest_t609 * L_0 = (ListMatchRequest_t609 *)il2cpp_codegen_object_new (ListMatchRequest_t609_il2cpp_TypeInfo_var);
		ListMatchRequest__ctor_m3164(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ListMatchRequest_t609 * L_1 = V_0;
		int32_t L_2 = ___startPageNumber;
		NullCheck(L_1);
		ListMatchRequest_set_pageNum_m3168(L_1, L_2, /*hidden argument*/NULL);
		ListMatchRequest_t609 * L_3 = V_0;
		int32_t L_4 = ___resultPageSize;
		NullCheck(L_3);
		ListMatchRequest_set_pageSize_m3166(L_3, L_4, /*hidden argument*/NULL);
		ListMatchRequest_t609 * L_5 = V_0;
		String_t* L_6 = ___matchNameFilter;
		NullCheck(L_5);
		ListMatchRequest_set_nameFilter_m3170(L_5, L_6, /*hidden argument*/NULL);
		ListMatchRequest_t609 * L_7 = V_0;
		ResponseDelegate_1_t720 * L_8 = ___callback;
		Coroutine_t235 * L_9 = NetworkMatch_ListMatches_m3226(__this, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(UnityEngine.Networking.Match.ListMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern TypeInfo* Uri_t623_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t552_il2cpp_TypeInfo_var;
extern TypeInfo* Utility_t622_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t616_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t615_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t548_il2cpp_TypeInfo_var;
extern const MethodInfo* NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t614_m3579_MethodInfo_var;
extern "C" Coroutine_t235 * NetworkMatch_ListMatches_m3226 (NetworkMatch_t624 * __this, ListMatchRequest_t609 * ___req, ResponseDelegate_1_t720 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1011);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		WWWForm_t552_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1014);
		Utility_t622_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1009);
		SourceID_t616_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(998);
		AppID_t615_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(999);
		WWW_t548_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1015);
		NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t614_m3579_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483972);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t623 * V_0 = {0};
	WWWForm_t552 * V_1 = {0};
	WWW_t548 * V_2 = {0};
	{
		Uri_t623 * L_0 = NetworkMatch_get_baseUri_m3214(__this, /*hidden argument*/NULL);
		Uri_t623 * L_1 = (Uri_t623 *)il2cpp_codegen_object_new (Uri_t623_il2cpp_TypeInfo_var);
		Uri__ctor_m3582(L_1, L_0, (String_t*) &_stringLiteral297, /*hidden argument*/NULL);
		V_0 = L_1;
		Uri_t623 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m340(NULL /*static, unused*/, (String_t*) &_stringLiteral298, L_2, /*hidden argument*/NULL);
		Debug_Log_m243(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		WWWForm_t552 * L_4 = (WWWForm_t552 *)il2cpp_codegen_object_new (WWWForm_t552_il2cpp_TypeInfo_var);
		WWWForm__ctor_m2782(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		WWWForm_t552 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t622_il2cpp_TypeInfo_var);
		uint64_t L_6 = Utility_GetSourceID_m3209(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_7 = L_6;
		Object_t * L_8 = Box(SourceID_t616_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_8);
		NullCheck(L_5);
		WWWForm_AddField_m2783(L_5, (String_t*) &_stringLiteral283, L_9, /*hidden argument*/NULL);
		WWWForm_t552 * L_10 = V_1;
		uint64_t L_11 = Utility_GetAppID_m3211(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_12 = L_11;
		Object_t * L_13 = Box(AppID_t615_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_13);
		NullCheck(L_10);
		WWWForm_AddField_m2783(L_10, (String_t*) &_stringLiteral284, L_14, /*hidden argument*/NULL);
		WWWForm_t552 * L_15 = V_1;
		NullCheck(L_15);
		WWWForm_AddField_m2785(L_15, (String_t*) &_stringLiteral259, 0, /*hidden argument*/NULL);
		WWWForm_t552 * L_16 = V_1;
		NullCheck(L_16);
		WWWForm_AddField_m2785(L_16, (String_t*) &_stringLiteral285, 0, /*hidden argument*/NULL);
		WWWForm_t552 * L_17 = V_1;
		ListMatchRequest_t609 * L_18 = ___req;
		NullCheck(L_18);
		int32_t L_19 = ListMatchRequest_get_pageSize_m3165(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		WWWForm_AddField_m2785(L_17, (String_t*) &_stringLiteral299, L_19, /*hidden argument*/NULL);
		WWWForm_t552 * L_20 = V_1;
		ListMatchRequest_t609 * L_21 = ___req;
		NullCheck(L_21);
		int32_t L_22 = ListMatchRequest_get_pageNum_m3167(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		WWWForm_AddField_m2785(L_20, (String_t*) &_stringLiteral300, L_22, /*hidden argument*/NULL);
		WWWForm_t552 * L_23 = V_1;
		ListMatchRequest_t609 * L_24 = ___req;
		NullCheck(L_24);
		String_t* L_25 = ListMatchRequest_get_nameFilter_m3169(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		WWWForm_AddField_m2783(L_23, (String_t*) &_stringLiteral301, L_25, /*hidden argument*/NULL);
		WWWForm_t552 * L_26 = V_1;
		NullCheck(L_26);
		Dictionary_2_t710 * L_27 = WWWForm_get_headers_m2786(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_27, (String_t*) &_stringLiteral289, (String_t*) &_stringLiteral290);
		Uri_t623 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_28);
		WWWForm_t552 * L_30 = V_1;
		WWW_t548 * L_31 = (WWW_t548 *)il2cpp_codegen_object_new (WWW_t548_il2cpp_TypeInfo_var);
		WWW__ctor_m2767(L_31, L_29, L_30, /*hidden argument*/NULL);
		V_2 = L_31;
		WWW_t548 * L_32 = V_2;
		ResponseDelegate_1_t720 * L_33 = ___callback;
		Object_t * L_34 = NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t614_m3579(__this, L_32, L_33, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t614_m3579_MethodInfo_var);
		Coroutine_t235 * L_35 = MonoBehaviour_StartCoroutine_m260(__this, L_34, /*hidden argument*/NULL);
		return L_35;
	}
}
// SimpleJson.JsonArray
#include "UnityEngine_SimpleJson_JsonArray.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.JsonArray
#include "UnityEngine_SimpleJson_JsonArrayMethodDeclarations.h"

// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_23MethodDeclarations.h"
// SimpleJson.SimpleJson
#include "UnityEngine_SimpleJson_SimpleJsonMethodDeclarations.h"


// System.Void SimpleJson.JsonArray::.ctor()
extern TypeInfo* List_1_t341_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3585_MethodInfo_var;
extern "C" void JsonArray__ctor_m3227 (JsonArray_t625 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1023);
		List_1__ctor_m3585_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483973);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t341_il2cpp_TypeInfo_var);
		List_1__ctor_m3585(__this, /*hidden argument*/List_1__ctor_m3585_MethodInfo_var);
		return;
	}
}
// System.String SimpleJson.JsonArray::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* JsonArray_ToString_m3228 (JsonArray_t625 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B2_0 = {0};
	String_t* G_B1_0 = {0};
	{
		String_t* L_0 = SimpleJson_SerializeObject_m3249(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B2_0 = L_2;
	}

IL_0012:
	{
		return G_B2_0;
	}
}
// SimpleJson.JsonObject
#include "UnityEngine_SimpleJson_JsonObject.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.JsonObject
#include "UnityEngine_SimpleJson_JsonObjectMethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_9.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_3.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_9MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"


// System.Void SimpleJson.JsonObject::.ctor()
extern TypeInfo* Dictionary_2_t626_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3586_MethodInfo_var;
extern "C" void JsonObject__ctor_m3229 (JsonObject_t627 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1024);
		Dictionary_2__ctor_m3586_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483974);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		Dictionary_2_t626 * L_0 = (Dictionary_2_t626 *)il2cpp_codegen_object_new (Dictionary_2_t626_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3586(L_0, /*hidden argument*/Dictionary_2__ctor_m3586_MethodInfo_var);
		__this->____members_0 = L_0;
		return;
	}
}
// System.Collections.IEnumerator SimpleJson.JsonObject::System.Collections.IEnumerable.GetEnumerator()
extern TypeInfo* Enumerator_t753_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m3587_MethodInfo_var;
extern "C" Object_t * JsonObject_System_Collections_IEnumerable_GetEnumerator_m3230 (JsonObject_t627 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1025);
		Dictionary_2_GetEnumerator_m3587_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483975);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t626 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		Enumerator_t753  L_1 = Dictionary_2_GetEnumerator_m3587(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m3587_MethodInfo_var);
		Enumerator_t753  L_2 = L_1;
		Object_t * L_3 = Box(Enumerator_t753_il2cpp_TypeInfo_var, &L_2);
		return (Object_t *)L_3;
	}
}
// System.Void SimpleJson.JsonObject::Add(System.String,System.Object)
extern "C" void JsonObject_Add_m3231 (JsonObject_t627 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Dictionary_2_t626 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		Object_t * L_2 = ___value;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_0, L_1, L_2);
		return;
	}
}
// System.Collections.Generic.ICollection`1<System.String> SimpleJson.JsonObject::get_Keys()
extern const MethodInfo* Dictionary_2_get_Keys_m3588_MethodInfo_var;
extern "C" Object_t* JsonObject_get_Keys_m3232 (JsonObject_t627 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_get_Keys_m3588_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483976);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t626 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		KeyCollection_t754 * L_1 = Dictionary_2_get_Keys_m3588(L_0, /*hidden argument*/Dictionary_2_get_Keys_m3588_MethodInfo_var);
		return L_1;
	}
}
// System.Boolean SimpleJson.JsonObject::Remove(System.String)
extern "C" bool JsonObject_Remove_m3233 (JsonObject_t627 * __this, String_t* ___key, const MethodInfo* method)
{
	{
		Dictionary_2_t626 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(!0) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean SimpleJson.JsonObject::TryGetValue(System.String,System.Object&)
extern "C" bool JsonObject_TryGetValue_m3234 (JsonObject_t627 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method)
{
	{
		Dictionary_2_t626 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		Object_t ** L_2 = ___value;
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Collections.Generic.ICollection`1<System.Object> SimpleJson.JsonObject::get_Values()
extern const MethodInfo* Dictionary_2_get_Values_m3589_MethodInfo_var;
extern "C" Object_t* JsonObject_get_Values_m3235 (JsonObject_t627 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_get_Values_m3589_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483977);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t626 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		ValueCollection_t755 * L_1 = Dictionary_2_get_Values_m3589(L_0, /*hidden argument*/Dictionary_2_get_Values_m3589_MethodInfo_var);
		return L_1;
	}
}
// System.Object SimpleJson.JsonObject::get_Item(System.String)
extern "C" Object_t * JsonObject_get_Item_m3236 (JsonObject_t627 * __this, String_t* ___key, const MethodInfo* method)
{
	{
		Dictionary_2_t626 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_0, L_1);
		return L_2;
	}
}
// System.Void SimpleJson.JsonObject::set_Item(System.String,System.Object)
extern "C" void JsonObject_set_Item_m3237 (JsonObject_t627 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Dictionary_2_t626 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		Object_t * L_2 = ___value;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void SimpleJson.JsonObject::Add(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern const MethodInfo* KeyValuePair_2_get_Key_m3590_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m3591_MethodInfo_var;
extern "C" void JsonObject_Add_m3238 (JsonObject_t627 * __this, KeyValuePair_2_t724  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_get_Key_m3590_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483978);
		KeyValuePair_2_get_Value_m3591_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483979);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t626 * L_0 = (__this->____members_0);
		String_t* L_1 = KeyValuePair_2_get_Key_m3590((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m3590_MethodInfo_var);
		Object_t * L_2 = KeyValuePair_2_get_Value_m3591((&___item), /*hidden argument*/KeyValuePair_2_get_Value_m3591_MethodInfo_var);
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void SimpleJson.JsonObject::Clear()
extern "C" void JsonObject_Clear_m3239 (JsonObject_t627 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t626 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear() */, L_0);
		return;
	}
}
// System.Boolean SimpleJson.JsonObject::Contains(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern const MethodInfo* KeyValuePair_2_get_Key_m3590_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m3591_MethodInfo_var;
extern "C" bool JsonObject_Contains_m3240 (JsonObject_t627 * __this, KeyValuePair_2_t724  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_get_Key_m3590_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483978);
		KeyValuePair_2_get_Value_m3591_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483979);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		Dictionary_2_t626 * L_0 = (__this->____members_0);
		String_t* L_1 = KeyValuePair_2_get_Key_m3590((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m3590_MethodInfo_var);
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		Dictionary_2_t626 * L_3 = (__this->____members_0);
		String_t* L_4 = KeyValuePair_2_get_Key_m3590((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m3590_MethodInfo_var);
		NullCheck(L_3);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_3, L_4);
		Object_t * L_6 = KeyValuePair_2_get_Value_m3591((&___item), /*hidden argument*/KeyValuePair_2_get_Value_m3591_MethodInfo_var);
		G_B3_0 = ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)L_6))? 1 : 0);
		goto IL_0035;
	}

IL_0034:
	{
		G_B3_0 = 0;
	}

IL_0035:
	{
		return G_B3_0;
	}
}
// System.Void SimpleJson.JsonObject::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[],System.Int32)
extern TypeInfo* ArgumentNullException_t756_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t725_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t59_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t69_il2cpp_TypeInfo_var;
extern "C" void JsonObject_CopyTo_m3241 (JsonObject_t627 * __this, KeyValuePair_2U5BU5D_t723* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t756_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1026);
		IEnumerator_1_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1027);
		IEnumerator_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		IDisposable_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t724  V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		KeyValuePair_2U5BU5D_t723* L_0 = ___array;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t756 * L_1 = (ArgumentNullException_t756 *)il2cpp_codegen_object_new (ArgumentNullException_t756_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3592(L_1, (String_t*) &_stringLiteral306, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 SimpleJson.JsonObject::get_Count() */, __this);
		V_0 = L_2;
		Object_t* L_3 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(11 /* System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> SimpleJson.JsonObject::GetEnumerator() */, __this);
		V_2 = L_3;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004d;
		}

IL_0024:
		{
			Object_t* L_4 = V_2;
			NullCheck(L_4);
			KeyValuePair_2_t724  L_5 = (KeyValuePair_2_t724 )InterfaceFuncInvoker0< KeyValuePair_2_t724  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current() */, IEnumerator_1_t725_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			KeyValuePair_2U5BU5D_t723* L_6 = ___array;
			int32_t L_7 = ___arrayIndex;
			int32_t L_8 = L_7;
			___arrayIndex = ((int32_t)((int32_t)L_8+(int32_t)1));
			NullCheck(L_6);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_8);
			KeyValuePair_2_t724  L_9 = V_1;
			*((KeyValuePair_2_t724 *)(KeyValuePair_2_t724 *)SZArrayLdElema(L_6, L_8)) = L_9;
			int32_t L_10 = V_0;
			int32_t L_11 = ((int32_t)((int32_t)L_10-(int32_t)1));
			V_0 = L_11;
			if ((((int32_t)L_11) > ((int32_t)0)))
			{
				goto IL_004d;
			}
		}

IL_0048:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005d);
		}

IL_004d:
		{
			Object_t* L_12 = V_2;
			NullCheck(L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t59_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_0024;
			}
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_005d;
	}

FINALLY_005d:
	{ // begin finally (depth: 1)
		{
			Object_t* L_14 = V_2;
			if (L_14)
			{
				goto IL_0061;
			}
		}

IL_0060:
		{
			IL2CPP_END_FINALLY(93)
		}

IL_0061:
		{
			Object_t* L_15 = V_2;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t69_il2cpp_TypeInfo_var, L_15);
			IL2CPP_END_FINALLY(93)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(93)
	{
		IL2CPP_JUMP_TBL(0x68, IL_0068)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_0068:
	{
		return;
	}
}
// System.Int32 SimpleJson.JsonObject::get_Count()
extern "C" int32_t JsonObject_get_Count_m3242 (JsonObject_t627 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t626 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count() */, L_0);
		return L_1;
	}
}
// System.Boolean SimpleJson.JsonObject::get_IsReadOnly()
extern "C" bool JsonObject_get_IsReadOnly_m3243 (JsonObject_t627 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean SimpleJson.JsonObject::Remove(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern const MethodInfo* KeyValuePair_2_get_Key_m3590_MethodInfo_var;
extern "C" bool JsonObject_Remove_m3244 (JsonObject_t627 * __this, KeyValuePair_2_t724  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_get_Key_m3590_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483978);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t626 * L_0 = (__this->____members_0);
		String_t* L_1 = KeyValuePair_2_get_Key_m3590((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m3590_MethodInfo_var);
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(!0) */, L_0, L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> SimpleJson.JsonObject::GetEnumerator()
extern TypeInfo* Enumerator_t753_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m3587_MethodInfo_var;
extern "C" Object_t* JsonObject_GetEnumerator_m3245 (JsonObject_t627 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1025);
		Dictionary_2_GetEnumerator_m3587_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483975);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t626 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		Enumerator_t753  L_1 = Dictionary_2_GetEnumerator_m3587(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m3587_MethodInfo_var);
		Enumerator_t753  L_2 = L_1;
		Object_t * L_3 = Box(Enumerator_t753_il2cpp_TypeInfo_var, &L_2);
		return (Object_t*)L_3;
	}
}
// System.String SimpleJson.JsonObject::ToString()
extern "C" String_t* JsonObject_ToString_m3246 (JsonObject_t627 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = SimpleJson_SerializeObject_m3249(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// SimpleJson.SimpleJson
#include "UnityEngine_SimpleJson_SimpleJson.h"
#ifndef _MSC_VER
#else
#endif

// SimpleJson.PocoJsonSerializerStrategy
#include "UnityEngine_SimpleJson_PocoJsonSerializerStrategy.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_23.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.StringComparison
#include "mscorlib_System_StringComparison.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.SByte
#include "mscorlib_System_SByte.h"
// System.Int16
#include "mscorlib_System_Int16.h"
// SimpleJson.PocoJsonSerializerStrategy
#include "UnityEngine_SimpleJson_PocoJsonSerializerStrategyMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Double
#include "mscorlib_System_DoubleMethodDeclarations.h"
// System.Int64
#include "mscorlib_System_Int64MethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.Decimal
#include "mscorlib_System_DecimalMethodDeclarations.h"


// System.Boolean SimpleJson.SimpleJson::TryDeserializeObject(System.String,System.Object&)
extern "C" bool SimpleJson_TryDeserializeObject_m3247 (Object_t * __this /* static, unused */, String_t* ___json, Object_t ** ___obj, const MethodInfo* method)
{
	bool V_0 = false;
	CharU5BU5D_t101* V_1 = {0};
	int32_t V_2 = 0;
	{
		V_0 = 1;
		String_t* L_0 = ___json;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_1 = ___json;
		NullCheck(L_1);
		CharU5BU5D_t101* L_2 = String_ToCharArray_m3593(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		V_2 = 0;
		Object_t ** L_3 = ___obj;
		CharU5BU5D_t101* L_4 = V_1;
		Object_t * L_5 = SimpleJson_ParseValue_m3252(NULL /*static, unused*/, L_4, (&V_2), (&V_0), /*hidden argument*/NULL);
		*((Object_t **)(L_3)) = (Object_t *)L_5;
		goto IL_0025;
	}

IL_0022:
	{
		Object_t ** L_6 = ___obj;
		*((Object_t **)(L_6)) = (Object_t *)NULL;
	}

IL_0025:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object,SimpleJson.IJsonSerializerStrategy)
extern TypeInfo* StringBuilder_t343_il2cpp_TypeInfo_var;
extern "C" String_t* SimpleJson_SerializeObject_m3248 (Object_t * __this /* static, unused */, Object_t * ___json, Object_t * ___jsonSerializerStrategy, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(200);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t343 * V_0 = {0};
	bool V_1 = false;
	String_t* G_B3_0 = {0};
	{
		StringBuilder_t343 * L_0 = (StringBuilder_t343 *)il2cpp_codegen_object_new (StringBuilder_t343_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3594(L_0, ((int32_t)2000), /*hidden argument*/NULL);
		V_0 = L_0;
		Object_t * L_1 = ___jsonSerializerStrategy;
		Object_t * L_2 = ___json;
		StringBuilder_t343 * L_3 = V_0;
		bool L_4 = SimpleJson_SerializeValue_m3260(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		StringBuilder_t343 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_6);
		G_B3_0 = L_7;
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = ((String_t*)(NULL));
	}

IL_0026:
	{
		return G_B3_0;
	}
}
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object)
extern "C" String_t* SimpleJson_SerializeObject_m3249 (Object_t * __this /* static, unused */, Object_t * ___json, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___json;
		Object_t * L_1 = SimpleJson_get_CurrentJsonSerializerStrategy_m3266(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_2 = SimpleJson_SerializeObject_m3248(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Object> SimpleJson.SimpleJson::ParseObject(System.Char[],System.Int32&,System.Boolean&)
extern TypeInfo* JsonObject_t627_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t716_il2cpp_TypeInfo_var;
extern "C" Object_t* SimpleJson_ParseObject_m3250 (Object_t * __this /* static, unused */, CharU5BU5D_t101* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JsonObject_t627_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1029);
		IDictionary_2_t716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1000);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = {0};
	Object_t * V_4 = {0};
	{
		JsonObject_t627 * L_0 = (JsonObject_t627 *)il2cpp_codegen_object_new (JsonObject_t627_il2cpp_TypeInfo_var);
		JsonObject__ctor_m3229(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		CharU5BU5D_t101* L_1 = ___json;
		int32_t* L_2 = ___index;
		SimpleJson_NextToken_m3259(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_2 = 0;
		goto IL_0096;
	}

IL_0015:
	{
		CharU5BU5D_t101* L_3 = ___json;
		int32_t* L_4 = ___index;
		int32_t L_5 = SimpleJson_LookAhead_m3258(NULL /*static, unused*/, L_3, (*((int32_t*)L_4)), /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		bool* L_7 = ___success;
		*((int8_t*)(L_7)) = (int8_t)0;
		return (Object_t*)NULL;
	}

IL_0029:
	{
		int32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)6))))
		{
			goto IL_003d;
		}
	}
	{
		CharU5BU5D_t101* L_9 = ___json;
		int32_t* L_10 = ___index;
		SimpleJson_NextToken_m3259(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		goto IL_0096;
	}

IL_003d:
	{
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		CharU5BU5D_t101* L_12 = ___json;
		int32_t* L_13 = ___index;
		SimpleJson_NextToken_m3259(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		Object_t* L_14 = V_0;
		return L_14;
	}

IL_004e:
	{
		CharU5BU5D_t101* L_15 = ___json;
		int32_t* L_16 = ___index;
		bool* L_17 = ___success;
		String_t* L_18 = SimpleJson_ParseString_m3253(NULL /*static, unused*/, L_15, L_16, L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		bool* L_19 = ___success;
		if ((*((int8_t*)L_19)))
		{
			goto IL_0063;
		}
	}
	{
		bool* L_20 = ___success;
		*((int8_t*)(L_20)) = (int8_t)0;
		return (Object_t*)NULL;
	}

IL_0063:
	{
		CharU5BU5D_t101* L_21 = ___json;
		int32_t* L_22 = ___index;
		int32_t L_23 = SimpleJson_NextToken_m3259(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) == ((int32_t)5)))
		{
			goto IL_0077;
		}
	}
	{
		bool* L_25 = ___success;
		*((int8_t*)(L_25)) = (int8_t)0;
		return (Object_t*)NULL;
	}

IL_0077:
	{
		CharU5BU5D_t101* L_26 = ___json;
		int32_t* L_27 = ___index;
		bool* L_28 = ___success;
		Object_t * L_29 = SimpleJson_ParseValue_m3252(NULL /*static, unused*/, L_26, L_27, L_28, /*hidden argument*/NULL);
		V_4 = L_29;
		bool* L_30 = ___success;
		if ((*((int8_t*)L_30)))
		{
			goto IL_008d;
		}
	}
	{
		bool* L_31 = ___success;
		*((int8_t*)(L_31)) = (int8_t)0;
		return (Object_t*)NULL;
	}

IL_008d:
	{
		Object_t* L_32 = V_0;
		String_t* L_33 = V_3;
		Object_t * L_34 = V_4;
		NullCheck(L_32);
		InterfaceActionInvoker2< String_t*, Object_t * >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(!0,!1) */, IDictionary_2_t716_il2cpp_TypeInfo_var, L_32, L_33, L_34);
	}

IL_0096:
	{
		bool L_35 = V_2;
		if (!L_35)
		{
			goto IL_0015;
		}
	}
	{
		Object_t* L_36 = V_0;
		return L_36;
	}
}
// SimpleJson.JsonArray SimpleJson.SimpleJson::ParseArray(System.Char[],System.Int32&,System.Boolean&)
extern TypeInfo* JsonArray_t625_il2cpp_TypeInfo_var;
extern "C" JsonArray_t625 * SimpleJson_ParseArray_m3251 (Object_t * __this /* static, unused */, CharU5BU5D_t101* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JsonArray_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1030);
		s_Il2CppMethodIntialized = true;
	}
	JsonArray_t625 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	Object_t * V_3 = {0};
	{
		JsonArray_t625 * L_0 = (JsonArray_t625 *)il2cpp_codegen_object_new (JsonArray_t625_il2cpp_TypeInfo_var);
		JsonArray__ctor_m3227(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		CharU5BU5D_t101* L_1 = ___json;
		int32_t* L_2 = ___index;
		SimpleJson_NextToken_m3259(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_1 = 0;
		goto IL_006a;
	}

IL_0015:
	{
		CharU5BU5D_t101* L_3 = ___json;
		int32_t* L_4 = ___index;
		int32_t L_5 = SimpleJson_LookAhead_m3258(NULL /*static, unused*/, L_3, (*((int32_t*)L_4)), /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = V_2;
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		bool* L_7 = ___success;
		*((int8_t*)(L_7)) = (int8_t)0;
		return (JsonArray_t625 *)NULL;
	}

IL_0029:
	{
		int32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)6))))
		{
			goto IL_003d;
		}
	}
	{
		CharU5BU5D_t101* L_9 = ___json;
		int32_t* L_10 = ___index;
		SimpleJson_NextToken_m3259(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		goto IL_006a;
	}

IL_003d:
	{
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)4))))
		{
			goto IL_0051;
		}
	}
	{
		CharU5BU5D_t101* L_12 = ___json;
		int32_t* L_13 = ___index;
		SimpleJson_NextToken_m3259(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		goto IL_0070;
	}

IL_0051:
	{
		CharU5BU5D_t101* L_14 = ___json;
		int32_t* L_15 = ___index;
		bool* L_16 = ___success;
		Object_t * L_17 = SimpleJson_ParseValue_m3252(NULL /*static, unused*/, L_14, L_15, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		bool* L_18 = ___success;
		if ((*((int8_t*)L_18)))
		{
			goto IL_0063;
		}
	}
	{
		return (JsonArray_t625 *)NULL;
	}

IL_0063:
	{
		JsonArray_t625 * L_19 = V_0;
		Object_t * L_20 = V_3;
		NullCheck(L_19);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_19, L_20);
	}

IL_006a:
	{
		bool L_21 = V_1;
		if (!L_21)
		{
			goto IL_0015;
		}
	}

IL_0070:
	{
		JsonArray_t625 * L_22 = V_0;
		return L_22;
	}
}
// System.Object SimpleJson.SimpleJson::ParseValue(System.Char[],System.Int32&,System.Boolean&)
extern TypeInfo* Boolean_t111_il2cpp_TypeInfo_var;
extern "C" Object_t * SimpleJson_ParseValue_m3252 (Object_t * __this /* static, unused */, CharU5BU5D_t101* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		CharU5BU5D_t101* L_0 = ___json;
		int32_t* L_1 = ___index;
		int32_t L_2 = SimpleJson_LookAhead_m3258(NULL /*static, unused*/, L_0, (*((int32_t*)L_1)), /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (L_3 == 0)
		{
			goto IL_0090;
		}
		if (L_3 == 1)
		{
			goto IL_0056;
		}
		if (L_3 == 2)
		{
			goto IL_0095;
		}
		if (L_3 == 3)
		{
			goto IL_005f;
		}
		if (L_3 == 4)
		{
			goto IL_0095;
		}
		if (L_3 == 5)
		{
			goto IL_0095;
		}
		if (L_3 == 6)
		{
			goto IL_0095;
		}
		if (L_3 == 7)
		{
			goto IL_0044;
		}
		if (L_3 == 8)
		{
			goto IL_004d;
		}
		if (L_3 == 9)
		{
			goto IL_0068;
		}
		if (L_3 == 10)
		{
			goto IL_0077;
		}
		if (L_3 == 11)
		{
			goto IL_0086;
		}
	}
	{
		goto IL_0095;
	}

IL_0044:
	{
		CharU5BU5D_t101* L_4 = ___json;
		int32_t* L_5 = ___index;
		bool* L_6 = ___success;
		String_t* L_7 = SimpleJson_ParseString_m3253(NULL /*static, unused*/, L_4, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_004d:
	{
		CharU5BU5D_t101* L_8 = ___json;
		int32_t* L_9 = ___index;
		bool* L_10 = ___success;
		Object_t * L_11 = SimpleJson_ParseNumber_m3255(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0056:
	{
		CharU5BU5D_t101* L_12 = ___json;
		int32_t* L_13 = ___index;
		bool* L_14 = ___success;
		Object_t* L_15 = SimpleJson_ParseObject_m3250(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/NULL);
		return L_15;
	}

IL_005f:
	{
		CharU5BU5D_t101* L_16 = ___json;
		int32_t* L_17 = ___index;
		bool* L_18 = ___success;
		JsonArray_t625 * L_19 = SimpleJson_ParseArray_m3251(NULL /*static, unused*/, L_16, L_17, L_18, /*hidden argument*/NULL);
		return L_19;
	}

IL_0068:
	{
		CharU5BU5D_t101* L_20 = ___json;
		int32_t* L_21 = ___index;
		SimpleJson_NextToken_m3259(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		bool L_22 = 1;
		Object_t * L_23 = Box(Boolean_t111_il2cpp_TypeInfo_var, &L_22);
		return L_23;
	}

IL_0077:
	{
		CharU5BU5D_t101* L_24 = ___json;
		int32_t* L_25 = ___index;
		SimpleJson_NextToken_m3259(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		bool L_26 = 0;
		Object_t * L_27 = Box(Boolean_t111_il2cpp_TypeInfo_var, &L_26);
		return L_27;
	}

IL_0086:
	{
		CharU5BU5D_t101* L_28 = ___json;
		int32_t* L_29 = ___index;
		SimpleJson_NextToken_m3259(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		return NULL;
	}

IL_0090:
	{
		goto IL_0095;
	}

IL_0095:
	{
		bool* L_30 = ___success;
		*((int8_t*)(L_30)) = (int8_t)0;
		return NULL;
	}
}
// System.String SimpleJson.SimpleJson::ParseString(System.Char[],System.Int32&,System.Boolean&)
extern TypeInfo* StringBuilder_t343_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t757_il2cpp_TypeInfo_var;
extern "C" String_t* SimpleJson_ParseString_m3253 (Object_t * __this /* static, unused */, CharU5BU5D_t101* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(200);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		CultureInfo_t757_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1031);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t343 * V_0 = {0};
	uint16_t V_1 = 0x0;
	bool V_2 = false;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	{
		StringBuilder_t343 * L_0 = (StringBuilder_t343 *)il2cpp_codegen_object_new (StringBuilder_t343_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3594(L_0, ((int32_t)2000), /*hidden argument*/NULL);
		V_0 = L_0;
		CharU5BU5D_t101* L_1 = ___json;
		int32_t* L_2 = ___index;
		SimpleJson_EatWhitespace_m3257(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		CharU5BU5D_t101* L_3 = ___json;
		int32_t* L_4 = ___index;
		int32_t* L_5 = ___index;
		int32_t L_6 = (*((int32_t*)L_5));
		V_6 = L_6;
		*((int32_t*)(L_4)) = (int32_t)((int32_t)((int32_t)L_6+(int32_t)1));
		int32_t L_7 = V_6;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_7);
		int32_t L_8 = L_7;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_3, L_8));
		V_2 = 0;
		goto IL_0239;
	}

IL_0027:
	{
		int32_t* L_9 = ___index;
		CharU5BU5D_t101* L_10 = ___json;
		NullCheck(L_10);
		if ((!(((uint32_t)(*((int32_t*)L_9))) == ((uint32_t)(((int32_t)(((Array_t *)L_10)->max_length)))))))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_023f;
	}

IL_0036:
	{
		CharU5BU5D_t101* L_11 = ___json;
		int32_t* L_12 = ___index;
		int32_t* L_13 = ___index;
		int32_t L_14 = (*((int32_t*)L_13));
		V_6 = L_14;
		*((int32_t*)(L_12)) = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
		int32_t L_15 = V_6;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_15);
		int32_t L_16 = L_15;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_11, L_16));
		uint16_t L_17 = V_1;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0053;
		}
	}
	{
		V_2 = 1;
		goto IL_023f;
	}

IL_0053:
	{
		uint16_t L_18 = V_1;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0231;
		}
	}
	{
		int32_t* L_19 = ___index;
		CharU5BU5D_t101* L_20 = ___json;
		NullCheck(L_20);
		if ((!(((uint32_t)(*((int32_t*)L_19))) == ((uint32_t)(((int32_t)(((Array_t *)L_20)->max_length)))))))
		{
			goto IL_006a;
		}
	}
	{
		goto IL_023f;
	}

IL_006a:
	{
		CharU5BU5D_t101* L_21 = ___json;
		int32_t* L_22 = ___index;
		int32_t* L_23 = ___index;
		int32_t L_24 = (*((int32_t*)L_23));
		V_6 = L_24;
		*((int32_t*)(L_22)) = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
		int32_t L_25 = V_6;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_25);
		int32_t L_26 = L_25;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_21, L_26));
		uint16_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_008e;
		}
	}
	{
		StringBuilder_t343 * L_28 = V_0;
		NullCheck(L_28);
		StringBuilder_Append_m1871(L_28, ((int32_t)34), /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_008e:
	{
		uint16_t L_29 = V_1;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00a4;
		}
	}
	{
		StringBuilder_t343 * L_30 = V_0;
		NullCheck(L_30);
		StringBuilder_Append_m1871(L_30, ((int32_t)92), /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_00a4:
	{
		uint16_t L_31 = V_1;
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00ba;
		}
	}
	{
		StringBuilder_t343 * L_32 = V_0;
		NullCheck(L_32);
		StringBuilder_Append_m1871(L_32, ((int32_t)47), /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_00ba:
	{
		uint16_t L_33 = V_1;
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)98)))))
		{
			goto IL_00cf;
		}
	}
	{
		StringBuilder_t343 * L_34 = V_0;
		NullCheck(L_34);
		StringBuilder_Append_m1871(L_34, 8, /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_00cf:
	{
		uint16_t L_35 = V_1;
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_00e5;
		}
	}
	{
		StringBuilder_t343 * L_36 = V_0;
		NullCheck(L_36);
		StringBuilder_Append_m1871(L_36, ((int32_t)12), /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_00e5:
	{
		uint16_t L_37 = V_1;
		if ((!(((uint32_t)L_37) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_00fb;
		}
	}
	{
		StringBuilder_t343 * L_38 = V_0;
		NullCheck(L_38);
		StringBuilder_Append_m1871(L_38, ((int32_t)10), /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_00fb:
	{
		uint16_t L_39 = V_1;
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_0111;
		}
	}
	{
		StringBuilder_t343 * L_40 = V_0;
		NullCheck(L_40);
		StringBuilder_Append_m1871(L_40, ((int32_t)13), /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_0111:
	{
		uint16_t L_41 = V_1;
		if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_0127;
		}
	}
	{
		StringBuilder_t343 * L_42 = V_0;
		NullCheck(L_42);
		StringBuilder_Append_m1871(L_42, ((int32_t)9), /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_0127:
	{
		uint16_t L_43 = V_1;
		if ((!(((uint32_t)L_43) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_022c;
		}
	}
	{
		CharU5BU5D_t101* L_44 = ___json;
		NullCheck(L_44);
		int32_t* L_45 = ___index;
		V_3 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_44)->max_length)))-(int32_t)(*((int32_t*)L_45))));
		int32_t L_46 = V_3;
		if ((((int32_t)L_46) < ((int32_t)4)))
		{
			goto IL_0227;
		}
	}
	{
		bool* L_47 = ___success;
		CharU5BU5D_t101* L_48 = ___json;
		int32_t* L_49 = ___index;
		String_t* L_50 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_50 = String_CreateString_m3595(L_50, L_48, (*((int32_t*)L_49)), 4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t757_il2cpp_TypeInfo_var);
		CultureInfo_t757 * L_51 = CultureInfo_get_InvariantCulture_m3596(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_52 = UInt32_TryParse_m3597(NULL /*static, unused*/, L_50, ((int32_t)515), L_51, (&V_4), /*hidden argument*/NULL);
		bool L_53 = L_52;
		V_7 = L_53;
		*((int8_t*)(L_47)) = (int8_t)L_53;
		bool L_54 = V_7;
		if (L_54)
		{
			goto IL_0169;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_55 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_55;
	}

IL_0169:
	{
		uint32_t L_56 = V_4;
		if ((!(((uint32_t)((int32_t)55296)) <= ((uint32_t)L_56))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_57 = V_4;
		if ((!(((uint32_t)L_57) <= ((uint32_t)((int32_t)56319)))))
		{
			goto IL_020e;
		}
	}
	{
		int32_t* L_58 = ___index;
		int32_t* L_59 = ___index;
		*((int32_t*)(L_58)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_59))+(int32_t)4));
		CharU5BU5D_t101* L_60 = ___json;
		NullCheck(L_60);
		int32_t* L_61 = ___index;
		V_3 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_60)->max_length)))-(int32_t)(*((int32_t*)L_61))));
		int32_t L_62 = V_3;
		if ((((int32_t)L_62) < ((int32_t)6)))
		{
			goto IL_0205;
		}
	}
	{
		CharU5BU5D_t101* L_63 = ___json;
		int32_t* L_64 = ___index;
		String_t* L_65 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_65 = String_CreateString_m3595(L_65, L_63, (*((int32_t*)L_64)), 2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_66 = String_op_Equality_m334(NULL /*static, unused*/, L_65, (String_t*) &_stringLiteral307, /*hidden argument*/NULL);
		if (!L_66)
		{
			goto IL_0205;
		}
	}
	{
		CharU5BU5D_t101* L_67 = ___json;
		int32_t* L_68 = ___index;
		String_t* L_69 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_69 = String_CreateString_m3595(L_69, L_67, ((int32_t)((int32_t)(*((int32_t*)L_68))+(int32_t)2)), 4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t757_il2cpp_TypeInfo_var);
		CultureInfo_t757 * L_70 = CultureInfo_get_InvariantCulture_m3596(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_71 = UInt32_TryParse_m3597(NULL /*static, unused*/, L_69, ((int32_t)515), L_70, (&V_5), /*hidden argument*/NULL);
		if (!L_71)
		{
			goto IL_0205;
		}
	}
	{
		uint32_t L_72 = V_5;
		if ((!(((uint32_t)((int32_t)56320)) <= ((uint32_t)L_72))))
		{
			goto IL_0205;
		}
	}
	{
		uint32_t L_73 = V_5;
		if ((!(((uint32_t)L_73) <= ((uint32_t)((int32_t)57343)))))
		{
			goto IL_0205;
		}
	}
	{
		StringBuilder_t343 * L_74 = V_0;
		uint32_t L_75 = V_4;
		NullCheck(L_74);
		StringBuilder_Append_m1871(L_74, (((uint16_t)L_75)), /*hidden argument*/NULL);
		StringBuilder_t343 * L_76 = V_0;
		uint32_t L_77 = V_5;
		NullCheck(L_76);
		StringBuilder_Append_m1871(L_76, (((uint16_t)L_77)), /*hidden argument*/NULL);
		int32_t* L_78 = ___index;
		int32_t* L_79 = ___index;
		*((int32_t*)(L_78)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_79))+(int32_t)6));
		goto IL_0239;
	}

IL_0205:
	{
		bool* L_80 = ___success;
		*((int8_t*)(L_80)) = (int8_t)0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_81 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_81;
	}

IL_020e:
	{
		StringBuilder_t343 * L_82 = V_0;
		uint32_t L_83 = V_4;
		String_t* L_84 = SimpleJson_ConvertFromUtf32_m3254(NULL /*static, unused*/, L_83, /*hidden argument*/NULL);
		NullCheck(L_82);
		StringBuilder_Append_m3598(L_82, L_84, /*hidden argument*/NULL);
		int32_t* L_85 = ___index;
		int32_t* L_86 = ___index;
		*((int32_t*)(L_85)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_86))+(int32_t)4));
		goto IL_022c;
	}

IL_0227:
	{
		goto IL_023f;
	}

IL_022c:
	{
		goto IL_0239;
	}

IL_0231:
	{
		StringBuilder_t343 * L_87 = V_0;
		uint16_t L_88 = V_1;
		NullCheck(L_87);
		StringBuilder_Append_m1871(L_87, L_88, /*hidden argument*/NULL);
	}

IL_0239:
	{
		bool L_89 = V_2;
		if (!L_89)
		{
			goto IL_0027;
		}
	}

IL_023f:
	{
		bool L_90 = V_2;
		if (L_90)
		{
			goto IL_024a;
		}
	}
	{
		bool* L_91 = ___success;
		*((int8_t*)(L_91)) = (int8_t)0;
		return (String_t*)NULL;
	}

IL_024a:
	{
		StringBuilder_t343 * L_92 = V_0;
		NullCheck(L_92);
		String_t* L_93 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_92);
		return L_93;
	}
}
// System.String SimpleJson.SimpleJson::ConvertFromUtf32(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t758_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t101_il2cpp_TypeInfo_var;
extern "C" String_t* SimpleJson_ConvertFromUtf32_m3254 (Object_t * __this /* static, unused */, int32_t ___utf32, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t758_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1032);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		CharU5BU5D_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___utf32;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___utf32;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)1114111))))
		{
			goto IL_0022;
		}
	}

IL_0012:
	{
		ArgumentOutOfRangeException_t758 * L_2 = (ArgumentOutOfRangeException_t758 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t758_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3599(L_2, (String_t*) &_stringLiteral308, (String_t*) &_stringLiteral309, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0022:
	{
		int32_t L_3 = ___utf32;
		if ((((int32_t)((int32_t)55296)) > ((int32_t)L_3)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_4 = ___utf32;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)57343))))
		{
			goto IL_0048;
		}
	}
	{
		ArgumentOutOfRangeException_t758 * L_5 = (ArgumentOutOfRangeException_t758 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t758_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3599(L_5, (String_t*) &_stringLiteral308, (String_t*) &_stringLiteral310, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0048:
	{
		int32_t L_6 = ___utf32;
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)65536))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_7 = ___utf32;
		String_t* L_8 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_8 = String_CreateString_m1880(L_8, (((uint16_t)L_7)), 1, /*hidden argument*/NULL);
		return L_8;
	}

IL_005c:
	{
		int32_t L_9 = ___utf32;
		___utf32 = ((int32_t)((int32_t)L_9-(int32_t)((int32_t)65536)));
		CharU5BU5D_t101* L_10 = ((CharU5BU5D_t101*)SZArrayNew(CharU5BU5D_t101_il2cpp_TypeInfo_var, 2));
		int32_t L_11 = ___utf32;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_10, 0)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_11>>(int32_t)((int32_t)10)))+(int32_t)((int32_t)55296)))));
		CharU5BU5D_t101* L_12 = L_10;
		int32_t L_13 = ___utf32;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_12, 1)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_13%(int32_t)((int32_t)1024)))+(int32_t)((int32_t)56320)))));
		String_t* L_14 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_14 = String_CreateString_m3600(L_14, L_12, /*hidden argument*/NULL);
		return L_14;
	}
}
// System.Object SimpleJson.SimpleJson::ParseNumber(System.Char[],System.Int32&,System.Boolean&)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t757_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t759_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t760_il2cpp_TypeInfo_var;
extern "C" Object_t * SimpleJson_ParseNumber_m3255 (Object_t * __this /* static, unused */, CharU5BU5D_t101* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		CultureInfo_t757_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1031);
		Double_t759_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1033);
		Int64_t760_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1034);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	String_t* V_3 = {0};
	double V_4 = 0.0;
	int64_t V_5 = 0;
	{
		CharU5BU5D_t101* L_0 = ___json;
		int32_t* L_1 = ___index;
		SimpleJson_EatWhitespace_m3257(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		CharU5BU5D_t101* L_2 = ___json;
		int32_t* L_3 = ___index;
		int32_t L_4 = SimpleJson_GetLastIndexOfNumber_m3256(NULL /*static, unused*/, L_2, (*((int32_t*)L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		int32_t* L_6 = ___index;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)(*((int32_t*)L_6))))+(int32_t)1));
		CharU5BU5D_t101* L_7 = ___json;
		int32_t* L_8 = ___index;
		int32_t L_9 = V_1;
		String_t* L_10 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_10 = String_CreateString_m3595(L_10, L_7, (*((int32_t*)L_8)), L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		String_t* L_11 = V_3;
		NullCheck(L_11);
		int32_t L_12 = String_IndexOf_m3535(L_11, (String_t*) &_stringLiteral110, 5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
		{
			goto IL_0045;
		}
	}
	{
		String_t* L_13 = V_3;
		NullCheck(L_13);
		int32_t L_14 = String_IndexOf_m3535(L_13, (String_t*) &_stringLiteral311, 5, /*hidden argument*/NULL);
		if ((((int32_t)L_14) == ((int32_t)(-1))))
		{
			goto IL_006e;
		}
	}

IL_0045:
	{
		bool* L_15 = ___success;
		CharU5BU5D_t101* L_16 = ___json;
		int32_t* L_17 = ___index;
		int32_t L_18 = V_1;
		String_t* L_19 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_19 = String_CreateString_m3595(L_19, L_16, (*((int32_t*)L_17)), L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t757_il2cpp_TypeInfo_var);
		CultureInfo_t757 * L_20 = CultureInfo_get_InvariantCulture_m3596(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_21 = Double_TryParse_m3601(NULL /*static, unused*/, L_19, ((int32_t)511), L_20, (&V_4), /*hidden argument*/NULL);
		*((int8_t*)(L_15)) = (int8_t)L_21;
		double L_22 = V_4;
		double L_23 = L_22;
		Object_t * L_24 = Box(Double_t759_il2cpp_TypeInfo_var, &L_23);
		V_2 = L_24;
		goto IL_0092;
	}

IL_006e:
	{
		bool* L_25 = ___success;
		CharU5BU5D_t101* L_26 = ___json;
		int32_t* L_27 = ___index;
		int32_t L_28 = V_1;
		String_t* L_29 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_29 = String_CreateString_m3595(L_29, L_26, (*((int32_t*)L_27)), L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t757_il2cpp_TypeInfo_var);
		CultureInfo_t757 * L_30 = CultureInfo_get_InvariantCulture_m3596(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_31 = Int64_TryParse_m3602(NULL /*static, unused*/, L_29, ((int32_t)511), L_30, (&V_5), /*hidden argument*/NULL);
		*((int8_t*)(L_25)) = (int8_t)L_31;
		int64_t L_32 = V_5;
		int64_t L_33 = L_32;
		Object_t * L_34 = Box(Int64_t760_il2cpp_TypeInfo_var, &L_33);
		V_2 = L_34;
	}

IL_0092:
	{
		int32_t* L_35 = ___index;
		int32_t L_36 = V_0;
		*((int32_t*)(L_35)) = (int32_t)((int32_t)((int32_t)L_36+(int32_t)1));
		Object_t * L_37 = V_2;
		return L_37;
	}
}
// System.Int32 SimpleJson.SimpleJson::GetLastIndexOfNumber(System.Char[],System.Int32)
extern "C" int32_t SimpleJson_GetLastIndexOfNumber_m3256 (Object_t * __this /* static, unused */, CharU5BU5D_t101* ___json, int32_t ___index, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		goto IL_0023;
	}

IL_0007:
	{
		CharU5BU5D_t101* L_1 = ___json;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NullCheck((String_t*) &_stringLiteral312);
		int32_t L_4 = String_IndexOf_m1912((String_t*) &_stringLiteral312, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_1, L_3)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_002c;
	}

IL_001f:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_6 = V_0;
		CharU5BU5D_t101* L_7 = ___json;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_0007;
		}
	}

IL_002c:
	{
		int32_t L_8 = V_0;
		return ((int32_t)((int32_t)L_8-(int32_t)1));
	}
}
// System.Void SimpleJson.SimpleJson::EatWhitespace(System.Char[],System.Int32&)
extern "C" void SimpleJson_EatWhitespace_m3257 (Object_t * __this /* static, unused */, CharU5BU5D_t101* ___json, int32_t* ___index, const MethodInfo* method)
{
	{
		goto IL_0024;
	}

IL_0005:
	{
		CharU5BU5D_t101* L_0 = ___json;
		int32_t* L_1 = ___index;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, (*((int32_t*)L_1)));
		int32_t L_2 = (*((int32_t*)L_1));
		NullCheck((String_t*) &_stringLiteral313);
		int32_t L_3 = String_IndexOf_m1912((String_t*) &_stringLiteral313, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_0, L_2)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_001e;
		}
	}
	{
		goto IL_002e;
	}

IL_001e:
	{
		int32_t* L_4 = ___index;
		int32_t* L_5 = ___index;
		*((int32_t*)(L_4)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_5))+(int32_t)1));
	}

IL_0024:
	{
		int32_t* L_6 = ___index;
		CharU5BU5D_t101* L_7 = ___json;
		NullCheck(L_7);
		if ((((int32_t)(*((int32_t*)L_6))) < ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_0005;
		}
	}

IL_002e:
	{
		return;
	}
}
// System.Int32 SimpleJson.SimpleJson::LookAhead(System.Char[],System.Int32)
extern "C" int32_t SimpleJson_LookAhead_m3258 (Object_t * __this /* static, unused */, CharU5BU5D_t101* ___json, int32_t ___index, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		CharU5BU5D_t101* L_1 = ___json;
		int32_t L_2 = SimpleJson_NextToken_m3259(NULL /*static, unused*/, L_1, (&V_0), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 SimpleJson.SimpleJson::NextToken(System.Char[],System.Int32&)
extern "C" int32_t SimpleJson_NextToken_m3259 (Object_t * __this /* static, unused */, CharU5BU5D_t101* ___json, int32_t* ___index, const MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	{
		CharU5BU5D_t101* L_0 = ___json;
		int32_t* L_1 = ___index;
		SimpleJson_EatWhitespace_m3257(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		int32_t* L_2 = ___index;
		CharU5BU5D_t101* L_3 = ___json;
		NullCheck(L_3);
		if ((!(((uint32_t)(*((int32_t*)L_2))) == ((uint32_t)(((int32_t)(((Array_t *)L_3)->max_length)))))))
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		CharU5BU5D_t101* L_4 = ___json;
		int32_t* L_5 = ___index;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, (*((int32_t*)L_5)));
		int32_t L_6 = (*((int32_t*)L_5));
		V_0 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_4, L_6));
		int32_t* L_7 = ___index;
		int32_t* L_8 = ___index;
		*((int32_t*)(L_7)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_8))+(int32_t)1));
		uint16_t L_9 = V_0;
		V_2 = L_9;
		uint16_t L_10 = V_2;
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 0)
		{
			goto IL_00c6;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 1)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 2)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 3)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 4)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 5)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 6)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 7)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 8)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 9)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 10)
		{
			goto IL_00c4;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 11)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 12)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 13)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 14)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 15)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 16)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 17)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 18)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 19)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 20)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 21)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 22)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 23)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 24)
		{
			goto IL_00ca;
		}
	}

IL_008d:
	{
		uint16_t L_11 = V_2;
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 0)
		{
			goto IL_00c0;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 1)
		{
			goto IL_00a2;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 2)
		{
			goto IL_00c2;
		}
	}

IL_00a2:
	{
		uint16_t L_12 = V_2;
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 0)
		{
			goto IL_00bc;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 1)
		{
			goto IL_00cc;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 2)
		{
			goto IL_00be;
		}
	}
	{
		goto IL_00cc;
	}

IL_00bc:
	{
		return 1;
	}

IL_00be:
	{
		return 2;
	}

IL_00c0:
	{
		return 3;
	}

IL_00c2:
	{
		return 4;
	}

IL_00c4:
	{
		return 6;
	}

IL_00c6:
	{
		return 7;
	}

IL_00c8:
	{
		return 8;
	}

IL_00ca:
	{
		return 5;
	}

IL_00cc:
	{
		int32_t* L_13 = ___index;
		int32_t* L_14 = ___index;
		*((int32_t*)(L_13)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_14))-(int32_t)1));
		CharU5BU5D_t101* L_15 = ___json;
		NullCheck(L_15);
		int32_t* L_16 = ___index;
		V_1 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_15)->max_length)))-(int32_t)(*((int32_t*)L_16))));
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) < ((int32_t)5)))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t101* L_18 = ___json;
		int32_t* L_19 = ___index;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, (*((int32_t*)L_19)));
		int32_t L_20 = (*((int32_t*)L_19));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_18, L_20))) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t101* L_21 = ___json;
		int32_t* L_22 = ___index;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, ((int32_t)((int32_t)(*((int32_t*)L_22))+(int32_t)1)));
		int32_t L_23 = ((int32_t)((int32_t)(*((int32_t*)L_22))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_21, L_23))) == ((uint32_t)((int32_t)97)))))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t101* L_24 = ___json;
		int32_t* L_25 = ___index;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)((int32_t)(*((int32_t*)L_25))+(int32_t)2)));
		int32_t L_26 = ((int32_t)((int32_t)(*((int32_t*)L_25))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_24, L_26))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t101* L_27 = ___json;
		int32_t* L_28 = ___index;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, ((int32_t)((int32_t)(*((int32_t*)L_28))+(int32_t)3)));
		int32_t L_29 = ((int32_t)((int32_t)(*((int32_t*)L_28))+(int32_t)3));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_27, L_29))) == ((uint32_t)((int32_t)115)))))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t101* L_30 = ___json;
		int32_t* L_31 = ___index;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, ((int32_t)((int32_t)(*((int32_t*)L_31))+(int32_t)4)));
		int32_t L_32 = ((int32_t)((int32_t)(*((int32_t*)L_31))+(int32_t)4));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_30, L_32))) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_0128;
		}
	}
	{
		int32_t* L_33 = ___index;
		int32_t* L_34 = ___index;
		*((int32_t*)(L_33)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_34))+(int32_t)5));
		return ((int32_t)10);
	}

IL_0128:
	{
		int32_t L_35 = V_1;
		if ((((int32_t)L_35) < ((int32_t)4)))
		{
			goto IL_016a;
		}
	}
	{
		CharU5BU5D_t101* L_36 = ___json;
		int32_t* L_37 = ___index;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, (*((int32_t*)L_37)));
		int32_t L_38 = (*((int32_t*)L_37));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_36, L_38))) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_016a;
		}
	}
	{
		CharU5BU5D_t101* L_39 = ___json;
		int32_t* L_40 = ___index;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)((int32_t)(*((int32_t*)L_40))+(int32_t)1)));
		int32_t L_41 = ((int32_t)((int32_t)(*((int32_t*)L_40))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_39, L_41))) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_016a;
		}
	}
	{
		CharU5BU5D_t101* L_42 = ___json;
		int32_t* L_43 = ___index;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, ((int32_t)((int32_t)(*((int32_t*)L_43))+(int32_t)2)));
		int32_t L_44 = ((int32_t)((int32_t)(*((int32_t*)L_43))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_42, L_44))) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_016a;
		}
	}
	{
		CharU5BU5D_t101* L_45 = ___json;
		int32_t* L_46 = ___index;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, ((int32_t)((int32_t)(*((int32_t*)L_46))+(int32_t)3)));
		int32_t L_47 = ((int32_t)((int32_t)(*((int32_t*)L_46))+(int32_t)3));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_45, L_47))) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_016a;
		}
	}
	{
		int32_t* L_48 = ___index;
		int32_t* L_49 = ___index;
		*((int32_t*)(L_48)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_49))+(int32_t)4));
		return ((int32_t)9);
	}

IL_016a:
	{
		int32_t L_50 = V_1;
		if ((((int32_t)L_50) < ((int32_t)4)))
		{
			goto IL_01ac;
		}
	}
	{
		CharU5BU5D_t101* L_51 = ___json;
		int32_t* L_52 = ___index;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, (*((int32_t*)L_52)));
		int32_t L_53 = (*((int32_t*)L_52));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_51, L_53))) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_01ac;
		}
	}
	{
		CharU5BU5D_t101* L_54 = ___json;
		int32_t* L_55 = ___index;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, ((int32_t)((int32_t)(*((int32_t*)L_55))+(int32_t)1)));
		int32_t L_56 = ((int32_t)((int32_t)(*((int32_t*)L_55))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_54, L_56))) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_01ac;
		}
	}
	{
		CharU5BU5D_t101* L_57 = ___json;
		int32_t* L_58 = ___index;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, ((int32_t)((int32_t)(*((int32_t*)L_58))+(int32_t)2)));
		int32_t L_59 = ((int32_t)((int32_t)(*((int32_t*)L_58))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_57, L_59))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_01ac;
		}
	}
	{
		CharU5BU5D_t101* L_60 = ___json;
		int32_t* L_61 = ___index;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, ((int32_t)((int32_t)(*((int32_t*)L_61))+(int32_t)3)));
		int32_t L_62 = ((int32_t)((int32_t)(*((int32_t*)L_61))+(int32_t)3));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_60, L_62))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_01ac;
		}
	}
	{
		int32_t* L_63 = ___index;
		int32_t* L_64 = ___index;
		*((int32_t*)(L_63)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_64))+(int32_t)4));
		return ((int32_t)11);
	}

IL_01ac:
	{
		return 0;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeValue(SimpleJson.IJsonSerializerStrategy,System.Object,System.Text.StringBuilder)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t716_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t761_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_t471_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t111_il2cpp_TypeInfo_var;
extern TypeInfo* IJsonSerializerStrategy_t628_il2cpp_TypeInfo_var;
extern "C" bool SimpleJson_SerializeValue_m3260 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___value, StringBuilder_t343 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		IDictionary_2_t716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1000);
		IDictionary_2_t761_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1035);
		IEnumerable_t471_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(895);
		Boolean_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		IJsonSerializerStrategy_t628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1036);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = {0};
	Object_t* V_2 = {0};
	Object_t* V_3 = {0};
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	StringBuilder_t343 * G_B13_0 = {0};
	StringBuilder_t343 * G_B12_0 = {0};
	String_t* G_B14_0 = {0};
	StringBuilder_t343 * G_B14_1 = {0};
	{
		V_0 = 1;
		Object_t * L_0 = ___value;
		V_1 = ((String_t*)IsInst(L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2 = V_1;
		StringBuilder_t343 * L_3 = ___builder;
		bool L_4 = SimpleJson_SerializeString_m3263(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0100;
	}

IL_001c:
	{
		Object_t * L_5 = ___value;
		V_2 = ((Object_t*)IsInst(L_5, IDictionary_2_t716_il2cpp_TypeInfo_var));
		Object_t* L_6 = V_2;
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		Object_t * L_7 = ___jsonSerializerStrategy;
		Object_t* L_8 = V_2;
		NullCheck(L_8);
		Object_t* L_9 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(5 /* System.Collections.Generic.ICollection`1<!0> System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Keys() */, IDictionary_2_t716_il2cpp_TypeInfo_var, L_8);
		Object_t* L_10 = V_2;
		NullCheck(L_10);
		Object_t* L_11 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(6 /* System.Collections.Generic.ICollection`1<!1> System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Values() */, IDictionary_2_t716_il2cpp_TypeInfo_var, L_10);
		StringBuilder_t343 * L_12 = ___builder;
		bool L_13 = SimpleJson_SerializeObject_m3261(NULL /*static, unused*/, L_7, L_9, L_11, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		goto IL_0100;
	}

IL_0042:
	{
		Object_t * L_14 = ___value;
		V_3 = ((Object_t*)IsInst(L_14, IDictionary_2_t761_il2cpp_TypeInfo_var));
		Object_t* L_15 = V_3;
		if (!L_15)
		{
			goto IL_0068;
		}
	}
	{
		Object_t * L_16 = ___jsonSerializerStrategy;
		Object_t* L_17 = V_3;
		NullCheck(L_17);
		Object_t* L_18 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(5 /* System.Collections.Generic.ICollection`1<!0> System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Keys() */, IDictionary_2_t761_il2cpp_TypeInfo_var, L_17);
		Object_t* L_19 = V_3;
		NullCheck(L_19);
		Object_t* L_20 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(6 /* System.Collections.Generic.ICollection`1<!1> System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Values() */, IDictionary_2_t761_il2cpp_TypeInfo_var, L_19);
		StringBuilder_t343 * L_21 = ___builder;
		bool L_22 = SimpleJson_SerializeObject_m3261(NULL /*static, unused*/, L_16, L_18, L_20, L_21, /*hidden argument*/NULL);
		V_0 = L_22;
		goto IL_0100;
	}

IL_0068:
	{
		Object_t * L_23 = ___value;
		V_4 = ((Object_t *)IsInst(L_23, IEnumerable_t471_il2cpp_TypeInfo_var));
		Object_t * L_24 = V_4;
		if (!L_24)
		{
			goto IL_0086;
		}
	}
	{
		Object_t * L_25 = ___jsonSerializerStrategy;
		Object_t * L_26 = V_4;
		StringBuilder_t343 * L_27 = ___builder;
		bool L_28 = SimpleJson_SerializeArray_m3262(NULL /*static, unused*/, L_25, L_26, L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		goto IL_0100;
	}

IL_0086:
	{
		Object_t * L_29 = ___value;
		bool L_30 = SimpleJson_IsNumeric_m3265(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_009e;
		}
	}
	{
		Object_t * L_31 = ___value;
		StringBuilder_t343 * L_32 = ___builder;
		bool L_33 = SimpleJson_SerializeNumber_m3264(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		V_0 = L_33;
		goto IL_0100;
	}

IL_009e:
	{
		Object_t * L_34 = ___value;
		if (!((Object_t *)IsInst(L_34, Boolean_t111_il2cpp_TypeInfo_var)))
		{
			goto IL_00cf;
		}
	}
	{
		StringBuilder_t343 * L_35 = ___builder;
		Object_t * L_36 = ___value;
		G_B12_0 = L_35;
		if (!((*(bool*)((bool*)UnBox (L_36, Boolean_t111_il2cpp_TypeInfo_var)))))
		{
			G_B13_0 = L_35;
			goto IL_00bf;
		}
	}
	{
		G_B14_0 = (String_t*) &_stringLiteral314;
		G_B14_1 = G_B12_0;
		goto IL_00c4;
	}

IL_00bf:
	{
		G_B14_0 = (String_t*) &_stringLiteral315;
		G_B14_1 = G_B13_0;
	}

IL_00c4:
	{
		NullCheck(G_B14_1);
		StringBuilder_Append_m3598(G_B14_1, G_B14_0, /*hidden argument*/NULL);
		goto IL_0100;
	}

IL_00cf:
	{
		Object_t * L_37 = ___value;
		if (L_37)
		{
			goto IL_00e6;
		}
	}
	{
		StringBuilder_t343 * L_38 = ___builder;
		NullCheck(L_38);
		StringBuilder_Append_m3598(L_38, (String_t*) &_stringLiteral316, /*hidden argument*/NULL);
		goto IL_0100;
	}

IL_00e6:
	{
		Object_t * L_39 = ___jsonSerializerStrategy;
		Object_t * L_40 = ___value;
		NullCheck(L_39);
		bool L_41 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(0 /* System.Boolean SimpleJson.IJsonSerializerStrategy::TrySerializeNonPrimitiveObject(System.Object,System.Object&) */, IJsonSerializerStrategy_t628_il2cpp_TypeInfo_var, L_39, L_40, (&V_5));
		V_0 = L_41;
		bool L_42 = V_0;
		if (!L_42)
		{
			goto IL_0100;
		}
	}
	{
		Object_t * L_43 = ___jsonSerializerStrategy;
		Object_t * L_44 = V_5;
		StringBuilder_t343 * L_45 = ___builder;
		SimpleJson_SerializeValue_m3260(NULL /*static, unused*/, L_43, L_44, L_45, /*hidden argument*/NULL);
	}

IL_0100:
	{
		bool L_46 = V_0;
		return L_46;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeObject(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Collections.IEnumerable,System.Text.StringBuilder)
extern TypeInfo* IEnumerable_t471_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t59_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool SimpleJson_SerializeObject_m3261 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___keys, Object_t * ___values, StringBuilder_t343 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t471_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(895);
		IEnumerator_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	bool V_2 = false;
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	String_t* V_5 = {0};
	{
		StringBuilder_t343 * L_0 = ___builder;
		NullCheck(L_0);
		StringBuilder_Append_m3598(L_0, (String_t*) &_stringLiteral317, /*hidden argument*/NULL);
		Object_t * L_1 = ___keys;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t471_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		Object_t * L_3 = ___values;
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t471_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
		V_2 = 1;
		goto IL_008d;
	}

IL_0021:
	{
		Object_t * L_5 = V_0;
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t59_il2cpp_TypeInfo_var, L_5);
		V_3 = L_6;
		Object_t * L_7 = V_1;
		NullCheck(L_7);
		Object_t * L_8 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t59_il2cpp_TypeInfo_var, L_7);
		V_4 = L_8;
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_0042;
		}
	}
	{
		StringBuilder_t343 * L_10 = ___builder;
		NullCheck(L_10);
		StringBuilder_Append_m3598(L_10, (String_t*) &_stringLiteral318, /*hidden argument*/NULL);
	}

IL_0042:
	{
		Object_t * L_11 = V_3;
		V_5 = ((String_t*)IsInst(L_11, String_t_il2cpp_TypeInfo_var));
		String_t* L_12 = V_5;
		if (!L_12)
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_13 = V_5;
		StringBuilder_t343 * L_14 = ___builder;
		SimpleJson_SerializeString_m3263(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		goto IL_006f;
	}

IL_005f:
	{
		Object_t * L_15 = ___jsonSerializerStrategy;
		Object_t * L_16 = V_4;
		StringBuilder_t343 * L_17 = ___builder;
		bool L_18 = SimpleJson_SerializeValue_m3260(NULL /*static, unused*/, L_15, L_16, L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_006f;
		}
	}
	{
		return 0;
	}

IL_006f:
	{
		StringBuilder_t343 * L_19 = ___builder;
		NullCheck(L_19);
		StringBuilder_Append_m3598(L_19, (String_t*) &_stringLiteral319, /*hidden argument*/NULL);
		Object_t * L_20 = ___jsonSerializerStrategy;
		Object_t * L_21 = V_4;
		StringBuilder_t343 * L_22 = ___builder;
		bool L_23 = SimpleJson_SerializeValue_m3260(NULL /*static, unused*/, L_20, L_21, L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_008b;
		}
	}
	{
		return 0;
	}

IL_008b:
	{
		V_2 = 0;
	}

IL_008d:
	{
		Object_t * L_24 = V_0;
		NullCheck(L_24);
		bool L_25 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t59_il2cpp_TypeInfo_var, L_24);
		if (!L_25)
		{
			goto IL_00a3;
		}
	}
	{
		Object_t * L_26 = V_1;
		NullCheck(L_26);
		bool L_27 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t59_il2cpp_TypeInfo_var, L_26);
		if (L_27)
		{
			goto IL_0021;
		}
	}

IL_00a3:
	{
		StringBuilder_t343 * L_28 = ___builder;
		NullCheck(L_28);
		StringBuilder_Append_m3598(L_28, (String_t*) &_stringLiteral152, /*hidden argument*/NULL);
		return 1;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeArray(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Text.StringBuilder)
extern TypeInfo* IEnumerable_t471_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t59_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t69_il2cpp_TypeInfo_var;
extern "C" bool SimpleJson_SerializeArray_m3262 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___anArray, StringBuilder_t343 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t471_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(895);
		IEnumerator_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		IDisposable_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	bool V_3 = false;
	Object_t * V_4 = {0};
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t343 * L_0 = ___builder;
		NullCheck(L_0);
		StringBuilder_Append_m3598(L_0, (String_t*) &_stringLiteral320, /*hidden argument*/NULL);
		V_0 = 1;
		Object_t * L_1 = ___anArray;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t471_il2cpp_TypeInfo_var, L_1);
		V_2 = L_2;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0049;
		}

IL_001a:
		{
			Object_t * L_3 = V_2;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t59_il2cpp_TypeInfo_var, L_3);
			V_1 = L_4;
			bool L_5 = V_0;
			if (L_5)
			{
				goto IL_0033;
			}
		}

IL_0027:
		{
			StringBuilder_t343 * L_6 = ___builder;
			NullCheck(L_6);
			StringBuilder_Append_m3598(L_6, (String_t*) &_stringLiteral318, /*hidden argument*/NULL);
		}

IL_0033:
		{
			Object_t * L_7 = ___jsonSerializerStrategy;
			Object_t * L_8 = V_1;
			StringBuilder_t343 * L_9 = ___builder;
			bool L_10 = SimpleJson_SerializeValue_m3260(NULL /*static, unused*/, L_7, L_8, L_9, /*hidden argument*/NULL);
			if (L_10)
			{
				goto IL_0047;
			}
		}

IL_0040:
		{
			V_3 = 0;
			IL2CPP_LEAVE(0x7C, FINALLY_0059);
		}

IL_0047:
		{
			V_0 = 0;
		}

IL_0049:
		{
			Object_t * L_11 = V_2;
			NullCheck(L_11);
			bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t59_il2cpp_TypeInfo_var, L_11);
			if (L_12)
			{
				goto IL_001a;
			}
		}

IL_0054:
		{
			IL2CPP_LEAVE(0x6E, FINALLY_0059);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_0059;
	}

FINALLY_0059:
	{ // begin finally (depth: 1)
		{
			Object_t * L_13 = V_2;
			V_4 = ((Object_t *)IsInst(L_13, IDisposable_t69_il2cpp_TypeInfo_var));
			Object_t * L_14 = V_4;
			if (L_14)
			{
				goto IL_0066;
			}
		}

IL_0065:
		{
			IL2CPP_END_FINALLY(89)
		}

IL_0066:
		{
			Object_t * L_15 = V_4;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t69_il2cpp_TypeInfo_var, L_15);
			IL2CPP_END_FINALLY(89)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(89)
	{
		IL2CPP_JUMP_TBL(0x7C, IL_007c)
		IL2CPP_JUMP_TBL(0x6E, IL_006e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_006e:
	{
		StringBuilder_t343 * L_16 = ___builder;
		NullCheck(L_16);
		StringBuilder_Append_m3598(L_16, (String_t*) &_stringLiteral321, /*hidden argument*/NULL);
		return 1;
	}

IL_007c:
	{
		bool L_17 = V_3;
		return L_17;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeString(System.String,System.Text.StringBuilder)
extern "C" bool SimpleJson_SerializeString_m3263 (Object_t * __this /* static, unused */, String_t* ___aString, StringBuilder_t343 * ___builder, const MethodInfo* method)
{
	CharU5BU5D_t101* V_0 = {0};
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	{
		StringBuilder_t343 * L_0 = ___builder;
		NullCheck(L_0);
		StringBuilder_Append_m3598(L_0, (String_t*) &_stringLiteral218, /*hidden argument*/NULL);
		String_t* L_1 = ___aString;
		NullCheck(L_1);
		CharU5BU5D_t101* L_2 = String_ToCharArray_m3593(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_00d8;
	}

IL_001a:
	{
		CharU5BU5D_t101* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_2 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_3, L_5));
		uint16_t L_6 = V_2;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0037;
		}
	}
	{
		StringBuilder_t343 * L_7 = ___builder;
		NullCheck(L_7);
		StringBuilder_Append_m3598(L_7, (String_t*) &_stringLiteral322, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0037:
	{
		uint16_t L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0050;
		}
	}
	{
		StringBuilder_t343 * L_9 = ___builder;
		NullCheck(L_9);
		StringBuilder_Append_m3598(L_9, (String_t*) &_stringLiteral323, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0050:
	{
		uint16_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)8))))
		{
			goto IL_0068;
		}
	}
	{
		StringBuilder_t343 * L_11 = ___builder;
		NullCheck(L_11);
		StringBuilder_Append_m3598(L_11, (String_t*) &_stringLiteral324, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0068:
	{
		uint16_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0081;
		}
	}
	{
		StringBuilder_t343 * L_13 = ___builder;
		NullCheck(L_13);
		StringBuilder_Append_m3598(L_13, (String_t*) &_stringLiteral325, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0081:
	{
		uint16_t L_14 = V_2;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_009a;
		}
	}
	{
		StringBuilder_t343 * L_15 = ___builder;
		NullCheck(L_15);
		StringBuilder_Append_m3598(L_15, (String_t*) &_stringLiteral326, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_009a:
	{
		uint16_t L_16 = V_2;
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_00b3;
		}
	}
	{
		StringBuilder_t343 * L_17 = ___builder;
		NullCheck(L_17);
		StringBuilder_Append_m3598(L_17, (String_t*) &_stringLiteral327, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_00b3:
	{
		uint16_t L_18 = V_2;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_00cc;
		}
	}
	{
		StringBuilder_t343 * L_19 = ___builder;
		NullCheck(L_19);
		StringBuilder_Append_m3598(L_19, (String_t*) &_stringLiteral328, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_00cc:
	{
		StringBuilder_t343 * L_20 = ___builder;
		uint16_t L_21 = V_2;
		NullCheck(L_20);
		StringBuilder_Append_m1871(L_20, L_21, /*hidden argument*/NULL);
	}

IL_00d4:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_00d8:
	{
		int32_t L_23 = V_1;
		CharU5BU5D_t101* L_24 = V_0;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)(((Array_t *)L_24)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		StringBuilder_t343 * L_25 = ___builder;
		NullCheck(L_25);
		StringBuilder_Append_m3598(L_25, (String_t*) &_stringLiteral218, /*hidden argument*/NULL);
		return 1;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeNumber(System.Object,System.Text.StringBuilder)
extern TypeInfo* Int64_t760_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t757_il2cpp_TypeInfo_var;
extern TypeInfo* UInt64_t763_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t75_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32_t751_il2cpp_TypeInfo_var;
extern TypeInfo* Decimal_t762_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t345_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t744_il2cpp_TypeInfo_var;
extern "C" bool SimpleJson_SerializeNumber_m3264 (Object_t * __this /* static, unused */, Object_t * ___number, StringBuilder_t343 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t760_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1034);
		CultureInfo_t757_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1031);
		UInt64_t763_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1037);
		Int32_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		UInt32_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1002);
		Decimal_t762_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1038);
		Single_t345_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		Convert_t744_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(965);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	Decimal_t762  V_4 = {0};
	float V_5 = 0.0f;
	double V_6 = 0.0;
	{
		Object_t * L_0 = ___number;
		if (!((Object_t *)IsInst(L_0, Int64_t760_il2cpp_TypeInfo_var)))
		{
			goto IL_002a;
		}
	}
	{
		StringBuilder_t343 * L_1 = ___builder;
		Object_t * L_2 = ___number;
		V_0 = ((*(int64_t*)((int64_t*)UnBox (L_2, Int64_t760_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t757_il2cpp_TypeInfo_var);
		CultureInfo_t757 * L_3 = CultureInfo_get_InvariantCulture_m3596(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_4 = Int64_ToString_m3603((&V_0), L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_m3598(L_1, L_4, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_002a:
	{
		Object_t * L_5 = ___number;
		if (!((Object_t *)IsInst(L_5, UInt64_t763_il2cpp_TypeInfo_var)))
		{
			goto IL_0054;
		}
	}
	{
		StringBuilder_t343 * L_6 = ___builder;
		Object_t * L_7 = ___number;
		V_1 = ((*(uint64_t*)((uint64_t*)UnBox (L_7, UInt64_t763_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t757_il2cpp_TypeInfo_var);
		CultureInfo_t757 * L_8 = CultureInfo_get_InvariantCulture_m3596(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_9 = UInt64_ToString_m3604((&V_1), L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		StringBuilder_Append_m3598(L_6, L_9, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_0054:
	{
		Object_t * L_10 = ___number;
		if (!((Object_t *)IsInst(L_10, Int32_t75_il2cpp_TypeInfo_var)))
		{
			goto IL_007e;
		}
	}
	{
		StringBuilder_t343 * L_11 = ___builder;
		Object_t * L_12 = ___number;
		V_2 = ((*(int32_t*)((int32_t*)UnBox (L_12, Int32_t75_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t757_il2cpp_TypeInfo_var);
		CultureInfo_t757 * L_13 = CultureInfo_get_InvariantCulture_m3596(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_14 = Int32_ToString_m3605((&V_2), L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		StringBuilder_Append_m3598(L_11, L_14, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_007e:
	{
		Object_t * L_15 = ___number;
		if (!((Object_t *)IsInst(L_15, UInt32_t751_il2cpp_TypeInfo_var)))
		{
			goto IL_00a8;
		}
	}
	{
		StringBuilder_t343 * L_16 = ___builder;
		Object_t * L_17 = ___number;
		V_3 = ((*(uint32_t*)((uint32_t*)UnBox (L_17, UInt32_t751_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t757_il2cpp_TypeInfo_var);
		CultureInfo_t757 * L_18 = CultureInfo_get_InvariantCulture_m3596(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_19 = UInt32_ToString_m3606((&V_3), L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		StringBuilder_Append_m3598(L_16, L_19, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_00a8:
	{
		Object_t * L_20 = ___number;
		if (!((Object_t *)IsInst(L_20, Decimal_t762_il2cpp_TypeInfo_var)))
		{
			goto IL_00d3;
		}
	}
	{
		StringBuilder_t343 * L_21 = ___builder;
		Object_t * L_22 = ___number;
		V_4 = ((*(Decimal_t762 *)((Decimal_t762 *)UnBox (L_22, Decimal_t762_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t757_il2cpp_TypeInfo_var);
		CultureInfo_t757 * L_23 = CultureInfo_get_InvariantCulture_m3596(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_24 = Decimal_ToString_m3607((&V_4), L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		StringBuilder_Append_m3598(L_21, L_24, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_00d3:
	{
		Object_t * L_25 = ___number;
		if (!((Object_t *)IsInst(L_25, Single_t345_il2cpp_TypeInfo_var)))
		{
			goto IL_00fe;
		}
	}
	{
		StringBuilder_t343 * L_26 = ___builder;
		Object_t * L_27 = ___number;
		V_5 = ((*(float*)((float*)UnBox (L_27, Single_t345_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t757_il2cpp_TypeInfo_var);
		CultureInfo_t757 * L_28 = CultureInfo_get_InvariantCulture_m3596(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_29 = Single_ToString_m3608((&V_5), L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		StringBuilder_Append_m3598(L_26, L_29, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_00fe:
	{
		StringBuilder_t343 * L_30 = ___builder;
		Object_t * L_31 = ___number;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t757_il2cpp_TypeInfo_var);
		CultureInfo_t757 * L_32 = CultureInfo_get_InvariantCulture_m3596(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t744_il2cpp_TypeInfo_var);
		double L_33 = Convert_ToDouble_m3609(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		V_6 = L_33;
		CultureInfo_t757 * L_34 = CultureInfo_get_InvariantCulture_m3596(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_35 = Double_ToString_m3610((&V_6), (String_t*) &_stringLiteral329, L_34, /*hidden argument*/NULL);
		NullCheck(L_30);
		StringBuilder_Append_m3598(L_30, L_35, /*hidden argument*/NULL);
	}

IL_0123:
	{
		return 1;
	}
}
// System.Boolean SimpleJson.SimpleJson::IsNumeric(System.Object)
extern TypeInfo* SByte_t113_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t366_il2cpp_TypeInfo_var;
extern TypeInfo* Int16_t455_il2cpp_TypeInfo_var;
extern TypeInfo* UInt16_t369_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t75_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32_t751_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t760_il2cpp_TypeInfo_var;
extern TypeInfo* UInt64_t763_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t345_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t759_il2cpp_TypeInfo_var;
extern TypeInfo* Decimal_t762_il2cpp_TypeInfo_var;
extern "C" bool SimpleJson_IsNumeric_m3265 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SByte_t113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1039);
		Byte_t366_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(970);
		Int16_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1040);
		UInt16_t369_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(997);
		Int32_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		UInt32_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1002);
		Int64_t760_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1034);
		UInt64_t763_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1037);
		Single_t345_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		Double_t759_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1033);
		Decimal_t762_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1038);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		if (!((Object_t *)IsInst(L_0, SByte_t113_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 1;
	}

IL_000d:
	{
		Object_t * L_1 = ___value;
		if (!((Object_t *)IsInst(L_1, Byte_t366_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		return 1;
	}

IL_001a:
	{
		Object_t * L_2 = ___value;
		if (!((Object_t *)IsInst(L_2, Int16_t455_il2cpp_TypeInfo_var)))
		{
			goto IL_0027;
		}
	}
	{
		return 1;
	}

IL_0027:
	{
		Object_t * L_3 = ___value;
		if (!((Object_t *)IsInst(L_3, UInt16_t369_il2cpp_TypeInfo_var)))
		{
			goto IL_0034;
		}
	}
	{
		return 1;
	}

IL_0034:
	{
		Object_t * L_4 = ___value;
		if (!((Object_t *)IsInst(L_4, Int32_t75_il2cpp_TypeInfo_var)))
		{
			goto IL_0041;
		}
	}
	{
		return 1;
	}

IL_0041:
	{
		Object_t * L_5 = ___value;
		if (!((Object_t *)IsInst(L_5, UInt32_t751_il2cpp_TypeInfo_var)))
		{
			goto IL_004e;
		}
	}
	{
		return 1;
	}

IL_004e:
	{
		Object_t * L_6 = ___value;
		if (!((Object_t *)IsInst(L_6, Int64_t760_il2cpp_TypeInfo_var)))
		{
			goto IL_005b;
		}
	}
	{
		return 1;
	}

IL_005b:
	{
		Object_t * L_7 = ___value;
		if (!((Object_t *)IsInst(L_7, UInt64_t763_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		return 1;
	}

IL_0068:
	{
		Object_t * L_8 = ___value;
		if (!((Object_t *)IsInst(L_8, Single_t345_il2cpp_TypeInfo_var)))
		{
			goto IL_0075;
		}
	}
	{
		return 1;
	}

IL_0075:
	{
		Object_t * L_9 = ___value;
		if (!((Object_t *)IsInst(L_9, Double_t759_il2cpp_TypeInfo_var)))
		{
			goto IL_0082;
		}
	}
	{
		return 1;
	}

IL_0082:
	{
		Object_t * L_10 = ___value;
		if (!((Object_t *)IsInst(L_10, Decimal_t762_il2cpp_TypeInfo_var)))
		{
			goto IL_008f;
		}
	}
	{
		return 1;
	}

IL_008f:
	{
		return 0;
	}
}
// SimpleJson.IJsonSerializerStrategy SimpleJson.SimpleJson::get_CurrentJsonSerializerStrategy()
extern TypeInfo* SimpleJson_t630_il2cpp_TypeInfo_var;
extern "C" Object_t * SimpleJson_get_CurrentJsonSerializerStrategy_m3266 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SimpleJson_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1041);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * G_B2_0 = {0};
	Object_t * G_B1_0 = {0};
	{
		Object_t * L_0 = ((SimpleJson_t630_StaticFields*)SimpleJson_t630_il2cpp_TypeInfo_var->static_fields)->____currentJsonSerializerStrategy_0;
		Object_t * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		PocoJsonSerializerStrategy_t629 * L_2 = SimpleJson_get_PocoJsonSerializerStrategy_m3267(NULL /*static, unused*/, /*hidden argument*/NULL);
		PocoJsonSerializerStrategy_t629 * L_3 = L_2;
		((SimpleJson_t630_StaticFields*)SimpleJson_t630_il2cpp_TypeInfo_var->static_fields)->____currentJsonSerializerStrategy_0 = L_3;
		G_B2_0 = ((Object_t *)(L_3));
	}

IL_0017:
	{
		return G_B2_0;
	}
}
// SimpleJson.PocoJsonSerializerStrategy SimpleJson.SimpleJson::get_PocoJsonSerializerStrategy()
extern TypeInfo* SimpleJson_t630_il2cpp_TypeInfo_var;
extern TypeInfo* PocoJsonSerializerStrategy_t629_il2cpp_TypeInfo_var;
extern "C" PocoJsonSerializerStrategy_t629 * SimpleJson_get_PocoJsonSerializerStrategy_m3267 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SimpleJson_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1041);
		PocoJsonSerializerStrategy_t629_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1042);
		s_Il2CppMethodIntialized = true;
	}
	PocoJsonSerializerStrategy_t629 * G_B2_0 = {0};
	PocoJsonSerializerStrategy_t629 * G_B1_0 = {0};
	{
		PocoJsonSerializerStrategy_t629 * L_0 = ((SimpleJson_t630_StaticFields*)SimpleJson_t630_il2cpp_TypeInfo_var->static_fields)->____pocoJsonSerializerStrategy_1;
		PocoJsonSerializerStrategy_t629 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		PocoJsonSerializerStrategy_t629 * L_2 = (PocoJsonSerializerStrategy_t629 *)il2cpp_codegen_object_new (PocoJsonSerializerStrategy_t629_il2cpp_TypeInfo_var);
		PocoJsonSerializerStrategy__ctor_m3268(L_2, /*hidden argument*/NULL);
		PocoJsonSerializerStrategy_t629 * L_3 = L_2;
		((SimpleJson_t630_StaticFields*)SimpleJson_t630_il2cpp_TypeInfo_var->static_fields)->____pocoJsonSerializerStrategy_1 = L_3;
		G_B2_0 = L_3;
	}

IL_0017:
	{
		return G_B2_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_Constructo.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_0.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_1.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_2.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_3.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_4.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfo.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfo.h"
// System.Collections.Generic.Dictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// SimpleJson.Reflection.ReflectionUtils/GetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_GetDelegat.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11.h"
// SimpleJson.Reflection.ReflectionUtils/SetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_SetDelegat.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"
// System.Guid
#include "mscorlib_System_Guid.h"
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafeMethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_0MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_1MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_2MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_3MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_4MethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtilsMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10MethodDeclarations.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfoMethodDeclarations.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfoMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2MethodDeclarations.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffsetMethodDeclarations.h"
// System.Guid
#include "mscorlib_System_GuidMethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/GetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_GetDelegatMethodDeclarations.h"


// System.Void SimpleJson.PocoJsonSerializerStrategy::.ctor()
extern TypeInfo* ThreadSafeDictionaryValueFactory_2_t764_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionary_2_t765_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionaryValueFactory_2_t766_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionary_2_t767_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionaryValueFactory_2_t768_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionary_2_t769_il2cpp_TypeInfo_var;
extern const MethodInfo* ThreadSafeDictionaryValueFactory_2__ctor_m3611_MethodInfo_var;
extern const MethodInfo* ThreadSafeDictionary_2__ctor_m3612_MethodInfo_var;
extern const MethodInfo* ThreadSafeDictionaryValueFactory_2__ctor_m3613_MethodInfo_var;
extern const MethodInfo* ThreadSafeDictionary_2__ctor_m3614_MethodInfo_var;
extern const MethodInfo* ThreadSafeDictionaryValueFactory_2__ctor_m3615_MethodInfo_var;
extern const MethodInfo* ThreadSafeDictionary_2__ctor_m3616_MethodInfo_var;
extern "C" void PocoJsonSerializerStrategy__ctor_m3268 (PocoJsonSerializerStrategy_t629 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ThreadSafeDictionaryValueFactory_2_t764_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1049);
		ThreadSafeDictionary_2_t765_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1050);
		ThreadSafeDictionaryValueFactory_2_t766_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1051);
		ThreadSafeDictionary_2_t767_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1052);
		ThreadSafeDictionaryValueFactory_2_t768_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1053);
		ThreadSafeDictionary_2_t769_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1054);
		ThreadSafeDictionaryValueFactory_2__ctor_m3611_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483980);
		ThreadSafeDictionary_2__ctor_m3612_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483981);
		ThreadSafeDictionaryValueFactory_2__ctor_m3613_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483982);
		ThreadSafeDictionary_2__ctor_m3614_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483983);
		ThreadSafeDictionaryValueFactory_2__ctor_m3615_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483984);
		ThreadSafeDictionary_2__ctor_m3616_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483985);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = { (void*)GetVirtualMethodInfo(__this, 6) };
		ThreadSafeDictionaryValueFactory_2_t764 * L_1 = (ThreadSafeDictionaryValueFactory_2_t764 *)il2cpp_codegen_object_new (ThreadSafeDictionaryValueFactory_2_t764_il2cpp_TypeInfo_var);
		ThreadSafeDictionaryValueFactory_2__ctor_m3611(L_1, __this, L_0, /*hidden argument*/ThreadSafeDictionaryValueFactory_2__ctor_m3611_MethodInfo_var);
		ThreadSafeDictionary_2_t765 * L_2 = (ThreadSafeDictionary_2_t765 *)il2cpp_codegen_object_new (ThreadSafeDictionary_2_t765_il2cpp_TypeInfo_var);
		ThreadSafeDictionary_2__ctor_m3612(L_2, L_1, /*hidden argument*/ThreadSafeDictionary_2__ctor_m3612_MethodInfo_var);
		__this->___ConstructorCache_0 = L_2;
		IntPtr_t L_3 = { (void*)GetVirtualMethodInfo(__this, 7) };
		ThreadSafeDictionaryValueFactory_2_t766 * L_4 = (ThreadSafeDictionaryValueFactory_2_t766 *)il2cpp_codegen_object_new (ThreadSafeDictionaryValueFactory_2_t766_il2cpp_TypeInfo_var);
		ThreadSafeDictionaryValueFactory_2__ctor_m3613(L_4, __this, L_3, /*hidden argument*/ThreadSafeDictionaryValueFactory_2__ctor_m3613_MethodInfo_var);
		ThreadSafeDictionary_2_t767 * L_5 = (ThreadSafeDictionary_2_t767 *)il2cpp_codegen_object_new (ThreadSafeDictionary_2_t767_il2cpp_TypeInfo_var);
		ThreadSafeDictionary_2__ctor_m3614(L_5, L_4, /*hidden argument*/ThreadSafeDictionary_2__ctor_m3614_MethodInfo_var);
		__this->___GetCache_1 = L_5;
		IntPtr_t L_6 = { (void*)GetVirtualMethodInfo(__this, 8) };
		ThreadSafeDictionaryValueFactory_2_t768 * L_7 = (ThreadSafeDictionaryValueFactory_2_t768 *)il2cpp_codegen_object_new (ThreadSafeDictionaryValueFactory_2_t768_il2cpp_TypeInfo_var);
		ThreadSafeDictionaryValueFactory_2__ctor_m3615(L_7, __this, L_6, /*hidden argument*/ThreadSafeDictionaryValueFactory_2__ctor_m3615_MethodInfo_var);
		ThreadSafeDictionary_2_t769 * L_8 = (ThreadSafeDictionary_2_t769 *)il2cpp_codegen_object_new (ThreadSafeDictionary_2_t769_il2cpp_TypeInfo_var);
		ThreadSafeDictionary_2__ctor_m3616(L_8, L_7, /*hidden argument*/ThreadSafeDictionary_2__ctor_m3616_MethodInfo_var);
		__this->___SetCache_2 = L_8;
		return;
	}
}
// System.Void SimpleJson.PocoJsonSerializerStrategy::.cctor()
extern const Il2CppType* Int32_t75_0_0_0_var;
extern TypeInfo* TypeU5BU5D_t634_il2cpp_TypeInfo_var;
extern TypeInfo* PocoJsonSerializerStrategy_t629_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t48_il2cpp_TypeInfo_var;
extern "C" void PocoJsonSerializerStrategy__cctor_m3269 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t75_0_0_0_var = il2cpp_codegen_type_from_index(23);
		TypeU5BU5D_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1055);
		PocoJsonSerializerStrategy_t629_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1042);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		StringU5BU5D_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(976);
		s_Il2CppMethodIntialized = true;
	}
	{
		((PocoJsonSerializerStrategy_t629_StaticFields*)PocoJsonSerializerStrategy_t629_il2cpp_TypeInfo_var->static_fields)->___EmptyTypes_3 = ((TypeU5BU5D_t634*)SZArrayNew(TypeU5BU5D_t634_il2cpp_TypeInfo_var, 0));
		TypeU5BU5D_t634* L_0 = ((TypeU5BU5D_t634*)SZArrayNew(TypeU5BU5D_t634_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1720(NULL /*static, unused*/, LoadTypeToken(Int32_t75_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_0, 0)) = (Type_t *)L_1;
		((PocoJsonSerializerStrategy_t629_StaticFields*)PocoJsonSerializerStrategy_t629_il2cpp_TypeInfo_var->static_fields)->___ArrayConstructorParameterTypes_4 = L_0;
		StringU5BU5D_t48* L_2 = ((StringU5BU5D_t48*)SZArrayNew(StringU5BU5D_t48_il2cpp_TypeInfo_var, 3));
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral330);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 0)) = (String_t*)(String_t*) &_stringLiteral330;
		StringU5BU5D_t48* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral331);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 1)) = (String_t*)(String_t*) &_stringLiteral331;
		StringU5BU5D_t48* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral332);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 2)) = (String_t*)(String_t*) &_stringLiteral332;
		((PocoJsonSerializerStrategy_t629_StaticFields*)PocoJsonSerializerStrategy_t629_il2cpp_TypeInfo_var->static_fields)->___Iso8601Format_5 = L_4;
		return;
	}
}
// System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String)
extern "C" String_t* PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m3270 (PocoJsonSerializerStrategy_t629 * __this, String_t* ___clrPropertyName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___clrPropertyName;
		return L_0;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.PocoJsonSerializerStrategy::ContructorDelegateFactory(System.Type)
extern TypeInfo* PocoJsonSerializerStrategy_t629_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionUtils_t644_il2cpp_TypeInfo_var;
extern "C" ConstructorDelegate_t637 * PocoJsonSerializerStrategy_ContructorDelegateFactory_m3271 (PocoJsonSerializerStrategy_t629 * __this, Type_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PocoJsonSerializerStrategy_t629_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1042);
		ReflectionUtils_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1056);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * G_B2_0 = {0};
	Type_t * G_B1_0 = {0};
	TypeU5BU5D_t634* G_B3_0 = {0};
	Type_t * G_B3_1 = {0};
	{
		Type_t * L_0 = ___key;
		Type_t * L_1 = ___key;
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Type::get_IsArray() */, L_1);
		G_B1_0 = L_0;
		if (!L_2)
		{
			G_B2_0 = L_0;
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t629_il2cpp_TypeInfo_var);
		TypeU5BU5D_t634* L_3 = ((PocoJsonSerializerStrategy_t629_StaticFields*)PocoJsonSerializerStrategy_t629_il2cpp_TypeInfo_var->static_fields)->___ArrayConstructorParameterTypes_4;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t629_il2cpp_TypeInfo_var);
		TypeU5BU5D_t634* L_4 = ((PocoJsonSerializerStrategy_t629_StaticFields*)PocoJsonSerializerStrategy_t629_il2cpp_TypeInfo_var->static_fields)->___EmptyTypes_3;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t644_il2cpp_TypeInfo_var);
		ConstructorDelegate_t637 * L_5 = ReflectionUtils_GetContructor_m3307(NULL /*static, unused*/, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate> SimpleJson.PocoJsonSerializerStrategy::GetterValueFactory(System.Type)
extern TypeInfo* Dictionary_2_t770_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionUtils_t644_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t729_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t771_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t726_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t59_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t69_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t730_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t772_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3617_MethodInfo_var;
extern "C" Object_t* PocoJsonSerializerStrategy_GetterValueFactory_m3272 (PocoJsonSerializerStrategy_t629 * __this, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t770_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		ReflectionUtils_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1056);
		IEnumerable_1_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1058);
		IEnumerator_1_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1060);
		IDictionary_2_t726_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1044);
		IEnumerator_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		IDisposable_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		IEnumerable_1_t730_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		IEnumerator_1_t772_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1063);
		Dictionary_2__ctor_m3617_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483986);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	PropertyInfo_t * V_1 = {0};
	Object_t* V_2 = {0};
	MethodInfo_t * V_3 = {0};
	FieldInfo_t * V_4 = {0};
	Object_t* V_5 = {0};
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t770 * L_0 = (Dictionary_2_t770 *)il2cpp_codegen_object_new (Dictionary_2_t770_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3617(L_0, /*hidden argument*/Dictionary_2__ctor_m3617_MethodInfo_var);
		V_0 = L_0;
		Type_t * L_1 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t644_il2cpp_TypeInfo_var);
		Object_t* L_2 = ReflectionUtils_GetProperties_m3303(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>::GetEnumerator() */, IEnumerable_1_t729_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0063;
		}

IL_0017:
		{
			Object_t* L_4 = V_2;
			NullCheck(L_4);
			PropertyInfo_t * L_5 = (PropertyInfo_t *)InterfaceFuncInvoker0< PropertyInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyInfo>::get_Current() */, IEnumerator_1_t771_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			PropertyInfo_t * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_6);
			if (!L_7)
			{
				goto IL_0063;
			}
		}

IL_0029:
		{
			PropertyInfo_t * L_8 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t644_il2cpp_TypeInfo_var);
			MethodInfo_t * L_9 = ReflectionUtils_GetGetterMethodInfo_m3305(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			V_3 = L_9;
			MethodInfo_t * L_10 = V_3;
			NullCheck(L_10);
			bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Reflection.MethodBase::get_IsStatic() */, L_10);
			if (L_11)
			{
				goto IL_0046;
			}
		}

IL_003b:
		{
			MethodInfo_t * L_12 = V_3;
			NullCheck(L_12);
			bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(20 /* System.Boolean System.Reflection.MethodBase::get_IsPublic() */, L_12);
			if (L_13)
			{
				goto IL_004b;
			}
		}

IL_0046:
		{
			goto IL_0063;
		}

IL_004b:
		{
			Object_t* L_14 = V_0;
			PropertyInfo_t * L_15 = V_1;
			NullCheck(L_15);
			String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_15);
			String_t* L_17 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_16);
			PropertyInfo_t * L_18 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t644_il2cpp_TypeInfo_var);
			GetDelegate_t635 * L_19 = ReflectionUtils_GetGetMethod_m3310(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
			NullCheck(L_14);
			InterfaceActionInvoker2< String_t*, GetDelegate_t635 * >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>::set_Item(!0,!1) */, IDictionary_2_t726_il2cpp_TypeInfo_var, L_14, L_17, L_19);
		}

IL_0063:
		{
			Object_t* L_20 = V_2;
			NullCheck(L_20);
			bool L_21 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t59_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_0017;
			}
		}

IL_006e:
		{
			IL2CPP_LEAVE(0x7E, FINALLY_0073);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_0073;
	}

FINALLY_0073:
	{ // begin finally (depth: 1)
		{
			Object_t* L_22 = V_2;
			if (L_22)
			{
				goto IL_0077;
			}
		}

IL_0076:
		{
			IL2CPP_END_FINALLY(115)
		}

IL_0077:
		{
			Object_t* L_23 = V_2;
			NullCheck(L_23);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t69_il2cpp_TypeInfo_var, L_23);
			IL2CPP_END_FINALLY(115)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(115)
	{
		IL2CPP_JUMP_TBL(0x7E, IL_007e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_007e:
	{
		Type_t * L_24 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t644_il2cpp_TypeInfo_var);
		Object_t* L_25 = ReflectionUtils_GetFields_m3304(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Object_t* L_26 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>::GetEnumerator() */, IEnumerable_1_t730_il2cpp_TypeInfo_var, L_25);
		V_5 = L_26;
	}

IL_008b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00d0;
		}

IL_0090:
		{
			Object_t* L_27 = V_5;
			NullCheck(L_27);
			FieldInfo_t * L_28 = (FieldInfo_t *)InterfaceFuncInvoker0< FieldInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.FieldInfo>::get_Current() */, IEnumerator_1_t772_il2cpp_TypeInfo_var, L_27);
			V_4 = L_28;
			FieldInfo_t * L_29 = V_4;
			NullCheck(L_29);
			bool L_30 = (bool)VirtFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Reflection.FieldInfo::get_IsStatic() */, L_29);
			if (L_30)
			{
				goto IL_00b1;
			}
		}

IL_00a5:
		{
			FieldInfo_t * L_31 = V_4;
			NullCheck(L_31);
			bool L_32 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Reflection.FieldInfo::get_IsPublic() */, L_31);
			if (L_32)
			{
				goto IL_00b6;
			}
		}

IL_00b1:
		{
			goto IL_00d0;
		}

IL_00b6:
		{
			Object_t* L_33 = V_0;
			FieldInfo_t * L_34 = V_4;
			NullCheck(L_34);
			String_t* L_35 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_34);
			String_t* L_36 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_35);
			FieldInfo_t * L_37 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t644_il2cpp_TypeInfo_var);
			GetDelegate_t635 * L_38 = ReflectionUtils_GetGetMethod_m3311(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
			NullCheck(L_33);
			InterfaceActionInvoker2< String_t*, GetDelegate_t635 * >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>::set_Item(!0,!1) */, IDictionary_2_t726_il2cpp_TypeInfo_var, L_33, L_36, L_38);
		}

IL_00d0:
		{
			Object_t* L_39 = V_5;
			NullCheck(L_39);
			bool L_40 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t59_il2cpp_TypeInfo_var, L_39);
			if (L_40)
			{
				goto IL_0090;
			}
		}

IL_00dc:
		{
			IL2CPP_LEAVE(0xEE, FINALLY_00e1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_00e1;
	}

FINALLY_00e1:
	{ // begin finally (depth: 1)
		{
			Object_t* L_41 = V_5;
			if (L_41)
			{
				goto IL_00e6;
			}
		}

IL_00e5:
		{
			IL2CPP_END_FINALLY(225)
		}

IL_00e6:
		{
			Object_t* L_42 = V_5;
			NullCheck(L_42);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t69_il2cpp_TypeInfo_var, L_42);
			IL2CPP_END_FINALLY(225)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(225)
	{
		IL2CPP_JUMP_TBL(0xEE, IL_00ee)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_00ee:
	{
		Object_t* L_43 = V_0;
		return L_43;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>> SimpleJson.PocoJsonSerializerStrategy::SetterValueFactory(System.Type)
extern TypeInfo* Dictionary_2_t773_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionUtils_t644_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t729_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t771_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t727_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t59_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t69_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t730_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t772_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3618_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2__ctor_m3619_MethodInfo_var;
extern "C" Object_t* PocoJsonSerializerStrategy_SetterValueFactory_m3273 (PocoJsonSerializerStrategy_t629 * __this, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1064);
		ReflectionUtils_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1056);
		IEnumerable_1_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1058);
		IEnumerator_1_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1060);
		IDictionary_2_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1046);
		IEnumerator_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		IDisposable_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		IEnumerable_1_t730_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		IEnumerator_1_t772_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1063);
		Dictionary_2__ctor_m3618_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483987);
		KeyValuePair_2__ctor_m3619_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483988);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	PropertyInfo_t * V_1 = {0};
	Object_t* V_2 = {0};
	MethodInfo_t * V_3 = {0};
	FieldInfo_t * V_4 = {0};
	Object_t* V_5 = {0};
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t773 * L_0 = (Dictionary_2_t773 *)il2cpp_codegen_object_new (Dictionary_2_t773_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3618(L_0, /*hidden argument*/Dictionary_2__ctor_m3618_MethodInfo_var);
		V_0 = L_0;
		Type_t * L_1 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t644_il2cpp_TypeInfo_var);
		Object_t* L_2 = ReflectionUtils_GetProperties_m3303(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>::GetEnumerator() */, IEnumerable_1_t729_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006e;
		}

IL_0017:
		{
			Object_t* L_4 = V_2;
			NullCheck(L_4);
			PropertyInfo_t * L_5 = (PropertyInfo_t *)InterfaceFuncInvoker0< PropertyInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyInfo>::get_Current() */, IEnumerator_1_t771_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			PropertyInfo_t * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(16 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_6);
			if (!L_7)
			{
				goto IL_006e;
			}
		}

IL_0029:
		{
			PropertyInfo_t * L_8 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t644_il2cpp_TypeInfo_var);
			MethodInfo_t * L_9 = ReflectionUtils_GetSetterMethodInfo_m3306(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			V_3 = L_9;
			MethodInfo_t * L_10 = V_3;
			NullCheck(L_10);
			bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Reflection.MethodBase::get_IsStatic() */, L_10);
			if (L_11)
			{
				goto IL_0046;
			}
		}

IL_003b:
		{
			MethodInfo_t * L_12 = V_3;
			NullCheck(L_12);
			bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(20 /* System.Boolean System.Reflection.MethodBase::get_IsPublic() */, L_12);
			if (L_13)
			{
				goto IL_004b;
			}
		}

IL_0046:
		{
			goto IL_006e;
		}

IL_004b:
		{
			Object_t* L_14 = V_0;
			PropertyInfo_t * L_15 = V_1;
			NullCheck(L_15);
			String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_15);
			String_t* L_17 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_16);
			PropertyInfo_t * L_18 = V_1;
			NullCheck(L_18);
			Type_t * L_19 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_18);
			PropertyInfo_t * L_20 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t644_il2cpp_TypeInfo_var);
			SetDelegate_t636 * L_21 = ReflectionUtils_GetSetMethod_m3314(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
			KeyValuePair_2_t774  L_22 = {0};
			KeyValuePair_2__ctor_m3619(&L_22, L_19, L_21, /*hidden argument*/KeyValuePair_2__ctor_m3619_MethodInfo_var);
			NullCheck(L_14);
			InterfaceActionInvoker2< String_t*, KeyValuePair_2_t774  >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::set_Item(!0,!1) */, IDictionary_2_t727_il2cpp_TypeInfo_var, L_14, L_17, L_22);
		}

IL_006e:
		{
			Object_t* L_23 = V_2;
			NullCheck(L_23);
			bool L_24 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t59_il2cpp_TypeInfo_var, L_23);
			if (L_24)
			{
				goto IL_0017;
			}
		}

IL_0079:
		{
			IL2CPP_LEAVE(0x89, FINALLY_007e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_007e;
	}

FINALLY_007e:
	{ // begin finally (depth: 1)
		{
			Object_t* L_25 = V_2;
			if (L_25)
			{
				goto IL_0082;
			}
		}

IL_0081:
		{
			IL2CPP_END_FINALLY(126)
		}

IL_0082:
		{
			Object_t* L_26 = V_2;
			NullCheck(L_26);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t69_il2cpp_TypeInfo_var, L_26);
			IL2CPP_END_FINALLY(126)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(126)
	{
		IL2CPP_JUMP_TBL(0x89, IL_0089)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_0089:
	{
		Type_t * L_27 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t644_il2cpp_TypeInfo_var);
		Object_t* L_28 = ReflectionUtils_GetFields_m3304(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		Object_t* L_29 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>::GetEnumerator() */, IEnumerable_1_t730_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}

IL_0096:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00f3;
		}

IL_009b:
		{
			Object_t* L_30 = V_5;
			NullCheck(L_30);
			FieldInfo_t * L_31 = (FieldInfo_t *)InterfaceFuncInvoker0< FieldInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.FieldInfo>::get_Current() */, IEnumerator_1_t772_il2cpp_TypeInfo_var, L_30);
			V_4 = L_31;
			FieldInfo_t * L_32 = V_4;
			NullCheck(L_32);
			bool L_33 = (bool)VirtFuncInvoker0< bool >::Invoke(20 /* System.Boolean System.Reflection.FieldInfo::get_IsInitOnly() */, L_32);
			if (L_33)
			{
				goto IL_00c8;
			}
		}

IL_00b0:
		{
			FieldInfo_t * L_34 = V_4;
			NullCheck(L_34);
			bool L_35 = (bool)VirtFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Reflection.FieldInfo::get_IsStatic() */, L_34);
			if (L_35)
			{
				goto IL_00c8;
			}
		}

IL_00bc:
		{
			FieldInfo_t * L_36 = V_4;
			NullCheck(L_36);
			bool L_37 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Reflection.FieldInfo::get_IsPublic() */, L_36);
			if (L_37)
			{
				goto IL_00cd;
			}
		}

IL_00c8:
		{
			goto IL_00f3;
		}

IL_00cd:
		{
			Object_t* L_38 = V_0;
			FieldInfo_t * L_39 = V_4;
			NullCheck(L_39);
			String_t* L_40 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_39);
			String_t* L_41 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_40);
			FieldInfo_t * L_42 = V_4;
			NullCheck(L_42);
			Type_t * L_43 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_42);
			FieldInfo_t * L_44 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t644_il2cpp_TypeInfo_var);
			SetDelegate_t636 * L_45 = ReflectionUtils_GetSetMethod_m3315(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
			KeyValuePair_2_t774  L_46 = {0};
			KeyValuePair_2__ctor_m3619(&L_46, L_43, L_45, /*hidden argument*/KeyValuePair_2__ctor_m3619_MethodInfo_var);
			NullCheck(L_38);
			InterfaceActionInvoker2< String_t*, KeyValuePair_2_t774  >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::set_Item(!0,!1) */, IDictionary_2_t727_il2cpp_TypeInfo_var, L_38, L_41, L_46);
		}

IL_00f3:
		{
			Object_t* L_47 = V_5;
			NullCheck(L_47);
			bool L_48 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t59_il2cpp_TypeInfo_var, L_47);
			if (L_48)
			{
				goto IL_009b;
			}
		}

IL_00ff:
		{
			IL2CPP_LEAVE(0x111, FINALLY_0104);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_0104;
	}

FINALLY_0104:
	{ // begin finally (depth: 1)
		{
			Object_t* L_49 = V_5;
			if (L_49)
			{
				goto IL_0109;
			}
		}

IL_0108:
		{
			IL2CPP_END_FINALLY(260)
		}

IL_0109:
		{
			Object_t* L_50 = V_5;
			NullCheck(L_50);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t69_il2cpp_TypeInfo_var, L_50);
			IL2CPP_END_FINALLY(260)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(260)
	{
		IL2CPP_JUMP_TBL(0x111, IL_0111)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_0111:
	{
		Object_t* L_51 = V_0;
		return L_51;
	}
}
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeNonPrimitiveObject(System.Object,System.Object&)
extern "C" bool PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m3274 (PocoJsonSerializerStrategy_t629 * __this, Object_t * ___input, Object_t ** ___output, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Object_t * L_0 = ___input;
		Object_t ** L_1 = ___output;
		bool L_2 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(11 /* System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeKnownTypes(System.Object,System.Object&) */, __this, L_0, L_1);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		Object_t * L_3 = ___input;
		Object_t ** L_4 = ___output;
		bool L_5 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(12 /* System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeUnknownTypes(System.Object,System.Object&) */, __this, L_3, L_4);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		return G_B3_0;
	}
}
// System.Object SimpleJson.PocoJsonSerializerStrategy::SerializeEnum(System.Enum)
extern TypeInfo* CultureInfo_t757_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t744_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t759_il2cpp_TypeInfo_var;
extern "C" Object_t * PocoJsonSerializerStrategy_SerializeEnum_m3275 (PocoJsonSerializerStrategy_t629 * __this, Enum_t431 * ___p, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t757_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1031);
		Convert_t744_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(965);
		Double_t759_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1033);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t431 * L_0 = ___p;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t757_il2cpp_TypeInfo_var);
		CultureInfo_t757 * L_1 = CultureInfo_get_InvariantCulture_m3596(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t744_il2cpp_TypeInfo_var);
		double L_2 = Convert_ToDouble_m3609(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		double L_3 = L_2;
		Object_t * L_4 = Box(Double_t759_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeKnownTypes(System.Object,System.Object&)
extern TypeInfo* DateTime_t77_il2cpp_TypeInfo_var;
extern TypeInfo* PocoJsonSerializerStrategy_t629_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t757_il2cpp_TypeInfo_var;
extern TypeInfo* DateTimeOffset_t775_il2cpp_TypeInfo_var;
extern TypeInfo* Guid_t776_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t623_il2cpp_TypeInfo_var;
extern TypeInfo* Enum_t431_il2cpp_TypeInfo_var;
extern "C" bool PocoJsonSerializerStrategy_TrySerializeKnownTypes_m3276 (PocoJsonSerializerStrategy_t629 * __this, Object_t * ___input, Object_t ** ___output, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t77_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		PocoJsonSerializerStrategy_t629_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1042);
		CultureInfo_t757_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1031);
		DateTimeOffset_t775_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1065);
		Guid_t776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1066);
		Uri_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1011);
		Enum_t431_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(423);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Enum_t431 * V_1 = {0};
	DateTime_t77  V_2 = {0};
	DateTime_t77  V_3 = {0};
	DateTimeOffset_t775  V_4 = {0};
	DateTimeOffset_t775  V_5 = {0};
	Guid_t776  V_6 = {0};
	{
		V_0 = 1;
		Object_t * L_0 = ___input;
		if (!((Object_t *)IsInst(L_0, DateTime_t77_il2cpp_TypeInfo_var)))
		{
			goto IL_0036;
		}
	}
	{
		Object_t ** L_1 = ___output;
		Object_t * L_2 = ___input;
		V_2 = ((*(DateTime_t77 *)((DateTime_t77 *)UnBox (L_2, DateTime_t77_il2cpp_TypeInfo_var))));
		DateTime_t77  L_3 = DateTime_ToUniversalTime_m3620((&V_2), /*hidden argument*/NULL);
		V_3 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t629_il2cpp_TypeInfo_var);
		StringU5BU5D_t48* L_4 = ((PocoJsonSerializerStrategy_t629_StaticFields*)PocoJsonSerializerStrategy_t629_il2cpp_TypeInfo_var->static_fields)->___Iso8601Format_5;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		int32_t L_5 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t757_il2cpp_TypeInfo_var);
		CultureInfo_t757 * L_6 = CultureInfo_get_InvariantCulture_m3596(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_7 = DateTime_ToString_m3621((&V_3), (*(String_t**)(String_t**)SZArrayLdElema(L_4, L_5)), L_6, /*hidden argument*/NULL);
		*((Object_t **)(L_1)) = (Object_t *)L_7;
		goto IL_00ca;
	}

IL_0036:
	{
		Object_t * L_8 = ___input;
		if (!((Object_t *)IsInst(L_8, DateTimeOffset_t775_il2cpp_TypeInfo_var)))
		{
			goto IL_006c;
		}
	}
	{
		Object_t ** L_9 = ___output;
		Object_t * L_10 = ___input;
		V_4 = ((*(DateTimeOffset_t775 *)((DateTimeOffset_t775 *)UnBox (L_10, DateTimeOffset_t775_il2cpp_TypeInfo_var))));
		DateTimeOffset_t775  L_11 = DateTimeOffset_ToUniversalTime_m3622((&V_4), /*hidden argument*/NULL);
		V_5 = L_11;
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t629_il2cpp_TypeInfo_var);
		StringU5BU5D_t48* L_12 = ((PocoJsonSerializerStrategy_t629_StaticFields*)PocoJsonSerializerStrategy_t629_il2cpp_TypeInfo_var->static_fields)->___Iso8601Format_5;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		int32_t L_13 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t757_il2cpp_TypeInfo_var);
		CultureInfo_t757 * L_14 = CultureInfo_get_InvariantCulture_m3596(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_15 = DateTimeOffset_ToString_m3623((&V_5), (*(String_t**)(String_t**)SZArrayLdElema(L_12, L_13)), L_14, /*hidden argument*/NULL);
		*((Object_t **)(L_9)) = (Object_t *)L_15;
		goto IL_00ca;
	}

IL_006c:
	{
		Object_t * L_16 = ___input;
		if (!((Object_t *)IsInst(L_16, Guid_t776_il2cpp_TypeInfo_var)))
		{
			goto IL_0092;
		}
	}
	{
		Object_t ** L_17 = ___output;
		Object_t * L_18 = ___input;
		V_6 = ((*(Guid_t776 *)((Guid_t776 *)UnBox (L_18, Guid_t776_il2cpp_TypeInfo_var))));
		String_t* L_19 = Guid_ToString_m3624((&V_6), (String_t*) &_stringLiteral333, /*hidden argument*/NULL);
		*((Object_t **)(L_17)) = (Object_t *)L_19;
		goto IL_00ca;
	}

IL_0092:
	{
		Object_t * L_20 = ___input;
		if (!((Uri_t623 *)IsInst(L_20, Uri_t623_il2cpp_TypeInfo_var)))
		{
			goto IL_00aa;
		}
	}
	{
		Object_t ** L_21 = ___output;
		Object_t * L_22 = ___input;
		NullCheck(L_22);
		String_t* L_23 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_22);
		*((Object_t **)(L_21)) = (Object_t *)L_23;
		goto IL_00ca;
	}

IL_00aa:
	{
		Object_t * L_24 = ___input;
		V_1 = ((Enum_t431 *)IsInst(L_24, Enum_t431_il2cpp_TypeInfo_var));
		Enum_t431 * L_25 = V_1;
		if (!L_25)
		{
			goto IL_00c5;
		}
	}
	{
		Object_t ** L_26 = ___output;
		Enum_t431 * L_27 = V_1;
		Object_t * L_28 = (Object_t *)VirtFuncInvoker1< Object_t *, Enum_t431 * >::Invoke(10 /* System.Object SimpleJson.PocoJsonSerializerStrategy::SerializeEnum(System.Enum) */, __this, L_27);
		*((Object_t **)(L_26)) = (Object_t *)L_28;
		goto IL_00ca;
	}

IL_00c5:
	{
		V_0 = 0;
		Object_t ** L_29 = ___output;
		*((Object_t **)(L_29)) = (Object_t *)NULL;
	}

IL_00ca:
	{
		bool L_30 = V_0;
		return L_30;
	}
}
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeUnknownTypes(System.Object,System.Object&)
extern TypeInfo* ArgumentNullException_t756_il2cpp_TypeInfo_var;
extern TypeInfo* JsonObject_t627_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t632_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t778_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t779_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t716_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t59_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t69_il2cpp_TypeInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m3625_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m3626_MethodInfo_var;
extern "C" bool PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m3277 (PocoJsonSerializerStrategy_t629 * __this, Object_t * ___input, Object_t ** ___output, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t756_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1026);
		JsonObject_t627_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1029);
		IDictionary_2_t632_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1067);
		IEnumerable_1_t778_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1068);
		IEnumerator_1_t779_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1070);
		IDictionary_2_t716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1000);
		IEnumerator_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		IDisposable_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		KeyValuePair_2_get_Value_m3625_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483989);
		KeyValuePair_2_get_Key_m3626_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483990);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Object_t* V_1 = {0};
	Object_t* V_2 = {0};
	KeyValuePair_2_t777  V_3 = {0};
	Object_t* V_4 = {0};
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___input;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t756 * L_1 = (ArgumentNullException_t756 *)il2cpp_codegen_object_new (ArgumentNullException_t756_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3592(L_1, (String_t*) &_stringLiteral334, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t ** L_2 = ___output;
		*((Object_t **)(L_2)) = (Object_t *)NULL;
		Object_t * L_3 = ___input;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m1633(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Type_t * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return 0;
	}

IL_0028:
	{
		JsonObject_t627 * L_7 = (JsonObject_t627 *)il2cpp_codegen_object_new (JsonObject_t627_il2cpp_TypeInfo_var);
		JsonObject__ctor_m3229(L_7, /*hidden argument*/NULL);
		V_1 = L_7;
		Object_t* L_8 = (__this->___GetCache_1);
		Type_t * L_9 = V_0;
		NullCheck(L_8);
		Object_t* L_10 = (Object_t*)InterfaceFuncInvoker1< Object_t*, Type_t * >::Invoke(3 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Item(!0) */, IDictionary_2_t632_il2cpp_TypeInfo_var, L_8, L_9);
		V_2 = L_10;
		Object_t* L_11 = V_2;
		NullCheck(L_11);
		Object_t* L_12 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::GetEnumerator() */, IEnumerable_1_t778_il2cpp_TypeInfo_var, L_11);
		V_4 = L_12;
	}

IL_0043:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007c;
		}

IL_0048:
		{
			Object_t* L_13 = V_4;
			NullCheck(L_13);
			KeyValuePair_2_t777  L_14 = (KeyValuePair_2_t777 )InterfaceFuncInvoker0< KeyValuePair_2_t777  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Current() */, IEnumerator_1_t779_il2cpp_TypeInfo_var, L_13);
			V_3 = L_14;
			GetDelegate_t635 * L_15 = KeyValuePair_2_get_Value_m3625((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m3625_MethodInfo_var);
			if (!L_15)
			{
				goto IL_007c;
			}
		}

IL_005c:
		{
			Object_t* L_16 = V_1;
			String_t* L_17 = KeyValuePair_2_get_Key_m3626((&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m3626_MethodInfo_var);
			String_t* L_18 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_17);
			GetDelegate_t635 * L_19 = KeyValuePair_2_get_Value_m3625((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m3625_MethodInfo_var);
			Object_t * L_20 = ___input;
			NullCheck(L_19);
			Object_t * L_21 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(10 /* System.Object SimpleJson.Reflection.ReflectionUtils/GetDelegate::Invoke(System.Object) */, L_19, L_20);
			NullCheck(L_16);
			InterfaceActionInvoker2< String_t*, Object_t * >::Invoke(0 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::Add(!0,!1) */, IDictionary_2_t716_il2cpp_TypeInfo_var, L_16, L_18, L_21);
		}

IL_007c:
		{
			Object_t* L_22 = V_4;
			NullCheck(L_22);
			bool L_23 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t59_il2cpp_TypeInfo_var, L_22);
			if (L_23)
			{
				goto IL_0048;
			}
		}

IL_0088:
		{
			IL2CPP_LEAVE(0x9A, FINALLY_008d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_008d;
	}

FINALLY_008d:
	{ // begin finally (depth: 1)
		{
			Object_t* L_24 = V_4;
			if (L_24)
			{
				goto IL_0092;
			}
		}

IL_0091:
		{
			IL2CPP_END_FINALLY(141)
		}

IL_0092:
		{
			Object_t* L_25 = V_4;
			NullCheck(L_25);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t69_il2cpp_TypeInfo_var, L_25);
			IL2CPP_END_FINALLY(141)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(141)
	{
		IL2CPP_JUMP_TBL(0x9A, IL_009a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_009a:
	{
		Object_t ** L_26 = ___output;
		Object_t* L_27 = V_1;
		*((Object_t **)(L_26)) = (Object_t *)L_27;
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void SimpleJson.Reflection.ReflectionUtils/GetDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void GetDelegate__ctor_m3278 (GetDelegate_t635 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Object SimpleJson.Reflection.ReflectionUtils/GetDelegate::Invoke(System.Object)
extern "C" Object_t * GetDelegate_Invoke_m3279 (GetDelegate_t635 * __this, Object_t * ___source, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		GetDelegate_Invoke_m3279((GetDelegate_t635 *)__this->___prev_9,___source, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___source, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___source,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___source, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___source,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___source,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Object_t * pinvoke_delegate_wrapper_GetDelegate_t635(Il2CppObject* delegate, Object_t * ___source)
{
	// Marshaling of parameter '___source' to native representation
	Object_t * ____source_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/GetDelegate::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * GetDelegate_BeginInvoke_m3280 (GetDelegate_t635 * __this, Object_t * ___source, AsyncCallback_t224 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___source;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Object SimpleJson.Reflection.ReflectionUtils/GetDelegate::EndInvoke(System.IAsyncResult)
extern "C" Object_t * GetDelegate_EndInvoke_m3281 (GetDelegate_t635 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/SetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_SetDelegatMethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void SetDelegate__ctor_m3282 (SetDelegate_t636 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::Invoke(System.Object,System.Object)
extern "C" void SetDelegate_Invoke_m3283 (SetDelegate_t636 * __this, Object_t * ___source, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		SetDelegate_Invoke_m3283((SetDelegate_t636 *)__this->___prev_9,___source, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___source, Object_t * ___value, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___source, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___source, Object_t * ___value, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___source, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___value, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___source, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_SetDelegate_t636(Il2CppObject* delegate, Object_t * ___source, Object_t * ___value)
{
	// Marshaling of parameter '___source' to native representation
	Object_t * ____source_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/SetDelegate::BeginInvoke(System.Object,System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * SetDelegate_BeginInvoke_m3284 (SetDelegate_t636 * __this, Object_t * ___source, Object_t * ___value, AsyncCallback_t224 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___source;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::EndInvoke(System.IAsyncResult)
extern "C" void SetDelegate_EndInvoke_m3285 (SetDelegate_t636 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ConstructoMethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void ConstructorDelegate__ctor_m3286 (ConstructorDelegate_t637 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Object SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::Invoke(System.Object[])
extern "C" Object_t * ConstructorDelegate_Invoke_m3287 (ConstructorDelegate_t637 * __this, ObjectU5BU5D_t73* ___args, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ConstructorDelegate_Invoke_m3287((ConstructorDelegate_t637 *)__this->___prev_9,___args, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, ObjectU5BU5D_t73* ___args, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, ObjectU5BU5D_t73* ___args, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Object_t * pinvoke_delegate_wrapper_ConstructorDelegate_t637(Il2CppObject* delegate, ObjectU5BU5D_t73* ___args)
{
	typedef Object_t * (STDCALL *native_function_ptr_type)(Object_t **);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___args' to native representation
	Object_t ** ____args_marshaled = { 0 };
	____args_marshaled = il2cpp_codegen_marshal_array<Object_t *>((Il2CppCodeGenArray*)___args);

	// Native function invocation and marshaling of return value back from native representation
	Object_t * _return_value = _il2cpp_pinvoke_func(____args_marshaled);
	Object_t * __return_value_unmarshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));

	// Marshaling cleanup of parameter '___args' native representation

	return __return_value_unmarshaled;
}
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::BeginInvoke(System.Object[],System.AsyncCallback,System.Object)
extern "C" Object_t * ConstructorDelegate_BeginInvoke_m3288 (ConstructorDelegate_t637 * __this, ObjectU5BU5D_t73* ___args, AsyncCallback_t224 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___args;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Object SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::EndInvoke(System.IAsyncResult)
extern "C" Object_t * ConstructorDelegate_EndInvoke_m3289 (ConstructorDelegate_t637 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetCons.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetConsMethodDeclarations.h"

// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfoMethodDeclarations.h"


// System.Void SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1::.ctor()
extern "C" void U3CGetConstructorByReflectionU3Ec__AnonStorey1__ctor_m3290 (U3CGetConstructorByReflectionU3Ec__AnonStorey1_t639 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1::<>m__0(System.Object[])
extern "C" Object_t * U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m3291 (U3CGetConstructorByReflectionU3Ec__AnonStorey1_t639 * __this, ObjectU5BU5D_t73* ___args, const MethodInfo* method)
{
	{
		ConstructorInfo_t638 * L_0 = (__this->___constructorInfo_0);
		ObjectU5BU5D_t73* L_1 = ___args;
		NullCheck(L_0);
		Object_t * L_2 = ConstructorInfo_Invoke_m3627(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetM.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetMMethodDeclarations.h"

// SimpleJson.Reflection.ReflectionUtils
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils.h"


// System.Void SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2::.ctor()
extern "C" void U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m3292 (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t640 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2::<>m__1(System.Object)
extern TypeInfo* ReflectionUtils_t644_il2cpp_TypeInfo_var;
extern "C" Object_t * U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m3293 (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t640 * __this, Object_t * ___source, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1056);
		s_Il2CppMethodIntialized = true;
	}
	{
		MethodInfo_t * L_0 = (__this->___methodInfo_0);
		Object_t * L_1 = ___source;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t644_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t73* L_2 = ((ReflectionUtils_t644_StaticFields*)ReflectionUtils_t644_il2cpp_TypeInfo_var->static_fields)->___EmptyObjects_0;
		NullCheck(L_0);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker2< Object_t *, Object_t *, ObjectU5BU5D_t73* >::Invoke(15 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[]) */, L_0, L_1, L_2);
		return L_3;
	}
}
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetM_0.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetM_0MethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3::.ctor()
extern "C" void U3CGetGetMethodByReflectionU3Ec__AnonStorey3__ctor_m3294 (U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t641 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3::<>m__2(System.Object)
extern "C" Object_t * U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m3295 (U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t641 * __this, Object_t * ___source, const MethodInfo* method)
{
	{
		FieldInfo_t * L_0 = (__this->___fieldInfo_0);
		Object_t * L_1 = ___source;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(17 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetM.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetMMethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4::.ctor()
extern "C" void U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m3296 (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t642 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4::<>m__3(System.Object,System.Object)
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern "C" void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m3297 (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t642 * __this, Object_t * ___source, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		s_Il2CppMethodIntialized = true;
	}
	{
		MethodInfo_t * L_0 = (__this->___methodInfo_0);
		Object_t * L_1 = ___source;
		ObjectU5BU5D_t73* L_2 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 1));
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_3;
		NullCheck(L_0);
		VirtFuncInvoker2< Object_t *, Object_t *, ObjectU5BU5D_t73* >::Invoke(15 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[]) */, L_0, L_1, L_2);
		return;
	}
}
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetM_0.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetM_0MethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5::.ctor()
extern "C" void U3CGetSetMethodByReflectionU3Ec__AnonStorey5__ctor_m3298 (U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t643 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5::<>m__4(System.Object,System.Object)
extern "C" void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m3299 (U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t643 * __this, Object_t * ___source, Object_t * ___value, const MethodInfo* method)
{
	{
		FieldInfo_t * L_0 = (__this->___fieldInfo_0);
		Object_t * L_1 = ___source;
		Object_t * L_2 = ___value;
		NullCheck(L_0);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(24 /* System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object) */, L_0, L_1, L_2);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"


// System.Void SimpleJson.Reflection.ReflectionUtils::.cctor()
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionUtils_t644_il2cpp_TypeInfo_var;
extern "C" void ReflectionUtils__cctor_m3300 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		ReflectionUtils_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1056);
		s_Il2CppMethodIntialized = true;
	}
	{
		((ReflectionUtils_t644_StaticFields*)ReflectionUtils_t644_il2cpp_TypeInfo_var->static_fields)->___EmptyObjects_0 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 0));
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo> SimpleJson.Reflection.ReflectionUtils::GetConstructors(System.Type)
extern "C" Object_t* ReflectionUtils_GetConstructors_m3301 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		ConstructorInfoU5BU5D_t780* L_1 = (ConstructorInfoU5BU5D_t780*)VirtFuncInvoker0< ConstructorInfoU5BU5D_t780* >::Invoke(71 /* System.Reflection.ConstructorInfo[] System.Type::GetConstructors() */, L_0);
		return (Object_t*)L_1;
	}
}
// System.Reflection.ConstructorInfo SimpleJson.Reflection.ReflectionUtils::GetConstructorInfo(System.Type,System.Type[])
extern TypeInfo* ReflectionUtils_t644_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t728_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t783_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t59_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t69_il2cpp_TypeInfo_var;
extern "C" ConstructorInfo_t638 * ReflectionUtils_GetConstructorInfo_m3302 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t634* ___argsType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1056);
		IEnumerable_1_t728_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1071);
		IEnumerator_1_t783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1073);
		IEnumerator_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		IDisposable_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	bool V_2 = false;
	ConstructorInfo_t638 * V_3 = {0};
	Object_t* V_4 = {0};
	ParameterInfoU5BU5D_t781* V_5 = {0};
	ParameterInfo_t782 * V_6 = {0};
	ParameterInfoU5BU5D_t781* V_7 = {0};
	int32_t V_8 = 0;
	ConstructorInfo_t638 * V_9 = {0};
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Type_t * L_0 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t644_il2cpp_TypeInfo_var);
		Object_t* L_1 = ReflectionUtils_GetConstructors_m3301(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Object_t* L_2 = V_0;
		NullCheck(L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>::GetEnumerator() */, IEnumerable_1_t728_il2cpp_TypeInfo_var, L_2);
		V_4 = L_3;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0085;
		}

IL_0014:
		{
			Object_t* L_4 = V_4;
			NullCheck(L_4);
			ConstructorInfo_t638 * L_5 = (ConstructorInfo_t638 *)InterfaceFuncInvoker0< ConstructorInfo_t638 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.ConstructorInfo>::get_Current() */, IEnumerator_1_t783_il2cpp_TypeInfo_var, L_4);
			V_3 = L_5;
			ConstructorInfo_t638 * L_6 = V_3;
			NullCheck(L_6);
			ParameterInfoU5BU5D_t781* L_7 = (ParameterInfoU5BU5D_t781*)VirtFuncInvoker0< ParameterInfoU5BU5D_t781* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_6);
			V_5 = L_7;
			TypeU5BU5D_t634* L_8 = ___argsType;
			NullCheck(L_8);
			ParameterInfoU5BU5D_t781* L_9 = V_5;
			NullCheck(L_9);
			if ((((int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
			{
				goto IL_0035;
			}
		}

IL_0030:
		{
			goto IL_0085;
		}

IL_0035:
		{
			V_1 = 0;
			V_2 = 1;
			ConstructorInfo_t638 * L_10 = V_3;
			NullCheck(L_10);
			ParameterInfoU5BU5D_t781* L_11 = (ParameterInfoU5BU5D_t781*)VirtFuncInvoker0< ParameterInfoU5BU5D_t781* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_10);
			V_7 = L_11;
			V_8 = 0;
			goto IL_006c;
		}

IL_0049:
		{
			ParameterInfoU5BU5D_t781* L_12 = V_7;
			int32_t L_13 = V_8;
			NullCheck(L_12);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
			int32_t L_14 = L_13;
			V_6 = (*(ParameterInfo_t782 **)(ParameterInfo_t782 **)SZArrayLdElema(L_12, L_14));
			ParameterInfo_t782 * L_15 = V_6;
			NullCheck(L_15);
			Type_t * L_16 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_15);
			TypeU5BU5D_t634* L_17 = ___argsType;
			int32_t L_18 = V_1;
			NullCheck(L_17);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
			int32_t L_19 = L_18;
			if ((((Object_t*)(Type_t *)L_16) == ((Object_t*)(Type_t *)(*(Type_t **)(Type_t **)SZArrayLdElema(L_17, L_19)))))
			{
				goto IL_0066;
			}
		}

IL_005f:
		{
			V_2 = 0;
			goto IL_0077;
		}

IL_0066:
		{
			int32_t L_20 = V_8;
			V_8 = ((int32_t)((int32_t)L_20+(int32_t)1));
		}

IL_006c:
		{
			int32_t L_21 = V_8;
			ParameterInfoU5BU5D_t781* L_22 = V_7;
			NullCheck(L_22);
			if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
			{
				goto IL_0049;
			}
		}

IL_0077:
		{
			bool L_23 = V_2;
			if (!L_23)
			{
				goto IL_0085;
			}
		}

IL_007d:
		{
			ConstructorInfo_t638 * L_24 = V_3;
			V_9 = L_24;
			IL2CPP_LEAVE(0xA5, FINALLY_0096);
		}

IL_0085:
		{
			Object_t* L_25 = V_4;
			NullCheck(L_25);
			bool L_26 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t59_il2cpp_TypeInfo_var, L_25);
			if (L_26)
			{
				goto IL_0014;
			}
		}

IL_0091:
		{
			IL2CPP_LEAVE(0xA3, FINALLY_0096);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_0096;
	}

FINALLY_0096:
	{ // begin finally (depth: 1)
		{
			Object_t* L_27 = V_4;
			if (L_27)
			{
				goto IL_009b;
			}
		}

IL_009a:
		{
			IL2CPP_END_FINALLY(150)
		}

IL_009b:
		{
			Object_t* L_28 = V_4;
			NullCheck(L_28);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t69_il2cpp_TypeInfo_var, L_28);
			IL2CPP_END_FINALLY(150)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(150)
	{
		IL2CPP_JUMP_TBL(0xA5, IL_00a5)
		IL2CPP_JUMP_TBL(0xA3, IL_00a3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_00a3:
	{
		return (ConstructorInfo_t638 *)NULL;
	}

IL_00a5:
	{
		ConstructorInfo_t638 * L_29 = V_9;
		return L_29;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> SimpleJson.Reflection.ReflectionUtils::GetProperties(System.Type)
extern "C" Object_t* ReflectionUtils_GetProperties_m3303 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		PropertyInfoU5BU5D_t784* L_1 = (PropertyInfoU5BU5D_t784*)VirtFuncInvoker1< PropertyInfoU5BU5D_t784*, int32_t >::Invoke(52 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_0, ((int32_t)60));
		return (Object_t*)L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> SimpleJson.Reflection.ReflectionUtils::GetFields(System.Type)
extern "C" Object_t* ReflectionUtils_GetFields_m3304 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		FieldInfoU5BU5D_t785* L_1 = (FieldInfoU5BU5D_t785*)VirtFuncInvoker1< FieldInfoU5BU5D_t785*, int32_t >::Invoke(45 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_0, ((int32_t)60));
		return (Object_t*)L_1;
	}
}
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetGetterMethodInfo(System.Reflection.PropertyInfo)
extern "C" MethodInfo_t * ReflectionUtils_GetGetterMethodInfo_m3305 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method)
{
	{
		PropertyInfo_t * L_0 = ___propertyInfo;
		NullCheck(L_0);
		MethodInfo_t * L_1 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(19 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, L_0, 1);
		return L_1;
	}
}
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetSetterMethodInfo(System.Reflection.PropertyInfo)
extern "C" MethodInfo_t * ReflectionUtils_GetSetterMethodInfo_m3306 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method)
{
	{
		PropertyInfo_t * L_0 = ___propertyInfo;
		NullCheck(L_0);
		MethodInfo_t * L_1 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(21 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean) */, L_0, 1);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetContructor(System.Type,System.Type[])
extern TypeInfo* ReflectionUtils_t644_il2cpp_TypeInfo_var;
extern "C" ConstructorDelegate_t637 * ReflectionUtils_GetContructor_m3307 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t634* ___argsType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1056);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___type;
		TypeU5BU5D_t634* L_1 = ___argsType;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t644_il2cpp_TypeInfo_var);
		ConstructorDelegate_t637 * L_2 = ReflectionUtils_GetConstructorByReflection_m3309(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Reflection.ConstructorInfo)
extern TypeInfo* U3CGetConstructorByReflectionU3Ec__AnonStorey1_t639_il2cpp_TypeInfo_var;
extern TypeInfo* ConstructorDelegate_t637_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m3291_MethodInfo_var;
extern "C" ConstructorDelegate_t637 * ReflectionUtils_GetConstructorByReflection_m3308 (Object_t * __this /* static, unused */, ConstructorInfo_t638 * ___constructorInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_t639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1074);
		ConstructorDelegate_t637_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1043);
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m3291_MethodInfo_var = il2cpp_codegen_method_info_from_index(343);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t639 * V_0 = {0};
	{
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_t639 * L_0 = (U3CGetConstructorByReflectionU3Ec__AnonStorey1_t639 *)il2cpp_codegen_object_new (U3CGetConstructorByReflectionU3Ec__AnonStorey1_t639_il2cpp_TypeInfo_var);
		U3CGetConstructorByReflectionU3Ec__AnonStorey1__ctor_m3290(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_t639 * L_1 = V_0;
		ConstructorInfo_t638 * L_2 = ___constructorInfo;
		NullCheck(L_1);
		L_1->___constructorInfo_0 = L_2;
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_t639 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m3291_MethodInfo_var };
		ConstructorDelegate_t637 * L_5 = (ConstructorDelegate_t637 *)il2cpp_codegen_object_new (ConstructorDelegate_t637_il2cpp_TypeInfo_var);
		ConstructorDelegate__ctor_m3286(L_5, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Type,System.Type[])
extern TypeInfo* ReflectionUtils_t644_il2cpp_TypeInfo_var;
extern "C" ConstructorDelegate_t637 * ReflectionUtils_GetConstructorByReflection_m3309 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t634* ___argsType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1056);
		s_Il2CppMethodIntialized = true;
	}
	ConstructorInfo_t638 * V_0 = {0};
	ConstructorDelegate_t637 * G_B3_0 = {0};
	{
		Type_t * L_0 = ___type;
		TypeU5BU5D_t634* L_1 = ___argsType;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t644_il2cpp_TypeInfo_var);
		ConstructorInfo_t638 * L_2 = ReflectionUtils_GetConstructorInfo_m3302(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ConstructorInfo_t638 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		G_B3_0 = ((ConstructorDelegate_t637 *)(NULL));
		goto IL_001a;
	}

IL_0014:
	{
		ConstructorInfo_t638 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t644_il2cpp_TypeInfo_var);
		ConstructorDelegate_t637 * L_5 = ReflectionUtils_GetConstructorByReflection_m3308(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.PropertyInfo)
extern TypeInfo* ReflectionUtils_t644_il2cpp_TypeInfo_var;
extern "C" GetDelegate_t635 * ReflectionUtils_GetGetMethod_m3310 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1056);
		s_Il2CppMethodIntialized = true;
	}
	{
		PropertyInfo_t * L_0 = ___propertyInfo;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t644_il2cpp_TypeInfo_var);
		GetDelegate_t635 * L_1 = ReflectionUtils_GetGetMethodByReflection_m3312(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.FieldInfo)
extern TypeInfo* ReflectionUtils_t644_il2cpp_TypeInfo_var;
extern "C" GetDelegate_t635 * ReflectionUtils_GetGetMethod_m3311 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1056);
		s_Il2CppMethodIntialized = true;
	}
	{
		FieldInfo_t * L_0 = ___fieldInfo;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t644_il2cpp_TypeInfo_var);
		GetDelegate_t635 * L_1 = ReflectionUtils_GetGetMethodByReflection_m3313(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.PropertyInfo)
extern TypeInfo* U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t640_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionUtils_t644_il2cpp_TypeInfo_var;
extern TypeInfo* GetDelegate_t635_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m3293_MethodInfo_var;
extern "C" GetDelegate_t635 * ReflectionUtils_GetGetMethodByReflection_m3312 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1075);
		ReflectionUtils_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1056);
		GetDelegate_t635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1045);
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m3293_MethodInfo_var = il2cpp_codegen_method_info_from_index(344);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t640 * V_0 = {0};
	{
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t640 * L_0 = (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t640 *)il2cpp_codegen_object_new (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t640_il2cpp_TypeInfo_var);
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m3292(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t640 * L_1 = V_0;
		PropertyInfo_t * L_2 = ___propertyInfo;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t644_il2cpp_TypeInfo_var);
		MethodInfo_t * L_3 = ReflectionUtils_GetGetterMethodInfo_m3305(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->___methodInfo_0 = L_3;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t640 * L_4 = V_0;
		IntPtr_t L_5 = { (void*)U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m3293_MethodInfo_var };
		GetDelegate_t635 * L_6 = (GetDelegate_t635 *)il2cpp_codegen_object_new (GetDelegate_t635_il2cpp_TypeInfo_var);
		GetDelegate__ctor_m3278(L_6, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.FieldInfo)
extern TypeInfo* U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t641_il2cpp_TypeInfo_var;
extern TypeInfo* GetDelegate_t635_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m3295_MethodInfo_var;
extern "C" GetDelegate_t635 * ReflectionUtils_GetGetMethodByReflection_m3313 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t641_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1076);
		GetDelegate_t635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1045);
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m3295_MethodInfo_var = il2cpp_codegen_method_info_from_index(345);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t641 * V_0 = {0};
	{
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t641 * L_0 = (U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t641 *)il2cpp_codegen_object_new (U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t641_il2cpp_TypeInfo_var);
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3__ctor_m3294(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t641 * L_1 = V_0;
		FieldInfo_t * L_2 = ___fieldInfo;
		NullCheck(L_1);
		L_1->___fieldInfo_0 = L_2;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t641 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m3295_MethodInfo_var };
		GetDelegate_t635 * L_5 = (GetDelegate_t635 *)il2cpp_codegen_object_new (GetDelegate_t635_il2cpp_TypeInfo_var);
		GetDelegate__ctor_m3278(L_5, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.PropertyInfo)
extern TypeInfo* ReflectionUtils_t644_il2cpp_TypeInfo_var;
extern "C" SetDelegate_t636 * ReflectionUtils_GetSetMethod_m3314 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1056);
		s_Il2CppMethodIntialized = true;
	}
	{
		PropertyInfo_t * L_0 = ___propertyInfo;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t644_il2cpp_TypeInfo_var);
		SetDelegate_t636 * L_1 = ReflectionUtils_GetSetMethodByReflection_m3316(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.FieldInfo)
extern TypeInfo* ReflectionUtils_t644_il2cpp_TypeInfo_var;
extern "C" SetDelegate_t636 * ReflectionUtils_GetSetMethod_m3315 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1056);
		s_Il2CppMethodIntialized = true;
	}
	{
		FieldInfo_t * L_0 = ___fieldInfo;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t644_il2cpp_TypeInfo_var);
		SetDelegate_t636 * L_1 = ReflectionUtils_GetSetMethodByReflection_m3317(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.PropertyInfo)
extern TypeInfo* U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t642_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionUtils_t644_il2cpp_TypeInfo_var;
extern TypeInfo* SetDelegate_t636_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m3297_MethodInfo_var;
extern "C" SetDelegate_t636 * ReflectionUtils_GetSetMethodByReflection_m3316 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t642_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1077);
		ReflectionUtils_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1056);
		SetDelegate_t636_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1048);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m3297_MethodInfo_var = il2cpp_codegen_method_info_from_index(346);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t642 * V_0 = {0};
	{
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t642 * L_0 = (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t642 *)il2cpp_codegen_object_new (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t642_il2cpp_TypeInfo_var);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m3296(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t642 * L_1 = V_0;
		PropertyInfo_t * L_2 = ___propertyInfo;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t644_il2cpp_TypeInfo_var);
		MethodInfo_t * L_3 = ReflectionUtils_GetSetterMethodInfo_m3306(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->___methodInfo_0 = L_3;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t642 * L_4 = V_0;
		IntPtr_t L_5 = { (void*)U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m3297_MethodInfo_var };
		SetDelegate_t636 * L_6 = (SetDelegate_t636 *)il2cpp_codegen_object_new (SetDelegate_t636_il2cpp_TypeInfo_var);
		SetDelegate__ctor_m3282(L_6, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.FieldInfo)
extern TypeInfo* U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t643_il2cpp_TypeInfo_var;
extern TypeInfo* SetDelegate_t636_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m3299_MethodInfo_var;
extern "C" SetDelegate_t636 * ReflectionUtils_GetSetMethodByReflection_m3317 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1078);
		SetDelegate_t636_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1048);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m3299_MethodInfo_var = il2cpp_codegen_method_info_from_index(347);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t643 * V_0 = {0};
	{
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t643 * L_0 = (U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t643 *)il2cpp_codegen_object_new (U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t643_il2cpp_TypeInfo_var);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5__ctor_m3298(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t643 * L_1 = V_0;
		FieldInfo_t * L_2 = ___fieldInfo;
		NullCheck(L_1);
		L_1->___fieldInfo_0 = L_2;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t643 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m3299_MethodInfo_var };
		SetDelegate_t636 * L_5 = (SetDelegate_t636 *)il2cpp_codegen_object_new (SetDelegate_t636_il2cpp_TypeInfo_var);
		SetDelegate__ctor_m3282(L_5, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"


// System.Void UnityEngine.WrapperlessIcall::.ctor()
extern "C" void WrapperlessIcall__ctor_m3318 (WrapperlessIcall_t645 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3533(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttributeMethodDeclarations.h"



// System.Void UnityEngine.IL2CPPStructAlignmentAttribute::.ctor()
extern "C" void IL2CPPStructAlignmentAttribute__ctor_m3319 (IL2CPPStructAlignmentAttribute_t646 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3533(__this, /*hidden argument*/NULL);
		__this->___Align_0 = 1;
		return;
	}
}
// UnityEngine.AttributeHelperEngine
#include "UnityEngine_UnityEngine_AttributeHelperEngine.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AttributeHelperEngine
#include "UnityEngine_UnityEngine_AttributeHelperEngineMethodDeclarations.h"

// UnityEngine.DisallowMultipleComponent
#include "UnityEngine_UnityEngine_DisallowMultipleComponent.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponent.h"
// System.Collections.Generic.Stack`1<System.Type>
#include "System_System_Collections_Generic_Stack_1_gen.h"
// System.Collections.Generic.List`1<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_gen_33.h"
// System.Collections.Generic.Stack`1<System.Type>
#include "System_System_Collections_Generic_Stack_1_genMethodDeclarations.h"
// System.Collections.Generic.List`1<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_gen_33MethodDeclarations.h"


// System.Void UnityEngine.AttributeHelperEngine::.cctor()
extern TypeInfo* DisallowMultipleComponentU5BU5D_t647_il2cpp_TypeInfo_var;
extern TypeInfo* AttributeHelperEngine_t650_il2cpp_TypeInfo_var;
extern TypeInfo* ExecuteInEditModeU5BU5D_t648_il2cpp_TypeInfo_var;
extern TypeInfo* RequireComponentU5BU5D_t649_il2cpp_TypeInfo_var;
extern "C" void AttributeHelperEngine__cctor_m3320 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DisallowMultipleComponentU5BU5D_t647_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1079);
		AttributeHelperEngine_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1080);
		ExecuteInEditModeU5BU5D_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1081);
		RequireComponentU5BU5D_t649_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1082);
		s_Il2CppMethodIntialized = true;
	}
	{
		((AttributeHelperEngine_t650_StaticFields*)AttributeHelperEngine_t650_il2cpp_TypeInfo_var->static_fields)->____disallowMultipleComponentArray_0 = ((DisallowMultipleComponentU5BU5D_t647*)SZArrayNew(DisallowMultipleComponentU5BU5D_t647_il2cpp_TypeInfo_var, 1));
		((AttributeHelperEngine_t650_StaticFields*)AttributeHelperEngine_t650_il2cpp_TypeInfo_var->static_fields)->____executeInEditModeArray_1 = ((ExecuteInEditModeU5BU5D_t648*)SZArrayNew(ExecuteInEditModeU5BU5D_t648_il2cpp_TypeInfo_var, 1));
		((AttributeHelperEngine_t650_StaticFields*)AttributeHelperEngine_t650_il2cpp_TypeInfo_var->static_fields)->____requireComponentArray_2 = ((RequireComponentU5BU5D_t649*)SZArrayNew(RequireComponentU5BU5D_t649_il2cpp_TypeInfo_var, 1));
		return;
	}
}
// System.Type UnityEngine.AttributeHelperEngine::GetParentTypeDisallowingMultipleInclusion(System.Type)
extern const Il2CppType* MonoBehaviour_t16_0_0_0_var;
extern const Il2CppType* DisallowMultipleComponent_t419_0_0_0_var;
extern TypeInfo* Stack_1_t786_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Stack_1__ctor_m3628_MethodInfo_var;
extern const MethodInfo* Stack_1_Push_m3629_MethodInfo_var;
extern const MethodInfo* Stack_1_Pop_m3630_MethodInfo_var;
extern "C" Type_t * AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m3321 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoBehaviour_t16_0_0_0_var = il2cpp_codegen_type_from_index(102);
		DisallowMultipleComponent_t419_0_0_0_var = il2cpp_codegen_type_from_index(409);
		Stack_1_t786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1083);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		Stack_1__ctor_m3628_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483996);
		Stack_1_Push_m3629_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483997);
		Stack_1_Pop_m3630_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483998);
		s_Il2CppMethodIntialized = true;
	}
	Stack_1_t786 * V_0 = {0};
	Type_t * V_1 = {0};
	ObjectU5BU5D_t73* V_2 = {0};
	{
		Stack_1_t786 * L_0 = (Stack_1_t786 *)il2cpp_codegen_object_new (Stack_1_t786_il2cpp_TypeInfo_var);
		Stack_1__ctor_m3628(L_0, /*hidden argument*/Stack_1__ctor_m3628_MethodInfo_var);
		V_0 = L_0;
		goto IL_001a;
	}

IL_000b:
	{
		Stack_1_t786 * L_1 = V_0;
		Type_t * L_2 = ___type;
		NullCheck(L_1);
		Stack_1_Push_m3629(L_1, L_2, /*hidden argument*/Stack_1_Push_m3629_MethodInfo_var);
		Type_t * L_3 = ___type;
		NullCheck(L_3);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_3);
		___type = L_4;
	}

IL_001a:
	{
		Type_t * L_5 = ___type;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Type_t * L_6 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1720(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t16_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_6) == ((Object_t*)(Type_t *)L_7))))
		{
			goto IL_000b;
		}
	}

IL_0030:
	{
		V_1 = (Type_t *)NULL;
		goto IL_005a;
	}

IL_0037:
	{
		Stack_1_t786 * L_8 = V_0;
		NullCheck(L_8);
		Type_t * L_9 = Stack_1_Pop_m3630(L_8, /*hidden argument*/Stack_1_Pop_m3630_MethodInfo_var);
		V_1 = L_9;
		Type_t * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1720(NULL /*static, unused*/, LoadTypeToken(DisallowMultipleComponent_t419_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		ObjectU5BU5D_t73* L_12 = (ObjectU5BU5D_t73*)VirtFuncInvoker2< ObjectU5BU5D_t73*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_10, L_11, 0);
		V_2 = L_12;
		ObjectU5BU5D_t73* L_13 = V_2;
		NullCheck(L_13);
		if (!(((int32_t)(((Array_t *)L_13)->max_length))))
		{
			goto IL_005a;
		}
	}
	{
		Type_t * L_14 = V_1;
		return L_14;
	}

IL_005a:
	{
		Stack_1_t786 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Collections.Generic.Stack`1<System.Type>::get_Count() */, L_15);
		if ((((int32_t)L_16) > ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		return (Type_t *)NULL;
	}
}
// System.Type[] UnityEngine.AttributeHelperEngine::GetRequiredComponents(System.Type)
extern const Il2CppType* RequireComponent_t413_0_0_0_var;
extern const Il2CppType* MonoBehaviour_t16_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* RequireComponent_t413_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t634_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t787_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3631_MethodInfo_var;
extern const MethodInfo* List_1_ToArray_m3632_MethodInfo_var;
extern "C" TypeU5BU5D_t634* AttributeHelperEngine_GetRequiredComponents_m3322 (Object_t * __this /* static, unused */, Type_t * ___klass, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RequireComponent_t413_0_0_0_var = il2cpp_codegen_type_from_index(406);
		MonoBehaviour_t16_0_0_0_var = il2cpp_codegen_type_from_index(102);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		RequireComponent_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		TypeU5BU5D_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1055);
		List_1_t787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1084);
		List_1__ctor_m3631_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483999);
		List_1_ToArray_m3632_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484000);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t787 * V_0 = {0};
	ObjectU5BU5D_t73* V_1 = {0};
	int32_t V_2 = 0;
	RequireComponent_t413 * V_3 = {0};
	TypeU5BU5D_t634* V_4 = {0};
	{
		V_0 = (List_1_t787 *)NULL;
		goto IL_00d9;
	}

IL_0007:
	{
		Type_t * L_0 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1720(NULL /*static, unused*/, LoadTypeToken(RequireComponent_t413_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectU5BU5D_t73* L_2 = (ObjectU5BU5D_t73*)VirtFuncInvoker2< ObjectU5BU5D_t73*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, 0);
		V_1 = L_2;
		V_2 = 0;
		goto IL_00c8;
	}

IL_0020:
	{
		ObjectU5BU5D_t73* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_3 = ((RequireComponent_t413 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5)), RequireComponent_t413_il2cpp_TypeInfo_var));
		List_1_t787 * L_6 = V_0;
		if (L_6)
		{
			goto IL_0073;
		}
	}
	{
		ObjectU5BU5D_t73* L_7 = V_1;
		NullCheck(L_7);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_7)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_0073;
		}
	}
	{
		Type_t * L_8 = ___klass;
		NullCheck(L_8);
		Type_t * L_9 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m1720(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t16_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_9) == ((Object_t*)(Type_t *)L_10))))
		{
			goto IL_0073;
		}
	}
	{
		TypeU5BU5D_t634* L_11 = ((TypeU5BU5D_t634*)SZArrayNew(TypeU5BU5D_t634_il2cpp_TypeInfo_var, 3));
		RequireComponent_t413 * L_12 = V_3;
		NullCheck(L_12);
		Type_t * L_13 = (L_12->___m_Type0_0);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, L_13);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_11, 0)) = (Type_t *)L_13;
		TypeU5BU5D_t634* L_14 = L_11;
		RequireComponent_t413 * L_15 = V_3;
		NullCheck(L_15);
		Type_t * L_16 = (L_15->___m_Type1_1);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 1);
		ArrayElementTypeCheck (L_14, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_14, 1)) = (Type_t *)L_16;
		TypeU5BU5D_t634* L_17 = L_14;
		RequireComponent_t413 * L_18 = V_3;
		NullCheck(L_18);
		Type_t * L_19 = (L_18->___m_Type2_2);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 2);
		ArrayElementTypeCheck (L_17, L_19);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_17, 2)) = (Type_t *)L_19;
		V_4 = L_17;
		TypeU5BU5D_t634* L_20 = V_4;
		return L_20;
	}

IL_0073:
	{
		List_1_t787 * L_21 = V_0;
		if (L_21)
		{
			goto IL_007f;
		}
	}
	{
		List_1_t787 * L_22 = (List_1_t787 *)il2cpp_codegen_object_new (List_1_t787_il2cpp_TypeInfo_var);
		List_1__ctor_m3631(L_22, /*hidden argument*/List_1__ctor_m3631_MethodInfo_var);
		V_0 = L_22;
	}

IL_007f:
	{
		RequireComponent_t413 * L_23 = V_3;
		NullCheck(L_23);
		Type_t * L_24 = (L_23->___m_Type0_0);
		if (!L_24)
		{
			goto IL_0096;
		}
	}
	{
		List_1_t787 * L_25 = V_0;
		RequireComponent_t413 * L_26 = V_3;
		NullCheck(L_26);
		Type_t * L_27 = (L_26->___m_Type0_0);
		NullCheck(L_25);
		VirtActionInvoker1< Type_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Type>::Add(!0) */, L_25, L_27);
	}

IL_0096:
	{
		RequireComponent_t413 * L_28 = V_3;
		NullCheck(L_28);
		Type_t * L_29 = (L_28->___m_Type1_1);
		if (!L_29)
		{
			goto IL_00ad;
		}
	}
	{
		List_1_t787 * L_30 = V_0;
		RequireComponent_t413 * L_31 = V_3;
		NullCheck(L_31);
		Type_t * L_32 = (L_31->___m_Type1_1);
		NullCheck(L_30);
		VirtActionInvoker1< Type_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Type>::Add(!0) */, L_30, L_32);
	}

IL_00ad:
	{
		RequireComponent_t413 * L_33 = V_3;
		NullCheck(L_33);
		Type_t * L_34 = (L_33->___m_Type2_2);
		if (!L_34)
		{
			goto IL_00c4;
		}
	}
	{
		List_1_t787 * L_35 = V_0;
		RequireComponent_t413 * L_36 = V_3;
		NullCheck(L_36);
		Type_t * L_37 = (L_36->___m_Type2_2);
		NullCheck(L_35);
		VirtActionInvoker1< Type_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Type>::Add(!0) */, L_35, L_37);
	}

IL_00c4:
	{
		int32_t L_38 = V_2;
		V_2 = ((int32_t)((int32_t)L_38+(int32_t)1));
	}

IL_00c8:
	{
		int32_t L_39 = V_2;
		ObjectU5BU5D_t73* L_40 = V_1;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)(((int32_t)(((Array_t *)L_40)->max_length))))))
		{
			goto IL_0020;
		}
	}
	{
		Type_t * L_41 = ___klass;
		NullCheck(L_41);
		Type_t * L_42 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_41);
		___klass = L_42;
	}

IL_00d9:
	{
		Type_t * L_43 = ___klass;
		if (!L_43)
		{
			goto IL_00ef;
		}
	}
	{
		Type_t * L_44 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_45 = Type_GetTypeFromHandle_m1720(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t16_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_44) == ((Object_t*)(Type_t *)L_45))))
		{
			goto IL_0007;
		}
	}

IL_00ef:
	{
		List_1_t787 * L_46 = V_0;
		if (L_46)
		{
			goto IL_00f7;
		}
	}
	{
		return (TypeU5BU5D_t634*)NULL;
	}

IL_00f7:
	{
		List_1_t787 * L_47 = V_0;
		NullCheck(L_47);
		TypeU5BU5D_t634* L_48 = List_1_ToArray_m3632(L_47, /*hidden argument*/List_1_ToArray_m3632_MethodInfo_var);
		return L_48;
	}
}
// System.Boolean UnityEngine.AttributeHelperEngine::CheckIsEditorScript(System.Type)
extern const Il2CppType* ExecuteInEditMode_t418_0_0_0_var;
extern const Il2CppType* MonoBehaviour_t16_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool AttributeHelperEngine_CheckIsEditorScript_m3323 (Object_t * __this /* static, unused */, Type_t * ___klass, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t418_0_0_0_var = il2cpp_codegen_type_from_index(408);
		MonoBehaviour_t16_0_0_0_var = il2cpp_codegen_type_from_index(102);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t73* V_0 = {0};
	{
		goto IL_0029;
	}

IL_0005:
	{
		Type_t * L_0 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1720(NULL /*static, unused*/, LoadTypeToken(ExecuteInEditMode_t418_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectU5BU5D_t73* L_2 = (ObjectU5BU5D_t73*)VirtFuncInvoker2< ObjectU5BU5D_t73*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, 0);
		V_0 = L_2;
		ObjectU5BU5D_t73* L_3 = V_0;
		NullCheck(L_3);
		if (!(((int32_t)(((Array_t *)L_3)->max_length))))
		{
			goto IL_0021;
		}
	}
	{
		return 1;
	}

IL_0021:
	{
		Type_t * L_4 = ___klass;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_4);
		___klass = L_5;
	}

IL_0029:
	{
		Type_t * L_6 = ___klass;
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		Type_t * L_7 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1720(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t16_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_7) == ((Object_t*)(Type_t *)L_8))))
		{
			goto IL_0005;
		}
	}

IL_003f:
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.DisallowMultipleComponent
#include "UnityEngine_UnityEngine_DisallowMultipleComponentMethodDeclarations.h"



// System.Void UnityEngine.DisallowMultipleComponent::.ctor()
extern "C" void DisallowMultipleComponent__ctor_m2125 (DisallowMultipleComponent_t419 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3533(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponentMethodDeclarations.h"



// System.Void UnityEngine.RequireComponent::.ctor(System.Type)
extern "C" void RequireComponent__ctor_m2101 (RequireComponent_t413 * __this, Type_t * ___requiredComponent, const MethodInfo* method)
{
	{
		Attribute__ctor_m3533(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___requiredComponent;
		__this->___m_Type0_0 = L_0;
		return;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"



// System.Void UnityEngine.AddComponentMenu::.ctor(System.String)
extern "C" void AddComponentMenu__ctor_m2085 (AddComponentMenu_t408 * __this, String_t* ___menuName, const MethodInfo* method)
{
	{
		Attribute__ctor_m3533(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___menuName;
		__this->___m_AddComponentMenu_0 = L_0;
		__this->___m_Ordering_1 = 0;
		return;
	}
}
// System.Void UnityEngine.AddComponentMenu::.ctor(System.String,System.Int32)
extern "C" void AddComponentMenu__ctor_m2119 (AddComponentMenu_t408 * __this, String_t* ___menuName, int32_t ___order, const MethodInfo* method)
{
	{
		Attribute__ctor_m3533(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___menuName;
		__this->___m_AddComponentMenu_0 = L_0;
		int32_t L_1 = ___order;
		__this->___m_Ordering_1 = L_1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
