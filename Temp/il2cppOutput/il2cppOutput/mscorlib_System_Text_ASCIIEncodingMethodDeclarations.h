#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.ASCIIEncoding
struct ASCIIEncoding_t1774;
// System.Char[]
struct CharU5BU5D_t101;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t551;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t1785;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1776;
// System.Text.Decoder
struct Decoder_t1507;

// System.Void System.Text.ASCIIEncoding::.ctor()
extern "C" void ASCIIEncoding__ctor_m9430 (ASCIIEncoding_t1774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C" int32_t ASCIIEncoding_GetByteCount_m9431 (ASCIIEncoding_t1774 * __this, CharU5BU5D_t101* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.String)
extern "C" int32_t ASCIIEncoding_GetByteCount_m9432 (ASCIIEncoding_t1774 * __this, String_t* ___chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t ASCIIEncoding_GetBytes_m9433 (ASCIIEncoding_t1774 * __this, CharU5BU5D_t101* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t551* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C" int32_t ASCIIEncoding_GetBytes_m9434 (ASCIIEncoding_t1774 * __this, CharU5BU5D_t101* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t551* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t1785 ** ___buffer, CharU5BU5D_t101** ___fallback_chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t ASCIIEncoding_GetBytes_m9435 (ASCIIEncoding_t1774 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t551* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C" int32_t ASCIIEncoding_GetBytes_m9436 (ASCIIEncoding_t1774 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t551* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t1785 ** ___buffer, CharU5BU5D_t101** ___fallback_chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ASCIIEncoding_GetCharCount_m9437 (ASCIIEncoding_t1774 * __this, ByteU5BU5D_t551* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t ASCIIEncoding_GetChars_m9438 (ASCIIEncoding_t1774 * __this, ByteU5BU5D_t551* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t101* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Text.DecoderFallbackBuffer&)
extern "C" int32_t ASCIIEncoding_GetChars_m9439 (ASCIIEncoding_t1774 * __this, ByteU5BU5D_t551* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t101* ___chars, int32_t ___charIndex, DecoderFallbackBuffer_t1776 ** ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxByteCount(System.Int32)
extern "C" int32_t ASCIIEncoding_GetMaxByteCount_m9440 (ASCIIEncoding_t1774 * __this, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxCharCount(System.Int32)
extern "C" int32_t ASCIIEncoding_GetMaxCharCount_m9441 (ASCIIEncoding_t1774 * __this, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.ASCIIEncoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* ASCIIEncoding_GetString_m9442 (ASCIIEncoding_t1774 * __this, ByteU5BU5D_t551* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C" int32_t ASCIIEncoding_GetBytes_m9443 (ASCIIEncoding_t1774 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char*,System.Int32)
extern "C" int32_t ASCIIEncoding_GetByteCount_m9444 (ASCIIEncoding_t1774 * __this, uint16_t* ___chars, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.ASCIIEncoding::GetDecoder()
extern "C" Decoder_t1507 * ASCIIEncoding_GetDecoder_m9445 (ASCIIEncoding_t1774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
