#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t1296;
// System.IO.Stream
struct Stream_t1295;
// System.Byte[]
struct ByteU5BU5D_t550;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t64;
// System.Threading.WaitHandle
struct WaitHandle_t1341;
// System.AsyncCallback
struct AsyncCallback_t223;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m5622 (ReceiveRecordAsyncResult_t1296 * __this, AsyncCallback_t223 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t550* ___initialBuffer, Stream_t1295 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t1295 * ReceiveRecordAsyncResult_get_Record_m5623 (ReceiveRecordAsyncResult_t1296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t550* ReceiveRecordAsyncResult_get_ResultingBuffer_m5624 (ReceiveRecordAsyncResult_t1296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t550* ReceiveRecordAsyncResult_get_InitialBuffer_m5625 (ReceiveRecordAsyncResult_t1296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m5626 (ReceiveRecordAsyncResult_t1296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t64 * ReceiveRecordAsyncResult_get_AsyncException_m5627 (ReceiveRecordAsyncResult_t1296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m5628 (ReceiveRecordAsyncResult_t1296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1341 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m5629 (ReceiveRecordAsyncResult_t1296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m5630 (ReceiveRecordAsyncResult_t1296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m5631 (ReceiveRecordAsyncResult_t1296 * __this, Exception_t64 * ___ex, ByteU5BU5D_t550* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m5632 (ReceiveRecordAsyncResult_t1296 * __this, Exception_t64 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m5633 (ReceiveRecordAsyncResult_t1296 * __this, ByteU5BU5D_t550* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
