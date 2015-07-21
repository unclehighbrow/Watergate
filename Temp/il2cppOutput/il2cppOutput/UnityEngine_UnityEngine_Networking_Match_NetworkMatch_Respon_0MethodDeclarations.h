#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>
struct ResponseDelegate_1_t717;
// System.Object
struct Object_t;
// UnityEngine.Networking.Match.JoinMatchResponse
struct JoinMatchResponse_t605;
// System.IAsyncResult
struct IAsyncResult_t222;
// System.AsyncCallback
struct AsyncCallback_t223;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_3MethodDeclarations.h"
#define ResponseDelegate_1__ctor_m17336(__this, ___object, ___method, method) (( void (*) (ResponseDelegate_1_t717 *, Object_t *, IntPtr_t, const MethodInfo*))ResponseDelegate_1__ctor_m17324_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>::Invoke(T)
#define ResponseDelegate_1_Invoke_m17337(__this, ___response, method) (( void (*) (ResponseDelegate_1_t717 *, JoinMatchResponse_t605 *, const MethodInfo*))ResponseDelegate_1_Invoke_m17326_gshared)(__this, ___response, method)
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define ResponseDelegate_1_BeginInvoke_m17338(__this, ___response, ___callback, ___object, method) (( Object_t * (*) (ResponseDelegate_1_t717 *, JoinMatchResponse_t605 *, AsyncCallback_t223 *, Object_t *, const MethodInfo*))ResponseDelegate_1_BeginInvoke_m17328_gshared)(__this, ___response, ___callback, ___object, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>::EndInvoke(System.IAsyncResult)
#define ResponseDelegate_1_EndInvoke_m17339(__this, ___result, method) (( void (*) (ResponseDelegate_1_t717 *, Object_t *, const MethodInfo*))ResponseDelegate_1_EndInvoke_m17330_gshared)(__this, ___result, method)
