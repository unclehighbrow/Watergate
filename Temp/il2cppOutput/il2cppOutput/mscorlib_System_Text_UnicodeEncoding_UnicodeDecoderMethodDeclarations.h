﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Text.UnicodeEncoding/UnicodeDecoder
struct UnicodeDecoder_t1580;
// System.Byte[]
struct ByteU5BU5D_t658;
// System.Char[]
struct CharU5BU5D_t102;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.UnicodeEncoding/UnicodeDecoder::.ctor(System.Boolean)
extern "C" void UnicodeDecoder__ctor_m9542 (UnicodeDecoder_t1580 * __this, bool ___bigEndian, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding/UnicodeDecoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t UnicodeDecoder_GetChars_m9543 (UnicodeDecoder_t1580 * __this, ByteU5BU5D_t658* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t102* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
