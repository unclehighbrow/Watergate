﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Reflection.EventInfo
struct EventInfo_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MemberTypes.h"

// System.Void System.Reflection.EventInfo::.ctor()
extern "C" void EventInfo__ctor_m7994 (EventInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.EventInfo::get_EventHandlerType()
extern "C" Type_t * EventInfo_get_EventHandlerType_m7995 (EventInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.Reflection.EventInfo::get_MemberType()
extern "C" int32_t EventInfo_get_MemberType_m7996 (EventInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
