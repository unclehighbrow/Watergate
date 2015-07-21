#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS1
struct PKCS1_t1244;
// System.Byte[]
struct ByteU5BU5D_t550;
// System.Security.Cryptography.RSA
struct RSA_t1161;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1242;

// System.Void Mono.Security.Cryptography.PKCS1::.cctor()
extern "C" void PKCS1__cctor_m5257 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Compare(System.Byte[],System.Byte[])
extern "C" bool PKCS1_Compare_m5258 (Object_t * __this /* static, unused */, ByteU5BU5D_t550* ___array1, ByteU5BU5D_t550* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::I2OSP(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t550* PKCS1_I2OSP_m5259 (Object_t * __this /* static, unused */, ByteU5BU5D_t550* ___x, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::OS2IP(System.Byte[])
extern "C" ByteU5BU5D_t550* PKCS1_OS2IP_m5260 (Object_t * __this /* static, unused */, ByteU5BU5D_t550* ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSASP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t550* PKCS1_RSASP1_m5261 (Object_t * __this /* static, unused */, RSA_t1161 * ___rsa, ByteU5BU5D_t550* ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAVP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t550* PKCS1_RSAVP1_m5262 (Object_t * __this /* static, unused */, RSA_t1161 * ___rsa, ByteU5BU5D_t550* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Sign_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[])
extern "C" ByteU5BU5D_t550* PKCS1_Sign_v15_m5263 (Object_t * __this /* static, unused */, RSA_t1161 * ___rsa, HashAlgorithm_t1242 * ___hash, ByteU5BU5D_t550* ___hashValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[])
extern "C" bool PKCS1_Verify_v15_m5264 (Object_t * __this /* static, unused */, RSA_t1161 * ___rsa, HashAlgorithm_t1242 * ___hash, ByteU5BU5D_t550* ___hashValue, ByteU5BU5D_t550* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[],System.Boolean)
extern "C" bool PKCS1_Verify_v15_m5265 (Object_t * __this /* static, unused */, RSA_t1161 * ___rsa, HashAlgorithm_t1242 * ___hash, ByteU5BU5D_t550* ___hashValue, ByteU5BU5D_t550* ___signature, bool ___tryNonStandardEncoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encode_v15(System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t550* PKCS1_Encode_v15_m5266 (Object_t * __this /* static, unused */, HashAlgorithm_t1242 * ___hash, ByteU5BU5D_t550* ___hashValue, int32_t ___emLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
