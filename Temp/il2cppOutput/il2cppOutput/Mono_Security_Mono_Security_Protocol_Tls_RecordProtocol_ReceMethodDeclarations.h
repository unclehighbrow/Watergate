#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t767;
// System.AsyncCallback
struct AsyncCallback_t235;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t658;
// System.IO.Stream
struct Stream_t769;
// System.Exception
struct Exception_t65;
// System.Threading.WaitHandle
struct WaitHandle_t821;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m3962 (ReceiveRecordAsyncResult_t767 * __this, AsyncCallback_t235 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t658* ___initialBuffer, Stream_t769 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t769 * ReceiveRecordAsyncResult_get_Record_m3963 (ReceiveRecordAsyncResult_t767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t658* ReceiveRecordAsyncResult_get_ResultingBuffer_m3964 (ReceiveRecordAsyncResult_t767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t658* ReceiveRecordAsyncResult_get_InitialBuffer_m3965 (ReceiveRecordAsyncResult_t767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m3966 (ReceiveRecordAsyncResult_t767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t65 * ReceiveRecordAsyncResult_get_AsyncException_m3967 (ReceiveRecordAsyncResult_t767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m3968 (ReceiveRecordAsyncResult_t767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t821 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m3969 (ReceiveRecordAsyncResult_t767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m3970 (ReceiveRecordAsyncResult_t767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3971 (ReceiveRecordAsyncResult_t767 * __this, Exception_t65 * ___ex, ByteU5BU5D_t658* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3972 (ReceiveRecordAsyncResult_t767 * __this, Exception_t65 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3973 (ReceiveRecordAsyncResult_t767 * __this, ByteU5BU5D_t658* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
