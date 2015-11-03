#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Nullable_1_gen.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m10551_gshared (Nullable_1_t1721 * __this, TimeSpan_t930  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m10551(__this, ___value, method) (( void (*) (Nullable_1_t1721 *, TimeSpan_t930 , const MethodInfo*))Nullable_1__ctor_m10551_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m10552_gshared (Nullable_1_t1721 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m10552(__this, method) (( bool (*) (Nullable_1_t1721 *, const MethodInfo*))Nullable_1_get_HasValue_m10552_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t930  Nullable_1_get_Value_m10553_gshared (Nullable_1_t1721 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m10553(__this, method) (( TimeSpan_t930  (*) (Nullable_1_t1721 *, const MethodInfo*))Nullable_1_get_Value_m10553_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m17885_gshared (Nullable_1_t1721 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m17885(__this, ___other, method) (( bool (*) (Nullable_1_t1721 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m17885_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m17886_gshared (Nullable_1_t1721 * __this, Nullable_1_t1721  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m17886(__this, ___other, method) (( bool (*) (Nullable_1_t1721 *, Nullable_1_t1721 , const MethodInfo*))Nullable_1_Equals_m17886_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m17887_gshared (Nullable_1_t1721 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m17887(__this, method) (( int32_t (*) (Nullable_1_t1721 *, const MethodInfo*))Nullable_1_GetHashCode_m17887_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m17888_gshared (Nullable_1_t1721 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m17888(__this, method) (( String_t* (*) (Nullable_1_t1721 *, const MethodInfo*))Nullable_1_ToString_m17888_gshared)(__this, method)
