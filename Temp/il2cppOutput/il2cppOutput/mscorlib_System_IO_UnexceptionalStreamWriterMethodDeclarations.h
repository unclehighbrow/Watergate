#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.UnexceptionalStreamWriter
struct UnexceptionalStreamWriter_t1539;
// System.IO.Stream
struct Stream_t1296;
// System.Text.Encoding
struct Encoding_t711;
// System.Char[]
struct CharU5BU5D_t101;
// System.String
struct String_t;

// System.Void System.IO.UnexceptionalStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void UnexceptionalStreamWriter__ctor_m8117 (UnexceptionalStreamWriter_t1539 * __this, Stream_t1296 * ___stream, Encoding_t711 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Flush()
extern "C" void UnexceptionalStreamWriter_Flush_m8118 (UnexceptionalStreamWriter_t1539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void UnexceptionalStreamWriter_Write_m8119 (UnexceptionalStreamWriter_t1539 * __this, CharU5BU5D_t101* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char)
extern "C" void UnexceptionalStreamWriter_Write_m8120 (UnexceptionalStreamWriter_t1539 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[])
extern "C" void UnexceptionalStreamWriter_Write_m8121 (UnexceptionalStreamWriter_t1539 * __this, CharU5BU5D_t101* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.String)
extern "C" void UnexceptionalStreamWriter_Write_m8122 (UnexceptionalStreamWriter_t1539 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
