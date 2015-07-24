#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t1196;
// System.IO.TextReader
struct TextReader_t1459;
// System.Text.Encoding
struct Encoding_t711;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct  Console_t1195  : public Object_t
{
};
struct Console_t1195_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t1196 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t1196 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t1459 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t711 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t711 * ___outputEncoding_4;
};
