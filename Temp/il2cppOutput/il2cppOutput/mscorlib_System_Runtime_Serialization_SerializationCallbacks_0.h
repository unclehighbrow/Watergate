#pragma once
#include <stdint.h>
// System.Collections.ArrayList
struct ArrayList_t998;
// System.Collections.Hashtable
struct Hashtable_t56;
// System.Object
struct Object_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Serialization.SerializationCallbacks
struct  SerializationCallbacks_t1717  : public Object_t
{
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onSerializingList
	ArrayList_t998 * ___onSerializingList_0;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onSerializedList
	ArrayList_t998 * ___onSerializedList_1;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onDeserializingList
	ArrayList_t998 * ___onDeserializingList_2;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onDeserializedList
	ArrayList_t998 * ___onDeserializedList_3;
};
struct SerializationCallbacks_t1717_StaticFields{
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationCallbacks::cache
	Hashtable_t56 * ___cache_4;
	// System.Object System.Runtime.Serialization.SerializationCallbacks::cache_lock
	Object_t * ___cache_lock_5;
};
