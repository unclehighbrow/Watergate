#pragma once
#include <stdint.h>
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1037;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1038;
// System.Security.Cryptography.Oid
struct Oid_t1039;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t532;
// System.Object
#include "mscorlib_System_Object.h"
// System.Security.Cryptography.X509Certificates.PublicKey
struct  PublicKey_t1040  : public Object_t
{
	// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::_key
	AsymmetricAlgorithm_t1037 * ____key_0;
	// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::_keyValue
	AsnEncodedData_t1038 * ____keyValue_1;
	// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::_params
	AsnEncodedData_t1038 * ____params_2;
	// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::_oid
	Oid_t1039 * ____oid_3;
};
struct PublicKey_t1040_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.X509Certificates.PublicKey::<>f__switch$map9
	Dictionary_2_t532 * ___U3CU3Ef__switchU24map9_4;
};
