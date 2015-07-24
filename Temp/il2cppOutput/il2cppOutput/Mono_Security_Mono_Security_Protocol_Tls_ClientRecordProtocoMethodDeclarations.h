#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.ClientRecordProtocol
struct ClientRecordProtocol_t1280;
// System.IO.Stream
struct Stream_t1296;
// Mono.Security.Protocol.Tls.ClientContext
struct ClientContext_t1279;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t1298;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t1288;
// System.Byte[]
struct ByteU5BU5D_t551;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"

// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::.ctor(System.IO.Stream,Mono.Security.Protocol.Tls.ClientContext)
extern "C" void ClientRecordProtocol__ctor_m5540 (ClientRecordProtocol_t1280 * __this, Stream_t1296 * ___innerStream, ClientContext_t1279 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::GetMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" HandshakeMessage_t1298 * ClientRecordProtocol_GetMessage_m5541 (ClientRecordProtocol_t1280 * __this, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::ProcessHandshakeMessage(Mono.Security.Protocol.Tls.TlsStream)
extern "C" void ClientRecordProtocol_ProcessHandshakeMessage_m5542 (ClientRecordProtocol_t1280 * __this, TlsStream_t1288 * ___handMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createClientHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" HandshakeMessage_t1298 * ClientRecordProtocol_createClientHandshakeMessage_m5543 (ClientRecordProtocol_t1280 * __this, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createServerHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.Byte[])
extern "C" HandshakeMessage_t1298 * ClientRecordProtocol_createServerHandshakeMessage_m5544 (ClientRecordProtocol_t1280 * __this, uint8_t ___type, ByteU5BU5D_t551* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
