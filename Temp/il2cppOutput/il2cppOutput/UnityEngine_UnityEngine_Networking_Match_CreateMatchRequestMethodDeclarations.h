﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.CreateMatchRequest
struct CreateMatchRequest_t602;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
struct Dictionary_2_t601;

// System.Void UnityEngine.Networking.Match.CreateMatchRequest::.ctor()
extern "C" void CreateMatchRequest__ctor_m3099 (CreateMatchRequest_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_name()
extern "C" String_t* CreateMatchRequest_get_name_m3100 (CreateMatchRequest_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_name(System.String)
extern "C" void CreateMatchRequest_set_name_m3101 (CreateMatchRequest_t602 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.Match.CreateMatchRequest::get_size()
extern "C" uint32_t CreateMatchRequest_get_size_m3102 (CreateMatchRequest_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_size(System.UInt32)
extern "C" void CreateMatchRequest_set_size_m3103 (CreateMatchRequest_t602 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.Match.CreateMatchRequest::get_advertise()
extern "C" bool CreateMatchRequest_get_advertise_m3104 (CreateMatchRequest_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_advertise(System.Boolean)
extern "C" void CreateMatchRequest_set_advertise_m3105 (CreateMatchRequest_t602 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_password()
extern "C" String_t* CreateMatchRequest_get_password_m3106 (CreateMatchRequest_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_password(System.String)
extern "C" void CreateMatchRequest_set_password_m3107 (CreateMatchRequest_t602 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.CreateMatchRequest::get_matchAttributes()
extern "C" Dictionary_2_t601 * CreateMatchRequest_get_matchAttributes_m3108 (CreateMatchRequest_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.CreateMatchRequest::ToString()
extern "C" String_t* CreateMatchRequest_ToString_m3109 (CreateMatchRequest_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;