#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSA
struct DSA_t1161;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t551;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void System.Security.Cryptography.DSA::.ctor()
extern "C" void DSA__ctor_m9095 (DSA_t1161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.DSA::Create()
extern "C" DSA_t1161 * DSA_Create_m4914 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.DSA::Create(System.String)
extern "C" DSA_t1161 * DSA_Create_m9096 (Object_t * __this /* static, unused */, String_t* ___algName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSA::CreateSignature(System.Byte[])
// System.Security.Cryptography.DSAParameters System.Security.Cryptography.DSA::ExportParameters(System.Boolean)
// System.Void System.Security.Cryptography.DSA::ZeroizePrivateKey(System.Security.Cryptography.DSAParameters)
extern "C" void DSA_ZeroizePrivateKey_m9097 (DSA_t1161 * __this, DSAParameters_t1183  ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSA::FromXmlString(System.String)
extern "C" void DSA_FromXmlString_m9098 (DSA_t1161 * __this, String_t* ___xmlString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSA::ImportParameters(System.Security.Cryptography.DSAParameters)
// System.String System.Security.Cryptography.DSA::ToXmlString(System.Boolean)
extern "C" String_t* DSA_ToXmlString_m9099 (DSA_t1161 * __this, bool ___includePrivateParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSA::VerifySignature(System.Byte[],System.Byte[])
