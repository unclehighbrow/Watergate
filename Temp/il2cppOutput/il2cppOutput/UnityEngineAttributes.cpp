#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToA.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToAMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribu.h"
// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribuMethodDeclarations.h"
extern TypeInfo* InternalsVisibleToAttribute_t800_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t106_il2cpp_TypeInfo_var;
extern TypeInfo* ExtensionAttribute_t801_il2cpp_TypeInfo_var;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalsVisibleToAttribute_t800_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1117);
		RuntimeCompatibilityAttribute_t106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		ExtensionAttribute_t801_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1118);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 16;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		InternalsVisibleToAttribute_t800 * tmp;
		tmp = (InternalsVisibleToAttribute_t800 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t800_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3666(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t800 * tmp;
		tmp = (InternalsVisibleToAttribute_t800 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t800_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3666(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t800 * tmp;
		tmp = (InternalsVisibleToAttribute_t800 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t800_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3666(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t800 * tmp;
		tmp = (InternalsVisibleToAttribute_t800 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t800_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3666(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t800 * tmp;
		tmp = (InternalsVisibleToAttribute_t800 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t800_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3666(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t800 * tmp;
		tmp = (InternalsVisibleToAttribute_t800 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t800_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3666(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t800 * tmp;
		tmp = (InternalsVisibleToAttribute_t800 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t800_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3666(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t800 * tmp;
		tmp = (InternalsVisibleToAttribute_t800 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t800_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3666(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t800 * tmp;
		tmp = (InternalsVisibleToAttribute_t800 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t800_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3666(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), NULL);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t106 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t106 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t106_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m366(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m367(tmp, true, NULL);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		ExtensionAttribute_t801 * tmp;
		tmp = (ExtensionAttribute_t801 *)il2cpp_codegen_object_new (ExtensionAttribute_t801_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m3667(tmp, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t800 * tmp;
		tmp = (InternalsVisibleToAttribute_t800 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t800_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3666(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t800 * tmp;
		tmp = (InternalsVisibleToAttribute_t800 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t800_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3666(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), NULL);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t800 * tmp;
		tmp = (InternalsVisibleToAttribute_t800 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t800_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3666(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), NULL);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t800 * tmp;
		tmp = (InternalsVisibleToAttribute_t800 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t800_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3666(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), NULL);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t800 * tmp;
		tmp = (InternalsVisibleToAttribute_t800 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t800_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3666(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), NULL);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t478_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m2268(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t478_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m2269(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern TypeInfo* TypeInferenceRuleAttribute_t702_il2cpp_TypeInfo_var;
void AssetBundle_t480_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m2273(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1120);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t702 * tmp;
		tmp = (TypeInferenceRuleAttribute_t702 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t702_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m3501(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t702_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void AssetBundle_t480_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m2274(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1120);
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t702 * tmp;
		tmp = (TypeInferenceRuleAttribute_t702 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t702_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m3501(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void AssetBundle_t480_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m2275(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void LayerMask_t173_CustomAttributesCacheGenerator_LayerMask_LayerToName_m2278(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void LayerMask_t173_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m2279(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttributeMethodDeclarations.h"
extern TypeInfo* ParamArrayAttribute_t420_il2cpp_TypeInfo_var;
void LayerMask_t173_CustomAttributesCacheGenerator_LayerMask_t173_LayerMask_GetMask_m2280_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t420_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t420 * tmp;
		tmp = (ParamArrayAttribute_t420 *)il2cpp_codegen_object_new (ParamArrayAttribute_t420_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2129(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern TypeInfo* ObsoleteAttribute_t411_il2cpp_TypeInfo_var;
void RuntimePlatform_t483_CustomAttributesCacheGenerator_NaCl(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t411 * tmp;
		tmp = (ObsoleteAttribute_t411 *)il2cpp_codegen_object_new (ObsoleteAttribute_t411_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2088(tmp, il2cpp_codegen_string_new_wrapper("NaCl export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t411_il2cpp_TypeInfo_var;
void RuntimePlatform_t483_CustomAttributesCacheGenerator_FlashPlayer(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t411 * tmp;
		tmp = (ObsoleteAttribute_t411 *)il2cpp_codegen_object_new (ObsoleteAttribute_t411_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2088(tmp, il2cpp_codegen_string_new_wrapper("FlashPlayer export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t411_il2cpp_TypeInfo_var;
void RuntimePlatform_t483_CustomAttributesCacheGenerator_MetroPlayerX86(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t411 * tmp;
		tmp = (ObsoleteAttribute_t411 *)il2cpp_codegen_object_new (ObsoleteAttribute_t411_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2088(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX86 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t411_il2cpp_TypeInfo_var;
void RuntimePlatform_t483_CustomAttributesCacheGenerator_MetroPlayerX64(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t411 * tmp;
		tmp = (ObsoleteAttribute_t411 *)il2cpp_codegen_object_new (ObsoleteAttribute_t411_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2088(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX64 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t411_il2cpp_TypeInfo_var;
void RuntimePlatform_t483_CustomAttributesCacheGenerator_MetroPlayerARM(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t411 * tmp;
		tmp = (ObsoleteAttribute_t411 *)il2cpp_codegen_object_new (ObsoleteAttribute_t411_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2088(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerARM instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void SystemInfo_t485_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m2281(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Coroutine_t235_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m2284(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void ScriptableObject_t6_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m2286(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
extern TypeInfo* WritableAttribute_t652_il2cpp_TypeInfo_var;
void ScriptableObject_t6_CustomAttributesCacheGenerator_ScriptableObject_t6_ScriptableObject_Internal_CreateScriptableObject_m2286_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1121);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t652 * tmp;
		tmp = (WritableAttribute_t652 *)il2cpp_codegen_object_new (WritableAttribute_t652_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m3327(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void ScriptableObject_t6_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m2287(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void ScriptableObject_t6_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m2289(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GameCenterPlatform_t495_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m2294(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GameCenterPlatform_t495_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m2295(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GameCenterPlatform_t495_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m2296(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GameCenterPlatform_t495_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m2297(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GameCenterPlatform_t495_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m2298(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GameCenterPlatform_t495_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m2299(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GameCenterPlatform_t495_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m2300(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GameCenterPlatform_t495_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m2301(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GameCenterPlatform_t495_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m2302(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GameCenterPlatform_t495_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m2303(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GameCenterPlatform_t495_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m2304(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GameCenterPlatform_t495_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m2305(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GameCenterPlatform_t495_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m2306(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GameCenterPlatform_t495_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m2307(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GameCenterPlatform_t495_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m2308(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GameCenterPlatform_t495_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m2309(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GameCenterPlatform_t495_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2310(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GameCenterPlatform_t495_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2314(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GcLeaderboard_t497_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m2358(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GcLeaderboard_t497_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m2359(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GcLeaderboard_t497_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m2360(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GcLeaderboard_t497_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m2361(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Renderer_t499_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m1674(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Renderer_t499_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m1675(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Screen_t500_CustomAttributesCacheGenerator_Screen_get_width_m237(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Screen_t500_CustomAttributesCacheGenerator_Screen_get_height_m238(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Screen_t500_CustomAttributesCacheGenerator_Screen_get_dpi_m2015(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Texture_t240_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m2383(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Texture_t240_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m2384(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Texture2D_t193_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m2388(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t652_il2cpp_TypeInfo_var;
void Texture2D_t193_CustomAttributesCacheGenerator_Texture2D_t193_Texture2D_Internal_Create_m2388_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1121);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t652 * tmp;
		tmp = (WritableAttribute_t652 *)il2cpp_codegen_object_new (WritableAttribute_t652_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m3327(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Texture2D_t193_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m1722(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Texture2D_t193_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m1813(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void RenderTexture_t501_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m2389(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void RenderTexture_t501_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m2390(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GUILayer_t504_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m2394(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Gradient_t507_CustomAttributesCacheGenerator_Gradient_Init_m2398(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Gradient_t507_CustomAttributesCacheGenerator_Gradient_Cleanup_m2399(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void GUI_t512_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void GUI_t512_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void GUI_t512_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m2407(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GUI_t512_CustomAttributesCacheGenerator_GUI_set_changed_m2410(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GUILayoutUtility_t518_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m2423(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GUILayoutUtility_t518_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m2425(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GUIUtility_t525_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m2456(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GUIUtility_t525_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m2457(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GUIUtility_t525_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m2459(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GUIUtility_t525_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m2461(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GUIUtility_t525_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m2465(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void GUISettings_t526_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void GUISettings_t526_CustomAttributesCacheGenerator_m_TripleClickSelectsLine(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void GUISettings_t526_CustomAttributesCacheGenerator_m_CursorColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void GUISettings_t526_CustomAttributesCacheGenerator_m_CursorFlashSpeed(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void GUISettings_t526_CustomAttributesCacheGenerator_m_SelectionColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
extern TypeInfo* ExecuteInEditMode_t418_il2cpp_TypeInfo_var;
void GUISkin_t510_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExecuteInEditMode_t418 * tmp;
		tmp = (ExecuteInEditMode_t418 *)il2cpp_codegen_object_new (ExecuteInEditMode_t418_il2cpp_TypeInfo_var);
		ExecuteInEditMode__ctor_m2124(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void GUISkin_t510_CustomAttributesCacheGenerator_m_Font(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void GUISkin_t510_CustomAttributesCacheGenerator_m_box(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void GUISkin_t510_CustomAttributesCacheGenerator_m_button(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void GUISkin_t510_CustomAttributesCacheGenerator_m_toggle(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void GUISkin_t510_CustomAttributesCacheGenerator_m_label(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void GUISkin_t510_CustomAttributesCacheGenerator_m_textField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void GUISkin_t510_CustomAttributesCacheGenerator_m_textArea(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void GUISkin_t510_CustomAttributesCacheGenerator_m_window(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void GUISkin_t510_CustomAttributesCacheGenerator_m_horizontalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void GUISkin_t510_CustomAttributesCacheGenerator_m_horizontalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void GUISkin_t510_CustomAttributesCacheGenerator_m_verticalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void GUISkin_t510_CustomAttributesCacheGenerator_m_verticalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void GUISkin_t510_CustomAttributesCacheGenerator_m_horizontalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void GUISkin_t510_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void GUISkin_t510_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void GUISkin_t510_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void GUISkin_t510_CustomAttributesCacheGenerator_m_verticalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void GUISkin_t510_CustomAttributesCacheGenerator_m_verticalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void GUISkin_t510_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void GUISkin_t510_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void GUISkin_t510_CustomAttributesCacheGenerator_m_ScrollView(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void GUISkin_t510_CustomAttributesCacheGenerator_m_CustomStyles(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void GUISkin_t510_CustomAttributesCacheGenerator_m_Settings(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void GUIContent_t371_CustomAttributesCacheGenerator_m_Text(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void GUIContent_t371_CustomAttributesCacheGenerator_m_Image(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void GUIContent_t371_CustomAttributesCacheGenerator_m_Tooltip(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GUIStyleState_t530_CustomAttributesCacheGenerator_GUIStyleState_Init_m2532(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GUIStyleState_t530_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m2533(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GUIStyleState_t530_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m2534(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GUIStyleState_t530_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m2535(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void RectOffset_t291_CustomAttributesCacheGenerator_RectOffset_Init_m2540(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void RectOffset_t291_CustomAttributesCacheGenerator_RectOffset_Cleanup_m2541(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void RectOffset_t291_CustomAttributesCacheGenerator_RectOffset_get_left_m2030(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void RectOffset_t291_CustomAttributesCacheGenerator_RectOffset_set_left_m2542(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void RectOffset_t291_CustomAttributesCacheGenerator_RectOffset_get_right_m2543(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void RectOffset_t291_CustomAttributesCacheGenerator_RectOffset_set_right_m2544(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void RectOffset_t291_CustomAttributesCacheGenerator_RectOffset_get_top_m2031(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void RectOffset_t291_CustomAttributesCacheGenerator_RectOffset_set_top_m2545(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void RectOffset_t291_CustomAttributesCacheGenerator_RectOffset_get_bottom_m2546(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void RectOffset_t291_CustomAttributesCacheGenerator_RectOffset_set_bottom_m2547(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void RectOffset_t291_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m2025(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void RectOffset_t291_CustomAttributesCacheGenerator_RectOffset_get_vertical_m2026(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void RectOffset_t291_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m2549(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GUIStyle_t517_CustomAttributesCacheGenerator_GUIStyle_Init_m2554(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GUIStyle_t517_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m2555(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GUIStyle_t517_CustomAttributesCacheGenerator_GUIStyle_get_name_m2556(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GUIStyle_t517_CustomAttributesCacheGenerator_GUIStyle_set_name_m2557(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GUIStyle_t517_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m2559(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GUIStyle_t517_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m2562(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GUIStyle_t517_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m2563(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GUIStyle_t517_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m2564(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GUIStyle_t517_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m2565(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GUIStyle_t517_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m2566(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GUIStyle_t517_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m2567(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GUIStyle_t517_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m2568(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GUIStyle_t517_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m2569(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GUIStyle_t517_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m2571(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GUIStyle_t517_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m2575(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GUIStyle_t517_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m2577(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GUIStyle_t517_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m2579(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t231_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m2582(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t231_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m2584(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
extern TypeInfo* ExcludeFromDocsAttribute_t700_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t231_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m1915(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1122);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t700 * tmp;
		tmp = (ExcludeFromDocsAttribute_t700 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t700_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3500(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t700_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t231_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m1916(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1122);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t700 * tmp;
		tmp = (ExcludeFromDocsAttribute_t700 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t700_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3500(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern TypeInfo* DefaultValueAttribute_t699_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t231_CustomAttributesCacheGenerator_TouchScreenKeyboard_t231_TouchScreenKeyboard_Open_m2585_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t699 * tmp;
		tmp = (DefaultValueAttribute_t699 *)il2cpp_codegen_object_new (DefaultValueAttribute_t699_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3496(tmp, il2cpp_codegen_string_new_wrapper("TouchScreenKeyboardType.Default"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t699_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t231_CustomAttributesCacheGenerator_TouchScreenKeyboard_t231_TouchScreenKeyboard_Open_m2585_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t699 * tmp;
		tmp = (DefaultValueAttribute_t699 *)il2cpp_codegen_object_new (DefaultValueAttribute_t699_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3496(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t699_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t231_CustomAttributesCacheGenerator_TouchScreenKeyboard_t231_TouchScreenKeyboard_Open_m2585_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t699 * tmp;
		tmp = (DefaultValueAttribute_t699 *)il2cpp_codegen_object_new (DefaultValueAttribute_t699_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3496(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t699_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t231_CustomAttributesCacheGenerator_TouchScreenKeyboard_t231_TouchScreenKeyboard_Open_m2585_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t699 * tmp;
		tmp = (DefaultValueAttribute_t699 *)il2cpp_codegen_object_new (DefaultValueAttribute_t699_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3496(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t699_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t231_CustomAttributesCacheGenerator_TouchScreenKeyboard_t231_TouchScreenKeyboard_Open_m2585_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t699 * tmp;
		tmp = (DefaultValueAttribute_t699 *)il2cpp_codegen_object_new (DefaultValueAttribute_t699_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3496(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t699_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t231_CustomAttributesCacheGenerator_TouchScreenKeyboard_t231_TouchScreenKeyboard_Open_m2585_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t699 * tmp;
		tmp = (DefaultValueAttribute_t699 *)il2cpp_codegen_object_new (DefaultValueAttribute_t699_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3496(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t231_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m1842(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t231_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m1843(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t231_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m1914(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t231_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m1841(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t231_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m1913(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t231_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m1856(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t231_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m1853(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void Event_t236_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Event_t236_CustomAttributesCacheGenerator_Event_Init_m2586(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Event_t236_CustomAttributesCacheGenerator_Event_Cleanup_m2588(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Event_t236_CustomAttributesCacheGenerator_Event_get_rawType_m1869(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Event_t236_CustomAttributesCacheGenerator_Event_get_type_m2589(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Event_t236_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m2591(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Event_t236_CustomAttributesCacheGenerator_Event_get_modifiers_m1865(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Event_t236_CustomAttributesCacheGenerator_Event_get_character_m1867(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Event_t236_CustomAttributesCacheGenerator_Event_get_commandName_m2592(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Event_t236_CustomAttributesCacheGenerator_Event_get_keyCode_m1866(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Event_t236_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m2594(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Event_t236_CustomAttributesCacheGenerator_Event_PopEvent_m1870(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t406_il2cpp_TypeInfo_var;
void EventModifiers_t535_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t406_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(401);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t406 * tmp;
		tmp = (FlagsAttribute_t406 *)il2cpp_codegen_object_new (FlagsAttribute_t406_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m2067(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Gizmos_t536_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawLine_m2601(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Gizmos_t536_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawCube_m2602(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Gizmos_t536_CustomAttributesCacheGenerator_Gizmos_INTERNAL_set_color_m2603(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern TypeInfo* DefaultMemberAttribute_t426_il2cpp_TypeInfo_var;
void Vector2_t38_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(415);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t426 * tmp;
		tmp = (DefaultMemberAttribute_t426 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t426_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m2153(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t426_il2cpp_TypeInfo_var;
void Vector3_t58_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(415);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t426 * tmp;
		tmp = (DefaultMemberAttribute_t426 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t426_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m2153(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t426_il2cpp_TypeInfo_var;
void Color_t13_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(415);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t426 * tmp;
		tmp = (DefaultMemberAttribute_t426 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t426_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m2153(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttribute.h"
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttributeMethodDeclarations.h"
extern TypeInfo* IL2CPPStructAlignmentAttribute_t646_il2cpp_TypeInfo_var;
void Color32_t340_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IL2CPPStructAlignmentAttribute_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1123);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		IL2CPPStructAlignmentAttribute_t646 * tmp;
		tmp = (IL2CPPStructAlignmentAttribute_t646 *)il2cpp_codegen_object_new (IL2CPPStructAlignmentAttribute_t646_il2cpp_TypeInfo_var);
		IL2CPPStructAlignmentAttribute__ctor_m3319(tmp, NULL);
		tmp->___Align_0 = 4;
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t426_il2cpp_TypeInfo_var;
void Quaternion_t99_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(415);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t426 * tmp;
		tmp = (DefaultMemberAttribute_t426 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t426_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m2153(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Quaternion_t99_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m2627(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t426_il2cpp_TypeInfo_var;
void Matrix4x4_t380_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(415);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t426 * tmp;
		tmp = (DefaultMemberAttribute_t426 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t426_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m2153(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Matrix4x4_t380_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m2642(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Matrix4x4_t380_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m2644(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Matrix4x4_t380_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m2646(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Matrix4x4_t380_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m2649(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Matrix4x4_t380_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m2661(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Matrix4x4_t380_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m2664(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Matrix4x4_t380_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m2665(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Bounds_t254_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m2682(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Bounds_t254_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m2685(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Bounds_t254_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m2688(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Bounds_t254_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m2692(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t426_il2cpp_TypeInfo_var;
void Vector4_t333_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(415);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t426 * tmp;
		tmp = (DefaultMemberAttribute_t426 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t426_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m2153(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t699_il2cpp_TypeInfo_var;
void Mathf_t68_CustomAttributesCacheGenerator_Mathf_t68_Mathf_SmoothDamp_m1940_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t699 * tmp;
		tmp = (DefaultValueAttribute_t699 *)il2cpp_codegen_object_new (DefaultValueAttribute_t699_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3496(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t699_il2cpp_TypeInfo_var;
void Mathf_t68_CustomAttributesCacheGenerator_Mathf_t68_Mathf_SmoothDamp_m1940_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t699 * tmp;
		tmp = (DefaultValueAttribute_t699 *)il2cpp_codegen_object_new (DefaultValueAttribute_t699_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3496(tmp, il2cpp_codegen_string_new_wrapper("Time.deltaTime"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t406_il2cpp_TypeInfo_var;
void DrivenTransformProperties_t538_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t406_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(401);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t406 * tmp;
		tmp = (FlagsAttribute_t406 *)il2cpp_codegen_object_new (FlagsAttribute_t406_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m2067(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void RectTransform_t70_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m2721(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void RectTransform_t70_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m2722(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void RectTransform_t70_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m2723(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void RectTransform_t70_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m2724(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void RectTransform_t70_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m2725(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void RectTransform_t70_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m2726(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void RectTransform_t70_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m2727(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void RectTransform_t70_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m2728(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void RectTransform_t70_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m2729(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void RectTransform_t70_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m2730(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void RectTransform_t70_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m2731(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t702_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Resources_t542_CustomAttributesCacheGenerator_Resources_Load_m2737(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1120);
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t702 * tmp;
		tmp = (TypeInferenceRuleAttribute_t702 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t702_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m3501(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t411_il2cpp_TypeInfo_var;
void SerializePrivateVariables_t543_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t411 * tmp;
		tmp = (ObsoleteAttribute_t411 *)il2cpp_codegen_object_new (ObsoleteAttribute_t411_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2088(tmp, il2cpp_codegen_string_new_wrapper("Use SerializeField on the private variables that you want to be serialized instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Shader_t545_CustomAttributesCacheGenerator_Shader_PropertyToID_m2739(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Material_t192_CustomAttributesCacheGenerator_Material_GetTexture_m2741(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Material_t192_CustomAttributesCacheGenerator_Material_SetFloat_m2743(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Material_t192_CustomAttributesCacheGenerator_Material_HasProperty_m2744(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Material_t192_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m2745(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t652_il2cpp_TypeInfo_var;
void Material_t192_CustomAttributesCacheGenerator_Material_t192_Material_Internal_CreateWithMaterial_m2745_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1121);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t652 * tmp;
		tmp = (WritableAttribute_t652 *)il2cpp_codegen_object_new (WritableAttribute_t652_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m3327(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t426_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t546_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(415);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t426 * tmp;
		tmp = (DefaultMemberAttribute_t426 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t426_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m2153(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t546_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m2748(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t546_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m2751(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t546_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m2754(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Sprite_t7_CustomAttributesCacheGenerator_Sprite_get_rect_m1789(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Sprite_t7_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m1784(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Sprite_t7_CustomAttributesCacheGenerator_Sprite_get_texture_m1781(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Sprite_t7_CustomAttributesCacheGenerator_Sprite_get_textureRect_m1810(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Sprite_t7_CustomAttributesCacheGenerator_Sprite_get_border_m1782(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void SpriteRenderer_t15_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_get_color_m2764(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void SpriteRenderer_t15_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m2765(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void DataUtility_t547_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m1799(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void DataUtility_t547_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m1798(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void DataUtility_t547_CustomAttributesCacheGenerator_DataUtility_GetPadding_m1788(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void DataUtility_t547_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m2766(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void WWW_t548_CustomAttributesCacheGenerator_WWW_DestroyWWW_m2770(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void WWW_t548_CustomAttributesCacheGenerator_WWW_InitWWW_m2771(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void WWW_t548_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m2773(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void WWW_t548_CustomAttributesCacheGenerator_WWW_get_bytes_m2777(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void WWW_t548_CustomAttributesCacheGenerator_WWW_get_error_m2778(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void WWW_t548_CustomAttributesCacheGenerator_WWW_get_isDone_m2779(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t700_il2cpp_TypeInfo_var;
void WWWForm_t552_CustomAttributesCacheGenerator_WWWForm_AddField_m2783(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1122);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t700 * tmp;
		tmp = (ExcludeFromDocsAttribute_t700 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t700_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3500(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t699_il2cpp_TypeInfo_var;
void WWWForm_t552_CustomAttributesCacheGenerator_WWWForm_t552_WWWForm_AddField_m2784_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t699 * tmp;
		tmp = (DefaultValueAttribute_t699 *)il2cpp_codegen_object_new (DefaultValueAttribute_t699_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3496(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t699_il2cpp_TypeInfo_var;
void WWWTranscoder_t553_CustomAttributesCacheGenerator_WWWTranscoder_t553_WWWTranscoder_QPEncode_m2791_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t699 * tmp;
		tmp = (DefaultValueAttribute_t699 *)il2cpp_codegen_object_new (DefaultValueAttribute_t699_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3496(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t699_il2cpp_TypeInfo_var;
void WWWTranscoder_t553_CustomAttributesCacheGenerator_WWWTranscoder_t553_WWWTranscoder_SevenBitClean_m2794_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t699 * tmp;
		tmp = (DefaultValueAttribute_t699 *)il2cpp_codegen_object_new (DefaultValueAttribute_t699_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3496(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t411_il2cpp_TypeInfo_var;
void CacheIndex_t554_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t411 * tmp;
		tmp = (ObsoleteAttribute_t411 *)il2cpp_codegen_object_new (ObsoleteAttribute_t411_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2088(tmp, il2cpp_codegen_string_new_wrapper("this API is not for public use."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t420_il2cpp_TypeInfo_var;
void UnityString_t555_CustomAttributesCacheGenerator_UnityString_t555_UnityString_Format_m2796_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t420_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t420 * tmp;
		tmp = (ParamArrayAttribute_t420 *)il2cpp_codegen_object_new (ParamArrayAttribute_t420_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2129(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void AsyncOperation_t479_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m2798(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Application_t557_CustomAttributesCacheGenerator_Application_get_loadedLevel_m249(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Application_t557_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m2804(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Application_t557_CustomAttributesCacheGenerator_Application_get_levelCount_m252(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Application_t557_CustomAttributesCacheGenerator_Application_get_isPlaying_m1918(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Application_t557_CustomAttributesCacheGenerator_Application_get_isEditor_m1921(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Application_t557_CustomAttributesCacheGenerator_Application_get_platform_m1840(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Behaviour_t394_CustomAttributesCacheGenerator_Behaviour_get_enabled_m1609(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Behaviour_t394_CustomAttributesCacheGenerator_Behaviour_set_enabled_m302(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Behaviour_t394_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m1610(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Camera_t84_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m1667(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Camera_t84_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m1666(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Camera_t84_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m277(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Camera_t84_CustomAttributesCacheGenerator_Camera_get_depth_m1571(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Camera_t84_CustomAttributesCacheGenerator_Camera_get_cullingMask_m1678(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Camera_t84_CustomAttributesCacheGenerator_Camera_get_eventMask_m2811(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Camera_t84_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m2812(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Camera_t84_CustomAttributesCacheGenerator_Camera_get_targetTexture_m2814(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Camera_t84_CustomAttributesCacheGenerator_Camera_get_clearFlags_m2815(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Camera_t84_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m2816(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Camera_t84_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m2817(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Camera_t84_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m2818(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Camera_t84_CustomAttributesCacheGenerator_Camera_get_main_m276(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Camera_t84_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m2819(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Camera_t84_CustomAttributesCacheGenerator_Camera_GetAllCameras_m2820(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Camera_t84_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m2825(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Camera_t84_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m2827(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttribute.h"
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t802_il2cpp_TypeInfo_var;
void CameraCallback_t558_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1124);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t802 * tmp;
		tmp = (EditorBrowsableAttribute_t802 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t802_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m3672(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Debug_t559_CustomAttributesCacheGenerator_Debug_Internal_Log_m2828(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t652_il2cpp_TypeInfo_var;
void Debug_t559_CustomAttributesCacheGenerator_Debug_t559_Debug_Internal_Log_m2828_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1121);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t652 * tmp;
		tmp = (WritableAttribute_t652 *)il2cpp_codegen_object_new (WritableAttribute_t652_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m3327(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Debug_t559_CustomAttributesCacheGenerator_Debug_Internal_LogException_m2829(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t652_il2cpp_TypeInfo_var;
void Debug_t559_CustomAttributesCacheGenerator_Debug_t559_Debug_Internal_LogException_m2829_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1121);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t652 * tmp;
		tmp = (WritableAttribute_t652 *)il2cpp_codegen_object_new (WritableAttribute_t652_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m3327(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Display_t562_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m2856(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Display_t562_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m2857(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Display_t562_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m2858(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Display_t562_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m2859(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Display_t562_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m2860(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Display_t562_CustomAttributesCacheGenerator_Display_SetParamsImpl_m2861(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Display_t562_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m2862(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Display_t562_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m2863(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void MonoBehaviour_t16_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m2864(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void MonoBehaviour_t16_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_m2865(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t699_il2cpp_TypeInfo_var;
void MonoBehaviour_t16_CustomAttributesCacheGenerator_MonoBehaviour_t16_MonoBehaviour_StartCoroutine_m2865_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t699 * tmp;
		tmp = (DefaultValueAttribute_t699 *)il2cpp_codegen_object_new (DefaultValueAttribute_t699_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3496(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t700_il2cpp_TypeInfo_var;
void MonoBehaviour_t16_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_m235(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1122);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t700 * tmp;
		tmp = (ExcludeFromDocsAttribute_t700 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t700_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3500(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void MonoBehaviour_t16_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_m357(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void MonoBehaviour_t16_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m2867(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void MonoBehaviour_t16_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m2868(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Input_t100_CustomAttributesCacheGenerator_Input_GetKeyDownString_m2870(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Input_t100_CustomAttributesCacheGenerator_Input_GetAxisRaw_m1656(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Input_t100_CustomAttributesCacheGenerator_Input_GetButtonDown_m1655(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Input_t100_CustomAttributesCacheGenerator_Input_GetMouseButton_m1663(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Input_t100_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m1625(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Input_t100_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m1626(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Input_t100_CustomAttributesCacheGenerator_Input_get_mousePosition_m1627(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Input_t100_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m1628(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Input_t100_CustomAttributesCacheGenerator_Input_get_mousePresent_m1654(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Input_t100_CustomAttributesCacheGenerator_Input_GetTouch_m1662(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Input_t100_CustomAttributesCacheGenerator_Input_get_touchCount_m356(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Input_t100_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m1917(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Input_t100_CustomAttributesCacheGenerator_Input_get_compositionString_m1844(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Input_t100_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m2871(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t406_il2cpp_TypeInfo_var;
void HideFlags_t565_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t406_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(401);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t406 * tmp;
		tmp = (FlagsAttribute_t406 *)il2cpp_codegen_object_new (FlagsAttribute_t406_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m2067(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Object_t67_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m2873(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Object_t67_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m2875(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Object_t67_CustomAttributesCacheGenerator_Object_Destroy_m2876(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t699_il2cpp_TypeInfo_var;
void Object_t67_CustomAttributesCacheGenerator_Object_t67_Object_Destroy_m2876_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t699 * tmp;
		tmp = (DefaultValueAttribute_t699 *)il2cpp_codegen_object_new (DefaultValueAttribute_t699_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3496(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t700_il2cpp_TypeInfo_var;
void Object_t67_CustomAttributesCacheGenerator_Object_Destroy_m303(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1122);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t700 * tmp;
		tmp = (ExcludeFromDocsAttribute_t700 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t700_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3500(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Object_t67_CustomAttributesCacheGenerator_Object_DestroyImmediate_m2877(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t699_il2cpp_TypeInfo_var;
void Object_t67_CustomAttributesCacheGenerator_Object_t67_Object_DestroyImmediate_m2877_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t699 * tmp;
		tmp = (DefaultValueAttribute_t699 *)il2cpp_codegen_object_new (DefaultValueAttribute_t699_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3496(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t700_il2cpp_TypeInfo_var;
void Object_t67_CustomAttributesCacheGenerator_Object_DestroyImmediate_m1920(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1122);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t700 * tmp;
		tmp = (ExcludeFromDocsAttribute_t700 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t700_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3500(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t702_il2cpp_TypeInfo_var;
void Object_t67_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m2878(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		TypeInferenceRuleAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1120);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t702 * tmp;
		tmp = (TypeInferenceRuleAttribute_t702 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t702_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m3501(tmp, 2, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Object_t67_CustomAttributesCacheGenerator_Object_get_name_m358(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Object_t67_CustomAttributesCacheGenerator_Object_set_name_m1987(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Object_t67_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m2879(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Object_t67_CustomAttributesCacheGenerator_Object_set_hideFlags_m1885(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Object_t67_CustomAttributesCacheGenerator_Object_ToString_m377(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t702_il2cpp_TypeInfo_var;
void Object_t67_CustomAttributesCacheGenerator_Object_Instantiate_m339(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1120);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t702 * tmp;
		tmp = (TypeInferenceRuleAttribute_t702 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t702_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m3501(tmp, 3, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t702_il2cpp_TypeInfo_var;
void Object_t67_CustomAttributesCacheGenerator_Object_FindObjectOfType_m2885(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1120);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t702 * tmp;
		tmp = (TypeInferenceRuleAttribute_t702 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t702_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m3501(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Component_t62_CustomAttributesCacheGenerator_Component_get_transform_m197(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Component_t62_CustomAttributesCacheGenerator_Component_get_gameObject_m258(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t702_il2cpp_TypeInfo_var;
void Component_t62_CustomAttributesCacheGenerator_Component_GetComponent_m2038(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1120);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t702 * tmp;
		tmp = (TypeInferenceRuleAttribute_t702 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t702_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m3501(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Component_t62_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m2887(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttribute.h"
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecuritySafeCriticalAttribute_t803_il2cpp_TypeInfo_var;
void Component_t62_CustomAttributesCacheGenerator_Component_GetComponent_m3676(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1125);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t803 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t803 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t803_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m3677(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Component_t62_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m2888(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t702_il2cpp_TypeInfo_var;
void GameObject_t28_CustomAttributesCacheGenerator_GameObject_GetComponent_m2890(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		TypeInferenceRuleAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1120);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t702 * tmp;
		tmp = (TypeInferenceRuleAttribute_t702 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t702_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m3501(tmp, 0, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GameObject_t28_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m2891(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t803_il2cpp_TypeInfo_var;
void GameObject_t28_CustomAttributesCacheGenerator_GameObject_GetComponent_m3681(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1125);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t803 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t803 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t803_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m3677(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GameObject_t28_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m2892(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GameObject_t28_CustomAttributesCacheGenerator_GameObject_get_transform_m280(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GameObject_t28_CustomAttributesCacheGenerator_GameObject_get_layer_m1888(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GameObject_t28_CustomAttributesCacheGenerator_GameObject_set_layer_m1889(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GameObject_t28_CustomAttributesCacheGenerator_GameObject_SetActive_m353(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GameObject_t28_CustomAttributesCacheGenerator_GameObject_get_activeSelf_m352(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GameObject_t28_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m1611(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GameObject_t28_CustomAttributesCacheGenerator_GameObject_get_tag_m333(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GameObject_t28_CustomAttributesCacheGenerator_GameObject_CompareTag_m259(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GameObject_t28_CustomAttributesCacheGenerator_GameObject_FindGameObjectsWithTag_m289(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GameObject_t28_CustomAttributesCacheGenerator_GameObject_SendMessage_m2893(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t699_il2cpp_TypeInfo_var;
void GameObject_t28_CustomAttributesCacheGenerator_GameObject_t28_GameObject_SendMessage_m2893_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t699 * tmp;
		tmp = (DefaultValueAttribute_t699 *)il2cpp_codegen_object_new (DefaultValueAttribute_t699_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3496(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t699_il2cpp_TypeInfo_var;
void GameObject_t28_CustomAttributesCacheGenerator_GameObject_t28_GameObject_SendMessage_m2893_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t699 * tmp;
		tmp = (DefaultValueAttribute_t699 *)il2cpp_codegen_object_new (DefaultValueAttribute_t699_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3496(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GameObject_t28_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m2894(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t702_il2cpp_TypeInfo_var;
void GameObject_t28_CustomAttributesCacheGenerator_GameObject_AddComponent_m2895(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1120);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t702 * tmp;
		tmp = (TypeInferenceRuleAttribute_t702 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t702_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m3501(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GameObject_t28_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m2896(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t652_il2cpp_TypeInfo_var;
void GameObject_t28_CustomAttributesCacheGenerator_GameObject_t28_GameObject_Internal_CreateGameObject_m2896_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1121);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t652 * tmp;
		tmp = (WritableAttribute_t652 *)il2cpp_codegen_object_new (WritableAttribute_t652_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m3327(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void GameObject_t28_CustomAttributesCacheGenerator_GameObject_Find_m232(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Transform_t66_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m2900(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Transform_t66_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m2901(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Transform_t66_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m2902(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Transform_t66_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m2903(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Transform_t66_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m2904(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Transform_t66_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m2905(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Transform_t66_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m2906(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Transform_t66_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m2907(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Transform_t66_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m2908(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Transform_t66_CustomAttributesCacheGenerator_Transform_get_parentInternal_m2909(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Transform_t66_CustomAttributesCacheGenerator_Transform_set_parentInternal_m2910(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Transform_t66_CustomAttributesCacheGenerator_Transform_SetParent_m2911(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Transform_t66_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m2912(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Transform_t66_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m2913(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Transform_t66_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m2914(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Transform_t66_CustomAttributesCacheGenerator_Transform_get_childCount_m281(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Transform_t66_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m1887(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Transform_t66_CustomAttributesCacheGenerator_Transform_GetChild_m2037(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Time_t567_CustomAttributesCacheGenerator_Time_get_deltaTime_m301(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Time_t567_CustomAttributesCacheGenerator_Time_get_unscaledTime_m1658(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Time_t567_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m1691(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Time_t567_CustomAttributesCacheGenerator_Time_get_timeScale_m362(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Time_t567_CustomAttributesCacheGenerator_Time_set_timeScale_m282(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Random_t568_CustomAttributesCacheGenerator_Random_RandomRangeInt_m2916(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void PlayerPrefs_t570_CustomAttributesCacheGenerator_PlayerPrefs_TrySetInt_m2919(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void PlayerPrefs_t570_CustomAttributesCacheGenerator_PlayerPrefs_GetInt_m240(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t699_il2cpp_TypeInfo_var;
void PlayerPrefs_t570_CustomAttributesCacheGenerator_PlayerPrefs_t570_PlayerPrefs_GetInt_m240_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t699 * tmp;
		tmp = (DefaultValueAttribute_t699 *)il2cpp_codegen_object_new (DefaultValueAttribute_t699_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3496(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t700_il2cpp_TypeInfo_var;
void PlayerPrefs_t570_CustomAttributesCacheGenerator_PlayerPrefs_GetInt_m250(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1122);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t700 * tmp;
		tmp = (ExcludeFromDocsAttribute_t700 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t700_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3500(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void PlayerPrefs_t570_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m2920(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t699_il2cpp_TypeInfo_var;
void PlayerPrefs_t570_CustomAttributesCacheGenerator_PlayerPrefs_t570_PlayerPrefs_GetString_m2920_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t699 * tmp;
		tmp = (DefaultValueAttribute_t699 *)il2cpp_codegen_object_new (DefaultValueAttribute_t699_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3496(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t700_il2cpp_TypeInfo_var;
void PlayerPrefs_t570_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m2921(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1122);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t700 * tmp;
		tmp = (ExcludeFromDocsAttribute_t700 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t700_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3500(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Physics_t572_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m2939(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t699_il2cpp_TypeInfo_var;
void Physics_t572_CustomAttributesCacheGenerator_Physics_t572_Physics_Raycast_m2940_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t699 * tmp;
		tmp = (DefaultValueAttribute_t699 *)il2cpp_codegen_object_new (DefaultValueAttribute_t699_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3496(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t699_il2cpp_TypeInfo_var;
void Physics_t572_CustomAttributesCacheGenerator_Physics_t572_Physics_Raycast_m2940_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t699 * tmp;
		tmp = (DefaultValueAttribute_t699 *)il2cpp_codegen_object_new (DefaultValueAttribute_t699_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3496(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t699_il2cpp_TypeInfo_var;
void Physics_t572_CustomAttributesCacheGenerator_Physics_t572_Physics_Raycast_m1756_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t699 * tmp;
		tmp = (DefaultValueAttribute_t699 *)il2cpp_codegen_object_new (DefaultValueAttribute_t699_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3496(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t699_il2cpp_TypeInfo_var;
void Physics_t572_CustomAttributesCacheGenerator_Physics_t572_Physics_Raycast_m1756_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t699 * tmp;
		tmp = (DefaultValueAttribute_t699 *)il2cpp_codegen_object_new (DefaultValueAttribute_t699_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3496(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t699_il2cpp_TypeInfo_var;
void Physics_t572_CustomAttributesCacheGenerator_Physics_t572_Physics_RaycastAll_m1680_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t699 * tmp;
		tmp = (DefaultValueAttribute_t699 *)il2cpp_codegen_object_new (DefaultValueAttribute_t699_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3496(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t699_il2cpp_TypeInfo_var;
void Physics_t572_CustomAttributesCacheGenerator_Physics_t572_Physics_RaycastAll_m1680_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t699 * tmp;
		tmp = (DefaultValueAttribute_t699 *)il2cpp_codegen_object_new (DefaultValueAttribute_t699_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3496(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t699_il2cpp_TypeInfo_var;
void Physics_t572_CustomAttributesCacheGenerator_Physics_t572_Physics_RaycastAll_m2941_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t699 * tmp;
		tmp = (DefaultValueAttribute_t699 *)il2cpp_codegen_object_new (DefaultValueAttribute_t699_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3496(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t699_il2cpp_TypeInfo_var;
void Physics_t572_CustomAttributesCacheGenerator_Physics_t572_Physics_RaycastAll_m2941_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t699 * tmp;
		tmp = (DefaultValueAttribute_t699 *)il2cpp_codegen_object_new (DefaultValueAttribute_t699_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3496(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Physics_t572_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m2942(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t700_il2cpp_TypeInfo_var;
void Physics2D_t96_CustomAttributesCacheGenerator_Physics2D_LinecastAll_m331(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1122);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t700 * tmp;
		tmp = (ExcludeFromDocsAttribute_t700 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t700_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3500(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Physics2D_t96_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_LinecastAll_m2944(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Physics2D_t96_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m2946(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t700_il2cpp_TypeInfo_var;
void Physics2D_t96_CustomAttributesCacheGenerator_Physics2D_Raycast_m1757(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1122);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t700 * tmp;
		tmp = (ExcludeFromDocsAttribute_t700 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t700_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3500(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t699_il2cpp_TypeInfo_var;
void Physics2D_t96_CustomAttributesCacheGenerator_Physics2D_t96_Physics2D_Raycast_m2947_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t699 * tmp;
		tmp = (DefaultValueAttribute_t699 *)il2cpp_codegen_object_new (DefaultValueAttribute_t699_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3496(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t699_il2cpp_TypeInfo_var;
void Physics2D_t96_CustomAttributesCacheGenerator_Physics2D_t96_Physics2D_Raycast_m2947_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t699 * tmp;
		tmp = (DefaultValueAttribute_t699 *)il2cpp_codegen_object_new (DefaultValueAttribute_t699_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3496(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t699_il2cpp_TypeInfo_var;
void Physics2D_t96_CustomAttributesCacheGenerator_Physics2D_t96_Physics2D_Raycast_m2947_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t699 * tmp;
		tmp = (DefaultValueAttribute_t699 *)il2cpp_codegen_object_new (DefaultValueAttribute_t699_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3496(tmp, il2cpp_codegen_string_new_wrapper("-Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t699_il2cpp_TypeInfo_var;
void Physics2D_t96_CustomAttributesCacheGenerator_Physics2D_t96_Physics2D_Raycast_m2947_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t699 * tmp;
		tmp = (DefaultValueAttribute_t699 *)il2cpp_codegen_object_new (DefaultValueAttribute_t699_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3496(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t700_il2cpp_TypeInfo_var;
void Physics2D_t96_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m1670(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1122);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t700 * tmp;
		tmp = (ExcludeFromDocsAttribute_t700 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t700_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3500(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Physics2D_t96_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m2948(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Rigidbody2D_t63_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_CALL_MovePosition_m2950(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Rigidbody2D_t63_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_set_velocity_m2951(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Collider2D_t61_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m2952(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t411_il2cpp_TypeInfo_var;
void AnimationEvent_t583_CustomAttributesCacheGenerator_AnimationEvent_t583____data_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t411 * tmp;
		tmp = (ObsoleteAttribute_t411 *)il2cpp_codegen_object_new (ObsoleteAttribute_t411_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2088(tmp, il2cpp_codegen_string_new_wrapper("Use stringParameter instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t426_il2cpp_TypeInfo_var;
void AnimationCurve_t587_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(415);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t426 * tmp;
		tmp = (DefaultMemberAttribute_t426 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t426_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m2153(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t420_il2cpp_TypeInfo_var;
void AnimationCurve_t587_CustomAttributesCacheGenerator_AnimationCurve_t587_AnimationCurve__ctor_m2993_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t420_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t420 * tmp;
		tmp = (ParamArrayAttribute_t420 *)il2cpp_codegen_object_new (ParamArrayAttribute_t420_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2129(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void AnimationCurve_t587_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m2995(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void AnimationCurve_t587_CustomAttributesCacheGenerator_AnimationCurve_Init_m2997(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t411_il2cpp_TypeInfo_var;
void AnimatorStateInfo_t584_CustomAttributesCacheGenerator_AnimatorStateInfo_t584____nameHash_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t411 * tmp;
		tmp = (ObsoleteAttribute_t411 *)il2cpp_codegen_object_new (ObsoleteAttribute_t411_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2088(tmp, il2cpp_codegen_string_new_wrapper("Use AnimatorStateInfo.fullPathHash instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t700_il2cpp_TypeInfo_var;
void Animator_t39_CustomAttributesCacheGenerator_Animator_Play_m318(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1122);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t700 * tmp;
		tmp = (ExcludeFromDocsAttribute_t700 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t700_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3500(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t699_il2cpp_TypeInfo_var;
void Animator_t39_CustomAttributesCacheGenerator_Animator_t39_Animator_Play_m3016_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t699 * tmp;
		tmp = (DefaultValueAttribute_t699 *)il2cpp_codegen_object_new (DefaultValueAttribute_t699_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3496(tmp, il2cpp_codegen_string_new_wrapper("-1"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t699_il2cpp_TypeInfo_var;
void Animator_t39_CustomAttributesCacheGenerator_Animator_t39_Animator_Play_m3016_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t699 * tmp;
		tmp = (DefaultValueAttribute_t699 *)il2cpp_codegen_object_new (DefaultValueAttribute_t699_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3496(tmp, il2cpp_codegen_string_new_wrapper("float.NegativeInfinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Animator_t39_CustomAttributesCacheGenerator_Animator_Play_m3017(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t699_il2cpp_TypeInfo_var;
void Animator_t39_CustomAttributesCacheGenerator_Animator_t39_Animator_Play_m3017_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t699 * tmp;
		tmp = (DefaultValueAttribute_t699 *)il2cpp_codegen_object_new (DefaultValueAttribute_t699_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3496(tmp, il2cpp_codegen_string_new_wrapper("-1"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t699_il2cpp_TypeInfo_var;
void Animator_t39_CustomAttributesCacheGenerator_Animator_t39_Animator_Play_m3017_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t699 * tmp;
		tmp = (DefaultValueAttribute_t699 *)il2cpp_codegen_object_new (DefaultValueAttribute_t699_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3496(tmp, il2cpp_codegen_string_new_wrapper("float.NegativeInfinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Animator_t39_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m1978(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Animator_t39_CustomAttributesCacheGenerator_Animator_StringToHash_m3018(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Animator_t39_CustomAttributesCacheGenerator_Animator_SetFloatString_m3019(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Animator_t39_CustomAttributesCacheGenerator_Animator_SetBoolString_m3020(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Animator_t39_CustomAttributesCacheGenerator_Animator_GetBoolString_m3021(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Animator_t39_CustomAttributesCacheGenerator_Animator_SetTriggerString_m3022(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Animator_t39_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m3023(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void TextMesh_t98_CustomAttributesCacheGenerator_TextMesh_set_text_m341(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t411_il2cpp_TypeInfo_var;
void CharacterInfo_t593_CustomAttributesCacheGenerator_uv(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t411 * tmp;
		tmp = (ObsoleteAttribute_t411 *)il2cpp_codegen_object_new (ObsoleteAttribute_t411_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2088(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t411_il2cpp_TypeInfo_var;
void CharacterInfo_t593_CustomAttributesCacheGenerator_vert(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t411 * tmp;
		tmp = (ObsoleteAttribute_t411 *)il2cpp_codegen_object_new (ObsoleteAttribute_t411_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2088(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t411_il2cpp_TypeInfo_var;
void CharacterInfo_t593_CustomAttributesCacheGenerator_width(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t411 * tmp;
		tmp = (ObsoleteAttribute_t411 *)il2cpp_codegen_object_new (ObsoleteAttribute_t411_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2088(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.width is deprecated. Use advance instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t411_il2cpp_TypeInfo_var;
void CharacterInfo_t593_CustomAttributesCacheGenerator_flipped(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t411 * tmp;
		tmp = (ObsoleteAttribute_t411 *)il2cpp_codegen_object_new (ObsoleteAttribute_t411_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2088(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Font_t188_CustomAttributesCacheGenerator_Font_get_material_m1991(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Font_t188_CustomAttributesCacheGenerator_Font_HasCharacter_m1868(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Font_t188_CustomAttributesCacheGenerator_Font_get_dynamic_m1994(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Font_t188_CustomAttributesCacheGenerator_Font_get_fontSize_m1996(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t802_il2cpp_TypeInfo_var;
void FontTextureRebuildCallback_t594_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1124);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t802 * tmp;
		tmp = (EditorBrowsableAttribute_t802 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t802_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m3672(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void TextGenerator_t102_CustomAttributesCacheGenerator_TextGenerator_Init_m3051(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void TextGenerator_t102_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m3052(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void TextGenerator_t102_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3055(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void TextGenerator_t102_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m1883(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void TextGenerator_t102_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m3056(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void TextGenerator_t102_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m3057(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void TextGenerator_t102_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m3058(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void TextGenerator_t102_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m3059(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void TextGenerator_t102_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m3060(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void TextGenerator_t102_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m3061(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void TextGenerator_t102_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m348(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void TextGenerator_t102_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m3062(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void TextGenerator_t102_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m3063(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void TextGenerator_t102_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m1904(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Canvas_t196_CustomAttributesCacheGenerator_Canvas_get_renderMode_m1752(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Canvas_t196_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m2012(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Canvas_t196_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m1766(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Canvas_t196_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m1995(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Canvas_t196_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m2016(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Canvas_t196_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m1785(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Canvas_t196_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m2017(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Canvas_t196_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m1737(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Canvas_t196_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m1754(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Canvas_t196_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m1753(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Canvas_t196_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m1765(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Canvas_t196_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m1718(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void Canvas_t196_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m1990(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void CanvasGroup_t33_CustomAttributesCacheGenerator_CanvasGroup_set_alpha_m283(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void CanvasGroup_t33_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m1968(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void CanvasGroup_t33_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m3075(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void CanvasGroup_t33_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m1736(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void CanvasRenderer_t195_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m3078(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void CanvasRenderer_t195_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m1740(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void CanvasRenderer_t195_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m2048(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void CanvasRenderer_t195_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m1730(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void CanvasRenderer_t195_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m3079(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void CanvasRenderer_t195_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m3080(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void CanvasRenderer_t195_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m1723(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void CanvasRenderer_t195_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m1719(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void RectTransformUtility_t360_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3082(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void RectTransformUtility_t360_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3084(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t645_il2cpp_TypeInfo_var;
void RectTransformUtility_t360_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m1739(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t645 * tmp;
		tmp = (WrapperlessIcall_t645 *)il2cpp_codegen_object_new (WrapperlessIcall_t645_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3318(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void Request_t598_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void Request_t598_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void Request_t598_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void Request_t598_CustomAttributesCacheGenerator_Request_get_sourceId_m3089(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void Request_t598_CustomAttributesCacheGenerator_Request_get_appId_m3090(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void Request_t598_CustomAttributesCacheGenerator_Request_get_domain_m3091(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void Response_t600_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void Response_t600_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void Response_t600_CustomAttributesCacheGenerator_Response_get_success_m3100(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void Response_t600_CustomAttributesCacheGenerator_Response_set_success_m3101(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void Response_t600_CustomAttributesCacheGenerator_Response_get_extendedInfo_m3102(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void Response_t600_CustomAttributesCacheGenerator_Response_set_extendedInfo_m3103(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void CreateMatchRequest_t603_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void CreateMatchRequest_t603_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void CreateMatchRequest_t603_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void CreateMatchRequest_t603_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void CreateMatchRequest_t603_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void CreateMatchRequest_t603_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m3108(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void CreateMatchRequest_t603_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m3109(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void CreateMatchRequest_t603_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m3110(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void CreateMatchRequest_t603_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m3111(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void CreateMatchRequest_t603_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m3112(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void CreateMatchRequest_t603_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m3113(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void CreateMatchRequest_t603_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m3114(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void CreateMatchRequest_t603_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m3115(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void CreateMatchRequest_t603_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m3116(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void CreateMatchResponse_t604_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void CreateMatchResponse_t604_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void CreateMatchResponse_t604_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void CreateMatchResponse_t604_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void CreateMatchResponse_t604_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void CreateMatchResponse_t604_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void CreateMatchResponse_t604_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m3119(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void CreateMatchResponse_t604_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m3120(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void CreateMatchResponse_t604_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m3121(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void CreateMatchResponse_t604_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m3122(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void CreateMatchResponse_t604_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m3123(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void CreateMatchResponse_t604_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m3124(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void CreateMatchResponse_t604_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m3125(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void CreateMatchResponse_t604_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m3126(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void CreateMatchResponse_t604_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m3127(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void CreateMatchResponse_t604_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m3128(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void CreateMatchResponse_t604_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m3129(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void CreateMatchResponse_t604_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m3130(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void JoinMatchRequest_t605_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void JoinMatchRequest_t605_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void JoinMatchRequest_t605_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m3134(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void JoinMatchRequest_t605_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m3135(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void JoinMatchRequest_t605_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m3136(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void JoinMatchRequest_t605_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m3137(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void JoinMatchResponse_t606_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void JoinMatchResponse_t606_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void JoinMatchResponse_t606_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void JoinMatchResponse_t606_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void JoinMatchResponse_t606_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void JoinMatchResponse_t606_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void JoinMatchResponse_t606_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m3140(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void JoinMatchResponse_t606_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m3141(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void JoinMatchResponse_t606_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m3142(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void JoinMatchResponse_t606_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m3143(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void JoinMatchResponse_t606_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m3144(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void JoinMatchResponse_t606_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m3145(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void JoinMatchResponse_t606_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m3146(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void JoinMatchResponse_t606_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m3147(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void JoinMatchResponse_t606_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m3148(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void JoinMatchResponse_t606_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m3149(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void JoinMatchResponse_t606_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m3150(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void JoinMatchResponse_t606_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m3151(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t607_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t607_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m3155(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t607_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m3156(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void DropConnectionRequest_t608_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void DropConnectionRequest_t608_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void DropConnectionRequest_t608_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m3159(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void DropConnectionRequest_t608_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m3160(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void DropConnectionRequest_t608_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m3161(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void DropConnectionRequest_t608_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m3162(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void ListMatchRequest_t609_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void ListMatchRequest_t609_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void ListMatchRequest_t609_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void ListMatchRequest_t609_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void ListMatchRequest_t609_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void ListMatchRequest_t609_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m3165(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void ListMatchRequest_t609_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m3166(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void ListMatchRequest_t609_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m3167(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void ListMatchRequest_t609_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m3168(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void ListMatchRequest_t609_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m3169(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void ListMatchRequest_t609_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m3170(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void ListMatchRequest_t609_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m3171(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void ListMatchRequest_t609_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m3172(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t610_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t610_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t610_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t610_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m3175(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t610_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m3176(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t610_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m3177(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t610_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m3178(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t610_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m3179(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t610_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m3180(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void MatchDesc_t612_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void MatchDesc_t612_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void MatchDesc_t612_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void MatchDesc_t612_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void MatchDesc_t612_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void MatchDesc_t612_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void MatchDesc_t612_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void MatchDesc_t612_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void MatchDesc_t612_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void MatchDesc_t612_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m3184(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void MatchDesc_t612_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m3185(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void MatchDesc_t612_CustomAttributesCacheGenerator_MatchDesc_get_name_m3186(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void MatchDesc_t612_CustomAttributesCacheGenerator_MatchDesc_set_name_m3187(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void MatchDesc_t612_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m3188(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void MatchDesc_t612_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m3189(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void MatchDesc_t612_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m3190(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void MatchDesc_t612_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m3191(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void MatchDesc_t612_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m3192(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void MatchDesc_t612_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m3193(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void MatchDesc_t612_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m3194(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void MatchDesc_t612_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m3195(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void MatchDesc_t612_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m3196(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void MatchDesc_t612_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m3197(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void MatchDesc_t612_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m3198(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void ListMatchResponse_t614_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void ListMatchResponse_t614_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m3202(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void ListMatchResponse_t614_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m3203(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.DefaultValueAttribute
#include "System_System_ComponentModel_DefaultValueAttribute.h"
// System.ComponentModel.DefaultValueAttribute
#include "System_System_ComponentModel_DefaultValueAttributeMethodDeclarations.h"
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
extern TypeInfo* DefaultValueAttribute_t805_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t615_il2cpp_TypeInfo_var;
void AppID_t615_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1126);
		AppID_t615_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(999);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t805 * tmp;
		tmp = (DefaultValueAttribute_t805 *)il2cpp_codegen_object_new (DefaultValueAttribute_t805_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3689(tmp, Box(AppID_t615_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
extern TypeInfo* DefaultValueAttribute_t805_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t616_il2cpp_TypeInfo_var;
void SourceID_t616_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1126);
		SourceID_t616_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(998);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t805 * tmp;
		tmp = (DefaultValueAttribute_t805 *)il2cpp_codegen_object_new (DefaultValueAttribute_t805_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3689(tmp, Box(SourceID_t616_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern TypeInfo* DefaultValueAttribute_t805_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t617_il2cpp_TypeInfo_var;
void NetworkID_t617_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1126);
		NetworkID_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1003);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t805 * tmp;
		tmp = (DefaultValueAttribute_t805 *)il2cpp_codegen_object_new (DefaultValueAttribute_t805_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3689(tmp, Box(NetworkID_t617_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo* DefaultValueAttribute_t805_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t618_il2cpp_TypeInfo_var;
void NodeID_t618_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1126);
		NodeID_t618_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1004);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint16_t _tmp_0 = 0;
		DefaultValueAttribute_t805 * tmp;
		tmp = (DefaultValueAttribute_t805 *)il2cpp_codegen_object_new (DefaultValueAttribute_t805_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3689(tmp, Box(NodeID_t618_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttributeMethodDeclarations.h"
extern TypeInfo* DebuggerHiddenAttribute_t107_il2cpp_TypeInfo_var;
void NetworkMatch_t624_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m3690(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t107_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t107 * tmp;
		tmp = (DebuggerHiddenAttribute_t107 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t107_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m368(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t807_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t107_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t807_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3696(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t107_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t107 * tmp;
		tmp = (DebuggerHiddenAttribute_t107 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t107_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m368(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t107_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t807_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m3697(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t107_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t107 * tmp;
		tmp = (DebuggerHiddenAttribute_t107 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t107_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m368(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t107_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t807_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m3699(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t107_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t107 * tmp;
		tmp = (DebuggerHiddenAttribute_t107 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t107_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m368(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.CodeDom.Compiler.GeneratedCodeAttribute
#include "System_System_CodeDom_Compiler_GeneratedCodeAttribute.h"
// System.CodeDom.Compiler.GeneratedCodeAttribute
#include "System_System_CodeDom_Compiler_GeneratedCodeAttributeMethodDeclarations.h"
extern TypeInfo* GeneratedCodeAttribute_t808_il2cpp_TypeInfo_var;
extern TypeInfo* EditorBrowsableAttribute_t802_il2cpp_TypeInfo_var;
void JsonArray_t625_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1127);
		EditorBrowsableAttribute_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1124);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t808 * tmp;
		tmp = (GeneratedCodeAttribute_t808 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t808_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m3700(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		EditorBrowsableAttribute_t802 * tmp;
		tmp = (EditorBrowsableAttribute_t802 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t802_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m3672(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t802_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t808_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultMemberAttribute_t426_il2cpp_TypeInfo_var;
void JsonObject_t627_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1124);
		GeneratedCodeAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1127);
		DefaultMemberAttribute_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(415);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t802 * tmp;
		tmp = (EditorBrowsableAttribute_t802 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t802_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m3672(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t808 * tmp;
		tmp = (GeneratedCodeAttribute_t808 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t808_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m3700(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		DefaultMemberAttribute_t426 * tmp;
		tmp = (DefaultMemberAttribute_t426 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t426_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m2153(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t808_il2cpp_TypeInfo_var;
void SimpleJson_t630_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1127);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t808 * tmp;
		tmp = (GeneratedCodeAttribute_t808 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t808_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m3700(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttr.h"
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttrMethodDeclarations.h"
extern TypeInfo* SuppressMessageAttribute_t809_il2cpp_TypeInfo_var;
void SimpleJson_t630_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m3247(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t809_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1128);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t809 * tmp;
		tmp = (SuppressMessageAttribute_t809 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t809_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m3701(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m3702(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t809_il2cpp_TypeInfo_var;
void SimpleJson_t630_CustomAttributesCacheGenerator_SimpleJson_NextToken_m3259(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t809_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1128);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t809 * tmp;
		tmp = (SuppressMessageAttribute_t809 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t809_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m3701(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Maintainability"), il2cpp_codegen_string_new_wrapper("CA1502:AvoidExcessiveComplexity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t802_il2cpp_TypeInfo_var;
void SimpleJson_t630_CustomAttributesCacheGenerator_SimpleJson_t630____PocoJsonSerializerStrategy_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1124);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t802 * tmp;
		tmp = (EditorBrowsableAttribute_t802 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t802_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m3672(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t808_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t628_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1127);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t808 * tmp;
		tmp = (GeneratedCodeAttribute_t808 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t808_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m3700(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t809_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t628_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m3703(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t809_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1128);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t809 * tmp;
		tmp = (SuppressMessageAttribute_t809 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t809_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m3701(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m3702(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t808_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t629_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1127);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t808 * tmp;
		tmp = (GeneratedCodeAttribute_t808 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t808_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m3700(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t809_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t629_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m3276(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t809_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1128);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t809 * tmp;
		tmp = (SuppressMessageAttribute_t809 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t809_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m3701(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m3702(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t809_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t629_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m3277(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t809_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1128);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t809 * tmp;
		tmp = (SuppressMessageAttribute_t809 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t809_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m3701(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m3702(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t808_il2cpp_TypeInfo_var;
void ReflectionUtils_t644_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1127);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t808 * tmp;
		tmp = (GeneratedCodeAttribute_t808 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t808_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m3700(tmp, il2cpp_codegen_string_new_wrapper("reflection-utils"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t420_il2cpp_TypeInfo_var;
void ReflectionUtils_t644_CustomAttributesCacheGenerator_ReflectionUtils_t644_ReflectionUtils_GetConstructorInfo_m3302_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t420_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t420 * tmp;
		tmp = (ParamArrayAttribute_t420 *)il2cpp_codegen_object_new (ParamArrayAttribute_t420_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2129(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t420_il2cpp_TypeInfo_var;
void ReflectionUtils_t644_CustomAttributesCacheGenerator_ReflectionUtils_t644_ReflectionUtils_GetContructor_m3307_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t420_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t420 * tmp;
		tmp = (ParamArrayAttribute_t420 *)il2cpp_codegen_object_new (ParamArrayAttribute_t420_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2129(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t420_il2cpp_TypeInfo_var;
void ReflectionUtils_t644_CustomAttributesCacheGenerator_ReflectionUtils_t644_ReflectionUtils_GetConstructorByReflection_m3309_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t420_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t420 * tmp;
		tmp = (ParamArrayAttribute_t420 *)il2cpp_codegen_object_new (ParamArrayAttribute_t420_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2129(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t426_il2cpp_TypeInfo_var;
void ThreadSafeDictionary_2_t810_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(415);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t426 * tmp;
		tmp = (DefaultMemberAttribute_t426 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t426_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m2153(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t420_il2cpp_TypeInfo_var;
void ConstructorDelegate_t637_CustomAttributesCacheGenerator_ConstructorDelegate_t637_ConstructorDelegate_Invoke_m3287_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t420_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t420 * tmp;
		tmp = (ParamArrayAttribute_t420 *)il2cpp_codegen_object_new (ParamArrayAttribute_t420_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2129(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t420_il2cpp_TypeInfo_var;
void ConstructorDelegate_t637_CustomAttributesCacheGenerator_ConstructorDelegate_t637_ConstructorDelegate_BeginInvoke_m3288_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t420_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t420 * tmp;
		tmp = (ParamArrayAttribute_t420 *)il2cpp_codegen_object_new (ParamArrayAttribute_t420_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2129(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void U3CGetConstructorByReflectionU3Ec__AnonStorey1_t639_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t640_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t641_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t642_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t643_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.AttributeUsageAttribute
#include "mscorlib_System_AttributeUsageAttribute.h"
// System.AttributeUsageAttribute
#include "mscorlib_System_AttributeUsageAttributeMethodDeclarations.h"
extern TypeInfo* AttributeUsageAttribute_t812_il2cpp_TypeInfo_var;
void IL2CPPStructAlignmentAttribute_t646_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t812_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1129);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t812 * tmp;
		tmp = (AttributeUsageAttribute_t812 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t812_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3727(tmp, 8, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t812_il2cpp_TypeInfo_var;
void DisallowMultipleComponent_t419_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t812_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1129);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t812 * tmp;
		tmp = (AttributeUsageAttribute_t812 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t812_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3727(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m3728(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t812_il2cpp_TypeInfo_var;
void RequireComponent_t413_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t812_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1129);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t812 * tmp;
		tmp = (AttributeUsageAttribute_t812 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t812_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3727(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m3729(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t812_il2cpp_TypeInfo_var;
void WritableAttribute_t652_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t812_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1129);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t812 * tmp;
		tmp = (AttributeUsageAttribute_t812 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t812_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3727(tmp, 2048, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m3729(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t812_il2cpp_TypeInfo_var;
void AssemblyIsEditorAssembly_t653_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t812_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1129);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t812 * tmp;
		tmp = (AttributeUsageAttribute_t812 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t812_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3727(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void Achievement_t665_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void Achievement_t665_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void Achievement_t665_CustomAttributesCacheGenerator_Achievement_get_id_m3361(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void Achievement_t665_CustomAttributesCacheGenerator_Achievement_set_id_m3362(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void Achievement_t665_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m3363(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void Achievement_t665_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m3364(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void AchievementDescription_t666_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void AchievementDescription_t666_CustomAttributesCacheGenerator_AchievementDescription_get_id_m3371(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void AchievementDescription_t666_CustomAttributesCacheGenerator_AchievementDescription_set_id_m3372(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void Score_t667_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void Score_t667_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void Score_t667_CustomAttributesCacheGenerator_Score_get_leaderboardID_m3381(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void Score_t667_CustomAttributesCacheGenerator_Score_set_leaderboardID_m3382(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void Score_t667_CustomAttributesCacheGenerator_Score_get_value_m3383(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void Score_t667_CustomAttributesCacheGenerator_Score_set_value_m3384(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void Leaderboard_t496_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void Leaderboard_t496_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void Leaderboard_t496_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void Leaderboard_t496_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void Leaderboard_t496_CustomAttributesCacheGenerator_Leaderboard_get_id_m3395(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void Leaderboard_t496_CustomAttributesCacheGenerator_Leaderboard_set_id_m3396(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void Leaderboard_t496_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m3397(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void Leaderboard_t496_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m3398(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void Leaderboard_t496_CustomAttributesCacheGenerator_Leaderboard_get_range_m3399(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void Leaderboard_t496_CustomAttributesCacheGenerator_Leaderboard_set_range_m3400(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void Leaderboard_t496_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m3401(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var;
void Leaderboard_t496_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m3402(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t108 * tmp;
		tmp = (CompilerGeneratedAttribute_t108 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t108_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m369(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t812_il2cpp_TypeInfo_var;
void PropertyAttribute_t679_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t812_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1129);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t812 * tmp;
		tmp = (AttributeUsageAttribute_t812 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t812_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3727(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m3728(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m3729(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t812_il2cpp_TypeInfo_var;
void TooltipAttribute_t423_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t812_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1129);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t812 * tmp;
		tmp = (AttributeUsageAttribute_t812 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t812_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3727(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m3728(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m3729(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t812_il2cpp_TypeInfo_var;
void SpaceAttribute_t421_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t812_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1129);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t812 * tmp;
		tmp = (AttributeUsageAttribute_t812 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t812_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3727(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m3728(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m3729(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t812_il2cpp_TypeInfo_var;
void RangeAttribute_t417_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t812_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1129);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t812 * tmp;
		tmp = (AttributeUsageAttribute_t812 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t812_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3727(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m3728(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m3729(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t812_il2cpp_TypeInfo_var;
void TextAreaAttribute_t424_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t812_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1129);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t812 * tmp;
		tmp = (AttributeUsageAttribute_t812 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t812_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3727(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m3728(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m3729(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t812_il2cpp_TypeInfo_var;
void SelectionBaseAttribute_t422_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t812_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1129);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t812 * tmp;
		tmp = (AttributeUsageAttribute_t812 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t812_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3727(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m3728(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m3729(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t803_il2cpp_TypeInfo_var;
void StackTraceUtility_t681_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m3418(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1125);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t803 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t803 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t803_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m3677(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t803_il2cpp_TypeInfo_var;
void StackTraceUtility_t681_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m3421(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1125);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t803 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t803 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t803_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m3677(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t803_il2cpp_TypeInfo_var;
void StackTraceUtility_t681_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m3423(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1125);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t803 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t803 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t803_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m3677(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t812_il2cpp_TypeInfo_var;
void SharedBetweenAnimatorsAttribute_t682_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t812_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1129);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t812 * tmp;
		tmp = (AttributeUsageAttribute_t812 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t812_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3727(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m3729(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
extern TypeInfo* FormerlySerializedAsAttribute_t409_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void ArgumentCache_t688_CustomAttributesCacheGenerator_m_ObjectArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t409 * tmp;
		tmp = (FormerlySerializedAsAttribute_t409 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t409_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2086(tmp, il2cpp_codegen_string_new_wrapper("objectArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t409_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void ArgumentCache_t688_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t409 * tmp;
		tmp = (FormerlySerializedAsAttribute_t409 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t409_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2086(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t409_il2cpp_TypeInfo_var;
void ArgumentCache_t688_CustomAttributesCacheGenerator_m_IntArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		FormerlySerializedAsAttribute_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t409 * tmp;
		tmp = (FormerlySerializedAsAttribute_t409 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t409_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2086(tmp, il2cpp_codegen_string_new_wrapper("intArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t409_il2cpp_TypeInfo_var;
void ArgumentCache_t688_CustomAttributesCacheGenerator_m_FloatArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		FormerlySerializedAsAttribute_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t409 * tmp;
		tmp = (FormerlySerializedAsAttribute_t409 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t409_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2086(tmp, il2cpp_codegen_string_new_wrapper("floatArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t409_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void ArgumentCache_t688_CustomAttributesCacheGenerator_m_StringArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t409 * tmp;
		tmp = (FormerlySerializedAsAttribute_t409 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t409_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2086(tmp, il2cpp_codegen_string_new_wrapper("stringArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void ArgumentCache_t688_CustomAttributesCacheGenerator_m_BoolArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t409_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void PersistentCall_t692_CustomAttributesCacheGenerator_m_Target(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t409 * tmp;
		tmp = (FormerlySerializedAsAttribute_t409 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t409_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2086(tmp, il2cpp_codegen_string_new_wrapper("instance"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t409_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void PersistentCall_t692_CustomAttributesCacheGenerator_m_MethodName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t409 * tmp;
		tmp = (FormerlySerializedAsAttribute_t409 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t409_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2086(tmp, il2cpp_codegen_string_new_wrapper("methodName"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t409_il2cpp_TypeInfo_var;
void PersistentCall_t692_CustomAttributesCacheGenerator_m_Mode(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		FormerlySerializedAsAttribute_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t409 * tmp;
		tmp = (FormerlySerializedAsAttribute_t409 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t409_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2086(tmp, il2cpp_codegen_string_new_wrapper("mode"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t409_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void PersistentCall_t692_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t409 * tmp;
		tmp = (FormerlySerializedAsAttribute_t409 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t409_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2086(tmp, il2cpp_codegen_string_new_wrapper("arguments"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t409_il2cpp_TypeInfo_var;
void PersistentCall_t692_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		FormerlySerializedAsAttribute_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t409 * tmp;
		tmp = (FormerlySerializedAsAttribute_t409 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t409_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2086(tmp, il2cpp_codegen_string_new_wrapper("enabled"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t409 * tmp;
		tmp = (FormerlySerializedAsAttribute_t409 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t409_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2086(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t409_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void PersistentCallGroup_t694_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t409 * tmp;
		tmp = (FormerlySerializedAsAttribute_t409 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t409_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2086(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t409_il2cpp_TypeInfo_var;
void UnityEventBase_t697_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		FormerlySerializedAsAttribute_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t409 * tmp;
		tmp = (FormerlySerializedAsAttribute_t409 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t409_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2086(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t410_il2cpp_TypeInfo_var;
void UnityEventBase_t697_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t410 * tmp;
		tmp = (SerializeField_t410 *)il2cpp_codegen_object_new (SerializeField_t410_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2087(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
extern TypeInfo* AddComponentMenu_t408_il2cpp_TypeInfo_var;
void UserAuthorizationDialog_t698_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AddComponentMenu_t408_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(402);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AddComponentMenu_t408 * tmp;
		tmp = (AddComponentMenu_t408 *)il2cpp_codegen_object_new (AddComponentMenu_t408_il2cpp_TypeInfo_var);
		AddComponentMenu__ctor_m2085(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t812_il2cpp_TypeInfo_var;
void DefaultValueAttribute_t699_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t812_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1129);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t812 * tmp;
		tmp = (AttributeUsageAttribute_t812 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t812_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3727(tmp, 18432, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t812_il2cpp_TypeInfo_var;
void ExcludeFromDocsAttribute_t700_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t812_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1129);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t812 * tmp;
		tmp = (AttributeUsageAttribute_t812 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t812_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3727(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t812_il2cpp_TypeInfo_var;
void FormerlySerializedAsAttribute_t409_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t812_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1129);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t812 * tmp;
		tmp = (AttributeUsageAttribute_t812 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t812_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3727(tmp, 256, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m3729(tmp, true, NULL);
		AttributeUsageAttribute_set_Inherited_m3728(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t812_il2cpp_TypeInfo_var;
void TypeInferenceRuleAttribute_t702_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t812_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1129);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t812 * tmp;
		tmp = (AttributeUsageAttribute_t812 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t812_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3727(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_UnityEngine_Assembly_AttributeGenerators[686] = 
{
	NULL,
	g_UnityEngine_Assembly_CustomAttributesCacheGenerator,
	AssetBundleCreateRequest_t478_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m2268,
	AssetBundleCreateRequest_t478_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m2269,
	AssetBundle_t480_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m2273,
	AssetBundle_t480_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m2274,
	AssetBundle_t480_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m2275,
	LayerMask_t173_CustomAttributesCacheGenerator_LayerMask_LayerToName_m2278,
	LayerMask_t173_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m2279,
	LayerMask_t173_CustomAttributesCacheGenerator_LayerMask_t173_LayerMask_GetMask_m2280_Arg0_ParameterInfo,
	RuntimePlatform_t483_CustomAttributesCacheGenerator_NaCl,
	RuntimePlatform_t483_CustomAttributesCacheGenerator_FlashPlayer,
	RuntimePlatform_t483_CustomAttributesCacheGenerator_MetroPlayerX86,
	RuntimePlatform_t483_CustomAttributesCacheGenerator_MetroPlayerX64,
	RuntimePlatform_t483_CustomAttributesCacheGenerator_MetroPlayerARM,
	SystemInfo_t485_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m2281,
	Coroutine_t235_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m2284,
	ScriptableObject_t6_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m2286,
	ScriptableObject_t6_CustomAttributesCacheGenerator_ScriptableObject_t6_ScriptableObject_Internal_CreateScriptableObject_m2286_Arg0_ParameterInfo,
	ScriptableObject_t6_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m2287,
	ScriptableObject_t6_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m2289,
	GameCenterPlatform_t495_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m2294,
	GameCenterPlatform_t495_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m2295,
	GameCenterPlatform_t495_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m2296,
	GameCenterPlatform_t495_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m2297,
	GameCenterPlatform_t495_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m2298,
	GameCenterPlatform_t495_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m2299,
	GameCenterPlatform_t495_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m2300,
	GameCenterPlatform_t495_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m2301,
	GameCenterPlatform_t495_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m2302,
	GameCenterPlatform_t495_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m2303,
	GameCenterPlatform_t495_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m2304,
	GameCenterPlatform_t495_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m2305,
	GameCenterPlatform_t495_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m2306,
	GameCenterPlatform_t495_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m2307,
	GameCenterPlatform_t495_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m2308,
	GameCenterPlatform_t495_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m2309,
	GameCenterPlatform_t495_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2310,
	GameCenterPlatform_t495_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2314,
	GcLeaderboard_t497_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m2358,
	GcLeaderboard_t497_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m2359,
	GcLeaderboard_t497_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m2360,
	GcLeaderboard_t497_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m2361,
	Renderer_t499_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m1674,
	Renderer_t499_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m1675,
	Screen_t500_CustomAttributesCacheGenerator_Screen_get_width_m237,
	Screen_t500_CustomAttributesCacheGenerator_Screen_get_height_m238,
	Screen_t500_CustomAttributesCacheGenerator_Screen_get_dpi_m2015,
	Texture_t240_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m2383,
	Texture_t240_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m2384,
	Texture2D_t193_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m2388,
	Texture2D_t193_CustomAttributesCacheGenerator_Texture2D_t193_Texture2D_Internal_Create_m2388_Arg0_ParameterInfo,
	Texture2D_t193_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m1722,
	Texture2D_t193_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m1813,
	RenderTexture_t501_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m2389,
	RenderTexture_t501_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m2390,
	GUILayer_t504_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m2394,
	Gradient_t507_CustomAttributesCacheGenerator_Gradient_Init_m2398,
	Gradient_t507_CustomAttributesCacheGenerator_Gradient_Cleanup_m2399,
	GUI_t512_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField,
	GUI_t512_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField,
	GUI_t512_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m2407,
	GUI_t512_CustomAttributesCacheGenerator_GUI_set_changed_m2410,
	GUILayoutUtility_t518_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m2423,
	GUILayoutUtility_t518_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m2425,
	GUIUtility_t525_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m2456,
	GUIUtility_t525_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m2457,
	GUIUtility_t525_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m2459,
	GUIUtility_t525_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m2461,
	GUIUtility_t525_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m2465,
	GUISettings_t526_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord,
	GUISettings_t526_CustomAttributesCacheGenerator_m_TripleClickSelectsLine,
	GUISettings_t526_CustomAttributesCacheGenerator_m_CursorColor,
	GUISettings_t526_CustomAttributesCacheGenerator_m_CursorFlashSpeed,
	GUISettings_t526_CustomAttributesCacheGenerator_m_SelectionColor,
	GUISkin_t510_CustomAttributesCacheGenerator,
	GUISkin_t510_CustomAttributesCacheGenerator_m_Font,
	GUISkin_t510_CustomAttributesCacheGenerator_m_box,
	GUISkin_t510_CustomAttributesCacheGenerator_m_button,
	GUISkin_t510_CustomAttributesCacheGenerator_m_toggle,
	GUISkin_t510_CustomAttributesCacheGenerator_m_label,
	GUISkin_t510_CustomAttributesCacheGenerator_m_textField,
	GUISkin_t510_CustomAttributesCacheGenerator_m_textArea,
	GUISkin_t510_CustomAttributesCacheGenerator_m_window,
	GUISkin_t510_CustomAttributesCacheGenerator_m_horizontalSlider,
	GUISkin_t510_CustomAttributesCacheGenerator_m_horizontalSliderThumb,
	GUISkin_t510_CustomAttributesCacheGenerator_m_verticalSlider,
	GUISkin_t510_CustomAttributesCacheGenerator_m_verticalSliderThumb,
	GUISkin_t510_CustomAttributesCacheGenerator_m_horizontalScrollbar,
	GUISkin_t510_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb,
	GUISkin_t510_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton,
	GUISkin_t510_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton,
	GUISkin_t510_CustomAttributesCacheGenerator_m_verticalScrollbar,
	GUISkin_t510_CustomAttributesCacheGenerator_m_verticalScrollbarThumb,
	GUISkin_t510_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton,
	GUISkin_t510_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton,
	GUISkin_t510_CustomAttributesCacheGenerator_m_ScrollView,
	GUISkin_t510_CustomAttributesCacheGenerator_m_CustomStyles,
	GUISkin_t510_CustomAttributesCacheGenerator_m_Settings,
	GUIContent_t371_CustomAttributesCacheGenerator_m_Text,
	GUIContent_t371_CustomAttributesCacheGenerator_m_Image,
	GUIContent_t371_CustomAttributesCacheGenerator_m_Tooltip,
	GUIStyleState_t530_CustomAttributesCacheGenerator_GUIStyleState_Init_m2532,
	GUIStyleState_t530_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m2533,
	GUIStyleState_t530_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m2534,
	GUIStyleState_t530_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m2535,
	RectOffset_t291_CustomAttributesCacheGenerator_RectOffset_Init_m2540,
	RectOffset_t291_CustomAttributesCacheGenerator_RectOffset_Cleanup_m2541,
	RectOffset_t291_CustomAttributesCacheGenerator_RectOffset_get_left_m2030,
	RectOffset_t291_CustomAttributesCacheGenerator_RectOffset_set_left_m2542,
	RectOffset_t291_CustomAttributesCacheGenerator_RectOffset_get_right_m2543,
	RectOffset_t291_CustomAttributesCacheGenerator_RectOffset_set_right_m2544,
	RectOffset_t291_CustomAttributesCacheGenerator_RectOffset_get_top_m2031,
	RectOffset_t291_CustomAttributesCacheGenerator_RectOffset_set_top_m2545,
	RectOffset_t291_CustomAttributesCacheGenerator_RectOffset_get_bottom_m2546,
	RectOffset_t291_CustomAttributesCacheGenerator_RectOffset_set_bottom_m2547,
	RectOffset_t291_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m2025,
	RectOffset_t291_CustomAttributesCacheGenerator_RectOffset_get_vertical_m2026,
	RectOffset_t291_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m2549,
	GUIStyle_t517_CustomAttributesCacheGenerator_GUIStyle_Init_m2554,
	GUIStyle_t517_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m2555,
	GUIStyle_t517_CustomAttributesCacheGenerator_GUIStyle_get_name_m2556,
	GUIStyle_t517_CustomAttributesCacheGenerator_GUIStyle_set_name_m2557,
	GUIStyle_t517_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m2559,
	GUIStyle_t517_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m2562,
	GUIStyle_t517_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m2563,
	GUIStyle_t517_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m2564,
	GUIStyle_t517_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m2565,
	GUIStyle_t517_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m2566,
	GUIStyle_t517_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m2567,
	GUIStyle_t517_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m2568,
	GUIStyle_t517_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m2569,
	GUIStyle_t517_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m2571,
	GUIStyle_t517_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m2575,
	GUIStyle_t517_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m2577,
	GUIStyle_t517_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m2579,
	TouchScreenKeyboard_t231_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m2582,
	TouchScreenKeyboard_t231_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m2584,
	TouchScreenKeyboard_t231_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m1915,
	TouchScreenKeyboard_t231_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m1916,
	TouchScreenKeyboard_t231_CustomAttributesCacheGenerator_TouchScreenKeyboard_t231_TouchScreenKeyboard_Open_m2585_Arg1_ParameterInfo,
	TouchScreenKeyboard_t231_CustomAttributesCacheGenerator_TouchScreenKeyboard_t231_TouchScreenKeyboard_Open_m2585_Arg2_ParameterInfo,
	TouchScreenKeyboard_t231_CustomAttributesCacheGenerator_TouchScreenKeyboard_t231_TouchScreenKeyboard_Open_m2585_Arg3_ParameterInfo,
	TouchScreenKeyboard_t231_CustomAttributesCacheGenerator_TouchScreenKeyboard_t231_TouchScreenKeyboard_Open_m2585_Arg4_ParameterInfo,
	TouchScreenKeyboard_t231_CustomAttributesCacheGenerator_TouchScreenKeyboard_t231_TouchScreenKeyboard_Open_m2585_Arg5_ParameterInfo,
	TouchScreenKeyboard_t231_CustomAttributesCacheGenerator_TouchScreenKeyboard_t231_TouchScreenKeyboard_Open_m2585_Arg6_ParameterInfo,
	TouchScreenKeyboard_t231_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m1842,
	TouchScreenKeyboard_t231_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m1843,
	TouchScreenKeyboard_t231_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m1914,
	TouchScreenKeyboard_t231_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m1841,
	TouchScreenKeyboard_t231_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m1913,
	TouchScreenKeyboard_t231_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m1856,
	TouchScreenKeyboard_t231_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m1853,
	Event_t236_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0,
	Event_t236_CustomAttributesCacheGenerator_Event_Init_m2586,
	Event_t236_CustomAttributesCacheGenerator_Event_Cleanup_m2588,
	Event_t236_CustomAttributesCacheGenerator_Event_get_rawType_m1869,
	Event_t236_CustomAttributesCacheGenerator_Event_get_type_m2589,
	Event_t236_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m2591,
	Event_t236_CustomAttributesCacheGenerator_Event_get_modifiers_m1865,
	Event_t236_CustomAttributesCacheGenerator_Event_get_character_m1867,
	Event_t236_CustomAttributesCacheGenerator_Event_get_commandName_m2592,
	Event_t236_CustomAttributesCacheGenerator_Event_get_keyCode_m1866,
	Event_t236_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m2594,
	Event_t236_CustomAttributesCacheGenerator_Event_PopEvent_m1870,
	EventModifiers_t535_CustomAttributesCacheGenerator,
	Gizmos_t536_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawLine_m2601,
	Gizmos_t536_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawCube_m2602,
	Gizmos_t536_CustomAttributesCacheGenerator_Gizmos_INTERNAL_set_color_m2603,
	Vector2_t38_CustomAttributesCacheGenerator,
	Vector3_t58_CustomAttributesCacheGenerator,
	Color_t13_CustomAttributesCacheGenerator,
	Color32_t340_CustomAttributesCacheGenerator,
	Quaternion_t99_CustomAttributesCacheGenerator,
	Quaternion_t99_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m2627,
	Matrix4x4_t380_CustomAttributesCacheGenerator,
	Matrix4x4_t380_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m2642,
	Matrix4x4_t380_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m2644,
	Matrix4x4_t380_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m2646,
	Matrix4x4_t380_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m2649,
	Matrix4x4_t380_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m2661,
	Matrix4x4_t380_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m2664,
	Matrix4x4_t380_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m2665,
	Bounds_t254_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m2682,
	Bounds_t254_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m2685,
	Bounds_t254_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m2688,
	Bounds_t254_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m2692,
	Vector4_t333_CustomAttributesCacheGenerator,
	Mathf_t68_CustomAttributesCacheGenerator_Mathf_t68_Mathf_SmoothDamp_m1940_Arg4_ParameterInfo,
	Mathf_t68_CustomAttributesCacheGenerator_Mathf_t68_Mathf_SmoothDamp_m1940_Arg5_ParameterInfo,
	DrivenTransformProperties_t538_CustomAttributesCacheGenerator,
	RectTransform_t70_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m2721,
	RectTransform_t70_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m2722,
	RectTransform_t70_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m2723,
	RectTransform_t70_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m2724,
	RectTransform_t70_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m2725,
	RectTransform_t70_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m2726,
	RectTransform_t70_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m2727,
	RectTransform_t70_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m2728,
	RectTransform_t70_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m2729,
	RectTransform_t70_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m2730,
	RectTransform_t70_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m2731,
	Resources_t542_CustomAttributesCacheGenerator_Resources_Load_m2737,
	SerializePrivateVariables_t543_CustomAttributesCacheGenerator,
	Shader_t545_CustomAttributesCacheGenerator_Shader_PropertyToID_m2739,
	Material_t192_CustomAttributesCacheGenerator_Material_GetTexture_m2741,
	Material_t192_CustomAttributesCacheGenerator_Material_SetFloat_m2743,
	Material_t192_CustomAttributesCacheGenerator_Material_HasProperty_m2744,
	Material_t192_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m2745,
	Material_t192_CustomAttributesCacheGenerator_Material_t192_Material_Internal_CreateWithMaterial_m2745_Arg0_ParameterInfo,
	SphericalHarmonicsL2_t546_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t546_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m2748,
	SphericalHarmonicsL2_t546_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m2751,
	SphericalHarmonicsL2_t546_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m2754,
	Sprite_t7_CustomAttributesCacheGenerator_Sprite_get_rect_m1789,
	Sprite_t7_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m1784,
	Sprite_t7_CustomAttributesCacheGenerator_Sprite_get_texture_m1781,
	Sprite_t7_CustomAttributesCacheGenerator_Sprite_get_textureRect_m1810,
	Sprite_t7_CustomAttributesCacheGenerator_Sprite_get_border_m1782,
	SpriteRenderer_t15_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_get_color_m2764,
	SpriteRenderer_t15_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m2765,
	DataUtility_t547_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m1799,
	DataUtility_t547_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m1798,
	DataUtility_t547_CustomAttributesCacheGenerator_DataUtility_GetPadding_m1788,
	DataUtility_t547_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m2766,
	WWW_t548_CustomAttributesCacheGenerator_WWW_DestroyWWW_m2770,
	WWW_t548_CustomAttributesCacheGenerator_WWW_InitWWW_m2771,
	WWW_t548_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m2773,
	WWW_t548_CustomAttributesCacheGenerator_WWW_get_bytes_m2777,
	WWW_t548_CustomAttributesCacheGenerator_WWW_get_error_m2778,
	WWW_t548_CustomAttributesCacheGenerator_WWW_get_isDone_m2779,
	WWWForm_t552_CustomAttributesCacheGenerator_WWWForm_AddField_m2783,
	WWWForm_t552_CustomAttributesCacheGenerator_WWWForm_t552_WWWForm_AddField_m2784_Arg2_ParameterInfo,
	WWWTranscoder_t553_CustomAttributesCacheGenerator_WWWTranscoder_t553_WWWTranscoder_QPEncode_m2791_Arg1_ParameterInfo,
	WWWTranscoder_t553_CustomAttributesCacheGenerator_WWWTranscoder_t553_WWWTranscoder_SevenBitClean_m2794_Arg1_ParameterInfo,
	CacheIndex_t554_CustomAttributesCacheGenerator,
	UnityString_t555_CustomAttributesCacheGenerator_UnityString_t555_UnityString_Format_m2796_Arg1_ParameterInfo,
	AsyncOperation_t479_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m2798,
	Application_t557_CustomAttributesCacheGenerator_Application_get_loadedLevel_m249,
	Application_t557_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m2804,
	Application_t557_CustomAttributesCacheGenerator_Application_get_levelCount_m252,
	Application_t557_CustomAttributesCacheGenerator_Application_get_isPlaying_m1918,
	Application_t557_CustomAttributesCacheGenerator_Application_get_isEditor_m1921,
	Application_t557_CustomAttributesCacheGenerator_Application_get_platform_m1840,
	Behaviour_t394_CustomAttributesCacheGenerator_Behaviour_get_enabled_m1609,
	Behaviour_t394_CustomAttributesCacheGenerator_Behaviour_set_enabled_m302,
	Behaviour_t394_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m1610,
	Camera_t84_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m1667,
	Camera_t84_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m1666,
	Camera_t84_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m277,
	Camera_t84_CustomAttributesCacheGenerator_Camera_get_depth_m1571,
	Camera_t84_CustomAttributesCacheGenerator_Camera_get_cullingMask_m1678,
	Camera_t84_CustomAttributesCacheGenerator_Camera_get_eventMask_m2811,
	Camera_t84_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m2812,
	Camera_t84_CustomAttributesCacheGenerator_Camera_get_targetTexture_m2814,
	Camera_t84_CustomAttributesCacheGenerator_Camera_get_clearFlags_m2815,
	Camera_t84_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m2816,
	Camera_t84_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m2817,
	Camera_t84_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m2818,
	Camera_t84_CustomAttributesCacheGenerator_Camera_get_main_m276,
	Camera_t84_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m2819,
	Camera_t84_CustomAttributesCacheGenerator_Camera_GetAllCameras_m2820,
	Camera_t84_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m2825,
	Camera_t84_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m2827,
	CameraCallback_t558_CustomAttributesCacheGenerator,
	Debug_t559_CustomAttributesCacheGenerator_Debug_Internal_Log_m2828,
	Debug_t559_CustomAttributesCacheGenerator_Debug_t559_Debug_Internal_Log_m2828_Arg2_ParameterInfo,
	Debug_t559_CustomAttributesCacheGenerator_Debug_Internal_LogException_m2829,
	Debug_t559_CustomAttributesCacheGenerator_Debug_t559_Debug_Internal_LogException_m2829_Arg1_ParameterInfo,
	Display_t562_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m2856,
	Display_t562_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m2857,
	Display_t562_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m2858,
	Display_t562_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m2859,
	Display_t562_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m2860,
	Display_t562_CustomAttributesCacheGenerator_Display_SetParamsImpl_m2861,
	Display_t562_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m2862,
	Display_t562_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m2863,
	MonoBehaviour_t16_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m2864,
	MonoBehaviour_t16_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_m2865,
	MonoBehaviour_t16_CustomAttributesCacheGenerator_MonoBehaviour_t16_MonoBehaviour_StartCoroutine_m2865_Arg1_ParameterInfo,
	MonoBehaviour_t16_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_m235,
	MonoBehaviour_t16_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_m357,
	MonoBehaviour_t16_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m2867,
	MonoBehaviour_t16_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m2868,
	Input_t100_CustomAttributesCacheGenerator_Input_GetKeyDownString_m2870,
	Input_t100_CustomAttributesCacheGenerator_Input_GetAxisRaw_m1656,
	Input_t100_CustomAttributesCacheGenerator_Input_GetButtonDown_m1655,
	Input_t100_CustomAttributesCacheGenerator_Input_GetMouseButton_m1663,
	Input_t100_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m1625,
	Input_t100_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m1626,
	Input_t100_CustomAttributesCacheGenerator_Input_get_mousePosition_m1627,
	Input_t100_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m1628,
	Input_t100_CustomAttributesCacheGenerator_Input_get_mousePresent_m1654,
	Input_t100_CustomAttributesCacheGenerator_Input_GetTouch_m1662,
	Input_t100_CustomAttributesCacheGenerator_Input_get_touchCount_m356,
	Input_t100_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m1917,
	Input_t100_CustomAttributesCacheGenerator_Input_get_compositionString_m1844,
	Input_t100_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m2871,
	HideFlags_t565_CustomAttributesCacheGenerator,
	Object_t67_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m2873,
	Object_t67_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m2875,
	Object_t67_CustomAttributesCacheGenerator_Object_Destroy_m2876,
	Object_t67_CustomAttributesCacheGenerator_Object_t67_Object_Destroy_m2876_Arg1_ParameterInfo,
	Object_t67_CustomAttributesCacheGenerator_Object_Destroy_m303,
	Object_t67_CustomAttributesCacheGenerator_Object_DestroyImmediate_m2877,
	Object_t67_CustomAttributesCacheGenerator_Object_t67_Object_DestroyImmediate_m2877_Arg1_ParameterInfo,
	Object_t67_CustomAttributesCacheGenerator_Object_DestroyImmediate_m1920,
	Object_t67_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m2878,
	Object_t67_CustomAttributesCacheGenerator_Object_get_name_m358,
	Object_t67_CustomAttributesCacheGenerator_Object_set_name_m1987,
	Object_t67_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m2879,
	Object_t67_CustomAttributesCacheGenerator_Object_set_hideFlags_m1885,
	Object_t67_CustomAttributesCacheGenerator_Object_ToString_m377,
	Object_t67_CustomAttributesCacheGenerator_Object_Instantiate_m339,
	Object_t67_CustomAttributesCacheGenerator_Object_FindObjectOfType_m2885,
	Component_t62_CustomAttributesCacheGenerator_Component_get_transform_m197,
	Component_t62_CustomAttributesCacheGenerator_Component_get_gameObject_m258,
	Component_t62_CustomAttributesCacheGenerator_Component_GetComponent_m2038,
	Component_t62_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m2887,
	Component_t62_CustomAttributesCacheGenerator_Component_GetComponent_m3676,
	Component_t62_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m2888,
	GameObject_t28_CustomAttributesCacheGenerator_GameObject_GetComponent_m2890,
	GameObject_t28_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m2891,
	GameObject_t28_CustomAttributesCacheGenerator_GameObject_GetComponent_m3681,
	GameObject_t28_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m2892,
	GameObject_t28_CustomAttributesCacheGenerator_GameObject_get_transform_m280,
	GameObject_t28_CustomAttributesCacheGenerator_GameObject_get_layer_m1888,
	GameObject_t28_CustomAttributesCacheGenerator_GameObject_set_layer_m1889,
	GameObject_t28_CustomAttributesCacheGenerator_GameObject_SetActive_m353,
	GameObject_t28_CustomAttributesCacheGenerator_GameObject_get_activeSelf_m352,
	GameObject_t28_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m1611,
	GameObject_t28_CustomAttributesCacheGenerator_GameObject_get_tag_m333,
	GameObject_t28_CustomAttributesCacheGenerator_GameObject_CompareTag_m259,
	GameObject_t28_CustomAttributesCacheGenerator_GameObject_FindGameObjectsWithTag_m289,
	GameObject_t28_CustomAttributesCacheGenerator_GameObject_SendMessage_m2893,
	GameObject_t28_CustomAttributesCacheGenerator_GameObject_t28_GameObject_SendMessage_m2893_Arg1_ParameterInfo,
	GameObject_t28_CustomAttributesCacheGenerator_GameObject_t28_GameObject_SendMessage_m2893_Arg2_ParameterInfo,
	GameObject_t28_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m2894,
	GameObject_t28_CustomAttributesCacheGenerator_GameObject_AddComponent_m2895,
	GameObject_t28_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m2896,
	GameObject_t28_CustomAttributesCacheGenerator_GameObject_t28_GameObject_Internal_CreateGameObject_m2896_Arg0_ParameterInfo,
	GameObject_t28_CustomAttributesCacheGenerator_GameObject_Find_m232,
	Transform_t66_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m2900,
	Transform_t66_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m2901,
	Transform_t66_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m2902,
	Transform_t66_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m2903,
	Transform_t66_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m2904,
	Transform_t66_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m2905,
	Transform_t66_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m2906,
	Transform_t66_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m2907,
	Transform_t66_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m2908,
	Transform_t66_CustomAttributesCacheGenerator_Transform_get_parentInternal_m2909,
	Transform_t66_CustomAttributesCacheGenerator_Transform_set_parentInternal_m2910,
	Transform_t66_CustomAttributesCacheGenerator_Transform_SetParent_m2911,
	Transform_t66_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m2912,
	Transform_t66_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m2913,
	Transform_t66_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m2914,
	Transform_t66_CustomAttributesCacheGenerator_Transform_get_childCount_m281,
	Transform_t66_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m1887,
	Transform_t66_CustomAttributesCacheGenerator_Transform_GetChild_m2037,
	Time_t567_CustomAttributesCacheGenerator_Time_get_deltaTime_m301,
	Time_t567_CustomAttributesCacheGenerator_Time_get_unscaledTime_m1658,
	Time_t567_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m1691,
	Time_t567_CustomAttributesCacheGenerator_Time_get_timeScale_m362,
	Time_t567_CustomAttributesCacheGenerator_Time_set_timeScale_m282,
	Random_t568_CustomAttributesCacheGenerator_Random_RandomRangeInt_m2916,
	PlayerPrefs_t570_CustomAttributesCacheGenerator_PlayerPrefs_TrySetInt_m2919,
	PlayerPrefs_t570_CustomAttributesCacheGenerator_PlayerPrefs_GetInt_m240,
	PlayerPrefs_t570_CustomAttributesCacheGenerator_PlayerPrefs_t570_PlayerPrefs_GetInt_m240_Arg1_ParameterInfo,
	PlayerPrefs_t570_CustomAttributesCacheGenerator_PlayerPrefs_GetInt_m250,
	PlayerPrefs_t570_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m2920,
	PlayerPrefs_t570_CustomAttributesCacheGenerator_PlayerPrefs_t570_PlayerPrefs_GetString_m2920_Arg1_ParameterInfo,
	PlayerPrefs_t570_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m2921,
	Physics_t572_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m2939,
	Physics_t572_CustomAttributesCacheGenerator_Physics_t572_Physics_Raycast_m2940_Arg3_ParameterInfo,
	Physics_t572_CustomAttributesCacheGenerator_Physics_t572_Physics_Raycast_m2940_Arg4_ParameterInfo,
	Physics_t572_CustomAttributesCacheGenerator_Physics_t572_Physics_Raycast_m1756_Arg2_ParameterInfo,
	Physics_t572_CustomAttributesCacheGenerator_Physics_t572_Physics_Raycast_m1756_Arg3_ParameterInfo,
	Physics_t572_CustomAttributesCacheGenerator_Physics_t572_Physics_RaycastAll_m1680_Arg1_ParameterInfo,
	Physics_t572_CustomAttributesCacheGenerator_Physics_t572_Physics_RaycastAll_m1680_Arg2_ParameterInfo,
	Physics_t572_CustomAttributesCacheGenerator_Physics_t572_Physics_RaycastAll_m2941_Arg2_ParameterInfo,
	Physics_t572_CustomAttributesCacheGenerator_Physics_t572_Physics_RaycastAll_m2941_Arg3_ParameterInfo,
	Physics_t572_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m2942,
	Physics2D_t96_CustomAttributesCacheGenerator_Physics2D_LinecastAll_m331,
	Physics2D_t96_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_LinecastAll_m2944,
	Physics2D_t96_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m2946,
	Physics2D_t96_CustomAttributesCacheGenerator_Physics2D_Raycast_m1757,
	Physics2D_t96_CustomAttributesCacheGenerator_Physics2D_t96_Physics2D_Raycast_m2947_Arg2_ParameterInfo,
	Physics2D_t96_CustomAttributesCacheGenerator_Physics2D_t96_Physics2D_Raycast_m2947_Arg3_ParameterInfo,
	Physics2D_t96_CustomAttributesCacheGenerator_Physics2D_t96_Physics2D_Raycast_m2947_Arg4_ParameterInfo,
	Physics2D_t96_CustomAttributesCacheGenerator_Physics2D_t96_Physics2D_Raycast_m2947_Arg5_ParameterInfo,
	Physics2D_t96_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m1670,
	Physics2D_t96_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m2948,
	Rigidbody2D_t63_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_CALL_MovePosition_m2950,
	Rigidbody2D_t63_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_set_velocity_m2951,
	Collider2D_t61_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m2952,
	AnimationEvent_t583_CustomAttributesCacheGenerator_AnimationEvent_t583____data_PropertyInfo,
	AnimationCurve_t587_CustomAttributesCacheGenerator,
	AnimationCurve_t587_CustomAttributesCacheGenerator_AnimationCurve_t587_AnimationCurve__ctor_m2993_Arg0_ParameterInfo,
	AnimationCurve_t587_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m2995,
	AnimationCurve_t587_CustomAttributesCacheGenerator_AnimationCurve_Init_m2997,
	AnimatorStateInfo_t584_CustomAttributesCacheGenerator_AnimatorStateInfo_t584____nameHash_PropertyInfo,
	Animator_t39_CustomAttributesCacheGenerator_Animator_Play_m318,
	Animator_t39_CustomAttributesCacheGenerator_Animator_t39_Animator_Play_m3016_Arg1_ParameterInfo,
	Animator_t39_CustomAttributesCacheGenerator_Animator_t39_Animator_Play_m3016_Arg2_ParameterInfo,
	Animator_t39_CustomAttributesCacheGenerator_Animator_Play_m3017,
	Animator_t39_CustomAttributesCacheGenerator_Animator_t39_Animator_Play_m3017_Arg1_ParameterInfo,
	Animator_t39_CustomAttributesCacheGenerator_Animator_t39_Animator_Play_m3017_Arg2_ParameterInfo,
	Animator_t39_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m1978,
	Animator_t39_CustomAttributesCacheGenerator_Animator_StringToHash_m3018,
	Animator_t39_CustomAttributesCacheGenerator_Animator_SetFloatString_m3019,
	Animator_t39_CustomAttributesCacheGenerator_Animator_SetBoolString_m3020,
	Animator_t39_CustomAttributesCacheGenerator_Animator_GetBoolString_m3021,
	Animator_t39_CustomAttributesCacheGenerator_Animator_SetTriggerString_m3022,
	Animator_t39_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m3023,
	TextMesh_t98_CustomAttributesCacheGenerator_TextMesh_set_text_m341,
	CharacterInfo_t593_CustomAttributesCacheGenerator_uv,
	CharacterInfo_t593_CustomAttributesCacheGenerator_vert,
	CharacterInfo_t593_CustomAttributesCacheGenerator_width,
	CharacterInfo_t593_CustomAttributesCacheGenerator_flipped,
	Font_t188_CustomAttributesCacheGenerator_Font_get_material_m1991,
	Font_t188_CustomAttributesCacheGenerator_Font_HasCharacter_m1868,
	Font_t188_CustomAttributesCacheGenerator_Font_get_dynamic_m1994,
	Font_t188_CustomAttributesCacheGenerator_Font_get_fontSize_m1996,
	FontTextureRebuildCallback_t594_CustomAttributesCacheGenerator,
	TextGenerator_t102_CustomAttributesCacheGenerator_TextGenerator_Init_m3051,
	TextGenerator_t102_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m3052,
	TextGenerator_t102_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3055,
	TextGenerator_t102_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m1883,
	TextGenerator_t102_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m3056,
	TextGenerator_t102_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m3057,
	TextGenerator_t102_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m3058,
	TextGenerator_t102_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m3059,
	TextGenerator_t102_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m3060,
	TextGenerator_t102_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m3061,
	TextGenerator_t102_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m348,
	TextGenerator_t102_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m3062,
	TextGenerator_t102_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m3063,
	TextGenerator_t102_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m1904,
	Canvas_t196_CustomAttributesCacheGenerator_Canvas_get_renderMode_m1752,
	Canvas_t196_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m2012,
	Canvas_t196_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m1766,
	Canvas_t196_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m1995,
	Canvas_t196_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m2016,
	Canvas_t196_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m1785,
	Canvas_t196_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m2017,
	Canvas_t196_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m1737,
	Canvas_t196_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m1754,
	Canvas_t196_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m1753,
	Canvas_t196_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m1765,
	Canvas_t196_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m1718,
	Canvas_t196_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m1990,
	CanvasGroup_t33_CustomAttributesCacheGenerator_CanvasGroup_set_alpha_m283,
	CanvasGroup_t33_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m1968,
	CanvasGroup_t33_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m3075,
	CanvasGroup_t33_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m1736,
	CanvasRenderer_t195_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m3078,
	CanvasRenderer_t195_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m1740,
	CanvasRenderer_t195_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m2048,
	CanvasRenderer_t195_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m1730,
	CanvasRenderer_t195_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m3079,
	CanvasRenderer_t195_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m3080,
	CanvasRenderer_t195_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m1723,
	CanvasRenderer_t195_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m1719,
	RectTransformUtility_t360_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3082,
	RectTransformUtility_t360_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3084,
	RectTransformUtility_t360_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m1739,
	Request_t598_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField,
	Request_t598_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField,
	Request_t598_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField,
	Request_t598_CustomAttributesCacheGenerator_Request_get_sourceId_m3089,
	Request_t598_CustomAttributesCacheGenerator_Request_get_appId_m3090,
	Request_t598_CustomAttributesCacheGenerator_Request_get_domain_m3091,
	Response_t600_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField,
	Response_t600_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField,
	Response_t600_CustomAttributesCacheGenerator_Response_get_success_m3100,
	Response_t600_CustomAttributesCacheGenerator_Response_set_success_m3101,
	Response_t600_CustomAttributesCacheGenerator_Response_get_extendedInfo_m3102,
	Response_t600_CustomAttributesCacheGenerator_Response_set_extendedInfo_m3103,
	CreateMatchRequest_t603_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	CreateMatchRequest_t603_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField,
	CreateMatchRequest_t603_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField,
	CreateMatchRequest_t603_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	CreateMatchRequest_t603_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	CreateMatchRequest_t603_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m3108,
	CreateMatchRequest_t603_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m3109,
	CreateMatchRequest_t603_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m3110,
	CreateMatchRequest_t603_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m3111,
	CreateMatchRequest_t603_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m3112,
	CreateMatchRequest_t603_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m3113,
	CreateMatchRequest_t603_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m3114,
	CreateMatchRequest_t603_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m3115,
	CreateMatchRequest_t603_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m3116,
	CreateMatchResponse_t604_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	CreateMatchResponse_t604_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	CreateMatchResponse_t604_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	CreateMatchResponse_t604_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	CreateMatchResponse_t604_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	CreateMatchResponse_t604_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	CreateMatchResponse_t604_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m3119,
	CreateMatchResponse_t604_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m3120,
	CreateMatchResponse_t604_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m3121,
	CreateMatchResponse_t604_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m3122,
	CreateMatchResponse_t604_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m3123,
	CreateMatchResponse_t604_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m3124,
	CreateMatchResponse_t604_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m3125,
	CreateMatchResponse_t604_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m3126,
	CreateMatchResponse_t604_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m3127,
	CreateMatchResponse_t604_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m3128,
	CreateMatchResponse_t604_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m3129,
	CreateMatchResponse_t604_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m3130,
	JoinMatchRequest_t605_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchRequest_t605_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	JoinMatchRequest_t605_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m3134,
	JoinMatchRequest_t605_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m3135,
	JoinMatchRequest_t605_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m3136,
	JoinMatchRequest_t605_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m3137,
	JoinMatchResponse_t606_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	JoinMatchResponse_t606_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	JoinMatchResponse_t606_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchResponse_t606_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	JoinMatchResponse_t606_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	JoinMatchResponse_t606_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	JoinMatchResponse_t606_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m3140,
	JoinMatchResponse_t606_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m3141,
	JoinMatchResponse_t606_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m3142,
	JoinMatchResponse_t606_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m3143,
	JoinMatchResponse_t606_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m3144,
	JoinMatchResponse_t606_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m3145,
	JoinMatchResponse_t606_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m3146,
	JoinMatchResponse_t606_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m3147,
	JoinMatchResponse_t606_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m3148,
	JoinMatchResponse_t606_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m3149,
	JoinMatchResponse_t606_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m3150,
	JoinMatchResponse_t606_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m3151,
	DestroyMatchRequest_t607_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DestroyMatchRequest_t607_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m3155,
	DestroyMatchRequest_t607_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m3156,
	DropConnectionRequest_t608_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DropConnectionRequest_t608_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	DropConnectionRequest_t608_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m3159,
	DropConnectionRequest_t608_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m3160,
	DropConnectionRequest_t608_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m3161,
	DropConnectionRequest_t608_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m3162,
	ListMatchRequest_t609_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField,
	ListMatchRequest_t609_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField,
	ListMatchRequest_t609_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField,
	ListMatchRequest_t609_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField,
	ListMatchRequest_t609_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField,
	ListMatchRequest_t609_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m3165,
	ListMatchRequest_t609_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m3166,
	ListMatchRequest_t609_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m3167,
	ListMatchRequest_t609_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m3168,
	ListMatchRequest_t609_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m3169,
	ListMatchRequest_t609_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m3170,
	ListMatchRequest_t609_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m3171,
	ListMatchRequest_t609_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m3172,
	MatchDirectConnectInfo_t610_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	MatchDirectConnectInfo_t610_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t610_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t610_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m3175,
	MatchDirectConnectInfo_t610_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m3176,
	MatchDirectConnectInfo_t610_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m3177,
	MatchDirectConnectInfo_t610_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m3178,
	MatchDirectConnectInfo_t610_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m3179,
	MatchDirectConnectInfo_t610_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m3180,
	MatchDesc_t612_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	MatchDesc_t612_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	MatchDesc_t612_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField,
	MatchDesc_t612_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField,
	MatchDesc_t612_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField,
	MatchDesc_t612_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField,
	MatchDesc_t612_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	MatchDesc_t612_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField,
	MatchDesc_t612_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField,
	MatchDesc_t612_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m3184,
	MatchDesc_t612_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m3185,
	MatchDesc_t612_CustomAttributesCacheGenerator_MatchDesc_get_name_m3186,
	MatchDesc_t612_CustomAttributesCacheGenerator_MatchDesc_set_name_m3187,
	MatchDesc_t612_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m3188,
	MatchDesc_t612_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m3189,
	MatchDesc_t612_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m3190,
	MatchDesc_t612_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m3191,
	MatchDesc_t612_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m3192,
	MatchDesc_t612_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m3193,
	MatchDesc_t612_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m3194,
	MatchDesc_t612_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m3195,
	MatchDesc_t612_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m3196,
	MatchDesc_t612_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m3197,
	MatchDesc_t612_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m3198,
	ListMatchResponse_t614_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField,
	ListMatchResponse_t614_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m3202,
	ListMatchResponse_t614_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m3203,
	AppID_t615_CustomAttributesCacheGenerator,
	SourceID_t616_CustomAttributesCacheGenerator,
	NetworkID_t617_CustomAttributesCacheGenerator,
	NodeID_t618_CustomAttributesCacheGenerator,
	NetworkMatch_t624_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m3690,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t807_CustomAttributesCacheGenerator,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t807_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3696,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t807_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m3697,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t807_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m3699,
	JsonArray_t625_CustomAttributesCacheGenerator,
	JsonObject_t627_CustomAttributesCacheGenerator,
	SimpleJson_t630_CustomAttributesCacheGenerator,
	SimpleJson_t630_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m3247,
	SimpleJson_t630_CustomAttributesCacheGenerator_SimpleJson_NextToken_m3259,
	SimpleJson_t630_CustomAttributesCacheGenerator_SimpleJson_t630____PocoJsonSerializerStrategy_PropertyInfo,
	IJsonSerializerStrategy_t628_CustomAttributesCacheGenerator,
	IJsonSerializerStrategy_t628_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m3703,
	PocoJsonSerializerStrategy_t629_CustomAttributesCacheGenerator,
	PocoJsonSerializerStrategy_t629_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m3276,
	PocoJsonSerializerStrategy_t629_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m3277,
	ReflectionUtils_t644_CustomAttributesCacheGenerator,
	ReflectionUtils_t644_CustomAttributesCacheGenerator_ReflectionUtils_t644_ReflectionUtils_GetConstructorInfo_m3302_Arg1_ParameterInfo,
	ReflectionUtils_t644_CustomAttributesCacheGenerator_ReflectionUtils_t644_ReflectionUtils_GetContructor_m3307_Arg1_ParameterInfo,
	ReflectionUtils_t644_CustomAttributesCacheGenerator_ReflectionUtils_t644_ReflectionUtils_GetConstructorByReflection_m3309_Arg1_ParameterInfo,
	ThreadSafeDictionary_2_t810_CustomAttributesCacheGenerator,
	ConstructorDelegate_t637_CustomAttributesCacheGenerator_ConstructorDelegate_t637_ConstructorDelegate_Invoke_m3287_Arg0_ParameterInfo,
	ConstructorDelegate_t637_CustomAttributesCacheGenerator_ConstructorDelegate_t637_ConstructorDelegate_BeginInvoke_m3288_Arg0_ParameterInfo,
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t639_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t640_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t641_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t642_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t643_CustomAttributesCacheGenerator,
	IL2CPPStructAlignmentAttribute_t646_CustomAttributesCacheGenerator,
	DisallowMultipleComponent_t419_CustomAttributesCacheGenerator,
	RequireComponent_t413_CustomAttributesCacheGenerator,
	WritableAttribute_t652_CustomAttributesCacheGenerator,
	AssemblyIsEditorAssembly_t653_CustomAttributesCacheGenerator,
	Achievement_t665_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Achievement_t665_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField,
	Achievement_t665_CustomAttributesCacheGenerator_Achievement_get_id_m3361,
	Achievement_t665_CustomAttributesCacheGenerator_Achievement_set_id_m3362,
	Achievement_t665_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m3363,
	Achievement_t665_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m3364,
	AchievementDescription_t666_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	AchievementDescription_t666_CustomAttributesCacheGenerator_AchievementDescription_get_id_m3371,
	AchievementDescription_t666_CustomAttributesCacheGenerator_AchievementDescription_set_id_m3372,
	Score_t667_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField,
	Score_t667_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField,
	Score_t667_CustomAttributesCacheGenerator_Score_get_leaderboardID_m3381,
	Score_t667_CustomAttributesCacheGenerator_Score_set_leaderboardID_m3382,
	Score_t667_CustomAttributesCacheGenerator_Score_get_value_m3383,
	Score_t667_CustomAttributesCacheGenerator_Score_set_value_m3384,
	Leaderboard_t496_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Leaderboard_t496_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField,
	Leaderboard_t496_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField,
	Leaderboard_t496_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField,
	Leaderboard_t496_CustomAttributesCacheGenerator_Leaderboard_get_id_m3395,
	Leaderboard_t496_CustomAttributesCacheGenerator_Leaderboard_set_id_m3396,
	Leaderboard_t496_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m3397,
	Leaderboard_t496_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m3398,
	Leaderboard_t496_CustomAttributesCacheGenerator_Leaderboard_get_range_m3399,
	Leaderboard_t496_CustomAttributesCacheGenerator_Leaderboard_set_range_m3400,
	Leaderboard_t496_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m3401,
	Leaderboard_t496_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m3402,
	PropertyAttribute_t679_CustomAttributesCacheGenerator,
	TooltipAttribute_t423_CustomAttributesCacheGenerator,
	SpaceAttribute_t421_CustomAttributesCacheGenerator,
	RangeAttribute_t417_CustomAttributesCacheGenerator,
	TextAreaAttribute_t424_CustomAttributesCacheGenerator,
	SelectionBaseAttribute_t422_CustomAttributesCacheGenerator,
	StackTraceUtility_t681_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m3418,
	StackTraceUtility_t681_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m3421,
	StackTraceUtility_t681_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m3423,
	SharedBetweenAnimatorsAttribute_t682_CustomAttributesCacheGenerator,
	ArgumentCache_t688_CustomAttributesCacheGenerator_m_ObjectArgument,
	ArgumentCache_t688_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName,
	ArgumentCache_t688_CustomAttributesCacheGenerator_m_IntArgument,
	ArgumentCache_t688_CustomAttributesCacheGenerator_m_FloatArgument,
	ArgumentCache_t688_CustomAttributesCacheGenerator_m_StringArgument,
	ArgumentCache_t688_CustomAttributesCacheGenerator_m_BoolArgument,
	PersistentCall_t692_CustomAttributesCacheGenerator_m_Target,
	PersistentCall_t692_CustomAttributesCacheGenerator_m_MethodName,
	PersistentCall_t692_CustomAttributesCacheGenerator_m_Mode,
	PersistentCall_t692_CustomAttributesCacheGenerator_m_Arguments,
	PersistentCall_t692_CustomAttributesCacheGenerator_m_CallState,
	PersistentCallGroup_t694_CustomAttributesCacheGenerator_m_Calls,
	UnityEventBase_t697_CustomAttributesCacheGenerator_m_PersistentCalls,
	UnityEventBase_t697_CustomAttributesCacheGenerator_m_TypeName,
	UserAuthorizationDialog_t698_CustomAttributesCacheGenerator,
	DefaultValueAttribute_t699_CustomAttributesCacheGenerator,
	ExcludeFromDocsAttribute_t700_CustomAttributesCacheGenerator,
	FormerlySerializedAsAttribute_t409_CustomAttributesCacheGenerator,
	TypeInferenceRuleAttribute_t702_CustomAttributesCacheGenerator,
};
