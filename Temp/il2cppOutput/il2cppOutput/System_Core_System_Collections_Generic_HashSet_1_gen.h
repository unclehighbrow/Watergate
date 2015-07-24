#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t1095;
// System.Collections.Generic.HashSet`1/Link<Node>[]
struct LinkU5BU5D_t2495;
// Node[]
struct NodeU5BU5D_t2490;
// System.Collections.Generic.IEqualityComparer`1<Node>
struct IEqualityComparer_1_t2497;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t732;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.HashSet`1<Node>
struct  HashSet_1_t93  : public Object_t
{
	// System.Int32[] System.Collections.Generic.HashSet`1<Node>::table
	Int32U5BU5D_t1095* ___table_0;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1<Node>::links
	LinkU5BU5D_t2495* ___links_1;
	// T[] System.Collections.Generic.HashSet`1<Node>::slots
	NodeU5BU5D_t2490* ___slots_2;
	// System.Int32 System.Collections.Generic.HashSet`1<Node>::touched
	int32_t ___touched_3;
	// System.Int32 System.Collections.Generic.HashSet`1<Node>::empty_slot
	int32_t ___empty_slot_4;
	// System.Int32 System.Collections.Generic.HashSet`1<Node>::count
	int32_t ___count_5;
	// System.Int32 System.Collections.Generic.HashSet`1<Node>::threshold
	int32_t ___threshold_6;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1<Node>::comparer
	Object_t* ___comparer_7;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1<Node>::si
	SerializationInfo_t732 * ___si_8;
	// System.Int32 System.Collections.Generic.HashSet`1<Node>::generation
	int32_t ___generation_9;
};
