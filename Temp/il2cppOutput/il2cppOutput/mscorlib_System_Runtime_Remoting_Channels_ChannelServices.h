﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ArrayList
struct ArrayList_t690;
// System.Runtime.Remoting.Contexts.CrossContextChannel
struct CrossContextChannel_t1368;
// System.String
struct String_t;
// System.Collections.IList
struct IList_t980;

#include "mscorlib_System_Object.h"

// System.Runtime.Remoting.Channels.ChannelServices
struct  ChannelServices_t1367  : public Object_t
{
};
struct ChannelServices_t1367_StaticFields{
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.ChannelServices::registeredChannels
	ArrayList_t690 * ___registeredChannels_0;
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.ChannelServices::delayedClientChannels
	ArrayList_t690 * ___delayedClientChannels_1;
	// System.Runtime.Remoting.Contexts.CrossContextChannel System.Runtime.Remoting.Channels.ChannelServices::_crossContextSink
	CrossContextChannel_t1368 * ____crossContextSink_2;
	// System.String System.Runtime.Remoting.Channels.ChannelServices::CrossContextUrl
	String_t* ___CrossContextUrl_3;
	// System.Collections.IList System.Runtime.Remoting.Channels.ChannelServices::oldStartModeTypes
	Object_t * ___oldStartModeTypes_4;
};
