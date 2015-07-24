#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t1542;
// System.Reflection.Assembly
struct Assembly_t1177;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.Module
struct Module_t1552;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t638;
// System.Reflection.Binder
struct Binder_t788;
// System.Type[]
struct TypeU5BU5D_t634;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t789;
// System.Object[]
struct ObjectU5BU5D_t73;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t780;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t785;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1578;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t784;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t757;
// System.String[]
struct StringU5BU5D_t48;
// System.Exception
struct Exception_t65;
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"

// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::GetAttributeFlagsImpl()
extern "C" int32_t TypeBuilder_GetAttributeFlagsImpl_m8290 (TypeBuilder_t1542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.TypeBuilder::get_Assembly()
extern "C" Assembly_t1177 * TypeBuilder_get_Assembly_m8291 (TypeBuilder_t1542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_AssemblyQualifiedName()
extern "C" String_t* TypeBuilder_get_AssemblyQualifiedName_m8292 (TypeBuilder_t1542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_BaseType()
extern "C" Type_t * TypeBuilder_get_BaseType_m8293 (TypeBuilder_t1542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_DeclaringType()
extern "C" Type_t * TypeBuilder_get_DeclaringType_m8294 (TypeBuilder_t1542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_UnderlyingSystemType()
extern "C" Type_t * TypeBuilder_get_UnderlyingSystemType_m8295 (TypeBuilder_t1542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_FullName()
extern "C" String_t* TypeBuilder_get_FullName_m8296 (TypeBuilder_t1542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module()
extern "C" Module_t1552 * TypeBuilder_get_Module_m8297 (TypeBuilder_t1542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_Name()
extern "C" String_t* TypeBuilder_get_Name_m8298 (TypeBuilder_t1542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_Namespace()
extern "C" String_t* TypeBuilder_get_Namespace_m8299 (TypeBuilder_t1542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_ReflectedType()
extern "C" Type_t * TypeBuilder_get_ReflectedType_m8300 (TypeBuilder_t1542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.TypeBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t638 * TypeBuilder_GetConstructorImpl_m8301 (TypeBuilder_t1542 * __this, int32_t ___bindingAttr, Binder_t788 * ___binder, int32_t ___callConvention, TypeU5BU5D_t634* ___types, ParameterModifierU5BU5D_t789* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool TypeBuilder_IsDefined_m8302 (TypeBuilder_t1542 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t73* TypeBuilder_GetCustomAttributes_m8303 (TypeBuilder_t1542 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t73* TypeBuilder_GetCustomAttributes_m8304 (TypeBuilder_t1542 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructors(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t780* TypeBuilder_GetConstructors_m8305 (TypeBuilder_t1542 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructorsInternal(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t780* TypeBuilder_GetConstructorsInternal_m8306 (TypeBuilder_t1542 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::GetElementType()
extern "C" Type_t * TypeBuilder_GetElementType_m8307 (TypeBuilder_t1542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.TypeBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t * TypeBuilder_GetEvent_m8308 (TypeBuilder_t1542 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.TypeBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern "C" FieldInfo_t * TypeBuilder_GetField_m8309 (TypeBuilder_t1542 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.TypeBuilder::GetFields(System.Reflection.BindingFlags)
extern "C" FieldInfoU5BU5D_t785* TypeBuilder_GetFields_m8310 (TypeBuilder_t1542 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.TypeBuilder::GetInterfaces()
extern "C" TypeU5BU5D_t634* TypeBuilder_GetInterfaces_m8311 (TypeBuilder_t1542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
extern "C" MethodInfoU5BU5D_t1578* TypeBuilder_GetMethodsByName_m8312 (TypeBuilder_t1542 * __this, String_t* ___name, int32_t ___bindingAttr, bool ___ignoreCase, Type_t * ___reflected_type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethods(System.Reflection.BindingFlags)
extern "C" MethodInfoU5BU5D_t1578* TypeBuilder_GetMethods_m8313 (TypeBuilder_t1542 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.TypeBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t * TypeBuilder_GetMethodImpl_m8314 (TypeBuilder_t1542 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t788 * ___binder, int32_t ___callConvention, TypeU5BU5D_t634* ___types, ParameterModifierU5BU5D_t789* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.Reflection.Emit.TypeBuilder::GetProperties(System.Reflection.BindingFlags)
extern "C" PropertyInfoU5BU5D_t784* TypeBuilder_GetProperties_m8315 (TypeBuilder_t1542 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.TypeBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t * TypeBuilder_GetPropertyImpl_m8316 (TypeBuilder_t1542 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t788 * ___binder, Type_t * ___returnType, TypeU5BU5D_t634* ___types, ParameterModifierU5BU5D_t789* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::HasElementTypeImpl()
extern "C" bool TypeBuilder_HasElementTypeImpl_m8317 (TypeBuilder_t1542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.TypeBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C" Object_t * TypeBuilder_InvokeMember_m8318 (TypeBuilder_t1542 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t788 * ___binder, Object_t * ___target, ObjectU5BU5D_t73* ___args, ParameterModifierU5BU5D_t789* ___modifiers, CultureInfo_t757 * ___culture, StringU5BU5D_t48* ___namedParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsArrayImpl()
extern "C" bool TypeBuilder_IsArrayImpl_m8319 (TypeBuilder_t1542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsByRefImpl()
extern "C" bool TypeBuilder_IsByRefImpl_m8320 (TypeBuilder_t1542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPointerImpl()
extern "C" bool TypeBuilder_IsPointerImpl_m8321 (TypeBuilder_t1542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPrimitiveImpl()
extern "C" bool TypeBuilder_IsPrimitiveImpl_m8322 (TypeBuilder_t1542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsValueTypeImpl()
extern "C" bool TypeBuilder_IsValueTypeImpl_m8323 (TypeBuilder_t1542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::MakeGenericType(System.Type[])
extern "C" Type_t * TypeBuilder_MakeGenericType_m8324 (TypeBuilder_t1542 * __this, TypeU5BU5D_t634* ___typeArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.TypeBuilder::get_TypeHandle()
extern "C" RuntimeTypeHandle_t1373  TypeBuilder_get_TypeHandle_m8325 (TypeBuilder_t1542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsCompilerContext()
extern "C" bool TypeBuilder_get_IsCompilerContext_m8326 (TypeBuilder_t1542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_is_created()
extern "C" bool TypeBuilder_get_is_created_m8327 (TypeBuilder_t1542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.TypeBuilder::not_supported()
extern "C" Exception_t65 * TypeBuilder_not_supported_m8328 (TypeBuilder_t1542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::check_created()
extern "C" void TypeBuilder_check_created_m8329 (TypeBuilder_t1542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::ToString()
extern "C" String_t* TypeBuilder_ToString_m8330 (TypeBuilder_t1542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableFrom(System.Type)
extern "C" bool TypeBuilder_IsAssignableFrom_m8331 (TypeBuilder_t1542 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsSubclassOf(System.Type)
extern "C" bool TypeBuilder_IsSubclassOf_m8332 (TypeBuilder_t1542 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableTo(System.Type)
extern "C" bool TypeBuilder_IsAssignableTo_m8333 (TypeBuilder_t1542 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.TypeBuilder::GetGenericArguments()
extern "C" TypeU5BU5D_t634* TypeBuilder_GetGenericArguments_m8334 (TypeBuilder_t1542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::GetGenericTypeDefinition()
extern "C" Type_t * TypeBuilder_GetGenericTypeDefinition_m8335 (TypeBuilder_t1542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_ContainsGenericParameters()
extern "C" bool TypeBuilder_get_ContainsGenericParameters_m8336 (TypeBuilder_t1542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericParameter()
extern "C" bool TypeBuilder_get_IsGenericParameter_m8337 (TypeBuilder_t1542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericTypeDefinition()
extern "C" bool TypeBuilder_get_IsGenericTypeDefinition_m8338 (TypeBuilder_t1542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericType()
extern "C" bool TypeBuilder_get_IsGenericType_m8339 (TypeBuilder_t1542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
