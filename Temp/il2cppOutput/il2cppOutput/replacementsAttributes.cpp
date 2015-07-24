#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
extern TypeInfo* RuntimeCompatibilityAttribute_t106_il2cpp_TypeInfo_var;
void g_replacements_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RuntimeCompatibilityAttribute_t106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		RuntimeCompatibilityAttribute_t106 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t106 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t106_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m366(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m367(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_replacements_Assembly_AttributeGenerators[2] = 
{
	NULL,
	g_replacements_Assembly_CustomAttributesCacheGenerator,
};
