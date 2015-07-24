﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.SecurityParameters
struct SecurityParameters_t1287;
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t1275;
// System.Byte[]
struct ByteU5BU5D_t551;

// System.Void Mono.Security.Protocol.Tls.SecurityParameters::.ctor()
extern "C" void SecurityParameters__ctor_m5689 (SecurityParameters_t1287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.SecurityParameters::get_Cipher()
extern "C" CipherSuite_t1275 * SecurityParameters_get_Cipher_m5690 (SecurityParameters_t1287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_Cipher(Mono.Security.Protocol.Tls.CipherSuite)
extern "C" void SecurityParameters_set_Cipher_m5691 (SecurityParameters_t1287 * __this, CipherSuite_t1275 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::get_ClientWriteMAC()
extern "C" ByteU5BU5D_t551* SecurityParameters_get_ClientWriteMAC_m5692 (SecurityParameters_t1287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_ClientWriteMAC(System.Byte[])
extern "C" void SecurityParameters_set_ClientWriteMAC_m5693 (SecurityParameters_t1287 * __this, ByteU5BU5D_t551* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::get_ServerWriteMAC()
extern "C" ByteU5BU5D_t551* SecurityParameters_get_ServerWriteMAC_m5694 (SecurityParameters_t1287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_ServerWriteMAC(System.Byte[])
extern "C" void SecurityParameters_set_ServerWriteMAC_m5695 (SecurityParameters_t1287 * __this, ByteU5BU5D_t551* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::Clear()
extern "C" void SecurityParameters_Clear_m5696 (SecurityParameters_t1287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
