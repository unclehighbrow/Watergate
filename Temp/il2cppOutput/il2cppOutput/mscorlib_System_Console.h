#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.TextWriter
struct TextWriter_t1033;
// System.IO.TextReader
struct TextReader_t1141;
// System.Text.Encoding
struct Encoding_t825;

#include "mscorlib_System_Object.h"

// System.Console
struct  Console_t1032  : public Object_t
{
};
struct Console_t1032_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t1033 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t1033 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t1141 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t825 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t825 * ___outputEncoding_4;
};
