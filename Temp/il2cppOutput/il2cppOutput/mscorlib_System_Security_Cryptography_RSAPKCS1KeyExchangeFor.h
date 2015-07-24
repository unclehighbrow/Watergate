#pragma once
#include <stdint.h>
// System.Security.Cryptography.RSA
struct RSA_t1162;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1228;
// System.Security.Cryptography.AsymmetricKeyExchangeFormatter
#include "mscorlib_System_Security_Cryptography_AsymmetricKeyExchangeF.h"
// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct  RSAPKCS1KeyExchangeFormatter_t1361  : public AsymmetricKeyExchangeFormatter_t1722
{
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::rsa
	RSA_t1162 * ___rsa_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::random
	RandomNumberGenerator_t1228 * ___random_1;
};
