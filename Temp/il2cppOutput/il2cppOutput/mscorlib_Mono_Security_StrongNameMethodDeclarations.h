#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.StrongName
struct StrongName_t1453;
// System.Byte[]
struct ByteU5BU5D_t551;
// System.String
struct String_t;

// System.Void Mono.Security.StrongName::.cctor()
extern "C" void StrongName__cctor_m7330 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.StrongName::get_PublicKey()
extern "C" ByteU5BU5D_t551* StrongName_get_PublicKey_m7331 (StrongName_t1453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.StrongName::get_PublicKeyToken()
extern "C" ByteU5BU5D_t551* StrongName_get_PublicKeyToken_m7332 (StrongName_t1453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.StrongName::get_TokenAlgorithm()
extern "C" String_t* StrongName_get_TokenAlgorithm_m7333 (StrongName_t1453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
