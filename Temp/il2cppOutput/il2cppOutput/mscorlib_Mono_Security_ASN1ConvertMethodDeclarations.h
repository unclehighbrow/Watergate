#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.ASN1Convert
struct ASN1Convert_t1448;
// Mono.Security.ASN1
struct ASN1_t1438;
// System.String
struct String_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Int32 Mono.Security.ASN1Convert::ToInt32(Mono.Security.ASN1)
extern "C" int32_t ASN1Convert_ToInt32_m7307 (Object_t * __this /* static, unused */, ASN1_t1438 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.ASN1Convert::ToOid(Mono.Security.ASN1)
extern "C" String_t* ASN1Convert_ToOid_m7308 (Object_t * __this /* static, unused */, ASN1_t1438 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.ASN1Convert::ToDateTime(Mono.Security.ASN1)
extern "C" DateTime_t77  ASN1Convert_ToDateTime_m7309 (Object_t * __this /* static, unused */, ASN1_t1438 * ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
