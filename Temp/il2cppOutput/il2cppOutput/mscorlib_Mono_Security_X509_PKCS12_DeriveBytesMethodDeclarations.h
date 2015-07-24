#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.PKCS12/DeriveBytes
struct DeriveBytes_t1440;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t551;

// System.Void Mono.Security.X509.PKCS12/DeriveBytes::.ctor()
extern "C" void DeriveBytes__ctor_m7222 (DeriveBytes_t1440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::.cctor()
extern "C" void DeriveBytes__cctor_m7223 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_HashName(System.String)
extern "C" void DeriveBytes_set_HashName_m7224 (DeriveBytes_t1440 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_IterationCount(System.Int32)
extern "C" void DeriveBytes_set_IterationCount_m7225 (DeriveBytes_t1440 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_Password(System.Byte[])
extern "C" void DeriveBytes_set_Password_m7226 (DeriveBytes_t1440 * __this, ByteU5BU5D_t551* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_Salt(System.Byte[])
extern "C" void DeriveBytes_set_Salt_m7227 (DeriveBytes_t1440 * __this, ByteU5BU5D_t551* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::Adjust(System.Byte[],System.Int32,System.Byte[])
extern "C" void DeriveBytes_Adjust_m7228 (DeriveBytes_t1440 * __this, ByteU5BU5D_t551* ___a, int32_t ___aOff, ByteU5BU5D_t551* ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::Derive(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t551* DeriveBytes_Derive_m7229 (DeriveBytes_t1440 * __this, ByteU5BU5D_t551* ___diversifier, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveKey(System.Int32)
extern "C" ByteU5BU5D_t551* DeriveBytes_DeriveKey_m7230 (DeriveBytes_t1440 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveIV(System.Int32)
extern "C" ByteU5BU5D_t551* DeriveBytes_DeriveIV_m7231 (DeriveBytes_t1440 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveMAC(System.Int32)
extern "C" ByteU5BU5D_t551* DeriveBytes_DeriveMAC_m7232 (DeriveBytes_t1440 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
