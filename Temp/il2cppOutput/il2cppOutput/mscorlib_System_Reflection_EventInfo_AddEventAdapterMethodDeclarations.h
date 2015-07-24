#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_t1570;
// System.Object
struct Object_t;
// System.Delegate
struct Delegate_t361;
// System.IAsyncResult
struct IAsyncResult_t223;
// System.AsyncCallback
struct AsyncCallback_t224;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.EventInfo/AddEventAdapter::.ctor(System.Object,System.IntPtr)
extern "C" void AddEventAdapter__ctor_m8404 (AddEventAdapter_t1570 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.EventInfo/AddEventAdapter::Invoke(System.Object,System.Delegate)
extern "C" void AddEventAdapter_Invoke_m8405 (AddEventAdapter_t1570 * __this, Object_t * ____this, Delegate_t361 * ___dele, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AddEventAdapter_t1570(Il2CppObject* delegate, Object_t * ____this, Delegate_t361 * ___dele);
// System.IAsyncResult System.Reflection.EventInfo/AddEventAdapter::BeginInvoke(System.Object,System.Delegate,System.AsyncCallback,System.Object)
extern "C" Object_t * AddEventAdapter_BeginInvoke_m8406 (AddEventAdapter_t1570 * __this, Object_t * ____this, Delegate_t361 * ___dele, AsyncCallback_t224 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.EventInfo/AddEventAdapter::EndInvoke(System.IAsyncResult)
extern "C" void AddEventAdapter_EndInvoke_m8407 (AddEventAdapter_t1570 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
