﻿#pragma once
#include <stdint.h>
// System.Threading.Mutex
struct Mutex_t1636;
// System.Threading.Thread
struct Thread_t1637;
// System.Runtime.Remoting.Contexts.ContextAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextAttribute.h"
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
struct  SynchronizationAttribute_t1638  : public ContextAttribute_t1628
{
	// System.Boolean System.Runtime.Remoting.Contexts.SynchronizationAttribute::_bReEntrant
	bool ____bReEntrant_1;
	// System.Int32 System.Runtime.Remoting.Contexts.SynchronizationAttribute::_flavor
	int32_t ____flavor_2;
	// System.Int32 System.Runtime.Remoting.Contexts.SynchronizationAttribute::_lockCount
	int32_t ____lockCount_3;
	// System.Threading.Mutex System.Runtime.Remoting.Contexts.SynchronizationAttribute::_mutex
	Mutex_t1636 * ____mutex_4;
	// System.Threading.Thread System.Runtime.Remoting.Contexts.SynchronizationAttribute::_ownerThread
	Thread_t1637 * ____ownerThread_5;
};
