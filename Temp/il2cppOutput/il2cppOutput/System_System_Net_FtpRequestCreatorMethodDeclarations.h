#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t1014;
// System.Net.WebRequest
struct WebRequest_t1012;
// System.Uri
struct Uri_t623;

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m4062 (FtpRequestCreator_t1014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1012 * FtpRequestCreator_Create_m4063 (FtpRequestCreator_t1014 * __this, Uri_t623 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
