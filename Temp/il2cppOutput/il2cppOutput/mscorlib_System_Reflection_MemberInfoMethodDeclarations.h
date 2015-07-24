#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Module
struct Module_t1552;
// System.Object[]
struct ObjectU5BU5D_t73;
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"

// System.Void System.Reflection.MemberInfo::.ctor()
extern "C" void MemberInfo__ctor_m6851 (MemberInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MemberInfo::get_DeclaringType()
// System.Reflection.MemberTypes System.Reflection.MemberInfo::get_MemberType()
// System.String System.Reflection.MemberInfo::get_Name()
// System.Type System.Reflection.MemberInfo::get_ReflectedType()
// System.Reflection.Module System.Reflection.MemberInfo::get_Module()
extern "C" Module_t1552 * MemberInfo_get_Module_m6852 (MemberInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean)
// System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean)
// System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean)
