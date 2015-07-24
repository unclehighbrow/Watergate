﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t56;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.RemotingConfiguration
struct  RemotingConfiguration_t1678  : public Object_t
{
};
struct RemotingConfiguration_t1678_StaticFields{
	// System.String System.Runtime.Remoting.RemotingConfiguration::applicationID
	String_t* ___applicationID_0;
	// System.String System.Runtime.Remoting.RemotingConfiguration::applicationName
	String_t* ___applicationName_1;
	// System.String System.Runtime.Remoting.RemotingConfiguration::processGuid
	String_t* ___processGuid_2;
	// System.Boolean System.Runtime.Remoting.RemotingConfiguration::defaultConfigRead
	bool ___defaultConfigRead_3;
	// System.Boolean System.Runtime.Remoting.RemotingConfiguration::defaultDelayedConfigRead
	bool ___defaultDelayedConfigRead_4;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::wellKnownClientEntries
	Hashtable_t56 * ___wellKnownClientEntries_5;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::activatedClientEntries
	Hashtable_t56 * ___activatedClientEntries_6;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::wellKnownServiceEntries
	Hashtable_t56 * ___wellKnownServiceEntries_7;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::activatedServiceEntries
	Hashtable_t56 * ___activatedServiceEntries_8;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::channelTemplates
	Hashtable_t56 * ___channelTemplates_9;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::clientProviderTemplates
	Hashtable_t56 * ___clientProviderTemplates_10;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::serverProviderTemplates
	Hashtable_t56 * ___serverProviderTemplates_11;
};
