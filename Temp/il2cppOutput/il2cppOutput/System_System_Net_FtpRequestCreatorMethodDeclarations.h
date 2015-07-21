#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t1013;
// System.Net.WebRequest
struct WebRequest_t1011;
// System.Uri
struct Uri_t622;

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m4054 (FtpRequestCreator_t1013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1011 * FtpRequestCreator_Create_m4055 (FtpRequestCreator_t1013 * __this, Uri_t622 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
