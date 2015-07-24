#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DESTransform
struct DESTransform_t1726;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1250;
// System.Byte[]
struct ByteU5BU5D_t551;
// System.UInt32[]
struct UInt32U5BU5D_t1227;

// System.Void System.Security.Cryptography.DESTransform::.ctor(System.Security.Cryptography.SymmetricAlgorithm,System.Boolean,System.Byte[],System.Byte[])
extern "C" void DESTransform__ctor_m9081 (DESTransform_t1726 * __this, SymmetricAlgorithm_t1250 * ___symmAlgo, bool ___encryption, ByteU5BU5D_t551* ___key, ByteU5BU5D_t551* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::.cctor()
extern "C" void DESTransform__cctor_m9082 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.DESTransform::CipherFunct(System.UInt32,System.Int32)
extern "C" uint32_t DESTransform_CipherFunct_m9083 (DESTransform_t1726 * __this, uint32_t ___r, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::Permutation(System.Byte[],System.Byte[],System.UInt32[],System.Boolean)
extern "C" void DESTransform_Permutation_m9084 (Object_t * __this /* static, unused */, ByteU5BU5D_t551* ___input, ByteU5BU5D_t551* ___output, UInt32U5BU5D_t1227* ___permTab, bool ___preSwap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::BSwap(System.Byte[])
extern "C" void DESTransform_BSwap_m9085 (Object_t * __this /* static, unused */, ByteU5BU5D_t551* ___byteBuff, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::SetKey(System.Byte[])
extern "C" void DESTransform_SetKey_m9086 (DESTransform_t1726 * __this, ByteU5BU5D_t551* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::ProcessBlock(System.Byte[],System.Byte[])
extern "C" void DESTransform_ProcessBlock_m9087 (DESTransform_t1726 * __this, ByteU5BU5D_t551* ___input, ByteU5BU5D_t551* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::ECB(System.Byte[],System.Byte[])
extern "C" void DESTransform_ECB_m9088 (DESTransform_t1726 * __this, ByteU5BU5D_t551* ___input, ByteU5BU5D_t551* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DESTransform::GetStrongKey()
extern "C" ByteU5BU5D_t551* DESTransform_GetStrongKey_m9089 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
