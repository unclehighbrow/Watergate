#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct RSAPKCS1KeyExchangeFormatter_t1361;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1037;
// System.Byte[]
struct ByteU5BU5D_t551;

// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1KeyExchangeFormatter__ctor_m6035 (RSAPKCS1KeyExchangeFormatter_t1361 * __this, AsymmetricAlgorithm_t1037 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::CreateKeyExchange(System.Byte[])
extern "C" ByteU5BU5D_t551* RSAPKCS1KeyExchangeFormatter_CreateKeyExchange_m9238 (RSAPKCS1KeyExchangeFormatter_t1361 * __this, ByteU5BU5D_t551* ___rgbData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::SetRSAKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1KeyExchangeFormatter_SetRSAKey_m9239 (RSAPKCS1KeyExchangeFormatter_t1361 * __this, AsymmetricAlgorithm_t1037 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
