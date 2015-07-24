#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.SHA1CryptoServiceProvider
struct SHA1CryptoServiceProvider_t1747;
// System.Byte[]
struct ByteU5BU5D_t551;

// System.Void System.Security.Cryptography.SHA1CryptoServiceProvider::.ctor()
extern "C" void SHA1CryptoServiceProvider__ctor_m9284 (SHA1CryptoServiceProvider_t1747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1CryptoServiceProvider::Finalize()
extern "C" void SHA1CryptoServiceProvider_Finalize_m9285 (SHA1CryptoServiceProvider_t1747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1CryptoServiceProvider::Dispose(System.Boolean)
extern "C" void SHA1CryptoServiceProvider_Dispose_m9286 (SHA1CryptoServiceProvider_t1747 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1CryptoServiceProvider::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void SHA1CryptoServiceProvider_HashCore_m9287 (SHA1CryptoServiceProvider_t1747 * __this, ByteU5BU5D_t551* ___rgb, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SHA1CryptoServiceProvider::HashFinal()
extern "C" ByteU5BU5D_t551* SHA1CryptoServiceProvider_HashFinal_m9288 (SHA1CryptoServiceProvider_t1747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1CryptoServiceProvider::Initialize()
extern "C" void SHA1CryptoServiceProvider_Initialize_m9289 (SHA1CryptoServiceProvider_t1747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
