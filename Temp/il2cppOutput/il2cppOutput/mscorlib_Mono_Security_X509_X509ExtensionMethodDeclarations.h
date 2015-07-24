#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Extension
struct X509Extension_t1447;
// Mono.Security.ASN1
struct ASN1_t1438;
// System.Object
struct Object_t;
// System.Text.StringBuilder
struct StringBuilder_t343;
// System.String
struct String_t;

// System.Void Mono.Security.X509.X509Extension::.ctor(Mono.Security.ASN1)
extern "C" void X509Extension__ctor_m7281 (X509Extension_t1447 * __this, ASN1_t1438 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::Decode()
extern "C" void X509Extension_Decode_m7282 (X509Extension_t1447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Extension::Equals(System.Object)
extern "C" bool X509Extension_Equals_m7283 (X509Extension_t1447 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509Extension::GetHashCode()
extern "C" int32_t X509Extension_GetHashCode_m7284 (X509Extension_t1447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::WriteLine(System.Text.StringBuilder,System.Int32,System.Int32)
extern "C" void X509Extension_WriteLine_m7285 (X509Extension_t1447 * __this, StringBuilder_t343 * ___sb, int32_t ___n, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Extension::ToString()
extern "C" String_t* X509Extension_ToString_m7286 (X509Extension_t1447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
