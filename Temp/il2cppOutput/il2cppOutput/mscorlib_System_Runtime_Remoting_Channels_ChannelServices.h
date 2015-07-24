#pragma once
#include <stdint.h>
// System.Collections.ArrayList
struct ArrayList_t998;
// System.Runtime.Remoting.Contexts.CrossContextChannel
struct CrossContextChannel_t1630;
// System.String
struct String_t;
// System.Collections.IList
struct IList_t874;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.Channels.ChannelServices
struct  ChannelServices_t1631  : public Object_t
{
};
struct ChannelServices_t1631_StaticFields{
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.ChannelServices::registeredChannels
	ArrayList_t998 * ___registeredChannels_0;
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.ChannelServices::delayedClientChannels
	ArrayList_t998 * ___delayedClientChannels_1;
	// System.Runtime.Remoting.Contexts.CrossContextChannel System.Runtime.Remoting.Channels.ChannelServices::_crossContextSink
	CrossContextChannel_t1630 * ____crossContextSink_2;
	// System.String System.Runtime.Remoting.Channels.ChannelServices::CrossContextUrl
	String_t* ___CrossContextUrl_3;
	// System.Collections.IList System.Runtime.Remoting.Channels.ChannelServices::oldStartModeTypes
	Object_t * ___oldStartModeTypes_4;
};
