#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.ClientSessionCache
struct ClientSessionCache_t1283;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t551;
// Mono.Security.Protocol.Tls.ClientSessionInfo
struct ClientSessionInfo_t1282;
// Mono.Security.Protocol.Tls.Context
struct Context_t1273;

// System.Void Mono.Security.Protocol.Tls.ClientSessionCache::.cctor()
extern "C" void ClientSessionCache__cctor_m5557 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionCache::Add(System.String,System.Byte[])
extern "C" void ClientSessionCache_Add_m5558 (Object_t * __this /* static, unused */, String_t* ___host, ByteU5BU5D_t551* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.ClientSessionCache::FromHost(System.String)
extern "C" ByteU5BU5D_t551* ClientSessionCache_FromHost_m5559 (Object_t * __this /* static, unused */, String_t* ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ClientSessionInfo Mono.Security.Protocol.Tls.ClientSessionCache::FromContext(Mono.Security.Protocol.Tls.Context,System.Boolean)
extern "C" ClientSessionInfo_t1282 * ClientSessionCache_FromContext_m5560 (Object_t * __this /* static, unused */, Context_t1273 * ___context, bool ___checkValidity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ClientSessionCache::SetContextInCache(Mono.Security.Protocol.Tls.Context)
extern "C" bool ClientSessionCache_SetContextInCache_m5561 (Object_t * __this /* static, unused */, Context_t1273 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ClientSessionCache::SetContextFromCache(Mono.Security.Protocol.Tls.Context)
extern "C" bool ClientSessionCache_SetContextFromCache_m5562 (Object_t * __this /* static, unused */, Context_t1273 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
