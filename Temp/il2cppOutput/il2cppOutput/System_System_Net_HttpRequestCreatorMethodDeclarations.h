#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t1017;
// System.Net.WebRequest
struct WebRequest_t1011;
// System.Uri
struct Uri_t622;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m4060 (HttpRequestCreator_t1017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1011 * HttpRequestCreator_Create_m4061 (HttpRequestCreator_t1017 * __this, Uri_t622 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
