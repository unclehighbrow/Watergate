#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUI/WindowFunction
struct WindowFunction_t509;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t223;
// System.AsyncCallback
struct AsyncCallback_t224;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.GUI/WindowFunction::.ctor(System.Object,System.IntPtr)
extern "C" void WindowFunction__ctor_m2402 (WindowFunction_t509 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI/WindowFunction::Invoke(System.Int32)
extern "C" void WindowFunction_Invoke_m2403 (WindowFunction_t509 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_WindowFunction_t509(Il2CppObject* delegate, int32_t ___id);
// System.IAsyncResult UnityEngine.GUI/WindowFunction::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * WindowFunction_BeginInvoke_m2404 (WindowFunction_t509 * __this, int32_t ___id, AsyncCallback_t224 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI/WindowFunction::EndInvoke(System.IAsyncResult)
extern "C" void WindowFunction_EndInvoke_m2405 (WindowFunction_t509 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
