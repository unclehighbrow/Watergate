#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t1432;
// System.Byte[]
struct ByteU5BU5D_t551;
// System.Security.Cryptography.RSA
struct RSA_t1162;
// System.Security.Cryptography.DSA
struct DSA_t1161;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
extern "C" void PrivateKeyInfo__ctor_m7166 (PrivateKeyInfo_t1432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
extern "C" void PrivateKeyInfo__ctor_m7167 (PrivateKeyInfo_t1432 * __this, ByteU5BU5D_t551* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
extern "C" ByteU5BU5D_t551* PrivateKeyInfo_get_PrivateKey_m7168 (PrivateKeyInfo_t1432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
extern "C" void PrivateKeyInfo_Decode_m7169 (PrivateKeyInfo_t1432 * __this, ByteU5BU5D_t551* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
extern "C" ByteU5BU5D_t551* PrivateKeyInfo_RemoveLeadingZero_m7170 (Object_t * __this /* static, unused */, ByteU5BU5D_t551* ___bigInt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t551* PrivateKeyInfo_Normalize_m7171 (Object_t * __this /* static, unused */, ByteU5BU5D_t551* ___bigInt, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
extern "C" RSA_t1162 * PrivateKeyInfo_DecodeRSA_m7172 (Object_t * __this /* static, unused */, ByteU5BU5D_t551* ___keypair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
extern "C" DSA_t1161 * PrivateKeyInfo_DecodeDSA_m7173 (Object_t * __this /* static, unused */, ByteU5BU5D_t551* ___privateKey, DSAParameters_t1183  ___dsaParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
