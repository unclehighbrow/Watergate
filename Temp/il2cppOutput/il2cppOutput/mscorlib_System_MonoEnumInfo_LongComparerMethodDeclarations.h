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

// System.MonoEnumInfo/LongComparer
struct LongComparer_t1627;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.MonoEnumInfo/LongComparer::.ctor()
extern "C" void LongComparer__ctor_m10073 (LongComparer_t1627 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MonoEnumInfo/LongComparer::Compare(System.Object,System.Object)
extern "C" int32_t LongComparer_Compare_m10074 (LongComparer_t1627 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MonoEnumInfo/LongComparer::Compare(System.Int64,System.Int64)
extern "C" int32_t LongComparer_Compare_m10075 (LongComparer_t1627 * __this, int64_t ___ix, int64_t ___iy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
