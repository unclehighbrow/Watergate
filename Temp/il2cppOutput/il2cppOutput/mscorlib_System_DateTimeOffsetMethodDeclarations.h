#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DateTimeOffset
struct DateTimeOffset_t775;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t732;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IFormatProvider
struct IFormatProvider_t1912;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.DateTimeOffset::.ctor(System.DateTime)
extern "C" void DateTimeOffset__ctor_m10084 (DateTimeOffset_t775 * __this, DateTime_t77  ___dateTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.DateTime,System.TimeSpan)
extern "C" void DateTimeOffset__ctor_m10085 (DateTimeOffset_t775 * __this, DateTime_t77  ___dateTime, TimeSpan_t1064  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.Int64,System.TimeSpan)
extern "C" void DateTimeOffset__ctor_m10086 (DateTimeOffset_t775 * __this, int64_t ___ticks, TimeSpan_t1064  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DateTimeOffset__ctor_m10087 (DateTimeOffset_t775 * __this, SerializationInfo_t732 * ___info, StreamingContext_t733  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.cctor()
extern "C" void DateTimeOffset__cctor_m10088 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::System.IComparable.CompareTo(System.Object)
extern "C" int32_t DateTimeOffset_System_IComparable_CompareTo_m10089 (DateTimeOffset_t775 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DateTimeOffset_System_Runtime_Serialization_ISerializable_GetObjectData_m10090 (DateTimeOffset_t775 * __this, SerializationInfo_t732 * ___info, StreamingContext_t733  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void DateTimeOffset_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m10091 (DateTimeOffset_t775 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::CompareTo(System.DateTimeOffset)
extern "C" int32_t DateTimeOffset_CompareTo_m10092 (DateTimeOffset_t775 * __this, DateTimeOffset_t775  ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::Equals(System.DateTimeOffset)
extern "C" bool DateTimeOffset_Equals_m10093 (DateTimeOffset_t775 * __this, DateTimeOffset_t775  ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::Equals(System.Object)
extern "C" bool DateTimeOffset_Equals_m10094 (DateTimeOffset_t775 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::GetHashCode()
extern "C" int32_t DateTimeOffset_GetHashCode_m10095 (DateTimeOffset_t775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeOffset::ToString()
extern "C" String_t* DateTimeOffset_ToString_m10096 (DateTimeOffset_t775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeOffset::ToString(System.String,System.IFormatProvider)
extern "C" String_t* DateTimeOffset_ToString_m3623 (DateTimeOffset_t775 * __this, String_t* ___format, Object_t * ___formatProvider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTimeOffset System.DateTimeOffset::ToUniversalTime()
extern "C" DateTimeOffset_t775  DateTimeOffset_ToUniversalTime_m3622 (DateTimeOffset_t775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_DateTime()
extern "C" DateTime_t77  DateTimeOffset_get_DateTime_m10097 (DateTimeOffset_t775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.DateTimeOffset::get_Offset()
extern "C" TimeSpan_t1064  DateTimeOffset_get_Offset_m10098 (DateTimeOffset_t775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_UtcDateTime()
extern "C" DateTime_t77  DateTimeOffset_get_UtcDateTime_m10099 (DateTimeOffset_t775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
