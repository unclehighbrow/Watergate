#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "stringLiterals.h"
// System.ExecutionEngineException
#include "mscorlib_System_ExecutionEngineException.h"
// Metadata Definition System.ExecutionEngineException
extern TypeInfo ExecutionEngineException_t1849_il2cpp_TypeInfo;
// System.ExecutionEngineException
#include "mscorlib_System_ExecutionEngineExceptionMethodDeclarations.h"
extern const Il2CppType Void_t110_0_0_0;
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.ExecutionEngineException::.ctor()
extern const MethodInfo ExecutionEngineException__ctor_m10148_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ExecutionEngineException__ctor_m10148/* method */
	, &ExecutionEngineException_t1849_il2cpp_TypeInfo/* declaring_type */
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
	, 5152/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo ExecutionEngineException_t1849_ExecutionEngineException__ctor_m10149_ParameterInfos[] = 
{
	{"info", 0, 134224107, 0, &SerializationInfo_t732_0_0_0},
	{"context", 1, 134224108, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.ExecutionEngineException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo ExecutionEngineException__ctor_m10149_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ExecutionEngineException__ctor_m10149/* method */
	, &ExecutionEngineException_t1849_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, ExecutionEngineException_t1849_ExecutionEngineException__ctor_m10149_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5153/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ExecutionEngineException_t1849_MethodInfos[] =
{
	&ExecutionEngineException__ctor_m10148_MethodInfo,
	&ExecutionEngineException__ctor_m10149_MethodInfo,
	NULL
};
extern const MethodInfo Object_Equals_m378_MethodInfo;
extern const MethodInfo Object_Finalize_m375_MethodInfo;
extern const MethodInfo Object_GetHashCode_m379_MethodInfo;
extern const MethodInfo Exception_ToString_m3797_MethodInfo;
extern const MethodInfo Exception_GetObjectData_m3798_MethodInfo;
extern const MethodInfo Exception_get_InnerException_m3799_MethodInfo;
extern const MethodInfo Exception_get_Message_m3800_MethodInfo;
extern const MethodInfo Exception_get_Source_m3801_MethodInfo;
extern const MethodInfo Exception_get_StackTrace_m3802_MethodInfo;
extern const MethodInfo Exception_GetType_m3803_MethodInfo;
static const Il2CppMethodReference ExecutionEngineException_t1849_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Exception_ToString_m3797_MethodInfo,
	&Exception_GetObjectData_m3798_MethodInfo,
	&Exception_get_InnerException_m3799_MethodInfo,
	&Exception_get_Message_m3800_MethodInfo,
	&Exception_get_Source_m3801_MethodInfo,
	&Exception_get_StackTrace_m3802_MethodInfo,
	&Exception_GetObjectData_m3798_MethodInfo,
	&Exception_GetType_m3803_MethodInfo,
};
static bool ExecutionEngineException_t1849_VTableIsGenericMethod[] =
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
extern const Il2CppType ISerializable_t435_0_0_0;
extern const Il2CppType _Exception_t832_0_0_0;
static Il2CppInterfaceOffsetPair ExecutionEngineException_t1849_InterfacesOffsets[] = 
{
	{ &ISerializable_t435_0_0_0, 4},
	{ &_Exception_t832_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ExecutionEngineException_t1849_0_0_0;
extern const Il2CppType ExecutionEngineException_t1849_1_0_0;
extern const Il2CppType SystemException_t1194_0_0_0;
struct ExecutionEngineException_t1849;
const Il2CppTypeDefinitionMetadata ExecutionEngineException_t1849_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, ExecutionEngineException_t1849_InterfacesOffsets/* interfaceOffsets */
	, &SystemException_t1194_0_0_0/* parent */
	, ExecutionEngineException_t1849_VTable/* vtableMethods */
	, ExecutionEngineException_t1849_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ExecutionEngineException_t1849_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ExecutionEngineException"/* name */
	, "System"/* namespaze */
	, ExecutionEngineException_t1849_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ExecutionEngineException_t1849_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 876/* custom_attributes_cache */
	, &ExecutionEngineException_t1849_0_0_0/* byval_arg */
	, &ExecutionEngineException_t1849_1_0_0/* this_arg */
	, &ExecutionEngineException_t1849_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ExecutionEngineException_t1849)/* instance_size */
	, sizeof (ExecutionEngineException_t1849)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057025/* flags */
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
	, 11/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.FieldAccessException
#include "mscorlib_System_FieldAccessException.h"
// Metadata Definition System.FieldAccessException
extern TypeInfo FieldAccessException_t1850_il2cpp_TypeInfo;
// System.FieldAccessException
#include "mscorlib_System_FieldAccessExceptionMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.FieldAccessException::.ctor()
extern const MethodInfo FieldAccessException__ctor_m10150_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&FieldAccessException__ctor_m10150/* method */
	, &FieldAccessException_t1850_il2cpp_TypeInfo/* declaring_type */
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
	, 5154/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo FieldAccessException_t1850_FieldAccessException__ctor_m10151_ParameterInfos[] = 
{
	{"message", 0, 134224109, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.FieldAccessException::.ctor(System.String)
extern const MethodInfo FieldAccessException__ctor_m10151_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&FieldAccessException__ctor_m10151/* method */
	, &FieldAccessException_t1850_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, FieldAccessException_t1850_FieldAccessException__ctor_m10151_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5155/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo FieldAccessException_t1850_FieldAccessException__ctor_m10152_ParameterInfos[] = 
{
	{"info", 0, 134224110, 0, &SerializationInfo_t732_0_0_0},
	{"context", 1, 134224111, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.FieldAccessException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo FieldAccessException__ctor_m10152_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&FieldAccessException__ctor_m10152/* method */
	, &FieldAccessException_t1850_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, FieldAccessException_t1850_FieldAccessException__ctor_m10152_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5156/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* FieldAccessException_t1850_MethodInfos[] =
{
	&FieldAccessException__ctor_m10150_MethodInfo,
	&FieldAccessException__ctor_m10151_MethodInfo,
	&FieldAccessException__ctor_m10152_MethodInfo,
	NULL
};
static const Il2CppMethodReference FieldAccessException_t1850_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Exception_ToString_m3797_MethodInfo,
	&Exception_GetObjectData_m3798_MethodInfo,
	&Exception_get_InnerException_m3799_MethodInfo,
	&Exception_get_Message_m3800_MethodInfo,
	&Exception_get_Source_m3801_MethodInfo,
	&Exception_get_StackTrace_m3802_MethodInfo,
	&Exception_GetObjectData_m3798_MethodInfo,
	&Exception_GetType_m3803_MethodInfo,
};
static bool FieldAccessException_t1850_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair FieldAccessException_t1850_InterfacesOffsets[] = 
{
	{ &ISerializable_t435_0_0_0, 4},
	{ &_Exception_t832_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType FieldAccessException_t1850_0_0_0;
extern const Il2CppType FieldAccessException_t1850_1_0_0;
extern const Il2CppType MemberAccessException_t1851_0_0_0;
struct FieldAccessException_t1850;
const Il2CppTypeDefinitionMetadata FieldAccessException_t1850_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, FieldAccessException_t1850_InterfacesOffsets/* interfaceOffsets */
	, &MemberAccessException_t1851_0_0_0/* parent */
	, FieldAccessException_t1850_VTable/* vtableMethods */
	, FieldAccessException_t1850_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo FieldAccessException_t1850_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "FieldAccessException"/* name */
	, "System"/* namespaze */
	, FieldAccessException_t1850_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &FieldAccessException_t1850_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 877/* custom_attributes_cache */
	, &FieldAccessException_t1850_0_0_0/* byval_arg */
	, &FieldAccessException_t1850_1_0_0/* this_arg */
	, &FieldAccessException_t1850_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (FieldAccessException_t1850)/* instance_size */
	, sizeof (FieldAccessException_t1850)/* actualSize */
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
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// Metadata Definition System.FlagsAttribute
extern TypeInfo FlagsAttribute_t406_il2cpp_TypeInfo;
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.FlagsAttribute::.ctor()
extern const MethodInfo FlagsAttribute__ctor_m2067_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&FlagsAttribute__ctor_m2067/* method */
	, &FlagsAttribute_t406_il2cpp_TypeInfo/* declaring_type */
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
	, 5157/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* FlagsAttribute_t406_MethodInfos[] =
{
	&FlagsAttribute__ctor_m2067_MethodInfo,
	NULL
};
extern const MethodInfo Attribute_Equals_m3804_MethodInfo;
extern const MethodInfo Attribute_GetHashCode_m3664_MethodInfo;
extern const MethodInfo Object_ToString_m380_MethodInfo;
static const Il2CppMethodReference FlagsAttribute_t406_VTable[] =
{
	&Attribute_Equals_m3804_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Attribute_GetHashCode_m3664_MethodInfo,
	&Object_ToString_m380_MethodInfo,
};
static bool FlagsAttribute_t406_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern const Il2CppType _Attribute_t842_0_0_0;
static Il2CppInterfaceOffsetPair FlagsAttribute_t406_InterfacesOffsets[] = 
{
	{ &_Attribute_t842_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType FlagsAttribute_t406_0_0_0;
extern const Il2CppType FlagsAttribute_t406_1_0_0;
extern const Il2CppType Attribute_t544_0_0_0;
struct FlagsAttribute_t406;
const Il2CppTypeDefinitionMetadata FlagsAttribute_t406_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, FlagsAttribute_t406_InterfacesOffsets/* interfaceOffsets */
	, &Attribute_t544_0_0_0/* parent */
	, FlagsAttribute_t406_VTable/* vtableMethods */
	, FlagsAttribute_t406_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo FlagsAttribute_t406_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "FlagsAttribute"/* name */
	, "System"/* namespaze */
	, FlagsAttribute_t406_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &FlagsAttribute_t406_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 878/* custom_attributes_cache */
	, &FlagsAttribute_t406_0_0_0/* byval_arg */
	, &FlagsAttribute_t406_1_0_0/* this_arg */
	, &FlagsAttribute_t406_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (FlagsAttribute_t406)/* instance_size */
	, sizeof (FlagsAttribute_t406)/* actualSize */
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
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.FormatException
#include "mscorlib_System_FormatException.h"
// Metadata Definition System.FormatException
extern TypeInfo FormatException_t750_il2cpp_TypeInfo;
// System.FormatException
#include "mscorlib_System_FormatExceptionMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.FormatException::.ctor()
extern const MethodInfo FormatException__ctor_m10153_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&FormatException__ctor_m10153/* method */
	, &FormatException_t750_il2cpp_TypeInfo/* declaring_type */
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
	, 5158/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo FormatException_t750_FormatException__ctor_m3563_ParameterInfos[] = 
{
	{"message", 0, 134224112, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.FormatException::.ctor(System.String)
extern const MethodInfo FormatException__ctor_m3563_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&FormatException__ctor_m3563/* method */
	, &FormatException_t750_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, FormatException_t750_FormatException__ctor_m3563_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5159/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo FormatException_t750_FormatException__ctor_m5028_ParameterInfos[] = 
{
	{"info", 0, 134224113, 0, &SerializationInfo_t732_0_0_0},
	{"context", 1, 134224114, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.FormatException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo FormatException__ctor_m5028_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&FormatException__ctor_m5028/* method */
	, &FormatException_t750_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, FormatException_t750_FormatException__ctor_m5028_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5160/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* FormatException_t750_MethodInfos[] =
{
	&FormatException__ctor_m10153_MethodInfo,
	&FormatException__ctor_m3563_MethodInfo,
	&FormatException__ctor_m5028_MethodInfo,
	NULL
};
static const Il2CppMethodReference FormatException_t750_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Exception_ToString_m3797_MethodInfo,
	&Exception_GetObjectData_m3798_MethodInfo,
	&Exception_get_InnerException_m3799_MethodInfo,
	&Exception_get_Message_m3800_MethodInfo,
	&Exception_get_Source_m3801_MethodInfo,
	&Exception_get_StackTrace_m3802_MethodInfo,
	&Exception_GetObjectData_m3798_MethodInfo,
	&Exception_GetType_m3803_MethodInfo,
};
static bool FormatException_t750_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair FormatException_t750_InterfacesOffsets[] = 
{
	{ &ISerializable_t435_0_0_0, 4},
	{ &_Exception_t832_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType FormatException_t750_0_0_0;
extern const Il2CppType FormatException_t750_1_0_0;
struct FormatException_t750;
const Il2CppTypeDefinitionMetadata FormatException_t750_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, FormatException_t750_InterfacesOffsets/* interfaceOffsets */
	, &SystemException_t1194_0_0_0/* parent */
	, FormatException_t750_VTable/* vtableMethods */
	, FormatException_t750_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2374/* fieldStart */

};
TypeInfo FormatException_t750_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "FormatException"/* name */
	, "System"/* namespaze */
	, FormatException_t750_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &FormatException_t750_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 879/* custom_attributes_cache */
	, &FormatException_t750_0_0_0/* byval_arg */
	, &FormatException_t750_1_0_0/* this_arg */
	, &FormatException_t750_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (FormatException_t750)/* instance_size */
	, sizeof (FormatException_t750)/* actualSize */
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
	, 3/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.GC
#include "mscorlib_System_GC.h"
// Metadata Definition System.GC
extern TypeInfo GC_t1852_il2cpp_TypeInfo;
// System.GC
#include "mscorlib_System_GCMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo GC_t1852_GC_SuppressFinalize_m5969_ParameterInfos[] = 
{
	{"obj", 0, 134224115, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.GC::SuppressFinalize(System.Object)
extern const MethodInfo GC_SuppressFinalize_m5969_MethodInfo = 
{
	"SuppressFinalize"/* name */
	, (methodPointerType)&GC_SuppressFinalize_m5969/* method */
	, &GC_t1852_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, GC_t1852_GC_SuppressFinalize_m5969_ParameterInfos/* parameters */
	, 880/* custom_attributes_cache */
	, 150/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5161/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* GC_t1852_MethodInfos[] =
{
	&GC_SuppressFinalize_m5969_MethodInfo,
	NULL
};
static const Il2CppMethodReference GC_t1852_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
};
static bool GC_t1852_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType GC_t1852_0_0_0;
extern const Il2CppType GC_t1852_1_0_0;
struct GC_t1852;
const Il2CppTypeDefinitionMetadata GC_t1852_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, GC_t1852_VTable/* vtableMethods */
	, GC_t1852_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo GC_t1852_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC"/* name */
	, "System"/* namespaze */
	, GC_t1852_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &GC_t1852_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &GC_t1852_0_0_0/* byval_arg */
	, &GC_t1852_1_0_0/* this_arg */
	, &GC_t1852_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_t1852)/* instance_size */
	, sizeof (GC_t1852)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048961/* flags */
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
// System.Guid
#include "mscorlib_System_Guid.h"
// Metadata Definition System.Guid
extern TypeInfo Guid_t776_il2cpp_TypeInfo;
// System.Guid
#include "mscorlib_System_GuidMethodDeclarations.h"
extern const Il2CppType ByteU5BU5D_t551_0_0_0;
extern const Il2CppType ByteU5BU5D_t551_0_0_0;
static const ParameterInfo Guid_t776_Guid__ctor_m10154_ParameterInfos[] = 
{
	{"b", 0, 134224116, 0, &ByteU5BU5D_t551_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Guid::.ctor(System.Byte[])
extern const MethodInfo Guid__ctor_m10154_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Guid__ctor_m10154/* method */
	, &Guid_t776_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, Guid_t776_Guid__ctor_m10154_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5162/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int16_t455_0_0_0;
extern const Il2CppType Int16_t455_0_0_0;
extern const Il2CppType Int16_t455_0_0_0;
extern const Il2CppType Byte_t366_0_0_0;
extern const Il2CppType Byte_t366_0_0_0;
extern const Il2CppType Byte_t366_0_0_0;
extern const Il2CppType Byte_t366_0_0_0;
extern const Il2CppType Byte_t366_0_0_0;
extern const Il2CppType Byte_t366_0_0_0;
extern const Il2CppType Byte_t366_0_0_0;
extern const Il2CppType Byte_t366_0_0_0;
extern const Il2CppType Byte_t366_0_0_0;
static const ParameterInfo Guid_t776_Guid__ctor_m10155_ParameterInfos[] = 
{
	{"a", 0, 134224117, 0, &Int32_t75_0_0_0},
	{"b", 1, 134224118, 0, &Int16_t455_0_0_0},
	{"c", 2, 134224119, 0, &Int16_t455_0_0_0},
	{"d", 3, 134224120, 0, &Byte_t366_0_0_0},
	{"e", 4, 134224121, 0, &Byte_t366_0_0_0},
	{"f", 5, 134224122, 0, &Byte_t366_0_0_0},
	{"g", 6, 134224123, 0, &Byte_t366_0_0_0},
	{"h", 7, 134224124, 0, &Byte_t366_0_0_0},
	{"i", 8, 134224125, 0, &Byte_t366_0_0_0},
	{"j", 9, 134224126, 0, &Byte_t366_0_0_0},
	{"k", 10, 134224127, 0, &Byte_t366_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75_Int16_t455_Int16_t455_SByte_t113_SByte_t113_SByte_t113_SByte_t113_SByte_t113_SByte_t113_SByte_t113_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Guid::.ctor(System.Int32,System.Int16,System.Int16,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte)
extern const MethodInfo Guid__ctor_m10155_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Guid__ctor_m10155/* method */
	, &Guid_t776_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75_Int16_t455_Int16_t455_SByte_t113_SByte_t113_SByte_t113_SByte_t113_SByte_t113_SByte_t113_SByte_t113_SByte_t113/* invoker_method */
	, Guid_t776_Guid__ctor_m10155_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 11/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5163/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Guid::.cctor()
extern const MethodInfo Guid__cctor_m10156_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&Guid__cctor_m10156/* method */
	, &Guid_t776_il2cpp_TypeInfo/* declaring_type */
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
	, 5164/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo Guid_t776_Guid_CheckNull_m10157_ParameterInfos[] = 
{
	{"o", 0, 134224128, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Guid::CheckNull(System.Object)
extern const MethodInfo Guid_CheckNull_m10157_MethodInfo = 
{
	"CheckNull"/* name */
	, (methodPointerType)&Guid_CheckNull_m10157/* method */
	, &Guid_t776_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, Guid_t776_Guid_CheckNull_m10157_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5165/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ByteU5BU5D_t551_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo Guid_t776_Guid_CheckLength_m10158_ParameterInfos[] = 
{
	{"o", 0, 134224129, 0, &ByteU5BU5D_t551_0_0_0},
	{"l", 1, 134224130, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Guid::CheckLength(System.Byte[],System.Int32)
extern const MethodInfo Guid_CheckLength_m10158_MethodInfo = 
{
	"CheckLength"/* name */
	, (methodPointerType)&Guid_CheckLength_m10158/* method */
	, &Guid_t776_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Int32_t75/* invoker_method */
	, Guid_t776_Guid_CheckLength_m10158_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5166/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ByteU5BU5D_t551_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo Guid_t776_Guid_CheckArray_m10159_ParameterInfos[] = 
{
	{"o", 0, 134224131, 0, &ByteU5BU5D_t551_0_0_0},
	{"l", 1, 134224132, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Guid::CheckArray(System.Byte[],System.Int32)
extern const MethodInfo Guid_CheckArray_m10159_MethodInfo = 
{
	"CheckArray"/* name */
	, (methodPointerType)&Guid_CheckArray_m10159/* method */
	, &Guid_t776_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Int32_t75/* invoker_method */
	, Guid_t776_Guid_CheckArray_m10159_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5167/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo Guid_t776_Guid_Compare_m10160_ParameterInfos[] = 
{
	{"x", 0, 134224133, 0, &Int32_t75_0_0_0},
	{"y", 1, 134224134, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Int32_t75_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Guid::Compare(System.Int32,System.Int32)
extern const MethodInfo Guid_Compare_m10160_MethodInfo = 
{
	"Compare"/* name */
	, (methodPointerType)&Guid_Compare_m10160/* method */
	, &Guid_t776_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Int32_t75_Int32_t75/* invoker_method */
	, Guid_t776_Guid_Compare_m10160_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5168/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo Guid_t776_Guid_CompareTo_m10161_ParameterInfos[] = 
{
	{"value", 0, 134224135, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Guid::CompareTo(System.Object)
extern const MethodInfo Guid_CompareTo_m10161_MethodInfo = 
{
	"CompareTo"/* name */
	, (methodPointerType)&Guid_CompareTo_m10161/* method */
	, &Guid_t776_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Object_t/* invoker_method */
	, Guid_t776_Guid_CompareTo_m10161_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5169/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo Guid_t776_Guid_Equals_m10162_ParameterInfos[] = 
{
	{"o", 0, 134224136, 0, &Object_t_0_0_0},
};
extern const Il2CppType Boolean_t111_0_0_0;
extern void* RuntimeInvoker_Boolean_t111_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Guid::Equals(System.Object)
extern const MethodInfo Guid_Equals_m10162_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&Guid_Equals_m10162/* method */
	, &Guid_t776_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Object_t/* invoker_method */
	, Guid_t776_Guid_Equals_m10162_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5170/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Guid_t776_0_0_0;
extern const Il2CppType Guid_t776_0_0_0;
static const ParameterInfo Guid_t776_Guid_CompareTo_m10163_ParameterInfos[] = 
{
	{"value", 0, 134224137, 0, &Guid_t776_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Guid_t776 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Guid::CompareTo(System.Guid)
extern const MethodInfo Guid_CompareTo_m10163_MethodInfo = 
{
	"CompareTo"/* name */
	, (methodPointerType)&Guid_CompareTo_m10163/* method */
	, &Guid_t776_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Guid_t776/* invoker_method */
	, Guid_t776_Guid_CompareTo_m10163_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5171/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Guid_t776_0_0_0;
static const ParameterInfo Guid_t776_Guid_Equals_m10164_ParameterInfos[] = 
{
	{"g", 0, 134224138, 0, &Guid_t776_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Guid_t776 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Guid::Equals(System.Guid)
extern const MethodInfo Guid_Equals_m10164_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&Guid_Equals_m10164/* method */
	, &Guid_t776_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Guid_t776/* invoker_method */
	, Guid_t776_Guid_Equals_m10164_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5172/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Guid::GetHashCode()
extern const MethodInfo Guid_GetHashCode_m10165_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&Guid_GetHashCode_m10165/* method */
	, &Guid_t776_il2cpp_TypeInfo/* declaring_type */
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
	, 5173/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo Guid_t776_Guid_ToHex_m10166_ParameterInfos[] = 
{
	{"b", 0, 134224139, 0, &Int32_t75_0_0_0},
};
extern const Il2CppType Char_t103_0_0_0;
extern void* RuntimeInvoker_Char_t103_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Char System.Guid::ToHex(System.Int32)
extern const MethodInfo Guid_ToHex_m10166_MethodInfo = 
{
	"ToHex"/* name */
	, (methodPointerType)&Guid_ToHex_m10166/* method */
	, &Guid_t776_il2cpp_TypeInfo/* declaring_type */
	, &Char_t103_0_0_0/* return_type */
	, RuntimeInvoker_Char_t103_Int32_t75/* invoker_method */
	, Guid_t776_Guid_ToHex_m10166_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5174/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Guid_t776 (const MethodInfo* method, void* obj, void** args);
// System.Guid System.Guid::NewGuid()
extern const MethodInfo Guid_NewGuid_m10167_MethodInfo = 
{
	"NewGuid"/* name */
	, (methodPointerType)&Guid_NewGuid_m10167/* method */
	, &Guid_t776_il2cpp_TypeInfo/* declaring_type */
	, &Guid_t776_0_0_0/* return_type */
	, RuntimeInvoker_Guid_t776/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5175/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType StringBuilder_t343_0_0_0;
extern const Il2CppType StringBuilder_t343_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo Guid_t776_Guid_AppendInt_m10168_ParameterInfos[] = 
{
	{"builder", 0, 134224140, 0, &StringBuilder_t343_0_0_0},
	{"value", 1, 134224141, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Guid::AppendInt(System.Text.StringBuilder,System.Int32)
extern const MethodInfo Guid_AppendInt_m10168_MethodInfo = 
{
	"AppendInt"/* name */
	, (methodPointerType)&Guid_AppendInt_m10168/* method */
	, &Guid_t776_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Int32_t75/* invoker_method */
	, Guid_t776_Guid_AppendInt_m10168_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5176/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType StringBuilder_t343_0_0_0;
extern const Il2CppType Int16_t455_0_0_0;
static const ParameterInfo Guid_t776_Guid_AppendShort_m10169_ParameterInfos[] = 
{
	{"builder", 0, 134224142, 0, &StringBuilder_t343_0_0_0},
	{"value", 1, 134224143, 0, &Int16_t455_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Int16_t455 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Guid::AppendShort(System.Text.StringBuilder,System.Int16)
extern const MethodInfo Guid_AppendShort_m10169_MethodInfo = 
{
	"AppendShort"/* name */
	, (methodPointerType)&Guid_AppendShort_m10169/* method */
	, &Guid_t776_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Int16_t455/* invoker_method */
	, Guid_t776_Guid_AppendShort_m10169_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5177/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType StringBuilder_t343_0_0_0;
extern const Il2CppType Byte_t366_0_0_0;
static const ParameterInfo Guid_t776_Guid_AppendByte_m10170_ParameterInfos[] = 
{
	{"builder", 0, 134224144, 0, &StringBuilder_t343_0_0_0},
	{"value", 1, 134224145, 0, &Byte_t366_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Guid::AppendByte(System.Text.StringBuilder,System.Byte)
extern const MethodInfo Guid_AppendByte_m10170_MethodInfo = 
{
	"AppendByte"/* name */
	, (methodPointerType)&Guid_AppendByte_m10170/* method */
	, &Guid_t776_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_SByte_t113/* invoker_method */
	, Guid_t776_Guid_AppendByte_m10170_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5178/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo Guid_t776_Guid_BaseToString_m10171_ParameterInfos[] = 
{
	{"h", 0, 134224146, 0, &Boolean_t111_0_0_0},
	{"p", 1, 134224147, 0, &Boolean_t111_0_0_0},
	{"b", 2, 134224148, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Object_t_SByte_t113_SByte_t113_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.String System.Guid::BaseToString(System.Boolean,System.Boolean,System.Boolean)
extern const MethodInfo Guid_BaseToString_m10171_MethodInfo = 
{
	"BaseToString"/* name */
	, (methodPointerType)&Guid_BaseToString_m10171/* method */
	, &Guid_t776_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_SByte_t113_SByte_t113_SByte_t113/* invoker_method */
	, Guid_t776_Guid_BaseToString_m10171_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5179/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Guid::ToString()
extern const MethodInfo Guid_ToString_m10172_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&Guid_ToString_m10172/* method */
	, &Guid_t776_il2cpp_TypeInfo/* declaring_type */
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
	, 5180/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Guid_t776_Guid_ToString_m3624_ParameterInfos[] = 
{
	{"format", 0, 134224149, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Guid::ToString(System.String)
extern const MethodInfo Guid_ToString_m3624_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&Guid_ToString_m3624/* method */
	, &Guid_t776_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Guid_t776_Guid_ToString_m3624_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5181/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType IFormatProvider_t1912_0_0_0;
extern const Il2CppType IFormatProvider_t1912_0_0_0;
static const ParameterInfo Guid_t776_Guid_ToString_m10173_ParameterInfos[] = 
{
	{"format", 0, 134224150, 0, &String_t_0_0_0},
	{"provider", 1, 134224151, 0, &IFormatProvider_t1912_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Guid::ToString(System.String,System.IFormatProvider)
extern const MethodInfo Guid_ToString_m10173_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&Guid_ToString_m10173/* method */
	, &Guid_t776_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, Guid_t776_Guid_ToString_m10173_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5182/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Guid_t776_MethodInfos[] =
{
	&Guid__ctor_m10154_MethodInfo,
	&Guid__ctor_m10155_MethodInfo,
	&Guid__cctor_m10156_MethodInfo,
	&Guid_CheckNull_m10157_MethodInfo,
	&Guid_CheckLength_m10158_MethodInfo,
	&Guid_CheckArray_m10159_MethodInfo,
	&Guid_Compare_m10160_MethodInfo,
	&Guid_CompareTo_m10161_MethodInfo,
	&Guid_Equals_m10162_MethodInfo,
	&Guid_CompareTo_m10163_MethodInfo,
	&Guid_Equals_m10164_MethodInfo,
	&Guid_GetHashCode_m10165_MethodInfo,
	&Guid_ToHex_m10166_MethodInfo,
	&Guid_NewGuid_m10167_MethodInfo,
	&Guid_AppendInt_m10168_MethodInfo,
	&Guid_AppendShort_m10169_MethodInfo,
	&Guid_AppendByte_m10170_MethodInfo,
	&Guid_BaseToString_m10171_MethodInfo,
	&Guid_ToString_m10172_MethodInfo,
	&Guid_ToString_m3624_MethodInfo,
	&Guid_ToString_m10173_MethodInfo,
	NULL
};
extern const MethodInfo Guid_Equals_m10162_MethodInfo;
extern const MethodInfo Guid_GetHashCode_m10165_MethodInfo;
extern const MethodInfo Guid_ToString_m10172_MethodInfo;
extern const MethodInfo Guid_ToString_m10173_MethodInfo;
extern const MethodInfo Guid_CompareTo_m10161_MethodInfo;
extern const MethodInfo Guid_CompareTo_m10163_MethodInfo;
extern const MethodInfo Guid_Equals_m10164_MethodInfo;
static const Il2CppMethodReference Guid_t776_VTable[] =
{
	&Guid_Equals_m10162_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Guid_GetHashCode_m10165_MethodInfo,
	&Guid_ToString_m10172_MethodInfo,
	&Guid_ToString_m10173_MethodInfo,
	&Guid_CompareTo_m10161_MethodInfo,
	&Guid_CompareTo_m10163_MethodInfo,
	&Guid_Equals_m10164_MethodInfo,
};
static bool Guid_t776_VTableIsGenericMethod[] =
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
extern const Il2CppType IFormattable_t428_0_0_0;
extern const Il2CppType IComparable_t430_0_0_0;
extern const Il2CppType IComparable_1_t2406_0_0_0;
extern const Il2CppType IEquatable_1_t2407_0_0_0;
static const Il2CppType* Guid_t776_InterfacesTypeInfos[] = 
{
	&IFormattable_t428_0_0_0,
	&IComparable_t430_0_0_0,
	&IComparable_1_t2406_0_0_0,
	&IEquatable_1_t2407_0_0_0,
};
static Il2CppInterfaceOffsetPair Guid_t776_InterfacesOffsets[] = 
{
	{ &IFormattable_t428_0_0_0, 4},
	{ &IComparable_t430_0_0_0, 5},
	{ &IComparable_1_t2406_0_0_0, 6},
	{ &IEquatable_1_t2407_0_0_0, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType Guid_t776_1_0_0;
extern const Il2CppType ValueType_t446_0_0_0;
const Il2CppTypeDefinitionMetadata Guid_t776_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, Guid_t776_InterfacesTypeInfos/* implementedInterfaces */
	, Guid_t776_InterfacesOffsets/* interfaceOffsets */
	, &ValueType_t446_0_0_0/* parent */
	, Guid_t776_VTable/* vtableMethods */
	, Guid_t776_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2375/* fieldStart */

};
TypeInfo Guid_t776_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Guid"/* name */
	, "System"/* namespaze */
	, Guid_t776_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Guid_t776_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 881/* custom_attributes_cache */
	, &Guid_t776_0_0_0/* byval_arg */
	, &Guid_t776_1_0_0/* this_arg */
	, &Guid_t776_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Guid_t776)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (Guid_t776)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(Guid_t776 )/* native_size */
	, sizeof(Guid_t776_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8457/* flags */
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
	, true/* has_cctor */
	, true/* is_blittable */
	, 21/* method_count */
	, 0/* property_count */
	, 14/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 4/* interfaces_count */
	, 4/* interface_offsets_count */

};
// Metadata Definition System.ICustomFormatter
extern TypeInfo ICustomFormatter_t1929_il2cpp_TypeInfo;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IFormatProvider_t1912_0_0_0;
static const ParameterInfo ICustomFormatter_t1929_ICustomFormatter_Format_m11203_ParameterInfos[] = 
{
	{"format", 0, 134224152, 0, &String_t_0_0_0},
	{"arg", 1, 134224153, 0, &Object_t_0_0_0},
	{"formatProvider", 2, 134224154, 0, &IFormatProvider_t1912_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.ICustomFormatter::Format(System.String,System.Object,System.IFormatProvider)
extern const MethodInfo ICustomFormatter_Format_m11203_MethodInfo = 
{
	"Format"/* name */
	, NULL/* method */
	, &ICustomFormatter_t1929_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, ICustomFormatter_t1929_ICustomFormatter_Format_m11203_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5183/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ICustomFormatter_t1929_MethodInfos[] =
{
	&ICustomFormatter_Format_m11203_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ICustomFormatter_t1929_0_0_0;
extern const Il2CppType ICustomFormatter_t1929_1_0_0;
struct ICustomFormatter_t1929;
const Il2CppTypeDefinitionMetadata ICustomFormatter_t1929_DefinitionMetadata = 
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
TypeInfo ICustomFormatter_t1929_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICustomFormatter"/* name */
	, "System"/* namespaze */
	, ICustomFormatter_t1929_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ICustomFormatter_t1929_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 882/* custom_attributes_cache */
	, &ICustomFormatter_t1929_0_0_0/* byval_arg */
	, &ICustomFormatter_t1929_1_0_0/* this_arg */
	, &ICustomFormatter_t1929_DefinitionMetadata/* definitionMetadata */
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
	, 161/* flags */
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
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition System.IFormatProvider
extern TypeInfo IFormatProvider_t1912_il2cpp_TypeInfo;
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo IFormatProvider_t1912_IFormatProvider_GetFormat_m11204_ParameterInfos[] = 
{
	{"formatType", 0, 134224155, 0, &Type_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.IFormatProvider::GetFormat(System.Type)
extern const MethodInfo IFormatProvider_GetFormat_m11204_MethodInfo = 
{
	"GetFormat"/* name */
	, NULL/* method */
	, &IFormatProvider_t1912_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, IFormatProvider_t1912_IFormatProvider_GetFormat_m11204_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5184/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* IFormatProvider_t1912_MethodInfos[] =
{
	&IFormatProvider_GetFormat_m11204_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType IFormatProvider_t1912_1_0_0;
struct IFormatProvider_t1912;
const Il2CppTypeDefinitionMetadata IFormatProvider_t1912_DefinitionMetadata = 
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
TypeInfo IFormatProvider_t1912_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IFormatProvider"/* name */
	, "System"/* namespaze */
	, IFormatProvider_t1912_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &IFormatProvider_t1912_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 883/* custom_attributes_cache */
	, &IFormatProvider_t1912_0_0_0/* byval_arg */
	, &IFormatProvider_t1912_1_0_0/* this_arg */
	, &IFormatProvider_t1912_DefinitionMetadata/* definitionMetadata */
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
	, 161/* flags */
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
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeException.h"
// Metadata Definition System.IndexOutOfRangeException
extern TypeInfo IndexOutOfRangeException_t745_il2cpp_TypeInfo;
// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeExceptionMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.IndexOutOfRangeException::.ctor()
extern const MethodInfo IndexOutOfRangeException__ctor_m10174_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&IndexOutOfRangeException__ctor_m10174/* method */
	, &IndexOutOfRangeException_t745_il2cpp_TypeInfo/* declaring_type */
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
	, 5185/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo IndexOutOfRangeException_t745_IndexOutOfRangeException__ctor_m3529_ParameterInfos[] = 
{
	{"message", 0, 134224156, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
extern const MethodInfo IndexOutOfRangeException__ctor_m3529_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&IndexOutOfRangeException__ctor_m3529/* method */
	, &IndexOutOfRangeException_t745_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, IndexOutOfRangeException_t745_IndexOutOfRangeException__ctor_m3529_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5186/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo IndexOutOfRangeException_t745_IndexOutOfRangeException__ctor_m10175_ParameterInfos[] = 
{
	{"info", 0, 134224157, 0, &SerializationInfo_t732_0_0_0},
	{"context", 1, 134224158, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.IndexOutOfRangeException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo IndexOutOfRangeException__ctor_m10175_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&IndexOutOfRangeException__ctor_m10175/* method */
	, &IndexOutOfRangeException_t745_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, IndexOutOfRangeException_t745_IndexOutOfRangeException__ctor_m10175_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5187/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* IndexOutOfRangeException_t745_MethodInfos[] =
{
	&IndexOutOfRangeException__ctor_m10174_MethodInfo,
	&IndexOutOfRangeException__ctor_m3529_MethodInfo,
	&IndexOutOfRangeException__ctor_m10175_MethodInfo,
	NULL
};
static const Il2CppMethodReference IndexOutOfRangeException_t745_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Exception_ToString_m3797_MethodInfo,
	&Exception_GetObjectData_m3798_MethodInfo,
	&Exception_get_InnerException_m3799_MethodInfo,
	&Exception_get_Message_m3800_MethodInfo,
	&Exception_get_Source_m3801_MethodInfo,
	&Exception_get_StackTrace_m3802_MethodInfo,
	&Exception_GetObjectData_m3798_MethodInfo,
	&Exception_GetType_m3803_MethodInfo,
};
static bool IndexOutOfRangeException_t745_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair IndexOutOfRangeException_t745_InterfacesOffsets[] = 
{
	{ &ISerializable_t435_0_0_0, 4},
	{ &_Exception_t832_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType IndexOutOfRangeException_t745_0_0_0;
extern const Il2CppType IndexOutOfRangeException_t745_1_0_0;
struct IndexOutOfRangeException_t745;
const Il2CppTypeDefinitionMetadata IndexOutOfRangeException_t745_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, IndexOutOfRangeException_t745_InterfacesOffsets/* interfaceOffsets */
	, &SystemException_t1194_0_0_0/* parent */
	, IndexOutOfRangeException_t745_VTable/* vtableMethods */
	, IndexOutOfRangeException_t745_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo IndexOutOfRangeException_t745_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IndexOutOfRangeException"/* name */
	, "System"/* namespaze */
	, IndexOutOfRangeException_t745_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &IndexOutOfRangeException_t745_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 884/* custom_attributes_cache */
	, &IndexOutOfRangeException_t745_0_0_0/* byval_arg */
	, &IndexOutOfRangeException_t745_1_0_0/* this_arg */
	, &IndexOutOfRangeException_t745_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (IndexOutOfRangeException_t745)/* instance_size */
	, sizeof (IndexOutOfRangeException_t745)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057025/* flags */
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
	, 11/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.InvalidCastException
#include "mscorlib_System_InvalidCastException.h"
// Metadata Definition System.InvalidCastException
extern TypeInfo InvalidCastException_t1853_il2cpp_TypeInfo;
// System.InvalidCastException
#include "mscorlib_System_InvalidCastExceptionMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.InvalidCastException::.ctor()
extern const MethodInfo InvalidCastException__ctor_m10176_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvalidCastException__ctor_m10176/* method */
	, &InvalidCastException_t1853_il2cpp_TypeInfo/* declaring_type */
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
	, 5188/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo InvalidCastException_t1853_InvalidCastException__ctor_m10177_ParameterInfos[] = 
{
	{"message", 0, 134224159, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.InvalidCastException::.ctor(System.String)
extern const MethodInfo InvalidCastException__ctor_m10177_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvalidCastException__ctor_m10177/* method */
	, &InvalidCastException_t1853_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, InvalidCastException_t1853_InvalidCastException__ctor_m10177_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5189/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo InvalidCastException_t1853_InvalidCastException__ctor_m10178_ParameterInfos[] = 
{
	{"info", 0, 134224160, 0, &SerializationInfo_t732_0_0_0},
	{"context", 1, 134224161, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.InvalidCastException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo InvalidCastException__ctor_m10178_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvalidCastException__ctor_m10178/* method */
	, &InvalidCastException_t1853_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, InvalidCastException_t1853_InvalidCastException__ctor_m10178_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5190/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* InvalidCastException_t1853_MethodInfos[] =
{
	&InvalidCastException__ctor_m10176_MethodInfo,
	&InvalidCastException__ctor_m10177_MethodInfo,
	&InvalidCastException__ctor_m10178_MethodInfo,
	NULL
};
static const Il2CppMethodReference InvalidCastException_t1853_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Exception_ToString_m3797_MethodInfo,
	&Exception_GetObjectData_m3798_MethodInfo,
	&Exception_get_InnerException_m3799_MethodInfo,
	&Exception_get_Message_m3800_MethodInfo,
	&Exception_get_Source_m3801_MethodInfo,
	&Exception_get_StackTrace_m3802_MethodInfo,
	&Exception_GetObjectData_m3798_MethodInfo,
	&Exception_GetType_m3803_MethodInfo,
};
static bool InvalidCastException_t1853_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair InvalidCastException_t1853_InterfacesOffsets[] = 
{
	{ &ISerializable_t435_0_0_0, 4},
	{ &_Exception_t832_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType InvalidCastException_t1853_0_0_0;
extern const Il2CppType InvalidCastException_t1853_1_0_0;
struct InvalidCastException_t1853;
const Il2CppTypeDefinitionMetadata InvalidCastException_t1853_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, InvalidCastException_t1853_InterfacesOffsets/* interfaceOffsets */
	, &SystemException_t1194_0_0_0/* parent */
	, InvalidCastException_t1853_VTable/* vtableMethods */
	, InvalidCastException_t1853_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2389/* fieldStart */

};
TypeInfo InvalidCastException_t1853_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvalidCastException"/* name */
	, "System"/* namespaze */
	, InvalidCastException_t1853_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &InvalidCastException_t1853_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 885/* custom_attributes_cache */
	, &InvalidCastException_t1853_0_0_0/* byval_arg */
	, &InvalidCastException_t1853_1_0_0/* this_arg */
	, &InvalidCastException_t1853_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvalidCastException_t1853)/* instance_size */
	, sizeof (InvalidCastException_t1853)/* actualSize */
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
	, 3/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// Metadata Definition System.InvalidOperationException
extern TypeInfo InvalidOperationException_t1172_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.InvalidOperationException::.ctor()
extern const MethodInfo InvalidOperationException__ctor_m4870_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvalidOperationException__ctor_m4870/* method */
	, &InvalidOperationException_t1172_il2cpp_TypeInfo/* declaring_type */
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
	, 5191/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo InvalidOperationException_t1172_InvalidOperationException__ctor_m4864_ParameterInfos[] = 
{
	{"message", 0, 134224162, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.InvalidOperationException::.ctor(System.String)
extern const MethodInfo InvalidOperationException__ctor_m4864_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvalidOperationException__ctor_m4864/* method */
	, &InvalidOperationException_t1172_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, InvalidOperationException_t1172_InvalidOperationException__ctor_m4864_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5192/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Exception_t65_0_0_0;
extern const Il2CppType Exception_t65_0_0_0;
static const ParameterInfo InvalidOperationException_t1172_InvalidOperationException__ctor_m10179_ParameterInfos[] = 
{
	{"message", 0, 134224163, 0, &String_t_0_0_0},
	{"innerException", 1, 134224164, 0, &Exception_t65_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
extern const MethodInfo InvalidOperationException__ctor_m10179_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvalidOperationException__ctor_m10179/* method */
	, &InvalidOperationException_t1172_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Object_t/* invoker_method */
	, InvalidOperationException_t1172_InvalidOperationException__ctor_m10179_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5193/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo InvalidOperationException_t1172_InvalidOperationException__ctor_m10180_ParameterInfos[] = 
{
	{"info", 0, 134224165, 0, &SerializationInfo_t732_0_0_0},
	{"context", 1, 134224166, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.InvalidOperationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo InvalidOperationException__ctor_m10180_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvalidOperationException__ctor_m10180/* method */
	, &InvalidOperationException_t1172_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, InvalidOperationException_t1172_InvalidOperationException__ctor_m10180_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5194/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* InvalidOperationException_t1172_MethodInfos[] =
{
	&InvalidOperationException__ctor_m4870_MethodInfo,
	&InvalidOperationException__ctor_m4864_MethodInfo,
	&InvalidOperationException__ctor_m10179_MethodInfo,
	&InvalidOperationException__ctor_m10180_MethodInfo,
	NULL
};
static const Il2CppMethodReference InvalidOperationException_t1172_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Exception_ToString_m3797_MethodInfo,
	&Exception_GetObjectData_m3798_MethodInfo,
	&Exception_get_InnerException_m3799_MethodInfo,
	&Exception_get_Message_m3800_MethodInfo,
	&Exception_get_Source_m3801_MethodInfo,
	&Exception_get_StackTrace_m3802_MethodInfo,
	&Exception_GetObjectData_m3798_MethodInfo,
	&Exception_GetType_m3803_MethodInfo,
};
static bool InvalidOperationException_t1172_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair InvalidOperationException_t1172_InterfacesOffsets[] = 
{
	{ &ISerializable_t435_0_0_0, 4},
	{ &_Exception_t832_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType InvalidOperationException_t1172_0_0_0;
extern const Il2CppType InvalidOperationException_t1172_1_0_0;
struct InvalidOperationException_t1172;
const Il2CppTypeDefinitionMetadata InvalidOperationException_t1172_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, InvalidOperationException_t1172_InterfacesOffsets/* interfaceOffsets */
	, &SystemException_t1194_0_0_0/* parent */
	, InvalidOperationException_t1172_VTable/* vtableMethods */
	, InvalidOperationException_t1172_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2390/* fieldStart */

};
TypeInfo InvalidOperationException_t1172_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvalidOperationException"/* name */
	, "System"/* namespaze */
	, InvalidOperationException_t1172_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &InvalidOperationException_t1172_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 886/* custom_attributes_cache */
	, &InvalidOperationException_t1172_0_0_0/* byval_arg */
	, &InvalidOperationException_t1172_1_0_0/* this_arg */
	, &InvalidOperationException_t1172_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvalidOperationException_t1172)/* instance_size */
	, sizeof (InvalidOperationException_t1172)/* actualSize */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.LoaderOptimization
#include "mscorlib_System_LoaderOptimization.h"
// Metadata Definition System.LoaderOptimization
extern TypeInfo LoaderOptimization_t1854_il2cpp_TypeInfo;
// System.LoaderOptimization
#include "mscorlib_System_LoaderOptimizationMethodDeclarations.h"
static const MethodInfo* LoaderOptimization_t1854_MethodInfos[] =
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
static const Il2CppMethodReference LoaderOptimization_t1854_VTable[] =
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
static bool LoaderOptimization_t1854_VTableIsGenericMethod[] =
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
extern const Il2CppType IConvertible_t429_0_0_0;
static Il2CppInterfaceOffsetPair LoaderOptimization_t1854_InterfacesOffsets[] = 
{
	{ &IFormattable_t428_0_0_0, 4},
	{ &IConvertible_t429_0_0_0, 5},
	{ &IComparable_t430_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType LoaderOptimization_t1854_0_0_0;
extern const Il2CppType LoaderOptimization_t1854_1_0_0;
extern const Il2CppType Enum_t431_0_0_0;
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo Int32_t75_il2cpp_TypeInfo;
const Il2CppTypeDefinitionMetadata LoaderOptimization_t1854_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, LoaderOptimization_t1854_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t431_0_0_0/* parent */
	, LoaderOptimization_t1854_VTable/* vtableMethods */
	, LoaderOptimization_t1854_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2391/* fieldStart */

};
TypeInfo LoaderOptimization_t1854_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "LoaderOptimization"/* name */
	, "System"/* namespaze */
	, LoaderOptimization_t1854_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Int32_t75_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 887/* custom_attributes_cache */
	, &LoaderOptimization_t1854_0_0_0/* byval_arg */
	, &LoaderOptimization_t1854_1_0_0/* this_arg */
	, &LoaderOptimization_t1854_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (LoaderOptimization_t1854)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (LoaderOptimization_t1854)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8449/* flags */
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
	, 7/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.Math
#include "mscorlib_System_Math.h"
// Metadata Definition System.Math
extern TypeInfo Math_t1855_il2cpp_TypeInfo;
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
extern const Il2CppType Single_t345_0_0_0;
extern const Il2CppType Single_t345_0_0_0;
static const ParameterInfo Math_t1855_Math_Abs_m10181_ParameterInfos[] = 
{
	{"value", 0, 134224167, 0, &Single_t345_0_0_0},
};
extern void* RuntimeInvoker_Single_t345_Single_t345 (const MethodInfo* method, void* obj, void** args);
// System.Single System.Math::Abs(System.Single)
extern const MethodInfo Math_Abs_m10181_MethodInfo = 
{
	"Abs"/* name */
	, (methodPointerType)&Math_Abs_m10181/* method */
	, &Math_t1855_il2cpp_TypeInfo/* declaring_type */
	, &Single_t345_0_0_0/* return_type */
	, RuntimeInvoker_Single_t345_Single_t345/* invoker_method */
	, Math_t1855_Math_Abs_m10181_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5195/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo Math_t1855_Math_Abs_m10182_ParameterInfos[] = 
{
	{"value", 0, 134224168, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Math::Abs(System.Int32)
extern const MethodInfo Math_Abs_m10182_MethodInfo = 
{
	"Abs"/* name */
	, (methodPointerType)&Math_Abs_m10182/* method */
	, &Math_t1855_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Int32_t75/* invoker_method */
	, Math_t1855_Math_Abs_m10182_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5196/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int64_t760_0_0_0;
extern const Il2CppType Int64_t760_0_0_0;
static const ParameterInfo Math_t1855_Math_Abs_m10183_ParameterInfos[] = 
{
	{"value", 0, 134224169, 0, &Int64_t760_0_0_0},
};
extern void* RuntimeInvoker_Int64_t760_Int64_t760 (const MethodInfo* method, void* obj, void** args);
// System.Int64 System.Math::Abs(System.Int64)
extern const MethodInfo Math_Abs_m10183_MethodInfo = 
{
	"Abs"/* name */
	, (methodPointerType)&Math_Abs_m10183/* method */
	, &Math_t1855_il2cpp_TypeInfo/* declaring_type */
	, &Int64_t760_0_0_0/* return_type */
	, RuntimeInvoker_Int64_t760_Int64_t760/* invoker_method */
	, Math_t1855_Math_Abs_m10183_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5197/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Double_t759_0_0_0;
extern const Il2CppType Double_t759_0_0_0;
static const ParameterInfo Math_t1855_Math_Ceiling_m10184_ParameterInfos[] = 
{
	{"a", 0, 134224170, 0, &Double_t759_0_0_0},
};
extern void* RuntimeInvoker_Double_t759_Double_t759 (const MethodInfo* method, void* obj, void** args);
// System.Double System.Math::Ceiling(System.Double)
extern const MethodInfo Math_Ceiling_m10184_MethodInfo = 
{
	"Ceiling"/* name */
	, (methodPointerType)&Math_Ceiling_m10184/* method */
	, &Math_t1855_il2cpp_TypeInfo/* declaring_type */
	, &Double_t759_0_0_0/* return_type */
	, RuntimeInvoker_Double_t759_Double_t759/* invoker_method */
	, Math_t1855_Math_Ceiling_m10184_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5198/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Double_t759_0_0_0;
static const ParameterInfo Math_t1855_Math_Floor_m10185_ParameterInfos[] = 
{
	{"d", 0, 134224171, 0, &Double_t759_0_0_0},
};
extern void* RuntimeInvoker_Double_t759_Double_t759 (const MethodInfo* method, void* obj, void** args);
// System.Double System.Math::Floor(System.Double)
extern const MethodInfo Math_Floor_m10185_MethodInfo = 
{
	"Floor"/* name */
	, (methodPointerType)&Math_Floor_m10185/* method */
	, &Math_t1855_il2cpp_TypeInfo/* declaring_type */
	, &Double_t759_0_0_0/* return_type */
	, RuntimeInvoker_Double_t759_Double_t759/* invoker_method */
	, Math_t1855_Math_Floor_m10185_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5199/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Double_t759_0_0_0;
extern const Il2CppType Double_t759_0_0_0;
static const ParameterInfo Math_t1855_Math_Log_m3532_ParameterInfos[] = 
{
	{"a", 0, 134224172, 0, &Double_t759_0_0_0},
	{"newBase", 1, 134224173, 0, &Double_t759_0_0_0},
};
extern void* RuntimeInvoker_Double_t759_Double_t759_Double_t759 (const MethodInfo* method, void* obj, void** args);
// System.Double System.Math::Log(System.Double,System.Double)
extern const MethodInfo Math_Log_m3532_MethodInfo = 
{
	"Log"/* name */
	, (methodPointerType)&Math_Log_m3532/* method */
	, &Math_t1855_il2cpp_TypeInfo/* declaring_type */
	, &Double_t759_0_0_0/* return_type */
	, RuntimeInvoker_Double_t759_Double_t759_Double_t759/* invoker_method */
	, Math_t1855_Math_Log_m3532_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5200/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo Math_t1855_Math_Max_m5973_ParameterInfos[] = 
{
	{"val1", 0, 134224174, 0, &Int32_t75_0_0_0},
	{"val2", 1, 134224175, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Int32_t75_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Math::Max(System.Int32,System.Int32)
extern const MethodInfo Math_Max_m5973_MethodInfo = 
{
	"Max"/* name */
	, (methodPointerType)&Math_Max_m5973/* method */
	, &Math_t1855_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Int32_t75_Int32_t75/* invoker_method */
	, Math_t1855_Math_Max_m5973_ParameterInfos/* parameters */
	, 890/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5201/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo Math_t1855_Math_Min_m10186_ParameterInfos[] = 
{
	{"val1", 0, 134224176, 0, &Int32_t75_0_0_0},
	{"val2", 1, 134224177, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Int32_t75_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Math::Min(System.Int32,System.Int32)
extern const MethodInfo Math_Min_m10186_MethodInfo = 
{
	"Min"/* name */
	, (methodPointerType)&Math_Min_m10186/* method */
	, &Math_t1855_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Int32_t75_Int32_t75/* invoker_method */
	, Math_t1855_Math_Min_m10186_ParameterInfos/* parameters */
	, 891/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5202/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Decimal_t762_0_0_0;
extern const Il2CppType Decimal_t762_0_0_0;
static const ParameterInfo Math_t1855_Math_Round_m10187_ParameterInfos[] = 
{
	{"d", 0, 134224178, 0, &Decimal_t762_0_0_0},
};
extern void* RuntimeInvoker_Decimal_t762_Decimal_t762 (const MethodInfo* method, void* obj, void** args);
// System.Decimal System.Math::Round(System.Decimal)
extern const MethodInfo Math_Round_m10187_MethodInfo = 
{
	"Round"/* name */
	, (methodPointerType)&Math_Round_m10187/* method */
	, &Math_t1855_il2cpp_TypeInfo/* declaring_type */
	, &Decimal_t762_0_0_0/* return_type */
	, RuntimeInvoker_Decimal_t762_Decimal_t762/* invoker_method */
	, Math_t1855_Math_Round_m10187_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5203/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Double_t759_0_0_0;
static const ParameterInfo Math_t1855_Math_Round_m10188_ParameterInfos[] = 
{
	{"a", 0, 134224179, 0, &Double_t759_0_0_0},
};
extern void* RuntimeInvoker_Double_t759_Double_t759 (const MethodInfo* method, void* obj, void** args);
// System.Double System.Math::Round(System.Double)
extern const MethodInfo Math_Round_m10188_MethodInfo = 
{
	"Round"/* name */
	, (methodPointerType)&Math_Round_m10188/* method */
	, &Math_t1855_il2cpp_TypeInfo/* declaring_type */
	, &Double_t759_0_0_0/* return_type */
	, RuntimeInvoker_Double_t759_Double_t759/* invoker_method */
	, Math_t1855_Math_Round_m10188_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5204/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Double_t759_0_0_0;
static const ParameterInfo Math_t1855_Math_Sin_m10189_ParameterInfos[] = 
{
	{"a", 0, 134224180, 0, &Double_t759_0_0_0},
};
extern void* RuntimeInvoker_Double_t759_Double_t759 (const MethodInfo* method, void* obj, void** args);
// System.Double System.Math::Sin(System.Double)
extern const MethodInfo Math_Sin_m10189_MethodInfo = 
{
	"Sin"/* name */
	, (methodPointerType)&Math_Sin_m10189/* method */
	, &Math_t1855_il2cpp_TypeInfo/* declaring_type */
	, &Double_t759_0_0_0/* return_type */
	, RuntimeInvoker_Double_t759_Double_t759/* invoker_method */
	, Math_t1855_Math_Sin_m10189_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5205/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Double_t759_0_0_0;
static const ParameterInfo Math_t1855_Math_Cos_m10190_ParameterInfos[] = 
{
	{"d", 0, 134224181, 0, &Double_t759_0_0_0},
};
extern void* RuntimeInvoker_Double_t759_Double_t759 (const MethodInfo* method, void* obj, void** args);
// System.Double System.Math::Cos(System.Double)
extern const MethodInfo Math_Cos_m10190_MethodInfo = 
{
	"Cos"/* name */
	, (methodPointerType)&Math_Cos_m10190/* method */
	, &Math_t1855_il2cpp_TypeInfo/* declaring_type */
	, &Double_t759_0_0_0/* return_type */
	, RuntimeInvoker_Double_t759_Double_t759/* invoker_method */
	, Math_t1855_Math_Cos_m10190_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5206/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Double_t759_0_0_0;
static const ParameterInfo Math_t1855_Math_Log_m10191_ParameterInfos[] = 
{
	{"d", 0, 134224182, 0, &Double_t759_0_0_0},
};
extern void* RuntimeInvoker_Double_t759_Double_t759 (const MethodInfo* method, void* obj, void** args);
// System.Double System.Math::Log(System.Double)
extern const MethodInfo Math_Log_m10191_MethodInfo = 
{
	"Log"/* name */
	, (methodPointerType)&Math_Log_m10191/* method */
	, &Math_t1855_il2cpp_TypeInfo/* declaring_type */
	, &Double_t759_0_0_0/* return_type */
	, RuntimeInvoker_Double_t759_Double_t759/* invoker_method */
	, Math_t1855_Math_Log_m10191_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5207/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Double_t759_0_0_0;
extern const Il2CppType Double_t759_0_0_0;
static const ParameterInfo Math_t1855_Math_Pow_m10192_ParameterInfos[] = 
{
	{"x", 0, 134224183, 0, &Double_t759_0_0_0},
	{"y", 1, 134224184, 0, &Double_t759_0_0_0},
};
extern void* RuntimeInvoker_Double_t759_Double_t759_Double_t759 (const MethodInfo* method, void* obj, void** args);
// System.Double System.Math::Pow(System.Double,System.Double)
extern const MethodInfo Math_Pow_m10192_MethodInfo = 
{
	"Pow"/* name */
	, (methodPointerType)&Math_Pow_m10192/* method */
	, &Math_t1855_il2cpp_TypeInfo/* declaring_type */
	, &Double_t759_0_0_0/* return_type */
	, RuntimeInvoker_Double_t759_Double_t759_Double_t759/* invoker_method */
	, Math_t1855_Math_Pow_m10192_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5208/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Double_t759_0_0_0;
static const ParameterInfo Math_t1855_Math_Sqrt_m10193_ParameterInfos[] = 
{
	{"d", 0, 134224185, 0, &Double_t759_0_0_0},
};
extern void* RuntimeInvoker_Double_t759_Double_t759 (const MethodInfo* method, void* obj, void** args);
// System.Double System.Math::Sqrt(System.Double)
extern const MethodInfo Math_Sqrt_m10193_MethodInfo = 
{
	"Sqrt"/* name */
	, (methodPointerType)&Math_Sqrt_m10193/* method */
	, &Math_t1855_il2cpp_TypeInfo/* declaring_type */
	, &Double_t759_0_0_0/* return_type */
	, RuntimeInvoker_Double_t759_Double_t759/* invoker_method */
	, Math_t1855_Math_Sqrt_m10193_ParameterInfos/* parameters */
	, 892/* custom_attributes_cache */
	, 150/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5209/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Math_t1855_MethodInfos[] =
{
	&Math_Abs_m10181_MethodInfo,
	&Math_Abs_m10182_MethodInfo,
	&Math_Abs_m10183_MethodInfo,
	&Math_Ceiling_m10184_MethodInfo,
	&Math_Floor_m10185_MethodInfo,
	&Math_Log_m3532_MethodInfo,
	&Math_Max_m5973_MethodInfo,
	&Math_Min_m10186_MethodInfo,
	&Math_Round_m10187_MethodInfo,
	&Math_Round_m10188_MethodInfo,
	&Math_Sin_m10189_MethodInfo,
	&Math_Cos_m10190_MethodInfo,
	&Math_Log_m10191_MethodInfo,
	&Math_Pow_m10192_MethodInfo,
	&Math_Sqrt_m10193_MethodInfo,
	NULL
};
static const Il2CppMethodReference Math_t1855_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
};
static bool Math_t1855_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType Math_t1855_0_0_0;
extern const Il2CppType Math_t1855_1_0_0;
struct Math_t1855;
const Il2CppTypeDefinitionMetadata Math_t1855_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Math_t1855_VTable/* vtableMethods */
	, Math_t1855_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo Math_t1855_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Math"/* name */
	, "System"/* namespaze */
	, Math_t1855_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Math_t1855_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Math_t1855_0_0_0/* byval_arg */
	, &Math_t1855_1_0_0/* this_arg */
	, &Math_t1855_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Math_t1855)/* instance_size */
	, sizeof (Math_t1855)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048961/* flags */
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
	, 15/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.MemberAccessException
#include "mscorlib_System_MemberAccessException.h"
// Metadata Definition System.MemberAccessException
extern TypeInfo MemberAccessException_t1851_il2cpp_TypeInfo;
// System.MemberAccessException
#include "mscorlib_System_MemberAccessExceptionMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.MemberAccessException::.ctor()
extern const MethodInfo MemberAccessException__ctor_m10194_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MemberAccessException__ctor_m10194/* method */
	, &MemberAccessException_t1851_il2cpp_TypeInfo/* declaring_type */
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
	, 5210/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo MemberAccessException_t1851_MemberAccessException__ctor_m10195_ParameterInfos[] = 
{
	{"message", 0, 134224186, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.MemberAccessException::.ctor(System.String)
extern const MethodInfo MemberAccessException__ctor_m10195_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MemberAccessException__ctor_m10195/* method */
	, &MemberAccessException_t1851_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, MemberAccessException_t1851_MemberAccessException__ctor_m10195_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5211/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo MemberAccessException_t1851_MemberAccessException__ctor_m10196_ParameterInfos[] = 
{
	{"info", 0, 134224187, 0, &SerializationInfo_t732_0_0_0},
	{"context", 1, 134224188, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.MemberAccessException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo MemberAccessException__ctor_m10196_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MemberAccessException__ctor_m10196/* method */
	, &MemberAccessException_t1851_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, MemberAccessException_t1851_MemberAccessException__ctor_m10196_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5212/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* MemberAccessException_t1851_MethodInfos[] =
{
	&MemberAccessException__ctor_m10194_MethodInfo,
	&MemberAccessException__ctor_m10195_MethodInfo,
	&MemberAccessException__ctor_m10196_MethodInfo,
	NULL
};
static const Il2CppMethodReference MemberAccessException_t1851_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Exception_ToString_m3797_MethodInfo,
	&Exception_GetObjectData_m3798_MethodInfo,
	&Exception_get_InnerException_m3799_MethodInfo,
	&Exception_get_Message_m3800_MethodInfo,
	&Exception_get_Source_m3801_MethodInfo,
	&Exception_get_StackTrace_m3802_MethodInfo,
	&Exception_GetObjectData_m3798_MethodInfo,
	&Exception_GetType_m3803_MethodInfo,
};
static bool MemberAccessException_t1851_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair MemberAccessException_t1851_InterfacesOffsets[] = 
{
	{ &ISerializable_t435_0_0_0, 4},
	{ &_Exception_t832_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType MemberAccessException_t1851_1_0_0;
struct MemberAccessException_t1851;
const Il2CppTypeDefinitionMetadata MemberAccessException_t1851_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, MemberAccessException_t1851_InterfacesOffsets/* interfaceOffsets */
	, &SystemException_t1194_0_0_0/* parent */
	, MemberAccessException_t1851_VTable/* vtableMethods */
	, MemberAccessException_t1851_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo MemberAccessException_t1851_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "MemberAccessException"/* name */
	, "System"/* namespaze */
	, MemberAccessException_t1851_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &MemberAccessException_t1851_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 893/* custom_attributes_cache */
	, &MemberAccessException_t1851_0_0_0/* byval_arg */
	, &MemberAccessException_t1851_1_0_0/* this_arg */
	, &MemberAccessException_t1851_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (MemberAccessException_t1851)/* instance_size */
	, sizeof (MemberAccessException_t1851)/* actualSize */
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
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.MethodAccessException
#include "mscorlib_System_MethodAccessException.h"
// Metadata Definition System.MethodAccessException
extern TypeInfo MethodAccessException_t1856_il2cpp_TypeInfo;
// System.MethodAccessException
#include "mscorlib_System_MethodAccessExceptionMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.MethodAccessException::.ctor()
extern const MethodInfo MethodAccessException__ctor_m10197_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MethodAccessException__ctor_m10197/* method */
	, &MethodAccessException_t1856_il2cpp_TypeInfo/* declaring_type */
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
	, 5213/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo MethodAccessException_t1856_MethodAccessException__ctor_m10198_ParameterInfos[] = 
{
	{"info", 0, 134224189, 0, &SerializationInfo_t732_0_0_0},
	{"context", 1, 134224190, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.MethodAccessException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo MethodAccessException__ctor_m10198_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MethodAccessException__ctor_m10198/* method */
	, &MethodAccessException_t1856_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, MethodAccessException_t1856_MethodAccessException__ctor_m10198_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5214/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* MethodAccessException_t1856_MethodInfos[] =
{
	&MethodAccessException__ctor_m10197_MethodInfo,
	&MethodAccessException__ctor_m10198_MethodInfo,
	NULL
};
static const Il2CppMethodReference MethodAccessException_t1856_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Exception_ToString_m3797_MethodInfo,
	&Exception_GetObjectData_m3798_MethodInfo,
	&Exception_get_InnerException_m3799_MethodInfo,
	&Exception_get_Message_m3800_MethodInfo,
	&Exception_get_Source_m3801_MethodInfo,
	&Exception_get_StackTrace_m3802_MethodInfo,
	&Exception_GetObjectData_m3798_MethodInfo,
	&Exception_GetType_m3803_MethodInfo,
};
static bool MethodAccessException_t1856_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair MethodAccessException_t1856_InterfacesOffsets[] = 
{
	{ &ISerializable_t435_0_0_0, 4},
	{ &_Exception_t832_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType MethodAccessException_t1856_0_0_0;
extern const Il2CppType MethodAccessException_t1856_1_0_0;
struct MethodAccessException_t1856;
const Il2CppTypeDefinitionMetadata MethodAccessException_t1856_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, MethodAccessException_t1856_InterfacesOffsets/* interfaceOffsets */
	, &MemberAccessException_t1851_0_0_0/* parent */
	, MethodAccessException_t1856_VTable/* vtableMethods */
	, MethodAccessException_t1856_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo MethodAccessException_t1856_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "MethodAccessException"/* name */
	, "System"/* namespaze */
	, MethodAccessException_t1856_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &MethodAccessException_t1856_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 894/* custom_attributes_cache */
	, &MethodAccessException_t1856_0_0_0/* byval_arg */
	, &MethodAccessException_t1856_1_0_0/* this_arg */
	, &MethodAccessException_t1856_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (MethodAccessException_t1856)/* instance_size */
	, sizeof (MethodAccessException_t1856)/* actualSize */
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
	, 2/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.MissingFieldException
#include "mscorlib_System_MissingFieldException.h"
// Metadata Definition System.MissingFieldException
extern TypeInfo MissingFieldException_t1857_il2cpp_TypeInfo;
// System.MissingFieldException
#include "mscorlib_System_MissingFieldExceptionMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.MissingFieldException::.ctor()
extern const MethodInfo MissingFieldException__ctor_m10199_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MissingFieldException__ctor_m10199/* method */
	, &MissingFieldException_t1857_il2cpp_TypeInfo/* declaring_type */
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
	, 5215/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo MissingFieldException_t1857_MissingFieldException__ctor_m10200_ParameterInfos[] = 
{
	{"message", 0, 134224191, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.MissingFieldException::.ctor(System.String)
extern const MethodInfo MissingFieldException__ctor_m10200_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MissingFieldException__ctor_m10200/* method */
	, &MissingFieldException_t1857_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, MissingFieldException_t1857_MissingFieldException__ctor_m10200_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5216/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo MissingFieldException_t1857_MissingFieldException__ctor_m10201_ParameterInfos[] = 
{
	{"info", 0, 134224192, 0, &SerializationInfo_t732_0_0_0},
	{"context", 1, 134224193, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.MissingFieldException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo MissingFieldException__ctor_m10201_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MissingFieldException__ctor_m10201/* method */
	, &MissingFieldException_t1857_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, MissingFieldException_t1857_MissingFieldException__ctor_m10201_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5217/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.MissingFieldException::get_Message()
extern const MethodInfo MissingFieldException_get_Message_m10202_MethodInfo = 
{
	"get_Message"/* name */
	, (methodPointerType)&MissingFieldException_get_Message_m10202/* method */
	, &MissingFieldException_t1857_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2246/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5218/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* MissingFieldException_t1857_MethodInfos[] =
{
	&MissingFieldException__ctor_m10199_MethodInfo,
	&MissingFieldException__ctor_m10200_MethodInfo,
	&MissingFieldException__ctor_m10201_MethodInfo,
	&MissingFieldException_get_Message_m10202_MethodInfo,
	NULL
};
extern const MethodInfo MissingFieldException_get_Message_m10202_MethodInfo;
static const PropertyInfo MissingFieldException_t1857____Message_PropertyInfo = 
{
	&MissingFieldException_t1857_il2cpp_TypeInfo/* parent */
	, "Message"/* name */
	, &MissingFieldException_get_Message_m10202_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* MissingFieldException_t1857_PropertyInfos[] =
{
	&MissingFieldException_t1857____Message_PropertyInfo,
	NULL
};
extern const MethodInfo MissingMemberException_GetObjectData_m10207_MethodInfo;
static const Il2CppMethodReference MissingFieldException_t1857_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Exception_ToString_m3797_MethodInfo,
	&MissingMemberException_GetObjectData_m10207_MethodInfo,
	&Exception_get_InnerException_m3799_MethodInfo,
	&MissingFieldException_get_Message_m10202_MethodInfo,
	&Exception_get_Source_m3801_MethodInfo,
	&Exception_get_StackTrace_m3802_MethodInfo,
	&MissingMemberException_GetObjectData_m10207_MethodInfo,
	&Exception_GetType_m3803_MethodInfo,
};
static bool MissingFieldException_t1857_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair MissingFieldException_t1857_InterfacesOffsets[] = 
{
	{ &ISerializable_t435_0_0_0, 4},
	{ &_Exception_t832_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType MissingFieldException_t1857_0_0_0;
extern const Il2CppType MissingFieldException_t1857_1_0_0;
extern const Il2CppType MissingMemberException_t1858_0_0_0;
struct MissingFieldException_t1857;
const Il2CppTypeDefinitionMetadata MissingFieldException_t1857_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, MissingFieldException_t1857_InterfacesOffsets/* interfaceOffsets */
	, &MissingMemberException_t1858_0_0_0/* parent */
	, MissingFieldException_t1857_VTable/* vtableMethods */
	, MissingFieldException_t1857_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo MissingFieldException_t1857_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "MissingFieldException"/* name */
	, "System"/* namespaze */
	, MissingFieldException_t1857_MethodInfos/* methods */
	, MissingFieldException_t1857_PropertyInfos/* properties */
	, NULL/* events */
	, &MissingFieldException_t1857_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 895/* custom_attributes_cache */
	, &MissingFieldException_t1857_0_0_0/* byval_arg */
	, &MissingFieldException_t1857_1_0_0/* this_arg */
	, &MissingFieldException_t1857_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (MissingFieldException_t1857)/* instance_size */
	, sizeof (MissingFieldException_t1857)/* actualSize */
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
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.MissingMemberException
#include "mscorlib_System_MissingMemberException.h"
// Metadata Definition System.MissingMemberException
extern TypeInfo MissingMemberException_t1858_il2cpp_TypeInfo;
// System.MissingMemberException
#include "mscorlib_System_MissingMemberExceptionMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.MissingMemberException::.ctor()
extern const MethodInfo MissingMemberException__ctor_m10203_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MissingMemberException__ctor_m10203/* method */
	, &MissingMemberException_t1858_il2cpp_TypeInfo/* declaring_type */
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
	, 5219/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo MissingMemberException_t1858_MissingMemberException__ctor_m10204_ParameterInfos[] = 
{
	{"message", 0, 134224194, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.MissingMemberException::.ctor(System.String)
extern const MethodInfo MissingMemberException__ctor_m10204_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MissingMemberException__ctor_m10204/* method */
	, &MissingMemberException_t1858_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, MissingMemberException_t1858_MissingMemberException__ctor_m10204_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5220/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo MissingMemberException_t1858_MissingMemberException__ctor_m10205_ParameterInfos[] = 
{
	{"info", 0, 134224195, 0, &SerializationInfo_t732_0_0_0},
	{"context", 1, 134224196, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.MissingMemberException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo MissingMemberException__ctor_m10205_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MissingMemberException__ctor_m10205/* method */
	, &MissingMemberException_t1858_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, MissingMemberException_t1858_MissingMemberException__ctor_m10205_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5221/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo MissingMemberException_t1858_MissingMemberException__ctor_m10206_ParameterInfos[] = 
{
	{"className", 0, 134224197, 0, &String_t_0_0_0},
	{"memberName", 1, 134224198, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.MissingMemberException::.ctor(System.String,System.String)
extern const MethodInfo MissingMemberException__ctor_m10206_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MissingMemberException__ctor_m10206/* method */
	, &MissingMemberException_t1858_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Object_t/* invoker_method */
	, MissingMemberException_t1858_MissingMemberException__ctor_m10206_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5222/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo MissingMemberException_t1858_MissingMemberException_GetObjectData_m10207_ParameterInfos[] = 
{
	{"info", 0, 134224199, 0, &SerializationInfo_t732_0_0_0},
	{"context", 1, 134224200, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.MissingMemberException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo MissingMemberException_GetObjectData_m10207_MethodInfo = 
{
	"GetObjectData"/* name */
	, (methodPointerType)&MissingMemberException_GetObjectData_m10207/* method */
	, &MissingMemberException_t1858_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, MissingMemberException_t1858_MissingMemberException_GetObjectData_m10207_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5223/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.MissingMemberException::get_Message()
extern const MethodInfo MissingMemberException_get_Message_m10208_MethodInfo = 
{
	"get_Message"/* name */
	, (methodPointerType)&MissingMemberException_get_Message_m10208/* method */
	, &MissingMemberException_t1858_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2246/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5224/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* MissingMemberException_t1858_MethodInfos[] =
{
	&MissingMemberException__ctor_m10203_MethodInfo,
	&MissingMemberException__ctor_m10204_MethodInfo,
	&MissingMemberException__ctor_m10205_MethodInfo,
	&MissingMemberException__ctor_m10206_MethodInfo,
	&MissingMemberException_GetObjectData_m10207_MethodInfo,
	&MissingMemberException_get_Message_m10208_MethodInfo,
	NULL
};
extern const MethodInfo MissingMemberException_get_Message_m10208_MethodInfo;
static const PropertyInfo MissingMemberException_t1858____Message_PropertyInfo = 
{
	&MissingMemberException_t1858_il2cpp_TypeInfo/* parent */
	, "Message"/* name */
	, &MissingMemberException_get_Message_m10208_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* MissingMemberException_t1858_PropertyInfos[] =
{
	&MissingMemberException_t1858____Message_PropertyInfo,
	NULL
};
static const Il2CppMethodReference MissingMemberException_t1858_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Exception_ToString_m3797_MethodInfo,
	&MissingMemberException_GetObjectData_m10207_MethodInfo,
	&Exception_get_InnerException_m3799_MethodInfo,
	&MissingMemberException_get_Message_m10208_MethodInfo,
	&Exception_get_Source_m3801_MethodInfo,
	&Exception_get_StackTrace_m3802_MethodInfo,
	&MissingMemberException_GetObjectData_m10207_MethodInfo,
	&Exception_GetType_m3803_MethodInfo,
};
static bool MissingMemberException_t1858_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair MissingMemberException_t1858_InterfacesOffsets[] = 
{
	{ &ISerializable_t435_0_0_0, 4},
	{ &_Exception_t832_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType MissingMemberException_t1858_1_0_0;
struct MissingMemberException_t1858;
const Il2CppTypeDefinitionMetadata MissingMemberException_t1858_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, MissingMemberException_t1858_InterfacesOffsets/* interfaceOffsets */
	, &MemberAccessException_t1851_0_0_0/* parent */
	, MissingMemberException_t1858_VTable/* vtableMethods */
	, MissingMemberException_t1858_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2398/* fieldStart */

};
TypeInfo MissingMemberException_t1858_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "MissingMemberException"/* name */
	, "System"/* namespaze */
	, MissingMemberException_t1858_MethodInfos/* methods */
	, MissingMemberException_t1858_PropertyInfos/* properties */
	, NULL/* events */
	, &MissingMemberException_t1858_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 896/* custom_attributes_cache */
	, &MissingMemberException_t1858_0_0_0/* byval_arg */
	, &MissingMemberException_t1858_1_0_0/* this_arg */
	, &MissingMemberException_t1858_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (MissingMemberException_t1858)/* instance_size */
	, sizeof (MissingMemberException_t1858)/* actualSize */
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
	, 6/* method_count */
	, 1/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.MissingMethodException
#include "mscorlib_System_MissingMethodException.h"
// Metadata Definition System.MissingMethodException
extern TypeInfo MissingMethodException_t1859_il2cpp_TypeInfo;
// System.MissingMethodException
#include "mscorlib_System_MissingMethodExceptionMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.MissingMethodException::.ctor()
extern const MethodInfo MissingMethodException__ctor_m10209_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MissingMethodException__ctor_m10209/* method */
	, &MissingMethodException_t1859_il2cpp_TypeInfo/* declaring_type */
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
	, 5225/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo MissingMethodException_t1859_MissingMethodException__ctor_m10210_ParameterInfos[] = 
{
	{"message", 0, 134224201, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.MissingMethodException::.ctor(System.String)
extern const MethodInfo MissingMethodException__ctor_m10210_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MissingMethodException__ctor_m10210/* method */
	, &MissingMethodException_t1859_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, MissingMethodException_t1859_MissingMethodException__ctor_m10210_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5226/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo MissingMethodException_t1859_MissingMethodException__ctor_m10211_ParameterInfos[] = 
{
	{"info", 0, 134224202, 0, &SerializationInfo_t732_0_0_0},
	{"context", 1, 134224203, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.MissingMethodException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo MissingMethodException__ctor_m10211_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MissingMethodException__ctor_m10211/* method */
	, &MissingMethodException_t1859_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, MissingMethodException_t1859_MissingMethodException__ctor_m10211_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5227/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo MissingMethodException_t1859_MissingMethodException__ctor_m10212_ParameterInfos[] = 
{
	{"className", 0, 134224204, 0, &String_t_0_0_0},
	{"methodName", 1, 134224205, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.MissingMethodException::.ctor(System.String,System.String)
extern const MethodInfo MissingMethodException__ctor_m10212_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MissingMethodException__ctor_m10212/* method */
	, &MissingMethodException_t1859_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Object_t/* invoker_method */
	, MissingMethodException_t1859_MissingMethodException__ctor_m10212_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5228/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.MissingMethodException::get_Message()
extern const MethodInfo MissingMethodException_get_Message_m10213_MethodInfo = 
{
	"get_Message"/* name */
	, (methodPointerType)&MissingMethodException_get_Message_m10213/* method */
	, &MissingMethodException_t1859_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2246/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5229/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* MissingMethodException_t1859_MethodInfos[] =
{
	&MissingMethodException__ctor_m10209_MethodInfo,
	&MissingMethodException__ctor_m10210_MethodInfo,
	&MissingMethodException__ctor_m10211_MethodInfo,
	&MissingMethodException__ctor_m10212_MethodInfo,
	&MissingMethodException_get_Message_m10213_MethodInfo,
	NULL
};
extern const MethodInfo MissingMethodException_get_Message_m10213_MethodInfo;
static const PropertyInfo MissingMethodException_t1859____Message_PropertyInfo = 
{
	&MissingMethodException_t1859_il2cpp_TypeInfo/* parent */
	, "Message"/* name */
	, &MissingMethodException_get_Message_m10213_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* MissingMethodException_t1859_PropertyInfos[] =
{
	&MissingMethodException_t1859____Message_PropertyInfo,
	NULL
};
static const Il2CppMethodReference MissingMethodException_t1859_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Exception_ToString_m3797_MethodInfo,
	&MissingMemberException_GetObjectData_m10207_MethodInfo,
	&Exception_get_InnerException_m3799_MethodInfo,
	&MissingMethodException_get_Message_m10213_MethodInfo,
	&Exception_get_Source_m3801_MethodInfo,
	&Exception_get_StackTrace_m3802_MethodInfo,
	&MissingMemberException_GetObjectData_m10207_MethodInfo,
	&Exception_GetType_m3803_MethodInfo,
};
static bool MissingMethodException_t1859_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair MissingMethodException_t1859_InterfacesOffsets[] = 
{
	{ &ISerializable_t435_0_0_0, 4},
	{ &_Exception_t832_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType MissingMethodException_t1859_0_0_0;
extern const Il2CppType MissingMethodException_t1859_1_0_0;
struct MissingMethodException_t1859;
const Il2CppTypeDefinitionMetadata MissingMethodException_t1859_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, MissingMethodException_t1859_InterfacesOffsets/* interfaceOffsets */
	, &MissingMemberException_t1858_0_0_0/* parent */
	, MissingMethodException_t1859_VTable/* vtableMethods */
	, MissingMethodException_t1859_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2401/* fieldStart */

};
TypeInfo MissingMethodException_t1859_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "MissingMethodException"/* name */
	, "System"/* namespaze */
	, MissingMethodException_t1859_MethodInfos/* methods */
	, MissingMethodException_t1859_PropertyInfos/* properties */
	, NULL/* events */
	, &MissingMethodException_t1859_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 897/* custom_attributes_cache */
	, &MissingMethodException_t1859_0_0_0/* byval_arg */
	, &MissingMethodException_t1859_1_0_0/* this_arg */
	, &MissingMethodException_t1859_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (MissingMethodException_t1859)/* instance_size */
	, sizeof (MissingMethodException_t1859)/* actualSize */
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
	, 5/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.MonoAsyncCall
#include "mscorlib_System_MonoAsyncCall.h"
// Metadata Definition System.MonoAsyncCall
extern TypeInfo MonoAsyncCall_t1860_il2cpp_TypeInfo;
// System.MonoAsyncCall
#include "mscorlib_System_MonoAsyncCallMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.MonoAsyncCall::.ctor()
extern const MethodInfo MonoAsyncCall__ctor_m10214_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MonoAsyncCall__ctor_m10214/* method */
	, &MonoAsyncCall_t1860_il2cpp_TypeInfo/* declaring_type */
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
	, 5230/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* MonoAsyncCall_t1860_MethodInfos[] =
{
	&MonoAsyncCall__ctor_m10214_MethodInfo,
	NULL
};
static const Il2CppMethodReference MonoAsyncCall_t1860_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
};
static bool MonoAsyncCall_t1860_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType MonoAsyncCall_t1860_0_0_0;
extern const Il2CppType MonoAsyncCall_t1860_1_0_0;
struct MonoAsyncCall_t1860;
const Il2CppTypeDefinitionMetadata MonoAsyncCall_t1860_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, MonoAsyncCall_t1860_VTable/* vtableMethods */
	, MonoAsyncCall_t1860_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2402/* fieldStart */

};
TypeInfo MonoAsyncCall_t1860_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "MonoAsyncCall"/* name */
	, "System"/* namespaze */
	, MonoAsyncCall_t1860_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &MonoAsyncCall_t1860_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &MonoAsyncCall_t1860_0_0_0/* byval_arg */
	, &MonoAsyncCall_t1860_1_0_0/* this_arg */
	, &MonoAsyncCall_t1860_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (MonoAsyncCall_t1860)/* instance_size */
	, sizeof (MonoAsyncCall_t1860)/* actualSize */
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
	, 1/* method_count */
	, 0/* property_count */
	, 7/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.MonoCustomAttrs/AttributeInfo
#include "mscorlib_System_MonoCustomAttrs_AttributeInfo.h"
// Metadata Definition System.MonoCustomAttrs/AttributeInfo
extern TypeInfo AttributeInfo_t1861_il2cpp_TypeInfo;
// System.MonoCustomAttrs/AttributeInfo
#include "mscorlib_System_MonoCustomAttrs_AttributeInfoMethodDeclarations.h"
extern const Il2CppType AttributeUsageAttribute_t812_0_0_0;
extern const Il2CppType AttributeUsageAttribute_t812_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo AttributeInfo_t1861_AttributeInfo__ctor_m10215_ParameterInfos[] = 
{
	{"usage", 0, 134224230, 0, &AttributeUsageAttribute_t812_0_0_0},
	{"inheritanceLevel", 1, 134224231, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.MonoCustomAttrs/AttributeInfo::.ctor(System.AttributeUsageAttribute,System.Int32)
extern const MethodInfo AttributeInfo__ctor_m10215_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AttributeInfo__ctor_m10215/* method */
	, &AttributeInfo_t1861_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Int32_t75/* invoker_method */
	, AttributeInfo_t1861_AttributeInfo__ctor_m10215_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5244/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.AttributeUsageAttribute System.MonoCustomAttrs/AttributeInfo::get_Usage()
extern const MethodInfo AttributeInfo_get_Usage_m10216_MethodInfo = 
{
	"get_Usage"/* name */
	, (methodPointerType)&AttributeInfo_get_Usage_m10216/* method */
	, &AttributeInfo_t1861_il2cpp_TypeInfo/* declaring_type */
	, &AttributeUsageAttribute_t812_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5245/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.MonoCustomAttrs/AttributeInfo::get_InheritanceLevel()
extern const MethodInfo AttributeInfo_get_InheritanceLevel_m10217_MethodInfo = 
{
	"get_InheritanceLevel"/* name */
	, (methodPointerType)&AttributeInfo_get_InheritanceLevel_m10217/* method */
	, &AttributeInfo_t1861_il2cpp_TypeInfo/* declaring_type */
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
	, 5246/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* AttributeInfo_t1861_MethodInfos[] =
{
	&AttributeInfo__ctor_m10215_MethodInfo,
	&AttributeInfo_get_Usage_m10216_MethodInfo,
	&AttributeInfo_get_InheritanceLevel_m10217_MethodInfo,
	NULL
};
extern const MethodInfo AttributeInfo_get_Usage_m10216_MethodInfo;
static const PropertyInfo AttributeInfo_t1861____Usage_PropertyInfo = 
{
	&AttributeInfo_t1861_il2cpp_TypeInfo/* parent */
	, "Usage"/* name */
	, &AttributeInfo_get_Usage_m10216_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AttributeInfo_get_InheritanceLevel_m10217_MethodInfo;
static const PropertyInfo AttributeInfo_t1861____InheritanceLevel_PropertyInfo = 
{
	&AttributeInfo_t1861_il2cpp_TypeInfo/* parent */
	, "InheritanceLevel"/* name */
	, &AttributeInfo_get_InheritanceLevel_m10217_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* AttributeInfo_t1861_PropertyInfos[] =
{
	&AttributeInfo_t1861____Usage_PropertyInfo,
	&AttributeInfo_t1861____InheritanceLevel_PropertyInfo,
	NULL
};
static const Il2CppMethodReference AttributeInfo_t1861_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
};
static bool AttributeInfo_t1861_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType AttributeInfo_t1861_0_0_0;
extern const Il2CppType AttributeInfo_t1861_1_0_0;
extern TypeInfo MonoCustomAttrs_t1862_il2cpp_TypeInfo;
extern const Il2CppType MonoCustomAttrs_t1862_0_0_0;
struct AttributeInfo_t1861;
const Il2CppTypeDefinitionMetadata AttributeInfo_t1861_DefinitionMetadata = 
{
	&MonoCustomAttrs_t1862_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, AttributeInfo_t1861_VTable/* vtableMethods */
	, AttributeInfo_t1861_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2409/* fieldStart */

};
TypeInfo AttributeInfo_t1861_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "AttributeInfo"/* name */
	, ""/* namespaze */
	, AttributeInfo_t1861_MethodInfos/* methods */
	, AttributeInfo_t1861_PropertyInfos/* properties */
	, NULL/* events */
	, &AttributeInfo_t1861_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &AttributeInfo_t1861_0_0_0/* byval_arg */
	, &AttributeInfo_t1861_1_0_0/* this_arg */
	, &AttributeInfo_t1861_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (AttributeInfo_t1861)/* instance_size */
	, sizeof (AttributeInfo_t1861)/* actualSize */
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
	, 3/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.MonoCustomAttrs
#include "mscorlib_System_MonoCustomAttrs.h"
// Metadata Definition System.MonoCustomAttrs
// System.MonoCustomAttrs
#include "mscorlib_System_MonoCustomAttrsMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.MonoCustomAttrs::.cctor()
extern const MethodInfo MonoCustomAttrs__cctor_m10218_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&MonoCustomAttrs__cctor_m10218/* method */
	, &MonoCustomAttrs_t1862_il2cpp_TypeInfo/* declaring_type */
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
	, 5231/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo MonoCustomAttrs_t1862_MonoCustomAttrs_IsUserCattrProvider_m10219_ParameterInfos[] = 
{
	{"obj", 0, 134224206, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.MonoCustomAttrs::IsUserCattrProvider(System.Object)
extern const MethodInfo MonoCustomAttrs_IsUserCattrProvider_m10219_MethodInfo = 
{
	"IsUserCattrProvider"/* name */
	, (methodPointerType)&MonoCustomAttrs_IsUserCattrProvider_m10219/* method */
	, &MonoCustomAttrs_t1862_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Object_t/* invoker_method */
	, MonoCustomAttrs_t1862_MonoCustomAttrs_IsUserCattrProvider_m10219_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5232/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICustomAttributeProvider_t1928_0_0_0;
extern const Il2CppType ICustomAttributeProvider_t1928_0_0_0;
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo MonoCustomAttrs_t1862_MonoCustomAttrs_GetCustomAttributesInternal_m10220_ParameterInfos[] = 
{
	{"obj", 0, 134224207, 0, &ICustomAttributeProvider_t1928_0_0_0},
	{"attributeType", 1, 134224208, 0, &Type_t_0_0_0},
	{"pseudoAttrs", 2, 134224209, 0, &Boolean_t111_0_0_0},
};
extern const Il2CppType ObjectU5BU5D_t73_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Object[] System.MonoCustomAttrs::GetCustomAttributesInternal(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
extern const MethodInfo MonoCustomAttrs_GetCustomAttributesInternal_m10220_MethodInfo = 
{
	"GetCustomAttributesInternal"/* name */
	, (methodPointerType)&MonoCustomAttrs_GetCustomAttributesInternal_m10220/* method */
	, &MonoCustomAttrs_t1862_il2cpp_TypeInfo/* declaring_type */
	, &ObjectU5BU5D_t73_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_SByte_t113/* invoker_method */
	, MonoCustomAttrs_t1862_MonoCustomAttrs_GetCustomAttributesInternal_m10220_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 147/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5233/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICustomAttributeProvider_t1928_0_0_0;
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo MonoCustomAttrs_t1862_MonoCustomAttrs_GetPseudoCustomAttributes_m10221_ParameterInfos[] = 
{
	{"obj", 0, 134224210, 0, &ICustomAttributeProvider_t1928_0_0_0},
	{"attributeType", 1, 134224211, 0, &Type_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object[] System.MonoCustomAttrs::GetPseudoCustomAttributes(System.Reflection.ICustomAttributeProvider,System.Type)
extern const MethodInfo MonoCustomAttrs_GetPseudoCustomAttributes_m10221_MethodInfo = 
{
	"GetPseudoCustomAttributes"/* name */
	, (methodPointerType)&MonoCustomAttrs_GetPseudoCustomAttributes_m10221/* method */
	, &MonoCustomAttrs_t1862_il2cpp_TypeInfo/* declaring_type */
	, &ObjectU5BU5D_t73_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, MonoCustomAttrs_t1862_MonoCustomAttrs_GetPseudoCustomAttributes_m10221_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5234/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICustomAttributeProvider_t1928_0_0_0;
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo MonoCustomAttrs_t1862_MonoCustomAttrs_GetCustomAttributesBase_m10222_ParameterInfos[] = 
{
	{"obj", 0, 134224212, 0, &ICustomAttributeProvider_t1928_0_0_0},
	{"attributeType", 1, 134224213, 0, &Type_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object[] System.MonoCustomAttrs::GetCustomAttributesBase(System.Reflection.ICustomAttributeProvider,System.Type)
extern const MethodInfo MonoCustomAttrs_GetCustomAttributesBase_m10222_MethodInfo = 
{
	"GetCustomAttributesBase"/* name */
	, (methodPointerType)&MonoCustomAttrs_GetCustomAttributesBase_m10222/* method */
	, &MonoCustomAttrs_t1862_il2cpp_TypeInfo/* declaring_type */
	, &ObjectU5BU5D_t73_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, MonoCustomAttrs_t1862_MonoCustomAttrs_GetCustomAttributesBase_m10222_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5235/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICustomAttributeProvider_t1928_0_0_0;
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo MonoCustomAttrs_t1862_MonoCustomAttrs_GetCustomAttribute_m10223_ParameterInfos[] = 
{
	{"obj", 0, 134224214, 0, &ICustomAttributeProvider_t1928_0_0_0},
	{"attributeType", 1, 134224215, 0, &Type_t_0_0_0},
	{"inherit", 2, 134224216, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Attribute System.MonoCustomAttrs::GetCustomAttribute(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
extern const MethodInfo MonoCustomAttrs_GetCustomAttribute_m10223_MethodInfo = 
{
	"GetCustomAttribute"/* name */
	, (methodPointerType)&MonoCustomAttrs_GetCustomAttribute_m10223/* method */
	, &MonoCustomAttrs_t1862_il2cpp_TypeInfo/* declaring_type */
	, &Attribute_t544_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_SByte_t113/* invoker_method */
	, MonoCustomAttrs_t1862_MonoCustomAttrs_GetCustomAttribute_m10223_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5236/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICustomAttributeProvider_t1928_0_0_0;
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo MonoCustomAttrs_t1862_MonoCustomAttrs_GetCustomAttributes_m10224_ParameterInfos[] = 
{
	{"obj", 0, 134224217, 0, &ICustomAttributeProvider_t1928_0_0_0},
	{"attributeType", 1, 134224218, 0, &Type_t_0_0_0},
	{"inherit", 2, 134224219, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Object[] System.MonoCustomAttrs::GetCustomAttributes(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
extern const MethodInfo MonoCustomAttrs_GetCustomAttributes_m10224_MethodInfo = 
{
	"GetCustomAttributes"/* name */
	, (methodPointerType)&MonoCustomAttrs_GetCustomAttributes_m10224/* method */
	, &MonoCustomAttrs_t1862_il2cpp_TypeInfo/* declaring_type */
	, &ObjectU5BU5D_t73_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_SByte_t113/* invoker_method */
	, MonoCustomAttrs_t1862_MonoCustomAttrs_GetCustomAttributes_m10224_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5237/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICustomAttributeProvider_t1928_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo MonoCustomAttrs_t1862_MonoCustomAttrs_GetCustomAttributes_m10225_ParameterInfos[] = 
{
	{"obj", 0, 134224220, 0, &ICustomAttributeProvider_t1928_0_0_0},
	{"inherit", 1, 134224221, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Object[] System.MonoCustomAttrs::GetCustomAttributes(System.Reflection.ICustomAttributeProvider,System.Boolean)
extern const MethodInfo MonoCustomAttrs_GetCustomAttributes_m10225_MethodInfo = 
{
	"GetCustomAttributes"/* name */
	, (methodPointerType)&MonoCustomAttrs_GetCustomAttributes_m10225/* method */
	, &MonoCustomAttrs_t1862_il2cpp_TypeInfo/* declaring_type */
	, &ObjectU5BU5D_t73_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_SByte_t113/* invoker_method */
	, MonoCustomAttrs_t1862_MonoCustomAttrs_GetCustomAttributes_m10225_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5238/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICustomAttributeProvider_t1928_0_0_0;
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo MonoCustomAttrs_t1862_MonoCustomAttrs_IsDefined_m10226_ParameterInfos[] = 
{
	{"obj", 0, 134224222, 0, &ICustomAttributeProvider_t1928_0_0_0},
	{"attributeType", 1, 134224223, 0, &Type_t_0_0_0},
	{"inherit", 2, 134224224, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Object_t_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.MonoCustomAttrs::IsDefined(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
extern const MethodInfo MonoCustomAttrs_IsDefined_m10226_MethodInfo = 
{
	"IsDefined"/* name */
	, (methodPointerType)&MonoCustomAttrs_IsDefined_m10226/* method */
	, &MonoCustomAttrs_t1862_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Object_t_Object_t_SByte_t113/* invoker_method */
	, MonoCustomAttrs_t1862_MonoCustomAttrs_IsDefined_m10226_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5239/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICustomAttributeProvider_t1928_0_0_0;
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo MonoCustomAttrs_t1862_MonoCustomAttrs_IsDefinedInternal_m10227_ParameterInfos[] = 
{
	{"obj", 0, 134224225, 0, &ICustomAttributeProvider_t1928_0_0_0},
	{"AttributeType", 1, 134224226, 0, &Type_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.MonoCustomAttrs::IsDefinedInternal(System.Reflection.ICustomAttributeProvider,System.Type)
extern const MethodInfo MonoCustomAttrs_IsDefinedInternal_m10227_MethodInfo = 
{
	"IsDefinedInternal"/* name */
	, (methodPointerType)&MonoCustomAttrs_IsDefinedInternal_m10227/* method */
	, &MonoCustomAttrs_t1862_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Object_t_Object_t/* invoker_method */
	, MonoCustomAttrs_t1862_MonoCustomAttrs_IsDefinedInternal_m10227_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 147/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5240/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType PropertyInfo_t_0_0_0;
extern const Il2CppType PropertyInfo_t_0_0_0;
static const ParameterInfo MonoCustomAttrs_t1862_MonoCustomAttrs_GetBasePropertyDefinition_m10228_ParameterInfos[] = 
{
	{"property", 0, 134224227, 0, &PropertyInfo_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.PropertyInfo System.MonoCustomAttrs::GetBasePropertyDefinition(System.Reflection.PropertyInfo)
extern const MethodInfo MonoCustomAttrs_GetBasePropertyDefinition_m10228_MethodInfo = 
{
	"GetBasePropertyDefinition"/* name */
	, (methodPointerType)&MonoCustomAttrs_GetBasePropertyDefinition_m10228/* method */
	, &MonoCustomAttrs_t1862_il2cpp_TypeInfo/* declaring_type */
	, &PropertyInfo_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, MonoCustomAttrs_t1862_MonoCustomAttrs_GetBasePropertyDefinition_m10228_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5241/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICustomAttributeProvider_t1928_0_0_0;
static const ParameterInfo MonoCustomAttrs_t1862_MonoCustomAttrs_GetBase_m10229_ParameterInfos[] = 
{
	{"obj", 0, 134224228, 0, &ICustomAttributeProvider_t1928_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.ICustomAttributeProvider System.MonoCustomAttrs::GetBase(System.Reflection.ICustomAttributeProvider)
extern const MethodInfo MonoCustomAttrs_GetBase_m10229_MethodInfo = 
{
	"GetBase"/* name */
	, (methodPointerType)&MonoCustomAttrs_GetBase_m10229/* method */
	, &MonoCustomAttrs_t1862_il2cpp_TypeInfo/* declaring_type */
	, &ICustomAttributeProvider_t1928_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, MonoCustomAttrs_t1862_MonoCustomAttrs_GetBase_m10229_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5242/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo MonoCustomAttrs_t1862_MonoCustomAttrs_RetrieveAttributeUsage_m10230_ParameterInfos[] = 
{
	{"attributeType", 0, 134224229, 0, &Type_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.AttributeUsageAttribute System.MonoCustomAttrs::RetrieveAttributeUsage(System.Type)
extern const MethodInfo MonoCustomAttrs_RetrieveAttributeUsage_m10230_MethodInfo = 
{
	"RetrieveAttributeUsage"/* name */
	, (methodPointerType)&MonoCustomAttrs_RetrieveAttributeUsage_m10230/* method */
	, &MonoCustomAttrs_t1862_il2cpp_TypeInfo/* declaring_type */
	, &AttributeUsageAttribute_t812_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, MonoCustomAttrs_t1862_MonoCustomAttrs_RetrieveAttributeUsage_m10230_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5243/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* MonoCustomAttrs_t1862_MethodInfos[] =
{
	&MonoCustomAttrs__cctor_m10218_MethodInfo,
	&MonoCustomAttrs_IsUserCattrProvider_m10219_MethodInfo,
	&MonoCustomAttrs_GetCustomAttributesInternal_m10220_MethodInfo,
	&MonoCustomAttrs_GetPseudoCustomAttributes_m10221_MethodInfo,
	&MonoCustomAttrs_GetCustomAttributesBase_m10222_MethodInfo,
	&MonoCustomAttrs_GetCustomAttribute_m10223_MethodInfo,
	&MonoCustomAttrs_GetCustomAttributes_m10224_MethodInfo,
	&MonoCustomAttrs_GetCustomAttributes_m10225_MethodInfo,
	&MonoCustomAttrs_IsDefined_m10226_MethodInfo,
	&MonoCustomAttrs_IsDefinedInternal_m10227_MethodInfo,
	&MonoCustomAttrs_GetBasePropertyDefinition_m10228_MethodInfo,
	&MonoCustomAttrs_GetBase_m10229_MethodInfo,
	&MonoCustomAttrs_RetrieveAttributeUsage_m10230_MethodInfo,
	NULL
};
static const Il2CppType* MonoCustomAttrs_t1862_il2cpp_TypeInfo__nestedTypes[1] =
{
	&AttributeInfo_t1861_0_0_0,
};
static const Il2CppMethodReference MonoCustomAttrs_t1862_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
};
static bool MonoCustomAttrs_t1862_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType MonoCustomAttrs_t1862_1_0_0;
struct MonoCustomAttrs_t1862;
const Il2CppTypeDefinitionMetadata MonoCustomAttrs_t1862_DefinitionMetadata = 
{
	NULL/* declaringType */
	, MonoCustomAttrs_t1862_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, MonoCustomAttrs_t1862_VTable/* vtableMethods */
	, MonoCustomAttrs_t1862_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2411/* fieldStart */

};
TypeInfo MonoCustomAttrs_t1862_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "MonoCustomAttrs"/* name */
	, "System"/* namespaze */
	, MonoCustomAttrs_t1862_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &MonoCustomAttrs_t1862_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &MonoCustomAttrs_t1862_0_0_0/* byval_arg */
	, &MonoCustomAttrs_t1862_1_0_0/* this_arg */
	, &MonoCustomAttrs_t1862_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (MonoCustomAttrs_t1862)/* instance_size */
	, sizeof (MonoCustomAttrs_t1862)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(MonoCustomAttrs_t1862_StaticFields)/* static_fields_size */
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
	, 13/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.MonoTouchAOTHelper
#include "mscorlib_System_MonoTouchAOTHelper.h"
// Metadata Definition System.MonoTouchAOTHelper
extern TypeInfo MonoTouchAOTHelper_t1863_il2cpp_TypeInfo;
// System.MonoTouchAOTHelper
#include "mscorlib_System_MonoTouchAOTHelperMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.MonoTouchAOTHelper::.cctor()
extern const MethodInfo MonoTouchAOTHelper__cctor_m10231_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&MonoTouchAOTHelper__cctor_m10231/* method */
	, &MonoTouchAOTHelper_t1863_il2cpp_TypeInfo/* declaring_type */
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
	, 5247/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* MonoTouchAOTHelper_t1863_MethodInfos[] =
{
	&MonoTouchAOTHelper__cctor_m10231_MethodInfo,
	NULL
};
static const Il2CppMethodReference MonoTouchAOTHelper_t1863_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
};
static bool MonoTouchAOTHelper_t1863_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType MonoTouchAOTHelper_t1863_0_0_0;
extern const Il2CppType MonoTouchAOTHelper_t1863_1_0_0;
struct MonoTouchAOTHelper_t1863;
const Il2CppTypeDefinitionMetadata MonoTouchAOTHelper_t1863_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, MonoTouchAOTHelper_t1863_VTable/* vtableMethods */
	, MonoTouchAOTHelper_t1863_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2414/* fieldStart */

};
TypeInfo MonoTouchAOTHelper_t1863_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "MonoTouchAOTHelper"/* name */
	, "System"/* namespaze */
	, MonoTouchAOTHelper_t1863_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &MonoTouchAOTHelper_t1863_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &MonoTouchAOTHelper_t1863_0_0_0/* byval_arg */
	, &MonoTouchAOTHelper_t1863_1_0_0/* this_arg */
	, &MonoTouchAOTHelper_t1863_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (MonoTouchAOTHelper_t1863)/* instance_size */
	, sizeof (MonoTouchAOTHelper_t1863)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(MonoTouchAOTHelper_t1863_StaticFields)/* static_fields_size */
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
	, 1/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.MonoTypeInfo
#include "mscorlib_System_MonoTypeInfo.h"
// Metadata Definition System.MonoTypeInfo
extern TypeInfo MonoTypeInfo_t1864_il2cpp_TypeInfo;
// System.MonoTypeInfo
#include "mscorlib_System_MonoTypeInfoMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.MonoTypeInfo::.ctor()
extern const MethodInfo MonoTypeInfo__ctor_m10232_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MonoTypeInfo__ctor_m10232/* method */
	, &MonoTypeInfo_t1864_il2cpp_TypeInfo/* declaring_type */
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
	, 5248/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* MonoTypeInfo_t1864_MethodInfos[] =
{
	&MonoTypeInfo__ctor_m10232_MethodInfo,
	NULL
};
static const Il2CppMethodReference MonoTypeInfo_t1864_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
};
static bool MonoTypeInfo_t1864_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType MonoTypeInfo_t1864_0_0_0;
extern const Il2CppType MonoTypeInfo_t1864_1_0_0;
struct MonoTypeInfo_t1864;
const Il2CppTypeDefinitionMetadata MonoTypeInfo_t1864_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, MonoTypeInfo_t1864_VTable/* vtableMethods */
	, MonoTypeInfo_t1864_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2415/* fieldStart */

};
TypeInfo MonoTypeInfo_t1864_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "MonoTypeInfo"/* name */
	, "System"/* namespaze */
	, MonoTypeInfo_t1864_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &MonoTypeInfo_t1864_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &MonoTypeInfo_t1864_0_0_0/* byval_arg */
	, &MonoTypeInfo_t1864_1_0_0/* this_arg */
	, &MonoTypeInfo_t1864_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (MonoTypeInfo_t1864)/* instance_size */
	, sizeof (MonoTypeInfo_t1864)/* actualSize */
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
	, 1/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.MonoType
#include "mscorlib_System_MonoType.h"
// Metadata Definition System.MonoType
extern TypeInfo MonoType_t_il2cpp_TypeInfo;
// System.MonoType
#include "mscorlib_System_MonoTypeMethodDeclarations.h"
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo MonoType_t_MonoType_get_attributes_m10233_ParameterInfos[] = 
{
	{"type", 0, 134224232, 0, &Type_t_0_0_0},
};
extern const Il2CppType TypeAttributes_t1594_0_0_0;
extern void* RuntimeInvoker_TypeAttributes_t1594_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.TypeAttributes System.MonoType::get_attributes(System.Type)
extern const MethodInfo MonoType_get_attributes_m10233_MethodInfo = 
{
	"get_attributes"/* name */
	, (methodPointerType)&MonoType_get_attributes_m10233/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &TypeAttributes_t1594_0_0_0/* return_type */
	, RuntimeInvoker_TypeAttributes_t1594_Object_t/* invoker_method */
	, MonoType_t_MonoType_get_attributes_m10233_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5249/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ConstructorInfo_t638_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.ConstructorInfo System.MonoType::GetDefaultConstructor()
extern const MethodInfo MonoType_GetDefaultConstructor_m10234_MethodInfo = 
{
	"GetDefaultConstructor"/* name */
	, (methodPointerType)&MonoType_GetDefaultConstructor_m10234/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &ConstructorInfo_t638_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5250/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_TypeAttributes_t1594 (const MethodInfo* method, void* obj, void** args);
// System.Reflection.TypeAttributes System.MonoType::GetAttributeFlagsImpl()
extern const MethodInfo MonoType_GetAttributeFlagsImpl_m10235_MethodInfo = 
{
	"GetAttributeFlagsImpl"/* name */
	, (methodPointerType)&MonoType_GetAttributeFlagsImpl_m10235/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &TypeAttributes_t1594_0_0_0/* return_type */
	, RuntimeInvoker_TypeAttributes_t1594/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 59/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5251/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType BindingFlags_t1567_0_0_0;
extern const Il2CppType BindingFlags_t1567_0_0_0;
extern const Il2CppType Binder_t788_0_0_0;
extern const Il2CppType Binder_t788_0_0_0;
extern const Il2CppType CallingConventions_t1568_0_0_0;
extern const Il2CppType CallingConventions_t1568_0_0_0;
extern const Il2CppType TypeU5BU5D_t634_0_0_0;
extern const Il2CppType TypeU5BU5D_t634_0_0_0;
extern const Il2CppType ParameterModifierU5BU5D_t789_0_0_0;
extern const Il2CppType ParameterModifierU5BU5D_t789_0_0_0;
static const ParameterInfo MonoType_t_MonoType_GetConstructorImpl_m10236_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134224233, 0, &BindingFlags_t1567_0_0_0},
	{"binder", 1, 134224234, 0, &Binder_t788_0_0_0},
	{"callConvention", 2, 134224235, 0, &CallingConventions_t1568_0_0_0},
	{"types", 3, 134224236, 0, &TypeU5BU5D_t634_0_0_0},
	{"modifiers", 4, 134224237, 0, &ParameterModifierU5BU5D_t789_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t75_Object_t_Int32_t75_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.ConstructorInfo System.MonoType::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern const MethodInfo MonoType_GetConstructorImpl_m10236_MethodInfo = 
{
	"GetConstructorImpl"/* name */
	, (methodPointerType)&MonoType_GetConstructorImpl_m10236/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &ConstructorInfo_t638_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t75_Object_t_Int32_t75_Object_t_Object_t/* invoker_method */
	, MonoType_t_MonoType_GetConstructorImpl_m10236_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 58/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5252/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType BindingFlags_t1567_0_0_0;
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo MonoType_t_MonoType_GetConstructors_internal_m10237_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134224238, 0, &BindingFlags_t1567_0_0_0},
	{"reflected_type", 1, 134224239, 0, &Type_t_0_0_0},
};
extern const Il2CppType ConstructorInfoU5BU5D_t780_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.ConstructorInfo[] System.MonoType::GetConstructors_internal(System.Reflection.BindingFlags,System.Type)
extern const MethodInfo MonoType_GetConstructors_internal_m10237_MethodInfo = 
{
	"GetConstructors_internal"/* name */
	, (methodPointerType)&MonoType_GetConstructors_internal_m10237/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &ConstructorInfoU5BU5D_t780_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t75_Object_t/* invoker_method */
	, MonoType_t_MonoType_GetConstructors_internal_m10237_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5253/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType BindingFlags_t1567_0_0_0;
static const ParameterInfo MonoType_t_MonoType_GetConstructors_m10238_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134224240, 0, &BindingFlags_t1567_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Reflection.ConstructorInfo[] System.MonoType::GetConstructors(System.Reflection.BindingFlags)
extern const MethodInfo MonoType_GetConstructors_m10238_MethodInfo = 
{
	"GetConstructors"/* name */
	, (methodPointerType)&MonoType_GetConstructors_m10238/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &ConstructorInfoU5BU5D_t780_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t75/* invoker_method */
	, MonoType_t_MonoType_GetConstructors_m10238_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 72/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5254/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType BindingFlags_t1567_0_0_0;
static const ParameterInfo MonoType_t_MonoType_InternalGetEvent_m10239_ParameterInfos[] = 
{
	{"name", 0, 134224241, 0, &String_t_0_0_0},
	{"bindingAttr", 1, 134224242, 0, &BindingFlags_t1567_0_0_0},
};
extern const Il2CppType EventInfo_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Reflection.EventInfo System.MonoType::InternalGetEvent(System.String,System.Reflection.BindingFlags)
extern const MethodInfo MonoType_InternalGetEvent_m10239_MethodInfo = 
{
	"InternalGetEvent"/* name */
	, (methodPointerType)&MonoType_InternalGetEvent_m10239/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &EventInfo_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32_t75/* invoker_method */
	, MonoType_t_MonoType_InternalGetEvent_m10239_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5255/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType BindingFlags_t1567_0_0_0;
static const ParameterInfo MonoType_t_MonoType_GetEvent_m10240_ParameterInfos[] = 
{
	{"name", 0, 134224243, 0, &String_t_0_0_0},
	{"bindingAttr", 1, 134224244, 0, &BindingFlags_t1567_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Reflection.EventInfo System.MonoType::GetEvent(System.String,System.Reflection.BindingFlags)
extern const MethodInfo MonoType_GetEvent_m10240_MethodInfo = 
{
	"GetEvent"/* name */
	, (methodPointerType)&MonoType_GetEvent_m10240/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &EventInfo_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32_t75/* invoker_method */
	, MonoType_t_MonoType_GetEvent_m10240_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 43/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5256/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType BindingFlags_t1567_0_0_0;
static const ParameterInfo MonoType_t_MonoType_GetField_m10241_ParameterInfos[] = 
{
	{"name", 0, 134224245, 0, &String_t_0_0_0},
	{"bindingAttr", 1, 134224246, 0, &BindingFlags_t1567_0_0_0},
};
extern const Il2CppType FieldInfo_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Reflection.FieldInfo System.MonoType::GetField(System.String,System.Reflection.BindingFlags)
extern const MethodInfo MonoType_GetField_m10241_MethodInfo = 
{
	"GetField"/* name */
	, (methodPointerType)&MonoType_GetField_m10241/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &FieldInfo_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32_t75/* invoker_method */
	, MonoType_t_MonoType_GetField_m10241_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 4096/* iflags */
	, 44/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5257/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType BindingFlags_t1567_0_0_0;
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo MonoType_t_MonoType_GetFields_internal_m10242_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134224247, 0, &BindingFlags_t1567_0_0_0},
	{"reflected_type", 1, 134224248, 0, &Type_t_0_0_0},
};
extern const Il2CppType FieldInfoU5BU5D_t785_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.FieldInfo[] System.MonoType::GetFields_internal(System.Reflection.BindingFlags,System.Type)
extern const MethodInfo MonoType_GetFields_internal_m10242_MethodInfo = 
{
	"GetFields_internal"/* name */
	, (methodPointerType)&MonoType_GetFields_internal_m10242/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &FieldInfoU5BU5D_t785_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t75_Object_t/* invoker_method */
	, MonoType_t_MonoType_GetFields_internal_m10242_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5258/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType BindingFlags_t1567_0_0_0;
static const ParameterInfo MonoType_t_MonoType_GetFields_m10243_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134224249, 0, &BindingFlags_t1567_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Reflection.FieldInfo[] System.MonoType::GetFields(System.Reflection.BindingFlags)
extern const MethodInfo MonoType_GetFields_m10243_MethodInfo = 
{
	"GetFields"/* name */
	, (methodPointerType)&MonoType_GetFields_m10243/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &FieldInfoU5BU5D_t785_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t75/* invoker_method */
	, MonoType_t_MonoType_GetFields_m10243_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 45/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5259/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Type[] System.MonoType::GetInterfaces()
extern const MethodInfo MonoType_GetInterfaces_m10244_MethodInfo = 
{
	"GetInterfaces"/* name */
	, (methodPointerType)&MonoType_GetInterfaces_m10244/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &TypeU5BU5D_t634_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 4096/* iflags */
	, 39/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5260/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType BindingFlags_t1567_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo MonoType_t_MonoType_GetMethodsByName_m10245_ParameterInfos[] = 
{
	{"name", 0, 134224250, 0, &String_t_0_0_0},
	{"bindingAttr", 1, 134224251, 0, &BindingFlags_t1567_0_0_0},
	{"ignoreCase", 2, 134224252, 0, &Boolean_t111_0_0_0},
	{"reflected_type", 3, 134224253, 0, &Type_t_0_0_0},
};
extern const Il2CppType MethodInfoU5BU5D_t1578_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Int32_t75_SByte_t113_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.MethodInfo[] System.MonoType::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
extern const MethodInfo MonoType_GetMethodsByName_m10245_MethodInfo = 
{
	"GetMethodsByName"/* name */
	, (methodPointerType)&MonoType_GetMethodsByName_m10245/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfoU5BU5D_t1578_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32_t75_SByte_t113_Object_t/* invoker_method */
	, MonoType_t_MonoType_GetMethodsByName_m10245_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5261/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType BindingFlags_t1567_0_0_0;
static const ParameterInfo MonoType_t_MonoType_GetMethods_m10246_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134224254, 0, &BindingFlags_t1567_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Reflection.MethodInfo[] System.MonoType::GetMethods(System.Reflection.BindingFlags)
extern const MethodInfo MonoType_GetMethods_m10246_MethodInfo = 
{
	"GetMethods"/* name */
	, (methodPointerType)&MonoType_GetMethods_m10246/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfoU5BU5D_t1578_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t75/* invoker_method */
	, MonoType_t_MonoType_GetMethods_m10246_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 51/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5262/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType BindingFlags_t1567_0_0_0;
extern const Il2CppType Binder_t788_0_0_0;
extern const Il2CppType CallingConventions_t1568_0_0_0;
extern const Il2CppType TypeU5BU5D_t634_0_0_0;
extern const Il2CppType ParameterModifierU5BU5D_t789_0_0_0;
static const ParameterInfo MonoType_t_MonoType_GetMethodImpl_m10247_ParameterInfos[] = 
{
	{"name", 0, 134224255, 0, &String_t_0_0_0},
	{"bindingAttr", 1, 134224256, 0, &BindingFlags_t1567_0_0_0},
	{"binder", 2, 134224257, 0, &Binder_t788_0_0_0},
	{"callConvention", 3, 134224258, 0, &CallingConventions_t1568_0_0_0},
	{"types", 4, 134224259, 0, &TypeU5BU5D_t634_0_0_0},
	{"modifiers", 5, 134224260, 0, &ParameterModifierU5BU5D_t789_0_0_0},
};
extern const Il2CppType MethodInfo_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Int32_t75_Object_t_Int32_t75_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.MethodInfo System.MonoType::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern const MethodInfo MonoType_GetMethodImpl_m10247_MethodInfo = 
{
	"GetMethodImpl"/* name */
	, (methodPointerType)&MonoType_GetMethodImpl_m10247/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32_t75_Object_t_Int32_t75_Object_t_Object_t/* invoker_method */
	, MonoType_t_MonoType_GetMethodImpl_m10247_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 50/* slot */
	, 6/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5263/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType BindingFlags_t1567_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo MonoType_t_MonoType_GetPropertiesByName_m10248_ParameterInfos[] = 
{
	{"name", 0, 134224261, 0, &String_t_0_0_0},
	{"bindingAttr", 1, 134224262, 0, &BindingFlags_t1567_0_0_0},
	{"icase", 2, 134224263, 0, &Boolean_t111_0_0_0},
	{"reflected_type", 3, 134224264, 0, &Type_t_0_0_0},
};
extern const Il2CppType PropertyInfoU5BU5D_t784_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Int32_t75_SByte_t113_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.PropertyInfo[] System.MonoType::GetPropertiesByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
extern const MethodInfo MonoType_GetPropertiesByName_m10248_MethodInfo = 
{
	"GetPropertiesByName"/* name */
	, (methodPointerType)&MonoType_GetPropertiesByName_m10248/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &PropertyInfoU5BU5D_t784_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32_t75_SByte_t113_Object_t/* invoker_method */
	, MonoType_t_MonoType_GetPropertiesByName_m10248_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5264/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType BindingFlags_t1567_0_0_0;
static const ParameterInfo MonoType_t_MonoType_GetProperties_m10249_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134224265, 0, &BindingFlags_t1567_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Reflection.PropertyInfo[] System.MonoType::GetProperties(System.Reflection.BindingFlags)
extern const MethodInfo MonoType_GetProperties_m10249_MethodInfo = 
{
	"GetProperties"/* name */
	, (methodPointerType)&MonoType_GetProperties_m10249/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &PropertyInfoU5BU5D_t784_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t75/* invoker_method */
	, MonoType_t_MonoType_GetProperties_m10249_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 52/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5265/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType BindingFlags_t1567_0_0_0;
extern const Il2CppType Binder_t788_0_0_0;
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType TypeU5BU5D_t634_0_0_0;
extern const Il2CppType ParameterModifierU5BU5D_t789_0_0_0;
static const ParameterInfo MonoType_t_MonoType_GetPropertyImpl_m10250_ParameterInfos[] = 
{
	{"name", 0, 134224266, 0, &String_t_0_0_0},
	{"bindingAttr", 1, 134224267, 0, &BindingFlags_t1567_0_0_0},
	{"binder", 2, 134224268, 0, &Binder_t788_0_0_0},
	{"returnType", 3, 134224269, 0, &Type_t_0_0_0},
	{"types", 4, 134224270, 0, &TypeU5BU5D_t634_0_0_0},
	{"modifiers", 5, 134224271, 0, &ParameterModifierU5BU5D_t789_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Int32_t75_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.PropertyInfo System.MonoType::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern const MethodInfo MonoType_GetPropertyImpl_m10250_MethodInfo = 
{
	"GetPropertyImpl"/* name */
	, (methodPointerType)&MonoType_GetPropertyImpl_m10250/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &PropertyInfo_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32_t75_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, MonoType_t_MonoType_GetPropertyImpl_m10250_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 57/* slot */
	, 6/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5266/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.MonoType::HasElementTypeImpl()
extern const MethodInfo MonoType_HasElementTypeImpl_m10251_MethodInfo = 
{
	"HasElementTypeImpl"/* name */
	, (methodPointerType)&MonoType_HasElementTypeImpl_m10251/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 60/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5267/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.MonoType::IsArrayImpl()
extern const MethodInfo MonoType_IsArrayImpl_m10252_MethodInfo = 
{
	"IsArrayImpl"/* name */
	, (methodPointerType)&MonoType_IsArrayImpl_m10252/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 61/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5268/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.MonoType::IsByRefImpl()
extern const MethodInfo MonoType_IsByRefImpl_m10253_MethodInfo = 
{
	"IsByRefImpl"/* name */
	, (methodPointerType)&MonoType_IsByRefImpl_m10253/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 196/* flags */
	, 4096/* iflags */
	, 62/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5269/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.MonoType::IsPointerImpl()
extern const MethodInfo MonoType_IsPointerImpl_m10254_MethodInfo = 
{
	"IsPointerImpl"/* name */
	, (methodPointerType)&MonoType_IsPointerImpl_m10254/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 196/* flags */
	, 4096/* iflags */
	, 63/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5270/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.MonoType::IsPrimitiveImpl()
extern const MethodInfo MonoType_IsPrimitiveImpl_m10255_MethodInfo = 
{
	"IsPrimitiveImpl"/* name */
	, (methodPointerType)&MonoType_IsPrimitiveImpl_m10255/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 196/* flags */
	, 4096/* iflags */
	, 64/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5271/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo MonoType_t_MonoType_IsSubclassOf_m10256_ParameterInfos[] = 
{
	{"type", 0, 134224272, 0, &Type_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.MonoType::IsSubclassOf(System.Type)
extern const MethodInfo MonoType_IsSubclassOf_m10256_MethodInfo = 
{
	"IsSubclassOf"/* name */
	, (methodPointerType)&MonoType_IsSubclassOf_m10256/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Object_t/* invoker_method */
	, MonoType_t_MonoType_IsSubclassOf_m10256_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 38/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5272/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType BindingFlags_t1567_0_0_0;
extern const Il2CppType Binder_t788_0_0_0;
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType ObjectU5BU5D_t73_0_0_0;
extern const Il2CppType ParameterModifierU5BU5D_t789_0_0_0;
extern const Il2CppType CultureInfo_t757_0_0_0;
extern const Il2CppType CultureInfo_t757_0_0_0;
extern const Il2CppType StringU5BU5D_t48_0_0_0;
extern const Il2CppType StringU5BU5D_t48_0_0_0;
static const ParameterInfo MonoType_t_MonoType_InvokeMember_m10257_ParameterInfos[] = 
{
	{"name", 0, 134224273, 0, &String_t_0_0_0},
	{"invokeAttr", 1, 134224274, 0, &BindingFlags_t1567_0_0_0},
	{"binder", 2, 134224275, 0, &Binder_t788_0_0_0},
	{"target", 3, 134224276, 0, &Object_t_0_0_0},
	{"args", 4, 134224277, 0, &ObjectU5BU5D_t73_0_0_0},
	{"modifiers", 5, 134224278, 0, &ParameterModifierU5BU5D_t789_0_0_0},
	{"culture", 6, 134224279, 0, &CultureInfo_t757_0_0_0},
	{"namedParameters", 7, 134224280, 0, &StringU5BU5D_t48_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Int32_t75_Object_t_Object_t_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.MonoType::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern const MethodInfo MonoType_InvokeMember_m10257_MethodInfo = 
{
	"InvokeMember"/* name */
	, (methodPointerType)&MonoType_InvokeMember_m10257/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32_t75_Object_t_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, MonoType_t_MonoType_InvokeMember_m10257_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 73/* slot */
	, 8/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5273/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Type System.MonoType::GetElementType()
extern const MethodInfo MonoType_GetElementType_m10258_MethodInfo = 
{
	"GetElementType"/* name */
	, (methodPointerType)&MonoType_GetElementType_m10258/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &Type_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 4096/* iflags */
	, 42/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5274/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Type System.MonoType::get_UnderlyingSystemType()
extern const MethodInfo MonoType_get_UnderlyingSystemType_m10259_MethodInfo = 
{
	"get_UnderlyingSystemType"/* name */
	, (methodPointerType)&MonoType_get_UnderlyingSystemType_m10259/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &Type_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2246/* flags */
	, 0/* iflags */
	, 36/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5275/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Assembly_t1177_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.Assembly System.MonoType::get_Assembly()
extern const MethodInfo MonoType_get_Assembly_m10260_MethodInfo = 
{
	"get_Assembly"/* name */
	, (methodPointerType)&MonoType_get_Assembly_m10260/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &Assembly_t1177_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2246/* flags */
	, 4096/* iflags */
	, 14/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5276/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.MonoType::get_AssemblyQualifiedName()
extern const MethodInfo MonoType_get_AssemblyQualifiedName_m10261_MethodInfo = 
{
	"get_AssemblyQualifiedName"/* name */
	, (methodPointerType)&MonoType_get_AssemblyQualifiedName_m10261/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2246/* flags */
	, 0/* iflags */
	, 15/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5277/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo MonoType_t_MonoType_getFullName_m10262_ParameterInfos[] = 
{
	{"full_name", 0, 134224281, 0, &Boolean_t111_0_0_0},
	{"assembly_qualified", 1, 134224282, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Object_t_SByte_t113_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.String System.MonoType::getFullName(System.Boolean,System.Boolean)
extern const MethodInfo MonoType_getFullName_m10262_MethodInfo = 
{
	"getFullName"/* name */
	, (methodPointerType)&MonoType_getFullName_m10262/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_SByte_t113_SByte_t113/* invoker_method */
	, MonoType_t_MonoType_getFullName_m10262_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5278/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Type System.MonoType::get_BaseType()
extern const MethodInfo MonoType_get_BaseType_m10263_MethodInfo = 
{
	"get_BaseType"/* name */
	, (methodPointerType)&MonoType_get_BaseType_m10263/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &Type_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2246/* flags */
	, 4096/* iflags */
	, 17/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5279/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.MonoType::get_FullName()
extern const MethodInfo MonoType_get_FullName_m10264_MethodInfo = 
{
	"get_FullName"/* name */
	, (methodPointerType)&MonoType_get_FullName_m10264/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2246/* flags */
	, 0/* iflags */
	, 18/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5280/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo MonoType_t_MonoType_IsDefined_m10265_ParameterInfos[] = 
{
	{"attributeType", 0, 134224283, 0, &Type_t_0_0_0},
	{"inherit", 1, 134224284, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.MonoType::IsDefined(System.Type,System.Boolean)
extern const MethodInfo MonoType_IsDefined_m10265_MethodInfo = 
{
	"IsDefined"/* name */
	, (methodPointerType)&MonoType_IsDefined_m10265/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Object_t_SByte_t113/* invoker_method */
	, MonoType_t_MonoType_IsDefined_m10265_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5281/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo MonoType_t_MonoType_GetCustomAttributes_m10266_ParameterInfos[] = 
{
	{"inherit", 0, 134224285, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Object[] System.MonoType::GetCustomAttributes(System.Boolean)
extern const MethodInfo MonoType_GetCustomAttributes_m10266_MethodInfo = 
{
	"GetCustomAttributes"/* name */
	, (methodPointerType)&MonoType_GetCustomAttributes_m10266/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &ObjectU5BU5D_t73_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_SByte_t113/* invoker_method */
	, MonoType_t_MonoType_GetCustomAttributes_m10266_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5282/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo MonoType_t_MonoType_GetCustomAttributes_m10267_ParameterInfos[] = 
{
	{"attributeType", 0, 134224286, 0, &Type_t_0_0_0},
	{"inherit", 1, 134224287, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Object[] System.MonoType::GetCustomAttributes(System.Type,System.Boolean)
extern const MethodInfo MonoType_GetCustomAttributes_m10267_MethodInfo = 
{
	"GetCustomAttributes"/* name */
	, (methodPointerType)&MonoType_GetCustomAttributes_m10267/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &ObjectU5BU5D_t73_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_SByte_t113/* invoker_method */
	, MonoType_t_MonoType_GetCustomAttributes_m10267_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 13/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5283/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType MemberTypes_t1573_0_0_0;
extern void* RuntimeInvoker_MemberTypes_t1573 (const MethodInfo* method, void* obj, void** args);
// System.Reflection.MemberTypes System.MonoType::get_MemberType()
extern const MethodInfo MonoType_get_MemberType_m10268_MethodInfo = 
{
	"get_MemberType"/* name */
	, (methodPointerType)&MonoType_get_MemberType_m10268/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &MemberTypes_t1573_0_0_0/* return_type */
	, RuntimeInvoker_MemberTypes_t1573/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2246/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5284/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.MonoType::get_Name()
extern const MethodInfo MonoType_get_Name_m10269_MethodInfo = 
{
	"get_Name"/* name */
	, (methodPointerType)&MonoType_get_Name_m10269/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2246/* flags */
	, 4096/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5285/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.MonoType::get_Namespace()
extern const MethodInfo MonoType_get_Namespace_m10270_MethodInfo = 
{
	"get_Namespace"/* name */
	, (methodPointerType)&MonoType_get_Namespace_m10270/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2246/* flags */
	, 4096/* iflags */
	, 34/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5286/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Module_t1552_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.Module System.MonoType::get_Module()
extern const MethodInfo MonoType_get_Module_m10271_MethodInfo = 
{
	"get_Module"/* name */
	, (methodPointerType)&MonoType_get_Module_m10271/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &Module_t1552_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2246/* flags */
	, 4096/* iflags */
	, 10/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5287/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Type System.MonoType::get_DeclaringType()
extern const MethodInfo MonoType_get_DeclaringType_m10272_MethodInfo = 
{
	"get_DeclaringType"/* name */
	, (methodPointerType)&MonoType_get_DeclaringType_m10272/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &Type_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2246/* flags */
	, 4096/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5288/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Type System.MonoType::get_ReflectedType()
extern const MethodInfo MonoType_get_ReflectedType_m10273_MethodInfo = 
{
	"get_ReflectedType"/* name */
	, (methodPointerType)&MonoType_get_ReflectedType_m10273/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &Type_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2246/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5289/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType RuntimeTypeHandle_t1373_0_0_0;
extern void* RuntimeInvoker_RuntimeTypeHandle_t1373 (const MethodInfo* method, void* obj, void** args);
// System.RuntimeTypeHandle System.MonoType::get_TypeHandle()
extern const MethodInfo MonoType_get_TypeHandle_m10274_MethodInfo = 
{
	"get_TypeHandle"/* name */
	, (methodPointerType)&MonoType_get_TypeHandle_m10274/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &RuntimeTypeHandle_t1373_0_0_0/* return_type */
	, RuntimeInvoker_RuntimeTypeHandle_t1373/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2246/* flags */
	, 0/* iflags */
	, 35/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5290/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo MonoType_t_MonoType_GetObjectData_m10275_ParameterInfos[] = 
{
	{"info", 0, 134224288, 0, &SerializationInfo_t732_0_0_0},
	{"context", 1, 134224289, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.MonoType::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo MonoType_GetObjectData_m10275_MethodInfo = 
{
	"GetObjectData"/* name */
	, (methodPointerType)&MonoType_GetObjectData_m10275/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, MonoType_t_MonoType_GetObjectData_m10275_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 81/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5291/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.MonoType::ToString()
extern const MethodInfo MonoType_ToString_m10276_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&MonoType_ToString_m10276/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
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
	, 5292/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Type[] System.MonoType::GetGenericArguments()
extern const MethodInfo MonoType_GetGenericArguments_m10277_MethodInfo = 
{
	"GetGenericArguments"/* name */
	, (methodPointerType)&MonoType_GetGenericArguments_m10277/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &TypeU5BU5D_t634_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 4096/* iflags */
	, 74/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5293/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.MonoType::get_ContainsGenericParameters()
extern const MethodInfo MonoType_get_ContainsGenericParameters_m10278_MethodInfo = 
{
	"get_ContainsGenericParameters"/* name */
	, (methodPointerType)&MonoType_get_ContainsGenericParameters_m10278/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2246/* flags */
	, 0/* iflags */
	, 75/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5294/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.MonoType::get_IsGenericParameter()
extern const MethodInfo MonoType_get_IsGenericParameter_m10279_MethodInfo = 
{
	"get_IsGenericParameter"/* name */
	, (methodPointerType)&MonoType_get_IsGenericParameter_m10279/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2246/* flags */
	, 4096/* iflags */
	, 80/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5295/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Type System.MonoType::GetGenericTypeDefinition()
extern const MethodInfo MonoType_GetGenericTypeDefinition_m10280_MethodInfo = 
{
	"GetGenericTypeDefinition"/* name */
	, (methodPointerType)&MonoType_GetGenericTypeDefinition_m10280/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &Type_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 77/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5296/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType MethodBase_t791_0_0_0;
extern const Il2CppType MethodBase_t791_0_0_0;
static const ParameterInfo MonoType_t_MonoType_CheckMethodSecurity_m10281_ParameterInfos[] = 
{
	{"mb", 0, 134224290, 0, &MethodBase_t791_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.MethodBase System.MonoType::CheckMethodSecurity(System.Reflection.MethodBase)
extern const MethodInfo MonoType_CheckMethodSecurity_m10281_MethodInfo = 
{
	"CheckMethodSecurity"/* name */
	, (methodPointerType)&MonoType_CheckMethodSecurity_m10281/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &MethodBase_t791_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, MonoType_t_MonoType_CheckMethodSecurity_m10281_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5297/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ObjectU5BU5D_t73_1_0_0;
extern const Il2CppType ObjectU5BU5D_t73_1_0_0;
extern const Il2CppType MethodBase_t791_0_0_0;
static const ParameterInfo MonoType_t_MonoType_ReorderParamArrayArguments_m10282_ParameterInfos[] = 
{
	{"args", 0, 134224291, 0, &ObjectU5BU5D_t73_1_0_0},
	{"method", 1, 134224292, 0, &MethodBase_t791_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_ObjectU5BU5DU26_t2026_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.MonoType::ReorderParamArrayArguments(System.Object[]&,System.Reflection.MethodBase)
extern const MethodInfo MonoType_ReorderParamArrayArguments_m10282_MethodInfo = 
{
	"ReorderParamArrayArguments"/* name */
	, (methodPointerType)&MonoType_ReorderParamArrayArguments_m10282/* method */
	, &MonoType_t_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_ObjectU5BU5DU26_t2026_Object_t/* invoker_method */
	, MonoType_t_MonoType_ReorderParamArrayArguments_m10282_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5298/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* MonoType_t_MethodInfos[] =
{
	&MonoType_get_attributes_m10233_MethodInfo,
	&MonoType_GetDefaultConstructor_m10234_MethodInfo,
	&MonoType_GetAttributeFlagsImpl_m10235_MethodInfo,
	&MonoType_GetConstructorImpl_m10236_MethodInfo,
	&MonoType_GetConstructors_internal_m10237_MethodInfo,
	&MonoType_GetConstructors_m10238_MethodInfo,
	&MonoType_InternalGetEvent_m10239_MethodInfo,
	&MonoType_GetEvent_m10240_MethodInfo,
	&MonoType_GetField_m10241_MethodInfo,
	&MonoType_GetFields_internal_m10242_MethodInfo,
	&MonoType_GetFields_m10243_MethodInfo,
	&MonoType_GetInterfaces_m10244_MethodInfo,
	&MonoType_GetMethodsByName_m10245_MethodInfo,
	&MonoType_GetMethods_m10246_MethodInfo,
	&MonoType_GetMethodImpl_m10247_MethodInfo,
	&MonoType_GetPropertiesByName_m10248_MethodInfo,
	&MonoType_GetProperties_m10249_MethodInfo,
	&MonoType_GetPropertyImpl_m10250_MethodInfo,
	&MonoType_HasElementTypeImpl_m10251_MethodInfo,
	&MonoType_IsArrayImpl_m10252_MethodInfo,
	&MonoType_IsByRefImpl_m10253_MethodInfo,
	&MonoType_IsPointerImpl_m10254_MethodInfo,
	&MonoType_IsPrimitiveImpl_m10255_MethodInfo,
	&MonoType_IsSubclassOf_m10256_MethodInfo,
	&MonoType_InvokeMember_m10257_MethodInfo,
	&MonoType_GetElementType_m10258_MethodInfo,
	&MonoType_get_UnderlyingSystemType_m10259_MethodInfo,
	&MonoType_get_Assembly_m10260_MethodInfo,
	&MonoType_get_AssemblyQualifiedName_m10261_MethodInfo,
	&MonoType_getFullName_m10262_MethodInfo,
	&MonoType_get_BaseType_m10263_MethodInfo,
	&MonoType_get_FullName_m10264_MethodInfo,
	&MonoType_IsDefined_m10265_MethodInfo,
	&MonoType_GetCustomAttributes_m10266_MethodInfo,
	&MonoType_GetCustomAttributes_m10267_MethodInfo,
	&MonoType_get_MemberType_m10268_MethodInfo,
	&MonoType_get_Name_m10269_MethodInfo,
	&MonoType_get_Namespace_m10270_MethodInfo,
	&MonoType_get_Module_m10271_MethodInfo,
	&MonoType_get_DeclaringType_m10272_MethodInfo,
	&MonoType_get_ReflectedType_m10273_MethodInfo,
	&MonoType_get_TypeHandle_m10274_MethodInfo,
	&MonoType_GetObjectData_m10275_MethodInfo,
	&MonoType_ToString_m10276_MethodInfo,
	&MonoType_GetGenericArguments_m10277_MethodInfo,
	&MonoType_get_ContainsGenericParameters_m10278_MethodInfo,
	&MonoType_get_IsGenericParameter_m10279_MethodInfo,
	&MonoType_GetGenericTypeDefinition_m10280_MethodInfo,
	&MonoType_CheckMethodSecurity_m10281_MethodInfo,
	&MonoType_ReorderParamArrayArguments_m10282_MethodInfo,
	NULL
};
extern const MethodInfo MonoType_get_UnderlyingSystemType_m10259_MethodInfo;
static const PropertyInfo MonoType_t____UnderlyingSystemType_PropertyInfo = 
{
	&MonoType_t_il2cpp_TypeInfo/* parent */
	, "UnderlyingSystemType"/* name */
	, &MonoType_get_UnderlyingSystemType_m10259_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MonoType_get_Assembly_m10260_MethodInfo;
static const PropertyInfo MonoType_t____Assembly_PropertyInfo = 
{
	&MonoType_t_il2cpp_TypeInfo/* parent */
	, "Assembly"/* name */
	, &MonoType_get_Assembly_m10260_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MonoType_get_AssemblyQualifiedName_m10261_MethodInfo;
static const PropertyInfo MonoType_t____AssemblyQualifiedName_PropertyInfo = 
{
	&MonoType_t_il2cpp_TypeInfo/* parent */
	, "AssemblyQualifiedName"/* name */
	, &MonoType_get_AssemblyQualifiedName_m10261_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MonoType_get_BaseType_m10263_MethodInfo;
static const PropertyInfo MonoType_t____BaseType_PropertyInfo = 
{
	&MonoType_t_il2cpp_TypeInfo/* parent */
	, "BaseType"/* name */
	, &MonoType_get_BaseType_m10263_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MonoType_get_FullName_m10264_MethodInfo;
static const PropertyInfo MonoType_t____FullName_PropertyInfo = 
{
	&MonoType_t_il2cpp_TypeInfo/* parent */
	, "FullName"/* name */
	, &MonoType_get_FullName_m10264_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MonoType_get_MemberType_m10268_MethodInfo;
static const PropertyInfo MonoType_t____MemberType_PropertyInfo = 
{
	&MonoType_t_il2cpp_TypeInfo/* parent */
	, "MemberType"/* name */
	, &MonoType_get_MemberType_m10268_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MonoType_get_Name_m10269_MethodInfo;
static const PropertyInfo MonoType_t____Name_PropertyInfo = 
{
	&MonoType_t_il2cpp_TypeInfo/* parent */
	, "Name"/* name */
	, &MonoType_get_Name_m10269_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MonoType_get_Namespace_m10270_MethodInfo;
static const PropertyInfo MonoType_t____Namespace_PropertyInfo = 
{
	&MonoType_t_il2cpp_TypeInfo/* parent */
	, "Namespace"/* name */
	, &MonoType_get_Namespace_m10270_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MonoType_get_Module_m10271_MethodInfo;
static const PropertyInfo MonoType_t____Module_PropertyInfo = 
{
	&MonoType_t_il2cpp_TypeInfo/* parent */
	, "Module"/* name */
	, &MonoType_get_Module_m10271_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MonoType_get_DeclaringType_m10272_MethodInfo;
static const PropertyInfo MonoType_t____DeclaringType_PropertyInfo = 
{
	&MonoType_t_il2cpp_TypeInfo/* parent */
	, "DeclaringType"/* name */
	, &MonoType_get_DeclaringType_m10272_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MonoType_get_ReflectedType_m10273_MethodInfo;
static const PropertyInfo MonoType_t____ReflectedType_PropertyInfo = 
{
	&MonoType_t_il2cpp_TypeInfo/* parent */
	, "ReflectedType"/* name */
	, &MonoType_get_ReflectedType_m10273_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MonoType_get_TypeHandle_m10274_MethodInfo;
static const PropertyInfo MonoType_t____TypeHandle_PropertyInfo = 
{
	&MonoType_t_il2cpp_TypeInfo/* parent */
	, "TypeHandle"/* name */
	, &MonoType_get_TypeHandle_m10274_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MonoType_get_ContainsGenericParameters_m10278_MethodInfo;
static const PropertyInfo MonoType_t____ContainsGenericParameters_PropertyInfo = 
{
	&MonoType_t_il2cpp_TypeInfo/* parent */
	, "ContainsGenericParameters"/* name */
	, &MonoType_get_ContainsGenericParameters_m10278_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MonoType_get_IsGenericParameter_m10279_MethodInfo;
static const PropertyInfo MonoType_t____IsGenericParameter_PropertyInfo = 
{
	&MonoType_t_il2cpp_TypeInfo/* parent */
	, "IsGenericParameter"/* name */
	, &MonoType_get_IsGenericParameter_m10279_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* MonoType_t_PropertyInfos[] =
{
	&MonoType_t____UnderlyingSystemType_PropertyInfo,
	&MonoType_t____Assembly_PropertyInfo,
	&MonoType_t____AssemblyQualifiedName_PropertyInfo,
	&MonoType_t____BaseType_PropertyInfo,
	&MonoType_t____FullName_PropertyInfo,
	&MonoType_t____MemberType_PropertyInfo,
	&MonoType_t____Name_PropertyInfo,
	&MonoType_t____Namespace_PropertyInfo,
	&MonoType_t____Module_PropertyInfo,
	&MonoType_t____DeclaringType_PropertyInfo,
	&MonoType_t____ReflectedType_PropertyInfo,
	&MonoType_t____TypeHandle_PropertyInfo,
	&MonoType_t____ContainsGenericParameters_PropertyInfo,
	&MonoType_t____IsGenericParameter_PropertyInfo,
	NULL
};
extern const MethodInfo Type_Equals_m6808_MethodInfo;
extern const MethodInfo Type_GetHashCode_m6821_MethodInfo;
extern const MethodInfo MonoType_ToString_m10276_MethodInfo;
extern const MethodInfo MonoType_GetCustomAttributes_m10267_MethodInfo;
extern const MethodInfo MonoType_IsDefined_m10265_MethodInfo;
extern const MethodInfo MonoType_GetCustomAttributes_m10266_MethodInfo;
extern const MethodInfo Type_get_Attributes_m6788_MethodInfo;
extern const MethodInfo Type_get_HasElementType_m6790_MethodInfo;
extern const MethodInfo Type_get_IsAbstract_m6791_MethodInfo;
extern const MethodInfo Type_get_IsArray_m6792_MethodInfo;
extern const MethodInfo Type_get_IsByRef_m6793_MethodInfo;
extern const MethodInfo Type_get_IsClass_m6794_MethodInfo;
extern const MethodInfo Type_get_IsContextful_m6795_MethodInfo;
extern const MethodInfo Type_get_IsEnum_m6796_MethodInfo;
extern const MethodInfo Type_get_IsExplicitLayout_m6797_MethodInfo;
extern const MethodInfo Type_get_IsInterface_m6798_MethodInfo;
extern const MethodInfo Type_get_IsMarshalByRef_m6799_MethodInfo;
extern const MethodInfo Type_get_IsPointer_m6800_MethodInfo;
extern const MethodInfo Type_get_IsPrimitive_m6801_MethodInfo;
extern const MethodInfo Type_get_IsSealed_m6802_MethodInfo;
extern const MethodInfo Type_get_IsSerializable_m6803_MethodInfo;
extern const MethodInfo Type_get_IsValueType_m6804_MethodInfo;
extern const MethodInfo Type_Equals_m6809_MethodInfo;
extern const MethodInfo MonoType_IsSubclassOf_m10256_MethodInfo;
extern const MethodInfo MonoType_GetInterfaces_m10244_MethodInfo;
extern const MethodInfo Type_IsAssignableFrom_m6819_MethodInfo;
extern const MethodInfo Type_IsInstanceOfType_m6820_MethodInfo;
extern const MethodInfo MonoType_GetElementType_m10258_MethodInfo;
extern const MethodInfo MonoType_GetEvent_m10240_MethodInfo;
extern const MethodInfo MonoType_GetField_m10241_MethodInfo;
extern const MethodInfo MonoType_GetFields_m10243_MethodInfo;
extern const MethodInfo Type_GetMethod_m6822_MethodInfo;
extern const MethodInfo Type_GetMethod_m6823_MethodInfo;
extern const MethodInfo Type_GetMethod_m6824_MethodInfo;
extern const MethodInfo Type_GetMethod_m6825_MethodInfo;
extern const MethodInfo MonoType_GetMethodImpl_m10247_MethodInfo;
extern const MethodInfo MonoType_GetMethods_m10246_MethodInfo;
extern const MethodInfo MonoType_GetProperties_m10249_MethodInfo;
extern const MethodInfo Type_GetProperty_m6826_MethodInfo;
extern const MethodInfo Type_GetProperty_m6827_MethodInfo;
extern const MethodInfo Type_GetProperty_m6828_MethodInfo;
extern const MethodInfo Type_GetProperty_m6829_MethodInfo;
extern const MethodInfo MonoType_GetPropertyImpl_m10250_MethodInfo;
extern const MethodInfo MonoType_GetConstructorImpl_m10236_MethodInfo;
extern const MethodInfo MonoType_GetAttributeFlagsImpl_m10235_MethodInfo;
extern const MethodInfo MonoType_HasElementTypeImpl_m10251_MethodInfo;
extern const MethodInfo MonoType_IsArrayImpl_m10252_MethodInfo;
extern const MethodInfo MonoType_IsByRefImpl_m10253_MethodInfo;
extern const MethodInfo MonoType_IsPointerImpl_m10254_MethodInfo;
extern const MethodInfo MonoType_IsPrimitiveImpl_m10255_MethodInfo;
extern const MethodInfo Type_IsValueTypeImpl_m6831_MethodInfo;
extern const MethodInfo Type_IsContextfulImpl_m6832_MethodInfo;
extern const MethodInfo Type_IsMarshalByRefImpl_m6833_MethodInfo;
extern const MethodInfo Type_GetConstructor_m6834_MethodInfo;
extern const MethodInfo Type_GetConstructor_m6835_MethodInfo;
extern const MethodInfo Type_GetConstructor_m6836_MethodInfo;
extern const MethodInfo Type_GetConstructors_m6837_MethodInfo;
extern const MethodInfo MonoType_GetConstructors_m10238_MethodInfo;
extern const MethodInfo MonoType_InvokeMember_m10257_MethodInfo;
extern const MethodInfo MonoType_GetGenericArguments_m10277_MethodInfo;
extern const MethodInfo Type_get_IsGenericTypeDefinition_m6842_MethodInfo;
extern const MethodInfo MonoType_GetGenericTypeDefinition_m10280_MethodInfo;
extern const MethodInfo Type_get_IsGenericType_m6845_MethodInfo;
extern const MethodInfo Type_MakeGenericType_m6847_MethodInfo;
extern const MethodInfo MonoType_GetObjectData_m10275_MethodInfo;
static const Il2CppMethodReference MonoType_t_VTable[] =
{
	&Type_Equals_m6808_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Type_GetHashCode_m6821_MethodInfo,
	&MonoType_ToString_m10276_MethodInfo,
	&MonoType_GetCustomAttributes_m10267_MethodInfo,
	&MonoType_IsDefined_m10265_MethodInfo,
	&MonoType_get_DeclaringType_m10272_MethodInfo,
	&MonoType_get_MemberType_m10268_MethodInfo,
	&MonoType_get_Name_m10269_MethodInfo,
	&MonoType_get_ReflectedType_m10273_MethodInfo,
	&MonoType_get_Module_m10271_MethodInfo,
	&MonoType_IsDefined_m10265_MethodInfo,
	&MonoType_GetCustomAttributes_m10266_MethodInfo,
	&MonoType_GetCustomAttributes_m10267_MethodInfo,
	&MonoType_get_Assembly_m10260_MethodInfo,
	&MonoType_get_AssemblyQualifiedName_m10261_MethodInfo,
	&Type_get_Attributes_m6788_MethodInfo,
	&MonoType_get_BaseType_m10263_MethodInfo,
	&MonoType_get_FullName_m10264_MethodInfo,
	&Type_get_HasElementType_m6790_MethodInfo,
	&Type_get_IsAbstract_m6791_MethodInfo,
	&Type_get_IsArray_m6792_MethodInfo,
	&Type_get_IsByRef_m6793_MethodInfo,
	&Type_get_IsClass_m6794_MethodInfo,
	&Type_get_IsContextful_m6795_MethodInfo,
	&Type_get_IsEnum_m6796_MethodInfo,
	&Type_get_IsExplicitLayout_m6797_MethodInfo,
	&Type_get_IsInterface_m6798_MethodInfo,
	&Type_get_IsMarshalByRef_m6799_MethodInfo,
	&Type_get_IsPointer_m6800_MethodInfo,
	&Type_get_IsPrimitive_m6801_MethodInfo,
	&Type_get_IsSealed_m6802_MethodInfo,
	&Type_get_IsSerializable_m6803_MethodInfo,
	&Type_get_IsValueType_m6804_MethodInfo,
	&MonoType_get_Namespace_m10270_MethodInfo,
	&MonoType_get_TypeHandle_m10274_MethodInfo,
	&MonoType_get_UnderlyingSystemType_m10259_MethodInfo,
	&Type_Equals_m6809_MethodInfo,
	&MonoType_IsSubclassOf_m10256_MethodInfo,
	&MonoType_GetInterfaces_m10244_MethodInfo,
	&Type_IsAssignableFrom_m6819_MethodInfo,
	&Type_IsInstanceOfType_m6820_MethodInfo,
	&MonoType_GetElementType_m10258_MethodInfo,
	&MonoType_GetEvent_m10240_MethodInfo,
	&MonoType_GetField_m10241_MethodInfo,
	&MonoType_GetFields_m10243_MethodInfo,
	&Type_GetMethod_m6822_MethodInfo,
	&Type_GetMethod_m6823_MethodInfo,
	&Type_GetMethod_m6824_MethodInfo,
	&Type_GetMethod_m6825_MethodInfo,
	&MonoType_GetMethodImpl_m10247_MethodInfo,
	&MonoType_GetMethods_m10246_MethodInfo,
	&MonoType_GetProperties_m10249_MethodInfo,
	&Type_GetProperty_m6826_MethodInfo,
	&Type_GetProperty_m6827_MethodInfo,
	&Type_GetProperty_m6828_MethodInfo,
	&Type_GetProperty_m6829_MethodInfo,
	&MonoType_GetPropertyImpl_m10250_MethodInfo,
	&MonoType_GetConstructorImpl_m10236_MethodInfo,
	&MonoType_GetAttributeFlagsImpl_m10235_MethodInfo,
	&MonoType_HasElementTypeImpl_m10251_MethodInfo,
	&MonoType_IsArrayImpl_m10252_MethodInfo,
	&MonoType_IsByRefImpl_m10253_MethodInfo,
	&MonoType_IsPointerImpl_m10254_MethodInfo,
	&MonoType_IsPrimitiveImpl_m10255_MethodInfo,
	&Type_IsValueTypeImpl_m6831_MethodInfo,
	&Type_IsContextfulImpl_m6832_MethodInfo,
	&Type_IsMarshalByRefImpl_m6833_MethodInfo,
	&Type_GetConstructor_m6834_MethodInfo,
	&Type_GetConstructor_m6835_MethodInfo,
	&Type_GetConstructor_m6836_MethodInfo,
	&Type_GetConstructors_m6837_MethodInfo,
	&MonoType_GetConstructors_m10238_MethodInfo,
	&MonoType_InvokeMember_m10257_MethodInfo,
	&MonoType_GetGenericArguments_m10277_MethodInfo,
	&MonoType_get_ContainsGenericParameters_m10278_MethodInfo,
	&Type_get_IsGenericTypeDefinition_m6842_MethodInfo,
	&MonoType_GetGenericTypeDefinition_m10280_MethodInfo,
	&Type_get_IsGenericType_m6845_MethodInfo,
	&Type_MakeGenericType_m6847_MethodInfo,
	&MonoType_get_IsGenericParameter_m10279_MethodInfo,
	&MonoType_GetObjectData_m10275_MethodInfo,
};
static bool MonoType_t_VTableIsGenericMethod[] =
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
static const Il2CppType* MonoType_t_InterfacesTypeInfos[] = 
{
	&ISerializable_t435_0_0_0,
};
extern const Il2CppType IReflect_t1966_0_0_0;
extern const Il2CppType _Type_t1964_0_0_0;
extern const Il2CppType _MemberInfo_t1965_0_0_0;
static Il2CppInterfaceOffsetPair MonoType_t_InterfacesOffsets[] = 
{
	{ &IReflect_t1966_0_0_0, 14},
	{ &_Type_t1964_0_0_0, 14},
	{ &ICustomAttributeProvider_t1928_0_0_0, 4},
	{ &_MemberInfo_t1965_0_0_0, 6},
	{ &ISerializable_t435_0_0_0, 81},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType MonoType_t_0_0_0;
extern const Il2CppType MonoType_t_1_0_0;
struct MonoType_t;
const Il2CppTypeDefinitionMetadata MonoType_t_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, MonoType_t_InterfacesTypeInfos/* implementedInterfaces */
	, MonoType_t_InterfacesOffsets/* interfaceOffsets */
	, &Type_t_0_0_0/* parent */
	, MonoType_t_VTable/* vtableMethods */
	, MonoType_t_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2417/* fieldStart */

};
TypeInfo MonoType_t_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "MonoType"/* name */
	, "System"/* namespaze */
	, MonoType_t_MethodInfos/* methods */
	, MonoType_t_PropertyInfos/* properties */
	, NULL/* events */
	, &MonoType_t_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &MonoType_t_0_0_0/* byval_arg */
	, &MonoType_t_1_0_0/* this_arg */
	, &MonoType_t_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (MonoType_t)/* instance_size */
	, sizeof (MonoType_t)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056768/* flags */
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
	, 50/* method_count */
	, 14/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 82/* vtable_count */
	, 1/* interfaces_count */
	, 5/* interface_offsets_count */

};
// System.MulticastNotSupportedException
#include "mscorlib_System_MulticastNotSupportedException.h"
// Metadata Definition System.MulticastNotSupportedException
extern TypeInfo MulticastNotSupportedException_t1865_il2cpp_TypeInfo;
// System.MulticastNotSupportedException
#include "mscorlib_System_MulticastNotSupportedExceptionMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.MulticastNotSupportedException::.ctor()
extern const MethodInfo MulticastNotSupportedException__ctor_m10283_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MulticastNotSupportedException__ctor_m10283/* method */
	, &MulticastNotSupportedException_t1865_il2cpp_TypeInfo/* declaring_type */
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
	, 5299/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo MulticastNotSupportedException_t1865_MulticastNotSupportedException__ctor_m10284_ParameterInfos[] = 
{
	{"message", 0, 134224293, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.MulticastNotSupportedException::.ctor(System.String)
extern const MethodInfo MulticastNotSupportedException__ctor_m10284_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MulticastNotSupportedException__ctor_m10284/* method */
	, &MulticastNotSupportedException_t1865_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, MulticastNotSupportedException_t1865_MulticastNotSupportedException__ctor_m10284_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5300/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo MulticastNotSupportedException_t1865_MulticastNotSupportedException__ctor_m10285_ParameterInfos[] = 
{
	{"info", 0, 134224294, 0, &SerializationInfo_t732_0_0_0},
	{"context", 1, 134224295, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.MulticastNotSupportedException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo MulticastNotSupportedException__ctor_m10285_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MulticastNotSupportedException__ctor_m10285/* method */
	, &MulticastNotSupportedException_t1865_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, MulticastNotSupportedException_t1865_MulticastNotSupportedException__ctor_m10285_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5301/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* MulticastNotSupportedException_t1865_MethodInfos[] =
{
	&MulticastNotSupportedException__ctor_m10283_MethodInfo,
	&MulticastNotSupportedException__ctor_m10284_MethodInfo,
	&MulticastNotSupportedException__ctor_m10285_MethodInfo,
	NULL
};
static const Il2CppMethodReference MulticastNotSupportedException_t1865_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Exception_ToString_m3797_MethodInfo,
	&Exception_GetObjectData_m3798_MethodInfo,
	&Exception_get_InnerException_m3799_MethodInfo,
	&Exception_get_Message_m3800_MethodInfo,
	&Exception_get_Source_m3801_MethodInfo,
	&Exception_get_StackTrace_m3802_MethodInfo,
	&Exception_GetObjectData_m3798_MethodInfo,
	&Exception_GetType_m3803_MethodInfo,
};
static bool MulticastNotSupportedException_t1865_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair MulticastNotSupportedException_t1865_InterfacesOffsets[] = 
{
	{ &ISerializable_t435_0_0_0, 4},
	{ &_Exception_t832_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType MulticastNotSupportedException_t1865_0_0_0;
extern const Il2CppType MulticastNotSupportedException_t1865_1_0_0;
struct MulticastNotSupportedException_t1865;
const Il2CppTypeDefinitionMetadata MulticastNotSupportedException_t1865_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, MulticastNotSupportedException_t1865_InterfacesOffsets/* interfaceOffsets */
	, &SystemException_t1194_0_0_0/* parent */
	, MulticastNotSupportedException_t1865_VTable/* vtableMethods */
	, MulticastNotSupportedException_t1865_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo MulticastNotSupportedException_t1865_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "MulticastNotSupportedException"/* name */
	, "System"/* namespaze */
	, MulticastNotSupportedException_t1865_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &MulticastNotSupportedException_t1865_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 898/* custom_attributes_cache */
	, &MulticastNotSupportedException_t1865_0_0_0/* byval_arg */
	, &MulticastNotSupportedException_t1865_1_0_0/* this_arg */
	, &MulticastNotSupportedException_t1865_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (MulticastNotSupportedException_t1865)/* instance_size */
	, sizeof (MulticastNotSupportedException_t1865)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057025/* flags */
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
	, 11/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.NonSerializedAttribute
#include "mscorlib_System_NonSerializedAttribute.h"
// Metadata Definition System.NonSerializedAttribute
extern TypeInfo NonSerializedAttribute_t1866_il2cpp_TypeInfo;
// System.NonSerializedAttribute
#include "mscorlib_System_NonSerializedAttributeMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NonSerializedAttribute::.ctor()
extern const MethodInfo NonSerializedAttribute__ctor_m10286_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&NonSerializedAttribute__ctor_m10286/* method */
	, &NonSerializedAttribute_t1866_il2cpp_TypeInfo/* declaring_type */
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
	, 5302/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* NonSerializedAttribute_t1866_MethodInfos[] =
{
	&NonSerializedAttribute__ctor_m10286_MethodInfo,
	NULL
};
static const Il2CppMethodReference NonSerializedAttribute_t1866_VTable[] =
{
	&Attribute_Equals_m3804_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Attribute_GetHashCode_m3664_MethodInfo,
	&Object_ToString_m380_MethodInfo,
};
static bool NonSerializedAttribute_t1866_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair NonSerializedAttribute_t1866_InterfacesOffsets[] = 
{
	{ &_Attribute_t842_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType NonSerializedAttribute_t1866_0_0_0;
extern const Il2CppType NonSerializedAttribute_t1866_1_0_0;
struct NonSerializedAttribute_t1866;
const Il2CppTypeDefinitionMetadata NonSerializedAttribute_t1866_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NonSerializedAttribute_t1866_InterfacesOffsets/* interfaceOffsets */
	, &Attribute_t544_0_0_0/* parent */
	, NonSerializedAttribute_t1866_VTable/* vtableMethods */
	, NonSerializedAttribute_t1866_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo NonSerializedAttribute_t1866_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "NonSerializedAttribute"/* name */
	, "System"/* namespaze */
	, NonSerializedAttribute_t1866_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &NonSerializedAttribute_t1866_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 899/* custom_attributes_cache */
	, &NonSerializedAttribute_t1866_0_0_0/* byval_arg */
	, &NonSerializedAttribute_t1866_1_0_0/* this_arg */
	, &NonSerializedAttribute_t1866_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (NonSerializedAttribute_t1866)/* instance_size */
	, sizeof (NonSerializedAttribute_t1866)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048833/* flags */
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
	, 1/* interface_offsets_count */

};
// System.NotImplementedException
#include "mscorlib_System_NotImplementedException.h"
// Metadata Definition System.NotImplementedException
extern TypeInfo NotImplementedException_t1178_il2cpp_TypeInfo;
// System.NotImplementedException
#include "mscorlib_System_NotImplementedExceptionMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NotImplementedException::.ctor()
extern const MethodInfo NotImplementedException__ctor_m10287_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&NotImplementedException__ctor_m10287/* method */
	, &NotImplementedException_t1178_il2cpp_TypeInfo/* declaring_type */
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
	, 5303/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo NotImplementedException_t1178_NotImplementedException__ctor_m4907_ParameterInfos[] = 
{
	{"message", 0, 134224296, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.NotImplementedException::.ctor(System.String)
extern const MethodInfo NotImplementedException__ctor_m4907_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&NotImplementedException__ctor_m4907/* method */
	, &NotImplementedException_t1178_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, NotImplementedException_t1178_NotImplementedException__ctor_m4907_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5304/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo NotImplementedException_t1178_NotImplementedException__ctor_m10288_ParameterInfos[] = 
{
	{"info", 0, 134224297, 0, &SerializationInfo_t732_0_0_0},
	{"context", 1, 134224298, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NotImplementedException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo NotImplementedException__ctor_m10288_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&NotImplementedException__ctor_m10288/* method */
	, &NotImplementedException_t1178_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, NotImplementedException_t1178_NotImplementedException__ctor_m10288_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5305/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* NotImplementedException_t1178_MethodInfos[] =
{
	&NotImplementedException__ctor_m10287_MethodInfo,
	&NotImplementedException__ctor_m4907_MethodInfo,
	&NotImplementedException__ctor_m10288_MethodInfo,
	NULL
};
static const Il2CppMethodReference NotImplementedException_t1178_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Exception_ToString_m3797_MethodInfo,
	&Exception_GetObjectData_m3798_MethodInfo,
	&Exception_get_InnerException_m3799_MethodInfo,
	&Exception_get_Message_m3800_MethodInfo,
	&Exception_get_Source_m3801_MethodInfo,
	&Exception_get_StackTrace_m3802_MethodInfo,
	&Exception_GetObjectData_m3798_MethodInfo,
	&Exception_GetType_m3803_MethodInfo,
};
static bool NotImplementedException_t1178_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair NotImplementedException_t1178_InterfacesOffsets[] = 
{
	{ &ISerializable_t435_0_0_0, 4},
	{ &_Exception_t832_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType NotImplementedException_t1178_0_0_0;
extern const Il2CppType NotImplementedException_t1178_1_0_0;
struct NotImplementedException_t1178;
const Il2CppTypeDefinitionMetadata NotImplementedException_t1178_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NotImplementedException_t1178_InterfacesOffsets/* interfaceOffsets */
	, &SystemException_t1194_0_0_0/* parent */
	, NotImplementedException_t1178_VTable/* vtableMethods */
	, NotImplementedException_t1178_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo NotImplementedException_t1178_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "NotImplementedException"/* name */
	, "System"/* namespaze */
	, NotImplementedException_t1178_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &NotImplementedException_t1178_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 900/* custom_attributes_cache */
	, &NotImplementedException_t1178_0_0_0/* byval_arg */
	, &NotImplementedException_t1178_1_0_0/* this_arg */
	, &NotImplementedException_t1178_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (NotImplementedException_t1178)/* instance_size */
	, sizeof (NotImplementedException_t1178)/* actualSize */
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
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// Metadata Definition System.NotSupportedException
extern TypeInfo NotSupportedException_t72_il2cpp_TypeInfo;
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NotSupportedException::.ctor()
extern const MethodInfo NotSupportedException__ctor_m227_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&NotSupportedException__ctor_m227/* method */
	, &NotSupportedException_t72_il2cpp_TypeInfo/* declaring_type */
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
	, 5306/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo NotSupportedException_t72_NotSupportedException__ctor_m4881_ParameterInfos[] = 
{
	{"message", 0, 134224299, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.NotSupportedException::.ctor(System.String)
extern const MethodInfo NotSupportedException__ctor_m4881_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&NotSupportedException__ctor_m4881/* method */
	, &NotSupportedException_t72_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, NotSupportedException_t72_NotSupportedException__ctor_m4881_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5307/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo NotSupportedException_t72_NotSupportedException__ctor_m10289_ParameterInfos[] = 
{
	{"info", 0, 134224300, 0, &SerializationInfo_t732_0_0_0},
	{"context", 1, 134224301, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NotSupportedException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo NotSupportedException__ctor_m10289_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&NotSupportedException__ctor_m10289/* method */
	, &NotSupportedException_t72_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, NotSupportedException_t72_NotSupportedException__ctor_m10289_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5308/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* NotSupportedException_t72_MethodInfos[] =
{
	&NotSupportedException__ctor_m227_MethodInfo,
	&NotSupportedException__ctor_m4881_MethodInfo,
	&NotSupportedException__ctor_m10289_MethodInfo,
	NULL
};
static const Il2CppMethodReference NotSupportedException_t72_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Exception_ToString_m3797_MethodInfo,
	&Exception_GetObjectData_m3798_MethodInfo,
	&Exception_get_InnerException_m3799_MethodInfo,
	&Exception_get_Message_m3800_MethodInfo,
	&Exception_get_Source_m3801_MethodInfo,
	&Exception_get_StackTrace_m3802_MethodInfo,
	&Exception_GetObjectData_m3798_MethodInfo,
	&Exception_GetType_m3803_MethodInfo,
};
static bool NotSupportedException_t72_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair NotSupportedException_t72_InterfacesOffsets[] = 
{
	{ &ISerializable_t435_0_0_0, 4},
	{ &_Exception_t832_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType NotSupportedException_t72_0_0_0;
extern const Il2CppType NotSupportedException_t72_1_0_0;
struct NotSupportedException_t72;
const Il2CppTypeDefinitionMetadata NotSupportedException_t72_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NotSupportedException_t72_InterfacesOffsets/* interfaceOffsets */
	, &SystemException_t1194_0_0_0/* parent */
	, NotSupportedException_t72_VTable/* vtableMethods */
	, NotSupportedException_t72_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2418/* fieldStart */

};
TypeInfo NotSupportedException_t72_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "NotSupportedException"/* name */
	, "System"/* namespaze */
	, NotSupportedException_t72_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &NotSupportedException_t72_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 901/* custom_attributes_cache */
	, &NotSupportedException_t72_0_0_0/* byval_arg */
	, &NotSupportedException_t72_1_0_0/* this_arg */
	, &NotSupportedException_t72_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (NotSupportedException_t72)/* instance_size */
	, sizeof (NotSupportedException_t72)/* actualSize */
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
	, 3/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.NullReferenceException
#include "mscorlib_System_NullReferenceException.h"
// Metadata Definition System.NullReferenceException
extern TypeInfo NullReferenceException_t734_il2cpp_TypeInfo;
// System.NullReferenceException
#include "mscorlib_System_NullReferenceExceptionMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NullReferenceException::.ctor()
extern const MethodInfo NullReferenceException__ctor_m10290_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&NullReferenceException__ctor_m10290/* method */
	, &NullReferenceException_t734_il2cpp_TypeInfo/* declaring_type */
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
	, 5309/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo NullReferenceException_t734_NullReferenceException__ctor_m3508_ParameterInfos[] = 
{
	{"message", 0, 134224302, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.NullReferenceException::.ctor(System.String)
extern const MethodInfo NullReferenceException__ctor_m3508_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&NullReferenceException__ctor_m3508/* method */
	, &NullReferenceException_t734_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, NullReferenceException_t734_NullReferenceException__ctor_m3508_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5310/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo NullReferenceException_t734_NullReferenceException__ctor_m10291_ParameterInfos[] = 
{
	{"info", 0, 134224303, 0, &SerializationInfo_t732_0_0_0},
	{"context", 1, 134224304, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NullReferenceException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo NullReferenceException__ctor_m10291_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&NullReferenceException__ctor_m10291/* method */
	, &NullReferenceException_t734_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, NullReferenceException_t734_NullReferenceException__ctor_m10291_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5311/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* NullReferenceException_t734_MethodInfos[] =
{
	&NullReferenceException__ctor_m10290_MethodInfo,
	&NullReferenceException__ctor_m3508_MethodInfo,
	&NullReferenceException__ctor_m10291_MethodInfo,
	NULL
};
static const Il2CppMethodReference NullReferenceException_t734_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Exception_ToString_m3797_MethodInfo,
	&Exception_GetObjectData_m3798_MethodInfo,
	&Exception_get_InnerException_m3799_MethodInfo,
	&Exception_get_Message_m3800_MethodInfo,
	&Exception_get_Source_m3801_MethodInfo,
	&Exception_get_StackTrace_m3802_MethodInfo,
	&Exception_GetObjectData_m3798_MethodInfo,
	&Exception_GetType_m3803_MethodInfo,
};
static bool NullReferenceException_t734_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair NullReferenceException_t734_InterfacesOffsets[] = 
{
	{ &ISerializable_t435_0_0_0, 4},
	{ &_Exception_t832_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType NullReferenceException_t734_0_0_0;
extern const Il2CppType NullReferenceException_t734_1_0_0;
struct NullReferenceException_t734;
const Il2CppTypeDefinitionMetadata NullReferenceException_t734_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NullReferenceException_t734_InterfacesOffsets/* interfaceOffsets */
	, &SystemException_t1194_0_0_0/* parent */
	, NullReferenceException_t734_VTable/* vtableMethods */
	, NullReferenceException_t734_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2419/* fieldStart */

};
TypeInfo NullReferenceException_t734_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "NullReferenceException"/* name */
	, "System"/* namespaze */
	, NullReferenceException_t734_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &NullReferenceException_t734_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 902/* custom_attributes_cache */
	, &NullReferenceException_t734_0_0_0/* byval_arg */
	, &NullReferenceException_t734_1_0_0/* this_arg */
	, &NullReferenceException_t734_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (NullReferenceException_t734)/* instance_size */
	, sizeof (NullReferenceException_t734)/* actualSize */
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
	, 3/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.NumberFormatter/CustomInfo
#include "mscorlib_System_NumberFormatter_CustomInfo.h"
// Metadata Definition System.NumberFormatter/CustomInfo
extern TypeInfo CustomInfo_t1867_il2cpp_TypeInfo;
// System.NumberFormatter/CustomInfo
#include "mscorlib_System_NumberFormatter_CustomInfoMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter/CustomInfo::.ctor()
extern const MethodInfo CustomInfo__ctor_m10292_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CustomInfo__ctor_m10292/* method */
	, &CustomInfo_t1867_il2cpp_TypeInfo/* declaring_type */
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
	, 5406/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Boolean_t111_1_0_0;
extern const Il2CppType Boolean_t111_1_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType Int32_t75_1_0_0;
extern const Il2CppType Int32_t75_1_0_0;
extern const Il2CppType Int32_t75_1_0_0;
static const ParameterInfo CustomInfo_t1867_CustomInfo_GetActiveSection_m10293_ParameterInfos[] = 
{
	{"format", 0, 134224455, 0, &String_t_0_0_0},
	{"positive", 1, 134224456, 0, &Boolean_t111_1_0_0},
	{"zero", 2, 134224457, 0, &Boolean_t111_0_0_0},
	{"offset", 3, 134224458, 0, &Int32_t75_1_0_0},
	{"length", 4, 134224459, 0, &Int32_t75_1_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_BooleanU26_t448_SByte_t113_Int32U26_t456_Int32U26_t456 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter/CustomInfo::GetActiveSection(System.String,System.Boolean&,System.Boolean,System.Int32&,System.Int32&)
extern const MethodInfo CustomInfo_GetActiveSection_m10293_MethodInfo = 
{
	"GetActiveSection"/* name */
	, (methodPointerType)&CustomInfo_GetActiveSection_m10293/* method */
	, &CustomInfo_t1867_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_BooleanU26_t448_SByte_t113_Int32U26_t456_Int32U26_t456/* invoker_method */
	, CustomInfo_t1867_CustomInfo_GetActiveSection_m10293_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5407/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType NumberFormatInfo_t1496_0_0_0;
extern const Il2CppType NumberFormatInfo_t1496_0_0_0;
static const ParameterInfo CustomInfo_t1867_CustomInfo_Parse_m10294_ParameterInfos[] = 
{
	{"format", 0, 134224460, 0, &String_t_0_0_0},
	{"offset", 1, 134224461, 0, &Int32_t75_0_0_0},
	{"length", 2, 134224462, 0, &Int32_t75_0_0_0},
	{"nfi", 3, 134224463, 0, &NumberFormatInfo_t1496_0_0_0},
};
extern const Il2CppType CustomInfo_t1867_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Int32_t75_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.NumberFormatter/CustomInfo System.NumberFormatter/CustomInfo::Parse(System.String,System.Int32,System.Int32,System.Globalization.NumberFormatInfo)
extern const MethodInfo CustomInfo_Parse_m10294_MethodInfo = 
{
	"Parse"/* name */
	, (methodPointerType)&CustomInfo_Parse_m10294/* method */
	, &CustomInfo_t1867_il2cpp_TypeInfo/* declaring_type */
	, &CustomInfo_t1867_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32_t75_Int32_t75_Object_t/* invoker_method */
	, CustomInfo_t1867_CustomInfo_Parse_m10294_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5408/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType NumberFormatInfo_t1496_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
extern const Il2CppType StringBuilder_t343_0_0_0;
extern const Il2CppType StringBuilder_t343_0_0_0;
extern const Il2CppType StringBuilder_t343_0_0_0;
static const ParameterInfo CustomInfo_t1867_CustomInfo_Format_m10295_ParameterInfos[] = 
{
	{"format", 0, 134224464, 0, &String_t_0_0_0},
	{"offset", 1, 134224465, 0, &Int32_t75_0_0_0},
	{"length", 2, 134224466, 0, &Int32_t75_0_0_0},
	{"nfi", 3, 134224467, 0, &NumberFormatInfo_t1496_0_0_0},
	{"positive", 4, 134224468, 0, &Boolean_t111_0_0_0},
	{"sb_int", 5, 134224469, 0, &StringBuilder_t343_0_0_0},
	{"sb_dec", 6, 134224470, 0, &StringBuilder_t343_0_0_0},
	{"sb_exp", 7, 134224471, 0, &StringBuilder_t343_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Int32_t75_Int32_t75_Object_t_SByte_t113_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.NumberFormatter/CustomInfo::Format(System.String,System.Int32,System.Int32,System.Globalization.NumberFormatInfo,System.Boolean,System.Text.StringBuilder,System.Text.StringBuilder,System.Text.StringBuilder)
extern const MethodInfo CustomInfo_Format_m10295_MethodInfo = 
{
	"Format"/* name */
	, (methodPointerType)&CustomInfo_Format_m10295/* method */
	, &CustomInfo_t1867_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32_t75_Int32_t75_Object_t_SByte_t113_Object_t_Object_t_Object_t/* invoker_method */
	, CustomInfo_t1867_CustomInfo_Format_m10295_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 8/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5409/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* CustomInfo_t1867_MethodInfos[] =
{
	&CustomInfo__ctor_m10292_MethodInfo,
	&CustomInfo_GetActiveSection_m10293_MethodInfo,
	&CustomInfo_Parse_m10294_MethodInfo,
	&CustomInfo_Format_m10295_MethodInfo,
	NULL
};
static const Il2CppMethodReference CustomInfo_t1867_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
};
static bool CustomInfo_t1867_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType CustomInfo_t1867_1_0_0;
extern TypeInfo NumberFormatter_t1868_il2cpp_TypeInfo;
extern const Il2CppType NumberFormatter_t1868_0_0_0;
struct CustomInfo_t1867;
const Il2CppTypeDefinitionMetadata CustomInfo_t1867_DefinitionMetadata = 
{
	&NumberFormatter_t1868_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, CustomInfo_t1867_VTable/* vtableMethods */
	, CustomInfo_t1867_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2420/* fieldStart */

};
TypeInfo CustomInfo_t1867_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "CustomInfo"/* name */
	, ""/* namespaze */
	, CustomInfo_t1867_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &CustomInfo_t1867_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &CustomInfo_t1867_0_0_0/* byval_arg */
	, &CustomInfo_t1867_1_0_0/* this_arg */
	, &CustomInfo_t1867_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CustomInfo_t1867)/* instance_size */
	, sizeof (CustomInfo_t1867)/* actualSize */
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
	, 0/* property_count */
	, 14/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.NumberFormatter
#include "mscorlib_System_NumberFormatter.h"
// Metadata Definition System.NumberFormatter
// System.NumberFormatter
#include "mscorlib_System_NumberFormatterMethodDeclarations.h"
extern const Il2CppType Thread_t1637_0_0_0;
extern const Il2CppType Thread_t1637_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter__ctor_m10296_ParameterInfos[] = 
{
	{"current", 0, 134224305, 0, &Thread_t1637_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::.ctor(System.Threading.Thread)
extern const MethodInfo NumberFormatter__ctor_m10296_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&NumberFormatter__ctor_m10296/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter__ctor_m10296_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5312/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::.cctor()
extern const MethodInfo NumberFormatter__cctor_m10297_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&NumberFormatter__cctor_m10297/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
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
	, 5313/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UInt64U2A_t2408_1_0_2;
extern const Il2CppType UInt64U2A_t2408_1_0_0;
extern const Il2CppType Int32U2A_t2409_1_0_2;
extern const Il2CppType Int32U2A_t2409_1_0_0;
extern const Il2CppType CharU2A_t2060_1_0_2;
extern const Il2CppType CharU2A_t2060_1_0_0;
extern const Il2CppType CharU2A_t2060_1_0_2;
extern const Il2CppType Int64U2A_t2410_1_0_2;
extern const Il2CppType Int64U2A_t2410_1_0_0;
extern const Il2CppType Int32U2A_t2409_1_0_2;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_GetFormatterTables_m10298_ParameterInfos[] = 
{
	{"MantissaBitsTable", 0, 134224306, 0, &UInt64U2A_t2408_1_0_2},
	{"TensExponentTable", 1, 134224307, 0, &Int32U2A_t2409_1_0_2},
	{"DigitLowerTable", 2, 134224308, 0, &CharU2A_t2060_1_0_2},
	{"DigitUpperTable", 3, 134224309, 0, &CharU2A_t2060_1_0_2},
	{"TenPowersList", 4, 134224310, 0, &Int64U2A_t2410_1_0_2},
	{"DecHexDigits", 5, 134224311, 0, &Int32U2A_t2409_1_0_2},
};
extern void* RuntimeInvoker_Void_t110_UInt64U2AU26_t2411_Int32U2AU26_t2412_CharU2AU26_t2413_CharU2AU26_t2413_Int64U2AU26_t2414_Int32U2AU26_t2412 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::GetFormatterTables(System.UInt64*&,System.Int32*&,System.Char*&,System.Char*&,System.Int64*&,System.Int32*&)
extern const MethodInfo NumberFormatter_GetFormatterTables_m10298_MethodInfo = 
{
	"GetFormatterTables"/* name */
	, (methodPointerType)&NumberFormatter_GetFormatterTables_m10298/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_UInt64U2AU26_t2411_Int32U2AU26_t2412_CharU2AU26_t2413_CharU2AU26_t2413_Int64U2AU26_t2414_Int32U2AU26_t2412/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_GetFormatterTables_m10298_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 6/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5314/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_GetTenPowerOf_m10299_ParameterInfos[] = 
{
	{"i", 0, 134224312, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Int64_t760_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int64 System.NumberFormatter::GetTenPowerOf(System.Int32)
extern const MethodInfo NumberFormatter_GetTenPowerOf_m10299_MethodInfo = 
{
	"GetTenPowerOf"/* name */
	, (methodPointerType)&NumberFormatter_GetTenPowerOf_m10299/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Int64_t760_0_0_0/* return_type */
	, RuntimeInvoker_Int64_t760_Int32_t75/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_GetTenPowerOf_m10299_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5315/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UInt32_t751_0_0_0;
extern const Il2CppType UInt32_t751_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_InitDecHexDigits_m10300_ParameterInfos[] = 
{
	{"value", 0, 134224313, 0, &UInt32_t751_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt32)
extern const MethodInfo NumberFormatter_InitDecHexDigits_m10300_MethodInfo = 
{
	"InitDecHexDigits"/* name */
	, (methodPointerType)&NumberFormatter_InitDecHexDigits_m10300/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_InitDecHexDigits_m10300_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5316/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UInt64_t763_0_0_0;
extern const Il2CppType UInt64_t763_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_InitDecHexDigits_m10301_ParameterInfos[] = 
{
	{"value", 0, 134224314, 0, &UInt64_t763_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int64_t760 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt64)
extern const MethodInfo NumberFormatter_InitDecHexDigits_m10301_MethodInfo = 
{
	"InitDecHexDigits"/* name */
	, (methodPointerType)&NumberFormatter_InitDecHexDigits_m10301/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int64_t760/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_InitDecHexDigits_m10301_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5317/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UInt32_t751_0_0_0;
extern const Il2CppType UInt64_t763_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_InitDecHexDigits_m10302_ParameterInfos[] = 
{
	{"hi", 0, 134224315, 0, &UInt32_t751_0_0_0},
	{"lo", 1, 134224316, 0, &UInt64_t763_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75_Int64_t760 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt32,System.UInt64)
extern const MethodInfo NumberFormatter_InitDecHexDigits_m10302_MethodInfo = 
{
	"InitDecHexDigits"/* name */
	, (methodPointerType)&NumberFormatter_InitDecHexDigits_m10302/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75_Int64_t760/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_InitDecHexDigits_m10302_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5318/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_FastToDecHex_m10303_ParameterInfos[] = 
{
	{"val", 0, 134224317, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_UInt32_t751_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.UInt32 System.NumberFormatter::FastToDecHex(System.Int32)
extern const MethodInfo NumberFormatter_FastToDecHex_m10303_MethodInfo = 
{
	"FastToDecHex"/* name */
	, (methodPointerType)&NumberFormatter_FastToDecHex_m10303/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t751_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t751_Int32_t75/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_FastToDecHex_m10303_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5319/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_ToDecHex_m10304_ParameterInfos[] = 
{
	{"val", 0, 134224318, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_UInt32_t751_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.UInt32 System.NumberFormatter::ToDecHex(System.Int32)
extern const MethodInfo NumberFormatter_ToDecHex_m10304_MethodInfo = 
{
	"ToDecHex"/* name */
	, (methodPointerType)&NumberFormatter_ToDecHex_m10304/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t751_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t751_Int32_t75/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_ToDecHex_m10304_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5320/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_FastDecHexLen_m10305_ParameterInfos[] = 
{
	{"val", 0, 134224319, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.NumberFormatter::FastDecHexLen(System.Int32)
extern const MethodInfo NumberFormatter_FastDecHexLen_m10305_MethodInfo = 
{
	"FastDecHexLen"/* name */
	, (methodPointerType)&NumberFormatter_FastDecHexLen_m10305/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Int32_t75/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_FastDecHexLen_m10305_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5321/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UInt32_t751_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_DecHexLen_m10306_ParameterInfos[] = 
{
	{"val", 0, 134224320, 0, &UInt32_t751_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.NumberFormatter::DecHexLen(System.UInt32)
extern const MethodInfo NumberFormatter_DecHexLen_m10306_MethodInfo = 
{
	"DecHexLen"/* name */
	, (methodPointerType)&NumberFormatter_DecHexLen_m10306/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Int32_t75/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_DecHexLen_m10306_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5322/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.NumberFormatter::DecHexLen()
extern const MethodInfo NumberFormatter_DecHexLen_m10307_MethodInfo = 
{
	"DecHexLen"/* name */
	, (methodPointerType)&NumberFormatter_DecHexLen_m10307/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
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
	, 5323/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int64_t760_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_ScaleOrder_m10308_ParameterInfos[] = 
{
	{"hi", 0, 134224321, 0, &Int64_t760_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Int64_t760 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.NumberFormatter::ScaleOrder(System.Int64)
extern const MethodInfo NumberFormatter_ScaleOrder_m10308_MethodInfo = 
{
	"ScaleOrder"/* name */
	, (methodPointerType)&NumberFormatter_ScaleOrder_m10308/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Int64_t760/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_ScaleOrder_m10308_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5324/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.NumberFormatter::InitialFloatingPrecision()
extern const MethodInfo NumberFormatter_InitialFloatingPrecision_m10309_MethodInfo = 
{
	"InitialFloatingPrecision"/* name */
	, (methodPointerType)&NumberFormatter_InitialFloatingPrecision_m10309/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
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
	, 5325/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_ParsePrecision_m10310_ParameterInfos[] = 
{
	{"format", 0, 134224322, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.NumberFormatter::ParsePrecision(System.String)
extern const MethodInfo NumberFormatter_ParsePrecision_m10310_MethodInfo = 
{
	"ParsePrecision"/* name */
	, (methodPointerType)&NumberFormatter_ParsePrecision_m10310/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_ParsePrecision_m10310_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5326/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_Init_m10311_ParameterInfos[] = 
{
	{"format", 0, 134224323, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::Init(System.String)
extern const MethodInfo NumberFormatter_Init_m10311_MethodInfo = 
{
	"Init"/* name */
	, (methodPointerType)&NumberFormatter_Init_m10311/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_Init_m10311_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5327/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UInt64_t763_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_InitHex_m10312_ParameterInfos[] = 
{
	{"value", 0, 134224324, 0, &UInt64_t763_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int64_t760 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::InitHex(System.UInt64)
extern const MethodInfo NumberFormatter_InitHex_m10312_MethodInfo = 
{
	"InitHex"/* name */
	, (methodPointerType)&NumberFormatter_InitHex_m10312/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int64_t760/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_InitHex_m10312_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5328/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_Init_m10313_ParameterInfos[] = 
{
	{"format", 0, 134224325, 0, &String_t_0_0_0},
	{"value", 1, 134224326, 0, &Int32_t75_0_0_0},
	{"defPrecision", 2, 134224327, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Int32_t75_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::Init(System.String,System.Int32,System.Int32)
extern const MethodInfo NumberFormatter_Init_m10313_MethodInfo = 
{
	"Init"/* name */
	, (methodPointerType)&NumberFormatter_Init_m10313/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Int32_t75_Int32_t75/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_Init_m10313_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5329/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType UInt32_t751_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_Init_m10314_ParameterInfos[] = 
{
	{"format", 0, 134224328, 0, &String_t_0_0_0},
	{"value", 1, 134224329, 0, &UInt32_t751_0_0_0},
	{"defPrecision", 2, 134224330, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Int32_t75_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::Init(System.String,System.UInt32,System.Int32)
extern const MethodInfo NumberFormatter_Init_m10314_MethodInfo = 
{
	"Init"/* name */
	, (methodPointerType)&NumberFormatter_Init_m10314/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Int32_t75_Int32_t75/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_Init_m10314_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5330/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int64_t760_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_Init_m10315_ParameterInfos[] = 
{
	{"format", 0, 134224331, 0, &String_t_0_0_0},
	{"value", 1, 134224332, 0, &Int64_t760_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Int64_t760 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::Init(System.String,System.Int64)
extern const MethodInfo NumberFormatter_Init_m10315_MethodInfo = 
{
	"Init"/* name */
	, (methodPointerType)&NumberFormatter_Init_m10315/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Int64_t760/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_Init_m10315_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5331/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType UInt64_t763_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_Init_m10316_ParameterInfos[] = 
{
	{"format", 0, 134224333, 0, &String_t_0_0_0},
	{"value", 1, 134224334, 0, &UInt64_t763_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Int64_t760 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::Init(System.String,System.UInt64)
extern const MethodInfo NumberFormatter_Init_m10316_MethodInfo = 
{
	"Init"/* name */
	, (methodPointerType)&NumberFormatter_Init_m10316/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Int64_t760/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_Init_m10316_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5332/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Double_t759_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_Init_m10317_ParameterInfos[] = 
{
	{"format", 0, 134224335, 0, &String_t_0_0_0},
	{"value", 1, 134224336, 0, &Double_t759_0_0_0},
	{"defPrecision", 2, 134224337, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Double_t759_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::Init(System.String,System.Double,System.Int32)
extern const MethodInfo NumberFormatter_Init_m10317_MethodInfo = 
{
	"Init"/* name */
	, (methodPointerType)&NumberFormatter_Init_m10317/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Double_t759_Int32_t75/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_Init_m10317_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5333/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Decimal_t762_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_Init_m10318_ParameterInfos[] = 
{
	{"format", 0, 134224338, 0, &String_t_0_0_0},
	{"value", 1, 134224339, 0, &Decimal_t762_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Decimal_t762 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::Init(System.String,System.Decimal)
extern const MethodInfo NumberFormatter_Init_m10318_MethodInfo = 
{
	"Init"/* name */
	, (methodPointerType)&NumberFormatter_Init_m10318/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Decimal_t762/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_Init_m10318_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5334/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_ResetCharBuf_m10319_ParameterInfos[] = 
{
	{"size", 0, 134224340, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::ResetCharBuf(System.Int32)
extern const MethodInfo NumberFormatter_ResetCharBuf_m10319_MethodInfo = 
{
	"ResetCharBuf"/* name */
	, (methodPointerType)&NumberFormatter_ResetCharBuf_m10319/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_ResetCharBuf_m10319_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5335/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_Resize_m10320_ParameterInfos[] = 
{
	{"len", 0, 134224341, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::Resize(System.Int32)
extern const MethodInfo NumberFormatter_Resize_m10320_MethodInfo = 
{
	"Resize"/* name */
	, (methodPointerType)&NumberFormatter_Resize_m10320/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_Resize_m10320_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5336/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Char_t103_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_Append_m10321_ParameterInfos[] = 
{
	{"c", 0, 134224342, 0, &Char_t103_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int16_t455 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::Append(System.Char)
extern const MethodInfo NumberFormatter_Append_m10321_MethodInfo = 
{
	"Append"/* name */
	, (methodPointerType)&NumberFormatter_Append_m10321/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int16_t455/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_Append_m10321_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5337/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Char_t103_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_Append_m10322_ParameterInfos[] = 
{
	{"c", 0, 134224343, 0, &Char_t103_0_0_0},
	{"cnt", 1, 134224344, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int16_t455_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::Append(System.Char,System.Int32)
extern const MethodInfo NumberFormatter_Append_m10322_MethodInfo = 
{
	"Append"/* name */
	, (methodPointerType)&NumberFormatter_Append_m10322/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int16_t455_Int32_t75/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_Append_m10322_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5338/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_Append_m10323_ParameterInfos[] = 
{
	{"s", 0, 134224345, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::Append(System.String)
extern const MethodInfo NumberFormatter_Append_m10323_MethodInfo = 
{
	"Append"/* name */
	, (methodPointerType)&NumberFormatter_Append_m10323/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_Append_m10323_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5339/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IFormatProvider_t1912_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_GetNumberFormatInstance_m10324_ParameterInfos[] = 
{
	{"fp", 0, 134224346, 0, &IFormatProvider_t1912_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Globalization.NumberFormatInfo System.NumberFormatter::GetNumberFormatInstance(System.IFormatProvider)
extern const MethodInfo NumberFormatter_GetNumberFormatInstance_m10324_MethodInfo = 
{
	"GetNumberFormatInstance"/* name */
	, (methodPointerType)&NumberFormatter_GetNumberFormatInstance_m10324/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &NumberFormatInfo_t1496_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_GetNumberFormatInstance_m10324_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5340/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType CultureInfo_t757_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_set_CurrentCulture_m10325_ParameterInfos[] = 
{
	{"value", 0, 134224347, 0, &CultureInfo_t757_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::set_CurrentCulture(System.Globalization.CultureInfo)
extern const MethodInfo NumberFormatter_set_CurrentCulture_m10325_MethodInfo = 
{
	"set_CurrentCulture"/* name */
	, (methodPointerType)&NumberFormatter_set_CurrentCulture_m10325/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_set_CurrentCulture_m10325_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5341/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.NumberFormatter::get_IntegerDigits()
extern const MethodInfo NumberFormatter_get_IntegerDigits_m10326_MethodInfo = 
{
	"get_IntegerDigits"/* name */
	, (methodPointerType)&NumberFormatter_get_IntegerDigits_m10326/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
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
	, 5342/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.NumberFormatter::get_DecimalDigits()
extern const MethodInfo NumberFormatter_get_DecimalDigits_m10327_MethodInfo = 
{
	"get_DecimalDigits"/* name */
	, (methodPointerType)&NumberFormatter_get_DecimalDigits_m10327/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
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
	, 5343/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.NumberFormatter::get_IsFloatingSource()
extern const MethodInfo NumberFormatter_get_IsFloatingSource_m10328_MethodInfo = 
{
	"get_IsFloatingSource"/* name */
	, (methodPointerType)&NumberFormatter_get_IsFloatingSource_m10328/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2177/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5344/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.NumberFormatter::get_IsZero()
extern const MethodInfo NumberFormatter_get_IsZero_m10329_MethodInfo = 
{
	"get_IsZero"/* name */
	, (methodPointerType)&NumberFormatter_get_IsZero_m10329/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2177/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5345/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.NumberFormatter::get_IsZeroInteger()
extern const MethodInfo NumberFormatter_get_IsZeroInteger_m10330_MethodInfo = 
{
	"get_IsZeroInteger"/* name */
	, (methodPointerType)&NumberFormatter_get_IsZeroInteger_m10330/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2177/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5346/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_RoundPos_m10331_ParameterInfos[] = 
{
	{"pos", 0, 134224348, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::RoundPos(System.Int32)
extern const MethodInfo NumberFormatter_RoundPos_m10331_MethodInfo = 
{
	"RoundPos"/* name */
	, (methodPointerType)&NumberFormatter_RoundPos_m10331/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_RoundPos_m10331_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5347/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_RoundDecimal_m10332_ParameterInfos[] = 
{
	{"decimals", 0, 134224349, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.NumberFormatter::RoundDecimal(System.Int32)
extern const MethodInfo NumberFormatter_RoundDecimal_m10332_MethodInfo = 
{
	"RoundDecimal"/* name */
	, (methodPointerType)&NumberFormatter_RoundDecimal_m10332/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Int32_t75/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_RoundDecimal_m10332_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5348/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_RoundBits_m10333_ParameterInfos[] = 
{
	{"shift", 0, 134224350, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.NumberFormatter::RoundBits(System.Int32)
extern const MethodInfo NumberFormatter_RoundBits_m10333_MethodInfo = 
{
	"RoundBits"/* name */
	, (methodPointerType)&NumberFormatter_RoundBits_m10333/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Int32_t75/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_RoundBits_m10333_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5349/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::RemoveTrailingZeros()
extern const MethodInfo NumberFormatter_RemoveTrailingZeros_m10334_MethodInfo = 
{
	"RemoveTrailingZeros"/* name */
	, (methodPointerType)&NumberFormatter_RemoveTrailingZeros_m10334/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
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
	, 5350/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::AddOneToDecHex()
extern const MethodInfo NumberFormatter_AddOneToDecHex_m10335_MethodInfo = 
{
	"AddOneToDecHex"/* name */
	, (methodPointerType)&NumberFormatter_AddOneToDecHex_m10335/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
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
	, 5351/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UInt32_t751_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_AddOneToDecHex_m10336_ParameterInfos[] = 
{
	{"val", 0, 134224351, 0, &UInt32_t751_0_0_0},
};
extern void* RuntimeInvoker_UInt32_t751_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.UInt32 System.NumberFormatter::AddOneToDecHex(System.UInt32)
extern const MethodInfo NumberFormatter_AddOneToDecHex_m10336_MethodInfo = 
{
	"AddOneToDecHex"/* name */
	, (methodPointerType)&NumberFormatter_AddOneToDecHex_m10336/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t751_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t751_Int32_t75/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_AddOneToDecHex_m10336_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5352/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.NumberFormatter::CountTrailingZeros()
extern const MethodInfo NumberFormatter_CountTrailingZeros_m10337_MethodInfo = 
{
	"CountTrailingZeros"/* name */
	, (methodPointerType)&NumberFormatter_CountTrailingZeros_m10337/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
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
	, 5353/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UInt32_t751_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_CountTrailingZeros_m10338_ParameterInfos[] = 
{
	{"val", 0, 134224352, 0, &UInt32_t751_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.NumberFormatter::CountTrailingZeros(System.UInt32)
extern const MethodInfo NumberFormatter_CountTrailingZeros_m10338_MethodInfo = 
{
	"CountTrailingZeros"/* name */
	, (methodPointerType)&NumberFormatter_CountTrailingZeros_m10338/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Int32_t75/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_CountTrailingZeros_m10338_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5354/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.NumberFormatter System.NumberFormatter::GetInstance()
extern const MethodInfo NumberFormatter_GetInstance_m10339_MethodInfo = 
{
	"GetInstance"/* name */
	, (methodPointerType)&NumberFormatter_GetInstance_m10339/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &NumberFormatter_t1868_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5355/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::Release()
extern const MethodInfo NumberFormatter_Release_m10340_MethodInfo = 
{
	"Release"/* name */
	, (methodPointerType)&NumberFormatter_Release_m10340/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
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
	, 5356/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType CultureInfo_t757_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_SetThreadCurrentCulture_m10341_ParameterInfos[] = 
{
	{"culture", 0, 134224353, 0, &CultureInfo_t757_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::SetThreadCurrentCulture(System.Globalization.CultureInfo)
extern const MethodInfo NumberFormatter_SetThreadCurrentCulture_m10341_MethodInfo = 
{
	"SetThreadCurrentCulture"/* name */
	, (methodPointerType)&NumberFormatter_SetThreadCurrentCulture_m10341/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_SetThreadCurrentCulture_m10341_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5357/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType SByte_t113_0_0_0;
extern const Il2CppType SByte_t113_0_0_0;
extern const Il2CppType IFormatProvider_t1912_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_NumberToString_m10342_ParameterInfos[] = 
{
	{"format", 0, 134224354, 0, &String_t_0_0_0},
	{"value", 1, 134224355, 0, &SByte_t113_0_0_0},
	{"fp", 2, 134224356, 0, &IFormatProvider_t1912_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_SByte_t113_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.NumberFormatter::NumberToString(System.String,System.SByte,System.IFormatProvider)
extern const MethodInfo NumberFormatter_NumberToString_m10342_MethodInfo = 
{
	"NumberToString"/* name */
	, (methodPointerType)&NumberFormatter_NumberToString_m10342/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_SByte_t113_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_NumberToString_m10342_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5358/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Byte_t366_0_0_0;
extern const Il2CppType IFormatProvider_t1912_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_NumberToString_m10343_ParameterInfos[] = 
{
	{"format", 0, 134224357, 0, &String_t_0_0_0},
	{"value", 1, 134224358, 0, &Byte_t366_0_0_0},
	{"fp", 2, 134224359, 0, &IFormatProvider_t1912_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_SByte_t113_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.NumberFormatter::NumberToString(System.String,System.Byte,System.IFormatProvider)
extern const MethodInfo NumberFormatter_NumberToString_m10343_MethodInfo = 
{
	"NumberToString"/* name */
	, (methodPointerType)&NumberFormatter_NumberToString_m10343/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_SByte_t113_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_NumberToString_m10343_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5359/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType UInt16_t369_0_0_0;
extern const Il2CppType UInt16_t369_0_0_0;
extern const Il2CppType IFormatProvider_t1912_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_NumberToString_m10344_ParameterInfos[] = 
{
	{"format", 0, 134224360, 0, &String_t_0_0_0},
	{"value", 1, 134224361, 0, &UInt16_t369_0_0_0},
	{"fp", 2, 134224362, 0, &IFormatProvider_t1912_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Int16_t455_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt16,System.IFormatProvider)
extern const MethodInfo NumberFormatter_NumberToString_m10344_MethodInfo = 
{
	"NumberToString"/* name */
	, (methodPointerType)&NumberFormatter_NumberToString_m10344/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int16_t455_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_NumberToString_m10344_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5360/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int16_t455_0_0_0;
extern const Il2CppType IFormatProvider_t1912_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_NumberToString_m10345_ParameterInfos[] = 
{
	{"format", 0, 134224363, 0, &String_t_0_0_0},
	{"value", 1, 134224364, 0, &Int16_t455_0_0_0},
	{"fp", 2, 134224365, 0, &IFormatProvider_t1912_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Int16_t455_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.NumberFormatter::NumberToString(System.String,System.Int16,System.IFormatProvider)
extern const MethodInfo NumberFormatter_NumberToString_m10345_MethodInfo = 
{
	"NumberToString"/* name */
	, (methodPointerType)&NumberFormatter_NumberToString_m10345/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int16_t455_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_NumberToString_m10345_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5361/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType UInt32_t751_0_0_0;
extern const Il2CppType IFormatProvider_t1912_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_NumberToString_m10346_ParameterInfos[] = 
{
	{"format", 0, 134224366, 0, &String_t_0_0_0},
	{"value", 1, 134224367, 0, &UInt32_t751_0_0_0},
	{"fp", 2, 134224368, 0, &IFormatProvider_t1912_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt32,System.IFormatProvider)
extern const MethodInfo NumberFormatter_NumberToString_m10346_MethodInfo = 
{
	"NumberToString"/* name */
	, (methodPointerType)&NumberFormatter_NumberToString_m10346/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32_t75_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_NumberToString_m10346_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5362/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType IFormatProvider_t1912_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_NumberToString_m10347_ParameterInfos[] = 
{
	{"format", 0, 134224369, 0, &String_t_0_0_0},
	{"value", 1, 134224370, 0, &Int32_t75_0_0_0},
	{"fp", 2, 134224371, 0, &IFormatProvider_t1912_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.NumberFormatter::NumberToString(System.String,System.Int32,System.IFormatProvider)
extern const MethodInfo NumberFormatter_NumberToString_m10347_MethodInfo = 
{
	"NumberToString"/* name */
	, (methodPointerType)&NumberFormatter_NumberToString_m10347/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32_t75_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_NumberToString_m10347_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5363/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType UInt64_t763_0_0_0;
extern const Il2CppType IFormatProvider_t1912_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_NumberToString_m10348_ParameterInfos[] = 
{
	{"format", 0, 134224372, 0, &String_t_0_0_0},
	{"value", 1, 134224373, 0, &UInt64_t763_0_0_0},
	{"fp", 2, 134224374, 0, &IFormatProvider_t1912_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Int64_t760_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt64,System.IFormatProvider)
extern const MethodInfo NumberFormatter_NumberToString_m10348_MethodInfo = 
{
	"NumberToString"/* name */
	, (methodPointerType)&NumberFormatter_NumberToString_m10348/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int64_t760_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_NumberToString_m10348_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5364/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int64_t760_0_0_0;
extern const Il2CppType IFormatProvider_t1912_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_NumberToString_m10349_ParameterInfos[] = 
{
	{"format", 0, 134224375, 0, &String_t_0_0_0},
	{"value", 1, 134224376, 0, &Int64_t760_0_0_0},
	{"fp", 2, 134224377, 0, &IFormatProvider_t1912_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Int64_t760_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.NumberFormatter::NumberToString(System.String,System.Int64,System.IFormatProvider)
extern const MethodInfo NumberFormatter_NumberToString_m10349_MethodInfo = 
{
	"NumberToString"/* name */
	, (methodPointerType)&NumberFormatter_NumberToString_m10349/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int64_t760_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_NumberToString_m10349_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5365/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Single_t345_0_0_0;
extern const Il2CppType IFormatProvider_t1912_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_NumberToString_m10350_ParameterInfos[] = 
{
	{"format", 0, 134224378, 0, &String_t_0_0_0},
	{"value", 1, 134224379, 0, &Single_t345_0_0_0},
	{"fp", 2, 134224380, 0, &IFormatProvider_t1912_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Single_t345_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.NumberFormatter::NumberToString(System.String,System.Single,System.IFormatProvider)
extern const MethodInfo NumberFormatter_NumberToString_m10350_MethodInfo = 
{
	"NumberToString"/* name */
	, (methodPointerType)&NumberFormatter_NumberToString_m10350/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Single_t345_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_NumberToString_m10350_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5366/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Double_t759_0_0_0;
extern const Il2CppType IFormatProvider_t1912_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_NumberToString_m10351_ParameterInfos[] = 
{
	{"format", 0, 134224381, 0, &String_t_0_0_0},
	{"value", 1, 134224382, 0, &Double_t759_0_0_0},
	{"fp", 2, 134224383, 0, &IFormatProvider_t1912_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Double_t759_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.NumberFormatter::NumberToString(System.String,System.Double,System.IFormatProvider)
extern const MethodInfo NumberFormatter_NumberToString_m10351_MethodInfo = 
{
	"NumberToString"/* name */
	, (methodPointerType)&NumberFormatter_NumberToString_m10351/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Double_t759_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_NumberToString_m10351_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5367/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Decimal_t762_0_0_0;
extern const Il2CppType IFormatProvider_t1912_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_NumberToString_m10352_ParameterInfos[] = 
{
	{"format", 0, 134224384, 0, &String_t_0_0_0},
	{"value", 1, 134224385, 0, &Decimal_t762_0_0_0},
	{"fp", 2, 134224386, 0, &IFormatProvider_t1912_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Decimal_t762_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.NumberFormatter::NumberToString(System.String,System.Decimal,System.IFormatProvider)
extern const MethodInfo NumberFormatter_NumberToString_m10352_MethodInfo = 
{
	"NumberToString"/* name */
	, (methodPointerType)&NumberFormatter_NumberToString_m10352/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Decimal_t762_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_NumberToString_m10352_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5368/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UInt32_t751_0_0_0;
extern const Il2CppType IFormatProvider_t1912_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_NumberToString_m10353_ParameterInfos[] = 
{
	{"value", 0, 134224387, 0, &UInt32_t751_0_0_0},
	{"fp", 1, 134224388, 0, &IFormatProvider_t1912_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.NumberFormatter::NumberToString(System.UInt32,System.IFormatProvider)
extern const MethodInfo NumberFormatter_NumberToString_m10353_MethodInfo = 
{
	"NumberToString"/* name */
	, (methodPointerType)&NumberFormatter_NumberToString_m10353/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t75_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_NumberToString_m10353_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5369/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType IFormatProvider_t1912_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_NumberToString_m10354_ParameterInfos[] = 
{
	{"value", 0, 134224389, 0, &Int32_t75_0_0_0},
	{"fp", 1, 134224390, 0, &IFormatProvider_t1912_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.NumberFormatter::NumberToString(System.Int32,System.IFormatProvider)
extern const MethodInfo NumberFormatter_NumberToString_m10354_MethodInfo = 
{
	"NumberToString"/* name */
	, (methodPointerType)&NumberFormatter_NumberToString_m10354/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t75_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_NumberToString_m10354_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5370/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UInt64_t763_0_0_0;
extern const Il2CppType IFormatProvider_t1912_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_NumberToString_m10355_ParameterInfos[] = 
{
	{"value", 0, 134224391, 0, &UInt64_t763_0_0_0},
	{"fp", 1, 134224392, 0, &IFormatProvider_t1912_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int64_t760_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.NumberFormatter::NumberToString(System.UInt64,System.IFormatProvider)
extern const MethodInfo NumberFormatter_NumberToString_m10355_MethodInfo = 
{
	"NumberToString"/* name */
	, (methodPointerType)&NumberFormatter_NumberToString_m10355/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int64_t760_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_NumberToString_m10355_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5371/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int64_t760_0_0_0;
extern const Il2CppType IFormatProvider_t1912_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_NumberToString_m10356_ParameterInfos[] = 
{
	{"value", 0, 134224393, 0, &Int64_t760_0_0_0},
	{"fp", 1, 134224394, 0, &IFormatProvider_t1912_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int64_t760_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.NumberFormatter::NumberToString(System.Int64,System.IFormatProvider)
extern const MethodInfo NumberFormatter_NumberToString_m10356_MethodInfo = 
{
	"NumberToString"/* name */
	, (methodPointerType)&NumberFormatter_NumberToString_m10356/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int64_t760_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_NumberToString_m10356_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5372/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Single_t345_0_0_0;
extern const Il2CppType IFormatProvider_t1912_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_NumberToString_m10357_ParameterInfos[] = 
{
	{"value", 0, 134224395, 0, &Single_t345_0_0_0},
	{"fp", 1, 134224396, 0, &IFormatProvider_t1912_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Single_t345_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.NumberFormatter::NumberToString(System.Single,System.IFormatProvider)
extern const MethodInfo NumberFormatter_NumberToString_m10357_MethodInfo = 
{
	"NumberToString"/* name */
	, (methodPointerType)&NumberFormatter_NumberToString_m10357/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Single_t345_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_NumberToString_m10357_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5373/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Double_t759_0_0_0;
extern const Il2CppType IFormatProvider_t1912_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_NumberToString_m10358_ParameterInfos[] = 
{
	{"value", 0, 134224397, 0, &Double_t759_0_0_0},
	{"fp", 1, 134224398, 0, &IFormatProvider_t1912_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Double_t759_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.NumberFormatter::NumberToString(System.Double,System.IFormatProvider)
extern const MethodInfo NumberFormatter_NumberToString_m10358_MethodInfo = 
{
	"NumberToString"/* name */
	, (methodPointerType)&NumberFormatter_NumberToString_m10358/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Double_t759_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_NumberToString_m10358_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5374/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType IFormatProvider_t1912_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_FastIntegerToString_m10359_ParameterInfos[] = 
{
	{"value", 0, 134224399, 0, &Int32_t75_0_0_0},
	{"fp", 1, 134224400, 0, &IFormatProvider_t1912_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.NumberFormatter::FastIntegerToString(System.Int32,System.IFormatProvider)
extern const MethodInfo NumberFormatter_FastIntegerToString_m10359_MethodInfo = 
{
	"FastIntegerToString"/* name */
	, (methodPointerType)&NumberFormatter_FastIntegerToString_m10359/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t75_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_FastIntegerToString_m10359_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5375/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType IFormatProvider_t1912_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_IntegerToString_m10360_ParameterInfos[] = 
{
	{"format", 0, 134224401, 0, &String_t_0_0_0},
	{"fp", 1, 134224402, 0, &IFormatProvider_t1912_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.NumberFormatter::IntegerToString(System.String,System.IFormatProvider)
extern const MethodInfo NumberFormatter_IntegerToString_m10360_MethodInfo = 
{
	"IntegerToString"/* name */
	, (methodPointerType)&NumberFormatter_IntegerToString_m10360/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_IntegerToString_m10360_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5376/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType NumberFormatInfo_t1496_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_NumberToString_m10361_ParameterInfos[] = 
{
	{"format", 0, 134224403, 0, &String_t_0_0_0},
	{"nfi", 1, 134224404, 0, &NumberFormatInfo_t1496_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.NumberFormatter::NumberToString(System.String,System.Globalization.NumberFormatInfo)
extern const MethodInfo NumberFormatter_NumberToString_m10361_MethodInfo = 
{
	"NumberToString"/* name */
	, (methodPointerType)&NumberFormatter_NumberToString_m10361/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_NumberToString_m10361_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5377/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType NumberFormatInfo_t1496_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_FormatCurrency_m10362_ParameterInfos[] = 
{
	{"precision", 0, 134224405, 0, &Int32_t75_0_0_0},
	{"nfi", 1, 134224406, 0, &NumberFormatInfo_t1496_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.NumberFormatter::FormatCurrency(System.Int32,System.Globalization.NumberFormatInfo)
extern const MethodInfo NumberFormatter_FormatCurrency_m10362_MethodInfo = 
{
	"FormatCurrency"/* name */
	, (methodPointerType)&NumberFormatter_FormatCurrency_m10362/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t75_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_FormatCurrency_m10362_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5378/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType NumberFormatInfo_t1496_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_FormatDecimal_m10363_ParameterInfos[] = 
{
	{"precision", 0, 134224407, 0, &Int32_t75_0_0_0},
	{"nfi", 1, 134224408, 0, &NumberFormatInfo_t1496_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.NumberFormatter::FormatDecimal(System.Int32,System.Globalization.NumberFormatInfo)
extern const MethodInfo NumberFormatter_FormatDecimal_m10363_MethodInfo = 
{
	"FormatDecimal"/* name */
	, (methodPointerType)&NumberFormatter_FormatDecimal_m10363/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t75_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_FormatDecimal_m10363_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5379/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_FormatHexadecimal_m10364_ParameterInfos[] = 
{
	{"precision", 0, 134224409, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.String System.NumberFormatter::FormatHexadecimal(System.Int32)
extern const MethodInfo NumberFormatter_FormatHexadecimal_m10364_MethodInfo = 
{
	"FormatHexadecimal"/* name */
	, (methodPointerType)&NumberFormatter_FormatHexadecimal_m10364/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t75/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_FormatHexadecimal_m10364_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5380/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType NumberFormatInfo_t1496_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_FormatFixedPoint_m10365_ParameterInfos[] = 
{
	{"precision", 0, 134224410, 0, &Int32_t75_0_0_0},
	{"nfi", 1, 134224411, 0, &NumberFormatInfo_t1496_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.NumberFormatter::FormatFixedPoint(System.Int32,System.Globalization.NumberFormatInfo)
extern const MethodInfo NumberFormatter_FormatFixedPoint_m10365_MethodInfo = 
{
	"FormatFixedPoint"/* name */
	, (methodPointerType)&NumberFormatter_FormatFixedPoint_m10365/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t75_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_FormatFixedPoint_m10365_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5381/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Double_t759_0_0_0;
extern const Il2CppType NumberFormatInfo_t1496_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_FormatRoundtrip_m10366_ParameterInfos[] = 
{
	{"origval", 0, 134224412, 0, &Double_t759_0_0_0},
	{"nfi", 1, 134224413, 0, &NumberFormatInfo_t1496_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Double_t759_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.NumberFormatter::FormatRoundtrip(System.Double,System.Globalization.NumberFormatInfo)
extern const MethodInfo NumberFormatter_FormatRoundtrip_m10366_MethodInfo = 
{
	"FormatRoundtrip"/* name */
	, (methodPointerType)&NumberFormatter_FormatRoundtrip_m10366/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Double_t759_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_FormatRoundtrip_m10366_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5382/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Single_t345_0_0_0;
extern const Il2CppType NumberFormatInfo_t1496_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_FormatRoundtrip_m10367_ParameterInfos[] = 
{
	{"origval", 0, 134224414, 0, &Single_t345_0_0_0},
	{"nfi", 1, 134224415, 0, &NumberFormatInfo_t1496_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Single_t345_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.NumberFormatter::FormatRoundtrip(System.Single,System.Globalization.NumberFormatInfo)
extern const MethodInfo NumberFormatter_FormatRoundtrip_m10367_MethodInfo = 
{
	"FormatRoundtrip"/* name */
	, (methodPointerType)&NumberFormatter_FormatRoundtrip_m10367/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Single_t345_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_FormatRoundtrip_m10367_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5383/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType NumberFormatInfo_t1496_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_FormatGeneral_m10368_ParameterInfos[] = 
{
	{"precision", 0, 134224416, 0, &Int32_t75_0_0_0},
	{"nfi", 1, 134224417, 0, &NumberFormatInfo_t1496_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.NumberFormatter::FormatGeneral(System.Int32,System.Globalization.NumberFormatInfo)
extern const MethodInfo NumberFormatter_FormatGeneral_m10368_MethodInfo = 
{
	"FormatGeneral"/* name */
	, (methodPointerType)&NumberFormatter_FormatGeneral_m10368/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t75_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_FormatGeneral_m10368_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5384/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType NumberFormatInfo_t1496_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_FormatNumber_m10369_ParameterInfos[] = 
{
	{"precision", 0, 134224418, 0, &Int32_t75_0_0_0},
	{"nfi", 1, 134224419, 0, &NumberFormatInfo_t1496_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.NumberFormatter::FormatNumber(System.Int32,System.Globalization.NumberFormatInfo)
extern const MethodInfo NumberFormatter_FormatNumber_m10369_MethodInfo = 
{
	"FormatNumber"/* name */
	, (methodPointerType)&NumberFormatter_FormatNumber_m10369/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t75_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_FormatNumber_m10369_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5385/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType NumberFormatInfo_t1496_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_FormatPercent_m10370_ParameterInfos[] = 
{
	{"precision", 0, 134224420, 0, &Int32_t75_0_0_0},
	{"nfi", 1, 134224421, 0, &NumberFormatInfo_t1496_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.NumberFormatter::FormatPercent(System.Int32,System.Globalization.NumberFormatInfo)
extern const MethodInfo NumberFormatter_FormatPercent_m10370_MethodInfo = 
{
	"FormatPercent"/* name */
	, (methodPointerType)&NumberFormatter_FormatPercent_m10370/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t75_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_FormatPercent_m10370_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5386/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType NumberFormatInfo_t1496_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_FormatExponential_m10371_ParameterInfos[] = 
{
	{"precision", 0, 134224422, 0, &Int32_t75_0_0_0},
	{"nfi", 1, 134224423, 0, &NumberFormatInfo_t1496_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.NumberFormatter::FormatExponential(System.Int32,System.Globalization.NumberFormatInfo)
extern const MethodInfo NumberFormatter_FormatExponential_m10371_MethodInfo = 
{
	"FormatExponential"/* name */
	, (methodPointerType)&NumberFormatter_FormatExponential_m10371/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t75_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_FormatExponential_m10371_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5387/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType NumberFormatInfo_t1496_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_FormatExponential_m10372_ParameterInfos[] = 
{
	{"precision", 0, 134224424, 0, &Int32_t75_0_0_0},
	{"nfi", 1, 134224425, 0, &NumberFormatInfo_t1496_0_0_0},
	{"expDigits", 2, 134224426, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t75_Object_t_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.String System.NumberFormatter::FormatExponential(System.Int32,System.Globalization.NumberFormatInfo,System.Int32)
extern const MethodInfo NumberFormatter_FormatExponential_m10372_MethodInfo = 
{
	"FormatExponential"/* name */
	, (methodPointerType)&NumberFormatter_FormatExponential_m10372/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t75_Object_t_Int32_t75/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_FormatExponential_m10372_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5388/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType NumberFormatInfo_t1496_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_FormatCustom_m10373_ParameterInfos[] = 
{
	{"format", 0, 134224427, 0, &String_t_0_0_0},
	{"nfi", 1, 134224428, 0, &NumberFormatInfo_t1496_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.NumberFormatter::FormatCustom(System.String,System.Globalization.NumberFormatInfo)
extern const MethodInfo NumberFormatter_FormatCustom_m10373_MethodInfo = 
{
	"FormatCustom"/* name */
	, (methodPointerType)&NumberFormatter_FormatCustom_m10373/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_FormatCustom_m10373_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5389/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType StringBuilder_t343_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_ZeroTrimEnd_m10374_ParameterInfos[] = 
{
	{"sb", 0, 134224429, 0, &StringBuilder_t343_0_0_0},
	{"canEmpty", 1, 134224430, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::ZeroTrimEnd(System.Text.StringBuilder,System.Boolean)
extern const MethodInfo NumberFormatter_ZeroTrimEnd_m10374_MethodInfo = 
{
	"ZeroTrimEnd"/* name */
	, (methodPointerType)&NumberFormatter_ZeroTrimEnd_m10374/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_SByte_t113/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_ZeroTrimEnd_m10374_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5390/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType StringBuilder_t343_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_IsZeroOnly_m10375_ParameterInfos[] = 
{
	{"sb", 0, 134224431, 0, &StringBuilder_t343_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.NumberFormatter::IsZeroOnly(System.Text.StringBuilder)
extern const MethodInfo NumberFormatter_IsZeroOnly_m10375_MethodInfo = 
{
	"IsZeroOnly"/* name */
	, (methodPointerType)&NumberFormatter_IsZeroOnly_m10375/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_IsZeroOnly_m10375_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5391/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType StringBuilder_t343_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_AppendNonNegativeNumber_m10376_ParameterInfos[] = 
{
	{"sb", 0, 134224432, 0, &StringBuilder_t343_0_0_0},
	{"v", 1, 134224433, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::AppendNonNegativeNumber(System.Text.StringBuilder,System.Int32)
extern const MethodInfo NumberFormatter_AppendNonNegativeNumber_m10376_MethodInfo = 
{
	"AppendNonNegativeNumber"/* name */
	, (methodPointerType)&NumberFormatter_AppendNonNegativeNumber_m10376/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Int32_t75/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_AppendNonNegativeNumber_m10376_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5392/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType StringBuilder_t343_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_AppendIntegerString_m10377_ParameterInfos[] = 
{
	{"minLength", 0, 134224434, 0, &Int32_t75_0_0_0},
	{"sb", 1, 134224435, 0, &StringBuilder_t343_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::AppendIntegerString(System.Int32,System.Text.StringBuilder)
extern const MethodInfo NumberFormatter_AppendIntegerString_m10377_MethodInfo = 
{
	"AppendIntegerString"/* name */
	, (methodPointerType)&NumberFormatter_AppendIntegerString_m10377/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_AppendIntegerString_m10377_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5393/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_AppendIntegerString_m10378_ParameterInfos[] = 
{
	{"minLength", 0, 134224436, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::AppendIntegerString(System.Int32)
extern const MethodInfo NumberFormatter_AppendIntegerString_m10378_MethodInfo = 
{
	"AppendIntegerString"/* name */
	, (methodPointerType)&NumberFormatter_AppendIntegerString_m10378/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_AppendIntegerString_m10378_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5394/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType StringBuilder_t343_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_AppendDecimalString_m10379_ParameterInfos[] = 
{
	{"precision", 0, 134224437, 0, &Int32_t75_0_0_0},
	{"sb", 1, 134224438, 0, &StringBuilder_t343_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::AppendDecimalString(System.Int32,System.Text.StringBuilder)
extern const MethodInfo NumberFormatter_AppendDecimalString_m10379_MethodInfo = 
{
	"AppendDecimalString"/* name */
	, (methodPointerType)&NumberFormatter_AppendDecimalString_m10379/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_AppendDecimalString_m10379_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5395/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_AppendDecimalString_m10380_ParameterInfos[] = 
{
	{"precision", 0, 134224439, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::AppendDecimalString(System.Int32)
extern const MethodInfo NumberFormatter_AppendDecimalString_m10380_MethodInfo = 
{
	"AppendDecimalString"/* name */
	, (methodPointerType)&NumberFormatter_AppendDecimalString_m10380/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_AppendDecimalString_m10380_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5396/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32U5BU5D_t1095_0_0_0;
extern const Il2CppType Int32U5BU5D_t1095_0_0_0;
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_AppendIntegerStringWithGroupSeparator_m10381_ParameterInfos[] = 
{
	{"groups", 0, 134224440, 0, &Int32U5BU5D_t1095_0_0_0},
	{"groupSeparator", 1, 134224441, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::AppendIntegerStringWithGroupSeparator(System.Int32[],System.String)
extern const MethodInfo NumberFormatter_AppendIntegerStringWithGroupSeparator_m10381_MethodInfo = 
{
	"AppendIntegerStringWithGroupSeparator"/* name */
	, (methodPointerType)&NumberFormatter_AppendIntegerStringWithGroupSeparator_m10381/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_AppendIntegerStringWithGroupSeparator_m10381_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5397/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType NumberFormatInfo_t1496_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_AppendExponent_m10382_ParameterInfos[] = 
{
	{"nfi", 0, 134224442, 0, &NumberFormatInfo_t1496_0_0_0},
	{"exponent", 1, 134224443, 0, &Int32_t75_0_0_0},
	{"minDigits", 2, 134224444, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Int32_t75_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::AppendExponent(System.Globalization.NumberFormatInfo,System.Int32,System.Int32)
extern const MethodInfo NumberFormatter_AppendExponent_m10382_MethodInfo = 
{
	"AppendExponent"/* name */
	, (methodPointerType)&NumberFormatter_AppendExponent_m10382/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Int32_t75_Int32_t75/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_AppendExponent_m10382_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5398/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_AppendOneDigit_m10383_ParameterInfos[] = 
{
	{"start", 0, 134224445, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::AppendOneDigit(System.Int32)
extern const MethodInfo NumberFormatter_AppendOneDigit_m10383_MethodInfo = 
{
	"AppendOneDigit"/* name */
	, (methodPointerType)&NumberFormatter_AppendOneDigit_m10383/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_AppendOneDigit_m10383_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5399/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_FastAppendDigits_m10384_ParameterInfos[] = 
{
	{"val", 0, 134224446, 0, &Int32_t75_0_0_0},
	{"force", 1, 134224447, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::FastAppendDigits(System.Int32,System.Boolean)
extern const MethodInfo NumberFormatter_FastAppendDigits_m10384_MethodInfo = 
{
	"FastAppendDigits"/* name */
	, (methodPointerType)&NumberFormatter_FastAppendDigits_m10384/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75_SByte_t113/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_FastAppendDigits_m10384_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5400/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_AppendDigits_m10385_ParameterInfos[] = 
{
	{"start", 0, 134224448, 0, &Int32_t75_0_0_0},
	{"end", 1, 134224449, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::AppendDigits(System.Int32,System.Int32)
extern const MethodInfo NumberFormatter_AppendDigits_m10385_MethodInfo = 
{
	"AppendDigits"/* name */
	, (methodPointerType)&NumberFormatter_AppendDigits_m10385/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75_Int32_t75/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_AppendDigits_m10385_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5401/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType StringBuilder_t343_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_AppendDigits_m10386_ParameterInfos[] = 
{
	{"start", 0, 134224450, 0, &Int32_t75_0_0_0},
	{"end", 1, 134224451, 0, &Int32_t75_0_0_0},
	{"sb", 2, 134224452, 0, &StringBuilder_t343_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::AppendDigits(System.Int32,System.Int32,System.Text.StringBuilder)
extern const MethodInfo NumberFormatter_AppendDigits_m10386_MethodInfo = 
{
	"AppendDigits"/* name */
	, (methodPointerType)&NumberFormatter_AppendDigits_m10386/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75_Int32_t75_Object_t/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_AppendDigits_m10386_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5402/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_Multiply10_m10387_ParameterInfos[] = 
{
	{"count", 0, 134224453, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::Multiply10(System.Int32)
extern const MethodInfo NumberFormatter_Multiply10_m10387_MethodInfo = 
{
	"Multiply10"/* name */
	, (methodPointerType)&NumberFormatter_Multiply10_m10387/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_Multiply10_m10387_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5403/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo NumberFormatter_t1868_NumberFormatter_Divide10_m10388_ParameterInfos[] = 
{
	{"count", 0, 134224454, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.NumberFormatter::Divide10(System.Int32)
extern const MethodInfo NumberFormatter_Divide10_m10388_MethodInfo = 
{
	"Divide10"/* name */
	, (methodPointerType)&NumberFormatter_Divide10_m10388/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75/* invoker_method */
	, NumberFormatter_t1868_NumberFormatter_Divide10_m10388_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5404/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.NumberFormatter System.NumberFormatter::GetClone()
extern const MethodInfo NumberFormatter_GetClone_m10389_MethodInfo = 
{
	"GetClone"/* name */
	, (methodPointerType)&NumberFormatter_GetClone_m10389/* method */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* declaring_type */
	, &NumberFormatter_t1868_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5405/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* NumberFormatter_t1868_MethodInfos[] =
{
	&NumberFormatter__ctor_m10296_MethodInfo,
	&NumberFormatter__cctor_m10297_MethodInfo,
	&NumberFormatter_GetFormatterTables_m10298_MethodInfo,
	&NumberFormatter_GetTenPowerOf_m10299_MethodInfo,
	&NumberFormatter_InitDecHexDigits_m10300_MethodInfo,
	&NumberFormatter_InitDecHexDigits_m10301_MethodInfo,
	&NumberFormatter_InitDecHexDigits_m10302_MethodInfo,
	&NumberFormatter_FastToDecHex_m10303_MethodInfo,
	&NumberFormatter_ToDecHex_m10304_MethodInfo,
	&NumberFormatter_FastDecHexLen_m10305_MethodInfo,
	&NumberFormatter_DecHexLen_m10306_MethodInfo,
	&NumberFormatter_DecHexLen_m10307_MethodInfo,
	&NumberFormatter_ScaleOrder_m10308_MethodInfo,
	&NumberFormatter_InitialFloatingPrecision_m10309_MethodInfo,
	&NumberFormatter_ParsePrecision_m10310_MethodInfo,
	&NumberFormatter_Init_m10311_MethodInfo,
	&NumberFormatter_InitHex_m10312_MethodInfo,
	&NumberFormatter_Init_m10313_MethodInfo,
	&NumberFormatter_Init_m10314_MethodInfo,
	&NumberFormatter_Init_m10315_MethodInfo,
	&NumberFormatter_Init_m10316_MethodInfo,
	&NumberFormatter_Init_m10317_MethodInfo,
	&NumberFormatter_Init_m10318_MethodInfo,
	&NumberFormatter_ResetCharBuf_m10319_MethodInfo,
	&NumberFormatter_Resize_m10320_MethodInfo,
	&NumberFormatter_Append_m10321_MethodInfo,
	&NumberFormatter_Append_m10322_MethodInfo,
	&NumberFormatter_Append_m10323_MethodInfo,
	&NumberFormatter_GetNumberFormatInstance_m10324_MethodInfo,
	&NumberFormatter_set_CurrentCulture_m10325_MethodInfo,
	&NumberFormatter_get_IntegerDigits_m10326_MethodInfo,
	&NumberFormatter_get_DecimalDigits_m10327_MethodInfo,
	&NumberFormatter_get_IsFloatingSource_m10328_MethodInfo,
	&NumberFormatter_get_IsZero_m10329_MethodInfo,
	&NumberFormatter_get_IsZeroInteger_m10330_MethodInfo,
	&NumberFormatter_RoundPos_m10331_MethodInfo,
	&NumberFormatter_RoundDecimal_m10332_MethodInfo,
	&NumberFormatter_RoundBits_m10333_MethodInfo,
	&NumberFormatter_RemoveTrailingZeros_m10334_MethodInfo,
	&NumberFormatter_AddOneToDecHex_m10335_MethodInfo,
	&NumberFormatter_AddOneToDecHex_m10336_MethodInfo,
	&NumberFormatter_CountTrailingZeros_m10337_MethodInfo,
	&NumberFormatter_CountTrailingZeros_m10338_MethodInfo,
	&NumberFormatter_GetInstance_m10339_MethodInfo,
	&NumberFormatter_Release_m10340_MethodInfo,
	&NumberFormatter_SetThreadCurrentCulture_m10341_MethodInfo,
	&NumberFormatter_NumberToString_m10342_MethodInfo,
	&NumberFormatter_NumberToString_m10343_MethodInfo,
	&NumberFormatter_NumberToString_m10344_MethodInfo,
	&NumberFormatter_NumberToString_m10345_MethodInfo,
	&NumberFormatter_NumberToString_m10346_MethodInfo,
	&NumberFormatter_NumberToString_m10347_MethodInfo,
	&NumberFormatter_NumberToString_m10348_MethodInfo,
	&NumberFormatter_NumberToString_m10349_MethodInfo,
	&NumberFormatter_NumberToString_m10350_MethodInfo,
	&NumberFormatter_NumberToString_m10351_MethodInfo,
	&NumberFormatter_NumberToString_m10352_MethodInfo,
	&NumberFormatter_NumberToString_m10353_MethodInfo,
	&NumberFormatter_NumberToString_m10354_MethodInfo,
	&NumberFormatter_NumberToString_m10355_MethodInfo,
	&NumberFormatter_NumberToString_m10356_MethodInfo,
	&NumberFormatter_NumberToString_m10357_MethodInfo,
	&NumberFormatter_NumberToString_m10358_MethodInfo,
	&NumberFormatter_FastIntegerToString_m10359_MethodInfo,
	&NumberFormatter_IntegerToString_m10360_MethodInfo,
	&NumberFormatter_NumberToString_m10361_MethodInfo,
	&NumberFormatter_FormatCurrency_m10362_MethodInfo,
	&NumberFormatter_FormatDecimal_m10363_MethodInfo,
	&NumberFormatter_FormatHexadecimal_m10364_MethodInfo,
	&NumberFormatter_FormatFixedPoint_m10365_MethodInfo,
	&NumberFormatter_FormatRoundtrip_m10366_MethodInfo,
	&NumberFormatter_FormatRoundtrip_m10367_MethodInfo,
	&NumberFormatter_FormatGeneral_m10368_MethodInfo,
	&NumberFormatter_FormatNumber_m10369_MethodInfo,
	&NumberFormatter_FormatPercent_m10370_MethodInfo,
	&NumberFormatter_FormatExponential_m10371_MethodInfo,
	&NumberFormatter_FormatExponential_m10372_MethodInfo,
	&NumberFormatter_FormatCustom_m10373_MethodInfo,
	&NumberFormatter_ZeroTrimEnd_m10374_MethodInfo,
	&NumberFormatter_IsZeroOnly_m10375_MethodInfo,
	&NumberFormatter_AppendNonNegativeNumber_m10376_MethodInfo,
	&NumberFormatter_AppendIntegerString_m10377_MethodInfo,
	&NumberFormatter_AppendIntegerString_m10378_MethodInfo,
	&NumberFormatter_AppendDecimalString_m10379_MethodInfo,
	&NumberFormatter_AppendDecimalString_m10380_MethodInfo,
	&NumberFormatter_AppendIntegerStringWithGroupSeparator_m10381_MethodInfo,
	&NumberFormatter_AppendExponent_m10382_MethodInfo,
	&NumberFormatter_AppendOneDigit_m10383_MethodInfo,
	&NumberFormatter_FastAppendDigits_m10384_MethodInfo,
	&NumberFormatter_AppendDigits_m10385_MethodInfo,
	&NumberFormatter_AppendDigits_m10386_MethodInfo,
	&NumberFormatter_Multiply10_m10387_MethodInfo,
	&NumberFormatter_Divide10_m10388_MethodInfo,
	&NumberFormatter_GetClone_m10389_MethodInfo,
	NULL
};
extern const MethodInfo NumberFormatter_set_CurrentCulture_m10325_MethodInfo;
static const PropertyInfo NumberFormatter_t1868____CurrentCulture_PropertyInfo = 
{
	&NumberFormatter_t1868_il2cpp_TypeInfo/* parent */
	, "CurrentCulture"/* name */
	, NULL/* get */
	, &NumberFormatter_set_CurrentCulture_m10325_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo NumberFormatter_get_IntegerDigits_m10326_MethodInfo;
static const PropertyInfo NumberFormatter_t1868____IntegerDigits_PropertyInfo = 
{
	&NumberFormatter_t1868_il2cpp_TypeInfo/* parent */
	, "IntegerDigits"/* name */
	, &NumberFormatter_get_IntegerDigits_m10326_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo NumberFormatter_get_DecimalDigits_m10327_MethodInfo;
static const PropertyInfo NumberFormatter_t1868____DecimalDigits_PropertyInfo = 
{
	&NumberFormatter_t1868_il2cpp_TypeInfo/* parent */
	, "DecimalDigits"/* name */
	, &NumberFormatter_get_DecimalDigits_m10327_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo NumberFormatter_get_IsFloatingSource_m10328_MethodInfo;
static const PropertyInfo NumberFormatter_t1868____IsFloatingSource_PropertyInfo = 
{
	&NumberFormatter_t1868_il2cpp_TypeInfo/* parent */
	, "IsFloatingSource"/* name */
	, &NumberFormatter_get_IsFloatingSource_m10328_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo NumberFormatter_get_IsZero_m10329_MethodInfo;
static const PropertyInfo NumberFormatter_t1868____IsZero_PropertyInfo = 
{
	&NumberFormatter_t1868_il2cpp_TypeInfo/* parent */
	, "IsZero"/* name */
	, &NumberFormatter_get_IsZero_m10329_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo NumberFormatter_get_IsZeroInteger_m10330_MethodInfo;
static const PropertyInfo NumberFormatter_t1868____IsZeroInteger_PropertyInfo = 
{
	&NumberFormatter_t1868_il2cpp_TypeInfo/* parent */
	, "IsZeroInteger"/* name */
	, &NumberFormatter_get_IsZeroInteger_m10330_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* NumberFormatter_t1868_PropertyInfos[] =
{
	&NumberFormatter_t1868____CurrentCulture_PropertyInfo,
	&NumberFormatter_t1868____IntegerDigits_PropertyInfo,
	&NumberFormatter_t1868____DecimalDigits_PropertyInfo,
	&NumberFormatter_t1868____IsFloatingSource_PropertyInfo,
	&NumberFormatter_t1868____IsZero_PropertyInfo,
	&NumberFormatter_t1868____IsZeroInteger_PropertyInfo,
	NULL
};
static const Il2CppType* NumberFormatter_t1868_il2cpp_TypeInfo__nestedTypes[1] =
{
	&CustomInfo_t1867_0_0_0,
};
static const Il2CppMethodReference NumberFormatter_t1868_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
};
static bool NumberFormatter_t1868_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType NumberFormatter_t1868_1_0_0;
struct NumberFormatter_t1868;
const Il2CppTypeDefinitionMetadata NumberFormatter_t1868_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NumberFormatter_t1868_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, NumberFormatter_t1868_VTable/* vtableMethods */
	, NumberFormatter_t1868_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2434/* fieldStart */

};
TypeInfo NumberFormatter_t1868_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "NumberFormatter"/* name */
	, "System"/* namespaze */
	, NumberFormatter_t1868_MethodInfos/* methods */
	, NumberFormatter_t1868_PropertyInfos/* properties */
	, NULL/* events */
	, &NumberFormatter_t1868_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &NumberFormatter_t1868_0_0_0/* byval_arg */
	, &NumberFormatter_t1868_1_0_0/* this_arg */
	, &NumberFormatter_t1868_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (NumberFormatter_t1868)/* instance_size */
	, sizeof (NumberFormatter_t1868)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(NumberFormatter_t1868_StaticFields)/* static_fields_size */
	, sizeof(NumberFormatter_t1868_ThreadStaticFields)/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 256/* flags */
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
	, 94/* method_count */
	, 6/* property_count */
	, 26/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// Metadata Definition System.ObjectDisposedException
extern TypeInfo ObjectDisposedException_t1346_il2cpp_TypeInfo;
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo ObjectDisposedException_t1346_ObjectDisposedException__ctor_m5982_ParameterInfos[] = 
{
	{"objectName", 0, 134224472, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.ObjectDisposedException::.ctor(System.String)
extern const MethodInfo ObjectDisposedException__ctor_m5982_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ObjectDisposedException__ctor_m5982/* method */
	, &ObjectDisposedException_t1346_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, ObjectDisposedException_t1346_ObjectDisposedException__ctor_m5982_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5410/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo ObjectDisposedException_t1346_ObjectDisposedException__ctor_m10390_ParameterInfos[] = 
{
	{"objectName", 0, 134224473, 0, &String_t_0_0_0},
	{"message", 1, 134224474, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.ObjectDisposedException::.ctor(System.String,System.String)
extern const MethodInfo ObjectDisposedException__ctor_m10390_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ObjectDisposedException__ctor_m10390/* method */
	, &ObjectDisposedException_t1346_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Object_t/* invoker_method */
	, ObjectDisposedException_t1346_ObjectDisposedException__ctor_m10390_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5411/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo ObjectDisposedException_t1346_ObjectDisposedException__ctor_m10391_ParameterInfos[] = 
{
	{"info", 0, 134224475, 0, &SerializationInfo_t732_0_0_0},
	{"context", 1, 134224476, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.ObjectDisposedException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo ObjectDisposedException__ctor_m10391_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ObjectDisposedException__ctor_m10391/* method */
	, &ObjectDisposedException_t1346_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, ObjectDisposedException_t1346_ObjectDisposedException__ctor_m10391_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5412/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.ObjectDisposedException::get_Message()
extern const MethodInfo ObjectDisposedException_get_Message_m10392_MethodInfo = 
{
	"get_Message"/* name */
	, (methodPointerType)&ObjectDisposedException_get_Message_m10392/* method */
	, &ObjectDisposedException_t1346_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2246/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5413/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo ObjectDisposedException_t1346_ObjectDisposedException_GetObjectData_m10393_ParameterInfos[] = 
{
	{"info", 0, 134224477, 0, &SerializationInfo_t732_0_0_0},
	{"context", 1, 134224478, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.ObjectDisposedException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo ObjectDisposedException_GetObjectData_m10393_MethodInfo = 
{
	"GetObjectData"/* name */
	, (methodPointerType)&ObjectDisposedException_GetObjectData_m10393/* method */
	, &ObjectDisposedException_t1346_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, ObjectDisposedException_t1346_ObjectDisposedException_GetObjectData_m10393_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5414/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ObjectDisposedException_t1346_MethodInfos[] =
{
	&ObjectDisposedException__ctor_m5982_MethodInfo,
	&ObjectDisposedException__ctor_m10390_MethodInfo,
	&ObjectDisposedException__ctor_m10391_MethodInfo,
	&ObjectDisposedException_get_Message_m10392_MethodInfo,
	&ObjectDisposedException_GetObjectData_m10393_MethodInfo,
	NULL
};
extern const MethodInfo ObjectDisposedException_get_Message_m10392_MethodInfo;
static const PropertyInfo ObjectDisposedException_t1346____Message_PropertyInfo = 
{
	&ObjectDisposedException_t1346_il2cpp_TypeInfo/* parent */
	, "Message"/* name */
	, &ObjectDisposedException_get_Message_m10392_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* ObjectDisposedException_t1346_PropertyInfos[] =
{
	&ObjectDisposedException_t1346____Message_PropertyInfo,
	NULL
};
extern const MethodInfo ObjectDisposedException_GetObjectData_m10393_MethodInfo;
static const Il2CppMethodReference ObjectDisposedException_t1346_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Exception_ToString_m3797_MethodInfo,
	&ObjectDisposedException_GetObjectData_m10393_MethodInfo,
	&Exception_get_InnerException_m3799_MethodInfo,
	&ObjectDisposedException_get_Message_m10392_MethodInfo,
	&Exception_get_Source_m3801_MethodInfo,
	&Exception_get_StackTrace_m3802_MethodInfo,
	&ObjectDisposedException_GetObjectData_m10393_MethodInfo,
	&Exception_GetType_m3803_MethodInfo,
};
static bool ObjectDisposedException_t1346_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair ObjectDisposedException_t1346_InterfacesOffsets[] = 
{
	{ &ISerializable_t435_0_0_0, 4},
	{ &_Exception_t832_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ObjectDisposedException_t1346_0_0_0;
extern const Il2CppType ObjectDisposedException_t1346_1_0_0;
struct ObjectDisposedException_t1346;
const Il2CppTypeDefinitionMetadata ObjectDisposedException_t1346_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, ObjectDisposedException_t1346_InterfacesOffsets/* interfaceOffsets */
	, &InvalidOperationException_t1172_0_0_0/* parent */
	, ObjectDisposedException_t1346_VTable/* vtableMethods */
	, ObjectDisposedException_t1346_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2460/* fieldStart */

};
TypeInfo ObjectDisposedException_t1346_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ObjectDisposedException"/* name */
	, "System"/* namespaze */
	, ObjectDisposedException_t1346_MethodInfos/* methods */
	, ObjectDisposedException_t1346_PropertyInfos/* properties */
	, NULL/* events */
	, &ObjectDisposedException_t1346_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 904/* custom_attributes_cache */
	, &ObjectDisposedException_t1346_0_0_0/* byval_arg */
	, &ObjectDisposedException_t1346_1_0_0/* this_arg */
	, &ObjectDisposedException_t1346_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ObjectDisposedException_t1346)/* instance_size */
	, sizeof (ObjectDisposedException_t1346)/* actualSize */
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
	, 5/* method_count */
	, 1/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.OperatingSystem
#include "mscorlib_System_OperatingSystem.h"
// Metadata Definition System.OperatingSystem
extern TypeInfo OperatingSystem_t1847_il2cpp_TypeInfo;
// System.OperatingSystem
#include "mscorlib_System_OperatingSystemMethodDeclarations.h"
extern const Il2CppType PlatformID_t1871_0_0_0;
extern const Il2CppType PlatformID_t1871_0_0_0;
extern const Il2CppType Version_t1019_0_0_0;
extern const Il2CppType Version_t1019_0_0_0;
static const ParameterInfo OperatingSystem_t1847_OperatingSystem__ctor_m10394_ParameterInfos[] = 
{
	{"platform", 0, 134224479, 0, &PlatformID_t1871_0_0_0},
	{"version", 1, 134224480, 0, &Version_t1019_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.OperatingSystem::.ctor(System.PlatformID,System.Version)
extern const MethodInfo OperatingSystem__ctor_m10394_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&OperatingSystem__ctor_m10394/* method */
	, &OperatingSystem_t1847_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75_Object_t/* invoker_method */
	, OperatingSystem_t1847_OperatingSystem__ctor_m10394_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5415/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_PlatformID_t1871 (const MethodInfo* method, void* obj, void** args);
// System.PlatformID System.OperatingSystem::get_Platform()
extern const MethodInfo OperatingSystem_get_Platform_m10395_MethodInfo = 
{
	"get_Platform"/* name */
	, (methodPointerType)&OperatingSystem_get_Platform_m10395/* method */
	, &OperatingSystem_t1847_il2cpp_TypeInfo/* declaring_type */
	, &PlatformID_t1871_0_0_0/* return_type */
	, RuntimeInvoker_PlatformID_t1871/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5416/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo OperatingSystem_t1847_OperatingSystem_GetObjectData_m10396_ParameterInfos[] = 
{
	{"info", 0, 134224481, 0, &SerializationInfo_t732_0_0_0},
	{"context", 1, 134224482, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.OperatingSystem::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo OperatingSystem_GetObjectData_m10396_MethodInfo = 
{
	"GetObjectData"/* name */
	, (methodPointerType)&OperatingSystem_GetObjectData_m10396/* method */
	, &OperatingSystem_t1847_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, OperatingSystem_t1847_OperatingSystem_GetObjectData_m10396_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5417/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.OperatingSystem::ToString()
extern const MethodInfo OperatingSystem_ToString_m10397_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&OperatingSystem_ToString_m10397/* method */
	, &OperatingSystem_t1847_il2cpp_TypeInfo/* declaring_type */
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
	, 5418/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* OperatingSystem_t1847_MethodInfos[] =
{
	&OperatingSystem__ctor_m10394_MethodInfo,
	&OperatingSystem_get_Platform_m10395_MethodInfo,
	&OperatingSystem_GetObjectData_m10396_MethodInfo,
	&OperatingSystem_ToString_m10397_MethodInfo,
	NULL
};
extern const MethodInfo OperatingSystem_get_Platform_m10395_MethodInfo;
static const PropertyInfo OperatingSystem_t1847____Platform_PropertyInfo = 
{
	&OperatingSystem_t1847_il2cpp_TypeInfo/* parent */
	, "Platform"/* name */
	, &OperatingSystem_get_Platform_m10395_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* OperatingSystem_t1847_PropertyInfos[] =
{
	&OperatingSystem_t1847____Platform_PropertyInfo,
	NULL
};
extern const MethodInfo OperatingSystem_ToString_m10397_MethodInfo;
extern const MethodInfo OperatingSystem_GetObjectData_m10396_MethodInfo;
static const Il2CppMethodReference OperatingSystem_t1847_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&OperatingSystem_ToString_m10397_MethodInfo,
	&OperatingSystem_GetObjectData_m10396_MethodInfo,
};
static bool OperatingSystem_t1847_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType ICloneable_t434_0_0_0;
static const Il2CppType* OperatingSystem_t1847_InterfacesTypeInfos[] = 
{
	&ICloneable_t434_0_0_0,
	&ISerializable_t435_0_0_0,
};
static Il2CppInterfaceOffsetPair OperatingSystem_t1847_InterfacesOffsets[] = 
{
	{ &ICloneable_t434_0_0_0, 4},
	{ &ISerializable_t435_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType OperatingSystem_t1847_0_0_0;
extern const Il2CppType OperatingSystem_t1847_1_0_0;
struct OperatingSystem_t1847;
const Il2CppTypeDefinitionMetadata OperatingSystem_t1847_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, OperatingSystem_t1847_InterfacesTypeInfos/* implementedInterfaces */
	, OperatingSystem_t1847_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, OperatingSystem_t1847_VTable/* vtableMethods */
	, OperatingSystem_t1847_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2462/* fieldStart */

};
TypeInfo OperatingSystem_t1847_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "OperatingSystem"/* name */
	, "System"/* namespaze */
	, OperatingSystem_t1847_MethodInfos/* methods */
	, OperatingSystem_t1847_PropertyInfos/* properties */
	, NULL/* events */
	, &OperatingSystem_t1847_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 905/* custom_attributes_cache */
	, &OperatingSystem_t1847_0_0_0/* byval_arg */
	, &OperatingSystem_t1847_1_0_0/* this_arg */
	, &OperatingSystem_t1847_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (OperatingSystem_t1847)/* instance_size */
	, sizeof (OperatingSystem_t1847)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057025/* flags */
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
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.OutOfMemoryException
#include "mscorlib_System_OutOfMemoryException.h"
// Metadata Definition System.OutOfMemoryException
extern TypeInfo OutOfMemoryException_t1869_il2cpp_TypeInfo;
// System.OutOfMemoryException
#include "mscorlib_System_OutOfMemoryExceptionMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.OutOfMemoryException::.ctor()
extern const MethodInfo OutOfMemoryException__ctor_m10398_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&OutOfMemoryException__ctor_m10398/* method */
	, &OutOfMemoryException_t1869_il2cpp_TypeInfo/* declaring_type */
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
	, 5419/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo OutOfMemoryException_t1869_OutOfMemoryException__ctor_m10399_ParameterInfos[] = 
{
	{"info", 0, 134224483, 0, &SerializationInfo_t732_0_0_0},
	{"context", 1, 134224484, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.OutOfMemoryException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo OutOfMemoryException__ctor_m10399_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&OutOfMemoryException__ctor_m10399/* method */
	, &OutOfMemoryException_t1869_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, OutOfMemoryException_t1869_OutOfMemoryException__ctor_m10399_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5420/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* OutOfMemoryException_t1869_MethodInfos[] =
{
	&OutOfMemoryException__ctor_m10398_MethodInfo,
	&OutOfMemoryException__ctor_m10399_MethodInfo,
	NULL
};
static const Il2CppMethodReference OutOfMemoryException_t1869_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Exception_ToString_m3797_MethodInfo,
	&Exception_GetObjectData_m3798_MethodInfo,
	&Exception_get_InnerException_m3799_MethodInfo,
	&Exception_get_Message_m3800_MethodInfo,
	&Exception_get_Source_m3801_MethodInfo,
	&Exception_get_StackTrace_m3802_MethodInfo,
	&Exception_GetObjectData_m3798_MethodInfo,
	&Exception_GetType_m3803_MethodInfo,
};
static bool OutOfMemoryException_t1869_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair OutOfMemoryException_t1869_InterfacesOffsets[] = 
{
	{ &ISerializable_t435_0_0_0, 4},
	{ &_Exception_t832_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType OutOfMemoryException_t1869_0_0_0;
extern const Il2CppType OutOfMemoryException_t1869_1_0_0;
struct OutOfMemoryException_t1869;
const Il2CppTypeDefinitionMetadata OutOfMemoryException_t1869_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, OutOfMemoryException_t1869_InterfacesOffsets/* interfaceOffsets */
	, &SystemException_t1194_0_0_0/* parent */
	, OutOfMemoryException_t1869_VTable/* vtableMethods */
	, OutOfMemoryException_t1869_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2465/* fieldStart */

};
TypeInfo OutOfMemoryException_t1869_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "OutOfMemoryException"/* name */
	, "System"/* namespaze */
	, OutOfMemoryException_t1869_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &OutOfMemoryException_t1869_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 906/* custom_attributes_cache */
	, &OutOfMemoryException_t1869_0_0_0/* byval_arg */
	, &OutOfMemoryException_t1869_1_0_0/* this_arg */
	, &OutOfMemoryException_t1869_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (OutOfMemoryException_t1869)/* instance_size */
	, sizeof (OutOfMemoryException_t1869)/* actualSize */
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
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.OverflowException
#include "mscorlib_System_OverflowException.h"
// Metadata Definition System.OverflowException
extern TypeInfo OverflowException_t1870_il2cpp_TypeInfo;
// System.OverflowException
#include "mscorlib_System_OverflowExceptionMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.OverflowException::.ctor()
extern const MethodInfo OverflowException__ctor_m10400_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&OverflowException__ctor_m10400/* method */
	, &OverflowException_t1870_il2cpp_TypeInfo/* declaring_type */
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
	, 5421/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo OverflowException_t1870_OverflowException__ctor_m10401_ParameterInfos[] = 
{
	{"message", 0, 134224485, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.OverflowException::.ctor(System.String)
extern const MethodInfo OverflowException__ctor_m10401_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&OverflowException__ctor_m10401/* method */
	, &OverflowException_t1870_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, OverflowException_t1870_OverflowException__ctor_m10401_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5422/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo OverflowException_t1870_OverflowException__ctor_m10402_ParameterInfos[] = 
{
	{"info", 0, 134224486, 0, &SerializationInfo_t732_0_0_0},
	{"context", 1, 134224487, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.OverflowException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo OverflowException__ctor_m10402_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&OverflowException__ctor_m10402/* method */
	, &OverflowException_t1870_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, OverflowException_t1870_OverflowException__ctor_m10402_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5423/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* OverflowException_t1870_MethodInfos[] =
{
	&OverflowException__ctor_m10400_MethodInfo,
	&OverflowException__ctor_m10401_MethodInfo,
	&OverflowException__ctor_m10402_MethodInfo,
	NULL
};
static const Il2CppMethodReference OverflowException_t1870_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Exception_ToString_m3797_MethodInfo,
	&Exception_GetObjectData_m3798_MethodInfo,
	&Exception_get_InnerException_m3799_MethodInfo,
	&Exception_get_Message_m3800_MethodInfo,
	&Exception_get_Source_m3801_MethodInfo,
	&Exception_get_StackTrace_m3802_MethodInfo,
	&Exception_GetObjectData_m3798_MethodInfo,
	&Exception_GetType_m3803_MethodInfo,
};
static bool OverflowException_t1870_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair OverflowException_t1870_InterfacesOffsets[] = 
{
	{ &ISerializable_t435_0_0_0, 4},
	{ &_Exception_t832_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType OverflowException_t1870_0_0_0;
extern const Il2CppType OverflowException_t1870_1_0_0;
extern const Il2CppType ArithmeticException_t1343_0_0_0;
struct OverflowException_t1870;
const Il2CppTypeDefinitionMetadata OverflowException_t1870_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, OverflowException_t1870_InterfacesOffsets/* interfaceOffsets */
	, &ArithmeticException_t1343_0_0_0/* parent */
	, OverflowException_t1870_VTable/* vtableMethods */
	, OverflowException_t1870_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2466/* fieldStart */

};
TypeInfo OverflowException_t1870_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "OverflowException"/* name */
	, "System"/* namespaze */
	, OverflowException_t1870_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &OverflowException_t1870_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 907/* custom_attributes_cache */
	, &OverflowException_t1870_0_0_0/* byval_arg */
	, &OverflowException_t1870_1_0_0/* this_arg */
	, &OverflowException_t1870_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (OverflowException_t1870)/* instance_size */
	, sizeof (OverflowException_t1870)/* actualSize */
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
	, 3/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.PlatformID
#include "mscorlib_System_PlatformID.h"
// Metadata Definition System.PlatformID
extern TypeInfo PlatformID_t1871_il2cpp_TypeInfo;
// System.PlatformID
#include "mscorlib_System_PlatformIDMethodDeclarations.h"
static const MethodInfo* PlatformID_t1871_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference PlatformID_t1871_VTable[] =
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
static bool PlatformID_t1871_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair PlatformID_t1871_InterfacesOffsets[] = 
{
	{ &IFormattable_t428_0_0_0, 4},
	{ &IConvertible_t429_0_0_0, 5},
	{ &IComparable_t430_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType PlatformID_t1871_1_0_0;
const Il2CppTypeDefinitionMetadata PlatformID_t1871_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, PlatformID_t1871_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t431_0_0_0/* parent */
	, PlatformID_t1871_VTable/* vtableMethods */
	, PlatformID_t1871_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2467/* fieldStart */

};
TypeInfo PlatformID_t1871_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "PlatformID"/* name */
	, "System"/* namespaze */
	, PlatformID_t1871_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Int32_t75_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 908/* custom_attributes_cache */
	, &PlatformID_t1871_0_0_0/* byval_arg */
	, &PlatformID_t1871_1_0_0/* this_arg */
	, &PlatformID_t1871_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PlatformID_t1871)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (PlatformID_t1871)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8449/* flags */
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
	, 8/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.Random
#include "mscorlib_System_Random.h"
// Metadata Definition System.Random
extern TypeInfo Random_t620_il2cpp_TypeInfo;
// System.Random
#include "mscorlib_System_RandomMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Random::.ctor()
extern const MethodInfo Random__ctor_m10403_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Random__ctor_m10403/* method */
	, &Random_t620_il2cpp_TypeInfo/* declaring_type */
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
	, 5424/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo Random_t620_Random__ctor_m3573_ParameterInfos[] = 
{
	{"Seed", 0, 134224488, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Random::.ctor(System.Int32)
extern const MethodInfo Random__ctor_m3573_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Random__ctor_m3573/* method */
	, &Random_t620_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75/* invoker_method */
	, Random_t620_Random__ctor_m3573_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5425/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Random_t620_MethodInfos[] =
{
	&Random__ctor_m10403_MethodInfo,
	&Random__ctor_m3573_MethodInfo,
	NULL
};
static const Il2CppMethodReference Random_t620_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
};
static bool Random_t620_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType Random_t620_0_0_0;
extern const Il2CppType Random_t620_1_0_0;
struct Random_t620;
const Il2CppTypeDefinitionMetadata Random_t620_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Random_t620_VTable/* vtableMethods */
	, Random_t620_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2475/* fieldStart */

};
TypeInfo Random_t620_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Random"/* name */
	, "System"/* namespaze */
	, Random_t620_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Random_t620_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 909/* custom_attributes_cache */
	, &Random_t620_0_0_0/* byval_arg */
	, &Random_t620_1_0_0/* this_arg */
	, &Random_t620_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Random_t620)/* instance_size */
	, sizeof (Random_t620)/* actualSize */
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
	, 2/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.RankException
#include "mscorlib_System_RankException.h"
// Metadata Definition System.RankException
extern TypeInfo RankException_t1872_il2cpp_TypeInfo;
// System.RankException
#include "mscorlib_System_RankExceptionMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.RankException::.ctor()
extern const MethodInfo RankException__ctor_m10404_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&RankException__ctor_m10404/* method */
	, &RankException_t1872_il2cpp_TypeInfo/* declaring_type */
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
	, 5426/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo RankException_t1872_RankException__ctor_m10405_ParameterInfos[] = 
{
	{"message", 0, 134224489, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.RankException::.ctor(System.String)
extern const MethodInfo RankException__ctor_m10405_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&RankException__ctor_m10405/* method */
	, &RankException_t1872_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, RankException_t1872_RankException__ctor_m10405_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5427/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo RankException_t1872_RankException__ctor_m10406_ParameterInfos[] = 
{
	{"info", 0, 134224490, 0, &SerializationInfo_t732_0_0_0},
	{"context", 1, 134224491, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.RankException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo RankException__ctor_m10406_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&RankException__ctor_m10406/* method */
	, &RankException_t1872_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, RankException_t1872_RankException__ctor_m10406_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5428/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* RankException_t1872_MethodInfos[] =
{
	&RankException__ctor_m10404_MethodInfo,
	&RankException__ctor_m10405_MethodInfo,
	&RankException__ctor_m10406_MethodInfo,
	NULL
};
static const Il2CppMethodReference RankException_t1872_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Exception_ToString_m3797_MethodInfo,
	&Exception_GetObjectData_m3798_MethodInfo,
	&Exception_get_InnerException_m3799_MethodInfo,
	&Exception_get_Message_m3800_MethodInfo,
	&Exception_get_Source_m3801_MethodInfo,
	&Exception_get_StackTrace_m3802_MethodInfo,
	&Exception_GetObjectData_m3798_MethodInfo,
	&Exception_GetType_m3803_MethodInfo,
};
static bool RankException_t1872_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair RankException_t1872_InterfacesOffsets[] = 
{
	{ &ISerializable_t435_0_0_0, 4},
	{ &_Exception_t832_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType RankException_t1872_0_0_0;
extern const Il2CppType RankException_t1872_1_0_0;
struct RankException_t1872;
const Il2CppTypeDefinitionMetadata RankException_t1872_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, RankException_t1872_InterfacesOffsets/* interfaceOffsets */
	, &SystemException_t1194_0_0_0/* parent */
	, RankException_t1872_VTable/* vtableMethods */
	, RankException_t1872_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo RankException_t1872_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "RankException"/* name */
	, "System"/* namespaze */
	, RankException_t1872_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &RankException_t1872_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 910/* custom_attributes_cache */
	, &RankException_t1872_0_0_0/* byval_arg */
	, &RankException_t1872_1_0_0/* this_arg */
	, &RankException_t1872_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (RankException_t1872)/* instance_size */
	, sizeof (RankException_t1872)/* actualSize */
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
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.ResolveEventArgs
#include "mscorlib_System_ResolveEventArgs.h"
// Metadata Definition System.ResolveEventArgs
extern TypeInfo ResolveEventArgs_t1873_il2cpp_TypeInfo;
// System.ResolveEventArgs
#include "mscorlib_System_ResolveEventArgsMethodDeclarations.h"
static const MethodInfo* ResolveEventArgs_t1873_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference ResolveEventArgs_t1873_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
};
static bool ResolveEventArgs_t1873_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ResolveEventArgs_t1873_0_0_0;
extern const Il2CppType ResolveEventArgs_t1873_1_0_0;
extern const Il2CppType EventArgs_t1251_0_0_0;
struct ResolveEventArgs_t1873;
const Il2CppTypeDefinitionMetadata ResolveEventArgs_t1873_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &EventArgs_t1251_0_0_0/* parent */
	, ResolveEventArgs_t1873_VTable/* vtableMethods */
	, ResolveEventArgs_t1873_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ResolveEventArgs_t1873_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ResolveEventArgs"/* name */
	, "System"/* namespaze */
	, ResolveEventArgs_t1873_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ResolveEventArgs_t1873_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 911/* custom_attributes_cache */
	, &ResolveEventArgs_t1873_0_0_0/* byval_arg */
	, &ResolveEventArgs_t1873_1_0_0/* this_arg */
	, &ResolveEventArgs_t1873_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ResolveEventArgs_t1873)/* instance_size */
	, sizeof (ResolveEventArgs_t1873)/* actualSize */
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
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// Metadata Definition System.RuntimeMethodHandle
extern TypeInfo RuntimeMethodHandle_t1874_il2cpp_TypeInfo;
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandleMethodDeclarations.h"
extern const Il2CppType IntPtr_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo RuntimeMethodHandle_t1874_RuntimeMethodHandle__ctor_m10407_ParameterInfos[] = 
{
	{"v", 0, 134224492, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.RuntimeMethodHandle::.ctor(System.IntPtr)
extern const MethodInfo RuntimeMethodHandle__ctor_m10407_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&RuntimeMethodHandle__ctor_m10407/* method */
	, &RuntimeMethodHandle_t1874_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_IntPtr_t/* invoker_method */
	, RuntimeMethodHandle_t1874_RuntimeMethodHandle__ctor_m10407_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5429/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo RuntimeMethodHandle_t1874_RuntimeMethodHandle__ctor_m10408_ParameterInfos[] = 
{
	{"info", 0, 134224493, 0, &SerializationInfo_t732_0_0_0},
	{"context", 1, 134224494, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.RuntimeMethodHandle::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo RuntimeMethodHandle__ctor_m10408_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&RuntimeMethodHandle__ctor_m10408/* method */
	, &RuntimeMethodHandle_t1874_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, RuntimeMethodHandle_t1874_RuntimeMethodHandle__ctor_m10408_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6273/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5430/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.IntPtr System.RuntimeMethodHandle::get_Value()
extern const MethodInfo RuntimeMethodHandle_get_Value_m10409_MethodInfo = 
{
	"get_Value"/* name */
	, (methodPointerType)&RuntimeMethodHandle_get_Value_m10409/* method */
	, &RuntimeMethodHandle_t1874_il2cpp_TypeInfo/* declaring_type */
	, &IntPtr_t_0_0_0/* return_type */
	, RuntimeInvoker_IntPtr_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5431/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo RuntimeMethodHandle_t1874_RuntimeMethodHandle_GetObjectData_m10410_ParameterInfos[] = 
{
	{"info", 0, 134224495, 0, &SerializationInfo_t732_0_0_0},
	{"context", 1, 134224496, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.RuntimeMethodHandle::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo RuntimeMethodHandle_GetObjectData_m10410_MethodInfo = 
{
	"GetObjectData"/* name */
	, (methodPointerType)&RuntimeMethodHandle_GetObjectData_m10410/* method */
	, &RuntimeMethodHandle_t1874_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, RuntimeMethodHandle_t1874_RuntimeMethodHandle_GetObjectData_m10410_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5432/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo RuntimeMethodHandle_t1874_RuntimeMethodHandle_Equals_m10411_ParameterInfos[] = 
{
	{"obj", 0, 134224497, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.RuntimeMethodHandle::Equals(System.Object)
extern const MethodInfo RuntimeMethodHandle_Equals_m10411_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&RuntimeMethodHandle_Equals_m10411/* method */
	, &RuntimeMethodHandle_t1874_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Object_t/* invoker_method */
	, RuntimeMethodHandle_t1874_RuntimeMethodHandle_Equals_m10411_ParameterInfos/* parameters */
	, 913/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5433/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.RuntimeMethodHandle::GetHashCode()
extern const MethodInfo RuntimeMethodHandle_GetHashCode_m10412_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&RuntimeMethodHandle_GetHashCode_m10412/* method */
	, &RuntimeMethodHandle_t1874_il2cpp_TypeInfo/* declaring_type */
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
	, 5434/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* RuntimeMethodHandle_t1874_MethodInfos[] =
{
	&RuntimeMethodHandle__ctor_m10407_MethodInfo,
	&RuntimeMethodHandle__ctor_m10408_MethodInfo,
	&RuntimeMethodHandle_get_Value_m10409_MethodInfo,
	&RuntimeMethodHandle_GetObjectData_m10410_MethodInfo,
	&RuntimeMethodHandle_Equals_m10411_MethodInfo,
	&RuntimeMethodHandle_GetHashCode_m10412_MethodInfo,
	NULL
};
extern const MethodInfo RuntimeMethodHandle_get_Value_m10409_MethodInfo;
static const PropertyInfo RuntimeMethodHandle_t1874____Value_PropertyInfo = 
{
	&RuntimeMethodHandle_t1874_il2cpp_TypeInfo/* parent */
	, "Value"/* name */
	, &RuntimeMethodHandle_get_Value_m10409_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* RuntimeMethodHandle_t1874_PropertyInfos[] =
{
	&RuntimeMethodHandle_t1874____Value_PropertyInfo,
	NULL
};
extern const MethodInfo RuntimeMethodHandle_Equals_m10411_MethodInfo;
extern const MethodInfo RuntimeMethodHandle_GetHashCode_m10412_MethodInfo;
extern const MethodInfo ValueType_ToString_m2224_MethodInfo;
extern const MethodInfo RuntimeMethodHandle_GetObjectData_m10410_MethodInfo;
static const Il2CppMethodReference RuntimeMethodHandle_t1874_VTable[] =
{
	&RuntimeMethodHandle_Equals_m10411_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&RuntimeMethodHandle_GetHashCode_m10412_MethodInfo,
	&ValueType_ToString_m2224_MethodInfo,
	&RuntimeMethodHandle_GetObjectData_m10410_MethodInfo,
};
static bool RuntimeMethodHandle_t1874_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* RuntimeMethodHandle_t1874_InterfacesTypeInfos[] = 
{
	&ISerializable_t435_0_0_0,
};
static Il2CppInterfaceOffsetPair RuntimeMethodHandle_t1874_InterfacesOffsets[] = 
{
	{ &ISerializable_t435_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType RuntimeMethodHandle_t1874_0_0_0;
extern const Il2CppType RuntimeMethodHandle_t1874_1_0_0;
const Il2CppTypeDefinitionMetadata RuntimeMethodHandle_t1874_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, RuntimeMethodHandle_t1874_InterfacesTypeInfos/* implementedInterfaces */
	, RuntimeMethodHandle_t1874_InterfacesOffsets/* interfaceOffsets */
	, &ValueType_t446_0_0_0/* parent */
	, RuntimeMethodHandle_t1874_VTable/* vtableMethods */
	, RuntimeMethodHandle_t1874_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2478/* fieldStart */

};
TypeInfo RuntimeMethodHandle_t1874_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "RuntimeMethodHandle"/* name */
	, "System"/* namespaze */
	, RuntimeMethodHandle_t1874_MethodInfos/* methods */
	, RuntimeMethodHandle_t1874_PropertyInfos/* properties */
	, NULL/* events */
	, &RuntimeMethodHandle_t1874_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 912/* custom_attributes_cache */
	, &RuntimeMethodHandle_t1874_0_0_0/* byval_arg */
	, &RuntimeMethodHandle_t1874_1_0_0/* this_arg */
	, &RuntimeMethodHandle_t1874_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (RuntimeMethodHandle_t1874)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (RuntimeMethodHandle_t1874)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(RuntimeMethodHandle_t1874 )/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057033/* flags */
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
	, 6/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.StringComparer
#include "mscorlib_System_StringComparer.h"
// Metadata Definition System.StringComparer
extern TypeInfo StringComparer_t741_il2cpp_TypeInfo;
// System.StringComparer
#include "mscorlib_System_StringComparerMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.StringComparer::.ctor()
extern const MethodInfo StringComparer__ctor_m10413_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&StringComparer__ctor_m10413/* method */
	, &StringComparer_t741_il2cpp_TypeInfo/* declaring_type */
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
	, 5435/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.StringComparer::.cctor()
extern const MethodInfo StringComparer__cctor_m10414_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&StringComparer__cctor_m10414/* method */
	, &StringComparer_t741_il2cpp_TypeInfo/* declaring_type */
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
	, 5436/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType StringComparer_t741_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.StringComparer System.StringComparer::get_InvariantCultureIgnoreCase()
extern const MethodInfo StringComparer_get_InvariantCultureIgnoreCase_m4902_MethodInfo = 
{
	"get_InvariantCultureIgnoreCase"/* name */
	, (methodPointerType)&StringComparer_get_InvariantCultureIgnoreCase_m4902/* method */
	, &StringComparer_t741_il2cpp_TypeInfo/* declaring_type */
	, &StringComparer_t741_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5437/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.StringComparer System.StringComparer::get_OrdinalIgnoreCase()
extern const MethodInfo StringComparer_get_OrdinalIgnoreCase_m3522_MethodInfo = 
{
	"get_OrdinalIgnoreCase"/* name */
	, (methodPointerType)&StringComparer_get_OrdinalIgnoreCase_m3522/* method */
	, &StringComparer_t741_il2cpp_TypeInfo/* declaring_type */
	, &StringComparer_t741_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5438/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo StringComparer_t741_StringComparer_Compare_m10415_ParameterInfos[] = 
{
	{"x", 0, 134224498, 0, &Object_t_0_0_0},
	{"y", 1, 134224499, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.StringComparer::Compare(System.Object,System.Object)
extern const MethodInfo StringComparer_Compare_m10415_MethodInfo = 
{
	"Compare"/* name */
	, (methodPointerType)&StringComparer_Compare_m10415/* method */
	, &StringComparer_t741_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Object_t_Object_t/* invoker_method */
	, StringComparer_t741_StringComparer_Compare_m10415_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5439/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo StringComparer_t741_StringComparer_Equals_m10416_ParameterInfos[] = 
{
	{"x", 0, 134224500, 0, &Object_t_0_0_0},
	{"y", 1, 134224501, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.StringComparer::Equals(System.Object,System.Object)
extern const MethodInfo StringComparer_Equals_m10416_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&StringComparer_Equals_m10416/* method */
	, &StringComparer_t741_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Object_t_Object_t/* invoker_method */
	, StringComparer_t741_StringComparer_Equals_m10416_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5440/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo StringComparer_t741_StringComparer_GetHashCode_m10417_ParameterInfos[] = 
{
	{"obj", 0, 134224502, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.StringComparer::GetHashCode(System.Object)
extern const MethodInfo StringComparer_GetHashCode_m10417_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&StringComparer_GetHashCode_m10417/* method */
	, &StringComparer_t741_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Object_t/* invoker_method */
	, StringComparer_t741_StringComparer_GetHashCode_m10417_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5441/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo StringComparer_t741_StringComparer_Compare_m11205_ParameterInfos[] = 
{
	{"x", 0, 134224503, 0, &String_t_0_0_0},
	{"y", 1, 134224504, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.StringComparer::Compare(System.String,System.String)
extern const MethodInfo StringComparer_Compare_m11205_MethodInfo = 
{
	"Compare"/* name */
	, NULL/* method */
	, &StringComparer_t741_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Object_t_Object_t/* invoker_method */
	, StringComparer_t741_StringComparer_Compare_m11205_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5442/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo StringComparer_t741_StringComparer_Equals_m11206_ParameterInfos[] = 
{
	{"x", 0, 134224505, 0, &String_t_0_0_0},
	{"y", 1, 134224506, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.StringComparer::Equals(System.String,System.String)
extern const MethodInfo StringComparer_Equals_m11206_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &StringComparer_t741_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Object_t_Object_t/* invoker_method */
	, StringComparer_t741_StringComparer_Equals_m11206_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5443/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo StringComparer_t741_StringComparer_GetHashCode_m11207_ParameterInfos[] = 
{
	{"obj", 0, 134224507, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.StringComparer::GetHashCode(System.String)
extern const MethodInfo StringComparer_GetHashCode_m11207_MethodInfo = 
{
	"GetHashCode"/* name */
	, NULL/* method */
	, &StringComparer_t741_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Object_t/* invoker_method */
	, StringComparer_t741_StringComparer_GetHashCode_m11207_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5444/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* StringComparer_t741_MethodInfos[] =
{
	&StringComparer__ctor_m10413_MethodInfo,
	&StringComparer__cctor_m10414_MethodInfo,
	&StringComparer_get_InvariantCultureIgnoreCase_m4902_MethodInfo,
	&StringComparer_get_OrdinalIgnoreCase_m3522_MethodInfo,
	&StringComparer_Compare_m10415_MethodInfo,
	&StringComparer_Equals_m10416_MethodInfo,
	&StringComparer_GetHashCode_m10417_MethodInfo,
	&StringComparer_Compare_m11205_MethodInfo,
	&StringComparer_Equals_m11206_MethodInfo,
	&StringComparer_GetHashCode_m11207_MethodInfo,
	NULL
};
extern const MethodInfo StringComparer_get_InvariantCultureIgnoreCase_m4902_MethodInfo;
static const PropertyInfo StringComparer_t741____InvariantCultureIgnoreCase_PropertyInfo = 
{
	&StringComparer_t741_il2cpp_TypeInfo/* parent */
	, "InvariantCultureIgnoreCase"/* name */
	, &StringComparer_get_InvariantCultureIgnoreCase_m4902_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo StringComparer_get_OrdinalIgnoreCase_m3522_MethodInfo;
static const PropertyInfo StringComparer_t741____OrdinalIgnoreCase_PropertyInfo = 
{
	&StringComparer_t741_il2cpp_TypeInfo/* parent */
	, "OrdinalIgnoreCase"/* name */
	, &StringComparer_get_OrdinalIgnoreCase_m3522_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* StringComparer_t741_PropertyInfos[] =
{
	&StringComparer_t741____InvariantCultureIgnoreCase_PropertyInfo,
	&StringComparer_t741____OrdinalIgnoreCase_PropertyInfo,
	NULL
};
extern const MethodInfo StringComparer_Compare_m11205_MethodInfo;
extern const MethodInfo StringComparer_Equals_m11206_MethodInfo;
extern const MethodInfo StringComparer_GetHashCode_m11207_MethodInfo;
extern const MethodInfo StringComparer_Compare_m10415_MethodInfo;
extern const MethodInfo StringComparer_Equals_m10416_MethodInfo;
extern const MethodInfo StringComparer_GetHashCode_m10417_MethodInfo;
static const Il2CppMethodReference StringComparer_t741_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	&StringComparer_Compare_m11205_MethodInfo,
	&StringComparer_Equals_m11206_MethodInfo,
	&StringComparer_GetHashCode_m11207_MethodInfo,
	&StringComparer_Compare_m10415_MethodInfo,
	&StringComparer_Equals_m10416_MethodInfo,
	&StringComparer_GetHashCode_m10417_MethodInfo,
	NULL,
	NULL,
	NULL,
};
static bool StringComparer_t741_VTableIsGenericMethod[] =
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
extern const Il2CppType IComparer_1_t2415_0_0_0;
extern const Il2CppType IEqualityComparer_1_t2416_0_0_0;
extern const Il2CppType IComparer_t993_0_0_0;
extern const Il2CppType IEqualityComparer_t1000_0_0_0;
static const Il2CppType* StringComparer_t741_InterfacesTypeInfos[] = 
{
	&IComparer_1_t2415_0_0_0,
	&IEqualityComparer_1_t2416_0_0_0,
	&IComparer_t993_0_0_0,
	&IEqualityComparer_t1000_0_0_0,
};
static Il2CppInterfaceOffsetPair StringComparer_t741_InterfacesOffsets[] = 
{
	{ &IComparer_1_t2415_0_0_0, 4},
	{ &IEqualityComparer_1_t2416_0_0_0, 5},
	{ &IComparer_t993_0_0_0, 7},
	{ &IEqualityComparer_t1000_0_0_0, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType StringComparer_t741_1_0_0;
struct StringComparer_t741;
const Il2CppTypeDefinitionMetadata StringComparer_t741_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, StringComparer_t741_InterfacesTypeInfos/* implementedInterfaces */
	, StringComparer_t741_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, StringComparer_t741_VTable/* vtableMethods */
	, StringComparer_t741_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2479/* fieldStart */

};
TypeInfo StringComparer_t741_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "StringComparer"/* name */
	, "System"/* namespaze */
	, StringComparer_t741_MethodInfos/* methods */
	, StringComparer_t741_PropertyInfos/* properties */
	, NULL/* events */
	, &StringComparer_t741_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 914/* custom_attributes_cache */
	, &StringComparer_t741_0_0_0/* byval_arg */
	, &StringComparer_t741_1_0_0/* this_arg */
	, &StringComparer_t741_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (StringComparer_t741)/* instance_size */
	, sizeof (StringComparer_t741)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(StringComparer_t741_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056897/* flags */
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
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 4/* interfaces_count */
	, 4/* interface_offsets_count */

};
// System.CultureAwareComparer
#include "mscorlib_System_CultureAwareComparer.h"
// Metadata Definition System.CultureAwareComparer
extern TypeInfo CultureAwareComparer_t1875_il2cpp_TypeInfo;
// System.CultureAwareComparer
#include "mscorlib_System_CultureAwareComparerMethodDeclarations.h"
extern const Il2CppType CultureInfo_t757_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo CultureAwareComparer_t1875_CultureAwareComparer__ctor_m10418_ParameterInfos[] = 
{
	{"ci", 0, 134224508, 0, &CultureInfo_t757_0_0_0},
	{"ignore_case", 1, 134224509, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.CultureAwareComparer::.ctor(System.Globalization.CultureInfo,System.Boolean)
extern const MethodInfo CultureAwareComparer__ctor_m10418_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CultureAwareComparer__ctor_m10418/* method */
	, &CultureAwareComparer_t1875_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_SByte_t113/* invoker_method */
	, CultureAwareComparer_t1875_CultureAwareComparer__ctor_m10418_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5445/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo CultureAwareComparer_t1875_CultureAwareComparer_Compare_m10419_ParameterInfos[] = 
{
	{"x", 0, 134224510, 0, &String_t_0_0_0},
	{"y", 1, 134224511, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.CultureAwareComparer::Compare(System.String,System.String)
extern const MethodInfo CultureAwareComparer_Compare_m10419_MethodInfo = 
{
	"Compare"/* name */
	, (methodPointerType)&CultureAwareComparer_Compare_m10419/* method */
	, &CultureAwareComparer_t1875_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Object_t_Object_t/* invoker_method */
	, CultureAwareComparer_t1875_CultureAwareComparer_Compare_m10419_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5446/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo CultureAwareComparer_t1875_CultureAwareComparer_Equals_m10420_ParameterInfos[] = 
{
	{"x", 0, 134224512, 0, &String_t_0_0_0},
	{"y", 1, 134224513, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.CultureAwareComparer::Equals(System.String,System.String)
extern const MethodInfo CultureAwareComparer_Equals_m10420_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&CultureAwareComparer_Equals_m10420/* method */
	, &CultureAwareComparer_t1875_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Object_t_Object_t/* invoker_method */
	, CultureAwareComparer_t1875_CultureAwareComparer_Equals_m10420_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5447/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo CultureAwareComparer_t1875_CultureAwareComparer_GetHashCode_m10421_ParameterInfos[] = 
{
	{"s", 0, 134224514, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.CultureAwareComparer::GetHashCode(System.String)
extern const MethodInfo CultureAwareComparer_GetHashCode_m10421_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&CultureAwareComparer_GetHashCode_m10421/* method */
	, &CultureAwareComparer_t1875_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Object_t/* invoker_method */
	, CultureAwareComparer_t1875_CultureAwareComparer_GetHashCode_m10421_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5448/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* CultureAwareComparer_t1875_MethodInfos[] =
{
	&CultureAwareComparer__ctor_m10418_MethodInfo,
	&CultureAwareComparer_Compare_m10419_MethodInfo,
	&CultureAwareComparer_Equals_m10420_MethodInfo,
	&CultureAwareComparer_GetHashCode_m10421_MethodInfo,
	NULL
};
extern const MethodInfo CultureAwareComparer_Compare_m10419_MethodInfo;
extern const MethodInfo CultureAwareComparer_Equals_m10420_MethodInfo;
extern const MethodInfo CultureAwareComparer_GetHashCode_m10421_MethodInfo;
static const Il2CppMethodReference CultureAwareComparer_t1875_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	&CultureAwareComparer_Compare_m10419_MethodInfo,
	&CultureAwareComparer_Equals_m10420_MethodInfo,
	&CultureAwareComparer_GetHashCode_m10421_MethodInfo,
	&StringComparer_Compare_m10415_MethodInfo,
	&StringComparer_Equals_m10416_MethodInfo,
	&StringComparer_GetHashCode_m10417_MethodInfo,
	&CultureAwareComparer_Compare_m10419_MethodInfo,
	&CultureAwareComparer_Equals_m10420_MethodInfo,
	&CultureAwareComparer_GetHashCode_m10421_MethodInfo,
};
static bool CultureAwareComparer_t1875_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair CultureAwareComparer_t1875_InterfacesOffsets[] = 
{
	{ &IComparer_1_t2415_0_0_0, 4},
	{ &IEqualityComparer_1_t2416_0_0_0, 5},
	{ &IComparer_t993_0_0_0, 7},
	{ &IEqualityComparer_t1000_0_0_0, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType CultureAwareComparer_t1875_0_0_0;
extern const Il2CppType CultureAwareComparer_t1875_1_0_0;
struct CultureAwareComparer_t1875;
const Il2CppTypeDefinitionMetadata CultureAwareComparer_t1875_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, CultureAwareComparer_t1875_InterfacesOffsets/* interfaceOffsets */
	, &StringComparer_t741_0_0_0/* parent */
	, CultureAwareComparer_t1875_VTable/* vtableMethods */
	, CultureAwareComparer_t1875_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2483/* fieldStart */

};
TypeInfo CultureAwareComparer_t1875_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "CultureAwareComparer"/* name */
	, "System"/* namespaze */
	, CultureAwareComparer_t1875_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &CultureAwareComparer_t1875_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &CultureAwareComparer_t1875_0_0_0/* byval_arg */
	, &CultureAwareComparer_t1875_1_0_0/* this_arg */
	, &CultureAwareComparer_t1875_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CultureAwareComparer_t1875)/* instance_size */
	, sizeof (CultureAwareComparer_t1875)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057024/* flags */
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
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 4/* interface_offsets_count */

};
// System.OrdinalComparer
#include "mscorlib_System_OrdinalComparer.h"
// Metadata Definition System.OrdinalComparer
extern TypeInfo OrdinalComparer_t1876_il2cpp_TypeInfo;
// System.OrdinalComparer
#include "mscorlib_System_OrdinalComparerMethodDeclarations.h"
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo OrdinalComparer_t1876_OrdinalComparer__ctor_m10422_ParameterInfos[] = 
{
	{"ignoreCase", 0, 134224515, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.OrdinalComparer::.ctor(System.Boolean)
extern const MethodInfo OrdinalComparer__ctor_m10422_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&OrdinalComparer__ctor_m10422/* method */
	, &OrdinalComparer_t1876_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_SByte_t113/* invoker_method */
	, OrdinalComparer_t1876_OrdinalComparer__ctor_m10422_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5449/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo OrdinalComparer_t1876_OrdinalComparer_Compare_m10423_ParameterInfos[] = 
{
	{"x", 0, 134224516, 0, &String_t_0_0_0},
	{"y", 1, 134224517, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.OrdinalComparer::Compare(System.String,System.String)
extern const MethodInfo OrdinalComparer_Compare_m10423_MethodInfo = 
{
	"Compare"/* name */
	, (methodPointerType)&OrdinalComparer_Compare_m10423/* method */
	, &OrdinalComparer_t1876_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Object_t_Object_t/* invoker_method */
	, OrdinalComparer_t1876_OrdinalComparer_Compare_m10423_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5450/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo OrdinalComparer_t1876_OrdinalComparer_Equals_m10424_ParameterInfos[] = 
{
	{"x", 0, 134224518, 0, &String_t_0_0_0},
	{"y", 1, 134224519, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.OrdinalComparer::Equals(System.String,System.String)
extern const MethodInfo OrdinalComparer_Equals_m10424_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&OrdinalComparer_Equals_m10424/* method */
	, &OrdinalComparer_t1876_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Object_t_Object_t/* invoker_method */
	, OrdinalComparer_t1876_OrdinalComparer_Equals_m10424_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5451/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo OrdinalComparer_t1876_OrdinalComparer_GetHashCode_m10425_ParameterInfos[] = 
{
	{"s", 0, 134224520, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.OrdinalComparer::GetHashCode(System.String)
extern const MethodInfo OrdinalComparer_GetHashCode_m10425_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&OrdinalComparer_GetHashCode_m10425/* method */
	, &OrdinalComparer_t1876_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Object_t/* invoker_method */
	, OrdinalComparer_t1876_OrdinalComparer_GetHashCode_m10425_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5452/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* OrdinalComparer_t1876_MethodInfos[] =
{
	&OrdinalComparer__ctor_m10422_MethodInfo,
	&OrdinalComparer_Compare_m10423_MethodInfo,
	&OrdinalComparer_Equals_m10424_MethodInfo,
	&OrdinalComparer_GetHashCode_m10425_MethodInfo,
	NULL
};
extern const MethodInfo OrdinalComparer_Compare_m10423_MethodInfo;
extern const MethodInfo OrdinalComparer_Equals_m10424_MethodInfo;
extern const MethodInfo OrdinalComparer_GetHashCode_m10425_MethodInfo;
static const Il2CppMethodReference OrdinalComparer_t1876_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	&OrdinalComparer_Compare_m10423_MethodInfo,
	&OrdinalComparer_Equals_m10424_MethodInfo,
	&OrdinalComparer_GetHashCode_m10425_MethodInfo,
	&StringComparer_Compare_m10415_MethodInfo,
	&StringComparer_Equals_m10416_MethodInfo,
	&StringComparer_GetHashCode_m10417_MethodInfo,
	&OrdinalComparer_Compare_m10423_MethodInfo,
	&OrdinalComparer_Equals_m10424_MethodInfo,
	&OrdinalComparer_GetHashCode_m10425_MethodInfo,
};
static bool OrdinalComparer_t1876_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair OrdinalComparer_t1876_InterfacesOffsets[] = 
{
	{ &IComparer_1_t2415_0_0_0, 4},
	{ &IEqualityComparer_1_t2416_0_0_0, 5},
	{ &IComparer_t993_0_0_0, 7},
	{ &IEqualityComparer_t1000_0_0_0, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType OrdinalComparer_t1876_0_0_0;
extern const Il2CppType OrdinalComparer_t1876_1_0_0;
struct OrdinalComparer_t1876;
const Il2CppTypeDefinitionMetadata OrdinalComparer_t1876_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, OrdinalComparer_t1876_InterfacesOffsets/* interfaceOffsets */
	, &StringComparer_t741_0_0_0/* parent */
	, OrdinalComparer_t1876_VTable/* vtableMethods */
	, OrdinalComparer_t1876_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2485/* fieldStart */

};
TypeInfo OrdinalComparer_t1876_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "OrdinalComparer"/* name */
	, "System"/* namespaze */
	, OrdinalComparer_t1876_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &OrdinalComparer_t1876_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &OrdinalComparer_t1876_0_0_0/* byval_arg */
	, &OrdinalComparer_t1876_1_0_0/* this_arg */
	, &OrdinalComparer_t1876_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (OrdinalComparer_t1876)/* instance_size */
	, sizeof (OrdinalComparer_t1876)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057024/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 4/* interface_offsets_count */

};
// System.StringComparison
#include "mscorlib_System_StringComparison.h"
// Metadata Definition System.StringComparison
extern TypeInfo StringComparison_t1877_il2cpp_TypeInfo;
// System.StringComparison
#include "mscorlib_System_StringComparisonMethodDeclarations.h"
static const MethodInfo* StringComparison_t1877_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference StringComparison_t1877_VTable[] =
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
static bool StringComparison_t1877_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair StringComparison_t1877_InterfacesOffsets[] = 
{
	{ &IFormattable_t428_0_0_0, 4},
	{ &IConvertible_t429_0_0_0, 5},
	{ &IComparable_t430_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType StringComparison_t1877_0_0_0;
extern const Il2CppType StringComparison_t1877_1_0_0;
const Il2CppTypeDefinitionMetadata StringComparison_t1877_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, StringComparison_t1877_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t431_0_0_0/* parent */
	, StringComparison_t1877_VTable/* vtableMethods */
	, StringComparison_t1877_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2486/* fieldStart */

};
TypeInfo StringComparison_t1877_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "StringComparison"/* name */
	, "System"/* namespaze */
	, StringComparison_t1877_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Int32_t75_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 915/* custom_attributes_cache */
	, &StringComparison_t1877_0_0_0/* byval_arg */
	, &StringComparison_t1877_1_0_0/* this_arg */
	, &StringComparison_t1877_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (StringComparison_t1877)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (StringComparison_t1877)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8449/* flags */
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
	, 7/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.StringSplitOptions
#include "mscorlib_System_StringSplitOptions.h"
// Metadata Definition System.StringSplitOptions
extern TypeInfo StringSplitOptions_t1878_il2cpp_TypeInfo;
// System.StringSplitOptions
#include "mscorlib_System_StringSplitOptionsMethodDeclarations.h"
static const MethodInfo* StringSplitOptions_t1878_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference StringSplitOptions_t1878_VTable[] =
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
static bool StringSplitOptions_t1878_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair StringSplitOptions_t1878_InterfacesOffsets[] = 
{
	{ &IFormattable_t428_0_0_0, 4},
	{ &IConvertible_t429_0_0_0, 5},
	{ &IComparable_t430_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType StringSplitOptions_t1878_0_0_0;
extern const Il2CppType StringSplitOptions_t1878_1_0_0;
const Il2CppTypeDefinitionMetadata StringSplitOptions_t1878_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, StringSplitOptions_t1878_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t431_0_0_0/* parent */
	, StringSplitOptions_t1878_VTable/* vtableMethods */
	, StringSplitOptions_t1878_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2493/* fieldStart */

};
TypeInfo StringSplitOptions_t1878_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "StringSplitOptions"/* name */
	, "System"/* namespaze */
	, StringSplitOptions_t1878_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Int32_t75_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 916/* custom_attributes_cache */
	, &StringSplitOptions_t1878_0_0_0/* byval_arg */
	, &StringSplitOptions_t1878_1_0_0/* this_arg */
	, &StringSplitOptions_t1878_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (StringSplitOptions_t1878)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (StringSplitOptions_t1878)+ sizeof (Il2CppObject)/* actualSize */
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
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.SystemException
#include "mscorlib_System_SystemException.h"
// Metadata Definition System.SystemException
extern TypeInfo SystemException_t1194_il2cpp_TypeInfo;
// System.SystemException
#include "mscorlib_System_SystemExceptionMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.SystemException::.ctor()
extern const MethodInfo SystemException__ctor_m10426_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SystemException__ctor_m10426/* method */
	, &SystemException_t1194_il2cpp_TypeInfo/* declaring_type */
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
	, 5453/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo SystemException_t1194_SystemException__ctor_m5001_ParameterInfos[] = 
{
	{"message", 0, 134224521, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.SystemException::.ctor(System.String)
extern const MethodInfo SystemException__ctor_m5001_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SystemException__ctor_m5001/* method */
	, &SystemException_t1194_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, SystemException_t1194_SystemException__ctor_m5001_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5454/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo SystemException_t1194_SystemException__ctor_m10427_ParameterInfos[] = 
{
	{"info", 0, 134224522, 0, &SerializationInfo_t732_0_0_0},
	{"context", 1, 134224523, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.SystemException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo SystemException__ctor_m10427_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SystemException__ctor_m10427/* method */
	, &SystemException_t1194_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, SystemException_t1194_SystemException__ctor_m10427_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5455/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Exception_t65_0_0_0;
static const ParameterInfo SystemException_t1194_SystemException__ctor_m10428_ParameterInfos[] = 
{
	{"message", 0, 134224524, 0, &String_t_0_0_0},
	{"innerException", 1, 134224525, 0, &Exception_t65_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.SystemException::.ctor(System.String,System.Exception)
extern const MethodInfo SystemException__ctor_m10428_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SystemException__ctor_m10428/* method */
	, &SystemException_t1194_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Object_t/* invoker_method */
	, SystemException_t1194_SystemException__ctor_m10428_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5456/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* SystemException_t1194_MethodInfos[] =
{
	&SystemException__ctor_m10426_MethodInfo,
	&SystemException__ctor_m5001_MethodInfo,
	&SystemException__ctor_m10427_MethodInfo,
	&SystemException__ctor_m10428_MethodInfo,
	NULL
};
static const Il2CppMethodReference SystemException_t1194_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Exception_ToString_m3797_MethodInfo,
	&Exception_GetObjectData_m3798_MethodInfo,
	&Exception_get_InnerException_m3799_MethodInfo,
	&Exception_get_Message_m3800_MethodInfo,
	&Exception_get_Source_m3801_MethodInfo,
	&Exception_get_StackTrace_m3802_MethodInfo,
	&Exception_GetObjectData_m3798_MethodInfo,
	&Exception_GetType_m3803_MethodInfo,
};
static bool SystemException_t1194_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair SystemException_t1194_InterfacesOffsets[] = 
{
	{ &ISerializable_t435_0_0_0, 4},
	{ &_Exception_t832_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType SystemException_t1194_1_0_0;
struct SystemException_t1194;
const Il2CppTypeDefinitionMetadata SystemException_t1194_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, SystemException_t1194_InterfacesOffsets/* interfaceOffsets */
	, &Exception_t65_0_0_0/* parent */
	, SystemException_t1194_VTable/* vtableMethods */
	, SystemException_t1194_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo SystemException_t1194_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "SystemException"/* name */
	, "System"/* namespaze */
	, SystemException_t1194_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &SystemException_t1194_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 917/* custom_attributes_cache */
	, &SystemException_t1194_0_0_0/* byval_arg */
	, &SystemException_t1194_1_0_0/* this_arg */
	, &SystemException_t1194_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SystemException_t1194)/* instance_size */
	, sizeof (SystemException_t1194)/* actualSize */
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
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.ThreadStaticAttribute
#include "mscorlib_System_ThreadStaticAttribute.h"
// Metadata Definition System.ThreadStaticAttribute
extern TypeInfo ThreadStaticAttribute_t1879_il2cpp_TypeInfo;
// System.ThreadStaticAttribute
#include "mscorlib_System_ThreadStaticAttributeMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.ThreadStaticAttribute::.ctor()
extern const MethodInfo ThreadStaticAttribute__ctor_m10429_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ThreadStaticAttribute__ctor_m10429/* method */
	, &ThreadStaticAttribute_t1879_il2cpp_TypeInfo/* declaring_type */
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
	, 5457/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ThreadStaticAttribute_t1879_MethodInfos[] =
{
	&ThreadStaticAttribute__ctor_m10429_MethodInfo,
	NULL
};
static const Il2CppMethodReference ThreadStaticAttribute_t1879_VTable[] =
{
	&Attribute_Equals_m3804_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Attribute_GetHashCode_m3664_MethodInfo,
	&Object_ToString_m380_MethodInfo,
};
static bool ThreadStaticAttribute_t1879_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair ThreadStaticAttribute_t1879_InterfacesOffsets[] = 
{
	{ &_Attribute_t842_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ThreadStaticAttribute_t1879_0_0_0;
extern const Il2CppType ThreadStaticAttribute_t1879_1_0_0;
struct ThreadStaticAttribute_t1879;
const Il2CppTypeDefinitionMetadata ThreadStaticAttribute_t1879_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, ThreadStaticAttribute_t1879_InterfacesOffsets/* interfaceOffsets */
	, &Attribute_t544_0_0_0/* parent */
	, ThreadStaticAttribute_t1879_VTable/* vtableMethods */
	, ThreadStaticAttribute_t1879_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ThreadStaticAttribute_t1879_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ThreadStaticAttribute"/* name */
	, "System"/* namespaze */
	, ThreadStaticAttribute_t1879_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ThreadStaticAttribute_t1879_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 918/* custom_attributes_cache */
	, &ThreadStaticAttribute_t1879_0_0_0/* byval_arg */
	, &ThreadStaticAttribute_t1879_1_0_0/* this_arg */
	, &ThreadStaticAttribute_t1879_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ThreadStaticAttribute_t1879)/* instance_size */
	, sizeof (ThreadStaticAttribute_t1879)/* actualSize */
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
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// Metadata Definition System.TimeSpan
extern TypeInfo TimeSpan_t1064_il2cpp_TypeInfo;
// System.TimeSpan
#include "mscorlib_System_TimeSpanMethodDeclarations.h"
extern const Il2CppType Int64_t760_0_0_0;
static const ParameterInfo TimeSpan_t1064_TimeSpan__ctor_m10430_ParameterInfos[] = 
{
	{"ticks", 0, 134224526, 0, &Int64_t760_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int64_t760 (const MethodInfo* method, void* obj, void** args);
// System.Void System.TimeSpan::.ctor(System.Int64)
extern const MethodInfo TimeSpan__ctor_m10430_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TimeSpan__ctor_m10430/* method */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int64_t760/* invoker_method */
	, TimeSpan_t1064_TimeSpan__ctor_m10430_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5458/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo TimeSpan_t1064_TimeSpan__ctor_m10431_ParameterInfos[] = 
{
	{"hours", 0, 134224527, 0, &Int32_t75_0_0_0},
	{"minutes", 1, 134224528, 0, &Int32_t75_0_0_0},
	{"seconds", 2, 134224529, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75_Int32_t75_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32)
extern const MethodInfo TimeSpan__ctor_m10431_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TimeSpan__ctor_m10431/* method */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75_Int32_t75_Int32_t75/* invoker_method */
	, TimeSpan_t1064_TimeSpan__ctor_m10431_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5459/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo TimeSpan_t1064_TimeSpan__ctor_m10432_ParameterInfos[] = 
{
	{"days", 0, 134224530, 0, &Int32_t75_0_0_0},
	{"hours", 1, 134224531, 0, &Int32_t75_0_0_0},
	{"minutes", 2, 134224532, 0, &Int32_t75_0_0_0},
	{"seconds", 3, 134224533, 0, &Int32_t75_0_0_0},
	{"milliseconds", 4, 134224534, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75_Int32_t75_Int32_t75_Int32_t75_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern const MethodInfo TimeSpan__ctor_m10432_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TimeSpan__ctor_m10432/* method */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75_Int32_t75_Int32_t75_Int32_t75_Int32_t75/* invoker_method */
	, TimeSpan_t1064_TimeSpan__ctor_m10432_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5460/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.TimeSpan::.cctor()
extern const MethodInfo TimeSpan__cctor_m10433_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&TimeSpan__cctor_m10433/* method */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* declaring_type */
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
	, 5461/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo TimeSpan_t1064_TimeSpan_CalculateTicks_m10434_ParameterInfos[] = 
{
	{"days", 0, 134224535, 0, &Int32_t75_0_0_0},
	{"hours", 1, 134224536, 0, &Int32_t75_0_0_0},
	{"minutes", 2, 134224537, 0, &Int32_t75_0_0_0},
	{"seconds", 3, 134224538, 0, &Int32_t75_0_0_0},
	{"milliseconds", 4, 134224539, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Int64_t760_Int32_t75_Int32_t75_Int32_t75_Int32_t75_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int64 System.TimeSpan::CalculateTicks(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern const MethodInfo TimeSpan_CalculateTicks_m10434_MethodInfo = 
{
	"CalculateTicks"/* name */
	, (methodPointerType)&TimeSpan_CalculateTicks_m10434/* method */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* declaring_type */
	, &Int64_t760_0_0_0/* return_type */
	, RuntimeInvoker_Int64_t760_Int32_t75_Int32_t75_Int32_t75_Int32_t75_Int32_t75/* invoker_method */
	, TimeSpan_t1064_TimeSpan_CalculateTicks_m10434_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5462/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.TimeSpan::get_Days()
extern const MethodInfo TimeSpan_get_Days_m10435_MethodInfo = 
{
	"get_Days"/* name */
	, (methodPointerType)&TimeSpan_get_Days_m10435/* method */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* declaring_type */
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
	, 5463/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.TimeSpan::get_Hours()
extern const MethodInfo TimeSpan_get_Hours_m10436_MethodInfo = 
{
	"get_Hours"/* name */
	, (methodPointerType)&TimeSpan_get_Hours_m10436/* method */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* declaring_type */
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
	, 5464/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.TimeSpan::get_Milliseconds()
extern const MethodInfo TimeSpan_get_Milliseconds_m10437_MethodInfo = 
{
	"get_Milliseconds"/* name */
	, (methodPointerType)&TimeSpan_get_Milliseconds_m10437/* method */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* declaring_type */
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
	, 5465/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.TimeSpan::get_Minutes()
extern const MethodInfo TimeSpan_get_Minutes_m10438_MethodInfo = 
{
	"get_Minutes"/* name */
	, (methodPointerType)&TimeSpan_get_Minutes_m10438/* method */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* declaring_type */
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
	, 5466/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.TimeSpan::get_Seconds()
extern const MethodInfo TimeSpan_get_Seconds_m10439_MethodInfo = 
{
	"get_Seconds"/* name */
	, (methodPointerType)&TimeSpan_get_Seconds_m10439/* method */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* declaring_type */
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
	, 5467/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int64_t760 (const MethodInfo* method, void* obj, void** args);
// System.Int64 System.TimeSpan::get_Ticks()
extern const MethodInfo TimeSpan_get_Ticks_m10440_MethodInfo = 
{
	"get_Ticks"/* name */
	, (methodPointerType)&TimeSpan_get_Ticks_m10440/* method */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* declaring_type */
	, &Int64_t760_0_0_0/* return_type */
	, RuntimeInvoker_Int64_t760/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5468/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Double_t759 (const MethodInfo* method, void* obj, void** args);
// System.Double System.TimeSpan::get_TotalDays()
extern const MethodInfo TimeSpan_get_TotalDays_m10441_MethodInfo = 
{
	"get_TotalDays"/* name */
	, (methodPointerType)&TimeSpan_get_TotalDays_m10441/* method */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* declaring_type */
	, &Double_t759_0_0_0/* return_type */
	, RuntimeInvoker_Double_t759/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5469/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Double_t759 (const MethodInfo* method, void* obj, void** args);
// System.Double System.TimeSpan::get_TotalHours()
extern const MethodInfo TimeSpan_get_TotalHours_m10442_MethodInfo = 
{
	"get_TotalHours"/* name */
	, (methodPointerType)&TimeSpan_get_TotalHours_m10442/* method */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* declaring_type */
	, &Double_t759_0_0_0/* return_type */
	, RuntimeInvoker_Double_t759/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5470/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Double_t759 (const MethodInfo* method, void* obj, void** args);
// System.Double System.TimeSpan::get_TotalMilliseconds()
extern const MethodInfo TimeSpan_get_TotalMilliseconds_m10443_MethodInfo = 
{
	"get_TotalMilliseconds"/* name */
	, (methodPointerType)&TimeSpan_get_TotalMilliseconds_m10443/* method */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* declaring_type */
	, &Double_t759_0_0_0/* return_type */
	, RuntimeInvoker_Double_t759/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5471/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Double_t759 (const MethodInfo* method, void* obj, void** args);
// System.Double System.TimeSpan::get_TotalMinutes()
extern const MethodInfo TimeSpan_get_TotalMinutes_m10444_MethodInfo = 
{
	"get_TotalMinutes"/* name */
	, (methodPointerType)&TimeSpan_get_TotalMinutes_m10444/* method */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* declaring_type */
	, &Double_t759_0_0_0/* return_type */
	, RuntimeInvoker_Double_t759/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5472/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Double_t759 (const MethodInfo* method, void* obj, void** args);
// System.Double System.TimeSpan::get_TotalSeconds()
extern const MethodInfo TimeSpan_get_TotalSeconds_m10445_MethodInfo = 
{
	"get_TotalSeconds"/* name */
	, (methodPointerType)&TimeSpan_get_TotalSeconds_m10445/* method */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* declaring_type */
	, &Double_t759_0_0_0/* return_type */
	, RuntimeInvoker_Double_t759/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5473/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType TimeSpan_t1064_0_0_0;
extern const Il2CppType TimeSpan_t1064_0_0_0;
static const ParameterInfo TimeSpan_t1064_TimeSpan_Add_m10446_ParameterInfos[] = 
{
	{"ts", 0, 134224540, 0, &TimeSpan_t1064_0_0_0},
};
extern void* RuntimeInvoker_TimeSpan_t1064_TimeSpan_t1064 (const MethodInfo* method, void* obj, void** args);
// System.TimeSpan System.TimeSpan::Add(System.TimeSpan)
extern const MethodInfo TimeSpan_Add_m10446_MethodInfo = 
{
	"Add"/* name */
	, (methodPointerType)&TimeSpan_Add_m10446/* method */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* declaring_type */
	, &TimeSpan_t1064_0_0_0/* return_type */
	, RuntimeInvoker_TimeSpan_t1064_TimeSpan_t1064/* invoker_method */
	, TimeSpan_t1064_TimeSpan_Add_m10446_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5474/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType TimeSpan_t1064_0_0_0;
extern const Il2CppType TimeSpan_t1064_0_0_0;
static const ParameterInfo TimeSpan_t1064_TimeSpan_Compare_m10447_ParameterInfos[] = 
{
	{"t1", 0, 134224541, 0, &TimeSpan_t1064_0_0_0},
	{"t2", 1, 134224542, 0, &TimeSpan_t1064_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_TimeSpan_t1064_TimeSpan_t1064 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.TimeSpan::Compare(System.TimeSpan,System.TimeSpan)
extern const MethodInfo TimeSpan_Compare_m10447_MethodInfo = 
{
	"Compare"/* name */
	, (methodPointerType)&TimeSpan_Compare_m10447/* method */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_TimeSpan_t1064_TimeSpan_t1064/* invoker_method */
	, TimeSpan_t1064_TimeSpan_Compare_m10447_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5475/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo TimeSpan_t1064_TimeSpan_CompareTo_m10448_ParameterInfos[] = 
{
	{"value", 0, 134224543, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.TimeSpan::CompareTo(System.Object)
extern const MethodInfo TimeSpan_CompareTo_m10448_MethodInfo = 
{
	"CompareTo"/* name */
	, (methodPointerType)&TimeSpan_CompareTo_m10448/* method */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Object_t/* invoker_method */
	, TimeSpan_t1064_TimeSpan_CompareTo_m10448_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5476/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType TimeSpan_t1064_0_0_0;
static const ParameterInfo TimeSpan_t1064_TimeSpan_CompareTo_m10449_ParameterInfos[] = 
{
	{"value", 0, 134224544, 0, &TimeSpan_t1064_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_TimeSpan_t1064 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.TimeSpan::CompareTo(System.TimeSpan)
extern const MethodInfo TimeSpan_CompareTo_m10449_MethodInfo = 
{
	"CompareTo"/* name */
	, (methodPointerType)&TimeSpan_CompareTo_m10449/* method */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_TimeSpan_t1064/* invoker_method */
	, TimeSpan_t1064_TimeSpan_CompareTo_m10449_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5477/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType TimeSpan_t1064_0_0_0;
static const ParameterInfo TimeSpan_t1064_TimeSpan_Equals_m10450_ParameterInfos[] = 
{
	{"obj", 0, 134224545, 0, &TimeSpan_t1064_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_TimeSpan_t1064 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.TimeSpan::Equals(System.TimeSpan)
extern const MethodInfo TimeSpan_Equals_m10450_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&TimeSpan_Equals_m10450/* method */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_TimeSpan_t1064/* invoker_method */
	, TimeSpan_t1064_TimeSpan_Equals_m10450_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5478/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_TimeSpan_t1064 (const MethodInfo* method, void* obj, void** args);
// System.TimeSpan System.TimeSpan::Duration()
extern const MethodInfo TimeSpan_Duration_m10451_MethodInfo = 
{
	"Duration"/* name */
	, (methodPointerType)&TimeSpan_Duration_m10451/* method */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* declaring_type */
	, &TimeSpan_t1064_0_0_0/* return_type */
	, RuntimeInvoker_TimeSpan_t1064/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5479/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo TimeSpan_t1064_TimeSpan_Equals_m10452_ParameterInfos[] = 
{
	{"value", 0, 134224546, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.TimeSpan::Equals(System.Object)
extern const MethodInfo TimeSpan_Equals_m10452_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&TimeSpan_Equals_m10452/* method */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Object_t/* invoker_method */
	, TimeSpan_t1064_TimeSpan_Equals_m10452_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5480/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Double_t759_0_0_0;
static const ParameterInfo TimeSpan_t1064_TimeSpan_FromMinutes_m10453_ParameterInfos[] = 
{
	{"value", 0, 134224547, 0, &Double_t759_0_0_0},
};
extern void* RuntimeInvoker_TimeSpan_t1064_Double_t759 (const MethodInfo* method, void* obj, void** args);
// System.TimeSpan System.TimeSpan::FromMinutes(System.Double)
extern const MethodInfo TimeSpan_FromMinutes_m10453_MethodInfo = 
{
	"FromMinutes"/* name */
	, (methodPointerType)&TimeSpan_FromMinutes_m10453/* method */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* declaring_type */
	, &TimeSpan_t1064_0_0_0/* return_type */
	, RuntimeInvoker_TimeSpan_t1064_Double_t759/* invoker_method */
	, TimeSpan_t1064_TimeSpan_FromMinutes_m10453_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5481/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Double_t759_0_0_0;
extern const Il2CppType Int64_t760_0_0_0;
static const ParameterInfo TimeSpan_t1064_TimeSpan_From_m10454_ParameterInfos[] = 
{
	{"value", 0, 134224548, 0, &Double_t759_0_0_0},
	{"tickMultiplicator", 1, 134224549, 0, &Int64_t760_0_0_0},
};
extern void* RuntimeInvoker_TimeSpan_t1064_Double_t759_Int64_t760 (const MethodInfo* method, void* obj, void** args);
// System.TimeSpan System.TimeSpan::From(System.Double,System.Int64)
extern const MethodInfo TimeSpan_From_m10454_MethodInfo = 
{
	"From"/* name */
	, (methodPointerType)&TimeSpan_From_m10454/* method */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* declaring_type */
	, &TimeSpan_t1064_0_0_0/* return_type */
	, RuntimeInvoker_TimeSpan_t1064_Double_t759_Int64_t760/* invoker_method */
	, TimeSpan_t1064_TimeSpan_From_m10454_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5482/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.TimeSpan::GetHashCode()
extern const MethodInfo TimeSpan_GetHashCode_m10455_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&TimeSpan_GetHashCode_m10455/* method */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* declaring_type */
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
	, 5483/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_TimeSpan_t1064 (const MethodInfo* method, void* obj, void** args);
// System.TimeSpan System.TimeSpan::Negate()
extern const MethodInfo TimeSpan_Negate_m10456_MethodInfo = 
{
	"Negate"/* name */
	, (methodPointerType)&TimeSpan_Negate_m10456/* method */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* declaring_type */
	, &TimeSpan_t1064_0_0_0/* return_type */
	, RuntimeInvoker_TimeSpan_t1064/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5484/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType TimeSpan_t1064_0_0_0;
static const ParameterInfo TimeSpan_t1064_TimeSpan_Subtract_m10457_ParameterInfos[] = 
{
	{"ts", 0, 134224550, 0, &TimeSpan_t1064_0_0_0},
};
extern void* RuntimeInvoker_TimeSpan_t1064_TimeSpan_t1064 (const MethodInfo* method, void* obj, void** args);
// System.TimeSpan System.TimeSpan::Subtract(System.TimeSpan)
extern const MethodInfo TimeSpan_Subtract_m10457_MethodInfo = 
{
	"Subtract"/* name */
	, (methodPointerType)&TimeSpan_Subtract_m10457/* method */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* declaring_type */
	, &TimeSpan_t1064_0_0_0/* return_type */
	, RuntimeInvoker_TimeSpan_t1064_TimeSpan_t1064/* invoker_method */
	, TimeSpan_t1064_TimeSpan_Subtract_m10457_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5485/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.TimeSpan::ToString()
extern const MethodInfo TimeSpan_ToString_m10458_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&TimeSpan_ToString_m10458/* method */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* declaring_type */
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
	, 5486/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType TimeSpan_t1064_0_0_0;
extern const Il2CppType TimeSpan_t1064_0_0_0;
static const ParameterInfo TimeSpan_t1064_TimeSpan_op_Addition_m10459_ParameterInfos[] = 
{
	{"t1", 0, 134224551, 0, &TimeSpan_t1064_0_0_0},
	{"t2", 1, 134224552, 0, &TimeSpan_t1064_0_0_0},
};
extern void* RuntimeInvoker_TimeSpan_t1064_TimeSpan_t1064_TimeSpan_t1064 (const MethodInfo* method, void* obj, void** args);
// System.TimeSpan System.TimeSpan::op_Addition(System.TimeSpan,System.TimeSpan)
extern const MethodInfo TimeSpan_op_Addition_m10459_MethodInfo = 
{
	"op_Addition"/* name */
	, (methodPointerType)&TimeSpan_op_Addition_m10459/* method */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* declaring_type */
	, &TimeSpan_t1064_0_0_0/* return_type */
	, RuntimeInvoker_TimeSpan_t1064_TimeSpan_t1064_TimeSpan_t1064/* invoker_method */
	, TimeSpan_t1064_TimeSpan_op_Addition_m10459_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5487/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType TimeSpan_t1064_0_0_0;
extern const Il2CppType TimeSpan_t1064_0_0_0;
static const ParameterInfo TimeSpan_t1064_TimeSpan_op_Equality_m10460_ParameterInfos[] = 
{
	{"t1", 0, 134224553, 0, &TimeSpan_t1064_0_0_0},
	{"t2", 1, 134224554, 0, &TimeSpan_t1064_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_TimeSpan_t1064_TimeSpan_t1064 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.TimeSpan::op_Equality(System.TimeSpan,System.TimeSpan)
extern const MethodInfo TimeSpan_op_Equality_m10460_MethodInfo = 
{
	"op_Equality"/* name */
	, (methodPointerType)&TimeSpan_op_Equality_m10460/* method */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_TimeSpan_t1064_TimeSpan_t1064/* invoker_method */
	, TimeSpan_t1064_TimeSpan_op_Equality_m10460_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5488/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType TimeSpan_t1064_0_0_0;
extern const Il2CppType TimeSpan_t1064_0_0_0;
static const ParameterInfo TimeSpan_t1064_TimeSpan_op_GreaterThan_m10461_ParameterInfos[] = 
{
	{"t1", 0, 134224555, 0, &TimeSpan_t1064_0_0_0},
	{"t2", 1, 134224556, 0, &TimeSpan_t1064_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_TimeSpan_t1064_TimeSpan_t1064 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.TimeSpan::op_GreaterThan(System.TimeSpan,System.TimeSpan)
extern const MethodInfo TimeSpan_op_GreaterThan_m10461_MethodInfo = 
{
	"op_GreaterThan"/* name */
	, (methodPointerType)&TimeSpan_op_GreaterThan_m10461/* method */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_TimeSpan_t1064_TimeSpan_t1064/* invoker_method */
	, TimeSpan_t1064_TimeSpan_op_GreaterThan_m10461_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5489/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType TimeSpan_t1064_0_0_0;
extern const Il2CppType TimeSpan_t1064_0_0_0;
static const ParameterInfo TimeSpan_t1064_TimeSpan_op_GreaterThanOrEqual_m10462_ParameterInfos[] = 
{
	{"t1", 0, 134224557, 0, &TimeSpan_t1064_0_0_0},
	{"t2", 1, 134224558, 0, &TimeSpan_t1064_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_TimeSpan_t1064_TimeSpan_t1064 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.TimeSpan::op_GreaterThanOrEqual(System.TimeSpan,System.TimeSpan)
extern const MethodInfo TimeSpan_op_GreaterThanOrEqual_m10462_MethodInfo = 
{
	"op_GreaterThanOrEqual"/* name */
	, (methodPointerType)&TimeSpan_op_GreaterThanOrEqual_m10462/* method */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_TimeSpan_t1064_TimeSpan_t1064/* invoker_method */
	, TimeSpan_t1064_TimeSpan_op_GreaterThanOrEqual_m10462_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5490/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType TimeSpan_t1064_0_0_0;
extern const Il2CppType TimeSpan_t1064_0_0_0;
static const ParameterInfo TimeSpan_t1064_TimeSpan_op_Inequality_m10463_ParameterInfos[] = 
{
	{"t1", 0, 134224559, 0, &TimeSpan_t1064_0_0_0},
	{"t2", 1, 134224560, 0, &TimeSpan_t1064_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_TimeSpan_t1064_TimeSpan_t1064 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.TimeSpan::op_Inequality(System.TimeSpan,System.TimeSpan)
extern const MethodInfo TimeSpan_op_Inequality_m10463_MethodInfo = 
{
	"op_Inequality"/* name */
	, (methodPointerType)&TimeSpan_op_Inequality_m10463/* method */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_TimeSpan_t1064_TimeSpan_t1064/* invoker_method */
	, TimeSpan_t1064_TimeSpan_op_Inequality_m10463_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5491/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType TimeSpan_t1064_0_0_0;
extern const Il2CppType TimeSpan_t1064_0_0_0;
static const ParameterInfo TimeSpan_t1064_TimeSpan_op_LessThan_m10464_ParameterInfos[] = 
{
	{"t1", 0, 134224561, 0, &TimeSpan_t1064_0_0_0},
	{"t2", 1, 134224562, 0, &TimeSpan_t1064_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_TimeSpan_t1064_TimeSpan_t1064 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.TimeSpan::op_LessThan(System.TimeSpan,System.TimeSpan)
extern const MethodInfo TimeSpan_op_LessThan_m10464_MethodInfo = 
{
	"op_LessThan"/* name */
	, (methodPointerType)&TimeSpan_op_LessThan_m10464/* method */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_TimeSpan_t1064_TimeSpan_t1064/* invoker_method */
	, TimeSpan_t1064_TimeSpan_op_LessThan_m10464_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5492/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType TimeSpan_t1064_0_0_0;
extern const Il2CppType TimeSpan_t1064_0_0_0;
static const ParameterInfo TimeSpan_t1064_TimeSpan_op_LessThanOrEqual_m10465_ParameterInfos[] = 
{
	{"t1", 0, 134224563, 0, &TimeSpan_t1064_0_0_0},
	{"t2", 1, 134224564, 0, &TimeSpan_t1064_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_TimeSpan_t1064_TimeSpan_t1064 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.TimeSpan::op_LessThanOrEqual(System.TimeSpan,System.TimeSpan)
extern const MethodInfo TimeSpan_op_LessThanOrEqual_m10465_MethodInfo = 
{
	"op_LessThanOrEqual"/* name */
	, (methodPointerType)&TimeSpan_op_LessThanOrEqual_m10465/* method */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_TimeSpan_t1064_TimeSpan_t1064/* invoker_method */
	, TimeSpan_t1064_TimeSpan_op_LessThanOrEqual_m10465_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5493/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType TimeSpan_t1064_0_0_0;
extern const Il2CppType TimeSpan_t1064_0_0_0;
static const ParameterInfo TimeSpan_t1064_TimeSpan_op_Subtraction_m10466_ParameterInfos[] = 
{
	{"t1", 0, 134224565, 0, &TimeSpan_t1064_0_0_0},
	{"t2", 1, 134224566, 0, &TimeSpan_t1064_0_0_0},
};
extern void* RuntimeInvoker_TimeSpan_t1064_TimeSpan_t1064_TimeSpan_t1064 (const MethodInfo* method, void* obj, void** args);
// System.TimeSpan System.TimeSpan::op_Subtraction(System.TimeSpan,System.TimeSpan)
extern const MethodInfo TimeSpan_op_Subtraction_m10466_MethodInfo = 
{
	"op_Subtraction"/* name */
	, (methodPointerType)&TimeSpan_op_Subtraction_m10466/* method */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* declaring_type */
	, &TimeSpan_t1064_0_0_0/* return_type */
	, RuntimeInvoker_TimeSpan_t1064_TimeSpan_t1064_TimeSpan_t1064/* invoker_method */
	, TimeSpan_t1064_TimeSpan_op_Subtraction_m10466_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5494/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* TimeSpan_t1064_MethodInfos[] =
{
	&TimeSpan__ctor_m10430_MethodInfo,
	&TimeSpan__ctor_m10431_MethodInfo,
	&TimeSpan__ctor_m10432_MethodInfo,
	&TimeSpan__cctor_m10433_MethodInfo,
	&TimeSpan_CalculateTicks_m10434_MethodInfo,
	&TimeSpan_get_Days_m10435_MethodInfo,
	&TimeSpan_get_Hours_m10436_MethodInfo,
	&TimeSpan_get_Milliseconds_m10437_MethodInfo,
	&TimeSpan_get_Minutes_m10438_MethodInfo,
	&TimeSpan_get_Seconds_m10439_MethodInfo,
	&TimeSpan_get_Ticks_m10440_MethodInfo,
	&TimeSpan_get_TotalDays_m10441_MethodInfo,
	&TimeSpan_get_TotalHours_m10442_MethodInfo,
	&TimeSpan_get_TotalMilliseconds_m10443_MethodInfo,
	&TimeSpan_get_TotalMinutes_m10444_MethodInfo,
	&TimeSpan_get_TotalSeconds_m10445_MethodInfo,
	&TimeSpan_Add_m10446_MethodInfo,
	&TimeSpan_Compare_m10447_MethodInfo,
	&TimeSpan_CompareTo_m10448_MethodInfo,
	&TimeSpan_CompareTo_m10449_MethodInfo,
	&TimeSpan_Equals_m10450_MethodInfo,
	&TimeSpan_Duration_m10451_MethodInfo,
	&TimeSpan_Equals_m10452_MethodInfo,
	&TimeSpan_FromMinutes_m10453_MethodInfo,
	&TimeSpan_From_m10454_MethodInfo,
	&TimeSpan_GetHashCode_m10455_MethodInfo,
	&TimeSpan_Negate_m10456_MethodInfo,
	&TimeSpan_Subtract_m10457_MethodInfo,
	&TimeSpan_ToString_m10458_MethodInfo,
	&TimeSpan_op_Addition_m10459_MethodInfo,
	&TimeSpan_op_Equality_m10460_MethodInfo,
	&TimeSpan_op_GreaterThan_m10461_MethodInfo,
	&TimeSpan_op_GreaterThanOrEqual_m10462_MethodInfo,
	&TimeSpan_op_Inequality_m10463_MethodInfo,
	&TimeSpan_op_LessThan_m10464_MethodInfo,
	&TimeSpan_op_LessThanOrEqual_m10465_MethodInfo,
	&TimeSpan_op_Subtraction_m10466_MethodInfo,
	NULL
};
extern const MethodInfo TimeSpan_get_Days_m10435_MethodInfo;
static const PropertyInfo TimeSpan_t1064____Days_PropertyInfo = 
{
	&TimeSpan_t1064_il2cpp_TypeInfo/* parent */
	, "Days"/* name */
	, &TimeSpan_get_Days_m10435_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo TimeSpan_get_Hours_m10436_MethodInfo;
static const PropertyInfo TimeSpan_t1064____Hours_PropertyInfo = 
{
	&TimeSpan_t1064_il2cpp_TypeInfo/* parent */
	, "Hours"/* name */
	, &TimeSpan_get_Hours_m10436_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo TimeSpan_get_Milliseconds_m10437_MethodInfo;
static const PropertyInfo TimeSpan_t1064____Milliseconds_PropertyInfo = 
{
	&TimeSpan_t1064_il2cpp_TypeInfo/* parent */
	, "Milliseconds"/* name */
	, &TimeSpan_get_Milliseconds_m10437_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo TimeSpan_get_Minutes_m10438_MethodInfo;
static const PropertyInfo TimeSpan_t1064____Minutes_PropertyInfo = 
{
	&TimeSpan_t1064_il2cpp_TypeInfo/* parent */
	, "Minutes"/* name */
	, &TimeSpan_get_Minutes_m10438_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo TimeSpan_get_Seconds_m10439_MethodInfo;
static const PropertyInfo TimeSpan_t1064____Seconds_PropertyInfo = 
{
	&TimeSpan_t1064_il2cpp_TypeInfo/* parent */
	, "Seconds"/* name */
	, &TimeSpan_get_Seconds_m10439_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo TimeSpan_get_Ticks_m10440_MethodInfo;
static const PropertyInfo TimeSpan_t1064____Ticks_PropertyInfo = 
{
	&TimeSpan_t1064_il2cpp_TypeInfo/* parent */
	, "Ticks"/* name */
	, &TimeSpan_get_Ticks_m10440_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo TimeSpan_get_TotalDays_m10441_MethodInfo;
static const PropertyInfo TimeSpan_t1064____TotalDays_PropertyInfo = 
{
	&TimeSpan_t1064_il2cpp_TypeInfo/* parent */
	, "TotalDays"/* name */
	, &TimeSpan_get_TotalDays_m10441_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo TimeSpan_get_TotalHours_m10442_MethodInfo;
static const PropertyInfo TimeSpan_t1064____TotalHours_PropertyInfo = 
{
	&TimeSpan_t1064_il2cpp_TypeInfo/* parent */
	, "TotalHours"/* name */
	, &TimeSpan_get_TotalHours_m10442_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo TimeSpan_get_TotalMilliseconds_m10443_MethodInfo;
static const PropertyInfo TimeSpan_t1064____TotalMilliseconds_PropertyInfo = 
{
	&TimeSpan_t1064_il2cpp_TypeInfo/* parent */
	, "TotalMilliseconds"/* name */
	, &TimeSpan_get_TotalMilliseconds_m10443_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo TimeSpan_get_TotalMinutes_m10444_MethodInfo;
static const PropertyInfo TimeSpan_t1064____TotalMinutes_PropertyInfo = 
{
	&TimeSpan_t1064_il2cpp_TypeInfo/* parent */
	, "TotalMinutes"/* name */
	, &TimeSpan_get_TotalMinutes_m10444_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo TimeSpan_get_TotalSeconds_m10445_MethodInfo;
static const PropertyInfo TimeSpan_t1064____TotalSeconds_PropertyInfo = 
{
	&TimeSpan_t1064_il2cpp_TypeInfo/* parent */
	, "TotalSeconds"/* name */
	, &TimeSpan_get_TotalSeconds_m10445_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* TimeSpan_t1064_PropertyInfos[] =
{
	&TimeSpan_t1064____Days_PropertyInfo,
	&TimeSpan_t1064____Hours_PropertyInfo,
	&TimeSpan_t1064____Milliseconds_PropertyInfo,
	&TimeSpan_t1064____Minutes_PropertyInfo,
	&TimeSpan_t1064____Seconds_PropertyInfo,
	&TimeSpan_t1064____Ticks_PropertyInfo,
	&TimeSpan_t1064____TotalDays_PropertyInfo,
	&TimeSpan_t1064____TotalHours_PropertyInfo,
	&TimeSpan_t1064____TotalMilliseconds_PropertyInfo,
	&TimeSpan_t1064____TotalMinutes_PropertyInfo,
	&TimeSpan_t1064____TotalSeconds_PropertyInfo,
	NULL
};
extern const MethodInfo TimeSpan_Equals_m10452_MethodInfo;
extern const MethodInfo TimeSpan_GetHashCode_m10455_MethodInfo;
extern const MethodInfo TimeSpan_ToString_m10458_MethodInfo;
extern const MethodInfo TimeSpan_CompareTo_m10448_MethodInfo;
extern const MethodInfo TimeSpan_CompareTo_m10449_MethodInfo;
extern const MethodInfo TimeSpan_Equals_m10450_MethodInfo;
static const Il2CppMethodReference TimeSpan_t1064_VTable[] =
{
	&TimeSpan_Equals_m10452_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&TimeSpan_GetHashCode_m10455_MethodInfo,
	&TimeSpan_ToString_m10458_MethodInfo,
	&TimeSpan_CompareTo_m10448_MethodInfo,
	&TimeSpan_CompareTo_m10449_MethodInfo,
	&TimeSpan_Equals_m10450_MethodInfo,
};
static bool TimeSpan_t1064_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType IComparable_1_t2417_0_0_0;
extern const Il2CppType IEquatable_1_t2418_0_0_0;
static const Il2CppType* TimeSpan_t1064_InterfacesTypeInfos[] = 
{
	&IComparable_t430_0_0_0,
	&IComparable_1_t2417_0_0_0,
	&IEquatable_1_t2418_0_0_0,
};
static Il2CppInterfaceOffsetPair TimeSpan_t1064_InterfacesOffsets[] = 
{
	{ &IComparable_t430_0_0_0, 4},
	{ &IComparable_1_t2417_0_0_0, 5},
	{ &IEquatable_1_t2418_0_0_0, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType TimeSpan_t1064_1_0_0;
const Il2CppTypeDefinitionMetadata TimeSpan_t1064_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, TimeSpan_t1064_InterfacesTypeInfos/* implementedInterfaces */
	, TimeSpan_t1064_InterfacesOffsets/* interfaceOffsets */
	, &ValueType_t446_0_0_0/* parent */
	, TimeSpan_t1064_VTable/* vtableMethods */
	, TimeSpan_t1064_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2496/* fieldStart */

};
TypeInfo TimeSpan_t1064_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "TimeSpan"/* name */
	, "System"/* namespaze */
	, TimeSpan_t1064_MethodInfos/* methods */
	, TimeSpan_t1064_PropertyInfos/* properties */
	, NULL/* events */
	, &TimeSpan_t1064_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 919/* custom_attributes_cache */
	, &TimeSpan_t1064_0_0_0/* byval_arg */
	, &TimeSpan_t1064_1_0_0/* this_arg */
	, &TimeSpan_t1064_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TimeSpan_t1064)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (TimeSpan_t1064)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(TimeSpan_t1064 )/* native_size */
	, sizeof(TimeSpan_t1064_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8457/* flags */
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
	, true/* has_cctor */
	, true/* is_blittable */
	, 37/* method_count */
	, 11/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.TimeZone
#include "mscorlib_System_TimeZone.h"
// Metadata Definition System.TimeZone
extern TypeInfo TimeZone_t1880_il2cpp_TypeInfo;
// System.TimeZone
#include "mscorlib_System_TimeZoneMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.TimeZone::.ctor()
extern const MethodInfo TimeZone__ctor_m10467_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TimeZone__ctor_m10467/* method */
	, &TimeZone_t1880_il2cpp_TypeInfo/* declaring_type */
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
	, 5495/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.TimeZone::.cctor()
extern const MethodInfo TimeZone__cctor_m10468_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&TimeZone__cctor_m10468/* method */
	, &TimeZone_t1880_il2cpp_TypeInfo/* declaring_type */
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
	, 5496/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType TimeZone_t1880_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.TimeZone System.TimeZone::get_CurrentTimeZone()
extern const MethodInfo TimeZone_get_CurrentTimeZone_m10469_MethodInfo = 
{
	"get_CurrentTimeZone"/* name */
	, (methodPointerType)&TimeZone_get_CurrentTimeZone_m10469/* method */
	, &TimeZone_t1880_il2cpp_TypeInfo/* declaring_type */
	, &TimeZone_t1880_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5497/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo TimeZone_t1880_TimeZone_GetDaylightChanges_m11208_ParameterInfos[] = 
{
	{"year", 0, 134224567, 0, &Int32_t75_0_0_0},
};
extern const Il2CppType DaylightTime_t1501_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Globalization.DaylightTime System.TimeZone::GetDaylightChanges(System.Int32)
extern const MethodInfo TimeZone_GetDaylightChanges_m11208_MethodInfo = 
{
	"GetDaylightChanges"/* name */
	, NULL/* method */
	, &TimeZone_t1880_il2cpp_TypeInfo/* declaring_type */
	, &DaylightTime_t1501_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t75/* invoker_method */
	, TimeZone_t1880_TimeZone_GetDaylightChanges_m11208_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5498/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType DateTime_t77_0_0_0;
extern const Il2CppType DateTime_t77_0_0_0;
static const ParameterInfo TimeZone_t1880_TimeZone_GetUtcOffset_m11209_ParameterInfos[] = 
{
	{"time", 0, 134224568, 0, &DateTime_t77_0_0_0},
};
extern void* RuntimeInvoker_TimeSpan_t1064_DateTime_t77 (const MethodInfo* method, void* obj, void** args);
// System.TimeSpan System.TimeZone::GetUtcOffset(System.DateTime)
extern const MethodInfo TimeZone_GetUtcOffset_m11209_MethodInfo = 
{
	"GetUtcOffset"/* name */
	, NULL/* method */
	, &TimeZone_t1880_il2cpp_TypeInfo/* declaring_type */
	, &TimeSpan_t1064_0_0_0/* return_type */
	, RuntimeInvoker_TimeSpan_t1064_DateTime_t77/* invoker_method */
	, TimeZone_t1880_TimeZone_GetUtcOffset_m11209_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5499/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType DateTime_t77_0_0_0;
static const ParameterInfo TimeZone_t1880_TimeZone_IsDaylightSavingTime_m10470_ParameterInfos[] = 
{
	{"time", 0, 134224569, 0, &DateTime_t77_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_DateTime_t77 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime)
extern const MethodInfo TimeZone_IsDaylightSavingTime_m10470_MethodInfo = 
{
	"IsDaylightSavingTime"/* name */
	, (methodPointerType)&TimeZone_IsDaylightSavingTime_m10470/* method */
	, &TimeZone_t1880_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_DateTime_t77/* invoker_method */
	, TimeZone_t1880_TimeZone_IsDaylightSavingTime_m10470_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5500/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType DateTime_t77_0_0_0;
extern const Il2CppType DaylightTime_t1501_0_0_0;
static const ParameterInfo TimeZone_t1880_TimeZone_IsDaylightSavingTime_m10471_ParameterInfos[] = 
{
	{"time", 0, 134224570, 0, &DateTime_t77_0_0_0},
	{"daylightTimes", 1, 134224571, 0, &DaylightTime_t1501_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_DateTime_t77_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime,System.Globalization.DaylightTime)
extern const MethodInfo TimeZone_IsDaylightSavingTime_m10471_MethodInfo = 
{
	"IsDaylightSavingTime"/* name */
	, (methodPointerType)&TimeZone_IsDaylightSavingTime_m10471/* method */
	, &TimeZone_t1880_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_DateTime_t77_Object_t/* invoker_method */
	, TimeZone_t1880_TimeZone_IsDaylightSavingTime_m10471_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5501/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType DateTime_t77_0_0_0;
static const ParameterInfo TimeZone_t1880_TimeZone_ToLocalTime_m10472_ParameterInfos[] = 
{
	{"time", 0, 134224572, 0, &DateTime_t77_0_0_0},
};
extern void* RuntimeInvoker_DateTime_t77_DateTime_t77 (const MethodInfo* method, void* obj, void** args);
// System.DateTime System.TimeZone::ToLocalTime(System.DateTime)
extern const MethodInfo TimeZone_ToLocalTime_m10472_MethodInfo = 
{
	"ToLocalTime"/* name */
	, (methodPointerType)&TimeZone_ToLocalTime_m10472/* method */
	, &TimeZone_t1880_il2cpp_TypeInfo/* declaring_type */
	, &DateTime_t77_0_0_0/* return_type */
	, RuntimeInvoker_DateTime_t77_DateTime_t77/* invoker_method */
	, TimeZone_t1880_TimeZone_ToLocalTime_m10472_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5502/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType DateTime_t77_0_0_0;
static const ParameterInfo TimeZone_t1880_TimeZone_ToUniversalTime_m10473_ParameterInfos[] = 
{
	{"time", 0, 134224573, 0, &DateTime_t77_0_0_0},
};
extern void* RuntimeInvoker_DateTime_t77_DateTime_t77 (const MethodInfo* method, void* obj, void** args);
// System.DateTime System.TimeZone::ToUniversalTime(System.DateTime)
extern const MethodInfo TimeZone_ToUniversalTime_m10473_MethodInfo = 
{
	"ToUniversalTime"/* name */
	, (methodPointerType)&TimeZone_ToUniversalTime_m10473/* method */
	, &TimeZone_t1880_il2cpp_TypeInfo/* declaring_type */
	, &DateTime_t77_0_0_0/* return_type */
	, RuntimeInvoker_DateTime_t77_DateTime_t77/* invoker_method */
	, TimeZone_t1880_TimeZone_ToUniversalTime_m10473_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5503/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType DateTime_t77_0_0_0;
static const ParameterInfo TimeZone_t1880_TimeZone_GetLocalTimeDiff_m10474_ParameterInfos[] = 
{
	{"time", 0, 134224574, 0, &DateTime_t77_0_0_0},
};
extern void* RuntimeInvoker_TimeSpan_t1064_DateTime_t77 (const MethodInfo* method, void* obj, void** args);
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime)
extern const MethodInfo TimeZone_GetLocalTimeDiff_m10474_MethodInfo = 
{
	"GetLocalTimeDiff"/* name */
	, (methodPointerType)&TimeZone_GetLocalTimeDiff_m10474/* method */
	, &TimeZone_t1880_il2cpp_TypeInfo/* declaring_type */
	, &TimeSpan_t1064_0_0_0/* return_type */
	, RuntimeInvoker_TimeSpan_t1064_DateTime_t77/* invoker_method */
	, TimeZone_t1880_TimeZone_GetLocalTimeDiff_m10474_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5504/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType DateTime_t77_0_0_0;
extern const Il2CppType TimeSpan_t1064_0_0_0;
static const ParameterInfo TimeZone_t1880_TimeZone_GetLocalTimeDiff_m10475_ParameterInfos[] = 
{
	{"time", 0, 134224575, 0, &DateTime_t77_0_0_0},
	{"utc_offset", 1, 134224576, 0, &TimeSpan_t1064_0_0_0},
};
extern void* RuntimeInvoker_TimeSpan_t1064_DateTime_t77_TimeSpan_t1064 (const MethodInfo* method, void* obj, void** args);
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime,System.TimeSpan)
extern const MethodInfo TimeZone_GetLocalTimeDiff_m10475_MethodInfo = 
{
	"GetLocalTimeDiff"/* name */
	, (methodPointerType)&TimeZone_GetLocalTimeDiff_m10475/* method */
	, &TimeZone_t1880_il2cpp_TypeInfo/* declaring_type */
	, &TimeSpan_t1064_0_0_0/* return_type */
	, RuntimeInvoker_TimeSpan_t1064_DateTime_t77_TimeSpan_t1064/* invoker_method */
	, TimeZone_t1880_TimeZone_GetLocalTimeDiff_m10475_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5505/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* TimeZone_t1880_MethodInfos[] =
{
	&TimeZone__ctor_m10467_MethodInfo,
	&TimeZone__cctor_m10468_MethodInfo,
	&TimeZone_get_CurrentTimeZone_m10469_MethodInfo,
	&TimeZone_GetDaylightChanges_m11208_MethodInfo,
	&TimeZone_GetUtcOffset_m11209_MethodInfo,
	&TimeZone_IsDaylightSavingTime_m10470_MethodInfo,
	&TimeZone_IsDaylightSavingTime_m10471_MethodInfo,
	&TimeZone_ToLocalTime_m10472_MethodInfo,
	&TimeZone_ToUniversalTime_m10473_MethodInfo,
	&TimeZone_GetLocalTimeDiff_m10474_MethodInfo,
	&TimeZone_GetLocalTimeDiff_m10475_MethodInfo,
	NULL
};
extern const MethodInfo TimeZone_get_CurrentTimeZone_m10469_MethodInfo;
static const PropertyInfo TimeZone_t1880____CurrentTimeZone_PropertyInfo = 
{
	&TimeZone_t1880_il2cpp_TypeInfo/* parent */
	, "CurrentTimeZone"/* name */
	, &TimeZone_get_CurrentTimeZone_m10469_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* TimeZone_t1880_PropertyInfos[] =
{
	&TimeZone_t1880____CurrentTimeZone_PropertyInfo,
	NULL
};
extern const MethodInfo TimeZone_IsDaylightSavingTime_m10470_MethodInfo;
extern const MethodInfo TimeZone_ToLocalTime_m10472_MethodInfo;
extern const MethodInfo TimeZone_ToUniversalTime_m10473_MethodInfo;
static const Il2CppMethodReference TimeZone_t1880_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	NULL,
	NULL,
	&TimeZone_IsDaylightSavingTime_m10470_MethodInfo,
	&TimeZone_ToLocalTime_m10472_MethodInfo,
	&TimeZone_ToUniversalTime_m10473_MethodInfo,
};
static bool TimeZone_t1880_VTableIsGenericMethod[] =
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
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType TimeZone_t1880_1_0_0;
struct TimeZone_t1880;
const Il2CppTypeDefinitionMetadata TimeZone_t1880_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, TimeZone_t1880_VTable/* vtableMethods */
	, TimeZone_t1880_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2500/* fieldStart */

};
TypeInfo TimeZone_t1880_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "TimeZone"/* name */
	, "System"/* namespaze */
	, TimeZone_t1880_MethodInfos/* methods */
	, TimeZone_t1880_PropertyInfos/* properties */
	, NULL/* events */
	, &TimeZone_t1880_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 920/* custom_attributes_cache */
	, &TimeZone_t1880_0_0_0/* byval_arg */
	, &TimeZone_t1880_1_0_0/* this_arg */
	, &TimeZone_t1880_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TimeZone_t1880)/* instance_size */
	, sizeof (TimeZone_t1880)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(TimeZone_t1880_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056897/* flags */
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
	, 11/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.CurrentSystemTimeZone
#include "mscorlib_System_CurrentSystemTimeZone.h"
// Metadata Definition System.CurrentSystemTimeZone
extern TypeInfo CurrentSystemTimeZone_t1881_il2cpp_TypeInfo;
// System.CurrentSystemTimeZone
#include "mscorlib_System_CurrentSystemTimeZoneMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.CurrentSystemTimeZone::.ctor()
extern const MethodInfo CurrentSystemTimeZone__ctor_m10476_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CurrentSystemTimeZone__ctor_m10476/* method */
	, &CurrentSystemTimeZone_t1881_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5506/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int64_t760_0_0_0;
static const ParameterInfo CurrentSystemTimeZone_t1881_CurrentSystemTimeZone__ctor_m10477_ParameterInfos[] = 
{
	{"lnow", 0, 134224577, 0, &Int64_t760_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int64_t760 (const MethodInfo* method, void* obj, void** args);
// System.Void System.CurrentSystemTimeZone::.ctor(System.Int64)
extern const MethodInfo CurrentSystemTimeZone__ctor_m10477_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CurrentSystemTimeZone__ctor_m10477/* method */
	, &CurrentSystemTimeZone_t1881_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int64_t760/* invoker_method */
	, CurrentSystemTimeZone_t1881_CurrentSystemTimeZone__ctor_m10477_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5507/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo CurrentSystemTimeZone_t1881_CurrentSystemTimeZone_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m10478_ParameterInfos[] = 
{
	{"sender", 0, 134224578, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.CurrentSystemTimeZone::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern const MethodInfo CurrentSystemTimeZone_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m10478_MethodInfo = 
{
	"System.Runtime.Serialization.IDeserializationCallback.OnDeserialization"/* name */
	, (methodPointerType)&CurrentSystemTimeZone_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m10478/* method */
	, &CurrentSystemTimeZone_t1881_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, CurrentSystemTimeZone_t1881_CurrentSystemTimeZone_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m10478_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5508/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int64U5BU5D_t1915_1_0_2;
extern const Il2CppType Int64U5BU5D_t1915_1_0_0;
extern const Il2CppType StringU5BU5D_t48_1_0_2;
extern const Il2CppType StringU5BU5D_t48_1_0_0;
static const ParameterInfo CurrentSystemTimeZone_t1881_CurrentSystemTimeZone_GetTimeZoneData_m10479_ParameterInfos[] = 
{
	{"year", 0, 134224579, 0, &Int32_t75_0_0_0},
	{"data", 1, 134224580, 0, &Int64U5BU5D_t1915_1_0_2},
	{"names", 2, 134224581, 0, &StringU5BU5D_t48_1_0_2},
};
extern void* RuntimeInvoker_Boolean_t111_Int32_t75_Int64U5BU5DU26_t2419_StringU5BU5DU26_t2420 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.CurrentSystemTimeZone::GetTimeZoneData(System.Int32,System.Int64[]&,System.String[]&)
extern const MethodInfo CurrentSystemTimeZone_GetTimeZoneData_m10479_MethodInfo = 
{
	"GetTimeZoneData"/* name */
	, (methodPointerType)&CurrentSystemTimeZone_GetTimeZoneData_m10479/* method */
	, &CurrentSystemTimeZone_t1881_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Int32_t75_Int64U5BU5DU26_t2419_StringU5BU5DU26_t2420/* invoker_method */
	, CurrentSystemTimeZone_t1881_CurrentSystemTimeZone_GetTimeZoneData_m10479_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5509/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo CurrentSystemTimeZone_t1881_CurrentSystemTimeZone_GetDaylightChanges_m10480_ParameterInfos[] = 
{
	{"year", 0, 134224582, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightChanges(System.Int32)
extern const MethodInfo CurrentSystemTimeZone_GetDaylightChanges_m10480_MethodInfo = 
{
	"GetDaylightChanges"/* name */
	, (methodPointerType)&CurrentSystemTimeZone_GetDaylightChanges_m10480/* method */
	, &CurrentSystemTimeZone_t1881_il2cpp_TypeInfo/* declaring_type */
	, &DaylightTime_t1501_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t75/* invoker_method */
	, CurrentSystemTimeZone_t1881_CurrentSystemTimeZone_GetDaylightChanges_m10480_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5510/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType DateTime_t77_0_0_0;
static const ParameterInfo CurrentSystemTimeZone_t1881_CurrentSystemTimeZone_GetUtcOffset_m10481_ParameterInfos[] = 
{
	{"time", 0, 134224583, 0, &DateTime_t77_0_0_0},
};
extern void* RuntimeInvoker_TimeSpan_t1064_DateTime_t77 (const MethodInfo* method, void* obj, void** args);
// System.TimeSpan System.CurrentSystemTimeZone::GetUtcOffset(System.DateTime)
extern const MethodInfo CurrentSystemTimeZone_GetUtcOffset_m10481_MethodInfo = 
{
	"GetUtcOffset"/* name */
	, (methodPointerType)&CurrentSystemTimeZone_GetUtcOffset_m10481/* method */
	, &CurrentSystemTimeZone_t1881_il2cpp_TypeInfo/* declaring_type */
	, &TimeSpan_t1064_0_0_0/* return_type */
	, RuntimeInvoker_TimeSpan_t1064_DateTime_t77/* invoker_method */
	, CurrentSystemTimeZone_t1881_CurrentSystemTimeZone_GetUtcOffset_m10481_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5511/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType DaylightTime_t1501_0_0_0;
static const ParameterInfo CurrentSystemTimeZone_t1881_CurrentSystemTimeZone_OnDeserialization_m10482_ParameterInfos[] = 
{
	{"dlt", 0, 134224584, 0, &DaylightTime_t1501_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.CurrentSystemTimeZone::OnDeserialization(System.Globalization.DaylightTime)
extern const MethodInfo CurrentSystemTimeZone_OnDeserialization_m10482_MethodInfo = 
{
	"OnDeserialization"/* name */
	, (methodPointerType)&CurrentSystemTimeZone_OnDeserialization_m10482/* method */
	, &CurrentSystemTimeZone_t1881_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, CurrentSystemTimeZone_t1881_CurrentSystemTimeZone_OnDeserialization_m10482_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5512/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int64U5BU5D_t1915_0_0_0;
extern const Il2CppType Int64U5BU5D_t1915_0_0_0;
static const ParameterInfo CurrentSystemTimeZone_t1881_CurrentSystemTimeZone_GetDaylightTimeFromData_m10483_ParameterInfos[] = 
{
	{"data", 0, 134224585, 0, &Int64U5BU5D_t1915_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightTimeFromData(System.Int64[])
extern const MethodInfo CurrentSystemTimeZone_GetDaylightTimeFromData_m10483_MethodInfo = 
{
	"GetDaylightTimeFromData"/* name */
	, (methodPointerType)&CurrentSystemTimeZone_GetDaylightTimeFromData_m10483/* method */
	, &CurrentSystemTimeZone_t1881_il2cpp_TypeInfo/* declaring_type */
	, &DaylightTime_t1501_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, CurrentSystemTimeZone_t1881_CurrentSystemTimeZone_GetDaylightTimeFromData_m10483_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5513/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* CurrentSystemTimeZone_t1881_MethodInfos[] =
{
	&CurrentSystemTimeZone__ctor_m10476_MethodInfo,
	&CurrentSystemTimeZone__ctor_m10477_MethodInfo,
	&CurrentSystemTimeZone_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m10478_MethodInfo,
	&CurrentSystemTimeZone_GetTimeZoneData_m10479_MethodInfo,
	&CurrentSystemTimeZone_GetDaylightChanges_m10480_MethodInfo,
	&CurrentSystemTimeZone_GetUtcOffset_m10481_MethodInfo,
	&CurrentSystemTimeZone_OnDeserialization_m10482_MethodInfo,
	&CurrentSystemTimeZone_GetDaylightTimeFromData_m10483_MethodInfo,
	NULL
};
extern const MethodInfo CurrentSystemTimeZone_GetDaylightChanges_m10480_MethodInfo;
extern const MethodInfo CurrentSystemTimeZone_GetUtcOffset_m10481_MethodInfo;
extern const MethodInfo CurrentSystemTimeZone_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m10478_MethodInfo;
static const Il2CppMethodReference CurrentSystemTimeZone_t1881_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	&CurrentSystemTimeZone_GetDaylightChanges_m10480_MethodInfo,
	&CurrentSystemTimeZone_GetUtcOffset_m10481_MethodInfo,
	&TimeZone_IsDaylightSavingTime_m10470_MethodInfo,
	&TimeZone_ToLocalTime_m10472_MethodInfo,
	&TimeZone_ToUniversalTime_m10473_MethodInfo,
	&CurrentSystemTimeZone_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m10478_MethodInfo,
};
static bool CurrentSystemTimeZone_t1881_VTableIsGenericMethod[] =
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
};
extern const Il2CppType IDeserializationCallback_t970_0_0_0;
static const Il2CppType* CurrentSystemTimeZone_t1881_InterfacesTypeInfos[] = 
{
	&IDeserializationCallback_t970_0_0_0,
};
static Il2CppInterfaceOffsetPair CurrentSystemTimeZone_t1881_InterfacesOffsets[] = 
{
	{ &IDeserializationCallback_t970_0_0_0, 9},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType CurrentSystemTimeZone_t1881_0_0_0;
extern const Il2CppType CurrentSystemTimeZone_t1881_1_0_0;
struct CurrentSystemTimeZone_t1881;
const Il2CppTypeDefinitionMetadata CurrentSystemTimeZone_t1881_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, CurrentSystemTimeZone_t1881_InterfacesTypeInfos/* implementedInterfaces */
	, CurrentSystemTimeZone_t1881_InterfacesOffsets/* interfaceOffsets */
	, &TimeZone_t1880_0_0_0/* parent */
	, CurrentSystemTimeZone_t1881_VTable/* vtableMethods */
	, CurrentSystemTimeZone_t1881_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2501/* fieldStart */

};
TypeInfo CurrentSystemTimeZone_t1881_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "CurrentSystemTimeZone"/* name */
	, "System"/* namespaze */
	, CurrentSystemTimeZone_t1881_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &CurrentSystemTimeZone_t1881_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &CurrentSystemTimeZone_t1881_0_0_0/* byval_arg */
	, &CurrentSystemTimeZone_t1881_1_0_0/* this_arg */
	, &CurrentSystemTimeZone_t1881_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CurrentSystemTimeZone_t1881)/* instance_size */
	, sizeof (CurrentSystemTimeZone_t1881)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(CurrentSystemTimeZone_t1881_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056768/* flags */
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
	, 8/* method_count */
	, 0/* property_count */
	, 8/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.TypeCode
#include "mscorlib_System_TypeCode.h"
// Metadata Definition System.TypeCode
extern TypeInfo TypeCode_t1882_il2cpp_TypeInfo;
// System.TypeCode
#include "mscorlib_System_TypeCodeMethodDeclarations.h"
static const MethodInfo* TypeCode_t1882_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference TypeCode_t1882_VTable[] =
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
static bool TypeCode_t1882_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair TypeCode_t1882_InterfacesOffsets[] = 
{
	{ &IFormattable_t428_0_0_0, 4},
	{ &IConvertible_t429_0_0_0, 5},
	{ &IComparable_t430_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType TypeCode_t1882_0_0_0;
extern const Il2CppType TypeCode_t1882_1_0_0;
const Il2CppTypeDefinitionMetadata TypeCode_t1882_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, TypeCode_t1882_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t431_0_0_0/* parent */
	, TypeCode_t1882_VTable/* vtableMethods */
	, TypeCode_t1882_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2509/* fieldStart */

};
TypeInfo TypeCode_t1882_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "TypeCode"/* name */
	, "System"/* namespaze */
	, TypeCode_t1882_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Int32_t75_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 921/* custom_attributes_cache */
	, &TypeCode_t1882_0_0_0/* byval_arg */
	, &TypeCode_t1882_1_0_0/* this_arg */
	, &TypeCode_t1882_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TypeCode_t1882)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (TypeCode_t1882)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8449/* flags */
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
	, 19/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.TypeInitializationException
#include "mscorlib_System_TypeInitializationException.h"
// Metadata Definition System.TypeInitializationException
extern TypeInfo TypeInitializationException_t1883_il2cpp_TypeInfo;
// System.TypeInitializationException
#include "mscorlib_System_TypeInitializationExceptionMethodDeclarations.h"
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo TypeInitializationException_t1883_TypeInitializationException__ctor_m10484_ParameterInfos[] = 
{
	{"info", 0, 134224586, 0, &SerializationInfo_t732_0_0_0},
	{"context", 1, 134224587, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.TypeInitializationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo TypeInitializationException__ctor_m10484_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TypeInitializationException__ctor_m10484/* method */
	, &TypeInitializationException_t1883_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, TypeInitializationException_t1883_TypeInitializationException__ctor_m10484_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5514/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo TypeInitializationException_t1883_TypeInitializationException_GetObjectData_m10485_ParameterInfos[] = 
{
	{"info", 0, 134224588, 0, &SerializationInfo_t732_0_0_0},
	{"context", 1, 134224589, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.TypeInitializationException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo TypeInitializationException_GetObjectData_m10485_MethodInfo = 
{
	"GetObjectData"/* name */
	, (methodPointerType)&TypeInitializationException_GetObjectData_m10485/* method */
	, &TypeInitializationException_t1883_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, TypeInitializationException_t1883_TypeInitializationException_GetObjectData_m10485_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5515/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* TypeInitializationException_t1883_MethodInfos[] =
{
	&TypeInitializationException__ctor_m10484_MethodInfo,
	&TypeInitializationException_GetObjectData_m10485_MethodInfo,
	NULL
};
extern const MethodInfo TypeInitializationException_GetObjectData_m10485_MethodInfo;
static const Il2CppMethodReference TypeInitializationException_t1883_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Exception_ToString_m3797_MethodInfo,
	&TypeInitializationException_GetObjectData_m10485_MethodInfo,
	&Exception_get_InnerException_m3799_MethodInfo,
	&Exception_get_Message_m3800_MethodInfo,
	&Exception_get_Source_m3801_MethodInfo,
	&Exception_get_StackTrace_m3802_MethodInfo,
	&TypeInitializationException_GetObjectData_m10485_MethodInfo,
	&Exception_GetType_m3803_MethodInfo,
};
static bool TypeInitializationException_t1883_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair TypeInitializationException_t1883_InterfacesOffsets[] = 
{
	{ &ISerializable_t435_0_0_0, 4},
	{ &_Exception_t832_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType TypeInitializationException_t1883_0_0_0;
extern const Il2CppType TypeInitializationException_t1883_1_0_0;
struct TypeInitializationException_t1883;
const Il2CppTypeDefinitionMetadata TypeInitializationException_t1883_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, TypeInitializationException_t1883_InterfacesOffsets/* interfaceOffsets */
	, &SystemException_t1194_0_0_0/* parent */
	, TypeInitializationException_t1883_VTable/* vtableMethods */
	, TypeInitializationException_t1883_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2528/* fieldStart */

};
TypeInfo TypeInitializationException_t1883_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "TypeInitializationException"/* name */
	, "System"/* namespaze */
	, TypeInitializationException_t1883_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &TypeInitializationException_t1883_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 922/* custom_attributes_cache */
	, &TypeInitializationException_t1883_0_0_0/* byval_arg */
	, &TypeInitializationException_t1883_1_0_0/* this_arg */
	, &TypeInitializationException_t1883_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TypeInitializationException_t1883)/* instance_size */
	, sizeof (TypeInitializationException_t1883)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057025/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.TypeLoadException
#include "mscorlib_System_TypeLoadException.h"
// Metadata Definition System.TypeLoadException
extern TypeInfo TypeLoadException_t1839_il2cpp_TypeInfo;
// System.TypeLoadException
#include "mscorlib_System_TypeLoadExceptionMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.TypeLoadException::.ctor()
extern const MethodInfo TypeLoadException__ctor_m10486_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TypeLoadException__ctor_m10486/* method */
	, &TypeLoadException_t1839_il2cpp_TypeInfo/* declaring_type */
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
	, 5516/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo TypeLoadException_t1839_TypeLoadException__ctor_m10487_ParameterInfos[] = 
{
	{"message", 0, 134224590, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.TypeLoadException::.ctor(System.String)
extern const MethodInfo TypeLoadException__ctor_m10487_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TypeLoadException__ctor_m10487/* method */
	, &TypeLoadException_t1839_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, TypeLoadException_t1839_TypeLoadException__ctor_m10487_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5517/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo TypeLoadException_t1839_TypeLoadException__ctor_m10488_ParameterInfos[] = 
{
	{"info", 0, 134224591, 0, &SerializationInfo_t732_0_0_0},
	{"context", 1, 134224592, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.TypeLoadException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo TypeLoadException__ctor_m10488_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TypeLoadException__ctor_m10488/* method */
	, &TypeLoadException_t1839_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, TypeLoadException_t1839_TypeLoadException__ctor_m10488_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5518/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.TypeLoadException::get_Message()
extern const MethodInfo TypeLoadException_get_Message_m10489_MethodInfo = 
{
	"get_Message"/* name */
	, (methodPointerType)&TypeLoadException_get_Message_m10489/* method */
	, &TypeLoadException_t1839_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2246/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5519/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo TypeLoadException_t1839_TypeLoadException_GetObjectData_m10490_ParameterInfos[] = 
{
	{"info", 0, 134224593, 0, &SerializationInfo_t732_0_0_0},
	{"context", 1, 134224594, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.TypeLoadException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo TypeLoadException_GetObjectData_m10490_MethodInfo = 
{
	"GetObjectData"/* name */
	, (methodPointerType)&TypeLoadException_GetObjectData_m10490/* method */
	, &TypeLoadException_t1839_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, TypeLoadException_t1839_TypeLoadException_GetObjectData_m10490_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5520/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* TypeLoadException_t1839_MethodInfos[] =
{
	&TypeLoadException__ctor_m10486_MethodInfo,
	&TypeLoadException__ctor_m10487_MethodInfo,
	&TypeLoadException__ctor_m10488_MethodInfo,
	&TypeLoadException_get_Message_m10489_MethodInfo,
	&TypeLoadException_GetObjectData_m10490_MethodInfo,
	NULL
};
extern const MethodInfo TypeLoadException_get_Message_m10489_MethodInfo;
static const PropertyInfo TypeLoadException_t1839____Message_PropertyInfo = 
{
	&TypeLoadException_t1839_il2cpp_TypeInfo/* parent */
	, "Message"/* name */
	, &TypeLoadException_get_Message_m10489_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* TypeLoadException_t1839_PropertyInfos[] =
{
	&TypeLoadException_t1839____Message_PropertyInfo,
	NULL
};
extern const MethodInfo TypeLoadException_GetObjectData_m10490_MethodInfo;
static const Il2CppMethodReference TypeLoadException_t1839_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Exception_ToString_m3797_MethodInfo,
	&TypeLoadException_GetObjectData_m10490_MethodInfo,
	&Exception_get_InnerException_m3799_MethodInfo,
	&TypeLoadException_get_Message_m10489_MethodInfo,
	&Exception_get_Source_m3801_MethodInfo,
	&Exception_get_StackTrace_m3802_MethodInfo,
	&TypeLoadException_GetObjectData_m10490_MethodInfo,
	&Exception_GetType_m3803_MethodInfo,
};
static bool TypeLoadException_t1839_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair TypeLoadException_t1839_InterfacesOffsets[] = 
{
	{ &ISerializable_t435_0_0_0, 4},
	{ &_Exception_t832_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType TypeLoadException_t1839_0_0_0;
extern const Il2CppType TypeLoadException_t1839_1_0_0;
struct TypeLoadException_t1839;
const Il2CppTypeDefinitionMetadata TypeLoadException_t1839_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, TypeLoadException_t1839_InterfacesOffsets/* interfaceOffsets */
	, &SystemException_t1194_0_0_0/* parent */
	, TypeLoadException_t1839_VTable/* vtableMethods */
	, TypeLoadException_t1839_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2529/* fieldStart */

};
TypeInfo TypeLoadException_t1839_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "TypeLoadException"/* name */
	, "System"/* namespaze */
	, TypeLoadException_t1839_MethodInfos/* methods */
	, TypeLoadException_t1839_PropertyInfos/* properties */
	, NULL/* events */
	, &TypeLoadException_t1839_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 923/* custom_attributes_cache */
	, &TypeLoadException_t1839_0_0_0/* byval_arg */
	, &TypeLoadException_t1839_1_0_0/* this_arg */
	, &TypeLoadException_t1839_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TypeLoadException_t1839)/* instance_size */
	, sizeof (TypeLoadException_t1839)/* actualSize */
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
	, 5/* method_count */
	, 1/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.UnauthorizedAccessException
#include "mscorlib_System_UnauthorizedAccessException.h"
// Metadata Definition System.UnauthorizedAccessException
extern TypeInfo UnauthorizedAccessException_t1884_il2cpp_TypeInfo;
// System.UnauthorizedAccessException
#include "mscorlib_System_UnauthorizedAccessExceptionMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.UnauthorizedAccessException::.ctor()
extern const MethodInfo UnauthorizedAccessException__ctor_m10491_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnauthorizedAccessException__ctor_m10491/* method */
	, &UnauthorizedAccessException_t1884_il2cpp_TypeInfo/* declaring_type */
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
	, 5521/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo UnauthorizedAccessException_t1884_UnauthorizedAccessException__ctor_m10492_ParameterInfos[] = 
{
	{"message", 0, 134224595, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.UnauthorizedAccessException::.ctor(System.String)
extern const MethodInfo UnauthorizedAccessException__ctor_m10492_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnauthorizedAccessException__ctor_m10492/* method */
	, &UnauthorizedAccessException_t1884_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, UnauthorizedAccessException_t1884_UnauthorizedAccessException__ctor_m10492_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5522/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo UnauthorizedAccessException_t1884_UnauthorizedAccessException__ctor_m10493_ParameterInfos[] = 
{
	{"info", 0, 134224596, 0, &SerializationInfo_t732_0_0_0},
	{"context", 1, 134224597, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.UnauthorizedAccessException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo UnauthorizedAccessException__ctor_m10493_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnauthorizedAccessException__ctor_m10493/* method */
	, &UnauthorizedAccessException_t1884_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, UnauthorizedAccessException_t1884_UnauthorizedAccessException__ctor_m10493_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5523/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* UnauthorizedAccessException_t1884_MethodInfos[] =
{
	&UnauthorizedAccessException__ctor_m10491_MethodInfo,
	&UnauthorizedAccessException__ctor_m10492_MethodInfo,
	&UnauthorizedAccessException__ctor_m10493_MethodInfo,
	NULL
};
static const Il2CppMethodReference UnauthorizedAccessException_t1884_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Exception_ToString_m3797_MethodInfo,
	&Exception_GetObjectData_m3798_MethodInfo,
	&Exception_get_InnerException_m3799_MethodInfo,
	&Exception_get_Message_m3800_MethodInfo,
	&Exception_get_Source_m3801_MethodInfo,
	&Exception_get_StackTrace_m3802_MethodInfo,
	&Exception_GetObjectData_m3798_MethodInfo,
	&Exception_GetType_m3803_MethodInfo,
};
static bool UnauthorizedAccessException_t1884_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair UnauthorizedAccessException_t1884_InterfacesOffsets[] = 
{
	{ &ISerializable_t435_0_0_0, 4},
	{ &_Exception_t832_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType UnauthorizedAccessException_t1884_0_0_0;
extern const Il2CppType UnauthorizedAccessException_t1884_1_0_0;
struct UnauthorizedAccessException_t1884;
const Il2CppTypeDefinitionMetadata UnauthorizedAccessException_t1884_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, UnauthorizedAccessException_t1884_InterfacesOffsets/* interfaceOffsets */
	, &SystemException_t1194_0_0_0/* parent */
	, UnauthorizedAccessException_t1884_VTable/* vtableMethods */
	, UnauthorizedAccessException_t1884_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo UnauthorizedAccessException_t1884_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnauthorizedAccessException"/* name */
	, "System"/* namespaze */
	, UnauthorizedAccessException_t1884_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &UnauthorizedAccessException_t1884_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 924/* custom_attributes_cache */
	, &UnauthorizedAccessException_t1884_0_0_0/* byval_arg */
	, &UnauthorizedAccessException_t1884_1_0_0/* this_arg */
	, &UnauthorizedAccessException_t1884_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnauthorizedAccessException_t1884)/* instance_size */
	, sizeof (UnauthorizedAccessException_t1884)/* actualSize */
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
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.UnhandledExceptionEventArgs
#include "mscorlib_System_UnhandledExceptionEventArgs.h"
// Metadata Definition System.UnhandledExceptionEventArgs
extern TypeInfo UnhandledExceptionEventArgs_t1885_il2cpp_TypeInfo;
// System.UnhandledExceptionEventArgs
#include "mscorlib_System_UnhandledExceptionEventArgsMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo UnhandledExceptionEventArgs_t1885_UnhandledExceptionEventArgs__ctor_m10494_ParameterInfos[] = 
{
	{"exception", 0, 134224598, 0, &Object_t_0_0_0},
	{"isTerminating", 1, 134224599, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.UnhandledExceptionEventArgs::.ctor(System.Object,System.Boolean)
extern const MethodInfo UnhandledExceptionEventArgs__ctor_m10494_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnhandledExceptionEventArgs__ctor_m10494/* method */
	, &UnhandledExceptionEventArgs_t1885_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_SByte_t113/* invoker_method */
	, UnhandledExceptionEventArgs_t1885_UnhandledExceptionEventArgs__ctor_m10494_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5524/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.UnhandledExceptionEventArgs::get_ExceptionObject()
extern const MethodInfo UnhandledExceptionEventArgs_get_ExceptionObject_m10495_MethodInfo = 
{
	"get_ExceptionObject"/* name */
	, (methodPointerType)&UnhandledExceptionEventArgs_get_ExceptionObject_m10495/* method */
	, &UnhandledExceptionEventArgs_t1885_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 926/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5525/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.UnhandledExceptionEventArgs::get_IsTerminating()
extern const MethodInfo UnhandledExceptionEventArgs_get_IsTerminating_m10496_MethodInfo = 
{
	"get_IsTerminating"/* name */
	, (methodPointerType)&UnhandledExceptionEventArgs_get_IsTerminating_m10496/* method */
	, &UnhandledExceptionEventArgs_t1885_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 927/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5526/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* UnhandledExceptionEventArgs_t1885_MethodInfos[] =
{
	&UnhandledExceptionEventArgs__ctor_m10494_MethodInfo,
	&UnhandledExceptionEventArgs_get_ExceptionObject_m10495_MethodInfo,
	&UnhandledExceptionEventArgs_get_IsTerminating_m10496_MethodInfo,
	NULL
};
extern const MethodInfo UnhandledExceptionEventArgs_get_ExceptionObject_m10495_MethodInfo;
static const PropertyInfo UnhandledExceptionEventArgs_t1885____ExceptionObject_PropertyInfo = 
{
	&UnhandledExceptionEventArgs_t1885_il2cpp_TypeInfo/* parent */
	, "ExceptionObject"/* name */
	, &UnhandledExceptionEventArgs_get_ExceptionObject_m10495_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo UnhandledExceptionEventArgs_get_IsTerminating_m10496_MethodInfo;
static const PropertyInfo UnhandledExceptionEventArgs_t1885____IsTerminating_PropertyInfo = 
{
	&UnhandledExceptionEventArgs_t1885_il2cpp_TypeInfo/* parent */
	, "IsTerminating"/* name */
	, &UnhandledExceptionEventArgs_get_IsTerminating_m10496_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* UnhandledExceptionEventArgs_t1885_PropertyInfos[] =
{
	&UnhandledExceptionEventArgs_t1885____ExceptionObject_PropertyInfo,
	&UnhandledExceptionEventArgs_t1885____IsTerminating_PropertyInfo,
	NULL
};
static const Il2CppMethodReference UnhandledExceptionEventArgs_t1885_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
};
static bool UnhandledExceptionEventArgs_t1885_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType UnhandledExceptionEventArgs_t1885_0_0_0;
extern const Il2CppType UnhandledExceptionEventArgs_t1885_1_0_0;
struct UnhandledExceptionEventArgs_t1885;
const Il2CppTypeDefinitionMetadata UnhandledExceptionEventArgs_t1885_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &EventArgs_t1251_0_0_0/* parent */
	, UnhandledExceptionEventArgs_t1885_VTable/* vtableMethods */
	, UnhandledExceptionEventArgs_t1885_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2532/* fieldStart */

};
TypeInfo UnhandledExceptionEventArgs_t1885_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnhandledExceptionEventArgs"/* name */
	, "System"/* namespaze */
	, UnhandledExceptionEventArgs_t1885_MethodInfos/* methods */
	, UnhandledExceptionEventArgs_t1885_PropertyInfos/* properties */
	, NULL/* events */
	, &UnhandledExceptionEventArgs_t1885_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 925/* custom_attributes_cache */
	, &UnhandledExceptionEventArgs_t1885_0_0_0/* byval_arg */
	, &UnhandledExceptionEventArgs_t1885_1_0_0/* this_arg */
	, &UnhandledExceptionEventArgs_t1885_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnhandledExceptionEventArgs_t1885)/* instance_size */
	, sizeof (UnhandledExceptionEventArgs_t1885)/* actualSize */
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
	, 3/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.UnitySerializationHolder/UnityType
#include "mscorlib_System_UnitySerializationHolder_UnityType.h"
// Metadata Definition System.UnitySerializationHolder/UnityType
extern TypeInfo UnityType_t1886_il2cpp_TypeInfo;
// System.UnitySerializationHolder/UnityType
#include "mscorlib_System_UnitySerializationHolder_UnityTypeMethodDeclarations.h"
static const MethodInfo* UnityType_t1886_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference UnityType_t1886_VTable[] =
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
static bool UnityType_t1886_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair UnityType_t1886_InterfacesOffsets[] = 
{
	{ &IFormattable_t428_0_0_0, 4},
	{ &IConvertible_t429_0_0_0, 5},
	{ &IComparable_t430_0_0_0, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType UnityType_t1886_0_0_0;
extern const Il2CppType UnityType_t1886_1_0_0;
extern TypeInfo UnitySerializationHolder_t1887_il2cpp_TypeInfo;
extern const Il2CppType UnitySerializationHolder_t1887_0_0_0;
// System.Byte
#include "mscorlib_System_Byte.h"
extern TypeInfo Byte_t366_il2cpp_TypeInfo;
const Il2CppTypeDefinitionMetadata UnityType_t1886_DefinitionMetadata = 
{
	&UnitySerializationHolder_t1887_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, UnityType_t1886_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t431_0_0_0/* parent */
	, UnityType_t1886_VTable/* vtableMethods */
	, UnityType_t1886_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2534/* fieldStart */

};
TypeInfo UnityType_t1886_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityType"/* name */
	, ""/* namespaze */
	, UnityType_t1886_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Byte_t366_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &UnityType_t1886_0_0_0/* byval_arg */
	, &UnityType_t1886_1_0_0/* this_arg */
	, &UnityType_t1886_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityType_t1886)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (UnityType_t1886)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(uint8_t)/* native_size */
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
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.UnitySerializationHolder
#include "mscorlib_System_UnitySerializationHolder.h"
// Metadata Definition System.UnitySerializationHolder
// System.UnitySerializationHolder
#include "mscorlib_System_UnitySerializationHolderMethodDeclarations.h"
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo UnitySerializationHolder_t1887_UnitySerializationHolder__ctor_m10497_ParameterInfos[] = 
{
	{"info", 0, 134224600, 0, &SerializationInfo_t732_0_0_0},
	{"ctx", 1, 134224601, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo UnitySerializationHolder__ctor_m10497_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnitySerializationHolder__ctor_m10497/* method */
	, &UnitySerializationHolder_t1887_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, UnitySerializationHolder_t1887_UnitySerializationHolder__ctor_m10497_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6273/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5527/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo UnitySerializationHolder_t1887_UnitySerializationHolder_GetTypeData_m10498_ParameterInfos[] = 
{
	{"instance", 0, 134224602, 0, &Type_t_0_0_0},
	{"info", 1, 134224603, 0, &SerializationInfo_t732_0_0_0},
	{"ctx", 2, 134224604, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo UnitySerializationHolder_GetTypeData_m10498_MethodInfo = 
{
	"GetTypeData"/* name */
	, (methodPointerType)&UnitySerializationHolder_GetTypeData_m10498/* method */
	, &UnitySerializationHolder_t1887_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Object_t_StreamingContext_t733/* invoker_method */
	, UnitySerializationHolder_t1887_UnitySerializationHolder_GetTypeData_m10498_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5528/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType DBNull_t1830_0_0_0;
extern const Il2CppType DBNull_t1830_0_0_0;
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo UnitySerializationHolder_t1887_UnitySerializationHolder_GetDBNullData_m10499_ParameterInfos[] = 
{
	{"instance", 0, 134224605, 0, &DBNull_t1830_0_0_0},
	{"info", 1, 134224606, 0, &SerializationInfo_t732_0_0_0},
	{"ctx", 2, 134224607, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo UnitySerializationHolder_GetDBNullData_m10499_MethodInfo = 
{
	"GetDBNullData"/* name */
	, (methodPointerType)&UnitySerializationHolder_GetDBNullData_m10499/* method */
	, &UnitySerializationHolder_t1887_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Object_t_StreamingContext_t733/* invoker_method */
	, UnitySerializationHolder_t1887_UnitySerializationHolder_GetDBNullData_m10499_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5529/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Module_t1552_0_0_0;
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo UnitySerializationHolder_t1887_UnitySerializationHolder_GetModuleData_m10500_ParameterInfos[] = 
{
	{"instance", 0, 134224608, 0, &Module_t1552_0_0_0},
	{"info", 1, 134224609, 0, &SerializationInfo_t732_0_0_0},
	{"ctx", 2, 134224610, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo UnitySerializationHolder_GetModuleData_m10500_MethodInfo = 
{
	"GetModuleData"/* name */
	, (methodPointerType)&UnitySerializationHolder_GetModuleData_m10500/* method */
	, &UnitySerializationHolder_t1887_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Object_t_StreamingContext_t733/* invoker_method */
	, UnitySerializationHolder_t1887_UnitySerializationHolder_GetModuleData_m10500_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5530/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo UnitySerializationHolder_t1887_UnitySerializationHolder_GetObjectData_m10501_ParameterInfos[] = 
{
	{"info", 0, 134224611, 0, &SerializationInfo_t732_0_0_0},
	{"context", 1, 134224612, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo UnitySerializationHolder_GetObjectData_m10501_MethodInfo = 
{
	"GetObjectData"/* name */
	, (methodPointerType)&UnitySerializationHolder_GetObjectData_m10501/* method */
	, &UnitySerializationHolder_t1887_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, UnitySerializationHolder_t1887_UnitySerializationHolder_GetObjectData_m10501_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5531/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo UnitySerializationHolder_t1887_UnitySerializationHolder_GetRealObject_m10502_ParameterInfos[] = 
{
	{"context", 0, 134224613, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern const MethodInfo UnitySerializationHolder_GetRealObject_m10502_MethodInfo = 
{
	"GetRealObject"/* name */
	, (methodPointerType)&UnitySerializationHolder_GetRealObject_m10502/* method */
	, &UnitySerializationHolder_t1887_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_StreamingContext_t733/* invoker_method */
	, UnitySerializationHolder_t1887_UnitySerializationHolder_GetRealObject_m10502_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5532/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* UnitySerializationHolder_t1887_MethodInfos[] =
{
	&UnitySerializationHolder__ctor_m10497_MethodInfo,
	&UnitySerializationHolder_GetTypeData_m10498_MethodInfo,
	&UnitySerializationHolder_GetDBNullData_m10499_MethodInfo,
	&UnitySerializationHolder_GetModuleData_m10500_MethodInfo,
	&UnitySerializationHolder_GetObjectData_m10501_MethodInfo,
	&UnitySerializationHolder_GetRealObject_m10502_MethodInfo,
	NULL
};
static const Il2CppType* UnitySerializationHolder_t1887_il2cpp_TypeInfo__nestedTypes[1] =
{
	&UnityType_t1886_0_0_0,
};
extern const MethodInfo UnitySerializationHolder_GetObjectData_m10501_MethodInfo;
extern const MethodInfo UnitySerializationHolder_GetRealObject_m10502_MethodInfo;
static const Il2CppMethodReference UnitySerializationHolder_t1887_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	&UnitySerializationHolder_GetObjectData_m10501_MethodInfo,
	&UnitySerializationHolder_GetRealObject_m10502_MethodInfo,
	&UnitySerializationHolder_GetObjectData_m10501_MethodInfo,
	&UnitySerializationHolder_GetRealObject_m10502_MethodInfo,
};
static bool UnitySerializationHolder_t1887_VTableIsGenericMethod[] =
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
extern const Il2CppType IObjectReference_t1944_0_0_0;
static const Il2CppType* UnitySerializationHolder_t1887_InterfacesTypeInfos[] = 
{
	&ISerializable_t435_0_0_0,
	&IObjectReference_t1944_0_0_0,
};
static Il2CppInterfaceOffsetPair UnitySerializationHolder_t1887_InterfacesOffsets[] = 
{
	{ &ISerializable_t435_0_0_0, 4},
	{ &IObjectReference_t1944_0_0_0, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType UnitySerializationHolder_t1887_1_0_0;
struct UnitySerializationHolder_t1887;
const Il2CppTypeDefinitionMetadata UnitySerializationHolder_t1887_DefinitionMetadata = 
{
	NULL/* declaringType */
	, UnitySerializationHolder_t1887_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, UnitySerializationHolder_t1887_InterfacesTypeInfos/* implementedInterfaces */
	, UnitySerializationHolder_t1887_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, UnitySerializationHolder_t1887_VTable/* vtableMethods */
	, UnitySerializationHolder_t1887_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2539/* fieldStart */

};
TypeInfo UnitySerializationHolder_t1887_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnitySerializationHolder"/* name */
	, "System"/* namespaze */
	, UnitySerializationHolder_t1887_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &UnitySerializationHolder_t1887_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &UnitySerializationHolder_t1887_0_0_0/* byval_arg */
	, &UnitySerializationHolder_t1887_1_0_0/* this_arg */
	, &UnitySerializationHolder_t1887_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnitySerializationHolder_t1887)/* instance_size */
	, sizeof (UnitySerializationHolder_t1887)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056768/* flags */
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
	, 3/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 8/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Version
#include "mscorlib_System_Version.h"
// Metadata Definition System.Version
extern TypeInfo Version_t1019_il2cpp_TypeInfo;
// System.Version
#include "mscorlib_System_VersionMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Version::.ctor()
extern const MethodInfo Version__ctor_m10503_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Version__ctor_m10503/* method */
	, &Version_t1019_il2cpp_TypeInfo/* declaring_type */
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
	, 5533/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Version_t1019_Version__ctor_m10504_ParameterInfos[] = 
{
	{"version", 0, 134224614, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Version::.ctor(System.String)
extern const MethodInfo Version__ctor_m10504_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Version__ctor_m10504/* method */
	, &Version_t1019_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, Version_t1019_Version__ctor_m10504_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5534/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo Version_t1019_Version__ctor_m4889_ParameterInfos[] = 
{
	{"major", 0, 134224615, 0, &Int32_t75_0_0_0},
	{"minor", 1, 134224616, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Version::.ctor(System.Int32,System.Int32)
extern const MethodInfo Version__ctor_m4889_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Version__ctor_m4889/* method */
	, &Version_t1019_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75_Int32_t75/* invoker_method */
	, Version_t1019_Version__ctor_m4889_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5535/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo Version_t1019_Version__ctor_m10505_ParameterInfos[] = 
{
	{"major", 0, 134224617, 0, &Int32_t75_0_0_0},
	{"minor", 1, 134224618, 0, &Int32_t75_0_0_0},
	{"build", 2, 134224619, 0, &Int32_t75_0_0_0},
	{"revision", 3, 134224620, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75_Int32_t75_Int32_t75_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern const MethodInfo Version__ctor_m10505_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Version__ctor_m10505/* method */
	, &Version_t1019_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75_Int32_t75_Int32_t75_Int32_t75/* invoker_method */
	, Version_t1019_Version__ctor_m10505_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5536/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
extern const Il2CppType Int32_t75_0_0_0;
static const ParameterInfo Version_t1019_Version_CheckedSet_m10506_ParameterInfos[] = 
{
	{"defined", 0, 134224621, 0, &Int32_t75_0_0_0},
	{"major", 1, 134224622, 0, &Int32_t75_0_0_0},
	{"minor", 2, 134224623, 0, &Int32_t75_0_0_0},
	{"build", 3, 134224624, 0, &Int32_t75_0_0_0},
	{"revision", 4, 134224625, 0, &Int32_t75_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Int32_t75_Int32_t75_Int32_t75_Int32_t75_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Version::CheckedSet(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern const MethodInfo Version_CheckedSet_m10506_MethodInfo = 
{
	"CheckedSet"/* name */
	, (methodPointerType)&Version_CheckedSet_m10506/* method */
	, &Version_t1019_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Int32_t75_Int32_t75_Int32_t75_Int32_t75_Int32_t75/* invoker_method */
	, Version_t1019_Version_CheckedSet_m10506_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5537/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Version::get_Build()
extern const MethodInfo Version_get_Build_m10507_MethodInfo = 
{
	"get_Build"/* name */
	, (methodPointerType)&Version_get_Build_m10507/* method */
	, &Version_t1019_il2cpp_TypeInfo/* declaring_type */
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
	, 5538/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Version::get_Major()
extern const MethodInfo Version_get_Major_m10508_MethodInfo = 
{
	"get_Major"/* name */
	, (methodPointerType)&Version_get_Major_m10508/* method */
	, &Version_t1019_il2cpp_TypeInfo/* declaring_type */
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
	, 5539/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Version::get_Minor()
extern const MethodInfo Version_get_Minor_m10509_MethodInfo = 
{
	"get_Minor"/* name */
	, (methodPointerType)&Version_get_Minor_m10509/* method */
	, &Version_t1019_il2cpp_TypeInfo/* declaring_type */
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
	, 5540/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Version::get_Revision()
extern const MethodInfo Version_get_Revision_m10510_MethodInfo = 
{
	"get_Revision"/* name */
	, (methodPointerType)&Version_get_Revision_m10510/* method */
	, &Version_t1019_il2cpp_TypeInfo/* declaring_type */
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
	, 5541/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo Version_t1019_Version_CompareTo_m10511_ParameterInfos[] = 
{
	{"version", 0, 134224626, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Version::CompareTo(System.Object)
extern const MethodInfo Version_CompareTo_m10511_MethodInfo = 
{
	"CompareTo"/* name */
	, (methodPointerType)&Version_CompareTo_m10511/* method */
	, &Version_t1019_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Object_t/* invoker_method */
	, Version_t1019_Version_CompareTo_m10511_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5542/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo Version_t1019_Version_Equals_m10512_ParameterInfos[] = 
{
	{"obj", 0, 134224627, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Version::Equals(System.Object)
extern const MethodInfo Version_Equals_m10512_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&Version_Equals_m10512/* method */
	, &Version_t1019_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Object_t/* invoker_method */
	, Version_t1019_Version_Equals_m10512_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5543/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Version_t1019_0_0_0;
static const ParameterInfo Version_t1019_Version_CompareTo_m10513_ParameterInfos[] = 
{
	{"value", 0, 134224628, 0, &Version_t1019_0_0_0},
};
extern void* RuntimeInvoker_Int32_t75_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Version::CompareTo(System.Version)
extern const MethodInfo Version_CompareTo_m10513_MethodInfo = 
{
	"CompareTo"/* name */
	, (methodPointerType)&Version_CompareTo_m10513/* method */
	, &Version_t1019_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t75_Object_t/* invoker_method */
	, Version_t1019_Version_CompareTo_m10513_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5544/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Version_t1019_0_0_0;
static const ParameterInfo Version_t1019_Version_Equals_m10514_ParameterInfos[] = 
{
	{"obj", 0, 134224629, 0, &Version_t1019_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Version::Equals(System.Version)
extern const MethodInfo Version_Equals_m10514_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&Version_Equals_m10514/* method */
	, &Version_t1019_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Object_t/* invoker_method */
	, Version_t1019_Version_Equals_m10514_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5545/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Version::GetHashCode()
extern const MethodInfo Version_GetHashCode_m10515_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&Version_GetHashCode_m10515/* method */
	, &Version_t1019_il2cpp_TypeInfo/* declaring_type */
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
	, 5546/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Version::ToString()
extern const MethodInfo Version_ToString_m10516_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&Version_ToString_m10516/* method */
	, &Version_t1019_il2cpp_TypeInfo/* declaring_type */
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
	, 5547/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Version_t1019_Version_CreateFromString_m10517_ParameterInfos[] = 
{
	{"info", 0, 134224630, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Version System.Version::CreateFromString(System.String)
extern const MethodInfo Version_CreateFromString_m10517_MethodInfo = 
{
	"CreateFromString"/* name */
	, (methodPointerType)&Version_CreateFromString_m10517/* method */
	, &Version_t1019_il2cpp_TypeInfo/* declaring_type */
	, &Version_t1019_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Version_t1019_Version_CreateFromString_m10517_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5548/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Version_t1019_0_0_0;
extern const Il2CppType Version_t1019_0_0_0;
static const ParameterInfo Version_t1019_Version_op_Equality_m10518_ParameterInfos[] = 
{
	{"v1", 0, 134224631, 0, &Version_t1019_0_0_0},
	{"v2", 1, 134224632, 0, &Version_t1019_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Version::op_Equality(System.Version,System.Version)
extern const MethodInfo Version_op_Equality_m10518_MethodInfo = 
{
	"op_Equality"/* name */
	, (methodPointerType)&Version_op_Equality_m10518/* method */
	, &Version_t1019_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Object_t_Object_t/* invoker_method */
	, Version_t1019_Version_op_Equality_m10518_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5549/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Version_t1019_0_0_0;
extern const Il2CppType Version_t1019_0_0_0;
static const ParameterInfo Version_t1019_Version_op_Inequality_m10519_ParameterInfos[] = 
{
	{"v1", 0, 134224633, 0, &Version_t1019_0_0_0},
	{"v2", 1, 134224634, 0, &Version_t1019_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Version::op_Inequality(System.Version,System.Version)
extern const MethodInfo Version_op_Inequality_m10519_MethodInfo = 
{
	"op_Inequality"/* name */
	, (methodPointerType)&Version_op_Inequality_m10519/* method */
	, &Version_t1019_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Object_t_Object_t/* invoker_method */
	, Version_t1019_Version_op_Inequality_m10519_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5550/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Version_t1019_MethodInfos[] =
{
	&Version__ctor_m10503_MethodInfo,
	&Version__ctor_m10504_MethodInfo,
	&Version__ctor_m4889_MethodInfo,
	&Version__ctor_m10505_MethodInfo,
	&Version_CheckedSet_m10506_MethodInfo,
	&Version_get_Build_m10507_MethodInfo,
	&Version_get_Major_m10508_MethodInfo,
	&Version_get_Minor_m10509_MethodInfo,
	&Version_get_Revision_m10510_MethodInfo,
	&Version_CompareTo_m10511_MethodInfo,
	&Version_Equals_m10512_MethodInfo,
	&Version_CompareTo_m10513_MethodInfo,
	&Version_Equals_m10514_MethodInfo,
	&Version_GetHashCode_m10515_MethodInfo,
	&Version_ToString_m10516_MethodInfo,
	&Version_CreateFromString_m10517_MethodInfo,
	&Version_op_Equality_m10518_MethodInfo,
	&Version_op_Inequality_m10519_MethodInfo,
	NULL
};
extern const MethodInfo Version_get_Build_m10507_MethodInfo;
static const PropertyInfo Version_t1019____Build_PropertyInfo = 
{
	&Version_t1019_il2cpp_TypeInfo/* parent */
	, "Build"/* name */
	, &Version_get_Build_m10507_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Version_get_Major_m10508_MethodInfo;
static const PropertyInfo Version_t1019____Major_PropertyInfo = 
{
	&Version_t1019_il2cpp_TypeInfo/* parent */
	, "Major"/* name */
	, &Version_get_Major_m10508_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Version_get_Minor_m10509_MethodInfo;
static const PropertyInfo Version_t1019____Minor_PropertyInfo = 
{
	&Version_t1019_il2cpp_TypeInfo/* parent */
	, "Minor"/* name */
	, &Version_get_Minor_m10509_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Version_get_Revision_m10510_MethodInfo;
static const PropertyInfo Version_t1019____Revision_PropertyInfo = 
{
	&Version_t1019_il2cpp_TypeInfo/* parent */
	, "Revision"/* name */
	, &Version_get_Revision_m10510_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* Version_t1019_PropertyInfos[] =
{
	&Version_t1019____Build_PropertyInfo,
	&Version_t1019____Major_PropertyInfo,
	&Version_t1019____Minor_PropertyInfo,
	&Version_t1019____Revision_PropertyInfo,
	NULL
};
extern const MethodInfo Version_Equals_m10512_MethodInfo;
extern const MethodInfo Version_GetHashCode_m10515_MethodInfo;
extern const MethodInfo Version_ToString_m10516_MethodInfo;
extern const MethodInfo Version_CompareTo_m10511_MethodInfo;
extern const MethodInfo Version_CompareTo_m10513_MethodInfo;
extern const MethodInfo Version_Equals_m10514_MethodInfo;
static const Il2CppMethodReference Version_t1019_VTable[] =
{
	&Version_Equals_m10512_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Version_GetHashCode_m10515_MethodInfo,
	&Version_ToString_m10516_MethodInfo,
	&Version_CompareTo_m10511_MethodInfo,
	&Version_CompareTo_m10513_MethodInfo,
	&Version_Equals_m10514_MethodInfo,
};
static bool Version_t1019_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType IComparable_1_t2421_0_0_0;
extern const Il2CppType IEquatable_1_t2422_0_0_0;
static const Il2CppType* Version_t1019_InterfacesTypeInfos[] = 
{
	&IComparable_t430_0_0_0,
	&ICloneable_t434_0_0_0,
	&IComparable_1_t2421_0_0_0,
	&IEquatable_1_t2422_0_0_0,
};
static Il2CppInterfaceOffsetPair Version_t1019_InterfacesOffsets[] = 
{
	{ &IComparable_t430_0_0_0, 4},
	{ &ICloneable_t434_0_0_0, 5},
	{ &IComparable_1_t2421_0_0_0, 5},
	{ &IEquatable_1_t2422_0_0_0, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType Version_t1019_1_0_0;
struct Version_t1019;
const Il2CppTypeDefinitionMetadata Version_t1019_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, Version_t1019_InterfacesTypeInfos/* implementedInterfaces */
	, Version_t1019_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Version_t1019_VTable/* vtableMethods */
	, Version_t1019_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2542/* fieldStart */

};
TypeInfo Version_t1019_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Version"/* name */
	, "System"/* namespaze */
	, Version_t1019_MethodInfos/* methods */
	, Version_t1019_PropertyInfos/* properties */
	, NULL/* events */
	, &Version_t1019_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 928/* custom_attributes_cache */
	, &Version_t1019_0_0_0/* byval_arg */
	, &Version_t1019_1_0_0/* this_arg */
	, &Version_t1019_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Version_t1019)/* instance_size */
	, sizeof (Version_t1019)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057025/* flags */
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
	, 18/* method_count */
	, 4/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 4/* interfaces_count */
	, 4/* interface_offsets_count */

};
// System.WeakReference
#include "mscorlib_System_WeakReference.h"
// Metadata Definition System.WeakReference
extern TypeInfo WeakReference_t1673_il2cpp_TypeInfo;
// System.WeakReference
#include "mscorlib_System_WeakReferenceMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.WeakReference::.ctor()
extern const MethodInfo WeakReference__ctor_m10520_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&WeakReference__ctor_m10520/* method */
	, &WeakReference_t1673_il2cpp_TypeInfo/* declaring_type */
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
	, 5551/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo WeakReference_t1673_WeakReference__ctor_m10521_ParameterInfos[] = 
{
	{"target", 0, 134224635, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.WeakReference::.ctor(System.Object)
extern const MethodInfo WeakReference__ctor_m10521_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&WeakReference__ctor_m10521/* method */
	, &WeakReference_t1673_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, WeakReference_t1673_WeakReference__ctor_m10521_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5552/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Boolean_t111_0_0_0;
static const ParameterInfo WeakReference_t1673_WeakReference__ctor_m10522_ParameterInfos[] = 
{
	{"target", 0, 134224636, 0, &Object_t_0_0_0},
	{"trackResurrection", 1, 134224637, 0, &Boolean_t111_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_SByte_t113 (const MethodInfo* method, void* obj, void** args);
// System.Void System.WeakReference::.ctor(System.Object,System.Boolean)
extern const MethodInfo WeakReference__ctor_m10522_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&WeakReference__ctor_m10522/* method */
	, &WeakReference_t1673_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_SByte_t113/* invoker_method */
	, WeakReference_t1673_WeakReference__ctor_m10522_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5553/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo WeakReference_t1673_WeakReference__ctor_m10523_ParameterInfos[] = 
{
	{"info", 0, 134224638, 0, &SerializationInfo_t732_0_0_0},
	{"context", 1, 134224639, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.WeakReference::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo WeakReference__ctor_m10523_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&WeakReference__ctor_m10523/* method */
	, &WeakReference_t1673_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, WeakReference_t1673_WeakReference__ctor_m10523_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5554/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo WeakReference_t1673_WeakReference_AllocateHandle_m10524_ParameterInfos[] = 
{
	{"target", 0, 134224640, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.WeakReference::AllocateHandle(System.Object)
extern const MethodInfo WeakReference_AllocateHandle_m10524_MethodInfo = 
{
	"AllocateHandle"/* name */
	, (methodPointerType)&WeakReference_AllocateHandle_m10524/* method */
	, &WeakReference_t1673_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, WeakReference_t1673_WeakReference_AllocateHandle_m10524_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5555/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.WeakReference::get_Target()
extern const MethodInfo WeakReference_get_Target_m10525_MethodInfo = 
{
	"get_Target"/* name */
	, (methodPointerType)&WeakReference_get_Target_m10525/* method */
	, &WeakReference_t1673_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2502/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5556/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t111 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.WeakReference::get_TrackResurrection()
extern const MethodInfo WeakReference_get_TrackResurrection_m10526_MethodInfo = 
{
	"get_TrackResurrection"/* name */
	, (methodPointerType)&WeakReference_get_TrackResurrection_m10526/* method */
	, &WeakReference_t1673_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2502/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5557/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t110 (const MethodInfo* method, void* obj, void** args);
// System.Void System.WeakReference::Finalize()
extern const MethodInfo WeakReference_Finalize_m10527_MethodInfo = 
{
	"Finalize"/* name */
	, (methodPointerType)&WeakReference_Finalize_m10527/* method */
	, &WeakReference_t1673_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5558/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t732_0_0_0;
extern const Il2CppType StreamingContext_t733_0_0_0;
static const ParameterInfo WeakReference_t1673_WeakReference_GetObjectData_m10528_ParameterInfos[] = 
{
	{"info", 0, 134224641, 0, &SerializationInfo_t732_0_0_0},
	{"context", 1, 134224642, 0, &StreamingContext_t733_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733 (const MethodInfo* method, void* obj, void** args);
// System.Void System.WeakReference::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo WeakReference_GetObjectData_m10528_MethodInfo = 
{
	"GetObjectData"/* name */
	, (methodPointerType)&WeakReference_GetObjectData_m10528/* method */
	, &WeakReference_t1673_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_StreamingContext_t733/* invoker_method */
	, WeakReference_t1673_WeakReference_GetObjectData_m10528_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5559/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* WeakReference_t1673_MethodInfos[] =
{
	&WeakReference__ctor_m10520_MethodInfo,
	&WeakReference__ctor_m10521_MethodInfo,
	&WeakReference__ctor_m10522_MethodInfo,
	&WeakReference__ctor_m10523_MethodInfo,
	&WeakReference_AllocateHandle_m10524_MethodInfo,
	&WeakReference_get_Target_m10525_MethodInfo,
	&WeakReference_get_TrackResurrection_m10526_MethodInfo,
	&WeakReference_Finalize_m10527_MethodInfo,
	&WeakReference_GetObjectData_m10528_MethodInfo,
	NULL
};
extern const MethodInfo WeakReference_get_Target_m10525_MethodInfo;
static const PropertyInfo WeakReference_t1673____Target_PropertyInfo = 
{
	&WeakReference_t1673_il2cpp_TypeInfo/* parent */
	, "Target"/* name */
	, &WeakReference_get_Target_m10525_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo WeakReference_get_TrackResurrection_m10526_MethodInfo;
static const PropertyInfo WeakReference_t1673____TrackResurrection_PropertyInfo = 
{
	&WeakReference_t1673_il2cpp_TypeInfo/* parent */
	, "TrackResurrection"/* name */
	, &WeakReference_get_TrackResurrection_m10526_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* WeakReference_t1673_PropertyInfos[] =
{
	&WeakReference_t1673____Target_PropertyInfo,
	&WeakReference_t1673____TrackResurrection_PropertyInfo,
	NULL
};
extern const MethodInfo WeakReference_Finalize_m10527_MethodInfo;
extern const MethodInfo WeakReference_GetObjectData_m10528_MethodInfo;
static const Il2CppMethodReference WeakReference_t1673_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&WeakReference_Finalize_m10527_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
	&WeakReference_GetObjectData_m10528_MethodInfo,
	&WeakReference_get_Target_m10525_MethodInfo,
	&WeakReference_get_TrackResurrection_m10526_MethodInfo,
	&WeakReference_GetObjectData_m10528_MethodInfo,
};
static bool WeakReference_t1673_VTableIsGenericMethod[] =
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
static const Il2CppType* WeakReference_t1673_InterfacesTypeInfos[] = 
{
	&ISerializable_t435_0_0_0,
};
static Il2CppInterfaceOffsetPair WeakReference_t1673_InterfacesOffsets[] = 
{
	{ &ISerializable_t435_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType WeakReference_t1673_0_0_0;
extern const Il2CppType WeakReference_t1673_1_0_0;
struct WeakReference_t1673;
const Il2CppTypeDefinitionMetadata WeakReference_t1673_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, WeakReference_t1673_InterfacesTypeInfos/* implementedInterfaces */
	, WeakReference_t1673_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, WeakReference_t1673_VTable/* vtableMethods */
	, WeakReference_t1673_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2547/* fieldStart */

};
TypeInfo WeakReference_t1673_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "WeakReference"/* name */
	, "System"/* namespaze */
	, WeakReference_t1673_MethodInfos/* methods */
	, WeakReference_t1673_PropertyInfos/* properties */
	, NULL/* events */
	, &WeakReference_t1673_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 929/* custom_attributes_cache */
	, &WeakReference_t1673_0_0_0/* byval_arg */
	, &WeakReference_t1673_1_0_0/* this_arg */
	, &WeakReference_t1673_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (WeakReference_t1673)/* instance_size */
	, sizeof (WeakReference_t1673)/* actualSize */
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
	, true/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 9/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// Mono.Math.Prime.PrimalityTest
#include "mscorlib_Mono_Math_Prime_PrimalityTest.h"
// Metadata Definition Mono.Math.Prime.PrimalityTest
extern TypeInfo PrimalityTest_t1888_il2cpp_TypeInfo;
// Mono.Math.Prime.PrimalityTest
#include "mscorlib_Mono_Math_Prime_PrimalityTestMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo PrimalityTest_t1888_PrimalityTest__ctor_m10529_ParameterInfos[] = 
{
	{"object", 0, 134224643, 0, &Object_t_0_0_0},
	{"method", 1, 134224644, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void Mono.Math.Prime.PrimalityTest::.ctor(System.Object,System.IntPtr)
extern const MethodInfo PrimalityTest__ctor_m10529_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&PrimalityTest__ctor_m10529/* method */
	, &PrimalityTest_t1888_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_IntPtr_t/* invoker_method */
	, PrimalityTest_t1888_PrimalityTest__ctor_m10529_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5560/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType BigInteger_t1421_0_0_0;
extern const Il2CppType BigInteger_t1421_0_0_0;
extern const Il2CppType ConfidenceFactor_t1418_0_0_0;
extern const Il2CppType ConfidenceFactor_t1418_0_0_0;
static const ParameterInfo PrimalityTest_t1888_PrimalityTest_Invoke_m10530_ParameterInfos[] = 
{
	{"bi", 0, 134224645, 0, &BigInteger_t1421_0_0_0},
	{"confidence", 1, 134224646, 0, &ConfidenceFactor_t1418_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Object_t_Int32_t75 (const MethodInfo* method, void* obj, void** args);
// System.Boolean Mono.Math.Prime.PrimalityTest::Invoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
extern const MethodInfo PrimalityTest_Invoke_m10530_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&PrimalityTest_Invoke_m10530/* method */
	, &PrimalityTest_t1888_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Object_t_Int32_t75/* invoker_method */
	, PrimalityTest_t1888_PrimalityTest_Invoke_m10530_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5561/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType BigInteger_t1421_0_0_0;
extern const Il2CppType ConfidenceFactor_t1418_0_0_0;
extern const Il2CppType AsyncCallback_t224_0_0_0;
extern const Il2CppType AsyncCallback_t224_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo PrimalityTest_t1888_PrimalityTest_BeginInvoke_m10531_ParameterInfos[] = 
{
	{"bi", 0, 134224647, 0, &BigInteger_t1421_0_0_0},
	{"confidence", 1, 134224648, 0, &ConfidenceFactor_t1418_0_0_0},
	{"callback", 2, 134224649, 0, &AsyncCallback_t224_0_0_0},
	{"object", 3, 134224650, 0, &Object_t_0_0_0},
};
extern const Il2CppType IAsyncResult_t223_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Int32_t75_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult Mono.Math.Prime.PrimalityTest::BeginInvoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor,System.AsyncCallback,System.Object)
extern const MethodInfo PrimalityTest_BeginInvoke_m10531_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&PrimalityTest_BeginInvoke_m10531/* method */
	, &PrimalityTest_t1888_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t223_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32_t75_Object_t_Object_t/* invoker_method */
	, PrimalityTest_t1888_PrimalityTest_BeginInvoke_m10531_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5562/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t223_0_0_0;
static const ParameterInfo PrimalityTest_t1888_PrimalityTest_EndInvoke_m10532_ParameterInfos[] = 
{
	{"result", 0, 134224651, 0, &IAsyncResult_t223_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean Mono.Math.Prime.PrimalityTest::EndInvoke(System.IAsyncResult)
extern const MethodInfo PrimalityTest_EndInvoke_m10532_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&PrimalityTest_EndInvoke_m10532/* method */
	, &PrimalityTest_t1888_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Object_t/* invoker_method */
	, PrimalityTest_t1888_PrimalityTest_EndInvoke_m10532_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5563/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* PrimalityTest_t1888_MethodInfos[] =
{
	&PrimalityTest__ctor_m10529_MethodInfo,
	&PrimalityTest_Invoke_m10530_MethodInfo,
	&PrimalityTest_BeginInvoke_m10531_MethodInfo,
	&PrimalityTest_EndInvoke_m10532_MethodInfo,
	NULL
};
extern const MethodInfo MulticastDelegate_Equals_m2207_MethodInfo;
extern const MethodInfo MulticastDelegate_GetHashCode_m2208_MethodInfo;
extern const MethodInfo MulticastDelegate_GetObjectData_m2209_MethodInfo;
extern const MethodInfo Delegate_Clone_m2210_MethodInfo;
extern const MethodInfo MulticastDelegate_GetInvocationList_m2211_MethodInfo;
extern const MethodInfo MulticastDelegate_CombineImpl_m2212_MethodInfo;
extern const MethodInfo MulticastDelegate_RemoveImpl_m2213_MethodInfo;
extern const MethodInfo PrimalityTest_Invoke_m10530_MethodInfo;
extern const MethodInfo PrimalityTest_BeginInvoke_m10531_MethodInfo;
extern const MethodInfo PrimalityTest_EndInvoke_m10532_MethodInfo;
static const Il2CppMethodReference PrimalityTest_t1888_VTable[] =
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
	&PrimalityTest_Invoke_m10530_MethodInfo,
	&PrimalityTest_BeginInvoke_m10531_MethodInfo,
	&PrimalityTest_EndInvoke_m10532_MethodInfo,
};
static bool PrimalityTest_t1888_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair PrimalityTest_t1888_InterfacesOffsets[] = 
{
	{ &ICloneable_t434_0_0_0, 4},
	{ &ISerializable_t435_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType PrimalityTest_t1888_0_0_0;
extern const Il2CppType PrimalityTest_t1888_1_0_0;
extern const Il2CppType MulticastDelegate_t226_0_0_0;
struct PrimalityTest_t1888;
const Il2CppTypeDefinitionMetadata PrimalityTest_t1888_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, PrimalityTest_t1888_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t226_0_0_0/* parent */
	, PrimalityTest_t1888_VTable/* vtableMethods */
	, PrimalityTest_t1888_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo PrimalityTest_t1888_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "PrimalityTest"/* name */
	, "Mono.Math.Prime"/* namespaze */
	, PrimalityTest_t1888_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &PrimalityTest_t1888_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &PrimalityTest_t1888_0_0_0/* byval_arg */
	, &PrimalityTest_t1888_1_0_0/* this_arg */
	, &PrimalityTest_t1888_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_PrimalityTest_t1888/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PrimalityTest_t1888)/* instance_size */
	, sizeof (PrimalityTest_t1888)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 256/* flags */
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
// System.Reflection.MemberFilter
#include "mscorlib_System_Reflection_MemberFilter.h"
// Metadata Definition System.Reflection.MemberFilter
extern TypeInfo MemberFilter_t1372_il2cpp_TypeInfo;
// System.Reflection.MemberFilter
#include "mscorlib_System_Reflection_MemberFilterMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo MemberFilter_t1372_MemberFilter__ctor_m10533_ParameterInfos[] = 
{
	{"object", 0, 134224652, 0, &Object_t_0_0_0},
	{"method", 1, 134224653, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Reflection.MemberFilter::.ctor(System.Object,System.IntPtr)
extern const MethodInfo MemberFilter__ctor_m10533_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MemberFilter__ctor_m10533/* method */
	, &MemberFilter_t1372_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_IntPtr_t/* invoker_method */
	, MemberFilter_t1372_MemberFilter__ctor_m10533_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5564/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType MemberInfo_t_0_0_0;
extern const Il2CppType MemberInfo_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo MemberFilter_t1372_MemberFilter_Invoke_m10534_ParameterInfos[] = 
{
	{"m", 0, 134224654, 0, &MemberInfo_t_0_0_0},
	{"filterCriteria", 1, 134224655, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Reflection.MemberFilter::Invoke(System.Reflection.MemberInfo,System.Object)
extern const MethodInfo MemberFilter_Invoke_m10534_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&MemberFilter_Invoke_m10534/* method */
	, &MemberFilter_t1372_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Object_t_Object_t/* invoker_method */
	, MemberFilter_t1372_MemberFilter_Invoke_m10534_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5565/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType MemberInfo_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType AsyncCallback_t224_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo MemberFilter_t1372_MemberFilter_BeginInvoke_m10535_ParameterInfos[] = 
{
	{"m", 0, 134224656, 0, &MemberInfo_t_0_0_0},
	{"filterCriteria", 1, 134224657, 0, &Object_t_0_0_0},
	{"callback", 2, 134224658, 0, &AsyncCallback_t224_0_0_0},
	{"object", 3, 134224659, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Reflection.MemberFilter::BeginInvoke(System.Reflection.MemberInfo,System.Object,System.AsyncCallback,System.Object)
extern const MethodInfo MemberFilter_BeginInvoke_m10535_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&MemberFilter_BeginInvoke_m10535/* method */
	, &MemberFilter_t1372_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t223_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, MemberFilter_t1372_MemberFilter_BeginInvoke_m10535_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5566/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t223_0_0_0;
static const ParameterInfo MemberFilter_t1372_MemberFilter_EndInvoke_m10536_ParameterInfos[] = 
{
	{"result", 0, 134224660, 0, &IAsyncResult_t223_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Reflection.MemberFilter::EndInvoke(System.IAsyncResult)
extern const MethodInfo MemberFilter_EndInvoke_m10536_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&MemberFilter_EndInvoke_m10536/* method */
	, &MemberFilter_t1372_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Object_t/* invoker_method */
	, MemberFilter_t1372_MemberFilter_EndInvoke_m10536_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5567/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* MemberFilter_t1372_MethodInfos[] =
{
	&MemberFilter__ctor_m10533_MethodInfo,
	&MemberFilter_Invoke_m10534_MethodInfo,
	&MemberFilter_BeginInvoke_m10535_MethodInfo,
	&MemberFilter_EndInvoke_m10536_MethodInfo,
	NULL
};
extern const MethodInfo MemberFilter_Invoke_m10534_MethodInfo;
extern const MethodInfo MemberFilter_BeginInvoke_m10535_MethodInfo;
extern const MethodInfo MemberFilter_EndInvoke_m10536_MethodInfo;
static const Il2CppMethodReference MemberFilter_t1372_VTable[] =
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
	&MemberFilter_Invoke_m10534_MethodInfo,
	&MemberFilter_BeginInvoke_m10535_MethodInfo,
	&MemberFilter_EndInvoke_m10536_MethodInfo,
};
static bool MemberFilter_t1372_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair MemberFilter_t1372_InterfacesOffsets[] = 
{
	{ &ICloneable_t434_0_0_0, 4},
	{ &ISerializable_t435_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType MemberFilter_t1372_0_0_0;
extern const Il2CppType MemberFilter_t1372_1_0_0;
struct MemberFilter_t1372;
const Il2CppTypeDefinitionMetadata MemberFilter_t1372_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, MemberFilter_t1372_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t226_0_0_0/* parent */
	, MemberFilter_t1372_VTable/* vtableMethods */
	, MemberFilter_t1372_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo MemberFilter_t1372_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "MemberFilter"/* name */
	, "System.Reflection"/* namespaze */
	, MemberFilter_t1372_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &MemberFilter_t1372_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 930/* custom_attributes_cache */
	, &MemberFilter_t1372_0_0_0/* byval_arg */
	, &MemberFilter_t1372_1_0_0/* this_arg */
	, &MemberFilter_t1372_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_MemberFilter_t1372/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (MemberFilter_t1372)/* instance_size */
	, sizeof (MemberFilter_t1372)/* actualSize */
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
// System.Reflection.TypeFilter
#include "mscorlib_System_Reflection_TypeFilter.h"
// Metadata Definition System.Reflection.TypeFilter
extern TypeInfo TypeFilter_t1577_il2cpp_TypeInfo;
// System.Reflection.TypeFilter
#include "mscorlib_System_Reflection_TypeFilterMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo TypeFilter_t1577_TypeFilter__ctor_m10537_ParameterInfos[] = 
{
	{"object", 0, 134224661, 0, &Object_t_0_0_0},
	{"method", 1, 134224662, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Reflection.TypeFilter::.ctor(System.Object,System.IntPtr)
extern const MethodInfo TypeFilter__ctor_m10537_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TypeFilter__ctor_m10537/* method */
	, &TypeFilter_t1577_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_IntPtr_t/* invoker_method */
	, TypeFilter_t1577_TypeFilter__ctor_m10537_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5568/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo TypeFilter_t1577_TypeFilter_Invoke_m10538_ParameterInfos[] = 
{
	{"m", 0, 134224663, 0, &Type_t_0_0_0},
	{"filterCriteria", 1, 134224664, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Reflection.TypeFilter::Invoke(System.Type,System.Object)
extern const MethodInfo TypeFilter_Invoke_m10538_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&TypeFilter_Invoke_m10538/* method */
	, &TypeFilter_t1577_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Object_t_Object_t/* invoker_method */
	, TypeFilter_t1577_TypeFilter_Invoke_m10538_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5569/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType AsyncCallback_t224_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo TypeFilter_t1577_TypeFilter_BeginInvoke_m10539_ParameterInfos[] = 
{
	{"m", 0, 134224665, 0, &Type_t_0_0_0},
	{"filterCriteria", 1, 134224666, 0, &Object_t_0_0_0},
	{"callback", 2, 134224667, 0, &AsyncCallback_t224_0_0_0},
	{"object", 3, 134224668, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Reflection.TypeFilter::BeginInvoke(System.Type,System.Object,System.AsyncCallback,System.Object)
extern const MethodInfo TypeFilter_BeginInvoke_m10539_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&TypeFilter_BeginInvoke_m10539/* method */
	, &TypeFilter_t1577_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t223_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, TypeFilter_t1577_TypeFilter_BeginInvoke_m10539_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5570/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t223_0_0_0;
static const ParameterInfo TypeFilter_t1577_TypeFilter_EndInvoke_m10540_ParameterInfos[] = 
{
	{"result", 0, 134224669, 0, &IAsyncResult_t223_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t111_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Reflection.TypeFilter::EndInvoke(System.IAsyncResult)
extern const MethodInfo TypeFilter_EndInvoke_m10540_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&TypeFilter_EndInvoke_m10540/* method */
	, &TypeFilter_t1577_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t111_Object_t/* invoker_method */
	, TypeFilter_t1577_TypeFilter_EndInvoke_m10540_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5571/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* TypeFilter_t1577_MethodInfos[] =
{
	&TypeFilter__ctor_m10537_MethodInfo,
	&TypeFilter_Invoke_m10538_MethodInfo,
	&TypeFilter_BeginInvoke_m10539_MethodInfo,
	&TypeFilter_EndInvoke_m10540_MethodInfo,
	NULL
};
extern const MethodInfo TypeFilter_Invoke_m10538_MethodInfo;
extern const MethodInfo TypeFilter_BeginInvoke_m10539_MethodInfo;
extern const MethodInfo TypeFilter_EndInvoke_m10540_MethodInfo;
static const Il2CppMethodReference TypeFilter_t1577_VTable[] =
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
	&TypeFilter_Invoke_m10538_MethodInfo,
	&TypeFilter_BeginInvoke_m10539_MethodInfo,
	&TypeFilter_EndInvoke_m10540_MethodInfo,
};
static bool TypeFilter_t1577_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair TypeFilter_t1577_InterfacesOffsets[] = 
{
	{ &ICloneable_t434_0_0_0, 4},
	{ &ISerializable_t435_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType TypeFilter_t1577_0_0_0;
extern const Il2CppType TypeFilter_t1577_1_0_0;
struct TypeFilter_t1577;
const Il2CppTypeDefinitionMetadata TypeFilter_t1577_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, TypeFilter_t1577_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t226_0_0_0/* parent */
	, TypeFilter_t1577_VTable/* vtableMethods */
	, TypeFilter_t1577_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo TypeFilter_t1577_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "TypeFilter"/* name */
	, "System.Reflection"/* namespaze */
	, TypeFilter_t1577_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &TypeFilter_t1577_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 931/* custom_attributes_cache */
	, &TypeFilter_t1577_0_0_0/* byval_arg */
	, &TypeFilter_t1577_1_0_0/* this_arg */
	, &TypeFilter_t1577_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_TypeFilter_t1577/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TypeFilter_t1577)/* instance_size */
	, sizeof (TypeFilter_t1577)/* actualSize */
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
// System.Runtime.Remoting.Messaging.HeaderHandler
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderHandler.h"
// Metadata Definition System.Runtime.Remoting.Messaging.HeaderHandler
extern TypeInfo HeaderHandler_t1890_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.HeaderHandler
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderHandlerMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo HeaderHandler_t1890_HeaderHandler__ctor_m10541_ParameterInfos[] = 
{
	{"object", 0, 134224670, 0, &Object_t_0_0_0},
	{"method", 1, 134224671, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Runtime.Remoting.Messaging.HeaderHandler::.ctor(System.Object,System.IntPtr)
extern const MethodInfo HeaderHandler__ctor_m10541_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&HeaderHandler__ctor_m10541/* method */
	, &HeaderHandler_t1890_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_IntPtr_t/* invoker_method */
	, HeaderHandler_t1890_HeaderHandler__ctor_m10541_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5572/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType HeaderU5BU5D_t1889_0_0_0;
extern const Il2CppType HeaderU5BU5D_t1889_0_0_0;
static const ParameterInfo HeaderHandler_t1890_HeaderHandler_Invoke_m10542_ParameterInfos[] = 
{
	{"headers", 0, 134224672, 0, &HeaderU5BU5D_t1889_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Messaging.HeaderHandler::Invoke(System.Runtime.Remoting.Messaging.Header[])
extern const MethodInfo HeaderHandler_Invoke_m10542_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&HeaderHandler_Invoke_m10542/* method */
	, &HeaderHandler_t1890_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, HeaderHandler_t1890_HeaderHandler_Invoke_m10542_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5573/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType HeaderU5BU5D_t1889_0_0_0;
extern const Il2CppType AsyncCallback_t224_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo HeaderHandler_t1890_HeaderHandler_BeginInvoke_m10543_ParameterInfos[] = 
{
	{"headers", 0, 134224673, 0, &HeaderU5BU5D_t1889_0_0_0},
	{"callback", 1, 134224674, 0, &AsyncCallback_t224_0_0_0},
	{"object", 2, 134224675, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Runtime.Remoting.Messaging.HeaderHandler::BeginInvoke(System.Runtime.Remoting.Messaging.Header[],System.AsyncCallback,System.Object)
extern const MethodInfo HeaderHandler_BeginInvoke_m10543_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&HeaderHandler_BeginInvoke_m10543/* method */
	, &HeaderHandler_t1890_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t223_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, HeaderHandler_t1890_HeaderHandler_BeginInvoke_m10543_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5574/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t223_0_0_0;
static const ParameterInfo HeaderHandler_t1890_HeaderHandler_EndInvoke_m10544_ParameterInfos[] = 
{
	{"result", 0, 134224676, 0, &IAsyncResult_t223_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Runtime.Remoting.Messaging.HeaderHandler::EndInvoke(System.IAsyncResult)
extern const MethodInfo HeaderHandler_EndInvoke_m10544_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&HeaderHandler_EndInvoke_m10544/* method */
	, &HeaderHandler_t1890_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, HeaderHandler_t1890_HeaderHandler_EndInvoke_m10544_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5575/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* HeaderHandler_t1890_MethodInfos[] =
{
	&HeaderHandler__ctor_m10541_MethodInfo,
	&HeaderHandler_Invoke_m10542_MethodInfo,
	&HeaderHandler_BeginInvoke_m10543_MethodInfo,
	&HeaderHandler_EndInvoke_m10544_MethodInfo,
	NULL
};
extern const MethodInfo HeaderHandler_Invoke_m10542_MethodInfo;
extern const MethodInfo HeaderHandler_BeginInvoke_m10543_MethodInfo;
extern const MethodInfo HeaderHandler_EndInvoke_m10544_MethodInfo;
static const Il2CppMethodReference HeaderHandler_t1890_VTable[] =
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
	&HeaderHandler_Invoke_m10542_MethodInfo,
	&HeaderHandler_BeginInvoke_m10543_MethodInfo,
	&HeaderHandler_EndInvoke_m10544_MethodInfo,
};
static bool HeaderHandler_t1890_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair HeaderHandler_t1890_InterfacesOffsets[] = 
{
	{ &ICloneable_t434_0_0_0, 4},
	{ &ISerializable_t435_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType HeaderHandler_t1890_0_0_0;
extern const Il2CppType HeaderHandler_t1890_1_0_0;
struct HeaderHandler_t1890;
const Il2CppTypeDefinitionMetadata HeaderHandler_t1890_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, HeaderHandler_t1890_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t226_0_0_0/* parent */
	, HeaderHandler_t1890_VTable/* vtableMethods */
	, HeaderHandler_t1890_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo HeaderHandler_t1890_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "HeaderHandler"/* name */
	, "System.Runtime.Remoting.Messaging"/* namespaze */
	, HeaderHandler_t1890_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &HeaderHandler_t1890_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 932/* custom_attributes_cache */
	, &HeaderHandler_t1890_0_0_0/* byval_arg */
	, &HeaderHandler_t1890_1_0_0/* this_arg */
	, &HeaderHandler_t1890_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_HeaderHandler_t1890/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (HeaderHandler_t1890)/* instance_size */
	, sizeof (HeaderHandler_t1890)/* actualSize */
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
// Metadata Definition System.Action`1
extern TypeInfo Action_1_t2022_il2cpp_TypeInfo;
extern const Il2CppGenericContainer Action_1_t2022_Il2CppGenericContainer;
extern TypeInfo Action_1_t2022_gp_T_0_il2cpp_TypeInfo;
extern const Il2CppGenericParameter Action_1_t2022_gp_T_0_il2cpp_TypeInfo_GenericParamFull = { &Action_1_t2022_Il2CppGenericContainer, NULL, "T", 0, 0 };
static const Il2CppGenericParameter* Action_1_t2022_Il2CppGenericParametersArray[1] = 
{
	&Action_1_t2022_gp_T_0_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer Action_1_t2022_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&Action_1_t2022_il2cpp_TypeInfo, 1, 0, Action_1_t2022_Il2CppGenericParametersArray };
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo Action_1_t2022_Action_1__ctor_m11210_ParameterInfos[] = 
{
	{"object", 0, 134224677, 0, &Object_t_0_0_0},
	{"method", 1, 134224678, 0, &IntPtr_t_0_0_0},
};
// System.Void System.Action`1::.ctor(System.Object,System.IntPtr)
extern const MethodInfo Action_1__ctor_m11210_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &Action_1_t2022_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Action_1_t2022_Action_1__ctor_m11210_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5576/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Action_1_t2022_gp_0_0_0_0;
extern const Il2CppType Action_1_t2022_gp_0_0_0_0;
static const ParameterInfo Action_1_t2022_Action_1_Invoke_m11211_ParameterInfos[] = 
{
	{"obj", 0, 134224679, 0, &Action_1_t2022_gp_0_0_0_0},
};
// System.Void System.Action`1::Invoke(T)
extern const MethodInfo Action_1_Invoke_m11211_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &Action_1_t2022_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Action_1_t2022_Action_1_Invoke_m11211_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5577/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Action_1_t2022_gp_0_0_0_0;
extern const Il2CppType AsyncCallback_t224_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo Action_1_t2022_Action_1_BeginInvoke_m11212_ParameterInfos[] = 
{
	{"obj", 0, 134224680, 0, &Action_1_t2022_gp_0_0_0_0},
	{"callback", 1, 134224681, 0, &AsyncCallback_t224_0_0_0},
	{"object", 2, 134224682, 0, &Object_t_0_0_0},
};
// System.IAsyncResult System.Action`1::BeginInvoke(T,System.AsyncCallback,System.Object)
extern const MethodInfo Action_1_BeginInvoke_m11212_MethodInfo = 
{
	"BeginInvoke"/* name */
	, NULL/* method */
	, &Action_1_t2022_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t223_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Action_1_t2022_Action_1_BeginInvoke_m11212_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5578/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t223_0_0_0;
static const ParameterInfo Action_1_t2022_Action_1_EndInvoke_m11213_ParameterInfos[] = 
{
	{"result", 0, 134224683, 0, &IAsyncResult_t223_0_0_0},
};
// System.Void System.Action`1::EndInvoke(System.IAsyncResult)
extern const MethodInfo Action_1_EndInvoke_m11213_MethodInfo = 
{
	"EndInvoke"/* name */
	, NULL/* method */
	, &Action_1_t2022_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Action_1_t2022_Action_1_EndInvoke_m11213_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5579/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Action_1_t2022_MethodInfos[] =
{
	&Action_1__ctor_m11210_MethodInfo,
	&Action_1_Invoke_m11211_MethodInfo,
	&Action_1_BeginInvoke_m11212_MethodInfo,
	&Action_1_EndInvoke_m11213_MethodInfo,
	NULL
};
extern const MethodInfo Action_1_Invoke_m11211_MethodInfo;
extern const MethodInfo Action_1_BeginInvoke_m11212_MethodInfo;
extern const MethodInfo Action_1_EndInvoke_m11213_MethodInfo;
static const Il2CppMethodReference Action_1_t2022_VTable[] =
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
	&Action_1_Invoke_m11211_MethodInfo,
	&Action_1_BeginInvoke_m11212_MethodInfo,
	&Action_1_EndInvoke_m11213_MethodInfo,
};
static bool Action_1_t2022_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair Action_1_t2022_InterfacesOffsets[] = 
{
	{ &ICloneable_t434_0_0_0, 4},
	{ &ISerializable_t435_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType Action_1_t2022_0_0_0;
extern const Il2CppType Action_1_t2022_1_0_0;
struct Action_1_t2022;
const Il2CppTypeDefinitionMetadata Action_1_t2022_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, Action_1_t2022_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t226_0_0_0/* parent */
	, Action_1_t2022_VTable/* vtableMethods */
	, Action_1_t2022_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo Action_1_t2022_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Action`1"/* name */
	, "System"/* namespaze */
	, Action_1_t2022_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Action_1_t2022_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Action_1_t2022_0_0_0/* byval_arg */
	, &Action_1_t2022_1_0_0/* this_arg */
	, &Action_1_t2022_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &Action_1_t2022_Il2CppGenericContainer/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, 0/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
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
// System.AppDomainInitializer
#include "mscorlib_System_AppDomainInitializer.h"
// Metadata Definition System.AppDomainInitializer
extern TypeInfo AppDomainInitializer_t1821_il2cpp_TypeInfo;
// System.AppDomainInitializer
#include "mscorlib_System_AppDomainInitializerMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo AppDomainInitializer_t1821_AppDomainInitializer__ctor_m10545_ParameterInfos[] = 
{
	{"object", 0, 134224684, 0, &Object_t_0_0_0},
	{"method", 1, 134224685, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.AppDomainInitializer::.ctor(System.Object,System.IntPtr)
extern const MethodInfo AppDomainInitializer__ctor_m10545_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AppDomainInitializer__ctor_m10545/* method */
	, &AppDomainInitializer_t1821_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_IntPtr_t/* invoker_method */
	, AppDomainInitializer_t1821_AppDomainInitializer__ctor_m10545_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5580/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType StringU5BU5D_t48_0_0_0;
static const ParameterInfo AppDomainInitializer_t1821_AppDomainInitializer_Invoke_m10546_ParameterInfos[] = 
{
	{"args", 0, 134224686, 0, &StringU5BU5D_t48_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.AppDomainInitializer::Invoke(System.String[])
extern const MethodInfo AppDomainInitializer_Invoke_m10546_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&AppDomainInitializer_Invoke_m10546/* method */
	, &AppDomainInitializer_t1821_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, AppDomainInitializer_t1821_AppDomainInitializer_Invoke_m10546_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5581/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType StringU5BU5D_t48_0_0_0;
extern const Il2CppType AsyncCallback_t224_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo AppDomainInitializer_t1821_AppDomainInitializer_BeginInvoke_m10547_ParameterInfos[] = 
{
	{"args", 0, 134224687, 0, &StringU5BU5D_t48_0_0_0},
	{"callback", 1, 134224688, 0, &AsyncCallback_t224_0_0_0},
	{"object", 2, 134224689, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.AppDomainInitializer::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
extern const MethodInfo AppDomainInitializer_BeginInvoke_m10547_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&AppDomainInitializer_BeginInvoke_m10547/* method */
	, &AppDomainInitializer_t1821_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t223_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, AppDomainInitializer_t1821_AppDomainInitializer_BeginInvoke_m10547_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5582/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t223_0_0_0;
static const ParameterInfo AppDomainInitializer_t1821_AppDomainInitializer_EndInvoke_m10548_ParameterInfos[] = 
{
	{"result", 0, 134224690, 0, &IAsyncResult_t223_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.AppDomainInitializer::EndInvoke(System.IAsyncResult)
extern const MethodInfo AppDomainInitializer_EndInvoke_m10548_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&AppDomainInitializer_EndInvoke_m10548/* method */
	, &AppDomainInitializer_t1821_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, AppDomainInitializer_t1821_AppDomainInitializer_EndInvoke_m10548_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5583/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* AppDomainInitializer_t1821_MethodInfos[] =
{
	&AppDomainInitializer__ctor_m10545_MethodInfo,
	&AppDomainInitializer_Invoke_m10546_MethodInfo,
	&AppDomainInitializer_BeginInvoke_m10547_MethodInfo,
	&AppDomainInitializer_EndInvoke_m10548_MethodInfo,
	NULL
};
extern const MethodInfo AppDomainInitializer_Invoke_m10546_MethodInfo;
extern const MethodInfo AppDomainInitializer_BeginInvoke_m10547_MethodInfo;
extern const MethodInfo AppDomainInitializer_EndInvoke_m10548_MethodInfo;
static const Il2CppMethodReference AppDomainInitializer_t1821_VTable[] =
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
	&AppDomainInitializer_Invoke_m10546_MethodInfo,
	&AppDomainInitializer_BeginInvoke_m10547_MethodInfo,
	&AppDomainInitializer_EndInvoke_m10548_MethodInfo,
};
static bool AppDomainInitializer_t1821_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair AppDomainInitializer_t1821_InterfacesOffsets[] = 
{
	{ &ICloneable_t434_0_0_0, 4},
	{ &ISerializable_t435_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType AppDomainInitializer_t1821_0_0_0;
extern const Il2CppType AppDomainInitializer_t1821_1_0_0;
struct AppDomainInitializer_t1821;
const Il2CppTypeDefinitionMetadata AppDomainInitializer_t1821_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, AppDomainInitializer_t1821_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t226_0_0_0/* parent */
	, AppDomainInitializer_t1821_VTable/* vtableMethods */
	, AppDomainInitializer_t1821_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo AppDomainInitializer_t1821_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "AppDomainInitializer"/* name */
	, "System"/* namespaze */
	, AppDomainInitializer_t1821_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &AppDomainInitializer_t1821_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 933/* custom_attributes_cache */
	, &AppDomainInitializer_t1821_0_0_0/* byval_arg */
	, &AppDomainInitializer_t1821_1_0_0/* this_arg */
	, &AppDomainInitializer_t1821_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_AppDomainInitializer_t1821/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (AppDomainInitializer_t1821)/* instance_size */
	, sizeof (AppDomainInitializer_t1821)/* actualSize */
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
// System.AssemblyLoadEventHandler
#include "mscorlib_System_AssemblyLoadEventHandler.h"
// Metadata Definition System.AssemblyLoadEventHandler
extern TypeInfo AssemblyLoadEventHandler_t1817_il2cpp_TypeInfo;
// System.AssemblyLoadEventHandler
#include "mscorlib_System_AssemblyLoadEventHandlerMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo AssemblyLoadEventHandler_t1817_AssemblyLoadEventHandler__ctor_m10549_ParameterInfos[] = 
{
	{"object", 0, 134224691, 0, &Object_t_0_0_0},
	{"method", 1, 134224692, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.AssemblyLoadEventHandler::.ctor(System.Object,System.IntPtr)
extern const MethodInfo AssemblyLoadEventHandler__ctor_m10549_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AssemblyLoadEventHandler__ctor_m10549/* method */
	, &AssemblyLoadEventHandler_t1817_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_IntPtr_t/* invoker_method */
	, AssemblyLoadEventHandler_t1817_AssemblyLoadEventHandler__ctor_m10549_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5584/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType AssemblyLoadEventArgs_t1825_0_0_0;
extern const Il2CppType AssemblyLoadEventArgs_t1825_0_0_0;
static const ParameterInfo AssemblyLoadEventHandler_t1817_AssemblyLoadEventHandler_Invoke_m10550_ParameterInfos[] = 
{
	{"sender", 0, 134224693, 0, &Object_t_0_0_0},
	{"args", 1, 134224694, 0, &AssemblyLoadEventArgs_t1825_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.AssemblyLoadEventHandler::Invoke(System.Object,System.AssemblyLoadEventArgs)
extern const MethodInfo AssemblyLoadEventHandler_Invoke_m10550_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&AssemblyLoadEventHandler_Invoke_m10550/* method */
	, &AssemblyLoadEventHandler_t1817_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Object_t/* invoker_method */
	, AssemblyLoadEventHandler_t1817_AssemblyLoadEventHandler_Invoke_m10550_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5585/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType AssemblyLoadEventArgs_t1825_0_0_0;
extern const Il2CppType AsyncCallback_t224_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo AssemblyLoadEventHandler_t1817_AssemblyLoadEventHandler_BeginInvoke_m10551_ParameterInfos[] = 
{
	{"sender", 0, 134224695, 0, &Object_t_0_0_0},
	{"args", 1, 134224696, 0, &AssemblyLoadEventArgs_t1825_0_0_0},
	{"callback", 2, 134224697, 0, &AsyncCallback_t224_0_0_0},
	{"object", 3, 134224698, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.AssemblyLoadEventHandler::BeginInvoke(System.Object,System.AssemblyLoadEventArgs,System.AsyncCallback,System.Object)
extern const MethodInfo AssemblyLoadEventHandler_BeginInvoke_m10551_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&AssemblyLoadEventHandler_BeginInvoke_m10551/* method */
	, &AssemblyLoadEventHandler_t1817_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t223_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, AssemblyLoadEventHandler_t1817_AssemblyLoadEventHandler_BeginInvoke_m10551_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5586/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t223_0_0_0;
static const ParameterInfo AssemblyLoadEventHandler_t1817_AssemblyLoadEventHandler_EndInvoke_m10552_ParameterInfos[] = 
{
	{"result", 0, 134224699, 0, &IAsyncResult_t223_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.AssemblyLoadEventHandler::EndInvoke(System.IAsyncResult)
extern const MethodInfo AssemblyLoadEventHandler_EndInvoke_m10552_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&AssemblyLoadEventHandler_EndInvoke_m10552/* method */
	, &AssemblyLoadEventHandler_t1817_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, AssemblyLoadEventHandler_t1817_AssemblyLoadEventHandler_EndInvoke_m10552_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5587/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* AssemblyLoadEventHandler_t1817_MethodInfos[] =
{
	&AssemblyLoadEventHandler__ctor_m10549_MethodInfo,
	&AssemblyLoadEventHandler_Invoke_m10550_MethodInfo,
	&AssemblyLoadEventHandler_BeginInvoke_m10551_MethodInfo,
	&AssemblyLoadEventHandler_EndInvoke_m10552_MethodInfo,
	NULL
};
extern const MethodInfo AssemblyLoadEventHandler_Invoke_m10550_MethodInfo;
extern const MethodInfo AssemblyLoadEventHandler_BeginInvoke_m10551_MethodInfo;
extern const MethodInfo AssemblyLoadEventHandler_EndInvoke_m10552_MethodInfo;
static const Il2CppMethodReference AssemblyLoadEventHandler_t1817_VTable[] =
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
	&AssemblyLoadEventHandler_Invoke_m10550_MethodInfo,
	&AssemblyLoadEventHandler_BeginInvoke_m10551_MethodInfo,
	&AssemblyLoadEventHandler_EndInvoke_m10552_MethodInfo,
};
static bool AssemblyLoadEventHandler_t1817_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair AssemblyLoadEventHandler_t1817_InterfacesOffsets[] = 
{
	{ &ICloneable_t434_0_0_0, 4},
	{ &ISerializable_t435_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType AssemblyLoadEventHandler_t1817_0_0_0;
extern const Il2CppType AssemblyLoadEventHandler_t1817_1_0_0;
struct AssemblyLoadEventHandler_t1817;
const Il2CppTypeDefinitionMetadata AssemblyLoadEventHandler_t1817_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, AssemblyLoadEventHandler_t1817_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t226_0_0_0/* parent */
	, AssemblyLoadEventHandler_t1817_VTable/* vtableMethods */
	, AssemblyLoadEventHandler_t1817_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo AssemblyLoadEventHandler_t1817_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "AssemblyLoadEventHandler"/* name */
	, "System"/* namespaze */
	, AssemblyLoadEventHandler_t1817_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &AssemblyLoadEventHandler_t1817_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 934/* custom_attributes_cache */
	, &AssemblyLoadEventHandler_t1817_0_0_0/* byval_arg */
	, &AssemblyLoadEventHandler_t1817_1_0_0/* this_arg */
	, &AssemblyLoadEventHandler_t1817_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_AssemblyLoadEventHandler_t1817/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (AssemblyLoadEventHandler_t1817)/* instance_size */
	, sizeof (AssemblyLoadEventHandler_t1817)/* actualSize */
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
// Metadata Definition System.Comparison`1
extern TypeInfo Comparison_1_t2023_il2cpp_TypeInfo;
extern const Il2CppGenericContainer Comparison_1_t2023_Il2CppGenericContainer;
extern TypeInfo Comparison_1_t2023_gp_T_0_il2cpp_TypeInfo;
extern const Il2CppGenericParameter Comparison_1_t2023_gp_T_0_il2cpp_TypeInfo_GenericParamFull = { &Comparison_1_t2023_Il2CppGenericContainer, NULL, "T", 0, 0 };
static const Il2CppGenericParameter* Comparison_1_t2023_Il2CppGenericParametersArray[1] = 
{
	&Comparison_1_t2023_gp_T_0_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer Comparison_1_t2023_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&Comparison_1_t2023_il2cpp_TypeInfo, 1, 0, Comparison_1_t2023_Il2CppGenericParametersArray };
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo Comparison_1_t2023_Comparison_1__ctor_m11214_ParameterInfos[] = 
{
	{"object", 0, 134224700, 0, &Object_t_0_0_0},
	{"method", 1, 134224701, 0, &IntPtr_t_0_0_0},
};
// System.Void System.Comparison`1::.ctor(System.Object,System.IntPtr)
extern const MethodInfo Comparison_1__ctor_m11214_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &Comparison_1_t2023_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Comparison_1_t2023_Comparison_1__ctor_m11214_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5588/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Comparison_1_t2023_gp_0_0_0_0;
extern const Il2CppType Comparison_1_t2023_gp_0_0_0_0;
extern const Il2CppType Comparison_1_t2023_gp_0_0_0_0;
static const ParameterInfo Comparison_1_t2023_Comparison_1_Invoke_m11215_ParameterInfos[] = 
{
	{"x", 0, 134224702, 0, &Comparison_1_t2023_gp_0_0_0_0},
	{"y", 1, 134224703, 0, &Comparison_1_t2023_gp_0_0_0_0},
};
// System.Int32 System.Comparison`1::Invoke(T,T)
extern const MethodInfo Comparison_1_Invoke_m11215_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &Comparison_1_t2023_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Comparison_1_t2023_Comparison_1_Invoke_m11215_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5589/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Comparison_1_t2023_gp_0_0_0_0;
extern const Il2CppType Comparison_1_t2023_gp_0_0_0_0;
extern const Il2CppType AsyncCallback_t224_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo Comparison_1_t2023_Comparison_1_BeginInvoke_m11216_ParameterInfos[] = 
{
	{"x", 0, 134224704, 0, &Comparison_1_t2023_gp_0_0_0_0},
	{"y", 1, 134224705, 0, &Comparison_1_t2023_gp_0_0_0_0},
	{"callback", 2, 134224706, 0, &AsyncCallback_t224_0_0_0},
	{"object", 3, 134224707, 0, &Object_t_0_0_0},
};
// System.IAsyncResult System.Comparison`1::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern const MethodInfo Comparison_1_BeginInvoke_m11216_MethodInfo = 
{
	"BeginInvoke"/* name */
	, NULL/* method */
	, &Comparison_1_t2023_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t223_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Comparison_1_t2023_Comparison_1_BeginInvoke_m11216_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5590/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t223_0_0_0;
static const ParameterInfo Comparison_1_t2023_Comparison_1_EndInvoke_m11217_ParameterInfos[] = 
{
	{"result", 0, 134224708, 0, &IAsyncResult_t223_0_0_0},
};
// System.Int32 System.Comparison`1::EndInvoke(System.IAsyncResult)
extern const MethodInfo Comparison_1_EndInvoke_m11217_MethodInfo = 
{
	"EndInvoke"/* name */
	, NULL/* method */
	, &Comparison_1_t2023_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t75_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Comparison_1_t2023_Comparison_1_EndInvoke_m11217_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5591/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Comparison_1_t2023_MethodInfos[] =
{
	&Comparison_1__ctor_m11214_MethodInfo,
	&Comparison_1_Invoke_m11215_MethodInfo,
	&Comparison_1_BeginInvoke_m11216_MethodInfo,
	&Comparison_1_EndInvoke_m11217_MethodInfo,
	NULL
};
extern const MethodInfo Comparison_1_Invoke_m11215_MethodInfo;
extern const MethodInfo Comparison_1_BeginInvoke_m11216_MethodInfo;
extern const MethodInfo Comparison_1_EndInvoke_m11217_MethodInfo;
static const Il2CppMethodReference Comparison_1_t2023_VTable[] =
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
	&Comparison_1_Invoke_m11215_MethodInfo,
	&Comparison_1_BeginInvoke_m11216_MethodInfo,
	&Comparison_1_EndInvoke_m11217_MethodInfo,
};
static bool Comparison_1_t2023_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair Comparison_1_t2023_InterfacesOffsets[] = 
{
	{ &ICloneable_t434_0_0_0, 4},
	{ &ISerializable_t435_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType Comparison_1_t2023_0_0_0;
extern const Il2CppType Comparison_1_t2023_1_0_0;
struct Comparison_1_t2023;
const Il2CppTypeDefinitionMetadata Comparison_1_t2023_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, Comparison_1_t2023_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t226_0_0_0/* parent */
	, Comparison_1_t2023_VTable/* vtableMethods */
	, Comparison_1_t2023_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo Comparison_1_t2023_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Comparison`1"/* name */
	, "System"/* namespaze */
	, Comparison_1_t2023_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Comparison_1_t2023_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Comparison_1_t2023_0_0_0/* byval_arg */
	, &Comparison_1_t2023_1_0_0/* this_arg */
	, &Comparison_1_t2023_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &Comparison_1_t2023_Il2CppGenericContainer/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, 0/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
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
// Metadata Definition System.Converter`2
extern TypeInfo Converter_2_t2024_il2cpp_TypeInfo;
extern const Il2CppGenericContainer Converter_2_t2024_Il2CppGenericContainer;
extern TypeInfo Converter_2_t2024_gp_TInput_0_il2cpp_TypeInfo;
extern const Il2CppGenericParameter Converter_2_t2024_gp_TInput_0_il2cpp_TypeInfo_GenericParamFull = { &Converter_2_t2024_Il2CppGenericContainer, NULL, "TInput", 0, 0 };
extern TypeInfo Converter_2_t2024_gp_TOutput_1_il2cpp_TypeInfo;
extern const Il2CppGenericParameter Converter_2_t2024_gp_TOutput_1_il2cpp_TypeInfo_GenericParamFull = { &Converter_2_t2024_Il2CppGenericContainer, NULL, "TOutput", 1, 0 };
static const Il2CppGenericParameter* Converter_2_t2024_Il2CppGenericParametersArray[2] = 
{
	&Converter_2_t2024_gp_TInput_0_il2cpp_TypeInfo_GenericParamFull,
	&Converter_2_t2024_gp_TOutput_1_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer Converter_2_t2024_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&Converter_2_t2024_il2cpp_TypeInfo, 2, 0, Converter_2_t2024_Il2CppGenericParametersArray };
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo Converter_2_t2024_Converter_2__ctor_m11218_ParameterInfos[] = 
{
	{"object", 0, 134224709, 0, &Object_t_0_0_0},
	{"method", 1, 134224710, 0, &IntPtr_t_0_0_0},
};
// System.Void System.Converter`2::.ctor(System.Object,System.IntPtr)
extern const MethodInfo Converter_2__ctor_m11218_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &Converter_2_t2024_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Converter_2_t2024_Converter_2__ctor_m11218_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5592/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Converter_2_t2024_gp_0_0_0_0;
extern const Il2CppType Converter_2_t2024_gp_0_0_0_0;
static const ParameterInfo Converter_2_t2024_Converter_2_Invoke_m11219_ParameterInfos[] = 
{
	{"input", 0, 134224711, 0, &Converter_2_t2024_gp_0_0_0_0},
};
extern const Il2CppType Converter_2_t2024_gp_1_0_0_0;
// TOutput System.Converter`2::Invoke(TInput)
extern const MethodInfo Converter_2_Invoke_m11219_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &Converter_2_t2024_il2cpp_TypeInfo/* declaring_type */
	, &Converter_2_t2024_gp_1_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Converter_2_t2024_Converter_2_Invoke_m11219_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5593/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Converter_2_t2024_gp_0_0_0_0;
extern const Il2CppType AsyncCallback_t224_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo Converter_2_t2024_Converter_2_BeginInvoke_m11220_ParameterInfos[] = 
{
	{"input", 0, 134224712, 0, &Converter_2_t2024_gp_0_0_0_0},
	{"callback", 1, 134224713, 0, &AsyncCallback_t224_0_0_0},
	{"object", 2, 134224714, 0, &Object_t_0_0_0},
};
// System.IAsyncResult System.Converter`2::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern const MethodInfo Converter_2_BeginInvoke_m11220_MethodInfo = 
{
	"BeginInvoke"/* name */
	, NULL/* method */
	, &Converter_2_t2024_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t223_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Converter_2_t2024_Converter_2_BeginInvoke_m11220_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5594/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t223_0_0_0;
static const ParameterInfo Converter_2_t2024_Converter_2_EndInvoke_m11221_ParameterInfos[] = 
{
	{"result", 0, 134224715, 0, &IAsyncResult_t223_0_0_0},
};
// TOutput System.Converter`2::EndInvoke(System.IAsyncResult)
extern const MethodInfo Converter_2_EndInvoke_m11221_MethodInfo = 
{
	"EndInvoke"/* name */
	, NULL/* method */
	, &Converter_2_t2024_il2cpp_TypeInfo/* declaring_type */
	, &Converter_2_t2024_gp_1_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Converter_2_t2024_Converter_2_EndInvoke_m11221_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5595/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Converter_2_t2024_MethodInfos[] =
{
	&Converter_2__ctor_m11218_MethodInfo,
	&Converter_2_Invoke_m11219_MethodInfo,
	&Converter_2_BeginInvoke_m11220_MethodInfo,
	&Converter_2_EndInvoke_m11221_MethodInfo,
	NULL
};
extern const MethodInfo Converter_2_Invoke_m11219_MethodInfo;
extern const MethodInfo Converter_2_BeginInvoke_m11220_MethodInfo;
extern const MethodInfo Converter_2_EndInvoke_m11221_MethodInfo;
static const Il2CppMethodReference Converter_2_t2024_VTable[] =
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
	&Converter_2_Invoke_m11219_MethodInfo,
	&Converter_2_BeginInvoke_m11220_MethodInfo,
	&Converter_2_EndInvoke_m11221_MethodInfo,
};
static bool Converter_2_t2024_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair Converter_2_t2024_InterfacesOffsets[] = 
{
	{ &ICloneable_t434_0_0_0, 4},
	{ &ISerializable_t435_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType Converter_2_t2024_0_0_0;
extern const Il2CppType Converter_2_t2024_1_0_0;
struct Converter_2_t2024;
const Il2CppTypeDefinitionMetadata Converter_2_t2024_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, Converter_2_t2024_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t226_0_0_0/* parent */
	, Converter_2_t2024_VTable/* vtableMethods */
	, Converter_2_t2024_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo Converter_2_t2024_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Converter`2"/* name */
	, "System"/* namespaze */
	, Converter_2_t2024_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Converter_2_t2024_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Converter_2_t2024_0_0_0/* byval_arg */
	, &Converter_2_t2024_1_0_0/* this_arg */
	, &Converter_2_t2024_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &Converter_2_t2024_Il2CppGenericContainer/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, 0/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
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
// System.EventHandler
#include "mscorlib_System_EventHandler.h"
// Metadata Definition System.EventHandler
extern TypeInfo EventHandler_t1819_il2cpp_TypeInfo;
// System.EventHandler
#include "mscorlib_System_EventHandlerMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo EventHandler_t1819_EventHandler__ctor_m10553_ParameterInfos[] = 
{
	{"object", 0, 134224716, 0, &Object_t_0_0_0},
	{"method", 1, 134224717, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
extern const MethodInfo EventHandler__ctor_m10553_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&EventHandler__ctor_m10553/* method */
	, &EventHandler_t1819_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_IntPtr_t/* invoker_method */
	, EventHandler_t1819_EventHandler__ctor_m10553_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5596/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType EventArgs_t1251_0_0_0;
static const ParameterInfo EventHandler_t1819_EventHandler_Invoke_m10554_ParameterInfos[] = 
{
	{"sender", 0, 134224718, 0, &Object_t_0_0_0},
	{"e", 1, 134224719, 0, &EventArgs_t1251_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
extern const MethodInfo EventHandler_Invoke_m10554_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&EventHandler_Invoke_m10554/* method */
	, &EventHandler_t1819_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Object_t/* invoker_method */
	, EventHandler_t1819_EventHandler_Invoke_m10554_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5597/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType EventArgs_t1251_0_0_0;
extern const Il2CppType AsyncCallback_t224_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo EventHandler_t1819_EventHandler_BeginInvoke_m10555_ParameterInfos[] = 
{
	{"sender", 0, 134224720, 0, &Object_t_0_0_0},
	{"e", 1, 134224721, 0, &EventArgs_t1251_0_0_0},
	{"callback", 2, 134224722, 0, &AsyncCallback_t224_0_0_0},
	{"object", 3, 134224723, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.EventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
extern const MethodInfo EventHandler_BeginInvoke_m10555_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&EventHandler_BeginInvoke_m10555/* method */
	, &EventHandler_t1819_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t223_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, EventHandler_t1819_EventHandler_BeginInvoke_m10555_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5598/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t223_0_0_0;
static const ParameterInfo EventHandler_t1819_EventHandler_EndInvoke_m10556_ParameterInfos[] = 
{
	{"result", 0, 134224724, 0, &IAsyncResult_t223_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.EventHandler::EndInvoke(System.IAsyncResult)
extern const MethodInfo EventHandler_EndInvoke_m10556_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&EventHandler_EndInvoke_m10556/* method */
	, &EventHandler_t1819_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, EventHandler_t1819_EventHandler_EndInvoke_m10556_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5599/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* EventHandler_t1819_MethodInfos[] =
{
	&EventHandler__ctor_m10553_MethodInfo,
	&EventHandler_Invoke_m10554_MethodInfo,
	&EventHandler_BeginInvoke_m10555_MethodInfo,
	&EventHandler_EndInvoke_m10556_MethodInfo,
	NULL
};
extern const MethodInfo EventHandler_Invoke_m10554_MethodInfo;
extern const MethodInfo EventHandler_BeginInvoke_m10555_MethodInfo;
extern const MethodInfo EventHandler_EndInvoke_m10556_MethodInfo;
static const Il2CppMethodReference EventHandler_t1819_VTable[] =
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
	&EventHandler_Invoke_m10554_MethodInfo,
	&EventHandler_BeginInvoke_m10555_MethodInfo,
	&EventHandler_EndInvoke_m10556_MethodInfo,
};
static bool EventHandler_t1819_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair EventHandler_t1819_InterfacesOffsets[] = 
{
	{ &ICloneable_t434_0_0_0, 4},
	{ &ISerializable_t435_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType EventHandler_t1819_0_0_0;
extern const Il2CppType EventHandler_t1819_1_0_0;
struct EventHandler_t1819;
const Il2CppTypeDefinitionMetadata EventHandler_t1819_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, EventHandler_t1819_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t226_0_0_0/* parent */
	, EventHandler_t1819_VTable/* vtableMethods */
	, EventHandler_t1819_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo EventHandler_t1819_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "EventHandler"/* name */
	, "System"/* namespaze */
	, EventHandler_t1819_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &EventHandler_t1819_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 935/* custom_attributes_cache */
	, &EventHandler_t1819_0_0_0/* byval_arg */
	, &EventHandler_t1819_1_0_0/* this_arg */
	, &EventHandler_t1819_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_EventHandler_t1819/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (EventHandler_t1819)/* instance_size */
	, sizeof (EventHandler_t1819)/* actualSize */
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
// Metadata Definition System.Predicate`1
extern TypeInfo Predicate_1_t2025_il2cpp_TypeInfo;
extern const Il2CppGenericContainer Predicate_1_t2025_Il2CppGenericContainer;
extern TypeInfo Predicate_1_t2025_gp_T_0_il2cpp_TypeInfo;
extern const Il2CppGenericParameter Predicate_1_t2025_gp_T_0_il2cpp_TypeInfo_GenericParamFull = { &Predicate_1_t2025_Il2CppGenericContainer, NULL, "T", 0, 0 };
static const Il2CppGenericParameter* Predicate_1_t2025_Il2CppGenericParametersArray[1] = 
{
	&Predicate_1_t2025_gp_T_0_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer Predicate_1_t2025_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&Predicate_1_t2025_il2cpp_TypeInfo, 1, 0, Predicate_1_t2025_Il2CppGenericParametersArray };
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo Predicate_1_t2025_Predicate_1__ctor_m11222_ParameterInfos[] = 
{
	{"object", 0, 134224725, 0, &Object_t_0_0_0},
	{"method", 1, 134224726, 0, &IntPtr_t_0_0_0},
};
// System.Void System.Predicate`1::.ctor(System.Object,System.IntPtr)
extern const MethodInfo Predicate_1__ctor_m11222_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &Predicate_1_t2025_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Predicate_1_t2025_Predicate_1__ctor_m11222_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5600/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Predicate_1_t2025_gp_0_0_0_0;
extern const Il2CppType Predicate_1_t2025_gp_0_0_0_0;
static const ParameterInfo Predicate_1_t2025_Predicate_1_Invoke_m11223_ParameterInfos[] = 
{
	{"obj", 0, 134224727, 0, &Predicate_1_t2025_gp_0_0_0_0},
};
// System.Boolean System.Predicate`1::Invoke(T)
extern const MethodInfo Predicate_1_Invoke_m11223_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &Predicate_1_t2025_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Predicate_1_t2025_Predicate_1_Invoke_m11223_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5601/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Predicate_1_t2025_gp_0_0_0_0;
extern const Il2CppType AsyncCallback_t224_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo Predicate_1_t2025_Predicate_1_BeginInvoke_m11224_ParameterInfos[] = 
{
	{"obj", 0, 134224728, 0, &Predicate_1_t2025_gp_0_0_0_0},
	{"callback", 1, 134224729, 0, &AsyncCallback_t224_0_0_0},
	{"object", 2, 134224730, 0, &Object_t_0_0_0},
};
// System.IAsyncResult System.Predicate`1::BeginInvoke(T,System.AsyncCallback,System.Object)
extern const MethodInfo Predicate_1_BeginInvoke_m11224_MethodInfo = 
{
	"BeginInvoke"/* name */
	, NULL/* method */
	, &Predicate_1_t2025_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t223_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Predicate_1_t2025_Predicate_1_BeginInvoke_m11224_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5602/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t223_0_0_0;
static const ParameterInfo Predicate_1_t2025_Predicate_1_EndInvoke_m11225_ParameterInfos[] = 
{
	{"result", 0, 134224731, 0, &IAsyncResult_t223_0_0_0},
};
// System.Boolean System.Predicate`1::EndInvoke(System.IAsyncResult)
extern const MethodInfo Predicate_1_EndInvoke_m11225_MethodInfo = 
{
	"EndInvoke"/* name */
	, NULL/* method */
	, &Predicate_1_t2025_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t111_0_0_0/* return_type */
	, NULL/* invoker_method */
	, Predicate_1_t2025_Predicate_1_EndInvoke_m11225_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5603/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Predicate_1_t2025_MethodInfos[] =
{
	&Predicate_1__ctor_m11222_MethodInfo,
	&Predicate_1_Invoke_m11223_MethodInfo,
	&Predicate_1_BeginInvoke_m11224_MethodInfo,
	&Predicate_1_EndInvoke_m11225_MethodInfo,
	NULL
};
extern const MethodInfo Predicate_1_Invoke_m11223_MethodInfo;
extern const MethodInfo Predicate_1_BeginInvoke_m11224_MethodInfo;
extern const MethodInfo Predicate_1_EndInvoke_m11225_MethodInfo;
static const Il2CppMethodReference Predicate_1_t2025_VTable[] =
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
	&Predicate_1_Invoke_m11223_MethodInfo,
	&Predicate_1_BeginInvoke_m11224_MethodInfo,
	&Predicate_1_EndInvoke_m11225_MethodInfo,
};
static bool Predicate_1_t2025_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair Predicate_1_t2025_InterfacesOffsets[] = 
{
	{ &ICloneable_t434_0_0_0, 4},
	{ &ISerializable_t435_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType Predicate_1_t2025_0_0_0;
extern const Il2CppType Predicate_1_t2025_1_0_0;
struct Predicate_1_t2025;
const Il2CppTypeDefinitionMetadata Predicate_1_t2025_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, Predicate_1_t2025_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t226_0_0_0/* parent */
	, Predicate_1_t2025_VTable/* vtableMethods */
	, Predicate_1_t2025_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo Predicate_1_t2025_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Predicate`1"/* name */
	, "System"/* namespaze */
	, Predicate_1_t2025_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Predicate_1_t2025_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Predicate_1_t2025_0_0_0/* byval_arg */
	, &Predicate_1_t2025_1_0_0/* this_arg */
	, &Predicate_1_t2025_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &Predicate_1_t2025_Il2CppGenericContainer/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, 0/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
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
// System.ResolveEventHandler
#include "mscorlib_System_ResolveEventHandler.h"
// Metadata Definition System.ResolveEventHandler
extern TypeInfo ResolveEventHandler_t1818_il2cpp_TypeInfo;
// System.ResolveEventHandler
#include "mscorlib_System_ResolveEventHandlerMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo ResolveEventHandler_t1818_ResolveEventHandler__ctor_m10557_ParameterInfos[] = 
{
	{"object", 0, 134224732, 0, &Object_t_0_0_0},
	{"method", 1, 134224733, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern const MethodInfo ResolveEventHandler__ctor_m10557_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ResolveEventHandler__ctor_m10557/* method */
	, &ResolveEventHandler_t1818_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_IntPtr_t/* invoker_method */
	, ResolveEventHandler_t1818_ResolveEventHandler__ctor_m10557_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5604/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType ResolveEventArgs_t1873_0_0_0;
static const ParameterInfo ResolveEventHandler_t1818_ResolveEventHandler_Invoke_m10558_ParameterInfos[] = 
{
	{"sender", 0, 134224734, 0, &Object_t_0_0_0},
	{"args", 1, 134224735, 0, &ResolveEventArgs_t1873_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern const MethodInfo ResolveEventHandler_Invoke_m10558_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&ResolveEventHandler_Invoke_m10558/* method */
	, &ResolveEventHandler_t1818_il2cpp_TypeInfo/* declaring_type */
	, &Assembly_t1177_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, ResolveEventHandler_t1818_ResolveEventHandler_Invoke_m10558_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5605/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType ResolveEventArgs_t1873_0_0_0;
extern const Il2CppType AsyncCallback_t224_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo ResolveEventHandler_t1818_ResolveEventHandler_BeginInvoke_m10559_ParameterInfos[] = 
{
	{"sender", 0, 134224736, 0, &Object_t_0_0_0},
	{"args", 1, 134224737, 0, &ResolveEventArgs_t1873_0_0_0},
	{"callback", 2, 134224738, 0, &AsyncCallback_t224_0_0_0},
	{"object", 3, 134224739, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern const MethodInfo ResolveEventHandler_BeginInvoke_m10559_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&ResolveEventHandler_BeginInvoke_m10559/* method */
	, &ResolveEventHandler_t1818_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t223_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, ResolveEventHandler_t1818_ResolveEventHandler_BeginInvoke_m10559_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5606/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t223_0_0_0;
static const ParameterInfo ResolveEventHandler_t1818_ResolveEventHandler_EndInvoke_m10560_ParameterInfos[] = 
{
	{"result", 0, 134224740, 0, &IAsyncResult_t223_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
extern const MethodInfo ResolveEventHandler_EndInvoke_m10560_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&ResolveEventHandler_EndInvoke_m10560/* method */
	, &ResolveEventHandler_t1818_il2cpp_TypeInfo/* declaring_type */
	, &Assembly_t1177_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ResolveEventHandler_t1818_ResolveEventHandler_EndInvoke_m10560_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5607/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ResolveEventHandler_t1818_MethodInfos[] =
{
	&ResolveEventHandler__ctor_m10557_MethodInfo,
	&ResolveEventHandler_Invoke_m10558_MethodInfo,
	&ResolveEventHandler_BeginInvoke_m10559_MethodInfo,
	&ResolveEventHandler_EndInvoke_m10560_MethodInfo,
	NULL
};
extern const MethodInfo ResolveEventHandler_Invoke_m10558_MethodInfo;
extern const MethodInfo ResolveEventHandler_BeginInvoke_m10559_MethodInfo;
extern const MethodInfo ResolveEventHandler_EndInvoke_m10560_MethodInfo;
static const Il2CppMethodReference ResolveEventHandler_t1818_VTable[] =
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
	&ResolveEventHandler_Invoke_m10558_MethodInfo,
	&ResolveEventHandler_BeginInvoke_m10559_MethodInfo,
	&ResolveEventHandler_EndInvoke_m10560_MethodInfo,
};
static bool ResolveEventHandler_t1818_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair ResolveEventHandler_t1818_InterfacesOffsets[] = 
{
	{ &ICloneable_t434_0_0_0, 4},
	{ &ISerializable_t435_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType ResolveEventHandler_t1818_0_0_0;
extern const Il2CppType ResolveEventHandler_t1818_1_0_0;
struct ResolveEventHandler_t1818;
const Il2CppTypeDefinitionMetadata ResolveEventHandler_t1818_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, ResolveEventHandler_t1818_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t226_0_0_0/* parent */
	, ResolveEventHandler_t1818_VTable/* vtableMethods */
	, ResolveEventHandler_t1818_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ResolveEventHandler_t1818_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ResolveEventHandler"/* name */
	, "System"/* namespaze */
	, ResolveEventHandler_t1818_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ResolveEventHandler_t1818_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 936/* custom_attributes_cache */
	, &ResolveEventHandler_t1818_0_0_0/* byval_arg */
	, &ResolveEventHandler_t1818_1_0_0/* this_arg */
	, &ResolveEventHandler_t1818_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_ResolveEventHandler_t1818/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ResolveEventHandler_t1818)/* instance_size */
	, sizeof (ResolveEventHandler_t1818)/* actualSize */
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
// System.UnhandledExceptionEventHandler
#include "mscorlib_System_UnhandledExceptionEventHandler.h"
// Metadata Definition System.UnhandledExceptionEventHandler
extern TypeInfo UnhandledExceptionEventHandler_t1820_il2cpp_TypeInfo;
// System.UnhandledExceptionEventHandler
#include "mscorlib_System_UnhandledExceptionEventHandlerMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo UnhandledExceptionEventHandler_t1820_UnhandledExceptionEventHandler__ctor_m10561_ParameterInfos[] = 
{
	{"object", 0, 134224741, 0, &Object_t_0_0_0},
	{"method", 1, 134224742, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.UnhandledExceptionEventHandler::.ctor(System.Object,System.IntPtr)
extern const MethodInfo UnhandledExceptionEventHandler__ctor_m10561_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnhandledExceptionEventHandler__ctor_m10561/* method */
	, &UnhandledExceptionEventHandler_t1820_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_IntPtr_t/* invoker_method */
	, UnhandledExceptionEventHandler_t1820_UnhandledExceptionEventHandler__ctor_m10561_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5608/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType UnhandledExceptionEventArgs_t1885_0_0_0;
static const ParameterInfo UnhandledExceptionEventHandler_t1820_UnhandledExceptionEventHandler_Invoke_m10562_ParameterInfos[] = 
{
	{"sender", 0, 134224743, 0, &Object_t_0_0_0},
	{"e", 1, 134224744, 0, &UnhandledExceptionEventArgs_t1885_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.UnhandledExceptionEventHandler::Invoke(System.Object,System.UnhandledExceptionEventArgs)
extern const MethodInfo UnhandledExceptionEventHandler_Invoke_m10562_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnhandledExceptionEventHandler_Invoke_m10562/* method */
	, &UnhandledExceptionEventHandler_t1820_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t_Object_t/* invoker_method */
	, UnhandledExceptionEventHandler_t1820_UnhandledExceptionEventHandler_Invoke_m10562_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5609/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType UnhandledExceptionEventArgs_t1885_0_0_0;
extern const Il2CppType AsyncCallback_t224_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo UnhandledExceptionEventHandler_t1820_UnhandledExceptionEventHandler_BeginInvoke_m10563_ParameterInfos[] = 
{
	{"sender", 0, 134224745, 0, &Object_t_0_0_0},
	{"e", 1, 134224746, 0, &UnhandledExceptionEventArgs_t1885_0_0_0},
	{"callback", 2, 134224747, 0, &AsyncCallback_t224_0_0_0},
	{"object", 3, 134224748, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.UnhandledExceptionEventHandler::BeginInvoke(System.Object,System.UnhandledExceptionEventArgs,System.AsyncCallback,System.Object)
extern const MethodInfo UnhandledExceptionEventHandler_BeginInvoke_m10563_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnhandledExceptionEventHandler_BeginInvoke_m10563/* method */
	, &UnhandledExceptionEventHandler_t1820_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t223_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnhandledExceptionEventHandler_t1820_UnhandledExceptionEventHandler_BeginInvoke_m10563_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5610/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t223_0_0_0;
static const ParameterInfo UnhandledExceptionEventHandler_t1820_UnhandledExceptionEventHandler_EndInvoke_m10564_ParameterInfos[] = 
{
	{"result", 0, 134224749, 0, &IAsyncResult_t223_0_0_0},
};
extern void* RuntimeInvoker_Void_t110_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.UnhandledExceptionEventHandler::EndInvoke(System.IAsyncResult)
extern const MethodInfo UnhandledExceptionEventHandler_EndInvoke_m10564_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnhandledExceptionEventHandler_EndInvoke_m10564/* method */
	, &UnhandledExceptionEventHandler_t1820_il2cpp_TypeInfo/* declaring_type */
	, &Void_t110_0_0_0/* return_type */
	, RuntimeInvoker_Void_t110_Object_t/* invoker_method */
	, UnhandledExceptionEventHandler_t1820_UnhandledExceptionEventHandler_EndInvoke_m10564_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5611/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* UnhandledExceptionEventHandler_t1820_MethodInfos[] =
{
	&UnhandledExceptionEventHandler__ctor_m10561_MethodInfo,
	&UnhandledExceptionEventHandler_Invoke_m10562_MethodInfo,
	&UnhandledExceptionEventHandler_BeginInvoke_m10563_MethodInfo,
	&UnhandledExceptionEventHandler_EndInvoke_m10564_MethodInfo,
	NULL
};
extern const MethodInfo UnhandledExceptionEventHandler_Invoke_m10562_MethodInfo;
extern const MethodInfo UnhandledExceptionEventHandler_BeginInvoke_m10563_MethodInfo;
extern const MethodInfo UnhandledExceptionEventHandler_EndInvoke_m10564_MethodInfo;
static const Il2CppMethodReference UnhandledExceptionEventHandler_t1820_VTable[] =
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
	&UnhandledExceptionEventHandler_Invoke_m10562_MethodInfo,
	&UnhandledExceptionEventHandler_BeginInvoke_m10563_MethodInfo,
	&UnhandledExceptionEventHandler_EndInvoke_m10564_MethodInfo,
};
static bool UnhandledExceptionEventHandler_t1820_VTableIsGenericMethod[] =
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
static Il2CppInterfaceOffsetPair UnhandledExceptionEventHandler_t1820_InterfacesOffsets[] = 
{
	{ &ICloneable_t434_0_0_0, 4},
	{ &ISerializable_t435_0_0_0, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType UnhandledExceptionEventHandler_t1820_0_0_0;
extern const Il2CppType UnhandledExceptionEventHandler_t1820_1_0_0;
struct UnhandledExceptionEventHandler_t1820;
const Il2CppTypeDefinitionMetadata UnhandledExceptionEventHandler_t1820_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, UnhandledExceptionEventHandler_t1820_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t226_0_0_0/* parent */
	, UnhandledExceptionEventHandler_t1820_VTable/* vtableMethods */
	, UnhandledExceptionEventHandler_t1820_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo UnhandledExceptionEventHandler_t1820_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnhandledExceptionEventHandler"/* name */
	, "System"/* namespaze */
	, UnhandledExceptionEventHandler_t1820_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &UnhandledExceptionEventHandler_t1820_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 937/* custom_attributes_cache */
	, &UnhandledExceptionEventHandler_t1820_0_0_0/* byval_arg */
	, &UnhandledExceptionEventHandler_t1820_1_0_0/* this_arg */
	, &UnhandledExceptionEventHandler_t1820_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_UnhandledExceptionEventHandler_t1820/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnhandledExceptionEventHandler_t1820)/* instance_size */
	, sizeof (UnhandledExceptionEventHandler_t1820)/* actualSize */
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
// <PrivateImplementationDetails>/$ArrayType$56
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$56
extern TypeInfo U24ArrayTypeU2456_t1891_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$56
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2456_t1891_MethodInfos[] =
{
	NULL
};
extern const MethodInfo ValueType_Equals_m2220_MethodInfo;
extern const MethodInfo ValueType_GetHashCode_m2221_MethodInfo;
static const Il2CppMethodReference U24ArrayTypeU2456_t1891_VTable[] =
{
	&ValueType_Equals_m2220_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&ValueType_GetHashCode_m2221_MethodInfo,
	&ValueType_ToString_m2224_MethodInfo,
};
static bool U24ArrayTypeU2456_t1891_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2456_t1891_0_0_0;
extern const Il2CppType U24ArrayTypeU2456_t1891_1_0_0;
extern TypeInfo U3CPrivateImplementationDetailsU3E_t1911_il2cpp_TypeInfo;
extern const Il2CppType U3CPrivateImplementationDetailsU3E_t1911_0_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2456_t1891_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t1911_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t446_0_0_0/* parent */
	, U24ArrayTypeU2456_t1891_VTable/* vtableMethods */
	, U24ArrayTypeU2456_t1891_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2456_t1891_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$56"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2456_t1891_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2456_t1891_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2456_t1891_0_0_0/* byval_arg */
	, &U24ArrayTypeU2456_t1891_1_0_0/* this_arg */
	, &U24ArrayTypeU2456_t1891_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2456_t1891_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2456_t1891_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2456_t1891_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2456_t1891)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2456_t1891)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2456_t1891_marshaled)/* native_size */
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
// <PrivateImplementationDetails>/$ArrayType$24
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$24
extern TypeInfo U24ArrayTypeU2424_t1892_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$24
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2424_t1892_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2424_t1892_VTable[] =
{
	&ValueType_Equals_m2220_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&ValueType_GetHashCode_m2221_MethodInfo,
	&ValueType_ToString_m2224_MethodInfo,
};
static bool U24ArrayTypeU2424_t1892_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2424_t1892_0_0_0;
extern const Il2CppType U24ArrayTypeU2424_t1892_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2424_t1892_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t1911_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t446_0_0_0/* parent */
	, U24ArrayTypeU2424_t1892_VTable/* vtableMethods */
	, U24ArrayTypeU2424_t1892_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2424_t1892_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$24"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2424_t1892_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2424_t1892_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2424_t1892_0_0_0/* byval_arg */
	, &U24ArrayTypeU2424_t1892_1_0_0/* this_arg */
	, &U24ArrayTypeU2424_t1892_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2424_t1892_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2424_t1892_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2424_t1892_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2424_t1892)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2424_t1892)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2424_t1892_marshaled)/* native_size */
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
// <PrivateImplementationDetails>/$ArrayType$16
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$16
extern TypeInfo U24ArrayTypeU2416_t1893_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$16
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2416_t1893_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2416_t1893_VTable[] =
{
	&ValueType_Equals_m2220_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&ValueType_GetHashCode_m2221_MethodInfo,
	&ValueType_ToString_m2224_MethodInfo,
};
static bool U24ArrayTypeU2416_t1893_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2416_t1893_0_0_0;
extern const Il2CppType U24ArrayTypeU2416_t1893_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2416_t1893_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t1911_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t446_0_0_0/* parent */
	, U24ArrayTypeU2416_t1893_VTable/* vtableMethods */
	, U24ArrayTypeU2416_t1893_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2416_t1893_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$16"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2416_t1893_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2416_t1893_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2416_t1893_0_0_0/* byval_arg */
	, &U24ArrayTypeU2416_t1893_1_0_0/* this_arg */
	, &U24ArrayTypeU2416_t1893_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2416_t1893_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2416_t1893_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2416_t1893_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2416_t1893)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2416_t1893)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2416_t1893_marshaled)/* native_size */
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
// <PrivateImplementationDetails>/$ArrayType$120
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_0.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$120
extern TypeInfo U24ArrayTypeU24120_t1894_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$120
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_0MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU24120_t1894_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU24120_t1894_VTable[] =
{
	&ValueType_Equals_m2220_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&ValueType_GetHashCode_m2221_MethodInfo,
	&ValueType_ToString_m2224_MethodInfo,
};
static bool U24ArrayTypeU24120_t1894_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU24120_t1894_0_0_0;
extern const Il2CppType U24ArrayTypeU24120_t1894_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU24120_t1894_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t1911_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t446_0_0_0/* parent */
	, U24ArrayTypeU24120_t1894_VTable/* vtableMethods */
	, U24ArrayTypeU24120_t1894_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU24120_t1894_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$120"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU24120_t1894_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU24120_t1894_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU24120_t1894_0_0_0/* byval_arg */
	, &U24ArrayTypeU24120_t1894_1_0_0/* this_arg */
	, &U24ArrayTypeU24120_t1894_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU24120_t1894_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU24120_t1894_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU24120_t1894_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU24120_t1894)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU24120_t1894)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU24120_t1894_marshaled)/* native_size */
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
// <PrivateImplementationDetails>/$ArrayType$3132
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$3132
extern TypeInfo U24ArrayTypeU243132_t1895_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$3132
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU243132_t1895_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU243132_t1895_VTable[] =
{
	&ValueType_Equals_m2220_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&ValueType_GetHashCode_m2221_MethodInfo,
	&ValueType_ToString_m2224_MethodInfo,
};
static bool U24ArrayTypeU243132_t1895_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU243132_t1895_0_0_0;
extern const Il2CppType U24ArrayTypeU243132_t1895_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU243132_t1895_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t1911_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t446_0_0_0/* parent */
	, U24ArrayTypeU243132_t1895_VTable/* vtableMethods */
	, U24ArrayTypeU243132_t1895_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU243132_t1895_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$3132"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU243132_t1895_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU243132_t1895_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU243132_t1895_0_0_0/* byval_arg */
	, &U24ArrayTypeU243132_t1895_1_0_0/* this_arg */
	, &U24ArrayTypeU243132_t1895_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU243132_t1895_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU243132_t1895_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU243132_t1895_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU243132_t1895)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU243132_t1895)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU243132_t1895_marshaled)/* native_size */
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
// <PrivateImplementationDetails>/$ArrayType$20
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_0.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$20
extern TypeInfo U24ArrayTypeU2420_t1896_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$20
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_0MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2420_t1896_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2420_t1896_VTable[] =
{
	&ValueType_Equals_m2220_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&ValueType_GetHashCode_m2221_MethodInfo,
	&ValueType_ToString_m2224_MethodInfo,
};
static bool U24ArrayTypeU2420_t1896_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2420_t1896_0_0_0;
extern const Il2CppType U24ArrayTypeU2420_t1896_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2420_t1896_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t1911_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t446_0_0_0/* parent */
	, U24ArrayTypeU2420_t1896_VTable/* vtableMethods */
	, U24ArrayTypeU2420_t1896_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2420_t1896_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$20"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2420_t1896_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2420_t1896_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2420_t1896_0_0_0/* byval_arg */
	, &U24ArrayTypeU2420_t1896_1_0_0/* this_arg */
	, &U24ArrayTypeU2420_t1896_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2420_t1896_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2420_t1896_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2420_t1896_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2420_t1896)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2420_t1896)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2420_t1896_marshaled)/* native_size */
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
// <PrivateImplementationDetails>/$ArrayType$32
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243_0.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$32
extern TypeInfo U24ArrayTypeU2432_t1897_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$32
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243_0MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2432_t1897_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2432_t1897_VTable[] =
{
	&ValueType_Equals_m2220_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&ValueType_GetHashCode_m2221_MethodInfo,
	&ValueType_ToString_m2224_MethodInfo,
};
static bool U24ArrayTypeU2432_t1897_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2432_t1897_0_0_0;
extern const Il2CppType U24ArrayTypeU2432_t1897_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2432_t1897_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t1911_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t446_0_0_0/* parent */
	, U24ArrayTypeU2432_t1897_VTable/* vtableMethods */
	, U24ArrayTypeU2432_t1897_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2432_t1897_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$32"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2432_t1897_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2432_t1897_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2432_t1897_0_0_0/* byval_arg */
	, &U24ArrayTypeU2432_t1897_1_0_0/* this_arg */
	, &U24ArrayTypeU2432_t1897_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2432_t1897_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2432_t1897_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2432_t1897_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2432_t1897)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2432_t1897)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2432_t1897_marshaled)/* native_size */
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
// <PrivateImplementationDetails>/$ArrayType$48
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU244.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$48
extern TypeInfo U24ArrayTypeU2448_t1898_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$48
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU244MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2448_t1898_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2448_t1898_VTable[] =
{
	&ValueType_Equals_m2220_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&ValueType_GetHashCode_m2221_MethodInfo,
	&ValueType_ToString_m2224_MethodInfo,
};
static bool U24ArrayTypeU2448_t1898_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2448_t1898_0_0_0;
extern const Il2CppType U24ArrayTypeU2448_t1898_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2448_t1898_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t1911_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t446_0_0_0/* parent */
	, U24ArrayTypeU2448_t1898_VTable/* vtableMethods */
	, U24ArrayTypeU2448_t1898_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2448_t1898_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$48"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2448_t1898_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2448_t1898_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2448_t1898_0_0_0/* byval_arg */
	, &U24ArrayTypeU2448_t1898_1_0_0/* this_arg */
	, &U24ArrayTypeU2448_t1898_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2448_t1898_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2448_t1898_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2448_t1898_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2448_t1898)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2448_t1898)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2448_t1898_marshaled)/* native_size */
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
// <PrivateImplementationDetails>/$ArrayType$64
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$64
extern TypeInfo U24ArrayTypeU2464_t1899_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$64
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2464_t1899_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2464_t1899_VTable[] =
{
	&ValueType_Equals_m2220_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&ValueType_GetHashCode_m2221_MethodInfo,
	&ValueType_ToString_m2224_MethodInfo,
};
static bool U24ArrayTypeU2464_t1899_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2464_t1899_0_0_0;
extern const Il2CppType U24ArrayTypeU2464_t1899_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2464_t1899_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t1911_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t446_0_0_0/* parent */
	, U24ArrayTypeU2464_t1899_VTable/* vtableMethods */
	, U24ArrayTypeU2464_t1899_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2464_t1899_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$64"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2464_t1899_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2464_t1899_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2464_t1899_0_0_0/* byval_arg */
	, &U24ArrayTypeU2464_t1899_1_0_0/* this_arg */
	, &U24ArrayTypeU2464_t1899_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2464_t1899_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2464_t1899_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2464_t1899_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2464_t1899)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2464_t1899)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2464_t1899_marshaled)/* native_size */
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
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_1.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$12
extern TypeInfo U24ArrayTypeU2412_t1900_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$12
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_1MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2412_t1900_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2412_t1900_VTable[] =
{
	&ValueType_Equals_m2220_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&ValueType_GetHashCode_m2221_MethodInfo,
	&ValueType_ToString_m2224_MethodInfo,
};
static bool U24ArrayTypeU2412_t1900_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2412_t1900_0_0_0;
extern const Il2CppType U24ArrayTypeU2412_t1900_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2412_t1900_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t1911_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t446_0_0_0/* parent */
	, U24ArrayTypeU2412_t1900_VTable/* vtableMethods */
	, U24ArrayTypeU2412_t1900_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2412_t1900_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$12"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2412_t1900_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2412_t1900_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2412_t1900_0_0_0/* byval_arg */
	, &U24ArrayTypeU2412_t1900_1_0_0/* this_arg */
	, &U24ArrayTypeU2412_t1900_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2412_t1900_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2412_t1900_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2412_t1900_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2412_t1900)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2412_t1900)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2412_t1900_marshaled)/* native_size */
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
// <PrivateImplementationDetails>/$ArrayType$136
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_2.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$136
extern TypeInfo U24ArrayTypeU24136_t1901_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$136
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_2MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU24136_t1901_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU24136_t1901_VTable[] =
{
	&ValueType_Equals_m2220_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&ValueType_GetHashCode_m2221_MethodInfo,
	&ValueType_ToString_m2224_MethodInfo,
};
static bool U24ArrayTypeU24136_t1901_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU24136_t1901_0_0_0;
extern const Il2CppType U24ArrayTypeU24136_t1901_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU24136_t1901_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t1911_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t446_0_0_0/* parent */
	, U24ArrayTypeU24136_t1901_VTable/* vtableMethods */
	, U24ArrayTypeU24136_t1901_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU24136_t1901_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$136"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU24136_t1901_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU24136_t1901_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU24136_t1901_0_0_0/* byval_arg */
	, &U24ArrayTypeU24136_t1901_1_0_0/* this_arg */
	, &U24ArrayTypeU24136_t1901_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU24136_t1901_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU24136_t1901_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU24136_t1901_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU24136_t1901)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU24136_t1901)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU24136_t1901_marshaled)/* native_size */
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
// <PrivateImplementationDetails>/$ArrayType$72
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU247.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$72
extern TypeInfo U24ArrayTypeU2472_t1902_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$72
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU247MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2472_t1902_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2472_t1902_VTable[] =
{
	&ValueType_Equals_m2220_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&ValueType_GetHashCode_m2221_MethodInfo,
	&ValueType_ToString_m2224_MethodInfo,
};
static bool U24ArrayTypeU2472_t1902_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2472_t1902_0_0_0;
extern const Il2CppType U24ArrayTypeU2472_t1902_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2472_t1902_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t1911_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t446_0_0_0/* parent */
	, U24ArrayTypeU2472_t1902_VTable/* vtableMethods */
	, U24ArrayTypeU2472_t1902_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2472_t1902_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$72"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2472_t1902_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2472_t1902_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2472_t1902_0_0_0/* byval_arg */
	, &U24ArrayTypeU2472_t1902_1_0_0/* this_arg */
	, &U24ArrayTypeU2472_t1902_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2472_t1902_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2472_t1902_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2472_t1902_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2472_t1902)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2472_t1902)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2472_t1902_marshaled)/* native_size */
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
// <PrivateImplementationDetails>/$ArrayType$124
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_3.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$124
extern TypeInfo U24ArrayTypeU24124_t1903_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$124
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_3MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU24124_t1903_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU24124_t1903_VTable[] =
{
	&ValueType_Equals_m2220_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&ValueType_GetHashCode_m2221_MethodInfo,
	&ValueType_ToString_m2224_MethodInfo,
};
static bool U24ArrayTypeU24124_t1903_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU24124_t1903_0_0_0;
extern const Il2CppType U24ArrayTypeU24124_t1903_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU24124_t1903_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t1911_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t446_0_0_0/* parent */
	, U24ArrayTypeU24124_t1903_VTable/* vtableMethods */
	, U24ArrayTypeU24124_t1903_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU24124_t1903_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$124"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU24124_t1903_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU24124_t1903_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU24124_t1903_0_0_0/* byval_arg */
	, &U24ArrayTypeU24124_t1903_1_0_0/* this_arg */
	, &U24ArrayTypeU24124_t1903_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU24124_t1903_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU24124_t1903_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU24124_t1903_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU24124_t1903)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU24124_t1903)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU24124_t1903_marshaled)/* native_size */
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
// <PrivateImplementationDetails>/$ArrayType$96
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU249.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$96
extern TypeInfo U24ArrayTypeU2496_t1904_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$96
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU249MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2496_t1904_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2496_t1904_VTable[] =
{
	&ValueType_Equals_m2220_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&ValueType_GetHashCode_m2221_MethodInfo,
	&ValueType_ToString_m2224_MethodInfo,
};
static bool U24ArrayTypeU2496_t1904_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2496_t1904_0_0_0;
extern const Il2CppType U24ArrayTypeU2496_t1904_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2496_t1904_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t1911_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t446_0_0_0/* parent */
	, U24ArrayTypeU2496_t1904_VTable/* vtableMethods */
	, U24ArrayTypeU2496_t1904_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2496_t1904_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$96"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2496_t1904_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2496_t1904_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2496_t1904_0_0_0/* byval_arg */
	, &U24ArrayTypeU2496_t1904_1_0_0/* this_arg */
	, &U24ArrayTypeU2496_t1904_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2496_t1904_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2496_t1904_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2496_t1904_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2496_t1904)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2496_t1904)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2496_t1904_marshaled)/* native_size */
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
// <PrivateImplementationDetails>/$ArrayType$2048
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_1.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$2048
extern TypeInfo U24ArrayTypeU242048_t1905_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$2048
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_1MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU242048_t1905_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU242048_t1905_VTable[] =
{
	&ValueType_Equals_m2220_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&ValueType_GetHashCode_m2221_MethodInfo,
	&ValueType_ToString_m2224_MethodInfo,
};
static bool U24ArrayTypeU242048_t1905_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU242048_t1905_0_0_0;
extern const Il2CppType U24ArrayTypeU242048_t1905_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU242048_t1905_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t1911_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t446_0_0_0/* parent */
	, U24ArrayTypeU242048_t1905_VTable/* vtableMethods */
	, U24ArrayTypeU242048_t1905_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU242048_t1905_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$2048"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU242048_t1905_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU242048_t1905_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU242048_t1905_0_0_0/* byval_arg */
	, &U24ArrayTypeU242048_t1905_1_0_0/* this_arg */
	, &U24ArrayTypeU242048_t1905_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU242048_t1905_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU242048_t1905_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU242048_t1905_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU242048_t1905)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU242048_t1905)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU242048_t1905_marshaled)/* native_size */
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
// <PrivateImplementationDetails>/$ArrayType$256
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_2.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$256
extern TypeInfo U24ArrayTypeU24256_t1906_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$256
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_2MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU24256_t1906_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU24256_t1906_VTable[] =
{
	&ValueType_Equals_m2220_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&ValueType_GetHashCode_m2221_MethodInfo,
	&ValueType_ToString_m2224_MethodInfo,
};
static bool U24ArrayTypeU24256_t1906_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU24256_t1906_0_0_0;
extern const Il2CppType U24ArrayTypeU24256_t1906_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU24256_t1906_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t1911_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t446_0_0_0/* parent */
	, U24ArrayTypeU24256_t1906_VTable/* vtableMethods */
	, U24ArrayTypeU24256_t1906_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU24256_t1906_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$256"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU24256_t1906_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU24256_t1906_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU24256_t1906_0_0_0/* byval_arg */
	, &U24ArrayTypeU24256_t1906_1_0_0/* this_arg */
	, &U24ArrayTypeU24256_t1906_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU24256_t1906_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU24256_t1906_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU24256_t1906_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU24256_t1906)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU24256_t1906)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU24256_t1906_marshaled)/* native_size */
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
// <PrivateImplementationDetails>/$ArrayType$1024
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_4.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$1024
extern TypeInfo U24ArrayTypeU241024_t1907_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$1024
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_4MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU241024_t1907_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU241024_t1907_VTable[] =
{
	&ValueType_Equals_m2220_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&ValueType_GetHashCode_m2221_MethodInfo,
	&ValueType_ToString_m2224_MethodInfo,
};
static bool U24ArrayTypeU241024_t1907_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU241024_t1907_0_0_0;
extern const Il2CppType U24ArrayTypeU241024_t1907_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU241024_t1907_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t1911_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t446_0_0_0/* parent */
	, U24ArrayTypeU241024_t1907_VTable/* vtableMethods */
	, U24ArrayTypeU241024_t1907_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU241024_t1907_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$1024"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU241024_t1907_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU241024_t1907_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU241024_t1907_0_0_0/* byval_arg */
	, &U24ArrayTypeU241024_t1907_1_0_0/* this_arg */
	, &U24ArrayTypeU241024_t1907_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU241024_t1907_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU241024_t1907_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU241024_t1907_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU241024_t1907)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU241024_t1907)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU241024_t1907_marshaled)/* native_size */
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
// <PrivateImplementationDetails>/$ArrayType$640
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246_0.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$640
extern TypeInfo U24ArrayTypeU24640_t1908_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$640
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246_0MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU24640_t1908_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU24640_t1908_VTable[] =
{
	&ValueType_Equals_m2220_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&ValueType_GetHashCode_m2221_MethodInfo,
	&ValueType_ToString_m2224_MethodInfo,
};
static bool U24ArrayTypeU24640_t1908_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU24640_t1908_0_0_0;
extern const Il2CppType U24ArrayTypeU24640_t1908_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU24640_t1908_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t1911_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t446_0_0_0/* parent */
	, U24ArrayTypeU24640_t1908_VTable/* vtableMethods */
	, U24ArrayTypeU24640_t1908_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU24640_t1908_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$640"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU24640_t1908_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU24640_t1908_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU24640_t1908_0_0_0/* byval_arg */
	, &U24ArrayTypeU24640_t1908_1_0_0/* this_arg */
	, &U24ArrayTypeU24640_t1908_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU24640_t1908_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU24640_t1908_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU24640_t1908_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU24640_t1908)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU24640_t1908)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU24640_t1908_marshaled)/* native_size */
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
// <PrivateImplementationDetails>/$ArrayType$128
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_5.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$128
extern TypeInfo U24ArrayTypeU24128_t1909_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$128
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_5MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU24128_t1909_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU24128_t1909_VTable[] =
{
	&ValueType_Equals_m2220_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&ValueType_GetHashCode_m2221_MethodInfo,
	&ValueType_ToString_m2224_MethodInfo,
};
static bool U24ArrayTypeU24128_t1909_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU24128_t1909_0_0_0;
extern const Il2CppType U24ArrayTypeU24128_t1909_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU24128_t1909_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t1911_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t446_0_0_0/* parent */
	, U24ArrayTypeU24128_t1909_VTable/* vtableMethods */
	, U24ArrayTypeU24128_t1909_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU24128_t1909_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$128"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU24128_t1909_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU24128_t1909_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU24128_t1909_0_0_0/* byval_arg */
	, &U24ArrayTypeU24128_t1909_1_0_0/* this_arg */
	, &U24ArrayTypeU24128_t1909_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU24128_t1909_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU24128_t1909_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU24128_t1909_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU24128_t1909)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU24128_t1909)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU24128_t1909_marshaled)/* native_size */
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
// <PrivateImplementationDetails>/$ArrayType$52
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245_0.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$52
extern TypeInfo U24ArrayTypeU2452_t1910_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$52
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245_0MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2452_t1910_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2452_t1910_VTable[] =
{
	&ValueType_Equals_m2220_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&ValueType_GetHashCode_m2221_MethodInfo,
	&ValueType_ToString_m2224_MethodInfo,
};
static bool U24ArrayTypeU2452_t1910_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U24ArrayTypeU2452_t1910_0_0_0;
extern const Il2CppType U24ArrayTypeU2452_t1910_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2452_t1910_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t1911_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t446_0_0_0/* parent */
	, U24ArrayTypeU2452_t1910_VTable/* vtableMethods */
	, U24ArrayTypeU2452_t1910_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2452_t1910_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$52"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2452_t1910_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2452_t1910_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2452_t1910_0_0_0/* byval_arg */
	, &U24ArrayTypeU2452_t1910_1_0_0/* this_arg */
	, &U24ArrayTypeU2452_t1910_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2452_t1910_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2452_t1910_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2452_t1910_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2452_t1910)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2452_t1910)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2452_t1910_marshaled)/* native_size */
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
#include "mscorlib_U3CPrivateImplementationDetailsU3E.h"
// Metadata Definition <PrivateImplementationDetails>
// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
static const MethodInfo* U3CPrivateImplementationDetailsU3E_t1911_MethodInfos[] =
{
	NULL
};
static const Il2CppType* U3CPrivateImplementationDetailsU3E_t1911_il2cpp_TypeInfo__nestedTypes[20] =
{
	&U24ArrayTypeU2456_t1891_0_0_0,
	&U24ArrayTypeU2424_t1892_0_0_0,
	&U24ArrayTypeU2416_t1893_0_0_0,
	&U24ArrayTypeU24120_t1894_0_0_0,
	&U24ArrayTypeU243132_t1895_0_0_0,
	&U24ArrayTypeU2420_t1896_0_0_0,
	&U24ArrayTypeU2432_t1897_0_0_0,
	&U24ArrayTypeU2448_t1898_0_0_0,
	&U24ArrayTypeU2464_t1899_0_0_0,
	&U24ArrayTypeU2412_t1900_0_0_0,
	&U24ArrayTypeU24136_t1901_0_0_0,
	&U24ArrayTypeU2472_t1902_0_0_0,
	&U24ArrayTypeU24124_t1903_0_0_0,
	&U24ArrayTypeU2496_t1904_0_0_0,
	&U24ArrayTypeU242048_t1905_0_0_0,
	&U24ArrayTypeU24256_t1906_0_0_0,
	&U24ArrayTypeU241024_t1907_0_0_0,
	&U24ArrayTypeU24640_t1908_0_0_0,
	&U24ArrayTypeU24128_t1909_0_0_0,
	&U24ArrayTypeU2452_t1910_0_0_0,
};
static const Il2CppMethodReference U3CPrivateImplementationDetailsU3E_t1911_VTable[] =
{
	&Object_Equals_m378_MethodInfo,
	&Object_Finalize_m375_MethodInfo,
	&Object_GetHashCode_m379_MethodInfo,
	&Object_ToString_m380_MethodInfo,
};
static bool U3CPrivateImplementationDetailsU3E_t1911_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern const Il2CppType U3CPrivateImplementationDetailsU3E_t1911_1_0_0;
struct U3CPrivateImplementationDetailsU3E_t1911;
const Il2CppTypeDefinitionMetadata U3CPrivateImplementationDetailsU3E_t1911_DefinitionMetadata = 
{
	NULL/* declaringType */
	, U3CPrivateImplementationDetailsU3E_t1911_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, U3CPrivateImplementationDetailsU3E_t1911_VTable/* vtableMethods */
	, U3CPrivateImplementationDetailsU3E_t1911_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 2549/* fieldStart */

};
TypeInfo U3CPrivateImplementationDetailsU3E_t1911_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "<PrivateImplementationDetails>"/* name */
	, ""/* namespaze */
	, U3CPrivateImplementationDetailsU3E_t1911_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U3CPrivateImplementationDetailsU3E_t1911_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 938/* custom_attributes_cache */
	, &U3CPrivateImplementationDetailsU3E_t1911_0_0_0/* byval_arg */
	, &U3CPrivateImplementationDetailsU3E_t1911_1_0_0/* this_arg */
	, &U3CPrivateImplementationDetailsU3E_t1911_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CPrivateImplementationDetailsU3E_t1911)/* instance_size */
	, sizeof (U3CPrivateImplementationDetailsU3E_t1911)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(U3CPrivateImplementationDetailsU3E_t1911_StaticFields)/* static_fields_size */
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
	, 52/* field_count */
	, 0/* event_count */
	, 20/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
