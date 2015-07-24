#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t577;
// System.Object
struct Object_t;
// System.Single[]
struct SingleU5BU5D_t576;
// System.IAsyncResult
struct IAsyncResult_t223;
// System.AsyncCallback
struct AsyncCallback_t224;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr)
extern "C" void PCMReaderCallback__ctor_m2958 (PCMReaderCallback_t577 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
extern "C" void PCMReaderCallback_Invoke_m2959 (PCMReaderCallback_t577 * __this, SingleU5BU5D_t576* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#include "mscorlib_ArrayTypes.h"
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void pinvoke_delegate_wrapper_PCMReaderCallback_t577(Il2CppObject* delegate, SingleU5BU5D_t576* ___data);
// System.IAsyncResult UnityEngine.AudioClip/PCMReaderCallback::BeginInvoke(System.Single[],System.AsyncCallback,System.Object)
extern "C" Object_t * PCMReaderCallback_BeginInvoke_m2960 (PCMReaderCallback_t577 * __this, SingleU5BU5D_t576* ___data, AsyncCallback_t224 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult)
extern "C" void PCMReaderCallback_EndInvoke_m2961 (PCMReaderCallback_t577 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
