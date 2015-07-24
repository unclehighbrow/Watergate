#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t1135;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t1126;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t1169;

// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::.ctor()
extern "C" void ExpressionAssertion__ctor_m4730 (ExpressionAssertion_t1135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_Reverse(System.Boolean)
extern "C" void ExpressionAssertion_set_Reverse_m4731 (ExpressionAssertion_t1135 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_Negate(System.Boolean)
extern "C" void ExpressionAssertion_set_Negate_m4732 (ExpressionAssertion_t1135 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.ExpressionAssertion::get_TestExpression()
extern "C" Expression_t1126 * ExpressionAssertion_get_TestExpression_m4733 (ExpressionAssertion_t1135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_TestExpression(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void ExpressionAssertion_set_TestExpression_m4734 (ExpressionAssertion_t1135 * __this, Expression_t1126 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void ExpressionAssertion_Compile_m4735 (ExpressionAssertion_t1135 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.ExpressionAssertion::IsComplex()
extern "C" bool ExpressionAssertion_IsComplex_m4736 (ExpressionAssertion_t1135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
