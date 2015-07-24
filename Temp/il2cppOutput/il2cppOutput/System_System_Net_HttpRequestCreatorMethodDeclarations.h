#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t1018;
// System.Net.WebRequest
struct WebRequest_t1012;
// System.Uri
struct Uri_t623;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m4068 (HttpRequestCreator_t1018 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1012 * HttpRequestCreator_Create_m4069 (HttpRequestCreator_t1018 * __this, Uri_t623 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
