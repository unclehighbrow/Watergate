﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t693;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t658;
// Mono.Security.ASN1
struct ASN1_t689;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.PKCS7/ContentInfo::.ctor()
extern "C" void ContentInfo__ctor_m3506 (ContentInfo_t693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(System.String)
extern "C" void ContentInfo__ctor_m3507 (ContentInfo_t693 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(System.Byte[])
extern "C" void ContentInfo__ctor_m3508 (ContentInfo_t693 * __this, ByteU5BU5D_t658* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(Mono.Security.ASN1)
extern "C" void ContentInfo__ctor_m3509 (ContentInfo_t693 * __this, ASN1_t689 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::get_ASN1()
extern "C" ASN1_t689 * ContentInfo_get_ASN1_m3510 (ContentInfo_t693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::get_Content()
extern "C" ASN1_t689 * ContentInfo_get_Content_m3511 (ContentInfo_t693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::set_Content(Mono.Security.ASN1)
extern "C" void ContentInfo_set_Content_m3512 (ContentInfo_t693 * __this, ASN1_t689 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.PKCS7/ContentInfo::get_ContentType()
extern "C" String_t* ContentInfo_get_ContentType_m3513 (ContentInfo_t693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::set_ContentType(System.String)
extern "C" void ContentInfo_set_ContentType_m3514 (ContentInfo_t693 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::GetASN1()
extern "C" ASN1_t689 * ContentInfo_GetASN1_m3515 (ContentInfo_t693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
