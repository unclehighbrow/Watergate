#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.AsyncCallback
struct AsyncCallback_t224;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t223;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.AsyncCallback::.ctor(System.Object,System.IntPtr)
extern "C" void AsyncCallback__ctor_m6024 (AsyncCallback_t224 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AsyncCallback::Invoke(System.IAsyncResult)
extern "C" void AsyncCallback_Invoke_m6876 (AsyncCallback_t224 * __this, Object_t * ___ar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AsyncCallback_t224(Il2CppObject* delegate, Object_t * ___ar);
// System.IAsyncResult System.AsyncCallback::BeginInvoke(System.IAsyncResult,System.AsyncCallback,System.Object)
extern "C" Object_t * AsyncCallback_BeginInvoke_m6877 (AsyncCallback_t224 * __this, Object_t * ___ar, AsyncCallback_t224 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AsyncCallback::EndInvoke(System.IAsyncResult)
extern "C" void AsyncCallback_EndInvoke_m6878 (AsyncCallback_t224 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
