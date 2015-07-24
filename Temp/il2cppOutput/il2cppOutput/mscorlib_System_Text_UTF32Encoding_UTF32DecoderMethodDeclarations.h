#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.UTF32Encoding/UTF32Decoder
struct UTF32Decoder_t1791;
// System.Byte[]
struct ByteU5BU5D_t551;
// System.Char[]
struct CharU5BU5D_t101;

// System.Void System.Text.UTF32Encoding/UTF32Decoder::.ctor(System.Boolean)
extern "C" void UTF32Decoder__ctor_m9582 (UTF32Decoder_t1791 * __this, bool ___bigEndian, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding/UTF32Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t UTF32Decoder_GetChars_m9583 (UTF32Decoder_t1791 * __this, ByteU5BU5D_t551* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t101* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
