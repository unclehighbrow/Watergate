﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t646;

#include "mscorlib_System_Object.h"

// System.MonoTypeInfo
struct  MonoTypeInfo_t1650  : public Object_t
{
	// System.String System.MonoTypeInfo::full_name
	String_t* ___full_name_0;
	// System.Reflection.ConstructorInfo System.MonoTypeInfo::default_ctor
	ConstructorInfo_t646 * ___default_ctor_1;
};
