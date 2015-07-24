#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.InterpreterFactory
struct InterpreterFactory_t1107;
// System.Collections.IDictionary
struct IDictionary_t1094;
// System.String[]
struct StringU5BU5D_t48;
// System.UInt16[]
struct UInt16U5BU5D_t1024;
// System.Text.RegularExpressions.IMachine
struct IMachine_t1089;

// System.Void System.Text.RegularExpressions.InterpreterFactory::.ctor(System.UInt16[])
extern "C" void InterpreterFactory__ctor_m4501 (InterpreterFactory_t1107 * __this, UInt16U5BU5D_t1024* ___pattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.InterpreterFactory::NewInstance()
extern "C" Object_t * InterpreterFactory_NewInstance_m4502 (InterpreterFactory_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.InterpreterFactory::get_GroupCount()
extern "C" int32_t InterpreterFactory_get_GroupCount_m4503 (InterpreterFactory_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.InterpreterFactory::get_Gap()
extern "C" int32_t InterpreterFactory_get_Gap_m4504 (InterpreterFactory_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.InterpreterFactory::set_Gap(System.Int32)
extern "C" void InterpreterFactory_set_Gap_m4505 (InterpreterFactory_t1107 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Text.RegularExpressions.InterpreterFactory::get_Mapping()
extern "C" Object_t * InterpreterFactory_get_Mapping_m4506 (InterpreterFactory_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.InterpreterFactory::set_Mapping(System.Collections.IDictionary)
extern "C" void InterpreterFactory_set_Mapping_m4507 (InterpreterFactory_t1107 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.InterpreterFactory::get_NamesMapping()
extern "C" StringU5BU5D_t48* InterpreterFactory_get_NamesMapping_m4508 (InterpreterFactory_t1107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.InterpreterFactory::set_NamesMapping(System.String[])
extern "C" void InterpreterFactory_set_NamesMapping_m4509 (InterpreterFactory_t1107 * __this, StringU5BU5D_t48* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
