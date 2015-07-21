#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RSASslSignatureDeformatter
struct RSASslSignatureDeformatter_t1299;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1036;
// System.Byte[]
struct ByteU5BU5D_t550;
// System.String
struct String_t;

// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSASslSignatureDeformatter__ctor_m5673 (RSASslSignatureDeformatter_t1299 * __this, AsymmetricAlgorithm_t1036 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
extern "C" bool RSASslSignatureDeformatter_VerifySignature_m5674 (RSASslSignatureDeformatter_t1299 * __this, ByteU5BU5D_t550* ___rgbHash, ByteU5BU5D_t550* ___rgbSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::SetHashAlgorithm(System.String)
extern "C" void RSASslSignatureDeformatter_SetHashAlgorithm_m5675 (RSASslSignatureDeformatter_t1299 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSASslSignatureDeformatter_SetKey_m5676 (RSASslSignatureDeformatter_t1299 * __this, AsymmetricAlgorithm_t1036 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
