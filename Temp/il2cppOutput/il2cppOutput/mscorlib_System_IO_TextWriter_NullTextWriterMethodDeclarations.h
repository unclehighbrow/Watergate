#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.TextWriter/NullTextWriter
struct NullTextWriter_t1536;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t101;

// System.Void System.IO.TextWriter/NullTextWriter::.ctor()
extern "C" void NullTextWriter__ctor_m8083 (NullTextWriter_t1536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter/NullTextWriter::Write(System.String)
extern "C" void NullTextWriter_Write_m8084 (NullTextWriter_t1536 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter/NullTextWriter::Write(System.Char)
extern "C" void NullTextWriter_Write_m8085 (NullTextWriter_t1536 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter/NullTextWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void NullTextWriter_Write_m8086 (NullTextWriter_t1536 * __this, CharU5BU5D_t101* ___value, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
