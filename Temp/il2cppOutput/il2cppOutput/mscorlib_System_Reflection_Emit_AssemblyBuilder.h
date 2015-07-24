#pragma once
#include <stdint.h>
// System.Reflection.Emit.ModuleBuilder[]
struct ModuleBuilderU5BU5D_t1540;
// System.Type
struct Type_t;
// Mono.Security.StrongName
struct StrongName_t1453;
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_Assembly.h"
// System.Reflection.Emit.AssemblyBuilder
struct  AssemblyBuilder_t1541  : public Assembly_t1177
{
	// System.Reflection.Emit.ModuleBuilder[] System.Reflection.Emit.AssemblyBuilder::modules
	ModuleBuilderU5BU5D_t1540* ___modules_10;
	// System.Type System.Reflection.Emit.AssemblyBuilder::corlib_value_type
	Type_t * ___corlib_value_type_11;
	// System.Type System.Reflection.Emit.AssemblyBuilder::corlib_enum_type
	Type_t * ___corlib_enum_type_12;
	// Mono.Security.StrongName System.Reflection.Emit.AssemblyBuilder::sn
	StrongName_t1453 * ___sn_13;
	// System.Boolean System.Reflection.Emit.AssemblyBuilder::is_compiler_context
	bool ___is_compiler_context_14;
};
