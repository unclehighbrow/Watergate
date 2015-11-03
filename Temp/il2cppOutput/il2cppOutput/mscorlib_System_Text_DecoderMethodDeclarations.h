#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Text.Decoder
struct Decoder_t1194;
// System.Text.DecoderFallback
struct DecoderFallback_t1557;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1558;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.Decoder::.ctor()
extern "C" void Decoder__ctor_m9336 (Decoder_t1194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::set_Fallback(System.Text.DecoderFallback)
extern "C" void Decoder_set_Fallback_m9337 (Decoder_t1194 * __this, DecoderFallback_t1557 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallbackBuffer System.Text.Decoder::get_FallbackBuffer()
extern "C" DecoderFallbackBuffer_t1558 * Decoder_get_FallbackBuffer_m9338 (Decoder_t1194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
