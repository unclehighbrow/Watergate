#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.OrdinalComparer
struct OrdinalComparer_t1876;
// System.String
struct String_t;

// System.Void System.OrdinalComparer::.ctor(System.Boolean)
extern "C" void OrdinalComparer__ctor_m10422 (OrdinalComparer_t1876 * __this, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.OrdinalComparer::Compare(System.String,System.String)
extern "C" int32_t OrdinalComparer_Compare_m10423 (OrdinalComparer_t1876 * __this, String_t* ___x, String_t* ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.OrdinalComparer::Equals(System.String,System.String)
extern "C" bool OrdinalComparer_Equals_m10424 (OrdinalComparer_t1876 * __this, String_t* ___x, String_t* ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.OrdinalComparer::GetHashCode(System.String)
extern "C" int32_t OrdinalComparer_GetHashCode_m10425 (OrdinalComparer_t1876 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
