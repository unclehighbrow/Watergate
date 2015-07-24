#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.Impl.LocalUser
struct LocalUser_t493;
// System.Action`1<System.Boolean>
struct Action_1_t18;
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t663;

// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
extern "C" void LocalUser__ctor_m3341 (LocalUser_t493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::Authenticate(System.Action`1<System.Boolean>)
extern "C" void LocalUser_Authenticate_m3342 (LocalUser_t493 * __this, Action_1_t18 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetFriends(UnityEngine.SocialPlatforms.IUserProfile[])
extern "C" void LocalUser_SetFriends_m3343 (LocalUser_t493 * __this, IUserProfileU5BU5D_t663* ___friends, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
extern "C" void LocalUser_SetAuthenticated_m3344 (LocalUser_t493 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
extern "C" void LocalUser_SetUnderage_m3345 (LocalUser_t493 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::get_authenticated()
extern "C" bool LocalUser_get_authenticated_m3346 (LocalUser_t493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
