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

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t910;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t716;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t911;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t807;
// System.Security.Cryptography.Oid
struct Oid_t912;
// System.Byte[]
struct ByteU5BU5D_t658;
// System.Security.Cryptography.DSA
struct DSA_t717;
// System.Security.Cryptography.RSA
struct RSA_t710;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m4632 (PublicKey_t910 * __this, X509Certificate_t716 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t911 * PublicKey_get_EncodedKeyValue_m4633 (PublicKey_t910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t911 * PublicKey_get_EncodedParameters_m4634 (PublicKey_t910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t807 * PublicKey_get_Key_m4635 (PublicKey_t910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t912 * PublicKey_get_Oid_m4636 (PublicKey_t910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t658* PublicKey_GetUnsignedBigInteger_m4637 (Object_t * __this /* static, unused */, ByteU5BU5D_t658* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t717 * PublicKey_DecodeDSA_m4638 (Object_t * __this /* static, unused */, ByteU5BU5D_t658* ___rawPublicKey, ByteU5BU5D_t658* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t710 * PublicKey_DecodeRSA_m4639 (Object_t * __this /* static, unused */, ByteU5BU5D_t658* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
