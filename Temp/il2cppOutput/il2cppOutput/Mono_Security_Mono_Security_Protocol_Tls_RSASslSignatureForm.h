﻿#pragma once
#include <stdint.h>
// System.Security.Cryptography.RSA
struct RSA_t1161;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1242;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t531;
// System.Security.Cryptography.AsymmetricSignatureFormatter
#include "mscorlib_System_Security_Cryptography_AsymmetricSignatureFor.h"
// Mono.Security.Protocol.Tls.RSASslSignatureFormatter
struct  RSASslSignatureFormatter_t1301  : public AsymmetricSignatureFormatter_t1302
{
	// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.RSASslSignatureFormatter::key
	RSA_t1161 * ___key_0;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Protocol.Tls.RSASslSignatureFormatter::hash
	HashAlgorithm_t1242 * ___hash_1;
};
struct RSASslSignatureFormatter_t1301_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Protocol.Tls.RSASslSignatureFormatter::<>f__switch$map16
	Dictionary_2_t531 * ___U3CU3Ef__switchU24map16_2;
};