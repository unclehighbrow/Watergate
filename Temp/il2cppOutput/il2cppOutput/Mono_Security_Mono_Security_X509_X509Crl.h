#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t998;
// System.Byte[]
struct ByteU5BU5D_t551;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1190;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t532;
// System.Object
#include "mscorlib_System_Object.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// Mono.Security.X509.X509Crl
struct  X509Crl_t1165  : public Object_t
{
	// System.String Mono.Security.X509.X509Crl::issuer
	String_t* ___issuer_0;
	// System.Byte Mono.Security.X509.X509Crl::version
	uint8_t ___version_1;
	// System.DateTime Mono.Security.X509.X509Crl::thisUpdate
	DateTime_t77  ___thisUpdate_2;
	// System.DateTime Mono.Security.X509.X509Crl::nextUpdate
	DateTime_t77  ___nextUpdate_3;
	// System.Collections.ArrayList Mono.Security.X509.X509Crl::entries
	ArrayList_t998 * ___entries_4;
	// System.String Mono.Security.X509.X509Crl::signatureOID
	String_t* ___signatureOID_5;
	// System.Byte[] Mono.Security.X509.X509Crl::signature
	ByteU5BU5D_t551* ___signature_6;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::extensions
	X509ExtensionCollection_t1190 * ___extensions_7;
	// System.Byte[] Mono.Security.X509.X509Crl::encoded
	ByteU5BU5D_t551* ___encoded_8;
	// System.Byte[] Mono.Security.X509.X509Crl::hash_value
	ByteU5BU5D_t551* ___hash_value_9;
};
struct X509Crl_t1165_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Crl::<>f__switch$map13
	Dictionary_2_t532 * ___U3CU3Ef__switchU24map13_10;
};
