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

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t704;
// System.Byte[]
struct ByteU5BU5D_t658;
// System.Security.Cryptography.RSA
struct RSA_t710;
// System.Security.Cryptography.DSA
struct DSA_t717;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
extern "C" void PrivateKeyInfo__ctor_m3558 (PrivateKeyInfo_t704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
extern "C" void PrivateKeyInfo__ctor_m3559 (PrivateKeyInfo_t704 * __this, ByteU5BU5D_t658* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
extern "C" ByteU5BU5D_t658* PrivateKeyInfo_get_PrivateKey_m3560 (PrivateKeyInfo_t704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
extern "C" void PrivateKeyInfo_Decode_m3561 (PrivateKeyInfo_t704 * __this, ByteU5BU5D_t658* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
extern "C" ByteU5BU5D_t658* PrivateKeyInfo_RemoveLeadingZero_m3562 (Object_t * __this /* static, unused */, ByteU5BU5D_t658* ___bigInt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t658* PrivateKeyInfo_Normalize_m3563 (Object_t * __this /* static, unused */, ByteU5BU5D_t658* ___bigInt, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
extern "C" RSA_t710 * PrivateKeyInfo_DecodeRSA_m3564 (Object_t * __this /* static, unused */, ByteU5BU5D_t658* ___keypair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
extern "C" DSA_t717 * PrivateKeyInfo_DecodeDSA_m3565 (Object_t * __this /* static, unused */, ByteU5BU5D_t658* ___privateKey, DSAParameters_t819  ___dsaParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
