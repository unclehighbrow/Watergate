#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t1297;
// System.IO.Stream
struct Stream_t1296;
// System.Byte[]
struct ByteU5BU5D_t551;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t65;
// System.Threading.WaitHandle
struct WaitHandle_t1342;
// System.AsyncCallback
struct AsyncCallback_t224;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m5630 (ReceiveRecordAsyncResult_t1297 * __this, AsyncCallback_t224 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t551* ___initialBuffer, Stream_t1296 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t1296 * ReceiveRecordAsyncResult_get_Record_m5631 (ReceiveRecordAsyncResult_t1297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t551* ReceiveRecordAsyncResult_get_ResultingBuffer_m5632 (ReceiveRecordAsyncResult_t1297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t551* ReceiveRecordAsyncResult_get_InitialBuffer_m5633 (ReceiveRecordAsyncResult_t1297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m5634 (ReceiveRecordAsyncResult_t1297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t65 * ReceiveRecordAsyncResult_get_AsyncException_m5635 (ReceiveRecordAsyncResult_t1297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m5636 (ReceiveRecordAsyncResult_t1297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1342 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m5637 (ReceiveRecordAsyncResult_t1297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m5638 (ReceiveRecordAsyncResult_t1297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m5639 (ReceiveRecordAsyncResult_t1297 * __this, Exception_t65 * ___ex, ByteU5BU5D_t551* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m5640 (ReceiveRecordAsyncResult_t1297 * __this, Exception_t65 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m5641 (ReceiveRecordAsyncResult_t1297 * __this, ByteU5BU5D_t551* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
