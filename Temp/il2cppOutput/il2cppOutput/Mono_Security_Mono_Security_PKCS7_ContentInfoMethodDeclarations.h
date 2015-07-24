#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1235;
// Mono.Security.ASN1
struct ASN1_t1163;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t551;

// System.Void Mono.Security.PKCS7/ContentInfo::.ctor()
extern "C" void ContentInfo__ctor_m5227 (ContentInfo_t1235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(System.String)
extern "C" void ContentInfo__ctor_m5228 (ContentInfo_t1235 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(System.Byte[])
extern "C" void ContentInfo__ctor_m5229 (ContentInfo_t1235 * __this, ByteU5BU5D_t551* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(Mono.Security.ASN1)
extern "C" void ContentInfo__ctor_m5230 (ContentInfo_t1235 * __this, ASN1_t1163 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::get_Content()
extern "C" ASN1_t1163 * ContentInfo_get_Content_m5231 (ContentInfo_t1235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::set_Content(Mono.Security.ASN1)
extern "C" void ContentInfo_set_Content_m5232 (ContentInfo_t1235 * __this, ASN1_t1163 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.PKCS7/ContentInfo::get_ContentType()
extern "C" String_t* ContentInfo_get_ContentType_m5233 (ContentInfo_t1235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
