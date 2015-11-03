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

// System.Security.Cryptography.DSASignatureFormatter
struct DSASignatureFormatter_t1499;
// System.Byte[]
struct ByteU5BU5D_t658;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t807;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.DSASignatureFormatter::.ctor()
extern "C" void DSASignatureFormatter__ctor_m8945 (DSASignatureFormatter_t1499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSASignatureFormatter::CreateSignature(System.Byte[])
extern "C" ByteU5BU5D_t658* DSASignatureFormatter_CreateSignature_m8946 (DSASignatureFormatter_t1499 * __this, ByteU5BU5D_t658* ___rgbHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureFormatter::SetHashAlgorithm(System.String)
extern "C" void DSASignatureFormatter_SetHashAlgorithm_m8947 (DSASignatureFormatter_t1499 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void DSASignatureFormatter_SetKey_m8948 (DSASignatureFormatter_t1499 * __this, AsymmetricAlgorithm_t807 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
