#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ResolveEventHandler
struct ResolveEventHandler_t1818;
// System.Object
struct Object_t;
// System.Reflection.Assembly
struct Assembly_t1177;
// System.ResolveEventArgs
struct ResolveEventArgs_t1873;
// System.IAsyncResult
struct IAsyncResult_t223;
// System.AsyncCallback
struct AsyncCallback_t224;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ResolveEventHandler__ctor_m10557 (ResolveEventHandler_t1818 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern "C" Assembly_t1177 * ResolveEventHandler_Invoke_m10558 (ResolveEventHandler_t1818 * __this, Object_t * ___sender, ResolveEventArgs_t1873 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Assembly_t1177 * pinvoke_delegate_wrapper_ResolveEventHandler_t1818(Il2CppObject* delegate, Object_t * ___sender, ResolveEventArgs_t1873 * ___args);
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ResolveEventHandler_BeginInvoke_m10559 (ResolveEventHandler_t1818 * __this, Object_t * ___sender, ResolveEventArgs_t1873 * ___args, AsyncCallback_t224 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C" Assembly_t1177 * ResolveEventHandler_EndInvoke_m10560 (ResolveEventHandler_t1818 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
