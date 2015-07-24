#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.DaylightTime
struct DaylightTime_t1501;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Globalization.DaylightTime::.ctor(System.DateTime,System.DateTime,System.TimeSpan)
extern "C" void DaylightTime__ctor_m7758 (DaylightTime_t1501 * __this, DateTime_t77  ___start, DateTime_t77  ___end, TimeSpan_t1064  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Globalization.DaylightTime::get_Start()
extern "C" DateTime_t77  DaylightTime_get_Start_m7759 (DaylightTime_t1501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Globalization.DaylightTime::get_End()
extern "C" DateTime_t77  DaylightTime_get_End_m7760 (DaylightTime_t1501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Globalization.DaylightTime::get_Delta()
extern "C" TimeSpan_t1064  DaylightTime_get_Delta_m7761 (DaylightTime_t1501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
