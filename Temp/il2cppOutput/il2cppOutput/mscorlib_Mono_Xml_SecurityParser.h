#pragma once
#include <stdint.h>
// System.Security.SecurityElement
struct SecurityElement_t1453;
// System.Collections.Stack
struct Stack_t702;
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// Mono.Xml.SecurityParser
struct  SecurityParser_t1454  : public SmallXmlParser_t1455
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t1453 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t1453 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t702 * ___stack_15;
};
