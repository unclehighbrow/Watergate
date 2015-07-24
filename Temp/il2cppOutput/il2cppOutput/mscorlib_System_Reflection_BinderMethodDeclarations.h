#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Binder
struct Binder_t788;
// System.Reflection.MethodBase
struct MethodBase_t791;
// System.Reflection.MethodBase[]
struct MethodBaseU5BU5D_t1920;
// System.Object[]
struct ObjectU5BU5D_t73;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t789;
// System.Globalization.CultureInfo
struct CultureInfo_t757;
// System.String[]
struct StringU5BU5D_t48;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t634;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t784;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t781;
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Void System.Reflection.Binder::.ctor()
extern "C" void Binder__ctor_m8395 (Binder_t788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Binder::.cctor()
extern "C" void Binder__cctor_m8396 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder::BindToMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Object[]&,System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[],System.Object&)
// System.Object System.Reflection.Binder::ChangeType(System.Object,System.Type,System.Globalization.CultureInfo)
// System.Void System.Reflection.Binder::ReorderArgumentArray(System.Object[]&,System.Object)
// System.Reflection.MethodBase System.Reflection.Binder::SelectMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Type[],System.Reflection.ParameterModifier[])
// System.Reflection.PropertyInfo System.Reflection.Binder::SelectProperty(System.Reflection.BindingFlags,System.Reflection.PropertyInfo[],System.Type,System.Type[],System.Reflection.ParameterModifier[])
// System.Reflection.Binder System.Reflection.Binder::get_DefaultBinder()
extern "C" Binder_t788 * Binder_get_DefaultBinder_m8397 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder::ConvertArgs(System.Reflection.Binder,System.Object[],System.Reflection.ParameterInfo[],System.Globalization.CultureInfo)
extern "C" bool Binder_ConvertArgs_m8398 (Object_t * __this /* static, unused */, Binder_t788 * ___binder, ObjectU5BU5D_t73* ___args, ParameterInfoU5BU5D_t781* ___pinfo, CultureInfo_t757 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder::GetDerivedLevel(System.Type)
extern "C" int32_t Binder_GetDerivedLevel_m8399 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder::FindMostDerivedMatch(System.Reflection.MethodBase[])
extern "C" MethodBase_t791 * Binder_FindMostDerivedMatch_m8400 (Object_t * __this /* static, unused */, MethodBaseU5BU5D_t1920* ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
