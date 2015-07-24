#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t1451;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1450;
// System.Byte[]
struct ByteU5BU5D_t551;
// Mono.Security.ASN1
struct ASN1_t1438;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m7326 (EncryptedData_t1451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m7327 (EncryptedData_t1451 * __this, ASN1_t1438 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t1450 * EncryptedData_get_EncryptionAlgorithm_m7328 (EncryptedData_t1451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t551* EncryptedData_get_EncryptedContent_m7329 (EncryptedData_t1451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
