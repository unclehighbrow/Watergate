#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>
struct Transform_1_t2961;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t222;
// System.AsyncCallback
struct AsyncCallback_t223;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m18667_gshared (Transform_1_t2961 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m18667(__this, ___object, ___method, method) (( void (*) (Transform_1_t2961 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m18667_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m18668_gshared (Transform_1_t2961 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m18668(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t2961 *, Object_t *, uint8_t, const MethodInfo*))Transform_1_Invoke_m18668_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m18669_gshared (Transform_1_t2961 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t223 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m18669(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2961 *, Object_t *, uint8_t, AsyncCallback_t223 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m18669_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m18670_gshared (Transform_1_t2961 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m18670(__this, ___result, method) (( Object_t * (*) (Transform_1_t2961 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m18670_gshared)(__this, ___result, method)
