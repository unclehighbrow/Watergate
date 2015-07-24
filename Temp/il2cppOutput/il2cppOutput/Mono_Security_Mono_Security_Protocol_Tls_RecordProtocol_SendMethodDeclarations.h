#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult
struct SendRecordAsyncResult_t1299;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t1298;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t65;
// System.Threading.WaitHandle
struct WaitHandle_t1342;
// System.AsyncCallback
struct AsyncCallback_t224;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,Mono.Security.Protocol.Tls.Handshake.HandshakeMessage)
extern "C" void SendRecordAsyncResult__ctor_m5642 (SendRecordAsyncResult_t1299 * __this, AsyncCallback_t224 * ___userCallback, Object_t * ___userState, HandshakeMessage_t1298 * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_Message()
extern "C" HandshakeMessage_t1298 * SendRecordAsyncResult_get_Message_m5643 (SendRecordAsyncResult_t1299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncState()
extern "C" Object_t * SendRecordAsyncResult_get_AsyncState_m5644 (SendRecordAsyncResult_t1299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncException()
extern "C" Exception_t65 * SendRecordAsyncResult_get_AsyncException_m5645 (SendRecordAsyncResult_t1299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_CompletedWithError()
extern "C" bool SendRecordAsyncResult_get_CompletedWithError_m5646 (SendRecordAsyncResult_t1299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1342 * SendRecordAsyncResult_get_AsyncWaitHandle_m5647 (SendRecordAsyncResult_t1299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_IsCompleted()
extern "C" bool SendRecordAsyncResult_get_IsCompleted_m5648 (SendRecordAsyncResult_t1299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::SetComplete(System.Exception)
extern "C" void SendRecordAsyncResult_SetComplete_m5649 (SendRecordAsyncResult_t1299 * __this, Exception_t65 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::SetComplete()
extern "C" void SendRecordAsyncResult_SetComplete_m5650 (SendRecordAsyncResult_t1299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
