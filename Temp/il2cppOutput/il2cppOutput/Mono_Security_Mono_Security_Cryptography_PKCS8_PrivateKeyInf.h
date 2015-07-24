#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t551;
// System.Collections.ArrayList
struct ArrayList_t998;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct  PrivateKeyInfo_t1246  : public Object_t
{
	// System.Int32 Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_version
	int32_t ____version_0;
	// System.String Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_algorithm
	String_t* ____algorithm_1;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_key
	ByteU5BU5D_t551* ____key_2;
	// System.Collections.ArrayList Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_list
	ArrayList_t998 * ____list_3;
};
