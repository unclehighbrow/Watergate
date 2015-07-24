#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify
struct TlsClientCertificateVerify_t1320;
// Mono.Security.Protocol.Tls.Context
struct Context_t1273;
// System.Security.Cryptography.RSA
struct RSA_t1162;
// System.Byte[]
struct ByteU5BU5D_t551;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C" void TlsClientCertificateVerify__ctor_m5889 (TlsClientCertificateVerify_t1320 * __this, Context_t1273 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::Update()
extern "C" void TlsClientCertificateVerify_Update_m5890 (TlsClientCertificateVerify_t1320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsSsl3()
extern "C" void TlsClientCertificateVerify_ProcessAsSsl3_m5891 (TlsClientCertificateVerify_t1320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsTls1()
extern "C" void TlsClientCertificateVerify_ProcessAsTls1_m5892 (TlsClientCertificateVerify_t1320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getClientCertRSA(System.Security.Cryptography.RSA)
extern "C" RSA_t1162 * TlsClientCertificateVerify_getClientCertRSA_m5893 (TlsClientCertificateVerify_t1320 * __this, RSA_t1162 * ___privKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t551* TlsClientCertificateVerify_getUnsignedBigInteger_m5894 (TlsClientCertificateVerify_t1320 * __this, ByteU5BU5D_t551* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
