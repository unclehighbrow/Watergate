#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.UTF8Encoding/UTF8Decoder
struct UTF8Decoder_t1795;
// System.Text.DecoderFallback
struct DecoderFallback_t1774;
// System.Byte[]
struct ByteU5BU5D_t550;
// System.Char[]
struct CharU5BU5D_t99;

// System.Void System.Text.UTF8Encoding/UTF8Decoder::.ctor(System.Text.DecoderFallback)
extern "C" void UTF8Decoder__ctor_m9617 (UTF8Decoder_t1795 * __this, DecoderFallback_t1774 * ___fallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding/UTF8Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t UTF8Decoder_GetChars_m9618 (UTF8Decoder_t1795 * __this, ByteU5BU5D_t550* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t99* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
