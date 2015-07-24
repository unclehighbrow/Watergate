#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t1013;
// System.Net.WebRequest
struct WebRequest_t1012;
// System.Uri
struct Uri_t623;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m4060 (FileWebRequestCreator_t1013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1012 * FileWebRequestCreator_Create_m4061 (FileWebRequestCreator_t1013 * __this, Uri_t623 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
