#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RC2CryptoServiceProvider
struct RC2CryptoServiceProvider_t1737;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1274;
// System.Byte[]
struct ByteU5BU5D_t551;

// System.Void System.Security.Cryptography.RC2CryptoServiceProvider::.ctor()
extern "C" void RC2CryptoServiceProvider__ctor_m9180 (RC2CryptoServiceProvider_t1737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RC2CryptoServiceProvider::get_EffectiveKeySize()
extern "C" int32_t RC2CryptoServiceProvider_get_EffectiveKeySize_m9181 (RC2CryptoServiceProvider_t1737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RC2CryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * RC2CryptoServiceProvider_CreateDecryptor_m9182 (RC2CryptoServiceProvider_t1737 * __this, ByteU5BU5D_t551* ___rgbKey, ByteU5BU5D_t551* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RC2CryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * RC2CryptoServiceProvider_CreateEncryptor_m9183 (RC2CryptoServiceProvider_t1737 * __this, ByteU5BU5D_t551* ___rgbKey, ByteU5BU5D_t551* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2CryptoServiceProvider::GenerateIV()
extern "C" void RC2CryptoServiceProvider_GenerateIV_m9184 (RC2CryptoServiceProvider_t1737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2CryptoServiceProvider::GenerateKey()
extern "C" void RC2CryptoServiceProvider_GenerateKey_m9185 (RC2CryptoServiceProvider_t1737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
