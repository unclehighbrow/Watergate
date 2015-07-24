#pragma once
#include <stdint.h>
// System.Security.Cryptography.RSA
struct RSA_t1162;
// System.Byte[]
struct ByteU5BU5D_t551;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.StrongName
struct  StrongName_t1453  : public Object_t
{
	// System.Security.Cryptography.RSA Mono.Security.StrongName::rsa
	RSA_t1162 * ___rsa_0;
	// System.Byte[] Mono.Security.StrongName::publicKey
	ByteU5BU5D_t551* ___publicKey_1;
	// System.Byte[] Mono.Security.StrongName::keyToken
	ByteU5BU5D_t551* ___keyToken_2;
	// System.String Mono.Security.StrongName::tokenAlgorithm
	String_t* ___tokenAlgorithm_3;
};
struct StrongName_t1453_StaticFields{
	// System.Object Mono.Security.StrongName::lockObject
	Object_t * ___lockObject_4;
	// System.Boolean Mono.Security.StrongName::initialized
	bool ___initialized_5;
};
