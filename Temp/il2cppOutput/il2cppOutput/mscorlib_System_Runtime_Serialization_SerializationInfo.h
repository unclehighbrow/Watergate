#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t56;
// System.Collections.ArrayList
struct ArrayList_t998;
// System.String
struct String_t;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t1719;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t732  : public Object_t
{
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationInfo::serialized
	Hashtable_t56 * ___serialized_0;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationInfo::values
	ArrayList_t998 * ___values_1;
	// System.String System.Runtime.Serialization.SerializationInfo::assemblyName
	String_t* ___assemblyName_2;
	// System.String System.Runtime.Serialization.SerializationInfo::fullTypeName
	String_t* ___fullTypeName_3;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::converter
	Object_t * ___converter_4;
};
