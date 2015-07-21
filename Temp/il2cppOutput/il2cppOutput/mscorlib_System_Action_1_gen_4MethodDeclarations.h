#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
struct Action_1_t489;
// System.Object
struct Object_t;
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t662;
// System.IAsyncResult
struct IAsyncResult_t222;
// System.AsyncCallback
struct AsyncCallback_t223;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_5MethodDeclarations.h"
#define Action_1__ctor_m15426(__this, ___object, ___method, method) (( void (*) (Action_1_t489 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m11756_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::Invoke(T)
#define Action_1_Invoke_m15427(__this, ___obj, method) (( void (*) (Action_1_t489 *, IUserProfileU5BU5D_t662*, const MethodInfo*))Action_1_Invoke_m11758_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m15428(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t489 *, IUserProfileU5BU5D_t662*, AsyncCallback_t223 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m11760_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m15429(__this, ___result, method) (( void (*) (Action_1_t489 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m11762_gshared)(__this, ___result, method)
