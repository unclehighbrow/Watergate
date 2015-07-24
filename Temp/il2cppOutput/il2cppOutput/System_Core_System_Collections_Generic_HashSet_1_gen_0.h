#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t1095;
// System.Collections.Generic.HashSet`1/Link<System.Object>[]
struct LinkU5BU5D_t2498;
// System.Object[]
struct ObjectU5BU5D_t73;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2500;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t732;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.HashSet`1<System.Object>
struct  HashSet_1_t2501  : public Object_t
{
	// System.Int32[] System.Collections.Generic.HashSet`1<System.Object>::table
	Int32U5BU5D_t1095* ___table_0;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1<System.Object>::links
	LinkU5BU5D_t2498* ___links_1;
	// T[] System.Collections.Generic.HashSet`1<System.Object>::slots
	ObjectU5BU5D_t73* ___slots_2;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::touched
	int32_t ___touched_3;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::empty_slot
	int32_t ___empty_slot_4;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::count
	int32_t ___count_5;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::threshold
	int32_t ___threshold_6;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1<System.Object>::comparer
	Object_t* ___comparer_7;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1<System.Object>::si
	SerializationInfo_t732 * ___si_8;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::generation
	int32_t ___generation_9;
};
