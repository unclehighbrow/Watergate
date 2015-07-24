#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSA
struct RSA_t1162;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t551;
// System.Security.Cryptography.RSAParameters
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"

// System.Void System.Security.Cryptography.RSA::.ctor()
extern "C" void RSA__ctor_m5979 (RSA_t1162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.RSA::Create()
extern "C" RSA_t1162 * RSA_Create_m4911 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.RSA::Create(System.String)
extern "C" RSA_t1162 * RSA_Create_m9224 (Object_t * __this /* static, unused */, String_t* ___algName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSA::EncryptValue(System.Byte[])
// System.Byte[] System.Security.Cryptography.RSA::DecryptValue(System.Byte[])
// System.Security.Cryptography.RSAParameters System.Security.Cryptography.RSA::ExportParameters(System.Boolean)
// System.Void System.Security.Cryptography.RSA::ImportParameters(System.Security.Cryptography.RSAParameters)
// System.Void System.Security.Cryptography.RSA::ZeroizePrivateKey(System.Security.Cryptography.RSAParameters)
extern "C" void RSA_ZeroizePrivateKey_m9225 (RSA_t1162 * __this, RSAParameters_t1181  ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSA::FromXmlString(System.String)
extern "C" void RSA_FromXmlString_m6077 (RSA_t1162 * __this, String_t* ___xmlString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.RSA::ToXmlString(System.Boolean)
extern "C" String_t* RSA_ToXmlString_m9226 (RSA_t1162 * __this, bool ___includePrivateParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
