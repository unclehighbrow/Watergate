#pragma once
#include <stdint.h>
// System.Reflection.MonoMethod
struct MonoMethod_t;
// System.Object[]
struct ObjectU5BU5D_t73;
// System.Byte[]
struct ByteU5BU5D_t551;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t1653;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t65;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t634;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct  MonoMethodMessage_t1642  : public Object_t
{
	// System.Reflection.MonoMethod System.Runtime.Remoting.Messaging.MonoMethodMessage::method
	MonoMethod_t * ___method_0;
	// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::args
	ObjectU5BU5D_t73* ___args_1;
	// System.Byte[] System.Runtime.Remoting.Messaging.MonoMethodMessage::arg_types
	ByteU5BU5D_t551* ___arg_types_2;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MonoMethodMessage::ctx
	LogicalCallContext_t1653 * ___ctx_3;
	// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::rval
	Object_t * ___rval_4;
	// System.Exception System.Runtime.Remoting.Messaging.MonoMethodMessage::exc
	Exception_t65 * ___exc_5;
	// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::uri
	String_t* ___uri_6;
	// System.Type[] System.Runtime.Remoting.Messaging.MonoMethodMessage::methodSignature
	TypeU5BU5D_t634* ___methodSignature_7;
};
