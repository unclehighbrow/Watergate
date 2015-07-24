#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Byte
struct Byte_t366;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t1912;
// System.String
struct String_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"

// System.Object System.Byte::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * Byte_System_IConvertible_ToType_m6215 (uint8_t* __this, Type_t * ___targetType, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Byte::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool Byte_System_IConvertible_ToBoolean_m6216 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Byte::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t Byte_System_IConvertible_ToByte_m6217 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Byte::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t Byte_System_IConvertible_ToChar_m6218 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Byte::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t77  Byte_System_IConvertible_ToDateTime_m6219 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Byte::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t762  Byte_System_IConvertible_ToDecimal_m6220 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Byte::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double Byte_System_IConvertible_ToDouble_m6221 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Byte::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t Byte_System_IConvertible_ToInt16_m6222 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Byte::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t Byte_System_IConvertible_ToInt32_m6223 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Byte::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t Byte_System_IConvertible_ToInt64_m6224 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Byte::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t Byte_System_IConvertible_ToSByte_m6225 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Byte::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float Byte_System_IConvertible_ToSingle_m6226 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Byte::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t Byte_System_IConvertible_ToUInt16_m6227 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Byte::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t Byte_System_IConvertible_ToUInt32_m6228 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Byte::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t Byte_System_IConvertible_ToUInt64_m6229 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Byte::CompareTo(System.Object)
extern "C" int32_t Byte_CompareTo_m6230 (uint8_t* __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Byte::Equals(System.Object)
extern "C" bool Byte_Equals_m6231 (uint8_t* __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Byte::GetHashCode()
extern "C" int32_t Byte_GetHashCode_m6232 (uint8_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Byte::CompareTo(System.Byte)
extern "C" int32_t Byte_CompareTo_m6233 (uint8_t* __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Byte::Equals(System.Byte)
extern "C" bool Byte_Equals_m6234 (uint8_t* __this, uint8_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Byte::Parse(System.String,System.IFormatProvider)
extern "C" uint8_t Byte_Parse_m6235 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Byte::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C" uint8_t Byte_Parse_m6236 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Byte::Parse(System.String)
extern "C" uint8_t Byte_Parse_m6237 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Byte::TryParse(System.String,System.Byte&)
extern "C" bool Byte_TryParse_m6238 (Object_t * __this /* static, unused */, String_t* ___s, uint8_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Byte::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Byte&)
extern "C" bool Byte_TryParse_m6239 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, uint8_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Byte::ToString()
extern "C" String_t* Byte_ToString_m6006 (uint8_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Byte::ToString(System.String)
extern "C" String_t* Byte_ToString_m4941 (uint8_t* __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Byte::ToString(System.IFormatProvider)
extern "C" String_t* Byte_ToString_m5964 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Byte::ToString(System.String,System.IFormatProvider)
extern "C" String_t* Byte_ToString_m5970 (uint8_t* __this, String_t* ___format, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
