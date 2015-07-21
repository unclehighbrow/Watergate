#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t1039;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1037;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1036;
// System.Security.Cryptography.Oid
struct Oid_t1038;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1047;
// System.Byte[]
struct ByteU5BU5D_t550;
// System.Security.Cryptography.DSA
struct DSA_t1160;
// System.Security.Cryptography.RSA
struct RSA_t1161;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m4169 (PublicKey_t1039 * __this, X509Certificate_t1047 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t1037 * PublicKey_get_EncodedKeyValue_m4170 (PublicKey_t1039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t1037 * PublicKey_get_EncodedParameters_m4171 (PublicKey_t1039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t1036 * PublicKey_get_Key_m4172 (PublicKey_t1039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t1038 * PublicKey_get_Oid_m4173 (PublicKey_t1039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t550* PublicKey_GetUnsignedBigInteger_m4174 (Object_t * __this /* static, unused */, ByteU5BU5D_t550* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t1160 * PublicKey_DecodeDSA_m4175 (Object_t * __this /* static, unused */, ByteU5BU5D_t550* ___rawPublicKey, ByteU5BU5D_t550* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t1161 * PublicKey_DecodeRSA_m4176 (Object_t * __this /* static, unused */, ByteU5BU5D_t550* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
