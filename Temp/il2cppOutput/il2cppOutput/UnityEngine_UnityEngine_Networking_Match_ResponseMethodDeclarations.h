﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.Response
struct Response_t600;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void UnityEngine.Networking.Match.Response::.ctor()
extern "C" void Response__ctor_m3099 (Response_t600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.Match.Response::get_success()
extern "C" bool Response_get_success_m3100 (Response_t600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.Response::set_success(System.Boolean)
extern "C" void Response_set_success_m3101 (Response_t600 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.Response::get_extendedInfo()
extern "C" String_t* Response_get_extendedInfo_m3102 (Response_t600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.Response::set_extendedInfo(System.String)
extern "C" void Response_set_extendedInfo_m3103 (Response_t600 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.Response::ToString()
extern "C" String_t* Response_ToString_m3104 (Response_t600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.Response::Parse(System.Object)
extern "C" void Response_Parse_m3105 (Response_t600 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
