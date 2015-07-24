#pragma once
#include <stdint.h>
// System.Runtime.Remoting.Activation.IActivator
struct IActivator_t1621;
// System.Object[]
struct ObjectU5BU5D_t73;
// System.Collections.IList
struct IList_t874;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t532;
// System.Runtime.Remoting.Messaging.MethodCall
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCall.h"
// System.Runtime.Remoting.Messaging.ConstructionCall
struct  ConstructionCall_t1646  : public MethodCall_t1647
{
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Messaging.ConstructionCall::_activator
	Object_t * ____activator_11;
	// System.Object[] System.Runtime.Remoting.Messaging.ConstructionCall::_activationAttributes
	ObjectU5BU5D_t73* ____activationAttributes_12;
	// System.Collections.IList System.Runtime.Remoting.Messaging.ConstructionCall::_contextProperties
	Object_t * ____contextProperties_13;
	// System.Type System.Runtime.Remoting.Messaging.ConstructionCall::_activationType
	Type_t * ____activationType_14;
	// System.String System.Runtime.Remoting.Messaging.ConstructionCall::_activationTypeName
	String_t* ____activationTypeName_15;
	// System.Boolean System.Runtime.Remoting.Messaging.ConstructionCall::_isContextOk
	bool ____isContextOk_16;
};
struct ConstructionCall_t1646_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.ConstructionCall::<>f__switch$map20
	Dictionary_2_t532 * ___U3CU3Ef__switchU24map20_17;
};
