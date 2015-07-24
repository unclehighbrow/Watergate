#pragma once
#include <stdint.h>
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t1135;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t1130;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t1136;
// System.Text.RegularExpressions.Syntax.Assertion
#include "System_System_Text_RegularExpressions_Syntax_Assertion.h"
// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct  CaptureAssertion_t1137  : public Assertion_t1134
{
	// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::alternate
	ExpressionAssertion_t1135 * ___alternate_1;
	// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.CaptureAssertion::group
	CapturingGroup_t1130 * ___group_2;
	// System.Text.RegularExpressions.Syntax.Literal System.Text.RegularExpressions.Syntax.CaptureAssertion::literal
	Literal_t1136 * ___literal_3;
};
