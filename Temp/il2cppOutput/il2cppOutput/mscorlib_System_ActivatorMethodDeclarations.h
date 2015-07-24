#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Activator
struct Activator_t1813;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t73;
// System.Reflection.Binder
struct Binder_t788;
// System.Globalization.CultureInfo
struct CultureInfo_t757;
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Object System.Activator::CreateInstance(System.Type)
extern "C" Object_t * Activator_CreateInstance_m9736 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstance(System.Type,System.Object[])
extern "C" Object_t * Activator_CreateInstance_m9737 (Object_t * __this /* static, unused */, Type_t * ___type, ObjectU5BU5D_t73* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstance(System.Type,System.Object[],System.Object[])
extern "C" Object_t * Activator_CreateInstance_m9738 (Object_t * __this /* static, unused */, Type_t * ___type, ObjectU5BU5D_t73* ___args, ObjectU5BU5D_t73* ___activationAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstance(System.Type,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo,System.Object[])
extern "C" Object_t * Activator_CreateInstance_m9739 (Object_t * __this /* static, unused */, Type_t * ___type, int32_t ___bindingAttr, Binder_t788 * ___binder, ObjectU5BU5D_t73* ___args, CultureInfo_t757 * ___culture, ObjectU5BU5D_t73* ___activationAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstance(System.Type,System.Boolean)
extern "C" Object_t * Activator_CreateInstance_m4908 (Object_t * __this /* static, unused */, Type_t * ___type, bool ___nonPublic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Activator::CheckType(System.Type)
extern "C" void Activator_CheckType_m9740 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Activator::CheckAbstractType(System.Type)
extern "C" void Activator_CheckAbstractType_m9741 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstanceInternal(System.Type)
extern "C" Object_t * Activator_CreateInstanceInternal_m9742 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
