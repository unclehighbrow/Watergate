#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t638;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t73;
// System.Reflection.Binder
struct Binder_t788;
// System.Globalization.CultureInfo
struct CultureInfo_t757;
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Void System.Reflection.ConstructorInfo::.ctor()
extern "C" void ConstructorInfo__ctor_m8401 (ConstructorInfo_t638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.ConstructorInfo::.cctor()
extern "C" void ConstructorInfo__cctor_m8402 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.Reflection.ConstructorInfo::get_MemberType()
extern "C" int32_t ConstructorInfo_get_MemberType_m8403 (ConstructorInfo_t638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
extern "C" Object_t * ConstructorInfo_Invoke_m3627 (ConstructorInfo_t638 * __this, ObjectU5BU5D_t73* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
