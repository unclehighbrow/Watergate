#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t560;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t223;
// System.AsyncCallback
struct AsyncCallback_t224;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void DisplaysUpdatedDelegate__ctor_m2832 (DisplaysUpdatedDelegate_t560 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::Invoke()
extern "C" void DisplaysUpdatedDelegate_Invoke_m2833 (DisplaysUpdatedDelegate_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_DisplaysUpdatedDelegate_t560(Il2CppObject* delegate);
// System.IAsyncResult UnityEngine.Display/DisplaysUpdatedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * DisplaysUpdatedDelegate_BeginInvoke_m2834 (DisplaysUpdatedDelegate_t560 * __this, AsyncCallback_t224 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::EndInvoke(System.IAsyncResult)
extern "C" void DisplaysUpdatedDelegate_EndInvoke_m2835 (DisplaysUpdatedDelegate_t560 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
