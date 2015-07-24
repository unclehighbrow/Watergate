#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.FileStreamAsyncResult
struct FileStreamAsyncResult_t1522;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t1342;
// System.AsyncCallback
struct AsyncCallback_t224;
// System.IAsyncResult
struct IAsyncResult_t223;

// System.Void System.IO.FileStreamAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C" void FileStreamAsyncResult__ctor_m7914 (FileStreamAsyncResult_t1522 * __this, AsyncCallback_t224 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStreamAsyncResult::CBWrapper(System.IAsyncResult)
extern "C" void FileStreamAsyncResult_CBWrapper_m7915 (Object_t * __this /* static, unused */, Object_t * ___ares, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.IO.FileStreamAsyncResult::get_AsyncState()
extern "C" Object_t * FileStreamAsyncResult_get_AsyncState_m7916 (FileStreamAsyncResult_t1522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.IO.FileStreamAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1342 * FileStreamAsyncResult_get_AsyncWaitHandle_m7917 (FileStreamAsyncResult_t1522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStreamAsyncResult::get_IsCompleted()
extern "C" bool FileStreamAsyncResult_get_IsCompleted_m7918 (FileStreamAsyncResult_t1522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
