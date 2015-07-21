#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.CurrentSystemTimeZone
struct CurrentSystemTimeZone_t1880;
// System.Object
struct Object_t;
// System.Int64[]
struct Int64U5BU5D_t1914;
// System.String[]
struct StringU5BU5D_t46;
// System.Globalization.DaylightTime
struct DaylightTime_t1500;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.CurrentSystemTimeZone::.ctor()
extern "C" void CurrentSystemTimeZone__ctor_m10468 (CurrentSystemTimeZone_t1880 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::.ctor(System.Int64)
extern "C" void CurrentSystemTimeZone__ctor_m10469 (CurrentSystemTimeZone_t1880 * __this, int64_t ___lnow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void CurrentSystemTimeZone_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m10470 (CurrentSystemTimeZone_t1880 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CurrentSystemTimeZone::GetTimeZoneData(System.Int32,System.Int64[]&,System.String[]&)
extern "C" bool CurrentSystemTimeZone_GetTimeZoneData_m10471 (Object_t * __this /* static, unused */, int32_t ___year, Int64U5BU5D_t1914** ___data, StringU5BU5D_t46** ___names, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightChanges(System.Int32)
extern "C" DaylightTime_t1500 * CurrentSystemTimeZone_GetDaylightChanges_m10472 (CurrentSystemTimeZone_t1880 * __this, int32_t ___year, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.CurrentSystemTimeZone::GetUtcOffset(System.DateTime)
extern "C" TimeSpan_t1063  CurrentSystemTimeZone_GetUtcOffset_m10473 (CurrentSystemTimeZone_t1880 * __this, DateTime_t73  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::OnDeserialization(System.Globalization.DaylightTime)
extern "C" void CurrentSystemTimeZone_OnDeserialization_m10474 (CurrentSystemTimeZone_t1880 * __this, DaylightTime_t1500 * ___dlt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightTimeFromData(System.Int64[])
extern "C" DaylightTime_t1500 * CurrentSystemTimeZone_GetDaylightTimeFromData_m10475 (CurrentSystemTimeZone_t1880 * __this, Int64U5BU5D_t1914* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
