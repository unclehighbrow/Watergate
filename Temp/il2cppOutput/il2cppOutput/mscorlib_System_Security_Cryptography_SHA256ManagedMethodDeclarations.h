#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.SHA256Managed
struct SHA256Managed_t1749;
// System.Byte[]
struct ByteU5BU5D_t551;

// System.Void System.Security.Cryptography.SHA256Managed::.ctor()
extern "C" void SHA256Managed__ctor_m9296 (SHA256Managed_t1749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA256Managed::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void SHA256Managed_HashCore_m9297 (SHA256Managed_t1749 * __this, ByteU5BU5D_t551* ___rgb, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SHA256Managed::HashFinal()
extern "C" ByteU5BU5D_t551* SHA256Managed_HashFinal_m9298 (SHA256Managed_t1749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA256Managed::Initialize()
extern "C" void SHA256Managed_Initialize_m9299 (SHA256Managed_t1749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA256Managed::ProcessBlock(System.Byte[],System.Int32)
extern "C" void SHA256Managed_ProcessBlock_m9300 (SHA256Managed_t1749 * __this, ByteU5BU5D_t551* ___inputBuffer, int32_t ___inputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA256Managed::ProcessFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C" void SHA256Managed_ProcessFinalBlock_m9301 (SHA256Managed_t1749 * __this, ByteU5BU5D_t551* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA256Managed::AddLength(System.UInt64,System.Byte[],System.Int32)
extern "C" void SHA256Managed_AddLength_m9302 (SHA256Managed_t1749 * __this, uint64_t ___length, ByteU5BU5D_t551* ___buffer, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
