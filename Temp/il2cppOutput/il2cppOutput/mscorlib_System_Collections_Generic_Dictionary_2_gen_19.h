﻿#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t1095;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t2561;
// System.Type[]
struct TypeU5BU5D_t634;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate[]
struct ConstructorDelegateU5BU5D_t2868;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t2869;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t732;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate,System.Collections.DictionaryEntry>
struct Transform_1_t2870;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
struct  Dictionary_2_t2866  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::table
	Int32U5BU5D_t1095* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::linkSlots
	LinkU5BU5D_t2561* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::keySlots
	TypeU5BU5D_t634* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::valueSlots
	ConstructorDelegateU5BU5D_t2868* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::serialization_info
	SerializationInfo_t732 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t2866_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::<>f__am$cacheB
	Transform_1_t2870 * ___U3CU3Ef__amU24cacheB_15;
};
