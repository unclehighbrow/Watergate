#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.StreamAsyncResult
struct StreamAsyncResult_t1530;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t1342;
// System.Exception
struct Exception_t65;

// System.Void System.IO.StreamAsyncResult::.ctor(System.Object)
extern "C" void StreamAsyncResult__ctor_m8009 (StreamAsyncResult_t1530 * __this, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamAsyncResult::SetComplete(System.Exception)
extern "C" void StreamAsyncResult_SetComplete_m8010 (StreamAsyncResult_t1530 * __this, Exception_t65 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamAsyncResult::SetComplete(System.Exception,System.Int32)
extern "C" void StreamAsyncResult_SetComplete_m8011 (StreamAsyncResult_t1530 * __this, Exception_t65 * ___e, int32_t ___nbytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.IO.StreamAsyncResult::get_AsyncState()
extern "C" Object_t * StreamAsyncResult_get_AsyncState_m8012 (StreamAsyncResult_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.IO.StreamAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1342 * StreamAsyncResult_get_AsyncWaitHandle_m8013 (StreamAsyncResult_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.StreamAsyncResult::get_IsCompleted()
extern "C" bool StreamAsyncResult_get_IsCompleted_m8014 (StreamAsyncResult_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.IO.StreamAsyncResult::get_Exception()
extern "C" Exception_t65 * StreamAsyncResult_get_Exception_m8015 (StreamAsyncResult_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamAsyncResult::get_NBytes()
extern "C" int32_t StreamAsyncResult_get_NBytes_m8016 (StreamAsyncResult_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.StreamAsyncResult::get_Done()
extern "C" bool StreamAsyncResult_get_Done_m8017 (StreamAsyncResult_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamAsyncResult::set_Done(System.Boolean)
extern "C" void StreamAsyncResult_set_Done_m8018 (StreamAsyncResult_t1530 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
