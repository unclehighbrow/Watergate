#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.HeaderHandler
struct HeaderHandler_t1890;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t1889;
// System.IAsyncResult
struct IAsyncResult_t223;
// System.AsyncCallback
struct AsyncCallback_t224;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Runtime.Remoting.Messaging.HeaderHandler::.ctor(System.Object,System.IntPtr)
extern "C" void HeaderHandler__ctor_m10541 (HeaderHandler_t1890 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.HeaderHandler::Invoke(System.Runtime.Remoting.Messaging.Header[])
extern "C" Object_t * HeaderHandler_Invoke_m10542 (HeaderHandler_t1890 * __this, HeaderU5BU5D_t1889* ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Object_t * pinvoke_delegate_wrapper_HeaderHandler_t1890(Il2CppObject* delegate, HeaderU5BU5D_t1889* ___headers);
// System.IAsyncResult System.Runtime.Remoting.Messaging.HeaderHandler::BeginInvoke(System.Runtime.Remoting.Messaging.Header[],System.AsyncCallback,System.Object)
extern "C" Object_t * HeaderHandler_BeginInvoke_m10543 (HeaderHandler_t1890 * __this, HeaderU5BU5D_t1889* ___headers, AsyncCallback_t224 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.HeaderHandler::EndInvoke(System.IAsyncResult)
extern "C" Object_t * HeaderHandler_EndInvoke_m10544 (HeaderHandler_t1890 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
