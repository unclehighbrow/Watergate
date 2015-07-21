#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.Extensions.AuthorityKeyIdentifierExtension
struct AuthorityKeyIdentifierExtension_t1190;
// System.Byte[]
struct ByteU5BU5D_t550;
// Mono.Security.X509.X509Extension
struct X509Extension_t1165;
// System.String
struct String_t;

// System.Void Mono.Security.X509.Extensions.AuthorityKeyIdentifierExtension::.ctor(Mono.Security.X509.X509Extension)
extern "C" void AuthorityKeyIdentifierExtension__ctor_m4965 (AuthorityKeyIdentifierExtension_t1190 * __this, X509Extension_t1165 * ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.AuthorityKeyIdentifierExtension::Decode()
extern "C" void AuthorityKeyIdentifierExtension_Decode_m5414 (AuthorityKeyIdentifierExtension_t1190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.Extensions.AuthorityKeyIdentifierExtension::get_Identifier()
extern "C" ByteU5BU5D_t550* AuthorityKeyIdentifierExtension_get_Identifier_m4966 (AuthorityKeyIdentifierExtension_t1190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.AuthorityKeyIdentifierExtension::ToString()
extern "C" String_t* AuthorityKeyIdentifierExtension_ToString_m5415 (AuthorityKeyIdentifierExtension_t1190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
