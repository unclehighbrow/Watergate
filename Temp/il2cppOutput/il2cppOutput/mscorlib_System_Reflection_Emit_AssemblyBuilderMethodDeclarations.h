#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t1541;
// System.String
struct String_t;
// System.Reflection.Module[]
struct ModuleU5BU5D_t1919;
// System.Exception
struct Exception_t65;
// System.Reflection.AssemblyName
struct AssemblyName_t1564;

// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C" String_t* AssemblyBuilder_get_Location_m8123 (AssemblyBuilder_t1541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C" ModuleU5BU5D_t1919* AssemblyBuilder_GetModulesInternal_m8124 (AssemblyBuilder_t1541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C" bool AssemblyBuilder_get_IsCompilerContext_m8125 (AssemblyBuilder_t1541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C" Exception_t65 * AssemblyBuilder_not_supported_m8126 (AssemblyBuilder_t1541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C" AssemblyName_t1564 * AssemblyBuilder_UnprotectedGetName_m8127 (AssemblyBuilder_t1541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
