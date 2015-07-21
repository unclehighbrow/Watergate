#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttribute.h"
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttributeMethodDeclarations.h"
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttribute.h"
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttributeMethodDeclarations.h"
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttribute.h"
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttributeMethodDeclarations.h"
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttribute.h"
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttributeMethodDeclarations.h"
// System.CLSCompliantAttribute
#include "mscorlib_System_CLSCompliantAttribute.h"
// System.CLSCompliantAttribute
#include "mscorlib_System_CLSCompliantAttributeMethodDeclarations.h"
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttribute.h"
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttributeMethodDeclarations.h"
// System.Runtime.InteropServices.ComVisibleAttribute
#include "mscorlib_System_Runtime_InteropServices_ComVisibleAttribute.h"
// System.Runtime.InteropServices.ComVisibleAttribute
#include "mscorlib_System_Runtime_InteropServices_ComVisibleAttributeMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToA.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToAMethodDeclarations.h"
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttribute.h"
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttributeMethodDeclarations.h"
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttribute.h"
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttributeMethodDeclarations.h"
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttribute.h"
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttributeMethodDeclarations.h"
extern TypeInfo* AssemblyCopyrightAttribute_t400_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyDescriptionAttribute_t396_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyProductAttribute_t399_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyTitleAttribute_t402_il2cpp_TypeInfo_var;
extern TypeInfo* CLSCompliantAttribute_t949_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyCompanyAttribute_t398_il2cpp_TypeInfo_var;
extern TypeInfo* ComVisibleAttribute_t401_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t104_il2cpp_TypeInfo_var;
extern TypeInfo* InternalsVisibleToAttribute_t799_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyKeyFileAttribute_t947_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyDelaySignAttribute_t948_il2cpp_TypeInfo_var;
extern TypeInfo* NeutralResourcesLanguageAttribute_t944_il2cpp_TypeInfo_var;
void g_Mono_Security_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AssemblyCopyrightAttribute_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(390);
		AssemblyDescriptionAttribute_t396_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(386);
		AssemblyProductAttribute_t399_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(389);
		AssemblyTitleAttribute_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(392);
		CLSCompliantAttribute_t949_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1901);
		AssemblyCompanyAttribute_t398_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		ComVisibleAttribute_t401_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(391);
		RuntimeCompatibilityAttribute_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(71);
		InternalsVisibleToAttribute_t799_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1111);
		AssemblyKeyFileAttribute_t947_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1899);
		AssemblyDelaySignAttribute_t948_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1900);
		NeutralResourcesLanguageAttribute_t944_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1896);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 12;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AssemblyCopyrightAttribute_t400 * tmp;
		tmp = (AssemblyCopyrightAttribute_t400 *)il2cpp_codegen_object_new (AssemblyCopyrightAttribute_t400_il2cpp_TypeInfo_var);
		AssemblyCopyrightAttribute__ctor_m2055(tmp, il2cpp_codegen_string_new_wrapper("(c) 2003-2004 Various Authors"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDescriptionAttribute_t396 * tmp;
		tmp = (AssemblyDescriptionAttribute_t396 *)il2cpp_codegen_object_new (AssemblyDescriptionAttribute_t396_il2cpp_TypeInfo_var);
		AssemblyDescriptionAttribute__ctor_m2051(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		AssemblyProductAttribute_t399 * tmp;
		tmp = (AssemblyProductAttribute_t399 *)il2cpp_codegen_object_new (AssemblyProductAttribute_t399_il2cpp_TypeInfo_var);
		AssemblyProductAttribute__ctor_m2054(tmp, il2cpp_codegen_string_new_wrapper("MONO CLI"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		AssemblyTitleAttribute_t402 * tmp;
		tmp = (AssemblyTitleAttribute_t402 *)il2cpp_codegen_object_new (AssemblyTitleAttribute_t402_il2cpp_TypeInfo_var);
		AssemblyTitleAttribute__ctor_m2057(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		CLSCompliantAttribute_t949 * tmp;
		tmp = (CLSCompliantAttribute_t949 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t949_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3885(tmp, true, NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		AssemblyCompanyAttribute_t398 * tmp;
		tmp = (AssemblyCompanyAttribute_t398 *)il2cpp_codegen_object_new (AssemblyCompanyAttribute_t398_il2cpp_TypeInfo_var);
		AssemblyCompanyAttribute__ctor_m2053(tmp, il2cpp_codegen_string_new_wrapper("MONO development team"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		ComVisibleAttribute_t401 * tmp;
		tmp = (ComVisibleAttribute_t401 *)il2cpp_codegen_object_new (ComVisibleAttribute_t401_il2cpp_TypeInfo_var);
		ComVisibleAttribute__ctor_m2056(tmp, false, NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t104 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t104 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t104_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m351(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m352(tmp, true, NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t799 * tmp;
		tmp = (InternalsVisibleToAttribute_t799 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t799_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3658(tmp, il2cpp_codegen_string_new_wrapper("System, PublicKey=00240000048000009400000006020000002400005253413100040000010001008D56C76F9E8649383049F383C44BE0EC204181822A6C31CF5EB7EF486944D032188EA1D3920763712CCB12D75FB77E9811149E6148E5D32FBAAB37611C1878DDC19E20EF135D0CB2CFF2BFEC3D115810C3D9069638FE4BE215DBF795861920E5AB6F7DB2E2CEEF136AC23D5DD2BF031700AEC232F6C6B1C785B4305C123B37AB"), NULL);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		AssemblyKeyFileAttribute_t947 * tmp;
		tmp = (AssemblyKeyFileAttribute_t947 *)il2cpp_codegen_object_new (AssemblyKeyFileAttribute_t947_il2cpp_TypeInfo_var);
		AssemblyKeyFileAttribute__ctor_m3883(tmp, il2cpp_codegen_string_new_wrapper("../mono.pub"), NULL);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDelaySignAttribute_t948 * tmp;
		tmp = (AssemblyDelaySignAttribute_t948 *)il2cpp_codegen_object_new (AssemblyDelaySignAttribute_t948_il2cpp_TypeInfo_var);
		AssemblyDelaySignAttribute__ctor_m3884(tmp, true, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		NeutralResourcesLanguageAttribute_t944 * tmp;
		tmp = (NeutralResourcesLanguageAttribute_t944 *)il2cpp_codegen_object_new (NeutralResourcesLanguageAttribute_t944_il2cpp_TypeInfo_var);
		NeutralResourcesLanguageAttribute__ctor_m3880(tmp, il2cpp_codegen_string_new_wrapper("en-US"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t949_il2cpp_TypeInfo_var;
void BigInteger_t1223_CustomAttributesCacheGenerator_BigInteger__ctor_m5153(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t949_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1901);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t949 * tmp;
		tmp = (CLSCompliantAttribute_t949 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t949_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3885(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t949_il2cpp_TypeInfo_var;
void BigInteger_t1223_CustomAttributesCacheGenerator_BigInteger__ctor_m5155(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t949_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1901);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t949 * tmp;
		tmp = (CLSCompliantAttribute_t949 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t949_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3885(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t949_il2cpp_TypeInfo_var;
void BigInteger_t1223_CustomAttributesCacheGenerator_BigInteger__ctor_m5157(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t949_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1901);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t949 * tmp;
		tmp = (CLSCompliantAttribute_t949 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t949_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3885(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t949_il2cpp_TypeInfo_var;
void BigInteger_t1223_CustomAttributesCacheGenerator_BigInteger_SetBit_m5164(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t949_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1901);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t949 * tmp;
		tmp = (CLSCompliantAttribute_t949 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t949_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3885(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t949_il2cpp_TypeInfo_var;
void BigInteger_t1223_CustomAttributesCacheGenerator_BigInteger_SetBit_m5165(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t949_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1901);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t949 * tmp;
		tmp = (CLSCompliantAttribute_t949 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t949_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3885(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t949_il2cpp_TypeInfo_var;
void BigInteger_t1223_CustomAttributesCacheGenerator_BigInteger_ToString_m5168(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t949_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1901);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t949 * tmp;
		tmp = (CLSCompliantAttribute_t949 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t949_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3885(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t949_il2cpp_TypeInfo_var;
void BigInteger_t1223_CustomAttributesCacheGenerator_BigInteger_ToString_m5169(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t949_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1901);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t949 * tmp;
		tmp = (CLSCompliantAttribute_t949 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t949_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3885(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t949_il2cpp_TypeInfo_var;
void BigInteger_t1223_CustomAttributesCacheGenerator_BigInteger_op_Implicit_m5179(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t949_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1901);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t949 * tmp;
		tmp = (CLSCompliantAttribute_t949 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t949_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3885(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t949_il2cpp_TypeInfo_var;
void BigInteger_t1223_CustomAttributesCacheGenerator_BigInteger_op_Modulus_m5183(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t949_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1901);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t949 * tmp;
		tmp = (CLSCompliantAttribute_t949 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t949_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3885(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t949_il2cpp_TypeInfo_var;
void BigInteger_t1223_CustomAttributesCacheGenerator_BigInteger_op_Equality_m5189(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t949_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1901);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t949 * tmp;
		tmp = (CLSCompliantAttribute_t949 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t949_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3885(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t949_il2cpp_TypeInfo_var;
void BigInteger_t1223_CustomAttributesCacheGenerator_BigInteger_op_Inequality_m5190(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t949_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1901);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t949 * tmp;
		tmp = (CLSCompliantAttribute_t949 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t949_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3885(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t949_il2cpp_TypeInfo_var;
void ModulusRing_t1224_CustomAttributesCacheGenerator_ModulusRing_Pow_m5137(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t949_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1901);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t949 * tmp;
		tmp = (CLSCompliantAttribute_t949 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t949_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3885(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern TypeInfo* DefaultMemberAttribute_t425_il2cpp_TypeInfo_var;
void ASN1_t1162_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void PKCS12_t1185_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map5(CustomAttributesCache* cache)
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
void PKCS12_t1185_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map6(CustomAttributesCache* cache)
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
void PKCS12_t1185_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map7(CustomAttributesCache* cache)
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
void PKCS12_t1185_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map8(CustomAttributesCache* cache)
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
void X509Certificate_t1047_CustomAttributesCacheGenerator_U3CU3Ef__switchU24mapF(CustomAttributesCache* cache)
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
void X509Certificate_t1047_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map10(CustomAttributesCache* cache)
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
void X509Certificate_t1047_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map11(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t425_il2cpp_TypeInfo_var;
void X509CertificateCollection_t1186_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t405_il2cpp_TypeInfo_var;
void X509ChainStatusFlags_t1255_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t425_il2cpp_TypeInfo_var;
void X509Crl_t1164_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void X509Crl_t1164_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map13(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t425_il2cpp_TypeInfo_var;
void X509ExtensionCollection_t1189_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void ExtendedKeyUsageExtension_t1258_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map14(CustomAttributesCache* cache)
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
extern TypeInfo* FlagsAttribute_t405_il2cpp_TypeInfo_var;
void KeyUsages_t1260_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* FlagsAttribute_t405_il2cpp_TypeInfo_var;
void CertTypes_t1262_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t425_il2cpp_TypeInfo_var;
void CipherSuiteCollection_t1275_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void HttpsClientStream_t1293_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache2(CustomAttributesCache* cache)
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
void HttpsClientStream_t1293_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache3(CustomAttributesCache* cache)
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
void HttpsClientStream_t1293_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__0_m5620(CustomAttributesCache* cache)
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
void HttpsClientStream_t1293_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__1_m5621(CustomAttributesCache* cache)
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
void RSASslSignatureDeformatter_t1299_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map15(CustomAttributesCache* cache)
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
void RSASslSignatureFormatter_t1301_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map16(CustomAttributesCache* cache)
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
extern TypeInfo* FlagsAttribute_t405_il2cpp_TypeInfo_var;
void SecurityProtocolType_t1304_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t105_il2cpp_TypeInfo_var;
void U3CPrivateImplementationDetailsU3E_t1339_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern const CustomAttributesCacheGenerator g_Mono_Security_Assembly_AttributeGenerators[39] = 
{
	NULL,
	g_Mono_Security_Assembly_CustomAttributesCacheGenerator,
	BigInteger_t1223_CustomAttributesCacheGenerator_BigInteger__ctor_m5153,
	BigInteger_t1223_CustomAttributesCacheGenerator_BigInteger__ctor_m5155,
	BigInteger_t1223_CustomAttributesCacheGenerator_BigInteger__ctor_m5157,
	BigInteger_t1223_CustomAttributesCacheGenerator_BigInteger_SetBit_m5164,
	BigInteger_t1223_CustomAttributesCacheGenerator_BigInteger_SetBit_m5165,
	BigInteger_t1223_CustomAttributesCacheGenerator_BigInteger_ToString_m5168,
	BigInteger_t1223_CustomAttributesCacheGenerator_BigInteger_ToString_m5169,
	BigInteger_t1223_CustomAttributesCacheGenerator_BigInteger_op_Implicit_m5179,
	BigInteger_t1223_CustomAttributesCacheGenerator_BigInteger_op_Modulus_m5183,
	BigInteger_t1223_CustomAttributesCacheGenerator_BigInteger_op_Equality_m5189,
	BigInteger_t1223_CustomAttributesCacheGenerator_BigInteger_op_Inequality_m5190,
	ModulusRing_t1224_CustomAttributesCacheGenerator_ModulusRing_Pow_m5137,
	ASN1_t1162_CustomAttributesCacheGenerator,
	PKCS12_t1185_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map5,
	PKCS12_t1185_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map6,
	PKCS12_t1185_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map7,
	PKCS12_t1185_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map8,
	X509Certificate_t1047_CustomAttributesCacheGenerator_U3CU3Ef__switchU24mapF,
	X509Certificate_t1047_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map10,
	X509Certificate_t1047_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map11,
	X509CertificateCollection_t1186_CustomAttributesCacheGenerator,
	X509ChainStatusFlags_t1255_CustomAttributesCacheGenerator,
	X509Crl_t1164_CustomAttributesCacheGenerator,
	X509Crl_t1164_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map13,
	X509ExtensionCollection_t1189_CustomAttributesCacheGenerator,
	ExtendedKeyUsageExtension_t1258_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map14,
	KeyUsages_t1260_CustomAttributesCacheGenerator,
	CertTypes_t1262_CustomAttributesCacheGenerator,
	CipherSuiteCollection_t1275_CustomAttributesCacheGenerator,
	HttpsClientStream_t1293_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache2,
	HttpsClientStream_t1293_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache3,
	HttpsClientStream_t1293_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__0_m5620,
	HttpsClientStream_t1293_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__1_m5621,
	RSASslSignatureDeformatter_t1299_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map15,
	RSASslSignatureFormatter_t1301_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map16,
	SecurityProtocolType_t1304_CustomAttributesCacheGenerator,
	U3CPrivateImplementationDetailsU3E_t1339_CustomAttributesCacheGenerator,
};
