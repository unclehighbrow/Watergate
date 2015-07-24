#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
struct ThreadSafeDictionaryValueFactory_2_t764;
// System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
struct Dictionary_2_t2866;
// System.Object
#include "mscorlib_System_Object.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
struct  ThreadSafeDictionary_2_t765  : public Object_t
{
	// System.Object SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::_lock
	Object_t * ____lock_0;
	// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::_valueFactory
	ThreadSafeDictionaryValueFactory_2_t764 * ____valueFactory_1;
	// System.Collections.Generic.Dictionary`2<TKey,TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::_dictionary
	Dictionary_2_t2866 * ____dictionary_2;
};
