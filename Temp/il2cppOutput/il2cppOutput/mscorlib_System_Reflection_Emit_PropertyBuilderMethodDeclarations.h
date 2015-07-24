#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.PropertyBuilder
struct PropertyBuilder_t1554;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Module
struct Module_t1552;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1578;
// System.Object[]
struct ObjectU5BU5D_t73;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t781;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t788;
// System.Globalization.CultureInfo
struct CultureInfo_t757;
// System.Exception
struct Exception_t65;
// System.Reflection.PropertyAttributes
#include "mscorlib_System_Reflection_PropertyAttributes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Reflection.PropertyAttributes System.Reflection.Emit.PropertyBuilder::get_Attributes()
extern "C" int32_t PropertyBuilder_get_Attributes_m8270 (PropertyBuilder_t1554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.PropertyBuilder::get_CanRead()
extern "C" bool PropertyBuilder_get_CanRead_m8271 (PropertyBuilder_t1554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.PropertyBuilder::get_CanWrite()
extern "C" bool PropertyBuilder_get_CanWrite_m8272 (PropertyBuilder_t1554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.PropertyBuilder::get_DeclaringType()
extern "C" Type_t * PropertyBuilder_get_DeclaringType_m8273 (PropertyBuilder_t1554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.PropertyBuilder::get_Name()
extern "C" String_t* PropertyBuilder_get_Name_m8274 (PropertyBuilder_t1554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.PropertyBuilder::get_PropertyType()
extern "C" Type_t * PropertyBuilder_get_PropertyType_m8275 (PropertyBuilder_t1554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.PropertyBuilder::get_ReflectedType()
extern "C" Type_t * PropertyBuilder_get_ReflectedType_m8276 (PropertyBuilder_t1554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.PropertyBuilder::GetAccessors(System.Boolean)
extern "C" MethodInfoU5BU5D_t1578* PropertyBuilder_GetAccessors_m8277 (PropertyBuilder_t1554 * __this, bool ___nonPublic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.PropertyBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t73* PropertyBuilder_GetCustomAttributes_m8278 (PropertyBuilder_t1554 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.PropertyBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t73* PropertyBuilder_GetCustomAttributes_m8279 (PropertyBuilder_t1554 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.PropertyBuilder::GetGetMethod(System.Boolean)
extern "C" MethodInfo_t * PropertyBuilder_GetGetMethod_m8280 (PropertyBuilder_t1554 * __this, bool ___nonPublic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.PropertyBuilder::GetIndexParameters()
extern "C" ParameterInfoU5BU5D_t781* PropertyBuilder_GetIndexParameters_m8281 (PropertyBuilder_t1554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.PropertyBuilder::GetSetMethod(System.Boolean)
extern "C" MethodInfo_t * PropertyBuilder_GetSetMethod_m8282 (PropertyBuilder_t1554 * __this, bool ___nonPublic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.PropertyBuilder::GetValue(System.Object,System.Object[])
extern "C" Object_t * PropertyBuilder_GetValue_m8283 (PropertyBuilder_t1554 * __this, Object_t * ___obj, ObjectU5BU5D_t73* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.PropertyBuilder::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * PropertyBuilder_GetValue_m8284 (PropertyBuilder_t1554 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t788 * ___binder, ObjectU5BU5D_t73* ___index, CultureInfo_t757 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.PropertyBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool PropertyBuilder_IsDefined_m8285 (PropertyBuilder_t1554 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.PropertyBuilder::SetValue(System.Object,System.Object,System.Object[])
extern "C" void PropertyBuilder_SetValue_m8286 (PropertyBuilder_t1554 * __this, Object_t * ___obj, Object_t * ___value, ObjectU5BU5D_t73* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.PropertyBuilder::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" void PropertyBuilder_SetValue_m8287 (PropertyBuilder_t1554 * __this, Object_t * ___obj, Object_t * ___value, int32_t ___invokeAttr, Binder_t788 * ___binder, ObjectU5BU5D_t73* ___index, CultureInfo_t757 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.PropertyBuilder::get_Module()
extern "C" Module_t1552 * PropertyBuilder_get_Module_m8288 (PropertyBuilder_t1554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.PropertyBuilder::not_supported()
extern "C" Exception_t65 * PropertyBuilder_not_supported_m8289 (PropertyBuilder_t1554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
