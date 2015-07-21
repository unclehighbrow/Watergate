#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t1012;
// System.Net.WebRequest
struct WebRequest_t1011;
// System.Uri
struct Uri_t622;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m4052 (FileWebRequestCreator_t1012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1011 * FileWebRequestCreator_Create_m4053 (FileWebRequestCreator_t1012 * __this, Uri_t622 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
