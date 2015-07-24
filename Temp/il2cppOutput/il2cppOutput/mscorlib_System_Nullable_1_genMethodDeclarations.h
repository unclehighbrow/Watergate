#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_t1927;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m10575_gshared (Nullable_1_t1927 * __this, TimeSpan_t1064  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m10575(__this, ___value, method) (( void (*) (Nullable_1_t1927 *, TimeSpan_t1064 , const MethodInfo*))Nullable_1__ctor_m10575_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m10576_gshared (Nullable_1_t1927 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m10576(__this, method) (( bool (*) (Nullable_1_t1927 *, const MethodInfo*))Nullable_1_get_HasValue_m10576_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t1064  Nullable_1_get_Value_m10577_gshared (Nullable_1_t1927 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m10577(__this, method) (( TimeSpan_t1064  (*) (Nullable_1_t1927 *, const MethodInfo*))Nullable_1_get_Value_m10577_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m19269_gshared (Nullable_1_t1927 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m19269(__this, ___other, method) (( bool (*) (Nullable_1_t1927 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m19269_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m19270_gshared (Nullable_1_t1927 * __this, Nullable_1_t1927  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m19270(__this, ___other, method) (( bool (*) (Nullable_1_t1927 *, Nullable_1_t1927 , const MethodInfo*))Nullable_1_Equals_m19270_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m19271_gshared (Nullable_1_t1927 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m19271(__this, method) (( int32_t (*) (Nullable_1_t1927 *, const MethodInfo*))Nullable_1_GetHashCode_m19271_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m19272_gshared (Nullable_1_t1927 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m19272(__this, method) (( String_t* (*) (Nullable_1_t1927 *, const MethodInfo*))Nullable_1_ToString_m19272_gshared)(__this, method)
