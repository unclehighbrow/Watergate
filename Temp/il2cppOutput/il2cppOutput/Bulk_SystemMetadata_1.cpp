#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "stringLiterals.h"
// System.Text.RegularExpressions.FactoryCache
#include "System_System_Text_RegularExpressions_FactoryCache.h"
// Metadata Definition System.Text.RegularExpressions.FactoryCache
extern TypeInfo FactoryCache_t1092_il2cpp_TypeInfo;
// System.Text.RegularExpressions.FactoryCache
#include "System_System_Text_RegularExpressions_FactoryCacheMethodDeclarations.h"
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo FactoryCache_t1092_FactoryCache__ctor_m4489_ParameterInfos[] = 
{
	{"capacity", 0, 134218210, 0, &Int32_t75_0_0_0},
};
extern const Il2CppType Void_t110_0_0_0;
extern void* RuntimeInvoker_Void_t110_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.FactoryCache::.ctor(System.Int32)
extern const MethodInfo FactoryCache__ctor_m4489_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&FactoryCache__ctor_m4489/* method */
	, &FactoryCache_t1092_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75/* invoker_method */
	, FactoryCache_t1092_FactoryCache__ctor_m4489_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 558/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType RegexOptions_t1097_0_0_0;
extern const Il2CppType RegexOptions_t1097_0_0_0;
extern const Il2CppType IMachineFactory_t1093_0_0_0;
extern const Il2CppType IMachineFactory_t1093_0_0_0;
static const ParameterInfo FactoryCache_t1092_FactoryCache_Add_m4490_ParameterInfos[] = 
{
	{"pattern", 0, 134218211, 0, &String_t_0_0_0},
	{"options", 1, 134218212, 0, &RegexOptions_t1097_0_0_0},
	{"factory", 2, 134218213, 0, &IMachineFactory_t1093_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.FactoryCache::Add(System.String,System.Text.RegularExpressions.RegexOptions,System.Text.RegularExpressions.IMachineFactory)
extern const MethodInfo FactoryCache_Add_m4490_MethodInfo = 
{
	"Add"/* name */
	, (methodPointerType)&FactoryCache_Add_m4490/* method */
	, &FactoryCache_t1092_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Int32_t75_Object_t/* invoker_method */
	, FactoryCache_t1092_FactoryCache_Add_m4490_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 559/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.FactoryCache::Cleanup()
extern const MethodInfo FactoryCache_Cleanup_m4491_MethodInfo = 
{
	"Cleanup"/* name */
	, (methodPointerType)&FactoryCache_Cleanup_m4491/* method */
	, &FactoryCache_t1092_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 560/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType RegexOptions_t1097_0_0_0;
static const ParameterInfo FactoryCache_t1092_FactoryCache_Lookup_m4492_ParameterInfos[] = 
{
	{"pattern", 0, 134218214, 0, &String_t_0_0_0},
	{"options", 1, 134218215, 0, &RegexOptions_t1097_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.FactoryCache::Lookup(System.String,System.Text.RegularExpressions.RegexOptions)
extern const MethodInfo FactoryCache_Lookup_m4492_MethodInfo = 
{
	"Lookup"/* name */
	, (methodPointerType)&FactoryCache_Lookup_m4492/* method */
	, &FactoryCache_t1092_il2cpp_TypeInfo/* declaring_type */
	, &IMachineFactory_t1093_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32_t75/* invoker_method */
	, FactoryCache_t1092_FactoryCache_Lookup_m4492_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 561/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* FactoryCache_t1092_MethodInfos[] =
{
	&FactoryCache__ctor_m4489_MethodInfo,
	&FactoryCache_Add_m4490_MethodInfo,
	&FactoryCache_Cleanup_m4491_MethodInfo,
	&FactoryCache_Lookup_m4492_MethodInfo,
	NULL
};
extern const Il2CppType Key_t1101_0_0_0;
static const Il2CppType* FactoryCache_t1092_il2cpp_TypeInfo__nestedTypes[1] =
{
	&Key_t1101_0_0_0,
};
extern const MethodInfo Object_Equals_m378_MethodInfo;
extern const MethodInfo Object_Finalize_m375_MethodInfo;
extern const MethodInfo Object_GetHashCode_m379_MethodInfo;
extern const MethodInfo Object_ToString_m380_MethodInfo;
static const Il2CppMethodReference FactoryCache_t1092_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
};
static bool FactoryCache_t1092_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType FactoryCache_t1092_0_0_0;
extern const Il2CppType FactoryCache_t1092_1_0_0;
extern const Il2CppType Object_t_0_0_0;
struct FactoryCache_t1092;
const Il2CppTypeDefinitionMetadata FactoryCache_t1092_DefinitionMetadata = 
{
	NULL/* declaringType */
	, FactoryCache_t1092_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, FactoryCache_t1092_VTable/* vtableMethods */
	, FactoryCache_t1092_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 492/* fieldStart */

};
TypeInfo FactoryCache_t1092_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "FactoryCache"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, FactoryCache_t1092_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &FactoryCache_t1092_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &FactoryCache_t1092_0_0_0/* byval_arg */
	, &FactoryCache_t1092_1_0_0/* this_arg */
	, &FactoryCache_t1092_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (FactoryCache_t1092)/* instance_size */
	, sizeof (FactoryCache_t1092)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.MRUList/Node
#include "System_System_Text_RegularExpressions_MRUList_Node.h"
// Metadata Definition System.Text.RegularExpressions.MRUList/Node
extern TypeInfo Node_t1103_il2cpp_TypeInfo;
// System.Text.RegularExpressions.MRUList/Node
#include "System_System_Text_RegularExpressions_MRUList_NodeMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo Node_t1103_Node__ctor_m4493_ParameterInfos[] = 
{
	{"value", 0, 134218220, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.MRUList/Node::.ctor(System.Object)
extern const MethodInfo Node__ctor_m4493_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Node__ctor_m4493/* method */
	, &Node_t1103_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, Node_t1103_Node__ctor_m4493_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 569/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Node_t1103_MethodInfos[] =
{
	&Node__ctor_m4493_MethodInfo,
	NULL
};
static const Il2CppMethodReference Node_t1103_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
};
static bool Node_t1103_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType Node_t1103_0_0_0;
extern const Il2CppType Node_t1103_1_0_0;
extern TypeInfo MRUList_t1102_il2cpp_TypeInfo;
extern const Il2CppType MRUList_t1102_0_0_0;
struct Node_t1103;
const Il2CppTypeDefinitionMetadata Node_t1103_DefinitionMetadata = 
{
	&MRUList_t1102_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Node_t1103_VTable/* vtableMethods */
	, Node_t1103_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 495/* fieldStart */

};
TypeInfo Node_t1103_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Node"/* name */
	, ""/* namespaze */
	, Node_t1103_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Node_t1103_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Node_t1103_0_0_0/* byval_arg */
	, &Node_t1103_1_0_0/* this_arg */
	, &Node_t1103_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Node_t1103)/* instance_size */
	, sizeof (Node_t1103)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048579/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.MRUList
#include "System_System_Text_RegularExpressions_MRUList.h"
// Metadata Definition System.Text.RegularExpressions.MRUList
// System.Text.RegularExpressions.MRUList
#include "System_System_Text_RegularExpressions_MRUListMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.MRUList::.ctor()
extern const MethodInfo MRUList__ctor_m4494_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MRUList__ctor_m4494/* method */
	, &MRUList_t1102_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 566/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo MRUList_t1102_MRUList_Use_m4495_ParameterInfos[] = 
{
	{"o", 0, 134218219, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.MRUList::Use(System.Object)
extern const MethodInfo MRUList_Use_m4495_MethodInfo = 
{
	"Use"/* name */
	, (methodPointerType)&MRUList_Use_m4495/* method */
	, &MRUList_t1102_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, MRUList_t1102_MRUList_Use_m4495_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 567/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Text.RegularExpressions.MRUList::Evict()
extern const MethodInfo MRUList_Evict_m4496_MethodInfo = 
{
	"Evict"/* name */
	, (methodPointerType)&MRUList_Evict_m4496/* method */
	, &MRUList_t1102_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 568/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* MRUList_t1102_MethodInfos[] =
{
	&MRUList__ctor_m4494_MethodInfo,
	&MRUList_Use_m4495_MethodInfo,
	&MRUList_Evict_m4496_MethodInfo,
	NULL
};
static const Il2CppType* MRUList_t1102_il2cpp_TypeInfo__nestedTypes[1] =
{
	&Node_t1103_0_0_0,
};
static const Il2CppMethodReference MRUList_t1102_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
};
static bool MRUList_t1102_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType MRUList_t1102_1_0_0;
struct MRUList_t1102;
const Il2CppTypeDefinitionMetadata MRUList_t1102_DefinitionMetadata = 
{
	NULL/* declaringType */
	, MRUList_t1102_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, MRUList_t1102_VTable/* vtableMethods */
	, MRUList_t1102_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 498/* fieldStart */

};
TypeInfo MRUList_t1102_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "MRUList"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, MRUList_t1102_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &MRUList_t1102_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &MRUList_t1102_0_0_0/* byval_arg */
	, &MRUList_t1102_1_0_0/* this_arg */
	, &MRUList_t1102_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (MRUList_t1102)/* instance_size */
	, sizeof (MRUList_t1102)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Category
#include "System_System_Text_RegularExpressions_Category.h"
// Metadata Definition System.Text.RegularExpressions.Category
extern TypeInfo Category_t1104_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Category
#include "System_System_Text_RegularExpressions_CategoryMethodDeclarations.h"
static const MethodInfo* Category_t1104_MethodInfos[] =
{
	NULL
};
extern const MethodInfo Enum_Equals_m2180_MethodInfo;
extern const MethodInfo Enum_GetHashCode_m2181_MethodInfo;
extern const MethodInfo Enum_ToString_m2182_MethodInfo;
extern const MethodInfo Enum_ToString_m2183_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToBoolean_m2184_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToByte_m2185_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToChar_m2186_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToDateTime_m2187_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToDecimal_m2188_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToDouble_m2189_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToInt16_m2190_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToInt32_m2191_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToInt64_m2192_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToSByte_m2193_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToSingle_m2194_MethodInfo;
extern const MethodInfo Enum_ToString_m2195_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToType_m2196_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToUInt16_m2197_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToUInt32_m2198_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToUInt64_m2199_MethodInfo;
extern const MethodInfo Enum_CompareTo_m2200_MethodInfo;
extern const MethodInfo Enum_GetTypeCode_m2201_MethodInfo;
static const Il2CppMethodReference Category_t1104_VTable[] =
{
	&Enum_Equals_m2180_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Enum_GetHashCode_m2181_MethodInfo,
	&Enum_ToString_m2182_MethodInfo,
	&Enum_ToString_m2183_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m2184_MethodInfo,
	&Enum_System_IConvertible_ToByte_m2185_MethodInfo,
	&Enum_System_IConvertible_ToChar_m2186_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m2187_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m2188_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m2189_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m2190_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m2191_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m2192_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m2193_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m2194_MethodInfo,
	&Enum_ToString_m2195_MethodInfo,
	&Enum_System_IConvertible_ToType_m2196_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m2197_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m2198_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m2199_MethodInfo,
	&Enum_CompareTo_m2200_MethodInfo,
	&Enum_GetTypeCode_m2201_MethodInfo,
};
static bool Category_t1104_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType IFormattable_t428_0_0_0;
extern const Il2CppType IConvertible_t429_0_0_0;
extern const Il2CppType IComparable_t430_0_0_0;
static Il2CppInterfaceOffsetPair Category_t1104_InterfacesOffsets[] = 
{
	{ &IFormattable_t428_0_0_0, 4},
	{ &IConvertible_t429_0_0_0, 5},
	{ &IComparable_t430_0_0_0, 21},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType Category_t1104_0_0_0;
extern const Il2CppType Category_t1104_1_0_0;
extern const Il2CppType Enum_t431_0_0_0;
// System.UInt16
#include "mscorlib_System_UInt16.h"
extern TypeInfo UInt16_t369_il2cpp_TypeInfo;
const Il2CppTypeDefinitionMetadata Category_t1104_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, Category_t1104_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t431_0_0_0/* parent */
	, Category_t1104_VTable/* vtableMethods */
	, Category_t1104_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 500/* fieldStart */

};
TypeInfo Category_t1104_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Category"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, Category_t1104_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &UInt16_t369_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Category_t1104_0_0_0/* byval_arg */
	, &Category_t1104_1_0_0/* this_arg */
	, &Category_t1104_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Category_t1104)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (Category_t1104)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(uint16_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 256/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 146/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.Text.RegularExpressions.CategoryUtils
#include "System_System_Text_RegularExpressions_CategoryUtils.h"
// Metadata Definition System.Text.RegularExpressions.CategoryUtils
extern TypeInfo CategoryUtils_t1105_il2cpp_TypeInfo;
// System.Text.RegularExpressions.CategoryUtils
#include "System_System_Text_RegularExpressions_CategoryUtilsMethodDeclarations.h"
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo CategoryUtils_t1105_CategoryUtils_CategoryFromName_m4497_ParameterInfos[] = 
{
	{"name", 0, 134218221, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Category_t1104_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Category System.Text.RegularExpressions.CategoryUtils::CategoryFromName(System.String)
extern const MethodInfo CategoryUtils_CategoryFromName_m4497_MethodInfo = 
{
	"CategoryFromName"/* name */
	, (methodPointerType)&CategoryUtils_CategoryFromName_m4497/* method */
	, &CategoryUtils_t1105_il2cpp_TypeInfo/* declaring_type */
	, &Category_t1104_0_0_0/* return_type */
	, RuntimeInvoker_Category_t1104_Object_t/* invoker_method */
	, CategoryUtils_t1105_CategoryUtils_CategoryFromName_m4497_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 570/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Category_t1104_0_0_0;
extern const Il2CppType Char_t103_0_0_0;
extern const Il2CppType Char_t103_0_0_0;
static const ParameterInfo CategoryUtils_t1105_CategoryUtils_IsCategory_m4498_ParameterInfos[] = 
{
	{"cat", 0, 134218222, 0, &Category_t1104_0_0_0},
	{"c", 1, 134218223, 0, &Char_t103_0_0_0},
};
extern const Il2CppType Boolean_t111_0_0_0;
extern void* RuntimeInvoker_Boolean_t111_UInt16_t369_Int16_t455 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.CategoryUtils::IsCategory(System.Text.RegularExpressions.Category,System.Char)
extern const MethodInfo CategoryUtils_IsCategory_m4498_MethodInfo = 
{
	"IsCategory"/* name */
	, (methodPointerType)&CategoryUtils_IsCategory_m4498/* method */
	, &CategoryUtils_t1105_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_UInt16_t369_Int16_t455/* invoker_method */
	, CategoryUtils_t1105_CategoryUtils_IsCategory_m4498_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 571/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UnicodeCategory_t1212_0_0_0;
extern const Il2CppType UnicodeCategory_t1212_0_0_0;
extern const Il2CppType Char_t103_0_0_0;
static const ParameterInfo CategoryUtils_t1105_CategoryUtils_IsCategory_m4499_ParameterInfos[] = 
{
	{"uc", 0, 134218224, 0, &UnicodeCategory_t1212_0_0_0},
	{"c", 1, 134218225, 0, &Char_t103_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Int32_t75_Int16_t455 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.CategoryUtils::IsCategory(System.Globalization.UnicodeCategory,System.Char)
extern const MethodInfo CategoryUtils_IsCategory_m4499_MethodInfo = 
{
	"IsCategory"/* name */
	, (methodPointerType)&CategoryUtils_IsCategory_m4499/* method */
	, &CategoryUtils_t1105_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Int32_t75_Int16_t455/* invoker_method */
	, CategoryUtils_t1105_CategoryUtils_IsCategory_m4499_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 572/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* CategoryUtils_t1105_MethodInfos[] =
{
	&CategoryUtils_CategoryFromName_m4497_MethodInfo,
	&CategoryUtils_IsCategory_m4498_MethodInfo,
	&CategoryUtils_IsCategory_m4499_MethodInfo,
	NULL
};
static const Il2CppMethodReference CategoryUtils_t1105_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
};
static bool CategoryUtils_t1105_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType CategoryUtils_t1105_0_0_0;
extern const Il2CppType CategoryUtils_t1105_1_0_0;
struct CategoryUtils_t1105;
const Il2CppTypeDefinitionMetadata CategoryUtils_t1105_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, CategoryUtils_t1105_VTable/* vtableMethods */
	, CategoryUtils_t1105_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo CategoryUtils_t1105_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "CategoryUtils"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, CategoryUtils_t1105_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &CategoryUtils_t1105_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &CategoryUtils_t1105_0_0_0/* byval_arg */
	, &CategoryUtils_t1105_1_0_0/* this_arg */
	, &CategoryUtils_t1105_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CategoryUtils_t1105)/* instance_size */
	, sizeof (CategoryUtils_t1105)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.LinkRef
#include "System_System_Text_RegularExpressions_LinkRef.h"
// Metadata Definition System.Text.RegularExpressions.LinkRef
extern TypeInfo LinkRef_t1106_il2cpp_TypeInfo;
// System.Text.RegularExpressions.LinkRef
#include "System_System_Text_RegularExpressions_LinkRefMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.LinkRef::.ctor()
extern const MethodInfo LinkRef__ctor_m4500_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&LinkRef__ctor_m4500/* method */
	, &LinkRef_t1106_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 573/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* LinkRef_t1106_MethodInfos[] =
{
	&LinkRef__ctor_m4500_MethodInfo,
	NULL
};
static const Il2CppMethodReference LinkRef_t1106_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
};
static bool LinkRef_t1106_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType LinkRef_t1106_0_0_0;
extern const Il2CppType LinkRef_t1106_1_0_0;
struct LinkRef_t1106;
const Il2CppTypeDefinitionMetadata LinkRef_t1106_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, LinkRef_t1106_VTable/* vtableMethods */
	, LinkRef_t1106_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo LinkRef_t1106_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "LinkRef"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, LinkRef_t1106_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &LinkRef_t1106_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &LinkRef_t1106_0_0_0/* byval_arg */
	, &LinkRef_t1106_1_0_0/* this_arg */
	, &LinkRef_t1106_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (LinkRef_t1106)/* instance_size */
	, sizeof (LinkRef_t1106)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048704/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition System.Text.RegularExpressions.ICompiler
extern TypeInfo ICompiler_t1169_il2cpp_TypeInfo;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.ICompiler::GetMachineFactory()
extern const MethodInfo ICompiler_GetMachineFactory_m5058_MethodInfo = 
{
	"GetMachineFactory"/* name */
	, NULL/* method */
	, &ICompiler_t1169_il2cpp_TypeInfo/* declaring_type */
	, &IMachineFactory_t1093_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 574/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitFalse()
extern const MethodInfo ICompiler_EmitFalse_m5059_MethodInfo = 
{
	"EmitFalse"/* name */
	, NULL/* method */
	, &ICompiler_t1169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 575/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitTrue()
extern const MethodInfo ICompiler_EmitTrue_m5060_MethodInfo = 
{
	"EmitTrue"/* name */
	, NULL/* method */
	, &ICompiler_t1169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 576/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Char_t103_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo ICompiler_t1169_ICompiler_EmitCharacter_m5061_ParameterInfos[] = 
{
	{"c", 0, 134218226, 0, &Char_t103_0_0_0},
	{"negate", 1, 134218227, 0, &Boolean_t111_0_0_0},
	{"ignore", 2, 134218228, 0, &Boolean_t111_0_0_0},
	{"reverse", 3, 134218229, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int16_t455_SByte_t113_SByte_t113_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitCharacter(System.Char,System.Boolean,System.Boolean,System.Boolean)
extern const MethodInfo ICompiler_EmitCharacter_m5061_MethodInfo = 
{
	"EmitCharacter"/* name */
	, NULL/* method */
	, &ICompiler_t1169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int16_t455_SByte_t113_SByte_t113_SByte_t113/* invoker_method */
	, ICompiler_t1169_ICompiler_EmitCharacter_m5061_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 577/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Category_t1104_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo ICompiler_t1169_ICompiler_EmitCategory_m5062_ParameterInfos[] = 
{
	{"cat", 0, 134218230, 0, &Category_t1104_0_0_0},
	{"negate", 1, 134218231, 0, &Boolean_t111_0_0_0},
	{"reverse", 2, 134218232, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_UInt16_t369_SByte_t113_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
extern const MethodInfo ICompiler_EmitCategory_m5062_MethodInfo = 
{
	"EmitCategory"/* name */
	, NULL/* method */
	, &ICompiler_t1169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_UInt16_t369_SByte_t113_SByte_t113/* invoker_method */
	, ICompiler_t1169_ICompiler_EmitCategory_m5062_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 578/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Category_t1104_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo ICompiler_t1169_ICompiler_EmitNotCategory_m5063_ParameterInfos[] = 
{
	{"cat", 0, 134218233, 0, &Category_t1104_0_0_0},
	{"negate", 1, 134218234, 0, &Boolean_t111_0_0_0},
	{"reverse", 2, 134218235, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_UInt16_t369_SByte_t113_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitNotCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
extern const MethodInfo ICompiler_EmitNotCategory_m5063_MethodInfo = 
{
	"EmitNotCategory"/* name */
	, NULL/* method */
	, &ICompiler_t1169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_UInt16_t369_SByte_t113_SByte_t113/* invoker_method */
	, ICompiler_t1169_ICompiler_EmitNotCategory_m5063_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 579/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Char_t103_0_0_0;
extern const Il2CppType Char_t103_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo ICompiler_t1169_ICompiler_EmitRange_m5064_ParameterInfos[] = 
{
	{"lo", 0, 134218236, 0, &Char_t103_0_0_0},
	{"hi", 1, 134218237, 0, &Char_t103_0_0_0},
	{"negate", 2, 134218238, 0, &Boolean_t111_0_0_0},
	{"ignore", 3, 134218239, 0, &Boolean_t111_0_0_0},
	{"reverse", 4, 134218240, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int16_t455_Int16_t455_SByte_t113_SByte_t113_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean)
extern const MethodInfo ICompiler_EmitRange_m5064_MethodInfo = 
{
	"EmitRange"/* name */
	, NULL/* method */
	, &ICompiler_t1169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int16_t455_Int16_t455_SByte_t113_SByte_t113_SByte_t113/* invoker_method */
	, ICompiler_t1169_ICompiler_EmitRange_m5064_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 580/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Char_t103_0_0_0;
extern const Il2CppType BitArray_t1142_0_0_0;
extern const Il2CppType BitArray_t1142_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo ICompiler_t1169_ICompiler_EmitSet_m5065_ParameterInfos[] = 
{
	{"lo", 0, 134218241, 0, &Char_t103_0_0_0},
	{"set", 1, 134218242, 0, &BitArray_t1142_0_0_0},
	{"negate", 2, 134218243, 0, &Boolean_t111_0_0_0},
	{"ignore", 3, 134218244, 0, &Boolean_t111_0_0_0},
	{"reverse", 4, 134218245, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int16_t455_Object_t_SByte_t113_SByte_t113_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitSet(System.Char,System.Collections.BitArray,System.Boolean,System.Boolean,System.Boolean)
extern const MethodInfo ICompiler_EmitSet_m5065_MethodInfo = 
{
	"EmitSet"/* name */
	, NULL/* method */
	, &ICompiler_t1169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int16_t455_Object_t_SByte_t113_SByte_t113_SByte_t113/* invoker_method */
	, ICompiler_t1169_ICompiler_EmitSet_m5065_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 581/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo ICompiler_t1169_ICompiler_EmitString_m5066_ParameterInfos[] = 
{
	{"str", 0, 134218246, 0, &String_t_0_0_0},
	{"ignore", 1, 134218247, 0, &Boolean_t111_0_0_0},
	{"reverse", 2, 134218248, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_SByte_t113_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitString(System.String,System.Boolean,System.Boolean)
extern const MethodInfo ICompiler_EmitString_m5066_MethodInfo = 
{
	"EmitString"/* name */
	, NULL/* method */
	, &ICompiler_t1169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_SByte_t113_SByte_t113/* invoker_method */
	, ICompiler_t1169_ICompiler_EmitString_m5066_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 582/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Position_t1100_0_0_0;
extern const Il2CppType Position_t1100_0_0_0;
static const ParameterInfo ICompiler_t1169_ICompiler_EmitPosition_m5067_ParameterInfos[] = 
{
	{"pos", 0, 134218249, 0, &Position_t1100_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_UInt16_t369 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitPosition(System.Text.RegularExpressions.Position)
extern const MethodInfo ICompiler_EmitPosition_m5067_MethodInfo = 
{
	"EmitPosition"/* name */
	, NULL/* method */
	, &ICompiler_t1169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_UInt16_t369/* invoker_method */
	, ICompiler_t1169_ICompiler_EmitPosition_m5067_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 583/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo ICompiler_t1169_ICompiler_EmitOpen_m5068_ParameterInfos[] = 
{
	{"gid", 0, 134218250, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitOpen(System.Int32)
extern const MethodInfo ICompiler_EmitOpen_m5068_MethodInfo = 
{
	"EmitOpen"/* name */
	, NULL/* method */
	, &ICompiler_t1169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75/* invoker_method */
	, ICompiler_t1169_ICompiler_EmitOpen_m5068_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 584/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo ICompiler_t1169_ICompiler_EmitClose_m5069_ParameterInfos[] = 
{
	{"gid", 0, 134218251, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitClose(System.Int32)
extern const MethodInfo ICompiler_EmitClose_m5069_MethodInfo = 
{
	"EmitClose"/* name */
	, NULL/* method */
	, &ICompiler_t1169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75/* invoker_method */
	, ICompiler_t1169_ICompiler_EmitClose_m5069_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 585/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType LinkRef_t1106_0_0_0;
static const ParameterInfo ICompiler_t1169_ICompiler_EmitBalanceStart_m5070_ParameterInfos[] = 
{
	{"gid", 0, 134218252, 0, &Int32_t75_0_0_0},
	{"balance", 1, 134218253, 0, &Int32_t75_0_0_0},
	{"capture", 2, 134218254, 0, &Boolean_t111_0_0_0},
	{"tail", 3, 134218255, 0, &LinkRef_t1106_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75_Int32_t75_SByte_t113_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitBalanceStart(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern const MethodInfo ICompiler_EmitBalanceStart_m5070_MethodInfo = 
{
	"EmitBalanceStart"/* name */
	, NULL/* method */
	, &ICompiler_t1169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75_Int32_t75_SByte_t113_Object_t/* invoker_method */
	, ICompiler_t1169_ICompiler_EmitBalanceStart_m5070_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 12/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 586/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitBalance()
extern const MethodInfo ICompiler_EmitBalance_m5071_MethodInfo = 
{
	"EmitBalance"/* name */
	, NULL/* method */
	, &ICompiler_t1169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 13/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 587/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo ICompiler_t1169_ICompiler_EmitReference_m5072_ParameterInfos[] = 
{
	{"gid", 0, 134218256, 0, &Int32_t75_0_0_0},
	{"ignore", 1, 134218257, 0, &Boolean_t111_0_0_0},
	{"reverse", 2, 134218258, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75_SByte_t113_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitReference(System.Int32,System.Boolean,System.Boolean)
extern const MethodInfo ICompiler_EmitReference_m5072_MethodInfo = 
{
	"EmitReference"/* name */
	, NULL/* method */
	, &ICompiler_t1169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75_SByte_t113_SByte_t113/* invoker_method */
	, ICompiler_t1169_ICompiler_EmitReference_m5072_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 14/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 588/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType LinkRef_t1106_0_0_0;
static const ParameterInfo ICompiler_t1169_ICompiler_EmitIfDefined_m5073_ParameterInfos[] = 
{
	{"gid", 0, 134218259, 0, &Int32_t75_0_0_0},
	{"tail", 1, 134218260, 0, &LinkRef_t1106_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitIfDefined(System.Int32,System.Text.RegularExpressions.LinkRef)
extern const MethodInfo ICompiler_EmitIfDefined_m5073_MethodInfo = 
{
	"EmitIfDefined"/* name */
	, NULL/* method */
	, &ICompiler_t1169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75_Object_t/* invoker_method */
	, ICompiler_t1169_ICompiler_EmitIfDefined_m5073_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 15/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 589/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType LinkRef_t1106_0_0_0;
static const ParameterInfo ICompiler_t1169_ICompiler_EmitSub_m5074_ParameterInfos[] = 
{
	{"tail", 0, 134218261, 0, &LinkRef_t1106_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitSub(System.Text.RegularExpressions.LinkRef)
extern const MethodInfo ICompiler_EmitSub_m5074_MethodInfo = 
{
	"EmitSub"/* name */
	, NULL/* method */
	, &ICompiler_t1169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, ICompiler_t1169_ICompiler_EmitSub_m5074_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 16/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 590/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType LinkRef_t1106_0_0_0;
extern const Il2CppType LinkRef_t1106_0_0_0;
static const ParameterInfo ICompiler_t1169_ICompiler_EmitTest_m5075_ParameterInfos[] = 
{
	{"yes", 0, 134218262, 0, &LinkRef_t1106_0_0_0},
	{"tail", 1, 134218263, 0, &LinkRef_t1106_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitTest(System.Text.RegularExpressions.LinkRef,System.Text.RegularExpressions.LinkRef)
extern const MethodInfo ICompiler_EmitTest_m5075_MethodInfo = 
{
	"EmitTest"/* name */
	, NULL/* method */
	, &ICompiler_t1169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Object_t/* invoker_method */
	, ICompiler_t1169_ICompiler_EmitTest_m5075_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 17/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 591/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType LinkRef_t1106_0_0_0;
static const ParameterInfo ICompiler_t1169_ICompiler_EmitBranch_m5076_ParameterInfos[] = 
{
	{"next", 0, 134218264, 0, &LinkRef_t1106_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitBranch(System.Text.RegularExpressions.LinkRef)
extern const MethodInfo ICompiler_EmitBranch_m5076_MethodInfo = 
{
	"EmitBranch"/* name */
	, NULL/* method */
	, &ICompiler_t1169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, ICompiler_t1169_ICompiler_EmitBranch_m5076_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 18/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 592/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType LinkRef_t1106_0_0_0;
static const ParameterInfo ICompiler_t1169_ICompiler_EmitJump_m5077_ParameterInfos[] = 
{
	{"target", 0, 134218265, 0, &LinkRef_t1106_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitJump(System.Text.RegularExpressions.LinkRef)
extern const MethodInfo ICompiler_EmitJump_m5077_MethodInfo = 
{
	"EmitJump"/* name */
	, NULL/* method */
	, &ICompiler_t1169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, ICompiler_t1169_ICompiler_EmitJump_m5077_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 19/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 593/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType LinkRef_t1106_0_0_0;
static const ParameterInfo ICompiler_t1169_ICompiler_EmitRepeat_m5078_ParameterInfos[] = 
{
	{"min", 0, 134218266, 0, &Int32_t75_0_0_0},
	{"max", 1, 134218267, 0, &Int32_t75_0_0_0},
	{"lazy", 2, 134218268, 0, &Boolean_t111_0_0_0},
	{"until", 3, 134218269, 0, &LinkRef_t1106_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75_Int32_t75_SByte_t113_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern const MethodInfo ICompiler_EmitRepeat_m5078_MethodInfo = 
{
	"EmitRepeat"/* name */
	, NULL/* method */
	, &ICompiler_t1169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75_Int32_t75_SByte_t113_Object_t/* invoker_method */
	, ICompiler_t1169_ICompiler_EmitRepeat_m5078_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 20/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 594/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType LinkRef_t1106_0_0_0;
static const ParameterInfo ICompiler_t1169_ICompiler_EmitUntil_m5079_ParameterInfos[] = 
{
	{"repeat", 0, 134218270, 0, &LinkRef_t1106_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitUntil(System.Text.RegularExpressions.LinkRef)
extern const MethodInfo ICompiler_EmitUntil_m5079_MethodInfo = 
{
	"EmitUntil"/* name */
	, NULL/* method */
	, &ICompiler_t1169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, ICompiler_t1169_ICompiler_EmitUntil_m5079_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 21/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 595/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType LinkRef_t1106_0_0_0;
static const ParameterInfo ICompiler_t1169_ICompiler_EmitIn_m5080_ParameterInfos[] = 
{
	{"tail", 0, 134218271, 0, &LinkRef_t1106_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitIn(System.Text.RegularExpressions.LinkRef)
extern const MethodInfo ICompiler_EmitIn_m5080_MethodInfo = 
{
	"EmitIn"/* name */
	, NULL/* method */
	, &ICompiler_t1169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, ICompiler_t1169_ICompiler_EmitIn_m5080_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 22/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 596/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo ICompiler_t1169_ICompiler_EmitInfo_m5081_ParameterInfos[] = 
{
	{"count", 0, 134218272, 0, &Int32_t75_0_0_0},
	{"min", 1, 134218273, 0, &Int32_t75_0_0_0},
	{"max", 2, 134218274, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75_Int32_t75_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitInfo(System.Int32,System.Int32,System.Int32)
extern const MethodInfo ICompiler_EmitInfo_m5081_MethodInfo = 
{
	"EmitInfo"/* name */
	, NULL/* method */
	, &ICompiler_t1169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75_Int32_t75_Int32_t75/* invoker_method */
	, ICompiler_t1169_ICompiler_EmitInfo_m5081_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 23/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 597/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType LinkRef_t1106_0_0_0;
static const ParameterInfo ICompiler_t1169_ICompiler_EmitFastRepeat_m5082_ParameterInfos[] = 
{
	{"min", 0, 134218275, 0, &Int32_t75_0_0_0},
	{"max", 1, 134218276, 0, &Int32_t75_0_0_0},
	{"lazy", 2, 134218277, 0, &Boolean_t111_0_0_0},
	{"tail", 3, 134218278, 0, &LinkRef_t1106_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75_Int32_t75_SByte_t113_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitFastRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern const MethodInfo ICompiler_EmitFastRepeat_m5082_MethodInfo = 
{
	"EmitFastRepeat"/* name */
	, NULL/* method */
	, &ICompiler_t1169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75_Int32_t75_SByte_t113_Object_t/* invoker_method */
	, ICompiler_t1169_ICompiler_EmitFastRepeat_m5082_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 24/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 598/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType LinkRef_t1106_0_0_0;
static const ParameterInfo ICompiler_t1169_ICompiler_EmitAnchor_m5083_ParameterInfos[] = 
{
	{"reverse", 0, 134218279, 0, &Boolean_t111_0_0_0},
	{"offset", 1, 134218280, 0, &Int32_t75_0_0_0},
	{"tail", 2, 134218281, 0, &LinkRef_t1106_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_SByte_t113_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitAnchor(System.Boolean,System.Int32,System.Text.RegularExpressions.LinkRef)
extern const MethodInfo ICompiler_EmitAnchor_m5083_MethodInfo = 
{
	"EmitAnchor"/* name */
	, NULL/* method */
	, &ICompiler_t1169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_SByte_t113_Int32_t75_Object_t/* invoker_method */
	, ICompiler_t1169_ICompiler_EmitAnchor_m5083_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 25/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 599/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitBranchEnd()
extern const MethodInfo ICompiler_EmitBranchEnd_m5084_MethodInfo = 
{
	"EmitBranchEnd"/* name */
	, NULL/* method */
	, &ICompiler_t1169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 26/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 600/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitAlternationEnd()
extern const MethodInfo ICompiler_EmitAlternationEnd_m5085_MethodInfo = 
{
	"EmitAlternationEnd"/* name */
	, NULL/* method */
	, &ICompiler_t1169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 27/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 601/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink()
extern const MethodInfo ICompiler_NewLink_m5086_MethodInfo = 
{
	"NewLink"/* name */
	, NULL/* method */
	, &ICompiler_t1169_il2cpp_TypeInfo/* declaring_type */
	, &LinkRef_t1106_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 28/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 602/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType LinkRef_t1106_0_0_0;
static const ParameterInfo ICompiler_t1169_ICompiler_ResolveLink_m5087_ParameterInfos[] = 
{
	{"link", 0, 134218282, 0, &LinkRef_t1106_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef)
extern const MethodInfo ICompiler_ResolveLink_m5087_MethodInfo = 
{
	"ResolveLink"/* name */
	, NULL/* method */
	, &ICompiler_t1169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, ICompiler_t1169_ICompiler_ResolveLink_m5087_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 29/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 603/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ICompiler_t1169_MethodInfos[] =
{
	&ICompiler_GetMachineFactory_m5058_MethodInfo,
	&ICompiler_EmitFalse_m5059_MethodInfo,
	&ICompiler_EmitTrue_m5060_MethodInfo,
	&ICompiler_EmitCharacter_m5061_MethodInfo,
	&ICompiler_EmitCategory_m5062_MethodInfo,
	&ICompiler_EmitNotCategory_m5063_MethodInfo,
	&ICompiler_EmitRange_m5064_MethodInfo,
	&ICompiler_EmitSet_m5065_MethodInfo,
	&ICompiler_EmitString_m5066_MethodInfo,
	&ICompiler_EmitPosition_m5067_MethodInfo,
	&ICompiler_EmitOpen_m5068_MethodInfo,
	&ICompiler_EmitClose_m5069_MethodInfo,
	&ICompiler_EmitBalanceStart_m5070_MethodInfo,
	&ICompiler_EmitBalance_m5071_MethodInfo,
	&ICompiler_EmitReference_m5072_MethodInfo,
	&ICompiler_EmitIfDefined_m5073_MethodInfo,
	&ICompiler_EmitSub_m5074_MethodInfo,
	&ICompiler_EmitTest_m5075_MethodInfo,
	&ICompiler_EmitBranch_m5076_MethodInfo,
	&ICompiler_EmitJump_m5077_MethodInfo,
	&ICompiler_EmitRepeat_m5078_MethodInfo,
	&ICompiler_EmitUntil_m5079_MethodInfo,
	&ICompiler_EmitIn_m5080_MethodInfo,
	&ICompiler_EmitInfo_m5081_MethodInfo,
	&ICompiler_EmitFastRepeat_m5082_MethodInfo,
	&ICompiler_EmitAnchor_m5083_MethodInfo,
	&ICompiler_EmitBranchEnd_m5084_MethodInfo,
	&ICompiler_EmitAlternationEnd_m5085_MethodInfo,
	&ICompiler_NewLink_m5086_MethodInfo,
	&ICompiler_ResolveLink_m5087_MethodInfo,
	NULL
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType ICompiler_t1169_0_0_0;
extern const Il2CppType ICompiler_t1169_1_0_0;
struct ICompiler_t1169;
const Il2CppTypeDefinitionMetadata ICompiler_t1169_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ICompiler_t1169_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICompiler"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, ICompiler_t1169_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ICompiler_t1169_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &ICompiler_t1169_0_0_0/* byval_arg */
	, &ICompiler_t1169_1_0_0/* this_arg */
	, &ICompiler_t1169_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 160/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 30/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.InterpreterFactory
#include "System_System_Text_RegularExpressions_InterpreterFactory.h"
// Metadata Definition System.Text.RegularExpressions.InterpreterFactory
extern TypeInfo InterpreterFactory_t1107_il2cpp_TypeInfo;
// System.Text.RegularExpressions.InterpreterFactory
#include "System_System_Text_RegularExpressions_InterpreterFactoryMethodDeclarations.h"
extern const Il2CppType UInt16U5BU5D_t1024_0_0_0;
extern const Il2CppType UInt16U5BU5D_t1024_0_0_0;
static const ParameterInfo InterpreterFactory_t1107_InterpreterFactory__ctor_m4501_ParameterInfos[] = 
{
	{"pattern", 0, 134218283, 0, &UInt16U5BU5D_t1024_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.InterpreterFactory::.ctor(System.UInt16[])
extern const MethodInfo InterpreterFactory__ctor_m4501_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InterpreterFactory__ctor_m4501/* method */
	, &InterpreterFactory_t1107_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, InterpreterFactory_t1107_InterpreterFactory__ctor_m4501_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 604/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IMachine_t1089_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.InterpreterFactory::NewInstance()
extern const MethodInfo InterpreterFactory_NewInstance_m4502_MethodInfo = 
{
	"NewInstance"/* name */
	, (methodPointerType)&InterpreterFactory_NewInstance_m4502/* method */
	, &InterpreterFactory_t1107_il2cpp_TypeInfo/* declaring_type */
	, &IMachine_t1089_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 605/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.InterpreterFactory::get_GroupCount()
extern const MethodInfo InterpreterFactory_get_GroupCount_m4503_MethodInfo = 
{
	"get_GroupCount"/* name */
	, (methodPointerType)&InterpreterFactory_get_GroupCount_m4503/* method */
	, &InterpreterFactory_t1107_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 606/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.InterpreterFactory::get_Gap()
extern const MethodInfo InterpreterFactory_get_Gap_m4504_MethodInfo = 
{
	"get_Gap"/* name */
	, (methodPointerType)&InterpreterFactory_get_Gap_m4504/* method */
	, &InterpreterFactory_t1107_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 607/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo InterpreterFactory_t1107_InterpreterFactory_set_Gap_m4505_ParameterInfos[] = 
{
	{"value", 0, 134218284, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.InterpreterFactory::set_Gap(System.Int32)
extern const MethodInfo InterpreterFactory_set_Gap_m4505_MethodInfo = 
{
	"set_Gap"/* name */
	, (methodPointerType)&InterpreterFactory_set_Gap_m4505/* method */
	, &InterpreterFactory_t1107_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75/* invoker_method */
	, InterpreterFactory_t1107_InterpreterFactory_set_Gap_m4505_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 608/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IDictionary_t1094_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.IDictionary System.Text.RegularExpressions.InterpreterFactory::get_Mapping()
extern const MethodInfo InterpreterFactory_get_Mapping_m4506_MethodInfo = 
{
	"get_Mapping"/* name */
	, (methodPointerType)&InterpreterFactory_get_Mapping_m4506/* method */
	, &InterpreterFactory_t1107_il2cpp_TypeInfo/* declaring_type */
	, &IDictionary_t1094_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 609/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IDictionary_t1094_0_0_0;
static const ParameterInfo InterpreterFactory_t1107_InterpreterFactory_set_Mapping_m4507_ParameterInfos[] = 
{
	{"value", 0, 134218285, 0, &IDictionary_t1094_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.InterpreterFactory::set_Mapping(System.Collections.IDictionary)
extern const MethodInfo InterpreterFactory_set_Mapping_m4507_MethodInfo = 
{
	"set_Mapping"/* name */
	, (methodPointerType)&InterpreterFactory_set_Mapping_m4507/* method */
	, &InterpreterFactory_t1107_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, InterpreterFactory_t1107_InterpreterFactory_set_Mapping_m4507_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 610/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType StringU5BU5D_t48_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String[] System.Text.RegularExpressions.InterpreterFactory::get_NamesMapping()
extern const MethodInfo InterpreterFactory_get_NamesMapping_m4508_MethodInfo = 
{
	"get_NamesMapping"/* name */
	, (methodPointerType)&InterpreterFactory_get_NamesMapping_m4508/* method */
	, &InterpreterFactory_t1107_il2cpp_TypeInfo/* declaring_type */
	, &StringU5BU5D_t48_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 611/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType StringU5BU5D_t48_0_0_0;
static const ParameterInfo InterpreterFactory_t1107_InterpreterFactory_set_NamesMapping_m4509_ParameterInfos[] = 
{
	{"value", 0, 134218286, 0, &StringU5BU5D_t48_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.InterpreterFactory::set_NamesMapping(System.String[])
extern const MethodInfo InterpreterFactory_set_NamesMapping_m4509_MethodInfo = 
{
	"set_NamesMapping"/* name */
	, (methodPointerType)&InterpreterFactory_set_NamesMapping_m4509/* method */
	, &InterpreterFactory_t1107_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, InterpreterFactory_t1107_InterpreterFactory_set_NamesMapping_m4509_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 612/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* InterpreterFactory_t1107_MethodInfos[] =
{
	&InterpreterFactory__ctor_m4501_MethodInfo,
	&InterpreterFactory_NewInstance_m4502_MethodInfo,
	&InterpreterFactory_get_GroupCount_m4503_MethodInfo,
	&InterpreterFactory_get_Gap_m4504_MethodInfo,
	&InterpreterFactory_set_Gap_m4505_MethodInfo,
	&InterpreterFactory_get_Mapping_m4506_MethodInfo,
	&InterpreterFactory_set_Mapping_m4507_MethodInfo,
	&InterpreterFactory_get_NamesMapping_m4508_MethodInfo,
	&InterpreterFactory_set_NamesMapping_m4509_MethodInfo,
	NULL
};
extern const MethodInfo InterpreterFactory_get_GroupCount_m4503_MethodInfo;
static const PropertyInfo InterpreterFactory_t1107____GroupCount_PropertyInfo = 
{
	&InterpreterFactory_t1107_il2cpp_TypeInfo/* parent */
	, "GroupCount"/* name */
	, &InterpreterFactory_get_GroupCount_m4503_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo InterpreterFactory_get_Gap_m4504_MethodInfo;
extern const MethodInfo InterpreterFactory_set_Gap_m4505_MethodInfo;
static const PropertyInfo InterpreterFactory_t1107____Gap_PropertyInfo = 
{
	&InterpreterFactory_t1107_il2cpp_TypeInfo/* parent */
	, "Gap"/* name */
	, &InterpreterFactory_get_Gap_m4504_MethodInfo/* get */
	, &InterpreterFactory_set_Gap_m4505_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo InterpreterFactory_get_Mapping_m4506_MethodInfo;
extern const MethodInfo InterpreterFactory_set_Mapping_m4507_MethodInfo;
static const PropertyInfo InterpreterFactory_t1107____Mapping_PropertyInfo = 
{
	&InterpreterFactory_t1107_il2cpp_TypeInfo/* parent */
	, "Mapping"/* name */
	, &InterpreterFactory_get_Mapping_m4506_MethodInfo/* get */
	, &InterpreterFactory_set_Mapping_m4507_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo InterpreterFactory_get_NamesMapping_m4508_MethodInfo;
extern const MethodInfo InterpreterFactory_set_NamesMapping_m4509_MethodInfo;
static const PropertyInfo InterpreterFactory_t1107____NamesMapping_PropertyInfo = 
{
	&InterpreterFactory_t1107_il2cpp_TypeInfo/* parent */
	, "NamesMapping"/* name */
	, &InterpreterFactory_get_NamesMapping_m4508_MethodInfo/* get */
	, &InterpreterFactory_set_NamesMapping_m4509_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* InterpreterFactory_t1107_PropertyInfos[] =
{
	&InterpreterFactory_t1107____GroupCount_PropertyInfo,
	&InterpreterFactory_t1107____Gap_PropertyInfo,
	&InterpreterFactory_t1107____Mapping_PropertyInfo,
	&InterpreterFactory_t1107____NamesMapping_PropertyInfo,
	NULL
};
extern const MethodInfo InterpreterFactory_NewInstance_m4502_MethodInfo;
static const Il2CppMethodReference InterpreterFactory_t1107_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	&InterpreterFactory_NewInstance_m4502_MethodInfo,
	&InterpreterFactory_get_Mapping_m4506_MethodInfo,
	&InterpreterFactory_set_Mapping_m4507_MethodInfo,
	&InterpreterFactory_get_GroupCount_m4503_MethodInfo,
	&InterpreterFactory_get_Gap_m4504_MethodInfo,
	&InterpreterFactory_set_Gap_m4505_MethodInfo,
	&InterpreterFactory_get_NamesMapping_m4508_MethodInfo,
	&InterpreterFactory_set_NamesMapping_m4509_MethodInfo,
};
static bool InterpreterFactory_t1107_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* InterpreterFactory_t1107_InterfacesTypeInfos[] = 
{
	&IMachineFactory_t1093_0_0_0,
};
static Il2CppInterfaceOffsetPair InterpreterFactory_t1107_InterfacesOffsets[] = 
{
	{ &IMachineFactory_t1093_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType InterpreterFactory_t1107_0_0_0;
extern const Il2CppType InterpreterFactory_t1107_1_0_0;
struct InterpreterFactory_t1107;
const Il2CppTypeDefinitionMetadata InterpreterFactory_t1107_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, InterpreterFactory_t1107_InterfacesTypeInfos/* implementedInterfaces */
	, InterpreterFactory_t1107_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, InterpreterFactory_t1107_VTable/* vtableMethods */
	, InterpreterFactory_t1107_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 646/* fieldStart */

};
TypeInfo InterpreterFactory_t1107_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "InterpreterFactory"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, InterpreterFactory_t1107_MethodInfos/* methods */
	, InterpreterFactory_t1107_PropertyInfos/* properties */
	, NULL/* events */
	, &InterpreterFactory_t1107_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &InterpreterFactory_t1107_0_0_0/* byval_arg */
	, &InterpreterFactory_t1107_1_0_0/* this_arg */
	, &InterpreterFactory_t1107_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InterpreterFactory_t1107)/* instance_size */
	, sizeof (InterpreterFactory_t1107)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 9/* method_count */
	, 4/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 12/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack/Link
#include "System_System_Text_RegularExpressions_PatternCompiler_Patter.h"
// Metadata Definition System.Text.RegularExpressions.PatternCompiler/PatternLinkStack/Link
extern TypeInfo Link_t1108_il2cpp_TypeInfo;
// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack/Link
#include "System_System_Text_RegularExpressions_PatternCompiler_PatterMethodDeclarations.h"
static const MethodInfo* Link_t1108_MethodInfos[] =
{
	NULL
};
extern const MethodInfo ValueType_Equals_m2220_MethodInfo;
extern const MethodInfo ValueType_GetHashCode_m2221_MethodInfo;
extern const MethodInfo ValueType_ToString_m2224_MethodInfo;
static const Il2CppMethodReference Link_t1108_VTable[] =
{
	&ValueType_Equals_m2220_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&ValueType_GetHashCode_m2221_MethodInfo,
	&ValueType_ToString_m2224_MethodInfo,
};
static bool Link_t1108_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType Link_t1108_0_0_0;
extern const Il2CppType Link_t1108_1_0_0;
extern const Il2CppType ValueType_t446_0_0_0;
extern TypeInfo PatternLinkStack_t1109_il2cpp_TypeInfo;
extern const Il2CppType PatternLinkStack_t1109_0_0_0;
const Il2CppTypeDefinitionMetadata Link_t1108_DefinitionMetadata = 
{
	&PatternLinkStack_t1109_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t446_0_0_0/* parent */
	, Link_t1108_VTable/* vtableMethods */
	, Link_t1108_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 650/* fieldStart */

};
TypeInfo Link_t1108_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Link"/* name */
	, ""/* namespaze */
	, Link_t1108_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Link_t1108_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Link_t1108_0_0_0/* byval_arg */
	, &Link_t1108_1_0_0/* this_arg */
	, &Link_t1108_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Link_t1108)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (Link_t1108)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(Link_t1108 )/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048843/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, true/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack
#include "System_System_Text_RegularExpressions_PatternCompiler_Patter_0.h"
// Metadata Definition System.Text.RegularExpressions.PatternCompiler/PatternLinkStack
// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack
#include "System_System_Text_RegularExpressions_PatternCompiler_Patter_0MethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::.ctor()
extern const MethodInfo PatternLinkStack__ctor_m4510_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&PatternLinkStack__ctor_m4510/* method */
	, &PatternLinkStack_t1109_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 653/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo PatternLinkStack_t1109_PatternLinkStack_set_BaseAddress_m4511_ParameterInfos[] = 
{
	{"value", 0, 134218357, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::set_BaseAddress(System.Int32)
extern const MethodInfo PatternLinkStack_set_BaseAddress_m4511_MethodInfo = 
{
	"set_BaseAddress"/* name */
	, (methodPointerType)&PatternLinkStack_set_BaseAddress_m4511/* method */
	, &PatternLinkStack_t1109_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75/* invoker_method */
	, PatternLinkStack_t1109_PatternLinkStack_set_BaseAddress_m4511_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 654/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::get_OffsetAddress()
extern const MethodInfo PatternLinkStack_get_OffsetAddress_m4512_MethodInfo = 
{
	"get_OffsetAddress"/* name */
	, (methodPointerType)&PatternLinkStack_get_OffsetAddress_m4512/* method */
	, &PatternLinkStack_t1109_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 655/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo PatternLinkStack_t1109_PatternLinkStack_set_OffsetAddress_m4513_ParameterInfos[] = 
{
	{"value", 0, 134218358, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::set_OffsetAddress(System.Int32)
extern const MethodInfo PatternLinkStack_set_OffsetAddress_m4513_MethodInfo = 
{
	"set_OffsetAddress"/* name */
	, (methodPointerType)&PatternLinkStack_set_OffsetAddress_m4513/* method */
	, &PatternLinkStack_t1109_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75/* invoker_method */
	, PatternLinkStack_t1109_PatternLinkStack_set_OffsetAddress_m4513_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 656/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo PatternLinkStack_t1109_PatternLinkStack_GetOffset_m4514_ParameterInfos[] = 
{
	{"target_addr", 0, 134218359, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::GetOffset(System.Int32)
extern const MethodInfo PatternLinkStack_GetOffset_m4514_MethodInfo = 
{
	"GetOffset"/* name */
	, (methodPointerType)&PatternLinkStack_GetOffset_m4514/* method */
	, &PatternLinkStack_t1109_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Int32_t75/* invoker_method */
	, PatternLinkStack_t1109_PatternLinkStack_GetOffset_m4514_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 657/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::GetCurrent()
extern const MethodInfo PatternLinkStack_GetCurrent_m4515_MethodInfo = 
{
	"GetCurrent"/* name */
	, (methodPointerType)&PatternLinkStack_GetCurrent_m4515/* method */
	, &PatternLinkStack_t1109_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 658/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo PatternLinkStack_t1109_PatternLinkStack_SetCurrent_m4516_ParameterInfos[] = 
{
	{"l", 0, 134218360, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::SetCurrent(System.Object)
extern const MethodInfo PatternLinkStack_SetCurrent_m4516_MethodInfo = 
{
	"SetCurrent"/* name */
	, (methodPointerType)&PatternLinkStack_SetCurrent_m4516/* method */
	, &PatternLinkStack_t1109_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, PatternLinkStack_t1109_PatternLinkStack_SetCurrent_m4516_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 659/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* PatternLinkStack_t1109_MethodInfos[] =
{
	&PatternLinkStack__ctor_m4510_MethodInfo,
	&PatternLinkStack_set_BaseAddress_m4511_MethodInfo,
	&PatternLinkStack_get_OffsetAddress_m4512_MethodInfo,
	&PatternLinkStack_set_OffsetAddress_m4513_MethodInfo,
	&PatternLinkStack_GetOffset_m4514_MethodInfo,
	&PatternLinkStack_GetCurrent_m4515_MethodInfo,
	&PatternLinkStack_SetCurrent_m4516_MethodInfo,
	NULL
};
extern const MethodInfo PatternLinkStack_set_BaseAddress_m4511_MethodInfo;
static const PropertyInfo PatternLinkStack_t1109____BaseAddress_PropertyInfo = 
{
	&PatternLinkStack_t1109_il2cpp_TypeInfo/* parent */
	, "BaseAddress"/* name */
	, NULL/* get */
	, &PatternLinkStack_set_BaseAddress_m4511_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo PatternLinkStack_get_OffsetAddress_m4512_MethodInfo;
extern const MethodInfo PatternLinkStack_set_OffsetAddress_m4513_MethodInfo;
static const PropertyInfo PatternLinkStack_t1109____OffsetAddress_PropertyInfo = 
{
	&PatternLinkStack_t1109_il2cpp_TypeInfo/* parent */
	, "OffsetAddress"/* name */
	, &PatternLinkStack_get_OffsetAddress_m4512_MethodInfo/* get */
	, &PatternLinkStack_set_OffsetAddress_m4513_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* PatternLinkStack_t1109_PropertyInfos[] =
{
	&PatternLinkStack_t1109____BaseAddress_PropertyInfo,
	&PatternLinkStack_t1109____OffsetAddress_PropertyInfo,
	NULL
};
static const Il2CppType* PatternLinkStack_t1109_il2cpp_TypeInfo__nestedTypes[1] =
{
	&Link_t1108_0_0_0,
};
extern const MethodInfo PatternLinkStack_GetCurrent_m4515_MethodInfo;
extern const MethodInfo PatternLinkStack_SetCurrent_m4516_MethodInfo;
static const Il2CppMethodReference PatternLinkStack_t1109_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	&PatternLinkStack_GetCurrent_m4515_MethodInfo,
	&PatternLinkStack_SetCurrent_m4516_MethodInfo,
};
static bool PatternLinkStack_t1109_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType PatternLinkStack_t1109_1_0_0;
extern const Il2CppType LinkStack_t1110_0_0_0;
extern TypeInfo PatternCompiler_t1111_il2cpp_TypeInfo;
extern const Il2CppType PatternCompiler_t1111_0_0_0;
struct PatternLinkStack_t1109;
const Il2CppTypeDefinitionMetadata PatternLinkStack_t1109_DefinitionMetadata = 
{
	&PatternCompiler_t1111_0_0_0/* declaringType */
	, PatternLinkStack_t1109_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &LinkStack_t1110_0_0_0/* parent */
	, PatternLinkStack_t1109_VTable/* vtableMethods */
	, PatternLinkStack_t1109_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 652/* fieldStart */

};
TypeInfo PatternLinkStack_t1109_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "PatternLinkStack"/* name */
	, ""/* namespaze */
	, PatternLinkStack_t1109_MethodInfos/* methods */
	, PatternLinkStack_t1109_PropertyInfos/* properties */
	, NULL/* events */
	, &PatternLinkStack_t1109_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &PatternLinkStack_t1109_0_0_0/* byval_arg */
	, &PatternLinkStack_t1109_1_0_0/* this_arg */
	, &PatternLinkStack_t1109_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PatternLinkStack_t1109)/* instance_size */
	, sizeof (PatternLinkStack_t1109)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048579/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 7/* method_count */
	, 2/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.PatternCompiler
#include "System_System_Text_RegularExpressions_PatternCompiler.h"
// Metadata Definition System.Text.RegularExpressions.PatternCompiler
// System.Text.RegularExpressions.PatternCompiler
#include "System_System_Text_RegularExpressions_PatternCompilerMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::.ctor()
extern const MethodInfo PatternCompiler__ctor_m4517_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&PatternCompiler__ctor_m4517/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 613/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType OpCode_t1098_0_0_0;
extern const Il2CppType OpCode_t1098_0_0_0;
extern const Il2CppType OpFlags_t1099_0_0_0;
extern const Il2CppType OpFlags_t1099_0_0_0;
static const ParameterInfo PatternCompiler_t1111_PatternCompiler_EncodeOp_m4518_ParameterInfos[] = 
{
	{"op", 0, 134218287, 0, &OpCode_t1098_0_0_0},
	{"flags", 1, 134218288, 0, &OpFlags_t1099_0_0_0},
};
extern const Il2CppType UInt16_t369_0_0_0;
extern void* RuntimeInvoker_UInt16_t369_UInt16_t369_UInt16_t369 (const MethodInfo* method, void* obj, void** args);
// System.UInt16 System.Text.RegularExpressions.PatternCompiler::EncodeOp(System.Text.RegularExpressions.OpCode,System.Text.RegularExpressions.OpFlags)
extern const MethodInfo PatternCompiler_EncodeOp_m4518_MethodInfo = 
{
	"EncodeOp"/* name */
	, (methodPointerType)&PatternCompiler_EncodeOp_m4518/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &UInt16_t369_0_0_0/* return_type */
	, RuntimeInvoker_UInt16_t369_UInt16_t369_UInt16_t369/* invoker_method */
	, PatternCompiler_t1111_PatternCompiler_EncodeOp_m4518_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 614/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.PatternCompiler::GetMachineFactory()
extern const MethodInfo PatternCompiler_GetMachineFactory_m4519_MethodInfo = 
{
	"GetMachineFactory"/* name */
	, (methodPointerType)&PatternCompiler_GetMachineFactory_m4519/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &IMachineFactory_t1093_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 615/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitFalse()
extern const MethodInfo PatternCompiler_EmitFalse_m4520_MethodInfo = 
{
	"EmitFalse"/* name */
	, (methodPointerType)&PatternCompiler_EmitFalse_m4520/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 616/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitTrue()
extern const MethodInfo PatternCompiler_EmitTrue_m4521_MethodInfo = 
{
	"EmitTrue"/* name */
	, (methodPointerType)&PatternCompiler_EmitTrue_m4521/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 617/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo PatternCompiler_t1111_PatternCompiler_EmitCount_m4522_ParameterInfos[] = 
{
	{"count", 0, 134218289, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitCount(System.Int32)
extern const MethodInfo PatternCompiler_EmitCount_m4522_MethodInfo = 
{
	"EmitCount"/* name */
	, (methodPointerType)&PatternCompiler_EmitCount_m4522/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75/* invoker_method */
	, PatternCompiler_t1111_PatternCompiler_EmitCount_m4522_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 618/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Char_t103_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo PatternCompiler_t1111_PatternCompiler_EmitCharacter_m4523_ParameterInfos[] = 
{
	{"c", 0, 134218290, 0, &Char_t103_0_0_0},
	{"negate", 1, 134218291, 0, &Boolean_t111_0_0_0},
	{"ignore", 2, 134218292, 0, &Boolean_t111_0_0_0},
	{"reverse", 3, 134218293, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int16_t455_SByte_t113_SByte_t113_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitCharacter(System.Char,System.Boolean,System.Boolean,System.Boolean)
extern const MethodInfo PatternCompiler_EmitCharacter_m4523_MethodInfo = 
{
	"EmitCharacter"/* name */
	, (methodPointerType)&PatternCompiler_EmitCharacter_m4523/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int16_t455_SByte_t113_SByte_t113_SByte_t113/* invoker_method */
	, PatternCompiler_t1111_PatternCompiler_EmitCharacter_m4523_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 619/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Category_t1104_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo PatternCompiler_t1111_PatternCompiler_EmitCategory_m4524_ParameterInfos[] = 
{
	{"cat", 0, 134218294, 0, &Category_t1104_0_0_0},
	{"negate", 1, 134218295, 0, &Boolean_t111_0_0_0},
	{"reverse", 2, 134218296, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_UInt16_t369_SByte_t113_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
extern const MethodInfo PatternCompiler_EmitCategory_m4524_MethodInfo = 
{
	"EmitCategory"/* name */
	, (methodPointerType)&PatternCompiler_EmitCategory_m4524/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_UInt16_t369_SByte_t113_SByte_t113/* invoker_method */
	, PatternCompiler_t1111_PatternCompiler_EmitCategory_m4524_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 620/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Category_t1104_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo PatternCompiler_t1111_PatternCompiler_EmitNotCategory_m4525_ParameterInfos[] = 
{
	{"cat", 0, 134218297, 0, &Category_t1104_0_0_0},
	{"negate", 1, 134218298, 0, &Boolean_t111_0_0_0},
	{"reverse", 2, 134218299, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_UInt16_t369_SByte_t113_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitNotCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
extern const MethodInfo PatternCompiler_EmitNotCategory_m4525_MethodInfo = 
{
	"EmitNotCategory"/* name */
	, (methodPointerType)&PatternCompiler_EmitNotCategory_m4525/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_UInt16_t369_SByte_t113_SByte_t113/* invoker_method */
	, PatternCompiler_t1111_PatternCompiler_EmitNotCategory_m4525_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 621/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Char_t103_0_0_0;
extern const Il2CppType Char_t103_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo PatternCompiler_t1111_PatternCompiler_EmitRange_m4526_ParameterInfos[] = 
{
	{"lo", 0, 134218300, 0, &Char_t103_0_0_0},
	{"hi", 1, 134218301, 0, &Char_t103_0_0_0},
	{"negate", 2, 134218302, 0, &Boolean_t111_0_0_0},
	{"ignore", 3, 134218303, 0, &Boolean_t111_0_0_0},
	{"reverse", 4, 134218304, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int16_t455_Int16_t455_SByte_t113_SByte_t113_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean)
extern const MethodInfo PatternCompiler_EmitRange_m4526_MethodInfo = 
{
	"EmitRange"/* name */
	, (methodPointerType)&PatternCompiler_EmitRange_m4526/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int16_t455_Int16_t455_SByte_t113_SByte_t113_SByte_t113/* invoker_method */
	, PatternCompiler_t1111_PatternCompiler_EmitRange_m4526_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 622/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Char_t103_0_0_0;
extern const Il2CppType BitArray_t1142_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo PatternCompiler_t1111_PatternCompiler_EmitSet_m4527_ParameterInfos[] = 
{
	{"lo", 0, 134218305, 0, &Char_t103_0_0_0},
	{"set", 1, 134218306, 0, &BitArray_t1142_0_0_0},
	{"negate", 2, 134218307, 0, &Boolean_t111_0_0_0},
	{"ignore", 3, 134218308, 0, &Boolean_t111_0_0_0},
	{"reverse", 4, 134218309, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int16_t455_Object_t_SByte_t113_SByte_t113_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitSet(System.Char,System.Collections.BitArray,System.Boolean,System.Boolean,System.Boolean)
extern const MethodInfo PatternCompiler_EmitSet_m4527_MethodInfo = 
{
	"EmitSet"/* name */
	, (methodPointerType)&PatternCompiler_EmitSet_m4527/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int16_t455_Object_t_SByte_t113_SByte_t113_SByte_t113/* invoker_method */
	, PatternCompiler_t1111_PatternCompiler_EmitSet_m4527_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 623/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo PatternCompiler_t1111_PatternCompiler_EmitString_m4528_ParameterInfos[] = 
{
	{"str", 0, 134218310, 0, &String_t_0_0_0},
	{"ignore", 1, 134218311, 0, &Boolean_t111_0_0_0},
	{"reverse", 2, 134218312, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_SByte_t113_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitString(System.String,System.Boolean,System.Boolean)
extern const MethodInfo PatternCompiler_EmitString_m4528_MethodInfo = 
{
	"EmitString"/* name */
	, (methodPointerType)&PatternCompiler_EmitString_m4528/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_SByte_t113_SByte_t113/* invoker_method */
	, PatternCompiler_t1111_PatternCompiler_EmitString_m4528_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 624/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Position_t1100_0_0_0;
static const ParameterInfo PatternCompiler_t1111_PatternCompiler_EmitPosition_m4529_ParameterInfos[] = 
{
	{"pos", 0, 134218313, 0, &Position_t1100_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_UInt16_t369 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitPosition(System.Text.RegularExpressions.Position)
extern const MethodInfo PatternCompiler_EmitPosition_m4529_MethodInfo = 
{
	"EmitPosition"/* name */
	, (methodPointerType)&PatternCompiler_EmitPosition_m4529/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_UInt16_t369/* invoker_method */
	, PatternCompiler_t1111_PatternCompiler_EmitPosition_m4529_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 625/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo PatternCompiler_t1111_PatternCompiler_EmitOpen_m4530_ParameterInfos[] = 
{
	{"gid", 0, 134218314, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitOpen(System.Int32)
extern const MethodInfo PatternCompiler_EmitOpen_m4530_MethodInfo = 
{
	"EmitOpen"/* name */
	, (methodPointerType)&PatternCompiler_EmitOpen_m4530/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75/* invoker_method */
	, PatternCompiler_t1111_PatternCompiler_EmitOpen_m4530_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 14/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 626/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo PatternCompiler_t1111_PatternCompiler_EmitClose_m4531_ParameterInfos[] = 
{
	{"gid", 0, 134218315, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitClose(System.Int32)
extern const MethodInfo PatternCompiler_EmitClose_m4531_MethodInfo = 
{
	"EmitClose"/* name */
	, (methodPointerType)&PatternCompiler_EmitClose_m4531/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75/* invoker_method */
	, PatternCompiler_t1111_PatternCompiler_EmitClose_m4531_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 15/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 627/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType LinkRef_t1106_0_0_0;
static const ParameterInfo PatternCompiler_t1111_PatternCompiler_EmitBalanceStart_m4532_ParameterInfos[] = 
{
	{"gid", 0, 134218316, 0, &Int32_t75_0_0_0},
	{"balance", 1, 134218317, 0, &Int32_t75_0_0_0},
	{"capture", 2, 134218318, 0, &Boolean_t111_0_0_0},
	{"tail", 3, 134218319, 0, &LinkRef_t1106_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75_Int32_t75_SByte_t113_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBalanceStart(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern const MethodInfo PatternCompiler_EmitBalanceStart_m4532_MethodInfo = 
{
	"EmitBalanceStart"/* name */
	, (methodPointerType)&PatternCompiler_EmitBalanceStart_m4532/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75_Int32_t75_SByte_t113_Object_t/* invoker_method */
	, PatternCompiler_t1111_PatternCompiler_EmitBalanceStart_m4532_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 16/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 628/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBalance()
extern const MethodInfo PatternCompiler_EmitBalance_m4533_MethodInfo = 
{
	"EmitBalance"/* name */
	, (methodPointerType)&PatternCompiler_EmitBalance_m4533/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 17/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 629/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo PatternCompiler_t1111_PatternCompiler_EmitReference_m4534_ParameterInfos[] = 
{
	{"gid", 0, 134218320, 0, &Int32_t75_0_0_0},
	{"ignore", 1, 134218321, 0, &Boolean_t111_0_0_0},
	{"reverse", 2, 134218322, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75_SByte_t113_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitReference(System.Int32,System.Boolean,System.Boolean)
extern const MethodInfo PatternCompiler_EmitReference_m4534_MethodInfo = 
{
	"EmitReference"/* name */
	, (methodPointerType)&PatternCompiler_EmitReference_m4534/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75_SByte_t113_SByte_t113/* invoker_method */
	, PatternCompiler_t1111_PatternCompiler_EmitReference_m4534_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 18/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 630/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType LinkRef_t1106_0_0_0;
static const ParameterInfo PatternCompiler_t1111_PatternCompiler_EmitIfDefined_m4535_ParameterInfos[] = 
{
	{"gid", 0, 134218323, 0, &Int32_t75_0_0_0},
	{"tail", 1, 134218324, 0, &LinkRef_t1106_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitIfDefined(System.Int32,System.Text.RegularExpressions.LinkRef)
extern const MethodInfo PatternCompiler_EmitIfDefined_m4535_MethodInfo = 
{
	"EmitIfDefined"/* name */
	, (methodPointerType)&PatternCompiler_EmitIfDefined_m4535/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75_Object_t/* invoker_method */
	, PatternCompiler_t1111_PatternCompiler_EmitIfDefined_m4535_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 19/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 631/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType LinkRef_t1106_0_0_0;
static const ParameterInfo PatternCompiler_t1111_PatternCompiler_EmitSub_m4536_ParameterInfos[] = 
{
	{"tail", 0, 134218325, 0, &LinkRef_t1106_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitSub(System.Text.RegularExpressions.LinkRef)
extern const MethodInfo PatternCompiler_EmitSub_m4536_MethodInfo = 
{
	"EmitSub"/* name */
	, (methodPointerType)&PatternCompiler_EmitSub_m4536/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, PatternCompiler_t1111_PatternCompiler_EmitSub_m4536_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 20/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 632/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType LinkRef_t1106_0_0_0;
extern const Il2CppType LinkRef_t1106_0_0_0;
static const ParameterInfo PatternCompiler_t1111_PatternCompiler_EmitTest_m4537_ParameterInfos[] = 
{
	{"yes", 0, 134218326, 0, &LinkRef_t1106_0_0_0},
	{"tail", 1, 134218327, 0, &LinkRef_t1106_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitTest(System.Text.RegularExpressions.LinkRef,System.Text.RegularExpressions.LinkRef)
extern const MethodInfo PatternCompiler_EmitTest_m4537_MethodInfo = 
{
	"EmitTest"/* name */
	, (methodPointerType)&PatternCompiler_EmitTest_m4537/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Object_t/* invoker_method */
	, PatternCompiler_t1111_PatternCompiler_EmitTest_m4537_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 21/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 633/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType LinkRef_t1106_0_0_0;
static const ParameterInfo PatternCompiler_t1111_PatternCompiler_EmitBranch_m4538_ParameterInfos[] = 
{
	{"next", 0, 134218328, 0, &LinkRef_t1106_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBranch(System.Text.RegularExpressions.LinkRef)
extern const MethodInfo PatternCompiler_EmitBranch_m4538_MethodInfo = 
{
	"EmitBranch"/* name */
	, (methodPointerType)&PatternCompiler_EmitBranch_m4538/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, PatternCompiler_t1111_PatternCompiler_EmitBranch_m4538_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 22/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 634/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType LinkRef_t1106_0_0_0;
static const ParameterInfo PatternCompiler_t1111_PatternCompiler_EmitJump_m4539_ParameterInfos[] = 
{
	{"target", 0, 134218329, 0, &LinkRef_t1106_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitJump(System.Text.RegularExpressions.LinkRef)
extern const MethodInfo PatternCompiler_EmitJump_m4539_MethodInfo = 
{
	"EmitJump"/* name */
	, (methodPointerType)&PatternCompiler_EmitJump_m4539/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, PatternCompiler_t1111_PatternCompiler_EmitJump_m4539_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 23/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 635/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType LinkRef_t1106_0_0_0;
static const ParameterInfo PatternCompiler_t1111_PatternCompiler_EmitRepeat_m4540_ParameterInfos[] = 
{
	{"min", 0, 134218330, 0, &Int32_t75_0_0_0},
	{"max", 1, 134218331, 0, &Int32_t75_0_0_0},
	{"lazy", 2, 134218332, 0, &Boolean_t111_0_0_0},
	{"until", 3, 134218333, 0, &LinkRef_t1106_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75_Int32_t75_SByte_t113_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern const MethodInfo PatternCompiler_EmitRepeat_m4540_MethodInfo = 
{
	"EmitRepeat"/* name */
	, (methodPointerType)&PatternCompiler_EmitRepeat_m4540/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75_Int32_t75_SByte_t113_Object_t/* invoker_method */
	, PatternCompiler_t1111_PatternCompiler_EmitRepeat_m4540_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 24/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 636/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType LinkRef_t1106_0_0_0;
static const ParameterInfo PatternCompiler_t1111_PatternCompiler_EmitUntil_m4541_ParameterInfos[] = 
{
	{"repeat", 0, 134218334, 0, &LinkRef_t1106_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitUntil(System.Text.RegularExpressions.LinkRef)
extern const MethodInfo PatternCompiler_EmitUntil_m4541_MethodInfo = 
{
	"EmitUntil"/* name */
	, (methodPointerType)&PatternCompiler_EmitUntil_m4541/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, PatternCompiler_t1111_PatternCompiler_EmitUntil_m4541_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 25/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 637/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType LinkRef_t1106_0_0_0;
static const ParameterInfo PatternCompiler_t1111_PatternCompiler_EmitFastRepeat_m4542_ParameterInfos[] = 
{
	{"min", 0, 134218335, 0, &Int32_t75_0_0_0},
	{"max", 1, 134218336, 0, &Int32_t75_0_0_0},
	{"lazy", 2, 134218337, 0, &Boolean_t111_0_0_0},
	{"tail", 3, 134218338, 0, &LinkRef_t1106_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75_Int32_t75_SByte_t113_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitFastRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern const MethodInfo PatternCompiler_EmitFastRepeat_m4542_MethodInfo = 
{
	"EmitFastRepeat"/* name */
	, (methodPointerType)&PatternCompiler_EmitFastRepeat_m4542/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75_Int32_t75_SByte_t113_Object_t/* invoker_method */
	, PatternCompiler_t1111_PatternCompiler_EmitFastRepeat_m4542_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 28/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 638/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType LinkRef_t1106_0_0_0;
static const ParameterInfo PatternCompiler_t1111_PatternCompiler_EmitIn_m4543_ParameterInfos[] = 
{
	{"tail", 0, 134218339, 0, &LinkRef_t1106_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitIn(System.Text.RegularExpressions.LinkRef)
extern const MethodInfo PatternCompiler_EmitIn_m4543_MethodInfo = 
{
	"EmitIn"/* name */
	, (methodPointerType)&PatternCompiler_EmitIn_m4543/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, PatternCompiler_t1111_PatternCompiler_EmitIn_m4543_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 26/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 639/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType LinkRef_t1106_0_0_0;
static const ParameterInfo PatternCompiler_t1111_PatternCompiler_EmitAnchor_m4544_ParameterInfos[] = 
{
	{"reverse", 0, 134218340, 0, &Boolean_t111_0_0_0},
	{"offset", 1, 134218341, 0, &Int32_t75_0_0_0},
	{"tail", 2, 134218342, 0, &LinkRef_t1106_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_SByte_t113_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitAnchor(System.Boolean,System.Int32,System.Text.RegularExpressions.LinkRef)
extern const MethodInfo PatternCompiler_EmitAnchor_m4544_MethodInfo = 
{
	"EmitAnchor"/* name */
	, (methodPointerType)&PatternCompiler_EmitAnchor_m4544/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_SByte_t113_Int32_t75_Object_t/* invoker_method */
	, PatternCompiler_t1111_PatternCompiler_EmitAnchor_m4544_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 29/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 640/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo PatternCompiler_t1111_PatternCompiler_EmitInfo_m4545_ParameterInfos[] = 
{
	{"count", 0, 134218343, 0, &Int32_t75_0_0_0},
	{"min", 1, 134218344, 0, &Int32_t75_0_0_0},
	{"max", 2, 134218345, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75_Int32_t75_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitInfo(System.Int32,System.Int32,System.Int32)
extern const MethodInfo PatternCompiler_EmitInfo_m4545_MethodInfo = 
{
	"EmitInfo"/* name */
	, (methodPointerType)&PatternCompiler_EmitInfo_m4545/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75_Int32_t75_Int32_t75/* invoker_method */
	, PatternCompiler_t1111_PatternCompiler_EmitInfo_m4545_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 27/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 641/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.PatternCompiler::NewLink()
extern const MethodInfo PatternCompiler_NewLink_m4546_MethodInfo = 
{
	"NewLink"/* name */
	, (methodPointerType)&PatternCompiler_NewLink_m4546/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &LinkRef_t1106_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 32/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 642/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType LinkRef_t1106_0_0_0;
static const ParameterInfo PatternCompiler_t1111_PatternCompiler_ResolveLink_m4547_ParameterInfos[] = 
{
	{"lref", 0, 134218346, 0, &LinkRef_t1106_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::ResolveLink(System.Text.RegularExpressions.LinkRef)
extern const MethodInfo PatternCompiler_ResolveLink_m4547_MethodInfo = 
{
	"ResolveLink"/* name */
	, (methodPointerType)&PatternCompiler_ResolveLink_m4547/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, PatternCompiler_t1111_PatternCompiler_ResolveLink_m4547_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 33/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 643/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBranchEnd()
extern const MethodInfo PatternCompiler_EmitBranchEnd_m4548_MethodInfo = 
{
	"EmitBranchEnd"/* name */
	, (methodPointerType)&PatternCompiler_EmitBranchEnd_m4548/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 30/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 644/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitAlternationEnd()
extern const MethodInfo PatternCompiler_EmitAlternationEnd_m4549_MethodInfo = 
{
	"EmitAlternationEnd"/* name */
	, (methodPointerType)&PatternCompiler_EmitAlternationEnd_m4549/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 31/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 645/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo PatternCompiler_t1111_PatternCompiler_MakeFlags_m4550_ParameterInfos[] = 
{
	{"negate", 0, 134218347, 0, &Boolean_t111_0_0_0},
	{"ignore", 1, 134218348, 0, &Boolean_t111_0_0_0},
	{"reverse", 2, 134218349, 0, &Boolean_t111_0_0_0},
	{"lazy", 3, 134218350, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_OpFlags_t1099_SByte_t113_SByte_t113_SByte_t113_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.OpFlags System.Text.RegularExpressions.PatternCompiler::MakeFlags(System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern const MethodInfo PatternCompiler_MakeFlags_m4550_MethodInfo = 
{
	"MakeFlags"/* name */
	, (methodPointerType)&PatternCompiler_MakeFlags_m4550/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &OpFlags_t1099_0_0_0/* return_type */
	, RuntimeInvoker_OpFlags_t1099_SByte_t113_SByte_t113_SByte_t113_SByte_t113/* invoker_method */
	, PatternCompiler_t1111_PatternCompiler_MakeFlags_m4550_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 646/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType OpCode_t1098_0_0_0;
static const ParameterInfo PatternCompiler_t1111_PatternCompiler_Emit_m4551_ParameterInfos[] = 
{
	{"op", 0, 134218351, 0, &OpCode_t1098_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_UInt16_t369 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::Emit(System.Text.RegularExpressions.OpCode)
extern const MethodInfo PatternCompiler_Emit_m4551_MethodInfo = 
{
	"Emit"/* name */
	, (methodPointerType)&PatternCompiler_Emit_m4551/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_UInt16_t369/* invoker_method */
	, PatternCompiler_t1111_PatternCompiler_Emit_m4551_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 647/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType OpCode_t1098_0_0_0;
extern const Il2CppType OpFlags_t1099_0_0_0;
static const ParameterInfo PatternCompiler_t1111_PatternCompiler_Emit_m4552_ParameterInfos[] = 
{
	{"op", 0, 134218352, 0, &OpCode_t1098_0_0_0},
	{"flags", 1, 134218353, 0, &OpFlags_t1099_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_UInt16_t369_UInt16_t369 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::Emit(System.Text.RegularExpressions.OpCode,System.Text.RegularExpressions.OpFlags)
extern const MethodInfo PatternCompiler_Emit_m4552_MethodInfo = 
{
	"Emit"/* name */
	, (methodPointerType)&PatternCompiler_Emit_m4552/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_UInt16_t369_UInt16_t369/* invoker_method */
	, PatternCompiler_t1111_PatternCompiler_Emit_m4552_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 648/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UInt16_t369_0_0_0;
static const ParameterInfo PatternCompiler_t1111_PatternCompiler_Emit_m4553_ParameterInfos[] = 
{
	{"word", 0, 134218354, 0, &UInt16_t369_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int16_t455 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::Emit(System.UInt16)
extern const MethodInfo PatternCompiler_Emit_m4553_MethodInfo = 
{
	"Emit"/* name */
	, (methodPointerType)&PatternCompiler_Emit_m4553/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int16_t455/* invoker_method */
	, PatternCompiler_t1111_PatternCompiler_Emit_m4553_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 649/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.PatternCompiler::get_CurrentAddress()
extern const MethodInfo PatternCompiler_get_CurrentAddress_m4554_MethodInfo = 
{
	"get_CurrentAddress"/* name */
	, (methodPointerType)&PatternCompiler_get_CurrentAddress_m4554/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2177/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 650/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType LinkRef_t1106_0_0_0;
static const ParameterInfo PatternCompiler_t1111_PatternCompiler_BeginLink_m4555_ParameterInfos[] = 
{
	{"lref", 0, 134218355, 0, &LinkRef_t1106_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::BeginLink(System.Text.RegularExpressions.LinkRef)
extern const MethodInfo PatternCompiler_BeginLink_m4555_MethodInfo = 
{
	"BeginLink"/* name */
	, (methodPointerType)&PatternCompiler_BeginLink_m4555/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, PatternCompiler_t1111_PatternCompiler_BeginLink_m4555_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 651/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType LinkRef_t1106_0_0_0;
static const ParameterInfo PatternCompiler_t1111_PatternCompiler_EmitLink_m4556_ParameterInfos[] = 
{
	{"lref", 0, 134218356, 0, &LinkRef_t1106_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitLink(System.Text.RegularExpressions.LinkRef)
extern const MethodInfo PatternCompiler_EmitLink_m4556_MethodInfo = 
{
	"EmitLink"/* name */
	, (methodPointerType)&PatternCompiler_EmitLink_m4556/* method */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, PatternCompiler_t1111_PatternCompiler_EmitLink_m4556_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 652/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* PatternCompiler_t1111_MethodInfos[] =
{
	&PatternCompiler__ctor_m4517_MethodInfo,
	&PatternCompiler_EncodeOp_m4518_MethodInfo,
	&PatternCompiler_GetMachineFactory_m4519_MethodInfo,
	&PatternCompiler_EmitFalse_m4520_MethodInfo,
	&PatternCompiler_EmitTrue_m4521_MethodInfo,
	&PatternCompiler_EmitCount_m4522_MethodInfo,
	&PatternCompiler_EmitCharacter_m4523_MethodInfo,
	&PatternCompiler_EmitCategory_m4524_MethodInfo,
	&PatternCompiler_EmitNotCategory_m4525_MethodInfo,
	&PatternCompiler_EmitRange_m4526_MethodInfo,
	&PatternCompiler_EmitSet_m4527_MethodInfo,
	&PatternCompiler_EmitString_m4528_MethodInfo,
	&PatternCompiler_EmitPosition_m4529_MethodInfo,
	&PatternCompiler_EmitOpen_m4530_MethodInfo,
	&PatternCompiler_EmitClose_m4531_MethodInfo,
	&PatternCompiler_EmitBalanceStart_m4532_MethodInfo,
	&PatternCompiler_EmitBalance_m4533_MethodInfo,
	&PatternCompiler_EmitReference_m4534_MethodInfo,
	&PatternCompiler_EmitIfDefined_m4535_MethodInfo,
	&PatternCompiler_EmitSub_m4536_MethodInfo,
	&PatternCompiler_EmitTest_m4537_MethodInfo,
	&PatternCompiler_EmitBranch_m4538_MethodInfo,
	&PatternCompiler_EmitJump_m4539_MethodInfo,
	&PatternCompiler_EmitRepeat_m4540_MethodInfo,
	&PatternCompiler_EmitUntil_m4541_MethodInfo,
	&PatternCompiler_EmitFastRepeat_m4542_MethodInfo,
	&PatternCompiler_EmitIn_m4543_MethodInfo,
	&PatternCompiler_EmitAnchor_m4544_MethodInfo,
	&PatternCompiler_EmitInfo_m4545_MethodInfo,
	&PatternCompiler_NewLink_m4546_MethodInfo,
	&PatternCompiler_ResolveLink_m4547_MethodInfo,
	&PatternCompiler_EmitBranchEnd_m4548_MethodInfo,
	&PatternCompiler_EmitAlternationEnd_m4549_MethodInfo,
	&PatternCompiler_MakeFlags_m4550_MethodInfo,
	&PatternCompiler_Emit_m4551_MethodInfo,
	&PatternCompiler_Emit_m4552_MethodInfo,
	&PatternCompiler_Emit_m4553_MethodInfo,
	&PatternCompiler_get_CurrentAddress_m4554_MethodInfo,
	&PatternCompiler_BeginLink_m4555_MethodInfo,
	&PatternCompiler_EmitLink_m4556_MethodInfo,
	NULL
};
extern const MethodInfo PatternCompiler_get_CurrentAddress_m4554_MethodInfo;
static const PropertyInfo PatternCompiler_t1111____CurrentAddress_PropertyInfo = 
{
	&PatternCompiler_t1111_il2cpp_TypeInfo/* parent */
	, "CurrentAddress"/* name */
	, &PatternCompiler_get_CurrentAddress_m4554_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* PatternCompiler_t1111_PropertyInfos[] =
{
	&PatternCompiler_t1111____CurrentAddress_PropertyInfo,
	NULL
};
static const Il2CppType* PatternCompiler_t1111_il2cpp_TypeInfo__nestedTypes[1] =
{
	&PatternLinkStack_t1109_0_0_0,
};
extern const MethodInfo PatternCompiler_GetMachineFactory_m4519_MethodInfo;
extern const MethodInfo PatternCompiler_EmitFalse_m4520_MethodInfo;
extern const MethodInfo PatternCompiler_EmitTrue_m4521_MethodInfo;
extern const MethodInfo PatternCompiler_EmitCharacter_m4523_MethodInfo;
extern const MethodInfo PatternCompiler_EmitCategory_m4524_MethodInfo;
extern const MethodInfo PatternCompiler_EmitNotCategory_m4525_MethodInfo;
extern const MethodInfo PatternCompiler_EmitRange_m4526_MethodInfo;
extern const MethodInfo PatternCompiler_EmitSet_m4527_MethodInfo;
extern const MethodInfo PatternCompiler_EmitString_m4528_MethodInfo;
extern const MethodInfo PatternCompiler_EmitPosition_m4529_MethodInfo;
extern const MethodInfo PatternCompiler_EmitOpen_m4530_MethodInfo;
extern const MethodInfo PatternCompiler_EmitClose_m4531_MethodInfo;
extern const MethodInfo PatternCompiler_EmitBalanceStart_m4532_MethodInfo;
extern const MethodInfo PatternCompiler_EmitBalance_m4533_MethodInfo;
extern const MethodInfo PatternCompiler_EmitReference_m4534_MethodInfo;
extern const MethodInfo PatternCompiler_EmitIfDefined_m4535_MethodInfo;
extern const MethodInfo PatternCompiler_EmitSub_m4536_MethodInfo;
extern const MethodInfo PatternCompiler_EmitTest_m4537_MethodInfo;
extern const MethodInfo PatternCompiler_EmitBranch_m4538_MethodInfo;
extern const MethodInfo PatternCompiler_EmitJump_m4539_MethodInfo;
extern const MethodInfo PatternCompiler_EmitRepeat_m4540_MethodInfo;
extern const MethodInfo PatternCompiler_EmitUntil_m4541_MethodInfo;
extern const MethodInfo PatternCompiler_EmitIn_m4543_MethodInfo;
extern const MethodInfo PatternCompiler_EmitInfo_m4545_MethodInfo;
extern const MethodInfo PatternCompiler_EmitFastRepeat_m4542_MethodInfo;
extern const MethodInfo PatternCompiler_EmitAnchor_m4544_MethodInfo;
extern const MethodInfo PatternCompiler_EmitBranchEnd_m4548_MethodInfo;
extern const MethodInfo PatternCompiler_EmitAlternationEnd_m4549_MethodInfo;
extern const MethodInfo PatternCompiler_NewLink_m4546_MethodInfo;
extern const MethodInfo PatternCompiler_ResolveLink_m4547_MethodInfo;
static const Il2CppMethodReference PatternCompiler_t1111_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	&PatternCompiler_GetMachineFactory_m4519_MethodInfo,
	&PatternCompiler_EmitFalse_m4520_MethodInfo,
	&PatternCompiler_EmitTrue_m4521_MethodInfo,
	&PatternCompiler_EmitCharacter_m4523_MethodInfo,
	&PatternCompiler_EmitCategory_m4524_MethodInfo,
	&PatternCompiler_EmitNotCategory_m4525_MethodInfo,
	&PatternCompiler_EmitRange_m4526_MethodInfo,
	&PatternCompiler_EmitSet_m4527_MethodInfo,
	&PatternCompiler_EmitString_m4528_MethodInfo,
	&PatternCompiler_EmitPosition_m4529_MethodInfo,
	&PatternCompiler_EmitOpen_m4530_MethodInfo,
	&PatternCompiler_EmitClose_m4531_MethodInfo,
	&PatternCompiler_EmitBalanceStart_m4532_MethodInfo,
	&PatternCompiler_EmitBalance_m4533_MethodInfo,
	&PatternCompiler_EmitReference_m4534_MethodInfo,
	&PatternCompiler_EmitIfDefined_m4535_MethodInfo,
	&PatternCompiler_EmitSub_m4536_MethodInfo,
	&PatternCompiler_EmitTest_m4537_MethodInfo,
	&PatternCompiler_EmitBranch_m4538_MethodInfo,
	&PatternCompiler_EmitJump_m4539_MethodInfo,
	&PatternCompiler_EmitRepeat_m4540_MethodInfo,
	&PatternCompiler_EmitUntil_m4541_MethodInfo,
	&PatternCompiler_EmitIn_m4543_MethodInfo,
	&PatternCompiler_EmitInfo_m4545_MethodInfo,
	&PatternCompiler_EmitFastRepeat_m4542_MethodInfo,
	&PatternCompiler_EmitAnchor_m4544_MethodInfo,
	&PatternCompiler_EmitBranchEnd_m4548_MethodInfo,
	&PatternCompiler_EmitAlternationEnd_m4549_MethodInfo,
	&PatternCompiler_NewLink_m4546_MethodInfo,
	&PatternCompiler_ResolveLink_m4547_MethodInfo,
};
static bool PatternCompiler_t1111_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* PatternCompiler_t1111_InterfacesTypeInfos[] = 
{
	&ICompiler_t1169_0_0_0,
};
static Il2CppInterfaceOffsetPair PatternCompiler_t1111_InterfacesOffsets[] = 
{
	{ &ICompiler_t1169_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType PatternCompiler_t1111_1_0_0;
struct PatternCompiler_t1111;
const Il2CppTypeDefinitionMetadata PatternCompiler_t1111_DefinitionMetadata = 
{
	NULL/* declaringType */
	, PatternCompiler_t1111_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, PatternCompiler_t1111_InterfacesTypeInfos/* implementedInterfaces */
	, PatternCompiler_t1111_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, PatternCompiler_t1111_VTable/* vtableMethods */
	, PatternCompiler_t1111_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 653/* fieldStart */

};
TypeInfo PatternCompiler_t1111_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "PatternCompiler"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, PatternCompiler_t1111_MethodInfos/* methods */
	, PatternCompiler_t1111_PropertyInfos/* properties */
	, NULL/* events */
	, &PatternCompiler_t1111_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &PatternCompiler_t1111_0_0_0/* byval_arg */
	, &PatternCompiler_t1111_1_0_0/* this_arg */
	, &PatternCompiler_t1111_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PatternCompiler_t1111)/* instance_size */
	, sizeof (PatternCompiler_t1111)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 40/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 34/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Text.RegularExpressions.LinkStack
#include "System_System_Text_RegularExpressions_LinkStack.h"
// Metadata Definition System.Text.RegularExpressions.LinkStack
extern TypeInfo LinkStack_t1110_il2cpp_TypeInfo;
// System.Text.RegularExpressions.LinkStack
#include "System_System_Text_RegularExpressions_LinkStackMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.LinkStack::.ctor()
extern const MethodInfo LinkStack__ctor_m4557_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&LinkStack__ctor_m4557/* method */
	, &LinkStack_t1110_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 660/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.LinkStack::Push()
extern const MethodInfo LinkStack_Push_m4558_MethodInfo = 
{
	"Push"/* name */
	, (methodPointerType)&LinkStack_Push_m4558/* method */
	, &LinkStack_t1110_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 661/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.LinkStack::Pop()
extern const MethodInfo LinkStack_Pop_m4559_MethodInfo = 
{
	"Pop"/* name */
	, (methodPointerType)&LinkStack_Pop_m4559/* method */
	, &LinkStack_t1110_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 662/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Text.RegularExpressions.LinkStack::GetCurrent()
extern const MethodInfo LinkStack_GetCurrent_m5088_MethodInfo = 
{
	"GetCurrent"/* name */
	, NULL/* method */
	, &LinkStack_t1110_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 1476/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 663/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo LinkStack_t1110_LinkStack_SetCurrent_m5089_ParameterInfos[] = 
{
	{"l", 0, 134218361, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.LinkStack::SetCurrent(System.Object)
extern const MethodInfo LinkStack_SetCurrent_m5089_MethodInfo = 
{
	"SetCurrent"/* name */
	, NULL/* method */
	, &LinkStack_t1110_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, LinkStack_t1110_LinkStack_SetCurrent_m5089_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1476/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 664/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* LinkStack_t1110_MethodInfos[] =
{
	&LinkStack__ctor_m4557_MethodInfo,
	&LinkStack_Push_m4558_MethodInfo,
	&LinkStack_Pop_m4559_MethodInfo,
	&LinkStack_GetCurrent_m5088_MethodInfo,
	&LinkStack_SetCurrent_m5089_MethodInfo,
	NULL
};
static const Il2CppMethodReference LinkStack_t1110_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	NULL,
	NULL,
};
static bool LinkStack_t1110_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType LinkStack_t1110_1_0_0;
struct LinkStack_t1110;
const Il2CppTypeDefinitionMetadata LinkStack_t1110_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &LinkRef_t1106_0_0_0/* parent */
	, LinkStack_t1110_VTable/* vtableMethods */
	, LinkStack_t1110_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 654/* fieldStart */

};
TypeInfo LinkStack_t1110_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "LinkStack"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, LinkStack_t1110_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &LinkStack_t1110_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &LinkStack_t1110_0_0_0/* byval_arg */
	, &LinkStack_t1110_1_0_0/* this_arg */
	, &LinkStack_t1110_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (LinkStack_t1110)/* instance_size */
	, sizeof (LinkStack_t1110)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048704/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Mark
#include "System_System_Text_RegularExpressions_Mark.h"
// Metadata Definition System.Text.RegularExpressions.Mark
extern TypeInfo Mark_t1112_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Mark
#include "System_System_Text_RegularExpressions_MarkMethodDeclarations.h"
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Mark::get_IsDefined()
extern const MethodInfo Mark_get_IsDefined_m4560_MethodInfo = 
{
	"get_IsDefined"/* name */
	, (methodPointerType)&Mark_get_IsDefined_m4560/* method */
	, &Mark_t1112_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 665/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Mark::get_Index()
extern const MethodInfo Mark_get_Index_m4561_MethodInfo = 
{
	"get_Index"/* name */
	, (methodPointerType)&Mark_get_Index_m4561/* method */
	, &Mark_t1112_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 666/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Mark::get_Length()
extern const MethodInfo Mark_get_Length_m4562_MethodInfo = 
{
	"get_Length"/* name */
	, (methodPointerType)&Mark_get_Length_m4562/* method */
	, &Mark_t1112_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 667/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Mark_t1112_MethodInfos[] =
{
	&Mark_get_IsDefined_m4560_MethodInfo,
	&Mark_get_Index_m4561_MethodInfo,
	&Mark_get_Length_m4562_MethodInfo,
	NULL
};
extern const MethodInfo Mark_get_IsDefined_m4560_MethodInfo;
static const PropertyInfo Mark_t1112____IsDefined_PropertyInfo = 
{
	&Mark_t1112_il2cpp_TypeInfo/* parent */
	, "IsDefined"/* name */
	, &Mark_get_IsDefined_m4560_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Mark_get_Index_m4561_MethodInfo;
static const PropertyInfo Mark_t1112____Index_PropertyInfo = 
{
	&Mark_t1112_il2cpp_TypeInfo/* parent */
	, "Index"/* name */
	, &Mark_get_Index_m4561_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Mark_get_Length_m4562_MethodInfo;
static const PropertyInfo Mark_t1112____Length_PropertyInfo = 
{
	&Mark_t1112_il2cpp_TypeInfo/* parent */
	, "Length"/* name */
	, &Mark_get_Length_m4562_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* Mark_t1112_PropertyInfos[] =
{
	&Mark_t1112____IsDefined_PropertyInfo,
	&Mark_t1112____Index_PropertyInfo,
	&Mark_t1112____Length_PropertyInfo,
	NULL
};
static const Il2CppMethodReference Mark_t1112_VTable[] =
{
	&ValueType_Equals_m2220_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&ValueType_GetHashCode_m2221_MethodInfo,
	&ValueType_ToString_m2224_MethodInfo,
};
static bool Mark_t1112_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType Mark_t1112_0_0_0;
extern const Il2CppType Mark_t1112_1_0_0;
const Il2CppTypeDefinitionMetadata Mark_t1112_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t446_0_0_0/* parent */
	, Mark_t1112_VTable/* vtableMethods */
	, Mark_t1112_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 655/* fieldStart */

};
TypeInfo Mark_t1112_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Mark"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, Mark_t1112_MethodInfos/* methods */
	, Mark_t1112_PropertyInfos/* properties */
	, NULL/* events */
	, &Mark_t1112_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Mark_t1112_0_0_0/* byval_arg */
	, &Mark_t1112_1_0_0/* this_arg */
	, &Mark_t1112_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Mark_t1112)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (Mark_t1112)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(Mark_t1112 )/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048840/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, true/* is_blittable */
	, 3/* method_count */
	, 3/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Interpreter/IntStack
#include "System_System_Text_RegularExpressions_Interpreter_IntStack.h"
// Metadata Definition System.Text.RegularExpressions.Interpreter/IntStack
extern TypeInfo IntStack_t1113_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Interpreter/IntStack
#include "System_System_Text_RegularExpressions_Interpreter_IntStackMethodDeclarations.h"
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::Pop()
extern const MethodInfo IntStack_Pop_m4563_MethodInfo = 
{
	"Pop"/* name */
	, (methodPointerType)&IntStack_Pop_m4563/* method */
	, &IntStack_t1113_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 689/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo IntStack_t1113_IntStack_Push_m4564_ParameterInfos[] = 
{
	{"value", 0, 134218399, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::Push(System.Int32)
extern const MethodInfo IntStack_Push_m4564_MethodInfo = 
{
	"Push"/* name */
	, (methodPointerType)&IntStack_Push_m4564/* method */
	, &IntStack_t1113_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75/* invoker_method */
	, IntStack_t1113_IntStack_Push_m4564_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 690/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::get_Count()
extern const MethodInfo IntStack_get_Count_m4565_MethodInfo = 
{
	"get_Count"/* name */
	, (methodPointerType)&IntStack_get_Count_m4565/* method */
	, &IntStack_t1113_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 691/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo IntStack_t1113_IntStack_set_Count_m4566_ParameterInfos[] = 
{
	{"value", 0, 134218400, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::set_Count(System.Int32)
extern const MethodInfo IntStack_set_Count_m4566_MethodInfo = 
{
	"set_Count"/* name */
	, (methodPointerType)&IntStack_set_Count_m4566/* method */
	, &IntStack_t1113_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75/* invoker_method */
	, IntStack_t1113_IntStack_set_Count_m4566_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 692/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* IntStack_t1113_MethodInfos[] =
{
	&IntStack_Pop_m4563_MethodInfo,
	&IntStack_Push_m4564_MethodInfo,
	&IntStack_get_Count_m4565_MethodInfo,
	&IntStack_set_Count_m4566_MethodInfo,
	NULL
};
extern const MethodInfo IntStack_get_Count_m4565_MethodInfo;
extern const MethodInfo IntStack_set_Count_m4566_MethodInfo;
static const PropertyInfo IntStack_t1113____Count_PropertyInfo = 
{
	&IntStack_t1113_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &IntStack_get_Count_m4565_MethodInfo/* get */
	, &IntStack_set_Count_m4566_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* IntStack_t1113_PropertyInfos[] =
{
	&IntStack_t1113____Count_PropertyInfo,
	NULL
};
static const Il2CppMethodReference IntStack_t1113_VTable[] =
{
	&ValueType_Equals_m2220_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&ValueType_GetHashCode_m2221_MethodInfo,
	&ValueType_ToString_m2224_MethodInfo,
};
static bool IntStack_t1113_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType IntStack_t1113_0_0_0;
extern const Il2CppType IntStack_t1113_1_0_0;
extern TypeInfo Interpreter_t1118_il2cpp_TypeInfo;
extern const Il2CppType Interpreter_t1118_0_0_0;
const Il2CppTypeDefinitionMetadata IntStack_t1113_DefinitionMetadata = 
{
	&Interpreter_t1118_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t446_0_0_0/* parent */
	, IntStack_t1113_VTable/* vtableMethods */
	, IntStack_t1113_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 658/* fieldStart */

};
TypeInfo IntStack_t1113_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "IntStack"/* name */
	, ""/* namespaze */
	, IntStack_t1113_MethodInfos/* methods */
	, IntStack_t1113_PropertyInfos/* properties */
	, NULL/* events */
	, &IntStack_t1113_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &IntStack_t1113_0_0_0/* byval_arg */
	, &IntStack_t1113_1_0_0/* this_arg */
	, &IntStack_t1113_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)IntStack_t1113_marshal/* marshal_to_native_func */
	, (methodPointerType)IntStack_t1113_marshal_back/* marshal_from_native_func */
	, (methodPointerType)IntStack_t1113_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (IntStack_t1113)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (IntStack_t1113)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(IntStack_t1113_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048843/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 1/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Interpreter/RepeatContext
#include "System_System_Text_RegularExpressions_Interpreter_RepeatCont.h"
// Metadata Definition System.Text.RegularExpressions.Interpreter/RepeatContext
extern TypeInfo RepeatContext_t1114_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Interpreter/RepeatContext
#include "System_System_Text_RegularExpressions_Interpreter_RepeatContMethodDeclarations.h"
extern const Il2CppType RepeatContext_t1114_0_0_0;
extern const Il2CppType RepeatContext_t1114_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo RepeatContext_t1114_RepeatContext__ctor_m4567_ParameterInfos[] = 
{
	{"previous", 0, 134218401, 0, &RepeatContext_t1114_0_0_0},
	{"min", 1, 134218402, 0, &Int32_t75_0_0_0},
	{"max", 2, 134218403, 0, &Int32_t75_0_0_0},
	{"lazy", 3, 134218404, 0, &Boolean_t111_0_0_0},
	{"expr_pc", 4, 134218405, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Int32_t75_Int32_t75_SByte_t113_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter/RepeatContext::.ctor(System.Text.RegularExpressions.Interpreter/RepeatContext,System.Int32,System.Int32,System.Boolean,System.Int32)
extern const MethodInfo RepeatContext__ctor_m4567_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&RepeatContext__ctor_m4567/* method */
	, &RepeatContext_t1114_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Int32_t75_Int32_t75_SByte_t113_Int32_t75/* invoker_method */
	, RepeatContext_t1114_RepeatContext__ctor_m4567_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 693/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::get_Count()
extern const MethodInfo RepeatContext_get_Count_m4568_MethodInfo = 
{
	"get_Count"/* name */
	, (methodPointerType)&RepeatContext_get_Count_m4568/* method */
	, &RepeatContext_t1114_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 694/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo RepeatContext_t1114_RepeatContext_set_Count_m4569_ParameterInfos[] = 
{
	{"value", 0, 134218406, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter/RepeatContext::set_Count(System.Int32)
extern const MethodInfo RepeatContext_set_Count_m4569_MethodInfo = 
{
	"set_Count"/* name */
	, (methodPointerType)&RepeatContext_set_Count_m4569/* method */
	, &RepeatContext_t1114_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75/* invoker_method */
	, RepeatContext_t1114_RepeatContext_set_Count_m4569_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 695/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::get_Start()
extern const MethodInfo RepeatContext_get_Start_m4570_MethodInfo = 
{
	"get_Start"/* name */
	, (methodPointerType)&RepeatContext_get_Start_m4570/* method */
	, &RepeatContext_t1114_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 696/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo RepeatContext_t1114_RepeatContext_set_Start_m4571_ParameterInfos[] = 
{
	{"value", 0, 134218407, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter/RepeatContext::set_Start(System.Int32)
extern const MethodInfo RepeatContext_set_Start_m4571_MethodInfo = 
{
	"set_Start"/* name */
	, (methodPointerType)&RepeatContext_set_Start_m4571/* method */
	, &RepeatContext_t1114_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75/* invoker_method */
	, RepeatContext_t1114_RepeatContext_set_Start_m4571_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 697/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::get_IsMinimum()
extern const MethodInfo RepeatContext_get_IsMinimum_m4572_MethodInfo = 
{
	"get_IsMinimum"/* name */
	, (methodPointerType)&RepeatContext_get_IsMinimum_m4572/* method */
	, &RepeatContext_t1114_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 698/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::get_IsMaximum()
extern const MethodInfo RepeatContext_get_IsMaximum_m4573_MethodInfo = 
{
	"get_IsMaximum"/* name */
	, (methodPointerType)&RepeatContext_get_IsMaximum_m4573/* method */
	, &RepeatContext_t1114_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 699/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::get_IsLazy()
extern const MethodInfo RepeatContext_get_IsLazy_m4574_MethodInfo = 
{
	"get_IsLazy"/* name */
	, (methodPointerType)&RepeatContext_get_IsLazy_m4574/* method */
	, &RepeatContext_t1114_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 700/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::get_Expression()
extern const MethodInfo RepeatContext_get_Expression_m4575_MethodInfo = 
{
	"get_Expression"/* name */
	, (methodPointerType)&RepeatContext_get_Expression_m4575/* method */
	, &RepeatContext_t1114_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 701/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter/RepeatContext::get_Previous()
extern const MethodInfo RepeatContext_get_Previous_m4576_MethodInfo = 
{
	"get_Previous"/* name */
	, (methodPointerType)&RepeatContext_get_Previous_m4576/* method */
	, &RepeatContext_t1114_il2cpp_TypeInfo/* declaring_type */
	, &RepeatContext_t1114_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 702/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* RepeatContext_t1114_MethodInfos[] =
{
	&RepeatContext__ctor_m4567_MethodInfo,
	&RepeatContext_get_Count_m4568_MethodInfo,
	&RepeatContext_set_Count_m4569_MethodInfo,
	&RepeatContext_get_Start_m4570_MethodInfo,
	&RepeatContext_set_Start_m4571_MethodInfo,
	&RepeatContext_get_IsMinimum_m4572_MethodInfo,
	&RepeatContext_get_IsMaximum_m4573_MethodInfo,
	&RepeatContext_get_IsLazy_m4574_MethodInfo,
	&RepeatContext_get_Expression_m4575_MethodInfo,
	&RepeatContext_get_Previous_m4576_MethodInfo,
	NULL
};
extern const MethodInfo RepeatContext_get_Count_m4568_MethodInfo;
extern const MethodInfo RepeatContext_set_Count_m4569_MethodInfo;
static const PropertyInfo RepeatContext_t1114____Count_PropertyInfo = 
{
	&RepeatContext_t1114_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &RepeatContext_get_Count_m4568_MethodInfo/* get */
	, &RepeatContext_set_Count_m4569_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo RepeatContext_get_Start_m4570_MethodInfo;
extern const MethodInfo RepeatContext_set_Start_m4571_MethodInfo;
static const PropertyInfo RepeatContext_t1114____Start_PropertyInfo = 
{
	&RepeatContext_t1114_il2cpp_TypeInfo/* parent */
	, "Start"/* name */
	, &RepeatContext_get_Start_m4570_MethodInfo/* get */
	, &RepeatContext_set_Start_m4571_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo RepeatContext_get_IsMinimum_m4572_MethodInfo;
static const PropertyInfo RepeatContext_t1114____IsMinimum_PropertyInfo = 
{
	&RepeatContext_t1114_il2cpp_TypeInfo/* parent */
	, "IsMinimum"/* name */
	, &RepeatContext_get_IsMinimum_m4572_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo RepeatContext_get_IsMaximum_m4573_MethodInfo;
static const PropertyInfo RepeatContext_t1114____IsMaximum_PropertyInfo = 
{
	&RepeatContext_t1114_il2cpp_TypeInfo/* parent */
	, "IsMaximum"/* name */
	, &RepeatContext_get_IsMaximum_m4573_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo RepeatContext_get_IsLazy_m4574_MethodInfo;
static const PropertyInfo RepeatContext_t1114____IsLazy_PropertyInfo = 
{
	&RepeatContext_t1114_il2cpp_TypeInfo/* parent */
	, "IsLazy"/* name */
	, &RepeatContext_get_IsLazy_m4574_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo RepeatContext_get_Expression_m4575_MethodInfo;
static const PropertyInfo RepeatContext_t1114____Expression_PropertyInfo = 
{
	&RepeatContext_t1114_il2cpp_TypeInfo/* parent */
	, "Expression"/* name */
	, &RepeatContext_get_Expression_m4575_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo RepeatContext_get_Previous_m4576_MethodInfo;
static const PropertyInfo RepeatContext_t1114____Previous_PropertyInfo = 
{
	&RepeatContext_t1114_il2cpp_TypeInfo/* parent */
	, "Previous"/* name */
	, &RepeatContext_get_Previous_m4576_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* RepeatContext_t1114_PropertyInfos[] =
{
	&RepeatContext_t1114____Count_PropertyInfo,
	&RepeatContext_t1114____Start_PropertyInfo,
	&RepeatContext_t1114____IsMinimum_PropertyInfo,
	&RepeatContext_t1114____IsMaximum_PropertyInfo,
	&RepeatContext_t1114____IsLazy_PropertyInfo,
	&RepeatContext_t1114____Expression_PropertyInfo,
	&RepeatContext_t1114____Previous_PropertyInfo,
	NULL
};
static const Il2CppMethodReference RepeatContext_t1114_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
};
static bool RepeatContext_t1114_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType RepeatContext_t1114_1_0_0;
struct RepeatContext_t1114;
const Il2CppTypeDefinitionMetadata RepeatContext_t1114_DefinitionMetadata = 
{
	&Interpreter_t1118_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, RepeatContext_t1114_VTable/* vtableMethods */
	, RepeatContext_t1114_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 660/* fieldStart */

};
TypeInfo RepeatContext_t1114_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "RepeatContext"/* name */
	, ""/* namespaze */
	, RepeatContext_t1114_MethodInfos/* methods */
	, RepeatContext_t1114_PropertyInfos/* properties */
	, NULL/* events */
	, &RepeatContext_t1114_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &RepeatContext_t1114_0_0_0/* byval_arg */
	, &RepeatContext_t1114_1_0_0/* this_arg */
	, &RepeatContext_t1114_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (RepeatContext_t1114)/* instance_size */
	, sizeof (RepeatContext_t1114)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048579/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 10/* method_count */
	, 7/* property_count */
	, 7/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Interpreter/Mode
#include "System_System_Text_RegularExpressions_Interpreter_Mode.h"
// Metadata Definition System.Text.RegularExpressions.Interpreter/Mode
extern TypeInfo Mode_t1115_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Interpreter/Mode
#include "System_System_Text_RegularExpressions_Interpreter_ModeMethodDeclarations.h"
static const MethodInfo* Mode_t1115_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference Mode_t1115_VTable[] =
{
	&Enum_Equals_m2180_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Enum_GetHashCode_m2181_MethodInfo,
	&Enum_ToString_m2182_MethodInfo,
	&Enum_ToString_m2183_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m2184_MethodInfo,
	&Enum_System_IConvertible_ToByte_m2185_MethodInfo,
	&Enum_System_IConvertible_ToChar_m2186_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m2187_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m2188_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m2189_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m2190_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m2191_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m2192_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m2193_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m2194_MethodInfo,
	&Enum_ToString_m2195_MethodInfo,
	&Enum_System_IConvertible_ToType_m2196_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m2197_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m2198_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m2199_MethodInfo,
	&Enum_CompareTo_m2200_MethodInfo,
	&Enum_GetTypeCode_m2201_MethodInfo,
};
static bool Mode_t1115_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair Mode_t1115_InterfacesOffsets[] = 
{
	{ &IFormattable_t428_0_0_0, 4},
	{ &IConvertible_t429_0_0_0, 5},
	{ &IComparable_t430_0_0_0, 21},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType Mode_t1115_0_0_0;
extern const Il2CppType Mode_t1115_1_0_0;
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo Int32_t75_il2cpp_TypeInfo;
const Il2CppTypeDefinitionMetadata Mode_t1115_DefinitionMetadata = 
{
	&Interpreter_t1118_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, Mode_t1115_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t431_0_0_0/* parent */
	, Mode_t1115_VTable/* vtableMethods */
	, Mode_t1115_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 667/* fieldStart */

};
TypeInfo Mode_t1115_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Mode"/* name */
	, ""/* namespaze */
	, Mode_t1115_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Int32_t75_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Mode_t1115_0_0_0/* byval_arg */
	, &Mode_t1115_1_0_0/* this_arg */
	, &Mode_t1115_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Mode_t1115)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (Mode_t1115)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 259/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.Text.RegularExpressions.Interpreter
#include "System_System_Text_RegularExpressions_Interpreter.h"
// Metadata Definition System.Text.RegularExpressions.Interpreter
// System.Text.RegularExpressions.Interpreter
#include "System_System_Text_RegularExpressions_InterpreterMethodDeclarations.h"
extern const Il2CppType UInt16U5BU5D_t1024_0_0_0;
static const ParameterInfo Interpreter_t1118_Interpreter__ctor_m4577_ParameterInfos[] = 
{
	{"program", 0, 134218362, 0, &UInt16U5BU5D_t1024_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::.ctor(System.UInt16[])
extern const MethodInfo Interpreter__ctor_m4577_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Interpreter__ctor_m4577/* method */
	, &Interpreter_t1118_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, Interpreter_t1118_Interpreter__ctor_m4577_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 668/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo Interpreter_t1118_Interpreter_ReadProgramCount_m4578_ParameterInfos[] = 
{
	{"ptr", 0, 134218363, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter::ReadProgramCount(System.Int32)
extern const MethodInfo Interpreter_ReadProgramCount_m4578_MethodInfo = 
{
	"ReadProgramCount"/* name */
	, (methodPointerType)&Interpreter_ReadProgramCount_m4578/* method */
	, &Interpreter_t1118_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Int32_t75/* invoker_method */
	, Interpreter_t1118_Interpreter_ReadProgramCount_m4578_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 669/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Regex_t792_0_0_0;
extern const Il2CppType Regex_t792_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo Interpreter_t1118_Interpreter_Scan_m4579_ParameterInfos[] = 
{
	{"regex", 0, 134218364, 0, &Regex_t792_0_0_0},
	{"text", 1, 134218365, 0, &String_t_0_0_0},
	{"start", 2, 134218366, 0, &Int32_t75_0_0_0},
	{"end", 3, 134218367, 0, &Int32_t75_0_0_0},
};
extern const Il2CppType Match_t1080_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Int32_t75_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Interpreter::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern const MethodInfo Interpreter_Scan_m4579_MethodInfo = 
{
	"Scan"/* name */
	, (methodPointerType)&Interpreter_Scan_m4579/* method */
	, &Interpreter_t1118_il2cpp_TypeInfo/* declaring_type */
	, &Match_t1080_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Int32_t75_Int32_t75/* invoker_method */
	, Interpreter_t1118_Interpreter_Scan_m4579_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 670/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::Reset()
extern const MethodInfo Interpreter_Reset_m4580_MethodInfo = 
{
	"Reset"/* name */
	, (methodPointerType)&Interpreter_Reset_m4580/* method */
	, &Interpreter_t1118_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 671/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Mode_t1115_0_0_0;
extern const Il2CppType Int32_t75_1_0_0;
extern const Il2CppType Int32_t75_1_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo Interpreter_t1118_Interpreter_Eval_m4581_ParameterInfos[] = 
{
	{"mode", 0, 134218368, 0, &Mode_t1115_0_0_0},
	{"ref_ptr", 1, 134218369, 0, &Int32_t75_1_0_0},
	{"pc", 2, 134218370, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Int32_t75_Int32U26_t456_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter::Eval(System.Text.RegularExpressions.Interpreter/Mode,System.Int32&,System.Int32)
extern const MethodInfo Interpreter_Eval_m4581_MethodInfo = 
{
	"Eval"/* name */
	, (methodPointerType)&Interpreter_Eval_m4581/* method */
	, &Interpreter_t1118_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Int32_t75_Int32U26_t456_Int32_t75/* invoker_method */
	, Interpreter_t1118_Interpreter_Eval_m4581_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 672/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Mode_t1115_0_0_0;
extern const Il2CppType Int32_t75_1_0_0;
extern const Il2CppType Int32_t75_1_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo Interpreter_t1118_Interpreter_EvalChar_m4582_ParameterInfos[] = 
{
	{"mode", 0, 134218371, 0, &Mode_t1115_0_0_0},
	{"ptr", 1, 134218372, 0, &Int32_t75_1_0_0},
	{"pc", 2, 134218373, 0, &Int32_t75_1_0_0},
	{"multi", 3, 134218374, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Int32_t75_Int32U26_t456_Int32U26_t456_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter::EvalChar(System.Text.RegularExpressions.Interpreter/Mode,System.Int32&,System.Int32&,System.Boolean)
extern const MethodInfo Interpreter_EvalChar_m4582_MethodInfo = 
{
	"EvalChar"/* name */
	, (methodPointerType)&Interpreter_EvalChar_m4582/* method */
	, &Interpreter_t1118_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Int32_t75_Int32U26_t456_Int32U26_t456_SByte_t113/* invoker_method */
	, Interpreter_t1118_Interpreter_EvalChar_m4582_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 673/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_1_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo Interpreter_t1118_Interpreter_TryMatch_m4583_ParameterInfos[] = 
{
	{"ref_ptr", 0, 134218375, 0, &Int32_t75_1_0_0},
	{"pc", 1, 134218376, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Int32U26_t456_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter::TryMatch(System.Int32&,System.Int32)
extern const MethodInfo Interpreter_TryMatch_m4583_MethodInfo = 
{
	"TryMatch"/* name */
	, (methodPointerType)&Interpreter_TryMatch_m4583/* method */
	, &Interpreter_t1118_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Int32U26_t456_Int32_t75/* invoker_method */
	, Interpreter_t1118_Interpreter_TryMatch_m4583_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 674/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Position_t1100_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo Interpreter_t1118_Interpreter_IsPosition_m4584_ParameterInfos[] = 
{
	{"pos", 0, 134218377, 0, &Position_t1100_0_0_0},
	{"ptr", 1, 134218378, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_UInt16_t369_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter::IsPosition(System.Text.RegularExpressions.Position,System.Int32)
extern const MethodInfo Interpreter_IsPosition_m4584_MethodInfo = 
{
	"IsPosition"/* name */
	, (methodPointerType)&Interpreter_IsPosition_m4584/* method */
	, &Interpreter_t1118_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_UInt16_t369_Int32_t75/* invoker_method */
	, Interpreter_t1118_Interpreter_IsPosition_m4584_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 675/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Char_t103_0_0_0;
static const ParameterInfo Interpreter_t1118_Interpreter_IsWordChar_m4585_ParameterInfos[] = 
{
	{"c", 0, 134218379, 0, &Char_t103_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Int16_t455 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter::IsWordChar(System.Char)
extern const MethodInfo Interpreter_IsWordChar_m4585_MethodInfo = 
{
	"IsWordChar"/* name */
	, (methodPointerType)&Interpreter_IsWordChar_m4585/* method */
	, &Interpreter_t1118_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Int16_t455/* invoker_method */
	, Interpreter_t1118_Interpreter_IsWordChar_m4585_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 676/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo Interpreter_t1118_Interpreter_GetString_m4586_ParameterInfos[] = 
{
	{"pc", 0, 134218380, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.Interpreter::GetString(System.Int32)
extern const MethodInfo Interpreter_GetString_m4586_MethodInfo = 
{
	"GetString"/* name */
	, (methodPointerType)&Interpreter_GetString_m4586/* method */
	, &Interpreter_t1118_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t75/* invoker_method */
	, Interpreter_t1118_Interpreter_GetString_m4586_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 677/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo Interpreter_t1118_Interpreter_Open_m4587_ParameterInfos[] = 
{
	{"gid", 0, 134218381, 0, &Int32_t75_0_0_0},
	{"ptr", 1, 134218382, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::Open(System.Int32,System.Int32)
extern const MethodInfo Interpreter_Open_m4587_MethodInfo = 
{
	"Open"/* name */
	, (methodPointerType)&Interpreter_Open_m4587/* method */
	, &Interpreter_t1118_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75_Int32_t75/* invoker_method */
	, Interpreter_t1118_Interpreter_Open_m4587_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 678/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo Interpreter_t1118_Interpreter_Close_m4588_ParameterInfos[] = 
{
	{"gid", 0, 134218383, 0, &Int32_t75_0_0_0},
	{"ptr", 1, 134218384, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::Close(System.Int32,System.Int32)
extern const MethodInfo Interpreter_Close_m4588_MethodInfo = 
{
	"Close"/* name */
	, (methodPointerType)&Interpreter_Close_m4588/* method */
	, &Interpreter_t1118_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75_Int32_t75/* invoker_method */
	, Interpreter_t1118_Interpreter_Close_m4588_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 679/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo Interpreter_t1118_Interpreter_Balance_m4589_ParameterInfos[] = 
{
	{"gid", 0, 134218385, 0, &Int32_t75_0_0_0},
	{"balance_gid", 1, 134218386, 0, &Int32_t75_0_0_0},
	{"capture", 2, 134218387, 0, &Boolean_t111_0_0_0},
	{"ptr", 3, 134218388, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Int32_t75_Int32_t75_SByte_t113_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter::Balance(System.Int32,System.Int32,System.Boolean,System.Int32)
extern const MethodInfo Interpreter_Balance_m4589_MethodInfo = 
{
	"Balance"/* name */
	, (methodPointerType)&Interpreter_Balance_m4589/* method */
	, &Interpreter_t1118_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Int32_t75_Int32_t75_SByte_t113_Int32_t75/* invoker_method */
	, Interpreter_t1118_Interpreter_Balance_m4589_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 680/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter::Checkpoint()
extern const MethodInfo Interpreter_Checkpoint_m4590_MethodInfo = 
{
	"Checkpoint"/* name */
	, (methodPointerType)&Interpreter_Checkpoint_m4590/* method */
	, &Interpreter_t1118_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 681/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo Interpreter_t1118_Interpreter_Backtrack_m4591_ParameterInfos[] = 
{
	{"cp", 0, 134218389, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::Backtrack(System.Int32)
extern const MethodInfo Interpreter_Backtrack_m4591_MethodInfo = 
{
	"Backtrack"/* name */
	, (methodPointerType)&Interpreter_Backtrack_m4591/* method */
	, &Interpreter_t1118_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75/* invoker_method */
	, Interpreter_t1118_Interpreter_Backtrack_m4591_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 682/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::ResetGroups()
extern const MethodInfo Interpreter_ResetGroups_m4592_MethodInfo = 
{
	"ResetGroups"/* name */
	, (methodPointerType)&Interpreter_ResetGroups_m4592/* method */
	, &Interpreter_t1118_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 683/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo Interpreter_t1118_Interpreter_GetLastDefined_m4593_ParameterInfos[] = 
{
	{"gid", 0, 134218390, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter::GetLastDefined(System.Int32)
extern const MethodInfo Interpreter_GetLastDefined_m4593_MethodInfo = 
{
	"GetLastDefined"/* name */
	, (methodPointerType)&Interpreter_GetLastDefined_m4593/* method */
	, &Interpreter_t1118_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Int32_t75/* invoker_method */
	, Interpreter_t1118_Interpreter_GetLastDefined_m4593_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 684/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo Interpreter_t1118_Interpreter_CreateMark_m4594_ParameterInfos[] = 
{
	{"previous", 0, 134218391, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter::CreateMark(System.Int32)
extern const MethodInfo Interpreter_CreateMark_m4594_MethodInfo = 
{
	"CreateMark"/* name */
	, (methodPointerType)&Interpreter_CreateMark_m4594/* method */
	, &Interpreter_t1118_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Int32_t75/* invoker_method */
	, Interpreter_t1118_Interpreter_CreateMark_m4594_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 685/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_1_0_2;
extern const Il2CppType Int32_t75_1_0_2;
static const ParameterInfo Interpreter_t1118_Interpreter_GetGroupInfo_m4595_ParameterInfos[] = 
{
	{"gid", 0, 134218392, 0, &Int32_t75_0_0_0},
	{"first_mark_index", 1, 134218393, 0, &Int32_t75_1_0_2},
	{"n_caps", 2, 134218394, 0, &Int32_t75_1_0_2},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75_Int32U26_t456_Int32U26_t456 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::GetGroupInfo(System.Int32,System.Int32&,System.Int32&)
extern const MethodInfo Interpreter_GetGroupInfo_m4595_MethodInfo = 
{
	"GetGroupInfo"/* name */
	, (methodPointerType)&Interpreter_GetGroupInfo_m4595/* method */
	, &Interpreter_t1118_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75_Int32U26_t456_Int32U26_t456/* invoker_method */
	, Interpreter_t1118_Interpreter_GetGroupInfo_m4595_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 686/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Group_t1086_0_0_0;
extern const Il2CppType Group_t1086_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo Interpreter_t1118_Interpreter_PopulateGroup_m4596_ParameterInfos[] = 
{
	{"g", 0, 134218395, 0, &Group_t1086_0_0_0},
	{"first_mark_index", 1, 134218396, 0, &Int32_t75_0_0_0},
	{"n_caps", 2, 134218397, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Int32_t75_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::PopulateGroup(System.Text.RegularExpressions.Group,System.Int32,System.Int32)
extern const MethodInfo Interpreter_PopulateGroup_m4596_MethodInfo = 
{
	"PopulateGroup"/* name */
	, (methodPointerType)&Interpreter_PopulateGroup_m4596/* method */
	, &Interpreter_t1118_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Int32_t75_Int32_t75/* invoker_method */
	, Interpreter_t1118_Interpreter_PopulateGroup_m4596_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 687/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Regex_t792_0_0_0;
static const ParameterInfo Interpreter_t1118_Interpreter_GenerateMatch_m4597_ParameterInfos[] = 
{
	{"regex", 0, 134218398, 0, &Regex_t792_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Interpreter::GenerateMatch(System.Text.RegularExpressions.Regex)
extern const MethodInfo Interpreter_GenerateMatch_m4597_MethodInfo = 
{
	"GenerateMatch"/* name */
	, (methodPointerType)&Interpreter_GenerateMatch_m4597/* method */
	, &Interpreter_t1118_il2cpp_TypeInfo/* declaring_type */
	, &Match_t1080_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Interpreter_t1118_Interpreter_GenerateMatch_m4597_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 688/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Interpreter_t1118_MethodInfos[] =
{
	&Interpreter__ctor_m4577_MethodInfo,
	&Interpreter_ReadProgramCount_m4578_MethodInfo,
	&Interpreter_Scan_m4579_MethodInfo,
	&Interpreter_Reset_m4580_MethodInfo,
	&Interpreter_Eval_m4581_MethodInfo,
	&Interpreter_EvalChar_m4582_MethodInfo,
	&Interpreter_TryMatch_m4583_MethodInfo,
	&Interpreter_IsPosition_m4584_MethodInfo,
	&Interpreter_IsWordChar_m4585_MethodInfo,
	&Interpreter_GetString_m4586_MethodInfo,
	&Interpreter_Open_m4587_MethodInfo,
	&Interpreter_Close_m4588_MethodInfo,
	&Interpreter_Balance_m4589_MethodInfo,
	&Interpreter_Checkpoint_m4590_MethodInfo,
	&Interpreter_Backtrack_m4591_MethodInfo,
	&Interpreter_ResetGroups_m4592_MethodInfo,
	&Interpreter_GetLastDefined_m4593_MethodInfo,
	&Interpreter_CreateMark_m4594_MethodInfo,
	&Interpreter_GetGroupInfo_m4595_MethodInfo,
	&Interpreter_PopulateGroup_m4596_MethodInfo,
	&Interpreter_GenerateMatch_m4597_MethodInfo,
	NULL
};
static const Il2CppType* Interpreter_t1118_il2cpp_TypeInfo__nestedTypes[3] =
{
	&IntStack_t1113_0_0_0,
	&RepeatContext_t1114_0_0_0,
	&Mode_t1115_0_0_0,
};
extern const MethodInfo Interpreter_Scan_m4579_MethodInfo;
extern const MethodInfo BaseMachine_Replace_m4404_MethodInfo;
static const Il2CppMethodReference Interpreter_t1118_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	&Interpreter_Scan_m4579_MethodInfo,
	&BaseMachine_Replace_m4404_MethodInfo,
	&BaseMachine_Replace_m4404_MethodInfo,
	&Interpreter_Scan_m4579_MethodInfo,
};
static bool Interpreter_t1118_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair Interpreter_t1118_InterfacesOffsets[] = 
{
	{ &IMachine_t1089_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType Interpreter_t1118_1_0_0;
extern const Il2CppType BaseMachine_t1082_0_0_0;
struct Interpreter_t1118;
const Il2CppTypeDefinitionMetadata Interpreter_t1118_DefinitionMetadata = 
{
	NULL/* declaringType */
	, Interpreter_t1118_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, Interpreter_t1118_InterfacesOffsets/* interfaceOffsets */
	, &BaseMachine_t1082_0_0_0/* parent */
	, Interpreter_t1118_VTable/* vtableMethods */
	, Interpreter_t1118_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 671/* fieldStart */

};
TypeInfo Interpreter_t1118_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Interpreter"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, Interpreter_t1118_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Interpreter_t1118_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Interpreter_t1118_0_0_0/* byval_arg */
	, &Interpreter_t1118_1_0_0/* this_arg */
	, &Interpreter_t1118_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Interpreter_t1118)/* instance_size */
	, sizeof (Interpreter_t1118)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 21/* method_count */
	, 0/* property_count */
	, 16/* field_count */
	, 0/* event_count */
	, 3/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_Interval.h"
// Metadata Definition System.Text.RegularExpressions.Interval
extern TypeInfo Interval_t1119_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_IntervalMethodDeclarations.h"
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo Interval_t1119_Interval__ctor_m4598_ParameterInfos[] = 
{
	{"low", 0, 134218408, 0, &Int32_t75_0_0_0},
	{"high", 1, 134218409, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interval::.ctor(System.Int32,System.Int32)
extern const MethodInfo Interval__ctor_m4598_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Interval__ctor_m4598/* method */
	, &Interval_t1119_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75_Int32_t75/* invoker_method */
	, Interval_t1119_Interval__ctor_m4598_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 703/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Interval_t1119_0_0_0;
extern void* RuntimeInvoker_Interval_t1119 (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Interval::get_Empty()
extern const MethodInfo Interval_get_Empty_m4599_MethodInfo = 
{
	"get_Empty"/* name */
	, (methodPointerType)&Interval_get_Empty_m4599/* method */
	, &Interval_t1119_il2cpp_TypeInfo/* declaring_type */
	, &Interval_t1119_0_0_0/* return_type */
	, RuntimeInvoker_Interval_t1119/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 704/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::get_IsDiscontiguous()
extern const MethodInfo Interval_get_IsDiscontiguous_m4600_MethodInfo = 
{
	"get_IsDiscontiguous"/* name */
	, (methodPointerType)&Interval_get_IsDiscontiguous_m4600/* method */
	, &Interval_t1119_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 705/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::get_IsSingleton()
extern const MethodInfo Interval_get_IsSingleton_m4601_MethodInfo = 
{
	"get_IsSingleton"/* name */
	, (methodPointerType)&Interval_get_IsSingleton_m4601/* method */
	, &Interval_t1119_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 706/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::get_IsEmpty()
extern const MethodInfo Interval_get_IsEmpty_m4602_MethodInfo = 
{
	"get_IsEmpty"/* name */
	, (methodPointerType)&Interval_get_IsEmpty_m4602/* method */
	, &Interval_t1119_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 707/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interval::get_Size()
extern const MethodInfo Interval_get_Size_m4603_MethodInfo = 
{
	"get_Size"/* name */
	, (methodPointerType)&Interval_get_Size_m4603/* method */
	, &Interval_t1119_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 708/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Interval_t1119_0_0_0;
static const ParameterInfo Interval_t1119_Interval_IsDisjoint_m4604_ParameterInfos[] = 
{
	{"i", 0, 134218410, 0, &Interval_t1119_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Interval_t1119 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::IsDisjoint(System.Text.RegularExpressions.Interval)
extern const MethodInfo Interval_IsDisjoint_m4604_MethodInfo = 
{
	"IsDisjoint"/* name */
	, (methodPointerType)&Interval_IsDisjoint_m4604/* method */
	, &Interval_t1119_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Interval_t1119/* invoker_method */
	, Interval_t1119_Interval_IsDisjoint_m4604_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 709/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Interval_t1119_0_0_0;
static const ParameterInfo Interval_t1119_Interval_IsAdjacent_m4605_ParameterInfos[] = 
{
	{"i", 0, 134218411, 0, &Interval_t1119_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Interval_t1119 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::IsAdjacent(System.Text.RegularExpressions.Interval)
extern const MethodInfo Interval_IsAdjacent_m4605_MethodInfo = 
{
	"IsAdjacent"/* name */
	, (methodPointerType)&Interval_IsAdjacent_m4605/* method */
	, &Interval_t1119_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Interval_t1119/* invoker_method */
	, Interval_t1119_Interval_IsAdjacent_m4605_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 710/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Interval_t1119_0_0_0;
static const ParameterInfo Interval_t1119_Interval_Contains_m4606_ParameterInfos[] = 
{
	{"i", 0, 134218412, 0, &Interval_t1119_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Interval_t1119 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::Contains(System.Text.RegularExpressions.Interval)
extern const MethodInfo Interval_Contains_m4606_MethodInfo = 
{
	"Contains"/* name */
	, (methodPointerType)&Interval_Contains_m4606/* method */
	, &Interval_t1119_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Interval_t1119/* invoker_method */
	, Interval_t1119_Interval_Contains_m4606_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 711/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo Interval_t1119_Interval_Contains_m4607_ParameterInfos[] = 
{
	{"i", 0, 134218413, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::Contains(System.Int32)
extern const MethodInfo Interval_Contains_m4607_MethodInfo = 
{
	"Contains"/* name */
	, (methodPointerType)&Interval_Contains_m4607/* method */
	, &Interval_t1119_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Int32_t75/* invoker_method */
	, Interval_t1119_Interval_Contains_m4607_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 712/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Interval_t1119_0_0_0;
static const ParameterInfo Interval_t1119_Interval_Intersects_m4608_ParameterInfos[] = 
{
	{"i", 0, 134218414, 0, &Interval_t1119_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Interval_t1119 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::Intersects(System.Text.RegularExpressions.Interval)
extern const MethodInfo Interval_Intersects_m4608_MethodInfo = 
{
	"Intersects"/* name */
	, (methodPointerType)&Interval_Intersects_m4608/* method */
	, &Interval_t1119_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Interval_t1119/* invoker_method */
	, Interval_t1119_Interval_Intersects_m4608_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 713/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Interval_t1119_0_0_0;
static const ParameterInfo Interval_t1119_Interval_Merge_m4609_ParameterInfos[] = 
{
	{"i", 0, 134218415, 0, &Interval_t1119_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Interval_t1119 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interval::Merge(System.Text.RegularExpressions.Interval)
extern const MethodInfo Interval_Merge_m4609_MethodInfo = 
{
	"Merge"/* name */
	, (methodPointerType)&Interval_Merge_m4609/* method */
	, &Interval_t1119_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Interval_t1119/* invoker_method */
	, Interval_t1119_Interval_Merge_m4609_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 714/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo Interval_t1119_Interval_CompareTo_m4610_ParameterInfos[] = 
{
	{"o", 0, 134218416, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interval::CompareTo(System.Object)
extern const MethodInfo Interval_CompareTo_m4610_MethodInfo = 
{
	"CompareTo"/* name */
	, (methodPointerType)&Interval_CompareTo_m4610/* method */
	, &Interval_t1119_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Object_t/* invoker_method */
	, Interval_t1119_Interval_CompareTo_m4610_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 715/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Interval_t1119_MethodInfos[] =
{
	&Interval__ctor_m4598_MethodInfo,
	&Interval_get_Empty_m4599_MethodInfo,
	&Interval_get_IsDiscontiguous_m4600_MethodInfo,
	&Interval_get_IsSingleton_m4601_MethodInfo,
	&Interval_get_IsEmpty_m4602_MethodInfo,
	&Interval_get_Size_m4603_MethodInfo,
	&Interval_IsDisjoint_m4604_MethodInfo,
	&Interval_IsAdjacent_m4605_MethodInfo,
	&Interval_Contains_m4606_MethodInfo,
	&Interval_Contains_m4607_MethodInfo,
	&Interval_Intersects_m4608_MethodInfo,
	&Interval_Merge_m4609_MethodInfo,
	&Interval_CompareTo_m4610_MethodInfo,
	NULL
};
extern const MethodInfo Interval_get_Empty_m4599_MethodInfo;
static const PropertyInfo Interval_t1119____Empty_PropertyInfo = 
{
	&Interval_t1119_il2cpp_TypeInfo/* parent */
	, "Empty"/* name */
	, &Interval_get_Empty_m4599_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Interval_get_IsDiscontiguous_m4600_MethodInfo;
static const PropertyInfo Interval_t1119____IsDiscontiguous_PropertyInfo = 
{
	&Interval_t1119_il2cpp_TypeInfo/* parent */
	, "IsDiscontiguous"/* name */
	, &Interval_get_IsDiscontiguous_m4600_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Interval_get_IsSingleton_m4601_MethodInfo;
static const PropertyInfo Interval_t1119____IsSingleton_PropertyInfo = 
{
	&Interval_t1119_il2cpp_TypeInfo/* parent */
	, "IsSingleton"/* name */
	, &Interval_get_IsSingleton_m4601_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Interval_get_IsEmpty_m4602_MethodInfo;
static const PropertyInfo Interval_t1119____IsEmpty_PropertyInfo = 
{
	&Interval_t1119_il2cpp_TypeInfo/* parent */
	, "IsEmpty"/* name */
	, &Interval_get_IsEmpty_m4602_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Interval_get_Size_m4603_MethodInfo;
static const PropertyInfo Interval_t1119____Size_PropertyInfo = 
{
	&Interval_t1119_il2cpp_TypeInfo/* parent */
	, "Size"/* name */
	, &Interval_get_Size_m4603_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* Interval_t1119_PropertyInfos[] =
{
	&Interval_t1119____Empty_PropertyInfo,
	&Interval_t1119____IsDiscontiguous_PropertyInfo,
	&Interval_t1119____IsSingleton_PropertyInfo,
	&Interval_t1119____IsEmpty_PropertyInfo,
	&Interval_t1119____Size_PropertyInfo,
	NULL
};
extern const MethodInfo Interval_CompareTo_m4610_MethodInfo;
static const Il2CppMethodReference Interval_t1119_VTable[] =
{
	&ValueType_Equals_m2220_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&ValueType_GetHashCode_m2221_MethodInfo,
	&ValueType_ToString_m2224_MethodInfo,
	&Interval_CompareTo_m4610_MethodInfo,
};
static bool Interval_t1119_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* Interval_t1119_InterfacesTypeInfos[] = 
{
	&IComparable_t430_0_0_0,
};
static Il2CppInterfaceOffsetPair Interval_t1119_InterfacesOffsets[] = 
{
	{ &IComparable_t430_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType Interval_t1119_1_0_0;
const Il2CppTypeDefinitionMetadata Interval_t1119_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, Interval_t1119_InterfacesTypeInfos/* implementedInterfaces */
	, Interval_t1119_InterfacesOffsets/* interfaceOffsets */
	, &ValueType_t446_0_0_0/* parent */
	, Interval_t1119_VTable/* vtableMethods */
	, Interval_t1119_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 687/* fieldStart */

};
TypeInfo Interval_t1119_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Interval"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, Interval_t1119_MethodInfos/* methods */
	, Interval_t1119_PropertyInfos/* properties */
	, NULL/* events */
	, &Interval_t1119_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Interval_t1119_0_0_0/* byval_arg */
	, &Interval_t1119_1_0_0/* this_arg */
	, &Interval_t1119_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)Interval_t1119_marshal/* marshal_to_native_func */
	, (methodPointerType)Interval_t1119_marshal_back/* marshal_from_native_func */
	, (methodPointerType)Interval_t1119_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (Interval_t1119)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (Interval_t1119)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(Interval_t1119_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048840/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 13/* method_count */
	, 5/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Text.RegularExpressions.IntervalCollection/Enumerator
#include "System_System_Text_RegularExpressions_IntervalCollection_Enu.h"
// Metadata Definition System.Text.RegularExpressions.IntervalCollection/Enumerator
extern TypeInfo Enumerator_t1120_il2cpp_TypeInfo;
// System.Text.RegularExpressions.IntervalCollection/Enumerator
#include "System_System_Text_RegularExpressions_IntervalCollection_EnuMethodDeclarations.h"
extern const Il2CppType IList_t874_0_0_0;
extern const Il2CppType IList_t874_0_0_0;
static const ParameterInfo Enumerator_t1120_Enumerator__ctor_m4611_ParameterInfos[] = 
{
	{"list", 0, 134218426, 0, &IList_t874_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection/Enumerator::.ctor(System.Collections.IList)
extern const MethodInfo Enumerator__ctor_m4611_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Enumerator__ctor_m4611/* method */
	, &Enumerator_t1120_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, Enumerator_t1120_Enumerator__ctor_m4611_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 727/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Text.RegularExpressions.IntervalCollection/Enumerator::get_Current()
extern const MethodInfo Enumerator_get_Current_m4612_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&Enumerator_get_Current_m4612/* method */
	, &Enumerator_t1120_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 728/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.IntervalCollection/Enumerator::MoveNext()
extern const MethodInfo Enumerator_MoveNext_m4613_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&Enumerator_MoveNext_m4613/* method */
	, &Enumerator_t1120_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 729/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection/Enumerator::Reset()
extern const MethodInfo Enumerator_Reset_m4614_MethodInfo = 
{
	"Reset"/* name */
	, (methodPointerType)&Enumerator_Reset_m4614/* method */
	, &Enumerator_t1120_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 730/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Enumerator_t1120_MethodInfos[] =
{
	&Enumerator__ctor_m4611_MethodInfo,
	&Enumerator_get_Current_m4612_MethodInfo,
	&Enumerator_MoveNext_m4613_MethodInfo,
	&Enumerator_Reset_m4614_MethodInfo,
	NULL
};
extern const MethodInfo Enumerator_get_Current_m4612_MethodInfo;
static const PropertyInfo Enumerator_t1120____Current_PropertyInfo = 
{
	&Enumerator_t1120_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &Enumerator_get_Current_m4612_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* Enumerator_t1120_PropertyInfos[] =
{
	&Enumerator_t1120____Current_PropertyInfo,
	NULL
};
extern const MethodInfo Enumerator_MoveNext_m4613_MethodInfo;
extern const MethodInfo Enumerator_Reset_m4614_MethodInfo;
static const Il2CppMethodReference Enumerator_t1120_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	&Enumerator_get_Current_m4612_MethodInfo,
	&Enumerator_MoveNext_m4613_MethodInfo,
	&Enumerator_Reset_m4614_MethodInfo,
};
static bool Enumerator_t1120_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType IEnumerator_t59_0_0_0;
static const Il2CppType* Enumerator_t1120_InterfacesTypeInfos[] = 
{
	&IEnumerator_t59_0_0_0,
};
static Il2CppInterfaceOffsetPair Enumerator_t1120_InterfacesOffsets[] = 
{
	{ &IEnumerator_t59_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType Enumerator_t1120_0_0_0;
extern const Il2CppType Enumerator_t1120_1_0_0;
extern TypeInfo IntervalCollection_t1122_il2cpp_TypeInfo;
extern const Il2CppType IntervalCollection_t1122_0_0_0;
struct Enumerator_t1120;
const Il2CppTypeDefinitionMetadata Enumerator_t1120_DefinitionMetadata = 
{
	&IntervalCollection_t1122_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, Enumerator_t1120_InterfacesTypeInfos/* implementedInterfaces */
	, Enumerator_t1120_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Enumerator_t1120_VTable/* vtableMethods */
	, Enumerator_t1120_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 690/* fieldStart */

};
TypeInfo Enumerator_t1120_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Enumerator"/* name */
	, ""/* namespaze */
	, Enumerator_t1120_MethodInfos/* methods */
	, Enumerator_t1120_PropertyInfos/* properties */
	, NULL/* events */
	, &Enumerator_t1120_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Enumerator_t1120_0_0_0/* byval_arg */
	, &Enumerator_t1120_1_0_0/* this_arg */
	, &Enumerator_t1120_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Enumerator_t1120)/* instance_size */
	, sizeof (Enumerator_t1120)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048579/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 1/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Text.RegularExpressions.IntervalCollection/CostDelegate
#include "System_System_Text_RegularExpressions_IntervalCollection_Cos.h"
// Metadata Definition System.Text.RegularExpressions.IntervalCollection/CostDelegate
extern TypeInfo CostDelegate_t1121_il2cpp_TypeInfo;
// System.Text.RegularExpressions.IntervalCollection/CostDelegate
#include "System_System_Text_RegularExpressions_IntervalCollection_CosMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo CostDelegate_t1121_CostDelegate__ctor_m4615_ParameterInfos[] = 
{
	{"object", 0, 134218427, 0, &Object_t_0_0_0},
	{"method", 1, 134218428, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection/CostDelegate::.ctor(System.Object,System.IntPtr)
extern const MethodInfo CostDelegate__ctor_m4615_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CostDelegate__ctor_m4615/* method */
	, &CostDelegate_t1121_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_IntPtr_t/* invoker_method */
	, CostDelegate_t1121_CostDelegate__ctor_m4615_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 731/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Interval_t1119_0_0_0;
static const ParameterInfo CostDelegate_t1121_CostDelegate_Invoke_m4616_ParameterInfos[] = 
{
	{"i", 0, 134218429, 0, &Interval_t1119_0_0_0},
};
extern const Il2CppType Double_t759_0_0_0;
extern void* RuntimeInvoker_Double_t759_Interval_t1119 (const MethodInfo* method, void* obj, void** args);
// System.Double System.Text.RegularExpressions.IntervalCollection/CostDelegate::Invoke(System.Text.RegularExpressions.Interval)
extern const MethodInfo CostDelegate_Invoke_m4616_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CostDelegate_Invoke_m4616/* method */
	, &CostDelegate_t1121_il2cpp_TypeInfo/* declaring_type */
	, &Double_t759_0_0_0/* return_type */
	, RuntimeInvoker_Double_t759_Interval_t1119/* invoker_method */
	, CostDelegate_t1121_CostDelegate_Invoke_m4616_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 732/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Interval_t1119_0_0_0;
extern const Il2CppType AsyncCallback_t224_0_0_0;
extern const Il2CppType AsyncCallback_t224_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo CostDelegate_t1121_CostDelegate_BeginInvoke_m4617_ParameterInfos[] = 
{
	{"i", 0, 134218430, 0, &Interval_t1119_0_0_0},
	{"callback", 1, 134218431, 0, &AsyncCallback_t224_0_0_0},
	{"object", 2, 134218432, 0, &Object_t_0_0_0},
};
extern const Il2CppType IAsyncResult_t223_0_0_0;
extern void* RuntimeInvoker_Object_t_Interval_t1119_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Text.RegularExpressions.IntervalCollection/CostDelegate::BeginInvoke(System.Text.RegularExpressions.Interval,System.AsyncCallback,System.Object)
extern const MethodInfo CostDelegate_BeginInvoke_m4617_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&CostDelegate_BeginInvoke_m4617/* method */
	, &CostDelegate_t1121_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t223_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Interval_t1119_Object_t_Object_t/* invoker_method */
	, CostDelegate_t1121_CostDelegate_BeginInvoke_m4617_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 733/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t223_0_0_0;
static const ParameterInfo CostDelegate_t1121_CostDelegate_EndInvoke_m4618_ParameterInfos[] = 
{
	{"result", 0, 134218433, 0, &IAsyncResult_t223_0_0_0},
};
extern void* RuntimeInvoker_Double_t759_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Double System.Text.RegularExpressions.IntervalCollection/CostDelegate::EndInvoke(System.IAsyncResult)
extern const MethodInfo CostDelegate_EndInvoke_m4618_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&CostDelegate_EndInvoke_m4618/* method */
	, &CostDelegate_t1121_il2cpp_TypeInfo/* declaring_type */
	, &Double_t759_0_0_0/* return_type */
	, RuntimeInvoker_Double_t759_Object_t/* invoker_method */
	, CostDelegate_t1121_CostDelegate_EndInvoke_m4618_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 734/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* CostDelegate_t1121_MethodInfos[] =
{
	&CostDelegate__ctor_m4615_MethodInfo,
	&CostDelegate_Invoke_m4616_MethodInfo,
	&CostDelegate_BeginInvoke_m4617_MethodInfo,
	&CostDelegate_EndInvoke_m4618_MethodInfo,
	NULL
};
extern const MethodInfo MulticastDelegate_Equals_m2207_MethodInfo;
extern const MethodInfo MulticastDelegate_GetHashCode_m2208_MethodInfo;
extern const MethodInfo MulticastDelegate_GetObjectData_m2209_MethodInfo;
extern const MethodInfo Delegate_Clone_m2210_MethodInfo;
extern const MethodInfo MulticastDelegate_GetInvocationList_m2211_MethodInfo;
extern const MethodInfo MulticastDelegate_CombineImpl_m2212_MethodInfo;
extern const MethodInfo MulticastDelegate_RemoveImpl_m2213_MethodInfo;
extern const MethodInfo CostDelegate_Invoke_m4616_MethodInfo;
extern const MethodInfo CostDelegate_BeginInvoke_m4617_MethodInfo;
extern const MethodInfo CostDelegate_EndInvoke_m4618_MethodInfo;
static const Il2CppMethodReference CostDelegate_t1121_VTable[] =
{
	&MulticastDelegate_Equals_m2207_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&MulticastDelegate_GetHashCode_m2208_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	&MulticastDelegate_GetObjectData_m2209_MethodInfo,
	&Delegate_Clone_m2210_MethodInfo,
	&MulticastDelegate_GetObjectData_m2209_MethodInfo,
	&MulticastDelegate_GetInvocationList_m2211_MethodInfo,
	&MulticastDelegate_CombineImpl_m2212_MethodInfo,
	&MulticastDelegate_RemoveImpl_m2213_MethodInfo,
	&CostDelegate_Invoke_m4616_MethodInfo,
	&CostDelegate_BeginInvoke_m4617_MethodInfo,
	&CostDelegate_EndInvoke_m4618_MethodInfo,
};
static bool CostDelegate_t1121_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType ICloneable_t434_0_0_0;
extern const Il2CppType ISerializable_t435_0_0_0;
static Il2CppInterfaceOffsetPair CostDelegate_t1121_InterfacesOffsets[] = 
{
	{ &ICloneable_t434_0_0_0, 4},
	{ &ISerializable_t435_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType CostDelegate_t1121_0_0_0;
extern const Il2CppType CostDelegate_t1121_1_0_0;
extern const Il2CppType MulticastDelegate_t226_0_0_0;
struct CostDelegate_t1121;
const Il2CppTypeDefinitionMetadata CostDelegate_t1121_DefinitionMetadata = 
{
	&IntervalCollection_t1122_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, CostDelegate_t1121_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t226_0_0_0/* parent */
	, CostDelegate_t1121_VTable/* vtableMethods */
	, CostDelegate_t1121_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo CostDelegate_t1121_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "CostDelegate"/* name */
	, ""/* namespaze */
	, CostDelegate_t1121_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &CostDelegate_t1121_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &CostDelegate_t1121_0_0_0/* byval_arg */
	, &CostDelegate_t1121_1_0_0/* this_arg */
	, &CostDelegate_t1121_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_CostDelegate_t1121/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CostDelegate_t1121)/* instance_size */
	, sizeof (CostDelegate_t1121)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 258/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Text.RegularExpressions.IntervalCollection
#include "System_System_Text_RegularExpressions_IntervalCollection.h"
// Metadata Definition System.Text.RegularExpressions.IntervalCollection
// System.Text.RegularExpressions.IntervalCollection
#include "System_System_Text_RegularExpressions_IntervalCollectionMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection::.ctor()
extern const MethodInfo IntervalCollection__ctor_m4619_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&IntervalCollection__ctor_m4619/* method */
	, &IntervalCollection_t1122_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 716/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo IntervalCollection_t1122_IntervalCollection_get_Item_m4620_ParameterInfos[] = 
{
	{"i", 0, 134218417, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Interval_t1119_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.IntervalCollection::get_Item(System.Int32)
extern const MethodInfo IntervalCollection_get_Item_m4620_MethodInfo = 
{
	"get_Item"/* name */
	, (methodPointerType)&IntervalCollection_get_Item_m4620/* method */
	, &IntervalCollection_t1122_il2cpp_TypeInfo/* declaring_type */
	, &Interval_t1119_0_0_0/* return_type */
	, RuntimeInvoker_Interval_t1119_Int32_t75/* invoker_method */
	, IntervalCollection_t1122_IntervalCollection_get_Item_m4620_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 717/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Interval_t1119_0_0_0;
static const ParameterInfo IntervalCollection_t1122_IntervalCollection_Add_m4621_ParameterInfos[] = 
{
	{"i", 0, 134218418, 0, &Interval_t1119_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Interval_t1119 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection::Add(System.Text.RegularExpressions.Interval)
extern const MethodInfo IntervalCollection_Add_m4621_MethodInfo = 
{
	"Add"/* name */
	, (methodPointerType)&IntervalCollection_Add_m4621/* method */
	, &IntervalCollection_t1122_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Interval_t1119/* invoker_method */
	, IntervalCollection_t1122_IntervalCollection_Add_m4621_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 718/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection::Normalize()
extern const MethodInfo IntervalCollection_Normalize_m4622_MethodInfo = 
{
	"Normalize"/* name */
	, (methodPointerType)&IntervalCollection_Normalize_m4622/* method */
	, &IntervalCollection_t1122_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 719/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType CostDelegate_t1121_0_0_0;
static const ParameterInfo IntervalCollection_t1122_IntervalCollection_GetMetaCollection_m4623_ParameterInfos[] = 
{
	{"cost_del", 0, 134218419, 0, &CostDelegate_t1121_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.IntervalCollection System.Text.RegularExpressions.IntervalCollection::GetMetaCollection(System.Text.RegularExpressions.IntervalCollection/CostDelegate)
extern const MethodInfo IntervalCollection_GetMetaCollection_m4623_MethodInfo = 
{
	"GetMetaCollection"/* name */
	, (methodPointerType)&IntervalCollection_GetMetaCollection_m4623/* method */
	, &IntervalCollection_t1122_il2cpp_TypeInfo/* declaring_type */
	, &IntervalCollection_t1122_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, IntervalCollection_t1122_IntervalCollection_GetMetaCollection_m4623_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 720/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType IntervalCollection_t1122_0_0_0;
extern const Il2CppType CostDelegate_t1121_0_0_0;
static const ParameterInfo IntervalCollection_t1122_IntervalCollection_Optimize_m4624_ParameterInfos[] = 
{
	{"begin", 0, 134218420, 0, &Int32_t75_0_0_0},
	{"end", 1, 134218421, 0, &Int32_t75_0_0_0},
	{"meta", 2, 134218422, 0, &IntervalCollection_t1122_0_0_0},
	{"cost_del", 3, 134218423, 0, &CostDelegate_t1121_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75_Int32_t75_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection::Optimize(System.Int32,System.Int32,System.Text.RegularExpressions.IntervalCollection,System.Text.RegularExpressions.IntervalCollection/CostDelegate)
extern const MethodInfo IntervalCollection_Optimize_m4624_MethodInfo = 
{
	"Optimize"/* name */
	, (methodPointerType)&IntervalCollection_Optimize_m4624/* method */
	, &IntervalCollection_t1122_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75_Int32_t75_Object_t_Object_t/* invoker_method */
	, IntervalCollection_t1122_IntervalCollection_Optimize_m4624_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 721/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.IntervalCollection::get_Count()
extern const MethodInfo IntervalCollection_get_Count_m4625_MethodInfo = 
{
	"get_Count"/* name */
	, (methodPointerType)&IntervalCollection_get_Count_m4625/* method */
	, &IntervalCollection_t1122_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 722/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.IntervalCollection::get_IsSynchronized()
extern const MethodInfo IntervalCollection_get_IsSynchronized_m4626_MethodInfo = 
{
	"get_IsSynchronized"/* name */
	, (methodPointerType)&IntervalCollection_get_IsSynchronized_m4626/* method */
	, &IntervalCollection_t1122_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 723/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Text.RegularExpressions.IntervalCollection::get_SyncRoot()
extern const MethodInfo IntervalCollection_get_SyncRoot_m4627_MethodInfo = 
{
	"get_SyncRoot"/* name */
	, (methodPointerType)&IntervalCollection_get_SyncRoot_m4627/* method */
	, &IntervalCollection_t1122_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 724/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Array_t_0_0_0;
extern const Il2CppType Array_t_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo IntervalCollection_t1122_IntervalCollection_CopyTo_m4628_ParameterInfos[] = 
{
	{"array", 0, 134218424, 0, &Array_t_0_0_0},
	{"index", 1, 134218425, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection::CopyTo(System.Array,System.Int32)
extern const MethodInfo IntervalCollection_CopyTo_m4628_MethodInfo = 
{
	"CopyTo"/* name */
	, (methodPointerType)&IntervalCollection_CopyTo_m4628/* method */
	, &IntervalCollection_t1122_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Int32_t75/* invoker_method */
	, IntervalCollection_t1122_IntervalCollection_CopyTo_m4628_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 725/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.IEnumerator System.Text.RegularExpressions.IntervalCollection::GetEnumerator()
extern const MethodInfo IntervalCollection_GetEnumerator_m4629_MethodInfo = 
{
	"GetEnumerator"/* name */
	, (methodPointerType)&IntervalCollection_GetEnumerator_m4629/* method */
	, &IntervalCollection_t1122_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_t59_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 726/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* IntervalCollection_t1122_MethodInfos[] =
{
	&IntervalCollection__ctor_m4619_MethodInfo,
	&IntervalCollection_get_Item_m4620_MethodInfo,
	&IntervalCollection_Add_m4621_MethodInfo,
	&IntervalCollection_Normalize_m4622_MethodInfo,
	&IntervalCollection_GetMetaCollection_m4623_MethodInfo,
	&IntervalCollection_Optimize_m4624_MethodInfo,
	&IntervalCollection_get_Count_m4625_MethodInfo,
	&IntervalCollection_get_IsSynchronized_m4626_MethodInfo,
	&IntervalCollection_get_SyncRoot_m4627_MethodInfo,
	&IntervalCollection_CopyTo_m4628_MethodInfo,
	&IntervalCollection_GetEnumerator_m4629_MethodInfo,
	NULL
};
extern const MethodInfo IntervalCollection_get_Item_m4620_MethodInfo;
static const PropertyInfo IntervalCollection_t1122____Item_PropertyInfo = 
{
	&IntervalCollection_t1122_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IntervalCollection_get_Item_m4620_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo IntervalCollection_get_Count_m4625_MethodInfo;
static const PropertyInfo IntervalCollection_t1122____Count_PropertyInfo = 
{
	&IntervalCollection_t1122_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &IntervalCollection_get_Count_m4625_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo IntervalCollection_get_IsSynchronized_m4626_MethodInfo;
static const PropertyInfo IntervalCollection_t1122____IsSynchronized_PropertyInfo = 
{
	&IntervalCollection_t1122_il2cpp_TypeInfo/* parent */
	, "IsSynchronized"/* name */
	, &IntervalCollection_get_IsSynchronized_m4626_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo IntervalCollection_get_SyncRoot_m4627_MethodInfo;
static const PropertyInfo IntervalCollection_t1122____SyncRoot_PropertyInfo = 
{
	&IntervalCollection_t1122_il2cpp_TypeInfo/* parent */
	, "SyncRoot"/* name */
	, &IntervalCollection_get_SyncRoot_m4627_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* IntervalCollection_t1122_PropertyInfos[] =
{
	&IntervalCollection_t1122____Item_PropertyInfo,
	&IntervalCollection_t1122____Count_PropertyInfo,
	&IntervalCollection_t1122____IsSynchronized_PropertyInfo,
	&IntervalCollection_t1122____SyncRoot_PropertyInfo,
	NULL
};
static const Il2CppType* IntervalCollection_t1122_il2cpp_TypeInfo__nestedTypes[2] =
{
	&Enumerator_t1120_0_0_0,
	&CostDelegate_t1121_0_0_0,
};
extern const MethodInfo IntervalCollection_CopyTo_m4628_MethodInfo;
extern const MethodInfo IntervalCollection_GetEnumerator_m4629_MethodInfo;
static const Il2CppMethodReference IntervalCollection_t1122_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	&IntervalCollection_get_Count_m4625_MethodInfo,
	&IntervalCollection_get_IsSynchronized_m4626_MethodInfo,
	&IntervalCollection_get_SyncRoot_m4627_MethodInfo,
	&IntervalCollection_CopyTo_m4628_MethodInfo,
	&IntervalCollection_GetEnumerator_m4629_MethodInfo,
};
static bool IntervalCollection_t1122_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType ICollection_t873_0_0_0;
extern const Il2CppType IEnumerable_t471_0_0_0;
static const Il2CppType* IntervalCollection_t1122_InterfacesTypeInfos[] = 
{
	&ICollection_t873_0_0_0,
	&IEnumerable_t471_0_0_0,
};
static Il2CppInterfaceOffsetPair IntervalCollection_t1122_InterfacesOffsets[] = 
{
	{ &ICollection_t873_0_0_0, 4},
	{ &IEnumerable_t471_0_0_0, 8},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType IntervalCollection_t1122_1_0_0;
struct IntervalCollection_t1122;
const Il2CppTypeDefinitionMetadata IntervalCollection_t1122_DefinitionMetadata = 
{
	NULL/* declaringType */
	, IntervalCollection_t1122_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, IntervalCollection_t1122_InterfacesTypeInfos/* implementedInterfaces */
	, IntervalCollection_t1122_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, IntervalCollection_t1122_VTable/* vtableMethods */
	, IntervalCollection_t1122_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 692/* fieldStart */

};
TypeInfo IntervalCollection_t1122_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "IntervalCollection"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, IntervalCollection_t1122_MethodInfos/* methods */
	, IntervalCollection_t1122_PropertyInfos/* properties */
	, NULL/* events */
	, &IntervalCollection_t1122_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 62/* custom_attributes_cache */
	, &IntervalCollection_t1122_0_0_0/* byval_arg */
	, &IntervalCollection_t1122_1_0_0/* this_arg */
	, &IntervalCollection_t1122_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (IntervalCollection_t1122)/* instance_size */
	, sizeof (IntervalCollection_t1122)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 11/* method_count */
	, 4/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 2/* nested_type_count */
	, 9/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Parser
#include "System_System_Text_RegularExpressions_Syntax_Parser.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Parser
extern TypeInfo Parser_t1123_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Parser
#include "System_System_Text_RegularExpressions_Syntax_ParserMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Parser::.ctor()
extern const MethodInfo Parser__ctor_m4630_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Parser__ctor_m4630/* method */
	, &Parser_t1123_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 735/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int32_t75_1_0_0;
static const ParameterInfo Parser_t1123_Parser_ParseDecimal_m4631_ParameterInfos[] = 
{
	{"str", 0, 134218434, 0, &String_t_0_0_0},
	{"ptr", 1, 134218435, 0, &Int32_t75_1_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Object_t_Int32U26_t456 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseDecimal(System.String,System.Int32&)
extern const MethodInfo Parser_ParseDecimal_m4631_MethodInfo = 
{
	"ParseDecimal"/* name */
	, (methodPointerType)&Parser_ParseDecimal_m4631/* method */
	, &Parser_t1123_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Object_t_Int32U26_t456/* invoker_method */
	, Parser_t1123_Parser_ParseDecimal_m4631_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 736/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int32_t75_1_0_0;
static const ParameterInfo Parser_t1123_Parser_ParseOctal_m4632_ParameterInfos[] = 
{
	{"str", 0, 134218436, 0, &String_t_0_0_0},
	{"ptr", 1, 134218437, 0, &Int32_t75_1_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Object_t_Int32U26_t456 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseOctal(System.String,System.Int32&)
extern const MethodInfo Parser_ParseOctal_m4632_MethodInfo = 
{
	"ParseOctal"/* name */
	, (methodPointerType)&Parser_ParseOctal_m4632/* method */
	, &Parser_t1123_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Object_t_Int32U26_t456/* invoker_method */
	, Parser_t1123_Parser_ParseOctal_m4632_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 737/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int32_t75_1_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo Parser_t1123_Parser_ParseHex_m4633_ParameterInfos[] = 
{
	{"str", 0, 134218438, 0, &String_t_0_0_0},
	{"ptr", 1, 134218439, 0, &Int32_t75_1_0_0},
	{"digits", 2, 134218440, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Object_t_Int32U26_t456_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseHex(System.String,System.Int32&,System.Int32)
extern const MethodInfo Parser_ParseHex_m4633_MethodInfo = 
{
	"ParseHex"/* name */
	, (methodPointerType)&Parser_ParseHex_m4633/* method */
	, &Parser_t1123_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Object_t_Int32U26_t456_Int32_t75/* invoker_method */
	, Parser_t1123_Parser_ParseHex_m4633_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 738/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int32_t75_1_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo Parser_t1123_Parser_ParseNumber_m4634_ParameterInfos[] = 
{
	{"str", 0, 134218441, 0, &String_t_0_0_0},
	{"ptr", 1, 134218442, 0, &Int32_t75_1_0_0},
	{"b", 2, 134218443, 0, &Int32_t75_0_0_0},
	{"min", 3, 134218444, 0, &Int32_t75_0_0_0},
	{"max", 4, 134218445, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Object_t_Int32U26_t456_Int32_t75_Int32_t75_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseNumber(System.String,System.Int32&,System.Int32,System.Int32,System.Int32)
extern const MethodInfo Parser_ParseNumber_m4634_MethodInfo = 
{
	"ParseNumber"/* name */
	, (methodPointerType)&Parser_ParseNumber_m4634/* method */
	, &Parser_t1123_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Object_t_Int32U26_t456_Int32_t75_Int32_t75_Int32_t75/* invoker_method */
	, Parser_t1123_Parser_ParseNumber_m4634_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 739/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int32_t75_1_0_0;
static const ParameterInfo Parser_t1123_Parser_ParseName_m4635_ParameterInfos[] = 
{
	{"str", 0, 134218446, 0, &String_t_0_0_0},
	{"ptr", 1, 134218447, 0, &Int32_t75_1_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Int32U26_t456 (const MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.Syntax.Parser::ParseName(System.String,System.Int32&)
extern const MethodInfo Parser_ParseName_m4635_MethodInfo = 
{
	"ParseName"/* name */
	, (methodPointerType)&Parser_ParseName_m4635/* method */
	, &Parser_t1123_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32U26_t456/* invoker_method */
	, Parser_t1123_Parser_ParseName_m4635_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 740/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType RegexOptions_t1097_0_0_0;
static const ParameterInfo Parser_t1123_Parser_ParseRegularExpression_m4636_ParameterInfos[] = 
{
	{"pattern", 0, 134218448, 0, &String_t_0_0_0},
	{"options", 1, 134218449, 0, &RegexOptions_t1097_0_0_0},
};
extern const Il2CppType RegularExpression_t1129_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.RegularExpression System.Text.RegularExpressions.Syntax.Parser::ParseRegularExpression(System.String,System.Text.RegularExpressions.RegexOptions)
extern const MethodInfo Parser_ParseRegularExpression_m4636_MethodInfo = 
{
	"ParseRegularExpression"/* name */
	, (methodPointerType)&Parser_ParseRegularExpression_m4636/* method */
	, &Parser_t1123_il2cpp_TypeInfo/* declaring_type */
	, &RegularExpression_t1129_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32_t75/* invoker_method */
	, Parser_t1123_Parser_ParseRegularExpression_m4636_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 741/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Hashtable_t56_0_0_0;
extern const Il2CppType Hashtable_t56_0_0_0;
static const ParameterInfo Parser_t1123_Parser_GetMapping_m4637_ParameterInfos[] = 
{
	{"mapping", 0, 134218450, 0, &Hashtable_t56_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::GetMapping(System.Collections.Hashtable)
extern const MethodInfo Parser_GetMapping_m4637_MethodInfo = 
{
	"GetMapping"/* name */
	, (methodPointerType)&Parser_GetMapping_m4637/* method */
	, &Parser_t1123_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Object_t/* invoker_method */
	, Parser_t1123_Parser_GetMapping_m4637_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 742/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Group_t1128_0_0_0;
extern const Il2CppType Group_t1128_0_0_0;
extern const Il2CppType RegexOptions_t1097_0_0_0;
extern const Il2CppType Assertion_t1134_0_0_0;
extern const Il2CppType Assertion_t1134_0_0_0;
static const ParameterInfo Parser_t1123_Parser_ParseGroup_m4638_ParameterInfos[] = 
{
	{"group", 0, 134218451, 0, &Group_t1128_0_0_0},
	{"options", 1, 134218452, 0, &RegexOptions_t1097_0_0_0},
	{"assertion", 2, 134218453, 0, &Assertion_t1134_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Parser::ParseGroup(System.Text.RegularExpressions.Syntax.Group,System.Text.RegularExpressions.RegexOptions,System.Text.RegularExpressions.Syntax.Assertion)
extern const MethodInfo Parser_ParseGroup_m4638_MethodInfo = 
{
	"ParseGroup"/* name */
	, (methodPointerType)&Parser_ParseGroup_m4638/* method */
	, &Parser_t1123_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Int32_t75_Object_t/* invoker_method */
	, Parser_t1123_Parser_ParseGroup_m4638_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 743/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType RegexOptions_t1097_1_0_0;
extern const Il2CppType RegexOptions_t1097_1_0_0;
static const ParameterInfo Parser_t1123_Parser_ParseGroupingConstruct_m4639_ParameterInfos[] = 
{
	{"options", 0, 134218454, 0, &RegexOptions_t1097_1_0_0},
};
extern const Il2CppType Expression_t1126_0_0_0;
extern void* RuntimeInvoker_Object_t_RegexOptionsU26_t1213 (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseGroupingConstruct(System.Text.RegularExpressions.RegexOptions&)
extern const MethodInfo Parser_ParseGroupingConstruct_m4639_MethodInfo = 
{
	"ParseGroupingConstruct"/* name */
	, (methodPointerType)&Parser_ParseGroupingConstruct_m4639/* method */
	, &Parser_t1123_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1126_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_RegexOptionsU26_t1213/* invoker_method */
	, Parser_t1123_Parser_ParseGroupingConstruct_m4639_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 744/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ExpressionAssertion_t1135_0_0_0;
extern const Il2CppType ExpressionAssertion_t1135_0_0_0;
static const ParameterInfo Parser_t1123_Parser_ParseAssertionType_m4640_ParameterInfos[] = 
{
	{"assertion", 0, 134218455, 0, &ExpressionAssertion_t1135_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::ParseAssertionType(System.Text.RegularExpressions.Syntax.ExpressionAssertion)
extern const MethodInfo Parser_ParseAssertionType_m4640_MethodInfo = 
{
	"ParseAssertionType"/* name */
	, (methodPointerType)&Parser_ParseAssertionType_m4640/* method */
	, &Parser_t1123_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Object_t/* invoker_method */
	, Parser_t1123_Parser_ParseAssertionType_m4640_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 745/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType RegexOptions_t1097_1_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo Parser_t1123_Parser_ParseOptions_m4641_ParameterInfos[] = 
{
	{"options", 0, 134218456, 0, &RegexOptions_t1097_1_0_0},
	{"negate", 1, 134218457, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_RegexOptionsU26_t1213_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Parser::ParseOptions(System.Text.RegularExpressions.RegexOptions&,System.Boolean)
extern const MethodInfo Parser_ParseOptions_m4641_MethodInfo = 
{
	"ParseOptions"/* name */
	, (methodPointerType)&Parser_ParseOptions_m4641/* method */
	, &Parser_t1123_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_RegexOptionsU26_t1213_SByte_t113/* invoker_method */
	, Parser_t1123_Parser_ParseOptions_m4641_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 746/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType RegexOptions_t1097_0_0_0;
static const ParameterInfo Parser_t1123_Parser_ParseCharacterClass_m4642_ParameterInfos[] = 
{
	{"options", 0, 134218458, 0, &RegexOptions_t1097_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseCharacterClass(System.Text.RegularExpressions.RegexOptions)
extern const MethodInfo Parser_ParseCharacterClass_m4642_MethodInfo = 
{
	"ParseCharacterClass"/* name */
	, (methodPointerType)&Parser_ParseCharacterClass_m4642/* method */
	, &Parser_t1123_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1126_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t75/* invoker_method */
	, Parser_t1123_Parser_ParseCharacterClass_m4642_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 747/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_1_0_2;
extern const Il2CppType Int32_t75_1_0_2;
extern const Il2CppType RegexOptions_t1097_0_0_0;
static const ParameterInfo Parser_t1123_Parser_ParseRepetitionBounds_m4643_ParameterInfos[] = 
{
	{"min", 0, 134218459, 0, &Int32_t75_1_0_2},
	{"max", 1, 134218460, 0, &Int32_t75_1_0_2},
	{"options", 2, 134218461, 0, &RegexOptions_t1097_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Int32U26_t456_Int32U26_t456_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::ParseRepetitionBounds(System.Int32&,System.Int32&,System.Text.RegularExpressions.RegexOptions)
extern const MethodInfo Parser_ParseRepetitionBounds_m4643_MethodInfo = 
{
	"ParseRepetitionBounds"/* name */
	, (methodPointerType)&Parser_ParseRepetitionBounds_m4643/* method */
	, &Parser_t1123_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Int32U26_t456_Int32U26_t456_Int32_t75/* invoker_method */
	, Parser_t1123_Parser_ParseRepetitionBounds_m4643_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 748/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Category_t1104 (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Category System.Text.RegularExpressions.Syntax.Parser::ParseUnicodeCategory()
extern const MethodInfo Parser_ParseUnicodeCategory_m4644_MethodInfo = 
{
	"ParseUnicodeCategory"/* name */
	, (methodPointerType)&Parser_ParseUnicodeCategory_m4644/* method */
	, &Parser_t1123_il2cpp_TypeInfo/* declaring_type */
	, &Category_t1104_0_0_0/* return_type */
	, RuntimeInvoker_Category_t1104/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 749/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType RegexOptions_t1097_0_0_0;
static const ParameterInfo Parser_t1123_Parser_ParseSpecial_m4645_ParameterInfos[] = 
{
	{"options", 0, 134218462, 0, &RegexOptions_t1097_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseSpecial(System.Text.RegularExpressions.RegexOptions)
extern const MethodInfo Parser_ParseSpecial_m4645_MethodInfo = 
{
	"ParseSpecial"/* name */
	, (methodPointerType)&Parser_ParseSpecial_m4645/* method */
	, &Parser_t1123_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1126_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t75/* invoker_method */
	, Parser_t1123_Parser_ParseSpecial_m4645_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 750/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseEscape()
extern const MethodInfo Parser_ParseEscape_m4646_MethodInfo = 
{
	"ParseEscape"/* name */
	, (methodPointerType)&Parser_ParseEscape_m4646/* method */
	, &Parser_t1123_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 751/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.Syntax.Parser::ParseName()
extern const MethodInfo Parser_ParseName_m4647_MethodInfo = 
{
	"ParseName"/* name */
	, (methodPointerType)&Parser_ParseName_m4647/* method */
	, &Parser_t1123_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 752/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Char_t103_0_0_0;
static const ParameterInfo Parser_t1123_Parser_IsNameChar_m4648_ParameterInfos[] = 
{
	{"c", 0, 134218463, 0, &Char_t103_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Int16_t455 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsNameChar(System.Char)
extern const MethodInfo Parser_IsNameChar_m4648_MethodInfo = 
{
	"IsNameChar"/* name */
	, (methodPointerType)&Parser_IsNameChar_m4648/* method */
	, &Parser_t1123_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Int16_t455/* invoker_method */
	, Parser_t1123_Parser_IsNameChar_m4648_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 753/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo Parser_t1123_Parser_ParseNumber_m4649_ParameterInfos[] = 
{
	{"b", 0, 134218464, 0, &Int32_t75_0_0_0},
	{"min", 1, 134218465, 0, &Int32_t75_0_0_0},
	{"max", 2, 134218466, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Int32_t75_Int32_t75_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseNumber(System.Int32,System.Int32,System.Int32)
extern const MethodInfo Parser_ParseNumber_m4649_MethodInfo = 
{
	"ParseNumber"/* name */
	, (methodPointerType)&Parser_ParseNumber_m4649/* method */
	, &Parser_t1123_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Int32_t75_Int32_t75_Int32_t75/* invoker_method */
	, Parser_t1123_Parser_ParseNumber_m4649_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 754/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Char_t103_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo Parser_t1123_Parser_ParseDigit_m4650_ParameterInfos[] = 
{
	{"c", 0, 134218467, 0, &Char_t103_0_0_0},
	{"b", 1, 134218468, 0, &Int32_t75_0_0_0},
	{"n", 2, 134218469, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Int16_t455_Int32_t75_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseDigit(System.Char,System.Int32,System.Int32)
extern const MethodInfo Parser_ParseDigit_m4650_MethodInfo = 
{
	"ParseDigit"/* name */
	, (methodPointerType)&Parser_ParseDigit_m4650/* method */
	, &Parser_t1123_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Int16_t455_Int32_t75_Int32_t75/* invoker_method */
	, Parser_t1123_Parser_ParseDigit_m4650_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 755/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo Parser_t1123_Parser_ConsumeWhitespace_m4651_ParameterInfos[] = 
{
	{"ignore", 0, 134218470, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Parser::ConsumeWhitespace(System.Boolean)
extern const MethodInfo Parser_ConsumeWhitespace_m4651_MethodInfo = 
{
	"ConsumeWhitespace"/* name */
	, (methodPointerType)&Parser_ConsumeWhitespace_m4651/* method */
	, &Parser_t1123_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_SByte_t113/* invoker_method */
	, Parser_t1123_Parser_ConsumeWhitespace_m4651_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 756/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Parser::ResolveReferences()
extern const MethodInfo Parser_ResolveReferences_m4652_MethodInfo = 
{
	"ResolveReferences"/* name */
	, (methodPointerType)&Parser_ResolveReferences_m4652/* method */
	, &Parser_t1123_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 757/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ArrayList_t998_0_0_0;
extern const Il2CppType ArrayList_t998_0_0_0;
static const ParameterInfo Parser_t1123_Parser_HandleExplicitNumericGroups_m4653_ParameterInfos[] = 
{
	{"explicit_numeric_groups", 0, 134218471, 0, &ArrayList_t998_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Parser::HandleExplicitNumericGroups(System.Collections.ArrayList)
extern const MethodInfo Parser_HandleExplicitNumericGroups_m4653_MethodInfo = 
{
	"HandleExplicitNumericGroups"/* name */
	, (methodPointerType)&Parser_HandleExplicitNumericGroups_m4653/* method */
	, &Parser_t1123_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, Parser_t1123_Parser_HandleExplicitNumericGroups_m4653_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 758/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType RegexOptions_t1097_0_0_0;
static const ParameterInfo Parser_t1123_Parser_IsIgnoreCase_m4654_ParameterInfos[] = 
{
	{"options", 0, 134218472, 0, &RegexOptions_t1097_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsIgnoreCase(System.Text.RegularExpressions.RegexOptions)
extern const MethodInfo Parser_IsIgnoreCase_m4654_MethodInfo = 
{
	"IsIgnoreCase"/* name */
	, (methodPointerType)&Parser_IsIgnoreCase_m4654/* method */
	, &Parser_t1123_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Int32_t75/* invoker_method */
	, Parser_t1123_Parser_IsIgnoreCase_m4654_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 759/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType RegexOptions_t1097_0_0_0;
static const ParameterInfo Parser_t1123_Parser_IsMultiline_m4655_ParameterInfos[] = 
{
	{"options", 0, 134218473, 0, &RegexOptions_t1097_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsMultiline(System.Text.RegularExpressions.RegexOptions)
extern const MethodInfo Parser_IsMultiline_m4655_MethodInfo = 
{
	"IsMultiline"/* name */
	, (methodPointerType)&Parser_IsMultiline_m4655/* method */
	, &Parser_t1123_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Int32_t75/* invoker_method */
	, Parser_t1123_Parser_IsMultiline_m4655_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 760/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType RegexOptions_t1097_0_0_0;
static const ParameterInfo Parser_t1123_Parser_IsExplicitCapture_m4656_ParameterInfos[] = 
{
	{"options", 0, 134218474, 0, &RegexOptions_t1097_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsExplicitCapture(System.Text.RegularExpressions.RegexOptions)
extern const MethodInfo Parser_IsExplicitCapture_m4656_MethodInfo = 
{
	"IsExplicitCapture"/* name */
	, (methodPointerType)&Parser_IsExplicitCapture_m4656/* method */
	, &Parser_t1123_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Int32_t75/* invoker_method */
	, Parser_t1123_Parser_IsExplicitCapture_m4656_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 761/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType RegexOptions_t1097_0_0_0;
static const ParameterInfo Parser_t1123_Parser_IsSingleline_m4657_ParameterInfos[] = 
{
	{"options", 0, 134218475, 0, &RegexOptions_t1097_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsSingleline(System.Text.RegularExpressions.RegexOptions)
extern const MethodInfo Parser_IsSingleline_m4657_MethodInfo = 
{
	"IsSingleline"/* name */
	, (methodPointerType)&Parser_IsSingleline_m4657/* method */
	, &Parser_t1123_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Int32_t75/* invoker_method */
	, Parser_t1123_Parser_IsSingleline_m4657_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 762/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType RegexOptions_t1097_0_0_0;
static const ParameterInfo Parser_t1123_Parser_IsIgnorePatternWhitespace_m4658_ParameterInfos[] = 
{
	{"options", 0, 134218476, 0, &RegexOptions_t1097_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsIgnorePatternWhitespace(System.Text.RegularExpressions.RegexOptions)
extern const MethodInfo Parser_IsIgnorePatternWhitespace_m4658_MethodInfo = 
{
	"IsIgnorePatternWhitespace"/* name */
	, (methodPointerType)&Parser_IsIgnorePatternWhitespace_m4658/* method */
	, &Parser_t1123_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Int32_t75/* invoker_method */
	, Parser_t1123_Parser_IsIgnorePatternWhitespace_m4658_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 763/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType RegexOptions_t1097_0_0_0;
static const ParameterInfo Parser_t1123_Parser_IsECMAScript_m4659_ParameterInfos[] = 
{
	{"options", 0, 134218477, 0, &RegexOptions_t1097_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsECMAScript(System.Text.RegularExpressions.RegexOptions)
extern const MethodInfo Parser_IsECMAScript_m4659_MethodInfo = 
{
	"IsECMAScript"/* name */
	, (methodPointerType)&Parser_IsECMAScript_m4659/* method */
	, &Parser_t1123_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Int32_t75/* invoker_method */
	, Parser_t1123_Parser_IsECMAScript_m4659_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 764/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Parser_t1123_Parser_NewParseException_m4660_ParameterInfos[] = 
{
	{"msg", 0, 134218478, 0, &String_t_0_0_0},
};
extern const Il2CppType ArgumentException_t387_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.ArgumentException System.Text.RegularExpressions.Syntax.Parser::NewParseException(System.String)
extern const MethodInfo Parser_NewParseException_m4660_MethodInfo = 
{
	"NewParseException"/* name */
	, (methodPointerType)&Parser_NewParseException_m4660/* method */
	, &Parser_t1123_il2cpp_TypeInfo/* declaring_type */
	, &ArgumentException_t387_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Parser_t1123_Parser_NewParseException_m4660_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 765/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Parser_t1123_MethodInfos[] =
{
	&Parser__ctor_m4630_MethodInfo,
	&Parser_ParseDecimal_m4631_MethodInfo,
	&Parser_ParseOctal_m4632_MethodInfo,
	&Parser_ParseHex_m4633_MethodInfo,
	&Parser_ParseNumber_m4634_MethodInfo,
	&Parser_ParseName_m4635_MethodInfo,
	&Parser_ParseRegularExpression_m4636_MethodInfo,
	&Parser_GetMapping_m4637_MethodInfo,
	&Parser_ParseGroup_m4638_MethodInfo,
	&Parser_ParseGroupingConstruct_m4639_MethodInfo,
	&Parser_ParseAssertionType_m4640_MethodInfo,
	&Parser_ParseOptions_m4641_MethodInfo,
	&Parser_ParseCharacterClass_m4642_MethodInfo,
	&Parser_ParseRepetitionBounds_m4643_MethodInfo,
	&Parser_ParseUnicodeCategory_m4644_MethodInfo,
	&Parser_ParseSpecial_m4645_MethodInfo,
	&Parser_ParseEscape_m4646_MethodInfo,
	&Parser_ParseName_m4647_MethodInfo,
	&Parser_IsNameChar_m4648_MethodInfo,
	&Parser_ParseNumber_m4649_MethodInfo,
	&Parser_ParseDigit_m4650_MethodInfo,
	&Parser_ConsumeWhitespace_m4651_MethodInfo,
	&Parser_ResolveReferences_m4652_MethodInfo,
	&Parser_HandleExplicitNumericGroups_m4653_MethodInfo,
	&Parser_IsIgnoreCase_m4654_MethodInfo,
	&Parser_IsMultiline_m4655_MethodInfo,
	&Parser_IsExplicitCapture_m4656_MethodInfo,
	&Parser_IsSingleline_m4657_MethodInfo,
	&Parser_IsIgnorePatternWhitespace_m4658_MethodInfo,
	&Parser_IsECMAScript_m4659_MethodInfo,
	&Parser_NewParseException_m4660_MethodInfo,
	NULL
};
static const Il2CppMethodReference Parser_t1123_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
};
static bool Parser_t1123_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType Parser_t1123_0_0_0;
extern const Il2CppType Parser_t1123_1_0_0;
struct Parser_t1123;
const Il2CppTypeDefinitionMetadata Parser_t1123_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Parser_t1123_VTable/* vtableMethods */
	, Parser_t1123_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 693/* fieldStart */

};
TypeInfo Parser_t1123_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Parser"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Parser_t1123_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Parser_t1123_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Parser_t1123_0_0_0/* byval_arg */
	, &Parser_t1123_1_0_0/* this_arg */
	, &Parser_t1123_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Parser_t1123)/* instance_size */
	, sizeof (Parser_t1123)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 31/* method_count */
	, 0/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.QuickSearch
#include "System_System_Text_RegularExpressions_QuickSearch.h"
// Metadata Definition System.Text.RegularExpressions.QuickSearch
extern TypeInfo QuickSearch_t1116_il2cpp_TypeInfo;
// System.Text.RegularExpressions.QuickSearch
#include "System_System_Text_RegularExpressions_QuickSearchMethodDeclarations.h"
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo QuickSearch_t1116_QuickSearch__ctor_m4661_ParameterInfos[] = 
{
	{"str", 0, 134218479, 0, &String_t_0_0_0},
	{"ignore", 1, 134218480, 0, &Boolean_t111_0_0_0},
	{"reverse", 2, 134218481, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_SByte_t113_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.QuickSearch::.ctor(System.String,System.Boolean,System.Boolean)
extern const MethodInfo QuickSearch__ctor_m4661_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&QuickSearch__ctor_m4661/* method */
	, &QuickSearch_t1116_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_SByte_t113_SByte_t113/* invoker_method */
	, QuickSearch_t1116_QuickSearch__ctor_m4661_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 766/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.QuickSearch::.cctor()
extern const MethodInfo QuickSearch__cctor_m4662_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&QuickSearch__cctor_m4662/* method */
	, &QuickSearch_t1116_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 767/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.QuickSearch::get_Length()
extern const MethodInfo QuickSearch_get_Length_m4663_MethodInfo = 
{
	"get_Length"/* name */
	, (methodPointerType)&QuickSearch_get_Length_m4663/* method */
	, &QuickSearch_t1116_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 768/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo QuickSearch_t1116_QuickSearch_Search_m4664_ParameterInfos[] = 
{
	{"text", 0, 134218482, 0, &String_t_0_0_0},
	{"start", 1, 134218483, 0, &Int32_t75_0_0_0},
	{"end", 2, 134218484, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Object_t_Int32_t75_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.QuickSearch::Search(System.String,System.Int32,System.Int32)
extern const MethodInfo QuickSearch_Search_m4664_MethodInfo = 
{
	"Search"/* name */
	, (methodPointerType)&QuickSearch_Search_m4664/* method */
	, &QuickSearch_t1116_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Object_t_Int32_t75_Int32_t75/* invoker_method */
	, QuickSearch_t1116_QuickSearch_Search_m4664_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 769/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.QuickSearch::SetupShiftTable()
extern const MethodInfo QuickSearch_SetupShiftTable_m4665_MethodInfo = 
{
	"SetupShiftTable"/* name */
	, (methodPointerType)&QuickSearch_SetupShiftTable_m4665/* method */
	, &QuickSearch_t1116_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 770/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Char_t103_0_0_0;
static const ParameterInfo QuickSearch_t1116_QuickSearch_GetShiftDistance_m4666_ParameterInfos[] = 
{
	{"c", 0, 134218485, 0, &Char_t103_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Int16_t455 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.QuickSearch::GetShiftDistance(System.Char)
extern const MethodInfo QuickSearch_GetShiftDistance_m4666_MethodInfo = 
{
	"GetShiftDistance"/* name */
	, (methodPointerType)&QuickSearch_GetShiftDistance_m4666/* method */
	, &QuickSearch_t1116_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Int16_t455/* invoker_method */
	, QuickSearch_t1116_QuickSearch_GetShiftDistance_m4666_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 771/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Char_t103_0_0_0;
static const ParameterInfo QuickSearch_t1116_QuickSearch_GetChar_m4667_ParameterInfos[] = 
{
	{"c", 0, 134218486, 0, &Char_t103_0_0_0},
};
extern void* RuntimeInvoker_Char_t103_Int16_t455 (const MethodInfo* method, void* obj, void** args);
// System.Char System.Text.RegularExpressions.QuickSearch::GetChar(System.Char)
extern const MethodInfo QuickSearch_GetChar_m4667_MethodInfo = 
{
	"GetChar"/* name */
	, (methodPointerType)&QuickSearch_GetChar_m4667/* method */
	, &QuickSearch_t1116_il2cpp_TypeInfo/* declaring_type */
	, &Char_t103_0_0_0/* return_type */
	, RuntimeInvoker_Char_t103_Int16_t455/* invoker_method */
	, QuickSearch_t1116_QuickSearch_GetChar_m4667_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 772/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* QuickSearch_t1116_MethodInfos[] =
{
	&QuickSearch__ctor_m4661_MethodInfo,
	&QuickSearch__cctor_m4662_MethodInfo,
	&QuickSearch_get_Length_m4663_MethodInfo,
	&QuickSearch_Search_m4664_MethodInfo,
	&QuickSearch_SetupShiftTable_m4665_MethodInfo,
	&QuickSearch_GetShiftDistance_m4666_MethodInfo,
	&QuickSearch_GetChar_m4667_MethodInfo,
	NULL
};
extern const MethodInfo QuickSearch_get_Length_m4663_MethodInfo;
static const PropertyInfo QuickSearch_t1116____Length_PropertyInfo = 
{
	&QuickSearch_t1116_il2cpp_TypeInfo/* parent */
	, "Length"/* name */
	, &QuickSearch_get_Length_m4663_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* QuickSearch_t1116_PropertyInfos[] =
{
	&QuickSearch_t1116____Length_PropertyInfo,
	NULL
};
static const Il2CppMethodReference QuickSearch_t1116_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
};
static bool QuickSearch_t1116_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType QuickSearch_t1116_0_0_0;
extern const Il2CppType QuickSearch_t1116_1_0_0;
struct QuickSearch_t1116;
const Il2CppTypeDefinitionMetadata QuickSearch_t1116_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, QuickSearch_t1116_VTable/* vtableMethods */
	, QuickSearch_t1116_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 699/* fieldStart */

};
TypeInfo QuickSearch_t1116_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "QuickSearch"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, QuickSearch_t1116_MethodInfos/* methods */
	, QuickSearch_t1116_PropertyInfos/* properties */
	, NULL/* events */
	, &QuickSearch_t1116_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &QuickSearch_t1116_0_0_0/* byval_arg */
	, &QuickSearch_t1116_1_0_0/* this_arg */
	, &QuickSearch_t1116_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (QuickSearch_t1116)/* instance_size */
	, sizeof (QuickSearch_t1116)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(QuickSearch_t1116_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, 7/* method_count */
	, 1/* property_count */
	, 7/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.ReplacementEvaluator
#include "System_System_Text_RegularExpressions_ReplacementEvaluator.h"
// Metadata Definition System.Text.RegularExpressions.ReplacementEvaluator
extern TypeInfo ReplacementEvaluator_t1124_il2cpp_TypeInfo;
// System.Text.RegularExpressions.ReplacementEvaluator
#include "System_System_Text_RegularExpressions_ReplacementEvaluatorMethodDeclarations.h"
extern const Il2CppType Regex_t792_0_0_0;
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo ReplacementEvaluator_t1124_ReplacementEvaluator__ctor_m4668_ParameterInfos[] = 
{
	{"regex", 0, 134218487, 0, &Regex_t792_0_0_0},
	{"replacement", 1, 134218488, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::.ctor(System.Text.RegularExpressions.Regex,System.String)
extern const MethodInfo ReplacementEvaluator__ctor_m4668_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ReplacementEvaluator__ctor_m4668/* method */
	, &ReplacementEvaluator_t1124_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Object_t/* invoker_method */
	, ReplacementEvaluator_t1124_ReplacementEvaluator__ctor_m4668_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 773/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Match_t1080_0_0_0;
static const ParameterInfo ReplacementEvaluator_t1124_ReplacementEvaluator_Evaluate_m4669_ParameterInfos[] = 
{
	{"match", 0, 134218489, 0, &Match_t1080_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.ReplacementEvaluator::Evaluate(System.Text.RegularExpressions.Match)
extern const MethodInfo ReplacementEvaluator_Evaluate_m4669_MethodInfo = 
{
	"Evaluate"/* name */
	, (methodPointerType)&ReplacementEvaluator_Evaluate_m4669/* method */
	, &ReplacementEvaluator_t1124_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ReplacementEvaluator_t1124_ReplacementEvaluator_Evaluate_m4669_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 774/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Match_t1080_0_0_0;
extern const Il2CppType StringBuilder_t343_0_0_0;
extern const Il2CppType StringBuilder_t343_0_0_0;
static const ParameterInfo ReplacementEvaluator_t1124_ReplacementEvaluator_EvaluateAppend_m4670_ParameterInfos[] = 
{
	{"match", 0, 134218490, 0, &Match_t1080_0_0_0},
	{"sb", 1, 134218491, 0, &StringBuilder_t343_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::EvaluateAppend(System.Text.RegularExpressions.Match,System.Text.StringBuilder)
extern const MethodInfo ReplacementEvaluator_EvaluateAppend_m4670_MethodInfo = 
{
	"EvaluateAppend"/* name */
	, (methodPointerType)&ReplacementEvaluator_EvaluateAppend_m4670/* method */
	, &ReplacementEvaluator_t1124_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Object_t/* invoker_method */
	, ReplacementEvaluator_t1124_ReplacementEvaluator_EvaluateAppend_m4670_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 775/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.ReplacementEvaluator::get_NeedsGroupsOrCaptures()
extern const MethodInfo ReplacementEvaluator_get_NeedsGroupsOrCaptures_m4671_MethodInfo = 
{
	"get_NeedsGroupsOrCaptures"/* name */
	, (methodPointerType)&ReplacementEvaluator_get_NeedsGroupsOrCaptures_m4671/* method */
	, &ReplacementEvaluator_t1124_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 776/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo ReplacementEvaluator_t1124_ReplacementEvaluator_Ensure_m4672_ParameterInfos[] = 
{
	{"size", 0, 134218492, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::Ensure(System.Int32)
extern const MethodInfo ReplacementEvaluator_Ensure_m4672_MethodInfo = 
{
	"Ensure"/* name */
	, (methodPointerType)&ReplacementEvaluator_Ensure_m4672/* method */
	, &ReplacementEvaluator_t1124_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75/* invoker_method */
	, ReplacementEvaluator_t1124_ReplacementEvaluator_Ensure_m4672_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 777/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo ReplacementEvaluator_t1124_ReplacementEvaluator_AddFromReplacement_m4673_ParameterInfos[] = 
{
	{"start", 0, 134218493, 0, &Int32_t75_0_0_0},
	{"end", 1, 134218494, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::AddFromReplacement(System.Int32,System.Int32)
extern const MethodInfo ReplacementEvaluator_AddFromReplacement_m4673_MethodInfo = 
{
	"AddFromReplacement"/* name */
	, (methodPointerType)&ReplacementEvaluator_AddFromReplacement_m4673/* method */
	, &ReplacementEvaluator_t1124_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75_Int32_t75/* invoker_method */
	, ReplacementEvaluator_t1124_ReplacementEvaluator_AddFromReplacement_m4673_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 778/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo ReplacementEvaluator_t1124_ReplacementEvaluator_AddInt_m4674_ParameterInfos[] = 
{
	{"i", 0, 134218495, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::AddInt(System.Int32)
extern const MethodInfo ReplacementEvaluator_AddInt_m4674_MethodInfo = 
{
	"AddInt"/* name */
	, (methodPointerType)&ReplacementEvaluator_AddInt_m4674/* method */
	, &ReplacementEvaluator_t1124_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75/* invoker_method */
	, ReplacementEvaluator_t1124_ReplacementEvaluator_AddInt_m4674_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 779/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::Compile()
extern const MethodInfo ReplacementEvaluator_Compile_m4675_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&ReplacementEvaluator_Compile_m4675/* method */
	, &ReplacementEvaluator_t1124_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 780/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_1_0_0;
static const ParameterInfo ReplacementEvaluator_t1124_ReplacementEvaluator_CompileTerm_m4676_ParameterInfos[] = 
{
	{"ptr", 0, 134218496, 0, &Int32_t75_1_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Int32U26_t456 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.ReplacementEvaluator::CompileTerm(System.Int32&)
extern const MethodInfo ReplacementEvaluator_CompileTerm_m4676_MethodInfo = 
{
	"CompileTerm"/* name */
	, (methodPointerType)&ReplacementEvaluator_CompileTerm_m4676/* method */
	, &ReplacementEvaluator_t1124_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Int32U26_t456/* invoker_method */
	, ReplacementEvaluator_t1124_ReplacementEvaluator_CompileTerm_m4676_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 781/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ReplacementEvaluator_t1124_MethodInfos[] =
{
	&ReplacementEvaluator__ctor_m4668_MethodInfo,
	&ReplacementEvaluator_Evaluate_m4669_MethodInfo,
	&ReplacementEvaluator_EvaluateAppend_m4670_MethodInfo,
	&ReplacementEvaluator_get_NeedsGroupsOrCaptures_m4671_MethodInfo,
	&ReplacementEvaluator_Ensure_m4672_MethodInfo,
	&ReplacementEvaluator_AddFromReplacement_m4673_MethodInfo,
	&ReplacementEvaluator_AddInt_m4674_MethodInfo,
	&ReplacementEvaluator_Compile_m4675_MethodInfo,
	&ReplacementEvaluator_CompileTerm_m4676_MethodInfo,
	NULL
};
extern const MethodInfo ReplacementEvaluator_get_NeedsGroupsOrCaptures_m4671_MethodInfo;
static const PropertyInfo ReplacementEvaluator_t1124____NeedsGroupsOrCaptures_PropertyInfo = 
{
	&ReplacementEvaluator_t1124_il2cpp_TypeInfo/* parent */
	, "NeedsGroupsOrCaptures"/* name */
	, &ReplacementEvaluator_get_NeedsGroupsOrCaptures_m4671_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* ReplacementEvaluator_t1124_PropertyInfos[] =
{
	&ReplacementEvaluator_t1124____NeedsGroupsOrCaptures_PropertyInfo,
	NULL
};
static const Il2CppMethodReference ReplacementEvaluator_t1124_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
};
static bool ReplacementEvaluator_t1124_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType ReplacementEvaluator_t1124_0_0_0;
extern const Il2CppType ReplacementEvaluator_t1124_1_0_0;
struct ReplacementEvaluator_t1124;
const Il2CppTypeDefinitionMetadata ReplacementEvaluator_t1124_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, ReplacementEvaluator_t1124_VTable/* vtableMethods */
	, ReplacementEvaluator_t1124_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 706/* fieldStart */

};
TypeInfo ReplacementEvaluator_t1124_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "ReplacementEvaluator"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, ReplacementEvaluator_t1124_MethodInfos/* methods */
	, ReplacementEvaluator_t1124_PropertyInfos/* properties */
	, NULL/* events */
	, &ReplacementEvaluator_t1124_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &ReplacementEvaluator_t1124_0_0_0/* byval_arg */
	, &ReplacementEvaluator_t1124_1_0_0/* this_arg */
	, &ReplacementEvaluator_t1124_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ReplacementEvaluator_t1124)/* instance_size */
	, sizeof (ReplacementEvaluator_t1124)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 9/* method_count */
	, 1/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.ExpressionCollection
#include "System_System_Text_RegularExpressions_Syntax_ExpressionColle.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.ExpressionCollection
extern TypeInfo ExpressionCollection_t1125_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.ExpressionCollection
#include "System_System_Text_RegularExpressions_Syntax_ExpressionColleMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::.ctor()
extern const MethodInfo ExpressionCollection__ctor_m4677_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ExpressionCollection__ctor_m4677/* method */
	, &ExpressionCollection_t1125_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 782/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Expression_t1126_0_0_0;
static const ParameterInfo ExpressionCollection_t1125_ExpressionCollection_Add_m4678_ParameterInfos[] = 
{
	{"e", 0, 134218497, 0, &Expression_t1126_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::Add(System.Text.RegularExpressions.Syntax.Expression)
extern const MethodInfo ExpressionCollection_Add_m4678_MethodInfo = 
{
	"Add"/* name */
	, (methodPointerType)&ExpressionCollection_Add_m4678/* method */
	, &ExpressionCollection_t1125_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, ExpressionCollection_t1125_ExpressionCollection_Add_m4678_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 783/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo ExpressionCollection_t1125_ExpressionCollection_get_Item_m4679_ParameterInfos[] = 
{
	{"i", 0, 134218498, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.ExpressionCollection::get_Item(System.Int32)
extern const MethodInfo ExpressionCollection_get_Item_m4679_MethodInfo = 
{
	"get_Item"/* name */
	, (methodPointerType)&ExpressionCollection_get_Item_m4679/* method */
	, &ExpressionCollection_t1125_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1126_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t75/* invoker_method */
	, ExpressionCollection_t1125_ExpressionCollection_get_Item_m4679_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 784/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Expression_t1126_0_0_0;
static const ParameterInfo ExpressionCollection_t1125_ExpressionCollection_set_Item_m4680_ParameterInfos[] = 
{
	{"i", 0, 134218499, 0, &Int32_t75_0_0_0},
	{"value", 1, 134218500, 0, &Expression_t1126_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::set_Item(System.Int32,System.Text.RegularExpressions.Syntax.Expression)
extern const MethodInfo ExpressionCollection_set_Item_m4680_MethodInfo = 
{
	"set_Item"/* name */
	, (methodPointerType)&ExpressionCollection_set_Item_m4680/* method */
	, &ExpressionCollection_t1125_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75_Object_t/* invoker_method */
	, ExpressionCollection_t1125_ExpressionCollection_set_Item_m4680_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 785/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo ExpressionCollection_t1125_ExpressionCollection_OnValidate_m4681_ParameterInfos[] = 
{
	{"o", 0, 134218501, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::OnValidate(System.Object)
extern const MethodInfo ExpressionCollection_OnValidate_m4681_MethodInfo = 
{
	"OnValidate"/* name */
	, (methodPointerType)&ExpressionCollection_OnValidate_m4681/* method */
	, &ExpressionCollection_t1125_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, ExpressionCollection_t1125_ExpressionCollection_OnValidate_m4681_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 28/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 786/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ExpressionCollection_t1125_MethodInfos[] =
{
	&ExpressionCollection__ctor_m4677_MethodInfo,
	&ExpressionCollection_Add_m4678_MethodInfo,
	&ExpressionCollection_get_Item_m4679_MethodInfo,
	&ExpressionCollection_set_Item_m4680_MethodInfo,
	&ExpressionCollection_OnValidate_m4681_MethodInfo,
	NULL
};
extern const MethodInfo ExpressionCollection_get_Item_m4679_MethodInfo;
extern const MethodInfo ExpressionCollection_set_Item_m4680_MethodInfo;
static const PropertyInfo ExpressionCollection_t1125____Item_PropertyInfo = 
{
	&ExpressionCollection_t1125_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &ExpressionCollection_get_Item_m4679_MethodInfo/* get */
	, &ExpressionCollection_set_Item_m4680_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* ExpressionCollection_t1125_PropertyInfos[] =
{
	&ExpressionCollection_t1125____Item_PropertyInfo,
	NULL
};
extern const MethodInfo CollectionBase_GetEnumerator_m5110_MethodInfo;
extern const MethodInfo CollectionBase_get_Count_m5111_MethodInfo;
extern const MethodInfo CollectionBase_System_Collections_ICollection_get_IsSynchronized_m5112_MethodInfo;
extern const MethodInfo CollectionBase_System_Collections_ICollection_get_SyncRoot_m5113_MethodInfo;
extern const MethodInfo CollectionBase_System_Collections_ICollection_CopyTo_m5114_MethodInfo;
extern const MethodInfo CollectionBase_System_Collections_IList_get_IsFixedSize_m5115_MethodInfo;
extern const MethodInfo CollectionBase_System_Collections_IList_get_IsReadOnly_m5116_MethodInfo;
extern const MethodInfo CollectionBase_System_Collections_IList_get_Item_m5117_MethodInfo;
extern const MethodInfo CollectionBase_System_Collections_IList_set_Item_m5118_MethodInfo;
extern const MethodInfo CollectionBase_System_Collections_IList_Add_m5119_MethodInfo;
extern const MethodInfo CollectionBase_Clear_m5120_MethodInfo;
extern const MethodInfo CollectionBase_System_Collections_IList_Contains_m5121_MethodInfo;
extern const MethodInfo CollectionBase_System_Collections_IList_IndexOf_m5122_MethodInfo;
extern const MethodInfo CollectionBase_System_Collections_IList_Insert_m5123_MethodInfo;
extern const MethodInfo CollectionBase_System_Collections_IList_Remove_m5124_MethodInfo;
extern const MethodInfo CollectionBase_RemoveAt_m5125_MethodInfo;
extern const MethodInfo CollectionBase_OnClear_m5126_MethodInfo;
extern const MethodInfo CollectionBase_OnClearComplete_m5127_MethodInfo;
extern const MethodInfo CollectionBase_OnInsert_m5128_MethodInfo;
extern const MethodInfo CollectionBase_OnInsertComplete_m5129_MethodInfo;
extern const MethodInfo CollectionBase_OnRemove_m5130_MethodInfo;
extern const MethodInfo CollectionBase_OnRemoveComplete_m5131_MethodInfo;
extern const MethodInfo CollectionBase_OnSet_m5132_MethodInfo;
extern const MethodInfo CollectionBase_OnSetComplete_m5133_MethodInfo;
extern const MethodInfo ExpressionCollection_OnValidate_m4681_MethodInfo;
static const Il2CppMethodReference ExpressionCollection_t1125_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	&CollectionBase_GetEnumerator_m5110_MethodInfo,
	&CollectionBase_get_Count_m5111_MethodInfo,
	&CollectionBase_System_Collections_ICollection_get_IsSynchronized_m5112_MethodInfo,
	&CollectionBase_System_Collections_ICollection_get_SyncRoot_m5113_MethodInfo,
	&CollectionBase_System_Collections_ICollection_CopyTo_m5114_MethodInfo,
	&CollectionBase_System_Collections_IList_get_IsFixedSize_m5115_MethodInfo,
	&CollectionBase_System_Collections_IList_get_IsReadOnly_m5116_MethodInfo,
	&CollectionBase_System_Collections_IList_get_Item_m5117_MethodInfo,
	&CollectionBase_System_Collections_IList_set_Item_m5118_MethodInfo,
	&CollectionBase_System_Collections_IList_Add_m5119_MethodInfo,
	&CollectionBase_Clear_m5120_MethodInfo,
	&CollectionBase_System_Collections_IList_Contains_m5121_MethodInfo,
	&CollectionBase_System_Collections_IList_IndexOf_m5122_MethodInfo,
	&CollectionBase_System_Collections_IList_Insert_m5123_MethodInfo,
	&CollectionBase_System_Collections_IList_Remove_m5124_MethodInfo,
	&CollectionBase_RemoveAt_m5125_MethodInfo,
	&CollectionBase_OnClear_m5126_MethodInfo,
	&CollectionBase_OnClearComplete_m5127_MethodInfo,
	&CollectionBase_OnInsert_m5128_MethodInfo,
	&CollectionBase_OnInsertComplete_m5129_MethodInfo,
	&CollectionBase_OnRemove_m5130_MethodInfo,
	&CollectionBase_OnRemoveComplete_m5131_MethodInfo,
	&CollectionBase_OnSet_m5132_MethodInfo,
	&CollectionBase_OnSetComplete_m5133_MethodInfo,
	&ExpressionCollection_OnValidate_m4681_MethodInfo,
};
static bool ExpressionCollection_t1125_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair ExpressionCollection_t1125_InterfacesOffsets[] = 
{
	{ &IEnumerable_t471_0_0_0, 4},
	{ &ICollection_t873_0_0_0, 5},
	{ &IList_t874_0_0_0, 9},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType ExpressionCollection_t1125_0_0_0;
extern const Il2CppType ExpressionCollection_t1125_1_0_0;
extern const Il2CppType CollectionBase_t1054_0_0_0;
struct ExpressionCollection_t1125;
const Il2CppTypeDefinitionMetadata ExpressionCollection_t1125_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, ExpressionCollection_t1125_InterfacesOffsets/* interfaceOffsets */
	, &CollectionBase_t1054_0_0_0/* parent */
	, ExpressionCollection_t1125_VTable/* vtableMethods */
	, ExpressionCollection_t1125_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ExpressionCollection_t1125_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "ExpressionCollection"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, ExpressionCollection_t1125_MethodInfos/* methods */
	, ExpressionCollection_t1125_PropertyInfos/* properties */
	, NULL/* events */
	, &ExpressionCollection_t1125_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 63/* custom_attributes_cache */
	, &ExpressionCollection_t1125_0_0_0/* byval_arg */
	, &ExpressionCollection_t1125_1_0_0/* this_arg */
	, &ExpressionCollection_t1125_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ExpressionCollection_t1125)/* instance_size */
	, sizeof (ExpressionCollection_t1125)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 29/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_Expression.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Expression
extern TypeInfo Expression_t1126_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_ExpressionMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Expression::.ctor()
extern const MethodInfo Expression__ctor_m4682_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Expression__ctor_m4682/* method */
	, &Expression_t1126_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 787/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICompiler_t1169_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo Expression_t1126_Expression_Compile_m5090_ParameterInfos[] = 
{
	{"cmp", 0, 134218502, 0, &ICompiler_t1169_0_0_0},
	{"reverse", 1, 134218503, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern const MethodInfo Expression_Compile_m5090_MethodInfo = 
{
	"Compile"/* name */
	, NULL/* method */
	, &Expression_t1126_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_SByte_t113/* invoker_method */
	, Expression_t1126_Expression_Compile_m5090_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 788/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_1_0_2;
extern const Il2CppType Int32_t75_1_0_2;
static const ParameterInfo Expression_t1126_Expression_GetWidth_m5091_ParameterInfos[] = 
{
	{"min", 0, 134218504, 0, &Int32_t75_1_0_2},
	{"max", 1, 134218505, 0, &Int32_t75_1_0_2},
};
extern void* RuntimeInvoker_Void_t110_Int32U26_t456_Int32U26_t456 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Expression::GetWidth(System.Int32&,System.Int32&)
extern const MethodInfo Expression_GetWidth_m5091_MethodInfo = 
{
	"GetWidth"/* name */
	, NULL/* method */
	, &Expression_t1126_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32U26_t456_Int32U26_t456/* invoker_method */
	, Expression_t1126_Expression_GetWidth_m5091_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 789/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Expression::GetFixedWidth()
extern const MethodInfo Expression_GetFixedWidth_m4683_MethodInfo = 
{
	"GetFixedWidth"/* name */
	, (methodPointerType)&Expression_GetFixedWidth_m4683/* method */
	, &Expression_t1126_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 790/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo Expression_t1126_Expression_GetAnchorInfo_m4684_ParameterInfos[] = 
{
	{"reverse", 0, 134218506, 0, &Boolean_t111_0_0_0},
};
extern const Il2CppType AnchorInfo_t1144_0_0_0;
extern void* RuntimeInvoker_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Expression::GetAnchorInfo(System.Boolean)
extern const MethodInfo Expression_GetAnchorInfo_m4684_MethodInfo = 
{
	"GetAnchorInfo"/* name */
	, (methodPointerType)&Expression_GetAnchorInfo_m4684/* method */
	, &Expression_t1126_il2cpp_TypeInfo/* declaring_type */
	, &AnchorInfo_t1144_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_SByte_t113/* invoker_method */
	, Expression_t1126_Expression_GetAnchorInfo_m4684_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 791/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Expression::IsComplex()
extern const MethodInfo Expression_IsComplex_m5092_MethodInfo = 
{
	"IsComplex"/* name */
	, NULL/* method */
	, &Expression_t1126_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 792/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Expression_t1126_MethodInfos[] =
{
	&Expression__ctor_m4682_MethodInfo,
	&Expression_Compile_m5090_MethodInfo,
	&Expression_GetWidth_m5091_MethodInfo,
	&Expression_GetFixedWidth_m4683_MethodInfo,
	&Expression_GetAnchorInfo_m4684_MethodInfo,
	&Expression_IsComplex_m5092_MethodInfo,
	NULL
};
extern const MethodInfo Expression_GetAnchorInfo_m4684_MethodInfo;
static const Il2CppMethodReference Expression_t1126_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	NULL,
	NULL,
	&Expression_GetAnchorInfo_m4684_MethodInfo,
	NULL,
};
static bool Expression_t1126_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType Expression_t1126_1_0_0;
struct Expression_t1126;
const Il2CppTypeDefinitionMetadata Expression_t1126_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Expression_t1126_VTable/* vtableMethods */
	, Expression_t1126_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo Expression_t1126_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Expression"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Expression_t1126_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Expression_t1126_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Expression_t1126_0_0_0/* byval_arg */
	, &Expression_t1126_1_0_0/* this_arg */
	, &Expression_t1126_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Expression_t1126)/* instance_size */
	, sizeof (Expression_t1126)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048704/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 6/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.CompositeExpression
#include "System_System_Text_RegularExpressions_Syntax_CompositeExpres.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.CompositeExpression
extern TypeInfo CompositeExpression_t1127_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.CompositeExpression
#include "System_System_Text_RegularExpressions_Syntax_CompositeExpresMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CompositeExpression::.ctor()
extern const MethodInfo CompositeExpression__ctor_m4685_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CompositeExpression__ctor_m4685/* method */
	, &CompositeExpression_t1127_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 793/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.CompositeExpression::get_Expressions()
extern const MethodInfo CompositeExpression_get_Expressions_m4686_MethodInfo = 
{
	"get_Expressions"/* name */
	, (methodPointerType)&CompositeExpression_get_Expressions_m4686/* method */
	, &CompositeExpression_t1127_il2cpp_TypeInfo/* declaring_type */
	, &ExpressionCollection_t1125_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2180/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 794/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_1_0_2;
extern const Il2CppType Int32_t75_1_0_2;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo CompositeExpression_t1127_CompositeExpression_GetWidth_m4687_ParameterInfos[] = 
{
	{"min", 0, 134218507, 0, &Int32_t75_1_0_2},
	{"max", 1, 134218508, 0, &Int32_t75_1_0_2},
	{"count", 2, 134218509, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32U26_t456_Int32U26_t456_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CompositeExpression::GetWidth(System.Int32&,System.Int32&,System.Int32)
extern const MethodInfo CompositeExpression_GetWidth_m4687_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&CompositeExpression_GetWidth_m4687/* method */
	, &CompositeExpression_t1127_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32U26_t456_Int32U26_t456_Int32_t75/* invoker_method */
	, CompositeExpression_t1127_CompositeExpression_GetWidth_m4687_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 132/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 795/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.CompositeExpression::IsComplex()
extern const MethodInfo CompositeExpression_IsComplex_m4688_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&CompositeExpression_IsComplex_m4688/* method */
	, &CompositeExpression_t1127_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 796/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* CompositeExpression_t1127_MethodInfos[] =
{
	&CompositeExpression__ctor_m4685_MethodInfo,
	&CompositeExpression_get_Expressions_m4686_MethodInfo,
	&CompositeExpression_GetWidth_m4687_MethodInfo,
	&CompositeExpression_IsComplex_m4688_MethodInfo,
	NULL
};
extern const MethodInfo CompositeExpression_get_Expressions_m4686_MethodInfo;
static const PropertyInfo CompositeExpression_t1127____Expressions_PropertyInfo = 
{
	&CompositeExpression_t1127_il2cpp_TypeInfo/* parent */
	, "Expressions"/* name */
	, &CompositeExpression_get_Expressions_m4686_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* CompositeExpression_t1127_PropertyInfos[] =
{
	&CompositeExpression_t1127____Expressions_PropertyInfo,
	NULL
};
extern const MethodInfo CompositeExpression_IsComplex_m4688_MethodInfo;
static const Il2CppMethodReference CompositeExpression_t1127_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	NULL,
	NULL,
	&Expression_GetAnchorInfo_m4684_MethodInfo,
	&CompositeExpression_IsComplex_m4688_MethodInfo,
};
static bool CompositeExpression_t1127_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType CompositeExpression_t1127_0_0_0;
extern const Il2CppType CompositeExpression_t1127_1_0_0;
struct CompositeExpression_t1127;
const Il2CppTypeDefinitionMetadata CompositeExpression_t1127_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Expression_t1126_0_0_0/* parent */
	, CompositeExpression_t1127_VTable/* vtableMethods */
	, CompositeExpression_t1127_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 710/* fieldStart */

};
TypeInfo CompositeExpression_t1127_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "CompositeExpression"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, CompositeExpression_t1127_MethodInfos/* methods */
	, CompositeExpression_t1127_PropertyInfos/* properties */
	, NULL/* events */
	, &CompositeExpression_t1127_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &CompositeExpression_t1127_0_0_0/* byval_arg */
	, &CompositeExpression_t1127_1_0_0/* this_arg */
	, &CompositeExpression_t1127_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CompositeExpression_t1127)/* instance_size */
	, sizeof (CompositeExpression_t1127)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048704/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Group
#include "System_System_Text_RegularExpressions_Syntax_Group.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Group
extern TypeInfo Group_t1128_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Group
#include "System_System_Text_RegularExpressions_Syntax_GroupMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Group::.ctor()
extern const MethodInfo Group__ctor_m4689_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Group__ctor_m4689/* method */
	, &Group_t1128_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 797/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Expression_t1126_0_0_0;
static const ParameterInfo Group_t1128_Group_AppendExpression_m4690_ParameterInfos[] = 
{
	{"e", 0, 134218510, 0, &Expression_t1126_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Group::AppendExpression(System.Text.RegularExpressions.Syntax.Expression)
extern const MethodInfo Group_AppendExpression_m4690_MethodInfo = 
{
	"AppendExpression"/* name */
	, (methodPointerType)&Group_AppendExpression_m4690/* method */
	, &Group_t1128_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, Group_t1128_Group_AppendExpression_m4690_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 798/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICompiler_t1169_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo Group_t1128_Group_Compile_m4691_ParameterInfos[] = 
{
	{"cmp", 0, 134218511, 0, &ICompiler_t1169_0_0_0},
	{"reverse", 1, 134218512, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Group::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern const MethodInfo Group_Compile_m4691_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&Group_Compile_m4691/* method */
	, &Group_t1128_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_SByte_t113/* invoker_method */
	, Group_t1128_Group_Compile_m4691_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 799/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_1_0_2;
extern const Il2CppType Int32_t75_1_0_2;
static const ParameterInfo Group_t1128_Group_GetWidth_m4692_ParameterInfos[] = 
{
	{"min", 0, 134218513, 0, &Int32_t75_1_0_2},
	{"max", 1, 134218514, 0, &Int32_t75_1_0_2},
};
extern void* RuntimeInvoker_Void_t110_Int32U26_t456_Int32U26_t456 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Group::GetWidth(System.Int32&,System.Int32&)
extern const MethodInfo Group_GetWidth_m4692_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&Group_GetWidth_m4692/* method */
	, &Group_t1128_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32U26_t456_Int32U26_t456/* invoker_method */
	, Group_t1128_Group_GetWidth_m4692_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 800/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo Group_t1128_Group_GetAnchorInfo_m4693_ParameterInfos[] = 
{
	{"reverse", 0, 134218515, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Group::GetAnchorInfo(System.Boolean)
extern const MethodInfo Group_GetAnchorInfo_m4693_MethodInfo = 
{
	"GetAnchorInfo"/* name */
	, (methodPointerType)&Group_GetAnchorInfo_m4693/* method */
	, &Group_t1128_il2cpp_TypeInfo/* declaring_type */
	, &AnchorInfo_t1144_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_SByte_t113/* invoker_method */
	, Group_t1128_Group_GetAnchorInfo_m4693_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 801/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Group_t1128_MethodInfos[] =
{
	&Group__ctor_m4689_MethodInfo,
	&Group_AppendExpression_m4690_MethodInfo,
	&Group_Compile_m4691_MethodInfo,
	&Group_GetWidth_m4692_MethodInfo,
	&Group_GetAnchorInfo_m4693_MethodInfo,
	NULL
};
extern const MethodInfo Group_Compile_m4691_MethodInfo;
extern const MethodInfo Group_GetWidth_m4692_MethodInfo;
extern const MethodInfo Group_GetAnchorInfo_m4693_MethodInfo;
static const Il2CppMethodReference Group_t1128_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	&Group_Compile_m4691_MethodInfo,
	&Group_GetWidth_m4692_MethodInfo,
	&Group_GetAnchorInfo_m4693_MethodInfo,
	&CompositeExpression_IsComplex_m4688_MethodInfo,
};
static bool Group_t1128_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType Group_t1128_1_0_0;
struct Group_t1128;
const Il2CppTypeDefinitionMetadata Group_t1128_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &CompositeExpression_t1127_0_0_0/* parent */
	, Group_t1128_VTable/* vtableMethods */
	, Group_t1128_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo Group_t1128_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Group"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Group_t1128_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Group_t1128_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Group_t1128_0_0_0/* byval_arg */
	, &Group_t1128_1_0_0/* this_arg */
	, &Group_t1128_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Group_t1128)/* instance_size */
	, sizeof (Group_t1128)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.RegularExpression
#include "System_System_Text_RegularExpressions_Syntax_RegularExpressi.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.RegularExpression
extern TypeInfo RegularExpression_t1129_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.RegularExpression
#include "System_System_Text_RegularExpressions_Syntax_RegularExpressiMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.RegularExpression::.ctor()
extern const MethodInfo RegularExpression__ctor_m4694_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&RegularExpression__ctor_m4694/* method */
	, &RegularExpression_t1129_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 802/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo RegularExpression_t1129_RegularExpression_set_GroupCount_m4695_ParameterInfos[] = 
{
	{"value", 0, 134218516, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.RegularExpression::set_GroupCount(System.Int32)
extern const MethodInfo RegularExpression_set_GroupCount_m4695_MethodInfo = 
{
	"set_GroupCount"/* name */
	, (methodPointerType)&RegularExpression_set_GroupCount_m4695/* method */
	, &RegularExpression_t1129_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75/* invoker_method */
	, RegularExpression_t1129_RegularExpression_set_GroupCount_m4695_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 803/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICompiler_t1169_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo RegularExpression_t1129_RegularExpression_Compile_m4696_ParameterInfos[] = 
{
	{"cmp", 0, 134218517, 0, &ICompiler_t1169_0_0_0},
	{"reverse", 1, 134218518, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.RegularExpression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern const MethodInfo RegularExpression_Compile_m4696_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&RegularExpression_Compile_m4696/* method */
	, &RegularExpression_t1129_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_SByte_t113/* invoker_method */
	, RegularExpression_t1129_RegularExpression_Compile_m4696_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 804/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* RegularExpression_t1129_MethodInfos[] =
{
	&RegularExpression__ctor_m4694_MethodInfo,
	&RegularExpression_set_GroupCount_m4695_MethodInfo,
	&RegularExpression_Compile_m4696_MethodInfo,
	NULL
};
extern const MethodInfo RegularExpression_set_GroupCount_m4695_MethodInfo;
static const PropertyInfo RegularExpression_t1129____GroupCount_PropertyInfo = 
{
	&RegularExpression_t1129_il2cpp_TypeInfo/* parent */
	, "GroupCount"/* name */
	, NULL/* get */
	, &RegularExpression_set_GroupCount_m4695_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* RegularExpression_t1129_PropertyInfos[] =
{
	&RegularExpression_t1129____GroupCount_PropertyInfo,
	NULL
};
extern const MethodInfo RegularExpression_Compile_m4696_MethodInfo;
static const Il2CppMethodReference RegularExpression_t1129_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	&RegularExpression_Compile_m4696_MethodInfo,
	&Group_GetWidth_m4692_MethodInfo,
	&Group_GetAnchorInfo_m4693_MethodInfo,
	&CompositeExpression_IsComplex_m4688_MethodInfo,
};
static bool RegularExpression_t1129_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType RegularExpression_t1129_1_0_0;
struct RegularExpression_t1129;
const Il2CppTypeDefinitionMetadata RegularExpression_t1129_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Group_t1128_0_0_0/* parent */
	, RegularExpression_t1129_VTable/* vtableMethods */
	, RegularExpression_t1129_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 711/* fieldStart */

};
TypeInfo RegularExpression_t1129_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "RegularExpression"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, RegularExpression_t1129_MethodInfos/* methods */
	, RegularExpression_t1129_PropertyInfos/* properties */
	, NULL/* events */
	, &RegularExpression_t1129_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &RegularExpression_t1129_0_0_0/* byval_arg */
	, &RegularExpression_t1129_1_0_0/* this_arg */
	, &RegularExpression_t1129_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (RegularExpression_t1129)/* instance_size */
	, sizeof (RegularExpression_t1129)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.CapturingGroup
#include "System_System_Text_RegularExpressions_Syntax_CapturingGroup.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.CapturingGroup
extern TypeInfo CapturingGroup_t1130_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.CapturingGroup
#include "System_System_Text_RegularExpressions_Syntax_CapturingGroupMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CapturingGroup::.ctor()
extern const MethodInfo CapturingGroup__ctor_m4697_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CapturingGroup__ctor_m4697/* method */
	, &CapturingGroup_t1130_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 805/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.CapturingGroup::get_Index()
extern const MethodInfo CapturingGroup_get_Index_m4698_MethodInfo = 
{
	"get_Index"/* name */
	, (methodPointerType)&CapturingGroup_get_Index_m4698/* method */
	, &CapturingGroup_t1130_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 806/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo CapturingGroup_t1130_CapturingGroup_set_Index_m4699_ParameterInfos[] = 
{
	{"value", 0, 134218519, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CapturingGroup::set_Index(System.Int32)
extern const MethodInfo CapturingGroup_set_Index_m4699_MethodInfo = 
{
	"set_Index"/* name */
	, (methodPointerType)&CapturingGroup_set_Index_m4699/* method */
	, &CapturingGroup_t1130_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75/* invoker_method */
	, CapturingGroup_t1130_CapturingGroup_set_Index_m4699_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 807/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.Syntax.CapturingGroup::get_Name()
extern const MethodInfo CapturingGroup_get_Name_m4700_MethodInfo = 
{
	"get_Name"/* name */
	, (methodPointerType)&CapturingGroup_get_Name_m4700/* method */
	, &CapturingGroup_t1130_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 808/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo CapturingGroup_t1130_CapturingGroup_set_Name_m4701_ParameterInfos[] = 
{
	{"value", 0, 134218520, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CapturingGroup::set_Name(System.String)
extern const MethodInfo CapturingGroup_set_Name_m4701_MethodInfo = 
{
	"set_Name"/* name */
	, (methodPointerType)&CapturingGroup_set_Name_m4701/* method */
	, &CapturingGroup_t1130_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, CapturingGroup_t1130_CapturingGroup_set_Name_m4701_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 809/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.CapturingGroup::get_IsNamed()
extern const MethodInfo CapturingGroup_get_IsNamed_m4702_MethodInfo = 
{
	"get_IsNamed"/* name */
	, (methodPointerType)&CapturingGroup_get_IsNamed_m4702/* method */
	, &CapturingGroup_t1130_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 810/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICompiler_t1169_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo CapturingGroup_t1130_CapturingGroup_Compile_m4703_ParameterInfos[] = 
{
	{"cmp", 0, 134218521, 0, &ICompiler_t1169_0_0_0},
	{"reverse", 1, 134218522, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CapturingGroup::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern const MethodInfo CapturingGroup_Compile_m4703_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&CapturingGroup_Compile_m4703/* method */
	, &CapturingGroup_t1130_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_SByte_t113/* invoker_method */
	, CapturingGroup_t1130_CapturingGroup_Compile_m4703_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 811/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.CapturingGroup::IsComplex()
extern const MethodInfo CapturingGroup_IsComplex_m4704_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&CapturingGroup_IsComplex_m4704/* method */
	, &CapturingGroup_t1130_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 812/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo CapturingGroup_t1130_CapturingGroup_CompareTo_m4705_ParameterInfos[] = 
{
	{"other", 0, 134218523, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.CapturingGroup::CompareTo(System.Object)
extern const MethodInfo CapturingGroup_CompareTo_m4705_MethodInfo = 
{
	"CompareTo"/* name */
	, (methodPointerType)&CapturingGroup_CompareTo_m4705/* method */
	, &CapturingGroup_t1130_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Object_t/* invoker_method */
	, CapturingGroup_t1130_CapturingGroup_CompareTo_m4705_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 813/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* CapturingGroup_t1130_MethodInfos[] =
{
	&CapturingGroup__ctor_m4697_MethodInfo,
	&CapturingGroup_get_Index_m4698_MethodInfo,
	&CapturingGroup_set_Index_m4699_MethodInfo,
	&CapturingGroup_get_Name_m4700_MethodInfo,
	&CapturingGroup_set_Name_m4701_MethodInfo,
	&CapturingGroup_get_IsNamed_m4702_MethodInfo,
	&CapturingGroup_Compile_m4703_MethodInfo,
	&CapturingGroup_IsComplex_m4704_MethodInfo,
	&CapturingGroup_CompareTo_m4705_MethodInfo,
	NULL
};
extern const MethodInfo CapturingGroup_get_Index_m4698_MethodInfo;
extern const MethodInfo CapturingGroup_set_Index_m4699_MethodInfo;
static const PropertyInfo CapturingGroup_t1130____Index_PropertyInfo = 
{
	&CapturingGroup_t1130_il2cpp_TypeInfo/* parent */
	, "Index"/* name */
	, &CapturingGroup_get_Index_m4698_MethodInfo/* get */
	, &CapturingGroup_set_Index_m4699_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo CapturingGroup_get_Name_m4700_MethodInfo;
extern const MethodInfo CapturingGroup_set_Name_m4701_MethodInfo;
static const PropertyInfo CapturingGroup_t1130____Name_PropertyInfo = 
{
	&CapturingGroup_t1130_il2cpp_TypeInfo/* parent */
	, "Name"/* name */
	, &CapturingGroup_get_Name_m4700_MethodInfo/* get */
	, &CapturingGroup_set_Name_m4701_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo CapturingGroup_get_IsNamed_m4702_MethodInfo;
static const PropertyInfo CapturingGroup_t1130____IsNamed_PropertyInfo = 
{
	&CapturingGroup_t1130_il2cpp_TypeInfo/* parent */
	, "IsNamed"/* name */
	, &CapturingGroup_get_IsNamed_m4702_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* CapturingGroup_t1130_PropertyInfos[] =
{
	&CapturingGroup_t1130____Index_PropertyInfo,
	&CapturingGroup_t1130____Name_PropertyInfo,
	&CapturingGroup_t1130____IsNamed_PropertyInfo,
	NULL
};
extern const MethodInfo CapturingGroup_Compile_m4703_MethodInfo;
extern const MethodInfo CapturingGroup_IsComplex_m4704_MethodInfo;
extern const MethodInfo CapturingGroup_CompareTo_m4705_MethodInfo;
static const Il2CppMethodReference CapturingGroup_t1130_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	&CapturingGroup_Compile_m4703_MethodInfo,
	&Group_GetWidth_m4692_MethodInfo,
	&Group_GetAnchorInfo_m4693_MethodInfo,
	&CapturingGroup_IsComplex_m4704_MethodInfo,
	&CapturingGroup_CompareTo_m4705_MethodInfo,
};
static bool CapturingGroup_t1130_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* CapturingGroup_t1130_InterfacesTypeInfos[] = 
{
	&IComparable_t430_0_0_0,
};
static Il2CppInterfaceOffsetPair CapturingGroup_t1130_InterfacesOffsets[] = 
{
	{ &IComparable_t430_0_0_0, 8},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType CapturingGroup_t1130_0_0_0;
extern const Il2CppType CapturingGroup_t1130_1_0_0;
struct CapturingGroup_t1130;
const Il2CppTypeDefinitionMetadata CapturingGroup_t1130_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, CapturingGroup_t1130_InterfacesTypeInfos/* implementedInterfaces */
	, CapturingGroup_t1130_InterfacesOffsets/* interfaceOffsets */
	, &Group_t1128_0_0_0/* parent */
	, CapturingGroup_t1130_VTable/* vtableMethods */
	, CapturingGroup_t1130_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 712/* fieldStart */

};
TypeInfo CapturingGroup_t1130_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "CapturingGroup"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, CapturingGroup_t1130_MethodInfos/* methods */
	, CapturingGroup_t1130_PropertyInfos/* properties */
	, NULL/* events */
	, &CapturingGroup_t1130_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &CapturingGroup_t1130_0_0_0/* byval_arg */
	, &CapturingGroup_t1130_1_0_0/* this_arg */
	, &CapturingGroup_t1130_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CapturingGroup_t1130)/* instance_size */
	, sizeof (CapturingGroup_t1130)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 9/* method_count */
	, 3/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.BalancingGroup
#include "System_System_Text_RegularExpressions_Syntax_BalancingGroup.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.BalancingGroup
extern TypeInfo BalancingGroup_t1131_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.BalancingGroup
#include "System_System_Text_RegularExpressions_Syntax_BalancingGroupMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.BalancingGroup::.ctor()
extern const MethodInfo BalancingGroup__ctor_m4706_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&BalancingGroup__ctor_m4706/* method */
	, &BalancingGroup_t1131_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 814/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType CapturingGroup_t1130_0_0_0;
static const ParameterInfo BalancingGroup_t1131_BalancingGroup_set_Balance_m4707_ParameterInfos[] = 
{
	{"value", 0, 134218524, 0, &CapturingGroup_t1130_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.BalancingGroup::set_Balance(System.Text.RegularExpressions.Syntax.CapturingGroup)
extern const MethodInfo BalancingGroup_set_Balance_m4707_MethodInfo = 
{
	"set_Balance"/* name */
	, (methodPointerType)&BalancingGroup_set_Balance_m4707/* method */
	, &BalancingGroup_t1131_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, BalancingGroup_t1131_BalancingGroup_set_Balance_m4707_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 815/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICompiler_t1169_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo BalancingGroup_t1131_BalancingGroup_Compile_m4708_ParameterInfos[] = 
{
	{"cmp", 0, 134218525, 0, &ICompiler_t1169_0_0_0},
	{"reverse", 1, 134218526, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.BalancingGroup::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern const MethodInfo BalancingGroup_Compile_m4708_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&BalancingGroup_Compile_m4708/* method */
	, &BalancingGroup_t1131_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_SByte_t113/* invoker_method */
	, BalancingGroup_t1131_BalancingGroup_Compile_m4708_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 816/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* BalancingGroup_t1131_MethodInfos[] =
{
	&BalancingGroup__ctor_m4706_MethodInfo,
	&BalancingGroup_set_Balance_m4707_MethodInfo,
	&BalancingGroup_Compile_m4708_MethodInfo,
	NULL
};
extern const MethodInfo BalancingGroup_set_Balance_m4707_MethodInfo;
static const PropertyInfo BalancingGroup_t1131____Balance_PropertyInfo = 
{
	&BalancingGroup_t1131_il2cpp_TypeInfo/* parent */
	, "Balance"/* name */
	, NULL/* get */
	, &BalancingGroup_set_Balance_m4707_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* BalancingGroup_t1131_PropertyInfos[] =
{
	&BalancingGroup_t1131____Balance_PropertyInfo,
	NULL
};
extern const MethodInfo BalancingGroup_Compile_m4708_MethodInfo;
static const Il2CppMethodReference BalancingGroup_t1131_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	&BalancingGroup_Compile_m4708_MethodInfo,
	&Group_GetWidth_m4692_MethodInfo,
	&Group_GetAnchorInfo_m4693_MethodInfo,
	&CapturingGroup_IsComplex_m4704_MethodInfo,
	&CapturingGroup_CompareTo_m4705_MethodInfo,
};
static bool BalancingGroup_t1131_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair BalancingGroup_t1131_InterfacesOffsets[] = 
{
	{ &IComparable_t430_0_0_0, 8},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType BalancingGroup_t1131_0_0_0;
extern const Il2CppType BalancingGroup_t1131_1_0_0;
struct BalancingGroup_t1131;
const Il2CppTypeDefinitionMetadata BalancingGroup_t1131_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, BalancingGroup_t1131_InterfacesOffsets/* interfaceOffsets */
	, &CapturingGroup_t1130_0_0_0/* parent */
	, BalancingGroup_t1131_VTable/* vtableMethods */
	, BalancingGroup_t1131_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 714/* fieldStart */

};
TypeInfo BalancingGroup_t1131_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "BalancingGroup"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, BalancingGroup_t1131_MethodInfos/* methods */
	, BalancingGroup_t1131_PropertyInfos/* properties */
	, NULL/* events */
	, &BalancingGroup_t1131_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &BalancingGroup_t1131_0_0_0/* byval_arg */
	, &BalancingGroup_t1131_1_0_0/* this_arg */
	, &BalancingGroup_t1131_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (BalancingGroup_t1131)/* instance_size */
	, sizeof (BalancingGroup_t1131)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.NonBacktrackingGroup
#include "System_System_Text_RegularExpressions_Syntax_NonBacktracking.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.NonBacktrackingGroup
extern TypeInfo NonBacktrackingGroup_t1132_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.NonBacktrackingGroup
#include "System_System_Text_RegularExpressions_Syntax_NonBacktrackingMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.NonBacktrackingGroup::.ctor()
extern const MethodInfo NonBacktrackingGroup__ctor_m4709_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&NonBacktrackingGroup__ctor_m4709/* method */
	, &NonBacktrackingGroup_t1132_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 817/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICompiler_t1169_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo NonBacktrackingGroup_t1132_NonBacktrackingGroup_Compile_m4710_ParameterInfos[] = 
{
	{"cmp", 0, 134218527, 0, &ICompiler_t1169_0_0_0},
	{"reverse", 1, 134218528, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.NonBacktrackingGroup::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern const MethodInfo NonBacktrackingGroup_Compile_m4710_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&NonBacktrackingGroup_Compile_m4710/* method */
	, &NonBacktrackingGroup_t1132_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_SByte_t113/* invoker_method */
	, NonBacktrackingGroup_t1132_NonBacktrackingGroup_Compile_m4710_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 818/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.NonBacktrackingGroup::IsComplex()
extern const MethodInfo NonBacktrackingGroup_IsComplex_m4711_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&NonBacktrackingGroup_IsComplex_m4711/* method */
	, &NonBacktrackingGroup_t1132_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 819/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* NonBacktrackingGroup_t1132_MethodInfos[] =
{
	&NonBacktrackingGroup__ctor_m4709_MethodInfo,
	&NonBacktrackingGroup_Compile_m4710_MethodInfo,
	&NonBacktrackingGroup_IsComplex_m4711_MethodInfo,
	NULL
};
extern const MethodInfo NonBacktrackingGroup_Compile_m4710_MethodInfo;
extern const MethodInfo NonBacktrackingGroup_IsComplex_m4711_MethodInfo;
static const Il2CppMethodReference NonBacktrackingGroup_t1132_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	&NonBacktrackingGroup_Compile_m4710_MethodInfo,
	&Group_GetWidth_m4692_MethodInfo,
	&Group_GetAnchorInfo_m4693_MethodInfo,
	&NonBacktrackingGroup_IsComplex_m4711_MethodInfo,
};
static bool NonBacktrackingGroup_t1132_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType NonBacktrackingGroup_t1132_0_0_0;
extern const Il2CppType NonBacktrackingGroup_t1132_1_0_0;
struct NonBacktrackingGroup_t1132;
const Il2CppTypeDefinitionMetadata NonBacktrackingGroup_t1132_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Group_t1128_0_0_0/* parent */
	, NonBacktrackingGroup_t1132_VTable/* vtableMethods */
	, NonBacktrackingGroup_t1132_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo NonBacktrackingGroup_t1132_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "NonBacktrackingGroup"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, NonBacktrackingGroup_t1132_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &NonBacktrackingGroup_t1132_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &NonBacktrackingGroup_t1132_0_0_0/* byval_arg */
	, &NonBacktrackingGroup_t1132_1_0_0/* this_arg */
	, &NonBacktrackingGroup_t1132_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (NonBacktrackingGroup_t1132)/* instance_size */
	, sizeof (NonBacktrackingGroup_t1132)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Repetition
#include "System_System_Text_RegularExpressions_Syntax_Repetition.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Repetition
extern TypeInfo Repetition_t1133_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Repetition
#include "System_System_Text_RegularExpressions_Syntax_RepetitionMethodDeclarations.h"
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo Repetition_t1133_Repetition__ctor_m4712_ParameterInfos[] = 
{
	{"min", 0, 134218529, 0, &Int32_t75_0_0_0},
	{"max", 1, 134218530, 0, &Int32_t75_0_0_0},
	{"lazy", 2, 134218531, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75_Int32_t75_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Repetition::.ctor(System.Int32,System.Int32,System.Boolean)
extern const MethodInfo Repetition__ctor_m4712_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Repetition__ctor_m4712/* method */
	, &Repetition_t1133_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75_Int32_t75_SByte_t113/* invoker_method */
	, Repetition_t1133_Repetition__ctor_m4712_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 820/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Repetition::get_Expression()
extern const MethodInfo Repetition_get_Expression_m4713_MethodInfo = 
{
	"get_Expression"/* name */
	, (methodPointerType)&Repetition_get_Expression_m4713/* method */
	, &Repetition_t1133_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1126_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 821/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Expression_t1126_0_0_0;
static const ParameterInfo Repetition_t1133_Repetition_set_Expression_m4714_ParameterInfos[] = 
{
	{"value", 0, 134218532, 0, &Expression_t1126_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Repetition::set_Expression(System.Text.RegularExpressions.Syntax.Expression)
extern const MethodInfo Repetition_set_Expression_m4714_MethodInfo = 
{
	"set_Expression"/* name */
	, (methodPointerType)&Repetition_set_Expression_m4714/* method */
	, &Repetition_t1133_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, Repetition_t1133_Repetition_set_Expression_m4714_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 822/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Repetition::get_Minimum()
extern const MethodInfo Repetition_get_Minimum_m4715_MethodInfo = 
{
	"get_Minimum"/* name */
	, (methodPointerType)&Repetition_get_Minimum_m4715/* method */
	, &Repetition_t1133_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 823/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICompiler_t1169_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo Repetition_t1133_Repetition_Compile_m4716_ParameterInfos[] = 
{
	{"cmp", 0, 134218533, 0, &ICompiler_t1169_0_0_0},
	{"reverse", 1, 134218534, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Repetition::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern const MethodInfo Repetition_Compile_m4716_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&Repetition_Compile_m4716/* method */
	, &Repetition_t1133_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_SByte_t113/* invoker_method */
	, Repetition_t1133_Repetition_Compile_m4716_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 824/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_1_0_2;
extern const Il2CppType Int32_t75_1_0_2;
static const ParameterInfo Repetition_t1133_Repetition_GetWidth_m4717_ParameterInfos[] = 
{
	{"min", 0, 134218535, 0, &Int32_t75_1_0_2},
	{"max", 1, 134218536, 0, &Int32_t75_1_0_2},
};
extern void* RuntimeInvoker_Void_t110_Int32U26_t456_Int32U26_t456 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Repetition::GetWidth(System.Int32&,System.Int32&)
extern const MethodInfo Repetition_GetWidth_m4717_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&Repetition_GetWidth_m4717/* method */
	, &Repetition_t1133_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32U26_t456_Int32U26_t456/* invoker_method */
	, Repetition_t1133_Repetition_GetWidth_m4717_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 825/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo Repetition_t1133_Repetition_GetAnchorInfo_m4718_ParameterInfos[] = 
{
	{"reverse", 0, 134218537, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Repetition::GetAnchorInfo(System.Boolean)
extern const MethodInfo Repetition_GetAnchorInfo_m4718_MethodInfo = 
{
	"GetAnchorInfo"/* name */
	, (methodPointerType)&Repetition_GetAnchorInfo_m4718/* method */
	, &Repetition_t1133_il2cpp_TypeInfo/* declaring_type */
	, &AnchorInfo_t1144_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_SByte_t113/* invoker_method */
	, Repetition_t1133_Repetition_GetAnchorInfo_m4718_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 826/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Repetition_t1133_MethodInfos[] =
{
	&Repetition__ctor_m4712_MethodInfo,
	&Repetition_get_Expression_m4713_MethodInfo,
	&Repetition_set_Expression_m4714_MethodInfo,
	&Repetition_get_Minimum_m4715_MethodInfo,
	&Repetition_Compile_m4716_MethodInfo,
	&Repetition_GetWidth_m4717_MethodInfo,
	&Repetition_GetAnchorInfo_m4718_MethodInfo,
	NULL
};
extern const MethodInfo Repetition_get_Expression_m4713_MethodInfo;
extern const MethodInfo Repetition_set_Expression_m4714_MethodInfo;
static const PropertyInfo Repetition_t1133____Expression_PropertyInfo = 
{
	&Repetition_t1133_il2cpp_TypeInfo/* parent */
	, "Expression"/* name */
	, &Repetition_get_Expression_m4713_MethodInfo/* get */
	, &Repetition_set_Expression_m4714_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Repetition_get_Minimum_m4715_MethodInfo;
static const PropertyInfo Repetition_t1133____Minimum_PropertyInfo = 
{
	&Repetition_t1133_il2cpp_TypeInfo/* parent */
	, "Minimum"/* name */
	, &Repetition_get_Minimum_m4715_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* Repetition_t1133_PropertyInfos[] =
{
	&Repetition_t1133____Expression_PropertyInfo,
	&Repetition_t1133____Minimum_PropertyInfo,
	NULL
};
extern const MethodInfo Repetition_Compile_m4716_MethodInfo;
extern const MethodInfo Repetition_GetWidth_m4717_MethodInfo;
extern const MethodInfo Repetition_GetAnchorInfo_m4718_MethodInfo;
static const Il2CppMethodReference Repetition_t1133_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	&Repetition_Compile_m4716_MethodInfo,
	&Repetition_GetWidth_m4717_MethodInfo,
	&Repetition_GetAnchorInfo_m4718_MethodInfo,
	&CompositeExpression_IsComplex_m4688_MethodInfo,
};
static bool Repetition_t1133_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType Repetition_t1133_0_0_0;
extern const Il2CppType Repetition_t1133_1_0_0;
struct Repetition_t1133;
const Il2CppTypeDefinitionMetadata Repetition_t1133_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &CompositeExpression_t1127_0_0_0/* parent */
	, Repetition_t1133_VTable/* vtableMethods */
	, Repetition_t1133_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 715/* fieldStart */

};
TypeInfo Repetition_t1133_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Repetition"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Repetition_t1133_MethodInfos/* methods */
	, Repetition_t1133_PropertyInfos/* properties */
	, NULL/* events */
	, &Repetition_t1133_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Repetition_t1133_0_0_0/* byval_arg */
	, &Repetition_t1133_1_0_0/* this_arg */
	, &Repetition_t1133_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Repetition_t1133)/* instance_size */
	, sizeof (Repetition_t1133)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 7/* method_count */
	, 2/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Assertion
#include "System_System_Text_RegularExpressions_Syntax_Assertion.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Assertion
extern TypeInfo Assertion_t1134_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Assertion
#include "System_System_Text_RegularExpressions_Syntax_AssertionMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Assertion::.ctor()
extern const MethodInfo Assertion__ctor_m4719_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Assertion__ctor_m4719/* method */
	, &Assertion_t1134_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 827/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Assertion::get_TrueExpression()
extern const MethodInfo Assertion_get_TrueExpression_m4720_MethodInfo = 
{
	"get_TrueExpression"/* name */
	, (methodPointerType)&Assertion_get_TrueExpression_m4720/* method */
	, &Assertion_t1134_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1126_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 828/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Expression_t1126_0_0_0;
static const ParameterInfo Assertion_t1134_Assertion_set_TrueExpression_m4721_ParameterInfos[] = 
{
	{"value", 0, 134218538, 0, &Expression_t1126_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Assertion::set_TrueExpression(System.Text.RegularExpressions.Syntax.Expression)
extern const MethodInfo Assertion_set_TrueExpression_m4721_MethodInfo = 
{
	"set_TrueExpression"/* name */
	, (methodPointerType)&Assertion_set_TrueExpression_m4721/* method */
	, &Assertion_t1134_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, Assertion_t1134_Assertion_set_TrueExpression_m4721_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 829/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Assertion::get_FalseExpression()
extern const MethodInfo Assertion_get_FalseExpression_m4722_MethodInfo = 
{
	"get_FalseExpression"/* name */
	, (methodPointerType)&Assertion_get_FalseExpression_m4722/* method */
	, &Assertion_t1134_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1126_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 830/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Expression_t1126_0_0_0;
static const ParameterInfo Assertion_t1134_Assertion_set_FalseExpression_m4723_ParameterInfos[] = 
{
	{"value", 0, 134218539, 0, &Expression_t1126_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Assertion::set_FalseExpression(System.Text.RegularExpressions.Syntax.Expression)
extern const MethodInfo Assertion_set_FalseExpression_m4723_MethodInfo = 
{
	"set_FalseExpression"/* name */
	, (methodPointerType)&Assertion_set_FalseExpression_m4723/* method */
	, &Assertion_t1134_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, Assertion_t1134_Assertion_set_FalseExpression_m4723_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 831/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_1_0_2;
extern const Il2CppType Int32_t75_1_0_2;
static const ParameterInfo Assertion_t1134_Assertion_GetWidth_m4724_ParameterInfos[] = 
{
	{"min", 0, 134218540, 0, &Int32_t75_1_0_2},
	{"max", 1, 134218541, 0, &Int32_t75_1_0_2},
};
extern void* RuntimeInvoker_Void_t110_Int32U26_t456_Int32U26_t456 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Assertion::GetWidth(System.Int32&,System.Int32&)
extern const MethodInfo Assertion_GetWidth_m4724_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&Assertion_GetWidth_m4724/* method */
	, &Assertion_t1134_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32U26_t456_Int32U26_t456/* invoker_method */
	, Assertion_t1134_Assertion_GetWidth_m4724_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 832/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Assertion_t1134_MethodInfos[] =
{
	&Assertion__ctor_m4719_MethodInfo,
	&Assertion_get_TrueExpression_m4720_MethodInfo,
	&Assertion_set_TrueExpression_m4721_MethodInfo,
	&Assertion_get_FalseExpression_m4722_MethodInfo,
	&Assertion_set_FalseExpression_m4723_MethodInfo,
	&Assertion_GetWidth_m4724_MethodInfo,
	NULL
};
extern const MethodInfo Assertion_get_TrueExpression_m4720_MethodInfo;
extern const MethodInfo Assertion_set_TrueExpression_m4721_MethodInfo;
static const PropertyInfo Assertion_t1134____TrueExpression_PropertyInfo = 
{
	&Assertion_t1134_il2cpp_TypeInfo/* parent */
	, "TrueExpression"/* name */
	, &Assertion_get_TrueExpression_m4720_MethodInfo/* get */
	, &Assertion_set_TrueExpression_m4721_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Assertion_get_FalseExpression_m4722_MethodInfo;
extern const MethodInfo Assertion_set_FalseExpression_m4723_MethodInfo;
static const PropertyInfo Assertion_t1134____FalseExpression_PropertyInfo = 
{
	&Assertion_t1134_il2cpp_TypeInfo/* parent */
	, "FalseExpression"/* name */
	, &Assertion_get_FalseExpression_m4722_MethodInfo/* get */
	, &Assertion_set_FalseExpression_m4723_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* Assertion_t1134_PropertyInfos[] =
{
	&Assertion_t1134____TrueExpression_PropertyInfo,
	&Assertion_t1134____FalseExpression_PropertyInfo,
	NULL
};
extern const MethodInfo Assertion_GetWidth_m4724_MethodInfo;
static const Il2CppMethodReference Assertion_t1134_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	NULL,
	&Assertion_GetWidth_m4724_MethodInfo,
	&Expression_GetAnchorInfo_m4684_MethodInfo,
	&CompositeExpression_IsComplex_m4688_MethodInfo,
};
static bool Assertion_t1134_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType Assertion_t1134_1_0_0;
struct Assertion_t1134;
const Il2CppTypeDefinitionMetadata Assertion_t1134_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &CompositeExpression_t1127_0_0_0/* parent */
	, Assertion_t1134_VTable/* vtableMethods */
	, Assertion_t1134_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo Assertion_t1134_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Assertion"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Assertion_t1134_MethodInfos/* methods */
	, Assertion_t1134_PropertyInfos/* properties */
	, NULL/* events */
	, &Assertion_t1134_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Assertion_t1134_0_0_0/* byval_arg */
	, &Assertion_t1134_1_0_0/* this_arg */
	, &Assertion_t1134_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Assertion_t1134)/* instance_size */
	, sizeof (Assertion_t1134)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048704/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 6/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.CaptureAssertion
#include "System_System_Text_RegularExpressions_Syntax_CaptureAssertio.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.CaptureAssertion
extern TypeInfo CaptureAssertion_t1137_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.CaptureAssertion
#include "System_System_Text_RegularExpressions_Syntax_CaptureAssertioMethodDeclarations.h"
extern const Il2CppType Literal_t1136_0_0_0;
extern const Il2CppType Literal_t1136_0_0_0;
static const ParameterInfo CaptureAssertion_t1137_CaptureAssertion__ctor_m4725_ParameterInfos[] = 
{
	{"l", 0, 134218542, 0, &Literal_t1136_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::.ctor(System.Text.RegularExpressions.Syntax.Literal)
extern const MethodInfo CaptureAssertion__ctor_m4725_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CaptureAssertion__ctor_m4725/* method */
	, &CaptureAssertion_t1137_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, CaptureAssertion_t1137_CaptureAssertion__ctor_m4725_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 833/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType CapturingGroup_t1130_0_0_0;
static const ParameterInfo CaptureAssertion_t1137_CaptureAssertion_set_CapturingGroup_m4726_ParameterInfos[] = 
{
	{"value", 0, 134218543, 0, &CapturingGroup_t1130_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
extern const MethodInfo CaptureAssertion_set_CapturingGroup_m4726_MethodInfo = 
{
	"set_CapturingGroup"/* name */
	, (methodPointerType)&CaptureAssertion_set_CapturingGroup_m4726/* method */
	, &CaptureAssertion_t1137_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, CaptureAssertion_t1137_CaptureAssertion_set_CapturingGroup_m4726_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 834/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICompiler_t1169_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo CaptureAssertion_t1137_CaptureAssertion_Compile_m4727_ParameterInfos[] = 
{
	{"cmp", 0, 134218544, 0, &ICompiler_t1169_0_0_0},
	{"reverse", 1, 134218545, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern const MethodInfo CaptureAssertion_Compile_m4727_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&CaptureAssertion_Compile_m4727/* method */
	, &CaptureAssertion_t1137_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_SByte_t113/* invoker_method */
	, CaptureAssertion_t1137_CaptureAssertion_Compile_m4727_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 835/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.CaptureAssertion::IsComplex()
extern const MethodInfo CaptureAssertion_IsComplex_m4728_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&CaptureAssertion_IsComplex_m4728/* method */
	, &CaptureAssertion_t1137_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 836/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::get_Alternate()
extern const MethodInfo CaptureAssertion_get_Alternate_m4729_MethodInfo = 
{
	"get_Alternate"/* name */
	, (methodPointerType)&CaptureAssertion_get_Alternate_m4729/* method */
	, &CaptureAssertion_t1137_il2cpp_TypeInfo/* declaring_type */
	, &ExpressionAssertion_t1135_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2177/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 837/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* CaptureAssertion_t1137_MethodInfos[] =
{
	&CaptureAssertion__ctor_m4725_MethodInfo,
	&CaptureAssertion_set_CapturingGroup_m4726_MethodInfo,
	&CaptureAssertion_Compile_m4727_MethodInfo,
	&CaptureAssertion_IsComplex_m4728_MethodInfo,
	&CaptureAssertion_get_Alternate_m4729_MethodInfo,
	NULL
};
extern const MethodInfo CaptureAssertion_set_CapturingGroup_m4726_MethodInfo;
static const PropertyInfo CaptureAssertion_t1137____CapturingGroup_PropertyInfo = 
{
	&CaptureAssertion_t1137_il2cpp_TypeInfo/* parent */
	, "CapturingGroup"/* name */
	, NULL/* get */
	, &CaptureAssertion_set_CapturingGroup_m4726_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo CaptureAssertion_get_Alternate_m4729_MethodInfo;
static const PropertyInfo CaptureAssertion_t1137____Alternate_PropertyInfo = 
{
	&CaptureAssertion_t1137_il2cpp_TypeInfo/* parent */
	, "Alternate"/* name */
	, &CaptureAssertion_get_Alternate_m4729_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* CaptureAssertion_t1137_PropertyInfos[] =
{
	&CaptureAssertion_t1137____CapturingGroup_PropertyInfo,
	&CaptureAssertion_t1137____Alternate_PropertyInfo,
	NULL
};
extern const MethodInfo CaptureAssertion_Compile_m4727_MethodInfo;
extern const MethodInfo CaptureAssertion_IsComplex_m4728_MethodInfo;
static const Il2CppMethodReference CaptureAssertion_t1137_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	&CaptureAssertion_Compile_m4727_MethodInfo,
	&Assertion_GetWidth_m4724_MethodInfo,
	&Expression_GetAnchorInfo_m4684_MethodInfo,
	&CaptureAssertion_IsComplex_m4728_MethodInfo,
};
static bool CaptureAssertion_t1137_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType CaptureAssertion_t1137_0_0_0;
extern const Il2CppType CaptureAssertion_t1137_1_0_0;
struct CaptureAssertion_t1137;
const Il2CppTypeDefinitionMetadata CaptureAssertion_t1137_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Assertion_t1134_0_0_0/* parent */
	, CaptureAssertion_t1137_VTable/* vtableMethods */
	, CaptureAssertion_t1137_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 718/* fieldStart */

};
TypeInfo CaptureAssertion_t1137_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "CaptureAssertion"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, CaptureAssertion_t1137_MethodInfos/* methods */
	, CaptureAssertion_t1137_PropertyInfos/* properties */
	, NULL/* events */
	, &CaptureAssertion_t1137_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &CaptureAssertion_t1137_0_0_0/* byval_arg */
	, &CaptureAssertion_t1137_1_0_0/* this_arg */
	, &CaptureAssertion_t1137_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CaptureAssertion_t1137)/* instance_size */
	, sizeof (CaptureAssertion_t1137)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 2/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
#include "System_System_Text_RegularExpressions_Syntax_ExpressionAsser.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.ExpressionAssertion
extern TypeInfo ExpressionAssertion_t1135_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
#include "System_System_Text_RegularExpressions_Syntax_ExpressionAsserMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::.ctor()
extern const MethodInfo ExpressionAssertion__ctor_m4730_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ExpressionAssertion__ctor_m4730/* method */
	, &ExpressionAssertion_t1135_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 838/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo ExpressionAssertion_t1135_ExpressionAssertion_set_Reverse_m4731_ParameterInfos[] = 
{
	{"value", 0, 134218546, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_Reverse(System.Boolean)
extern const MethodInfo ExpressionAssertion_set_Reverse_m4731_MethodInfo = 
{
	"set_Reverse"/* name */
	, (methodPointerType)&ExpressionAssertion_set_Reverse_m4731/* method */
	, &ExpressionAssertion_t1135_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_SByte_t113/* invoker_method */
	, ExpressionAssertion_t1135_ExpressionAssertion_set_Reverse_m4731_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 839/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo ExpressionAssertion_t1135_ExpressionAssertion_set_Negate_m4732_ParameterInfos[] = 
{
	{"value", 0, 134218547, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_Negate(System.Boolean)
extern const MethodInfo ExpressionAssertion_set_Negate_m4732_MethodInfo = 
{
	"set_Negate"/* name */
	, (methodPointerType)&ExpressionAssertion_set_Negate_m4732/* method */
	, &ExpressionAssertion_t1135_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_SByte_t113/* invoker_method */
	, ExpressionAssertion_t1135_ExpressionAssertion_set_Negate_m4732_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 840/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.ExpressionAssertion::get_TestExpression()
extern const MethodInfo ExpressionAssertion_get_TestExpression_m4733_MethodInfo = 
{
	"get_TestExpression"/* name */
	, (methodPointerType)&ExpressionAssertion_get_TestExpression_m4733/* method */
	, &ExpressionAssertion_t1135_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1126_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 841/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Expression_t1126_0_0_0;
static const ParameterInfo ExpressionAssertion_t1135_ExpressionAssertion_set_TestExpression_m4734_ParameterInfos[] = 
{
	{"value", 0, 134218548, 0, &Expression_t1126_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_TestExpression(System.Text.RegularExpressions.Syntax.Expression)
extern const MethodInfo ExpressionAssertion_set_TestExpression_m4734_MethodInfo = 
{
	"set_TestExpression"/* name */
	, (methodPointerType)&ExpressionAssertion_set_TestExpression_m4734/* method */
	, &ExpressionAssertion_t1135_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, ExpressionAssertion_t1135_ExpressionAssertion_set_TestExpression_m4734_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 842/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICompiler_t1169_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo ExpressionAssertion_t1135_ExpressionAssertion_Compile_m4735_ParameterInfos[] = 
{
	{"cmp", 0, 134218549, 0, &ICompiler_t1169_0_0_0},
	{"reverse", 1, 134218550, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern const MethodInfo ExpressionAssertion_Compile_m4735_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&ExpressionAssertion_Compile_m4735/* method */
	, &ExpressionAssertion_t1135_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_SByte_t113/* invoker_method */
	, ExpressionAssertion_t1135_ExpressionAssertion_Compile_m4735_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 843/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.ExpressionAssertion::IsComplex()
extern const MethodInfo ExpressionAssertion_IsComplex_m4736_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&ExpressionAssertion_IsComplex_m4736/* method */
	, &ExpressionAssertion_t1135_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 844/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ExpressionAssertion_t1135_MethodInfos[] =
{
	&ExpressionAssertion__ctor_m4730_MethodInfo,
	&ExpressionAssertion_set_Reverse_m4731_MethodInfo,
	&ExpressionAssertion_set_Negate_m4732_MethodInfo,
	&ExpressionAssertion_get_TestExpression_m4733_MethodInfo,
	&ExpressionAssertion_set_TestExpression_m4734_MethodInfo,
	&ExpressionAssertion_Compile_m4735_MethodInfo,
	&ExpressionAssertion_IsComplex_m4736_MethodInfo,
	NULL
};
extern const MethodInfo ExpressionAssertion_set_Reverse_m4731_MethodInfo;
static const PropertyInfo ExpressionAssertion_t1135____Reverse_PropertyInfo = 
{
	&ExpressionAssertion_t1135_il2cpp_TypeInfo/* parent */
	, "Reverse"/* name */
	, NULL/* get */
	, &ExpressionAssertion_set_Reverse_m4731_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ExpressionAssertion_set_Negate_m4732_MethodInfo;
static const PropertyInfo ExpressionAssertion_t1135____Negate_PropertyInfo = 
{
	&ExpressionAssertion_t1135_il2cpp_TypeInfo/* parent */
	, "Negate"/* name */
	, NULL/* get */
	, &ExpressionAssertion_set_Negate_m4732_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ExpressionAssertion_get_TestExpression_m4733_MethodInfo;
extern const MethodInfo ExpressionAssertion_set_TestExpression_m4734_MethodInfo;
static const PropertyInfo ExpressionAssertion_t1135____TestExpression_PropertyInfo = 
{
	&ExpressionAssertion_t1135_il2cpp_TypeInfo/* parent */
	, "TestExpression"/* name */
	, &ExpressionAssertion_get_TestExpression_m4733_MethodInfo/* get */
	, &ExpressionAssertion_set_TestExpression_m4734_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* ExpressionAssertion_t1135_PropertyInfos[] =
{
	&ExpressionAssertion_t1135____Reverse_PropertyInfo,
	&ExpressionAssertion_t1135____Negate_PropertyInfo,
	&ExpressionAssertion_t1135____TestExpression_PropertyInfo,
	NULL
};
extern const MethodInfo ExpressionAssertion_Compile_m4735_MethodInfo;
extern const MethodInfo ExpressionAssertion_IsComplex_m4736_MethodInfo;
static const Il2CppMethodReference ExpressionAssertion_t1135_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	&ExpressionAssertion_Compile_m4735_MethodInfo,
	&Assertion_GetWidth_m4724_MethodInfo,
	&Expression_GetAnchorInfo_m4684_MethodInfo,
	&ExpressionAssertion_IsComplex_m4736_MethodInfo,
};
static bool ExpressionAssertion_t1135_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType ExpressionAssertion_t1135_1_0_0;
struct ExpressionAssertion_t1135;
const Il2CppTypeDefinitionMetadata ExpressionAssertion_t1135_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Assertion_t1134_0_0_0/* parent */
	, ExpressionAssertion_t1135_VTable/* vtableMethods */
	, ExpressionAssertion_t1135_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 721/* fieldStart */

};
TypeInfo ExpressionAssertion_t1135_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "ExpressionAssertion"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, ExpressionAssertion_t1135_MethodInfos/* methods */
	, ExpressionAssertion_t1135_PropertyInfos/* properties */
	, NULL/* events */
	, &ExpressionAssertion_t1135_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &ExpressionAssertion_t1135_0_0_0/* byval_arg */
	, &ExpressionAssertion_t1135_1_0_0/* this_arg */
	, &ExpressionAssertion_t1135_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ExpressionAssertion_t1135)/* instance_size */
	, sizeof (ExpressionAssertion_t1135)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 7/* method_count */
	, 3/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Alternation
#include "System_System_Text_RegularExpressions_Syntax_Alternation.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Alternation
extern TypeInfo Alternation_t1138_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Alternation
#include "System_System_Text_RegularExpressions_Syntax_AlternationMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Alternation::.ctor()
extern const MethodInfo Alternation__ctor_m4737_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Alternation__ctor_m4737/* method */
	, &Alternation_t1138_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 845/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.Alternation::get_Alternatives()
extern const MethodInfo Alternation_get_Alternatives_m4738_MethodInfo = 
{
	"get_Alternatives"/* name */
	, (methodPointerType)&Alternation_get_Alternatives_m4738/* method */
	, &Alternation_t1138_il2cpp_TypeInfo/* declaring_type */
	, &ExpressionCollection_t1125_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 846/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Expression_t1126_0_0_0;
static const ParameterInfo Alternation_t1138_Alternation_AddAlternative_m4739_ParameterInfos[] = 
{
	{"e", 0, 134218551, 0, &Expression_t1126_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Alternation::AddAlternative(System.Text.RegularExpressions.Syntax.Expression)
extern const MethodInfo Alternation_AddAlternative_m4739_MethodInfo = 
{
	"AddAlternative"/* name */
	, (methodPointerType)&Alternation_AddAlternative_m4739/* method */
	, &Alternation_t1138_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, Alternation_t1138_Alternation_AddAlternative_m4739_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 847/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICompiler_t1169_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo Alternation_t1138_Alternation_Compile_m4740_ParameterInfos[] = 
{
	{"cmp", 0, 134218552, 0, &ICompiler_t1169_0_0_0},
	{"reverse", 1, 134218553, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Alternation::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern const MethodInfo Alternation_Compile_m4740_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&Alternation_Compile_m4740/* method */
	, &Alternation_t1138_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_SByte_t113/* invoker_method */
	, Alternation_t1138_Alternation_Compile_m4740_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 848/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_1_0_2;
extern const Il2CppType Int32_t75_1_0_2;
static const ParameterInfo Alternation_t1138_Alternation_GetWidth_m4741_ParameterInfos[] = 
{
	{"min", 0, 134218554, 0, &Int32_t75_1_0_2},
	{"max", 1, 134218555, 0, &Int32_t75_1_0_2},
};
extern void* RuntimeInvoker_Void_t110_Int32U26_t456_Int32U26_t456 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Alternation::GetWidth(System.Int32&,System.Int32&)
extern const MethodInfo Alternation_GetWidth_m4741_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&Alternation_GetWidth_m4741/* method */
	, &Alternation_t1138_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32U26_t456_Int32U26_t456/* invoker_method */
	, Alternation_t1138_Alternation_GetWidth_m4741_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 849/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Alternation_t1138_MethodInfos[] =
{
	&Alternation__ctor_m4737_MethodInfo,
	&Alternation_get_Alternatives_m4738_MethodInfo,
	&Alternation_AddAlternative_m4739_MethodInfo,
	&Alternation_Compile_m4740_MethodInfo,
	&Alternation_GetWidth_m4741_MethodInfo,
	NULL
};
extern const MethodInfo Alternation_get_Alternatives_m4738_MethodInfo;
static const PropertyInfo Alternation_t1138____Alternatives_PropertyInfo = 
{
	&Alternation_t1138_il2cpp_TypeInfo/* parent */
	, "Alternatives"/* name */
	, &Alternation_get_Alternatives_m4738_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* Alternation_t1138_PropertyInfos[] =
{
	&Alternation_t1138____Alternatives_PropertyInfo,
	NULL
};
extern const MethodInfo Alternation_Compile_m4740_MethodInfo;
extern const MethodInfo Alternation_GetWidth_m4741_MethodInfo;
static const Il2CppMethodReference Alternation_t1138_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	&Alternation_Compile_m4740_MethodInfo,
	&Alternation_GetWidth_m4741_MethodInfo,
	&Expression_GetAnchorInfo_m4684_MethodInfo,
	&CompositeExpression_IsComplex_m4688_MethodInfo,
};
static bool Alternation_t1138_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType Alternation_t1138_0_0_0;
extern const Il2CppType Alternation_t1138_1_0_0;
struct Alternation_t1138;
const Il2CppTypeDefinitionMetadata Alternation_t1138_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &CompositeExpression_t1127_0_0_0/* parent */
	, Alternation_t1138_VTable/* vtableMethods */
	, Alternation_t1138_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo Alternation_t1138_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Alternation"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Alternation_t1138_MethodInfos/* methods */
	, Alternation_t1138_PropertyInfos/* properties */
	, NULL/* events */
	, &Alternation_t1138_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Alternation_t1138_0_0_0/* byval_arg */
	, &Alternation_t1138_1_0_0/* this_arg */
	, &Alternation_t1138_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Alternation_t1138)/* instance_size */
	, sizeof (Alternation_t1138)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Literal
#include "System_System_Text_RegularExpressions_Syntax_Literal.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Literal
extern TypeInfo Literal_t1136_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Literal
#include "System_System_Text_RegularExpressions_Syntax_LiteralMethodDeclarations.h"
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo Literal_t1136_Literal__ctor_m4742_ParameterInfos[] = 
{
	{"str", 0, 134218556, 0, &String_t_0_0_0},
	{"ignore", 1, 134218557, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Literal::.ctor(System.String,System.Boolean)
extern const MethodInfo Literal__ctor_m4742_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Literal__ctor_m4742/* method */
	, &Literal_t1136_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_SByte_t113/* invoker_method */
	, Literal_t1136_Literal__ctor_m4742_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 850/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType ICompiler_t1169_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo Literal_t1136_Literal_CompileLiteral_m4743_ParameterInfos[] = 
{
	{"str", 0, 134218558, 0, &String_t_0_0_0},
	{"cmp", 1, 134218559, 0, &ICompiler_t1169_0_0_0},
	{"ignore", 2, 134218560, 0, &Boolean_t111_0_0_0},
	{"reverse", 3, 134218561, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Object_t_SByte_t113_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Literal::CompileLiteral(System.String,System.Text.RegularExpressions.ICompiler,System.Boolean,System.Boolean)
extern const MethodInfo Literal_CompileLiteral_m4743_MethodInfo = 
{
	"CompileLiteral"/* name */
	, (methodPointerType)&Literal_CompileLiteral_m4743/* method */
	, &Literal_t1136_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Object_t_SByte_t113_SByte_t113/* invoker_method */
	, Literal_t1136_Literal_CompileLiteral_m4743_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 851/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICompiler_t1169_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo Literal_t1136_Literal_Compile_m4744_ParameterInfos[] = 
{
	{"cmp", 0, 134218562, 0, &ICompiler_t1169_0_0_0},
	{"reverse", 1, 134218563, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Literal::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern const MethodInfo Literal_Compile_m4744_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&Literal_Compile_m4744/* method */
	, &Literal_t1136_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_SByte_t113/* invoker_method */
	, Literal_t1136_Literal_Compile_m4744_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 852/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_1_0_2;
extern const Il2CppType Int32_t75_1_0_2;
static const ParameterInfo Literal_t1136_Literal_GetWidth_m4745_ParameterInfos[] = 
{
	{"min", 0, 134218564, 0, &Int32_t75_1_0_2},
	{"max", 1, 134218565, 0, &Int32_t75_1_0_2},
};
extern void* RuntimeInvoker_Void_t110_Int32U26_t456_Int32U26_t456 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Literal::GetWidth(System.Int32&,System.Int32&)
extern const MethodInfo Literal_GetWidth_m4745_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&Literal_GetWidth_m4745/* method */
	, &Literal_t1136_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32U26_t456_Int32U26_t456/* invoker_method */
	, Literal_t1136_Literal_GetWidth_m4745_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 853/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo Literal_t1136_Literal_GetAnchorInfo_m4746_ParameterInfos[] = 
{
	{"reverse", 0, 134218566, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Literal::GetAnchorInfo(System.Boolean)
extern const MethodInfo Literal_GetAnchorInfo_m4746_MethodInfo = 
{
	"GetAnchorInfo"/* name */
	, (methodPointerType)&Literal_GetAnchorInfo_m4746/* method */
	, &Literal_t1136_il2cpp_TypeInfo/* declaring_type */
	, &AnchorInfo_t1144_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_SByte_t113/* invoker_method */
	, Literal_t1136_Literal_GetAnchorInfo_m4746_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 854/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Literal::IsComplex()
extern const MethodInfo Literal_IsComplex_m4747_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&Literal_IsComplex_m4747/* method */
	, &Literal_t1136_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 855/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Literal_t1136_MethodInfos[] =
{
	&Literal__ctor_m4742_MethodInfo,
	&Literal_CompileLiteral_m4743_MethodInfo,
	&Literal_Compile_m4744_MethodInfo,
	&Literal_GetWidth_m4745_MethodInfo,
	&Literal_GetAnchorInfo_m4746_MethodInfo,
	&Literal_IsComplex_m4747_MethodInfo,
	NULL
};
extern const MethodInfo Literal_Compile_m4744_MethodInfo;
extern const MethodInfo Literal_GetWidth_m4745_MethodInfo;
extern const MethodInfo Literal_GetAnchorInfo_m4746_MethodInfo;
extern const MethodInfo Literal_IsComplex_m4747_MethodInfo;
static const Il2CppMethodReference Literal_t1136_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	&Literal_Compile_m4744_MethodInfo,
	&Literal_GetWidth_m4745_MethodInfo,
	&Literal_GetAnchorInfo_m4746_MethodInfo,
	&Literal_IsComplex_m4747_MethodInfo,
};
static bool Literal_t1136_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType Literal_t1136_1_0_0;
struct Literal_t1136;
const Il2CppTypeDefinitionMetadata Literal_t1136_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Expression_t1126_0_0_0/* parent */
	, Literal_t1136_VTable/* vtableMethods */
	, Literal_t1136_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 723/* fieldStart */

};
TypeInfo Literal_t1136_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Literal"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Literal_t1136_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Literal_t1136_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Literal_t1136_0_0_0/* byval_arg */
	, &Literal_t1136_1_0_0/* this_arg */
	, &Literal_t1136_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Literal_t1136)/* instance_size */
	, sizeof (Literal_t1136)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 6/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.PositionAssertion
#include "System_System_Text_RegularExpressions_Syntax_PositionAsserti.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.PositionAssertion
extern TypeInfo PositionAssertion_t1139_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.PositionAssertion
#include "System_System_Text_RegularExpressions_Syntax_PositionAssertiMethodDeclarations.h"
extern const Il2CppType Position_t1100_0_0_0;
static const ParameterInfo PositionAssertion_t1139_PositionAssertion__ctor_m4748_ParameterInfos[] = 
{
	{"pos", 0, 134218567, 0, &Position_t1100_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_UInt16_t369 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::.ctor(System.Text.RegularExpressions.Position)
extern const MethodInfo PositionAssertion__ctor_m4748_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&PositionAssertion__ctor_m4748/* method */
	, &PositionAssertion_t1139_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_UInt16_t369/* invoker_method */
	, PositionAssertion_t1139_PositionAssertion__ctor_m4748_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 856/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICompiler_t1169_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo PositionAssertion_t1139_PositionAssertion_Compile_m4749_ParameterInfos[] = 
{
	{"cmp", 0, 134218568, 0, &ICompiler_t1169_0_0_0},
	{"reverse", 1, 134218569, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern const MethodInfo PositionAssertion_Compile_m4749_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&PositionAssertion_Compile_m4749/* method */
	, &PositionAssertion_t1139_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_SByte_t113/* invoker_method */
	, PositionAssertion_t1139_PositionAssertion_Compile_m4749_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 857/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_1_0_2;
extern const Il2CppType Int32_t75_1_0_2;
static const ParameterInfo PositionAssertion_t1139_PositionAssertion_GetWidth_m4750_ParameterInfos[] = 
{
	{"min", 0, 134218570, 0, &Int32_t75_1_0_2},
	{"max", 1, 134218571, 0, &Int32_t75_1_0_2},
};
extern void* RuntimeInvoker_Void_t110_Int32U26_t456_Int32U26_t456 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::GetWidth(System.Int32&,System.Int32&)
extern const MethodInfo PositionAssertion_GetWidth_m4750_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&PositionAssertion_GetWidth_m4750/* method */
	, &PositionAssertion_t1139_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32U26_t456_Int32U26_t456/* invoker_method */
	, PositionAssertion_t1139_PositionAssertion_GetWidth_m4750_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 858/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.PositionAssertion::IsComplex()
extern const MethodInfo PositionAssertion_IsComplex_m4751_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&PositionAssertion_IsComplex_m4751/* method */
	, &PositionAssertion_t1139_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 859/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo PositionAssertion_t1139_PositionAssertion_GetAnchorInfo_m4752_ParameterInfos[] = 
{
	{"revers", 0, 134218572, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.PositionAssertion::GetAnchorInfo(System.Boolean)
extern const MethodInfo PositionAssertion_GetAnchorInfo_m4752_MethodInfo = 
{
	"GetAnchorInfo"/* name */
	, (methodPointerType)&PositionAssertion_GetAnchorInfo_m4752/* method */
	, &PositionAssertion_t1139_il2cpp_TypeInfo/* declaring_type */
	, &AnchorInfo_t1144_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_SByte_t113/* invoker_method */
	, PositionAssertion_t1139_PositionAssertion_GetAnchorInfo_m4752_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 860/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* PositionAssertion_t1139_MethodInfos[] =
{
	&PositionAssertion__ctor_m4748_MethodInfo,
	&PositionAssertion_Compile_m4749_MethodInfo,
	&PositionAssertion_GetWidth_m4750_MethodInfo,
	&PositionAssertion_IsComplex_m4751_MethodInfo,
	&PositionAssertion_GetAnchorInfo_m4752_MethodInfo,
	NULL
};
extern const MethodInfo PositionAssertion_Compile_m4749_MethodInfo;
extern const MethodInfo PositionAssertion_GetWidth_m4750_MethodInfo;
extern const MethodInfo PositionAssertion_GetAnchorInfo_m4752_MethodInfo;
extern const MethodInfo PositionAssertion_IsComplex_m4751_MethodInfo;
static const Il2CppMethodReference PositionAssertion_t1139_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	&PositionAssertion_Compile_m4749_MethodInfo,
	&PositionAssertion_GetWidth_m4750_MethodInfo,
	&PositionAssertion_GetAnchorInfo_m4752_MethodInfo,
	&PositionAssertion_IsComplex_m4751_MethodInfo,
};
static bool PositionAssertion_t1139_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType PositionAssertion_t1139_0_0_0;
extern const Il2CppType PositionAssertion_t1139_1_0_0;
struct PositionAssertion_t1139;
const Il2CppTypeDefinitionMetadata PositionAssertion_t1139_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Expression_t1126_0_0_0/* parent */
	, PositionAssertion_t1139_VTable/* vtableMethods */
	, PositionAssertion_t1139_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 725/* fieldStart */

};
TypeInfo PositionAssertion_t1139_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "PositionAssertion"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, PositionAssertion_t1139_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &PositionAssertion_t1139_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &PositionAssertion_t1139_0_0_0/* byval_arg */
	, &PositionAssertion_t1139_1_0_0/* this_arg */
	, &PositionAssertion_t1139_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PositionAssertion_t1139)/* instance_size */
	, sizeof (PositionAssertion_t1139)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Reference
#include "System_System_Text_RegularExpressions_Syntax_Reference.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Reference
extern TypeInfo Reference_t1140_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Reference
#include "System_System_Text_RegularExpressions_Syntax_ReferenceMethodDeclarations.h"
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo Reference_t1140_Reference__ctor_m4753_ParameterInfos[] = 
{
	{"ignore", 0, 134218573, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Reference::.ctor(System.Boolean)
extern const MethodInfo Reference__ctor_m4753_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Reference__ctor_m4753/* method */
	, &Reference_t1140_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_SByte_t113/* invoker_method */
	, Reference_t1140_Reference__ctor_m4753_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 861/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.Reference::get_CapturingGroup()
extern const MethodInfo Reference_get_CapturingGroup_m4754_MethodInfo = 
{
	"get_CapturingGroup"/* name */
	, (methodPointerType)&Reference_get_CapturingGroup_m4754/* method */
	, &Reference_t1140_il2cpp_TypeInfo/* declaring_type */
	, &CapturingGroup_t1130_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 862/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType CapturingGroup_t1130_0_0_0;
static const ParameterInfo Reference_t1140_Reference_set_CapturingGroup_m4755_ParameterInfos[] = 
{
	{"value", 0, 134218574, 0, &CapturingGroup_t1130_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Reference::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
extern const MethodInfo Reference_set_CapturingGroup_m4755_MethodInfo = 
{
	"set_CapturingGroup"/* name */
	, (methodPointerType)&Reference_set_CapturingGroup_m4755/* method */
	, &Reference_t1140_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, Reference_t1140_Reference_set_CapturingGroup_m4755_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 863/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Reference::get_IgnoreCase()
extern const MethodInfo Reference_get_IgnoreCase_m4756_MethodInfo = 
{
	"get_IgnoreCase"/* name */
	, (methodPointerType)&Reference_get_IgnoreCase_m4756/* method */
	, &Reference_t1140_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 864/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICompiler_t1169_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo Reference_t1140_Reference_Compile_m4757_ParameterInfos[] = 
{
	{"cmp", 0, 134218575, 0, &ICompiler_t1169_0_0_0},
	{"reverse", 1, 134218576, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Reference::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern const MethodInfo Reference_Compile_m4757_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&Reference_Compile_m4757/* method */
	, &Reference_t1140_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_SByte_t113/* invoker_method */
	, Reference_t1140_Reference_Compile_m4757_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 865/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_1_0_2;
extern const Il2CppType Int32_t75_1_0_2;
static const ParameterInfo Reference_t1140_Reference_GetWidth_m4758_ParameterInfos[] = 
{
	{"min", 0, 134218577, 0, &Int32_t75_1_0_2},
	{"max", 1, 134218578, 0, &Int32_t75_1_0_2},
};
extern void* RuntimeInvoker_Void_t110_Int32U26_t456_Int32U26_t456 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Reference::GetWidth(System.Int32&,System.Int32&)
extern const MethodInfo Reference_GetWidth_m4758_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&Reference_GetWidth_m4758/* method */
	, &Reference_t1140_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32U26_t456_Int32U26_t456/* invoker_method */
	, Reference_t1140_Reference_GetWidth_m4758_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 866/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Reference::IsComplex()
extern const MethodInfo Reference_IsComplex_m4759_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&Reference_IsComplex_m4759/* method */
	, &Reference_t1140_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 867/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Reference_t1140_MethodInfos[] =
{
	&Reference__ctor_m4753_MethodInfo,
	&Reference_get_CapturingGroup_m4754_MethodInfo,
	&Reference_set_CapturingGroup_m4755_MethodInfo,
	&Reference_get_IgnoreCase_m4756_MethodInfo,
	&Reference_Compile_m4757_MethodInfo,
	&Reference_GetWidth_m4758_MethodInfo,
	&Reference_IsComplex_m4759_MethodInfo,
	NULL
};
extern const MethodInfo Reference_get_CapturingGroup_m4754_MethodInfo;
extern const MethodInfo Reference_set_CapturingGroup_m4755_MethodInfo;
static const PropertyInfo Reference_t1140____CapturingGroup_PropertyInfo = 
{
	&Reference_t1140_il2cpp_TypeInfo/* parent */
	, "CapturingGroup"/* name */
	, &Reference_get_CapturingGroup_m4754_MethodInfo/* get */
	, &Reference_set_CapturingGroup_m4755_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Reference_get_IgnoreCase_m4756_MethodInfo;
static const PropertyInfo Reference_t1140____IgnoreCase_PropertyInfo = 
{
	&Reference_t1140_il2cpp_TypeInfo/* parent */
	, "IgnoreCase"/* name */
	, &Reference_get_IgnoreCase_m4756_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* Reference_t1140_PropertyInfos[] =
{
	&Reference_t1140____CapturingGroup_PropertyInfo,
	&Reference_t1140____IgnoreCase_PropertyInfo,
	NULL
};
extern const MethodInfo Reference_Compile_m4757_MethodInfo;
extern const MethodInfo Reference_GetWidth_m4758_MethodInfo;
extern const MethodInfo Reference_IsComplex_m4759_MethodInfo;
static const Il2CppMethodReference Reference_t1140_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	&Reference_Compile_m4757_MethodInfo,
	&Reference_GetWidth_m4758_MethodInfo,
	&Expression_GetAnchorInfo_m4684_MethodInfo,
	&Reference_IsComplex_m4759_MethodInfo,
};
static bool Reference_t1140_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType Reference_t1140_0_0_0;
extern const Il2CppType Reference_t1140_1_0_0;
struct Reference_t1140;
const Il2CppTypeDefinitionMetadata Reference_t1140_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Expression_t1126_0_0_0/* parent */
	, Reference_t1140_VTable/* vtableMethods */
	, Reference_t1140_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 726/* fieldStart */

};
TypeInfo Reference_t1140_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Reference"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Reference_t1140_MethodInfos/* methods */
	, Reference_t1140_PropertyInfos/* properties */
	, NULL/* events */
	, &Reference_t1140_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Reference_t1140_0_0_0/* byval_arg */
	, &Reference_t1140_1_0_0/* this_arg */
	, &Reference_t1140_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Reference_t1140)/* instance_size */
	, sizeof (Reference_t1140)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 7/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.BackslashNumber
#include "System_System_Text_RegularExpressions_Syntax_BackslashNumber.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.BackslashNumber
extern TypeInfo BackslashNumber_t1141_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.BackslashNumber
#include "System_System_Text_RegularExpressions_Syntax_BackslashNumberMethodDeclarations.h"
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo BackslashNumber_t1141_BackslashNumber__ctor_m4760_ParameterInfos[] = 
{
	{"ignore", 0, 134218579, 0, &Boolean_t111_0_0_0},
	{"ecma", 1, 134218580, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_SByte_t113_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.BackslashNumber::.ctor(System.Boolean,System.Boolean)
extern const MethodInfo BackslashNumber__ctor_m4760_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&BackslashNumber__ctor_m4760/* method */
	, &BackslashNumber_t1141_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_SByte_t113_SByte_t113/* invoker_method */
	, BackslashNumber_t1141_BackslashNumber__ctor_m4760_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 868/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Hashtable_t56_0_0_0;
static const ParameterInfo BackslashNumber_t1141_BackslashNumber_ResolveReference_m4761_ParameterInfos[] = 
{
	{"num_str", 0, 134218581, 0, &String_t_0_0_0},
	{"groups", 1, 134218582, 0, &Hashtable_t56_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.BackslashNumber::ResolveReference(System.String,System.Collections.Hashtable)
extern const MethodInfo BackslashNumber_ResolveReference_m4761_MethodInfo = 
{
	"ResolveReference"/* name */
	, (methodPointerType)&BackslashNumber_ResolveReference_m4761/* method */
	, &BackslashNumber_t1141_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Object_t_Object_t/* invoker_method */
	, BackslashNumber_t1141_BackslashNumber_ResolveReference_m4761_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 869/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICompiler_t1169_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo BackslashNumber_t1141_BackslashNumber_Compile_m4762_ParameterInfos[] = 
{
	{"cmp", 0, 134218583, 0, &ICompiler_t1169_0_0_0},
	{"reverse", 1, 134218584, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.BackslashNumber::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern const MethodInfo BackslashNumber_Compile_m4762_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&BackslashNumber_Compile_m4762/* method */
	, &BackslashNumber_t1141_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_SByte_t113/* invoker_method */
	, BackslashNumber_t1141_BackslashNumber_Compile_m4762_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 870/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* BackslashNumber_t1141_MethodInfos[] =
{
	&BackslashNumber__ctor_m4760_MethodInfo,
	&BackslashNumber_ResolveReference_m4761_MethodInfo,
	&BackslashNumber_Compile_m4762_MethodInfo,
	NULL
};
extern const MethodInfo BackslashNumber_Compile_m4762_MethodInfo;
static const Il2CppMethodReference BackslashNumber_t1141_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	&BackslashNumber_Compile_m4762_MethodInfo,
	&Reference_GetWidth_m4758_MethodInfo,
	&Expression_GetAnchorInfo_m4684_MethodInfo,
	&Reference_IsComplex_m4759_MethodInfo,
};
static bool BackslashNumber_t1141_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType BackslashNumber_t1141_0_0_0;
extern const Il2CppType BackslashNumber_t1141_1_0_0;
struct BackslashNumber_t1141;
const Il2CppTypeDefinitionMetadata BackslashNumber_t1141_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Reference_t1140_0_0_0/* parent */
	, BackslashNumber_t1141_VTable/* vtableMethods */
	, BackslashNumber_t1141_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 728/* fieldStart */

};
TypeInfo BackslashNumber_t1141_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "BackslashNumber"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, BackslashNumber_t1141_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &BackslashNumber_t1141_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &BackslashNumber_t1141_0_0_0/* byval_arg */
	, &BackslashNumber_t1141_1_0_0/* this_arg */
	, &BackslashNumber_t1141_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (BackslashNumber_t1141)/* instance_size */
	, sizeof (BackslashNumber_t1141)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.CharacterClass
#include "System_System_Text_RegularExpressions_Syntax_CharacterClass.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.CharacterClass
extern TypeInfo CharacterClass_t1143_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.CharacterClass
#include "System_System_Text_RegularExpressions_Syntax_CharacterClassMethodDeclarations.h"
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo CharacterClass_t1143_CharacterClass__ctor_m4763_ParameterInfos[] = 
{
	{"negate", 0, 134218585, 0, &Boolean_t111_0_0_0},
	{"ignore", 1, 134218586, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_SByte_t113_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.ctor(System.Boolean,System.Boolean)
extern const MethodInfo CharacterClass__ctor_m4763_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CharacterClass__ctor_m4763/* method */
	, &CharacterClass_t1143_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_SByte_t113_SByte_t113/* invoker_method */
	, CharacterClass_t1143_CharacterClass__ctor_m4763_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 871/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Category_t1104_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo CharacterClass_t1143_CharacterClass__ctor_m4764_ParameterInfos[] = 
{
	{"cat", 0, 134218587, 0, &Category_t1104_0_0_0},
	{"negate", 1, 134218588, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_UInt16_t369_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.ctor(System.Text.RegularExpressions.Category,System.Boolean)
extern const MethodInfo CharacterClass__ctor_m4764_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CharacterClass__ctor_m4764/* method */
	, &CharacterClass_t1143_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_UInt16_t369_SByte_t113/* invoker_method */
	, CharacterClass_t1143_CharacterClass__ctor_m4764_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 872/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.cctor()
extern const MethodInfo CharacterClass__cctor_m4765_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&CharacterClass__cctor_m4765/* method */
	, &CharacterClass_t1143_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 873/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Category_t1104_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo CharacterClass_t1143_CharacterClass_AddCategory_m4766_ParameterInfos[] = 
{
	{"cat", 0, 134218589, 0, &Category_t1104_0_0_0},
	{"negate", 1, 134218590, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_UInt16_t369_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddCategory(System.Text.RegularExpressions.Category,System.Boolean)
extern const MethodInfo CharacterClass_AddCategory_m4766_MethodInfo = 
{
	"AddCategory"/* name */
	, (methodPointerType)&CharacterClass_AddCategory_m4766/* method */
	, &CharacterClass_t1143_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_UInt16_t369_SByte_t113/* invoker_method */
	, CharacterClass_t1143_CharacterClass_AddCategory_m4766_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 874/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Char_t103_0_0_0;
static const ParameterInfo CharacterClass_t1143_CharacterClass_AddCharacter_m4767_ParameterInfos[] = 
{
	{"c", 0, 134218591, 0, &Char_t103_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int16_t455 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddCharacter(System.Char)
extern const MethodInfo CharacterClass_AddCharacter_m4767_MethodInfo = 
{
	"AddCharacter"/* name */
	, (methodPointerType)&CharacterClass_AddCharacter_m4767/* method */
	, &CharacterClass_t1143_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int16_t455/* invoker_method */
	, CharacterClass_t1143_CharacterClass_AddCharacter_m4767_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 875/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Char_t103_0_0_0;
extern const Il2CppType Char_t103_0_0_0;
static const ParameterInfo CharacterClass_t1143_CharacterClass_AddRange_m4768_ParameterInfos[] = 
{
	{"lo", 0, 134218592, 0, &Char_t103_0_0_0},
	{"hi", 1, 134218593, 0, &Char_t103_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int16_t455_Int16_t455 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddRange(System.Char,System.Char)
extern const MethodInfo CharacterClass_AddRange_m4768_MethodInfo = 
{
	"AddRange"/* name */
	, (methodPointerType)&CharacterClass_AddRange_m4768/* method */
	, &CharacterClass_t1143_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int16_t455_Int16_t455/* invoker_method */
	, CharacterClass_t1143_CharacterClass_AddRange_m4768_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 876/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICompiler_t1169_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo CharacterClass_t1143_CharacterClass_Compile_m4769_ParameterInfos[] = 
{
	{"cmp", 0, 134218594, 0, &ICompiler_t1169_0_0_0},
	{"reverse", 1, 134218595, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern const MethodInfo CharacterClass_Compile_m4769_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&CharacterClass_Compile_m4769/* method */
	, &CharacterClass_t1143_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_SByte_t113/* invoker_method */
	, CharacterClass_t1143_CharacterClass_Compile_m4769_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 877/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_1_0_2;
extern const Il2CppType Int32_t75_1_0_2;
static const ParameterInfo CharacterClass_t1143_CharacterClass_GetWidth_m4770_ParameterInfos[] = 
{
	{"min", 0, 134218596, 0, &Int32_t75_1_0_2},
	{"max", 1, 134218597, 0, &Int32_t75_1_0_2},
};
extern void* RuntimeInvoker_Void_t110_Int32U26_t456_Int32U26_t456 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::GetWidth(System.Int32&,System.Int32&)
extern const MethodInfo CharacterClass_GetWidth_m4770_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&CharacterClass_GetWidth_m4770/* method */
	, &CharacterClass_t1143_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32U26_t456_Int32U26_t456/* invoker_method */
	, CharacterClass_t1143_CharacterClass_GetWidth_m4770_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 878/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::IsComplex()
extern const MethodInfo CharacterClass_IsComplex_m4771_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&CharacterClass_IsComplex_m4771/* method */
	, &CharacterClass_t1143_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 879/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Interval_t1119_0_0_0;
static const ParameterInfo CharacterClass_t1143_CharacterClass_GetIntervalCost_m4772_ParameterInfos[] = 
{
	{"i", 0, 134218598, 0, &Interval_t1119_0_0_0},
};
extern void* RuntimeInvoker_Double_t759_Interval_t1119 (const MethodInfo* method, void* obj, void** args);
// System.Double System.Text.RegularExpressions.Syntax.CharacterClass::GetIntervalCost(System.Text.RegularExpressions.Interval)
extern const MethodInfo CharacterClass_GetIntervalCost_m4772_MethodInfo = 
{
	"GetIntervalCost"/* name */
	, (methodPointerType)&CharacterClass_GetIntervalCost_m4772/* method */
	, &CharacterClass_t1143_il2cpp_TypeInfo/* declaring_type */
	, &Double_t759_0_0_0/* return_type */
	, RuntimeInvoker_Double_t759_Interval_t1119/* invoker_method */
	, CharacterClass_t1143_CharacterClass_GetIntervalCost_m4772_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 880/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* CharacterClass_t1143_MethodInfos[] =
{
	&CharacterClass__ctor_m4763_MethodInfo,
	&CharacterClass__ctor_m4764_MethodInfo,
	&CharacterClass__cctor_m4765_MethodInfo,
	&CharacterClass_AddCategory_m4766_MethodInfo,
	&CharacterClass_AddCharacter_m4767_MethodInfo,
	&CharacterClass_AddRange_m4768_MethodInfo,
	&CharacterClass_Compile_m4769_MethodInfo,
	&CharacterClass_GetWidth_m4770_MethodInfo,
	&CharacterClass_IsComplex_m4771_MethodInfo,
	&CharacterClass_GetIntervalCost_m4772_MethodInfo,
	NULL
};
extern const MethodInfo CharacterClass_Compile_m4769_MethodInfo;
extern const MethodInfo CharacterClass_GetWidth_m4770_MethodInfo;
extern const MethodInfo CharacterClass_IsComplex_m4771_MethodInfo;
static const Il2CppMethodReference CharacterClass_t1143_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	&CharacterClass_Compile_m4769_MethodInfo,
	&CharacterClass_GetWidth_m4770_MethodInfo,
	&Expression_GetAnchorInfo_m4684_MethodInfo,
	&CharacterClass_IsComplex_m4771_MethodInfo,
};
static bool CharacterClass_t1143_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType CharacterClass_t1143_0_0_0;
extern const Il2CppType CharacterClass_t1143_1_0_0;
struct CharacterClass_t1143;
const Il2CppTypeDefinitionMetadata CharacterClass_t1143_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Expression_t1126_0_0_0/* parent */
	, CharacterClass_t1143_VTable/* vtableMethods */
	, CharacterClass_t1143_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 730/* fieldStart */

};
TypeInfo CharacterClass_t1143_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "CharacterClass"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, CharacterClass_t1143_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &CharacterClass_t1143_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &CharacterClass_t1143_0_0_0/* byval_arg */
	, &CharacterClass_t1143_1_0_0/* this_arg */
	, &CharacterClass_t1143_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CharacterClass_t1143)/* instance_size */
	, sizeof (CharacterClass_t1143)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(CharacterClass_t1143_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, 10/* method_count */
	, 0/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.AnchorInfo
#include "System_System_Text_RegularExpressions_Syntax_AnchorInfo.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.AnchorInfo
extern TypeInfo AnchorInfo_t1144_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.AnchorInfo
#include "System_System_Text_RegularExpressions_Syntax_AnchorInfoMethodDeclarations.h"
extern const Il2CppType Expression_t1126_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo AnchorInfo_t1144_AnchorInfo__ctor_m4773_ParameterInfos[] = 
{
	{"expr", 0, 134218599, 0, &Expression_t1126_0_0_0},
	{"width", 1, 134218600, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32)
extern const MethodInfo AnchorInfo__ctor_m4773_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AnchorInfo__ctor_m4773/* method */
	, &AnchorInfo_t1144_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Int32_t75/* invoker_method */
	, AnchorInfo_t1144_AnchorInfo__ctor_m4773_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 881/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Expression_t1126_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo AnchorInfo_t1144_AnchorInfo__ctor_m4774_ParameterInfos[] = 
{
	{"expr", 0, 134218601, 0, &Expression_t1126_0_0_0},
	{"offset", 1, 134218602, 0, &Int32_t75_0_0_0},
	{"width", 2, 134218603, 0, &Int32_t75_0_0_0},
	{"str", 3, 134218604, 0, &String_t_0_0_0},
	{"ignore", 4, 134218605, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Int32_t75_Int32_t75_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32,System.Int32,System.String,System.Boolean)
extern const MethodInfo AnchorInfo__ctor_m4774_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AnchorInfo__ctor_m4774/* method */
	, &AnchorInfo_t1144_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Int32_t75_Int32_t75_Object_t_SByte_t113/* invoker_method */
	, AnchorInfo_t1144_AnchorInfo__ctor_m4774_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 882/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Expression_t1126_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Position_t1100_0_0_0;
static const ParameterInfo AnchorInfo_t1144_AnchorInfo__ctor_m4775_ParameterInfos[] = 
{
	{"expr", 0, 134218606, 0, &Expression_t1126_0_0_0},
	{"offset", 1, 134218607, 0, &Int32_t75_0_0_0},
	{"width", 2, 134218608, 0, &Int32_t75_0_0_0},
	{"pos", 3, 134218609, 0, &Position_t1100_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Int32_t75_Int32_t75_UInt16_t369 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32,System.Int32,System.Text.RegularExpressions.Position)
extern const MethodInfo AnchorInfo__ctor_m4775_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AnchorInfo__ctor_m4775/* method */
	, &AnchorInfo_t1144_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Int32_t75_Int32_t75_UInt16_t369/* invoker_method */
	, AnchorInfo_t1144_AnchorInfo__ctor_m4775_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 883/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Offset()
extern const MethodInfo AnchorInfo_get_Offset_m4776_MethodInfo = 
{
	"get_Offset"/* name */
	, (methodPointerType)&AnchorInfo_get_Offset_m4776/* method */
	, &AnchorInfo_t1144_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 884/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Width()
extern const MethodInfo AnchorInfo_get_Width_m4777_MethodInfo = 
{
	"get_Width"/* name */
	, (methodPointerType)&AnchorInfo_get_Width_m4777/* method */
	, &AnchorInfo_t1144_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 885/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Length()
extern const MethodInfo AnchorInfo_get_Length_m4778_MethodInfo = 
{
	"get_Length"/* name */
	, (methodPointerType)&AnchorInfo_get_Length_m4778/* method */
	, &AnchorInfo_t1144_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 886/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsUnknownWidth()
extern const MethodInfo AnchorInfo_get_IsUnknownWidth_m4779_MethodInfo = 
{
	"get_IsUnknownWidth"/* name */
	, (methodPointerType)&AnchorInfo_get_IsUnknownWidth_m4779/* method */
	, &AnchorInfo_t1144_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 887/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsComplete()
extern const MethodInfo AnchorInfo_get_IsComplete_m4780_MethodInfo = 
{
	"get_IsComplete"/* name */
	, (methodPointerType)&AnchorInfo_get_IsComplete_m4780/* method */
	, &AnchorInfo_t1144_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 888/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.Syntax.AnchorInfo::get_Substring()
extern const MethodInfo AnchorInfo_get_Substring_m4781_MethodInfo = 
{
	"get_Substring"/* name */
	, (methodPointerType)&AnchorInfo_get_Substring_m4781/* method */
	, &AnchorInfo_t1144_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 889/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IgnoreCase()
extern const MethodInfo AnchorInfo_get_IgnoreCase_m4782_MethodInfo = 
{
	"get_IgnoreCase"/* name */
	, (methodPointerType)&AnchorInfo_get_IgnoreCase_m4782/* method */
	, &AnchorInfo_t1144_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 890/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Position_t1100 (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Position System.Text.RegularExpressions.Syntax.AnchorInfo::get_Position()
extern const MethodInfo AnchorInfo_get_Position_m4783_MethodInfo = 
{
	"get_Position"/* name */
	, (methodPointerType)&AnchorInfo_get_Position_m4783/* method */
	, &AnchorInfo_t1144_il2cpp_TypeInfo/* declaring_type */
	, &Position_t1100_0_0_0/* return_type */
	, RuntimeInvoker_Position_t1100/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 891/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsSubstring()
extern const MethodInfo AnchorInfo_get_IsSubstring_m4784_MethodInfo = 
{
	"get_IsSubstring"/* name */
	, (methodPointerType)&AnchorInfo_get_IsSubstring_m4784/* method */
	, &AnchorInfo_t1144_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 892/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsPosition()
extern const MethodInfo AnchorInfo_get_IsPosition_m4785_MethodInfo = 
{
	"get_IsPosition"/* name */
	, (methodPointerType)&AnchorInfo_get_IsPosition_m4785/* method */
	, &AnchorInfo_t1144_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 893/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo AnchorInfo_t1144_AnchorInfo_GetInterval_m4786_ParameterInfos[] = 
{
	{"start", 0, 134218610, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Interval_t1119_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Syntax.AnchorInfo::GetInterval(System.Int32)
extern const MethodInfo AnchorInfo_GetInterval_m4786_MethodInfo = 
{
	"GetInterval"/* name */
	, (methodPointerType)&AnchorInfo_GetInterval_m4786/* method */
	, &AnchorInfo_t1144_il2cpp_TypeInfo/* declaring_type */
	, &Interval_t1119_0_0_0/* return_type */
	, RuntimeInvoker_Interval_t1119_Int32_t75/* invoker_method */
	, AnchorInfo_t1144_AnchorInfo_GetInterval_m4786_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 894/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* AnchorInfo_t1144_MethodInfos[] =
{
	&AnchorInfo__ctor_m4773_MethodInfo,
	&AnchorInfo__ctor_m4774_MethodInfo,
	&AnchorInfo__ctor_m4775_MethodInfo,
	&AnchorInfo_get_Offset_m4776_MethodInfo,
	&AnchorInfo_get_Width_m4777_MethodInfo,
	&AnchorInfo_get_Length_m4778_MethodInfo,
	&AnchorInfo_get_IsUnknownWidth_m4779_MethodInfo,
	&AnchorInfo_get_IsComplete_m4780_MethodInfo,
	&AnchorInfo_get_Substring_m4781_MethodInfo,
	&AnchorInfo_get_IgnoreCase_m4782_MethodInfo,
	&AnchorInfo_get_Position_m4783_MethodInfo,
	&AnchorInfo_get_IsSubstring_m4784_MethodInfo,
	&AnchorInfo_get_IsPosition_m4785_MethodInfo,
	&AnchorInfo_GetInterval_m4786_MethodInfo,
	NULL
};
extern const MethodInfo AnchorInfo_get_Offset_m4776_MethodInfo;
static const PropertyInfo AnchorInfo_t1144____Offset_PropertyInfo = 
{
	&AnchorInfo_t1144_il2cpp_TypeInfo/* parent */
	, "Offset"/* name */
	, &AnchorInfo_get_Offset_m4776_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnchorInfo_get_Width_m4777_MethodInfo;
static const PropertyInfo AnchorInfo_t1144____Width_PropertyInfo = 
{
	&AnchorInfo_t1144_il2cpp_TypeInfo/* parent */
	, "Width"/* name */
	, &AnchorInfo_get_Width_m4777_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnchorInfo_get_Length_m4778_MethodInfo;
static const PropertyInfo AnchorInfo_t1144____Length_PropertyInfo = 
{
	&AnchorInfo_t1144_il2cpp_TypeInfo/* parent */
	, "Length"/* name */
	, &AnchorInfo_get_Length_m4778_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnchorInfo_get_IsUnknownWidth_m4779_MethodInfo;
static const PropertyInfo AnchorInfo_t1144____IsUnknownWidth_PropertyInfo = 
{
	&AnchorInfo_t1144_il2cpp_TypeInfo/* parent */
	, "IsUnknownWidth"/* name */
	, &AnchorInfo_get_IsUnknownWidth_m4779_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnchorInfo_get_IsComplete_m4780_MethodInfo;
static const PropertyInfo AnchorInfo_t1144____IsComplete_PropertyInfo = 
{
	&AnchorInfo_t1144_il2cpp_TypeInfo/* parent */
	, "IsComplete"/* name */
	, &AnchorInfo_get_IsComplete_m4780_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnchorInfo_get_Substring_m4781_MethodInfo;
static const PropertyInfo AnchorInfo_t1144____Substring_PropertyInfo = 
{
	&AnchorInfo_t1144_il2cpp_TypeInfo/* parent */
	, "Substring"/* name */
	, &AnchorInfo_get_Substring_m4781_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnchorInfo_get_IgnoreCase_m4782_MethodInfo;
static const PropertyInfo AnchorInfo_t1144____IgnoreCase_PropertyInfo = 
{
	&AnchorInfo_t1144_il2cpp_TypeInfo/* parent */
	, "IgnoreCase"/* name */
	, &AnchorInfo_get_IgnoreCase_m4782_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnchorInfo_get_Position_m4783_MethodInfo;
static const PropertyInfo AnchorInfo_t1144____Position_PropertyInfo = 
{
	&AnchorInfo_t1144_il2cpp_TypeInfo/* parent */
	, "Position"/* name */
	, &AnchorInfo_get_Position_m4783_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnchorInfo_get_IsSubstring_m4784_MethodInfo;
static const PropertyInfo AnchorInfo_t1144____IsSubstring_PropertyInfo = 
{
	&AnchorInfo_t1144_il2cpp_TypeInfo/* parent */
	, "IsSubstring"/* name */
	, &AnchorInfo_get_IsSubstring_m4784_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnchorInfo_get_IsPosition_m4785_MethodInfo;
static const PropertyInfo AnchorInfo_t1144____IsPosition_PropertyInfo = 
{
	&AnchorInfo_t1144_il2cpp_TypeInfo/* parent */
	, "IsPosition"/* name */
	, &AnchorInfo_get_IsPosition_m4785_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* AnchorInfo_t1144_PropertyInfos[] =
{
	&AnchorInfo_t1144____Offset_PropertyInfo,
	&AnchorInfo_t1144____Width_PropertyInfo,
	&AnchorInfo_t1144____Length_PropertyInfo,
	&AnchorInfo_t1144____IsUnknownWidth_PropertyInfo,
	&AnchorInfo_t1144____IsComplete_PropertyInfo,
	&AnchorInfo_t1144____Substring_PropertyInfo,
	&AnchorInfo_t1144____IgnoreCase_PropertyInfo,
	&AnchorInfo_t1144____Position_PropertyInfo,
	&AnchorInfo_t1144____IsSubstring_PropertyInfo,
	&AnchorInfo_t1144____IsPosition_PropertyInfo,
	NULL
};
static const Il2CppMethodReference AnchorInfo_t1144_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
};
static bool AnchorInfo_t1144_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType AnchorInfo_t1144_1_0_0;
struct AnchorInfo_t1144;
const Il2CppTypeDefinitionMetadata AnchorInfo_t1144_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, AnchorInfo_t1144_VTable/* vtableMethods */
	, AnchorInfo_t1144_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 736/* fieldStart */

};
TypeInfo AnchorInfo_t1144_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "AnchorInfo"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, AnchorInfo_t1144_MethodInfos/* methods */
	, AnchorInfo_t1144_PropertyInfos/* properties */
	, NULL/* events */
	, &AnchorInfo_t1144_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &AnchorInfo_t1144_0_0_0/* byval_arg */
	, &AnchorInfo_t1144_1_0_0/* this_arg */
	, &AnchorInfo_t1144_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (AnchorInfo_t1144)/* instance_size */
	, sizeof (AnchorInfo_t1144)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 14/* method_count */
	, 10/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.DefaultUriParser
#include "System_System_DefaultUriParser.h"
// Metadata Definition System.DefaultUriParser
extern TypeInfo DefaultUriParser_t1145_il2cpp_TypeInfo;
// System.DefaultUriParser
#include "System_System_DefaultUriParserMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.DefaultUriParser::.ctor()
extern const MethodInfo DefaultUriParser__ctor_m4787_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultUriParser__ctor_m4787/* method */
	, &DefaultUriParser_t1145_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 895/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo DefaultUriParser_t1145_DefaultUriParser__ctor_m4788_ParameterInfos[] = 
{
	{"scheme", 0, 134218611, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.DefaultUriParser::.ctor(System.String)
extern const MethodInfo DefaultUriParser__ctor_m4788_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultUriParser__ctor_m4788/* method */
	, &DefaultUriParser_t1145_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, DefaultUriParser_t1145_DefaultUriParser__ctor_m4788_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 896/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* DefaultUriParser_t1145_MethodInfos[] =
{
	&DefaultUriParser__ctor_m4787_MethodInfo,
	&DefaultUriParser__ctor_m4788_MethodInfo,
	NULL
};
extern const MethodInfo UriParser_InitializeAndValidate_m4844_MethodInfo;
extern const MethodInfo UriParser_OnRegister_m4845_MethodInfo;
static const Il2CppMethodReference DefaultUriParser_t1145_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	&UriParser_InitializeAndValidate_m4844_MethodInfo,
	&UriParser_OnRegister_m4845_MethodInfo,
};
static bool DefaultUriParser_t1145_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType DefaultUriParser_t1145_0_0_0;
extern const Il2CppType DefaultUriParser_t1145_1_0_0;
extern const Il2CppType UriParser_t1146_0_0_0;
struct DefaultUriParser_t1145;
const Il2CppTypeDefinitionMetadata DefaultUriParser_t1145_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &UriParser_t1146_0_0_0/* parent */
	, DefaultUriParser_t1145_VTable/* vtableMethods */
	, DefaultUriParser_t1145_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo DefaultUriParser_t1145_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "DefaultUriParser"/* name */
	, "System"/* namespaze */
	, DefaultUriParser_t1145_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &DefaultUriParser_t1145_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &DefaultUriParser_t1145_0_0_0/* byval_arg */
	, &DefaultUriParser_t1145_1_0_0/* this_arg */
	, &DefaultUriParser_t1145_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DefaultUriParser_t1145)/* instance_size */
	, sizeof (DefaultUriParser_t1145)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 2/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.GenericUriParser
#include "System_System_GenericUriParser.h"
// Metadata Definition System.GenericUriParser
extern TypeInfo GenericUriParser_t1147_il2cpp_TypeInfo;
// System.GenericUriParser
#include "System_System_GenericUriParserMethodDeclarations.h"
static const MethodInfo* GenericUriParser_t1147_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference GenericUriParser_t1147_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	&UriParser_InitializeAndValidate_m4844_MethodInfo,
	&UriParser_OnRegister_m4845_MethodInfo,
};
static bool GenericUriParser_t1147_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType GenericUriParser_t1147_0_0_0;
extern const Il2CppType GenericUriParser_t1147_1_0_0;
struct GenericUriParser_t1147;
const Il2CppTypeDefinitionMetadata GenericUriParser_t1147_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &UriParser_t1146_0_0_0/* parent */
	, GenericUriParser_t1147_VTable/* vtableMethods */
	, GenericUriParser_t1147_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo GenericUriParser_t1147_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "GenericUriParser"/* name */
	, "System"/* namespaze */
	, GenericUriParser_t1147_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &GenericUriParser_t1147_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &GenericUriParser_t1147_0_0_0/* byval_arg */
	, &GenericUriParser_t1147_1_0_0/* this_arg */
	, &GenericUriParser_t1147_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GenericUriParser_t1147)/* instance_size */
	, sizeof (GenericUriParser_t1147)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Uri/UriScheme
#include "System_System_Uri_UriScheme.h"
// Metadata Definition System.Uri/UriScheme
extern TypeInfo UriScheme_t1148_il2cpp_TypeInfo;
// System.Uri/UriScheme
#include "System_System_Uri_UriSchemeMethodDeclarations.h"
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo UriScheme_t1148_UriScheme__ctor_m4789_ParameterInfos[] = 
{
	{"s", 0, 134218664, 0, &String_t_0_0_0},
	{"d", 1, 134218665, 0, &String_t_0_0_0},
	{"p", 2, 134218666, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Object_t_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Uri/UriScheme::.ctor(System.String,System.String,System.Int32)
extern const MethodInfo UriScheme__ctor_m4789_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UriScheme__ctor_m4789/* method */
	, &UriScheme_t1148_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Object_t_Int32_t75/* invoker_method */
	, UriScheme_t1148_UriScheme__ctor_m4789_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 947/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* UriScheme_t1148_MethodInfos[] =
{
	&UriScheme__ctor_m4789_MethodInfo,
	NULL
};
static const Il2CppMethodReference UriScheme_t1148_VTable[] =
{
	&ValueType_Equals_m2220_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&ValueType_GetHashCode_m2221_MethodInfo,
	&ValueType_ToString_m2224_MethodInfo,
};
static bool UriScheme_t1148_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType UriScheme_t1148_0_0_0;
extern const Il2CppType UriScheme_t1148_1_0_0;
extern TypeInfo Uri_t623_il2cpp_TypeInfo;
extern const Il2CppType Uri_t623_0_0_0;
const Il2CppTypeDefinitionMetadata UriScheme_t1148_DefinitionMetadata = 
{
	&Uri_t623_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t446_0_0_0/* parent */
	, UriScheme_t1148_VTable/* vtableMethods */
	, UriScheme_t1148_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 742/* fieldStart */

};
TypeInfo UriScheme_t1148_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriScheme"/* name */
	, ""/* namespaze */
	, UriScheme_t1148_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &UriScheme_t1148_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &UriScheme_t1148_0_0_0/* byval_arg */
	, &UriScheme_t1148_1_0_0/* this_arg */
	, &UriScheme_t1148_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)UriScheme_t1148_marshal/* marshal_to_native_func */
	, (methodPointerType)UriScheme_t1148_marshal_back/* marshal_from_native_func */
	, (methodPointerType)UriScheme_t1148_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (UriScheme_t1148)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (UriScheme_t1148)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(UriScheme_t1148_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048843/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Uri
#include "System_System_Uri.h"
// Metadata Definition System.Uri
// System.Uri
#include "System_System_UriMethodDeclarations.h"
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Uri_t623_Uri__ctor_m3580_ParameterInfos[] = 
{
	{"uriString", 0, 134218612, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::.ctor(System.String)
extern const MethodInfo Uri__ctor_m3580_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Uri__ctor_m3580/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, Uri_t623_Uri__ctor_m3580_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 897/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo Uri_t623_Uri__ctor_m4790_ParameterInfos[] = 
{
	{"serializationInfo", 0, 134218613, 0, &SerializationInfo_t732_0_0_0},
	{"streamingContext", 1, 134218614, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo Uri__ctor_m4790_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Uri__ctor_m4790/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, Uri_t623_Uri__ctor_m4790_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 898/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo Uri_t623_Uri__ctor_m4791_ParameterInfos[] = 
{
	{"uriString", 0, 134218615, 0, &String_t_0_0_0},
	{"dontEscape", 1, 134218616, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::.ctor(System.String,System.Boolean)
extern const MethodInfo Uri__ctor_m4791_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Uri__ctor_m4791/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_SByte_t113/* invoker_method */
	, Uri_t623_Uri__ctor_m4791_ParameterInfos/* parameters */
	, 70/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 899/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Uri_t623_0_0_0;
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Uri_t623_Uri__ctor_m3582_ParameterInfos[] = 
{
	{"baseUri", 0, 134218617, 0, &Uri_t623_0_0_0},
	{"relativeUri", 1, 134218618, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::.ctor(System.Uri,System.String)
extern const MethodInfo Uri__ctor_m3582_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Uri__ctor_m3582/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Object_t/* invoker_method */
	, Uri_t623_Uri__ctor_m3582_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 900/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::.cctor()
extern const MethodInfo Uri__cctor_m4792_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&Uri__cctor_m4792/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 901/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo Uri_t623_Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m4793_ParameterInfos[] = 
{
	{"info", 0, 134218619, 0, &SerializationInfo_t732_0_0_0},
	{"context", 1, 134218620, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m4793_MethodInfo = 
{
	"System.Runtime.Serialization.ISerializable.GetObjectData"/* name */
	, (methodPointerType)&Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m4793/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, Uri_t623_Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m4793_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 902/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Uri_t623_0_0_0;
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Uri_t623_Uri_Merge_m4794_ParameterInfos[] = 
{
	{"baseUri", 0, 134218621, 0, &Uri_t623_0_0_0},
	{"relativeUri", 1, 134218622, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::Merge(System.Uri,System.String)
extern const MethodInfo Uri_Merge_m4794_MethodInfo = 
{
	"Merge"/* name */
	, (methodPointerType)&Uri_Merge_m4794/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Object_t/* invoker_method */
	, Uri_t623_Uri_Merge_m4794_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 903/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Uri::get_AbsoluteUri()
extern const MethodInfo Uri_get_AbsoluteUri_m4795_MethodInfo = 
{
	"get_AbsoluteUri"/* name */
	, (methodPointerType)&Uri_get_AbsoluteUri_m4795/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 904/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Uri::get_Authority()
extern const MethodInfo Uri_get_Authority_m4796_MethodInfo = 
{
	"get_Authority"/* name */
	, (methodPointerType)&Uri_get_Authority_m4796/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 905/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Uri::get_Host()
extern const MethodInfo Uri_get_Host_m4797_MethodInfo = 
{
	"get_Host"/* name */
	, (methodPointerType)&Uri_get_Host_m4797/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 906/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::get_IsFile()
extern const MethodInfo Uri_get_IsFile_m4798_MethodInfo = 
{
	"get_IsFile"/* name */
	, (methodPointerType)&Uri_get_IsFile_m4798/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 907/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::get_IsLoopback()
extern const MethodInfo Uri_get_IsLoopback_m4799_MethodInfo = 
{
	"get_IsLoopback"/* name */
	, (methodPointerType)&Uri_get_IsLoopback_m4799/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 908/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::get_IsUnc()
extern const MethodInfo Uri_get_IsUnc_m4800_MethodInfo = 
{
	"get_IsUnc"/* name */
	, (methodPointerType)&Uri_get_IsUnc_m4800/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 909/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Uri::get_Scheme()
extern const MethodInfo Uri_get_Scheme_m4801_MethodInfo = 
{
	"get_Scheme"/* name */
	, (methodPointerType)&Uri_get_Scheme_m4801/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 910/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::get_IsAbsoluteUri()
extern const MethodInfo Uri_get_IsAbsoluteUri_m4802_MethodInfo = 
{
	"get_IsAbsoluteUri"/* name */
	, (methodPointerType)&Uri_get_IsAbsoluteUri_m4802/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 911/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Uri_t623_Uri_CheckHostName_m4803_ParameterInfos[] = 
{
	{"name", 0, 134218623, 0, &String_t_0_0_0},
};
extern const Il2CppType UriHostNameType_t1151_0_0_0;
extern void* RuntimeInvoker_UriHostNameType_t1151_Object_t (const MethodInfo* method, void* obj, void** args);
// System.UriHostNameType System.Uri::CheckHostName(System.String)
extern const MethodInfo Uri_CheckHostName_m4803_MethodInfo = 
{
	"CheckHostName"/* name */
	, (methodPointerType)&Uri_CheckHostName_m4803/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &UriHostNameType_t1151_0_0_0/* return_type */
	, RuntimeInvoker_UriHostNameType_t1151_Object_t/* invoker_method */
	, Uri_t623_Uri_CheckHostName_m4803_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 912/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Uri_t623_Uri_IsIPv4Address_m4804_ParameterInfos[] = 
{
	{"name", 0, 134218624, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::IsIPv4Address(System.String)
extern const MethodInfo Uri_IsIPv4Address_m4804_MethodInfo = 
{
	"IsIPv4Address"/* name */
	, (methodPointerType)&Uri_IsIPv4Address_m4804/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Object_t/* invoker_method */
	, Uri_t623_Uri_IsIPv4Address_m4804_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 913/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Uri_t623_Uri_IsDomainAddress_m4805_ParameterInfos[] = 
{
	{"name", 0, 134218625, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::IsDomainAddress(System.String)
extern const MethodInfo Uri_IsDomainAddress_m4805_MethodInfo = 
{
	"IsDomainAddress"/* name */
	, (methodPointerType)&Uri_IsDomainAddress_m4805/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Object_t/* invoker_method */
	, Uri_t623_Uri_IsDomainAddress_m4805_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 914/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Uri_t623_Uri_CheckSchemeName_m4806_ParameterInfos[] = 
{
	{"schemeName", 0, 134218626, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::CheckSchemeName(System.String)
extern const MethodInfo Uri_CheckSchemeName_m4806_MethodInfo = 
{
	"CheckSchemeName"/* name */
	, (methodPointerType)&Uri_CheckSchemeName_m4806/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Object_t/* invoker_method */
	, Uri_t623_Uri_CheckSchemeName_m4806_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 915/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Char_t103_0_0_0;
static const ParameterInfo Uri_t623_Uri_IsAlpha_m4807_ParameterInfos[] = 
{
	{"c", 0, 134218627, 0, &Char_t103_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Int16_t455 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::IsAlpha(System.Char)
extern const MethodInfo Uri_IsAlpha_m4807_MethodInfo = 
{
	"IsAlpha"/* name */
	, (methodPointerType)&Uri_IsAlpha_m4807/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Int16_t455/* invoker_method */
	, Uri_t623_Uri_IsAlpha_m4807_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 916/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo Uri_t623_Uri_Equals_m4808_ParameterInfos[] = 
{
	{"comparant", 0, 134218628, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::Equals(System.Object)
extern const MethodInfo Uri_Equals_m4808_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&Uri_Equals_m4808/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Object_t/* invoker_method */
	, Uri_t623_Uri_Equals_m4808_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 917/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Uri_t623_0_0_0;
static const ParameterInfo Uri_t623_Uri_InternalEquals_m4809_ParameterInfos[] = 
{
	{"uri", 0, 134218629, 0, &Uri_t623_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::InternalEquals(System.Uri)
extern const MethodInfo Uri_InternalEquals_m4809_MethodInfo = 
{
	"InternalEquals"/* name */
	, (methodPointerType)&Uri_InternalEquals_m4809/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Object_t/* invoker_method */
	, Uri_t623_Uri_InternalEquals_m4809_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 918/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Uri::GetHashCode()
extern const MethodInfo Uri_GetHashCode_m4810_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&Uri_GetHashCode_m4810/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 919/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UriPartial_t1153_0_0_0;
extern const Il2CppType UriPartial_t1153_0_0_0;
static const ParameterInfo Uri_t623_Uri_GetLeftPart_m4811_ParameterInfos[] = 
{
	{"part", 0, 134218630, 0, &UriPartial_t1153_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.String System.Uri::GetLeftPart(System.UriPartial)
extern const MethodInfo Uri_GetLeftPart_m4811_MethodInfo = 
{
	"GetLeftPart"/* name */
	, (methodPointerType)&Uri_GetLeftPart_m4811/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t75/* invoker_method */
	, Uri_t623_Uri_GetLeftPart_m4811_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 920/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Char_t103_0_0_0;
static const ParameterInfo Uri_t623_Uri_FromHex_m4812_ParameterInfos[] = 
{
	{"digit", 0, 134218631, 0, &Char_t103_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Int16_t455 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Uri::FromHex(System.Char)
extern const MethodInfo Uri_FromHex_m4812_MethodInfo = 
{
	"FromHex"/* name */
	, (methodPointerType)&Uri_FromHex_m4812/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Int16_t455/* invoker_method */
	, Uri_t623_Uri_FromHex_m4812_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 921/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Char_t103_0_0_0;
static const ParameterInfo Uri_t623_Uri_HexEscape_m4813_ParameterInfos[] = 
{
	{"character", 0, 134218632, 0, &Char_t103_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int16_t455 (const MethodInfo* method, void* obj, void** args);
// System.String System.Uri::HexEscape(System.Char)
extern const MethodInfo Uri_HexEscape_m4813_MethodInfo = 
{
	"HexEscape"/* name */
	, (methodPointerType)&Uri_HexEscape_m4813/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int16_t455/* invoker_method */
	, Uri_t623_Uri_HexEscape_m4813_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 922/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Char_t103_0_0_0;
static const ParameterInfo Uri_t623_Uri_IsHexDigit_m4814_ParameterInfos[] = 
{
	{"digit", 0, 134218633, 0, &Char_t103_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Int16_t455 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::IsHexDigit(System.Char)
extern const MethodInfo Uri_IsHexDigit_m4814_MethodInfo = 
{
	"IsHexDigit"/* name */
	, (methodPointerType)&Uri_IsHexDigit_m4814/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Int16_t455/* invoker_method */
	, Uri_t623_Uri_IsHexDigit_m4814_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 923/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo Uri_t623_Uri_IsHexEncoding_m4815_ParameterInfos[] = 
{
	{"pattern", 0, 134218634, 0, &String_t_0_0_0},
	{"index", 1, 134218635, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Object_t_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::IsHexEncoding(System.String,System.Int32)
extern const MethodInfo Uri_IsHexEncoding_m4815_MethodInfo = 
{
	"IsHexEncoding"/* name */
	, (methodPointerType)&Uri_IsHexEncoding_m4815/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Object_t_Int32_t75/* invoker_method */
	, Uri_t623_Uri_IsHexEncoding_m4815_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 924/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_1_0_0;
extern const Il2CppType String_t_1_0_0;
static const ParameterInfo Uri_t623_Uri_AppendQueryAndFragment_m4816_ParameterInfos[] = 
{
	{"result", 0, 134218636, 0, &String_t_1_0_0},
};
extern void* RuntimeInvoker_Void_t110_StringU26_t895 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::AppendQueryAndFragment(System.String&)
extern const MethodInfo Uri_AppendQueryAndFragment_m4816_MethodInfo = 
{
	"AppendQueryAndFragment"/* name */
	, (methodPointerType)&Uri_AppendQueryAndFragment_m4816/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_StringU26_t895/* invoker_method */
	, Uri_t623_Uri_AppendQueryAndFragment_m4816_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 925/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Uri::ToString()
extern const MethodInfo Uri_ToString_m4817_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&Uri_ToString_m4817/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 926/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Uri_t623_Uri_EscapeString_m4818_ParameterInfos[] = 
{
	{"str", 0, 134218637, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Uri::EscapeString(System.String)
extern const MethodInfo Uri_EscapeString_m4818_MethodInfo = 
{
	"EscapeString"/* name */
	, (methodPointerType)&Uri_EscapeString_m4818/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Uri_t623_Uri_EscapeString_m4818_ParameterInfos/* parameters */
	, 71/* custom_attributes_cache */
	, 148/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 927/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo Uri_t623_Uri_EscapeString_m4819_ParameterInfos[] = 
{
	{"str", 0, 134218638, 0, &String_t_0_0_0},
	{"escapeReserved", 1, 134218639, 0, &Boolean_t111_0_0_0},
	{"escapeHex", 2, 134218640, 0, &Boolean_t111_0_0_0},
	{"escapeBrackets", 3, 134218641, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_SByte_t113_SByte_t113_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.String System.Uri::EscapeString(System.String,System.Boolean,System.Boolean,System.Boolean)
extern const MethodInfo Uri_EscapeString_m4819_MethodInfo = 
{
	"EscapeString"/* name */
	, (methodPointerType)&Uri_EscapeString_m4819/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_SByte_t113_SByte_t113_SByte_t113/* invoker_method */
	, Uri_t623_Uri_EscapeString_m4819_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 928/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UriKind_t1152_0_0_0;
extern const Il2CppType UriKind_t1152_0_0_0;
static const ParameterInfo Uri_t623_Uri_ParseUri_m4820_ParameterInfos[] = 
{
	{"kind", 0, 134218642, 0, &UriKind_t1152_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::ParseUri(System.UriKind)
extern const MethodInfo Uri_ParseUri_m4820_MethodInfo = 
{
	"ParseUri"/* name */
	, (methodPointerType)&Uri_ParseUri_m4820/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75/* invoker_method */
	, Uri_t623_Uri_ParseUri_m4820_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 929/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Uri_t623_Uri_Unescape_m4821_ParameterInfos[] = 
{
	{"str", 0, 134218643, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Uri::Unescape(System.String)
extern const MethodInfo Uri_Unescape_m4821_MethodInfo = 
{
	"Unescape"/* name */
	, (methodPointerType)&Uri_Unescape_m4821/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Uri_t623_Uri_Unescape_m4821_ParameterInfos/* parameters */
	, 72/* custom_attributes_cache */
	, 452/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 930/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo Uri_t623_Uri_Unescape_m4822_ParameterInfos[] = 
{
	{"str", 0, 134218644, 0, &String_t_0_0_0},
	{"excludeSpecial", 1, 134218645, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.String System.Uri::Unescape(System.String,System.Boolean)
extern const MethodInfo Uri_Unescape_m4822_MethodInfo = 
{
	"Unescape"/* name */
	, (methodPointerType)&Uri_Unescape_m4822/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_SByte_t113/* invoker_method */
	, Uri_t623_Uri_Unescape_m4822_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 931/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Uri_t623_Uri_ParseAsWindowsUNC_m4823_ParameterInfos[] = 
{
	{"uriString", 0, 134218646, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::ParseAsWindowsUNC(System.String)
extern const MethodInfo Uri_ParseAsWindowsUNC_m4823_MethodInfo = 
{
	"ParseAsWindowsUNC"/* name */
	, (methodPointerType)&Uri_ParseAsWindowsUNC_m4823/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, Uri_t623_Uri_ParseAsWindowsUNC_m4823_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 932/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Uri_t623_Uri_ParseAsWindowsAbsoluteFilePath_m4824_ParameterInfos[] = 
{
	{"uriString", 0, 134218647, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Uri::ParseAsWindowsAbsoluteFilePath(System.String)
extern const MethodInfo Uri_ParseAsWindowsAbsoluteFilePath_m4824_MethodInfo = 
{
	"ParseAsWindowsAbsoluteFilePath"/* name */
	, (methodPointerType)&Uri_ParseAsWindowsAbsoluteFilePath_m4824/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Uri_t623_Uri_ParseAsWindowsAbsoluteFilePath_m4824_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 933/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Uri_t623_Uri_ParseAsUnixAbsoluteFilePath_m4825_ParameterInfos[] = 
{
	{"uriString", 0, 134218648, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::ParseAsUnixAbsoluteFilePath(System.String)
extern const MethodInfo Uri_ParseAsUnixAbsoluteFilePath_m4825_MethodInfo = 
{
	"ParseAsUnixAbsoluteFilePath"/* name */
	, (methodPointerType)&Uri_ParseAsUnixAbsoluteFilePath_m4825/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, Uri_t623_Uri_ParseAsUnixAbsoluteFilePath_m4825_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 934/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UriKind_t1152_0_0_0;
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Uri_t623_Uri_Parse_m4826_ParameterInfos[] = 
{
	{"kind", 0, 134218649, 0, &UriKind_t1152_0_0_0},
	{"uriString", 1, 134218650, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::Parse(System.UriKind,System.String)
extern const MethodInfo Uri_Parse_m4826_MethodInfo = 
{
	"Parse"/* name */
	, (methodPointerType)&Uri_Parse_m4826/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75_Object_t/* invoker_method */
	, Uri_t623_Uri_Parse_m4826_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 935/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UriKind_t1152_0_0_0;
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Uri_t623_Uri_ParseNoExceptions_m4827_ParameterInfos[] = 
{
	{"kind", 0, 134218651, 0, &UriKind_t1152_0_0_0},
	{"uriString", 1, 134218652, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Uri::ParseNoExceptions(System.UriKind,System.String)
extern const MethodInfo Uri_ParseNoExceptions_m4827_MethodInfo = 
{
	"ParseNoExceptions"/* name */
	, (methodPointerType)&Uri_ParseNoExceptions_m4827/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t75_Object_t/* invoker_method */
	, Uri_t623_Uri_ParseNoExceptions_m4827_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 936/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Uri_t623_Uri_CompactEscaped_m4828_ParameterInfos[] = 
{
	{"scheme", 0, 134218653, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::CompactEscaped(System.String)
extern const MethodInfo Uri_CompactEscaped_m4828_MethodInfo = 
{
	"CompactEscaped"/* name */
	, (methodPointerType)&Uri_CompactEscaped_m4828/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Object_t/* invoker_method */
	, Uri_t623_Uri_CompactEscaped_m4828_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 937/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo Uri_t623_Uri_Reduce_m4829_ParameterInfos[] = 
{
	{"path", 0, 134218654, 0, &String_t_0_0_0},
	{"compact_escaped", 1, 134218655, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.String System.Uri::Reduce(System.String,System.Boolean)
extern const MethodInfo Uri_Reduce_m4829_MethodInfo = 
{
	"Reduce"/* name */
	, (methodPointerType)&Uri_Reduce_m4829/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_SByte_t113/* invoker_method */
	, Uri_t623_Uri_Reduce_m4829_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 938/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int32_t75_1_0_0;
extern const Il2CppType Char_t103_1_0_2;
extern const Il2CppType Char_t103_1_0_0;
static const ParameterInfo Uri_t623_Uri_HexUnescapeMultiByte_m4830_ParameterInfos[] = 
{
	{"pattern", 0, 134218656, 0, &String_t_0_0_0},
	{"index", 1, 134218657, 0, &Int32_t75_1_0_0},
	{"surrogate", 2, 134218658, 0, &Char_t103_1_0_2},
};
extern void* RuntimeInvoker_Char_t103_Object_t_Int32U26_t456_CharU26_t1214 (const MethodInfo* method, void* obj, void** args);
// System.Char System.Uri::HexUnescapeMultiByte(System.String,System.Int32&,System.Char&)
extern const MethodInfo Uri_HexUnescapeMultiByte_m4830_MethodInfo = 
{
	"HexUnescapeMultiByte"/* name */
	, (methodPointerType)&Uri_HexUnescapeMultiByte_m4830/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &Char_t103_0_0_0/* return_type */
	, RuntimeInvoker_Char_t103_Object_t_Int32U26_t456_CharU26_t1214/* invoker_method */
	, Uri_t623_Uri_HexUnescapeMultiByte_m4830_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 939/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Uri_t623_Uri_GetSchemeDelimiter_m4831_ParameterInfos[] = 
{
	{"scheme", 0, 134218659, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Uri::GetSchemeDelimiter(System.String)
extern const MethodInfo Uri_GetSchemeDelimiter_m4831_MethodInfo = 
{
	"GetSchemeDelimiter"/* name */
	, (methodPointerType)&Uri_GetSchemeDelimiter_m4831/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Uri_t623_Uri_GetSchemeDelimiter_m4831_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 940/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Uri_t623_Uri_GetDefaultPort_m4832_ParameterInfos[] = 
{
	{"scheme", 0, 134218660, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Uri::GetDefaultPort(System.String)
extern const MethodInfo Uri_GetDefaultPort_m4832_MethodInfo = 
{
	"GetDefaultPort"/* name */
	, (methodPointerType)&Uri_GetDefaultPort_m4832/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Object_t/* invoker_method */
	, Uri_t623_Uri_GetDefaultPort_m4832_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 941/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Uri::GetOpaqueWiseSchemeDelimiter()
extern const MethodInfo Uri_GetOpaqueWiseSchemeDelimiter_m4833_MethodInfo = 
{
	"GetOpaqueWiseSchemeDelimiter"/* name */
	, (methodPointerType)&Uri_GetOpaqueWiseSchemeDelimiter_m4833/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 942/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Uri_t623_Uri_IsPredefinedScheme_m4834_ParameterInfos[] = 
{
	{"scheme", 0, 134218661, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::IsPredefinedScheme(System.String)
extern const MethodInfo Uri_IsPredefinedScheme_m4834_MethodInfo = 
{
	"IsPredefinedScheme"/* name */
	, (methodPointerType)&Uri_IsPredefinedScheme_m4834/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Object_t/* invoker_method */
	, Uri_t623_Uri_IsPredefinedScheme_m4834_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 943/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.UriParser System.Uri::get_Parser()
extern const MethodInfo Uri_get_Parser_m4835_MethodInfo = 
{
	"get_Parser"/* name */
	, (methodPointerType)&Uri_get_Parser_m4835/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &UriParser_t1146_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2177/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 944/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::EnsureAbsoluteUri()
extern const MethodInfo Uri_EnsureAbsoluteUri_m4836_MethodInfo = 
{
	"EnsureAbsoluteUri"/* name */
	, (methodPointerType)&Uri_EnsureAbsoluteUri_m4836/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 945/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Uri_t623_0_0_0;
extern const Il2CppType Uri_t623_0_0_0;
static const ParameterInfo Uri_t623_Uri_op_Equality_m4837_ParameterInfos[] = 
{
	{"u1", 0, 134218662, 0, &Uri_t623_0_0_0},
	{"u2", 1, 134218663, 0, &Uri_t623_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
extern const MethodInfo Uri_op_Equality_m4837_MethodInfo = 
{
	"op_Equality"/* name */
	, (methodPointerType)&Uri_op_Equality_m4837/* method */
	, &Uri_t623_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Object_t_Object_t/* invoker_method */
	, Uri_t623_Uri_op_Equality_m4837_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 946/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Uri_t623_MethodInfos[] =
{
	&Uri__ctor_m3580_MethodInfo,
	&Uri__ctor_m4790_MethodInfo,
	&Uri__ctor_m4791_MethodInfo,
	&Uri__ctor_m3582_MethodInfo,
	&Uri__cctor_m4792_MethodInfo,
	&Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m4793_MethodInfo,
	&Uri_Merge_m4794_MethodInfo,
	&Uri_get_AbsoluteUri_m4795_MethodInfo,
	&Uri_get_Authority_m4796_MethodInfo,
	&Uri_get_Host_m4797_MethodInfo,
	&Uri_get_IsFile_m4798_MethodInfo,
	&Uri_get_IsLoopback_m4799_MethodInfo,
	&Uri_get_IsUnc_m4800_MethodInfo,
	&Uri_get_Scheme_m4801_MethodInfo,
	&Uri_get_IsAbsoluteUri_m4802_MethodInfo,
	&Uri_CheckHostName_m4803_MethodInfo,
	&Uri_IsIPv4Address_m4804_MethodInfo,
	&Uri_IsDomainAddress_m4805_MethodInfo,
	&Uri_CheckSchemeName_m4806_MethodInfo,
	&Uri_IsAlpha_m4807_MethodInfo,
	&Uri_Equals_m4808_MethodInfo,
	&Uri_InternalEquals_m4809_MethodInfo,
	&Uri_GetHashCode_m4810_MethodInfo,
	&Uri_GetLeftPart_m4811_MethodInfo,
	&Uri_FromHex_m4812_MethodInfo,
	&Uri_HexEscape_m4813_MethodInfo,
	&Uri_IsHexDigit_m4814_MethodInfo,
	&Uri_IsHexEncoding_m4815_MethodInfo,
	&Uri_AppendQueryAndFragment_m4816_MethodInfo,
	&Uri_ToString_m4817_MethodInfo,
	&Uri_EscapeString_m4818_MethodInfo,
	&Uri_EscapeString_m4819_MethodInfo,
	&Uri_ParseUri_m4820_MethodInfo,
	&Uri_Unescape_m4821_MethodInfo,
	&Uri_Unescape_m4822_MethodInfo,
	&Uri_ParseAsWindowsUNC_m4823_MethodInfo,
	&Uri_ParseAsWindowsAbsoluteFilePath_m4824_MethodInfo,
	&Uri_ParseAsUnixAbsoluteFilePath_m4825_MethodInfo,
	&Uri_Parse_m4826_MethodInfo,
	&Uri_ParseNoExceptions_m4827_MethodInfo,
	&Uri_CompactEscaped_m4828_MethodInfo,
	&Uri_Reduce_m4829_MethodInfo,
	&Uri_HexUnescapeMultiByte_m4830_MethodInfo,
	&Uri_GetSchemeDelimiter_m4831_MethodInfo,
	&Uri_GetDefaultPort_m4832_MethodInfo,
	&Uri_GetOpaqueWiseSchemeDelimiter_m4833_MethodInfo,
	&Uri_IsPredefinedScheme_m4834_MethodInfo,
	&Uri_get_Parser_m4835_MethodInfo,
	&Uri_EnsureAbsoluteUri_m4836_MethodInfo,
	&Uri_op_Equality_m4837_MethodInfo,
	NULL
};
extern const MethodInfo Uri_get_AbsoluteUri_m4795_MethodInfo;
static const PropertyInfo Uri_t623____AbsoluteUri_PropertyInfo = 
{
	&Uri_t623_il2cpp_TypeInfo/* parent */
	, "AbsoluteUri"/* name */
	, &Uri_get_AbsoluteUri_m4795_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Uri_get_Authority_m4796_MethodInfo;
static const PropertyInfo Uri_t623____Authority_PropertyInfo = 
{
	&Uri_t623_il2cpp_TypeInfo/* parent */
	, "Authority"/* name */
	, &Uri_get_Authority_m4796_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Uri_get_Host_m4797_MethodInfo;
static const PropertyInfo Uri_t623____Host_PropertyInfo = 
{
	&Uri_t623_il2cpp_TypeInfo/* parent */
	, "Host"/* name */
	, &Uri_get_Host_m4797_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Uri_get_IsFile_m4798_MethodInfo;
static const PropertyInfo Uri_t623____IsFile_PropertyInfo = 
{
	&Uri_t623_il2cpp_TypeInfo/* parent */
	, "IsFile"/* name */
	, &Uri_get_IsFile_m4798_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Uri_get_IsLoopback_m4799_MethodInfo;
static const PropertyInfo Uri_t623____IsLoopback_PropertyInfo = 
{
	&Uri_t623_il2cpp_TypeInfo/* parent */
	, "IsLoopback"/* name */
	, &Uri_get_IsLoopback_m4799_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Uri_get_IsUnc_m4800_MethodInfo;
static const PropertyInfo Uri_t623____IsUnc_PropertyInfo = 
{
	&Uri_t623_il2cpp_TypeInfo/* parent */
	, "IsUnc"/* name */
	, &Uri_get_IsUnc_m4800_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Uri_get_Scheme_m4801_MethodInfo;
static const PropertyInfo Uri_t623____Scheme_PropertyInfo = 
{
	&Uri_t623_il2cpp_TypeInfo/* parent */
	, "Scheme"/* name */
	, &Uri_get_Scheme_m4801_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Uri_get_IsAbsoluteUri_m4802_MethodInfo;
static const PropertyInfo Uri_t623____IsAbsoluteUri_PropertyInfo = 
{
	&Uri_t623_il2cpp_TypeInfo/* parent */
	, "IsAbsoluteUri"/* name */
	, &Uri_get_IsAbsoluteUri_m4802_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Uri_get_Parser_m4835_MethodInfo;
static const PropertyInfo Uri_t623____Parser_PropertyInfo = 
{
	&Uri_t623_il2cpp_TypeInfo/* parent */
	, "Parser"/* name */
	, &Uri_get_Parser_m4835_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* Uri_t623_PropertyInfos[] =
{
	&Uri_t623____AbsoluteUri_PropertyInfo,
	&Uri_t623____Authority_PropertyInfo,
	&Uri_t623____Host_PropertyInfo,
	&Uri_t623____IsFile_PropertyInfo,
	&Uri_t623____IsLoopback_PropertyInfo,
	&Uri_t623____IsUnc_PropertyInfo,
	&Uri_t623____Scheme_PropertyInfo,
	&Uri_t623____IsAbsoluteUri_PropertyInfo,
	&Uri_t623____Parser_PropertyInfo,
	NULL
};
static const Il2CppType* Uri_t623_il2cpp_TypeInfo__nestedTypes[1] =
{
	&UriScheme_t1148_0_0_0,
};
extern const MethodInfo Uri_Equals_m4808_MethodInfo;
extern const MethodInfo Uri_GetHashCode_m4810_MethodInfo;
extern const MethodInfo Uri_ToString_m4817_MethodInfo;
extern const MethodInfo Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m4793_MethodInfo;
extern const MethodInfo Uri_Unescape_m4821_MethodInfo;
static const Il2CppMethodReference Uri_t623_VTable[] =
{
	&Uri_Equals_m4808_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Uri_GetHashCode_m4810_MethodInfo,
	&Uri_ToString_m4817_MethodInfo,
	&Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m4793_MethodInfo,
	&Uri_Unescape_m4821_MethodInfo,
};
static bool Uri_t623_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* Uri_t623_InterfacesTypeInfos[] = 
{
	&ISerializable_t435_0_0_0,
};
static Il2CppInterfaceOffsetPair Uri_t623_InterfacesOffsets[] = 
{
	{ &ISerializable_t435_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType Uri_t623_1_0_0;
struct Uri_t623;
const Il2CppTypeDefinitionMetadata Uri_t623_DefinitionMetadata = 
{
	NULL/* declaringType */
	, Uri_t623_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, Uri_t623_InterfacesTypeInfos/* implementedInterfaces */
	, Uri_t623_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Uri_t623_VTable/* vtableMethods */
	, Uri_t623_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 745/* fieldStart */

};
TypeInfo Uri_t623_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Uri"/* name */
	, "System"/* namespaze */
	, Uri_t623_MethodInfos/* methods */
	, Uri_t623_PropertyInfos/* properties */
	, NULL/* events */
	, &Uri_t623_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 64/* custom_attributes_cache */
	, &Uri_t623_0_0_0/* byval_arg */
	, &Uri_t623_1_0_0/* this_arg */
	, &Uri_t623_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Uri_t623)/* instance_size */
	, sizeof (Uri_t623)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(Uri_t623_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056769/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, 50/* method_count */
	, 9/* property_count */
	, 38/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 6/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.UriFormatException
#include "System_System_UriFormatException.h"
// Metadata Definition System.UriFormatException
extern TypeInfo UriFormatException_t1150_il2cpp_TypeInfo;
// System.UriFormatException
#include "System_System_UriFormatExceptionMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.UriFormatException::.ctor()
extern const MethodInfo UriFormatException__ctor_m4838_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UriFormatException__ctor_m4838/* method */
	, &UriFormatException_t1150_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 948/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo UriFormatException_t1150_UriFormatException__ctor_m4839_ParameterInfos[] = 
{
	{"message", 0, 134218667, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.UriFormatException::.ctor(System.String)
extern const MethodInfo UriFormatException__ctor_m4839_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UriFormatException__ctor_m4839/* method */
	, &UriFormatException_t1150_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, UriFormatException_t1150_UriFormatException__ctor_m4839_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 949/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo UriFormatException_t1150_UriFormatException__ctor_m4840_ParameterInfos[] = 
{
	{"info", 0, 134218668, 0, &SerializationInfo_t732_0_0_0},
	{"context", 1, 134218669, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.UriFormatException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo UriFormatException__ctor_m4840_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UriFormatException__ctor_m4840/* method */
	, &UriFormatException_t1150_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, UriFormatException_t1150_UriFormatException__ctor_m4840_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 950/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo UriFormatException_t1150_UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m4841_ParameterInfos[] = 
{
	{"info", 0, 134218670, 0, &SerializationInfo_t732_0_0_0},
	{"context", 1, 134218671, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.UriFormatException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m4841_MethodInfo = 
{
	"System.Runtime.Serialization.ISerializable.GetObjectData"/* name */
	, (methodPointerType)&UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m4841/* method */
	, &UriFormatException_t1150_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, UriFormatException_t1150_UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m4841_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 951/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* UriFormatException_t1150_MethodInfos[] =
{
	&UriFormatException__ctor_m4838_MethodInfo,
	&UriFormatException__ctor_m4839_MethodInfo,
	&UriFormatException__ctor_m4840_MethodInfo,
	&UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m4841_MethodInfo,
	NULL
};
extern const MethodInfo Exception_ToString_m3797_MethodInfo;
extern const MethodInfo UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m4841_MethodInfo;
extern const MethodInfo Exception_get_InnerException_m3799_MethodInfo;
extern const MethodInfo Exception_get_Message_m3800_MethodInfo;
extern const MethodInfo Exception_get_Source_m3801_MethodInfo;
extern const MethodInfo Exception_get_StackTrace_m3802_MethodInfo;
extern const MethodInfo Exception_GetObjectData_m3798_MethodInfo;
extern const MethodInfo Exception_GetType_m3803_MethodInfo;
static const Il2CppMethodReference UriFormatException_t1150_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Exception_ToString_m3797_MethodInfo,
	&UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m4841_MethodInfo,
	&Exception_get_InnerException_m3799_MethodInfo,
	&Exception_get_Message_m3800_MethodInfo,
	&Exception_get_Source_m3801_MethodInfo,
	&Exception_get_StackTrace_m3802_MethodInfo,
	&Exception_GetObjectData_m3798_MethodInfo,
	&Exception_GetType_m3803_MethodInfo,
};
static bool UriFormatException_t1150_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* UriFormatException_t1150_InterfacesTypeInfos[] = 
{
	&ISerializable_t435_0_0_0,
};
extern const Il2CppType _Exception_t832_0_0_0;
static Il2CppInterfaceOffsetPair UriFormatException_t1150_InterfacesOffsets[] = 
{
	{ &ISerializable_t435_0_0_0, 4},
	{ &_Exception_t832_0_0_0, 5},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType UriFormatException_t1150_0_0_0;
extern const Il2CppType UriFormatException_t1150_1_0_0;
extern const Il2CppType FormatException_t750_0_0_0;
struct UriFormatException_t1150;
const Il2CppTypeDefinitionMetadata UriFormatException_t1150_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, UriFormatException_t1150_InterfacesTypeInfos/* implementedInterfaces */
	, UriFormatException_t1150_InterfacesOffsets/* interfaceOffsets */
	, &FormatException_t750_0_0_0/* parent */
	, UriFormatException_t1150_VTable/* vtableMethods */
	, UriFormatException_t1150_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo UriFormatException_t1150_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriFormatException"/* name */
	, "System"/* namespaze */
	, UriFormatException_t1150_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &UriFormatException_t1150_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &UriFormatException_t1150_0_0_0/* byval_arg */
	, &UriFormatException_t1150_1_0_0/* this_arg */
	, &UriFormatException_t1150_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UriFormatException_t1150)/* instance_size */
	, sizeof (UriFormatException_t1150)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056769/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 1/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.UriHostNameType
#include "System_System_UriHostNameType.h"
// Metadata Definition System.UriHostNameType
extern TypeInfo UriHostNameType_t1151_il2cpp_TypeInfo;
// System.UriHostNameType
#include "System_System_UriHostNameTypeMethodDeclarations.h"
static const MethodInfo* UriHostNameType_t1151_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference UriHostNameType_t1151_VTable[] =
{
	&Enum_Equals_m2180_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Enum_GetHashCode_m2181_MethodInfo,
	&Enum_ToString_m2182_MethodInfo,
	&Enum_ToString_m2183_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m2184_MethodInfo,
	&Enum_System_IConvertible_ToByte_m2185_MethodInfo,
	&Enum_System_IConvertible_ToChar_m2186_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m2187_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m2188_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m2189_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m2190_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m2191_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m2192_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m2193_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m2194_MethodInfo,
	&Enum_ToString_m2195_MethodInfo,
	&Enum_System_IConvertible_ToType_m2196_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m2197_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m2198_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m2199_MethodInfo,
	&Enum_CompareTo_m2200_MethodInfo,
	&Enum_GetTypeCode_m2201_MethodInfo,
};
static bool UriHostNameType_t1151_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair UriHostNameType_t1151_InterfacesOffsets[] = 
{
	{ &IFormattable_t428_0_0_0, 4},
	{ &IConvertible_t429_0_0_0, 5},
	{ &IComparable_t430_0_0_0, 21},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType UriHostNameType_t1151_1_0_0;
const Il2CppTypeDefinitionMetadata UriHostNameType_t1151_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, UriHostNameType_t1151_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t431_0_0_0/* parent */
	, UriHostNameType_t1151_VTable/* vtableMethods */
	, UriHostNameType_t1151_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 783/* fieldStart */

};
TypeInfo UriHostNameType_t1151_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriHostNameType"/* name */
	, "System"/* namespaze */
	, UriHostNameType_t1151_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Int32_t75_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &UriHostNameType_t1151_0_0_0/* byval_arg */
	, &UriHostNameType_t1151_1_0_0/* this_arg */
	, &UriHostNameType_t1151_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UriHostNameType_t1151)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (UriHostNameType_t1151)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.UriKind
#include "System_System_UriKind.h"
// Metadata Definition System.UriKind
extern TypeInfo UriKind_t1152_il2cpp_TypeInfo;
// System.UriKind
#include "System_System_UriKindMethodDeclarations.h"
static const MethodInfo* UriKind_t1152_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference UriKind_t1152_VTable[] =
{
	&Enum_Equals_m2180_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Enum_GetHashCode_m2181_MethodInfo,
	&Enum_ToString_m2182_MethodInfo,
	&Enum_ToString_m2183_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m2184_MethodInfo,
	&Enum_System_IConvertible_ToByte_m2185_MethodInfo,
	&Enum_System_IConvertible_ToChar_m2186_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m2187_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m2188_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m2189_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m2190_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m2191_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m2192_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m2193_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m2194_MethodInfo,
	&Enum_ToString_m2195_MethodInfo,
	&Enum_System_IConvertible_ToType_m2196_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m2197_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m2198_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m2199_MethodInfo,
	&Enum_CompareTo_m2200_MethodInfo,
	&Enum_GetTypeCode_m2201_MethodInfo,
};
static bool UriKind_t1152_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair UriKind_t1152_InterfacesOffsets[] = 
{
	{ &IFormattable_t428_0_0_0, 4},
	{ &IConvertible_t429_0_0_0, 5},
	{ &IComparable_t430_0_0_0, 21},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType UriKind_t1152_1_0_0;
const Il2CppTypeDefinitionMetadata UriKind_t1152_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, UriKind_t1152_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t431_0_0_0/* parent */
	, UriKind_t1152_VTable/* vtableMethods */
	, UriKind_t1152_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 789/* fieldStart */

};
TypeInfo UriKind_t1152_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriKind"/* name */
	, "System"/* namespaze */
	, UriKind_t1152_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Int32_t75_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &UriKind_t1152_0_0_0/* byval_arg */
	, &UriKind_t1152_1_0_0/* this_arg */
	, &UriKind_t1152_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UriKind_t1152)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (UriKind_t1152)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.UriParser
#include "System_System_UriParser.h"
// Metadata Definition System.UriParser
extern TypeInfo UriParser_t1146_il2cpp_TypeInfo;
// System.UriParser
#include "System_System_UriParserMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::.ctor()
extern const MethodInfo UriParser__ctor_m4842_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UriParser__ctor_m4842/* method */
	, &UriParser_t1146_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 952/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::.cctor()
extern const MethodInfo UriParser__cctor_m4843_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&UriParser__cctor_m4843/* method */
	, &UriParser_t1146_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 953/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Uri_t623_0_0_0;
extern const Il2CppType UriFormatException_t1150_1_0_2;
static const ParameterInfo UriParser_t1146_UriParser_InitializeAndValidate_m4844_ParameterInfos[] = 
{
	{"uri", 0, 134218672, 0, &Uri_t623_0_0_0},
	{"parsingError", 1, 134218673, 0, &UriFormatException_t1150_1_0_2},
};
extern void* RuntimeInvoker_Void_t110_Object_t_UriFormatExceptionU26_t1215 (const MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&)
extern const MethodInfo UriParser_InitializeAndValidate_m4844_MethodInfo = 
{
	"InitializeAndValidate"/* name */
	, (methodPointerType)&UriParser_InitializeAndValidate_m4844/* method */
	, &UriParser_t1146_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_UriFormatExceptionU26_t1215/* invoker_method */
	, UriParser_t1146_UriParser_InitializeAndValidate_m4844_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 453/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 954/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo UriParser_t1146_UriParser_OnRegister_m4845_ParameterInfos[] = 
{
	{"schemeName", 0, 134218674, 0, &String_t_0_0_0},
	{"defaultPort", 1, 134218675, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::OnRegister(System.String,System.Int32)
extern const MethodInfo UriParser_OnRegister_m4845_MethodInfo = 
{
	"OnRegister"/* name */
	, (methodPointerType)&UriParser_OnRegister_m4845/* method */
	, &UriParser_t1146_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Int32_t75/* invoker_method */
	, UriParser_t1146_UriParser_OnRegister_m4845_ParameterInfos/* parameters */
	, 73/* custom_attributes_cache */
	, 452/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 955/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo UriParser_t1146_UriParser_set_SchemeName_m4846_ParameterInfos[] = 
{
	{"value", 0, 134218676, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::set_SchemeName(System.String)
extern const MethodInfo UriParser_set_SchemeName_m4846_MethodInfo = 
{
	"set_SchemeName"/* name */
	, (methodPointerType)&UriParser_set_SchemeName_m4846/* method */
	, &UriParser_t1146_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, UriParser_t1146_UriParser_set_SchemeName_m4846_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2179/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 956/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.UriParser::get_DefaultPort()
extern const MethodInfo UriParser_get_DefaultPort_m4847_MethodInfo = 
{
	"get_DefaultPort"/* name */
	, (methodPointerType)&UriParser_get_DefaultPort_m4847/* method */
	, &UriParser_t1146_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2179/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 957/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo UriParser_t1146_UriParser_set_DefaultPort_m4848_ParameterInfos[] = 
{
	{"value", 0, 134218677, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::set_DefaultPort(System.Int32)
extern const MethodInfo UriParser_set_DefaultPort_m4848_MethodInfo = 
{
	"set_DefaultPort"/* name */
	, (methodPointerType)&UriParser_set_DefaultPort_m4848/* method */
	, &UriParser_t1146_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75/* invoker_method */
	, UriParser_t1146_UriParser_set_DefaultPort_m4848_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2179/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 958/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::CreateDefaults()
extern const MethodInfo UriParser_CreateDefaults_m4849_MethodInfo = 
{
	"CreateDefaults"/* name */
	, (methodPointerType)&UriParser_CreateDefaults_m4849/* method */
	, &UriParser_t1146_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 959/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Hashtable_t56_0_0_0;
extern const Il2CppType UriParser_t1146_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo UriParser_t1146_UriParser_InternalRegister_m4850_ParameterInfos[] = 
{
	{"table", 0, 134218678, 0, &Hashtable_t56_0_0_0},
	{"uriParser", 1, 134218679, 0, &UriParser_t1146_0_0_0},
	{"schemeName", 2, 134218680, 0, &String_t_0_0_0},
	{"defaultPort", 3, 134218681, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Object_t_Object_t_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::InternalRegister(System.Collections.Hashtable,System.UriParser,System.String,System.Int32)
extern const MethodInfo UriParser_InternalRegister_m4850_MethodInfo = 
{
	"InternalRegister"/* name */
	, (methodPointerType)&UriParser_InternalRegister_m4850/* method */
	, &UriParser_t1146_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Object_t_Object_t_Int32_t75/* invoker_method */
	, UriParser_t1146_UriParser_InternalRegister_m4850_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 960/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo UriParser_t1146_UriParser_GetParser_m4851_ParameterInfos[] = 
{
	{"schemeName", 0, 134218682, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.UriParser System.UriParser::GetParser(System.String)
extern const MethodInfo UriParser_GetParser_m4851_MethodInfo = 
{
	"GetParser"/* name */
	, (methodPointerType)&UriParser_GetParser_m4851/* method */
	, &UriParser_t1146_il2cpp_TypeInfo/* declaring_type */
	, &UriParser_t1146_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, UriParser_t1146_UriParser_GetParser_m4851_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 961/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* UriParser_t1146_MethodInfos[] =
{
	&UriParser__ctor_m4842_MethodInfo,
	&UriParser__cctor_m4843_MethodInfo,
	&UriParser_InitializeAndValidate_m4844_MethodInfo,
	&UriParser_OnRegister_m4845_MethodInfo,
	&UriParser_set_SchemeName_m4846_MethodInfo,
	&UriParser_get_DefaultPort_m4847_MethodInfo,
	&UriParser_set_DefaultPort_m4848_MethodInfo,
	&UriParser_CreateDefaults_m4849_MethodInfo,
	&UriParser_InternalRegister_m4850_MethodInfo,
	&UriParser_GetParser_m4851_MethodInfo,
	NULL
};
extern const MethodInfo UriParser_set_SchemeName_m4846_MethodInfo;
static const PropertyInfo UriParser_t1146____SchemeName_PropertyInfo = 
{
	&UriParser_t1146_il2cpp_TypeInfo/* parent */
	, "SchemeName"/* name */
	, NULL/* get */
	, &UriParser_set_SchemeName_m4846_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo UriParser_get_DefaultPort_m4847_MethodInfo;
extern const MethodInfo UriParser_set_DefaultPort_m4848_MethodInfo;
static const PropertyInfo UriParser_t1146____DefaultPort_PropertyInfo = 
{
	&UriParser_t1146_il2cpp_TypeInfo/* parent */
	, "DefaultPort"/* name */
	, &UriParser_get_DefaultPort_m4847_MethodInfo/* get */
	, &UriParser_set_DefaultPort_m4848_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* UriParser_t1146_PropertyInfos[] =
{
	&UriParser_t1146____SchemeName_PropertyInfo,
	&UriParser_t1146____DefaultPort_PropertyInfo,
	NULL
};
static const Il2CppMethodReference UriParser_t1146_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	&UriParser_InitializeAndValidate_m4844_MethodInfo,
	&UriParser_OnRegister_m4845_MethodInfo,
};
static bool UriParser_t1146_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType UriParser_t1146_1_0_0;
struct UriParser_t1146;
const Il2CppTypeDefinitionMetadata UriParser_t1146_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, UriParser_t1146_VTable/* vtableMethods */
	, UriParser_t1146_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 793/* fieldStart */

};
TypeInfo UriParser_t1146_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriParser"/* name */
	, "System"/* namespaze */
	, UriParser_t1146_MethodInfos/* methods */
	, UriParser_t1146_PropertyInfos/* properties */
	, NULL/* events */
	, &UriParser_t1146_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &UriParser_t1146_0_0_0/* byval_arg */
	, &UriParser_t1146_1_0_0/* this_arg */
	, &UriParser_t1146_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UriParser_t1146)/* instance_size */
	, sizeof (UriParser_t1146)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(UriParser_t1146_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048705/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, 10/* method_count */
	, 2/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.UriPartial
#include "System_System_UriPartial.h"
// Metadata Definition System.UriPartial
extern TypeInfo UriPartial_t1153_il2cpp_TypeInfo;
// System.UriPartial
#include "System_System_UriPartialMethodDeclarations.h"
static const MethodInfo* UriPartial_t1153_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference UriPartial_t1153_VTable[] =
{
	&Enum_Equals_m2180_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Enum_GetHashCode_m2181_MethodInfo,
	&Enum_ToString_m2182_MethodInfo,
	&Enum_ToString_m2183_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m2184_MethodInfo,
	&Enum_System_IConvertible_ToByte_m2185_MethodInfo,
	&Enum_System_IConvertible_ToChar_m2186_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m2187_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m2188_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m2189_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m2190_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m2191_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m2192_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m2193_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m2194_MethodInfo,
	&Enum_ToString_m2195_MethodInfo,
	&Enum_System_IConvertible_ToType_m2196_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m2197_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m2198_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m2199_MethodInfo,
	&Enum_CompareTo_m2200_MethodInfo,
	&Enum_GetTypeCode_m2201_MethodInfo,
};
static bool UriPartial_t1153_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair UriPartial_t1153_InterfacesOffsets[] = 
{
	{ &IFormattable_t428_0_0_0, 4},
	{ &IConvertible_t429_0_0_0, 5},
	{ &IComparable_t430_0_0_0, 21},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType UriPartial_t1153_1_0_0;
const Il2CppTypeDefinitionMetadata UriPartial_t1153_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, UriPartial_t1153_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t431_0_0_0/* parent */
	, UriPartial_t1153_VTable/* vtableMethods */
	, UriPartial_t1153_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 799/* fieldStart */

};
TypeInfo UriPartial_t1153_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriPartial"/* name */
	, "System"/* namespaze */
	, UriPartial_t1153_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Int32_t75_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &UriPartial_t1153_0_0_0/* byval_arg */
	, &UriPartial_t1153_1_0_0/* this_arg */
	, &UriPartial_t1153_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UriPartial_t1153)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (UriPartial_t1153)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.UriTypeConverter
#include "System_System_UriTypeConverter.h"
// Metadata Definition System.UriTypeConverter
extern TypeInfo UriTypeConverter_t1154_il2cpp_TypeInfo;
// System.UriTypeConverter
#include "System_System_UriTypeConverterMethodDeclarations.h"
static const MethodInfo* UriTypeConverter_t1154_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference UriTypeConverter_t1154_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
};
static bool UriTypeConverter_t1154_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType UriTypeConverter_t1154_0_0_0;
extern const Il2CppType UriTypeConverter_t1154_1_0_0;
extern const Il2CppType TypeConverter_t1003_0_0_0;
struct UriTypeConverter_t1154;
const Il2CppTypeDefinitionMetadata UriTypeConverter_t1154_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &TypeConverter_t1003_0_0_0/* parent */
	, UriTypeConverter_t1154_VTable/* vtableMethods */
	, UriTypeConverter_t1154_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo UriTypeConverter_t1154_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriTypeConverter"/* name */
	, "System"/* namespaze */
	, UriTypeConverter_t1154_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &UriTypeConverter_t1154_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &UriTypeConverter_t1154_0_0_0/* byval_arg */
	, &UriTypeConverter_t1154_1_0_0/* this_arg */
	, &UriTypeConverter_t1154_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UriTypeConverter_t1154)/* instance_size */
	, sizeof (UriTypeConverter_t1154)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Net.Security.RemoteCertificateValidationCallback
#include "System_System_Net_Security_RemoteCertificateValidationCallba.h"
// Metadata Definition System.Net.Security.RemoteCertificateValidationCallback
extern TypeInfo RemoteCertificateValidationCallback_t1015_il2cpp_TypeInfo;
// System.Net.Security.RemoteCertificateValidationCallback
#include "System_System_Net_Security_RemoteCertificateValidationCallbaMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo RemoteCertificateValidationCallback_t1015_RemoteCertificateValidationCallback__ctor_m4852_ParameterInfos[] = 
{
	{"object", 0, 134218683, 0, &Object_t_0_0_0},
	{"method", 1, 134218684, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Net.Security.RemoteCertificateValidationCallback::.ctor(System.Object,System.IntPtr)
extern const MethodInfo RemoteCertificateValidationCallback__ctor_m4852_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&RemoteCertificateValidationCallback__ctor_m4852/* method */
	, &RemoteCertificateValidationCallback_t1015_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_IntPtr_t/* invoker_method */
	, RemoteCertificateValidationCallback_t1015_RemoteCertificateValidationCallback__ctor_m4852_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 962/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType X509Certificate_t1050_0_0_0;
extern const Il2CppType X509Certificate_t1050_0_0_0;
extern const Il2CppType X509Chain_t1061_0_0_0;
extern const Il2CppType X509Chain_t1061_0_0_0;
extern const Il2CppType SslPolicyErrors_t1006_0_0_0;
extern const Il2CppType SslPolicyErrors_t1006_0_0_0;
static const ParameterInfo RemoteCertificateValidationCallback_t1015_RemoteCertificateValidationCallback_Invoke_m4853_ParameterInfos[] = 
{
	{"sender", 0, 134218685, 0, &Object_t_0_0_0},
	{"certificate", 1, 134218686, 0, &X509Certificate_t1050_0_0_0},
	{"chain", 2, 134218687, 0, &X509Chain_t1061_0_0_0},
	{"sslPolicyErrors", 3, 134218688, 0, &SslPolicyErrors_t1006_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Object_t_Object_t_Object_t_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::Invoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern const MethodInfo RemoteCertificateValidationCallback_Invoke_m4853_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&RemoteCertificateValidationCallback_Invoke_m4853/* method */
	, &RemoteCertificateValidationCallback_t1015_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Object_t_Object_t_Object_t_Int32_t75/* invoker_method */
	, RemoteCertificateValidationCallback_t1015_RemoteCertificateValidationCallback_Invoke_m4853_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 963/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType X509Certificate_t1050_0_0_0;
extern const Il2CppType X509Chain_t1061_0_0_0;
extern const Il2CppType SslPolicyErrors_t1006_0_0_0;
extern const Il2CppType AsyncCallback_t224_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo RemoteCertificateValidationCallback_t1015_RemoteCertificateValidationCallback_BeginInvoke_m4854_ParameterInfos[] = 
{
	{"sender", 0, 134218689, 0, &Object_t_0_0_0},
	{"certificate", 1, 134218690, 0, &X509Certificate_t1050_0_0_0},
	{"chain", 2, 134218691, 0, &X509Chain_t1061_0_0_0},
	{"sslPolicyErrors", 3, 134218692, 0, &SslPolicyErrors_t1006_0_0_0},
	{"callback", 4, 134218693, 0, &AsyncCallback_t224_0_0_0},
	{"object", 5, 134218694, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Int32_t75_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Net.Security.RemoteCertificateValidationCallback::BeginInvoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors,System.AsyncCallback,System.Object)
extern const MethodInfo RemoteCertificateValidationCallback_BeginInvoke_m4854_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&RemoteCertificateValidationCallback_BeginInvoke_m4854/* method */
	, &RemoteCertificateValidationCallback_t1015_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t223_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Int32_t75_Object_t_Object_t/* invoker_method */
	, RemoteCertificateValidationCallback_t1015_RemoteCertificateValidationCallback_BeginInvoke_m4854_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 6/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 964/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t223_0_0_0;
static const ParameterInfo RemoteCertificateValidationCallback_t1015_RemoteCertificateValidationCallback_EndInvoke_m4855_ParameterInfos[] = 
{
	{"result", 0, 134218695, 0, &IAsyncResult_t223_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::EndInvoke(System.IAsyncResult)
extern const MethodInfo RemoteCertificateValidationCallback_EndInvoke_m4855_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&RemoteCertificateValidationCallback_EndInvoke_m4855/* method */
	, &RemoteCertificateValidationCallback_t1015_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Object_t/* invoker_method */
	, RemoteCertificateValidationCallback_t1015_RemoteCertificateValidationCallback_EndInvoke_m4855_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 965/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* RemoteCertificateValidationCallback_t1015_MethodInfos[] =
{
	&RemoteCertificateValidationCallback__ctor_m4852_MethodInfo,
	&RemoteCertificateValidationCallback_Invoke_m4853_MethodInfo,
	&RemoteCertificateValidationCallback_BeginInvoke_m4854_MethodInfo,
	&RemoteCertificateValidationCallback_EndInvoke_m4855_MethodInfo,
	NULL
};
extern const MethodInfo RemoteCertificateValidationCallback_Invoke_m4853_MethodInfo;
extern const MethodInfo RemoteCertificateValidationCallback_BeginInvoke_m4854_MethodInfo;
extern const MethodInfo RemoteCertificateValidationCallback_EndInvoke_m4855_MethodInfo;
static const Il2CppMethodReference RemoteCertificateValidationCallback_t1015_VTable[] =
{
	&MulticastDelegate_Equals_m2207_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&MulticastDelegate_GetHashCode_m2208_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	&MulticastDelegate_GetObjectData_m2209_MethodInfo,
	&Delegate_Clone_m2210_MethodInfo,
	&MulticastDelegate_GetObjectData_m2209_MethodInfo,
	&MulticastDelegate_GetInvocationList_m2211_MethodInfo,
	&MulticastDelegate_CombineImpl_m2212_MethodInfo,
	&MulticastDelegate_RemoveImpl_m2213_MethodInfo,
	&RemoteCertificateValidationCallback_Invoke_m4853_MethodInfo,
	&RemoteCertificateValidationCallback_BeginInvoke_m4854_MethodInfo,
	&RemoteCertificateValidationCallback_EndInvoke_m4855_MethodInfo,
};
static bool RemoteCertificateValidationCallback_t1015_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair RemoteCertificateValidationCallback_t1015_InterfacesOffsets[] = 
{
	{ &ICloneable_t434_0_0_0, 4},
	{ &ISerializable_t435_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType RemoteCertificateValidationCallback_t1015_0_0_0;
extern const Il2CppType RemoteCertificateValidationCallback_t1015_1_0_0;
struct RemoteCertificateValidationCallback_t1015;
const Il2CppTypeDefinitionMetadata RemoteCertificateValidationCallback_t1015_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, RemoteCertificateValidationCallback_t1015_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t226_0_0_0/* parent */
	, RemoteCertificateValidationCallback_t1015_VTable/* vtableMethods */
	, RemoteCertificateValidationCallback_t1015_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo RemoteCertificateValidationCallback_t1015_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "RemoteCertificateValidationCallback"/* name */
	, "System.Net.Security"/* namespaze */
	, RemoteCertificateValidationCallback_t1015_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &RemoteCertificateValidationCallback_t1015_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &RemoteCertificateValidationCallback_t1015_0_0_0/* byval_arg */
	, &RemoteCertificateValidationCallback_t1015_1_0_0/* this_arg */
	, &RemoteCertificateValidationCallback_t1015_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_RemoteCertificateValidationCallback_t1015/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (RemoteCertificateValidationCallback_t1015)/* instance_size */
	, sizeof (RemoteCertificateValidationCallback_t1015)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Text.RegularExpressions.MatchEvaluator
#include "System_System_Text_RegularExpressions_MatchEvaluator.h"
// Metadata Definition System.Text.RegularExpressions.MatchEvaluator
extern TypeInfo MatchEvaluator_t1155_il2cpp_TypeInfo;
// System.Text.RegularExpressions.MatchEvaluator
#include "System_System_Text_RegularExpressions_MatchEvaluatorMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo MatchEvaluator_t1155_MatchEvaluator__ctor_m4856_ParameterInfos[] = 
{
	{"object", 0, 134218696, 0, &Object_t_0_0_0},
	{"method", 1, 134218697, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.MatchEvaluator::.ctor(System.Object,System.IntPtr)
extern const MethodInfo MatchEvaluator__ctor_m4856_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MatchEvaluator__ctor_m4856/* method */
	, &MatchEvaluator_t1155_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_IntPtr_t/* invoker_method */
	, MatchEvaluator_t1155_MatchEvaluator__ctor_m4856_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 966/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Match_t1080_0_0_0;
static const ParameterInfo MatchEvaluator_t1155_MatchEvaluator_Invoke_m4857_ParameterInfos[] = 
{
	{"match", 0, 134218698, 0, &Match_t1080_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.MatchEvaluator::Invoke(System.Text.RegularExpressions.Match)
extern const MethodInfo MatchEvaluator_Invoke_m4857_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&MatchEvaluator_Invoke_m4857/* method */
	, &MatchEvaluator_t1155_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, MatchEvaluator_t1155_MatchEvaluator_Invoke_m4857_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 967/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Match_t1080_0_0_0;
extern const Il2CppType AsyncCallback_t224_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo MatchEvaluator_t1155_MatchEvaluator_BeginInvoke_m4858_ParameterInfos[] = 
{
	{"match", 0, 134218699, 0, &Match_t1080_0_0_0},
	{"callback", 1, 134218700, 0, &AsyncCallback_t224_0_0_0},
	{"object", 2, 134218701, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Text.RegularExpressions.MatchEvaluator::BeginInvoke(System.Text.RegularExpressions.Match,System.AsyncCallback,System.Object)
extern const MethodInfo MatchEvaluator_BeginInvoke_m4858_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&MatchEvaluator_BeginInvoke_m4858/* method */
	, &MatchEvaluator_t1155_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t223_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, MatchEvaluator_t1155_MatchEvaluator_BeginInvoke_m4858_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 968/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t223_0_0_0;
static const ParameterInfo MatchEvaluator_t1155_MatchEvaluator_EndInvoke_m4859_ParameterInfos[] = 
{
	{"result", 0, 134218702, 0, &IAsyncResult_t223_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.MatchEvaluator::EndInvoke(System.IAsyncResult)
extern const MethodInfo MatchEvaluator_EndInvoke_m4859_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&MatchEvaluator_EndInvoke_m4859/* method */
	, &MatchEvaluator_t1155_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, MatchEvaluator_t1155_MatchEvaluator_EndInvoke_m4859_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 969/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* MatchEvaluator_t1155_MethodInfos[] =
{
	&MatchEvaluator__ctor_m4856_MethodInfo,
	&MatchEvaluator_Invoke_m4857_MethodInfo,
	&MatchEvaluator_BeginInvoke_m4858_MethodInfo,
	&MatchEvaluator_EndInvoke_m4859_MethodInfo,
	NULL
};
extern const MethodInfo MatchEvaluator_Invoke_m4857_MethodInfo;
extern const MethodInfo MatchEvaluator_BeginInvoke_m4858_MethodInfo;
extern const MethodInfo MatchEvaluator_EndInvoke_m4859_MethodInfo;
static const Il2CppMethodReference MatchEvaluator_t1155_VTable[] =
{
	&MulticastDelegate_Equals_m2207_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&MulticastDelegate_GetHashCode_m2208_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	&MulticastDelegate_GetObjectData_m2209_MethodInfo,
	&Delegate_Clone_m2210_MethodInfo,
	&MulticastDelegate_GetObjectData_m2209_MethodInfo,
	&MulticastDelegate_GetInvocationList_m2211_MethodInfo,
	&MulticastDelegate_CombineImpl_m2212_MethodInfo,
	&MulticastDelegate_RemoveImpl_m2213_MethodInfo,
	&MatchEvaluator_Invoke_m4857_MethodInfo,
	&MatchEvaluator_BeginInvoke_m4858_MethodInfo,
	&MatchEvaluator_EndInvoke_m4859_MethodInfo,
};
static bool MatchEvaluator_t1155_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair MatchEvaluator_t1155_InterfacesOffsets[] = 
{
	{ &ICloneable_t434_0_0_0, 4},
	{ &ISerializable_t435_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType MatchEvaluator_t1155_0_0_0;
extern const Il2CppType MatchEvaluator_t1155_1_0_0;
struct MatchEvaluator_t1155;
const Il2CppTypeDefinitionMetadata MatchEvaluator_t1155_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, MatchEvaluator_t1155_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t226_0_0_0/* parent */
	, MatchEvaluator_t1155_VTable/* vtableMethods */
	, MatchEvaluator_t1155_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo MatchEvaluator_t1155_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "MatchEvaluator"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, MatchEvaluator_t1155_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &MatchEvaluator_t1155_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &MatchEvaluator_t1155_0_0_0/* byval_arg */
	, &MatchEvaluator_t1155_1_0_0/* this_arg */
	, &MatchEvaluator_t1155_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_MatchEvaluator_t1155/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (MatchEvaluator_t1155)/* instance_size */
	, sizeof (MatchEvaluator_t1155)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8449/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$128
#include "System_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU24128.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$128
extern TypeInfo U24ArrayTypeU24128_t1156_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$128
#include "System_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU24128MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU24128_t1156_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU24128_t1156_VTable[] =
{
	&ValueType_Equals_m2220_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&ValueType_GetHashCode_m2221_MethodInfo,
	&ValueType_ToString_m2224_MethodInfo,
};
static bool U24ArrayTypeU24128_t1156_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType U24ArrayTypeU24128_t1156_0_0_0;
extern const Il2CppType U24ArrayTypeU24128_t1156_1_0_0;
extern TypeInfo U3CPrivateImplementationDetailsU3E_t1158_il2cpp_TypeInfo;
extern const Il2CppType U3CPrivateImplementationDetailsU3E_t1158_0_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU24128_t1156_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t1158_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t446_0_0_0/* parent */
	, U24ArrayTypeU24128_t1156_VTable/* vtableMethods */
	, U24ArrayTypeU24128_t1156_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU24128_t1156_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$128"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU24128_t1156_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU24128_t1156_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU24128_t1156_0_0_0/* byval_arg */
	, &U24ArrayTypeU24128_t1156_1_0_0/* this_arg */
	, &U24ArrayTypeU24128_t1156_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU24128_t1156_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU24128_t1156_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU24128_t1156_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU24128_t1156)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU24128_t1156)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU24128_t1156_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$12
#include "System_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2412.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$12
extern TypeInfo U24ArrayTypeU2412_t1157_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$12
#include "System_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2412MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2412_t1157_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2412_t1157_VTable[] =
{
	&ValueType_Equals_m2220_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&ValueType_GetHashCode_m2221_MethodInfo,
	&ValueType_ToString_m2224_MethodInfo,
};
static bool U24ArrayTypeU2412_t1157_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType U24ArrayTypeU2412_t1157_0_0_0;
extern const Il2CppType U24ArrayTypeU2412_t1157_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2412_t1157_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t1158_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t446_0_0_0/* parent */
	, U24ArrayTypeU2412_t1157_VTable/* vtableMethods */
	, U24ArrayTypeU2412_t1157_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2412_t1157_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$12"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2412_t1157_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2412_t1157_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2412_t1157_0_0_0/* byval_arg */
	, &U24ArrayTypeU2412_t1157_1_0_0/* this_arg */
	, &U24ArrayTypeU2412_t1157_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2412_t1157_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2412_t1157_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2412_t1157_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2412_t1157)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2412_t1157)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2412_t1157_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>
#include "System_U3CPrivateImplementationDetailsU3E.h"
// Metadata Definition <PrivateImplementationDetails>
// <PrivateImplementationDetails>
#include "System_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
static const MethodInfo* U3CPrivateImplementationDetailsU3E_t1158_MethodInfos[] =
{
	NULL
};
static const Il2CppType* U3CPrivateImplementationDetailsU3E_t1158_il2cpp_TypeInfo__nestedTypes[2] =
{
	&U24ArrayTypeU24128_t1156_0_0_0,
	&U24ArrayTypeU2412_t1157_0_0_0,
};
static const Il2CppMethodReference U3CPrivateImplementationDetailsU3E_t1158_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
};
static bool U3CPrivateImplementationDetailsU3E_t1158_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType U3CPrivateImplementationDetailsU3E_t1158_1_0_0;
struct U3CPrivateImplementationDetailsU3E_t1158;
const Il2CppTypeDefinitionMetadata U3CPrivateImplementationDetailsU3E_t1158_DefinitionMetadata = 
{
	NULL/* declaringType */
	, U3CPrivateImplementationDetailsU3E_t1158_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, U3CPrivateImplementationDetailsU3E_t1158_VTable/* vtableMethods */
	, U3CPrivateImplementationDetailsU3E_t1158_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 804/* fieldStart */

};
TypeInfo U3CPrivateImplementationDetailsU3E_t1158_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "<PrivateImplementationDetails>"/* name */
	, ""/* namespaze */
	, U3CPrivateImplementationDetailsU3E_t1158_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U3CPrivateImplementationDetailsU3E_t1158_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 74/* custom_attributes_cache */
	, &U3CPrivateImplementationDetailsU3E_t1158_0_0_0/* byval_arg */
	, &U3CPrivateImplementationDetailsU3E_t1158_1_0_0/* this_arg */
	, &U3CPrivateImplementationDetailsU3E_t1158_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CPrivateImplementationDetailsU3E_t1158)/* instance_size */
	, sizeof (U3CPrivateImplementationDetailsU3E_t1158)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(U3CPrivateImplementationDetailsU3E_t1158_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 0/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 2/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
