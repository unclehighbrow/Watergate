#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/Swapper
struct Swapper_t1371;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t223;
// System.AsyncCallback
struct AsyncCallback_t224;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Array/Swapper::.ctor(System.Object,System.IntPtr)
extern "C" void Swapper__ctor_m6687 (Swapper_t1371 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array/Swapper::Invoke(System.Int32,System.Int32)
extern "C" void Swapper_Invoke_m6688 (Swapper_t1371 * __this, int32_t ___i, int32_t ___j, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_Swapper_t1371(Il2CppObject* delegate, int32_t ___i, int32_t ___j);
// System.IAsyncResult System.Array/Swapper::BeginInvoke(System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * Swapper_BeginInvoke_m6689 (Swapper_t1371 * __this, int32_t ___i, int32_t ___j, AsyncCallback_t224 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array/Swapper::EndInvoke(System.IAsyncResult)
extern "C" void Swapper_EndInvoke_m6690 (Swapper_t1371 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
