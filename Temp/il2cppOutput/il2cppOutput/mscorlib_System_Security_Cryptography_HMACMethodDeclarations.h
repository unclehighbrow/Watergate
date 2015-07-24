#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.HMAC
struct HMAC_t1348;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t551;
// Mono.Security.Cryptography.BlockProcessor
struct BlockProcessor_t1426;

// System.Void System.Security.Cryptography.HMAC::.ctor()
extern "C" void HMAC__ctor_m9119 (HMAC_t1348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.HMAC::get_BlockSizeValue()
extern "C" int32_t HMAC_get_BlockSizeValue_m9120 (HMAC_t1348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::set_BlockSizeValue(System.Int32)
extern "C" void HMAC_set_BlockSizeValue_m9121 (HMAC_t1348 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::set_HashName(System.String)
extern "C" void HMAC_set_HashName_m9122 (HMAC_t1348 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HMAC::get_Key()
extern "C" ByteU5BU5D_t551* HMAC_get_Key_m9123 (HMAC_t1348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::set_Key(System.Byte[])
extern "C" void HMAC_set_Key_m9124 (HMAC_t1348 * __this, ByteU5BU5D_t551* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Cryptography.BlockProcessor System.Security.Cryptography.HMAC::get_Block()
extern "C" BlockProcessor_t1426 * HMAC_get_Block_m9125 (HMAC_t1348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HMAC::KeySetup(System.Byte[],System.Byte)
extern "C" ByteU5BU5D_t551* HMAC_KeySetup_m9126 (HMAC_t1348 * __this, ByteU5BU5D_t551* ___key, uint8_t ___padding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::Dispose(System.Boolean)
extern "C" void HMAC_Dispose_m9127 (HMAC_t1348 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void HMAC_HashCore_m9128 (HMAC_t1348 * __this, ByteU5BU5D_t551* ___rgb, int32_t ___ib, int32_t ___cb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HMAC::HashFinal()
extern "C" ByteU5BU5D_t551* HMAC_HashFinal_m9129 (HMAC_t1348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::Initialize()
extern "C" void HMAC_Initialize_m9130 (HMAC_t1348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.HMAC System.Security.Cryptography.HMAC::Create()
extern "C" HMAC_t1348 * HMAC_Create_m5989 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.HMAC System.Security.Cryptography.HMAC::Create(System.String)
extern "C" HMAC_t1348 * HMAC_Create_m9131 (Object_t * __this /* static, unused */, String_t* ___algorithmName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
