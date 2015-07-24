#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// <Module>
#include "UnityEngine_U3CModuleU3E.h"
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
// <Module>
#include "UnityEngine_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// UnityEngine.AssetBundleCreateRequest
#include "UnityEngine_UnityEngine_AssetBundleCreateRequest.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AssetBundleCreateRequest
#include "UnityEngine_UnityEngine_AssetBundleCreateRequestMethodDeclarations.h"

// UnityEngine.AssetBundle
#include "UnityEngine_UnityEngine_AssetBundle.h"
// System.Void
#include "mscorlib_System_Void.h"
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperationMethodDeclarations.h"


// System.Void UnityEngine.AssetBundleCreateRequest::.ctor()
extern "C" void AssetBundleCreateRequest__ctor_m2267 (AssetBundleCreateRequest_t478 * __this, const MethodInfo* method)
{
	{
		AsyncOperation__ctor_m2797(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AssetBundle UnityEngine.AssetBundleCreateRequest::get_assetBundle()
extern "C" AssetBundle_t480 * AssetBundleCreateRequest_get_assetBundle_m2268 (AssetBundleCreateRequest_t478 * __this, const MethodInfo* method)
{
	typedef AssetBundle_t480 * (*AssetBundleCreateRequest_get_assetBundle_m2268_ftn) (AssetBundleCreateRequest_t478 *);
	static AssetBundleCreateRequest_get_assetBundle_m2268_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AssetBundleCreateRequest_get_assetBundle_m2268_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundleCreateRequest::get_assetBundle()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AssetBundleCreateRequest::DisableCompatibilityChecks()
extern "C" void AssetBundleCreateRequest_DisableCompatibilityChecks_m2269 (AssetBundleCreateRequest_t478 * __this, const MethodInfo* method)
{
	typedef void (*AssetBundleCreateRequest_DisableCompatibilityChecks_m2269_ftn) (AssetBundleCreateRequest_t478 *);
	static AssetBundleCreateRequest_DisableCompatibilityChecks_m2269_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AssetBundleCreateRequest_DisableCompatibilityChecks_m2269_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundleCreateRequest::DisableCompatibilityChecks()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.AssetBundleRequest
#include "UnityEngine_UnityEngine_AssetBundleRequest.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AssetBundleRequest
#include "UnityEngine_UnityEngine_AssetBundleRequestMethodDeclarations.h"

// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.Type
#include "mscorlib_System_Type.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.AssetBundle
#include "UnityEngine_UnityEngine_AssetBundleMethodDeclarations.h"


// System.Void UnityEngine.AssetBundleRequest::.ctor()
extern "C" void AssetBundleRequest__ctor_m2270 (AssetBundleRequest_t481 * __this, const MethodInfo* method)
{
	{
		AsyncOperation__ctor_m2797(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.AssetBundleRequest::get_asset()
extern "C" Object_t67 * AssetBundleRequest_get_asset_m2271 (AssetBundleRequest_t481 * __this, const MethodInfo* method)
{
	{
		AssetBundle_t480 * L_0 = (__this->___m_AssetBundle_1);
		String_t* L_1 = (__this->___m_Path_2);
		Type_t * L_2 = (__this->___m_Type_3);
		NullCheck(L_0);
		Object_t67 * L_3 = AssetBundle_LoadAsset_m2273(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Object[] UnityEngine.AssetBundleRequest::get_allAssets()
extern "C" ObjectU5BU5D_t704* AssetBundleRequest_get_allAssets_m2272 (AssetBundleRequest_t481 * __this, const MethodInfo* method)
{
	{
		AssetBundle_t480 * L_0 = (__this->___m_AssetBundle_1);
		String_t* L_1 = (__this->___m_Path_2);
		Type_t * L_2 = (__this->___m_Type_3);
		NullCheck(L_0);
		ObjectU5BU5D_t704* L_3 = AssetBundle_LoadAssetWithSubAssets_Internal_m2275(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.NullReferenceException
#include "mscorlib_System_NullReferenceException.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.NullReferenceException
#include "mscorlib_System_NullReferenceExceptionMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"


// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset(System.String,System.Type)
extern TypeInfo* NullReferenceException_t734_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t387_il2cpp_TypeInfo_var;
extern "C" Object_t67 * AssetBundle_LoadAsset_m2273 (AssetBundle_t480 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(924);
		ArgumentException_t387_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(361);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		NullReferenceException_t734 * L_1 = (NullReferenceException_t734 *)il2cpp_codegen_object_new (NullReferenceException_t734_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m3508(L_1, (String_t*) &_stringLiteral127, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		String_t* L_2 = ___name;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m350(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_t387 * L_4 = (ArgumentException_t387 *)il2cpp_codegen_object_new (ArgumentException_t387_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2006(L_4, (String_t*) &_stringLiteral128, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		Type_t * L_5 = ___type;
		if (L_5)
		{
			goto IL_0038;
		}
	}
	{
		NullReferenceException_t734 * L_6 = (NullReferenceException_t734 *)il2cpp_codegen_object_new (NullReferenceException_t734_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m3508(L_6, (String_t*) &_stringLiteral129, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0038:
	{
		String_t* L_7 = ___name;
		Type_t * L_8 = ___type;
		Object_t67 * L_9 = AssetBundle_LoadAsset_Internal_m2274(__this, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)
extern "C" Object_t67 * AssetBundle_LoadAsset_Internal_m2274 (AssetBundle_t480 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method)
{
	typedef Object_t67 * (*AssetBundle_LoadAsset_Internal_m2274_ftn) (AssetBundle_t480 *, String_t*, Type_t *);
	static AssetBundle_LoadAsset_Internal_m2274_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AssetBundle_LoadAsset_Internal_m2274_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)");
	return _il2cpp_icall_func(__this, ___name, ___type);
}
// UnityEngine.Object[] UnityEngine.AssetBundle::LoadAssetWithSubAssets_Internal(System.String,System.Type)
extern "C" ObjectU5BU5D_t704* AssetBundle_LoadAssetWithSubAssets_Internal_m2275 (AssetBundle_t480 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method)
{
	typedef ObjectU5BU5D_t704* (*AssetBundle_LoadAssetWithSubAssets_Internal_m2275_ftn) (AssetBundle_t480 *, String_t*, Type_t *);
	static AssetBundle_LoadAssetWithSubAssets_Internal_m2275_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AssetBundle_LoadAssetWithSubAssets_Internal_m2275_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundle::LoadAssetWithSubAssets_Internal(System.String,System.Type)");
	return _il2cpp_icall_func(__this, ___name, ___type);
}
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptionsMethodDeclarations.h"



// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMaskMethodDeclarations.h"

#include "mscorlib_ArrayTypes.h"


// System.Int32 UnityEngine.LayerMask::get_value()
extern "C" int32_t LayerMask_get_value_m2276 (LayerMask_t173 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Mask_0);
		return L_0;
	}
}
// System.Void UnityEngine.LayerMask::set_value(System.Int32)
extern "C" void LayerMask_set_value_m2277 (LayerMask_t173 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_Mask_0 = L_0;
		return;
	}
}
// System.String UnityEngine.LayerMask::LayerToName(System.Int32)
extern "C" String_t* LayerMask_LayerToName_m2278 (Object_t * __this /* static, unused */, int32_t ___layer, const MethodInfo* method)
{
	typedef String_t* (*LayerMask_LayerToName_m2278_ftn) (int32_t);
	static LayerMask_LayerToName_m2278_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (LayerMask_LayerToName_m2278_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.LayerMask::LayerToName(System.Int32)");
	return _il2cpp_icall_func(___layer);
}
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
extern "C" int32_t LayerMask_NameToLayer_m2279 (Object_t * __this /* static, unused */, String_t* ___layerName, const MethodInfo* method)
{
	typedef int32_t (*LayerMask_NameToLayer_m2279_ftn) (String_t*);
	static LayerMask_NameToLayer_m2279_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (LayerMask_NameToLayer_m2279_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.LayerMask::NameToLayer(System.String)");
	return _il2cpp_icall_func(___layerName);
}
// System.Int32 UnityEngine.LayerMask::GetMask(System.String[])
extern "C" int32_t LayerMask_GetMask_m2280 (Object_t * __this /* static, unused */, StringU5BU5D_t48* ___layerNames, const MethodInfo* method)
{
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	StringU5BU5D_t48* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		StringU5BU5D_t48* L_0 = ___layerNames;
		V_2 = L_0;
		V_3 = 0;
		goto IL_002f;
	}

IL_000b:
	{
		StringU5BU5D_t48* L_1 = V_2;
		int32_t L_2 = V_3;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_1 = (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3));
		String_t* L_4 = V_1;
		int32_t L_5 = LayerMask_NameToLayer_m2279(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_4 = L_5;
		int32_t L_6 = V_4;
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8 = V_4;
		V_0 = ((int32_t)((int32_t)L_7|(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)31)))&(int32_t)((int32_t)31)))))));
	}

IL_002b:
	{
		int32_t L_9 = V_3;
		V_3 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_002f:
	{
		int32_t L_10 = V_3;
		StringU5BU5D_t48* L_11 = V_2;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)(((Array_t *)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_12 = V_0;
		return L_12;
	}
}
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
extern "C" int32_t LayerMask_op_Implicit_m1679 (Object_t * __this /* static, unused */, LayerMask_t173  ___mask, const MethodInfo* method)
{
	{
		int32_t L_0 = ((&___mask)->___m_Mask_0);
		return L_0;
	}
}
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
extern "C" LayerMask_t173  LayerMask_op_Implicit_m1677 (Object_t * __this /* static, unused */, int32_t ___intVal, const MethodInfo* method)
{
	LayerMask_t173  V_0 = {0};
	{
		int32_t L_0 = ___intVal;
		(&V_0)->___m_Mask_0 = L_0;
		LayerMask_t173  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatformMethodDeclarations.h"



// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogTypeMethodDeclarations.h"



// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"



// System.String UnityEngine.SystemInfo::get_deviceUniqueIdentifier()
extern "C" String_t* SystemInfo_get_deviceUniqueIdentifier_m2281 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*SystemInfo_get_deviceUniqueIdentifier_m2281_ftn) ();
	static SystemInfo_get_deviceUniqueIdentifier_m2281_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SystemInfo_get_deviceUniqueIdentifier_m2281_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SystemInfo::get_deviceUniqueIdentifier()");
	return _il2cpp_icall_func();
}
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSeconds.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSecondsMethodDeclarations.h"

// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstructionMethodDeclarations.h"


// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m261 (WaitForSeconds_t78 * __this, float ___seconds, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m2917(__this, /*hidden argument*/NULL);
		float L_0 = ___seconds;
		__this->___m_Seconds_0 = L_0;
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.WaitForSeconds
void WaitForSeconds_t78_marshal(const WaitForSeconds_t78& unmarshaled, WaitForSeconds_t78_marshaled& marshaled)
{
	marshaled.___m_Seconds_0 = unmarshaled.___m_Seconds_0;
}
void WaitForSeconds_t78_marshal_back(const WaitForSeconds_t78_marshaled& marshaled, WaitForSeconds_t78& unmarshaled)
{
	unmarshaled.___m_Seconds_0 = marshaled.___m_Seconds_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.WaitForSeconds
void WaitForSeconds_t78_marshal_cleanup(WaitForSeconds_t78_marshaled& marshaled)
{
}
// UnityEngine.WaitForFixedUpdate
#include "UnityEngine_UnityEngine_WaitForFixedUpdate.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.WaitForFixedUpdate
#include "UnityEngine_UnityEngine_WaitForFixedUpdateMethodDeclarations.h"



// System.Void UnityEngine.WaitForFixedUpdate::.ctor()
extern "C" void WaitForFixedUpdate__ctor_m2282 (WaitForFixedUpdate_t487 * __this, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m2917(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrame.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrameMethodDeclarations.h"



// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
extern "C" void WaitForEndOfFrame__ctor_m226 (WaitForEndOfFrame_t71 * __this, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m2917(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_CoroutineMethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"


// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m2283 (Coroutine_t235 * __this, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m2917(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m2284 (Coroutine_t235 * __this, const MethodInfo* method)
{
	typedef void (*Coroutine_ReleaseCoroutine_m2284_ftn) (Coroutine_t235 *);
	static Coroutine_ReleaseCoroutine_m2284_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Coroutine_ReleaseCoroutine_m2284_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Coroutine::ReleaseCoroutine()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m2285 (Coroutine_t235 * __this, const MethodInfo* method)
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
		Coroutine_ReleaseCoroutine_m2284(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: UnityEngine.Coroutine
void Coroutine_t235_marshal(const Coroutine_t235& unmarshaled, Coroutine_t235_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void Coroutine_t235_marshal_back(const Coroutine_t235_marshaled& marshaled, Coroutine_t235& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.Coroutine
void Coroutine_t235_marshal_cleanup(Coroutine_t235_marshaled& marshaled)
{
}
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObject.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"

// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"


// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C" void ScriptableObject__ctor_m210 (ScriptableObject_t6 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2872(__this, /*hidden argument*/NULL);
		ScriptableObject_Internal_CreateScriptableObject_m2286(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)
extern "C" void ScriptableObject_Internal_CreateScriptableObject_m2286 (Object_t * __this /* static, unused */, ScriptableObject_t6 * ___self, const MethodInfo* method)
{
	typedef void (*ScriptableObject_Internal_CreateScriptableObject_m2286_ftn) (ScriptableObject_t6 *);
	static ScriptableObject_Internal_CreateScriptableObject_m2286_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableObject_Internal_CreateScriptableObject_m2286_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)");
	_il2cpp_icall_func(___self);
}
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.String)
extern "C" ScriptableObject_t6 * ScriptableObject_CreateInstance_m2287 (Object_t * __this /* static, unused */, String_t* ___className, const MethodInfo* method)
{
	typedef ScriptableObject_t6 * (*ScriptableObject_CreateInstance_m2287_ftn) (String_t*);
	static ScriptableObject_CreateInstance_m2287_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableObject_CreateInstance_m2287_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScriptableObject::CreateInstance(System.String)");
	return _il2cpp_icall_func(___className);
}
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
extern "C" ScriptableObject_t6 * ScriptableObject_CreateInstance_m2288 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		ScriptableObject_t6 * L_1 = ScriptableObject_CreateInstanceFromType_m2289(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)
extern "C" ScriptableObject_t6 * ScriptableObject_CreateInstanceFromType_m2289 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	typedef ScriptableObject_t6 * (*ScriptableObject_CreateInstanceFromType_m2289_ftn) (Type_t *);
	static ScriptableObject_CreateInstanceFromType_m2289_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableObject_CreateInstanceFromType_m2289_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)");
	return _il2cpp_icall_func(___type);
}
// Conversion methods for marshalling of: UnityEngine.ScriptableObject
void ScriptableObject_t6_marshal(const ScriptableObject_t6& unmarshaled, ScriptableObject_t6_marshaled& marshaled)
{
}
void ScriptableObject_t6_marshal_back(const ScriptableObject_t6_marshaled& marshaled, ScriptableObject_t6& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.ScriptableObject
void ScriptableObject_t6_marshal_cleanup(ScriptableObject_t6_marshaled& marshaled)
{
}
// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GameCente.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GameCenteMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUser.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfile.h"
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDesc.h"
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_gen_24.h"
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve.h"
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
#include "mscorlib_System_Action_1_gen_2.h"
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserPro.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0.h"
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Achievement.h"
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
#include "mscorlib_System_Action_1_gen_3.h"
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Score.h"
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
#include "mscorlib_System_Action_1_gen_0.h"
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Leaderboard.h"
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcLeaderb.h"
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_Range.h"
// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScope.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
#include "mscorlib_System_Action_1_gen_4.h"
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUserMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfileMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_gen_24MethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieveMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDescMethodDeclarations.h"
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
#include "mscorlib_System_Action_1_gen_2MethodDeclarations.h"
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_genMethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserProMethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0MethodDeclarations.h"
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
#include "mscorlib_System_Action_1_gen_3MethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDaMethodDeclarations.h"
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
#include "mscorlib_System_Action_1_gen_0MethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcLeaderbMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LeaderboardMethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3MethodDeclarations.h"
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
#include "mscorlib_System_Action_1_gen_4MethodDeclarations.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementMethodDeclarations.h"


// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::.ctor()
extern "C" void GameCenterPlatform__ctor_m2290 (GameCenterPlatform_t495 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::.cctor()
extern TypeInfo* AchievementDescriptionU5BU5D_t491_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern TypeInfo* UserProfileU5BU5D_t492_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t494_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3509_MethodInfo_var;
extern "C" void GameCenterPlatform__cctor_m2291 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AchievementDescriptionU5BU5D_t491_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(926);
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		UserProfileU5BU5D_t492_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(929);
		List_1_t494_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(931);
		List_1__ctor_m3509_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483942);
		s_Il2CppMethodIntialized = true;
	}
	{
		((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9 = ((AchievementDescriptionU5BU5D_t491*)SZArrayNew(AchievementDescriptionU5BU5D_t491_il2cpp_TypeInfo_var, 0));
		((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_friends_10 = ((UserProfileU5BU5D_t492*)SZArrayNew(UserProfileU5BU5D_t492_il2cpp_TypeInfo_var, 0));
		((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_users_11 = ((UserProfileU5BU5D_t492*)SZArrayNew(UserProfileU5BU5D_t492_il2cpp_TypeInfo_var, 0));
		List_1_t494 * L_0 = (List_1_t494 *)il2cpp_codegen_object_new (List_1_t494_il2cpp_TypeInfo_var);
		List_1__ctor_m3509(L_0, /*hidden argument*/List_1__ctor_m3509_MethodInfo_var);
		((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___m_GcBoards_14 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::UnityEngine.SocialPlatforms.ISocialPlatform.LoadFriends(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_LoadFriends_m2292 (GameCenterPlatform_t495 * __this, Object_t * ___user, Action_1_t18 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t18 * L_0 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_FriendsCallback_1 = L_0;
		GameCenterPlatform_Internal_LoadFriends_m2300(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::UnityEngine.SocialPlatforms.ISocialPlatform.Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m2293 (GameCenterPlatform_t495 * __this, Object_t * ___user, Action_1_t18 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t18 * L_0 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_AuthenticateCallback_0 = L_0;
		GameCenterPlatform_Internal_Authenticate_m2294(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticate()
extern "C" void GameCenterPlatform_Internal_Authenticate_m2294 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_Authenticate_m2294_ftn) ();
	static GameCenterPlatform_Internal_Authenticate_m2294_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_Authenticate_m2294_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticate()");
	_il2cpp_icall_func();
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticated()
extern "C" bool GameCenterPlatform_Internal_Authenticated_m2295 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*GameCenterPlatform_Internal_Authenticated_m2295_ftn) ();
	static GameCenterPlatform_Internal_Authenticated_m2295_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_Authenticated_m2295_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticated()");
	return _il2cpp_icall_func();
}
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserName()
extern "C" String_t* GameCenterPlatform_Internal_UserName_m2296 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*GameCenterPlatform_Internal_UserName_m2296_ftn) ();
	static GameCenterPlatform_Internal_UserName_m2296_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_UserName_m2296_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserName()");
	return _il2cpp_icall_func();
}
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserID()
extern "C" String_t* GameCenterPlatform_Internal_UserID_m2297 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*GameCenterPlatform_Internal_UserID_m2297_ftn) ();
	static GameCenterPlatform_Internal_UserID_m2297_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_UserID_m2297_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserID()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Underage()
extern "C" bool GameCenterPlatform_Internal_Underage_m2298 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*GameCenterPlatform_Internal_Underage_m2298_ftn) ();
	static GameCenterPlatform_Internal_Underage_m2298_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_Underage_m2298_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Underage()");
	return _il2cpp_icall_func();
}
// UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserImage()
extern "C" Texture2D_t193 * GameCenterPlatform_Internal_UserImage_m2299 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Texture2D_t193 * (*GameCenterPlatform_Internal_UserImage_m2299_ftn) ();
	static GameCenterPlatform_Internal_UserImage_m2299_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_UserImage_m2299_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserImage()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadFriends()
extern "C" void GameCenterPlatform_Internal_LoadFriends_m2300 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadFriends_m2300_ftn) ();
	static GameCenterPlatform_Internal_LoadFriends_m2300_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadFriends_m2300_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadFriends()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievementDescriptions()
extern "C" void GameCenterPlatform_Internal_LoadAchievementDescriptions_m2301 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadAchievementDescriptions_m2301_ftn) ();
	static GameCenterPlatform_Internal_LoadAchievementDescriptions_m2301_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadAchievementDescriptions_m2301_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievementDescriptions()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievements()
extern "C" void GameCenterPlatform_Internal_LoadAchievements_m2302 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadAchievements_m2302_ftn) ();
	static GameCenterPlatform_Internal_LoadAchievements_m2302_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadAchievements_m2302_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievements()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportProgress(System.String,System.Double)
extern "C" void GameCenterPlatform_Internal_ReportProgress_m2303 (Object_t * __this /* static, unused */, String_t* ___id, double ___progress, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ReportProgress_m2303_ftn) (String_t*, double);
	static GameCenterPlatform_Internal_ReportProgress_m2303_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ReportProgress_m2303_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportProgress(System.String,System.Double)");
	_il2cpp_icall_func(___id, ___progress);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportScore(System.Int64,System.String)
extern "C" void GameCenterPlatform_Internal_ReportScore_m2304 (Object_t * __this /* static, unused */, int64_t ___score, String_t* ___category, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ReportScore_m2304_ftn) (int64_t, String_t*);
	static GameCenterPlatform_Internal_ReportScore_m2304_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ReportScore_m2304_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportScore(System.Int64,System.String)");
	_il2cpp_icall_func(___score, ___category);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadScores(System.String)
extern "C" void GameCenterPlatform_Internal_LoadScores_m2305 (Object_t * __this /* static, unused */, String_t* ___category, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadScores_m2305_ftn) (String_t*);
	static GameCenterPlatform_Internal_LoadScores_m2305_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadScores_m2305_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadScores(System.String)");
	_il2cpp_icall_func(___category);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowAchievementsUI()
extern "C" void GameCenterPlatform_Internal_ShowAchievementsUI_m2306 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowAchievementsUI_m2306_ftn) ();
	static GameCenterPlatform_Internal_ShowAchievementsUI_m2306_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowAchievementsUI_m2306_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowAchievementsUI()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowLeaderboardUI()
extern "C" void GameCenterPlatform_Internal_ShowLeaderboardUI_m2307 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowLeaderboardUI_m2307_ftn) ();
	static GameCenterPlatform_Internal_ShowLeaderboardUI_m2307_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowLeaderboardUI_m2307_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowLeaderboardUI()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadUsers(System.String[])
extern "C" void GameCenterPlatform_Internal_LoadUsers_m2308 (Object_t * __this /* static, unused */, StringU5BU5D_t48* ___userIds, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadUsers_m2308_ftn) (StringU5BU5D_t48*);
	static GameCenterPlatform_Internal_LoadUsers_m2308_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadUsers_m2308_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadUsers(System.String[])");
	_il2cpp_icall_func(___userIds);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ResetAllAchievements()
extern "C" void GameCenterPlatform_Internal_ResetAllAchievements_m2309 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ResetAllAchievements_m2309_ftn) ();
	static GameCenterPlatform_Internal_ResetAllAchievements_m2309_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ResetAllAchievements_m2309_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ResetAllAchievements()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowDefaultAchievementBanner(System.Boolean)
extern "C" void GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2310 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2310_ftn) (bool);
	static GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2310_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2310_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowDefaultAchievementBanner(System.Boolean)");
	_il2cpp_icall_func(___value);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ResetAllAchievements(System.Action`1<System.Boolean>)
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ResetAllAchievements_m2311 (Object_t * __this /* static, unused */, Action_1_t18 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t18 * L_0 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_ResetAchievements_12 = L_0;
		GameCenterPlatform_Internal_ResetAllAchievements_m2309(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowDefaultAchievementCompletionBanner(System.Boolean)
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ShowDefaultAchievementCompletionBanner_m2312 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2310(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowLeaderboardUI(System.String,UnityEngine.SocialPlatforms.TimeScope)
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ShowLeaderboardUI_m2313 (Object_t * __this /* static, unused */, String_t* ___leaderboardID, int32_t ___timeScope, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___leaderboardID;
		int32_t L_1 = ___timeScope;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2314(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowSpecificLeaderboardUI(System.String,System.Int32)
extern "C" void GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2314 (Object_t * __this /* static, unused */, String_t* ___leaderboardID, int32_t ___timeScope, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2314_ftn) (String_t*, int32_t);
	static GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2314_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2314_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowSpecificLeaderboardUI(System.String,System.Int32)");
	_il2cpp_icall_func(___leaderboardID, ___timeScope);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearAchievementDescriptions(System.Int32)
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern TypeInfo* AchievementDescriptionU5BU5D_t491_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ClearAchievementDescriptions_m2315 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		AchievementDescriptionU5BU5D_t491_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(926);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t491* L_0 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t491* L_1 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		NullCheck(L_1);
		int32_t L_2 = ___size;
		if ((((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))) == ((int32_t)L_2)))
		{
			goto IL_0022;
		}
	}

IL_0017:
	{
		int32_t L_3 = ___size;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9 = ((AchievementDescriptionU5BU5D_t491*)SZArrayNew(AchievementDescriptionU5BU5D_t491_il2cpp_TypeInfo_var, L_3));
	}

IL_0022:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetAchievementDescription(UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData,System.Int32)
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_SetAchievementDescription_m2316 (Object_t * __this /* static, unused */, GcAchievementDescriptionData_t655  ___data, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t491* L_0 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		int32_t L_1 = ___number;
		AchievementDescription_t666 * L_2 = GcAchievementDescriptionData_ToAchievementDescription_m3331((&___data), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		ArrayElementTypeCheck (L_0, L_2);
		*((AchievementDescription_t666 **)(AchievementDescription_t666 **)SZArrayLdElema(L_0, L_1)) = (AchievementDescription_t666 *)L_2;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetAchievementDescriptionImage(UnityEngine.Texture2D,System.Int32)
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_SetAchievementDescriptionImage_m2317 (Object_t * __this /* static, unused */, Texture2D_t193 * ___texture, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t491* L_0 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		NullCheck(L_0);
		int32_t L_1 = ___number;
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) <= ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___number;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}

IL_0014:
	{
		Debug_Log_m243(NULL /*static, unused*/, (String_t*) &_stringLiteral131, /*hidden argument*/NULL);
		return;
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t491* L_3 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		int32_t L_4 = ___number;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Texture2D_t193 * L_6 = ___texture;
		NullCheck((*(AchievementDescription_t666 **)(AchievementDescription_t666 **)SZArrayLdElema(L_3, L_5)));
		AchievementDescription_SetImage_m3370((*(AchievementDescription_t666 **)(AchievementDescription_t666 **)SZArrayLdElema(L_3, L_5)), L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerAchievementDescriptionCallback()
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_TriggerAchievementDescriptionCallback_m2318 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		Action_1_t488 * L_0 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_AchievementDescriptionLoaderCallback_2;
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t491* L_1 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t491* L_2 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		NullCheck(L_2);
		if ((((int32_t)(((Array_t *)L_2)->max_length))))
		{
			goto IL_002a;
		}
	}
	{
		Debug_Log_m243(NULL /*static, unused*/, (String_t*) &_stringLiteral132, /*hidden argument*/NULL);
	}

IL_002a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		Action_1_t488 * L_3 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_AchievementDescriptionLoaderCallback_2;
		AchievementDescriptionU5BU5D_t491* L_4 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		NullCheck(L_3);
		VirtActionInvoker1< IAchievementDescriptionU5BU5D_t735* >::Invoke(10 /* System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>::Invoke(!0) */, L_3, (IAchievementDescriptionU5BU5D_t735*)(IAchievementDescriptionU5BU5D_t735*)L_4);
	}

IL_0039:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::AuthenticateCallbackWrapper(System.Int32)
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_AuthenticateCallbackWrapper_m2319 (Object_t * __this /* static, unused */, int32_t ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t18 * G_B3_0 = {0};
	Action_1_t18 * G_B2_0 = {0};
	int32_t G_B4_0 = 0;
	Action_1_t18 * G_B4_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		Action_1_t18 * L_0 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_AuthenticateCallback_0;
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		GameCenterPlatform_PopulateLocalUser_m2329(NULL /*static, unused*/, /*hidden argument*/NULL);
		Action_1_t18 * L_1 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_AuthenticateCallback_0;
		int32_t L_2 = ___result;
		G_B2_0 = L_1;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			G_B3_0 = L_1;
			goto IL_0021;
		}
	}
	{
		G_B4_0 = 1;
		G_B4_1 = G_B2_0;
		goto IL_0022;
	}

IL_0021:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0022:
	{
		NullCheck(G_B4_1);
		VirtActionInvoker1< bool >::Invoke(10 /* System.Void System.Action`1<System.Boolean>::Invoke(!0) */, G_B4_1, G_B4_0);
	}

IL_0027:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearFriends(System.Int32)
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ClearFriends_m2320 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		int32_t L_0 = ___size;
		GameCenterPlatform_SafeClearArray_m2347(NULL /*static, unused*/, (&((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_friends_10), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetFriends(UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData,System.Int32)
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_SetFriends_m2321 (Object_t * __this /* static, unused */, GcUserProfileData_t654  ___data, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		int32_t L_0 = ___number;
		GcUserProfileData_AddToArray_m3330((&___data), (&((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_friends_10), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetFriendImage(UnityEngine.Texture2D,System.Int32)
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_SetFriendImage_m2322 (Object_t * __this /* static, unused */, Texture2D_t193 * ___texture, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		Texture2D_t193 * L_0 = ___texture;
		int32_t L_1 = ___number;
		GameCenterPlatform_SafeSetUserImage_m2346(NULL /*static, unused*/, (&((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_friends_10), L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerFriendsCallbackWrapper(System.Int32)
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_TriggerFriendsCallbackWrapper_m2323 (Object_t * __this /* static, unused */, int32_t ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t18 * G_B5_0 = {0};
	Action_1_t18 * G_B4_0 = {0};
	int32_t G_B6_0 = 0;
	Action_1_t18 * G_B6_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		UserProfileU5BU5D_t492* L_0 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_friends_10;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		LocalUser_t493 * L_1 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		UserProfileU5BU5D_t492* L_2 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_friends_10;
		NullCheck(L_1);
		LocalUser_SetFriends_m3343(L_1, (IUserProfileU5BU5D_t663*)(IUserProfileU5BU5D_t663*)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		Action_1_t18 * L_3 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_FriendsCallback_1;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		Action_1_t18 * L_4 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_FriendsCallback_1;
		int32_t L_5 = ___result;
		G_B4_0 = L_4;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			G_B5_0 = L_4;
			goto IL_0035;
		}
	}
	{
		G_B6_0 = 1;
		G_B6_1 = G_B4_0;
		goto IL_0036;
	}

IL_0035:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0036:
	{
		NullCheck(G_B6_1);
		VirtActionInvoker1< bool >::Invoke(10 /* System.Void System.Action`1<System.Boolean>::Invoke(!0) */, G_B6_1, G_B6_0);
	}

IL_003b:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::AchievementCallbackWrapper(UnityEngine.SocialPlatforms.GameCenter.GcAchievementData[])
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern TypeInfo* AchievementU5BU5D_t736_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_AchievementCallbackWrapper_m2324 (Object_t * __this /* static, unused */, GcAchievementDataU5BU5D_t705* ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		AchievementU5BU5D_t736_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(932);
		s_Il2CppMethodIntialized = true;
	}
	AchievementU5BU5D_t736* V_0 = {0};
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		Action_1_t489 * L_0 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_AchievementLoaderCallback_3;
		if (!L_0)
		{
			goto IL_0053;
		}
	}
	{
		GcAchievementDataU5BU5D_t705* L_1 = ___result;
		NullCheck(L_1);
		if ((((int32_t)(((Array_t *)L_1)->max_length))))
		{
			goto IL_001c;
		}
	}
	{
		Debug_Log_m243(NULL /*static, unused*/, (String_t*) &_stringLiteral133, /*hidden argument*/NULL);
	}

IL_001c:
	{
		GcAchievementDataU5BU5D_t705* L_2 = ___result;
		NullCheck(L_2);
		V_0 = ((AchievementU5BU5D_t736*)SZArrayNew(AchievementU5BU5D_t736_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_2)->max_length)))));
		V_1 = 0;
		goto IL_003f;
	}

IL_002c:
	{
		AchievementU5BU5D_t736* L_3 = V_0;
		int32_t L_4 = V_1;
		GcAchievementDataU5BU5D_t705* L_5 = ___result;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		Achievement_t665 * L_7 = GcAchievementData_ToAchievement_m3332(((GcAchievementData_t656 *)(GcAchievementData_t656 *)SZArrayLdElema(L_5, L_6)), /*hidden argument*/NULL);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		ArrayElementTypeCheck (L_3, L_7);
		*((Achievement_t665 **)(Achievement_t665 **)SZArrayLdElema(L_3, L_4)) = (Achievement_t665 *)L_7;
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_9 = V_1;
		GcAchievementDataU5BU5D_t705* L_10 = ___result;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		Action_1_t489 * L_11 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_AchievementLoaderCallback_3;
		AchievementU5BU5D_t736* L_12 = V_0;
		NullCheck(L_11);
		VirtActionInvoker1< IAchievementU5BU5D_t737* >::Invoke(10 /* System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>::Invoke(!0) */, L_11, (IAchievementU5BU5D_t737*)(IAchievementU5BU5D_t737*)L_12);
	}

IL_0053:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ProgressCallbackWrapper(System.Boolean)
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ProgressCallbackWrapper_m2325 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		Action_1_t18 * L_0 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_ProgressCallback_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		Action_1_t18 * L_1 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_ProgressCallback_4;
		bool L_2 = ___success;
		NullCheck(L_1);
		VirtActionInvoker1< bool >::Invoke(10 /* System.Void System.Action`1<System.Boolean>::Invoke(!0) */, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ScoreCallbackWrapper(System.Boolean)
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ScoreCallbackWrapper_m2326 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		Action_1_t18 * L_0 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_ScoreCallback_5;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		Action_1_t18 * L_1 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_ScoreCallback_5;
		bool L_2 = ___success;
		NullCheck(L_1);
		VirtActionInvoker1< bool >::Invoke(10 /* System.Void System.Action`1<System.Boolean>::Invoke(!0) */, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ScoreLoaderCallbackWrapper(UnityEngine.SocialPlatforms.GameCenter.GcScoreData[])
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern TypeInfo* ScoreU5BU5D_t738_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ScoreLoaderCallbackWrapper_m2327 (Object_t * __this /* static, unused */, GcScoreDataU5BU5D_t706* ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		ScoreU5BU5D_t738_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(934);
		s_Il2CppMethodIntialized = true;
	}
	ScoreU5BU5D_t738* V_0 = {0};
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		Action_1_t17 * L_0 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_ScoreLoaderCallback_6;
		if (!L_0)
		{
			goto IL_0041;
		}
	}
	{
		GcScoreDataU5BU5D_t706* L_1 = ___result;
		NullCheck(L_1);
		V_0 = ((ScoreU5BU5D_t738*)SZArrayNew(ScoreU5BU5D_t738_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_1)->max_length)))));
		V_1 = 0;
		goto IL_002d;
	}

IL_001a:
	{
		ScoreU5BU5D_t738* L_2 = V_0;
		int32_t L_3 = V_1;
		GcScoreDataU5BU5D_t706* L_4 = ___result;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		Score_t667 * L_6 = GcScoreData_ToScore_m3333(((GcScoreData_t657 *)(GcScoreData_t657 *)SZArrayLdElema(L_4, L_5)), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		ArrayElementTypeCheck (L_2, L_6);
		*((Score_t667 **)(Score_t667 **)SZArrayLdElema(L_2, L_3)) = (Score_t667 *)L_6;
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002d:
	{
		int32_t L_8 = V_1;
		GcScoreDataU5BU5D_t706* L_9 = ___result;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		Action_1_t17 * L_10 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_ScoreLoaderCallback_6;
		ScoreU5BU5D_t738* L_11 = V_0;
		NullCheck(L_10);
		VirtActionInvoker1< IScoreU5BU5D_t60* >::Invoke(10 /* System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::Invoke(!0) */, L_10, (IScoreU5BU5D_t60*)(IScoreU5BU5D_t60*)L_11);
	}

IL_0041:
	{
		return;
	}
}
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::get_localUser()
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern TypeInfo* LocalUser_t493_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Object_t * GameCenterPlatform_get_localUser_m2328 (GameCenterPlatform_t495 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		LocalUser_t493_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(936);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		LocalUser_t493 * L_0 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		LocalUser_t493 * L_1 = (LocalUser_t493 *)il2cpp_codegen_object_new (LocalUser_t493_il2cpp_TypeInfo_var);
		LocalUser__ctor_m3341(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13 = L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		bool L_2 = GameCenterPlatform_Internal_Authenticated_m2295(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		LocalUser_t493 * L_3 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id() */, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m334(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral130, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		GameCenterPlatform_PopulateLocalUser_m2329(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_003c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		LocalUser_t493 * L_6 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		return L_6;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::PopulateLocalUser()
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_PopulateLocalUser_m2329 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		LocalUser_t493 * L_0 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		bool L_1 = GameCenterPlatform_Internal_Authenticated_m2295(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		LocalUser_SetAuthenticated_m3344(L_0, L_1, /*hidden argument*/NULL);
		LocalUser_t493 * L_2 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		String_t* L_3 = GameCenterPlatform_Internal_UserName_m2296(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		UserProfile_SetUserName_m3350(L_2, L_3, /*hidden argument*/NULL);
		LocalUser_t493 * L_4 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		String_t* L_5 = GameCenterPlatform_Internal_UserID_m2297(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		UserProfile_SetUserID_m3351(L_4, L_5, /*hidden argument*/NULL);
		LocalUser_t493 * L_6 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		bool L_7 = GameCenterPlatform_Internal_Underage_m2298(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		LocalUser_SetUnderage_m3345(L_6, L_7, /*hidden argument*/NULL);
		LocalUser_t493 * L_8 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		Texture2D_t193 * L_9 = GameCenterPlatform_Internal_UserImage_m2299(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		UserProfile_SetImage_m3352(L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadAchievementDescriptions(System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>)
extern TypeInfo* AchievementDescriptionU5BU5D_t491_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_LoadAchievementDescriptions_m2330 (GameCenterPlatform_t495 * __this, Action_1_t488 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AchievementDescriptionU5BU5D_t491_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(926);
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2338(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Action_1_t488 * L_1 = ___callback;
		NullCheck(L_1);
		VirtActionInvoker1< IAchievementDescriptionU5BU5D_t735* >::Invoke(10 /* System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>::Invoke(!0) */, L_1, (IAchievementDescriptionU5BU5D_t735*)(IAchievementDescriptionU5BU5D_t735*)((AchievementDescriptionU5BU5D_t491*)SZArrayNew(AchievementDescriptionU5BU5D_t491_il2cpp_TypeInfo_var, 0)));
		return;
	}

IL_0018:
	{
		Action_1_t488 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_AchievementDescriptionLoaderCallback_2 = L_2;
		GameCenterPlatform_Internal_LoadAchievementDescriptions_m2301(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ReportProgress(System.String,System.Double,System.Action`1<System.Boolean>)
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ReportProgress_m2331 (GameCenterPlatform_t495 * __this, String_t* ___id, double ___progress, Action_1_t18 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2338(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t18 * L_1 = ___callback;
		NullCheck(L_1);
		VirtActionInvoker1< bool >::Invoke(10 /* System.Void System.Action`1<System.Boolean>::Invoke(!0) */, L_1, 0);
		return;
	}

IL_0013:
	{
		Action_1_t18 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_ProgressCallback_4 = L_2;
		String_t* L_3 = ___id;
		double L_4 = ___progress;
		GameCenterPlatform_Internal_ReportProgress_m2303(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadAchievements(System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>)
extern TypeInfo* AchievementU5BU5D_t736_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_LoadAchievements_m2332 (GameCenterPlatform_t495 * __this, Action_1_t489 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AchievementU5BU5D_t736_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(932);
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2338(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Action_1_t489 * L_1 = ___callback;
		NullCheck(L_1);
		VirtActionInvoker1< IAchievementU5BU5D_t737* >::Invoke(10 /* System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>::Invoke(!0) */, L_1, (IAchievementU5BU5D_t737*)(IAchievementU5BU5D_t737*)((AchievementU5BU5D_t736*)SZArrayNew(AchievementU5BU5D_t736_il2cpp_TypeInfo_var, 0)));
		return;
	}

IL_0018:
	{
		Action_1_t489 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_AchievementLoaderCallback_3 = L_2;
		GameCenterPlatform_Internal_LoadAchievements_m2302(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>)
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ReportScore_m2333 (GameCenterPlatform_t495 * __this, int64_t ___score, String_t* ___board, Action_1_t18 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2338(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t18 * L_1 = ___callback;
		NullCheck(L_1);
		VirtActionInvoker1< bool >::Invoke(10 /* System.Void System.Action`1<System.Boolean>::Invoke(!0) */, L_1, 0);
		return;
	}

IL_0013:
	{
		Action_1_t18 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_ScoreCallback_5 = L_2;
		int64_t L_3 = ___score;
		String_t* L_4 = ___board;
		GameCenterPlatform_Internal_ReportScore_m2304(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadScores(System.String,System.Action`1<UnityEngine.SocialPlatforms.IScore[]>)
extern TypeInfo* ScoreU5BU5D_t738_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_LoadScores_m2334 (GameCenterPlatform_t495 * __this, String_t* ___category, Action_1_t17 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreU5BU5D_t738_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(934);
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2338(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Action_1_t17 * L_1 = ___callback;
		NullCheck(L_1);
		VirtActionInvoker1< IScoreU5BU5D_t60* >::Invoke(10 /* System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::Invoke(!0) */, L_1, (IScoreU5BU5D_t60*)(IScoreU5BU5D_t60*)((ScoreU5BU5D_t738*)SZArrayNew(ScoreU5BU5D_t738_il2cpp_TypeInfo_var, 0)));
		return;
	}

IL_0018:
	{
		Action_1_t17 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_ScoreLoaderCallback_6 = L_2;
		String_t* L_3 = ___category;
		GameCenterPlatform_Internal_LoadScores_m2305(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadScores(UnityEngine.SocialPlatforms.ILeaderboard,System.Action`1<System.Boolean>)
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern TypeInfo* Leaderboard_t496_il2cpp_TypeInfo_var;
extern TypeInfo* GcLeaderboard_t497_il2cpp_TypeInfo_var;
extern TypeInfo* ILeaderboard_t707_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_LoadScores_m2335 (GameCenterPlatform_t495 * __this, Object_t * ___board, Action_1_t18 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		Leaderboard_t496_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(937);
		GcLeaderboard_t497_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(925);
		ILeaderboard_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(938);
		s_Il2CppMethodIntialized = true;
	}
	Leaderboard_t496 * V_0 = {0};
	GcLeaderboard_t497 * V_1 = {0};
	Range_t668  V_2 = {0};
	Range_t668  V_3 = {0};
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2338(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t18 * L_1 = ___callback;
		NullCheck(L_1);
		VirtActionInvoker1< bool >::Invoke(10 /* System.Void System.Action`1<System.Boolean>::Invoke(!0) */, L_1, 0);
		return;
	}

IL_0013:
	{
		Action_1_t18 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_LeaderboardCallback_7 = L_2;
		Object_t * L_3 = ___board;
		V_0 = ((Leaderboard_t496 *)Castclass(L_3, Leaderboard_t496_il2cpp_TypeInfo_var));
		Leaderboard_t496 * L_4 = V_0;
		GcLeaderboard_t497 * L_5 = (GcLeaderboard_t497 *)il2cpp_codegen_object_new (GcLeaderboard_t497_il2cpp_TypeInfo_var);
		GcLeaderboard__ctor_m2351(L_5, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		List_1_t494 * L_6 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___m_GcBoards_14;
		GcLeaderboard_t497 * L_7 = V_1;
		NullCheck(L_6);
		VirtActionInvoker1< GcLeaderboard_t497 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Add(!0) */, L_6, L_7);
		Leaderboard_t496 * L_8 = V_0;
		NullCheck(L_8);
		StringU5BU5D_t48* L_9 = Leaderboard_GetUserFilter_m3394(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		if ((((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		GcLeaderboard_t497 * L_10 = V_1;
		Object_t * L_11 = ___board;
		NullCheck(L_11);
		String_t* L_12 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.SocialPlatforms.ILeaderboard::get_id() */, ILeaderboard_t707_il2cpp_TypeInfo_var, L_11);
		Object_t * L_13 = ___board;
		NullCheck(L_13);
		int32_t L_14 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(3 /* UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.ILeaderboard::get_timeScope() */, ILeaderboard_t707_il2cpp_TypeInfo_var, L_13);
		Leaderboard_t496 * L_15 = V_0;
		NullCheck(L_15);
		StringU5BU5D_t48* L_16 = Leaderboard_GetUserFilter_m3394(L_15, /*hidden argument*/NULL);
		NullCheck(L_10);
		GcLeaderboard_Internal_LoadScoresWithUsers_m2359(L_10, L_12, L_14, L_16, /*hidden argument*/NULL);
		goto IL_0091;
	}

IL_005d:
	{
		GcLeaderboard_t497 * L_17 = V_1;
		Object_t * L_18 = ___board;
		NullCheck(L_18);
		String_t* L_19 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.SocialPlatforms.ILeaderboard::get_id() */, ILeaderboard_t707_il2cpp_TypeInfo_var, L_18);
		Object_t * L_20 = ___board;
		NullCheck(L_20);
		Range_t668  L_21 = (Range_t668 )InterfaceFuncInvoker0< Range_t668  >::Invoke(2 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.ILeaderboard::get_range() */, ILeaderboard_t707_il2cpp_TypeInfo_var, L_20);
		V_2 = L_21;
		int32_t L_22 = ((&V_2)->___from_0);
		Object_t * L_23 = ___board;
		NullCheck(L_23);
		Range_t668  L_24 = (Range_t668 )InterfaceFuncInvoker0< Range_t668  >::Invoke(2 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.ILeaderboard::get_range() */, ILeaderboard_t707_il2cpp_TypeInfo_var, L_23);
		V_3 = L_24;
		int32_t L_25 = ((&V_3)->___count_1);
		Object_t * L_26 = ___board;
		NullCheck(L_26);
		int32_t L_27 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(1 /* UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.ILeaderboard::get_userScope() */, ILeaderboard_t707_il2cpp_TypeInfo_var, L_26);
		Object_t * L_28 = ___board;
		NullCheck(L_28);
		int32_t L_29 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(3 /* UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.ILeaderboard::get_timeScope() */, ILeaderboard_t707_il2cpp_TypeInfo_var, L_28);
		NullCheck(L_17);
		GcLeaderboard_Internal_LoadScores_m2358(L_17, L_19, L_22, L_25, L_27, L_29, /*hidden argument*/NULL);
	}

IL_0091:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LeaderboardCallbackWrapper(System.Boolean)
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_LeaderboardCallbackWrapper_m2336 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		Action_1_t18 * L_0 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_LeaderboardCallback_7;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		Action_1_t18 * L_1 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_LeaderboardCallback_7;
		bool L_2 = ___success;
		NullCheck(L_1);
		VirtActionInvoker1< bool >::Invoke(10 /* System.Void System.Action`1<System.Boolean>::Invoke(!0) */, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetLoading(UnityEngine.SocialPlatforms.ILeaderboard)
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern TypeInfo* Leaderboard_t496_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t739_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t69_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3510_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3511_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3512_MethodInfo_var;
extern "C" bool GameCenterPlatform_GetLoading_m2337 (GameCenterPlatform_t495 * __this, Object_t * ___board, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		Leaderboard_t496_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(937);
		Enumerator_t739_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(939);
		IDisposable_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		List_1_GetEnumerator_m3510_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483943);
		Enumerator_get_Current_m3511_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483944);
		Enumerator_MoveNext_m3512_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483945);
		s_Il2CppMethodIntialized = true;
	}
	GcLeaderboard_t497 * V_0 = {0};
	Enumerator_t739  V_1 = {0};
	bool V_2 = false;
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2338(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		List_1_t494 * L_1 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___m_GcBoards_14;
		NullCheck(L_1);
		Enumerator_t739  L_2 = List_1_GetEnumerator_m3510(L_1, /*hidden argument*/List_1_GetEnumerator_m3510_MethodInfo_var);
		V_1 = L_2;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0042;
		}

IL_001d:
		{
			GcLeaderboard_t497 * L_3 = Enumerator_get_Current_m3511((&V_1), /*hidden argument*/Enumerator_get_Current_m3511_MethodInfo_var);
			V_0 = L_3;
			GcLeaderboard_t497 * L_4 = V_0;
			Object_t * L_5 = ___board;
			NullCheck(L_4);
			bool L_6 = GcLeaderboard_Contains_m2353(L_4, ((Leaderboard_t496 *)Castclass(L_5, Leaderboard_t496_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0042;
			}
		}

IL_0036:
		{
			GcLeaderboard_t497 * L_7 = V_0;
			NullCheck(L_7);
			bool L_8 = GcLeaderboard_Loading_m2360(L_7, /*hidden argument*/NULL);
			V_2 = L_8;
			IL2CPP_LEAVE(0x61, FINALLY_0053);
		}

IL_0042:
		{
			bool L_9 = Enumerator_MoveNext_m3512((&V_1), /*hidden argument*/Enumerator_MoveNext_m3512_MethodInfo_var);
			if (L_9)
			{
				goto IL_001d;
			}
		}

IL_004e:
		{
			IL2CPP_LEAVE(0x5F, FINALLY_0053);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_0053;
	}

FINALLY_0053:
	{ // begin finally (depth: 1)
		Enumerator_t739  L_10 = V_1;
		Enumerator_t739  L_11 = L_10;
		Object_t * L_12 = Box(Enumerator_t739_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_12);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t69_il2cpp_TypeInfo_var, L_12);
		IL2CPP_END_FINALLY(83)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(83)
	{
		IL2CPP_JUMP_TBL(0x61, IL_0061)
		IL2CPP_JUMP_TBL(0x5F, IL_005f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_005f:
	{
		return 0;
	}

IL_0061:
	{
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::VerifyAuthentication()
extern TypeInfo* ILocalUser_t74_il2cpp_TypeInfo_var;
extern "C" bool GameCenterPlatform_VerifyAuthentication_m2338 (GameCenterPlatform_t495 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILocalUser_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* UnityEngine.SocialPlatforms.ILocalUser UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::get_localUser() */, __this);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean UnityEngine.SocialPlatforms.ILocalUser::get_authenticated() */, ILocalUser_t74_il2cpp_TypeInfo_var, L_0);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Debug_Log_m243(NULL /*static, unused*/, (String_t*) &_stringLiteral134, /*hidden argument*/NULL);
		return 0;
	}

IL_001c:
	{
		return 1;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowAchievementsUI()
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ShowAchievementsUI_m2339 (GameCenterPlatform_t495 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ShowAchievementsUI_m2306(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowLeaderboardUI()
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ShowLeaderboardUI_m2340 (GameCenterPlatform_t495 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ShowLeaderboardUI_m2307(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearUsers(System.Int32)
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ClearUsers_m2341 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		int32_t L_0 = ___size;
		GameCenterPlatform_SafeClearArray_m2347(NULL /*static, unused*/, (&((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_users_11), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetUser(UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData,System.Int32)
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_SetUser_m2342 (Object_t * __this /* static, unused */, GcUserProfileData_t654  ___data, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		int32_t L_0 = ___number;
		GcUserProfileData_AddToArray_m3330((&___data), (&((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_users_11), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetUserImage(UnityEngine.Texture2D,System.Int32)
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_SetUserImage_m2343 (Object_t * __this /* static, unused */, Texture2D_t193 * ___texture, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		Texture2D_t193 * L_0 = ___texture;
		int32_t L_1 = ___number;
		GameCenterPlatform_SafeSetUserImage_m2346(NULL /*static, unused*/, (&((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_users_11), L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerUsersCallbackWrapper()
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_TriggerUsersCallbackWrapper_m2344 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		Action_1_t490 * L_0 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_UsersCallback_8;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		Action_1_t490 * L_1 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_UsersCallback_8;
		UserProfileU5BU5D_t492* L_2 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_users_11;
		NullCheck(L_1);
		VirtActionInvoker1< IUserProfileU5BU5D_t663* >::Invoke(10 /* System.Void System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::Invoke(!0) */, L_1, (IUserProfileU5BU5D_t663*)(IUserProfileU5BU5D_t663*)L_2);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadUsers(System.String[],System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>)
extern TypeInfo* UserProfileU5BU5D_t492_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_LoadUsers_m2345 (GameCenterPlatform_t495 * __this, StringU5BU5D_t48* ___userIds, Action_1_t490 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserProfileU5BU5D_t492_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(929);
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2338(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Action_1_t490 * L_1 = ___callback;
		NullCheck(L_1);
		VirtActionInvoker1< IUserProfileU5BU5D_t663* >::Invoke(10 /* System.Void System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::Invoke(!0) */, L_1, (IUserProfileU5BU5D_t663*)(IUserProfileU5BU5D_t663*)((UserProfileU5BU5D_t492*)SZArrayNew(UserProfileU5BU5D_t492_il2cpp_TypeInfo_var, 0)));
		return;
	}

IL_0018:
	{
		Action_1_t490 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_UsersCallback_8 = L_2;
		StringU5BU5D_t48* L_3 = ___userIds;
		GameCenterPlatform_Internal_LoadUsers_m2308(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeSetUserImage(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,UnityEngine.Texture2D,System.Int32)
extern TypeInfo* Texture2D_t193_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_SafeSetUserImage_m2346 (Object_t * __this /* static, unused */, UserProfileU5BU5D_t492** ___array, Texture2D_t193 * ___texture, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Texture2D_t193_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(940);
		s_Il2CppMethodIntialized = true;
	}
	{
		UserProfileU5BU5D_t492** L_0 = ___array;
		NullCheck((*((UserProfileU5BU5D_t492**)L_0)));
		int32_t L_1 = ___number;
		if ((((int32_t)(((int32_t)(((Array_t *)(*((UserProfileU5BU5D_t492**)L_0)))->max_length)))) <= ((int32_t)L_1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = ___number;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0026;
		}
	}

IL_0011:
	{
		Debug_Log_m243(NULL /*static, unused*/, (String_t*) &_stringLiteral135, /*hidden argument*/NULL);
		Texture2D_t193 * L_3 = (Texture2D_t193 *)il2cpp_codegen_object_new (Texture2D_t193_il2cpp_TypeInfo_var);
		Texture2D__ctor_m2387(L_3, ((int32_t)76), ((int32_t)76), /*hidden argument*/NULL);
		___texture = L_3;
	}

IL_0026:
	{
		UserProfileU5BU5D_t492** L_4 = ___array;
		NullCheck((*((UserProfileU5BU5D_t492**)L_4)));
		int32_t L_5 = ___number;
		if ((((int32_t)(((int32_t)(((Array_t *)(*((UserProfileU5BU5D_t492**)L_4)))->max_length)))) <= ((int32_t)L_5)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_6 = ___number;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		UserProfileU5BU5D_t492** L_7 = ___array;
		int32_t L_8 = ___number;
		NullCheck((*((UserProfileU5BU5D_t492**)L_7)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((UserProfileU5BU5D_t492**)L_7)), L_8);
		int32_t L_9 = L_8;
		Texture2D_t193 * L_10 = ___texture;
		NullCheck((*(UserProfile_t664 **)(UserProfile_t664 **)SZArrayLdElema((*((UserProfileU5BU5D_t492**)L_7)), L_9)));
		UserProfile_SetImage_m3352((*(UserProfile_t664 **)(UserProfile_t664 **)SZArrayLdElema((*((UserProfileU5BU5D_t492**)L_7)), L_9)), L_10, /*hidden argument*/NULL);
		goto IL_0050;
	}

IL_0046:
	{
		Debug_Log_m243(NULL /*static, unused*/, (String_t*) &_stringLiteral136, /*hidden argument*/NULL);
	}

IL_0050:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeClearArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern TypeInfo* UserProfileU5BU5D_t492_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_SafeClearArray_m2347 (Object_t * __this /* static, unused */, UserProfileU5BU5D_t492** ___array, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserProfileU5BU5D_t492_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(929);
		s_Il2CppMethodIntialized = true;
	}
	{
		UserProfileU5BU5D_t492** L_0 = ___array;
		if (!(*((UserProfileU5BU5D_t492**)L_0)))
		{
			goto IL_0011;
		}
	}
	{
		UserProfileU5BU5D_t492** L_1 = ___array;
		NullCheck((*((UserProfileU5BU5D_t492**)L_1)));
		int32_t L_2 = ___size;
		if ((((int32_t)(((int32_t)(((Array_t *)(*((UserProfileU5BU5D_t492**)L_1)))->max_length)))) == ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}

IL_0011:
	{
		UserProfileU5BU5D_t492** L_3 = ___array;
		int32_t L_4 = ___size;
		*((Object_t **)(L_3)) = (Object_t *)((UserProfileU5BU5D_t492*)SZArrayNew(UserProfileU5BU5D_t492_il2cpp_TypeInfo_var, L_4));
	}

IL_0019:
	{
		return;
	}
}
// UnityEngine.SocialPlatforms.ILeaderboard UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::CreateLeaderboard()
extern TypeInfo* Leaderboard_t496_il2cpp_TypeInfo_var;
extern "C" Object_t * GameCenterPlatform_CreateLeaderboard_m2348 (GameCenterPlatform_t495 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Leaderboard_t496_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(937);
		s_Il2CppMethodIntialized = true;
	}
	Leaderboard_t496 * V_0 = {0};
	{
		Leaderboard_t496 * L_0 = (Leaderboard_t496 *)il2cpp_codegen_object_new (Leaderboard_t496_il2cpp_TypeInfo_var);
		Leaderboard__ctor_m3388(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Leaderboard_t496 * L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.SocialPlatforms.IAchievement UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::CreateAchievement()
extern TypeInfo* Achievement_t665_il2cpp_TypeInfo_var;
extern "C" Object_t * GameCenterPlatform_CreateAchievement_m2349 (GameCenterPlatform_t495 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Achievement_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(933);
		s_Il2CppMethodIntialized = true;
	}
	Achievement_t665 * V_0 = {0};
	{
		Achievement_t665 * L_0 = (Achievement_t665 *)il2cpp_codegen_object_new (Achievement_t665_il2cpp_TypeInfo_var);
		Achievement__ctor_m3359(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Achievement_t665 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerResetAchievementCallback(System.Boolean)
extern TypeInfo* GameCenterPlatform_t495_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_TriggerResetAchievementCallback_m2350 (Object_t * __this /* static, unused */, bool ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		Action_1_t18 * L_0 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_ResetAchievements_12;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t495_il2cpp_TypeInfo_var);
		Action_1_t18 * L_1 = ((GameCenterPlatform_t495_StaticFields*)GameCenterPlatform_t495_il2cpp_TypeInfo_var->static_fields)->___s_ResetAchievements_12;
		bool L_2 = ___result;
		NullCheck(L_1);
		VirtActionInvoker1< bool >::Invoke(10 /* System.Void System.Action`1<System.Boolean>::Invoke(!0) */, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.UInt32
#include "mscorlib_System_UInt32.h"


// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::.ctor(UnityEngine.SocialPlatforms.Impl.Leaderboard)
extern "C" void GcLeaderboard__ctor_m2351 (GcLeaderboard_t497 * __this, Leaderboard_t496 * ___board, const MethodInfo* method)
{
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		Leaderboard_t496 * L_0 = ___board;
		__this->___m_GenericLeaderboard_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Finalize()
extern "C" void GcLeaderboard_Finalize_m2352 (GcLeaderboard_t497 * __this, const MethodInfo* method)
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
		GcLeaderboard_Dispose_m2361(__this, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Contains(UnityEngine.SocialPlatforms.Impl.Leaderboard)
extern "C" bool GcLeaderboard_Contains_m2353 (GcLeaderboard_t497 * __this, Leaderboard_t496 * ___board, const MethodInfo* method)
{
	{
		Leaderboard_t496 * L_0 = (__this->___m_GenericLeaderboard_1);
		Leaderboard_t496 * L_1 = ___board;
		return ((((Object_t*)(Leaderboard_t496 *)L_0) == ((Object_t*)(Leaderboard_t496 *)L_1))? 1 : 0);
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetScores(UnityEngine.SocialPlatforms.GameCenter.GcScoreData[])
extern TypeInfo* ScoreU5BU5D_t738_il2cpp_TypeInfo_var;
extern "C" void GcLeaderboard_SetScores_m2354 (GcLeaderboard_t497 * __this, GcScoreDataU5BU5D_t706* ___scoreDatas, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreU5BU5D_t738_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(934);
		s_Il2CppMethodIntialized = true;
	}
	ScoreU5BU5D_t738* V_0 = {0};
	int32_t V_1 = 0;
	{
		Leaderboard_t496 * L_0 = (__this->___m_GenericLeaderboard_1);
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		GcScoreDataU5BU5D_t706* L_1 = ___scoreDatas;
		NullCheck(L_1);
		V_0 = ((ScoreU5BU5D_t738*)SZArrayNew(ScoreU5BU5D_t738_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_1)->max_length)))));
		V_1 = 0;
		goto IL_002e;
	}

IL_001b:
	{
		ScoreU5BU5D_t738* L_2 = V_0;
		int32_t L_3 = V_1;
		GcScoreDataU5BU5D_t706* L_4 = ___scoreDatas;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		Score_t667 * L_6 = GcScoreData_ToScore_m3333(((GcScoreData_t657 *)(GcScoreData_t657 *)SZArrayLdElema(L_4, L_5)), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		ArrayElementTypeCheck (L_2, L_6);
		*((Score_t667 **)(Score_t667 **)SZArrayLdElema(L_2, L_3)) = (Score_t667 *)L_6;
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002e:
	{
		int32_t L_8 = V_1;
		GcScoreDataU5BU5D_t706* L_9 = ___scoreDatas;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		Leaderboard_t496 * L_10 = (__this->___m_GenericLeaderboard_1);
		ScoreU5BU5D_t738* L_11 = V_0;
		NullCheck(L_10);
		Leaderboard_SetScores_m3392(L_10, (IScoreU5BU5D_t60*)(IScoreU5BU5D_t60*)L_11, /*hidden argument*/NULL);
	}

IL_0043:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetLocalScore(UnityEngine.SocialPlatforms.GameCenter.GcScoreData)
extern "C" void GcLeaderboard_SetLocalScore_m2355 (GcLeaderboard_t497 * __this, GcScoreData_t657  ___scoreData, const MethodInfo* method)
{
	{
		Leaderboard_t496 * L_0 = (__this->___m_GenericLeaderboard_1);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		Leaderboard_t496 * L_1 = (__this->___m_GenericLeaderboard_1);
		Score_t667 * L_2 = GcScoreData_ToScore_m3333((&___scoreData), /*hidden argument*/NULL);
		NullCheck(L_1);
		Leaderboard_SetLocalUserScore_m3390(L_1, L_2, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetMaxRange(System.UInt32)
extern "C" void GcLeaderboard_SetMaxRange_m2356 (GcLeaderboard_t497 * __this, uint32_t ___maxRange, const MethodInfo* method)
{
	{
		Leaderboard_t496 * L_0 = (__this->___m_GenericLeaderboard_1);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Leaderboard_t496 * L_1 = (__this->___m_GenericLeaderboard_1);
		uint32_t L_2 = ___maxRange;
		NullCheck(L_1);
		Leaderboard_SetMaxRange_m3391(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetTitle(System.String)
extern "C" void GcLeaderboard_SetTitle_m2357 (GcLeaderboard_t497 * __this, String_t* ___title, const MethodInfo* method)
{
	{
		Leaderboard_t496 * L_0 = (__this->___m_GenericLeaderboard_1);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Leaderboard_t496 * L_1 = (__this->___m_GenericLeaderboard_1);
		String_t* L_2 = ___title;
		NullCheck(L_1);
		Leaderboard_SetTitle_m3393(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScores(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void GcLeaderboard_Internal_LoadScores_m2358 (GcLeaderboard_t497 * __this, String_t* ___category, int32_t ___from, int32_t ___count, int32_t ___playerScope, int32_t ___timeScope, const MethodInfo* method)
{
	typedef void (*GcLeaderboard_Internal_LoadScores_m2358_ftn) (GcLeaderboard_t497 *, String_t*, int32_t, int32_t, int32_t, int32_t);
	static GcLeaderboard_Internal_LoadScores_m2358_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_Internal_LoadScores_m2358_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScores(System.String,System.Int32,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(__this, ___category, ___from, ___count, ___playerScope, ___timeScope);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScoresWithUsers(System.String,System.Int32,System.String[])
extern "C" void GcLeaderboard_Internal_LoadScoresWithUsers_m2359 (GcLeaderboard_t497 * __this, String_t* ___category, int32_t ___timeScope, StringU5BU5D_t48* ___userIDs, const MethodInfo* method)
{
	typedef void (*GcLeaderboard_Internal_LoadScoresWithUsers_m2359_ftn) (GcLeaderboard_t497 *, String_t*, int32_t, StringU5BU5D_t48*);
	static GcLeaderboard_Internal_LoadScoresWithUsers_m2359_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_Internal_LoadScoresWithUsers_m2359_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScoresWithUsers(System.String,System.Int32,System.String[])");
	_il2cpp_icall_func(__this, ___category, ___timeScope, ___userIDs);
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Loading()
extern "C" bool GcLeaderboard_Loading_m2360 (GcLeaderboard_t497 * __this, const MethodInfo* method)
{
	typedef bool (*GcLeaderboard_Loading_m2360_ftn) (GcLeaderboard_t497 *);
	static GcLeaderboard_Loading_m2360_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_Loading_m2360_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Loading()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Dispose()
extern "C" void GcLeaderboard_Dispose_m2361 (GcLeaderboard_t497 * __this, const MethodInfo* method)
{
	typedef void (*GcLeaderboard_Dispose_m2361_ftn) (GcLeaderboard_t497 *);
	static GcLeaderboard_Dispose_m2361_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_Dispose_m2361_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Dispose()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.BoneWeight
#include "UnityEngine_UnityEngine_BoneWeight.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.BoneWeight
#include "UnityEngine_UnityEngine_BoneWeightMethodDeclarations.h"

// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"


// System.Single UnityEngine.BoneWeight::get_weight0()
extern "C" float BoneWeight_get_weight0_m2362 (BoneWeight_t498 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Weight0_0);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_weight0(System.Single)
extern "C" void BoneWeight_set_weight0_m2363 (BoneWeight_t498 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Weight0_0 = L_0;
		return;
	}
}
// System.Single UnityEngine.BoneWeight::get_weight1()
extern "C" float BoneWeight_get_weight1_m2364 (BoneWeight_t498 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Weight1_1);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_weight1(System.Single)
extern "C" void BoneWeight_set_weight1_m2365 (BoneWeight_t498 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Weight1_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.BoneWeight::get_weight2()
extern "C" float BoneWeight_get_weight2_m2366 (BoneWeight_t498 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Weight2_2);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_weight2(System.Single)
extern "C" void BoneWeight_set_weight2_m2367 (BoneWeight_t498 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Weight2_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.BoneWeight::get_weight3()
extern "C" float BoneWeight_get_weight3_m2368 (BoneWeight_t498 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Weight3_3);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_weight3(System.Single)
extern "C" void BoneWeight_set_weight3_m2369 (BoneWeight_t498 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Weight3_3 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.BoneWeight::get_boneIndex0()
extern "C" int32_t BoneWeight_get_boneIndex0_m2370 (BoneWeight_t498 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_BoneIndex0_4);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_boneIndex0(System.Int32)
extern "C" void BoneWeight_set_boneIndex0_m2371 (BoneWeight_t498 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_BoneIndex0_4 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.BoneWeight::get_boneIndex1()
extern "C" int32_t BoneWeight_get_boneIndex1_m2372 (BoneWeight_t498 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_BoneIndex1_5);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_boneIndex1(System.Int32)
extern "C" void BoneWeight_set_boneIndex1_m2373 (BoneWeight_t498 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_BoneIndex1_5 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.BoneWeight::get_boneIndex2()
extern "C" int32_t BoneWeight_get_boneIndex2_m2374 (BoneWeight_t498 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_BoneIndex2_6);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_boneIndex2(System.Int32)
extern "C" void BoneWeight_set_boneIndex2_m2375 (BoneWeight_t498 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_BoneIndex2_6 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.BoneWeight::get_boneIndex3()
extern "C" int32_t BoneWeight_get_boneIndex3_m2376 (BoneWeight_t498 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_BoneIndex3_7);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_boneIndex3(System.Int32)
extern "C" void BoneWeight_set_boneIndex3_m2377 (BoneWeight_t498 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_BoneIndex3_7 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.BoneWeight::GetHashCode()
extern "C" int32_t BoneWeight_GetHashCode_m2378 (BoneWeight_t498 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		int32_t L_0 = BoneWeight_get_boneIndex0_m2370(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Int32_GetHashCode_m3513((&V_0), /*hidden argument*/NULL);
		int32_t L_2 = BoneWeight_get_boneIndex1_m2372(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Int32_GetHashCode_m3513((&V_1), /*hidden argument*/NULL);
		int32_t L_4 = BoneWeight_get_boneIndex2_m2374(__this, /*hidden argument*/NULL);
		V_2 = L_4;
		int32_t L_5 = Int32_GetHashCode_m3513((&V_2), /*hidden argument*/NULL);
		int32_t L_6 = BoneWeight_get_boneIndex3_m2376(__this, /*hidden argument*/NULL);
		V_3 = L_6;
		int32_t L_7 = Int32_GetHashCode_m3513((&V_3), /*hidden argument*/NULL);
		float L_8 = BoneWeight_get_weight0_m2362(__this, /*hidden argument*/NULL);
		V_4 = L_8;
		int32_t L_9 = Single_GetHashCode_m3514((&V_4), /*hidden argument*/NULL);
		float L_10 = BoneWeight_get_weight1_m2364(__this, /*hidden argument*/NULL);
		V_5 = L_10;
		int32_t L_11 = Single_GetHashCode_m3514((&V_5), /*hidden argument*/NULL);
		float L_12 = BoneWeight_get_weight2_m2366(__this, /*hidden argument*/NULL);
		V_6 = L_12;
		int32_t L_13 = Single_GetHashCode_m3514((&V_6), /*hidden argument*/NULL);
		float L_14 = BoneWeight_get_weight3_m2368(__this, /*hidden argument*/NULL);
		V_7 = L_14;
		int32_t L_15 = Single_GetHashCode_m3514((&V_7), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))))^(int32_t)((int32_t)((int32_t)L_9<<(int32_t)5))))^(int32_t)((int32_t)((int32_t)L_11<<(int32_t)4))))^(int32_t)((int32_t)((int32_t)L_13>>(int32_t)4))))^(int32_t)((int32_t)((int32_t)L_15>>(int32_t)3))));
	}
}
// System.Boolean UnityEngine.BoneWeight::Equals(System.Object)
extern TypeInfo* BoneWeight_t498_il2cpp_TypeInfo_var;
extern TypeInfo* Vector4_t333_il2cpp_TypeInfo_var;
extern "C" bool BoneWeight_Equals_m2379 (BoneWeight_t498 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoneWeight_t498_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(941);
		Vector4_t333_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(663);
		s_Il2CppMethodIntialized = true;
	}
	BoneWeight_t498  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Vector4_t333  V_5 = {0};
	int32_t G_B8_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, BoneWeight_t498_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(BoneWeight_t498 *)((BoneWeight_t498 *)UnBox (L_1, BoneWeight_t498_il2cpp_TypeInfo_var))));
		int32_t L_2 = BoneWeight_get_boneIndex0_m2370(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = BoneWeight_get_boneIndex0_m2370((&V_0), /*hidden argument*/NULL);
		bool L_4 = Int32_Equals_m3515((&V_1), L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_5 = BoneWeight_get_boneIndex1_m2372(__this, /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = BoneWeight_get_boneIndex1_m2372((&V_0), /*hidden argument*/NULL);
		bool L_7 = Int32_Equals_m3515((&V_2), L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_8 = BoneWeight_get_boneIndex2_m2374(__this, /*hidden argument*/NULL);
		V_3 = L_8;
		int32_t L_9 = BoneWeight_get_boneIndex2_m2374((&V_0), /*hidden argument*/NULL);
		bool L_10 = Int32_Equals_m3515((&V_3), L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_11 = BoneWeight_get_boneIndex3_m2376(__this, /*hidden argument*/NULL);
		V_4 = L_11;
		int32_t L_12 = BoneWeight_get_boneIndex3_m2376((&V_0), /*hidden argument*/NULL);
		bool L_13 = Int32_Equals_m3515((&V_4), L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00cb;
		}
	}
	{
		float L_14 = BoneWeight_get_weight0_m2362(__this, /*hidden argument*/NULL);
		float L_15 = BoneWeight_get_weight1_m2364(__this, /*hidden argument*/NULL);
		float L_16 = BoneWeight_get_weight2_m2366(__this, /*hidden argument*/NULL);
		float L_17 = BoneWeight_get_weight3_m2368(__this, /*hidden argument*/NULL);
		Vector4__ctor_m1733((&V_5), L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		float L_18 = BoneWeight_get_weight0_m2362((&V_0), /*hidden argument*/NULL);
		float L_19 = BoneWeight_get_weight1_m2364((&V_0), /*hidden argument*/NULL);
		float L_20 = BoneWeight_get_weight2_m2366((&V_0), /*hidden argument*/NULL);
		float L_21 = BoneWeight_get_weight3_m2368((&V_0), /*hidden argument*/NULL);
		Vector4_t333  L_22 = {0};
		Vector4__ctor_m1733(&L_22, L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
		Vector4_t333  L_23 = L_22;
		Object_t * L_24 = Box(Vector4_t333_il2cpp_TypeInfo_var, &L_23);
		bool L_25 = Vector4_Equals_m2698((&V_5), L_24, /*hidden argument*/NULL);
		G_B8_0 = ((int32_t)(L_25));
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B8_0 = 0;
	}

IL_00cc:
	{
		return G_B8_0;
	}
}
// System.Boolean UnityEngine.BoneWeight::op_Equality(UnityEngine.BoneWeight,UnityEngine.BoneWeight)
extern "C" bool BoneWeight_op_Equality_m2380 (Object_t * __this /* static, unused */, BoneWeight_t498  ___lhs, BoneWeight_t498  ___rhs, const MethodInfo* method)
{
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = BoneWeight_get_boneIndex0_m2370((&___lhs), /*hidden argument*/NULL);
		int32_t L_1 = BoneWeight_get_boneIndex0_m2370((&___rhs), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_2 = BoneWeight_get_boneIndex1_m2372((&___lhs), /*hidden argument*/NULL);
		int32_t L_3 = BoneWeight_get_boneIndex1_m2372((&___rhs), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_4 = BoneWeight_get_boneIndex2_m2374((&___lhs), /*hidden argument*/NULL);
		int32_t L_5 = BoneWeight_get_boneIndex2_m2374((&___rhs), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_6 = BoneWeight_get_boneIndex3_m2376((&___lhs), /*hidden argument*/NULL);
		int32_t L_7 = BoneWeight_get_boneIndex3_m2376((&___rhs), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0095;
		}
	}
	{
		float L_8 = BoneWeight_get_weight0_m2362((&___lhs), /*hidden argument*/NULL);
		float L_9 = BoneWeight_get_weight1_m2364((&___lhs), /*hidden argument*/NULL);
		float L_10 = BoneWeight_get_weight2_m2366((&___lhs), /*hidden argument*/NULL);
		float L_11 = BoneWeight_get_weight3_m2368((&___lhs), /*hidden argument*/NULL);
		Vector4_t333  L_12 = {0};
		Vector4__ctor_m1733(&L_12, L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		float L_13 = BoneWeight_get_weight0_m2362((&___rhs), /*hidden argument*/NULL);
		float L_14 = BoneWeight_get_weight1_m2364((&___rhs), /*hidden argument*/NULL);
		float L_15 = BoneWeight_get_weight2_m2366((&___rhs), /*hidden argument*/NULL);
		float L_16 = BoneWeight_get_weight3_m2368((&___rhs), /*hidden argument*/NULL);
		Vector4_t333  L_17 = {0};
		Vector4__ctor_m1733(&L_17, L_13, L_14, L_15, L_16, /*hidden argument*/NULL);
		bool L_18 = Vector4_op_Equality_m2703(NULL /*static, unused*/, L_12, L_17, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_18));
		goto IL_0096;
	}

IL_0095:
	{
		G_B6_0 = 0;
	}

IL_0096:
	{
		return G_B6_0;
	}
}
// System.Boolean UnityEngine.BoneWeight::op_Inequality(UnityEngine.BoneWeight,UnityEngine.BoneWeight)
extern "C" bool BoneWeight_op_Inequality_m2381 (Object_t * __this /* static, unused */, BoneWeight_t498  ___lhs, BoneWeight_t498  ___rhs, const MethodInfo* method)
{
	{
		BoneWeight_t498  L_0 = ___lhs;
		BoneWeight_t498  L_1 = ___rhs;
		bool L_2 = BoneWeight_op_Equality_m2380(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_Renderer.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"



// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
extern "C" int32_t Renderer_get_sortingLayerID_m1674 (Renderer_t499 * __this, const MethodInfo* method)
{
	typedef int32_t (*Renderer_get_sortingLayerID_m1674_ftn) (Renderer_t499 *);
	static Renderer_get_sortingLayerID_m1674_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Renderer_get_sortingLayerID_m1674_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Renderer::get_sortingLayerID()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
extern "C" int32_t Renderer_get_sortingOrder_m1675 (Renderer_t499 * __this, const MethodInfo* method)
{
	typedef int32_t (*Renderer_get_sortingOrder_m1675_ftn) (Renderer_t499 *);
	static Renderer_get_sortingOrder_m1675_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Renderer_get_sortingOrder_m1675_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Renderer::get_sortingOrder()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_Screen.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"



// System.Int32 UnityEngine.Screen::get_width()
extern "C" int32_t Screen_get_width_m237 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Screen_get_width_m237_ftn) ();
	static Screen_get_width_m237_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Screen_get_width_m237_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Screen::get_width()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Screen::get_height()
extern "C" int32_t Screen_get_height_m238 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Screen_get_height_m238_ftn) ();
	static Screen_get_height_m238_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Screen_get_height_m238_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Screen::get_height()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Screen::get_dpi()
extern "C" float Screen_get_dpi_m2015 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Screen_get_dpi_m2015_ftn) ();
	static Screen_get_dpi_m2015_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Screen_get_dpi_m2015_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Screen::get_dpi()");
	return _il2cpp_icall_func();
}
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"



// System.Void UnityEngine.Texture::.ctor()
extern "C" void Texture__ctor_m2382 (Texture_t240 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2872(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Texture::Internal_GetWidth(UnityEngine.Texture)
extern "C" int32_t Texture_Internal_GetWidth_m2383 (Object_t * __this /* static, unused */, Texture_t240 * ___mono, const MethodInfo* method)
{
	typedef int32_t (*Texture_Internal_GetWidth_m2383_ftn) (Texture_t240 *);
	static Texture_Internal_GetWidth_m2383_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture_Internal_GetWidth_m2383_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture::Internal_GetWidth(UnityEngine.Texture)");
	return _il2cpp_icall_func(___mono);
}
// System.Int32 UnityEngine.Texture::Internal_GetHeight(UnityEngine.Texture)
extern "C" int32_t Texture_Internal_GetHeight_m2384 (Object_t * __this /* static, unused */, Texture_t240 * ___mono, const MethodInfo* method)
{
	typedef int32_t (*Texture_Internal_GetHeight_m2384_ftn) (Texture_t240 *);
	static Texture_Internal_GetHeight_m2384_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture_Internal_GetHeight_m2384_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture::Internal_GetHeight(UnityEngine.Texture)");
	return _il2cpp_icall_func(___mono);
}
// System.Int32 UnityEngine.Texture::get_width()
extern "C" int32_t Texture_get_width_m2385 (Texture_t240 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Texture_Internal_GetWidth_m2383(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 UnityEngine.Texture::get_height()
extern "C" int32_t Texture_get_height_m2386 (Texture_t240 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Texture_Internal_GetHeight_m2384(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"


// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" void Texture2D__ctor_m2387 (Texture2D_t193 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		s_Il2CppMethodIntialized = true;
	}
	{
		Texture__ctor_m2382(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___width;
		int32_t L_1 = ___height;
		IntPtr_t L_2 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		Texture2D_Internal_Create_m2388(NULL /*static, unused*/, __this, L_0, L_1, 5, 1, 0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Texture2D::Internal_Create(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)
extern "C" void Texture2D_Internal_Create_m2388 (Object_t * __this /* static, unused */, Texture2D_t193 * ___mono, int32_t ___width, int32_t ___height, int32_t ___format, bool ___mipmap, bool ___linear, IntPtr_t ___nativeTex, const MethodInfo* method)
{
	typedef void (*Texture2D_Internal_Create_m2388_ftn) (Texture2D_t193 *, int32_t, int32_t, int32_t, bool, bool, IntPtr_t);
	static Texture2D_Internal_Create_m2388_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_Internal_Create_m2388_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::Internal_Create(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)");
	_il2cpp_icall_func(___mono, ___width, ___height, ___format, ___mipmap, ___linear, ___nativeTex);
}
// UnityEngine.Texture2D UnityEngine.Texture2D::get_whiteTexture()
extern "C" Texture2D_t193 * Texture2D_get_whiteTexture_m1722 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Texture2D_t193 * (*Texture2D_get_whiteTexture_m1722_ftn) ();
	static Texture2D_get_whiteTexture_m1722_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_get_whiteTexture_m1722_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::get_whiteTexture()");
	return _il2cpp_icall_func();
}
// UnityEngine.Color UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)
extern "C" Color_t13  Texture2D_GetPixelBilinear_m1813 (Texture2D_t193 * __this, float ___u, float ___v, const MethodInfo* method)
{
	typedef Color_t13  (*Texture2D_GetPixelBilinear_m1813_ftn) (Texture2D_t193 *, float, float);
	static Texture2D_GetPixelBilinear_m1813_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_GetPixelBilinear_m1813_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)");
	return _il2cpp_icall_func(__this, ___u, ___v);
}
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"



// System.Int32 UnityEngine.RenderTexture::Internal_GetWidth(UnityEngine.RenderTexture)
extern "C" int32_t RenderTexture_Internal_GetWidth_m2389 (Object_t * __this /* static, unused */, RenderTexture_t501 * ___mono, const MethodInfo* method)
{
	typedef int32_t (*RenderTexture_Internal_GetWidth_m2389_ftn) (RenderTexture_t501 *);
	static RenderTexture_Internal_GetWidth_m2389_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_Internal_GetWidth_m2389_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_GetWidth(UnityEngine.RenderTexture)");
	return _il2cpp_icall_func(___mono);
}
// System.Int32 UnityEngine.RenderTexture::Internal_GetHeight(UnityEngine.RenderTexture)
extern "C" int32_t RenderTexture_Internal_GetHeight_m2390 (Object_t * __this /* static, unused */, RenderTexture_t501 * ___mono, const MethodInfo* method)
{
	typedef int32_t (*RenderTexture_Internal_GetHeight_m2390_ftn) (RenderTexture_t501 *);
	static RenderTexture_Internal_GetHeight_m2390_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_Internal_GetHeight_m2390_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_GetHeight(UnityEngine.RenderTexture)");
	return _il2cpp_icall_func(___mono);
}
// System.Int32 UnityEngine.RenderTexture::get_width()
extern "C" int32_t RenderTexture_get_width_m2391 (RenderTexture_t501 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = RenderTexture_Internal_GetWidth_m2389(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 UnityEngine.RenderTexture::get_height()
extern "C" int32_t RenderTexture_get_height_m2392 (RenderTexture_t501 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = RenderTexture_Internal_GetHeight_m2390(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.ReflectionProbe
#include "UnityEngine_UnityEngine_ReflectionProbe.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.ReflectionProbe
#include "UnityEngine_UnityEngine_ReflectionProbeMethodDeclarations.h"



// UnityEngine.GUIElement
#include "UnityEngine_UnityEngine_GUIElement.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.GUIElement
#include "UnityEngine_UnityEngine_GUIElementMethodDeclarations.h"



// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayer.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayerMethodDeclarations.h"

// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"


// UnityEngine.GUIElement UnityEngine.GUILayer::HitTest(UnityEngine.Vector3)
extern "C" GUIElement_t503 * GUILayer_HitTest_m2393 (GUILayer_t504 * __this, Vector3_t58  ___screenPosition, const MethodInfo* method)
{
	{
		GUIElement_t503 * L_0 = GUILayer_INTERNAL_CALL_HitTest_m2394(NULL /*static, unused*/, __this, (&___screenPosition), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.GUIElement UnityEngine.GUILayer::INTERNAL_CALL_HitTest(UnityEngine.GUILayer,UnityEngine.Vector3&)
extern "C" GUIElement_t503 * GUILayer_INTERNAL_CALL_HitTest_m2394 (Object_t * __this /* static, unused */, GUILayer_t504 * ___self, Vector3_t58 * ___screenPosition, const MethodInfo* method)
{
	typedef GUIElement_t503 * (*GUILayer_INTERNAL_CALL_HitTest_m2394_ftn) (GUILayer_t504 *, Vector3_t58 *);
	static GUILayer_INTERNAL_CALL_HitTest_m2394_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUILayer_INTERNAL_CALL_HitTest_m2394_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayer::INTERNAL_CALL_HitTest(UnityEngine.GUILayer,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___screenPosition);
}
// UnityEngine.GradientColorKey
#include "UnityEngine_UnityEngine_GradientColorKey.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.GradientColorKey
#include "UnityEngine_UnityEngine_GradientColorKeyMethodDeclarations.h"



// System.Void UnityEngine.GradientColorKey::.ctor(UnityEngine.Color,System.Single)
extern "C" void GradientColorKey__ctor_m2395 (GradientColorKey_t505 * __this, Color_t13  ___col, float ___time, const MethodInfo* method)
{
	{
		Color_t13  L_0 = ___col;
		__this->___color_0 = L_0;
		float L_1 = ___time;
		__this->___time_1 = L_1;
		return;
	}
}
// UnityEngine.GradientAlphaKey
#include "UnityEngine_UnityEngine_GradientAlphaKey.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.GradientAlphaKey
#include "UnityEngine_UnityEngine_GradientAlphaKeyMethodDeclarations.h"



// System.Void UnityEngine.GradientAlphaKey::.ctor(System.Single,System.Single)
extern "C" void GradientAlphaKey__ctor_m2396 (GradientAlphaKey_t506 * __this, float ___alpha, float ___time, const MethodInfo* method)
{
	{
		float L_0 = ___alpha;
		__this->___alpha_0 = L_0;
		float L_1 = ___time;
		__this->___time_1 = L_1;
		return;
	}
}
// UnityEngine.Gradient
#include "UnityEngine_UnityEngine_Gradient.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Gradient
#include "UnityEngine_UnityEngine_GradientMethodDeclarations.h"



// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m2397 (Gradient_t507 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		Gradient_Init_m2398(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m2398 (Gradient_t507 * __this, const MethodInfo* method)
{
	typedef void (*Gradient_Init_m2398_ftn) (Gradient_t507 *);
	static Gradient_Init_m2398_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Gradient_Init_m2398_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Gradient::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m2399 (Gradient_t507 * __this, const MethodInfo* method)
{
	typedef void (*Gradient_Cleanup_m2399_ftn) (Gradient_t507 *);
	static Gradient_Cleanup_m2399_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Gradient_Cleanup_m2399_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Gradient::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m2400 (Gradient_t507 * __this, const MethodInfo* method)
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
		Gradient_Cleanup_m2399(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: UnityEngine.Gradient
void Gradient_t507_marshal(const Gradient_t507& unmarshaled, Gradient_t507_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void Gradient_t507_marshal_back(const Gradient_t507_marshaled& marshaled, Gradient_t507& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.Gradient
void Gradient_t507_marshal_cleanup(Gradient_t507_marshaled& marshaled)
{
}
// UnityEngine.GUI/ScrollViewState
#include "UnityEngine_UnityEngine_GUI_ScrollViewState.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.GUI/ScrollViewState
#include "UnityEngine_UnityEngine_GUI_ScrollViewStateMethodDeclarations.h"



// System.Void UnityEngine.GUI/ScrollViewState::.ctor()
extern "C" void ScrollViewState__ctor_m2401 (ScrollViewState_t508 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUI/WindowFunction
#include "UnityEngine_UnityEngine_GUI_WindowFunction.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.GUI/WindowFunction
#include "UnityEngine_UnityEngine_GUI_WindowFunctionMethodDeclarations.h"

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UnityEngine.GUI/WindowFunction::.ctor(System.Object,System.IntPtr)
extern "C" void WindowFunction__ctor_m2402 (WindowFunction_t509 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.GUI/WindowFunction::Invoke(System.Int32)
extern "C" void WindowFunction_Invoke_m2403 (WindowFunction_t509 * __this, int32_t ___id, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		WindowFunction_Invoke_m2403((WindowFunction_t509 *)__this->___prev_9,___id, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___id, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___id,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___id, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___id,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_WindowFunction_t509(Il2CppObject* delegate, int32_t ___id)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___id' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___id);

	// Marshaling cleanup of parameter '___id' native representation

}
// System.IAsyncResult UnityEngine.GUI/WindowFunction::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t75_il2cpp_TypeInfo_var;
extern "C" Object_t * WindowFunction_BeginInvoke_m2404 (WindowFunction_t509 * __this, int32_t ___id, AsyncCallback_t224 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t75_il2cpp_TypeInfo_var, &___id);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.GUI/WindowFunction::EndInvoke(System.IAsyncResult)
extern "C" void WindowFunction_EndInvoke_m2405 (WindowFunction_t509 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUI.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"

// System.DateTime
#include "mscorlib_System_DateTime.h"
// UnityEngine.GUISkin
#include "UnityEngine_UnityEngine_GUISkin.h"
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStack.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// UnityEngine.GUILayoutOption
#include "UnityEngine_UnityEngine_GUILayoutOption.h"
// UnityEngine.GUILayoutUtility/LayoutCache
#include "UnityEngine_UnityEngine_GUILayoutUtility_LayoutCache.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_Event.h"
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventType.h"
// UnityEngine.GUIUtility
#include "UnityEngine_UnityEngine_GUIUtilityMethodDeclarations.h"
// UnityEngine.GUISkin
#include "UnityEngine_UnityEngine_GUISkinMethodDeclarations.h"
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStackMethodDeclarations.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// UnityEngine.GUILayoutUtility
#include "UnityEngine_UnityEngine_GUILayoutUtilityMethodDeclarations.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_EventMethodDeclarations.h"
// UnityEngine.GUILayout
#include "UnityEngine_UnityEngine_GUILayoutMethodDeclarations.h"


// System.Void UnityEngine.GUI::.cctor()
extern TypeInfo* GUI_t512_il2cpp_TypeInfo_var;
extern TypeInfo* GenericStack_t511_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t77_il2cpp_TypeInfo_var;
extern "C" void GUI__cctor_m2406 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(942);
		GenericStack_t511_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(943);
		DateTime_t77_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		s_Il2CppMethodIntialized = true;
	}
	{
		((GUI_t512_StaticFields*)GUI_t512_il2cpp_TypeInfo_var->static_fields)->___scrollStepSize_0 = (10.0f);
		((GUI_t512_StaticFields*)GUI_t512_il2cpp_TypeInfo_var->static_fields)->___hotTextField_2 = (-1);
		NullCheck((String_t*) &_stringLiteral137);
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, (String_t*) &_stringLiteral137);
		((GUI_t512_StaticFields*)GUI_t512_il2cpp_TypeInfo_var->static_fields)->___boxHash_5 = L_0;
		NullCheck((String_t*) &_stringLiteral138);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, (String_t*) &_stringLiteral138);
		((GUI_t512_StaticFields*)GUI_t512_il2cpp_TypeInfo_var->static_fields)->___repeatButtonHash_6 = L_1;
		NullCheck((String_t*) &_stringLiteral139);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, (String_t*) &_stringLiteral139);
		((GUI_t512_StaticFields*)GUI_t512_il2cpp_TypeInfo_var->static_fields)->___toggleHash_7 = L_2;
		NullCheck((String_t*) &_stringLiteral140);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, (String_t*) &_stringLiteral140);
		((GUI_t512_StaticFields*)GUI_t512_il2cpp_TypeInfo_var->static_fields)->___buttonGridHash_8 = L_3;
		NullCheck((String_t*) &_stringLiteral141);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, (String_t*) &_stringLiteral141);
		((GUI_t512_StaticFields*)GUI_t512_il2cpp_TypeInfo_var->static_fields)->___sliderHash_9 = L_4;
		NullCheck((String_t*) &_stringLiteral142);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, (String_t*) &_stringLiteral142);
		((GUI_t512_StaticFields*)GUI_t512_il2cpp_TypeInfo_var->static_fields)->___beginGroupHash_10 = L_5;
		NullCheck((String_t*) &_stringLiteral143);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, (String_t*) &_stringLiteral143);
		((GUI_t512_StaticFields*)GUI_t512_il2cpp_TypeInfo_var->static_fields)->___scrollviewHash_11 = L_6;
		GenericStack_t511 * L_7 = (GenericStack_t511 *)il2cpp_codegen_object_new (GenericStack_t511_il2cpp_TypeInfo_var);
		GenericStack__ctor_m3504(L_7, /*hidden argument*/NULL);
		((GUI_t512_StaticFields*)GUI_t512_il2cpp_TypeInfo_var->static_fields)->___s_ScrollViewStates_12 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t77_il2cpp_TypeInfo_var);
		DateTime_t77  L_8 = DateTime_get_Now_m3516(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUI_set_nextScrollStepTime_m2407(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern TypeInfo* GUI_t512_il2cpp_TypeInfo_var;
extern "C" void GUI_set_nextScrollStepTime_m2407 (Object_t * __this /* static, unused */, DateTime_t77  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(942);
		s_Il2CppMethodIntialized = true;
	}
	{
		DateTime_t77  L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t512_il2cpp_TypeInfo_var);
		((GUI_t512_StaticFields*)GUI_t512_il2cpp_TypeInfo_var->static_fields)->___U3CnextScrollStepTimeU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern TypeInfo* GUIUtility_t525_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t512_il2cpp_TypeInfo_var;
extern "C" void GUI_set_skin_m2408 (Object_t * __this /* static, unused */, GUISkin_t510 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t525_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(944);
		GUI_t512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(942);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t525_il2cpp_TypeInfo_var);
		GUIUtility_CheckOnGUI_m2464(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUISkin_t510 * L_0 = ___value;
		bool L_1 = Object_op_Implicit_m1569(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t525_il2cpp_TypeInfo_var);
		GUISkin_t510 * L_2 = GUIUtility_GetDefaultSkin_m2458(NULL /*static, unused*/, /*hidden argument*/NULL);
		___value = L_2;
	}

IL_0017:
	{
		GUISkin_t510 * L_3 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t512_il2cpp_TypeInfo_var);
		((GUI_t512_StaticFields*)GUI_t512_il2cpp_TypeInfo_var->static_fields)->___s_Skin_3 = L_3;
		GUISkin_t510 * L_4 = ___value;
		NullCheck(L_4);
		GUISkin_MakeCurrent_m2523(L_4, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern TypeInfo* GUIUtility_t525_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t512_il2cpp_TypeInfo_var;
extern "C" GUISkin_t510 * GUI_get_skin_m2409 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t525_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(944);
		GUI_t512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(942);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t525_il2cpp_TypeInfo_var);
		GUIUtility_CheckOnGUI_m2464(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t512_il2cpp_TypeInfo_var);
		GUISkin_t510 * L_0 = ((GUI_t512_StaticFields*)GUI_t512_il2cpp_TypeInfo_var->static_fields)->___s_Skin_3;
		return L_0;
	}
}
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C" void GUI_set_changed_m2410 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	typedef void (*GUI_set_changed_m2410_ftn) (bool);
	static GUI_set_changed_m2410_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_set_changed_m2410_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::set_changed(System.Boolean)");
	_il2cpp_icall_func(___value);
}
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern TypeInfo* GUILayoutUtility_t518_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t512_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutOptionU5BU5D_t709_il2cpp_TypeInfo_var;
extern "C" void GUI_CallWindowDelegate_m2411 (Object_t * __this /* static, unused */, WindowFunction_t509 * ___func, int32_t ___id, GUISkin_t510 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t517 * ___style, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t518_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(945);
		GUI_t512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(942);
		GUILayoutOptionU5BU5D_t709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(946);
		s_Il2CppMethodIntialized = true;
	}
	GUISkin_t510 * V_0 = {0};
	GUILayoutOptionU5BU5D_t709* V_1 = {0};
	{
		int32_t L_0 = ___id;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t518_il2cpp_TypeInfo_var);
		GUILayoutUtility_SelectIDList_m2416(NULL /*static, unused*/, L_0, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t512_il2cpp_TypeInfo_var);
		GUISkin_t510 * L_1 = GUI_get_skin_m2409(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		Event_t236 * L_2 = Event_get_current_m2593(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = Event_get_type_m2589(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_4 = ___forceRect;
		if (!L_4)
		{
			goto IL_004d;
		}
	}
	{
		GUILayoutOptionU5BU5D_t709* L_5 = ((GUILayoutOptionU5BU5D_t709*)SZArrayNew(GUILayoutOptionU5BU5D_t709_il2cpp_TypeInfo_var, 2));
		float L_6 = ___width;
		GUILayoutOption_t523 * L_7 = GUILayout_Width_m2412(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		ArrayElementTypeCheck (L_5, L_7);
		*((GUILayoutOption_t523 **)(GUILayoutOption_t523 **)SZArrayLdElema(L_5, 0)) = (GUILayoutOption_t523 *)L_7;
		GUILayoutOptionU5BU5D_t709* L_8 = L_5;
		float L_9 = ___height;
		GUILayoutOption_t523 * L_10 = GUILayout_Height_m2413(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 1);
		ArrayElementTypeCheck (L_8, L_10);
		*((GUILayoutOption_t523 **)(GUILayoutOption_t523 **)SZArrayLdElema(L_8, 1)) = (GUILayoutOption_t523 *)L_10;
		V_1 = L_8;
		int32_t L_11 = ___id;
		GUIStyle_t517 * L_12 = ___style;
		GUILayoutOptionU5BU5D_t709* L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t518_il2cpp_TypeInfo_var);
		GUILayoutUtility_BeginWindow_m2418(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/NULL);
		goto IL_0056;
	}

IL_004d:
	{
		int32_t L_14 = ___id;
		GUIStyle_t517 * L_15 = ___style;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t518_il2cpp_TypeInfo_var);
		GUILayoutUtility_BeginWindow_m2418(NULL /*static, unused*/, L_14, L_15, (GUILayoutOptionU5BU5D_t709*)(GUILayoutOptionU5BU5D_t709*)NULL, /*hidden argument*/NULL);
	}

IL_0056:
	{
		GUISkin_t510 * L_16 = ____skin;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t512_il2cpp_TypeInfo_var);
		GUI_set_skin_m2408(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		WindowFunction_t509 * L_17 = ___func;
		int32_t L_18 = ___id;
		NullCheck(L_17);
		VirtActionInvoker1< int32_t >::Invoke(10 /* System.Void UnityEngine.GUI/WindowFunction::Invoke(System.Int32) */, L_17, L_18);
		Event_t236 * L_19 = Event_get_current_m2593(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_19);
		int32_t L_20 = Event_get_type_m2589(L_19, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)8))))
		{
			goto IL_0078;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t518_il2cpp_TypeInfo_var);
		GUILayoutUtility_Layout_m2419(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0078:
	{
		GUISkin_t510 * L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t512_il2cpp_TypeInfo_var);
		GUI_set_skin_m2408(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUILayout
#include "UnityEngine_UnityEngine_GUILayout.h"
#ifndef _MSC_VER
#else
#endif

// UnityEngine.GUILayoutOption/Type
#include "UnityEngine_UnityEngine_GUILayoutOption_Type.h"
// UnityEngine.GUILayoutOption
#include "UnityEngine_UnityEngine_GUILayoutOptionMethodDeclarations.h"


// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
extern TypeInfo* Single_t345_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutOption_t523_il2cpp_TypeInfo_var;
extern "C" GUILayoutOption_t523 * GUILayout_Width_m2412 (Object_t * __this /* static, unused */, float ___width, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t345_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		GUILayoutOption_t523_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(947);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___width;
		float L_1 = L_0;
		Object_t * L_2 = Box(Single_t345_il2cpp_TypeInfo_var, &L_1);
		GUILayoutOption_t523 * L_3 = (GUILayoutOption_t523 *)il2cpp_codegen_object_new (GUILayoutOption_t523_il2cpp_TypeInfo_var);
		GUILayoutOption__ctor_m2454(L_3, 0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern TypeInfo* Single_t345_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutOption_t523_il2cpp_TypeInfo_var;
extern "C" GUILayoutOption_t523 * GUILayout_Height_m2413 (Object_t * __this /* static, unused */, float ___height, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t345_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		GUILayoutOption_t523_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(947);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___height;
		float L_1 = L_0;
		Object_t * L_2 = Box(Single_t345_il2cpp_TypeInfo_var, &L_1);
		GUILayoutOption_t523 * L_3 = (GUILayoutOption_t523 *)il2cpp_codegen_object_new (GUILayoutOption_t523_il2cpp_TypeInfo_var);
		GUILayoutOption__ctor_m2454(L_3, 1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.GUILayoutUtility/LayoutCache
#include "UnityEngine_UnityEngine_GUILayoutUtility_LayoutCacheMethodDeclarations.h"

// UnityEngine.GUILayoutGroup
#include "UnityEngine_UnityEngine_GUILayoutGroup.h"
// System.Collections.Stack
#include "mscorlib_System_Collections_Stack.h"
// UnityEngine.GUILayoutGroup
#include "UnityEngine_UnityEngine_GUILayoutGroupMethodDeclarations.h"
// System.Collections.Stack
#include "mscorlib_System_Collections_StackMethodDeclarations.h"


// System.Void UnityEngine.GUILayoutUtility/LayoutCache::.ctor()
extern TypeInfo* GUILayoutGroup_t514_il2cpp_TypeInfo_var;
extern TypeInfo* GenericStack_t511_il2cpp_TypeInfo_var;
extern "C" void LayoutCache__ctor_m2414 (LayoutCache_t515 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutGroup_t514_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(948);
		GenericStack_t511_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(943);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUILayoutGroup_t514 * L_0 = (GUILayoutGroup_t514 *)il2cpp_codegen_object_new (GUILayoutGroup_t514_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m2439(L_0, /*hidden argument*/NULL);
		__this->___topLevel_0 = L_0;
		GenericStack_t511 * L_1 = (GenericStack_t511 *)il2cpp_codegen_object_new (GenericStack_t511_il2cpp_TypeInfo_var);
		GenericStack__ctor_m3504(L_1, /*hidden argument*/NULL);
		__this->___layoutGroups_1 = L_1;
		GUILayoutGroup_t514 * L_2 = (GUILayoutGroup_t514 *)il2cpp_codegen_object_new (GUILayoutGroup_t514_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m2439(L_2, /*hidden argument*/NULL);
		__this->___windows_2 = L_2;
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		GenericStack_t511 * L_3 = (__this->___layoutGroups_1);
		GUILayoutGroup_t514 * L_4 = (__this->___topLevel_0);
		NullCheck(L_3);
		VirtActionInvoker1< Object_t * >::Invoke(17 /* System.Void System.Collections.Stack::Push(System.Object) */, L_3, L_4);
		return;
	}
}
// UnityEngine.GUILayoutUtility
#include "UnityEngine_UnityEngine_GUILayoutUtility.h"
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.GUILayoutEntry
#include "UnityEngine_UnityEngine_GUILayoutEntry.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4.h"
// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_gen_25.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4MethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.GUILayoutEntry
#include "UnityEngine_UnityEngine_GUILayoutEntryMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_gen_25MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4MethodDeclarations.h"


// System.Void UnityEngine.GUILayoutUtility::.cctor()
extern TypeInfo* Dictionary_2_t516_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutUtility_t518_il2cpp_TypeInfo_var;
extern TypeInfo* LayoutCache_t515_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3517_MethodInfo_var;
extern "C" void GUILayoutUtility__cctor_m2415 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t516_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(950);
		GUILayoutUtility_t518_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(945);
		LayoutCache_t515_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(949);
		Dictionary_2__ctor_m3517_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483946);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t516 * L_0 = (Dictionary_2_t516 *)il2cpp_codegen_object_new (Dictionary_2_t516_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3517(L_0, /*hidden argument*/Dictionary_2__ctor_m3517_MethodInfo_var);
		((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___storedLayouts_0 = L_0;
		Dictionary_2_t516 * L_1 = (Dictionary_2_t516 *)il2cpp_codegen_object_new (Dictionary_2_t516_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3517(L_1, /*hidden argument*/Dictionary_2__ctor_m3517_MethodInfo_var);
		((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___storedWindows_1 = L_1;
		LayoutCache_t515 * L_2 = (LayoutCache_t515 *)il2cpp_codegen_object_new (LayoutCache_t515_il2cpp_TypeInfo_var);
		LayoutCache__ctor_m2414(L_2, /*hidden argument*/NULL);
		((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2 = L_2;
		Rect_t230  L_3 = {0};
		Rect__ctor_m1922(&L_3, (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___kDummyRect_3 = L_3;
		return;
	}
}
// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::SelectIDList(System.Int32,System.Boolean)
extern TypeInfo* GUILayoutUtility_t518_il2cpp_TypeInfo_var;
extern TypeInfo* LayoutCache_t515_il2cpp_TypeInfo_var;
extern "C" LayoutCache_t515 * GUILayoutUtility_SelectIDList_m2416 (Object_t * __this /* static, unused */, int32_t ___instanceID, bool ___isWindow, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t518_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(945);
		LayoutCache_t515_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(949);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t516 * V_0 = {0};
	LayoutCache_t515 * V_1 = {0};
	Dictionary_2_t516 * G_B3_0 = {0};
	{
		bool L_0 = ___isWindow;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t518_il2cpp_TypeInfo_var);
		Dictionary_2_t516 * L_1 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___storedWindows_1;
		G_B3_0 = L_1;
		goto IL_0015;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t518_il2cpp_TypeInfo_var);
		Dictionary_2_t516 * L_2 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___storedLayouts_0;
		G_B3_0 = L_2;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		Dictionary_2_t516 * L_3 = V_0;
		int32_t L_4 = ___instanceID;
		NullCheck(L_3);
		bool L_5 = (bool)VirtFuncInvoker2< bool, int32_t, LayoutCache_t515 ** >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::TryGetValue(!0,!1&) */, L_3, L_4, (&V_1));
		if (L_5)
		{
			goto IL_0037;
		}
	}
	{
		LayoutCache_t515 * L_6 = (LayoutCache_t515 *)il2cpp_codegen_object_new (LayoutCache_t515_il2cpp_TypeInfo_var);
		LayoutCache__ctor_m2414(L_6, /*hidden argument*/NULL);
		V_1 = L_6;
		Dictionary_2_t516 * L_7 = V_0;
		int32_t L_8 = ___instanceID;
		LayoutCache_t515 * L_9 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< int32_t, LayoutCache_t515 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::set_Item(!0,!1) */, L_7, L_8, L_9);
		goto IL_0037;
	}

IL_0037:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t518_il2cpp_TypeInfo_var);
		LayoutCache_t515 * L_10 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t515 * L_11 = V_1;
		NullCheck(L_11);
		GUILayoutGroup_t514 * L_12 = (L_11->___topLevel_0);
		NullCheck(L_10);
		L_10->___topLevel_0 = L_12;
		LayoutCache_t515 * L_13 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t515 * L_14 = V_1;
		NullCheck(L_14);
		GenericStack_t511 * L_15 = (L_14->___layoutGroups_1);
		NullCheck(L_13);
		L_13->___layoutGroups_1 = L_15;
		LayoutCache_t515 * L_16 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t515 * L_17 = V_1;
		NullCheck(L_17);
		GUILayoutGroup_t514 * L_18 = (L_17->___windows_2);
		NullCheck(L_16);
		L_16->___windows_2 = L_18;
		LayoutCache_t515 * L_19 = V_1;
		return L_19;
	}
}
// System.Void UnityEngine.GUILayoutUtility::Begin(System.Int32)
extern TypeInfo* GUILayoutUtility_t518_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutGroup_t514_il2cpp_TypeInfo_var;
extern "C" void GUILayoutUtility_Begin_m2417 (Object_t * __this /* static, unused */, int32_t ___instanceID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t518_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(945);
		GUILayoutGroup_t514_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(948);
		s_Il2CppMethodIntialized = true;
	}
	LayoutCache_t515 * V_0 = {0};
	GUILayoutGroup_t514 * V_1 = {0};
	{
		int32_t L_0 = ___instanceID;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t518_il2cpp_TypeInfo_var);
		LayoutCache_t515 * L_1 = GUILayoutUtility_SelectIDList_m2416(NULL /*static, unused*/, L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		Event_t236 * L_2 = Event_get_current_m2593(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = Event_get_type_m2589(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_0075;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t518_il2cpp_TypeInfo_var);
		LayoutCache_t515 * L_4 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t515 * L_5 = V_0;
		GUILayoutGroup_t514 * L_6 = (GUILayoutGroup_t514 *)il2cpp_codegen_object_new (GUILayoutGroup_t514_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m2439(L_6, /*hidden argument*/NULL);
		GUILayoutGroup_t514 * L_7 = L_6;
		V_1 = L_7;
		NullCheck(L_5);
		L_5->___topLevel_0 = L_7;
		GUILayoutGroup_t514 * L_8 = V_1;
		NullCheck(L_4);
		L_4->___topLevel_0 = L_8;
		LayoutCache_t515 * L_9 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_9);
		GenericStack_t511 * L_10 = (L_9->___layoutGroups_1);
		NullCheck(L_10);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Collections.Stack::Clear() */, L_10);
		LayoutCache_t515 * L_11 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_11);
		GenericStack_t511 * L_12 = (L_11->___layoutGroups_1);
		LayoutCache_t515 * L_13 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_13);
		GUILayoutGroup_t514 * L_14 = (L_13->___topLevel_0);
		NullCheck(L_12);
		VirtActionInvoker1< Object_t * >::Invoke(17 /* System.Void System.Collections.Stack::Push(System.Object) */, L_12, L_14);
		LayoutCache_t515 * L_15 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t515 * L_16 = V_0;
		GUILayoutGroup_t514 * L_17 = (GUILayoutGroup_t514 *)il2cpp_codegen_object_new (GUILayoutGroup_t514_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m2439(L_17, /*hidden argument*/NULL);
		GUILayoutGroup_t514 * L_18 = L_17;
		V_1 = L_18;
		NullCheck(L_16);
		L_16->___windows_2 = L_18;
		GUILayoutGroup_t514 * L_19 = V_1;
		NullCheck(L_15);
		L_15->___windows_2 = L_19;
		goto IL_00a5;
	}

IL_0075:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t518_il2cpp_TypeInfo_var);
		LayoutCache_t515 * L_20 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t515 * L_21 = V_0;
		NullCheck(L_21);
		GUILayoutGroup_t514 * L_22 = (L_21->___topLevel_0);
		NullCheck(L_20);
		L_20->___topLevel_0 = L_22;
		LayoutCache_t515 * L_23 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t515 * L_24 = V_0;
		NullCheck(L_24);
		GenericStack_t511 * L_25 = (L_24->___layoutGroups_1);
		NullCheck(L_23);
		L_23->___layoutGroups_1 = L_25;
		LayoutCache_t515 * L_26 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t515 * L_27 = V_0;
		NullCheck(L_27);
		GUILayoutGroup_t514 * L_28 = (L_27->___windows_2);
		NullCheck(L_26);
		L_26->___windows_2 = L_28;
	}

IL_00a5:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::BeginWindow(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern TypeInfo* GUILayoutUtility_t518_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutGroup_t514_il2cpp_TypeInfo_var;
extern "C" void GUILayoutUtility_BeginWindow_m2418 (Object_t * __this /* static, unused */, int32_t ___windowID, GUIStyle_t517 * ___style, GUILayoutOptionU5BU5D_t709* ___options, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t518_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(945);
		GUILayoutGroup_t514_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(948);
		s_Il2CppMethodIntialized = true;
	}
	LayoutCache_t515 * V_0 = {0};
	GUILayoutGroup_t514 * V_1 = {0};
	{
		int32_t L_0 = ___windowID;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t518_il2cpp_TypeInfo_var);
		LayoutCache_t515 * L_1 = GUILayoutUtility_SelectIDList_m2416(NULL /*static, unused*/, L_0, 1, /*hidden argument*/NULL);
		V_0 = L_1;
		Event_t236 * L_2 = Event_get_current_m2593(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = Event_get_type_m2589(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_00ab;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t518_il2cpp_TypeInfo_var);
		LayoutCache_t515 * L_4 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t515 * L_5 = V_0;
		GUILayoutGroup_t514 * L_6 = (GUILayoutGroup_t514 *)il2cpp_codegen_object_new (GUILayoutGroup_t514_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m2439(L_6, /*hidden argument*/NULL);
		GUILayoutGroup_t514 * L_7 = L_6;
		V_1 = L_7;
		NullCheck(L_5);
		L_5->___topLevel_0 = L_7;
		GUILayoutGroup_t514 * L_8 = V_1;
		NullCheck(L_4);
		L_4->___topLevel_0 = L_8;
		LayoutCache_t515 * L_9 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_9);
		GUILayoutGroup_t514 * L_10 = (L_9->___topLevel_0);
		GUIStyle_t517 * L_11 = ___style;
		NullCheck(L_10);
		GUILayoutEntry_set_style_m2430(L_10, L_11, /*hidden argument*/NULL);
		LayoutCache_t515 * L_12 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_12);
		GUILayoutGroup_t514 * L_13 = (L_12->___topLevel_0);
		int32_t L_14 = ___windowID;
		NullCheck(L_13);
		L_13->___windowID_16 = L_14;
		GUILayoutOptionU5BU5D_t709* L_15 = ___options;
		if (!L_15)
		{
			goto IL_0066;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t518_il2cpp_TypeInfo_var);
		LayoutCache_t515 * L_16 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_16);
		GUILayoutGroup_t514 * L_17 = (L_16->___topLevel_0);
		GUILayoutOptionU5BU5D_t709* L_18 = ___options;
		NullCheck(L_17);
		VirtActionInvoker1< GUILayoutOptionU5BU5D_t709* >::Invoke(10 /* System.Void UnityEngine.GUILayoutGroup::ApplyOptions(UnityEngine.GUILayoutOption[]) */, L_17, L_18);
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t518_il2cpp_TypeInfo_var);
		LayoutCache_t515 * L_19 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_19);
		GenericStack_t511 * L_20 = (L_19->___layoutGroups_1);
		NullCheck(L_20);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Collections.Stack::Clear() */, L_20);
		LayoutCache_t515 * L_21 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_21);
		GenericStack_t511 * L_22 = (L_21->___layoutGroups_1);
		LayoutCache_t515 * L_23 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_23);
		GUILayoutGroup_t514 * L_24 = (L_23->___topLevel_0);
		NullCheck(L_22);
		VirtActionInvoker1< Object_t * >::Invoke(17 /* System.Void System.Collections.Stack::Push(System.Object) */, L_22, L_24);
		LayoutCache_t515 * L_25 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t515 * L_26 = V_0;
		GUILayoutGroup_t514 * L_27 = (GUILayoutGroup_t514 *)il2cpp_codegen_object_new (GUILayoutGroup_t514_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m2439(L_27, /*hidden argument*/NULL);
		GUILayoutGroup_t514 * L_28 = L_27;
		V_1 = L_28;
		NullCheck(L_26);
		L_26->___windows_2 = L_28;
		GUILayoutGroup_t514 * L_29 = V_1;
		NullCheck(L_25);
		L_25->___windows_2 = L_29;
		goto IL_00db;
	}

IL_00ab:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t518_il2cpp_TypeInfo_var);
		LayoutCache_t515 * L_30 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t515 * L_31 = V_0;
		NullCheck(L_31);
		GUILayoutGroup_t514 * L_32 = (L_31->___topLevel_0);
		NullCheck(L_30);
		L_30->___topLevel_0 = L_32;
		LayoutCache_t515 * L_33 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t515 * L_34 = V_0;
		NullCheck(L_34);
		GenericStack_t511 * L_35 = (L_34->___layoutGroups_1);
		NullCheck(L_33);
		L_33->___layoutGroups_1 = L_35;
		LayoutCache_t515 * L_36 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t515 * L_37 = V_0;
		NullCheck(L_37);
		GUILayoutGroup_t514 * L_38 = (L_37->___windows_2);
		NullCheck(L_36);
		L_36->___windows_2 = L_38;
	}

IL_00db:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::Layout()
extern TypeInfo* GUILayoutUtility_t518_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t68_il2cpp_TypeInfo_var;
extern "C" void GUILayoutUtility_Layout_m2419 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t518_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(945);
		Mathf_t68_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t518_il2cpp_TypeInfo_var);
		LayoutCache_t515 * L_0 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_0);
		GUILayoutGroup_t514 * L_1 = (L_0->___topLevel_0);
		NullCheck(L_1);
		int32_t L_2 = (L_1->___windowID_16);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_00a3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t518_il2cpp_TypeInfo_var);
		LayoutCache_t515 * L_3 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_3);
		GUILayoutGroup_t514 * L_4 = (L_3->___topLevel_0);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.GUILayoutGroup::CalcWidth() */, L_4);
		LayoutCache_t515 * L_5 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_5);
		GUILayoutGroup_t514 * L_6 = (L_5->___topLevel_0);
		int32_t L_7 = Screen_get_width_m237(NULL /*static, unused*/, /*hidden argument*/NULL);
		LayoutCache_t515 * L_8 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_8);
		GUILayoutGroup_t514 * L_9 = (L_8->___topLevel_0);
		NullCheck(L_9);
		float L_10 = (((GUILayoutEntry_t519 *)L_9)->___maxWidth_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
		float L_11 = Mathf_Min_m2014(NULL /*static, unused*/, (((float)L_7)), L_10, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single) */, L_6, (0.0f), L_11);
		LayoutCache_t515 * L_12 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_12);
		GUILayoutGroup_t514 * L_13 = (L_12->___topLevel_0);
		NullCheck(L_13);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUILayoutGroup::CalcHeight() */, L_13);
		LayoutCache_t515 * L_14 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_14);
		GUILayoutGroup_t514 * L_15 = (L_14->___topLevel_0);
		int32_t L_16 = Screen_get_height_m238(NULL /*static, unused*/, /*hidden argument*/NULL);
		LayoutCache_t515 * L_17 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_17);
		GUILayoutGroup_t514 * L_18 = (L_17->___topLevel_0);
		NullCheck(L_18);
		float L_19 = (((GUILayoutEntry_t519 *)L_18)->___maxHeight_3);
		float L_20 = Mathf_Min_m2014(NULL /*static, unused*/, (((float)L_16)), L_19, /*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single) */, L_15, (0.0f), L_20);
		LayoutCache_t515 * L_21 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_21);
		GUILayoutGroup_t514 * L_22 = (L_21->___windows_2);
		GUILayoutUtility_LayoutFreeGroup_m2421(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		goto IL_00c1;
	}

IL_00a3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t518_il2cpp_TypeInfo_var);
		LayoutCache_t515 * L_23 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_23);
		GUILayoutGroup_t514 * L_24 = (L_23->___topLevel_0);
		GUILayoutUtility_LayoutSingleGroup_m2422(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		LayoutCache_t515 * L_25 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_25);
		GUILayoutGroup_t514 * L_26 = (L_25->___windows_2);
		GUILayoutUtility_LayoutFreeGroup_m2421(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
	}

IL_00c1:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::LayoutFromEditorWindow()
extern TypeInfo* GUILayoutUtility_t518_il2cpp_TypeInfo_var;
extern "C" void GUILayoutUtility_LayoutFromEditorWindow_m2420 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t518_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(945);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t518_il2cpp_TypeInfo_var);
		LayoutCache_t515 * L_0 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_0);
		GUILayoutGroup_t514 * L_1 = (L_0->___topLevel_0);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.GUILayoutGroup::CalcWidth() */, L_1);
		LayoutCache_t515 * L_2 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_2);
		GUILayoutGroup_t514 * L_3 = (L_2->___topLevel_0);
		int32_t L_4 = Screen_get_width_m237(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single) */, L_3, (0.0f), (((float)L_4)));
		LayoutCache_t515 * L_5 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_5);
		GUILayoutGroup_t514 * L_6 = (L_5->___topLevel_0);
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUILayoutGroup::CalcHeight() */, L_6);
		LayoutCache_t515 * L_7 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_7);
		GUILayoutGroup_t514 * L_8 = (L_7->___topLevel_0);
		int32_t L_9 = Screen_get_height_m238(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single) */, L_8, (0.0f), (((float)L_9)));
		LayoutCache_t515 * L_10 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_10);
		GUILayoutGroup_t514 * L_11 = (L_10->___windows_2);
		GUILayoutUtility_LayoutFreeGroup_m2421(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::LayoutFreeGroup(UnityEngine.GUILayoutGroup)
extern TypeInfo* GUILayoutGroup_t514_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutUtility_t518_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t740_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t69_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3518_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3519_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3520_MethodInfo_var;
extern "C" void GUILayoutUtility_LayoutFreeGroup_m2421 (Object_t * __this /* static, unused */, GUILayoutGroup_t514 * ___toplevel, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutGroup_t514_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(948);
		GUILayoutUtility_t518_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(945);
		Enumerator_t740_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(952);
		IDisposable_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		List_1_GetEnumerator_m3518_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483947);
		Enumerator_get_Current_m3519_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483948);
		Enumerator_MoveNext_m3520_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483949);
		s_Il2CppMethodIntialized = true;
	}
	GUILayoutGroup_t514 * V_0 = {0};
	Enumerator_t740  V_1 = {0};
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		GUILayoutGroup_t514 * L_0 = ___toplevel;
		NullCheck(L_0);
		List_1_t520 * L_1 = (L_0->___entries_10);
		NullCheck(L_1);
		Enumerator_t740  L_2 = List_1_GetEnumerator_m3518(L_1, /*hidden argument*/List_1_GetEnumerator_m3518_MethodInfo_var);
		V_1 = L_2;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0024;
		}

IL_0011:
		{
			GUILayoutEntry_t519 * L_3 = Enumerator_get_Current_m3519((&V_1), /*hidden argument*/Enumerator_get_Current_m3519_MethodInfo_var);
			V_0 = ((GUILayoutGroup_t514 *)Castclass(L_3, GUILayoutGroup_t514_il2cpp_TypeInfo_var));
			GUILayoutGroup_t514 * L_4 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t518_il2cpp_TypeInfo_var);
			GUILayoutUtility_LayoutSingleGroup_m2422(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		}

IL_0024:
		{
			bool L_5 = Enumerator_MoveNext_m3520((&V_1), /*hidden argument*/Enumerator_MoveNext_m3520_MethodInfo_var);
			if (L_5)
			{
				goto IL_0011;
			}
		}

IL_0030:
		{
			IL2CPP_LEAVE(0x41, FINALLY_0035);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_0035;
	}

FINALLY_0035:
	{ // begin finally (depth: 1)
		Enumerator_t740  L_6 = V_1;
		Enumerator_t740  L_7 = L_6;
		Object_t * L_8 = Box(Enumerator_t740_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_8);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t69_il2cpp_TypeInfo_var, L_8);
		IL2CPP_END_FINALLY(53)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(53)
	{
		IL2CPP_JUMP_TBL(0x41, IL_0041)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_0041:
	{
		GUILayoutGroup_t514 * L_9 = ___toplevel;
		NullCheck(L_9);
		GUILayoutGroup_ResetCursor_m2443(L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::LayoutSingleGroup(UnityEngine.GUILayoutGroup)
extern TypeInfo* Mathf_t68_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutUtility_t518_il2cpp_TypeInfo_var;
extern "C" void GUILayoutUtility_LayoutSingleGroup_m2422 (Object_t * __this /* static, unused */, GUILayoutGroup_t514 * ___i, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t68_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		GUILayoutUtility_t518_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(945);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Rect_t230  V_4 = {0};
	{
		GUILayoutGroup_t514 * L_0 = ___i;
		NullCheck(L_0);
		bool L_1 = (L_0->___isWindow_15);
		if (L_1)
		{
			goto IL_0074;
		}
	}
	{
		GUILayoutGroup_t514 * L_2 = ___i;
		NullCheck(L_2);
		float L_3 = (((GUILayoutEntry_t519 *)L_2)->___minWidth_0);
		V_0 = L_3;
		GUILayoutGroup_t514 * L_4 = ___i;
		NullCheck(L_4);
		float L_5 = (((GUILayoutEntry_t519 *)L_4)->___maxWidth_1);
		V_1 = L_5;
		GUILayoutGroup_t514 * L_6 = ___i;
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.GUILayoutGroup::CalcWidth() */, L_6);
		GUILayoutGroup_t514 * L_7 = ___i;
		GUILayoutGroup_t514 * L_8 = ___i;
		NullCheck(L_8);
		Rect_t230 * L_9 = &(((GUILayoutEntry_t519 *)L_8)->___rect_4);
		float L_10 = Rect_get_x_m1731(L_9, /*hidden argument*/NULL);
		GUILayoutGroup_t514 * L_11 = ___i;
		NullCheck(L_11);
		float L_12 = (((GUILayoutEntry_t519 *)L_11)->___maxWidth_1);
		float L_13 = V_0;
		float L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
		float L_15 = Mathf_Clamp_m1786(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single) */, L_7, L_10, L_15);
		GUILayoutGroup_t514 * L_16 = ___i;
		NullCheck(L_16);
		float L_17 = (((GUILayoutEntry_t519 *)L_16)->___minHeight_2);
		V_2 = L_17;
		GUILayoutGroup_t514 * L_18 = ___i;
		NullCheck(L_18);
		float L_19 = (((GUILayoutEntry_t519 *)L_18)->___maxHeight_3);
		V_3 = L_19;
		GUILayoutGroup_t514 * L_20 = ___i;
		NullCheck(L_20);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUILayoutGroup::CalcHeight() */, L_20);
		GUILayoutGroup_t514 * L_21 = ___i;
		GUILayoutGroup_t514 * L_22 = ___i;
		NullCheck(L_22);
		Rect_t230 * L_23 = &(((GUILayoutEntry_t519 *)L_22)->___rect_4);
		float L_24 = Rect_get_y_m1732(L_23, /*hidden argument*/NULL);
		GUILayoutGroup_t514 * L_25 = ___i;
		NullCheck(L_25);
		float L_26 = (((GUILayoutEntry_t519 *)L_25)->___maxHeight_3);
		float L_27 = V_2;
		float L_28 = V_3;
		float L_29 = Mathf_Clamp_m1786(NULL /*static, unused*/, L_26, L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_21);
		VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single) */, L_21, L_24, L_29);
		goto IL_00e8;
	}

IL_0074:
	{
		GUILayoutGroup_t514 * L_30 = ___i;
		NullCheck(L_30);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.GUILayoutGroup::CalcWidth() */, L_30);
		GUILayoutGroup_t514 * L_31 = ___i;
		NullCheck(L_31);
		int32_t L_32 = (L_31->___windowID_16);
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t518_il2cpp_TypeInfo_var);
		Rect_t230  L_33 = GUILayoutUtility_Internal_GetWindowRect_m2423(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		V_4 = L_33;
		GUILayoutGroup_t514 * L_34 = ___i;
		float L_35 = Rect_get_x_m1731((&V_4), /*hidden argument*/NULL);
		float L_36 = Rect_get_width_m1726((&V_4), /*hidden argument*/NULL);
		GUILayoutGroup_t514 * L_37 = ___i;
		NullCheck(L_37);
		float L_38 = (((GUILayoutEntry_t519 *)L_37)->___minWidth_0);
		GUILayoutGroup_t514 * L_39 = ___i;
		NullCheck(L_39);
		float L_40 = (((GUILayoutEntry_t519 *)L_39)->___maxWidth_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
		float L_41 = Mathf_Clamp_m1786(NULL /*static, unused*/, L_36, L_38, L_40, /*hidden argument*/NULL);
		NullCheck(L_34);
		VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single) */, L_34, L_35, L_41);
		GUILayoutGroup_t514 * L_42 = ___i;
		NullCheck(L_42);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUILayoutGroup::CalcHeight() */, L_42);
		GUILayoutGroup_t514 * L_43 = ___i;
		float L_44 = Rect_get_y_m1732((&V_4), /*hidden argument*/NULL);
		float L_45 = Rect_get_height_m1727((&V_4), /*hidden argument*/NULL);
		GUILayoutGroup_t514 * L_46 = ___i;
		NullCheck(L_46);
		float L_47 = (((GUILayoutEntry_t519 *)L_46)->___minHeight_2);
		GUILayoutGroup_t514 * L_48 = ___i;
		NullCheck(L_48);
		float L_49 = (((GUILayoutEntry_t519 *)L_48)->___maxHeight_3);
		float L_50 = Mathf_Clamp_m1786(NULL /*static, unused*/, L_45, L_47, L_49, /*hidden argument*/NULL);
		NullCheck(L_43);
		VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single) */, L_43, L_44, L_50);
		GUILayoutGroup_t514 * L_51 = ___i;
		NullCheck(L_51);
		int32_t L_52 = (L_51->___windowID_16);
		GUILayoutGroup_t514 * L_53 = ___i;
		NullCheck(L_53);
		Rect_t230  L_54 = (((GUILayoutEntry_t519 *)L_53)->___rect_4);
		GUILayoutUtility_Internal_MoveWindow_m2424(NULL /*static, unused*/, L_52, L_54, /*hidden argument*/NULL);
	}

IL_00e8:
	{
		return;
	}
}
// UnityEngine.Rect UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)
extern "C" Rect_t230  GUILayoutUtility_Internal_GetWindowRect_m2423 (Object_t * __this /* static, unused */, int32_t ___windowID, const MethodInfo* method)
{
	typedef Rect_t230  (*GUILayoutUtility_Internal_GetWindowRect_m2423_ftn) (int32_t);
	static GUILayoutUtility_Internal_GetWindowRect_m2423_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUILayoutUtility_Internal_GetWindowRect_m2423_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)");
	return _il2cpp_icall_func(___windowID);
}
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow(System.Int32,UnityEngine.Rect)
extern TypeInfo* GUILayoutUtility_t518_il2cpp_TypeInfo_var;
extern "C" void GUILayoutUtility_Internal_MoveWindow_m2424 (Object_t * __this /* static, unused */, int32_t ___windowID, Rect_t230  ___r, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t518_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(945);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___windowID;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t518_il2cpp_TypeInfo_var);
		GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m2425(NULL /*static, unused*/, L_0, (&___r), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_MoveWindow(System.Int32,UnityEngine.Rect&)
extern "C" void GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m2425 (Object_t * __this /* static, unused */, int32_t ___windowID, Rect_t230 * ___r, const MethodInfo* method)
{
	typedef void (*GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m2425_ftn) (int32_t, Rect_t230 *);
	static GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m2425_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m2425_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_MoveWindow(System.Int32,UnityEngine.Rect&)");
	_il2cpp_icall_func(___windowID, ___r);
}
// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::get_spaceStyle()
extern TypeInfo* GUILayoutUtility_t518_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t517_il2cpp_TypeInfo_var;
extern "C" GUIStyle_t517 * GUILayoutUtility_get_spaceStyle_m2426 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t518_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(945);
		GUIStyle_t517_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(953);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t518_il2cpp_TypeInfo_var);
		GUIStyle_t517 * L_0 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___s_SpaceStyle_4;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		GUIStyle_t517 * L_1 = (GUIStyle_t517 *)il2cpp_codegen_object_new (GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2551(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t518_il2cpp_TypeInfo_var);
		((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___s_SpaceStyle_4 = L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t518_il2cpp_TypeInfo_var);
		GUIStyle_t517 * L_2 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___s_SpaceStyle_4;
		NullCheck(L_2);
		GUIStyle_set_stretchWidth_m2566(L_2, 0, /*hidden argument*/NULL);
		GUIStyle_t517 * L_3 = ((GUILayoutUtility_t518_StaticFields*)GUILayoutUtility_t518_il2cpp_TypeInfo_var->static_fields)->___s_SpaceStyle_4;
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffset.h"
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"


// System.Void UnityEngine.GUILayoutEntry::.ctor(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern TypeInfo* GUIStyle_t517_il2cpp_TypeInfo_var;
extern "C" void GUILayoutEntry__ctor_m2427 (GUILayoutEntry_t519 * __this, float ____minWidth, float ____maxWidth, float ____minHeight, float ____maxHeight, GUIStyle_t517 * ____style, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t517_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(953);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rect_t230  L_0 = {0};
		Rect__ctor_m1922(&L_0, (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___rect_4 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle_t517 * L_1 = GUIStyle_get_none_m2572(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___m_Style_7 = L_1;
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		float L_2 = ____minWidth;
		__this->___minWidth_0 = L_2;
		float L_3 = ____maxWidth;
		__this->___maxWidth_1 = L_3;
		float L_4 = ____minHeight;
		__this->___minHeight_2 = L_4;
		float L_5 = ____maxHeight;
		__this->___maxHeight_3 = L_5;
		GUIStyle_t517 * L_6 = ____style;
		if (L_6)
		{
			goto IL_005b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle_t517 * L_7 = GUIStyle_get_none_m2572(NULL /*static, unused*/, /*hidden argument*/NULL);
		____style = L_7;
	}

IL_005b:
	{
		GUIStyle_t517 * L_8 = ____style;
		GUILayoutEntry_set_style_m2430(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::.cctor()
extern TypeInfo* GUILayoutEntry_t519_il2cpp_TypeInfo_var;
extern "C" void GUILayoutEntry__cctor_m2428 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutEntry_t519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(951);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rect_t230  L_0 = {0};
		Rect__ctor_m1922(&L_0, (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		((GUILayoutEntry_t519_StaticFields*)GUILayoutEntry_t519_il2cpp_TypeInfo_var->static_fields)->___kDummyRect_8 = L_0;
		((GUILayoutEntry_t519_StaticFields*)GUILayoutEntry_t519_il2cpp_TypeInfo_var->static_fields)->___indent_9 = 0;
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::get_style()
extern "C" GUIStyle_t517 * GUILayoutEntry_get_style_m2429 (GUILayoutEntry_t519 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = (__this->___m_Style_7);
		return L_0;
	}
}
// System.Void UnityEngine.GUILayoutEntry::set_style(UnityEngine.GUIStyle)
extern "C" void GUILayoutEntry_set_style_m2430 (GUILayoutEntry_t519 * __this, GUIStyle_t517 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = ___value;
		__this->___m_Style_7 = L_0;
		GUIStyle_t517 * L_1 = ___value;
		VirtActionInvoker1< GUIStyle_t517 * >::Invoke(9 /* System.Void UnityEngine.GUILayoutEntry::ApplyStyleSettings(UnityEngine.GUIStyle) */, __this, L_1);
		return;
	}
}
// UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin()
extern "C" RectOffset_t291 * GUILayoutEntry_get_margin_m2431 (GUILayoutEntry_t519 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = GUILayoutEntry_get_style_m2429(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectOffset_t291 * L_1 = GUIStyle_get_margin_m2560(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.GUILayoutEntry::CalcWidth()
extern "C" void GUILayoutEntry_CalcWidth_m2432 (GUILayoutEntry_t519 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::CalcHeight()
extern "C" void GUILayoutEntry_CalcHeight_m2433 (GUILayoutEntry_t519 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single)
extern "C" void GUILayoutEntry_SetHorizontal_m2434 (GUILayoutEntry_t519 * __this, float ___x, float ___width, const MethodInfo* method)
{
	{
		Rect_t230 * L_0 = &(__this->___rect_4);
		float L_1 = ___x;
		Rect_set_x_m1794(L_0, L_1, /*hidden argument*/NULL);
		Rect_t230 * L_2 = &(__this->___rect_4);
		float L_3 = ___width;
		Rect_set_width_m1793(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single)
extern "C" void GUILayoutEntry_SetVertical_m2435 (GUILayoutEntry_t519 * __this, float ___y, float ___height, const MethodInfo* method)
{
	{
		Rect_t230 * L_0 = &(__this->___rect_4);
		float L_1 = ___y;
		Rect_set_y_m1792(L_0, L_1, /*hidden argument*/NULL);
		Rect_t230 * L_2 = &(__this->___rect_4);
		float L_3 = ___height;
		Rect_set_height_m1790(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::ApplyStyleSettings(UnityEngine.GUIStyle)
extern "C" void GUILayoutEntry_ApplyStyleSettings_m2436 (GUILayoutEntry_t519 * __this, GUIStyle_t517 * ___style, const MethodInfo* method)
{
	GUILayoutEntry_t519 * G_B3_0 = {0};
	GUILayoutEntry_t519 * G_B1_0 = {0};
	GUILayoutEntry_t519 * G_B2_0 = {0};
	int32_t G_B4_0 = 0;
	GUILayoutEntry_t519 * G_B4_1 = {0};
	GUILayoutEntry_t519 * G_B7_0 = {0};
	GUILayoutEntry_t519 * G_B5_0 = {0};
	GUILayoutEntry_t519 * G_B6_0 = {0};
	int32_t G_B8_0 = 0;
	GUILayoutEntry_t519 * G_B8_1 = {0};
	{
		GUIStyle_t517 * L_0 = ___style;
		NullCheck(L_0);
		float L_1 = GUIStyle_get_fixedWidth_m2563(L_0, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			G_B3_0 = __this;
			goto IL_0022;
		}
	}
	{
		GUIStyle_t517 * L_2 = ___style;
		NullCheck(L_2);
		bool L_3 = GUIStyle_get_stretchWidth_m2565(L_2, /*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
		if (!L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_0022;
		}
	}
	{
		G_B4_0 = 1;
		G_B4_1 = G_B2_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0023:
	{
		NullCheck(G_B4_1);
		G_B4_1->___stretchWidth_5 = G_B4_0;
		GUIStyle_t517 * L_4 = ___style;
		NullCheck(L_4);
		float L_5 = GUIStyle_get_fixedHeight_m2564(L_4, /*hidden argument*/NULL);
		G_B5_0 = __this;
		if ((!(((float)L_5) == ((float)(0.0f)))))
		{
			G_B7_0 = __this;
			goto IL_004a;
		}
	}
	{
		GUIStyle_t517 * L_6 = ___style;
		NullCheck(L_6);
		bool L_7 = GUIStyle_get_stretchHeight_m2567(L_6, /*hidden argument*/NULL);
		G_B6_0 = G_B5_0;
		if (!L_7)
		{
			G_B7_0 = G_B5_0;
			goto IL_004a;
		}
	}
	{
		G_B8_0 = 1;
		G_B8_1 = G_B6_0;
		goto IL_004b;
	}

IL_004a:
	{
		G_B8_0 = 0;
		G_B8_1 = G_B7_0;
	}

IL_004b:
	{
		NullCheck(G_B8_1);
		G_B8_1->___stretchHeight_6 = G_B8_0;
		GUIStyle_t517 * L_8 = ___style;
		__this->___m_Style_7 = L_8;
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::ApplyOptions(UnityEngine.GUILayoutOption[])
extern TypeInfo* Single_t345_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t75_il2cpp_TypeInfo_var;
extern "C" void GUILayoutEntry_ApplyOptions_m2437 (GUILayoutEntry_t519 * __this, GUILayoutOptionU5BU5D_t709* ___options, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t345_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		Int32_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	GUILayoutOption_t523 * V_0 = {0};
	GUILayoutOptionU5BU5D_t709* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = {0};
	float V_4 = 0.0f;
	{
		GUILayoutOptionU5BU5D_t709* L_0 = ___options;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		GUILayoutOptionU5BU5D_t709* L_1 = ___options;
		V_1 = L_1;
		V_2 = 0;
		goto IL_01a0;
	}

IL_0010:
	{
		GUILayoutOptionU5BU5D_t709* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(GUILayoutOption_t523 **)(GUILayoutOption_t523 **)SZArrayLdElema(L_2, L_4));
		GUILayoutOption_t523 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = (L_5->___type_0);
		V_3 = L_6;
		int32_t L_7 = V_3;
		if (L_7 == 0)
		{
			goto IL_0046;
		}
		if (L_7 == 1)
		{
			goto IL_006e;
		}
		if (L_7 == 2)
		{
			goto IL_0096;
		}
		if (L_7 == 3)
		{
			goto IL_00c9;
		}
		if (L_7 == 4)
		{
			goto IL_0103;
		}
		if (L_7 == 5)
		{
			goto IL_0136;
		}
		if (L_7 == 6)
		{
			goto IL_0170;
		}
		if (L_7 == 7)
		{
			goto IL_0186;
		}
	}
	{
		goto IL_019c;
	}

IL_0046:
	{
		GUILayoutOption_t523 * L_8 = V_0;
		NullCheck(L_8);
		Object_t * L_9 = (L_8->___value_1);
		float L_10 = ((*(float*)((float*)UnBox (L_9, Single_t345_il2cpp_TypeInfo_var))));
		V_4 = L_10;
		__this->___maxWidth_1 = L_10;
		float L_11 = V_4;
		__this->___minWidth_0 = L_11;
		__this->___stretchWidth_5 = 0;
		goto IL_019c;
	}

IL_006e:
	{
		GUILayoutOption_t523 * L_12 = V_0;
		NullCheck(L_12);
		Object_t * L_13 = (L_12->___value_1);
		float L_14 = ((*(float*)((float*)UnBox (L_13, Single_t345_il2cpp_TypeInfo_var))));
		V_4 = L_14;
		__this->___maxHeight_3 = L_14;
		float L_15 = V_4;
		__this->___minHeight_2 = L_15;
		__this->___stretchHeight_6 = 0;
		goto IL_019c;
	}

IL_0096:
	{
		GUILayoutOption_t523 * L_16 = V_0;
		NullCheck(L_16);
		Object_t * L_17 = (L_16->___value_1);
		__this->___minWidth_0 = ((*(float*)((float*)UnBox (L_17, Single_t345_il2cpp_TypeInfo_var))));
		float L_18 = (__this->___maxWidth_1);
		float L_19 = (__this->___minWidth_0);
		if ((!(((float)L_18) < ((float)L_19))))
		{
			goto IL_00c4;
		}
	}
	{
		float L_20 = (__this->___minWidth_0);
		__this->___maxWidth_1 = L_20;
	}

IL_00c4:
	{
		goto IL_019c;
	}

IL_00c9:
	{
		GUILayoutOption_t523 * L_21 = V_0;
		NullCheck(L_21);
		Object_t * L_22 = (L_21->___value_1);
		__this->___maxWidth_1 = ((*(float*)((float*)UnBox (L_22, Single_t345_il2cpp_TypeInfo_var))));
		float L_23 = (__this->___minWidth_0);
		float L_24 = (__this->___maxWidth_1);
		if ((!(((float)L_23) > ((float)L_24))))
		{
			goto IL_00f7;
		}
	}
	{
		float L_25 = (__this->___maxWidth_1);
		__this->___minWidth_0 = L_25;
	}

IL_00f7:
	{
		__this->___stretchWidth_5 = 0;
		goto IL_019c;
	}

IL_0103:
	{
		GUILayoutOption_t523 * L_26 = V_0;
		NullCheck(L_26);
		Object_t * L_27 = (L_26->___value_1);
		__this->___minHeight_2 = ((*(float*)((float*)UnBox (L_27, Single_t345_il2cpp_TypeInfo_var))));
		float L_28 = (__this->___maxHeight_3);
		float L_29 = (__this->___minHeight_2);
		if ((!(((float)L_28) < ((float)L_29))))
		{
			goto IL_0131;
		}
	}
	{
		float L_30 = (__this->___minHeight_2);
		__this->___maxHeight_3 = L_30;
	}

IL_0131:
	{
		goto IL_019c;
	}

IL_0136:
	{
		GUILayoutOption_t523 * L_31 = V_0;
		NullCheck(L_31);
		Object_t * L_32 = (L_31->___value_1);
		__this->___maxHeight_3 = ((*(float*)((float*)UnBox (L_32, Single_t345_il2cpp_TypeInfo_var))));
		float L_33 = (__this->___minHeight_2);
		float L_34 = (__this->___maxHeight_3);
		if ((!(((float)L_33) > ((float)L_34))))
		{
			goto IL_0164;
		}
	}
	{
		float L_35 = (__this->___maxHeight_3);
		__this->___minHeight_2 = L_35;
	}

IL_0164:
	{
		__this->___stretchHeight_6 = 0;
		goto IL_019c;
	}

IL_0170:
	{
		GUILayoutOption_t523 * L_36 = V_0;
		NullCheck(L_36);
		Object_t * L_37 = (L_36->___value_1);
		__this->___stretchWidth_5 = ((*(int32_t*)((int32_t*)UnBox (L_37, Int32_t75_il2cpp_TypeInfo_var))));
		goto IL_019c;
	}

IL_0186:
	{
		GUILayoutOption_t523 * L_38 = V_0;
		NullCheck(L_38);
		Object_t * L_39 = (L_38->___value_1);
		__this->___stretchHeight_6 = ((*(int32_t*)((int32_t*)UnBox (L_39, Int32_t75_il2cpp_TypeInfo_var))));
		goto IL_019c;
	}

IL_019c:
	{
		int32_t L_40 = V_2;
		V_2 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_01a0:
	{
		int32_t L_41 = V_2;
		GUILayoutOptionU5BU5D_t709* L_42 = V_1;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)(((int32_t)(((Array_t *)L_42)->max_length))))))
		{
			goto IL_0010;
		}
	}
	{
		float L_43 = (__this->___maxWidth_1);
		if ((((float)L_43) == ((float)(0.0f))))
		{
			goto IL_01d6;
		}
	}
	{
		float L_44 = (__this->___maxWidth_1);
		float L_45 = (__this->___minWidth_0);
		if ((!(((float)L_44) < ((float)L_45))))
		{
			goto IL_01d6;
		}
	}
	{
		float L_46 = (__this->___minWidth_0);
		__this->___maxWidth_1 = L_46;
	}

IL_01d6:
	{
		float L_47 = (__this->___maxHeight_3);
		if ((((float)L_47) == ((float)(0.0f))))
		{
			goto IL_0203;
		}
	}
	{
		float L_48 = (__this->___maxHeight_3);
		float L_49 = (__this->___minHeight_2);
		if ((!(((float)L_48) < ((float)L_49))))
		{
			goto IL_0203;
		}
	}
	{
		float L_50 = (__this->___minHeight_2);
		__this->___maxHeight_3 = L_50;
	}

IL_0203:
	{
		return;
	}
}
// System.String UnityEngine.GUILayoutEntry::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutEntry_t519_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t345_il2cpp_TypeInfo_var;
extern "C" String_t* GUILayoutEntry_ToString_m2438 (GUILayoutEntry_t519 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		GUILayoutEntry_t519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(951);
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		Single_t345_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t73* G_B5_1 = {0};
	ObjectU5BU5D_t73* G_B5_2 = {0};
	String_t* G_B5_3 = {0};
	int32_t G_B5_4 = 0;
	ObjectU5BU5D_t73* G_B5_5 = {0};
	ObjectU5BU5D_t73* G_B5_6 = {0};
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t73* G_B4_1 = {0};
	ObjectU5BU5D_t73* G_B4_2 = {0};
	String_t* G_B4_3 = {0};
	int32_t G_B4_4 = 0;
	ObjectU5BU5D_t73* G_B4_5 = {0};
	ObjectU5BU5D_t73* G_B4_6 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t73* G_B6_2 = {0};
	ObjectU5BU5D_t73* G_B6_3 = {0};
	String_t* G_B6_4 = {0};
	int32_t G_B6_5 = 0;
	ObjectU5BU5D_t73* G_B6_6 = {0};
	ObjectU5BU5D_t73* G_B6_7 = {0};
	int32_t G_B8_0 = 0;
	ObjectU5BU5D_t73* G_B8_1 = {0};
	ObjectU5BU5D_t73* G_B8_2 = {0};
	int32_t G_B7_0 = 0;
	ObjectU5BU5D_t73* G_B7_1 = {0};
	ObjectU5BU5D_t73* G_B7_2 = {0};
	String_t* G_B9_0 = {0};
	int32_t G_B9_1 = 0;
	ObjectU5BU5D_t73* G_B9_2 = {0};
	ObjectU5BU5D_t73* G_B9_3 = {0};
	int32_t G_B11_0 = 0;
	ObjectU5BU5D_t73* G_B11_1 = {0};
	ObjectU5BU5D_t73* G_B11_2 = {0};
	int32_t G_B10_0 = 0;
	ObjectU5BU5D_t73* G_B10_1 = {0};
	ObjectU5BU5D_t73* G_B10_2 = {0};
	String_t* G_B12_0 = {0};
	int32_t G_B12_1 = 0;
	ObjectU5BU5D_t73* G_B12_2 = {0};
	ObjectU5BU5D_t73* G_B12_3 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		V_1 = 0;
		goto IL_001d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m351(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral23, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_1;
		V_1 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_001d:
	{
		int32_t L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutEntry_t519_il2cpp_TypeInfo_var);
		int32_t L_5 = ((GUILayoutEntry_t519_StaticFields*)GUILayoutEntry_t519_il2cpp_TypeInfo_var->static_fields)->___indent_9;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_000d;
		}
	}
	{
		ObjectU5BU5D_t73* L_6 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, ((int32_t)12)));
		String_t* L_7 = V_0;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 0)) = (Object_t *)L_7;
		ObjectU5BU5D_t73* L_8 = L_6;
		ObjectU5BU5D_t73* L_9 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 6));
		GUIStyle_t517 * L_10 = GUILayoutEntry_get_style_m2429(__this, /*hidden argument*/NULL);
		G_B4_0 = 0;
		G_B4_1 = L_9;
		G_B4_2 = L_9;
		G_B4_3 = (String_t*) &_stringLiteral144;
		G_B4_4 = 1;
		G_B4_5 = L_8;
		G_B4_6 = L_8;
		if (!L_10)
		{
			G_B5_0 = 0;
			G_B5_1 = L_9;
			G_B5_2 = L_9;
			G_B5_3 = (String_t*) &_stringLiteral144;
			G_B5_4 = 1;
			G_B5_5 = L_8;
			G_B5_6 = L_8;
			goto IL_005d;
		}
	}
	{
		GUIStyle_t517 * L_11 = GUILayoutEntry_get_style_m2429(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12 = GUIStyle_get_name_m2556(L_11, /*hidden argument*/NULL);
		G_B6_0 = L_12;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		G_B6_5 = G_B4_4;
		G_B6_6 = G_B4_5;
		G_B6_7 = G_B4_6;
		goto IL_0062;
	}

IL_005d:
	{
		G_B6_0 = (String_t*) &_stringLiteral145;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
		G_B6_5 = G_B5_4;
		G_B6_6 = G_B5_5;
		G_B6_7 = G_B5_6;
	}

IL_0062:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B6_2, G_B6_1)) = (Object_t *)G_B6_0;
		ObjectU5BU5D_t73* L_13 = G_B6_3;
		Type_t * L_14 = Object_GetType_m1633(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 1);
		ArrayElementTypeCheck (L_13, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 1)) = (Object_t *)L_14;
		ObjectU5BU5D_t73* L_15 = L_13;
		Rect_t230 * L_16 = &(__this->___rect_4);
		float L_17 = Rect_get_x_m1731(L_16, /*hidden argument*/NULL);
		float L_18 = L_17;
		Object_t * L_19 = Box(Single_t345_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 2);
		ArrayElementTypeCheck (L_15, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_15, 2)) = (Object_t *)L_19;
		ObjectU5BU5D_t73* L_20 = L_15;
		Rect_t230 * L_21 = &(__this->___rect_4);
		float L_22 = Rect_get_xMax_m1811(L_21, /*hidden argument*/NULL);
		float L_23 = L_22;
		Object_t * L_24 = Box(Single_t345_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 3);
		ArrayElementTypeCheck (L_20, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 3)) = (Object_t *)L_24;
		ObjectU5BU5D_t73* L_25 = L_20;
		Rect_t230 * L_26 = &(__this->___rect_4);
		float L_27 = Rect_get_y_m1732(L_26, /*hidden argument*/NULL);
		float L_28 = L_27;
		Object_t * L_29 = Box(Single_t345_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 4);
		ArrayElementTypeCheck (L_25, L_29);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_25, 4)) = (Object_t *)L_29;
		ObjectU5BU5D_t73* L_30 = L_25;
		Rect_t230 * L_31 = &(__this->___rect_4);
		float L_32 = Rect_get_yMax_m1812(L_31, /*hidden argument*/NULL);
		float L_33 = L_32;
		Object_t * L_34 = Box(Single_t345_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 5);
		ArrayElementTypeCheck (L_30, L_34);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_30, 5)) = (Object_t *)L_34;
		String_t* L_35 = UnityString_Format_m2796(NULL /*static, unused*/, G_B6_4, L_30, /*hidden argument*/NULL);
		NullCheck(G_B6_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_6, G_B6_5);
		ArrayElementTypeCheck (G_B6_6, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B6_6, G_B6_5)) = (Object_t *)L_35;
		ObjectU5BU5D_t73* L_36 = G_B6_7;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, 2);
		ArrayElementTypeCheck (L_36, (String_t*) &_stringLiteral146);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_36, 2)) = (Object_t *)(String_t*) &_stringLiteral146;
		ObjectU5BU5D_t73* L_37 = L_36;
		float L_38 = (__this->___minWidth_0);
		float L_39 = L_38;
		Object_t * L_40 = Box(Single_t345_il2cpp_TypeInfo_var, &L_39);
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 3);
		ArrayElementTypeCheck (L_37, L_40);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_37, 3)) = (Object_t *)L_40;
		ObjectU5BU5D_t73* L_41 = L_37;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, 4);
		ArrayElementTypeCheck (L_41, (String_t*) &_stringLiteral147);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_41, 4)) = (Object_t *)(String_t*) &_stringLiteral147;
		ObjectU5BU5D_t73* L_42 = L_41;
		float L_43 = (__this->___maxWidth_1);
		float L_44 = L_43;
		Object_t * L_45 = Box(Single_t345_il2cpp_TypeInfo_var, &L_44);
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 5);
		ArrayElementTypeCheck (L_42, L_45);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_42, 5)) = (Object_t *)L_45;
		ObjectU5BU5D_t73* L_46 = L_42;
		int32_t L_47 = (__this->___stretchWidth_5);
		G_B7_0 = 6;
		G_B7_1 = L_46;
		G_B7_2 = L_46;
		if (!L_47)
		{
			G_B8_0 = 6;
			G_B8_1 = L_46;
			G_B8_2 = L_46;
			goto IL_0101;
		}
	}
	{
		G_B9_0 = (String_t*) &_stringLiteral148;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		goto IL_0106;
	}

IL_0101:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_48 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B9_0 = L_48;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
	}

IL_0106:
	{
		NullCheck(G_B9_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B9_2, G_B9_1);
		ArrayElementTypeCheck (G_B9_2, G_B9_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B9_2, G_B9_1)) = (Object_t *)G_B9_0;
		ObjectU5BU5D_t73* L_49 = G_B9_3;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, 7);
		ArrayElementTypeCheck (L_49, (String_t*) &_stringLiteral149);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_49, 7)) = (Object_t *)(String_t*) &_stringLiteral149;
		ObjectU5BU5D_t73* L_50 = L_49;
		float L_51 = (__this->___minHeight_2);
		float L_52 = L_51;
		Object_t * L_53 = Box(Single_t345_il2cpp_TypeInfo_var, &L_52);
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, 8);
		ArrayElementTypeCheck (L_50, L_53);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_50, 8)) = (Object_t *)L_53;
		ObjectU5BU5D_t73* L_54 = L_50;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, ((int32_t)9));
		ArrayElementTypeCheck (L_54, (String_t*) &_stringLiteral147);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_54, ((int32_t)9))) = (Object_t *)(String_t*) &_stringLiteral147;
		ObjectU5BU5D_t73* L_55 = L_54;
		float L_56 = (__this->___maxHeight_3);
		float L_57 = L_56;
		Object_t * L_58 = Box(Single_t345_il2cpp_TypeInfo_var, &L_57);
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, ((int32_t)10));
		ArrayElementTypeCheck (L_55, L_58);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_55, ((int32_t)10))) = (Object_t *)L_58;
		ObjectU5BU5D_t73* L_59 = L_55;
		int32_t L_60 = (__this->___stretchHeight_6);
		G_B10_0 = ((int32_t)11);
		G_B10_1 = L_59;
		G_B10_2 = L_59;
		if (!L_60)
		{
			G_B11_0 = ((int32_t)11);
			G_B11_1 = L_59;
			G_B11_2 = L_59;
			goto IL_014d;
		}
	}
	{
		G_B12_0 = (String_t*) &_stringLiteral148;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		G_B12_3 = G_B10_2;
		goto IL_0152;
	}

IL_014d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_61 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B12_0 = L_61;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
	}

IL_0152:
	{
		NullCheck(G_B12_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B12_2, G_B12_1);
		ArrayElementTypeCheck (G_B12_2, G_B12_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B12_2, G_B12_1)) = (Object_t *)G_B12_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_62 = String_Concat_m255(NULL /*static, unused*/, G_B12_3, /*hidden argument*/NULL);
		return L_62;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffsetMethodDeclarations.h"


// System.Void UnityEngine.GUILayoutGroup::.ctor()
extern TypeInfo* List_1_t520_il2cpp_TypeInfo_var;
extern TypeInfo* RectOffset_t291_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t517_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutEntry_t519_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3521_MethodInfo_var;
extern "C" void GUILayoutGroup__ctor_m2439 (GUILayoutGroup_t514 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t520_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(954);
		RectOffset_t291_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(370);
		GUIStyle_t517_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(953);
		GUILayoutEntry_t519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(951);
		List_1__ctor_m3521_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483950);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t520 * L_0 = (List_1_t520 *)il2cpp_codegen_object_new (List_1_t520_il2cpp_TypeInfo_var);
		List_1__ctor_m3521(L_0, /*hidden argument*/List_1__ctor_m3521_MethodInfo_var);
		__this->___entries_10 = L_0;
		__this->___isVertical_11 = 1;
		__this->___sameSize_14 = 1;
		__this->___windowID_16 = (-1);
		__this->___stretchableCountX_18 = ((int32_t)100);
		__this->___stretchableCountY_19 = ((int32_t)100);
		__this->___childMinWidth_22 = (100.0f);
		__this->___childMaxWidth_23 = (100.0f);
		__this->___childMinHeight_24 = (100.0f);
		__this->___childMaxHeight_25 = (100.0f);
		RectOffset_t291 * L_1 = (RectOffset_t291 *)il2cpp_codegen_object_new (RectOffset_t291_il2cpp_TypeInfo_var);
		RectOffset__ctor_m2035(L_1, /*hidden argument*/NULL);
		__this->___m_Margin_26 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle_t517 * L_2 = GUIStyle_get_none_m2572(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutEntry_t519_il2cpp_TypeInfo_var);
		GUILayoutEntry__ctor_m2427(__this, (0.0f), (0.0f), (0.0f), (0.0f), L_2, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.RectOffset UnityEngine.GUILayoutGroup::get_margin()
extern "C" RectOffset_t291 * GUILayoutGroup_get_margin_m2440 (GUILayoutGroup_t514 * __this, const MethodInfo* method)
{
	{
		RectOffset_t291 * L_0 = (__this->___m_Margin_26);
		return L_0;
	}
}
// System.Void UnityEngine.GUILayoutGroup::ApplyOptions(UnityEngine.GUILayoutOption[])
extern TypeInfo* Int32_t75_il2cpp_TypeInfo_var;
extern "C" void GUILayoutGroup_ApplyOptions_m2441 (GUILayoutGroup_t514 * __this, GUILayoutOptionU5BU5D_t709* ___options, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	GUILayoutOption_t523 * V_0 = {0};
	GUILayoutOptionU5BU5D_t709* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = {0};
	{
		GUILayoutOptionU5BU5D_t709* L_0 = ___options;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		GUILayoutOptionU5BU5D_t709* L_1 = ___options;
		GUILayoutEntry_ApplyOptions_m2437(__this, L_1, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_t709* L_2 = ___options;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0098;
	}

IL_0017:
	{
		GUILayoutOptionU5BU5D_t709* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_0 = (*(GUILayoutOption_t523 **)(GUILayoutOption_t523 **)SZArrayLdElema(L_3, L_5));
		GUILayoutOption_t523 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = (L_6->___type_0);
		V_3 = L_7;
		int32_t L_8 = V_3;
		if (L_8 == 0)
		{
			goto IL_0065;
		}
		if (L_8 == 1)
		{
			goto IL_0071;
		}
		if (L_8 == 2)
		{
			goto IL_0065;
		}
		if (L_8 == 3)
		{
			goto IL_0065;
		}
		if (L_8 == 4)
		{
			goto IL_0071;
		}
		if (L_8 == 5)
		{
			goto IL_0071;
		}
		if (L_8 == 6)
		{
			goto IL_0094;
		}
		if (L_8 == 7)
		{
			goto IL_0094;
		}
		if (L_8 == 8)
		{
			goto IL_0094;
		}
		if (L_8 == 9)
		{
			goto IL_0094;
		}
		if (L_8 == 10)
		{
			goto IL_0094;
		}
		if (L_8 == 11)
		{
			goto IL_0094;
		}
		if (L_8 == 12)
		{
			goto IL_0094;
		}
		if (L_8 == 13)
		{
			goto IL_007d;
		}
	}
	{
		goto IL_0094;
	}

IL_0065:
	{
		__this->___userSpecifiedHeight_21 = 1;
		goto IL_0094;
	}

IL_0071:
	{
		__this->___userSpecifiedWidth_20 = 1;
		goto IL_0094;
	}

IL_007d:
	{
		GUILayoutOption_t523 * L_9 = V_0;
		NullCheck(L_9);
		Object_t * L_10 = (L_9->___value_1);
		__this->___spacing_13 = (((float)((*(int32_t*)((int32_t*)UnBox (L_10, Int32_t75_il2cpp_TypeInfo_var))))));
		goto IL_0094;
	}

IL_0094:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0098:
	{
		int32_t L_12 = V_2;
		GUILayoutOptionU5BU5D_t709* L_13 = V_1;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::ApplyStyleSettings(UnityEngine.GUIStyle)
extern "C" void GUILayoutGroup_ApplyStyleSettings_m2442 (GUILayoutGroup_t514 * __this, GUIStyle_t517 * ___style, const MethodInfo* method)
{
	RectOffset_t291 * V_0 = {0};
	{
		GUIStyle_t517 * L_0 = ___style;
		GUILayoutEntry_ApplyStyleSettings_m2436(__this, L_0, /*hidden argument*/NULL);
		GUIStyle_t517 * L_1 = ___style;
		NullCheck(L_1);
		RectOffset_t291 * L_2 = GUIStyle_get_margin_m2560(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		RectOffset_t291 * L_3 = (__this->___m_Margin_26);
		RectOffset_t291 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = RectOffset_get_left_m2030(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		RectOffset_set_left_m2542(L_3, L_5, /*hidden argument*/NULL);
		RectOffset_t291 * L_6 = (__this->___m_Margin_26);
		RectOffset_t291 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = RectOffset_get_right_m2543(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		RectOffset_set_right_m2544(L_6, L_8, /*hidden argument*/NULL);
		RectOffset_t291 * L_9 = (__this->___m_Margin_26);
		RectOffset_t291 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = RectOffset_get_top_m2031(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		RectOffset_set_top_m2545(L_9, L_11, /*hidden argument*/NULL);
		RectOffset_t291 * L_12 = (__this->___m_Margin_26);
		RectOffset_t291 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = RectOffset_get_bottom_m2546(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		RectOffset_set_bottom_m2547(L_12, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::ResetCursor()
extern "C" void GUILayoutGroup_ResetCursor_m2443 (GUILayoutGroup_t514 * __this, const MethodInfo* method)
{
	{
		__this->___cursor_17 = 0;
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::CalcWidth()
extern TypeInfo* GUILayoutUtility_t518_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t68_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t740_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t69_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t517_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3518_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3519_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3520_MethodInfo_var;
extern "C" void GUILayoutGroup_CalcWidth_m2444 (GUILayoutGroup_t514 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t518_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(945);
		Mathf_t68_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Enumerator_t740_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(952);
		IDisposable_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		GUIStyle_t517_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(953);
		List_1_GetEnumerator_m3518_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483947);
		Enumerator_get_Current_m3519_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483948);
		Enumerator_MoveNext_m3520_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483949);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	GUILayoutEntry_t519 * V_3 = {0};
	Enumerator_t740  V_4 = {0};
	RectOffset_t291 * V_5 = {0};
	int32_t V_6 = 0;
	GUILayoutEntry_t519 * V_7 = {0};
	Enumerator_t740  V_8 = {0};
	RectOffset_t291 * V_9 = {0};
	int32_t V_10 = 0;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B22_0 = 0;
	int32_t G_B39_0 = 0;
	int32_t G_B39_1 = 0;
	GUILayoutGroup_t514 * G_B39_2 = {0};
	int32_t G_B38_0 = 0;
	int32_t G_B38_1 = 0;
	GUILayoutGroup_t514 * G_B38_2 = {0};
	int32_t G_B40_0 = 0;
	int32_t G_B40_1 = 0;
	int32_t G_B40_2 = 0;
	GUILayoutGroup_t514 * G_B40_3 = {0};
	{
		List_1_t520 * L_0 = (__this->___entries_10);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_0);
		if (L_1)
		{
			goto IL_0033;
		}
	}
	{
		GUIStyle_t517 * L_2 = GUILayoutEntry_get_style_m2429(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		RectOffset_t291 * L_3 = GUIStyle_get_padding_m2561(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = RectOffset_get_horizontal_m2025(L_3, /*hidden argument*/NULL);
		float L_5 = (((float)L_4));
		V_13 = L_5;
		((GUILayoutEntry_t519 *)__this)->___minWidth_0 = L_5;
		float L_6 = V_13;
		((GUILayoutEntry_t519 *)__this)->___maxWidth_1 = L_6;
		return;
	}

IL_0033:
	{
		__this->___childMinWidth_22 = (0.0f);
		__this->___childMaxWidth_23 = (0.0f);
		V_0 = 0;
		V_1 = 0;
		__this->___stretchableCountX_18 = 0;
		V_2 = 1;
		bool L_7 = (__this->___isVertical_11);
		if (!L_7)
		{
			goto IL_016a;
		}
	}
	{
		List_1_t520 * L_8 = (__this->___entries_10);
		NullCheck(L_8);
		Enumerator_t740  L_9 = List_1_GetEnumerator_m3518(L_8, /*hidden argument*/List_1_GetEnumerator_m3518_MethodInfo_var);
		V_4 = L_9;
	}

IL_006e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0125;
		}

IL_0073:
		{
			GUILayoutEntry_t519 * L_10 = Enumerator_get_Current_m3519((&V_4), /*hidden argument*/Enumerator_get_Current_m3519_MethodInfo_var);
			V_3 = L_10;
			GUILayoutEntry_t519 * L_11 = V_3;
			NullCheck(L_11);
			VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_11);
			GUILayoutEntry_t519 * L_12 = V_3;
			NullCheck(L_12);
			RectOffset_t291 * L_13 = (RectOffset_t291 *)VirtFuncInvoker0< RectOffset_t291 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_12);
			V_5 = L_13;
			GUILayoutEntry_t519 * L_14 = V_3;
			NullCheck(L_14);
			GUIStyle_t517 * L_15 = GUILayoutEntry_get_style_m2429(L_14, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t518_il2cpp_TypeInfo_var);
			GUIStyle_t517 * L_16 = GUILayoutUtility_get_spaceStyle_m2426(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((((Object_t*)(GUIStyle_t517 *)L_15) == ((Object_t*)(GUIStyle_t517 *)L_16)))
			{
				goto IL_0112;
			}
		}

IL_0099:
		{
			bool L_17 = V_2;
			if (L_17)
			{
				goto IL_00c0;
			}
		}

IL_009f:
		{
			RectOffset_t291 * L_18 = V_5;
			NullCheck(L_18);
			int32_t L_19 = RectOffset_get_left_m2030(L_18, /*hidden argument*/NULL);
			int32_t L_20 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
			int32_t L_21 = Mathf_Min_m1874(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
			V_0 = L_21;
			RectOffset_t291 * L_22 = V_5;
			NullCheck(L_22);
			int32_t L_23 = RectOffset_get_right_m2543(L_22, /*hidden argument*/NULL);
			int32_t L_24 = V_1;
			int32_t L_25 = Mathf_Min_m1874(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
			V_1 = L_25;
			goto IL_00d2;
		}

IL_00c0:
		{
			RectOffset_t291 * L_26 = V_5;
			NullCheck(L_26);
			int32_t L_27 = RectOffset_get_left_m2030(L_26, /*hidden argument*/NULL);
			V_0 = L_27;
			RectOffset_t291 * L_28 = V_5;
			NullCheck(L_28);
			int32_t L_29 = RectOffset_get_right_m2543(L_28, /*hidden argument*/NULL);
			V_1 = L_29;
			V_2 = 0;
		}

IL_00d2:
		{
			GUILayoutEntry_t519 * L_30 = V_3;
			NullCheck(L_30);
			float L_31 = (L_30->___minWidth_0);
			RectOffset_t291 * L_32 = V_5;
			NullCheck(L_32);
			int32_t L_33 = RectOffset_get_horizontal_m2025(L_32, /*hidden argument*/NULL);
			float L_34 = (__this->___childMinWidth_22);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
			float L_35 = Mathf_Max_m1974(NULL /*static, unused*/, ((float)((float)L_31+(float)(((float)L_33)))), L_34, /*hidden argument*/NULL);
			__this->___childMinWidth_22 = L_35;
			GUILayoutEntry_t519 * L_36 = V_3;
			NullCheck(L_36);
			float L_37 = (L_36->___maxWidth_1);
			RectOffset_t291 * L_38 = V_5;
			NullCheck(L_38);
			int32_t L_39 = RectOffset_get_horizontal_m2025(L_38, /*hidden argument*/NULL);
			float L_40 = (__this->___childMaxWidth_23);
			float L_41 = Mathf_Max_m1974(NULL /*static, unused*/, ((float)((float)L_37+(float)(((float)L_39)))), L_40, /*hidden argument*/NULL);
			__this->___childMaxWidth_23 = L_41;
		}

IL_0112:
		{
			int32_t L_42 = (__this->___stretchableCountX_18);
			GUILayoutEntry_t519 * L_43 = V_3;
			NullCheck(L_43);
			int32_t L_44 = (L_43->___stretchWidth_5);
			__this->___stretchableCountX_18 = ((int32_t)((int32_t)L_42+(int32_t)L_44));
		}

IL_0125:
		{
			bool L_45 = Enumerator_MoveNext_m3520((&V_4), /*hidden argument*/Enumerator_MoveNext_m3520_MethodInfo_var);
			if (L_45)
			{
				goto IL_0073;
			}
		}

IL_0131:
		{
			IL2CPP_LEAVE(0x143, FINALLY_0136);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_0136;
	}

FINALLY_0136:
	{ // begin finally (depth: 1)
		Enumerator_t740  L_46 = V_4;
		Enumerator_t740  L_47 = L_46;
		Object_t * L_48 = Box(Enumerator_t740_il2cpp_TypeInfo_var, &L_47);
		NullCheck(L_48);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t69_il2cpp_TypeInfo_var, L_48);
		IL2CPP_END_FINALLY(310)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(310)
	{
		IL2CPP_JUMP_TBL(0x143, IL_0143)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_0143:
	{
		float L_49 = (__this->___childMinWidth_22);
		int32_t L_50 = V_0;
		int32_t L_51 = V_1;
		__this->___childMinWidth_22 = ((float)((float)L_49-(float)(((float)((int32_t)((int32_t)L_50+(int32_t)L_51))))));
		float L_52 = (__this->___childMaxWidth_23);
		int32_t L_53 = V_0;
		int32_t L_54 = V_1;
		__this->___childMaxWidth_23 = ((float)((float)L_52-(float)(((float)((int32_t)((int32_t)L_53+(int32_t)L_54))))));
		goto IL_02ea;
	}

IL_016a:
	{
		V_6 = 0;
		List_1_t520 * L_55 = (__this->___entries_10);
		NullCheck(L_55);
		Enumerator_t740  L_56 = List_1_GetEnumerator_m3518(L_55, /*hidden argument*/List_1_GetEnumerator_m3518_MethodInfo_var);
		V_8 = L_56;
	}

IL_017a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0273;
		}

IL_017f:
		{
			GUILayoutEntry_t519 * L_57 = Enumerator_get_Current_m3519((&V_8), /*hidden argument*/Enumerator_get_Current_m3519_MethodInfo_var);
			V_7 = L_57;
			GUILayoutEntry_t519 * L_58 = V_7;
			NullCheck(L_58);
			VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_58);
			GUILayoutEntry_t519 * L_59 = V_7;
			NullCheck(L_59);
			RectOffset_t291 * L_60 = (RectOffset_t291 *)VirtFuncInvoker0< RectOffset_t291 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_59);
			V_9 = L_60;
			GUILayoutEntry_t519 * L_61 = V_7;
			NullCheck(L_61);
			GUIStyle_t517 * L_62 = GUILayoutEntry_get_style_m2429(L_61, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t518_il2cpp_TypeInfo_var);
			GUIStyle_t517 * L_63 = GUILayoutUtility_get_spaceStyle_m2426(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((((Object_t*)(GUIStyle_t517 *)L_62) == ((Object_t*)(GUIStyle_t517 *)L_63)))
			{
				goto IL_0237;
			}
		}

IL_01a9:
		{
			bool L_64 = V_2;
			if (L_64)
			{
				goto IL_01d2;
			}
		}

IL_01af:
		{
			int32_t L_65 = V_6;
			RectOffset_t291 * L_66 = V_9;
			NullCheck(L_66);
			int32_t L_67 = RectOffset_get_left_m2030(L_66, /*hidden argument*/NULL);
			if ((((int32_t)L_65) <= ((int32_t)L_67)))
			{
				goto IL_01c4;
			}
		}

IL_01bd:
		{
			int32_t L_68 = V_6;
			G_B22_0 = L_68;
			goto IL_01cb;
		}

IL_01c4:
		{
			RectOffset_t291 * L_69 = V_9;
			NullCheck(L_69);
			int32_t L_70 = RectOffset_get_left_m2030(L_69, /*hidden argument*/NULL);
			G_B22_0 = L_70;
		}

IL_01cb:
		{
			V_10 = G_B22_0;
			goto IL_01d7;
		}

IL_01d2:
		{
			V_10 = 0;
			V_2 = 0;
		}

IL_01d7:
		{
			float L_71 = (__this->___childMinWidth_22);
			GUILayoutEntry_t519 * L_72 = V_7;
			NullCheck(L_72);
			float L_73 = (L_72->___minWidth_0);
			float L_74 = (__this->___spacing_13);
			int32_t L_75 = V_10;
			__this->___childMinWidth_22 = ((float)((float)L_71+(float)((float)((float)((float)((float)L_73+(float)L_74))+(float)(((float)L_75))))));
			float L_76 = (__this->___childMaxWidth_23);
			GUILayoutEntry_t519 * L_77 = V_7;
			NullCheck(L_77);
			float L_78 = (L_77->___maxWidth_1);
			float L_79 = (__this->___spacing_13);
			int32_t L_80 = V_10;
			__this->___childMaxWidth_23 = ((float)((float)L_76+(float)((float)((float)((float)((float)L_78+(float)L_79))+(float)(((float)L_80))))));
			RectOffset_t291 * L_81 = V_9;
			NullCheck(L_81);
			int32_t L_82 = RectOffset_get_right_m2543(L_81, /*hidden argument*/NULL);
			V_6 = L_82;
			int32_t L_83 = (__this->___stretchableCountX_18);
			GUILayoutEntry_t519 * L_84 = V_7;
			NullCheck(L_84);
			int32_t L_85 = (L_84->___stretchWidth_5);
			__this->___stretchableCountX_18 = ((int32_t)((int32_t)L_83+(int32_t)L_85));
			goto IL_0273;
		}

IL_0237:
		{
			float L_86 = (__this->___childMinWidth_22);
			GUILayoutEntry_t519 * L_87 = V_7;
			NullCheck(L_87);
			float L_88 = (L_87->___minWidth_0);
			__this->___childMinWidth_22 = ((float)((float)L_86+(float)L_88));
			float L_89 = (__this->___childMaxWidth_23);
			GUILayoutEntry_t519 * L_90 = V_7;
			NullCheck(L_90);
			float L_91 = (L_90->___maxWidth_1);
			__this->___childMaxWidth_23 = ((float)((float)L_89+(float)L_91));
			int32_t L_92 = (__this->___stretchableCountX_18);
			GUILayoutEntry_t519 * L_93 = V_7;
			NullCheck(L_93);
			int32_t L_94 = (L_93->___stretchWidth_5);
			__this->___stretchableCountX_18 = ((int32_t)((int32_t)L_92+(int32_t)L_94));
		}

IL_0273:
		{
			bool L_95 = Enumerator_MoveNext_m3520((&V_8), /*hidden argument*/Enumerator_MoveNext_m3520_MethodInfo_var);
			if (L_95)
			{
				goto IL_017f;
			}
		}

IL_027f:
		{
			IL2CPP_LEAVE(0x291, FINALLY_0284);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_0284;
	}

FINALLY_0284:
	{ // begin finally (depth: 1)
		Enumerator_t740  L_96 = V_8;
		Enumerator_t740  L_97 = L_96;
		Object_t * L_98 = Box(Enumerator_t740_il2cpp_TypeInfo_var, &L_97);
		NullCheck(L_98);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t69_il2cpp_TypeInfo_var, L_98);
		IL2CPP_END_FINALLY(644)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(644)
	{
		IL2CPP_JUMP_TBL(0x291, IL_0291)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_0291:
	{
		float L_99 = (__this->___childMinWidth_22);
		float L_100 = (__this->___spacing_13);
		__this->___childMinWidth_22 = ((float)((float)L_99-(float)L_100));
		float L_101 = (__this->___childMaxWidth_23);
		float L_102 = (__this->___spacing_13);
		__this->___childMaxWidth_23 = ((float)((float)L_101-(float)L_102));
		List_1_t520 * L_103 = (__this->___entries_10);
		NullCheck(L_103);
		int32_t L_104 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_103);
		if (!L_104)
		{
			goto IL_02e6;
		}
	}
	{
		List_1_t520 * L_105 = (__this->___entries_10);
		NullCheck(L_105);
		GUILayoutEntry_t519 * L_106 = (GUILayoutEntry_t519 *)VirtFuncInvoker1< GUILayoutEntry_t519 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32) */, L_105, 0);
		NullCheck(L_106);
		RectOffset_t291 * L_107 = (RectOffset_t291 *)VirtFuncInvoker0< RectOffset_t291 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_106);
		NullCheck(L_107);
		int32_t L_108 = RectOffset_get_left_m2030(L_107, /*hidden argument*/NULL);
		V_0 = L_108;
		int32_t L_109 = V_6;
		V_1 = L_109;
		goto IL_02ea;
	}

IL_02e6:
	{
		int32_t L_110 = 0;
		V_1 = L_110;
		V_0 = L_110;
	}

IL_02ea:
	{
		V_11 = (0.0f);
		V_12 = (0.0f);
		GUIStyle_t517 * L_111 = GUILayoutEntry_get_style_m2429(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle_t517 * L_112 = GUIStyle_get_none_m2572(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((Object_t*)(GUIStyle_t517 *)L_111) == ((Object_t*)(GUIStyle_t517 *)L_112))))
		{
			goto IL_0313;
		}
	}
	{
		bool L_113 = (__this->___userSpecifiedWidth_20);
		if (!L_113)
		{
			goto IL_034a;
		}
	}

IL_0313:
	{
		GUIStyle_t517 * L_114 = GUILayoutEntry_get_style_m2429(__this, /*hidden argument*/NULL);
		NullCheck(L_114);
		RectOffset_t291 * L_115 = GUIStyle_get_padding_m2561(L_114, /*hidden argument*/NULL);
		NullCheck(L_115);
		int32_t L_116 = RectOffset_get_left_m2030(L_115, /*hidden argument*/NULL);
		int32_t L_117 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
		int32_t L_118 = Mathf_Max_m214(NULL /*static, unused*/, L_116, L_117, /*hidden argument*/NULL);
		V_11 = (((float)L_118));
		GUIStyle_t517 * L_119 = GUILayoutEntry_get_style_m2429(__this, /*hidden argument*/NULL);
		NullCheck(L_119);
		RectOffset_t291 * L_120 = GUIStyle_get_padding_m2561(L_119, /*hidden argument*/NULL);
		NullCheck(L_120);
		int32_t L_121 = RectOffset_get_right_m2543(L_120, /*hidden argument*/NULL);
		int32_t L_122 = V_1;
		int32_t L_123 = Mathf_Max_m214(NULL /*static, unused*/, L_121, L_122, /*hidden argument*/NULL);
		V_12 = (((float)L_123));
		goto IL_036c;
	}

IL_034a:
	{
		RectOffset_t291 * L_124 = (__this->___m_Margin_26);
		int32_t L_125 = V_0;
		NullCheck(L_124);
		RectOffset_set_left_m2542(L_124, L_125, /*hidden argument*/NULL);
		RectOffset_t291 * L_126 = (__this->___m_Margin_26);
		int32_t L_127 = V_1;
		NullCheck(L_126);
		RectOffset_set_right_m2544(L_126, L_127, /*hidden argument*/NULL);
		float L_128 = (0.0f);
		V_12 = L_128;
		V_11 = L_128;
	}

IL_036c:
	{
		float L_129 = (((GUILayoutEntry_t519 *)__this)->___minWidth_0);
		float L_130 = (__this->___childMinWidth_22);
		float L_131 = V_11;
		float L_132 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
		float L_133 = Mathf_Max_m1974(NULL /*static, unused*/, L_129, ((float)((float)((float)((float)L_130+(float)L_131))+(float)L_132)), /*hidden argument*/NULL);
		((GUILayoutEntry_t519 *)__this)->___minWidth_0 = L_133;
		float L_134 = (((GUILayoutEntry_t519 *)__this)->___maxWidth_1);
		if ((!(((float)L_134) == ((float)(0.0f)))))
		{
			goto IL_03db;
		}
	}
	{
		int32_t L_135 = (((GUILayoutEntry_t519 *)__this)->___stretchWidth_5);
		int32_t L_136 = (__this->___stretchableCountX_18);
		GUIStyle_t517 * L_137 = GUILayoutEntry_get_style_m2429(__this, /*hidden argument*/NULL);
		NullCheck(L_137);
		bool L_138 = GUIStyle_get_stretchWidth_m2565(L_137, /*hidden argument*/NULL);
		G_B38_0 = L_136;
		G_B38_1 = L_135;
		G_B38_2 = __this;
		if (!L_138)
		{
			G_B39_0 = L_136;
			G_B39_1 = L_135;
			G_B39_2 = __this;
			goto IL_03bc;
		}
	}
	{
		G_B40_0 = 1;
		G_B40_1 = G_B38_0;
		G_B40_2 = G_B38_1;
		G_B40_3 = G_B38_2;
		goto IL_03bd;
	}

IL_03bc:
	{
		G_B40_0 = 0;
		G_B40_1 = G_B39_0;
		G_B40_2 = G_B39_1;
		G_B40_3 = G_B39_2;
	}

IL_03bd:
	{
		NullCheck(G_B40_3);
		((GUILayoutEntry_t519 *)G_B40_3)->___stretchWidth_5 = ((int32_t)((int32_t)G_B40_2+(int32_t)((int32_t)((int32_t)G_B40_1+(int32_t)G_B40_0))));
		float L_139 = (__this->___childMaxWidth_23);
		float L_140 = V_11;
		float L_141 = V_12;
		((GUILayoutEntry_t519 *)__this)->___maxWidth_1 = ((float)((float)((float)((float)L_139+(float)L_140))+(float)L_141));
		goto IL_03e2;
	}

IL_03db:
	{
		((GUILayoutEntry_t519 *)__this)->___stretchWidth_5 = 0;
	}

IL_03e2:
	{
		float L_142 = (((GUILayoutEntry_t519 *)__this)->___maxWidth_1);
		float L_143 = (((GUILayoutEntry_t519 *)__this)->___minWidth_0);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
		float L_144 = Mathf_Max_m1974(NULL /*static, unused*/, L_142, L_143, /*hidden argument*/NULL);
		((GUILayoutEntry_t519 *)__this)->___maxWidth_1 = L_144;
		GUIStyle_t517 * L_145 = GUILayoutEntry_get_style_m2429(__this, /*hidden argument*/NULL);
		NullCheck(L_145);
		float L_146 = GUIStyle_get_fixedWidth_m2563(L_145, /*hidden argument*/NULL);
		if ((((float)L_146) == ((float)(0.0f))))
		{
			goto IL_0431;
		}
	}
	{
		GUIStyle_t517 * L_147 = GUILayoutEntry_get_style_m2429(__this, /*hidden argument*/NULL);
		NullCheck(L_147);
		float L_148 = GUIStyle_get_fixedWidth_m2563(L_147, /*hidden argument*/NULL);
		float L_149 = L_148;
		V_13 = L_149;
		((GUILayoutEntry_t519 *)__this)->___minWidth_0 = L_149;
		float L_150 = V_13;
		((GUILayoutEntry_t519 *)__this)->___maxWidth_1 = L_150;
		((GUILayoutEntry_t519 *)__this)->___stretchWidth_5 = 0;
	}

IL_0431:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single)
extern TypeInfo* GUIStyle_t517_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t68_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t740_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t69_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutUtility_t518_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3518_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3519_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3520_MethodInfo_var;
extern "C" void GUILayoutGroup_SetHorizontal_m2445 (GUILayoutGroup_t514 * __this, float ___x, float ___width, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t517_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(953);
		Mathf_t68_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Enumerator_t740_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(952);
		IDisposable_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		GUILayoutUtility_t518_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(945);
		List_1_GetEnumerator_m3518_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483947);
		Enumerator_get_Current_m3519_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483948);
		Enumerator_MoveNext_m3520_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483949);
		s_Il2CppMethodIntialized = true;
	}
	RectOffset_t291 * V_0 = {0};
	GUILayoutEntry_t519 * V_1 = {0};
	Enumerator_t740  V_2 = {0};
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	GUILayoutEntry_t519 * V_8 = {0};
	Enumerator_t740  V_9 = {0};
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	int32_t V_15 = 0;
	bool V_16 = false;
	GUILayoutEntry_t519 * V_17 = {0};
	Enumerator_t740  V_18 = {0};
	float V_19 = 0.0f;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B39_0 = 0;
	{
		float L_0 = ___x;
		float L_1 = ___width;
		GUILayoutEntry_SetHorizontal_m2434(__this, L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = (__this->___resetCoords_12);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		___x = (0.0f);
	}

IL_001a:
	{
		GUIStyle_t517 * L_3 = GUILayoutEntry_get_style_m2429(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		RectOffset_t291 * L_4 = GUIStyle_get_padding_m2561(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = (__this->___isVertical_11);
		if (!L_5)
		{
			goto IL_01bb;
		}
	}
	{
		GUIStyle_t517 * L_6 = GUILayoutEntry_get_style_m2429(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle_t517 * L_7 = GUIStyle_get_none_m2572(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((Object_t*)(GUIStyle_t517 *)L_6) == ((Object_t*)(GUIStyle_t517 *)L_7)))
		{
			goto IL_00eb;
		}
	}
	{
		List_1_t520 * L_8 = (__this->___entries_10);
		NullCheck(L_8);
		Enumerator_t740  L_9 = List_1_GetEnumerator_m3518(L_8, /*hidden argument*/List_1_GetEnumerator_m3518_MethodInfo_var);
		V_2 = L_9;
	}

IL_004d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00c9;
		}

IL_0052:
		{
			GUILayoutEntry_t519 * L_10 = Enumerator_get_Current_m3519((&V_2), /*hidden argument*/Enumerator_get_Current_m3519_MethodInfo_var);
			V_1 = L_10;
			GUILayoutEntry_t519 * L_11 = V_1;
			NullCheck(L_11);
			RectOffset_t291 * L_12 = (RectOffset_t291 *)VirtFuncInvoker0< RectOffset_t291 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_11);
			NullCheck(L_12);
			int32_t L_13 = RectOffset_get_left_m2030(L_12, /*hidden argument*/NULL);
			RectOffset_t291 * L_14 = V_0;
			NullCheck(L_14);
			int32_t L_15 = RectOffset_get_left_m2030(L_14, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
			int32_t L_16 = Mathf_Max_m214(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/NULL);
			V_3 = (((float)L_16));
			float L_17 = ___x;
			float L_18 = V_3;
			V_4 = ((float)((float)L_17+(float)L_18));
			float L_19 = ___width;
			GUILayoutEntry_t519 * L_20 = V_1;
			NullCheck(L_20);
			RectOffset_t291 * L_21 = (RectOffset_t291 *)VirtFuncInvoker0< RectOffset_t291 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_20);
			NullCheck(L_21);
			int32_t L_22 = RectOffset_get_right_m2543(L_21, /*hidden argument*/NULL);
			RectOffset_t291 * L_23 = V_0;
			NullCheck(L_23);
			int32_t L_24 = RectOffset_get_right_m2543(L_23, /*hidden argument*/NULL);
			int32_t L_25 = Mathf_Max_m214(NULL /*static, unused*/, L_22, L_24, /*hidden argument*/NULL);
			float L_26 = V_3;
			V_5 = ((float)((float)((float)((float)L_19-(float)(((float)L_25))))-(float)L_26));
			GUILayoutEntry_t519 * L_27 = V_1;
			NullCheck(L_27);
			int32_t L_28 = (L_27->___stretchWidth_5);
			if (!L_28)
			{
				goto IL_00ae;
			}
		}

IL_009f:
		{
			GUILayoutEntry_t519 * L_29 = V_1;
			float L_30 = V_4;
			float L_31 = V_5;
			NullCheck(L_29);
			VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_29, L_30, L_31);
			goto IL_00c9;
		}

IL_00ae:
		{
			GUILayoutEntry_t519 * L_32 = V_1;
			float L_33 = V_4;
			float L_34 = V_5;
			GUILayoutEntry_t519 * L_35 = V_1;
			NullCheck(L_35);
			float L_36 = (L_35->___minWidth_0);
			GUILayoutEntry_t519 * L_37 = V_1;
			NullCheck(L_37);
			float L_38 = (L_37->___maxWidth_1);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
			float L_39 = Mathf_Clamp_m1786(NULL /*static, unused*/, L_34, L_36, L_38, /*hidden argument*/NULL);
			NullCheck(L_32);
			VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_32, L_33, L_39);
		}

IL_00c9:
		{
			bool L_40 = Enumerator_MoveNext_m3520((&V_2), /*hidden argument*/Enumerator_MoveNext_m3520_MethodInfo_var);
			if (L_40)
			{
				goto IL_0052;
			}
		}

IL_00d5:
		{
			IL2CPP_LEAVE(0xE6, FINALLY_00da);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_00da;
	}

FINALLY_00da:
	{ // begin finally (depth: 1)
		Enumerator_t740  L_41 = V_2;
		Enumerator_t740  L_42 = L_41;
		Object_t * L_43 = Box(Enumerator_t740_il2cpp_TypeInfo_var, &L_42);
		NullCheck(L_43);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t69_il2cpp_TypeInfo_var, L_43);
		IL2CPP_END_FINALLY(218)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(218)
	{
		IL2CPP_JUMP_TBL(0xE6, IL_00e6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_00e6:
	{
		goto IL_01b6;
	}

IL_00eb:
	{
		float L_44 = ___x;
		RectOffset_t291 * L_45 = (RectOffset_t291 *)VirtFuncInvoker0< RectOffset_t291 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutGroup::get_margin() */, __this);
		NullCheck(L_45);
		int32_t L_46 = RectOffset_get_left_m2030(L_45, /*hidden argument*/NULL);
		V_6 = ((float)((float)L_44-(float)(((float)L_46))));
		float L_47 = ___width;
		RectOffset_t291 * L_48 = (RectOffset_t291 *)VirtFuncInvoker0< RectOffset_t291 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutGroup::get_margin() */, __this);
		NullCheck(L_48);
		int32_t L_49 = RectOffset_get_horizontal_m2025(L_48, /*hidden argument*/NULL);
		V_7 = ((float)((float)L_47+(float)(((float)L_49))));
		List_1_t520 * L_50 = (__this->___entries_10);
		NullCheck(L_50);
		Enumerator_t740  L_51 = List_1_GetEnumerator_m3518(L_50, /*hidden argument*/List_1_GetEnumerator_m3518_MethodInfo_var);
		V_9 = L_51;
	}

IL_0118:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0198;
		}

IL_011d:
		{
			GUILayoutEntry_t519 * L_52 = Enumerator_get_Current_m3519((&V_9), /*hidden argument*/Enumerator_get_Current_m3519_MethodInfo_var);
			V_8 = L_52;
			GUILayoutEntry_t519 * L_53 = V_8;
			NullCheck(L_53);
			int32_t L_54 = (L_53->___stretchWidth_5);
			if (!L_54)
			{
				goto IL_015e;
			}
		}

IL_0132:
		{
			GUILayoutEntry_t519 * L_55 = V_8;
			float L_56 = V_6;
			GUILayoutEntry_t519 * L_57 = V_8;
			NullCheck(L_57);
			RectOffset_t291 * L_58 = (RectOffset_t291 *)VirtFuncInvoker0< RectOffset_t291 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_57);
			NullCheck(L_58);
			int32_t L_59 = RectOffset_get_left_m2030(L_58, /*hidden argument*/NULL);
			float L_60 = V_7;
			GUILayoutEntry_t519 * L_61 = V_8;
			NullCheck(L_61);
			RectOffset_t291 * L_62 = (RectOffset_t291 *)VirtFuncInvoker0< RectOffset_t291 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_61);
			NullCheck(L_62);
			int32_t L_63 = RectOffset_get_horizontal_m2025(L_62, /*hidden argument*/NULL);
			NullCheck(L_55);
			VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_55, ((float)((float)L_56+(float)(((float)L_59)))), ((float)((float)L_60-(float)(((float)L_63)))));
			goto IL_0198;
		}

IL_015e:
		{
			GUILayoutEntry_t519 * L_64 = V_8;
			float L_65 = V_6;
			GUILayoutEntry_t519 * L_66 = V_8;
			NullCheck(L_66);
			RectOffset_t291 * L_67 = (RectOffset_t291 *)VirtFuncInvoker0< RectOffset_t291 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_66);
			NullCheck(L_67);
			int32_t L_68 = RectOffset_get_left_m2030(L_67, /*hidden argument*/NULL);
			float L_69 = V_7;
			GUILayoutEntry_t519 * L_70 = V_8;
			NullCheck(L_70);
			RectOffset_t291 * L_71 = (RectOffset_t291 *)VirtFuncInvoker0< RectOffset_t291 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_70);
			NullCheck(L_71);
			int32_t L_72 = RectOffset_get_horizontal_m2025(L_71, /*hidden argument*/NULL);
			GUILayoutEntry_t519 * L_73 = V_8;
			NullCheck(L_73);
			float L_74 = (L_73->___minWidth_0);
			GUILayoutEntry_t519 * L_75 = V_8;
			NullCheck(L_75);
			float L_76 = (L_75->___maxWidth_1);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
			float L_77 = Mathf_Clamp_m1786(NULL /*static, unused*/, ((float)((float)L_69-(float)(((float)L_72)))), L_74, L_76, /*hidden argument*/NULL);
			NullCheck(L_64);
			VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_64, ((float)((float)L_65+(float)(((float)L_68)))), L_77);
		}

IL_0198:
		{
			bool L_78 = Enumerator_MoveNext_m3520((&V_9), /*hidden argument*/Enumerator_MoveNext_m3520_MethodInfo_var);
			if (L_78)
			{
				goto IL_011d;
			}
		}

IL_01a4:
		{
			IL2CPP_LEAVE(0x1B6, FINALLY_01a9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_01a9;
	}

FINALLY_01a9:
	{ // begin finally (depth: 1)
		Enumerator_t740  L_79 = V_9;
		Enumerator_t740  L_80 = L_79;
		Object_t * L_81 = Box(Enumerator_t740_il2cpp_TypeInfo_var, &L_80);
		NullCheck(L_81);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t69_il2cpp_TypeInfo_var, L_81);
		IL2CPP_END_FINALLY(425)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(425)
	{
		IL2CPP_JUMP_TBL(0x1B6, IL_01b6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_01b6:
	{
		goto IL_03b0;
	}

IL_01bb:
	{
		GUIStyle_t517 * L_82 = GUILayoutEntry_get_style_m2429(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle_t517 * L_83 = GUIStyle_get_none_m2572(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((Object_t*)(GUIStyle_t517 *)L_82) == ((Object_t*)(GUIStyle_t517 *)L_83)))
		{
			goto IL_0248;
		}
	}
	{
		RectOffset_t291 * L_84 = V_0;
		NullCheck(L_84);
		int32_t L_85 = RectOffset_get_left_m2030(L_84, /*hidden argument*/NULL);
		V_10 = (((float)L_85));
		RectOffset_t291 * L_86 = V_0;
		NullCheck(L_86);
		int32_t L_87 = RectOffset_get_right_m2543(L_86, /*hidden argument*/NULL);
		V_11 = (((float)L_87));
		List_1_t520 * L_88 = (__this->___entries_10);
		NullCheck(L_88);
		int32_t L_89 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_88);
		if (!L_89)
		{
			goto IL_0239;
		}
	}
	{
		float L_90 = V_10;
		List_1_t520 * L_91 = (__this->___entries_10);
		NullCheck(L_91);
		GUILayoutEntry_t519 * L_92 = (GUILayoutEntry_t519 *)VirtFuncInvoker1< GUILayoutEntry_t519 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32) */, L_91, 0);
		NullCheck(L_92);
		RectOffset_t291 * L_93 = (RectOffset_t291 *)VirtFuncInvoker0< RectOffset_t291 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_92);
		NullCheck(L_93);
		int32_t L_94 = RectOffset_get_left_m2030(L_93, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
		float L_95 = Mathf_Max_m1974(NULL /*static, unused*/, L_90, (((float)L_94)), /*hidden argument*/NULL);
		V_10 = L_95;
		float L_96 = V_11;
		List_1_t520 * L_97 = (__this->___entries_10);
		List_1_t520 * L_98 = (__this->___entries_10);
		NullCheck(L_98);
		int32_t L_99 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_98);
		NullCheck(L_97);
		GUILayoutEntry_t519 * L_100 = (GUILayoutEntry_t519 *)VirtFuncInvoker1< GUILayoutEntry_t519 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32) */, L_97, ((int32_t)((int32_t)L_99-(int32_t)1)));
		NullCheck(L_100);
		RectOffset_t291 * L_101 = (RectOffset_t291 *)VirtFuncInvoker0< RectOffset_t291 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_100);
		NullCheck(L_101);
		int32_t L_102 = RectOffset_get_right_m2543(L_101, /*hidden argument*/NULL);
		float L_103 = Mathf_Max_m1974(NULL /*static, unused*/, L_96, (((float)L_102)), /*hidden argument*/NULL);
		V_11 = L_103;
	}

IL_0239:
	{
		float L_104 = ___x;
		float L_105 = V_10;
		___x = ((float)((float)L_104+(float)L_105));
		float L_106 = ___width;
		float L_107 = V_11;
		float L_108 = V_10;
		___width = ((float)((float)L_106-(float)((float)((float)L_107+(float)L_108))));
	}

IL_0248:
	{
		float L_109 = ___width;
		float L_110 = (__this->___spacing_13);
		List_1_t520 * L_111 = (__this->___entries_10);
		NullCheck(L_111);
		int32_t L_112 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_111);
		V_12 = ((float)((float)L_109-(float)((float)((float)L_110*(float)(((float)((int32_t)((int32_t)L_112-(int32_t)1))))))));
		V_13 = (0.0f);
		float L_113 = (__this->___childMinWidth_22);
		float L_114 = (__this->___childMaxWidth_23);
		if ((((float)L_113) == ((float)L_114)))
		{
			goto IL_02a1;
		}
	}
	{
		float L_115 = V_12;
		float L_116 = (__this->___childMinWidth_22);
		float L_117 = (__this->___childMaxWidth_23);
		float L_118 = (__this->___childMinWidth_22);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
		float L_119 = Mathf_Clamp_m1786(NULL /*static, unused*/, ((float)((float)((float)((float)L_115-(float)L_116))/(float)((float)((float)L_117-(float)L_118)))), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_13 = L_119;
	}

IL_02a1:
	{
		V_14 = (0.0f);
		float L_120 = V_12;
		float L_121 = (__this->___childMaxWidth_23);
		if ((!(((float)L_120) > ((float)L_121))))
		{
			goto IL_02d4;
		}
	}
	{
		int32_t L_122 = (__this->___stretchableCountX_18);
		if ((((int32_t)L_122) <= ((int32_t)0)))
		{
			goto IL_02d4;
		}
	}
	{
		float L_123 = V_12;
		float L_124 = (__this->___childMaxWidth_23);
		int32_t L_125 = (__this->___stretchableCountX_18);
		V_14 = ((float)((float)((float)((float)L_123-(float)L_124))/(float)(((float)L_125))));
	}

IL_02d4:
	{
		V_15 = 0;
		V_16 = 1;
		List_1_t520 * L_126 = (__this->___entries_10);
		NullCheck(L_126);
		Enumerator_t740  L_127 = List_1_GetEnumerator_m3518(L_126, /*hidden argument*/List_1_GetEnumerator_m3518_MethodInfo_var);
		V_18 = L_127;
	}

IL_02e7:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0392;
		}

IL_02ec:
		{
			GUILayoutEntry_t519 * L_128 = Enumerator_get_Current_m3519((&V_18), /*hidden argument*/Enumerator_get_Current_m3519_MethodInfo_var);
			V_17 = L_128;
			GUILayoutEntry_t519 * L_129 = V_17;
			NullCheck(L_129);
			float L_130 = (L_129->___minWidth_0);
			GUILayoutEntry_t519 * L_131 = V_17;
			NullCheck(L_131);
			float L_132 = (L_131->___maxWidth_1);
			float L_133 = V_13;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
			float L_134 = Mathf_Lerp_m1807(NULL /*static, unused*/, L_130, L_132, L_133, /*hidden argument*/NULL);
			V_19 = L_134;
			float L_135 = V_19;
			float L_136 = V_14;
			GUILayoutEntry_t519 * L_137 = V_17;
			NullCheck(L_137);
			int32_t L_138 = (L_137->___stretchWidth_5);
			V_19 = ((float)((float)L_135+(float)((float)((float)L_136*(float)(((float)L_138))))));
			GUILayoutEntry_t519 * L_139 = V_17;
			NullCheck(L_139);
			GUIStyle_t517 * L_140 = GUILayoutEntry_get_style_m2429(L_139, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t518_il2cpp_TypeInfo_var);
			GUIStyle_t517 * L_141 = GUILayoutUtility_get_spaceStyle_m2426(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((((Object_t*)(GUIStyle_t517 *)L_140) == ((Object_t*)(GUIStyle_t517 *)L_141)))
			{
				goto IL_0371;
			}
		}

IL_032d:
		{
			GUILayoutEntry_t519 * L_142 = V_17;
			NullCheck(L_142);
			RectOffset_t291 * L_143 = (RectOffset_t291 *)VirtFuncInvoker0< RectOffset_t291 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_142);
			NullCheck(L_143);
			int32_t L_144 = RectOffset_get_left_m2030(L_143, /*hidden argument*/NULL);
			V_20 = L_144;
			bool L_145 = V_16;
			if (!L_145)
			{
				goto IL_0348;
			}
		}

IL_0342:
		{
			V_20 = 0;
			V_16 = 0;
		}

IL_0348:
		{
			int32_t L_146 = V_15;
			int32_t L_147 = V_20;
			if ((((int32_t)L_146) <= ((int32_t)L_147)))
			{
				goto IL_0358;
			}
		}

IL_0351:
		{
			int32_t L_148 = V_15;
			G_B39_0 = L_148;
			goto IL_035a;
		}

IL_0358:
		{
			int32_t L_149 = V_20;
			G_B39_0 = L_149;
		}

IL_035a:
		{
			V_21 = G_B39_0;
			float L_150 = ___x;
			int32_t L_151 = V_21;
			___x = ((float)((float)L_150+(float)(((float)L_151))));
			GUILayoutEntry_t519 * L_152 = V_17;
			NullCheck(L_152);
			RectOffset_t291 * L_153 = (RectOffset_t291 *)VirtFuncInvoker0< RectOffset_t291 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_152);
			NullCheck(L_153);
			int32_t L_154 = RectOffset_get_right_m2543(L_153, /*hidden argument*/NULL);
			V_15 = L_154;
		}

IL_0371:
		{
			GUILayoutEntry_t519 * L_155 = V_17;
			float L_156 = ___x;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
			float L_157 = roundf(L_156);
			float L_158 = V_19;
			float L_159 = roundf(L_158);
			NullCheck(L_155);
			VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_155, L_157, L_159);
			float L_160 = ___x;
			float L_161 = V_19;
			float L_162 = (__this->___spacing_13);
			___x = ((float)((float)L_160+(float)((float)((float)L_161+(float)L_162))));
		}

IL_0392:
		{
			bool L_163 = Enumerator_MoveNext_m3520((&V_18), /*hidden argument*/Enumerator_MoveNext_m3520_MethodInfo_var);
			if (L_163)
			{
				goto IL_02ec;
			}
		}

IL_039e:
		{
			IL2CPP_LEAVE(0x3B0, FINALLY_03a3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_03a3;
	}

FINALLY_03a3:
	{ // begin finally (depth: 1)
		Enumerator_t740  L_164 = V_18;
		Enumerator_t740  L_165 = L_164;
		Object_t * L_166 = Box(Enumerator_t740_il2cpp_TypeInfo_var, &L_165);
		NullCheck(L_166);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t69_il2cpp_TypeInfo_var, L_166);
		IL2CPP_END_FINALLY(931)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(931)
	{
		IL2CPP_JUMP_TBL(0x3B0, IL_03b0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_03b0:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::CalcHeight()
extern TypeInfo* GUILayoutUtility_t518_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t68_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t740_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t69_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t517_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3518_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3519_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3520_MethodInfo_var;
extern "C" void GUILayoutGroup_CalcHeight_m2446 (GUILayoutGroup_t514 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t518_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(945);
		Mathf_t68_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Enumerator_t740_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(952);
		IDisposable_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		GUIStyle_t517_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(953);
		List_1_GetEnumerator_m3518_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483947);
		Enumerator_get_Current_m3519_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483948);
		Enumerator_MoveNext_m3520_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483949);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	GUILayoutEntry_t519 * V_4 = {0};
	Enumerator_t740  V_5 = {0};
	RectOffset_t291 * V_6 = {0};
	int32_t V_7 = 0;
	bool V_8 = false;
	GUILayoutEntry_t519 * V_9 = {0};
	Enumerator_t740  V_10 = {0};
	RectOffset_t291 * V_11 = {0};
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B36_0 = 0;
	int32_t G_B36_1 = 0;
	GUILayoutGroup_t514 * G_B36_2 = {0};
	int32_t G_B35_0 = 0;
	int32_t G_B35_1 = 0;
	GUILayoutGroup_t514 * G_B35_2 = {0};
	int32_t G_B37_0 = 0;
	int32_t G_B37_1 = 0;
	int32_t G_B37_2 = 0;
	GUILayoutGroup_t514 * G_B37_3 = {0};
	{
		List_1_t520 * L_0 = (__this->___entries_10);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_0);
		if (L_1)
		{
			goto IL_0033;
		}
	}
	{
		GUIStyle_t517 * L_2 = GUILayoutEntry_get_style_m2429(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		RectOffset_t291 * L_3 = GUIStyle_get_padding_m2561(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = RectOffset_get_vertical_m2026(L_3, /*hidden argument*/NULL);
		float L_5 = (((float)L_4));
		V_14 = L_5;
		((GUILayoutEntry_t519 *)__this)->___minHeight_2 = L_5;
		float L_6 = V_14;
		((GUILayoutEntry_t519 *)__this)->___maxHeight_3 = L_6;
		return;
	}

IL_0033:
	{
		float L_7 = (0.0f);
		V_14 = L_7;
		__this->___childMaxHeight_25 = L_7;
		float L_8 = V_14;
		__this->___childMinHeight_24 = L_8;
		V_0 = 0;
		V_1 = 0;
		__this->___stretchableCountY_19 = 0;
		bool L_9 = (__this->___isVertical_11);
		if (!L_9)
		{
			goto IL_01d4;
		}
	}
	{
		V_2 = 0;
		V_3 = 1;
		List_1_t520 * L_10 = (__this->___entries_10);
		NullCheck(L_10);
		Enumerator_t740  L_11 = List_1_GetEnumerator_m3518(L_10, /*hidden argument*/List_1_GetEnumerator_m3518_MethodInfo_var);
		V_5 = L_11;
	}

IL_0070:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0159;
		}

IL_0075:
		{
			GUILayoutEntry_t519 * L_12 = Enumerator_get_Current_m3519((&V_5), /*hidden argument*/Enumerator_get_Current_m3519_MethodInfo_var);
			V_4 = L_12;
			GUILayoutEntry_t519 * L_13 = V_4;
			NullCheck(L_13);
			VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_13);
			GUILayoutEntry_t519 * L_14 = V_4;
			NullCheck(L_14);
			RectOffset_t291 * L_15 = (RectOffset_t291 *)VirtFuncInvoker0< RectOffset_t291 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_14);
			V_6 = L_15;
			GUILayoutEntry_t519 * L_16 = V_4;
			NullCheck(L_16);
			GUIStyle_t517 * L_17 = GUILayoutEntry_get_style_m2429(L_16, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t518_il2cpp_TypeInfo_var);
			GUIStyle_t517 * L_18 = GUILayoutUtility_get_spaceStyle_m2426(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((((Object_t*)(GUIStyle_t517 *)L_17) == ((Object_t*)(GUIStyle_t517 *)L_18)))
			{
				goto IL_011d;
			}
		}

IL_009f:
		{
			bool L_19 = V_3;
			if (L_19)
			{
				goto IL_00b9;
			}
		}

IL_00a5:
		{
			int32_t L_20 = V_2;
			RectOffset_t291 * L_21 = V_6;
			NullCheck(L_21);
			int32_t L_22 = RectOffset_get_top_m2031(L_21, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
			int32_t L_23 = Mathf_Max_m214(NULL /*static, unused*/, L_20, L_22, /*hidden argument*/NULL);
			V_7 = L_23;
			goto IL_00be;
		}

IL_00b9:
		{
			V_7 = 0;
			V_3 = 0;
		}

IL_00be:
		{
			float L_24 = (__this->___childMinHeight_24);
			GUILayoutEntry_t519 * L_25 = V_4;
			NullCheck(L_25);
			float L_26 = (L_25->___minHeight_2);
			float L_27 = (__this->___spacing_13);
			int32_t L_28 = V_7;
			__this->___childMinHeight_24 = ((float)((float)L_24+(float)((float)((float)((float)((float)L_26+(float)L_27))+(float)(((float)L_28))))));
			float L_29 = (__this->___childMaxHeight_25);
			GUILayoutEntry_t519 * L_30 = V_4;
			NullCheck(L_30);
			float L_31 = (L_30->___maxHeight_3);
			float L_32 = (__this->___spacing_13);
			int32_t L_33 = V_7;
			__this->___childMaxHeight_25 = ((float)((float)L_29+(float)((float)((float)((float)((float)L_31+(float)L_32))+(float)(((float)L_33))))));
			RectOffset_t291 * L_34 = V_6;
			NullCheck(L_34);
			int32_t L_35 = RectOffset_get_bottom_m2546(L_34, /*hidden argument*/NULL);
			V_2 = L_35;
			int32_t L_36 = (__this->___stretchableCountY_19);
			GUILayoutEntry_t519 * L_37 = V_4;
			NullCheck(L_37);
			int32_t L_38 = (L_37->___stretchHeight_6);
			__this->___stretchableCountY_19 = ((int32_t)((int32_t)L_36+(int32_t)L_38));
			goto IL_0159;
		}

IL_011d:
		{
			float L_39 = (__this->___childMinHeight_24);
			GUILayoutEntry_t519 * L_40 = V_4;
			NullCheck(L_40);
			float L_41 = (L_40->___minHeight_2);
			__this->___childMinHeight_24 = ((float)((float)L_39+(float)L_41));
			float L_42 = (__this->___childMaxHeight_25);
			GUILayoutEntry_t519 * L_43 = V_4;
			NullCheck(L_43);
			float L_44 = (L_43->___maxHeight_3);
			__this->___childMaxHeight_25 = ((float)((float)L_42+(float)L_44));
			int32_t L_45 = (__this->___stretchableCountY_19);
			GUILayoutEntry_t519 * L_46 = V_4;
			NullCheck(L_46);
			int32_t L_47 = (L_46->___stretchHeight_6);
			__this->___stretchableCountY_19 = ((int32_t)((int32_t)L_45+(int32_t)L_47));
		}

IL_0159:
		{
			bool L_48 = Enumerator_MoveNext_m3520((&V_5), /*hidden argument*/Enumerator_MoveNext_m3520_MethodInfo_var);
			if (L_48)
			{
				goto IL_0075;
			}
		}

IL_0165:
		{
			IL2CPP_LEAVE(0x177, FINALLY_016a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_016a;
	}

FINALLY_016a:
	{ // begin finally (depth: 1)
		Enumerator_t740  L_49 = V_5;
		Enumerator_t740  L_50 = L_49;
		Object_t * L_51 = Box(Enumerator_t740_il2cpp_TypeInfo_var, &L_50);
		NullCheck(L_51);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t69_il2cpp_TypeInfo_var, L_51);
		IL2CPP_END_FINALLY(362)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(362)
	{
		IL2CPP_JUMP_TBL(0x177, IL_0177)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_0177:
	{
		float L_52 = (__this->___childMinHeight_24);
		float L_53 = (__this->___spacing_13);
		__this->___childMinHeight_24 = ((float)((float)L_52-(float)L_53));
		float L_54 = (__this->___childMaxHeight_25);
		float L_55 = (__this->___spacing_13);
		__this->___childMaxHeight_25 = ((float)((float)L_54-(float)L_55));
		List_1_t520 * L_56 = (__this->___entries_10);
		NullCheck(L_56);
		int32_t L_57 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_56);
		if (!L_57)
		{
			goto IL_01cb;
		}
	}
	{
		List_1_t520 * L_58 = (__this->___entries_10);
		NullCheck(L_58);
		GUILayoutEntry_t519 * L_59 = (GUILayoutEntry_t519 *)VirtFuncInvoker1< GUILayoutEntry_t519 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32) */, L_58, 0);
		NullCheck(L_59);
		RectOffset_t291 * L_60 = (RectOffset_t291 *)VirtFuncInvoker0< RectOffset_t291 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_59);
		NullCheck(L_60);
		int32_t L_61 = RectOffset_get_top_m2031(L_60, /*hidden argument*/NULL);
		V_0 = L_61;
		int32_t L_62 = V_2;
		V_1 = L_62;
		goto IL_01cf;
	}

IL_01cb:
	{
		int32_t L_63 = 0;
		V_0 = L_63;
		V_1 = L_63;
	}

IL_01cf:
	{
		goto IL_02b0;
	}

IL_01d4:
	{
		V_8 = 1;
		List_1_t520 * L_64 = (__this->___entries_10);
		NullCheck(L_64);
		Enumerator_t740  L_65 = List_1_GetEnumerator_m3518(L_64, /*hidden argument*/List_1_GetEnumerator_m3518_MethodInfo_var);
		V_10 = L_65;
	}

IL_01e4:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0292;
		}

IL_01e9:
		{
			GUILayoutEntry_t519 * L_66 = Enumerator_get_Current_m3519((&V_10), /*hidden argument*/Enumerator_get_Current_m3519_MethodInfo_var);
			V_9 = L_66;
			GUILayoutEntry_t519 * L_67 = V_9;
			NullCheck(L_67);
			VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_67);
			GUILayoutEntry_t519 * L_68 = V_9;
			NullCheck(L_68);
			RectOffset_t291 * L_69 = (RectOffset_t291 *)VirtFuncInvoker0< RectOffset_t291 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_68);
			V_11 = L_69;
			GUILayoutEntry_t519 * L_70 = V_9;
			NullCheck(L_70);
			GUIStyle_t517 * L_71 = GUILayoutEntry_get_style_m2429(L_70, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t518_il2cpp_TypeInfo_var);
			GUIStyle_t517 * L_72 = GUILayoutUtility_get_spaceStyle_m2426(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((((Object_t*)(GUIStyle_t517 *)L_71) == ((Object_t*)(GUIStyle_t517 *)L_72)))
			{
				goto IL_027e;
			}
		}

IL_0213:
		{
			bool L_73 = V_8;
			if (L_73)
			{
				goto IL_023b;
			}
		}

IL_021a:
		{
			RectOffset_t291 * L_74 = V_11;
			NullCheck(L_74);
			int32_t L_75 = RectOffset_get_top_m2031(L_74, /*hidden argument*/NULL);
			int32_t L_76 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
			int32_t L_77 = Mathf_Min_m1874(NULL /*static, unused*/, L_75, L_76, /*hidden argument*/NULL);
			V_0 = L_77;
			RectOffset_t291 * L_78 = V_11;
			NullCheck(L_78);
			int32_t L_79 = RectOffset_get_bottom_m2546(L_78, /*hidden argument*/NULL);
			int32_t L_80 = V_1;
			int32_t L_81 = Mathf_Min_m1874(NULL /*static, unused*/, L_79, L_80, /*hidden argument*/NULL);
			V_1 = L_81;
			goto IL_024e;
		}

IL_023b:
		{
			RectOffset_t291 * L_82 = V_11;
			NullCheck(L_82);
			int32_t L_83 = RectOffset_get_top_m2031(L_82, /*hidden argument*/NULL);
			V_0 = L_83;
			RectOffset_t291 * L_84 = V_11;
			NullCheck(L_84);
			int32_t L_85 = RectOffset_get_bottom_m2546(L_84, /*hidden argument*/NULL);
			V_1 = L_85;
			V_8 = 0;
		}

IL_024e:
		{
			GUILayoutEntry_t519 * L_86 = V_9;
			NullCheck(L_86);
			float L_87 = (L_86->___minHeight_2);
			float L_88 = (__this->___childMinHeight_24);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
			float L_89 = Mathf_Max_m1974(NULL /*static, unused*/, L_87, L_88, /*hidden argument*/NULL);
			__this->___childMinHeight_24 = L_89;
			GUILayoutEntry_t519 * L_90 = V_9;
			NullCheck(L_90);
			float L_91 = (L_90->___maxHeight_3);
			float L_92 = (__this->___childMaxHeight_25);
			float L_93 = Mathf_Max_m1974(NULL /*static, unused*/, L_91, L_92, /*hidden argument*/NULL);
			__this->___childMaxHeight_25 = L_93;
		}

IL_027e:
		{
			int32_t L_94 = (__this->___stretchableCountY_19);
			GUILayoutEntry_t519 * L_95 = V_9;
			NullCheck(L_95);
			int32_t L_96 = (L_95->___stretchHeight_6);
			__this->___stretchableCountY_19 = ((int32_t)((int32_t)L_94+(int32_t)L_96));
		}

IL_0292:
		{
			bool L_97 = Enumerator_MoveNext_m3520((&V_10), /*hidden argument*/Enumerator_MoveNext_m3520_MethodInfo_var);
			if (L_97)
			{
				goto IL_01e9;
			}
		}

IL_029e:
		{
			IL2CPP_LEAVE(0x2B0, FINALLY_02a3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_02a3;
	}

FINALLY_02a3:
	{ // begin finally (depth: 1)
		Enumerator_t740  L_98 = V_10;
		Enumerator_t740  L_99 = L_98;
		Object_t * L_100 = Box(Enumerator_t740_il2cpp_TypeInfo_var, &L_99);
		NullCheck(L_100);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t69_il2cpp_TypeInfo_var, L_100);
		IL2CPP_END_FINALLY(675)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(675)
	{
		IL2CPP_JUMP_TBL(0x2B0, IL_02b0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_02b0:
	{
		V_12 = (0.0f);
		V_13 = (0.0f);
		GUIStyle_t517 * L_101 = GUILayoutEntry_get_style_m2429(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle_t517 * L_102 = GUIStyle_get_none_m2572(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((Object_t*)(GUIStyle_t517 *)L_101) == ((Object_t*)(GUIStyle_t517 *)L_102))))
		{
			goto IL_02d9;
		}
	}
	{
		bool L_103 = (__this->___userSpecifiedHeight_21);
		if (!L_103)
		{
			goto IL_0310;
		}
	}

IL_02d9:
	{
		GUIStyle_t517 * L_104 = GUILayoutEntry_get_style_m2429(__this, /*hidden argument*/NULL);
		NullCheck(L_104);
		RectOffset_t291 * L_105 = GUIStyle_get_padding_m2561(L_104, /*hidden argument*/NULL);
		NullCheck(L_105);
		int32_t L_106 = RectOffset_get_top_m2031(L_105, /*hidden argument*/NULL);
		int32_t L_107 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
		int32_t L_108 = Mathf_Max_m214(NULL /*static, unused*/, L_106, L_107, /*hidden argument*/NULL);
		V_12 = (((float)L_108));
		GUIStyle_t517 * L_109 = GUILayoutEntry_get_style_m2429(__this, /*hidden argument*/NULL);
		NullCheck(L_109);
		RectOffset_t291 * L_110 = GUIStyle_get_padding_m2561(L_109, /*hidden argument*/NULL);
		NullCheck(L_110);
		int32_t L_111 = RectOffset_get_bottom_m2546(L_110, /*hidden argument*/NULL);
		int32_t L_112 = V_1;
		int32_t L_113 = Mathf_Max_m214(NULL /*static, unused*/, L_111, L_112, /*hidden argument*/NULL);
		V_13 = (((float)L_113));
		goto IL_0332;
	}

IL_0310:
	{
		RectOffset_t291 * L_114 = (__this->___m_Margin_26);
		int32_t L_115 = V_0;
		NullCheck(L_114);
		RectOffset_set_top_m2545(L_114, L_115, /*hidden argument*/NULL);
		RectOffset_t291 * L_116 = (__this->___m_Margin_26);
		int32_t L_117 = V_1;
		NullCheck(L_116);
		RectOffset_set_bottom_m2547(L_116, L_117, /*hidden argument*/NULL);
		float L_118 = (0.0f);
		V_13 = L_118;
		V_12 = L_118;
	}

IL_0332:
	{
		float L_119 = (((GUILayoutEntry_t519 *)__this)->___minHeight_2);
		float L_120 = (__this->___childMinHeight_24);
		float L_121 = V_12;
		float L_122 = V_13;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
		float L_123 = Mathf_Max_m1974(NULL /*static, unused*/, L_119, ((float)((float)((float)((float)L_120+(float)L_121))+(float)L_122)), /*hidden argument*/NULL);
		((GUILayoutEntry_t519 *)__this)->___minHeight_2 = L_123;
		float L_124 = (((GUILayoutEntry_t519 *)__this)->___maxHeight_3);
		if ((!(((float)L_124) == ((float)(0.0f)))))
		{
			goto IL_03a1;
		}
	}
	{
		int32_t L_125 = (((GUILayoutEntry_t519 *)__this)->___stretchHeight_6);
		int32_t L_126 = (__this->___stretchableCountY_19);
		GUIStyle_t517 * L_127 = GUILayoutEntry_get_style_m2429(__this, /*hidden argument*/NULL);
		NullCheck(L_127);
		bool L_128 = GUIStyle_get_stretchHeight_m2567(L_127, /*hidden argument*/NULL);
		G_B35_0 = L_126;
		G_B35_1 = L_125;
		G_B35_2 = __this;
		if (!L_128)
		{
			G_B36_0 = L_126;
			G_B36_1 = L_125;
			G_B36_2 = __this;
			goto IL_0382;
		}
	}
	{
		G_B37_0 = 1;
		G_B37_1 = G_B35_0;
		G_B37_2 = G_B35_1;
		G_B37_3 = G_B35_2;
		goto IL_0383;
	}

IL_0382:
	{
		G_B37_0 = 0;
		G_B37_1 = G_B36_0;
		G_B37_2 = G_B36_1;
		G_B37_3 = G_B36_2;
	}

IL_0383:
	{
		NullCheck(G_B37_3);
		((GUILayoutEntry_t519 *)G_B37_3)->___stretchHeight_6 = ((int32_t)((int32_t)G_B37_2+(int32_t)((int32_t)((int32_t)G_B37_1+(int32_t)G_B37_0))));
		float L_129 = (__this->___childMaxHeight_25);
		float L_130 = V_12;
		float L_131 = V_13;
		((GUILayoutEntry_t519 *)__this)->___maxHeight_3 = ((float)((float)((float)((float)L_129+(float)L_130))+(float)L_131));
		goto IL_03a8;
	}

IL_03a1:
	{
		((GUILayoutEntry_t519 *)__this)->___stretchHeight_6 = 0;
	}

IL_03a8:
	{
		float L_132 = (((GUILayoutEntry_t519 *)__this)->___maxHeight_3);
		float L_133 = (((GUILayoutEntry_t519 *)__this)->___minHeight_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
		float L_134 = Mathf_Max_m1974(NULL /*static, unused*/, L_132, L_133, /*hidden argument*/NULL);
		((GUILayoutEntry_t519 *)__this)->___maxHeight_3 = L_134;
		GUIStyle_t517 * L_135 = GUILayoutEntry_get_style_m2429(__this, /*hidden argument*/NULL);
		NullCheck(L_135);
		float L_136 = GUIStyle_get_fixedHeight_m2564(L_135, /*hidden argument*/NULL);
		if ((((float)L_136) == ((float)(0.0f))))
		{
			goto IL_03f7;
		}
	}
	{
		GUIStyle_t517 * L_137 = GUILayoutEntry_get_style_m2429(__this, /*hidden argument*/NULL);
		NullCheck(L_137);
		float L_138 = GUIStyle_get_fixedHeight_m2564(L_137, /*hidden argument*/NULL);
		float L_139 = L_138;
		V_14 = L_139;
		((GUILayoutEntry_t519 *)__this)->___minHeight_2 = L_139;
		float L_140 = V_14;
		((GUILayoutEntry_t519 *)__this)->___maxHeight_3 = L_140;
		((GUILayoutEntry_t519 *)__this)->___stretchHeight_6 = 0;
	}

IL_03f7:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single)
extern TypeInfo* GUIStyle_t517_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t68_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutUtility_t518_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t740_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t69_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3518_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3519_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3520_MethodInfo_var;
extern "C" void GUILayoutGroup_SetVertical_m2447 (GUILayoutGroup_t514 * __this, float ___y, float ___height, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t517_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(953);
		Mathf_t68_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		GUILayoutUtility_t518_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(945);
		Enumerator_t740_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(952);
		IDisposable_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		List_1_GetEnumerator_m3518_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483947);
		Enumerator_get_Current_m3519_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483948);
		Enumerator_MoveNext_m3520_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483949);
		s_Il2CppMethodIntialized = true;
	}
	RectOffset_t291 * V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	bool V_7 = false;
	GUILayoutEntry_t519 * V_8 = {0};
	Enumerator_t740  V_9 = {0};
	float V_10 = 0.0f;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	GUILayoutEntry_t519 * V_13 = {0};
	Enumerator_t740  V_14 = {0};
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	GUILayoutEntry_t519 * V_20 = {0};
	Enumerator_t740  V_21 = {0};
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B22_0 = 0;
	{
		float L_0 = ___y;
		float L_1 = ___height;
		GUILayoutEntry_SetVertical_m2435(__this, L_0, L_1, /*hidden argument*/NULL);
		List_1_t520 * L_2 = (__this->___entries_10);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_2);
		if (L_3)
		{
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		GUIStyle_t517 * L_4 = GUILayoutEntry_get_style_m2429(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		RectOffset_t291 * L_5 = GUIStyle_get_padding_m2561(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		bool L_6 = (__this->___resetCoords_12);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		___y = (0.0f);
	}

IL_0037:
	{
		bool L_7 = (__this->___isVertical_11);
		if (!L_7)
		{
			goto IL_022f;
		}
	}
	{
		GUIStyle_t517 * L_8 = GUILayoutEntry_get_style_m2429(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle_t517 * L_9 = GUIStyle_get_none_m2572(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((Object_t*)(GUIStyle_t517 *)L_8) == ((Object_t*)(GUIStyle_t517 *)L_9)))
		{
			goto IL_00c6;
		}
	}
	{
		RectOffset_t291 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = RectOffset_get_top_m2031(L_10, /*hidden argument*/NULL);
		V_1 = (((float)L_11));
		RectOffset_t291 * L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = RectOffset_get_bottom_m2546(L_12, /*hidden argument*/NULL);
		V_2 = (((float)L_13));
		List_1_t520 * L_14 = (__this->___entries_10);
		NullCheck(L_14);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_14);
		if (!L_15)
		{
			goto IL_00ba;
		}
	}
	{
		float L_16 = V_1;
		List_1_t520 * L_17 = (__this->___entries_10);
		NullCheck(L_17);
		GUILayoutEntry_t519 * L_18 = (GUILayoutEntry_t519 *)VirtFuncInvoker1< GUILayoutEntry_t519 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32) */, L_17, 0);
		NullCheck(L_18);
		RectOffset_t291 * L_19 = (RectOffset_t291 *)VirtFuncInvoker0< RectOffset_t291 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_18);
		NullCheck(L_19);
		int32_t L_20 = RectOffset_get_top_m2031(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
		float L_21 = Mathf_Max_m1974(NULL /*static, unused*/, L_16, (((float)L_20)), /*hidden argument*/NULL);
		V_1 = L_21;
		float L_22 = V_2;
		List_1_t520 * L_23 = (__this->___entries_10);
		List_1_t520 * L_24 = (__this->___entries_10);
		NullCheck(L_24);
		int32_t L_25 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_24);
		NullCheck(L_23);
		GUILayoutEntry_t519 * L_26 = (GUILayoutEntry_t519 *)VirtFuncInvoker1< GUILayoutEntry_t519 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32) */, L_23, ((int32_t)((int32_t)L_25-(int32_t)1)));
		NullCheck(L_26);
		RectOffset_t291 * L_27 = (RectOffset_t291 *)VirtFuncInvoker0< RectOffset_t291 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_26);
		NullCheck(L_27);
		int32_t L_28 = RectOffset_get_bottom_m2546(L_27, /*hidden argument*/NULL);
		float L_29 = Mathf_Max_m1974(NULL /*static, unused*/, L_22, (((float)L_28)), /*hidden argument*/NULL);
		V_2 = L_29;
	}

IL_00ba:
	{
		float L_30 = ___y;
		float L_31 = V_1;
		___y = ((float)((float)L_30+(float)L_31));
		float L_32 = ___height;
		float L_33 = V_2;
		float L_34 = V_1;
		___height = ((float)((float)L_32-(float)((float)((float)L_33+(float)L_34))));
	}

IL_00c6:
	{
		float L_35 = ___height;
		float L_36 = (__this->___spacing_13);
		List_1_t520 * L_37 = (__this->___entries_10);
		NullCheck(L_37);
		int32_t L_38 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_37);
		V_3 = ((float)((float)L_35-(float)((float)((float)L_36*(float)(((float)((int32_t)((int32_t)L_38-(int32_t)1))))))));
		V_4 = (0.0f);
		float L_39 = (__this->___childMinHeight_24);
		float L_40 = (__this->___childMaxHeight_25);
		if ((((float)L_39) == ((float)L_40)))
		{
			goto IL_011d;
		}
	}
	{
		float L_41 = V_3;
		float L_42 = (__this->___childMinHeight_24);
		float L_43 = (__this->___childMaxHeight_25);
		float L_44 = (__this->___childMinHeight_24);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
		float L_45 = Mathf_Clamp_m1786(NULL /*static, unused*/, ((float)((float)((float)((float)L_41-(float)L_42))/(float)((float)((float)L_43-(float)L_44)))), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_4 = L_45;
	}

IL_011d:
	{
		V_5 = (0.0f);
		float L_46 = V_3;
		float L_47 = (__this->___childMaxHeight_25);
		if ((!(((float)L_46) > ((float)L_47))))
		{
			goto IL_014e;
		}
	}
	{
		int32_t L_48 = (__this->___stretchableCountY_19);
		if ((((int32_t)L_48) <= ((int32_t)0)))
		{
			goto IL_014e;
		}
	}
	{
		float L_49 = V_3;
		float L_50 = (__this->___childMaxHeight_25);
		int32_t L_51 = (__this->___stretchableCountY_19);
		V_5 = ((float)((float)((float)((float)L_49-(float)L_50))/(float)(((float)L_51))));
	}

IL_014e:
	{
		V_6 = 0;
		V_7 = 1;
		List_1_t520 * L_52 = (__this->___entries_10);
		NullCheck(L_52);
		Enumerator_t740  L_53 = List_1_GetEnumerator_m3518(L_52, /*hidden argument*/List_1_GetEnumerator_m3518_MethodInfo_var);
		V_9 = L_53;
	}

IL_0161:
	try
	{ // begin try (depth: 1)
		{
			goto IL_020c;
		}

IL_0166:
		{
			GUILayoutEntry_t519 * L_54 = Enumerator_get_Current_m3519((&V_9), /*hidden argument*/Enumerator_get_Current_m3519_MethodInfo_var);
			V_8 = L_54;
			GUILayoutEntry_t519 * L_55 = V_8;
			NullCheck(L_55);
			float L_56 = (L_55->___minHeight_2);
			GUILayoutEntry_t519 * L_57 = V_8;
			NullCheck(L_57);
			float L_58 = (L_57->___maxHeight_3);
			float L_59 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
			float L_60 = Mathf_Lerp_m1807(NULL /*static, unused*/, L_56, L_58, L_59, /*hidden argument*/NULL);
			V_10 = L_60;
			float L_61 = V_10;
			float L_62 = V_5;
			GUILayoutEntry_t519 * L_63 = V_8;
			NullCheck(L_63);
			int32_t L_64 = (L_63->___stretchHeight_6);
			V_10 = ((float)((float)L_61+(float)((float)((float)L_62*(float)(((float)L_64))))));
			GUILayoutEntry_t519 * L_65 = V_8;
			NullCheck(L_65);
			GUIStyle_t517 * L_66 = GUILayoutEntry_get_style_m2429(L_65, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t518_il2cpp_TypeInfo_var);
			GUIStyle_t517 * L_67 = GUILayoutUtility_get_spaceStyle_m2426(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((((Object_t*)(GUIStyle_t517 *)L_66) == ((Object_t*)(GUIStyle_t517 *)L_67)))
			{
				goto IL_01eb;
			}
		}

IL_01a7:
		{
			GUILayoutEntry_t519 * L_68 = V_8;
			NullCheck(L_68);
			RectOffset_t291 * L_69 = (RectOffset_t291 *)VirtFuncInvoker0< RectOffset_t291 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_68);
			NullCheck(L_69);
			int32_t L_70 = RectOffset_get_top_m2031(L_69, /*hidden argument*/NULL);
			V_11 = L_70;
			bool L_71 = V_7;
			if (!L_71)
			{
				goto IL_01c2;
			}
		}

IL_01bc:
		{
			V_11 = 0;
			V_7 = 0;
		}

IL_01c2:
		{
			int32_t L_72 = V_6;
			int32_t L_73 = V_11;
			if ((((int32_t)L_72) <= ((int32_t)L_73)))
			{
				goto IL_01d2;
			}
		}

IL_01cb:
		{
			int32_t L_74 = V_6;
			G_B22_0 = L_74;
			goto IL_01d4;
		}

IL_01d2:
		{
			int32_t L_75 = V_11;
			G_B22_0 = L_75;
		}

IL_01d4:
		{
			V_12 = G_B22_0;
			float L_76 = ___y;
			int32_t L_77 = V_12;
			___y = ((float)((float)L_76+(float)(((float)L_77))));
			GUILayoutEntry_t519 * L_78 = V_8;
			NullCheck(L_78);
			RectOffset_t291 * L_79 = (RectOffset_t291 *)VirtFuncInvoker0< RectOffset_t291 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_78);
			NullCheck(L_79);
			int32_t L_80 = RectOffset_get_bottom_m2546(L_79, /*hidden argument*/NULL);
			V_6 = L_80;
		}

IL_01eb:
		{
			GUILayoutEntry_t519 * L_81 = V_8;
			float L_82 = ___y;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
			float L_83 = roundf(L_82);
			float L_84 = V_10;
			float L_85 = roundf(L_84);
			NullCheck(L_81);
			VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_81, L_83, L_85);
			float L_86 = ___y;
			float L_87 = V_10;
			float L_88 = (__this->___spacing_13);
			___y = ((float)((float)L_86+(float)((float)((float)L_87+(float)L_88))));
		}

IL_020c:
		{
			bool L_89 = Enumerator_MoveNext_m3520((&V_9), /*hidden argument*/Enumerator_MoveNext_m3520_MethodInfo_var);
			if (L_89)
			{
				goto IL_0166;
			}
		}

IL_0218:
		{
			IL2CPP_LEAVE(0x22A, FINALLY_021d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_021d;
	}

FINALLY_021d:
	{ // begin finally (depth: 1)
		Enumerator_t740  L_90 = V_9;
		Enumerator_t740  L_91 = L_90;
		Object_t * L_92 = Box(Enumerator_t740_il2cpp_TypeInfo_var, &L_91);
		NullCheck(L_92);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t69_il2cpp_TypeInfo_var, L_92);
		IL2CPP_END_FINALLY(541)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(541)
	{
		IL2CPP_JUMP_TBL(0x22A, IL_022a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_022a:
	{
		goto IL_03c1;
	}

IL_022f:
	{
		GUIStyle_t517 * L_93 = GUILayoutEntry_get_style_m2429(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle_t517 * L_94 = GUIStyle_get_none_m2572(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((Object_t*)(GUIStyle_t517 *)L_93) == ((Object_t*)(GUIStyle_t517 *)L_94)))
		{
			goto IL_02f6;
		}
	}
	{
		List_1_t520 * L_95 = (__this->___entries_10);
		NullCheck(L_95);
		Enumerator_t740  L_96 = List_1_GetEnumerator_m3518(L_95, /*hidden argument*/List_1_GetEnumerator_m3518_MethodInfo_var);
		V_14 = L_96;
	}

IL_024c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_02d3;
		}

IL_0251:
		{
			GUILayoutEntry_t519 * L_97 = Enumerator_get_Current_m3519((&V_14), /*hidden argument*/Enumerator_get_Current_m3519_MethodInfo_var);
			V_13 = L_97;
			GUILayoutEntry_t519 * L_98 = V_13;
			NullCheck(L_98);
			RectOffset_t291 * L_99 = (RectOffset_t291 *)VirtFuncInvoker0< RectOffset_t291 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_98);
			NullCheck(L_99);
			int32_t L_100 = RectOffset_get_top_m2031(L_99, /*hidden argument*/NULL);
			RectOffset_t291 * L_101 = V_0;
			NullCheck(L_101);
			int32_t L_102 = RectOffset_get_top_m2031(L_101, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
			int32_t L_103 = Mathf_Max_m214(NULL /*static, unused*/, L_100, L_102, /*hidden argument*/NULL);
			V_15 = (((float)L_103));
			float L_104 = ___y;
			float L_105 = V_15;
			V_16 = ((float)((float)L_104+(float)L_105));
			float L_106 = ___height;
			GUILayoutEntry_t519 * L_107 = V_13;
			NullCheck(L_107);
			RectOffset_t291 * L_108 = (RectOffset_t291 *)VirtFuncInvoker0< RectOffset_t291 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_107);
			NullCheck(L_108);
			int32_t L_109 = RectOffset_get_bottom_m2546(L_108, /*hidden argument*/NULL);
			RectOffset_t291 * L_110 = V_0;
			NullCheck(L_110);
			int32_t L_111 = RectOffset_get_bottom_m2546(L_110, /*hidden argument*/NULL);
			int32_t L_112 = Mathf_Max_m214(NULL /*static, unused*/, L_109, L_111, /*hidden argument*/NULL);
			float L_113 = V_15;
			V_17 = ((float)((float)((float)((float)L_106-(float)(((float)L_112))))-(float)L_113));
			GUILayoutEntry_t519 * L_114 = V_13;
			NullCheck(L_114);
			int32_t L_115 = (L_114->___stretchHeight_6);
			if (!L_115)
			{
				goto IL_02b5;
			}
		}

IL_02a5:
		{
			GUILayoutEntry_t519 * L_116 = V_13;
			float L_117 = V_16;
			float L_118 = V_17;
			NullCheck(L_116);
			VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_116, L_117, L_118);
			goto IL_02d3;
		}

IL_02b5:
		{
			GUILayoutEntry_t519 * L_119 = V_13;
			float L_120 = V_16;
			float L_121 = V_17;
			GUILayoutEntry_t519 * L_122 = V_13;
			NullCheck(L_122);
			float L_123 = (L_122->___minHeight_2);
			GUILayoutEntry_t519 * L_124 = V_13;
			NullCheck(L_124);
			float L_125 = (L_124->___maxHeight_3);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
			float L_126 = Mathf_Clamp_m1786(NULL /*static, unused*/, L_121, L_123, L_125, /*hidden argument*/NULL);
			NullCheck(L_119);
			VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_119, L_120, L_126);
		}

IL_02d3:
		{
			bool L_127 = Enumerator_MoveNext_m3520((&V_14), /*hidden argument*/Enumerator_MoveNext_m3520_MethodInfo_var);
			if (L_127)
			{
				goto IL_0251;
			}
		}

IL_02df:
		{
			IL2CPP_LEAVE(0x2F1, FINALLY_02e4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_02e4;
	}

FINALLY_02e4:
	{ // begin finally (depth: 1)
		Enumerator_t740  L_128 = V_14;
		Enumerator_t740  L_129 = L_128;
		Object_t * L_130 = Box(Enumerator_t740_il2cpp_TypeInfo_var, &L_129);
		NullCheck(L_130);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t69_il2cpp_TypeInfo_var, L_130);
		IL2CPP_END_FINALLY(740)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(740)
	{
		IL2CPP_JUMP_TBL(0x2F1, IL_02f1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_02f1:
	{
		goto IL_03c1;
	}

IL_02f6:
	{
		float L_131 = ___y;
		RectOffset_t291 * L_132 = (RectOffset_t291 *)VirtFuncInvoker0< RectOffset_t291 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutGroup::get_margin() */, __this);
		NullCheck(L_132);
		int32_t L_133 = RectOffset_get_top_m2031(L_132, /*hidden argument*/NULL);
		V_18 = ((float)((float)L_131-(float)(((float)L_133))));
		float L_134 = ___height;
		RectOffset_t291 * L_135 = (RectOffset_t291 *)VirtFuncInvoker0< RectOffset_t291 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutGroup::get_margin() */, __this);
		NullCheck(L_135);
		int32_t L_136 = RectOffset_get_vertical_m2026(L_135, /*hidden argument*/NULL);
		V_19 = ((float)((float)L_134+(float)(((float)L_136))));
		List_1_t520 * L_137 = (__this->___entries_10);
		NullCheck(L_137);
		Enumerator_t740  L_138 = List_1_GetEnumerator_m3518(L_137, /*hidden argument*/List_1_GetEnumerator_m3518_MethodInfo_var);
		V_21 = L_138;
	}

IL_0323:
	try
	{ // begin try (depth: 1)
		{
			goto IL_03a3;
		}

IL_0328:
		{
			GUILayoutEntry_t519 * L_139 = Enumerator_get_Current_m3519((&V_21), /*hidden argument*/Enumerator_get_Current_m3519_MethodInfo_var);
			V_20 = L_139;
			GUILayoutEntry_t519 * L_140 = V_20;
			NullCheck(L_140);
			int32_t L_141 = (L_140->___stretchHeight_6);
			if (!L_141)
			{
				goto IL_0369;
			}
		}

IL_033d:
		{
			GUILayoutEntry_t519 * L_142 = V_20;
			float L_143 = V_18;
			GUILayoutEntry_t519 * L_144 = V_20;
			NullCheck(L_144);
			RectOffset_t291 * L_145 = (RectOffset_t291 *)VirtFuncInvoker0< RectOffset_t291 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_144);
			NullCheck(L_145);
			int32_t L_146 = RectOffset_get_top_m2031(L_145, /*hidden argument*/NULL);
			float L_147 = V_19;
			GUILayoutEntry_t519 * L_148 = V_20;
			NullCheck(L_148);
			RectOffset_t291 * L_149 = (RectOffset_t291 *)VirtFuncInvoker0< RectOffset_t291 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_148);
			NullCheck(L_149);
			int32_t L_150 = RectOffset_get_vertical_m2026(L_149, /*hidden argument*/NULL);
			NullCheck(L_142);
			VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_142, ((float)((float)L_143+(float)(((float)L_146)))), ((float)((float)L_147-(float)(((float)L_150)))));
			goto IL_03a3;
		}

IL_0369:
		{
			GUILayoutEntry_t519 * L_151 = V_20;
			float L_152 = V_18;
			GUILayoutEntry_t519 * L_153 = V_20;
			NullCheck(L_153);
			RectOffset_t291 * L_154 = (RectOffset_t291 *)VirtFuncInvoker0< RectOffset_t291 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_153);
			NullCheck(L_154);
			int32_t L_155 = RectOffset_get_top_m2031(L_154, /*hidden argument*/NULL);
			float L_156 = V_19;
			GUILayoutEntry_t519 * L_157 = V_20;
			NullCheck(L_157);
			RectOffset_t291 * L_158 = (RectOffset_t291 *)VirtFuncInvoker0< RectOffset_t291 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_157);
			NullCheck(L_158);
			int32_t L_159 = RectOffset_get_vertical_m2026(L_158, /*hidden argument*/NULL);
			GUILayoutEntry_t519 * L_160 = V_20;
			NullCheck(L_160);
			float L_161 = (L_160->___minHeight_2);
			GUILayoutEntry_t519 * L_162 = V_20;
			NullCheck(L_162);
			float L_163 = (L_162->___maxHeight_3);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
			float L_164 = Mathf_Clamp_m1786(NULL /*static, unused*/, ((float)((float)L_156-(float)(((float)L_159)))), L_161, L_163, /*hidden argument*/NULL);
			NullCheck(L_151);
			VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_151, ((float)((float)L_152+(float)(((float)L_155)))), L_164);
		}

IL_03a3:
		{
			bool L_165 = Enumerator_MoveNext_m3520((&V_21), /*hidden argument*/Enumerator_MoveNext_m3520_MethodInfo_var);
			if (L_165)
			{
				goto IL_0328;
			}
		}

IL_03af:
		{
			IL2CPP_LEAVE(0x3C1, FINALLY_03b4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_03b4;
	}

FINALLY_03b4:
	{ // begin finally (depth: 1)
		Enumerator_t740  L_166 = V_21;
		Enumerator_t740  L_167 = L_166;
		Object_t * L_168 = Box(Enumerator_t740_il2cpp_TypeInfo_var, &L_167);
		NullCheck(L_168);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t69_il2cpp_TypeInfo_var, L_168);
		IL2CPP_END_FINALLY(948)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(948)
	{
		IL2CPP_JUMP_TBL(0x3C1, IL_03c1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_03c1:
	{
		return;
	}
}
// System.String UnityEngine.GUILayoutGroup::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutEntry_t519_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t345_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t740_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t69_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3518_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3519_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3520_MethodInfo_var;
extern "C" String_t* GUILayoutGroup_ToString_m2448 (GUILayoutGroup_t514 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		GUILayoutEntry_t519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(951);
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		Single_t345_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		Enumerator_t740_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(952);
		IDisposable_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		List_1_GetEnumerator_m3518_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483947);
		Enumerator_get_Current_m3519_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483948);
		Enumerator_MoveNext_m3520_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483949);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	int32_t V_2 = 0;
	GUILayoutEntry_t519 * V_3 = {0};
	Enumerator_t740  V_4 = {0};
	String_t* V_5 = {0};
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0023;
	}

IL_0013:
	{
		String_t* L_2 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m351(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral23, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = V_2;
		V_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_5 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutEntry_t519_il2cpp_TypeInfo_var);
		int32_t L_6 = ((GUILayoutEntry_t519_StaticFields*)GUILayoutEntry_t519_il2cpp_TypeInfo_var->static_fields)->___indent_9;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_7 = V_0;
		V_5 = L_7;
		ObjectU5BU5D_t73* L_8 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 5));
		String_t* L_9 = V_5;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 0)) = (Object_t *)L_9;
		ObjectU5BU5D_t73* L_10 = L_8;
		String_t* L_11 = GUILayoutEntry_ToString_m2438(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 1);
		ArrayElementTypeCheck (L_10, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 1)) = (Object_t *)L_11;
		ObjectU5BU5D_t73* L_12 = L_10;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 2);
		ArrayElementTypeCheck (L_12, (String_t*) &_stringLiteral150);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 2)) = (Object_t *)(String_t*) &_stringLiteral150;
		ObjectU5BU5D_t73* L_13 = L_12;
		float L_14 = (__this->___childMinHeight_24);
		float L_15 = L_14;
		Object_t * L_16 = Box(Single_t345_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 3);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 3)) = (Object_t *)L_16;
		ObjectU5BU5D_t73* L_17 = L_13;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 4);
		ArrayElementTypeCheck (L_17, (String_t*) &_stringLiteral151);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 4)) = (Object_t *)(String_t*) &_stringLiteral151;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = String_Concat_m255(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutEntry_t519_il2cpp_TypeInfo_var);
		int32_t L_19 = ((GUILayoutEntry_t519_StaticFields*)GUILayoutEntry_t519_il2cpp_TypeInfo_var->static_fields)->___indent_9;
		((GUILayoutEntry_t519_StaticFields*)GUILayoutEntry_t519_il2cpp_TypeInfo_var->static_fields)->___indent_9 = ((int32_t)((int32_t)L_19+(int32_t)4));
		List_1_t520 * L_20 = (__this->___entries_10);
		NullCheck(L_20);
		Enumerator_t740  L_21 = List_1_GetEnumerator_m3518(L_20, /*hidden argument*/List_1_GetEnumerator_m3518_MethodInfo_var);
		V_4 = L_21;
	}

IL_0082:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a1;
		}

IL_0087:
		{
			GUILayoutEntry_t519 * L_22 = Enumerator_get_Current_m3519((&V_4), /*hidden argument*/Enumerator_get_Current_m3519_MethodInfo_var);
			V_3 = L_22;
			String_t* L_23 = V_0;
			GUILayoutEntry_t519 * L_24 = V_3;
			NullCheck(L_24);
			String_t* L_25 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String UnityEngine.GUILayoutEntry::ToString() */, L_24);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_26 = String_Concat_m346(NULL /*static, unused*/, L_23, L_25, (String_t*) &_stringLiteral24, /*hidden argument*/NULL);
			V_0 = L_26;
		}

IL_00a1:
		{
			bool L_27 = Enumerator_MoveNext_m3520((&V_4), /*hidden argument*/Enumerator_MoveNext_m3520_MethodInfo_var);
			if (L_27)
			{
				goto IL_0087;
			}
		}

IL_00ad:
		{
			IL2CPP_LEAVE(0xBF, FINALLY_00b2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_00b2;
	}

FINALLY_00b2:
	{ // begin finally (depth: 1)
		Enumerator_t740  L_28 = V_4;
		Enumerator_t740  L_29 = L_28;
		Object_t * L_30 = Box(Enumerator_t740_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_30);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t69_il2cpp_TypeInfo_var, L_30);
		IL2CPP_END_FINALLY(178)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(178)
	{
		IL2CPP_JUMP_TBL(0xBF, IL_00bf)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_00bf:
	{
		String_t* L_31 = V_0;
		String_t* L_32 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_33 = String_Concat_m346(NULL /*static, unused*/, L_31, L_32, (String_t*) &_stringLiteral152, /*hidden argument*/NULL);
		V_0 = L_33;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutEntry_t519_il2cpp_TypeInfo_var);
		int32_t L_34 = ((GUILayoutEntry_t519_StaticFields*)GUILayoutEntry_t519_il2cpp_TypeInfo_var->static_fields)->___indent_9;
		((GUILayoutEntry_t519_StaticFields*)GUILayoutEntry_t519_il2cpp_TypeInfo_var->static_fields)->___indent_9 = ((int32_t)((int32_t)L_34-(int32_t)4));
		String_t* L_35 = V_0;
		return L_35;
	}
}
// UnityEngine.GUIScrollGroup
#include "UnityEngine_UnityEngine_GUIScrollGroup.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.GUIScrollGroup
#include "UnityEngine_UnityEngine_GUIScrollGroupMethodDeclarations.h"



// System.Void UnityEngine.GUIScrollGroup::.ctor()
extern "C" void GUIScrollGroup__ctor_m2449 (GUIScrollGroup_t521 * __this, const MethodInfo* method)
{
	{
		__this->___allowHorizontalScroll_33 = 1;
		__this->___allowVerticalScroll_34 = 1;
		GUILayoutGroup__ctor_m2439(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::CalcWidth()
extern "C" void GUIScrollGroup_CalcWidth_m2450 (GUIScrollGroup_t521 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float L_0 = (((GUILayoutEntry_t519 *)__this)->___minWidth_0);
		V_0 = L_0;
		float L_1 = (((GUILayoutEntry_t519 *)__this)->___maxWidth_1);
		V_1 = L_1;
		bool L_2 = (__this->___allowHorizontalScroll_33);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		((GUILayoutEntry_t519 *)__this)->___minWidth_0 = (0.0f);
		((GUILayoutEntry_t519 *)__this)->___maxWidth_1 = (0.0f);
	}

IL_002f:
	{
		GUILayoutGroup_CalcWidth_m2444(__this, /*hidden argument*/NULL);
		float L_3 = (((GUILayoutEntry_t519 *)__this)->___minWidth_0);
		__this->___calcMinWidth_27 = L_3;
		float L_4 = (((GUILayoutEntry_t519 *)__this)->___maxWidth_1);
		__this->___calcMaxWidth_28 = L_4;
		bool L_5 = (__this->___allowHorizontalScroll_33);
		if (!L_5)
		{
			goto IL_009e;
		}
	}
	{
		float L_6 = (((GUILayoutEntry_t519 *)__this)->___minWidth_0);
		if ((!(((float)L_6) > ((float)(32.0f)))))
		{
			goto IL_0073;
		}
	}
	{
		((GUILayoutEntry_t519 *)__this)->___minWidth_0 = (32.0f);
	}

IL_0073:
	{
		float L_7 = V_0;
		if ((((float)L_7) == ((float)(0.0f))))
		{
			goto IL_0085;
		}
	}
	{
		float L_8 = V_0;
		((GUILayoutEntry_t519 *)__this)->___minWidth_0 = L_8;
	}

IL_0085:
	{
		float L_9 = V_1;
		if ((((float)L_9) == ((float)(0.0f))))
		{
			goto IL_009e;
		}
	}
	{
		float L_10 = V_1;
		((GUILayoutEntry_t519 *)__this)->___maxWidth_1 = L_10;
		((GUILayoutEntry_t519 *)__this)->___stretchWidth_5 = 0;
	}

IL_009e:
	{
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::SetHorizontal(System.Single,System.Single)
extern "C" void GUIScrollGroup_SetHorizontal_m2451 (GUIScrollGroup_t521 * __this, float ___x, float ___width, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		bool L_0 = (__this->___needsVerticalScrollbar_36);
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		float L_1 = ___width;
		GUIStyle_t517 * L_2 = (__this->___verticalScrollbar_38);
		NullCheck(L_2);
		float L_3 = GUIStyle_get_fixedWidth_m2563(L_2, /*hidden argument*/NULL);
		GUIStyle_t517 * L_4 = (__this->___verticalScrollbar_38);
		NullCheck(L_4);
		RectOffset_t291 * L_5 = GUIStyle_get_margin_m2560(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = RectOffset_get_left_m2030(L_5, /*hidden argument*/NULL);
		G_B3_0 = ((float)((float)((float)((float)L_1-(float)L_3))-(float)(((float)L_6))));
		goto IL_0030;
	}

IL_002f:
	{
		float L_7 = ___width;
		G_B3_0 = L_7;
	}

IL_0030:
	{
		V_0 = G_B3_0;
		bool L_8 = (__this->___allowHorizontalScroll_33);
		if (!L_8)
		{
			goto IL_0091;
		}
	}
	{
		float L_9 = V_0;
		float L_10 = (__this->___calcMinWidth_27);
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_0091;
		}
	}
	{
		__this->___needsHorizontalScrollbar_35 = 1;
		float L_11 = (__this->___calcMinWidth_27);
		((GUILayoutEntry_t519 *)__this)->___minWidth_0 = L_11;
		float L_12 = (__this->___calcMaxWidth_28);
		((GUILayoutEntry_t519 *)__this)->___maxWidth_1 = L_12;
		float L_13 = ___x;
		float L_14 = (__this->___calcMinWidth_27);
		GUILayoutGroup_SetHorizontal_m2445(__this, L_13, L_14, /*hidden argument*/NULL);
		Rect_t230 * L_15 = &(((GUILayoutEntry_t519 *)__this)->___rect_4);
		float L_16 = ___width;
		Rect_set_width_m1793(L_15, L_16, /*hidden argument*/NULL);
		float L_17 = (__this->___calcMinWidth_27);
		__this->___clientWidth_31 = L_17;
		goto IL_00d6;
	}

IL_0091:
	{
		__this->___needsHorizontalScrollbar_35 = 0;
		bool L_18 = (__this->___allowHorizontalScroll_33);
		if (!L_18)
		{
			goto IL_00bb;
		}
	}
	{
		float L_19 = (__this->___calcMinWidth_27);
		((GUILayoutEntry_t519 *)__this)->___minWidth_0 = L_19;
		float L_20 = (__this->___calcMaxWidth_28);
		((GUILayoutEntry_t519 *)__this)->___maxWidth_1 = L_20;
	}

IL_00bb:
	{
		float L_21 = ___x;
		float L_22 = V_0;
		GUILayoutGroup_SetHorizontal_m2445(__this, L_21, L_22, /*hidden argument*/NULL);
		Rect_t230 * L_23 = &(((GUILayoutEntry_t519 *)__this)->___rect_4);
		float L_24 = ___width;
		Rect_set_width_m1793(L_23, L_24, /*hidden argument*/NULL);
		float L_25 = V_0;
		__this->___clientWidth_31 = L_25;
	}

IL_00d6:
	{
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::CalcHeight()
extern "C" void GUIScrollGroup_CalcHeight_m2452 (GUIScrollGroup_t521 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0 = (((GUILayoutEntry_t519 *)__this)->___minHeight_2);
		V_0 = L_0;
		float L_1 = (((GUILayoutEntry_t519 *)__this)->___maxHeight_3);
		V_1 = L_1;
		bool L_2 = (__this->___allowVerticalScroll_34);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		((GUILayoutEntry_t519 *)__this)->___minHeight_2 = (0.0f);
		((GUILayoutEntry_t519 *)__this)->___maxHeight_3 = (0.0f);
	}

IL_002f:
	{
		GUILayoutGroup_CalcHeight_m2446(__this, /*hidden argument*/NULL);
		float L_3 = (((GUILayoutEntry_t519 *)__this)->___minHeight_2);
		__this->___calcMinHeight_29 = L_3;
		float L_4 = (((GUILayoutEntry_t519 *)__this)->___maxHeight_3);
		__this->___calcMaxHeight_30 = L_4;
		bool L_5 = (__this->___needsHorizontalScrollbar_35);
		if (!L_5)
		{
			goto IL_0092;
		}
	}
	{
		GUIStyle_t517 * L_6 = (__this->___horizontalScrollbar_37);
		NullCheck(L_6);
		float L_7 = GUIStyle_get_fixedHeight_m2564(L_6, /*hidden argument*/NULL);
		GUIStyle_t517 * L_8 = (__this->___horizontalScrollbar_37);
		NullCheck(L_8);
		RectOffset_t291 * L_9 = GUIStyle_get_margin_m2560(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = RectOffset_get_top_m2031(L_9, /*hidden argument*/NULL);
		V_2 = ((float)((float)L_7+(float)(((float)L_10))));
		float L_11 = (((GUILayoutEntry_t519 *)__this)->___minHeight_2);
		float L_12 = V_2;
		((GUILayoutEntry_t519 *)__this)->___minHeight_2 = ((float)((float)L_11+(float)L_12));
		float L_13 = (((GUILayoutEntry_t519 *)__this)->___maxHeight_3);
		float L_14 = V_2;
		((GUILayoutEntry_t519 *)__this)->___maxHeight_3 = ((float)((float)L_13+(float)L_14));
	}

IL_0092:
	{
		bool L_15 = (__this->___allowVerticalScroll_34);
		if (!L_15)
		{
			goto IL_00e3;
		}
	}
	{
		float L_16 = (((GUILayoutEntry_t519 *)__this)->___minHeight_2);
		if ((!(((float)L_16) > ((float)(32.0f)))))
		{
			goto IL_00b8;
		}
	}
	{
		((GUILayoutEntry_t519 *)__this)->___minHeight_2 = (32.0f);
	}

IL_00b8:
	{
		float L_17 = V_0;
		if ((((float)L_17) == ((float)(0.0f))))
		{
			goto IL_00ca;
		}
	}
	{
		float L_18 = V_0;
		((GUILayoutEntry_t519 *)__this)->___minHeight_2 = L_18;
	}

IL_00ca:
	{
		float L_19 = V_1;
		if ((((float)L_19) == ((float)(0.0f))))
		{
			goto IL_00e3;
		}
	}
	{
		float L_20 = V_1;
		((GUILayoutEntry_t519 *)__this)->___maxHeight_3 = L_20;
		((GUILayoutEntry_t519 *)__this)->___stretchHeight_6 = 0;
	}

IL_00e3:
	{
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::SetVertical(System.Single,System.Single)
extern "C" void GUIScrollGroup_SetVertical_m2453 (GUIScrollGroup_t521 * __this, float ___y, float ___height, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = ___height;
		V_0 = L_0;
		bool L_1 = (__this->___needsHorizontalScrollbar_35);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		float L_2 = V_0;
		GUIStyle_t517 * L_3 = (__this->___horizontalScrollbar_37);
		NullCheck(L_3);
		float L_4 = GUIStyle_get_fixedHeight_m2564(L_3, /*hidden argument*/NULL);
		GUIStyle_t517 * L_5 = (__this->___horizontalScrollbar_37);
		NullCheck(L_5);
		RectOffset_t291 * L_6 = GUIStyle_get_margin_m2560(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = RectOffset_get_top_m2031(L_6, /*hidden argument*/NULL);
		V_0 = ((float)((float)L_2-(float)((float)((float)L_4+(float)(((float)L_7))))));
	}

IL_002d:
	{
		bool L_8 = (__this->___allowVerticalScroll_34);
		if (!L_8)
		{
			goto IL_0139;
		}
	}
	{
		float L_9 = V_0;
		float L_10 = (__this->___calcMinHeight_29);
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_0139;
		}
	}
	{
		bool L_11 = (__this->___needsHorizontalScrollbar_35);
		if (L_11)
		{
			goto IL_00db;
		}
	}
	{
		bool L_12 = (__this->___needsVerticalScrollbar_36);
		if (L_12)
		{
			goto IL_00db;
		}
	}
	{
		Rect_t230 * L_13 = &(((GUILayoutEntry_t519 *)__this)->___rect_4);
		float L_14 = Rect_get_width_m1726(L_13, /*hidden argument*/NULL);
		GUIStyle_t517 * L_15 = (__this->___verticalScrollbar_38);
		NullCheck(L_15);
		float L_16 = GUIStyle_get_fixedWidth_m2563(L_15, /*hidden argument*/NULL);
		GUIStyle_t517 * L_17 = (__this->___verticalScrollbar_38);
		NullCheck(L_17);
		RectOffset_t291 * L_18 = GUIStyle_get_margin_m2560(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		int32_t L_19 = RectOffset_get_left_m2030(L_18, /*hidden argument*/NULL);
		__this->___clientWidth_31 = ((float)((float)((float)((float)L_14-(float)L_16))-(float)(((float)L_19))));
		float L_20 = (__this->___clientWidth_31);
		float L_21 = (__this->___calcMinWidth_27);
		if ((!(((float)L_20) < ((float)L_21))))
		{
			goto IL_00a6;
		}
	}
	{
		float L_22 = (__this->___calcMinWidth_27);
		__this->___clientWidth_31 = L_22;
	}

IL_00a6:
	{
		Rect_t230 * L_23 = &(((GUILayoutEntry_t519 *)__this)->___rect_4);
		float L_24 = Rect_get_width_m1726(L_23, /*hidden argument*/NULL);
		V_1 = L_24;
		Rect_t230 * L_25 = &(((GUILayoutEntry_t519 *)__this)->___rect_4);
		float L_26 = Rect_get_x_m1731(L_25, /*hidden argument*/NULL);
		float L_27 = (__this->___clientWidth_31);
		VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUIScrollGroup::SetHorizontal(System.Single,System.Single) */, __this, L_26, L_27);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUIScrollGroup::CalcHeight() */, __this);
		Rect_t230 * L_28 = &(((GUILayoutEntry_t519 *)__this)->___rect_4);
		float L_29 = V_1;
		Rect_set_width_m1793(L_28, L_29, /*hidden argument*/NULL);
	}

IL_00db:
	{
		float L_30 = (((GUILayoutEntry_t519 *)__this)->___minHeight_2);
		V_2 = L_30;
		float L_31 = (((GUILayoutEntry_t519 *)__this)->___maxHeight_3);
		V_3 = L_31;
		float L_32 = (__this->___calcMinHeight_29);
		((GUILayoutEntry_t519 *)__this)->___minHeight_2 = L_32;
		float L_33 = (__this->___calcMaxHeight_30);
		((GUILayoutEntry_t519 *)__this)->___maxHeight_3 = L_33;
		float L_34 = ___y;
		float L_35 = (__this->___calcMinHeight_29);
		GUILayoutGroup_SetVertical_m2447(__this, L_34, L_35, /*hidden argument*/NULL);
		float L_36 = V_2;
		((GUILayoutEntry_t519 *)__this)->___minHeight_2 = L_36;
		float L_37 = V_3;
		((GUILayoutEntry_t519 *)__this)->___maxHeight_3 = L_37;
		Rect_t230 * L_38 = &(((GUILayoutEntry_t519 *)__this)->___rect_4);
		float L_39 = ___height;
		Rect_set_height_m1790(L_38, L_39, /*hidden argument*/NULL);
		float L_40 = (__this->___calcMinHeight_29);
		__this->___clientHeight_32 = L_40;
		goto IL_0177;
	}

IL_0139:
	{
		bool L_41 = (__this->___allowVerticalScroll_34);
		if (!L_41)
		{
			goto IL_015c;
		}
	}
	{
		float L_42 = (__this->___calcMinHeight_29);
		((GUILayoutEntry_t519 *)__this)->___minHeight_2 = L_42;
		float L_43 = (__this->___calcMaxHeight_30);
		((GUILayoutEntry_t519 *)__this)->___maxHeight_3 = L_43;
	}

IL_015c:
	{
		float L_44 = ___y;
		float L_45 = V_0;
		GUILayoutGroup_SetVertical_m2447(__this, L_44, L_45, /*hidden argument*/NULL);
		Rect_t230 * L_46 = &(((GUILayoutEntry_t519 *)__this)->___rect_4);
		float L_47 = ___height;
		Rect_set_height_m1790(L_46, L_47, /*hidden argument*/NULL);
		float L_48 = V_0;
		__this->___clientHeight_32 = L_48;
	}

IL_0177:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.GUILayoutOption/Type
#include "UnityEngine_UnityEngine_GUILayoutOption_TypeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.GUILayoutOption::.ctor(UnityEngine.GUILayoutOption/Type,System.Object)
extern "C" void GUILayoutOption__ctor_m2454 (GUILayoutOption_t523 * __this, int32_t ___type, Object_t * ___value, const MethodInfo* method)
{
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___type;
		__this->___type_0 = L_0;
		Object_t * L_1 = ___value;
		__this->___value_1 = L_1;
		return;
	}
}
// UnityEngine.ExitGUIException
#include "UnityEngine_UnityEngine_ExitGUIException.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.ExitGUIException
#include "UnityEngine_UnityEngine_ExitGUIExceptionMethodDeclarations.h"



// UnityEngine.GUIUtility
#include "UnityEngine_UnityEngine_GUIUtility.h"
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContentMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"


// System.Void UnityEngine.GUIUtility::.cctor()
extern TypeInfo* GUIUtility_t525_il2cpp_TypeInfo_var;
extern "C" void GUIUtility__cctor_m2455 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t525_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(944);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector2_t38  L_0 = Vector2_get_zero_m195(NULL /*static, unused*/, /*hidden argument*/NULL);
		((GUIUtility_t525_StaticFields*)GUIUtility_t525_il2cpp_TypeInfo_var->static_fields)->___s_EditorScreenPointOffset_2 = L_0;
		((GUIUtility_t525_StaticFields*)GUIUtility_t525_il2cpp_TypeInfo_var->static_fields)->___s_HasKeyboardFocus_3 = 0;
		return;
	}
}
// System.String UnityEngine.GUIUtility::get_systemCopyBuffer()
extern "C" String_t* GUIUtility_get_systemCopyBuffer_m2456 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*GUIUtility_get_systemCopyBuffer_m2456_ftn) ();
	static GUIUtility_get_systemCopyBuffer_m2456_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_get_systemCopyBuffer_m2456_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::get_systemCopyBuffer()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)
extern "C" void GUIUtility_set_systemCopyBuffer_m2457 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method)
{
	typedef void (*GUIUtility_set_systemCopyBuffer_m2457_ftn) (String_t*);
	static GUIUtility_set_systemCopyBuffer_m2457_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_set_systemCopyBuffer_m2457_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)");
	_il2cpp_icall_func(___value);
}
// UnityEngine.GUISkin UnityEngine.GUIUtility::GetDefaultSkin()
extern TypeInfo* GUIUtility_t525_il2cpp_TypeInfo_var;
extern "C" GUISkin_t510 * GUIUtility_GetDefaultSkin_m2458 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t525_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(944);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t525_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GUIUtility_t525_StaticFields*)GUIUtility_t525_il2cpp_TypeInfo_var->static_fields)->___s_SkinMode_0;
		GUISkin_t510 * L_1 = GUIUtility_Internal_GetDefaultSkin_m2459(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.GUISkin UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)
extern "C" GUISkin_t510 * GUIUtility_Internal_GetDefaultSkin_m2459 (Object_t * __this /* static, unused */, int32_t ___skinMode, const MethodInfo* method)
{
	typedef GUISkin_t510 * (*GUIUtility_Internal_GetDefaultSkin_m2459_ftn) (int32_t);
	static GUIUtility_Internal_GetDefaultSkin_m2459_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_Internal_GetDefaultSkin_m2459_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)");
	return _il2cpp_icall_func(___skinMode);
}
// System.Void UnityEngine.GUIUtility::BeginGUI(System.Int32,System.Int32,System.Int32)
extern TypeInfo* GUIUtility_t525_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t512_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutUtility_t518_il2cpp_TypeInfo_var;
extern "C" void GUIUtility_BeginGUI_m2460 (Object_t * __this /* static, unused */, int32_t ___skinMode, int32_t ___instanceID, int32_t ___useGUILayout, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t525_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(944);
		GUI_t512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(942);
		GUILayoutUtility_t518_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(945);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___skinMode;
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t525_il2cpp_TypeInfo_var);
		((GUIUtility_t525_StaticFields*)GUIUtility_t525_il2cpp_TypeInfo_var->static_fields)->___s_SkinMode_0 = L_0;
		int32_t L_1 = ___instanceID;
		((GUIUtility_t525_StaticFields*)GUIUtility_t525_il2cpp_TypeInfo_var->static_fields)->___s_OriginalID_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t512_il2cpp_TypeInfo_var);
		GUI_set_skin_m2408(NULL /*static, unused*/, (GUISkin_t510 *)NULL, /*hidden argument*/NULL);
		int32_t L_2 = ___useGUILayout;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___instanceID;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t518_il2cpp_TypeInfo_var);
		GUILayoutUtility_SelectIDList_m2416(NULL /*static, unused*/, L_3, 0, /*hidden argument*/NULL);
		int32_t L_4 = ___instanceID;
		GUILayoutUtility_Begin_m2417(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t512_il2cpp_TypeInfo_var);
		GUI_set_changed_m2410(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIUtility::Internal_ExitGUI()
extern "C" void GUIUtility_Internal_ExitGUI_m2461 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GUIUtility_Internal_ExitGUI_m2461_ftn) ();
	static GUIUtility_Internal_ExitGUI_m2461_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_Internal_ExitGUI_m2461_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_ExitGUI()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.GUIUtility::EndGUI(System.Int32)
extern TypeInfo* GUILayoutUtility_t518_il2cpp_TypeInfo_var;
extern TypeInfo* GUIUtility_t525_il2cpp_TypeInfo_var;
extern TypeInfo* GUIContent_t371_il2cpp_TypeInfo_var;
extern "C" void GUIUtility_EndGUI_m2462 (Object_t * __this /* static, unused */, int32_t ___layoutType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t518_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(945);
		GUIUtility_t525_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(944);
		GUIContent_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(326);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Event_t236 * L_0 = Event_get_current_m2593(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_0);
			int32_t L_1 = Event_get_type_m2589(L_0, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_1) == ((uint32_t)8))))
			{
				goto IL_0042;
			}
		}

IL_0010:
		{
			int32_t L_2 = ___layoutType;
			V_0 = L_2;
			int32_t L_3 = V_0;
			if (L_3 == 0)
			{
				goto IL_0029;
			}
			if (L_3 == 1)
			{
				goto IL_002e;
			}
			if (L_3 == 2)
			{
				goto IL_0038;
			}
		}

IL_0024:
		{
			goto IL_0042;
		}

IL_0029:
		{
			goto IL_0042;
		}

IL_002e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t518_il2cpp_TypeInfo_var);
			GUILayoutUtility_Layout_m2419(NULL /*static, unused*/, /*hidden argument*/NULL);
			goto IL_0042;
		}

IL_0038:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t518_il2cpp_TypeInfo_var);
			GUILayoutUtility_LayoutFromEditorWindow_m2420(NULL /*static, unused*/, /*hidden argument*/NULL);
			goto IL_0042;
		}

IL_0042:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t525_il2cpp_TypeInfo_var);
			int32_t L_4 = ((GUIUtility_t525_StaticFields*)GUIUtility_t525_il2cpp_TypeInfo_var->static_fields)->___s_OriginalID_1;
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t518_il2cpp_TypeInfo_var);
			GUILayoutUtility_SelectIDList_m2416(NULL /*static, unused*/, L_4, 0, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUIContent_t371_il2cpp_TypeInfo_var);
			GUIContent_ClearStaticCache_m2528(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x5E, FINALLY_0058);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_0058;
	}

FINALLY_0058:
	{ // begin finally (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t525_il2cpp_TypeInfo_var);
		GUIUtility_Internal_ExitGUI_m2461(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(88)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(88)
	{
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_005e:
	{
		return;
	}
}
// System.Boolean UnityEngine.GUIUtility::EndGUIFromException(System.Exception)
extern TypeInfo* ExitGUIException_t524_il2cpp_TypeInfo_var;
extern TypeInfo* GUIUtility_t525_il2cpp_TypeInfo_var;
extern "C" bool GUIUtility_EndGUIFromException_m2463 (Object_t * __this /* static, unused */, Exception_t65 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExitGUIException_t524_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(955);
		GUIUtility_t525_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(944);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t65 * L_0 = ___exception;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		Exception_t65 * L_1 = ___exception;
		if (((ExitGUIException_t524 *)IsInst(L_1, ExitGUIException_t524_il2cpp_TypeInfo_var)))
		{
			goto IL_0025;
		}
	}
	{
		Exception_t65 * L_2 = ___exception;
		NullCheck(L_2);
		Exception_t65 * L_3 = (Exception_t65 *)VirtFuncInvoker0< Exception_t65 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_2);
		if (((ExitGUIException_t524 *)IsInst(L_3, ExitGUIException_t524_il2cpp_TypeInfo_var)))
		{
			goto IL_0025;
		}
	}
	{
		return 0;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t525_il2cpp_TypeInfo_var);
		GUIUtility_Internal_ExitGUI_m2461(NULL /*static, unused*/, /*hidden argument*/NULL);
		return 1;
	}
}
// System.Void UnityEngine.GUIUtility::CheckOnGUI()
extern TypeInfo* GUIUtility_t525_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t387_il2cpp_TypeInfo_var;
extern "C" void GUIUtility_CheckOnGUI_m2464 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t525_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(944);
		ArgumentException_t387_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(361);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t525_il2cpp_TypeInfo_var);
		int32_t L_0 = GUIUtility_Internal_GetGUIDepth_m2465(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t387 * L_1 = (ArgumentException_t387 *)il2cpp_codegen_object_new (ArgumentException_t387_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2006(L_1, (String_t*) &_stringLiteral153, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		return;
	}
}
// System.Int32 UnityEngine.GUIUtility::Internal_GetGUIDepth()
extern "C" int32_t GUIUtility_Internal_GetGUIDepth_m2465 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*GUIUtility_Internal_GetGUIDepth_m2465_ftn) ();
	static GUIUtility_Internal_GetGUIDepth_m2465_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_Internal_GetGUIDepth_m2465_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_GetGUIDepth()");
	return _il2cpp_icall_func();
}
// UnityEngine.GUISettings
#include "UnityEngine_UnityEngine_GUISettings.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.GUISettings
#include "UnityEngine_UnityEngine_GUISettingsMethodDeclarations.h"

// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"


// System.Void UnityEngine.GUISettings::.ctor()
extern "C" void GUISettings__ctor_m2466 (GUISettings_t526 * __this, const MethodInfo* method)
{
	{
		__this->___m_DoubleClickSelectsWord_0 = 1;
		__this->___m_TripleClickSelectsLine_1 = 1;
		Color_t13  L_0 = Color_get_white_m194(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___m_CursorColor_2 = L_0;
		__this->___m_CursorFlashSpeed_3 = (-1.0f);
		Color_t13  L_1 = {0};
		Color__ctor_m2619(&L_1, (0.5f), (0.5f), (1.0f), /*hidden argument*/NULL);
		__this->___m_SelectionColor_4 = L_1;
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUISkin/SkinChangedDelegate
#include "UnityEngine_UnityEngine_GUISkin_SkinChangedDelegate.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.GUISkin/SkinChangedDelegate
#include "UnityEngine_UnityEngine_GUISkin_SkinChangedDelegateMethodDeclarations.h"



// System.Void UnityEngine.GUISkin/SkinChangedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void SkinChangedDelegate__ctor_m2467 (SkinChangedDelegate_t527 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::Invoke()
extern "C" void SkinChangedDelegate_Invoke_m2468 (SkinChangedDelegate_t527 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		SkinChangedDelegate_Invoke_m2468((SkinChangedDelegate_t527 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_SkinChangedDelegate_t527(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.GUISkin/SkinChangedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * SkinChangedDelegate_BeginInvoke_m2469 (SkinChangedDelegate_t527 * __this, AsyncCallback_t224 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::EndInvoke(System.IAsyncResult)
extern "C" void SkinChangedDelegate_EndInvoke_m2470 (SkinChangedDelegate_t527 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
// System.StringComparer
#include "mscorlib_System_StringComparer.h"
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_5.h"
// UnityEngine.GUIStyleState
#include "UnityEngine_UnityEngine_GUIStyleState.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_1.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_2.h"
// System.StringComparer
#include "mscorlib_System_StringComparerMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_5MethodDeclarations.h"
// UnityEngine.GUIStyleState
#include "UnityEngine_UnityEngine_GUIStyleStateMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_1MethodDeclarations.h"


// System.Void UnityEngine.GUISkin::.ctor()
extern TypeInfo* GUISettings_t526_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyleU5BU5D_t528_il2cpp_TypeInfo_var;
extern "C" void GUISkin__ctor_m2471 (GUISkin_t510 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUISettings_t526_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(956);
		GUIStyleU5BU5D_t528_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(957);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUISettings_t526 * L_0 = (GUISettings_t526 *)il2cpp_codegen_object_new (GUISettings_t526_il2cpp_TypeInfo_var);
		GUISettings__ctor_m2466(L_0, /*hidden argument*/NULL);
		__this->___m_Settings_24 = L_0;
		ScriptableObject__ctor_m210(__this, /*hidden argument*/NULL);
		__this->___m_CustomStyles_23 = ((GUIStyleU5BU5D_t528*)SZArrayNew(GUIStyleU5BU5D_t528_il2cpp_TypeInfo_var, 1));
		return;
	}
}
// System.Void UnityEngine.GUISkin::OnEnable()
extern "C" void GUISkin_OnEnable_m2472 (GUISkin_t510 * __this, const MethodInfo* method)
{
	{
		GUISkin_Apply_m2519(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Font UnityEngine.GUISkin::get_font()
extern "C" Font_t188 * GUISkin_get_font_m2473 (GUISkin_t510 * __this, const MethodInfo* method)
{
	{
		Font_t188 * L_0 = (__this->___m_Font_2);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_font(UnityEngine.Font)
extern TypeInfo* GUISkin_t510_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t517_il2cpp_TypeInfo_var;
extern "C" void GUISkin_set_font_m2474 (GUISkin_t510 * __this, Font_t188 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUISkin_t510_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(958);
		GUIStyle_t517_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(953);
		s_Il2CppMethodIntialized = true;
	}
	{
		Font_t188 * L_0 = ___value;
		__this->___m_Font_2 = L_0;
		GUISkin_t510 * L_1 = ((GUISkin_t510_StaticFields*)GUISkin_t510_il2cpp_TypeInfo_var->static_fields)->___current_28;
		bool L_2 = Object_op_Equality_m204(NULL /*static, unused*/, L_1, __this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		Font_t188 * L_3 = (__this->___m_Font_2);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle_SetDefaultFont_m2571(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		GUISkin_Apply_m2519(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_box()
extern "C" GUIStyle_t517 * GUISkin_get_box_m2475 (GUISkin_t510 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = (__this->___m_box_3);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_box(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_box_m2476 (GUISkin_t510 * __this, GUIStyle_t517 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = ___value;
		__this->___m_box_3 = L_0;
		GUISkin_Apply_m2519(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_label()
extern "C" GUIStyle_t517 * GUISkin_get_label_m2477 (GUISkin_t510 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = (__this->___m_label_6);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_label(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_label_m2478 (GUISkin_t510 * __this, GUIStyle_t517 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = ___value;
		__this->___m_label_6 = L_0;
		GUISkin_Apply_m2519(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textField()
extern "C" GUIStyle_t517 * GUISkin_get_textField_m2479 (GUISkin_t510 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = (__this->___m_textField_7);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_textField(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_textField_m2480 (GUISkin_t510 * __this, GUIStyle_t517 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = ___value;
		__this->___m_textField_7 = L_0;
		GUISkin_Apply_m2519(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textArea()
extern "C" GUIStyle_t517 * GUISkin_get_textArea_m2481 (GUISkin_t510 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = (__this->___m_textArea_8);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_textArea(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_textArea_m2482 (GUISkin_t510 * __this, GUIStyle_t517 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = ___value;
		__this->___m_textArea_8 = L_0;
		GUISkin_Apply_m2519(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_button()
extern "C" GUIStyle_t517 * GUISkin_get_button_m2483 (GUISkin_t510 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = (__this->___m_button_4);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_button(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_button_m2484 (GUISkin_t510 * __this, GUIStyle_t517 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = ___value;
		__this->___m_button_4 = L_0;
		GUISkin_Apply_m2519(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_toggle()
extern "C" GUIStyle_t517 * GUISkin_get_toggle_m2485 (GUISkin_t510 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = (__this->___m_toggle_5);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_toggle(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_toggle_m2486 (GUISkin_t510 * __this, GUIStyle_t517 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = ___value;
		__this->___m_toggle_5 = L_0;
		GUISkin_Apply_m2519(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_window()
extern "C" GUIStyle_t517 * GUISkin_get_window_m2487 (GUISkin_t510 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = (__this->___m_window_9);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_window(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_window_m2488 (GUISkin_t510 * __this, GUIStyle_t517 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = ___value;
		__this->___m_window_9 = L_0;
		GUISkin_Apply_m2519(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSlider()
extern "C" GUIStyle_t517 * GUISkin_get_horizontalSlider_m2489 (GUISkin_t510 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = (__this->___m_horizontalSlider_10);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalSlider(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalSlider_m2490 (GUISkin_t510 * __this, GUIStyle_t517 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = ___value;
		__this->___m_horizontalSlider_10 = L_0;
		GUISkin_Apply_m2519(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSliderThumb()
extern "C" GUIStyle_t517 * GUISkin_get_horizontalSliderThumb_m2491 (GUISkin_t510 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = (__this->___m_horizontalSliderThumb_11);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalSliderThumb(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalSliderThumb_m2492 (GUISkin_t510 * __this, GUIStyle_t517 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = ___value;
		__this->___m_horizontalSliderThumb_11 = L_0;
		GUISkin_Apply_m2519(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSlider()
extern "C" GUIStyle_t517 * GUISkin_get_verticalSlider_m2493 (GUISkin_t510 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = (__this->___m_verticalSlider_12);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalSlider(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalSlider_m2494 (GUISkin_t510 * __this, GUIStyle_t517 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = ___value;
		__this->___m_verticalSlider_12 = L_0;
		GUISkin_Apply_m2519(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSliderThumb()
extern "C" GUIStyle_t517 * GUISkin_get_verticalSliderThumb_m2495 (GUISkin_t510 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = (__this->___m_verticalSliderThumb_13);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalSliderThumb(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalSliderThumb_m2496 (GUISkin_t510 * __this, GUIStyle_t517 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = ___value;
		__this->___m_verticalSliderThumb_13 = L_0;
		GUISkin_Apply_m2519(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbar()
extern "C" GUIStyle_t517 * GUISkin_get_horizontalScrollbar_m2497 (GUISkin_t510 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = (__this->___m_horizontalScrollbar_14);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbar(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalScrollbar_m2498 (GUISkin_t510 * __this, GUIStyle_t517 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = ___value;
		__this->___m_horizontalScrollbar_14 = L_0;
		GUISkin_Apply_m2519(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarThumb()
extern "C" GUIStyle_t517 * GUISkin_get_horizontalScrollbarThumb_m2499 (GUISkin_t510 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = (__this->___m_horizontalScrollbarThumb_15);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarThumb(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalScrollbarThumb_m2500 (GUISkin_t510 * __this, GUIStyle_t517 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = ___value;
		__this->___m_horizontalScrollbarThumb_15 = L_0;
		GUISkin_Apply_m2519(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarLeftButton()
extern "C" GUIStyle_t517 * GUISkin_get_horizontalScrollbarLeftButton_m2501 (GUISkin_t510 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = (__this->___m_horizontalScrollbarLeftButton_16);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarLeftButton(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalScrollbarLeftButton_m2502 (GUISkin_t510 * __this, GUIStyle_t517 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = ___value;
		__this->___m_horizontalScrollbarLeftButton_16 = L_0;
		GUISkin_Apply_m2519(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarRightButton()
extern "C" GUIStyle_t517 * GUISkin_get_horizontalScrollbarRightButton_m2503 (GUISkin_t510 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = (__this->___m_horizontalScrollbarRightButton_17);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarRightButton(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalScrollbarRightButton_m2504 (GUISkin_t510 * __this, GUIStyle_t517 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = ___value;
		__this->___m_horizontalScrollbarRightButton_17 = L_0;
		GUISkin_Apply_m2519(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbar()
extern "C" GUIStyle_t517 * GUISkin_get_verticalScrollbar_m2505 (GUISkin_t510 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = (__this->___m_verticalScrollbar_18);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbar(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalScrollbar_m2506 (GUISkin_t510 * __this, GUIStyle_t517 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = ___value;
		__this->___m_verticalScrollbar_18 = L_0;
		GUISkin_Apply_m2519(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarThumb()
extern "C" GUIStyle_t517 * GUISkin_get_verticalScrollbarThumb_m2507 (GUISkin_t510 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = (__this->___m_verticalScrollbarThumb_19);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbarThumb(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalScrollbarThumb_m2508 (GUISkin_t510 * __this, GUIStyle_t517 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = ___value;
		__this->___m_verticalScrollbarThumb_19 = L_0;
		GUISkin_Apply_m2519(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarUpButton()
extern "C" GUIStyle_t517 * GUISkin_get_verticalScrollbarUpButton_m2509 (GUISkin_t510 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = (__this->___m_verticalScrollbarUpButton_20);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbarUpButton(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalScrollbarUpButton_m2510 (GUISkin_t510 * __this, GUIStyle_t517 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = ___value;
		__this->___m_verticalScrollbarUpButton_20 = L_0;
		GUISkin_Apply_m2519(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarDownButton()
extern "C" GUIStyle_t517 * GUISkin_get_verticalScrollbarDownButton_m2511 (GUISkin_t510 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = (__this->___m_verticalScrollbarDownButton_21);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbarDownButton(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalScrollbarDownButton_m2512 (GUISkin_t510 * __this, GUIStyle_t517 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = ___value;
		__this->___m_verticalScrollbarDownButton_21 = L_0;
		GUISkin_Apply_m2519(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_scrollView()
extern "C" GUIStyle_t517 * GUISkin_get_scrollView_m2513 (GUISkin_t510 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = (__this->___m_ScrollView_22);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_scrollView(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_scrollView_m2514 (GUISkin_t510 * __this, GUIStyle_t517 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t517 * L_0 = ___value;
		__this->___m_ScrollView_22 = L_0;
		GUISkin_Apply_m2519(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle[] UnityEngine.GUISkin::get_customStyles()
extern "C" GUIStyleU5BU5D_t528* GUISkin_get_customStyles_m2515 (GUISkin_t510 * __this, const MethodInfo* method)
{
	{
		GUIStyleU5BU5D_t528* L_0 = (__this->___m_CustomStyles_23);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_customStyles(UnityEngine.GUIStyle[])
extern "C" void GUISkin_set_customStyles_m2516 (GUISkin_t510 * __this, GUIStyleU5BU5D_t528* ___value, const MethodInfo* method)
{
	{
		GUIStyleU5BU5D_t528* L_0 = ___value;
		__this->___m_CustomStyles_23 = L_0;
		GUISkin_Apply_m2519(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUISettings UnityEngine.GUISkin::get_settings()
extern "C" GUISettings_t526 * GUISkin_get_settings_m2517 (GUISkin_t510 * __this, const MethodInfo* method)
{
	{
		GUISettings_t526 * L_0 = (__this->___m_Settings_24);
		return L_0;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_error()
extern TypeInfo* GUISkin_t510_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t517_il2cpp_TypeInfo_var;
extern "C" GUIStyle_t517 * GUISkin_get_error_m2518 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUISkin_t510_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(958);
		GUIStyle_t517_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(953);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIStyle_t517 * L_0 = ((GUISkin_t510_StaticFields*)GUISkin_t510_il2cpp_TypeInfo_var->static_fields)->___ms_Error_25;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		GUIStyle_t517 * L_1 = (GUIStyle_t517 *)il2cpp_codegen_object_new (GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2551(L_1, /*hidden argument*/NULL);
		((GUISkin_t510_StaticFields*)GUISkin_t510_il2cpp_TypeInfo_var->static_fields)->___ms_Error_25 = L_1;
	}

IL_0014:
	{
		GUIStyle_t517 * L_2 = ((GUISkin_t510_StaticFields*)GUISkin_t510_il2cpp_TypeInfo_var->static_fields)->___ms_Error_25;
		return L_2;
	}
}
// System.Void UnityEngine.GUISkin::Apply()
extern "C" void GUISkin_Apply_m2519 (GUISkin_t510 * __this, const MethodInfo* method)
{
	{
		GUIStyleU5BU5D_t528* L_0 = (__this->___m_CustomStyles_23);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_Log_m243(NULL /*static, unused*/, (String_t*) &_stringLiteral154, /*hidden argument*/NULL);
	}

IL_0015:
	{
		GUISkin_BuildStyleCache_m2520(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUISkin::BuildStyleCache()
extern TypeInfo* GUIStyle_t517_il2cpp_TypeInfo_var;
extern TypeInfo* StringComparer_t741_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t529_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3523_MethodInfo_var;
extern "C" void GUISkin_BuildStyleCache_m2520 (GUISkin_t510 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t517_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(953);
		StringComparer_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(959);
		Dictionary_2_t529_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(960);
		Dictionary_2__ctor_m3523_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483951);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		GUIStyle_t517 * L_0 = (__this->___m_box_3);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		GUIStyle_t517 * L_1 = (GUIStyle_t517 *)il2cpp_codegen_object_new (GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2551(L_1, /*hidden argument*/NULL);
		__this->___m_box_3 = L_1;
	}

IL_0016:
	{
		GUIStyle_t517 * L_2 = (__this->___m_button_4);
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		GUIStyle_t517 * L_3 = (GUIStyle_t517 *)il2cpp_codegen_object_new (GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2551(L_3, /*hidden argument*/NULL);
		__this->___m_button_4 = L_3;
	}

IL_002c:
	{
		GUIStyle_t517 * L_4 = (__this->___m_toggle_5);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		GUIStyle_t517 * L_5 = (GUIStyle_t517 *)il2cpp_codegen_object_new (GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2551(L_5, /*hidden argument*/NULL);
		__this->___m_toggle_5 = L_5;
	}

IL_0042:
	{
		GUIStyle_t517 * L_6 = (__this->___m_label_6);
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		GUIStyle_t517 * L_7 = (GUIStyle_t517 *)il2cpp_codegen_object_new (GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2551(L_7, /*hidden argument*/NULL);
		__this->___m_label_6 = L_7;
	}

IL_0058:
	{
		GUIStyle_t517 * L_8 = (__this->___m_window_9);
		if (L_8)
		{
			goto IL_006e;
		}
	}
	{
		GUIStyle_t517 * L_9 = (GUIStyle_t517 *)il2cpp_codegen_object_new (GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2551(L_9, /*hidden argument*/NULL);
		__this->___m_window_9 = L_9;
	}

IL_006e:
	{
		GUIStyle_t517 * L_10 = (__this->___m_textField_7);
		if (L_10)
		{
			goto IL_0084;
		}
	}
	{
		GUIStyle_t517 * L_11 = (GUIStyle_t517 *)il2cpp_codegen_object_new (GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2551(L_11, /*hidden argument*/NULL);
		__this->___m_textField_7 = L_11;
	}

IL_0084:
	{
		GUIStyle_t517 * L_12 = (__this->___m_textArea_8);
		if (L_12)
		{
			goto IL_009a;
		}
	}
	{
		GUIStyle_t517 * L_13 = (GUIStyle_t517 *)il2cpp_codegen_object_new (GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2551(L_13, /*hidden argument*/NULL);
		__this->___m_textArea_8 = L_13;
	}

IL_009a:
	{
		GUIStyle_t517 * L_14 = (__this->___m_horizontalSlider_10);
		if (L_14)
		{
			goto IL_00b0;
		}
	}
	{
		GUIStyle_t517 * L_15 = (GUIStyle_t517 *)il2cpp_codegen_object_new (GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2551(L_15, /*hidden argument*/NULL);
		__this->___m_horizontalSlider_10 = L_15;
	}

IL_00b0:
	{
		GUIStyle_t517 * L_16 = (__this->___m_horizontalSliderThumb_11);
		if (L_16)
		{
			goto IL_00c6;
		}
	}
	{
		GUIStyle_t517 * L_17 = (GUIStyle_t517 *)il2cpp_codegen_object_new (GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2551(L_17, /*hidden argument*/NULL);
		__this->___m_horizontalSliderThumb_11 = L_17;
	}

IL_00c6:
	{
		GUIStyle_t517 * L_18 = (__this->___m_verticalSlider_12);
		if (L_18)
		{
			goto IL_00dc;
		}
	}
	{
		GUIStyle_t517 * L_19 = (GUIStyle_t517 *)il2cpp_codegen_object_new (GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2551(L_19, /*hidden argument*/NULL);
		__this->___m_verticalSlider_12 = L_19;
	}

IL_00dc:
	{
		GUIStyle_t517 * L_20 = (__this->___m_verticalSliderThumb_13);
		if (L_20)
		{
			goto IL_00f2;
		}
	}
	{
		GUIStyle_t517 * L_21 = (GUIStyle_t517 *)il2cpp_codegen_object_new (GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2551(L_21, /*hidden argument*/NULL);
		__this->___m_verticalSliderThumb_13 = L_21;
	}

IL_00f2:
	{
		GUIStyle_t517 * L_22 = (__this->___m_horizontalScrollbar_14);
		if (L_22)
		{
			goto IL_0108;
		}
	}
	{
		GUIStyle_t517 * L_23 = (GUIStyle_t517 *)il2cpp_codegen_object_new (GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2551(L_23, /*hidden argument*/NULL);
		__this->___m_horizontalScrollbar_14 = L_23;
	}

IL_0108:
	{
		GUIStyle_t517 * L_24 = (__this->___m_horizontalScrollbarThumb_15);
		if (L_24)
		{
			goto IL_011e;
		}
	}
	{
		GUIStyle_t517 * L_25 = (GUIStyle_t517 *)il2cpp_codegen_object_new (GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2551(L_25, /*hidden argument*/NULL);
		__this->___m_horizontalScrollbarThumb_15 = L_25;
	}

IL_011e:
	{
		GUIStyle_t517 * L_26 = (__this->___m_horizontalScrollbarLeftButton_16);
		if (L_26)
		{
			goto IL_0134;
		}
	}
	{
		GUIStyle_t517 * L_27 = (GUIStyle_t517 *)il2cpp_codegen_object_new (GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2551(L_27, /*hidden argument*/NULL);
		__this->___m_horizontalScrollbarLeftButton_16 = L_27;
	}

IL_0134:
	{
		GUIStyle_t517 * L_28 = (__this->___m_horizontalScrollbarRightButton_17);
		if (L_28)
		{
			goto IL_014a;
		}
	}
	{
		GUIStyle_t517 * L_29 = (GUIStyle_t517 *)il2cpp_codegen_object_new (GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2551(L_29, /*hidden argument*/NULL);
		__this->___m_horizontalScrollbarRightButton_17 = L_29;
	}

IL_014a:
	{
		GUIStyle_t517 * L_30 = (__this->___m_verticalScrollbar_18);
		if (L_30)
		{
			goto IL_0160;
		}
	}
	{
		GUIStyle_t517 * L_31 = (GUIStyle_t517 *)il2cpp_codegen_object_new (GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2551(L_31, /*hidden argument*/NULL);
		__this->___m_verticalScrollbar_18 = L_31;
	}

IL_0160:
	{
		GUIStyle_t517 * L_32 = (__this->___m_verticalScrollbarThumb_19);
		if (L_32)
		{
			goto IL_0176;
		}
	}
	{
		GUIStyle_t517 * L_33 = (GUIStyle_t517 *)il2cpp_codegen_object_new (GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2551(L_33, /*hidden argument*/NULL);
		__this->___m_verticalScrollbarThumb_19 = L_33;
	}

IL_0176:
	{
		GUIStyle_t517 * L_34 = (__this->___m_verticalScrollbarUpButton_20);
		if (L_34)
		{
			goto IL_018c;
		}
	}
	{
		GUIStyle_t517 * L_35 = (GUIStyle_t517 *)il2cpp_codegen_object_new (GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2551(L_35, /*hidden argument*/NULL);
		__this->___m_verticalScrollbarUpButton_20 = L_35;
	}

IL_018c:
	{
		GUIStyle_t517 * L_36 = (__this->___m_verticalScrollbarDownButton_21);
		if (L_36)
		{
			goto IL_01a2;
		}
	}
	{
		GUIStyle_t517 * L_37 = (GUIStyle_t517 *)il2cpp_codegen_object_new (GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2551(L_37, /*hidden argument*/NULL);
		__this->___m_verticalScrollbarDownButton_21 = L_37;
	}

IL_01a2:
	{
		GUIStyle_t517 * L_38 = (__this->___m_ScrollView_22);
		if (L_38)
		{
			goto IL_01b8;
		}
	}
	{
		GUIStyle_t517 * L_39 = (GUIStyle_t517 *)il2cpp_codegen_object_new (GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2551(L_39, /*hidden argument*/NULL);
		__this->___m_ScrollView_22 = L_39;
	}

IL_01b8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t741_il2cpp_TypeInfo_var);
		StringComparer_t741 * L_40 = StringComparer_get_OrdinalIgnoreCase_m3522(NULL /*static, unused*/, /*hidden argument*/NULL);
		Dictionary_2_t529 * L_41 = (Dictionary_2_t529 *)il2cpp_codegen_object_new (Dictionary_2_t529_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3523(L_41, L_40, /*hidden argument*/Dictionary_2__ctor_m3523_MethodInfo_var);
		__this->___styles_26 = L_41;
		Dictionary_2_t529 * L_42 = (__this->___styles_26);
		GUIStyle_t517 * L_43 = (__this->___m_box_3);
		NullCheck(L_42);
		VirtActionInvoker2< String_t*, GUIStyle_t517 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_42, (String_t*) &_stringLiteral155, L_43);
		GUIStyle_t517 * L_44 = (__this->___m_box_3);
		NullCheck(L_44);
		GUIStyle_set_name_m2557(L_44, (String_t*) &_stringLiteral155, /*hidden argument*/NULL);
		Dictionary_2_t529 * L_45 = (__this->___styles_26);
		GUIStyle_t517 * L_46 = (__this->___m_button_4);
		NullCheck(L_45);
		VirtActionInvoker2< String_t*, GUIStyle_t517 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_45, (String_t*) &_stringLiteral156, L_46);
		GUIStyle_t517 * L_47 = (__this->___m_button_4);
		NullCheck(L_47);
		GUIStyle_set_name_m2557(L_47, (String_t*) &_stringLiteral156, /*hidden argument*/NULL);
		Dictionary_2_t529 * L_48 = (__this->___styles_26);
		GUIStyle_t517 * L_49 = (__this->___m_toggle_5);
		NullCheck(L_48);
		VirtActionInvoker2< String_t*, GUIStyle_t517 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_48, (String_t*) &_stringLiteral157, L_49);
		GUIStyle_t517 * L_50 = (__this->___m_toggle_5);
		NullCheck(L_50);
		GUIStyle_set_name_m2557(L_50, (String_t*) &_stringLiteral157, /*hidden argument*/NULL);
		Dictionary_2_t529 * L_51 = (__this->___styles_26);
		GUIStyle_t517 * L_52 = (__this->___m_label_6);
		NullCheck(L_51);
		VirtActionInvoker2< String_t*, GUIStyle_t517 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_51, (String_t*) &_stringLiteral158, L_52);
		GUIStyle_t517 * L_53 = (__this->___m_label_6);
		NullCheck(L_53);
		GUIStyle_set_name_m2557(L_53, (String_t*) &_stringLiteral158, /*hidden argument*/NULL);
		Dictionary_2_t529 * L_54 = (__this->___styles_26);
		GUIStyle_t517 * L_55 = (__this->___m_window_9);
		NullCheck(L_54);
		VirtActionInvoker2< String_t*, GUIStyle_t517 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_54, (String_t*) &_stringLiteral159, L_55);
		GUIStyle_t517 * L_56 = (__this->___m_window_9);
		NullCheck(L_56);
		GUIStyle_set_name_m2557(L_56, (String_t*) &_stringLiteral159, /*hidden argument*/NULL);
		Dictionary_2_t529 * L_57 = (__this->___styles_26);
		GUIStyle_t517 * L_58 = (__this->___m_textField_7);
		NullCheck(L_57);
		VirtActionInvoker2< String_t*, GUIStyle_t517 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_57, (String_t*) &_stringLiteral160, L_58);
		GUIStyle_t517 * L_59 = (__this->___m_textField_7);
		NullCheck(L_59);
		GUIStyle_set_name_m2557(L_59, (String_t*) &_stringLiteral160, /*hidden argument*/NULL);
		Dictionary_2_t529 * L_60 = (__this->___styles_26);
		GUIStyle_t517 * L_61 = (__this->___m_textArea_8);
		NullCheck(L_60);
		VirtActionInvoker2< String_t*, GUIStyle_t517 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_60, (String_t*) &_stringLiteral161, L_61);
		GUIStyle_t517 * L_62 = (__this->___m_textArea_8);
		NullCheck(L_62);
		GUIStyle_set_name_m2557(L_62, (String_t*) &_stringLiteral161, /*hidden argument*/NULL);
		Dictionary_2_t529 * L_63 = (__this->___styles_26);
		GUIStyle_t517 * L_64 = (__this->___m_horizontalSlider_10);
		NullCheck(L_63);
		VirtActionInvoker2< String_t*, GUIStyle_t517 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_63, (String_t*) &_stringLiteral162, L_64);
		GUIStyle_t517 * L_65 = (__this->___m_horizontalSlider_10);
		NullCheck(L_65);
		GUIStyle_set_name_m2557(L_65, (String_t*) &_stringLiteral162, /*hidden argument*/NULL);
		Dictionary_2_t529 * L_66 = (__this->___styles_26);
		GUIStyle_t517 * L_67 = (__this->___m_horizontalSliderThumb_11);
		NullCheck(L_66);
		VirtActionInvoker2< String_t*, GUIStyle_t517 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_66, (String_t*) &_stringLiteral163, L_67);
		GUIStyle_t517 * L_68 = (__this->___m_horizontalSliderThumb_11);
		NullCheck(L_68);
		GUIStyle_set_name_m2557(L_68, (String_t*) &_stringLiteral163, /*hidden argument*/NULL);
		Dictionary_2_t529 * L_69 = (__this->___styles_26);
		GUIStyle_t517 * L_70 = (__this->___m_verticalSlider_12);
		NullCheck(L_69);
		VirtActionInvoker2< String_t*, GUIStyle_t517 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_69, (String_t*) &_stringLiteral164, L_70);
		GUIStyle_t517 * L_71 = (__this->___m_verticalSlider_12);
		NullCheck(L_71);
		GUIStyle_set_name_m2557(L_71, (String_t*) &_stringLiteral164, /*hidden argument*/NULL);
		Dictionary_2_t529 * L_72 = (__this->___styles_26);
		GUIStyle_t517 * L_73 = (__this->___m_verticalSliderThumb_13);
		NullCheck(L_72);
		VirtActionInvoker2< String_t*, GUIStyle_t517 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_72, (String_t*) &_stringLiteral165, L_73);
		GUIStyle_t517 * L_74 = (__this->___m_verticalSliderThumb_13);
		NullCheck(L_74);
		GUIStyle_set_name_m2557(L_74, (String_t*) &_stringLiteral165, /*hidden argument*/NULL);
		Dictionary_2_t529 * L_75 = (__this->___styles_26);
		GUIStyle_t517 * L_76 = (__this->___m_horizontalScrollbar_14);
		NullCheck(L_75);
		VirtActionInvoker2< String_t*, GUIStyle_t517 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_75, (String_t*) &_stringLiteral166, L_76);
		GUIStyle_t517 * L_77 = (__this->___m_horizontalScrollbar_14);
		NullCheck(L_77);
		GUIStyle_set_name_m2557(L_77, (String_t*) &_stringLiteral166, /*hidden argument*/NULL);
		Dictionary_2_t529 * L_78 = (__this->___styles_26);
		GUIStyle_t517 * L_79 = (__this->___m_horizontalScrollbarThumb_15);
		NullCheck(L_78);
		VirtActionInvoker2< String_t*, GUIStyle_t517 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_78, (String_t*) &_stringLiteral167, L_79);
		GUIStyle_t517 * L_80 = (__this->___m_horizontalScrollbarThumb_15);
		NullCheck(L_80);
		GUIStyle_set_name_m2557(L_80, (String_t*) &_stringLiteral167, /*hidden argument*/NULL);
		Dictionary_2_t529 * L_81 = (__this->___styles_26);
		GUIStyle_t517 * L_82 = (__this->___m_horizontalScrollbarLeftButton_16);
		NullCheck(L_81);
		VirtActionInvoker2< String_t*, GUIStyle_t517 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_81, (String_t*) &_stringLiteral168, L_82);
		GUIStyle_t517 * L_83 = (__this->___m_horizontalScrollbarLeftButton_16);
		NullCheck(L_83);
		GUIStyle_set_name_m2557(L_83, (String_t*) &_stringLiteral168, /*hidden argument*/NULL);
		Dictionary_2_t529 * L_84 = (__this->___styles_26);
		GUIStyle_t517 * L_85 = (__this->___m_horizontalScrollbarRightButton_17);
		NullCheck(L_84);
		VirtActionInvoker2< String_t*, GUIStyle_t517 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_84, (String_t*) &_stringLiteral169, L_85);
		GUIStyle_t517 * L_86 = (__this->___m_horizontalScrollbarRightButton_17);
		NullCheck(L_86);
		GUIStyle_set_name_m2557(L_86, (String_t*) &_stringLiteral169, /*hidden argument*/NULL);
		Dictionary_2_t529 * L_87 = (__this->___styles_26);
		GUIStyle_t517 * L_88 = (__this->___m_verticalScrollbar_18);
		NullCheck(L_87);
		VirtActionInvoker2< String_t*, GUIStyle_t517 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_87, (String_t*) &_stringLiteral170, L_88);
		GUIStyle_t517 * L_89 = (__this->___m_verticalScrollbar_18);
		NullCheck(L_89);
		GUIStyle_set_name_m2557(L_89, (String_t*) &_stringLiteral170, /*hidden argument*/NULL);
		Dictionary_2_t529 * L_90 = (__this->___styles_26);
		GUIStyle_t517 * L_91 = (__this->___m_verticalScrollbarThumb_19);
		NullCheck(L_90);
		VirtActionInvoker2< String_t*, GUIStyle_t517 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_90, (String_t*) &_stringLiteral171, L_91);
		GUIStyle_t517 * L_92 = (__this->___m_verticalScrollbarThumb_19);
		NullCheck(L_92);
		GUIStyle_set_name_m2557(L_92, (String_t*) &_stringLiteral171, /*hidden argument*/NULL);
		Dictionary_2_t529 * L_93 = (__this->___styles_26);
		GUIStyle_t517 * L_94 = (__this->___m_verticalScrollbarUpButton_20);
		NullCheck(L_93);
		VirtActionInvoker2< String_t*, GUIStyle_t517 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_93, (String_t*) &_stringLiteral172, L_94);
		GUIStyle_t517 * L_95 = (__this->___m_verticalScrollbarUpButton_20);
		NullCheck(L_95);
		GUIStyle_set_name_m2557(L_95, (String_t*) &_stringLiteral172, /*hidden argument*/NULL);
		Dictionary_2_t529 * L_96 = (__this->___styles_26);
		GUIStyle_t517 * L_97 = (__this->___m_verticalScrollbarDownButton_21);
		NullCheck(L_96);
		VirtActionInvoker2< String_t*, GUIStyle_t517 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_96, (String_t*) &_stringLiteral173, L_97);
		GUIStyle_t517 * L_98 = (__this->___m_verticalScrollbarDownButton_21);
		NullCheck(L_98);
		GUIStyle_set_name_m2557(L_98, (String_t*) &_stringLiteral173, /*hidden argument*/NULL);
		Dictionary_2_t529 * L_99 = (__this->___styles_26);
		GUIStyle_t517 * L_100 = (__this->___m_ScrollView_22);
		NullCheck(L_99);
		VirtActionInvoker2< String_t*, GUIStyle_t517 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_99, (String_t*) &_stringLiteral174, L_100);
		GUIStyle_t517 * L_101 = (__this->___m_ScrollView_22);
		NullCheck(L_101);
		GUIStyle_set_name_m2557(L_101, (String_t*) &_stringLiteral174, /*hidden argument*/NULL);
		GUIStyleU5BU5D_t528* L_102 = (__this->___m_CustomStyles_23);
		if (!L_102)
		{
			goto IL_0516;
		}
	}
	{
		V_0 = 0;
		goto IL_0508;
	}

IL_04d2:
	{
		GUIStyleU5BU5D_t528* L_103 = (__this->___m_CustomStyles_23);
		int32_t L_104 = V_0;
		NullCheck(L_103);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_103, L_104);
		int32_t L_105 = L_104;
		if ((*(GUIStyle_t517 **)(GUIStyle_t517 **)SZArrayLdElema(L_103, L_105)))
		{
			goto IL_04e4;
		}
	}
	{
		goto IL_0504;
	}

IL_04e4:
	{
		Dictionary_2_t529 * L_106 = (__this->___styles_26);
		GUIStyleU5BU5D_t528* L_107 = (__this->___m_CustomStyles_23);
		int32_t L_108 = V_0;
		NullCheck(L_107);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_107, L_108);
		int32_t L_109 = L_108;
		NullCheck((*(GUIStyle_t517 **)(GUIStyle_t517 **)SZArrayLdElema(L_107, L_109)));
		String_t* L_110 = GUIStyle_get_name_m2556((*(GUIStyle_t517 **)(GUIStyle_t517 **)SZArrayLdElema(L_107, L_109)), /*hidden argument*/NULL);
		GUIStyleU5BU5D_t528* L_111 = (__this->___m_CustomStyles_23);
		int32_t L_112 = V_0;
		NullCheck(L_111);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_111, L_112);
		int32_t L_113 = L_112;
		NullCheck(L_106);
		VirtActionInvoker2< String_t*, GUIStyle_t517 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_106, L_110, (*(GUIStyle_t517 **)(GUIStyle_t517 **)SZArrayLdElema(L_111, L_113)));
	}

IL_0504:
	{
		int32_t L_114 = V_0;
		V_0 = ((int32_t)((int32_t)L_114+(int32_t)1));
	}

IL_0508:
	{
		int32_t L_115 = V_0;
		GUIStyleU5BU5D_t528* L_116 = (__this->___m_CustomStyles_23);
		NullCheck(L_116);
		if ((((int32_t)L_115) < ((int32_t)(((int32_t)(((Array_t *)L_116)->max_length))))))
		{
			goto IL_04d2;
		}
	}

IL_0516:
	{
		GUIStyle_t517 * L_117 = GUISkin_get_error_m2518(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_117);
		GUIStyle_set_stretchHeight_m2568(L_117, 1, /*hidden argument*/NULL);
		GUIStyle_t517 * L_118 = GUISkin_get_error_m2518(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_118);
		GUIStyleState_t530 * L_119 = GUIStyle_get_normal_m2558(L_118, /*hidden argument*/NULL);
		Color_t13  L_120 = Color_get_red_m2622(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_119);
		GUIStyleState_set_textColor_m2536(L_119, L_120, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::GetStyle(System.String)
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* EventType_t534_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" GUIStyle_t517 * GUISkin_GetStyle_m2521 (GUISkin_t510 * __this, String_t* ___styleName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		EventType_t534_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(961);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	GUIStyle_t517 * V_0 = {0};
	{
		String_t* L_0 = ___styleName;
		GUIStyle_t517 * L_1 = GUISkin_FindStyle_m2522(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GUIStyle_t517 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		GUIStyle_t517 * L_3 = V_0;
		return L_3;
	}

IL_0010:
	{
		ObjectU5BU5D_t73* L_4 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 6));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral175);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 0)) = (Object_t *)(String_t*) &_stringLiteral175;
		ObjectU5BU5D_t73* L_5 = L_4;
		String_t* L_6 = ___styleName;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
		ArrayElementTypeCheck (L_5, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t73* L_7 = L_5;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral176);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)(String_t*) &_stringLiteral176;
		ObjectU5BU5D_t73* L_8 = L_7;
		String_t* L_9 = Object_get_name_m358(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_9;
		ObjectU5BU5D_t73* L_10 = L_8;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 4);
		ArrayElementTypeCheck (L_10, (String_t*) &_stringLiteral177);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 4)) = (Object_t *)(String_t*) &_stringLiteral177;
		ObjectU5BU5D_t73* L_11 = L_10;
		Event_t236 * L_12 = Event_get_current_m2593(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_12);
		int32_t L_13 = Event_get_type_m2589(L_12, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(EventType_t534_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 5);
		ArrayElementTypeCheck (L_11, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 5)) = (Object_t *)L_15;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m255(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		Debug_LogWarning_m2831(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		GUIStyle_t517 * L_17 = GUISkin_get_error_m2518(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_17;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::FindStyle(System.String)
extern "C" GUIStyle_t517 * GUISkin_FindStyle_m2522 (GUISkin_t510 * __this, String_t* ___styleName, const MethodInfo* method)
{
	GUIStyle_t517 * V_0 = {0};
	{
		bool L_0 = Object_op_Equality_m204(NULL /*static, unused*/, __this, (Object_t67 *)NULL, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		Debug_LogError_m1570(NULL /*static, unused*/, (String_t*) &_stringLiteral178, /*hidden argument*/NULL);
		return (GUIStyle_t517 *)NULL;
	}

IL_0018:
	{
		Dictionary_2_t529 * L_1 = (__this->___styles_26);
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		GUISkin_BuildStyleCache_m2520(__this, /*hidden argument*/NULL);
	}

IL_0029:
	{
		Dictionary_2_t529 * L_2 = (__this->___styles_26);
		String_t* L_3 = ___styleName;
		NullCheck(L_2);
		bool L_4 = (bool)VirtFuncInvoker2< bool, String_t*, GUIStyle_t517 ** >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::TryGetValue(!0,!1&) */, L_2, L_3, (&V_0));
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		GUIStyle_t517 * L_5 = V_0;
		return L_5;
	}

IL_003e:
	{
		return (GUIStyle_t517 *)NULL;
	}
}
// System.Void UnityEngine.GUISkin::MakeCurrent()
extern TypeInfo* GUISkin_t510_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t517_il2cpp_TypeInfo_var;
extern "C" void GUISkin_MakeCurrent_m2523 (GUISkin_t510 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUISkin_t510_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(958);
		GUIStyle_t517_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(953);
		s_Il2CppMethodIntialized = true;
	}
	{
		((GUISkin_t510_StaticFields*)GUISkin_t510_il2cpp_TypeInfo_var->static_fields)->___current_28 = __this;
		Font_t188 * L_0 = GUISkin_get_font_m2473(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle_SetDefaultFont_m2571(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		SkinChangedDelegate_t527 * L_1 = ((GUISkin_t510_StaticFields*)GUISkin_t510_il2cpp_TypeInfo_var->static_fields)->___m_SkinChanged_27;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		SkinChangedDelegate_t527 * L_2 = ((GUISkin_t510_StaticFields*)GUISkin_t510_il2cpp_TypeInfo_var->static_fields)->___m_SkinChanged_27;
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(10 /* System.Void UnityEngine.GUISkin/SkinChangedDelegate::Invoke() */, L_2);
	}

IL_0025:
	{
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.GUISkin::GetEnumerator()
extern TypeInfo* Enumerator_t743_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_get_Values_m3524_MethodInfo_var;
extern const MethodInfo* ValueCollection_GetEnumerator_m3525_MethodInfo_var;
extern "C" Object_t * GUISkin_GetEnumerator_m2524 (GUISkin_t510 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(962);
		Dictionary_2_get_Values_m3524_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483952);
		ValueCollection_GetEnumerator_m3525_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483953);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t529 * L_0 = (__this->___styles_26);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		GUISkin_BuildStyleCache_m2520(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		Dictionary_2_t529 * L_1 = (__this->___styles_26);
		NullCheck(L_1);
		ValueCollection_t742 * L_2 = Dictionary_2_get_Values_m3524(L_1, /*hidden argument*/Dictionary_2_get_Values_m3524_MethodInfo_var);
		NullCheck(L_2);
		Enumerator_t743  L_3 = ValueCollection_GetEnumerator_m3525(L_2, /*hidden argument*/ValueCollection_GetEnumerator_m3525_MethodInfo_var);
		Enumerator_t743  L_4 = L_3;
		Object_t * L_5 = Box(Enumerator_t743_il2cpp_TypeInfo_var, &L_4);
		return (Object_t *)L_5;
	}
}
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContent.h"
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.GUIContent::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GUIContent__ctor_m2525 (GUIContent_t371 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___m_Text_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___m_Tooltip_2 = L_1;
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIContent::.ctor(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GUIContent__ctor_m1849 (GUIContent_t371 * __this, String_t* ___text, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___m_Text_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___m_Tooltip_2 = L_1;
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___text;
		__this->___m_Text_0 = L_2;
		return;
	}
}
// System.Void UnityEngine.GUIContent::.cctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUIContent_t371_il2cpp_TypeInfo_var;
extern "C" void GUIContent__cctor_m2526 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		GUIContent_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(326);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GUIContent_t371 * L_1 = (GUIContent_t371 *)il2cpp_codegen_object_new (GUIContent_t371_il2cpp_TypeInfo_var);
		GUIContent__ctor_m1849(L_1, L_0, /*hidden argument*/NULL);
		((GUIContent_t371_StaticFields*)GUIContent_t371_il2cpp_TypeInfo_var->static_fields)->___none_3 = L_1;
		GUIContent_t371 * L_2 = (GUIContent_t371 *)il2cpp_codegen_object_new (GUIContent_t371_il2cpp_TypeInfo_var);
		GUIContent__ctor_m2525(L_2, /*hidden argument*/NULL);
		((GUIContent_t371_StaticFields*)GUIContent_t371_il2cpp_TypeInfo_var->static_fields)->___s_Text_4 = L_2;
		GUIContent_t371 * L_3 = (GUIContent_t371 *)il2cpp_codegen_object_new (GUIContent_t371_il2cpp_TypeInfo_var);
		GUIContent__ctor_m2525(L_3, /*hidden argument*/NULL);
		((GUIContent_t371_StaticFields*)GUIContent_t371_il2cpp_TypeInfo_var->static_fields)->___s_Image_5 = L_3;
		GUIContent_t371 * L_4 = (GUIContent_t371 *)il2cpp_codegen_object_new (GUIContent_t371_il2cpp_TypeInfo_var);
		GUIContent__ctor_m2525(L_4, /*hidden argument*/NULL);
		((GUIContent_t371_StaticFields*)GUIContent_t371_il2cpp_TypeInfo_var->static_fields)->___s_TextImage_6 = L_4;
		return;
	}
}
// System.String UnityEngine.GUIContent::get_text()
extern "C" String_t* GUIContent_get_text_m1848 (GUIContent_t371 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Text_0);
		return L_0;
	}
}
// System.Void UnityEngine.GUIContent::set_text(System.String)
extern "C" void GUIContent_set_text_m2527 (GUIContent_t371 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_Text_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.GUIContent::ClearStaticCache()
extern TypeInfo* GUIContent_t371_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GUIContent_ClearStaticCache_m2528 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIContent_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(326);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIContent_t371_il2cpp_TypeInfo_var);
		GUIContent_t371 * L_0 = ((GUIContent_t371_StaticFields*)GUIContent_t371_il2cpp_TypeInfo_var->static_fields)->___s_Text_4;
		NullCheck(L_0);
		L_0->___m_Text_0 = (String_t*)NULL;
		GUIContent_t371 * L_1 = ((GUIContent_t371_StaticFields*)GUIContent_t371_il2cpp_TypeInfo_var->static_fields)->___s_Text_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_1);
		L_1->___m_Tooltip_2 = L_2;
		GUIContent_t371 * L_3 = ((GUIContent_t371_StaticFields*)GUIContent_t371_il2cpp_TypeInfo_var->static_fields)->___s_Image_5;
		NullCheck(L_3);
		L_3->___m_Image_1 = (Texture_t240 *)NULL;
		GUIContent_t371 * L_4 = ((GUIContent_t371_StaticFields*)GUIContent_t371_il2cpp_TypeInfo_var->static_fields)->___s_Image_5;
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_4);
		L_4->___m_Tooltip_2 = L_5;
		GUIContent_t371 * L_6 = ((GUIContent_t371_StaticFields*)GUIContent_t371_il2cpp_TypeInfo_var->static_fields)->___s_TextImage_6;
		NullCheck(L_6);
		L_6->___m_Text_0 = (String_t*)NULL;
		GUIContent_t371 * L_7 = ((GUIContent_t371_StaticFields*)GUIContent_t371_il2cpp_TypeInfo_var->static_fields)->___s_TextImage_6;
		NullCheck(L_7);
		L_7->___m_Image_1 = (Texture_t240 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.GUIStyleState::.ctor()
extern "C" void GUIStyleState__ctor_m2529 (GUIStyleState_t530 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		GUIStyleState_Init_m2532(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::.ctor(UnityEngine.GUIStyle,System.IntPtr)
extern "C" void GUIStyleState__ctor_m2530 (GUIStyleState_t530 * __this, GUIStyle_t517 * ___sourceStyle, IntPtr_t ___source, const MethodInfo* method)
{
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		GUIStyle_t517 * L_0 = ___sourceStyle;
		__this->___m_SourceStyle_1 = L_0;
		IntPtr_t L_1 = ___source;
		__this->___m_Ptr_0 = L_1;
		Texture2D_t193 * L_2 = GUIStyleState_GetBackgroundInternal_m2534(__this, /*hidden argument*/NULL);
		__this->___m_Background_2 = L_2;
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::Finalize()
extern "C" void GUIStyleState_Finalize_m2531 (GUIStyleState_t530 * __this, const MethodInfo* method)
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
		{
			GUIStyle_t517 * L_0 = (__this->___m_SourceStyle_1);
			if (L_0)
			{
				goto IL_0011;
			}
		}

IL_000b:
		{
			GUIStyleState_Cleanup_m2533(__this, /*hidden argument*/NULL);
		}

IL_0011:
		{
			IL2CPP_LEAVE(0x1D, FINALLY_0016);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		Object_Finalize_m375(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_001d:
	{
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::Init()
extern "C" void GUIStyleState_Init_m2532 (GUIStyleState_t530 * __this, const MethodInfo* method)
{
	typedef void (*GUIStyleState_Init_m2532_ftn) (GUIStyleState_t530 *);
	static GUIStyleState_Init_m2532_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_Init_m2532_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyleState::Cleanup()
extern "C" void GUIStyleState_Cleanup_m2533 (GUIStyleState_t530 * __this, const MethodInfo* method)
{
	typedef void (*GUIStyleState_Cleanup_m2533_ftn) (GUIStyleState_t530 *);
	static GUIStyleState_Cleanup_m2533_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_Cleanup_m2533_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Cleanup()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.Texture2D UnityEngine.GUIStyleState::GetBackgroundInternal()
extern "C" Texture2D_t193 * GUIStyleState_GetBackgroundInternal_m2534 (GUIStyleState_t530 * __this, const MethodInfo* method)
{
	typedef Texture2D_t193 * (*GUIStyleState_GetBackgroundInternal_m2534_ftn) (GUIStyleState_t530 *);
	static GUIStyleState_GetBackgroundInternal_m2534_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_GetBackgroundInternal_m2534_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::GetBackgroundInternal()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyleState::INTERNAL_set_textColor(UnityEngine.Color&)
extern "C" void GUIStyleState_INTERNAL_set_textColor_m2535 (GUIStyleState_t530 * __this, Color_t13 * ___value, const MethodInfo* method)
{
	typedef void (*GUIStyleState_INTERNAL_set_textColor_m2535_ftn) (GUIStyleState_t530 *, Color_t13 *);
	static GUIStyleState_INTERNAL_set_textColor_m2535_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_INTERNAL_set_textColor_m2535_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::INTERNAL_set_textColor(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
extern "C" void GUIStyleState_set_textColor_m2536 (GUIStyleState_t530 * __this, Color_t13  ___value, const MethodInfo* method)
{
	{
		GUIStyleState_INTERNAL_set_textColor_m2535(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.RectOffset::.ctor()
extern "C" void RectOffset__ctor_m2035 (RectOffset_t291 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		RectOffset_Init_m2540(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectOffset::.ctor(UnityEngine.GUIStyle,System.IntPtr)
extern "C" void RectOffset__ctor_m2537 (RectOffset_t291 * __this, GUIStyle_t517 * ___sourceStyle, IntPtr_t ___source, const MethodInfo* method)
{
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		GUIStyle_t517 * L_0 = ___sourceStyle;
		__this->___m_SourceStyle_1 = L_0;
		IntPtr_t L_1 = ___source;
		__this->___m_Ptr_0 = L_1;
		return;
	}
}
// System.Void UnityEngine.RectOffset::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void RectOffset__ctor_m2538 (RectOffset_t291 * __this, int32_t ___left, int32_t ___right, int32_t ___top, int32_t ___bottom, const MethodInfo* method)
{
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		RectOffset_Init_m2540(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___left;
		RectOffset_set_left_m2542(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___right;
		RectOffset_set_right_m2544(__this, L_1, /*hidden argument*/NULL);
		int32_t L_2 = ___top;
		RectOffset_set_top_m2545(__this, L_2, /*hidden argument*/NULL);
		int32_t L_3 = ___bottom;
		RectOffset_set_bottom_m2547(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectOffset::Finalize()
extern "C" void RectOffset_Finalize_m2539 (RectOffset_t291 * __this, const MethodInfo* method)
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
		{
			GUIStyle_t517 * L_0 = (__this->___m_SourceStyle_1);
			if (L_0)
			{
				goto IL_0011;
			}
		}

IL_000b:
		{
			RectOffset_Cleanup_m2541(__this, /*hidden argument*/NULL);
		}

IL_0011:
		{
			IL2CPP_LEAVE(0x1D, FINALLY_0016);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		Object_Finalize_m375(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_001d:
	{
		return;
	}
}
// System.Void UnityEngine.RectOffset::Init()
extern "C" void RectOffset_Init_m2540 (RectOffset_t291 * __this, const MethodInfo* method)
{
	typedef void (*RectOffset_Init_m2540_ftn) (RectOffset_t291 *);
	static RectOffset_Init_m2540_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_Init_m2540_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.RectOffset::Cleanup()
extern "C" void RectOffset_Cleanup_m2541 (RectOffset_t291 * __this, const MethodInfo* method)
{
	typedef void (*RectOffset_Cleanup_m2541_ftn) (RectOffset_t291 *);
	static RectOffset_Cleanup_m2541_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_Cleanup_m2541_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.RectOffset::get_left()
extern "C" int32_t RectOffset_get_left_m2030 (RectOffset_t291 * __this, const MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_left_m2030_ftn) (RectOffset_t291 *);
	static RectOffset_get_left_m2030_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_left_m2030_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_left()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.RectOffset::set_left(System.Int32)
extern "C" void RectOffset_set_left_m2542 (RectOffset_t291 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*RectOffset_set_left_m2542_ftn) (RectOffset_t291 *, int32_t);
	static RectOffset_set_left_m2542_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_set_left_m2542_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_left(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.RectOffset::get_right()
extern "C" int32_t RectOffset_get_right_m2543 (RectOffset_t291 * __this, const MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_right_m2543_ftn) (RectOffset_t291 *);
	static RectOffset_get_right_m2543_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_right_m2543_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_right()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.RectOffset::set_right(System.Int32)
extern "C" void RectOffset_set_right_m2544 (RectOffset_t291 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*RectOffset_set_right_m2544_ftn) (RectOffset_t291 *, int32_t);
	static RectOffset_set_right_m2544_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_set_right_m2544_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_right(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.RectOffset::get_top()
extern "C" int32_t RectOffset_get_top_m2031 (RectOffset_t291 * __this, const MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_top_m2031_ftn) (RectOffset_t291 *);
	static RectOffset_get_top_m2031_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_top_m2031_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_top()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.RectOffset::set_top(System.Int32)
extern "C" void RectOffset_set_top_m2545 (RectOffset_t291 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*RectOffset_set_top_m2545_ftn) (RectOffset_t291 *, int32_t);
	static RectOffset_set_top_m2545_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_set_top_m2545_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_top(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.RectOffset::get_bottom()
extern "C" int32_t RectOffset_get_bottom_m2546 (RectOffset_t291 * __this, const MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_bottom_m2546_ftn) (RectOffset_t291 *);
	static RectOffset_get_bottom_m2546_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_bottom_m2546_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_bottom()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.RectOffset::set_bottom(System.Int32)
extern "C" void RectOffset_set_bottom_m2547 (RectOffset_t291 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*RectOffset_set_bottom_m2547_ftn) (RectOffset_t291 *, int32_t);
	static RectOffset_set_bottom_m2547_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_set_bottom_m2547_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_bottom(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.RectOffset::get_horizontal()
extern "C" int32_t RectOffset_get_horizontal_m2025 (RectOffset_t291 * __this, const MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_horizontal_m2025_ftn) (RectOffset_t291 *);
	static RectOffset_get_horizontal_m2025_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_horizontal_m2025_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_horizontal()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.RectOffset::get_vertical()
extern "C" int32_t RectOffset_get_vertical_m2026 (RectOffset_t291 * __this, const MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_vertical_m2026_ftn) (RectOffset_t291 *);
	static RectOffset_get_vertical_m2026_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_vertical_m2026_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_vertical()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Rect UnityEngine.RectOffset::Remove(UnityEngine.Rect)
extern "C" Rect_t230  RectOffset_Remove_m2548 (RectOffset_t291 * __this, Rect_t230  ___rect, const MethodInfo* method)
{
	{
		Rect_t230  L_0 = RectOffset_INTERNAL_CALL_Remove_m2549(NULL /*static, unused*/, __this, (&___rect), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Rect UnityEngine.RectOffset::INTERNAL_CALL_Remove(UnityEngine.RectOffset,UnityEngine.Rect&)
extern "C" Rect_t230  RectOffset_INTERNAL_CALL_Remove_m2549 (Object_t * __this /* static, unused */, RectOffset_t291 * ___self, Rect_t230 * ___rect, const MethodInfo* method)
{
	typedef Rect_t230  (*RectOffset_INTERNAL_CALL_Remove_m2549_ftn) (RectOffset_t291 *, Rect_t230 *);
	static RectOffset_INTERNAL_CALL_Remove_m2549_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_INTERNAL_CALL_Remove_m2549_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::INTERNAL_CALL_Remove(UnityEngine.RectOffset,UnityEngine.Rect&)");
	return _il2cpp_icall_func(___self, ___rect);
}
// System.String UnityEngine.RectOffset::ToString()
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t75_il2cpp_TypeInfo_var;
extern "C" String_t* RectOffset_ToString_m2550 (RectOffset_t291 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		Int32_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t73* L_0 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 4));
		int32_t L_1 = RectOffset_get_left_m2030(__this, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t75_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t73* L_4 = L_0;
		int32_t L_5 = RectOffset_get_right_m2543(__this, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t75_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t73* L_8 = L_4;
		int32_t L_9 = RectOffset_get_top_m2031(__this, /*hidden argument*/NULL);
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(Int32_t75_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t73* L_12 = L_8;
		int32_t L_13 = RectOffset_get_bottom_m2546(__this, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(Int32_t75_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m2796(NULL /*static, unused*/, (String_t*) &_stringLiteral179, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyleMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.GUIStyle::.ctor()
extern "C" void GUIStyle__ctor_m2551 (GUIStyle_t517 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		GUIStyle_Init_m2554(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIStyle::.cctor()
extern TypeInfo* GUIStyle_t517_il2cpp_TypeInfo_var;
extern "C" void GUIStyle__cctor_m2552 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t517_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(953);
		s_Il2CppMethodIntialized = true;
	}
	{
		((GUIStyle_t517_StaticFields*)GUIStyle_t517_il2cpp_TypeInfo_var->static_fields)->___showKeyboardFocus_14 = 1;
		return;
	}
}
// System.Void UnityEngine.GUIStyle::Finalize()
extern "C" void GUIStyle_Finalize_m2553 (GUIStyle_t517 * __this, const MethodInfo* method)
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
		GUIStyle_Cleanup_m2555(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.GUIStyle::Init()
extern "C" void GUIStyle_Init_m2554 (GUIStyle_t517 * __this, const MethodInfo* method)
{
	typedef void (*GUIStyle_Init_m2554_ftn) (GUIStyle_t517 *);
	static GUIStyle_Init_m2554_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Init_m2554_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyle::Cleanup()
extern "C" void GUIStyle_Cleanup_m2555 (GUIStyle_t517 * __this, const MethodInfo* method)
{
	typedef void (*GUIStyle_Cleanup_m2555_ftn) (GUIStyle_t517 *);
	static GUIStyle_Cleanup_m2555_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Cleanup_m2555_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.String UnityEngine.GUIStyle::get_name()
extern "C" String_t* GUIStyle_get_name_m2556 (GUIStyle_t517 * __this, const MethodInfo* method)
{
	typedef String_t* (*GUIStyle_get_name_m2556_ftn) (GUIStyle_t517 *);
	static GUIStyle_get_name_m2556_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_name_m2556_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_name()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyle::set_name(System.String)
extern "C" void GUIStyle_set_name_m2557 (GUIStyle_t517 * __this, String_t* ___value, const MethodInfo* method)
{
	typedef void (*GUIStyle_set_name_m2557_ftn) (GUIStyle_t517 *, String_t*);
	static GUIStyle_set_name_m2557_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_name_m2557_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_name(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
extern TypeInfo* GUIStyleState_t530_il2cpp_TypeInfo_var;
extern "C" GUIStyleState_t530 * GUIStyle_get_normal_m2558 (GUIStyle_t517 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyleState_t530_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(963);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIStyleState_t530 * L_0 = (__this->___m_Normal_1);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_1 = GUIStyle_GetStyleStatePtr_m2559(__this, 0, /*hidden argument*/NULL);
		GUIStyleState_t530 * L_2 = (GUIStyleState_t530 *)il2cpp_codegen_object_new (GUIStyleState_t530_il2cpp_TypeInfo_var);
		GUIStyleState__ctor_m2530(L_2, __this, L_1, /*hidden argument*/NULL);
		__this->___m_Normal_1 = L_2;
	}

IL_001e:
	{
		GUIStyleState_t530 * L_3 = (__this->___m_Normal_1);
		return L_3;
	}
}
// System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
extern "C" IntPtr_t GUIStyle_GetStyleStatePtr_m2559 (GUIStyle_t517 * __this, int32_t ___idx, const MethodInfo* method)
{
	typedef IntPtr_t (*GUIStyle_GetStyleStatePtr_m2559_ftn) (GUIStyle_t517 *, int32_t);
	static GUIStyle_GetStyleStatePtr_m2559_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_GetStyleStatePtr_m2559_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)");
	return _il2cpp_icall_func(__this, ___idx);
}
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
extern TypeInfo* RectOffset_t291_il2cpp_TypeInfo_var;
extern "C" RectOffset_t291 * GUIStyle_get_margin_m2560 (GUIStyle_t517 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectOffset_t291_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(370);
		s_Il2CppMethodIntialized = true;
	}
	{
		RectOffset_t291 * L_0 = (__this->___m_Margin_11);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_1 = GUIStyle_GetRectOffsetPtr_m2562(__this, 1, /*hidden argument*/NULL);
		RectOffset_t291 * L_2 = (RectOffset_t291 *)il2cpp_codegen_object_new (RectOffset_t291_il2cpp_TypeInfo_var);
		RectOffset__ctor_m2537(L_2, __this, L_1, /*hidden argument*/NULL);
		__this->___m_Margin_11 = L_2;
	}

IL_001e:
	{
		RectOffset_t291 * L_3 = (__this->___m_Margin_11);
		return L_3;
	}
}
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
extern TypeInfo* RectOffset_t291_il2cpp_TypeInfo_var;
extern "C" RectOffset_t291 * GUIStyle_get_padding_m2561 (GUIStyle_t517 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectOffset_t291_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(370);
		s_Il2CppMethodIntialized = true;
	}
	{
		RectOffset_t291 * L_0 = (__this->___m_Padding_10);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_1 = GUIStyle_GetRectOffsetPtr_m2562(__this, 2, /*hidden argument*/NULL);
		RectOffset_t291 * L_2 = (RectOffset_t291 *)il2cpp_codegen_object_new (RectOffset_t291_il2cpp_TypeInfo_var);
		RectOffset__ctor_m2537(L_2, __this, L_1, /*hidden argument*/NULL);
		__this->___m_Padding_10 = L_2;
	}

IL_001e:
	{
		RectOffset_t291 * L_3 = (__this->___m_Padding_10);
		return L_3;
	}
}
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
extern "C" IntPtr_t GUIStyle_GetRectOffsetPtr_m2562 (GUIStyle_t517 * __this, int32_t ___idx, const MethodInfo* method)
{
	typedef IntPtr_t (*GUIStyle_GetRectOffsetPtr_m2562_ftn) (GUIStyle_t517 *, int32_t);
	static GUIStyle_GetRectOffsetPtr_m2562_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_GetRectOffsetPtr_m2562_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)");
	return _il2cpp_icall_func(__this, ___idx);
}
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
extern "C" float GUIStyle_get_fixedWidth_m2563 (GUIStyle_t517 * __this, const MethodInfo* method)
{
	typedef float (*GUIStyle_get_fixedWidth_m2563_ftn) (GUIStyle_t517 *);
	static GUIStyle_get_fixedWidth_m2563_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_fixedWidth_m2563_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_fixedWidth()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
extern "C" float GUIStyle_get_fixedHeight_m2564 (GUIStyle_t517 * __this, const MethodInfo* method)
{
	typedef float (*GUIStyle_get_fixedHeight_m2564_ftn) (GUIStyle_t517 *);
	static GUIStyle_get_fixedHeight_m2564_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_fixedHeight_m2564_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_fixedHeight()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
extern "C" bool GUIStyle_get_stretchWidth_m2565 (GUIStyle_t517 * __this, const MethodInfo* method)
{
	typedef bool (*GUIStyle_get_stretchWidth_m2565_ftn) (GUIStyle_t517 *);
	static GUIStyle_get_stretchWidth_m2565_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_stretchWidth_m2565_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_stretchWidth()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)
extern "C" void GUIStyle_set_stretchWidth_m2566 (GUIStyle_t517 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*GUIStyle_set_stretchWidth_m2566_ftn) (GUIStyle_t517 *, bool);
	static GUIStyle_set_stretchWidth_m2566_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_stretchWidth_m2566_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
extern "C" bool GUIStyle_get_stretchHeight_m2567 (GUIStyle_t517 * __this, const MethodInfo* method)
{
	typedef bool (*GUIStyle_get_stretchHeight_m2567_ftn) (GUIStyle_t517 *);
	static GUIStyle_get_stretchHeight_m2567_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_stretchHeight_m2567_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_stretchHeight()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
extern "C" void GUIStyle_set_stretchHeight_m2568 (GUIStyle_t517 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*GUIStyle_set_stretchHeight_m2568_ftn) (GUIStyle_t517 *, bool);
	static GUIStyle_set_stretchHeight_m2568_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_stretchHeight_m2568_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)
extern "C" float GUIStyle_Internal_GetLineHeight_m2569 (Object_t * __this /* static, unused */, IntPtr_t ___target, const MethodInfo* method)
{
	typedef float (*GUIStyle_Internal_GetLineHeight_m2569_ftn) (IntPtr_t);
	static GUIStyle_Internal_GetLineHeight_m2569_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_GetLineHeight_m2569_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)");
	return _il2cpp_icall_func(___target);
}
// System.Single UnityEngine.GUIStyle::get_lineHeight()
extern TypeInfo* GUIStyle_t517_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t68_il2cpp_TypeInfo_var;
extern "C" float GUIStyle_get_lineHeight_m2570 (GUIStyle_t517 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t517_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(953);
		Mathf_t68_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___m_Ptr_0);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t517_il2cpp_TypeInfo_var);
		float L_1 = GUIStyle_Internal_GetLineHeight_m2569(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
		float L_2 = roundf(L_1);
		return L_2;
	}
}
// System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
extern "C" void GUIStyle_SetDefaultFont_m2571 (Object_t * __this /* static, unused */, Font_t188 * ___font, const MethodInfo* method)
{
	typedef void (*GUIStyle_SetDefaultFont_m2571_ftn) (Font_t188 *);
	static GUIStyle_SetDefaultFont_m2571_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_SetDefaultFont_m2571_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)");
	_il2cpp_icall_func(___font);
}
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
extern TypeInfo* GUIStyle_t517_il2cpp_TypeInfo_var;
extern "C" GUIStyle_t517 * GUIStyle_get_none_m2572 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t517_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(953);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle_t517 * L_0 = ((GUIStyle_t517_StaticFields*)GUIStyle_t517_il2cpp_TypeInfo_var->static_fields)->___s_None_15;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		GUIStyle_t517 * L_1 = (GUIStyle_t517 *)il2cpp_codegen_object_new (GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2551(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t517_il2cpp_TypeInfo_var);
		((GUIStyle_t517_StaticFields*)GUIStyle_t517_il2cpp_TypeInfo_var->static_fields)->___s_None_15 = L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle_t517 * L_2 = ((GUIStyle_t517_StaticFields*)GUIStyle_t517_il2cpp_TypeInfo_var->static_fields)->___s_None_15;
		return L_2;
	}
}
// UnityEngine.Vector2 UnityEngine.GUIStyle::GetCursorPixelPosition(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
extern TypeInfo* GUIStyle_t517_il2cpp_TypeInfo_var;
extern "C" Vector2_t38  GUIStyle_GetCursorPixelPosition_m2573 (GUIStyle_t517 * __this, Rect_t230  ___position, GUIContent_t371 * ___content, int32_t ___cursorStringIndex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t517_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(953);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t38  V_0 = {0};
	{
		IntPtr_t L_0 = (__this->___m_Ptr_0);
		Rect_t230  L_1 = ___position;
		GUIContent_t371 * L_2 = ___content;
		int32_t L_3 = ___cursorStringIndex;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle_Internal_GetCursorPixelPosition_m2574(NULL /*static, unused*/, L_0, L_1, L_2, L_3, (&V_0), /*hidden argument*/NULL);
		Vector2_t38  L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.GUIStyle::Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
extern TypeInfo* GUIStyle_t517_il2cpp_TypeInfo_var;
extern "C" void GUIStyle_Internal_GetCursorPixelPosition_m2574 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t230  ___position, GUIContent_t371 * ___content, int32_t ___cursorStringIndex, Vector2_t38 * ___ret, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t517_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(953);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = ___target;
		GUIContent_t371 * L_1 = ___content;
		int32_t L_2 = ___cursorStringIndex;
		Vector2_t38 * L_3 = ___ret;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m2575(NULL /*static, unused*/, L_0, (&___position), L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
extern "C" void GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m2575 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t230 * ___position, GUIContent_t371 * ___content, int32_t ___cursorStringIndex, Vector2_t38 * ___ret, const MethodInfo* method)
{
	typedef void (*GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m2575_ftn) (IntPtr_t, Rect_t230 *, GUIContent_t371 *, int32_t, Vector2_t38 *);
	static GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m2575_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m2575_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::INTERNAL_CALL_Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___target, ___position, ___content, ___cursorStringIndex, ___ret);
}
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSize(UnityEngine.GUIContent)
extern TypeInfo* GUIStyle_t517_il2cpp_TypeInfo_var;
extern "C" Vector2_t38  GUIStyle_CalcSize_m2576 (GUIStyle_t517 * __this, GUIContent_t371 * ___content, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t517_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(953);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t38  V_0 = {0};
	{
		IntPtr_t L_0 = (__this->___m_Ptr_0);
		GUIContent_t371 * L_1 = ___content;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t517_il2cpp_TypeInfo_var);
		GUIStyle_Internal_CalcSize_m2577(NULL /*static, unused*/, L_0, L_1, (&V_0), /*hidden argument*/NULL);
		Vector2_t38  L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.GUIStyle::Internal_CalcSize(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2&)
extern "C" void GUIStyle_Internal_CalcSize_m2577 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t371 * ___content, Vector2_t38 * ___ret, const MethodInfo* method)
{
	typedef void (*GUIStyle_Internal_CalcSize_m2577_ftn) (IntPtr_t, GUIContent_t371 *, Vector2_t38 *);
	static GUIStyle_Internal_CalcSize_m2577_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_CalcSize_m2577_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_CalcSize(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___target, ___content, ___ret);
}
// System.Single UnityEngine.GUIStyle::CalcHeight(UnityEngine.GUIContent,System.Single)
extern TypeInfo* GUIStyle_t517_il2cpp_TypeInfo_var;
extern "C" float GUIStyle_CalcHeight_m2578 (GUIStyle_t517 * __this, GUIContent_t371 * ___content, float ___width, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t517_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(953);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___m_Ptr_0);
		GUIContent_t371 * L_1 = ___content;
		float L_2 = ___width;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t517_il2cpp_TypeInfo_var);
		float L_3 = GUIStyle_Internal_CalcHeight_m2579(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Single UnityEngine.GUIStyle::Internal_CalcHeight(System.IntPtr,UnityEngine.GUIContent,System.Single)
extern "C" float GUIStyle_Internal_CalcHeight_m2579 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t371 * ___content, float ___width, const MethodInfo* method)
{
	typedef float (*GUIStyle_Internal_CalcHeight_m2579_ftn) (IntPtr_t, GUIContent_t371 *, float);
	static GUIStyle_Internal_CalcHeight_m2579_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_CalcHeight_m2579_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_CalcHeight(System.IntPtr,UnityEngine.GUIContent,System.Single)");
	return _il2cpp_icall_func(___target, ___content, ___width);
}
// System.String UnityEngine.GUIStyle::ToString()
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern "C" String_t* GUIStyle_ToString_m2580 (GUIStyle_t517 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t73* L_0 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = GUIStyle_get_name_m2556(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		String_t* L_2 = UnityString_Format_m2796(NULL /*static, unused*/, (String_t*) &_stringLiteral180, L_0, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments
#include "UnityEngine_UnityEngine_TouchScreenKeyboard_InternalConstruc.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments
#include "UnityEngine_UnityEngine_TouchScreenKeyboard_InternalConstrucMethodDeclarations.h"



// UnityEngine.TouchScreenKeyboardType
#include "UnityEngine_UnityEngine_TouchScreenKeyboardType.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TouchScreenKeyboardType
#include "UnityEngine_UnityEngine_TouchScreenKeyboardTypeMethodDeclarations.h"



// UnityEngine.TouchScreenKeyboard
#include "UnityEngine_UnityEngine_TouchScreenKeyboard.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TouchScreenKeyboard
#include "UnityEngine_UnityEngine_TouchScreenKeyboardMethodDeclarations.h"

// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"


// System.Void UnityEngine.TouchScreenKeyboard::.ctor(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String)
extern TypeInfo* TouchScreenKeyboard_InternalConstructorHelperArguments_t531_il2cpp_TypeInfo_var;
extern TypeInfo* TouchScreenKeyboardType_t368_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t744_il2cpp_TypeInfo_var;
extern "C" void TouchScreenKeyboard__ctor_m2581 (TouchScreenKeyboard_t231 * __this, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, bool ___secure, bool ___alert, String_t* ___textPlaceholder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchScreenKeyboard_InternalConstructorHelperArguments_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(964);
		TouchScreenKeyboardType_t368_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(322);
		Convert_t744_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(965);
		s_Il2CppMethodIntialized = true;
	}
	TouchScreenKeyboard_InternalConstructorHelperArguments_t531  V_0 = {0};
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		Initobj (TouchScreenKeyboard_InternalConstructorHelperArguments_t531_il2cpp_TypeInfo_var, (&V_0));
		int32_t L_0 = ___keyboardType;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(TouchScreenKeyboardType_t368_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t744_il2cpp_TypeInfo_var);
		uint32_t L_3 = Convert_ToUInt32_m3526(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		(&V_0)->___keyboardType_0 = L_3;
		bool L_4 = ___autocorrection;
		uint32_t L_5 = Convert_ToUInt32_m3527(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		(&V_0)->___autocorrection_1 = L_5;
		bool L_6 = ___multiline;
		uint32_t L_7 = Convert_ToUInt32_m3527(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		(&V_0)->___multiline_2 = L_7;
		bool L_8 = ___secure;
		uint32_t L_9 = Convert_ToUInt32_m3527(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		(&V_0)->___secure_3 = L_9;
		bool L_10 = ___alert;
		uint32_t L_11 = Convert_ToUInt32_m3527(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		(&V_0)->___alert_4 = L_11;
		String_t* L_12 = ___text;
		String_t* L_13 = ___textPlaceholder;
		TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m2584(__this, (&V_0), L_12, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TouchScreenKeyboard::Destroy()
extern "C" void TouchScreenKeyboard_Destroy_m2582 (TouchScreenKeyboard_t231 * __this, const MethodInfo* method)
{
	typedef void (*TouchScreenKeyboard_Destroy_m2582_ftn) (TouchScreenKeyboard_t231 *);
	static TouchScreenKeyboard_Destroy_m2582_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_Destroy_m2582_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::Destroy()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TouchScreenKeyboard::Finalize()
extern "C" void TouchScreenKeyboard_Finalize_m2583 (TouchScreenKeyboard_t231 * __this, const MethodInfo* method)
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
		TouchScreenKeyboard_Destroy_m2582(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper(UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments&,System.String,System.String)
extern "C" void TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m2584 (TouchScreenKeyboard_t231 * __this, TouchScreenKeyboard_InternalConstructorHelperArguments_t531 * ___arguments, String_t* ___text, String_t* ___textPlaceholder, const MethodInfo* method)
{
	typedef void (*TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m2584_ftn) (TouchScreenKeyboard_t231 *, TouchScreenKeyboard_InternalConstructorHelperArguments_t531 *, String_t*, String_t*);
	static TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m2584_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m2584_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper(UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments&,System.String,System.String)");
	_il2cpp_icall_func(__this, ___arguments, ___text, ___textPlaceholder);
}
// System.Boolean UnityEngine.TouchScreenKeyboard::get_isSupported()
extern "C" bool TouchScreenKeyboard_get_isSupported_m1852 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = Application_get_platform_m1840(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 0)
		{
			goto IL_0054;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 1)
		{
			goto IL_0054;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 2)
		{
			goto IL_0054;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 3)
		{
			goto IL_0052;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 4)
		{
			goto IL_0052;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 5)
		{
			goto IL_0052;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 6)
		{
			goto IL_0035;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 7)
		{
			goto IL_0035;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 8)
		{
			goto IL_0052;
		}
	}

IL_0035:
	{
		int32_t L_3 = V_1;
		if (((int32_t)((int32_t)L_3-(int32_t)8)) == 0)
		{
			goto IL_0052;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)8)) == 1)
		{
			goto IL_0056;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)8)) == 2)
		{
			goto IL_0056;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)8)) == 3)
		{
			goto IL_0052;
		}
	}
	{
		goto IL_0056;
	}

IL_0052:
	{
		return 1;
	}

IL_0054:
	{
		return 0;
	}

IL_0056:
	{
		return 0;
	}
}
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" TouchScreenKeyboard_t231 * TouchScreenKeyboard_Open_m1915 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, bool ___secure, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	bool V_1 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		V_1 = 0;
		String_t* L_1 = ___text;
		int32_t L_2 = ___keyboardType;
		bool L_3 = ___autocorrection;
		bool L_4 = ___multiline;
		bool L_5 = ___secure;
		bool L_6 = V_1;
		String_t* L_7 = V_0;
		TouchScreenKeyboard_t231 * L_8 = TouchScreenKeyboard_Open_m2585(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" TouchScreenKeyboard_t231 * TouchScreenKeyboard_Open_m1916 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	bool V_1 = false;
	bool V_2 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		V_1 = 0;
		V_2 = 0;
		String_t* L_1 = ___text;
		int32_t L_2 = ___keyboardType;
		bool L_3 = ___autocorrection;
		bool L_4 = ___multiline;
		bool L_5 = V_2;
		bool L_6 = V_1;
		String_t* L_7 = V_0;
		TouchScreenKeyboard_t231 * L_8 = TouchScreenKeyboard_Open_m2585(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String)
extern TypeInfo* TouchScreenKeyboard_t231_il2cpp_TypeInfo_var;
extern "C" TouchScreenKeyboard_t231 * TouchScreenKeyboard_Open_m2585 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, bool ___secure, bool ___alert, String_t* ___textPlaceholder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchScreenKeyboard_t231_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(966);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___text;
		int32_t L_1 = ___keyboardType;
		bool L_2 = ___autocorrection;
		bool L_3 = ___multiline;
		bool L_4 = ___secure;
		bool L_5 = ___alert;
		String_t* L_6 = ___textPlaceholder;
		TouchScreenKeyboard_t231 * L_7 = (TouchScreenKeyboard_t231 *)il2cpp_codegen_object_new (TouchScreenKeyboard_t231_il2cpp_TypeInfo_var);
		TouchScreenKeyboard__ctor_m2581(L_7, L_0, L_1, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.String UnityEngine.TouchScreenKeyboard::get_text()
extern "C" String_t* TouchScreenKeyboard_get_text_m1842 (TouchScreenKeyboard_t231 * __this, const MethodInfo* method)
{
	typedef String_t* (*TouchScreenKeyboard_get_text_m1842_ftn) (TouchScreenKeyboard_t231 *);
	static TouchScreenKeyboard_get_text_m1842_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_get_text_m1842_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::get_text()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TouchScreenKeyboard::set_text(System.String)
extern "C" void TouchScreenKeyboard_set_text_m1843 (TouchScreenKeyboard_t231 * __this, String_t* ___value, const MethodInfo* method)
{
	typedef void (*TouchScreenKeyboard_set_text_m1843_ftn) (TouchScreenKeyboard_t231 *, String_t*);
	static TouchScreenKeyboard_set_text_m1843_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_set_text_m1843_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::set_text(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.TouchScreenKeyboard::set_hideInput(System.Boolean)
extern "C" void TouchScreenKeyboard_set_hideInput_m1914 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	typedef void (*TouchScreenKeyboard_set_hideInput_m1914_ftn) (bool);
	static TouchScreenKeyboard_set_hideInput_m1914_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_set_hideInput_m1914_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::set_hideInput(System.Boolean)");
	_il2cpp_icall_func(___value);
}
// System.Boolean UnityEngine.TouchScreenKeyboard::get_active()
extern "C" bool TouchScreenKeyboard_get_active_m1841 (TouchScreenKeyboard_t231 * __this, const MethodInfo* method)
{
	typedef bool (*TouchScreenKeyboard_get_active_m1841_ftn) (TouchScreenKeyboard_t231 *);
	static TouchScreenKeyboard_get_active_m1841_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_get_active_m1841_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::get_active()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TouchScreenKeyboard::set_active(System.Boolean)
extern "C" void TouchScreenKeyboard_set_active_m1913 (TouchScreenKeyboard_t231 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*TouchScreenKeyboard_set_active_m1913_ftn) (TouchScreenKeyboard_t231 *, bool);
	static TouchScreenKeyboard_set_active_m1913_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_set_active_m1913_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::set_active(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.TouchScreenKeyboard::get_done()
extern "C" bool TouchScreenKeyboard_get_done_m1856 (TouchScreenKeyboard_t231 * __this, const MethodInfo* method)
{
	typedef bool (*TouchScreenKeyboard_get_done_m1856_ftn) (TouchScreenKeyboard_t231 *);
	static TouchScreenKeyboard_get_done_m1856_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_get_done_m1856_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::get_done()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.TouchScreenKeyboard::get_wasCanceled()
extern "C" bool TouchScreenKeyboard_get_wasCanceled_m1853 (TouchScreenKeyboard_t231 * __this, const MethodInfo* method)
{
	typedef bool (*TouchScreenKeyboard_get_wasCanceled_m1853_ftn) (TouchScreenKeyboard_t231 *);
	static TouchScreenKeyboard_get_wasCanceled_m1853_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_get_wasCanceled_m1853_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::get_wasCanceled()");
	return _il2cpp_icall_func(__this);
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.EventModifiers
#include "UnityEngine_UnityEngine_EventModifiers.h"
// System.Char
#include "mscorlib_System_Char.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"


// System.Void UnityEngine.Event::.ctor()
extern "C" void Event__ctor_m1838 (Event_t236 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		Event_Init_m2586(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Event::Init()
extern "C" void Event_Init_m2586 (Event_t236 * __this, const MethodInfo* method)
{
	typedef void (*Event_Init_m2586_ftn) (Event_t236 *);
	static Event_Init_m2586_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Init_m2586_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Event::Finalize()
extern "C" void Event_Finalize_m2587 (Event_t236 * __this, const MethodInfo* method)
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
		Event_Cleanup_m2588(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Event::Cleanup()
extern "C" void Event_Cleanup_m2588 (Event_t236 * __this, const MethodInfo* method)
{
	typedef void (*Event_Cleanup_m2588_ftn) (Event_t236 *);
	static Event_Cleanup_m2588_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Cleanup_m2588_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Cleanup()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.EventType UnityEngine.Event::get_rawType()
extern "C" int32_t Event_get_rawType_m1869 (Event_t236 * __this, const MethodInfo* method)
{
	typedef int32_t (*Event_get_rawType_m1869_ftn) (Event_t236 *);
	static Event_get_rawType_m1869_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_rawType_m1869_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_rawType()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.EventType UnityEngine.Event::get_type()
extern "C" int32_t Event_get_type_m2589 (Event_t236 * __this, const MethodInfo* method)
{
	typedef int32_t (*Event_get_type_m2589_ftn) (Event_t236 *);
	static Event_get_type_m2589_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_type_m2589_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_type()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
extern "C" Vector2_t38  Event_get_mousePosition_m2590 (Event_t236 * __this, const MethodInfo* method)
{
	Vector2_t38  V_0 = {0};
	{
		Event_Internal_GetMousePosition_m2591(__this, (&V_0), /*hidden argument*/NULL);
		Vector2_t38  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)
extern "C" void Event_Internal_GetMousePosition_m2591 (Event_t236 * __this, Vector2_t38 * ___value, const MethodInfo* method)
{
	typedef void (*Event_Internal_GetMousePosition_m2591_ftn) (Event_t236 *, Vector2_t38 *);
	static Event_Internal_GetMousePosition_m2591_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Internal_GetMousePosition_m2591_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
extern "C" int32_t Event_get_modifiers_m1865 (Event_t236 * __this, const MethodInfo* method)
{
	typedef int32_t (*Event_get_modifiers_m1865_ftn) (Event_t236 *);
	static Event_get_modifiers_m1865_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_modifiers_m1865_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_modifiers()");
	return _il2cpp_icall_func(__this);
}
// System.Char UnityEngine.Event::get_character()
extern "C" uint16_t Event_get_character_m1867 (Event_t236 * __this, const MethodInfo* method)
{
	typedef uint16_t (*Event_get_character_m1867_ftn) (Event_t236 *);
	static Event_get_character_m1867_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_character_m1867_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_character()");
	return _il2cpp_icall_func(__this);
}
// System.String UnityEngine.Event::get_commandName()
extern "C" String_t* Event_get_commandName_m2592 (Event_t236 * __this, const MethodInfo* method)
{
	typedef String_t* (*Event_get_commandName_m2592_ftn) (Event_t236 *);
	static Event_get_commandName_m2592_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_commandName_m2592_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_commandName()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
extern "C" int32_t Event_get_keyCode_m1866 (Event_t236 * __this, const MethodInfo* method)
{
	typedef int32_t (*Event_get_keyCode_m1866_ftn) (Event_t236 *);
	static Event_get_keyCode_m1866_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_keyCode_m1866_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_keyCode()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Event UnityEngine.Event::get_current()
extern TypeInfo* Event_t236_il2cpp_TypeInfo_var;
extern "C" Event_t236 * Event_get_current_m2593 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(314);
		s_Il2CppMethodIntialized = true;
	}
	{
		Event_t236 * L_0 = ((Event_t236_StaticFields*)Event_t236_il2cpp_TypeInfo_var->static_fields)->___s_Current_1;
		return L_0;
	}
}
// System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
extern "C" void Event_Internal_SetNativeEvent_m2594 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, const MethodInfo* method)
{
	typedef void (*Event_Internal_SetNativeEvent_m2594_ftn) (IntPtr_t);
	static Event_Internal_SetNativeEvent_m2594_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Internal_SetNativeEvent_m2594_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)");
	_il2cpp_icall_func(___ptr);
}
// System.Void UnityEngine.Event::Internal_MakeMasterEventCurrent()
extern TypeInfo* Event_t236_il2cpp_TypeInfo_var;
extern "C" void Event_Internal_MakeMasterEventCurrent_m2595 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(314);
		s_Il2CppMethodIntialized = true;
	}
	{
		Event_t236 * L_0 = ((Event_t236_StaticFields*)Event_t236_il2cpp_TypeInfo_var->static_fields)->___s_MasterEvent_2;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Event_t236 * L_1 = (Event_t236 *)il2cpp_codegen_object_new (Event_t236_il2cpp_TypeInfo_var);
		Event__ctor_m1838(L_1, /*hidden argument*/NULL);
		((Event_t236_StaticFields*)Event_t236_il2cpp_TypeInfo_var->static_fields)->___s_MasterEvent_2 = L_1;
	}

IL_0014:
	{
		Event_t236 * L_2 = ((Event_t236_StaticFields*)Event_t236_il2cpp_TypeInfo_var->static_fields)->___s_MasterEvent_2;
		((Event_t236_StaticFields*)Event_t236_il2cpp_TypeInfo_var->static_fields)->___s_Current_1 = L_2;
		Event_t236 * L_3 = ((Event_t236_StaticFields*)Event_t236_il2cpp_TypeInfo_var->static_fields)->___s_MasterEvent_2;
		NullCheck(L_3);
		IntPtr_t L_4 = (L_3->___m_Ptr_0);
		Event_Internal_SetNativeEvent_m2594(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Event::PopEvent(UnityEngine.Event)
extern "C" bool Event_PopEvent_m1870 (Object_t * __this /* static, unused */, Event_t236 * ___outEvent, const MethodInfo* method)
{
	typedef bool (*Event_PopEvent_m1870_ftn) (Event_t236 *);
	static Event_PopEvent_m1870_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_PopEvent_m1870_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::PopEvent(UnityEngine.Event)");
	return _il2cpp_icall_func(___outEvent);
}
// System.Boolean UnityEngine.Event::get_isKey()
extern "C" bool Event_get_isKey_m2596 (Event_t236 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = Event_get_type_m2589(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)4)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)5))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.Event::get_isMouse()
extern "C" bool Event_get_isMouse_m2597 (Event_t236 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = Event_get_type_m2589(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_4 = V_0;
		G_B5_0 = ((((int32_t)L_4) == ((int32_t)3))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B5_0 = 1;
	}

IL_0022:
	{
		return G_B5_0;
	}
}
// System.Int32 UnityEngine.Event::GetHashCode()
extern "C" int32_t Event_GetHashCode_m2598 (Event_t236 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Vector2_t38  V_1 = {0};
	{
		V_0 = 1;
		bool L_0 = Event_get_isKey_m2596(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = Event_get_keyCode_m1866(__this, /*hidden argument*/NULL);
		V_0 = (((uint16_t)L_1));
	}

IL_0015:
	{
		bool L_2 = Event_get_isMouse_m2597(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Vector2_t38  L_3 = Event_get_mousePosition_m2590(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = Vector2_GetHashCode_m2605((&V_1), /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_002f:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = Event_get_modifiers_m1865(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_5*(int32_t)((int32_t)37)))|(int32_t)L_6));
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Boolean UnityEngine.Event::Equals(System.Object)
extern TypeInfo* Event_t236_il2cpp_TypeInfo_var;
extern "C" bool Event_Equals_m2599 (Event_t236 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(314);
		s_Il2CppMethodIntialized = true;
	}
	Event_t236 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		Object_t * L_1 = ___obj;
		bool L_2 = Object_ReferenceEquals_m3528(NULL /*static, unused*/, __this, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		return 1;
	}

IL_0016:
	{
		Object_t * L_3 = ___obj;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m1633(L_3, /*hidden argument*/NULL);
		Type_t * L_5 = Object_GetType_m1633(__this, /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_4) == ((Object_t*)(Type_t *)L_5)))
		{
			goto IL_0029;
		}
	}
	{
		return 0;
	}

IL_0029:
	{
		Object_t * L_6 = ___obj;
		V_0 = ((Event_t236 *)Castclass(L_6, Event_t236_il2cpp_TypeInfo_var));
		int32_t L_7 = Event_get_type_m2589(__this, /*hidden argument*/NULL);
		Event_t236 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = Event_get_type_m2589(L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_10 = Event_get_modifiers_m1865(__this, /*hidden argument*/NULL);
		Event_t236 * L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = Event_get_modifiers_m1865(L_11, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)-33)))) == ((int32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)-33))))))
		{
			goto IL_005a;
		}
	}

IL_0058:
	{
		return 0;
	}

IL_005a:
	{
		bool L_13 = Event_get_isKey_m2596(__this, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_14 = Event_get_keyCode_m1866(__this, /*hidden argument*/NULL);
		Event_t236 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = Event_get_keyCode_m1866(L_15, /*hidden argument*/NULL);
		return ((((int32_t)L_14) == ((int32_t)L_16))? 1 : 0);
	}

IL_0074:
	{
		bool L_17 = Event_get_isMouse_m2597(__this, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0091;
		}
	}
	{
		Vector2_t38  L_18 = Event_get_mousePosition_m2590(__this, /*hidden argument*/NULL);
		Event_t236 * L_19 = V_0;
		NullCheck(L_19);
		Vector2_t38  L_20 = Event_get_mousePosition_m2590(L_19, /*hidden argument*/NULL);
		bool L_21 = Vector2_op_Equality_m203(NULL /*static, unused*/, L_18, L_20, /*hidden argument*/NULL);
		return L_21;
	}

IL_0091:
	{
		return 0;
	}
}
// System.String UnityEngine.Event::ToString()
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* EventType_t534_il2cpp_TypeInfo_var;
extern TypeInfo* EventModifiers_t535_il2cpp_TypeInfo_var;
extern TypeInfo* KeyCode_t533_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t75_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Vector2_t38_il2cpp_TypeInfo_var;
extern "C" String_t* Event_ToString_m2600 (Event_t236 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		EventType_t534_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(961);
		EventModifiers_t535_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(967);
		KeyCode_t533_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(968);
		Int32_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		Vector2_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Event_get_isKey_m2596(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_00c0;
		}
	}
	{
		uint16_t L_1 = Event_get_character_m1867(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0051;
		}
	}
	{
		ObjectU5BU5D_t73* L_2 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 3));
		int32_t L_3 = Event_get_type_m2589(__this, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(EventType_t534_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_5;
		ObjectU5BU5D_t73* L_6 = L_2;
		int32_t L_7 = Event_get_modifiers_m1865(__this, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		Object_t * L_9 = Box(EventModifiers_t535_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 1);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 1)) = (Object_t *)L_9;
		ObjectU5BU5D_t73* L_10 = L_6;
		int32_t L_11 = Event_get_keyCode_m1866(__this, /*hidden argument*/NULL);
		int32_t L_12 = L_11;
		Object_t * L_13 = Box(KeyCode_t533_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		ArrayElementTypeCheck (L_10, L_13);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 2)) = (Object_t *)L_13;
		String_t* L_14 = UnityString_Format_m2796(NULL /*static, unused*/, (String_t*) &_stringLiteral181, L_10, /*hidden argument*/NULL);
		return L_14;
	}

IL_0051:
	{
		ObjectU5BU5D_t73* L_15 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 8));
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, (String_t*) &_stringLiteral182);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_15, 0)) = (Object_t *)(String_t*) &_stringLiteral182;
		ObjectU5BU5D_t73* L_16 = L_15;
		int32_t L_17 = Event_get_type_m2589(__this, /*hidden argument*/NULL);
		int32_t L_18 = L_17;
		Object_t * L_19 = Box(EventType_t534_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 1);
		ArrayElementTypeCheck (L_16, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 1)) = (Object_t *)L_19;
		ObjectU5BU5D_t73* L_20 = L_16;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 2);
		ArrayElementTypeCheck (L_20, (String_t*) &_stringLiteral183);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 2)) = (Object_t *)(String_t*) &_stringLiteral183;
		ObjectU5BU5D_t73* L_21 = L_20;
		uint16_t L_22 = Event_get_character_m1867(__this, /*hidden argument*/NULL);
		int32_t L_23 = L_22;
		Object_t * L_24 = Box(Int32_t75_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 3);
		ArrayElementTypeCheck (L_21, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, 3)) = (Object_t *)L_24;
		ObjectU5BU5D_t73* L_25 = L_21;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 4);
		ArrayElementTypeCheck (L_25, (String_t*) &_stringLiteral184);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_25, 4)) = (Object_t *)(String_t*) &_stringLiteral184;
		ObjectU5BU5D_t73* L_26 = L_25;
		int32_t L_27 = Event_get_modifiers_m1865(__this, /*hidden argument*/NULL);
		int32_t L_28 = L_27;
		Object_t * L_29 = Box(EventModifiers_t535_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 5);
		ArrayElementTypeCheck (L_26, L_29);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_26, 5)) = (Object_t *)L_29;
		ObjectU5BU5D_t73* L_30 = L_26;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 6);
		ArrayElementTypeCheck (L_30, (String_t*) &_stringLiteral185);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_30, 6)) = (Object_t *)(String_t*) &_stringLiteral185;
		ObjectU5BU5D_t73* L_31 = L_30;
		int32_t L_32 = Event_get_keyCode_m1866(__this, /*hidden argument*/NULL);
		int32_t L_33 = L_32;
		Object_t * L_34 = Box(KeyCode_t533_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 7);
		ArrayElementTypeCheck (L_31, L_34);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 7)) = (Object_t *)L_34;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_35 = String_Concat_m255(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		String_t* L_36 = UnityString_Format_m2796(NULL /*static, unused*/, L_35, ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return L_36;
	}

IL_00c0:
	{
		bool L_37 = Event_get_isMouse_m2597(__this, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0106;
		}
	}
	{
		ObjectU5BU5D_t73* L_38 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 3));
		int32_t L_39 = Event_get_type_m2589(__this, /*hidden argument*/NULL);
		int32_t L_40 = L_39;
		Object_t * L_41 = Box(EventType_t534_il2cpp_TypeInfo_var, &L_40);
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, 0);
		ArrayElementTypeCheck (L_38, L_41);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_38, 0)) = (Object_t *)L_41;
		ObjectU5BU5D_t73* L_42 = L_38;
		Vector2_t38  L_43 = Event_get_mousePosition_m2590(__this, /*hidden argument*/NULL);
		Vector2_t38  L_44 = L_43;
		Object_t * L_45 = Box(Vector2_t38_il2cpp_TypeInfo_var, &L_44);
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 1);
		ArrayElementTypeCheck (L_42, L_45);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_42, 1)) = (Object_t *)L_45;
		ObjectU5BU5D_t73* L_46 = L_42;
		int32_t L_47 = Event_get_modifiers_m1865(__this, /*hidden argument*/NULL);
		int32_t L_48 = L_47;
		Object_t * L_49 = Box(EventModifiers_t535_il2cpp_TypeInfo_var, &L_48);
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, 2);
		ArrayElementTypeCheck (L_46, L_49);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_46, 2)) = (Object_t *)L_49;
		String_t* L_50 = UnityString_Format_m2796(NULL /*static, unused*/, (String_t*) &_stringLiteral186, L_46, /*hidden argument*/NULL);
		return L_50;
	}

IL_0106:
	{
		int32_t L_51 = Event_get_type_m2589(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_51) == ((int32_t)((int32_t)14))))
		{
			goto IL_0120;
		}
	}
	{
		int32_t L_52 = Event_get_type_m2589(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_52) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0148;
		}
	}

IL_0120:
	{
		ObjectU5BU5D_t73* L_53 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 2));
		int32_t L_54 = Event_get_type_m2589(__this, /*hidden argument*/NULL);
		int32_t L_55 = L_54;
		Object_t * L_56 = Box(EventType_t534_il2cpp_TypeInfo_var, &L_55);
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, 0);
		ArrayElementTypeCheck (L_53, L_56);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, 0)) = (Object_t *)L_56;
		ObjectU5BU5D_t73* L_57 = L_53;
		String_t* L_58 = Event_get_commandName_m2592(__this, /*hidden argument*/NULL);
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, 1);
		ArrayElementTypeCheck (L_57, L_58);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_57, 1)) = (Object_t *)L_58;
		String_t* L_59 = UnityString_Format_m2796(NULL /*static, unused*/, (String_t*) &_stringLiteral187, L_57, /*hidden argument*/NULL);
		return L_59;
	}

IL_0148:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_60 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		int32_t L_61 = Event_get_type_m2589(__this, /*hidden argument*/NULL);
		int32_t L_62 = L_61;
		Object_t * L_63 = Box(EventType_t534_il2cpp_TypeInfo_var, &L_62);
		String_t* L_64 = String_Concat_m340(NULL /*static, unused*/, L_60, L_63, /*hidden argument*/NULL);
		return L_64;
	}
}
// Conversion methods for marshalling of: UnityEngine.Event
void Event_t236_marshal(const Event_t236& unmarshaled, Event_t236_marshaled& marshaled)
{
	Il2CppCodeGenException* ___s_Current_1Exception = il2cpp_codegen_get_not_supported_exception("Cannot marshal field 's_Current' of type 'Event': Reference type field marshaling is not supported.");
	il2cpp_codegen_raise_exception(___s_Current_1Exception);
}
void Event_t236_marshal_back(const Event_t236_marshaled& marshaled, Event_t236& unmarshaled)
{
	Il2CppCodeGenException* ___s_Current_1Exception = il2cpp_codegen_get_not_supported_exception("Cannot marshal field 's_Current' of type 'Event': Reference type field marshaling is not supported.");
	il2cpp_codegen_raise_exception(___s_Current_1Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.Event
void Event_t236_marshal_cleanup(Event_t236_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCodeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventTypeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.EventModifiers
#include "UnityEngine_UnityEngine_EventModifiersMethodDeclarations.h"



// UnityEngine.Gizmos
#include "UnityEngine_UnityEngine_Gizmos.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Gizmos
#include "UnityEngine_UnityEngine_GizmosMethodDeclarations.h"



// System.Void UnityEngine.Gizmos::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Gizmos_DrawLine_m315 (Object_t * __this /* static, unused */, Vector3_t58  ___from, Vector3_t58  ___to, const MethodInfo* method)
{
	{
		Gizmos_INTERNAL_CALL_DrawLine_m2601(NULL /*static, unused*/, (&___from), (&___to), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Gizmos::INTERNAL_CALL_DrawLine(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void Gizmos_INTERNAL_CALL_DrawLine_m2601 (Object_t * __this /* static, unused */, Vector3_t58 * ___from, Vector3_t58 * ___to, const MethodInfo* method)
{
	typedef void (*Gizmos_INTERNAL_CALL_DrawLine_m2601_ftn) (Vector3_t58 *, Vector3_t58 *);
	static Gizmos_INTERNAL_CALL_DrawLine_m2601_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Gizmos_INTERNAL_CALL_DrawLine_m2601_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Gizmos::INTERNAL_CALL_DrawLine(UnityEngine.Vector3&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___from, ___to);
}
// System.Void UnityEngine.Gizmos::DrawCube(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Gizmos_DrawCube_m313 (Object_t * __this /* static, unused */, Vector3_t58  ___center, Vector3_t58  ___size, const MethodInfo* method)
{
	{
		Gizmos_INTERNAL_CALL_DrawCube_m2602(NULL /*static, unused*/, (&___center), (&___size), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Gizmos::INTERNAL_CALL_DrawCube(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void Gizmos_INTERNAL_CALL_DrawCube_m2602 (Object_t * __this /* static, unused */, Vector3_t58 * ___center, Vector3_t58 * ___size, const MethodInfo* method)
{
	typedef void (*Gizmos_INTERNAL_CALL_DrawCube_m2602_ftn) (Vector3_t58 *, Vector3_t58 *);
	static Gizmos_INTERNAL_CALL_DrawCube_m2602_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Gizmos_INTERNAL_CALL_DrawCube_m2602_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Gizmos::INTERNAL_CALL_DrawCube(UnityEngine.Vector3&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___center, ___size);
}
// System.Void UnityEngine.Gizmos::INTERNAL_set_color(UnityEngine.Color&)
extern "C" void Gizmos_INTERNAL_set_color_m2603 (Object_t * __this /* static, unused */, Color_t13 * ___value, const MethodInfo* method)
{
	typedef void (*Gizmos_INTERNAL_set_color_m2603_ftn) (Color_t13 *);
	static Gizmos_INTERNAL_set_color_m2603_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Gizmos_INTERNAL_set_color_m2603_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Gizmos::INTERNAL_set_color(UnityEngine.Color&)");
	_il2cpp_icall_func(___value);
}
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
extern "C" void Gizmos_set_color_m311 (Object_t * __this /* static, unused */, Color_t13  ___value, const MethodInfo* method)
{
	{
		Gizmos_INTERNAL_set_color_m2603(NULL /*static, unused*/, (&___value), /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeException.h"
// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeExceptionMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"


// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" void Vector2__ctor_m306 (Vector2_t38 * __this, float ___x, float ___y, const MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___x_1 = L_0;
		float L_1 = ___y;
		__this->___y_2 = L_1;
		return;
	}
}
// System.Single UnityEngine.Vector2::get_Item(System.Int32)
extern TypeInfo* IndexOutOfRangeException_t745_il2cpp_TypeInfo_var;
extern "C" float Vector2_get_Item_m1805 (Vector2_t38 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(969);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_0022;
	}

IL_0014:
	{
		float L_3 = (__this->___x_1);
		return L_3;
	}

IL_001b:
	{
		float L_4 = (__this->___y_2);
		return L_4;
	}

IL_0022:
	{
		IndexOutOfRangeException_t745 * L_5 = (IndexOutOfRangeException_t745 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t745_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m3529(L_5, (String_t*) &_stringLiteral188, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}
}
// System.Void UnityEngine.Vector2::set_Item(System.Int32,System.Single)
extern TypeInfo* IndexOutOfRangeException_t745_il2cpp_TypeInfo_var;
extern "C" void Vector2_set_Item_m1815 (Vector2_t38 * __this, int32_t ___index, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(969);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0020;
		}
	}
	{
		goto IL_002c;
	}

IL_0014:
	{
		float L_3 = ___value;
		__this->___x_1 = L_3;
		goto IL_0037;
	}

IL_0020:
	{
		float L_4 = ___value;
		__this->___y_2 = L_4;
		goto IL_0037;
	}

IL_002c:
	{
		IndexOutOfRangeException_t745 * L_5 = (IndexOutOfRangeException_t745 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t745_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m3529(L_5, (String_t*) &_stringLiteral188, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0037:
	{
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::MoveTowards(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C" Vector2_t38  Vector2_MoveTowards_m201 (Object_t * __this /* static, unused */, Vector2_t38  ___current, Vector2_t38  ___target, float ___maxDistanceDelta, const MethodInfo* method)
{
	Vector2_t38  V_0 = {0};
	float V_1 = 0.0f;
	{
		Vector2_t38  L_0 = ___target;
		Vector2_t38  L_1 = ___current;
		Vector2_t38  L_2 = Vector2_op_Subtraction_m323(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Vector2_get_magnitude_m2607((&V_0), /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = V_1;
		float L_5 = ___maxDistanceDelta;
		if ((((float)L_4) <= ((float)L_5)))
		{
			goto IL_0022;
		}
	}
	{
		float L_6 = V_1;
		if ((!(((float)L_6) == ((float)(0.0f)))))
		{
			goto IL_0024;
		}
	}

IL_0022:
	{
		Vector2_t38  L_7 = ___target;
		return L_7;
	}

IL_0024:
	{
		Vector2_t38  L_8 = ___current;
		Vector2_t38  L_9 = V_0;
		float L_10 = V_1;
		Vector2_t38  L_11 = Vector2_op_Division_m1864(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		float L_12 = ___maxDistanceDelta;
		Vector2_t38  L_13 = Vector2_op_Multiply_m330(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		Vector2_t38  L_14 = Vector2_op_Addition_m192(NULL /*static, unused*/, L_8, L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::Scale(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" Vector2_t38  Vector2_Scale_m1903 (Object_t * __this /* static, unused */, Vector2_t38  ___a, Vector2_t38  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		Vector2_t38  L_4 = {0};
		Vector2__ctor_m306(&L_4, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String UnityEngine.Vector2::ToString()
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t345_il2cpp_TypeInfo_var;
extern "C" String_t* Vector2_ToString_m2604 (Vector2_t38 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		Single_t345_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t73* L_0 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 2));
		float L_1 = (__this->___x_1);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t345_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t73* L_4 = L_0;
		float L_5 = (__this->___y_2);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t345_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m2796(NULL /*static, unused*/, (String_t*) &_stringLiteral189, L_4, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Int32 UnityEngine.Vector2::GetHashCode()
extern "C" int32_t Vector2_GetHashCode_m2605 (Vector2_t38 * __this, const MethodInfo* method)
{
	{
		float* L_0 = &(__this->___x_1);
		int32_t L_1 = Single_GetHashCode_m3514(L_0, /*hidden argument*/NULL);
		float* L_2 = &(__this->___y_2);
		int32_t L_3 = Single_GetHashCode_m3514(L_2, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))));
	}
}
// System.Boolean UnityEngine.Vector2::Equals(System.Object)
extern TypeInfo* Vector2_t38_il2cpp_TypeInfo_var;
extern "C" bool Vector2_Equals_m2606 (Vector2_t38 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector2_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t38  V_0 = {0};
	int32_t G_B5_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, Vector2_t38_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Vector2_t38 *)((Vector2_t38 *)UnBox (L_1, Vector2_t38_il2cpp_TypeInfo_var))));
		float* L_2 = &(__this->___x_1);
		float L_3 = ((&V_0)->___x_1);
		bool L_4 = Single_Equals_m3530(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		float* L_5 = &(__this->___y_2);
		float L_6 = ((&V_0)->___y_2);
		bool L_7 = Single_Equals_m3530(L_5, L_6, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_7));
		goto IL_0040;
	}

IL_003f:
	{
		G_B5_0 = 0;
	}

IL_0040:
	{
		return G_B5_0;
	}
}
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" float Vector2_Dot_m1659 (Object_t * __this /* static, unused */, Vector2_t38  ___lhs, Vector2_t38  ___rhs, const MethodInfo* method)
{
	{
		float L_0 = ((&___lhs)->___x_1);
		float L_1 = ((&___rhs)->___x_1);
		float L_2 = ((&___lhs)->___y_2);
		float L_3 = ((&___rhs)->___y_2);
		return ((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))));
	}
}
// System.Single UnityEngine.Vector2::get_magnitude()
extern TypeInfo* Mathf_t68_il2cpp_TypeInfo_var;
extern "C" float Vector2_get_magnitude_m2607 (Vector2_t38 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t68_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = (__this->___x_1);
		float L_1 = (__this->___x_1);
		float L_2 = (__this->___y_2);
		float L_3 = (__this->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
		float L_4 = sqrtf(((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3)))));
		return L_4;
	}
}
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
extern "C" float Vector2_get_sqrMagnitude_m1613 (Vector2_t38 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___x_1);
		float L_1 = (__this->___x_1);
		float L_2 = (__this->___y_2);
		float L_3 = (__this->___y_2);
		return ((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))));
	}
}
// System.Single UnityEngine.Vector2::SqrMagnitude(UnityEngine.Vector2)
extern "C" float Vector2_SqrMagnitude_m2608 (Object_t * __this /* static, unused */, Vector2_t38  ___a, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___a)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___a)->___y_2);
		return ((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))));
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C" Vector2_t38  Vector2_get_zero_m195 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector2_t38  L_0 = {0};
		Vector2__ctor_m306(&L_0, (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
extern "C" Vector2_t38  Vector2_get_one_m1802 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector2_t38  L_0 = {0};
		Vector2__ctor_m306(&L_0, (1.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
extern "C" Vector2_t38  Vector2_get_up_m326 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector2_t38  L_0 = {0};
		Vector2__ctor_m306(&L_0, (0.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
extern "C" Vector2_t38  Vector2_get_right_m324 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector2_t38  L_0 = {0};
		Vector2__ctor_m306(&L_0, (1.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" Vector2_t38  Vector2_op_Addition_m192 (Object_t * __this /* static, unused */, Vector2_t38  ___a, Vector2_t38  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		Vector2_t38  L_4 = {0};
		Vector2__ctor_m306(&L_4, ((float)((float)L_0+(float)L_1)), ((float)((float)L_2+(float)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" Vector2_t38  Vector2_op_Subtraction_m323 (Object_t * __this /* static, unused */, Vector2_t38  ___a, Vector2_t38  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		Vector2_t38  L_4 = {0};
		Vector2__ctor_m306(&L_4, ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_UnaryNegation(UnityEngine.Vector2)
extern "C" Vector2_t38  Vector2_op_UnaryNegation_m325 (Object_t * __this /* static, unused */, Vector2_t38  ___a, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___a)->___y_2);
		Vector2_t38  L_2 = {0};
		Vector2__ctor_m306(&L_2, ((-L_0)), ((-L_1)), /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C" Vector2_t38  Vector2_op_Multiply_m330 (Object_t * __this /* static, unused */, Vector2_t38  ___a, float ___d, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		Vector2_t38  L_4 = {0};
		Vector2__ctor_m306(&L_4, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(System.Single,UnityEngine.Vector2)
extern "C" Vector2_t38  Vector2_op_Multiply_m191 (Object_t * __this /* static, unused */, float ___d, Vector2_t38  ___a, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		Vector2_t38  L_4 = {0};
		Vector2__ctor_m306(&L_4, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
extern "C" Vector2_t38  Vector2_op_Division_m1864 (Object_t * __this /* static, unused */, Vector2_t38  ___a, float ___d, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		Vector2_t38  L_4 = {0};
		Vector2__ctor_m306(&L_4, ((float)((float)L_0/(float)L_1)), ((float)((float)L_2/(float)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" bool Vector2_op_Equality_m203 (Object_t * __this /* static, unused */, Vector2_t38  ___lhs, Vector2_t38  ___rhs, const MethodInfo* method)
{
	{
		Vector2_t38  L_0 = ___lhs;
		Vector2_t38  L_1 = ___rhs;
		Vector2_t38  L_2 = Vector2_op_Subtraction_m323(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = Vector2_SqrMagnitude_m2608(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return ((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" bool Vector2_op_Inequality_m196 (Object_t * __this /* static, unused */, Vector2_t38  ___lhs, Vector2_t38  ___rhs, const MethodInfo* method)
{
	{
		Vector2_t38  L_0 = ___lhs;
		Vector2_t38  L_1 = ___rhs;
		Vector2_t38  L_2 = Vector2_op_Subtraction_m323(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = Vector2_SqrMagnitude_m2608(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return ((((int32_t)((!(((float)L_3) >= ((float)(9.99999944E-11f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C" Vector2_t38  Vector2_op_Implicit_m199 (Object_t * __this /* static, unused */, Vector3_t58  ___v, const MethodInfo* method)
{
	{
		float L_0 = ((&___v)->___x_1);
		float L_1 = ((&___v)->___y_2);
		Vector2_t38  L_2 = {0};
		Vector2__ctor_m306(&L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C" Vector3_t58  Vector2_op_Implicit_m314 (Object_t * __this /* static, unused */, Vector2_t38  ___v, const MethodInfo* method)
{
	{
		float L_0 = ((&___v)->___x_1);
		float L_1 = ((&___v)->___y_2);
		Vector3_t58  L_2 = {0};
		Vector3__ctor_m312(&L_2, L_0, L_1, (0.0f), /*hidden argument*/NULL);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" void Vector3__ctor_m312 (Vector3_t58 * __this, float ___x, float ___y, float ___z, const MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___x_1 = L_0;
		float L_1 = ___y;
		__this->___y_2 = L_1;
		float L_2 = ___z;
		__this->___z_3 = L_2;
		return;
	}
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
extern "C" void Vector3__ctor_m1735 (Vector3_t58 * __this, float ___x, float ___y, const MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___x_1 = L_0;
		float L_1 = ___y;
		__this->___y_2 = L_1;
		__this->___z_3 = (0.0f);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern TypeInfo* Mathf_t68_il2cpp_TypeInfo_var;
extern "C" Vector3_t58  Vector3_Lerp_m1941 (Object_t * __this /* static, unused */, Vector3_t58  ___from, Vector3_t58  ___to, float ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t68_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m1780(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___t = L_1;
		float L_2 = ((&___from)->___x_1);
		float L_3 = ((&___to)->___x_1);
		float L_4 = ((&___from)->___x_1);
		float L_5 = ___t;
		float L_6 = ((&___from)->___y_2);
		float L_7 = ((&___to)->___y_2);
		float L_8 = ((&___from)->___y_2);
		float L_9 = ___t;
		float L_10 = ((&___from)->___z_3);
		float L_11 = ((&___to)->___z_3);
		float L_12 = ((&___from)->___z_3);
		float L_13 = ___t;
		Vector3_t58  L_14 = {0};
		Vector3__ctor_m312(&L_14, ((float)((float)L_2+(float)((float)((float)((float)((float)L_3-(float)L_4))*(float)L_5)))), ((float)((float)L_6+(float)((float)((float)((float)((float)L_7-(float)L_8))*(float)L_9)))), ((float)((float)L_10+(float)((float)((float)((float)((float)L_11-(float)L_12))*(float)L_13)))), /*hidden argument*/NULL);
		return L_14;
	}
}
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
extern TypeInfo* IndexOutOfRangeException_t745_il2cpp_TypeInfo_var;
extern "C" float Vector3_get_Item_m1945 (Vector3_t58 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(969);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0019;
		}
		if (L_1 == 1)
		{
			goto IL_0020;
		}
		if (L_1 == 2)
		{
			goto IL_0027;
		}
	}
	{
		goto IL_002e;
	}

IL_0019:
	{
		float L_2 = (__this->___x_1);
		return L_2;
	}

IL_0020:
	{
		float L_3 = (__this->___y_2);
		return L_3;
	}

IL_0027:
	{
		float L_4 = (__this->___z_3);
		return L_4;
	}

IL_002e:
	{
		IndexOutOfRangeException_t745 * L_5 = (IndexOutOfRangeException_t745 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t745_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m3529(L_5, (String_t*) &_stringLiteral190, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}
}
// System.Void UnityEngine.Vector3::set_Item(System.Int32,System.Single)
extern TypeInfo* IndexOutOfRangeException_t745_il2cpp_TypeInfo_var;
extern "C" void Vector3_set_Item_m1946 (Vector3_t58 * __this, int32_t ___index, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(969);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0019;
		}
		if (L_1 == 1)
		{
			goto IL_0025;
		}
		if (L_1 == 2)
		{
			goto IL_0031;
		}
	}
	{
		goto IL_003d;
	}

IL_0019:
	{
		float L_2 = ___value;
		__this->___x_1 = L_2;
		goto IL_0048;
	}

IL_0025:
	{
		float L_3 = ___value;
		__this->___y_2 = L_3;
		goto IL_0048;
	}

IL_0031:
	{
		float L_4 = ___value;
		__this->___z_3 = L_4;
		goto IL_0048;
	}

IL_003d:
	{
		IndexOutOfRangeException_t745 * L_5 = (IndexOutOfRangeException_t745 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t745_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m3529(L_5, (String_t*) &_stringLiteral190, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0048:
	{
		return;
	}
}
// System.Int32 UnityEngine.Vector3::GetHashCode()
extern "C" int32_t Vector3_GetHashCode_m2609 (Vector3_t58 * __this, const MethodInfo* method)
{
	{
		float* L_0 = &(__this->___x_1);
		int32_t L_1 = Single_GetHashCode_m3514(L_0, /*hidden argument*/NULL);
		float* L_2 = &(__this->___y_2);
		int32_t L_3 = Single_GetHashCode_m3514(L_2, /*hidden argument*/NULL);
		float* L_4 = &(__this->___z_3);
		int32_t L_5 = Single_GetHashCode_m3514(L_4, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))));
	}
}
// System.Boolean UnityEngine.Vector3::Equals(System.Object)
extern TypeInfo* Vector3_t58_il2cpp_TypeInfo_var;
extern "C" bool Vector3_Equals_m2610 (Vector3_t58 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(185);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t58  V_0 = {0};
	int32_t G_B6_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, Vector3_t58_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Vector3_t58 *)((Vector3_t58 *)UnBox (L_1, Vector3_t58_il2cpp_TypeInfo_var))));
		float* L_2 = &(__this->___x_1);
		float L_3 = ((&V_0)->___x_1);
		bool L_4 = Single_Equals_m3530(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		float* L_5 = &(__this->___y_2);
		float L_6 = ((&V_0)->___y_2);
		bool L_7 = Single_Equals_m3530(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		float* L_8 = &(__this->___z_3);
		float L_9 = ((&V_0)->___z_3);
		bool L_10 = Single_Equals_m3530(L_8, L_9, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_10));
		goto IL_0057;
	}

IL_0056:
	{
		G_B6_0 = 0;
	}

IL_0057:
	{
		return G_B6_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
extern "C" Vector3_t58  Vector3_Normalize_m2611 (Object_t * __this /* static, unused */, Vector3_t58  ___value, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t58  L_0 = ___value;
		float L_1 = Vector3_Magnitude_m2614(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = V_0;
		if ((!(((float)L_2) > ((float)(1.0E-05f)))))
		{
			goto IL_001a;
		}
	}
	{
		Vector3_t58  L_3 = ___value;
		float L_4 = V_0;
		Vector3_t58  L_5 = Vector3_op_Division_m2617(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_001a:
	{
		Vector3_t58  L_6 = Vector3_get_zero_m1608(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C" Vector3_t58  Vector3_get_normalized_m1970 (Vector3_t58 * __this, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = Vector3_Normalize_m2611(NULL /*static, unused*/, (*(Vector3_t58 *)__this), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String UnityEngine.Vector3::ToString()
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t345_il2cpp_TypeInfo_var;
extern "C" String_t* Vector3_ToString_m2612 (Vector3_t58 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		Single_t345_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t73* L_0 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 3));
		float L_1 = (__this->___x_1);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t345_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t73* L_4 = L_0;
		float L_5 = (__this->___y_2);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t345_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t73* L_8 = L_4;
		float L_9 = (__this->___z_3);
		float L_10 = L_9;
		Object_t * L_11 = Box(Single_t345_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m2796(NULL /*static, unused*/, (String_t*) &_stringLiteral191, L_8, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.String UnityEngine.Vector3::ToString(System.String)
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern "C" String_t* Vector3_ToString_m2613 (Vector3_t58 * __this, String_t* ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t73* L_0 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 3));
		float* L_1 = &(__this->___x_1);
		String_t* L_2 = ___format;
		String_t* L_3 = Single_ToString_m3531(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t73* L_4 = L_0;
		float* L_5 = &(__this->___y_2);
		String_t* L_6 = ___format;
		String_t* L_7 = Single_ToString_m3531(L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t73* L_8 = L_4;
		float* L_9 = &(__this->___z_3);
		String_t* L_10 = ___format;
		String_t* L_11 = Single_ToString_m3531(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m2796(NULL /*static, unused*/, (String_t*) &_stringLiteral192, L_8, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float Vector3_Dot_m1762 (Object_t * __this /* static, unused */, Vector3_t58  ___lhs, Vector3_t58  ___rhs, const MethodInfo* method)
{
	{
		float L_0 = ((&___lhs)->___x_1);
		float L_1 = ((&___rhs)->___x_1);
		float L_2 = ((&___lhs)->___y_2);
		float L_3 = ((&___rhs)->___y_2);
		float L_4 = ((&___lhs)->___z_3);
		float L_5 = ((&___rhs)->___z_3);
		return ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
	}
}
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
extern TypeInfo* Mathf_t68_il2cpp_TypeInfo_var;
extern "C" float Vector3_Distance_m208 (Object_t * __this /* static, unused */, Vector3_t58  ___a, Vector3_t58  ___b, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t68_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t58  V_0 = {0};
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___b)->___z_3);
		Vector3__ctor_m312((&V_0), ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), ((float)((float)L_4-(float)L_5)), /*hidden argument*/NULL);
		float L_6 = ((&V_0)->___x_1);
		float L_7 = ((&V_0)->___x_1);
		float L_8 = ((&V_0)->___y_2);
		float L_9 = ((&V_0)->___y_2);
		float L_10 = ((&V_0)->___z_3);
		float L_11 = ((&V_0)->___z_3);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
		float L_12 = sqrtf(((float)((float)((float)((float)((float)((float)L_6*(float)L_7))+(float)((float)((float)L_8*(float)L_9))))+(float)((float)((float)L_10*(float)L_11)))));
		return L_12;
	}
}
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
extern TypeInfo* Mathf_t68_il2cpp_TypeInfo_var;
extern "C" float Vector3_Magnitude_m2614 (Object_t * __this /* static, unused */, Vector3_t58  ___a, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t68_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___a)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___a)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___a)->___z_3);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
		float L_6 = sqrtf(((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5)))));
		return L_6;
	}
}
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
extern "C" float Vector3_SqrMagnitude_m2615 (Object_t * __this /* static, unused */, Vector3_t58  ___a, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___a)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___a)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___a)->___z_3);
		return ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
	}
}
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
extern "C" float Vector3_get_sqrMagnitude_m1973 (Vector3_t58 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___x_1);
		float L_1 = (__this->___x_1);
		float L_2 = (__this->___y_2);
		float L_3 = (__this->___y_2);
		float L_4 = (__this->___z_3);
		float L_5 = (__this->___z_3);
		return ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Min(UnityEngine.Vector3,UnityEngine.Vector3)
extern TypeInfo* Mathf_t68_il2cpp_TypeInfo_var;
extern "C" Vector3_t58  Vector3_Min_m1955 (Object_t * __this /* static, unused */, Vector3_t58  ___lhs, Vector3_t58  ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t68_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ((&___lhs)->___x_1);
		float L_1 = ((&___rhs)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
		float L_2 = Mathf_Min_m2014(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = ((&___lhs)->___y_2);
		float L_4 = ((&___rhs)->___y_2);
		float L_5 = Mathf_Min_m2014(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		float L_6 = ((&___lhs)->___z_3);
		float L_7 = ((&___rhs)->___z_3);
		float L_8 = Mathf_Min_m2014(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Vector3_t58  L_9 = {0};
		Vector3__ctor_m312(&L_9, L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Max(UnityEngine.Vector3,UnityEngine.Vector3)
extern TypeInfo* Mathf_t68_il2cpp_TypeInfo_var;
extern "C" Vector3_t58  Vector3_Max_m1956 (Object_t * __this /* static, unused */, Vector3_t58  ___lhs, Vector3_t58  ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t68_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ((&___lhs)->___x_1);
		float L_1 = ((&___rhs)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
		float L_2 = Mathf_Max_m1974(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = ((&___lhs)->___y_2);
		float L_4 = ((&___rhs)->___y_2);
		float L_5 = Mathf_Max_m1974(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		float L_6 = ((&___lhs)->___z_3);
		float L_7 = ((&___rhs)->___z_3);
		float L_8 = Mathf_Max_m1974(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Vector3_t58  L_9 = {0};
		Vector3__ctor_m312(&L_9, L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" Vector3_t58  Vector3_get_zero_m1608 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = {0};
		Vector3__ctor_m312(&L_0, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C" Vector3_t58  Vector3_get_one_m221 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = {0};
		Vector3__ctor_m312(&L_0, (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C" Vector3_t58  Vector3_get_forward_m1760 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = {0};
		Vector3__ctor_m312(&L_0, (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
extern "C" Vector3_t58  Vector3_get_back_m2616 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = {0};
		Vector3__ctor_m312(&L_0, (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C" Vector3_t58  Vector3_get_up_m1607 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = {0};
		Vector3__ctor_m312(&L_0, (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
extern "C" Vector3_t58  Vector3_get_down_m1977 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = {0};
		Vector3__ctor_m312(&L_0, (0.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
extern "C" Vector3_t58  Vector3_get_left_m1975 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = {0};
		Vector3__ctor_m312(&L_0, (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern "C" Vector3_t58  Vector3_get_right_m1976 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = {0};
		Vector3__ctor_m312(&L_0, (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t58  Vector3_op_Addition_m223 (Object_t * __this /* static, unused */, Vector3_t58  ___a, Vector3_t58  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___b)->___z_3);
		Vector3_t58  L_6 = {0};
		Vector3__ctor_m312(&L_6, ((float)((float)L_0+(float)L_1)), ((float)((float)L_2+(float)L_3)), ((float)((float)L_4+(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t58  Vector3_op_Subtraction_m1764 (Object_t * __this /* static, unused */, Vector3_t58  ___a, Vector3_t58  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___b)->___z_3);
		Vector3_t58  L_6 = {0};
		Vector3__ctor_m312(&L_6, ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), ((float)((float)L_4-(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" Vector3_t58  Vector3_op_Multiply_m222 (Object_t * __this /* static, unused */, Vector3_t58  ___a, float ___d, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		float L_4 = ((&___a)->___z_3);
		float L_5 = ___d;
		Vector3_t58  L_6 = {0};
		Vector3__ctor_m312(&L_6, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), ((float)((float)L_4*(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C" Vector3_t58  Vector3_op_Division_m2617 (Object_t * __this /* static, unused */, Vector3_t58  ___a, float ___d, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		float L_4 = ((&___a)->___z_3);
		float L_5 = ___d;
		Vector3_t58  L_6 = {0};
		Vector3__ctor_m312(&L_6, ((float)((float)L_0/(float)L_1)), ((float)((float)L_2/(float)L_3)), ((float)((float)L_4/(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool Vector3_op_Equality_m2618 (Object_t * __this /* static, unused */, Vector3_t58  ___lhs, Vector3_t58  ___rhs, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = ___lhs;
		Vector3_t58  L_1 = ___rhs;
		Vector3_t58  L_2 = Vector3_op_Subtraction_m1764(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = Vector3_SqrMagnitude_m2615(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return ((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool Vector3_op_Inequality_m1892 (Object_t * __this /* static, unused */, Vector3_t58  ___lhs, Vector3_t58  ___rhs, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = ___lhs;
		Vector3_t58  L_1 = ___rhs;
		Vector3_t58  L_2 = Vector3_op_Subtraction_m1764(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = Vector3_SqrMagnitude_m2615(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return ((((int32_t)((!(((float)L_3) >= ((float)(9.99999944E-11f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Color__ctor_m217 (Color_t13 * __this, float ___r, float ___g, float ___b, float ___a, const MethodInfo* method)
{
	{
		float L_0 = ___r;
		__this->___r_0 = L_0;
		float L_1 = ___g;
		__this->___g_1 = L_1;
		float L_2 = ___b;
		__this->___b_2 = L_2;
		float L_3 = ___a;
		__this->___a_3 = L_3;
		return;
	}
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C" void Color__ctor_m2619 (Color_t13 * __this, float ___r, float ___g, float ___b, const MethodInfo* method)
{
	{
		float L_0 = ___r;
		__this->___r_0 = L_0;
		float L_1 = ___g;
		__this->___g_1 = L_1;
		float L_2 = ___b;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
// System.String UnityEngine.Color::ToString()
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t345_il2cpp_TypeInfo_var;
extern "C" String_t* Color_ToString_m2620 (Color_t13 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		Single_t345_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t73* L_0 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 4));
		float L_1 = (__this->___r_0);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t345_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t73* L_4 = L_0;
		float L_5 = (__this->___g_1);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t345_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t73* L_8 = L_4;
		float L_9 = (__this->___b_2);
		float L_10 = L_9;
		Object_t * L_11 = Box(Single_t345_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t73* L_12 = L_8;
		float L_13 = (__this->___a_3);
		float L_14 = L_13;
		Object_t * L_15 = Box(Single_t345_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m2796(NULL /*static, unused*/, (String_t*) &_stringLiteral193, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Int32 UnityEngine.Color::GetHashCode()
extern "C" int32_t Color_GetHashCode_m2621 (Color_t13 * __this, const MethodInfo* method)
{
	Vector4_t333  V_0 = {0};
	{
		Vector4_t333  L_0 = Color_op_Implicit_m2623(NULL /*static, unused*/, (*(Color_t13 *)__this), /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Vector4_GetHashCode_m2697((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.Color::Equals(System.Object)
extern TypeInfo* Color_t13_il2cpp_TypeInfo_var;
extern "C" bool Color_Equals_m1741 (Color_t13 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Color_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(259);
		s_Il2CppMethodIntialized = true;
	}
	Color_t13  V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, Color_t13_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Color_t13 *)((Color_t13 *)UnBox (L_1, Color_t13_il2cpp_TypeInfo_var))));
		float* L_2 = &(__this->___r_0);
		float L_3 = ((&V_0)->___r_0);
		bool L_4 = Single_Equals_m3530(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		float* L_5 = &(__this->___g_1);
		float L_6 = ((&V_0)->___g_1);
		bool L_7 = Single_Equals_m3530(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		float* L_8 = &(__this->___b_2);
		float L_9 = ((&V_0)->___b_2);
		bool L_10 = Single_Equals_m3530(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		float* L_11 = &(__this->___a_3);
		float L_12 = ((&V_0)->___a_3);
		bool L_13 = Single_Equals_m3530(L_11, L_12, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_006e;
	}

IL_006d:
	{
		G_B7_0 = 0;
	}

IL_006e:
	{
		return G_B7_0;
	}
}
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
extern TypeInfo* Mathf_t68_il2cpp_TypeInfo_var;
extern "C" Color_t13  Color_Lerp_m1687 (Object_t * __this /* static, unused */, Color_t13  ___a, Color_t13  ___b, float ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t68_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m1780(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___t = L_1;
		float L_2 = ((&___a)->___r_0);
		float L_3 = ((&___b)->___r_0);
		float L_4 = ((&___a)->___r_0);
		float L_5 = ___t;
		float L_6 = ((&___a)->___g_1);
		float L_7 = ((&___b)->___g_1);
		float L_8 = ((&___a)->___g_1);
		float L_9 = ___t;
		float L_10 = ((&___a)->___b_2);
		float L_11 = ((&___b)->___b_2);
		float L_12 = ((&___a)->___b_2);
		float L_13 = ___t;
		float L_14 = ((&___a)->___a_3);
		float L_15 = ((&___b)->___a_3);
		float L_16 = ((&___a)->___a_3);
		float L_17 = ___t;
		Color_t13  L_18 = {0};
		Color__ctor_m217(&L_18, ((float)((float)L_2+(float)((float)((float)((float)((float)L_3-(float)L_4))*(float)L_5)))), ((float)((float)L_6+(float)((float)((float)((float)((float)L_7-(float)L_8))*(float)L_9)))), ((float)((float)L_10+(float)((float)((float)((float)((float)L_11-(float)L_12))*(float)L_13)))), ((float)((float)L_14+(float)((float)((float)((float)((float)L_15-(float)L_16))*(float)L_17)))), /*hidden argument*/NULL);
		return L_18;
	}
}
// UnityEngine.Color UnityEngine.Color::get_red()
extern "C" Color_t13  Color_get_red_m2622 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Color_t13  L_0 = {0};
		Color__ctor_m217(&L_0, (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C" Color_t13  Color_get_white_m194 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Color_t13  L_0 = {0};
		Color__ctor_m217(&L_0, (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Color UnityEngine.Color::get_black()
extern "C" Color_t13  Color_get_black_m1745 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Color_t13  L_0 = {0};
		Color__ctor_m217(&L_0, (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
extern "C" Color_t13  Color_op_Multiply_m1969 (Object_t * __this /* static, unused */, Color_t13  ___a, float ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___r_0);
		float L_1 = ___b;
		float L_2 = ((&___a)->___g_1);
		float L_3 = ___b;
		float L_4 = ((&___a)->___b_2);
		float L_5 = ___b;
		float L_6 = ((&___a)->___a_3);
		float L_7 = ___b;
		Color_t13  L_8 = {0};
		Color__ctor_m217(&L_8, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), ((float)((float)L_4*(float)L_5)), ((float)((float)L_6*(float)L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
extern "C" Vector4_t333  Color_op_Implicit_m2623 (Object_t * __this /* static, unused */, Color_t13  ___c, const MethodInfo* method)
{
	{
		float L_0 = ((&___c)->___r_0);
		float L_1 = ((&___c)->___g_1);
		float L_2 = ((&___c)->___b_2);
		float L_3 = ((&___c)->___a_3);
		Vector4_t333  L_4 = {0};
		Vector4__ctor_m1733(&L_4, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"

// System.Byte
#include "mscorlib_System_Byte.h"


// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
extern "C" void Color32__ctor_m1702 (Color32_t340 * __this, uint8_t ___r, uint8_t ___g, uint8_t ___b, uint8_t ___a, const MethodInfo* method)
{
	{
		uint8_t L_0 = ___r;
		__this->___r_0 = L_0;
		uint8_t L_1 = ___g;
		__this->___g_1 = L_1;
		uint8_t L_2 = ___b;
		__this->___b_2 = L_2;
		uint8_t L_3 = ___a;
		__this->___a_3 = L_3;
		return;
	}
}
// System.String UnityEngine.Color32::ToString()
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t366_il2cpp_TypeInfo_var;
extern "C" String_t* Color32_ToString_m2624 (Color32_t340 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		Byte_t366_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(970);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t73* L_0 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 4));
		uint8_t L_1 = (__this->___r_0);
		uint8_t L_2 = L_1;
		Object_t * L_3 = Box(Byte_t366_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t73* L_4 = L_0;
		uint8_t L_5 = (__this->___g_1);
		uint8_t L_6 = L_5;
		Object_t * L_7 = Box(Byte_t366_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t73* L_8 = L_4;
		uint8_t L_9 = (__this->___b_2);
		uint8_t L_10 = L_9;
		Object_t * L_11 = Box(Byte_t366_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t73* L_12 = L_8;
		uint8_t L_13 = (__this->___a_3);
		uint8_t L_14 = L_13;
		Object_t * L_15 = Box(Byte_t366_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m2796(NULL /*static, unused*/, (String_t*) &_stringLiteral194, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
extern TypeInfo* Mathf_t68_il2cpp_TypeInfo_var;
extern "C" Color32_t340  Color32_op_Implicit_m1734 (Object_t * __this /* static, unused */, Color_t13  ___c, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t68_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ((&___c)->___r_0);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m1780(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		float L_2 = ((&___c)->___g_1);
		float L_3 = Mathf_Clamp01_m1780(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		float L_4 = ((&___c)->___b_2);
		float L_5 = Mathf_Clamp01_m1780(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		float L_6 = ((&___c)->___a_3);
		float L_7 = Mathf_Clamp01_m1780(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		Color32_t340  L_8 = {0};
		Color32__ctor_m1702(&L_8, (((uint8_t)((float)((float)L_1*(float)(255.0f))))), (((uint8_t)((float)((float)L_3*(float)(255.0f))))), (((uint8_t)((float)((float)L_5*(float)(255.0f))))), (((uint8_t)((float)((float)L_7*(float)(255.0f))))), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
extern "C" Color_t13  Color32_op_Implicit_m1703 (Object_t * __this /* static, unused */, Color32_t340  ___c, const MethodInfo* method)
{
	{
		uint8_t L_0 = ((&___c)->___r_0);
		uint8_t L_1 = ((&___c)->___g_1);
		uint8_t L_2 = ((&___c)->___b_2);
		uint8_t L_3 = ((&___c)->___a_3);
		Color_t13  L_4 = {0};
		Color__ctor_m217(&L_4, ((float)((float)(((float)L_0))/(float)(255.0f))), ((float)((float)(((float)L_1))/(float)(255.0f))), ((float)((float)(((float)L_2))/(float)(255.0f))), ((float)((float)(((float)L_3))/(float)(255.0f))), /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"



// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Quaternion__ctor_m2625 (Quaternion_t99 * __this, float ___x, float ___y, float ___z, float ___w, const MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___x_0 = L_0;
		float L_1 = ___y;
		__this->___y_1 = L_1;
		float L_2 = ___z;
		__this->___z_2 = L_2;
		float L_3 = ___w;
		__this->___w_3 = L_3;
		return;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" Quaternion_t99  Quaternion_get_identity_m338 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Quaternion_t99  L_0 = {0};
		Quaternion__ctor_m2625(&L_0, (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" float Quaternion_Dot_m2626 (Object_t * __this /* static, unused */, Quaternion_t99  ___a, Quaternion_t99  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_0);
		float L_1 = ((&___b)->___x_0);
		float L_2 = ((&___a)->___y_1);
		float L_3 = ((&___b)->___y_1);
		float L_4 = ((&___a)->___z_2);
		float L_5 = ((&___b)->___z_2);
		float L_6 = ((&___a)->___w_3);
		float L_7 = ((&___b)->___w_3);
		return ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern "C" Quaternion_t99  Quaternion_Inverse_m1971 (Object_t * __this /* static, unused */, Quaternion_t99  ___rotation, const MethodInfo* method)
{
	{
		Quaternion_t99  L_0 = Quaternion_INTERNAL_CALL_Inverse_m2627(NULL /*static, unused*/, (&___rotation), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)
extern "C" Quaternion_t99  Quaternion_INTERNAL_CALL_Inverse_m2627 (Object_t * __this /* static, unused */, Quaternion_t99 * ___rotation, const MethodInfo* method)
{
	typedef Quaternion_t99  (*Quaternion_INTERNAL_CALL_Inverse_m2627_ftn) (Quaternion_t99 *);
	static Quaternion_INTERNAL_CALL_Inverse_m2627_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Quaternion_INTERNAL_CALL_Inverse_m2627_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)");
	return _il2cpp_icall_func(___rotation);
}
// System.String UnityEngine.Quaternion::ToString()
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t345_il2cpp_TypeInfo_var;
extern "C" String_t* Quaternion_ToString_m2628 (Quaternion_t99 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		Single_t345_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t73* L_0 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 4));
		float L_1 = (__this->___x_0);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t345_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t73* L_4 = L_0;
		float L_5 = (__this->___y_1);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t345_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t73* L_8 = L_4;
		float L_9 = (__this->___z_2);
		float L_10 = L_9;
		Object_t * L_11 = Box(Single_t345_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t73* L_12 = L_8;
		float L_13 = (__this->___w_3);
		float L_14 = L_13;
		Object_t * L_15 = Box(Single_t345_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m2796(NULL /*static, unused*/, (String_t*) &_stringLiteral195, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern "C" int32_t Quaternion_GetHashCode_m2629 (Quaternion_t99 * __this, const MethodInfo* method)
{
	{
		float* L_0 = &(__this->___x_0);
		int32_t L_1 = Single_GetHashCode_m3514(L_0, /*hidden argument*/NULL);
		float* L_2 = &(__this->___y_1);
		int32_t L_3 = Single_GetHashCode_m3514(L_2, /*hidden argument*/NULL);
		float* L_4 = &(__this->___z_2);
		int32_t L_5 = Single_GetHashCode_m3514(L_4, /*hidden argument*/NULL);
		float* L_6 = &(__this->___w_3);
		int32_t L_7 = Single_GetHashCode_m3514(L_6, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern TypeInfo* Quaternion_t99_il2cpp_TypeInfo_var;
extern "C" bool Quaternion_Equals_m2630 (Quaternion_t99 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Quaternion_t99_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(971);
		s_Il2CppMethodIntialized = true;
	}
	Quaternion_t99  V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, Quaternion_t99_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Quaternion_t99 *)((Quaternion_t99 *)UnBox (L_1, Quaternion_t99_il2cpp_TypeInfo_var))));
		float* L_2 = &(__this->___x_0);
		float L_3 = ((&V_0)->___x_0);
		bool L_4 = Single_Equals_m3530(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		float* L_5 = &(__this->___y_1);
		float L_6 = ((&V_0)->___y_1);
		bool L_7 = Single_Equals_m3530(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		float* L_8 = &(__this->___z_2);
		float L_9 = ((&V_0)->___z_2);
		bool L_10 = Single_Equals_m3530(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		float* L_11 = &(__this->___w_3);
		float L_12 = ((&V_0)->___w_3);
		bool L_13 = Single_Equals_m3530(L_11, L_12, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_006e;
	}

IL_006d:
	{
		G_B7_0 = 0;
	}

IL_006e:
	{
		return G_B7_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" Vector3_t58  Quaternion_op_Multiply_m1761 (Object_t * __this /* static, unused */, Quaternion_t99  ___rotation, Vector3_t58  ___point, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	Vector3_t58  V_12 = {0};
	{
		float L_0 = ((&___rotation)->___x_0);
		V_0 = ((float)((float)L_0*(float)(2.0f)));
		float L_1 = ((&___rotation)->___y_1);
		V_1 = ((float)((float)L_1*(float)(2.0f)));
		float L_2 = ((&___rotation)->___z_2);
		V_2 = ((float)((float)L_2*(float)(2.0f)));
		float L_3 = ((&___rotation)->___x_0);
		float L_4 = V_0;
		V_3 = ((float)((float)L_3*(float)L_4));
		float L_5 = ((&___rotation)->___y_1);
		float L_6 = V_1;
		V_4 = ((float)((float)L_5*(float)L_6));
		float L_7 = ((&___rotation)->___z_2);
		float L_8 = V_2;
		V_5 = ((float)((float)L_7*(float)L_8));
		float L_9 = ((&___rotation)->___x_0);
		float L_10 = V_1;
		V_6 = ((float)((float)L_9*(float)L_10));
		float L_11 = ((&___rotation)->___x_0);
		float L_12 = V_2;
		V_7 = ((float)((float)L_11*(float)L_12));
		float L_13 = ((&___rotation)->___y_1);
		float L_14 = V_2;
		V_8 = ((float)((float)L_13*(float)L_14));
		float L_15 = ((&___rotation)->___w_3);
		float L_16 = V_0;
		V_9 = ((float)((float)L_15*(float)L_16));
		float L_17 = ((&___rotation)->___w_3);
		float L_18 = V_1;
		V_10 = ((float)((float)L_17*(float)L_18));
		float L_19 = ((&___rotation)->___w_3);
		float L_20 = V_2;
		V_11 = ((float)((float)L_19*(float)L_20));
		float L_21 = V_4;
		float L_22 = V_5;
		float L_23 = ((&___point)->___x_1);
		float L_24 = V_6;
		float L_25 = V_11;
		float L_26 = ((&___point)->___y_2);
		float L_27 = V_7;
		float L_28 = V_10;
		float L_29 = ((&___point)->___z_3);
		(&V_12)->___x_1 = ((float)((float)((float)((float)((float)((float)((float)((float)(1.0f)-(float)((float)((float)L_21+(float)L_22))))*(float)L_23))+(float)((float)((float)((float)((float)L_24-(float)L_25))*(float)L_26))))+(float)((float)((float)((float)((float)L_27+(float)L_28))*(float)L_29))));
		float L_30 = V_6;
		float L_31 = V_11;
		float L_32 = ((&___point)->___x_1);
		float L_33 = V_3;
		float L_34 = V_5;
		float L_35 = ((&___point)->___y_2);
		float L_36 = V_8;
		float L_37 = V_9;
		float L_38 = ((&___point)->___z_3);
		(&V_12)->___y_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_30+(float)L_31))*(float)L_32))+(float)((float)((float)((float)((float)(1.0f)-(float)((float)((float)L_33+(float)L_34))))*(float)L_35))))+(float)((float)((float)((float)((float)L_36-(float)L_37))*(float)L_38))));
		float L_39 = V_7;
		float L_40 = V_10;
		float L_41 = ((&___point)->___x_1);
		float L_42 = V_8;
		float L_43 = V_9;
		float L_44 = ((&___point)->___y_2);
		float L_45 = V_3;
		float L_46 = V_4;
		float L_47 = ((&___point)->___z_3);
		(&V_12)->___z_3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_39-(float)L_40))*(float)L_41))+(float)((float)((float)((float)((float)L_42+(float)L_43))*(float)L_44))))+(float)((float)((float)((float)((float)(1.0f)-(float)((float)((float)L_45+(float)L_46))))*(float)L_47))));
		Vector3_t58  L_48 = V_12;
		return L_48;
	}
}
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" bool Quaternion_op_Inequality_m1894 (Object_t * __this /* static, unused */, Quaternion_t99  ___lhs, Quaternion_t99  ___rhs, const MethodInfo* method)
{
	{
		Quaternion_t99  L_0 = ___lhs;
		Quaternion_t99  L_1 = ___rhs;
		float L_2 = Quaternion_Dot_m2626(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)((!(((float)L_2) <= ((float)(0.999999f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Rect__ctor_m1922 (Rect_t230 * __this, float ___left, float ___top, float ___width, float ___height, const MethodInfo* method)
{
	{
		float L_0 = ___left;
		__this->___m_XMin_0 = L_0;
		float L_1 = ___top;
		__this->___m_YMin_1 = L_1;
		float L_2 = ___width;
		__this->___m_Width_2 = L_2;
		float L_3 = ___height;
		__this->___m_Height_3 = L_3;
		return;
	}
}
// System.Single UnityEngine.Rect::get_x()
extern "C" float Rect_get_x_m1731 (Rect_t230 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_XMin_0);
		return L_0;
	}
}
// System.Void UnityEngine.Rect::set_x(System.Single)
extern "C" void Rect_set_x_m1794 (Rect_t230 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_XMin_0 = L_0;
		return;
	}
}
// System.Single UnityEngine.Rect::get_y()
extern "C" float Rect_get_y_m1732 (Rect_t230 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_YMin_1);
		return L_0;
	}
}
// System.Void UnityEngine.Rect::set_y(System.Single)
extern "C" void Rect_set_y_m1792 (Rect_t230 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_YMin_1 = L_0;
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Rect::get_position()
extern "C" Vector2_t38  Rect_get_position_m1803 (Rect_t230 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_XMin_0);
		float L_1 = (__this->___m_YMin_1);
		Vector2_t38  L_2 = {0};
		Vector2__ctor_m306(&L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector2 UnityEngine.Rect::get_center()
extern "C" Vector2_t38  Rect_get_center_m1931 (Rect_t230 * __this, const MethodInfo* method)
{
	{
		float L_0 = Rect_get_x_m1731(__this, /*hidden argument*/NULL);
		float L_1 = (__this->___m_Width_2);
		float L_2 = Rect_get_y_m1732(__this, /*hidden argument*/NULL);
		float L_3 = (__this->___m_Height_3);
		Vector2_t38  L_4 = {0};
		Vector2__ctor_m306(&L_4, ((float)((float)L_0+(float)((float)((float)L_1/(float)(2.0f))))), ((float)((float)L_2+(float)((float)((float)L_3/(float)(2.0f))))), /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Single UnityEngine.Rect::get_width()
extern "C" float Rect_get_width_m1726 (Rect_t230 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Width_2);
		return L_0;
	}
}
// System.Void UnityEngine.Rect::set_width(System.Single)
extern "C" void Rect_set_width_m1793 (Rect_t230 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Width_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.Rect::get_height()
extern "C" float Rect_get_height_m1727 (Rect_t230 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Height_3);
		return L_0;
	}
}
// System.Void UnityEngine.Rect::set_height(System.Single)
extern "C" void Rect_set_height_m1790 (Rect_t230 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Height_3 = L_0;
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
extern "C" Vector2_t38  Rect_get_size_m1801 (Rect_t230 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Width_2);
		float L_1 = (__this->___m_Height_3);
		Vector2_t38  L_2 = {0};
		Vector2__ctor_m306(&L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single UnityEngine.Rect::get_xMin()
extern "C" float Rect_get_xMin_m1820 (Rect_t230 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_XMin_0);
		return L_0;
	}
}
// System.Single UnityEngine.Rect::get_yMin()
extern "C" float Rect_get_yMin_m1819 (Rect_t230 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_YMin_1);
		return L_0;
	}
}
// System.Single UnityEngine.Rect::get_xMax()
extern "C" float Rect_get_xMax_m1811 (Rect_t230 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Width_2);
		float L_1 = (__this->___m_XMin_0);
		return ((float)((float)L_0+(float)L_1));
	}
}
// System.Single UnityEngine.Rect::get_yMax()
extern "C" float Rect_get_yMax_m1812 (Rect_t230 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Height_3);
		float L_1 = (__this->___m_YMin_1);
		return ((float)((float)L_0+(float)L_1));
	}
}
// System.String UnityEngine.Rect::ToString()
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t345_il2cpp_TypeInfo_var;
extern "C" String_t* Rect_ToString_m2631 (Rect_t230 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		Single_t345_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t73* L_0 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 4));
		float L_1 = Rect_get_x_m1731(__this, /*hidden argument*/NULL);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t345_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t73* L_4 = L_0;
		float L_5 = Rect_get_y_m1732(__this, /*hidden argument*/NULL);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t345_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t73* L_8 = L_4;
		float L_9 = Rect_get_width_m1726(__this, /*hidden argument*/NULL);
		float L_10 = L_9;
		Object_t * L_11 = Box(Single_t345_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t73* L_12 = L_8;
		float L_13 = Rect_get_height_m1727(__this, /*hidden argument*/NULL);
		float L_14 = L_13;
		Object_t * L_15 = Box(Single_t345_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m2796(NULL /*static, unused*/, (String_t*) &_stringLiteral196, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector3)
extern "C" bool Rect_Contains_m2632 (Rect_t230 * __this, Vector3_t58  ___point, const MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		float L_0 = ((&___point)->___x_1);
		float L_1 = Rect_get_xMin_m1820(__this, /*hidden argument*/NULL);
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_0047;
		}
	}
	{
		float L_2 = ((&___point)->___x_1);
		float L_3 = Rect_get_xMax_m1811(__this, /*hidden argument*/NULL);
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_0047;
		}
	}
	{
		float L_4 = ((&___point)->___y_2);
		float L_5 = Rect_get_yMin_m1819(__this, /*hidden argument*/NULL);
		if ((!(((float)L_4) >= ((float)L_5))))
		{
			goto IL_0047;
		}
	}
	{
		float L_6 = ((&___point)->___y_2);
		float L_7 = Rect_get_yMax_m1812(__this, /*hidden argument*/NULL);
		G_B5_0 = ((((float)L_6) < ((float)L_7))? 1 : 0);
		goto IL_0048;
	}

IL_0047:
	{
		G_B5_0 = 0;
	}

IL_0048:
	{
		return G_B5_0;
	}
}
// System.Int32 UnityEngine.Rect::GetHashCode()
extern "C" int32_t Rect_GetHashCode_m2633 (Rect_t230 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = Rect_get_x_m1731(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Single_GetHashCode_m3514((&V_0), /*hidden argument*/NULL);
		float L_2 = Rect_get_width_m1726(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Single_GetHashCode_m3514((&V_1), /*hidden argument*/NULL);
		float L_4 = Rect_get_y_m1732(__this, /*hidden argument*/NULL);
		V_2 = L_4;
		int32_t L_5 = Single_GetHashCode_m3514((&V_2), /*hidden argument*/NULL);
		float L_6 = Rect_get_height_m1727(__this, /*hidden argument*/NULL);
		V_3 = L_6;
		int32_t L_7 = Single_GetHashCode_m3514((&V_3), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
// System.Boolean UnityEngine.Rect::Equals(System.Object)
extern TypeInfo* Rect_t230_il2cpp_TypeInfo_var;
extern "C" bool Rect_Equals_m2634 (Rect_t230 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Rect_t230_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(617);
		s_Il2CppMethodIntialized = true;
	}
	Rect_t230  V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, Rect_t230_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Rect_t230 *)((Rect_t230 *)UnBox (L_1, Rect_t230_il2cpp_TypeInfo_var))));
		float L_2 = Rect_get_x_m1731(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = Rect_get_x_m1731((&V_0), /*hidden argument*/NULL);
		bool L_4 = Single_Equals_m3530((&V_1), L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_007a;
		}
	}
	{
		float L_5 = Rect_get_y_m1732(__this, /*hidden argument*/NULL);
		V_2 = L_5;
		float L_6 = Rect_get_y_m1732((&V_0), /*hidden argument*/NULL);
		bool L_7 = Single_Equals_m3530((&V_2), L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_007a;
		}
	}
	{
		float L_8 = Rect_get_width_m1726(__this, /*hidden argument*/NULL);
		V_3 = L_8;
		float L_9 = Rect_get_width_m1726((&V_0), /*hidden argument*/NULL);
		bool L_10 = Single_Equals_m3530((&V_3), L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_007a;
		}
	}
	{
		float L_11 = Rect_get_height_m1727(__this, /*hidden argument*/NULL);
		V_4 = L_11;
		float L_12 = Rect_get_height_m1727((&V_0), /*hidden argument*/NULL);
		bool L_13 = Single_Equals_m3530((&V_4), L_12, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_007b;
	}

IL_007a:
	{
		G_B7_0 = 0;
	}

IL_007b:
	{
		return G_B7_0;
	}
}
// System.Boolean UnityEngine.Rect::op_Equality(UnityEngine.Rect,UnityEngine.Rect)
extern "C" bool Rect_op_Equality_m1923 (Object_t * __this /* static, unused */, Rect_t230  ___lhs, Rect_t230  ___rhs, const MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		float L_0 = Rect_get_x_m1731((&___lhs), /*hidden argument*/NULL);
		float L_1 = Rect_get_x_m1731((&___rhs), /*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_004b;
		}
	}
	{
		float L_2 = Rect_get_y_m1732((&___lhs), /*hidden argument*/NULL);
		float L_3 = Rect_get_y_m1732((&___rhs), /*hidden argument*/NULL);
		if ((!(((float)L_2) == ((float)L_3))))
		{
			goto IL_004b;
		}
	}
	{
		float L_4 = Rect_get_width_m1726((&___lhs), /*hidden argument*/NULL);
		float L_5 = Rect_get_width_m1726((&___rhs), /*hidden argument*/NULL);
		if ((!(((float)L_4) == ((float)L_5))))
		{
			goto IL_004b;
		}
	}
	{
		float L_6 = Rect_get_height_m1727((&___lhs), /*hidden argument*/NULL);
		float L_7 = Rect_get_height_m1727((&___rhs), /*hidden argument*/NULL);
		G_B5_0 = ((((float)L_6) == ((float)L_7))? 1 : 0);
		goto IL_004c;
	}

IL_004b:
	{
		G_B5_0 = 0;
	}

IL_004c:
	{
		return G_B5_0;
	}
}
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4MethodDeclarations.h"



// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32,System.Int32)
extern "C" float Matrix4x4_get_Item_m2635 (Matrix4x4_t380 * __this, int32_t ___row, int32_t ___column, const MethodInfo* method)
{
	{
		int32_t L_0 = ___row;
		int32_t L_1 = ___column;
		float L_2 = Matrix4x4_get_Item_m2637(__this, ((int32_t)((int32_t)L_0+(int32_t)((int32_t)((int32_t)L_1*(int32_t)4)))), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Int32,System.Single)
extern "C" void Matrix4x4_set_Item_m2636 (Matrix4x4_t380 * __this, int32_t ___row, int32_t ___column, float ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___row;
		int32_t L_1 = ___column;
		float L_2 = ___value;
		Matrix4x4_set_Item_m2638(__this, ((int32_t)((int32_t)L_0+(int32_t)((int32_t)((int32_t)L_1*(int32_t)4)))), L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
extern TypeInfo* IndexOutOfRangeException_t745_il2cpp_TypeInfo_var;
extern "C" float Matrix4x4_get_Item_m2637 (Matrix4x4_t380 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(969);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_004d;
		}
		if (L_1 == 1)
		{
			goto IL_0054;
		}
		if (L_1 == 2)
		{
			goto IL_005b;
		}
		if (L_1 == 3)
		{
			goto IL_0062;
		}
		if (L_1 == 4)
		{
			goto IL_0069;
		}
		if (L_1 == 5)
		{
			goto IL_0070;
		}
		if (L_1 == 6)
		{
			goto IL_0077;
		}
		if (L_1 == 7)
		{
			goto IL_007e;
		}
		if (L_1 == 8)
		{
			goto IL_0085;
		}
		if (L_1 == 9)
		{
			goto IL_008c;
		}
		if (L_1 == 10)
		{
			goto IL_0093;
		}
		if (L_1 == 11)
		{
			goto IL_009a;
		}
		if (L_1 == 12)
		{
			goto IL_00a1;
		}
		if (L_1 == 13)
		{
			goto IL_00a8;
		}
		if (L_1 == 14)
		{
			goto IL_00af;
		}
		if (L_1 == 15)
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_00bd;
	}

IL_004d:
	{
		float L_2 = (__this->___m00_0);
		return L_2;
	}

IL_0054:
	{
		float L_3 = (__this->___m10_1);
		return L_3;
	}

IL_005b:
	{
		float L_4 = (__this->___m20_2);
		return L_4;
	}

IL_0062:
	{
		float L_5 = (__this->___m30_3);
		return L_5;
	}

IL_0069:
	{
		float L_6 = (__this->___m01_4);
		return L_6;
	}

IL_0070:
	{
		float L_7 = (__this->___m11_5);
		return L_7;
	}

IL_0077:
	{
		float L_8 = (__this->___m21_6);
		return L_8;
	}

IL_007e:
	{
		float L_9 = (__this->___m31_7);
		return L_9;
	}

IL_0085:
	{
		float L_10 = (__this->___m02_8);
		return L_10;
	}

IL_008c:
	{
		float L_11 = (__this->___m12_9);
		return L_11;
	}

IL_0093:
	{
		float L_12 = (__this->___m22_10);
		return L_12;
	}

IL_009a:
	{
		float L_13 = (__this->___m32_11);
		return L_13;
	}

IL_00a1:
	{
		float L_14 = (__this->___m03_12);
		return L_14;
	}

IL_00a8:
	{
		float L_15 = (__this->___m13_13);
		return L_15;
	}

IL_00af:
	{
		float L_16 = (__this->___m23_14);
		return L_16;
	}

IL_00b6:
	{
		float L_17 = (__this->___m33_15);
		return L_17;
	}

IL_00bd:
	{
		IndexOutOfRangeException_t745 * L_18 = (IndexOutOfRangeException_t745 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t745_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m3529(L_18, (String_t*) &_stringLiteral197, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_18);
	}
}
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Single)
extern TypeInfo* IndexOutOfRangeException_t745_il2cpp_TypeInfo_var;
extern "C" void Matrix4x4_set_Item_m2638 (Matrix4x4_t380 * __this, int32_t ___index, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(969);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_004d;
		}
		if (L_1 == 1)
		{
			goto IL_0059;
		}
		if (L_1 == 2)
		{
			goto IL_0065;
		}
		if (L_1 == 3)
		{
			goto IL_0071;
		}
		if (L_1 == 4)
		{
			goto IL_007d;
		}
		if (L_1 == 5)
		{
			goto IL_0089;
		}
		if (L_1 == 6)
		{
			goto IL_0095;
		}
		if (L_1 == 7)
		{
			goto IL_00a1;
		}
		if (L_1 == 8)
		{
			goto IL_00ad;
		}
		if (L_1 == 9)
		{
			goto IL_00b9;
		}
		if (L_1 == 10)
		{
			goto IL_00c5;
		}
		if (L_1 == 11)
		{
			goto IL_00d1;
		}
		if (L_1 == 12)
		{
			goto IL_00dd;
		}
		if (L_1 == 13)
		{
			goto IL_00e9;
		}
		if (L_1 == 14)
		{
			goto IL_00f5;
		}
		if (L_1 == 15)
		{
			goto IL_0101;
		}
	}
	{
		goto IL_010d;
	}

IL_004d:
	{
		float L_2 = ___value;
		__this->___m00_0 = L_2;
		goto IL_0118;
	}

IL_0059:
	{
		float L_3 = ___value;
		__this->___m10_1 = L_3;
		goto IL_0118;
	}

IL_0065:
	{
		float L_4 = ___value;
		__this->___m20_2 = L_4;
		goto IL_0118;
	}

IL_0071:
	{
		float L_5 = ___value;
		__this->___m30_3 = L_5;
		goto IL_0118;
	}

IL_007d:
	{
		float L_6 = ___value;
		__this->___m01_4 = L_6;
		goto IL_0118;
	}

IL_0089:
	{
		float L_7 = ___value;
		__this->___m11_5 = L_7;
		goto IL_0118;
	}

IL_0095:
	{
		float L_8 = ___value;
		__this->___m21_6 = L_8;
		goto IL_0118;
	}

IL_00a1:
	{
		float L_9 = ___value;
		__this->___m31_7 = L_9;
		goto IL_0118;
	}

IL_00ad:
	{
		float L_10 = ___value;
		__this->___m02_8 = L_10;
		goto IL_0118;
	}

IL_00b9:
	{
		float L_11 = ___value;
		__this->___m12_9 = L_11;
		goto IL_0118;
	}

IL_00c5:
	{
		float L_12 = ___value;
		__this->___m22_10 = L_12;
		goto IL_0118;
	}

IL_00d1:
	{
		float L_13 = ___value;
		__this->___m32_11 = L_13;
		goto IL_0118;
	}

IL_00dd:
	{
		float L_14 = ___value;
		__this->___m03_12 = L_14;
		goto IL_0118;
	}

IL_00e9:
	{
		float L_15 = ___value;
		__this->___m13_13 = L_15;
		goto IL_0118;
	}

IL_00f5:
	{
		float L_16 = ___value;
		__this->___m23_14 = L_16;
		goto IL_0118;
	}

IL_0101:
	{
		float L_17 = ___value;
		__this->___m33_15 = L_17;
		goto IL_0118;
	}

IL_010d:
	{
		IndexOutOfRangeException_t745 * L_18 = (IndexOutOfRangeException_t745 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t745_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m3529(L_18, (String_t*) &_stringLiteral197, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_0118:
	{
		return;
	}
}
// System.Int32 UnityEngine.Matrix4x4::GetHashCode()
extern "C" int32_t Matrix4x4_GetHashCode_m2639 (Matrix4x4_t380 * __this, const MethodInfo* method)
{
	Vector4_t333  V_0 = {0};
	Vector4_t333  V_1 = {0};
	Vector4_t333  V_2 = {0};
	Vector4_t333  V_3 = {0};
	{
		Vector4_t333  L_0 = Matrix4x4_GetColumn_m2650(__this, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Vector4_GetHashCode_m2697((&V_0), /*hidden argument*/NULL);
		Vector4_t333  L_2 = Matrix4x4_GetColumn_m2650(__this, 1, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Vector4_GetHashCode_m2697((&V_1), /*hidden argument*/NULL);
		Vector4_t333  L_4 = Matrix4x4_GetColumn_m2650(__this, 2, /*hidden argument*/NULL);
		V_2 = L_4;
		int32_t L_5 = Vector4_GetHashCode_m2697((&V_2), /*hidden argument*/NULL);
		Vector4_t333  L_6 = Matrix4x4_GetColumn_m2650(__this, 3, /*hidden argument*/NULL);
		V_3 = L_6;
		int32_t L_7 = Vector4_GetHashCode_m2697((&V_3), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
// System.Boolean UnityEngine.Matrix4x4::Equals(System.Object)
extern TypeInfo* Matrix4x4_t380_il2cpp_TypeInfo_var;
extern TypeInfo* Vector4_t333_il2cpp_TypeInfo_var;
extern "C" bool Matrix4x4_Equals_m2640 (Matrix4x4_t380 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Matrix4x4_t380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(972);
		Vector4_t333_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(663);
		s_Il2CppMethodIntialized = true;
	}
	Matrix4x4_t380  V_0 = {0};
	Vector4_t333  V_1 = {0};
	Vector4_t333  V_2 = {0};
	Vector4_t333  V_3 = {0};
	Vector4_t333  V_4 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, Matrix4x4_t380_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Matrix4x4_t380 *)((Matrix4x4_t380 *)UnBox (L_1, Matrix4x4_t380_il2cpp_TypeInfo_var))));
		Vector4_t333  L_2 = Matrix4x4_GetColumn_m2650(__this, 0, /*hidden argument*/NULL);
		V_1 = L_2;
		Vector4_t333  L_3 = Matrix4x4_GetColumn_m2650((&V_0), 0, /*hidden argument*/NULL);
		Vector4_t333  L_4 = L_3;
		Object_t * L_5 = Box(Vector4_t333_il2cpp_TypeInfo_var, &L_4);
		bool L_6 = Vector4_Equals_m2698((&V_1), L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0096;
		}
	}
	{
		Vector4_t333  L_7 = Matrix4x4_GetColumn_m2650(__this, 1, /*hidden argument*/NULL);
		V_2 = L_7;
		Vector4_t333  L_8 = Matrix4x4_GetColumn_m2650((&V_0), 1, /*hidden argument*/NULL);
		Vector4_t333  L_9 = L_8;
		Object_t * L_10 = Box(Vector4_t333_il2cpp_TypeInfo_var, &L_9);
		bool L_11 = Vector4_Equals_m2698((&V_2), L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		Vector4_t333  L_12 = Matrix4x4_GetColumn_m2650(__this, 2, /*hidden argument*/NULL);
		V_3 = L_12;
		Vector4_t333  L_13 = Matrix4x4_GetColumn_m2650((&V_0), 2, /*hidden argument*/NULL);
		Vector4_t333  L_14 = L_13;
		Object_t * L_15 = Box(Vector4_t333_il2cpp_TypeInfo_var, &L_14);
		bool L_16 = Vector4_Equals_m2698((&V_3), L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0096;
		}
	}
	{
		Vector4_t333  L_17 = Matrix4x4_GetColumn_m2650(__this, 3, /*hidden argument*/NULL);
		V_4 = L_17;
		Vector4_t333  L_18 = Matrix4x4_GetColumn_m2650((&V_0), 3, /*hidden argument*/NULL);
		Vector4_t333  L_19 = L_18;
		Object_t * L_20 = Box(Vector4_t333_il2cpp_TypeInfo_var, &L_19);
		bool L_21 = Vector4_Equals_m2698((&V_4), L_20, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_21));
		goto IL_0097;
	}

IL_0096:
	{
		G_B7_0 = 0;
	}

IL_0097:
	{
		return G_B7_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Inverse(UnityEngine.Matrix4x4)
extern "C" Matrix4x4_t380  Matrix4x4_Inverse_m2641 (Object_t * __this /* static, unused */, Matrix4x4_t380  ___m, const MethodInfo* method)
{
	{
		Matrix4x4_t380  L_0 = Matrix4x4_INTERNAL_CALL_Inverse_m2642(NULL /*static, unused*/, (&___m), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_Inverse(UnityEngine.Matrix4x4&)
extern "C" Matrix4x4_t380  Matrix4x4_INTERNAL_CALL_Inverse_m2642 (Object_t * __this /* static, unused */, Matrix4x4_t380 * ___m, const MethodInfo* method)
{
	typedef Matrix4x4_t380  (*Matrix4x4_INTERNAL_CALL_Inverse_m2642_ftn) (Matrix4x4_t380 *);
	static Matrix4x4_INTERNAL_CALL_Inverse_m2642_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_INTERNAL_CALL_Inverse_m2642_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_Inverse(UnityEngine.Matrix4x4&)");
	return _il2cpp_icall_func(___m);
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Transpose(UnityEngine.Matrix4x4)
extern "C" Matrix4x4_t380  Matrix4x4_Transpose_m2643 (Object_t * __this /* static, unused */, Matrix4x4_t380  ___m, const MethodInfo* method)
{
	{
		Matrix4x4_t380  L_0 = Matrix4x4_INTERNAL_CALL_Transpose_m2644(NULL /*static, unused*/, (&___m), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_Transpose(UnityEngine.Matrix4x4&)
extern "C" Matrix4x4_t380  Matrix4x4_INTERNAL_CALL_Transpose_m2644 (Object_t * __this /* static, unused */, Matrix4x4_t380 * ___m, const MethodInfo* method)
{
	typedef Matrix4x4_t380  (*Matrix4x4_INTERNAL_CALL_Transpose_m2644_ftn) (Matrix4x4_t380 *);
	static Matrix4x4_INTERNAL_CALL_Transpose_m2644_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_INTERNAL_CALL_Transpose_m2644_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_Transpose(UnityEngine.Matrix4x4&)");
	return _il2cpp_icall_func(___m);
}
// System.Boolean UnityEngine.Matrix4x4::Invert(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4&)
extern "C" bool Matrix4x4_Invert_m2645 (Object_t * __this /* static, unused */, Matrix4x4_t380  ___inMatrix, Matrix4x4_t380 * ___dest, const MethodInfo* method)
{
	{
		Matrix4x4_t380 * L_0 = ___dest;
		bool L_1 = Matrix4x4_INTERNAL_CALL_Invert_m2646(NULL /*static, unused*/, (&___inMatrix), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.Matrix4x4::INTERNAL_CALL_Invert(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)
extern "C" bool Matrix4x4_INTERNAL_CALL_Invert_m2646 (Object_t * __this /* static, unused */, Matrix4x4_t380 * ___inMatrix, Matrix4x4_t380 * ___dest, const MethodInfo* method)
{
	typedef bool (*Matrix4x4_INTERNAL_CALL_Invert_m2646_ftn) (Matrix4x4_t380 *, Matrix4x4_t380 *);
	static Matrix4x4_INTERNAL_CALL_Invert_m2646_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_INTERNAL_CALL_Invert_m2646_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_Invert(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)");
	return _il2cpp_icall_func(___inMatrix, ___dest);
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
extern "C" Matrix4x4_t380  Matrix4x4_get_inverse_m2647 (Matrix4x4_t380 * __this, const MethodInfo* method)
{
	{
		Matrix4x4_t380  L_0 = Matrix4x4_Inverse_m2641(NULL /*static, unused*/, (*(Matrix4x4_t380 *)__this), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_transpose()
extern "C" Matrix4x4_t380  Matrix4x4_get_transpose_m2648 (Matrix4x4_t380 * __this, const MethodInfo* method)
{
	{
		Matrix4x4_t380  L_0 = Matrix4x4_Transpose_m2643(NULL /*static, unused*/, (*(Matrix4x4_t380 *)__this), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Matrix4x4::get_isIdentity()
extern "C" bool Matrix4x4_get_isIdentity_m2649 (Matrix4x4_t380 * __this, const MethodInfo* method)
{
	typedef bool (*Matrix4x4_get_isIdentity_m2649_ftn) (Matrix4x4_t380 *);
	static Matrix4x4_get_isIdentity_m2649_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_get_isIdentity_m2649_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::get_isIdentity()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
extern "C" Vector4_t333  Matrix4x4_GetColumn_m2650 (Matrix4x4_t380 * __this, int32_t ___i, const MethodInfo* method)
{
	{
		int32_t L_0 = ___i;
		float L_1 = Matrix4x4_get_Item_m2635(__this, 0, L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___i;
		float L_3 = Matrix4x4_get_Item_m2635(__this, 1, L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___i;
		float L_5 = Matrix4x4_get_Item_m2635(__this, 2, L_4, /*hidden argument*/NULL);
		int32_t L_6 = ___i;
		float L_7 = Matrix4x4_get_Item_m2635(__this, 3, L_6, /*hidden argument*/NULL);
		Vector4_t333  L_8 = {0};
		Vector4__ctor_m1733(&L_8, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetRow(System.Int32)
extern "C" Vector4_t333  Matrix4x4_GetRow_m2651 (Matrix4x4_t380 * __this, int32_t ___i, const MethodInfo* method)
{
	{
		int32_t L_0 = ___i;
		float L_1 = Matrix4x4_get_Item_m2635(__this, L_0, 0, /*hidden argument*/NULL);
		int32_t L_2 = ___i;
		float L_3 = Matrix4x4_get_Item_m2635(__this, L_2, 1, /*hidden argument*/NULL);
		int32_t L_4 = ___i;
		float L_5 = Matrix4x4_get_Item_m2635(__this, L_4, 2, /*hidden argument*/NULL);
		int32_t L_6 = ___i;
		float L_7 = Matrix4x4_get_Item_m2635(__this, L_6, 3, /*hidden argument*/NULL);
		Vector4_t333  L_8 = {0};
		Vector4__ctor_m1733(&L_8, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void UnityEngine.Matrix4x4::SetColumn(System.Int32,UnityEngine.Vector4)
extern "C" void Matrix4x4_SetColumn_m2652 (Matrix4x4_t380 * __this, int32_t ___i, Vector4_t333  ___v, const MethodInfo* method)
{
	{
		int32_t L_0 = ___i;
		float L_1 = ((&___v)->___x_1);
		Matrix4x4_set_Item_m2636(__this, 0, L_0, L_1, /*hidden argument*/NULL);
		int32_t L_2 = ___i;
		float L_3 = ((&___v)->___y_2);
		Matrix4x4_set_Item_m2636(__this, 1, L_2, L_3, /*hidden argument*/NULL);
		int32_t L_4 = ___i;
		float L_5 = ((&___v)->___z_3);
		Matrix4x4_set_Item_m2636(__this, 2, L_4, L_5, /*hidden argument*/NULL);
		int32_t L_6 = ___i;
		float L_7 = ((&___v)->___w_4);
		Matrix4x4_set_Item_m2636(__this, 3, L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Matrix4x4::SetRow(System.Int32,UnityEngine.Vector4)
extern "C" void Matrix4x4_SetRow_m2653 (Matrix4x4_t380 * __this, int32_t ___i, Vector4_t333  ___v, const MethodInfo* method)
{
	{
		int32_t L_0 = ___i;
		float L_1 = ((&___v)->___x_1);
		Matrix4x4_set_Item_m2636(__this, L_0, 0, L_1, /*hidden argument*/NULL);
		int32_t L_2 = ___i;
		float L_3 = ((&___v)->___y_2);
		Matrix4x4_set_Item_m2636(__this, L_2, 1, L_3, /*hidden argument*/NULL);
		int32_t L_4 = ___i;
		float L_5 = ((&___v)->___z_3);
		Matrix4x4_set_Item_m2636(__this, L_4, 2, L_5, /*hidden argument*/NULL);
		int32_t L_6 = ___i;
		float L_7 = ((&___v)->___w_4);
		Matrix4x4_set_Item_m2636(__this, L_6, 3, L_7, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
extern "C" Vector3_t58  Matrix4x4_MultiplyPoint_m2654 (Matrix4x4_t380 * __this, Vector3_t58  ___v, const MethodInfo* method)
{
	Vector3_t58  V_0 = {0};
	float V_1 = 0.0f;
	{
		float L_0 = (__this->___m00_0);
		float L_1 = ((&___v)->___x_1);
		float L_2 = (__this->___m01_4);
		float L_3 = ((&___v)->___y_2);
		float L_4 = (__this->___m02_8);
		float L_5 = ((&___v)->___z_3);
		float L_6 = (__this->___m03_12);
		(&V_0)->___x_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)L_6));
		float L_7 = (__this->___m10_1);
		float L_8 = ((&___v)->___x_1);
		float L_9 = (__this->___m11_5);
		float L_10 = ((&___v)->___y_2);
		float L_11 = (__this->___m12_9);
		float L_12 = ((&___v)->___z_3);
		float L_13 = (__this->___m13_13);
		(&V_0)->___y_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_7*(float)L_8))+(float)((float)((float)L_9*(float)L_10))))+(float)((float)((float)L_11*(float)L_12))))+(float)L_13));
		float L_14 = (__this->___m20_2);
		float L_15 = ((&___v)->___x_1);
		float L_16 = (__this->___m21_6);
		float L_17 = ((&___v)->___y_2);
		float L_18 = (__this->___m22_10);
		float L_19 = ((&___v)->___z_3);
		float L_20 = (__this->___m23_14);
		(&V_0)->___z_3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_14*(float)L_15))+(float)((float)((float)L_16*(float)L_17))))+(float)((float)((float)L_18*(float)L_19))))+(float)L_20));
		float L_21 = (__this->___m30_3);
		float L_22 = ((&___v)->___x_1);
		float L_23 = (__this->___m31_7);
		float L_24 = ((&___v)->___y_2);
		float L_25 = (__this->___m32_11);
		float L_26 = ((&___v)->___z_3);
		float L_27 = (__this->___m33_15);
		V_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_21*(float)L_22))+(float)((float)((float)L_23*(float)L_24))))+(float)((float)((float)L_25*(float)L_26))))+(float)L_27));
		float L_28 = V_1;
		V_1 = ((float)((float)(1.0f)/(float)L_28));
		Vector3_t58 * L_29 = (&V_0);
		float L_30 = (L_29->___x_1);
		float L_31 = V_1;
		L_29->___x_1 = ((float)((float)L_30*(float)L_31));
		Vector3_t58 * L_32 = (&V_0);
		float L_33 = (L_32->___y_2);
		float L_34 = V_1;
		L_32->___y_2 = ((float)((float)L_33*(float)L_34));
		Vector3_t58 * L_35 = (&V_0);
		float L_36 = (L_35->___z_3);
		float L_37 = V_1;
		L_35->___z_3 = ((float)((float)L_36*(float)L_37));
		Vector3_t58  L_38 = V_0;
		return L_38;
	}
}
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
extern "C" Vector3_t58  Matrix4x4_MultiplyPoint3x4_m1954 (Matrix4x4_t380 * __this, Vector3_t58  ___v, const MethodInfo* method)
{
	Vector3_t58  V_0 = {0};
	{
		float L_0 = (__this->___m00_0);
		float L_1 = ((&___v)->___x_1);
		float L_2 = (__this->___m01_4);
		float L_3 = ((&___v)->___y_2);
		float L_4 = (__this->___m02_8);
		float L_5 = ((&___v)->___z_3);
		float L_6 = (__this->___m03_12);
		(&V_0)->___x_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)L_6));
		float L_7 = (__this->___m10_1);
		float L_8 = ((&___v)->___x_1);
		float L_9 = (__this->___m11_5);
		float L_10 = ((&___v)->___y_2);
		float L_11 = (__this->___m12_9);
		float L_12 = ((&___v)->___z_3);
		float L_13 = (__this->___m13_13);
		(&V_0)->___y_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_7*(float)L_8))+(float)((float)((float)L_9*(float)L_10))))+(float)((float)((float)L_11*(float)L_12))))+(float)L_13));
		float L_14 = (__this->___m20_2);
		float L_15 = ((&___v)->___x_1);
		float L_16 = (__this->___m21_6);
		float L_17 = ((&___v)->___y_2);
		float L_18 = (__this->___m22_10);
		float L_19 = ((&___v)->___z_3);
		float L_20 = (__this->___m23_14);
		(&V_0)->___z_3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_14*(float)L_15))+(float)((float)((float)L_16*(float)L_17))))+(float)((float)((float)L_18*(float)L_19))))+(float)L_20));
		Vector3_t58  L_21 = V_0;
		return L_21;
	}
}
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
extern "C" Vector3_t58  Matrix4x4_MultiplyVector_m2655 (Matrix4x4_t380 * __this, Vector3_t58  ___v, const MethodInfo* method)
{
	Vector3_t58  V_0 = {0};
	{
		float L_0 = (__this->___m00_0);
		float L_1 = ((&___v)->___x_1);
		float L_2 = (__this->___m01_4);
		float L_3 = ((&___v)->___y_2);
		float L_4 = (__this->___m02_8);
		float L_5 = ((&___v)->___z_3);
		(&V_0)->___x_1 = ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
		float L_6 = (__this->___m10_1);
		float L_7 = ((&___v)->___x_1);
		float L_8 = (__this->___m11_5);
		float L_9 = ((&___v)->___y_2);
		float L_10 = (__this->___m12_9);
		float L_11 = ((&___v)->___z_3);
		(&V_0)->___y_2 = ((float)((float)((float)((float)((float)((float)L_6*(float)L_7))+(float)((float)((float)L_8*(float)L_9))))+(float)((float)((float)L_10*(float)L_11))));
		float L_12 = (__this->___m20_2);
		float L_13 = ((&___v)->___x_1);
		float L_14 = (__this->___m21_6);
		float L_15 = ((&___v)->___y_2);
		float L_16 = (__this->___m22_10);
		float L_17 = ((&___v)->___z_3);
		(&V_0)->___z_3 = ((float)((float)((float)((float)((float)((float)L_12*(float)L_13))+(float)((float)((float)L_14*(float)L_15))))+(float)((float)((float)L_16*(float)L_17))));
		Vector3_t58  L_18 = V_0;
		return L_18;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Scale(UnityEngine.Vector3)
extern TypeInfo* Matrix4x4_t380_il2cpp_TypeInfo_var;
extern "C" Matrix4x4_t380  Matrix4x4_Scale_m2656 (Object_t * __this /* static, unused */, Vector3_t58  ___v, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Matrix4x4_t380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(972);
		s_Il2CppMethodIntialized = true;
	}
	Matrix4x4_t380  V_0 = {0};
	{
		Initobj (Matrix4x4_t380_il2cpp_TypeInfo_var, (&V_0));
		float L_0 = ((&___v)->___x_1);
		(&V_0)->___m00_0 = L_0;
		(&V_0)->___m01_4 = (0.0f);
		(&V_0)->___m02_8 = (0.0f);
		(&V_0)->___m03_12 = (0.0f);
		(&V_0)->___m10_1 = (0.0f);
		float L_1 = ((&___v)->___y_2);
		(&V_0)->___m11_5 = L_1;
		(&V_0)->___m12_9 = (0.0f);
		(&V_0)->___m13_13 = (0.0f);
		(&V_0)->___m20_2 = (0.0f);
		(&V_0)->___m21_6 = (0.0f);
		float L_2 = ((&___v)->___z_3);
		(&V_0)->___m22_10 = L_2;
		(&V_0)->___m23_14 = (0.0f);
		(&V_0)->___m30_3 = (0.0f);
		(&V_0)->___m31_7 = (0.0f);
		(&V_0)->___m32_11 = (0.0f);
		(&V_0)->___m33_15 = (1.0f);
		Matrix4x4_t380  L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_zero()
extern TypeInfo* Matrix4x4_t380_il2cpp_TypeInfo_var;
extern "C" Matrix4x4_t380  Matrix4x4_get_zero_m2657 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Matrix4x4_t380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(972);
		s_Il2CppMethodIntialized = true;
	}
	Matrix4x4_t380  V_0 = {0};
	{
		Initobj (Matrix4x4_t380_il2cpp_TypeInfo_var, (&V_0));
		(&V_0)->___m00_0 = (0.0f);
		(&V_0)->___m01_4 = (0.0f);
		(&V_0)->___m02_8 = (0.0f);
		(&V_0)->___m03_12 = (0.0f);
		(&V_0)->___m10_1 = (0.0f);
		(&V_0)->___m11_5 = (0.0f);
		(&V_0)->___m12_9 = (0.0f);
		(&V_0)->___m13_13 = (0.0f);
		(&V_0)->___m20_2 = (0.0f);
		(&V_0)->___m21_6 = (0.0f);
		(&V_0)->___m22_10 = (0.0f);
		(&V_0)->___m23_14 = (0.0f);
		(&V_0)->___m30_3 = (0.0f);
		(&V_0)->___m31_7 = (0.0f);
		(&V_0)->___m32_11 = (0.0f);
		(&V_0)->___m33_15 = (0.0f);
		Matrix4x4_t380  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
extern TypeInfo* Matrix4x4_t380_il2cpp_TypeInfo_var;
extern "C" Matrix4x4_t380  Matrix4x4_get_identity_m2658 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Matrix4x4_t380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(972);
		s_Il2CppMethodIntialized = true;
	}
	Matrix4x4_t380  V_0 = {0};
	{
		Initobj (Matrix4x4_t380_il2cpp_TypeInfo_var, (&V_0));
		(&V_0)->___m00_0 = (1.0f);
		(&V_0)->___m01_4 = (0.0f);
		(&V_0)->___m02_8 = (0.0f);
		(&V_0)->___m03_12 = (0.0f);
		(&V_0)->___m10_1 = (0.0f);
		(&V_0)->___m11_5 = (1.0f);
		(&V_0)->___m12_9 = (0.0f);
		(&V_0)->___m13_13 = (0.0f);
		(&V_0)->___m20_2 = (0.0f);
		(&V_0)->___m21_6 = (0.0f);
		(&V_0)->___m22_10 = (1.0f);
		(&V_0)->___m23_14 = (0.0f);
		(&V_0)->___m30_3 = (0.0f);
		(&V_0)->___m31_7 = (0.0f);
		(&V_0)->___m32_11 = (0.0f);
		(&V_0)->___m33_15 = (1.0f);
		Matrix4x4_t380  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Matrix4x4::SetTRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" void Matrix4x4_SetTRS_m2659 (Matrix4x4_t380 * __this, Vector3_t58  ___pos, Quaternion_t99  ___q, Vector3_t58  ___s, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = ___pos;
		Quaternion_t99  L_1 = ___q;
		Vector3_t58  L_2 = ___s;
		Matrix4x4_t380  L_3 = Matrix4x4_TRS_m2660(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		*__this = L_3;
		return;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" Matrix4x4_t380  Matrix4x4_TRS_m2660 (Object_t * __this /* static, unused */, Vector3_t58  ___pos, Quaternion_t99  ___q, Vector3_t58  ___s, const MethodInfo* method)
{
	{
		Matrix4x4_t380  L_0 = Matrix4x4_INTERNAL_CALL_TRS_m2661(NULL /*static, unused*/, (&___pos), (&___q), (&___s), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_TRS(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
extern "C" Matrix4x4_t380  Matrix4x4_INTERNAL_CALL_TRS_m2661 (Object_t * __this /* static, unused */, Vector3_t58 * ___pos, Quaternion_t99 * ___q, Vector3_t58 * ___s, const MethodInfo* method)
{
	typedef Matrix4x4_t380  (*Matrix4x4_INTERNAL_CALL_TRS_m2661_ftn) (Vector3_t58 *, Quaternion_t99 *, Vector3_t58 *);
	static Matrix4x4_INTERNAL_CALL_TRS_m2661_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_INTERNAL_CALL_TRS_m2661_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_TRS(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___pos, ___q, ___s);
}
// System.String UnityEngine.Matrix4x4::ToString()
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t345_il2cpp_TypeInfo_var;
extern "C" String_t* Matrix4x4_ToString_m2662 (Matrix4x4_t380 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		Single_t345_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t73* L_0 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, ((int32_t)16)));
		float L_1 = (__this->___m00_0);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t345_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t73* L_4 = L_0;
		float L_5 = (__this->___m01_4);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t345_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t73* L_8 = L_4;
		float L_9 = (__this->___m02_8);
		float L_10 = L_9;
		Object_t * L_11 = Box(Single_t345_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t73* L_12 = L_8;
		float L_13 = (__this->___m03_12);
		float L_14 = L_13;
		Object_t * L_15 = Box(Single_t345_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		ObjectU5BU5D_t73* L_16 = L_12;
		float L_17 = (__this->___m10_1);
		float L_18 = L_17;
		Object_t * L_19 = Box(Single_t345_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 4);
		ArrayElementTypeCheck (L_16, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 4)) = (Object_t *)L_19;
		ObjectU5BU5D_t73* L_20 = L_16;
		float L_21 = (__this->___m11_5);
		float L_22 = L_21;
		Object_t * L_23 = Box(Single_t345_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 5);
		ArrayElementTypeCheck (L_20, L_23);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 5)) = (Object_t *)L_23;
		ObjectU5BU5D_t73* L_24 = L_20;
		float L_25 = (__this->___m12_9);
		float L_26 = L_25;
		Object_t * L_27 = Box(Single_t345_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 6);
		ArrayElementTypeCheck (L_24, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, 6)) = (Object_t *)L_27;
		ObjectU5BU5D_t73* L_28 = L_24;
		float L_29 = (__this->___m13_13);
		float L_30 = L_29;
		Object_t * L_31 = Box(Single_t345_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 7);
		ArrayElementTypeCheck (L_28, L_31);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, 7)) = (Object_t *)L_31;
		ObjectU5BU5D_t73* L_32 = L_28;
		float L_33 = (__this->___m20_2);
		float L_34 = L_33;
		Object_t * L_35 = Box(Single_t345_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 8);
		ArrayElementTypeCheck (L_32, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_32, 8)) = (Object_t *)L_35;
		ObjectU5BU5D_t73* L_36 = L_32;
		float L_37 = (__this->___m21_6);
		float L_38 = L_37;
		Object_t * L_39 = Box(Single_t345_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, ((int32_t)9));
		ArrayElementTypeCheck (L_36, L_39);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_36, ((int32_t)9))) = (Object_t *)L_39;
		ObjectU5BU5D_t73* L_40 = L_36;
		float L_41 = (__this->___m22_10);
		float L_42 = L_41;
		Object_t * L_43 = Box(Single_t345_il2cpp_TypeInfo_var, &L_42);
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, ((int32_t)10));
		ArrayElementTypeCheck (L_40, L_43);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_40, ((int32_t)10))) = (Object_t *)L_43;
		ObjectU5BU5D_t73* L_44 = L_40;
		float L_45 = (__this->___m23_14);
		float L_46 = L_45;
		Object_t * L_47 = Box(Single_t345_il2cpp_TypeInfo_var, &L_46);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)11));
		ArrayElementTypeCheck (L_44, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_44, ((int32_t)11))) = (Object_t *)L_47;
		ObjectU5BU5D_t73* L_48 = L_44;
		float L_49 = (__this->___m30_3);
		float L_50 = L_49;
		Object_t * L_51 = Box(Single_t345_il2cpp_TypeInfo_var, &L_50);
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, ((int32_t)12));
		ArrayElementTypeCheck (L_48, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_48, ((int32_t)12))) = (Object_t *)L_51;
		ObjectU5BU5D_t73* L_52 = L_48;
		float L_53 = (__this->___m31_7);
		float L_54 = L_53;
		Object_t * L_55 = Box(Single_t345_il2cpp_TypeInfo_var, &L_54);
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, ((int32_t)13));
		ArrayElementTypeCheck (L_52, L_55);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, ((int32_t)13))) = (Object_t *)L_55;
		ObjectU5BU5D_t73* L_56 = L_52;
		float L_57 = (__this->___m32_11);
		float L_58 = L_57;
		Object_t * L_59 = Box(Single_t345_il2cpp_TypeInfo_var, &L_58);
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, ((int32_t)14));
		ArrayElementTypeCheck (L_56, L_59);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_56, ((int32_t)14))) = (Object_t *)L_59;
		ObjectU5BU5D_t73* L_60 = L_56;
		float L_61 = (__this->___m33_15);
		float L_62 = L_61;
		Object_t * L_63 = Box(Single_t345_il2cpp_TypeInfo_var, &L_62);
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, ((int32_t)15));
		ArrayElementTypeCheck (L_60, L_63);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_60, ((int32_t)15))) = (Object_t *)L_63;
		String_t* L_64 = UnityString_Format_m2796(NULL /*static, unused*/, (String_t*) &_stringLiteral198, L_60, /*hidden argument*/NULL);
		return L_64;
	}
}
// System.String UnityEngine.Matrix4x4::ToString(System.String)
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern "C" String_t* Matrix4x4_ToString_m2663 (Matrix4x4_t380 * __this, String_t* ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t73* L_0 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, ((int32_t)16)));
		float* L_1 = &(__this->___m00_0);
		String_t* L_2 = ___format;
		String_t* L_3 = Single_ToString_m3531(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t73* L_4 = L_0;
		float* L_5 = &(__this->___m01_4);
		String_t* L_6 = ___format;
		String_t* L_7 = Single_ToString_m3531(L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t73* L_8 = L_4;
		float* L_9 = &(__this->___m02_8);
		String_t* L_10 = ___format;
		String_t* L_11 = Single_ToString_m3531(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t73* L_12 = L_8;
		float* L_13 = &(__this->___m03_12);
		String_t* L_14 = ___format;
		String_t* L_15 = Single_ToString_m3531(L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		ObjectU5BU5D_t73* L_16 = L_12;
		float* L_17 = &(__this->___m10_1);
		String_t* L_18 = ___format;
		String_t* L_19 = Single_ToString_m3531(L_17, L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 4);
		ArrayElementTypeCheck (L_16, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 4)) = (Object_t *)L_19;
		ObjectU5BU5D_t73* L_20 = L_16;
		float* L_21 = &(__this->___m11_5);
		String_t* L_22 = ___format;
		String_t* L_23 = Single_ToString_m3531(L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 5);
		ArrayElementTypeCheck (L_20, L_23);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 5)) = (Object_t *)L_23;
		ObjectU5BU5D_t73* L_24 = L_20;
		float* L_25 = &(__this->___m12_9);
		String_t* L_26 = ___format;
		String_t* L_27 = Single_ToString_m3531(L_25, L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 6);
		ArrayElementTypeCheck (L_24, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, 6)) = (Object_t *)L_27;
		ObjectU5BU5D_t73* L_28 = L_24;
		float* L_29 = &(__this->___m13_13);
		String_t* L_30 = ___format;
		String_t* L_31 = Single_ToString_m3531(L_29, L_30, /*hidden argument*/NULL);
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 7);
		ArrayElementTypeCheck (L_28, L_31);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, 7)) = (Object_t *)L_31;
		ObjectU5BU5D_t73* L_32 = L_28;
		float* L_33 = &(__this->___m20_2);
		String_t* L_34 = ___format;
		String_t* L_35 = Single_ToString_m3531(L_33, L_34, /*hidden argument*/NULL);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 8);
		ArrayElementTypeCheck (L_32, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_32, 8)) = (Object_t *)L_35;
		ObjectU5BU5D_t73* L_36 = L_32;
		float* L_37 = &(__this->___m21_6);
		String_t* L_38 = ___format;
		String_t* L_39 = Single_ToString_m3531(L_37, L_38, /*hidden argument*/NULL);
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, ((int32_t)9));
		ArrayElementTypeCheck (L_36, L_39);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_36, ((int32_t)9))) = (Object_t *)L_39;
		ObjectU5BU5D_t73* L_40 = L_36;
		float* L_41 = &(__this->___m22_10);
		String_t* L_42 = ___format;
		String_t* L_43 = Single_ToString_m3531(L_41, L_42, /*hidden argument*/NULL);
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, ((int32_t)10));
		ArrayElementTypeCheck (L_40, L_43);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_40, ((int32_t)10))) = (Object_t *)L_43;
		ObjectU5BU5D_t73* L_44 = L_40;
		float* L_45 = &(__this->___m23_14);
		String_t* L_46 = ___format;
		String_t* L_47 = Single_ToString_m3531(L_45, L_46, /*hidden argument*/NULL);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)11));
		ArrayElementTypeCheck (L_44, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_44, ((int32_t)11))) = (Object_t *)L_47;
		ObjectU5BU5D_t73* L_48 = L_44;
		float* L_49 = &(__this->___m30_3);
		String_t* L_50 = ___format;
		String_t* L_51 = Single_ToString_m3531(L_49, L_50, /*hidden argument*/NULL);
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, ((int32_t)12));
		ArrayElementTypeCheck (L_48, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_48, ((int32_t)12))) = (Object_t *)L_51;
		ObjectU5BU5D_t73* L_52 = L_48;
		float* L_53 = &(__this->___m31_7);
		String_t* L_54 = ___format;
		String_t* L_55 = Single_ToString_m3531(L_53, L_54, /*hidden argument*/NULL);
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, ((int32_t)13));
		ArrayElementTypeCheck (L_52, L_55);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, ((int32_t)13))) = (Object_t *)L_55;
		ObjectU5BU5D_t73* L_56 = L_52;
		float* L_57 = &(__this->___m32_11);
		String_t* L_58 = ___format;
		String_t* L_59 = Single_ToString_m3531(L_57, L_58, /*hidden argument*/NULL);
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, ((int32_t)14));
		ArrayElementTypeCheck (L_56, L_59);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_56, ((int32_t)14))) = (Object_t *)L_59;
		ObjectU5BU5D_t73* L_60 = L_56;
		float* L_61 = &(__this->___m33_15);
		String_t* L_62 = ___format;
		String_t* L_63 = Single_ToString_m3531(L_61, L_62, /*hidden argument*/NULL);
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, ((int32_t)15));
		ArrayElementTypeCheck (L_60, L_63);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_60, ((int32_t)15))) = (Object_t *)L_63;
		String_t* L_64 = UnityString_Format_m2796(NULL /*static, unused*/, (String_t*) &_stringLiteral199, L_60, /*hidden argument*/NULL);
		return L_64;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Ortho(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C" Matrix4x4_t380  Matrix4x4_Ortho_m2664 (Object_t * __this /* static, unused */, float ___left, float ___right, float ___bottom, float ___top, float ___zNear, float ___zFar, const MethodInfo* method)
{
	typedef Matrix4x4_t380  (*Matrix4x4_Ortho_m2664_ftn) (float, float, float, float, float, float);
	static Matrix4x4_Ortho_m2664_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_Ortho_m2664_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::Ortho(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)");
	return _il2cpp_icall_func(___left, ___right, ___bottom, ___top, ___zNear, ___zFar);
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Perspective(System.Single,System.Single,System.Single,System.Single)
extern "C" Matrix4x4_t380  Matrix4x4_Perspective_m2665 (Object_t * __this /* static, unused */, float ___fov, float ___aspect, float ___zNear, float ___zFar, const MethodInfo* method)
{
	typedef Matrix4x4_t380  (*Matrix4x4_Perspective_m2665_ftn) (float, float, float, float);
	static Matrix4x4_Perspective_m2665_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_Perspective_m2665_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::Perspective(System.Single,System.Single,System.Single,System.Single)");
	return _il2cpp_icall_func(___fov, ___aspect, ___zNear, ___zFar);
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern TypeInfo* Matrix4x4_t380_il2cpp_TypeInfo_var;
extern "C" Matrix4x4_t380  Matrix4x4_op_Multiply_m2666 (Object_t * __this /* static, unused */, Matrix4x4_t380  ___lhs, Matrix4x4_t380  ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Matrix4x4_t380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(972);
		s_Il2CppMethodIntialized = true;
	}
	Matrix4x4_t380  V_0 = {0};
	{
		Initobj (Matrix4x4_t380_il2cpp_TypeInfo_var, (&V_0));
		float L_0 = ((&___lhs)->___m00_0);
		float L_1 = ((&___rhs)->___m00_0);
		float L_2 = ((&___lhs)->___m01_4);
		float L_3 = ((&___rhs)->___m10_1);
		float L_4 = ((&___lhs)->___m02_8);
		float L_5 = ((&___rhs)->___m20_2);
		float L_6 = ((&___lhs)->___m03_12);
		float L_7 = ((&___rhs)->___m30_3);
		(&V_0)->___m00_0 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
		float L_8 = ((&___lhs)->___m00_0);
		float L_9 = ((&___rhs)->___m01_4);
		float L_10 = ((&___lhs)->___m01_4);
		float L_11 = ((&___rhs)->___m11_5);
		float L_12 = ((&___lhs)->___m02_8);
		float L_13 = ((&___rhs)->___m21_6);
		float L_14 = ((&___lhs)->___m03_12);
		float L_15 = ((&___rhs)->___m31_7);
		(&V_0)->___m01_4 = ((float)((float)((float)((float)((float)((float)((float)((float)L_8*(float)L_9))+(float)((float)((float)L_10*(float)L_11))))+(float)((float)((float)L_12*(float)L_13))))+(float)((float)((float)L_14*(float)L_15))));
		float L_16 = ((&___lhs)->___m00_0);
		float L_17 = ((&___rhs)->___m02_8);
		float L_18 = ((&___lhs)->___m01_4);
		float L_19 = ((&___rhs)->___m12_9);
		float L_20 = ((&___lhs)->___m02_8);
		float L_21 = ((&___rhs)->___m22_10);
		float L_22 = ((&___lhs)->___m03_12);
		float L_23 = ((&___rhs)->___m32_11);
		(&V_0)->___m02_8 = ((float)((float)((float)((float)((float)((float)((float)((float)L_16*(float)L_17))+(float)((float)((float)L_18*(float)L_19))))+(float)((float)((float)L_20*(float)L_21))))+(float)((float)((float)L_22*(float)L_23))));
		float L_24 = ((&___lhs)->___m00_0);
		float L_25 = ((&___rhs)->___m03_12);
		float L_26 = ((&___lhs)->___m01_4);
		float L_27 = ((&___rhs)->___m13_13);
		float L_28 = ((&___lhs)->___m02_8);
		float L_29 = ((&___rhs)->___m23_14);
		float L_30 = ((&___lhs)->___m03_12);
		float L_31 = ((&___rhs)->___m33_15);
		(&V_0)->___m03_12 = ((float)((float)((float)((float)((float)((float)((float)((float)L_24*(float)L_25))+(float)((float)((float)L_26*(float)L_27))))+(float)((float)((float)L_28*(float)L_29))))+(float)((float)((float)L_30*(float)L_31))));
		float L_32 = ((&___lhs)->___m10_1);
		float L_33 = ((&___rhs)->___m00_0);
		float L_34 = ((&___lhs)->___m11_5);
		float L_35 = ((&___rhs)->___m10_1);
		float L_36 = ((&___lhs)->___m12_9);
		float L_37 = ((&___rhs)->___m20_2);
		float L_38 = ((&___lhs)->___m13_13);
		float L_39 = ((&___rhs)->___m30_3);
		(&V_0)->___m10_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_32*(float)L_33))+(float)((float)((float)L_34*(float)L_35))))+(float)((float)((float)L_36*(float)L_37))))+(float)((float)((float)L_38*(float)L_39))));
		float L_40 = ((&___lhs)->___m10_1);
		float L_41 = ((&___rhs)->___m01_4);
		float L_42 = ((&___lhs)->___m11_5);
		float L_43 = ((&___rhs)->___m11_5);
		float L_44 = ((&___lhs)->___m12_9);
		float L_45 = ((&___rhs)->___m21_6);
		float L_46 = ((&___lhs)->___m13_13);
		float L_47 = ((&___rhs)->___m31_7);
		(&V_0)->___m11_5 = ((float)((float)((float)((float)((float)((float)((float)((float)L_40*(float)L_41))+(float)((float)((float)L_42*(float)L_43))))+(float)((float)((float)L_44*(float)L_45))))+(float)((float)((float)L_46*(float)L_47))));
		float L_48 = ((&___lhs)->___m10_1);
		float L_49 = ((&___rhs)->___m02_8);
		float L_50 = ((&___lhs)->___m11_5);
		float L_51 = ((&___rhs)->___m12_9);
		float L_52 = ((&___lhs)->___m12_9);
		float L_53 = ((&___rhs)->___m22_10);
		float L_54 = ((&___lhs)->___m13_13);
		float L_55 = ((&___rhs)->___m32_11);
		(&V_0)->___m12_9 = ((float)((float)((float)((float)((float)((float)((float)((float)L_48*(float)L_49))+(float)((float)((float)L_50*(float)L_51))))+(float)((float)((float)L_52*(float)L_53))))+(float)((float)((float)L_54*(float)L_55))));
		float L_56 = ((&___lhs)->___m10_1);
		float L_57 = ((&___rhs)->___m03_12);
		float L_58 = ((&___lhs)->___m11_5);
		float L_59 = ((&___rhs)->___m13_13);
		float L_60 = ((&___lhs)->___m12_9);
		float L_61 = ((&___rhs)->___m23_14);
		float L_62 = ((&___lhs)->___m13_13);
		float L_63 = ((&___rhs)->___m33_15);
		(&V_0)->___m13_13 = ((float)((float)((float)((float)((float)((float)((float)((float)L_56*(float)L_57))+(float)((float)((float)L_58*(float)L_59))))+(float)((float)((float)L_60*(float)L_61))))+(float)((float)((float)L_62*(float)L_63))));
		float L_64 = ((&___lhs)->___m20_2);
		float L_65 = ((&___rhs)->___m00_0);
		float L_66 = ((&___lhs)->___m21_6);
		float L_67 = ((&___rhs)->___m10_1);
		float L_68 = ((&___lhs)->___m22_10);
		float L_69 = ((&___rhs)->___m20_2);
		float L_70 = ((&___lhs)->___m23_14);
		float L_71 = ((&___rhs)->___m30_3);
		(&V_0)->___m20_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_64*(float)L_65))+(float)((float)((float)L_66*(float)L_67))))+(float)((float)((float)L_68*(float)L_69))))+(float)((float)((float)L_70*(float)L_71))));
		float L_72 = ((&___lhs)->___m20_2);
		float L_73 = ((&___rhs)->___m01_4);
		float L_74 = ((&___lhs)->___m21_6);
		float L_75 = ((&___rhs)->___m11_5);
		float L_76 = ((&___lhs)->___m22_10);
		float L_77 = ((&___rhs)->___m21_6);
		float L_78 = ((&___lhs)->___m23_14);
		float L_79 = ((&___rhs)->___m31_7);
		(&V_0)->___m21_6 = ((float)((float)((float)((float)((float)((float)((float)((float)L_72*(float)L_73))+(float)((float)((float)L_74*(float)L_75))))+(float)((float)((float)L_76*(float)L_77))))+(float)((float)((float)L_78*(float)L_79))));
		float L_80 = ((&___lhs)->___m20_2);
		float L_81 = ((&___rhs)->___m02_8);
		float L_82 = ((&___lhs)->___m21_6);
		float L_83 = ((&___rhs)->___m12_9);
		float L_84 = ((&___lhs)->___m22_10);
		float L_85 = ((&___rhs)->___m22_10);
		float L_86 = ((&___lhs)->___m23_14);
		float L_87 = ((&___rhs)->___m32_11);
		(&V_0)->___m22_10 = ((float)((float)((float)((float)((float)((float)((float)((float)L_80*(float)L_81))+(float)((float)((float)L_82*(float)L_83))))+(float)((float)((float)L_84*(float)L_85))))+(float)((float)((float)L_86*(float)L_87))));
		float L_88 = ((&___lhs)->___m20_2);
		float L_89 = ((&___rhs)->___m03_12);
		float L_90 = ((&___lhs)->___m21_6);
		float L_91 = ((&___rhs)->___m13_13);
		float L_92 = ((&___lhs)->___m22_10);
		float L_93 = ((&___rhs)->___m23_14);
		float L_94 = ((&___lhs)->___m23_14);
		float L_95 = ((&___rhs)->___m33_15);
		(&V_0)->___m23_14 = ((float)((float)((float)((float)((float)((float)((float)((float)L_88*(float)L_89))+(float)((float)((float)L_90*(float)L_91))))+(float)((float)((float)L_92*(float)L_93))))+(float)((float)((float)L_94*(float)L_95))));
		float L_96 = ((&___lhs)->___m30_3);
		float L_97 = ((&___rhs)->___m00_0);
		float L_98 = ((&___lhs)->___m31_7);
		float L_99 = ((&___rhs)->___m10_1);
		float L_100 = ((&___lhs)->___m32_11);
		float L_101 = ((&___rhs)->___m20_2);
		float L_102 = ((&___lhs)->___m33_15);
		float L_103 = ((&___rhs)->___m30_3);
		(&V_0)->___m30_3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_96*(float)L_97))+(float)((float)((float)L_98*(float)L_99))))+(float)((float)((float)L_100*(float)L_101))))+(float)((float)((float)L_102*(float)L_103))));
		float L_104 = ((&___lhs)->___m30_3);
		float L_105 = ((&___rhs)->___m01_4);
		float L_106 = ((&___lhs)->___m31_7);
		float L_107 = ((&___rhs)->___m11_5);
		float L_108 = ((&___lhs)->___m32_11);
		float L_109 = ((&___rhs)->___m21_6);
		float L_110 = ((&___lhs)->___m33_15);
		float L_111 = ((&___rhs)->___m31_7);
		(&V_0)->___m31_7 = ((float)((float)((float)((float)((float)((float)((float)((float)L_104*(float)L_105))+(float)((float)((float)L_106*(float)L_107))))+(float)((float)((float)L_108*(float)L_109))))+(float)((float)((float)L_110*(float)L_111))));
		float L_112 = ((&___lhs)->___m30_3);
		float L_113 = ((&___rhs)->___m02_8);
		float L_114 = ((&___lhs)->___m31_7);
		float L_115 = ((&___rhs)->___m12_9);
		float L_116 = ((&___lhs)->___m32_11);
		float L_117 = ((&___rhs)->___m22_10);
		float L_118 = ((&___lhs)->___m33_15);
		float L_119 = ((&___rhs)->___m32_11);
		(&V_0)->___m32_11 = ((float)((float)((float)((float)((float)((float)((float)((float)L_112*(float)L_113))+(float)((float)((float)L_114*(float)L_115))))+(float)((float)((float)L_116*(float)L_117))))+(float)((float)((float)L_118*(float)L_119))));
		float L_120 = ((&___lhs)->___m30_3);
		float L_121 = ((&___rhs)->___m03_12);
		float L_122 = ((&___lhs)->___m31_7);
		float L_123 = ((&___rhs)->___m13_13);
		float L_124 = ((&___lhs)->___m32_11);
		float L_125 = ((&___rhs)->___m23_14);
		float L_126 = ((&___lhs)->___m33_15);
		float L_127 = ((&___rhs)->___m33_15);
		(&V_0)->___m33_15 = ((float)((float)((float)((float)((float)((float)((float)((float)L_120*(float)L_121))+(float)((float)((float)L_122*(float)L_123))))+(float)((float)((float)L_124*(float)L_125))))+(float)((float)((float)L_126*(float)L_127))));
		Matrix4x4_t380  L_128 = V_0;
		return L_128;
	}
}
// UnityEngine.Vector4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Vector4)
extern "C" Vector4_t333  Matrix4x4_op_Multiply_m2667 (Object_t * __this /* static, unused */, Matrix4x4_t380  ___lhs, Vector4_t333  ___v, const MethodInfo* method)
{
	Vector4_t333  V_0 = {0};
	{
		float L_0 = ((&___lhs)->___m00_0);
		float L_1 = ((&___v)->___x_1);
		float L_2 = ((&___lhs)->___m01_4);
		float L_3 = ((&___v)->___y_2);
		float L_4 = ((&___lhs)->___m02_8);
		float L_5 = ((&___v)->___z_3);
		float L_6 = ((&___lhs)->___m03_12);
		float L_7 = ((&___v)->___w_4);
		(&V_0)->___x_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
		float L_8 = ((&___lhs)->___m10_1);
		float L_9 = ((&___v)->___x_1);
		float L_10 = ((&___lhs)->___m11_5);
		float L_11 = ((&___v)->___y_2);
		float L_12 = ((&___lhs)->___m12_9);
		float L_13 = ((&___v)->___z_3);
		float L_14 = ((&___lhs)->___m13_13);
		float L_15 = ((&___v)->___w_4);
		(&V_0)->___y_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_8*(float)L_9))+(float)((float)((float)L_10*(float)L_11))))+(float)((float)((float)L_12*(float)L_13))))+(float)((float)((float)L_14*(float)L_15))));
		float L_16 = ((&___lhs)->___m20_2);
		float L_17 = ((&___v)->___x_1);
		float L_18 = ((&___lhs)->___m21_6);
		float L_19 = ((&___v)->___y_2);
		float L_20 = ((&___lhs)->___m22_10);
		float L_21 = ((&___v)->___z_3);
		float L_22 = ((&___lhs)->___m23_14);
		float L_23 = ((&___v)->___w_4);
		(&V_0)->___z_3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_16*(float)L_17))+(float)((float)((float)L_18*(float)L_19))))+(float)((float)((float)L_20*(float)L_21))))+(float)((float)((float)L_22*(float)L_23))));
		float L_24 = ((&___lhs)->___m30_3);
		float L_25 = ((&___v)->___x_1);
		float L_26 = ((&___lhs)->___m31_7);
		float L_27 = ((&___v)->___y_2);
		float L_28 = ((&___lhs)->___m32_11);
		float L_29 = ((&___v)->___z_3);
		float L_30 = ((&___lhs)->___m33_15);
		float L_31 = ((&___v)->___w_4);
		(&V_0)->___w_4 = ((float)((float)((float)((float)((float)((float)((float)((float)L_24*(float)L_25))+(float)((float)((float)L_26*(float)L_27))))+(float)((float)((float)L_28*(float)L_29))))+(float)((float)((float)L_30*(float)L_31))));
		Vector4_t333  L_32 = V_0;
		return L_32;
	}
}
// System.Boolean UnityEngine.Matrix4x4::op_Equality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C" bool Matrix4x4_op_Equality_m2668 (Object_t * __this /* static, unused */, Matrix4x4_t380  ___lhs, Matrix4x4_t380  ___rhs, const MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		Vector4_t333  L_0 = Matrix4x4_GetColumn_m2650((&___lhs), 0, /*hidden argument*/NULL);
		Vector4_t333  L_1 = Matrix4x4_GetColumn_m2650((&___rhs), 0, /*hidden argument*/NULL);
		bool L_2 = Vector4_op_Equality_m2703(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t333  L_3 = Matrix4x4_GetColumn_m2650((&___lhs), 1, /*hidden argument*/NULL);
		Vector4_t333  L_4 = Matrix4x4_GetColumn_m2650((&___rhs), 1, /*hidden argument*/NULL);
		bool L_5 = Vector4_op_Equality_m2703(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t333  L_6 = Matrix4x4_GetColumn_m2650((&___lhs), 2, /*hidden argument*/NULL);
		Vector4_t333  L_7 = Matrix4x4_GetColumn_m2650((&___rhs), 2, /*hidden argument*/NULL);
		bool L_8 = Vector4_op_Equality_m2703(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t333  L_9 = Matrix4x4_GetColumn_m2650((&___lhs), 3, /*hidden argument*/NULL);
		Vector4_t333  L_10 = Matrix4x4_GetColumn_m2650((&___rhs), 3, /*hidden argument*/NULL);
		bool L_11 = Vector4_op_Equality_m2703(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0066;
	}

IL_0065:
	{
		G_B5_0 = 0;
	}

IL_0066:
	{
		return G_B5_0;
	}
}
// System.Boolean UnityEngine.Matrix4x4::op_Inequality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C" bool Matrix4x4_op_Inequality_m2669 (Object_t * __this /* static, unused */, Matrix4x4_t380  ___lhs, Matrix4x4_t380  ___rhs, const MethodInfo* method)
{
	{
		Matrix4x4_t380  L_0 = ___lhs;
		Matrix4x4_t380  L_1 = ___rhs;
		bool L_2 = Matrix4x4_op_Equality_m2668(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_BoundsMethodDeclarations.h"

// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"


// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Bounds__ctor_m1948 (Bounds_t254 * __this, Vector3_t58  ___center, Vector3_t58  ___size, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = ___center;
		__this->___m_Center_0 = L_0;
		Vector3_t58  L_1 = ___size;
		Vector3_t58  L_2 = Vector3_op_Multiply_m222(NULL /*static, unused*/, L_1, (0.5f), /*hidden argument*/NULL);
		__this->___m_Extents_1 = L_2;
		return;
	}
}
// System.Int32 UnityEngine.Bounds::GetHashCode()
extern "C" int32_t Bounds_GetHashCode_m2670 (Bounds_t254 * __this, const MethodInfo* method)
{
	Vector3_t58  V_0 = {0};
	Vector3_t58  V_1 = {0};
	{
		Vector3_t58  L_0 = Bounds_get_center_m1949(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Vector3_GetHashCode_m2609((&V_0), /*hidden argument*/NULL);
		Vector3_t58  L_2 = Bounds_get_extents_m2672(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Vector3_GetHashCode_m2609((&V_1), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))));
	}
}
// System.Boolean UnityEngine.Bounds::Equals(System.Object)
extern TypeInfo* Bounds_t254_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t58_il2cpp_TypeInfo_var;
extern "C" bool Bounds_Equals_m2671 (Bounds_t254 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Bounds_t254_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(344);
		Vector3_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(185);
		s_Il2CppMethodIntialized = true;
	}
	Bounds_t254  V_0 = {0};
	Vector3_t58  V_1 = {0};
	Vector3_t58  V_2 = {0};
	int32_t G_B5_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, Bounds_t254_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Bounds_t254 *)((Bounds_t254 *)UnBox (L_1, Bounds_t254_il2cpp_TypeInfo_var))));
		Vector3_t58  L_2 = Bounds_get_center_m1949(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		Vector3_t58  L_3 = Bounds_get_center_m1949((&V_0), /*hidden argument*/NULL);
		Vector3_t58  L_4 = L_3;
		Object_t * L_5 = Box(Vector3_t58_il2cpp_TypeInfo_var, &L_4);
		bool L_6 = Vector3_Equals_m2610((&V_1), L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		Vector3_t58  L_7 = Bounds_get_extents_m2672(__this, /*hidden argument*/NULL);
		V_2 = L_7;
		Vector3_t58  L_8 = Bounds_get_extents_m2672((&V_0), /*hidden argument*/NULL);
		Vector3_t58  L_9 = L_8;
		Object_t * L_10 = Box(Vector3_t58_il2cpp_TypeInfo_var, &L_9);
		bool L_11 = Vector3_Equals_m2610((&V_2), L_10, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0050;
	}

IL_004f:
	{
		G_B5_0 = 0;
	}

IL_0050:
	{
		return G_B5_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
extern "C" Vector3_t58  Bounds_get_center_m1949 (Bounds_t254 * __this, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = (__this->___m_Center_0);
		return L_0;
	}
}
// System.Void UnityEngine.Bounds::set_center(UnityEngine.Vector3)
extern "C" void Bounds_set_center_m1951 (Bounds_t254 * __this, Vector3_t58  ___value, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = ___value;
		__this->___m_Center_0 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
extern "C" Vector3_t58  Bounds_get_size_m1939 (Bounds_t254 * __this, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = (__this->___m_Extents_1);
		Vector3_t58  L_1 = Vector3_op_Multiply_m222(NULL /*static, unused*/, L_0, (2.0f), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Bounds::set_size(UnityEngine.Vector3)
extern "C" void Bounds_set_size_m1950 (Bounds_t254 * __this, Vector3_t58  ___value, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = ___value;
		Vector3_t58  L_1 = Vector3_op_Multiply_m222(NULL /*static, unused*/, L_0, (0.5f), /*hidden argument*/NULL);
		__this->___m_Extents_1 = L_1;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
extern "C" Vector3_t58  Bounds_get_extents_m2672 (Bounds_t254 * __this, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = (__this->___m_Extents_1);
		return L_0;
	}
}
// System.Void UnityEngine.Bounds::set_extents(UnityEngine.Vector3)
extern "C" void Bounds_set_extents_m2673 (Bounds_t254 * __this, Vector3_t58  ___value, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = ___value;
		__this->___m_Extents_1 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
extern "C" Vector3_t58  Bounds_get_min_m1944 (Bounds_t254 * __this, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = Bounds_get_center_m1949(__this, /*hidden argument*/NULL);
		Vector3_t58  L_1 = Bounds_get_extents_m2672(__this, /*hidden argument*/NULL);
		Vector3_t58  L_2 = Vector3_op_Subtraction_m1764(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Bounds::set_min(UnityEngine.Vector3)
extern "C" void Bounds_set_min_m2674 (Bounds_t254 * __this, Vector3_t58  ___value, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = ___value;
		Vector3_t58  L_1 = Bounds_get_max_m1958(__this, /*hidden argument*/NULL);
		Bounds_SetMinMax_m2676(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
extern "C" Vector3_t58  Bounds_get_max_m1958 (Bounds_t254 * __this, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = Bounds_get_center_m1949(__this, /*hidden argument*/NULL);
		Vector3_t58  L_1 = Bounds_get_extents_m2672(__this, /*hidden argument*/NULL);
		Vector3_t58  L_2 = Vector3_op_Addition_m223(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Bounds::set_max(UnityEngine.Vector3)
extern "C" void Bounds_set_max_m2675 (Bounds_t254 * __this, Vector3_t58  ___value, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = Bounds_get_min_m1944(__this, /*hidden argument*/NULL);
		Vector3_t58  L_1 = ___value;
		Bounds_SetMinMax_m2676(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Bounds::SetMinMax(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Bounds_SetMinMax_m2676 (Bounds_t254 * __this, Vector3_t58  ___min, Vector3_t58  ___max, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = ___max;
		Vector3_t58  L_1 = ___min;
		Vector3_t58  L_2 = Vector3_op_Subtraction_m1764(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		Vector3_t58  L_3 = Vector3_op_Multiply_m222(NULL /*static, unused*/, L_2, (0.5f), /*hidden argument*/NULL);
		Bounds_set_extents_m2673(__this, L_3, /*hidden argument*/NULL);
		Vector3_t58  L_4 = ___min;
		Vector3_t58  L_5 = Bounds_get_extents_m2672(__this, /*hidden argument*/NULL);
		Vector3_t58  L_6 = Vector3_op_Addition_m223(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		Bounds_set_center_m1951(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Vector3)
extern "C" void Bounds_Encapsulate_m1957 (Bounds_t254 * __this, Vector3_t58  ___point, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = Bounds_get_min_m1944(__this, /*hidden argument*/NULL);
		Vector3_t58  L_1 = ___point;
		Vector3_t58  L_2 = Vector3_Min_m1955(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		Vector3_t58  L_3 = Bounds_get_max_m1958(__this, /*hidden argument*/NULL);
		Vector3_t58  L_4 = ___point;
		Vector3_t58  L_5 = Vector3_Max_m1956(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Bounds_SetMinMax_m2676(__this, L_2, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Bounds)
extern "C" void Bounds_Encapsulate_m2677 (Bounds_t254 * __this, Bounds_t254  ___bounds, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = Bounds_get_center_m1949((&___bounds), /*hidden argument*/NULL);
		Vector3_t58  L_1 = Bounds_get_extents_m2672((&___bounds), /*hidden argument*/NULL);
		Vector3_t58  L_2 = Vector3_op_Subtraction_m1764(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		Bounds_Encapsulate_m1957(__this, L_2, /*hidden argument*/NULL);
		Vector3_t58  L_3 = Bounds_get_center_m1949((&___bounds), /*hidden argument*/NULL);
		Vector3_t58  L_4 = Bounds_get_extents_m2672((&___bounds), /*hidden argument*/NULL);
		Vector3_t58  L_5 = Vector3_op_Addition_m223(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Bounds_Encapsulate_m1957(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Bounds::Expand(System.Single)
extern "C" void Bounds_Expand_m2678 (Bounds_t254 * __this, float ___amount, const MethodInfo* method)
{
	{
		float L_0 = ___amount;
		___amount = ((float)((float)L_0*(float)(0.5f)));
		Vector3_t58  L_1 = Bounds_get_extents_m2672(__this, /*hidden argument*/NULL);
		float L_2 = ___amount;
		float L_3 = ___amount;
		float L_4 = ___amount;
		Vector3_t58  L_5 = {0};
		Vector3__ctor_m312(&L_5, L_2, L_3, L_4, /*hidden argument*/NULL);
		Vector3_t58  L_6 = Vector3_op_Addition_m223(NULL /*static, unused*/, L_1, L_5, /*hidden argument*/NULL);
		Bounds_set_extents_m2673(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Bounds::Expand(UnityEngine.Vector3)
extern "C" void Bounds_Expand_m2679 (Bounds_t254 * __this, Vector3_t58  ___amount, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = Bounds_get_extents_m2672(__this, /*hidden argument*/NULL);
		Vector3_t58  L_1 = ___amount;
		Vector3_t58  L_2 = Vector3_op_Multiply_m222(NULL /*static, unused*/, L_1, (0.5f), /*hidden argument*/NULL);
		Vector3_t58  L_3 = Vector3_op_Addition_m223(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		Bounds_set_extents_m2673(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Bounds::Intersects(UnityEngine.Bounds)
extern "C" bool Bounds_Intersects_m2680 (Bounds_t254 * __this, Bounds_t254  ___bounds, const MethodInfo* method)
{
	Vector3_t58  V_0 = {0};
	Vector3_t58  V_1 = {0};
	Vector3_t58  V_2 = {0};
	Vector3_t58  V_3 = {0};
	Vector3_t58  V_4 = {0};
	Vector3_t58  V_5 = {0};
	Vector3_t58  V_6 = {0};
	Vector3_t58  V_7 = {0};
	Vector3_t58  V_8 = {0};
	Vector3_t58  V_9 = {0};
	Vector3_t58  V_10 = {0};
	Vector3_t58  V_11 = {0};
	int32_t G_B7_0 = 0;
	{
		Vector3_t58  L_0 = Bounds_get_min_m1944(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = ((&V_0)->___x_1);
		Vector3_t58  L_2 = Bounds_get_max_m1958((&___bounds), /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = ((&V_1)->___x_1);
		if ((!(((float)L_1) <= ((float)L_3))))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t58  L_4 = Bounds_get_max_m1958(__this, /*hidden argument*/NULL);
		V_2 = L_4;
		float L_5 = ((&V_2)->___x_1);
		Vector3_t58  L_6 = Bounds_get_min_m1944((&___bounds), /*hidden argument*/NULL);
		V_3 = L_6;
		float L_7 = ((&V_3)->___x_1);
		if ((!(((float)L_5) >= ((float)L_7))))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t58  L_8 = Bounds_get_min_m1944(__this, /*hidden argument*/NULL);
		V_4 = L_8;
		float L_9 = ((&V_4)->___y_2);
		Vector3_t58  L_10 = Bounds_get_max_m1958((&___bounds), /*hidden argument*/NULL);
		V_5 = L_10;
		float L_11 = ((&V_5)->___y_2);
		if ((!(((float)L_9) <= ((float)L_11))))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t58  L_12 = Bounds_get_max_m1958(__this, /*hidden argument*/NULL);
		V_6 = L_12;
		float L_13 = ((&V_6)->___y_2);
		Vector3_t58  L_14 = Bounds_get_min_m1944((&___bounds), /*hidden argument*/NULL);
		V_7 = L_14;
		float L_15 = ((&V_7)->___y_2);
		if ((!(((float)L_13) >= ((float)L_15))))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t58  L_16 = Bounds_get_min_m1944(__this, /*hidden argument*/NULL);
		V_8 = L_16;
		float L_17 = ((&V_8)->___z_3);
		Vector3_t58  L_18 = Bounds_get_max_m1958((&___bounds), /*hidden argument*/NULL);
		V_9 = L_18;
		float L_19 = ((&V_9)->___z_3);
		if ((!(((float)L_17) <= ((float)L_19))))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t58  L_20 = Bounds_get_max_m1958(__this, /*hidden argument*/NULL);
		V_10 = L_20;
		float L_21 = ((&V_10)->___z_3);
		Vector3_t58  L_22 = Bounds_get_min_m1944((&___bounds), /*hidden argument*/NULL);
		V_11 = L_22;
		float L_23 = ((&V_11)->___z_3);
		G_B7_0 = ((((int32_t)((!(((float)L_21) >= ((float)L_23)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B7_0 = 0;
	}

IL_00d7:
	{
		return G_B7_0;
	}
}
// System.Boolean UnityEngine.Bounds::Internal_Contains(UnityEngine.Bounds,UnityEngine.Vector3)
extern "C" bool Bounds_Internal_Contains_m2681 (Object_t * __this /* static, unused */, Bounds_t254  ___m, Vector3_t58  ___point, const MethodInfo* method)
{
	{
		bool L_0 = Bounds_INTERNAL_CALL_Internal_Contains_m2682(NULL /*static, unused*/, (&___m), (&___point), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Bounds::INTERNAL_CALL_Internal_Contains(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" bool Bounds_INTERNAL_CALL_Internal_Contains_m2682 (Object_t * __this /* static, unused */, Bounds_t254 * ___m, Vector3_t58 * ___point, const MethodInfo* method)
{
	typedef bool (*Bounds_INTERNAL_CALL_Internal_Contains_m2682_ftn) (Bounds_t254 *, Vector3_t58 *);
	static Bounds_INTERNAL_CALL_Internal_Contains_m2682_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Bounds_INTERNAL_CALL_Internal_Contains_m2682_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_Contains(UnityEngine.Bounds&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___m, ___point);
}
// System.Boolean UnityEngine.Bounds::Contains(UnityEngine.Vector3)
extern "C" bool Bounds_Contains_m2683 (Bounds_t254 * __this, Vector3_t58  ___point, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = ___point;
		bool L_1 = Bounds_Internal_Contains_m2681(NULL /*static, unused*/, (*(Bounds_t254 *)__this), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single UnityEngine.Bounds::Internal_SqrDistance(UnityEngine.Bounds,UnityEngine.Vector3)
extern "C" float Bounds_Internal_SqrDistance_m2684 (Object_t * __this /* static, unused */, Bounds_t254  ___m, Vector3_t58  ___point, const MethodInfo* method)
{
	{
		float L_0 = Bounds_INTERNAL_CALL_Internal_SqrDistance_m2685(NULL /*static, unused*/, (&___m), (&___point), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single UnityEngine.Bounds::INTERNAL_CALL_Internal_SqrDistance(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" float Bounds_INTERNAL_CALL_Internal_SqrDistance_m2685 (Object_t * __this /* static, unused */, Bounds_t254 * ___m, Vector3_t58 * ___point, const MethodInfo* method)
{
	typedef float (*Bounds_INTERNAL_CALL_Internal_SqrDistance_m2685_ftn) (Bounds_t254 *, Vector3_t58 *);
	static Bounds_INTERNAL_CALL_Internal_SqrDistance_m2685_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Bounds_INTERNAL_CALL_Internal_SqrDistance_m2685_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_SqrDistance(UnityEngine.Bounds&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___m, ___point);
}
// System.Single UnityEngine.Bounds::SqrDistance(UnityEngine.Vector3)
extern "C" float Bounds_SqrDistance_m2686 (Bounds_t254 * __this, Vector3_t58  ___point, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = ___point;
		float L_1 = Bounds_Internal_SqrDistance_m2684(NULL /*static, unused*/, (*(Bounds_t254 *)__this), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.Bounds::Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)
extern "C" bool Bounds_Internal_IntersectRay_m2687 (Object_t * __this /* static, unused */, Ray_t350 * ___ray, Bounds_t254 * ___bounds, float* ___distance, const MethodInfo* method)
{
	{
		Ray_t350 * L_0 = ___ray;
		Bounds_t254 * L_1 = ___bounds;
		float* L_2 = ___distance;
		bool L_3 = Bounds_INTERNAL_CALL_Internal_IntersectRay_m2688(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.Bounds::INTERNAL_CALL_Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)
extern "C" bool Bounds_INTERNAL_CALL_Internal_IntersectRay_m2688 (Object_t * __this /* static, unused */, Ray_t350 * ___ray, Bounds_t254 * ___bounds, float* ___distance, const MethodInfo* method)
{
	typedef bool (*Bounds_INTERNAL_CALL_Internal_IntersectRay_m2688_ftn) (Ray_t350 *, Bounds_t254 *, float*);
	static Bounds_INTERNAL_CALL_Internal_IntersectRay_m2688_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Bounds_INTERNAL_CALL_Internal_IntersectRay_m2688_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)");
	return _il2cpp_icall_func(___ray, ___bounds, ___distance);
}
// System.Boolean UnityEngine.Bounds::IntersectRay(UnityEngine.Ray)
extern "C" bool Bounds_IntersectRay_m2689 (Bounds_t254 * __this, Ray_t350  ___ray, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		bool L_0 = Bounds_Internal_IntersectRay_m2687(NULL /*static, unused*/, (&___ray), __this, (&V_0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Bounds::IntersectRay(UnityEngine.Ray,System.Single&)
extern "C" bool Bounds_IntersectRay_m2690 (Bounds_t254 * __this, Ray_t350  ___ray, float* ___distance, const MethodInfo* method)
{
	{
		float* L_0 = ___distance;
		bool L_1 = Bounds_Internal_IntersectRay_m2687(NULL /*static, unused*/, (&___ray), __this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::Internal_GetClosestPoint(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" Vector3_t58  Bounds_Internal_GetClosestPoint_m2691 (Object_t * __this /* static, unused */, Bounds_t254 * ___bounds, Vector3_t58 * ___point, const MethodInfo* method)
{
	{
		Bounds_t254 * L_0 = ___bounds;
		Vector3_t58 * L_1 = ___point;
		Vector3_t58  L_2 = Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m2692(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::INTERNAL_CALL_Internal_GetClosestPoint(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" Vector3_t58  Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m2692 (Object_t * __this /* static, unused */, Bounds_t254 * ___bounds, Vector3_t58 * ___point, const MethodInfo* method)
{
	typedef Vector3_t58  (*Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m2692_ftn) (Bounds_t254 *, Vector3_t58 *);
	static Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m2692_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m2692_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_GetClosestPoint(UnityEngine.Bounds&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___bounds, ___point);
}
// UnityEngine.Vector3 UnityEngine.Bounds::ClosestPoint(UnityEngine.Vector3)
extern "C" Vector3_t58  Bounds_ClosestPoint_m2693 (Bounds_t254 * __this, Vector3_t58  ___point, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = Bounds_Internal_GetClosestPoint_m2691(NULL /*static, unused*/, __this, (&___point), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String UnityEngine.Bounds::ToString()
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t58_il2cpp_TypeInfo_var;
extern "C" String_t* Bounds_ToString_m2694 (Bounds_t254 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		Vector3_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(185);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t73* L_0 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 2));
		Vector3_t58  L_1 = (__this->___m_Center_0);
		Vector3_t58  L_2 = L_1;
		Object_t * L_3 = Box(Vector3_t58_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t73* L_4 = L_0;
		Vector3_t58  L_5 = (__this->___m_Extents_1);
		Vector3_t58  L_6 = L_5;
		Object_t * L_7 = Box(Vector3_t58_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m2796(NULL /*static, unused*/, (String_t*) &_stringLiteral200, L_4, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.String UnityEngine.Bounds::ToString(System.String)
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern "C" String_t* Bounds_ToString_m2695 (Bounds_t254 * __this, String_t* ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t73* L_0 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 2));
		Vector3_t58 * L_1 = &(__this->___m_Center_0);
		String_t* L_2 = ___format;
		String_t* L_3 = Vector3_ToString_m2613(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t73* L_4 = L_0;
		Vector3_t58 * L_5 = &(__this->___m_Extents_1);
		String_t* L_6 = ___format;
		String_t* L_7 = Vector3_ToString_m2613(L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m2796(NULL /*static, unused*/, (String_t*) &_stringLiteral200, L_4, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Boolean UnityEngine.Bounds::op_Equality(UnityEngine.Bounds,UnityEngine.Bounds)
extern "C" bool Bounds_op_Equality_m2696 (Object_t * __this /* static, unused */, Bounds_t254  ___lhs, Bounds_t254  ___rhs, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Vector3_t58  L_0 = Bounds_get_center_m1949((&___lhs), /*hidden argument*/NULL);
		Vector3_t58  L_1 = Bounds_get_center_m1949((&___rhs), /*hidden argument*/NULL);
		bool L_2 = Vector3_op_Equality_m2618(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t58  L_3 = Bounds_get_extents_m2672((&___lhs), /*hidden argument*/NULL);
		Vector3_t58  L_4 = Bounds_get_extents_m2672((&___rhs), /*hidden argument*/NULL);
		bool L_5 = Vector3_op_Equality_m2618(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.Bounds::op_Inequality(UnityEngine.Bounds,UnityEngine.Bounds)
extern "C" bool Bounds_op_Inequality_m1942 (Object_t * __this /* static, unused */, Bounds_t254  ___lhs, Bounds_t254  ___rhs, const MethodInfo* method)
{
	{
		Bounds_t254  L_0 = ___lhs;
		Bounds_t254  L_1 = ___rhs;
		bool L_2 = Bounds_op_Equality_m2696(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Vector4__ctor_m1733 (Vector4_t333 * __this, float ___x, float ___y, float ___z, float ___w, const MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___x_1 = L_0;
		float L_1 = ___y;
		__this->___y_2 = L_1;
		float L_2 = ___z;
		__this->___z_3 = L_2;
		float L_3 = ___w;
		__this->___w_4 = L_3;
		return;
	}
}
// System.Single UnityEngine.Vector4::get_Item(System.Int32)
extern TypeInfo* IndexOutOfRangeException_t745_il2cpp_TypeInfo_var;
extern "C" float Vector4_get_Item_m1804 (Vector4_t333 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(969);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_001d;
		}
		if (L_1 == 1)
		{
			goto IL_0024;
		}
		if (L_1 == 2)
		{
			goto IL_002b;
		}
		if (L_1 == 3)
		{
			goto IL_0032;
		}
	}
	{
		goto IL_0039;
	}

IL_001d:
	{
		float L_2 = (__this->___x_1);
		return L_2;
	}

IL_0024:
	{
		float L_3 = (__this->___y_2);
		return L_3;
	}

IL_002b:
	{
		float L_4 = (__this->___z_3);
		return L_4;
	}

IL_0032:
	{
		float L_5 = (__this->___w_4);
		return L_5;
	}

IL_0039:
	{
		IndexOutOfRangeException_t745 * L_6 = (IndexOutOfRangeException_t745 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t745_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m3529(L_6, (String_t*) &_stringLiteral201, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}
}
// System.Void UnityEngine.Vector4::set_Item(System.Int32,System.Single)
extern TypeInfo* IndexOutOfRangeException_t745_il2cpp_TypeInfo_var;
extern "C" void Vector4_set_Item_m1806 (Vector4_t333 * __this, int32_t ___index, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(969);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_001d;
		}
		if (L_1 == 1)
		{
			goto IL_0029;
		}
		if (L_1 == 2)
		{
			goto IL_0035;
		}
		if (L_1 == 3)
		{
			goto IL_0041;
		}
	}
	{
		goto IL_004d;
	}

IL_001d:
	{
		float L_2 = ___value;
		__this->___x_1 = L_2;
		goto IL_0058;
	}

IL_0029:
	{
		float L_3 = ___value;
		__this->___y_2 = L_3;
		goto IL_0058;
	}

IL_0035:
	{
		float L_4 = ___value;
		__this->___z_3 = L_4;
		goto IL_0058;
	}

IL_0041:
	{
		float L_5 = ___value;
		__this->___w_4 = L_5;
		goto IL_0058;
	}

IL_004d:
	{
		IndexOutOfRangeException_t745 * L_6 = (IndexOutOfRangeException_t745 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t745_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m3529(L_6, (String_t*) &_stringLiteral201, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 UnityEngine.Vector4::GetHashCode()
extern "C" int32_t Vector4_GetHashCode_m2697 (Vector4_t333 * __this, const MethodInfo* method)
{
	{
		float* L_0 = &(__this->___x_1);
		int32_t L_1 = Single_GetHashCode_m3514(L_0, /*hidden argument*/NULL);
		float* L_2 = &(__this->___y_2);
		int32_t L_3 = Single_GetHashCode_m3514(L_2, /*hidden argument*/NULL);
		float* L_4 = &(__this->___z_3);
		int32_t L_5 = Single_GetHashCode_m3514(L_4, /*hidden argument*/NULL);
		float* L_6 = &(__this->___w_4);
		int32_t L_7 = Single_GetHashCode_m3514(L_6, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
// System.Boolean UnityEngine.Vector4::Equals(System.Object)
extern TypeInfo* Vector4_t333_il2cpp_TypeInfo_var;
extern "C" bool Vector4_Equals_m2698 (Vector4_t333 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector4_t333_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(663);
		s_Il2CppMethodIntialized = true;
	}
	Vector4_t333  V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, Vector4_t333_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Vector4_t333 *)((Vector4_t333 *)UnBox (L_1, Vector4_t333_il2cpp_TypeInfo_var))));
		float* L_2 = &(__this->___x_1);
		float L_3 = ((&V_0)->___x_1);
		bool L_4 = Single_Equals_m3530(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		float* L_5 = &(__this->___y_2);
		float L_6 = ((&V_0)->___y_2);
		bool L_7 = Single_Equals_m3530(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		float* L_8 = &(__this->___z_3);
		float L_9 = ((&V_0)->___z_3);
		bool L_10 = Single_Equals_m3530(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		float* L_11 = &(__this->___w_4);
		float L_12 = ((&V_0)->___w_4);
		bool L_13 = Single_Equals_m3530(L_11, L_12, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_006e;
	}

IL_006d:
	{
		G_B7_0 = 0;
	}

IL_006e:
	{
		return G_B7_0;
	}
}
// System.String UnityEngine.Vector4::ToString()
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t345_il2cpp_TypeInfo_var;
extern "C" String_t* Vector4_ToString_m2699 (Vector4_t333 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		Single_t345_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t73* L_0 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 4));
		float L_1 = (__this->___x_1);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t345_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t73* L_4 = L_0;
		float L_5 = (__this->___y_2);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t345_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t73* L_8 = L_4;
		float L_9 = (__this->___z_3);
		float L_10 = L_9;
		Object_t * L_11 = Box(Single_t345_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t73* L_12 = L_8;
		float L_13 = (__this->___w_4);
		float L_14 = L_13;
		Object_t * L_15 = Box(Single_t345_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m2796(NULL /*static, unused*/, (String_t*) &_stringLiteral195, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Single UnityEngine.Vector4::Dot(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" float Vector4_Dot_m2700 (Object_t * __this /* static, unused */, Vector4_t333  ___a, Vector4_t333  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___b)->___z_3);
		float L_6 = ((&___a)->___w_4);
		float L_7 = ((&___b)->___w_4);
		return ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
	}
}
// System.Single UnityEngine.Vector4::SqrMagnitude(UnityEngine.Vector4)
extern "C" float Vector4_SqrMagnitude_m2701 (Object_t * __this /* static, unused */, Vector4_t333  ___a, const MethodInfo* method)
{
	{
		Vector4_t333  L_0 = ___a;
		Vector4_t333  L_1 = ___a;
		float L_2 = Vector4_Dot_m2700(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single UnityEngine.Vector4::get_sqrMagnitude()
extern "C" float Vector4_get_sqrMagnitude_m1783 (Vector4_t333 * __this, const MethodInfo* method)
{
	{
		float L_0 = Vector4_Dot_m2700(NULL /*static, unused*/, (*(Vector4_t333 *)__this), (*(Vector4_t333 *)__this), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
extern "C" Vector4_t333  Vector4_get_zero_m1787 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector4_t333  L_0 = {0};
		Vector4__ctor_m1733(&L_0, (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Subtraction(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" Vector4_t333  Vector4_op_Subtraction_m2702 (Object_t * __this /* static, unused */, Vector4_t333  ___a, Vector4_t333  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___b)->___z_3);
		float L_6 = ((&___a)->___w_4);
		float L_7 = ((&___b)->___w_4);
		Vector4_t333  L_8 = {0};
		Vector4__ctor_m1733(&L_8, ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), ((float)((float)L_4-(float)L_5)), ((float)((float)L_6-(float)L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Division(UnityEngine.Vector4,System.Single)
extern "C" Vector4_t333  Vector4_op_Division_m1800 (Object_t * __this /* static, unused */, Vector4_t333  ___a, float ___d, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		float L_4 = ((&___a)->___z_3);
		float L_5 = ___d;
		float L_6 = ((&___a)->___w_4);
		float L_7 = ___d;
		Vector4_t333  L_8 = {0};
		Vector4__ctor_m1733(&L_8, ((float)((float)L_0/(float)L_1)), ((float)((float)L_2/(float)L_3)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_6/(float)L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" bool Vector4_op_Equality_m2703 (Object_t * __this /* static, unused */, Vector4_t333  ___lhs, Vector4_t333  ___rhs, const MethodInfo* method)
{
	{
		Vector4_t333  L_0 = ___lhs;
		Vector4_t333  L_1 = ___rhs;
		Vector4_t333  L_2 = Vector4_op_Subtraction_m2702(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = Vector4_SqrMagnitude_m2701(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return ((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"



// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Ray__ctor_m2704 (Ray_t350 * __this, Vector3_t58  ___origin, Vector3_t58  ___direction, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = ___origin;
		__this->___m_Origin_0 = L_0;
		Vector3_t58  L_1 = Vector3_get_normalized_m1970((&___direction), /*hidden argument*/NULL);
		__this->___m_Direction_1 = L_1;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
extern "C" Vector3_t58  Ray_get_origin_m1668 (Ray_t350 * __this, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = (__this->___m_Origin_0);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
extern "C" Vector3_t58  Ray_get_direction_m1669 (Ray_t350 * __this, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = (__this->___m_Direction_1);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
extern "C" Vector3_t58  Ray_GetPoint_m1860 (Ray_t350 * __this, float ___distance, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = (__this->___m_Origin_0);
		Vector3_t58  L_1 = (__this->___m_Direction_1);
		float L_2 = ___distance;
		Vector3_t58  L_3 = Vector3_op_Multiply_m222(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t58  L_4 = Vector3_op_Addition_m223(NULL /*static, unused*/, L_0, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String UnityEngine.Ray::ToString()
extern TypeInfo* ObjectU5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t58_il2cpp_TypeInfo_var;
extern "C" String_t* Ray_ToString_m2705 (Ray_t350 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		Vector3_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(185);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t73* L_0 = ((ObjectU5BU5D_t73*)SZArrayNew(ObjectU5BU5D_t73_il2cpp_TypeInfo_var, 2));
		Vector3_t58  L_1 = (__this->___m_Origin_0);
		Vector3_t58  L_2 = L_1;
		Object_t * L_3 = Box(Vector3_t58_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t73* L_4 = L_0;
		Vector3_t58  L_5 = (__this->___m_Direction_1);
		Vector3_t58  L_6 = L_5;
		Object_t * L_7 = Box(Vector3_t58_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m2796(NULL /*static, unused*/, (String_t*) &_stringLiteral202, L_4, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_PlaneMethodDeclarations.h"



// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Plane__ctor_m1858 (Plane_t372 * __this, Vector3_t58  ___inNormal, Vector3_t58  ___inPoint, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = ___inNormal;
		Vector3_t58  L_1 = Vector3_Normalize_m2611(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->___m_Normal_0 = L_1;
		Vector3_t58  L_2 = ___inNormal;
		Vector3_t58  L_3 = ___inPoint;
		float L_4 = Vector3_Dot_m1762(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		__this->___m_Distance_1 = ((-L_4));
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
extern "C" Vector3_t58  Plane_get_normal_m2706 (Plane_t372 * __this, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = (__this->___m_Normal_0);
		return L_0;
	}
}
// System.Single UnityEngine.Plane::get_distance()
extern "C" float Plane_get_distance_m2707 (Plane_t372 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Distance_1);
		return L_0;
	}
}
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
extern TypeInfo* Mathf_t68_il2cpp_TypeInfo_var;
extern "C" bool Plane_Raycast_m1859 (Plane_t372 * __this, Ray_t350  ___ray, float* ___enter, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t68_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		Vector3_t58  L_0 = Ray_get_direction_m1669((&___ray), /*hidden argument*/NULL);
		Vector3_t58  L_1 = Plane_get_normal_m2706(__this, /*hidden argument*/NULL);
		float L_2 = Vector3_Dot_m1762(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_t58  L_3 = Ray_get_origin_m1668((&___ray), /*hidden argument*/NULL);
		Vector3_t58  L_4 = Plane_get_normal_m2706(__this, /*hidden argument*/NULL);
		float L_5 = Vector3_Dot_m1762(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		float L_6 = Plane_get_distance_m2707(__this, /*hidden argument*/NULL);
		V_1 = ((float)((float)((-L_5))-(float)L_6));
		float L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
		bool L_8 = Mathf_Approximately_m1657(NULL /*static, unused*/, L_7, (0.0f), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		float* L_9 = ___enter;
		*((float*)(L_9)) = (float)(0.0f);
		return 0;
	}

IL_0047:
	{
		float* L_10 = ___enter;
		float L_11 = V_1;
		float L_12 = V_0;
		*((float*)(L_10)) = (float)((float)((float)L_11/(float)L_12));
		float* L_13 = ___enter;
		return ((((float)(*((float*)L_13))) > ((float)(0.0f)))? 1 : 0);
	}
}
// UnityEngineInternal.MathfInternal
#include "UnityEngine_UnityEngineInternal_MathfInternal.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngineInternal.MathfInternal
#include "UnityEngine_UnityEngineInternal_MathfInternalMethodDeclarations.h"



// System.Void UnityEngineInternal.MathfInternal::.cctor()
extern TypeInfo* MathfInternal_t537_il2cpp_TypeInfo_var;
extern "C" void MathfInternal__cctor_m2708 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MathfInternal_t537_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(973);
		s_Il2CppMethodIntialized = true;
	}
	{
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t537_StaticFields*)MathfInternal_t537_il2cpp_TypeInfo_var->static_fields)->___FloatMinNormal_0 = (1.17549435E-38f);
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t537_StaticFields*)MathfInternal_t537_il2cpp_TypeInfo_var->static_fields)->___FloatMinDenormal_1 = (1.401298E-45f);
		float L_0 = ((MathfInternal_t537_StaticFields*)MathfInternal_t537_il2cpp_TypeInfo_var->static_fields)->___FloatMinDenormal_1;
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t537_StaticFields*)MathfInternal_t537_il2cpp_TypeInfo_var->static_fields)->___IsFlushToZeroEnabled_2 = ((((float)L_0) == ((float)(0.0f)))? 1 : 0);
		return;
	}
}
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_Mathf.h"
#ifndef _MSC_VER
#else
#endif

// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"


// System.Void UnityEngine.Mathf::.cctor()
extern TypeInfo* MathfInternal_t537_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t68_il2cpp_TypeInfo_var;
extern "C" void Mathf__cctor_m2709 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MathfInternal_t537_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(973);
		Mathf_t68_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	float G_B3_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(MathfInternal_t537_il2cpp_TypeInfo_var);
		bool L_0 = ((MathfInternal_t537_StaticFields*)MathfInternal_t537_il2cpp_TypeInfo_var->static_fields)->___IsFlushToZeroEnabled_2;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MathfInternal_t537_il2cpp_TypeInfo_var);
		float L_1 = ((MathfInternal_t537_StaticFields*)MathfInternal_t537_il2cpp_TypeInfo_var->static_fields)->___FloatMinNormal_0;
		il2cpp_codegen_memory_barrier();
		G_B3_0 = L_1;
		goto IL_001d;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MathfInternal_t537_il2cpp_TypeInfo_var);
		float L_2 = ((MathfInternal_t537_StaticFields*)MathfInternal_t537_il2cpp_TypeInfo_var->static_fields)->___FloatMinDenormal_1;
		il2cpp_codegen_memory_barrier();
		G_B3_0 = L_2;
	}

IL_001d:
	{
		((Mathf_t68_StaticFields*)Mathf_t68_il2cpp_TypeInfo_var->static_fields)->___Epsilon_0 = G_B3_0;
		return;
	}
}
// System.Single UnityEngine.Mathf::Sin(System.Single)
extern "C" float Mathf_Sin_m2710 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = sin((((double)L_0)));
		return (((float)L_1));
	}
}
// System.Single UnityEngine.Mathf::Cos(System.Single)
extern "C" float Mathf_Cos_m2711 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = cos((((double)L_0)));
		return (((float)L_1));
	}
}
// System.Single UnityEngine.Mathf::Sqrt(System.Single)
extern "C" float Mathf_Sqrt_m2712 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = sqrt((((double)L_0)));
		return (((float)L_1));
	}
}
// System.Single UnityEngine.Mathf::Abs(System.Single)
extern "C" float Mathf_Abs_m2713 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		float L_1 = fabsf(L_0);
		return (((float)L_1));
	}
}
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
extern "C" float Mathf_Min_m2014 (Object_t * __this /* static, unused */, float ___a, float ___b, const MethodInfo* method)
{
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a;
		float L_1 = ___b;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_000d;
		}
	}
	{
		float L_2 = ___a;
		G_B3_0 = L_2;
		goto IL_000e;
	}

IL_000d:
	{
		float L_3 = ___b;
		G_B3_0 = L_3;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
extern "C" int32_t Mathf_Min_m1874 (Object_t * __this /* static, unused */, int32_t ___a, int32_t ___b, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a;
		int32_t L_1 = ___b;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_2 = ___a;
		G_B3_0 = L_2;
		goto IL_000e;
	}

IL_000d:
	{
		int32_t L_3 = ___b;
		G_B3_0 = L_3;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C" float Mathf_Max_m1974 (Object_t * __this /* static, unused */, float ___a, float ___b, const MethodInfo* method)
{
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a;
		float L_1 = ___b;
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_000d;
		}
	}
	{
		float L_2 = ___a;
		G_B3_0 = L_2;
		goto IL_000e;
	}

IL_000d:
	{
		float L_3 = ___b;
		G_B3_0 = L_3;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
extern "C" int32_t Mathf_Max_m214 (Object_t * __this /* static, unused */, int32_t ___a, int32_t ___b, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a;
		int32_t L_1 = ___b;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_2 = ___a;
		G_B3_0 = L_2;
		goto IL_000e;
	}

IL_000d:
	{
		int32_t L_3 = ___b;
		G_B3_0 = L_3;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
// System.Single UnityEngine.Mathf::Pow(System.Single,System.Single)
extern "C" float Mathf_Pow_m2714 (Object_t * __this /* static, unused */, float ___f, float ___p, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		float L_1 = ___p;
		double L_2 = pow((((double)L_0)), (((double)L_1)));
		return (((float)L_2));
	}
}
// System.Single UnityEngine.Mathf::Log(System.Single,System.Single)
extern "C" float Mathf_Log_m2013 (Object_t * __this /* static, unused */, float ___f, float ___p, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		float L_1 = ___p;
		double L_2 = Math_Log_m3532(NULL /*static, unused*/, (((double)L_0)), (((double)L_1)), /*hidden argument*/NULL);
		return (((float)L_2));
	}
}
// System.Single UnityEngine.Mathf::Floor(System.Single)
extern "C" float Mathf_Floor_m2715 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = floor((((double)L_0)));
		return (((float)L_1));
	}
}
// System.Single UnityEngine.Mathf::Round(System.Single)
extern "C" float Mathf_Round_m2716 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = round((((double)L_0)));
		return (((float)L_1));
	}
}
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
extern "C" int32_t Mathf_CeilToInt_m2024 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = ceil((((double)L_0)));
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
extern "C" int32_t Mathf_FloorToInt_m297 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = floor((((double)L_0)));
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
extern "C" int32_t Mathf_RoundToInt_m321 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = round((((double)L_0)));
		return (((int32_t)L_1));
	}
}
// System.Single UnityEngine.Mathf::Sign(System.Single)
extern "C" float Mathf_Sign_m1947 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___f;
		if ((!(((float)L_0) >= ((float)(0.0f)))))
		{
			goto IL_0015;
		}
	}
	{
		G_B3_0 = (1.0f);
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = (-1.0f);
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C" float Mathf_Clamp_m1786 (Object_t * __this /* static, unused */, float ___value, float ___min, float ___max, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		float L_1 = ___min;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		float L_2 = ___min;
		___value = L_2;
		goto IL_0019;
	}

IL_000f:
	{
		float L_3 = ___value;
		float L_4 = ___max;
		if ((!(((float)L_3) > ((float)L_4))))
		{
			goto IL_0019;
		}
	}
	{
		float L_5 = ___max;
		___value = L_5;
	}

IL_0019:
	{
		float L_6 = ___value;
		return L_6;
	}
}
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
extern "C" int32_t Mathf_Clamp_m1704 (Object_t * __this /* static, unused */, int32_t ___value, int32_t ___min, int32_t ___max, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		int32_t L_1 = ___min;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_2 = ___min;
		___value = L_2;
		goto IL_0019;
	}

IL_000f:
	{
		int32_t L_3 = ___value;
		int32_t L_4 = ___max;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_5 = ___max;
		___value = L_5;
	}

IL_0019:
	{
		int32_t L_6 = ___value;
		return L_6;
	}
}
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
extern "C" float Mathf_Clamp01_m1780 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		return (0.0f);
	}

IL_0011:
	{
		float L_1 = ___value;
		if ((!(((float)L_1) > ((float)(1.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		return (1.0f);
	}

IL_0022:
	{
		float L_2 = ___value;
		return L_2;
	}
}
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
extern TypeInfo* Mathf_t68_il2cpp_TypeInfo_var;
extern "C" float Mathf_Lerp_m1807 (Object_t * __this /* static, unused */, float ___from, float ___to, float ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t68_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___from;
		float L_1 = ___to;
		float L_2 = ___from;
		float L_3 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
		float L_4 = Mathf_Clamp01_m1780(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return ((float)((float)L_0+(float)((float)((float)((float)((float)L_1-(float)L_2))*(float)L_4))));
	}
}
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
extern TypeInfo* Mathf_t68_il2cpp_TypeInfo_var;
extern "C" bool Mathf_Approximately_m1657 (Object_t * __this /* static, unused */, float ___a, float ___b, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t68_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___b;
		float L_1 = ___a;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
		float L_2 = fabsf(((float)((float)L_0-(float)L_1)));
		float L_3 = ___a;
		float L_4 = fabsf(L_3);
		float L_5 = ___b;
		float L_6 = fabsf(L_5);
		float L_7 = Mathf_Max_m1974(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		float L_8 = ((Mathf_t68_StaticFields*)Mathf_t68_il2cpp_TypeInfo_var->static_fields)->___Epsilon_0;
		float L_9 = Mathf_Max_m1974(NULL /*static, unused*/, ((float)((float)(1.0E-06f)*(float)L_7)), ((float)((float)L_8*(float)(8.0f))), /*hidden argument*/NULL);
		return ((((float)L_2) < ((float)L_9))? 1 : 0);
	}
}
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
extern TypeInfo* Mathf_t68_il2cpp_TypeInfo_var;
extern "C" float Mathf_SmoothDamp_m1940 (Object_t * __this /* static, unused */, float ___current, float ___target, float* ___currentVelocity, float ___smoothTime, float ___maxSpeed, float ___deltaTime, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t68_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		float L_0 = ___smoothTime;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Max_m1974(NULL /*static, unused*/, (0.0001f), L_0, /*hidden argument*/NULL);
		___smoothTime = L_1;
		float L_2 = ___smoothTime;
		V_0 = ((float)((float)(2.0f)/(float)L_2));
		float L_3 = V_0;
		float L_4 = ___deltaTime;
		V_1 = ((float)((float)L_3*(float)L_4));
		float L_5 = V_1;
		float L_6 = V_1;
		float L_7 = V_1;
		float L_8 = V_1;
		float L_9 = V_1;
		float L_10 = V_1;
		V_2 = ((float)((float)(1.0f)/(float)((float)((float)((float)((float)((float)((float)(1.0f)+(float)L_5))+(float)((float)((float)((float)((float)(0.48f)*(float)L_6))*(float)L_7))))+(float)((float)((float)((float)((float)((float)((float)(0.235f)*(float)L_8))*(float)L_9))*(float)L_10))))));
		float L_11 = ___current;
		float L_12 = ___target;
		V_3 = ((float)((float)L_11-(float)L_12));
		float L_13 = ___target;
		V_4 = L_13;
		float L_14 = ___maxSpeed;
		float L_15 = ___smoothTime;
		V_5 = ((float)((float)L_14*(float)L_15));
		float L_16 = V_3;
		float L_17 = V_5;
		float L_18 = V_5;
		float L_19 = Mathf_Clamp_m1786(NULL /*static, unused*/, L_16, ((-L_17)), L_18, /*hidden argument*/NULL);
		V_3 = L_19;
		float L_20 = ___current;
		float L_21 = V_3;
		___target = ((float)((float)L_20-(float)L_21));
		float* L_22 = ___currentVelocity;
		float L_23 = V_0;
		float L_24 = V_3;
		float L_25 = ___deltaTime;
		V_6 = ((float)((float)((float)((float)(*((float*)L_22))+(float)((float)((float)L_23*(float)L_24))))*(float)L_25));
		float* L_26 = ___currentVelocity;
		float* L_27 = ___currentVelocity;
		float L_28 = V_0;
		float L_29 = V_6;
		float L_30 = V_2;
		*((float*)(L_26)) = (float)((float)((float)((float)((float)(*((float*)L_27))-(float)((float)((float)L_28*(float)L_29))))*(float)L_30));
		float L_31 = ___target;
		float L_32 = V_3;
		float L_33 = V_6;
		float L_34 = V_2;
		V_7 = ((float)((float)L_31+(float)((float)((float)((float)((float)L_32+(float)L_33))*(float)L_34))));
		float L_35 = V_4;
		float L_36 = ___current;
		float L_37 = V_7;
		float L_38 = V_4;
		if ((!(((uint32_t)((((float)((float)((float)L_35-(float)L_36))) > ((float)(0.0f)))? 1 : 0)) == ((uint32_t)((((float)L_37) > ((float)L_38))? 1 : 0)))))
		{
			goto IL_00a0;
		}
	}
	{
		float L_39 = V_4;
		V_7 = L_39;
		float* L_40 = ___currentVelocity;
		float L_41 = V_7;
		float L_42 = V_4;
		float L_43 = ___deltaTime;
		*((float*)(L_40)) = (float)((float)((float)((float)((float)L_41-(float)L_42))/(float)L_43));
	}

IL_00a0:
	{
		float L_44 = V_7;
		return L_44;
	}
}
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
extern TypeInfo* Mathf_t68_il2cpp_TypeInfo_var;
extern "C" float Mathf_Repeat_m1817 (Object_t * __this /* static, unused */, float ___t, float ___length, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t68_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___t;
		float L_1 = ___t;
		float L_2 = ___length;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t68_il2cpp_TypeInfo_var);
		float L_3 = floorf(((float)((float)L_1/(float)L_2)));
		float L_4 = ___length;
		return ((float)((float)L_0-(float)((float)((float)L_3*(float)L_4))));
	}
}
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
extern "C" float Mathf_InverseLerp_m1816 (Object_t * __this /* static, unused */, float ___from, float ___to, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___from;
		float L_1 = ___to;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_002f;
		}
	}
	{
		float L_2 = ___value;
		float L_3 = ___from;
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		return (0.0f);
	}

IL_0014:
	{
		float L_4 = ___value;
		float L_5 = ___to;
		if ((!(((float)L_4) > ((float)L_5))))
		{
			goto IL_0021;
		}
	}
	{
		return (1.0f);
	}

IL_0021:
	{
		float L_6 = ___value;
		float L_7 = ___from;
		___value = ((float)((float)L_6-(float)L_7));
		float L_8 = ___value;
		float L_9 = ___to;
		float L_10 = ___from;
		___value = ((float)((float)L_8/(float)((float)((float)L_9-(float)L_10))));
		float L_11 = ___value;
		return L_11;
	}

IL_002f:
	{
		float L_12 = ___from;
		float L_13 = ___to;
		if ((!(((float)L_12) > ((float)L_13))))
		{
			goto IL_005e;
		}
	}
	{
		float L_14 = ___value;
		float L_15 = ___to;
		if ((!(((float)L_14) < ((float)L_15))))
		{
			goto IL_0043;
		}
	}
	{
		return (1.0f);
	}

IL_0043:
	{
		float L_16 = ___value;
		float L_17 = ___from;
		if ((!(((float)L_16) > ((float)L_17))))
		{
			goto IL_0050;
		}
	}
	{
		return (0.0f);
	}

IL_0050:
	{
		float L_18 = ___value;
		float L_19 = ___to;
		float L_20 = ___from;
		float L_21 = ___to;
		return ((float)((float)(1.0f)-(float)((float)((float)((float)((float)L_18-(float)L_19))/(float)((float)((float)L_20-(float)L_21))))));
	}

IL_005e:
	{
		return (0.0f);
	}
}
// UnityEngine.DrivenTransformProperties
#include "UnityEngine_UnityEngine_DrivenTransformProperties.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.DrivenTransformProperties
#include "UnityEngine_UnityEngine_DrivenTransformPropertiesMethodDeclarations.h"



// UnityEngine.DrivenRectTransformTracker
#include "UnityEngine_UnityEngine_DrivenRectTransformTracker.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.DrivenRectTransformTracker
#include "UnityEngine_UnityEngine_DrivenRectTransformTrackerMethodDeclarations.h"

// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"


// System.Void UnityEngine.DrivenRectTransformTracker::Add(UnityEngine.Object,UnityEngine.RectTransform,UnityEngine.DrivenTransformProperties)
extern "C" void DrivenRectTransformTracker_Add_m1930 (DrivenRectTransformTracker_t248 * __this, Object_t67 * ___driver, RectTransform_t70 * ___rectTransform, int32_t ___drivenProperties, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.DrivenRectTransformTracker::Clear()
extern "C" void DrivenRectTransformTracker_Clear_m1928 (DrivenRectTransformTracker_t248 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// UnityEngine.RectTransform/Edge
#include "UnityEngine_UnityEngine_RectTransform_Edge.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RectTransform/Edge
#include "UnityEngine_UnityEngine_RectTransform_EdgeMethodDeclarations.h"



// UnityEngine.RectTransform/Axis
#include "UnityEngine_UnityEngine_RectTransform_Axis.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RectTransform/Axis
#include "UnityEngine_UnityEngine_RectTransform_AxisMethodDeclarations.h"



// UnityEngine.RectTransform/ReapplyDrivenProperties
#include "UnityEngine_UnityEngine_RectTransform_ReapplyDrivenPropertie.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RectTransform/ReapplyDrivenProperties
#include "UnityEngine_UnityEngine_RectTransform_ReapplyDrivenPropertieMethodDeclarations.h"



// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::.ctor(System.Object,System.IntPtr)
extern "C" void ReapplyDrivenProperties__ctor_m2040 (ReapplyDrivenProperties_t391 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::Invoke(UnityEngine.RectTransform)
extern "C" void ReapplyDrivenProperties_Invoke_m2717 (ReapplyDrivenProperties_t391 * __this, RectTransform_t70 * ___driven, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ReapplyDrivenProperties_Invoke_m2717((ReapplyDrivenProperties_t391 *)__this->___prev_9,___driven, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, RectTransform_t70 * ___driven, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___driven,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, RectTransform_t70 * ___driven, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___driven,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___driven,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_ReapplyDrivenProperties_t391(Il2CppObject* delegate, RectTransform_t70 * ___driven)
{
	// Marshaling of parameter '___driven' to native representation
	RectTransform_t70 * ____driven_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnityEngine.RectTransform'."));
}
// System.IAsyncResult UnityEngine.RectTransform/ReapplyDrivenProperties::BeginInvoke(UnityEngine.RectTransform,System.AsyncCallback,System.Object)
extern "C" Object_t * ReapplyDrivenProperties_BeginInvoke_m2718 (ReapplyDrivenProperties_t391 * __this, RectTransform_t70 * ___driven, AsyncCallback_t224 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___driven;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::EndInvoke(System.IAsyncResult)
extern "C" void ReapplyDrivenProperties_EndInvoke_m2719 (ReapplyDrivenProperties_t391 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"

// System.Delegate
#include "mscorlib_System_Delegate.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"


// System.Void UnityEngine.RectTransform::add_reapplyDrivenProperties(UnityEngine.RectTransform/ReapplyDrivenProperties)
extern TypeInfo* RectTransform_t70_il2cpp_TypeInfo_var;
extern TypeInfo* ReapplyDrivenProperties_t391_il2cpp_TypeInfo_var;
extern "C" void RectTransform_add_reapplyDrivenProperties_m2041 (Object_t * __this /* static, unused */, ReapplyDrivenProperties_t391 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t70_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		ReapplyDrivenProperties_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(375);
		s_Il2CppMethodIntialized = true;
	}
	{
		ReapplyDrivenProperties_t391 * L_0 = ((RectTransform_t70_StaticFields*)RectTransform_t70_il2cpp_TypeInfo_var->static_fields)->___reapplyDrivenProperties_2;
		ReapplyDrivenProperties_t391 * L_1 = ___value;
		Delegate_t361 * L_2 = Delegate_Combine_m1746(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((RectTransform_t70_StaticFields*)RectTransform_t70_il2cpp_TypeInfo_var->static_fields)->___reapplyDrivenProperties_2 = ((ReapplyDrivenProperties_t391 *)Castclass(L_2, ReapplyDrivenProperties_t391_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.RectTransform::remove_reapplyDrivenProperties(UnityEngine.RectTransform/ReapplyDrivenProperties)
extern TypeInfo* RectTransform_t70_il2cpp_TypeInfo_var;
extern TypeInfo* ReapplyDrivenProperties_t391_il2cpp_TypeInfo_var;
extern "C" void RectTransform_remove_reapplyDrivenProperties_m2720 (Object_t * __this /* static, unused */, ReapplyDrivenProperties_t391 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t70_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		ReapplyDrivenProperties_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(375);
		s_Il2CppMethodIntialized = true;
	}
	{
		ReapplyDrivenProperties_t391 * L_0 = ((RectTransform_t70_StaticFields*)RectTransform_t70_il2cpp_TypeInfo_var->static_fields)->___reapplyDrivenProperties_2;
		ReapplyDrivenProperties_t391 * L_1 = ___value;
		Delegate_t361 * L_2 = Delegate_Remove_m1747(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((RectTransform_t70_StaticFields*)RectTransform_t70_il2cpp_TypeInfo_var->static_fields)->___reapplyDrivenProperties_2 = ((ReapplyDrivenProperties_t391 *)Castclass(L_2, ReapplyDrivenProperties_t391_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.RectTransform::INTERNAL_get_rect(UnityEngine.Rect&)
extern "C" void RectTransform_INTERNAL_get_rect_m2721 (RectTransform_t70 * __this, Rect_t230 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_get_rect_m2721_ftn) (RectTransform_t70 *, Rect_t230 *);
	static RectTransform_INTERNAL_get_rect_m2721_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_get_rect_m2721_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_rect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
extern "C" Rect_t230  RectTransform_get_rect_m1725 (RectTransform_t70 * __this, const MethodInfo* method)
{
	Rect_t230  V_0 = {0};
	{
		RectTransform_INTERNAL_get_rect_m2721(__this, (&V_0), /*hidden argument*/NULL);
		Rect_t230  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RectTransform::INTERNAL_get_anchorMin(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_get_anchorMin_m2722 (RectTransform_t70 * __this, Vector2_t38 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_get_anchorMin_m2722_ftn) (RectTransform_t70 *, Vector2_t38 *);
	static RectTransform_INTERNAL_get_anchorMin_m2722_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_get_anchorMin_m2722_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_anchorMin(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.RectTransform::INTERNAL_set_anchorMin(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_set_anchorMin_m2723 (RectTransform_t70 * __this, Vector2_t38 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_set_anchorMin_m2723_ftn) (RectTransform_t70 *, Vector2_t38 *);
	static RectTransform_INTERNAL_set_anchorMin_m2723_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_set_anchorMin_m2723_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_anchorMin(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchorMin()
extern "C" Vector2_t38  RectTransform_get_anchorMin_m1795 (RectTransform_t70 * __this, const MethodInfo* method)
{
	Vector2_t38  V_0 = {0};
	{
		RectTransform_INTERNAL_get_anchorMin_m2722(__this, (&V_0), /*hidden argument*/NULL);
		Vector2_t38  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
extern "C" void RectTransform_set_anchorMin_m1900 (RectTransform_t70 * __this, Vector2_t38  ___value, const MethodInfo* method)
{
	{
		RectTransform_INTERNAL_set_anchorMin_m2723(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransform::INTERNAL_get_anchorMax(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_get_anchorMax_m2724 (RectTransform_t70 * __this, Vector2_t38 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_get_anchorMax_m2724_ftn) (RectTransform_t70 *, Vector2_t38 *);
	static RectTransform_INTERNAL_get_anchorMax_m2724_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_get_anchorMax_m2724_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_anchorMax(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.RectTransform::INTERNAL_set_anchorMax(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_set_anchorMax_m2725 (RectTransform_t70 * __this, Vector2_t38 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_set_anchorMax_m2725_ftn) (RectTransform_t70 *, Vector2_t38 *);
	static RectTransform_INTERNAL_set_anchorMax_m2725_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_set_anchorMax_m2725_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_anchorMax(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchorMax()
extern "C" Vector2_t38  RectTransform_get_anchorMax_m1895 (RectTransform_t70 * __this, const MethodInfo* method)
{
	Vector2_t38  V_0 = {0};
	{
		RectTransform_INTERNAL_get_anchorMax_m2724(__this, (&V_0), /*hidden argument*/NULL);
		Vector2_t38  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
extern "C" void RectTransform_set_anchorMax_m1796 (RectTransform_t70 * __this, Vector2_t38  ___value, const MethodInfo* method)
{
	{
		RectTransform_INTERNAL_set_anchorMax_m2725(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransform::INTERNAL_get_anchoredPosition(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_get_anchoredPosition_m2726 (RectTransform_t70 * __this, Vector2_t38 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_get_anchoredPosition_m2726_ftn) (RectTransform_t70 *, Vector2_t38 *);
	static RectTransform_INTERNAL_get_anchoredPosition_m2726_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_get_anchoredPosition_m2726_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_anchoredPosition(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.RectTransform::INTERNAL_set_anchoredPosition(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_set_anchoredPosition_m2727 (RectTransform_t70 * __this, Vector2_t38 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_set_anchoredPosition_m2727_ftn) (RectTransform_t70 *, Vector2_t38 *);
	static RectTransform_INTERNAL_set_anchoredPosition_m2727_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_set_anchoredPosition_m2727_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_anchoredPosition(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
extern "C" Vector2_t38  RectTransform_get_anchoredPosition_m1896 (RectTransform_t70 * __this, const MethodInfo* method)
{
	Vector2_t38  V_0 = {0};
	{
		RectTransform_INTERNAL_get_anchoredPosition_m2726(__this, (&V_0), /*hidden argument*/NULL);
		Vector2_t38  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
extern "C" void RectTransform_set_anchoredPosition_m1901 (RectTransform_t70 * __this, Vector2_t38  ___value, const MethodInfo* method)
{
	{
		RectTransform_INTERNAL_set_anchoredPosition_m2727(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransform::INTERNAL_get_sizeDelta(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_get_sizeDelta_m2728 (RectTransform_t70 * __this, Vector2_t38 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_get_sizeDelta_m2728_ftn) (RectTransform_t70 *, Vector2_t38 *);
	static RectTransform_INTERNAL_get_sizeDelta_m2728_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_get_sizeDelta_m2728_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_sizeDelta(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.RectTransform::INTERNAL_set_sizeDelta(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_set_sizeDelta_m2729 (RectTransform_t70 * __this, Vector2_t38 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_set_sizeDelta_m2729_ftn) (RectTransform_t70 *, Vector2_t38 *);
	static RectTransform_INTERNAL_set_sizeDelta_m2729_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_set_sizeDelta_m2729_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_sizeDelta(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
extern "C" Vector2_t38  RectTransform_get_sizeDelta_m1897 (RectTransform_t70 * __this, const MethodInfo* method)
{
	Vector2_t38  V_0 = {0};
	{
		RectTransform_INTERNAL_get_sizeDelta_m2728(__this, (&V_0), /*hidden argument*/NULL);
		Vector2_t38  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
extern "C" void RectTransform_set_sizeDelta_m1797 (RectTransform_t70 * __this, Vector2_t38  ___value, const MethodInfo* method)
{
	{
		RectTransform_INTERNAL_set_sizeDelta_m2729(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransform::INTERNAL_get_pivot(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_get_pivot_m2730 (RectTransform_t70 * __this, Vector2_t38 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_get_pivot_m2730_ftn) (RectTransform_t70 *, Vector2_t38 *);
	static RectTransform_INTERNAL_get_pivot_m2730_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_get_pivot_m2730_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_pivot(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.RectTransform::INTERNAL_set_pivot(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_set_pivot_m2731 (RectTransform_t70 * __this, Vector2_t38 * ___value, const MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_set_pivot_m2731_ftn) (RectTransform_t70 *, Vector2_t38 *);
	static RectTransform_INTERNAL_set_pivot_m2731_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_set_pivot_m2731_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_pivot(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_pivot()
extern "C" Vector2_t38  RectTransform_get_pivot_m1791 (RectTransform_t70 * __this, const MethodInfo* method)
{
	Vector2_t38  V_0 = {0};
	{
		RectTransform_INTERNAL_get_pivot_m2730(__this, (&V_0), /*hidden argument*/NULL);
		Vector2_t38  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
extern "C" void RectTransform_set_pivot_m1902 (RectTransform_t70 * __this, Vector2_t38  ___value, const MethodInfo* method)
{
	{
		RectTransform_INTERNAL_set_pivot_m2731(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransform::SendReapplyDrivenProperties(UnityEngine.RectTransform)
extern TypeInfo* RectTransform_t70_il2cpp_TypeInfo_var;
extern "C" void RectTransform_SendReapplyDrivenProperties_m2732 (Object_t * __this /* static, unused */, RectTransform_t70 * ___driven, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t70_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		s_Il2CppMethodIntialized = true;
	}
	{
		ReapplyDrivenProperties_t391 * L_0 = ((RectTransform_t70_StaticFields*)RectTransform_t70_il2cpp_TypeInfo_var->static_fields)->___reapplyDrivenProperties_2;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		ReapplyDrivenProperties_t391 * L_1 = ((RectTransform_t70_StaticFields*)RectTransform_t70_il2cpp_TypeInfo_var->static_fields)->___reapplyDrivenProperties_2;
		RectTransform_t70 * L_2 = ___driven;
		NullCheck(L_1);
		VirtActionInvoker1< RectTransform_t70 * >::Invoke(10 /* System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::Invoke(UnityEngine.RectTransform) */, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.RectTransform::GetLocalCorners(UnityEngine.Vector3[])
extern "C" void RectTransform_GetLocalCorners_m2733 (RectTransform_t70 * __this, Vector3U5BU5D_t252* ___fourCornersArray, const MethodInfo* method)
{
	Rect_t230  V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		Vector3U5BU5D_t252* L_0 = ___fourCornersArray;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		Vector3U5BU5D_t252* L_1 = ___fourCornersArray;
		NullCheck(L_1);
		if ((((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))) >= ((int32_t)4)))
		{
			goto IL_001a;
		}
	}

IL_000f:
	{
		Debug_LogError_m1570(NULL /*static, unused*/, (String_t*) &_stringLiteral203, /*hidden argument*/NULL);
		return;
	}

IL_001a:
	{
		Rect_t230  L_2 = RectTransform_get_rect_m1725(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Rect_get_x_m1731((&V_0), /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = Rect_get_y_m1732((&V_0), /*hidden argument*/NULL);
		V_2 = L_4;
		float L_5 = Rect_get_xMax_m1811((&V_0), /*hidden argument*/NULL);
		V_3 = L_5;
		float L_6 = Rect_get_yMax_m1812((&V_0), /*hidden argument*/NULL);
		V_4 = L_6;
		Vector3U5BU5D_t252* L_7 = ___fourCornersArray;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		float L_8 = V_1;
		float L_9 = V_2;
		Vector3_t58  L_10 = {0};
		Vector3__ctor_m312(&L_10, L_8, L_9, (0.0f), /*hidden argument*/NULL);
		*((Vector3_t58 *)(Vector3_t58 *)SZArrayLdElema(L_7, 0)) = L_10;
		Vector3U5BU5D_t252* L_11 = ___fourCornersArray;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 1);
		float L_12 = V_1;
		float L_13 = V_4;
		Vector3_t58  L_14 = {0};
		Vector3__ctor_m312(&L_14, L_12, L_13, (0.0f), /*hidden argument*/NULL);
		*((Vector3_t58 *)(Vector3_t58 *)SZArrayLdElema(L_11, 1)) = L_14;
		Vector3U5BU5D_t252* L_15 = ___fourCornersArray;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 2);
		float L_16 = V_3;
		float L_17 = V_4;
		Vector3_t58  L_18 = {0};
		Vector3__ctor_m312(&L_18, L_16, L_17, (0.0f), /*hidden argument*/NULL);
		*((Vector3_t58 *)(Vector3_t58 *)SZArrayLdElema(L_15, 2)) = L_18;
		Vector3U5BU5D_t252* L_19 = ___fourCornersArray;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 3);
		float L_20 = V_3;
		float L_21 = V_2;
		Vector3_t58  L_22 = {0};
		Vector3__ctor_m312(&L_22, L_20, L_21, (0.0f), /*hidden argument*/NULL);
		*((Vector3_t58 *)(Vector3_t58 *)SZArrayLdElema(L_19, 3)) = L_22;
		return;
	}
}
// System.Void UnityEngine.RectTransform::GetWorldCorners(UnityEngine.Vector3[])
extern "C" void RectTransform_GetWorldCorners_m1953 (RectTransform_t70 * __this, Vector3U5BU5D_t252* ___fourCornersArray, const MethodInfo* method)
{
	Transform_t66 * V_0 = {0};
	int32_t V_1 = 0;
	{
		Vector3U5BU5D_t252* L_0 = ___fourCornersArray;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		Vector3U5BU5D_t252* L_1 = ___fourCornersArray;
		NullCheck(L_1);
		if ((((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))) >= ((int32_t)4)))
		{
			goto IL_001a;
		}
	}

IL_000f:
	{
		Debug_LogError_m1570(NULL /*static, unused*/, (String_t*) &_stringLiteral204, /*hidden argument*/NULL);
		return;
	}

IL_001a:
	{
		Vector3U5BU5D_t252* L_2 = ___fourCornersArray;
		RectTransform_GetLocalCorners_m2733(__this, L_2, /*hidden argument*/NULL);
		Transform_t66 * L_3 = Component_get_transform_m197(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0051;
	}

IL_002f:
	{
		Vector3U5BU5D_t252* L_4 = ___fourCornersArray;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		Transform_t66 * L_6 = V_0;
		Vector3U5BU5D_t252* L_7 = ___fourCornersArray;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		NullCheck(L_6);
		Vector3_t58  L_9 = Transform_TransformPoint_m1972(L_6, (*(Vector3_t58 *)((Vector3_t58 *)(Vector3_t58 *)SZArrayLdElema(L_7, L_8))), /*hidden argument*/NULL);
		*((Vector3_t58 *)(Vector3_t58 *)SZArrayLdElema(L_4, L_5)) = L_9;
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0051:
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) < ((int32_t)4)))
		{
			goto IL_002f;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.RectTransform::SetInsetAndSizeFromParentEdge(UnityEngine.RectTransform/Edge,System.Single,System.Single)
extern "C" void RectTransform_SetInsetAndSizeFromParentEdge_m2039 (RectTransform_t70 * __this, int32_t ___edge, float ___inset, float ___size, const MethodInfo* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	float V_2 = 0.0f;
	Vector2_t38  V_3 = {0};
	Vector2_t38  V_4 = {0};
	Vector2_t38  V_5 = {0};
	Vector2_t38  V_6 = {0};
	Vector2_t38  V_7 = {0};
	int32_t G_B4_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	Vector2_t38 * G_B12_1 = {0};
	int32_t G_B11_0 = 0;
	Vector2_t38 * G_B11_1 = {0};
	float G_B13_0 = 0.0f;
	int32_t G_B13_1 = 0;
	Vector2_t38 * G_B13_2 = {0};
	{
		int32_t L_0 = ___edge;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = ___edge;
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_0014;
		}
	}

IL_000e:
	{
		G_B4_0 = 1;
		goto IL_0015;
	}

IL_0014:
	{
		G_B4_0 = 0;
	}

IL_0015:
	{
		V_0 = G_B4_0;
		int32_t L_2 = ___edge;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = ___edge;
		G_B7_0 = ((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B7_0 = 1;
	}

IL_0024:
	{
		V_1 = G_B7_0;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		G_B10_0 = 1;
		goto IL_0032;
	}

IL_0031:
	{
		G_B10_0 = 0;
	}

IL_0032:
	{
		V_2 = (((float)G_B10_0));
		Vector2_t38  L_5 = RectTransform_get_anchorMin_m1795(__this, /*hidden argument*/NULL);
		V_3 = L_5;
		int32_t L_6 = V_0;
		float L_7 = V_2;
		Vector2_set_Item_m1815((&V_3), L_6, L_7, /*hidden argument*/NULL);
		Vector2_t38  L_8 = V_3;
		RectTransform_set_anchorMin_m1900(__this, L_8, /*hidden argument*/NULL);
		Vector2_t38  L_9 = RectTransform_get_anchorMax_m1895(__this, /*hidden argument*/NULL);
		V_3 = L_9;
		int32_t L_10 = V_0;
		float L_11 = V_2;
		Vector2_set_Item_m1815((&V_3), L_10, L_11, /*hidden argument*/NULL);
		Vector2_t38  L_12 = V_3;
		RectTransform_set_anchorMax_m1796(__this, L_12, /*hidden argument*/NULL);
		Vector2_t38  L_13 = RectTransform_get_sizeDelta_m1897(__this, /*hidden argument*/NULL);
		V_4 = L_13;
		int32_t L_14 = V_0;
		float L_15 = ___size;
		Vector2_set_Item_m1815((&V_4), L_14, L_15, /*hidden argument*/NULL);
		Vector2_t38  L_16 = V_4;
		RectTransform_set_sizeDelta_m1797(__this, L_16, /*hidden argument*/NULL);
		Vector2_t38  L_17 = RectTransform_get_anchoredPosition_m1896(__this, /*hidden argument*/NULL);
		V_5 = L_17;
		int32_t L_18 = V_0;
		bool L_19 = V_1;
		G_B11_0 = L_18;
		G_B11_1 = (&V_5);
		if (!L_19)
		{
			G_B12_0 = L_18;
			G_B12_1 = (&V_5);
			goto IL_00ac;
		}
	}
	{
		float L_20 = ___inset;
		float L_21 = ___size;
		Vector2_t38  L_22 = RectTransform_get_pivot_m1791(__this, /*hidden argument*/NULL);
		V_6 = L_22;
		int32_t L_23 = V_0;
		float L_24 = Vector2_get_Item_m1805((&V_6), L_23, /*hidden argument*/NULL);
		G_B13_0 = ((float)((float)((-L_20))-(float)((float)((float)L_21*(float)((float)((float)(1.0f)-(float)L_24))))));
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_00c0;
	}

IL_00ac:
	{
		float L_25 = ___inset;
		float L_26 = ___size;
		Vector2_t38  L_27 = RectTransform_get_pivot_m1791(__this, /*hidden argument*/NULL);
		V_7 = L_27;
		int32_t L_28 = V_0;
		float L_29 = Vector2_get_Item_m1805((&V_7), L_28, /*hidden argument*/NULL);
		G_B13_0 = ((float)((float)L_25+(float)((float)((float)L_26*(float)L_29))));
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_00c0:
	{
		Vector2_set_Item_m1815(G_B13_2, G_B13_1, G_B13_0, /*hidden argument*/NULL);
		Vector2_t38  L_30 = V_5;
		RectTransform_set_anchoredPosition_m1901(__this, L_30, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransform::SetSizeWithCurrentAnchors(UnityEngine.RectTransform/Axis,System.Single)
extern "C" void RectTransform_SetSizeWithCurrentAnchors_m2011 (RectTransform_t70 * __this, int32_t ___axis, float ___size, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Vector2_t38  V_1 = {0};
	Vector2_t38  V_2 = {0};
	Vector2_t38  V_3 = {0};
	Vector2_t38  V_4 = {0};
	{
		int32_t L_0 = ___axis;
		V_0 = L_0;
		Vector2_t38  L_1 = RectTransform_get_sizeDelta_m1897(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = V_0;
		float L_3 = ___size;
		Vector2_t38  L_4 = RectTransform_GetParentSize_m2734(__this, /*hidden argument*/NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		float L_6 = Vector2_get_Item_m1805((&V_2), L_5, /*hidden argument*/NULL);
		Vector2_t38  L_7 = RectTransform_get_anchorMax_m1895(__this, /*hidden argument*/NULL);
		V_3 = L_7;
		int32_t L_8 = V_0;
		float L_9 = Vector2_get_Item_m1805((&V_3), L_8, /*hidden argument*/NULL);
		Vector2_t38  L_10 = RectTransform_get_anchorMin_m1795(__this, /*hidden argument*/NULL);
		V_4 = L_10;
		int32_t L_11 = V_0;
		float L_12 = Vector2_get_Item_m1805((&V_4), L_11, /*hidden argument*/NULL);
		Vector2_set_Item_m1815((&V_1), L_2, ((float)((float)L_3-(float)((float)((float)L_6*(float)((float)((float)L_9-(float)L_12)))))), /*hidden argument*/NULL);
		Vector2_t38  L_13 = V_1;
		RectTransform_set_sizeDelta_m1797(__this, L_13, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.RectTransform::GetParentSize()
extern TypeInfo* RectTransform_t70_il2cpp_TypeInfo_var;
extern "C" Vector2_t38  RectTransform_GetParentSize_m2734 (RectTransform_t70 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t70_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		s_Il2CppMethodIntialized = true;
	}
	RectTransform_t70 * V_0 = {0};
	Rect_t230  V_1 = {0};
	{
		Transform_t66 * L_0 = Transform_get_parent_m1604(__this, /*hidden argument*/NULL);
		V_0 = ((RectTransform_t70 *)IsInst(L_0, RectTransform_t70_il2cpp_TypeInfo_var));
		RectTransform_t70 * L_1 = V_0;
		bool L_2 = Object_op_Implicit_m1569(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		Vector2_t38  L_3 = Vector2_get_zero_m195(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_3;
	}

IL_001d:
	{
		RectTransform_t70 * L_4 = V_0;
		NullCheck(L_4);
		Rect_t230  L_5 = RectTransform_get_rect_m1725(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		Vector2_t38  L_6 = Rect_get_size_m1801((&V_1), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.ResourceRequest
#include "UnityEngine_UnityEngine_ResourceRequest.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.ResourceRequest
#include "UnityEngine_UnityEngine_ResourceRequestMethodDeclarations.h"

// UnityEngine.Resources
#include "UnityEngine_UnityEngine_ResourcesMethodDeclarations.h"


// System.Void UnityEngine.ResourceRequest::.ctor()
extern "C" void ResourceRequest__ctor_m2735 (ResourceRequest_t541 * __this, const MethodInfo* method)
{
	{
		AsyncOperation__ctor_m2797(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.ResourceRequest::get_asset()
extern "C" Object_t67 * ResourceRequest_get_asset_m2736 (ResourceRequest_t541 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Path_1);
		Type_t * L_1 = (__this->___m_Type_2);
		Object_t67 * L_2 = Resources_Load_m2737(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Resources
#include "UnityEngine_UnityEngine_Resources.h"
#ifndef _MSC_VER
#else
#endif



// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
extern "C" Object_t67 * Resources_Load_m2737 (Object_t * __this /* static, unused */, String_t* ___path, Type_t * ___systemTypeInstance, const MethodInfo* method)
{
	typedef Object_t67 * (*Resources_Load_m2737_ftn) (String_t*, Type_t *);
	static Resources_Load_m2737_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Resources_Load_m2737_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Resources::Load(System.String,System.Type)");
	return _il2cpp_icall_func(___path, ___systemTypeInstance);
}
// UnityEngine.SerializePrivateVariables
#include "UnityEngine_UnityEngine_SerializePrivateVariables.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SerializePrivateVariables
#include "UnityEngine_UnityEngine_SerializePrivateVariablesMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"


// System.Void UnityEngine.SerializePrivateVariables::.ctor()
extern "C" void SerializePrivateVariables__ctor_m2738 (SerializePrivateVariables_t543 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3533(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"



// System.Void UnityEngine.SerializeField::.ctor()
extern "C" void SerializeField__ctor_m2087 (SerializeField_t410 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3533(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_Shader.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_ShaderMethodDeclarations.h"



// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
extern "C" int32_t Shader_PropertyToID_m2739 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	typedef int32_t (*Shader_PropertyToID_m2739_ftn) (String_t*);
	static Shader_PropertyToID_m2739_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Shader_PropertyToID_m2739_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Shader::PropertyToID(System.String)");
	return _il2cpp_icall_func(___name);
}
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"



// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern "C" void Material__ctor_m1986 (Material_t192 * __this, Material_t192 * ___source, const MethodInfo* method)
{
	{
		Object__ctor_m2872(__this, /*hidden argument*/NULL);
		Material_t192 * L_0 = ___source;
		Material_Internal_CreateWithMaterial_m2745(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
extern "C" Texture_t240 * Material_get_mainTexture_m1992 (Material_t192 * __this, const MethodInfo* method)
{
	{
		Texture_t240 * L_0 = Material_GetTexture_m2740(__this, (String_t*) &_stringLiteral205, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
extern "C" Texture_t240 * Material_GetTexture_m2740 (Material_t192 * __this, String_t* ___propertyName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = Shader_PropertyToID_m2739(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Texture_t240 * L_2 = Material_GetTexture_m2741(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.Int32)
extern "C" Texture_t240 * Material_GetTexture_m2741 (Material_t192 * __this, int32_t ___nameID, const MethodInfo* method)
{
	typedef Texture_t240 * (*Material_GetTexture_m2741_ftn) (Material_t192 *, int32_t);
	static Material_GetTexture_m2741_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_GetTexture_m2741_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::GetTexture(System.Int32)");
	return _il2cpp_icall_func(__this, ___nameID);
}
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
extern "C" void Material_SetFloat_m2742 (Material_t192 * __this, String_t* ___propertyName, float ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = Shader_PropertyToID_m2739(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		float L_2 = ___value;
		Material_SetFloat_m2743(__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
extern "C" void Material_SetFloat_m2743 (Material_t192 * __this, int32_t ___nameID, float ___value, const MethodInfo* method)
{
	typedef void (*Material_SetFloat_m2743_ftn) (Material_t192 *, int32_t, float);
	static Material_SetFloat_m2743_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_SetFloat_m2743_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::SetFloat(System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___nameID, ___value);
}
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
extern "C" void Material_SetInt_m1988 (Material_t192 * __this, String_t* ___propertyName, int32_t ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = ___value;
		Material_SetFloat_m2742(__this, L_0, (((float)L_1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Material::HasProperty(System.String)
extern "C" bool Material_HasProperty_m1984 (Material_t192 * __this, String_t* ___propertyName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = Shader_PropertyToID_m2739(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		bool L_2 = Material_HasProperty_m2744(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.Material::HasProperty(System.Int32)
extern "C" bool Material_HasProperty_m2744 (Material_t192 * __this, int32_t ___nameID, const MethodInfo* method)
{
	typedef bool (*Material_HasProperty_m2744_ftn) (Material_t192 *, int32_t);
	static Material_HasProperty_m2744_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_HasProperty_m2744_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::HasProperty(System.Int32)");
	return _il2cpp_icall_func(__this, ___nameID);
}
// System.Void UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
extern "C" void Material_Internal_CreateWithMaterial_m2745 (Object_t * __this /* static, unused */, Material_t192 * ___mono, Material_t192 * ___source, const MethodInfo* method)
{
	typedef void (*Material_Internal_CreateWithMaterial_m2745_ftn) (Material_t192 *, Material_t192 *);
	static Material_Internal_CreateWithMaterial_m2745_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_Internal_CreateWithMaterial_m2745_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)");
	_il2cpp_icall_func(___mono, ___source);
}
// UnityEngine.Rendering.SphericalHarmonicsL2
#include "UnityEngine_UnityEngine_Rendering_SphericalHarmonicsL2.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Rendering.SphericalHarmonicsL2
#include "UnityEngine_UnityEngine_Rendering_SphericalHarmonicsL2MethodDeclarations.h"



// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::Clear()
extern "C" void SphericalHarmonicsL2_Clear_m2746 (SphericalHarmonicsL2_t546 * __this, const MethodInfo* method)
{
	{
		SphericalHarmonicsL2_ClearInternal_m2747(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_ClearInternal_m2747 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t546 * ___sh, const MethodInfo* method)
{
	{
		SphericalHarmonicsL2_t546 * L_0 = ___sh;
		SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m2748(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m2748 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t546 * ___sh, const MethodInfo* method)
{
	typedef void (*SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m2748_ftn) (SphericalHarmonicsL2_t546 *);
	static SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m2748_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m2748_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(___sh);
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddAmbientLight(UnityEngine.Color)
extern "C" void SphericalHarmonicsL2_AddAmbientLight_m2749 (SphericalHarmonicsL2_t546 * __this, Color_t13  ___color, const MethodInfo* method)
{
	{
		Color_t13  L_0 = ___color;
		SphericalHarmonicsL2_AddAmbientLightInternal_m2750(NULL /*static, unused*/, L_0, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddAmbientLightInternal(UnityEngine.Color,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_AddAmbientLightInternal_m2750 (Object_t * __this /* static, unused */, Color_t13  ___color, SphericalHarmonicsL2_t546 * ___sh, const MethodInfo* method)
{
	{
		SphericalHarmonicsL2_t546 * L_0 = ___sh;
		SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m2751(NULL /*static, unused*/, (&___color), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddAmbientLightInternal(UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m2751 (Object_t * __this /* static, unused */, Color_t13 * ___color, SphericalHarmonicsL2_t546 * ___sh, const MethodInfo* method)
{
	typedef void (*SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m2751_ftn) (Color_t13 *, SphericalHarmonicsL2_t546 *);
	static SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m2751_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m2751_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddAmbientLightInternal(UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(___color, ___sh);
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddDirectionalLight(UnityEngine.Vector3,UnityEngine.Color,System.Single)
extern "C" void SphericalHarmonicsL2_AddDirectionalLight_m2752 (SphericalHarmonicsL2_t546 * __this, Vector3_t58  ___direction, Color_t13  ___color, float ___intensity, const MethodInfo* method)
{
	Color_t13  V_0 = {0};
	{
		Color_t13  L_0 = ___color;
		float L_1 = ___intensity;
		Color_t13  L_2 = Color_op_Multiply_m1969(NULL /*static, unused*/, L_0, ((float)((float)(2.0f)*(float)L_1)), /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_t58  L_3 = ___direction;
		Color_t13  L_4 = V_0;
		SphericalHarmonicsL2_AddDirectionalLightInternal_m2753(NULL /*static, unused*/, L_3, L_4, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddDirectionalLightInternal(UnityEngine.Vector3,UnityEngine.Color,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_AddDirectionalLightInternal_m2753 (Object_t * __this /* static, unused */, Vector3_t58  ___direction, Color_t13  ___color, SphericalHarmonicsL2_t546 * ___sh, const MethodInfo* method)
{
	{
		SphericalHarmonicsL2_t546 * L_0 = ___sh;
		SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m2754(NULL /*static, unused*/, (&___direction), (&___color), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddDirectionalLightInternal(UnityEngine.Vector3&,UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m2754 (Object_t * __this /* static, unused */, Vector3_t58 * ___direction, Color_t13 * ___color, SphericalHarmonicsL2_t546 * ___sh, const MethodInfo* method)
{
	typedef void (*SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m2754_ftn) (Vector3_t58 *, Color_t13 *, SphericalHarmonicsL2_t546 *);
	static SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m2754_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m2754_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddDirectionalLightInternal(UnityEngine.Vector3&,UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(___direction, ___color, ___sh);
}
// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::get_Item(System.Int32,System.Int32)
extern TypeInfo* IndexOutOfRangeException_t745_il2cpp_TypeInfo_var;
extern "C" float SphericalHarmonicsL2_get_Item_m2755 (SphericalHarmonicsL2_t546 * __this, int32_t ___rgb, int32_t ___coefficient, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(969);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___rgb;
		int32_t L_1 = ___coefficient;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)((int32_t)9)))+(int32_t)L_1));
		int32_t L_2 = V_0;
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (L_3 == 0)
		{
			goto IL_0080;
		}
		if (L_3 == 1)
		{
			goto IL_0087;
		}
		if (L_3 == 2)
		{
			goto IL_008e;
		}
		if (L_3 == 3)
		{
			goto IL_0095;
		}
		if (L_3 == 4)
		{
			goto IL_009c;
		}
		if (L_3 == 5)
		{
			goto IL_00a3;
		}
		if (L_3 == 6)
		{
			goto IL_00aa;
		}
		if (L_3 == 7)
		{
			goto IL_00b1;
		}
		if (L_3 == 8)
		{
			goto IL_00b8;
		}
		if (L_3 == 9)
		{
			goto IL_00bf;
		}
		if (L_3 == 10)
		{
			goto IL_00c6;
		}
		if (L_3 == 11)
		{
			goto IL_00cd;
		}
		if (L_3 == 12)
		{
			goto IL_00d4;
		}
		if (L_3 == 13)
		{
			goto IL_00db;
		}
		if (L_3 == 14)
		{
			goto IL_00e2;
		}
		if (L_3 == 15)
		{
			goto IL_00e9;
		}
		if (L_3 == 16)
		{
			goto IL_00f0;
		}
		if (L_3 == 17)
		{
			goto IL_00f7;
		}
		if (L_3 == 18)
		{
			goto IL_00fe;
		}
		if (L_3 == 19)
		{
			goto IL_0105;
		}
		if (L_3 == 20)
		{
			goto IL_010c;
		}
		if (L_3 == 21)
		{
			goto IL_0113;
		}
		if (L_3 == 22)
		{
			goto IL_011a;
		}
		if (L_3 == 23)
		{
			goto IL_0121;
		}
		if (L_3 == 24)
		{
			goto IL_0128;
		}
		if (L_3 == 25)
		{
			goto IL_012f;
		}
		if (L_3 == 26)
		{
			goto IL_0136;
		}
	}
	{
		goto IL_013d;
	}

IL_0080:
	{
		float L_4 = (__this->___shr0_0);
		return L_4;
	}

IL_0087:
	{
		float L_5 = (__this->___shr1_1);
		return L_5;
	}

IL_008e:
	{
		float L_6 = (__this->___shr2_2);
		return L_6;
	}

IL_0095:
	{
		float L_7 = (__this->___shr3_3);
		return L_7;
	}

IL_009c:
	{
		float L_8 = (__this->___shr4_4);
		return L_8;
	}

IL_00a3:
	{
		float L_9 = (__this->___shr5_5);
		return L_9;
	}

IL_00aa:
	{
		float L_10 = (__this->___shr6_6);
		return L_10;
	}

IL_00b1:
	{
		float L_11 = (__this->___shr7_7);
		return L_11;
	}

IL_00b8:
	{
		float L_12 = (__this->___shr8_8);
		return L_12;
	}

IL_00bf:
	{
		float L_13 = (__this->___shg0_9);
		return L_13;
	}

IL_00c6:
	{
		float L_14 = (__this->___shg1_10);
		return L_14;
	}

IL_00cd:
	{
		float L_15 = (__this->___shg2_11);
		return L_15;
	}

IL_00d4:
	{
		float L_16 = (__this->___shg3_12);
		return L_16;
	}

IL_00db:
	{
		float L_17 = (__this->___shg4_13);
		return L_17;
	}

IL_00e2:
	{
		float L_18 = (__this->___shg5_14);
		return L_18;
	}

IL_00e9:
	{
		float L_19 = (__this->___shg6_15);
		return L_19;
	}

IL_00f0:
	{
		float L_20 = (__this->___shg7_16);
		return L_20;
	}

IL_00f7:
	{
		float L_21 = (__this->___shg8_17);
		return L_21;
	}

IL_00fe:
	{
		float L_22 = (__this->___shb0_18);
		return L_22;
	}

IL_0105:
	{
		float L_23 = (__this->___shb1_19);
		return L_23;
	}

IL_010c:
	{
		float L_24 = (__this->___shb2_20);
		return L_24;
	}

IL_0113:
	{
		float L_25 = (__this->___shb3_21);
		return L_25;
	}

IL_011a:
	{
		float L_26 = (__this->___shb4_22);
		return L_26;
	}

IL_0121:
	{
		float L_27 = (__this->___shb5_23);
		return L_27;
	}

IL_0128:
	{
		float L_28 = (__this->___shb6_24);
		return L_28;
	}

IL_012f:
	{
		float L_29 = (__this->___shb7_25);
		return L_29;
	}

IL_0136:
	{
		float L_30 = (__this->___shb8_26);
		return L_30;
	}

IL_013d:
	{
		IndexOutOfRangeException_t745 * L_31 = (IndexOutOfRangeException_t745 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t745_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m3529(L_31, (String_t*) &_stringLiteral206, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_31);
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::set_Item(System.Int32,System.Int32,System.Single)
extern TypeInfo* IndexOutOfRangeException_t745_il2cpp_TypeInfo_var;
extern "C" void SphericalHarmonicsL2_set_Item_m2756 (SphericalHarmonicsL2_t546 * __this, int32_t ___rgb, int32_t ___coefficient, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(969);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___rgb;
		int32_t L_1 = ___coefficient;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)((int32_t)9)))+(int32_t)L_1));
		int32_t L_2 = V_0;
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (L_3 == 0)
		{
			goto IL_0080;
		}
		if (L_3 == 1)
		{
			goto IL_008c;
		}
		if (L_3 == 2)
		{
			goto IL_0098;
		}
		if (L_3 == 3)
		{
			goto IL_00a4;
		}
		if (L_3 == 4)
		{
			goto IL_00b0;
		}
		if (L_3 == 5)
		{
			goto IL_00bc;
		}
		if (L_3 == 6)
		{
			goto IL_00c8;
		}
		if (L_3 == 7)
		{
			goto IL_00d4;
		}
		if (L_3 == 8)
		{
			goto IL_00e0;
		}
		if (L_3 == 9)
		{
			goto IL_00ec;
		}
		if (L_3 == 10)
		{
			goto IL_00f8;
		}
		if (L_3 == 11)
		{
			goto IL_0104;
		}
		if (L_3 == 12)
		{
			goto IL_0110;
		}
		if (L_3 == 13)
		{
			goto IL_011c;
		}
		if (L_3 == 14)
		{
			goto IL_0128;
		}
		if (L_3 == 15)
		{
			goto IL_0134;
		}
		if (L_3 == 16)
		{
			goto IL_0140;
		}
		if (L_3 == 17)
		{
			goto IL_014c;
		}
		if (L_3 == 18)
		{
			goto IL_0158;
		}
		if (L_3 == 19)
		{
			goto IL_0164;
		}
		if (L_3 == 20)
		{
			goto IL_0170;
		}
		if (L_3 == 21)
		{
			goto IL_017c;
		}
		if (L_3 == 22)
		{
			goto IL_0188;
		}
		if (L_3 == 23)
		{
			goto IL_0194;
		}
		if (L_3 == 24)
		{
			goto IL_01a0;
		}
		if (L_3 == 25)
		{
			goto IL_01ac;
		}
		if (L_3 == 26)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01c4;
	}

IL_0080:
	{
		float L_4 = ___value;
		__this->___shr0_0 = L_4;
		goto IL_01cf;
	}

IL_008c:
	{
		float L_5 = ___value;
		__this->___shr1_1 = L_5;
		goto IL_01cf;
	}

IL_0098:
	{
		float L_6 = ___value;
		__this->___shr2_2 = L_6;
		goto IL_01cf;
	}

IL_00a4:
	{
		float L_7 = ___value;
		__this->___shr3_3 = L_7;
		goto IL_01cf;
	}

IL_00b0:
	{
		float L_8 = ___value;
		__this->___shr4_4 = L_8;
		goto IL_01cf;
	}

IL_00bc:
	{
		float L_9 = ___value;
		__this->___shr5_5 = L_9;
		goto IL_01cf;
	}

IL_00c8:
	{
		float L_10 = ___value;
		__this->___shr6_6 = L_10;
		goto IL_01cf;
	}

IL_00d4:
	{
		float L_11 = ___value;
		__this->___shr7_7 = L_11;
		goto IL_01cf;
	}

IL_00e0:
	{
		float L_12 = ___value;
		__this->___shr8_8 = L_12;
		goto IL_01cf;
	}

IL_00ec:
	{
		float L_13 = ___value;
		__this->___shg0_9 = L_13;
		goto IL_01cf;
	}

IL_00f8:
	{
		float L_14 = ___value;
		__this->___shg1_10 = L_14;
		goto IL_01cf;
	}

IL_0104:
	{
		float L_15 = ___value;
		__this->___shg2_11 = L_15;
		goto IL_01cf;
	}

IL_0110:
	{
		float L_16 = ___value;
		__this->___shg3_12 = L_16;
		goto IL_01cf;
	}

IL_011c:
	{
		float L_17 = ___value;
		__this->___shg4_13 = L_17;
		goto IL_01cf;
	}

IL_0128:
	{
		float L_18 = ___value;
		__this->___shg5_14 = L_18;
		goto IL_01cf;
	}

IL_0134:
	{
		float L_19 = ___value;
		__this->___shg6_15 = L_19;
		goto IL_01cf;
	}

IL_0140:
	{
		float L_20 = ___value;
		__this->___shg7_16 = L_20;
		goto IL_01cf;
	}

IL_014c:
	{
		float L_21 = ___value;
		__this->___shg8_17 = L_21;
		goto IL_01cf;
	}

IL_0158:
	{
		float L_22 = ___value;
		__this->___shb0_18 = L_22;
		goto IL_01cf;
	}

IL_0164:
	{
		float L_23 = ___value;
		__this->___shb1_19 = L_23;
		goto IL_01cf;
	}

IL_0170:
	{
		float L_24 = ___value;
		__this->___shb2_20 = L_24;
		goto IL_01cf;
	}

IL_017c:
	{
		float L_25 = ___value;
		__this->___shb3_21 = L_25;
		goto IL_01cf;
	}

IL_0188:
	{
		float L_26 = ___value;
		__this->___shb4_22 = L_26;
		goto IL_01cf;
	}

IL_0194:
	{
		float L_27 = ___value;
		__this->___shb5_23 = L_27;
		goto IL_01cf;
	}

IL_01a0:
	{
		float L_28 = ___value;
		__this->___shb6_24 = L_28;
		goto IL_01cf;
	}

IL_01ac:
	{
		float L_29 = ___value;
		__this->___shb7_25 = L_29;
		goto IL_01cf;
	}

IL_01b8:
	{
		float L_30 = ___value;
		__this->___shb8_26 = L_30;
		goto IL_01cf;
	}

IL_01c4:
	{
		IndexOutOfRangeException_t745 * L_31 = (IndexOutOfRangeException_t745 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t745_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m3529(L_31, (String_t*) &_stringLiteral206, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_31);
	}

IL_01cf:
	{
		return;
	}
}
// System.Int32 UnityEngine.Rendering.SphericalHarmonicsL2::GetHashCode()
extern "C" int32_t SphericalHarmonicsL2_GetHashCode_m2757 (SphericalHarmonicsL2_t546 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)17);
		int32_t L_0 = V_0;
		float* L_1 = &(__this->___shr0_0);
		int32_t L_2 = Single_GetHashCode_m3514(L_1, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)((int32_t)23)))+(int32_t)L_2));
		int32_t L_3 = V_0;
		float* L_4 = &(__this->___shr1_1);
		int32_t L_5 = Single_GetHashCode_m3514(L_4, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_3*(int32_t)((int32_t)23)))+(int32_t)L_5));
		int32_t L_6 = V_0;
		float* L_7 = &(__this->___shr2_2);
		int32_t L_8 = Single_GetHashCode_m3514(L_7, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6*(int32_t)((int32_t)23)))+(int32_t)L_8));
		int32_t L_9 = V_0;
		float* L_10 = &(__this->___shr3_3);
		int32_t L_11 = Single_GetHashCode_m3514(L_10, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_9*(int32_t)((int32_t)23)))+(int32_t)L_11));
		int32_t L_12 = V_0;
		float* L_13 = &(__this->___shr4_4);
		int32_t L_14 = Single_GetHashCode_m3514(L_13, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_12*(int32_t)((int32_t)23)))+(int32_t)L_14));
		int32_t L_15 = V_0;
		float* L_16 = &(__this->___shr5_5);
		int32_t L_17 = Single_GetHashCode_m3514(L_16, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_15*(int32_t)((int32_t)23)))+(int32_t)L_17));
		int32_t L_18 = V_0;
		float* L_19 = &(__this->___shr6_6);
		int32_t L_20 = Single_GetHashCode_m3514(L_19, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_18*(int32_t)((int32_t)23)))+(int32_t)L_20));
		int32_t L_21 = V_0;
		float* L_22 = &(__this->___shr7_7);
		int32_t L_23 = Single_GetHashCode_m3514(L_22, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_21*(int32_t)((int32_t)23)))+(int32_t)L_23));
		int32_t L_24 = V_0;
		float* L_25 = &(__this->___shr8_8);
		int32_t L_26 = Single_GetHashCode_m3514(L_25, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_24*(int32_t)((int32_t)23)))+(int32_t)L_26));
		int32_t L_27 = V_0;
		float* L_28 = &(__this->___shg0_9);
		int32_t L_29 = Single_GetHashCode_m3514(L_28, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_27*(int32_t)((int32_t)23)))+(int32_t)L_29));
		int32_t L_30 = V_0;
		float* L_31 = &(__this->___shg1_10);
		int32_t L_32 = Single_GetHashCode_m3514(L_31, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_30*(int32_t)((int32_t)23)))+(int32_t)L_32));
		int32_t L_33 = V_0;
		float* L_34 = &(__this->___shg2_11);
		int32_t L_35 = Single_GetHashCode_m3514(L_34, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_33*(int32_t)((int32_t)23)))+(int32_t)L_35));
		int32_t L_36 = V_0;
		float* L_37 = &(__this->___shg3_12);
		int32_t L_38 = Single_GetHashCode_m3514(L_37, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_36*(int32_t)((int32_t)23)))+(int32_t)L_38));
		int32_t L_39 = V_0;
		float* L_40 = &(__this->___shg4_13);
		int32_t L_41 = Single_GetHashCode_m3514(L_40, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_39*(int32_t)((int32_t)23)))+(int32_t)L_41));
		int32_t L_42 = V_0;
		float* L_43 = &(__this->___shg5_14);
		int32_t L_44 = Single_GetHashCode_m3514(L_43, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_42*(int32_t)((int32_t)23)))+(int32_t)L_44));
		int32_t L_45 = V_0;
		float* L_46 = &(__this->___shg6_15);
		int32_t L_47 = Single_GetHashCode_m3514(L_46, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_45*(int32_t)((int32_t)23)))+(int32_t)L_47));
		int32_t L_48 = V_0;
		float* L_49 = &(__this->___shg7_16);
		int32_t L_50 = Single_GetHashCode_m3514(L_49, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_48*(int32_t)((int32_t)23)))+(int32_t)L_50));
		int32_t L_51 = V_0;
		float* L_52 = &(__this->___shg8_17);
		int32_t L_53 = Single_GetHashCode_m3514(L_52, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_51*(int32_t)((int32_t)23)))+(int32_t)L_53));
		int32_t L_54 = V_0;
		float* L_55 = &(__this->___shb0_18);
		int32_t L_56 = Single_GetHashCode_m3514(L_55, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_54*(int32_t)((int32_t)23)))+(int32_t)L_56));
		int32_t L_57 = V_0;
		float* L_58 = &(__this->___shb1_19);
		int32_t L_59 = Single_GetHashCode_m3514(L_58, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_57*(int32_t)((int32_t)23)))+(int32_t)L_59));
		int32_t L_60 = V_0;
		float* L_61 = &(__this->___shb2_20);
		int32_t L_62 = Single_GetHashCode_m3514(L_61, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_60*(int32_t)((int32_t)23)))+(int32_t)L_62));
		int32_t L_63 = V_0;
		float* L_64 = &(__this->___shb3_21);
		int32_t L_65 = Single_GetHashCode_m3514(L_64, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_63*(int32_t)((int32_t)23)))+(int32_t)L_65));
		int32_t L_66 = V_0;
		float* L_67 = &(__this->___shb4_22);
		int32_t L_68 = Single_GetHashCode_m3514(L_67, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_66*(int32_t)((int32_t)23)))+(int32_t)L_68));
		int32_t L_69 = V_0;
		float* L_70 = &(__this->___shb5_23);
		int32_t L_71 = Single_GetHashCode_m3514(L_70, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_69*(int32_t)((int32_t)23)))+(int32_t)L_71));
		int32_t L_72 = V_0;
		float* L_73 = &(__this->___shb6_24);
		int32_t L_74 = Single_GetHashCode_m3514(L_73, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_72*(int32_t)((int32_t)23)))+(int32_t)L_74));
		int32_t L_75 = V_0;
		float* L_76 = &(__this->___shb7_25);
		int32_t L_77 = Single_GetHashCode_m3514(L_76, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_75*(int32_t)((int32_t)23)))+(int32_t)L_77));
		int32_t L_78 = V_0;
		float* L_79 = &(__this->___shb8_26);
		int32_t L_80 = Single_GetHashCode_m3514(L_79, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_78*(int32_t)((int32_t)23)))+(int32_t)L_80));
		int32_t L_81 = V_0;
		return L_81;
	}
}
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::Equals(System.Object)
extern TypeInfo* SphericalHarmonicsL2_t546_il2cpp_TypeInfo_var;
extern "C" bool SphericalHarmonicsL2_Equals_m2758 (SphericalHarmonicsL2_t546 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SphericalHarmonicsL2_t546_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	SphericalHarmonicsL2_t546  V_0 = {0};
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, SphericalHarmonicsL2_t546_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(SphericalHarmonicsL2_t546 *)((SphericalHarmonicsL2_t546 *)UnBox (L_1, SphericalHarmonicsL2_t546_il2cpp_TypeInfo_var))));
		SphericalHarmonicsL2_t546  L_2 = V_0;
		bool L_3 = SphericalHarmonicsL2_op_Equality_m2762(NULL /*static, unused*/, (*(SphericalHarmonicsL2_t546 *)__this), L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Multiply(UnityEngine.Rendering.SphericalHarmonicsL2,System.Single)
extern TypeInfo* SphericalHarmonicsL2_t546_il2cpp_TypeInfo_var;
extern "C" SphericalHarmonicsL2_t546  SphericalHarmonicsL2_op_Multiply_m2759 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t546  ___lhs, float ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SphericalHarmonicsL2_t546_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	SphericalHarmonicsL2_t546  V_0 = {0};
	{
		Initobj (SphericalHarmonicsL2_t546_il2cpp_TypeInfo_var, (&V_0));
		float L_0 = ((&___lhs)->___shr0_0);
		float L_1 = ___rhs;
		(&V_0)->___shr0_0 = ((float)((float)L_0*(float)L_1));
		float L_2 = ((&___lhs)->___shr1_1);
		float L_3 = ___rhs;
		(&V_0)->___shr1_1 = ((float)((float)L_2*(float)L_3));
		float L_4 = ((&___lhs)->___shr2_2);
		float L_5 = ___rhs;
		(&V_0)->___shr2_2 = ((float)((float)L_4*(float)L_5));
		float L_6 = ((&___lhs)->___shr3_3);
		float L_7 = ___rhs;
		(&V_0)->___shr3_3 = ((float)((float)L_6*(float)L_7));
		float L_8 = ((&___lhs)->___shr4_4);
		float L_9 = ___rhs;
		(&V_0)->___shr4_4 = ((float)((float)L_8*(float)L_9));
		float L_10 = ((&___lhs)->___shr5_5);
		float L_11 = ___rhs;
		(&V_0)->___shr5_5 = ((float)((float)L_10*(float)L_11));
		float L_12 = ((&___lhs)->___shr6_6);
		float L_13 = ___rhs;
		(&V_0)->___shr6_6 = ((float)((float)L_12*(float)L_13));
		float L_14 = ((&___lhs)->___shr7_7);
		float L_15 = ___rhs;
		(&V_0)->___shr7_7 = ((float)((float)L_14*(float)L_15));
		float L_16 = ((&___lhs)->___shr8_8);
		float L_17 = ___rhs;
		(&V_0)->___shr8_8 = ((float)((float)L_16*(float)L_17));
		float L_18 = ((&___lhs)->___shg0_9);
		float L_19 = ___rhs;
		(&V_0)->___shg0_9 = ((float)((float)L_18*(float)L_19));
		float L_20 = ((&___lhs)->___shg1_10);
		float L_21 = ___rhs;
		(&V_0)->___shg1_10 = ((float)((float)L_20*(float)L_21));
		float L_22 = ((&___lhs)->___shg2_11);
		float L_23 = ___rhs;
		(&V_0)->___shg2_11 = ((float)((float)L_22*(float)L_23));
		float L_24 = ((&___lhs)->___shg3_12);
		float L_25 = ___rhs;
		(&V_0)->___shg3_12 = ((float)((float)L_24*(float)L_25));
		float L_26 = ((&___lhs)->___shg4_13);
		float L_27 = ___rhs;
		(&V_0)->___shg4_13 = ((float)((float)L_26*(float)L_27));
		float L_28 = ((&___lhs)->___shg5_14);
		float L_29 = ___rhs;
		(&V_0)->___shg5_14 = ((float)((float)L_28*(float)L_29));
		float L_30 = ((&___lhs)->___shg6_15);
		float L_31 = ___rhs;
		(&V_0)->___shg6_15 = ((float)((float)L_30*(float)L_31));
		float L_32 = ((&___lhs)->___shg7_16);
		float L_33 = ___rhs;
		(&V_0)->___shg7_16 = ((float)((float)L_32*(float)L_33));
		float L_34 = ((&___lhs)->___shg8_17);
		float L_35 = ___rhs;
		(&V_0)->___shg8_17 = ((float)((float)L_34*(float)L_35));
		float L_36 = ((&___lhs)->___shb0_18);
		float L_37 = ___rhs;
		(&V_0)->___shb0_18 = ((float)((float)L_36*(float)L_37));
		float L_38 = ((&___lhs)->___shb1_19);
		float L_39 = ___rhs;
		(&V_0)->___shb1_19 = ((float)((float)L_38*(float)L_39));
		float L_40 = ((&___lhs)->___shb2_20);
		float L_41 = ___rhs;
		(&V_0)->___shb2_20 = ((float)((float)L_40*(float)L_41));
		float L_42 = ((&___lhs)->___shb3_21);
		float L_43 = ___rhs;
		(&V_0)->___shb3_21 = ((float)((float)L_42*(float)L_43));
		float L_44 = ((&___lhs)->___shb4_22);
		float L_45 = ___rhs;
		(&V_0)->___shb4_22 = ((float)((float)L_44*(float)L_45));
		float L_46 = ((&___lhs)->___shb5_23);
		float L_47 = ___rhs;
		(&V_0)->___shb5_23 = ((float)((float)L_46*(float)L_47));
		float L_48 = ((&___lhs)->___shb6_24);
		float L_49 = ___rhs;
		(&V_0)->___shb6_24 = ((float)((float)L_48*(float)L_49));
		float L_50 = ((&___lhs)->___shb7_25);
		float L_51 = ___rhs;
		(&V_0)->___shb7_25 = ((float)((float)L_50*(float)L_51));
		float L_52 = ((&___lhs)->___shb8_26);
		float L_53 = ___rhs;
		(&V_0)->___shb8_26 = ((float)((float)L_52*(float)L_53));
		SphericalHarmonicsL2_t546  L_54 = V_0;
		return L_54;
	}
}
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Multiply(System.Single,UnityEngine.Rendering.SphericalHarmonicsL2)
extern TypeInfo* SphericalHarmonicsL2_t546_il2cpp_TypeInfo_var;
extern "C" SphericalHarmonicsL2_t546  SphericalHarmonicsL2_op_Multiply_m2760 (Object_t * __this /* static, unused */, float ___lhs, SphericalHarmonicsL2_t546  ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SphericalHarmonicsL2_t546_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	SphericalHarmonicsL2_t546  V_0 = {0};
	{
		Initobj (SphericalHarmonicsL2_t546_il2cpp_TypeInfo_var, (&V_0));
		float L_0 = ((&___rhs)->___shr0_0);
		float L_1 = ___lhs;
		(&V_0)->___shr0_0 = ((float)((float)L_0*(float)L_1));
		float L_2 = ((&___rhs)->___shr1_1);
		float L_3 = ___lhs;
		(&V_0)->___shr1_1 = ((float)((float)L_2*(float)L_3));
		float L_4 = ((&___rhs)->___shr2_2);
		float L_5 = ___lhs;
		(&V_0)->___shr2_2 = ((float)((float)L_4*(float)L_5));
		float L_6 = ((&___rhs)->___shr3_3);
		float L_7 = ___lhs;
		(&V_0)->___shr3_3 = ((float)((float)L_6*(float)L_7));
		float L_8 = ((&___rhs)->___shr4_4);
		float L_9 = ___lhs;
		(&V_0)->___shr4_4 = ((float)((float)L_8*(float)L_9));
		float L_10 = ((&___rhs)->___shr5_5);
		float L_11 = ___lhs;
		(&V_0)->___shr5_5 = ((float)((float)L_10*(float)L_11));
		float L_12 = ((&___rhs)->___shr6_6);
		float L_13 = ___lhs;
		(&V_0)->___shr6_6 = ((float)((float)L_12*(float)L_13));
		float L_14 = ((&___rhs)->___shr7_7);
		float L_15 = ___lhs;
		(&V_0)->___shr7_7 = ((float)((float)L_14*(float)L_15));
		float L_16 = ((&___rhs)->___shr8_8);
		float L_17 = ___lhs;
		(&V_0)->___shr8_8 = ((float)((float)L_16*(float)L_17));
		float L_18 = ((&___rhs)->___shg0_9);
		float L_19 = ___lhs;
		(&V_0)->___shg0_9 = ((float)((float)L_18*(float)L_19));
		float L_20 = ((&___rhs)->___shg1_10);
		float L_21 = ___lhs;
		(&V_0)->___shg1_10 = ((float)((float)L_20*(float)L_21));
		float L_22 = ((&___rhs)->___shg2_11);
		float L_23 = ___lhs;
		(&V_0)->___shg2_11 = ((float)((float)L_22*(float)L_23));
		float L_24 = ((&___rhs)->___shg3_12);
		float L_25 = ___lhs;
		(&V_0)->___shg3_12 = ((float)((float)L_24*(float)L_25));
		float L_26 = ((&___rhs)->___shg4_13);
		float L_27 = ___lhs;
		(&V_0)->___shg4_13 = ((float)((float)L_26*(float)L_27));
		float L_28 = ((&___rhs)->___shg5_14);
		float L_29 = ___lhs;
		(&V_0)->___shg5_14 = ((float)((float)L_28*(float)L_29));
		float L_30 = ((&___rhs)->___shg6_15);
		float L_31 = ___lhs;
		(&V_0)->___shg6_15 = ((float)((float)L_30*(float)L_31));
		float L_32 = ((&___rhs)->___shg7_16);
		float L_33 = ___lhs;
		(&V_0)->___shg7_16 = ((float)((float)L_32*(float)L_33));
		float L_34 = ((&___rhs)->___shg8_17);
		float L_35 = ___lhs;
		(&V_0)->___shg8_17 = ((float)((float)L_34*(float)L_35));
		float L_36 = ((&___rhs)->___shb0_18);
		float L_37 = ___lhs;
		(&V_0)->___shb0_18 = ((float)((float)L_36*(float)L_37));
		float L_38 = ((&___rhs)->___shb1_19);
		float L_39 = ___lhs;
		(&V_0)->___shb1_19 = ((float)((float)L_38*(float)L_39));
		float L_40 = ((&___rhs)->___shb2_20);
		float L_41 = ___lhs;
		(&V_0)->___shb2_20 = ((float)((float)L_40*(float)L_41));
		float L_42 = ((&___rhs)->___shb3_21);
		float L_43 = ___lhs;
		(&V_0)->___shb3_21 = ((float)((float)L_42*(float)L_43));
		float L_44 = ((&___rhs)->___shb4_22);
		float L_45 = ___lhs;
		(&V_0)->___shb4_22 = ((float)((float)L_44*(float)L_45));
		float L_46 = ((&___rhs)->___shb5_23);
		float L_47 = ___lhs;
		(&V_0)->___shb5_23 = ((float)((float)L_46*(float)L_47));
		float L_48 = ((&___rhs)->___shb6_24);
		float L_49 = ___lhs;
		(&V_0)->___shb6_24 = ((float)((float)L_48*(float)L_49));
		float L_50 = ((&___rhs)->___shb7_25);
		float L_51 = ___lhs;
		(&V_0)->___shb7_25 = ((float)((float)L_50*(float)L_51));
		float L_52 = ((&___rhs)->___shb8_26);
		float L_53 = ___lhs;
		(&V_0)->___shb8_26 = ((float)((float)L_52*(float)L_53));
		SphericalHarmonicsL2_t546  L_54 = V_0;
		return L_54;
	}
}
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Addition(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern TypeInfo* SphericalHarmonicsL2_t546_il2cpp_TypeInfo_var;
extern "C" SphericalHarmonicsL2_t546  SphericalHarmonicsL2_op_Addition_m2761 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t546  ___lhs, SphericalHarmonicsL2_t546  ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SphericalHarmonicsL2_t546_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(974);
		s_Il2CppMethodIntialized = true;
	}
	SphericalHarmonicsL2_t546  V_0 = {0};
	{
		Initobj (SphericalHarmonicsL2_t546_il2cpp_TypeInfo_var, (&V_0));
		float L_0 = ((&___lhs)->___shr0_0);
		float L_1 = ((&___rhs)->___shr0_0);
		(&V_0)->___shr0_0 = ((float)((float)L_0+(float)L_1));
		float L_2 = ((&___lhs)->___shr1_1);
		float L_3 = ((&___rhs)->___shr1_1);
		(&V_0)->___shr1_1 = ((float)((float)L_2+(float)L_3));
		float L_4 = ((&___lhs)->___shr2_2);
		float L_5 = ((&___rhs)->___shr2_2);
		(&V_0)->___shr2_2 = ((float)((float)L_4+(float)L_5));
		float L_6 = ((&___lhs)->___shr3_3);
		float L_7 = ((&___rhs)->___shr3_3);
		(&V_0)->___shr3_3 = ((float)((float)L_6+(float)L_7));
		float L_8 = ((&___lhs)->___shr4_4);
		float L_9 = ((&___rhs)->___shr4_4);
		(&V_0)->___shr4_4 = ((float)((float)L_8+(float)L_9));
		float L_10 = ((&___lhs)->___shr5_5);
		float L_11 = ((&___rhs)->___shr5_5);
		(&V_0)->___shr5_5 = ((float)((float)L_10+(float)L_11));
		float L_12 = ((&___lhs)->___shr6_6);
		float L_13 = ((&___rhs)->___shr6_6);
		(&V_0)->___shr6_6 = ((float)((float)L_12+(float)L_13));
		float L_14 = ((&___lhs)->___shr7_7);
		float L_15 = ((&___rhs)->___shr7_7);
		(&V_0)->___shr7_7 = ((float)((float)L_14+(float)L_15));
		float L_16 = ((&___lhs)->___shr8_8);
		float L_17 = ((&___rhs)->___shr8_8);
		(&V_0)->___shr8_8 = ((float)((float)L_16+(float)L_17));
		float L_18 = ((&___lhs)->___shg0_9);
		float L_19 = ((&___rhs)->___shg0_9);
		(&V_0)->___shg0_9 = ((float)((float)L_18+(float)L_19));
		float L_20 = ((&___lhs)->___shg1_10);
		float L_21 = ((&___rhs)->___shg1_10);
		(&V_0)->___shg1_10 = ((float)((float)L_20+(float)L_21));
		float L_22 = ((&___lhs)->___shg2_11);
		float L_23 = ((&___rhs)->___shg2_11);
		(&V_0)->___shg2_11 = ((float)((float)L_22+(float)L_23));
		float L_24 = ((&___lhs)->___shg3_12);
		float L_25 = ((&___rhs)->___shg3_12);
		(&V_0)->___shg3_12 = ((float)((float)L_24+(float)L_25));
		float L_26 = ((&___lhs)->___shg4_13);
		float L_27 = ((&___rhs)->___shg4_13);
		(&V_0)->___shg4_13 = ((float)((float)L_26+(float)L_27));
		float L_28 = ((&___lhs)->___shg5_14);
		float L_29 = ((&___rhs)->___shg5_14);
		(&V_0)->___shg5_14 = ((float)((float)L_28+(float)L_29));
		float L_30 = ((&___lhs)->___shg6_15);
		float L_31 = ((&___rhs)->___shg6_15);
		(&V_0)->___shg6_15 = ((float)((float)L_30+(float)L_31));
		float L_32 = ((&___lhs)->___shg7_16);
		float L_33 = ((&___rhs)->___shg7_16);
		(&V_0)->___shg7_16 = ((float)((float)L_32+(float)L_33));
		float L_34 = ((&___lhs)->___shg8_17);
		float L_35 = ((&___rhs)->___shg8_17);
		(&V_0)->___shg8_17 = ((float)((float)L_34+(float)L_35));
		float L_36 = ((&___lhs)->___shb0_18);
		float L_37 = ((&___rhs)->___shb0_18);
		(&V_0)->___shb0_18 = ((float)((float)L_36+(float)L_37));
		float L_38 = ((&___lhs)->___shb1_19);
		float L_39 = ((&___rhs)->___shb1_19);
		(&V_0)->___shb1_19 = ((float)((float)L_38+(float)L_39));
		float L_40 = ((&___lhs)->___shb2_20);
		float L_41 = ((&___rhs)->___shb2_20);
		(&V_0)->___shb2_20 = ((float)((float)L_40+(float)L_41));
		float L_42 = ((&___lhs)->___shb3_21);
		float L_43 = ((&___rhs)->___shb3_21);
		(&V_0)->___shb3_21 = ((float)((float)L_42+(float)L_43));
		float L_44 = ((&___lhs)->___shb4_22);
		float L_45 = ((&___rhs)->___shb4_22);
		(&V_0)->___shb4_22 = ((float)((float)L_44+(float)L_45));
		float L_46 = ((&___lhs)->___shb5_23);
		float L_47 = ((&___rhs)->___shb5_23);
		(&V_0)->___shb5_23 = ((float)((float)L_46+(float)L_47));
		float L_48 = ((&___lhs)->___shb6_24);
		float L_49 = ((&___rhs)->___shb6_24);
		(&V_0)->___shb6_24 = ((float)((float)L_48+(float)L_49));
		float L_50 = ((&___lhs)->___shb7_25);
		float L_51 = ((&___rhs)->___shb7_25);
		(&V_0)->___shb7_25 = ((float)((float)L_50+(float)L_51));
		float L_52 = ((&___lhs)->___shb8_26);
		float L_53 = ((&___rhs)->___shb8_26);
		(&V_0)->___shb8_26 = ((float)((float)L_52+(float)L_53));
		SphericalHarmonicsL2_t546  L_54 = V_0;
		return L_54;
	}
}
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::op_Equality(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern "C" bool SphericalHarmonicsL2_op_Equality_m2762 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t546  ___lhs, SphericalHarmonicsL2_t546  ___rhs, const MethodInfo* method)
{
	int32_t G_B28_0 = 0;
	{
		float L_0 = ((&___lhs)->___shr0_0);
		float L_1 = ((&___rhs)->___shr0_0);
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_0200;
		}
	}
	{
		float L_2 = ((&___lhs)->___shr1_1);
		float L_3 = ((&___rhs)->___shr1_1);
		if ((!(((float)L_2) == ((float)L_3))))
		{
			goto IL_0200;
		}
	}
	{
		float L_4 = ((&___lhs)->___shr2_2);
		float L_5 = ((&___rhs)->___shr2_2);
		if ((!(((float)L_4) == ((float)L_5))))
		{
			goto IL_0200;
		}
	}
	{
		float L_6 = ((&___lhs)->___shr3_3);
		float L_7 = ((&___rhs)->___shr3_3);
		if ((!(((float)L_6) == ((float)L_7))))
		{
			goto IL_0200;
		}
	}
	{
		float L_8 = ((&___lhs)->___shr4_4);
		float L_9 = ((&___rhs)->___shr4_4);
		if ((!(((float)L_8) == ((float)L_9))))
		{
			goto IL_0200;
		}
	}
	{
		float L_10 = ((&___lhs)->___shr5_5);
		float L_11 = ((&___rhs)->___shr5_5);
		if ((!(((float)L_10) == ((float)L_11))))
		{
			goto IL_0200;
		}
	}
	{
		float L_12 = ((&___lhs)->___shr6_6);
		float L_13 = ((&___rhs)->___shr6_6);
		if ((!(((float)L_12) == ((float)L_13))))
		{
			goto IL_0200;
		}
	}
	{
		float L_14 = ((&___lhs)->___shr7_7);
		float L_15 = ((&___rhs)->___shr7_7);
		if ((!(((float)L_14) == ((float)L_15))))
		{
			goto IL_0200;
		}
	}
	{
		float L_16 = ((&___lhs)->___shr8_8);
		float L_17 = ((&___rhs)->___shr8_8);
		if ((!(((float)L_16) == ((float)L_17))))
		{
			goto IL_0200;
		}
	}
	{
		float L_18 = ((&___lhs)->___shg0_9);
		float L_19 = ((&___rhs)->___shg0_9);
		if ((!(((float)L_18) == ((float)L_19))))
		{
			goto IL_0200;
		}
	}
	{
		float L_20 = ((&___lhs)->___shg1_10);
		float L_21 = ((&___rhs)->___shg1_10);
		if ((!(((float)L_20) == ((float)L_21))))
		{
			goto IL_0200;
		}
	}
	{
		float L_22 = ((&___lhs)->___shg2_11);
		float L_23 = ((&___rhs)->___shg2_11);
		if ((!(((float)L_22) == ((float)L_23))))
		{
			goto IL_0200;
		}
	}
	{
		float L_24 = ((&___lhs)->___shg3_12);
		float L_25 = ((&___rhs)->___shg3_12);
		if ((!(((float)L_24) == ((float)L_25))))
		{
			goto IL_0200;
		}
	}
	{
		float L_26 = ((&___lhs)->___shg4_13);
		float L_27 = ((&___rhs)->___shg4_13);
		if ((!(((float)L_26) == ((float)L_27))))
		{
			goto IL_0200;
		}
	}
	{
		float L_28 = ((&___lhs)->___shg5_14);
		float L_29 = ((&___rhs)->___shg5_14);
		if ((!(((float)L_28) == ((float)L_29))))
		{
			goto IL_0200;
		}
	}
	{
		float L_30 = ((&___lhs)->___shg6_15);
		float L_31 = ((&___rhs)->___shg6_15);
		if ((!(((float)L_30) == ((float)L_31))))
		{
			goto IL_0200;
		}
	}
	{
		float L_32 = ((&___lhs)->___shg7_16);
		float L_33 = ((&___rhs)->___shg7_16);
		if ((!(((float)L_32) == ((float)L_33))))
		{
			goto IL_0200;
		}
	}
	{
		float L_34 = ((&___lhs)->___shg8_17);
		float L_35 = ((&___rhs)->___shg8_17);
		if ((!(((float)L_34) == ((float)L_35))))
		{
			goto IL_0200;
		}
	}
	{
		float L_36 = ((&___lhs)->___shb0_18);
		float L_37 = ((&___rhs)->___shb0_18);
		if ((!(((float)L_36) == ((float)L_37))))
		{
			goto IL_0200;
		}
	}
	{
		float L_38 = ((&___lhs)->___shb1_19);
		float L_39 = ((&___rhs)->___shb1_19);
		if ((!(((float)L_38) == ((float)L_39))))
		{
			goto IL_0200;
		}
	}
	{
		float L_40 = ((&___lhs)->___shb2_20);
		float L_41 = ((&___rhs)->___shb2_20);
		if ((!(((float)L_40) == ((float)L_41))))
		{
			goto IL_0200;
		}
	}
	{
		float L_42 = ((&___lhs)->___shb3_21);
		float L_43 = ((&___rhs)->___shb3_21);
		if ((!(((float)L_42) == ((float)L_43))))
		{
			goto IL_0200;
		}
	}
	{
		float L_44 = ((&___lhs)->___shb4_22);
		float L_45 = ((&___rhs)->___shb4_22);
		if ((!(((float)L_44) == ((float)L_45))))
		{
			goto IL_0200;
		}
	}
	{
		float L_46 = ((&___lhs)->___shb5_23);
		float L_47 = ((&___rhs)->___shb5_23);
		if ((!(((float)L_46) == ((float)L_47))))
		{
			goto IL_0200;
		}
	}
	{
		float L_48 = ((&___lhs)->___shb6_24);
		float L_49 = ((&___rhs)->___shb6_24);
		if ((!(((float)L_48) == ((float)L_49))))
		{
			goto IL_0200;
		}
	}
	{
		float L_50 = ((&___lhs)->___shb7_25);
		float L_51 = ((&___rhs)->___shb7_25);
		if ((!(((float)L_50) == ((float)L_51))))
		{
			goto IL_0200;
		}
	}
	{
		float L_52 = ((&___lhs)->___shb8_26);
		float L_53 = ((&___rhs)->___shb8_26);
		G_B28_0 = ((((float)L_52) == ((float)L_53))? 1 : 0);
		goto IL_0201;
	}

IL_0200:
	{
		G_B28_0 = 0;
	}

IL_0201:
	{
		return G_B28_0;
	}
}
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::op_Inequality(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern "C" bool SphericalHarmonicsL2_op_Inequality_m2763 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t546  ___lhs, SphericalHarmonicsL2_t546  ___rhs, const MethodInfo* method)
{
	{
		SphericalHarmonicsL2_t546  L_0 = ___lhs;
		SphericalHarmonicsL2_t546  L_1 = ___rhs;
		bool L_2 = SphericalHarmonicsL2_op_Equality_m2762(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_Sprite.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_SpriteMethodDeclarations.h"



// UnityEngine.Rect UnityEngine.Sprite::get_rect()
extern "C" Rect_t230  Sprite_get_rect_m1789 (Sprite_t7 * __this, const MethodInfo* method)
{
	typedef Rect_t230  (*Sprite_get_rect_m1789_ftn) (Sprite_t7 *);
	static Sprite_get_rect_m1789_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_rect_m1789_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_rect()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Sprite::get_pixelsPerUnit()
extern "C" float Sprite_get_pixelsPerUnit_m1784 (Sprite_t7 * __this, const MethodInfo* method)
{
	typedef float (*Sprite_get_pixelsPerUnit_m1784_ftn) (Sprite_t7 *);
	static Sprite_get_pixelsPerUnit_m1784_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_pixelsPerUnit_m1784_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_pixelsPerUnit()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
extern "C" Texture2D_t193 * Sprite_get_texture_m1781 (Sprite_t7 * __this, const MethodInfo* method)
{
	typedef Texture2D_t193 * (*Sprite_get_texture_m1781_ftn) (Sprite_t7 *);
	static Sprite_get_texture_m1781_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_texture_m1781_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_texture()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Rect UnityEngine.Sprite::get_textureRect()
extern "C" Rect_t230  Sprite_get_textureRect_m1810 (Sprite_t7 * __this, const MethodInfo* method)
{
	typedef Rect_t230  (*Sprite_get_textureRect_m1810_ftn) (Sprite_t7 *);
	static Sprite_get_textureRect_m1810_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_textureRect_m1810_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_textureRect()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Vector4 UnityEngine.Sprite::get_border()
extern "C" Vector4_t333  Sprite_get_border_m1782 (Sprite_t7 * __this, const MethodInfo* method)
{
	typedef Vector4_t333  (*Sprite_get_border_m1782_ftn) (Sprite_t7 *);
	static Sprite_get_border_m1782_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_border_m1782_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_border()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRenderer.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRendererMethodDeclarations.h"



// System.Void UnityEngine.SpriteRenderer::INTERNAL_get_color(UnityEngine.Color&)
extern "C" void SpriteRenderer_INTERNAL_get_color_m2764 (SpriteRenderer_t15 * __this, Color_t13 * ___value, const MethodInfo* method)
{
	typedef void (*SpriteRenderer_INTERNAL_get_color_m2764_ftn) (SpriteRenderer_t15 *, Color_t13 *);
	static SpriteRenderer_INTERNAL_get_color_m2764_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpriteRenderer_INTERNAL_get_color_m2764_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SpriteRenderer::INTERNAL_get_color(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.SpriteRenderer::INTERNAL_set_color(UnityEngine.Color&)
extern "C" void SpriteRenderer_INTERNAL_set_color_m2765 (SpriteRenderer_t15 * __this, Color_t13 * ___value, const MethodInfo* method)
{
	typedef void (*SpriteRenderer_INTERNAL_set_color_m2765_ftn) (SpriteRenderer_t15 *, Color_t13 *);
	static SpriteRenderer_INTERNAL_set_color_m2765_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpriteRenderer_INTERNAL_set_color_m2765_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SpriteRenderer::INTERNAL_set_color(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Color UnityEngine.SpriteRenderer::get_color()
extern "C" Color_t13  SpriteRenderer_get_color_m225 (SpriteRenderer_t15 * __this, const MethodInfo* method)
{
	Color_t13  V_0 = {0};
	{
		SpriteRenderer_INTERNAL_get_color_m2764(__this, (&V_0), /*hidden argument*/NULL);
		Color_t13  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
extern "C" void SpriteRenderer_set_color_m189 (SpriteRenderer_t15 * __this, Color_t13  ___value, const MethodInfo* method)
{
	{
		SpriteRenderer_INTERNAL_set_color_m2765(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Sprites.DataUtility
#include "UnityEngine_UnityEngine_Sprites_DataUtility.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Sprites.DataUtility
#include "UnityEngine_UnityEngine_Sprites_DataUtilityMethodDeclarations.h"



// UnityEngine.Vector4 UnityEngine.Sprites.DataUtility::GetInnerUV(UnityEngine.Sprite)
extern "C" Vector4_t333  DataUtility_GetInnerUV_m1799 (Object_t * __this /* static, unused */, Sprite_t7 * ___sprite, const MethodInfo* method)
{
	typedef Vector4_t333  (*DataUtility_GetInnerUV_m1799_ftn) (Sprite_t7 *);
	static DataUtility_GetInnerUV_m1799_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_GetInnerUV_m1799_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetInnerUV(UnityEngine.Sprite)");
	return _il2cpp_icall_func(___sprite);
}
// UnityEngine.Vector4 UnityEngine.Sprites.DataUtility::GetOuterUV(UnityEngine.Sprite)
extern "C" Vector4_t333  DataUtility_GetOuterUV_m1798 (Object_t * __this /* static, unused */, Sprite_t7 * ___sprite, const MethodInfo* method)
{
	typedef Vector4_t333  (*DataUtility_GetOuterUV_m1798_ftn) (Sprite_t7 *);
	static DataUtility_GetOuterUV_m1798_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_GetOuterUV_m1798_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetOuterUV(UnityEngine.Sprite)");
	return _il2cpp_icall_func(___sprite);
}
// UnityEngine.Vector4 UnityEngine.Sprites.DataUtility::GetPadding(UnityEngine.Sprite)
extern "C" Vector4_t333  DataUtility_GetPadding_m1788 (Object_t * __this /* static, unused */, Sprite_t7 * ___sprite, const MethodInfo* method)
{
	typedef Vector4_t333  (*DataUtility_GetPadding_m1788_ftn) (Sprite_t7 *);
	static DataUtility_GetPadding_m1788_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_GetPadding_m1788_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetPadding(UnityEngine.Sprite)");
	return _il2cpp_icall_func(___sprite);
}
// UnityEngine.Vector2 UnityEngine.Sprites.DataUtility::GetMinSize(UnityEngine.Sprite)
extern "C" Vector2_t38  DataUtility_GetMinSize_m1808 (Object_t * __this /* static, unused */, Sprite_t7 * ___sprite, const MethodInfo* method)
{
	Vector2_t38  V_0 = {0};
	{
		Sprite_t7 * L_0 = ___sprite;
		DataUtility_Internal_GetMinSize_m2766(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
		Vector2_t38  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Sprites.DataUtility::Internal_GetMinSize(UnityEngine.Sprite,UnityEngine.Vector2&)
extern "C" void DataUtility_Internal_GetMinSize_m2766 (Object_t * __this /* static, unused */, Sprite_t7 * ___sprite, Vector2_t38 * ___output, const MethodInfo* method)
{
	typedef void (*DataUtility_Internal_GetMinSize_m2766_ftn) (Sprite_t7 *, Vector2_t38 *);
	static DataUtility_Internal_GetMinSize_m2766_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_Internal_GetMinSize_m2766_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::Internal_GetMinSize(UnityEngine.Sprite,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___sprite, ___output);
}
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWW.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWWMethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_6.h"
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityException.h"
// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWForm.h"
// System.StringComparison
#include "mscorlib_System_StringComparison.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
// System.IO.StringReader
#include "mscorlib_System_IO_StringReader.h"
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityExceptionMethodDeclarations.h"
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWFormMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_6MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1MethodDeclarations.h"
// System.IO.StringReader
#include "mscorlib_System_IO_StringReaderMethodDeclarations.h"


// System.Void UnityEngine.WWW::.ctor(System.String,UnityEngine.WWWForm)
extern "C" void WWW__ctor_m2767 (WWW_t548 * __this, String_t* ___url, WWWForm_t552 * ___form, const MethodInfo* method)
{
	StringU5BU5D_t48* V_0 = {0};
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		WWWForm_t552 * L_0 = ___form;
		NullCheck(L_0);
		Dictionary_2_t710 * L_1 = WWWForm_get_headers_m2786(L_0, /*hidden argument*/NULL);
		StringU5BU5D_t48* L_2 = WWW_FlattenedHeadersFrom_m2780(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = ___url;
		WWWForm_t552 * L_4 = ___form;
		NullCheck(L_4);
		ByteU5BU5D_t551* L_5 = WWWForm_get_data_m2787(L_4, /*hidden argument*/NULL);
		StringU5BU5D_t48* L_6 = V_0;
		WWW_InitWWW_m2771(__this, L_3, L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WWW::Dispose()
extern "C" void WWW_Dispose_m2768 (WWW_t548 * __this, const MethodInfo* method)
{
	{
		WWW_DestroyWWW_m2770(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WWW::Finalize()
extern "C" void WWW_Finalize_m2769 (WWW_t548 * __this, const MethodInfo* method)
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
		WWW_DestroyWWW_m2770(__this, 0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m375(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.WWW::DestroyWWW(System.Boolean)
extern "C" void WWW_DestroyWWW_m2770 (WWW_t548 * __this, bool ___cancel, const MethodInfo* method)
{
	typedef void (*WWW_DestroyWWW_m2770_ftn) (WWW_t548 *, bool);
	static WWW_DestroyWWW_m2770_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_DestroyWWW_m2770_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::DestroyWWW(System.Boolean)");
	_il2cpp_icall_func(__this, ___cancel);
}
// System.Void UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])
extern "C" void WWW_InitWWW_m2771 (WWW_t548 * __this, String_t* ___url, ByteU5BU5D_t551* ___postData, StringU5BU5D_t48* ___iHeaders, const MethodInfo* method)
{
	typedef void (*WWW_InitWWW_m2771_ftn) (WWW_t548 *, String_t*, ByteU5BU5D_t551*, StringU5BU5D_t48*);
	static WWW_InitWWW_m2771_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_InitWWW_m2771_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])");
	_il2cpp_icall_func(__this, ___url, ___postData, ___iHeaders);
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::get_responseHeaders()
extern TypeInfo* UnityException_t367_il2cpp_TypeInfo_var;
extern "C" Dictionary_2_t710 * WWW_get_responseHeaders_m2772 (WWW_t548 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityException_t367_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = WWW_get_isDone_m2779(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		UnityException_t367 * L_1 = (UnityException_t367 *)il2cpp_codegen_object_new (UnityException_t367_il2cpp_TypeInfo_var);
		UnityException__ctor_m3425(L_1, (String_t*) &_stringLiteral207, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		String_t* L_2 = WWW_get_responseHeadersString_m2773(__this, /*hidden argument*/NULL);
		Dictionary_2_t710 * L_3 = WWW_ParseHTTPHeaderString_m2781(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String UnityEngine.WWW::get_responseHeadersString()
extern "C" String_t* WWW_get_responseHeadersString_m2773 (WWW_t548 * __this, const MethodInfo* method)
{
	typedef String_t* (*WWW_get_responseHeadersString_m2773_ftn) (WWW_t548 *);
	static WWW_get_responseHeadersString_m2773_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_get_responseHeadersString_m2773_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_responseHeadersString()");
	return _il2cpp_icall_func(__this);
}
// System.String UnityEngine.WWW::get_text()
extern TypeInfo* UnityException_t367_il2cpp_TypeInfo_var;
extern "C" String_t* WWW_get_text_m2774 (WWW_t548 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityException_t367_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t551* V_0 = {0};
	{
		bool L_0 = WWW_get_isDone_m2779(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		UnityException_t367 * L_1 = (UnityException_t367 *)il2cpp_codegen_object_new (UnityException_t367_il2cpp_TypeInfo_var);
		UnityException__ctor_m3425(L_1, (String_t*) &_stringLiteral208, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		ByteU5BU5D_t551* L_2 = WWW_get_bytes_m2777(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		Encoding_t711 * L_3 = WWW_GetTextEncoder_m2776(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t551* L_4 = V_0;
		ByteU5BU5D_t551* L_5 = V_0;
		NullCheck(L_5);
		NullCheck(L_3);
		String_t* L_6 = (String_t*)VirtFuncInvoker3< String_t*, ByteU5BU5D_t551*, int32_t, int32_t >::Invoke(19 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, 0, (((int32_t)(((Array_t *)L_5)->max_length))));
		return L_6;
	}
}
// System.Text.Encoding UnityEngine.WWW::get_DefaultEncoding()
extern TypeInfo* Encoding_t711_il2cpp_TypeInfo_var;
extern "C" Encoding_t711 * WWW_get_DefaultEncoding_m2775 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Encoding_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(975);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t711_il2cpp_TypeInfo_var);
		Encoding_t711 * L_0 = Encoding_get_ASCII_m3534(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Text.Encoding UnityEngine.WWW::GetTextEncoder()
extern TypeInfo* CharU5BU5D_t101_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t711_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t65_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Encoding_t711 * WWW_GetTextEncoder_m2776 (WWW_t548 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		Encoding_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(975);
		Exception_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = {0};
	int32_t V_4 = 0;
	Encoding_t711 * V_5 = {0};
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (String_t*)NULL;
		Dictionary_2_t710 * L_0 = WWW_get_responseHeaders_m2772(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker2< bool, String_t*, String_t** >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::TryGetValue(!0,!1&) */, L_0, (String_t*) &_stringLiteral209, (&V_0));
		if (!L_1)
		{
			goto IL_00b0;
		}
	}
	{
		String_t* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = String_IndexOf_m3535(L_2, (String_t*) &_stringLiteral210, 5, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) <= ((int32_t)(-1))))
		{
			goto IL_00b0;
		}
	}
	{
		String_t* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = String_IndexOf_m3536(L_5, ((int32_t)61), L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		int32_t L_8 = V_2;
		if ((((int32_t)L_8) <= ((int32_t)(-1))))
		{
			goto IL_00b0;
		}
	}
	{
		String_t* L_9 = V_0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		String_t* L_11 = String_Substring_m1879(L_9, ((int32_t)((int32_t)L_10+(int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12 = String_Trim_m3537(L_11, /*hidden argument*/NULL);
		CharU5BU5D_t101* L_13 = ((CharU5BU5D_t101*)SZArrayNew(CharU5BU5D_t101_il2cpp_TypeInfo_var, 2));
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_13, 0)) = (uint16_t)((int32_t)39);
		CharU5BU5D_t101* L_14 = L_13;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_14, 1)) = (uint16_t)((int32_t)34);
		NullCheck(L_12);
		String_t* L_15 = String_Trim_m3538(L_12, L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		String_t* L_16 = String_Trim_m3537(L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		String_t* L_17 = V_3;
		NullCheck(L_17);
		int32_t L_18 = String_IndexOf_m1912(L_17, ((int32_t)59), /*hidden argument*/NULL);
		V_4 = L_18;
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) <= ((int32_t)(-1))))
		{
			goto IL_0083;
		}
	}
	{
		String_t* L_20 = V_3;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		String_t* L_22 = String_Substring_m1855(L_20, 0, L_21, /*hidden argument*/NULL);
		V_3 = L_22;
	}

IL_0083:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_23 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t711_il2cpp_TypeInfo_var);
			Encoding_t711 * L_24 = Encoding_GetEncoding_m3539(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
			V_5 = L_24;
			goto IL_00b6;
		}

IL_0090:
		{
			; // IL_0090: leave IL_00b0
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t65_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0095;
		throw e;
	}

CATCH_0095:
	{ // begin catch(System.Exception)
		String_t* L_25 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_26 = String_Concat_m346(NULL /*static, unused*/, (String_t*) &_stringLiteral211, L_25, (String_t*) &_stringLiteral111, /*hidden argument*/NULL);
		Debug_Log_m243(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		goto IL_00b0;
	} // end catch (depth: 1)

IL_00b0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t711_il2cpp_TypeInfo_var);
		Encoding_t711 * L_27 = Encoding_get_UTF8_m3540(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_27;
	}

IL_00b6:
	{
		Encoding_t711 * L_28 = V_5;
		return L_28;
	}
}
// System.Byte[] UnityEngine.WWW::get_bytes()
extern "C" ByteU5BU5D_t551* WWW_get_bytes_m2777 (WWW_t548 * __this, const MethodInfo* method)
{
	typedef ByteU5BU5D_t551* (*WWW_get_bytes_m2777_ftn) (WWW_t548 *);
	static WWW_get_bytes_m2777_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_get_bytes_m2777_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_bytes()");
	return _il2cpp_icall_func(__this);
}
// System.String UnityEngine.WWW::get_error()
extern "C" String_t* WWW_get_error_m2778 (WWW_t548 * __this, const MethodInfo* method)
{
	typedef String_t* (*WWW_get_error_m2778_ftn) (WWW_t548 *);
	static WWW_get_error_m2778_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_get_error_m2778_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_error()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.WWW::get_isDone()
extern "C" bool WWW_get_isDone_m2779 (WWW_t548 * __this, const MethodInfo* method)
{
	typedef bool (*WWW_get_isDone_m2779_ftn) (WWW_t548 *);
	static WWW_get_isDone_m2779_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_get_isDone_m2779_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_isDone()");
	return _il2cpp_icall_func(__this);
}
// System.String[] UnityEngine.WWW::FlattenedHeadersFrom(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern TypeInfo* StringU5BU5D_t48_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t747_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t69_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m3541_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3542_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m3543_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m3544_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3545_MethodInfo_var;
extern "C" StringU5BU5D_t48* WWW_FlattenedHeadersFrom_m2780 (Object_t * __this /* static, unused */, Dictionary_2_t710 * ___headers, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(976);
		Enumerator_t747_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(977);
		IDisposable_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		Dictionary_2_GetEnumerator_m3541_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483954);
		Enumerator_get_Current_m3542_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483955);
		KeyValuePair_2_get_Key_m3543_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483956);
		KeyValuePair_2_get_Value_m3544_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483957);
		Enumerator_MoveNext_m3545_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483958);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t48* V_0 = {0};
	int32_t V_1 = 0;
	KeyValuePair_2_t746  V_2 = {0};
	Enumerator_t747  V_3 = {0};
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t710 * L_0 = ___headers;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (StringU5BU5D_t48*)NULL;
	}

IL_0008:
	{
		Dictionary_2_t710 * L_1 = ___headers;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Count() */, L_1);
		V_0 = ((StringU5BU5D_t48*)SZArrayNew(StringU5BU5D_t48_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_2*(int32_t)2))));
		V_1 = 0;
		Dictionary_2_t710 * L_3 = ___headers;
		NullCheck(L_3);
		Enumerator_t747  L_4 = Dictionary_2_GetEnumerator_m3541(L_3, /*hidden argument*/Dictionary_2_GetEnumerator_m3541_MethodInfo_var);
		V_3 = L_4;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0052;
		}

IL_0024:
		{
			KeyValuePair_2_t746  L_5 = Enumerator_get_Current_m3542((&V_3), /*hidden argument*/Enumerator_get_Current_m3542_MethodInfo_var);
			V_2 = L_5;
			StringU5BU5D_t48* L_6 = V_0;
			int32_t L_7 = V_1;
			int32_t L_8 = L_7;
			V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
			String_t* L_9 = KeyValuePair_2_get_Key_m3543((&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m3543_MethodInfo_var);
			NullCheck(L_9);
			String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.String::ToString() */, L_9);
			NullCheck(L_6);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_8);
			ArrayElementTypeCheck (L_6, L_10);
			*((String_t**)(String_t**)SZArrayLdElema(L_6, L_8)) = (String_t*)L_10;
			StringU5BU5D_t48* L_11 = V_0;
			int32_t L_12 = V_1;
			int32_t L_13 = L_12;
			V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
			String_t* L_14 = KeyValuePair_2_get_Value_m3544((&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m3544_MethodInfo_var);
			NullCheck(L_14);
			String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.String::ToString() */, L_14);
			NullCheck(L_11);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_13);
			ArrayElementTypeCheck (L_11, L_15);
			*((String_t**)(String_t**)SZArrayLdElema(L_11, L_13)) = (String_t*)L_15;
		}

IL_0052:
		{
			bool L_16 = Enumerator_MoveNext_m3545((&V_3), /*hidden argument*/Enumerator_MoveNext_m3545_MethodInfo_var);
			if (L_16)
			{
				goto IL_0024;
			}
		}

IL_005e:
		{
			IL2CPP_LEAVE(0x6F, FINALLY_0063);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_0063;
	}

FINALLY_0063:
	{ // begin finally (depth: 1)
		Enumerator_t747  L_17 = V_3;
		Enumerator_t747  L_18 = L_17;
		Object_t * L_19 = Box(Enumerator_t747_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_19);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t69_il2cpp_TypeInfo_var, L_19);
		IL2CPP_END_FINALLY(99)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(99)
	{
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_006f:
	{
		StringU5BU5D_t48* L_20 = V_0;
		return L_20;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::ParseHTTPHeaderString(System.String)
extern TypeInfo* ArgumentException_t387_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t710_il2cpp_TypeInfo_var;
extern TypeInfo* StringReader_t748_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3546_MethodInfo_var;
extern "C" Dictionary_2_t710 * WWW_ParseHTTPHeaderString_m2781 (Object_t * __this /* static, unused */, String_t* ___input, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t387_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(361);
		Dictionary_2_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		StringReader_t748_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(979);
		Dictionary_2__ctor_m3546_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483959);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t710 * V_0 = {0};
	StringReader_t748 * V_1 = {0};
	int32_t V_2 = 0;
	String_t* V_3 = {0};
	int32_t V_4 = 0;
	String_t* V_5 = {0};
	String_t* V_6 = {0};
	{
		String_t* L_0 = ___input;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentException_t387 * L_1 = (ArgumentException_t387 *)il2cpp_codegen_object_new (ArgumentException_t387_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2006(L_1, (String_t*) &_stringLiteral212, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Dictionary_2_t710 * L_2 = (Dictionary_2_t710 *)il2cpp_codegen_object_new (Dictionary_2_t710_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3546(L_2, /*hidden argument*/Dictionary_2__ctor_m3546_MethodInfo_var);
		V_0 = L_2;
		String_t* L_3 = ___input;
		StringReader_t748 * L_4 = (StringReader_t748 *)il2cpp_codegen_object_new (StringReader_t748_il2cpp_TypeInfo_var);
		StringReader__ctor_m3547(L_4, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		V_2 = 0;
	}

IL_0020:
	{
		StringReader_t748 * L_5 = V_1;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.IO.StringReader::ReadLine() */, L_5);
		V_3 = L_6;
		String_t* L_7 = V_3;
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		goto IL_00a2;
	}

IL_0032:
	{
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		V_2 = ((int32_t)((int32_t)L_9+(int32_t)1));
		if (L_9)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_10 = V_3;
		NullCheck(L_10);
		bool L_11 = String_StartsWith_m3548(L_10, (String_t*) &_stringLiteral213, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		Dictionary_2_t710 * L_12 = V_0;
		String_t* L_13 = V_3;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_12, (String_t*) &_stringLiteral214, L_13);
		goto IL_0020;
	}

IL_005d:
	{
		String_t* L_14 = V_3;
		NullCheck(L_14);
		int32_t L_15 = String_IndexOf_m3549(L_14, (String_t*) &_stringLiteral215, /*hidden argument*/NULL);
		V_4 = L_15;
		int32_t L_16 = V_4;
		if ((!(((uint32_t)L_16) == ((uint32_t)(-1)))))
		{
			goto IL_0077;
		}
	}
	{
		goto IL_0020;
	}

IL_0077:
	{
		String_t* L_17 = V_3;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		String_t* L_19 = String_Substring_m1855(L_17, 0, L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		String_t* L_20 = String_ToUpper_m3550(L_19, /*hidden argument*/NULL);
		V_5 = L_20;
		String_t* L_21 = V_3;
		int32_t L_22 = V_4;
		NullCheck(L_21);
		String_t* L_23 = String_Substring_m1879(L_21, ((int32_t)((int32_t)L_22+(int32_t)2)), /*hidden argument*/NULL);
		V_6 = L_23;
		Dictionary_2_t710 * L_24 = V_0;
		String_t* L_25 = V_5;
		String_t* L_26 = V_6;
		NullCheck(L_24);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_24, L_25, L_26);
		goto IL_0020;
	}

IL_00a2:
	{
		Dictionary_2_t710 * L_27 = V_0;
		return L_27;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.IO.MemoryStream
#include "mscorlib_System_IO_MemoryStream.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_26.h"
// System.Collections.Generic.List`1<System.Byte[]>
#include "mscorlib_System_Collections_Generic_List_1_gen_27.h"
// System.IO.MemoryStream
#include "mscorlib_System_IO_MemoryStreamMethodDeclarations.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_26MethodDeclarations.h"
// UnityEngine.WWWTranscoder
#include "UnityEngine_UnityEngine_WWWTranscoderMethodDeclarations.h"
// System.Collections.Generic.List`1<System.Byte[]>
#include "mscorlib_System_Collections_Generic_List_1_gen_27MethodDeclarations.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"


// System.Void UnityEngine.WWWForm::.ctor()
extern TypeInfo* List_1_t549_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t550_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t551_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3551_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m3552_MethodInfo_var;
extern "C" void WWWForm__ctor_m2782 (WWWForm_t552 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t549_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(981);
		List_1_t550_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(982);
		ByteU5BU5D_t551_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(980);
		List_1__ctor_m3551_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483960);
		List_1__ctor_m3552_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483961);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		List_1_t549 * L_0 = (List_1_t549 *)il2cpp_codegen_object_new (List_1_t549_il2cpp_TypeInfo_var);
		List_1__ctor_m3551(L_0, /*hidden argument*/List_1__ctor_m3551_MethodInfo_var);
		__this->___formData_0 = L_0;
		List_1_t550 * L_1 = (List_1_t550 *)il2cpp_codegen_object_new (List_1_t550_il2cpp_TypeInfo_var);
		List_1__ctor_m3552(L_1, /*hidden argument*/List_1__ctor_m3552_MethodInfo_var);
		__this->___fieldNames_1 = L_1;
		List_1_t550 * L_2 = (List_1_t550 *)il2cpp_codegen_object_new (List_1_t550_il2cpp_TypeInfo_var);
		List_1__ctor_m3552(L_2, /*hidden argument*/List_1__ctor_m3552_MethodInfo_var);
		__this->___fileNames_2 = L_2;
		List_1_t550 * L_3 = (List_1_t550 *)il2cpp_codegen_object_new (List_1_t550_il2cpp_TypeInfo_var);
		List_1__ctor_m3552(L_3, /*hidden argument*/List_1__ctor_m3552_MethodInfo_var);
		__this->___types_3 = L_3;
		__this->___boundary_4 = ((ByteU5BU5D_t551*)SZArrayNew(ByteU5BU5D_t551_il2cpp_TypeInfo_var, ((int32_t)40)));
		V_0 = 0;
		goto IL_0076;
	}

IL_0046:
	{
		int32_t L_4 = Random_Range_m212(NULL /*static, unused*/, ((int32_t)48), ((int32_t)110), /*hidden argument*/NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)57))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)7));
	}

IL_005c:
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)90))))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)6));
	}

IL_0068:
	{
		ByteU5BU5D_t551* L_9 = (__this->___boundary_4);
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_9, L_10)) = (uint8_t)(((uint8_t)L_11));
		int32_t L_12 = V_0;
		V_0 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0076:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)40))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
extern TypeInfo* Encoding_t711_il2cpp_TypeInfo_var;
extern "C" void WWWForm_AddField_m2783 (WWWForm_t552 * __this, String_t* ___fieldName, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Encoding_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(975);
		s_Il2CppMethodIntialized = true;
	}
	Encoding_t711 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t711_il2cpp_TypeInfo_var);
		Encoding_t711 * L_0 = Encoding_get_UTF8_m3540(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = ___fieldName;
		String_t* L_2 = ___value;
		Encoding_t711 * L_3 = V_0;
		WWWForm_AddField_m2784(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String,System.Text.Encoding)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void WWWForm_AddField_m2784 (WWWForm_t552 * __this, String_t* ___fieldName, String_t* ___value, Encoding_t711 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t550 * L_0 = (__this->___fieldNames_1);
		String_t* L_1 = ___fieldName;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_0, L_1);
		List_1_t550 * L_2 = (__this->___fileNames_2);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_2, (String_t*)NULL);
		List_1_t549 * L_3 = (__this->___formData_0);
		Encoding_t711 * L_4 = ___e;
		String_t* L_5 = ___value;
		NullCheck(L_4);
		ByteU5BU5D_t551* L_6 = (ByteU5BU5D_t551*)VirtFuncInvoker1< ByteU5BU5D_t551*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_4, L_5);
		NullCheck(L_3);
		VirtActionInvoker1< ByteU5BU5D_t551* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(!0) */, L_3, L_6);
		List_1_t550 * L_7 = (__this->___types_3);
		Encoding_t711 * L_8 = ___e;
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(22 /* System.String System.Text.Encoding::get_WebName() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m346(NULL /*static, unused*/, (String_t*) &_stringLiteral230, L_9, (String_t*) &_stringLiteral218, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_7, L_10);
		return;
	}
}
// System.Void UnityEngine.WWWForm::AddField(System.String,System.Int32)
extern "C" void WWWForm_AddField_m2785 (WWWForm_t552 * __this, String_t* ___fieldName, int32_t ___i, const MethodInfo* method)
{
	{
		String_t* L_0 = ___fieldName;
		String_t* L_1 = Int32_ToString_m233((&___i), /*hidden argument*/NULL);
		WWWForm_AddField_m2783(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWWForm::get_headers()
extern TypeInfo* Dictionary_2_t710_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t711_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3546_MethodInfo_var;
extern "C" Dictionary_2_t710 * WWWForm_get_headers_m2786 (WWWForm_t552 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		Encoding_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(975);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		Dictionary_2__ctor_m3546_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483959);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t710 * V_0 = {0};
	{
		Dictionary_2_t710 * L_0 = (Dictionary_2_t710 *)il2cpp_codegen_object_new (Dictionary_2_t710_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3546(L_0, /*hidden argument*/Dictionary_2__ctor_m3546_MethodInfo_var);
		V_0 = L_0;
		bool L_1 = (__this->___containsFiles_5);
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		Dictionary_2_t710 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t711_il2cpp_TypeInfo_var);
		Encoding_t711 * L_3 = Encoding_get_UTF8_m3540(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t551* L_4 = (__this->___boundary_4);
		ByteU5BU5D_t551* L_5 = (__this->___boundary_4);
		NullCheck(L_5);
		NullCheck(L_3);
		String_t* L_6 = (String_t*)VirtFuncInvoker3< String_t*, ByteU5BU5D_t551*, int32_t, int32_t >::Invoke(19 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, 0, (((int32_t)(((Array_t *)L_5)->max_length))));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m346(NULL /*static, unused*/, (String_t*) &_stringLiteral217, L_6, (String_t*) &_stringLiteral218, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_2, (String_t*) &_stringLiteral216, L_7);
		goto IL_0059;
	}

IL_0049:
	{
		Dictionary_2_t710 * L_8 = V_0;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_8, (String_t*) &_stringLiteral216, (String_t*) &_stringLiteral219);
	}

IL_0059:
	{
		Dictionary_2_t710 * L_9 = V_0;
		return L_9;
	}
}
// System.Byte[] UnityEngine.WWWForm::get_data()
extern TypeInfo* MemoryStream_t749_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t711_il2cpp_TypeInfo_var;
extern TypeInfo* WWWTranscoder_t553_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t48_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t69_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t551* WWWForm_get_data_m2787 (WWWForm_t552 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MemoryStream_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(983);
		Encoding_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(975);
		WWWTranscoder_t553_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		StringU5BU5D_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(976);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		IDisposable_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t551* V_0 = {0};
	ByteU5BU5D_t551* V_1 = {0};
	ByteU5BU5D_t551* V_2 = {0};
	ByteU5BU5D_t551* V_3 = {0};
	ByteU5BU5D_t551* V_4 = {0};
	ByteU5BU5D_t551* V_5 = {0};
	MemoryStream_t749 * V_6 = {0};
	int32_t V_7 = 0;
	ByteU5BU5D_t551* V_8 = {0};
	String_t* V_9 = {0};
	String_t* V_10 = {0};
	ByteU5BU5D_t551* V_11 = {0};
	String_t* V_12 = {0};
	ByteU5BU5D_t551* V_13 = {0};
	ByteU5BU5D_t551* V_14 = {0};
	ByteU5BU5D_t551* V_15 = {0};
	ByteU5BU5D_t551* V_16 = {0};
	MemoryStream_t749 * V_17 = {0};
	int32_t V_18 = 0;
	ByteU5BU5D_t551* V_19 = {0};
	ByteU5BU5D_t551* V_20 = {0};
	ByteU5BU5D_t551* V_21 = {0};
	ByteU5BU5D_t551* V_22 = {0};
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->___containsFiles_5);
		if (!L_0)
		{
			goto IL_0311;
		}
	}
	{
		Encoding_t711 * L_1 = WWW_get_DefaultEncoding_m2775(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		ByteU5BU5D_t551* L_2 = (ByteU5BU5D_t551*)VirtFuncInvoker1< ByteU5BU5D_t551*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_1, (String_t*) &_stringLiteral220);
		V_0 = L_2;
		Encoding_t711 * L_3 = WWW_get_DefaultEncoding_m2775(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		ByteU5BU5D_t551* L_4 = (ByteU5BU5D_t551*)VirtFuncInvoker1< ByteU5BU5D_t551*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_3, (String_t*) &_stringLiteral221);
		V_1 = L_4;
		Encoding_t711 * L_5 = WWW_get_DefaultEncoding_m2775(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		ByteU5BU5D_t551* L_6 = (ByteU5BU5D_t551*)VirtFuncInvoker1< ByteU5BU5D_t551*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, (String_t*) &_stringLiteral222);
		V_2 = L_6;
		Encoding_t711 * L_7 = WWW_get_DefaultEncoding_m2775(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		ByteU5BU5D_t551* L_8 = (ByteU5BU5D_t551*)VirtFuncInvoker1< ByteU5BU5D_t551*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_7, (String_t*) &_stringLiteral223);
		V_3 = L_8;
		Encoding_t711 * L_9 = WWW_get_DefaultEncoding_m2775(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_9);
		ByteU5BU5D_t551* L_10 = (ByteU5BU5D_t551*)VirtFuncInvoker1< ByteU5BU5D_t551*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_9, (String_t*) &_stringLiteral218);
		V_4 = L_10;
		Encoding_t711 * L_11 = WWW_get_DefaultEncoding_m2775(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_11);
		ByteU5BU5D_t551* L_12 = (ByteU5BU5D_t551*)VirtFuncInvoker1< ByteU5BU5D_t551*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_11, (String_t*) &_stringLiteral224);
		V_5 = L_12;
		MemoryStream_t749 * L_13 = (MemoryStream_t749 *)il2cpp_codegen_object_new (MemoryStream_t749_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m3553(L_13, ((int32_t)1024), /*hidden argument*/NULL);
		V_6 = L_13;
	}

IL_0079:
	try
	{ // begin try (depth: 1)
		{
			V_7 = 0;
			goto IL_0297;
		}

IL_0081:
		{
			MemoryStream_t749 * L_14 = V_6;
			ByteU5BU5D_t551* L_15 = V_1;
			ByteU5BU5D_t551* L_16 = V_1;
			NullCheck(L_16);
			NullCheck(L_14);
			VirtActionInvoker3< ByteU5BU5D_t551*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_14, L_15, 0, (((int32_t)(((Array_t *)L_16)->max_length))));
			MemoryStream_t749 * L_17 = V_6;
			ByteU5BU5D_t551* L_18 = V_0;
			ByteU5BU5D_t551* L_19 = V_0;
			NullCheck(L_19);
			NullCheck(L_17);
			VirtActionInvoker3< ByteU5BU5D_t551*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_17, L_18, 0, (((int32_t)(((Array_t *)L_19)->max_length))));
			MemoryStream_t749 * L_20 = V_6;
			ByteU5BU5D_t551* L_21 = (__this->___boundary_4);
			ByteU5BU5D_t551* L_22 = (__this->___boundary_4);
			NullCheck(L_22);
			NullCheck(L_20);
			VirtActionInvoker3< ByteU5BU5D_t551*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_20, L_21, 0, (((int32_t)(((Array_t *)L_22)->max_length))));
			MemoryStream_t749 * L_23 = V_6;
			ByteU5BU5D_t551* L_24 = V_1;
			ByteU5BU5D_t551* L_25 = V_1;
			NullCheck(L_25);
			NullCheck(L_23);
			VirtActionInvoker3< ByteU5BU5D_t551*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_23, L_24, 0, (((int32_t)(((Array_t *)L_25)->max_length))));
			MemoryStream_t749 * L_26 = V_6;
			ByteU5BU5D_t551* L_27 = V_2;
			ByteU5BU5D_t551* L_28 = V_2;
			NullCheck(L_28);
			NullCheck(L_26);
			VirtActionInvoker3< ByteU5BU5D_t551*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_26, L_27, 0, (((int32_t)(((Array_t *)L_28)->max_length))));
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t711_il2cpp_TypeInfo_var);
			Encoding_t711 * L_29 = Encoding_get_UTF8_m3540(NULL /*static, unused*/, /*hidden argument*/NULL);
			List_1_t550 * L_30 = (__this->___types_3);
			int32_t L_31 = V_7;
			NullCheck(L_30);
			String_t* L_32 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_30, L_31);
			NullCheck(L_29);
			ByteU5BU5D_t551* L_33 = (ByteU5BU5D_t551*)VirtFuncInvoker1< ByteU5BU5D_t551*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_29, L_32);
			V_8 = L_33;
			MemoryStream_t749 * L_34 = V_6;
			ByteU5BU5D_t551* L_35 = V_8;
			ByteU5BU5D_t551* L_36 = V_8;
			NullCheck(L_36);
			NullCheck(L_34);
			VirtActionInvoker3< ByteU5BU5D_t551*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_34, L_35, 0, (((int32_t)(((Array_t *)L_36)->max_length))));
			MemoryStream_t749 * L_37 = V_6;
			ByteU5BU5D_t551* L_38 = V_1;
			ByteU5BU5D_t551* L_39 = V_1;
			NullCheck(L_39);
			NullCheck(L_37);
			VirtActionInvoker3< ByteU5BU5D_t551*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_37, L_38, 0, (((int32_t)(((Array_t *)L_39)->max_length))));
			MemoryStream_t749 * L_40 = V_6;
			ByteU5BU5D_t551* L_41 = V_3;
			ByteU5BU5D_t551* L_42 = V_3;
			NullCheck(L_42);
			NullCheck(L_40);
			VirtActionInvoker3< ByteU5BU5D_t551*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_40, L_41, 0, (((int32_t)(((Array_t *)L_42)->max_length))));
			Encoding_t711 * L_43 = Encoding_get_UTF8_m3540(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_43);
			String_t* L_44 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String System.Text.Encoding::get_HeaderName() */, L_43);
			V_9 = L_44;
			List_1_t550 * L_45 = (__this->___fieldNames_1);
			int32_t L_46 = V_7;
			NullCheck(L_45);
			String_t* L_47 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_45, L_46);
			V_10 = L_47;
			String_t* L_48 = V_10;
			Encoding_t711 * L_49 = Encoding_get_UTF8_m3540(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t553_il2cpp_TypeInfo_var);
			bool L_50 = WWWTranscoder_SevenBitClean_m2794(NULL /*static, unused*/, L_48, L_49, /*hidden argument*/NULL);
			if (!L_50)
			{
				goto IL_0144;
			}
		}

IL_0132:
		{
			String_t* L_51 = V_10;
			NullCheck(L_51);
			int32_t L_52 = String_IndexOf_m3549(L_51, (String_t*) &_stringLiteral225, /*hidden argument*/NULL);
			if ((((int32_t)L_52) <= ((int32_t)(-1))))
			{
				goto IL_017d;
			}
		}

IL_0144:
		{
			StringU5BU5D_t48* L_53 = ((StringU5BU5D_t48*)SZArrayNew(StringU5BU5D_t48_il2cpp_TypeInfo_var, 5));
			NullCheck(L_53);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_53, 0);
			ArrayElementTypeCheck (L_53, (String_t*) &_stringLiteral225);
			*((String_t**)(String_t**)SZArrayLdElema(L_53, 0)) = (String_t*)(String_t*) &_stringLiteral225;
			StringU5BU5D_t48* L_54 = L_53;
			String_t* L_55 = V_9;
			NullCheck(L_54);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_54, 1);
			ArrayElementTypeCheck (L_54, L_55);
			*((String_t**)(String_t**)SZArrayLdElema(L_54, 1)) = (String_t*)L_55;
			StringU5BU5D_t48* L_56 = L_54;
			NullCheck(L_56);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_56, 2);
			ArrayElementTypeCheck (L_56, (String_t*) &_stringLiteral226);
			*((String_t**)(String_t**)SZArrayLdElema(L_56, 2)) = (String_t*)(String_t*) &_stringLiteral226;
			StringU5BU5D_t48* L_57 = L_56;
			String_t* L_58 = V_10;
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t711_il2cpp_TypeInfo_var);
			Encoding_t711 * L_59 = Encoding_get_UTF8_m3540(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t553_il2cpp_TypeInfo_var);
			String_t* L_60 = WWWTranscoder_QPEncode_m2791(NULL /*static, unused*/, L_58, L_59, /*hidden argument*/NULL);
			NullCheck(L_57);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_57, 3);
			ArrayElementTypeCheck (L_57, L_60);
			*((String_t**)(String_t**)SZArrayLdElema(L_57, 3)) = (String_t*)L_60;
			StringU5BU5D_t48* L_61 = L_57;
			NullCheck(L_61);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_61, 4);
			ArrayElementTypeCheck (L_61, (String_t*) &_stringLiteral227);
			*((String_t**)(String_t**)SZArrayLdElema(L_61, 4)) = (String_t*)(String_t*) &_stringLiteral227;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_62 = String_Concat_m3554(NULL /*static, unused*/, L_61, /*hidden argument*/NULL);
			V_10 = L_62;
		}

IL_017d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t711_il2cpp_TypeInfo_var);
			Encoding_t711 * L_63 = Encoding_get_UTF8_m3540(NULL /*static, unused*/, /*hidden argument*/NULL);
			String_t* L_64 = V_10;
			NullCheck(L_63);
			ByteU5BU5D_t551* L_65 = (ByteU5BU5D_t551*)VirtFuncInvoker1< ByteU5BU5D_t551*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_63, L_64);
			V_11 = L_65;
			MemoryStream_t749 * L_66 = V_6;
			ByteU5BU5D_t551* L_67 = V_11;
			ByteU5BU5D_t551* L_68 = V_11;
			NullCheck(L_68);
			NullCheck(L_66);
			VirtActionInvoker3< ByteU5BU5D_t551*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_66, L_67, 0, (((int32_t)(((Array_t *)L_68)->max_length))));
			MemoryStream_t749 * L_69 = V_6;
			ByteU5BU5D_t551* L_70 = V_4;
			ByteU5BU5D_t551* L_71 = V_4;
			NullCheck(L_71);
			NullCheck(L_69);
			VirtActionInvoker3< ByteU5BU5D_t551*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_69, L_70, 0, (((int32_t)(((Array_t *)L_71)->max_length))));
			List_1_t550 * L_72 = (__this->___fileNames_2);
			int32_t L_73 = V_7;
			NullCheck(L_72);
			String_t* L_74 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_72, L_73);
			if (!L_74)
			{
				goto IL_025c;
			}
		}

IL_01b9:
		{
			List_1_t550 * L_75 = (__this->___fileNames_2);
			int32_t L_76 = V_7;
			NullCheck(L_75);
			String_t* L_77 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_75, L_76);
			V_12 = L_77;
			String_t* L_78 = V_12;
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t711_il2cpp_TypeInfo_var);
			Encoding_t711 * L_79 = Encoding_get_UTF8_m3540(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t553_il2cpp_TypeInfo_var);
			bool L_80 = WWWTranscoder_SevenBitClean_m2794(NULL /*static, unused*/, L_78, L_79, /*hidden argument*/NULL);
			if (!L_80)
			{
				goto IL_01eb;
			}
		}

IL_01d9:
		{
			String_t* L_81 = V_12;
			NullCheck(L_81);
			int32_t L_82 = String_IndexOf_m3549(L_81, (String_t*) &_stringLiteral225, /*hidden argument*/NULL);
			if ((((int32_t)L_82) <= ((int32_t)(-1))))
			{
				goto IL_0224;
			}
		}

IL_01eb:
		{
			StringU5BU5D_t48* L_83 = ((StringU5BU5D_t48*)SZArrayNew(StringU5BU5D_t48_il2cpp_TypeInfo_var, 5));
			NullCheck(L_83);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_83, 0);
			ArrayElementTypeCheck (L_83, (String_t*) &_stringLiteral225);
			*((String_t**)(String_t**)SZArrayLdElema(L_83, 0)) = (String_t*)(String_t*) &_stringLiteral225;
			StringU5BU5D_t48* L_84 = L_83;
			String_t* L_85 = V_9;
			NullCheck(L_84);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_84, 1);
			ArrayElementTypeCheck (L_84, L_85);
			*((String_t**)(String_t**)SZArrayLdElema(L_84, 1)) = (String_t*)L_85;
			StringU5BU5D_t48* L_86 = L_84;
			NullCheck(L_86);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_86, 2);
			ArrayElementTypeCheck (L_86, (String_t*) &_stringLiteral226);
			*((String_t**)(String_t**)SZArrayLdElema(L_86, 2)) = (String_t*)(String_t*) &_stringLiteral226;
			StringU5BU5D_t48* L_87 = L_86;
			String_t* L_88 = V_12;
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t711_il2cpp_TypeInfo_var);
			Encoding_t711 * L_89 = Encoding_get_UTF8_m3540(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t553_il2cpp_TypeInfo_var);
			String_t* L_90 = WWWTranscoder_QPEncode_m2791(NULL /*static, unused*/, L_88, L_89, /*hidden argument*/NULL);
			NullCheck(L_87);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_87, 3);
			ArrayElementTypeCheck (L_87, L_90);
			*((String_t**)(String_t**)SZArrayLdElema(L_87, 3)) = (String_t*)L_90;
			StringU5BU5D_t48* L_91 = L_87;
			NullCheck(L_91);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_91, 4);
			ArrayElementTypeCheck (L_91, (String_t*) &_stringLiteral227);
			*((String_t**)(String_t**)SZArrayLdElema(L_91, 4)) = (String_t*)(String_t*) &_stringLiteral227;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_92 = String_Concat_m3554(NULL /*static, unused*/, L_91, /*hidden argument*/NULL);
			V_12 = L_92;
		}

IL_0224:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t711_il2cpp_TypeInfo_var);
			Encoding_t711 * L_93 = Encoding_get_UTF8_m3540(NULL /*static, unused*/, /*hidden argument*/NULL);
			String_t* L_94 = V_12;
			NullCheck(L_93);
			ByteU5BU5D_t551* L_95 = (ByteU5BU5D_t551*)VirtFuncInvoker1< ByteU5BU5D_t551*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_93, L_94);
			V_13 = L_95;
			MemoryStream_t749 * L_96 = V_6;
			ByteU5BU5D_t551* L_97 = V_5;
			ByteU5BU5D_t551* L_98 = V_5;
			NullCheck(L_98);
			NullCheck(L_96);
			VirtActionInvoker3< ByteU5BU5D_t551*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_96, L_97, 0, (((int32_t)(((Array_t *)L_98)->max_length))));
			MemoryStream_t749 * L_99 = V_6;
			ByteU5BU5D_t551* L_100 = V_13;
			ByteU5BU5D_t551* L_101 = V_13;
			NullCheck(L_101);
			NullCheck(L_99);
			VirtActionInvoker3< ByteU5BU5D_t551*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_99, L_100, 0, (((int32_t)(((Array_t *)L_101)->max_length))));
			MemoryStream_t749 * L_102 = V_6;
			ByteU5BU5D_t551* L_103 = V_4;
			ByteU5BU5D_t551* L_104 = V_4;
			NullCheck(L_104);
			NullCheck(L_102);
			VirtActionInvoker3< ByteU5BU5D_t551*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_102, L_103, 0, (((int32_t)(((Array_t *)L_104)->max_length))));
		}

IL_025c:
		{
			MemoryStream_t749 * L_105 = V_6;
			ByteU5BU5D_t551* L_106 = V_1;
			ByteU5BU5D_t551* L_107 = V_1;
			NullCheck(L_107);
			NullCheck(L_105);
			VirtActionInvoker3< ByteU5BU5D_t551*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_105, L_106, 0, (((int32_t)(((Array_t *)L_107)->max_length))));
			MemoryStream_t749 * L_108 = V_6;
			ByteU5BU5D_t551* L_109 = V_1;
			ByteU5BU5D_t551* L_110 = V_1;
			NullCheck(L_110);
			NullCheck(L_108);
			VirtActionInvoker3< ByteU5BU5D_t551*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_108, L_109, 0, (((int32_t)(((Array_t *)L_110)->max_length))));
			List_1_t549 * L_111 = (__this->___formData_0);
			int32_t L_112 = V_7;
			NullCheck(L_111);
			ByteU5BU5D_t551* L_113 = (ByteU5BU5D_t551*)VirtFuncInvoker1< ByteU5BU5D_t551*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Byte[]>::get_Item(System.Int32) */, L_111, L_112);
			V_14 = L_113;
			MemoryStream_t749 * L_114 = V_6;
			ByteU5BU5D_t551* L_115 = V_14;
			ByteU5BU5D_t551* L_116 = V_14;
			NullCheck(L_116);
			NullCheck(L_114);
			VirtActionInvoker3< ByteU5BU5D_t551*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_114, L_115, 0, (((int32_t)(((Array_t *)L_116)->max_length))));
			int32_t L_117 = V_7;
			V_7 = ((int32_t)((int32_t)L_117+(int32_t)1));
		}

IL_0297:
		{
			int32_t L_118 = V_7;
			List_1_t549 * L_119 = (__this->___formData_0);
			NullCheck(L_119);
			int32_t L_120 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count() */, L_119);
			if ((((int32_t)L_118) < ((int32_t)L_120)))
			{
				goto IL_0081;
			}
		}

IL_02a9:
		{
			MemoryStream_t749 * L_121 = V_6;
			ByteU5BU5D_t551* L_122 = V_1;
			ByteU5BU5D_t551* L_123 = V_1;
			NullCheck(L_123);
			NullCheck(L_121);
			VirtActionInvoker3< ByteU5BU5D_t551*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_121, L_122, 0, (((int32_t)(((Array_t *)L_123)->max_length))));
			MemoryStream_t749 * L_124 = V_6;
			ByteU5BU5D_t551* L_125 = V_0;
			ByteU5BU5D_t551* L_126 = V_0;
			NullCheck(L_126);
			NullCheck(L_124);
			VirtActionInvoker3< ByteU5BU5D_t551*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_124, L_125, 0, (((int32_t)(((Array_t *)L_126)->max_length))));
			MemoryStream_t749 * L_127 = V_6;
			ByteU5BU5D_t551* L_128 = (__this->___boundary_4);
			ByteU5BU5D_t551* L_129 = (__this->___boundary_4);
			NullCheck(L_129);
			NullCheck(L_127);
			VirtActionInvoker3< ByteU5BU5D_t551*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_127, L_128, 0, (((int32_t)(((Array_t *)L_129)->max_length))));
			MemoryStream_t749 * L_130 = V_6;
			ByteU5BU5D_t551* L_131 = V_0;
			ByteU5BU5D_t551* L_132 = V_0;
			NullCheck(L_132);
			NullCheck(L_130);
			VirtActionInvoker3< ByteU5BU5D_t551*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_130, L_131, 0, (((int32_t)(((Array_t *)L_132)->max_length))));
			MemoryStream_t749 * L_133 = V_6;
			ByteU5BU5D_t551* L_134 = V_1;
			ByteU5BU5D_t551* L_135 = V_1;
			NullCheck(L_135);
			NullCheck(L_133);
			VirtActionInvoker3< ByteU5BU5D_t551*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_133, L_134, 0, (((int32_t)(((Array_t *)L_135)->max_length))));
			MemoryStream_t749 * L_136 = V_6;
			NullCheck(L_136);
			ByteU5BU5D_t551* L_137 = (ByteU5BU5D_t551*)VirtFuncInvoker0< ByteU5BU5D_t551* >::Invoke(25 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_136);
			V_22 = L_137;
			IL2CPP_LEAVE(0x3F7, FINALLY_0302);
		}

IL_02fd:
		{
			; // IL_02fd: leave IL_0311
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_0302;
	}

FINALLY_0302:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t749 * L_138 = V_6;
			if (!L_138)
			{
				goto IL_0310;
			}
		}

IL_0309:
		{
			MemoryStream_t749 * L_139 = V_6;
			NullCheck(L_139);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t69_il2cpp_TypeInfo_var, L_139);
		}

IL_0310:
		{
			IL2CPP_END_FINALLY(770)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(770)
	{
		IL2CPP_JUMP_TBL(0x3F7, IL_03f7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_0311:
	{
		Encoding_t711 * L_140 = WWW_get_DefaultEncoding_m2775(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_140);
		ByteU5BU5D_t551* L_141 = (ByteU5BU5D_t551*)VirtFuncInvoker1< ByteU5BU5D_t551*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_140, (String_t*) &_stringLiteral228);
		V_15 = L_141;
		Encoding_t711 * L_142 = WWW_get_DefaultEncoding_m2775(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_142);
		ByteU5BU5D_t551* L_143 = (ByteU5BU5D_t551*)VirtFuncInvoker1< ByteU5BU5D_t551*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_142, (String_t*) &_stringLiteral229);
		V_16 = L_143;
		MemoryStream_t749 * L_144 = (MemoryStream_t749 *)il2cpp_codegen_object_new (MemoryStream_t749_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m3553(L_144, ((int32_t)1024), /*hidden argument*/NULL);
		V_17 = L_144;
	}

IL_033f:
	try
	{ // begin try (depth: 1)
		{
			V_18 = 0;
			goto IL_03c3;
		}

IL_0347:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t711_il2cpp_TypeInfo_var);
			Encoding_t711 * L_145 = Encoding_get_UTF8_m3540(NULL /*static, unused*/, /*hidden argument*/NULL);
			List_1_t550 * L_146 = (__this->___fieldNames_1);
			int32_t L_147 = V_18;
			NullCheck(L_146);
			String_t* L_148 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_146, L_147);
			NullCheck(L_145);
			ByteU5BU5D_t551* L_149 = (ByteU5BU5D_t551*)VirtFuncInvoker1< ByteU5BU5D_t551*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_145, L_148);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t553_il2cpp_TypeInfo_var);
			ByteU5BU5D_t551* L_150 = WWWTranscoder_URLEncode_m2790(NULL /*static, unused*/, L_149, /*hidden argument*/NULL);
			V_19 = L_150;
			List_1_t549 * L_151 = (__this->___formData_0);
			int32_t L_152 = V_18;
			NullCheck(L_151);
			ByteU5BU5D_t551* L_153 = (ByteU5BU5D_t551*)VirtFuncInvoker1< ByteU5BU5D_t551*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Byte[]>::get_Item(System.Int32) */, L_151, L_152);
			V_20 = L_153;
			ByteU5BU5D_t551* L_154 = V_20;
			ByteU5BU5D_t551* L_155 = WWWTranscoder_URLEncode_m2790(NULL /*static, unused*/, L_154, /*hidden argument*/NULL);
			V_21 = L_155;
			int32_t L_156 = V_18;
			if ((((int32_t)L_156) <= ((int32_t)0)))
			{
				goto IL_0393;
			}
		}

IL_0385:
		{
			MemoryStream_t749 * L_157 = V_17;
			ByteU5BU5D_t551* L_158 = V_15;
			ByteU5BU5D_t551* L_159 = V_15;
			NullCheck(L_159);
			NullCheck(L_157);
			VirtActionInvoker3< ByteU5BU5D_t551*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_157, L_158, 0, (((int32_t)(((Array_t *)L_159)->max_length))));
		}

IL_0393:
		{
			MemoryStream_t749 * L_160 = V_17;
			ByteU5BU5D_t551* L_161 = V_19;
			ByteU5BU5D_t551* L_162 = V_19;
			NullCheck(L_162);
			NullCheck(L_160);
			VirtActionInvoker3< ByteU5BU5D_t551*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_160, L_161, 0, (((int32_t)(((Array_t *)L_162)->max_length))));
			MemoryStream_t749 * L_163 = V_17;
			ByteU5BU5D_t551* L_164 = V_16;
			ByteU5BU5D_t551* L_165 = V_16;
			NullCheck(L_165);
			NullCheck(L_163);
			VirtActionInvoker3< ByteU5BU5D_t551*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_163, L_164, 0, (((int32_t)(((Array_t *)L_165)->max_length))));
			MemoryStream_t749 * L_166 = V_17;
			ByteU5BU5D_t551* L_167 = V_21;
			ByteU5BU5D_t551* L_168 = V_21;
			NullCheck(L_168);
			NullCheck(L_166);
			VirtActionInvoker3< ByteU5BU5D_t551*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_166, L_167, 0, (((int32_t)(((Array_t *)L_168)->max_length))));
			int32_t L_169 = V_18;
			V_18 = ((int32_t)((int32_t)L_169+(int32_t)1));
		}

IL_03c3:
		{
			int32_t L_170 = V_18;
			List_1_t549 * L_171 = (__this->___formData_0);
			NullCheck(L_171);
			int32_t L_172 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count() */, L_171);
			if ((((int32_t)L_170) < ((int32_t)L_172)))
			{
				goto IL_0347;
			}
		}

IL_03d5:
		{
			MemoryStream_t749 * L_173 = V_17;
			NullCheck(L_173);
			ByteU5BU5D_t551* L_174 = (ByteU5BU5D_t551*)VirtFuncInvoker0< ByteU5BU5D_t551* >::Invoke(25 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_173);
			V_22 = L_174;
			IL2CPP_LEAVE(0x3F7, FINALLY_03e8);
		}

IL_03e3:
		{
			; // IL_03e3: leave IL_03f7
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_03e8;
	}

FINALLY_03e8:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t749 * L_175 = V_17;
			if (!L_175)
			{
				goto IL_03f6;
			}
		}

IL_03ef:
		{
			MemoryStream_t749 * L_176 = V_17;
			NullCheck(L_176);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t69_il2cpp_TypeInfo_var, L_176);
		}

IL_03f6:
		{
			IL2CPP_END_FINALLY(1000)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1000)
	{
		IL2CPP_JUMP_TBL(0x3F7, IL_03f7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_03f7:
	{
		ByteU5BU5D_t551* L_177 = V_22;
		return L_177;
	}
}
// UnityEngine.WWWTranscoder
#include "UnityEngine_UnityEngine_WWWTranscoder.h"
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.WWWTranscoder::.cctor()
extern TypeInfo* WWWTranscoder_t553_il2cpp_TypeInfo_var;
extern "C" void WWWTranscoder__cctor_m2788 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WWWTranscoder_t553_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		s_Il2CppMethodIntialized = true;
	}
	{
		Encoding_t711 * L_0 = WWW_get_DefaultEncoding_m2775(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		ByteU5BU5D_t551* L_1 = (ByteU5BU5D_t551*)VirtFuncInvoker1< ByteU5BU5D_t551*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, (String_t*) &_stringLiteral231);
		((WWWTranscoder_t553_StaticFields*)WWWTranscoder_t553_il2cpp_TypeInfo_var->static_fields)->___ucHexChars_0 = L_1;
		Encoding_t711 * L_2 = WWW_get_DefaultEncoding_m2775(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		ByteU5BU5D_t551* L_3 = (ByteU5BU5D_t551*)VirtFuncInvoker1< ByteU5BU5D_t551*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, (String_t*) &_stringLiteral232);
		((WWWTranscoder_t553_StaticFields*)WWWTranscoder_t553_il2cpp_TypeInfo_var->static_fields)->___lcHexChars_1 = L_3;
		((WWWTranscoder_t553_StaticFields*)WWWTranscoder_t553_il2cpp_TypeInfo_var->static_fields)->___urlEscapeChar_2 = ((int32_t)37);
		((WWWTranscoder_t553_StaticFields*)WWWTranscoder_t553_il2cpp_TypeInfo_var->static_fields)->___urlSpace_3 = ((int32_t)43);
		Encoding_t711 * L_4 = WWW_get_DefaultEncoding_m2775(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		ByteU5BU5D_t551* L_5 = (ByteU5BU5D_t551*)VirtFuncInvoker1< ByteU5BU5D_t551*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_4, (String_t*) &_stringLiteral233);
		((WWWTranscoder_t553_StaticFields*)WWWTranscoder_t553_il2cpp_TypeInfo_var->static_fields)->___urlForbidden_4 = L_5;
		((WWWTranscoder_t553_StaticFields*)WWWTranscoder_t553_il2cpp_TypeInfo_var->static_fields)->___qpEscapeChar_5 = ((int32_t)61);
		((WWWTranscoder_t553_StaticFields*)WWWTranscoder_t553_il2cpp_TypeInfo_var->static_fields)->___qpSpace_6 = ((int32_t)95);
		Encoding_t711 * L_6 = WWW_get_DefaultEncoding_m2775(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		ByteU5BU5D_t551* L_7 = (ByteU5BU5D_t551*)VirtFuncInvoker1< ByteU5BU5D_t551*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_6, (String_t*) &_stringLiteral234);
		((WWWTranscoder_t553_StaticFields*)WWWTranscoder_t553_il2cpp_TypeInfo_var->static_fields)->___qpForbidden_7 = L_7;
		return;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::Byte2Hex(System.Byte,System.Byte[])
extern TypeInfo* ByteU5BU5D_t551_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t551* WWWTranscoder_Byte2Hex_m2789 (Object_t * __this /* static, unused */, uint8_t ___b, ByteU5BU5D_t551* ___hexChars, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t551_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(980);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t551* V_0 = {0};
	{
		V_0 = ((ByteU5BU5D_t551*)SZArrayNew(ByteU5BU5D_t551_il2cpp_TypeInfo_var, 2));
		ByteU5BU5D_t551* L_0 = V_0;
		ByteU5BU5D_t551* L_1 = ___hexChars;
		uint8_t L_2 = ___b;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, ((int32_t)((int32_t)L_2>>(int32_t)4)));
		int32_t L_3 = ((int32_t)((int32_t)L_2>>(int32_t)4));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_0, 0)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_3));
		ByteU5BU5D_t551* L_4 = V_0;
		ByteU5BU5D_t551* L_5 = ___hexChars;
		uint8_t L_6 = ___b;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)L_6&(int32_t)((int32_t)15))));
		int32_t L_7 = ((int32_t)((int32_t)L_6&(int32_t)((int32_t)15)));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_4, 1)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_7));
		ByteU5BU5D_t551* L_8 = V_0;
		return L_8;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::URLEncode(System.Byte[])
extern TypeInfo* WWWTranscoder_t553_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t551* WWWTranscoder_URLEncode_m2790 (Object_t * __this /* static, unused */, ByteU5BU5D_t551* ___toEncode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WWWTranscoder_t553_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t551* L_0 = ___toEncode;
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t553_il2cpp_TypeInfo_var);
		uint8_t L_1 = ((WWWTranscoder_t553_StaticFields*)WWWTranscoder_t553_il2cpp_TypeInfo_var->static_fields)->___urlEscapeChar_2;
		uint8_t L_2 = ((WWWTranscoder_t553_StaticFields*)WWWTranscoder_t553_il2cpp_TypeInfo_var->static_fields)->___urlSpace_3;
		ByteU5BU5D_t551* L_3 = ((WWWTranscoder_t553_StaticFields*)WWWTranscoder_t553_il2cpp_TypeInfo_var->static_fields)->___urlForbidden_4;
		ByteU5BU5D_t551* L_4 = WWWTranscoder_Encode_m2792(NULL /*static, unused*/, L_0, L_1, L_2, L_3, 0, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String UnityEngine.WWWTranscoder::QPEncode(System.String,System.Text.Encoding)
extern TypeInfo* WWWTranscoder_t553_il2cpp_TypeInfo_var;
extern "C" String_t* WWWTranscoder_QPEncode_m2791 (Object_t * __this /* static, unused */, String_t* ___toEncode, Encoding_t711 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WWWTranscoder_t553_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t551* V_0 = {0};
	{
		Encoding_t711 * L_0 = ___e;
		String_t* L_1 = ___toEncode;
		NullCheck(L_0);
		ByteU5BU5D_t551* L_2 = (ByteU5BU5D_t551*)VirtFuncInvoker1< ByteU5BU5D_t551*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t553_il2cpp_TypeInfo_var);
		uint8_t L_3 = ((WWWTranscoder_t553_StaticFields*)WWWTranscoder_t553_il2cpp_TypeInfo_var->static_fields)->___qpEscapeChar_5;
		uint8_t L_4 = ((WWWTranscoder_t553_StaticFields*)WWWTranscoder_t553_il2cpp_TypeInfo_var->static_fields)->___qpSpace_6;
		ByteU5BU5D_t551* L_5 = ((WWWTranscoder_t553_StaticFields*)WWWTranscoder_t553_il2cpp_TypeInfo_var->static_fields)->___qpForbidden_7;
		ByteU5BU5D_t551* L_6 = WWWTranscoder_Encode_m2792(NULL /*static, unused*/, L_2, L_3, L_4, L_5, 1, /*hidden argument*/NULL);
		V_0 = L_6;
		Encoding_t711 * L_7 = WWW_get_DefaultEncoding_m2775(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t551* L_8 = V_0;
		ByteU5BU5D_t551* L_9 = V_0;
		NullCheck(L_9);
		NullCheck(L_7);
		String_t* L_10 = (String_t*)VirtFuncInvoker3< String_t*, ByteU5BU5D_t551*, int32_t, int32_t >::Invoke(19 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, 0, (((int32_t)(((Array_t *)L_9)->max_length))));
		return L_10;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::Encode(System.Byte[],System.Byte,System.Byte,System.Byte[],System.Boolean)
extern TypeInfo* MemoryStream_t749_il2cpp_TypeInfo_var;
extern TypeInfo* WWWTranscoder_t553_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t69_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t551* WWWTranscoder_Encode_m2792 (Object_t * __this /* static, unused */, ByteU5BU5D_t551* ___input, uint8_t ___escapeChar, uint8_t ___space, ByteU5BU5D_t551* ___forbidden, bool ___uppercase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MemoryStream_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(983);
		WWWTranscoder_t553_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		IDisposable_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	MemoryStream_t749 * V_0 = {0};
	int32_t V_1 = 0;
	ByteU5BU5D_t551* V_2 = {0};
	Exception_t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B9_0 = 0;
	MemoryStream_t749 * G_B9_1 = {0};
	int32_t G_B8_0 = 0;
	MemoryStream_t749 * G_B8_1 = {0};
	ByteU5BU5D_t551* G_B10_0 = {0};
	int32_t G_B10_1 = 0;
	MemoryStream_t749 * G_B10_2 = {0};
	{
		ByteU5BU5D_t551* L_0 = ___input;
		NullCheck(L_0);
		MemoryStream_t749 * L_1 = (MemoryStream_t749 *)il2cpp_codegen_object_new (MemoryStream_t749_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m3553(L_1, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))*(int32_t)2)), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			V_1 = 0;
			goto IL_0089;
		}

IL_0012:
		{
			ByteU5BU5D_t551* L_2 = ___input;
			int32_t L_3 = V_1;
			NullCheck(L_2);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
			int32_t L_4 = L_3;
			if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_4))) == ((uint32_t)((int32_t)32)))))
			{
				goto IL_0028;
			}
		}

IL_001c:
		{
			MemoryStream_t749 * L_5 = V_0;
			uint8_t L_6 = ___space;
			NullCheck(L_5);
			VirtActionInvoker1< uint8_t >::Invoke(19 /* System.Void System.IO.MemoryStream::WriteByte(System.Byte) */, L_5, L_6);
			goto IL_0085;
		}

IL_0028:
		{
			ByteU5BU5D_t551* L_7 = ___input;
			int32_t L_8 = V_1;
			NullCheck(L_7);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
			int32_t L_9 = L_8;
			if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_7, L_9))) < ((int32_t)((int32_t)32))))
			{
				goto IL_004a;
			}
		}

IL_0032:
		{
			ByteU5BU5D_t551* L_10 = ___input;
			int32_t L_11 = V_1;
			NullCheck(L_10);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
			int32_t L_12 = L_11;
			if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_12))) > ((int32_t)((int32_t)126))))
			{
				goto IL_004a;
			}
		}

IL_003c:
		{
			ByteU5BU5D_t551* L_13 = ___forbidden;
			ByteU5BU5D_t551* L_14 = ___input;
			int32_t L_15 = V_1;
			NullCheck(L_14);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
			int32_t L_16 = L_15;
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t553_il2cpp_TypeInfo_var);
			bool L_17 = WWWTranscoder_ByteArrayContains_m2793(NULL /*static, unused*/, L_13, (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_16)), /*hidden argument*/NULL);
			if (!L_17)
			{
				goto IL_007c;
			}
		}

IL_004a:
		{
			MemoryStream_t749 * L_18 = V_0;
			uint8_t L_19 = ___escapeChar;
			NullCheck(L_18);
			VirtActionInvoker1< uint8_t >::Invoke(19 /* System.Void System.IO.MemoryStream::WriteByte(System.Byte) */, L_18, L_19);
			MemoryStream_t749 * L_20 = V_0;
			ByteU5BU5D_t551* L_21 = ___input;
			int32_t L_22 = V_1;
			NullCheck(L_21);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
			int32_t L_23 = L_22;
			bool L_24 = ___uppercase;
			G_B8_0 = ((int32_t)((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_21, L_23))));
			G_B8_1 = L_20;
			if (!L_24)
			{
				G_B9_0 = ((int32_t)((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_21, L_23))));
				G_B9_1 = L_20;
				goto IL_0066;
			}
		}

IL_005c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t553_il2cpp_TypeInfo_var);
			ByteU5BU5D_t551* L_25 = ((WWWTranscoder_t553_StaticFields*)WWWTranscoder_t553_il2cpp_TypeInfo_var->static_fields)->___ucHexChars_0;
			G_B10_0 = L_25;
			G_B10_1 = G_B8_0;
			G_B10_2 = G_B8_1;
			goto IL_006b;
		}

IL_0066:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t553_il2cpp_TypeInfo_var);
			ByteU5BU5D_t551* L_26 = ((WWWTranscoder_t553_StaticFields*)WWWTranscoder_t553_il2cpp_TypeInfo_var->static_fields)->___lcHexChars_1;
			G_B10_0 = L_26;
			G_B10_1 = G_B9_0;
			G_B10_2 = G_B9_1;
		}

IL_006b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t553_il2cpp_TypeInfo_var);
			ByteU5BU5D_t551* L_27 = WWWTranscoder_Byte2Hex_m2789(NULL /*static, unused*/, G_B10_1, G_B10_0, /*hidden argument*/NULL);
			NullCheck(G_B10_2);
			VirtActionInvoker3< ByteU5BU5D_t551*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, G_B10_2, L_27, 0, 2);
			goto IL_0085;
		}

IL_007c:
		{
			MemoryStream_t749 * L_28 = V_0;
			ByteU5BU5D_t551* L_29 = ___input;
			int32_t L_30 = V_1;
			NullCheck(L_29);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
			int32_t L_31 = L_30;
			NullCheck(L_28);
			VirtActionInvoker1< uint8_t >::Invoke(19 /* System.Void System.IO.MemoryStream::WriteByte(System.Byte) */, L_28, (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_29, L_31)));
		}

IL_0085:
		{
			int32_t L_32 = V_1;
			V_1 = ((int32_t)((int32_t)L_32+(int32_t)1));
		}

IL_0089:
		{
			int32_t L_33 = V_1;
			ByteU5BU5D_t551* L_34 = ___input;
			NullCheck(L_34);
			if ((((int32_t)L_33) < ((int32_t)(((int32_t)(((Array_t *)L_34)->max_length))))))
			{
				goto IL_0012;
			}
		}

IL_0092:
		{
			MemoryStream_t749 * L_35 = V_0;
			NullCheck(L_35);
			ByteU5BU5D_t551* L_36 = (ByteU5BU5D_t551*)VirtFuncInvoker0< ByteU5BU5D_t551* >::Invoke(25 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_35);
			V_2 = L_36;
			IL2CPP_LEAVE(0xB0, FINALLY_00a3);
		}

IL_009e:
		{
			; // IL_009e: leave IL_00b0
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t65 *)e.ex;
		goto FINALLY_00a3;
	}

FINALLY_00a3:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t749 * L_37 = V_0;
			if (!L_37)
			{
				goto IL_00af;
			}
		}

IL_00a9:
		{
			MemoryStream_t749 * L_38 = V_0;
			NullCheck(L_38);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t69_il2cpp_TypeInfo_var, L_38);
		}

IL_00af:
		{
			IL2CPP_END_FINALLY(163)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(163)
	{
		IL2CPP_JUMP_TBL(0xB0, IL_00b0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t65 *)
	}

IL_00b0:
	{
		ByteU5BU5D_t551* L_39 = V_2;
		return L_39;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::ByteArrayContains(System.Byte[],System.Byte)
extern "C" bool WWWTranscoder_ByteArrayContains_m2793 (Object_t * __this /* static, unused */, ByteU5BU5D_t551* ___array, uint8_t ___b, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_t551* L_0 = ___array;
		NullCheck(L_0);
		V_0 = (((int32_t)(((Array_t *)L_0)->max_length)));
		V_1 = 0;
		goto IL_001a;
	}

IL_000b:
	{
		ByteU5BU5D_t551* L_1 = ___array;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		uint8_t L_4 = ___b;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_3))) == ((uint32_t)L_4))))
		{
			goto IL_0016;
		}
	}
	{
		return 1;
	}

IL_0016:
	{
		int32_t L_5 = V_1;
		V_1 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_001a:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.String,System.Text.Encoding)
extern TypeInfo* WWWTranscoder_t553_il2cpp_TypeInfo_var;
extern "C" bool WWWTranscoder_SevenBitClean_m2794 (Object_t * __this /* static, unused */, String_t* ___s, Encoding_t711 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WWWTranscoder_t553_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		s_Il2CppMethodIntialized = true;
	}
	{
		Encoding_t711 * L_0 = ___e;
		String_t* L_1 = ___s;
		NullCheck(L_0);
		ByteU5BU5D_t551* L_2 = (ByteU5BU5D_t551*)VirtFuncInvoker1< ByteU5BU5D_t551*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t553_il2cpp_TypeInfo_var);
		bool L_3 = WWWTranscoder_SevenBitClean_m2795(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.Byte[])
extern "C" bool WWWTranscoder_SevenBitClean_m2795 (Object_t * __this /* static, unused */, ByteU5BU5D_t551* ___input, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0021;
	}

IL_0007:
	{
		ByteU5BU5D_t551* L_0 = ___input;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_2))) < ((int32_t)((int32_t)32))))
		{
			goto IL_001b;
		}
	}
	{
		ByteU5BU5D_t551* L_3 = ___input;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_3, L_5))) <= ((int32_t)((int32_t)126))))
		{
			goto IL_001d;
		}
	}

IL_001b:
	{
		return 0;
	}

IL_001d:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_t551* L_8 = ___input;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		return 1;
	}
}
// UnityEngine.CacheIndex
#include "UnityEngine_UnityEngine_CacheIndex.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.CacheIndex
#include "UnityEngine_UnityEngine_CacheIndexMethodDeclarations.h"



// Conversion methods for marshalling of: UnityEngine.CacheIndex
void CacheIndex_t554_marshal(const CacheIndex_t554& unmarshaled, CacheIndex_t554_marshaled& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___bytesUsed_1 = unmarshaled.___bytesUsed_1;
	marshaled.___expires_2 = unmarshaled.___expires_2;
}
void CacheIndex_t554_marshal_back(const CacheIndex_t554_marshaled& marshaled, CacheIndex_t554& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	unmarshaled.___bytesUsed_1 = marshaled.___bytesUsed_1;
	unmarshaled.___expires_2 = marshaled.___expires_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.CacheIndex
void CacheIndex_t554_marshal_cleanup(CacheIndex_t554_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityString.h"
#ifndef _MSC_VER
#else
#endif



// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* UnityString_Format_m2796 (Object_t * __this /* static, unused */, String_t* ___fmt, ObjectU5BU5D_t73* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___fmt;
		ObjectU5BU5D_t73* L_1 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m2005(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperation.h"
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m2797 (AsyncOperation_t479 * __this, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m2917(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m2798 (AsyncOperation_t479 * __this, const MethodInfo* method)
{
	typedef void (*AsyncOperation_InternalDestroy_m2798_ftn) (AsyncOperation_t479 *);
	static AsyncOperation_InternalDestroy_m2798_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AsyncOperation_InternalDestroy_m2798_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AsyncOperation::InternalDestroy()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m2799 (AsyncOperation_t479 * __this, const MethodInfo* method)
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
		AsyncOperation_InternalDestroy_m2798(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: UnityEngine.AsyncOperation
void AsyncOperation_t479_marshal(const AsyncOperation_t479& unmarshaled, AsyncOperation_t479_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void AsyncOperation_t479_marshal_back(const AsyncOperation_t479_marshaled& marshaled, AsyncOperation_t479& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.AsyncOperation
void AsyncOperation_t479_marshal_cleanup(AsyncOperation_t479_marshaled& marshaled)
{
}
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallback.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallbackMethodDeclarations.h"



// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
extern "C" void LogCallback__ctor_m2800 (LogCallback_t556 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Application/LogCallback::Invoke(System.String,System.String,UnityEngine.LogType)
extern "C" void LogCallback_Invoke_m2801 (LogCallback_t556 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		LogCallback_Invoke_m2801((LogCallback_t556 *)__this->___prev_9,___condition, ___stackTrace, ___type, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_LogCallback_t556(Il2CppObject* delegate, String_t* ___condition, String_t* ___stackTrace, int32_t ___type)
{
	typedef void (STDCALL *native_function_ptr_type)(char*, char*, int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___condition' to native representation
	char* ____condition_marshaled = { 0 };
	____condition_marshaled = il2cpp_codegen_marshal_string(___condition);

	// Marshaling of parameter '___stackTrace' to native representation
	char* ____stackTrace_marshaled = { 0 };
	____stackTrace_marshaled = il2cpp_codegen_marshal_string(___stackTrace);

	// Marshaling of parameter '___type' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(____condition_marshaled, ____stackTrace_marshaled, ___type);

	// Marshaling cleanup of parameter '___condition' native representation
	il2cpp_codegen_marshal_free(____condition_marshaled);
	____condition_marshaled = NULL;

	// Marshaling cleanup of parameter '___stackTrace' native representation
	il2cpp_codegen_marshal_free(____stackTrace_marshaled);
	____stackTrace_marshaled = NULL;

	// Marshaling cleanup of parameter '___type' native representation

}
// System.IAsyncResult UnityEngine.Application/LogCallback::BeginInvoke(System.String,System.String,UnityEngine.LogType,System.AsyncCallback,System.Object)
extern TypeInfo* LogType_t484_il2cpp_TypeInfo_var;
extern "C" Object_t * LogCallback_BeginInvoke_m2802 (LogCallback_t556 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, AsyncCallback_t224 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogType_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(985);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___condition;
	__d_args[1] = ___stackTrace;
	__d_args[2] = Box(LogType_t484_il2cpp_TypeInfo_var, &___type);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Application/LogCallback::EndInvoke(System.IAsyncResult)
extern "C" void LogCallback_EndInvoke_m2803 (LogCallback_t556 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Application
#include "UnityEngine_UnityEngine_Application.h"
#ifndef _MSC_VER
#else
#endif



// System.Int32 UnityEngine.Application::get_loadedLevel()
extern "C" int32_t Application_get_loadedLevel_m249 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Application_get_loadedLevel_m249_ftn) ();
	static Application_get_loadedLevel_m249_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_loadedLevel_m249_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_loadedLevel()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Application::LoadLevel(System.Int32)
extern "C" void Application_LoadLevel_m253 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Application_LoadLevelAsync_m2804(NULL /*static, unused*/, (String_t*)NULL, L_0, 0, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Application::LoadLevel(System.String)
extern "C" void Application_LoadLevel_m251 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Application_LoadLevelAsync_m2804(NULL /*static, unused*/, L_0, (-1), 0, 1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AsyncOperation UnityEngine.Application::LoadLevelAsync(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C" AsyncOperation_t479 * Application_LoadLevelAsync_m2804 (Object_t * __this /* static, unused */, String_t* ___monoLevelName, int32_t ___index, bool ___additive, bool ___mustCompleteNextFrame, const MethodInfo* method)
{
	typedef AsyncOperation_t479 * (*Application_LoadLevelAsync_m2804_ftn) (String_t*, int32_t, bool, bool);
	static Application_LoadLevelAsync_m2804_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_LoadLevelAsync_m2804_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::LoadLevelAsync(System.String,System.Int32,System.Boolean,System.Boolean)");
	return _il2cpp_icall_func(___monoLevelName, ___index, ___additive, ___mustCompleteNextFrame);
}
// System.Int32 UnityEngine.Application::get_levelCount()
extern "C" int32_t Application_get_levelCount_m252 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Application_get_levelCount_m252_ftn) ();
	static Application_get_levelCount_m252_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_levelCount_m252_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_levelCount()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C" bool Application_get_isPlaying_m1918 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Application_get_isPlaying_m1918_ftn) ();
	static Application_get_isPlaying_m1918_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_isPlaying_m1918_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isPlaying()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Application::get_isEditor()
extern "C" bool Application_get_isEditor_m1921 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Application_get_isEditor_m1921_ftn) ();
	static Application_get_isEditor_m1921_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_isEditor_m1921_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isEditor()");
	return _il2cpp_icall_func();
}
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C" int32_t Application_get_platform_m1840 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Application_get_platform_m1840_ftn) ();
	static Application_get_platform_m1840_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_platform_m1840_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_platform()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Application::CallLogCallback(System.String,System.String,UnityEngine.LogType,System.Boolean)
extern TypeInfo* Application_t557_il2cpp_TypeInfo_var;
extern "C" void Application_CallLogCallback_m2805 (Object_t * __this /* static, unused */, String_t* ___logString, String_t* ___stackTrace, int32_t ___type, bool ___invokedOnMainThread, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Application_t557_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(986);
		s_Il2CppMethodIntialized = true;
	}
	LogCallback_t556 * V_0 = {0};
	LogCallback_t556 * V_1 = {0};
	{
		bool L_0 = ___invokedOnMainThread;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LogCallback_t556 * L_1 = ((Application_t557_StaticFields*)Application_t557_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandler_0;
		V_0 = L_1;
		LogCallback_t556 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		LogCallback_t556 * L_3 = V_0;
		String_t* L_4 = ___logString;
		String_t* L_5 = ___stackTrace;
		int32_t L_6 = ___type;
		NullCheck(L_3);
		VirtActionInvoker3< String_t*, String_t*, int32_t >::Invoke(10 /* System.Void UnityEngine.Application/LogCallback::Invoke(System.String,System.String,UnityEngine.LogType) */, L_3, L_4, L_5, L_6);
	}

IL_001b:
	{
		LogCallback_t556 * L_7 = ((Application_t557_StaticFields*)Application_t557_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandlerThreaded_1;
		V_1 = L_7;
		LogCallback_t556 * L_8 = V_1;
		if (!L_8)
		{
			goto IL_0030;
		}
	}
	{
		LogCallback_t556 * L_9 = V_1;
		String_t* L_10 = ___logString;
		String_t* L_11 = ___stackTrace;
		int32_t L_12 = ___type;
		NullCheck(L_9);
		VirtActionInvoker3< String_t*, String_t*, int32_t >::Invoke(10 /* System.Void UnityEngine.Application/LogCallback::Invoke(System.String,System.String,UnityEngine.LogType) */, L_9, L_10, L_11, L_12);
	}

IL_0030:
	{
		return;
	}
}
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_Behaviour.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"



// System.Void UnityEngine.Behaviour::.ctor()
extern "C" void Behaviour__ctor_m2806 (Behaviour_t394 * __this, const MethodInfo* method)
{
	{
		Component__ctor_m2886(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern "C" bool Behaviour_get_enabled_m1609 (Behaviour_t394 * __this, const MethodInfo* method)
{
	typedef bool (*Behaviour_get_enabled_m1609_ftn) (Behaviour_t394 *);
	static Behaviour_get_enabled_m1609_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_get_enabled_m1609_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_enabled()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C" void Behaviour_set_enabled_m302 (Behaviour_t394 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*Behaviour_set_enabled_m302_ftn) (Behaviour_t394 *, bool);
	static Behaviour_set_enabled_m302_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_set_enabled_m302_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::set_enabled(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
extern "C" bool Behaviour_get_isActiveAndEnabled_m1610 (Behaviour_t394 * __this, const MethodInfo* method)
{
	typedef bool (*Behaviour_get_isActiveAndEnabled_m1610_ftn) (Behaviour_t394 *);
	static Behaviour_get_isActiveAndEnabled_m1610_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_get_isActiveAndEnabled_m1610_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_isActiveAndEnabled()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Camera/CameraCallback
#include "UnityEngine_UnityEngine_Camera_CameraCallback.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Camera/CameraCallback
#include "UnityEngine_UnityEngine_Camera_CameraCallbackMethodDeclarations.h"

// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"


// System.Void UnityEngine.Camera/CameraCallback::.ctor(System.Object,System.IntPtr)
extern "C" void CameraCallback__ctor_m2807 (CameraCallback_t558 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera)
extern "C" void CameraCallback_Invoke_m2808 (CameraCallback_t558 * __this, Camera_t84 * ___cam, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CameraCallback_Invoke_m2808((CameraCallback_t558 *)__this->___prev_9,___cam, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Camera_t84 * ___cam, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Camera_t84 * ___cam, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_CameraCallback_t558(Il2CppObject* delegate, Camera_t84 * ___cam)
{
	// Marshaling of parameter '___cam' to native representation
	Camera_t84 * ____cam_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnityEngine.Camera'."));
}
// System.IAsyncResult UnityEngine.Camera/CameraCallback::BeginInvoke(UnityEngine.Camera,System.AsyncCallback,System.Object)
extern "C" Object_t * CameraCallback_BeginInvoke_m2809 (CameraCallback_t558 * __this, Camera_t84 * ___cam, AsyncCallback_t224 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___cam;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Camera/CameraCallback::EndInvoke(System.IAsyncResult)
extern "C" void CameraCallback_EndInvoke_m2810 (CameraCallback_t558 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"

// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"


// System.Single UnityEngine.Camera::get_nearClipPlane()
extern "C" float Camera_get_nearClipPlane_m1667 (Camera_t84 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_nearClipPlane_m1667_ftn) (Camera_t84 *);
	static Camera_get_nearClipPlane_m1667_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_nearClipPlane_m1667_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_nearClipPlane()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Camera::get_farClipPlane()
extern "C" float Camera_get_farClipPlane_m1666 (Camera_t84 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_farClipPlane_m1666_ftn) (Camera_t84 *);
	static Camera_get_farClipPlane_m1666_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_farClipPlane_m1666_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_farClipPlane()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
extern "C" void Camera_set_orthographicSize_m277 (Camera_t84 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Camera_set_orthographicSize_m277_ftn) (Camera_t84 *, float);
	static Camera_set_orthographicSize_m277_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_orthographicSize_m277_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_orthographicSize(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Camera::get_depth()
extern "C" float Camera_get_depth_m1571 (Camera_t84 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_depth_m1571_ftn) (Camera_t84 *);
	static Camera_get_depth_m1571_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_depth_m1571_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_depth()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern "C" int32_t Camera_get_cullingMask_m1678 (Camera_t84 * __this, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_cullingMask_m1678_ftn) (Camera_t84 *);
	static Camera_get_cullingMask_m1678_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_cullingMask_m1678_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_cullingMask()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Camera::get_eventMask()
extern "C" int32_t Camera_get_eventMask_m2811 (Camera_t84 * __this, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_eventMask_m2811_ftn) (Camera_t84 *);
	static Camera_get_eventMask_m2811_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_eventMask_m2811_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_eventMask()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_get_pixelRect_m2812 (Camera_t84 * __this, Rect_t230 * ___value, const MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_pixelRect_m2812_ftn) (Camera_t84 *, Rect_t230 *);
	static Camera_INTERNAL_get_pixelRect_m2812_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_pixelRect_m2812_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
extern "C" Rect_t230  Camera_get_pixelRect_m2813 (Camera_t84 * __this, const MethodInfo* method)
{
	Rect_t230  V_0 = {0};
	{
		Camera_INTERNAL_get_pixelRect_m2812(__this, (&V_0), /*hidden argument*/NULL);
		Rect_t230  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
extern "C" RenderTexture_t501 * Camera_get_targetTexture_m2814 (Camera_t84 * __this, const MethodInfo* method)
{
	typedef RenderTexture_t501 * (*Camera_get_targetTexture_m2814_ftn) (Camera_t84 *);
	static Camera_get_targetTexture_m2814_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_targetTexture_m2814_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_targetTexture()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
extern "C" int32_t Camera_get_clearFlags_m2815 (Camera_t84 * __this, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_clearFlags_m2815_ftn) (Camera_t84 *);
	static Camera_get_clearFlags_m2815_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_clearFlags_m2815_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_clearFlags()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
extern "C" Vector3_t58  Camera_ScreenToWorldPoint_m365 (Camera_t84 * __this, Vector3_t58  ___position, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = Camera_INTERNAL_CALL_ScreenToWorldPoint_m2816(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToWorldPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t58  Camera_INTERNAL_CALL_ScreenToWorldPoint_m2816 (Object_t * __this /* static, unused */, Camera_t84 * ___self, Vector3_t58 * ___position, const MethodInfo* method)
{
	typedef Vector3_t58  (*Camera_INTERNAL_CALL_ScreenToWorldPoint_m2816_ftn) (Camera_t84 *, Vector3_t58 *);
	static Camera_INTERNAL_CALL_ScreenToWorldPoint_m2816_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenToWorldPoint_m2816_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenToWorldPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
extern "C" Vector3_t58  Camera_ScreenToViewportPoint_m1755 (Camera_t84 * __this, Vector3_t58  ___position, const MethodInfo* method)
{
	{
		Vector3_t58  L_0 = Camera_INTERNAL_CALL_ScreenToViewportPoint_m2817(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t58  Camera_INTERNAL_CALL_ScreenToViewportPoint_m2817 (Object_t * __this /* static, unused */, Camera_t84 * ___self, Vector3_t58 * ___position, const MethodInfo* method)
{
	typedef Vector3_t58  (*Camera_INTERNAL_CALL_ScreenToViewportPoint_m2817_ftn) (Camera_t84 *, Vector3_t58 *);
	static Camera_INTERNAL_CALL_ScreenToViewportPoint_m2817_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenToViewportPoint_m2817_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C" Ray_t350  Camera_ScreenPointToRay_m1665 (Camera_t84 * __this, Vector3_t58  ___position, const MethodInfo* method)
{
	{
		Ray_t350  L_0 = Camera_INTERNAL_CALL_ScreenPointToRay_m2818(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Ray UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Ray_t350  Camera_INTERNAL_CALL_ScreenPointToRay_m2818 (Object_t * __this /* static, unused */, Camera_t84 * ___self, Vector3_t58 * ___position, const MethodInfo* method)
{
	typedef Ray_t350  (*Camera_INTERNAL_CALL_ScreenPointToRay_m2818_ftn) (Camera_t84 *, Vector3_t58 *);
	static Camera_INTERNAL_CALL_ScreenPointToRay_m2818_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenPointToRay_m2818_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C" Camera_t84 * Camera_get_main_m276 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Camera_t84 * (*Camera_get_main_m276_ftn) ();
	static Camera_get_main_m276_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_main_m276_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_main()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
extern "C" int32_t Camera_get_allCamerasCount_m2819 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_allCamerasCount_m2819_ftn) ();
	static Camera_get_allCamerasCount_m2819_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_allCamerasCount_m2819_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_allCamerasCount()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
extern "C" int32_t Camera_GetAllCameras_m2820 (Object_t * __this /* static, unused */, CameraU5BU5D_t671* ___cameras, const MethodInfo* method)
{
	typedef int32_t (*Camera_GetAllCameras_m2820_ftn) (CameraU5BU5D_t671*);
	static Camera_GetAllCameras_m2820_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_GetAllCameras_m2820_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])");
	return _il2cpp_icall_func(___cameras);
}
// System.Void UnityEngine.Camera::FireOnPreCull(UnityEngine.Camera)
extern TypeInfo* Camera_t84_il2cpp_TypeInfo_var;
extern "C" void Camera_FireOnPreCull_m2821 (Object_t * __this /* static, unused */, Camera_t84 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Camera_t84_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	{
		CameraCallback_t558 * L_0 = ((Camera_t84_StaticFields*)Camera_t84_il2cpp_TypeInfo_var->static_fields)->___onPreCull_2;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t558 * L_1 = ((Camera_t84_StaticFields*)Camera_t84_il2cpp_TypeInfo_var->static_fields)->___onPreCull_2;
		Camera_t84 * L_2 = ___cam;
		NullCheck(L_1);
		VirtActionInvoker1< Camera_t84 * >::Invoke(10 /* System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera) */, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::FireOnPreRender(UnityEngine.Camera)
extern TypeInfo* Camera_t84_il2cpp_TypeInfo_var;
extern "C" void Camera_FireOnPreRender_m2822 (Object_t * __this /* static, unused */, Camera_t84 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Camera_t84_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	{
		CameraCallback_t558 * L_0 = ((Camera_t84_StaticFields*)Camera_t84_il2cpp_TypeInfo_var->static_fields)->___onPreRender_3;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t558 * L_1 = ((Camera_t84_StaticFields*)Camera_t84_il2cpp_TypeInfo_var->static_fields)->___onPreRender_3;
		Camera_t84 * L_2 = ___cam;
		NullCheck(L_1);
		VirtActionInvoker1< Camera_t84 * >::Invoke(10 /* System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera) */, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::FireOnPostRender(UnityEngine.Camera)
extern TypeInfo* Camera_t84_il2cpp_TypeInfo_var;
extern "C" void Camera_FireOnPostRender_m2823 (Object_t * __this /* static, unused */, Camera_t84 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Camera_t84_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		s_Il2CppMethodIntialized = true;
	}
	{
		CameraCallback_t558 * L_0 = ((Camera_t84_StaticFields*)Camera_t84_il2cpp_TypeInfo_var->static_fields)->___onPostRender_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t558 * L_1 = ((Camera_t84_StaticFields*)Camera_t84_il2cpp_TypeInfo_var->static_fields)->___onPostRender_4;
		Camera_t84 * L_2 = ___cam;
		NullCheck(L_1);
		VirtActionInvoker1< Camera_t84 * >::Invoke(10 /* System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera) */, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry(UnityEngine.Ray,System.Single,System.Int32)
extern "C" GameObject_t28 * Camera_RaycastTry_m2824 (Camera_t84 * __this, Ray_t350  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		GameObject_t28 * L_2 = Camera_INTERNAL_CALL_RaycastTry_m2825(NULL /*static, unused*/, __this, (&___ray), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t28 * Camera_INTERNAL_CALL_RaycastTry_m2825 (Object_t * __this /* static, unused */, Camera_t84 * ___self, Ray_t350 * ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	typedef GameObject_t28 * (*Camera_INTERNAL_CALL_RaycastTry_m2825_ftn) (Camera_t84 *, Ray_t350 *, float, int32_t);
	static Camera_INTERNAL_CALL_RaycastTry_m2825_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_RaycastTry_m2825_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___self, ___ray, ___distance, ___layerMask);
}
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
extern "C" GameObject_t28 * Camera_RaycastTry2D_m2826 (Camera_t84 * __this, Ray_t350  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		GameObject_t28 * L_2 = Camera_INTERNAL_CALL_RaycastTry2D_m2827(NULL /*static, unused*/, __this, (&___ray), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t28 * Camera_INTERNAL_CALL_RaycastTry2D_m2827 (Object_t * __this /* static, unused */, Camera_t84 * ___self, Ray_t350 * ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	typedef GameObject_t28 * (*Camera_INTERNAL_CALL_RaycastTry2D_m2827_ftn) (Camera_t84 *, Ray_t350 *, float, int32_t);
	static Camera_INTERNAL_CALL_RaycastTry2D_m2827_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_RaycastTry2D_m2827_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___self, ___ray, ___distance, ___layerMask);
}
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_Debug.h"
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)
extern "C" void Debug_Internal_Log_m2828 (Object_t * __this /* static, unused */, int32_t ___level, String_t* ___msg, Object_t67 * ___obj, const MethodInfo* method)
{
	typedef void (*Debug_Internal_Log_m2828_ftn) (int32_t, String_t*, Object_t67 *);
	static Debug_Internal_Log_m2828_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_Internal_Log_m2828_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)");
	_il2cpp_icall_func(___level, ___msg, ___obj);
}
// System.Void UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)
extern "C" void Debug_Internal_LogException_m2829 (Object_t * __this /* static, unused */, Exception_t65 * ___exception, Object_t67 * ___obj, const MethodInfo* method)
{
	typedef void (*Debug_Internal_LogException_m2829_ftn) (Exception_t65 *, Object_t67 *);
	static Debug_Internal_LogException_m2829_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_Internal_LogException_m2829_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)");
	_il2cpp_icall_func(___exception, ___obj);
}
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" void Debug_Log_m243 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	{
		Object_t * L_0 = ___message;
		G_B1_0 = 0;
		if (!L_0)
		{
			G_B2_0 = 0;
			goto IL_0012;
		}
	}
	{
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = (String_t*) &_stringLiteral235;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Debug_Internal_Log_m2828(NULL /*static, unused*/, G_B3_1, G_B3_0, (Object_t67 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" void Debug_LogError_m1570 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	{
		Object_t * L_0 = ___message;
		G_B1_0 = 2;
		if (!L_0)
		{
			G_B2_0 = 2;
			goto IL_0012;
		}
	}
	{
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = (String_t*) &_stringLiteral235;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Debug_Internal_Log_m2828(NULL /*static, unused*/, G_B3_1, G_B3_0, (Object_t67 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
extern "C" void Debug_LogError_m1814 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t67 * ___context, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		Object_t67 * L_2 = ___context;
		Debug_Internal_Log_m2828(NULL /*static, unused*/, 2, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogException(System.Exception)
extern "C" void Debug_LogException_m2830 (Object_t * __this /* static, unused */, Exception_t65 * ___exception, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = ___exception;
		Debug_Internal_LogException_m2829(NULL /*static, unused*/, L_0, (Object_t67 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogException(System.Exception,UnityEngine.Object)
extern "C" void Debug_LogException_m1700 (Object_t * __this /* static, unused */, Exception_t65 * ___exception, Object_t67 * ___context, const MethodInfo* method)
{
	{
		Exception_t65 * L_0 = ___exception;
		Object_t67 * L_1 = ___context;
		Debug_Internal_LogException_m2829(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" void Debug_LogWarning_m2831 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		Debug_Internal_Log_m2828(NULL /*static, unused*/, 1, L_1, (Object_t67 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
extern "C" void Debug_LogWarning_m1985 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t67 * ___context, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		Object_t67 * L_2 = ___context;
		Debug_Internal_Log_m2828(NULL /*static, unused*/, 1, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegate.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegateMethodDeclarations.h"



// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void DisplaysUpdatedDelegate__ctor_m2832 (DisplaysUpdatedDelegate_t560 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::Invoke()
extern "C" void DisplaysUpdatedDelegate_Invoke_m2833 (DisplaysUpdatedDelegate_t560 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		DisplaysUpdatedDelegate_Invoke_m2833((DisplaysUpdatedDelegate_t560 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_DisplaysUpdatedDelegate_t560(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Display/DisplaysUpdatedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * DisplaysUpdatedDelegate_BeginInvoke_m2834 (DisplaysUpdatedDelegate_t560 * __this, AsyncCallback_t224 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::EndInvoke(System.IAsyncResult)
extern "C" void DisplaysUpdatedDelegate_EndInvoke_m2835 (DisplaysUpdatedDelegate_t560 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Display
#include "UnityEngine_UnityEngine_Display.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Display
#include "UnityEngine_UnityEngine_DisplayMethodDeclarations.h"

// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"


// System.Void UnityEngine.Display::.ctor()
extern "C" void Display__ctor_m2836 (Display_t562 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = {0};
		IntPtr__ctor_m3555(&L_0, 0, /*hidden argument*/NULL);
		__this->___nativeDisplay_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Display::.ctor(System.IntPtr)
extern "C" void Display__ctor_m2837 (Display_t562 * __this, IntPtr_t ___nativeDisplay, const MethodInfo* method)
{
	{
		Object__ctor_m211(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = ___nativeDisplay;
		__this->___nativeDisplay_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Display::.cctor()
extern TypeInfo* DisplayU5BU5D_t561_il2cpp_TypeInfo_var;
extern TypeInfo* Display_t562_il2cpp_TypeInfo_var;
extern "C" void Display__cctor_m2838 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DisplayU5BU5D_t561_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(987);
		Display_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(988);
		s_Il2CppMethodIntialized = true;
	}
	{
		DisplayU5BU5D_t561* L_0 = ((DisplayU5BU5D_t561*)SZArrayNew(DisplayU5BU5D_t561_il2cpp_TypeInfo_var, 1));
		Display_t562 * L_1 = (Display_t562 *)il2cpp_codegen_object_new (Display_t562_il2cpp_TypeInfo_var);
		Display__ctor_m2836(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Display_t562 **)(Display_t562 **)SZArrayLdElema(L_0, 0)) = (Display_t562 *)L_1;
		((Display_t562_StaticFields*)Display_t562_il2cpp_TypeInfo_var->static_fields)->___displays_1 = L_0;
		DisplayU5BU5D_t561* L_2 = ((Display_t562_StaticFields*)Display_t562_il2cpp_TypeInfo_var->static_fields)->___displays_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		((Display_t562_StaticFields*)Display_t562_il2cpp_TypeInfo_var->static_fields)->____mainDisplay_2 = (*(Display_t562 **)(Display_t562 **)SZArrayLdElema(L_2, L_3));
		((Display_t562_StaticFields*)Display_t562_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3 = (DisplaysUpdatedDelegate_t560 *)NULL;
		return;
	}
}
// System.Void UnityEngine.Display::add_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
extern TypeInfo* Display_t562_il2cpp_TypeInfo_var;
extern TypeInfo* DisplaysUpdatedDelegate_t560_il2cpp_TypeInfo_var;
extern "C" void Display_add_onDisplaysUpdated_m2839 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t560 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(988);
		DisplaysUpdatedDelegate_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(989);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t562_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t560 * L_0 = ((Display_t562_StaticFields*)Display_t562_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		DisplaysUpdatedDelegate_t560 * L_1 = ___value;
		Delegate_t361 * L_2 = Delegate_Combine_m1746(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Display_t562_StaticFields*)Display_t562_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3 = ((DisplaysUpdatedDelegate_t560 *)Castclass(L_2, DisplaysUpdatedDelegate_t560_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Display::remove_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
extern TypeInfo* Display_t562_il2cpp_TypeInfo_var;
extern TypeInfo* DisplaysUpdatedDelegate_t560_il2cpp_TypeInfo_var;
extern "C" void Display_remove_onDisplaysUpdated_m2840 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t560 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(988);
		DisplaysUpdatedDelegate_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(989);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t562_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t560 * L_0 = ((Display_t562_StaticFields*)Display_t562_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		DisplaysUpdatedDelegate_t560 * L_1 = ___value;
		Delegate_t361 * L_2 = Delegate_Remove_m1747(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Display_t562_StaticFields*)Display_t562_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3 = ((DisplaysUpdatedDelegate_t560 *)Castclass(L_2, DisplaysUpdatedDelegate_t560_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Int32 UnityEngine.Display::get_renderingWidth()
extern TypeInfo* Display_t562_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_renderingWidth_m2841 (Display_t562 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(988);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t562_il2cpp_TypeInfo_var);
		Display_GetRenderingExtImpl_m2857(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_renderingHeight()
extern TypeInfo* Display_t562_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_renderingHeight_m2842 (Display_t562 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(988);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t562_il2cpp_TypeInfo_var);
		Display_GetRenderingExtImpl_m2857(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_1;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_systemWidth()
extern TypeInfo* Display_t562_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_systemWidth_m2843 (Display_t562 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(988);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t562_il2cpp_TypeInfo_var);
		Display_GetSystemExtImpl_m2856(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_systemHeight()
extern TypeInfo* Display_t562_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_systemHeight_m2844 (Display_t562 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(988);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t562_il2cpp_TypeInfo_var);
		Display_GetSystemExtImpl_m2856(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_1;
		return L_1;
	}
}
// UnityEngine.RenderBuffer UnityEngine.Display::get_colorBuffer()
extern TypeInfo* Display_t562_il2cpp_TypeInfo_var;
extern "C" RenderBuffer_t659  Display_get_colorBuffer_m2845 (Display_t562 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(988);
		s_Il2CppMethodIntialized = true;
	}
	RenderBuffer_t659  V_0 = {0};
	RenderBuffer_t659  V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t562_il2cpp_TypeInfo_var);
		Display_GetRenderingBuffersImpl_m2858(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		RenderBuffer_t659  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.RenderBuffer UnityEngine.Display::get_depthBuffer()
extern TypeInfo* Display_t562_il2cpp_TypeInfo_var;
extern "C" RenderBuffer_t659  Display_get_depthBuffer_m2846 (Display_t562 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(988);
		s_Il2CppMethodIntialized = true;
	}
	RenderBuffer_t659  V_0 = {0};
	RenderBuffer_t659  V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t562_il2cpp_TypeInfo_var);
		Display_GetRenderingBuffersImpl_m2858(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		RenderBuffer_t659  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Display::Activate()
extern TypeInfo* Display_t562_il2cpp_TypeInfo_var;
extern "C" void Display_Activate_m2847 (Display_t562 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(988);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t562_il2cpp_TypeInfo_var);
		Display_ActivateDisplayImpl_m2860(NULL /*static, unused*/, L_0, 0, 0, ((int32_t)60), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Display::Activate(System.Int32,System.Int32,System.Int32)
extern TypeInfo* Display_t562_il2cpp_TypeInfo_var;
extern "C" void Display_Activate_m2848 (Display_t562 * __this, int32_t ___width, int32_t ___height, int32_t ___refreshRate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(988);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___width;
		int32_t L_2 = ___height;
		int32_t L_3 = ___refreshRate;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t562_il2cpp_TypeInfo_var);
		Display_ActivateDisplayImpl_m2860(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Display::SetParams(System.Int32,System.Int32,System.Int32,System.Int32)
extern TypeInfo* Display_t562_il2cpp_TypeInfo_var;
extern "C" void Display_SetParams_m2849 (Display_t562 * __this, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(988);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___width;
		int32_t L_2 = ___height;
		int32_t L_3 = ___x;
		int32_t L_4 = ___y;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t562_il2cpp_TypeInfo_var);
		Display_SetParamsImpl_m2861(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Display::SetRenderingResolution(System.Int32,System.Int32)
extern TypeInfo* Display_t562_il2cpp_TypeInfo_var;
extern "C" void Display_SetRenderingResolution_m2850 (Display_t562 * __this, int32_t ___w, int32_t ___h, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(988);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___w;
		int32_t L_2 = ___h;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t562_il2cpp_TypeInfo_var);
		Display_SetRenderingResolutionImpl_m2859(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Display::MultiDisplayLicense()
extern TypeInfo* Display_t562_il2cpp_TypeInfo_var;
extern "C" bool Display_MultiDisplayLicense_m2851 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(988);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t562_il2cpp_TypeInfo_var);
		bool L_0 = Display_MultiDisplayLicenseImpl_m2862(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Display::RelativeMouseAt(UnityEngine.Vector3)
extern TypeInfo* Display_t562_il2cpp_TypeInfo_var;
extern "C" Vector3_t58  Display_RelativeMouseAt_m2852 (Object_t * __this /* static, unused */, Vector3_t58  ___inputMouseCoordinates, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(988);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t58  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_1 = 0;
		V_2 = 0;
		float L_0 = ((&___inputMouseCoordinates)->___x_1);
		V_3 = (((int32_t)L_0));
		float L_1 = ((&___inputMouseCoordinates)->___y_2);
		V_4 = (((int32_t)L_1));
		int32_t L_2 = V_3;
		int32_t L_3 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t562_il2cpp_TypeInfo_var);
		int32_t L_4 = Display_RelativeMouseAtImpl_m2863(NULL /*static, unused*/, L_2, L_3, (&V_1), (&V_2), /*hidden argument*/NULL);
		(&V_0)->___z_3 = (((float)L_4));
		int32_t L_5 = V_1;
		(&V_0)->___x_1 = (((float)L_5));
		int32_t L_6 = V_2;
		(&V_0)->___y_2 = (((float)L_6));
		Vector3_t58  L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Display UnityEngine.Display::get_main()
extern TypeInfo* Display_t562_il2cpp_TypeInfo_var;
extern "C" Display_t562 * Display_get_main_m2853 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(988);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t562_il2cpp_TypeInfo_var);
		Display_t562 * L_0 = ((Display_t562_StaticFields*)Display_t562_il2cpp_TypeInfo_var->static_fields)->____mainDisplay_2;
		return L_0;
	}
}
// System.Void UnityEngine.Display::RecreateDisplayList(System.IntPtr[])
extern TypeInfo* DisplayU5BU5D_t561_il2cpp_TypeInfo_var;
extern TypeInfo* Display_t562_il2cpp_TypeInfo_var;
extern "C" void Display_RecreateDisplayList_m2854 (Object_t * __this /* static, unused */, IntPtrU5BU5D_t712* ___nativeDisplay, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DisplayU5BU5D_t561_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(987);
		Display_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(988);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		IntPtrU5BU5D_t712* L_0 = ___nativeDisplay;
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t562_il2cpp_TypeInfo_var);
		((Display_t562_StaticFields*)Display_t562_il2cpp_TypeInfo_var->static_fields)->___displays_1 = ((DisplayU5BU5D_t561*)SZArrayNew(DisplayU5BU5D_t561_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_0)->max_length)))));
		V_0 = 0;
		goto IL_0027;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t562_il2cpp_TypeInfo_var);
		DisplayU5BU5D_t561* L_1 = ((Display_t562_StaticFields*)Display_t562_il2cpp_TypeInfo_var->static_fields)->___displays_1;
		int32_t L_2 = V_0;
		IntPtrU5BU5D_t712* L_3 = ___nativeDisplay;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Display_t562 * L_6 = (Display_t562 *)il2cpp_codegen_object_new (Display_t562_il2cpp_TypeInfo_var);
		Display__ctor_m2837(L_6, (*(IntPtr_t*)(IntPtr_t*)SZArrayLdElema(L_3, L_5)), /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		ArrayElementTypeCheck (L_1, L_6);
		*((Display_t562 **)(Display_t562 **)SZArrayLdElema(L_1, L_2)) = (Display_t562 *)L_6;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_8 = V_0;
		IntPtrU5BU5D_t712* L_9 = ___nativeDisplay;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t562_il2cpp_TypeInfo_var);
		DisplayU5BU5D_t561* L_10 = ((Display_t562_StaticFields*)Display_t562_il2cpp_TypeInfo_var->static_fields)->___displays_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		int32_t L_11 = 0;
		((Display_t562_StaticFields*)Display_t562_il2cpp_TypeInfo_var->static_fields)->____mainDisplay_2 = (*(Display_t562 **)(Display_t562 **)SZArrayLdElema(L_10, L_11));
		return;
	}
}
// System.Void UnityEngine.Display::FireDisplaysUpdated()
extern TypeInfo* Display_t562_il2cpp_TypeInfo_var;
extern "C" void Display_FireDisplaysUpdated_m2855 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(988);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t562_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t560 * L_0 = ((Display_t562_StaticFields*)Display_t562_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t562_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t560 * L_1 = ((Display_t562_StaticFields*)Display_t562_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(10 /* System.Void UnityEngine.Display/DisplaysUpdatedDelegate::Invoke() */, L_1);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetSystemExtImpl_m2856 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, const MethodInfo* method)
{
	typedef void (*Display_GetSystemExtImpl_m2856_ftn) (IntPtr_t, int32_t*, int32_t*);
	static Display_GetSystemExtImpl_m2856_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetSystemExtImpl_m2856_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetRenderingExtImpl_m2857 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, const MethodInfo* method)
{
	typedef void (*Display_GetRenderingExtImpl_m2857_ftn) (IntPtr_t, int32_t*, int32_t*);
	static Display_GetRenderingExtImpl_m2857_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetRenderingExtImpl_m2857_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)
extern "C" void Display_GetRenderingBuffersImpl_m2858 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, RenderBuffer_t659 * ___color, RenderBuffer_t659 * ___depth, const MethodInfo* method)
{
	typedef void (*Display_GetRenderingBuffersImpl_m2858_ftn) (IntPtr_t, RenderBuffer_t659 *, RenderBuffer_t659 *);
	static Display_GetRenderingBuffersImpl_m2858_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetRenderingBuffersImpl_m2858_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)");
	_il2cpp_icall_func(___nativeDisplay, ___color, ___depth);
}
// System.Void UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)
extern "C" void Display_SetRenderingResolutionImpl_m2859 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___w, int32_t ___h, const MethodInfo* method)
{
	typedef void (*Display_SetRenderingResolutionImpl_m2859_ftn) (IntPtr_t, int32_t, int32_t);
	static Display_SetRenderingResolutionImpl_m2859_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_SetRenderingResolutionImpl_m2859_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C" void Display_ActivateDisplayImpl_m2860 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___refreshRate, const MethodInfo* method)
{
	typedef void (*Display_ActivateDisplayImpl_m2860_ftn) (IntPtr_t, int32_t, int32_t, int32_t);
	static Display_ActivateDisplayImpl_m2860_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_ActivateDisplayImpl_m2860_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___width, ___height, ___refreshRate);
}
// System.Void UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Display_SetParamsImpl_m2861 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	typedef void (*Display_SetParamsImpl_m2861_ftn) (IntPtr_t, int32_t, int32_t, int32_t, int32_t);
	static Display_SetParamsImpl_m2861_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_SetParamsImpl_m2861_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___width, ___height, ___x, ___y);
}
// System.Boolean UnityEngine.Display::MultiDisplayLicenseImpl()
extern "C" bool Display_MultiDisplayLicenseImpl_m2862 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Display_MultiDisplayLicenseImpl_m2862_ftn) ();
	static Display_MultiDisplayLicenseImpl_m2862_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_MultiDisplayLicenseImpl_m2862_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::MultiDisplayLicenseImpl()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)
extern "C" int32_t Display_RelativeMouseAtImpl_m2863 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t* ___rx, int32_t* ___ry, const MethodInfo* method)
{
	typedef int32_t (*Display_RelativeMouseAtImpl_m2863_ftn) (int32_t, int32_t, int32_t*, int32_t*);
	static Display_RelativeMouseAtImpl_m2863_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_RelativeMouseAtImpl_m2863_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)");
	return _il2cpp_icall_func(___x, ___y, ___rx, ___ry);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
