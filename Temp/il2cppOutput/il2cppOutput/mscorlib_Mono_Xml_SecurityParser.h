#pragma once
#include <stdint.h>
// System.Security.SecurityElement
struct SecurityElement_t1454;
// System.Collections.Stack
struct Stack_t703;
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// Mono.Xml.SecurityParser
struct  SecurityParser_t1455  : public SmallXmlParser_t1456
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t1454 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t1454 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t703 * ___stack_15;
};
