#pragma once
#include <stdint.h>
// System.Security.Cryptography.RSA
struct RSA_t1162;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1243;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t532;
// System.Security.Cryptography.AsymmetricSignatureDeformatter
#include "mscorlib_System_Security_Cryptography_AsymmetricSignatureDef.h"
// Mono.Security.Protocol.Tls.RSASslSignatureDeformatter
struct  RSASslSignatureDeformatter_t1300  : public AsymmetricSignatureDeformatter_t1301
{
	// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::key
	RSA_t1162 * ___key_0;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::hash
	HashAlgorithm_t1243 * ___hash_1;
};
struct RSASslSignatureDeformatter_t1300_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::<>f__switch$map15
	Dictionary_2_t532 * ___U3CU3Ef__switchU24map15_2;
};
