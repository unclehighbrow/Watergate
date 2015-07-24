#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Boolean>
struct Func_2_t386;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t223;
// System.AsyncCallback
struct AsyncCallback_t224;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Byte>
#include "System_Core_System_Func_2_gen_1MethodDeclarations.h"
#define Func_2__ctor_m15266(__this, ___object, ___method, method) (( void (*) (Func_2_t386 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m15259_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m15267(__this, ___arg1, method) (( bool (*) (Func_2_t386 *, Object_t *, const MethodInfo*))Func_2_Invoke_m15261_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m15268(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t386 *, Object_t *, AsyncCallback_t224 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m15263_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m15269(__this, ___result, method) (( bool (*) (Func_2_t386 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m15265_gshared)(__this, ___result, method)
