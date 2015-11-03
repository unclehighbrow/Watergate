#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.SecurityElement
struct SecurityElement_t1139;
// System.Collections.Stack
struct Stack_t970;

#include "mscorlib_Mono_Xml_SmallXmlParser.h"

// Mono.Xml.SecurityParser
struct  SecurityParser_t1137  : public SmallXmlParser_t1138
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t1139 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t1139 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t970 * ___stack_15;
};
