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
extern TypeInfo* InternalsVisibleToAttribute_t799_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t104_il2cpp_TypeInfo_var;
extern TypeInfo* ExtensionAttribute_t800_il2cpp_TypeInfo_var;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalsVisibleToAttribute_t799_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1111);
		RuntimeCompatibilityAttribute_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(71);
		ExtensionAttribute_t800_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1112);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 16;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		InternalsVisibleToAttribute_t799 * tmp;
		tmp = (InternalsVisibleToAttribute_t799 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t799_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3658(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t799 * tmp;
		tmp = (InternalsVisibleToAttribute_t799 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t799_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3658(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t799 * tmp;
		tmp = (InternalsVisibleToAttribute_t799 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t799_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3658(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t799 * tmp;
		tmp = (InternalsVisibleToAttribute_t799 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t799_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3658(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t799 * tmp;
		tmp = (InternalsVisibleToAttribute_t799 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t799_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3658(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t799 * tmp;
		tmp = (InternalsVisibleToAttribute_t799 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t799_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3658(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t799 * tmp;
		tmp = (InternalsVisibleToAttribute_t799 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t799_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3658(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t799 * tmp;
		tmp = (InternalsVisibleToAttribute_t799 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t799_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3658(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t799 * tmp;
		tmp = (InternalsVisibleToAttribute_t799 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t799_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3658(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), NULL);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t104 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t104 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t104_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m351(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m352(tmp, true, NULL);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		ExtensionAttribute_t800 * tmp;
		tmp = (ExtensionAttribute_t800 *)il2cpp_codegen_object_new (ExtensionAttribute_t800_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m3659(tmp, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t799 * tmp;
		tmp = (InternalsVisibleToAttribute_t799 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t799_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3658(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t799 * tmp;
		tmp = (InternalsVisibleToAttribute_t799 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t799_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3658(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), NULL);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t799 * tmp;
		tmp = (InternalsVisibleToAttribute_t799 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t799_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3658(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), NULL);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t799 * tmp;
		tmp = (InternalsVisibleToAttribute_t799 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t799_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3658(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), NULL);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t799 * tmp;
		tmp = (InternalsVisibleToAttribute_t799 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t799_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3658(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), NULL);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t477_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m2261(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t477_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m2262(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern TypeInfo* TypeInferenceRuleAttribute_t701_il2cpp_TypeInfo_var;
void AssetBundle_t479_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m2266(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1114);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t701 * tmp;
		tmp = (TypeInferenceRuleAttribute_t701 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t701_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m3493(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t701_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void AssetBundle_t479_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m2267(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1114);
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t701 * tmp;
		tmp = (TypeInferenceRuleAttribute_t701 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t701_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m3493(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void AssetBundle_t479_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m2268(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void LayerMask_t171_CustomAttributesCacheGenerator_LayerMask_LayerToName_m2271(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void LayerMask_t171_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m2272(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttributeMethodDeclarations.h"
extern TypeInfo* ParamArrayAttribute_t419_il2cpp_TypeInfo_var;
void LayerMask_t171_CustomAttributesCacheGenerator_LayerMask_t171_LayerMask_GetMask_m2273_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t419_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t419 * tmp;
		tmp = (ParamArrayAttribute_t419 *)il2cpp_codegen_object_new (ParamArrayAttribute_t419_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2122(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern TypeInfo* ObsoleteAttribute_t410_il2cpp_TypeInfo_var;
void RuntimePlatform_t482_CustomAttributesCacheGenerator_NaCl(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(399);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t410 * tmp;
		tmp = (ObsoleteAttribute_t410 *)il2cpp_codegen_object_new (ObsoleteAttribute_t410_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2081(tmp, il2cpp_codegen_string_new_wrapper("NaCl export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t410_il2cpp_TypeInfo_var;
void RuntimePlatform_t482_CustomAttributesCacheGenerator_FlashPlayer(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(399);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t410 * tmp;
		tmp = (ObsoleteAttribute_t410 *)il2cpp_codegen_object_new (ObsoleteAttribute_t410_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2081(tmp, il2cpp_codegen_string_new_wrapper("FlashPlayer export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t410_il2cpp_TypeInfo_var;
void RuntimePlatform_t482_CustomAttributesCacheGenerator_MetroPlayerX86(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(399);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t410 * tmp;
		tmp = (ObsoleteAttribute_t410 *)il2cpp_codegen_object_new (ObsoleteAttribute_t410_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2081(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX86 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t410_il2cpp_TypeInfo_var;
void RuntimePlatform_t482_CustomAttributesCacheGenerator_MetroPlayerX64(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(399);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t410 * tmp;
		tmp = (ObsoleteAttribute_t410 *)il2cpp_codegen_object_new (ObsoleteAttribute_t410_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2081(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX64 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t410_il2cpp_TypeInfo_var;
void RuntimePlatform_t482_CustomAttributesCacheGenerator_MetroPlayerARM(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(399);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t410 * tmp;
		tmp = (ObsoleteAttribute_t410 *)il2cpp_codegen_object_new (ObsoleteAttribute_t410_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2081(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerARM instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void SystemInfo_t484_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m2274(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Coroutine_t234_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m2277(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void ScriptableObject_t6_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m2279(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
extern TypeInfo* WritableAttribute_t651_il2cpp_TypeInfo_var;
void ScriptableObject_t6_CustomAttributesCacheGenerator_ScriptableObject_t6_ScriptableObject_Internal_CreateScriptableObject_m2279_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t651 * tmp;
		tmp = (WritableAttribute_t651 *)il2cpp_codegen_object_new (WritableAttribute_t651_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m3319(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void ScriptableObject_t6_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m2280(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void ScriptableObject_t6_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m2282(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GameCenterPlatform_t494_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m2287(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GameCenterPlatform_t494_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m2288(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GameCenterPlatform_t494_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m2289(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GameCenterPlatform_t494_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m2290(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GameCenterPlatform_t494_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m2291(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GameCenterPlatform_t494_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m2292(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GameCenterPlatform_t494_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m2293(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GameCenterPlatform_t494_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m2294(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GameCenterPlatform_t494_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m2295(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GameCenterPlatform_t494_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m2296(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GameCenterPlatform_t494_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m2297(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GameCenterPlatform_t494_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m2298(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GameCenterPlatform_t494_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m2299(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GameCenterPlatform_t494_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m2300(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GameCenterPlatform_t494_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m2301(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GameCenterPlatform_t494_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m2302(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GameCenterPlatform_t494_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2303(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GameCenterPlatform_t494_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2307(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GcLeaderboard_t496_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m2351(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GcLeaderboard_t496_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m2352(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GcLeaderboard_t496_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m2353(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GcLeaderboard_t496_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m2354(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Renderer_t498_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m1663(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Renderer_t498_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m1664(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Screen_t499_CustomAttributesCacheGenerator_Screen_get_width_m217(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Screen_t499_CustomAttributesCacheGenerator_Screen_get_height_m218(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Screen_t499_CustomAttributesCacheGenerator_Screen_get_dpi_m2008(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Texture_t239_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m2376(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Texture_t239_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m2377(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Texture2D_t191_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m2381(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t651_il2cpp_TypeInfo_var;
void Texture2D_t191_CustomAttributesCacheGenerator_Texture2D_t191_Texture2D_Internal_Create_m2381_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t651 * tmp;
		tmp = (WritableAttribute_t651 *)il2cpp_codegen_object_new (WritableAttribute_t651_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m3319(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Texture2D_t191_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m1711(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Texture2D_t191_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m1802(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void RenderTexture_t500_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m2382(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void RenderTexture_t500_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m2383(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GUILayer_t503_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m2387(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Gradient_t506_CustomAttributesCacheGenerator_Gradient_Init_m2391(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Gradient_t506_CustomAttributesCacheGenerator_Gradient_Cleanup_m2392(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void GUI_t511_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void GUI_t511_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void GUI_t511_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m2400(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GUI_t511_CustomAttributesCacheGenerator_GUI_set_changed_m2403(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GUILayoutUtility_t517_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m2416(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GUILayoutUtility_t517_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m2418(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GUIUtility_t524_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m2449(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GUIUtility_t524_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m2450(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GUIUtility_t524_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m2452(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GUIUtility_t524_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m2454(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GUIUtility_t524_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m2458(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void GUISettings_t525_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void GUISettings_t525_CustomAttributesCacheGenerator_m_TripleClickSelectsLine(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void GUISettings_t525_CustomAttributesCacheGenerator_m_CursorColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void GUISettings_t525_CustomAttributesCacheGenerator_m_CursorFlashSpeed(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void GUISettings_t525_CustomAttributesCacheGenerator_m_SelectionColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
extern TypeInfo* ExecuteInEditMode_t417_il2cpp_TypeInfo_var;
void GUISkin_t509_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(402);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExecuteInEditMode_t417 * tmp;
		tmp = (ExecuteInEditMode_t417 *)il2cpp_codegen_object_new (ExecuteInEditMode_t417_il2cpp_TypeInfo_var);
		ExecuteInEditMode__ctor_m2117(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void GUISkin_t509_CustomAttributesCacheGenerator_m_Font(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void GUISkin_t509_CustomAttributesCacheGenerator_m_box(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void GUISkin_t509_CustomAttributesCacheGenerator_m_button(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void GUISkin_t509_CustomAttributesCacheGenerator_m_toggle(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void GUISkin_t509_CustomAttributesCacheGenerator_m_label(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void GUISkin_t509_CustomAttributesCacheGenerator_m_textField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void GUISkin_t509_CustomAttributesCacheGenerator_m_textArea(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void GUISkin_t509_CustomAttributesCacheGenerator_m_window(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void GUISkin_t509_CustomAttributesCacheGenerator_m_horizontalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void GUISkin_t509_CustomAttributesCacheGenerator_m_horizontalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void GUISkin_t509_CustomAttributesCacheGenerator_m_verticalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void GUISkin_t509_CustomAttributesCacheGenerator_m_verticalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void GUISkin_t509_CustomAttributesCacheGenerator_m_horizontalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void GUISkin_t509_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void GUISkin_t509_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void GUISkin_t509_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void GUISkin_t509_CustomAttributesCacheGenerator_m_verticalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void GUISkin_t509_CustomAttributesCacheGenerator_m_verticalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void GUISkin_t509_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void GUISkin_t509_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void GUISkin_t509_CustomAttributesCacheGenerator_m_ScrollView(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void GUISkin_t509_CustomAttributesCacheGenerator_m_CustomStyles(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void GUISkin_t509_CustomAttributesCacheGenerator_m_Settings(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void GUIContent_t370_CustomAttributesCacheGenerator_m_Text(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void GUIContent_t370_CustomAttributesCacheGenerator_m_Image(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void GUIContent_t370_CustomAttributesCacheGenerator_m_Tooltip(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GUIStyleState_t529_CustomAttributesCacheGenerator_GUIStyleState_Init_m2525(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GUIStyleState_t529_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m2526(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GUIStyleState_t529_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m2527(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GUIStyleState_t529_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m2528(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void RectOffset_t290_CustomAttributesCacheGenerator_RectOffset_Init_m2533(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void RectOffset_t290_CustomAttributesCacheGenerator_RectOffset_Cleanup_m2534(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void RectOffset_t290_CustomAttributesCacheGenerator_RectOffset_get_left_m2023(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void RectOffset_t290_CustomAttributesCacheGenerator_RectOffset_set_left_m2535(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void RectOffset_t290_CustomAttributesCacheGenerator_RectOffset_get_right_m2536(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void RectOffset_t290_CustomAttributesCacheGenerator_RectOffset_set_right_m2537(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void RectOffset_t290_CustomAttributesCacheGenerator_RectOffset_get_top_m2024(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void RectOffset_t290_CustomAttributesCacheGenerator_RectOffset_set_top_m2538(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void RectOffset_t290_CustomAttributesCacheGenerator_RectOffset_get_bottom_m2539(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void RectOffset_t290_CustomAttributesCacheGenerator_RectOffset_set_bottom_m2540(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void RectOffset_t290_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m2018(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void RectOffset_t290_CustomAttributesCacheGenerator_RectOffset_get_vertical_m2019(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void RectOffset_t290_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m2542(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GUIStyle_t516_CustomAttributesCacheGenerator_GUIStyle_Init_m2547(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GUIStyle_t516_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m2548(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GUIStyle_t516_CustomAttributesCacheGenerator_GUIStyle_get_name_m2549(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GUIStyle_t516_CustomAttributesCacheGenerator_GUIStyle_set_name_m2550(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GUIStyle_t516_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m2552(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GUIStyle_t516_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m2555(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GUIStyle_t516_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m2556(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GUIStyle_t516_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m2557(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GUIStyle_t516_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m2558(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GUIStyle_t516_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m2559(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GUIStyle_t516_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m2560(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GUIStyle_t516_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m2561(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GUIStyle_t516_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m2562(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GUIStyle_t516_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m2564(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GUIStyle_t516_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m2568(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GUIStyle_t516_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m2570(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GUIStyle_t516_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m2572(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t230_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m2575(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t230_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m2577(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
extern TypeInfo* ExcludeFromDocsAttribute_t699_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t230_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m1908(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1116);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t699 * tmp;
		tmp = (ExcludeFromDocsAttribute_t699 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t699_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3492(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t699_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t230_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m1909(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1116);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t699 * tmp;
		tmp = (ExcludeFromDocsAttribute_t699 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t699_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3492(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern TypeInfo* DefaultValueAttribute_t698_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t230_CustomAttributesCacheGenerator_TouchScreenKeyboard_t230_TouchScreenKeyboard_Open_m2578_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t698 * tmp;
		tmp = (DefaultValueAttribute_t698 *)il2cpp_codegen_object_new (DefaultValueAttribute_t698_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3488(tmp, il2cpp_codegen_string_new_wrapper("TouchScreenKeyboardType.Default"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t698_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t230_CustomAttributesCacheGenerator_TouchScreenKeyboard_t230_TouchScreenKeyboard_Open_m2578_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t698 * tmp;
		tmp = (DefaultValueAttribute_t698 *)il2cpp_codegen_object_new (DefaultValueAttribute_t698_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3488(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t698_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t230_CustomAttributesCacheGenerator_TouchScreenKeyboard_t230_TouchScreenKeyboard_Open_m2578_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t698 * tmp;
		tmp = (DefaultValueAttribute_t698 *)il2cpp_codegen_object_new (DefaultValueAttribute_t698_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3488(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t698_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t230_CustomAttributesCacheGenerator_TouchScreenKeyboard_t230_TouchScreenKeyboard_Open_m2578_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t698 * tmp;
		tmp = (DefaultValueAttribute_t698 *)il2cpp_codegen_object_new (DefaultValueAttribute_t698_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3488(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t698_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t230_CustomAttributesCacheGenerator_TouchScreenKeyboard_t230_TouchScreenKeyboard_Open_m2578_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t698 * tmp;
		tmp = (DefaultValueAttribute_t698 *)il2cpp_codegen_object_new (DefaultValueAttribute_t698_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3488(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t698_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t230_CustomAttributesCacheGenerator_TouchScreenKeyboard_t230_TouchScreenKeyboard_Open_m2578_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t698 * tmp;
		tmp = (DefaultValueAttribute_t698 *)il2cpp_codegen_object_new (DefaultValueAttribute_t698_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3488(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t230_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m1832(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t230_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m1833(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t230_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m1907(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t230_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m1831(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t230_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m1906(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t230_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m1846(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t230_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m1843(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void Event_t235_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Event_t235_CustomAttributesCacheGenerator_Event_Init_m2579(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Event_t235_CustomAttributesCacheGenerator_Event_Cleanup_m2581(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Event_t235_CustomAttributesCacheGenerator_Event_get_rawType_m1859(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Event_t235_CustomAttributesCacheGenerator_Event_get_type_m2582(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Event_t235_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m2584(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Event_t235_CustomAttributesCacheGenerator_Event_get_modifiers_m1855(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Event_t235_CustomAttributesCacheGenerator_Event_get_character_m1857(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Event_t235_CustomAttributesCacheGenerator_Event_get_commandName_m2585(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Event_t235_CustomAttributesCacheGenerator_Event_get_keyCode_m1856(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Event_t235_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m2587(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Event_t235_CustomAttributesCacheGenerator_Event_PopEvent_m1860(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t405_il2cpp_TypeInfo_var;
void EventModifiers_t534_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t405_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(395);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t405 * tmp;
		tmp = (FlagsAttribute_t405 *)il2cpp_codegen_object_new (FlagsAttribute_t405_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m2060(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Gizmos_t535_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawLine_m2594(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Gizmos_t535_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawCube_m2595(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Gizmos_t535_CustomAttributesCacheGenerator_Gizmos_INTERNAL_set_color_m2596(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern TypeInfo* DefaultMemberAttribute_t425_il2cpp_TypeInfo_var;
void Vector2_t35_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(409);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t425 * tmp;
		tmp = (DefaultMemberAttribute_t425 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t425_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m2146(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t425_il2cpp_TypeInfo_var;
void Vector3_t56_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(409);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t425 * tmp;
		tmp = (DefaultMemberAttribute_t425 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t425_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m2146(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t425_il2cpp_TypeInfo_var;
void Color_t39_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(409);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t425 * tmp;
		tmp = (DefaultMemberAttribute_t425 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t425_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m2146(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttribute.h"
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttributeMethodDeclarations.h"
extern TypeInfo* IL2CPPStructAlignmentAttribute_t645_il2cpp_TypeInfo_var;
void Color32_t339_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IL2CPPStructAlignmentAttribute_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1117);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		IL2CPPStructAlignmentAttribute_t645 * tmp;
		tmp = (IL2CPPStructAlignmentAttribute_t645 *)il2cpp_codegen_object_new (IL2CPPStructAlignmentAttribute_t645_il2cpp_TypeInfo_var);
		IL2CPPStructAlignmentAttribute__ctor_m3311(tmp, NULL);
		tmp->___Align_0 = 4;
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t425_il2cpp_TypeInfo_var;
void Quaternion_t97_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(409);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t425 * tmp;
		tmp = (DefaultMemberAttribute_t425 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t425_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m2146(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Quaternion_t97_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m2620(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t425_il2cpp_TypeInfo_var;
void Matrix4x4_t379_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(409);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t425 * tmp;
		tmp = (DefaultMemberAttribute_t425 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t425_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m2146(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Matrix4x4_t379_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m2635(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Matrix4x4_t379_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m2637(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Matrix4x4_t379_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m2639(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Matrix4x4_t379_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m2642(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Matrix4x4_t379_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m2654(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Matrix4x4_t379_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m2657(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Matrix4x4_t379_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m2658(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Bounds_t253_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m2675(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Bounds_t253_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m2678(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Bounds_t253_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m2681(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Bounds_t253_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m2685(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t425_il2cpp_TypeInfo_var;
void Vector4_t332_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(409);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t425 * tmp;
		tmp = (DefaultMemberAttribute_t425 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t425_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m2146(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t698_il2cpp_TypeInfo_var;
void Mathf_t67_CustomAttributesCacheGenerator_Mathf_t67_Mathf_SmoothDamp_m1933_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t698 * tmp;
		tmp = (DefaultValueAttribute_t698 *)il2cpp_codegen_object_new (DefaultValueAttribute_t698_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3488(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t698_il2cpp_TypeInfo_var;
void Mathf_t67_CustomAttributesCacheGenerator_Mathf_t67_Mathf_SmoothDamp_m1933_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t698 * tmp;
		tmp = (DefaultValueAttribute_t698 *)il2cpp_codegen_object_new (DefaultValueAttribute_t698_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3488(tmp, il2cpp_codegen_string_new_wrapper("Time.deltaTime"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t405_il2cpp_TypeInfo_var;
void DrivenTransformProperties_t537_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t405_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(395);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t405 * tmp;
		tmp = (FlagsAttribute_t405 *)il2cpp_codegen_object_new (FlagsAttribute_t405_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m2060(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void RectTransform_t193_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m2714(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void RectTransform_t193_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m2715(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void RectTransform_t193_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m2716(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void RectTransform_t193_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m2717(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void RectTransform_t193_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m2718(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void RectTransform_t193_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m2719(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void RectTransform_t193_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m2720(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void RectTransform_t193_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m2721(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void RectTransform_t193_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m2722(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void RectTransform_t193_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m2723(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void RectTransform_t193_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m2724(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t701_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Resources_t541_CustomAttributesCacheGenerator_Resources_Load_m2730(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1114);
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t701 * tmp;
		tmp = (TypeInferenceRuleAttribute_t701 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t701_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m3493(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t410_il2cpp_TypeInfo_var;
void SerializePrivateVariables_t542_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(399);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t410 * tmp;
		tmp = (ObsoleteAttribute_t410 *)il2cpp_codegen_object_new (ObsoleteAttribute_t410_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2081(tmp, il2cpp_codegen_string_new_wrapper("Use SerializeField on the private variables that you want to be serialized instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Shader_t544_CustomAttributesCacheGenerator_Shader_PropertyToID_m2732(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Material_t190_CustomAttributesCacheGenerator_Material_GetTexture_m2734(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Material_t190_CustomAttributesCacheGenerator_Material_SetFloat_m2736(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Material_t190_CustomAttributesCacheGenerator_Material_HasProperty_m2737(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Material_t190_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m2738(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t651_il2cpp_TypeInfo_var;
void Material_t190_CustomAttributesCacheGenerator_Material_t190_Material_Internal_CreateWithMaterial_m2738_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t651 * tmp;
		tmp = (WritableAttribute_t651 *)il2cpp_codegen_object_new (WritableAttribute_t651_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m3319(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t425_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t545_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(409);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t425 * tmp;
		tmp = (DefaultMemberAttribute_t425 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t425_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m2146(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t545_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m2741(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t545_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m2744(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t545_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m2747(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Sprite_t7_CustomAttributesCacheGenerator_Sprite_get_rect_m1778(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Sprite_t7_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m1773(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Sprite_t7_CustomAttributesCacheGenerator_Sprite_get_texture_m1770(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Sprite_t7_CustomAttributesCacheGenerator_Sprite_get_textureRect_m1799(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Sprite_t7_CustomAttributesCacheGenerator_Sprite_get_border_m1771(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void SpriteRenderer_t60_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m2757(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void DataUtility_t546_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m1788(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void DataUtility_t546_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m1787(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void DataUtility_t546_CustomAttributesCacheGenerator_DataUtility_GetPadding_m1777(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void DataUtility_t546_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m2758(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void WWW_t547_CustomAttributesCacheGenerator_WWW_DestroyWWW_m2762(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void WWW_t547_CustomAttributesCacheGenerator_WWW_InitWWW_m2763(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void WWW_t547_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m2765(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void WWW_t547_CustomAttributesCacheGenerator_WWW_get_bytes_m2769(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void WWW_t547_CustomAttributesCacheGenerator_WWW_get_error_m2770(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void WWW_t547_CustomAttributesCacheGenerator_WWW_get_isDone_m2771(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t699_il2cpp_TypeInfo_var;
void WWWForm_t551_CustomAttributesCacheGenerator_WWWForm_AddField_m2775(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1116);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t699 * tmp;
		tmp = (ExcludeFromDocsAttribute_t699 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t699_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3492(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t698_il2cpp_TypeInfo_var;
void WWWForm_t551_CustomAttributesCacheGenerator_WWWForm_t551_WWWForm_AddField_m2776_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t698 * tmp;
		tmp = (DefaultValueAttribute_t698 *)il2cpp_codegen_object_new (DefaultValueAttribute_t698_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3488(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t698_il2cpp_TypeInfo_var;
void WWWTranscoder_t552_CustomAttributesCacheGenerator_WWWTranscoder_t552_WWWTranscoder_QPEncode_m2783_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t698 * tmp;
		tmp = (DefaultValueAttribute_t698 *)il2cpp_codegen_object_new (DefaultValueAttribute_t698_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3488(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t698_il2cpp_TypeInfo_var;
void WWWTranscoder_t552_CustomAttributesCacheGenerator_WWWTranscoder_t552_WWWTranscoder_SevenBitClean_m2786_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t698 * tmp;
		tmp = (DefaultValueAttribute_t698 *)il2cpp_codegen_object_new (DefaultValueAttribute_t698_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3488(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t410_il2cpp_TypeInfo_var;
void CacheIndex_t553_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(399);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t410 * tmp;
		tmp = (ObsoleteAttribute_t410 *)il2cpp_codegen_object_new (ObsoleteAttribute_t410_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2081(tmp, il2cpp_codegen_string_new_wrapper("this API is not for public use."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t419_il2cpp_TypeInfo_var;
void UnityString_t554_CustomAttributesCacheGenerator_UnityString_t554_UnityString_Format_m2788_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t419_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t419 * tmp;
		tmp = (ParamArrayAttribute_t419 *)il2cpp_codegen_object_new (ParamArrayAttribute_t419_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2122(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void AsyncOperation_t478_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m2790(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Application_t556_CustomAttributesCacheGenerator_Application_get_loadedLevel_m230(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Application_t556_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m2796(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Application_t556_CustomAttributesCacheGenerator_Application_get_levelCount_m231(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Application_t556_CustomAttributesCacheGenerator_Application_get_isPlaying_m1911(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Application_t556_CustomAttributesCacheGenerator_Application_get_isEditor_m1914(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Application_t556_CustomAttributesCacheGenerator_Application_get_platform_m1830(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Behaviour_t393_CustomAttributesCacheGenerator_Behaviour_get_enabled_m1597(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Behaviour_t393_CustomAttributesCacheGenerator_Behaviour_set_enabled_m283(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Behaviour_t393_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m1598(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Camera_t82_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m1656(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Camera_t82_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m1655(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Camera_t82_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m258(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Camera_t82_CustomAttributesCacheGenerator_Camera_get_depth_m1559(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Camera_t82_CustomAttributesCacheGenerator_Camera_get_cullingMask_m1667(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Camera_t82_CustomAttributesCacheGenerator_Camera_get_eventMask_m2803(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Camera_t82_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m2804(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Camera_t82_CustomAttributesCacheGenerator_Camera_get_targetTexture_m2806(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Camera_t82_CustomAttributesCacheGenerator_Camera_get_clearFlags_m2807(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Camera_t82_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m2808(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Camera_t82_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m2809(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Camera_t82_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m2810(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Camera_t82_CustomAttributesCacheGenerator_Camera_get_main_m257(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Camera_t82_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m2811(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Camera_t82_CustomAttributesCacheGenerator_Camera_GetAllCameras_m2812(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Camera_t82_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m2817(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Camera_t82_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m2819(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttribute.h"
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t801_il2cpp_TypeInfo_var;
void CameraCallback_t557_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t801_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1118);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t801 * tmp;
		tmp = (EditorBrowsableAttribute_t801 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t801_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m3664(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Debug_t558_CustomAttributesCacheGenerator_Debug_Internal_Log_m2820(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t651_il2cpp_TypeInfo_var;
void Debug_t558_CustomAttributesCacheGenerator_Debug_t558_Debug_Internal_Log_m2820_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t651 * tmp;
		tmp = (WritableAttribute_t651 *)il2cpp_codegen_object_new (WritableAttribute_t651_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m3319(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Debug_t558_CustomAttributesCacheGenerator_Debug_Internal_LogException_m2821(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t651_il2cpp_TypeInfo_var;
void Debug_t558_CustomAttributesCacheGenerator_Debug_t558_Debug_Internal_LogException_m2821_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t651 * tmp;
		tmp = (WritableAttribute_t651 *)il2cpp_codegen_object_new (WritableAttribute_t651_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m3319(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Display_t561_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m2848(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Display_t561_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m2849(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Display_t561_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m2850(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Display_t561_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m2851(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Display_t561_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m2852(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Display_t561_CustomAttributesCacheGenerator_Display_SetParamsImpl_m2853(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Display_t561_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m2854(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Display_t561_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m2855(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void MonoBehaviour_t12_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m2856(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void MonoBehaviour_t12_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_m2857(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t698_il2cpp_TypeInfo_var;
void MonoBehaviour_t12_CustomAttributesCacheGenerator_MonoBehaviour_t12_MonoBehaviour_StartCoroutine_m2857_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t698 * tmp;
		tmp = (DefaultValueAttribute_t698 *)il2cpp_codegen_object_new (DefaultValueAttribute_t698_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3488(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t699_il2cpp_TypeInfo_var;
void MonoBehaviour_t12_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_m336(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1116);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t699 * tmp;
		tmp = (ExcludeFromDocsAttribute_t699 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t699_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3492(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void MonoBehaviour_t12_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_m342(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void MonoBehaviour_t12_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m2859(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void MonoBehaviour_t12_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m2860(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Input_t98_CustomAttributesCacheGenerator_Input_GetKeyDownString_m2862(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Input_t98_CustomAttributesCacheGenerator_Input_GetAxisRaw_m1644(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Input_t98_CustomAttributesCacheGenerator_Input_GetButtonDown_m1643(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Input_t98_CustomAttributesCacheGenerator_Input_GetMouseButton_m1651(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Input_t98_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m1613(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Input_t98_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m1614(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Input_t98_CustomAttributesCacheGenerator_Input_get_mousePosition_m1615(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Input_t98_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m1616(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Input_t98_CustomAttributesCacheGenerator_Input_get_mousePresent_m1642(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Input_t98_CustomAttributesCacheGenerator_Input_GetTouch_m1650(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Input_t98_CustomAttributesCacheGenerator_Input_get_touchCount_m341(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Input_t98_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m1910(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Input_t98_CustomAttributesCacheGenerator_Input_get_compositionString_m1834(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Input_t98_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m2863(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t405_il2cpp_TypeInfo_var;
void HideFlags_t564_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t405_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(395);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t405 * tmp;
		tmp = (FlagsAttribute_t405 *)il2cpp_codegen_object_new (FlagsAttribute_t405_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m2060(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Object_t66_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m2865(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Object_t66_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m2867(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Object_t66_CustomAttributesCacheGenerator_Object_Destroy_m2868(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t698_il2cpp_TypeInfo_var;
void Object_t66_CustomAttributesCacheGenerator_Object_t66_Object_Destroy_m2868_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t698 * tmp;
		tmp = (DefaultValueAttribute_t698 *)il2cpp_codegen_object_new (DefaultValueAttribute_t698_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3488(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t699_il2cpp_TypeInfo_var;
void Object_t66_CustomAttributesCacheGenerator_Object_Destroy_m284(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1116);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t699 * tmp;
		tmp = (ExcludeFromDocsAttribute_t699 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t699_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3492(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Object_t66_CustomAttributesCacheGenerator_Object_DestroyImmediate_m2869(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t698_il2cpp_TypeInfo_var;
void Object_t66_CustomAttributesCacheGenerator_Object_t66_Object_DestroyImmediate_m2869_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t698 * tmp;
		tmp = (DefaultValueAttribute_t698 *)il2cpp_codegen_object_new (DefaultValueAttribute_t698_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3488(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t699_il2cpp_TypeInfo_var;
void Object_t66_CustomAttributesCacheGenerator_Object_DestroyImmediate_m1913(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1116);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t699 * tmp;
		tmp = (ExcludeFromDocsAttribute_t699 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t699_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3492(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t701_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Object_t66_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m2870(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1114);
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t701 * tmp;
		tmp = (TypeInferenceRuleAttribute_t701 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t701_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m3493(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Object_t66_CustomAttributesCacheGenerator_Object_get_name_m343(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Object_t66_CustomAttributesCacheGenerator_Object_set_name_m1980(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Object_t66_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m2871(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Object_t66_CustomAttributesCacheGenerator_Object_set_hideFlags_m1875(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Object_t66_CustomAttributesCacheGenerator_Object_ToString_m362(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t701_il2cpp_TypeInfo_var;
void Object_t66_CustomAttributesCacheGenerator_Object_Instantiate_m322(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1114);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t701 * tmp;
		tmp = (TypeInferenceRuleAttribute_t701 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t701_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m3493(tmp, 3, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t701_il2cpp_TypeInfo_var;
void Object_t66_CustomAttributesCacheGenerator_Object_FindObjectOfType_m2877(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1114);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t701 * tmp;
		tmp = (TypeInferenceRuleAttribute_t701 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t701_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m3493(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Component_t61_CustomAttributesCacheGenerator_Component_get_transform_m190(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Component_t61_CustomAttributesCacheGenerator_Component_get_gameObject_m237(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t701_il2cpp_TypeInfo_var;
void Component_t61_CustomAttributesCacheGenerator_Component_GetComponent_m2031(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1114);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t701 * tmp;
		tmp = (TypeInferenceRuleAttribute_t701 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t701_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m3493(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Component_t61_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m2879(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttribute.h"
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecuritySafeCriticalAttribute_t802_il2cpp_TypeInfo_var;
void Component_t61_CustomAttributesCacheGenerator_Component_GetComponent_m3668(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t802 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t802 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t802_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m3669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Component_t61_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m2880(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t701_il2cpp_TypeInfo_var;
void GameObject_t24_CustomAttributesCacheGenerator_GameObject_GetComponent_m2882(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		TypeInferenceRuleAttribute_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1114);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t701 * tmp;
		tmp = (TypeInferenceRuleAttribute_t701 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t701_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m3493(tmp, 0, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GameObject_t24_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m2883(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t802_il2cpp_TypeInfo_var;
void GameObject_t24_CustomAttributesCacheGenerator_GameObject_GetComponent_m3673(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t802 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t802 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t802_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m3669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GameObject_t24_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m2884(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GameObject_t24_CustomAttributesCacheGenerator_GameObject_get_transform_m261(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GameObject_t24_CustomAttributesCacheGenerator_GameObject_get_layer_m1878(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GameObject_t24_CustomAttributesCacheGenerator_GameObject_set_layer_m1879(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GameObject_t24_CustomAttributesCacheGenerator_GameObject_SetActive_m338(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GameObject_t24_CustomAttributesCacheGenerator_GameObject_get_activeSelf_m337(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GameObject_t24_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m1599(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GameObject_t24_CustomAttributesCacheGenerator_GameObject_get_tag_m316(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GameObject_t24_CustomAttributesCacheGenerator_GameObject_CompareTag_m238(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GameObject_t24_CustomAttributesCacheGenerator_GameObject_FindGameObjectsWithTag_m270(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GameObject_t24_CustomAttributesCacheGenerator_GameObject_SendMessage_m2885(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t698_il2cpp_TypeInfo_var;
void GameObject_t24_CustomAttributesCacheGenerator_GameObject_t24_GameObject_SendMessage_m2885_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t698 * tmp;
		tmp = (DefaultValueAttribute_t698 *)il2cpp_codegen_object_new (DefaultValueAttribute_t698_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3488(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t698_il2cpp_TypeInfo_var;
void GameObject_t24_CustomAttributesCacheGenerator_GameObject_t24_GameObject_SendMessage_m2885_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t698 * tmp;
		tmp = (DefaultValueAttribute_t698 *)il2cpp_codegen_object_new (DefaultValueAttribute_t698_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3488(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GameObject_t24_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m2886(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t701_il2cpp_TypeInfo_var;
void GameObject_t24_CustomAttributesCacheGenerator_GameObject_AddComponent_m2887(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1114);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t701 * tmp;
		tmp = (TypeInferenceRuleAttribute_t701 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t701_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m3493(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GameObject_t24_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m2888(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t651_il2cpp_TypeInfo_var;
void GameObject_t24_CustomAttributesCacheGenerator_GameObject_t24_GameObject_Internal_CreateGameObject_m2888_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t651 * tmp;
		tmp = (WritableAttribute_t651 *)il2cpp_codegen_object_new (WritableAttribute_t651_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m3319(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void GameObject_t24_CustomAttributesCacheGenerator_GameObject_Find_m212(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Transform_t65_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m2892(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Transform_t65_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m2893(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Transform_t65_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m2894(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Transform_t65_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m2895(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Transform_t65_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m2896(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Transform_t65_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m2897(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Transform_t65_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m2898(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Transform_t65_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m2899(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Transform_t65_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m2900(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Transform_t65_CustomAttributesCacheGenerator_Transform_get_parentInternal_m2901(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Transform_t65_CustomAttributesCacheGenerator_Transform_set_parentInternal_m2902(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Transform_t65_CustomAttributesCacheGenerator_Transform_SetParent_m2903(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Transform_t65_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m2904(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Transform_t65_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m2905(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Transform_t65_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m2906(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Transform_t65_CustomAttributesCacheGenerator_Transform_get_childCount_m262(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Transform_t65_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m1877(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Transform_t65_CustomAttributesCacheGenerator_Transform_GetChild_m2030(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Time_t566_CustomAttributesCacheGenerator_Time_get_deltaTime_m282(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Time_t566_CustomAttributesCacheGenerator_Time_get_unscaledTime_m1646(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Time_t566_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m1680(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Time_t566_CustomAttributesCacheGenerator_Time_get_timeScale_m347(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Time_t566_CustomAttributesCacheGenerator_Time_set_timeScale_m263(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Random_t567_CustomAttributesCacheGenerator_Random_RandomRangeInt_m2908(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void PlayerPrefs_t569_CustomAttributesCacheGenerator_PlayerPrefs_TrySetInt_m2911(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void PlayerPrefs_t569_CustomAttributesCacheGenerator_PlayerPrefs_GetInt_m220(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t698_il2cpp_TypeInfo_var;
void PlayerPrefs_t569_CustomAttributesCacheGenerator_PlayerPrefs_t569_PlayerPrefs_GetInt_m220_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t698 * tmp;
		tmp = (DefaultValueAttribute_t698 *)il2cpp_codegen_object_new (DefaultValueAttribute_t698_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3488(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t699_il2cpp_TypeInfo_var;
void PlayerPrefs_t569_CustomAttributesCacheGenerator_PlayerPrefs_GetInt_m228(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1116);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t699 * tmp;
		tmp = (ExcludeFromDocsAttribute_t699 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t699_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3492(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void PlayerPrefs_t569_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m2912(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t698_il2cpp_TypeInfo_var;
void PlayerPrefs_t569_CustomAttributesCacheGenerator_PlayerPrefs_t569_PlayerPrefs_GetString_m2912_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t698 * tmp;
		tmp = (DefaultValueAttribute_t698 *)il2cpp_codegen_object_new (DefaultValueAttribute_t698_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3488(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t699_il2cpp_TypeInfo_var;
void PlayerPrefs_t569_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m2913(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1116);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t699 * tmp;
		tmp = (ExcludeFromDocsAttribute_t699 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t699_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3492(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void PlayerPrefs_t569_CustomAttributesCacheGenerator_PlayerPrefs_DeleteAll_m326(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Physics_t571_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m2931(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t698_il2cpp_TypeInfo_var;
void Physics_t571_CustomAttributesCacheGenerator_Physics_t571_Physics_Raycast_m2932_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t698 * tmp;
		tmp = (DefaultValueAttribute_t698 *)il2cpp_codegen_object_new (DefaultValueAttribute_t698_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3488(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t698_il2cpp_TypeInfo_var;
void Physics_t571_CustomAttributesCacheGenerator_Physics_t571_Physics_Raycast_m2932_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t698 * tmp;
		tmp = (DefaultValueAttribute_t698 *)il2cpp_codegen_object_new (DefaultValueAttribute_t698_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3488(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t698_il2cpp_TypeInfo_var;
void Physics_t571_CustomAttributesCacheGenerator_Physics_t571_Physics_Raycast_m1745_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t698 * tmp;
		tmp = (DefaultValueAttribute_t698 *)il2cpp_codegen_object_new (DefaultValueAttribute_t698_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3488(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t698_il2cpp_TypeInfo_var;
void Physics_t571_CustomAttributesCacheGenerator_Physics_t571_Physics_Raycast_m1745_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t698 * tmp;
		tmp = (DefaultValueAttribute_t698 *)il2cpp_codegen_object_new (DefaultValueAttribute_t698_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3488(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t698_il2cpp_TypeInfo_var;
void Physics_t571_CustomAttributesCacheGenerator_Physics_t571_Physics_RaycastAll_m1669_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t698 * tmp;
		tmp = (DefaultValueAttribute_t698 *)il2cpp_codegen_object_new (DefaultValueAttribute_t698_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3488(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t698_il2cpp_TypeInfo_var;
void Physics_t571_CustomAttributesCacheGenerator_Physics_t571_Physics_RaycastAll_m1669_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t698 * tmp;
		tmp = (DefaultValueAttribute_t698 *)il2cpp_codegen_object_new (DefaultValueAttribute_t698_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3488(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t698_il2cpp_TypeInfo_var;
void Physics_t571_CustomAttributesCacheGenerator_Physics_t571_Physics_RaycastAll_m2933_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t698 * tmp;
		tmp = (DefaultValueAttribute_t698 *)il2cpp_codegen_object_new (DefaultValueAttribute_t698_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3488(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t698_il2cpp_TypeInfo_var;
void Physics_t571_CustomAttributesCacheGenerator_Physics_t571_Physics_RaycastAll_m2933_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t698 * tmp;
		tmp = (DefaultValueAttribute_t698 *)il2cpp_codegen_object_new (DefaultValueAttribute_t698_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3488(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Physics_t571_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m2934(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t699_il2cpp_TypeInfo_var;
void Physics2D_t94_CustomAttributesCacheGenerator_Physics2D_LinecastAll_m314(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1116);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t699 * tmp;
		tmp = (ExcludeFromDocsAttribute_t699 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t699_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3492(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Physics2D_t94_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_LinecastAll_m2936(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Physics2D_t94_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m2938(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t699_il2cpp_TypeInfo_var;
void Physics2D_t94_CustomAttributesCacheGenerator_Physics2D_Raycast_m1746(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1116);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t699 * tmp;
		tmp = (ExcludeFromDocsAttribute_t699 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t699_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3492(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t698_il2cpp_TypeInfo_var;
void Physics2D_t94_CustomAttributesCacheGenerator_Physics2D_t94_Physics2D_Raycast_m2939_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t698 * tmp;
		tmp = (DefaultValueAttribute_t698 *)il2cpp_codegen_object_new (DefaultValueAttribute_t698_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3488(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t698_il2cpp_TypeInfo_var;
void Physics2D_t94_CustomAttributesCacheGenerator_Physics2D_t94_Physics2D_Raycast_m2939_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t698 * tmp;
		tmp = (DefaultValueAttribute_t698 *)il2cpp_codegen_object_new (DefaultValueAttribute_t698_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3488(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t698_il2cpp_TypeInfo_var;
void Physics2D_t94_CustomAttributesCacheGenerator_Physics2D_t94_Physics2D_Raycast_m2939_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t698 * tmp;
		tmp = (DefaultValueAttribute_t698 *)il2cpp_codegen_object_new (DefaultValueAttribute_t698_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3488(tmp, il2cpp_codegen_string_new_wrapper("-Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t698_il2cpp_TypeInfo_var;
void Physics2D_t94_CustomAttributesCacheGenerator_Physics2D_t94_Physics2D_Raycast_m2939_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t698 * tmp;
		tmp = (DefaultValueAttribute_t698 *)il2cpp_codegen_object_new (DefaultValueAttribute_t698_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3488(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t699_il2cpp_TypeInfo_var;
void Physics2D_t94_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m1659(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1116);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t699 * tmp;
		tmp = (ExcludeFromDocsAttribute_t699 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t699_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3492(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Physics2D_t94_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m2940(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Rigidbody2D_t62_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_CALL_MovePosition_m2942(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Rigidbody2D_t62_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_set_velocity_m2943(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Collider2D_t58_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m2944(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t410_il2cpp_TypeInfo_var;
void AnimationEvent_t582_CustomAttributesCacheGenerator_AnimationEvent_t582____data_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(399);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t410 * tmp;
		tmp = (ObsoleteAttribute_t410 *)il2cpp_codegen_object_new (ObsoleteAttribute_t410_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2081(tmp, il2cpp_codegen_string_new_wrapper("Use stringParameter instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t425_il2cpp_TypeInfo_var;
void AnimationCurve_t586_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(409);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t425 * tmp;
		tmp = (DefaultMemberAttribute_t425 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t425_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m2146(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t419_il2cpp_TypeInfo_var;
void AnimationCurve_t586_CustomAttributesCacheGenerator_AnimationCurve_t586_AnimationCurve__ctor_m2985_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t419_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t419 * tmp;
		tmp = (ParamArrayAttribute_t419 *)il2cpp_codegen_object_new (ParamArrayAttribute_t419_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2122(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void AnimationCurve_t586_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m2987(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void AnimationCurve_t586_CustomAttributesCacheGenerator_AnimationCurve_Init_m2989(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t410_il2cpp_TypeInfo_var;
void AnimatorStateInfo_t583_CustomAttributesCacheGenerator_AnimatorStateInfo_t583____nameHash_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(399);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t410 * tmp;
		tmp = (ObsoleteAttribute_t410 *)il2cpp_codegen_object_new (ObsoleteAttribute_t410_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2081(tmp, il2cpp_codegen_string_new_wrapper("Use AnimatorStateInfo.fullPathHash instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t699_il2cpp_TypeInfo_var;
void Animator_t36_CustomAttributesCacheGenerator_Animator_Play_m301(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1116);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t699 * tmp;
		tmp = (ExcludeFromDocsAttribute_t699 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t699_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3492(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t698_il2cpp_TypeInfo_var;
void Animator_t36_CustomAttributesCacheGenerator_Animator_t36_Animator_Play_m3008_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t698 * tmp;
		tmp = (DefaultValueAttribute_t698 *)il2cpp_codegen_object_new (DefaultValueAttribute_t698_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3488(tmp, il2cpp_codegen_string_new_wrapper("-1"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t698_il2cpp_TypeInfo_var;
void Animator_t36_CustomAttributesCacheGenerator_Animator_t36_Animator_Play_m3008_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t698 * tmp;
		tmp = (DefaultValueAttribute_t698 *)il2cpp_codegen_object_new (DefaultValueAttribute_t698_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3488(tmp, il2cpp_codegen_string_new_wrapper("float.NegativeInfinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Animator_t36_CustomAttributesCacheGenerator_Animator_Play_m3009(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t698_il2cpp_TypeInfo_var;
void Animator_t36_CustomAttributesCacheGenerator_Animator_t36_Animator_Play_m3009_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t698 * tmp;
		tmp = (DefaultValueAttribute_t698 *)il2cpp_codegen_object_new (DefaultValueAttribute_t698_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3488(tmp, il2cpp_codegen_string_new_wrapper("-1"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t698_il2cpp_TypeInfo_var;
void Animator_t36_CustomAttributesCacheGenerator_Animator_t36_Animator_Play_m3009_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t698 * tmp;
		tmp = (DefaultValueAttribute_t698 *)il2cpp_codegen_object_new (DefaultValueAttribute_t698_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3488(tmp, il2cpp_codegen_string_new_wrapper("float.NegativeInfinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Animator_t36_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m1971(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Animator_t36_CustomAttributesCacheGenerator_Animator_StringToHash_m3010(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Animator_t36_CustomAttributesCacheGenerator_Animator_SetFloatString_m3011(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Animator_t36_CustomAttributesCacheGenerator_Animator_SetBoolString_m3012(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Animator_t36_CustomAttributesCacheGenerator_Animator_GetBoolString_m3013(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Animator_t36_CustomAttributesCacheGenerator_Animator_SetTriggerString_m3014(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Animator_t36_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m3015(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void TextMesh_t96_CustomAttributesCacheGenerator_TextMesh_set_text_m324(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t410_il2cpp_TypeInfo_var;
void CharacterInfo_t592_CustomAttributesCacheGenerator_uv(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(399);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t410 * tmp;
		tmp = (ObsoleteAttribute_t410 *)il2cpp_codegen_object_new (ObsoleteAttribute_t410_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2081(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t410_il2cpp_TypeInfo_var;
void CharacterInfo_t592_CustomAttributesCacheGenerator_vert(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(399);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t410 * tmp;
		tmp = (ObsoleteAttribute_t410 *)il2cpp_codegen_object_new (ObsoleteAttribute_t410_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2081(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t410_il2cpp_TypeInfo_var;
void CharacterInfo_t592_CustomAttributesCacheGenerator_width(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(399);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t410 * tmp;
		tmp = (ObsoleteAttribute_t410 *)il2cpp_codegen_object_new (ObsoleteAttribute_t410_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2081(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.width is deprecated. Use advance instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t410_il2cpp_TypeInfo_var;
void CharacterInfo_t592_CustomAttributesCacheGenerator_flipped(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(399);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t410 * tmp;
		tmp = (ObsoleteAttribute_t410 *)il2cpp_codegen_object_new (ObsoleteAttribute_t410_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2081(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Font_t186_CustomAttributesCacheGenerator_Font_get_material_m1984(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Font_t186_CustomAttributesCacheGenerator_Font_HasCharacter_m1858(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Font_t186_CustomAttributesCacheGenerator_Font_get_dynamic_m1987(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Font_t186_CustomAttributesCacheGenerator_Font_get_fontSize_m1989(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t801_il2cpp_TypeInfo_var;
void FontTextureRebuildCallback_t593_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t801_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1118);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t801 * tmp;
		tmp = (EditorBrowsableAttribute_t801 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t801_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m3664(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void TextGenerator_t100_CustomAttributesCacheGenerator_TextGenerator_Init_m3043(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void TextGenerator_t100_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m3044(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void TextGenerator_t100_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3047(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void TextGenerator_t100_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m1873(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void TextGenerator_t100_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m3048(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void TextGenerator_t100_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m3049(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void TextGenerator_t100_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m3050(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void TextGenerator_t100_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m3051(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void TextGenerator_t100_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m3052(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void TextGenerator_t100_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m3053(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void TextGenerator_t100_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m332(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void TextGenerator_t100_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m3054(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void TextGenerator_t100_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m3055(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void TextGenerator_t100_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m1896(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Canvas_t195_CustomAttributesCacheGenerator_Canvas_get_renderMode_m1741(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Canvas_t195_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m2005(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Canvas_t195_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m1755(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Canvas_t195_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m1988(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Canvas_t195_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m2009(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Canvas_t195_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m1774(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Canvas_t195_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m2010(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Canvas_t195_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m1726(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Canvas_t195_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m1743(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Canvas_t195_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m1742(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Canvas_t195_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m1754(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Canvas_t195_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m1707(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void Canvas_t195_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m1983(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void CanvasGroup_t30_CustomAttributesCacheGenerator_CanvasGroup_set_alpha_m264(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void CanvasGroup_t30_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m1961(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void CanvasGroup_t30_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m3067(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void CanvasGroup_t30_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m1725(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void CanvasRenderer_t194_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m3070(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void CanvasRenderer_t194_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m1729(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void CanvasRenderer_t194_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m2041(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void CanvasRenderer_t194_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m1719(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void CanvasRenderer_t194_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m3071(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void CanvasRenderer_t194_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m3072(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void CanvasRenderer_t194_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m1712(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void CanvasRenderer_t194_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m1708(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void RectTransformUtility_t359_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3074(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void RectTransformUtility_t359_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3076(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t644_il2cpp_TypeInfo_var;
void RectTransformUtility_t359_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m1728(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t644 * tmp;
		tmp = (WrapperlessIcall_t644 *)il2cpp_codegen_object_new (WrapperlessIcall_t644_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3310(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void Request_t597_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void Request_t597_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void Request_t597_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void Request_t597_CustomAttributesCacheGenerator_Request_get_sourceId_m3081(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void Request_t597_CustomAttributesCacheGenerator_Request_get_appId_m3082(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void Request_t597_CustomAttributesCacheGenerator_Request_get_domain_m3083(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void Response_t599_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void Response_t599_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void Response_t599_CustomAttributesCacheGenerator_Response_get_success_m3092(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void Response_t599_CustomAttributesCacheGenerator_Response_set_success_m3093(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void Response_t599_CustomAttributesCacheGenerator_Response_get_extendedInfo_m3094(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void Response_t599_CustomAttributesCacheGenerator_Response_set_extendedInfo_m3095(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void CreateMatchRequest_t602_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void CreateMatchRequest_t602_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void CreateMatchRequest_t602_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void CreateMatchRequest_t602_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void CreateMatchRequest_t602_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void CreateMatchRequest_t602_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m3100(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void CreateMatchRequest_t602_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m3101(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void CreateMatchRequest_t602_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m3102(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void CreateMatchRequest_t602_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m3103(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void CreateMatchRequest_t602_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m3104(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void CreateMatchRequest_t602_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m3105(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void CreateMatchRequest_t602_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m3106(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void CreateMatchRequest_t602_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m3107(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void CreateMatchRequest_t602_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m3108(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void CreateMatchResponse_t603_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void CreateMatchResponse_t603_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void CreateMatchResponse_t603_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void CreateMatchResponse_t603_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void CreateMatchResponse_t603_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void CreateMatchResponse_t603_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void CreateMatchResponse_t603_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m3111(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void CreateMatchResponse_t603_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m3112(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void CreateMatchResponse_t603_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m3113(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void CreateMatchResponse_t603_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m3114(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void CreateMatchResponse_t603_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m3115(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void CreateMatchResponse_t603_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m3116(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void CreateMatchResponse_t603_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m3117(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void CreateMatchResponse_t603_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m3118(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void CreateMatchResponse_t603_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m3119(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void CreateMatchResponse_t603_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m3120(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void CreateMatchResponse_t603_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m3121(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void CreateMatchResponse_t603_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m3122(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void JoinMatchRequest_t604_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void JoinMatchRequest_t604_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void JoinMatchRequest_t604_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m3126(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void JoinMatchRequest_t604_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m3127(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void JoinMatchRequest_t604_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m3128(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void JoinMatchRequest_t604_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m3129(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void JoinMatchResponse_t605_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void JoinMatchResponse_t605_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void JoinMatchResponse_t605_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void JoinMatchResponse_t605_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void JoinMatchResponse_t605_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void JoinMatchResponse_t605_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void JoinMatchResponse_t605_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m3132(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void JoinMatchResponse_t605_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m3133(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void JoinMatchResponse_t605_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m3134(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void JoinMatchResponse_t605_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m3135(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void JoinMatchResponse_t605_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m3136(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void JoinMatchResponse_t605_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m3137(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void JoinMatchResponse_t605_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m3138(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void JoinMatchResponse_t605_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m3139(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void JoinMatchResponse_t605_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m3140(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void JoinMatchResponse_t605_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m3141(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void JoinMatchResponse_t605_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m3142(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void JoinMatchResponse_t605_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m3143(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t606_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t606_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m3147(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t606_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m3148(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void DropConnectionRequest_t607_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void DropConnectionRequest_t607_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void DropConnectionRequest_t607_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m3151(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void DropConnectionRequest_t607_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m3152(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void DropConnectionRequest_t607_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m3153(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void DropConnectionRequest_t607_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m3154(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void ListMatchRequest_t608_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void ListMatchRequest_t608_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void ListMatchRequest_t608_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void ListMatchRequest_t608_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void ListMatchRequest_t608_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void ListMatchRequest_t608_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m3157(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void ListMatchRequest_t608_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m3158(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void ListMatchRequest_t608_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m3159(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void ListMatchRequest_t608_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m3160(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void ListMatchRequest_t608_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m3161(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void ListMatchRequest_t608_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m3162(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void ListMatchRequest_t608_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m3163(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void ListMatchRequest_t608_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m3164(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t609_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t609_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t609_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t609_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m3167(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t609_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m3168(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t609_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m3169(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t609_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m3170(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t609_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m3171(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t609_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m3172(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void MatchDesc_t611_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void MatchDesc_t611_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void MatchDesc_t611_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void MatchDesc_t611_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void MatchDesc_t611_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void MatchDesc_t611_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void MatchDesc_t611_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void MatchDesc_t611_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void MatchDesc_t611_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void MatchDesc_t611_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m3176(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void MatchDesc_t611_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m3177(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void MatchDesc_t611_CustomAttributesCacheGenerator_MatchDesc_get_name_m3178(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void MatchDesc_t611_CustomAttributesCacheGenerator_MatchDesc_set_name_m3179(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void MatchDesc_t611_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m3180(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void MatchDesc_t611_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m3181(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void MatchDesc_t611_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m3182(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void MatchDesc_t611_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m3183(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void MatchDesc_t611_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m3184(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void MatchDesc_t611_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m3185(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void MatchDesc_t611_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m3186(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void MatchDesc_t611_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m3187(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void MatchDesc_t611_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m3188(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void MatchDesc_t611_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m3189(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void MatchDesc_t611_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m3190(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void ListMatchResponse_t613_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void ListMatchResponse_t613_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m3194(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void ListMatchResponse_t613_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m3195(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.DefaultValueAttribute
#include "System_System_ComponentModel_DefaultValueAttribute.h"
// System.ComponentModel.DefaultValueAttribute
#include "System_System_ComponentModel_DefaultValueAttributeMethodDeclarations.h"
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
extern TypeInfo* DefaultValueAttribute_t804_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t614_il2cpp_TypeInfo_var;
void AppID_t614_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1120);
		AppID_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(993);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t804 * tmp;
		tmp = (DefaultValueAttribute_t804 *)il2cpp_codegen_object_new (DefaultValueAttribute_t804_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3681(tmp, Box(AppID_t614_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
extern TypeInfo* DefaultValueAttribute_t804_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t615_il2cpp_TypeInfo_var;
void SourceID_t615_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1120);
		SourceID_t615_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(992);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t804 * tmp;
		tmp = (DefaultValueAttribute_t804 *)il2cpp_codegen_object_new (DefaultValueAttribute_t804_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3681(tmp, Box(SourceID_t615_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern TypeInfo* DefaultValueAttribute_t804_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t616_il2cpp_TypeInfo_var;
void NetworkID_t616_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1120);
		NetworkID_t616_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(997);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t804 * tmp;
		tmp = (DefaultValueAttribute_t804 *)il2cpp_codegen_object_new (DefaultValueAttribute_t804_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3681(tmp, Box(NetworkID_t616_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo* DefaultValueAttribute_t804_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t617_il2cpp_TypeInfo_var;
void NodeID_t617_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1120);
		NodeID_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(998);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint16_t _tmp_0 = 0;
		DefaultValueAttribute_t804 * tmp;
		tmp = (DefaultValueAttribute_t804 *)il2cpp_codegen_object_new (DefaultValueAttribute_t804_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3681(tmp, Box(NodeID_t617_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttributeMethodDeclarations.h"
extern TypeInfo* DebuggerHiddenAttribute_t106_il2cpp_TypeInfo_var;
void NetworkMatch_t623_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m3682(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t106 * tmp;
		tmp = (DebuggerHiddenAttribute_t106 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t106_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t806_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t106_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t806_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3688(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t106 * tmp;
		tmp = (DebuggerHiddenAttribute_t106 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t106_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t106_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t806_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m3689(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t106 * tmp;
		tmp = (DebuggerHiddenAttribute_t106 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t106_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t106_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t806_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m3691(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t106 * tmp;
		tmp = (DebuggerHiddenAttribute_t106 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t106_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m354(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.CodeDom.Compiler.GeneratedCodeAttribute
#include "System_System_CodeDom_Compiler_GeneratedCodeAttribute.h"
// System.CodeDom.Compiler.GeneratedCodeAttribute
#include "System_System_CodeDom_Compiler_GeneratedCodeAttributeMethodDeclarations.h"
extern TypeInfo* GeneratedCodeAttribute_t807_il2cpp_TypeInfo_var;
extern TypeInfo* EditorBrowsableAttribute_t801_il2cpp_TypeInfo_var;
void JsonArray_t624_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t807_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1121);
		EditorBrowsableAttribute_t801_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1118);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t807 * tmp;
		tmp = (GeneratedCodeAttribute_t807 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t807_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m3692(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		EditorBrowsableAttribute_t801 * tmp;
		tmp = (EditorBrowsableAttribute_t801 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t801_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m3664(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t801_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t807_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultMemberAttribute_t425_il2cpp_TypeInfo_var;
void JsonObject_t626_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t801_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1118);
		GeneratedCodeAttribute_t807_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1121);
		DefaultMemberAttribute_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(409);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t801 * tmp;
		tmp = (EditorBrowsableAttribute_t801 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t801_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m3664(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t807 * tmp;
		tmp = (GeneratedCodeAttribute_t807 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t807_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m3692(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		DefaultMemberAttribute_t425 * tmp;
		tmp = (DefaultMemberAttribute_t425 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t425_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m2146(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t807_il2cpp_TypeInfo_var;
void SimpleJson_t629_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t807_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1121);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t807 * tmp;
		tmp = (GeneratedCodeAttribute_t807 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t807_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m3692(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttr.h"
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttrMethodDeclarations.h"
extern TypeInfo* SuppressMessageAttribute_t808_il2cpp_TypeInfo_var;
void SimpleJson_t629_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m3239(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1122);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t808 * tmp;
		tmp = (SuppressMessageAttribute_t808 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t808_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m3693(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m3694(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t808_il2cpp_TypeInfo_var;
void SimpleJson_t629_CustomAttributesCacheGenerator_SimpleJson_NextToken_m3251(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1122);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t808 * tmp;
		tmp = (SuppressMessageAttribute_t808 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t808_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m3693(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Maintainability"), il2cpp_codegen_string_new_wrapper("CA1502:AvoidExcessiveComplexity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t801_il2cpp_TypeInfo_var;
void SimpleJson_t629_CustomAttributesCacheGenerator_SimpleJson_t629____PocoJsonSerializerStrategy_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t801_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1118);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t801 * tmp;
		tmp = (EditorBrowsableAttribute_t801 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t801_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m3664(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t807_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t627_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t807_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1121);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t807 * tmp;
		tmp = (GeneratedCodeAttribute_t807 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t807_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m3692(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t808_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t627_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m3695(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1122);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t808 * tmp;
		tmp = (SuppressMessageAttribute_t808 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t808_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m3693(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m3694(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t807_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t628_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t807_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1121);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t807 * tmp;
		tmp = (GeneratedCodeAttribute_t807 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t807_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m3692(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t808_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t628_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m3268(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1122);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t808 * tmp;
		tmp = (SuppressMessageAttribute_t808 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t808_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m3693(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m3694(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t808_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t628_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m3269(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1122);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t808 * tmp;
		tmp = (SuppressMessageAttribute_t808 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t808_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m3693(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m3694(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t807_il2cpp_TypeInfo_var;
void ReflectionUtils_t643_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t807_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1121);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t807 * tmp;
		tmp = (GeneratedCodeAttribute_t807 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t807_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m3692(tmp, il2cpp_codegen_string_new_wrapper("reflection-utils"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t419_il2cpp_TypeInfo_var;
void ReflectionUtils_t643_CustomAttributesCacheGenerator_ReflectionUtils_t643_ReflectionUtils_GetConstructorInfo_m3294_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t419_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t419 * tmp;
		tmp = (ParamArrayAttribute_t419 *)il2cpp_codegen_object_new (ParamArrayAttribute_t419_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2122(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t419_il2cpp_TypeInfo_var;
void ReflectionUtils_t643_CustomAttributesCacheGenerator_ReflectionUtils_t643_ReflectionUtils_GetContructor_m3299_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t419_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t419 * tmp;
		tmp = (ParamArrayAttribute_t419 *)il2cpp_codegen_object_new (ParamArrayAttribute_t419_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2122(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t419_il2cpp_TypeInfo_var;
void ReflectionUtils_t643_CustomAttributesCacheGenerator_ReflectionUtils_t643_ReflectionUtils_GetConstructorByReflection_m3301_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t419_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t419 * tmp;
		tmp = (ParamArrayAttribute_t419 *)il2cpp_codegen_object_new (ParamArrayAttribute_t419_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2122(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t425_il2cpp_TypeInfo_var;
void ThreadSafeDictionary_2_t809_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(409);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t425 * tmp;
		tmp = (DefaultMemberAttribute_t425 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t425_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m2146(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t419_il2cpp_TypeInfo_var;
void ConstructorDelegate_t636_CustomAttributesCacheGenerator_ConstructorDelegate_t636_ConstructorDelegate_Invoke_m3279_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t419_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t419 * tmp;
		tmp = (ParamArrayAttribute_t419 *)il2cpp_codegen_object_new (ParamArrayAttribute_t419_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2122(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t419_il2cpp_TypeInfo_var;
void ConstructorDelegate_t636_CustomAttributesCacheGenerator_ConstructorDelegate_t636_ConstructorDelegate_BeginInvoke_m3280_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t419_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t419 * tmp;
		tmp = (ParamArrayAttribute_t419 *)il2cpp_codegen_object_new (ParamArrayAttribute_t419_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2122(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void U3CGetConstructorByReflectionU3Ec__AnonStorey1_t638_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t639_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t640_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t641_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t642_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.AttributeUsageAttribute
#include "mscorlib_System_AttributeUsageAttribute.h"
// System.AttributeUsageAttribute
#include "mscorlib_System_AttributeUsageAttributeMethodDeclarations.h"
extern TypeInfo* AttributeUsageAttribute_t811_il2cpp_TypeInfo_var;
void IL2CPPStructAlignmentAttribute_t645_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t811_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1123);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t811 * tmp;
		tmp = (AttributeUsageAttribute_t811 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t811_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3719(tmp, 8, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t811_il2cpp_TypeInfo_var;
void DisallowMultipleComponent_t418_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t811_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1123);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t811 * tmp;
		tmp = (AttributeUsageAttribute_t811 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t811_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3719(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m3720(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t811_il2cpp_TypeInfo_var;
void RequireComponent_t412_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t811_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1123);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t811 * tmp;
		tmp = (AttributeUsageAttribute_t811 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t811_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3719(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m3721(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t811_il2cpp_TypeInfo_var;
void WritableAttribute_t651_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t811_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1123);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t811 * tmp;
		tmp = (AttributeUsageAttribute_t811 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t811_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3719(tmp, 2048, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m3721(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t811_il2cpp_TypeInfo_var;
void AssemblyIsEditorAssembly_t652_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t811_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1123);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t811 * tmp;
		tmp = (AttributeUsageAttribute_t811 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t811_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3719(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void Achievement_t664_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void Achievement_t664_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void Achievement_t664_CustomAttributesCacheGenerator_Achievement_get_id_m3353(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void Achievement_t664_CustomAttributesCacheGenerator_Achievement_set_id_m3354(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void Achievement_t664_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m3355(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void Achievement_t664_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m3356(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void AchievementDescription_t665_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void AchievementDescription_t665_CustomAttributesCacheGenerator_AchievementDescription_get_id_m3363(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void AchievementDescription_t665_CustomAttributesCacheGenerator_AchievementDescription_set_id_m3364(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void Score_t666_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void Score_t666_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void Score_t666_CustomAttributesCacheGenerator_Score_get_leaderboardID_m3373(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void Score_t666_CustomAttributesCacheGenerator_Score_set_leaderboardID_m3374(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void Score_t666_CustomAttributesCacheGenerator_Score_get_value_m3375(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void Score_t666_CustomAttributesCacheGenerator_Score_set_value_m3376(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void Leaderboard_t495_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void Leaderboard_t495_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void Leaderboard_t495_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void Leaderboard_t495_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void Leaderboard_t495_CustomAttributesCacheGenerator_Leaderboard_get_id_m3387(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void Leaderboard_t495_CustomAttributesCacheGenerator_Leaderboard_set_id_m3388(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void Leaderboard_t495_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m3389(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void Leaderboard_t495_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m3390(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void Leaderboard_t495_CustomAttributesCacheGenerator_Leaderboard_get_range_m3391(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void Leaderboard_t495_CustomAttributesCacheGenerator_Leaderboard_set_range_m3392(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void Leaderboard_t495_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m3393(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void Leaderboard_t495_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m3394(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t105 * tmp;
		tmp = (CompilerGeneratedAttribute_t105 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m353(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t811_il2cpp_TypeInfo_var;
void PropertyAttribute_t678_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t811_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1123);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t811 * tmp;
		tmp = (AttributeUsageAttribute_t811 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t811_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3719(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m3720(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m3721(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t811_il2cpp_TypeInfo_var;
void TooltipAttribute_t422_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t811_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1123);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t811 * tmp;
		tmp = (AttributeUsageAttribute_t811 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t811_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3719(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m3720(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m3721(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t811_il2cpp_TypeInfo_var;
void SpaceAttribute_t420_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t811_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1123);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t811 * tmp;
		tmp = (AttributeUsageAttribute_t811 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t811_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3719(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m3720(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m3721(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t811_il2cpp_TypeInfo_var;
void RangeAttribute_t416_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t811_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1123);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t811 * tmp;
		tmp = (AttributeUsageAttribute_t811 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t811_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3719(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m3720(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m3721(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t811_il2cpp_TypeInfo_var;
void TextAreaAttribute_t423_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t811_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1123);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t811 * tmp;
		tmp = (AttributeUsageAttribute_t811 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t811_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3719(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m3720(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m3721(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t811_il2cpp_TypeInfo_var;
void SelectionBaseAttribute_t421_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t811_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1123);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t811 * tmp;
		tmp = (AttributeUsageAttribute_t811 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t811_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3719(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m3720(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m3721(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t802_il2cpp_TypeInfo_var;
void StackTraceUtility_t680_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m3410(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t802 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t802 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t802_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m3669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t802_il2cpp_TypeInfo_var;
void StackTraceUtility_t680_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m3413(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t802 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t802 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t802_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m3669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t802_il2cpp_TypeInfo_var;
void StackTraceUtility_t680_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m3415(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t802 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t802 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t802_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m3669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t811_il2cpp_TypeInfo_var;
void SharedBetweenAnimatorsAttribute_t681_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t811_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1123);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t811 * tmp;
		tmp = (AttributeUsageAttribute_t811 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t811_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3719(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m3721(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t408_il2cpp_TypeInfo_var;
void ArgumentCache_t687_CustomAttributesCacheGenerator_m_ObjectArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		FormerlySerializedAsAttribute_t408_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t408 * tmp;
		tmp = (FormerlySerializedAsAttribute_t408 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t408_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2079(tmp, il2cpp_codegen_string_new_wrapper("objectArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t408_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void ArgumentCache_t687_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t408_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t408 * tmp;
		tmp = (FormerlySerializedAsAttribute_t408 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t408_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2079(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t408_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void ArgumentCache_t687_CustomAttributesCacheGenerator_m_IntArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t408_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t408 * tmp;
		tmp = (FormerlySerializedAsAttribute_t408 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t408_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2079(tmp, il2cpp_codegen_string_new_wrapper("intArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t408_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void ArgumentCache_t687_CustomAttributesCacheGenerator_m_FloatArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t408_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t408 * tmp;
		tmp = (FormerlySerializedAsAttribute_t408 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t408_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2079(tmp, il2cpp_codegen_string_new_wrapper("floatArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t408_il2cpp_TypeInfo_var;
void ArgumentCache_t687_CustomAttributesCacheGenerator_m_StringArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		FormerlySerializedAsAttribute_t408_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t408 * tmp;
		tmp = (FormerlySerializedAsAttribute_t408 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t408_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2079(tmp, il2cpp_codegen_string_new_wrapper("stringArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void ArgumentCache_t687_CustomAttributesCacheGenerator_m_BoolArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t408_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void PersistentCall_t691_CustomAttributesCacheGenerator_m_Target(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t408_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t408 * tmp;
		tmp = (FormerlySerializedAsAttribute_t408 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t408_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2079(tmp, il2cpp_codegen_string_new_wrapper("instance"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t408_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void PersistentCall_t691_CustomAttributesCacheGenerator_m_MethodName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t408_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t408 * tmp;
		tmp = (FormerlySerializedAsAttribute_t408 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t408_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2079(tmp, il2cpp_codegen_string_new_wrapper("methodName"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t408_il2cpp_TypeInfo_var;
void PersistentCall_t691_CustomAttributesCacheGenerator_m_Mode(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		FormerlySerializedAsAttribute_t408_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t408 * tmp;
		tmp = (FormerlySerializedAsAttribute_t408 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t408_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2079(tmp, il2cpp_codegen_string_new_wrapper("mode"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t408_il2cpp_TypeInfo_var;
void PersistentCall_t691_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		FormerlySerializedAsAttribute_t408_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t408 * tmp;
		tmp = (FormerlySerializedAsAttribute_t408 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t408_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2079(tmp, il2cpp_codegen_string_new_wrapper("arguments"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t408_il2cpp_TypeInfo_var;
void PersistentCall_t691_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		FormerlySerializedAsAttribute_t408_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t408 * tmp;
		tmp = (FormerlySerializedAsAttribute_t408 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t408_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2079(tmp, il2cpp_codegen_string_new_wrapper("enabled"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t408 * tmp;
		tmp = (FormerlySerializedAsAttribute_t408 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t408_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2079(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t408_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void PersistentCallGroup_t693_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t408_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t408 * tmp;
		tmp = (FormerlySerializedAsAttribute_t408 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t408_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2079(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t408_il2cpp_TypeInfo_var;
void UnityEventBase_t696_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		FormerlySerializedAsAttribute_t408_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t408 * tmp;
		tmp = (FormerlySerializedAsAttribute_t408 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t408_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2079(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t409_il2cpp_TypeInfo_var;
void UnityEventBase_t696_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t409 * tmp;
		tmp = (SerializeField_t409 *)il2cpp_codegen_object_new (SerializeField_t409_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2080(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
extern TypeInfo* AddComponentMenu_t407_il2cpp_TypeInfo_var;
void UserAuthorizationDialog_t697_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AddComponentMenu_t407_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(396);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AddComponentMenu_t407 * tmp;
		tmp = (AddComponentMenu_t407 *)il2cpp_codegen_object_new (AddComponentMenu_t407_il2cpp_TypeInfo_var);
		AddComponentMenu__ctor_m2078(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t811_il2cpp_TypeInfo_var;
void DefaultValueAttribute_t698_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t811_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1123);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t811 * tmp;
		tmp = (AttributeUsageAttribute_t811 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t811_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3719(tmp, 18432, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t811_il2cpp_TypeInfo_var;
void ExcludeFromDocsAttribute_t699_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t811_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1123);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t811 * tmp;
		tmp = (AttributeUsageAttribute_t811 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t811_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3719(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t811_il2cpp_TypeInfo_var;
void FormerlySerializedAsAttribute_t408_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t811_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1123);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t811 * tmp;
		tmp = (AttributeUsageAttribute_t811 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t811_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3719(tmp, 256, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m3721(tmp, true, NULL);
		AttributeUsageAttribute_set_Inherited_m3720(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t811_il2cpp_TypeInfo_var;
void TypeInferenceRuleAttribute_t701_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t811_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1123);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t811 * tmp;
		tmp = (AttributeUsageAttribute_t811 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t811_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3719(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_UnityEngine_Assembly_AttributeGenerators[686] = 
{
	NULL,
	g_UnityEngine_Assembly_CustomAttributesCacheGenerator,
	AssetBundleCreateRequest_t477_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m2261,
	AssetBundleCreateRequest_t477_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m2262,
	AssetBundle_t479_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m2266,
	AssetBundle_t479_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m2267,
	AssetBundle_t479_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m2268,
	LayerMask_t171_CustomAttributesCacheGenerator_LayerMask_LayerToName_m2271,
	LayerMask_t171_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m2272,
	LayerMask_t171_CustomAttributesCacheGenerator_LayerMask_t171_LayerMask_GetMask_m2273_Arg0_ParameterInfo,
	RuntimePlatform_t482_CustomAttributesCacheGenerator_NaCl,
	RuntimePlatform_t482_CustomAttributesCacheGenerator_FlashPlayer,
	RuntimePlatform_t482_CustomAttributesCacheGenerator_MetroPlayerX86,
	RuntimePlatform_t482_CustomAttributesCacheGenerator_MetroPlayerX64,
	RuntimePlatform_t482_CustomAttributesCacheGenerator_MetroPlayerARM,
	SystemInfo_t484_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m2274,
	Coroutine_t234_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m2277,
	ScriptableObject_t6_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m2279,
	ScriptableObject_t6_CustomAttributesCacheGenerator_ScriptableObject_t6_ScriptableObject_Internal_CreateScriptableObject_m2279_Arg0_ParameterInfo,
	ScriptableObject_t6_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m2280,
	ScriptableObject_t6_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m2282,
	GameCenterPlatform_t494_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m2287,
	GameCenterPlatform_t494_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m2288,
	GameCenterPlatform_t494_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m2289,
	GameCenterPlatform_t494_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m2290,
	GameCenterPlatform_t494_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m2291,
	GameCenterPlatform_t494_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m2292,
	GameCenterPlatform_t494_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m2293,
	GameCenterPlatform_t494_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m2294,
	GameCenterPlatform_t494_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m2295,
	GameCenterPlatform_t494_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m2296,
	GameCenterPlatform_t494_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m2297,
	GameCenterPlatform_t494_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m2298,
	GameCenterPlatform_t494_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m2299,
	GameCenterPlatform_t494_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m2300,
	GameCenterPlatform_t494_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m2301,
	GameCenterPlatform_t494_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m2302,
	GameCenterPlatform_t494_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2303,
	GameCenterPlatform_t494_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2307,
	GcLeaderboard_t496_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m2351,
	GcLeaderboard_t496_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m2352,
	GcLeaderboard_t496_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m2353,
	GcLeaderboard_t496_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m2354,
	Renderer_t498_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m1663,
	Renderer_t498_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m1664,
	Screen_t499_CustomAttributesCacheGenerator_Screen_get_width_m217,
	Screen_t499_CustomAttributesCacheGenerator_Screen_get_height_m218,
	Screen_t499_CustomAttributesCacheGenerator_Screen_get_dpi_m2008,
	Texture_t239_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m2376,
	Texture_t239_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m2377,
	Texture2D_t191_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m2381,
	Texture2D_t191_CustomAttributesCacheGenerator_Texture2D_t191_Texture2D_Internal_Create_m2381_Arg0_ParameterInfo,
	Texture2D_t191_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m1711,
	Texture2D_t191_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m1802,
	RenderTexture_t500_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m2382,
	RenderTexture_t500_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m2383,
	GUILayer_t503_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m2387,
	Gradient_t506_CustomAttributesCacheGenerator_Gradient_Init_m2391,
	Gradient_t506_CustomAttributesCacheGenerator_Gradient_Cleanup_m2392,
	GUI_t511_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField,
	GUI_t511_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField,
	GUI_t511_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m2400,
	GUI_t511_CustomAttributesCacheGenerator_GUI_set_changed_m2403,
	GUILayoutUtility_t517_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m2416,
	GUILayoutUtility_t517_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m2418,
	GUIUtility_t524_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m2449,
	GUIUtility_t524_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m2450,
	GUIUtility_t524_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m2452,
	GUIUtility_t524_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m2454,
	GUIUtility_t524_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m2458,
	GUISettings_t525_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord,
	GUISettings_t525_CustomAttributesCacheGenerator_m_TripleClickSelectsLine,
	GUISettings_t525_CustomAttributesCacheGenerator_m_CursorColor,
	GUISettings_t525_CustomAttributesCacheGenerator_m_CursorFlashSpeed,
	GUISettings_t525_CustomAttributesCacheGenerator_m_SelectionColor,
	GUISkin_t509_CustomAttributesCacheGenerator,
	GUISkin_t509_CustomAttributesCacheGenerator_m_Font,
	GUISkin_t509_CustomAttributesCacheGenerator_m_box,
	GUISkin_t509_CustomAttributesCacheGenerator_m_button,
	GUISkin_t509_CustomAttributesCacheGenerator_m_toggle,
	GUISkin_t509_CustomAttributesCacheGenerator_m_label,
	GUISkin_t509_CustomAttributesCacheGenerator_m_textField,
	GUISkin_t509_CustomAttributesCacheGenerator_m_textArea,
	GUISkin_t509_CustomAttributesCacheGenerator_m_window,
	GUISkin_t509_CustomAttributesCacheGenerator_m_horizontalSlider,
	GUISkin_t509_CustomAttributesCacheGenerator_m_horizontalSliderThumb,
	GUISkin_t509_CustomAttributesCacheGenerator_m_verticalSlider,
	GUISkin_t509_CustomAttributesCacheGenerator_m_verticalSliderThumb,
	GUISkin_t509_CustomAttributesCacheGenerator_m_horizontalScrollbar,
	GUISkin_t509_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb,
	GUISkin_t509_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton,
	GUISkin_t509_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton,
	GUISkin_t509_CustomAttributesCacheGenerator_m_verticalScrollbar,
	GUISkin_t509_CustomAttributesCacheGenerator_m_verticalScrollbarThumb,
	GUISkin_t509_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton,
	GUISkin_t509_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton,
	GUISkin_t509_CustomAttributesCacheGenerator_m_ScrollView,
	GUISkin_t509_CustomAttributesCacheGenerator_m_CustomStyles,
	GUISkin_t509_CustomAttributesCacheGenerator_m_Settings,
	GUIContent_t370_CustomAttributesCacheGenerator_m_Text,
	GUIContent_t370_CustomAttributesCacheGenerator_m_Image,
	GUIContent_t370_CustomAttributesCacheGenerator_m_Tooltip,
	GUIStyleState_t529_CustomAttributesCacheGenerator_GUIStyleState_Init_m2525,
	GUIStyleState_t529_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m2526,
	GUIStyleState_t529_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m2527,
	GUIStyleState_t529_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m2528,
	RectOffset_t290_CustomAttributesCacheGenerator_RectOffset_Init_m2533,
	RectOffset_t290_CustomAttributesCacheGenerator_RectOffset_Cleanup_m2534,
	RectOffset_t290_CustomAttributesCacheGenerator_RectOffset_get_left_m2023,
	RectOffset_t290_CustomAttributesCacheGenerator_RectOffset_set_left_m2535,
	RectOffset_t290_CustomAttributesCacheGenerator_RectOffset_get_right_m2536,
	RectOffset_t290_CustomAttributesCacheGenerator_RectOffset_set_right_m2537,
	RectOffset_t290_CustomAttributesCacheGenerator_RectOffset_get_top_m2024,
	RectOffset_t290_CustomAttributesCacheGenerator_RectOffset_set_top_m2538,
	RectOffset_t290_CustomAttributesCacheGenerator_RectOffset_get_bottom_m2539,
	RectOffset_t290_CustomAttributesCacheGenerator_RectOffset_set_bottom_m2540,
	RectOffset_t290_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m2018,
	RectOffset_t290_CustomAttributesCacheGenerator_RectOffset_get_vertical_m2019,
	RectOffset_t290_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m2542,
	GUIStyle_t516_CustomAttributesCacheGenerator_GUIStyle_Init_m2547,
	GUIStyle_t516_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m2548,
	GUIStyle_t516_CustomAttributesCacheGenerator_GUIStyle_get_name_m2549,
	GUIStyle_t516_CustomAttributesCacheGenerator_GUIStyle_set_name_m2550,
	GUIStyle_t516_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m2552,
	GUIStyle_t516_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m2555,
	GUIStyle_t516_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m2556,
	GUIStyle_t516_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m2557,
	GUIStyle_t516_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m2558,
	GUIStyle_t516_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m2559,
	GUIStyle_t516_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m2560,
	GUIStyle_t516_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m2561,
	GUIStyle_t516_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m2562,
	GUIStyle_t516_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m2564,
	GUIStyle_t516_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m2568,
	GUIStyle_t516_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m2570,
	GUIStyle_t516_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m2572,
	TouchScreenKeyboard_t230_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m2575,
	TouchScreenKeyboard_t230_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m2577,
	TouchScreenKeyboard_t230_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m1908,
	TouchScreenKeyboard_t230_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m1909,
	TouchScreenKeyboard_t230_CustomAttributesCacheGenerator_TouchScreenKeyboard_t230_TouchScreenKeyboard_Open_m2578_Arg1_ParameterInfo,
	TouchScreenKeyboard_t230_CustomAttributesCacheGenerator_TouchScreenKeyboard_t230_TouchScreenKeyboard_Open_m2578_Arg2_ParameterInfo,
	TouchScreenKeyboard_t230_CustomAttributesCacheGenerator_TouchScreenKeyboard_t230_TouchScreenKeyboard_Open_m2578_Arg3_ParameterInfo,
	TouchScreenKeyboard_t230_CustomAttributesCacheGenerator_TouchScreenKeyboard_t230_TouchScreenKeyboard_Open_m2578_Arg4_ParameterInfo,
	TouchScreenKeyboard_t230_CustomAttributesCacheGenerator_TouchScreenKeyboard_t230_TouchScreenKeyboard_Open_m2578_Arg5_ParameterInfo,
	TouchScreenKeyboard_t230_CustomAttributesCacheGenerator_TouchScreenKeyboard_t230_TouchScreenKeyboard_Open_m2578_Arg6_ParameterInfo,
	TouchScreenKeyboard_t230_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m1832,
	TouchScreenKeyboard_t230_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m1833,
	TouchScreenKeyboard_t230_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m1907,
	TouchScreenKeyboard_t230_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m1831,
	TouchScreenKeyboard_t230_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m1906,
	TouchScreenKeyboard_t230_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m1846,
	TouchScreenKeyboard_t230_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m1843,
	Event_t235_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0,
	Event_t235_CustomAttributesCacheGenerator_Event_Init_m2579,
	Event_t235_CustomAttributesCacheGenerator_Event_Cleanup_m2581,
	Event_t235_CustomAttributesCacheGenerator_Event_get_rawType_m1859,
	Event_t235_CustomAttributesCacheGenerator_Event_get_type_m2582,
	Event_t235_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m2584,
	Event_t235_CustomAttributesCacheGenerator_Event_get_modifiers_m1855,
	Event_t235_CustomAttributesCacheGenerator_Event_get_character_m1857,
	Event_t235_CustomAttributesCacheGenerator_Event_get_commandName_m2585,
	Event_t235_CustomAttributesCacheGenerator_Event_get_keyCode_m1856,
	Event_t235_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m2587,
	Event_t235_CustomAttributesCacheGenerator_Event_PopEvent_m1860,
	EventModifiers_t534_CustomAttributesCacheGenerator,
	Gizmos_t535_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawLine_m2594,
	Gizmos_t535_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawCube_m2595,
	Gizmos_t535_CustomAttributesCacheGenerator_Gizmos_INTERNAL_set_color_m2596,
	Vector2_t35_CustomAttributesCacheGenerator,
	Vector3_t56_CustomAttributesCacheGenerator,
	Color_t39_CustomAttributesCacheGenerator,
	Color32_t339_CustomAttributesCacheGenerator,
	Quaternion_t97_CustomAttributesCacheGenerator,
	Quaternion_t97_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m2620,
	Matrix4x4_t379_CustomAttributesCacheGenerator,
	Matrix4x4_t379_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m2635,
	Matrix4x4_t379_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m2637,
	Matrix4x4_t379_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m2639,
	Matrix4x4_t379_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m2642,
	Matrix4x4_t379_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m2654,
	Matrix4x4_t379_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m2657,
	Matrix4x4_t379_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m2658,
	Bounds_t253_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m2675,
	Bounds_t253_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m2678,
	Bounds_t253_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m2681,
	Bounds_t253_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m2685,
	Vector4_t332_CustomAttributesCacheGenerator,
	Mathf_t67_CustomAttributesCacheGenerator_Mathf_t67_Mathf_SmoothDamp_m1933_Arg4_ParameterInfo,
	Mathf_t67_CustomAttributesCacheGenerator_Mathf_t67_Mathf_SmoothDamp_m1933_Arg5_ParameterInfo,
	DrivenTransformProperties_t537_CustomAttributesCacheGenerator,
	RectTransform_t193_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m2714,
	RectTransform_t193_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m2715,
	RectTransform_t193_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m2716,
	RectTransform_t193_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m2717,
	RectTransform_t193_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m2718,
	RectTransform_t193_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m2719,
	RectTransform_t193_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m2720,
	RectTransform_t193_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m2721,
	RectTransform_t193_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m2722,
	RectTransform_t193_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m2723,
	RectTransform_t193_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m2724,
	Resources_t541_CustomAttributesCacheGenerator_Resources_Load_m2730,
	SerializePrivateVariables_t542_CustomAttributesCacheGenerator,
	Shader_t544_CustomAttributesCacheGenerator_Shader_PropertyToID_m2732,
	Material_t190_CustomAttributesCacheGenerator_Material_GetTexture_m2734,
	Material_t190_CustomAttributesCacheGenerator_Material_SetFloat_m2736,
	Material_t190_CustomAttributesCacheGenerator_Material_HasProperty_m2737,
	Material_t190_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m2738,
	Material_t190_CustomAttributesCacheGenerator_Material_t190_Material_Internal_CreateWithMaterial_m2738_Arg0_ParameterInfo,
	SphericalHarmonicsL2_t545_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t545_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m2741,
	SphericalHarmonicsL2_t545_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m2744,
	SphericalHarmonicsL2_t545_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m2747,
	Sprite_t7_CustomAttributesCacheGenerator_Sprite_get_rect_m1778,
	Sprite_t7_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m1773,
	Sprite_t7_CustomAttributesCacheGenerator_Sprite_get_texture_m1770,
	Sprite_t7_CustomAttributesCacheGenerator_Sprite_get_textureRect_m1799,
	Sprite_t7_CustomAttributesCacheGenerator_Sprite_get_border_m1771,
	SpriteRenderer_t60_CustomAttributesCacheGenerator_SpriteRenderer_INTERNAL_set_color_m2757,
	DataUtility_t546_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m1788,
	DataUtility_t546_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m1787,
	DataUtility_t546_CustomAttributesCacheGenerator_DataUtility_GetPadding_m1777,
	DataUtility_t546_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m2758,
	WWW_t547_CustomAttributesCacheGenerator_WWW_DestroyWWW_m2762,
	WWW_t547_CustomAttributesCacheGenerator_WWW_InitWWW_m2763,
	WWW_t547_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m2765,
	WWW_t547_CustomAttributesCacheGenerator_WWW_get_bytes_m2769,
	WWW_t547_CustomAttributesCacheGenerator_WWW_get_error_m2770,
	WWW_t547_CustomAttributesCacheGenerator_WWW_get_isDone_m2771,
	WWWForm_t551_CustomAttributesCacheGenerator_WWWForm_AddField_m2775,
	WWWForm_t551_CustomAttributesCacheGenerator_WWWForm_t551_WWWForm_AddField_m2776_Arg2_ParameterInfo,
	WWWTranscoder_t552_CustomAttributesCacheGenerator_WWWTranscoder_t552_WWWTranscoder_QPEncode_m2783_Arg1_ParameterInfo,
	WWWTranscoder_t552_CustomAttributesCacheGenerator_WWWTranscoder_t552_WWWTranscoder_SevenBitClean_m2786_Arg1_ParameterInfo,
	CacheIndex_t553_CustomAttributesCacheGenerator,
	UnityString_t554_CustomAttributesCacheGenerator_UnityString_t554_UnityString_Format_m2788_Arg1_ParameterInfo,
	AsyncOperation_t478_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m2790,
	Application_t556_CustomAttributesCacheGenerator_Application_get_loadedLevel_m230,
	Application_t556_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m2796,
	Application_t556_CustomAttributesCacheGenerator_Application_get_levelCount_m231,
	Application_t556_CustomAttributesCacheGenerator_Application_get_isPlaying_m1911,
	Application_t556_CustomAttributesCacheGenerator_Application_get_isEditor_m1914,
	Application_t556_CustomAttributesCacheGenerator_Application_get_platform_m1830,
	Behaviour_t393_CustomAttributesCacheGenerator_Behaviour_get_enabled_m1597,
	Behaviour_t393_CustomAttributesCacheGenerator_Behaviour_set_enabled_m283,
	Behaviour_t393_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m1598,
	Camera_t82_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m1656,
	Camera_t82_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m1655,
	Camera_t82_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m258,
	Camera_t82_CustomAttributesCacheGenerator_Camera_get_depth_m1559,
	Camera_t82_CustomAttributesCacheGenerator_Camera_get_cullingMask_m1667,
	Camera_t82_CustomAttributesCacheGenerator_Camera_get_eventMask_m2803,
	Camera_t82_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m2804,
	Camera_t82_CustomAttributesCacheGenerator_Camera_get_targetTexture_m2806,
	Camera_t82_CustomAttributesCacheGenerator_Camera_get_clearFlags_m2807,
	Camera_t82_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m2808,
	Camera_t82_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m2809,
	Camera_t82_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m2810,
	Camera_t82_CustomAttributesCacheGenerator_Camera_get_main_m257,
	Camera_t82_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m2811,
	Camera_t82_CustomAttributesCacheGenerator_Camera_GetAllCameras_m2812,
	Camera_t82_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m2817,
	Camera_t82_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m2819,
	CameraCallback_t557_CustomAttributesCacheGenerator,
	Debug_t558_CustomAttributesCacheGenerator_Debug_Internal_Log_m2820,
	Debug_t558_CustomAttributesCacheGenerator_Debug_t558_Debug_Internal_Log_m2820_Arg2_ParameterInfo,
	Debug_t558_CustomAttributesCacheGenerator_Debug_Internal_LogException_m2821,
	Debug_t558_CustomAttributesCacheGenerator_Debug_t558_Debug_Internal_LogException_m2821_Arg1_ParameterInfo,
	Display_t561_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m2848,
	Display_t561_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m2849,
	Display_t561_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m2850,
	Display_t561_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m2851,
	Display_t561_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m2852,
	Display_t561_CustomAttributesCacheGenerator_Display_SetParamsImpl_m2853,
	Display_t561_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m2854,
	Display_t561_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m2855,
	MonoBehaviour_t12_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m2856,
	MonoBehaviour_t12_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_m2857,
	MonoBehaviour_t12_CustomAttributesCacheGenerator_MonoBehaviour_t12_MonoBehaviour_StartCoroutine_m2857_Arg1_ParameterInfo,
	MonoBehaviour_t12_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_m336,
	MonoBehaviour_t12_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_m342,
	MonoBehaviour_t12_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m2859,
	MonoBehaviour_t12_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m2860,
	Input_t98_CustomAttributesCacheGenerator_Input_GetKeyDownString_m2862,
	Input_t98_CustomAttributesCacheGenerator_Input_GetAxisRaw_m1644,
	Input_t98_CustomAttributesCacheGenerator_Input_GetButtonDown_m1643,
	Input_t98_CustomAttributesCacheGenerator_Input_GetMouseButton_m1651,
	Input_t98_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m1613,
	Input_t98_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m1614,
	Input_t98_CustomAttributesCacheGenerator_Input_get_mousePosition_m1615,
	Input_t98_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m1616,
	Input_t98_CustomAttributesCacheGenerator_Input_get_mousePresent_m1642,
	Input_t98_CustomAttributesCacheGenerator_Input_GetTouch_m1650,
	Input_t98_CustomAttributesCacheGenerator_Input_get_touchCount_m341,
	Input_t98_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m1910,
	Input_t98_CustomAttributesCacheGenerator_Input_get_compositionString_m1834,
	Input_t98_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m2863,
	HideFlags_t564_CustomAttributesCacheGenerator,
	Object_t66_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m2865,
	Object_t66_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m2867,
	Object_t66_CustomAttributesCacheGenerator_Object_Destroy_m2868,
	Object_t66_CustomAttributesCacheGenerator_Object_t66_Object_Destroy_m2868_Arg1_ParameterInfo,
	Object_t66_CustomAttributesCacheGenerator_Object_Destroy_m284,
	Object_t66_CustomAttributesCacheGenerator_Object_DestroyImmediate_m2869,
	Object_t66_CustomAttributesCacheGenerator_Object_t66_Object_DestroyImmediate_m2869_Arg1_ParameterInfo,
	Object_t66_CustomAttributesCacheGenerator_Object_DestroyImmediate_m1913,
	Object_t66_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m2870,
	Object_t66_CustomAttributesCacheGenerator_Object_get_name_m343,
	Object_t66_CustomAttributesCacheGenerator_Object_set_name_m1980,
	Object_t66_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m2871,
	Object_t66_CustomAttributesCacheGenerator_Object_set_hideFlags_m1875,
	Object_t66_CustomAttributesCacheGenerator_Object_ToString_m362,
	Object_t66_CustomAttributesCacheGenerator_Object_Instantiate_m322,
	Object_t66_CustomAttributesCacheGenerator_Object_FindObjectOfType_m2877,
	Component_t61_CustomAttributesCacheGenerator_Component_get_transform_m190,
	Component_t61_CustomAttributesCacheGenerator_Component_get_gameObject_m237,
	Component_t61_CustomAttributesCacheGenerator_Component_GetComponent_m2031,
	Component_t61_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m2879,
	Component_t61_CustomAttributesCacheGenerator_Component_GetComponent_m3668,
	Component_t61_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m2880,
	GameObject_t24_CustomAttributesCacheGenerator_GameObject_GetComponent_m2882,
	GameObject_t24_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m2883,
	GameObject_t24_CustomAttributesCacheGenerator_GameObject_GetComponent_m3673,
	GameObject_t24_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m2884,
	GameObject_t24_CustomAttributesCacheGenerator_GameObject_get_transform_m261,
	GameObject_t24_CustomAttributesCacheGenerator_GameObject_get_layer_m1878,
	GameObject_t24_CustomAttributesCacheGenerator_GameObject_set_layer_m1879,
	GameObject_t24_CustomAttributesCacheGenerator_GameObject_SetActive_m338,
	GameObject_t24_CustomAttributesCacheGenerator_GameObject_get_activeSelf_m337,
	GameObject_t24_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m1599,
	GameObject_t24_CustomAttributesCacheGenerator_GameObject_get_tag_m316,
	GameObject_t24_CustomAttributesCacheGenerator_GameObject_CompareTag_m238,
	GameObject_t24_CustomAttributesCacheGenerator_GameObject_FindGameObjectsWithTag_m270,
	GameObject_t24_CustomAttributesCacheGenerator_GameObject_SendMessage_m2885,
	GameObject_t24_CustomAttributesCacheGenerator_GameObject_t24_GameObject_SendMessage_m2885_Arg1_ParameterInfo,
	GameObject_t24_CustomAttributesCacheGenerator_GameObject_t24_GameObject_SendMessage_m2885_Arg2_ParameterInfo,
	GameObject_t24_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m2886,
	GameObject_t24_CustomAttributesCacheGenerator_GameObject_AddComponent_m2887,
	GameObject_t24_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m2888,
	GameObject_t24_CustomAttributesCacheGenerator_GameObject_t24_GameObject_Internal_CreateGameObject_m2888_Arg0_ParameterInfo,
	GameObject_t24_CustomAttributesCacheGenerator_GameObject_Find_m212,
	Transform_t65_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m2892,
	Transform_t65_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m2893,
	Transform_t65_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m2894,
	Transform_t65_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m2895,
	Transform_t65_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m2896,
	Transform_t65_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m2897,
	Transform_t65_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m2898,
	Transform_t65_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m2899,
	Transform_t65_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m2900,
	Transform_t65_CustomAttributesCacheGenerator_Transform_get_parentInternal_m2901,
	Transform_t65_CustomAttributesCacheGenerator_Transform_set_parentInternal_m2902,
	Transform_t65_CustomAttributesCacheGenerator_Transform_SetParent_m2903,
	Transform_t65_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m2904,
	Transform_t65_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m2905,
	Transform_t65_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m2906,
	Transform_t65_CustomAttributesCacheGenerator_Transform_get_childCount_m262,
	Transform_t65_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m1877,
	Transform_t65_CustomAttributesCacheGenerator_Transform_GetChild_m2030,
	Time_t566_CustomAttributesCacheGenerator_Time_get_deltaTime_m282,
	Time_t566_CustomAttributesCacheGenerator_Time_get_unscaledTime_m1646,
	Time_t566_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m1680,
	Time_t566_CustomAttributesCacheGenerator_Time_get_timeScale_m347,
	Time_t566_CustomAttributesCacheGenerator_Time_set_timeScale_m263,
	Random_t567_CustomAttributesCacheGenerator_Random_RandomRangeInt_m2908,
	PlayerPrefs_t569_CustomAttributesCacheGenerator_PlayerPrefs_TrySetInt_m2911,
	PlayerPrefs_t569_CustomAttributesCacheGenerator_PlayerPrefs_GetInt_m220,
	PlayerPrefs_t569_CustomAttributesCacheGenerator_PlayerPrefs_t569_PlayerPrefs_GetInt_m220_Arg1_ParameterInfo,
	PlayerPrefs_t569_CustomAttributesCacheGenerator_PlayerPrefs_GetInt_m228,
	PlayerPrefs_t569_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m2912,
	PlayerPrefs_t569_CustomAttributesCacheGenerator_PlayerPrefs_t569_PlayerPrefs_GetString_m2912_Arg1_ParameterInfo,
	PlayerPrefs_t569_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m2913,
	PlayerPrefs_t569_CustomAttributesCacheGenerator_PlayerPrefs_DeleteAll_m326,
	Physics_t571_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m2931,
	Physics_t571_CustomAttributesCacheGenerator_Physics_t571_Physics_Raycast_m2932_Arg3_ParameterInfo,
	Physics_t571_CustomAttributesCacheGenerator_Physics_t571_Physics_Raycast_m2932_Arg4_ParameterInfo,
	Physics_t571_CustomAttributesCacheGenerator_Physics_t571_Physics_Raycast_m1745_Arg2_ParameterInfo,
	Physics_t571_CustomAttributesCacheGenerator_Physics_t571_Physics_Raycast_m1745_Arg3_ParameterInfo,
	Physics_t571_CustomAttributesCacheGenerator_Physics_t571_Physics_RaycastAll_m1669_Arg1_ParameterInfo,
	Physics_t571_CustomAttributesCacheGenerator_Physics_t571_Physics_RaycastAll_m1669_Arg2_ParameterInfo,
	Physics_t571_CustomAttributesCacheGenerator_Physics_t571_Physics_RaycastAll_m2933_Arg2_ParameterInfo,
	Physics_t571_CustomAttributesCacheGenerator_Physics_t571_Physics_RaycastAll_m2933_Arg3_ParameterInfo,
	Physics_t571_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m2934,
	Physics2D_t94_CustomAttributesCacheGenerator_Physics2D_LinecastAll_m314,
	Physics2D_t94_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_LinecastAll_m2936,
	Physics2D_t94_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m2938,
	Physics2D_t94_CustomAttributesCacheGenerator_Physics2D_Raycast_m1746,
	Physics2D_t94_CustomAttributesCacheGenerator_Physics2D_t94_Physics2D_Raycast_m2939_Arg2_ParameterInfo,
	Physics2D_t94_CustomAttributesCacheGenerator_Physics2D_t94_Physics2D_Raycast_m2939_Arg3_ParameterInfo,
	Physics2D_t94_CustomAttributesCacheGenerator_Physics2D_t94_Physics2D_Raycast_m2939_Arg4_ParameterInfo,
	Physics2D_t94_CustomAttributesCacheGenerator_Physics2D_t94_Physics2D_Raycast_m2939_Arg5_ParameterInfo,
	Physics2D_t94_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m1659,
	Physics2D_t94_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m2940,
	Rigidbody2D_t62_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_CALL_MovePosition_m2942,
	Rigidbody2D_t62_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_set_velocity_m2943,
	Collider2D_t58_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m2944,
	AnimationEvent_t582_CustomAttributesCacheGenerator_AnimationEvent_t582____data_PropertyInfo,
	AnimationCurve_t586_CustomAttributesCacheGenerator,
	AnimationCurve_t586_CustomAttributesCacheGenerator_AnimationCurve_t586_AnimationCurve__ctor_m2985_Arg0_ParameterInfo,
	AnimationCurve_t586_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m2987,
	AnimationCurve_t586_CustomAttributesCacheGenerator_AnimationCurve_Init_m2989,
	AnimatorStateInfo_t583_CustomAttributesCacheGenerator_AnimatorStateInfo_t583____nameHash_PropertyInfo,
	Animator_t36_CustomAttributesCacheGenerator_Animator_Play_m301,
	Animator_t36_CustomAttributesCacheGenerator_Animator_t36_Animator_Play_m3008_Arg1_ParameterInfo,
	Animator_t36_CustomAttributesCacheGenerator_Animator_t36_Animator_Play_m3008_Arg2_ParameterInfo,
	Animator_t36_CustomAttributesCacheGenerator_Animator_Play_m3009,
	Animator_t36_CustomAttributesCacheGenerator_Animator_t36_Animator_Play_m3009_Arg1_ParameterInfo,
	Animator_t36_CustomAttributesCacheGenerator_Animator_t36_Animator_Play_m3009_Arg2_ParameterInfo,
	Animator_t36_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m1971,
	Animator_t36_CustomAttributesCacheGenerator_Animator_StringToHash_m3010,
	Animator_t36_CustomAttributesCacheGenerator_Animator_SetFloatString_m3011,
	Animator_t36_CustomAttributesCacheGenerator_Animator_SetBoolString_m3012,
	Animator_t36_CustomAttributesCacheGenerator_Animator_GetBoolString_m3013,
	Animator_t36_CustomAttributesCacheGenerator_Animator_SetTriggerString_m3014,
	Animator_t36_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m3015,
	TextMesh_t96_CustomAttributesCacheGenerator_TextMesh_set_text_m324,
	CharacterInfo_t592_CustomAttributesCacheGenerator_uv,
	CharacterInfo_t592_CustomAttributesCacheGenerator_vert,
	CharacterInfo_t592_CustomAttributesCacheGenerator_width,
	CharacterInfo_t592_CustomAttributesCacheGenerator_flipped,
	Font_t186_CustomAttributesCacheGenerator_Font_get_material_m1984,
	Font_t186_CustomAttributesCacheGenerator_Font_HasCharacter_m1858,
	Font_t186_CustomAttributesCacheGenerator_Font_get_dynamic_m1987,
	Font_t186_CustomAttributesCacheGenerator_Font_get_fontSize_m1989,
	FontTextureRebuildCallback_t593_CustomAttributesCacheGenerator,
	TextGenerator_t100_CustomAttributesCacheGenerator_TextGenerator_Init_m3043,
	TextGenerator_t100_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m3044,
	TextGenerator_t100_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3047,
	TextGenerator_t100_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m1873,
	TextGenerator_t100_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m3048,
	TextGenerator_t100_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m3049,
	TextGenerator_t100_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m3050,
	TextGenerator_t100_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m3051,
	TextGenerator_t100_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m3052,
	TextGenerator_t100_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m3053,
	TextGenerator_t100_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m332,
	TextGenerator_t100_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m3054,
	TextGenerator_t100_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m3055,
	TextGenerator_t100_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m1896,
	Canvas_t195_CustomAttributesCacheGenerator_Canvas_get_renderMode_m1741,
	Canvas_t195_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m2005,
	Canvas_t195_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m1755,
	Canvas_t195_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m1988,
	Canvas_t195_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m2009,
	Canvas_t195_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m1774,
	Canvas_t195_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m2010,
	Canvas_t195_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m1726,
	Canvas_t195_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m1743,
	Canvas_t195_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m1742,
	Canvas_t195_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m1754,
	Canvas_t195_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m1707,
	Canvas_t195_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m1983,
	CanvasGroup_t30_CustomAttributesCacheGenerator_CanvasGroup_set_alpha_m264,
	CanvasGroup_t30_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m1961,
	CanvasGroup_t30_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m3067,
	CanvasGroup_t30_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m1725,
	CanvasRenderer_t194_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m3070,
	CanvasRenderer_t194_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m1729,
	CanvasRenderer_t194_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m2041,
	CanvasRenderer_t194_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m1719,
	CanvasRenderer_t194_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m3071,
	CanvasRenderer_t194_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m3072,
	CanvasRenderer_t194_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m1712,
	CanvasRenderer_t194_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m1708,
	RectTransformUtility_t359_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3074,
	RectTransformUtility_t359_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3076,
	RectTransformUtility_t359_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m1728,
	Request_t597_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField,
	Request_t597_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField,
	Request_t597_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField,
	Request_t597_CustomAttributesCacheGenerator_Request_get_sourceId_m3081,
	Request_t597_CustomAttributesCacheGenerator_Request_get_appId_m3082,
	Request_t597_CustomAttributesCacheGenerator_Request_get_domain_m3083,
	Response_t599_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField,
	Response_t599_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField,
	Response_t599_CustomAttributesCacheGenerator_Response_get_success_m3092,
	Response_t599_CustomAttributesCacheGenerator_Response_set_success_m3093,
	Response_t599_CustomAttributesCacheGenerator_Response_get_extendedInfo_m3094,
	Response_t599_CustomAttributesCacheGenerator_Response_set_extendedInfo_m3095,
	CreateMatchRequest_t602_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	CreateMatchRequest_t602_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField,
	CreateMatchRequest_t602_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField,
	CreateMatchRequest_t602_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	CreateMatchRequest_t602_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	CreateMatchRequest_t602_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m3100,
	CreateMatchRequest_t602_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m3101,
	CreateMatchRequest_t602_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m3102,
	CreateMatchRequest_t602_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m3103,
	CreateMatchRequest_t602_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m3104,
	CreateMatchRequest_t602_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m3105,
	CreateMatchRequest_t602_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m3106,
	CreateMatchRequest_t602_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m3107,
	CreateMatchRequest_t602_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m3108,
	CreateMatchResponse_t603_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	CreateMatchResponse_t603_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	CreateMatchResponse_t603_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	CreateMatchResponse_t603_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	CreateMatchResponse_t603_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	CreateMatchResponse_t603_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	CreateMatchResponse_t603_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m3111,
	CreateMatchResponse_t603_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m3112,
	CreateMatchResponse_t603_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m3113,
	CreateMatchResponse_t603_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m3114,
	CreateMatchResponse_t603_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m3115,
	CreateMatchResponse_t603_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m3116,
	CreateMatchResponse_t603_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m3117,
	CreateMatchResponse_t603_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m3118,
	CreateMatchResponse_t603_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m3119,
	CreateMatchResponse_t603_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m3120,
	CreateMatchResponse_t603_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m3121,
	CreateMatchResponse_t603_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m3122,
	JoinMatchRequest_t604_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchRequest_t604_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	JoinMatchRequest_t604_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m3126,
	JoinMatchRequest_t604_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m3127,
	JoinMatchRequest_t604_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m3128,
	JoinMatchRequest_t604_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m3129,
	JoinMatchResponse_t605_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	JoinMatchResponse_t605_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	JoinMatchResponse_t605_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchResponse_t605_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	JoinMatchResponse_t605_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	JoinMatchResponse_t605_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	JoinMatchResponse_t605_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m3132,
	JoinMatchResponse_t605_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m3133,
	JoinMatchResponse_t605_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m3134,
	JoinMatchResponse_t605_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m3135,
	JoinMatchResponse_t605_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m3136,
	JoinMatchResponse_t605_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m3137,
	JoinMatchResponse_t605_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m3138,
	JoinMatchResponse_t605_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m3139,
	JoinMatchResponse_t605_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m3140,
	JoinMatchResponse_t605_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m3141,
	JoinMatchResponse_t605_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m3142,
	JoinMatchResponse_t605_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m3143,
	DestroyMatchRequest_t606_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DestroyMatchRequest_t606_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m3147,
	DestroyMatchRequest_t606_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m3148,
	DropConnectionRequest_t607_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DropConnectionRequest_t607_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	DropConnectionRequest_t607_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m3151,
	DropConnectionRequest_t607_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m3152,
	DropConnectionRequest_t607_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m3153,
	DropConnectionRequest_t607_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m3154,
	ListMatchRequest_t608_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField,
	ListMatchRequest_t608_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField,
	ListMatchRequest_t608_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField,
	ListMatchRequest_t608_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField,
	ListMatchRequest_t608_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField,
	ListMatchRequest_t608_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m3157,
	ListMatchRequest_t608_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m3158,
	ListMatchRequest_t608_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m3159,
	ListMatchRequest_t608_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m3160,
	ListMatchRequest_t608_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m3161,
	ListMatchRequest_t608_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m3162,
	ListMatchRequest_t608_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m3163,
	ListMatchRequest_t608_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m3164,
	MatchDirectConnectInfo_t609_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	MatchDirectConnectInfo_t609_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t609_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t609_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m3167,
	MatchDirectConnectInfo_t609_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m3168,
	MatchDirectConnectInfo_t609_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m3169,
	MatchDirectConnectInfo_t609_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m3170,
	MatchDirectConnectInfo_t609_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m3171,
	MatchDirectConnectInfo_t609_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m3172,
	MatchDesc_t611_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	MatchDesc_t611_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	MatchDesc_t611_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField,
	MatchDesc_t611_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField,
	MatchDesc_t611_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField,
	MatchDesc_t611_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField,
	MatchDesc_t611_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	MatchDesc_t611_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField,
	MatchDesc_t611_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField,
	MatchDesc_t611_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m3176,
	MatchDesc_t611_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m3177,
	MatchDesc_t611_CustomAttributesCacheGenerator_MatchDesc_get_name_m3178,
	MatchDesc_t611_CustomAttributesCacheGenerator_MatchDesc_set_name_m3179,
	MatchDesc_t611_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m3180,
	MatchDesc_t611_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m3181,
	MatchDesc_t611_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m3182,
	MatchDesc_t611_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m3183,
	MatchDesc_t611_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m3184,
	MatchDesc_t611_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m3185,
	MatchDesc_t611_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m3186,
	MatchDesc_t611_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m3187,
	MatchDesc_t611_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m3188,
	MatchDesc_t611_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m3189,
	MatchDesc_t611_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m3190,
	ListMatchResponse_t613_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField,
	ListMatchResponse_t613_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m3194,
	ListMatchResponse_t613_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m3195,
	AppID_t614_CustomAttributesCacheGenerator,
	SourceID_t615_CustomAttributesCacheGenerator,
	NetworkID_t616_CustomAttributesCacheGenerator,
	NodeID_t617_CustomAttributesCacheGenerator,
	NetworkMatch_t623_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m3682,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t806_CustomAttributesCacheGenerator,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t806_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3688,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t806_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m3689,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t806_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m3691,
	JsonArray_t624_CustomAttributesCacheGenerator,
	JsonObject_t626_CustomAttributesCacheGenerator,
	SimpleJson_t629_CustomAttributesCacheGenerator,
	SimpleJson_t629_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m3239,
	SimpleJson_t629_CustomAttributesCacheGenerator_SimpleJson_NextToken_m3251,
	SimpleJson_t629_CustomAttributesCacheGenerator_SimpleJson_t629____PocoJsonSerializerStrategy_PropertyInfo,
	IJsonSerializerStrategy_t627_CustomAttributesCacheGenerator,
	IJsonSerializerStrategy_t627_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m3695,
	PocoJsonSerializerStrategy_t628_CustomAttributesCacheGenerator,
	PocoJsonSerializerStrategy_t628_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m3268,
	PocoJsonSerializerStrategy_t628_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m3269,
	ReflectionUtils_t643_CustomAttributesCacheGenerator,
	ReflectionUtils_t643_CustomAttributesCacheGenerator_ReflectionUtils_t643_ReflectionUtils_GetConstructorInfo_m3294_Arg1_ParameterInfo,
	ReflectionUtils_t643_CustomAttributesCacheGenerator_ReflectionUtils_t643_ReflectionUtils_GetContructor_m3299_Arg1_ParameterInfo,
	ReflectionUtils_t643_CustomAttributesCacheGenerator_ReflectionUtils_t643_ReflectionUtils_GetConstructorByReflection_m3301_Arg1_ParameterInfo,
	ThreadSafeDictionary_2_t809_CustomAttributesCacheGenerator,
	ConstructorDelegate_t636_CustomAttributesCacheGenerator_ConstructorDelegate_t636_ConstructorDelegate_Invoke_m3279_Arg0_ParameterInfo,
	ConstructorDelegate_t636_CustomAttributesCacheGenerator_ConstructorDelegate_t636_ConstructorDelegate_BeginInvoke_m3280_Arg0_ParameterInfo,
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t638_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t639_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t640_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t641_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t642_CustomAttributesCacheGenerator,
	IL2CPPStructAlignmentAttribute_t645_CustomAttributesCacheGenerator,
	DisallowMultipleComponent_t418_CustomAttributesCacheGenerator,
	RequireComponent_t412_CustomAttributesCacheGenerator,
	WritableAttribute_t651_CustomAttributesCacheGenerator,
	AssemblyIsEditorAssembly_t652_CustomAttributesCacheGenerator,
	Achievement_t664_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Achievement_t664_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField,
	Achievement_t664_CustomAttributesCacheGenerator_Achievement_get_id_m3353,
	Achievement_t664_CustomAttributesCacheGenerator_Achievement_set_id_m3354,
	Achievement_t664_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m3355,
	Achievement_t664_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m3356,
	AchievementDescription_t665_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	AchievementDescription_t665_CustomAttributesCacheGenerator_AchievementDescription_get_id_m3363,
	AchievementDescription_t665_CustomAttributesCacheGenerator_AchievementDescription_set_id_m3364,
	Score_t666_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField,
	Score_t666_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField,
	Score_t666_CustomAttributesCacheGenerator_Score_get_leaderboardID_m3373,
	Score_t666_CustomAttributesCacheGenerator_Score_set_leaderboardID_m3374,
	Score_t666_CustomAttributesCacheGenerator_Score_get_value_m3375,
	Score_t666_CustomAttributesCacheGenerator_Score_set_value_m3376,
	Leaderboard_t495_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Leaderboard_t495_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField,
	Leaderboard_t495_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField,
	Leaderboard_t495_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField,
	Leaderboard_t495_CustomAttributesCacheGenerator_Leaderboard_get_id_m3387,
	Leaderboard_t495_CustomAttributesCacheGenerator_Leaderboard_set_id_m3388,
	Leaderboard_t495_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m3389,
	Leaderboard_t495_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m3390,
	Leaderboard_t495_CustomAttributesCacheGenerator_Leaderboard_get_range_m3391,
	Leaderboard_t495_CustomAttributesCacheGenerator_Leaderboard_set_range_m3392,
	Leaderboard_t495_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m3393,
	Leaderboard_t495_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m3394,
	PropertyAttribute_t678_CustomAttributesCacheGenerator,
	TooltipAttribute_t422_CustomAttributesCacheGenerator,
	SpaceAttribute_t420_CustomAttributesCacheGenerator,
	RangeAttribute_t416_CustomAttributesCacheGenerator,
	TextAreaAttribute_t423_CustomAttributesCacheGenerator,
	SelectionBaseAttribute_t421_CustomAttributesCacheGenerator,
	StackTraceUtility_t680_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m3410,
	StackTraceUtility_t680_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m3413,
	StackTraceUtility_t680_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m3415,
	SharedBetweenAnimatorsAttribute_t681_CustomAttributesCacheGenerator,
	ArgumentCache_t687_CustomAttributesCacheGenerator_m_ObjectArgument,
	ArgumentCache_t687_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName,
	ArgumentCache_t687_CustomAttributesCacheGenerator_m_IntArgument,
	ArgumentCache_t687_CustomAttributesCacheGenerator_m_FloatArgument,
	ArgumentCache_t687_CustomAttributesCacheGenerator_m_StringArgument,
	ArgumentCache_t687_CustomAttributesCacheGenerator_m_BoolArgument,
	PersistentCall_t691_CustomAttributesCacheGenerator_m_Target,
	PersistentCall_t691_CustomAttributesCacheGenerator_m_MethodName,
	PersistentCall_t691_CustomAttributesCacheGenerator_m_Mode,
	PersistentCall_t691_CustomAttributesCacheGenerator_m_Arguments,
	PersistentCall_t691_CustomAttributesCacheGenerator_m_CallState,
	PersistentCallGroup_t693_CustomAttributesCacheGenerator_m_Calls,
	UnityEventBase_t696_CustomAttributesCacheGenerator_m_PersistentCalls,
	UnityEventBase_t696_CustomAttributesCacheGenerator_m_TypeName,
	UserAuthorizationDialog_t697_CustomAttributesCacheGenerator,
	DefaultValueAttribute_t698_CustomAttributesCacheGenerator,
	ExcludeFromDocsAttribute_t699_CustomAttributesCacheGenerator,
	FormerlySerializedAsAttribute_t408_CustomAttributesCacheGenerator,
	TypeInferenceRuleAttribute_t701_CustomAttributesCacheGenerator,
};
