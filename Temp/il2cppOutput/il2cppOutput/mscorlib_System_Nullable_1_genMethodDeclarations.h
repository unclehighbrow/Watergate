#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_t1926;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m10567_gshared (Nullable_1_t1926 * __this, TimeSpan_t1063  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m10567(__this, ___value, method) (( void (*) (Nullable_1_t1926 *, TimeSpan_t1063 , const MethodInfo*))Nullable_1__ctor_m10567_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m10568_gshared (Nullable_1_t1926 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m10568(__this, method) (( bool (*) (Nullable_1_t1926 *, const MethodInfo*))Nullable_1_get_HasValue_m10568_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t1063  Nullable_1_get_Value_m10569_gshared (Nullable_1_t1926 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m10569(__this, method) (( TimeSpan_t1063  (*) (Nullable_1_t1926 *, const MethodInfo*))Nullable_1_get_Value_m10569_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m19261_gshared (Nullable_1_t1926 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m19261(__this, ___other, method) (( bool (*) (Nullable_1_t1926 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m19261_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m19262_gshared (Nullable_1_t1926 * __this, Nullable_1_t1926  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m19262(__this, ___other, method) (( bool (*) (Nullable_1_t1926 *, Nullable_1_t1926 , const MethodInfo*))Nullable_1_Equals_m19262_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m19263_gshared (Nullable_1_t1926 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m19263(__this, method) (( int32_t (*) (Nullable_1_t1926 *, const MethodInfo*))Nullable_1_GetHashCode_m19263_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m19264_gshared (Nullable_1_t1926 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m19264(__this, method) (( String_t* (*) (Nullable_1_t1926 *, const MethodInfo*))Nullable_1_ToString_m19264_gshared)(__this, method)
