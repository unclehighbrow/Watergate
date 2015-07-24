#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.Group
struct Group_t1128;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t1126;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t1169;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t1144;

// System.Void System.Text.RegularExpressions.Syntax.Group::.ctor()
extern "C" void Group__ctor_m4689 (Group_t1128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Group::AppendExpression(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void Group_AppendExpression_m4690 (Group_t1128 * __this, Expression_t1126 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Group::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void Group_Compile_m4691 (Group_t1128 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Group::GetWidth(System.Int32&,System.Int32&)
extern "C" void Group_GetWidth_m4692 (Group_t1128 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Group::GetAnchorInfo(System.Boolean)
extern "C" AnchorInfo_t1144 * Group_GetAnchorInfo_m4693 (Group_t1128 * __this, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
